#include "../include/aerialclient_types.h"


void FUN_1802001b4(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_1801f42e0(*param_1);
  }
  return;
}



bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  __crt_lc_time_data *p_Var18;
  longlong lVar19;
  int iVar20;
  __crt_locale_data *local_38;
  undefined8 local_30;

  uVar1 = *(undefined8 *)(param_2 + 0x150);
  uVar17 = 0;
  local_30 = 0;
  local_38 = param_2;
  uVar16 = FUN_1801f2cd4(uVar1);
  *(undefined8 *)(param_1 + 0x2b8) = uVar16;
  iVar20 = 0x31;
  lVar19 = 7;
  do {
    p_Var18 = param_1 + (ulonglong)((iVar20 - 0x30U) % 7) * 8;
    uVar2 = FUN_1801ff058(&local_38,1,uVar1,iVar20,p_Var18);
    uVar3 = FUN_1801ff058(&local_38,1,uVar1,iVar20 + -7,p_Var18 + 0x38);
    uVar4 = FUN_1801ff058(&local_38,2,uVar1,iVar20,p_Var18 + 0x160);
    uVar5 = FUN_1801ff058(&local_38,2,uVar1,iVar20 + -7,p_Var18 + 0x198);
    uVar17 = uVar17 | uVar2 | uVar3 | uVar4 | uVar5;
    iVar20 = iVar20 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  iVar20 = 0x38;
  lVar19 = 0xc;
  p_Var18 = param_1 + 0xd0;
  do {
    uVar2 = FUN_1801ff058(&local_38,1,uVar1,iVar20 + 0xc,p_Var18 + -0x60);
    uVar3 = FUN_1801ff058(&local_38,1,uVar1,iVar20,p_Var18);
    uVar4 = FUN_1801ff058(&local_38,2,uVar1,iVar20 + 0xc,p_Var18 + 0x100);
    uVar5 = FUN_1801ff058(&local_38,2,uVar1,iVar20,p_Var18 + 0x160);
    uVar17 = uVar17 | uVar2 | uVar3 | uVar4 | uVar5;
    p_Var18 = p_Var18 + 8;
    iVar20 = iVar20 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  iVar20 = FUN_1801ff058(&local_38,1,uVar1,0x28,param_1 + 0x130);
  iVar6 = FUN_1801ff058(&local_38,1,uVar1,0x29,param_1 + 0x138);
  iVar7 = FUN_1801ff058(&local_38,2,uVar1,0x28,param_1 + 0x290);
  iVar8 = FUN_1801ff058(&local_38,2,uVar1,0x29,param_1 + 0x298);
  iVar9 = FUN_1801ff058(&local_38,1,uVar1,0x1f,param_1 + 0x140);
  iVar10 = FUN_1801ff058(&local_38,1,uVar1,0x20,param_1 + 0x148);
  iVar11 = FUN_1801ff058(&local_38,1,uVar1,0x1003,param_1 + 0x150);
  iVar12 = FUN_1801ff058(&local_38,0,uVar1,0x1009,param_1 + 0x158);
  iVar13 = FUN_1801ff058(&local_38,2,uVar1,0x1f,param_1 + 0x2a0);
  iVar14 = FUN_1801ff058(&local_38,2,uVar1,0x20,param_1 + 0x2a8);
  iVar15 = FUN_1801ff058(&local_38,2,uVar1,0x1003,param_1 + 0x2b0);
  return iVar15 == 0 &&
         ((((((((((uVar17 == 0 && iVar20 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) &&
             iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) && iVar14 == 0);
}



void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1802001b4(param_1,7);
    FUN_1802001b4(param_1 + 0x38,7);
    FUN_1802001b4(param_1 + 0x70,0xc);
    FUN_1802001b4(param_1 + 0xd0,0xc);
    FUN_1802001b4(param_1 + 0x130,2);
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x140));
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x148));
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x150));
    FUN_1802001b4(param_1 + 0x160,7);
    FUN_1802001b4(param_1 + 0x198,7);
    FUN_1802001b4(param_1 + 0x1d0,0xc);
    FUN_1802001b4(param_1 + 0x230,0xc);
    FUN_1802001b4(param_1 + 0x290,2);
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x2a0));
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x2a8));
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x2b0));
    FUN_1801f42e0(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}



undefined8 __acrt_locale_initialize_time(__crt_locale_data *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  __crt_lc_time_data *p_Var4;

  if (*(longlong *)(param_1 + 0x150) == 0) {
    ppuVar3 = &PTR_DAT_180248900;
LAB_1802006a7:
    __acrt_locale_release_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
    uVar2 = 0;
    *(undefined ***)(param_1 + 0x120) = ppuVar3;
  }
  else {
    ppuVar3 = (undefined **)_calloc_base(1,0x2c0);
    p_Var4 = (__crt_lc_time_data *)0x0;
    if ((__crt_lc_time_data *)ppuVar3 != (__crt_lc_time_data *)0x0) {
      bVar1 = initialize_lc_time((__crt_lc_time_data *)ppuVar3,param_1);
      if (bVar1) {
        *(undefined4 *)((longlong)ppuVar3 + 0x15c) = 1;
        FUN_1801f42e0(0);
        goto LAB_1802006a7;
      }
      __acrt_locale_free_time(ppuVar3);
      p_Var4 = (__crt_lc_time_data *)ppuVar3;
    }
    FUN_1801f42e0(p_Var4);
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 FUN_1802006d0(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;

  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          param_3 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(param_3 + (longlong)psVar3);
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
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 0x16;
  FUN_1801e1344();
  return 0x16;
}



undefined8 FUN_180200760(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;

  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1802007ab;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1802007ab;
  if (param_2 != 0) {
    psVar3 = param_1;
    lVar4 = param_2;
    if ((param_4 == 0) || (param_3 != (short *)0x0)) {
      do {
        if (*psVar3 == 0) {
          lVar5 = param_4;
          if (param_4 != -1) goto joined_r0x00018020081c;
          lVar5 = (longlong)param_3 - (longlong)psVar3;
          goto LAB_180200800;
        }
        lVar4 = lVar4 + -1;
        psVar3 = psVar3 + 1;
      } while (lVar4 != 0);
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
LAB_1802007ab:
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 0x16;
  FUN_1801e1344();
  return 0x16;
joined_r0x00018020081c:
  if (lVar5 == 0) goto LAB_180200844;
  sVar1 = *param_3;
  param_3 = param_3 + 1;
  *psVar3 = sVar1;
  psVar3 = psVar3 + 1;
  if (sVar1 == 0) {
    return 0;
  }
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) goto LAB_180200844;
  lVar5 = lVar5 + -1;
  goto joined_r0x00018020081c;
LAB_180200844:
  if (lVar5 == 0) {
    *psVar3 = 0;
  }
  goto LAB_18020084d;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
LAB_180200800:
    sVar1 = *(short *)(lVar5 + (longlong)psVar3);
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) break;
  }
LAB_18020084d:
  if (lVar4 != 0) {
    return 0;
  }
  if (param_4 != -1) {
    *param_1 = 0;
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x22;
    FUN_1801e1344();
    return 0x22;
  }
  param_1[param_2 + -1] = 0;
  return 0x50;
}



undefined4 FUN_1802008a0(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;

  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_180200903;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_180200903;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      psVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *psVar4 = 0;
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = 0;
        puVar2 = (undefined4 *)FUN_1801e6ae4();
        *puVar2 = 0x22;
        FUN_1801e1344();
        return 0x22;
      }
      param_1[param_2 + -1] = 0;
      return 0x50;
    }
    *param_1 = 0;
  }
LAB_180200903:
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 0x16;
  FUN_1801e1344();
  return 0x16;
}



longlong FUN_1802009f0(short *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;

  sVar1 = *param_1;
  psVar3 = param_1;
  while ((sVar1 != 0 && (lVar2 = FUN_1802074fc(param_2,sVar1), lVar2 == 0))) {
    sVar1 = psVar3[1];
    psVar3 = psVar3 + 1;
  }
  return (longlong)psVar3 - (longlong)param_1 >> 1;
}



short * FUN_180200a50(short *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;

  sVar1 = *param_1;
  while( true ) {
    if (sVar1 == 0) {
      return (short *)0x0;
    }
    lVar2 = FUN_1802074fc(param_2,sVar1);
    if (lVar2 != 0) break;
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}



void FUN_180200aa8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStackY_f8 [32];
  short local_c8 [88];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStackY_f8;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x104;
  iVar1 = FUN_1801f6160(local_c8,0x55);
  if (1 < iVar1) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (local_c8[lVar2] != 0);
    iVar1 = FUN_1802008a0();
    if (iVar1 != 0) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
}



void GetLocaleNameFromLangCountry(undefined8 *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  longlong lVar7;

  psVar5 = (short *)*param_1;
  lVar7 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (psVar5[lVar4] != 0);
  iVar6 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVar4 == 3);
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(param_1[1] + lVar7 * 2) != 0);
  *(uint *)((longlong)param_1 + 0x1c) = (uint)(lVar7 == 3);
  if (lVar4 == 3) {
    iVar6 = 2;
  }
  else {
    iVar3 = 0;
    if (psVar5 != (short *)0x0) {
      while( true ) {
        iVar6 = iVar3;
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar3 = iVar6 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6;
  FUN_1801f5e7c(FUN_180200cb8,3,0);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



void GetLocaleNameFromLanguage(undefined8 *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  longlong lVar5;

  psVar3 = (short *)*param_1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (psVar3[lVar5] != 0);
  iVar4 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVar5 == 3);
  if (lVar5 == 3) {
    iVar4 = 2;
  }
  else {
    iVar2 = 0;
    if (psVar3 != (short *)0x0) {
      while( true ) {
        iVar4 = iVar2;
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar2 = iVar4 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  FUN_1801f5e7c(FUN_180200fac,3,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



void FUN_180200cb8(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStackY_c8;
  lVar5 = FUN_1801f2834();
  plVar1 = (longlong *)(lVar5 + 0x98);
  iVar4 = FUN_1801f6014(param_1,(-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,local_98,0x40);
  iVar8 = 0;
  if (iVar4 == 0) goto LAB_180200d1e;
  iVar4 = FUN_1801fb930(*(undefined8 *)(lVar5 + 0xa0),local_98);
  lVar7 = -1;
  if (iVar4 != 0) goto LAB_180200e12;
  iVar4 = FUN_1801f6014(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_98,0x40);
  if (iVar4 == 0) goto LAB_180200d1e;
  iVar4 = FUN_1801fb930(*plVar1,local_98);
  if (iVar4 == 0) {
    lVar9 = -1;
    *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x304;
    do {
      lVar9 = lVar9 + 1;
    } while (*(short *)(param_1 + lVar9 * 2) != 0);
LAB_180200df3:
    iVar4 = FUN_1802008a0();
    if (iVar4 != 0) goto LAB_180200f95;
  }
  else if ((*(uint *)(lVar5 + 0xa8) & 2) == 0) {
    if ((*(int *)(lVar5 + 0xac) == 0) ||
       (iVar4 = FUN_180204050(*plVar1,local_98,(longlong)*(int *)(lVar5 + 0xac)), iVar4 != 0)) {
      if (((*(byte *)(lVar5 + 0xa8) & 1) != 0) || (iVar4 = FUN_180201158(param_1), iVar4 == 0)) goto LAB_180200e12;
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 1;
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(param_1 + lVar9 * 2) != 0);
    }
    else {
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 2;
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(param_1 + lVar9 * 2) != 0);
    }
    goto LAB_180200df3;
  }
LAB_180200e12:
  if ((*(uint *)(lVar5 + 0xa8) & 0x300) == 0x300) {
  }
  iVar4 = FUN_1801f6014(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_98,0x40);
  if (iVar4 == 0) {
LAB_180200d1e:
    *(undefined4 *)(lVar5 + 0xa8) = 0;
  }
  iVar4 = FUN_1801fb930(*plVar1,local_98);
  if (iVar4 != 0) {
  }
  uVar3 = *(uint *)(lVar5 + 0xa8);
  *(uint *)(lVar5 + 0xa8) = uVar3 | 0x200;
  if (*(int *)(lVar5 + 0xb0) == 0) {
    if (*(int *)(lVar5 + 0xac) != 0) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(*plVar1 + lVar9 * 2) != 0);
      if ((int)lVar9 == *(int *)(lVar5 + 0xac)) {
        iVar4 = FUN_180201158(param_1);
        if (iVar4 == 0) {
          psVar6 = (short *)*plVar1;
          iVar4 = 0;
          if (psVar6 != (short *)0x0) {
            while( true ) {
              iVar8 = iVar4;
              sVar2 = *psVar6;
              psVar6 = psVar6 + 1;
              if ((0x19 < (ushort)(sVar2 - 0x41U)) && (0x19 < (ushort)(sVar2 - 0x61U))) break;
              iVar4 = iVar8 + 1;
            }
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(short *)(*plVar1 + lVar9 * 2) != 0);
          if (iVar8 == (int)lVar9) {
          }
        }
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x100;
        if (*(short *)(lVar5 + 0x2f0) != 0) {
        }
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)(param_1 + lVar7 * 2) != 0);
        goto LAB_180200f2a;
      }
    }
    *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
    if (*(short *)(lVar5 + 0x2f0) != 0) {
    }
    do {
      lVar7 = lVar7 + 1;
    } while (*(short *)(param_1 + lVar7 * 2) != 0);
  }
  else {
    *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
    if (*(short *)(lVar5 + 0x2f0) != 0) {
    }
    do {
      lVar7 = lVar7 + 1;
    } while (*(short *)(param_1 + lVar7 * 2) != 0);
  }
LAB_180200f2a:
  iVar4 = FUN_1802008a0();
  if (iVar4 == 0) {
  }
LAB_180200f95:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_180200fac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [240];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStackY_138;
  lVar2 = FUN_1801f2834();
  iVar1 = FUN_1801f6014(param_1,(-(uint)(*(int *)(lVar2 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_108);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  else {
    iVar1 = FUN_1801fb930(*(undefined8 *)(lVar2 + 0x98),local_108);
    if (iVar1 == 0) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(short *)(param_1 + lVar3 * 2) != 0);
      iVar1 = FUN_1802008a0();
      if (iVar1 != 0) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | 4;
    }
  }
}



ulonglong FUN_180201098(short *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];

  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) || (iVar1 = FUN_180205de0(param_1,&DAT_18024b8a8), iVar1 == 0)) {
    uVar3 = 0x20001004;
  }
  else {
    iVar1 = FUN_1801fb930(param_1,L"utf8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_1801fb930(param_1,L"utf-8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_180205de0(param_1,&DAT_18024b8c0);
    if (iVar1 != 0) {
      uVar2 = FUN_1801f22d0(param_1);
      return uVar2;
    }
    uVar3 = 0x2000000b;
  }
  uVar2 = FUN_1801f6014(param_2 + 600,uVar3,local_res8,2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return (ulonglong)local_res8[0];
}



void FUN_180201158(wchar_t *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1801f6014(param_1,0x59,local_28);
  if (iVar1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
}



bool TranslateName(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar2 = 1;
  iVar1 = 1;
  if (-1 < param_2) {
    do {
      if (iVar1 == 0) {
        return true;
      }
      iVar1 = (iVar3 + param_2) / 2;
      iVar2 = FUN_1801fb930(*param_3,*(undefined8 *)((longlong)iVar1 * 0x10 + param_1));
      if (iVar2 == 0) {
        *param_3 = param_1 + 8 + (longlong)iVar1 * 0x10;
      }
      else if (iVar2 < 0) {
        param_2 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
      iVar1 = iVar2;
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}



undefined8 FUN_180201260(short *param_1,uint *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  int iVar4;
  uint _Val;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;

  lVar6 = FUN_1801f2834();
  puVar1 = (undefined8 *)(lVar6 + 0x98);
  *(undefined4 *)(lVar6 + 0xa8) = 0;
  *puVar1 = param_1;
  plVar2 = (longlong *)(lVar6 + 0xa0);
  *(undefined2 *)(lVar6 + 0x2f0) = 0;
  *plVar2 = (longlong)(param_1 + 0x40);
  if (param_1[0x40] != 0) {
    TranslateName(&PTR_u_america_18024ad10,0x16,plVar2);
  }
  if (*(short *)*puVar1 == 0) {
    FUN_180200aa8(puVar1);
LAB_180201338:
    if (*(int *)(lVar6 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (*(short *)*plVar2 == 0) {
      GetLocaleNameFromLanguage();
    }
    else {
      GetLocaleNameFromLangCountry();
    }
    if (*(int *)(lVar6 + 0xa8) == 0) {
      iVar4 = TranslateName(&PTR_u_american_18024a8f0,0x40,puVar1);
      if (iVar4 != 0) {
        if (*(short *)*plVar2 == 0) {
          GetLocaleNameFromLanguage(puVar1);
        }
        else {
          GetLocaleNameFromLangCountry();
        }
      }
      goto LAB_180201338;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    _Val = FUN_180201098(-(ulonglong)(param_1 != (short *)0x0) & (ulonglong)(param_1 + 0x80),puVar1);
  }
  else {
    _Val = GetACP();
  }
  if (((_Val != 0) && (_Val != 65000)) && (BVar5 = IsValidCodePage(_Val & 0xffff), BVar5 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == 0) {
      return 1;
    }
    puVar3 = (undefined2 *)(param_3 + 0x120);
    lVar7 = -1;
    *puVar3 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (((undefined2 *)(lVar6 + 0x2f0))[lVar7] != 0);
    iVar4 = FUN_1802008a0();
    if (iVar4 != 0) {
LAB_1802014c4:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar4 = FUN_1801f6014(puVar3,0x1001,param_3,0x40);
    if (iVar4 != 0) {
      lVar6 = param_3 + 0x80;
      iVar4 = FUN_1801f6014(puVar3,0x1002,lVar6,0x40);
      if ((iVar4 != 0) &&
         (((lVar7 = FUN_1802074fc(lVar6,0x5f), lVar7 == 0 && (lVar7 = FUN_1802074fc(lVar6,0x2e), lVar7 == 0)) ||
          (iVar4 = FUN_1801f6014(puVar3,7,lVar6,0x40), iVar4 != 0)))) {
        if (_Val != 0xfde9) {
          FID_conflict__ltow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
          return 1;
        }
        iVar4 = FUN_1802008a0();
        if (iVar4 == 0) {
          return 1;
        }
        goto LAB_1802014c4;
      }
    }
  }
  return 0;
}



void FUN_1802014dc(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  lVar3 = FUN_1801f2834();
  lVar4 = FUN_1801f2834();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_180201a78(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb4) != 0) & 0xfffff005) + 0x1002,local_108,0x78);
  uVar6 = 0;
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  else {
    iVar2 = FUN_1801fb930(*(undefined8 *)(lVar3 + 0xa0),local_108);
    if (iVar2 == 0) {
      psVar5 = &DAT_18024b8c8;
      do {
        if ((short)Locale == *psVar5) {
        }
        uVar6 = uVar6 + 1;
        psVar5 = psVar5 + 1;
      } while (uVar6 < 10);
      *puVar1 = *puVar1 | 4;
      puVar1[2] = Locale;
      puVar1[1] = Locale;
    }
  }
}



void GetLcidFromLangCountry(uint *param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;

  lVar3 = FUN_1801f2834();
  lVar6 = -1;
  lVar7 = -1;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0x98) + lVar7 * 2) != 0);
  *(uint *)(lVar3 + 0xb0) = (uint)(lVar7 == 3);
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 2) != 0);
  *(uint *)(lVar3 + 0xb4) = (uint)(lVar6 == 3);
  param_1[1] = 0;
  iVar5 = 2;
  if (*(int *)(lVar3 + 0xb0) == 0) {
    psVar4 = *(short **)(lVar3 + 0x98);
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar5 = iVar8, 0x19 < (ushort)(sVar1 - 0x61U))) break;
      iVar8 = iVar8 + 1;
    }
  }
  *(int *)(lVar3 + 0xac) = iVar5;
  EnumSystemLocalesW(FUN_18020172c,1);
  uVar2 = *param_1;
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}



