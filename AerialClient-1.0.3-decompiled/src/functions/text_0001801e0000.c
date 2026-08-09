#include "../include/aerialclient_types.h"


undefined8 FUN_1801e008c(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;

  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if ((piVar1[6] == 4) &&
       (((piVar1[8] == 0x19930520 || (piVar1[8] + 0xe66cfadfU < 2)) &&
        (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))))) {
      *param_3 = 1;
    }
    if ((((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) && ((piVar1[8] == 0x19930520 || (piVar1[8] + 0xe66cfadfU < 2))))
       && (*(longlong *)(piVar1 + 0xc) == 0)) {
      lVar2 = FUN_1801dd724();
      *(undefined4 *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}



int __cdecl ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;

  iVar1 = FUN_1801e008c(param_1,param_2,param_4);
  if (iVar1 == 0) {
    lVar2 = FUN_1801dd724();
    *(int *)(lVar2 + 0x78) = param_3;
  }
  return iVar1;
}



void FUN_1801e0154(__uint64 *param_1,undefined8 param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;

  uVar3 = FUN_1801dcf68();
  iVar2 = FUN_1801dd8cc(param_1,param_2,param_3);
  lVar4 = FUN_1801dd724();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
      abort();
    }
    lVar4 = FUN_1801dcf68();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)((int)param_3->dispUnwindMap + lVar5 + lVar4);
    iVar1 = param_3->dispUnwindMap;
    lVar4 = FUN_1801dcf68();
    if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) == 0) {
      lVar4 = 0;
    }
    else {
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_1801dcf68();
      iVar1 = *(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1);
      lVar4 = FUN_1801dcf68();
      lVar4 = lVar4 + iVar1;
    }
    if (lVar4 != 0) {
      __FrameHandler3::SetState(param_1,param_3,iVar2);
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_1801dcf68();
      if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) == 0) {
        lVar4 = 0;
      }
      else {
        iVar1 = param_3->dispUnwindMap;
        lVar4 = FUN_1801dcf68();
        iVar1 = *(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1);
        lVar4 = FUN_1801dcf68();
        lVar4 = lVar4 + iVar1;
      }
      _CallSettingFrame(lVar4,param_1,0x103);
      FUN_1801dcf90(uVar3);
    }
  }
  lVar4 = FUN_1801dd724();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_1801dd724();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
    abort();
  }
  __FrameHandler3::SetState(param_1,param_3,iVar2);
  return;
}



void FUN_1801e02e0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  UWMap4 *pUVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  UWMap4 **local_118;
  UWMap4 *local_108;
  byte *pbStack_100;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  UWMap4 *local_e8;
  byte *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  int *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  uint *local_b0;
  byte *local_a8;
  UWMap4 *local_98;
  byte *pbStack_90;
  undefined1 local_88 [16];
  uint local_78 [2];
  byte *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;

  local_58 = DAT_1802a0400 ^ (ulonglong)auStack_138;
  local_f0 = param_4;
  local_d8 = param_1;
  local_c0 = param_1;
  local_d0 = FUN_1801dcf68();
  iVar5 = FUN_1801dd970(param_3);
  piVar1 = (int *)(param_2 + 0x48);
  local_c8 = piVar1;
  if (*piVar1 == 0) {
    lVar6 = FUN_1801dd724();
    if (*(int *)(lVar6 + 0x78) != -2) {
      lVar6 = FUN_1801dd724();
      iVar5 = *(int *)(lVar6 + 0x78);
      lVar6 = FUN_1801dd724();
      *(undefined4 *)(lVar6 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar6 = FUN_1801dd724();
    if (*(int *)(lVar6 + 0x78) != -2) {
      abort();
    }
    iVar5 = *piVar1 + -2;
  }
  lVar6 = FUN_1801dd724();
  *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
  plVar8 = (longlong *)(param_2 + 8);
  local_70 = (byte *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_78[0] = 0;
  }
  else {
    local_70 = (byte *)((longlong)*(int *)(param_3 + 8) + *plVar8);
    uVar7 = *local_70 & 0xf;
    local_70 = local_70 + -(longlong)(char)(&DAT_180244f58)[uVar7];
    local_78[0] = *(uint *)(local_70 + -4) >> ((&DAT_180244f68)[uVar7] & 0x1f);
  }
  local_108 = (UWMap4 *)local_78;
  local_e8 = (UWMap4 *)local_78;
  local_118 = &local_e8;
  pbStack_100 = local_70;
  local_e0 = local_70;
  local_b8 = plVar8;
  FUN_1801e08b0(local_78,iVar5,param_4,&local_108);
  while( true ) {
    pbVar4 = pbStack_100;
    local_b0 = local_78;
    local_a8 = local_70;
    if ((pbStack_100 < local_70) || (pbStack_100 <= local_e0)) break;
    FH4::UWMap4::ReadEntry(local_108,&pbStack_100);
    pUVar3 = local_108;
    auVar2 = *(undefined1 (*) [16])(local_108 + 0x10);
    local_98 = local_108;
    pbStack_90 = pbVar4;
    pbStack_100 = pbVar4;
    local_88 = auVar2;
    FH4::UWMap4::ReadEntry(local_108,&pbStack_100);
    pbStack_100 = pbVar4 + -(ulonglong)*(uint *)(pUVar3 + 0x10);
    local_118 = &local_108;
    local_f4 = FUN_1801e0980(&local_e8,param_4,&local_98);
    iVar5 = auVar2._4_4_;
    local_f8 = 0;
    if (iVar5 != 0) {
      local_f8 = auVar2._8_4_;
    }
    if (local_f8 != 0) {
      *piVar1 = local_f4 + 2;
      if (iVar5 - 1U < 2) {
        lVar6 = *local_d8;
        if (iVar5 == 2) {
          lVar9 = *(longlong *)((ulonglong)auVar2._12_4_ + lVar6);
        }
        else {
          lVar9 = (ulonglong)auVar2._12_4_ + lVar6;
        }
        _CallSettingFrameEncoded((longlong)local_f8 + *plVar8,lVar6,lVar9,0x103);
      }
      else {
        _CallSettingFrame((longlong)local_f8 + *plVar8,param_1,0x103);
      }
      FUN_1801dcf90(local_d0);
    }
  }
  lVar6 = FUN_1801dd724();
  if (0 < *(int *)(lVar6 + 0x30)) {
    lVar6 = FUN_1801dd724();
    *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
  }
}



undefined1 FUN_1801e0684(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;

  if (param_2 == (int *)0x0) {
    abort();
  }
  uVar8 = 0;
  iVar6 = 0;
  uVar9 = 0;
  if (0 < *param_2) {
    do {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1801dcf7c();
      piVar7 = (int *)((longlong)iVar10 + lVar4 + 4);
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1801dcf7c();
      iVar10 = *(int *)(lVar4 + iVar10);
      uVar8 = uVar9;
      if (0 < iVar10) {
        do {
          iVar3 = *piVar7;
          lVar4 = FUN_1801dcf7c();
          iVar1 = param_2[1];
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          lVar5 = FUN_1801dcf68();
          iVar3 = FUN_1801df184(lVar5 + (longlong)iVar6 * 0x14 + (longlong)iVar1,iVar3 + lVar4,uVar2);
          if (iVar3 != 0) {
            uVar8 = 1;
            break;
          }
          iVar10 = iVar10 + -1;
          piVar7 = piVar7 + 1;
        } while (0 < iVar10);
      }
      iVar6 = iVar6 + 1;
      uVar9 = uVar8;
    } while (iVar6 < *param_2);
  }
  return uVar8;
}



undefined8 FUN_1801e076c(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;

  iVar3 = 0;
  if (0 < *param_1) {
    lVar4 = 0;
    do {
      iVar1 = param_1[1];
      lVar2 = FUN_1801dcf68();
      if (*(int *)(lVar2 + lVar4 + 4 + (longlong)iVar1) == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar2 = FUN_1801dcf68();
        iVar1 = *(int *)(lVar2 + lVar4 + 4 + (longlong)iVar1);
        lVar2 = FUN_1801dcf68();
        lVar2 = lVar2 + iVar1;
      }
      iVar1 = FUN_1801dd658(lVar2 + 8,0x1802a11a0);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x14;
    } while (iVar3 < *param_1);
  }
  return 0;
}



void FUN_1801e0894(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}



void FUN_1801e08a0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,undefined4 param_4)

{
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}



void FUN_1801e08b0(UWMap4 *param_1,int param_2,int param_3,longlong *param_4,longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  uchar *puVar5;
  int iVar6;
  uchar *puVar7;
  uchar *local_res8;
  int local_res10;

  local_res8 = *(uchar **)(param_1 + 8);
  bVar3 = false;
  bVar4 = false;
  iVar6 = 0;
  puVar5 = local_res8 + -1;
  puVar7 = puVar5;
  local_res10 = param_2;
  if (0 < *(int *)param_1) {
    do {
      if (iVar6 == param_2) {
        bVar3 = true;
        puVar5 = local_res8;
      }
      if (iVar6 == param_3) {
        bVar4 = true;
        puVar7 = local_res8;
      }
      if ((bVar3) && (bVar4)) break;
      FH4::UWMap4::ReadEntry(param_1,&local_res8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)param_1);
  }
  puVar1 = (undefined8 *)*param_4;
  param_4[1] = (longlong)puVar5;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = uVar2;
  puVar1 = (undefined8 *)*param_5;
  param_5[1] = (longlong)puVar7;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = uVar2;
  return;
}



int FUN_1801e0980(undefined8 *param_1,int param_2,longlong param_3,int param_4,undefined8 *param_5)

{
  ulonglong uVar1;
  UWMap4 *pUVar2;
  uchar *puStack_10;

  uVar1 = param_5[1];
  if ((*(ulonglong *)(param_3 + 8) < uVar1) || (uVar1 < (ulonglong)param_1[1])) {
    param_2 = -1;
  }
  else if ((longlong)(uVar1 - param_1[1]) < (longlong)(*(longlong *)(param_3 + 8) - uVar1)) {
    pUVar2 = (UWMap4 *)*param_1;
    puStack_10 = (uchar *)param_1[1];
    if ((ulonglong)param_1[1] < uVar1) {
      do {
        FH4::UWMap4::ReadEntry(pUVar2,&puStack_10);
        param_2 = param_2 + 1;
      } while (puStack_10 < (uchar *)param_5[1]);
    }
  }
  else {
    pUVar2 = (UWMap4 *)*param_5;
    puStack_10 = (uchar *)param_5[1];
    param_2 = param_4;
    if (uVar1 < *(ulonglong *)(param_3 + 8)) {
      do {
        FH4::UWMap4::ReadEntry(pUVar2,&puStack_10);
        param_2 = param_2 + -1;
      } while (puStack_10 < *(uchar **)(param_3 + 8));
    }
  }
  return param_2;
}



void FUN_1801e0a60(void)

{
  FUN_1801e0a80();
  return;
}



void FUN_1801e0a80(void)

{
  return;
}



void FUN_1801e0a90(void)

{
  return;
}



void __except_validate_context_record(void)

{
  return;
}



undefined4 __vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;

  uVar3 = 0;
  do {
    iVar1 = __vcrt_InitializeCriticalSectionEx(&DAT_1802a9828 + uVar3 * 0x28,4000,0);
    if (iVar1 == 0) {
      __vcrt_uninitialize_locks();
      return 0;
    }
    DAT_1802a9850 = DAT_1802a9850 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}



undefined8 __vcrt_uninitialize_locks(void)

{
  ulonglong uVar1;

  uVar1 = (ulonglong)DAT_1802a9850;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1802a9828 + uVar1 * 0x28));
    DAT_1802a9850 = DAT_1802a9850 - 1;
  }
  return 1;
}



FARPROC FUN_1801e0b4c(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  wchar_t *lpLibFileName;
  DWORD DVar2;
  int iVar3;
  HMODULE hLibModule;
  FARPROC pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;

  uVar6 = (ulonglong)param_1;
  pFVar4 = *(FARPROC *)(&DAT_1802a9870 + uVar6 * 8);
  if (pFVar4 != (FARPROC)0xffffffffffffffff) {
    if (pFVar4 != (FARPROC)0x0) {
      return pFVar4;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      uVar5 = (ulonglong)*param_3;
      hLibModule = *(HMODULE *)(&DAT_1802a9858 + uVar5 * 8);
      if (hLibModule == (HMODULE)0x0) {
        lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_180245ec0)[uVar5];
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
        if ((hLibModule != (HMODULE)0x0) ||
           (((DVar2 = GetLastError(), DVar2 == 0x57 && (iVar3 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar3 != 0)) &&
            (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))) {
          LOCK();
          lVar1 = *(longlong *)(&DAT_1802a9858 + uVar5 * 8);
          *(HMODULE *)(&DAT_1802a9858 + uVar5 * 8) = hLibModule;
          UNLOCK();
          if (lVar1 != 0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_1801e0c7d;
        }
        LOCK();
        *(undefined8 *)(&DAT_1802a9858 + uVar5 * 8) = 0xffffffffffffffff;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_1801e0c7d:
        pFVar4 = GetProcAddress(hLibModule,param_2);
        if (pFVar4 != (FARPROC)0x0) {
          LOCK();
          *(FARPROC *)(&DAT_1802a9870 + uVar6 * 8) = pFVar4;
          UNLOCK();
          return pFVar4;
        }
        break;
      }
    }
    LOCK();
    *(undefined8 *)(&DAT_1802a9870 + uVar6 * 8) = 0xffffffffffffffff;
    UNLOCK();
  }
  return (FARPROC)0x0;
}



void __vcrt_FlsAlloc(undefined8 param_1)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1801e0b4c(0,"FlsAlloc",&DAT_180245f80,"FlsAlloc");
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
    return;
  }
  TlsAlloc();
  return;
}



void __vcrt_FlsFree(undefined4 param_1)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1801e0b4c(1,"FlsFree",&DAT_180245f98,"FlsFree");
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  TlsFree(param_1);
  return;
}



void __vcrt_FlsGetValue(undefined4 param_1)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1801e0b4c(2,"FlsGetValue",&DAT_180245fa8,"FlsGetValue");
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  TlsGetValue(param_1);
  return;
}



void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1801e0b4c(3,"FlsSetValue",&DAT_180245fc0,"FlsSetValue");
  if (pcVar1 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*pcVar1)();
  }
  return;
}



void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1801e0b4c(4,"InitializeCriticalSectionEx",&DAT_180245fd8,"InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}



void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;

  pcVar1 = (code *)FUN_1801e0a60(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_1801e0a90();
  FUN_1801e0a60(uVar2,*param_2,2);
  return;
}



void FUN_1801e0eb0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;

  pcVar1 = (code *)FUN_1801e0a60(param_1,*param_2);
  (*pcVar1)();
  FUN_1801e0a90();
  return;
}



void FUN_1801e0ee0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1801e0a60(param_1,*param_2,2);
  return;
}



void _CallSettingFrameEncoded(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;

  pcVar1 = (code *)FUN_1801e0a60(param_1,param_2,param_4);
  (*pcVar1)(param_3);
  uVar2 = FUN_1801e0a90();
  FUN_1801e0a60(uVar2,param_2,2);
  return;
}



longlong FUN_1801e0f58(longlong *param_1)

{
  longlong lVar1;
  DWORD local_res8 [2];

  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      lVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar1 = param_1[1];
    }
    lVar1 = FUN_1801f2924(local_res8,lVar1);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
    if (lVar1 == 0) {
      abort();
    }
  }
  return *param_1;
}



longlong FUN_1801e0fc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  DWORD local_res8 [2];

  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    lVar1 = FUN_1801f2924(local_res8,lVar2);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
  }
  return lVar1;
}



longlong FUN_1801e102c(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;

  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}



void FUN_1801e1078(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 auStackX_8 [8];
  undefined1 auStackY_608 [32];
  ulonglong local_5c8 [2];
  PVOID local_5b8;
  _EXCEPTION_POINTERS local_5b0;
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;

  local_28 = DAT_1802a0400 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_1801d7008();
  }
  FUN_180207610(&local_598,0,0x98);
  FUN_180207610(&local_4f8,0,0x4d0);
  local_5c8[1] = 0;
  local_5b0.ExceptionRecord = &local_598;
  local_5c8[0] = 0;
  local_5b8 = (PVOID)0x0;
  local_5b0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8[0],local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b8,local_5c8 + 1,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)auStackX_8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5b0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_1801d7008(param_1);
  }
}



void FUN_1801e11e8(undefined8 param_1)

{
  _DAT_1802a9898 = param_1;
  return;
}



void FUN_1801e11f0(void)

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
  }
  FUN_1801e128c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}



void FUN_1801e128c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;

  lVar1 = FUN_1801e0fc0(param_6);
  if ((lVar1 == 0) || (pcVar4 = *(code **)(lVar1 + 0x3b8), pcVar4 == (code *)0x0)) {
    puVar2 = (ulonglong *)FUN_1801e102c(&DAT_1802a9898,param_6);
    bVar3 = (byte)DAT_1802a0400 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_1802a0400) >> bVar3 | (*puVar2 ^ DAT_1802a0400) << 0x40 - bVar3);
    if (pcVar4 == (code *)0x0) {
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}



void FUN_1801e1344(void)

{
  FUN_1801e11f0(0,0,0,0,0);
  return;
}



void __cdecl _invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];

  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1801e1392;
  FUN_1801e1078(2,0xc0000417);
  *(undefined8 *)(puVar3 + -8) = 0x1801e1398;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000417);
  return;
}



ulonglong FUN_1801e13b0(ulonglong param_1)

{
  return param_1 >> 0x3f;
}



uint FUN_1801e13c0(uint param_1)

{
  return param_1 >> 0x1f;
}



void thunk_FUN_1801f42e0(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;

  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_1802aa2f0,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_1801e69a4(DVar3);
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = uVar4;
  }
  return;
}



undefined8 FUN_1801e13d8(void)

{
  longlong lVar1;
  longlong local_res8 [4];

  lVar1 = FUN_1801f2834();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined8 *)(local_res8[0] + 0xf8);
}



LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;

  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_1802aa2f0,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_180201f40();
    } while ((iVar1 != 0) && (iVar1 = FUN_1801f0240(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



ulonglong FUN_1801e1420(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 auVar6 [16];

  if (4 < DAT_1802a0468) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x20 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (pauVar2 = param_1; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1;
    if (uVar3 == uVar5) {
      pauVar4 = (undefined1 (*) [32])
                ((longlong)pauVar2 + ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0x1f)));
      while ((pauVar2 != pauVar4 &&
             (auVar1 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 && (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) && (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) && (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) && (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) && (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) && (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) && (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0') &&
                           (SUB321(auVar1 >> 0x87,0) & 1) == 0) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) &&
                       (SUB321(auVar1 >> 0xa7,0) & 1) == 0) && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) &&
                     (SUB321(auVar1 >> 0xb7,0) & 1) == 0) && SUB321(auVar1 >> 0xbf,0) == '\0') &&
                   (SUB321(auVar1 >> 199,0) & 1) == 0) && (SUB321(auVar1 >> 0xcf,0) & 1) == 0) &&
                 (SUB321(auVar1 >> 0xd7,0) & 1) == 0) && (SUB321(auVar1 >> 0xdf,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xe7,0) & 1) == 0) && (SUB321(auVar1 >> 0xef,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xf7,0) & 1) == 0) && -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1;
    }
    return uVar3;
  }
  pauVar2 = param_1;
  if (DAT_1802a0468 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
  }
  else {
    uVar3 = (ulonglong)((uint)param_1 & 0xf);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x10 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    if ((longlong)pauVar2 - (longlong)param_1 != uVar5) {
      return (longlong)pauVar2 - (longlong)param_1;
    }
    pauVar4 = (undefined1 (*) [32])
              ((longlong)pauVar2 + ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0xf)));
    while ((pauVar2 != pauVar4 &&
           (auVar6[0] = -((*pauVar2)[0] == '\0'), auVar6[1] = -((*pauVar2)[1] == '\0'),
           auVar6[2] = -((*pauVar2)[2] == '\0'), auVar6[3] = -((*pauVar2)[3] == '\0'),
           auVar6[4] = -((*pauVar2)[4] == '\0'), auVar6[5] = -((*pauVar2)[5] == '\0'),
           auVar6[6] = -((*pauVar2)[6] == '\0'), auVar6[7] = -((*pauVar2)[7] == '\0'),
           auVar6[8] = -((*pauVar2)[8] == '\0'), auVar6[9] = -((*pauVar2)[9] == '\0'),
           auVar6[10] = -((*pauVar2)[10] == '\0'), auVar6[0xb] = -((*pauVar2)[0xb] == '\0'),
           auVar6[0xc] = -((*pauVar2)[0xc] == '\0'), auVar6[0xd] = -((*pauVar2)[0xd] == '\0'),
           auVar6[0xe] = -((*pauVar2)[0xe] == '\0'), auVar6[0xf] = -((*pauVar2)[0xf] == '\0'),
           (((((((((((((((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0xf,0) & 1) == 0) &&
                       (SUB161(auVar6 >> 0x17,0) & 1) == 0) && (SUB161(auVar6 >> 0x1f,0) & 1) == 0) &&
                     (SUB161(auVar6 >> 0x27,0) & 1) == 0) && (SUB161(auVar6 >> 0x2f,0) & 1) == 0) &&
                   (SUB161(auVar6 >> 0x37,0) & 1) == 0) && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar6 >> 0x47,0) & 1) == 0) && (SUB161(auVar6 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar6 >> 0x57,0) & 1) == 0) && (SUB161(auVar6 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar6 >> 0x67,0) & 1) == 0) && (SUB161(auVar6 >> 0x6f,0) & 1) == 0) &&
           (SUB161(auVar6 >> 0x77,0) & 1) == 0) && -1 < auVar6[0xf]))) {
      pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
    }
    if (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2)) {
      while ((*pauVar2)[0] != '\0') {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2)) {
          return (longlong)pauVar2 - (longlong)param_1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1;
}



ulonglong FUN_1801e15b0(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];

  if (DAT_1802a0468 < 5) {
    pauVar2 = param_1;
    if (DAT_1802a0468 < 1) {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar3 != uVar4 >> 1) {
        return uVar3;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
      while( true ) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar2 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar2 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar2 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar2 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar2 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar2 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar2 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar2 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar5 >> 0x37,0) & 1) != 0) || (SUB161(auVar5 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar5 >> 0x47,0) & 1) != 0) || (SUB161(auVar5 >> 0x4f,0) & 1) != 0) ||
                (SUB161(auVar5 >> 0x57,0) & 1) != 0) || (SUB161(auVar5 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar5 >> 0x67,0) & 1) != 0) || (SUB161(auVar5 >> 0x6f,0) & 1) != 0) ||
            (auVar5._14_2_ >> 7 & 1) != 0) || (auVar5._14_2_ & 0x8000) != 0) break;
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
      }
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (((ulonglong)param_1 & 1) == 0) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0x20 - uVar3;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) && (*(short *)*pauVar2 != 0));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
    if (uVar3 != uVar4 >> 1) {
      return uVar3;
    }
    pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
    while (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
          (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 && (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x17,0) & 1) == 0) && (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x27,0) & 1) == 0) && (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x37,0) & 1) == 0) && (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x47,0) & 1) == 0) && (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x57,0) & 1) == 0) && (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                            (SUB321(auVar1 >> 0x67,0) & 1) == 0) && (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                          (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0') &&
                        (SUB321(auVar1 >> 0x87,0) & 1) == 0) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) &&
                    (SUB321(auVar1 >> 0xa7,0) & 1) == 0) && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xb7,0) & 1) == 0) && SUB321(auVar1 >> 0xbf,0) == '\0') &&
                (SUB321(auVar1 >> 199,0) & 1) == 0) && (SUB321(auVar1 >> 0xcf,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xd7,0) & 1) == 0) && (SUB321(auVar1 >> 0xdf,0) & 1) == 0) &&
            (SUB321(auVar1 >> 0xe7,0) & 1) == 0) && (SUB321(auVar1 >> 0xef,0) & 1) == 0) &&
          (SUB321(auVar1 >> 0xf7,0) & 1) == 0) && -1 < auVar1[0x1f]) {
      pauVar2 = pauVar2 + 1;
    }
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}



ulonglong FUN_1801e1700(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined1 auVar6 [16];

  if (4 < DAT_1802a0468) {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0x1f);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x20 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (pauVar2 = param_1; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar4 * 2);
      while ((pauVar2 !=
              (undefined1 (*) [32])
              ((longlong)param_1 + (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0x1f)) + uVar4) * 2) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 && (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) && (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) && (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) && (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) && (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) && (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) && (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0') &&
                           (SUB321(auVar1 >> 0x87,0) & 1) == 0) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) &&
                       (SUB321(auVar1 >> 0xa7,0) & 1) == 0) && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) &&
                     (SUB321(auVar1 >> 0xb7,0) & 1) == 0) && SUB321(auVar1 >> 0xbf,0) == '\0') &&
                   (SUB321(auVar1 >> 199,0) & 1) == 0) && (SUB321(auVar1 >> 0xcf,0) & 1) == 0) &&
                 (SUB321(auVar1 >> 0xd7,0) & 1) == 0) && (SUB321(auVar1 >> 0xdf,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xe7,0) & 1) == 0) && (SUB321(auVar1 >> 0xef,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xf7,0) & 1) == 0) && -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      pauVar2 = param_1;
      if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
        while (*(short *)*pauVar2 != 0) {
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
          if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
            return (longlong)pauVar2 - (longlong)param_1 >> 1;
          }
        }
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (DAT_1802a0468 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      for (psVar5 = (short *)(*param_1 + uVar4 * 2);
          psVar5 != (short *)((longlong)param_1 +
                             (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0xf)) + uVar4) * 2);
          psVar5 = psVar5 + 8) {
        auVar6._0_2_ = -(ushort)(*psVar5 == 0);
        auVar6._2_2_ = -(ushort)(psVar5[1] == 0);
        auVar6._4_2_ = -(ushort)(psVar5[2] == 0);
        auVar6._6_2_ = -(ushort)(psVar5[3] == 0);
        auVar6._8_2_ = -(ushort)(psVar5[4] == 0);
        auVar6._10_2_ = -(ushort)(psVar5[5] == 0);
        auVar6._12_2_ = -(ushort)(psVar5[6] == 0);
        auVar6._14_2_ = -(ushort)(psVar5[7] == 0);
        if ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar6 >> 0x17,0) & 1) != 0) || (SUB161(auVar6 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar6 >> 0x27,0) & 1) != 0) || (SUB161(auVar6 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar6 >> 0x37,0) & 1) != 0) || (SUB161(auVar6 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar6 >> 0x47,0) & 1) != 0) || (SUB161(auVar6 >> 0x4f,0) & 1) != 0) ||
                (SUB161(auVar6 >> 0x57,0) & 1) != 0) || (SUB161(auVar6 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar6 >> 0x67,0) & 1) != 0) || (SUB161(auVar6 >> 0x6f,0) & 1) != 0) ||
            (auVar6._14_2_ >> 7 & 1) != 0) || (auVar6._14_2_ & 0x8000) != 0) break;
      }
      for (; (psVar5 != (short *)(*param_1 + param_2 * 2) && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
      }
      return (longlong)psVar5 - (longlong)param_1 >> 1;
    }
    if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
      while (*(short *)*pauVar2 != 0) {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
          return (longlong)pauVar2 - (longlong)param_1 >> 1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}



int __cdecl isalnum(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];

  if (DAT_1802a9ca0 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1802a0700 + (longlong)_C * 2) & 0x107;
    }
  }
  else {
    lVar2 = FUN_1801f2834();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x107;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_1801f4488(_C,0x107,0);
      return iVar1;
    }
  }
  return 0;
}



int __cdecl islower(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];

  if (DAT_1802a9ca0 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1802a0700 + (longlong)_C * 2) & 2;
    }
  }
  else {
    lVar2 = FUN_1801f2834();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 2;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_1801f4488(_C,2);
      return iVar1;
    }
  }
  return 0;
}



int __cdecl isupper(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];

  if (DAT_1802a9ca0 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1802a0700 + (longlong)_C * 2) & 1;
    }
  }
  else {
    lVar2 = FUN_1801f2834();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 1;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_1801f4488(_C,1);
      return iVar1;
    }
  }
  return 0;
}



uint FUN_1801e1b20(uint param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;

  uVar3 = param_1 & 0x7fffffff;
  if (uVar3 < 0x4b000000) {
    if (uVar3 < 0x3f800000) {
      param_1 = param_1 & 0x80000000;
      if (0x3effffff < uVar3) {
        param_1 = param_1 | 0x3f800000;
      }
    }
    else {
      uVar5 = 0x96 - (uVar3 >> 0x17);
      bVar4 = (byte)uVar5;
      bVar2 = bVar4 & 0x1f;
      bVar1 = (uVar5 & 0x1f) != 0;
      param_1 = (param_1 >> bVar2) + (uint)(!bVar1 && 0x96 < uVar3 >> 0x17 || bVar1 && (param_1 >> bVar2 - 1 & 1) != 0)
                << (bVar4 & 0x1f);
    }
  }
  return param_1;
}



undefined8 operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;

  FUN_1801e230c(*param_2);
  uVar1 = FUN_1801e1ba4(param_3);
  FUN_1801e2318(*param_4);
  return uVar1;
}



undefined8 FUN_1801e1ba4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;

  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1801f5564(uVar2);
  uVar4 = FUN_1801e1cc0(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],
                        *(undefined8 *)*param_1,param_1[1]);
  FUN_1801f562c(uVar3,uVar2,uVar1);
  return uVar4;
}



undefined8 FUN_1801e1c24(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  undefined8 uVar1;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 *local_20;
  longlong *local_18;
  longlong *local_10;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 != 0) {
      local_30 = &local_res20;
      local_28 = param_5;
      local_20 = &local_res8;
      local_18 = &local_res10;
      local_10 = &local_res18;
      local_40 = param_4;
      local_38 = param_4;
      uVar1 = operator()<>(local_48,&local_38,&local_30,&local_40);
      return uVar1;
    }
    *(undefined1 *)(param_5 + 0x30) = 1;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_5);
  }
  return 0;
}



ulonglong FUN_1801e1cc0(char *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4,longlong param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;

  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (char *)0x0 &&
        (auVar2._8_8_ = 0, auVar2._0_8_ = param_2,
        param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0))))) {
      if (((ulonglong)param_4->_base & 0x4c000000000) == 0) {
        uVar9 = 0x1000;
      }
      else {
        uVar9 = param_4->_charbuf;
      }
      uVar7 = param_2 * param_3;
      do {
        if (uVar7 == 0) {
          return param_3;
        }
        if ((((ulonglong)param_4->_base & 0xc000000000) == 0) || (*(int *)&param_4->_base == 0)) {
          if (uVar9 <= uVar7) {
            if ((((ulonglong)param_4->_base & 0xc000000000) != 0) && (iVar3 = FUN_1801e33f8(param_4), iVar3 != 0))
            goto LAB_1801e1e77;
            uVar5 = uVar7;
            if (uVar9 != 0) {
              uVar5 = uVar7 - uVar7 % (ulonglong)uVar9;
            }
            uVar8 = 0xfffffffe;
            if (uVar5 < 0xfffffffe) {
              uVar8 = (uint)uVar5;
            }
            iVar3 = _fileno(param_4);
            uVar4 = FUN_1801f4e7c(iVar3,param_1,uVar8,param_5);
            if (uVar4 != 0xffffffff) {
              uVar6 = uVar4;
              if (uVar8 < uVar4) {
                uVar6 = uVar8;
              }
              uVar5 = (ulonglong)uVar6;
              uVar7 = uVar7 - uVar5;
              if (uVar8 <= uVar4) goto LAB_1801e1ebe;
            }
LAB_1801e1e72:
            LOCK();
            puVar1 = (uint *)((longlong)&param_4->_base + 4);
            *puVar1 = *puVar1 | 0x10;
            UNLOCK();
LAB_1801e1e77:
            return (param_2 * param_3 - uVar7) / param_2;
          }
          iVar3 = FUN_1801f544c((int)*param_1,param_4,param_5);
          if (iVar3 == -1) goto LAB_1801e1e77;
          uVar9 = param_4->_charbuf;
          uVar7 = uVar7 - 1;
          if ((int)uVar9 < 1) {
            uVar9 = 1;
            uVar5 = 1;
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          if (*(int *)&param_4->_base < 0) goto LAB_1801e1e72;
          if (((ulonglong)param_4->_base & 0x100000000) != 0) goto LAB_1801e1e77;
          uVar5 = uVar7;
          if ((ulonglong)(longlong)*(int *)&param_4->_base <= uVar7) {
            uVar5 = (longlong)*(int *)&param_4->_base;
          }
          FUN_1802079d0(param_4->_ptr,param_1,uVar5);
          *(int *)&param_4->_base = *(int *)&param_4->_base - (int)uVar5;
          uVar7 = uVar7 - uVar5;
          param_4->_ptr = param_4->_ptr + uVar5;
        }
LAB_1801e1ebe:
        param_1 = param_1 + uVar5;
      } while( true );
    }
    *(undefined1 *)(param_5 + 0x30) = 1;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_5);
  }
  return 0;
}



undefined8 FUN_1801e1ed4(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
  }
  uVar1 = FUN_1801e1c24();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



undefined4 FUN_1801e1f78(longlong param_1,longlong param_2)

{
  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_1801e230c();
      uVar1 = FUN_1801e1ff4(param_1,param_2);
      FUN_1801e2318(param_1);
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}



undefined4 FUN_1801e1ff4(FILE *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVar1 = FUN_1801e33f8();
      __acrt_stdio_free_buffer_nolock(param_1);
      iVar2 = _fileno(param_1);
      iVar2 = FUN_1801f56e4(iVar2,param_2);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_1801f42e0();
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}



undefined4 FUN_1801e209c(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
    param_1 = PTR_PTR_1802a0858._0_4_;
  }
  uVar1 = FUN_1801e1f78(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



undefined8 FUN_1801e2134(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;

  lVar1 = 0;
  lVar5 = 3;
  if (DAT_1802a98a8 == 0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = 3;
    if (2 < DAT_1802a98a8) goto LAB_1801e2171;
  }
  DAT_1802a98a8 = iVar4;
LAB_1801e2171:
  DAT_1802a98b0 = _calloc_base((longlong)DAT_1802a98a8,8);
  FUN_1801f42e0(0);
  if (DAT_1802a98b0 == 0) {
    DAT_1802a98a8 = 3;
    DAT_1802a98b0 = _calloc_base(3,8);
    FUN_1801f42e0(0);
    if (DAT_1802a98b0 == 0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_1802a05c8;
  puVar6 = &DAT_1802a05b0;
  lVar2 = lVar1;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + 0x30),4000,0);
    *(undefined **)(lVar1 + DAT_1802a98b0) = puVar6;
    if (*(longlong *)((&DAT_1802a9d80)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48) + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar6 = puVar6 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}



undefined * FUN_1801e2254(ulonglong param_1)

{
  return &DAT_1802a05b0 + (param_1 & 0xffffffff) * 0x58;
}



void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;

  common_flush_all(param_1);
  FUN_1801f6694();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 *)(lVar1 + DAT_1802a98b0));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + DAT_1802a98b0) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_1801f42e0(DAT_1802a98b0);
  DAT_1802a98b0 = 0;
  return;
}



