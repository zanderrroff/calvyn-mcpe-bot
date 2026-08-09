# AerialClient.dll - PE static analysis

## File
- size: 3488768 bytes
- md5: 919e8be8d646ffa0562f8071258a0806
- sha1: 2195a0f8ffac9a5f9d026e0ff09ea1d9737a92f9
- sha256: a9dd5bfe805ce643f6dcaaf04e9f15317d412a8a7ab9a0a2fe0340b5e9d6d479
- imphash: b4c10597d6d26f460468df18f2e42f24

## DOS / NT headers
- Machine: 0x8664
- NumberOfSections: 7
- TimeDateStamp: 1786277293 (0x6A786DAD [Sun Aug  9 12:08:13 2026 UTC])
- Characteristics: 0x2022
- Magic: 0x020b
- LinkerVersion: 14.44
- SizeOfCode: 2129408
- AddressOfEntryPoint: 0x1d69d8
- ImageBase: 0x180000000
- SectionAlignment: 0x1000
- FileAlignment: 0x200
- Subsystem: 2
- DllCharacteristics: 0x0160
- SizeOfImage: 3543040
- SizeOfHeaders: 1024
- CheckSum: 0x0
- SizeOfStackReserve: 0x100000
- SizeOfHeapReserve: 0x100000

## Data directories

| # | Name | VirtualAddress | Size |
|---|------|----------------|------|
| 0 | IMAGE_DIRECTORY_ENTRY_EXPORT | 0x0 | 0 |
| 1 | IMAGE_DIRECTORY_ENTRY_IMPORT | 0x26e2d4 | 220 |
| 2 | IMAGE_DIRECTORY_ENTRY_RESOURCE | 0x2b7000 | 685688 |
| 3 | IMAGE_DIRECTORY_ENTRY_EXCEPTION | 0x2ab000 | 44160 |
| 4 | IMAGE_DIRECTORY_ENTRY_SECURITY | 0x0 | 0 |
| 5 | IMAGE_DIRECTORY_ENTRY_BASERELOC | 0x35f000 | 4812 |
| 6 | IMAGE_DIRECTORY_ENTRY_DEBUG | 0x24ffb0 | 28 |
| 7 | IMAGE_DIRECTORY_ENTRY_COPYRIGHT | 0x0 | 0 |
| 8 | IMAGE_DIRECTORY_ENTRY_GLOBALPTR | 0x0 | 0 |
| 9 | IMAGE_DIRECTORY_ENTRY_TLS | 0x250180 | 40 |
| 10 | IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG | 0x24fe70 | 320 |
| 11 | IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT | 0x0 | 0 |
| 12 | IMAGE_DIRECTORY_ENTRY_IAT | 0x209000 | 1496 |
| 13 | IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT | 0x0 | 0 |
| 14 | IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR | 0x0 | 0 |
| 15 | IMAGE_DIRECTORY_ENTRY_RESERVED | 0x0 | 0 |

## Sections

| Name | VirtAddr | VirtSize | RawPtr | RawSize | Characteristics | Entropy |
|------|----------|----------|--------|---------|-----------------|---------|
| .text | 0x1000 | 0x207c70 | 0x400 | 0x207e00 | 0x60000020 | 6.7270 |
| .rdata | 0x209000 | 0x66738 | 0x208200 | 0x66800 | 0x40000040 | 6.4590 |
| .data | 0x270000 | 0x3a344 | 0x26ea00 | 0x31600 | 0xc0000040 | 7.7167 |
| .pdata | 0x2ab000 | 0xac80 | 0x2a0000 | 0xae00 | 0x40000040 | 6.1438 |
| .fptable | 0x2b6000 | 0x100 | 0x2aae00 | 0x200 | 0xc0000040 | 0.0000 |
| .rsrc | 0x2b7000 | 0xa7678 | 0x2ab000 | 0xa7800 | 0x40000040 | 7.9935 |
| .reloc | 0x35f000 | 0x12cc | 0x352800 | 0x1400 | 0x42000040 | 5.2773 |

## Exports

(no export directory)

## Imports

### USER32.dll