void GetLcidFromLanguage(byte *param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;

  lVar2 = FUN_1801f2834();
  lVar5 = -1;
  iVar6 = 0;
  psVar4 = *(short **)(lVar2 + 0x98);
  do {
    lVar5 = lVar5 + 1;
  } while (psVar4[lVar5] != 0);
  *(uint *)(lVar2 + 0xb0) = (uint)(lVar5 == 3);
  iVar3 = 2;
  if (lVar5 != 3) {
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar3 = iVar6, 0x19 < (ushort)(sVar1 - 0x61U))) break;
      iVar6 = iVar6 + 1;
    }
  }
  *(int *)(lVar2 + 0xac) = iVar3;
  EnumSystemLocalesW(FUN_180201970,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



void FUN_18020172c(undefined8 param_1)

{
  longlong *plVar1;
  uint *puVar2;
  LCID Locale;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_138 [32];
  WCHAR local_118 [120];
  ulonglong local_28;

  local_28 = DAT_1802a0400 ^ (ulonglong)auStack_138;
  lVar4 = FUN_1801f2834();
  plVar1 = (longlong *)(lVar4 + 0x98);
  lVar5 = FUN_1801f2834();
  puVar2 = *(uint **)(lVar5 + 0x3a0);
  Locale = FUN_180201a78(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb4) != 0) & 0xfffff005) + 0x1002,local_118,0x78);
  if (iVar3 == 0) goto LAB_18020193f;
  iVar3 = FUN_1801fb930(*(undefined8 *)(lVar4 + 0xa0),local_118);
  lVar5 = -1;
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_118,0x78);
    if (iVar3 == 0) goto LAB_18020193f;
    iVar3 = FUN_1801fb930(*plVar1,local_118);
    if (iVar3 == 0) {
      puVar2[1] = Locale;
      *puVar2 = *puVar2 | 0x304;
LAB_180201871:
      puVar2[2] = Locale;
    }
    else if ((*puVar2 & 2) == 0) {
      if ((*(int *)(lVar4 + 0xac) == 0) ||
         (iVar3 = FUN_180204050(*plVar1,local_118,(longlong)*(int *)(lVar4 + 0xac)), iVar3 != 0)) {
        if ((*puVar2 & 1) == 0) {
          uVar8 = 0;
          psVar7 = &DAT_18024b8c8;
          do {
            if ((short)Locale == *psVar7) goto LAB_180201874;
            uVar8 = uVar8 + 1;
            psVar7 = psVar7 + 1;
          } while (uVar8 < 10);
          *puVar2 = *puVar2 | 1;
          goto LAB_180201871;
        }
      }
      else {
        *puVar2 = *puVar2 | 2;
        lVar6 = -1;
        puVar2[2] = Locale;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)(*plVar1 + lVar6 * 2) != 0);
        if ((int)lVar6 == *(int *)(lVar4 + 0xac)) {
          puVar2[1] = Locale;
        }
      }
    }
  }
LAB_180201874:
  if ((*puVar2 & 0x300) == 0x300) {
  }
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_118,0x78);
  if (iVar3 == 0) {
LAB_18020193f:
    *puVar2 = 0;
  }
  iVar3 = FUN_1801fb930(*plVar1,local_118);
  if (iVar3 == 0) {
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 0x200;
    if ((*(int *)(lVar4 + 0xb0) == 0) && (*(int *)(lVar4 + 0xac) != 0)) {
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar1 + lVar5 * 2) != 0);
      if ((int)lVar5 == *(int *)(lVar4 + 0xac)) {
        uVar9 = 1;
        goto LAB_180201918;
      }
    }
    *puVar2 = uVar8 | 0x300;
  }
  else {
    if (*(int *)(lVar4 + 0xb0) != 0) {
    }
    if (*(int *)(lVar4 + 0xac) == 0) {
    }
    iVar3 = FUN_1801fb930(*plVar1,local_118);
    if (iVar3 != 0) {
    }
    uVar9 = 0;
LAB_180201918:
    iVar3 = FUN_180201b7c(Locale,uVar9,puVar2);
    if (iVar3 == 0) {
    }
    *puVar2 = *puVar2 | 0x100;
  }
  if (puVar2[1] != 0) {
  }
  puVar2[1] = Locale;
}



void FUN_180201970(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  lVar3 = FUN_1801f2834();
  lVar4 = FUN_1801f2834();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_180201a78(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_108,0x78);
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  iVar2 = FUN_1801fb930(*(undefined8 *)(lVar3 + 0x98),local_108);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xb0) != 0) goto LAB_180201a40;
    uVar5 = 1;
  }
  else {
    if (*(int *)(lVar3 + 0xb0) != 0) {
    }
    if (*(int *)(lVar3 + 0xac) == 0) {
    }
    iVar2 = FUN_1801fb930(*(undefined8 *)(lVar3 + 0x98),local_108);
    if (iVar2 != 0) {
    }
    uVar5 = 0;
  }
  iVar2 = FUN_180201b7c(Locale,uVar5,puVar1);
  if (iVar2 == 0) {
  }
LAB_180201a40:
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
}



int FUN_180201a78(ushort *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;

  uVar3 = *param_1;
  iVar4 = 0;
  do {
    param_1 = param_1 + 1;
    if (uVar3 == 0) {
      return iVar4;
    }
    if ((ushort)(uVar3 - 0x61) < 6) {
      sVar1 = -0x27;
LAB_180201aa5:
      uVar2 = uVar3 + sVar1;
    }
    else {
      uVar2 = uVar3;
      if ((ushort)(uVar3 - 0x41) < 6) {
        sVar1 = -7;
        goto LAB_180201aa5;
      }
    }
    uVar3 = *param_1;
    iVar4 = iVar4 * 0x10 + -0x30 + (uint)uVar2;
  } while( true );
}



UINT FUN_180201ac8(short *param_1,longlong param_2)

{
  int iVar1;
  UINT UVar2;
  UINT local_res8 [2];

  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) || (iVar1 = FUN_180205de0(param_1,&DAT_18024b8a8), iVar1 == 0)) {
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      UVar2 = GetACP();
      return UVar2;
    }
  }
  else {
    iVar1 = FUN_180205de0(param_1,&DAT_18024b8c0);
    if (iVar1 != 0) {
      UVar2 = FUN_1801f22d0(param_1);
      return UVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0;
}



bool FUN_180201b7c(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  bool bVar7;
  uint local_res8 [2];

  iVar6 = 0;
  local_res8[0] = 0;
  lVar4 = FUN_1801f2834();
  iVar3 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
  if (iVar3 == 0) {
    bVar7 = false;
  }
  else if ((param_1 == local_res8[0]) || (param_2 == 0)) {
    bVar7 = true;
  }
  else {
    psVar2 = *(short **)(lVar4 + 0x98);
    sVar1 = *psVar2;
    psVar5 = psVar2;
    while ((psVar5 = psVar5 + 1, (ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a))) {
      iVar6 = iVar6 + 1;
      sVar1 = *psVar5;
    }
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    bVar7 = iVar6 != (int)lVar4;
  }
  return bVar7;
}



ulonglong FUN_180201c38(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  int iVar4;

  iVar4 = 0;
  if (-1 < param_2) {
    do {
      iVar2 = (iVar4 + param_2) / 2;
      in_RAX = FUN_1801fb930(*param_3,*(undefined8 *)((longlong)iVar2 * 0x10 + param_1));
      if ((int)in_RAX == 0) {
        lVar3 = param_1 + 8 + (longlong)iVar2 * 0x10;
        *param_3 = lVar3;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      iVar1 = iVar2 + -1;
      if (-1 < (int)in_RAX) {
        iVar4 = iVar2 + 1;
        iVar1 = param_2;
      }
      param_2 = iVar1;
    } while (iVar4 <= param_2);
  }
  return in_RAX & 0xffffffffffffff00;
}



void FUN_180201cc0(longlong param_1,uint *param_2,LPWSTR param_3)

{
  longlong *plVar1;
  short *psVar2;
  ulonglong uVar3;
  char cVar4;
  uint _Val;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  LCID local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_78;
  lVar7 = FUN_1801f2834();
  local_58 = 0;
  local_50 = 0;
  lVar8 = FUN_1801f2834();
  plVar1 = (longlong *)(lVar7 + 0xa0);
  *(undefined8 **)(lVar8 + 0x3a0) = &local_58;
  psVar2 = (short *)(param_1 + 0x80);
  *(longlong *)(lVar7 + 0x98) = param_1;
  *plVar1 = (longlong)psVar2;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    FUN_180201c38(&PTR_u_america_18024ad10,0x16,plVar1);
  }
  uVar3 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(lVar7 + 0x98) == (short *)0x0) || (**(short **)(lVar7 + 0x98) == 0)) {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      local_58 = CONCAT44((int)uVar3,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(int)local_58);
    }
    else {
      lVar8 = FUN_1801f2834();
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(*(longlong *)(lVar8 + 0xa0) + lVar9 * 2) != 0);
      *(uint *)(lVar8 + 0xb4) = (uint)(lVar9 == 3);
      EnumSystemLocalesW(FUN_1802014dc,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
  }
  else {
    if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
      GetLcidFromLanguage(&local_58);
    }
    else {
      GetLcidFromLangCountry(&local_58);
    }
    if ((int)local_58 != 0) goto LAB_180201e48;
    cVar4 = FUN_180201c38(&PTR_u_american_18024a8f0,0x40,lVar7 + 0x98);
    if (cVar4 != '\0') {
      if (((short *)*plVar1 == (short *)0x0) || (*(short *)*plVar1 == 0)) {
        GetLcidFromLanguage(&local_58);
      }
      else {
        GetLcidFromLangCountry(&local_58);
      }
    }
  }
  if ((int)local_58 == 0) {
  }
LAB_180201e48:
  _Val = FUN_180201ac8(-(ulonglong)(param_1 != 0) & param_1 + 0x100U,&local_58);
  if ((_Val != 0) && (BVar5 = IsValidCodePage(_Val & 0xffff), BVar5 != 0)) {
    BVar5 = IsValidLocale(local_58._4_4_,1);
    if (BVar5 != 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = _Val;
      }
      FUN_1801f6240(local_58._4_4_,lVar7 + 0x2f0,0x55);
      if (param_3 != (LPWSTR)0x0) {
        FUN_1801f6240(local_58._4_4_,param_3 + 0x90,0x55,0);
        iVar6 = GetLocaleInfoW(local_58._4_4_,0x1001,param_3,0x40);
        if ((iVar6 != 0) && (iVar6 = GetLocaleInfoW(local_50,0x1002,param_3 + 0x40,0x40), iVar6 != 0)) {
          FID_conflict__ltow_s(_Val,param_3 + 0x80,0x10,10);
        }
      }
    }
  }
}



undefined4 FUN_180201f40(void)

{
  return DAT_1802aa320;
}



uint FUN_180201f50(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;

  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = DAT_1802aa320;
  }
  else {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x16;
    FUN_1801e1344();
    uVar1 = DAT_1802aa320;
    uVar2 = 0xffffffff;
  }
  DAT_1802aa320 = uVar1;
  return uVar2;
}



byte FUN_180201f7c(uint param_1)

{
  undefined4 *puVar1;

  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1802aa180)) {
      return *(byte *)((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 9;
    FUN_1801e1344();
  }
  return 0;
}



undefined8 * __acrt_lowio_create_handle_array(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar3;

  puVar2 = (undefined8 *)_calloc_base(0x40);
  puVar5 = (undefined8 *)0x0;
  if ((puVar2 != (undefined8 *)0x0) && (puVar5 = puVar2, puVar2 != puVar2 + 0x240)) {
    puVar6 = puVar2 + 6;
    do {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + -6),4000,0);
      puVar6[-1] = 0xffffffffffffffff;
      puVar4 = (undefined1 *)((longlong)puVar6 + 0xe);
      *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) & 0xf8;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0xa0a0000;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 10;
      puVar3 = (undefined8 *)0x0;
      do {
        *puVar4 = 0;
        uVar1 = (int)puVar3 + 1;
        puVar3 = (undefined8 *)(ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < 5);
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 9;
    } while (puVar3 != puVar2 + 0x240);
  }
  FUN_1801f42e0(0);
  return puVar5;
}



void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1; lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_1801f42e0(param_1);
  }
  return;
}



longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;

  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_1802aa180;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1802a9d80)[lVar5] == 0) {
        lVar4 = __acrt_lowio_create_handle_array();
        (&DAT_1802a9d80)[lVar5] = lVar4;
        if (lVar4 == 0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_1802aa180 + 0x40;
        DAT_1802aa180 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 9;
    FUN_1801e1344();
    lVar3 = 9;
  }
  return lVar3;
}



void __acrt_lowio_lock_fh(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}