undefined8 _get_stream_buffer_pointers(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;

  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
    uVar2 = 0x16;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1 + 8;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = param_1;
    }
    if (param_4 != (longlong *)0x0) {
      *param_4 = param_1 + 0x10;
    }
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_1801e230c(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



void FUN_1801e2318(longlong param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



uint FUN_1801e2324(uint param_1,FILE *param_2,longlong param_3)

{
  char **ppcVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined1 *local_18;

  local_18 = auStack_48;
  local_20 = param_3;
  if (param_2 == (FILE *)0x0) {
    *(undefined1 *)(param_3 + 0x30) = 1;
    *(undefined4 *)(param_3 + 0x2c) = 0x16;
    local_28 = 0;
    local_18 = auStack_48;
    FUN_1801e128c(0,0,0,0);
    return 0xffffffff;
  }
  FUN_1801e230c(param_2);
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVar3 = _fileno(param_2);
    if (uVar3 + 2 < 2) {
      puVar5 = &DAT_1802a0870;
    }
    else {
      puVar5 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    puVar4 = &DAT_1802a0870;
    if (puVar5[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar4 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar4[0x3d] & 1) == 0) goto LAB_1801e240d;
    }
    bVar2 = false;
  }
  else {
LAB_1801e240d:
    bVar2 = true;
  }
  if (bVar2) {
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
    if (*(int *)ppcVar1 < 0) {
      param_1 = FUN_1801f544c(param_1,param_2,param_3);
    }
    else {
      *param_2->_ptr = (char)param_1;
      param_2->_ptr = param_2->_ptr + 1;
      param_1 = param_1 & 0xff;
    }
    FUN_1801e2318(param_2);
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    *(undefined4 *)(param_3 + 0x2c) = 0x16;
    local_28 = 0;
    FUN_1801e128c(0,0,0,0);
    FUN_180207354(local_18,0x1801e244d);
    param_1 = 0xffffffff;
  }
  return param_1;
}



ulonglong FUN_1801e2488(byte param_1,FILE *param_2,longlong param_3)

{
  char **ppcVar1;
  uint *puVar2;
  char cVar3;

  ppcVar1 = &param_2->_base;
  *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
  if (-1 < *(int *)ppcVar1) {
    *param_2->_ptr = param_1;
    param_2->_ptr = param_2->_ptr + 1;
    return (ulonglong)param_1;
  }
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        cVar3 = FUN_1801f53c4(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar3 == '\0') goto LAB_1801f547e;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar2 = (uint *)((longlong)&param_2->_base + 4);
        *puVar2 = *puVar2 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 2;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) && (cVar3 = FUN_1801f5518(param_2), cVar3 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar3 = FUN_1801f52cc(param_1,param_2,param_3);
      if (cVar3 != '\0') {
        return (ulonglong)param_1;
      }
      goto LAB_1801f547e;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_1801f547e:
  LOCK();
  puVar2 = (uint *)((longlong)&param_2->_base + 4);
  *puVar2 = *puVar2 | 0x10;
  UNLOCK();
  return 0xffffffff;
}



undefined4 FUN_1801e24a0(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
    param_1 = PTR_PTR_1802a0858._0_4_;
  }
  uVar1 = FUN_1801e2324(param_1,param_2,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



uint FUN_1801e2538(uint param_1,FILE *param_2)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;

  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVar4 = _fileno(param_2);
    puVar6 = &DAT_1802a0870;
    if (uVar4 + 2 < 2) {
      puVar7 = &DAT_1802a0870;
    }
    else {
      puVar7 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (puVar7[0x39] == '\0') {
      if (1 < uVar4 + 2) {
        puVar6 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
      }
      if ((puVar6[0x3d] & 1) == 0) goto LAB_1801e25e4;
    }
    puVar5 = (undefined4 *)FUN_1801e6ae4();
    *puVar5 = 0x16;
    FUN_1801e1344();
  }
  else {
LAB_1801e25e4:
    if ((param_1 != 0xffffffff) &&
       ((((ulonglong)param_2->_base & 0x100000000) != 0 ||
        (((byte)*(undefined4 *)((longlong)&param_2->_base + 4) & 6) == 6)))) {
      if (*(longlong *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (param_2->_ptr == *(char **)&param_2->_cnt) {
        if (*(int *)&param_2->_base != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      uVar4 = *(uint *)((longlong)&param_2->_base + 4);
      pcVar3 = param_2->_ptr;
      pcVar1 = pcVar3 + -1;
      param_2->_ptr = pcVar1;
      if ((uVar4 >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        param_2->_ptr = pcVar3;
        return 0xffffffff;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 1;
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}



int __cdecl ungetc(int _Ch,FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;

  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x16;
    FUN_1801e1344();
    iVar1 = -1;
  }
  else {
    FUN_1801e230c(_File);
    iVar1 = FUN_1801e2538(_Ch,_File);
    FUN_1801e2318(_File);
  }
  return iVar1;
}



ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;

  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x16;
    FUN_1801e1344();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_1801f6a38();
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}



undefined4 FUN_1801e26f4(FILE *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;

  local_18 = auStack_38;
  if (param_1 == (FILE *)0x0) {
    local_18 = auStack_38;
    puVar4 = (undefined4 *)FUN_1801e6ae4();
    *puVar4 = 0x16;
    FUN_1801e1344();
    return 0xffffffff;
  }
  FUN_1801e230c();
  bVar1 = true;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_1802a0870;
    }
    puVar5 = &DAT_1802a0870;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1801e27c0;
    }
    bVar1 = false;
  }
LAB_1801e27c0:
  if (bVar1) {
    uVar3 = _fgetc_nolock(param_1);
    FUN_1801e2318(param_1);
  }
  else {
    puVar4 = (undefined4 *)FUN_1801e6ae4();
    *puVar4 = 0x16;
    FUN_1801e1344();
    FUN_180207354(local_18,0x1801e27e6);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



ulonglong FUN_1801e2808(undefined1 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,FILE *param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  FILE *_File;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;

  _File = param_5;
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (undefined1 *)0x0) {
LAB_1801e2841:
    puVar5 = (undefined4 *)FUN_1801e6ae4();
    *puVar5 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) ||
       (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
       SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) < param_4)) {
      if (param_2 != 0xffffffffffffffff) {
        FUN_180207610(param_1,0,param_2);
      }
      if ((param_5 == (FILE *)0x0) ||
         (auVar3._8_8_ = 0, auVar3._0_8_ = param_3,
         SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0) < param_4)) goto LAB_1801e2841;
    }
    if (((ulonglong)param_5->_base & 0x4c000000000) == 0) {
      uVar6 = 0x1000;
    }
    else {
      uVar6 = (ulonglong)(uint)param_5->_charbuf;
    }
    param_5._0_4_ = (uint)uVar6;
    uVar8 = param_3 * param_4;
    uVar7 = param_2;
    puVar9 = param_1;
    while( true ) {
      if (uVar8 == 0) {
        return param_4;
      }
      if (((ulonglong)_File->_base & 0x4c000000000) == 0) break;
      uVar10 = *(uint *)&_File->_base;
      if (uVar10 == 0) break;
      if ((int)uVar10 < 0) {
LAB_1801e2a56:
        LOCK();
        puVar1 = (uint *)((longlong)&_File->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
LAB_1801e2a62:
        return (param_3 * param_4 - uVar8) / param_3;
      }
      if (uVar8 < (ulonglong)(longlong)(int)uVar10) {
        uVar10 = (uint)uVar8;
      }
      if (uVar7 < uVar10) goto LAB_1801e2a33;
      if (uVar10 != 0) {
        if (puVar9 != (undefined1 *)0x0) {
          if (_File->_ptr != (char *)0x0) {
            FUN_1802079d0(puVar9);
            goto LAB_1801e2958;
          }
          FUN_180207610(puVar9,0,uVar7);
        }
        puVar5 = (undefined4 *)FUN_1801e6ae4();
        *puVar5 = 0x16;
        FUN_1801e1344();
      }
LAB_1801e2958:
      *(uint *)&_File->_base = *(int *)&_File->_base - uVar10;
      uVar6 = (ulonglong)uVar10;
      _File->_ptr = _File->_ptr + uVar10;
LAB_1801e2971:
      uVar8 = uVar8 - uVar6;
      puVar9 = puVar9 + uVar6;
      uVar7 = uVar7 - uVar6;
LAB_1801e2a18:
      uVar6 = (ulonglong)(uint)param_5;
    }
    if (uVar8 < uVar6) {
      iVar4 = FUN_1801f6a38(_File);
      if (iVar4 == -1) goto LAB_1801e2a62;
      if (uVar7 != 0) {
        *puVar9 = (char)iVar4;
        uVar8 = uVar8 - 1;
        param_5._0_4_ = _File->_charbuf;
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 - 1;
        goto LAB_1801e2a18;
      }
    }
    else {
      uVar11 = uVar8 & 0xffffffff;
      if (0x7fffffff < uVar8) {
        uVar11 = 0x7fffffff;
      }
      if ((int)uVar6 != 0) {
        uVar11 = (ulonglong)(uint)((int)uVar11 - (int)(uVar11 % uVar6));
      }
      if (uVar11 <= uVar7) {
        *(undefined4 *)&_File->_base = 0;
        _File->_ptr = *(char **)&_File->_cnt;
        iVar4 = _fileno(_File);
        iVar4 = FUN_1801f71f0(iVar4,puVar9,uVar11);
        if (iVar4 == 0) {
          LOCK();
          puVar1 = (uint *)((longlong)&_File->_base + 4);
          *puVar1 = *puVar1 | 8;
          UNLOCK();
          goto LAB_1801e2a62;
        }
        if (-1 < iVar4) {
          uVar6 = (ulonglong)iVar4;
          goto LAB_1801e2971;
        }
        goto LAB_1801e2a56;
      }
    }
LAB_1801e2a33:
    if (param_2 != 0xffffffffffffffff) {
      FUN_180207610(param_1,0,param_2);
    }
    puVar5 = (undefined4 *)FUN_1801e6ae4();
    *puVar5 = 0x22;
  }
  FUN_1801e1344();
  return 0;
}



size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;

  sVar1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sVar1;
}



size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;

  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_1801e230c(_File);
      sVar2 = FUN_1801e2808(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_1801e2318(_File);
      return sVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_180207610(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  return 0;
}



int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;

  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x16;
    FUN_1801e1344();
    iVar1 = -1;
  }
  else {
    lVar3 = FUN_1801f7b48();
    *_Pos = lVar3;
    iVar1 = (lVar3 != -1) - 1;
  }
  return iVar1;
}



undefined4 FUN_1801e2b88(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;

  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1801e230c();
    uVar1 = FUN_1801e2d20(param_1,param_2,param_3,param_4);
    FUN_1801e2318(param_1);
  }
  return uVar1;
}



ulonglong FUN_1801e2c24(longlong *param_1,ulonglong param_2,int param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  uint uVar2;

  if ((((param_3 != 2) &&
       (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14), (*(uint *)((longlong)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14), (*(uint *)((longlong)param_1 + 0x14) & 6) == 0)) &&
     (0 < (int)param_1[2])) {
    uVar2 = *(uint *)(param_1 + 3);
    in_RAX = (longlong)(int)uVar2 >> 6;
    if ((-1 < *(char *)((&DAT_1802a9d80)[in_RAX] + 0x38 + (ulonglong)(uVar2 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_1802a9d80)[in_RAX] + 0x39 + (ulonglong)(uVar2 & 0x3f) * 0x48) == '\0')) {
      if (param_3 == 0) {
        in_RAX = FUN_1801f7e60(uVar2,0,1);
        if ((longlong)in_RAX < 0) goto LAB_1801e2d0c;
        lVar1 = in_RAX - (longlong)(int)param_1[2];
        in_RAX = param_2 - lVar1;
        uVar2 = -(int)((longlong)param_2 >> 0x3f);
        param_2 = in_RAX;
        if ((uVar2 != -(int)(lVar1 >> 0x3f)) && (uVar2 != 0x7fffffffffffffff < in_RAX)) goto LAB_1801e2d0c;
      }
      if ((param_1[1] - *param_1 <= (longlong)param_2) && ((longlong)param_2 <= (longlong)(int)param_1[2])) {
        *param_1 = *param_1 + param_2;
        *(int *)(param_1 + 2) = (int)param_1[2] - (int)param_2;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_1801e2d0c:
  return in_RAX & 0xffffffffffffff00;
}



int FUN_1801e2d20(undefined8 *param_1,longlong param_2,int param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;

  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) == 0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    iVar2 = -1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff7;
    UNLOCK();
    cVar1 = FUN_1801e2c24();
    if (cVar1 == '\0') {
      if (param_3 == 1) {
        lVar3 = thunk_FUN_1801f76bc(param_1,param_4);
        param_2 = param_2 + lVar3;
        param_3 = 0;
      }
      FUN_1801e33f8(param_1,param_4);
      *param_1 = param_1[1];
      *(undefined4 *)(param_1 + 2) = 0;
      if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
        if ((((byte)*(undefined4 *)((longlong)param_1 + 0x14) & 0x41) == 0x41) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(undefined4 *)(param_1 + 4) = 0x200;
        }
      }
      else {
        LOCK();
        *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffffc;
        UNLOCK();
      }
      lVar3 = thunk_FUN_1801f7d0c(*(undefined4 *)(param_1 + 3),param_2,param_3,param_4);
      iVar2 = (lVar3 != -1) - 1;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



undefined4 FUN_1801e2e0c(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
  }
  uVar1 = FUN_1801e2b88();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



undefined4 FUN_1801e2ea4(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
    param_1 = PTR_PTR_1802a0858._0_4_;
  }
  uVar1 = FUN_1801e2b88(param_1,(longlong)param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;

  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_1801e2e0c(_File,*_Pos,0);
    return iVar1;
  }
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 0x16;
  FUN_1801e1344();
  return -1;
}



undefined4 operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;

  FUN_1801e230c(*param_2);
  uVar1 = FUN_1801e2fb8(param_3);
  FUN_1801e2318(*param_4);
  return uVar1;
}



undefined8 FUN_1801e2fb8(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;

  uVar1 = *(ulonglong *)*param_1;
  FUN_1801e33f8(*(undefined8 *)param_1[1],param_1[2]);
  __acrt_stdio_free_buffer_nolock(*(undefined8 *)param_1[1]);
  LOCK();
  *(uint *)(*(longlong *)param_1[1] + 0x14) = *(uint *)(*(longlong *)param_1[1] + 0x14) & 0xfffff81f;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    lVar2 = *(longlong *)param_1[4];
    uVar4 = (undefined4)(uVar1 & 0xfffffffffffffffe);
    if (lVar2 == 0) {
      lVar2 = _calloc_base(uVar1 & 0xfffffffffffffffe,1);
      FUN_1801f42e0(0);
      if (lVar2 == 0) {
        _DAT_1802a98b8 = _DAT_1802a98b8 + 1;
        return 0xffffffff;
      }
      plVar3 = *(longlong **)param_1[1];
      LOCK();
      *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x140;
      UNLOCK();
      *(undefined4 *)(plVar3 + 4) = uVar4;
      *plVar3 = lVar2;
      plVar3[1] = lVar2;
      goto LAB_1801e3089;
    }
    plVar3 = *(longlong **)param_1[1];
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x180;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = uVar4;
  }
  else {
    plVar3 = *(longlong **)param_1[1];
    lVar2 = (longlong)plVar3 + 0x1c;
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x400;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = 2;
  }
  *plVar3 = lVar2;
  plVar3[1] = lVar2;
LAB_1801e3089:
  *(undefined4 *)(plVar3 + 2) = 0;
  return 0;
}



undefined4 FUN_1801e30a0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  int *local_28;
  undefined8 *local_20;

  local_98[0] = 0;
  local_70 = DAT_1802a9ca0 == 0;
  local_88 = 0;
  local_68 = '\0';
  local_60 = '\0';
  if ((bool)local_70) {
    local_80 = PTR_PTR_1802a0858._0_4_;
    uStack_7c = PTR_PTR_1802a0858._4_4_;
    uStack_78 = PTR_DAT_1802a0860._0_4_;
    uStack_74 = PTR_DAT_1802a0860._4_4_;
  }
  local_res8[0] = param_3;
  local_res10 = param_4;
  local_res20 = param_1;
  local_58 = param_2;
  if ((param_1 == 0) || ((param_3 != 4 && (((param_3 != 0 && (param_3 != 0x40)) || (0x7ffffffd < param_4 - 2U)))))) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_1801e128c(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_40 = &local_res10;
    local_38 = &local_res20;
    local_30 = local_98;
    local_28 = local_res8;
    local_20 = &local_58;
    local_50 = param_1;
    local_48 = param_1;
    uVar2 = operator()<>(local_res18,&local_48,&local_40,&local_50);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1801e0f58(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1801e0f58(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



void FUN_1801e31d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;

  FUN_1801e230c(*param_2);
  if ((*(longlong *)*param_3 != 0) && (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)) {
        iVar2 = FUN_1801e3484(*(undefined8 *)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_1801e2318(*param_4);
  return;
}



void FUN_1801e3274(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  undefined4 *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_1802a98b0 + DAT_1802a98a8;
  for (plVar3 = DAT_1802a98b0; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_1801e31d8(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}



undefined4 FUN_1801e3358(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;

  FUN_1801e230c(*param_2);
  uVar1 = FUN_1801e3484(*(undefined8 *)*param_3);
  FUN_1801e2318(*param_4);
  return uVar1;
}



int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  char *local_18;
  int *local_10;

  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28 = 8;
  local_24 = 8;
  local_res8[0] = param_1;
  FUN_1801e3274(local_res10,&local_24,&local_20,&local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}



undefined8 FUN_1801e33f8(FILE *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;

  uVar2 = *(uint *)((longlong)&param_1->_base + 4);
  if ((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) {
    iVar5 = *(int *)&param_1->_ptr - param_1->_cnt;
    *(undefined4 *)&param_1->_base = 0;
    pcVar3 = *(char **)&param_1->_cnt;
    param_1->_ptr = pcVar3;
    if (0 < iVar5) {
      iVar4 = _fileno(param_1);
      iVar4 = FUN_1801f4e7c(iVar4,pcVar3,iVar5,param_2);
      if (iVar5 != iVar4) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) != 0) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}



int FUN_1801e3484(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  FILE *in_RCX;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
    param_1 = PTR_PTR_1802a0858._0_4_;
  }
  if (in_RCX == (FILE *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_1801e3509;
  }
  iVar1 = FUN_1801e33f8(param_1,local_48);
  if (iVar1 == 0) {
    if ((*(uint *)((longlong)&in_RCX->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(in_RCX);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_1801e34e4;
    }
    iVar1 = 0;
  }
  else {
LAB_1801e34e4:
    iVar1 = -1;
  }
LAB_1801e3509:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}



int __cdecl common_flush_all(bool param_1)

{
  int iVar1;

  iVar1 = common_flush_all(true);
  return iVar1;
}



int __cdecl fflush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  undefined1 local_res8 [8];
  FILE *local_res10;
  FILE *local_res18;
  FILE **local_res20;
  FILE *local_18 [3];

  local_res10 = _File;
  if (_File == (FILE *)0x0) {
    iVar2 = common_flush_all(false);
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4);
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      local_res20 = &local_res10;
      local_res18 = _File;
      local_18[0] = _File;
      iVar2 = FUN_1801e3358(local_res8,local_18,&local_res20,&local_res18);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



undefined4 operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;

  FUN_1801e230c(*param_2);
  uVar1 = FUN_1801e4464(param_3);
  FUN_1801e2318(*param_4);
  return uVar1;
}



void FUN_1801e3608(ulonglong param_1,undefined1 *param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  longlong local_4e0;
  undefined1 *local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined1 local_4c0;
  undefined4 local_4bf;
  undefined2 local_4bb;
  undefined1 local_4b9;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_508;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_4e0 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_4e8 = 0;
    FUN_1801e128c(0,0,0,0);
  }
  local_4bf = 0;
  local_4bb = 0;
  local_4b9 = 0;
  local_4c8 = 0;
  if (((param_1 & 2) != 0) || (local_4c0 = 0, param_2 == (undefined1 *)0x0)) {
    local_4c0 = 1;
  }
  local_4b0 = param_5;
  local_58 = &local_4d8;
  local_498 = 0;
  local_4a0 = param_6;
  local_494 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_4d8 = param_2;
  local_4d0 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_1801e4a00(&local_4b8);
  if (param_2 == (undefined1 *)0x0) goto LAB_1801e376d;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if (param_3 == 0) goto LAB_1801e376d;
    }
    else {
      if (param_3 == 0) goto LAB_1801e376d;
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_1801e376d;
      }
    }
    if (local_4c8 == param_3) {
      param_2[param_3 + -1] = 0;
      goto LAB_1801e376d;
    }
  }
  else if (((param_3 == 0) && (iVar1 != 0)) || (local_4c8 == param_3)) goto LAB_1801e376d;
  param_2[local_4c8] = 0;
LAB_1801e376d:
  FUN_1801f42e0(uStack_60);
}



bool FUN_1801e37b8(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;

  if (param_2 < 0x8000000000000000) {
    param_2 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (param_2 < 0x401)) || (param_2 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar2 = true;
    }
    else {
      lVar1 = _malloc_base(param_2);
      bVar2 = lVar1 != 0;
      if (bVar2) {
        FUN_1801f42e0(*(undefined8 *)(param_1 + 0x408));
        *(longlong *)(param_1 + 0x408) = lVar1;
        *(ulonglong *)(param_1 + 0x400) = param_2;
      }
      FUN_1801f42e0(0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar2 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar2;
}



uint FUN_1801e3860(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;

  pcVar2 = (char *)*param_2;
  uVar8 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_1801e6ae4();
    *puVar7 = 0x16;
    FUN_1801e1344();
LAB_1801e38d1:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_1);
    goto LAB_1801e38d1;
  }
  cVar13 = *pcVar2;
  pcVar11 = pcVar2 + 1;
  *param_2 = (longlong)pcVar11;
  bVar9 = param_4 | 2;
  if ((cVar13 == '-') || (bVar9 = param_4, cVar13 == '+')) {
    param_4 = bVar9;
    cVar13 = *pcVar11;
    pcVar11 = pcVar2 + 2;
    *param_2 = (longlong)pcVar11;
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      iVar5 = cVar13 + -0x30;
LAB_1801e3957:
      if (iVar5 != 0) goto LAB_1801e39a5;
      cVar1 = *pcVar11;
      *param_2 = (longlong)(pcVar11 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar11;
        uVar8 = 8;
        if (param_3 != 0) {
          uVar8 = (ulonglong)param_3;
        }
        if ((cVar1 != '\0') && (*pcVar11 != cVar1)) {
          puVar7 = (undefined4 *)FUN_1801e6ae4();
          *puVar7 = 0x16;
          FUN_1801e1344();
        }
        goto LAB_1801e39b1;
      }
      cVar13 = pcVar11[1];
      *param_2 = (longlong)(pcVar11 + 2);
      uVar8 = 0x10;
    }
    else {
      if ((byte)(cVar13 + 0x9fU) < 0x1a) {
        iVar5 = cVar13 + -0x57;
        goto LAB_1801e3957;
      }
      if ((byte)(cVar13 + 0xbfU) < 0x1a) {
        iVar5 = cVar13 + -0x37;
        goto LAB_1801e3957;
      }
LAB_1801e39a5:
      uVar8 = 10;
    }
    if (param_3 != 0) {
      uVar8 = (ulonglong)param_3;
    }
  }
LAB_1801e39b1:
  pcVar11 = (char *)*param_2;
  uVar12 = 0xffffffff % uVar8;
  uVar14 = 0;
  while( true ) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      uVar10 = (int)cVar13 - 0x30;
    }
    else if ((byte)(cVar13 + 0x9fU) < 0x1a) {
      uVar10 = (int)cVar13 - 0x57;
    }
    else if ((byte)(cVar13 + 0xbfU) < 0x1a) {
      uVar10 = (int)cVar13 - 0x37;
    }
    else {
      uVar10 = 0xffffffff;
    }
    if ((uint)uVar8 <= uVar10) break;
    cVar13 = *pcVar11;
    uVar6 = uVar14 * (uint)uVar8;
    uVar10 = uVar6 + uVar10;
    uVar12 = (ulonglong)uVar10;
    param_4 = param_4 | (uVar10 < uVar6 || (uint)(0xffffffff / uVar8) < uVar14) << 2 | 8U;
    pcVar11 = pcVar11 + 1;
    *param_2 = (longlong)pcVar11;
    uVar14 = uVar10;
  }
  *param_2 = (longlong)(pcVar11 + -1);
  if ((cVar13 != '\0') && (pcVar11[-1] != cVar13)) {
    puVar7 = (undefined4 *)FUN_1801e6ae4(uVar10,uVar12);
    *puVar7 = 0x16;
    FUN_1801e1344();
  }
  if ((param_4 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) == 0) goto LAB_1801e3ae5;
LAB_1801e3ae2:
      uVar14 = -uVar14;
      goto LAB_1801e3ae5;
    }
    if ((param_4 & 2) == 0) {
      if (uVar14 < 0x80000000) goto LAB_1801e3ae5;
    }
    else if (uVar14 < 0x80000001) goto LAB_1801e3ae2;
    bVar9 = 1;
    bVar4 = param_4;
  }
  else {
    bVar9 = param_4;
    bVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((bVar4 & bVar9) != 0) {
    plVar3 = (longlong *)param_2[1];
    if ((param_4 & 2) == 0) {
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = *param_2;
      }
      return 0x7fffffff;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *param_2;
    }
    return 0x80000000;
  }
  uVar14 = 0xffffffff;
LAB_1801e3ae5:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar14;
  }
  return uVar14;
}



ulonglong FUN_1801e3b14(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1801e3b92;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1801e3b92;
        }
        goto LAB_1801e3b62;
      }
LAB_1801e3c67:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1801e3b92;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1801e3b62:
    if (iVar9 == 1) goto LAB_1801e3c67;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1801e3b92:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1801e37b8(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1801e42c0(param_1,uVar7);
  }
  else {
    FUN_1801e4120(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) && ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0'))))
  {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}



ulonglong FUN_1801e3d18(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1801e3d96;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1801e3d96;
        }
        goto LAB_1801e3d66;
      }
LAB_1801e3e6b:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1801e3d96;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1801e3d66:
    if (iVar9 == 1) goto LAB_1801e3e6b;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1801e3d96:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1801e37b8(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1801e4330(param_1,uVar7);
  }
  else {
    FUN_1801e4190(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) && ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0'))))
  {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}



ulonglong FUN_1801e3f1c(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;

  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1801e3f9a;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1801e3f9a;
        }
        goto LAB_1801e3f6a;
      }
