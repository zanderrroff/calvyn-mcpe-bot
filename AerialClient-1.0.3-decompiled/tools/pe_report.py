import hashlib, json, os, re, sys
import pefile

path = sys.argv[1]
out = sys.argv[2]
data = open(path, 'rb').read()
pe = pefile.PE(path)

L = []
w = L.append

w("# AerialClient.dll - PE static analysis")
w("")
w("## File")
w(f"- size: {len(data)} bytes")
for algo in ("md5", "sha1", "sha256"):
    w(f"- {algo}: {hashlib.new(algo, data).hexdigest()}")
w(f"- imphash: {pe.get_imphash()}")
w("")

w("## DOS / NT headers")
w(f"- Machine: 0x{pe.FILE_HEADER.Machine:04x}")
w(f"- NumberOfSections: {pe.FILE_HEADER.NumberOfSections}")
w(f"- TimeDateStamp: {pe.FILE_HEADER.TimeDateStamp} ({pe.FILE_HEADER.dump_dict()['TimeDateStamp']['Value']})")
w(f"- Characteristics: 0x{pe.FILE_HEADER.Characteristics:04x}")
w(f"- Magic: 0x{pe.OPTIONAL_HEADER.Magic:04x}")
w(f"- LinkerVersion: {pe.OPTIONAL_HEADER.MajorLinkerVersion}.{pe.OPTIONAL_HEADER.MinorLinkerVersion}")
w(f"- SizeOfCode: {pe.OPTIONAL_HEADER.SizeOfCode}")
w(f"- AddressOfEntryPoint: 0x{pe.OPTIONAL_HEADER.AddressOfEntryPoint:x}")
w(f"- ImageBase: 0x{pe.OPTIONAL_HEADER.ImageBase:x}")
w(f"- SectionAlignment: 0x{pe.OPTIONAL_HEADER.SectionAlignment:x}")
w(f"- FileAlignment: 0x{pe.OPTIONAL_HEADER.FileAlignment:x}")
w(f"- Subsystem: {pe.OPTIONAL_HEADER.Subsystem}")
w(f"- DllCharacteristics: 0x{pe.OPTIONAL_HEADER.DllCharacteristics:04x}")
w(f"- SizeOfImage: {pe.OPTIONAL_HEADER.SizeOfImage}")
w(f"- SizeOfHeaders: {pe.OPTIONAL_HEADER.SizeOfHeaders}")
w(f"- CheckSum: 0x{pe.OPTIONAL_HEADER.CheckSum:x}")
w(f"- SizeOfStackReserve: 0x{pe.OPTIONAL_HEADER.SizeOfStackReserve:x}")
w(f"- SizeOfHeapReserve: 0x{pe.OPTIONAL_HEADER.SizeOfHeapReserve:x}")
w("")

w("## Data directories")
w("")
w("| # | Name | VirtualAddress | Size |")
w("|---|------|----------------|------|")
for i, d in enumerate(pe.OPTIONAL_HEADER.DATA_DIRECTORY):
    w(f"| {i} | {d.name} | 0x{d.VirtualAddress:x} | {d.Size} |")
w("")

w("## Sections")
w("")
w("| Name | VirtAddr | VirtSize | RawPtr | RawSize | Characteristics | Entropy |")
w("|------|----------|----------|--------|---------|-----------------|---------|")
for s in pe.sections:
    n = s.Name.rstrip(b"\x00").decode(errors="replace")
    w(f"| {n} | 0x{s.VirtualAddress:x} | 0x{s.Misc_VirtualSize:x} | 0x{s.PointerToRawData:x} | 0x{s.SizeOfRawData:x} | 0x{s.Characteristics:08x} | {s.get_entropy():.4f} |")
w("")

w("## Exports")
w("")
if hasattr(pe, "DIRECTORY_ENTRY_EXPORT"):
    dn = pe.DIRECTORY_ENTRY_EXPORT.name
    w(f"- DLL name: {dn.decode() if dn else '(none)'}")
    w("")
    w("| Ordinal | RVA | Name |")
    w("|---------|-----|------|")
    for e in pe.DIRECTORY_ENTRY_EXPORT.symbols:
        w(f"| {e.ordinal} | 0x{e.address:x} | {e.name.decode() if e.name else '(unnamed)'} |")