undefined8 FUN_1802021a4(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD nStdHandle;

  if ((-1 < (int)param_1) && (param_1 < DAT_1802aa180)) {
    if (*(longlong *)
         ((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_180205e18();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180202225;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_180202225:
      *(HANDLE *)((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48)
           = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1801e6ac0();
  *puVar2 = 0;
  return 0xffffffff;
}



void __acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}



int __cdecl _alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;

  __acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_1802023a3:
      __acrt_unlock(7);
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_1802a9d80)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      lVar2 = __acrt_lowio_create_handle_array();
      (&DAT_1802a9d80)[iVar4] = lVar2;
      if (lVar2 != 0) {
        DAT_1802aa180 = DAT_1802aa180 + 0x40;
        uVar3 = iVar4 << 6;
        __acrt_lowio_lock_fh(uVar3);
        *(undefined1 *)((&DAT_1802a9d80)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_1802023a3;
    }
    for (lpCriticalSection = p_Var1; lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
          uVar3 = (int)(((longlong)lpCriticalSection - (longlong)p_Var1) / 0x48) + iVar4 * 0x40;
          *(undefined1 *)((&DAT_1802a9d80)[(longlong)(int)uVar3 >> 6] + 0x38 + (ulonglong)(uVar3 & 0x3f) * 0x48) = 1;
          *(undefined8 *)((&DAT_1802a9d80)[(longlong)(int)uVar3 >> 6] + 0x28 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_1802023a3;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



undefined8 FUN_1802023cc(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  DWORD nStdHandle;

  if ((-1 < (int)param_1) && (param_1 < DAT_1802aa180)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48) & 1) != 0) &&
       (*(longlong *)((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_180205e18();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_18020244c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_18020244c:
      *(undefined8 *)((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_1801e6ac0();
  *puVar3 = 0;
  return 0xffffffff;
}



undefined8 FUN_180202488(uint param_1)

{
  undefined4 *puVar1;

  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_1801e6ac0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1802aa180)) {
      if ((*(byte *)((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_1802a9d80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_1801e6ac0();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 9;
    FUN_1801e1344();
  }
  return 0xffffffffffffffff;
}



undefined2 FUN_180202500(undefined2 param_1)

{
  int iVar1;
  undefined2 local_res8 [4];
  undefined4 local_res10 [6];

  local_res8[0] = param_1;
  iVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (iVar1 != 0) {
    local_res10[0] = 0;
    iVar1 = __dcrt_write_console(local_res8,1,local_res10);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}



int FUN_180202540(uint param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (((((param_1 & 0xfffff3ff) != 0) || (param_1 == 0xc00)) && ((param_2 != 0 || (param_3 < 1)))) && (-1 < param_3)) {
    iVar4 = 0;
    iVar3 = 0xe3;
    do {
      iVar2 = (iVar3 + iVar4) / 2;
      if (param_1 == *(uint *)(&DAT_18024b8e0 + (longlong)iVar2 * 0x10)) {
        if (iVar2 < 0) {
          return 0;
        }
        iVar3 = FUN_1801e1700((&PTR_DAT_18024b8e8)[(longlong)iVar2 * 2],0x55);
        if (0 < param_3) {
          if (param_3 <= iVar3) {
            return 0;
          }
          iVar4 = FUN_1801fb810();
          if (iVar4 != 0) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return iVar3 + 1;
      }
      iVar1 = iVar2 + -1;
      if (-1 < (int)(param_1 - *(uint *)(&DAT_18024b8e0 + (longlong)iVar2 * 0x10))) {
        iVar1 = iVar3;
        iVar4 = iVar2 + 1;
      }
      iVar3 = iVar1;
    } while (iVar4 <= iVar3);
  }
  return 0;
}



undefined4 FUN_180202628(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_1 != 0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_180203fe0(param_1,(&PTR_DAT_18024d330)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_18024d338 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar5) {
          return 0;
        }
        return *(undefined4 *)(&DAT_18024b8e0 + (longlong)iVar5 * 0x10);
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}



bool FUN_1802026d0(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;

  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      pcVar2 = param_2;
      if (param_4 == 0) {
        return true;
      }
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == '0');
      if (*pcVar2 != '\0') {
        return true;
      }
      if (param_2 != param_1) {
        return (bool)(param_2[-1] & 1);
      }
    }
  }
  else if (iVar1 == 0x200) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 != 0x2d) {
      return true;
    }
  }
  else if (iVar1 == 0x100) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 == 0x2d) {
      return true;
    }
  }
  return false;
}



undefined4
FUN_1802027a0(char *param_1,ulonglong param_2,int param_3,longlong param_4,undefined8 param_5,undefined8 param_6,
             longlong param_7)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  longlong lVar7;

  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar3 = 0;
    if (0 < param_3) {
      iVar3 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar3 + 1)) {
      uVar5 = 0x22;
      goto LAB_1802027c4;
    }
    if (param_4 != 0) {
      pcVar4 = *(char **)(param_4 + 8);
      *param_1 = '0';
      pcVar6 = param_1;
      while( true ) {
        pcVar6 = pcVar6 + 1;
        if (param_3 < 1) break;
        cVar2 = *pcVar4;
        if (cVar2 == '\0') {
          cVar2 = '0';
        }
        else {
          pcVar4 = pcVar4 + 1;
        }
        *pcVar6 = cVar2;
        param_3 = param_3 + -1;
      }
      *pcVar6 = '\0';
      if ((-1 < param_3) && (cVar2 = FUN_1802026d0(), cVar2 != '\0')) {
        while( true ) {
          pcVar6 = pcVar6 + -1;
          if (*pcVar6 != '9') break;
          *pcVar6 = '0';
        }
        *pcVar6 = *pcVar6 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        lVar1 = -1;
        do {
          lVar7 = lVar1;
          lVar1 = lVar7 + 1;
        } while (param_1[lVar7 + 2] != '\0');
        FUN_1802079d0(param_1,param_1 + 1,lVar7 + 2);
      }
      return 0;
    }
  }
  uVar5 = 0x16;
LAB_1802027c4:
  *(undefined4 *)(param_7 + 0x2c) = uVar5;
  *(undefined1 *)(param_7 + 0x30) = 1;
  FUN_1801e128c(0,0,0,0,0,param_7);
  return uVar5;
}



void FUN_1802028b0(ulonglong param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,longlong param_6)

{
  uint *puVar1;
  sbyte sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  rsize_t _MaxCount;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  double dVar23;
  undefined1 auStackY_828 [32];
  uint local_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7e0;
  int local_7dc;
  uint local_7d8 [2];
  undefined4 local_7d0;
  undefined4 local_7cc;
  uint *local_7c8;
  byte local_7c0 [8];
  char local_7b8;
  uint *local_7b0;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint local_5c8;
  uint local_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint local_228;
  uint local_224 [115];
  ulonglong local_58;

  local_58 = DAT_1802a0400 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_180205fc0(local_7c0);
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_180206050(local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar3 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar3 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar3;
  FUN_180205f50(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) == 0) || ((local_7d8[0] & 0x1000000) != 0)) {
      param_4[1] = 0;
LAB_1802029fe:
      iVar4 = FUN_1801f2250();
joined_r0x000180202a44:
      if (iVar4 != 0) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_180203adc;
    }
  }
  else if (uVar6 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar19 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar19 = 4;
    }
    else {
      uVar19 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar19 == 1) {
      iVar4 = FUN_1801f2250();
      goto joined_r0x000180202a44;
    }
    if (((uVar19 == 2) || (uVar19 == 3)) || (uVar19 == 4)) goto LAB_1802029fe;
  }
  local_7ec = 0;
  local_7cc = 0x8001f;
  FUN_180205f50(&local_7d0,0,0);
  FUN_180205f50(&local_7ec,0x8001f,local_7cc);
  local_7ec = param_2 + 1;
  uVar18 = (param_1 & 0x7fffffffffffffff) >> 0x34;
  uVar6 = (-(ulonglong)(uVar18 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
  uVar21 = (2 - (uint)(uVar18 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
  FUN_180206180(-uVar18);
  dVar23 = (double)FUN_1802060b0();
  uVar5 = -(uint)(((int)dVar23 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar23;
  uVar16 = (uint)(uVar6 >> 0x20);
  local_794 = uVar6;
  uVar19 = (uint)(uVar16 != 0);
  uVar13 = uVar19 + 1;
  if (uVar21 < 0x434) {
    if (uVar21 == 0x36) {
LAB_180202ee8:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar16 != 0) & 4));
      iVar4 = 0x1f;
      bVar22 = *puVar1 == 0;
      if (!bVar22) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar22) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      uVar19 = (iVar4 == 0x20) + uVar13;
      if (uVar19 < 0x74) {
        uVar16 = uVar19 - 1;
        while (uVar16 != 0xffffffff) {
          uVar20 = uVar16 - 1;
          if (uVar16 < uVar13) {
            iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar16 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (uVar20 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
          }
          else {
            uVar10 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar16 * 4) = uVar10 >> 0x1f | iVar4 * 2;
          uVar16 = uVar20;
        }
      }
      else {
        uVar19 = 0;
      }
      uVar13 = 0x435 - uVar21 >> 5;
      local_798 = uVar19;
      FUN_180207610(local_3f4,0,(ulonglong)uVar13 * 4);
      local_3f4[uVar13] = 1 << ((byte)(0x435 - uVar21) & 0x1f);
    }
    else {
      local_3f4[1] = 0x100000;
      local_3f4[0] = 0;
      local_3f8 = 2;
      if (uVar16 == 0) goto LAB_180202ee8;
      uVar6 = 0;
      do {
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_180202ee8;
        uVar19 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar19;
      } while (uVar19 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      iVar4 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar16 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      local_798 = (0x20U - iVar4 < 2) + uVar13;
      if (local_798 < 0x74) {
        uVar19 = local_798 - 1;
        while (uVar19 != 0xffffffff) {
          uVar16 = uVar19 - 1;
          if (uVar19 < uVar13) {
            iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (uVar16 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)uVar16 * 4);
          }
          else {
            uVar20 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) = uVar20 >> 0x1e | iVar4 * 4;
          uVar19 = uVar16;
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      uVar19 = local_798;
      uVar13 = 0x436 - uVar21 >> 5;
      FUN_180207610(local_3f4,0,(ulonglong)uVar13 * 4);
      local_3f4[uVar13] = 1 << ((byte)(0x436 - uVar21) & 0x1f);
    }
    local_3f8 = uVar13 + 1;
    _MaxCount = (ulonglong)local_3f8 << 2;
  }
  else {
    local_3f4[1] = 0x100000;
    local_3f4[0] = 0;
    local_3f8 = 2;
    if (uVar16 == 0) {
LAB_180202ca9:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar20 = uVar21 - 0x433 & 0x1f;
      uVar16 = uVar21 - 0x433 >> 5;
      sVar2 = (sbyte)uVar20;
      bVar9 = 0x20 - sVar2;
      uVar21 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
      iVar4 = 0x1f;
      bVar22 = *puVar1 == 0;
      if (!bVar22) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar22) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar16 < 0x74) && (local_798 = (0x20U - iVar4 < uVar20) + uVar13 + uVar16, local_798 < 0x74)) {
        uVar19 = local_798;
        while (uVar19 = uVar19 - 1, uVar19 != uVar16 - 1) {
          uVar20 = uVar19 - uVar16;
          if (uVar20 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar20 - 1 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar20 - 1) * 4);
          }
          else {
            uVar20 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) =
               (uVar20 & ~uVar21) >> (bVar9 & 0x1f) | (uVar10 & uVar21) << sVar2;
        }
        uVar6 = 0;
        if (uVar16 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar19 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar19;
          } while (uVar19 != uVar16);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      local_3f4[0] = 2;
    }
    else {
      uVar6 = 0;
      do {
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_180202ca9;
        uVar16 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar16;
      } while (uVar16 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar20 = uVar21 - 0x432 & 0x1f;
      uVar16 = uVar21 - 0x432 >> 5;
      sVar2 = (sbyte)uVar20;
      bVar9 = 0x20 - sVar2;
      uVar21 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
      iVar4 = 0x1f;
      bVar22 = *puVar1 == 0;
      if (!bVar22) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar22) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar16 < 0x74) && (local_798 = (0x20U - iVar4 < uVar20) + uVar13 + uVar16, local_798 < 0x74)) {
        uVar19 = local_798;
        while (uVar19 = uVar19 - 1, uVar19 != uVar16 - 1) {
          uVar20 = uVar19 - uVar16;
          if (uVar20 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar20 - 1 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar20 - 1) * 4);
          }
          else {
            uVar20 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) =
               (uVar20 & ~uVar21) >> (bVar9 & 0x1f) | (uVar10 & uVar21) << sVar2;
        }
        uVar6 = 0;
        if (uVar16 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar19 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar19;
          } while (uVar19 != uVar16);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      local_3f4[0] = 4;
    }
    local_3f4[1] = 0;
    _MaxCount = 4;
    local_3f8 = 1;
    uVar19 = local_798;
  }
  local_5c8 = local_3f8;
  memcpy_s(local_5c4,0x1cc,local_3f4,_MaxCount);
  if ((int)uVar5 < 0) {
    uVar13 = -uVar5;
    local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,uVar13);
    uVar6 = (ulonglong)uVar13 / 10;
    local_7f0 = (uint)uVar6;
    if (local_7f0 != 0) {
      do {
        local_7e0 = (uint)uVar6;
        if (0x26 < local_7e0) {
          local_7e0 = 0x26;
        }
        uVar13 = local_7e0 - 1;
        bVar9 = (&DAT_180246cf2)[(ulonglong)uVar13 * 4];
        local_3f8 = (uint)(byte)(&DAT_180246cf3)[(ulonglong)uVar13 * 4] + (uint)bVar9;
        FUN_180207610(local_3f4,0,(ulonglong)bVar9 * 4);
        FUN_1802079d0(local_3f4 + bVar9,
                      &DAT_1802463e0 + (ulonglong)*(ushort *)(&DAT_180246cf0 + (ulonglong)uVar13 * 4) * 4);
        if (local_3f8 < 2) {
          uVar6 = (ulonglong)local_3f4[0];
          if (local_3f4[0] == 0) {
LAB_180203535:
            local_798 = 0;
            uVar19 = local_798;
            goto LAB_1802037fb;
          }
          if ((local_3f4[0] == 1) || (uVar19 == 0)) goto LAB_1802037fb;
          uVar18 = 0;
          uVar12 = 0;
          do {
            uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar18;
            *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
            uVar18 = uVar11 >> 0x20;
            iVar4 = (int)(uVar11 >> 0x20);
            uVar13 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar13;
          } while (uVar13 != uVar19);
LAB_18020357f:
          uVar19 = local_798;
          if (iVar4 == 0) goto LAB_1802037fb;
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
            local_798 = local_798 + 1;
            uVar19 = local_798;
            goto LAB_1802037fb;
          }
          uVar19 = 0;
          local_798 = 0;
          bVar22 = false;
        }
        else {
          if (uVar19 < 2) {
            uVar13 = (uint)local_794;
            uVar6 = local_794 & 0xffffffff;
            local_798 = local_3f8;
            if (local_3f8 != 0) {
              if (local_3f8 < 0x74) {
                FUN_1802079d0(&local_794,local_3f4);
              }
              else {
                FUN_180207610(&local_794,0);
                puVar7 = (undefined4 *)FUN_1801e6ae4();
                *puVar7 = 0x22;
                FUN_1801e1344();
              }
            }
            if (uVar13 == 0) goto LAB_180203535;
            uVar19 = local_798;
            if ((uVar13 != 1) && (local_798 != 0)) {
              uVar18 = 0;
              uVar12 = 0;
              do {
                uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar18;
                *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
                uVar18 = uVar11 >> 0x20;
                iVar4 = (int)(uVar11 >> 0x20);
                uVar19 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar19;
              } while (uVar19 != local_798);
              goto LAB_18020357f;
            }
          }
          else {
            local_7b0 = (uint *)&local_794;
            local_7c8 = local_3f4;
            uVar13 = local_3f8;
            if (local_3f8 < uVar19) {
              uVar13 = uVar19;
              local_7c8 = (uint *)&local_794;
              local_7b0 = local_3f4;
              uVar19 = local_3f8;
            }
            local_798 = 0;
            uVar6 = 0;
            local_228 = 0;
            if (uVar19 != 0) {
              do {
                uVar16 = local_7b0[uVar6];
                uVar21 = (uint)uVar6;
                if (uVar16 == 0) {
                  if (uVar21 == local_798) {
                    local_224[uVar6] = 0;
                    local_798 = uVar21 + 1;
                    local_228 = local_798;
                  }
                }
                else {
                  uVar18 = 0;
                  if (uVar13 != 0) {
                    do {
                      uVar20 = (uint)uVar6;
                      uVar12 = uVar6;
                      if (uVar20 == 0x73) break;
                      if (uVar20 == local_798) {
                        local_224[uVar6] = 0;
                        local_228 = uVar20 + 1;
                      }
                      uVar12 = (ulonglong)(uVar20 + 1);
                      uVar18 = (ulonglong)local_7c8[uVar20 + -uVar21] * (ulonglong)uVar16 + uVar18 +
                               (ulonglong)local_224[uVar6];
                      local_224[uVar6] = (uint)uVar18;
                      uVar18 = uVar18 >> 0x20;
                      uVar6 = uVar12;
                      local_798 = local_228;
                    } while (uVar20 + 1 + -uVar21 != uVar13);
                    uVar16 = (uint)uVar18;
                    uVar6 = uVar12;
                    while (uVar16 != 0) {
                      uVar20 = (uint)uVar6;
                      if (uVar20 == 0x73) goto LAB_1802038a2;
                      if (uVar20 == local_798) {
                        local_224[uVar6] = 0;
                        local_228 = uVar20 + 1;
                      }
                      uVar16 = local_224[uVar6];
                      local_224[uVar6] = (uint)(uVar16 + uVar18);
                      uVar16 = (uint)(uVar16 + uVar18 >> 0x20);
                      uVar18 = (ulonglong)uVar16;
                      uVar6 = (ulonglong)(uVar20 + 1);
                      local_798 = local_228;
                    }
                  }
                  if ((int)uVar6 == 0x73) goto LAB_1802038a2;
                }
                uVar6 = (ulonglong)(uVar21 + 1);
              } while (uVar21 + 1 != uVar19);
            }
            uVar19 = 0;
            if (local_798 != 0) {
              if (local_798 < 0x74) {
                FUN_1802079d0(&local_794,local_224);
                uVar19 = local_798;
              }
              else {
                FUN_180207610(&local_794,0);
                puVar7 = (undefined4 *)FUN_1801e6ae4();
                *puVar7 = 0x22;
                FUN_1801e1344();
                uVar19 = local_798;
              }
            }
          }
LAB_1802037fb:
          bVar22 = true;
        }
        if (!bVar22) goto LAB_1802038a2;
        local_7f0 = local_7f0 - local_7e0;
        uVar6 = (ulonglong)local_7f0;
      } while (local_7f0 != 0);
      uVar13 = (uint)local_7e8;
    }
    uVar16 = local_5c8;
    if (uVar13 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_180246d88 + (ulonglong)(uVar13 % 10 - 1) * 4);
      if (uVar13 == 0) {
LAB_1802038a2:
        local_798 = 0;
        uVar16 = local_5c8;
        uVar19 = local_798;
      }
      else if ((uVar13 != 1) && (uVar19 != 0)) {
        uVar6 = 0;
        uVar18 = 0;
        do {
          uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar18 * 4) * (ulonglong)uVar13 + uVar6;
          *(int *)((longlong)&local_794 + uVar18 * 4) = (int)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar16 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar16;
        } while (uVar16 != uVar19);
        iVar4 = (int)(uVar12 >> 0x20);
        uVar16 = local_5c8;
        uVar19 = local_798;
        if (iVar4 != 0) {
          if (0x72 < local_798) goto LAB_1802038a2;
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
          local_798 = local_798 + 1;
          uVar19 = local_798;
        }
      }
    }
  }
  else {
    uVar6 = (ulonglong)uVar5 / 10;
    uVar13 = (uint)uVar6;
    uVar16 = local_5c8;
    while (uVar13 != 0) {
      local_7e0 = (uint)uVar6;
      if (0x26 < local_7e0) {
        local_7e0 = 0x26;
      }
      uVar21 = local_7e0 - 1;
      bVar9 = (&DAT_180246cf2)[(ulonglong)uVar21 * 4];
      local_3f8 = (uint)(byte)(&DAT_180246cf3)[(ulonglong)uVar21 * 4] + (uint)bVar9;
      FUN_180207610(local_3f4,0,(ulonglong)bVar9 * 4);
      FUN_1802079d0(local_3f4 + bVar9,
                    &DAT_1802463e0 + (ulonglong)*(ushort *)(&DAT_180246cf0 + (ulonglong)uVar21 * 4) * 4);
      uVar21 = local_5c4[0];
      if (local_3f8 < 2) {
        uVar6 = (ulonglong)local_3f4[0];
        if (local_3f4[0] == 0) {
LAB_180203055:
          local_5c8 = 0;
LAB_180203058:
          uVar16 = local_5c8;
          goto LAB_1802033b0;
        }
        if ((local_3f4[0] == 1) || (uVar16 == 0)) goto LAB_1802033b0;
        uVar18 = 0;
        uVar12 = 0;
        do {
          uVar11 = local_5c4[uVar12] * uVar6 + uVar18;
          local_5c4[uVar12] = (uint)uVar11;
          uVar18 = uVar11 >> 0x20;
          uVar21 = (uint)(uVar11 >> 0x20);
          uVar20 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar20;
        } while (uVar20 != uVar16);
LAB_1802030f7:
        uVar16 = local_5c8;
        if (uVar21 == 0) goto LAB_1802033b0;
        if (local_5c8 < 0x73) {
          local_5c4[local_5c8] = uVar21;
          local_5c8 = local_5c8 + 1;
          goto LAB_180203058;
        }
        uVar16 = 0;
        local_5c8 = 0;
        bVar22 = false;
      }
      else {
        if (uVar16 < 2) {
          uVar6 = (ulonglong)local_5c4[0];
          local_5c8 = local_3f8;
          if (local_3f8 != 0) {
            if (local_3f8 < 0x74) {
              FUN_1802079d0(local_5c4,local_3f4);
            }
            else {
              FUN_180207610(local_5c4,0);
              puVar7 = (undefined4 *)FUN_1801e6ae4();
              *puVar7 = 0x22;
              FUN_1801e1344();
            }
          }
          if (uVar21 == 0) goto LAB_180203055;
          uVar16 = local_5c8;
          if ((uVar21 != 1) && (local_5c8 != 0)) {
            uVar18 = 0;
            uVar12 = 0;
            do {
              uVar11 = local_5c4[uVar12] * uVar6 + uVar18;
              local_5c4[uVar12] = (uint)uVar11;
              uVar18 = uVar11 >> 0x20;
              uVar21 = (uint)(uVar11 >> 0x20);
              uVar16 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar16;
            } while (uVar16 != local_5c8);
            goto LAB_1802030f7;
          }
        }
        else {
          local_7c8 = local_5c4;
          local_7e8 = local_3f4;
          uVar21 = local_3f8;
          if (local_3f8 < uVar16) {
            uVar21 = uVar16;
            local_7e8 = local_5c4;
            uVar16 = local_3f8;
            local_7c8 = local_3f4;
          }
          local_5c8 = 0;
          uVar6 = 0;
          local_228 = 0;
          if (uVar16 != 0) {
            do {
              uVar20 = local_7c8[uVar6];
              uVar10 = (uint)uVar6;
              if (uVar20 == 0) {
                if (uVar10 == local_5c8) {
                  local_224[uVar6] = 0;
                  local_5c8 = uVar10 + 1;
                  local_228 = local_5c8;
                }
              }
              else {
                uVar18 = 0;
                if (uVar21 != 0) {
                  do {
                    uVar17 = (uint)uVar6;
                    uVar12 = uVar6;
                    if (uVar17 == 0x73) break;
                    if (uVar17 == local_5c8) {
                      local_224[uVar6] = 0;
                      local_228 = uVar17 + 1;
                    }
                    uVar12 = (ulonglong)(uVar17 + 1);
                    uVar18 = (ulonglong)local_7e8[uVar17 + -uVar10] * (ulonglong)uVar20 + (ulonglong)local_224[uVar6] +
                             uVar18;
                    local_224[uVar6] = (uint)uVar18;
                    uVar18 = uVar18 >> 0x20;
                    uVar6 = uVar12;
                    local_5c8 = local_228;
                  } while (uVar17 + 1 + -uVar10 != uVar21);
                  uVar20 = (uint)uVar18;
                  uVar6 = uVar12;
                  while (uVar20 != 0) {
                    uVar17 = (uint)uVar6;
                    if (uVar17 == 0x73) goto LAB_18020347a;
                    if (uVar17 == local_5c8) {
                      local_224[uVar6] = 0;
                      local_228 = uVar17 + 1;
                    }
                    uVar20 = local_224[uVar6];
                    local_224[uVar6] = (uint)(uVar20 + uVar18);
                    uVar20 = (uint)(uVar20 + uVar18 >> 0x20);
                    uVar18 = (ulonglong)uVar20;
                    uVar6 = (ulonglong)(uVar17 + 1);
                    local_5c8 = local_228;
                  }
                }
                if ((int)uVar6 == 0x73) goto LAB_18020347a;
              }
              uVar6 = (ulonglong)(uVar10 + 1);
            } while (uVar10 + 1 != uVar16);
          }
          uVar16 = local_5c8;
          if (local_5c8 != 0) {
            if (local_5c8 < 0x74) {
              FUN_1802079d0(local_5c4,local_224);
              uVar16 = local_5c8;
            }
            else {
              FUN_180207610(local_5c4,0);
              puVar7 = (undefined4 *)FUN_1801e6ae4();
              *puVar7 = 0x22;
              FUN_1801e1344();
              uVar16 = local_5c8;
            }
          }
        }
LAB_1802033b0:
        bVar22 = true;
      }
      if (!bVar22) goto LAB_18020347a;
      uVar13 = uVar13 - local_7e0;
      uVar6 = (ulonglong)uVar13;
    }
    if (uVar5 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_180246d88 + (ulonglong)(uVar5 % 10 - 1) * 4);
      if (uVar13 == 0) {
LAB_18020347a:
        local_5c8 = 0;
LAB_18020347d:
        uVar16 = local_5c8;
      }
      else if ((uVar13 != 1) && (uVar16 != 0)) {
        uVar6 = 0;
        uVar18 = 0;
        do {
          uVar12 = (ulonglong)local_5c4[uVar18] * (ulonglong)uVar13 + uVar6;
          local_5c4[uVar18] = (uint)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar21 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar21;
        } while (uVar21 != uVar16);
        uVar13 = (uint)(uVar12 >> 0x20);
        uVar16 = local_5c8;
        if (uVar13 != 0) {
          if (0x72 < local_5c8) goto LAB_18020347a;
          local_5c4[local_5c8] = uVar13;
          local_5c8 = local_5c8 + 1;
          goto LAB_18020347d;
        }
      }
    }
  }
  pcVar15 = local_7a8;
  if (uVar19 != 0) {
    uVar6 = 0;
    uVar18 = 0;
    do {
      uVar12 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar18 * 4) * 10;
      *(int *)((longlong)&local_794 + uVar18 * 4) = (int)uVar12;
      uVar13 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar13;
      uVar6 = uVar12 >> 0x20;
    } while (uVar13 != uVar19);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
  }
  iVar4 = FUN_1801ea7d0(&local_798,&local_5c8);
  if (iVar4 == 10) {
    uVar5 = uVar5 + 1;
    *pcVar15 = '1';
    pcVar14 = pcVar15 + 1;
    if (uVar16 != 0) {
      uVar6 = 0;
      uVar18 = 0;
      do {
        uVar12 = uVar6 + (ulonglong)local_5c4[uVar18] * 10;
        local_5c4[uVar18] = (uint)uVar12;
        uVar19 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar19;
        uVar6 = uVar12 >> 0x20;
      } while (uVar19 != uVar16);
      uVar19 = (uint)(uVar12 >> 0x20);
      if (uVar19 != 0) {
        if (local_5c8 < 0x73) {
          local_5c4[local_5c8] = uVar19;
          local_5c8 = local_5c8 + 1;
        }
        else {
          local_5c8 = 0;
        }
      }
    }
  }
  else if (iVar4 == 0) {
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar15;
  }
  else {
    pcVar14 = pcVar15 + 1;
    *pcVar15 = (char)iVar4 + '0';
  }
  local_7a0[1] = uVar5;
  uVar19 = local_7ec;
  if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
    uVar19 = local_7ec + uVar5;
  }
  uVar6 = (ulonglong)uVar19;
  if (param_6 - 1U < (ulonglong)uVar19) {
    uVar6 = param_6 - 1U;
  }
  pcVar15 = pcVar15 + uVar6;
  while ((pcVar14 != pcVar15 && (local_798 != 0))) {
    uVar6 = 0;
    uVar18 = 0;
    do {
      uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar18 * 4) * 1000000000 + uVar6;
      *(int *)((longlong)&local_794 + uVar18 * 4) = (int)uVar12;
      uVar6 = uVar12 >> 0x20;
      uVar19 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar19;
    } while (uVar19 != local_798);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
    uVar6 = FUN_1801ea7d0(&local_798,&local_5c8);
    uVar19 = 8;
    do {
      uVar18 = (uVar6 & 0xffffffff) / 10;
      if (uVar19 < (uint)((int)pcVar15 - (int)pcVar14)) {
        pcVar14[uVar19] = (char)uVar6 + (char)uVar18 * -10 + '0';
      }
      uVar19 = uVar19 - 1;
      uVar6 = uVar18;
    } while (uVar19 != 0xffffffff);
    lVar8 = (longlong)pcVar15 - (longlong)pcVar14;
    if (9 < lVar8) {
      lVar8 = 9;
    }
    pcVar14 = pcVar14 + lVar8;
  }
  *pcVar14 = '\0';
  local_7dc = 0;
  FUN_180205f50(&local_7dc,local_7d0,local_7cc);