LAB_1801e406f:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1801e3f9a;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1801e3f6a:
    if (iVar9 == 1) goto LAB_1801e406f;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1801e3f9a:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1801e37b8(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1801e43e0(param_1,uVar7);
  }
  else {
    FUN_1801e423c(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) && ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0'))))
  {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}



void FUN_1801e4120(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;

  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



void FUN_1801e4190(longlong param_1,uint param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;

  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  uVar1 = (ulonglong)param_2;
  while ((0 < *(int *)(param_1 + 0x30) || ((int)uVar1 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)uVar1 + (char)(uVar1 / 10) * -10 + '0';
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
    uVar1 = uVar1 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



void FUN_1801e423c(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;

  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}



void FUN_1801e42c0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;

  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



void FUN_1801e4330(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;

  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



void FUN_1801e43e0(longlong param_1,ulonglong param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;

  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}



void FUN_1801e4464(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;

  local_28 = DAT_1802a0400 ^ (ulonglong)auStack_4b8;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1801f5564(uVar2);
  local_480 = *(undefined8 *)param_1[4];
  local_38 = *(undefined8 *)*param_1;
  local_488 = *(undefined8 *)param_1[3];
  local_498 = *(undefined8 *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1801e467c(&local_498);
  FUN_1801f42e0(uStack_40);
  uStack_40 = 0;
  FUN_1801f562c(uVar3,uVar2,uVar1);
}



void FUN_1801e4580(char *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;

  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != *(char *)**(undefined8 **)(*param_2 + 0xf8)))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    pcVar3 = pcVar3 + -2;
    if (*pcVar2 != *(char *)**(undefined8 **)(*param_2 + 0xf8)) {
      pcVar3 = pcVar2;
    }
    lVar4 = (longlong)param_1 - (longlong)pcVar3;
    do {
      cVar1 = pcVar3[lVar4];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}



undefined1 FUN_1801e45ec(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;

  lVar1 = *(longlong *)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 1;
  uVar2 = *(undefined8 *)(lVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_1801e3860(lVar1,&local_18,10,1);
  *param_2 = uVar3;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (uVar4 = 0, *(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (uVar4 = 0, *(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)(lVar1 + 0x2c) = uVar2;
  return uVar4;
}



undefined4 FUN_1801e467c(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  longlong lVar7;

  lVar7 = *(longlong *)(param_1 + 8);
  if (*(_iobuf **)(param_1 + 0x460) == (_iobuf *)0x0) {
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
  }
  else {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(*(_iobuf **)(param_1 + 0x460));
    if (!bVar2) {
      return 0xffffffff;
    }
    pcVar6 = *(char **)(param_1 + 0x10);
    if (pcVar6 != (char *)0x0) {
      iVar4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar4;
      do {
        if (iVar4 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        cVar3 = *pcVar6;
        while( true ) {
          pcVar6 = pcVar6 + 1;
          *(char **)(param_1 + 0x10) = pcVar6;
          *(char *)(param_1 + 0x39) = cVar3;
          if ((cVar3 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          bVar5 = 0;
          if ((byte)(cVar3 - 0x20U) < 0x5b) {
            bVar5 = (&DAT_180246001)[(ulonglong)((int)cVar3 - 0x20U & 0x7f) * 2];
          }
          bVar5 = (&DAT_180246000)[(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar5 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar5;
          if (7 < bVar5) {
LAB_1801e49cc:
            lVar7 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar7 + 0x30) = 1;
            *(undefined4 *)(lVar7 + 0x2c) = 0x16;
            lVar7 = *(longlong *)(param_1 + 8);
            goto LAB_1801e49e4;
          }
          if (bVar5 == 0) {
            lVar7 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVar7 + 0x28) == '\0') {
              FUN_1801e6290(lVar7);
            }
            cVar3 = *(char *)(param_1 + 0x39);
            if ((-2 < cVar3) && ((*(ushort *)(**(longlong **)(lVar7 + 0x18) + (longlong)cVar3 * 2) & 0x8000) != 0)) {
              if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                 (iVar4 = FUN_1801e2488((longlong)cVar3 & 0xffffffff,*(undefined8 *)(param_1 + 0x460),
                                        *(undefined8 *)(param_1 + 8)), iVar4 == -1)) {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
              cVar3 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar3;
              if (cVar3 == '\0') {
                lVar7 = *(longlong *)(param_1 + 8);
                *(undefined1 *)(lVar7 + 0x30) = 1;
                *(undefined4 *)(lVar7 + 0x2c) = 0x16;
                FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                goto LAB_1801e49cc;
              }
            }
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (iVar4 = FUN_1801e2488((int)cVar3,*(undefined8 *)(param_1 + 0x460),*(undefined8 *)(param_1 + 8)),
               iVar4 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
          }
          else if (bVar5 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar5 == 2) {
            if (cVar3 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar3 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar3 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar3 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar3 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar5 == 3) {
              if (cVar3 == '*') {
                piVar1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar1 + 2;
                iVar4 = *piVar1;
                *(int *)(param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar4;
                }
LAB_1801e480d:
                cVar3 = '\x01';
              }
              else {
                lVar7 = param_1 + 0x2c;
LAB_1801e47b7:
                cVar3 = FUN_1801e45ec(param_1,lVar7);
              }
            }
            else {
              if (bVar5 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_1801e4969;
              }
              if (bVar5 == 5) {
                if (cVar3 == '*') {
                  piVar1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar1 + 2;
                  iVar4 = *piVar1;
                  *(int *)(param_1 + 0x30) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1801e480d;
                }
                lVar7 = param_1 + 0x30;
                goto LAB_1801e47b7;
              }
              if (bVar5 == 6) {
                cVar3 = FUN_1801e50d8(param_1);
              }
              else {
                if (bVar5 != 7) {
                  return 0xffffffff;
                }
                cVar3 = FUN_1801e53e8(param_1);
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1801e4969:
          pcVar6 = *(char **)(param_1 + 0x10);
          cVar3 = *pcVar6;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar4 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    lVar7 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
    lVar7 = *(longlong *)(param_1 + 8);
  }
LAB_1801e49e4:
  FUN_1801e128c(0,0,0,0,0,lVar7);
  return 0xffffffff;
}



undefined4 FUN_1801e4a00(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;

  lVar5 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar3;
      do {
        if (iVar3 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        while( true ) {
          cVar2 = **(char **)(param_1 + 0x10);
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          *(char *)(param_1 + 0x39) = cVar2;
          if ((cVar2 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          bVar4 = 0;
          if ((byte)(cVar2 - 0x20U) < 0x5b) {
            bVar4 = (&DAT_180246101)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
          }
          bVar4 = (&DAT_180246100)[(ulonglong)((uint)bVar4 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar4;
          if (7 < bVar4) goto LAB_1801e4d4a;
          if (bVar4 == 0) {
            lVar5 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVar5 + 0x28) == '\0') {
              FUN_1801e6290(lVar5);
            }
            cVar2 = *(char *)(param_1 + 0x39);
            if ((-2 < cVar2) && ((*(ushort *)(**(longlong **)(lVar5 + 0x18) + (longlong)cVar2 * 2) & 0x8000) != 0)) {
              lVar5 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
                if (*(char *)(lVar5 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
                *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
              }
              cVar2 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar2;
              if (cVar2 == '\0') {
                lVar5 = *(longlong *)(param_1 + 8);
                *(undefined1 *)(lVar5 + 0x30) = 1;
                *(undefined4 *)(lVar5 + 0x2c) = 0x16;
                FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                goto LAB_1801e4d4a;
              }
            }
            lVar5 = *(longlong *)(param_1 + 0x460);
            if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
              if (*(char *)(lVar5 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
              *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
              **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
            }
          }
          else if (bVar4 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar4 == 2) {
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else if (bVar4 == 3) {
            if (cVar2 == '*') {
              piVar1 = *(int **)(param_1 + 0x18);
              *(int **)(param_1 + 0x18) = piVar1 + 2;
              iVar3 = *piVar1;
              *(int *)(param_1 + 0x2c) = iVar3;
              if (iVar3 < 0) {
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                *(int *)(param_1 + 0x2c) = -iVar3;
              }
LAB_1801e4b8e:
              cVar2 = '\x01';
            }
            else {
              lVar5 = param_1 + 0x2c;
LAB_1801e4b39:
              cVar2 = FUN_1801e45ec(param_1,lVar5);
            }
LAB_1801e4b90:
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
          else {
            if (bVar4 != 4) {
              if (bVar4 == 5) {
                if (cVar2 == '*') {
                  piVar1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar1 + 2;
                  iVar3 = *piVar1;
                  *(int *)(param_1 + 0x30) = iVar3;
                  if (iVar3 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1801e4b8e;
                }
                lVar5 = param_1 + 0x30;
                goto LAB_1801e4b39;
              }
              if (bVar4 == 6) {
                cVar2 = FUN_1801e5260(param_1);
              }
              else {
                if (bVar4 != 7) {
                  return 0xffffffff;
                }
                cVar2 = FUN_1801e5920(param_1);
              }
              goto LAB_1801e4b90;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
        }
        if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x24) != '\a')) {
LAB_1801e4d4a:
          lVar5 = *(longlong *)(param_1 + 8);
          *(undefined1 *)(lVar5 + 0x30) = 1;
          *(undefined4 *)(lVar5 + 0x2c) = 0x16;
          lVar5 = *(longlong *)(param_1 + 8);
          goto LAB_1801e4a58;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar3 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    lVar5 = *(longlong *)(param_1 + 8);
  }
LAB_1801e4a58:
  FUN_1801e128c(0,0,0,0,0,lVar5);
  return 0xffffffff;
}



undefined4 FUN_1801e4d68(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  longlong lVar6;

  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x10);
    if (pcVar5 != (char *)0x0) {
      iVar3 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar3;
      do {
        if (iVar3 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        cVar2 = *pcVar5;
        while( true ) {
          pcVar5 = pcVar5 + 1;
          *(char **)(param_1 + 0x10) = pcVar5;
          *(char *)(param_1 + 0x39) = cVar2;
          if ((cVar2 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          bVar4 = 0;
          if ((byte)(cVar2 - 0x20U) < 0x5b) {
            bVar4 = (&DAT_180246001)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
          }
          bVar4 = (&DAT_180246000)[(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar4 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar4;
          if (7 < bVar4) {
LAB_1801e50b9:
            lVar6 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar6 + 0x30) = 1;
            *(undefined4 *)(lVar6 + 0x2c) = 0x16;
            lVar6 = *(longlong *)(param_1 + 8);
            goto LAB_1801e4dc3;
          }
          if (bVar4 == 0) {
            lVar6 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVar6 + 0x28) == '\0') {
              FUN_1801e6290(lVar6);
            }
            cVar2 = *(char *)(param_1 + 0x39);
            if ((-2 < cVar2) && ((*(ushort *)(**(longlong **)(lVar6 + 0x18) + (longlong)cVar2 * 2) & 0x8000) != 0)) {
              lVar6 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
                if (*(char *)(lVar6 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
                *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
              }
              cVar2 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar2;
              if (cVar2 == '\0') {
                lVar6 = *(longlong *)(param_1 + 8);
                *(undefined1 *)(lVar6 + 0x30) = 1;
                *(undefined4 *)(lVar6 + 0x2c) = 0x16;
                FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                goto LAB_1801e50b9;
              }
            }
            lVar6 = *(longlong *)(param_1 + 0x460);
            if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
              if (*(char *)(lVar6 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
              *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
              **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
            }
          }
          else if (bVar4 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar4 == 2) {
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar4 == 3) {
              if (cVar2 == '*') {
                piVar1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar1 + 2;
                iVar3 = *piVar1;
                *(int *)(param_1 + 0x2c) = iVar3;
                if (iVar3 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar3;
                }
LAB_1801e4eff:
                cVar2 = '\x01';
              }
              else {
                lVar6 = param_1 + 0x2c;
LAB_1801e4ea9:
                cVar2 = FUN_1801e45ec(param_1,lVar6);
              }
            }
            else {
              if (bVar4 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_1801e5040;
              }
              if (bVar4 == 5) {
                if (cVar2 == '*') {
                  piVar1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar1 + 2;
                  iVar3 = *piVar1;
                  *(int *)(param_1 + 0x30) = iVar3;
                  if (iVar3 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1801e4eff;
                }
                lVar6 = param_1 + 0x30;
                goto LAB_1801e4ea9;
              }
              if (bVar4 == 6) {
                cVar2 = FUN_1801e5260(param_1);
              }
              else {
                if (bVar4 != 7) {
                  return 0xffffffff;
                }
                cVar2 = FUN_1801e5920(param_1);
              }
            }
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1801e5040:
          pcVar5 = *(char **)(param_1 + 0x10);
          cVar2 = *pcVar5;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar3 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
  }
LAB_1801e4dc3:
  FUN_1801e128c(0,0,0,0,0,lVar6);
  return 0xffffffff;
}



ulonglong FUN_1801e50d8(byte *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  ulonglong uVar5;
  char *pcVar6;

  bVar4 = param_1[0x39];
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,bVar4);
  if (bVar4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1801e53e8();
      return uVar5;
    }
  }
  else if (bVar4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1801e510a:
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined4 *)(lVar2 + 0x2c) = 0x16;
      uVar5 = FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1801e510a;
    if (bVar4 == 0x49) {
      pcVar3 = *(char **)(param_1 + 0x10);
      cVar1 = *pcVar3;
      pcVar6 = (char *)CONCAT71(uVar7,cVar1);
      if ((cVar1 == '3') && (pcVar3[1] == '2')) {
        pcVar6 = pcVar3 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(char **)(param_1 + 0x10) = pcVar6;
      }
      else if (cVar1 == '6') {
        if (pcVar3[1] == '4') {
          pcVar6 = pcVar3 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(char **)(param_1 + 0x10) = pcVar6;
        }
      }
      else {
        bVar4 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar4);
        if ((bVar4 < 0x21) && ((0x120821001U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (bVar4 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (bVar4 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (bVar4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (bVar4 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1801e5258;
        }
        if (bVar4 != 0x6c) {
          if (bVar4 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1801e5258;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x4;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)pcVar6;
    }
  }
LAB_1801e5258:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



ulonglong FUN_1801e5260(byte *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  ulonglong uVar5;
  char *pcVar6;

  bVar4 = param_1[0x39];
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,bVar4);
  if (bVar4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1801e5920();
      return uVar5;
    }
  }
  else if (bVar4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1801e5292:
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined4 *)(lVar2 + 0x2c) = 0x16;
      uVar5 = FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1801e5292;
    if (bVar4 == 0x49) {
      pcVar3 = *(char **)(param_1 + 0x10);
      cVar1 = *pcVar3;
      pcVar6 = (char *)CONCAT71(uVar7,cVar1);
      if ((cVar1 == '3') && (pcVar3[1] == '2')) {
        pcVar6 = pcVar3 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(char **)(param_1 + 0x10) = pcVar6;
      }
      else if (cVar1 == '6') {
        if (pcVar3[1] == '4') {
          pcVar6 = pcVar3 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(char **)(param_1 + 0x10) = pcVar6;
        }
      }
      else {
        bVar4 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar4);
        if ((bVar4 < 0x21) && ((0x120821001U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (bVar4 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (bVar4 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (bVar4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (bVar4 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1801e53e0;
        }
        if (bVar4 != 0x6c) {
          if (bVar4 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1801e53e0;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x4;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)pcVar6;
    }
  }
LAB_1801e53e0:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



void FUN_1801e53e8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined2 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  ulonglong uVar11;

  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_1802a0400 ^ (ulonglong)auStack_88;
  cVar5 = *(char *)(param_1 + 0x39);
  uVar9 = 0x78;
  if (cVar5 < 'e') {
    if (cVar5 == 'd') {
LAB_1801e54cb:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1801e54cf:
      cVar5 = FUN_1801e3d18(param_1,0);
    }
    else if (cVar5 < 'T') {
      if (cVar5 == 'S') {
LAB_1801e5511:
        cVar5 = FUN_1801e61f4(param_1);
      }
      else {
        if (cVar5 != 'A') {
          if (cVar5 == 'C') {
LAB_1801e5485:
            cVar5 = FUN_1801e6068(param_1,0);
            goto LAB_1801e5533;
          }
          if (((cVar5 != 'E') && (cVar5 != 'F')) && (cVar5 != 'G')) {
          }
        }
LAB_1801e545c:
        cVar5 = FUN_1801e5e0c(param_1);
      }
    }
    else {
      if (cVar5 == 'X') goto LAB_1801e5529;
      if (cVar5 != 'Z') {
        if (cVar5 != 'a') {
          if (cVar5 != 'c') {
          }
          goto LAB_1801e5485;
        }
        goto LAB_1801e545c;
      }
      cVar5 = FUN_1801e5d90(param_1);
    }
  }
  else if (cVar5 < 'p') {
    if (cVar5 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar5 = FUN_1801e3b14(param_1,0);
    }
    else {
      if (((cVar5 == 'e') || (cVar5 == 'f')) || (cVar5 == 'g')) goto LAB_1801e545c;
      if (cVar5 == 'i') goto LAB_1801e54cb;
      if (cVar5 != 'n') {
      }
      cVar5 = FUN_1801e613c(param_1);
    }
  }
  else {
    if (cVar5 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1801e5529:
      uVar8 = 1;
    }
    else {
      if (cVar5 == 's') goto LAB_1801e5511;
      if (cVar5 == 'u') goto LAB_1801e54cf;
      if (cVar5 != 'x') {
      }
      uVar8 = 0;
    }
    cVar5 = FUN_1801e3f1c(param_1,uVar8);
  }
LAB_1801e5533:
  uVar13 = 0;
  if (cVar5 == '\0') {
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
  }
  uVar11 = local_50 & 0xffffffffff000000;
  uVar10 = *(uint *)(param_1 + 0x28);
  uVar12 = uVar13;
  if ((uVar10 >> 4 & 1) != 0) {
    local_50._1_7_ = (undefined7)(uVar11 >> 8);
    if ((uVar10 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar10 >> 1 & 1) == 0) goto LAB_1801e558f;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    uVar12 = 1;
    uVar11 = local_50;
  }
LAB_1801e558f:
  local_50 = uVar11;
  cVar5 = *(char *)(param_1 + 0x39);
  if (((cVar5 + 0xa8U & 0xdf) != 0) || (bVar4 = true, (uVar10 >> 5 & 1) == 0)) {
    bVar4 = false;
  }
  if ((bVar4) || ((cVar5 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_50 + uVar12) = 0x30;
    if ((cVar5 == 'X') || (cVar5 == 'A')) {
      uVar9 = 0x58;
    }
    *(undefined1 *)((longlong)&local_50 + uVar12 + 1) = uVar9;
    uVar12 = uVar12 + 2;
  }
  iVar15 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)uVar12;
  if (((uVar10 & 0xc) == 0) && (uVar8 = *(undefined8 *)(param_1 + 8), uVar11 = uVar13, 0 < iVar15)) {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (iVar6 = FUN_1801e2488(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar6 != -1))) {
      iVar6 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar6 + 1;
      if ((iVar6 == -2) || (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_1801e5644;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_1801e5644:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_1801e6448(plVar2,&local_50,uVar12,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)uVar12;
  }
  if ((((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0)) &&
     (uVar8 = *(undefined8 *)(param_1 + 8), uVar11 = uVar13, 0 < iVar15)) {
    while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
           (iVar6 = FUN_1801e2488(0x30,*plVar2,uVar8), iVar6 != -1))) {
      iVar6 = *piVar1;
      *piVar1 = iVar6 + 1;
      if ((iVar6 == -2) || (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_1801e56eb;
    }
    *piVar1 = -1;
  }
LAB_1801e56eb:
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_1801e6448(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1801e6290(lVar7);
    }
    puVar14 = *(undefined2 **)(param_1 + 0x40);
    if (*(int *)(*(longlong *)(lVar7 + 0x18) + 0xc) == 0xfde9) {
      local_50 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        piVar1 = (int *)(param_1 + 0x20);
        plVar2 = (longlong *)(param_1 + 0x460);
        uVar11 = uVar13;
        do {
          uVar3 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar7 = FUN_1801f93a8(local_40,uVar3,&local_50,*(undefined8 *)(param_1 + 8));
          if (lVar7 == -1) {
            *piVar1 = -1;
            break;
          }
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_1801e6448(plVar2,local_40,lVar7,piVar1);
          }
          else {
            *piVar1 = *piVar1 + (int)lVar7;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 != *(uint *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      plVar2 = (longlong *)(param_1 + 0x460);
      uVar11 = uVar13;
      do {
        local_50 = local_50 & 0xffffffff00000000;
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        local_68 = *(undefined8 *)(param_1 + 8);
        iVar6 = FUN_1801f8e88(&local_50,local_40,6,uVar3);
        if (iVar6 != 0) {
LAB_1801e5839:
          *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          break;
        }
        if ((int)local_50 == 0) goto LAB_1801e5839;
        if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
          local_68 = *(undefined8 *)(param_1 + 8);
          FUN_1801e6448(plVar2,local_40,local_50 & 0xffffffff,param_1 + 0x20);
        }
        else {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (int)local_50;
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != *(uint *)(param_1 + 0x48));
    }
  }
  if (((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) &&
     (uVar8 = *(undefined8 *)(param_1 + 8), 0 < iVar15)) {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (iVar6 = FUN_1801e2488(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar6 != -1))) {
      iVar6 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar6 + 1;
      if (iVar6 == -2) {
      }
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
      if (iVar15 <= (int)uVar10) {
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
}



void FUN_1801e5920(longlong param_1)

{
  int *piVar1;
  string_output_adapter<char> *this;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  char local_40 [8];
  ulonglong local_38;

  local_38 = DAT_1802a0400 ^ (ulonglong)auStackY_88;
  cVar6 = *(char *)(param_1 + 0x39);
  uVar10 = 0x78;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_1801e59f2:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1801e59f6:
      cVar6 = FUN_1801e3d18(param_1,0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_1801e5a35:
        cVar6 = FUN_1801e61f4();
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_1801e59b5:
            cVar6 = FUN_1801e6068(param_1,0);
            goto LAB_1801e5a51;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) {
          }
        }
LAB_1801e598f:
        cVar6 = FUN_1801e5e0c();
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_1801e5a4a;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') {
          }
          goto LAB_1801e59b5;
        }
        goto LAB_1801e598f;
      }
      cVar6 = FUN_1801e5d90();
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_1801e3b14(param_1,0);
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_1801e598f;
      if (cVar6 == 'i') goto LAB_1801e59f2;
      if (cVar6 != 'n') {
      }
      cVar6 = FUN_1801e613c();
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1801e5a4a:
      uVar8 = CONCAT71((uint7)(uint3)(cVar6 >> 7),1);
    }
    else {
      if (cVar6 == 's') goto LAB_1801e5a35;
      if (cVar6 == 'u') goto LAB_1801e59f6;
      if (cVar6 != 'x') {
      }
      uVar8 = 0;
    }
    cVar6 = FUN_1801e3f1c(param_1,uVar8);
  }
LAB_1801e5a51:
  if (cVar6 == '\0') {
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
  }
  local_48 = (uint)local_48._3_1_ << 0x18;
  lVar11 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) goto LAB_1801e5aab;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar11 = 1;
  }
LAB_1801e5aab:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) == 0) && ((uVar3 >> 5 & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_48 + lVar11) = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar10 = 0x58;
    }
    *(undefined1 *)((longlong)&local_48 + lVar11 + 1) = uVar10;
    lVar11 = lVar11 + 2;
  }
  iVar9 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar3 & 0xc) == 0) && (iVar12 = 0, 0 < iVar9)) {
    iVar7 = *(int *)(param_1 + 0x20);
    do {
      lVar4 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
        if (*(char *)(lVar4 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar7;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
      }
      iVar7 = *(int *)(param_1 + 0x20);
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar11,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar9)))) {
    iVar7 = *piVar1;
    do {
      lVar11 = *(longlong *)this;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *piVar1 = iVar7;
      }
      else {
        *piVar1 = iVar7 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar7 = *piVar1;
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,*(char **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1801e6290(lVar11);
    }
    puVar13 = *(undefined2 **)(param_1 + 0x40);
    iVar12 = 0;
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          uVar2 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar11 = FUN_1801f93a8(&local_48,uVar2,local_40);
          if (lVar11 == -1) goto LAB_1801e5c76;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)lVar11,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8));
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_48 = 0;
        iVar7 = FUN_1801f8e88(&local_48,local_40,6);
        if ((iVar7 != 0) || (local_48 == 0)) goto LAB_1801e5c76;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,local_40,local_48,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8));
        iVar12 = iVar12 + 1;
      } while (iVar12 != *(int *)(param_1 + 0x48));
    }
  }
LAB_1801e5cf4:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar7 = 0;
    if (0 < iVar9) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar7 = iVar7 + 1, iVar7 < iVar9));
    }
  }
LAB_1801e5c76:
  *piVar1 = -1;
  goto LAB_1801e5cf4;
}



undefined8 FUN_1801e5d90(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  bool bVar6;

  puVar3 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar3 + 1;
  puVar4 = (ushort *)*puVar3;
  if ((puVar4 == (ushort *)0x0) || (*(longlong *)(puVar4 + 4) == 0)) {
    uVar5 = 6;
    *(char **)(param_1 + 0x40) = "(null)";
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
LAB_1801e5dda:
      bVar6 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar6 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_1801e5dda;
      bVar6 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(puVar4 + 4);
    uVar1 = *puVar4;
    uVar5 = (ulonglong)uVar1;
    if (bVar6) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_1801e5e06;
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
LAB_1801e5e06:
  *(int *)(param_1 + 0x48) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



undefined8 FUN_1801e5e0c(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 local_res8;

  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10;
  iVar4 = *(int *)(param_1 + 6);
  if (iVar4 < 0) {
    iVar4 = (-(uint)((*(char *)((longlong)param_1 + 0x39) + 0xbfU & 0xdf) != 0) & 0xfffffff9) + 0xd;
    *(int *)(param_1 + 6) = iVar4;
  }
  else if ((iVar4 == 0) &&
          ((*(char *)((longlong)param_1 + 0x39) == 'g' || (*(char *)((longlong)param_1 + 0x39) == 'G')))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar4 = 1;
  }
  cVar3 = FUN_1801e37b8(param_1 + 10,(longlong)(iVar4 + 0x15d),param_1[1]);
  uVar13 = 0x200;
  if (cVar3 == '\0') {
    if (param_1[0x8b] == 0) {
      iVar4 = 0x200;
    }
    else {
      iVar4 = (int)((ulonglong)param_1[0x8a] >> 1);
    }
    iVar4 = iVar4 + -0x15d;
    *(int *)(param_1 + 6) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 6);
  }
  puVar5 = (undefined8 *)param_1[0x8b];
  if ((undefined8 *)param_1[0x8b] == (undefined8 *)0x0) {
    puVar5 = param_1 + 10;
  }
  param_1[8] = puVar5;
  puVar11 = (undefined8 *)param_1[3];
  param_1[3] = puVar11 + 1;
  puVar5 = (undefined8 *)param_1[0x8b];
  local_res8 = *puVar11;
  if (puVar5 == (undefined8 *)0x0) {
    puVar11 = param_1 + 0x4a;
    puVar5 = param_1 + 10;
    uVar6 = 0x200;
  }
  else {
    puVar11 = (undefined8 *)(((ulonglong)param_1[0x8a] >> 1) + (longlong)puVar5);
    uVar6 = (ulonglong)param_1[0x8a] >> 1;
    uVar13 = (ulonglong)param_1[0x8a] >> 1;
  }
  FUN_1801f8ba0(&local_res8,puVar5,uVar13,puVar11,uVar6,(int)*(char *)((longlong)param_1 + 0x39),iVar4,*param_1,1,
                param_1[1]);
  if (((*(uint *)(param_1 + 5) >> 5 & 1) != 0) && (*(int *)(param_1 + 6) == 0)) {
    lVar9 = param_1[1];
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1801e6290(lVar9);
    }
    pbVar12 = (byte *)param_1[8];
    plVar2 = *(longlong **)(lVar9 + 0x18);
    uVar13 = (ulonglong)*pbVar12;
    if (*(char *)(uVar13 + plVar2[0x22]) != 'e') {
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = (ulonglong)*pbVar12;
      } while ((*(byte *)(*plVar2 + uVar13 * 2) & 4) != 0);
    }
    bVar14 = *(char *)(uVar13 + plVar2[0x22]) == 'x';
    if (bVar14) {
      uVar13 = (ulonglong)pbVar12[2];
    }
    pbVar8 = pbVar12 + 2;
    if (!bVar14) {
      pbVar8 = pbVar12;
    }
    *pbVar8 = **(byte **)plVar2[0x1f];
    do {
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
      bVar10 = (byte)uVar13;
      *pbVar8 = bVar10;
      uVar13 = (ulonglong)bVar1;
    } while (bVar10 != 0);
  }
  if (((*(char *)((longlong)param_1 + 0x39) + 0xb9U & 0xdf) == 0) && ((*(uint *)(param_1 + 5) >> 5 & 1) == 0)) {
    if (*(char *)(param_1[1] + 0x28) == '\0') {
      FUN_1801e6290(param_1[1]);
    }
    FUN_1801e4580(param_1[8]);
  }
  pcVar7 = (char *)param_1[8];
  cVar3 = *pcVar7;
  if (cVar3 == '-') {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
    pcVar7 = pcVar7 + 1;
    param_1[8] = pcVar7;
    cVar3 = *pcVar7;
  }
  if (((byte)(cVar3 + 0xb7U) < 0x26) && ((0x2100000021U >> ((ulonglong)(byte)(cVar3 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff7;
    *(undefined1 *)((longlong)param_1 + 0x39) = 0x73;
  }
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (pcVar7[lVar9] != '\0');
  *(int *)(param_1 + 9) = (int)lVar9;
  return 1;
}



undefined8 FUN_1801e6068(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;

  iVar3 = *(int *)(param_1 + 0x34);
  if ((iVar3 == 2) ||
     (((iVar3 != 3 && (iVar3 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    puVar2 = *(undefined1 **)(param_1 + 0x18);
    puVar5 = *(undefined1 **)(param_1 + 0x458);
    if (*(undefined1 **)(param_1 + 0x458) == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(param_1 + 0x50);
    }
    *(undefined1 **)(param_1 + 0x18) = puVar2 + 8;
    *puVar5 = *puVar2;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x18);
    *(undefined2 **)(param_1 + 0x18) = puVar1 + 4;
    lVar4 = *(longlong *)(param_1 + 0x458);
    if (lVar4 == 0) {
      lVar4 = param_1 + 0x50;
      uVar6 = 0x200;
    }
    else {
      uVar6 = *(ulonglong *)(param_1 + 0x450) >> 1;
    }
    iVar3 = FUN_1801f8e88(param_1 + 0x48,lVar4,uVar6,*puVar1,*(undefined8 *)(param_1 + 8));
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    lVar4 = param_1 + 0x50;
  }
  *(longlong *)(param_1 + 0x40) = lVar4;
  return 1;
}



ulonglong FUN_1801e613c(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;

  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  uVar4 = FUN_1801f964c();
  if ((int)uVar4 == 0) goto LAB_1801e6161;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x20));
          *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x20);
          goto LAB_1801e61da;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_1801e61da;
        }
        goto LAB_1801e61c9;
      }
LAB_1801e61eb:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_1801e61da;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_1801e61c9:
    if (iVar6 == 1) goto LAB_1801e61eb;
    if (iVar6 != 2) {
LAB_1801e6161:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_1801e128c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_1801e61da:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



undefined8 FUN_1801e61f4(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;

  plVar2 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar2 + 1;
  pwVar5 = (wchar_t *)*plVar2;
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) == -1) {
    iVar3 = 0x7fffffff;
  }
  *(wchar_t **)(param_1 + 0x40) = pwVar5;
  if ((iVar1 == 2) ||
     (((iVar1 != 3 && (iVar1 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    if (pwVar5 == (wchar_t *)0x0) {
      *(char **)(param_1 + 0x40) = "(null)";
      pwVar5 = (wchar_t *)"(null)";
    }
    uVar4 = FUN_1801e1420(pwVar5,(longlong)iVar3);
  }
  else {
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = L"(null)";
      *(wchar_t **)(param_1 + 0x40) = L"(null)";
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    uVar4 = FUN_1801e1700(pwVar5,(longlong)iVar3);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  return 1;
}



void FUN_1801e6290(longlong param_1)

{
  longlong lVar1;

  lVar1 = FUN_1801e0f58();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x88);
  FUN_1801f436c(lVar1,(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  FUN_1801f43d8(lVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 8));
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  return;
}



void FUN_1801e6448(longlong *param_1,char *param_2,int param_3,int *param_4,longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;

  pcVar3 = param_2 + param_3;
  uVar1 = *(undefined8 *)(param_5 + 0x2c);
  do {
    if (param_2 == pcVar3) {
LAB_1801e64fa:
      *(undefined8 *)(param_5 + 0x2c) = uVar1;
      return;
    }
    if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*param_1 + 8) != 0)) &&
       (iVar2 = FUN_1801e2488((int)*param_2,*param_1,param_5), iVar2 == -1)) {
      if ((*(char *)(param_5 + 0x30) == '\0') || (*(int *)(param_5 + 0x2c) != 0x2a)) {
        *param_4 = -1;
        goto LAB_1801e64fa;
      }
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(longlong *)(*param_1 + 8) == 0)) ||
         (iVar2 = FUN_1801e2488(0x3f,*param_1,param_5), iVar2 != -1)) goto LAB_1801e64e6;
      *param_4 = -1;
    }
    else {
LAB_1801e64e6:
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}



undefined4 FUN_1801e6518(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;

  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_1802a0858._0_4_;
    uVar3 = PTR_PTR_1802a0858._4_4_;
    uVar4 = PTR_DAT_1802a0860._0_4_;
    uVar5 = PTR_DAT_1802a0860._4_4_;
    if (DAT_1802a9ca0 != 0) goto LAB_1801e6561;
  }
  else {
    uVar1 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
  }
  local_70 = '\x01';
  local_80 = uVar1;
  uStack_7c = uVar3;
  uStack_78 = uVar4;
  uStack_74 = uVar5;
LAB_1801e6561:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_1801e128c(0,0,0,0,0,local_98);
    uVar1 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar1 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar3 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar2 = FUN_1801e0f58(local_98);
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
  }
  if (local_60 != '\0') {
    lVar2 = FUN_1801e0f58(local_98);
    *(undefined4 *)(lVar2 + 0x24) = local_64;
  }
  return uVar1;
}



void FUN_1801e663c(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,undefined4 *param_5,
                  undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  longlong *local_520;
  undefined1 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    uVar3 = PTR_PTR_1802a0858._0_4_;
    uVar4 = PTR_PTR_1802a0858._4_4_;
    uVar5 = PTR_DAT_1802a0860._0_4_;
    uVar6 = PTR_DAT_1802a0860._4_4_;
    if (DAT_1802a9ca0 == 0) goto LAB_1801e66ab;
  }
  else {
    uVar3 = *param_5;
    uVar4 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
LAB_1801e66ab:
    local_4d0 = '\x01';
    local_4e0 = uVar3;
    uStack_4dc = uVar4;
    uStack_4d8 = uVar5;
    uStack_4d4 = uVar6;
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    local_520 = local_4f8;
    local_4c8 = '\x01';
    local_528 = 0;
    local_4cc = 0x16;
    FUN_1801e128c(0,0,0,0);
    goto LAB_1801e682a;
  }
  local_4ff = 0;
  local_4fb = 0;
  local_4f9 = 0;
  local_508 = 0;
  if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined1 *)0x0)) {
    local_500 = 1;
  }
  local_4b0 = local_4f8;
  local_498 = 0;
  local_58 = &local_518;
  local_494 = 0;
  local_4a0 = param_6;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_518 = param_2;
  local_510 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_1801e4d68(&local_4b8);
  if (param_2 == (undefined1 *)0x0) {
LAB_1801e681e:
    FUN_1801f42e0(uStack_60);
  }
  else {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar1 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_1801e681a;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_1801e681e;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_1801f42e0(uStack_60);
          goto LAB_1801e682a;
        }
        goto LAB_1801e681a;
      }
    }
    else if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_508 != param_3) {
LAB_1801e681a:
        param_2[local_508] = 0;
        goto LAB_1801e681e;
      }
      if ((iVar1 < 0) || ((ulonglong)(longlong)iVar1 <= param_3)) goto LAB_1801e681e;
    }
    FUN_1801f42e0(uStack_60);
  }
LAB_1801e682a:
  uVar3 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar2 = FUN_1801e0f58(local_4f8);
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
  }
  if (local_4c0 != '\0') {
    lVar2 = FUN_1801e0f58(local_4f8);
    *(undefined4 *)(lVar2 + 0x24) = local_4c4;
  }
}



int FUN_1801e6890(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4,undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    uVar3 = PTR_PTR_1802a0858._0_4_;
    uVar4 = PTR_PTR_1802a0858._4_4_;
    uVar5 = PTR_DAT_1802a0860._0_4_;
    uVar6 = PTR_DAT_1802a0860._4_4_;
    if (DAT_1802a9ca0 == 0) goto LAB_1801e68dd;
  }
  else {
    uVar3 = *param_5;
    uVar4 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
LAB_1801e68dd:
    local_20 = '\x01';
    local_30 = uVar3;
    uStack_2c = uVar4;
    uStack_28 = uVar5;
    uStack_24 = uVar6;
  }
  if (((param_4 == 0) || (param_2 == (undefined1 *)0x0)) || (param_3 == 0)) {
    local_1c = 0x16;
  }
  else {
    iVar1 = FUN_1801e3608();
    if (iVar1 < 0) {
      *param_2 = 0;
    }
    if (iVar1 != -2) goto LAB_1801e694e;
    local_1c = 0x22;
  }
  local_18 = '\x01';
  FUN_1801e128c(0,0,0,0,0,local_48);
  iVar1 = -1;
LAB_1801e694e:
  uVar3 = local_1c;
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}



uint FUN_1801e69a4(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;

  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_180246274 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar7 = 0;
      uVar8 = 0x2c;
      do {
        uVar9 = uVar5 >> 1;
        if (uVar9 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_180246270 + uVar7 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_1801e6a45:
            if (puVar4 != (uint *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar9 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar9;
        }
        lVar1 = uVar6 + uVar7;
        puVar4 = (uint *)(&DAT_180246270 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_1801e6a45;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar7 = lVar1 + 1;
          uVar3 = uVar8;
          uVar5 = uVar9;
        }
        uVar8 = uVar3;
      } while (uVar7 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}



void FUN_1801e6a74(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  puVar1 = (undefined4 *)FUN_1801e6ac0();
  *puVar1 = param_1;
  uVar2 = FUN_1801e69a4(param_1);
  puVar1 = (undefined4 *)FUN_1801e6ae4();
  *puVar1 = uVar2;
  return;
}



void FUN_1801e6a9c(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;

  *(undefined1 *)(param_2 + 0x38) = 1;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_1801e69a4();
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



undefined * FUN_1801e6ac0(void)

{
  longlong lVar1;
  undefined *puVar2;

  lVar1 = FUN_1801f2894();
  puVar2 = (undefined *)(lVar1 + 0x24);
  if (lVar1 == 0) {
    puVar2 = &DAT_1802a06bc;
  }
  return puVar2;
}



undefined * FUN_1801e6ae4(void)

{
  longlong lVar1;
  undefined *puVar2;

  lVar1 = FUN_1801f2894();
  puVar2 = (undefined *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &DAT_1802a06b8;
  }
  return puVar2;
}



undefined8 FUN_1801e6b08(byte param_1,ulonglong param_2)

{
  if ((param_1 & 4) != 0) {
    return 1;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
    }
    if (0x8000000000000000 < param_2) {
      return 1;
    }
  }
  return 0;
}



uint FUN_1801e6b40(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  wint_t *pwVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  wint_t _C;
  uint uVar13;
  int local_a8;

  pwVar2 = (wint_t *)*param_2;
  uVar9 = (ulonglong)param_3;
  if (pwVar2 == (wint_t *)0x0) {
    puVar8 = (undefined4 *)FUN_1801e6ae4();
    *puVar8 = 0x16;
    FUN_1801e1344();
LAB_1801e6bbd:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_1);
    goto LAB_1801e6bbd;
  }
  _C = *pwVar2;
  *param_2 = (longlong)(pwVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1801e6290();
  }
  while (iVar6 = iswctype(_C,8), iVar6 != 0) {
    _C = *(wint_t *)*param_2;
    *param_2 = (longlong)((wint_t *)*param_2 + 1);
  }
  uVar13 = param_4 & 0xff | 2;
  if (_C != 0x2d) {
    uVar13 = param_4 & 0xff;
  }
  if ((_C - 0x2b & 0xfffd) == 0) {
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  local_a8 = 0xae6;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1801e6fad;
  if (_C < 0x30) goto LAB_1801e6efe;
  iVar6 = 0x30;
  if (_C < 0x3a) {
LAB_1801e6d43:
    iVar6 = (uint)_C - iVar6;
LAB_1801e6ef9:
    if (iVar6 == -1) goto LAB_1801e6efe;
LAB_1801e6f24:
    if (iVar6 != 0) goto LAB_1801e6f9e;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar9 = 8;
      if (param_3 != 0) {
        uVar9 = (ulonglong)param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        puVar8 = (undefined4 *)FUN_1801e6ae4();
        *puVar8 = 0x16;
        FUN_1801e1344();
      }
      goto LAB_1801e6fad;
    }
    _C = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar9 = 0x10;
  }
  else {
    if (_C < 0xff10) {
      if (0x65f < _C) {
        if (_C < 0x66a) {
          iVar6 = _C - 0x660;
          goto LAB_1801e6ef9;
        }
        if (0x6ef < _C) {
          if (_C < 0x6fa) {
            iVar6 = _C - 0x6f0;
            goto LAB_1801e6ef9;
          }
          if (0x965 < _C) {
            if (_C < 0x970) {
              iVar6 = _C - 0x966;
              goto LAB_1801e6ef9;
            }
            if (0x9e5 < _C) {
              if (_C < 0x9f0) {
                iVar6 = _C - 0x9e6;
                goto LAB_1801e6ef9;
              }
              if (0xa65 < _C) {
                if (_C < 0xa70) {
                  iVar6 = _C - 0xa66;
                  goto LAB_1801e6ef9;
                }
                if ((0xae5 < _C) &&
                   ((iVar6 = local_a8, _C < 0xaf0 ||
                    ((iVar6 = 0xb66, 0xb65 < _C &&
                     ((_C < 0xb70 ||
                      ((iVar6 = 0xc66, 0xc65 < _C &&
                       ((_C < 0xc70 ||
                        ((iVar6 = 0xce6, 0xce5 < _C &&
                         ((_C < 0xcf0 ||
                          ((iVar6 = 0xd66, 0xd65 < _C &&
                           ((_C < 0xd70 ||
                            ((iVar6 = 0xe50, 0xe4f < _C &&
                             ((_C < 0xe5a ||
                              ((iVar6 = 0xed0, 0xecf < _C &&
                               ((_C < 0xeda ||
                                ((iVar6 = 0xf20, 0xf1f < _C &&
                                 ((_C < 0xf2a ||
                                  ((iVar6 = 0x1040, 0x103f < _C &&
                                   ((_C < 0x104a ||
                                    ((iVar6 = 0x17e0, 0x17df < _C &&
                                     ((_C < 0x17ea || (iVar6 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))))))))))))))))))))))
                           ))))))))))))))))) goto LAB_1801e6d43;
              }
            }
          }
        }
      }
    }
    else if (_C < 0xff1a) {
      iVar6 = _C - 0xff10;
      goto LAB_1801e6ef9;
    }
LAB_1801e6efe:
    uVar10 = (uint)_C;
    if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
      if (_C - 0x61 < 0x1a) {
        uVar10 = _C - 0x20;
      }
      iVar6 = uVar10 - 0x37;
      goto LAB_1801e6f24;
    }
LAB_1801e6f9e:
    uVar9 = 10;
  }
  if (param_3 != 0) {
    uVar9 = (ulonglong)param_3;
  }
LAB_1801e6fad:
  uVar12 = 0xffffffff % uVar9;
  uVar10 = 0;
  do {
    if (_C < 0x30) goto LAB_1801e717a;
    if (_C < 0x3a) {
      uVar11 = _C - 0x30;
LAB_1801e7175:
      if (uVar11 == 0xffffffff) goto LAB_1801e717a;
    }
    else {
      if (_C < 0xff10) {
        if (0x65f < _C) {
          if (_C < 0x66a) {
            uVar11 = _C - 0x660;
            goto LAB_1801e7175;
          }
          if (0x6ef < _C) {
            if (_C < 0x6fa) {
              uVar11 = _C - 0x6f0;
              goto LAB_1801e7175;
            }
            if (0x965 < _C) {
              iVar6 = 0x966;
              if (_C < 0x970) {
LAB_1801e7041:
                uVar11 = (uint)_C - iVar6;
                goto LAB_1801e7175;
              }
              if (0x9e5 < _C) {
                iVar6 = 0x9e6;
                if (_C < 0x9f0) goto LAB_1801e7041;
                if (0xa65 < _C) {
                  iVar6 = 0xa66;
                  if (_C < 0xa70) goto LAB_1801e7041;
                  if (0xae5 < _C) {
                    iVar6 = local_a8;
                    if (_C < 0xaf0) goto LAB_1801e7041;
                    iVar6 = 0xb66;
                    if (0xb65 < _C) {
                      if (_C < 0xb70) goto LAB_1801e7041;
                      iVar6 = 0xc66;
                      if (0xc65 < _C) {
                        if (_C < 0xc70) goto LAB_1801e7041;
                        iVar6 = 0xce6;
                        if (0xce5 < _C) {
                          if (_C < 0xcf0) goto LAB_1801e7041;
                          iVar6 = 0xd66;
                          if (0xd65 < _C) {
                            if (_C < 0xd70) goto LAB_1801e7041;
                            iVar6 = 0xe50;
                            if (0xe4f < _C) {
                              if (_C < 0xe5a) goto LAB_1801e7041;
                              iVar6 = 0xed0;
                              if (0xecf < _C) {
                                if (_C < 0xeda) goto LAB_1801e7041;
                                iVar6 = 0xf20;
                                if (0xf1f < _C) {
                                  if (_C < 0xf2a) goto LAB_1801e7041;
                                  iVar6 = 0x1040;
                                  if (0x103f < _C) {
                                    if (_C < 0x104a) goto LAB_1801e7041;
                                    iVar6 = 0x17e0;
                                    if (0x17df < _C) {
                                      if (_C < 0x17ea) goto LAB_1801e7041;
                                      uVar12 = 0x1810;
                                      if ((ushort)(_C + 0xe7f0) < 10) {
                                        uVar11 = _C - 0x1810;
                                        goto LAB_1801e7175;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (_C < 0xff1a) {
        uVar11 = _C - 0xff10;
        goto LAB_1801e7175;
      }
LAB_1801e717a:
      uVar11 = (uint)_C;
      if (((_C < 0x41) || (0x5a < _C)) && ((uVar11 < 0x61 || (0x7a < _C)))) {
        uVar11 = 0xffffffff;
      }
      else {
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar11 = uVar11 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if ((uint)uVar9 <= uVar11) break;
    _C = *puVar4;
    uVar7 = uVar10 * (uint)uVar9;
    uVar11 = uVar7 + uVar11;
    uVar12 = (ulonglong)uVar11;
    *param_2 = (longlong)(puVar4 + 1);
    uVar13 = uVar13 | (uint)(uVar11 < uVar7 || (uint)(0xffffffff / uVar9) < uVar10) << 2 | 8;
    uVar10 = uVar11;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((_C != 0) && (puVar4[-1] != _C)) {
    puVar8 = (undefined4 *)FUN_1801e6ae4(uVar11,uVar12);
    *puVar8 = 0x16;
    FUN_1801e1344();
  }
  if ((uVar13 & 8) == 0) {
    *param_2 = (longlong)pwVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pwVar2;
    return 0;
  }
  if ((uVar13 & 4) == 0) {
    if ((uVar13 & 1) == 0) {
      if ((uVar13 & 2) == 0) goto LAB_1801e7277;
LAB_1801e7296:
      uVar10 = -uVar10;
      goto LAB_1801e7277;
    }
    if ((uVar13 & 2) == 0) {
      if (uVar10 < 0x80000000) goto LAB_1801e7277;
    }
    else if (uVar10 < 0x80000001) goto LAB_1801e7296;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((uVar13 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar13 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVar10 = 0xffffffff;
LAB_1801e7277:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar10;
  }
  return uVar10;
}



ulonglong FUN_1801e72dc(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  byte bVar15;

  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)0x0) {
    puVar9 = (undefined4 *)FUN_1801e6ae4();
    *puVar9 = 0x16;
    FUN_1801e1344();
LAB_1801e7351:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_1);
    goto LAB_1801e7351;
  }
  cVar7 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1801e6290();
  }
  while (iVar8 = FUN_1801e75b8(cVar7,8,param_1 + 0x18), iVar8 != 0) {
    cVar7 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  bVar15 = param_4 | 2;
  if (cVar7 != '-') {
    bVar15 = param_4;
  }
  if ((cVar7 - 0x2bU & 0xfd) == 0) {
    cVar7 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  uVar14 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1801e7463;
  if ((byte)(cVar7 - 0x30U) < 10) {
    iVar8 = cVar7 + -0x30;
LAB_1801e7406:
    if (iVar8 != 0) goto LAB_1801e7457;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    if ((cVar1 + 0xa8U & 0xdf) != 0) {
      *param_2 = (longlong)pcVar3;
      uVar14 = 8;
      if (param_3 != 0) {
        uVar14 = param_3;
      }
      if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
        puVar9 = (undefined4 *)FUN_1801e6ae4();
        *puVar9 = 0x16;
        FUN_1801e1344();
      }
      goto LAB_1801e7463;
    }
    cVar7 = pcVar3[1];
    *param_2 = (longlong)(pcVar3 + 2);
    uVar14 = 0x10;
  }
  else {
    if ((byte)(cVar7 + 0x9fU) < 0x1a) {
      iVar8 = cVar7 + -0x57;
      goto LAB_1801e7406;
    }
    if ((byte)(cVar7 + 0xbfU) < 0x1a) {
      iVar8 = cVar7 + -0x37;
      goto LAB_1801e7406;
    }
LAB_1801e7457:
    uVar14 = 10;
  }
  if (param_3 != 0) {
    uVar14 = param_3;
  }
LAB_1801e7463:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)(int)uVar14;
  auVar6 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
  uVar12 = SUB168(auVar6 % auVar5,0);
  uVar13 = 0;
  while( true ) {
    if ((byte)(cVar7 - 0x30U) < 10) {
      uVar11 = (ulonglong)((int)cVar7 - 0x30);
    }
    else if ((byte)(cVar7 + 0x9fU) < 0x1a) {
      uVar11 = (ulonglong)((int)cVar7 - 0x57);
    }
    else if ((byte)(cVar7 + 0xbfU) < 0x1a) {
      uVar11 = (ulonglong)((int)cVar7 - 0x37);
    }
    else {
      uVar11 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if (uVar14 <= (uint)uVar11) break;
    cVar7 = *pcVar3;
    uVar10 = (longlong)(int)uVar14 * uVar13;
    uVar12 = uVar11 + uVar10;
    *param_2 = (longlong)(pcVar3 + 1);
    bVar15 = bVar15 | (uVar12 < uVar10 || SUB168(auVar6 / auVar5,0) < uVar13) << 2 | 8U;
    uVar13 = uVar12;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar7 != '\0') && (pcVar3[-1] != cVar7)) {
    puVar9 = (undefined4 *)FUN_1801e6ae4(uVar11,uVar12);
    *puVar9 = 0x16;
    FUN_1801e1344();
  }
  if ((bVar15 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  cVar7 = FUN_1801e6b08(bVar15,uVar13);
  if (cVar7 == '\0') {
    if ((bVar15 & 2) != 0) {
      uVar13 = -uVar13;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x22;
    if ((bVar15 & 1) != 0) {
      plVar4 = (longlong *)param_2[1];
      if ((bVar15 & 2) == 0) {
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVar13 = 0xffffffffffffffff;
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar13;
  }
  return uVar13;
}



ulonglong FUN_1801e75b8(int param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;

  uVar3 = 0;
  if (param_3 == (longlong *)0x0) {
    lVar1 = FUN_1801f2108();
    if (param_1 + 1U < 0x101) {
      uVar3 = *(ushort *)(lVar1 + (longlong)param_1 * 2) & param_2;
    }
    uVar2 = (ulonglong)uVar3;
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = (ulonglong)(*(ushort *)(*(longlong *)*param_3 + (longlong)param_1 * 2) & param_2);
  }
  else if ((int)((longlong *)*param_3)[1] < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1801f4488(param_1);
  }
  return uVar2;
}



undefined8 FUN_1801e7630(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_1801e72dc(local_48,&local_58,param_3,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



undefined8 FUN_1801e76e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_1801e72dc(local_48,&local_58,param_3,0);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



undefined4 FUN_1801e7798(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;

  local_48[0] = 0;
  local_20 = DAT_1802a9ca0 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1802a0858._0_4_;
    uStack_2c = PTR_PTR_1802a0858._4_4_;
    uStack_28 = PTR_DAT_1802a0860._0_4_;
    uStack_24 = PTR_DAT_1802a0860._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_1801e6b40(local_48,&local_58,param_3,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1801e0f58(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



undefined8 common_strtod_l<>(longlong param_1,longlong *param_2,__crt_locale_pointers *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_res8;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;

  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x16;
    FUN_1801e1344();
    local_res8 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_3);
    local_res8 = 0;
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1;
    }
    local_38 = param_1;
    local_30 = param_2;
    iVar1 = FUN_1801e78f4(local_20,&local_38,&local_res8);
    if (iVar1 - 2U < 2) {
      puVar2 = (undefined4 *)FUN_1801e6ae4();
      *puVar2 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8;
}



void FUN_1801e78f4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x16;
    FUN_1801e1344();
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
  else {
    uVar1 = FUN_1801e7994(param_1,param_2,local_328);
    FUN_1801e8218(uVar1,local_328,param_3);
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
}



ulonglong FUN_1801e7994(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  int iVar10;
  char cVar11;
  int *piVar12;
  char *pcVar13;
  byte bVar14;
  int local_res10 [2];
  int *local_res18;

  pcVar13 = (char *)*param_2;
  local_res18 = param_3;
  if (pcVar13 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_1801e6ae4();
    *puVar7 = 0x16;
    FUN_1801e1344();
    return 7;
  }
  cVar11 = *pcVar13;
  *param_2 = (longlong)(pcVar13 + 1);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar11);
  iVar5 = FUN_1801e75b8();
  iVar10 = local_res10[0];
  while (local_res10[0]._1_3_ = (undefined3)((uint)iVar10 >> 8), iVar5 != 0) {
    cVar11 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar11);
    iVar5 = FUN_1801e75b8();
    iVar10 = local_res10[0];
  }
  *(bool *)(param_3 + 0xc2) = cVar11 == '-';
  if ((cVar11 == '-') || (cVar11 == '+')) {
    cVar11 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar11);
    iVar10 = local_res10[0];
  }
  local_res10[0] = iVar10;
  if ((cVar11 == 'I') || (cVar11 == 'i')) {
    uVar9 = FUN_1801e7e58(local_res10,param_2,pcVar13);
    return uVar9;
  }
  if ((cVar11 + 0xb2U & 0xdf) == 0) {
    uVar9 = FUN_1801e7f9c(local_res10,param_2,pcVar13);
    return uVar9;
  }
  bVar14 = 0;
  if (cVar11 == '0') {
    pcVar8 = (char *)*param_2;
    cVar2 = *pcVar8;
    *param_2 = (longlong)(pcVar8 + 1);
    if ((cVar2 + 0xa8U & 0xdf) == 0) {
      cVar11 = pcVar8[1];
      *param_2 = (longlong)(pcVar8 + 2);
      bVar14 = 1;
      pcVar13 = pcVar8;
    }
    else {
      *param_2 = (longlong)pcVar8;
      if ((cVar2 != '\0') && (*pcVar8 != cVar2)) {
        puVar7 = (undefined4 *)FUN_1801e6ae4();
        *puVar7 = 0x16;
        FUN_1801e1344();
      }
    }
  }
  param_3 = param_3 + 2;
  local_res10[0] = 0;
  bVar3 = false;
  if (cVar11 == '0') {
    bVar3 = true;
    do {
      cVar11 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    } while (cVar11 == '0');
  }
  piVar12 = param_3;
  while( true ) {
    if ((byte)(cVar11 - 0x30U) < 10) {
      uVar6 = (int)cVar11 - 0x30;
    }
    else if ((byte)(cVar11 + 0x9fU) < 0x1a) {
      uVar6 = (int)cVar11 - 0x57;
    }
    else if ((byte)(cVar11 + 0xbfU) < 0x1a) {
      uVar6 = (int)cVar11 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if ((-(uint)(bVar14 != 0) & 6) + 9 < uVar6) break;
    bVar3 = true;
    if (piVar12 != local_res18 + 0xc2) {
      *(char *)piVar12 = (char)uVar6;
      piVar12 = (int *)((longlong)piVar12 + 1);
    }
    local_res10[0] = local_res10[0] + 1;
    cVar11 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if (cVar11 == *(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    cVar11 = *(char *)*param_2;
    pcVar8 = (char *)*param_2 + 1;
    *param_2 = (longlong)pcVar8;
    if ((piVar12 == param_3) && (cVar11 == '0')) {
      bVar3 = true;
      do {
        cVar11 = *pcVar8;
        local_res10[0] = local_res10[0] + -1;
        pcVar8 = pcVar8 + 1;
        *param_2 = (longlong)pcVar8;
      } while (cVar11 == '0');
    }
    while( true ) {
      if ((cVar11 < '0') || ('9' < cVar11)) {
        if ((byte)(cVar11 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar11 - 0x57;
        }
        else if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          uVar6 = (int)cVar11 - 0x37;
        }
        else {
          uVar6 = 0xffffffff;
        }
      }
      else {
        uVar6 = (int)cVar11 - 0x30;
      }
      if ((-(uint)(bVar14 != 0) & 6) + 9 < uVar6) break;
      bVar3 = true;
      if (piVar12 != local_res18 + 0xc2) {
        *(char *)piVar12 = (char)uVar6;
        piVar12 = (int *)((longlong)piVar12 + 1);
      }
      cVar11 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    }
  }
  pcVar8 = (char *)(*param_2 + -1);
  *param_2 = (longlong)pcVar8;
  if (!bVar3) {
    if ((cVar11 != '\0') && (*pcVar8 != cVar11)) {
      puVar7 = (undefined4 *)FUN_1801e6ae4();
      *puVar7 = 0x16;
      FUN_1801e1344();
    }
    *param_2 = (longlong)pcVar13;
    if (bVar14 != 0) {
      return 2;
    }
    return 7;
  }
  if ((cVar11 != '\0') && (*pcVar8 != cVar11)) {
    puVar7 = (undefined4 *)FUN_1801e6ae4();
    *puVar7 = 0x16;
    FUN_1801e1344();
  }
  pcVar8 = (char *)*param_2;
  cVar11 = *pcVar8;
  pcVar13 = pcVar8 + 1;
  *param_2 = (longlong)pcVar13;
  if (cVar11 == 'E') {
LAB_1801e7c6d:
    bVar4 = bVar14 ^ 1;
  }
  else if (cVar11 == 'P') {
LAB_1801e7c68:
    bVar4 = bVar14;
  }
  else {
    if (cVar11 == 'e') goto LAB_1801e7c6d;
    bVar4 = 0;
    if (cVar11 == 'p') goto LAB_1801e7c68;
  }
  iVar10 = 0;
  if (bVar4 != 0) {
    cVar2 = *pcVar13;
    pcVar13 = pcVar8 + 2;
    *param_2 = (longlong)pcVar13;
    if ((cVar2 == '+') || (cVar11 = cVar2, cVar2 == '-')) {
      cVar11 = *pcVar13;
      pcVar13 = pcVar8 + 3;
      *param_2 = (longlong)pcVar13;
    }
    bVar3 = false;
    if (cVar11 != '0') goto LAB_1801e7ccf;
    do {
      cVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *param_2 = (longlong)pcVar13;
    } while (cVar11 == '0');
    while( true ) {
      bVar3 = true;
LAB_1801e7ccf:
      if ((cVar11 < '0') || ('9' < cVar11)) {
        if ((byte)(cVar11 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar11 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_1801e7d1f;
          uVar6 = (int)cVar11 - 0x37;
        }
      }
      else {
        uVar6 = (int)cVar11 - 0x30;
      }
      if (9 < uVar6) goto LAB_1801e7d1f;
      bVar3 = true;
      iVar10 = uVar6 + iVar10 * 10;
      if (0x1450 < iVar10) break;
      cVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *param_2 = (longlong)pcVar13;
    }
    iVar10 = 0x1451;
LAB_1801e7d1f:
    do {
      if ((byte)(cVar11 - 0x30U) < 10) {
        uVar6 = (int)cVar11 - 0x30;
      }
      else if ((byte)(cVar11 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar11 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_1801e7d5c;
        uVar6 = (int)cVar11 - 0x37;
      }
      if (9 < uVar6) goto LAB_1801e7d5c;
      cVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *param_2 = (longlong)pcVar13;
    } while( true );
  }
LAB_1801e7d92:
  *param_2 = (longlong)(pcVar13 + -1);
  if ((cVar11 != '\0') && (pcVar13[-1] != cVar11)) {
    puVar7 = (undefined4 *)FUN_1801e6ae4();
    *puVar7 = 0x16;
    FUN_1801e1344();
  }
  if (piVar12 != param_3) {
    do {
      piVar1 = (int *)((longlong)piVar12 + -1);
      if (*(char *)piVar1 != '\0') break;
      piVar12 = piVar1;
    } while (piVar1 != param_3);
    if (piVar12 != param_3) {
      if (0x1450 < iVar10) {
        return 9;
      }
      if (-0x1451 < iVar10) {
        iVar10 = iVar10 + ((-(uint)(bVar14 != 0) & 3) + 1) * local_res10[0];
        if (0x1450 < iVar10) {
          return 9;
        }
        if (-0x1451 < iVar10) {
          *local_res18 = iVar10;
          local_res18[1] = (int)piVar12 - (int)param_3;
          return (ulonglong)bVar14;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_1801e7d5c:
  if (cVar2 == '-') {
    iVar10 = -iVar10;
  }
  if (!bVar3) {
    *param_2 = (longlong)(pcVar13 + -1);
    if ((cVar11 != '\0') && (pcVar13[-1] != cVar11)) {
      puVar7 = (undefined4 *)FUN_1801e6ae4();
      *puVar7 = 0x16;
      FUN_1801e1344();
    }
    *param_2 = (longlong)pcVar8;
    pcVar13 = pcVar8 + 1;
    cVar11 = *pcVar8;
  }
  goto LAB_1801e7d92;
}



undefined8 FUN_1801e7e58(char *param_1,longlong *param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;

  lVar3 = 0;
  uVar4 = 3;
  while ((cVar2 = *param_1, cVar2 == (&DAT_180246f18)[lVar3] || (cVar2 == (&DAT_180246f1c)[lVar3]))) {
    lVar3 = lVar3 + 1;
    cVar2 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar2;
    if (lVar3 == 3) {
      lVar3 = *param_2;
      *param_2 = lVar3 + -1;
      if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
        puVar1 = (undefined4 *)FUN_1801e6ae4();
        *puVar1 = 0x16;
        FUN_1801e1344();
      }
      param_3 = (char *)*param_2;
      lVar3 = 0;
      cVar2 = *param_3;
      *param_2 = (longlong)(param_3 + 1);
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[lVar3] || (cVar2 == "inity"[lVar3]))) {
        lVar3 = lVar3 + 1;
        cVar2 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar2;
        if (lVar3 == 5) {
          lVar3 = *param_2;
          *param_2 = lVar3 + -1;
          if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
            puVar1 = (undefined4 *)FUN_1801e6ae4();
            *puVar1 = 0x16;
            FUN_1801e1344();
          }
          return 3;
        }
      }
      *param_2 = *param_2 + -1;
      if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
        puVar1 = (undefined4 *)FUN_1801e6ae4();
        *puVar1 = 0x16;
        FUN_1801e1344();
      }
LAB_1801e7f92:
      *param_1 = '\0';
      *param_2 = (longlong)param_3;
      return uVar4;
    }
  }
  *param_2 = *param_2 + -1;
  if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  uVar4 = 7;
  goto LAB_1801e7f92;
}



undefined8 FUN_1801e7f9c(char *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;

  lVar1 = 0;
  do {
    lVar8 = lVar1;
    cVar3 = *param_1;
    if ((cVar3 != (&DAT_180246f30)[lVar8]) && (cVar3 != (&DAT_180246f34)[lVar8])) {
      *param_2 = *param_2 + -1;
      if ((cVar3 != '\0') && (*(char *)*param_2 != cVar3)) {
        puVar6 = (undefined4 *)FUN_1801e6ae4();
        *puVar6 = 0x16;
        FUN_1801e1344();
      }
      uVar7 = 7;
      goto LAB_1801e817b;
    }
    cVar3 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar3;
    lVar1 = lVar8 + 1;
  } while (lVar8 + 1 != 3);
  lVar1 = *param_2;
  iVar9 = (int)lVar8 + 0x14;
  *param_2 = lVar1 + -1;
  if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
    piVar5 = (int *)FUN_1801e6ae4();
    *piVar5 = iVar9;
    FUN_1801e1344();
  }
  param_3 = (char *)*param_2;
  cVar3 = *param_3;
  *param_2 = (longlong)(param_3 + 1);
  *param_1 = cVar3;
  pcVar2 = (char *)*param_2;
  if (cVar3 == '(') {
    cVar3 = *pcVar2;
    *param_2 = (longlong)(pcVar2 + 1);
    *param_1 = cVar3;
    cVar3 = FUN_1801e81d0(param_1,param_2);
    if (cVar3 != '\0') {
      lVar1 = *param_2;
      cVar3 = *param_1;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_1801e6ae4();
        *piVar5 = iVar9;
        FUN_1801e1344();
      }
      return 5;
    }
    cVar4 = FUN_1801e8188(param_1,param_2);
    cVar3 = *param_1;
    if (cVar4 != '\0') {
      lVar1 = *param_2;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_1801e6ae4();
        *piVar5 = iVar9;
        FUN_1801e1344();
      }
      return 6;
    }
    while (cVar3 != ')') {
      if (cVar3 == '\0') {
        *param_2 = *param_2 + -1;
LAB_1801e8176:
        uVar7 = 4;
LAB_1801e817b:
        *param_1 = '\0';
        *param_2 = (longlong)param_3;
        return uVar7;
      }
      if ((((9 < (byte)(cVar3 - 0x30U)) && (0x19 < (byte)(cVar3 + 0x9fU))) && (0x19 < (byte)(cVar3 + 0xbfU))) &&
         (cVar3 != '_')) {
        *param_2 = *param_2 + -1;
        if (*(char *)*param_2 != cVar3) {
          piVar5 = (int *)FUN_1801e6ae4();
          *piVar5 = iVar9;
          FUN_1801e1344();
        }
        goto LAB_1801e8176;
      }
      cVar3 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
      *param_1 = cVar3;
    }
  }
  else {
    *param_2 = (longlong)(pcVar2 + -1);
    if ((cVar3 != '\0') && (pcVar2[-1] != cVar3)) {
      piVar5 = (int *)FUN_1801e6ae4();
      *piVar5 = iVar9;
      FUN_1801e1344();
    }
    *param_1 = '\0';
    *param_2 = (longlong)param_3;
  }
  return 4;
}



undefined8 FUN_1801e8188(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  longlong lVar2;
  longlong lVar3;

  lVar2 = 0;
  lVar3 = lVar2;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_180246f48)[lVar3]) && (cVar1 != (&DAT_180246f4c)[lVar3])) goto LAB_1801e81c9;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 4);
  lVar2 = 1;
LAB_1801e81c9:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)lVar2);
}



undefined8 FUN_1801e81d0(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  longlong lVar2;
  longlong lVar3;

  lVar2 = 0;
  lVar3 = lVar2;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_180246f38)[lVar3]) && (cVar1 != (&DAT_180246f40)[lVar3])) goto LAB_1801e8211;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 5);
  lVar2 = 1;
LAB_1801e8211:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)lVar2);
}



SLD_STATUS FUN_1801e8218(int param_1,floating_point_string *param_2,ulonglong *param_3)

{
  SLD_STATUS SVar1;
  ulonglong uVar2;
  ulonglong *local_18;
  undefined1 local_10;

  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) + 0x7ff0000000000000 |
              *param_3 & 0x7ff0000000000000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 1;
        SVar1 = FUN_1801e8a1c(param_2,&local_18);
        return SVar1;
      }
      if (param_1 == 1) {
        local_10 = 1;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return SVar1;
      }
      if (param_1 == 2) {
        uVar2 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000;
      }
      else if (param_1 == 3) {
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) + 0x7ff0000000000000 |
                *param_3 & 0x7ff0000000000000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) + 0x7fffffffffffffff;
      }
    }
    *param_3 = uVar2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                     0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xfff8000000000000;
  }
  return 0;
}



undefined8 FUN_1801e848c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    return *param_1;
  }
  _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
}



undefined8 FUN_1801e84c8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return *param_1;
  }
  _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
}



undefined8 FUN_1801e8504(ulonglong param_1,int param_2,longlong param_3,char param_4,undefined8 *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;

  lVar2 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = (int)param_3;
  if (param_1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)lVar2 + 1;
  }
  cVar10 = *(char *)(param_5 + 1);
  iVar7 = ((-(uint)(cVar10 != '\0') & 0x1d) + 0x18) - iVar7;
  iVar11 = param_2 - iVar7;
  iVar12 = (-(uint)(cVar10 != '\0') & 0x380) + 0x7f;
  if (iVar12 < iVar11) goto LAB_1801e87de;
  bVar5 = (byte)param_3;
  if (iVar11 < (int)((-(uint)(cVar10 != '\0') & 0xfffffc80) - 0x7e)) {
    iVar13 = param_2 + -1 + iVar12;
    iVar11 = -iVar12;
    if (iVar13 < 0) {
      if ((uint)-iVar13 < 0x40) {
        bVar6 = (byte)-iVar13;
        uVar9 = 1L << (bVar6 - 1 & 0x3f);
        uVar14 = uVar9 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar9 - 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((uVar14 != 0) || (bVar4)) {
          iVar12 = fegetround();
          if (iVar12 == 0) {
            if ((uVar14 == 0) || ((bVar5 = 1, !bVar4 && ((1L << (bVar6 & 0x3f) & param_1) == 0)))) goto LAB_1801e866a;
          }
          else if (iVar12 != 0x100) {
            if (iVar12 != 0x200) goto LAB_1801e866a;
            bVar5 = bVar5 ^ 1;
          }
        }
        else {
LAB_1801e866a:
          bVar5 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar5;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if (param_1 == 0) {
        if (cVar10 == '\0') {
          *(int *)*param_5 = iVar3 << 0x1f;
        }
        else {
          *(longlong *)*param_5 = param_3 << 0x3f;
        }
        return 2;
      }
      if ((-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff < param_1) {
        iVar11 = ((param_2 - iVar13) - iVar7) + -1;
      }
      goto LAB_1801e881c;
    }
  }
  else {
    if (iVar7 < 0) {
      if ((uint)-iVar7 < 0x40) {
        bVar6 = (byte)-iVar7;
        uVar9 = 1L << (bVar6 - 1 & 0x3f);
        uVar14 = uVar9 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar9 - 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((uVar14 != 0) || (bVar4)) {
          iVar7 = fegetround();
          if (iVar7 == 0) {
            if ((uVar14 == 0) || ((!bVar4 && ((1L << (bVar6 & 0x3f) & param_1) == 0)))) goto LAB_1801e878b;
            bVar5 = 1;
          }
          else if (iVar7 != 0x100) {
            if (iVar7 != 0x200) goto LAB_1801e878b;
            bVar5 = bVar5 ^ 1;
          }
        }
        else {
LAB_1801e878b:
          bVar5 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar5;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if ((-(ulonglong)(cVar10 != '\0') & 0x1fffffff000000) + 0xffffff < param_1) {
        param_1 = param_1 >> 1;
        iVar11 = iVar11 + 1;
        if ((int)((-(uint)(cVar10 != '\0') & 0x380) + 0x7f) < iVar11) {
LAB_1801e87de:
          if (cVar10 == '\0') {
            *(uint *)*param_5 = iVar3 << 0x1f | 0x7f800000;
          }
          else {
            *(ulonglong *)*param_5 = param_3 << 0x3f | 0x7ff0000000000000;
          }
          return 3;
        }
      }
      goto LAB_1801e881c;
    }
    iVar13 = iVar7;
    if (iVar7 < 1) goto LAB_1801e881c;
  }
  param_1 = param_1 << ((byte)iVar13 & 0x3f);
LAB_1801e881c:
  puVar1 = (ulonglong *)*param_5;
  param_1 = (-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff & param_1;
  if (cVar10 == '\0') {
    uVar8 = iVar3 << 0x1f | (uint)*puVar1 & 0x7fffffff;
    uVar8 = ((iVar11 + 0x7f) * 0x800000 ^ uVar8) & 0x7f800000 ^ uVar8;
    *(uint *)puVar1 = (uVar8 ^ (uint)param_1) & 0x7fffff ^ uVar8;
  }
  else {
    uVar9 = (longlong)(iVar11 + 0x3ff) << 0x34;
    *puVar1 = (param_3 << 0x3f ^ uVar9) & 0x8000000000000000 ^ uVar9 | param_1;
  }
  return 0;
}



void FUN_1801e88bc(uint *param_1,uint param_2,undefined8 param_3,byte param_4,longlong param_5)

{
  sbyte sVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  uVar10 = 0;
  iVar7 = (-(uint)(*(char *)(param_5 + 8) != '\0') & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*param_1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)param_1[1];
      uVar10 = 0;
      if (1 < *param_1) {
        uVar10 = param_1[2];
      }
    }
    param_4 = param_4 ^ 1;
    lVar6 = ((ulonglong)uVar10 << 0x20) + uVar5;
  }
  else {
    uVar9 = param_2 >> 5;
    uVar8 = uVar9 - 2;
    uVar10 = param_1[(ulonglong)uVar8 + 1];
    param_2 = param_2 & 0x1f;
    uVar5 = 0;
    if (param_2 == 0) {
      iVar7 = iVar7 + uVar8 * 0x20;
      lVar6 = CONCAT44(param_1[(ulonglong)(uVar9 - 1) + 1],uVar10);
      param_4 = param_4 ^ 1;
      uVar10 = 0;
      if (uVar8 != 0) {
        do {
          uVar5 = 0;
          if (param_1[(ulonglong)uVar10 + 1] == 0) {
            uVar5 = (ulonglong)param_4;
          }
          uVar10 = uVar10 + 1;
          param_4 = (byte)uVar5;
        } while (uVar10 != uVar8);
      }
    }
    else {
      sVar1 = (sbyte)param_2;
      iVar7 = uVar8 * 0x20 + param_2 + iVar7;
      uVar4 = (1 << sVar1) - 1;
      lVar6 = ((ulonglong)param_1[(ulonglong)(uVar9 - 1) + 1] << (-sVar1 + 0x20U & 0x3f)) +
              ((ulonglong)(param_1[(ulonglong)uVar9 + 1] & uVar4) << (-sVar1 + 0x40U & 0x3f)) +
              (ulonglong)((~uVar4 & uVar10) >> sVar1);
      if ((param_4 != 0) || (param_4 = 1, (uVar4 & uVar10) != 0)) {
        param_4 = 0;
      }
      uVar2 = 0;
      if (uVar8 != 0) {
        do {
          uVar5 = uVar2;
          bVar3 = 0;
          if (param_1[uVar5 + 1] == 0) {
            bVar3 = param_4;
          }
          param_4 = bVar3;
          uVar10 = (int)uVar5 + 1;
          uVar2 = (ulonglong)uVar10;
        } while (uVar10 != uVar8);
      }
    }
    param_3 = CONCAT71((int7)(uVar5 >> 8),(char)param_3);
  }
  FUN_1801e8504(lVar6,iVar7,param_3,param_4);
  return;
}



void FUN_1801e8a1c(uint *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  rsize_t rVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_d78 [32];
  undefined8 *local_d58;
  uint local_d48;
  uint local_d44;
  uint local_d40;
  uint local_d3c;
  undefined8 local_d38;
  uint local_d30;
  uint *local_d28;
  undefined8 *local_d20;
  uint *local_d18;
  uint *local_d10;
  uint *local_d08;
  undefined4 local_cf8;
  uint local_cf4 [115];
  undefined4 local_b28;
  undefined1 local_b24 [460];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint local_784 [115];
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  undefined8 local_3e4;
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_d78;
  uVar25 = param_1[1];
  local_d30 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  puVar23 = param_1 + 2;
  uVar16 = 0;
  local_d44 = *param_1;
  if ((int)*param_1 < 0) {
    local_d44 = 0;
  }
  uVar26 = 0;
  uVar24 = 0;
  uVar19 = local_d44;
  if (uVar25 <= local_d44) {
    uVar19 = uVar25;
  }
  local_d44 = local_d44 - uVar19;
  local_d08 = (uint *)((longlong)param_1 + (ulonglong)uVar19 + 8);
  local_d10 = (uint *)((longlong)param_1 + (ulonglong)uVar25 + 8);
  local_d48 = (int)local_d10 - (int)local_d08;
  local_d28 = param_1;
  local_d20 = param_2;
  if (puVar23 != local_d08) {
    do {
      uVar25 = (uint)uVar26;
      if (uVar24 == 9) {
        if (uVar16 != 0) {
          uVar18 = 0;
          uVar11 = 0;
          do {
            uVar19 = (int)uVar11 + 1;
            uVar10 = (ulonglong)local_784[uVar11] * 1000000000 + uVar18;
            local_784[uVar11] = (uint)uVar10;
            uVar18 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar19;
          } while (uVar19 != uVar16);
          uVar19 = (uint)(uVar10 >> 0x20);
          uVar16 = local_788;
          if (uVar19 != 0) {
            if (local_788 < 0x73) {
              local_784[local_788] = uVar19;
              local_788 = local_788 + 1;
              uVar16 = local_788;
            }
            else {
              local_788 = 0;
              uVar16 = 0;
            }
          }
        }
        if (uVar25 != 0) {
          uVar19 = 0;
          uVar24 = 0;
          if (uVar16 != 0) {
            do {
              uVar16 = uVar24 + 1;
              uVar11 = local_784[uVar24] + uVar26;
              local_784[uVar24] = (uint)uVar11;
              uVar26 = uVar11 >> 0x20;
              uVar25 = (uint)(uVar11 >> 0x20);
              uVar24 = uVar16;
            } while (uVar16 != local_788);
            uVar16 = local_788;
            uVar19 = local_788;
            if (uVar25 == 0) goto LAB_1801e8bc7;
          }
          if (uVar19 < 0x73) {
            local_784[uVar19] = uVar25;
            uVar16 = local_788 + 1;
            local_788 = uVar16;
          }
          else {
            uVar16 = 0;
            local_788 = 0;
          }
        }
LAB_1801e8bc7:
        uVar25 = 0;
        uVar24 = 0;
      }
      uVar19 = *puVar23;
      uVar24 = uVar24 + 1;
      puVar23 = (uint *)((longlong)puVar23 + 1);
      uVar25 = (uint)(byte)uVar19 + uVar25 * 10;
      uVar26 = (ulonglong)uVar25;
    } while (puVar23 != local_d08);
    if (uVar24 != 0) {
      for (uVar19 = uVar24 / 10; uVar19 != 0; uVar19 = uVar19 - local_d40) {
        local_d40 = uVar19;
        if (0x26 < uVar19) {
          local_d40 = 0x26;
        }
        uVar20 = local_d40 - 1;
        bVar8 = (&DAT_180246cf2)[(ulonglong)uVar20 * 4];
        bVar1 = (&DAT_180246cf3)[(ulonglong)uVar20 * 4];
        local_218 = (uint)bVar1 + (uint)bVar8;
        local_d3c = uVar19;
        FUN_180207610(local_214,0,(ulonglong)bVar8 * 4);
        FUN_1802079d0(local_214 + bVar8,
                      &DAT_1802463e0 + (ulonglong)*(ushort *)(&DAT_180246cf0 + (ulonglong)uVar20 * 4) * 4,
                      (ulonglong)bVar1 << 2);
        uVar20 = local_784[0];
        if (local_218 < 2) {
          uVar11 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
LAB_1801e8c98:
            local_788 = 0;
            uVar14 = 0;
            goto LAB_1801e8fb6;
          }
          uVar14 = uVar16;
          if ((local_214[0] == 1) || (uVar16 == 0)) goto LAB_1801e8fb6;
          uVar10 = 0;
          uVar18 = 0;
          do {
            uVar14 = (int)uVar18 + 1;
            uVar12 = local_784[uVar18] * uVar11 + uVar10;
            local_784[uVar18] = (uint)uVar12;
            uVar10 = uVar12 >> 0x20;
            uVar20 = (uint)(uVar12 >> 0x20);
            uVar18 = (ulonglong)uVar14;
          } while (uVar14 != uVar16);
LAB_1801e8ceb:
          uVar16 = 0;
          uVar14 = local_788;
          if (uVar20 == 0) goto LAB_1801e8fb6;
          if (local_788 < 0x73) {
            local_784[local_788] = uVar20;
            local_788 = local_788 + 1;
            uVar14 = local_788;
            goto LAB_1801e8fb6;
          }
          local_788 = 0;
          bVar27 = false;
        }
        else {
          if (uVar16 < 2) {
            uVar11 = (ulonglong)local_784[0];
            local_788 = local_218;
            if (local_218 != 0) {
              if (local_218 < 0x74) {
                FUN_1802079d0();
              }
              else {
                FUN_180207610(local_784,0,0x1cc);
                puVar6 = (undefined4 *)FUN_1801e6ae4();
                *puVar6 = 0x22;
                FUN_1801e1344();
              }
            }
            if (uVar20 == 0) goto LAB_1801e8c98;
            uVar14 = local_788;
            if ((uVar20 != 1) && (local_788 != 0)) {
              uVar10 = 0;
              uVar18 = 0;
              do {
                uVar16 = (int)uVar18 + 1;
                uVar12 = local_784[uVar18] * uVar11 + uVar10;
                local_784[uVar18] = (uint)uVar12;
                uVar10 = uVar12 >> 0x20;
                uVar20 = (uint)(uVar12 >> 0x20);
                uVar18 = (ulonglong)uVar16;
              } while (uVar16 != local_788);
              goto LAB_1801e8ceb;
            }
          }
          else {
            local_d18 = local_784;
            local_d38 = local_214;
            uVar19 = uVar16;
            if (local_218 < uVar16) {
              local_d38 = local_784;
              uVar19 = local_218;
              local_d18 = local_214;
            }
            local_788 = 0;
            local_5b8 = 0;
            uVar11 = 0;
            uVar20 = local_218;
            if (local_218 < uVar16) {
              uVar20 = uVar16;
            }
            if (uVar19 != 0) {
              do {
                uVar14 = (uint)uVar11;
                uVar16 = local_d18[uVar11];
                if (uVar16 == 0) {
                  if (uVar14 == local_788) {
                    local_788 = uVar14 + 1;
                    local_5b4[uVar11] = 0;
                    local_5b8 = local_788;
                  }
                }
                else {
                  uVar18 = 0;
                  uVar17 = uVar14;
                  if (uVar20 != 0) {
                    do {
                      uVar17 = (uint)uVar11;
                      uVar10 = uVar11;
                      if (uVar17 == 0x73) break;
                      if (uVar17 == local_788) {
                        local_5b4[uVar11] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar10 = (ulonglong)(uVar17 + 1);
                      uVar18 = (ulonglong)local_d38[-uVar14 + uVar17] * (ulonglong)uVar16 + uVar18 +
                               (ulonglong)local_5b4[uVar11];
                      local_5b4[uVar11] = (uint)uVar18;
                      uVar18 = uVar18 >> 0x20;
                      uVar11 = uVar10;
                      local_788 = local_5b8;
                    } while (-uVar14 + uVar17 + 1 != uVar20);
                    uVar17 = (uint)uVar10;
                    uVar16 = (uint)uVar18;
                    while (uVar16 != 0) {
                      uVar17 = (uint)uVar10;
                      if (uVar17 == 0x73) goto LAB_1801e9088;
                      if (uVar17 == local_788) {
                        local_5b4[uVar10] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar16 = local_5b4[uVar10];
                      uVar17 = uVar17 + 1;
                      local_5b4[uVar10] = (uint)(uVar16 + uVar18);
                      uVar16 = (uint)(uVar16 + uVar18 >> 0x20);
                      uVar18 = (ulonglong)uVar16;
                      uVar10 = (ulonglong)uVar17;
                      local_788 = local_5b8;
                    }
                  }
                  if (uVar17 == 0x73) goto LAB_1801e9088;
                }
                uVar11 = (ulonglong)(uVar14 + 1);
              } while (uVar14 + 1 != uVar19);
            }
            uVar14 = local_788;
            uVar19 = local_d3c;
            if (local_788 != 0) {
              if (local_788 < 0x74) {
                FUN_1802079d0();
                uVar14 = local_788;
                uVar19 = local_d3c;
              }
              else {
                FUN_180207610(local_784,0,0x1cc);
                puVar6 = (undefined4 *)FUN_1801e6ae4();
                *puVar6 = 0x22;
                FUN_1801e1344();
                uVar14 = local_788;
                uVar19 = local_d3c;
              }
            }
          }
LAB_1801e8fb6:
          bVar27 = true;
          uVar16 = uVar14;
        }
        if (!bVar27) goto LAB_1801e9088;
      }
      if (uVar24 % 10 != 0) {
        uVar19 = *(uint *)(&DAT_180246d88 + (ulonglong)(uVar24 % 10 - 1) * 4);
        if (uVar19 == 0) {
LAB_1801e9088:
          local_788 = 0;
          uVar16 = 0;
        }
        else if ((uVar19 != 1) && (uVar16 != 0)) {
          uVar18 = 0;
          uVar11 = 0;
          do {
            uVar24 = (int)uVar11 + 1;
            uVar10 = (ulonglong)local_784[uVar11] * (ulonglong)uVar19 + uVar18;
            local_784[uVar11] = (uint)uVar10;
            uVar18 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar24;
          } while (uVar24 != uVar16);
          uVar19 = (uint)(uVar10 >> 0x20);
          uVar16 = local_788;
          if (uVar19 != 0) {
            if (0x72 < local_788) goto LAB_1801e9088;
            local_784[local_788] = uVar19;
            local_788 = local_788 + 1;
            uVar16 = local_788;
          }
        }
      }
      if (uVar25 != 0) {
        uVar19 = 0;
        uVar24 = 0;
        if (uVar16 != 0) {
          do {
            uVar16 = uVar24 + 1;
            uVar25 = local_784[uVar24];
            local_784[uVar24] = (uint)(uVar25 + uVar26);
            uVar25 = (uint)(uVar25 + uVar26 >> 0x20);
            uVar26 = (ulonglong)uVar25;
            uVar24 = uVar16;
          } while (uVar16 != local_788);
          uVar16 = local_788;
          uVar19 = local_788;
          if (uVar25 == 0) goto LAB_1801e9114;
        }
        if (uVar19 < 0x73) {
          local_784[uVar19] = uVar25;
          local_788 = local_788 + 1;
          uVar16 = local_788;
        }
        else {
          local_788 = 0;
          uVar16 = 0;
        }
      }
    }
  }
LAB_1801e9114:
  if (local_d44 == 0) {
LAB_1801e9645:
    if (uVar16 == 0) goto LAB_1801e964a;
    local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
    iVar9 = 0x1f;
    bVar27 = local_784[uVar16 - 1] == 0;
    if (!bVar27) {
      for (; local_784[uVar16 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (bVar27) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    local_d3c = (uVar16 - 1) * 0x20 + iVar9;
  }
  else {
    for (uVar25 = local_d44 / 10; uVar25 != 0; uVar25 = uVar25 - uVar19) {
      uVar19 = uVar25;
      if (0x26 < uVar25) {
        uVar19 = 0x26;
      }
      uVar24 = uVar19 - 1;
      bVar8 = (&DAT_180246cf2)[(ulonglong)uVar24 * 4];
      bVar1 = (&DAT_180246cf3)[(ulonglong)uVar24 * 4];
      local_218 = (uint)bVar1 + (uint)bVar8;
      local_d40 = uVar19;
      local_d3c = uVar25;
      FUN_180207610(local_214,0,(ulonglong)bVar8 * 4);
      FUN_1802079d0(local_214 + bVar8,
                    &DAT_1802463e0 + (ulonglong)*(ushort *)(&DAT_180246cf0 + (ulonglong)uVar24 * 4) * 4,
                    (ulonglong)bVar1 << 2);
      uVar24 = local_784[0];
      if (local_218 < 2) {
        uVar26 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
LAB_1801e91d7:
          local_788 = 0;
          uVar20 = 0;
          goto LAB_1801e94e4;
        }
        uVar20 = uVar16;
        if ((local_214[0] == 1) || (uVar16 == 0)) goto LAB_1801e94e4;
        uVar18 = 0;
        uVar11 = 0;
        do {
          uVar20 = (int)uVar11 + 1;
          uVar10 = local_784[uVar11] * uVar26 + uVar18;
          local_784[uVar11] = (uint)uVar10;
          uVar18 = uVar10 >> 0x20;
          uVar24 = (uint)(uVar10 >> 0x20);
          uVar11 = (ulonglong)uVar20;
        } while (uVar20 != uVar16);
LAB_1801e922a:
        uVar16 = 0;
        uVar20 = local_788;
        if (uVar24 == 0) goto LAB_1801e94e4;
        if (local_788 < 0x73) {
          local_784[local_788] = uVar24;
          local_788 = local_788 + 1;
          uVar20 = local_788;
          goto LAB_1801e94e4;
        }
        local_788 = 0;
        bVar27 = false;
      }
      else {
        if (uVar16 < 2) {
          uVar26 = (ulonglong)local_784[0];
          local_788 = local_218;
          if (local_218 != 0) {
            if (local_218 < 0x74) {
              FUN_1802079d0();
            }
            else {
              FUN_180207610(local_784,0,0x1cc);
              puVar6 = (undefined4 *)FUN_1801e6ae4();
              *puVar6 = 0x22;
              FUN_1801e1344();
            }
          }
          if (uVar24 == 0) goto LAB_1801e91d7;
          uVar20 = local_788;
          if ((uVar24 != 1) && (local_788 != 0)) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar16 = (int)uVar11 + 1;
              uVar10 = local_784[uVar11] * uVar26 + uVar18;
              local_784[uVar11] = (uint)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar24 = (uint)(uVar10 >> 0x20);
              uVar11 = (ulonglong)uVar16;
            } while (uVar16 != local_788);
            goto LAB_1801e922a;
          }
        }
        else {
          puVar23 = local_784;
          puVar13 = local_214;
          uVar25 = uVar16;
          if (local_218 < uVar16) {
            puVar13 = local_784;
            uVar25 = local_218;
            puVar23 = local_214;
          }
          local_788 = 0;
          local_5b8 = 0;
          uVar26 = 0;
          uVar19 = local_218;
          if (local_218 < uVar16) {
            uVar19 = uVar16;
          }
          if (uVar25 != 0) {
            do {
              uVar24 = (uint)uVar26;
              uVar16 = puVar23[uVar26];
              if (uVar16 == 0) {
                if (uVar24 == local_788) {
                  local_788 = uVar24 + 1;
                  local_5b4[uVar26] = 0;
                  local_5b8 = local_788;
                }
              }
              else {
                uVar11 = 0;
                uVar20 = uVar24;
                if (uVar19 != 0) {
                  do {
                    uVar20 = (uint)uVar26;
                    uVar18 = uVar26;
                    if (uVar20 == 0x73) break;
                    if (uVar20 == local_788) {
                      local_5b4[uVar26] = 0;
                      local_5b8 = uVar20 + 1;
                    }
                    uVar18 = (ulonglong)(uVar20 + 1);
                    uVar11 = (ulonglong)puVar13[-uVar24 + uVar20] * (ulonglong)uVar16 + uVar11 +
                             (ulonglong)local_5b4[uVar26];
                    local_5b4[uVar26] = (uint)uVar11;
                    uVar11 = uVar11 >> 0x20;
                    uVar26 = uVar18;
                    local_788 = local_5b8;
                  } while (-uVar24 + uVar20 + 1 != uVar19);
                  uVar20 = (uint)uVar18;
                  uVar16 = (uint)uVar11;
                  while (uVar16 != 0) {
                    uVar20 = (uint)uVar18;
                    if (uVar20 == 0x73) goto LAB_1801e95be;
                    if (uVar20 == local_788) {
                      local_5b4[uVar18] = 0;
                      local_5b8 = uVar20 + 1;
                    }
                    uVar16 = local_5b4[uVar18];
                    uVar20 = uVar20 + 1;
                    local_5b4[uVar18] = (uint)(uVar11 + uVar16);
                    uVar16 = (uint)(uVar11 + uVar16 >> 0x20);
                    uVar11 = (ulonglong)uVar16;
                    uVar18 = (ulonglong)uVar20;
                    local_788 = local_5b8;
                  }
                }
                if (uVar20 == 0x73) goto LAB_1801e95be;
              }
              uVar26 = (ulonglong)(uVar24 + 1);
            } while (uVar24 + 1 != uVar25);
          }
          uVar20 = local_788;
          uVar25 = local_d3c;
          uVar19 = local_d40;
          if (local_788 != 0) {
            if (local_788 < 0x74) {
              FUN_1802079d0();
              uVar20 = local_788;
              uVar25 = local_d3c;
              uVar19 = local_d40;
            }
            else {
              FUN_180207610(local_784,0,0x1cc);
              puVar6 = (undefined4 *)FUN_1801e6ae4();
              *puVar6 = 0x22;
              FUN_1801e1344();
              uVar20 = local_788;
              uVar25 = local_d3c;
              uVar19 = local_d40;
            }
          }
        }
LAB_1801e94e4:
        bVar27 = true;
        uVar16 = uVar20;
      }
      if (!bVar27) goto LAB_1801e95be;
    }
    if (local_d44 % 10 == 0) goto LAB_1801e9645;
    uVar25 = *(uint *)(&DAT_180246d88 + (ulonglong)(local_d44 % 10 - 1) * 4);
    if (uVar25 == 0) {
      local_788 = 0;
      uVar16 = 0;
      goto LAB_1801e9645;
    }
    if (uVar25 == 1) goto LAB_1801e9645;
    if (uVar16 != 0) {
      uVar11 = 0;
      uVar26 = 0;
      do {
        uVar19 = (int)uVar26 + 1;
        uVar18 = (ulonglong)local_784[uVar26] * (ulonglong)uVar25 + uVar11;
        local_784[uVar26] = (uint)uVar18;
        uVar11 = uVar18 >> 0x20;
        uVar26 = (ulonglong)uVar19;
      } while (uVar19 != uVar16);
      uVar25 = (uint)(uVar18 >> 0x20);
      uVar16 = local_788;
      if (uVar25 != 0) {
        if (0x72 < local_788) {
LAB_1801e95be:
          puVar7 = (ulonglong *)*local_d20;
          if (*(char *)(local_d20 + 1) != '\0') {
            *puVar7 = (-(ulonglong)((char)local_d28[0xc2] != '\0') & 0x8000000000000000) + 0x7ff0000000000000 |
                      *puVar7 & 0x7ff0000000000000;
          }
          *(uint *)puVar7 =
               (-(uint)((char)local_d28[0xc2] != '\0') & 0x80000000) + 0x7f800000 | (uint)*puVar7 & 0x7f800000;
        }
        local_784[local_788] = uVar25;
        local_788 = local_788 + 1;
        uVar16 = local_788;
      }
      goto LAB_1801e9645;
    }
LAB_1801e964a:
    local_d3c = 0;
  }
  puVar23 = local_d10;
  if ((local_d3c < local_d30) && (local_d48 != 0)) {
    uVar25 = 0;
    uVar26 = 0;
    local_958 = 0;
    uVar19 = 0;
    puVar13 = local_d08;
    if (local_d08 != local_d10) {
      do {
        uVar24 = (uint)uVar26;
        if (uVar19 == 9) {
          if (uVar25 != 0) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar19 = (int)uVar11 + 1;
              uVar10 = (ulonglong)local_954[uVar11] * 1000000000 + uVar18;
              local_954[uVar11] = (uint)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar19;
            } while (uVar19 != uVar25);
            uVar19 = (uint)(uVar10 >> 0x20);
            uVar25 = local_958;
            if (uVar19 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar19;
                local_958 = local_958 + 1;
                uVar25 = local_958;
              }
              else {
                local_218 = 0;
                local_958 = 0;
                memcpy_s(local_954,0x1cc,local_214,0);
                uVar25 = local_958;
              }
            }
          }
          if (uVar24 != 0) {
            uVar11 = 0;
            uVar19 = 0;
            if (uVar25 != 0) {
              do {
                uVar25 = (int)uVar11 + 1;
                uVar18 = local_954[uVar11] + uVar26;
                local_954[uVar11] = (uint)uVar18;
                uVar26 = uVar18 >> 0x20;
                uVar24 = (uint)(uVar18 >> 0x20);
                uVar11 = (ulonglong)uVar25;
              } while (uVar25 != local_958);
              uVar19 = local_958;
              uVar25 = local_958;
              if (uVar24 == 0) goto LAB_1801e97e5;
            }
            if (uVar19 < 0x73) {
              local_954[uVar19] = uVar24;
              local_958 = local_958 + 1;
              uVar25 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVar25 = local_958;
            }
          }
LAB_1801e97e5:
          uVar24 = 0;
          uVar19 = 0;
        }
        uVar20 = *puVar13;
        uVar19 = uVar19 + 1;
        puVar13 = (uint *)((longlong)puVar13 + 1);
        uVar24 = (uint)(byte)uVar20 + uVar24 * 10;
        uVar26 = (ulonglong)uVar24;
      } while (puVar13 != puVar23);
      if (uVar19 != 0) {
        uVar11 = (ulonglong)uVar19 / 10;
        uVar20 = (uint)uVar11;
        while (local_d40 = (uint)uVar11, uVar20 != 0) {
          uVar20 = local_d40;
          if (0x26 < local_d40) {
            uVar20 = 0x26;
          }
          local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar20);
          uVar11 = (ulonglong)(uVar20 - 1);
          bVar8 = (&DAT_180246cf2)[uVar11 * 4];
          bVar1 = (&DAT_180246cf3)[uVar11 * 4];
          local_218 = (uint)bVar1 + (uint)bVar8;
          FUN_180207610(local_214,0,(ulonglong)bVar8 * 4);
          FUN_1802079d0(local_214 + bVar8,&DAT_1802463e0 + (ulonglong)*(ushort *)(&DAT_180246cf0 + uVar11 * 4) * 4,
                        (ulonglong)bVar1 << 2);
          uVar20 = local_954[0];
          if (local_218 < 2) {
            uVar11 = (ulonglong)local_214[0];
            if (local_214[0] == 0) {
LAB_1801e98bb:
              local_218 = 0;
              puVar23 = local_214;
              local_958 = 0;
              rVar22 = 0;
              goto LAB_1801e9b83;
            }
            if ((local_214[0] == 1) || (uVar25 == 0)) goto LAB_1801e9b9b;
            uVar10 = 0;
            uVar18 = 0;
            do {
              uVar20 = (int)uVar18 + 1;
              uVar12 = local_954[uVar18] * uVar11 + uVar10;
              local_954[uVar18] = (uint)uVar12;
              uVar10 = uVar12 >> 0x20;
              uVar14 = (uint)(uVar12 >> 0x20);
              uVar18 = (ulonglong)uVar20;
            } while (uVar20 != uVar25);
LAB_1801e991b:
            uVar25 = local_958;
            if (uVar14 == 0) goto LAB_1801e9b9b;
            if (local_958 < 0x73) {
              local_954[local_958] = uVar14;
              local_958 = local_958 + 1;
              uVar25 = local_958;
              goto LAB_1801e9b9b;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            bVar27 = false;
            uVar25 = local_958;
          }
          else {
            puVar23 = local_214;
            if (uVar25 < 2) {
              local_958 = local_218;
              memcpy_s(local_954,0x1cc,puVar23,(ulonglong)local_218 << 2);
              if (uVar20 != 0) {
                uVar25 = local_958;
                if ((uVar20 != 1) && (local_958 != 0)) {
                  uVar18 = 0;
                  uVar11 = 0;
                  do {
                    uVar25 = (int)uVar11 + 1;
                    uVar10 = (ulonglong)local_954[uVar11] * (ulonglong)uVar20 + uVar18;
                    local_954[uVar11] = (uint)uVar10;
                    uVar18 = uVar10 >> 0x20;
                    uVar14 = (uint)(uVar10 >> 0x20);
                    uVar11 = (ulonglong)uVar25;
                  } while (uVar25 != local_958);
                  goto LAB_1801e991b;
                }
                goto LAB_1801e9b9b;
              }
              goto LAB_1801e98bb;
            }
            local_d18 = local_954;
            local_d44 = uVar25;
            if (local_218 < uVar25) {
              puVar23 = local_954;
              local_d18 = local_214;
              local_d44 = local_218;
            }
            uVar14 = 0;
            local_958 = 0;
            uVar20 = local_218;
            if (local_218 < uVar25) {
              uVar20 = uVar25;
            }
            local_5b8 = 0;
            if (local_d44 != 0) {
              do {
                uVar25 = local_d18[uVar14];
                if (uVar25 == 0) {
                  if (uVar14 == local_958) {
                    local_958 = uVar14 + 1;
                    local_5b4[uVar14] = 0;
                    local_5b8 = local_958;
                  }
                }
                else {
                  uVar11 = 0;
                  uVar17 = uVar14;
                  if (uVar20 != 0) {
                    uVar18 = (ulonglong)uVar14;
                    do {
                      uVar17 = (uint)uVar18;
                      uVar10 = uVar18;
                      if (uVar17 == 0x73) break;
                      if (uVar17 == local_958) {
                        local_5b4[uVar18] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar10 = (ulonglong)(uVar17 + 1);
                      uVar11 = (ulonglong)puVar23[-uVar14 + uVar17] * (ulonglong)uVar25 + (ulonglong)local_5b4[uVar18] +
                               uVar11;
                      local_5b4[uVar18] = (uint)uVar11;
                      uVar11 = uVar11 >> 0x20;
                      uVar18 = uVar10;
                      local_958 = local_5b8;
                    } while (-uVar14 + uVar17 + 1 != uVar20);
                    uVar17 = (uint)uVar10;
                    uVar25 = (uint)uVar11;
                    while (uVar25 != 0) {
                      uVar17 = (uint)uVar10;
                      if (uVar17 == 0x73) goto LAB_1801e9c5e;
                      if (uVar17 == local_958) {
                        local_5b4[uVar10] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar25 = local_5b4[uVar10];
                      uVar17 = uVar17 + 1;
                      local_5b4[uVar10] = (uint)(uVar25 + uVar11);
                      uVar25 = (uint)(uVar25 + uVar11 >> 0x20);
                      uVar11 = (ulonglong)uVar25;
                      uVar10 = (ulonglong)uVar17;
                      local_958 = local_5b8;
                    }
                  }
                  if (uVar17 == 0x73) {
LAB_1801e9c5e:
                    local_b28 = 0;
                    local_958 = 0;
                    memcpy_s(local_954,0x1cc,local_b24,0);
                    goto LAB_1801e9c85;
                  }
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 != local_d44);
            }
            puVar23 = local_5b4;
            rVar22 = (ulonglong)local_958 << 2;
LAB_1801e9b83:
            memcpy_s(local_954,0x1cc,puVar23,rVar22);
            uVar25 = local_958;
LAB_1801e9b9b:
            bVar27 = true;
          }
          if (!bVar27) goto LAB_1801e9c85;
          uVar20 = local_d40 - (int)local_d38;
          uVar11 = (ulonglong)uVar20;
        }
        if (uVar19 % 10 != 0) {
          uVar19 = *(uint *)(&DAT_180246d88 + (ulonglong)(uVar19 % 10 - 1) * 4);
          if (uVar19 == 0) {
LAB_1801e9c85:
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar25 = local_958;
          }
          else if ((uVar19 != 1) && (uVar25 != 0)) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar20 = (int)uVar11 + 1;
              uVar10 = (ulonglong)local_954[uVar11] * (ulonglong)uVar19 + uVar18;
              local_954[uVar11] = (uint)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar20;
            } while (uVar20 != uVar25);
            uVar19 = (uint)(uVar10 >> 0x20);
            uVar25 = local_958;
            if (uVar19 != 0) {
              if (0x72 < local_958) goto LAB_1801e9c85;
              local_954[local_958] = uVar19;
              local_958 = local_958 + 1;
              uVar25 = local_958;
            }
          }
        }
        if (uVar24 != 0) {
          uVar19 = 0;
          uVar20 = 0;
          if (uVar25 != 0) {
            do {
              uVar20 = uVar19 + 1;
              uVar25 = local_954[uVar19];
              local_954[uVar19] = (uint)(uVar25 + uVar26);
              uVar24 = (uint)(uVar25 + uVar26 >> 0x20);
              uVar26 = (ulonglong)uVar24;
              uVar19 = uVar20;
            } while (uVar20 != local_958);
            uVar20 = local_958;
            uVar25 = local_958;
            if (uVar24 == 0) goto LAB_1801e9d42;
          }
          if (uVar20 < 0x73) {
            local_954[uVar20] = uVar24;
            local_958 = local_958 + 1;
            uVar25 = local_958;
          }
          else {
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar25 = local_958;
          }
        }
      }
    }
LAB_1801e9d42:
    if ((int)*local_d28 < 0) {
      local_d48 = local_d48 - *local_d28;
    }
    uVar24 = 1;
    local_3e4 = 1;
    local_3e8 = 1;
    for (uVar19 = local_d48 / 10; uVar19 != 0; uVar19 = uVar19 - (int)local_d38) {
      uVar20 = uVar19;
      if (0x26 < uVar19) {
        uVar20 = 0x26;
      }
      local_d38._4_4_ = (undefined4)((ulonglong)local_d38 >> 0x20);
      local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar20);
      uVar26 = (ulonglong)(uVar20 - 1);
      bVar8 = (&DAT_180246cf2)[uVar26 * 4];
      bVar1 = (&DAT_180246cf3)[uVar26 * 4];
      local_218 = (uint)bVar1 + (uint)bVar8;
      FUN_180207610(local_214,0,(ulonglong)bVar8 * 4);
      FUN_1802079d0(local_214 + bVar8,&DAT_1802463e0 + (ulonglong)*(ushort *)(&DAT_180246cf0 + uVar26 * 4) * 4,
                    (ulonglong)bVar1 << 2);
      if (local_218 < 2) {
        uVar26 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          uVar24 = local_3e8;
        }
        else if ((local_214[0] != 1) && (uVar24 != 0)) {
          uVar18 = 0;
          uVar11 = 0;
          do {
            uVar20 = (int)uVar11 + 1;
            uVar10 = *(uint *)((longlong)&local_3e4 + uVar11 * 4) * uVar26 + uVar18;
            *(int *)((longlong)&local_3e4 + uVar11 * 4) = (int)uVar10;
            uVar18 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar20;
          } while (uVar20 != uVar24);
          iVar9 = (int)(uVar10 >> 0x20);
          uVar24 = local_3e8;
          if (iVar9 == 0) goto LAB_1801e9e46;
          if (local_3e8 < 0x73) {
            *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar9;
            local_3e8 = local_3e8 + 1;
            uVar24 = local_3e8;
            goto LAB_1801e9e46;
          }
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          bVar27 = false;
          uVar24 = local_3e8;
          goto LAB_1801ea17e;
        }
LAB_1801e9e46:
        bVar27 = true;
      }
      else {
        puVar23 = local_214;
        if (uVar24 < 2) {
          uVar24 = (uint)local_3e4;
          uVar26 = local_3e4 & 0xffffffff;
          local_3e8 = local_218;
          memcpy_s(&local_3e4,0x1cc,puVar23,(ulonglong)local_218 << 2);
          if (uVar24 == 0) {
            local_cf8 = 0;
            puVar23 = local_cf4;
            local_3e8 = 0;
            rVar22 = 0;
            goto LAB_1801ea166;
          }
          if ((uVar24 != 1) && (local_3e8 != 0)) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar24 = (int)uVar11 + 1;
              uVar10 = *(uint *)((longlong)&local_3e4 + uVar11 * 4) * uVar26 + uVar18;
              *(int *)((longlong)&local_3e4 + uVar11 * 4) = (int)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar24;
            } while (uVar24 != local_3e8);
            iVar9 = (int)(uVar10 >> 0x20);
            if (iVar9 != 0) {
              if (0x72 < local_3e8) {
                local_cf8 = 0;
                local_3e8 = 0;
                memcpy_s(&local_3e4,0x1cc,local_cf4,0);
                bVar27 = false;
                uVar24 = local_3e8;
                goto LAB_1801ea17e;
              }
              *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar9;
              local_3e8 = local_3e8 + 1;
            }
          }
        }
        else {
          local_d18 = (uint *)&local_3e4;
          local_d40 = uVar24;
          if (local_218 < uVar24) {
            puVar23 = (uint *)&local_3e4;
            local_d18 = local_214;
            local_d40 = local_218;
          }
          uVar17 = 0;
          uVar20 = 0;
          uVar14 = local_218;
          if (local_218 < uVar24) {
            uVar14 = uVar24;
          }
          local_5b8 = 0;
          if (local_d40 != 0) {
            do {
              uVar24 = local_d18[uVar17];
              if (uVar24 == 0) {
                if (uVar17 == uVar20) {
                  uVar20 = uVar17 + 1;
                  local_5b4[uVar17] = 0;
                  local_5b8 = uVar20;
                }
              }
              else {
                uVar26 = 0;
                uVar21 = uVar17;
                if (uVar14 != 0) {
                  uVar11 = (ulonglong)uVar17;
                  do {
                    uVar21 = (uint)uVar11;
                    uVar18 = uVar11;
                    if (uVar21 == 0x73) break;
                    if (uVar21 == uVar20) {
                      local_5b4[uVar11] = 0;
                      local_5b8 = uVar21 + 1;
                    }
                    uVar18 = (ulonglong)(uVar21 + 1);
                    uVar26 = (ulonglong)puVar23[-uVar17 + uVar21] * (ulonglong)uVar24 + uVar26 +
                             (ulonglong)local_5b4[uVar11];
                    local_5b4[uVar11] = (uint)uVar26;
                    uVar26 = uVar26 >> 0x20;
                    uVar11 = uVar18;
                    uVar20 = local_5b8;
                  } while (-uVar17 + uVar21 + 1 != uVar14);
                  uVar21 = (uint)uVar18;
                  uVar24 = (uint)uVar26;
                  while (uVar24 != 0) {
                    uVar21 = (uint)uVar18;
                    if (uVar21 == 0x73) goto LAB_1801ea1f9;
                    if (uVar21 == uVar20) {
                      local_5b4[uVar18] = 0;
                      local_5b8 = uVar21 + 1;
                    }
                    uVar24 = local_5b4[uVar18];
                    uVar21 = uVar21 + 1;
                    local_5b4[uVar18] = (uint)(uVar24 + uVar26);
                    uVar24 = (uint)(uVar24 + uVar26 >> 0x20);
                    uVar26 = (ulonglong)uVar24;
                    uVar18 = (ulonglong)uVar21;
                    uVar20 = local_5b8;
                  }
                }
                if (uVar21 == 0x73) {
LAB_1801ea1f9:
                  local_b28 = 0;
                  local_3e8 = 0;
                  memcpy_s(&local_3e4,0x1cc,local_b24,0);
                  goto LAB_1801ea29f;
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != local_d40);
          }
          puVar23 = local_5b4;
          rVar22 = (ulonglong)uVar20 << 2;
          local_3e8 = uVar20;
LAB_1801ea166:
          memcpy_s(&local_3e4,0x1cc,puVar23,rVar22);
        }
        bVar27 = true;
        uVar24 = local_3e8;
      }
LAB_1801ea17e:
      if (!bVar27) goto LAB_1801ea29f;
    }
    if (local_d48 % 10 != 0) {
      uVar19 = *(uint *)(&DAT_180246d88 + (ulonglong)(local_d48 % 10 - 1) * 4);
      if (uVar19 == 0) {
        local_cf8 = 0;
        local_3e8 = 0;
        memcpy_s(&local_3e4,0x1cc,local_cf4,0);
        uVar24 = local_3e8;
      }
      else if ((uVar19 != 1) && (uVar24 != 0)) {
        uVar11 = 0;
        uVar26 = 0;
        do {
          uVar20 = (int)uVar26 + 1;
          uVar18 = (ulonglong)*(uint *)((longlong)&local_3e4 + uVar26 * 4) * (ulonglong)uVar19 + uVar11;
          *(int *)((longlong)&local_3e4 + uVar26 * 4) = (int)uVar18;
          uVar11 = uVar18 >> 0x20;
          uVar26 = (ulonglong)uVar20;
        } while (uVar20 != uVar24);
        iVar9 = (int)(uVar18 >> 0x20);
        uVar24 = local_3e8;
        if (iVar9 != 0) {
          if (0x72 < local_3e8) {
LAB_1801ea29f:
            local_cf8 = 0;
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
            uVar25 = local_d28[0xc2];
            if (*(char *)(local_d20 + 1) != '\0') {
              puVar7 = (ulonglong *)FUN_1801e848c();
              *puVar7 = -(ulonglong)((char)uVar25 != '\0') & 0x8000000000000000;
            }
            puVar23 = (uint *)FUN_1801e84c8();
            *puVar23 = -(uint)((char)uVar25 != '\0') & 0x80000000;
          }
          *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar9;
          local_3e8 = local_3e8 + 1;
          uVar24 = local_3e8;
        }
      }
    }
    if (uVar25 == 0) {
      uVar19 = 0;
    }
    else {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      iVar9 = 0x1f;
      bVar27 = local_954[uVar25 - 1] == 0;
      if (!bVar27) {
        for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar27) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      uVar19 = (uVar25 - 1) * 0x20 + iVar9;
    }
    if (uVar24 == 0) {
      uVar20 = 0;
    }
    else {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      puVar23 = (uint *)((longlong)&local_3e4 + (ulonglong)(uVar24 - 1) * 4);
      iVar9 = 0x1f;
      bVar27 = *puVar23 == 0;
      if (!bVar27) {
        for (; *puVar23 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar27) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      uVar20 = (uVar24 - 1) * 0x20 + iVar9;
    }
    uVar19 = -(uint)(uVar19 < uVar20) & uVar20 - uVar19;
    local_d44 = uVar19;
    if (uVar19 != 0) {
      local_d48 = 0;
      uVar20 = uVar19 & 0x1f;
      uVar17 = uVar19 >> 5;
      local_d38 = (uint *)CONCAT44(local_d38._4_4_,0x20 - uVar20);
      bVar8 = (byte)(0x20 - uVar20);
      uVar14 = (1 << (bVar8 & 0x3f)) - 1;
      local_d40 = ~uVar14;
      iVar9 = 0x1f;
      bVar27 = local_954[uVar25 - 1] == 0;
      if (!bVar27) {
        for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar27) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      if ((uVar17 + uVar25 < 0x74) && (local_d48 = (0x20U - iVar9 < uVar20) + uVar17 + uVar25, local_d48 < 0x74)) {
        uVar21 = local_d48 - 1;
        if (uVar21 != uVar17 - 1) {
          do {
            uVar4 = uVar21 - uVar17;
            if (uVar4 < uVar25) {
              uVar5 = local_954[uVar4];
            }
            else {
              uVar5 = 0;
            }
            if (uVar4 - 1 < uVar25) {
              uVar25 = local_954[uVar4 - 1];
            }
            else {
              uVar25 = 0;
            }
            local_954[uVar21] = (uVar25 & local_d40) >> (bVar8 & 0x1f) | (uVar5 & uVar14) << (sbyte)uVar20;
            uVar21 = uVar21 - 1;
            uVar25 = local_958;
          } while (uVar21 != uVar17 - 1);
        }
        uVar20 = 0;
        local_958 = local_d48;
        uVar25 = local_d48;
        if (uVar17 != 0) {
          do {
            uVar26 = (ulonglong)uVar20;
            uVar20 = uVar20 + 1;
            local_954[uVar26] = 0;
          } while (uVar20 != uVar17);
        }
      }
      else {
        local_cf8 = 0;
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_cf4,0);
        uVar25 = local_958;
      }
    }
    uVar20 = local_d3c;
    local_d30 = local_d30 - local_d3c;
    uVar14 = local_d30;
    if (local_d3c != 0) {
      if (local_d30 < uVar19) {
        bVar27 = true;
        goto LAB_1801ea6d0;
      }
      uVar14 = local_d30 - uVar19;
    }
    if (uVar24 < uVar25) {
LAB_1801ea4ee:
      bVar27 = false;
    }
    else {
      uVar17 = uVar25;
      if (uVar25 < uVar24) {
        bVar27 = true;
      }
      else {
        do {
          uVar17 = uVar17 - 1;
          if (uVar17 == 0xffffffff) goto LAB_1801ea4ee;
          uVar24 = *(uint *)((longlong)&local_3e4 + (ulonglong)uVar17 * 4);
        } while (local_954[uVar17] == uVar24);
        bVar27 = local_954[uVar17] <= uVar24;
      }
    }
    if (bVar27) {
      uVar19 = uVar19 + 1;
    }
    uVar21 = uVar14 >> 5;
    sVar3 = (sbyte)(uVar14 & 0x1f);
    bVar8 = 0x20 - sVar3;
    uVar17 = (int)(1L << (bVar8 & 0x3f)) - 1;
    uVar24 = ~uVar17;
    local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar24);
    iVar9 = 0x1f;
    bVar27 = local_954[uVar25 - 1] == 0;
    if (!bVar27) {
      for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (bVar27) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    local_d44 = uVar19;
    if ((uVar21 + uVar25 < 0x74) && (uVar14 = (0x20U - iVar9 < (uVar14 & 0x1f)) + uVar21 + uVar25, uVar14 < 0x74)) {
      uVar4 = uVar14;
      while (uVar4 = uVar4 - 1, uVar4 != uVar21 - 1) {
        uVar5 = uVar4 - uVar21;
        if (uVar5 < uVar25) {
          uVar15 = local_954[uVar5];
        }
        else {
          uVar15 = 0;
        }
        if (uVar5 - 1 < uVar25) {
          uVar25 = local_954[uVar5 - 1];
        }
        else {
          uVar25 = 0;
        }
        local_954[uVar4] = (uVar25 & uVar24) >> (bVar8 & 0x1f) | (uVar15 & uVar17) << sVar3;
        uVar25 = local_958;
      }
      uVar25 = 0;
      local_958 = uVar14;
      if (uVar21 != 0) {
        do {
          uVar26 = (ulonglong)uVar25;
          uVar25 = uVar25 + 1;
          local_954[uVar26] = 0;
        } while (uVar25 != uVar21);
      }
    }
    else {
      local_cf8 = 0;
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_cf4,0);
    }
    uVar26 = FUN_1801ea7d0(&local_958,&local_3e8);
    bVar27 = local_958 == 0;
    lVar2 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar26 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = (int)lVar2 + 1;
    }
    if (local_d30 < uVar25) {
      bVar8 = (char)uVar25 - (byte)local_d30;
      if ((!bVar27) || (bVar27 = true, (uVar26 & (1L << (bVar8 & 0x3f)) - 1U) != 0)) {
        bVar27 = false;
      }
      uVar26 = uVar26 >> (bVar8 & 0x3f);
    }
    local_d58 = local_d20;
    uVar11 = 0;
    if (uVar16 != 0) {
      uVar11 = (ulonglong)local_784[0];
    }
    uVar18 = 0;
    if (1 < uVar16) {
      uVar18 = (ulonglong)local_784[1];
    }
    uVar25 = ~uVar19;
    if (uVar20 != 0) {
      uVar25 = uVar20 - 2;
    }
    FUN_1801e8504(uVar26 + ((uVar18 << 0x20) + uVar11 << ((byte)local_d30 & 0x3f)),uVar25,(char)local_d28[0xc2],bVar27);
  }
  else {
    bVar27 = local_d48 != 0;
LAB_1801ea6d0:
    local_d58 = local_d20;
    FUN_1801e88bc(&local_788,local_d3c,(char)local_d28[0xc2],bVar27);
  }
}



ulonglong FUN_1801ea7d0(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  byte local_res8;
  uint local_res18;
  undefined8 local_238;
  ulonglong local_228;
  undefined1 local_214 [468];

  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar15 = *param_1 - 1;
  uVar16 = (ulonglong)uVar15;
  uVar14 = uVar4 - 1;
  if (uVar14 == 0) {
    uVar4 = param_2[1];
    uVar7 = 0;
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    uVar17 = uVar7;
    if (uVar15 != 0) {
      while (uVar15 != 0xffffffff) {
        lVar8 = uVar16 + 1;
        uVar15 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar15;
        uVar1 = (ulonglong)param_1[lVar8] | uVar7 << 0x20;
        uVar7 = uVar1 % (ulonglong)uVar4;
        uVar17 = (uVar17 << 0x20) + (uVar1 / uVar4 & 0xffffffff);
      }
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      param_1[1] = (uint)uVar7;
      param_1[2] = 0;
      *param_1 = 1;
      return uVar17;
    }
    uVar14 = param_1[1];
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    uVar15 = uVar14 % uVar4;
    param_1[1] = uVar15;
    *param_1 = (uint)(uVar15 != 0);
    return (ulonglong)uVar14 / (ulonglong)uVar4;
  }
  if (uVar15 < uVar14) {
    return 0;
  }
  lVar8 = (longlong)(int)uVar15;
  iVar11 = uVar15 - uVar14;
  lVar10 = (longlong)iVar11;
  if (lVar10 <= lVar8) {
    puVar5 = param_1 + lVar8 + 1;
    uVar13 = uVar15;
    do {
      if (*(uint *)((longlong)param_2 + (lVar10 * -4 - (longlong)param_1) + (longlong)puVar5) != *puVar5) {
        if (param_1[(longlong)(int)uVar13 + 1] <= param_2[(longlong)(int)(uVar13 - iVar11) + 1]) goto LAB_1801ea95b;
        break;
      }
      uVar13 = uVar13 - 1;
      lVar8 = lVar8 + -1;
      puVar5 = puVar5 + -1;
    } while (lVar10 <= lVar8);
  }
  iVar11 = iVar11 + 1;
LAB_1801ea95b:
  if (iVar11 == 0) {
    return 0;
  }
  uVar14 = param_2[(ulonglong)uVar14 + 1];
  local_res18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  uVar13 = 0;
  uVar7 = 0;
  iVar9 = 0x1f;
  if (uVar14 != 0) {
    for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  if (uVar14 == 0) {
    iVar9 = 0x20;
    local_res8 = 0;
  }
  else {
    iVar9 = 0x1f - iVar9;
    local_res8 = 0x20 - (char)iVar9;
    if (iVar9 == 0) goto LAB_1801ea9f2;
  }
  uVar6 = local_res18 >> (local_res8 & 0x1f);
  local_res18 = local_res18 << ((byte)iVar9 & 0x1f);
  uVar14 = uVar6 | uVar14 << ((byte)iVar9 & 0x1f);
  if (2 < uVar4) {
    local_res18 = local_res18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (local_res8 & 0x1f);
  }
LAB_1801ea9f2:
  iVar11 = iVar11 + -1;
  local_228 = 0;
  uVar17 = uVar7;
  if (-1 < iVar11) {
    uVar1 = (ulonglong)uVar14;
    uVar14 = iVar11 + uVar4;
    do {
      uVar15 = uVar13;
      if (uVar14 <= (uint)uVar16) {
        uVar15 = param_1[(ulonglong)uVar14 + 1];
      }
      uVar6 = param_1[(ulonglong)(uVar14 - 2) + 1];
      uVar17 = (ulonglong)uVar6;
      local_238 = CONCAT44(uVar15,param_1[(ulonglong)(uVar14 - 1) + 1]);
      if (iVar9 != 0) {
        local_238 = (ulonglong)(uVar6 >> (local_res8 & 0x3f)) | local_238 << ((byte)iVar9 & 0x3f);
        uVar6 = uVar6 << ((byte)iVar9 & 0x1f);
        uVar17 = (ulonglong)uVar6;
        if (2 < uVar14) {
          uVar17 = (ulonglong)(uVar6 | param_1[(ulonglong)(uVar14 - 3) + 1] >> (local_res8 & 0x1f));
        }
      }
      uVar2 = local_238 / uVar1;
      local_238 = local_238 % uVar1;
      if (0xffffffff < uVar2) {
        lVar8 = uVar2 - 0xffffffff;
        uVar2 = 0xffffffff;
        local_238 = local_238 + lVar8 * uVar1;
      }
      if (local_238 < 0x100000000) {
        uVar3 = local_res18 * uVar2;
        do {
          if (uVar3 <= (local_238 << 0x20 | uVar17)) break;
          uVar2 = uVar2 - 1;
          uVar3 = uVar3 - local_res18;
          local_238 = local_238 + uVar1;
        } while (local_238 < 0x100000000);
      }
      if (uVar2 != 0) {
        uVar16 = uVar7;
        uVar6 = uVar13;
        puVar5 = param_2;
        if (uVar4 != 0) {
          do {
            uVar16 = uVar16 + puVar5[1] * uVar2;
            uVar17 = uVar16 >> 0x20;
            uVar12 = (uint)uVar16;
            uVar16 = uVar17 + 1;
            if (uVar12 <= param_1[(ulonglong)(uVar6 + iVar11) + 1]) {
              uVar16 = uVar17;
            }
            uVar18 = uVar6 + 1;
            param_1[(ulonglong)(uVar6 + iVar11) + 1] = param_1[(ulonglong)(uVar6 + iVar11) + 1] - uVar12;
            uVar6 = uVar18;
            puVar5 = puVar5 + 1;
          } while (uVar18 < uVar4);
        }
        if (uVar15 < uVar16) {
          uVar16 = uVar7;
          uVar15 = uVar13;
          puVar5 = param_2;
          if (uVar4 != 0) {
            do {
              uVar6 = uVar15 + 1;
              uVar16 = uVar16 + param_1[(ulonglong)(uVar15 + iVar11) + 1] + (ulonglong)puVar5[1];
              param_1[(ulonglong)(uVar15 + iVar11) + 1] = (uint)uVar16;
              uVar16 = uVar16 >> 0x20;
              uVar15 = uVar6;
              puVar5 = puVar5 + 1;
            } while (uVar6 < uVar4);
          }
          uVar2 = uVar2 - 1;
        }
        uVar16 = (ulonglong)(uVar14 - 1);
      }
      uVar15 = (uint)uVar16;
      uVar14 = uVar14 - 1;
      uVar17 = (local_228 << 0x20) + (uVar2 & 0xffffffff);
      iVar11 = iVar11 + -1;
      local_228 = uVar17;
    } while (-1 < iVar11);
  }
  uVar15 = uVar15 + 1;
  uVar4 = uVar15;
  if (uVar15 < *param_1) {
    do {
      uVar16 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar16 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar15;
  while( true ) {
    if (uVar15 == 0) {
      return uVar17;
    }
    uVar15 = uVar15 - 1;
    if (param_1[(ulonglong)uVar15 + 1] != 0) break;
    *param_1 = uVar15;
  }
  return uVar17;
}



errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t *peVar1;
  errno_t eVar2;

  if (_MaxCount == 0) {
LAB_1801eac79:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1801eac82:
      peVar1 = (errno_t *)FUN_1801e6ae4();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_1802079d0(_Dst,_Src,_MaxCount);
        goto LAB_1801eac79;
      }
      FUN_180207610(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1801eac82;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar1 = (errno_t *)FUN_1801e6ae4();
      eVar2 = 0x22;
    }
    *peVar1 = eVar2;
    FUN_1801e1344();
  }
  return eVar2;
}



void FUN_1801eace4(undefined8 param_1,undefined8 param_2)

{
  common_strtod_l<>(param_1,param_2,0);
  return;
}



ulonglong FUN_1801eacf0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];

  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_1802a0468) {
    auVar5 = roundss(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return 0x80000000;
        }
        return 0x3f800000;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 == fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 + 1.0);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    uVar4 = FUN_1801f9aa0(fVar3);
    return uVar4;
  }
  return uVar4;
}



uint FUN_1801ead84(uint param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined2 local_res18;
  undefined1 local_res1a;
  longlong local_28;
  longlong *local_20 [2];
  char local_10;

  uVar4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
      uVar4 = (uint)*(byte *)(local_20[0][0x22] + ((ulonglong)param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      local_resa = 0;
      if (((int)local_20[0][1] < 2) || (-1 < *(short *)(*local_20[0] + (ulonglong)((int)param_1 >> 8 & 0xff) * 2))) {
        puVar2 = (undefined4 *)FUN_1801e6ae4();
        uVar3 = 1;
        *puVar2 = 0x2a;
        local_res9 = 0;
        local_res8 = (char)param_1;
      }
      else {
        uVar3 = 2;
        local_res8 = (char)(param_1 >> 8);
        local_res9 = (char)param_1;
      }
      local_res18 = 0;
      local_res1a = 0;
      iVar1 = __acrt_LCMapStringA(local_20,local_20[0][0x27],0x100,&local_res8,uVar3,&local_res18,3,
                                  *(undefined4 *)((longlong)local_20[0] + 0xc),1);
      uVar4 = param_1;
      if (iVar1 != 0) {
        uVar4 = (uint)(byte)local_res18;
        if (iVar1 != 1) {
          uVar4 = (uint)CONCAT11((byte)local_res18,local_res18._1_1_);
        }
      }
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar4;
}



int __cdecl tolower(int _C)

{
  uint uVar1;
  undefined4 in_register_0000000c;
  ulonglong uVar2;

  uVar2 = CONCAT44(in_register_0000000c,_C);
  if (DAT_1802a9ca0 == 0) {
    if (_C - 0x41U < 0x1a) {
      uVar2 = (ulonglong)(_C + 0x20);
    }
  }
  else {
    uVar1 = FUN_1801ead84(uVar2,0);
    uVar2 = (ulonglong)uVar1;
  }
  return (int)uVar2;
}



int FUN_1801eaef0(undefined4 param_1)

{
  short sVar1;
  float fVar2;

  sVar1 = FUN_1801f42a0();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      fVar2 = (float)FUN_1801e1b20(param_1);
      if ((-2.1474836e+09 <= fVar2) && (fVar2 <= 2.1474836e+09)) {
        return (int)fVar2;
      }
    }
    FUN_1801fa030(1);
  }
  return 0;
}



ulonglong FUN_1801eaf60(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined1 auVar1 [60];
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar6;
  undefined1 in_ZMM0 [64];
  undefined4 uVar13;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar20 [64];
  float fVar23;
  float fVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];

  fVar23 = in_ZMM0._0_4_;
  auVar12._16_48_ = in_ZMM0._16_48_;
  auVar27 = in_ZMM2._0_16_;
  if (DAT_1802aa1a8 != 0) {
    auVar19 = vpunpckldq_avx(in_ZMM1._0_16_,in_ZMM0._0_16_);
    auVar29 = (undefined1  [16])0x0;
    auVar28 = (undefined1  [16])0x0;
    fVar14 = auVar19._0_4_;
    fVar2 = ABS(fVar14);
    fVar3 = ABS(fVar23);
    uVar16 = auVar19._0_8_;
    if ((uint)fVar2 < 0x7f800000) {
      if ((uint)fVar2 < 0x3f800001) {
        if (fVar2 == 0.0) {
          if ((uint)fVar3 < 0x7f800001) {
            return 0x3f800000;
          }
          if (0x7fbfffff < (uint)fVar3) {
            return 0x3f800000;
          }
          uVar6 = FUN_1801fa990(fVar3,(uint)fVar3 | 0x400000,(uint)fVar3 | 0x400000,3);
          return uVar6;
        }
        if (fVar14 == 1.0) {
          if ((uint)fVar3 < 0x7f800001) {
            return in_ZMM0._0_8_;
          }
          uVar6 = FUN_1801fa990(fVar3,(uint)fVar23 | 0x400000,(uint)fVar23 | 0x400000,3);
          return uVar6;
        }
      }
      if ((uint)fVar3 < 0x7f800000) {
        auVar35 = vcvtps2pd_avx(auVar19);
        auVar12 = ZEXT1664(auVar35);
        if ((int)fVar23 < 0x3f880000) {
          auVar28 = auVar29;
          if ((int)fVar23 < 1) {
            if (fVar3 == 0.0) {
              fVar2 = fVar14;
              if ((int)fVar14 < 0) {
                fVar2 = INFINITY;
              }
              fVar3 = 0.0;
              if ((int)fVar14 < 0) {
                fVar3 = INFINITY;
              }
              uVar4 = 0;
              if (0 < (int)fVar14) {
                fVar2 = 0.0;
              }
              if (((uint)fVar14 & 0x7f800000) < 0x4b000001) {
                auVar27 = vroundss_avx(auVar27,auVar19,8);
                uVar4 = 0;
                if (auVar27._0_4_ == fVar14) {
                  if (((int)ROUND(fVar14) & 1U) == 0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = (uint)fVar23 & 0x80000000;
                  }
                }
              }
              uVar4 = uVar4 | (uint)fVar2;
              if (fVar3 == 0.0) {
                return (ulonglong)uVar4;
              }
              uVar6 = FUN_1801fa990(uVar4,uVar16,uVar4,2);
              return uVar6;
            }
            if (((uint)fVar14 & 0x7f800000) < 0x4b000001) {
              auVar27 = vroundss_avx(auVar27,auVar19,8);
              if (auVar27._0_4_ != fVar14) {
                uVar6 = FUN_1801fa990(fVar3,0xffc00000,0xffc00000,6);
                return uVar6;
              }
              if (((int)ROUND(fVar14) & 1U) != 0) {
                auVar28 = SUB6416(ZEXT464(0x80000000),0);
              }
            }
          }
          auVar27 = vpshufd_avx(auVar35,0xee);
          dVar15 = auVar27._0_8_ - 1.0;
          param_2 = ABS(dVar15);
          if ((ulonglong)param_2 < 0x3fb0000000000000) {
            vpshufd_avx(auVar28,0x44);
            dVar34 = dVar15 / (dVar15 + 2.0);
            dVar25 = dVar34 + dVar34;
            dVar36 = dVar25 * dVar25;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = dVar36;
            auVar27 = vpshufd_avx(auVar27,0x44);
            auVar19._8_8_ = 0;
            auVar19._0_8_ = dVar36 * dVar36 * dVar25 * dVar36;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = dVar25 * dVar36;
            auVar19 = vunpcklpd_avx(auVar28,auVar19);
            auVar29._0_8_ = auVar19._0_8_ * (auVar27._0_8_ * 0.012500000003771751 + 0.08333333333333179);
            auVar29._8_8_ = auVar19._8_8_ * (auVar27._8_8_ * 0.0004348877777076146 + 0.0022321399879194482);
            auVar27 = vpshufd_avx(auVar29,0xee);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = dVar34 * dVar15;
            auVar19 = vpshufd_avx(auVar35,0xee);
            uVar6 = auVar19._0_8_;
            dVar15 = dVar15 + ((auVar27._0_8_ + auVar29._0_8_) - dVar34 * dVar15);
            goto LAB_1801eb05e;
          }
        }
        auVar27 = vpshufd_avx(auVar35,0xee);
        auVar27 = vpand_avx(auVar27,_DAT_180247040);
        uVar4 = (auVar27._4_4_ >> 0xc) + (uint)((auVar27._0_8_ >> 0x2b & 1) != 0);
        auVar19 = vpor_avx(auVar27,_DAT_180247020);
        auVar27 = vpshufd_avx(auVar19,0xee);
        auVar27 = vpsrlq_avx(auVar27,0x34);
        auVar27 = vpsubq_avx(auVar27,_DAT_180247030);
        auVar27 = vcvtdq2pd_avx(auVar27);
        dVar15 = ((double)((ulonglong)(uVar4 | 0x3fe00) << 0x2c) - auVar19._0_8_) *
                 *(double *)(&DAT_180249cd0 + (ulonglong)uVar4 * 8);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = dVar15;
        auVar19 = vfmadd213sd_fma(ZEXT816(0x3fd5555555555555),auVar17,ZEXT816(0x3fe0000000000000));
        auVar18._8_8_ = 0;
        auVar18._0_8_ = dVar15;
        auVar19 = vfmadd213sd_fma(auVar19,auVar18,ZEXT816(0x3ff0000000000000));
        dVar15 = dVar15 * auVar19._0_8_;
        dVar25 = auVar35._0_8_ *
                 ((auVar27._0_8_ * 0.6931471805599453 + *(double *)(&DAT_180247050 + (ulonglong)uVar4 * 8)) - dVar15);
        if (88.72283935546875 < dVar25) {
          auVar27 = vorps_avx(ZEXT416(0x7f800000),auVar28);
          uVar6 = FUN_1801fa990(&DAT_180247050,0x7f800000,auVar27._0_8_,9);
          return uVar6;
        }
        if (-103.2789306640625 < dVar25) {
          auVar30._0_8_ = dVar25 * 92.33248261689366;
          auVar30._8_8_ = 0;
          auVar19 = vcvtpd2dq_avx(auVar30);
          auVar27 = vcvtdq2pd_avx(auVar19);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = dVar25;
          auVar29 = vfnmadd231sd_fma(auVar7,auVar27,ZEXT816(0x3f862e42fefa39ef));
          auVar27 = vfmadd213sd_fma(ZEXT816(0x3fc5555555555555),auVar29,ZEXT816(0x3fe0000000000000));
          auVar27 = vfmadd213sd_fma(auVar27,auVar29,ZEXT816(0x3ff0000000000000));
          auVar31._8_8_ = 0;
          auVar31._0_8_ = *(ulonglong *)(&DAT_180249ad0 + (ulonglong)(auVar19._0_4_ & 0x3f) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar29._0_8_ * auVar27._0_8_;
          auVar29 = vfmadd213sd_fma(auVar8,auVar31,auVar31);
          auVar27 = vpsrad_avx(auVar19,6);
          auVar27 = vpsllq_avx(auVar27,0x34);
          auVar27 = vpaddq_avx(auVar27,auVar29);
          auVar9._0_4_ = (float)auVar27._0_8_;
          auVar9._4_12_ = auVar29._4_12_;
          auVar27 = vorps_avx(auVar9,auVar28);
          return auVar27._0_8_;
        }
        auVar27 = vorps_avx((undefined1  [16])0x0,auVar28);
        uVar6 = FUN_1801fa990(&DAT_180247050,dVar15,auVar27._0_8_,7);
        return uVar6;
      }
      if (fVar2 == 0.0) {
        return 0x3f800000;
      }
      if (fVar23 == INFINITY) {
        if (-1 < (int)fVar14) {
          return 0x7f800000;
        }
        return 0;
      }
      if (fVar23 == -INFINITY) {
        uVar4 = 0;
        fVar23 = fVar14;
        if ((int)fVar14 < 0) {
          fVar23 = 0.0;
        }
        if (0 < (int)fVar14) {
          fVar23 = INFINITY;
        }
        if (((uint)fVar14 & 0x7f800000) < 0x4b000001) {
          auVar27 = vroundss_avx(auVar27,auVar19,8);
          uVar4 = 0;
          if ((auVar27._0_4_ == fVar14) && (uVar4 = 0x80000000, ((int)ROUND(fVar14) & 1U) == 0)) {
            uVar4 = 0;
          }
        }
        return (ulonglong)(uVar4 | (uint)fVar23);
      }
    }
    else {
      if (0x7f800000 < (uint)fVar2) {
        if (0x7f800000 < (uint)fVar3) {
          if (fVar23 != -NAN) {
            uVar6 = FUN_1801fa990((uint)fVar23 | 0x400000,uVar16,(uint)fVar23 | 0x400000,5);
            return uVar6;
          }
          uVar6 = FUN_1801fa990(0x7fc00000,uVar16,(uint)fVar14 | 0x400000,5);
          return uVar6;
        }
        if (fVar23 == 1.0) {
          if (0x7fbfffff < (uint)fVar2) {
            return 0x3f800000;
          }
          uVar6 = FUN_1801fa990(0x3f800000,0x3f800000,0x3f800000,4);
          return uVar6;
        }
        uVar6 = FUN_1801fa990(uVar16,uVar16,(uint)fVar14 | 0x400000,4);
        return uVar6;
      }
      if ((uint)fVar3 < 0x7f800001) {
        if (fVar3 == 1.0) {
          return 0x3f800000;
        }
        if (-1 < (int)fVar14) {
          if (0x3f7fffff < (uint)fVar3) {
            return 0x7f800000;
          }
          return 0;
        }
        uVar4 = 0;
        if ((uint)fVar3 < 0x3f800000) {
          uVar4 = 0x7f800000;
        }
        return (ulonglong)uVar4;
      }
    }
    uVar6 = FUN_1801fa990((uint)fVar23 | 0x400000,uVar16,(uint)fVar23 | 0x400000,3);
    return uVar6;
  }
  auVar22._16_48_ = in_ZMM1._16_48_;
  auVar22._0_12_ = in_ZMM1._0_12_;
  auVar22._12_4_ = in_ZMM0._4_4_;
  auVar21._12_52_ = auVar22._12_52_;
  auVar21._0_8_ = in_ZMM1._0_8_;
  auVar21._8_4_ = in_ZMM1._4_4_;
  auVar20._8_56_ = auVar21._8_56_;
  fVar14 = in_ZMM1._0_4_;
  auVar20._0_8_ = CONCAT44(fVar23,fVar14);
  uVar6 = 0;
  fVar2 = ABS(fVar14);
  fVar3 = ABS(fVar23);
  auVar19 = auVar20._0_16_;
  if (0x7f7fffff < (uint)fVar2) {
    if (0x7f800000 < (uint)fVar2) {
      if (0x7f800000 < (uint)fVar3) {
        if (fVar23 != -NAN) {
          uVar6 = FUN_1801fa990((uint)fVar23 | 0x400000,auVar20._0_8_,param_3,5);
          return uVar6;
        }
        uVar6 = FUN_1801fa990(0x7fc00000,auVar20._0_8_,param_3,5);
        return uVar6;
      }
      if (fVar23 == 1.0) {
        if (0x7fbfffff < (uint)fVar2) {
          return 0x3f800000;
        }
        uVar6 = FUN_1801fa990(0x3f800000,0x3f800000,param_3,4);
        return uVar6;
      }
      uVar6 = FUN_1801fa990(fVar3,auVar20._0_8_,param_3,4);
      return uVar6;
    }
    if ((uint)fVar3 < 0x7f800001) {
      if (fVar3 == 1.0) {
        return 0x3f800000;
      }
      if ((int)fVar14 < 0) {
        if (fVar3 != 0.0) {
          uVar4 = 0;
          if ((uint)fVar3 < 0x3f800000) {
            uVar4 = 0x7f800000;
          }
          return (ulonglong)uVar4;
        }
      }
      else if ((uint)fVar3 < 0x3f800000) {
        return 0;
      }
      return 0x7f800000;
    }
LAB_1801eb5d0:
    uVar6 = FUN_1801fa990((uint)fVar23 | 0x400000,auVar20._0_8_,param_3,3);
    return uVar6;
  }
  if ((uint)fVar2 < 0x3f800001) {
    if (fVar2 == 0.0) {
      if ((uint)fVar3 < 0x7f800001) {
        return 0x3f800000;
      }
      if (0x7fbfffff < (uint)fVar3) {
        return 0x3f800000;
      }
      uVar6 = FUN_1801fa990(fVar3,(uint)fVar3 | 0x400000,param_3,3);
      return uVar6;
    }
    param_2 = (double)(auVar21._0_8_ & 0xffffffff);
    if (fVar14 == 1.0) {
      if ((uint)ABS(fVar23) < 0x7f800001) {
        return in_ZMM0._0_8_;
      }
      uVar6 = FUN_1801fa990(fVar3,(uint)fVar23 | 0x400000,param_3,3);
      return uVar6;
    }
  }
  if (0x7f7fffff < (uint)fVar3) {
    if (fVar2 == 0.0) {
      return 0x3f800000;
    }
    if (fVar23 == INFINITY) {
      if (-1 < (int)fVar14) {
        return 0x7f800000;
      }
      return 0;
    }
    if (fVar23 == -INFINITY) {
      uVar4 = 0;
      fVar23 = fVar14;
      if ((int)fVar14 < 0) {
        fVar23 = 0.0;
      }
      if (0 < (int)fVar14) {
        fVar23 = INFINITY;
      }
      if (((uint)fVar14 & 0x7f800000) < 0x4b000001) {
        if (DAT_1802a0468 < 2) {
          fVar2 = (float)(int)ROUND(fVar14);
        }
        else {
          auVar27 = roundss(auVar27,auVar19,8);
          fVar2 = auVar27._0_4_;
        }
        uVar4 = 0;
        if ((fVar2 == fVar14) && (uVar4 = 0x80000000, ((int)ROUND(fVar14) & 1U) == 0)) {
          uVar4 = 0;
        }
      }
      return (ulonglong)(uVar4 | (uint)fVar23);
    }
    goto LAB_1801eb5d0;
  }
  auVar12._0_8_ = (double)fVar14;
  auVar12._8_8_ = (double)fVar23;
  uVar13 = (undefined4)((ulonglong)auVar12._8_8_ >> 0x20);
  if ((int)fVar23 < 0x3f880000) {
    if ((int)fVar23 < 1) {
      if (fVar3 == 0.0) {
        fVar2 = fVar14;
        if ((int)fVar14 < 0) {
          fVar2 = INFINITY;
        }
        fVar3 = 0.0;
        if ((int)fVar14 < 0) {
          fVar3 = INFINITY;
        }
        uVar4 = 0;
        if (0 < (int)fVar14) {
          fVar2 = 0.0;
        }
        uVar5 = (uint)fVar14 & 0x7f800000;
        if (uVar5 < 0x4b000001) {
          if (DAT_1802a0468 < 2) {
            uVar5 = (uint)ROUND(fVar14);
            fVar24 = (float)(int)uVar5;
          }
          else {
            auVar27 = roundss(auVar27,auVar19,8);
            fVar24 = auVar27._0_4_;
          }
          uVar4 = 0;
          if (fVar24 == fVar14) {
            uVar5 = (uint)(int)ROUND(fVar14) >> 1 | (uint)(fVar24 < fVar14) << 0x1f;
            if (((int)ROUND(fVar14) & 1U) == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = (uint)fVar23 & 0x80000000;
            }
          }
        }
        uVar6 = (ulonglong)(uVar4 | (uint)fVar2);
        if (fVar3 != 0.0) {
          uVar6 = FUN_1801fa990(uVar4 | (uint)fVar2,auVar20._0_8_,uVar5,2);
        }
        return uVar6;
      }
      if (((uint)fVar14 & 0x7f800000) < 0x4b000001) {
        if (DAT_1802a0468 < 2) {
          fVar23 = (float)(int)ROUND(fVar14);
        }
        else {
          auVar27 = roundss(auVar27,auVar19,8);
          fVar23 = auVar27._0_4_;
        }
        if (fVar23 != fVar14) {
          uVar6 = FUN_1801fa990(fVar3,0xffc00000,param_3,6);
          return uVar6;
        }
        if (((int)ROUND(fVar14) & 1U) != 0) {
          uVar6 = 0x80000000;
        }
      }
    }
    auVar32._8_4_ = SUB84(auVar12._8_8_,0);
    auVar32._0_8_ = auVar12._8_8_;
    auVar32._16_48_ = in_ZMM3._16_48_;
    auVar32._12_4_ = uVar13;
    in_ZMM3._8_56_ = auVar32._8_56_;
    in_ZMM3._0_8_ = auVar12._8_8_ - 1.0;
    param_2 = ABS(in_ZMM3._0_8_);
    if ((ulonglong)param_2 < 0x3fb0000000000000) {
      dVar36 = in_ZMM3._0_8_ / (in_ZMM3._0_8_ + 2.0);
      dVar25 = dVar36 + dVar36;
      dVar15 = dVar25 * dVar25;
      auVar33._8_4_ = SUB84(dVar15,0);
      auVar33._0_8_ = dVar15;
      auVar33._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      dVar15 = in_ZMM3._0_8_ +
               ((dVar25 * dVar15 * (dVar15 * 0.012500000003771751 + 0.08333333333333179) +
                dVar15 * dVar15 * dVar25 * dVar15 * (auVar33._8_8_ * 0.0004348877777076146 + 0.0022321399879194482)) -
               dVar36 * in_ZMM3._0_8_);
      goto LAB_1801eb05e;
    }
  }
  auVar26._8_4_ = SUB84(auVar12._8_8_,0);
  auVar26._0_8_ = auVar12._8_8_;
  auVar26._12_4_ = uVar13;
  auVar26 = auVar26 & _DAT_180247040;
  uVar4 = (auVar26._4_4_ >> 0xc) + (uint)((auVar26._0_8_ >> 0x2b & 1) != 0);
  auVar1._4_56_ = in_ZMM3._8_56_;
  auVar1._0_4_ = SUB164(auVar26 | _DAT_180247020,0xc);
  dVar15 = ((double)((ulonglong)(uVar4 | 0x3fe00) << 0x2c) - SUB168(auVar26 | _DAT_180247020,0)) *
           *(double *)(&DAT_180249cd0 + (ulonglong)uVar4 * 8);
  dVar15 = ((double)(int)(((auVar1._0_8_ & 0xffffffff) >> 0x14) - 0x3ff) * 0.6931471805599453 +
           *(double *)(&DAT_180247050 + (ulonglong)uVar4 * 8)) -
           (dVar15 * dVar15 * (dVar15 * 0.3333333333333333 + 0.5) + dVar15);
LAB_1801eb05e:
  auVar10._8_56_ = auVar12._8_56_;
  dVar15 = auVar12._0_8_ * dVar15;
  if (88.72283935546875 < dVar15) {
    uVar6 = FUN_1801fa990(dVar15,0x7f800000,param_3,9);
    return uVar6;
  }
  if (-103.2789306640625 < dVar15) {
    uVar4 = (uint)(dVar15 * 92.33248261689366);
    dVar15 = dVar15 - (double)(int)uVar4 * 0.010830424696249145;
    auVar10._0_8_ =
         (dVar15 * dVar15 * (dVar15 * 0.16666666666666666 + 0.5) + dVar15) *
         *(double *)(&DAT_180249ad0 + (ulonglong)(uVar4 & 0x3f) * 8) +
         *(double *)(&DAT_180249ad0 + (ulonglong)(uVar4 & 0x3f) * 8);
    auVar11._4_60_ = auVar10._4_60_;
    auVar11._0_4_ = (float)(double)(((ulonglong)(uint)((int)uVar4 >> 6) << 0x34) + (longlong)auVar10._0_8_);
    return auVar11._0_8_ | uVar6;
  }
  uVar6 = FUN_1801fa990(dVar15,param_2,param_3,7);
  return uVar6;
}



ulonglong FUN_1801ebe20(ulonglong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined8 uVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];

  fVar8 = (float)param_1;
  dVar12 = (double)fVar8;
  dVar13 = (double)param_2;
  dVar6 = ABS(dVar12);
  uVar2 = (uint)((ulonglong)dVar12 >> 0x34) & 0x7ff;
  dVar7 = ABS(dVar13);
  uVar4 = (uint)((ulonglong)dVar13 >> 0x34) & 0x7ff;
  if (uVar2 == 0) {
LAB_1801ec0d3:
    if (uVar2 < 0x7ff) {
      if (0x7fe < uVar4) {
        if (((ulonglong)dVar13 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        uVar3 = FUN_1801f9aa0(param_2);
        return uVar3;
      }
      if ((uVar2 == 0) && (uVar4 != 0)) {
        return param_1;
      }
      goto LAB_1801ec133;
    }
  }
  else if (uVar2 < 0x7ff) {
    if (uVar4 - 1 < 0x7fe) {
      if (dVar6 == dVar7) {
        return (ulonglong)(uint)(float)(double)((ulonglong)dVar12 & 0x8000000000000000);
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar6;
      if ((ulonglong)dVar7 <= (ulonglong)dVar6) {
        if (uVar4 < uVar2) {
          iVar5 = 0;
          iVar1 = (int)(uVar2 - uVar4) / 0x18;
          dVar7 = dVar7 * (double)((longlong)(iVar1 * 0x18 + 0x3ff) << 0x34);
          if (7 < iVar1) {
            uVar2 = (iVar1 - 8U >> 3) + 1;
            uVar3 = (ulonglong)uVar2;
            iVar5 = uVar2 * 8;
            do {
              uVar11 = auVar14._8_8_;
              dVar12 = dVar7 * 5.9604644775390625e-08;
              dVar6 = auVar14._0_8_ - (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
              dVar7 = dVar12 * 5.9604644775390625e-08;
              dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
              dVar12 = dVar7 * 5.9604644775390625e-08;
              dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
              dVar7 = dVar12 * 5.9604644775390625e-08;
              dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
              dVar12 = dVar7 * 5.9604644775390625e-08;
              dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
              dVar7 = dVar12 * 5.9604644775390625e-08;
              dVar6 = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
              dVar12 = dVar7 * 5.9604644775390625e-08;
              dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
              dVar7 = dVar12 * 5.9604644775390625e-08;
              auVar14._0_8_ = dVar6 - (double)(int)(dVar6 / dVar12) * dVar12;
              auVar14._8_8_ = uVar11;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          if (iVar5 < iVar1) {
            uVar3 = (ulonglong)(uint)(iVar1 - iVar5);
            do {
              uVar11 = auVar14._8_8_;
              dVar6 = (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
              dVar7 = dVar7 * 5.9604644775390625e-08;
              auVar14._0_8_ = auVar14._0_8_ - dVar6;
              auVar14._8_8_ = uVar11;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
        }
        auVar9._0_8_ = auVar14._0_8_ - (double)(int)(auVar14._0_8_ / dVar7) * dVar7;
        auVar9._8_8_ = auVar14._8_8_;
        if (fVar8 < 0.0) {
          auVar9._0_8_ = -auVar9._0_8_;
          auVar9._8_4_ = auVar14._8_4_;
          auVar9._12_4_ = auVar14._12_4_ ^ 0x80000000;
        }
        auVar10._4_12_ = auVar9._4_12_;
        auVar10._0_4_ = (float)auVar9._0_8_;
        return auVar10._0_8_;
      }
      if (fVar8 < 0.0) {
        dVar6 = -dVar6;
      }
      return (ulonglong)(uint)(float)dVar6;
    }
    goto LAB_1801ec0d3;
  }
  if (((ulonglong)dVar12 & 0xfffffffffffff) != 0) {
    uVar3 = FUN_1801f9aa0(param_1 & 0xffffffff);
    return uVar3;
  }
LAB_1801ec133:
  uVar3 = FUN_1801f9940("fmodf",0x16,0xffc00000,1,8,0x21,fVar8,param_2,2);
  return uVar3;
}



ulonglong FUN_1801ec180(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];

  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_1802a0468) {
    auVar5 = roundss(in_XMM0,in_XMM0,9);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return 0xbf800000;
        }
        return 0;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 != fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 - 1.0);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    uVar4 = FUN_1801f9aa0(fVar3);
    return uVar4;
  }
  return uVar4;
}



undefined8 FUN_1801ec210(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  undefined8 in_RCX;
  ulonglong uVar3;
  double dVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 in_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;

  fVar1 = ABS(param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar5 = FUN_1801faf80(in_RCX,param_2,0);
    return uVar5;
  }
  auVar6._0_8_ = (double)param_1;
  auVar6._8_8_ = in_XMM0_Qb;
  dVar4 = ABS(auVar6._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    uVar2 = 0;
  }
  else if ((uint)fVar1 < 0x48f42400) {
    uVar2 = (uint)(dVar4 * 0.6366197723675814 + 0.5);
    dVar8 = (double)(int)uVar2;
    dVar10 = dVar4 - dVar8 * 1.5707963267341256;
    dVar9 = dVar10 - dVar8 * 6.077100506506192e-11;
    uVar3 = (ulonglong)ABS(dVar9) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar4 >> 0x34) - uVar3)) {
      dVar9 = dVar10 - dVar8 * 6.077100506303966e-11;
      dVar9 = dVar9 - (dVar8 * 2.0222662487959506e-21 - ((dVar10 - dVar9) - dVar8 * 6.077100506303966e-11));
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar9;
    if (uVar3 < 0x3f2) {
      if (uVar3 < 0x3df) {
        if ((uVar2 & 1) == 0) {
          auVar6 = ZEXT816(0x3ff0000000000000);
        }
      }
      else if ((uVar2 & 1) == 0) {
        auVar6._0_8_ = 1.0 - dVar9 * dVar9 * 0.5;
        auVar6._8_8_ = 0;
      }
      else {
        auVar6._0_8_ = dVar9 - dVar9 * 0.16666666666666666 * dVar9 * dVar9;
        auVar6._8_8_ = 0;
      }
      goto LAB_1801ec484;
    }
  }
  else {
    uVar2 = FUN_1801fabc0(dVar4,auVar6._0_8_,1,param_4,auVar6._0_8_);
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar4 = auVar6._0_8_;
  dVar9 = dVar4 * dVar4;
  if ((uVar2 & 1) == 0) {
    auVar6._0_8_ = dVar9 * -0.5 + 1.0 +
                   ((dVar9 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar9 * dVar9 +
                   dVar9 * -0.0013888888888888887 + 0.041666666666666664) * dVar9 * dVar9;
    auVar6._8_8_ = 0;
  }
  else {
    auVar6._0_8_ = dVar4 + ((dVar9 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar9 * dVar9 +
                           dVar9 * 0.008333333333333333 + -0.16666666666666666) * dVar4 * dVar9;
  }
LAB_1801ec484:
  if ((uVar2 + 1 & 2) != 0) {
    dVar4 = auVar6._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = 0.0 - dVar4;
  }
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)auVar6._0_8_;
  return auVar7._0_8_;
}



undefined8 FUN_1801ec4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  float fVar5;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 extraout_var [56];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];

  fVar5 = in_ZMM0._0_4_;
  auVar14._8_56_ = in_ZMM0._8_56_;
  auVar15._16_48_ = in_ZMM0._16_48_;
  if (DAT_1802aa1a8 != 0) {
    fVar2 = ABS(fVar5);
    if (0x7f7fffff < (uint)fVar2) {
      uVar6 = FUN_1801faf80();
      return uVar6;
    }
    auVar34._0_8_ = (double)fVar5;
    auVar34._8_8_ = in_ZMM0._8_8_;
    if (0x3f490fdb < (uint)fVar2) {
      if ((uint)fVar2 < 0x4f490fdb) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = ABS(auVar34._0_8_);
        auVar34 = vandpd_avx(auVar10,_DAT_180247920);
        auVar34 = vfmadd213sd_fma(_DAT_180247890,auVar34,ZEXT816(0x3fe0000000000000));
        auVar24._0_4_ = (int)auVar34._0_8_;
        auVar24._4_4_ = (int)auVar34._8_8_;
        auVar24._8_8_ = 0;
        auVar11 = vpmovsxdq_avx(auVar24);
        auVar34 = vandpd_avx(auVar11,_DAT_180247930);
        auVar11 = vshufps_avx(auVar11,auVar11,8);
        auVar24 = vcvtdq2pd_avx(auVar11);
        auVar10 = vfnmadd231sd_fma(auVar10,auVar24,ZEXT816(0x3ff921fb54400000));
        auVar11._8_8_ = 0;
        auVar11._0_8_ = auVar10._0_8_ - auVar24._0_8_ * 6.077100506506192e-11;
        uVar3 = auVar34._0_8_;
      }
      else if ((uint)fVar2 < 0x4f490fdb) {
        uVar3 = FUN_1801faf00(ABS(auVar34._0_8_));
        auVar20._8_56_ = extraout_var_00;
        auVar20._0_8_ = extraout_XMM0_Qa_00;
        auVar11 = auVar20._0_16_;
      }
      else {
        uVar3 = FUN_1801fad10();
        auVar21._8_56_ = extraout_var_01;
        auVar21._0_8_ = extraout_XMM0_Qa_01;
        auVar11 = auVar21._0_16_;
      }
      dVar4 = auVar11._0_8_;
      if ((uVar3 & 1) == 0) {
        dVar4 = dVar4 * dVar4;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = dVar4;
        auVar34 = vfmadd231sd_fma(ZEXT816(0x3efa01a01a01a019),auVar31,ZEXT816(0xbe927e4fb7789f5c));
        auVar34 = vfmadd213sd_fma(auVar34,auVar31,ZEXT816(0xbf56c16c16c16c16));
        auVar34 = vfmadd213sd_fma(auVar34,auVar31,ZEXT816(0x3fa5555555555555));
        auVar25._8_8_ = 0;
        auVar25._0_8_ = 1.0 - dVar4 * 0.5;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = dVar4 * dVar4;
        auVar34 = vfmadd231sd_fma(auVar25,auVar34,auVar32);
      }
      else {
        dVar22 = dVar4 * dVar4;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar22;
        auVar34 = vfmadd231sd_fma(ZEXT816(0xbf2a01a01a01a01a),auVar28,ZEXT816(0x3ec71de3a556c734));
        auVar34 = vfmadd213sd_fma(auVar34,auVar28,ZEXT816(0x3f81111111111111));
        auVar29._8_8_ = 0;
        auVar29._0_8_ = dVar22;
        auVar34 = vfmadd213sd_fma(auVar34,auVar29,ZEXT816(0xbfc5555555555555));
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dVar4 * dVar22;
        auVar34 = vfmadd231sd_fma(auVar11,auVar34,auVar30);
      }
      auVar12._0_8_ = (double)(auVar34._0_8_ ^ (uVar3 + 1 >> 1) << 0x3f);
      auVar12._8_8_ = auVar34._8_8_;
      auVar13._0_4_ = (float)auVar12._0_8_;
      auVar13._4_12_ = auVar12._4_12_;
      return auVar13._0_8_;
    }
    if (0x3bffffff < (uint)fVar2) {
      dVar4 = auVar34._0_8_ * auVar34._0_8_;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar4;
      auVar34 = vfmadd231sd_fma(ZEXT816(0x3efa01a01a01a019),auVar26,ZEXT816(0xbe927e4fb7789f5c));
      auVar34 = vfmadd213sd_fma(auVar34,auVar26,ZEXT816(0xbf56c16c16c16c16));
      auVar34 = vfmadd213sd_fma(auVar34,auVar26,ZEXT816(0x3fa5555555555555));
      auVar23._8_8_ = 0;
      auVar23._0_8_ = 1.0 - dVar4 * 0.5;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = dVar4 * dVar4;
      auVar34 = vfmadd231sd_fma(auVar23,auVar34,auVar27);
      auVar9._0_4_ = (float)auVar34._0_8_;
      auVar9._4_12_ = auVar34._4_12_;
      return auVar9._0_8_;
    }
    if ((uint)fVar2 < 0x39000000) {
      return SUB648(ZEXT464(0x3f800000),0);
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar34._0_8_ * 0.5;
    auVar34 = vfnmadd213sd_fma(auVar7,auVar34,ZEXT816(0x3ff0000000000000));
    auVar8._0_4_ = (float)auVar34._0_8_;
    auVar8._4_12_ = auVar34._4_12_;
    return auVar8._0_8_;
  }
  fVar2 = ABS(fVar5);
  if (0x7f7fffff < (uint)fVar2) {
    uVar6 = FUN_1801faf80();
    return uVar6;
  }
  auVar14._0_8_ = (double)fVar5;
  dVar4 = ABS(auVar14._0_8_);
  if ((uint)fVar2 < 0x3f490fdc) {
    uVar1 = 0;
  }
  else if ((uint)fVar2 < 0x48f42400) {
    uVar1 = (uint)(dVar4 * 0.6366197723675814 + 0.5);
    dVar22 = (double)(int)uVar1;
    dVar33 = dVar4 - dVar22 * 1.5707963267341256;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar33;
    auVar14._8_56_ = auVar15._8_56_;
    auVar14._0_8_ = dVar33 - dVar22 * 6.077100506506192e-11;
    uVar3 = (ulonglong)ABS(auVar14._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar4 >> 0x34) - uVar3)) {
      dVar4 = dVar33 - dVar22 * 6.077100506303966e-11;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar4;
      auVar16._16_48_ = auVar15._16_48_;
      auVar14._8_56_ = auVar16._8_56_;
      auVar14._0_8_ = dVar4 - (dVar22 * 2.0222662487959506e-21 - ((dVar33 - dVar4) - dVar22 * 6.077100506303966e-11));
    }
    if (uVar3 < 0x3f2) {
      auVar17._16_48_ = auVar14._16_48_;
      if (uVar3 < 0x3df) {
        if ((uVar1 & 1) == 0) {
          auVar14._0_16_ = ZEXT816(0x3ff0000000000000);
          auVar14._16_48_ = auVar17._16_48_;
        }
      }
      else {
        dVar4 = auVar14._0_8_;
        if ((uVar1 & 1) == 0) {
          auVar17._0_16_ = ZEXT816(0x3ff0000000000000);
          auVar14._8_56_ = auVar17._8_56_;
          auVar14._0_8_ = 1.0 - dVar4 * dVar4 * 0.5;
        }
        else {
          auVar14._0_8_ = dVar4 - dVar4 * 0.16666666666666666 * dVar4 * dVar4;
        }
      }
      goto LAB_1801ec484;
    }
  }
  else {
    uVar1 = FUN_1801fabc0(param_1,auVar14._0_8_,1,param_4,auVar14._0_8_);
    auVar14._8_56_ = extraout_var;
    auVar14._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar4 = auVar14._0_8_;
  dVar22 = dVar4 * dVar4;
  if ((uVar1 & 1) == 0) {
    auVar18._16_48_ = auVar14._16_48_;
    auVar18._0_16_ = ZEXT816(0xbfe0000000000000);
    auVar14._8_56_ = auVar18._8_56_;
    auVar14._0_8_ =
         dVar22 * -0.5 + 1.0 +
         ((dVar22 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar22 * dVar22 +
         dVar22 * -0.0013888888888888887 + 0.041666666666666664) * dVar22 * dVar22;
  }
  else {
    auVar14._0_8_ =
         dVar4 + ((dVar22 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar22 * dVar22 +
                 dVar22 * 0.008333333333333333 + -0.16666666666666666) * dVar4 * dVar22;
  }
LAB_1801ec484:
  if ((uVar1 + 1 & 2) != 0) {
    dVar4 = auVar14._0_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = 0.0 - dVar4;
  }
  auVar19._4_60_ = auVar14._4_60_;
  auVar19._0_4_ = (float)auVar14._0_8_;
  return auVar19._0_8_;
}



undefined8 FUN_1801ec6d0(undefined8 param_1)

{
  float fVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint local_38 [2];
  undefined1 local_30 [48];

  fVar1 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar6 = FUN_1801fb010();
    return uVar6;
  }
  dVar7 = (double)(float)param_1;
  dVar3 = ABS(dVar7);
  if ((uint)fVar1 < 0x3f490fdc) {
    if ((uint)fVar1 < 0x3c000000) {
      if ((uint)fVar1 < 0x39000000) {
        return param_1;
      }
      dVar7 = dVar7 - dVar7 * dVar7 * dVar7 * 0.16666666666666666;
    }
    else {
      dVar3 = dVar7 * dVar7;
      dVar7 = dVar7 + ((dVar3 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar3 * dVar3 +
                      dVar3 * 0.008333333333333333 + -0.16666666666666666) * dVar7 * dVar3;
    }
    goto LAB_1801eca26;
  }
  bVar5 = dVar7 != dVar3;
  if (bVar5) {
    dVar7 = 0.0 - dVar7;
  }
  if ((uint)fVar1 < 0x4b742400) {
    local_38[0] = (uint)(dVar7 * 0.6366197723675814 + 0.5);
    dVar8 = (double)(int)local_38[0];
    dVar9 = dVar7 - dVar8 * 1.5707963267341256;
    dVar7 = dVar9 - dVar8 * 6.077100506506192e-11;
    uVar2 = (ulonglong)ABS(dVar7) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar3 >> 0x34) - uVar2)) {
      dVar7 = dVar9 - dVar8 * 6.077100506303966e-11;
      dVar7 = dVar7 - (dVar8 * 2.0222662487959506e-21 - ((dVar9 - dVar7) - dVar8 * 6.077100506303966e-11));
    }
    if (0x3f1 < uVar2) goto LAB_1801ec94e;
    if (uVar2 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        dVar7 = 1.0;
      }
    }
    else if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 - dVar7 * 0.16666666666666666 * dVar7 * dVar7;
    }
    else {
      dVar7 = 1.0 - dVar7 * dVar7 * 0.5;
    }
  }
  else {
    dVar7 = (double)__remainder_piby2d2f_forC(dVar7,local_30,local_38);
LAB_1801ec94e:
    dVar3 = dVar7 * dVar7;
    if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 + ((dVar3 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar3 * dVar3 +
                      dVar3 * 0.008333333333333333 + -0.16666666666666666) * dVar7 * dVar3;
    }
    else {
      dVar7 = dVar3 * -0.5 + 1.0 +
              ((dVar3 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar3 * dVar3 +
              dVar3 * -0.0013888888888888887 + 0.041666666666666664) * dVar3 * dVar3;
    }
  }
  uVar4 = (uint)bVar5;
  if ((local_38[0] >> 1 & uVar4) == 0 && (~(local_38[0] >> 1) & ~uVar4 & 1) == 0) {
    dVar7 = 0.0 - dVar7;
  }
LAB_1801eca26:
  return CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7);
}



undefined8 FUN_1801eca40(void)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar24;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 extraout_var [56];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 in_ZMM0 [64];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint auStack_38 [2];
  undefined1 auStack_30 [48];

  fVar23 = in_ZMM0._0_4_;
  if (DAT_1802aa1a8 != 0) {
    fVar9 = ABS(fVar23);
    if (0x7f7fffff < (uint)fVar9) {
      uVar24 = FUN_1801fb010();
      return uVar24;
    }
    auVar55._0_8_ = (double)fVar23;
    auVar55._8_8_ = in_ZMM0._8_8_;
    if ((uint)fVar9 < 0x3f490fdc) {
      if ((uint)fVar9 < 0x3c000000) {
        if ((uint)fVar9 < 0x39000000) {
          return in_ZMM0._0_8_;
        }
        auVar25._8_8_ = 0;
        auVar25._0_8_ = auVar55._0_8_ * auVar55._0_8_ * auVar55._0_8_;
        auVar28 = vfnmadd132sd_fma(auVar25,auVar55,ZEXT816(0x3fc5555555555555));
      }
      else {
        dVar18 = auVar55._0_8_ * auVar55._0_8_;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = dVar18;
        auVar54 = vfmadd231sd_fma(ZEXT816(0xbf2a01a01a01a01a),auVar42,ZEXT816(0x3ec71de3a556c734));
        auVar54 = vfmadd213sd_fma(auVar54,auVar42,ZEXT816(0x3f81111111111111));
        auVar43._8_8_ = 0;
        auVar43._0_8_ = dVar18;
        auVar54 = vfmadd213sd_fma(auVar54,auVar43,ZEXT816(0xbfc5555555555555));
        auVar44._8_8_ = 0;
        auVar44._0_8_ = auVar55._0_8_ * dVar18;
        auVar28 = vfmadd231sd_fma(auVar55,auVar54,auVar44);
      }
    }
    else {
      if ((uint)fVar9 < 0x4b800456) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = ABS(auVar55._0_8_);
        auVar54 = vfmadd213sd_fma(_DAT_1802479e0,auVar26,ZEXT816(0x3fe0000000000000));
        auVar40._0_4_ = (int)auVar54._0_8_;
        auVar40._4_4_ = (int)auVar54._8_8_;
        auVar40._8_8_ = 0;
        auVar6 = vpmovsxdq_avx(auVar40);
        auVar54 = vandpd_avx(auVar6,_DAT_1802479c0);
        auVar6 = vshufps_avx(auVar6,auVar6,8);
        auVar6 = vcvtdq2pd_avx(auVar6);
        auVar7 = vfnmadd231sd_fma(auVar26,auVar6,ZEXT816(0x3ff921fb54400000));
        dVar18 = auVar7._0_8_ - auVar6._0_8_ * 6.077100506506192e-11;
      }
      else {
        uVar22 = ((ulonglong)ABS(auVar55._0_8_) >> 0x34) - 0x3ff;
        lVar19 = -((uVar22 >> 3) - 0x86);
        uVar14 = (ulonglong)auVar55._0_8_ & 0xfffffffffffff | 0x10000000000000;
        auVar54._8_8_ = 0;
        auVar54._0_8_ = *(ulonglong *)(&DAT_18024a6d0 + lVar19);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = SUB168(auVar54 * auVar3,8);
        uVar10 = SUB168(auVar54 * auVar3,0);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(&UNK_18024a6d8 + lVar19);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        uVar22 = uVar22 & 7;
        auVar8 = auVar6 * auVar4 + auVar8;
        uVar11 = auVar8._0_8_;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(&UNK_18024a6e0 + lVar19);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar20 = auVar8._8_8_ + SUB168(auVar7 * auVar5,0);
        uVar17 = 0;
        bVar13 = (byte)(0x36 - uVar22) & 0x3f;
        uVar14 = uVar20 >> bVar13;
        bVar1 = (0x36 - uVar22 & 0x3f) != 0;
        bVar2 = (uVar20 >> bVar13 - 1 & 1) != 0;
        if (bVar1 && bVar2) {
          uVar20 = ~uVar20;
          uVar11 = ~uVar11;
          uVar10 = ~uVar10;
          uVar17 = 0x8000000000000000;
        }
        auVar54 = ZEXT416((int)uVar14 + (uint)(bVar1 && bVar2) & 3);
        sVar12 = (char)uVar22 + 10;
        uVar14 = (uVar20 << sVar12) >> sVar12;
        lVar15 = uVar22 - 0x36;
        lVar19 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar20 = uVar11;
        if (uVar14 == 0) {
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          lVar15 = uVar22 - 0x76;
          uVar20 = uVar10;
          uVar14 = uVar11;
        }
        lVar16 = lVar19 + -0x34;
        if (lVar16 < 0) {
          bVar13 = -(byte)lVar16;
          uVar14 = uVar14 << (bVar13 & 0x3f) | uVar20 >> (-(bVar13 - 0x40) & 0x3f);
        }
        else if (lVar16 != 0) {
          uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
        }
        dVar18 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar19 + 0x3ff << 0x34) * 1.5707963267948966;
      }
      uVar10 = auVar54._0_8_;
      if ((uVar10 & 1) == 1) {
        dVar18 = dVar18 * dVar18;
        auVar48._8_8_ = 0;
        auVar48._0_8_ = dVar18;
        auVar7 = vfmadd231sd_fma(_DAT_1802479b0,auVar48,ZEXT816(0xbfe0000000000000));
        auVar6 = vfmadd231sd_fma(ZEXT816(0x3efa01a01a01a019),auVar48,ZEXT816(0xbe927e4fb7789f5c));
        auVar49._8_8_ = 0;
        auVar49._0_8_ = dVar18;
        auVar6 = vfmadd213sd_fma(auVar6,auVar49,ZEXT816(0xbf56c16c16c16c16));
        auVar6 = vfmadd213sd_fma(auVar6,auVar49,ZEXT816(0x3fa5555555555555));
        auVar50._8_8_ = 0;
        auVar50._0_8_ = dVar18 * dVar18;
        auVar6 = vfmadd231sd_fma(auVar7,auVar6,auVar50);
      }
      else {
        dVar52 = dVar18 * dVar18;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = dVar52;
        auVar6 = vfmadd231sd_fma(ZEXT816(0xbf2a01a01a01a01a),auVar45,ZEXT816(0x3ec71de3a556c734));
        auVar6 = vfmadd213sd_fma(auVar6,auVar45,ZEXT816(0x3f81111111111111));
        auVar46._8_8_ = 0;
        auVar46._0_8_ = dVar52;
        auVar6 = vfmadd213sd_fma(auVar6,auVar46,ZEXT816(0xbfc5555555555555));
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar18;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = dVar18 * dVar52;
        auVar6 = vfmadd231sd_fma(auVar27,auVar6,auVar47);
      }
      auVar41._0_8_ = -(ulonglong)(uVar10 == 2);
      auVar41._8_8_ = -(ulonglong)(auVar54._8_8_ == 2);
      auVar51._0_8_ = -(ulonglong)(uVar10 == 3);
      auVar51._8_8_ = -(ulonglong)(auVar54._8_8_ == 3);
      auVar54 = vorpd_avx(auVar41,auVar51);
      auVar54 = vandnpd_avx(auVar54,_DAT_180247990);
      auVar55 = vandnpd_avx(auVar55,_DAT_180247990);
      auVar28._0_8_ = auVar55._0_8_ ^ auVar6._0_8_ ^ auVar54._0_8_;
      auVar28._8_8_ = auVar55._8_8_ ^ auVar6._8_8_ ^ auVar54._8_8_;
    }
    auVar29._0_4_ = (float)auVar28._0_8_;
    auVar29._4_12_ = auVar28._4_12_;
    return auVar29._0_8_;
  }
  fVar9 = ABS(fVar23);
  if (0x7f7fffff < (uint)fVar9) {
    uVar24 = FUN_1801fb010();
    return uVar24;
  }
  auVar30._8_56_ = in_ZMM0._8_56_;
  auVar30._0_8_ = (double)fVar23;
  dVar18 = ABS(auVar30._0_8_);
  auVar32._16_48_ = in_ZMM0._16_48_;
  if ((uint)fVar9 < 0x3f490fdc) {
    if ((uint)fVar9 < 0x3c000000) {
      if ((uint)fVar9 < 0x39000000) {
        return in_ZMM0._0_8_;
      }
      auVar31._0_8_ = auVar30._0_8_ - auVar30._0_8_ * auVar30._0_8_ * auVar30._0_8_ * 0.16666666666666666;
      auVar31._8_56_ = auVar30._8_56_;
    }
    else {
      dVar18 = auVar30._0_8_ * auVar30._0_8_;
      auVar31._0_8_ =
           auVar30._0_8_ +
           ((dVar18 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar18 * dVar18 +
           dVar18 * 0.008333333333333333 + -0.16666666666666666) * auVar30._0_8_ * dVar18;
      auVar31._8_56_ = auVar30._8_56_;
    }
    goto LAB_1801eca26;
  }
  auVar34 = auVar30;
  if (auVar30._0_8_ != dVar18) {
    auVar32._8_8_ = 0;
    auVar32._0_8_ = 0.0 - auVar30._0_8_;
    auVar34 = auVar32;
  }
  dVar52 = auVar34._0_8_;
  if ((uint)fVar9 < 0x4b742400) {
    auStack_38[0] = (uint)(dVar52 * 0.6366197723675814 + 0.5);
    auVar33._16_48_ = auVar34._16_48_;
    dVar39 = (double)(int)auStack_38[0];
    dVar52 = dVar52 - dVar39 * 1.5707963267341256;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._0_8_ = dVar52;
    auVar31._8_56_ = auVar33._8_56_;
    auVar31._0_8_ = dVar52 - dVar39 * 6.077100506506192e-11;
    uVar10 = (ulonglong)ABS(auVar31._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar18 >> 0x34) - uVar10)) {
      dVar53 = dVar52 - dVar39 * 6.077100506303966e-11;
      auVar34._8_8_ = auVar34._8_8_;
      auVar34._0_8_ = dVar53;
      auVar34._16_48_ = auVar33._16_48_;
      auVar31._8_56_ = auVar34._8_56_;
      auVar31._0_8_ = dVar53 - (dVar39 * 2.0222662487959506e-21 - ((dVar52 - dVar53) - dVar39 * 6.077100506303966e-11));
    }
    if (0x3f1 < uVar10) goto LAB_1801ec94e;
    auVar35._16_48_ = auVar31._16_48_;
    if (uVar10 < 0x3df) {
      if ((auStack_38[0] & 1) != 0) {
        auVar31._0_16_ = ZEXT816(0x3ff0000000000000);
        auVar31._16_48_ = auVar35._16_48_;
      }
    }
    else {
      dVar52 = auVar31._0_8_;
      if ((auStack_38[0] & 1) == 0) {
        auVar31._0_8_ = dVar52 - dVar52 * 0.16666666666666666 * dVar52 * dVar52;
      }
      else {
        auVar35._0_16_ = ZEXT816(0x3ff0000000000000);
        auVar31._8_56_ = auVar35._8_56_;
        auVar31._0_8_ = 1.0 - dVar52 * dVar52 * 0.5;
      }
    }
  }
  else {
    auVar31._0_8_ = (double)__remainder_piby2d2f_forC(dVar52,auStack_30,auStack_38);
    auVar31._8_56_ = extraout_var;
LAB_1801ec94e:
    dVar52 = auVar31._0_8_;
    dVar39 = dVar52 * dVar52;
    if ((auStack_38[0] & 1) == 0) {
      auVar31._0_8_ =
           dVar52 + ((dVar39 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar39 * dVar39 +
                    dVar39 * 0.008333333333333333 + -0.16666666666666666) * dVar52 * dVar39;
    }
    else {
      auVar36._16_48_ = auVar31._16_48_;
      auVar36._0_16_ = ZEXT816(0xbfe0000000000000);
      auVar31._8_56_ = auVar36._8_56_;
      auVar31._0_8_ =
           dVar39 * -0.5 + 1.0 +
           ((dVar39 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar39 * dVar39 +
           dVar39 * -0.0013888888888888887 + 0.041666666666666664) * dVar39 * dVar39;
    }
  }
  uVar21 = (uint)(auVar30._0_8_ != dVar18);
  if ((auStack_38[0] >> 1 & uVar21) == 0 && (~(auStack_38[0] >> 1) & ~uVar21 & 1) == 0) {
    dVar18 = auVar31._0_8_;
    auVar37._16_48_ = auVar31._16_48_;
    auVar37._0_16_ = ZEXT816(0);
    auVar31._8_56_ = auVar37._8_56_;
    auVar31._0_8_ = 0.0 - dVar18;
  }
LAB_1801eca26:
  auVar38._4_60_ = auVar31._4_60_;
  auVar38._0_4_ = (float)auVar31._0_8_;
  return auVar38._0_8_;
}



undefined8 FUN_1801ecd90(undefined8 param_1)

{
  undefined8 in_RCX;
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  double in_XMM0_Qb;
  double dVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar8;

  fVar1 = (float)param_1;
  fVar2 = ABS(fVar1);
  if (0x42afffff < (uint)fVar2) {
    if (0x7f7fffff < (uint)fVar2) {
      if (fVar1 == INFINITY) {
        return param_1;
      }
      if (fVar1 == -INFINITY) {
        return 0;
      }
      uVar4 = FUN_1801fb3b0(in_RCX,(uint)fVar1 | 0x400000,1);
      return uVar4;
    }
    if (8192.0 <= fVar1 * 92.33248) {
      uVar4 = FUN_1801fb3b0(fVar2,fVar2,3);
      return uVar4;
    }
    if (fVar1 * 92.33248 < -9600.0) {
      uVar4 = FUN_1801fb3b0(fVar2,fVar2,2);
      return uVar4;
    }
  }
  uVar8 = (uint)(fVar1 * 92.33248);
  dVar3 = (double)fVar1 - (double)(int)uVar8 * 0.010830424696249145;
  dVar7 = in_XMM0_Qb - 0.0;
  auVar5._0_8_ = ((dVar3 * dVar3 * (dVar3 * 0.16666666666666666 + 0.5) + dVar3) *
                  *(double *)(&DAT_180249ad0 + (ulonglong)(uVar8 & 0x3f) * 8) +
                 *(double *)(&DAT_180249ad0 + (ulonglong)(uVar8 & 0x3f) * 8)) *
                 (double)((ulonglong)(uint)((int)(uVar8 - (uVar8 & 0x3f)) >> 6) + 0x3ff << 0x34);
  auVar5._8_8_ = ((dVar7 * dVar7 * (dVar7 * 0.0 + 0.0) + dVar7) * 0.0 + 0.0) * 0.0;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = (float)auVar5._0_8_;
  return auVar6._0_8_;
}



undefined8 FUN_1801ecf00(undefined8 param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar5;
  double dVar10;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];

  fVar3 = in_ZMM0._0_4_;
  auVar6._8_8_ = in_ZMM0._8_8_;
  auVar8._16_48_ = in_ZMM0._16_48_;
  if (DAT_1802aa1a8 == 0) {
    fVar2 = ABS(fVar3);
    if (0x42afffff < (uint)fVar2) {
      if (0x7f7fffff < (uint)fVar2) {
        if (fVar3 == INFINITY) {
          return in_ZMM0._0_8_;
        }
        if (fVar3 != -INFINITY) {
          uVar5 = FUN_1801fb3b0(param_1,(uint)fVar3 | 0x400000,1);
          return uVar5;
        }
        return 0;
      }
      if (8192.0 <= fVar3 * 92.33248) {
        uVar5 = FUN_1801fb3b0(param_1,fVar2,3);
        return uVar5;
      }
      if (fVar3 * 92.33248 < -9600.0) {
        uVar5 = FUN_1801fb3b0(param_1,fVar2,2);
        return uVar5;
      }
    }
    uVar1 = (uint)(fVar3 * 92.33248);
    dVar4 = (double)fVar3 - (double)(int)uVar1 * 0.010830424696249145;
    dVar10 = auVar6._8_8_ - 0.0;
    auVar8._0_8_ = ((dVar4 * dVar4 * (dVar4 * 0.16666666666666666 + 0.5) + dVar4) *
                    *(double *)(&DAT_180249ad0 + (ulonglong)(uVar1 & 0x3f) * 8) +
                   *(double *)(&DAT_180249ad0 + (ulonglong)(uVar1 & 0x3f) * 8)) *
                   (double)((ulonglong)(uint)((int)(uVar1 - (uVar1 & 0x3f)) >> 6) + 0x3ff << 0x34);
    auVar8._8_8_ = ((dVar10 * dVar10 * (dVar10 * 0.0 + 0.0) + dVar10) * 0.0 + 0.0) * 0.0;
    auVar9._4_60_ = auVar8._4_60_;
    auVar9._0_4_ = (float)auVar8._0_8_;
    return auVar9._0_8_;
  }
  fVar2 = ABS(fVar3);
  if ((uint)fVar2 < 0x42b00000) {
    dVar4 = (double)fVar3 * 92.33248261689366;
  }
  else {
    if (0x7f7fffff < (uint)fVar2) {
      if (fVar3 == INFINITY) {
        return in_ZMM0._0_8_;
      }
      if (fVar3 == -INFINITY) {
        return 0;
      }
      uVar5 = FUN_1801fb3b0(param_1,(uint)fVar3 | 0x400000,1);
      return uVar5;
    }
    dVar4 = (double)fVar3 * 92.33248261689366;
    if (8192.0 <= dVar4) {
      uVar5 = FUN_1801fb3b0(fVar2,0x7f800000,3);
      return uVar5;
    }
    if (dVar4 < -9600.0) {
      uVar5 = FUN_1801fb3b0(fVar2,0,2);
      return uVar5;
    }
  }
  auVar6._0_8_ = (double)fVar3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar4;
  auVar12 = vcvtpd2dq_avx(auVar12);
  auVar11 = vcvtdq2pd_avx(auVar12);
  auVar11 = vfnmadd231sd_fma(auVar6,auVar11,ZEXT816(0x3f862e42fefa39ef));
  uVar1 = auVar12._0_4_ & 0x3f;
  auVar6 = vfmadd213sd_fma(_DAT_180247b10,auVar11,ZEXT816(0x3fe0000000000000));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar11._0_8_ * auVar11._0_8_;
  auVar6 = vfmadd213sd_fma(auVar7,auVar6,auVar11);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(ulonglong *)(&DAT_180249ad0 + (ulonglong)uVar1 * 8);
  auVar6 = vfmadd213sd_fma(auVar6,auVar11,auVar11);
  dVar4 = auVar6._0_8_ * (double)((ulonglong)(uint)((int)(auVar12._0_4_ - uVar1) >> 6) + 0x3ff << 0x34);
  return CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4);
}



undefined8 FUN_1801ed060(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  sbyte sVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  uint uVar29;
  double dVar30;
  ulonglong in_XMM5_Qb;

  fVar10 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar10) {
    uVar23 = FUN_1801fb0a0();
    return uVar23;
  }
  dVar30 = (double)(float)param_1;
  dVar19 = ABS(dVar30);
  if ((uint)fVar10 < 0x3f490fdc) {
    if ((uint)fVar10 < 0x39000000) {
      if ((uint)fVar10 < 0x32000000) {
        return param_1;
      }
      dVar19 = dVar30 * dVar30 * dVar30 * 0.3333333333333333;
    }
    else {
      dVar19 = dVar30 * dVar30;
      dVar19 = dVar19 * dVar30 *
               ((dVar19 * -0.017203248047148168 + 0.3852960712639954) /
               ((dVar19 * 0.01844239256901656 + -0.5139650547885454) * dVar19 + 1.1558882143468838));
    }
    auVar24._0_8_ = dVar19 + dVar30;
    auVar24._8_8_ = in_XMM5_Qb;
    auVar27._4_12_ = auVar24._4_12_;
    auVar27._0_4_ = (float)auVar24._0_8_;
    return auVar27._0_8_;
  }
  if ((longlong)dVar19 < 0x4160000000000000) {
    uVar29 = (uint)(ABS(dVar19) * 0.6366197723675814 + 0.5);
    dVar19 = (dVar19 - (double)(int)uVar29 * 1.5707963267341256) - (double)(int)uVar29 * 6.077100506506192e-11;
  }
  else {
    uVar22 = ((ulonglong)dVar19 >> 0x34) - 0x3ff;
    lVar20 = -((uVar22 >> 3) - 0x86);
    uVar15 = (ulonglong)dVar19 & 0xfffffffffffff | 0x10000000000000;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_18024a6d0 + lVar20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = SUB168(auVar3 * auVar6,8);
    uVar11 = SUB168(auVar3 * auVar6,0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(&UNK_18024a6d8 + lVar20);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    uVar22 = uVar22 & 7;
    auVar9 = auVar4 * auVar7 + auVar9;
    uVar12 = auVar9._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&UNK_18024a6e0 + lVar20);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar15;
    uVar21 = auVar9._8_8_ + SUB168(auVar5 * auVar8,0);
    uVar18 = 0;
    bVar14 = (byte)(0x36 - uVar22) & 0x3f;
    uVar15 = uVar21 >> bVar14;
    bVar1 = (0x36 - uVar22 & 0x3f) != 0;
    bVar2 = (uVar21 >> bVar14 - 1 & 1) != 0;
    if (bVar1 && bVar2) {
      uVar21 = ~uVar21;
      uVar12 = ~uVar12;
      uVar11 = ~uVar11;
      uVar18 = 0x8000000000000000;
    }
    uVar29 = (int)uVar15 + (uint)(bVar1 && bVar2);
    sVar13 = (char)uVar22 + 10;
    uVar15 = (uVar21 << sVar13) >> sVar13;
    lVar16 = uVar22 - 0x36;
    lVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar21 = uVar12;
    if (uVar15 == 0) {
      lVar20 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      lVar16 = uVar22 - 0x76;
      uVar21 = uVar11;
      uVar15 = uVar12;
    }
    lVar17 = lVar20 + -0x34;
    if (lVar17 < 0) {
      bVar14 = -(byte)lVar17;
      uVar15 = uVar15 << (bVar14 & 0x3f) | uVar21 >> (-(bVar14 - 0x40) & 0x3f);
    }
    else if (lVar17 != 0) {
      uVar15 = uVar15 >> ((byte)lVar17 & 0x3f);
    }
    dVar19 = (double)(uVar15 & 0xffefffffffffffff | uVar18 | lVar16 + lVar20 + 0x3ff << 0x34) * 1.5707963267948966;
  }
  dVar28 = dVar19 * dVar19;
  dVar19 = dVar19 + dVar28 * dVar19 *
                    ((dVar28 * -0.017203248047148168 + 0.3852960712639954) /
                    ((dVar28 * 0.01844239256901656 + -0.5139650547885454) * dVar28 + 1.1558882143468838));
  if ((uVar29 & 1) == 1) {
    dVar19 = -1.0 / dVar19;
  }
  auVar25._0_8_ = (double)((ulonglong)dVar19 ^ (ulonglong)dVar30 & 0x8000000000000000);
  auVar25._8_8_ = in_XMM5_Qb & 0x8000000000000000;
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = (float)auVar25._0_8_;
  return auVar26._0_8_;
}



undefined8 FUN_1801ed380(void)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  sbyte sVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar29;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uVar30;
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 in_ZMM0 [64];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  double dVar61;
  ulonglong in_XMM5_Qb;
  undefined1 auVar62 [16];

  fVar29 = in_ZMM0._0_4_;
  if (DAT_1802aa1a8 == 0) {
    fVar16 = ABS(fVar29);
    if (0x7f7fffff < (uint)fVar16) {
      uVar30 = FUN_1801fb0a0();
      return uVar30;
    }
    dVar61 = (double)fVar29;
    dVar25 = ABS(dVar61);
    auVar40._16_48_ = in_ZMM0._16_48_;
    if ((uint)fVar16 < 0x3f490fdc) {
      if ((uint)fVar16 < 0x39000000) {
        if ((uint)fVar16 < 0x32000000) {
          return in_ZMM0._0_8_;
        }
        auVar40._8_8_ = in_XMM5_Qb;
        auVar40._0_8_ = dVar61 * dVar61;
        auVar41._8_56_ = auVar40._8_56_;
        auVar41._0_8_ = dVar61 * dVar61 * dVar61 * 0.3333333333333333 + dVar61;
      }
      else {
        auVar42._8_8_ = in_XMM5_Qb;
        auVar42._0_8_ = dVar61;
        auVar42._16_48_ = auVar40._16_48_;
        dVar25 = dVar61 * dVar61;
        auVar41._8_56_ = auVar42._8_56_;
        auVar41._0_8_ =
             dVar61 + dVar25 * dVar61 *
                      ((dVar25 * -0.017203248047148168 + 0.3852960712639954) /
                      ((dVar25 * 0.01844239256901656 + -0.5139650547885454) * dVar25 + 1.1558882143468838));
      }
      auVar49._4_60_ = auVar41._4_60_;
      auVar49._0_4_ = (float)auVar41._0_8_;
      return auVar49._0_8_;
    }
    if ((longlong)dVar25 < 0x4160000000000000) {
      uVar60 = (uint)(ABS(dVar25) * 0.6366197723675814 + 0.5);
      dVar25 = dVar25 - (double)(int)uVar60 * 1.5707963267341256;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar25;
      auVar43._16_48_ = auVar40._16_48_;
      auVar44._8_56_ = auVar43._8_56_;
      auVar44._0_8_ = dVar25 - (double)(int)uVar60 * 6.077100506506192e-11;
    }
    else {
      uVar28 = ((ulonglong)dVar25 >> 0x34) - 0x3ff;
      lVar26 = -((uVar28 >> 3) - 0x86);
      uVar21 = (ulonglong)dVar25 & 0xfffffffffffff | 0x10000000000000;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = *(ulonglong *)(&DAT_18024a6d0 + lVar26);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar21;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = SUB168(auVar34 * auVar6,8);
      uVar17 = SUB168(auVar34 * auVar6,0);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(&UNK_18024a6d8 + lVar26);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar21;
      uVar28 = uVar28 & 7;
      auVar14 = auVar12 * auVar7 + auVar14;
      uVar18 = auVar14._0_8_;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(&UNK_18024a6e0 + lVar26);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      uVar27 = auVar14._8_8_ + SUB168(auVar13 * auVar8,0);
      uVar24 = 0;
      bVar20 = (byte)(0x36 - uVar28) & 0x3f;
      uVar21 = uVar27 >> bVar20;
      bVar1 = (0x36 - uVar28 & 0x3f) != 0;
      bVar2 = (uVar27 >> bVar20 - 1 & 1) != 0;
      if (bVar1 && bVar2) {
        uVar27 = ~uVar27;
        uVar18 = ~uVar18;
        uVar17 = ~uVar17;
        uVar24 = 0x8000000000000000;
      }
      uVar60 = (int)uVar21 + (uint)(bVar1 && bVar2);
      sVar19 = (char)uVar28 + 10;
      uVar21 = (uVar27 << sVar19) >> sVar19;
      lVar22 = uVar28 - 0x36;
      lVar26 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar27 = uVar18;
      if (uVar21 == 0) {
        lVar26 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        lVar22 = uVar28 - 0x76;
        uVar27 = uVar17;
        uVar21 = uVar18;
      }
      lVar23 = lVar26 + -0x34;
      if (lVar23 < 0) {
        bVar20 = -(byte)lVar23;
        uVar21 = uVar21 << (bVar20 & 0x3f) | uVar27 >> (-(bVar20 - 0x40) & 0x3f);
      }
      else if (lVar23 != 0) {
        uVar21 = uVar21 >> ((byte)lVar23 & 0x3f);
      }
      dVar25 = (double)(uVar21 & 0xffefffffffffffff | uVar24 | lVar22 + lVar26 + 0x3ff << 0x34);
      auVar45._8_8_ = 0;
      auVar45._0_8_ = dVar25;
      auVar45._16_48_ = auVar40._16_48_;
      auVar44._8_56_ = auVar45._8_56_;
      auVar44._0_8_ = dVar25 * 1.5707963267948966;
    }
    dVar25 = auVar44._0_8_;
    dVar50 = dVar25 * dVar25;
    auVar46._8_56_ = auVar44._8_56_;
    auVar46._0_8_ =
         dVar25 + dVar50 * dVar25 *
                  ((dVar50 * -0.017203248047148168 + 0.3852960712639954) /
                  ((dVar50 * 0.01844239256901656 + -0.5139650547885454) * dVar50 + 1.1558882143468838));
    if ((uVar60 & 1) == 1) {
      auVar46._16_48_ = auVar44._16_48_;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = -1.0 / auVar46._0_8_;
    }
    auVar47._0_8_ = (double)(auVar46._0_8_ ^ (ulonglong)dVar61 & 0x8000000000000000);
    auVar47._16_48_ = auVar46._16_48_;
    auVar47._8_8_ = auVar46._8_8_ ^ in_XMM5_Qb & 0x8000000000000000;
    auVar48._4_60_ = auVar47._4_60_;
    auVar48._0_4_ = (float)auVar47._0_8_;
    return auVar48._0_8_;
  }
  fVar16 = ABS(fVar29);
  if (0x7f7fffff < (uint)fVar16) {
    uVar30 = FUN_1801fb0a0();
    return uVar30;
  }
  auVar62._0_8_ = (double)fVar29;
  auVar32._8_8_ = in_ZMM0._8_8_;
  auVar62._8_8_ = auVar32._8_8_;
  dVar25 = ABS(auVar62._0_8_);
  if ((uint)fVar16 < 0x3f490fdc) {
    if ((uint)fVar16 < 0x39000000) {
      if ((uint)fVar16 < 0x32000000) {
        return in_ZMM0._0_8_;
      }
      auVar31._8_8_ = 0;
      auVar31._0_8_ = auVar62._0_8_ * auVar62._0_8_ * auVar62._0_8_;
      auVar34 = vfmadd132sd_fma(auVar31,auVar62,ZEXT816(0x3fd5555555555555));
    }
    else {
      auVar32._0_8_ = auVar62._0_8_;
      dVar25 = auVar62._0_8_ * auVar62._0_8_;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = dVar25;
      auVar34 = vfmadd213sd_fma(ZEXT816(0xbf919dba6efd6aad),auVar51,ZEXT816(0x3fd8a8b0da56cb17));
      auVar12 = vfmadd213sd_fma(ZEXT816(0x3f92e29003c692d9),auVar51,ZEXT816(0xbfe07266d7b3511b));
      auVar52._8_8_ = 0;
      auVar52._0_8_ = dVar25;
      auVar12 = vfmadd213sd_fma(auVar12,auVar52,ZEXT816(0x3ff27e84a3e73a2e));
      auVar58._0_8_ = auVar34._0_8_ / auVar12._0_8_;
      auVar58._8_8_ = auVar34._8_8_;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = dVar25 * auVar62._0_8_;
      auVar34 = vfmadd231sd_fma(auVar32,auVar53,auVar58);
    }
    auVar39._0_4_ = (float)auVar34._0_8_;
    auVar39._4_12_ = auVar34._4_12_;
    return auVar39._0_8_;
  }
  if ((longlong)dVar25 < 0x41e921fb40000000) {
    auVar33._8_8_ = 0;
    auVar33._0_8_ = dVar25;
    auVar34 = vandpd_avx(auVar33,_DAT_180247b50);
    auVar34 = vfmadd213sd_fma(_DAT_180247b60,auVar34,ZEXT816(0x3fe0000000000000));
    auVar57._0_4_ = (int)auVar34._0_8_;
    auVar57._4_4_ = (int)auVar34._8_8_;
    auVar57._8_8_ = 0;
    auVar12 = vpmovsxdq_avx(auVar57);
    auVar34 = vandpd_avx(auVar12,_DAT_180247b70);
    auVar12 = vshufps_avx(auVar12,auVar12,8);
    auVar12 = vcvtdq2pd_avx(auVar12);
    auVar13 = vfnmadd231sd_fma(auVar33,auVar12,ZEXT816(0x3ff921fb54400000));
    dVar25 = auVar13._0_8_ - auVar12._0_8_ * 6.077100506506192e-11;
  }
  else {
    uVar28 = ((ulonglong)dVar25 >> 0x34) - 0x3ff;
    lVar26 = -((uVar28 >> 3) - 0x86);
    uVar21 = (ulonglong)auVar62._0_8_ & 0xfffffffffffff | 0x10000000000000;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_18024a6d0 + lVar26);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar21;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = SUB168(auVar3 * auVar9,8);
    uVar17 = SUB168(auVar3 * auVar9,0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = SUB168(*(undefined1 (*) [16])(&UNK_18024a6d8 + lVar26),0);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar21;
    uVar28 = uVar28 & 7;
    auVar34 = vpsrldq_avx(*(undefined1 (*) [16])(&UNK_18024a6d8 + lVar26),8);
    auVar15 = auVar4 * auVar10 + auVar15;
    uVar18 = auVar15._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar34._0_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar21;
    uVar27 = auVar15._8_8_ + SUB168(auVar5 * auVar11,0);
    uVar24 = 0;
    bVar20 = (byte)(0x36 - uVar28) & 0x3f;
    uVar21 = uVar27 >> bVar20;
    bVar1 = (0x36 - uVar28 & 0x3f) != 0;
    bVar2 = (uVar27 >> bVar20 - 1 & 1) != 0;
    if (bVar1 && bVar2) {
      uVar27 = ~uVar27;
      uVar18 = ~uVar18;
      uVar17 = ~uVar17;
      uVar24 = 0x8000000000000000;
    }
    auVar34 = ZEXT416((int)uVar21 + (uint)(bVar1 && bVar2) & 3);
    sVar19 = (char)uVar28 + 10;
    uVar21 = (uVar27 << sVar19) >> sVar19;
    lVar22 = uVar28 - 0x36;
    lVar26 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar27 = uVar18;
    if (uVar21 == 0) {
      lVar26 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      lVar22 = uVar28 - 0x76;
      uVar27 = uVar17;
      uVar21 = uVar18;
    }
    lVar23 = lVar26 + -0x34;
    if (lVar23 < 0) {
      bVar20 = -(byte)lVar23;
      uVar21 = uVar21 << (bVar20 & 0x3f) | uVar27 >> (-(bVar20 - 0x40) & 0x3f);
    }
    else if (lVar23 != 0) {
      uVar21 = uVar21 >> ((byte)lVar23 & 0x3f);
    }
    dVar25 = (double)(uVar21 & 0xffefffffffffffff | uVar24 | lVar22 + lVar26 + 0x3ff << 0x34) * 1.5707963267948966;
  }
  auVar34 = vandpd_avx(auVar34,_DAT_180247b80);
  dVar61 = dVar25 * dVar25;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = dVar61;
  auVar12 = vfmadd213sd_fma(ZEXT816(0xbf919dba6efd6aad),auVar54,ZEXT816(0x3fd8a8b0da56cb17));
  auVar13 = vfmadd213sd_fma(ZEXT816(0x3f92e29003c692d9),auVar54,ZEXT816(0xbfe07266d7b3511b));
  auVar55._8_8_ = 0;
  auVar55._0_8_ = dVar61;
  auVar13 = vfmadd213sd_fma(auVar13,auVar55,ZEXT816(0x3ff27e84a3e73a2e));
  auVar59._0_8_ = auVar12._0_8_ / auVar13._0_8_;
  auVar59._8_8_ = auVar12._8_8_;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = dVar25;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = dVar61 * dVar25;
  auVar36 = vfmadd231sd_fma(auVar35,auVar56,auVar59);
  if (auVar34._0_4_ == 1) {
    auVar36._0_8_ = -1.0 / auVar36._0_8_;
    auVar36._8_8_ = 0;
  }
  auVar34 = vandpd_avx(auVar62,_DAT_180247b90);
  auVar37._0_8_ = (double)(auVar36._0_8_ ^ auVar34._0_8_);
  auVar37._8_8_ = auVar36._8_8_ ^ auVar34._8_8_;
  auVar38._0_4_ = (float)auVar37._0_8_;
  auVar38._4_12_ = auVar37._4_12_;
  return auVar38._0_8_;
}



_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong local_res8;

  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  else if (*param_1 == L'\0') {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
  }
  else {
    FUN_1801f5910(&local_res8);
    if (local_res8 != 0) {
      p_Var2 = (_iobuf *)FUN_1801fb768(param_1,param_2,param_3,local_res8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_1801e2318(local_res8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}



errno_t __cdecl _wfopen_s(FILE **_File,wchar_t *_Filename,wchar_t *_Mode)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  errno_t *peVar3;
  errno_t eVar4;

  eVar4 = 0;
  if (_File == (FILE **)0x0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    eVar4 = 0x16;
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  else {
    p_Var2 = common_fsopen<wchar_t>(_Filename,_Mode,0x80);
    *_File = p_Var2;
    if (p_Var2 == (_iobuf *)0x0) {
      peVar3 = (errno_t *)FUN_1801e6ae4();
      eVar4 = *peVar3;
    }
  }
  return eVar4;
}



_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong lStackX_8;

  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  else if (*param_1 == L'\0') {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
  }
  else {
    FUN_1801f5910(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)FUN_1801fb768(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      FUN_1801e2318(lStackX_8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}



ulonglong FUN_1801ed790(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 in_XMM0 [16];

  dVar3 = in_XMM0._0_8_;
  if (dVar3 == 0.0) {
    *param_2 = 0;
    return 0;
  }
  if ((((ulonglong)dVar3 & 0x7ff0000000000000) == 0) && (((ulonglong)dVar3 & 0xfffffffffffff) != 0)) {
    uVar2 = (ulonglong)dVar3 & 0xfffffffffffff;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar2 = uVar2 << (0x34U - (char)lVar1 & 0x3f) & 0xffefffffffffffff;
    *param_2 = (int)lVar1 + -0x431;
    if (dVar3 < 0.0) {
      uVar2 = uVar2 | 0x8000000000000000;
    }
    return uVar2 & 0xbfefffffffffffff | 0x3fe0000000000000;
  }
  *param_2 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
  return (ulonglong)dVar3 & 0xbfefffffffffffff | 0x3fe0000000000000;
}



double FUN_1801ed890(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 in_XMM0 [16];

  dVar4 = in_XMM0._0_8_;
  if (param_2 == (int *)0x0) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x16;
    FUN_1801e1344();
    return 0.0;
  }
  if (((ulonglong)dVar4 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    *param_2 = -1;
    if ((((longlong)dVar4 + 0x10000000000000U & 0x7fffffffffffffff) != 0) &&
       (((ulonglong)dVar4 & 0x7ff8000000000000) != 0x7ff8000000000000)) {
      FUN_1801fb150(0x1f80,0xffc0);
      dVar4 = (double)FUN_1801f9eb0(8);
      return dVar4;
    }
  }
  else {
    if (dVar4 == 0.0) {
      *param_2 = 0;
      return dVar4;
    }
    if ((((ulonglong)dVar4 & 0x7ff0000000000000) == 0) && (((ulonglong)dVar4 & 0xfffffffffffff) != 0)) {
      uVar3 = (ulonglong)dVar4 & 0xfffffffffffff;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar3 = uVar3 << (0x34U - (char)lVar1 & 0x3f) & 0xffefffffffffffff;
      *param_2 = (int)lVar1 + -0x431;
      if (dVar4 < 0.0) {
        uVar3 = uVar3 | 0x8000000000000000;
      }
      return (double)(uVar3 & 0xbfefffffffffffff | 0x3fe0000000000000);
    }
    dVar4 = (double)((ulonglong)dVar4 & 0xbfefffffffffffff | 0x3fe0000000000000);
    *param_2 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
  }
  return dVar4;
}



void FUN_1801eda60(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong local_38 [7];

  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  while (bVar2 != 0) {
    pbVar1 = (byte *)((longlong)local_38 + ((longlong)(int)(uint)bVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  local_38[0] = local_38[0] | 1;
  bVar2 = *(byte *)((longlong)local_38 + (ulonglong)(*param_1 >> 3)) >> (*param_1 & 7);
  while ((bVar2 & 1) == 0) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *(byte *)((longlong)local_38 + (ulonglong)(*pbVar1 >> 3)) >> (*pbVar1 & 7);
  }
}



longlong FUN_1801edb10(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  undefined1 auVar36 [16];
  longlong lVar26;

  uVar22 = (ulonglong)((uint)param_2 & 0xf);
  pauVar21 = (undefined1 (*) [16])(param_2 - uVar22);
  lVar20 = 0;
  auVar34 = *pauVar21;
  switch(uVar22) {
  case 1:
    auVar34 = auVar34 >> 8;
    break;
  case 2:
    auVar34 = auVar34 >> 0x10;
    break;
  case 3:
    auVar34 = auVar34 >> 0x18;
    break;
  case 4:
    auVar34 = auVar34 >> 0x20;
    break;
  case 5:
    auVar34 = auVar34 >> 0x28;
    break;
  case 6:
    auVar34 = auVar34 >> 0x30;
    break;
  case 7:
    auVar34 = auVar34 >> 0x38;
    break;
  case 8:
    auVar34 = auVar34 >> 0x40;
    break;
  case 9:
    auVar34 = auVar34 >> 0x48;
    break;
  case 10:
    auVar34 = auVar34 >> 0x50;
    break;
  case 0xb:
    auVar34 = auVar34 >> 0x58;
    break;
  case 0xc:
    auVar34 = auVar34 >> 0x60;
    break;
  case 0xd:
    auVar34 = auVar34 >> 0x68;
    break;
  case 0xe:
    auVar34 = auVar34 >> 0x70;
    break;
  case 0xf:
    auVar34 = auVar34 >> 0x78;
  }
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar4 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  if (uVar4 == 0) {
    if (uVar22 == 0) {
      if ((*pauVar21)[1] != '\0') {
        lVar20 = FUN_1801eda60();
        return lVar20;
      }
      goto LAB_1801eddd2;
    }
  }
  else {
    uVar3 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    lVar26 = auVar34._8_8_;
    switch(-uVar3) {
    case 0:
      auVar34 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar27._0_8_ = auVar34._0_8_ << 8;
      auVar27._8_8_ = lVar26 << 8 | auVar34._0_8_ >> 0x38;
      auVar34 = auVar27 >> 8;
      break;
    case 0xfffffff2:
      auVar28._0_8_ = auVar34._0_8_ << 0x10;
      auVar28._8_8_ = lVar26 << 0x10 | auVar34._0_8_ >> 0x30;
      auVar34 = auVar28 >> 0x10;
      break;
    case 0xfffffff3:
      auVar29._0_8_ = auVar34._0_8_ << 0x18;
      auVar29._8_8_ = lVar26 << 0x18 | auVar34._0_8_ >> 0x28;
      auVar34 = auVar29 >> 0x18;
      break;
    case 0xfffffff4:
      auVar30._0_8_ = auVar34._0_8_ << 0x20;
      auVar30._8_8_ = lVar26 << 0x20 | auVar34._0_8_ >> 0x20;
      auVar34 = auVar30 >> 0x20;
      break;
    case 0xfffffff5:
      auVar31._0_8_ = auVar34._0_8_ << 0x28;
      auVar31._8_8_ = lVar26 << 0x28 | auVar34._0_8_ >> 0x18;
      auVar34 = auVar31 >> 0x28;
      break;
    case 0xfffffff6:
      auVar32._0_8_ = auVar34._0_8_ << 0x30;
      auVar32._8_8_ = lVar26 << 0x30 | auVar34._0_8_ >> 0x10;
      auVar34 = auVar32 >> 0x30;
      break;
    case 0xfffffff7:
      auVar33._0_8_ = auVar34._0_8_ << 0x38;
      auVar33._8_8_ = lVar26 << 0x38 | auVar34._0_8_ >> 8;
      auVar34 = auVar33 >> 0x38;
      break;
    case 0xfffffff8:
      auVar34._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar34._0_8_ << 8;
      auVar34 = (auVar5 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar34._0_8_ << 0x10;
      auVar34 = (auVar6 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar34._0_8_ << 0x18;
      auVar34 = (auVar7 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar34._0_8_ << 0x20;
      auVar34 = (auVar8 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar34._0_8_ << 0x28;
      auVar34 = (auVar9 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar34._0_8_ << 0x30;
      auVar34 = (auVar10 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar34._0_8_ << 0x38;
      auVar34 = (auVar11 << 0x40) >> 0x78;
    }
    if (uVar22 == 0 || (ulonglong)uVar3 < 0x10 - uVar22) goto LAB_1801eddd2;
  }
  auVar36 = pauVar21[1];
  auVar24[0] = -(auVar36[0] == '\0');
  auVar24[1] = -(auVar36[1] == '\0');
  auVar24[2] = -(auVar36[2] == '\0');
  auVar24[3] = -(auVar36[3] == '\0');
  auVar24[4] = -(auVar36[4] == '\0');
  auVar24[5] = -(auVar36[5] == '\0');
  auVar24[6] = -(auVar36[6] == '\0');
  lVar26 = auVar36._8_8_;
  auVar24[7] = -(auVar36[7] == '\0');
  auVar24[8] = -(auVar36[8] == '\0');
  auVar24[9] = -(auVar36[9] == '\0');
  auVar24[10] = -(auVar36[10] == '\0');
  auVar24[0xb] = -(auVar36[0xb] == '\0');
  auVar24[0xc] = -(auVar36[0xc] == '\0');
  auVar24[0xd] = -(auVar36[0xd] == '\0');
  auVar24[0xe] = -(auVar36[0xe] == '\0');
  auVar24[0xf] = -(auVar36[0xf] == '\0');
  uVar4 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  uVar35 = auVar36._0_8_;
  if (uVar4 != 0) {
    uVar3 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    if ((uVar3 - uVar22) + 0x10 < 0x11) {
      switch(-uVar3) {
      case 0:
        auVar36 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar36._0_8_ = uVar35 << 8;
        auVar36._8_8_ = lVar26 << 8 | uVar35 >> 0x38;
        break;
      case 0xfffffff2:
        auVar36._0_8_ = uVar35 << 0x10;
        auVar36._8_8_ = lVar26 << 0x10 | uVar35 >> 0x30;
        break;
      case 0xfffffff3:
        auVar36._0_8_ = uVar35 << 0x18;
        auVar36._8_8_ = lVar26 << 0x18 | uVar35 >> 0x28;
        break;
      case 0xfffffff4:
        auVar36._0_8_ = uVar35 << 0x20;
        auVar36._8_8_ = lVar26 << 0x20 | uVar35 >> 0x20;
        break;
      case 0xfffffff5:
        auVar36._0_8_ = uVar35 << 0x28;
        auVar36._8_8_ = lVar26 << 0x28 | uVar35 >> 0x18;
        break;
      case 0xfffffff6:
        auVar36._0_8_ = uVar35 << 0x30;
        auVar36._8_8_ = lVar26 << 0x30 | uVar35 >> 0x10;
        break;
      case 0xfffffff7:
        auVar36._0_8_ = uVar35 << 0x38;
        auVar36._8_8_ = lVar26 << 0x38 | uVar35 >> 8;
        break;
      case 0xfffffff8:
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35;
        auVar36 = auVar19 << 0x40;
        break;
      case 0xfffffff9:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar35 << 8;
        auVar36 = auVar12 << 0x40;
        break;
      case 0xfffffffa:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar35 << 0x10;
        auVar36 = auVar13 << 0x40;
        break;
      case 0xfffffffb:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar35 << 0x18;
        auVar36 = auVar14 << 0x40;
        break;
      case 0xfffffffc:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar35 << 0x20;
        auVar36 = auVar15 << 0x40;
        break;
      case 0xfffffffd:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar35 << 0x28;
        auVar36 = auVar16 << 0x40;
        break;
      case 0xfffffffe:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar35 << 0x30;
        auVar36 = auVar17 << 0x40;
        break;
      case 0xffffffff:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar35 << 0x38;
        auVar36 = auVar18 << 0x40;
      }
      auVar34 = auVar34 | auVar36;
LAB_1801eddd2:
      cVar2 = *param_1;
      while ((cVar2 != '\0' &&
             (auVar25[0] = -(cVar2 == auVar34[0]), auVar25[1] = -(cVar2 == auVar34[1]),
             auVar25[2] = -(cVar2 == auVar34[2]), auVar25[3] = -(cVar2 == auVar34[3]),
             auVar25[4] = -(cVar2 == auVar34[4]), auVar25[5] = -(cVar2 == auVar34[5]),
             auVar25[6] = -(cVar2 == auVar34[6]), auVar25[7] = -(cVar2 == auVar34[7]),
             auVar25[8] = -(cVar2 == auVar34[8]), auVar25[9] = -(cVar2 == auVar34[9]),
             auVar25[10] = -(cVar2 == auVar34[10]), auVar25[0xb] = -(cVar2 == auVar34[0xb]),
             auVar25[0xc] = -(cVar2 == auVar34[0xc]), auVar25[0xd] = -(cVar2 == auVar34[0xd]),
             auVar25[0xe] = -(cVar2 == auVar34[0xe]), auVar25[0xf] = -(cVar2 == auVar34[0xf]),
             (((((((((((((((SUB161(auVar25 >> 7,0) & 1) == 0 && (SUB161(auVar25 >> 0xf,0) & 1) == 0) &&
                         (SUB161(auVar25 >> 0x17,0) & 1) == 0) && (SUB161(auVar25 >> 0x1f,0) & 1) == 0) &&
                       (SUB161(auVar25 >> 0x27,0) & 1) == 0) && (SUB161(auVar25 >> 0x2f,0) & 1) == 0) &&
                     (SUB161(auVar25 >> 0x37,0) & 1) == 0) && (SUB161(auVar25 >> 0x3f,0) & 1) == 0) &&
                   (SUB161(auVar25 >> 0x47,0) & 1) == 0) && (SUB161(auVar25 >> 0x4f,0) & 1) == 0) &&
                 (SUB161(auVar25 >> 0x57,0) & 1) == 0) && (SUB161(auVar25 >> 0x5f,0) & 1) == 0) &&
               (SUB161(auVar25 >> 0x67,0) & 1) == 0) && (SUB161(auVar25 >> 0x6f,0) & 1) == 0) &&
             (SUB161(auVar25 >> 0x77,0) & 1) == 0) && -1 < auVar25[0xf]))) {
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        lVar20 = lVar20 + 1;
        cVar2 = *pcVar1;
      }
      return lVar20;
    }
  }
  lVar20 = FUN_1801eda60(param_1,param_2);
  return lVar20;
}



ulonglong __crt_time_is_leap_year<>(uint param_1)

{
  uint uVar1;
  int iVar2;

  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar1 == 0) && (param_1 != ((int)param_1 / 100) * 100)) {
    return CONCAT71((uint7)((ulonglong)((longlong)(int)param_1 * 0x51eb851f) >> 8) & 0xffffff,1);
  }
  iVar2 = ((int)(param_1 + 0x76c) / 400) * 400;
  return (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),param_1 + 0x76c == iVar2);
}



int FUN_1801edf3c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = ((param_3 - (param_2 + 6) % 7) + 7) / 7;
  bVar2 = __crt_time_is_leap_year<>(param_1);
  iVar5 = param_3 - (uint)bVar2;
  iVar4 = ((param_2 - param_3) + 0x173) % 7;
  iVar3 = (int)(bVar2 + 0x16d + iVar4) % 7;
  if ((((iVar5 < 0x16c) || (iVar3 != 2)) && ((iVar5 < 0x16b || (iVar3 != 3)))) && ((iVar5 < 0x16a || (iVar3 != 4)))) {
    iVar3 = iVar1 + 1;
    if ((1 < iVar4 - 2U) && (iVar4 != 4)) {
      iVar3 = iVar1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



undefined8
FUN_1801ee034(undefined8 param_1,ushort param_2,uint *param_3,longlong *param_4,longlong *param_5,undefined **param_6,
             char param_7)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  undefined8 uVar11;
  short *psVar12;
  bool bVar13;
  bool bVar14;
  int local_res10 [2];
  int local_38 [4];

  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      __tzset();
      lVar7 = FUN_1801fbb94();
      psVar10 = *(short **)((ulonglong)(-(uint)(param_3[8] != 0) & 8) + lVar7);
      lVar7 = *param_5;
      while( true ) {
        if (lVar7 == 0) {
          return 1;
        }
        sVar1 = *psVar10;
        if (sVar1 == 0) break;
        psVar10 = psVar10 + 1;
        *(short *)*param_4 = sVar1;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      return 1;
    }
    if (param_2 < 0x4e) {
      if (param_2 == 0x4d) {
        uVar8 = param_3[1];
        bVar13 = uVar8 < 0x3b;
        bVar14 = uVar8 == 0x3b;
LAB_1801ee1b2:
        if (!bVar13 && !bVar14) {
LAB_1801ee460:
          puVar6 = (undefined4 *)FUN_1801e6ae4();
          *puVar6 = 0x16;
          FUN_1801e1344();
          return 0;
        }
        goto LAB_1801ee0e7;
      }
      if (param_2 == 0x25) {
        psVar10 = &DAT_180247c80;
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      if (param_2 == 0x41) {
        if (param_3[6] < 7) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[6] + 0x33];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_1801ee460;
      }
      if (param_2 == 0x42) {
        if (param_3[4] < 0xc) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[4] + 0x46];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_1801ee460;
      }
      if (param_2 == 0x43) {
        if (9999 < param_3[5] + 0x76c) goto LAB_1801ee460;
        uVar8 = (int)(param_3[5] + 0x76c) / 100;
LAB_1801ee0e7:
        uVar11 = 2;
LAB_1801ee0f3:
        FUN_1801eef10(uVar8,uVar11);
        return 1;
      }
      if (param_2 == 0x44) {
        cVar2 = FUN_1801ee034(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        psVar12 = &DAT_180247c6c;
        lVar7 = *param_5;
        for (psVar10 = &DAT_180247c6c; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1801ee034(param_1,100,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 0x79;
      }
      else {
        if (param_2 != 0x46) {
          if (param_2 == 0x47) {
            uVar8 = param_3[5];
            if (9999 < uVar8 + 0x76c) goto LAB_1801ee460;
            iVar4 = FUN_1801edf3c(uVar8,param_3[6],param_3[7]);
            if (iVar4 == 0) {
              uVar8 = uVar8 - 1;
            }
            else if (iVar4 < 1) {
              uVar8 = uVar8 + 1;
            }
            uVar8 = uVar8 + 0x76c;
LAB_1801ee957:
            uVar11 = 4;
            goto LAB_1801ee0f3;
          }
          if (param_2 == 0x48) {
            uVar8 = param_3[2];
            bVar13 = uVar8 < 0x17;
            bVar14 = uVar8 == 0x17;
            goto LAB_1801ee1b2;
          }
          if (param_2 != 0x49) {
            return 0;
          }
          if (0x17 < param_3[2]) goto LAB_1801ee460;
          uVar8 = (int)param_3[2] % 0xc;
          if (uVar8 == 0) {
            uVar8 = 0xc;
          }
          goto LAB_1801ee0e7;
        }
        cVar2 = FUN_1801ee034(param_1,0x59,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        psVar12 = &DAT_180244e88;
        lVar7 = *param_5;
        for (psVar10 = &DAT_180244e88; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1801ee034(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 100;
      }
    }
    else if (param_2 == 0x52) {
      cVar2 = FUN_1801ee034(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_1801ee20c;
      lVar7 = *param_5;
      for (psVar10 = &DAT_180247c74; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      uVar11 = 0x4d;
    }
    else {
      if (param_2 == 0x53) {
        uVar8 = *param_3;
        bVar13 = uVar8 < 0x3c;
        bVar14 = uVar8 == 0x3c;
        goto LAB_1801ee1b2;
      }
      if (param_2 != 0x54) {
        if (param_2 != 0x55) {
          if (param_2 == 0x56) {
            uVar8 = param_3[6];
            uVar9 = param_3[5];
            uVar5 = FUN_1801edf3c(uVar9,uVar8,param_3[7]);
            if (uVar5 == 0) {
              bVar3 = __crt_time_is_leap_year<>(uVar9 - 1);
              uVar8 = FUN_1801edf3c(uVar9 - 1,(uVar8 - param_3[7]) + 7,bVar3 + 0x16d);
            }
            else {
              uVar8 = 1;
              if (0 < (int)uVar5) {
                uVar8 = uVar5;
              }
            }
            goto LAB_1801ee0e7;
          }
          if (param_2 != 0x57) {
            if (param_2 != 0x58) {
              if (param_2 != 0x59) {
                return 0;
              }
              uVar8 = param_3[5] + 0x76c;
              if (9999 < uVar8) goto LAB_1801ee460;
              goto LAB_1801ee957;
            }
            goto LAB_1801ee3b3;
          }
        }
        uVar9 = param_3[6];
        if (6 < uVar9) goto LAB_1801ee460;
        if (param_2 == 0x57) {
          if (uVar9 == 0) {
            uVar9 = 6;
          }
          else {
            uVar9 = uVar9 - 1;
          }
        }
        uVar5 = param_3[7];
        if (0x16d < uVar5) goto LAB_1801ee460;
        uVar8 = 0;
        if (((int)uVar9 <= (int)uVar5) && (uVar8 = (int)uVar5 / 7, (int)uVar9 <= (int)uVar5 % 7)) {
          uVar8 = (int)uVar5 / 7 + 1;
        }
        goto LAB_1801ee0e7;
      }
      cVar2 = FUN_1801ee034(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_1801ee20c;
      psVar12 = &DAT_180247c74;
      lVar7 = *param_5;
      for (psVar10 = &DAT_180247c74; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_1801ee034(param_1,0x4d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_1801ee20c;
      lVar7 = *param_5;
      for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
        *(short *)*param_4 = *psVar12;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      uVar11 = 0x53;
    }
LAB_1801ee345:
    cVar2 = FUN_1801ee034(param_1,uVar11,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        psVar10 = &DAT_180247c70;
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      if (param_2 == 0x61) {
        if (param_3[6] < 7) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[6] + 0x2c];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_1801ee460;
      }
      if (param_2 == 0x62) {
LAB_1801ee3c2:
        if (param_3[4] < 0xc) {
          psVar10 = (short *)param_6[(longlong)(int)param_3[4] + 0x3a];
          lVar7 = *param_5;
          while( true ) {
            if (lVar7 == 0) {
              return 1;
            }
            sVar1 = *psVar10;
            if (sVar1 == 0) break;
            psVar10 = psVar10 + 1;
            *(short *)*param_4 = sVar1;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          return 1;
        }
        goto LAB_1801ee460;
      }
      if (param_2 != 99) {
        if (param_2 == 100) {
          uVar8 = param_3[3];
          bVar13 = uVar8 - 1 < 0x1e;
          bVar14 = uVar8 - 1 == 0x1e;
          goto LAB_1801ee1b2;
        }
        if (param_2 == 0x65) {
          uVar8 = param_3[3];
          if (0x1e < param_3[3] - 1) goto LAB_1801ee460;
        }
        else if (param_2 == 0x67) {
          uVar8 = param_3[5];
          if (9999 < uVar8 + 0x76c) goto LAB_1801ee460;
          iVar4 = FUN_1801edf3c(uVar8,param_3[6],param_3[7]);
          if (iVar4 == 0) {
            uVar8 = uVar8 - 1;
          }
          else if (iVar4 < 1) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (int)(uVar8 + 0x76c) % 100;
        }
        else {
          if (param_2 == 0x68) goto LAB_1801ee3c2;
          if (param_2 == 0x6a) {
            if (param_3[7] < 0x16e) {
              uVar8 = param_3[7] + 1;
              uVar11 = 3;
              goto LAB_1801ee0f3;
            }
            goto LAB_1801ee460;
          }
          if (param_2 != 0x6d) {
            return 0;
          }
          if (0xb < param_3[4]) goto LAB_1801ee460;
          uVar8 = param_3[4] + 1;
        }
        goto LAB_1801ee0e7;
      }
      if ((param_6 != &PTR_DAT_180248900) || (param_7 != '\0')) {
        cVar2 = FUN_1801ef060(param_1,param_7,param_3,param_4,param_5,param_6);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        lVar7 = *param_5;
        for (psVar10 = &DAT_180247c68; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
LAB_1801ee3b3:
        param_7 = '\x02';
        goto LAB_1801ee3b8;
      }
      cVar2 = FUN_1801ee034(param_1,0x61,param_3,param_4,param_5,&PTR_DAT_180248900,0);
      if (cVar2 == '\0') goto LAB_1801ee20c;
      psVar12 = &DAT_180247c68;
      lVar7 = *param_5;
      for (psVar10 = &DAT_180247c68; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_1801ee034(param_1,0x62,param_3,param_4,param_5,&PTR_DAT_180248900,0);
      if (cVar2 == '\0') goto LAB_1801ee20c;
      lVar7 = *param_5;
      for (psVar10 = &DAT_180247c68; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_1801ee034(param_1,0x65,param_3,param_4,param_5,&PTR_DAT_180248900,0);
      if (cVar2 == '\0') goto LAB_1801ee20c;
      lVar7 = *param_5;
      for (psVar10 = &DAT_180247c68; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
        *(short *)*param_4 = *psVar10;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      cVar2 = FUN_1801ee034(param_1,0x54,param_3,param_4,param_5,&PTR_DAT_180248900,0);
      if (cVar2 == '\0') goto LAB_1801ee20c;
      lVar7 = *param_5;
      for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
        *(short *)*param_4 = *psVar12;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      param_7 = '\0';
      uVar11 = 0x59;
      goto LAB_1801ee345;
    }
    if (param_2 == 0x70) {
      if (param_3[2] < 0x18) {
        if ((int)param_3[2] < 0xc) {
          psVar10 = (short *)param_6[0x52];
        }
        else {
          psVar10 = (short *)param_6[0x53];
        }
        lVar7 = *param_5;
        while( true ) {
          if (lVar7 == 0) {
            return 1;
          }
          sVar1 = *psVar10;
          if (sVar1 == 0) break;
          psVar10 = psVar10 + 1;
          *(short *)*param_4 = sVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        return 1;
      }
      goto LAB_1801ee460;
    }
    if (param_2 == 0x72) {
      if (param_6 == &PTR_DAT_180248900) {
        cVar2 = FUN_1801ee034(param_1,0x49,param_3,param_4,param_5,&PTR_DAT_180248900,param_7);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        psVar12 = &DAT_180247c74;
        lVar7 = *param_5;
        for (psVar10 = &DAT_180247c74; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1801ee034(param_1,0x4d,param_3,param_4,param_5,&PTR_DAT_180248900,param_7);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        lVar7 = *param_5;
        for (; (lVar7 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
          *(short *)*param_4 = *psVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        cVar2 = FUN_1801ee034(param_1,0x53,param_3,param_4,param_5,&PTR_DAT_180248900,param_7);
        if (cVar2 == '\0') goto LAB_1801ee20c;
        lVar7 = *param_5;
        for (psVar10 = &DAT_180247c68; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
          *(short *)*param_4 = *psVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          lVar7 = *param_5;
        }
        uVar11 = 0x70;
      }
      else {
        uVar11 = 0x58;
      }
      goto LAB_1801ee345;
    }
    if (param_2 == 0x74) {
      psVar10 = &DAT_180247c78;
      lVar7 = *param_5;
      while( true ) {
        if (lVar7 == 0) {
          return 1;
        }
        sVar1 = *psVar10;
        if (sVar1 == 0) break;
        psVar10 = psVar10 + 1;
        *(short *)*param_4 = sVar1;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 + -1;
        lVar7 = *param_5;
      }
      return 1;
    }
    if ((param_2 == 0x75) || (param_2 == 0x77)) {
      uVar8 = param_3[6];
      if (6 < uVar8) goto LAB_1801ee460;
      if ((uVar8 == 0) && (param_2 == 0x75)) {
        uVar8 = 7;
      }
      uVar11 = 1;
      goto LAB_1801ee0f3;
    }
    if (param_2 != 0x78) {
      if (param_2 != 0x79) {
        if (param_2 != 0x7a) {
          return 0;
        }
        __tzset();
        local_res10[0] = 0;
        iVar4 = FUN_1801fbbfc(local_res10);
        if (iVar4 == 0) {
          if (param_3[8] != 0) {
            local_38[0] = 0;
            iVar4 = FUN_1801fbbcc(local_38);
            if (iVar4 != 0) goto LAB_1801ee460;
            local_res10[0] = local_res10[0] + local_38[0];
          }
          psVar10 = &DAT_180244e88;
          iVar4 = -local_res10[0];
          if (-local_res10[0] < 0) {
            iVar4 = local_res10[0];
          }
          uVar8 = (iVar4 / 0x3c) % 0x3c;
          if (local_res10[0] < 1) {
            psVar10 = &DAT_180247c7c;
          }
          lVar7 = *param_5;
          for (; (lVar7 != 0 && (*psVar10 != 0)); psVar10 = psVar10 + 1) {
            *(short *)*param_4 = *psVar10;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            lVar7 = *param_5;
          }
          FUN_1801eef10((iVar4 / 0x3c) / 0x3c,2,param_4,param_5,0x30);
          uVar11 = 2;
          goto LAB_1801ee0f3;
        }
        goto LAB_1801ee460;
      }
      if (9999 < param_3[5] + 0x76c) goto LAB_1801ee460;
      uVar8 = (int)(param_3[5] + 0x76c) % 100;
      goto LAB_1801ee0e7;
    }
LAB_1801ee3b8:
    cVar2 = FUN_1801ef060(param_1,param_7,param_3,param_4,param_5,param_6);
  }
  if (cVar2 != '\0') {
    return 1;
  }
LAB_1801ee20c:
  puVar6 = (undefined4 *)FUN_1801e6ae4();
  *puVar6 = 0x16;
  return 0;
}



void FUN_1801eef10(uint param_1,int param_2,longlong *param_3,ulonglong *param_4,short param_5)

{
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  short *psVar10;
  bool bVar11;

  uVar7 = (ulonglong)param_1;
  if (param_5 == 0) {
    psVar5 = (short *)*param_3;
    if (1 < *param_4) {
      do {
        psVar10 = psVar5;
        uVar2 = (int)uVar7 / 10;
        *psVar10 = (short)uVar7 + (short)uVar2 * -10 + 0x30;
        uVar1 = *param_4;
        uVar7 = (ulonglong)uVar2;
        *param_4 = uVar1 - 1;
        if ((int)uVar2 < 1) break;
        psVar5 = psVar10 + 1;
      } while (1 < uVar1 - 1);
      psVar5 = (short *)*param_3;
      *param_3 = (longlong)(psVar10 + 1);
      for (; psVar5 < psVar10; psVar5 = psVar5 + 1) {
        sVar3 = *psVar10;
        *psVar10 = *psVar5;
        psVar10 = psVar10 + -1;
        *psVar5 = sVar3;
      }
      return;
    }
    *param_3 = (longlong)((short *)*param_3 + -*param_4);
  }
  else if ((ulonglong)(longlong)param_2 < *param_4) {
    iVar4 = 0;
    if (param_2 != 0) {
      lVar8 = (longlong)(param_2 + -1) * 2;
      iVar9 = param_2 + -1;
      iVar4 = 0;
      do {
        iVar6 = (int)uVar7;
        sVar3 = param_5;
        if (iVar6 != 0) {
          sVar3 = (short)uVar7 +
                  (((short)(iVar6 / 10) + ((short)(uVar7 >> 0x10) >> 0xf)) -
                  (short)((longlong)iVar6 * 0x66666667 >> 0x3f)) * -10 + 0x30;
        }
        *(short *)(lVar8 + *param_3) = sVar3;
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + -2;
        uVar7 = (ulonglong)(uint)(iVar6 / 10);
        bVar11 = iVar9 != 0;
        iVar9 = iVar9 + -1;
      } while (bVar11);
    }
    *param_3 = *param_3 + (longlong)iVar4 * 2;
    *param_4 = *param_4 - (longlong)iVar4;
    return;
  }
  *param_4 = 0;
  return;
}



void FUN_1801ef060(undefined8 param_1,int param_2,undefined2 *param_3,longlong *param_4,longlong *param_5,
                  longlong param_6)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  short *psVar14;
  undefined1 uVar15;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined1 uVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined2 *local_68;
  undefined8 local_60;
  short local_58;
  short sStack_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  undefined1 uVar16;

  puVar18 = auStack_a8;
  puVar19 = auStack_a8;
  local_48 = DAT_1802a0400 ^ (ulonglong)&local_68;
  if (param_2 == 0) {
    puVar21 = *(ushort **)(param_6 + 0x2a0);
  }
  else if (param_2 == 1) {
    puVar21 = *(ushort **)(param_6 + 0x2a8);
  }
  else {
    puVar21 = *(ushort **)(param_6 + 0x2b0);
  }
  puVar5 = auStack_a8;
  local_68 = param_3;
  local_60 = param_1;
  if (*(int *)(param_6 + 0x158) == 1) goto LAB_1801ef28e;
  local_58 = param_3[10] + 0x76c;
  sStack_56 = param_3[8] + 1;
  local_54 = 0;
  local_52 = param_3[6];
  local_50 = param_3[4];
  local_4e = param_3[2];
  local_4c = *param_3;
  local_4a = 0;
  if (param_2 == 2) {
    local_80 = 0;
    local_88 = 0;
    iVar7 = FUN_1801f60a8();
  }
  else {
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    iVar7 = FUN_1801f5f4c(*(undefined8 *)(param_6 + 0x2b8),0,&local_58,puVar21);
  }
  puVar5 = auStack_a8;
  if ((iVar7 == 0) ||
     (uVar12 = (longlong)iVar7 * 2 + 0x10, uVar12 = -(ulonglong)((ulonglong)((longlong)iVar7 * 2) < uVar12) & uVar12,
     puVar5 = auStack_a8, uVar12 == 0)) goto LAB_1801ef28e;
  if (uVar12 < 0x401) {
    uVar8 = uVar12 + 0xf;
    if (uVar8 <= uVar12) {
      uVar8 = 0xffffffffffffff0;
    }
    lVar3 = -(uVar8 & 0xfffffffffffffff0);
    puVar18 = auStack_a8 + lVar3;
    puVar9 = (undefined4 *)((longlong)&local_68 + lVar3);
    puVar5 = auStack_a8 + lVar3;
    if (puVar9 == (undefined4 *)0x0) goto LAB_1801ef28e;
    *puVar9 = 0xcccc;
LAB_1801ef1de:
    puVar17 = puVar9 + 4;
    puVar19 = puVar18;
  }
  else {
    puVar9 = (undefined4 *)_malloc_base();
    puVar17 = (undefined4 *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0xdddd;
      goto LAB_1801ef1de;
    }
  }
  puVar5 = puVar19;
  if (puVar17 != (undefined4 *)0x0) {
    uVar2 = *(undefined8 *)(param_6 + 0x2b8);
    puVar9 = puVar17;
    if (param_2 == 2) {
      *(int *)(puVar19 + 0x28) = iVar7;
      *(undefined4 **)(puVar19 + 0x20) = puVar17;
      *(undefined8 *)(puVar19 + -8) = 0x1801ef20f;
      iVar7 = FUN_1801f60a8();
    }
    else {
      *(undefined8 *)(puVar19 + 0x30) = 0;
      *(int *)(puVar19 + 0x28) = iVar7;
      *(undefined4 **)(puVar19 + 0x20) = puVar17;
      *(undefined8 *)(puVar19 + -8) = 0x1801ef224;
      iVar7 = FUN_1801f5f4c(uVar2,0,&local_58);
    }
    while ((iVar7 = iVar7 + -1, 0 < iVar7 && (*param_5 != 0))) {
      *(undefined2 *)*param_4 = *(undefined2 *)puVar9;
      *param_4 = *param_4 + 2;
      *param_5 = *param_5 + -1;
      puVar9 = (undefined4 *)((longlong)puVar9 + 2);
    }
    if (puVar17[-4] == 0xdddd) {
      *(undefined8 *)(puVar19 + -8) = 0x1801ef262;
      FUN_1801f42e0();
    }
LAB_1801ef264:
    *(undefined **)(puVar19 + -8) = &UNK_1801ef270;
  }
LAB_1801ef28e:
  puVar19 = puVar5;
  uVar2 = local_60;
  uVar10 = *puVar21;
  do {
    if ((uVar10 == 0) || (uVar12 = 0, *param_5 == 0)) goto LAB_1801ef264;
    uVar16 = 0;
    uVar15 = 0;
    uVar8 = uVar12;
    puVar20 = puVar21;
    do {
      puVar20 = puVar20 + 1;
      iVar7 = (int)uVar8;
      uVar11 = iVar7 + 1;
      uVar8 = (ulonglong)uVar11;
      uVar12 = uVar12 + 1;
    } while (*puVar20 == *puVar21);
    uVar10 = *puVar21;
    iVar13 = 100;
    uVar22 = 1;
    if (uVar10 < 0x65) {
      if (uVar10 == 100) {
        if ((uVar11 != 1) && (uVar22 = uVar15, uVar11 != 2)) {
          if (uVar11 == 3) {
            iVar13 = 0x61;
          }
          else {
            if (uVar11 != 4) goto LAB_1801ef4f6;
            iVar13 = iVar7 + 0x3e;
          }
        }
        goto LAB_1801ef514;
      }
      if (uVar10 != 0x27) {
        if (uVar10 == 0x41) {
LAB_1801ef305:
          *(undefined8 *)(puVar19 + -8) = 0x1801ef314;
          iVar7 = FUN_1801fb930(puVar21,L"am/pm");
          if (iVar7 == 0) {
            puVar20 = puVar21 + 5;
          }
          else {
            *(undefined8 *)(puVar19 + -8) = 0x1801ef37f;
            iVar7 = FUN_1801fb930(puVar21,&DAT_180247c60);
            if (iVar7 == 0) {
              puVar20 = puVar21 + 3;
            }
          }
          iVar13 = 0x70;
          uVar22 = uVar15;
        }
        else {
          iVar13 = 0x48;
          if (uVar10 == 0x48) {
            if ((uVar11 != 1) && (uVar22 = uVar15, uVar11 != 2)) goto LAB_1801ef4f6;
          }
          else {
            if (uVar10 != 0x4d) {
              if (uVar10 != 0x61) goto LAB_1801ef4f6;
              goto LAB_1801ef305;
            }
            if ((uVar11 == 1) || (uVar22 = uVar16, uVar11 == 2)) {
              iVar13 = 0x6d;
            }
            else if (uVar11 == 3) {
              iVar13 = 0x62;
              uVar22 = uVar15;
            }
            else {
              if (uVar11 != 4) goto LAB_1801ef4f6;
              iVar13 = iVar7 + 0x3f;
              uVar22 = uVar15;
            }
          }
        }
        goto LAB_1801ef514;
      }
      if ((uVar11 & 1) == 0) {
        puVar20 = puVar21 + (int)uVar11;
      }
      else {
        puVar20 = puVar21 + uVar12;
        uVar10 = *puVar20;
        if (uVar10 == 0) goto LAB_1801ef264;
        do {
          if ((*param_5 == 0) || (puVar20 = puVar20 + 1, uVar10 == 0x27)) break;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          uVar10 = *puVar20;
        } while (uVar10 != 0);
      }
    }
    else {
      if (uVar10 == 0x68) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_1801ef4f6;
        iVar13 = 0x49;
      }
      else if (uVar10 == 0x6d) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_1801ef4f6;
        iVar13 = 0x4d;
      }
      else if (uVar10 == 0x73) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_1801ef4f6;
        iVar13 = 0x53;
      }
      else {
        if (uVar10 == 0x74) {
          if (*(int *)(local_68 + 4) < 0xc) {
            psVar14 = *(short **)(param_6 + 0x290);
          }
          else {
            psVar14 = *(short **)(param_6 + 0x298);
          }
          if ((uVar11 == 1) && (*param_5 != 0)) {
            *(short *)*param_4 = *psVar14;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
          }
          else {
            while ((sVar1 = *psVar14, sVar1 != 0 && (*param_5 != 0))) {
              psVar14 = psVar14 + 1;
              *(short *)*param_4 = sVar1;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
            }
          }
          goto LAB_1801ef53f;
        }
        if (uVar10 != 0x79) {
LAB_1801ef4f6:
          puVar20 = puVar21 + 1;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          goto LAB_1801ef53f;
        }
        if (uVar11 == 2) {
          iVar13 = 0x79;
          uVar22 = uVar15;
        }
        else {
          if (uVar11 != 4) goto LAB_1801ef4f6;
          iVar13 = iVar7 + 0x56;
          uVar22 = uVar15;
        }
      }
LAB_1801ef514:
      puVar4 = local_68;
      puVar19[0x30] = uVar22;
      *(longlong *)(puVar19 + 0x28) = param_6;
      *(longlong **)(puVar19 + 0x20) = param_5;
      *(undefined8 *)(puVar19 + -8) = 0x1801ef531;
      cVar6 = FUN_1801ee034(uVar2,iVar13,puVar4,param_4);
      if (cVar6 == '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x1801ef557;
        puVar9 = (undefined4 *)FUN_1801e6ae4();
        *puVar9 = 0x16;
        goto LAB_1801ef264;
      }
    }
LAB_1801ef53f:
    uVar10 = *puVar20;
    puVar21 = puVar20;
  } while( true );
}



ulonglong FUN_1801ef564(void)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong local_48;
  longlong local_40;
  char local_30;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,(__crt_locale_pointers *)0x0);
  uVar3 = 0;
  lVar5 = 0x2c0;
  plVar1 = *(longlong **)(local_40 + 0x120);
  uVar7 = uVar3;
  do {
    uVar6 = 0;
    iVar9 = (int)uVar7;
    if (iVar9 == 1) {
      uVar3 = _malloc_base(lVar5);
      if (uVar3 == 0) break;
      FUN_180207610(uVar3,0,lVar5);
      lVar5 = 0x2c0;
    }
    lVar11 = uVar3 - (longlong)plVar1;
    plVar10 = plVar1;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)(lVar11 + (longlong)plVar10) = uVar3 + lVar5;
        iVar2 = FUN_1801f2250();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar6 < 7);
    uVar7 = 0;
    plVar10 = plVar1 + 7;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_1801f2250();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 7);
    uVar7 = 0;
    plVar10 = plVar1 + 0xe;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_1801f2250();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 0xc);
    uVar7 = 0;
    plVar10 = plVar1 + 0x1a;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_1801f2250();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 0xc);
    uVar7 = 0;
    plVar10 = plVar1 + 0x26;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_1801f2250();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 2);
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x140) = uVar3 + lVar5;
      iVar2 = FUN_1801f2250();
      if (iVar2 != 0) goto LAB_1801efc24;
    }
    uVar7 = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(plVar1[0x28] + lVar11) != '\0');
    lVar11 = lVar5 + 1 + lVar11;
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x148) = uVar3 + lVar11;
      iVar2 = FUN_1801f2250();
      if (iVar2 != 0) goto LAB_1801efc24;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)(plVar1[0x29] + lVar5) != '\0');
    lVar5 = lVar11 + 1 + lVar5;
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x150) = uVar3 + lVar5;
      iVar2 = FUN_1801f2250();
      if (iVar2 != 0) goto LAB_1801efc24;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(plVar1[0x2a] + lVar11) != '\0');
    uVar6 = lVar5 + 1 + lVar11;
    if (iVar9 == 1) {
      *(int *)(uVar3 + 0x158) = (int)plVar1[0x2b];
      *(undefined4 *)(uVar3 + 0x15c) = 0;
    }
    plVar10 = plVar1 + 0x2c;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) = uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_1801fb810();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      uVar8 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 7);
    plVar10 = plVar1 + 0x33;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) = uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_1801fb810();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      uVar7 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar8 < 7);
    plVar10 = plVar1 + 0x3a;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) = uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_1801fb810();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      uVar8 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 0xc);
    plVar10 = plVar1 + 0x46;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) = uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_1801fb810();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      uVar7 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar8 < 0xc);
    plVar10 = plVar1 + 0x52;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) = uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_1801fb810();
        if (iVar2 != 0) goto LAB_1801efc24;
      }
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 2);
    for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2a0) = uVar3 + (uVar6 & 0xfffffffffffffffe);
      iVar2 = FUN_1801fb810();
      if (iVar2 != 0) goto LAB_1801efc24;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x54] + lVar5 * 2) != 0);
    for (uVar7 = uVar6 + lVar5 * 2 + 2; (uVar7 & 1) != 0; uVar7 = uVar7 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2a8) = uVar3 + (uVar7 & 0xfffffffffffffffe);
      iVar2 = FUN_1801fb810();
      if (iVar2 != 0) goto LAB_1801efc24;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x55] + lVar5 * 2) != 0);
    for (uVar7 = uVar7 + lVar5 * 2 + 2; (uVar7 & 1) != 0; uVar7 = uVar7 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2b0) = uVar3 + (uVar7 & 0xfffffffffffffffe);
      iVar2 = FUN_1801fb810();
      if (iVar2 != 0) goto LAB_1801efc24;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x56] + lVar5 * 2) != 0);
    for (uVar6 = uVar7 + lVar5 * 2 + 2; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2b8) = uVar3 + (uVar6 & 0xfffffffffffffffe);
      iVar2 = FUN_1801fb810();
      if (iVar2 != 0) {
LAB_1801efc24:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x57] + lVar5 * 2) != 0);
    uVar7 = (ulonglong)(iVar9 + 1U);
    lVar5 = uVar6 + lVar5 * 2 + 2;
    uVar6 = uVar3;
  } while ((int)(iVar9 + 1U) < 2);
  if (local_30 != '\0') {
    *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
  }
  return uVar6;
}