else:
    w("(no export directory)")
w("")

w("## Imports")
w("")
total = 0
if hasattr(pe, "DIRECTORY_ENTRY_IMPORT"):
    for m in pe.DIRECTORY_ENTRY_IMPORT:
        w(f"### {m.dll.decode()}")
        w("")
        for imp in m.imports:
            nm = imp.name.decode() if imp.name else f"ordinal {imp.ordinal}"
            w(f"- 0x{imp.address:x}  {nm}")
            total += 1
        w("")
    w(f"total imported symbols: {total}")
else:
    w("(no import directory)")
w("")

w("## Delay imports")
w("")
if hasattr(pe, "DIRECTORY_ENTRY_DELAY_IMPORT"):
    for m in pe.DIRECTORY_ENTRY_DELAY_IMPORT:
        w(f"### {m.dll.decode()}")
        for imp in m.imports:
            nm = imp.name.decode() if imp.name else f"ordinal {imp.ordinal}"
            w(f"- {nm}")
        w("")
else:
    w("(none)")
w("")

w("## Resources")
w("")
if hasattr(pe, "DIRECTORY_ENTRY_RESOURCE"):
    for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
        tn = t.name.string.decode(errors="replace") if t.name else pefile.RESOURCE_TYPE.get(t.struct.Id, str(t.struct.Id))
        for i in getattr(t, "directory", type("x", (), {"entries": []})).entries:
            iid = i.name.string.decode(errors="replace") if i.name else i.struct.Id
            for l in i.directory.entries:
                w(f"- type={tn} id={iid} lang={l.struct.Id} rva=0x{l.data.struct.OffsetToData:x} size={l.data.struct.Size}")
else:
    w("(no resource directory)")
w("")

w("## TLS")
w("")
if hasattr(pe, "DIRECTORY_ENTRY_TLS") and pe.DIRECTORY_ENTRY_TLS:
    s = pe.DIRECTORY_ENTRY_TLS.struct
    w(f"- StartAddressOfRawData: 0x{s.StartAddressOfRawData:x}")
    w(f"- EndAddressOfRawData: 0x{s.EndAddressOfRawData:x}")
    w(f"- AddressOfIndex: 0x{s.AddressOfIndex:x}")
    w(f"- AddressOfCallBacks: 0x{s.AddressOfCallBacks:x}")
else:
    w("(no TLS directory)")
w("")

w("## Debug directory")
w("")
if hasattr(pe, "DIRECTORY_ENTRY_DEBUG"):
    for d in pe.DIRECTORY_ENTRY_DEBUG:
        w(f"- Type: {d.struct.Type}  TimeDateStamp: {d.struct.TimeDateStamp}  SizeOfData: {d.struct.SizeOfData}")
        ent = getattr(d, "entry", None)
        if ent is not None:
            for k in ("PdbFileName", "Signature_Data1", "Age"):
                v = getattr(ent, k, None)
                if v is not None:
                    if isinstance(v, bytes):
                        v = v.rstrip(b"\x00").decode(errors="replace")
                    w(f"  - {k}: {v}")
else:
    w("(no debug directory)")
w("")

w("## Load config / security cookie")
w("")
if hasattr(pe, "DIRECTORY_ENTRY_LOAD_CONFIG"):
    s = pe.DIRECTORY_ENTRY_LOAD_CONFIG.struct
    for f in ("Size", "SecurityCookie", "SEHandlerTable", "GuardCFCheckFunctionPointer", "GuardFlags"):
        v = getattr(s, f, None)
        if v is not None:
            w(f"- {f}: 0x{v:x}" if isinstance(v, int) else f"- {f}: {v}")
else:
    w("(none)")

open(out, "w", encoding="utf-8").write("\n".join(L) + "\n")
print("written", out, len(L), "lines")