LAB_180203adc:
  if (local_7b8 != '\0') {
    FUN_180205fe0(local_7c0);
  }
}



undefined8 FUN_180203b30(byte *param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;

  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar4 = 1;
        bVar2 = 0xc0;
        lVar5 = lVar4;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_180203bc7:
          uVar1 = FUN_180203bdc(param_3,param_4);
          return uVar1;
        }
        lVar4 = 2;
        bVar2 = 0xe0;
        lVar5 = lVar4;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_180203bc7;
        lVar4 = 3;
        bVar2 = 0xf0;
        lVar5 = lVar4;
      }
      do {
        bVar3 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar4] = bVar3 & 0x3f | 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *param_1 = bVar2 | (byte)param_2;
      uVar1 = FUN_180203bd4(lVar5 + 1,param_3);
      return uVar1;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}



undefined8 FUN_180203bd4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}



undefined8 FUN_180203bdc(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}



uint FUN_180203c00(uint param_1)

{
  return param_1 & 0x300;
}



uint FUN_180203c10(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0;
    if (uVar1 == 0x8040) {
      uVar4 = 0x400;
    }
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 | MXCSR & 0x180) >> 3
          | uVar4 | uVar3;
  return (uVar3 | uVar4 * 4) << 0x16 | uVar4;
}



uint FUN_180203cf0(uint param_1)

{
  return (param_1 & 0x3f) << 0x18 | param_1;
}



uint FUN_180203d00(void)

{
  uint uVar1;

  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 | ((MXCSR & 2) << 3 | MXCSR & 4) * 2 |
          (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}



void FUN_180203d60(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;

  uVar4 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x16 & 0x300;
  param_1 = param_1 & 0xc00;
  uVar8 = 0;
  uVar6 = 0x400;
  uVar10 = 0x800;
  if (param_1 == 0x400) {
    uVar8 = 0x8040;
  }
  else if (param_1 == 0x800) {
    uVar8 = 0x40;
  }
  else if (param_1 == 0xc00) {
    uVar8 = 0x8000;
  }
  uVar5 = 0x100;
  uVar9 = 0x200;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar7 = 0x2000;
      goto LAB_180203dff;
    }
    if (uVar2 == 0x200) {
      uVar7 = 0x4000;
      goto LAB_180203dff;
    }
    if (uVar2 == 0x300) {
      uVar7 = 0x6000;
      goto LAB_180203dff;
    }
  }
  uVar7 = 0;
