#include "../include/aerialclient_types.h"


ulonglong thunk_FUN_1801ef564(void)

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
  longlong lStack_48;
  longlong lStack_40;
  char cStack_30;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&lStack_48,(__crt_locale_pointers *)0x0);
  uVar3 = 0;
  lVar5 = 0x2c0;
  plVar1 = *(longlong **)(lStack_40 + 0x120);
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
  if (cStack_30 != '\0') {
    *(uint *)(lStack_48 + 0x3a8) = *(uint *)(lStack_48 + 0x3a8) & 0xfffffffd;
  }
  return uVar6;
}



void FUN_1801f00ac(void)

{
  FUN_1801f00cc();
  return;
}



undefined8
FUN_1801f00cc(undefined1 *param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5,
             __crt_locale_pointers *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong local_a0;
  char local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_60;
  undefined1 *local_58;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_a8,param_6);
  uVar7 = 0;
  uVar1 = *(undefined4 *)(local_a0 + 0x18);
  if ((((param_1 == (undefined1 *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == 0)) || (param_4 == 0)) {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x16;
    FUN_1801e1344();
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = '\0';
    iVar2 = FUN_1801efde8(param_3,&local_88,local_res8,uVar1);
    if (iVar2 == 0) {
      lVar4 = _malloc_base(param_2 * 2);
      uVar6 = uVar7;
      if ((lVar4 != 0) && (lVar5 = FUN_1801efc5c(lVar4,param_2,local_78,param_4,param_5,param_6), lVar5 != 0)) {
        local_38 = 0;
        local_30 = 0;
        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_1;
        local_40 = param_2;
        iVar2 = FUN_1801eff88(lVar4,&local_58,local_res8,uVar1);
        uVar6 = local_38;
        if (iVar2 != 0) {
          uVar6 = uVar7;
        }
      }
      FUN_1801f42e0(lVar4);
      uVar7 = uVar6;
    }
    if (local_60 != '\0') {
      FUN_1801f42e0(local_78);
    }
  }
  if (local_90 != '\0') {
    *(uint *)(local_a8 + 0x3a8) = *(uint *)(local_a8 + 0x3a8) & 0xfffffffd;
  }
  return uVar7;
}



bool FUN_1801f0240(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;

  pcVar2 = (code *)FUN_1801f0290();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



void FUN_1801f0280(undefined8 param_1)

{
  DAT_1802a98c0 = param_1;
  return;
}



ulonglong FUN_1801f0290(void)

{
  byte bVar1;
  ulonglong uVar2;

  __acrt_lock(0);
  bVar1 = (byte)DAT_1802a0400 & 0x3f;
  uVar2 = DAT_1802a98c0 ^ DAT_1802a0400;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;

  __acrt_lock(0);
  bVar2 = (byte)DAT_1802a0400 & 0x3f;
  uVar3 = DAT_1802a0400 ^ DAT_1802a98c0;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_1802a98c0 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1802a0400;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}



LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;

  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_1802aa2f0,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_180201f40();
    } while ((iVar1 != 0) && (iVar1 = FUN_1801f0240(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



undefined8 _seh_filter_dll(int param_1)

{
  undefined8 uVar1;

  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_1801f035c(0xe06d7363);
  return uVar1;
}



undefined4 FUN_1801f035c(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;

  puVar5 = (undefined8 *)FUN_1801f2894();
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)*puVar5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = puVar5[1];
          puVar5[1] = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(puVar5 + 2);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_1801f049a:
              *(undefined4 *)(puVar5 + 2) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_1801f049a;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_1801f049a;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_1801f049a;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_1801f049a;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_1801f049a;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_1801f049a;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_1801f049a;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_1801f049a;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(puVar5 + 2) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          puVar5[1] = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}



void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  FUN_1801f0500(param_3);
  __acrt_unlock(*param_4);
  return;
}



void FUN_1801f0500(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;

  if (DAT_1802a98d8 != '\0') {
    return;
  }
  LOCK();
  DAT_1802a98c8 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_1802a98d0 != DAT_1802a0400) {
      bVar1 = (byte)DAT_1802a0400 & 0x3f;
      (*(code *)((DAT_1802a0400 ^ DAT_1802a98d0) >> bVar1 | (DAT_1802a0400 ^ DAT_1802a98d0) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_1802a9a08;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_1801f056f;
    puVar2 = &DAT_1802a9a20;
  }
  FUN_1801f132c(puVar2);
LAB_1801f056f:
  if (*(int *)*param_1 == 0) {
    FUN_1801f158c(&DAT_1802097a0,&DAT_1802097c0);
  }
  FUN_1801f158c(&DAT_1802097c8,&DAT_1802097d0);
  if (*(int *)param_1[1] == 0) {
    DAT_1802a98d8 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



void FUN_1801f05c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  HMODULE pHVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;

  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar4 != (HMODULE)0x0) && ((short)pHVar4->unused == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)&pHVar4->unused + (longlong)pHVar4[0xf].unused), *piVar5 == 0x4550)) &&
       ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_1801f06d4(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34 = 2;
  local_30[0] = 2;
  operator()<>(local_38,local_30,&local_20,&local_34);
  if (local_res18[0] == 0) {
    iVar3 = FUN_1801fc498();
    if (iVar3 == 1) {
      bVar6 = false;
    }
    else {
      cVar2 = FUN_1801fc464();
      bVar6 = cVar2 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_1801f06a4(param_1,bVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



void FUN_1801f06a4(UINT param_1,char param_2)

{
  HANDLE hProcess;

  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_1801f06d4(param_1);
  ExitProcess(param_1);
}



void FUN_1801f06d4(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];

  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) && (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*pFVar2)((ulonglong)param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}



void FUN_1801f0738(undefined8 param_1)

{
  DAT_1802a98d0 = param_1;
  return;
}



void FUN_1801f0740(void)

{
  FUN_1801f05c0(0,0,1);
  return;
}



void FUN_1801f0750(undefined8 param_1)

{
  FUN_1801f05c0(param_1,2);
  return;
}



undefined4 FUN_1801f075c(void)

{
  return DAT_1802a98c8;
}



void FUN_1801f0764(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,longlong *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;

  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  do {
    if (*param_1 == '\"') {
      bVar1 = !bVar1;
      cVar2 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar2 = *param_1;
      pcVar6 = param_1 + 1;
      iVar4 = FUN_1801fda94((int)cVar2);
      if (iVar4 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar2 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_1801f0816;
      }
    }
    param_1 = pcVar6;
  } while ((bVar1) || ((cVar2 != ' ' && (cVar2 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_1801f0816:
  bVar1 = false;
  while (cVar2 = *pcVar6, cVar2 != '\0') {
    while ((cVar2 == ' ' || (cVar2 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
    if (cVar2 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar5 = true;
      uVar3 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar3 = uVar3 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar3 & 1) == 0) {
          if ((bVar1) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar5 = false;
            bVar1 = !bVar1;
          }
        }
        uVar3 = uVar3 >> 1;
      }
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar2 = *pcVar6;
      if ((cVar2 == '\0') || ((!bVar1 && ((cVar2 == ' ' || (cVar2 == '\t')))))) break;
      if (bVar5) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar2;
          param_3 = param_3 + 1;
        }
        iVar4 = FUN_1801fda94((int)*pcVar6);
        if (iVar4 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



undefined8 __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;

  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      uVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_1801f42e0(0);
      return uVar2;
    }
  }
  return 0;
}



int FUN_1801f0984(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  longlong *local_res10;
  longlong local_res18;
  undefined8 local_res20;

  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    puVar4 = (undefined4 *)FUN_1801e6ae4();
    *puVar4 = 0x16;
    FUN_1801e1344();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_1801fcdb0(0,&DAT_1802a98e0,0x104);
  _DAT_1802aa2c0 = &DAT_1802a98e0;
  if ((DAT_1802aa2e0 == (char *)0x0) || (pcVar6 = DAT_1802aa2e0, *DAT_1802aa2e0 == '\0')) {
    pcVar6 = &DAT_1802a98e0;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_1801f0764(pcVar6,0,0,&local_res18,&local_res20);
  lVar1 = local_res18;
  plVar5 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar5 == (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_1801e6ae4();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_1801f0764(pcVar6,plVar5,plVar5 + lVar1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar3 = thunk_FUN_1801fc688(plVar5,&local_res10);
      plVar2 = local_res10;
      if (iVar3 != 0) {
        FUN_1801f42e0(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_1801f42e0(plVar5);
        return iVar3;
      }
      _DAT_1802aa2c8 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_1802aa2c8 = _DAT_1802aa2c8 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_1802aa2d0 = plVar2;
      FUN_1801f42e0(0);
      local_res10 = (longlong *)0x0;
      goto LAB_1801f0ae9;
    }
    _DAT_1802aa2c8 = (int)local_res18 + -1;
    DAT_1802aa2d0 = plVar5;
  }
  plVar5 = (longlong *)0x0;
LAB_1801f0ae9:
  FUN_1801f42e0(plVar5);
  return iVar7;
}



undefined8 FUN_1801f0b04(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;

  uVar3 = 0;
  if (DAT_1802a99e8 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_1801fdad0();
    if (lVar2 == 0) {
      FUN_1801f42e0(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_1801f0be8(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_1802a99e8;
        lVar1 = DAT_1802a9a00;
      }
      DAT_1802a9a00 = lVar1;
      DAT_1802a99e8 = lVar4;
      FUN_1801f42e0(0);
      FUN_1801f42e0(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 FUN_1801f0b78(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;

  uVar3 = 0;
  if (DAT_1802a99f0 == 0) {
    lVar2 = FUN_1801fdbe0();
    if (lVar2 == 0) {
      FUN_1801f42e0(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_1801f0cfc(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_1802a99f0;
        lVar1 = DAT_1802a99f8;
      }
      DAT_1802a99f8 = lVar1;
      DAT_1802a99f0 = lVar4;
      FUN_1801f42e0(0);
      FUN_1801f42e0(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



longlong * FUN_1801f0be8(char *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;

  cVar4 = *param_1;
  lVar5 = 0;
  pcVar7 = param_1;
  while (cVar4 != '\0') {
    lVar6 = lVar5 + 1;
    if (cVar4 == '=') {
      lVar6 = lVar5;
    }
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (pcVar7[lVar5] != '\0');
    pcVar7 = pcVar7 + lVar2 + 2;
    lVar5 = lVar6;
    cVar4 = *pcVar7;
  }
  plVar3 = (longlong *)_calloc_base(lVar5 + 1,8);
  plVar8 = plVar3;
  if (plVar3 == (longlong *)0x0) {
LAB_1801f0c4b:
    FUN_1801f42e0(0);
    plVar3 = (longlong *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + lVar6) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (param_1[lVar5] != '\0');
      lVar6 = lVar6 + 2;
      if (*param_1 != '=') {
        lVar5 = _calloc_base(lVar6,1);
        if (lVar5 == 0) {
          free_environment<>(plVar3);
          FUN_1801f42e0(0);
          goto LAB_1801f0c4b;
        }
        iVar1 = FUN_1801f2250();
        if (iVar1 != 0) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        FUN_1801f42e0();
      }
    }
    FUN_1801f42e0(0);
  }
  return plVar3;
}



longlong * FUN_1801f0cfc(short *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  longlong *plVar8;

  sVar4 = *param_1;
  lVar5 = 0;
  psVar7 = param_1;
  while (sVar4 != 0) {
    lVar6 = lVar5 + 1;
    if (sVar4 == 0x3d) {
      lVar6 = lVar5;
    }
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (psVar7[lVar5] != 0);
    psVar7 = psVar7 + lVar2 + 2;
    lVar5 = lVar6;
    sVar4 = *psVar7;
  }
  plVar3 = (longlong *)_calloc_base(lVar5 + 1,8);
  plVar8 = plVar3;
  if (plVar3 == (longlong *)0x0) {
LAB_1801f0d67:
    FUN_1801f42e0(0);
    plVar3 = (longlong *)0x0;
  }
  else {
    for (; *param_1 != 0; param_1 = param_1 + lVar6) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (param_1[lVar5] != 0);
      lVar6 = lVar6 + 2;
      if (*param_1 != 0x3d) {
        lVar5 = _calloc_base(lVar6,2);
        if (lVar5 == 0) {
          free_environment<>(plVar3);
          FUN_1801f42e0(0);
          goto LAB_1801f0d67;
        }
        iVar1 = FUN_1801fb810();
        if (iVar1 != 0) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        FUN_1801f42e0();
      }
    }
    FUN_1801f42e0(0);
  }
  return plVar3;
}



void free_environment<>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;

  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    plVar2 = param_1;
    while (lVar1 != 0) {
      FUN_1801f42e0(lVar1);
      plVar2 = plVar2 + 1;
      lVar1 = *plVar2;
    }
    FUN_1801f42e0(param_1);
  }
  return;
}



undefined8 FUN_1801f0e60(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;

  plVar4 = DAT_1802a99e8;
  if (DAT_1802a99e8 == (longlong *)0x0) {
LAB_1801f0e83:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_1801fc2f4(0,0,*plVar4,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_1801f0e83;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_1801f0f10:
        FUN_1801f42e0(lVar3);
        goto LAB_1801f0e83;
      }
      iVar1 = FUN_1801fc2f4(0,0,*plVar4,0xffffffff,lVar3,iVar1);
      if (iVar1 == 0) goto LAB_1801f0f10;
      thunk_FUN_1801fdc7c();
      FUN_1801f42e0();
    }
    uVar2 = 0;
  }
  return uVar2;
}



void uninitialize_environment_internal<>(longlong *param_1)

{
  if (*param_1 != DAT_1802a9a00) {
    free_environment<>();
  }
  return;
}



void uninitialize_environment_internal<>(longlong *param_1)

{
  if (*param_1 != DAT_1802a99f8) {
    free_environment<>();
  }
  return;
}



longlong FUN_1801f0f54(void)

{
  int iVar1;
  longlong lVar2;

  lVar2 = DAT_1802a99f0;
  if ((DAT_1802a99f0 == 0) &&
     ((DAT_1802a99e8 == 0 ||
      ((iVar1 = FUN_1801f0b78(), lVar2 = DAT_1802a99f0, iVar1 != 0 &&
       (iVar1 = FUN_1801f0e60(), lVar2 = DAT_1802a99f0, iVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}



void FUN_1801f0f90(void)

{
  uninitialize_environment_internal<>(&DAT_1802a99e8);
  uninitialize_environment_internal<>(&DAT_1802a99f0);
  free_environment<>(DAT_1802a9a00);
  free_environment<>(DAT_1802a99f8);
  return;
}



undefined8 thunk_FUN_1801f0b04(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;

  uVar3 = 0;
  if (DAT_1802a99e8 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_1801fdad0();
    if (lVar2 == 0) {
      FUN_1801f42e0(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_1801f0be8(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_1802a99e8;
        lVar1 = DAT_1802a9a00;
      }
      DAT_1802a9a00 = lVar1;
      DAT_1802a99e8 = lVar4;
      FUN_1801f42e0(0);
      FUN_1801f42e0(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;

  __acrt_lock(*param_2);
  uVar1 = FUN_1801f1054(param_3);
  __acrt_unlock(*param_4);
  return uVar1;
}



undefined4 operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;

  __acrt_lock(*param_2);
  uVar1 = FUN_1801f1204(param_3);
  __acrt_unlock(*param_4);
  return uVar1;
}



undefined8 FUN_1801f1054(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;

  puVar3 = *(ulonglong **)*param_1;
  if (puVar3 == (ulonglong *)0x0) {
LAB_1801f11e6:
    uVar1 = 0xffffffff;
  }
  else {
    bVar2 = (byte)DAT_1802a0400 & 0x3f;
    uVar5 = (DAT_1802a0400 ^ *puVar3) >> bVar2 | (DAT_1802a0400 ^ *puVar3) << 0x40 - bVar2;
    puVar9 = (ulonglong *)((DAT_1802a0400 ^ puVar3[1]) >> bVar2 | (DAT_1802a0400 ^ puVar3[1]) << 0x40 - bVar2);
    puVar3 = (ulonglong *)((DAT_1802a0400 ^ puVar3[2]) >> bVar2 | (DAT_1802a0400 ^ puVar3[2]) << 0x40 - bVar2);
    if (puVar9 == puVar3) {
      uVar4 = (longlong)((longlong)puVar3 - uVar5) >> 3;
      uVar6 = uVar4;
      if (0x200 < uVar4) {
        uVar6 = 0x200;
      }
      uVar7 = uVar6 + uVar4;
      if (uVar6 + uVar4 == 0) {
        uVar7 = 0x20;
      }
      if (uVar7 < uVar4) {
LAB_1801f10f6:
        uVar7 = uVar4 + 4;
        uVar6 = _recalloc_base(uVar5,uVar7,8);
        FUN_1801f42e0(0);
        if (uVar6 == 0) goto LAB_1801f11e6;
      }
      else {
        uVar6 = _recalloc_base(uVar5,uVar7,8);
        FUN_1801f42e0(0);
        if (uVar6 == 0) goto LAB_1801f10f6;
      }
      uVar5 = uVar6;
      uVar6 = DAT_1802a0400;
      puVar9 = (ulonglong *)(uVar5 + uVar4 * 8);
      puVar3 = (ulonglong *)(uVar5 + uVar7 * 8);
      uVar4 = (ulonglong)((longlong)puVar3 + (7 - (longlong)puVar9)) >> 3;
      if (puVar3 < puVar9) {
        uVar4 = 0;
      }
      puVar8 = puVar9;
      if (uVar4 != 0) {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = uVar6;
          puVar8 = puVar8 + 1;
        }
      }
    }
    bVar2 = -((byte)DAT_1802a0400 & 0x3f) & 0x3f;
    *puVar9 = (*(ulonglong *)param_1[1] >> bVar2 | *(ulonglong *)param_1[1] << 0x40 - bVar2) ^ DAT_1802a0400;
    bVar2 = -((byte)DAT_1802a0400 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 = (uVar5 >> bVar2 | uVar5 << 0x40 - bVar2) ^ DAT_1802a0400;
    bVar2 = -((byte)DAT_1802a0400 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar9 + 1) >> bVar2 | (longlong)(puVar9 + 1) << 0x40 - bVar2) ^ DAT_1802a0400;
    bVar2 = 0x40 - ((byte)DAT_1802a0400 & 0x3f) & 0x3f;
    uVar1 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar3 >> bVar2 | (longlong)puVar3 << 0x40 - bVar2) ^ DAT_1802a0400;
  }
  return uVar1;
}



undefined8 FUN_1801f1204(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;

  uVar1 = DAT_1802a0400;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_1802a0400 & 0x3f;
    puVar10 = (ulonglong *)((DAT_1802a0400 ^ *puVar8) >> bVar5 | (DAT_1802a0400 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)((DAT_1802a0400 ^ puVar8[1]) >> bVar5 | (DAT_1802a0400 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_1802a0400 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_1802a0400;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_1802a0400 & 0x3f;
          uVar11 = DAT_1802a0400 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_1802a0400 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_1802a0400;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_1801f42e0(puVar10);
        uVar3 = DAT_1802a0400;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_1801f131c(undefined8 param_1)

{
  _register_onexit_function(&DAT_1802a9a08,param_1);
  return;
}



void FUN_1801f132c(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;

  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}



undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;

  lVar1 = DAT_1802a0400;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_1802a0400;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}



void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;

  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}



undefined1 FUN_1801f13f4(void)

{
  _initialize_onexit_table(&DAT_1802a9a08);
  _initialize_onexit_table(&DAT_1802a9a20);
  return 1;
}



undefined1 FUN_1801f1418(void)

{
  FUN_1801f0f90();
  return 1;
}



undefined1 FUN_1801f1428(void)

{
  undefined8 uVar1;

  uVar1 = DAT_1802a0400;
  FUN_1801e11e8(DAT_1802a0400);
  FUN_1801f0280(uVar1);
  FUN_1801fe32c(uVar1);
  FUN_1801fe5d0(uVar1);
  FUN_1801f0738(uVar1);
  return 1;
}



undefined8 FUN_1801f1470(void)

{
  int iVar1;

  LOCK();
  iVar1 = *DAT_1802aa2b0;
  *DAT_1802aa2b0 = *DAT_1802aa2b0 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (DAT_1802aa2b0 != (int *)&DAT_1802a0b90)) {
    FUN_1801f42e0();
    DAT_1802aa2b0 = (int *)&DAT_1802a0b90;
  }
  return 1;
}



undefined1 FUN_1801f14b0(void)

{
  FUN_1801f42e0(DAT_1802a9cb0);
  DAT_1802a9cb0 = 0;
  FUN_1801f42e0(DAT_1802a9cb8);
  DAT_1802a9cb8 = 0;
  FUN_1801f42e0(DAT_1802aa2d0);
  DAT_1802aa2d0 = 0;
  FUN_1801f42e0(DAT_1802aa2d8);
  DAT_1802aa2d8 = 0;
  return 1;
}



void FUN_1801f150c(void)

{
  FUN_1801fe1f8(&PTR_LAB_180247e30,&DAT_180247f30);
  return;
}



bool FUN_1801f1520(void)

{
  longlong lVar1;

  lVar1 = FUN_1801f2894();
  return lVar1 != 0;
}



undefined1 FUN_1801f1534(void)

{
  FUN_1801f27e4();
  return 1;
}



undefined4 __acrt_uninitialize(bool param_1)

{
  undefined4 uVar1;

  if (param_1 != false) {
    if (DAT_1802a98b0 != 0) {
      common_flush_all(param_1);
    }
    return 1;
  }
  uVar1 = FUN_1801fe278(&PTR_LAB_180247e30,&DAT_180247f30);
  return uVar1;
}



undefined1 FUN_1801f157c(void)

{
  FUN_1801f29c4();
  return 1;
}



void FUN_1801f158c(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



undefined8 FUN_1801f15c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;

  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0)) break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}



void FUN_1801f1600(void)

{
  longlong lVar1;

  lVar1 = FUN_1801f2834();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
  abort();
}



undefined8 operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;

  __acrt_lock(*param_2);
  uVar1 = FUN_1801f1660(param_3);
  __acrt_unlock(*param_4);
  return uVar1;
}



wchar_t * FUN_1801f1660(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *_Locale;
  longlong lVar6;

  iVar4 = *(int *)*param_1;
  if (*(longlong *)param_1[1] == 0) {
    pwVar5 = _wsetlocale(iVar4,(wchar_t *)0x0);
  }
  else {
    iVar3 = FUN_1801fe928();
    if ((iVar3 == 0x16) || (iVar3 == 0x22)) {
LAB_1801f18d3:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    _Locale = (wchar_t *)_calloc_base(0,2);
    pwVar5 = (wchar_t *)0x0;
    if (_Locale == (wchar_t *)0x0) goto LAB_1801f16e7;
    iVar3 = FUN_1801fe928();
    if (iVar3 != 0) {
      if ((iVar3 == 0x16) || (pwVar5 = _Locale, iVar3 == 0x22)) goto LAB_1801f18d3;
      goto LAB_1801f16e7;
    }
    pwVar5 = _wsetlocale(iVar4,_Locale);
    FUN_1801f42e0(_Locale);
  }
  if (pwVar5 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  lVar6 = FUN_1801f2834();
  lVar1 = *(longlong *)(lVar6 + 0x90);
  iVar4 = FUN_1801fee24();
  if (iVar4 == 0) {
    pwVar5 = (wchar_t *)_malloc_base();
    if (pwVar5 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    iVar4 = FUN_1801fee24();
    if (iVar4 == 0) {
      piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1);
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FUN_1801f42e0(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = 0;
        }
      }
      if (((DAT_1802a10d0 & *(uint *)(lVar6 + 0x3a8)) == 0) &&
         (piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1), piVar2 != (int *)0x0)) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FUN_1801f42e0(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = 0;
        }
      }
      *(undefined4 *)pwVar5 = *(undefined4 *)(lVar1 + 0x10);
      *(wchar_t **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar1) = pwVar5;
      *(wchar_t **)(((longlong)*(int *)*param_1 + 1) * 0x20 + lVar1) = pwVar5 + 2;
      return pwVar5 + 2;
    }
    if ((iVar4 != 0x16) && (iVar4 != 0x22)) {
LAB_1801f16e7:
      FUN_1801f42e0(pwVar5);
      return (wchar_t *)0x0;
    }
  }
  else if ((iVar4 != 0x16) && (iVar4 != 0x22)) {
    return (wchar_t *)0x0;
  }
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



char * __cdecl setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  int local_res8 [2];
  char *local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  int *local_20;
  char **local_18;

  local_res8[0] = _Category;
  local_res10 = _Locale;
  FUN_1801f6434();
  local_20 = local_res8;
  local_18 = &local_res10;
  local_res20[0] = 4;
  local_28[0] = 4;
  pcVar1 = (char *)operator()<>(local_res18,local_28,&local_20,local_res20);
  return pcVar1;
}



undefined4 __acrt_initialize_locks(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;

  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_1802a9a40 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      __acrt_uninitialize_locks(0);
      return 0;
    }
    DAT_1802a9c98 = DAT_1802a9c98 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < 0xf);
  return 1;
}



void __acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1802a9a40 + (longlong)param_1 * 0x28));
  return;
}



undefined8 __acrt_uninitialize_locks(void)

{
  ulonglong uVar1;

  uVar1 = (ulonglong)DAT_1802a9c98;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1802a9a40 + uVar1 * 0x28));
    DAT_1802a9c98 = DAT_1802a9c98 - 1;
  }
  return 1;
}



void __acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1802a9a40 + (longlong)param_1 * 0x28));
  return;
}



void _lock_locales(void)

{
  FUN_1801f6434();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1802a9ae0);
  return;
}



void FUN_1801f1a20(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1802a9ae0);
  return;
}



UINT __cdecl ___lc_codepage_func(void)

{
  longlong lVar1;
  longlong local_res8 [4];

  lVar1 = FUN_1801f2834();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(UINT *)(local_res8[0] + 0xc);
}



longlong FUN_1801f1a60(void)

{
  longlong lVar1;
  longlong local_res8 [4];

  lVar1 = FUN_1801f2834();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return local_res8[0] + 0x128;
}



undefined4 FUN_1801f1a94(void)

{
  longlong lVar1;
  longlong local_res8 [4];

  lVar1 = FUN_1801f2834();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined4 *)(local_res8[0] + 8);
}



void FUN_1801f1ac4(longlong *param_1)

{
  UINT *pUVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  BYTE *pBVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  UINT *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 *local_68;
  uint local_60;
  longlong *local_58;
  undefined8 local_50;
  _cpinfo local_48;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  puVar14 = (undefined8 *)0x0;
  local_50 = 0;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  if (param_1[0x27] == 0) {
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    param_1[0x20] = 0;
    *param_1 = (longlong)&DAT_180248030;
    param_1[0x22] = (longlong)&DAT_1802482b0;
    param_1[0x23] = (longlong)&DAT_180248430;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
  }
  pUVar1 = (UINT *)((longlong)param_1 + 0xc);
  local_68 = (undefined4 *)0x0;
  local_58 = param_1;
  if ((*pUVar1 != 0) ||
     (local_98 = pUVar1, iVar5 = FUN_1801ff058(&local_58,0,param_1[0x27],0x1004), puVar10 = puVar14, puVar11 = puVar14,
     puVar9 = puVar14, puVar8 = puVar14, iVar5 == 0)) {
    local_68 = (undefined4 *)_calloc_base(1,4);
    FUN_1801f42e0(0);
    puVar8 = (undefined8 *)_calloc_base(0x180,2);
    FUN_1801f42e0(0);
    puVar9 = (undefined8 *)_calloc_base(0x180,1);
    FUN_1801f42e0(0);
    puVar10 = (undefined8 *)_calloc_base(0x180,1);
    FUN_1801f42e0(0);
    puVar11 = (undefined8 *)_calloc_base(0x101,1);
    FUN_1801f42e0(0);
    if ((local_68 != (undefined4 *)0x0) &&
       ((((puVar8 != (undefined8 *)0x0 && (puVar11 != (undefined8 *)0x0)) && (puVar9 != (undefined8 *)0x0)) &&
        (puVar16 = puVar11, puVar10 != (undefined8 *)0x0)))) {
      do {
        *(char *)puVar16 = (char)puVar14;
        uVar6 = (int)puVar14 + 1;
        puVar14 = (undefined8 *)(ulonglong)uVar6;
        puVar16 = (undefined8 *)((longlong)puVar16 + 1);
      } while ((int)uVar6 < 0x100);
      BVar7 = GetCPInfo(*pUVar1,&local_48);
      if ((BVar7 != 0) && (local_48.MaxCharSize < 6)) {
        local_60 = (uint)(ushort)local_48.MaxCharSize;
        if (1 < (ushort)local_48.MaxCharSize) {
          if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
            FUN_180207610(puVar11 + 0x10,0x20,0x80);
          }
          else {
            pBVar15 = local_48.LeadByte;
            bVar2 = local_48.LeadByte[0];
            while ((bVar2 != 0 && (pBVar15[1] != 0))) {
              uVar6 = (uint)*pBVar15;
              if (*pBVar15 <= pBVar15[1]) {
                do {
                  lVar12 = (longlong)(int)uVar6;
                  uVar6 = uVar6 + 1;
                  *(undefined1 *)(lVar12 + (longlong)puVar11) = 0x20;
                } while ((int)uVar6 <= (int)(uint)pBVar15[1]);
              }
              pBVar15 = pBVar15 + 2;
              bVar2 = *pBVar15;
            }
          }
        }
        local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_90 = (longlong)puVar9 + 0x81;
        local_78 = 0;
        local_88 = 0xff;
        local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
        iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x100,(longlong)puVar11 + 1);
        if (iVar5 != 0) {
          local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
          local_90 = (longlong)puVar10 + 0x81;
          local_78 = 0;
          local_88 = 0xff;
          local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
          iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x200,(longlong)puVar11 + 1);
          if (iVar5 != 0) {
            local_98 = (UINT *)(puVar8 + 0x20);
            local_88 = 0;
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((longlong)param_1 + 0xc));
            iVar5 = FUN_1801ff220(0,1,puVar11,0x100);
            uVar6 = local_60;
            if (iVar5 != 0) {
              *(undefined2 *)((longlong)puVar8 + 0xfe) = 0;
              *(undefined1 *)((longlong)puVar9 + 0x7f) = 0;
              *(undefined1 *)((longlong)puVar10 + 0x7f) = 0;
              *(undefined1 *)(puVar9 + 0x10) = 0;
              *(undefined1 *)(puVar10 + 0x10) = 0;
              if (1 < local_60) {
                if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
                  puVar14 = puVar10 + 0x20;
                  puVar16 = puVar8 + 0x40;
                  iVar5 = 0x80;
                  do {
                    uVar4 = 0;
                    if (iVar5 - 0xc2U < 0x33) {
                      uVar4 = 0x8000;
                    }
                    *(undefined2 *)puVar16 = uVar4;
                    puVar16 = (undefined8 *)((longlong)puVar16 + 2);
                    *(char *)(((longlong)puVar9 - (longlong)puVar10) + (longlong)puVar14) = (char)iVar5;
                    *(char *)puVar14 = (char)iVar5;
                    iVar5 = iVar5 + 1;
                    puVar14 = (undefined8 *)((longlong)puVar14 + 1);
                  } while (iVar5 < 0x100);
                }
                else {
                  pBVar15 = local_48.LeadByte;
                  bVar2 = local_48.LeadByte[0];
                  while ((bVar2 != 0 && (pBVar15[1] != 0))) {
                    uVar13 = (uint)*pBVar15;
                    if (*pBVar15 <= pBVar15[1]) {
                      do {
                        lVar12 = (longlong)(int)uVar13;
                        *(undefined2 *)((longlong)puVar8 + lVar12 * 2 + 0x100) = 0x8000;
                        *(char *)(lVar12 + 0x80 + (longlong)puVar9) = (char)uVar13;
                        *(char *)(lVar12 + 0x80 + (longlong)puVar10) = (char)uVar13;
                        uVar13 = uVar13 + 1;
                      } while ((int)uVar13 <= (int)(uint)pBVar15[1]);
                    }
                    pBVar15 = pBVar15 + 2;
                    bVar2 = *pBVar15;
                  }
                }
              }
              *puVar8 = puVar8[0x40];
              puVar8[1] = puVar8[0x41];
              puVar8[2] = puVar8[0x42];
              puVar8[3] = puVar8[0x43];
              puVar8[4] = puVar8[0x44];
              puVar8[5] = puVar8[0x45];
              puVar8[6] = puVar8[0x46];
              puVar8[7] = puVar8[0x47];
              puVar8[8] = puVar8[0x48];
              puVar8[9] = puVar8[0x49];
              puVar8[10] = puVar8[0x4a];
              puVar8[0xb] = puVar8[0x4b];
              puVar8[0xc] = puVar8[0x4c];
              puVar8[0xd] = puVar8[0x4d];
              puVar8[0xe] = puVar8[0x4e];
              puVar8[0xf] = puVar8[0x4f];
              puVar8[0x10] = puVar8[0x50];
              puVar8[0x11] = puVar8[0x51];
              puVar8[0x12] = puVar8[0x52];
              puVar8[0x13] = puVar8[0x53];
              puVar8[0x14] = puVar8[0x54];
              puVar8[0x15] = puVar8[0x55];
              puVar8[0x16] = puVar8[0x56];
              puVar8[0x17] = puVar8[0x57];
              puVar8[0x18] = puVar8[0x58];
              puVar8[0x19] = puVar8[0x59];
              puVar8[0x1a] = puVar8[0x5a];
              puVar8[0x1b] = puVar8[0x5b];
              puVar8[0x1c] = puVar8[0x5c];
              puVar8[0x1d] = puVar8[0x5d];
              puVar8[0x1e] = puVar8[0x5e];
              *(undefined4 *)(puVar8 + 0x1f) = *(undefined4 *)(puVar8 + 0x5f);
              *(undefined2 *)((longlong)puVar8 + 0xfc) = *(undefined2 *)((longlong)puVar8 + 0x2fc);
              *puVar9 = puVar9[0x20];
              puVar9[1] = puVar9[0x21];
              puVar9[2] = puVar9[0x22];
              puVar9[3] = puVar9[0x23];
              puVar9[4] = puVar9[0x24];
              puVar9[5] = puVar9[0x25];
              puVar9[6] = puVar9[0x26];
              puVar9[7] = puVar9[0x27];
              puVar9[8] = puVar9[0x28];
              puVar9[9] = puVar9[0x29];
              puVar9[10] = puVar9[0x2a];
              puVar9[0xb] = puVar9[0x2b];
              puVar9[0xc] = puVar9[0x2c];
              puVar9[0xd] = puVar9[0x2d];
              puVar9[0xe] = puVar9[0x2e];
              *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x2f);
              *(undefined2 *)((longlong)puVar9 + 0x7c) = *(undefined2 *)((longlong)puVar9 + 0x17c);
              *(undefined1 *)((longlong)puVar9 + 0x7e) = *(undefined1 *)((longlong)puVar9 + 0x17e);
              *puVar10 = puVar10[0x20];
              puVar10[1] = puVar10[0x21];
              puVar10[2] = puVar10[0x22];
              puVar10[3] = puVar10[0x23];
              puVar10[4] = puVar10[0x24];
              puVar10[5] = puVar10[0x25];
              puVar10[6] = puVar10[0x26];
              puVar10[7] = puVar10[0x27];
              puVar10[8] = puVar10[0x28];
              puVar10[9] = puVar10[0x29];
              puVar10[10] = puVar10[0x2a];
              puVar10[0xb] = puVar10[0x2b];
              *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x2c);
              *(undefined4 *)((longlong)puVar10 + 100) = *(undefined4 *)((longlong)puVar10 + 0x164);
              *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x2d);
              *(undefined4 *)((longlong)puVar10 + 0x6c) = *(undefined4 *)((longlong)puVar10 + 0x16c);
              puVar10[0xe] = puVar10[0x2e];
              *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(puVar10 + 0x2f);
              *(undefined2 *)((longlong)puVar10 + 0x7c) = *(undefined2 *)((longlong)puVar10 + 0x17c);
              *(undefined1 *)((longlong)puVar10 + 0x7e) = *(undefined1 *)((longlong)puVar10 + 0x17e);
              piVar3 = (int *)param_1[0x20];
              if (piVar3 != (int *)0x0) {
                LOCK();
                iVar5 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  FUN_1801f42e0(param_1[0x21] + -0xfe);
                  FUN_1801f42e0(param_1[0x22] + -0x80);
                  FUN_1801f42e0(param_1[0x23] + -0x80);
                  FUN_1801f42e0(param_1[0x20]);
                }
              }
              *local_68 = 1;
              param_1[0x20] = (longlong)local_68;
              *param_1 = (longlong)(puVar8 + 0x20);
              param_1[0x21] = (longlong)puVar8 + 0xfe;
              param_1[0x22] = (longlong)(puVar9 + 0x10);
              param_1[0x23] = (longlong)(puVar10 + 0x10);
              *(uint *)(param_1 + 1) = uVar6;
              goto LAB_1801f207f;
            }
          }
        }
      }
    }
  }
  FUN_1801f42e0(local_68);
  FUN_1801f42e0(puVar8);
  FUN_1801f42e0(puVar9);
  FUN_1801f42e0(puVar10);