void FUN_1801efc3c(void)

{
  FUN_1801efc5c();
  return;
}



longlong FUN_1801efc5c(short *param_1,longlong param_2,short *param_3,longlong param_4,longlong param_5,
                      __crt_locale_pointers *param_6)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_res8;
  short *local_58;
  longlong local_50;
  longlong local_48 [2];
  char local_38;

  lVar5 = 0;
  if (((param_1 == (short *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (short *)0x0)) {
    puVar4 = (undefined4 *)FUN_1801e6ae4();
    *puVar4 = 0x16;
    FUN_1801e1344();
    lVar5 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_6);
    local_res8 = param_2;
    local_58 = param_1;
    if (param_5 == 0) {
      param_5 = *(longlong *)(local_48[0] + 0x120);
    }
    do {
      sVar1 = *param_3;
      if (sVar1 == 0) break;
      if (sVar1 == 0x25) {
        if (param_4 == 0) goto LAB_1801efd8f;
        sVar1 = param_3[1];
        bVar6 = sVar1 == 0x23;
        psVar2 = param_3 + 1;
        if (bVar6) {
          sVar1 = param_3[2];
          psVar2 = param_3 + 2;
        }
        param_3 = psVar2;
        if ((sVar1 == 0x45) || (sVar1 == 0x4f)) {
          param_3 = param_3 + 1;
          sVar1 = *param_3;
        }
        cVar3 = FUN_1801ee034(local_48,sVar1,param_4,&local_58,&local_res8,param_5,bVar6);
        if (cVar3 == '\0') {
          if (local_res8 == 0) goto LAB_1801efdcf;
          *param_1 = 0;
          goto LAB_1801efd8f;
        }
      }
      else {
        *local_58 = sVar1;
        local_58 = local_58 + 1;
        local_res8 = local_res8 + -1;
      }
      param_3 = param_3 + 1;
    } while (local_res8 != 0);
    if (local_res8 == 0) {
LAB_1801efdcf:
      *param_1 = 0;
      if (local_res8 == 0) {
        puVar4 = (undefined4 *)FUN_1801e6ae4();
        *puVar4 = 0x22;
      }
      else {
LAB_1801efd8f:
        puVar4 = (undefined4 *)FUN_1801e6ae4();
        *puVar4 = 0x16;
        FUN_1801e1344();
      }
    }
    else {
      *local_58 = 0;
      lVar5 = param_2 - local_res8;
    }
    if (local_38 != '\0') {
      *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
    }
  }
  return lVar5;
}



uint FUN_1801efde8(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;

  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_1801f42e0(*(undefined8 *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_1801fc2f4(param_4,9,param_1,0xffffffff,0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_1801f42e0(*(undefined8 *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          lVar3 = _malloc_base(uVar7 * 2);
          *(longlong *)(param_2 + 0x10) = lVar3;
          uVar6 = -(ulonglong)(lVar3 != 0) & uVar7;
          uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
          if (lVar3 != 0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = lVar3 != 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_1801fc2f4(param_4,9,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),(int)uVar6);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_1801e6a74(DVar2);
      puVar4 = (uint *)FUN_1801e6ae4();
      return *puVar4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_1801f42e0(*(undefined8 *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      lVar3 = _malloc_base(2);
      *(longlong *)(param_2 + 0x10) = lVar3;
      bVar8 = lVar3 != 0;
      uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



undefined4 FUN_1801eff88(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *puVar3;

  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_1801fc384(param_4,0,param_1,0xffffffff,0,0,0,0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_1801effdc;
        }
        iVar1 = FUN_1801fc384(param_4,0,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),0,0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_1801e6a74(DVar2);
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      return *puVar3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_1801effdc:
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      *puVar3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}