LAB_180203dff:
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  if ((uVar4 & 2) == 0) {
    uVar10 = 0;
  }
  if ((uVar4 & 4) == 0) {
    uVar6 = 0;
  }
  if ((uVar4 & 8) == 0) {
    uVar9 = 0;
  }
  if ((uVar4 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  if ((uVar4 & 0x20) == 0) {
    uVar5 = 0;
  }
  MXCSR = MXCSR & 0xffff003f | (uint)(ushort)(uVar7 | uVar3 | uVar10 | uVar6 | uVar9 | uVar1 | uVar5 | uVar8);
  return;
}



void FUN_180203e90(uint param_1)

{
  uint uVar1;
  bool bVar2;

  param_1 = param_1 >> 0x18;
  bVar2 = ((param_1 & 0x3f) >> 4 & 1) != 0;
  uVar1 = (uint)bVar2;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((param_1 & 1) != 0) & 0x20 | -(uint)((param_1 & 2) != 0) & 0x10 | -(uint)((param_1 & 4) != 0) & 8 |
          -(uint)((param_1 & 8) != 0) & 4 | uVar1 | (uVar1 - bVar2) - (uint)((param_1 & 0x20) != 0) & 2;
  return;
}



undefined8 FUN_180203f10(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;

  if ((param_2 & 0x1f) == 0) {
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_180203d00();
  uVar2 = FUN_180203cf0(param_2 & 0x1f);
  *param_1 = uVar2 & uVar1;
  return 0;
}



bool FUN_180203f60(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((param_2 & 0x1f) != 0) {
    uVar1 = FUN_180203cf0(param_2 & 0x1f);
    uVar2 = FUN_180203cf0(0x3f);
    uVar4 = *param_1;
    uVar3 = FUN_180203d00();
    uVar1 = uVar3 & ~uVar1 | uVar2 & uVar4 & uVar1;
    FUN_180203e90(uVar1);
    uVar1 = uVar1 & 0x1f;
    uVar4 = FUN_180206730(uVar1);
    return uVar4 != uVar1;
  }
  return false;
}



int FUN_180203fe0(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;

  if (param_3 != 0) {
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
    } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return uVar3 - uVar4;
  }
  return 0;
}



ulonglong FUN_180204050(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;

  if (DAT_1802a9ca0 != 0) {
    uVar3 = FUN_180204080();
    return uVar3;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    if (param_3 != 0) {
      do {
        uVar1 = *param_1;
        uVar4 = (uint)uVar1;
        param_1 = param_1 + 1;
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar5 = (uint)uVar2;
        if ((uint)uVar1 != (uint)uVar2) {
          uVar4 = uVar1 + 0x20;
          if (0x19 < uVar1 - 0x41) {
            uVar4 = (uint)uVar1;
          }
          uVar5 = uVar2 + 0x20;
          if (0x19 < uVar2 - 0x41) {
            uVar5 = (uint)uVar2;
          }
        }
      } while (((uVar4 - uVar5 == 0) && (uVar4 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      return (ulonglong)(uVar4 - uVar5);
    }
    return 0;
  }
  uVar3 = FUN_1801fb8a0();
  return uVar3;
}



int FUN_180204080(ushort *param_1,ushort *param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;

  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    if (param_3 != 0) {
      local_20 = '\0';
      if (param_4 == (longlong *)0x0) {
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
        local_30 = *param_4;
        uStack_28 = param_4[1];
      }
      lVar6 = local_30;
      if (*(longlong *)(local_30 + 0x138) == 0) {
        iVar3 = FUN_180203fe0(param_1,param_2,param_3);
      }
      else {
        do {
          uVar1 = *param_1;
          param_1 = param_1 + 1;
          if (uVar1 < 0x100) {
            uVar5 = (ulonglong)(byte)uVar1;
            if (((&DAT_180248532)[uVar5 * 2] & 1) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
            }
            uVar1 = (ushort)uVar5;
          }
          else {
            uVar1 = FUN_180204cc0(uVar1,&local_30);
            lVar6 = local_30;
          }
          uVar2 = *param_2;
          param_2 = param_2 + 1;
          if (uVar2 < 0x100) {
            uVar5 = (ulonglong)(byte)uVar2;
            if (((&DAT_180248532)[uVar5 * 2] & 1) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
            }
            uVar2 = (ushort)uVar5;
          }
          else {
            uVar2 = FUN_180204cc0(uVar2,&local_30);
            lVar6 = local_30;
          }
          iVar3 = (uint)uVar1 - (uint)uVar2;
        } while (((iVar3 == 0) && (uVar1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
      return iVar3;
    }
    return 0;
  }
  puVar4 = (undefined4 *)FUN_1801e6ae4();
  *puVar4 = 0x16;
  FUN_1801e1344();
  return 0x7fffffff;
}



int common_sopen_dispatch<>
              (longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_18;
  int local_14;

  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x16;
    FUN_1801e1344();
    iVar2 = 0x16;
  }
  else {
    local_18 = 0;
    local_14 = 0;
    iVar2 = FUN_180204878(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
    if (local_18 != 0) {
      if (iVar2 != 0) {
        pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)*param_5 >> 6] + 0x38 + (ulonglong)(*param_5 & 0x3f) * 0x48);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      local_14 = iVar2;
      __acrt_lowio_unlock_fh(*param_5);
    }
    if (iVar2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return iVar2;
}



undefined4 FUN_180204320(uint param_1,byte *param_2,uint param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint local_res8 [2];

  iVar6 = 0;
  *param_4 = '\0';
  if (-1 < *(char *)((&DAT_1802a9d80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
    return 0;
  }
  if ((param_3 & 0x74000) == 0) {
    local_res8[0] = 0;
    iVar1 = FUN_180206754();
    if (iVar1 != 0) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
      param_3 = param_3 | 0x4000;
    }
    else {
      param_3 = param_3 | local_res8[0] & 0x74000;
    }
  }
  uVar5 = param_3 & 0x74000;
  iVar1 = 2;
  if (uVar5 == 0x4000) {
    *param_4 = '\0';
  }
  else if ((uVar5 - 0x10000 & 0xffffbfff) == 0) {
    if ((param_3 & 0x301) == 0x301) goto LAB_1802043e7;
  }
  else if ((uVar5 - 0x20000 & 0xffffbfff) == 0) {
LAB_1802043e7:
    *param_4 = '\x02';
  }
  else if ((uVar5 - 0x40000 & 0xffffbfff) == 0) {
    *param_4 = '\x01';
  }
  if ((param_3 & 0x70000) == 0) {
    return 0;
  }
  if ((*param_2 & 0x40) != 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 4) & 0xc0000000;
  if (uVar5 == 0x40000000) {
LAB_18020442b:
    iVar2 = *(int *)(param_2 + 8);
    if ((iVar2 != 1) && (iVar2 != 2)) {
      if ((iVar2 == 3) || (iVar2 == 4)) {
        lVar3 = FUN_1801f7e60(param_1,0,2);
        if (lVar3 != 0) {
          lVar3 = FUN_1801f7e60(param_1,0,0);
          if (lVar3 == -1) goto LAB_180204494;
          if ((*(uint *)(param_2 + 4) & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_1802044a9;
        }
      }
      else if (iVar2 != 5) {
        return 0;
      }
    }
    if (*param_4 == '\x01') {
      iVar1 = 3;
      local_res8[0] = 0xbfbbef;
    }
    else {
      if (*param_4 != '\x02') {
        return 0;
      }
      local_res8[0] = 0xfeff;
    }
    while (iVar2 = FUN_1801f4de4(param_1,(longlong)local_res8 + (longlong)iVar6,iVar1 - iVar6), iVar2 != -1) {
      iVar6 = iVar6 + iVar2;
      if (iVar1 <= iVar6) {
        return 0;
      }
    }
    goto LAB_180204494;
  }
  if (uVar5 != 0x80000000) {
    if (uVar5 != 0xc0000000) {
      return 0;
    }
    goto LAB_18020442b;
  }
LAB_1802044a9:
  local_res8[0] = 0;
  iVar6 = FUN_1801f71f0(param_1,local_res8,3);
  if (iVar6 == -1) goto LAB_180204494;
  if (iVar6 == 2) {
LAB_1802044e2:
    if ((local_res8[0] & 0xffff) == 0xfffe) {
      puVar4 = (undefined4 *)FUN_1801e6ae4();
      *puVar4 = 0x16;
      goto LAB_180204494;
    }
    if ((local_res8[0] & 0xffff) == 0xfeff) {
      lVar3 = FUN_1801f7e60(param_1,2,0);
      if (lVar3 != -1) {
        *param_4 = '\x02';
        return 0;
      }
      goto LAB_180204494;
    }
  }
  else if (iVar6 == 3) {
    if (local_res8[0] == 0xbfbbef) {
      *param_4 = '\x01';
      return 0;
    }
    goto LAB_1802044e2;
  }
  lVar3 = FUN_1801f7e60(param_1,0,0);
  if (lVar3 != -1) {
    return 0;
  }
LAB_180204494:
  puVar4 = (undefined4 *)FUN_1801e6ae4();
  return *puVar4;
}



byte * FUN_1802045a0(byte *param_1,uint param_2,int param_3,byte param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;

  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar4 = param_2 & 3;
  uVar5 = 0xffffffff;
  if (uVar4 == 0) {
    iVar2 = -0x80000000;
  }
  else if (uVar4 == 1) {
    iVar2 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar4 == 2) {
    iVar2 = -0x40000000;
  }
  else {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x16;
    FUN_1801e1344();
    iVar2 = -1;
  }
  *(int *)(param_1 + 4) = iVar2;
  uVar4 = param_2 & 0x700;
  if (uVar4 != 0) {
    if (uVar4 == 0x100) {
      uVar1 = 4;
      goto LAB_180204691;
    }
    if (uVar4 == 0x200) {
LAB_18020467e:
      uVar1 = 5;
      goto LAB_180204691;
    }
    if (uVar4 == 0x300) {
      uVar1 = 2;
      goto LAB_180204691;
    }
    if (uVar4 != 0x400) {
      if (uVar4 != 0x500) {
        if (uVar4 == 0x600) goto LAB_18020467e;
        if (uVar4 != 0x700) {
          puVar3 = (undefined4 *)FUN_1801e6ae4();
          *puVar3 = 0x16;
          FUN_1801e1344();
          uVar1 = 0xffffffff;
          goto LAB_180204691;
        }
      }
      uVar1 = 1;
      goto LAB_180204691;
    }
  }
  uVar1 = 3;
LAB_180204691:
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (param_3 == 0x10) {
    uVar5 = 0;
  }
  else if (param_3 == 0x20) {
    uVar5 = 1;
  }
  else if (param_3 == 0x30) {
    uVar5 = 2;
  }
  else if (param_3 == 0x40) {
    uVar5 = 3;
  }
  else if (param_3 == 0x80) {
    uVar5 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x16;
    FUN_1801e1344();
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if (((param_2 & 0x74000) == 0) && (iVar2 = FUN_180206754(), iVar2 != 0)) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *param_1 = *param_1 | 0x80;
  }
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_1802aa32c & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}



int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  short local_res8 [4];

  bVar1 = *(byte *)((&DAT_1802a9d80)[(longlong)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar3 = FUN_1801f7e60(param_1,0xffffffffffffffff,2);
    if (lVar3 == -1) {
      piVar4 = (int *)FUN_1801e6ac0();
      if (*piVar4 == 0x83) goto LAB_180204863;
    }
    else {
      local_res8[0] = 0;
      iVar2 = FUN_1801f71f0(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == 0x1a)) {
        iVar2 = FUN_180206868(param_1,lVar3);
        if (iVar2 == -1) goto LAB_180204816;
      }
      lVar3 = FUN_1801f7e60(param_1,0,0);
      if (lVar3 != -1) goto LAB_180204863;
    }
LAB_180204816:
    piVar4 = (int *)FUN_1801e6ae4();
    iVar2 = *piVar4;
  }
  else {
LAB_180204863:
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_180204878(undefined4 *param_1,uint *param_2,LPCWSTR param_3,uint param_4,undefined4 param_5,undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  HANDLE pvVar9;
  ulonglong uVar10;
  byte bVar11;
  undefined1 local_c8 [4];
  DWORD local_c4;
  undefined8 local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  byte local_a8;
  _SECURITY_ATTRIBUTES local_a0;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined1 local_48 [32];

  puVar6 = (ulonglong *)FUN_1802045a0(local_48,param_4,param_5,param_6);
  local_c0 = *puVar6;
  uStack_b8 = puVar6[1];
  local_b0 = puVar6[2];
  local_78 = puVar6[1] >> 0x20;
  DVar4 = (DWORD)(puVar6[1] >> 0x20);
  local_88 = local_b0;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  if (DVar4 == 0xffffffff) {
    puVar7 = (undefined4 *)FUN_1801e6ac0();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    goto LAB_1802048f7;
  }
  uVar3 = _alloc_osfhnd();
  *param_2 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar7 = (undefined4 *)FUN_1801e6ac0();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    puVar7 = (undefined4 *)FUN_1801e6ae4();
    *puVar7 = 0x18;
    goto LAB_1802048f7;
  }
  local_c4 = (DWORD)uStack_60;
  *param_1 = 1;
  uVar3 = (uint)(local_b0 >> 0x20) | (uint)local_b0;
  local_80 = (ulonglong)uVar3;
  local_a0.bInheritHandle = ~(param_4 >> 7) & 1;
  local_a0.nLength = 0x18;
  local_a0._4_4_ = 0;
  local_a0._20_4_ = 0;
  local_a0.lpSecurityDescriptor = (LPVOID)0x0;
  pvVar9 = CreateFileW(param_3,(DWORD)(local_68 >> 0x20),DVar4,&local_a0,local_c4,uVar3,(HANDLE)0x0);
  if (pvVar9 == (HANDLE)0xffffffffffffffff) {
    uVar2 = (uint)(local_68 >> 0x20);
    if (((uVar2 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      local_c0 = CONCAT44(uVar2,(undefined4)local_c0) & 0x7fffffffffffffff;
      pvVar9 = CreateFileW(param_3,(DWORD)(local_c0 >> 0x20),DVar4,&local_a0,local_c4,uVar3,(HANDLE)0x0);
      uVar3 = uVar2 & 0x7fffffff;
      if (pvVar9 != (HANDLE)0xffffffffffffffff) goto LAB_180204a31;
    }
    pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x38 + (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar4 = GetLastError();
    FUN_1801e6a74(DVar4);
  }
  else {
    uVar3 = local_c0._4_4_;
LAB_180204a31:
    DVar4 = GetFileType(pvVar9);
    if (DVar4 != 0) {
      if (DVar4 == 2) {
        bVar11 = (byte)local_c0 | 0x40;
      }
      else {
        bVar11 = (byte)local_c0;
        if (DVar4 == 3) {
          bVar11 = (byte)local_c0 | 8;
        }
      }
      FUN_1802021a4(*param_2,pvVar9);
      local_a8 = bVar11 | 1;
      local_c0 = CONCAT71(local_c0._1_7_,bVar11) | 1;
      *(byte *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x38 + (ulonglong)(*param_2 & 0x3f) * 0x48) = local_a8;
      *(undefined1 *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x39 + (ulonglong)(*param_2 & 0x3f) * 0x48) = 0;
      if (((param_4 & 2) == 0) || (iVar5 = truncate_ctrl_z_if_present(*param_2), iVar5 == 0)) {
        local_68 = local_c0;
        uStack_60 = uStack_b8;
        local_c8[0] = 0;
        local_58 = local_88;
        iVar5 = FUN_180204320(*param_2,&local_68,param_4,local_c8);
        uVar2 = *param_2;
        if (iVar5 == 0) {
          *(undefined1 *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + 0x39 + (ulonglong)(uVar2 & 0x3f) * 0x48) =
               local_c8[0];
          uVar10 = (ulonglong)(*param_2 & 0x3f);
          pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x3d + uVar10 * 0x48);
          *pbVar1 = *pbVar1 ^ ((byte)(param_4 >> 0x10) ^
                              *(byte *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x3d + uVar10 * 0x48)) & 1;
          if (((local_a8 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x38 +
                             (ulonglong)(*param_2 & 0x3f) * 0x48);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uVar3 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            CloseHandle(pvVar9);
            local_c0 = CONCAT44(uVar3,(undefined4)local_c0) & 0x7fffffffffffffff;
            pvVar9 = CreateFileW(param_3,(DWORD)(local_c0 >> 0x20),(DWORD)local_78,&local_a0,local_c4,(DWORD)local_80,
                                 (HANDLE)0x0);
            if (pvVar9 == (HANDLE)0xffffffffffffffff) {
              DVar4 = GetLastError();
              FUN_1801e6a74(DVar4);
              pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x48);
              *pbVar1 = *pbVar1 & 0xfe;
              FUN_1802023cc(*param_2);
              goto LAB_1802048f7;
            }
            *(HANDLE *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x28 + (ulonglong)(*param_2 & 0x3f) * 0x48) =
                 pvVar9;
          }
          return 0;
        }
      }
      else {
        uVar2 = *param_2;
      }
      FUN_1801f57a8(uVar2);
      return iVar5;
    }
    DVar4 = GetLastError();
    FUN_1801e6a74(DVar4);
    pbVar1 = (byte *)((&DAT_1802a9d80)[(longlong)(int)*param_2 >> 6] + 0x38 + (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    CloseHandle(pvVar9);
    if (DVar4 == 0) {
      puVar7 = (undefined4 *)FUN_1801e6ae4();
      *puVar7 = 0xd;
    }
  }
LAB_1802048f7:
  piVar8 = (int *)FUN_1801e6ae4();
  return *piVar8;
}



errno_t __cdecl FID_conflict__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;

  eVar1 = common_sopen_dispatch<>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}



ushort FUN_180204cc0(ushort param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  ushort local_res8 [4];
  ushort local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;

  if (param_1 == 0xffff) {
    return 0xffff;
  }
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (0x7f < local_res8[0]) {
LAB_180204d62:
      local_res18[0] = 0;
      iVar1 = __acrt_LCMapStringW(*(undefined8 *)(local_20 + 0x138),0x100,local_res8,1,local_res18,1);
      if (iVar1 != 0) {
        local_res8[0] = local_res18[0];
      }
      goto LAB_180204d9c;
    }
    if (((&DAT_180248532)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_180204d9c;
    }
  }
  else {
    if (0xff < local_res8[0]) {
      if (*(longlong *)(local_20 + 0x138) == 0) goto LAB_180204d9c;
      goto LAB_180204d62;
    }
    if (((&DAT_180248532)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_180204d9c;
    }
  }
  local_res8[0] = (ushort)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
LAB_180204d9c:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return local_res8[0];
}



longlong FUN_180204dbc(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  plVar2 = (longlong *)FUN_1801f0f54();
  if ((plVar2 != (longlong *)0x0) && (param_1 != 0)) {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(short *)(param_1 + uVar5 * 2) != 0);
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(short *)(lVar3 + uVar4 * 2) != 0);
      if (((uVar5 < uVar4) && (*(short *)(lVar3 + uVar5 * 2) == 0x3d)) &&
         (iVar1 = FUN_180205940(lVar3,param_1,uVar5), iVar1 == 0)) {
        return *plVar2 + uVar5 * 2 + 2;
      }
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  return 0;
}



undefined8 FUN_180204e54(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar6;

  __acrt_lock(0xb);
  uVar8 = 0;
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
    if (param_2 == (undefined2 *)0x0) {
LAB_180204eb0:
      if (param_3 == 0) goto LAB_180204eb5;
LAB_180204ebc:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (undefined2 *)0x0) goto LAB_180204eb0;
        goto LAB_180204ebc;
      }
LAB_180204eb5:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0;
      }
      lVar4 = FUN_180204dbc(param_4);
      if (lVar4 != 0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(short *)(lVar4 + lVar5 * 2) != 0);
        uVar7 = lVar6 + 2;
        *param_1 = uVar7;
        if (param_3 != 0) {
          if (param_3 < uVar7) {
            uVar8 = 0x22;
          }
          else {
            iVar2 = FUN_1801fb810();
            if (iVar2 != 0) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_180204f0e;
    }
  }
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  uVar8 = 0x16;
  *puVar3 = 0x16;
  FUN_1801e1344();
LAB_180204f0e:
  __acrt_unlock(0xb);
  return uVar8;
}



undefined8 thunk_FUN_180204e54(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar6;

  __acrt_lock(0xb);
  uVar8 = 0;
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
    if (param_2 == (undefined2 *)0x0) {
LAB_180204eb0:
      if (param_3 == 0) goto LAB_180204eb5;
LAB_180204ebc:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (undefined2 *)0x0) goto LAB_180204eb0;
        goto LAB_180204ebc;
      }
LAB_180204eb5:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0;
      }
      lVar4 = FUN_180204dbc(param_4);
      if (lVar4 != 0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(short *)(lVar4 + lVar5 * 2) != 0);
        uVar7 = lVar6 + 2;
        *param_1 = uVar7;
        if (param_3 != 0) {
          if (param_3 < uVar7) {
            uVar8 = 0x22;
          }
          else {
            iVar2 = FUN_1801fb810();
            if (iVar2 != 0) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_180204f0e;
    }
  }
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  uVar8 = 0x16;
  *puVar3 = 0x16;
  FUN_1801e1344();
LAB_180204f0e:
  __acrt_unlock(0xb);
  return uVar8;
}



void FUN_180204f60(undefined1 *param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 local_438 [62];
  undefined8 local_248 [62];
  ulonglong local_58;

  local_58 = DAT_1802a0400 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) || (param_4 == (code *)0x0)) {
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x16;
    FUN_1801e1344();
  }
  else {
    FUN_180206b18(param_4);
    FUN_180207610(local_438,0,0x1f0);
    FUN_180207610(local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_180205020:
      while (uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar9) {
        lVar5 = (uVar9 >> 1) * param_3;
        puVar7 = param_1 + lVar5;
        iVar2 = (*param_4)(param_1,puVar7);
        if ((0 < iVar2) && (puVar6 = puVar7, uVar9 = param_3, param_1 != puVar7)) {
          do {
            uVar1 = puVar6[-lVar5];
            puVar6[-lVar5] = *puVar6;
            *puVar6 = uVar1;
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*param_4)(param_1,puVar10);
        if ((0 < iVar2) && (param_1 != puVar10)) {
          puVar6 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
            puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*param_4)(puVar7);
        puVar6 = param_1;
        puVar8 = puVar10;
        if ((0 < iVar2) && (puVar7 != puVar10)) {
          puVar4 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar4[(longlong)puVar7 - (longlong)puVar10];
            puVar4[(longlong)puVar7 - (longlong)puVar10] = *puVar4;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
LAB_180205190:
        puVar4 = puVar7;
        if (puVar6 < puVar4) {
          do {
            puVar6 = puVar6 + param_3;
            if (puVar4 <= puVar6) goto LAB_1802051b0;
            iVar2 = (*param_4)(puVar6);
          } while (iVar2 < 1);
        }
        else {
LAB_1802051b0:
          do {
            puVar6 = puVar6 + param_3;
            if (puVar10 < puVar6) break;
            iVar2 = (*param_4)(puVar6);
          } while (iVar2 < 1);
        }
        do {
          puVar7 = puVar8;
          puVar8 = puVar7 + -param_3;
          if (puVar8 <= puVar4) break;
          iVar2 = (*param_4)(puVar8);
        } while (0 < iVar2);
        if (puVar6 <= puVar8) {
          if (puVar8 != puVar6) {
            puVar7 = puVar8;
            uVar9 = param_3;
            do {
              uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
              puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar7 = puVar6;
          if (puVar4 != puVar8) {
            puVar7 = puVar4;
          }
          goto LAB_180205190;
        }
        if (puVar4 < puVar7) {
          do {
            puVar7 = puVar7 + -param_3;
            if (puVar7 <= puVar4) goto LAB_180205237;
            iVar2 = (*param_4)(puVar7);
          } while (iVar2 == 0);
        }
        else {
LAB_180205237:
          do {
            puVar7 = puVar7 + -param_3;
            if (puVar7 <= param_1) break;
            iVar2 = (*param_4)(puVar7);
          } while (iVar2 == 0);
        }
        if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6) goto LAB_18020528d;
        if (param_1 < puVar7) {
          local_438[local_448] = param_1;
          local_248[local_448] = puVar7;
          local_448 = local_448 + 1;
        }
        param_1 = puVar6;
        if (puVar10 <= puVar6) goto LAB_1802050a3;
      }
      for (; puVar6 = param_1, puVar7 = param_1, param_1 < puVar10; puVar10 = puVar10 + -param_3) {
        while (puVar8 = puVar6, puVar7 = puVar7 + param_3, puVar7 <= puVar10) {
          iVar2 = (*param_4)(puVar7,puVar8);
          puVar6 = puVar7;
          if (iVar2 < 1) {
            puVar6 = puVar8;
          }
        }
        if (puVar8 != puVar10) {
          puVar7 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar7[(longlong)puVar8 - (longlong)puVar10];
            puVar7[(longlong)puVar8 - (longlong)puVar10] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      goto LAB_1802050a3;
    }
  }
LAB_18020528d:
  if (puVar6 < puVar10) {
    local_438[local_448] = puVar6;
    local_248[local_448] = puVar10;
    local_448 = local_448 + 1;
  }
  puVar10 = puVar7;
  if (puVar7 <= param_1) {
LAB_1802050a3:
    local_448 = local_448 + -1;
    if (local_448 < 0) {
    }
    param_1 = (undefined1 *)local_438[local_448];
    puVar10 = (undefined1 *)local_248[local_448];
  }
  goto LAB_180205020;
}



undefined4 FUN_180205300(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;

  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_180205359;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_180205359;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_1801e6ae4();
      *puVar2 = 0x22;
      FUN_1801e1344();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_180205359:
  puVar2 = (undefined4 *)FUN_1801e6ae4();
  *puVar2 = 0x16;
  FUN_1801e1344();
  return 0x16;
}



void FUN_180205430(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte local_38 [56];

  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  local_38[0x13] = 0;
  local_38[0x14] = 0;
  local_38[0x15] = 0;
  local_38[0x16] = 0;
  local_38[0x17] = 0;
  local_38[0x18] = 0;
  local_38[0x19] = 0;
  local_38[0x1a] = 0;
  local_38[0x1b] = 0;
  local_38[0x1c] = 0;
  local_38[0x1d] = 0;
  local_38[0x1e] = 0;
  local_38[0x1f] = 0;
  while (bVar2 != 0) {
    local_38[(longlong)(int)(uint)bVar2 >> 3] = local_38[(longlong)(int)(uint)bVar2 >> 3] | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
    }
    if ((local_38[bVar2 >> 3] >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
}



char * FUN_1802054d0(char *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char *pcVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulonglong uVar34;
  undefined1 auVar35 [16];
  longlong lVar25;

  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined1 (*) [16])(param_2 - uVar21);
  auVar33 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] != '\0') {
        pcVar19 = (char *)FUN_180205430();
        return pcVar19;
      }
      goto LAB_180205779;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar2) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_180205779;
  }
  auVar35 = pauVar20[1];
  auVar23[0] = -(auVar35[0] == '\0');
  auVar23[1] = -(auVar35[1] == '\0');
  auVar23[2] = -(auVar35[2] == '\0');
  auVar23[3] = -(auVar35[3] == '\0');
  auVar23[4] = -(auVar35[4] == '\0');
  auVar23[5] = -(auVar35[5] == '\0');
  auVar23[6] = -(auVar35[6] == '\0');
  lVar25 = auVar35._8_8_;
  auVar23[7] = -(auVar35[7] == '\0');
  auVar23[8] = -(auVar35[8] == '\0');
  auVar23[9] = -(auVar35[9] == '\0');
  auVar23[10] = -(auVar35[10] == '\0');
  auVar23[0xb] = -(auVar35[0xb] == '\0');
  auVar23[0xc] = -(auVar35[0xc] == '\0');
  auVar23[0xd] = -(auVar35[0xd] == '\0');
  auVar23[0xe] = -(auVar35[0xe] == '\0');
  auVar23[0xf] = -(auVar35[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  uVar34 = auVar35._0_8_;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      switch(-uVar2) {
      case 0:
        auVar35 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar35._0_8_ = uVar34 << 8;
        auVar35._8_8_ = lVar25 << 8 | uVar34 >> 0x38;
        break;
      case 0xfffffff2:
        auVar35._0_8_ = uVar34 << 0x10;
        auVar35._8_8_ = lVar25 << 0x10 | uVar34 >> 0x30;
        break;
      case 0xfffffff3:
        auVar35._0_8_ = uVar34 << 0x18;
        auVar35._8_8_ = lVar25 << 0x18 | uVar34 >> 0x28;
        break;
      case 0xfffffff4:
        auVar35._0_8_ = uVar34 << 0x20;
        auVar35._8_8_ = lVar25 << 0x20 | uVar34 >> 0x20;
        break;
      case 0xfffffff5:
        auVar35._0_8_ = uVar34 << 0x28;
        auVar35._8_8_ = lVar25 << 0x28 | uVar34 >> 0x18;
        break;
      case 0xfffffff6:
        auVar35._0_8_ = uVar34 << 0x30;
        auVar35._8_8_ = lVar25 << 0x30 | uVar34 >> 0x10;
        break;
      case 0xfffffff7:
        auVar35._0_8_ = uVar34 << 0x38;
        auVar35._8_8_ = lVar25 << 0x38 | uVar34 >> 8;
        break;
      case 0xfffffff8:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar34;
        auVar35 = auVar18 << 0x40;
        break;
      case 0xfffffff9:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar34 << 8;
        auVar35 = auVar11 << 0x40;
        break;
      case 0xfffffffa:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar34 << 0x10;
        auVar35 = auVar12 << 0x40;
        break;
      case 0xfffffffb:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar34 << 0x18;
        auVar35 = auVar13 << 0x40;
        break;
      case 0xfffffffc:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar34 << 0x20;
        auVar35 = auVar14 << 0x40;
        break;
      case 0xfffffffd:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar34 << 0x28;
        auVar35 = auVar15 << 0x40;
        break;
      case 0xfffffffe:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar34 << 0x30;
        auVar35 = auVar16 << 0x40;
        break;
      case 0xffffffff:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar34 << 0x38;
        auVar35 = auVar17 << 0x40;
      }
      auVar33 = auVar33 | auVar35;
LAB_180205779:
      cVar1 = *param_1;
      while( true ) {
        if (cVar1 == '\0') {
          return (char *)0x0;
        }
        auVar24[0] = -(cVar1 == auVar33[0]);
        auVar24[1] = -(cVar1 == auVar33[1]);
        auVar24[2] = -(cVar1 == auVar33[2]);
        auVar24[3] = -(cVar1 == auVar33[3]);
        auVar24[4] = -(cVar1 == auVar33[4]);
        auVar24[5] = -(cVar1 == auVar33[5]);
        auVar24[6] = -(cVar1 == auVar33[6]);
        auVar24[7] = -(cVar1 == auVar33[7]);
        auVar24[8] = -(cVar1 == auVar33[8]);
        auVar24[9] = -(cVar1 == auVar33[9]);
        auVar24[10] = -(cVar1 == auVar33[10]);
        auVar24[0xb] = -(cVar1 == auVar33[0xb]);
        auVar24[0xc] = -(cVar1 == auVar33[0xc]);
        auVar24[0xd] = -(cVar1 == auVar33[0xd]);
        auVar24[0xe] = -(cVar1 == auVar33[0xe]);
        auVar24[0xf] = -(cVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pcVar19 = (char *)FUN_180205430(param_1,param_2);
  return pcVar19;
}



void FUN_180205888(uchar *param_1,uchar *param_2)

{
  _mbsdec_l(param_1,param_2,(_locale_t)0x0);
  return;
}



uchar * __cdecl _mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;

  if ((_Start == (uchar *)0x0) || (_Pos == (uchar *)0x0)) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
  }
  else if (_Start < _Pos) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = _Pos + (-1 - (ulonglong)((int)_Pos - (int)pbVar2 & 1));
    }
    if (local_10 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pbVar2;
  }
  return (uchar *)0x0;
}



byte FUN_180205924(void)

{
  byte bVar1;

  bVar1 = __acrt_initialize_multibyte();
  return bVar1 ^ 1;
}



ulonglong FUN_180205940(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;

  if (DAT_1802a9ca0 == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      *puVar3 = 0x16;
      FUN_1801e1344();
      return 0x7fffffff;
    }
    if (param_3 < 0x80000000) {
      uVar4 = FUN_180203fe0();
      return uVar4;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_1801e6ae4();
      *puVar3 = 0x16;
      FUN_1801e1344();
      return 0x7fffffff;
    }
    uVar4 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_10 = '\0';
      lVar5 = FUN_1801f2834();
      local_20 = *(longlong *)(lVar5 + 0x90);
      local_18 = *(undefined8 *)(lVar5 + 0x88);
      __acrt_update_locale_info(lVar5,&local_20);
      FUN_1801f43a4(lVar5,&local_18);
      if ((*(uint *)(lVar5 + 0x3a8) & 2) == 0) {
        *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) | 2;
        local_10 = '\x01';
      }
      if (*(longlong *)(local_20 + 0x130) == 0) {
        uVar1 = FUN_180203fe0(param_1,param_2,param_3);
        if (local_10 != '\0') {
          *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
        }
        return (ulonglong)uVar1;
      }
      iVar2 = __acrt_CompareStringW
                        (*(longlong *)(local_20 + 0x130),0x1001,param_1,param_3 & 0xffffffff,param_2,(int)param_3);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_1801e6ae4();
        *puVar3 = 0x16;
      }
      else {
        uVar4 = (ulonglong)(iVar2 - 2);
      }
      if (local_10 == '\0') {
        return uVar4;
      }
      *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
      return uVar4;
    }
  }
  puVar3 = (undefined4 *)FUN_1801e6ae4();
  *puVar3 = 0x16;
  FUN_1801e1344();
  return 0x7fffffff;
}



undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;

  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_1801e6ae4();
    *puVar1 = 0x16;
    FUN_1801e1344();
    return 0xffffffffffffffff;
  }
  uVar2 = HeapSize(DAT_1802aa2f0,0,param_1);
  return uVar2;
}



void FUN_180205b28(undefined1 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;

  local_40 = DAT_1802a0400 ^ (ulonglong)auStack_78;
  puVar4 = (undefined2 *)*param_2;
  local_58 = param_5;
  puVar5 = puVar4;
  local_50 = param_4;
  if (param_1 == (undefined1 *)0x0) {
    lVar3 = FUN_1801f93a8(local_48,*puVar4,param_4,param_5);
    uVar1 = local_58;
    while ((lVar3 != -1 && ((lVar3 == 0 || (local_48[lVar3 + -1] != '\0'))))) {
      puVar4 = puVar4 + 1;
      lVar3 = FUN_1801f93a8(local_48,*puVar4,param_4,uVar1);
    }
  }
  do {
    puVar6 = local_48;
    if (3 < param_3) {
      puVar6 = param_1;
    }
    uVar2 = FUN_1801f93a8(puVar6,*puVar5,local_50,local_58);
    if (uVar2 == 0xffffffffffffffff) {
      *param_2 = puVar4;
    }
    if (puVar6 != param_1) {
      if (param_3 < uVar2) goto LAB_180205bee;
      FUN_1802079d0(param_1,puVar6,uVar2);
    }
    if (uVar2 != 0) {
      if (param_1[uVar2 - 1] == '\0') {
        puVar4 = (undefined2 *)0x0;
LAB_180205bee:
        *param_2 = puVar4;
      }
      puVar4 = puVar5 + 1;
    }
    param_3 = param_3 - uVar2;
    param_1 = param_1 + uVar2;
    puVar5 = puVar5 + 1;
  } while( true );
}



undefined8 FUN_180205c7c(ulonglong param_1,short *param_2,ulonglong param_3,uint param_4,char param_5)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;

  psVar7 = param_2;
  if (param_5 != '\0') {
    *param_2 = 0x2d;
    psVar7 = param_2 + 1;
    param_1 = (ulonglong)(uint)-(int)param_1;
  }
  uVar6 = (ulonglong)(param_5 != '\0');
  psVar1 = psVar7;
  do {
    psVar8 = psVar1;
    uVar3 = param_1 & 0xffffffff;
    param_1 = uVar3 / param_4;
    uVar3 = uVar3 % (ulonglong)param_4;
    sVar2 = 0x57;
    if ((uint)uVar3 < 10) {
      sVar2 = 0x30;
    }
    uVar6 = uVar6 + 1;
    *psVar8 = sVar2 + (short)uVar3;
  } while (((int)param_1 != 0) && (psVar1 = psVar8 + 1, uVar6 < param_3));
  if (uVar6 < param_3) {
    psVar8[1] = 0;
    do {
      sVar2 = *psVar8;
      *psVar8 = *psVar7;
      psVar8 = psVar8 + -1;
      *psVar7 = sVar2;
      psVar7 = psVar7 + 1;
    } while (psVar7 < psVar8);
    uVar5 = 0;
  }
  else {
    *param_2 = 0;
    puVar4 = (undefined4 *)FUN_1801e6ae4();
    *puVar4 = 0x22;
    FUN_1801e1344();
    uVar5 = 0x22;
  }
  return uVar5;
}



int __cdecl
common_xtox_s<unsigned_long,wchar_t>(ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  int iVar1;
  int *piVar2;

  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      piVar2 = (int *)FUN_1801e6ae4();
      iVar1 = 0x22;
      goto LAB_180205d6a;
    }
    if (param_4 - 2 < 0x23) {
      iVar1 = FUN_180205c7c(param_1);
      return iVar1;
    }
  }
  piVar2 = (int *)FUN_1801e6ae4();
  iVar1 = 0x16;
LAB_180205d6a:
  *piVar2 = iVar1;
  FUN_1801e1344();
  return iVar1;
}



errno_t __cdecl FID_conflict__ltow_s(long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  bool bVar1;
  int iVar2;

  bVar1 = false;
  if ((_Radix == 10) && (_Val < 0)) {
    bVar1 = true;
  }
  iVar2 = common_xtox_s<unsigned_long,wchar_t>(_Val,_DstBuf,_SizeInWords,_Radix,bVar1);
  return iVar2;
}



int FUN_180205de0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;

  uVar1 = *param_2;
  iVar2 = (uint)*param_1 - (uint)uVar1;
  if (iVar2 == 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      if (uVar1 == 0) break;
      uVar1 = param_2[1];
      param_2 = param_2 + 1;
      iVar2 = (uint)*(ushort *)(lVar3 + (longlong)param_2) - (uint)uVar1;
    } while (iVar2 == 0);
  }
  return (iVar2 >> 0x1f) - (-iVar2 >> 0x1f);
}



