import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;

public class ExportDecompilation extends GhidraScript {

    private Path outRoot;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        outRoot = Paths.get(args.length > 0 ? args[0] : "/tmp/decomp_out");
        Files.createDirectories(outRoot.resolve("src"));
        Files.createDirectories(outRoot.resolve("include"));
        Files.createDirectories(outRoot.resolve("analysis"));

        exportTypes();
        exportSymbols();
        exportStrings();
        exportMemoryMap();
        exportFunctions();
    }

    private static String sanitize(String s) {
        StringBuilder b = new StringBuilder();
        for (char c : s.toCharArray()) {
            if (Character.isLetterOrDigit(c) || c == '_' || c == '-' || c == '.') {
                b.append(c);
            }
            else {
                b.append('_');
            }
        }
        String r = b.toString();
        if (r.length() > 90) {
            r = r.substring(0, 90) + "_" + Integer.toHexString(s.hashCode());
        }
        if (r.isEmpty()) {
            r = "unnamed";
        }
        return r;
    }

    private static String stripComments(String src) {
        StringBuilder out = new StringBuilder(src.length());
        int n = src.length();
        int i = 0;
        while (i < n) {
            char c = src.charAt(i);
            if (c == '"' || c == '\'') {
                char q = c;
                out.append(c);
                i++;
                while (i < n) {
                    char d = src.charAt(i);
                    out.append(d);
                    i++;
                    if (d == '\\' && i < n) {
                        out.append(src.charAt(i));
                        i++;
                        continue;
                    }
                    if (d == q) {
                        break;
                    }
                }
                continue;
            }
            if (c == '/' && i + 1 < n && src.charAt(i + 1) == '*') {
                i += 2;
                while (i + 1 < n && !(src.charAt(i) == '*' && src.charAt(i + 1) == '/')) {
                    i++;
                }
                i += 2;
                continue;
            }
            if (c == '/' && i + 1 < n && src.charAt(i + 1) == '/') {
                while (i < n && src.charAt(i) != '\n') {
                    i++;
                }
                continue;
            }
            out.append(c);
            i++;
        }
        return out.toString();
    }

    private static String tidy(String src) {
        String s = stripComments(src);
        String[] lines = s.split("\n", -1);
        StringBuilder b = new StringBuilder();
        int blanks = 0;
        for (String raw : lines) {
            String line = raw.replaceAll("[ \t]+$", "");
            if (line.trim().isEmpty()) {
                blanks++;
                if (blanks > 1) {
                    continue;
                }
                b.append("\n");
            }
            else {
                blanks = 0;
                b.append(line).append("\n");
            }
        }
        return b.toString();
    }

    private DecompileOptions buildOptions() {
        DecompileOptions o = new DecompileOptions();
        o.setEOLCommentIncluded(false);
        o.setPLATECommentIncluded(false);
        o.setPRECommentIncluded(false);
        o.setPOSTCommentIncluded(false);
        o.setWARNCommentIncluded(false);
        o.setHeadCommentIncluded(false);
        o.setCommentStyle(DecompileOptions.CommentStyleEnum.CPPStyle);
        o.setMaxWidth(120);
        o.setEliminateUnreachable(true);
        return o;
    }

    private void exportFunctions() throws Exception {
        DecompInterface ifc = new DecompInterface();
        ifc.setOptions(buildOptions());
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(true);
        ifc.setSimplificationStyle("decompile");
        if (!ifc.openProgram(currentProgram)) {
            throw new IOException("decompiler failed to open program: " + ifc.getLastMessage());
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        List<Function> funcs = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) {
            funcs.add(f);
        }
        println("functions to decompile: " + funcs.size());

        Map<String, StringBuilder> buckets = new TreeMap<>();
        Map<String, Integer> bucketCount = new TreeMap<>();
        StringBuilder index = new StringBuilder();
        index.append("| address | file | signature |\n");
        index.append("|---------|------|-----------|\n");

        int done = 0;
        int failed = 0;
        StringBuilder failLog = new StringBuilder();

        for (Function f : funcs) {
            monitor.checkCancelled();
            String bucket = bucketFor(f);
            StringBuilder sb = buckets.get(bucket);
            if (sb == null) {
                sb = new StringBuilder();
                sb.append("#include \"../include/aerialclient_types.h\"\n\n");
                buckets.put(bucket, sb);
                bucketCount.put(bucket, 0);
            }

            String code;
            DecompileResults res = ifc.decompileFunction(f, 180, monitor);
            if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                code = tidy(res.getDecompiledFunction().getC());
            }
            else {
                failed++;
                String msg = res == null ? "null result" : String.valueOf(res.getErrorMessage());
                failLog.append(f.getEntryPoint()).append("  ").append(f.getName()).append("  ").append(msg.replace('\n', ' ')).append("\n");
                code = f.getSignature().getPrototypeString(true) + "\n{\n}\n";
            }

            sb.append(code);
            if (!code.endsWith("\n")) {
                sb.append("\n");
            }
            sb.append("\n");
            bucketCount.put(bucket, bucketCount.get(bucket) + 1);

            index.append("| ").append(f.getEntryPoint()).append(" | src/").append(bucket).append(".c | `")
                    .append(f.getSignature().getPrototypeString(true).replace("|", "\\|")).append("` |\n");

            done++;
            if (done % 250 == 0) {
                println("decompiled " + done + "/" + funcs.size());
            }
        }
        ifc.dispose();

        for (Map.Entry<String, StringBuilder> e : buckets.entrySet()) {
            Path p = outRoot.resolve("src").resolve(e.getKey() + ".c");
            Files.createDirectories(p.getParent());
            Files.write(p, e.getValue().toString().getBytes(StandardCharsets.UTF_8));
        }
        Files.write(outRoot.resolve("analysis/function_index.md"), index.toString().getBytes(StandardCharsets.UTF_8));
        Files.write(outRoot.resolve("analysis/decompile_failures.txt"), failLog.toString().getBytes(StandardCharsets.UTF_8));
        println("done=" + done + " failed=" + failed + " files=" + buckets.size());
    }

    private String bucketFor(Function f) {
        Namespace ns = f.getParentNamespace();
        if (ns != null && !ns.isGlobal()) {
            String name = ns.getName(true).replace("::", "__");
            return "classes/" + sanitize(name);
        }
        Address a = f.getEntryPoint();
        MemoryBlock blk = currentProgram.getMemory().getBlock(a);
        String bn = blk == null ? "unknown" : sanitize(blk.getName());
        long base = a.getOffset() & ~0xFFFFL;
        return "functions/" + bn + "_" + String.format("%012x", base);
    }

    private void exportTypes() throws Exception {
        Path p = outRoot.resolve("include/aerialclient_types.h");
        try (Writer w = Files.newBufferedWriter(p, StandardCharsets.UTF_8)) {
            w.write("#ifndef AERIALCLIENT_TYPES_H\n#define AERIALCLIENT_TYPES_H\n\n");
            StringWriter sw = new StringWriter();
            DataTypeWriter dtw = new DataTypeWriter(currentProgram.getDataTypeManager(), sw);
            List<DataType> all = new ArrayList<>();
            Iterator<DataType> it = currentProgram.getDataTypeManager().getAllDataTypes();
            while (it.hasNext()) {
                all.add(it.next());
            }
            dtw.write(all, monitor);
            w.write(tidy(sw.toString()));
            w.write("\n#endif\n");
        }
    }

    private void exportSymbols() throws Exception {
        SymbolTable st = currentProgram.getSymbolTable();
        StringBuilder b = new StringBuilder();
        b.append("address\ttype\tnamespace\tname\n");
        SymbolIterator it = st.getAllSymbols(true);
        while (it.hasNext()) {
            Symbol s = it.next();
            b.append(s.getAddress()).append('\t')
             .append(s.getSymbolType()).append('\t')
             .append(s.getParentNamespace() == null ? "" : s.getParentNamespace().getName(true)).append('\t')
             .append(s.getName()).append('\n');
        }
        Files.write(outRoot.resolve("analysis/symbols.tsv"), b.toString().getBytes(StandardCharsets.UTF_8));
    }

    private void exportStrings() throws Exception {
        StringBuilder b = new StringBuilder();
        DataIterator it = currentProgram.getListing().getDefinedData(true);
        while (it.hasNext()) {
            Data d = it.next();
            DataType dt = d.getDataType();
            if (dt instanceof AbstractStringDataType) {
                Object v = d.getValue();
                if (v != null) {
                    b.append(d.getAddress()).append('\t').append(dt.getName()).append('\t')
                     .append(String.valueOf(v).replace("\n", "\\n").replace("\t", "\\t").replace("\r", "\\r")).append('\n');
                }
            }
        }
        Files.write(outRoot.resolve("analysis/strings_defined.tsv"), b.toString().getBytes(StandardCharsets.UTF_8));
    }

    private void exportMemoryMap() throws Exception {
        StringBuilder b = new StringBuilder();
        b.append("| block | start | end | size | r | w | x | initialized |\n");
        b.append("|-------|-------|-----|------|---|---|---|-------------|\n");
        for (MemoryBlock m : currentProgram.getMemory().getBlocks()) {
            b.append("| ").append(m.getName()).append(" | ").append(m.getStart()).append(" | ").append(m.getEnd())
             .append(" | 0x").append(Long.toHexString(m.getSize())).append(" | ").append(m.isRead())
             .append(" | ").append(m.isWrite()).append(" | ").append(m.isExecute())
             .append(" | ").append(m.isInitialized()).append(" |\n");
        }
        Files.write(outRoot.resolve("analysis/memory_map.md"), b.toString().getBytes(StandardCharsets.UTF_8));
    }
}