LAB_1801f207f:
  FUN_1801f42e0(puVar11);
}



undefined8 FUN_1801f2108(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];

  lVar1 = FUN_1801f2834();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *local_res8[0];
}



void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];

  puVar4 = auStack_28;
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_1801fe34c(0x16);
  }
  if ((DAT_1802a06d0 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1801f2183;
    FUN_1801e1078(3,0x40000015);
  }
  *(undefined8 *)(puVar4 + -8) = 0x1801f218d;
  FUN_1801f0750(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



longlong FUN_1801f2190(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;

  if (param_1 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_1 + lVar2 * 2) != 0);
    lVar2 = _malloc_base((lVar3 + 2) * 2);
    if (lVar2 != 0) {
      iVar1 = FUN_1801fb810();
      if (iVar1 == 0) {
        return lVar2;
      }
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return 0;
}



size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;

  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}



undefined8 FUN_1801f2250(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;

  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_1801e6ae4();
      *puVar2 = 0x22;
      FUN_1801e1344();
      return 0x22;
    }
    *param_1 = '\0';
  }
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 0x16;
  FUN_1801e1344();
  return 0x16;
}



undefined4 FUN_1801f22d0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 local_50;
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
  local_50 = 0;
  local_58 = param_1;
  uVar1 = FUN_1801e6b40(local_48,&local_58,10,1);
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



int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2)); _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}



void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}



void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}



void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;

  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_1802a0b90)) {
      FUN_1801f42e0();
    }
  }
  __acrt_unlock(*param_4);
  return;
}



void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;

  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38 = 4;
  local_34 = 4;
  local_28 = &DAT_1802a9ca8;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_180247c90;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_1802a0b90;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,&local_34,&local_18,&local_38);
  return;
}



void FUN_1801f25ac(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_1801f42e0(param_1);
  }
  return;
}



void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;

  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28 = 4;
  local_24 = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_180247c90) {
    FUN_1801f42e0(*(undefined **)param_1);
  }
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x70));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x58));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x60));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x68));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x48));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x50));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x78));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x80));
  FUN_1801f42e0(*(undefined8 *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,&local_24,&local_10,&local_28);
  return;
}



__acrt_ptd * FUN_1801f26c4(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;

  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_1802a06e0,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = (__acrt_ptd *)_calloc_base(1);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_1802a06e0,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_1802a06e0,(PVOID)0x0);
        FUN_1801f42e0(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_1801f42e0(0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_1802a06e0,(PVOID)0x0);
    FUN_1801f42e0(0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}



void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;

  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref();
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_1802a9ca8) && (ppuVar1 != &PTR_DAT_1802a0700)) && (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale();
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref(param_2);
  }
  return;
}



void FUN_1801f27e4(void)

{
  __acrt_ptd *p_Var1;

  if (DAT_1802a06e0 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_1802a06e0);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_1802a06e0,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_1801f42e0(p_Var1);
  }
  return;
}



void FUN_1801f2834(void)

{
  longlong lVar1;

  lVar1 = FUN_1801f2894();
  if (lVar1 != 0) {
    return;
  }
  abort();
}



void FUN_1801f2850(void)

{
  PVOID pvVar1;
  longlong lVar2;

  if (DAT_1802a06e0 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1802a06e0);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      lVar2 = FUN_1801f26c4();
      if (lVar2 == 0) goto LAB_1801f288c;
    }
    return;
  }
LAB_1801f288c:
  abort();
}



PVOID FUN_1801f2894(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  PVOID pvVar2;

  pvVar2 = (PVOID)0x0;
  if (DAT_1802a9c9c == '\0') {
    dwErrCode = GetLastError();
    pvVar1 = pvVar2;
    if (DAT_1802a06e0 != 0xffffffff) {
      pvVar1 = FlsGetValue(DAT_1802a06e0);
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1801f26c4();
    }
    SetLastError(dwErrCode);
  }
  else {
    pvVar1 = pvVar2;
    if (DAT_1802a06e0 != 0xffffffff) {
      pvVar1 = (PVOID)FUN_1801f5f38();
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1801f26c4();
    }
  }
  return pvVar2;
}



PVOID FUN_1801f2924(undefined8 param_1,longlong param_2)

{
  PVOID pvVar1;
  PVOID pvVar2;

  pvVar2 = (PVOID)0x0;
  pvVar1 = pvVar2;
  if (DAT_1802a06e0 != 0xffffffff) {
    pvVar1 = FlsGetValue(DAT_1802a06e0);
  }
  if ((pvVar1 != (PVOID)0xffffffffffffffff) &&
     ((pvVar1 != (PVOID)0x0 || (pvVar1 = (PVOID)FUN_1801f26c4(), pvVar1 != (PVOID)0x0)))) {
    pvVar2 = (PVOID)(param_2 * 0x3c8 + (longlong)pvVar1);
  }
  return pvVar2;
}



undefined4 FUN_1801f2980(void)

{
  longlong lVar1;

  DAT_1802a9c9c = FUN_1801f660c();
  DAT_1802a06e0 = FlsAlloc(FUN_1801f25ac);
  if (DAT_1802a06e0 != 0xffffffff) {
    lVar1 = FUN_1801f2894();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_1801f29c4(0);
  }
  return 0;
}



undefined4 FUN_1801f29c4(void)

{
  if (DAT_1802a06e0 != 0xffffffff) {
    FlsFree(DAT_1802a06e0);
    DAT_1802a06e0 = 0xffffffff;
  }
  return 1;
}



void FUN_1801f29f4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;

  __acrt_lock(*param_2);
  FUN_1801f2f9c(*(undefined8 *)*param_3,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
  lVar3 = FUN_1801f37d8(*(undefined8 *)*param_3,*(undefined4 *)param_3[3],*(undefined8 *)param_3[4]);
  *(longlong *)param_3[2] = lVar3;
  if (lVar3 == 0) {
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    __acrt_free_locale(*(undefined8 *)*param_3);
  }
  else {
    psVar4 = *(short **)param_3[4];
    if (psVar4 != (short *)0x0) {
      lVar3 = (longlong)&DAT_1802a0868 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar3);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        LOCK();
        DAT_1802a9ca0 = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock(*(longlong *)param_3[1] + 0x90,*(undefined8 *)*param_3);
    __acrt_release_locale_ref(*(undefined8 *)*param_3);
    if (((*(byte *)(*(longlong *)param_3[1] + 0x3a8) & 2) == 0) && (((byte)DAT_1802a10d0 & 1) == 0)) {
      _updatetlocinfoEx_nolock(&DAT_1802a9ca8,*(undefined8 *)(*(longlong *)param_3[1] + 0x90));
      PTR_PTR_1802a0598 = (undefined *)DAT_1802a9ca8[0x1f];
      PTR_DAT_1802a06c0 = (undefined *)*DAT_1802a9ca8;
      _DAT_1802a086c = *(undefined4 *)(DAT_1802a9ca8 + 1);
    }
  }
  __acrt_unlock(*param_4);
  return;
}



void FUN_1801f2c5c(longlong param_1)

{
  int iVar1;

  iVar1 = FUN_1802008a0();
  if (iVar1 == 0) {
    iVar1 = FUN_1802008a0();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



longlong FUN_1801f2cd4(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;

  if (((param_1 == 0) || (uVar2 = FUN_1801e1700(param_1,0x55), 0x54 < uVar2)) ||
     (lVar3 = _malloc_base(uVar2 * 2 + 2), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_1802008a0();
    if (iVar1 != 0) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return lVar3;
}



undefined4 FUN_1801f2d58(void)

{
  undefined4 uVar1;

  uVar1 = DAT_1802a9ca0;
  LOCK();
  DAT_1802a9ca0 = 1;
  UNLOCK();
  return uVar1;
}



void __acrt_uninitialize_locale(void)

{
  <lambda_3e16ef9562a7dcce91392c22ab16ea36> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];

  local_res10[0] = 4;
  local_res18[0] = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
            ((__crt_seh_guarded_call<void> *)local_res8,(<lambda_410d79af7f07d98d83a3f525b3859a53> *)local_res18,
             local_res8,(<lambda_38119f0e861e05405d8a144b9b982f0a> *)local_res10);
  return;
}



void FUN_1801f2d94(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;

  iVar1 = FUN_1801fb810();
  if (iVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_1801f34e0(param_1,param_2,2,&DAT_1802488f8,(short *)(param_3 + 0x80));
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_1801f34e0(param_1,param_2,2,&DAT_1802488fc,(short *)(param_3 + 0x100));
    }
    return;
  }
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



undefined8 FUN_1801f2e38(longlong param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;

  FUN_180207610(param_1,0,0x1ca);
  iVar2 = 0;
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      do {
        uVar4 = FUN_1802009f0(param_2,&DAT_1802488f0);
        if (uVar4 == 0) {
          return 0xffffffff;
        }
        sVar1 = param_2[uVar4];
        if (iVar2 == 0) {
          if (0x3f < uVar4) {
            return 0xffffffff;
          }
          iVar3 = FUN_1802008a0();
          if (iVar3 != 0) goto LAB_1801f2f87;
          if (sVar1 != 0x2e) goto LAB_1801f2f3a;
          iVar2 = 1;
        }
        else {
          if (iVar2 == 1) {
            if (0x3f < uVar4) {
              return 0xffffffff;
            }
            if (sVar1 == 0x5f) {
              return 0xffffffff;
            }
          }
          else {
            if (iVar2 != 2) {
              return 0xffffffff;
            }
            if (0xf < uVar4) {
              return 0xffffffff;
            }
            if ((sVar1 != 0) && (sVar1 != 0x2c)) {
              return 0xffffffff;
            }
          }
          iVar3 = FUN_1802008a0();
          if (iVar3 != 0) goto LAB_1801f2f87;
LAB_1801f2f3a:
          if (sVar1 == 0x2c) {
            return 0;
          }
          if (sVar1 == 0) {
            return 0;
          }
        }
        param_2 = param_2 + uVar4 + 1;
        iVar2 = iVar2 + 1;
      } while( true );
    }
    iVar2 = FUN_1802008a0();
    if (iVar2 != 0) {
LAB_1801f2f87:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(undefined2 *)(param_1 + 0x11e) = 0;
  }
  return 0;
}



void FUN_1801f2f9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;

  if (((param_2 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) && (param_1 != param_2)) {
    lVar6 = 2;
    puVar5 = param_1;
    do {
      puVar8 = puVar5;
      puVar7 = param_2;
      uVar4 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar4;
      uVar4 = puVar7[3];
      puVar8[2] = puVar7[2];
      puVar8[3] = uVar4;
      uVar4 = puVar7[5];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar4;
      uVar4 = puVar7[7];
      puVar8[6] = puVar7[6];
      puVar8[7] = uVar4;
      uVar4 = puVar7[9];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar4;
      uVar4 = puVar7[0xb];
      puVar8[10] = puVar7[10];
      puVar8[0xb] = uVar4;
      uVar4 = puVar7[0xd];
      puVar8[0xc] = puVar7[0xc];
      puVar8[0xd] = uVar4;
      uVar4 = puVar7[0xf];
      puVar8[0xe] = puVar7[0xe];
      puVar8[0xf] = uVar4;
      lVar6 = lVar6 + -1;
      param_2 = puVar7 + 0x10;
      puVar5 = puVar8 + 0x10;
    } while (lVar6 != 0);
    uVar4 = puVar7[0x11];
    puVar8[0x10] = puVar7[0x10];
    puVar8[0x11] = uVar4;
    uVar4 = puVar7[0x13];
    puVar8[0x12] = puVar7[0x12];
    puVar8[0x13] = uVar4;
    uVar4 = puVar7[0x15];
    puVar8[0x14] = puVar7[0x14];
    puVar8[0x15] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xb4);
    uVar2 = *(undefined4 *)(puVar7 + 0x17);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xbc);
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar7 + 0x16);
    *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar1;
    *(undefined4 *)(puVar8 + 0x17) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xbc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xc4);
    uVar2 = *(undefined4 *)(puVar7 + 0x19);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xcc);
    *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)(puVar7 + 0x18);
    *(undefined4 *)((longlong)puVar8 + 0xc4) = uVar1;
    *(undefined4 *)(puVar8 + 0x19) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xcc) = uVar3;
    puVar8[0x1a] = puVar7[0x1a];
    *(undefined4 *)(param_1 + 2) = 0;
    __acrt_add_locale_ref();
  }
  return;
}



void FUN_1801f305c(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  uint *param_6)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  ulonglong uVar15;
  undefined1 auStackY_2a8 [32];
  uint *local_278;
  short *local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258;
  char local_250;
  undefined8 local_248;
  uint *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [256];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  short local_108 [88];
  ulonglong local_58;

  local_58 = DAT_1802a0400 ^ (ulonglong)auStackY_2a8;
  local_248 = param_5;
  local_240 = param_6;
  if (param_1 == (short *)0x0) {
  }
  local_238 = param_3;
  local_230 = param_2;
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    iVar5 = FUN_1801fb810();
    if (iVar5 == 0) {
      *param_6 = 0;
    }
    goto LAB_1801f34b3;
  }
  lVar7 = FUN_1801f2834();
  local_258 = lVar7 + 0x98;
  local_260 = param_5;
  cVar14 = '\0';
  local_250 = '\0';
  local_278 = (uint *)(lVar7 + 0xb8);
  psVar9 = (short *)(lVar7 + 0xbc);
  psVar1 = (short *)(lVar7 + 0x1c2);
  local_270 = psVar9;
  local_268 = param_4;
  iVar5 = FUN_1802008a0();
  if (iVar5 != 0) goto LAB_1801f34b3;
  uVar12 = 0xffffffffffffffff;
  uVar15 = 0xffffffffffffffff;
  do {
    uVar13 = uVar15;
    uVar15 = uVar13 + 1;
  } while (param_1[uVar15] != 0);
  if (uVar15 < 0x83) {
    psVar8 = psVar1;
    do {
      sVar2 = *psVar8;
      sVar3 = *(short *)((longlong)psVar8 + ((longlong)param_1 - (longlong)psVar1));
      if (sVar2 != sVar3) break;
      psVar8 = psVar8 + 1;
    } while (sVar3 != 0);
    puVar11 = local_278;
    cVar4 = '\0';
    if (sVar2 != sVar3) {
      lVar7 = (longlong)param_1 - (longlong)psVar9;
      do {
        sVar2 = *psVar9;
        sVar3 = *(short *)((longlong)psVar9 + lVar7);
        if (sVar2 != sVar3) break;
        psVar9 = psVar9 + 1;
      } while (sVar3 != 0);
      if (sVar2 != sVar3) goto LAB_1801f31d8;
    }
LAB_1801f348c:
    cVar14 = cVar4;
    *local_240 = *puVar11;
    iVar5 = FUN_1801fb810();
    if (iVar5 != 0) goto LAB_1801f34b3;
  }
  else {
LAB_1801f31d8:
    FUN_180207610(local_228,0,0x1ca);
    cVar4 = FUN_1801f6420();
    iVar5 = FUN_1801f2e38(local_228,param_1);
    puVar11 = local_278;
    if (iVar5 == 0) {
      if (cVar4 == '\0') {
        iVar5 = FUN_180201cc0();
      }
      else {
        iVar5 = FUN_180201260(local_228,local_278,local_228);
      }
      if (iVar5 == 0) goto LAB_1801f327c;
      FUN_1801f2d94(psVar1,0x83,local_228);
      do {
        uVar12 = uVar12 + 1;
      } while (local_108[uVar12] != 0);
      cVar4 = '\x01';
      iVar5 = FUN_1802008a0();
      if (iVar5 != 0) goto LAB_1801f34c8;
LAB_1801f3450:
      if ((*param_1 == 0) || (0x82 < uVar15)) {
        *local_270 = 0;
      }
      else {
        iVar5 = FUN_1802008a0();
        if (iVar5 != 0) {
LAB_1801f34c8:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_1801f348c;
    }
LAB_1801f327c:
    iVar5 = FUN_1801f61d8(param_1);
    if (iVar5 != 0) {
      local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
      iVar5 = FUN_1801f6014(param_1,0x20001004,&local_278,2);
      if ((iVar5 == 0) || (uVar10 = (uint)local_278, (uint)local_278 == 0)) {
        uVar10 = 0xfde9;
      }
      *puVar11 = uVar10 & 0xffff;
      iVar5 = FUN_1802008a0();
      psVar9 = param_1;
      if (iVar5 != 0) goto LAB_1801f34c8;
LAB_1801f3441:
      FUN_1801f2c5c(&local_268,psVar9,uVar13 + 2);
      cVar4 = local_250;
      goto LAB_1801f3450;
    }
    cVar4 = FUN_1801f3dd8(local_228,param_1);
    if ((cVar4 != '\0') && (iVar5 = FUN_1801f61d8(local_108), iVar5 != 0)) {
      if (local_128 == 0) {
        local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
        iVar5 = FUN_1801f6014(local_108,0x20001004,&local_278,2);
        if ((iVar5 == 0) || (uVar10 = (uint)local_278, (uint)local_278 == 0)) goto LAB_1801f33fa;
      }
      else {
        uVar6 = (uint)local_128;
        uVar10 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar10 = uVar6;
        }
        if (uVar10 == 0x75) {
          uVar10 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVar10 = (uint)local_126;
          }
          if (uVar10 == 0x74) {
            uVar10 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVar10 = (uint)local_124;
            }
            if (((uVar10 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_1801f33fa;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_1801f3398;
LAB_1801f33fa:
        uVar10 = 0xfde9;
      }
      *puVar11 = uVar10 & 0xffff;
      iVar5 = FUN_1802008a0();
      if (iVar5 != 0) goto LAB_1801f34c8;
      do {
        uVar13 = uVar12;
        uVar12 = uVar13 + 1;
      } while (local_108[uVar13 + 1] != 0);
      psVar9 = local_108;
      goto LAB_1801f3441;
    }
  }
LAB_1801f3398:
  if ((cVar14 != '\0') || (iVar5 = FUN_1802008a0(), iVar5 == 0)) {
  }
LAB_1801f34b3:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1801f34e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = FUN_1802006d0();
      if (iVar1 != 0) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}



wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale)

{
  undefined4 *puVar1;
  int local_res8 [2];
  wchar_t *local_res10;
  <lambda_7f2adfce497ff2baa965cd4f576ecfd1> local_res18 [8];
  longlong local_res20;
  wchar_t *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  wchar_t **local_20;
  int *local_18;
  wchar_t **local_10;

  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_res8[0] = _Category;
  local_res10 = _Locale;
  if ((uint)_Category < 6) {
    local_res20 = FUN_1801f2834();
    FUN_1801f6434();
    __acrt_update_thread_locale_data();
    *(uint *)(local_res20 + 0x3a8) = *(uint *)(local_res20 + 0x3a8) | 0x10;
    local_38 = &local_res20;
    local_30 = &local_40;
    local_28 = &local_res20;
    local_20 = &local_48;
    local_18 = local_res8;
    local_10 = &local_res10;
    __crt_seh_guarded_call<void>::
    operator()<<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
              ((__crt_seh_guarded_call<void> *)local_res18,local_res18,
               (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_30,
               (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_38);
  }
  else {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
    local_48 = (wchar_t *)0x0;
  }
  return local_48;
}



undefined4 * FUN_1801f35ec(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  short *psVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;

  puVar8 = (undefined4 *)_malloc_base(0x6a6);
  puVar9 = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = puVar8 + 1;
    *puVar8 = 1;
    *(undefined2 *)puVar9 = 0;
    puVar13 = (undefined8 *)(param_1 + 0x48);
    FUN_1801f34e0(puVar9,0x351,3,L"LC_COLLATE",&DAT_1802488dc,*puVar13);
    ppuVar12 = &PTR_u_LC_COLLATE_1802487d8;
    bVar6 = true;
    do {
      iVar7 = FUN_1802006d0();
      if (iVar7 != 0) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      plVar1 = puVar13 + 4;
      psVar10 = (short *)*puVar13;
      lVar11 = *plVar1 - (longlong)psVar10;
      do {
        sVar2 = *psVar10;
        sVar3 = *(short *)((longlong)psVar10 + lVar11);
        if (sVar2 != sVar3) break;
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      bVar5 = false;
      if (sVar2 == sVar3) {
        bVar5 = bVar6;
      }
      ppuVar12 = ppuVar12 + 3;
      puVar13 = puVar13 + 4;
      FUN_1801f34e0(puVar9,0x351,3,*ppuVar12,&DAT_1802488dc,*plVar1);
      bVar6 = bVar5;
    } while ((longlong)ppuVar12 < 0x180248838);
    if (bVar5) {
      FUN_1801f42e0(puVar8);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1801f42e0(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1801f42e0(*(undefined8 *)(param_1 + 0x30));
        }
      }
      puVar9 = *(undefined4 **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1801f42e0(*(undefined8 *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FUN_1801f42e0(*(undefined8 *)(param_1 + 0x30));
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 **)(param_1 + 0x38) = puVar8;
      *(undefined4 **)(param_1 + 0x28) = puVar9;
    }
  }
  return puVar9;
}



void FUN_1801f37d8(longlong param_1,int param_2,wchar_t *param_3)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  short *psVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  size_t _MaxCount;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined **ppuVar14;
  undefined1 auStackY_248 [32];
  short local_208 [136];
  undefined1 local_f8 [176];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStackY_248;
  iVar12 = 0;
  if (param_2 != 0) {
    if (param_3 == (wchar_t *)0x0) {
    }
    FUN_1801f3a70();
  }
  if (param_3 != (wchar_t *)0x0) {
    iVar11 = iVar12;
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        psVar5 = (short *)FUN_180200a50(param_3,&DAT_1802488d0);
        if (psVar5 == (short *)0x0) {
        }
        _MaxCount = (longlong)psVar5 - (longlong)param_3 >> 1;
        if (_MaxCount == 0) {
        }
        if (*psVar5 == 0x3b) {
        }
        iVar12 = 1;
        ppuVar14 = &PTR_u_LC_COLLATE_1802487d8;
        do {
          iVar4 = wcsncmp((wchar_t *)*ppuVar14,param_3,_MaxCount);
          if (iVar4 == 0) {
            sVar6 = 0xffffffffffffffff;
            do {
              sVar6 = sVar6 + 1;
            } while (*(short *)(*ppuVar14 + sVar6 * 2) != 0);
            if (_MaxCount == sVar6) break;
          }
          iVar12 = iVar12 + 1;
          ppuVar14 = ppuVar14 + 3;
        } while ((longlong)ppuVar14 < 0x180248839);
        psVar5 = psVar5 + 1;
        lVar7 = FUN_1802009f0(psVar5,&DAT_1802488d8);
        if ((lVar7 == 0) && (*psVar5 != 0x3b)) {
        }
        if (iVar12 < 6) {
          iVar4 = FUN_1802008a0();
          if (iVar4 != 0) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (ulonglong)(lVar7 * 2)) {
            FUN_1801d6b20();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_208[lVar7] = 0;
          lVar8 = FUN_1801f3a70(param_1,iVar12,local_208);
          if (lVar8 != 0) {
            iVar11 = iVar11 + 1;
          }
        }
      } while ((psVar5[lVar7] != 0) && (param_3 = psVar5 + lVar7 + 1, *param_3 != L'\0'));
    }
    else {
      lVar7 = FUN_1801f305c(param_3,local_208,0x83,local_f8);
      if (lVar7 == 0) {
      }
      plVar13 = (longlong *)(param_1 + 0x28);
      iVar4 = iVar12;
      iVar9 = 1;
      do {
        iVar10 = iVar9;
        if (iVar4 != 0) {
          psVar5 = local_208;
          lVar7 = *plVar13 - (longlong)psVar5;
          do {
            sVar1 = *psVar5;
            sVar2 = *(short *)((longlong)psVar5 + lVar7);
            if (sVar1 != sVar2) break;
            psVar5 = psVar5 + 1;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) || (lVar7 = FUN_1801f3a70(param_1,iVar4,local_208), iVar10 = iVar12, lVar7 != 0)) {
            iVar11 = iVar11 + 1;
            iVar10 = iVar9;
          }
        }
        iVar4 = iVar4 + 1;
        plVar13 = plVar13 + 4;
        iVar9 = iVar10;
      } while (iVar4 < 6);
      if (iVar10 != 0) goto LAB_1801f397b;
    }
    if (iVar11 == 0) {
    }
  }
LAB_1801f397b:
  FUN_1801f35ec(param_1);
}



void FUN_1801f3a70(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  short *psVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStackY_368 [32];
  short local_308 [136];
  undefined1 local_1f8 [176];
  ushort local_148 [128];
  ulonglong local_48;
  ulonglong uVar19;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStackY_368;
  lVar20 = (longlong)param_2;
  lVar10 = FUN_1801f2834();
  puVar1 = (undefined8 *)(lVar10 + 0x2c8);
  lVar11 = FUN_1801f305c(param_3,local_308,0x83,local_1f8);
  if (lVar11 != 0) {
    psVar14 = local_308;
    lVar21 = lVar20 * 0x20;
    lVar11 = *(longlong *)(lVar21 + 0x28 + param_1) - (longlong)psVar14;
    do {
      sVar2 = *psVar14;
      sVar3 = *(short *)((longlong)psVar14 + lVar11);
      if (sVar2 != sVar3) break;
      psVar14 = psVar14 + 1;
    } while (sVar3 != 0);
    if (sVar2 != sVar3) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (local_308[lVar11] != 0);
      puVar12 = (undefined4 *)_malloc_base(lVar11 * 2 + 6);
      if (puVar12 != (undefined4 *)0x0) {
        puVar5 = *(undefined **)(lVar21 + 0x28 + param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x128 + lVar20 * 8);
        uVar4 = *(undefined4 *)(param_1 + 0xc);
        iVar9 = FUN_1801fb810();
        uVar16 = 0;
        if (iVar9 != 0) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(lVar21 + 0x28 + param_1) = puVar12 + 1;
        if ((local_308[0] != 0x43) || (uVar17 = uVar16, local_308[1] != 0)) {
          uVar17 = FUN_1801f2cd4(local_1f8);
        }
        *(ulonglong *)(param_1 + 0x128 + lVar20 * 8) = uVar17;
        if (param_2 == 2) {
          *(undefined4 *)(param_1 + 0xc) = 0;
          uVar15 = *(undefined8 *)(lVar10 + 0x2e8);
          uVar17 = uVar16;
          uVar19 = uVar16;
          do {
            uVar18 = (uint)uVar19;
            if (*(int *)(param_1 + 0xc) == *(int *)(puVar1 + uVar17)) {
              if (uVar18 != 0) {
                *puVar1 = puVar1[(int)uVar18];
                puVar1[(int)uVar18] = uVar15;
              }
              break;
            }
            uVar7 = puVar1[uVar17];
            uVar18 = uVar18 + 1;
            uVar19 = (ulonglong)uVar18;
            puVar1[uVar17] = uVar15;
            uVar17 = uVar17 + 1;
            uVar15 = uVar7;
          } while ((longlong)uVar17 < 5);
          if (uVar18 == 5) {
            iVar9 = FUN_1801ff220(0,1,&DAT_180248740);
            uVar18 = 0;
            if (iVar9 != 0) {
              puVar13 = local_148;
              do {
                uVar18 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar18;
                *puVar13 = *puVar13 & 0x1ff;
                puVar13 = puVar13 + 1;
              } while (uVar18 < 0x7f);
              iVar9 = memcmp(local_148,PTR_DAT_1802a06f0,0xfe);
              uVar18 = (uint)(iVar9 == 0);
            }
            *(uint *)(lVar10 + 0x2cc) = uVar18;
            *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0xc);
          }
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar10 + 0x2cc);
        }
        else if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        else if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
        iVar9 = (*(code *)(&PTR_LAB_1802487d0)[lVar20 * 3])();
        if (iVar9 == 0) {
          if (puVar5 != &DAT_1802a0868) {
            piVar8 = *(int **)(lVar20 * 0x20 + 0x38 + param_1);
            LOCK();
            iVar9 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              FUN_1801f42e0(*(undefined8 *)(lVar20 * 0x20 + 0x38 + param_1));
              FUN_1801f42e0(*(undefined8 *)(lVar20 * 0x20 + 0x30 + param_1));
              FUN_1801f42e0(*(undefined8 *)(param_1 + 0x128 + lVar20 * 8));
              *(undefined8 *)(lVar20 * 0x20 + 0x28 + param_1) = 0;
              *(undefined8 *)(param_1 + 0x128 + lVar20 * 8) = 0;
            }
          }
          *puVar12 = 1;
          *(undefined4 **)(lVar20 * 0x20 + 0x38 + param_1) = puVar12;
        }
        else {
          *(undefined **)(lVar20 * 0x20 + 0x28 + param_1) = puVar5;
          FUN_1801f42e0(*(undefined8 *)(param_1 + 0x128 + lVar20 * 8));
          *(undefined8 *)(param_1 + 0x128 + lVar20 * 8) = uVar6;
          FUN_1801f42e0(puVar12);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
      }
    }
  }
}



void FUN_1801f3dd8(undefined8 param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  FUN_180207610(param_1,0,0x1ca);
  uVar8 = 0;
  plVar7 = local_a0;
  uVar6 = uVar8;
  uVar9 = uVar8;
  do {
    while( true ) {
      do {
        uVar5 = uVar6;
        if (3 < uVar5) {
        }
        if ((int)uVar9 == 2) {
          lVar3 = -1;
          do {
            lVar3 = lVar3 + 1;
          } while (param_2[lVar3] != 0);
        }
        else {
          lVar3 = FUN_1802009f0(param_2,&DAT_1802488e0);
        }
        plVar7[-1] = (longlong)param_2;
        uVar6 = uVar5 + 1;
        *plVar7 = lVar3;
        sVar1 = param_2[lVar3];
        param_2 = param_2 + lVar3 + 1;
        *(int *)(plVar7 + 1) = (int)uVar9;
        plVar7 = plVar7 + 3;
        if (sVar1 == 0) goto LAB_1801f3e8a;
        uVar9 = uVar8;
      } while (sVar1 == 0x2d);
      if (sVar1 != 0x2e) break;
      uVar9 = 2;
    }
  } while (sVar1 == 0x5f);
LAB_1801f3e8a:
  if (uVar5 == 0) {
    FUN_1801f401c(param_1,local_a8);
  }
  else {
    if (uVar5 == 1) {
      cVar2 = FUN_1801f401c(param_1,local_a8);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_1801f419c(param_1,local_90);
      if (cVar2 != '\0') {
      }
      cVar2 = FUN_1801f40a8(param_1,local_90);
      if (cVar2 != '\0') {
      }
      puVar4 = local_90;
    }
    else if (uVar5 == 2) {
      cVar2 = FUN_1801f401c(param_1,local_a8);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_1801f419c(param_1,local_90);
      if (cVar2 != '\0') {
        cVar2 = FUN_1801f40a8(param_1,local_78);
        if (cVar2 != '\0') {
        }
        cVar2 = FUN_1801f3fd4(param_1,local_78);
        if (cVar2 != '\0') {
        }
      }
      cVar2 = FUN_1801f40a8(param_1,local_90);
      if (cVar2 == '\0') {
      }
      puVar4 = local_78;
    }
    else {
      if (uVar5 != 3) {
      }
      cVar2 = FUN_1801f401c(param_1,local_a8);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_1801f419c(param_1,local_90);
      if (cVar2 == '\0') {
      }
      cVar2 = FUN_1801f40a8(param_1,local_78);
      if (cVar2 == '\0') {
      }
      puVar4 = local_60;
    }
    FUN_1801f3fd4(param_1,puVar4);
  }
}



uint FUN_1801f3fd4(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;

  if (*(int *)(param_2 + 0x10) == 2) {
    iVar2 = FUN_1802008a0();
    if (iVar2 != 0) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}



undefined8 FUN_1801f401c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;

  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] - 2 < 2)) && (cVar1 = FUN_1801f422c(*param_2), cVar1 != '\0')) {
    iVar2 = FUN_1802008a0();
    if ((iVar2 == 0) && (iVar2 = FUN_1802008a0(), iVar2 == 0)) {
      return 1;
    }
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



undefined8 FUN_1801f40a8(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;

  if ((int)param_2[2] != 0) {
    return 0;
  }
  if ((param_2[1] != 2) || (cVar3 = FUN_1801f422c(*param_2), cVar3 == '\0')) {
    if (param_2[1] != 3) {
      return 0;
    }
    lVar2 = *param_2;
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar6 * 2);
      lVar5 = FUN_1801f2108();
      if (0xff < uVar1) {
        return 0;
      }
      if ((*(ushort *)(lVar5 + (ulonglong)uVar1 * 2) >> 2 & 1) == 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
  }
  iVar4 = FUN_1802008a0();
  if (((iVar4 == 0) && (iVar4 = FUN_180200760(), iVar4 == 0)) && (iVar4 = FUN_180200760(), iVar4 == 0)) {
    return 1;
  }
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



uint FUN_1801f419c(undefined8 param_1,undefined8 *param_2)

{
  uint in_EAX;
  int iVar1;

  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] == 4)) && (in_EAX = FUN_1801f422c(*param_2), (char)in_EAX != '\0')) {
    iVar1 = FUN_180200760();
    if ((iVar1 == 0) && (iVar1 = FUN_180200760(), iVar1 == 0)) {
      return 1;
    }
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}