undefined4 FUN_180205e18(void)

{
  return DAT_1802aa328;
}



bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_1802a10d8 == (HANDLE)0xfffffffffffffffe) {
    DAT_1802a10d8 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_1802a10d8 != (HANDLE)0xffffffffffffffff;
}



void FUN_180205e74(void)

{
  if (DAT_1802a10d8 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_1802a10d8);
  }
  return;
}



BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;

  BVar1 = WriteConsoleW(DAT_1802a10d8,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_1802a10d8 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_1802a10d8);
      }
      DAT_1802a10d8 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_1802a10d8,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}



undefined8 FUN_180205f50(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  param_3 = param_3 & 0xfff7ffff;
  if ((param_2 & param_3 & 0xfcf0fce0) != 0) {
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = thunk_FUN_180206c70(0,0);
      *param_1 = uVar1;
    }
    puVar2 = (undefined4 *)FUN_1801e6ae4();
    *puVar2 = 0x16;
    FUN_1801e1344();
    return 0x16;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = thunk_FUN_180206c70(param_2,param_3);
    *param_1 = uVar1;
    return 0;
  }
  thunk_FUN_180206c70(param_2,param_3);
  return 0;
}



undefined8 FUN_180205fc0(undefined4 *param_1)

{
  undefined4 uVar1;

  uVar1 = FUN_180203c10();
  *param_1 = uVar1;
  uVar1 = FUN_180203d00();
  param_1[1] = uVar1;
  return 0;
}



bool FUN_180205fe0(int *param_1)

{
  int iVar1;
  undefined8 local_res8;

  FUN_180203d60(*param_1);
  FUN_180203e90(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_180205fc0(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}



undefined8 FUN_180206050(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];

  local_res10[0] = 0;
  iVar2 = FUN_180205fc0(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_180205fe0(local_res10);
    if (iVar2 == 0) {
      FUN_180206bf0();
      return 0;
    }
  }
  return 1;
}



double FUN_1802060b0(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM0 [16];

  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_1802a0468) {
    auVar5 = roundsd(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  dVar1 = ABS(dVar4);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if (dVar1 != 0.0) {
        if (dVar4 != dVar1) {
          return -0.0;
        }
        return 1.0;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 == dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 + 1.0;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_1801f9a80();
    return dVar4;
  }
  return dVar2;
}



double FUN_180206180(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM0 [64];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;

  dVar3 = in_ZMM0._0_8_;
  auVar5 = in_ZMM0._0_16_;
  if (DAT_1802aa1a8 == 0) {
    if ((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY) {
      if (dVar3 == INFINITY) {
        return INFINITY;
      }
      if (dVar3 != -INFINITY) {
        return (double)((ulonglong)dVar3 | 0x8000000000000);
      }
    }
    else {
      dVar17 = (double)(int)(((ulonglong)dVar3 >> 0x34) - 0x3ff);
      if (0.0 < dVar3) {
        dVar9 = (double)((ulonglong)dVar3 & (ulonglong)DAT_18024ec60);
        dVar7 = dVar3;
        if (dVar17 == -1023.0) {
          dVar17 = (double)((ulonglong)dVar9 | DAT_18024ecf0) - 1.0;
          dVar7 = (double)((ulonglong)dVar17 & (ulonglong)DAT_18024ec60);
          dVar17 = (double)(int)((uint)((ulonglong)dVar17 >> 0x34) - 0x7fd);
          dVar9 = dVar7;
        }
        uVar1 = ((ulonglong)dVar7 & 0xff00000000000) + ((ulonglong)dVar7 & 0x80000000000) * 2;
        if (ABS(dVar3 - 1.0) < 0.0625) {
          dVar3 = dVar3 - 1.0;
          dVar17 = dVar3 / (dVar3 + 2.0);
          dVar7 = dVar17 + dVar17;
          dVar9 = dVar7 * dVar7;
          dVar10 = dVar9 * dVar7;
          dVar12 = (double)((ulonglong)dVar3 & (ulonglong)DAT_18024ee30);
          dVar3 = (((dVar9 * 0.012500000003771751 + 0.08333333333333179) * dVar10 +
                   (dVar9 * 0.0004348877777076146 + 0.0022321399879194482) * dVar10 * dVar10 * dVar7) - dVar3 * dVar17)
                  + (dVar3 - dVar12);
          return dVar12 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 + dVar3 * 0.4342937469482422 +
                 dVar12 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar7 = ((double)(uVar1 | DAT_18024ed00) - (double)((ulonglong)dVar9 | DAT_18024ed00)) *
                *(double *)(&DAT_180249cd0 + uVar2 * 8);
        dVar3 = dVar7 * dVar7;
        return *(double *)(&DAT_18024ee50 + uVar2 * 8) + dVar17 * 0.3010299950838089 +
               *(double *)(&DAT_18024f660 + uVar2 * 8) +
               (dVar17 * 5.801722962879576e-10 -
               ((dVar7 * 0.3333333333333333 + 0.5) * dVar3 + dVar7 +
               ((dVar7 * 0.16666666666666666 + 0.2) * dVar7 + 0.25) * dVar3 * dVar3) * 0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_180206f10();
        return dVar3;
      }
    }
    dVar3 = (double)FUN_180206f10();
    return dVar3;
  }
  auVar13 = vpsrlq_avx(auVar5,0x34);
  auVar13 = vpsubq_avx(auVar13,_DAT_18024ec40);
  auVar13 = vcvtdq2pd_avx(auVar13);
  auVar16 = vpand_avx(auVar5,_DAT_18024ec10);
  if (auVar16._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_1802066d0;
      dVar3 = (double)FUN_180206f10();
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar16 = vpand_avx(auVar5,_DAT_18024ec60);
    if (auVar13._0_8_ == -1023.0) {
      auVar5 = vpor_avx(auVar16,_DAT_18024ecf0);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar5._0_8_ - 1.0;
      auVar16 = vpsrlq_avx(auVar13,0x34);
      auVar5 = vpand_avx(auVar13,_DAT_18024ec60);
      auVar13 = vpsubd_avx(auVar16,_DAT_18024ed90);
      auVar13 = vcvtdq2pd_avx(auVar13);
      auVar16 = auVar5;
    }
    auVar4 = vpand_avx(auVar5,_DAT_18024ec70);
    auVar14 = vpand_avx(auVar5,_DAT_18024ec80);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar4 = vpaddq_avx(auVar14,auVar4);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar3 - 1.0;
    auVar14 = vpand_avx(auVar14,_DAT_18024ede0);
    if (auVar14._0_8_ < 0.0625) {
      dVar7 = auVar5._0_8_ - 1.0;
      dVar9 = dVar7 / (dVar7 + 2.0);
      dVar3 = dVar9 + dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar3 * dVar3;
      auVar13 = vfmadd213sd_fma(ZEXT816(0x3f89999999bac6d4),auVar11,ZEXT816(0x3fb55555555554e6));
      auVar16 = vfmadd213sd_fma(ZEXT816(0x3f3c8034c85dfff0),auVar11,ZEXT816(0x3f62492307f1519f));
      dVar17 = dVar3 * dVar3 * dVar3;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar7;
      auVar5 = vpand_avx(auVar6,_DAT_18024ee30);
      dVar10 = auVar5._0_8_;
      dVar3 = ((auVar13._0_8_ * dVar17 + auVar16._0_8_ * dVar17 * dVar17 * dVar3) - dVar7 * dVar9) + (dVar7 - dVar10);
      return dVar10 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 + dVar3 * 0.4342937469482422 +
             dVar10 * 0.4342937469482422;
    }
    uVar1 = auVar4._0_8_ >> 0x2c;
    auVar5 = vpor_avx(auVar16,_DAT_18024ed00);
    auVar16 = vpor_avx(auVar4,_DAT_18024ed00);
    dVar3 = (auVar16._0_8_ - auVar5._0_8_) * *(double *)(&DAT_180249cd0 + uVar1 * 8);
    dVar17 = dVar3 * dVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar3;
    auVar5 = vfmadd213sd_fma(ZEXT816(0x3fc5555555555555),auVar8,ZEXT816(0x3fc999999999999a));
    auVar16 = vfmadd213sd_fma(ZEXT816(0x3fd5555555555555),auVar8,ZEXT816(0x3fe0000000000000));
    auVar5 = vfmadd213sd_fma(auVar5,auVar8,ZEXT816(0x3fd0000000000000));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar17;
    auVar16 = vfmadd231sd_fma(auVar8,auVar16,auVar4);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar17 * dVar17;
    auVar5 = vfmadd231sd_fma(auVar16,auVar5,auVar15);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar5._0_8_ * 0.4342944819032518;
    auVar16 = vfmsub213sd_fma(ZEXT816(0x3e03ef3fde623e25),auVar13,auVar16);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&DAT_18024ee50 + uVar1 * 8);
    auVar5 = vfmadd231sd_fma(auVar5,auVar13,ZEXT816(0x3fd3441350000000));
    return auVar5._0_8_ + *(double *)(&DAT_18024f660 + uVar1 * 8) + auVar16._0_8_;
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_180206f10();
    return dVar3;
  }
LAB_1802066d0:
  dVar3 = (double)FUN_180206f10();
  return dVar3;
}



uint FUN_180206730(undefined4 param_1)

{
  uint local_res10 [6];

  local_res10[0] = 0;
  FUN_180203f10(local_res10,param_1);
  return local_res10[0] & 0x1f;
}



undefined8 FUN_180206754(undefined4 *param_1)

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
    *param_1 = DAT_1802aa330;
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_180206784(uint param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;

  lVar6 = (longlong)(int)param_1 >> 6;
  uVar4 = (ulonglong)(param_1 & 0x3f);
  lVar3 = (&DAT_1802a9d80)[lVar6];
  bVar1 = *(byte *)(lVar3 + 0x38 + uVar4 * 0x48);
  cVar2 = *(char *)(lVar3 + 0x39 + uVar4 * 0x48);
  if (param_2 == 0x4000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_1802a9d80)[lVar6] + 0x39 + uVar4 * 0x48) = 0;
  }
  else if (param_2 == 0x8000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 & 0x7f;
  }
  else if ((param_2 - 0x10000U & 0xfffeffff) == 0) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_1802a9d80)[lVar6] + 0x39 + uVar4 * 0x48) = 2;
  }
  else if (param_2 == 0x40000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_1802a9d80)[lVar6] + 0x39 + uVar4 * 0x48) = 1;
  }
  if ((bVar1 & 0x80) == 0) {
    uVar5 = 0x8000;
  }
  else if (cVar2 == '\0') {
    uVar5 = 0x4000;
  }
  else {
    uVar5 = 0x10000;
    if (cVar2 == '\x01') {
      uVar5 = 0x40000;
    }
  }
  return uVar5;
}



undefined4 FUN_180206868(undefined4 param_1,undefined8 param_2)

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
  uVar1 = FUN_180206900(param_1,param_2,local_48);
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



