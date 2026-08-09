#ifndef AERIALCLIENT_TYPES_H
#define AERIALCLIENT_TYPES_H

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct <lambda_2a444430fde8c29194d880d93eed5e8f> <lambda_2a444430fde8c29194d880d93eed5e8f>, *P<lambda_2a444430fde8c29194d880d93eed5e8f>;

struct <lambda_2a444430fde8c29194d880d93eed5e8f> {
};

typedef struct <lambda_38119f0e861e05405d8a144b9b982f0a> <lambda_38119f0e861e05405d8a144b9b982f0a>, *P<lambda_38119f0e861e05405d8a144b9b982f0a>;

struct <lambda_38119f0e861e05405d8a144b9b982f0a> {
};

typedef struct <lambda_3e16ef9562a7dcce91392c22ab16ea36> <lambda_3e16ef9562a7dcce91392c22ab16ea36>, *P<lambda_3e16ef9562a7dcce91392c22ab16ea36>;

struct <lambda_3e16ef9562a7dcce91392c22ab16ea36> {
};

typedef struct <lambda_410d79af7f07d98d83a3f525b3859a53> <lambda_410d79af7f07d98d83a3f525b3859a53>, *P<lambda_410d79af7f07d98d83a3f525b3859a53>;

struct <lambda_410d79af7f07d98d83a3f525b3859a53> {
};

typedef struct <lambda_7f2adfce497ff2baa965cd4f576ecfd1> <lambda_7f2adfce497ff2baa965cd4f576ecfd1>, *P<lambda_7f2adfce497ff2baa965cd4f576ecfd1>;

struct <lambda_7f2adfce497ff2baa965cd4f576ecfd1> {
};

typedef struct <lambda_8dff2cf36a5417162780cd64fa2883ef> <lambda_8dff2cf36a5417162780cd64fa2883ef>, *P<lambda_8dff2cf36a5417162780cd64fa2883ef>;

struct <lambda_8dff2cf36a5417162780cd64fa2883ef> {
};

typedef struct __acrt_ptd __acrt_ptd, *P__acrt_ptd;

struct __acrt_ptd {
};

typedef enum __acrt_rounding_mode {
} __acrt_rounding_mode;

typedef struct __acrt_stdio_stream_mode __acrt_stdio_stream_mode, *P__acrt_stdio_stream_mode;

struct __acrt_stdio_stream_mode {
};

typedef struct __crt_deferred_errno_cache __crt_deferred_errno_cache, *P__crt_deferred_errno_cache;

struct __crt_deferred_errno_cache {
};

typedef struct __crt_lc_time_data __crt_lc_time_data, *P__crt_lc_time_data;

struct __crt_lc_time_data {
};

typedef struct __crt_locale_data __crt_locale_data, *P__crt_locale_data;

struct __crt_locale_data {
};

typedef struct __crt_locale_pointers __crt_locale_pointers, *P__crt_locale_pointers;

struct __crt_locale_pointers {
};

typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;

struct __crt_multibyte_data {
};

typedef struct __crt_seh_guarded_call<void> __crt_seh_guarded_call<void>, *P__crt_seh_guarded_call<void>;

struct __crt_seh_guarded_call<void> {
};

typedef struct __crt_stdio_stream __crt_stdio_stream, *P__crt_stdio_stream;

struct __crt_stdio_stream {
};

typedef int __ehstate_t;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

typedef ulonglong __uint64;

typedef struct _CONSOLE_READCONSOLE_CONTROL _CONSOLE_READCONSOLE_CONTROL, *P_CONSOLE_READCONSOLE_CONTROL;

typedef ulong ULONG;

struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef ulonglong DWORD64;

typedef ulong DWORD;

typedef ushort WORD;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

typedef uchar BYTE;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _Crt_new_delete _Crt_new_delete, *P_Crt_new_delete;