- 0x1802094b8  SetWindowsHookExW
- 0x1802094c0  CallNextHookEx
- 0x1802094c8  UnhookWindowsHookEx
- 0x1802094d0  GetSystemMetrics
- 0x1802094d8  GetKeyboardState
- 0x1802094e0  GetCursorPos
- 0x1802094e8  MapVirtualKeyExW
- 0x1802094f0  ToUnicodeEx
- 0x1802094f8  GetClientRect
- 0x180209500  GetAsyncKeyState
- 0x180209508  GetKeyState
- 0x180209510  wsprintfW
- 0x180209518  ScreenToClient
- 0x180209520  AttachThreadInput
- 0x180209528  GetForegroundWindow
- 0x180209530  GetWindowThreadProcessId
- 0x180209538  EnumChildWindows
- 0x180209540  IsWindowVisible
- 0x180209548  GetClassNameW
- 0x180209550  EnumWindows
- 0x180209558  IsWindow
- 0x180209560  GetKeyNameTextW
- 0x180209568  MapVirtualKeyW
- 0x180209570  GetKeyboardLayout
- 0x180209578  MessageBoxW

### SHELL32.dll

- 0x1802094a8  SHGetKnownFolderPath

### ole32.dll

- 0x1802095b8  CoCreateInstance
- 0x1802095c0  CoTaskMemFree
- 0x1802095c8  CoInitializeEx

### WINMM.dll

- 0x180209588  PlaySoundW

### DWrite.dll

- 0x180209030  DWriteCreateFactory

### d3d11.dll

- 0x180209598  D3D11CreateDevice

### dxgi.dll

- 0x1802095a8  CreateDXGIFactory1

### D3DCOMPILER_47.dll

- 0x180209020  D3DCompile

### KERNEL32.dll