undefined8 FUN_1801f422c(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;

  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      lVar2 = FUN_1801f2108();
      if ((0xff < uVar1) || ((*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) & 0x103) == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return 1;
}



uint FUN_1801f42a0(uint param_1)

{
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return (uint)(ushort)(((param_1 & 0x7fffff) != 0) + 1);
  }
  if ((param_1 & 0x7f800000) == 0) {
    return CONCAT22((short)(-(param_1 & 0x7fffffff) >> 0x10),-(ushort)((param_1 & 0x7fffffff) != 0)) & 0xfffffffe;
  }
  return 0xffffffff;
}



void FUN_1801f42e0(LPVOID param_1)

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



void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  longlong lVar1;

  if ((*param_2 != DAT_1802a9ca8) && ((DAT_1802a10d0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}



void FUN_1801f436c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;

  if ((*param_2 != (&DAT_1802a9ca8)[param_3]) && ((DAT_1802a10d0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}



void FUN_1801f43a4(longlong param_1,longlong *param_2)

{
  longlong lVar1;

  if ((*param_2 != DAT_1802aa2b0) && ((DAT_1802a10d0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_1801fd73c();
    *param_2 = lVar1;
  }
  return;
}



void FUN_1801f43d8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;

  if ((*param_2 != (&DAT_1802aa2b0)[param_3]) && ((DAT_1802a10d0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_1801fd73c();
    *param_2 = lVar1;
  }
  return;
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



void FUN_1801f4488(int param_1,undefined8 param_2,__crt_locale_pointers *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_3);
  if (0x100 < param_1 + 1U) {
    if (*(short *)(*local_38[0] + (ulonglong)(param_1 >> 8 & 0xff) * 2) < 0) {
      uVar2 = 2;
      local_46 = 0;
      local_48 = (char)((uint)param_1 >> 8);
      local_47 = (char)param_1;
    }
    else {
      uVar2 = 1;
      local_47 = 0;
      local_48 = (char)param_1;
    }
    local_58 = 1;
    local_20 = 0;
    local_1c = 0;
    local_60 = *(undefined4 *)((longlong)local_38[0] + 0xc);
    local_68 = &local_20;
    iVar1 = FUN_1801ff220(local_38,1,&local_48,uVar2);
    if (iVar1 == 0) {
      if (local_28 == '\0') {
      }
      *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
}



int __cdecl _fileno(FILE *_File)

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
    iVar1 = _File->_flag;
  }
  return iVar1;
}



void FUN_1801f45b8(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  undefined4 local_c4;
  DWORD local_c0 [2];
  byte *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;

  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_1802a0400 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar18 = (longlong)(int)param_2 >> 6;
  uVar7 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_1802a9d80)[lVar18] + 0x28 + uVar7 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar18;
  local_a0 = GetConsoleOutputCP();
  uVar14 = 0;
  if (*(char *)(local_b0 + 0x28) == '\0') {
    FUN_1801e6290(local_b0);
  }
  local_9c = *(int *)(*(longlong *)(local_b0 + 0x18) + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar9 = uVar14;
  local_68 = lVar18;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4 = 0;
      cVar3 = '\x01';
      if (local_9c == 0xfde9) {
        pcVar8 = (char *)(uVar7 * 0x48 + 0x3e + (&DAT_1802a9d80)[local_68]);
        uVar9 = uVar14;
        uVar19 = uVar14;
        do {
          uVar10 = (uint)uVar9;
          if (*pcVar8 == '\0') break;
          uVar10 = uVar10 + 1;
          uVar9 = (ulonglong)uVar10;
          uVar19 = uVar19 + 1;
          pcVar8 = pcVar8 + 1;
        } while ((longlong)uVar19 < 5);
        if ((longlong)uVar19 < 1) {
          cVar1 = (&DAT_1802a08c0)[*param_3];
          iVar4 = cVar1 + 1;
          lVar18 = (longlong)local_b8 - (longlong)param_3;
          if (lVar18 < iVar4) {
            uVar9 = uVar14;
            if (0 < lVar18) {
              do {
                *(byte *)(uVar9 + uVar7 * 0x48 + 0x3e + (&DAT_1802a9d80)[local_90]) = param_3[uVar9];
                uVar10 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar10;
                uVar9 = uVar9 + 1;
              } while ((int)uVar10 < lVar18);
            }
            param_1[1] = param_1[1] + (int)lVar18;
          }
          local_a8 = 0;
          cVar3 = (iVar4 == 4) + '\x01';
          local_78 = param_3;
          lVar18 = FUN_1801f9494(&local_c4,&local_78,cVar3,&local_a8);
          if (lVar18 == -1) {
          }
          pbVar13 = param_3 + cVar1;
          lVar18 = local_90;
        }
        else {
          cVar3 = (&DAT_1802a08c0)[*(byte *)((&DAT_1802a9d80)[lVar18] + 0x3e + uVar7 * 0x48)];
          iVar4 = (cVar3 + 1) - uVar10;
          local_a8 = CONCAT44(local_a8._4_4_,iVar4);
          lVar15 = (longlong)local_b8 - (longlong)param_3;
          lVar17 = (longlong)iVar4;
          if (lVar15 < lVar17) {
            if (0 < lVar15) {
              uVar9 = uVar19;
              do {
                *(byte *)(uVar9 + uVar7 * 0x48 + 0x3e + (&DAT_1802a9d80)[lVar18]) = param_3[uVar9 - uVar19];
                uVar10 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar10;
                uVar9 = uVar9 + 1;
              } while ((int)uVar10 < lVar15);
            }
            param_1[1] = param_1[1] + (int)lVar15;
          }
          puVar12 = (undefined1 *)(uVar7 * 0x48 + 0x3e + (&DAT_1802a9d80)[local_68]);
          uVar9 = uVar14;
          do {
            local_58[uVar9] = *puVar12;
            uVar9 = uVar9 + 1;
            puVar12 = puVar12 + 1;
          } while ((longlong)uVar9 < (longlong)uVar19);
          uVar9 = uVar14;
          if (0 < lVar17) {
            FUN_1802079d0(local_58 + uVar19,param_3,lVar17);
          }
          do {
            *(undefined1 *)(uVar9 + uVar7 * 0x48 + 0x3e + (&DAT_1802a9d80)[lVar18]) = 0;
            uVar9 = uVar9 + 1;
          } while ((longlong)uVar9 < (longlong)uVar19);
          local_88 = 0;
          local_80 = local_58;
          cVar3 = (cVar3 + 1 == 4) + '\x01';
          lVar15 = FUN_1801f9494(&local_c4,&local_80,cVar3,&local_88);
          if (lVar15 == -1) {
          }
          pbVar13 = param_3 + ((int)local_a8 + -1);
        }
      }
      else {
        lVar15 = (&DAT_1802a9d80)[lVar18];
        bVar2 = *(byte *)(lVar15 + 0x3d + uVar7 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(**(longlong **)(local_b0 + 0x18) + (ulonglong)*param_3 * 2) < 0) {
            pbVar13 = param_3 + 1;
            if (local_b8 <= pbVar13) {
              *(byte *)(lVar15 + 0x3e + uVar7 * 0x48) = *param_3;
              pbVar13 = (byte *)((&DAT_1802a9d80)[lVar18] + 0x3d + uVar7 * 0x48);
              *pbVar13 = *pbVar13 | 4;
              param_1[1] = (int)uVar9 + 1;
            }
            iVar4 = FUN_1801f9038(&local_c4,param_3,2,local_b0);
            if (iVar4 == -1) {
            }
            goto LAB_1801f48c0;
          }
          uVar16 = 1;
          pbVar13 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar15 + 0x3e + uVar7 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar15 + 0x3d + uVar7 * 0x48) = bVar2 & 0xfb;
          uVar16 = 2;
          pbVar13 = &local_50;
        }
        iVar4 = FUN_1801f9038(&local_c4,pbVar13,uVar16,local_b0);
        pbVar13 = param_3;
        if (iVar4 == -1) {
        }
      }
LAB_1801f48c0:
      param_3 = pbVar13 + 1;
      uVar10 = FUN_1801fc384(local_a0,0,&local_c4,cVar3);
      hFile = local_70;
      if (uVar10 == 0) {
      }
      local_c0[0] = 0;
      BVar5 = WriteFile(local_70,local_48,uVar10,local_c0,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
LAB_1801f4a19:
        DVar6 = GetLastError();
        *param_1 = DVar6;
      }
      uVar11 = (param_1[2] - (int)local_98) + (int)param_3;
      param_1[1] = uVar11;
      if (local_c0[0] < uVar10) {
      }
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        BVar5 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar5 == 0) goto LAB_1801f4a19;
        if (local_c0[0] == 0) {
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        uVar11 = param_1[1];
      }
      uVar9 = (ulonglong)uVar11;
    } while (param_3 < local_b8);
  }
}



void FUN_1801f4a4c(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 uStack_20;

  uStack_20 = 0x1801f4a64;
  local_28 = DAT_1802a0400 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)((&DAT_1802a9d80)[(longlong)(int)param_2 >> 6] + 0x28 + (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_3) {
    }
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
    }
  } while( true );
}



void FUN_1801f4b54(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 uStack_20;

  uStack_20 = 0x1801f4b6c;
  local_28 = DAT_1802a0400 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)((&DAT_1802a9d80)[(longlong)(int)param_2 >> 6] + 0x28 + (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar5 <= param_3) {
    }
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
    }
  } while( true );
}



void FUN_1801f4c70(DWORD *param_1,uint param_2,short *param_3,uint param_4)

{
  short sVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 uStack_30;

  uStack_30 = 0x1801f4c8c;
  local_38 = DAT_1802a0400 ^ (ulonglong)auStackY_1498;
  hFile = *(HANDLE *)((&DAT_1802a9d80)[(longlong)(int)param_2 >> 6] + 0x28 + (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  psVar7 = param_3;
  do {
    if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) {
    }
    psVar8 = local_1448;
    do {
      if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) break;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      if (sVar1 == 10) {
        *psVar8 = 0xd;
        psVar8 = psVar8 + 1;
      }
      *psVar8 = sVar1;
      psVar8 = psVar8 + 1;
    } while (psVar8 < local_1448 + 0x354);
    uVar2 = FUN_1801fc384(0xfde9,0,local_1448,(longlong)psVar8 - (longlong)local_1448 >> 1);
    if (uVar2 == 0) {
LAB_1801f4dad:
      DVar4 = GetLastError();
      *param_1 = DVar4;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        local_1458[0] = 0;
        BVar3 = WriteFile(hFile,local_d98 + uVar6,uVar2 - (int)uVar6,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_1801f4dad;
        uVar5 = (int)uVar6 + local_1458[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1[1] = (int)psVar7 - (int)param_3;
  } while( true );
}



undefined4 FUN_1801f4de4(void)

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
  uVar1 = FUN_1801f4e7c();
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



undefined4 FUN_1801f4e7c(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined4 uVar2;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1802aa180 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1) !=
          0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1)
            == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_1801f4f9c(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_1801e128c(0,0,0,0,0,param_4);
  }
  return 0xffffffff;
}



int FUN_1801f4f9c(uint param_1,short *param_2,uint param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  short *psVar13;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  DWORD local_50 [4];

  iVar10 = 0;
  uVar12 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
LAB_1801f4fcc:
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_4);
    return -1;
  }
  uVar8 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_1802a9d80)[lVar11] + 0x39 + uVar8 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_1801f4fcc;
  if ((*(byte *)((&DAT_1802a9d80)[lVar11] + 0x38 + uVar8 * 0x48) & 0x20) != 0) {
    thunk_FUN_1801f7d0c(param_1,0,2);
  }
  local_60 = 0;
  iVar5 = FUN_180201f7c();
  if ((iVar5 == 0) || (-1 < *(char *)((&DAT_1802a9d80)[lVar11] + 0x38 + uVar8 * 0x48))) {
LAB_1801f5184:
    if (-1 < *(char *)((&DAT_1802a9d80)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar6 = WriteFile(*(HANDLE *)((&DAT_1802a9d80)[lVar11] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),param_2,
                        param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      iVar10 = local_68;
      uVar8 = local_70;
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar7);
        iVar10 = local_68;
        uVar8 = local_70;
      }
      goto LAB_1801f5239;
    }
    if (cVar1 == '\0') {
      puVar9 = (ulonglong *)FUN_1801f4a4c(&local_70,param_1,param_2,uVar12);
    }
    else if (cVar1 == '\x01') {
      puVar9 = (ulonglong *)FUN_1801f4c70(&local_70,param_1,param_2,uVar12);
    }
    else {
      iVar10 = 0;
      uVar8 = local_60;
      if (cVar1 != '\x02') goto LAB_1801f5239;
      puVar9 = (ulonglong *)FUN_1801f4b54(&local_70,param_1,param_2,uVar12);
    }
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_1801e6290();
    }
    if ((*(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138) == 0) &&
       (*(char *)((&DAT_1802a9d80)[lVar11] + 0x39 + uVar8 * 0x48) == '\0')) goto LAB_1801f5184;
    local_50[0] = 0;
    BVar6 = GetConsoleMode(*(HANDLE *)((&DAT_1802a9d80)[lVar11] + 0x28 + uVar8 * 0x48),local_50);
    if (BVar6 == 0) goto LAB_1801f5184;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar8 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar8 = local_70;
        if (param_2 < (short *)((longlong)param_2 + uVar12)) {
          local_70._4_4_ = 0;
          psVar13 = param_2;
          iVar5 = local_70._4_4_;
          do {
            sVar4 = *psVar13;
            sVar3 = FUN_180202500(sVar4);
            if (sVar3 != sVar4) {
LAB_1801f514c:
              DVar7 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar7);
              uVar8 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar5 + 2,(undefined4)local_70);
            iVar2 = iVar5 + 2;
            if (sVar4 == 10) {
              sVar4 = FUN_180202500(0xd);
              if (sVar4 != 0xd) goto LAB_1801f514c;
              local_70 = CONCAT44(iVar5 + 3,(undefined4)local_70);
              iVar10 = iVar10 + 1;
              iVar2 = iVar5 + 3;
            }
            iVar5 = iVar2;
            psVar13 = psVar13 + 1;
            uVar8 = local_70;
          } while (psVar13 < (short *)((longlong)param_2 + uVar12));
        }
      }
      goto LAB_1801f5239;
    }
    puVar9 = (ulonglong *)FUN_1801f45b8(&local_70,param_1,param_2,uVar12,param_4);
  }
  iVar10 = (int)puVar9[1];
  uVar8 = *puVar9;
LAB_1801f5239:
  local_60 = uVar8;
  iVar5 = (int)(local_60 >> 0x20);
  if (iVar5 != 0) {
    return iVar5 - iVar10;
  }
  if ((int)local_60 != 0) {
    if ((int)local_60 == 5) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 0x38) = 1;
      *(undefined4 *)(param_4 + 0x34) = 5;
      return -1;
    }
    FUN_1801e6a9c(local_60 & 0xffffffff,param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_1802a9d80)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) != 0) &&
     ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(undefined4 *)(param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 0x30) = 1;
  *(undefined4 *)(param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 0x38) = 1;
  return -1;
}



bool FUN_1801f52cc(undefined1 param_1,FILE *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res8 [8];

  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0xc000000000) == 0) {
    iVar3 = FUN_1801f4e7c(uVar2,local_res8,1,param_3);
    bVar7 = iVar3 == 1;
  }
  else {
    iVar3 = 0;
    iVar6 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(longlong *)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -1;
    if (iVar6 < 1) {
      if (uVar2 + 2 < 2) {
        puVar5 = &DAT_1802a0870;
      }
      else {
        puVar5 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) && (lVar4 = FUN_1801f7dbc(uVar2,0,2), lVar4 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      iVar3 = FUN_1801f4e7c(uVar2,*(longlong *)&param_2->_cnt,iVar6,param_3);
    }
    bVar7 = iVar3 == iVar6;
    **(undefined1 **)&param_2->_cnt = local_res8[0];
  }
  return bVar7;
}



bool FUN_1801f53c4(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];

  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (hFile = (HANDLE)FUN_180202488((int)param_1[3]), hFile != (HANDLE)0xffffffffffffffff)) {
      local_res10[0].QuadPart = 0;
      BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1);
      if (BVar2 != 0) {
        local_res8.QuadPart = 0;
        BVar2 = GetFileSizeEx(hFile,&local_res8);
        if (BVar2 != 0) {
          return local_res10[0].QuadPart == local_res8.QuadPart;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



ulonglong FUN_1801f544c(byte param_1,FILE *param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;

  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        cVar2 = FUN_1801f53c4(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar2 == '\0') goto LAB_1801f547e;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) && (cVar2 = FUN_1801f5518(param_2), cVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar2 = FUN_1801f52cc(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        return (ulonglong)param_1;
      }
      goto LAB_1801f547e;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_1801f547e:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}



bool FUN_1801f5518(FILE *param_1)

{
  int iVar1;
  FILE *pFVar2;
  bool bVar3;

  pFVar2 = (FILE *)FUN_1801e2254(2);
  if (param_1 == pFVar2) {
    bVar3 = true;
  }
  else {
    pFVar2 = (FILE *)FUN_1801e2254(1);
    if (param_1 == pFVar2) {
      iVar1 = _fileno(param_1);
      iVar1 = FUN_180201f7c(iVar1);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}



undefined8 FUN_1801f5564(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;

  cVar1 = FUN_1801f5518();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_1801e2254(1);
    if (param_1 == plVar2) {
      plVar2 = &DAT_1802a9cb0;
    }
    else {
      plVar2 = (longlong *)FUN_1801e2254(2);
      if (param_1 != plVar2) {
        return 0;
      }
      plVar2 = &DAT_1802a9cb8;
    }
    _DAT_1802a98b8 = _DAT_1802a98b8 + 1;
    if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x282;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = _malloc_base(0x1000);
        *plVar2 = lVar3;
        FUN_1801f42e0(0);
      }
      if (*plVar2 == 0) {
        *(undefined4 *)(param_1 + 2) = 2;
        param_1[1] = (longlong)param_1 + 0x1c;
        *param_1 = (longlong)param_1 + 0x1c;
        *(undefined4 *)(param_1 + 4) = 2;
      }
      else {
        param_1[1] = *plVar2;
        *param_1 = *plVar2;
        *(undefined4 *)(param_1 + 2) = 0x1000;
        *(undefined4 *)(param_1 + 4) = 0x1000;
      }
      return 1;
    }
  }
  return 0;
}



void FUN_1801f562c(char param_1,undefined8 *param_2,undefined8 param_3)

{
  if ((param_1 != '\0') && ((*(uint *)((longlong)param_2 + 0x14) >> 9 & 1) != 0)) {
    FUN_1801e33f8(param_2,param_3);
    LOCK();
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffd7f;
    UNLOCK();
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}



undefined4 FUN_1801f566c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;

  __acrt_lowio_lock_fh(*param_2);
  lVar1 = param_3[1];
  if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x2c) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1801f5840();
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVar2;
}



undefined8 FUN_1801f56e4(uint param_1,longlong param_2)

{
  undefined8 uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong local_18;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_1802aa180)) &&
       ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)
       ) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_1801f566c(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
    FUN_1801e128c(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}



undefined4 FUN_1801f57a8(undefined4 param_1)

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
  uVar1 = FUN_1801f5840(param_1,local_48);
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



undefined8 FUN_1801f5840(uint param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;

  lVar3 = FUN_180202488(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1802a9d80 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1802a9d80 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_180202488();
      lVar4 = FUN_180202488(1);
      if (lVar4 == lVar3) goto LAB_1801f5862;
    }
    hObject = (HANDLE)FUN_180202488(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_1801f58c0;
    }
  }
LAB_1801f5862:
  DVar2 = 0;
LAB_1801f58c0:
  FUN_1802023cc(param_1);
  *(undefined1 *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1801e6a9c(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



undefined8 * FUN_1801f5910(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];

  *param_1 = 0;
  __acrt_lock(8);
  puVar1 = (undefined8 *)FUN_1801f5984(local_res8);
  puVar1 = (undefined8 *)*puVar1;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  __acrt_unlock(8);
  return param_1;
}



void __cdecl __acrt_stdio_free_stream(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return;
}



longlong * FUN_1801f5984(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;

  plVar5 = (longlong *)(DAT_1802a98b0 + 0x18);
  plVar1 = plVar5 + (longlong)DAT_1802a98a8 + -3;
  do {
    if (plVar5 == plVar1) {
LAB_1801f5a00:
      *param_1 = 0;
      return param_1;
    }
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      lVar4 = _calloc_base(1);
      *plVar5 = lVar4;
      FUN_1801f42e0(0);
      if (*plVar5 != 0) {
        *(undefined4 *)(*plVar5 + 0x18) = 0xffffffff;
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*plVar5 + 0x30),4000,0);
        lVar4 = *plVar5;
        LOCK();
        *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) | 0x2000;
        UNLOCK();
        FUN_1801e230c(lVar4);
LAB_1801f5a1c:
        *param_1 = lVar4;
        return param_1;
      }
      goto LAB_1801f5a00;
    }
    if ((*(uint *)(lVar4 + 0x14) >> 0xd & 1) == 0) {
      FUN_1801e230c(lVar4);
      uVar3 = *(uint *)(lVar4 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar4 + 0x14);
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *(uint *)(lVar4 + 0x14) = uVar3 | 0x2000;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar6);
      if ((~(byte)(uVar3 >> 0xd) & 1) != 0) goto LAB_1801f5a1c;
      FUN_1801e2318(lVar4);
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) && ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0))
  {
    FUN_1801f42e0(param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



BOOL FUN_1801f5ac8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;

  __acrt_lock(*param_2);
  DAT_1802a9d78 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1801f5ab4,1);
  DAT_1802a9d78 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}



longlong FUN_1801f5b24(void)

{
  longlong lVar1;

  if (DAT_1802b6008 == -1) {
    return 0;
  }
  if (DAT_1802b6008 != 0) {
    return DAT_1802b6008;
  }
  lVar1 = FUN_1801f5b5c(1,"CompareStringEx",&DAT_1802495b0,"CompareStringEx");
  return lVar1;
}



FARPROC FUN_1801f5b5c(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  DWORD local_res18 [2];

  do {
    if (param_3 == param_4) {
      pFVar7 = (FARPROC)0x0;
LAB_1801f5c4e:
      __acrt_lock(0xe);
      local_res18[0] = 0;
      BVar5 = VirtualProtect(&DAT_1802b6000,0x100,4,local_res18);
      if (BVar5 != 0) {
        pFVar6 = pFVar7;
        if (pFVar7 == (FARPROC)0x0) {
          pFVar6 = (FARPROC)0xffffffffffffffff;
        }
        LOCK();
        (&DAT_1802b6000)[param_1] = pFVar6;
        UNLOCK();
        BVar5 = VirtualProtect(&DAT_1802b6000,0x100,2,local_res18);
        if (BVar5 != 0) {
          __acrt_unlock(0xe);
          return pFVar7;
        }
      }
      abort();
    }
    uVar2 = *param_3;
    hLibModule = (HMODULE)(&DAT_1802a9cc0)[uVar2];
    if (hLibModule == (HMODULE)0x0) {
      lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_180248fb0)[uVar2];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((hLibModule != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 && (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))) {
        LOCK();
        lVar1 = (&DAT_1802a9cc0)[uVar2];
        (&DAT_1802a9cc0)[uVar2] = hLibModule;
        UNLOCK();
        if (lVar1 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_1801f5cf4;
      }
      LOCK();
      (&DAT_1802a9cc0)[uVar2] = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_1801f5cf4:
      pFVar7 = GetProcAddress(hLibModule,param_2);
      goto LAB_1801f5c4e;
    }
    param_3 = param_3 + 1;
  } while( true );
}