struct _Crt_new_delete {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

typedef struct _Ctypevec _Ctypevec, *P_Ctypevec;

struct _Ctypevec {
    uint _Page;
    short *_Table;
    int _Delfl;
    wchar_t *_LocaleName;
};

typedef struct _Cvtvec _Cvtvec, *P_Cvtvec;

struct _Cvtvec {
    uint _Page;
    uint _Mbcurmax;
    int _Isclocale;
    uchar _Isleadbyte[32];
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT *PCONTEXT;

typedef void *PVOID;

typedef ulonglong ULONG_PTR;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _Facet_base _Facet_base, *P_Facet_base;

typedef struct _Facet_base_vftable _Facet_base_vftable, *P_Facet_base_vftable;

struct _Facet_base_vftable {
    void (*vfunction1)(void);
    void (*vfunction2)(void);
    void (*vfunction2)(void);
};

struct _Facet_base {
    struct _Facet_base_vftable *vftablePtr;
};

typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo=0,
    FileStandardInfo=1,
    FileNameInfo=2,
    FileRenameInfo=3,
    FileDispositionInfo=4,
    FileAllocationInfo=5,
    FileEndOfFileInfo=6,
    FileStreamInfo=7,
    FileCompressionInfo=8,
    FileAttributeTagInfo=9,
    FileIdBothDirectoryInfo=10,
    FileIdBothDirectoryRestartInfo=11,
    FileIoPriorityHintInfo=12,
    FileRemoteProtocolInfo=13,
    MaximumFileInfoByHandleClass=14
} _FILE_INFO_BY_HANDLE_CLASS;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef enum _FINDEX_INFO_LEVELS {
    FindExInfoStandard=0,
    FindExInfoBasic=1,
    FindExInfoMaxInfoLevel=2
} _FINDEX_INFO_LEVELS;

typedef enum _FINDEX_SEARCH_OPS {
    FindExSearchNameMatch=0,
    FindExSearchLimitToDirectories=1,
    FindExSearchLimitToDevices=2,
    FindExSearchMaxSearchOp=3
} _FINDEX_SEARCH_OPS;

typedef struct _Generic_error_category _Generic_error_category, *P_Generic_error_category;

typedef struct _Generic_error_category_vftable _Generic_error_category_vftable, *P_Generic_error_category_vftable;

struct _Generic_error_category {
    struct _Generic_error_category_vftable *vftablePtr;
};

struct _Generic_error_category_vftable {
    _Generic_error_category * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void);
    undefined8 * (*vfunction3)(void *, undefined8 *, undefined4);
    undefined4 * (*vfunction4)(void *, undefined4 *, undefined4);
    undefined8 (*vfunction5)(void *, int *, int);
    undefined8 (*vfunction6)(void *, undefined4, int *);
};

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress;
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_238 _union_238, *P_union_238;

union _union_238 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_238 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef struct _Init_atexit _Init_atexit, *P_Init_atexit;

struct _Init_atexit {
};

typedef struct _Init_locks _Init_locks, *P_Init_locks;

struct _Init_locks {
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _Iostream_error_category2 _Iostream_error_category2, *P_Iostream_error_category2;

typedef struct _Iostream_error_category2_vftable _Iostream_error_category2_vftable, *P_Iostream_error_category2_vftable;

struct _Iostream_error_category2_vftable {
    _Iostream_error_category2 * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void);
    undefined8 * (*vfunction3)(void *, undefined8 *, int);
    undefined4 * (*vfunction4)(void *, undefined4 *, undefined4);
    undefined8 (*vfunction5)(void *, int *, int);
    undefined8 (*vfunction6)(void *, undefined4, int *);
};

struct _Iostream_error_category2 {
    struct _Iostream_error_category2_vftable *vftablePtr;
};

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef union _union_61 _union_61, *P_union_61;

typedef union _union_63 _union_63, *P_union_63;

typedef struct _M128A *PM128A;

typedef struct _struct_62 _struct_62, *P_struct_62;