- 0x180209040  HeapSize
- 0x180209048  SetStdHandle
- 0x180209050  GetProcessHeap
- 0x180209058  SetEnvironmentVariableW
- 0x180209060  FreeEnvironmentStringsW
- 0x180209068  GetEnvironmentStringsW
- 0x180209070  GetCommandLineW
- 0x180209078  GetCommandLineA
- 0x180209080  GetOEMCP
- 0x180209088  GetACP
- 0x180209090  IsValidCodePage
- 0x180209098  WriteConsoleW
- 0x1802090a0  FlushFileBuffers
- 0x1802090a8  ReadConsoleW
- 0x1802090b0  GetFileType
- 0x1802090b8  GetStdHandle
- 0x1802090c0  EnumSystemLocalesW
- 0x1802090c8  GetUserDefaultLCID
- 0x1802090d0  IsValidLocale
- 0x1802090d8  GetLocaleInfoW
- 0x1802090e0  LCMapStringW
- 0x1802090e8  CompareStringW
- 0x1802090f0  GetTimeFormatW
- 0x1802090f8  GetDateFormatW
- 0x180209100  SetEndOfFile
- 0x180209108  FlsFree
- 0x180209110  FlsSetValue
- 0x180209118  FlsGetValue
- 0x180209120  FlsAlloc
- 0x180209128  GetTimeZoneInformation
- 0x180209130  GetSystemTimeAsFileTime
- 0x180209138  GetModuleFileNameW
- 0x180209140  Sleep
- 0x180209148  GetCurrentProcessId
- 0x180209150  Thread32First
- 0x180209158  Thread32Next
- 0x180209160  CloseHandle
- 0x180209168  GetTickCount64
- 0x180209170  CreateToolhelp32Snapshot
- 0x180209178  GetCurrentThreadId
- 0x180209180  WideCharToMultiByte
- 0x180209188  GetSystemInfo
- 0x180209190  VirtualAlloc
- 0x180209198  GetModuleHandleExW
- 0x1802091a0  FindResourceW
- 0x1802091a8  SizeofResource
- 0x1802091b0  LoadResource
- 0x1802091b8  LockResource
- 0x1802091c0  QueryPerformanceCounter
- 0x1802091c8  QueryPerformanceFrequency
- 0x1802091d0  AddVectoredExceptionHandler
- 0x1802091d8  RtlCaptureStackBackTrace
- 0x1802091e0  RemoveVectoredExceptionHandler
- 0x1802091e8  OutputDebugStringA
- 0x1802091f0  VirtualQuery
- 0x1802091f8  VirtualProtect
- 0x180209200  GetCurrentProcess
- 0x180209208  FlushInstructionCache
- 0x180209210  GetModuleHandleW
- 0x180209218  K32GetModuleInformation
- 0x180209220  GetProcAddress
- 0x180209228  GetEnvironmentVariableW
- 0x180209230  FindFirstFileW
- 0x180209238  FindNextFileW
- 0x180209240  GetFileAttributesW
- 0x180209248  FindClose
- 0x180209250  CreateFileW
- 0x180209258  GetFileSizeEx
- 0x180209260  ReadFile
- 0x180209268  DisableThreadLibraryCalls
- 0x180209270  CreateThread
- 0x180209278  ExitThread
- 0x180209280  FreeLibraryAndExitThread
- 0x180209288  HeapCreate
- 0x180209290  HeapFree
- 0x180209298  HeapDestroy
- 0x1802092a0  OpenThread
- 0x1802092a8  ResumeThread
- 0x1802092b0  HeapReAlloc
- 0x1802092b8  HeapAlloc
- 0x1802092c0  GetLastError
- 0x1802092c8  SuspendThread
- 0x1802092d0  GetThreadContext
- 0x1802092d8  SetThreadContext
- 0x1802092e0  VirtualFree
- 0x1802092e8  SetFilePointerEx
- 0x1802092f0  ReleaseSRWLockExclusive
- 0x1802092f8  AcquireSRWLockExclusive
- 0x180209300  WakeAllConditionVariable
- 0x180209308  SleepConditionVariableSRW
- 0x180209310  RtlCaptureContext
- 0x180209318  RtlLookupFunctionEntry
- 0x180209320  RtlVirtualUnwind
- 0x180209328  UnhandledExceptionFilter
- 0x180209330  SetUnhandledExceptionFilter
- 0x180209338  TerminateProcess
- 0x180209340  IsProcessorFeaturePresent
- 0x180209348  IsDebuggerPresent
- 0x180209350  GetStartupInfoW
- 0x180209358  RtlUnwind
- 0x180209360  InitializeSListHead
- 0x180209368  CreateDirectoryW
- 0x180209370  FindFirstFileExW
- 0x180209378  GetFileAttributesExW
- 0x180209380  SetFileInformationByHandle
- 0x180209388  GetTempPathW
- 0x180209390  AreFileApisANSI
- 0x180209398  GetFileInformationByHandleEx
- 0x1802093a0  MultiByteToWideChar
- 0x1802093a8  LocalFree
- 0x1802093b0  FormatMessageA
- 0x1802093b8  GetLocaleInfoEx
- 0x1802093c0  TryAcquireSRWLockExclusive
- 0x1802093c8  ReleaseSRWLockShared
- 0x1802093d0  AcquireSRWLockShared
- 0x1802093d8  SetLastError
- 0x1802093e0  LoadLibraryExW
- 0x1802093e8  GetStringTypeW
- 0x1802093f0  EncodePointer
- 0x1802093f8  DecodePointer
- 0x180209400  EnterCriticalSection
- 0x180209408  LeaveCriticalSection
- 0x180209410  InitializeCriticalSectionEx
- 0x180209418  DeleteCriticalSection
- 0x180209420  LCMapStringEx
- 0x180209428  GetCPInfo
- 0x180209430  RtlUnwindEx
- 0x180209438  RtlPcToFileHeader
- 0x180209440  RaiseException
- 0x180209448  InterlockedFlushSList
- 0x180209450  InitializeCriticalSectionAndSpinCount
- 0x180209458  TlsAlloc
- 0x180209460  TlsGetValue
- 0x180209468  TlsSetValue
- 0x180209470  TlsFree
- 0x180209478  FreeLibrary
- 0x180209480  ExitProcess
- 0x180209488  WriteFile
- 0x180209490  GetConsoleOutputCP
- 0x180209498  GetConsoleMode

### ADVAPI32.dll

- 0x180209000  RegOpenKeyExW
- 0x180209008  RegQueryValueExW
- 0x180209010  RegCloseKey

total imported symbols: 177

## Delay imports

(none)

## Resources

- type=RT_RCDATA id=101 lang=1033 rva=0x2b70d0 size=394483
- type=RT_RCDATA id=102 lang=1033 rva=0x3175c8 size=290606
- type=RT_MANIFEST id=2 lang=1033 rva=0x35e4f8 size=381

## TLS

- StartAddressOfRawData: 0x1802517b8
- EndAddressOfRawData: 0x1802517e8
- AddressOfIndex: 0x1802a8d58
- AddressOfCallBacks: 0x180209798

## Debug directory

- Type: 13  TimeDateStamp: 1786277293  SizeOfData: 1008

## Load config / security cookie

- Size: 0x140
- SecurityCookie: 0x1802a0400
- SEHandlerTable: 0x0
- GuardCFCheckFunctionPointer: 0x1802095d8
- GuardFlags: 0x100