undefined8 FUN_1801f5d10(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;

  if (DAT_1802b60d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1802b60d0;
  if ((DAT_1802b60d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1801f5b5c(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_1802496e4,
                                     "AppPolicyGetProcessTerminationMethod"), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}



undefined8 FUN_1801f5d6c(void)

{
  code *pcVar1;
  undefined8 uVar2;

  if (DAT_1802b6000 == (code *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = DAT_1802b6000;
  if ((DAT_1802b6000 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1801f5b5c(0,"AreFileApisANSI",&DAT_180249598,&DAT_18024959c), pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}



void FUN_1801f5db8(undefined8 param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5,int param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;

  pcVar1 = (code *)FUN_1801f5b24();
  if (pcVar1 == (code *)0x0) {
    Locale = FUN_1801f63bc(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



void FUN_1801f5e7c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 *local_18 [2];

  local_res8 = param_1;
  if (DAT_1802b6010 == (code *)0xffffffffffffffff) {
LAB_1801f5ee0:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    FUN_1801f5ac8(local_28,local_20,local_18,&local_24);
  }
  else {
    pcVar1 = DAT_1802b6010;
    if (DAT_1802b6010 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(2,"EnumSystemLocalesEx",&DAT_1802495c8,"EnumSystemLocalesEx");
      if (pcVar1 == (code *)0x0) goto LAB_1801f5ee0;
    }
    (*pcVar1)(local_res8,param_2,param_3,param_4);
  }
  return;
}



void FUN_1801f5f38(void)

{
  (*DAT_1802b6018)();
  return;
}



void FUN_1801f5f4c(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
                  undefined8 param_7)

{
  LCID Locale;
  code *pcVar1;

  if (DAT_1802b6028 == (code *)0xffffffffffffffff) {
LAB_1801f5fd0:
    Locale = FUN_1801f63bc(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_1802b6028;
    if (DAT_1802b6028 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(5,"GetDateFormatEx",&DAT_180249600,"GetDateFormatEx");
      if (pcVar1 == (code *)0x0) goto LAB_1801f5fd0;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



void FUN_1801f6014(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  code *pcVar1;

  if (DAT_1802b6050 == (code *)0xffffffffffffffff) {
LAB_1801f6079:
    Locale = FUN_1801f63bc(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pcVar1 = DAT_1802b6050;
    if (DAT_1802b6050 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(10,"GetLocaleInfoEx",&DAT_180249618,"GetLocaleInfoEx");
      if (pcVar1 == (code *)0x0) goto LAB_1801f6079;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}



void FUN_1801f60a8(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6)

{
  LCID Locale;
  code *pcVar1;

  if (DAT_1802b6068 == (code *)0xffffffffffffffff) {
LAB_1801f611f:
    Locale = FUN_1801f63bc(param_1,0);
    GetTimeFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_1802b6068;
    if (DAT_1802b6068 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(0xd,"GetTimeFormatEx",&DAT_180249630,"GetTimeFormatEx");
      if (pcVar1 == (code *)0x0) goto LAB_1801f611f;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



void FUN_1801f6160(undefined8 param_1,undefined4 param_2)

{
  LCID LVar1;
  code *pcVar2;

  if (DAT_1802b6070 == (code *)0xffffffffffffffff) {
LAB_1801f61af:
    LVar1 = GetUserDefaultLCID();
    FUN_1801f6240(LVar1,param_1,param_2,0);
  }
  else {
    pcVar2 = DAT_1802b6070;
    if (DAT_1802b6070 == (code *)0x0) {
      pcVar2 = (code *)FUN_1801f5b5c(0xe,"GetUserDefaultLocaleName",&DAT_180249648,"GetUserDefaultLocaleName");
      if (pcVar2 == (code *)0x0) goto LAB_1801f61af;
    }
    (*pcVar2)(param_1,param_2);
  }
  return;
}



void FUN_1801f61d8(undefined8 param_1)

{
  LCID Locale;
  code *pcVar1;

  if (DAT_1802b6088 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_1802b6088;
    if (DAT_1802b6088 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(0x11,"IsValidLocaleName",&DAT_180249670,"IsValidLocaleName");
      if (pcVar1 == (code *)0x0) goto LAB_1801f6222;
    }
    (*pcVar1)(param_1);
    return;
  }
LAB_1801f6222:
  Locale = FUN_1801f63bc(param_1,0);
  IsValidLocale(Locale,1);
  return;
}



void FUN_1801f6240(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;

  if (DAT_1802b6098 == (code *)0xffffffffffffffff) {
LAB_1801f62a5:
    FUN_180202540(param_1,param_2,param_3);
  }
  else {
    pcVar1 = DAT_1802b6098;
    if (DAT_1802b6098 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(0x13,"LCIDToLocaleName",&DAT_1802496a8,"LCIDToLocaleName");
      if (pcVar1 == (code *)0x0) goto LAB_1801f62a5;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}



void FUN_1801f62c8(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,int param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;

  if (DAT_1802b6090 == (code *)0xffffffffffffffff) {
LAB_1801f6373:
    Locale = FUN_1801f63bc(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_1802b6090;
    if (DAT_1802b6090 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(0x12,"LCMapStringEx",&DAT_180249690,"LCMapStringEx");
      if (pcVar1 == (code *)0x0) goto LAB_1801f6373;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



void FUN_1801f63bc(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;

  if (DAT_1802b60a0 == (code *)0xffffffffffffffff) {
LAB_1801f640b:
    FUN_180202628(param_1);
  }
  else {
    pcVar1 = DAT_1802b60a0;
    if (DAT_1802b60a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_1801f5b5c(0x14,"LocaleNameToLCID",&DAT_1802496c8,"LocaleNameToLCID");
      if (pcVar1 == (code *)0x0) goto LAB_1801f640b;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}



bool FUN_1801f6420(void)

{
  longlong lVar1;

  lVar1 = FUN_1801f5b24();
  return lVar1 != 0;
}



void FUN_1801f6434(void)

{
  if (DAT_1802b6000 == 0) {
    FUN_1801f5b5c(0,"AreFileApisANSI",&DAT_180249598,&DAT_18024959c);
  }
  FUN_1801f5b24();
  if (DAT_1802b6010 == 0) {
    FUN_1801f5b5c(2,"EnumSystemLocalesEx",&DAT_1802495c8,"EnumSystemLocalesEx");
  }
  if (DAT_1802b6028 == 0) {
    FUN_1801f5b5c(5,"GetDateFormatEx",&DAT_180249600,"GetDateFormatEx");
  }
  if (DAT_1802b6050 == 0) {
    FUN_1801f5b5c(10,"GetLocaleInfoEx",&DAT_180249618,"GetLocaleInfoEx");
  }
  if (DAT_1802b6068 == 0) {
    FUN_1801f5b5c(0xd,"GetTimeFormatEx",&DAT_180249630,"GetTimeFormatEx");
  }
  if (DAT_1802b6070 == 0) {
    FUN_1801f5b5c(0xe,"GetUserDefaultLocaleName",&DAT_180249648,"GetUserDefaultLocaleName");
  }
  if (DAT_1802b6088 == 0) {
    FUN_1801f5b5c(0x11,"IsValidLocaleName",&DAT_180249670,"IsValidLocaleName");
  }
  if (DAT_1802b6090 == 0) {
    FUN_1801f5b5c(0x12,"LCMapStringEx",&DAT_180249690,"LCMapStringEx");
  }
  if (DAT_1802b6098 == 0) {
    FUN_1801f5b5c(0x13,"LCIDToLocaleName",&DAT_1802496a8,"LCIDToLocaleName");
  }
  if (DAT_1802b60a0 == 0) {
    FUN_1801f5b5c(0x14,"LocaleNameToLCID",&DAT_1802496c8,"LocaleNameToLCID");
  }
  return;
}



bool FUN_1801f65dc(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];

  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_1802b6000,0x100,2,local_res8);
  return BVar1 != 0;
}



bool FUN_1801f660c(void)

{
  longlong lVar1;
  bool bVar2;

  if (DAT_1802b6018 == -1) {
    lVar1 = 0;
  }
  else {
    bVar2 = DAT_1802b6018 == 0;
    if (!bVar2) goto LAB_1801f6646;
    lVar1 = FUN_1801f5b5c(3,"FlsGetValue2",&DAT_1802495e8,"FlsGetValue2");
  }
  bVar2 = lVar1 == 0;
LAB_1801f6646:
  return !bVar2;
}



undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *puVar1;

  if (param_1 == '\0') {
    puVar1 = &DAT_1802a9cc0;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_1802a9d78);
  }
  return 1;
}



int FUN_1801f6694(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_18;

  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_1802a98a8; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_1802a98b0 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = FUN_1801e209c(*(undefined8 *)(DAT_1802a98b0 + lVar4 * 8)), iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1802a98b0 + lVar4 * 8) + 0x30));
      FUN_1801f42e0(*(undefined8 *)(DAT_1802a98b0 + lVar4 * 8));
      *(undefined8 *)(DAT_1802a98b0 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}



void FUN_1801f6748(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;

  FUN_180207610(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  lVar5 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_1802aa180 < (int)uVar7) {
      uVar7 = DAT_1802aa180;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      do {
        if ((((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0)) &&
           (((*puVar6 & 8) != 0 || (DVar2 = GetFileType(*(HANDLE *)pbVar4), DVar2 != 0)))) {
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_1802a9d80)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



void FUN_1801f6848(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;

  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_1802a9d80)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_1801f6926;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_1802a98b0 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_1802a98b0) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_1801f6926:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}



bool __acrt_initialize_lowio(void)

{
  int iVar1;

  __acrt_lock(7);
  iVar1 = __acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_1801f6748();
    FUN_1801f6848();
  }
  __acrt_unlock(7);
  return iVar1 == 0;
}



undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;

  uVar1 = 0;
  do {
    if (*(longlong *)((longlong)&DAT_1802a9d80 + uVar1) != 0) {
      __acrt_lowio_destroy_handle_array();
      *(undefined8 *)((longlong)&DAT_1802a9d80 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}



void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;

  _DAT_1802a98b8 = _DAT_1802a98b8 + 1;
  uVar2 = 0x1000;
  uVar1 = _calloc_base(0x1000);
  param_1[1] = uVar1;
  FUN_1801f42e0(0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}



ulonglong FUN_1801f6a38(FILE *param_1)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;

  if (param_1 == (FILE *)0x0) {
    puVar7 = (undefined4 *)FUN_1801e6ae4();
    *puVar7 = 0x16;
    FUN_1801e1344();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if (((ulonglong)param_1->_base & 0x4c000000000) == 0) {
        __acrt_stdio_allocate_buffer_nolock();
      }
      pcVar3 = *(char **)&param_1->_cnt;
      iVar5 = param_1->_charbuf;
      param_1->_ptr = pcVar3;
      iVar4 = _fileno(param_1);
      iVar5 = FUN_1801f70d0(iVar4,pcVar3,iVar5);
      *(int *)&param_1->_base = iVar5;
      if (1 < iVar5 + 1U) {
        if (((ulonglong)param_1->_base & 0x600000000) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_1802a0870;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)((&DAT_1802a9d80)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) && ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
        bVar2 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (ulonglong)bVar2;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}



int FUN_1801f6ba4(uint param_1,short *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  HANDLE hFile;
  short *psVar4;
  BOOL BVar5;
  ulonglong uVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];

  lVar10 = 0;
  uVar6 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  lVar3 = (&DAT_1802a9d80)[lVar11];
  hFile = *(HANDLE *)(lVar3 + 0x28 + uVar6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 | 4;
  }
  psVar9 = param_2;
  psVar4 = param_2;
  do {
    if (param_2 + param_3 <= psVar4) goto LAB_1801f6d7e;
    sVar8 = *psVar4;
    if (sVar8 == 0x1a) {
      bVar2 = *(byte *)((&DAT_1802a9d80)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      if ((bVar2 & 0x40) != 0) {
        *psVar9 = 0x1a;
        goto LAB_1801f6d7b;
      }
      *(byte *)((&DAT_1802a9d80)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar2 | 2;
      goto LAB_1801f6d7e;
    }
    psVar7 = psVar4 + 1;
    if (sVar8 == 0xd) {
      if (param_2 + param_3 <= psVar7) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_1801f6d42:
          *psVar9 = 0xd;
          goto LAB_1801f6d7b;
        }
        if ((*(byte *)((&DAT_1802a9d80)[lVar11] + 0x38 + uVar6 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] != 10) || (psVar9 != param_2)) {
            FUN_1801f7e60(param_1,0xfffffffffffffffe,1);
            if (local_res8[0] != 10) goto LAB_1801f6d42;
            goto LAB_1801f6d7e;
          }
        }
        else if (local_res8[0] != 10) {
          local_res10[0] = local_res8[0];
          *psVar9 = 0xd;
          do {
            *(undefined1 *)((&DAT_1802a9d80)[lVar11] + (ulonglong)(param_1 & 0x3f) * 0x48 + 0x3a + lVar10) =
                 *(undefined1 *)((longlong)local_res10 + lVar10);
            lVar10 = lVar10 + 1;
          } while (lVar10 < 2);
          *(undefined1 *)((&DAT_1802a9d80)[lVar11] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = 10;
LAB_1801f6d7b:
          psVar9 = psVar9 + 1;
LAB_1801f6d7e:
          return (int)((longlong)psVar9 - (longlong)param_2 >> 1) * 2;
        }
        *psVar9 = 10;
        goto LAB_1801f6d7b;
      }
      if (*psVar7 == 10) {
        psVar7 = psVar4 + 2;
        sVar8 = 10;
      }
    }
    *psVar9 = sVar8;
    psVar9 = psVar9 + 1;
    psVar4 = psVar7;
  } while( true );
}



int FUN_1801f6da0(uint param_1,byte *param_2,longlong param_3,undefined8 param_4,undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  char local_res8 [8];
  DWORD local_res10 [2];

  lVar13 = (longlong)(int)param_1 >> 6;
  uVar12 = (ulonglong)(param_1 & 0x3f);
  lVar2 = (&DAT_1802a9d80)[lVar13];
  hFile = *(HANDLE *)(lVar2 + 0x28 + uVar12 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 & 0xfb;
  }
  else {
    pbVar9 = (byte *)(lVar2 + 0x38 + uVar12 * 0x48);
    *pbVar9 = *pbVar9 | 4;
  }
  pbVar9 = param_2;
  pbVar10 = param_2;
  do {
    if (param_2 + param_3 <= pbVar10) {
LAB_1801f6f0c:
      iVar7 = (int)pbVar9 - (int)param_2;
      if (iVar7 == 0) {
        return 0;
      }
      if (*(char *)((&DAT_1802a9d80)[lVar13] + 0x39 + uVar12 * 0x48) != '\0') {
        pbVar9 = param_2 + iVar7;
        if ((char)pbVar9[-1] < '\0') {
          uVar12 = 1;
          for (pbVar9 = pbVar9 + -1;
              ((uVar11 = (uint)uVar12, (&DAT_1802a08c0)[*pbVar9] == '\0' && (uVar11 < 5)) && (param_2 <= pbVar9));
              pbVar9 = pbVar9 + -1) {
            uVar12 = (ulonglong)(uVar11 + 1);
          }
          if ((&DAT_1802a08c0)[*pbVar9] == '\0') {
            puVar6 = (undefined4 *)FUN_1801e6ae4();
            *puVar6 = 0x2a;
            return -1;
          }
          if ((int)(char)(&DAT_1802a08c0)[*pbVar9] + 1U == uVar11) {
            pbVar9 = pbVar9 + uVar12;
          }
          else if ((*(byte *)((&DAT_1802a9d80)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x48) == 0) {
            FUN_1801f7e60(param_1,(longlong)(int)-uVar11,1);
          }
          else {
            pbVar10 = pbVar9 + 1;
            *(byte *)((&DAT_1802a9d80)[lVar13] + 0x3a + (ulonglong)(param_1 & 0x3f) * 0x48) = *pbVar9;
            if (1 < uVar11) {
              bVar1 = *pbVar10;
              pbVar10 = pbVar9 + 2;
              *(byte *)((&DAT_1802a9d80)[lVar13] + 0x3b + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar1;
            }
            if (uVar11 == 3) {
              bVar1 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              *(byte *)((&DAT_1802a9d80)[lVar13] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar1;
            }
            pbVar9 = pbVar10 + -uVar12;
          }
        }
        iVar8 = (int)pbVar9 - (int)param_2;
        iVar7 = FUN_1801fc2f4(0xfde9,0,param_2,iVar8,param_4,param_5);
        if (iVar7 == 0) {
          DVar4 = GetLastError();
          FUN_1801e6a74(DVar4);
          return -1;
        }
        *(byte *)((&DAT_1802a9d80)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) =
             -(iVar7 != iVar8) & 2U |
             *(byte *)((&DAT_1802a9d80)[lVar13] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) & 0xfd;
        return iVar7 * 2;
      }
      return iVar7;
    }
    bVar1 = *pbVar10;
    if (bVar1 == 0x1a) {
      bVar1 = *(byte *)((&DAT_1802a9d80)[lVar13] + 0x38 + uVar12 * 0x48);
      if ((bVar1 & 0x40) != 0) {
        *pbVar9 = 0x1a;
        goto LAB_1801f6f09;
      }
      *(byte *)((&DAT_1802a9d80)[lVar13] + 0x38 + uVar12 * 0x48) = bVar1 | 2;
      goto LAB_1801f6f0c;
    }
    pbVar5 = pbVar10 + 1;
    if (bVar1 == 0xd) {
      if (param_2 + param_3 <= pbVar5) {
        local_res8[0] = '\0';
        local_res10[0] = 0;
        BVar3 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_res10[0] == 0)) {
          *pbVar9 = 0xd;
        }
        else if ((*(byte *)((&DAT_1802a9d80)[lVar13] + 0x38 + uVar12 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] == '\n') && (pbVar9 == param_2)) goto LAB_1801f6e9a;
          FUN_1801f7e60(param_1,0xffffffffffffffff,1);
          if (local_res8[0] == '\n') goto LAB_1801f6f0c;
          *pbVar9 = 0xd;
        }
        else if (local_res8[0] == '\n') {
LAB_1801f6e9a:
          *pbVar9 = 10;
        }
        else {
          *pbVar9 = 0xd;
          *(char *)((&DAT_1802a9d80)[lVar13] + 0x3a + uVar12 * 0x48) = local_res8[0];
        }
LAB_1801f6f09:
        pbVar9 = pbVar9 + 1;
        goto LAB_1801f6f0c;
      }
      if (*pbVar5 != 10) goto LAB_1801f6e39;
      pbVar5 = pbVar10 + 2;
      *pbVar9 = 10;
    }
    else {
LAB_1801f6e39:
      *pbVar9 = bVar1;
    }
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar5;
  } while( true );
}



undefined4 FUN_1801f70d0(uint param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  if (param_1 == 0xfffffffe) {
    puVar3 = (undefined4 *)FUN_1801e6ac0();
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 9;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_1802aa180 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)
    {
      if (param_3 < 0x80000000) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1)
            == 0) {
          puVar3 = (undefined4 *)FUN_1801e6ae4();
          *puVar3 = 9;
          puVar3 = (undefined4 *)FUN_1801e6ac0();
          *puVar3 = 0;
        }
        else {
          uVar2 = FUN_1801f71f0(param_1,param_2,param_3);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
      puVar3 = (undefined4 *)FUN_1801e6ac0();
      *puVar3 = 0;
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      *puVar3 = 0x16;
      goto LAB_1801f7156;
    }
  }
  puVar3 = (undefined4 *)FUN_1801e6ac0();
  *puVar3 = 0;
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  *puVar3 = 9;
LAB_1801f7156:
  FUN_1801e1344();
  return 0xffffffff;
}



int FUN_1801f71f0(uint param_1,short *param_2,ulonglong param_3)

{
  short *psVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  BOOL BVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  short *psVar11;
  undefined8 uVar12;
  short *psVar13;
  short sVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  short *psVar19;
  DWORD local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  short *local_48;

  if (param_1 == 0xfffffffe) {
    puVar9 = (undefined4 *)FUN_1801e6ac0();
    *puVar9 = 0;
    puVar9 = (undefined4 *)FUN_1801e6ae4();
    *puVar9 = 9;
    return -1;
  }
  psVar11 = (short *)0x0;
  iVar16 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_1802aa180)) {
    uVar10 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar17 = (&DAT_1802a9d80)[local_58];
    if ((*(byte *)(lVar17 + 0x38 + uVar10 * 0x48) & 1) != 0) {
      uVar18 = (uint)param_3;
      if (uVar18 < 0x80000000) {
        if ((uVar18 == 0) || ((*(byte *)(lVar17 + 0x38 + uVar10 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (short *)0x0) {
          local_60 = *(HANDLE *)(lVar17 + 0x28 + uVar10 * 0x48);
          cVar3 = *(char *)(lVar17 + 0x39 + uVar10 * 0x48);
          if (cVar3 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_1801f72ea;
            uVar15 = param_3 >> 1 & 0x7fffffff;
            if ((uint)uVar15 < 4) {
              uVar15 = 4;
            }
            psVar11 = (short *)_malloc_base(uVar15);
            FUN_1801f42e0(0);
            FUN_1801f42e0(0);
            if (psVar11 != (short *)0x0) {
              uVar12 = FUN_1801f7e60(param_1,0,1);
              *(undefined8 *)((&DAT_1802a9d80)[local_58] + 0x30 + uVar10 * 0x48) = uVar12;
              local_48 = psVar11;
              goto LAB_1801f738c;
            }
            puVar9 = (undefined4 *)FUN_1801e6ae4();
            *puVar9 = 0xc;
            puVar9 = (undefined4 *)FUN_1801e6ac0();
            *puVar9 = 8;
          }
          else if ((cVar3 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_1801f72ea:
            puVar9 = (undefined4 *)FUN_1801e6ac0();
            *puVar9 = 0;
            puVar9 = (undefined4 *)FUN_1801e6ae4();
            *puVar9 = 0x16;
            FUN_1801e1344();
          }
          else {
            uVar15 = param_3 & 0xffffffff;
            local_48 = param_2;
LAB_1801f738c:
            psVar19 = local_48;
            if ((((*(byte *)((&DAT_1802a9d80)[local_58] + 0x38 + uVar10 * 0x48) & 0x48) != 0) &&
                (cVar4 = *(char *)((&DAT_1802a9d80)[local_58] + 0x3a + uVar10 * 0x48), cVar4 != '\n')) &&
               (iVar6 = (int)uVar15, iVar6 != 0)) {
              *(char *)local_48 = cVar4;
              uVar15 = (ulonglong)(iVar6 - 1U);
              psVar19 = (short *)((longlong)local_48 + 1);
              iVar16 = 1;
              *(undefined1 *)((&DAT_1802a9d80)[local_58] + 0x3a + uVar10 * 0x48) = 10;
              if (((cVar3 != '\0') &&
                  (cVar4 = *(char *)((&DAT_1802a9d80)[local_58] + 0x3b + uVar10 * 0x48), cVar4 != '\n')) &&
                 (iVar6 - 1U != 0)) {
                *(char *)psVar19 = cVar4;
                psVar19 = local_48 + 1;
                uVar15 = (ulonglong)(iVar6 - 2U);
                *(undefined1 *)((&DAT_1802a9d80)[local_58] + 0x3b + uVar10 * 0x48) = 10;
                iVar16 = 2;
                if (((cVar3 == '\x01') &&
                    (cVar4 = *(char *)((&DAT_1802a9d80)[local_58] + 0x3c + uVar10 * 0x48), cVar4 != '\n')) &&
                   (iVar16 = 2, iVar6 - 2U != 0)) {
                  *(char *)psVar19 = cVar4;
                  iVar16 = 3;
                  psVar19 = (short *)((longlong)local_48 + 3);
                  uVar15 = (ulonglong)(iVar6 - 3);
                  *(undefined1 *)((&DAT_1802a9d80)[local_58] + 0x3c + uVar10 * 0x48) = 10;
                }
              }
            }
            local_68[0] = 0;
            iVar6 = FUN_180201f7c(param_1);
            if (((iVar6 == 0) || (-1 < *(char *)((&DAT_1802a9d80)[local_58] + 0x38 + uVar10 * 0x48))) ||
               (BVar7 = GetConsoleMode(local_60,local_68), BVar7 == 0)) {
              local_50 = local_50 & 0xffffffffffffff00;
LAB_1801f74c2:
              local_res20[0] = 0;
              BVar7 = ReadFile(local_60,psVar19,(DWORD)uVar15,local_res20,(LPOVERLAPPED)0x0);
              if ((BVar7 != 0) && (uVar5 = local_res20[0], local_res20[0] <= uVar18)) {
LAB_1801f7504:
                iVar16 = iVar16 + uVar5;
                if (*(char *)((&DAT_1802a9d80)[local_58] + 0x38 + uVar10 * 0x48) < '\0') {
                  if (cVar3 == '\x02') {
                    if ((char)local_50 == '\0') {
                      iVar16 = FUN_1801f6ba4(param_1,local_48);
                    }
                    else {
                      psVar1 = (short *)((longlong)local_48 + ((longlong)iVar16 & 0xfffffffffffffffeU));
                      psVar19 = local_48;
                      for (psVar13 = local_48; psVar13 < psVar1; psVar13 = (short *)((longlong)psVar13 + lVar17)) {
                        sVar14 = *psVar13;
                        if (sVar14 == 0x1a) {
                          pbVar2 = (byte *)((&DAT_1802a9d80)[local_58] + 0x38 + uVar10 * 0x48);
                          *pbVar2 = *pbVar2 | 2;
                          break;
                        }
                        if (((sVar14 == 0xd) && (psVar13 + 1 < psVar1)) && (psVar13[1] == 10)) {
                          sVar14 = 10;
                          lVar17 = 4;
                        }
                        else {
                          lVar17 = 2;
                        }
                        *psVar19 = sVar14;
                        psVar19 = psVar19 + 1;
                      }
                      iVar16 = (int)((longlong)psVar19 - (longlong)local_48 >> 1) * 2;
                    }
                  }
                  else {
                    iVar16 = FUN_1801f6da0(param_1,psVar19,(longlong)iVar16,param_2,(param_3 & 0xffffffff) >> 1);
                  }
                }
                goto LAB_1801f74a2;
              }
              DVar8 = GetLastError();
              if (DVar8 != 5) {
                if (DVar8 == 0x6d) {
                  iVar16 = 0;
                  goto LAB_1801f74a2;
                }
                goto LAB_1801f7498;
              }
              puVar9 = (undefined4 *)FUN_1801e6ae4();
              *puVar9 = 9;
              puVar9 = (undefined4 *)FUN_1801e6ac0();
              *puVar9 = 5;
            }
            else {
              if (cVar3 != '\x02') goto LAB_1801f74c2;
              local_res20[0] = 0;
              BVar7 = ReadConsoleW(local_60,psVar19,(DWORD)(uVar15 >> 1),local_res20,(PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar7 != 0) {
                uVar5 = local_res20[0] * 2;
                goto LAB_1801f7504;
              }
              DVar8 = GetLastError();
LAB_1801f7498:
              FUN_1801e6a74(DVar8);
            }
          }
          iVar16 = -1;
LAB_1801f74a2:
          FUN_1801f42e0(psVar11);
          return iVar16;
        }
      }
      puVar9 = (undefined4 *)FUN_1801e6ac0();
      *puVar9 = 0;
      puVar9 = (undefined4 *)FUN_1801e6ae4();
      *puVar9 = 0x16;
      goto LAB_1801f762f;
    }
  }
  puVar9 = (undefined4 *)FUN_1801e6ac0();
  *puVar9 = 0;
  puVar9 = (undefined4 *)FUN_1801e6ae4();
  *puVar9 = 9;
LAB_1801f762f:
  FUN_1801e1344();
  return -1;
}



undefined8 FUN_1801f7650(longlong param_1,longlong param_2)

{
  undefined8 uVar1;

  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    FUN_1801e230c();
    uVar1 = FUN_1801f76bc(param_1,param_2);
    FUN_1801e2318(param_1);
  }
  return uVar1;
}



ulonglong FUN_1801f76bc(FILE *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_2);
  }
  else {
    uVar2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(undefined4 *)&param_1->_base = 0;
    }
    lVar3 = thunk_FUN_1801f7bec(uVar2,0,1,param_2);
    if (-1 < lVar3) {
      if (((ulonglong)param_1->_base & 0xc000000000) == 0) {
        return lVar3 - *(int *)&param_1->_base;
      }
      uVar6 = (longlong)param_1->_ptr - *(longlong *)&param_1->_cnt;
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_1802a9d80)[lVar5] + 0x39 + uVar4 * 0x48);
      if (((ulonglong)param_1->_base & 0x300000000) == 0) {
        if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 0x30) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') && ((*(byte *)((&DAT_1802a9d80)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          uVar4 = FUN_1801f7968(param_1,lVar3,param_2);
          return uVar4;
        }
        if (*(char *)((&DAT_1802a9d80)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_1801f7af0(*(undefined8 *)&param_1->_cnt,param_1->_ptr,CONCAT71(0x1802a9d,cVar1));
          uVar6 = uVar6 + lVar5;
        }
      }
      if (lVar3 == 0) {
        return uVar6;
      }
      if (((ulonglong)param_1->_base & 0x100000000) == 0) {
        if (cVar1 == '\x01') {
          uVar6 = uVar6 >> 1;
        }
        return uVar6 + lVar3;
      }
      uVar4 = FUN_1801f780c(param_1,lVar3,uVar6,param_2);
      return uVar4;
    }
  }
  return 0xffffffffffffffff;
}



longlong FUN_1801f780c(FILE *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;

  uVar2 = _fileno(param_1);
  uVar4 = (ulonglong)(uVar2 & 0x3f);
  cVar1 = *(char *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + 0x39 + uVar4 * 0x48);
  lVar7 = (ulonglong)(cVar1 == '\x01') + 1;
  if (*(int *)&param_1->_base != 0) {
    pcVar6 = param_1->_ptr + ((longlong)*(int *)&param_1->_base - *(longlong *)&param_1->_cnt);
    if (*(char *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) < '\0') {
      lVar3 = thunk_FUN_1801f7bec(uVar2,0,2,param_4);
      if (lVar3 == param_2) {
        lVar3 = FUN_1801f7af0(*(longlong *)&param_1->_cnt,pcVar6 + *(longlong *)&param_1->_cnt,cVar1);
        bVar8 = (*(uint *)((longlong)&param_1->_base + 4) >> 5 & 1) == 0;
        pcVar6 = pcVar6 + lVar3;
      }
      else {
        lVar3 = thunk_FUN_1801f7bec(uVar2,param_2,0,param_4);
        if (lVar3 == -1) {
          return -1;
        }
        pcVar5 = (char *)0x200;
        if (((0x200 < (longlong)pcVar6) || ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) == 0)) ||
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) != 0)) {
          pcVar5 = (char *)(longlong)param_1->_charbuf;
        }
        bVar8 = (*(byte *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) & 4) == 0;
        pcVar6 = pcVar5;
      }
      if (!bVar8) {
        pcVar6 = pcVar6 + (ulonglong)((byte)(cVar1 - 1U) < 2) + 1;
      }
    }
    param_2 = (param_3 / lVar7 - (longlong)pcVar6 / lVar7) + param_2;
  }
  return param_2;
}



void FUN_1801f7968(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 auStackY_1088 [32];
  DWORD local_1058 [3];
  byte abStack_1049 [4097];
  ulonglong local_48;
  undefined8 uStack_40;

  uStack_40 = 0x1801f7982;
  local_48 = DAT_1802a0400 ^ (ulonglong)auStackY_1088;
  uVar1 = _fileno(param_1);
  lVar7 = 0;
  if (*(int *)&param_1->_base != 0) {
    uVar5 = (ulonglong)(uVar1 & 0x3f);
    lVar3 = ((longlong)param_1->_ptr - *(longlong *)&param_1->_cnt) / 2;
    lVar4 = thunk_FUN_1801f7bec(uVar1,*(undefined8 *)((&DAT_1802a9d80)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar5 * 0x48)
                                ,0,param_3);
    if (lVar4 == *(longlong *)((&DAT_1802a9d80)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar5 * 0x48)) {
      local_1058[0] = 0;
      BVar2 = ReadFile(*(HANDLE *)((&DAT_1802a9d80)[(longlong)(int)uVar1 >> 6] + 0x28 + uVar5 * 0x48),abStack_1049 + 1,
                       0x1000,local_1058,(LPOVERLAPPED)0x0);
      if (((BVar2 != 0) && (lVar4 = thunk_FUN_1801f7bec(uVar1,param_2,0,param_3), -1 < lVar4)) &&
         (uVar5 = (ulonglong)local_1058[0], lVar3 <= (longlong)uVar5)) {
        pbVar6 = abStack_1049;
        if (lVar3 != 0) {
          do {
            pbVar6 = pbVar6 + 1;
            if (abStack_1049 + uVar5 + 1 <= pbVar6) {
            }
            if (*pbVar6 == 0xd) {
              if ((pbVar6 < abStack_1049 + uVar5) && (pbVar6[1] == 10)) {
                pbVar6 = pbVar6 + 1;
              }
            }
            else {
              pbVar6 = pbVar6 + (char)(&DAT_1802a08c0)[*pbVar6];
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != lVar3);
        }
      }
    }
  }
}



longlong FUN_1801f7af0(short *param_1,short *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;

  if (1 < (byte)(param_3 - 1U)) {
    lVar2 = 0;
    for (; param_1 != param_2; param_1 = (short *)((longlong)param_1 + 1)) {
      lVar1 = lVar2 + 1;
      if ((char)*param_1 != '\n') {
        lVar1 = lVar2;
      }
      lVar2 = lVar1;
    }
    return lVar2;
  }
  lVar2 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = lVar2 + 1;
    if (*param_1 != 10) {
      lVar1 = lVar2;
    }
    lVar2 = lVar1;
  }
  return lVar2 * 2;
}



undefined8 FUN_1801f7b48(undefined4 param_1)

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
    param_1 = PTR_PTR_1802a0858._0_4_;
  }
  uVar1 = FUN_1801f7650(param_1,local_48);
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



ulonglong thunk_FUN_1801f76bc(FILE *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;

  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_2);
  }
  else {
    uVar2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(undefined4 *)&param_1->_base = 0;
    }
    lVar3 = thunk_FUN_1801f7bec(uVar2,0,1,param_2);
    if (-1 < lVar3) {
      if (((ulonglong)param_1->_base & 0xc000000000) == 0) {
        return lVar3 - *(int *)&param_1->_base;
      }
      uVar6 = (longlong)param_1->_ptr - *(longlong *)&param_1->_cnt;
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_1802a9d80)[lVar5] + 0x39 + uVar4 * 0x48);
      if (((ulonglong)param_1->_base & 0x300000000) == 0) {
        if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 0x30) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') && ((*(byte *)((&DAT_1802a9d80)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          uVar4 = FUN_1801f7968(param_1,lVar3,param_2);
          return uVar4;
        }
        if (*(char *)((&DAT_1802a9d80)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_1801f7af0(*(undefined8 *)&param_1->_cnt,param_1->_ptr,CONCAT71(0x1802a9d,cVar1));
          uVar6 = uVar6 + lVar5;
        }
      }
      if (lVar3 == 0) {
        return uVar6;
      }
      if (((ulonglong)param_1->_base & 0x100000000) == 0) {
        if (cVar1 == '\x01') {
          uVar6 = uVar6 >> 1;
        }
        return uVar6 + lVar3;
      }
      uVar4 = FUN_1801f780c(param_1,lVar3,uVar6,param_2);
      return uVar4;
    }
  }
  return 0xffffffffffffffff;
}



undefined8 FUN_1801f7bec(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined8 uVar2;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1802aa180 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1) !=
          0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffffffffffff;
        if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1)
            == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_1801f7d0c(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_1801e128c(0,0,0,0,0,param_4);
  }
  return 0xffffffffffffffff;
}



longlong FUN_1801f7d0c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];

  hFile = (HANDLE)FUN_180202488(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_1801e6a9c(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)local_18[0].s;
    }
  }
  return -1;
}



undefined8 FUN_1801f7dbc(void)

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
  uVar1 = FUN_1801f7bec();
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



undefined8 thunk_FUN_1801f7bec(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined8 uVar2;

  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1802aa180 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1) !=
          0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffffffffffff;
        if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 1)
            == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_1801f7d0c(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_1801e128c(0,0,0,0,0,param_4);
  }
  return 0xffffffffffffffff;
}



undefined8 FUN_1801f7e60(void)

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
  uVar1 = FUN_1801f7d0c();
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



longlong thunk_FUN_1801f7d0c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];

  hFile = (HANDLE)FUN_180202488(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    aLStack_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_1801e6a9c(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)aLStack_18[0].s;
    }
  }
  return -1;
}



undefined8 FUN_1801f7f04(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined8 uVar5;

  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_1802a9d80)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_180202488();
    BVar1 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar1 != 0) goto LAB_1801f7f7b;
    DVar2 = GetLastError();
    pDVar3 = (DWORD *)FUN_1801e6ac0();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_1801e6ae4();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_1801f7f7b:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}



int __cdecl _commit(int _FileHandle)

{
  int iVar1;
  undefined4 *puVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];

  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1802aa180)) &&
       ((*(byte *)((&DAT_1802a9d80)[(longlong)_FileHandle >> 6] + 0x38 + (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) !=
        0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVar1 = FUN_1801f7f04(local_res10,local_res20,local_18,local_res18);
      return iVar1;
    }
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 9;
    FUN_1801e1344();
  }
  return -1;
}



LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;

  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_1802aa2f0,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_180201f40();
    } while ((iVar1 != 0) && (iVar1 = FUN_1801f0240(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



undefined8
FUN_1801f8090(double *param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,uint param_6,
             byte param_7,undefined4 param_8,__acrt_rounding_mode param_9,longlong param_10)

{
  bool bVar1;
  ushort uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;

  *param_2 = 0;
  uVar12 = 0;
  if (-1 < (int)param_6) {
    uVar12 = param_6;
  }
  if (param_3 <= (ulonglong)(longlong)(int)(uVar12 + 0xb)) {
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x22;
    FUN_1801e128c(0,0,0,0,0,param_10);
    return 0x22;
  }
  if (((ulonglong)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    uVar3 = FUN_1801f8424(param_1,param_2,param_3,param_4,param_5,uVar12,0,param_8,param_9,param_10);
    if ((int)uVar3 != 0) {
      *param_2 = 0;
      return uVar3;
    }
    pcVar4 = (char *)FUN_1802073cc(param_2,0x65);
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    *pcVar4 = (param_7 ^ 1) * ' ' + 'P';
    pcVar4[3] = '\0';
    return 0;
  }
  if ((longlong)*param_1 < 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  pcVar4 = param_2 + 1;
  uVar15 = 0x3ff;
  sVar10 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    *param_2 = 0x30;
    uVar15 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    *param_2 = 0x31;
  }
  pcVar11 = param_2 + 2;
  if (uVar12 == 0) {
    cVar8 = '\0';
  }
  else {
    if (*(char *)(param_10 + 0x28) == '\0') {
      FUN_1801e6290(param_10);
    }
    cVar8 = *(char *)**(undefined8 **)(*(longlong *)(param_10 + 0x18) + 0xf8);
  }
  *pcVar4 = cVar8;
  if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
    sVar9 = 0x30;
    uVar14 = 0xf000000000000;
    while (0 < (int)uVar12) {
      uVar2 = (short)(((ulonglong)*param_1 & uVar14) >> ((byte)sVar9 & 0x3f)) + 0x30;
      if (0x39 < uVar2) {
        uVar2 = uVar2 + sVar10;
      }
      *pcVar11 = (char)uVar2;
      uVar12 = uVar12 - 1;
      pcVar11 = pcVar11 + 1;
      uVar14 = uVar14 >> 4;
      sVar9 = sVar9 + -4;
      if (sVar9 < 0) goto LAB_1801f82e2;
    }
    bVar1 = should_round_up(param_1,uVar14,sVar9,param_9);
    pcVar13 = pcVar11;
    if (!bVar1) goto LAB_1801f8308;
    while( true ) {
      pcVar5 = pcVar13 + -1;
      cVar8 = *pcVar5;
      if ((cVar8 + 0xbaU & 0xdf) != 0) break;
      *pcVar5 = '0';
      pcVar13 = pcVar5;
    }
    if (pcVar5 == pcVar4) {
      pcVar13[-2] = pcVar13[-2] + '\x01';
    }
    else {
      if (cVar8 == '9') {
        cVar8 = (char)sVar10 + '9';
      }
      *pcVar5 = cVar8 + '\x01';
    }
  }
LAB_1801f82e2:
  if (0 < (int)uVar12) {
    FUN_180207610(pcVar11,0x30,uVar12);
    pcVar11 = pcVar11 + uVar12;
  }
LAB_1801f8308:
  if (*pcVar4 == '\0') {
    pcVar11 = pcVar4;
  }
  *pcVar11 = (param_7 ^ 1) * ' ' + 'P';
  pcVar4 = pcVar11 + 2;
  uVar12 = (uint)((ulonglong)*param_1 >> 0x34) & 0x7ff;
  lVar6 = uVar12 - uVar15;
  lVar7 = lVar6;
  if (lVar6 < 0) {
    lVar7 = uVar15 - uVar12;
  }
  cVar8 = '+';
  if (lVar6 < 0) {
    cVar8 = '-';
  }
  pcVar11[1] = cVar8;
  *pcVar4 = '0';
  pcVar13 = pcVar4;
  if (lVar7 < 1000) {
LAB_1801f838f:
    if (99 < lVar7) goto LAB_1801f8395;
LAB_1801f83c8:
    if (lVar7 < 10) goto LAB_1801f83f9;
  }
  else {
    pcVar13 = pcVar11 + 3;
    *pcVar4 = (char)(lVar7 / 1000) + '0';
    lVar7 = lVar7 % 1000;
    if (pcVar13 == pcVar4) goto LAB_1801f838f;
LAB_1801f8395:
    lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar7),8) + lVar7;
    lVar6 = (lVar6 >> 6) - (lVar6 >> 0x3f);
    *pcVar13 = (char)lVar6 + '0';
    pcVar13 = pcVar13 + 1;
    lVar7 = lVar7 + lVar6 * -100;
    if (pcVar13 == pcVar4) goto LAB_1801f83c8;
  }
  *pcVar13 = (char)(lVar7 / 10) + '0';
  pcVar13 = pcVar13 + 1;
  lVar7 = lVar7 % 10;
LAB_1801f83f9:
  *pcVar13 = (char)lVar7 + '0';
  pcVar13[1] = '\0';
  return 0;
}



void FUN_1801f8424(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
                  int param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,ulonglong param_10)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_18;
  undefined8 uStack_10;

  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_1802028b0(*param_1,param_6 + 1,1,&local_18,param_4,param_5);
  lVar3 = (param_3 - (ulonglong)(0 < param_6)) - (ulonglong)((int)local_18 == 0x2d);
  if (param_3 == -1) {
    lVar3 = -1;
  }
  uVar4 = param_10;
  iVar2 = FUN_1802027a0(param_2 + (ulonglong)(0 < param_6) + (ulonglong)((int)local_18 == 0x2d),lVar3,param_6 + 1,
                        &local_18,uVar1,param_9,param_10);
  if (iVar2 == 0) {
    FUN_1801f8528(param_2,param_3,param_6,param_7,param_8,&local_18,uVar4 & 0xffffffffffffff00,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}



undefined8
FUN_1801f8528(undefined1 *param_1,ulonglong param_2,int param_3,char param_4,int param_5,int *param_6,byte param_7,
             longlong param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;

  iVar1 = 0;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  if ((ulonglong)(longlong)(iVar1 + 9) < param_2) {
    if ((param_7 != 0) && (puVar3 = param_1 + (*param_6 == 0x2d), 0 < param_3)) {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (puVar3[lVar4] != '\0');
      FUN_1802079d0(puVar3 + 1,puVar3,lVar5 + 2);
    }
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      param_1 = param_1 + 1;
    }
    if (0 < param_3) {
      *param_1 = param_1[1];
      param_1 = param_1 + 1;
      if (*(char *)(param_8 + 0x28) == '\0') {
        FUN_1801e6290(param_8);
      }
      *param_1 = *(undefined1 *)**(undefined8 **)(*(longlong *)(param_8 + 0x18) + 0xf8);
    }
    param_1 = param_1 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    iVar1 = FUN_1801f2250();
    if (iVar1 != 0) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *param_1 = 0x45;
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVar1 = param_6[1] + -1;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
        param_1[1] = 0x2d;
      }
      if (99 < iVar1) {
        param_1[2] = param_1[2] + (char)(iVar1 / 100);
        iVar1 = iVar1 % 100;
      }
      if (9 < iVar1) {
        param_1[3] = param_1[3] + (char)(iVar1 / 10);
        iVar1 = iVar1 % 10;
      }
      param_1[4] = param_1[4] + (char)iVar1;
    }
    if ((param_5 == 2) && (param_1[2] == '0')) {
      FUN_1802079d0(param_1 + 2,param_1 + 3,3);
    }
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_8 + 0x30) = 1;
    *(undefined4 *)(param_8 + 0x2c) = 0x22;
    FUN_1801e128c(0,0,0,0,0,param_8);
    uVar2 = 0x22;
  }
  return uVar2;
}



void FUN_1801f870c(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
                  int param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_18;
  undefined8 uStack_10;

  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_1802028b0(*param_1,param_6,0,&local_18,param_4,param_5);
  lVar3 = param_3 - (ulonglong)((int)local_18 == 0x2d);
  uVar4 = CONCAT44((int)((ulonglong)param_4 >> 0x20),uVar1);
  if (param_3 == -1) {
    lVar3 = -1;
  }
  iVar2 = FUN_1802027a0(param_2 + ((int)local_18 == 0x2d),lVar3,local_18._4_4_ + param_6,&local_18,uVar4,param_7,param_8
                       );
  if (iVar2 == 0) {
    FUN_1801f87e4(param_2,param_3,param_6,&local_18,uVar4 & 0xffffffffffffff00,param_8);
  }
  else {
    *param_2 = 0;
  }
  return;
}