typedef ulonglong *PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef long LONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct localeinfo_struct *_locale_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate {
};

typedef struct _Locimp _Locimp, *P_Locimp;

typedef struct _Locimp_vftable _Locimp_vftable, *P_Locimp_vftable;

struct _Locimp {
    struct _Locimp_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

struct _Locimp_vftable {
    _Locimp * (*vfunction1)(void *, ulonglong);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
};

typedef struct _Locinfo _Locinfo, *P_Locinfo;

struct _Locinfo {
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit {
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef struct _nlsversioninfo _nlsversioninfo, *P_nlsversioninfo;

struct _nlsversioninfo {
    DWORD dwNLSVersionInfoSize;
    DWORD dwNLSVersion;
    DWORD dwDefinedVersion;
};

typedef int (*_onexit_t)(void);

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_540 _union_540, *P_union_540;

typedef void *HANDLE;

typedef struct _struct_541 _struct_541, *P_struct_541;

struct _struct_541 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_540 {
    struct _struct_541 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_540 u;
    HANDLE hEvent;
};

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor;
    dword numContainedBases;
    struct PMD where;
    dword attributes;
    ImageBaseOffset32 pClassHierarchyDescriptor;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes;
    dword numBaseClasses;
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset;
    dword cdOffset;
    ImageBaseOffset32 pTypeDescriptor;
    ImageBaseOffset32 pClassDescriptor;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    ImageBaseOffset32 dispUnwindMap;
    uint nTryBlocks;
    ImageBaseOffset32 dispTryBlockMap;
    uint nIPMapEntries;
    ImageBaseOffset32 dispIPToStateMap;
    int dispUnwindHelp;
    ImageBaseOffset32 dispESTypeList;
    int EHFlags;
};

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

struct _s_HandlerType {
    uint adjectives;
    ImageBaseOffset32 dispType;
    int dispCatchObj;
    ImageBaseOffset32 dispOfHandler;
    dword dispFrame;
};

typedef struct _s_IPToStateMapEntry _s_IPToStateMapEntry, *P_s_IPToStateMapEntry;

struct _s_IPToStateMapEntry {
    ImageBaseOffset32 Ip;
    __ehstate_t state;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    ImageBaseOffset32 dispHandlerArray;
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    ImageBaseOffset32 action;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SLIST_ENTRY _SLIST_ENTRY, *P_SLIST_ENTRY;

typedef struct _SLIST_ENTRY *PSLIST_ENTRY;

struct _SLIST_ENTRY {
    PSLIST_ENTRY Next;
};

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef struct _struct_314 _struct_314, *P_struct_314;

typedef struct _struct_315 _struct_315, *P_struct_315;

typedef struct _struct_316 _struct_316, *P_struct_316;

typedef struct _struct_317 _struct_317, *P_struct_317;

struct _struct_314 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

struct _struct_317 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

struct _struct_316 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

union _SLIST_HEADER {
    struct _struct_314 s;
    struct _struct_315 Header8;
    struct _struct_316 Header16;
    struct _struct_317 HeaderX64;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _struct_553 _struct_553, *P_struct_553;

struct _struct_553 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

typedef struct _System_error _System_error, *P_System_error;

typedef struct _System_error_vftable _System_error_vftable, *P_System_error_vftable;

typedef struct exception exception, *Pexception;

typedef struct exception_data exception_data, *Pexception_data;

typedef struct exception_vftable exception_vftable, *Pexception_vftable;

typedef ulonglong uintptr_t;

struct exception_data {
    undefined8 offset_0x0;
    undefined8 offset_0x8;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined **offset_0x18;
    longlong offset_0x20;
    undefined8 offset_0x28;
    uintptr_t offset_0x30;
    ulonglong offset_0x38;
    longlong offset_0x40;
    undefined field10_0x48;
    undefined field11_0x49;
    undefined field12_0x4a;
    undefined field13_0x4b;
    undefined field14_0x4c;
    undefined field15_0x4d;
    undefined field16_0x4e;
    undefined field17_0x4f;
    uintptr_t offset_0x50;
    ulonglong offset_0x58;
    longlong offset_0x60;
    undefined8 offset_0x68;
    uintptr_t offset_0x70;
    ulonglong offset_0x78;
};

struct exception {
    struct exception_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct exception_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

struct _System_error {
    struct _System_error_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct _System_error_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef struct _System_error_category _System_error_category, *P_System_error_category;

typedef struct _System_error_category_vftable _System_error_category_vftable, *P_System_error_category_vftable;

struct _System_error_category_vftable {
    _System_error_category * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void);
    undefined8 * (*vfunction3)(void *, undefined8 *, undefined4);
    int * (*vfunction4)(void *, int *, int);
    undefined8 (*vfunction5)(void *, int *, int);
    undefined8 (*vfunction6)(void *, undefined4, int *);
};

struct _System_error_category {
    struct _System_error_category_vftable *vftablePtr;
};

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_552 _union_552, *P_union_552;

typedef ULONG_PTR DWORD_PTR;

union _union_552 {
    DWORD dwOemId;
    struct _struct_553 s;
};

struct _SYSTEM_INFO {
    union _union_552 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _FILETIME FILETIME;

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef struct _xDISPATCHER_CONTEXT _xDISPATCHER_CONTEXT, *P_xDISPATCHER_CONTEXT;

struct _xDISPATCHER_CONTEXT {
};

typedef DWORD ACCESS_MASK;

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

typedef struct bad_alloc_vftable bad_alloc_vftable, *Pbad_alloc_vftable;

struct bad_alloc {
    struct bad_alloc_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct bad_alloc_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef struct bad_array_new_length bad_array_new_length, *Pbad_array_new_length;

typedef struct bad_array_new_length_vftable bad_array_new_length_vftable, *Pbad_array_new_length_vftable;

struct bad_array_new_length_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

struct bad_array_new_length {
    struct bad_array_new_length_vftable *vftablePtr;
    struct exception_data exception_data;
};

typedef struct bad_cast bad_cast, *Pbad_cast;

typedef struct bad_cast_vftable bad_cast_vftable, *Pbad_cast_vftable;

struct bad_cast {
    struct bad_cast_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct bad_cast_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef struct bad_exception bad_exception, *Pbad_exception;

typedef struct bad_exception_vftable bad_exception_vftable, *Pbad_exception_vftable;

struct bad_exception_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

struct bad_exception {
    struct bad_exception_vftable *vftablePtr;
    struct exception_data exception_data;
};

typedef struct bad_function_call bad_function_call, *Pbad_function_call;

typedef struct bad_function_call_vftable bad_function_call_vftable, *Pbad_function_call_vftable;

struct bad_function_call {
    struct bad_function_call_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct bad_function_call_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef BYTE BOOLEAN;

typedef char CHAR;

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct codecvt<char,char,_Mbstatet> codecvt<char,char,_Mbstatet>, *Pcodecvt<char,char,_Mbstatet>;

typedef struct codecvt<char,char,_Mbstatet>_vftable codecvt<char,char,_Mbstatet>_vftable, *Pcodecvt<char,char,_Mbstatet>_vftable;

struct codecvt<char,char,_Mbstatet> {
    struct codecvt<char,char,_Mbstatet>_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

struct codecvt<char,char,_Mbstatet>_vftable {
    codecvt<char,char,_Mbstatet> * (*vfunction1)(void *, uint);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
    undefined1 (*vfunction4)(void);
    undefined8 (*vfunction5)(void);
    undefined8 (*vfunction6)(void);
    undefined8 (*vfunction7)(void *, undefined8, undefined8, undefined8, undefined8 *, undefined8, undefined8, undefined8 *);
    undefined8 (*vfunction8)(void *, undefined8, undefined8, undefined8, undefined8 *, undefined8, undefined8, undefined8 *);
    undefined8 (*vfunction9)(void *, undefined8, undefined8, undefined8, undefined8 *);
    ulonglong (*vfunction10)(void *, undefined8, longlong, longlong, ulonglong);
};

typedef struct codecvt_base codecvt_base, *Pcodecvt_base;

typedef struct facet facet, *Pfacet;

struct facet {
    struct _Facet_base _Facet_base;
    struct _Crt_new_delete _Crt_new_delete;
};

struct codecvt_base {
    struct facet facet;
};

typedef struct _CONTEXT CONTEXT;

typedef struct ctype<char> ctype<char>, *Pctype<char>;

typedef struct ctype<char>_vftable ctype<char>_vftable, *Pctype<char>_vftable;

struct ctype<char>_vftable {
    ctype<char> * (*vfunction1)(void *, uint);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
    undefined1 * (*vfunction4)(void *, undefined1 *, undefined1 *);
    void (*vfunction5)(void *, undefined1);
    undefined1 * (*vfunction6)(void *, undefined1 *, undefined1 *);
    void (*vfunction7)(void *, undefined1);
    longlong (*vfunction8)(void *, longlong, longlong, undefined8);
    undefined4 (*vfunction9)(void *, undefined4);
    longlong (*vfunction10)(void *, longlong, longlong, undefined8, undefined8);
    undefined4 (*vfunction9)(void *, undefined4);
};

struct ctype<char> {
    struct ctype<char>_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

typedef struct ctype<wchar_t> ctype<wchar_t>, *Pctype<wchar_t>;

typedef struct ctype<wchar_t>_vftable ctype<wchar_t>_vftable, *Pctype<wchar_t>_vftable;

struct ctype<wchar_t>_vftable {
    ctype<wchar_t> * (*vfunction1)(void *, uint);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
    void (*vfunction4)(void *, undefined8, undefined8, undefined8);
    undefined4 (*vfunction5)(void *, uint, wchar_t);
    undefined2 * (*vfunction6)(void *, undefined4, undefined2 *, undefined2 *);
    undefined2 * (*vfunction7)(void *, undefined4, undefined2 *, undefined2 *);
    undefined2 * (*vfunction8)(void *, undefined2 *, undefined2 *);
    void (*vfunction9)(void *, undefined4);
    undefined2 * (*vfunction10)(void *, undefined2 *, undefined2 *);
    void (*vfunction11)(void *, undefined4);
    char * (*vfunction12)(void *, char *, char *, wchar_t *);
    ulonglong (*vfunction13)(void *, char);
    undefined2 * (*vfunction14)(void *, undefined2 *, undefined2 *, byte, undefined1 *);
    undefined1 (*vfunction15)(void *, undefined8, undefined1);
};

struct ctype<wchar_t> {
    struct ctype<wchar_t>_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

typedef struct ctype_base ctype_base, *Pctype_base;

struct ctype_base {
    struct facet facet;
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord {
};

typedef int errno_t;

typedef struct error_category error_category, *Perror_category;

struct error_category {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef struct failure failure, *Pfailure;

typedef struct failure_vftable failure_vftable, *Pfailure_vftable;

struct failure_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

struct failure {
    struct failure_vftable *vftablePtr;
    struct exception_data exception_data;
};

typedef longlong INT_PTR;

typedef INT_PTR (*FARPROC)(void);

typedef struct _iobuf FILE;

typedef enum _FILE_INFO_BY_HANDLE_CLASS FILE_INFO_BY_HANDLE_CLASS;

typedef enum _FINDEX_INFO_LEVELS FINDEX_INFO_LEVELS;

typedef enum _FINDEX_SEARCH_OPS FINDEX_SEARCH_OPS;

typedef struct floating_point_string floating_point_string, *Pfloating_point_string;

struct floating_point_string {
};

typedef struct floating_point_value floating_point_value, *Pfloating_point_value;

struct floating_point_value {
};

typedef longlong fpos_t;

typedef struct _s_FuncInfo FuncInfo;

typedef struct FuncInfo4 FuncInfo4, *PFuncInfo4;

struct FuncInfo4 {
};

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef struct HandlerMap4 HandlerMap4, *PHandlerMap4;

struct HandlerMap4 {
};

typedef struct _s_HandlerType HandlerType;

typedef HANDLE HGLOBAL;

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

typedef struct HHOOK__ *HHOOK;

struct HHOOK__ {
    int unused;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

typedef struct HKEY__ *HKEY;

struct HKEY__ {
    int unused;
};

typedef struct HKL__ HKL__, *PHKL__;

typedef struct HKL__ *HKL;

struct HKL__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef HINSTANCE HMODULE;

typedef longlong LONG_PTR;

typedef LONG_PTR LRESULT;

typedef ulonglong UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*HOOKPROC)(int, WPARAM, LPARAM);

typedef long HRESULT;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef GUID IID;

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2];
    word e_cblp;
    word e_cp;
    word e_crlc;
    word e_cparhdr;
    word e_minalloc;
    word e_maxalloc;
    word e_ss;
    word e_sp;
    word e_csum;
    word e_ip;
    word e_cs;
    word e_lfarlc;
    word e_ovno;
    word e_res[4][4];
    word e_oemid;
    word e_oeminfo;
    word e_res2[10][10];
    dword e_lfanew;
    byte e_program[64];
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine;
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base {
};

typedef struct _s_IPToStateMapEntry IPToStateMapEntry;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef DWORD LCID;

typedef DWORD LCTYPE;

typedef struct length_error length_error, *Plength_error;

typedef struct length_error_vftable length_error_vftable, *Plength_error_vftable;

struct length_error {
    struct length_error_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct length_error_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef BOOL (*LOCALE_ENUMPROCW)(LPWSTR);

typedef struct logic_error logic_error, *Plogic_error;

typedef struct logic_error_vftable logic_error_vftable, *Plogic_error_vftable;

struct logic_error {
    struct logic_error_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct logic_error_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef BOOL *LPBOOL;

typedef PCONTEXT LPCONTEXT;

typedef struct _cpinfo *LPCPINFO;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef CHAR *LPCSTR;

typedef void *LPCVOID;

typedef WCHAR *LPCWSTR;

typedef DWORD *LPDWORD;

typedef struct _FILETIME *LPFILETIME;

typedef struct _nlsversioninfo *LPNLSVERSIONINFO;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT *LPPOINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT *LPRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef CHAR *LPSTR;

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct IUnknown *LPUNKNOWN;

typedef WCHAR *LPWCH;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef WORD *LPWORD;

typedef LONG LSTATUS;

typedef int mbstate_t;

typedef struct num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>, *Pnum_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>;

typedef struct num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable, *Pnum_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable;

struct num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> {
    struct num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

struct num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable {
    num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> * (*vfunction1)(void *, uint);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
    undefined8 (*vfunction4)(void *, undefined8, undefined4 *, undefined8, undefined1, undefined8);
    undefined8 (*vfunction5)(void *, undefined8, undefined8 *, longlong, undefined1, double);
    undefined8 (*vfunction6)(void *, undefined8, undefined8 *, longlong, undefined1, double);
    undefined8 (*vfunction7)(void *, undefined8, undefined4 *, longlong, undefined1, undefined8);
    undefined8 (*vfunction8)(void *, undefined8, undefined4 *, longlong, undefined1, undefined8);
    undefined8 (*vfunction9)(void *, undefined8, undefined4 *, longlong, undefined1, undefined4);
    undefined8 (*vfunction10)(void *, undefined8, undefined4 *, longlong, undefined1, undefined4);
    undefined1 * (*vfunction11)(void *, undefined1 *, undefined4 *, longlong, undefined1, char);
};

typedef struct numpunct<char> numpunct<char>, *Pnumpunct<char>;

typedef struct numpunct<char>_vftable numpunct<char>_vftable, *Pnumpunct<char>_vftable;

struct numpunct<char>_vftable {
    numpunct<char> * (*vfunction1)(void *, uint);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
    undefined1 (*vfunction4)(void *);
    undefined1 (*vfunction5)(void *);
    undefined8 * (*vfunction6)(void *, undefined8 *);
    undefined8 * (*vfunction7)(void *, undefined8 *);
    undefined8 * (*vfunction8)(void *, undefined8 *);
};

struct numpunct<char> {
    struct numpunct<char>_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

typedef struct out_of_range out_of_range, *Pout_of_range;

typedef struct out_of_range_vftable out_of_range_vftable, *Pout_of_range_vftable;

struct out_of_range {
    struct out_of_range_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct out_of_range_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef BYTE *PBYTE;

typedef WCHAR *PCNZWCH;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

typedef struct _CONSOLE_READCONSOLE_CONTROL *PCONSOLE_READCONSOLE_CONTROL;

typedef DWORD *PDWORD;

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef void (*PFLS_CALLBACK_FUNCTION)(PVOID);

typedef HKEY *PHKEY;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef struct _SLIST_ENTRY *PSLIST_ENTRY.conflict;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK *PSRWLOCK;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

typedef LONG (*PVECTORED_EXCEPTION_HANDLER)(struct _EXCEPTION_POINTERS *);

typedef ACCESS_MASK REGSAM;

typedef ulonglong size_t;

typedef size_t rsize_t;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct runtime_error runtime_error, *Pruntime_error;

typedef struct runtime_error_vftable runtime_error_vftable, *Pruntime_error_vftable;

struct runtime_error {
    struct runtime_error_vftable *vftablePtr;
    struct exception_data exception_data;
};

struct runtime_error_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

typedef short SHORT;

typedef enum SLD_STATUS {
} SLD_STATUS;

typedef struct string_output_adapter<char> string_output_adapter<char>, *Pstring_output_adapter<char>;

struct string_output_adapter<char> {
};

typedef struct system_error system_error, *Psystem_error;

typedef struct system_error_vftable system_error_vftable, *Psystem_error_vftable;

struct system_error_vftable {
    exception * (*vfunction1)(void *, uint);
    undefined * (*vfunction2)(void *);
};

struct system_error {
    struct system_error_vftable *vftablePtr;
    struct exception_data exception_data;
};

typedef struct time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>, *Ptime_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>;

typedef struct time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable, *Ptime_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable;

struct time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> {
    struct time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

struct time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_vftable {
    time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> * (*vfunction1)(void *, uint);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
    undefined4 * (*vfunction4)(void *, undefined4 *, undefined4 *, longlong, undefined8, undefined8, char, char);
};

typedef struct time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>, *Ptime_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>;

typedef struct time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>_vftable time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>_vftable, *Ptime_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>_vftable;

struct time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>_vftable {
    time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> * (*vfunction1)(void *, uint);
    void (*vfunction2)(void *);
    _Locimp * (*vfunction3)(void *);
    undefined4 * (*vfunction4)(void *, undefined4 *, undefined4 *, longlong, undefined8, undefined8, char, char);
};

struct time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> {
    struct time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>_vftable *vftablePtr;
    struct _Crt_new_delete _Crt_new_delete;
};

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct type_info type_info, *Ptype_info;

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info {
    struct type_info_vftable *vftablePtr;
};

struct type_info_vftable {
    type_info * (*vfunction1)(void *, ulonglong);
};

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct UWMap4 UWMap4, *PUWMap4;

struct UWMap4 {
};

typedef char *va_list;

typedef ushort wctype_t;

typedef ushort wint_t;

typedef BOOL (*WNDENUMPROC)(HWND, LPARAM);


#endif