undefined4 FUN_180206900(ulonglong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  HANDLE hFile;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;

  uVar10 = param_1 & 0xffffffff;
  lVar5 = FUN_1801f7e60(param_1,0,1);
  lVar6 = FUN_1801f7e60(uVar10,0,2);
  uVar7 = param_2 - lVar6;
  if ((lVar5 == -1) || (lVar6 == -1)) {
    if (*(char *)(param_3 + 0x30) == '\0') {
      uVar1 = 0x16;
      goto LAB_180206a5f;
    }
  }
  else {
    uVar8 = 0;
    if (0 < (longlong)uVar7) {
      lVar6 = _calloc_base(0x1000,1);
      if (lVar6 == 0) {
        uVar8 = 0xc;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xc;
      }
      else {
        uVar1 = FUN_180206784(param_1 & 0xffffffff,0x8000);
        do {
          uVar9 = uVar7 & 0xffffffff;
          if (0xfff < (longlong)uVar7) {
            uVar9 = 0x1000;
          }
          iVar2 = FUN_1801f4f9c(uVar10,lVar6,uVar9,param_3);
          if (iVar2 == -1) {
            if ((*(char *)(param_3 + 0x38) != '\0') && (*(int *)(param_3 + 0x34) == 5)) {
              *(undefined1 *)(param_3 + 0x30) = 1;
              *(undefined4 *)(param_3 + 0x2c) = 0xd;
            }
            if (*(char *)(param_3 + 0x30) != '\0') {
              uVar8 = *(undefined4 *)(param_3 + 0x2c);
            }
            goto LAB_1802069f1;
          }
          uVar7 = uVar7 - (longlong)iVar2;
        } while (0 < (longlong)uVar7);
        FUN_180206784(uVar10,uVar1);
      }
LAB_1802069f1:
      FUN_1801f42e0(lVar6);
      uVar1 = uVar8;
      goto LAB_180206a5f;
    }
    uVar1 = 0;
    if (-1 < (longlong)uVar7) goto LAB_180206a5f;
    lVar6 = FUN_1801f7e60(param_1 & 0xffffffff,param_2,0);
    uVar1 = uVar8;
    if (lVar6 != -1) {
      hFile = (HANDLE)FUN_180202488(param_1 & 0xffffffff);
      BVar3 = SetEndOfFile(hFile);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        *(undefined1 *)(param_3 + 0x38) = 1;
        uVar1 = 0xd;
        *(DWORD *)(param_3 + 0x34) = DVar4;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xd;
      }
      goto LAB_180206a5f;
    }
    if (*(char *)(param_3 + 0x30) == '\0') goto LAB_180206a5f;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x2c);
LAB_180206a5f:
  FUN_1801f7e60(uVar10,lVar5,0);
  return uVar1;
}



void __acrt_LCMapStringW(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5,
                        undefined4 param_6)

{
  int iVar1;
  int iVar2;

  iVar2 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_1801e1700(param_3,(longlong)param_4);
    iVar2 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  FUN_1801f62c8(param_1,param_2,param_3,iVar2,param_5,param_6,0,0,0);
  return;
}



void FUN_180206b18(void)

{
  _guard_check_icall();
  return;
}



ulonglong __acrt_CompareStringW
                    (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5,int param_6
                    )

{
  ulonglong uVar1;

  if (0 < param_4) {
    param_4 = FUN_1801e1700(param_3,(longlong)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1801e1700(param_5,(longlong)param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVar1 = (ulonglong)((param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = FUN_1801f5db8(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return uVar1;
}



uint FUN_180206bf0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = FUN_1801fb130();
  if ((uVar2 & 0x3f) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (uVar2 & 1) << 4;
    uVar3 = uVar4 | 8;
    if ((uVar2 & 4) == 0) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 | 4;
    if ((uVar2 & 8) == 0) {
      uVar4 = uVar3;
    }
    uVar1 = uVar4 | 2;
    if ((uVar2 & 0x10) == 0) {
      uVar1 = uVar4;
    }
    uVar3 = uVar1 | 1;
    if ((uVar2 & 0x20) == 0) {
      uVar3 = uVar1;
    }
    if ((uVar2 & 2) != 0) {
      return uVar3 | 0x80000;
    }
  }
  return uVar3;
}



uint thunk_FUN_180206c70(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;

  uVar1 = FUN_1801fb1d0();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_1802a10e0 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = (ulonglong)((uint)uVar3 & 0xffffffbf);
      FUN_1801fb1e0(uVar3);
    }
    else {
      FUN_1801fb1e0(uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar4 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar4 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar4 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar4 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}



uint FUN_180206c70(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;

  uVar1 = FUN_1801fb1d0();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_1802a10e0 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = (ulonglong)((uint)uVar3 & 0xffffffbf);
      FUN_1801fb1e0(uVar3);
    }
    else {
      FUN_1801fb1e0(uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar4 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar4 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar4 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar4 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}



void FUN_180206f10(void)

{
  FUN_180206f30();
  return;
}



undefined4 FUN_180206f30(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if (param_3 == 1) {
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return (int)param_2;
    }
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
  }
  FUN_1801f9800(param_5,param_4,param_2,uVar1,uVar2,uVar3,param_1,0,1);
  return (int)param_2;
}



undefined8 FUN_180206fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_180207004(param_2,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



void FUN_180207004(void)

{
}



void FUN_180207064(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;

  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_180207004(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    FUN_1801dd048(param_1,param_2,param_3,param_4);
  }
  return;
}



void thunk_FUN_1801d61c8(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;

  do {
    lVar2 = _malloc_base(param_1);
    if (lVar2 != 0) {
      return;
    }
    iVar3 = FUN_1801f0240(param_1);
  } while (iVar3 != 0);
  if (param_1 == -1) {
    FUN_1801d6d3c();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1801d6d1c();
}



void FUN_1802070ec(void)

{
  FUN_1801d61c8();
  return;
}



void FUN_180207100(void)

{
  thunk_FUN_1801d61c8();
  return;
}



void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];

  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;

  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) && (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



ulonglong FUN_1802071d0(longlong param_1)

{
  ulonglong uVar1;
  PIMAGE_SECTION_HEADER p_Var2;

  uVar1 = FUN_180207220(0x180000000);
  if ((int)uVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_180000000,param_1 - 0x180000000);
    uVar1 = 0;
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar1 = (ulonglong)(~p_Var2->Characteristics >> 0x1f);
    }
  }
  return uVar1;
}



bool FUN_180207220(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}



void __GSHandlerCheck_SEH(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;

  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  FUN_180207004(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    FUN_1801dd3a0(param_1,param_2,param_3,param_4);
  }
  return;
}



void FUN_1802072d4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;

  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_180207004(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return;
}



void FUN_180207354(PVOID param_1,PVOID param_2)

{
  RtlUnwind(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



void FUN_180207380(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;

  iVar2 = FUN_1801dd3a0();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_1801dd724();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_1801dd724();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    FUN_1801f1600();
  }
  return;
}



undefined1 (*) [16] FUN_1802073cc(undefined1 (*param_1) [16],byte param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;

  pauVar6 = (undefined1 (*) [16])0x0;
  if (param_2 == 0) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar13[0] = -(*pcVar4 == '\0');
    auVar13[1] = -(pcVar4[1] == '\0');
    auVar13[2] = -(pcVar4[2] == '\0');
    auVar13[3] = -(pcVar4[3] == '\0');
    auVar13[4] = -(pcVar4[4] == '\0');
    auVar13[5] = -(pcVar4[5] == '\0');
    auVar13[6] = -(pcVar4[6] == '\0');
    auVar13[7] = -(pcVar4[7] == '\0');
    auVar13[8] = -(pcVar4[8] == '\0');
    auVar13[9] = -(pcVar4[9] == '\0');
    auVar13[10] = -(pcVar4[10] == '\0');
    auVar13[0xb] = -(pcVar4[0xb] == '\0');
    auVar13[0xc] = -(pcVar4[0xc] == '\0');
    auVar13[0xd] = -(pcVar4[0xd] == '\0');
    auVar13[0xe] = -(pcVar4[0xe] == '\0');
    auVar13[0xf] = -(pcVar4[0xf] == '\0');
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf) &
            -1 << ((byte)param_1 & 0xf);
    pcVar5 = pcVar4;
    if (uVar2 == 0) {
      do {
        pcVar4 = pcVar5 + 0x10;
        auVar10[0] = -(*pcVar4 == '\0');
        auVar10[1] = -(pcVar5[0x11] == '\0');
        auVar10[2] = -(pcVar5[0x12] == '\0');
        auVar10[3] = -(pcVar5[0x13] == '\0');
        auVar10[4] = -(pcVar5[0x14] == '\0');
        auVar10[5] = -(pcVar5[0x15] == '\0');
        auVar10[6] = -(pcVar5[0x16] == '\0');
        auVar10[7] = -(pcVar5[0x17] == '\0');
        auVar10[8] = -(pcVar5[0x18] == '\0');
        auVar10[9] = -(pcVar5[0x19] == '\0');
        auVar10[10] = -(pcVar5[0x1a] == '\0');
        auVar10[0xb] = -(pcVar5[0x1b] == '\0');
        auVar10[0xc] = -(pcVar5[0x1c] == '\0');
        auVar10[0xd] = -(pcVar5[0x1d] == '\0');
        auVar10[0xe] = -(pcVar5[0x1e] == '\0');
        auVar10[0xf] = -(pcVar5[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        pcVar5 = pcVar4;
      } while (uVar1 == 0);
    }
    uVar7 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    return (undefined1 (*) [16])(pcVar4 + uVar7);
  }
  if (DAT_1802a0468 < 2) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar13 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    uVar2 = -1 << ((byte)param_1 & 0xf);
    auVar11[0] = -(*pcVar4 == '\0');
    auVar11[1] = -(pcVar4[1] == '\0');
    auVar11[2] = -(pcVar4[2] == '\0');
    auVar11[3] = -(pcVar4[3] == '\0');
    auVar11[4] = -(pcVar4[4] == '\0');
    auVar11[5] = -(pcVar4[5] == '\0');
    auVar11[6] = -(pcVar4[6] == '\0');
    auVar11[7] = -(pcVar4[7] == '\0');
    auVar11[8] = -(pcVar4[8] == '\0');
    auVar11[9] = -(pcVar4[9] == '\0');
    auVar11[10] = -(pcVar4[10] == '\0');
    auVar11[0xb] = -(pcVar4[0xb] == '\0');
    auVar11[0xc] = -(pcVar4[0xc] == '\0');
    auVar11[0xd] = -(pcVar4[0xd] == '\0');
    auVar11[0xe] = -(pcVar4[0xe] == '\0');
    auVar11[0xf] = -(pcVar4[0xf] == '\0');
    cVar16 = auVar13[0];
    auVar15[0] = -(*pcVar4 == cVar16);
    cVar17 = auVar13[1];
    auVar15[1] = -(pcVar4[1] == cVar17);
    cVar18 = auVar13[2];
    auVar15[2] = -(pcVar4[2] == cVar18);
    cVar19 = auVar13[3];
    auVar15[3] = -(pcVar4[3] == cVar19);
    auVar15[4] = -(pcVar4[4] == cVar16);
    auVar15[5] = -(pcVar4[5] == cVar17);
    auVar15[6] = -(pcVar4[6] == cVar18);
    auVar15[7] = -(pcVar4[7] == cVar19);
    auVar15[8] = -(pcVar4[8] == cVar16);
    auVar15[9] = -(pcVar4[9] == cVar17);
    auVar15[10] = -(pcVar4[10] == cVar18);
    auVar15[0xb] = -(pcVar4[0xb] == cVar19);
    auVar15[0xc] = -(pcVar4[0xc] == cVar16);
    auVar15[0xd] = -(pcVar4[0xd] == cVar17);
    auVar15[0xe] = -(pcVar4[0xe] == cVar18);
    auVar15[0xf] = -(pcVar4[0xf] == cVar19);
    uVar7 = (ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf) & uVar2;
    uVar2 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf) & uVar2;
    pcVar5 = pcVar4;
    if (uVar2 == 0) {
      do {
        uVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
          }
        }
        if (uVar7 != 0) {
          pauVar6 = (undefined1 (*) [16])(pcVar5 + uVar2);
        }
        pcVar4 = pcVar5 + 0x10;
        auVar14[0] = -(*pcVar4 == '\0');
        auVar14[1] = -(pcVar5[0x11] == '\0');
        auVar14[2] = -(pcVar5[0x12] == '\0');
        auVar14[3] = -(pcVar5[0x13] == '\0');
        auVar14[4] = -(pcVar5[0x14] == '\0');
        auVar14[5] = -(pcVar5[0x15] == '\0');
        auVar14[6] = -(pcVar5[0x16] == '\0');
        auVar14[7] = -(pcVar5[0x17] == '\0');
        auVar14[8] = -(pcVar5[0x18] == '\0');
        auVar14[9] = -(pcVar5[0x19] == '\0');
        auVar14[10] = -(pcVar5[0x1a] == '\0');
        auVar14[0xb] = -(pcVar5[0x1b] == '\0');
        auVar14[0xc] = -(pcVar5[0x1c] == '\0');
        auVar14[0xd] = -(pcVar5[0x1d] == '\0');
        auVar14[0xe] = -(pcVar5[0x1e] == '\0');
        auVar14[0xf] = -(pcVar5[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        auVar12[0] = -(*pcVar4 == cVar16);
        auVar12[1] = -(pcVar5[0x11] == cVar17);
        auVar12[2] = -(pcVar5[0x12] == cVar18);
        auVar12[3] = -(pcVar5[0x13] == cVar19);
        auVar12[4] = -(pcVar5[0x14] == cVar16);
        auVar12[5] = -(pcVar5[0x15] == cVar17);
        auVar12[6] = -(pcVar5[0x16] == cVar18);
        auVar12[7] = -(pcVar5[0x17] == cVar19);
        auVar12[8] = -(pcVar5[0x18] == cVar16);
        auVar12[9] = -(pcVar5[0x19] == cVar17);
        auVar12[10] = -(pcVar5[0x1a] == cVar18);
        auVar12[0xb] = -(pcVar5[0x1b] == cVar19);
        auVar12[0xc] = -(pcVar5[0x1c] == cVar16);
        auVar12[0xd] = -(pcVar5[0x1d] == cVar17);
        auVar12[0xe] = -(pcVar5[0x1e] == cVar18);
        auVar12[0xf] = -(pcVar5[0x1f] == cVar19);
        uVar7 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf);
        pcVar5 = pcVar4;
      } while (uVar1 == 0);
    }
    uVar7 = (-uVar2 & uVar2) - 1 & uVar7;
    uVar2 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    if (uVar7 != 0) {
      pauVar6 = (undefined1 (*) [16])(pcVar4 + uVar2);
    }
  }
  else {
    for (; bVar8 = false, ((ulonglong)param_1 & 0xf) != 0; param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
      if ((*param_1)[0] == param_2) {
        pauVar6 = param_1;
      }
      if ((*param_1)[0] == '\0') {
        return pauVar6;
      }
    }
    bVar9 = true;
    while( true ) {
      iVar3 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar8) {
        pauVar6 = (undefined1 (*) [16])(*param_1 + iVar3);
        bVar9 = pauVar6 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar9) break;
      bVar8 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar9 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar6;
}



ushort * FUN_1802074fc(ushort *param_1,ushort param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ushort uVar7;
  ushort uVar8;

  auVar5 = pshuflw(in_XMM1,ZEXT416((uint)param_2),0);
  do {
    if (((uint)param_1 & 0xfff) < 0xff1) {
      auVar6._0_2_ = -(ushort)(*param_1 == 0);
      auVar6._2_2_ = -(ushort)(param_1[1] == 0);
      auVar6._4_2_ = -(ushort)(param_1[2] == 0);
      auVar6._6_2_ = -(ushort)(param_1[3] == 0);
      auVar6._8_2_ = -(ushort)(param_1[4] == 0);
      auVar6._10_2_ = -(ushort)(param_1[5] == 0);
      auVar6._12_2_ = -(ushort)(param_1[6] == 0);
      auVar6._14_2_ = -(ushort)(param_1[7] == 0);
      uVar7 = auVar5._0_2_;
      auVar4._0_2_ = -(ushort)(*param_1 == uVar7);
      uVar8 = auVar5._2_2_;
      auVar4._2_2_ = -(ushort)(param_1[1] == uVar8);
      auVar4._4_2_ = -(ushort)(param_1[2] == uVar7);
      auVar4._6_2_ = -(ushort)(param_1[3] == uVar8);
      auVar4._8_2_ = -(ushort)(param_1[4] == uVar7);
      auVar4._10_2_ = -(ushort)(param_1[5] == uVar8);
      auVar4._12_2_ = -(ushort)(param_1[6] == uVar7);
      auVar4._14_2_ = -(ushort)(param_1[7] == uVar8);
      auVar6 = auVar6 | auVar4;
      uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
      if (uVar7 != 0) {
        uVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        puVar3 = (ushort *)0x0;
        if ((uint)*(ushort *)((ulonglong)uVar1 + (longlong)param_1) == (uint)param_2) {
          puVar3 = (ushort *)((ulonglong)uVar1 + (longlong)param_1);
        }
        return puVar3;
      }
      lVar2 = 0x10;
    }
    else {
      if (*param_1 == param_2) {
        return param_1;
      }
      if (*param_1 == 0) {
        return (ushort *)0x0;
      }
      lVar2 = 2;
    }
    param_1 = (ushort *)((longlong)param_1 + lVar2);
  } while( true );
}



void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;

  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;

  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;

  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined8 FUN_180207600(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}



undefined1 (*) [32] FUN_180207610(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined2 uVar9;
  undefined4 uVar10;

  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_1802a0468 < 3) {
    if ((param_3 <= DAT_1802a0470) || (((byte)DAT_1802a9324 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      param_3 = param_3 + lVar11;
      if (0x80 < param_3) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          param_3 = param_3 - 0x80;
        } while (0x7f < param_3);
      }
      pauVar2 = (undefined1 (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_180250058 + (param_3 + 0xf >> 4) * 4) + 0x180000000))
                          (pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_1802a0470) || (DAT_1802a0478 < param_3)) || (((byte)DAT_1802a9324 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar6 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar6);
    param_3 = param_3 + lVar6;
    if (0x100 < param_3) {
      if (DAT_1802a0478 < param_3) {
        do {
          uVar5 = param_3;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          param_3 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar7 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar7) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar7) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar7) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar7) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar7) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar7) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar7) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
    pauVar2 = (undefined1 (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_180250010 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))
                        (lVar11,uVar5 - lVar6);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}



void FUN_1802079c0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