undefined8 FUN_1801f87e4(undefined1 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,longlong param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;

  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(undefined2 *)(param_1 + (longlong)param_4[1] + -1 + (ulonglong)(*param_4 == 0x2d)) = 0x30;
  }
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    param_1 = param_1 + 1;
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      lVar5 = -1;
      do {
        lVar4 = lVar5;
        lVar5 = lVar4 + 1;
      } while (param_1[lVar5] != '\0');
      FUN_1802079d0(param_1 + 1,param_1,lVar4 + 2);
    }
    *param_1 = 0x30;
    param_1 = param_1 + 1;
  }
  else {
    param_1 = param_1 + iVar3;
  }
  if (0 < param_3) {
    puVar1 = param_1 + 1;
    lVar5 = -1;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4 + 1;
    } while (param_1[lVar5] != '\0');
    FUN_1802079d0(puVar1,param_1,lVar4 + 2);
    if (*(char *)(param_6 + 0x28) == '\0') {
      FUN_1801e6290(param_6);
    }
    *param_1 = *(undefined1 *)**(undefined8 **)(*(longlong *)(param_6 + 0x18) + 0xf8);
    if (param_4[1] < 0) {
      iVar3 = -param_4[1];
      if ((param_5 != '\0') || (iVar3 < param_3)) {
        param_3 = iVar3;
      }
      lVar5 = -1;
      do {
        lVar4 = lVar5;
        lVar5 = lVar4 + 1;
      } while (puVar1[lVar5] != '\0');
      FUN_1802079d0(puVar1 + param_3,puVar1,lVar4 + 2);
      FUN_180207610(puVar1,0x30,(longlong)param_3);
    }
  }
  return 0;
}



void FUN_1801f8934(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
                  int param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,undefined8 param_10)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_18;
  undefined8 uStack_10;

  local_18 = 0;
  uStack_10 = 0;
  uVar2 = FUN_1802028b0(*param_1,param_6,0,&local_18,param_4,param_5);
  bVar7 = (int)local_18 == 0x2d;
  lVar4 = param_3 - (ulonglong)bVar7;
  iVar6 = local_18._4_4_ + -1;
  if (param_3 == -1) {
    lVar4 = -1;
  }
  iVar3 = FUN_1802027a0(param_2 + bVar7,lVar4,param_6,&local_18,uVar2,param_9,param_10);
  if (iVar3 == 0) {
    iVar3 = local_18._4_4_ + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      FUN_1801f8528(param_2,param_3,param_6,param_7,param_8,&local_18,1,param_10);
    }
    else {
      pcVar1 = param_2 + bVar7;
      if (iVar6 < iVar3) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      FUN_1801f87e4(param_2,param_3,param_6,&local_18,1,param_10);
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}



bool __cdecl should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;

  bVar4 = (byte)param_3;
  uVar2 = (ushort)(((ulonglong)*param_1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
  if (param_4 == 0) {
    return 7 < uVar2;
  }
  iVar3 = fegetround();
  if (iVar3 == 0) {
    dVar1 = *param_1;
    uVar2 = (ushort)(((ulonglong)dVar1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
    if (8 < uVar2) {
      return true;
    }
    if (7 < uVar2) {
      if (((1L << (bVar4 & 0x3f)) - 1U & (ulonglong)dVar1 & 0xfffffffffffff) == 0) {
        if (param_3 == 0x30) {
          bVar4 = ((ulonglong)dVar1 & 0x7ff0000000000000) != 0;
        }
        else {
          bVar4 = (byte)(((ulonglong)dVar1 >> 4 & param_2 & 0xffffffffffff) >> (bVar4 & 0x3f));
        }
        return (bool)(bVar4 & 1);
      }
      return true;
    }
  }
  else if (iVar3 == 0x200) {
    if ((uVar2 != 0) && (-1 < (longlong)*param_1)) {
      return true;
    }
  }
  else {
    if (iVar3 != 0x100) {
      return false;
    }
    if ((uVar2 != 0) && ((longlong)*param_1 < 0)) {
      return true;
    }
  }
  return false;
}



undefined8
FUN_1801f8ba0(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,longlong param_5,int param_6,
             undefined4 param_7,ulonglong param_8,uint param_9,longlong param_10)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar8;

  if (param_2 == (undefined1 *)0x0) {
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      if (((param_8 & 8) == 0) && (uVar1 = *param_1, ((uint)(uVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        if ((uVar1 & 0xfffffffffffff) == 0) {
          lVar4 = 0;
        }
        else if (((longlong)uVar1 < 0) && ((uVar1 & 0xfffffffffffff) == 0x8000000000000)) {
          lVar4 = 0xc;
        }
        else {
          lVar4 = (-(ulonglong)((uVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8;
        }
        if (param_3 < 4U - ((longlong)uVar1 >> 0x3f)) {
          *param_2 = 0;
          return 0xc;
        }
        lVar7 = -1;
        if ((longlong)uVar1 < 0) {
          *param_2 = 0x2d;
          param_2[1] = 0;
        }
        do {
          lVar7 = lVar7 + 1;
        } while ((&PTR_DAT_180249710)[(ulonglong)((uVar6 ^ 1) * 2) + lVar4][lVar7] != '\0');
        iVar2 = FUN_1801f2250();
        if (iVar2 == 0) {
          return 0;
        }
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = (undefined4)(param_8 >> 4);
      param_9 = -(uint)((param_8 & 0x20) != 0) & param_9;
      uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
      if (param_6 != 0x41) {
        if (param_6 == 0x45) {
LAB_1801f8ded:
          uVar3 = FUN_1801f8424(param_1,param_2,param_3,param_4,param_5,param_7,uVar6,
                                CONCAT44(uVar8,uVar5) & 0xffffffff00000001 | 2,param_9,param_10);
          return uVar3;
        }
        if (param_6 == 0x46) {
LAB_1801f8dbc:
          uVar3 = FUN_1801f870c(param_1,param_2,param_3,param_4,param_5,param_7,param_9,param_10);
          return uVar3;
        }
        if (param_6 != 0x47) {
          if (param_6 == 0x61) goto LAB_1801f8e27;
          if (param_6 == 0x65) goto LAB_1801f8ded;
          if (param_6 == 0x66) goto LAB_1801f8dbc;
        }
        uVar3 = FUN_1801f8934(param_1,param_2,param_3,param_4,param_5,param_7,uVar6,
                              CONCAT44(uVar8,uVar5) & 0xffffffff00000001 | 2,param_9,param_10);
        return uVar3;
      }
LAB_1801f8e27:
      uVar3 = FUN_1801f8090(param_1,param_2,param_3,param_4,param_5,param_7,uVar6,
                            CONCAT44(uVar8,uVar5) & 0xffffffff00000001 | 2,param_9,param_10);
      return uVar3;
    }
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x16;
  }
  FUN_1801e128c(0,0,0,0,0,param_10);
  return 0x16;
}



undefined4 FUN_1801f8e88(int *param_1,undefined1 *param_2,ulonglong param_3,ushort param_4,longlong param_5)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  ulonglong local_res10;
  ushort local_res20 [4];
  undefined8 in_stack_ffffffffffffffd0;

  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((param_2 == (undefined1 *)0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if (*(char *)(param_5 + 0x28) == '\0') {
      FUN_1801e6290(param_5);
    }
    iVar1 = *(int *)(*(longlong *)(param_5 + 0x18) + 0xc);
    if (iVar1 == 0xfde9) {
      local_res10 = 0;
      iVar1 = FUN_180203b30(param_2,local_res20[0],&local_res10,param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = iVar1;
      }
      if (iVar1 < 5) {
        return 0;
      }
      if (*(char *)(param_5 + 0x30) != '\0') {
        return *(undefined4 *)(param_5 + 0x2c);
      }
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x138) == 0) {
      if (0xff < local_res20[0]) {
        if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
          FUN_180207610(param_2,0,param_3);
        }
        goto LAB_1801f8f6a;
      }
      if (param_2 == (undefined1 *)0x0) {
LAB_1801f8f96:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        *param_2 = (char)local_res20[0];
        goto LAB_1801f8f96;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar1 = FUN_1801fc384(iVar1,0,local_res20,1,param_2,CONCAT44(uVar3,(int)param_3),0,&local_res10);
      if (iVar1 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar1;
          return 0;
        }
LAB_1801f8f6a:
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 0x30) = 1;
        return 0x2a;
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x7a) goto LAB_1801f8f6a;
      if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
        FUN_180207610(param_2,0,param_3);
      }
    }
    uVar3 = 0x22;
  }
  else {
    uVar3 = 0x16;
  }
  *(undefined4 *)(param_5 + 0x2c) = uVar3;
  *(undefined1 *)(param_5 + 0x30) = 1;
  FUN_1801e128c(0,0,0,0,0,param_5);
  return uVar3;
}



int FUN_1801f9038(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;

  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_1802aa188 = 0;
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_4 + 0x28) == '\0') {
        FUN_1801e6290(param_4);
      }
      plVar2 = *(longlong **)(param_4 + 0x18);
      iVar3 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar3 != 0xfde9) {
        if (plVar2[0x27] == 0) {
          if (param_1 != (ushort *)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
          iVar1 = (int)plVar2[1];
          if ((((1 < iVar1) && (iVar1 <= (int)param_3)) &&
              (iVar3 = FUN_1801fc2f4(iVar3,9,param_2,iVar1,param_1,param_1 != (ushort *)0x0), iVar3 != 0)) ||
             (((ulonglong)(longlong)*(int *)(*(longlong *)(param_4 + 0x18) + 8) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(*(longlong *)(param_4 + 0x18) + 8);
          }
        }
        else {
          iVar3 = FUN_1801fc2f4(iVar3,9,param_2,1,param_1,param_1 != (ushort *)0x0);
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 0x30) = 1;
        *(undefined4 *)(param_4 + 0x2c) = 0x2a;
        return -1;
      }
      iVar3 = FUN_1801f944c(param_1,param_2,param_3,&DAT_1802aa188,param_4);
      if (iVar3 < 0) {
        return -1;
      }
      return iVar3;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}



ulonglong FUN_1801f91b0(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;

  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}



void FUN_1801f91e8(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,undefined8 param_5)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_78;
  puVar4 = (uint *)&DAT_1802aa190;
  if (param_4 != (uint *)0x0) {
    puVar4 = param_4;
  }
  pbVar5 = &DAT_18024267e;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) {
  }
  if (*(short *)((longlong)puVar4 + 6) == 0) {
    uVar3 = FUN_1801f91b0(pbVar5);
    uVar7 = (ulonglong)(int)uVar3;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (uVar3 < 2) {
      if (puVar10 == (uint *)0x0) {
      }
      *puVar10 = (uint)bVar1;
    }
    if (2 < uVar3 - 2) goto LAB_1801f937e;
    bVar6 = (byte)uVar3;
    uVar3 = (1 << (7 - bVar6 & 0x1f)) - 1U & (uint)bVar1;
  }
  else {
    bVar1 = (byte)puVar4[1];
    uVar7 = (ulonglong)bVar1;
    uVar3 = *puVar4;
    bVar6 = *(byte *)((longlong)puVar4 + 6);
    if (((2 < (byte)(bVar1 - 2)) || (bVar6 == 0)) || (bVar1 <= bVar6)) goto LAB_1801f937e;
  }
  uVar9 = (ulonglong)bVar6;
  uVar8 = uVar9;
  if (uVar2 <= uVar9) {
    uVar8 = uVar2;
  }
  while ((ulonglong)((longlong)pbVar5 - (longlong)param_2) < uVar8) {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if ((bVar1 & 0xc0) != 0x80) goto LAB_1801f937e;
    uVar3 = bVar1 & 0x3f | uVar3 << 6;
  }
  if (uVar8 < uVar9) {
    *(ushort *)(puVar4 + 1) = (ushort)uVar7 & 0xff;
    *(ushort *)((longlong)puVar4 + 6) = (ushort)(byte)(bVar6 - (char)uVar8);
    *puVar4 = uVar3;
  }
  if ((0x7ff < uVar3 - 0xd800) && (uVar3 < 0x110000)) {
    auStack_60[2] = 0x80;
    auStack_60[3] = 0x800;
    auStack_60[4] = 0x10000;
    if (auStack_60[uVar7 & 0xff] <= uVar3) {
      if (puVar10 != (uint *)0x0) {
        *puVar10 = uVar3;
      }
      FUN_180203bd4(-(ulonglong)(uVar3 != 0) & uVar9,puVar4);
    }
  }
LAB_1801f937e:
  FUN_180203bdc(puVar4,param_5);
}



undefined8 FUN_1801f93a8(undefined8 param_1,uint param_2,int *param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_res18 [2];

  piVar3 = &DAT_1802aa198;
  if (param_3 != (int *)0x0) {
    piVar3 = param_3;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*piVar3 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *piVar3 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVar2 = FUN_180203b30(param_1,param_2 & 0xffff,piVar3);
      return uVar2;
    }
  }
  else if (uVar1 < 0x400) {
    local_res18[0] = 0;
    uVar2 = FUN_180203b30(param_1,(param_2 & 0x23ff) + *piVar3,local_res18);
    uVar2 = FUN_180203bd4(uVar2,piVar3);
    return uVar2;
  }
  uVar2 = FUN_180203bdc(piVar3,param_4);
  return uVar2;
}



void FUN_1801f944c(undefined2 *param_1)

{
  ulonglong uVar1;
  uint local_18 [4];

  local_18[0] = 0;
  uVar1 = FUN_1801f91e8(local_18);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}



char * FUN_1801f9494(ushort *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,longlong param_5)

{
  longlong lVar1;
  char *pcVar2;
  ushort *puVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  uint local_res8 [2];

  pcVar5 = (char *)*param_2;
  pcVar4 = (char *)0x0;
  puVar3 = param_1;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      lVar1 = FUN_1801f91e8(0,pcVar5,cVar6,param_4,param_5);
      if (lVar1 == -1) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (char *)0xffffffffffffffff;
      }
      if (lVar1 == 0) break;
      pcVar5 = pcVar5 + lVar1;
      pcVar2 = pcVar4 + 1;
      if (lVar1 != 4) {
        pcVar2 = pcVar4;
      }
      pcVar4 = pcVar2 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      local_res8[0] = 0;
      lVar1 = FUN_1801f91e8(local_res8,pcVar5,cVar6,param_4,param_5);
      if (lVar1 == -1) {
        *param_2 = pcVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (char *)0xffffffffffffffff;
      }
      if (lVar1 == 0) {
        *puVar3 = 0;
        pcVar5 = pcVar4;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar3 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar3 = puVar3 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar3 = (ushort)local_res8[0];
      pcVar5 = pcVar5 + lVar1;
      puVar3 = puVar3 + 1;
    }
    *param_2 = pcVar5;
    pcVar4 = (char *)((longlong)puVar3 - (longlong)param_1 >> 1);
  }
  return pcVar4;
}



bool FUN_1801f964c(void)

{
  return DAT_1802aa1a0 == (DAT_1802a0400 | 1);
}



int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  WORD local_res8 [4];
  WCHAR local_res18 [8];

  if (_C == 0xffff) {
LAB_1801f96c3:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(WORD *)(PTR_DAT_1802a06c8 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar2 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar2 == 0) goto LAB_1801f96c3;
    }
    uVar1 = (uint)(local_res8[0] & _Type);
  }
  return uVar1;
}



void fegetround(void)

{
  undefined4 uVar1;

  uVar1 = FUN_180203c10();
  FUN_180203c00(uVar1);
  return;
}



uint FUN_1801f96f0(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;

  uVar3 = 0;
  uVar2 = param_1 & 0x1f;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1801fb1d0();
    *param_2 = uVar1;
    if (((param_1 & 8) == 0) || (-1 < (char)uVar1)) {
      if (((param_1 & 4) == 0) || ((uVar1 >> 9 & 1) == 0)) {
        if (((param_1 & 1) == 0) || ((uVar1 >> 10 & 1) == 0)) {
          if (((param_1 & 2) != 0) && ((uVar1 >> 0xb & 1) != 0)) {
            uVar2 = param_1 & 0x1d;
            uVar3 = (ulonglong)(param_1 & 0x10);
          }
        }
        else {
          uVar3 = 8;
          uVar2 = param_1 & 0x1e;
        }
      }
      else {
        uVar3 = 4;
        uVar2 = param_1 & 0x1b;
      }
    }
    else {
      uVar3 = 1;
      uVar2 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((uVar1 >> 0xc & 1) != 0)) {
      uVar3 = uVar3 | 0x20;
      uVar2 = uVar2 & 0xffffffef;
    }
    if (uVar2 != 0) {
      FUN_1801fb150(0x1f80,0xffc0);
    }
    if ((uVar3 != 0) && ((uVar3 & ~uVar1) != 0)) {
      if (uVar2 == 0) {
        FUN_1801fb1e0(uVar1 | uVar3);
      }
      else {
        FUN_1801fb1f0(uVar3);
      }
    }
  }
  return uVar2;
}



void FUN_1801f9800(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined4 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8 = param_3;
  iVar3 = FUN_1801f96f0(param_5,&local_f0);
  uVar1 = param_8;
  if (iVar3 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = 3;
    }
    local_100 = &local_f8;
    local_108 = &param_7;
    FUN_1801fa480(&local_b8,&local_f0,param_5,param_2);
  }
  cVar2 = FUN_1801fe5b0();
  if ((cVar2 == '\0') || (param_4 == 0)) {
    FUN_1801fa7f0(param_4);
  }
  else {
    local_d8 = param_7;
    local_c8 = local_f8;
    local_e8[1] = 0;
    local_d0 = uVar1;
    local_e8[0] = param_4;
    local_e0 = param_1;
    iVar3 = FUN_1801fe5e0(local_e8);
    if (iVar3 == 0) {
      FUN_1801fa7f0(param_4);
    }
  }
}



void FUN_1801f9940(undefined8 param_1,undefined4 param_2,float param_3,int param_4,undefined4 param_5,undefined8 param_6
                  ,float param_7,float param_8,int param_9)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  float *local_100;
  float local_f8 [2];
  undefined8 local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8[0] = param_3;
  iVar3 = FUN_1801f96f0(param_5,&local_f0);
  fVar1 = param_8;
  if (iVar3 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = (ulonglong)(uint)param_8;
    }
    local_78 = (ulonglong)(param_9 == 2);
    local_100 = local_f8;
    local_108 = &param_7;
    FUN_1801fa7c0(&local_b8,&local_f0,param_5,param_2);
  }
  cVar2 = FUN_1801fe5b0();
  if ((cVar2 == '\0') || (param_4 == 0)) {
    FUN_1801fa7f0(param_4);
  }
  else {
    local_d8 = (double)param_7;
    local_e8[1] = 0;
    local_d0 = (double)fVar1;
    local_c8 = (double)local_f8[0];
    local_e8[0] = param_4;
    local_e0 = param_1;
    iVar3 = FUN_1801fe5e0(local_e8);
    if (iVar3 == 0) {
      FUN_1801fa7f0(param_4);
    }
  }
}



ulonglong FUN_1801f9a80(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}



uint FUN_1801f9aa0(uint param_1)

{
  return param_1 | 0x400000;
}



void FUN_1801f9ad8(longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5,undefined8 param_6,
                  int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;

  puVar10 = auStack_88;
  puVar11 = auStack_88;
  puVar12 = auStack_88;
  local_30 = DAT_1802a0400 ^ (ulonglong)local_38;
  iVar3 = param_5;
  if (0 < param_5) {
    sVar4 = __strncnt(param_4,(longlong)param_5);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_5 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = FUN_1801fc2f4(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVar3);
  puVar9 = (undefined4 *)0x0;
  if (iVar2 == 0) goto LAB_1801f9de3;
  uVar5 = (longlong)iVar2 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar5) & uVar5;
  puVar12 = auStack_88;
  if (uVar5 == 0) {
LAB_1801f9dc9:
    if (puVar9 == (undefined4 *)0x0) goto LAB_1801f9de3;
  }
  else {
    if (uVar5 < 0x401) {
      uVar8 = uVar5 + 0xf;
      if (uVar8 <= uVar5) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar10 = auStack_88 + lVar1;
      puVar6 = (undefined4 *)((longlong)local_38 + lVar1);
      puVar9 = (undefined4 *)0x0;
      puVar12 = auStack_88 + lVar1;
      if (puVar6 == (undefined4 *)0x0) goto LAB_1801f9dc9;
      *puVar6 = 0xcccc;
LAB_1801f9be4:
      puVar9 = puVar6 + 4;
      puVar11 = puVar10;
    }
    else {
      puVar6 = (undefined4 *)_malloc_base(uVar5);
      puVar9 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1801f9be4;
      }
    }
    puVar12 = puVar11;
    if (puVar9 == (undefined4 *)0x0) goto LAB_1801f9dc9;
    *(int *)(puVar11 + 0x28) = iVar2;
    *(undefined4 **)(puVar11 + 0x20) = puVar9;
    *(undefined8 *)(puVar11 + -8) = 0x1801f9c0e;
    iVar3 = FUN_1801fc2f4(param_8,1,param_4,iVar3);
    if (iVar3 == 0) goto LAB_1801f9dc9;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined4 *)(puVar11 + 0x28) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + -8) = 0x1801f9c41;
    iVar3 = FUN_1801f62c8(param_2,param_3,puVar9,iVar2);
    puVar6 = (undefined4 *)0x0;
    if (iVar3 == 0) goto LAB_1801f9dc9;
    if ((param_3 & 0x400) == 0) {
      uVar5 = (longlong)iVar3 * 2 + 0x10;
      uVar5 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar5) & uVar5;
      if (uVar5 == 0) {
LAB_1801f9dac:
        if (puVar6 != (undefined4 *)0x0) {
LAB_1801f9db1:
          if (puVar6[-4] == 0xdddd) {
            *(undefined8 *)(puVar12 + -8) = 0x1801f9dc2;
            FUN_1801f42e0();
          }
        }
      }
      else {
        if (uVar5 < 0x401) {
          uVar8 = uVar5 + 0xf;
          if (uVar8 <= uVar5) {
            uVar8 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar11 + -8) = 0x1801f9ce4;
          lVar1 = -(uVar8 & 0xfffffffffffffff0);
          puVar12 = puVar11 + lVar1;
          puVar7 = (undefined4 *)(puVar11 + lVar1 + 0x50);
          if (puVar7 == (undefined4 *)0x0) goto LAB_1801f9dd0;
          *puVar7 = 0xcccc;
          puVar11 = puVar11 + lVar1;
LAB_1801f9d12:
          puVar6 = puVar7 + 4;
          puVar12 = puVar11;
        }
        else {
          *(undefined8 *)(puVar11 + -8) = 0x1801f9d02;
          puVar7 = (undefined4 *)_malloc_base();
          puVar6 = (undefined4 *)0x0;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0xdddd;
            goto LAB_1801f9d12;
          }
        }
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar12 + 0x40) = 0;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          *(int *)(puVar12 + 0x28) = iVar3;
          *(undefined4 **)(puVar12 + 0x20) = puVar6;
          *(undefined8 *)(puVar12 + -8) = 0x1801f9d48;
          iVar2 = FUN_1801f62c8(param_2,param_3,puVar9,iVar2);
          if (iVar2 == 0) goto LAB_1801f9dac;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          if (param_7 == 0) {
            *(undefined4 *)(puVar12 + 0x28) = 0;
            *(undefined8 *)(puVar12 + 0x20) = 0;
            *(undefined8 *)(puVar12 + -8) = 0x1801f9d76;
            iVar3 = FUN_1801fc384(param_8,0,puVar6,iVar3);
            if (iVar3 == 0) goto LAB_1801f9dac;
          }
          else {
            *(int *)(puVar12 + 0x28) = param_7;
            *(undefined8 *)(puVar12 + 0x20) = param_6;
            *(undefined8 *)(puVar12 + -8) = 0x1801f9d90;
            iVar3 = FUN_1801fc384(param_8,0,puVar6,iVar3);
            if (iVar3 == 0) goto LAB_1801f9db1;
          }
          if (puVar6[-4] == 0xdddd) {
            *(undefined8 *)(puVar12 + -8) = 0x1801f9da7;
            FUN_1801f42e0();
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar3 <= param_7) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        *(int *)(puVar11 + 0x28) = param_7;
        *(undefined8 *)(puVar11 + 0x20) = param_6;
        *(undefined8 *)(puVar11 + -8) = 0x1801f9c99;
        iVar3 = FUN_1801f62c8(param_2,param_3,puVar9,iVar2);
        if (iVar3 != 0) goto LAB_1801f9dd0;
      }
      goto LAB_1801f9dc9;
    }
  }
LAB_1801f9dd0:
  if (puVar9[-4] == 0xdddd) {
    *(undefined8 *)(puVar12 + -8) = 0x1801f9de1;
    FUN_1801f42e0();
  }
LAB_1801f9de3:
  *(undefined **)(puVar12 + -8) = &UNK_1801f9def;
}



void __acrt_LCMapStringA(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                        undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_1801f9ad8(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}



void FUN_1801f9eb0(ulonglong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;

  uVar4 = param_5;
  local_38 = DAT_1802a0400 ^ (ulonglong)auStack_f8;
  local_b8 = param_4;
  local_b0 = param_3;
  iVar2 = FUN_1801fa100(param_1,&local_b8,param_5);
  if (iVar2 == 0) {
    local_d0 = &local_b8;
    local_d8 = &local_b0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_c8 = iVar2;
    FUN_1801fa4b0(&local_a8,&param_5,param_1 & 0xffffffff,param_2);
    uVar4 = param_5;
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          iVar2 = ((uint)param_1 & 2) * 2;
        }
        else {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 5;
  }
  cVar1 = FUN_1801fe5b0();
  if (cVar1 == '\0') {
    if (iVar2 == 1) {
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      *puVar3 = 0x21;
    }
    else if ((iVar2 == 2) || (iVar2 == 3)) {
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      *puVar3 = 0x22;
    }
  }
  else if (iVar2 != 0) {
    local_d8 = (undefined8 *)local_b8;
    local_d0 = (undefined8 *)uVar4;
    FUN_1801fa830(iVar2,param_2,(int)param_3,0);
  }
  FUN_1801fb150(uVar4,0xffc0);
}



void FUN_1801fa030(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint local_res8 [2];
  uint local_res10 [2];

  local_res10[0] = 0;
  FUN_180203f10(local_res10,0x1f);
  local_res8[0] = local_res10[0];
  uVar1 = param_1 | 0x20;
  if ((param_1 & 0x18) == 0) {
    uVar1 = param_1;
  }
  uVar4 = uVar1 >> 5 & 1;
  uVar2 = uVar4 | 2;
  if ((uVar1 & 0x10) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 & 8) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 8;
  if ((uVar1 & 4) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 0x10;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = FUN_180203cf0(uVar4);
  local_res8[0] = local_res8[0] | uVar2;
  FUN_180203f60(local_res8,0x1f);
  if ((uVar1 & 1) != 0) {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x21;
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x22;
  }
  return;
}



bool FUN_1801fa100(uint param_1,double *param_2,ulonglong param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  double dVar9;
  int local_res8 [2];
  undefined8 local_res20;

  uVar5 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((char)param_3 < '\0')) {
    uVar5 = param_1 & 0x17;
    bVar2 = 1;
    goto LAB_1801fa430;
  }
  if (((param_1 & 4) != 0) && ((param_3 >> 9 & 1) != 0)) {
    uVar5 = param_1 & 0x1b;
    bVar2 = 4;
    goto LAB_1801fa430;
  }
  if (((param_1 & 1) == 0) || ((param_3 >> 10 & 1) == 0)) {
    bVar2 = 0;
    if (((param_1 & 2) == 0) || (bVar2 = 0, (param_3 >> 0xb & 1) == 0)) goto LAB_1801fa430;
    uVar4 = param_1 >> 4 & 1;
    if (*param_2 == 0.0) {
      uVar4 = 1;
    }
    else {
      local_res8[0] = 0;
      dVar9 = (double)FUN_1801ed790(0,local_res8);
      iVar3 = local_res8[0] + -0x600;
      if (iVar3 < -0x432) {
        local_res20 = dVar9 * 0.0;
        uVar4 = 1;
      }
      else {
        bVar1 = false;
        cVar6 = '\0';
        local_res20 = (double)((ulonglong)dVar9 & 0xfffffffffffff | 0x10000000000000);
        if (iVar3 < -0x3fd) {
          local_res20._0_4_ = (uint)((ulonglong)dVar9 & 0xfffffffffffff);
          uVar7 = (ulonglong)(-iVar3 - 0x3fd);
          bVar1 = false;
          do {
            if ((((uint)local_res20 & 1) != 0) && (uVar4 == 0)) {
              uVar4 = 1;
            }
            bVar8 = cVar6 != '\0';
            cVar6 = (char)((uint)local_res20 & 1);
            if (bVar8) {
              bVar1 = true;
            }
            local_res20._0_4_ = (uint)local_res20 >> 1;
            if ((local_res20._4_4_ & 1) != 0) {
              local_res20._0_4_ = (uint)local_res20 | 0x80000000;
            }
            local_res20._4_4_ = local_res20._4_4_ >> 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (dVar9 < 0.0) {
          local_res20 = -local_res20;
        }
        bVar8 = dVar9 < 0.0;
        if ((cVar6 != '\0') || (bVar1)) {
          iVar3 = fegetround();
          if (iVar3 == 0) {
            if (cVar6 != '\0') {
              if (!bVar1) {
                bVar8 = (bool)((byte)local_res20 & 1);
                goto LAB_1801fa3f3;
              }
              goto LAB_1801fa3f5;
            }
          }
          else {
            if (iVar3 != 0x100) {
              if (iVar3 != 0x200) goto LAB_1801fa40f;
              bVar8 = 0.0 <= dVar9;
            }
LAB_1801fa3f3:
            if (bVar8 != false) {
LAB_1801fa3f5:
              local_res20 = (double)((longlong)local_res20 + 1);
            }
          }
        }
      }
LAB_1801fa40f:
      *param_2 = local_res20;
    }
    uVar5 = param_1 & 0x1d;
    bVar2 = -(uVar4 != 0) & 0x10;
    goto LAB_1801fa430;
  }
  bVar2 = 8;
  uVar5 = (uint)param_3 & 0x6000;
  if ((param_3 & 0x6000) == 0) {
    if (0.0 < *param_2) {
      uVar5 = param_1 & 0x1e;
      *param_2 = INFINITY;
      goto LAB_1801fa430;
    }
LAB_1801fa24b:
    dVar9 = -INFINITY;
LAB_1801fa25a:
    *param_2 = dVar9;
  }
  else {
    if (uVar5 == 0x2000) {
      if (0.0 < *param_2) {
        uVar5 = param_1 & 0x1e;
        *param_2 = 1.79769313486232e+308;
        goto LAB_1801fa430;
      }
      goto LAB_1801fa24b;
    }
    if (uVar5 == 0x4000) {
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = -1.79769313486232e+308;
      }
      else {
        uVar5 = param_1 & 0x1e;
        *param_2 = INFINITY;
      }
      goto LAB_1801fa430;
    }
    if (uVar5 == 0x6000) {
      dVar9 = 1.79769313486232e+308;
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = -1.79769313486232e+308;
        goto LAB_1801fa430;
      }
      goto LAB_1801fa25a;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_1801fa430:
  if (((param_1 & 0x10) != 0) && ((param_3 >> 0xc & 1) != 0)) {
    bVar2 = bVar2 | 0x20;
    uVar5 = uVar5 & 0xffffffef;
  }
  if (bVar2 != 0) {
    FUN_1801fb1f0();
  }
  return uVar5 == 0;
}



void FUN_1801fa480(void)

{
  FUN_1801fa4b0();
  return;
}



void FUN_1801fa4b0(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,uint *param_6,
                  int param_7)

{
  uint uVar1;
  ulonglong uVar2;
  DWORD dwExceptionCode;
  uint *local_res8;

  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar2 = FUN_1801fb210();
  if ((uVar2 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar2 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar2 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar2 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar2 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (uVar1 == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 ^ (param_4 << 5 ^ *local_res8) & 0x1ffe0;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *(undefined8 *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  FUN_1801fb130();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}



void FUN_1801fa7c0(void)

{
  FUN_1801fa4b0();
  return;
}



void FUN_1801fa7f0(int param_1)

{
  undefined4 *puVar1;

  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x22;
    return;
  }
  return;
}



undefined8
FUN_1801fa830(uint param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;

  iVar3 = 0;
  local_38 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  piVar1 = &DAT_180249830;
  do {
    if (*piVar1 == param_2) {
      local_30 = (&PTR_DAT_180249838)[(longlong)iVar3 * 2];
      if (local_30 != (undefined *)0x0) {
        local_18 = param_5;
        local_38 = (ulonglong)param_1;
        local_28 = param_3;
        uStack_20 = param_4;
        FUN_1801fb150(param_6,0xffc0);
        iVar3 = FUN_1801fe5e0(&local_38);
        if (iVar3 == 0) {
          if (param_1 == 1) {
            puVar2 = (undefined4 *)FUN_1801e6ae4();
            *puVar2 = 0x21;
          }
          else if ((param_1 == 2) || (param_1 == 3)) {
            puVar2 = (undefined4 *)FUN_1801e6ae4();
            *puVar2 = 0x22;
            return local_18;
          }
        }
        return local_18;
      }
      goto LAB_1801fa884;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 4;
  } while ((longlong)piVar1 < 0x180249a00);
  local_30 = (undefined *)0x0;
LAB_1801fa884:
  FUN_1801fb150(param_6,0xffc0);
  if (param_1 == 1) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x22;
    return param_5;
  }
  return param_5;
}



undefined4 FUN_1801fa990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  switch(param_4) {
  case 1:
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 8;
    break;
  case 2:
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
    break;
  case 3:
  case 4:
  case 5:
    uVar2 = FUN_1801f9aa0(param_3);
    return uVar2;
  case 6:
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
    break;
  case 7:
    uVar1 = 4;
    uVar3 = 0x22;
    uVar2 = 0x12;
    break;
  default:
    goto switchD_1801fa9bb_caseD_8;
  case 9:
    uVar1 = 3;
    uVar3 = 0x22;
    uVar2 = 0x11;
  }
  FUN_1801f9940(&DAT_18024a4e0,0x1d,param_3,uVar1,uVar2,uVar3,param_1,param_2,2);
switchD_1801fa9bb_caseD_8:
  return param_3;
}



undefined8 FUN_1801fab00(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;

  DAT_1802aa1a8 = 0;
  DAT_1802aa1ac = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_1802aa1a8 = 1;
      DAT_1802aa1ac = 1;
    }
    else {
      DAT_1802aa1a8 = 0;
    }
  }
  if ((DAT_1802aa1a8 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_1802aa1ac = 3;
      DAT_1802aa1a8 = 3;
      return 0;
    }
  }
  return 0;
}



ulonglong FUN_1801fabc0(ulonglong param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  sbyte sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;

  uVar15 = (param_1 >> 0x34) - 0x3ff;
  lVar13 = -((uVar15 >> 3) - 0x86);
  uVar11 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&DAT_18024a6d0 + lVar13);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar11;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar3 * auVar5,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_18024a6d8 + lVar13);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar11;
  uVar15 = uVar15 & 7;
  auVar8 = auVar4 * auVar6 + auVar8;
  uVar9 = auVar8._0_8_;
  uVar14 = auVar8._8_8_ + *(longlong *)(&UNK_18024a6e0 + lVar13) * uVar11;
  uVar12 = 0x36 - uVar15;
  bVar7 = (byte)uVar12 & 0x3f;
  uVar11 = uVar14 >> bVar7;
  bVar1 = (uVar12 & 0x3f) != 0;
  bVar2 = (uVar14 >> bVar7 - 1 & 1) != 0;
  if (bVar1 && bVar2) {
    uVar14 = ~uVar14;
    uVar9 = ~uVar9;
  }
  sVar10 = (char)uVar15 + 10;
  uVar12 = (uVar14 << sVar10) >> sVar10;
  lVar13 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  if ((uVar12 == 0) && (lVar13 = 0x3f, uVar9 != 0)) {
    for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  return uVar11 + (bVar1 && bVar2) & 3;
}



ulonglong FUN_1801fad10(ulonglong param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  sbyte sVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];

  uVar22 = (param_1 >> 0x34) - 0x3ff;
  lVar19 = -((uVar22 >> 3) - 0x86);
  uVar13 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *(ulonglong *)(&DAT_18024a6d0 + lVar19);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar23 * auVar5,8);
  uVar9 = SUB168(auVar23 * auVar5,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(*(undefined1 (*) [16])(&UNK_18024a6d8 + lVar19),0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar13;
  uVar22 = uVar22 & 7;
  auVar23 = vpsrldq_avx(*(undefined1 (*) [16])(&UNK_18024a6d8 + lVar19),8);
  auVar8 = auVar3 * auVar6 + auVar8;
  uVar10 = auVar8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar23._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  uVar20 = auVar8._8_8_ + SUB168(auVar4 * auVar7,0);
  uVar16 = 0;
  bVar12 = (byte)(0x36 - uVar22) & 0x3f;
  uVar13 = uVar20 >> bVar12;
  bVar1 = (0x36 - uVar22 & 0x3f) != 0;
  bVar2 = (uVar20 >> bVar12 - 1 & 1) != 0;
  if (bVar1 && bVar2) {
    uVar20 = ~uVar20;
    uVar10 = ~uVar10;
    uVar9 = ~uVar9;
    uVar16 = 0x8000000000000000;
  }
  sVar11 = (char)uVar22 + 10;
  uVar20 = (uVar20 << sVar11) >> sVar11;
  lVar14 = uVar22 - 0x36;
  lVar19 = 0x3f;
  if (uVar20 != 0) {
    for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar17 = uVar9;
  uVar18 = uVar10;
  if (uVar20 == 0) {
    uVar17 = 0;
    lVar19 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    lVar14 = uVar22 - 0x76;
    uVar18 = uVar9;
    uVar20 = uVar10;
  }
  lVar15 = lVar19 + -0x34;
  bVar12 = (byte)lVar15;
  if (lVar15 < 0) {
    bVar12 = -bVar12;
    uVar9 = uVar20 << (bVar12 & 0x3f) | uVar18 >> (-(bVar12 - 0x40) & 0x3f);
    uVar18 = uVar18 << (bVar12 & 0x3f) | uVar17 >> (-(bVar12 - 0x40) & 0x3f);
  }
  else {
    uVar9 = uVar20;
    if (lVar15 != 0) {
      uVar9 = uVar20 >> (bVar12 & 0x3f);
      uVar18 = uVar18 >> (bVar12 & 0x3f) | uVar20 << (-(bVar12 - 0x40) & 0x3f);
    }
  }
  lVar14 = lVar14 + lVar19 + 0x3ff;
  dVar21 = (double)(uVar9 & 0xffefffffffffffff | uVar16 | lVar14 << 0x34);
  lVar19 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar21;
  auVar23 = vandpd_avx(auVar25,_DAT_18024a510);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar21 - auVar23._0_8_;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = auVar23._0_8_ * 1.5707963109016418 - dVar21 * 1.5707963267948966;
  auVar3 = vfmadd231sd_fma(auVar26,auVar24,ZEXT816(0x3ff921fb50000000));
  auVar23 = vfmadd231sd_fma(auVar3,auVar23,ZEXT816(0x3e5110b460000000));
  vfmadd231sd_fma(auVar23,auVar24,ZEXT816(0x3e5110b460000000));
  auVar27._8_8_ = 0;
  auVar27._0_8_ =
       (double)((uVar18 << ((byte)-(lVar19 + -0x40) & 0x3f)) >> 0xc | uVar16 |
               lVar14 - (-(lVar19 + -0x40) + 0x34) << 0x34) * 1.5707963267948966;
  vfmadd231sd_fma(auVar27,auVar25,ZEXT816(0x3c91a62633145c06));
  return uVar13 + (bVar1 && bVar2) & 3;
}



uint FUN_1801faf00(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];

  auVar5 = vfmadd132sd_fma(in_ZMM0._0_16_,_DAT_18024a650,ZEXT816(0x3fe45f306dc9c883));
  dVar2 = auVar5._0_8_ - (double)DAT_18024a650;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2;
  auVar4 = vfnmadd132sd_fma(auVar5,in_ZMM0._0_16_,ZEXT816(0x3ff921fb54442d18));
  dVar1 = dVar2 * DAT_18024a630;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar1;
  auVar5 = vfmsub213sd_fma(auVar6,_DAT_18024a630,auVar7);
  dVar3 = auVar4._0_8_ - dVar1;
  auVar7 = vfnmadd231sd_fma(auVar4,auVar6,ZEXT816(0x3c91a62633145c00));
  auVar8._8_8_ = 0;
  auVar8._0_8_ = ((dVar3 - auVar7._0_8_) + ((auVar4._0_8_ - dVar3) - dVar1)) - auVar5._0_8_;
  vfnmadd132sd_fma(auVar6,auVar8,ZEXT816(0x397b839a252049c0));
  return (int)dVar2 & 3;
}



void FUN_1801faf80(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_1801f9940(&DAT_18024a668,0x12,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}



void FUN_1801fb010(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_1801f9940(&DAT_18024a660,0x1e,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}



void FUN_1801fb0a0(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_1801f9940(&DAT_18024a670,0x20,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}



uint FUN_1801fb130(void)

{
  uint uVar1;

  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}



uint FUN_1801fb150(uint param_1,uint param_2)

{
  uint uVar1;

  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_1802a09c0 != '\0') && ((MXCSR & 0x40) != 0)) {
    return uVar1;
  }
  MXCSR = MXCSR & 0xffffffbf;
  return uVar1;
}



undefined4 FUN_1801fb1d0(void)

{
  return MXCSR;
}



void FUN_1801fb1e0(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}



void FUN_1801fb1f0(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}



uint FUN_1801fb210(void)

{
  return MXCSR & 0x3f;
}



void __remainder_piby2d2f_forC(ulonglong param_1,double *param_2,uint *param_3)

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
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;

  uVar20 = (param_1 >> 0x34) - 0x3ff;
  lVar18 = -((uVar20 >> 3) - 0x86);
  uVar14 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&DAT_18024a780 + lVar18);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar3 * auVar6,8);
  uVar10 = SUB168(auVar3 * auVar6,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_18024a788 + lVar18);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar14;
  uVar20 = uVar20 & 7;
  auVar9 = auVar4 * auVar7 + auVar9;
  uVar11 = auVar9._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulonglong *)(&UNK_18024a790 + lVar18);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar14;
  uVar19 = auVar9._8_8_ + SUB168(auVar5 * auVar8,0);
  uVar17 = 0;
  bVar13 = (byte)(0x36 - uVar20) & 0x3f;
  uVar14 = uVar19 >> bVar13;
  bVar1 = (0x36 - uVar20 & 0x3f) != 0;
  bVar2 = (uVar19 >> bVar13 - 1 & 1) != 0;
  if (bVar1 && bVar2) {
    uVar19 = ~uVar19;
    uVar11 = ~uVar11;
    uVar10 = ~uVar10;
    uVar17 = 0x8000000000000000;
  }
  *param_3 = (int)uVar14 + (uint)(bVar1 && bVar2) & 3;
  sVar12 = (char)uVar20 + 10;
  uVar14 = (uVar19 << sVar12) >> sVar12;
  lVar15 = uVar20 - 0x36;
  lVar18 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar19 = uVar11;
  if (uVar14 == 0) {
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    lVar15 = uVar20 - 0x76;
    uVar19 = uVar10;
    uVar14 = uVar11;
  }
  lVar16 = lVar18 + -0x34;
  if (lVar16 < 0) {
    bVar13 = -(byte)lVar16;
    uVar14 = uVar14 << (bVar13 & 0x3f) | uVar19 >> (-(bVar13 - 0x40) & 0x3f);
  }
  else if (lVar16 != 0) {
    uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
  }
  *param_2 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar18 + 0x3ff << 0x34) * 1.5707963267948966;
  return;
}



undefined4 FUN_1801fb3b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (param_3 == 2) {
    uVar1 = 4;
    uVar2 = 0x12;
  }
  else {
    if (param_3 != 3) {
      return param_2;
    }
    uVar2 = 0x11;
    uVar1 = 3;
  }
  FUN_1801f9940(&DAT_18024a820,0x14,param_2,uVar1,uVar2,0x22,param_1,0,1);
  return param_2;
}



wchar_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  short *in_RDX;
  longlong lVar12;
  wchar_t *pwVar13;

  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  *(undefined4 *)(param_1 + 2) = DAT_1802aa324;
  sVar7 = *in_RDX;
  while (sVar7 == 0x20) {
    in_RDX = in_RDX + 1;
    sVar7 = *in_RDX;
  }
  if (sVar7 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_1801fb4da:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar7 != 0x72) {
      if (sVar7 != 0x77) goto LAB_1801fb738;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_1801fb4da;
    }
    param_1[2] = L'\x01';
    param_1[3] = L'\0';
  }
  pwVar13 = in_RDX + 1;
  bVar6 = true;
  bVar2 = false;
  bVar5 = false;
  lVar12 = 10;
  bVar3 = bVar2;
  bVar4 = bVar2;
LAB_1801fb4f8:
  if (*pwVar13 == L'\0') goto LAB_1801fb64a;
  wVar1 = *pwVar13;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bVar2) goto LAB_1801fb628;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_1801fb5a9:
      bVar2 = true;
      bVar6 = true;
      goto LAB_1801fb635;
    }
    if (wVar1 == L' ') goto LAB_1801fb635;
    if (wVar1 == L'+') {
      if (!bVar5) {
        bVar5 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar6 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffc | 4;
          goto LAB_1801fb635;
        }
      }
    }
    else if (wVar1 == L',') {
      bVar4 = true;
    }
    else {
      if (wVar1 != L'D') {
        if (wVar1 == L'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_1801fb633:
          bVar6 = true;
          goto LAB_1801fb635;
        }
        if (wVar1 == L'R') {
          if (!bVar2) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_1801fb5a9;
          }
          goto LAB_1801fb628;
        }
        goto LAB_1801fb738;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar8 = *(uint *)param_1 | 0x40;
        goto LAB_1801fb631;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar8 = *(uint *)param_1 | 0x1000;
      goto LAB_1801fb631;
    }
  }
  else if (wVar1 == L'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x8000;
      goto LAB_1801fb631;
    }
  }
  else if (wVar1 == L'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x800;
LAB_1801fb609:
      bVar3 = true;
      bVar6 = true;
      goto LAB_1801fb635;
    }
  }
  else if (wVar1 == L'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffff7ff;
      goto LAB_1801fb609;
    }
  }
  else if (wVar1 == L't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x4000;
      goto LAB_1801fb631;
    }
  }
  else {
    if (wVar1 != L'x') goto LAB_1801fb738;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar8 = *(uint *)param_1 | 0x400;
LAB_1801fb631:
      *(uint *)param_1 = uVar8;
      goto LAB_1801fb633;
    }
  }
LAB_1801fb628:
  bVar6 = false;
LAB_1801fb635:
  pwVar13 = (wchar_t *)((longlong)pwVar13 + (ulonglong)(-(uint)bVar6 & 2));
  if (!bVar6) goto LAB_1801fb64a;
  goto LAB_1801fb4f8;
LAB_1801fb64a:
  pwVar11 = pwVar13 + 1;
  if (!bVar4) {
    pwVar11 = pwVar13;
  }
  for (; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
  }
  if (bVar4) {
    iVar9 = wcsncmp(pwVar11,L"ccs",3);
    if (iVar9 != 0) goto LAB_1801fb738;
    for (pwVar11 = pwVar11 + 3; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
    }
    if (*pwVar11 != L'=') goto LAB_1801fb738;
    do {
      pwVar11 = pwVar11 + 1;
    } while (*pwVar11 == L' ');
    iVar9 = FUN_180204050(pwVar11,L"UTF-8",5);
    if (iVar9 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar9 = FUN_180204050(pwVar11,L"UTF-16LEUNICODE",8);
      if (iVar9 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        lVar12 = 0x10;
      }
      else {
        iVar9 = FUN_180204050(pwVar11,L"UNICODE",7);
        if (iVar9 != 0) goto LAB_1801fb738;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
        lVar12 = 0xe;
      }
    }
    for (pwVar11 = (wchar_t *)((longlong)pwVar11 + lVar12); wVar1 = *pwVar11, wVar1 == L' '; pwVar11 = pwVar11 + 1) {
    }
  }
  else {
    wVar1 = *pwVar11;
  }
  if (wVar1 == L'\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
LAB_1801fb738:
  puVar10 = (undefined4 *)FUN_1801e6ae4();
  *puVar10 = 0x16;
  FUN_1801e1344();
  return param_1;
}



undefined8 * FUN_1801fb768(char *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  errno_t eVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  wchar_t local_18 [8];

  puVar3 = (undefined8 *)__acrt_stdio_parse_mode<wchar_t>(local_18);
  uVar1 = *puVar3;
  puVar4 = (undefined8 *)0x0;
  if (*(char *)(puVar3 + 1) != '\0') {
    local_28 = (int)uVar1;
    local_res18[0] = 0;
    eVar2 = FID_conflict__sopen_s(local_res18,param_1,local_28,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_1802a98b8 = _DAT_1802a98b8 + 1;
      uStack_24 = (uint)((ulonglong)uVar1 >> 0x20);
      LOCK();
      *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | uStack_24;
      UNLOCK();
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[5] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      *(int *)(param_4 + 3) = local_res18[0];
      puVar4 = param_4;
    }
  }
  return puVar4;
}



undefined8 FUN_1801fb810(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;

  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      puVar2 = (undefined4 *)FUN_1801e6ae4();
      *puVar2 = 0x22;
      FUN_1801e1344();
      return 0x22;
    }
    *param_1 = 0;
  }
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 0x16;
  FUN_1801e1344();
  return 0x16;
}



undefined8 FUN_1801fb8a0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  return 0x7fffffff;
}



void FUN_1801fb8d0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;

  do {
    uVar1 = *param_1;
    uVar3 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar4 = (uint)uVar2;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar3 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar3 = (uint)uVar1;
      }
      uVar4 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar4 = (uint)uVar2;
      }
    }
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}



void FUN_1801fb930(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;

  if (DAT_1802a9ca0 != 0) {
    FUN_1801fb960(param_1,param_2,0);
    return;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    do {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar4 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar4 = (uint)uVar2;
        }
      }
    } while ((uVar3 == uVar4) && (uVar3 != 0));
    return;
  }
  FUN_1801fb8a0();
  return;
}



int FUN_1801fb960(ushort *param_1,ushort *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;

  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    local_20 = '\0';
    if (param_3 == (longlong *)0x0) {
      if (DAT_1802a9ca0 == 0) {
        local_30 = CONCAT44(PTR_PTR_1802a0858._4_4_,PTR_PTR_1802a0858._0_4_);
        uStack_28 = CONCAT44(PTR_DAT_1802a0860._4_4_,PTR_DAT_1802a0860._0_4_);
      }
      else {
        local_38 = FUN_1801f2834();
        local_30 = *(longlong *)(local_38 + 0x90);
        uStack_28 = *(longlong *)(local_38 + 0x88);
        __acrt_update_locale_info(local_38,&local_30);
        FUN_1801f43a4(local_38,&uStack_28);
        if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
          *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
          local_20 = '\x01';
        }
      }
    }
    else {
      local_30 = *param_3;
      uStack_28 = param_3[1];
    }
    lVar6 = local_30;
    if (*(longlong *)(local_30 + 0x138) == 0) {
      iVar3 = FUN_1801fb8d0(param_1,param_2);
    }
    else {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar8 = (uint)uVar2;
        uVar7 = (uint)uVar1;
        if (uVar1 != uVar2) {
          if (uVar1 < 0x100) {
            uVar5 = (ulonglong)uVar1 & 0xff;
            if (((&DAT_180248532)[uVar5 * 2] & 1) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
            }
            uVar1 = (ushort)uVar5;
          }
          else {
            uVar1 = FUN_180204cc0(uVar1,&local_30);
            lVar6 = local_30;
          }
          uVar8 = (uint)uVar2;
          uVar7 = (uint)uVar1;
          if (uVar1 != uVar2) {
            if (uVar2 < 0x100) {
              uVar5 = (ulonglong)uVar2 & 0xff;
              if (((&DAT_180248532)[uVar5 * 2] & 1) != 0) {
                uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
              }
              uVar2 = (ushort)uVar5;
            }
            else {
              uVar2 = FUN_180204cc0(uVar2,&local_30);
              lVar6 = local_30;
            }
            uVar8 = (uint)uVar2;
            uVar7 = (uint)uVar1;
          }
        }
        iVar3 = uVar7 - uVar8;
      } while ((iVar3 == 0) && (uVar7 != 0));
    }
    if (local_20 != '\0') {
      *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
    }
    return iVar3;
  }
  puVar4 = (undefined4 *)FUN_1801e6ae4();
  *puVar4 = 0x16;
  FUN_1801e1344();
  return 0x7fffffff;
}



undefined4 * FUN_1801fbb74(void)

{
  return &DAT_1802aa1b4;
}



undefined4 * FUN_1801fbb7c(void)

{
  return &DAT_1802aa1b8;
}



undefined4 * FUN_1801fbb84(void)

{
  return &DAT_1802aa1b0;
}



undefined8 FUN_1801fbb8c(void)

{
  return DAT_1802aa1c0;
}



undefined8 FUN_1801fbb94(void)

{
  return DAT_1802aa1c8;
}



undefined8 FUN_1801fbb9c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;

  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1802aa1b4;
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_1801fbbcc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;

  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1802aa1b8;
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_1801fbbfc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;

  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1802aa1b0;
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_1801fbc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_28;
  longlong local_20;
  char local_10;

  iVar1 = FUN_1802008a0();
  if (iVar1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    uVar2 = 0xfde9;
    if (*(int *)(local_20 + 0xc) == 0xfde9) {
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = FUN_1801f5d6c();
      if (iVar1 == 0) {
        if (local_10 != '\0') {
          *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        }
        uVar2 = 1;
      }
      else {
        if (local_10 != '\0') {
          *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        }
        uVar2 = 0;
      }
    }
    FUN_1801fc384(uVar2,0,param_2,param_4,param_3,0x3f,0,0);
    return;
  }
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1801fbd10(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res10;
  undefined8 local_res20;

  puVar4 = (undefined8 *)FUN_1801fbb8c();
  puVar5 = (undefined8 *)FUN_1801fbb94();
  iVar3 = FUN_1801fbbfc();
  if ((iVar3 == 0) && (iVar3 = FUN_1801fbb9c(), iVar3 == 0)) {
    if (DAT_1802aa1d0 != 0) {
      puVar6 = param_1;
      do {
        uVar1 = *puVar6;
        uVar2 = *(ushort *)((longlong)puVar6 + (DAT_1802aa1d0 - (longlong)param_1));
        if (uVar1 != uVar2) break;
        puVar6 = puVar6 + 1;
      } while (uVar2 != 0);
      if (uVar1 == uVar2) {
        return;
      }
    }
    lVar10 = -1;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_1[lVar9] != 0);
    lVar9 = _malloc_base(lVar9 * 2 + 2);
    if (lVar9 != 0) {
      FUN_1801f42e0(DAT_1802aa1d0);
      do {
        lVar10 = lVar10 + 1;
      } while (param_1[lVar10] != 0);
      DAT_1802aa1d0 = lVar9;
      iVar3 = FUN_1801fb810();
      if (iVar3 != 0) goto LAB_1801fbf79;
      FUN_180207610(*puVar5,0,0x80);
      FUN_180207610(puVar5[1],0,0x80);
      FUN_180207610(*puVar4,0,0x40);
      FUN_180207610(puVar4[1],0,0x40);
      FUN_1801fbc2c(param_1,*puVar5,*puVar4,3);
      lVar9 = 3;
      do {
        if (*param_1 != 0) {
          param_1 = param_1 + 1;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar1 = *param_1;
      local_res20 = 0;
      puVar6 = param_1 + 1;
      if (uVar1 != 0x2d) {
        puVar6 = param_1;
      }
      local_res10 = FUN_1801e7798(puVar6,&local_res20,10);
      local_res10 = local_res10 * 0xe10;
      for (; (*puVar6 == 0x2b || ((ushort)(*puVar6 - 0x30) < 10)); puVar6 = puVar6 + 1) {
      }
      if (*puVar6 == 0x3a) {
        puVar6 = puVar6 + 1;
        iVar3 = FUN_1801e7798(puVar6,&local_res20,10);
        local_res10 = local_res10 + iVar3 * 0x3c;
        uVar2 = *puVar6;
        while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
          puVar6 = puVar6 + 1;
          uVar2 = *puVar6;
        }
        if (uVar2 == 0x3a) {
          puVar6 = puVar6 + 1;
          iVar3 = FUN_1801e7798(puVar6,&local_res20,10);
          local_res10 = local_res10 + iVar3;
          for (; (0x2f < *puVar6 && (*puVar6 < 0x3a)); puVar6 = puVar6 + 1) {
          }
        }
      }
      if (uVar1 == 0x2d) {
        local_res10 = -local_res10;
      }
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        FUN_1801fbc2c(puVar6,puVar5[1],puVar4[1],3);
      }
      piVar7 = (int *)FUN_1801fbb84();
      *piVar7 = local_res10;
      puVar8 = (uint *)FUN_1801fbb74();
      *puVar8 = (uint)(uVar1 != 0);
    }
    FUN_1801f42e0(0);
    return;
  }
LAB_1801fbf79:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1801fbf90(void)

{
  int iVar1;
  DWORD DVar2;
  UINT UVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int local_res8;
  undefined4 local_res10;
  int local_res18;

  puVar4 = (undefined8 *)FUN_1801fbb8c();
  puVar5 = (undefined8 *)FUN_1801fbb94();
  iVar9 = 0;
  uVar8 = 0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  iVar1 = FUN_1801fbbfc();
  if (((iVar1 == 0) && (iVar1 = FUN_1801fbb9c(), iVar1 == 0)) && (iVar1 = FUN_1801fbbcc(), iVar1 == 0)) {
    FUN_1801f42e0(DAT_1802aa1d0);
    DAT_1802aa1d0 = 0;
    DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1802aa1f0);
    if (DVar2 != 0xffffffff) {
      local_res8 = DAT_1802aa1f0 * 0x3c;
      _DAT_1802aa1e0 = 1;
      if (DAT_1802aa236 != 0) {
        local_res8 = DAT_1802aa244 * 0x3c + local_res8;
      }
      if ((DAT_1802aa28a != 0) && (DAT_1802aa298 != 0)) {
        iVar9 = (DAT_1802aa298 - DAT_1802aa244) * 0x3c;
        uVar8 = 1;
      }
      FUN_180207610(*puVar5,0,0x80);
      FUN_180207610(puVar5[1],0,0x80);
      FUN_180207610(*puVar4,0,0x40);
      FUN_180207610(puVar4[1],0,0x40);
      UVar3 = ___lc_codepage_func();
      FUN_1801fc230(&DAT_1802aa1f4,*puVar5,*puVar4,UVar3);
      FUN_1801fc230(&DAT_1802aa248,puVar5[1],puVar4[1],UVar3);
      local_res10 = uVar8;
      local_res18 = iVar9;
    }
    piVar6 = (int *)FUN_1801fbb84();
    *piVar6 = local_res8;
    puVar7 = (undefined4 *)FUN_1801fbb74();
    *puVar7 = local_res10;
    piVar6 = (int *)FUN_1801fbb7c();
    *piVar6 = local_res18;
    return;
  }
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1801fc118(void)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_248 [32];
  longlong local_228 [2];
  short local_218 [256];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_248;
  psVar3 = (short *)0x0;
  _DAT_1802a0b80 = 0xffffffff;
  _DAT_1802aa1e0 = 0;
  _DAT_1802a0b70 = 0xffffffff;
  local_228[0] = 0;
  iVar1 = thunk_FUN_180204e54(local_228,local_218,0x100,&DAT_18024a860);
  if (iVar1 == 0) {
    psVar2 = local_218;
LAB_1801fc219:
    if (*psVar2 != 0) {
      FUN_1801fbd10(psVar2);
      goto LAB_1801fc191;
    }
  }
  else if (iVar1 == 0x22) {
    psVar2 = (short *)_malloc_base(local_228[0] * 2);
    if (psVar2 == (short *)0x0) {
      psVar2 = (short *)0x0;
    }
    else {
      local_228[1] = 0;
      iVar1 = thunk_FUN_180204e54(local_228 + 1,psVar2,local_228[0],&DAT_18024a860);
      if (iVar1 == 0) {
        FUN_1801f42e0(0);
        psVar3 = psVar2;
        if (psVar2 == local_218) {
          psVar3 = (short *)0x0;
        }
        goto LAB_1801fc219;
      }
    }
    FUN_1801f42e0(psVar2);
  }
  FUN_1801fbf90();
LAB_1801fc191:
  FUN_1801f42e0(psVar3);
}



void FUN_1801fc230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = FUN_1802008a0();
  if (iVar1 == 0) {
    FUN_1801fc384(param_4,0,param_1,0xffffffff,param_3,0x40,0,0);
    return;
  }
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void __cdecl __tzset(void)

{
  if (DAT_1802aa1e4 == 0) {
    __acrt_lock(6);
    if (DAT_1802aa1e4 == 0) {
      FUN_1801fc118();
      LOCK();
      DAT_1802aa1e4 = DAT_1802aa1e4 + 1;
      UNLOCK();
    }
    __acrt_unlock(6);
    return;
  }
  return;
}



void FUN_1801fc2f4(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  bool bVar1;

  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_1801fc341:
          if (!bVar1) goto LAB_1801fc345;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_1801fc37f;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_1801fc341;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_1801fc345;
LAB_1801fc37f:
    param_2 = param_2 & 8;
    goto LAB_1801fc345;
  }
  param_2 = 0;
LAB_1801fc345:
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_1801fc384(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,LPBOOL param_7,
                  LPBOOL param_8)

{
  LPBOOL lpUsedDefaultChar;
  int iVar1;
  DWORD dwFlags;
  LPBOOL pBVar2;
  bool bVar3;

  pBVar2 = (LPBOOL)0x0;
  dwFlags = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_1801fc424;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_1801fc424;
      iVar1 = param_1 - 0xdeaa;
      goto LAB_1801fc415;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_1801fc424;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) || ((param_1 == 0xdeb2 || (param_1 == 0xdeb3))))
    goto LAB_1801fc424;
    iVar1 = param_1 - 65000;
LAB_1801fc415:
    if (iVar1 == 0) goto LAB_1801fc424;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    dwFlags = param_2 & 0xffffff7f;
  }
LAB_1801fc424:
  lpUsedDefaultChar = param_8;
  if ((param_1 - 65000 < 2) && (param_7 = pBVar2, lpUsedDefaultChar = pBVar2, param_8 != (LPBOOL)0x0)) {
    *param_8 = 0;
  }
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,(LPCSTR)param_7,lpUsedDefaultChar);
  return;
}



uint FUN_1801fc464(void)

{
  return *(uint *)((longlong)ProcessEnvironmentBlock + 0xbc) >> 8 & 0xffffff01;
}



uint FUN_1801fc480(void)

{
  return *(uint *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 8) >> 0x1f;
}



bool FUN_1801fc498(void)

{
  char cVar1;
  int local_res8 [8];

  local_res8[0] = 0;
  cVar1 = FUN_1801fc480();
  if (cVar1 == '\0') {
    FUN_1801f5d10(local_res8);
  }
  return local_res8[0] != 1;
}



uint FUN_1801fc4dc(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;

  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_1801f42e0(*(undefined8 *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_1801fc384(param_4,0,param_1,0xffffffff,0,0,0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_1801f42e0(*(undefined8 *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          lVar3 = _malloc_base(uVar7);
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
        iVar1 = FUN_1801fc384(param_4,0,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),(int)uVar6,0,0);
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
      lVar3 = _malloc_base(1);
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
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



int FUN_1801fc688(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong lVar9;

  if (param_2 == (longlong *)0x0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    iVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  else {
    *param_2 = 0;
    lVar6 = *param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar4 = plStack_50, plVar5 = local_58, lVar6 != 0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      lVar6 = FUN_1802054d0(lVar6,&local_res10);
      if (lVar6 == 0) {
        iVar3 = FUN_1801fc8c4(*param_1,0,0,&local_58);
        plVar5 = local_58;
        if (iVar3 != 0) {
          plVar4 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1801f42e0(*plVar4);
              plVar4 = plVar4 + 1;
            } while (plVar4 != plStack_50);
          }
          goto LAB_1801fc7d7;
        }
      }
      else {
        iVar3 = FUN_1801fca48(*param_1,lVar6,&local_58);
        plVar5 = local_58;
        if (iVar3 != 0) {
          plVar4 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1801f42e0(*plVar4);
              plVar4 = plVar4 + 1;
            } while (plVar4 != plStack_50);
          }
          goto LAB_1801fc7d7;
        }
      }
      param_1 = param_1 + 1;
      lVar6 = *param_1;
    }
    lVar6 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    local_res18 = 0;
    for (plVar7 = local_58; plVar7 != plStack_50; plVar7 = plVar7 + 1) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(*plVar7 + lVar2) != '\0');
      local_res18 = local_res18 + 1 + lVar2;
    }
    lVar2 = __acrt_allocate_buffer_for_argv(lVar6,local_res18,1);
    if (lVar2 == 0) {
      FUN_1801f42e0(0);
      for (plVar7 = plVar5; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        FUN_1801f42e0(*plVar7);
      }
      iVar3 = -1;
LAB_1801fc7d7:
      FUN_1801f42e0(plVar5);
    }
    else {
      lVar6 = lVar2 + lVar6 * 8;
      local_res20 = lVar6;
      if (plVar5 != plVar4) {
        local_res10 = lVar2 - (longlong)plVar5;
        plVar7 = plVar5;
        do {
          lVar8 = -1;
          do {
            lVar9 = lVar8;
            lVar8 = lVar9 + 1;
          } while (*(char *)(*plVar7 + lVar8) != '\0');
          iVar3 = FUN_180205300();
          if (iVar3 != 0) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(longlong *)(local_res10 + (longlong)plVar7) = lVar6;
          lVar6 = lVar6 + lVar9 + 2;
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar4);
      }
      *param_2 = lVar2;
      FUN_1801f42e0(0);
      for (plVar7 = plVar5; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        FUN_1801f42e0(*plVar7);
      }
      FUN_1801f42e0(plVar5);
      iVar3 = 0;
    }
  }
  return iVar3;
}



undefined8 FUN_1801fc8c4(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar4;

  uVar6 = 0;
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(char *)(param_1 + lVar3) != '\0');
  uVar5 = lVar4 + 2;
  if (~param_3 < uVar5) {
    return 0xc;
  }
  uVar2 = _calloc_base(param_3 + 1 + uVar5);
  if (((param_3 != 0) && (iVar1 = FUN_180205300(), iVar1 != 0)) || (iVar1 = FUN_180205300(), iVar1 != 0)) {
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      lVar3 = _calloc_base(4,8);
      *param_4 = lVar3;
      FUN_1801f42e0(0);
      lVar3 = *param_4;
      if (lVar3 != 0) {
        param_4[1] = lVar3;
        param_4[2] = lVar3 + 0x20;
        goto LAB_1801fca1a;
      }
    }
    else {
      uVar5 = param_4[2] - *param_4 >> 3;
      if (uVar5 < 0x8000000000000000) {
        lVar3 = _recalloc_base(*param_4,uVar5 * 2,8);
        if (lVar3 != 0) {
          *param_4 = lVar3;
          param_4[1] = lVar3 + uVar5 * 8;
          param_4[2] = lVar3 + uVar5 * 0x10;
          FUN_1801f42e0(0);
          goto LAB_1801fca1a;
        }
        FUN_1801f42e0(0);
      }
    }
    uVar6 = 0xc;
    FUN_1801f42e0(uVar2);
  }
  else {
LAB_1801fca1a:
    *(undefined8 *)param_4[1] = uVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_1801f42e0(0);
  return uVar6;
}