void FUN_1802079d0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;

  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (puVar26 <= param_1) {
    if (DAT_1802a0468 < 3) {
      if ((param_3 < 0x801) || (((byte)DAT_1802a9324 & 2) == 0)) {
        if (0x80 < param_3) {
          lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
          param_1 = (undefined8 *)((longlong)param_1 - lVar30);
          param_2 = (undefined8 *)((longlong)param_2 - lVar30);
          param_3 = param_3 + lVar30;
          if (0x80 < param_3) {
            do {
              uVar10 = param_2[1];
              uVar11 = param_2[2];
              uVar12 = param_2[3];
              uVar13 = param_2[4];
              uVar32 = param_2[5];
              uVar33 = param_2[6];
              uVar14 = param_2[7];
              *param_1 = *param_2;
              param_1[1] = uVar10;
              param_1[2] = uVar11;
              param_1[3] = uVar12;
              param_1[4] = uVar13;
              param_1[5] = uVar32;
              param_1[6] = uVar33;
              param_1[7] = uVar14;
              uVar10 = param_2[9];
              uVar11 = param_2[10];
              uVar12 = param_2[0xb];
              uVar13 = param_2[0xc];
              uVar32 = param_2[0xd];
              uVar33 = param_2[0xe];
              uVar14 = param_2[0xf];
              param_1[8] = param_2[8];
              param_1[9] = uVar10;
              param_1[10] = uVar11;
              param_1[0xb] = uVar12;
              param_1[0xc] = uVar13;
              param_1[0xd] = uVar32;
              param_1[0xe] = uVar33;
              param_1[0xf] = uVar14;
              param_1 = param_1 + 0x10;
              param_2 = param_2 + 0x10;
              param_3 = param_3 - 0x80;
            } while (0x7f < param_3);
          }
        }
        (*(code *)((ulonglong)*(uint *)(&DAT_180250108 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
        return;
      }
    }
    else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_1802a9324 & 2) == 0)) {
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
      uVar32 = *puVar26;
      uVar33 = puVar26[1];
      uVar14 = puVar26[2];
      uVar15 = puVar26[3];
      if (0x100 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
        pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
        pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x100 < param_3) {
          if (0x180000 < param_3) {
            do {
              uVar29 = param_3;
              pauVar28 = pauVar27;
              pauVar24 = pauVar23;
              auVar3 = pauVar28[1];
              auVar4 = pauVar28[2];
              auVar5 = pauVar28[3];
              auVar6 = vmovntdq_avx(*pauVar28);
              *pauVar24 = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[1] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[2] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[3] = auVar3;
              auVar3 = pauVar28[5];
              auVar4 = pauVar28[6];
              auVar5 = pauVar28[7];
              auVar6 = vmovntdq_avx(pauVar28[4]);
              pauVar24[4] = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[5] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[6] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[7] = auVar3;
              pauVar23 = pauVar24 + 8;
              pauVar27 = pauVar28 + 8;
              param_3 = uVar29 - 0x100;
            } while (0xff < uVar29 - 0x100);
            uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
            switch(uVar29) {
            case 0x1e1:
            case 0x1e2:
            case 0x1e3:
            case 0x1e4:
            case 0x1e5:
            case 0x1e6:
            case 0x1e7:
            case 0x1e8:
            case 0x1e9:
            case 0x1ea:
            case 0x1eb:
            case 0x1ec:
            case 0x1ed:
            case 0x1ee:
            case 0x1ef:
            case 0x1f0:
            case 0x1f1:
            case 0x1f2:
            case 499:
            case 500:
            case 0x1f5:
            case 0x1f6:
            case 0x1f7:
            case 0x1f8:
            case 0x1f9:
            case 0x1fa:
            case 0x1fb:
            case 0x1fc:
            case 0x1fd:
            case 0x1fe:
            case 0x1ff:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
              *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
            case 0x1c1:
            case 0x1c2:
            case 0x1c3:
            case 0x1c4:
            case 0x1c5:
            case 0x1c6:
            case 0x1c7:
            case 0x1c8:
            case 0x1c9:
            case 0x1ca:
            case 0x1cb:
            case 0x1cc:
            case 0x1cd:
            case 0x1ce:
            case 0x1cf:
            case 0x1d0:
            case 0x1d1:
            case 0x1d2:
            case 0x1d3:
            case 0x1d4:
            case 0x1d5:
            case 0x1d6:
            case 0x1d7:
            case 0x1d8:
            case 0x1d9:
            case 0x1da:
            case 0x1db:
            case 0x1dc:
            case 0x1dd:
            case 0x1de:
            case 0x1df:
            case 0x1e0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
              *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
            case 0x1a1:
            case 0x1a2:
            case 0x1a3:
            case 0x1a4:
            case 0x1a5:
            case 0x1a6:
            case 0x1a7:
            case 0x1a8:
            case 0x1a9:
            case 0x1aa:
            case 0x1ab:
            case 0x1ac:
            case 0x1ad:
            case 0x1ae:
            case 0x1af:
            case 0x1b0:
            case 0x1b1:
            case 0x1b2:
            case 0x1b3:
            case 0x1b4:
            case 0x1b5:
            case 0x1b6:
            case 0x1b7:
            case 0x1b8:
            case 0x1b9:
            case 0x1ba:
            case 0x1bb:
            case 0x1bc:
            case 0x1bd:
            case 0x1be:
            case 0x1bf:
            case 0x1c0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
              *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
            case 0x181:
            case 0x182:
            case 0x183:
            case 0x184:
            case 0x185:
            case 0x186:
            case 0x187:
            case 0x188:
            case 0x189:
            case 0x18a:
            case 0x18b:
            case 0x18c:
            case 0x18d:
            case 0x18e:
            case 399:
            case 400:
            case 0x191:
            case 0x192:
            case 0x193:
            case 0x194:
            case 0x195:
            case 0x196:
            case 0x197:
            case 0x198:
            case 0x199:
            case 0x19a:
            case 0x19b:
            case 0x19c:
            case 0x19d:
            case 0x19e:
            case 0x19f:
            case 0x1a0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
              *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
            case 0x161:
            case 0x162:
            case 0x163:
            case 0x164:
            case 0x165:
            case 0x166:
            case 0x167:
            case 0x168:
            case 0x169:
            case 0x16a:
            case 0x16b:
            case 0x16c:
            case 0x16d:
            case 0x16e:
            case 0x16f:
            case 0x170:
            case 0x171:
            case 0x172:
            case 0x173:
            case 0x174:
            case 0x175:
            case 0x176:
            case 0x177:
            case 0x178:
            case 0x179:
            case 0x17a:
            case 0x17b:
            case 0x17c:
            case 0x17d:
            case 0x17e:
            case 0x17f:
            case 0x180:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
              *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
            case 0x141:
            case 0x142:
            case 0x143:
            case 0x144:
            case 0x145:
            case 0x146:
            case 0x147:
            case 0x148:
            case 0x149:
            case 0x14a:
            case 0x14b:
            case 0x14c:
            case 0x14d:
            case 0x14e:
            case 0x14f:
            case 0x150:
            case 0x151:
            case 0x152:
            case 0x153:
            case 0x154:
            case 0x155:
            case 0x156:
            case 0x157:
            case 0x158:
            case 0x159:
            case 0x15a:
            case 0x15b:
            case 0x15c:
            case 0x15d:
            case 0x15e:
            case 0x15f:
            case 0x160:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
              *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
            case 0x121:
            case 0x122:
            case 0x123:
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x129:
            case 0x12a:
            case 299:
            case 300:
            case 0x12d:
            case 0x12e:
            case 0x12f:
            case 0x130:
            case 0x131:
            case 0x132:
            case 0x133:
            case 0x134:
            case 0x135:
            case 0x136:
            case 0x137:
            case 0x138:
            case 0x139:
            case 0x13a:
            case 0x13b:
            case 0x13c:
            case 0x13d:
            case 0x13e:
            case 0x13f:
            case 0x140:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
              *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
            default:
              puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
              *puVar26 = uVar32;
              puVar26[1] = uVar33;
              puVar26[2] = uVar14;
              puVar26[3] = uVar15;
            case 0x100:
              *param_1 = uVar10;
              param_1[1] = uVar11;
              param_1[2] = uVar12;
              param_1[3] = uVar13;
              return;
            }
          }
          do {
            uVar10 = *(undefined8 *)(*pauVar27 + 8);
            uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
            uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
            uVar13 = *(undefined8 *)pauVar27[1];
            uVar32 = *(undefined8 *)(pauVar27[1] + 8);
            uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
            uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
            uVar15 = *(undefined8 *)pauVar27[2];
            uVar16 = *(undefined8 *)(pauVar27[2] + 8);
            uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
            uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
            uVar19 = *(undefined8 *)pauVar27[3];
            uVar20 = *(undefined8 *)(pauVar27[3] + 8);
            uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
            uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
            *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
            *(undefined8 *)(*pauVar23 + 8) = uVar10;
            *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
            *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
            *(undefined8 *)pauVar23[1] = uVar13;
            *(undefined8 *)(pauVar23[1] + 8) = uVar32;
            *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[2] = uVar15;
            *(undefined8 *)(pauVar23[2] + 8) = uVar16;
            *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[3] = uVar19;
            *(undefined8 *)(pauVar23[3] + 8) = uVar20;
            *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
            uVar10 = *(undefined8 *)(pauVar27[4] + 8);
            uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
            uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
            uVar13 = *(undefined8 *)pauVar27[5];
            uVar32 = *(undefined8 *)(pauVar27[5] + 8);
            uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
            uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
            uVar15 = *(undefined8 *)pauVar27[6];
            uVar16 = *(undefined8 *)(pauVar27[6] + 8);
            uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
            uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
            uVar19 = *(undefined8 *)pauVar27[7];
            uVar20 = *(undefined8 *)(pauVar27[7] + 8);
            uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
            uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
            *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
            *(undefined8 *)(pauVar23[4] + 8) = uVar10;
            *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
            *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
            *(undefined8 *)pauVar23[5] = uVar13;
            *(undefined8 *)(pauVar23[5] + 8) = uVar32;
            *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[6] = uVar15;
            *(undefined8 *)(pauVar23[6] + 8) = uVar16;
            *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[7] = uVar19;
            *(undefined8 *)(pauVar23[7] + 8) = uVar20;
            *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
            pauVar23 = pauVar23 + 8;
            pauVar27 = pauVar27 + 8;
            param_3 = param_3 - 0x100;
          } while (0xff < param_3);
        }
      }
      (*(code *)((ulonglong)*(uint *)(&DAT_1802500c0 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar26;
  uVar13 = puVar26[1];
  puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar26 = puVar25;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar25 & 0xf) != 0) {
    puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    *puVar25 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar26 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar25 = puVar26;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
      uVar13 = *puVar26;
      uVar32 = puVar26[1];
      puVar26 = puVar25 + -0x10;
      puVar25[-2] = *puVar1;
      puVar25[-1] = uVar12;
      puVar25[-4] = uVar13;
      puVar25[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar25[-6] = *puVar1;
      puVar25[-5] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar25[-10] = *puVar1;
      puVar25[-9] = uVar12;
      puVar25[-0xc] = uVar13;
      puVar25[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      *puVar26 = uVar32;
      puVar25[-0xf] = uVar33;
      puVar25 = puVar26;
    }
    puVar25[-0xe] = uVar12;
    puVar25[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar26 = puVar26 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar26 = uVar32;
  puVar26[1] = uVar33;
  return;
}



int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;

  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    for (; ((ulonglong)_Buf1 & 7) != 0; _Buf1 = (void *)((longlong)_Buf1 + 1)) {
      bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
      if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) goto LAB_180208093;
      _Size = _Size - 1;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) goto LAB_180208104;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 8)) {
LAB_180208100:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180208104;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x10)) {
LAB_1802080fc:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180208100;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x18)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_1802080fc;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) {
LAB_180208104:
            uVar4 = *(ulonglong *)(lVar3 + (longlong)_Buf1);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
                            (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
                           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
    bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
    if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_180208093:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}



size_t __cdecl strlen(char *_Str)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;

  lVar3 = -(longlong)_Str;
  do {
    if (((ulonglong)_Str & 7) == 0) goto LAB_180208171;
    uVar1 = *(ulonglong *)_Str;
    _Str = (char *)((longlong)_Str + 1);
  } while ((char)uVar1 != '\0');
LAB_1802081b8:
  return (size_t)(char *)((longlong)_Str + lVar3 + -1);
LAB_180208171:
  do {
    do {
      puVar2 = (ulonglong *)_Str;
      _Str = (char *)(puVar2 + 1);
    } while (((~*puVar2 ^ *puVar2 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar1 = *puVar2;
    if ((char)uVar1 == '\0') {
      return (longlong)puVar2 + lVar3;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 1);
    }
    if ((char)(uVar1 >> 0x10) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 2);
    }
    if ((char)(uVar1 >> 0x18) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 3);
    }
    if ((char)(uVar1 >> 0x20) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 4);
    }
    if ((char)(uVar1 >> 0x28) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 5);
    }
    if ((char)(uVar1 >> 0x30) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 6);
    }
  } while ((char)(uVar1 >> 0x38) != '\0');
  goto LAB_1802081b8;
}



int __cdecl strcmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;

  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  while( true ) {
    if (((ulonglong)_Str1 & 7) == 0) {
      while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
        _Str1 = (char *)((longlong)_Str1 + 8);
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (byte)*(ulonglong *)_Str1;
    if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) break;
    _Str1 = (char *)((longlong)_Str1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
}



int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;

  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    do {
      if (((ulonglong)_Str1 & 7) == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
    } while ((_MaxCount != 0) && (bVar1 != 0));
  }
  return 0;
}



bool FUN_180208300(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_180208318(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(undefined1 *)(param_2 + 0x40));
  return;
}



void FUN_18020832f(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(undefined1 *)(param_2 + 0x20));
  return;
}



void FUN_180208348(void)

{
  FUN_1801d64ac();
  return;
}



void FUN_18020835c(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70),
             FUN_1801d66c4,*(undefined4 *)*param_1,param_1);
  return;
}



undefined8 FUN_1802083aa(void)

{
  return 0;
}



undefined4 FUN_1802083c8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;

  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = FUN_1801dd724();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_1801dd724();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  thunk_FUN_1801df3e4(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80),
                      lVar2,*(undefined8 *)(param_2 + 0x90),0,0,1);
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



undefined4 FUN_18020846f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;

  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = FUN_1801dd724();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_1801dd724();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  lVar3 = FUN_1801dd724();
  *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_2 + 0xa8);
  FUN_1801df8c4(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80),lVar2,
                *(undefined8 *)(param_2 + 0x90),0,0,1);
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



undefined4 FUN_180208524(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;

  *(undefined8 *)(param_2 + 0x30) = param_1;
  if (*(char *)(param_2 + 0x58) != '\0') {
    *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
    if (((**(int **)(param_2 + 0x28) == -0x1f928c9d) && (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
       ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
        ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521 ||
         (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))))) {
      lVar2 = FUN_1801dd724();
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
      lVar2 = FUN_1801dd724();
      *(undefined8 *)(lVar2 + 0x28) = uVar1;
      FUN_1801f1600();
    }
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



void FUN_1802085b6(void)

{
  longlong lVar1;

  lVar1 = FUN_1801dd724();
  *(undefined4 *)(lVar1 + 0x78) = 0xfffffffe;
  return;
}



void FUN_1802085d2(undefined8 param_1,longlong param_2)

{
  FUN_1801e008c(param_1,*(undefined8 *)(param_2 + 0xb8),param_2 + 0x20);
  return;
}



void FUN_1802085f3(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;

  FUN_1801dcf14(*(undefined8 *)(param_2 + 0x38));
  if ((((*(int *)(param_2 + 0x20) == 0) && (piVar1 = *(int **)(param_2 + 0xb8), *piVar1 == -0x1f928c9d)) &&
      (piVar1[6] == 4)) && (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_1801dd260(piVar1,1);
    }
  }
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0xc0);
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x40);
  return;
}



void FUN_180208679(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0xd8),*(int *)(param_2 + 200),(int *)(param_2 + 0x20));
  return;
}



void FUN_1802086a1(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;

  FUN_1801dcf14(*(undefined8 *)(param_2 + 0x40));
  if ((((*(int *)(param_2 + 0x20) == 0) && (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) &&
      (piVar1[6] == 4)) && (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_1801dd260(piVar1,1);
    }
  }
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  lVar2 = FUN_1801dd724();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x48);
  lVar2 = FUN_1801dd724();
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_2 + 0xc0);
  return;
}



void FUN_180208732(void)

{
  FUN_1801dd32c();
  return;
}



void FUN_180208748(void)

{
  longlong lVar1;

  lVar1 = FUN_1801dd724();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_1801dd724();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



void FUN_18020876b(void)

{
  FUN_1801dd32c();
  return;
}



void FUN_180208781(void)

{
  longlong lVar1;

  lVar1 = FUN_1801dd724();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_1801dd724();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



void FUN_1802087a4(undefined8 param_1,longlong param_2)

{
  FUN_1801e2318(**(undefined8 **)(param_2 + 0x48));
  return;
}



void FUN_1802087bf(undefined8 param_1,longlong param_2)

{
  FUN_1801e2318(*(undefined8 *)(param_2 + 0x40));
  return;
}



void FUN_1802087d7(undefined8 param_1,longlong param_2)

{
  FUN_1801e2318(*(undefined8 *)(param_2 + 0x58));
  return;
}



void FUN_1802087f1(undefined8 param_1,longlong param_2)

{
  FUN_1801e2318(*(undefined8 *)(param_2 + 0x38));
  return;
}



void FUN_180208809(undefined8 param_1,longlong param_2)

{
  FUN_1801e2318(*(undefined8 *)(param_2 + 0x40));
  return;
}



void FUN_180208823(undefined8 param_1,longlong param_2)

{
  FUN_1801e2318(*(undefined8 *)(param_2 + 0x60));
  return;
}



void FUN_18020883b(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x98));
  return;
}



void FUN_180208858(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_1801e2318(*(undefined8 *)(param_2 + 0x40));
  return;
}



void FUN_180208890(void)

{
  __acrt_unlock(0);
  return;
}



void FUN_1802088a6(void)

{
  __acrt_unlock(0);
  return;
}



void FUN_1802088bc(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x48));
  return;
}



undefined4 FUN_1802088d6(undefined8 *param_1,longlong param_2)

{
  int iVar1;

  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}



void FUN_180208903(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x58));
  return;
}



void FUN_18020891d(undefined8 param_1,longlong param_2)

{
  uint *puVar1;

  puVar1 = (uint *)(*(longlong *)**(undefined8 **)(param_2 + 0x48) + 0x3a8);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}



void FUN_18020893e(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(undefined4 *)(param_2 + 0x60));
  return;
}



void FUN_180208955(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(**(undefined4 **)(param_2 + 0x48));
  return;
}



void FUN_18020896f(void)

{
  __acrt_unlock(8);
  return;
}



void FUN_180208988(void)

{
  __acrt_unlock(7);
  return;
}



void FUN_1802089a1(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(undefined4 *)(param_2 + 0x40));
  return;
}



undefined8 FUN_1802089c0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;

  *(undefined8 **)(param_2 + 0x10) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 8) = iVar1;
  if ((iVar1 == -0x3ffffffb) || (iVar1 == -0x3fffffe3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_1802089ed(void)

{
  __acrt_unlock(6);
  return;
}



void FUN_180208a06(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x68));
  return;
}



void FUN_180208a20(void)

{
  __acrt_unlock(5);
  return;
}



void FUN_180208a39(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}



void FUN_180208a5a(void)

{
  __acrt_unlock(4);
  return;
}



void FUN_180208a73(undefined8 param_1,longlong param_2)

{
  uint *puVar1;

  if (*(int *)(param_2 + 0x40) != 0) {
    if (*(int *)(param_2 + 0x44) != 0) {
      puVar1 = *(uint **)(param_2 + 0x80);
      *(byte *)((&DAT_1802a9d80)[(longlong)(int)*puVar1 >> 6] + 0x38 + (ulonglong)(*puVar1 & 0x3f) * 0x48) =
           *(byte *)((&DAT_1802a9d80)[(longlong)(int)*puVar1 >> 6] + 0x38 + (ulonglong)(*puVar1 & 0x3f) * 0x48) & 0xfe;
    }
    __acrt_lowio_unlock_fh(**(undefined4 **)(param_2 + 0x80));
  }
  return;
}



void FUN_180208aeb(void)

{
  __acrt_unlock(0xb);
  return;
}



undefined8 _ctrlfp_filt_0(undefined8 *param_1)

{
  undefined8 uVar1;

  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_180208b3e(void)

{
  return 0;
}



bool FUN_180208b60(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_180208b80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  while (puVar1 = DAT_1802a9390, DAT_1802a9390 != (undefined8 *)0x0) {
    puVar2 = DAT_1802a9390 + 1;
    DAT_1802a9390 = (undefined8 *)*DAT_1802a9390;
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)*puVar2 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    thunk_FUN_1801f42e0(puVar1);
  }
  return;
}



void FUN_180208bd8(void)

{
  undefined8 *puVar1;

  if (DAT_1802a9380 != 0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)DAT_1802a9380 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}