void FUN_1801fca48(char *param_1,char *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  LPCWSTR pWVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  LPCWSTR pWVar12;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2fU) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) == 0))))) {
    param_2 = (char *)FUN_180205888(param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    FUN_1801fc8c4(param_1,0,0,param_3);
  }
  else {
    bVar9 = *param_2 - 0x2f;
    pWVar12 = (LPCWSTR)0x0;
    if ((0x2d < bVar9) || (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar9 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar11 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar11;
    FUN_180207610(&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      pWVar5 = (LPCWSTR)0xfde9;
    }
    else {
      iVar3 = FUN_1801f5d6c();
      if (iVar3 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        pWVar5 = (LPCWSTR)0x1;
      }
      else {
        pWVar5 = pWVar12;
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
      }
    }
    iVar3 = FUN_1801efde8(param_1,&local_338,local_348,pWVar5);
    pWVar5 = local_328;
    if (iVar3 != 0) {
      pWVar5 = pWVar12;
    }
    hFindFile = FindFirstFileExW(pWVar5,FindExInfoStandard,&local_298,FindExSearchNameMatch,(LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      FUN_1801fc8c4(param_1,0,0,param_3);
      if (local_310 != '\0') {
        FUN_1801f42e0(local_328);
      }
    }
    else {
      lVar8 = param_3[1] - *param_3 >> 3;
      do {
        uVar10 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVar10 = 0xfde9;
        }
        else {
          iVar3 = FUN_1801f5d6c();
          if (iVar3 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar10 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        iVar3 = FUN_1801fc4dc(local_298.cFileName,&local_2c8,local_348,uVar10);
        pcVar2 = local_2b8;
        pcVar6 = local_2b8;
        if (iVar3 != 0) {
          pcVar6 = (char *)0x0;
        }
        if ((*pcVar6 == '.') && ((pcVar6[1] == '\0' || ((pcVar6[1] == '.' && (pcVar6[2] == '\0')))))) {
          if (local_2a0 != '\0') {
            FUN_1801f42e0(local_2b8);
          }
        }
        else {
          iVar3 = FUN_1801fc8c4(pcVar6,param_1,uVar11,param_3);
          if (iVar3 != 0) {
            if (local_2a0 != '\0') {
              FUN_1801f42e0(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 == '\0') {
            }
            FUN_1801f42e0(local_328);
          }
          uVar11 = local_340;
          if (local_2a0 != '\0') {
            FUN_1801f42e0(pcVar2);
            uVar11 = local_340;
          }
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar7 = param_3[1] - *param_3 >> 3;
      if (lVar8 != lVar7) {
        FUN_180204f60(*param_3 + lVar8 * 8,lVar7 - lVar8,8,&LAB_1801fc4c8);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_1801f42e0(local_328);
      }
    }
  }
}



int thunk_FUN_1801fc688(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  longlong lVar9;

  if (param_2 == (longlong *)0x0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    iVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  else {
    *param_2 = 0;
    lVar6 = *param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar4 = plStack_50, plVar5 = plStack_58, lVar6 != 0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      lVar6 = FUN_1802054d0(lVar6,&lStackX_10);
      if (lVar6 == 0) {
        iVar3 = FUN_1801fc8c4(*param_1,0,0,&plStack_58);
        plVar5 = plStack_58;
        if (iVar3 != 0) {
          plVar4 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_1801f42e0(*plVar4);
              plVar4 = plVar4 + 1;
            } while (plVar4 != plStack_50);
          }
          goto LAB_1801fc7d7;
        }
      }
      else {
        iVar3 = FUN_1801fca48(*param_1,lVar6,&plStack_58);
        plVar5 = plStack_58;
        if (iVar3 != 0) {
          plVar4 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_1801f42e0(*plVar4);
              plVar4 = plVar4 + 1;
            } while (plVar4 != plStack_50);
          }
          goto LAB_1801fc7d7;
        }
      }
      param_1 = param_1 + 1;
      lVar6 = *param_1;
    }
    lVar6 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    lStackX_18 = 0;
    for (plVar7 = plStack_58; plVar7 != plStack_50; plVar7 = plVar7 + 1) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(*plVar7 + lVar2) != '\0');
      lStackX_18 = lStackX_18 + 1 + lVar2;
    }
    lVar2 = __acrt_allocate_buffer_for_argv(lVar6,lStackX_18,1);
    if (lVar2 == 0) {
      FUN_1801f42e0(0);
      for (plVar7 = plVar5; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        FUN_1801f42e0(*plVar7);
      }
      iVar3 = -1;
LAB_1801fc7d7:
      FUN_1801f42e0(plVar5);
    }
    else {
      lVar6 = lVar2 + lVar6 * 8;
      lStackX_20 = lVar6;
      if (plVar5 != plVar4) {
        lStackX_10 = lVar2 - (longlong)plVar5;
        plVar7 = plVar5;
        do {
          lVar8 = -1;
          do {
            lVar9 = lVar8;
            lVar8 = lVar9 + 1;
          } while (*(char *)(*plVar7 + lVar8) != '\0');
          iVar3 = FUN_180205300();
          if (iVar3 != 0) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(longlong *)(lStackX_10 + (longlong)plVar7) = lVar6;
          lVar6 = lVar6 + lVar9 + 2;
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar4);
      }
      *param_2 = lVar2;
      FUN_1801f42e0(0);
      for (plVar7 = plVar5; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        FUN_1801f42e0(*plVar7);
      }
      FUN_1801f42e0(plVar5);
      iVar3 = 0;
    }
  }
  return iVar3;
}



void FUN_1801fcdb0(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_1801e6a74(DVar1);
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar2 = FUN_1801f5d6c();
      if (iVar2 == 0) {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_1801eff88(local_228,&local_260,local_288,uVar3);
  }
}



void FUN_1801fced4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;

  __acrt_lock(*param_2);
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_1802aa2a0 == (undefined8 *)0x0) {
LAB_1801fcf87:
    puVar8 = (undefined4 *)FUN_1801e6ae4();
    *puVar8 = 0x16;
    FUN_1801e1344();
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      FUN_180207610(DAT_1802aa2a0,0,0x101);
      goto LAB_1801fcf87;
    }
    lVar11 = 2;
    puVar10 = DAT_1802aa2a0;
    do {
      uVar6 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar6;
      uVar6 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar6;
      uVar6 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar6;
      uVar6 = puVar7[7];
      puVar10[6] = puVar7[6];
      puVar10[7] = uVar6;
      uVar6 = puVar7[9];
      puVar10[8] = puVar7[8];
      puVar10[9] = uVar6;
      uVar6 = puVar7[0xb];
      puVar10[10] = puVar7[10];
      puVar10[0xb] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
      uVar4 = *(undefined4 *)(puVar7 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
      *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
      *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
      *(undefined4 *)(puVar10 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
      puVar9 = puVar10 + 0x10;
      uVar6 = puVar7[0xf];
      puVar10[0xe] = puVar7[0xe];
      puVar10[0xf] = uVar6;
      puVar7 = puVar7 + 0x10;
      lVar11 = lVar11 + -1;
      puVar10 = puVar9;
    } while (lVar11 != 0);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  }
  lVar11 = 2;
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_1802aa2a8 != (undefined8 *)0x0) {
    puVar10 = DAT_1802aa2a8;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        uVar6 = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[1] = uVar6;
        uVar6 = puVar7[3];
        puVar10[2] = puVar7[2];
        puVar10[3] = uVar6;
        uVar6 = puVar7[5];
        puVar10[4] = puVar7[4];
        puVar10[5] = uVar6;
        uVar6 = puVar7[7];
        puVar10[6] = puVar7[6];
        puVar10[7] = uVar6;
        uVar6 = puVar7[9];
        puVar10[8] = puVar7[8];
        puVar10[9] = uVar6;
        uVar6 = puVar7[0xb];
        puVar10[10] = puVar7[10];
        puVar10[0xb] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
        uVar4 = *(undefined4 *)(puVar7 + 0xd);
        uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
        *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
        *(undefined4 *)(puVar10 + 0xd) = uVar4;
        *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
        uVar6 = puVar7[0xf];
        puVar10[0xe] = puVar7[0xe];
        puVar10[0xf] = uVar6;
        puVar7 = puVar7 + 0x10;
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
      goto LAB_1801fd038;
    }
    FUN_180207610(DAT_1802aa2a8,0,0x100);
  }
  puVar8 = (undefined4 *)FUN_1801e6ae4();
  *puVar8 = 0x16;
  FUN_1801e1344();
LAB_1801fd038:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_1802a0b90)) {
    FUN_1801f42e0(**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_1802aa2b8 = 0;
  if (param_1 == -2) {
    DAT_1802aa2b8 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_1802aa2b8 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_1802aa2b8 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}



void FUN_1801fd124(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;

  FUN_180207610(param_1 + 0x18,0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar4 = lVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    lVar1 = lVar4 + 1;
    *(undefined1 *)(param_1 + lVar4 + 0x18) = (&DAT_1802a0ba8)[lVar4];
    lVar4 = lVar1;
  } while (lVar1 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_1802a0ca9)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}



void FUN_1801fd1bc(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined1 auStack_788 [32];
  byte *local_768;
  undefined1 *local_760;
  undefined4 local_758;
  undefined4 local_750;
  undefined4 local_748;
  _cpinfo local_738;
  undefined1 local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  byte local_418 [1024];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_788;
  local_738.LeadByte[10] = '\0';
  local_738.LeadByte[0xb] = '\0';
  local_738._18_2_ = 0;
  local_738.MaxCharSize = 0;
  local_738.DefaultChar[0] = '\0';
  local_738.DefaultChar[1] = '\0';
  local_738.LeadByte[0] = '\0';
  local_738.LeadByte[1] = '\0';
  local_738.LeadByte[2] = '\0';
  local_738.LeadByte[3] = '\0';
  local_738.LeadByte[4] = '\0';
  local_738.LeadByte[5] = '\0';
  local_738.LeadByte[6] = '\0';
  local_738.LeadByte[7] = '\0';
  local_738.LeadByte[8] = '\0';
  local_738.LeadByte[9] = '\0';
  if ((*(UINT *)(param_1 + 4) == 0xfde9) || (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    puVar6 = local_718;
    lVar10 = 0x100;
    do {
      *puVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = 0x20;
    bVar2 = local_738.LeadByte[0];
    while (bVar2 != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = 0x20;
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      bVar2 = *pBVar8;
    }
    local_758 = 0;
    local_760 = (undefined1 *)CONCAT44(local_760._4_4_,*(undefined4 *)(param_1 + 4));
    local_768 = local_418;
    FUN_1801ff220(0,1,local_718,0x100);
    local_748 = 0;
    local_750 = *(undefined4 *)(param_1 + 4);
    local_760 = local_618;
    local_758 = 0x100;
    local_768._0_4_ = 0x100;
    __acrt_LCMapStringA(0,*(undefined8 *)(param_1 + 0x220),0x100,local_718);
    local_748 = 0;
    local_750 = *(undefined4 *)(param_1 + 4);
    local_760 = local_518;
    local_758 = 0x100;
    local_768 = (byte *)CONCAT44(local_768._4_4_,0x100);
    __acrt_LCMapStringA(0,*(undefined8 *)(param_1 + 0x220),0x200,local_718);
    pbVar9 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pbVar9 & 1) == 0) {
        if ((*pbVar9 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(longlong)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pbVar9 = pbVar9 + 2;
      pbVar5 = pbVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
}



int FUN_1801fd3b4(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined4 local_260 [2];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];

  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar16 = getSystemCP(param_1);
  if (iVar16 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    iVar16 = 0;
  }
  else {
    puVar17 = (undefined8 *)_malloc_base(0x228);
    if (puVar17 == (undefined8 *)0x0) {
      FUN_1801f42e0(0);
      iVar16 = -1;
    }
    else {
      lVar21 = 4;
      lVar22 = 4;
      puVar14 = *(undefined8 **)(local_res18 + 0x88);
      puVar15 = local_248;
      do {
        puVar20 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar20 = *puVar18;
        puVar20[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar20[4] = uVar2;
        puVar20[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar20[8] = uVar2;
        puVar20[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar20[10] = uVar11;
        puVar20[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar20[0xc] = uVar2;
        puVar20[0xd] = uVar13;
        puVar20[0xe] = uVar11;
        puVar20[0xf] = uVar12;
        lVar22 = lVar22 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar20 + 0x10;
      } while (lVar22 != 0);
      uVar11 = puVar18[0x11];
      uVar12 = puVar18[0x12];
      uVar13 = puVar18[0x13];
      uVar2 = puVar18[0x14];
      puVar20[0x10] = puVar18[0x10];
      puVar20[0x11] = uVar11;
      puVar20[0x12] = uVar12;
      puVar20[0x13] = uVar13;
      puVar20[0x14] = uVar2;
      puVar14 = local_248;
      puVar15 = puVar17;
      do {
        puVar20 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar20 = *puVar18;
        puVar20[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar20[4] = uVar2;
        puVar20[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar20[8] = uVar2;
        puVar20[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar20[10] = uVar11;
        puVar20[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar20[0xc] = uVar2;
        puVar20[0xd] = uVar13;
        puVar20[0xe] = uVar11;
        puVar20[0xf] = uVar12;
        lVar21 = lVar21 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar20 + 0x10;
      } while (lVar21 != 0);
      uVar4 = *(undefined4 *)((longlong)puVar18 + 0x84);
      uVar5 = *(undefined4 *)(puVar18 + 0x11);
      uVar6 = *(undefined4 *)((longlong)puVar18 + 0x8c);
      uVar7 = *(undefined4 *)(puVar18 + 0x12);
      uVar8 = *(undefined4 *)((longlong)puVar18 + 0x94);
      uVar9 = *(undefined4 *)(puVar18 + 0x13);
      uVar10 = *(undefined4 *)((longlong)puVar18 + 0x9c);
      uVar2 = puVar18[0x14];
      *(undefined4 *)(puVar20 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
      *(undefined4 *)((longlong)puVar20 + 0x84) = uVar4;
      *(undefined4 *)(puVar20 + 0x11) = uVar5;
      *(undefined4 *)((longlong)puVar20 + 0x8c) = uVar6;
      *(undefined4 *)(puVar20 + 0x12) = uVar7;
      *(undefined4 *)((longlong)puVar20 + 0x94) = uVar8;
      *(undefined4 *)(puVar20 + 0x13) = uVar9;
      *(undefined4 *)((longlong)puVar20 + 0x9c) = uVar10;
      puVar20[0x14] = uVar2;
      *(undefined4 *)puVar17 = 0;
      iVar16 = FUN_1801fd758(iVar16,puVar17);
      if (iVar16 == -1) {
        puVar19 = (undefined4 *)FUN_1801e6ae4();
        *puVar19 = 0x16;
        FUN_1801f42e0(puVar17);
        iVar16 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_1801f2d58();
        }
        piVar3 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_1802a0b90)) {
          FUN_1801f42e0();
        }
        *(undefined4 *)puVar17 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar17;
        if ((DAT_1802a10d0 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264 = 5;
          local_260[0] = 5;
          FUN_1801fced4(local_268,local_260,&local_258,&local_264);
          if (param_2 != '\0') {
            PTR_DAT_1802a0860 = *local_res20;
          }
        }
        FUN_1801f42e0(0);
      }
    }
  }
  return iVar16;
}



__crt_multibyte_data * __cdecl update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;

  if (((*(uint *)(param_1 + 0x3a8) & DAT_1802a10d0) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_1802a0b90)) {
          FUN_1801f42e0();
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    return p_Var2;
  }
  abort();
}



undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;

  if (DAT_1802aa2bc == '\0') {
    DAT_1802aa2a8 = &DAT_1802a0ed0;
    DAT_1802aa2b0 = &DAT_1802a0b90;
    DAT_1802aa2a0 = &DAT_1802a0dc0;
    uVar1 = FUN_1801f2850();
    FUN_1801fd3b4(0xfffffffd,1,uVar1,&DAT_1802aa2b0);
    DAT_1802aa2bc = '\x01';
  }
  return 1;
}



void FUN_1801fd73c(void)

{
  __acrt_ptd *p_Var1;

  p_Var1 = (__acrt_ptd *)FUN_1801f2834();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_1802aa2b0);
  return;
}



void FUN_1801fd758(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  byte *pbVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  BYTE *pBVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar18;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  wchar_t *pwVar17;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  uVar4 = getSystemCP(param_1);
  pwVar8 = (wchar_t *)0x0;
  if (uVar4 == 0) {
LAB_1801fd9f0:
    FUN_1801fd124(param_2);
  }
  puVar6 = &DAT_1802a0fe0;
  uVar14 = 1;
  pwVar17 = pwVar8;
  do {
    if (*puVar6 == uVar4) {
      FUN_180207610(param_2 + 0x18,0,0x101);
      pbVar18 = &DAT_1802a0fd0;
      lVar9 = 4;
      pbVar7 = &DAT_1802a0ff0 + (longlong)pwVar17 * 0x30;
      do {
        bVar2 = *pbVar7;
        pbVar12 = pbVar7;
        while ((bVar2 != 0 && (pbVar12[1] != 0))) {
          bVar2 = *pbVar12;
          uVar16 = (uint)bVar2;
          if (bVar2 <= pbVar12[1]) {
            uVar15 = (uint)bVar2;
            do {
              uVar15 = uVar15 + 1;
              if (0x100 < uVar15) break;
              uVar16 = uVar16 + 1;
              pbVar1 = (byte *)((ulonglong)uVar15 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar18;
            } while (uVar16 <= pbVar12[1]);
          }
          pbVar12 = pbVar12 + 2;
          bVar2 = *pbVar12;
        }
        pbVar7 = pbVar7 + 8;
        pbVar18 = pbVar18 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 8) = 1;
      if (uVar4 == 0x3a4) {
        pwVar8 = L"ja-JP";
      }
      else if (uVar4 == 0x3a8) {
        pwVar8 = L"zh-CN";
      }
      else if (uVar4 == 0x3b5) {
        pwVar8 = L"ko-KR";
      }
      else if (uVar4 == 0x3b6) {
        pwVar8 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar8;
      puVar13 = (undefined2 *)(param_2 + 0xc);
      lVar9 = 6;
      do {
        *puVar13 = *(undefined2 *)(((longlong)pwVar17 * 0x30 - param_2) + 0x1802a0fd8 + (longlong)puVar13);
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_1801fd9e6;
    }
    uVar16 = (int)pwVar17 + 1;
    pwVar17 = (wchar_t *)(ulonglong)uVar16;
    puVar6 = puVar6 + 0xc;
  } while (uVar16 < 5);
  if (uVar4 == 65000) {
  }
  BVar5 = IsValidCodePage(uVar4 & 0xffff);
  if (BVar5 == 0) {
  }
  if (uVar4 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar4,&local_48);
    if (BVar5 == 0) {
      if (DAT_1802aa2b8 == 0) {
      }
      goto LAB_1801fd9f0;
    }
    FUN_180207610(param_2 + 0x18,0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar10 = local_48.LeadByte;
      bVar2 = local_48.LeadByte[0];
      while ((bVar2 != 0 && (pBVar10[1] != 0))) {
        bVar2 = *pBVar10;
        if ((uint)bVar2 <= (uint)pBVar10[1]) {
          uVar4 = (uint)bVar2;
          uVar11 = (ulonglong)(((uint)pBVar10[1] - (uint)bVar2) + 1);
          do {
            uVar4 = uVar4 + 1;
            pbVar7 = (byte *)((ulonglong)uVar4 + 0x18 + param_2);
            *pbVar7 = *pbVar7 | 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        pBVar10 = pBVar10 + 2;
        bVar2 = *pBVar10;
      }
      pbVar7 = (byte *)(param_2 + 0x1a);
      lVar9 = 0xfe;
      do {
        *pbVar7 = *pbVar7 | 8;
        pbVar7 = pbVar7 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 == 0x3a4) {
        pwVar8 = L"ja-JP";
      }
      else if (iVar3 == 0x3a8) {
        pwVar8 = L"zh-CN";
      }
      else if (iVar3 == 0x3b5) {
        pwVar8 = L"ko-KR";
      }
      else if (iVar3 == 0x3b6) {
        pwVar8 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar8;
    }
    else {
      uVar14 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar14;
  }
  puVar13 = (undefined2 *)(param_2 + 0xc);
  for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
LAB_1801fd9e6:
  FUN_1801fd1bc(param_2);
}



undefined8 FUN_1801fda20(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if (((*(byte *)(((ulonglong)param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + ((ulonglong)param_2 & 0xff) * 2)) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}



void FUN_1801fda94(undefined4 param_1)

{
  FUN_1801fda20(0,param_1,0,4);
  return;
}



undefined1 FUN_1801fdaa8(void)

{
  DAT_1802aa2e0 = GetCommandLineA();
  _DAT_1802aa2e8 = GetCommandLineW();
  return 1;
}



longlong FUN_1801fdad0(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar4;
  WCHAR *pWVar6;
  ulonglong uVar7;
  longlong lVar5;

  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar6 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar6[lVar4] != L'\0');
      pWVar6 = pWVar6 + lVar5 + 2;
      WVar1 = *pWVar6;
    }
    uVar7 = (longlong)pWVar6 + (2 - (longlong)pWVar3) >> 1;
    iVar2 = FUN_1801fc384(0,0,pWVar3,uVar7 & 0xffffffff,0,0,0,0);
    if (iVar2 != 0) {
      lVar4 = _malloc_base((longlong)iVar2);
      if (lVar4 != 0) {
        iVar2 = FUN_1801fc384(0,0,pWVar3,uVar7 & 0xffffffff,lVar4,iVar2,0,0);
        if (iVar2 == 0) {
          FUN_1801f42e0(lVar4);
          lVar4 = 0;
        }
        else {
          FUN_1801f42e0(0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return lVar4;
      }
      FUN_1801f42e0(0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return 0;
}



longlong FUN_1801fdbe0(void)

{
  WCHAR WVar1;
  LPWCH pWVar2;
  longlong lVar3;
  longlong lVar5;
  WCHAR *pWVar6;
  longlong lVar4;

  pWVar2 = GetEnvironmentStringsW();
  lVar3 = 0;
  if (pWVar2 != (LPWCH)0x0) {
    WVar1 = *pWVar2;
    pWVar6 = pWVar2;
    while (WVar1 != L'\0') {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (pWVar6[lVar3] != L'\0');
      pWVar6 = pWVar6 + lVar4 + 2;
      WVar1 = *pWVar6;
    }
    lVar4 = ((longlong)pWVar6 + (2 - (longlong)pWVar2) >> 1) * 2;
    lVar5 = _malloc_base(lVar4);
    lVar3 = 0;
    if (lVar5 != 0) {
      FUN_1802079d0(lVar5,pWVar2,lVar4);
      lVar3 = lVar5;
    }
    FUN_1801f42e0(0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return lVar3;
}



ulonglong FUN_1801fdc7c(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;

  uVar10 = 0;
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_1801e6ae4();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar6 = FUN_1802074fc(param_1,0x3d);
  if ((uVar6 == 0) || (uVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_1801e6ae4();
    *puVar5 = 0x16;
    FUN_1801f42e0(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(uVar6 + 2);
  if (DAT_1802a99f0 == DAT_1802a99f8) {
    DAT_1802a99f0 = (longlong *)FUN_1801fdfe0(DAT_1802a99f0);
  }
  if (DAT_1802a99f0 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_1802a99e8 == 0)) {
      if (sVar2 == 0) goto LAB_1801fdd34;
      if (DAT_1802a99e8 == 0) {
        DAT_1802a99e8 = _calloc_base(1,8);
        FUN_1801f42e0(0);
        if (DAT_1802a99e8 == 0) goto LAB_1801fdd30;
        if (DAT_1802a99f0 != (longlong *)0x0) goto LAB_1801fddd8;
      }
      DAT_1802a99f0 = (longlong *)_calloc_base(1,8);
      FUN_1801f42e0(0);
      if (DAT_1802a99f0 != (longlong *)0x0) goto LAB_1801fddcf;
    }
    else {
      lVar7 = FUN_1801f0f54();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_1801e6ae4();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_1802a99f0 == DAT_1802a99f8) {
          DAT_1802a99f0 = (longlong *)FUN_1801fdfe0(DAT_1802a99f0);
        }
LAB_1801fddcf:
        if (DAT_1802a99f0 != (longlong *)0x0) goto LAB_1801fddd8;
      }
    }
  }
  else {
LAB_1801fddd8:
    plVar8 = DAT_1802a99f0;
    lVar11 = (longlong)(uVar6 - param_1) >> 1;
    lVar7 = *DAT_1802a99f0;
    plVar9 = DAT_1802a99f0;
    while (lVar7 != 0) {
      iVar3 = FUN_180205940(param_1,lVar7,lVar11);
      if ((iVar3 == 0) && ((*(short *)(*plVar9 + lVar11 * 2) == 0x3d || (*(short *)(*plVar9 + lVar11 * 2) == 0)))) {
        lVar7 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_1801fde24;
      }
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
    }
    lVar7 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_1801fde24:
    uVar6 = uVar10;
    if ((-1 < lVar7) && (*plVar8 != 0)) {
      FUN_1801f42e0(plVar8[lVar7]);
      if (sVar2 == 0) {
        for (; plVar8[lVar7] != 0; lVar7 = lVar7 + 1) {
          plVar8[lVar7] = plVar8[lVar7 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar7,8);
        FUN_1801f42e0(0);
        uVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_1802a99f0 = plVar8;
        }
      }
      else {
        plVar8[lVar7] = param_1;
      }
LAB_1801fdeee:
      if (param_2 == 0) {
LAB_1801fdf8b:
        FUN_1801f42e0(uVar6);
        return 0;
      }
      lVar7 = -1;
      do {
        lVar12 = lVar7;
        lVar7 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar7 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_1801f42e0(0);
      }
      else {
        iVar3 = FUN_1801fb810();
        if (iVar3 != 0) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar11] = L'\0';
        BVar4 = SetEnvironmentVariableW(lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) & (ulonglong)(lpName + lVar11 + 1)));
        if (BVar4 != 0) {
          FUN_1801f42e0(lpName);
          goto LAB_1801fdf8b;
        }
        puVar5 = (undefined4 *)FUN_1801e6ae4();
        *puVar5 = 0x2a;
        FUN_1801f42e0(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_1801f42e0(uVar6);
      return uVar10;
    }
    if (sVar2 == 0) goto LAB_1801fdd34;
    uVar1 = -lVar7 + 2;
    if (((ulonglong)-lVar7 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_1801f42e0(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar7] = param_1;
        plVar8[1 - lVar7] = 0;
        DAT_1802a99f0 = plVar8;
        goto LAB_1801fdeee;
      }
    }
  }
LAB_1801fdd30:
  uVar10 = 0xffffffffffffffff;
LAB_1801fdd34:
  FUN_1801f42e0(param_1);
  return uVar10 & 0xffffffff;
}



longlong FUN_1801fdfe0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar8;
  longlong lVar7;

  lVar5 = 0;
  if (param_1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar3 = *param_1;
    plVar1 = param_1;
    while (lVar3 != 0) {
      lVar5 = lVar5 + 1;
      plVar1 = plVar1 + 1;
      lVar3 = *plVar1;
    }
    lVar5 = _calloc_base(lVar5 + 1,8);
    if (lVar5 == 0) {
LAB_1801fe0c9:
      abort();
    }
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar8 = lVar5 - (longlong)param_1;
      do {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (*(short *)(lVar3 + lVar6 * 2) != 0);
        uVar4 = _calloc_base(lVar7 + 2,2);
        *(undefined8 *)(lVar8 + (longlong)param_1) = uVar4;
        FUN_1801f42e0(0);
        if (*(longlong *)(lVar8 + (longlong)param_1) == 0) goto LAB_1801fe0c9;
        iVar2 = FUN_1801fb810();
        if (iVar2 != 0) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        lVar3 = *param_1;
      } while (lVar3 != 0);
    }
    FUN_1801f42e0(0);
  }
  return lVar5;
}



ulonglong thunk_FUN_1801fdc7c(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;

  uVar10 = 0;
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_1801e6ae4();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar6 = FUN_1802074fc(param_1,0x3d);
  if ((uVar6 == 0) || (uVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_1801e6ae4();
    *puVar5 = 0x16;
    FUN_1801f42e0(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(uVar6 + 2);
  if (DAT_1802a99f0 == DAT_1802a99f8) {
    DAT_1802a99f0 = (longlong *)FUN_1801fdfe0(DAT_1802a99f0);
  }
  if (DAT_1802a99f0 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_1802a99e8 == 0)) {
      if (sVar2 == 0) goto LAB_1801fdd34;
      if (DAT_1802a99e8 == 0) {
        DAT_1802a99e8 = _calloc_base(1,8);
        FUN_1801f42e0(0);
        if (DAT_1802a99e8 == 0) goto LAB_1801fdd30;
        if (DAT_1802a99f0 != (longlong *)0x0) goto LAB_1801fddd8;
      }
      DAT_1802a99f0 = (longlong *)_calloc_base(1,8);
      FUN_1801f42e0(0);
      if (DAT_1802a99f0 != (longlong *)0x0) goto LAB_1801fddcf;
    }
    else {
      lVar7 = FUN_1801f0f54();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_1801e6ae4();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_1802a99f0 == DAT_1802a99f8) {
          DAT_1802a99f0 = (longlong *)FUN_1801fdfe0(DAT_1802a99f0);
        }
LAB_1801fddcf:
        if (DAT_1802a99f0 != (longlong *)0x0) goto LAB_1801fddd8;
      }
    }
  }
  else {
LAB_1801fddd8:
    plVar8 = DAT_1802a99f0;
    lVar11 = (longlong)(uVar6 - param_1) >> 1;
    lVar7 = *DAT_1802a99f0;
    plVar9 = DAT_1802a99f0;
    while (lVar7 != 0) {
      iVar3 = FUN_180205940(param_1,lVar7,lVar11);
      if ((iVar3 == 0) && ((*(short *)(*plVar9 + lVar11 * 2) == 0x3d || (*(short *)(*plVar9 + lVar11 * 2) == 0)))) {
        lVar7 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_1801fde24;
      }
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
    }
    lVar7 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_1801fde24:
    uVar6 = uVar10;
    if ((-1 < lVar7) && (*plVar8 != 0)) {
      FUN_1801f42e0(plVar8[lVar7]);
      if (sVar2 == 0) {
        for (; plVar8[lVar7] != 0; lVar7 = lVar7 + 1) {
          plVar8[lVar7] = plVar8[lVar7 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar7,8);
        FUN_1801f42e0(0);
        uVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_1802a99f0 = plVar8;
        }
      }
      else {
        plVar8[lVar7] = param_1;
      }
LAB_1801fdeee:
      if (param_2 == 0) {
LAB_1801fdf8b:
        FUN_1801f42e0(uVar6);
        return 0;
      }
      lVar7 = -1;
      do {
        lVar12 = lVar7;
        lVar7 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar7 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_1801f42e0(0);
      }
      else {
        iVar3 = FUN_1801fb810();
        if (iVar3 != 0) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar11] = L'\0';
        BVar4 = SetEnvironmentVariableW(lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) & (ulonglong)(lpName + lVar11 + 1)));
        if (BVar4 != 0) {
          FUN_1801f42e0(lpName);
          goto LAB_1801fdf8b;
        }
        puVar5 = (undefined4 *)FUN_1801e6ae4();
        *puVar5 = 0x2a;
        FUN_1801f42e0(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_1801f42e0(uVar6);
      return uVar10;
    }
    if (sVar2 == 0) goto LAB_1801fdd34;
    uVar1 = -lVar7 + 2;
    if (((ulonglong)-lVar7 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_1801f42e0(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar7] = param_1;
        plVar8[1 - lVar7] = 0;
        DAT_1802a99f0 = plVar8;
        goto LAB_1801fdeee;
      }
    }
  }
LAB_1801fdd30:
  uVar10 = 0xffffffffffffffff;
LAB_1801fdd34:
  FUN_1801f42e0(param_1);
  return uVar10 & 0xffffffff;
}



longlong _recalloc_base(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;

  uVar3 = 0;
  if ((param_2 == 0) || (uVar3 = 0xffffffffffffffe0 % param_2, param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _msize_base(param_1,uVar3);
    }
    param_2 = param_2 * param_3;
    lVar2 = _realloc_base(param_1,param_2);
    if ((lVar2 != 0) && (uVar3 < param_2)) {
      FUN_180207610(lVar2 + uVar3,0,param_2 - uVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0xc;
    lVar2 = 0;
  }
  return lVar2;
}



bool FUN_1801fe1a0(void)

{
  DAT_1802aa2f0 = GetProcessHeap();
  return DAT_1802aa2f0 != (HANDLE)0x0;
}



undefined8 FUN_1801fe1f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;

  puVar3 = param_1;
  if (param_1 != param_2) {
    do {
      if (((code *)*puVar3 != (code *)0x0) && (cVar2 = (*(code *)*puVar3)(), cVar2 == '\0')) break;
      puVar3 = puVar3 + 2;
    } while (puVar3 != param_2);
    if (puVar3 != param_2) {
      if (puVar3 != param_1) {
        puVar3 = puVar3 + -1;
        do {
          if ((puVar3[-1] != 0) && ((code *)*puVar3 != (code *)0x0)) {
            (*(code *)*puVar3)(0);
          }
          puVar1 = puVar3 + -1;
          puVar3 = puVar3 + -2;
        } while (puVar1 != param_1);
      }
      return 0;
    }
  }
  return 1;
}



undefined8 FUN_1801fe278(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      (**(code **)(param_2 + -8))(0);
    }
  }
  return 1;
}



ulonglong FUN_1801fe2b4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;

  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_1802a0400 & 0x3f;
  uVar2 = DAT_1802aa308 ^ DAT_1802a0400;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];

  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_1801fe2b4(local_res8,local_res18,local_res8,local_res10);
  return;
}



void FUN_1801fe32c(undefined8 param_1)

{
  _DAT_1802aa2f8 = param_1;
  _DAT_1802aa300 = param_1;
  DAT_1802aa308 = param_1;
  _DAT_1802aa310 = param_1;
  return;
}



undefined8 FUN_1801fe34c(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined4 local_res10;
  longlong *plVar11;

  plVar11 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1801fe3a3:
    if (param_1 == 2) {
      puVar9 = (ulonglong *)&DAT_1802aa2f8;
    }
    else if (param_1 == 6) {
LAB_1801fe445:
      puVar9 = &DAT_1802aa308;
      plVar10 = plVar11;
    }
    else if (param_1 == 0xf) {
      puVar9 = (ulonglong *)&DAT_1802aa310;
    }
    else if (param_1 == 0x15) {
      puVar9 = (ulonglong *)&DAT_1802aa300;
      plVar10 = plVar11;
    }
    else {
      if (param_1 == 0x16) goto LAB_1801fe445;
      puVar9 = (ulonglong *)0x0;
      plVar10 = plVar11;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1801fe3d3;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1801fe425;
      }
      goto LAB_1801fe3a3;
    }
LAB_1801fe3d3:
    plVar10 = (longlong *)FUN_1801f2894();
    if (plVar10 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar5 = *plVar10;
    lVar3 = lVar5 + 0xc0;
    for (; lVar5 != lVar3; lVar5 = lVar5 + 0x10) {
      if (*(uint *)(lVar5 + 4) == param_1) goto LAB_1801fe420;
    }
    lVar5 = 0;
LAB_1801fe420:
    if (lVar5 == 0) {
LAB_1801fe425:
      puVar2 = (undefined4 *)FUN_1801e6ae4();
      *puVar2 = 0x16;
      FUN_1801e1344();
      return 0xffffffff;
    }
    puVar9 = (ulonglong *)(lVar5 + 8);
    bVar1 = false;
  }
  lVar5 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar8 = (code *)*puVar9;
  if (bVar1) {
    bVar7 = (byte)DAT_1802a0400 & 0x3f;
    pcVar8 = (code *)(((ulonglong)pcVar8 ^ DAT_1802a0400) >> bVar7 | ((ulonglong)pcVar8 ^ DAT_1802a0400) << 0x40 - bVar7
                     );
  }
  if (pcVar8 == (code *)0x1) goto LAB_1801fe52e;
  if (pcVar8 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_1801f0750(3);
    pcVar8 = (code *)swi(3);
    uVar6 = (*pcVar8)();
    return uVar6;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar5 = plVar10[1];
    plVar10[1] = 0;
    if (param_1 == 8) {
      lVar3 = FUN_1801f2834();
      local_res10 = *(undefined4 *)(lVar3 + 0x10);
      lVar3 = FUN_1801f2834();
      *(undefined4 *)(lVar3 + 0x10) = 0x8c;
      goto LAB_1801fe4e6;
    }
  }
  else {
LAB_1801fe4e6:
    if (param_1 == 8) {
      lVar3 = *plVar10;
      for (lVar4 = lVar3 + 0x30; lVar4 != lVar3 + 0xc0; lVar4 = lVar4 + 0x10) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      goto LAB_1801fe52e;
    }
  }
  *puVar9 = DAT_1802a0400;
LAB_1801fe52e:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar8 != (code *)0x1) {
    if (param_1 == 8) {
      lVar3 = FUN_1801f2834();
      (*pcVar8)(8,*(undefined4 *)(lVar3 + 0x10));
    }
    else {
      (*pcVar8)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) && (plVar10[1] = lVar5, param_1 == 8)) {
      lVar5 = FUN_1801f2834();
      *(undefined4 *)(lVar5 + 0x10) = local_res10;
    }
  }
  return 0;
}



undefined8 FUN_1801fe5b0(void)

{
  byte bVar1;

  bVar1 = (byte)DAT_1802a0400 & 0x3f;
  return CONCAT71((int7)(DAT_1802a0400 >> 8),
                  (DAT_1802aa318 ^ DAT_1802a0400) >> bVar1 != 0 || (DAT_1802aa318 ^ DAT_1802a0400) << 0x40 - bVar1 != 0)
  ;
}



void FUN_1801fe5d0(undefined8 param_1)

{
  DAT_1802aa318 = param_1;
  return;
}



undefined8 FUN_1801fe5e0(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;

  bVar2 = (byte)DAT_1802a0400 & 0x3f;
  pcVar3 = (code *)((DAT_1802aa318 ^ DAT_1802a0400) >> bVar2 | (DAT_1802aa318 ^ DAT_1802a0400) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}



undefined4
FUN_1801fe610(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4,ulonglong param_5,
             longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (param_2 == (undefined2 *)0x0) {
    if (param_3 == 0) {
LAB_1801fe67e:
      if (param_1 != (ulonglong *)0x0) {
        *param_1 = 0;
      }
      uVar2 = param_5;
      if (param_3 < param_5) {
        uVar2 = param_3;
      }
      if (uVar2 < 0x80000000) {
        lVar1 = FUN_1801fe730(param_2,param_4,uVar2,param_6);
        if (lVar1 == -1) {
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = 0;
          }
          if (*(char *)(param_6 + 0x30) == '\0') {
            return 0;
          }
          return *(undefined4 *)(param_6 + 0x2c);
        }
        uVar2 = lVar1 + 1;
        if (param_2 == (undefined2 *)0x0) goto LAB_1801fe70b;
        if (param_3 < uVar2) {
          if (param_5 != 0xffffffffffffffff) {
            *param_2 = 0;
            uVar3 = 0x22;
            goto LAB_1801fe6ec;
          }
          uVar3 = 0x50;
          uVar2 = param_3;
        }
        param_2[uVar2 - 1] = 0;
LAB_1801fe70b:
        if (param_1 == (ulonglong *)0x0) {
          return uVar3;
        }
        *param_1 = uVar2;
        return uVar3;
      }
      uVar3 = 0x16;
LAB_1801fe6ec:
      *(undefined4 *)(param_6 + 0x2c) = uVar3;
      *(undefined1 *)(param_6 + 0x30) = 1;
      goto LAB_1801fe660;
    }
  }
  else if (param_3 != 0) {
    *param_2 = 0;
    goto LAB_1801fe67e;
  }
  uVar3 = 0x16;
  *(undefined1 *)(param_6 + 0x30) = 1;
  *(undefined4 *)(param_6 + 0x2c) = 0x16;
LAB_1801fe660:
  FUN_1801e128c(0,0,0,0,0,param_6);
  return uVar3;
}



ulonglong FUN_1801fe730(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 local_res8;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffd0;
  uint uVar7;
  undefined8 uVar8;

  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar8 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = 0;
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1801e128c(0,0,0,0,0,param_4);
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_1801e6290(param_4);
    }
    iVar1 = *(int *)(*(longlong *)(param_4 + 0x18) + 0xc);
    if (iVar1 == 0xfde9) {
      local_res8 = 0;
      uVar3 = FUN_1801f9494(param_1,&local_res10,param_3,&local_res8,param_4);
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138);
      if (param_1 == (ushort *)0x0) {
        uVar3 = 0xffffffffffffffff;
        if (lVar4 == 0) {
          do {
            uVar3 = uVar3 + 1;
          } while (local_res10[uVar3] != 0);
          return uVar3;
        }
        iVar1 = FUN_1801fc2f4(iVar1,9,local_res10,0xffffffff,0,(ulonglong)uVar7 << 0x20,uVar8);
        lVar4 = (longlong)iVar1;
        if (lVar4 == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          return 0xffffffffffffffff;
        }
      }
      else {
        if (lVar4 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          do {
            *param_1 = (ushort)local_res10[uVar3];
            if (local_res10[uVar3] == 0) {
              return uVar3;
            }
            uVar3 = uVar3 + 1;
            param_1 = param_1 + 1;
          } while (uVar3 < param_3);
          return uVar3;
        }
        uVar5 = (uint)param_3;
        iVar1 = FUN_1801fc2f4(iVar1,9,local_res10,0xffffffff,param_1,CONCAT44(uVar7,uVar5),uVar8);
        lVar4 = (longlong)iVar1;
        if (lVar4 == 0) {
          DVar2 = GetLastError();
          if (DVar2 == 0x7a) {
            uVar3 = param_3 & 0xffffffff;
            pbVar6 = local_res10;
            while (uVar5 != 0) {
              uVar5 = (int)uVar3 - 1;
              uVar3 = (ulonglong)uVar5;
              if (*pbVar6 == 0) break;
              if ((*(short *)(**(longlong **)(param_4 + 0x18) + (ulonglong)*pbVar6 * 2) < 0) &&
                 (pbVar6 = pbVar6 + 1, *pbVar6 == 0)) goto LAB_1801fe857;
              pbVar6 = pbVar6 + 1;
            }
            iVar1 = FUN_1801fc2f4(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),1,local_res10,
                                  (int)pbVar6 - (int)local_res10,param_1,param_3 & 0xffffffff);
            if ((longlong)iVar1 != 0) {
              return (longlong)iVar1;
            }
          }
LAB_1801fe857:
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          *param_1 = 0;
          return 0xffffffffffffffff;
        }
      }
      uVar3 = lVar4 - 1;
    }
  }
  return uVar3;
}



undefined4 FUN_1801fe928(void)

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
  uVar1 = FUN_1801fe610();
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



undefined4
FUN_1801fe9d0(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,ulonglong param_5,
             longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 != 0) goto LAB_1801fea33;
  }
  else {
    if (param_3 == 0) {
LAB_1801fea33:
      uVar3 = 0x16;
      *(undefined1 *)(param_6 + 0x30) = 1;
      *(undefined4 *)(param_6 + 0x2c) = 0x16;
      goto LAB_1801fea49;
    }
    *param_2 = 0;
  }
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
  }
  uVar2 = param_5;
  if (param_3 < param_5) {
    uVar2 = param_3;
  }
  if (0x7fffffff < uVar2) {
    uVar3 = 0x16;
LAB_1801feaa4:
    *(undefined4 *)(param_6 + 0x2c) = uVar3;
    *(undefined1 *)(param_6 + 0x30) = 1;
LAB_1801fea49:
    FUN_1801e128c(0,0,0,0,0,param_6);
    return uVar3;
  }
  lVar1 = FUN_1801feae4(param_2,param_4,uVar2,param_6);
  if (lVar1 == -1) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    if (*(char *)(param_6 + 0x30) == '\0') {
      return 0;
    }
    return *(undefined4 *)(param_6 + 0x2c);
  }
  uVar2 = lVar1 + 1;
  if (param_2 == (undefined1 *)0x0) goto LAB_1801feabf;
  if (param_3 < uVar2) {
    if (param_5 != 0xffffffffffffffff) {
      *param_2 = 0;
      uVar3 = 0x22;
      goto LAB_1801feaa4;
    }
    uVar3 = 0x50;
    uVar2 = param_3;
  }
  param_2[uVar2 - 1] = 0;
LAB_1801feabf:
  if (param_1 == (ulonglong *)0x0) {
    return uVar3;
  }
  *param_1 = uVar2;
  return uVar3;
}



void FUN_1801feae4(longlong param_1,ushort *param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  int iVar5;
  DWORD DVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int *local_80;
  int local_78 [2];
  ushort *local_70;
  undefined8 local_68;
  char local_60 [8];
  ulonglong local_58;

  local_58 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  uVar9 = 0;
  local_78[0] = 0;
  if ((param_1 == 0) || (param_3 != 0)) {
    local_70 = param_2;
    if (param_2 == (ushort *)0x0) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 0x16;
      local_98 = (char *)0x0;
      local_90 = param_4;
      FUN_1801e128c(0,0,0,0);
    }
    else {
      if (*(char *)(param_4 + 0x28) == '\0') {
        FUN_1801e6290(param_4);
      }
      lVar3 = *(longlong *)(param_4 + 0x18);
      iVar5 = *(int *)(lVar3 + 0xc);
      if (iVar5 == 0xfde9) {
        local_68 = 0;
        local_98 = (char *)param_4;
        FUN_180205b28(param_1,&local_70,param_3,&local_68);
      }
      else {
        if (param_1 == 0) {
          if (*(longlong *)(lVar3 + 0x138) == 0) {
            uVar2 = *local_70;
            while( true ) {
              if (uVar2 == 0) {
              }
              if (0xff < uVar2) break;
              local_70 = local_70 + 1;
              uVar2 = *local_70;
            }
            goto LAB_1801febf5;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = (ulonglong)local_90._4_4_ << 0x20;
          local_98 = (char *)0x0;
          iVar5 = FUN_1801fc384(iVar5,0,local_70,0xffffffff);
          if ((iVar5 != 0) && (local_78[0] == 0)) {
          }
        }
        else {
          if (*(longlong *)(lVar3 + 0x138) == 0) {
            if (param_3 == 0) {
            }
            while (*local_70 < 0x100) {
              *(char *)(param_1 + uVar9) = (char)*local_70;
              uVar2 = *local_70;
              local_70 = local_70 + 1;
              if (uVar2 == 0) {
              }
              uVar9 = uVar9 + 1;
              if (param_3 <= uVar9) {
              }
            }
LAB_1801febf5:
            *(undefined1 *)(param_4 + 0x30) = 1;
            *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          }
          uVar10 = param_3;
          puVar4 = local_70;
          local_98 = (char *)param_1;
          if (*(int *)(lVar3 + 8) == 1) {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              if (*puVar4 == 0) {
                param_3 = ((longlong)puVar4 - (longlong)local_70 >> 1) + 1;
                break;
              }
              puVar4 = puVar4 + 1;
            }
            local_80 = local_78;
            local_88 = 0;
            local_90 = CONCAT44(local_90._4_4_,(int)param_3);
            iVar5 = FUN_1801fc384(iVar5,0,local_70,param_3 & 0xffffffff);
            if ((iVar5 != 0) && (local_78[0] == 0)) {
            }
            goto LAB_1801febf5;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = CONCAT44(local_90._4_4_,(int)param_3);
          iVar5 = FUN_1801fc384(iVar5,0,local_70,0xffffffff);
          if (local_78[0] == 0) {
            if (iVar5 != 0) {
            }
            DVar6 = GetLastError();
            if (DVar6 == 0x7a) {
              if (param_3 == 0) {
              }
              uVar10 = 0;
              while( true ) {
                local_80 = local_78;
                local_88 = 0;
                iVar5 = *(int *)(*(longlong *)(param_4 + 0x18) + 8);
                if (5 < iVar5) {
                  iVar5 = 5;
                }
                local_90 = CONCAT44(local_90._4_4_,iVar5);
                local_98 = local_60;
                iVar5 = FUN_1801fc384(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),0,local_70,1);
                if ((((iVar5 == 0) || (local_78[0] != 0)) || (iVar5 < 0)) || (uVar8 = (ulonglong)iVar5, 5 < uVar8))
                break;
                if (param_3 < uVar8 + uVar10) {
                }
                uVar7 = uVar9;
                if (0 < (longlong)uVar8) {
                  do {
                    cVar1 = local_60[uVar7];
                    *(char *)(param_1 + uVar10) = cVar1;
                    if (cVar1 == '\0') {
                    }
                    uVar7 = uVar7 + 1;
                    uVar10 = uVar10 + 1;
                  } while ((longlong)uVar7 < (longlong)uVar8);
                }
                local_70 = local_70 + 1;
                if (param_3 <= uVar10) {
                }
              }
            }
          }
        }
        *(undefined4 *)(param_4 + 0x2c) = 0x2a;
        *(undefined1 *)(param_4 + 0x30) = 1;
      }
    }
  }
}



undefined4 FUN_1801fee24(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_stack_00000030;
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
  if (in_stack_00000030 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_1802a0858._0_4_;
    uVar3 = PTR_PTR_1802a0858._4_4_;
    uVar4 = PTR_DAT_1802a0860._0_4_;
    uVar5 = PTR_DAT_1802a0860._4_4_;
    if (DAT_1802a9ca0 != 0) goto LAB_1801fee72;
  }
  else {
    uVar1 = *in_stack_00000030;
    uVar3 = in_stack_00000030[1];
    uVar4 = in_stack_00000030[2];
    uVar5 = in_stack_00000030[3];
  }
  local_20 = '\x01';
  local_30 = uVar1;
  uStack_2c = uVar3;
  uStack_28 = uVar4;
  uStack_24 = uVar5;
LAB_1801fee72:
  uVar1 = FUN_1801fe9d0();
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



void FUN_1801feedc(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_88 [64];
  undefined4 local_48 [2];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;

  puVar8 = auStack_88;
  puVar10 = auStack_88;
  puVar9 = auStack_88;
  local_20 = DAT_1802a0400 ^ (ulonglong)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVar1 = *(undefined4 *)(local_38 + 0xc);
  iVar3 = FUN_1801f6014(param_2,param_3,0,0);
  if (iVar3 == 0) goto LAB_1801ff01e;
  uVar6 = (longlong)iVar3 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
    puVar7 = (undefined4 *)0x0;
LAB_1801ff006:
    puVar10 = puVar9;
    if (puVar7 == (undefined4 *)0x0) goto LAB_1801ff01e;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar5 = (undefined4 *)((longlong)local_48 + lVar2);
      puVar7 = (undefined4 *)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_1801ff006;
      *puVar5 = 0xcccc;
LAB_1801fefad:
      puVar7 = puVar5 + 4;
      puVar9 = puVar8;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base(uVar6);
      puVar7 = (undefined4 *)0x0;
      puVar9 = auStack_88;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_1801fefad;
      }
    }
    if (puVar7 == (undefined4 *)0x0) goto LAB_1801ff006;
    *(undefined8 *)(puVar9 + -8) = 0x1801fefc6;
    iVar3 = FUN_1801f6014(param_2,param_3,puVar7,iVar3);
    if (iVar3 == 0) goto LAB_1801ff006;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(int *)(puVar9 + 0x28) = param_5;
    *(ulonglong *)(puVar9 + 0x20) = -(ulonglong)(param_5 != 0) & param_4;
    *(undefined8 *)(puVar9 + -8) = 0x1801ff000;
    FUN_1801fc384(uVar1,0,puVar7,0xffffffff);
  }
  puVar10 = puVar9;
  if (puVar7[-4] == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x1801ff01e;
    FUN_1801f42e0();
  }
LAB_1801ff01e:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  *(undefined **)(puVar10 + -8) = &UNK_1801ff03d;
}



void FUN_1801ff058(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_1801feedc(param_1,param_3,param_4,local_c8);
    if (iVar1 != 0) {
      lVar3 = _calloc_base((longlong)iVar1,1);
      *param_5 = lVar3;
      FUN_1801f42e0(0);
      if (*param_5 == 0) {
      }
      iVar1 = FUN_180205300();
      if (iVar1 == 0) {
      }
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) {
    }
    iVar1 = FUN_1801feedc(param_1,param_3,param_4,0);
    if (iVar1 == 0) {
    }
    lVar3 = _calloc_base((longlong)iVar1,1);
    if (lVar3 == 0) goto LAB_1801ff169;
    iVar1 = FUN_1801feedc(param_1,param_3,param_4,lVar3);
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 0) {
      }
      local_d8[0] = 0;
      iVar1 = FUN_1801f6014(param_3,param_4 | 0x20000000,local_d8,2);
      if (iVar1 == 0) {
      }
      *(undefined1 *)param_5 = (undefined1)local_d8[0];
    }
    iVar1 = FUN_1801f6014(param_3,param_4,0,0);
    if (iVar1 == 0) {
    }
    lVar3 = _calloc_base((longlong)iVar1,2);
    if (lVar3 == 0) goto LAB_1801ff169;
    iVar1 = FUN_1801f6014(param_3,param_4,lVar3,iVar1);
  }
  if (iVar1 != 0) {
    *param_5 = lVar3;
    lVar3 = 0;
  }
LAB_1801ff169:
  FUN_1801f42e0(lVar3);
}



void FUN_1801ff220(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,undefined4 param_4,LPWORD param_5,
                  int param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  LPCWSTR lpSrcStr;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;

  puVar7 = auStack_88;
  puVar9 = auStack_88;
  puVar8 = auStack_88;
  local_30 = DAT_1802a0400 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_1801fc2f4(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  if (iVar3 == 0) goto LAB_1801ff376;
  uVar1 = (longlong)iVar3 * 2;
  uVar6 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar6 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
LAB_1801ff35e:
    puVar9 = puVar8;
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_1801ff376;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar8 = auStack_88 + lVar2;
      puVar7 = auStack_88 + lVar2;
      puVar5 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_1801ff35e;
      *puVar5 = 0xcccc;
LAB_1801ff30c:
      lpSrcStr = (LPCWSTR)(puVar5 + 4);
      puVar8 = puVar7;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base();
      lpSrcStr = (LPCWSTR)0x0;
      puVar8 = auStack_88;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_1801ff30c;
      }
    }
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_1801ff35e;
    *(undefined8 *)(puVar8 + -8) = 0x1801ff322;
    FUN_180207610(lpSrcStr,0,uVar1);
    *(int *)(puVar8 + 0x28) = iVar3;
    *(LPCWSTR *)(puVar8 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar8 + -8) = 0x1801ff33e;
    iVar3 = FUN_1801fc2f4(param_6,1,param_3,param_4);
    if (iVar3 == 0) goto LAB_1801ff35e;
    *(undefined8 *)(puVar8 + -8) = 0x1801ff358;
    GetStringTypeW(param_2,lpSrcStr,iVar3,param_5);
  }
  puVar9 = puVar8;
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x1801ff376;
    FUN_1801f42e0();
  }
LAB_1801ff376:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined **)(puVar9 + -8) = &UNK_1801ff395;
}



LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;

  if (param_1 == (LPVOID)0x0) {
    pvVar2 = (LPVOID)_malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_1801f42e0();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_1802aa2f0,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_180201f40();
        } while ((iVar1 != 0) && (iVar1 = FUN_1801f0240(param_2), iVar1 != 0));
      }
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}



void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;

  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_1802a0868) && (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  return;
}



void __acrt_free_locale(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;

  if ((((*(undefined ***)(param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)(param_1 + 0xf8) != &PTR_DAT_1802a0500)) && (*(int **)(param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)(param_1 + 0xe0) == 0)) {
    if ((*(int **)(param_1 + 0xf0) != (int *)0x0) && (**(int **)(param_1 + 0xf0) == 0)) {
      FUN_1801f42e0();
      __acrt_locale_free_monetary(*(undefined8 *)(param_1 + 0xf8));
    }
    if ((*(int **)(param_1 + 0xe8) != (int *)0x0) && (**(int **)(param_1 + 0xe8) == 0)) {
      FUN_1801f42e0();
      __acrt_locale_free_numeric(*(undefined8 *)(param_1 + 0xf8));
    }
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0xe0));
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_1801f42e0(*(longlong *)(param_1 + 0x108) + -0xfe);
    FUN_1801f42e0(*(longlong *)(param_1 + 0x110) + -0x80);
    FUN_1801f42e0(*(longlong *)(param_1 + 0x118) + -0x80);
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined8 *)(param_1 + 0x120));
  puVar2 = (undefined8 *)(param_1 + 0x128);
  lVar1 = 6;
  puVar3 = (undefined8 *)(param_1 + 0x38);
  do {
    if ((((undefined *)puVar3[-2] != &DAT_1802a0868) && ((int *)*puVar3 != (int *)0x0)) && (*(int *)*puVar3 == 0)) {
      FUN_1801f42e0();
      FUN_1801f42e0(*puVar2);
    }
    if (((puVar3[-3] != 0) && ((int *)puVar3[-1] != (int *)0x0)) && (*(int *)puVar3[-1] == 0)) {
      FUN_1801f42e0();
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1801f42e0(param_1);
  return;
}



int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;

  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_180248900)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}



void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_180248900)) && (*(int *)((longlong)param_1 + 0x15c) == 0))
  {
    __acrt_locale_free_time();
    FUN_1801f42e0(param_1);
  }
  return;
}



int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;

  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_180248900)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}



void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;

  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_1802a0868) && (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  }
  return;
}



longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;

  lVar1 = FUN_1801f2834();
  if (((DAT_1802a10d0 & *(uint *)(lVar1 + 0x3a8)) == 0) || (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    __acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_1802a9ca8);
    __acrt_unlock(4);
    if (lVar2 == 0) {
      abort();
    }
  }
  return lVar2;
}



undefined ** _updatetlocinfoEx_nolock(longlong *param_1,undefined **param_2)

{
  undefined **ppuVar1;

  if ((param_2 == (undefined **)0x0) || (param_1 == (longlong *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (longlong)param_2;
      __acrt_add_locale_ref(param_2);
      if (((ppuVar1 != (undefined **)0x0) && (__acrt_release_locale_ref(ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1802a0700)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}



void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1802a0518) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1802a0520) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_1802a0528) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_1802a0530) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1802a0538) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1802a0540) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1802a0548) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_1802a0568) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_1802a0570) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_1802a0578) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_1802a0580) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_1802a0588) {
      FUN_1801f42e0();
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_1802a0590) {
      FUN_1801f42e0();
    }
  }
  return;
}



undefined8 FUN_1801ff944(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  undefined **ppuVar31;
  undefined4 *puVar32;
  byte *pbVar33;
  undefined **ppuVar34;
  byte *pbVar35;
  longlong local_38 [2];

  puVar32 = (undefined4 *)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x140) == 0) && (*(longlong *)(param_1 + 0x148) == 0)) {
    ppuVar31 = (undefined **)0x0;
    ppuVar34 = &PTR_DAT_1802a0500;
LAB_1801ffdf3:
    piVar4 = *(int **)(param_1 + 0xf0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
    }
    piVar4 = *(int **)(param_1 + 0xe0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      iVar9 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FUN_1801f42e0(*(undefined8 *)(param_1 + 0xf8));
        FUN_1801f42e0(*(undefined8 *)(param_1 + 0xe0));
      }
    }
    *(undefined4 **)(param_1 + 0xf0) = puVar32;
    uVar30 = 0;
    *(undefined ***)(param_1 + 0xe0) = ppuVar31;
    *(undefined8 *)(param_1 + 0xf8) = ppuVar34;
  }
  else {
    ppuVar34 = (undefined **)_calloc_base(1,0x98);
    FUN_1801f42e0(0);
    if (ppuVar34 != (undefined **)0x0) {
      ppuVar31 = (undefined **)_calloc_base(1,4);
      FUN_1801f42e0(0);
      puVar5 = PTR_DAT_1802a0508;
      if (ppuVar31 != (undefined **)0x0) {
        if (*(longlong *)(param_1 + 0x140) == 0) {
          *ppuVar34 = PTR_DAT_1802a0500;
          ppuVar34[1] = puVar5;
          puVar5 = PTR_DAT_1802a0518;
          ppuVar34[2] = PTR_DAT_1802a0510;
          ppuVar34[3] = puVar5;
          puVar5 = PTR_DAT_1802a0528;
          ppuVar34[4] = PTR_DAT_1802a0520;
          ppuVar34[5] = puVar5;
          puVar5 = PTR_DAT_1802a0538;
          ppuVar34[6] = PTR_DAT_1802a0530;
          ppuVar34[7] = puVar5;
          puVar5 = PTR_DAT_1802a0548;
          ppuVar34[8] = PTR_DAT_1802a0540;
          ppuVar34[9] = puVar5;
          puVar5 = PTR_DAT_1802a0558;
          ppuVar34[10] = _DAT_1802a0550;
          ppuVar34[0xb] = puVar5;
          puVar5 = PTR_DAT_1802a0568;
          ppuVar34[0xc] = PTR_DAT_1802a0560;
          ppuVar34[0xd] = puVar5;
          uVar8 = PTR_DAT_1802a0578._4_4_;
          uVar7 = PTR_DAT_1802a0578._0_4_;
          uVar6 = PTR_DAT_1802a0570._4_4_;
          *(undefined4 *)(ppuVar34 + 0xe) = PTR_DAT_1802a0570._0_4_;
          *(undefined4 *)((longlong)ppuVar34 + 0x74) = uVar6;
          *(undefined4 *)(ppuVar34 + 0xf) = uVar7;
          *(undefined4 *)((longlong)ppuVar34 + 0x7c) = uVar8;
          puVar5 = PTR_DAT_1802a0588;
          ppuVar34[0x10] = PTR_DAT_1802a0580;
          ppuVar34[0x11] = puVar5;
          ppuVar34[0x12] = PTR_DAT_1802a0590;
        }
        else {
          puVar32 = (undefined4 *)_calloc_base(1,4);
          FUN_1801f42e0(0);
          if (puVar32 == (undefined4 *)0x0) {
            FUN_1801f42e0(ppuVar34);
            ppuVar34 = ppuVar31;
            goto LAB_1801ff9e4;
          }
          uVar30 = *(undefined8 *)(param_1 + 0x140);
          iVar9 = FUN_1801ff058(local_38,1,uVar30,0x15,ppuVar34 + 3);
          iVar10 = FUN_1801ff058(local_38,1,uVar30,0x14,ppuVar34 + 4);
          iVar11 = FUN_1801ff058(local_38,1,uVar30,0x16,ppuVar34 + 5);
          iVar12 = FUN_1801ff058(local_38,1,uVar30,0x17,ppuVar34 + 6);
          iVar13 = FUN_1801ff058(local_38,1,uVar30,0x18,ppuVar34 + 7);
          iVar14 = FUN_1801ff058(local_38,1,uVar30,0x50,ppuVar34 + 8);
          iVar15 = FUN_1801ff058(local_38,1,uVar30,0x51,ppuVar34 + 9);
          iVar16 = FUN_1801ff058(local_38,0,uVar30,0x1a,ppuVar34 + 10);
          iVar17 = FUN_1801ff058(local_38,0,uVar30,0x19,(longlong)ppuVar34 + 0x51);
          iVar18 = FUN_1801ff058(local_38,0,uVar30,0x54,(longlong)ppuVar34 + 0x52);
          iVar19 = FUN_1801ff058(local_38,0,uVar30,0x55,(longlong)ppuVar34 + 0x53);
          iVar20 = FUN_1801ff058(local_38,0,uVar30,0x56,(undefined4 *)((longlong)ppuVar34 + 0x54));
          iVar21 = FUN_1801ff058(local_38,0,uVar30,0x57,(longlong)ppuVar34 + 0x55);
          iVar22 = FUN_1801ff058(local_38,0,uVar30,0x52,(longlong)ppuVar34 + 0x56);
          iVar23 = FUN_1801ff058(local_38,0,uVar30,0x53,(longlong)ppuVar34 + 0x57);
          iVar24 = FUN_1801ff058(local_38,2,uVar30,0x15,ppuVar34 + 0xd);
          iVar25 = FUN_1801ff058(local_38,2,uVar30,0x14,ppuVar34 + 0xe);
          iVar26 = FUN_1801ff058(local_38,2,uVar30,0x16,ppuVar34 + 0xf);
          iVar27 = FUN_1801ff058(local_38,2,uVar30,0x17,ppuVar34 + 0x10);
          iVar28 = FUN_1801ff058(local_38,2,uVar30,0x50,ppuVar34 + 0x11);
          iVar29 = FUN_1801ff058(local_38,2,uVar30,0x51,ppuVar34 + 0x12);
          if (iVar29 != 0 ||
              (((((((((((((((((((iVar9 != 0 || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
                            iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0) || iVar19 != 0)
                      || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) || iVar24 != 0) || iVar25 != 0) ||
                iVar26 != 0) || iVar27 != 0) || iVar28 != 0)) {
            __acrt_locale_free_monetary(ppuVar34);
            FUN_1801f42e0(ppuVar34);
            FUN_1801f42e0(ppuVar31);
            FUN_1801f42e0(puVar32);
            return 1;
          }
          pbVar33 = ppuVar34[7];
          bVar3 = *pbVar33;
          while (bVar3 != 0) {
            if ((byte)(bVar3 - 0x30) < 10) {
              *pbVar33 = bVar3 - 0x30;
LAB_1801ffd14:
              pbVar33 = pbVar33 + 1;
            }
            else {
              pbVar35 = pbVar33;
              if (bVar3 != 0x3b) goto LAB_1801ffd14;
              do {
                pbVar1 = pbVar35 + 1;
                *pbVar35 = *pbVar1;
                pbVar35 = pbVar35 + 1;
              } while (*pbVar1 != 0);
            }
            bVar3 = *pbVar33;
          }
        }
        plVar2 = (longlong *)(param_1 + 0xf8);
        *ppuVar34 = *(undefined **)*plVar2;
        ppuVar34[1] = *(undefined **)(*plVar2 + 8);
        ppuVar34[2] = *(undefined **)(*plVar2 + 0x10);
        ppuVar34[0xb] = *(undefined **)(*plVar2 + 0x58);
        ppuVar34[0xc] = *(undefined **)(*plVar2 + 0x60);
        *(undefined4 *)ppuVar31 = 1;
        if (puVar32 != (undefined4 *)0x0) {
          *puVar32 = 1;
        }
        goto LAB_1801ffdf3;
      }
LAB_1801ff9e4:
      FUN_1801f42e0(ppuVar34);
    }
    uVar30 = 1;
  }
  return uVar30;
}



void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1802a0500) {
      FUN_1801f42e0();
    }
    if ((undefined *)param_1[1] != PTR_DAT_1802a0508) {
      FUN_1801f42e0();
    }
    if ((undefined *)param_1[2] != PTR_DAT_1802a0510) {
      FUN_1801f42e0();
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1802a0558) {
      FUN_1801f42e0();
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_1802a0560) {
      FUN_1801f42e0();
    }
  }
  return;
}



undefined8 FUN_1801ffecc(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  undefined **ppuVar17;
  byte *pbVar18;
  undefined8 uVar19;
  longlong local_38 [2];

  ppuVar15 = (undefined **)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x148) == 0) && (*(longlong *)(param_1 + 0x140) == 0)) {
    ppuVar17 = &PTR_DAT_1802a0500;
    ppuVar14 = ppuVar15;
LAB_180200145:
    piVar4 = *(int **)(param_1 + 0xe8);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
    }
    piVar4 = *(int **)(param_1 + 0xe0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      iVar9 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FUN_1801f42e0(*(undefined8 *)(param_1 + 0xe0));
        FUN_1801f42e0(*(undefined8 *)(param_1 + 0xf8));
      }
    }
    *(undefined ***)(param_1 + 0xe8) = ppuVar15;
    *(undefined ***)(param_1 + 0xe0) = ppuVar14;
    *(undefined8 *)(param_1 + 0xf8) = ppuVar17;
    return 0;
  }
  uVar19 = 1;
  ppuVar17 = (undefined **)_calloc_base(1,0x98);
  if (ppuVar17 == (undefined **)0x0) {
    return 1;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xf8);
  puVar8 = (undefined *)puVar3[1];
  *ppuVar17 = (undefined *)*puVar3;
  ppuVar17[1] = puVar8;
  puVar8 = (undefined *)puVar3[3];
  ppuVar17[2] = (undefined *)puVar3[2];
  ppuVar17[3] = puVar8;
  puVar8 = (undefined *)puVar3[5];
  ppuVar17[4] = (undefined *)puVar3[4];
  ppuVar17[5] = puVar8;
  puVar8 = (undefined *)puVar3[7];
  ppuVar17[6] = (undefined *)puVar3[6];
  ppuVar17[7] = puVar8;
  puVar8 = (undefined *)puVar3[9];
  ppuVar17[8] = (undefined *)puVar3[8];
  ppuVar17[9] = puVar8;
  puVar8 = (undefined *)puVar3[0xb];
  ppuVar17[10] = (undefined *)puVar3[10];
  ppuVar17[0xb] = puVar8;
  puVar8 = (undefined *)puVar3[0xd];
  ppuVar17[0xc] = (undefined *)puVar3[0xc];
  ppuVar17[0xd] = puVar8;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0x74);
  uVar6 = *(undefined4 *)(puVar3 + 0xf);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x7c);
  *(undefined4 *)(ppuVar17 + 0xe) = *(undefined4 *)(puVar3 + 0xe);
  *(undefined4 *)((longlong)ppuVar17 + 0x74) = uVar5;
  *(undefined4 *)(ppuVar17 + 0xf) = uVar6;
  *(undefined4 *)((longlong)ppuVar17 + 0x7c) = uVar7;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0x84);
  uVar6 = *(undefined4 *)(puVar3 + 0x11);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x8c);
  *(undefined4 *)(ppuVar17 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
  *(undefined4 *)((longlong)ppuVar17 + 0x84) = uVar5;
  *(undefined4 *)(ppuVar17 + 0x11) = uVar6;
  *(undefined4 *)((longlong)ppuVar17 + 0x8c) = uVar7;
  ppuVar17[0x12] = (undefined *)puVar3[0x12];
  ppuVar14 = (undefined **)_malloc_base(4);
  FUN_1801f42e0(0);
  if (ppuVar14 != (undefined **)0x0) {
    *(undefined4 *)ppuVar14 = 0;
    if (*(longlong *)(param_1 + 0x148) == 0) {
      *ppuVar17 = PTR_DAT_1802a0500;
      ppuVar17[1] = PTR_DAT_1802a0508;
      ppuVar17[2] = PTR_DAT_1802a0510;
      ppuVar17[0xb] = PTR_DAT_1802a0558;
      ppuVar17[0xc] = PTR_DAT_1802a0560;
      *(undefined4 *)ppuVar14 = 1;
      goto LAB_180200145;
    }
    ppuVar15 = (undefined **)_malloc_base(4);
    FUN_1801f42e0(0);
    if (ppuVar15 == (undefined **)0x0) {
      FUN_1801f42e0(ppuVar17);
      ppuVar17 = ppuVar14;
    }
    else {
      *(undefined4 *)ppuVar15 = 0;
      uVar19 = *(undefined8 *)(param_1 + 0x148);
      iVar9 = FUN_1801ff058(local_38,1,uVar19,0xe,ppuVar17);
      iVar10 = FUN_1801ff058(local_38,1,uVar19,0xf,ppuVar17 + 1);
      iVar11 = FUN_1801ff058(local_38,1,uVar19,0x10,ppuVar17 + 2);
      iVar12 = FUN_1801ff058(local_38,2,uVar19,0xe,ppuVar17 + 0xb);
      iVar13 = FUN_1801ff058(local_38,2,uVar19,0xf,ppuVar17 + 0xc);
      if (iVar13 == 0 && (((iVar9 == 0 && iVar10 == 0) && iVar11 == 0) && iVar12 == 0)) {
        pbVar16 = ppuVar17[2];
        while (bVar2 = *pbVar16, bVar2 != 0) {
          if ((byte)(bVar2 - 0x30) < 10) {
            *pbVar16 = bVar2 - 0x30;
LAB_1802000df:
            pbVar16 = pbVar16 + 1;
          }
          else {
            pbVar18 = pbVar16;
            if (bVar2 != 0x3b) goto LAB_1802000df;
            do {
              pbVar1 = pbVar18 + 1;
              *pbVar18 = *pbVar1;
              pbVar18 = pbVar18 + 1;
            } while (*pbVar1 != 0);
          }
        }
        *(undefined4 *)ppuVar14 = 1;
        *(undefined4 *)ppuVar15 = 1;
        goto LAB_180200145;
      }
      __acrt_locale_free_numeric(ppuVar17);
      FUN_1801f42e0(ppuVar17);
      FUN_1801f42e0(ppuVar15);
      uVar19 = 0xffffffff;
      ppuVar17 = ppuVar14;
    }
  }
  FUN_1801f42e0(ppuVar17);
  return uVar19;
}


