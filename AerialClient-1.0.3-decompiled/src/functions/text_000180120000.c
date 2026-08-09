#include "../include/aerialclient_types.h"


void Unwind_1801208f0(void)

{
  FUN_1801da26c(&DAT_18027e9d8);
  return;
}



void Unwind_180120930(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_180120970(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1801209b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1b0);
  return;
}



void FUN_1801209f0(void)

{
  code *pcVar1;

  FUN_1801223d8(&DAT_1802a488c,&DAT_18027fd3f,0x19,0x1d,&DAT_1802a48ac);
  FUN_1801d7548(&DAT_1802a488c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



longlong FUN_180120a30(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;

  uVar13 = *param_1;
  uVar12 = ((longlong)(param_1[1] - uVar13) >> 6) + 1;
  uVar7 = (longlong)(param_1[2] - uVar13) >> 6;
  uVar11 = (uVar7 >> 1) + uVar7;
  if (uVar11 <= uVar12) {
    uVar11 = uVar12;
  }
  if (0x3ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar11 = 0x3ffffffffffffff;
  }
  if (0x3ffffffffffffff < uVar11) {
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar11 == 0) {
    uVar7 = 0;
  }
  else if (uVar11 < 0x40) {
    uVar7 = FUN_1801d61c8(uVar11 << 6);
  }
  else {
    lVar8 = FUN_1801d61c8(uVar11 << 6 | 0x27);
    uVar7 = lVar8 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar7 - 8) = lVar8;
  }
  lVar8 = uVar7 + (param_2 - uVar13);
  lVar14 = (param_2 - uVar13) + uVar7;
  FUN_180120f30(lVar8,param_3,param_4);
  uVar15 = *param_1;
  uVar13 = param_1[1];
  if (param_2 == uVar13) {
    if (uVar15 == param_2) goto LAB_180120deb;
    lVar14 = 0;
    do {
      puVar2 = (undefined8 *)(uVar7 + 0x10 + lVar14);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(uVar7 + lVar14) = 0;
      ((undefined8 *)(uVar7 + lVar14))[1] = 0;
      uVar4 = ((undefined8 *)(uVar15 + lVar14))[1];
      puVar2 = (undefined8 *)(uVar15 + 0x10 + lVar14);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      *(undefined8 *)(uVar7 + lVar14) = *(undefined8 *)(uVar15 + lVar14);
      ((undefined8 *)(uVar7 + lVar14))[1] = uVar4;
      puVar2 = (undefined8 *)(uVar7 + 0x10 + lVar14);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      *(undefined8 *)(uVar15 + 0x10 + lVar14) = 0;
      *(undefined8 *)(uVar15 + 0x18 + lVar14) = 0xf;
      *(undefined1 *)(uVar15 + lVar14) = 0;
      puVar2 = (undefined8 *)(uVar7 + 0x30 + lVar14);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(uVar7 + 0x20 + lVar14);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(uVar15 + 0x20 + lVar14);
      uVar4 = puVar2[1];
      puVar3 = (undefined8 *)(uVar15 + 0x30 + lVar14);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      puVar3 = (undefined8 *)(uVar7 + 0x20 + lVar14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar2 = (undefined8 *)(uVar7 + 0x30 + lVar14);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      *(undefined8 *)(uVar15 + 0x30 + lVar14) = 0;
      *(undefined8 *)(uVar15 + 0x38 + lVar14) = 0xf;
      *(undefined1 *)(uVar15 + 0x20 + lVar14) = 0;
      lVar9 = uVar15 + lVar14;
      lVar14 = lVar14 + 0x40;
    } while (lVar9 + 0x40U != param_2);
  }
  else {
    if (uVar15 != param_2) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)(uVar7 + 0x10 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(uVar7 + lVar9) = 0;
        ((undefined8 *)(uVar7 + lVar9))[1] = 0;
        uVar4 = ((undefined8 *)(uVar15 + lVar9))[1];
        puVar2 = (undefined8 *)(uVar15 + 0x10 + lVar9);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        *(undefined8 *)(uVar7 + lVar9) = *(undefined8 *)(uVar15 + lVar9);
        ((undefined8 *)(uVar7 + lVar9))[1] = uVar4;
        puVar2 = (undefined8 *)(uVar7 + 0x10 + lVar9);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(uVar15 + 0x10 + lVar9) = 0;
        *(undefined8 *)(uVar15 + 0x18 + lVar9) = 0xf;
        *(undefined1 *)(uVar15 + lVar9) = 0;
        puVar2 = (undefined8 *)(uVar7 + 0x30 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(uVar7 + 0x20 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(uVar15 + 0x20 + lVar9);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(uVar15 + 0x30 + lVar9);
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        puVar3 = (undefined8 *)(uVar7 + 0x20 + lVar9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(uVar7 + 0x30 + lVar9);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(uVar15 + 0x30 + lVar9) = 0;
        *(undefined8 *)(uVar15 + 0x38 + lVar9) = 0xf;
        *(undefined1 *)(uVar15 + 0x20 + lVar9) = 0;
        lVar1 = uVar15 + lVar9;
        lVar9 = lVar9 + 0x40;
      } while (lVar1 + 0x40U != param_2);
      uVar13 = param_1[1];
    }
    if (param_2 != uVar13) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)(lVar14 + 0x50 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar14 + 0x40 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar4 = ((undefined8 *)(param_2 + lVar9))[1];
        puVar2 = (undefined8 *)(param_2 + 0x10 + lVar9);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar14 + 0x40 + lVar9);
        *puVar2 = *(undefined8 *)(param_2 + lVar9);
        puVar2[1] = uVar4;
        puVar2 = (undefined8 *)(lVar14 + 0x50 + lVar9);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(param_2 + 0x10 + lVar9) = 0;
        *(undefined8 *)(param_2 + 0x18 + lVar9) = 0xf;
        *(undefined1 *)(param_2 + lVar9) = 0;
        puVar2 = (undefined8 *)(lVar14 + 0x70 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar14 + 0x60 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(param_2 + 0x20 + lVar9);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(param_2 + 0x30 + lVar9);
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        puVar3 = (undefined8 *)(lVar14 + 0x60 + lVar9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(lVar14 + 0x70 + lVar9);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(param_2 + 0x30 + lVar9) = 0;
        *(undefined8 *)(param_2 + 0x38 + lVar9) = 0xf;
        *(undefined1 *)(param_2 + 0x20 + lVar9) = 0;
        lVar1 = param_2 + lVar9;
        lVar9 = lVar9 + 0x40;
      } while (lVar1 + 0x40U != uVar13);
    }
  }
  uVar15 = *param_1;
LAB_180120deb:
  if (uVar15 != 0) {
    uVar13 = param_1[1];
    if (uVar15 != uVar13) {
      do {
        FUN_18011f290(uVar15);
        uVar15 = uVar15 + 0x40;
      } while (uVar15 != uVar13);
      uVar15 = *param_1;
    }
    uVar10 = param_1[2] - uVar15;
    uVar13 = uVar15;
    if (0xfff < uVar10) {
      uVar13 = *(ulonglong *)(uVar15 - 8);
      if (0x1f < (uVar15 - uVar13) - 8) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = uVar10 | 0x27;
    }
    thunk_FUN_1801f42e0(uVar13,uVar10);
  }
  *param_1 = uVar7;
  param_1[1] = uVar12 * 0x40 + uVar7;
  param_1[2] = uVar11 * 0x40 + uVar7;
  return lVar8;
}



void Unwind_180120ef0(undefined8 param_1,longlong param_2)

{
  FUN_1801211b0(param_2 + 0x30);
  return;
}



undefined8 * FUN_180120f30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;

  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((longlong)uVar2 < 0) {
    FUN_180002ac0();
  }
  uVar6 = 0xf;
  puVar5 = param_1;
  if (0xf < uVar2) {
    uVar3 = uVar2 | 0xf;
    uVar6 = 0x16;
    if (0x16 < uVar3) {
      uVar6 = uVar3;
    }
    if (uVar3 < 0xfff) {
      puVar5 = (undefined8 *)FUN_1801d61c8(uVar6 + 1);
    }
    else {
      lVar4 = FUN_1801d61c8(uVar6 + 0x28);
      puVar5 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      puVar5[-1] = lVar4;
    }
    *param_1 = puVar5;
  }
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  FUN_1802079d0(puVar5,uVar1,uVar2);
  *(undefined1 *)((longlong)puVar5 + uVar2) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  if (-1 < (longlong)uVar2) {
    uVar6 = 0xf;
    puVar5 = param_1 + 4;
    if (0xf < uVar2) {
      uVar3 = uVar2 | 0xf;
      uVar6 = 0x16;
      if (0x16 < uVar3) {
        uVar6 = uVar3;
      }
      if (uVar3 < 0xfff) {
        puVar5 = (undefined8 *)FUN_1801d61c8(uVar6 + 1);
      }
      else {
        lVar4 = FUN_1801d61c8(uVar6 + 0x28);
        puVar5 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        puVar5[-1] = lVar4;
      }
      param_1[4] = puVar5;
    }
    param_1[6] = uVar2;
    param_1[7] = uVar6;
    FUN_1802079d0(puVar5,uVar1,uVar2);
    *(undefined1 *)((longlong)puVar5 + uVar2) = 0;
    return param_1;
  }
  FUN_180002ac0();
}



void Unwind_180121170(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x60));
  return;
}



void FUN_1801211b0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_98 = 0xcee0a5f346bce88;
  local_a0 = 0x1ad0d20eb52e4f2d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_98 ^ 0xc6a5e49467c88378;
            uVar1 = local_98 ^ local_a0;
            local_a0 = local_a0 ^ 0xc6a5e49467c88378;
            local_98 = uVar2;
            if (0x2783e1e60e001ed2 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x45e0bab53bf4e023) {
              if (uVar1 == 0x86c4c35d84a7b4a1) {
                local_88 = local_78;
                local_90 = *(longlong *)(param_1 + 0x10) << 6;
                local_98 = 0xb15bc59548b02009;
                if (0xfff < local_90) {
                  local_98 = 0x4ce75c756730ed75;
                }
                local_a0 = 0xfac6d04638bfd964;
                local_58 = local_90;
                local_48 = local_88;
              }
              else if (uVar1 == 0xb6218c335f8f3411) {
                local_60 = *(longlong *)(local_48 + -8);
                local_98 = 0x26152ed1d9f3a78;
                if ((local_48 - local_60) - 8U < 0x20) {
                  local_98 = 0xec693553253b37e0;
                }
                local_a0 = 0x56767019e130283d;
              }
            }
            else if (uVar1 == 0xba1f454ac40b1fdd) {
              local_90 = local_58 + 0x27;
              local_98 = 0x5e76a797005f2bc;
              local_a0 = 0x4e7a7faa000a0bd1;
              local_88 = local_60;
            }
            else if (uVar1 == 0x163ed851814581a5) {
              local_70 = (longlong *)(param_1 + 8);
              local_68 = *(longlong *)(param_1 + 8);
              local_98 = 0xa5b4656491da22b1;
              if (local_68 == 0) {
                local_98 = 0xfd1b5dd616798df5;
              }
              local_a0 = 0xd18860c73c494a80;
            }
          }
          if ((longlong)uVar1 < 0x4b9d15d3700ff96d) break;
          if (uVar1 == 0x4b9d15d3700ff96d) {
            thunk_FUN_1801f42e0(local_88,local_90);
            local_98 = 0xceb9d8e398881e2b;
            local_a0 = 0xe22ae5f2b2b8d95e;
          }
          else if (uVar1 == 0x743c05a3ad936831) {
            local_50 = *(longlong *)(param_1 + 0x20);
            local_80 = *(longlong *)(param_1 + 0x18);
            local_98 = 0x912565c8fe994802;
            if (local_80 == local_50) {
              local_98 = 0x30624773743ee270;
            }
            local_a0 = 0xb6a6842ef09956d1;
            local_78 = local_68;
          }
          else if (uVar1 == 0x541722f4fcaf1245) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        if (uVar1 != 0x2783e1e60e001ed3) break;
        FUN_18011f290(local_80);
        local_80 = local_80 + 0x40;
        local_98 = 0x452cf7d3d0aaad68;
        if (local_80 == local_50) {
          local_98 = 0x58bb987559d245e5;
        }
        local_a0 = 0x62af1635deaab3bb;
      }
      if (uVar1 != 0x3a148e408778f65e) break;
      local_78 = *local_70;
      local_98 = 0xb0e8a8074ccc7dfe;
      local_a0 = 0x362c6b5ac86bc95f;
    }
  } while (uVar1 != 0x2c933d112a30c775);
  return;
}



void FUN_180121610(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  int local_54;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_54 = 1;
  local_60 = param_3;
  plVar5 = (longlong *)FUN_1801d61c8(0x50);
  plVar1 = local_60;
  *(int *)(plVar5 + 1) = local_54;
  *(int *)((longlong)plVar5 + 0xc) = local_54;
  *plVar5 = (longlong)&PTR_FUN_1802185e0;
  plVar7 = plVar5 + 2;
  plVar5[9] = 0;
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == local_60) {
      lVar6 = (**(code **)(*plVar4 + 8))(plVar4,plVar7);
      plVar5[9] = lVar6;
      plVar4 = (longlong *)plVar1[7];
      if (plVar4 == (longlong *)0x0) goto LAB_1801216d6;
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar1);
    }
    else {
      plVar5[9] = (longlong)plVar4;
    }
    plVar1[7] = 0;
  }
LAB_1801216d6:
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  local_80 = FUN_180121d80;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = FUN_180121d80;
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = plVar7;
  local_b0 = plVar5;
  local_a0 = param_2;
  local_98 = param_4;
  local_78 = plVar7;
  local_70 = plVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3e28)
     && (FUN_1801d62d8(&DAT_1802a3e28), DAT_1802a3e28 == -1)) {
    DAT_1802a3e24 = DAT_1802a3dec;
    DAT_1802a3dec = local_54 + DAT_1802a3dec;
    _Init_thread_footer(&DAT_1802a3e28);
  }
  FUN_1800baf30(param_1,DAT_1802a3e24,&local_c8);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == local_54) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_54) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != local_60);
  }
  return;
}



void Unwind_180121860(undefined8 param_1,longlong param_2)

{
  FUN_1800bb120(param_2 + 0x48);
  FUN_180121900(param_2 + 0x70);
  return;
}



void Unwind_1801218b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = (longlong *)(*(longlong **)(param_2 + 0x88))[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x88));
  }
  return;
}



void FUN_180121900(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  longlong *local_48;

  local_58 = 0x648077fcc69ca481;
  local_60 = 0x273241457535217d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0xd0491c1fda1d08bf;
          if (0x5f41a6b18b61b075 < (longlong)uVar5) break;
          if (uVar5 == 0xaaee829cfc753177) {
            LOCK();
            plVar2 = local_48 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            local_58 = 0xc439556556d8b091;
            if ((int)lVar4 == local_4c) {
              local_58 = 0xe8a76802442e0692;
            }
            local_60 = 0xb7e6ceb3cf4fb6e4;
          }
          else {
            local_58 = local_58 ^ 0xd0491c1fda1d08bf;
            if (uVar5 == 0x43b236b9b3a985fc) {
              local_4c = 1;
              local_48 = *(longlong **)(param_1 + 8);
              local_58 = 0x14fc8ff1c3fbc917;
              if (local_48 == (longlong *)0x0) {
                local_58 = 0xcdcd96bba619fe15;
              }
              local_60 = 0xbe120d6d3f8ef860;
            }
          }
        }
        if (uVar5 != 0x5f41a6b18b61b076) break;
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = 0x1b0294ae948e28c0;
        if (iVar3 == local_4c) {
          local_58 = 0x18750774105dd529;
        }
        local_60 = 0x68dd0f780d192eb5;
      }
      if (uVar5 != 0x70a8080c1d44fb9c) break;
      (**(code **)(*local_48 + 8))();
      local_58 = 0x74fdd223774512a6;
      local_60 = 0x72249f5eed214d3;
    }
    local_58 = local_58 ^ 0xd0491c1fda1d08bf;
  } while (uVar5 != 0x73df9bd699970675);
  return;
}



void FUN_180121ae0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_58 = 0x94fa9170ca9cacc6;
  local_60 = 0x13a713aaf66b276f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_58 ^ local_60;
        local_60 = local_60 ^ 0xe49507014c0b3775;
        if (uVar1 != 0x875d82da3cf78ba9) break;
        local_50 = (undefined8 *)(param_1 + 0x48);
        local_48 = *(longlong **)(param_1 + 0x48);
        local_58 = 0x63d9bc9e9e4c7c6e;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0x2602b7e5111f4bb;
        }
        local_60 = 0xaf980dfb438f2515;
      }
      if (uVar1 != 0xcc41b165ddc3597b) break;
      (**(code **)(*local_48 + 0x20))
                (local_48,CONCAT71((int7)((local_58 ^ 0xe49507014c0b3775) >> 8),local_48 != (longlong *)(param_1 + 0x10)
                                  ));
      *local_50 = 0;
      local_58 = 0x5bf9c4cf1563184d;
      local_60 = 0xf601e24a07fdc9e3;
    }
    local_58 = local_58 ^ 0xe49507014c0b3775;
  } while (uVar1 != 0xadf82685129ed1ae);
  return;
}



void FUN_180121c20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



undefined8 FUN_180121c40(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xc0dde36614e4ccb6;
  local_50 = 0xee1308da2a9318ae;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xe9433dedfd6fe856;
        if (uVar1 != 0x8936424656aa0897) break;
        thunk_FUN_1801f42e0(param_1,0x50);
        local_48 = 0x824ab41c1a89b93c;
        local_50 = 0x64c18fe0387c191;
      }
      if (uVar1 != 0x2eceebbc3e77d418) break;
      local_48 = 0x4eeb03e2ebe7ebf2;
      if ((param_2 & 1) == 0) {
        local_48 = 0x43dbed46a4439bc8;
      }
      local_50 = 0xc7dd41a4bd4de365;
    }
    local_48 = local_48 ^ 0xe9433dedfd6fe856;
  } while (uVar1 != 0x8406ace2190e78ad);
  return param_1;
}



void FUN_180121d80(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;

  lVar4 = *param_1;
  if (param_1[1] == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
  }
  if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
          return;
        }
      }
    }
    return;
  }
  FUN_1801d7504();
}



void Unwind_180121e30(undefined8 param_1,longlong param_2)

{
  FUN_180121900(param_2 + 0x20);
  return;
}



void FUN_180121e80(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xd210983369565608;
  local_58 = 0xf7d680df83a48914;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xba1836cf1fc70476;
        if (uVar1 != 0x1c931365d1d3f32) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0x61ac246eebf6a473;
        local_58 = 0x5674fc20dbe0f71;
      }
      if (uVar1 != 0x25c618eceaf2df1c) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0x35dfa11606b0046a;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x50ddfb8cbde5905a;
      }
      local_58 = 0x5114cabae0f8af68;
    }
    local_50 = local_50 ^ 0xba1836cf1fc70476;
  } while (uVar1 != 0x64cb6bace648ab02);
  return;
}



void FUN_180121fb0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x8e0abc278604e708;
  local_50 = 0x99cad6477e7970c2;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x7803969b217acd06;
        if (uVar1 != 0xa5dbae93594029f) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0x307fb6628c92b2fa;
        local_50 = 0xf3b0c07164e1ae86;
      }
      if (uVar1 != 0x17c06a60f87d97ca) break;
      local_48 = 0xec80f1afaf856eac;
      if (param_2 != '\0') {
        local_48 = 0x25123d557262704f;
      }
      local_50 = 0x2f4f87bc47f672d0;
    }
    local_48 = local_48 ^ 0x7803969b217acd06;
  } while (uVar1 != 0xc3cf7613e8731c7c);
  return;
}



undefined8 FUN_1801220d0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x50d615bb31753fa1;
  local_50 = 0xab027da73c6f28be;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x90f6455c672d5bb4;
        if (uVar1 != 0x828f016cf1b1a169) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0xfda40a7e60c5fd68;
        local_50 = 0x6e2a6d8ae8805045;
      }
      if (uVar1 != 0xfbd4681c0d1a171f) break;
      FUN_18011dde0(param_1);
      local_48 = 0x78b156ca53c3d210;
      if ((param_2 & 1) == 0) {
        local_48 = 0x69b030522a37de54;
      }
      local_50 = 0xfa3e57a6a2727379;
    }
    local_48 = local_48 ^ 0x90f6455c672d5bb4;
  } while (uVar1 != 0x938e67f48845ad2d);
  return param_1;
}



undefined8 FUN_180122220(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x1471aa66875c8e90;
  local_50 = 0xa3aa528dd0b92f6c;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xea7c16981c2ed9b4;
        if (uVar1 != 0xb7dbf8eb57e5a1fc) break;
        FUN_180106c90(param_1);
        local_48 = 0x86e2b501ac1261ca;
        if ((param_2 & 1) == 0) {
          local_48 = 0x60b1f9783b8a4ae4;
        }
        local_50 = 0x59705c194eb68959;
      }
      if (uVar1 != 0xdf92e918e2a4e893) break;
      thunk_FUN_1801f42e0(param_1,0x80);
      local_48 = 0x2c898c2c456078b3;
      local_50 = 0x1548294d305cbb0e;
    }
    local_48 = local_48 ^ 0xea7c16981c2ed9b4;
  } while (uVar1 != 0x39c1a561753cc3bd);
  return param_1;
}



void FUN_180122370(void)

{
  atexit((_func_5014 *)&LAB_18011df40);
  atexit(FUN_18011df50);
  FUN_1801223d8(&DAT_1802a4702,&DAT_18027eae7,0x11,8,&DAT_1802a470c);
  FUN_1800f0070(&DAT_1802a4700,&DAT_1802a4702,FUN_18011e3d0);
  return;
}



void FUN_1801223d8(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_6d;
  char local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0x217d1c7961302e37;
  local_68 = 0xf0c021a0681a8ecb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x2c856c2cb8e16c8;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x2c856c2cb8e16c8;
          local_60 = uVar2;
          if (-0x2e42c226f6d55f05 < (longlong)uVar1) break;
          if (uVar1 == 0x8b975642612db76c) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x74e84581a8796636;
            local_68 = 0x8f98b1c4dfc8b792;
          }
          else if (uVar1 == 0x940f82a0e0842b0a) {
            *param_5 = 1;
            local_60 = 0x39266db21000ebd;
            local_68 = 0xce6fae63f6cdc18;
          }
          else if (uVar1 == 0xae8935671981db8f) {
            local_6b = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0x26e5d68f13719bc2;
            local_68 = 0xdd9522ca64c04a66;
          }
        }
        if (0xf749c3d1e6cd2a4 < (longlong)uVar1) break;
        if (uVar1 == 0xd1bd3dd9092aa0fc) {
          local_60 = 0x35082635cb4c2c13;
          if (*param_5 == 1) {
            local_60 = 0x1d2684ab24216b81;
          }
          local_68 = 0x125218963a4db924;
          local_54 = 0;
          local_6a = 0;
          local_48 = (int)param_3 + param_2;
        }
        else if (uVar1 == 0xfb70f44577b1d1a4) {
          local_6a = local_6b ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6a;
          local_54 = local_4c + 1;
          local_60 = 0x9a573b91bc6262a0;
          if (local_54 == param_4) {
            local_60 = 0x29028792ade7dc9d;
          }
          local_68 = 0xbd0d05324d63f797;
        }
      }
      if (uVar1 != 0x275a3ea3f1019537) break;
      local_69 = local_6a;
      local_4c = local_54;
      local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
      local_6c = *(char *)(local_48 + (int)local_54);
      local_60 = 0x1cdd9da302464135;
      if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
        local_60 = 0x39c3fe867aea2dd6;
      }
      local_68 = 0x974acbe1636bf659;
    }
  } while (uVar1 != 0xf749c3d1e6cd2a5);
  return;
}



undefined8 * FUN_180122690(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  uintptr_t local_2c8;
  ulonglong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  uintptr_t local_290;
  undefined8 local_288;
  ulonglong local_280;
  undefined8 local_278;
  uintptr_t local_270;
  uintptr_t local_268;
  ulonglong local_260;
  undefined8 local_258;
  uintptr_t local_250;
  undefined8 local_248;
  ulonglong local_240;
  undefined8 local_238;
  uintptr_t local_230;
  undefined8 local_228;
  ulonglong local_220;
  undefined8 *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulonglong local_1e0;
  undefined4 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined3 uStack_15c;
  undefined1 local_159;
  uintptr_t local_158;
  undefined8 local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  uintptr_t local_118;
  uintptr_t local_110;
  undefined8 *local_108;
  ulonglong *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  code *local_d8;
  ulonglong local_d0;
  longlong local_c8;
  uintptr_t uStack_c0;
  uintptr_t local_b8;
  undefined8 *local_b0;
  ulonglong local_a8 [2];
  uintptr_t local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint local_64;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_88 = 0xfff;
  local_41 = 0;
  local_80 = 1;
  local_110 = 4;
  local_64 = 0;
  local_78 = -8;
  local_138 = 9;
  local_130 = 3;
  local_f0 = 0x1f;
  local_60 = 0x20;
  local_50 = 0xf;
  local_58 = 0;
  local_128 = 6;
  local_70 = 0x28;
  local_120 = 0x15;
  local_118 = 0xc;
  local_2f0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x20);
  local_2e8 = local_120;
  local_2e0 = local_f0;
  local_2f8 = puVar3;
  FUN_18012f2d1(&DAT_1802a48b0,&DAT_18027fe47,0x1a,0x16,&DAT_1802a48c8);
  *(ulonglong *)((longlong)puVar3 + 0xd) = CONCAT53(DAT_1802a48bd._3_5_,(undefined3)DAT_1802a48bd);
  uVar2 = uRam00000001802a48bc;
  uVar1 = uRam00000001802a48b8;
  uVar9 = uRam00000001802a48b4;
  *puVar3 = _DAT_1802a48b0;
  puVar3[1] = uVar9;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x15) = local_41;
  local_290 = local_58;
  local_288 = local_138;
  local_280 = local_50;
  uVar9 = 1;
  FUN_18012f2d1(&DAT_1802a48cc,&DAT_18027fe8a,0x16,10,&DAT_1802a48d8);
  local_290 = CONCAT71(local_290._1_7_,DAT_1802a48d4);
  local_298 = DAT_1802a48cc;
  FUN_1801063a0(param_1,&local_298,&local_2f8,1,CONCAT44(uVar9,local_64));
  *param_1 = &PTR_FUN_180218bb0;
  local_140 = param_1 + 0xe;
  local_e8 = (undefined **)((ulonglong)local_e8._4_4_ << 0x20);
  local_f8 = param_1;
  FUN_18012c4e0(local_140,&local_e8,&local_100);
  local_e8 = (undefined **)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = (code *)local_128;
  local_d0 = local_50;
  FUN_18012f2d1(&DAT_1802a48dc,&DAT_18027fec0,0x1c,7,&DAT_1802a48e4);
  local_e8 = (undefined **)CONCAT44(CONCAT22(local_e8._6_2_,DAT_1802a48e0),DAT_1802a48dc);
  uStack_c0 = local_58;
  local_b8 = local_118;
  local_b0 = (undefined8 *)local_50;
  FUN_18012f2d1(&DAT_1802a48e8,&DAT_18027ff00,0x13,0xd,&DAT_1802a48f8);
  puVar5 = local_f8;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,DAT_1802a48f0);
  local_c8 = DAT_1802a48e8;
  local_100 = local_a8;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  local_108 = &local_e8;
  FUN_180124b20(&local_2b8,2,&local_108,&local_100);
  local_270 = local_58;
  local_268 = local_118;
  local_260 = local_50;
  uVar9 = 1;
  FUN_18012f2d1(&DAT_1802a48fc,&DAT_18027ff34,0x18,0xd,&DAT_1802a490c);
  local_270 = CONCAT44(local_270._4_4_,DAT_1802a4904);
  local_278 = DAT_1802a48fc;
  uStack_2d0 = 0;
  local_2c8 = local_110;
  local_2c0 = local_50;
  local_2d8 = 0x74726f53;
  uVar4 = FUN_180108620(puVar5,&local_2d8,&local_278,&local_2b8,CONCAT44(uVar9,local_64));
  puVar5[0x16] = uVar4;
  if (local_50 < local_b0) {
    uVar7 = local_80 + (longlong)local_b0;
    lVar6 = local_c8;
    if (local_88 < uVar7) {
      lVar6 = *(longlong *)(local_c8 + -8);
      if (local_60 <= (ulonglong)((local_c8 + local_78) - lVar6)) goto LAB_1801233ed;
      uVar7 = (longlong)local_b0 + local_70;
    }
    thunk_FUN_1801f42e0(lVar6,uVar7);
  }
  local_b8 = local_58;
  local_b0 = (undefined8 *)local_50;
  local_c8 = CONCAT71(local_c8._1_7_,local_41);
  if (local_50 < local_d0) {
    uVar7 = local_80 + local_d0;
    lVar6 = (longlong)local_e8;
    if (local_88 < uVar7) {
      lVar6 = *(longlong *)((longlong)local_e8 + -8);
      if (local_60 <= (ulonglong)(((longlong)local_e8 + local_78) - lVar6)) goto LAB_1801233ed;
      uVar7 = local_d0 + local_70;
    }
    thunk_FUN_1801f42e0(lVar6,uVar7);
  }
  local_e8 = (undefined **)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = (code *)local_130;
  local_d0 = local_50;
  FUN_18012f2d1(&DAT_1802a4910,&DAT_18027ff77,0x1f,4,&DAT_1802a4914);
  local_e8 = (undefined **)CONCAT62(CONCAT51(local_e8._3_5_,DAT_1802a4912),DAT_1802a4910);
  uStack_c0 = 0;
  local_b8 = local_110;
  local_b0 = (undefined8 *)local_50;
  local_c8 = 0x74786554;
  local_a8[1] = 0;
  local_98 = local_110;
  local_90 = local_50;
  local_a8[0] = 0x68746f42;
  local_100 = &local_88;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_108 = &local_e8;
  FUN_180124b20(&local_178,local_130,&local_108,&local_100);
  local_218 = (undefined8 *)0x0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  puVar5 = (undefined8 *)FUN_1801d61c8(local_60);
  local_208 = local_120;
  uStack_200 = local_f0;
  local_218 = puVar5;
  FUN_18012f2d1(&DAT_1802a4924,&DAT_18027ffec,0x1e,0x16,&DAT_1802a493c);
  *(ulonglong *)((longlong)puVar5 + 0xd) = CONCAT53(DAT_1802a4931._3_5_,(undefined3)DAT_1802a4931);
  uVar4 = CONCAT35((undefined3)DAT_1802a4931,uRam00000001802a492c);
  *puVar5 = _DAT_1802a4924;
  puVar5[1] = uVar4;
  *(undefined1 *)((longlong)puVar5 + 0x15) = local_41;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = local_128;
  local_1e0 = local_50;
  uVar9 = 1;
  FUN_18012f2d1(&DAT_1802a4940,&DAT_18028003e,0x13,7,&DAT_1802a4948);
  local_1f8 = CONCAT44(CONCAT22(local_1f8._6_2_,DAT_1802a4944),DAT_1802a4940);
  uVar4 = FUN_180108620(local_f8,&local_1f8,&local_218,&local_178,CONCAT44(uVar9,2));
  puVar5 = local_f8;
  local_f8[0x1a] = uVar4;
  if (local_50 < local_90) {
    uVar8 = local_80 + local_90;
    uVar7 = local_a8[0];
    if (local_88 < uVar8) {
      uVar7 = *(ulonglong *)(local_a8[0] - 8);
      if (local_60 <= (local_a8[0] + local_78) - uVar7) goto LAB_1801233ed;
      uVar8 = local_90 + local_70;
    }
    thunk_FUN_1801f42e0(uVar7,uVar8);
  }
  local_98 = local_58;
  local_90 = local_50;
  local_a8[0] = CONCAT71(local_a8[0]._1_7_,local_41);
  if (local_50 < local_b0) {
    uVar7 = local_80 + (longlong)local_b0;
    lVar6 = local_c8;
    if (local_88 < uVar7) {
      lVar6 = *(longlong *)(local_c8 + -8);
      if (local_60 <= (ulonglong)((local_c8 + local_78) - lVar6)) goto LAB_1801233ed;
      uVar7 = (longlong)local_b0 + local_70;
    }
    thunk_FUN_1801f42e0(lVar6,uVar7);
  }
  local_b8 = local_58;
  local_b0 = (undefined8 *)local_50;
  local_c8 = CONCAT71(local_c8._1_7_,local_41);
  if (local_50 < local_d0) {
    uVar7 = local_80 + local_d0;
    lVar6 = (longlong)local_e8;
    if (local_88 < uVar7) {
      lVar6 = *(longlong *)((longlong)local_e8 + -8);
      if (local_60 <= (ulonglong)(((longlong)local_e8 + local_78) - lVar6)) {
LAB_1801233ed:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_64,local_58);
      }
      uVar7 = local_d0 + local_70;
    }
    thunk_FUN_1801f42e0(lVar6,uVar7);
  }
  local_1d8 = (undefined4 *)0x0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_1c8 = 0x11;
  uStack_1c0 = local_f0;
  local_1d8 = puVar3;
  FUN_18012f2d1(&DAT_1802a494c,&DAT_180280075,0x18,0x12,&DAT_1802a4960);
  *(undefined1 *)(puVar3 + 4) = DAT_1802a495c;
  uVar2 = uRam00000001802a4958;
  uVar1 = uRam00000001802a4954;
  uVar9 = uRam00000001802a4950;
  *puVar3 = _DAT_1802a494c;
  puVar3[1] = uVar9;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x11) = local_41;
  local_158 = local_58;
  local_150 = 7;
  local_148 = local_50;
  FUN_18012f2d1(&DAT_1802a4964,&DAT_1802800bb,0x1a,8,&DAT_1802a496c);
  uStack_15c = uRam00000001802a4968;
  local_160 = DAT_1802a4964;
  local_159 = local_41;
  uVar4 = FUN_180107b80(puVar5,&local_160,&local_1d8,1);
  puVar5[0x17] = uVar4;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = (undefined4 *)0x0;
  uStack_1b0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_1a8 = 0x1c;
  uStack_1a0 = local_f0;
  local_1b8 = puVar3;
  FUN_18012f2d1(&DAT_1802a4970,&DAT_1802800ee,0x1e,0x1d,&DAT_1802a4990);
  uVar4 = uRam00000001802a4984;
  *(ulonglong *)(puVar3 + 3) = CONCAT44(uRam00000001802a4980,_DAT_1802a497c);
  *(undefined8 *)(puVar3 + 5) = uVar4;
  uVar2 = _DAT_1802a497c;
  uVar1 = uRam00000001802a4978;
  uVar9 = uRam00000001802a4974;
  *puVar3 = _DAT_1802a4970;
  puVar3[1] = uVar9;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 7) = local_41;
  local_250 = local_58;
  local_248 = 10;
  local_240 = local_50;
  FUN_18012f2d1(&DAT_1802a4994,&DAT_180280144,0x17,0xb,&DAT_1802a49a0);
  local_250 = CONCAT62(local_250._2_6_,DAT_1802a499c);
  local_258 = DAT_1802a4994;
  uVar4 = FUN_180107b80(puVar5,&local_258,&local_1b8,1);
  puVar5[0x18] = uVar4;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = (undefined4 *)0x0;
  uStack_190 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_188 = 0x17;
  uStack_180 = local_f0;
  local_198 = puVar3;
  FUN_18012f2d1(&DAT_1802a49a4,&DAT_180280180,0x19,0x18,&DAT_1802a49bc);
  *(ulonglong *)((longlong)puVar3 + 0xf) = CONCAT71(DAT_1802a49b3._1_7_,(undefined1)DAT_1802a49b3);
  uVar2 = uRam00000001802a49b0;
  uVar1 = uRam00000001802a49ac;
  uVar9 = uRam00000001802a49a8;
  *puVar3 = _DAT_1802a49a4;
  puVar3[1] = uVar9;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x17) = local_41;
  local_230 = local_58;
  local_228 = local_138;
  local_220 = local_50;
  uVar9 = 1;
  FUN_18012f2d1(&DAT_1802a49c0,&DAT_1802801c6,0x14,10,&DAT_1802a49cc);
  local_230 = CONCAT71(local_230._1_7_,DAT_1802a49c8);
  local_238 = DAT_1802a49c0;
  uVar4 = FUN_180108270(puVar5,&local_238,&local_198,0x3e6147ae,CONCAT44(uVar9,0x3d4ccccd),0x3f800000,0x3c23d70a);
  puVar5[0x19] = uVar4;
  uVar4 = FUN_1800ba260();
  local_e8 = &PTR_LAB_180218bf0;
  puStack_e0 = puVar5;
  local_d8 = FUN_1801237f0;
  local_b0 = &local_e8;
  FUN_180121610(uVar4,puVar5,&local_e8,local_64);
  FUN_180107400(puVar5,1);
  return puVar5;
}



void Unwind_180123410(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  uVar1 = *(ulonglong *)(param_2 + 0x288);
  if (*(ulonglong *)(param_2 + 0x2e8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x270);
    uVar4 = *(longlong *)(param_2 + 0x2b8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x2b0) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x2d8) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x2c0)) - lVar3))
      goto LAB_180123533;
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x2c8);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_2 + 0x288) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined1 *)(param_2 + 0x270) = *(undefined1 *)(param_2 + 0x2f7);
  uVar1 = *(ulonglong *)(param_2 + 0x268);
  if (*(ulonglong *)(param_2 + 0x2e8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x250);
    uVar4 = *(longlong *)(param_2 + 0x2b8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x2b0) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x2d8) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x2c0)) - lVar3)) {
LAB_180123533:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,*(uint *)(param_2 + 0x2d4),
                       *(uintptr_t *)(param_2 + 0x2e0));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x2c8);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x260) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_2 + 0x268) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined1 *)(param_2 + 0x250) = *(undefined1 *)(param_2 + 0x2f7);
  return;
}



void Unwind_180123560(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0x1c0);
  return;
}



void Unwind_1801235a0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  uVar1 = *(ulonglong *)(param_2 + 0x2a8);
  if (*(ulonglong *)(param_2 + 0x2e8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x290);
    uVar4 = *(longlong *)(param_2 + 0x2b8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x2b0) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x2d8) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x2c0)) - lVar3))
      goto LAB_180123743;
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x2c8);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x2a0) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_2 + 0x2a8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined1 *)(param_2 + 0x290) = *(undefined1 *)(param_2 + 0x2f7);
  uVar1 = *(ulonglong *)(param_2 + 0x288);
  if (*(ulonglong *)(param_2 + 0x2e8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x270);
    uVar4 = *(longlong *)(param_2 + 0x2b8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x2b0) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x2d8) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x2c0)) - lVar3))
      goto LAB_180123743;
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x2c8);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_2 + 0x288) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined1 *)(param_2 + 0x270) = *(undefined1 *)(param_2 + 0x2f7);
  uVar1 = *(ulonglong *)(param_2 + 0x268);
  if (*(ulonglong *)(param_2 + 0x2e8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x250);
    uVar4 = *(longlong *)(param_2 + 0x2b8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x2b0) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x2d8) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x2c0)) - lVar3)) {
LAB_180123743:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,*(uint *)(param_2 + 0x2d4),
                       *(uintptr_t *)(param_2 + 0x2e0));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x2c8);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x260) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_2 + 0x268) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined1 *)(param_2 + 0x250) = *(undefined1 *)(param_2 + 0x2f7);
  return;
}



void Unwind_180123770(undefined8 param_1,longlong param_2)

{
  FUN_180124800(*(undefined8 *)(param_2 + 0x1f8));
  return;
}



void Unwind_1801237b0(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x240));
  return;
}



void FUN_1801237f0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  size_t sVar3;
  undefined8 *puVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  void *_Buf2;
  bool bVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_288;
  float fStack_284;
  float local_278 [5];
  float fStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float local_258;
  float local_254;
  float local_250;
  float fStack_24c;
  undefined4 *local_248;
  undefined8 **local_240;
  undefined8 *local_238;
  undefined4 *local_230;
  undefined8 **local_228;
  undefined8 *local_220;
  ulonglong local_218;
  longlong local_210;
  longlong local_208;
  ulonglong local_200;
  size_t local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  float local_1bc;
  size_t local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  undefined8 *local_198;
  undefined8 *puStack_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 *puStack_170;
  longlong local_168;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  float local_148;
  float local_144;
  longlong local_140;
  undefined8 local_138;
  float local_130;
  int local_12c;
  uintptr_t local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  float local_10c;
  float local_104;
  uint local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined8 local_f0;

  local_f0 = 0xfffffffffffffffe;
  local_130 = 0.001;
  local_fc = 1.0;
  local_154 = 0x3d909091;
  local_150 = 0x42700000;
  local_14c = 13.0;
  local_104 = 0.0;
  local_218 = 0xfff;
  local_f2 = 0;
  local_138 = 1;
  local_12c = 1;
  local_100 = 0;
  local_210 = -8;
  local_208 = 0x27;
  local_f1 = 1;
  local_1b8 = 3;
  local_200 = 0x20;
  local_1b0 = 0xf;
  local_128 = 0;
  local_1f8 = 6;
  local_140 = param_2;
  local_1c8 = FUN_1800eb430();
  local_f8 = (float)FUN_180172570();
  puVar16 = *(undefined8 **)(param_1 + 0x78);
  fVar1 = *(float *)(*(longlong *)(param_1 + 200) + 0x90);
  for (puVar14 = (undefined8 *)*puVar16; puVar14 != puVar16; puVar14 = (undefined8 *)*puVar14) {
    *(undefined1 *)((longlong)puVar14 + 0x4c) = local_f2;
  }
  local_198 = (undefined8 *)0x0;
  puStack_190 = (undefined8 *)0x0;
  local_188 = (undefined8 *)0x0;
  local_120 = param_1;
  uVar8 = FUN_180111340();
  FUN_180114840(uVar8,&local_178);
  puVar14 = puStack_170;
  for (puVar16 = local_178; puVar16 != puVar14; puVar16 = puVar16 + 1) {
    local_118 = (longlong *)*puVar16;
    cVar6 = (**(code **)(*local_118 + 0x28))();
    if (cVar6 != '\0') {
      if (puStack_190 == local_188) {
        FUN_1801255e0();
      }
      else {
        *puStack_190 = local_118;
        puStack_190 = puStack_190 + 1;
      }
    }
  }
  if (local_178 != (undefined8 *)0x0) {
    uVar15 = local_168 - (longlong)local_178;
    puVar16 = local_178;
    if (local_218 < uVar15) {
      puVar16 = (undefined8 *)local_178[-1];
      if (local_200 <= (ulonglong)((longlong)local_178 + (local_210 - (longlong)puVar16))) goto LAB_18012461c;
      uVar15 = uVar15 + local_208;
    }
    thunk_FUN_1801f42e0(puVar16,uVar15);
  }
  sVar3 = local_1f8;
  lVar11 = *(longlong *)(*(longlong *)(local_120 + 0xb0) + 0x98);
  lVar9 = (longlong)*(int *)(*(longlong *)(local_120 + 0xb0) + 0x90) * 0x20;
  if (*(size_t *)(lVar11 + 0x10 + lVar9) == local_1f8) {
    puVar16 = (undefined8 *)(lVar11 + lVar9);
    if (local_1b0 < (ulonglong)puVar16[3]) {
      puVar16 = (undefined8 *)*puVar16;
    }
    FUN_18012f2d1(&DAT_1802a48dc,&DAT_18027fec0,0x1c,7,&DAT_1802a48e4);
    uVar7 = memcmp(&DAT_1802a48dc,puVar16,sVar3);
    if (uVar7 != local_100) goto LAB_180123bc8;
    FUN_180125e50(local_198,puStack_190,(longlong)puStack_190 - (longlong)local_198 >> ((byte)local_1b8 & 0x3f),
                  &local_f8);
  }
  else {
LAB_180123bc8:
    FUN_180129ae0(local_198);
  }
  puVar16 = puStack_190;
  local_1d0 = local_120 + 0x70;
  local_148 = local_f8 * 21.0;
  fVar22 = local_f8 * 3.0 + local_148;
  fVar23 = local_f8 * 16.0;
  uVar7 = local_100;
  for (puVar14 = local_198; fVar5 = local_fc, puVar14 != puVar16; puVar14 = puVar14 + 1) {
    local_118 = (longlong *)*puVar14;
    FUN_18012d660(local_1d0,&local_178);
    puVar4 = local_178;
    plVar10 = local_118 + 1;
    plVar17 = local_178 + 5;
    if (plVar17 != plVar10) {
      uVar15 = local_118[3];
      if (local_1b0 < (ulonglong)local_118[4]) {
        plVar10 = (longlong *)local_118[1];
      }
      if ((ulonglong)local_178[8] < uVar15) {
        FUN_18007f460(plVar17,uVar15);
      }
      else {
        if (local_1b0 < (ulonglong)local_178[8]) {
          plVar17 = (longlong *)local_178[5];
        }
        local_178[7] = uVar15;
        FUN_1802079d0(plVar17,plVar10);
        *(undefined1 *)((longlong)plVar17 + uVar15) = local_f2;
      }
    }
    *(uint *)(puVar4 + 9) = uVar7;
    *(undefined1 *)((longlong)puVar4 + 0x4c) = local_f1;
    *(float *)((longlong)puVar4 + 0x1c) = local_fc;
    if (*(char *)((longlong)puVar4 + 0x4d) == '\0') {
      *(float *)(puVar4 + 4) = fVar23;
      *(undefined1 *)((longlong)puVar4 + 0x4d) = local_f1;
    }
    *(float *)((longlong)puVar4 + 0x24) = fVar23;
    fVar23 = fVar23 + fVar22;
    uVar7 = local_12c + uVar7;
  }
  plVar17 = *(longlong **)(local_120 + 0x78);
  plVar10 = (longlong *)*plVar17;
  if (plVar10 != plVar17) {
    do {
      if (*(char *)((longlong)plVar10 + 0x4c) == '\0') {
        *(float *)((longlong)plVar10 + 0x1c) = local_104;
      }
      plVar10 = (longlong *)*plVar10;
    } while (plVar10 != plVar17);
    plVar17 = *(longlong **)(local_120 + 0x78);
  }
  local_1bc = local_f8 * -16.0 + *(float *)(local_140 + 0x10);
  local_140 = CONCAT44(local_140._4_4_,local_104);
  local_144 = local_fc - fVar1;
  local_220 = (undefined8 *)(local_1c8 + 0x50);
  puVar16 = (undefined8 *)(local_1c8 + 0x70);
  local_248 = (undefined4 *)(local_1c8 + 0x74);
  local_240 = (undefined8 **)(local_1c8 + 0x78);
  local_238 = (undefined8 *)(local_1c8 + 0x90);
  local_230 = (undefined4 *)(local_1c8 + 0x94);
  local_228 = (undefined8 **)(local_1c8 + 0x98);
  uVar7 = (uint)local_138;
  *(float *)((longlong)&local_1f0 + (ulonglong)((uint)local_128 & 1) * 4) = local_1bc;
  *(float *)((longlong)&local_1f0 + (ulonglong)(uVar7 & 1) * 4) = local_148;
  plVar10 = plVar17;
  while (plVar10 = (longlong *)*plVar10, plVar10 != plVar17) {
    if (fVar5 <= fVar1) {
      fVar22 = *(float *)((longlong)plVar10 + 0x1c);
LAB_180123ef6:
      fVar23 = fVar22;
      *(float *)(plVar10 + 3) = fVar23;
    }
    else {
      fVar23 = *(float *)(plVar10 + 3);
      if ((float)local_140 < fVar1) {
        fVar22 = *(float *)((longlong)plVar10 + 0x1c);
        FUN_1800ebf90();
        fVar20 = (float)FUN_1801eaf60();
        fVar23 = (local_fc - fVar20) * (fVar22 - fVar23) + *(float *)(plVar10 + 3);
        *(float *)(plVar10 + 3) = fVar23;
      }
      fVar22 = *(float *)((longlong)plVar10 + 0x1c);
      if (ABS(*(float *)((longlong)plVar10 + 0x1c) - fVar23) < local_130) goto LAB_180123ef6;
    }
    fVar20 = local_fc;
    fVar22 = local_104;
    bVar19 = fVar23 < local_104;
    if (fVar5 <= fVar1) {
      fVar2 = *(float *)((longlong)plVar10 + 0x24);
LAB_180123fc6:
      fVar24 = fVar2;
      *(float *)(plVar10 + 4) = fVar24;
    }
    else {
      fVar24 = *(float *)(plVar10 + 4);
      if ((float)local_140 < fVar1) {
        fVar2 = *(float *)((longlong)plVar10 + 0x24);
        FUN_1800ebf90();
        fVar21 = (float)FUN_1801eaf60();
        fVar24 = (local_fc - fVar21) * (fVar2 - fVar24) + *(float *)(plVar10 + 4);
        *(float *)(plVar10 + 4) = fVar24;
      }
      fVar2 = *(float *)((longlong)plVar10 + 0x24);
      if (ABS(*(float *)((longlong)plVar10 + 0x24) - fVar24) < local_130) goto LAB_180123fc6;
    }
    uVar7 = -(uint)(fVar20 < fVar23);
    fVar22 = (float)(uVar7 & (uint)fVar22 |
                    ~uVar7 & (uint)(fVar20 - (float)((uint)fVar22 & -(uint)bVar19 | ~-(uint)bVar19 & (uint)fVar23)));
    fVar22 = 1.0 - fVar22 * fVar22 * fVar22;
    if (0.01 < fVar22) {
      fVar23 = (float)FUN_180173360(plVar10 + 5,local_f8 * local_14c,local_12c);
      fVar23 = local_f8 * 18.0 + fVar23;
      fVar20 = (local_f8 * 16.0 + fVar23) * (local_fc - fVar22);
      uVar7 = (uint)local_138;
      *(float *)((longlong)&local_1e8 + (ulonglong)((uint)local_128 & 1) * 4) = fVar20;
      *(float *)((longlong)&local_1e8 + (ulonglong)(uVar7 & 1) * 4) = fVar24;
      uVar8 = local_1e8;
      if (*(char *)(*(longlong *)(local_120 + 0xb8) + 0x90) == '\x01') {
        FUN_1800ec140(local_1c8,&local_178,(int)plVar10[9],0x41600000);
      }
      else {
        local_178 = (undefined8 *)*local_220;
        puStack_170 = (undefined8 *)local_220[1];
      }
      sVar3 = local_1b8;
      lVar11 = *(longlong *)(*(longlong *)(local_120 + 0xd0) + 0x98);
      lVar9 = (longlong)*(int *)(*(longlong *)(local_120 + 0xd0) + 0x90) * 0x20;
      if (local_1b0 < *(ulonglong *)(lVar11 + 0x18 + lVar9)) {
        _Buf2 = *(void **)(lVar11 + lVar9);
        lVar11 = *(longlong *)(lVar11 + 0x10 + lVar9);
        if (3 < lVar11) goto LAB_18012414b;
LAB_1801241bf:
        if (lVar11 != 3) goto LAB_180124220;
        FUN_18012f2d1(&DAT_1802a4910,&DAT_18027ff77,0x1f,4,&DAT_1802a4914);
        uVar7 = memcmp(&DAT_1802a4910,_Buf2,sVar3);
        bVar19 = uVar7 == local_100;
        bVar18 = false;
      }
      else {
        _Buf2 = (void *)(lVar11 + lVar9);
        lVar11 = *(longlong *)(lVar11 + 0x10 + lVar9);
        if (lVar11 < 4) goto LAB_1801241bf;
LAB_18012414b:
        if (lVar11 == 4) {
          FUN_18012f2d1(&DAT_1802a4918,&DAT_18027ffb5,0x19,5,&DAT_1802a4920);
          uVar7 = memcmp(&DAT_1802a4918,_Buf2,4);
          bVar18 = uVar7 == local_100;
        }
        else {
LAB_180124220:
          bVar18 = false;
        }
        bVar19 = false;
      }
      local_288 = (float)local_1f0;
      fStack_284 = (float)((ulonglong)local_1f0 >> 0x20);
      local_288 = (float)uVar8 + local_288;
      fStack_284 = (float)((ulonglong)uVar8 >> 0x20) + fStack_284;
      if (*(char *)(*(longlong *)(local_120 + 0xc0) + 0x90) == '\x01') {
        local_258 = (local_1bc - fVar23) + fVar20;
        local_10c = fVar22 * 0.72;
        local_118 = (longlong *)0x3d50d0d13d30b0b1;
        local_110 = local_154;
        local_19c = fVar22 * 0.3;
        local_1a8 = 0x3d50d0d13d30b0b1;
        local_1a0 = (float)local_154;
        local_254 = fVar24;
        local_250 = local_288;
        fStack_24c = fStack_284;
        FUN_180172a80(local_278 + 8,&local_1a8,&local_118,0,local_f8 * 5.0);
      }
      fVar23 = local_f8;
      puVar14 = &local_178;
      if (bVar18) {
        puVar14 = puVar16;
      }
      fVar20 = local_f8 * 1.25;
      puVar12 = (undefined4 *)((longlong)&local_178 + 4);
      if (bVar18) {
        puVar12 = local_248;
      }
      ppuVar13 = &puStack_170;
      if (bVar18) {
        ppuVar13 = local_240;
      }
      local_118 = (longlong *)CONCAT44(*puVar12,*(undefined4 *)puVar14);
      local_110 = *(undefined4 *)ppuVar13;
      local_10c = fVar22;
      local_278[4] = local_288;
      fStack_264 = fStack_284;
      uStack_260 = 0;
      uStack_25c = 0;
      local_278[(ulonglong)((uint)local_138 & 3) + 4] = fVar24;
      local_278[0] = local_288;
      local_278[1] = fStack_284;
      local_278[2] = 0.0;
      local_278[3] = 0.0;
      local_19c = fVar23 * -4.0 + local_278[(uint)local_138 & 3];
      local_1a8 = CONCAT44(fVar23 * 4.0 + fStack_264,fVar23 * -2.5 + local_278[4]);
      fVar23 = local_278[(uint)local_128 & 3];
      local_1a0 = fVar23;
      FUN_180172640(&local_1a8,&local_118,fVar20);
      fVar20 = local_f8;
      puVar14 = &local_178;
      if (bVar19) {
        puVar14 = local_238;
      }
      puVar12 = (undefined4 *)((longlong)&local_178 + 4);
      if (bVar19) {
        puVar12 = local_230;
      }
      ppuVar13 = &puStack_170;
      if (bVar19) {
        ppuVar13 = local_228;
      }
      local_110 = *(undefined4 *)ppuVar13;
      local_118 = (longlong *)CONCAT44(*puVar12,*(undefined4 *)puVar14);
      local_10c = fVar22;
      fVar22 = (float)FUN_180173310();
      fVar22 = local_148 - fVar22;
      uVar7 = (uint)local_138;
      *(float *)((longlong)&local_1d8 + (ulonglong)((uint)local_128 & 1) * 4) = fVar20;
      *(float *)((longlong)&local_1d8 + (ulonglong)(uVar7 & 1) * 4) = fVar22;
      uVar8 = local_1d8;
      uVar7 = (uint)local_138;
      *(float *)((longlong)&local_1e0 + (ulonglong)((uint)local_128 & 1) * 4) = fVar20 * -2.5 + fVar23;
      *(float *)((longlong)&local_1e0 + (ulonglong)(uVar7 & 1) * 4) = fVar24;
      local_1a8 = CONCAT44((float)((ulonglong)uVar8 >> 0x20) * 0.5 + (float)((ulonglong)local_1e0 >> 0x20),
                           (float)uVar8 * -7.0 + (float)local_1e0);
      FUN_180173000(plVar10 + 5,&local_1a8);
    }
  }
  puVar16 = *(undefined8 **)(local_120 + 0x78);
  for (puVar14 = (undefined8 *)*puVar16; puVar14 != puVar16; puVar14 = (undefined8 *)*puVar14) {
    while ((*(char *)((longlong)puVar14 + 0x4c) == '\0' && (*(float *)(puVar14 + 3) <= local_130))) {
      puVar14 = (undefined8 *)FUN_18012e800(local_1d0,puVar14);
      if (puVar14 == puVar16) goto LAB_180124581;
    }
  }
LAB_180124581:
  if (local_198 != (undefined8 *)0x0) {
    uVar15 = (longlong)local_188 - (longlong)local_198;
    puVar16 = local_198;
    if (local_218 < uVar15) {
      puVar16 = (undefined8 *)local_198[-1];
      if (local_200 <= (ulonglong)((longlong)local_198 + (local_210 - (longlong)puVar16))) {
LAB_18012461c:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_100,local_128);
      }
      uVar15 = uVar15 + local_208;
    }
    thunk_FUN_1801f42e0(puVar16,uVar15);
  }
  return;
}



void Unwind_180124640(undefined8 param_1,longlong param_2)

{
  FUN_1800c5b80(param_2 + 0x140);
  return;
}



void Unwind_180124720(undefined8 param_1,longlong param_2)

{
  FUN_1800c5b80(param_2 + 0x120);
  return;
}



void FUN_180124800(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_98 = 0xa918dd01ddfebc30;
  local_a0 = 0x720cc531ca6edbff;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ 0x99543996a321c881;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x99543996a321c881;
          local_98 = uVar2;
          if ((longlong)uVar1 < -0x31329d053c53c4e) break;
          if ((longlong)uVar1 < 0x3d668c2b6fd5bbf5) {
            if (uVar1 == 0xfcecd62fac3ac3b2) {
              local_68 = local_90;
              local_88 = *(longlong *)(param_1 + 0x28) - local_90;
              local_98 = 0x7ad1409616f7cfb1;
              if (0xfff < local_88) {
                local_98 = 0xcbe8262dfe998396;
              }
              local_a0 = 0x76d0484599787729;
              local_80 = local_90;
              local_60 = local_88;
            }
            else if (uVar1 == 0xc0108d38f8fb898) {
              thunk_FUN_1801f42e0(local_80,local_88);
              *local_78 = 0;
              local_78[1] = 0;
              local_78[2] = 0;
              local_98 = 0x4719b7f320631333;
              local_a0 = 0xf878273b53da75e2;
            }
          }
          else if (uVar1 == 0x3d668c2b6fd5bbf5) {
            local_88 = local_60 + 0x27;
            local_98 = 0xaab0f14a9d30957e;
            local_a0 = 0xa6b1f99912bf2de6;
            local_80 = local_70;
          }
          else if (uVar1 == 0x6875c55214ad3484) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        if (uVar1 != 0xbd386e6867e1f4bf) break;
        local_70 = *(longlong *)(local_90 + -8);
        local_98 = 0xadd4a3a166af8b6b;
        if ((local_68 - local_70) - 8U < 0x20) {
          local_98 = 0xf8c7ead81dd7041a;
        }
        local_a0 = 0xc5a166f37202bfef;
      }
      if (uVar1 != 0xdb141830179067cf) break;
      local_78 = (undefined8 *)(param_1 + 0x18);
      local_90 = *(longlong *)(param_1 + 0x18);
      local_98 = 0x920b86bbad6169a3;
      if (local_90 == 0) {
        local_98 = 0xd186c05c72e2ccc0;
      }
      local_a0 = 0x6ee75094015baa11;
    }
  } while (uVar1 != 0xbf6190c873b966d1);
  FUN_18011b510(param_1 + 8);
  return;
}



void FUN_180124b20(ulonglong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;

  if (param_2 != 0) {
    if (0x7ffffffffffffff < param_2) {
      FUN_180124e80();
LAB_180124c32:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    if (param_2 < 0x80) {
      uVar2 = FUN_1801d61c8(param_2 * 0x20);
    }
    else {
      if (param_2 == 0x7ffffffffffffff) goto LAB_180124c32;
      lVar1 = FUN_1801d61c8(param_2 * 0x20 + 0x27);
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
    }
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = param_2 * 0x20 + uVar2;
    uVar2 = FUN_180124c70(*param_3,*param_4,uVar2,param_1);
    param_1[1] = uVar2;
  }
  return;
}



void Unwind_180124c40(undefined8 param_1,longlong param_2)

{
  FUN_180078630(*(undefined8 *)(param_2 + 0x30));
  return;
}



ulonglong * FUN_180124c70(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;

  while( true ) {
    if (param_1 == param_2) {
      return param_3;
    }
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    uVar1 = param_1[2];
    puVar8 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    if ((longlong)uVar1 < 0) break;
    if (uVar1 < 0x10) {
      param_3[2] = uVar1;
      param_3[3] = 0xf;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 4);
      uVar3 = *(undefined4 *)(puVar8 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0xc);
      *(undefined4 *)param_3 = *(undefined4 *)puVar8;
      *(undefined4 *)((longlong)param_3 + 4) = uVar2;
      *(undefined4 *)(param_3 + 1) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
    }
    else {
      uVar5 = uVar1 | 0xf;
      uVar7 = 0x16;
      if (0x16 < uVar5) {
        uVar7 = uVar5;
      }
      if (uVar5 < 0xfff) {
        uVar5 = FUN_1801d61c8(uVar7 + 1);
      }
      else {
        lVar6 = FUN_1801d61c8(uVar7 + 0x28);
        uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar6;
      }
      *param_3 = uVar5;
      param_3[2] = uVar1;
      param_3[3] = uVar7;
      FUN_1802079d0(uVar5,puVar8,uVar1 + 1);
    }
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
  }
  FUN_180002ac0();
}



void Unwind_180124e40(undefined8 param_1,longlong param_2)

{
  FUN_180124ec0(param_2 + 0x28);
  return;
}



void FUN_180124e80(void)

{
  FUN_18012f2d1(&DAT_1802a49d0,&DAT_1802802d0,0x1b,0x10,&DAT_1802a49e0);
  FUN_1801d7524(&DAT_1802a49d0);
}



void FUN_180124ec0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  uintptr_t local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong *local_58;
  longlong local_50;
  longlong local_48;

  local_a0 = 0x90adc2d0958248a2;
  local_a8 = 0xc1ed09bf119efc3a;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_a0 ^ 0xf97233e5f80657b4;
          uVar1 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0xf97233e5f80657b4;
          local_a0 = uVar2;
          if ((longlong)uVar1 < 0x48755f2a494384f2) break;
          if ((longlong)uVar1 < 0x5542019354502c11) {
            if (uVar1 == 0x48755f2a494384f2) {
              local_48 = *(longlong *)(local_50 + -8);
              local_a0 = 0x1b3736c1062353cb;
              if (0x1f < (local_50 - local_48) - 8U) {
                local_a0 = 0xbf8c8e90cd4cca66;
              }
              local_a8 = 0x35a47c54c433667;
            }
            else if (uVar1 == 0x5140cb6f841cb498) {
              local_88 = 0xf;
              local_90 = 0;
              local_60 = (longlong *)param_1[1];
              local_68 = (longlong *)*param_1;
              local_a0 = 0x283910412f0d72fc;
              if (local_68 != local_60) {
                local_a0 = 0x50b16693299f6f8b;
              }
              local_a8 = 0x23c3aaa21f9a01b2;
            }
          }
          else if (uVar1 == 0x5542019354502c11) {
            thunk_FUN_1801f42e0(local_70,local_78);
            local_a0 = 0x3e4ee1c5524f5946;
            local_a8 = 0x84962cc209ee3e38;
          }
          else if (uVar1 == 0x7372cc3136056e39) {
            local_98 = local_68;
            local_58 = (ulonglong *)(local_68 + 3);
            local_80 = local_68[3];
            local_a0 = 0x819b899de80a08a1;
            if (local_80 <= local_88) {
              local_a0 = 0x89b5c01b2752dc78;
            }
            local_a8 = 0x336d0d1c7cf3bb06;
          }
        }
        if (-0x432936aa7ef00400 < (longlong)uVar1) break;
        if (uVar1 == 0xb2f6848194f9b3a7) {
          local_70 = *local_98;
          local_78 = local_80 + 1;
          local_a0 = 0xda068c753f7d81c0;
          if (local_78 < 0x1000) {
            local_a0 = 0xc731d2cc226e2923;
          }
          local_a8 = 0x9273d35f763e0532;
          local_50 = local_70;
        }
        else if (uVar1 == 0xbad8cd075ba1677e) {
          local_98[2] = local_90;
          *local_58 = local_88;
          *(undefined1 *)local_98 = 0;
          local_68 = local_98 + 4;
          local_a0 = 0xd3410dff4493fc5c;
          if (local_68 != local_60) {
            local_a0 = 0xabc97b2d4201e12b;
          }
          local_a8 = 0xd8bbb71c74048f12;
        }
      }
      if (uVar1 != 0x186d71044a6065ac) break;
      local_78 = local_80 + 0x28;
      local_a0 = 0x203e0abeba1e29e3;
      local_a8 = 0x757c0b2dee4e05f2;
      local_70 = local_48;
    }
    if (uVar1 == 0xbfabae33097734e) break;
    if (uVar1 == 0xbcd6c955810ffc01) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_90);
    }
  }
  return;
}



void FUN_1801252f0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_90 = 0x147a6455328753fe;
  local_98 = 0x8e9d57af6ecf34a2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x105a21f3d1d42a0d;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x105a21f3d1d42a0d;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x50df5e4d1a5ed1f) break;
          if (uVar1 == 0x50df5e4d1a5ed1f) {
            local_70 = *(longlong *)(local_88 + -8);
            local_90 = 0xea9654b7f617c58b;
            if ((local_68 - local_70) - 8U < 0x20) {
              local_90 = 0x1852e70753467b61;
            }
            local_98 = 0x7d6b84418da0dc5a;
          }
          else if (uVar1 == 0x65396346dee6a73b) {
            local_80 = local_60 + 0x27;
            local_90 = 0x1276f9356bc0777d;
            local_98 = 0xddeeece76f2b8c75;
            local_78 = local_70;
          }
          else if (uVar1 == 0x66a5de35f449ba02) {
            return;
          }
        }
        if ((longlong)uVar1 < -0x6518cc05a3b798a4) break;
        if (uVar1 == 0x9ae733fa5c48675c) {
          local_88 = *param_1;
          local_90 = 0xc3a99ddb6079b09c;
          if (local_88 == 0) {
            local_90 = 0x210450f745b89960;
          }
          local_98 = 0x47a18ec2b1f12362;
        }
        else if (uVar1 == 0xcf9815d204ebfb08) {
          thunk_FUN_1801f42e0(local_78,local_80);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          local_90 = 0x38d2b593cba7e21c;
          local_98 = 0x5e776ba63fee581e;
        }
      }
      if (uVar1 != 0x84081319d18893fe) break;
      local_68 = local_88;
      local_80 = param_1[2] - local_88;
      local_90 = 0xcdcf11bcb54cc7aa;
      if (0xfff < local_80) {
        local_90 = 0x75af18a6002d1bd;
      }
      local_98 = 0x257046eb1a73ca2;
      local_78 = local_88;
      local_60 = local_80;
    }
  } while (uVar1 != 0x97fdd0f67bb719d1);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



longlong FUN_1801255e0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  byte local_e0;
  longlong local_d8;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uintptr_t local_b0;
  ulonglong *local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_f8 = 0xc7f3dd1ab554f9af;
  local_100 = 0xca453881ed22d9fa;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_f8 ^ 0x872240ba16492b94;
            uVar1 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0x872240ba16492b94;
            local_f8 = uVar3;
            if ((longlong)uVar1 < -0x718344cf375ccff) break;
            if ((longlong)uVar1 < 0x18aab48f9992f24a) {
              if ((longlong)uVar1 < 0xdb6e59b58762055) {
                if (uVar1 == 0xf8e7cbb30c8a3301) {
                  local_90 = local_f0 << (local_e0 & 0x3f);
                  local_f8 = 0x11c5f85c538e3912;
                  if (local_f0 != local_b0) {
                    local_f8 = 0xc5b8632f2c946e48;
                  }
                  local_100 = 0x1d1b48ee781584f3;
                  local_b8 = 0;
                }
                else if (uVar1 == 0xcdeb0b22b9bbde1) {
                  local_e8 = local_b8;
                  local_98 = local_b8 + local_68;
                  *(undefined8 *)(local_b8 + local_68) = *param_3;
                  local_f8 = 0xc0b9b90a72df227a;
                  if (param_2 != *local_c8) {
                    local_f8 = 0x1099eb6b942927b8;
                  }
                  local_100 = 0x8335fe40dbbd5f2;
                }
              }
              else if (uVar1 == 0xdb6e59b58762055) {
                local_d8 = 0x27;
                local_e0 = 3;
                local_b0 = 0;
                local_c8 = param_1 + 1;
                uVar1 = *param_1;
                local_68 = param_2 - uVar1;
                local_60 = ((longlong)(param_1[1] - uVar1) >> 3) + 1;
                local_a0 = param_1 + 2;
                uVar1 = (longlong)(param_1[2] - uVar1) >> 3;
                local_f0 = (uVar1 >> 1) + uVar1;
                if (local_f0 <= local_60) {
                  local_f0 = local_60;
                }
                if (0x1fffffffffffffff - (uVar1 >> 1) < uVar1) {
                  local_f0 = 0x1fffffffffffffff;
                }
                local_f8 = 0xe8d9ad455218fabe;
                if (local_f0 < 0x2000000000000000) {
                  local_f8 = 0xcce7a963d3fd5678;
                }
                local_100 = 0x340062d0df776579;
                local_c0 = param_2;
              }
              else {
                if (uVar1 == 0x10d7e11f3faff0d8) {
                  *param_1 = local_e8;
                  *local_c8 = local_e8 + local_60 * 8;
                  *local_a0 = local_f0 * 8 + local_e8;
                  return local_98;
                }
                if (uVar1 == 0x130be55305db3c65) {
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b0);
                }
              }
            }
            else if ((longlong)uVar1 < 0x4dc7aa2de314c204) {
              if (uVar1 == 0x18aab48f9992f24a) {
                FUN_1802079d0(local_e8,*param_1,local_c0 - *param_1);
                FUN_1802079d0(local_98 + 8,param_2);
                local_f8 = 0x31fc630d2486f937;
                local_100 = 0x884fdc07527c52d2;
              }
              else if (uVar1 == 0x30591fb7a1d4f221) {
                thunk_FUN_1801f42e0(local_78,local_80);
                local_f8 = 0xe8e94831559f70f9;
                local_100 = 0xf83ea92e6a308021;
              }
            }
            else if (uVar1 == 0x4dc7aa2de314c204) {
              lVar2 = FUN_1801d61c8(local_90 + local_d8);
              local_b8 = local_d8 + lVar2 & 0xffffffffffffffe0;
              *(longlong *)(local_b8 - 8) = lVar2;
              local_f8 = 0x43146357eaa63be;
              local_100 = 0x8eff6875531de5f;
            }
            else if (uVar1 == 0x65169d8370ca44a7) {
              local_78 = local_88;
              local_80 = *local_a0 - local_88;
              local_f8 = 0xa94c7907b5d6bb42;
              if (local_80 < 0x1000) {
                local_f8 = 0x4979f6df0754de0;
              }
              local_100 = 0x34ce80da51a1bfc1;
              local_58 = local_78;
              local_50 = local_80;
            }
          }
          if (-0x37751911809b0879 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x464c40f58905541b) {
            if (uVar1 == 0x9d82f9dde4770483) {
              local_48 = *(ulonglong *)(local_88 - 8);
              local_f8 = 0x23bede69b298e234;
              if (0x1f < (local_58 - local_48) - 8) {
                local_f8 = 0x891395dff77e35b5;
              }
              local_100 = 0x9a18708cf2a509d0;
            }
            else if (uVar1 == 0xb9a6aee5403debe4) {
              local_80 = local_50 + local_d8;
              local_f8 = 0x1cfb3c731f100a5b;
              local_100 = 0x2ca223c4bec4f87a;
              local_78 = local_48;
            }
          }
          else if (uVar1 == 0xb9b3bf0a76faabe5) {
            local_88 = *param_1;
            local_f8 = 0xf8532e3db01ab9ec;
            if (local_88 != 0) {
              local_f8 = 0x8d9252a1ff7f0d93;
            }
            local_100 = 0xe884cf228fb54934;
          }
          else if (uVar1 == 0xc53474726007b2a5) {
            local_f8 = 0x8623aeff575899e6;
            if (0x1ffffffffffffffb < local_f0) {
              local_f8 = 0x2b1d4ac0f26fe27;
            }
            local_100 = 0xcbe404d2b44c5be2;
          }
        }
        if ((longlong)uVar1 < -0x275cd43eab7e1545) break;
        if (uVar1 == 0xd8a32bc15481eabb) {
          local_f8 = 0x14fce350851d3199;
          if (local_f0 < 0x200) {
            local_f8 = 0xa825207adfb68ad;
          }
          local_100 = 0xd1c89722e51a833c;
        }
        else if (uVar1 == 0xdb4ac52548e1eb91) {
          local_b8 = FUN_1801d61c8(local_90);
          local_f8 = 0x7694865615d5fd2c;
          local_100 = 0x7a4a36e43e4e40cd;
        }
        else if (uVar1 == 0xdcd9cf958d6f9fc7) goto LAB_180125dce;
      }
      if (uVar1 != 0xc88ae6ee7f64f788) break;
      FUN_1802079d0(local_e8);
      local_f8 = 0xeb65908dd02ecf67;
      local_100 = 0x52d62f87a6d46482;
    }
  } while (uVar1 != 0xc955d07ebb6aa5c5);
LAB_180125dce:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_180125e50(longlong *param_1,longlong *param_2,ulonglong param_3,float *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_508 [32];
  float *local_4e8;
  ulonglong local_4d8;
  ulonglong local_4d0;
  int local_4c4;
  undefined4 local_4c0;
  float local_4bc;
  ulonglong local_4b8;
  float *local_4b0;
  char local_4a2;
  char local_4a1;
  longlong *local_4a0;
  longlong *local_498;
  longlong *local_490;
  longlong *local_488;
  longlong *local_480;
  ulonglong local_478;
  longlong *local_470;
  longlong *local_468;
  longlong *local_460;
  longlong *local_458;
  longlong *local_450;
  longlong *local_448;
  longlong *local_440;
  longlong *local_438;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  undefined8 local_408;
  longlong *local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  longlong *local_3c0;
  ulonglong local_3b8;
  longlong local_3b0;
  undefined8 *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong *local_340;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  longlong local_310;
  longlong *local_308;
  longlong local_300;
  longlong *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  ulonglong local_270;
  longlong *local_268;
  longlong *local_260;
  longlong local_258;
  ulonglong local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  ulonglong local_190;
  longlong local_188;
  longlong *local_180;
  undefined8 *local_178;
  longlong local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  longlong local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  ulonglong *local_118;
  ulonglong *local_110;
  longlong local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_508;
  local_4d0 = 0xeda3803f521f5e9e;
  local_4d8 = 0x6ff7ce293861ed3b;
  local_1a8 = (longlong)param_2 - (longlong)param_1;
  local_1a0 = param_1;
  local_198 = param_2;
  local_190 = param_3;
LAB_180125f70:
  uVar12 = local_270;
  uVar9 = local_4d0 ^ 0x95cb5d0bb0a392c3;
  uVar5 = local_4d0 ^ local_4d8;
  local_4d8 = local_4d8 ^ 0x95cb5d0bb0a392c3;
  bVar6 = (byte)local_408;
  local_4d0 = uVar9;
  if (-0x131d5379a719e287 < (longlong)uVar5) {
    bVar7 = (byte)local_478;
    if (0x1d7ebee38507198c < (longlong)uVar5) {
      if ((longlong)uVar5 < 0x435ed9395c417dfc) {
        if ((longlong)uVar5 < 0x29b32f9b169ec4cb) {
          if ((longlong)uVar5 < 0x2613553db65b765f) {
            if (uVar5 == 0x1d7ebee38507198d) {
              local_4d0 = 0x56adba153a7e4a8c;
              if (local_338 < local_430) {
                local_4d0 = 0x72bd2a70df4fcd52;
              }
              local_4d8 = 0xf995862a42095dce;
              local_380 = local_370;
            }
            else if (uVar5 == 0x22b56ffdd5e2d432) {
              local_4d0 = 0x84d9dc3a6fa0e6a2;
              if (local_4a2 != '\0') {
                local_4d0 = 0xa77119ce39a5f597;
              }
              local_4d8 = 0x6cb02873ab9f49a;
            }
          }
          else if (uVar5 == 0x2613553db65b765f) {
            local_4a0 = local_228;
            local_498 = local_230;
            local_68 = local_238;
            local_60 = local_240;
            local_368 = local_248;
            local_1b0 = local_250;
            local_4d0 = 0xfda0440c058ce367;
            if ((longlong)local_238 < (longlong)local_478) {
              local_4d0 = 0x24059da514b72184;
            }
            local_4d8 = 0xc165b27aae2cecbf;
          }
          else if (uVar5 == 0x2922c3c13d8557da) {
            local_2c8 = *local_2e0;
            local_108 = *local_440;
            local_100 = (undefined8 *)(local_108 + 8);
            local_420 = (float)FUN_180173360(local_100,*local_4b0 * local_4bc,local_4c0);
            local_f8 = (undefined8 *)(local_2c8 + 8);
            local_328 = (float)FUN_180173360(local_f8,*local_4b0 * local_4bc,local_4c0);
            local_4d0 = 0x6a29ec0f052c4447;
            if (local_328 != local_420) {
              local_4d0 = 0x377047337d37c102;
            }
            local_4d8 = 0x635a8a99946da2b1;
          }
        }
        else if ((longlong)uVar5 < 0x3cc5f676aba00fd8) {
          if (uVar5 == 0x29b32f9b169ec4cb) {
            local_398 = local_490 + -1;
            *local_2f8 = local_490[-1];
            local_490[-1] = local_258;
            local_4d0 = 0xbc7e81721ebf9bb1;
            local_4d8 = 0x5d53a016de1c2e3;
            local_3a0 = local_2f8;
            local_390 = local_400;
            local_388 = local_438;
          }
          else if (uVar5 == 0x33a66206cafaaad0) {
            lVar11 = *local_488;
            *local_488 = *local_468;
            *local_468 = lVar11;
            local_4d0 = 0x3d720c0c323741f;
            local_4d8 = 0x543cc938109adb4;
LAB_180126e6f:
            local_3f8 = local_488 + 1;
          }
        }
        else if (uVar5 == 0x3cc5f676aba00fd8) {
          local_450 = (longlong *)((local_1b0 >> (bVar7 & 0x3f) & 0x3ffffffffffffff8) + (longlong)local_4a0);
          local_308 = local_498 + -1;
          local_188 = (longlong)local_308 - (longlong)local_368 >> (bVar6 & 0x3f);
          local_4d0 = 0x3505026278b97c28;
          if (0x28 < local_188) {
            local_4d0 = 0x8638eac254807782;
          }
          local_4d8 = 0x765bdb5b24f801d4;
        }
        else if (uVar5 == 0x3d6fad99d9d0e191) {
          local_460 = local_220;
          local_2c0 = *local_358;
          local_f0 = *local_220;
          local_e8 = (undefined8 *)(local_f0 + 8);
          local_41c = (float)FUN_180173360(local_e8,*local_4b0 * local_4bc,local_4c0);
          local_e0 = (undefined8 *)(local_2c0 + 8);
          local_324 = (float)FUN_180173360(local_e0,*local_4b0 * local_4bc,local_4c0);
          local_4d0 = 0x38a6f7e6d3b4efbd;
          if (local_324 != local_41c) {
            local_4d0 = 0x555303cabd5506e9;
          }
          if (NAN(local_324) || NAN(local_41c)) {
            local_4d0 = 0x555303cabd5506e9;
          }
          local_4d8 = 0xf8afd56c8f6567c6;
        }
        else if (uVar5 == 0x4071d117f1d2b633) {
          uVar5 = local_270 - 1;
          local_50 = local_4a0[uVar5];
          local_4e8 = param_4;
          FUN_180128b90(local_4a0,uVar5,local_138,&local_50);
          local_4d0 = 0xb649948df3bf78bb;
          if (local_478 < uVar12) {
            local_4d0 = 0x2209c421af5b441e;
          }
          local_4d8 = 0x627815365e89f22d;
          local_1e0 = local_498;
          local_270 = uVar5;
        }
      }
      else if ((longlong)uVar5 < 0x50488679e34fdc13) {
        if ((longlong)uVar5 < 0x44ec83e08653721f) {
          if (uVar5 == 0x435ed9395c417dfc) {
            FUN_1801293e0(local_4a0,local_450,local_308,param_4);
            local_4d0 = 0x5c2135bb339b1508;
            local_4d8 = 0xb0c3993d6b7d0872;
          }
          else if (uVar5 == 0x446920d957c1b22e) {
            lVar11 = *local_438;
            *local_438 = *local_400;
            *local_400 = lVar11;
            local_388 = local_438 + 1;
            local_4d0 = 0x1241a862384e0a52;
            local_4d8 = 0xabea13114b105300;
            local_3a0 = local_480;
            local_398 = local_490;
            local_390 = local_400;
          }
        }
        else if (uVar5 == 0x44ec83e08653721f) {
          local_278 = local_2e0;
          local_4d0 = 0x2802b97fdc1aa99;
          if (local_4a0 < local_2e0) {
            local_4d0 = 0x153bf66e1e69879c;
          }
          local_4d8 = 0xf5f53f61ba6cf10c;
          local_448 = local_2e0;
        }
        else if (uVar5 == 0x4e390317e0a3392a) {
          local_458 = local_210;
          local_360 = local_218;
          local_3c0 = local_218 + -1;
          local_2b8 = *local_210;
          local_d8 = local_218[-1];
          local_d0 = (undefined8 *)(local_d8 + 8);
          local_418 = (float)FUN_180173360(local_d0,*local_4b0 * local_4bc,local_4c0);
          local_c8 = (undefined8 *)(local_2b8 + 8);
          local_320 = (float)FUN_180173360(local_c8,*local_4b0 * local_4bc,local_4c0);
          local_4d0 = 0x1fd91e9ba1eddfb0;
          if (local_320 != local_418) {
            local_4d0 = 0x88691c20e925c8d9;
          }
          if (NAN(local_320) || NAN(local_418)) {
            local_4d0 = 0x88691c20e925c8d9;
          }
          local_4d8 = 0xc7e8acf1ca282e64;
        }
        else if (uVar5 == 0x4f81b0d1230de6bd) {
          local_4d0 = 0xa4b8835fa18cd686;
          if (local_320 < local_418) {
            local_4d0 = 0xa858bfa7f4c4a0cb;
          }
          local_4d8 = 0x4ed4a76bde5f8d77;
          local_3e0 = local_458;
        }
      }
      else if ((longlong)uVar5 < 0x697766977b1ad7f6) {
        if (uVar5 == 0x542acdaae95a63b3) {
          local_4d0 = 0xd7d2e9735b0ebd7;
          if (local_328 < local_420) {
            local_4d0 = 0xbee4b981f44ec25d;
          }
          local_4d8 = 0x4991ad77b3e399c8;
          goto LAB_1801283c2;
        }
        if (uVar5 == 0x675b6fc0419674a0) {
          local_470 = local_460 + 1;
          local_4d0 = 0x76d3a468204a63c0;
          if (local_470 < local_498) {
            local_4d0 = 0x86535e78f935a191;
          }
          local_4d8 = 0xbb3cf3e120e54000;
          local_220 = local_470;
        }
        else if (uVar5 == 0x50488679e34fdc13) {
          if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_508)) {
          }
          return;
        }
      }
      else if (uVar5 == 0x697766977b1ad7f6) {
        uVar12 = *(ulonglong *)(local_300 + 0x18);
        puVar10 = local_178;
        if (local_4b8 < *(ulonglong *)(local_300 + 0x20)) {
          puVar10 = (undefined8 *)*local_178;
        }
        uVar5 = *local_118;
        puVar8 = local_3a8;
        if (local_4b8 < *local_110) {
          puVar8 = (undefined8 *)*local_3a8;
        }
        uVar9 = uVar5;
        if (uVar12 < uVar5) {
          uVar9 = uVar12;
        }
        iVar4 = memcmp(puVar8,puVar10,uVar9);
        bVar3 = uVar5 < uVar12;
        if (iVar4 != local_4c4) {
          bVar3 = iVar4 < local_4c4;
        }
        local_4d0 = 0xbe25a475b0b6365;
        if (bVar3) {
          local_4d0 = 0x2ff2ca22be3ae4bb;
        }
        local_4d8 = 0xa4da6678237c7427;
        local_380 = local_370;
      }
      else if (uVar5 == 0x769044caf4b8e186) {
        local_438 = local_3e8;
        local_490 = local_3f0;
        local_4d0 = 0xaeada2ba7f2c7f79;
        if (local_4a0 < local_58) {
          local_4d0 = 0x1b0fd602b566fc5d;
        }
        local_4d8 = 0x5536d51555c5c577;
        local_218 = local_58;
        local_210 = local_348;
        local_3d8 = local_348;
        local_3d0 = local_58;
      }
      goto LAB_180125f70;
    }
    if (0x1e2aa61908fd7b < (longlong)uVar5) {
      if ((longlong)uVar5 < 0xa30593396be8228) {
        if ((longlong)uVar5 < 0x694ec53422ad9ab) {
          if (uVar5 == 0x1e2aa61908fd7c) {
            local_370 = local_280;
            local_180 = local_280 + -1;
            local_300 = local_280[-1];
            local_430 = (float)FUN_180173360(local_3a8,*local_4b0 * local_4bc,local_4c0);
            local_178 = (undefined8 *)(local_300 + 8);
            local_338 = (float)FUN_180173360(local_178,*local_4b0 * local_4bc,local_4c0);
            local_4d0 = 0x93e32cc61e2ec75c;
            if (local_338 != local_430) {
              local_4d0 = 0xe7eaf4b2e0330927;
            }
            if (NAN(local_338) || NAN(local_430)) {
              local_4d0 = 0xe7eaf4b2e0330927;
            }
            local_4d8 = 0xfa944a51653410aa;
          }
          else if (uVar5 == 0x672776bf686de7b) {
            local_3b8 = (local_68 >> 2) + (local_68 >> (bVar7 & 0x3f));
            local_c0 = local_480;
            local_b8 = local_490;
            local_4d0 = 0x491bc85796932835;
            if ((longlong)local_480 - (longlong)local_368 < (longlong)local_60 - (longlong)local_490) {
              local_4d0 = 0x49b97a17c6784b6;
            }
            local_4d8 = 0xbb31a1860b671503;
          }
          goto LAB_180125f70;
        }
        if (uVar5 == 0x694ec53422ad9ab) {
          local_3e8 = local_468 + 1;
          local_4d0 = 0x6e8505cdbc7e1eff;
          if (local_3e8 < local_498) {
            local_4d0 = 0xfc4cdba4d34c5bfe;
          }
          local_4d8 = 0x1815410748c6ff79;
          local_3f0 = local_3f8;
          local_260 = local_3f8;
          local_268 = local_3e8;
          goto LAB_180125f70;
        }
        if (uVar5 != 0x97366969141e6f6) goto LAB_180125f70;
        uVar12 = *(ulonglong *)(local_2c8 + 0x18);
        puVar10 = local_f8;
        if (local_4b8 < *(ulonglong *)(local_2c8 + 0x20)) {
          puVar10 = (undefined8 *)*local_f8;
        }
        uVar5 = *(ulonglong *)(local_108 + 0x18);
        puVar8 = local_100;
        if (local_4b8 < *(ulonglong *)(local_108 + 0x20)) {
          puVar8 = (undefined8 *)*local_100;
        }
        uVar9 = uVar5;
        if (uVar12 < uVar5) {
          uVar9 = uVar12;
        }
        iVar4 = memcmp(puVar8,puVar10,uVar9);
        bVar3 = uVar5 < uVar12;
        if (iVar4 != local_4c4) {
          bVar3 = iVar4 < local_4c4;
        }
        local_4d0 = 0x51cb7399f4e730b9;
        if (bVar3) {
          local_4d0 = 0xe252e48f35191933;
        }
        local_4d8 = 0x1527f07972b442a6;
      }
      else {
        if (0x12af317f9c38cfad < (longlong)uVar5) {
          if (uVar5 == 0x12af317f9c38cfae) {
            local_4d0 = 0x48c0e2e1f6a5d931;
            if (local_314 < local_40c) {
              local_4d0 = 0xe274daa8b79c8e51;
            }
            local_4d8 = 0x2f9b8d21b733ad91;
            goto LAB_180127a54;
          }
          if (uVar5 == 0x163bcf53d27ec029) {
            local_2a8 = *local_348;
            local_a8 = *local_468;
            local_a0 = (undefined8 *)(local_a8 + 8);
            local_410 = (float)FUN_180173360(local_a0,*local_4b0 * local_4bc,local_4c0);
            local_98 = (undefined8 *)(local_2a8 + 8);
            local_318 = (float)FUN_180173360(local_98,*local_4b0 * local_4bc,local_4c0);
            local_4d0 = 0x3fbeeb59ee849df2;
            if (local_318 != local_410) {
              local_4d0 = 0xa0fa4df75ecf621b;
            }
            if (NAN(local_318) || NAN(local_410)) {
              local_4d0 = 0xa0fa4df75ecf621b;
            }
            local_4d8 = 0xaaca14c4c871e033;
          }
          else if (uVar5 == 0x17cede739c8a01cb) {
            local_4d0 = 0x472c9b690af4c52c;
            local_4d8 = 0x41b8773a48de1c87;
            goto LAB_180126e6f;
          }
          goto LAB_180125f70;
        }
        if (uVar5 == 0xa30593396be8228) {
          local_4d0 = 0x6f590f6adedb25aa;
          if (local_318 < local_410) {
            local_4d0 = 0x8ae94baed84f5ef4;
          }
          local_4d8 = 0xfc790f642cf7bf72;
          local_3f0 = local_488;
          local_3e8 = local_468;
          goto LAB_180125f70;
        }
        if (uVar5 != 0x10b7ad43749a035a) goto LAB_180125f70;
        uVar12 = *(ulonglong *)(local_2e8 + 0x18);
        puVar10 = local_140;
        if (local_4b8 < *(ulonglong *)(local_2e8 + 0x20)) {
          puVar10 = (undefined8 *)*local_140;
        }
        uVar5 = *(ulonglong *)(local_150 + 0x18);
        puVar8 = local_148;
        if (local_4b8 < *(ulonglong *)(local_150 + 0x20)) {
          puVar8 = (undefined8 *)*local_148;
        }
        uVar9 = uVar5;
        if (uVar12 < uVar5) {
          uVar9 = uVar12;
        }
        iVar4 = memcmp(puVar8,puVar10,uVar9);
        bVar3 = uVar5 < uVar12;
        if (iVar4 != local_4c4) {
          bVar3 = iVar4 < local_4c4;
        }
        local_4d0 = 0x61b763931b9ed174;
        if (bVar3) {
          local_4d0 = 0xbfe0b4a461b6dd3b;
        }
        local_4d8 = 0x4895a052261b86ae;
      }
      local_448 = local_440;
      goto LAB_180125f70;
    }
    if ((longlong)uVar5 < -0x87fe14a98602031) {
      if ((longlong)uVar5 < -0xdd5962e620bc2ca) {
        if (uVar5 == 0xece2ac8658e61d7a) {
          local_4d0 = 0xb280be93dfa90865;
          local_4d8 = 0x524e779c7bac7ef5;
          local_278 = local_450;
        }
        else if (uVar5 == 0xf063319970787656) {
          uVar12 = local_188 + local_478 >> (bVar6 & 0x3f);
          lVar13 = uVar12 << (bVar7 & 0x3f);
          plVar2 = local_4a0 + uVar12;
          FUN_1801293e0(local_4a0,plVar2,local_4a0 + lVar13,param_4);
          lVar11 = local_3c8 - uVar12;
          FUN_1801293e0(local_450 + lVar11,local_450,local_450 + uVar12,param_4);
          plVar1 = local_308 + lVar11;
          FUN_1801293e0(local_308 + (local_3c8 - lVar13),plVar1,local_308,param_4);
          FUN_1801293e0(plVar2,local_450,plVar1,param_4);
          local_4d0 = 0xf2c90503b21db61a;
          local_4d8 = 0x1e2ba985eafbab60;
        }
      }
      else if (uVar5 == 0xf22a69d19df43d36) {
        FUN_180125e50(local_490,local_498,local_3b8,param_4);
        local_4d0 = 0x65075bab90db7d1a;
        local_4d8 = 0xe2020bdc921f8244;
        local_208 = local_4a0;
        local_200 = local_c0;
        local_1f8 = local_4a0;
        local_1f0 = local_480;
      }
      else if (uVar5 == 0xf77514f647ad5b95) {
        local_358 = local_448;
        local_470 = local_450 + 1;
        local_4d0 = 0xcd222ca3138ef53d;
        if (local_470 < local_498) {
          local_4d0 = 0x3da2d6b3caf1376c;
        }
        local_4d8 = 0xcd7b2a1321d6fd;
        local_220 = local_470;
      }
    }
    else if ((longlong)uVar5 < -0x6a0ecf6d4b02643) {
      if (uVar5 == 0xf7801eb5679fdfcf) {
        local_3e0 = local_458 + -1;
        local_4d0 = 0xb84392a79f413a4;
        if (local_458 == local_360) {
          local_4d0 = 0x6e2c8d6230cb3129;
        }
        local_4d8 = 0x88a095ae1a501c95;
        local_2d8 = local_3e0;
      }
      else if (uVar5 == 0xf881d158e79f696d) {
        local_1e8 = local_378 + 1;
        local_4d0 = 0x7048f06932c39d52;
        if (local_1e8 == local_1b8) {
          local_4d0 = 0xaa5cc67b7b673e21;
        }
        local_4d8 = 0xfa1440029828e232;
        local_90 = local_1e8;
      }
    }
    else if (uVar5 == 0xf95f13092b4fd9bd) {
      uVar12 = *(ulonglong *)(local_2b0 + 0x18);
      puVar10 = local_b0;
      if (local_4b8 < *(ulonglong *)(local_2b0 + 0x20)) {
        puVar10 = (undefined8 *)*local_b0;
      }
      uVar5 = *(ulonglong *)(local_3b0 + 0x18);
      puVar8 = local_3a8;
      if (local_4b8 < *(ulonglong *)(local_3b0 + 0x20)) {
        puVar8 = (undefined8 *)*local_3a8;
      }
      uVar9 = uVar5;
      if (uVar12 < uVar5) {
        uVar9 = uVar12;
      }
      iVar4 = memcmp(puVar8,puVar10,uVar9);
      bVar3 = uVar5 < uVar12;
      if (iVar4 != local_4c4) {
        bVar3 = iVar4 < local_4c4;
      }
      local_4d0 = 0xb5cb0c08ed57cbcd;
      if (bVar3) {
        local_4d0 = 0xcc36621d97c3522e;
      }
      local_4d8 = 0x7a0ac866b898cb30;
    }
    else if (uVar5 == 0xfb9b77af2ae9ba0e) {
      local_340 = local_3d0;
      local_4a2 = local_3d0 == local_4a0;
      local_4d0 = 0xd369ef74504ec4b5;
      if ((bool)local_4a2) {
        local_4d0 = 0xf7aef7e2732acefc;
      }
      local_4a1 = local_438 == local_498;
      local_480 = local_3d8;
      if (!(bool)local_4a1) {
        local_4d0 = 0xd369ef74504ec4b5;
      }
      local_4d8 = 0xf1dc808985ac1087;
    }
    else if (uVar5 == 0xff64e7e57a492645) {
      uVar12 = *(ulonglong *)(local_2f0 + 0x18);
      puVar10 = local_158;
      if (local_4b8 < *(ulonglong *)(local_2f0 + 0x20)) {
        puVar10 = (undefined8 *)*local_158;
      }
      uVar5 = *(ulonglong *)(local_168 + 0x18);
      puVar8 = local_160;
      if (local_4b8 < *(ulonglong *)(local_168 + 0x20)) {
        puVar8 = (undefined8 *)*local_160;
      }
      uVar9 = uVar5;
      if (uVar12 < uVar5) {
        uVar9 = uVar12;
      }
      iVar4 = memcmp(puVar8,puVar10,uVar9);
      bVar3 = uVar5 < uVar12;
      if (iVar4 != local_4c4) {
        bVar3 = iVar4 < local_4c4;
      }
      local_4d0 = 0xfbeb9a20e3406302;
      if (bVar3) {
        local_4d0 = 0xf7f0f33aae3606c3;
      }
      local_4d8 = 0xc6b849584dfbccd;
      local_3d8 = local_458;
      local_3d0 = local_360;
    }
    goto LAB_180125f70;
  }
  if ((longlong)uVar5 < -0x4654448c8ca1a6ae) {
    if ((longlong)uVar5 < -0x6a8b0062d90a823f) {
      if ((longlong)uVar5 < -0x78faaf88fd3b00a2) {
        if ((longlong)uVar5 < -0x7cdb537b9c5bf0cf) {
          if (uVar5 == 0x8212debd55191238) {
            local_400 = local_340 + -1;
            local_4d0 = 0x7ec1192b19f9eb4e;
            if (local_4a1 != '\0') {
              local_4d0 = 0xf42f139ce1c1e34c;
            }
            local_4d8 = 0x3aa839f24e385960;
          }
          else if (uVar5 == 0x82544e166a7eb3a5) {
            local_4bc = 13.0;
            local_478 = 1;
            local_4c0 = 1;
            local_4c4 = 0;
            local_310 = 0x101;
            local_408 = 3;
            local_4b8 = 0xf;
            local_3c8 = 0;
            local_4d0 = 0x596df15d6e176a2b;
            if ((longlong)local_1a8 < 0x101) {
              local_4d0 = 0x9ddbbcf115e9e474;
            }
            local_4d8 = 0x7f7ea460d84c1c74;
            local_298 = local_1a0;
            local_290 = local_198;
            local_288 = local_1a0;
            local_250 = local_1a8;
            local_248 = local_1a0;
            local_240 = local_198;
            local_238 = local_190;
            local_230 = local_198;
            local_228 = local_1a0;
            local_4b0 = param_4;
          }
        }
        else if (uVar5 == 0x8324ac8463a40f31) {
          lVar11 = *local_2d8;
          *local_2d8 = *local_3c0;
          *local_3c0 = lVar11;
          local_4d0 = 0x5e8a7e9cf85795c1;
          local_4d8 = 0xb8066650d2ccb87d;
          local_3e0 = local_2d8;
        }
        else if (uVar5 == 0x8484d3d516a5e763) {
          local_2a0 = *local_460;
          local_88 = *local_358;
          local_80 = (undefined8 *)(local_88 + 8);
          local_40c = (float)FUN_180173360(local_80,*local_4b0 * local_4bc,local_4c0);
          local_78 = (undefined8 *)(local_2a0 + 8);
          local_314 = (float)FUN_180173360(local_78,*local_4b0 * local_4bc,local_4c0);
          local_4d0 = 0x5ef69354667dcbac;
          if (local_314 != local_40c) {
            local_4d0 = 0xa43ed663ee518a77;
          }
          if (NAN(local_314) || NAN(local_40c)) {
            local_4d0 = 0xa43ed663ee518a77;
          }
          local_4d8 = 0xb691e71c726945d9;
        }
      }
      else if ((longlong)uVar5 < -0x74d753a562b96f64) {
        if (uVar5 == 0x8705507702c4ff5e) {
          local_290 = local_1f0;
          local_298 = local_1f8;
          local_240 = local_200;
          local_288 = local_208;
          local_250 = (longlong)local_200 - (longlong)local_208;
          local_4d0 = 0x7071af72e5006db6;
          if ((longlong)local_250 < local_310) {
            local_4d0 = 0xb4c7e2de9efee3e9;
          }
          local_4d8 = 0x5662fa4f535b1be9;
          local_238 = local_3b8;
          local_248 = local_288;
          local_230 = local_290;
          local_228 = local_298;
        }
        else if (uVar5 == 0x8a5cb06baaeb7f60) {
          local_350 = local_1e8;
          local_3b0 = *local_1e8;
          local_2b0 = *local_378;
          local_3a8 = (undefined8 *)(local_3b0 + 8);
          local_414 = (float)FUN_180173360(local_3a8,*local_4b0 * local_4bc,local_4c0);
          local_b0 = (undefined8 *)(local_2b0 + 8);
          local_31c = (float)FUN_180173360(local_b0,*local_4b0 * local_4bc,local_4c0);
          local_4d0 = 0x8c37876ac81e00fe;
          if (local_31c != local_414) {
            local_4d0 = 0xdd47c850a202a221;
          }
          if (NAN(local_31c) || NAN(local_414)) {
            local_4d0 = 0xdd47c850a202a221;
          }
          local_4d8 = 0x75689463e351d943;
        }
      }
      else if (uVar5 == 0x8b28ac5a9d46909c) {
        *local_370 = *local_180;
        local_4d0 = 0xa42ca68d8f2f02e7;
        local_4d8 = 0xa4328c2b9627ff9b;
        local_280 = local_180;
      }
      else if (uVar5 == 0x8c2ef589fe3f47c5) {
        local_4d0 = 0x94e0a021a165acbb;
        if (local_32c < local_424) {
          local_4d0 = 0x844f83213131b539;
        }
        local_4d8 = 0x82db6f72731b6c92;
        local_3f8 = local_488;
      }
      else if (uVar5 == 0x9320000ef22c9ad8) {
        local_4d0 = 0x631d9338708a782a;
        if (local_488 == local_468) {
          local_4d0 = 0x47752f4d26fad331;
        }
        local_4d8 = 0x50bbf13eba70d2fa;
      }
    }
    else if ((longlong)uVar5 < -0x566a4cb5406baada) {
      if ((longlong)uVar5 < -0x5e45e4b6fce3fef3) {
        if (uVar5 == 0x9574ff9d26f57dc1) {
          uVar12 = *(ulonglong *)(local_2a8 + 0x18);
          puVar10 = local_98;
          if (local_4b8 < *(ulonglong *)(local_2a8 + 0x20)) {
            puVar10 = (undefined8 *)*local_98;
          }
          uVar5 = *(ulonglong *)(local_a8 + 0x18);
          puVar8 = local_a0;
          if (local_4b8 < *(ulonglong *)(local_a8 + 0x20)) {
            puVar8 = (undefined8 *)*local_a0;
          }
          uVar9 = uVar5;
          if (uVar12 < uVar5) {
            uVar9 = uVar12;
          }
          iVar4 = memcmp(puVar8,puVar10,uVar9);
          bVar3 = uVar5 < uVar12;
          if (iVar4 != local_4c4) {
            bVar3 = iVar4 < local_4c4;
          }
          local_4d0 = 0xfb8c59509006977d;
          if (bVar3) {
            local_4d0 = 0x1e3c1d949692ec23;
          }
          local_4d8 = 0x68ac595e622a0da5;
          local_3f0 = local_488;
          local_3e8 = local_468;
        }
        else if (uVar5 == 0xa12f20cad1bae33d) {
          uVar12 = *(ulonglong *)(local_2d0 + 0x18);
          puVar10 = local_120;
          if (local_4b8 < *(ulonglong *)(local_2d0 + 0x20)) {
            puVar10 = (undefined8 *)*local_120;
          }
          uVar5 = *(ulonglong *)(local_130 + 0x18);
          puVar8 = local_128;
          if (local_4b8 < *(ulonglong *)(local_130 + 0x20)) {
            puVar8 = (undefined8 *)*local_128;
          }
          uVar9 = uVar5;
          if (uVar12 < uVar5) {
            uVar9 = uVar12;
          }
          iVar4 = memcmp(puVar8,puVar10,uVar9);
          bVar3 = uVar5 < uVar12;
          if (iVar4 != local_4c4) {
            bVar3 = iVar4 < local_4c4;
          }
          local_4d0 = 0xd373f37020c6dec8;
          if (bVar3) {
            local_4d0 = 0xc3dcd070b092c74a;
          }
          local_4d8 = 0xc5483c23f2b81ee1;
          local_3f8 = local_488;
        }
      }
      else if (uVar5 == 0xa1ba1b49031c010d) {
        local_4d0 = 0x4b52eb5869f9d9bb;
        if (local_490 == local_438) {
          local_4d0 = 0x35dd62d28ed1cf5e;
        }
        local_4d8 = 0xe0159c6e2ff91238;
      }
      else if (uVar5 == 0xa82f5c3341537b62) {
        local_4d0 = 0xbf6eacf86e3588b1;
        if (local_31c < local_414) {
          local_4d0 = 0xc693c2ed14a11152;
        }
        local_4d8 = 0x70af68963bfa884c;
      }
    }
    else if ((longlong)uVar5 < -0x52032959cdcf9ed1) {
      if (uVar5 == 0xa995b34abf945526) {
        local_3e8 = local_1c0;
        local_58 = local_1c8;
        local_3f0 = local_1d0;
        local_348 = local_1d8;
        local_4d0 = 0x1131b6d5d1793e15;
        if (local_1c0 < local_498) {
          local_4d0 = 0x83f868bcbe4b7b14;
        }
        local_4d8 = 0x67a1f21f25c1df93;
        local_268 = local_3e8;
        local_260 = local_3f0;
      }
      else if (uVar5 == 0xab4777364600cb83) {
        lVar11 = *local_480;
        *local_480 = *local_490;
        *local_490 = lVar11;
        local_4d0 = 0xeaf5bf14a9f9103a;
        local_4d8 = 0x3f3d41a808d1cd5c;
      }
    }
    else if (uVar5 == 0xadfcd6a63230612f) {
      local_4d0 = 0xc8c99d469acd8360;
      if (local_324 < local_41c) {
        local_4d0 = 0x81a2191a8cc747c3;
      }
      local_4d8 = 0x4c4d4e938c686403;
LAB_180127a54:
      local_470 = local_460;
    }
    else if (uVar5 == 0xaf383c3f78771742) {
      *local_380 = local_3b0;
      local_1e8 = local_350 + 1;
      local_4d0 = 0xb579cdbf907ffe6e;
      if (local_1e8 == local_1b8) {
        local_4d0 = 0x6f6dfbadd9db5d1d;
      }
      local_4d8 = 0x3f257dd43a94810e;
    }
    else if (uVar5 == 0xb63caa7b2f5b991e) {
      plVar2 = local_378;
      FUN_1802079d0(local_90,local_378,(longlong)local_350 - (longlong)local_70);
      local_4d0 = 0xffc62fde40188d4c;
      local_4d8 = 0x50fe13e1386f9a0e;
      local_380 = plVar2;
    }
    goto LAB_180125f70;
  }
  if ((longlong)uVar5 < -0x2a3701435ed7229a) {
    if ((longlong)uVar5 < -0x3ff6dd75a32e7785) {
      if ((longlong)uVar5 < -0x454dffeac79f3f21) {
        if (uVar5 == 0xb9abbb73735e5952) {
          local_4d0 = 0xda5610afcd1c502b;
          local_4d8 = 0x73c3a3e57288050d;
          local_1d8 = local_3a0;
          local_1d0 = local_398;
          local_1c8 = local_390;
          local_1c0 = local_388;
        }
        else if (uVar5 == 0xba2d4c56b43fb32f) {
          local_4d0 = 0xbcd77f7464b51829;
          if (local_334 < local_42c) {
            local_4d0 = 0xb0cc166e29c37de8;
          }
          local_4d8 = 0x4b5761c1032ac7e6;
          local_3d8 = local_458;
          local_3d0 = local_360;
        }
      }
      else if (uVar5 == 0xbab200153860c0df) {
        local_4d0 = 0x2d6e1f2bdba76ec2;
        if (local_330 < local_428) {
          local_4d0 = 0xf339c81ca18f628d;
        }
        local_4d8 = 0x44cdceae6223918;
LAB_1801283c2:
        local_448 = local_440;
      }
      else if (uVar5 == 0xbfaa3627770091b5) {
        FUN_180125e50(local_4a0,local_480,local_3b8,param_4);
        local_200 = local_498;
        local_4d0 = 0x14751e87f4b8476;
        local_4d8 = 0x8642019f7d8f7b28;
        local_208 = local_b8;
        local_1f8 = local_490;
        local_1f0 = local_200;
      }
      goto LAB_180125f70;
    }
    if (-0x3178d591500645d5 < (longlong)uVar5) {
      if (uVar5 == 0xce872a6eaff9ba2c) {
        local_2f8 = local_480 + -1;
        local_258 = local_480[-1];
        local_4d0 = 0xd01d68f61e1990f3;
        if (local_340 == local_480) {
          local_4d0 = 0x13aefce0be04712d;
        }
        local_4d8 = 0x3a1dd37ba89ab5e6;
        local_170 = local_258;
      }
      else if (uVar5 == 0xcfc1c46e55cf00fd) {
        local_118 = (ulonglong *)(local_3b0 + 0x18);
        local_110 = (ulonglong *)(local_3b0 + 0x20);
        local_4d0 = 0x3a5d168080db97b1;
        local_4d8 = 0x3a433c2699d36acd;
        local_280 = local_350;
      }
      else if (uVar5 == 0xd43181bbad368a96) {
        plVar2 = local_1e0 + -1;
        local_50 = local_1e0[-1];
        local_1e0[-1] = *local_4a0;
        lVar11 = (longlong)plVar2 - (longlong)local_368;
        local_4e8 = param_4;
        FUN_180128b90(local_4a0,local_3c8,lVar11 >> (bVar6 & 0x3f),&local_50);
        local_4d0 = 0x835661a0f581e25a;
        if (8 < lVar11) {
          local_4d0 = 0x72f6662bbf8b4df;
        }
        local_4d8 = 0xd31ee7d916ce3e49;
        local_1e0 = plVar2;
      }
      goto LAB_180125f70;
    }
    if (uVar5 != 0xc009228a5cd1887b) {
      if (uVar5 == 0xcdef578900af23c0) {
        local_4d0 = 0xe3188cbc815615bc;
        local_4d8 = 0x4a8d3ff63ec2409a;
        local_1d8 = local_358;
        local_1d0 = local_470;
        local_1c8 = local_358;
        local_1c0 = local_470;
      }
      goto LAB_180125f70;
    }
    uVar12 = *(ulonglong *)(local_2c0 + 0x18);
    puVar10 = local_e0;
    if (local_4b8 < *(ulonglong *)(local_2c0 + 0x20)) {
      puVar10 = (undefined8 *)*local_e0;
    }
    uVar5 = *(ulonglong *)(local_f0 + 0x18);
    puVar8 = local_e8;
    if (local_4b8 < *(ulonglong *)(local_f0 + 0x20)) {
      puVar8 = (undefined8 *)*local_e8;
    }
    uVar9 = uVar5;
    if (uVar12 < uVar5) {
      uVar9 = uVar12;
    }
    iVar4 = memcmp(puVar8,puVar10,uVar9);
    bVar3 = uVar5 < uVar12;
    if (iVar4 != local_4c4) {
      bVar3 = iVar4 < local_4c4;
    }
    local_4d0 = 0xec9745bac2ecfd99;
    if (bVar3) {
      local_4d0 = 0xa5fcc1e6d4e6393a;
    }
    local_4d8 = 0x6813966fd4491afa;
  }
  else {
    if ((longlong)uVar5 < -0x1a9fd020456432c5) {
      if ((longlong)uVar5 < -0x1f3136f05bfa8970) {
        if (uVar5 == 0xd5c8febca128dd66) {
          local_398 = local_490 + 1;
          lVar11 = *local_480;
          *local_480 = *local_438;
          *local_438 = lVar11;
          local_3a0 = local_480 + 1;
          local_388 = local_438 + 1;
          local_4d0 = 0xa2e83d8ca6eec709;
          local_4d8 = 0x1b4386ffd5b09e5b;
          local_390 = local_340;
        }
        else if (uVar5 == 0xd831b26a6bc5f1d4) {
          uVar12 = *(ulonglong *)(local_2b8 + 0x18);
          puVar10 = local_c8;
          if (local_4b8 < *(ulonglong *)(local_2b8 + 0x20)) {
            puVar10 = (undefined8 *)*local_c8;
          }
          uVar5 = *(ulonglong *)(local_d8 + 0x18);
          puVar8 = local_d0;
          if (local_4b8 < *(ulonglong *)(local_d8 + 0x20)) {
            puVar8 = (undefined8 *)*local_d0;
          }
          uVar9 = uVar5;
          if (uVar12 < uVar5) {
            uVar9 = uVar12;
          }
          iVar4 = memcmp(puVar8,puVar10,uVar9);
          bVar3 = uVar5 < uVar12;
          if (iVar4 != local_4c4) {
            bVar3 = iVar4 < local_4c4;
          }
          local_4d0 = 0x927954ba58233a6;
          if (bVar3) {
            local_4d0 = 0x5c7a9b3f0ca45eb;
          }
          local_4d8 = 0xe34bb17fda516857;
          local_3e0 = local_458;
        }
      }
      else if (uVar5 == 0xe0cec90fa4057690) {
        local_440 = local_278;
        local_2e8 = *local_278;
        local_2e0 = local_278 + -1;
        local_150 = local_278[-1];
        local_148 = (undefined8 *)(local_150 + 8);
        local_428 = (float)FUN_180173360(local_148,*local_4b0 * local_4bc,local_4c0);
        local_140 = (undefined8 *)(local_2e8 + 8);
        local_330 = (float)FUN_180173360(local_140,*local_4b0 * local_4bc,local_4c0);
        local_4d0 = 0xdd770e0eb207a64b;
        if (local_330 != local_428) {
          local_4d0 = 0x7772a358fefd65ce;
        }
        local_4d8 = 0xcdc0a34dc69da511;
      }
      else if (uVar5 == 0xe2a51891cda5f800) {
        local_70 = local_288;
        local_1b8 = local_290;
        local_378 = local_298;
        local_4d0 = 0x225409f1b8e35268;
        if (local_298 == local_290) {
          local_4d0 = 0x8a9d5ed0bc33e716;
        }
        local_4d8 = 0xdad5d8a95f7c3b05;
      }
      else if (uVar5 == 0xe4599aa39b8aa487) {
        local_488 = local_260;
        local_468 = local_268;
        local_2d0 = *local_268;
        local_130 = *local_348;
        local_128 = (undefined8 *)(local_130 + 8);
        local_424 = (float)FUN_180173360(local_128,*local_4b0 * local_4bc,local_4c0);
        local_120 = (undefined8 *)(local_2d0 + 8);
        local_32c = (float)FUN_180173360(local_120,*local_4b0 * local_4bc,local_4c0);
        local_4d0 = 0xe55f39907bdf1e99;
        if (local_32c != local_424) {
          local_4d0 = 0xc85eecd3545aba61;
        }
        local_4d8 = 0x4470195aaa65fda4;
      }
      goto LAB_180125f70;
    }
    if ((longlong)uVar5 < -0x17988bb7ebeb718b) {
      if (uVar5 == 0xe5602fdfba9bcd3b) {
        local_138 = local_1b0 >> (bVar6 & 0x3f);
        local_4d0 = 0x3508c7c2b02e42cb;
        local_4d8 = 0x757916d541fcf4f8;
        local_270 = local_1b0 >> 4;
      }
      else if (uVar5 == 0xe68c18cc2a9b2dbc) {
        local_3d8 = local_3e0;
        local_3d0 = local_3c0;
        local_4d0 = 0xe0e8c965e33c39a2;
        if (local_4a0 < local_3c0) {
          local_4d0 = 0x554abddd2976ba86;
        }
        local_4d8 = 0x1b73becac9d583ac;
        local_218 = local_3d0;
        local_210 = local_3d8;
      }
      goto LAB_180125f70;
    }
    if (uVar5 != 0xe867744814148e75) {
      if (uVar5 == 0xea00bb8db6832515) {
        local_258 = *local_400;
        *local_400 = local_170;
        *local_2f8 = local_258;
        local_4d0 = 0xec325e5def7062bf;
        local_4d8 = 0xc58171c6f9eea674;
      }
      else if (uVar5 == 0xea6c24347fd35bf1) {
        local_2f0 = *local_3c0;
        local_168 = *local_458;
        local_160 = (undefined8 *)(local_168 + 8);
        local_42c = (float)FUN_180173360(local_160,*local_4b0 * local_4bc,local_4c0);
        local_158 = (undefined8 *)(local_2f0 + 8);
        local_334 = (float)FUN_180173360(local_158,*local_4b0 * local_4bc,local_4c0);
        local_4d0 = 0x3e8e070b5529c568;
        if (local_334 != local_42c) {
          local_4d0 = 0x7bc7acb89b5f5002;
        }
        if (NAN(local_334) || NAN(local_42c)) {
          local_4d0 = 0x7bc7acb89b5f5002;
        }
        local_4d8 = 0xc1eae0ee2f60e32d;
      }
      goto LAB_180125f70;
    }
    uVar12 = *(ulonglong *)(local_2a0 + 0x18);
    puVar10 = local_78;
    if (local_4b8 < *(ulonglong *)(local_2a0 + 0x20)) {
      puVar10 = (undefined8 *)*local_78;
    }
    uVar5 = *(ulonglong *)(local_88 + 0x18);
    puVar8 = local_80;
    if (local_4b8 < *(ulonglong *)(local_88 + 0x20)) {
      puVar8 = (undefined8 *)*local_80;
    }
    uVar9 = uVar5;
    if (uVar12 < uVar5) {
      uVar9 = uVar12;
    }
    iVar4 = memcmp(puVar8,puVar10,uVar9);
    bVar3 = uVar5 < uVar12;
    if (iVar4 != local_4c4) {
      bVar3 = iVar4 < local_4c4;
    }
    local_4d0 = 0x660e3ef193183dc3;
    if (bVar3) {
      local_4d0 = 0xccba06b8d2216aa3;
    }
    local_4d8 = 0x1555131d28e4963;
  }
  local_470 = local_460;
  goto LAB_180125f70;
}



void FUN_180128b90(longlong param_1,ulonglong param_2,ulonglong param_3,longlong *param_4,float *param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char local_149;
  ulonglong local_148;
  ulonglong local_140;
  int local_134;
  undefined4 local_130;
  float local_12c;
  ulonglong local_128;
  float local_120;
  float local_11c;
  ulonglong local_118;
  float *local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  float local_f0;
  float local_ec;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_140 = 0xc8eebc8e1bf86aca;
  local_148 = 0x4019b34285c25ba0;
LAB_180128c40:
  do {
    while( true ) {
      uVar5 = local_140 ^ 0x6c5cbaf935f9f690;
      uVar3 = local_140 ^ local_148;
      local_148 = local_148 ^ 0x6c5cbaf935f9f690;
      local_140 = uVar5;
      if ((longlong)uVar3 < -0x25f9993d1a23e36b) break;
      if ((longlong)uVar3 < 0x3523707d2c1d0382) {
        if (uVar3 == 0xda0666c2e5dc1c95) {
          local_140 = 0xa347d1b91faf089c;
          if ((local_128 & param_3) == 0 && local_100 == local_b8) {
            local_140 = 0xf5886df6645c958c;
          }
          local_148 = 0xf4bdf13b4a4475fc;
          local_b0 = local_b8;
        }
        else if (uVar3 == 0xee8a792efec15532) {
          local_48 = local_a0;
          local_70 = local_a0 << ((byte)local_128 & 0x3f);
          local_68 = local_70 + 2;
          local_c0 = *(longlong *)(param_1 + 8 + local_70 * 8);
          local_60 = *(longlong *)(param_1 + local_68 * 8);
          local_58 = (undefined8 *)(local_60 + 8);
          local_11c = (float)FUN_180173360(local_58,*local_110 * local_12c,local_130);
          local_50 = (undefined8 *)(local_c0 + 8);
          local_ec = (float)FUN_180173360(local_50,*local_110 * local_12c,local_130);
          local_140 = 0x436876cd1d3e74ae;
          if (local_ec != local_11c) {
            local_140 = 0x525322e2f49aa19;
          }
          local_148 = 0xc08e84c53b6e806a;
        }
        else if (uVar3 == 0x1359ccd2e18e070) {
          *(undefined8 *)(param_1 + local_100 * 8) = *(undefined8 *)(param_1 + local_d0 * 8);
          local_140 = 0x4168ed398f275cea;
          local_148 = 0x1692cdbbdacc218a;
          local_b0 = local_d0;
        }
      }
      else if (uVar3 == 0x3523707d2c1d0382) {
        local_140 = 0x5b102d1678c9e948;
        if (local_f0 < local_120) {
          local_140 = 0x1d67a5678ef121e2;
        }
        local_148 = 0xd73d727035d0ff60;
LAB_1801290c1:
        local_108 = local_f8;
      }
      else if (uVar3 == 0x57fa208255eb7d60) {
        local_140 = 0xc55499439a9b22d1;
        if ((longlong)param_2 < (longlong)local_b0) {
          local_140 = 0x83795dfa109209ae;
        }
        local_148 = 0x4979c625d78234f9;
        local_108 = local_b0;
        local_a8 = local_b0;
      }
      else if (uVar3 == 0x63ad08437c5f4c9d) {
        local_b8 = local_70 | local_128;
        if (local_149 == '\0') {
          local_b8 = local_68;
        }
        *(undefined8 *)(param_1 + local_48 * 8) = *(undefined8 *)(param_1 + local_b8 * 8);
        local_140 = 0x1328ac3581860088;
        if ((longlong)local_b8 < (longlong)local_100) {
          local_140 = 0x27a4b3d99a9b492f;
        }
        local_148 = 0xc92ecaf7645a1c1d;
        local_a0 = local_b8;
      }
    }
    if (-0x3a544914ebd8d58e < (longlong)uVar3) {
      if (uVar3 == 0xc5abb6eb14272a73) {
        local_140 = 0xda504921801a8a0b;
        local_148 = 0xb9fd4162fc45c696;
        local_149 = local_ec < local_11c;
      }
      else if (uVar3 == 0xca009bdfc7103d57) {
        local_f8 = local_a8;
        local_98 = local_a8 + local_d8 >> ((byte)local_128 & 0x3f);
        local_c8 = *param_4;
        local_90 = (undefined8 *)(param_1 + local_98 * 8);
        local_88 = *(longlong *)(param_1 + local_98 * 8);
        local_80 = (undefined8 *)(local_88 + 8);
        local_120 = (float)FUN_180173360(local_80,*local_110 * local_12c,local_130);
        local_78 = (undefined8 *)(local_c8 + 8);
        local_f0 = (float)FUN_180173360(local_78,*local_110 * local_12c,local_130);
        local_140 = 0xada466eb8b02970d;
        if (local_f0 != local_120) {
          local_140 = 0x3e380e4b88588e07;
        }
        local_148 = 0xb1b7e36a4458d85;
      }
      else if (uVar3 == 0xca5ad717bb21de82) {
        *(undefined8 *)(param_1 + local_f8 * 8) = *local_90;
        local_140 = 0x7e5c7d2a3f7c08d;
        if (param_2 < local_98) {
          local_140 = 0x41c8036b29feebf2;
        }
        local_148 = 0x8bc898b4eeeed6a5;
        local_108 = local_98;
        local_a8 = local_98;
      }
      goto LAB_180128c40;
    }
    if ((longlong)uVar3 < -0x73d2a099b2e6e9d8) {
      if (uVar3 == 0x83e6f2082650f4c4) {
        uVar3 = *(ulonglong *)(local_c0 + 0x18);
        puVar6 = local_50;
        if (local_118 < *(ulonglong *)(local_c0 + 0x20)) {
          puVar6 = (undefined8 *)*local_50;
        }
        uVar5 = *(ulonglong *)(local_60 + 0x18);
        puVar4 = local_58;
        if (local_118 < *(ulonglong *)(local_60 + 0x20)) {
          puVar4 = (undefined8 *)*local_58;
        }
        uVar7 = uVar5;
        if (uVar3 < uVar5) {
          uVar7 = uVar3;
        }
        iVar2 = memcmp(puVar4,puVar6,uVar7);
        local_149 = uVar5 < uVar3;
        if (iVar2 != local_134) {
          local_149 = iVar2 < local_134;
        }
        local_140 = 0x954e40aa046cf1e1;
        local_148 = 0xf6e348e97833bd7c;
      }
      else if (uVar3 == 0x88f70fcc9e3a316a) {
        local_12c = 13.0;
        local_128 = 1;
        local_130 = 1;
        local_134 = 0;
        local_d8 = -1;
        local_118 = 0xf;
        local_110 = param_5;
        local_d0 = param_3 - 1;
        local_100 = (longlong)local_d0 >> 1;
        local_140 = 0xd82fb2d58c68eca7;
        if ((longlong)param_2 < (longlong)local_100) {
          local_140 = 0xeca3ad399775a500;
        }
        local_148 = 0x229d41769b4f032;
        local_b8 = param_2;
        local_a0 = param_2;
      }
    }
    else {
      if (uVar3 == 0xa6bf18dd2f471a88) {
        uVar3 = *(ulonglong *)(local_c8 + 0x18);
        puVar6 = local_78;
        if (local_118 < *(ulonglong *)(local_c8 + 0x20)) {
          puVar6 = (undefined8 *)*local_78;
        }
        uVar5 = *(ulonglong *)(local_88 + 0x18);
        puVar4 = local_80;
        if (local_118 < *(ulonglong *)(local_88 + 0x20)) {
          puVar4 = (undefined8 *)*local_80;
        }
        uVar7 = uVar5;
        if (uVar3 < uVar5) {
          uVar7 = uVar3;
        }
        iVar2 = memcmp(puVar4,puVar6,uVar7);
        bVar1 = uVar5 < uVar3;
        if (iVar2 != local_134) {
          bVar1 = iVar2 < local_134;
        }
        local_140 = 0xca9f6e13b287c558;
        if (bVar1) {
          local_140 = 0x8ce8e66244bf0df2;
        }
        local_148 = 0x46b23175ff9ed370;
        goto LAB_1801290c1;
      }
      if (uVar3 == 0x8c2d5f664d191628) {
        *(longlong *)(param_1 + local_108 * 8) = *param_4;
        return;
      }
    }
  } while( true );
}



void FUN_1801293e0(longlong *param_1,longlong *param_2,longlong *param_3,float *param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_e8 = 0x1b1486519de4ea03;
  local_f0 = 0xaff53b8c3a7defb8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_e8 ^ 0xcd8f88023670d19d;
            uVar4 = local_e8 ^ local_f0;
            local_f0 = local_f0 ^ 0xcd8f88023670d19d;
            local_e8 = uVar6;
            if (-0x2a4945abc2ad4576 < (longlong)uVar4) break;
            if ((longlong)uVar4 < -0x5225b24cdce7d33d) {
              if (uVar4 == 0x814af54133d81bd7) {
                lVar1 = *param_2;
                *param_2 = *param_1;
                *param_1 = lVar1;
                local_e8 = 0xa174187bc6b1ea07;
                local_f0 = 0x9818423288d737b8;
              }
              else if (uVar4 == 0x867f05ddfbf2a5e1) {
                local_e8 = 0x578d559ed0dc1659;
                if (local_ac < local_b8) {
                  local_e8 = 0xc33b4264bda2e725;
                }
                local_f0 = 0x6ee10fd79ebacbe6;
              }
              else if (uVar4 == 0x9ea7cb34d140b2f3) {
                local_e8 = 0xef8f32f489dcf01c;
                if (local_b0 < local_bc) {
                  local_e8 = 0x57a99dfcf4623674;
                }
                local_f0 = 0xd6e368bdc7ba2da3;
              }
            }
            else if (uVar4 == 0xadda4db323182cc3) {
              local_a0 = *param_3;
              *param_3 = *param_2;
              *param_2 = local_a0;
              local_98 = *param_1;
              local_68 = (undefined8 *)(local_a0 + 8);
              local_bc = (float)FUN_180173360(local_68,*local_c8 * local_d4,local_d8);
              local_60 = (undefined8 *)(local_98 + 8);
              local_b0 = (float)FUN_180173360(local_60,*local_c8 * local_d4,local_d8);
              local_e8 = 0x8f6554150ba623f5;
              if (local_b0 != local_bc) {
                local_e8 = 0x6ed92f0c832b0500;
              }
              local_f0 = 0xf07ee438526bb7f3;
            }
            else if (uVar4 == 0xb4e1bddda79905bb) {
              local_d4 = 13.0;
              local_d8 = 1;
              local_dc = 0;
              local_d0 = 0xf;
              local_a8 = *param_1;
              local_80 = *param_2;
              local_78 = (undefined8 *)(local_80 + 8);
              local_c0 = (float)FUN_180173360(local_78,*param_4 * 13.0,1);
              local_70 = (undefined8 *)(local_a8 + 8);
              local_b4 = (float)FUN_180173360(local_70,*param_4 * 13.0,1);
              local_e8 = 0xbd71aa4a062757ca;
              if (local_b4 != local_c0) {
                local_e8 = 0x74173847f8b369ed;
              }
              local_f0 = 0x68c7101e3b75ed41;
              local_c8 = param_4;
            }
            else if (uVar4 == 0xb656a3aa403d9cc4) {
              uVar4 = *(ulonglong *)(local_90 + 0x18);
              puVar7 = local_48;
              if (local_d0 < *(ulonglong *)(local_90 + 0x20)) {
                puVar7 = (undefined8 *)*local_48;
              }
              uVar6 = *(ulonglong *)(local_58 + 0x18);
              puVar5 = local_50;
              if (local_d0 < *(ulonglong *)(local_58 + 0x20)) {
                puVar5 = (undefined8 *)*local_50;
              }
              uVar8 = uVar6;
              if (uVar4 < uVar6) {
                uVar8 = uVar4;
              }
              iVar3 = memcmp(puVar5,puVar7,uVar8);
              bVar2 = uVar6 < uVar4;
              if (iVar3 != local_dc) {
                bVar2 = iVar3 < local_dc;
              }
              local_e8 = 0x5c3343c051ff0650;
              if (bVar2) {
                local_e8 = 0xc885543a3c81f72c;
              }
              local_f0 = 0x655f19891f99dbef;
            }
          }
          if (0x1cd02859c3c684ab < (longlong)uVar4) break;
          if (uVar4 == 0xd5b6ba543d52ba8b) {
            uVar4 = *(ulonglong *)(local_a8 + 0x18);
            puVar7 = local_70;
            if (local_d0 < *(ulonglong *)(local_a8 + 0x20)) {
              puVar7 = (undefined8 *)*local_70;
            }
            uVar6 = *(ulonglong *)(local_80 + 0x18);
            puVar5 = local_78;
            if (local_d0 < *(ulonglong *)(local_80 + 0x20)) {
              puVar5 = (undefined8 *)*local_78;
            }
            uVar8 = uVar6;
            if (uVar4 < uVar6) {
              uVar8 = uVar4;
            }
            iVar3 = memcmp(puVar5,puVar7,uVar8);
            bVar2 = uVar6 < uVar4;
            if (iVar3 != local_dc) {
              bVar2 = iVar3 < local_dc;
            }
            local_e8 = 0xc4fe2f5caf6308e4;
            if (bVar2) {
              local_e8 = 0x16cee257063554d9;
            }
            local_f0 = 0xcc8617fd5cd97eac;
          }
          else if (uVar4 == 0xda48f5aa5aec2a75) {
            lVar1 = *param_2;
            *param_2 = *param_1;
            *param_1 = lVar1;
            local_e8 = 0x313170a83f4664e9;
            local_f0 = 0x39494809ccfc12a1;
          }
          else if (uVar4 == 0x87838a1f3ba7648) {
            local_90 = *param_2;
            local_58 = *param_3;
            local_50 = (undefined8 *)(local_58 + 8);
            local_b8 = (float)FUN_180173360(local_50,*local_c8 * local_d4,local_d8);
            local_48 = (undefined8 *)(local_90 + 8);
            local_ac = (float)FUN_180173360(local_48,*local_c8 * local_d4,local_d8);
            local_e8 = 0xca44444b90392180;
            if (local_ac != local_b8) {
              local_e8 = 0xfa6de23c2bf618a5;
            }
            if (NAN(local_ac) || NAN(local_b8)) {
              local_e8 = 0xfa6de23c2bf618a5;
            }
            local_f0 = 0x7c12e7e1d004bd44;
          }
        }
        if (uVar4 != 0x1cd02859c3c684ac) break;
        local_e8 = 0x784c6af7691a97cf;
        if (local_b4 < local_c0) {
          local_e8 = 0xaa7ca7fcc04ccbf2;
        }
        local_f0 = 0x703452569aa0e187;
      }
      if (uVar4 != 0x7f1bb02d59cd9406) break;
      uVar4 = *(ulonglong *)(local_98 + 0x18);
      puVar7 = local_60;
      if (local_d0 < *(ulonglong *)(local_98 + 0x20)) {
        puVar7 = (undefined8 *)*local_60;
      }
      uVar6 = *(ulonglong *)(local_a0 + 0x18);
      puVar5 = local_68;
      if (local_d0 < *(ulonglong *)(local_a0 + 0x20)) {
        puVar5 = (undefined8 *)*local_68;
      }
      uVar8 = uVar6;
      if (uVar4 < uVar6) {
        uVar8 = uVar4;
      }
      iVar3 = memcmp(puVar5,puVar7,uVar8);
      bVar2 = uVar6 < uVar4;
      if (iVar3 != local_dc) {
        bVar2 = iVar3 < local_dc;
      }
      local_e8 = 0xc210d58dd28d33a8;
      if (bVar2) {
        local_e8 = 0x7a367a85af33f5c0;
      }
      local_f0 = 0xfb7c8fc49cebee17;
    }
  } while (uVar4 != 0x396c5a494e66ddbf);
  return;
}



void FUN_180129ae0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  byte bVar8;
  undefined8 *_Buf1;
  ulonglong uVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_438 [32];
  ulonglong local_418;
  ulonglong local_410;
  int local_408;
  char local_402;
  char local_401;
  longlong *local_400;
  ulonglong local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  ulonglong local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  undefined8 local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  ulonglong local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong *local_340;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_320;
  longlong *local_318;
  longlong local_310;
  undefined8 local_308;
  longlong *local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  undefined8 *local_2b8;
  ulonglong local_2b0;
  ulonglong local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  ulonglong local_270;
  longlong local_268;
  longlong local_260;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  ulonglong local_240;
  longlong *local_238;
  longlong *local_230;
  ulonglong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  undefined8 *local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  ulonglong local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  ulonglong local_150;
  longlong local_148;
  void *local_140;
  void *local_138;
  size_t local_130;
  void *local_128;
  void *local_120;
  size_t local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  void *local_f8;
  void *local_f0;
  size_t local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  ulonglong *local_b0;
  longlong *local_a8;
  void *local_a0;
  void *local_98;
  size_t local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_438;
  local_410 = 0x857a251a1c97cc74;
  local_418 = 0x8bfdfdd418021d28;
  local_160 = param_1;
  local_158 = param_2;
  local_150 = param_3;
LAB_180129c60:
  while( true ) {
    uVar14 = local_1f0;
    uVar11 = local_270;
    uVar9 = local_410 ^ 0x1ba0c7480013aca8;
    uVar6 = local_410 ^ local_418;
    local_418 = local_418 ^ 0x1ba0c7480013aca8;
    local_410 = uVar9;
    if ((longlong)uVar6 < 0xa0be97afdeefa9d) break;
    bVar8 = (byte)local_3b8;
    if ((longlong)uVar6 < 0x397aaba951c78163) {
      if ((longlong)uVar6 < 0x17b21e1338f04c45) {
        if ((longlong)uVar6 < 0x124e893e16ec611c) {
          if (uVar6 == 0xa0be97afdeefa9d) {
            local_410 = 0x7a4fbc744cbf8b80;
            local_418 = 0x6eaf257b2fe15deb;
            local_208 = local_3d0;
          }
          else if (uVar6 == 0xd4f89516b7c54ca) {
            local_350 = local_3e8 + 1;
            *local_3e0 = *local_3c0;
            *local_3c0 = local_260;
            local_358 = local_3e0 + 1;
            local_340 = local_3c0 + 1;
            local_410 = 0xf3f25021936d1db;
            local_418 = 0x312d69bd33d095cc;
            local_348 = local_400;
          }
          else if (uVar6 == 0xe87d8ce0495d15c) {
            local_3d8 = 1;
            local_308 = 4;
            local_408 = 0;
            local_310 = 0x101;
            local_3b8 = 3;
            local_3f8 = 0xf;
            local_3a0 = 0;
            local_410 = 0xff891ab8e5bfbbbe;
            if ((longlong)local_158 - (longlong)local_160 < 0x101) {
              local_410 = 0x4c962e764c971906;
            }
            local_418 = 0x7106b1121894cfb3;
            local_258 = local_160;
            local_250 = local_158;
            local_248 = local_160;
            local_240 = (longlong)local_158 - (longlong)local_160;
            local_238 = local_160;
            local_230 = local_158;
            local_228 = local_150;
            local_220 = local_158;
            local_218 = local_160;
          }
        }
        else if (uVar6 == 0x124e893e16ec611c) {
          lVar12 = *local_320;
          local_a8 = local_320 + -1;
          lVar13 = local_320[-1];
          local_2b0 = *(ulonglong *)(lVar12 + 0x18);
          if (local_3f8 < *(ulonglong *)(lVar12 + 0x20)) {
            local_a0 = *(void **)(lVar12 + 8);
          }
          else {
            local_a0 = (void *)(lVar12 + 8);
          }
          local_2a8 = *(ulonglong *)(lVar13 + 0x18);
          if (local_3f8 < *(ulonglong *)(lVar13 + 0x20)) {
            local_98 = *(void **)(lVar13 + 8);
          }
          else {
            local_98 = (void *)(lVar13 + 8);
          }
          local_90 = local_2a8;
          if (local_2b0 < local_2a8) {
            local_90 = local_2b0;
          }
          iVar5 = memcmp(local_98,local_a0,local_90);
          bVar4 = local_2a8 < local_2b0;
          if (iVar5 != local_408) {
            bVar4 = iVar5 < local_408;
          }
          local_410 = 0x2f087e3ce77d20b2;
          if (bVar4) {
            local_410 = 0x5ae97a591818187a;
          }
          local_418 = 0x5b96341654e2596d;
        }
        else if (uVar6 == 0x14e0990f635ed66b) {
          local_320 = local_208;
          local_410 = 0xf75655645efeae9d;
          if (local_400 < local_208) {
            local_410 = 0xe467921504e88e96;
          }
          local_418 = 0xf6291b2b1204ef8a;
        }
        else if (uVar6 == 0x16cd74d14f7e4e9f) {
          local_1d8 = local_330 + 1;
          local_410 = 0x39f11a5e735e4998;
          if (local_1d8 == local_188) {
            local_410 = 0xb5c96774a0f8c77b;
          }
          local_418 = 0xcf7f3109d2f0432c;
          local_80 = local_1d8;
        }
      }
      else if ((longlong)uVar6 < 0x31bcdaa16af7be1d) {
        if (uVar6 == 0x17b21e1338f04c45) {
          lVar12 = *local_3c0;
          *local_3c0 = *local_3b0;
          *local_3b0 = lVar12;
          local_340 = local_3c0 + 1;
          local_410 = 0xabeedb5e181d9f78;
          local_418 = 0x95fc97e132fbdb6f;
          local_348 = local_3b0;
          local_358 = local_3e0;
          local_350 = local_3e8;
        }
        else if (uVar6 == 0x19ea1ceaf14f9239) {
          local_3d0 = local_400 + (local_180 >> ((byte)local_308 & 0x3f));
          local_2c0 = local_3f0 + -1;
          local_d8 = (longlong)local_2c0 - (longlong)local_328 >> (bVar8 & 0x3f);
          local_410 = 0x8c858dafdf730457;
          if (0x28 < local_d8) {
            local_410 = 0x9530ad757a2b8ddb;
          }
          local_418 = 0xd0f858922bf78934;
        }
        else if (uVar6 == 0x20c71fe4898a7d09) {
          plVar3 = local_288 + -1;
          local_50 = local_288[-1];
          local_288[-1] = *local_400;
          lVar12 = (longlong)plVar3 - (longlong)local_328;
          FUN_18012bb00(local_400,local_3a0,lVar12 >> (bVar8 & 0x3f),&local_50);
          local_410 = 0x59b9319799d85eaf;
          if (8 < lVar12) {
            local_410 = 0x3c8780e625aa7f1;
          }
          local_418 = 0x230f67eaebd0daf8;
          local_288 = plVar3;
        }
      }
      else if ((longlong)uVar6 < 0x364b7710bf854202) {
        if (uVar6 == 0x31bcdaa16af7be1d) {
          *local_3e0 = *local_3e8;
          *local_3e8 = local_e0;
          local_260 = *local_3e0;
          local_410 = 0xb4c4c1de99ff9361;
          local_418 = 0xb98b488ff283c7ab;
LAB_18012aae8:
        }
        else if (uVar6 == 0x3369b2b91096738f) {
          local_338 = local_290;
          local_190 = local_298;
          local_300 = local_298 + -1;
          lVar12 = *local_290;
          local_148 = local_298[-1];
          local_2f8 = *(ulonglong *)(lVar12 + 0x18);
          if (local_3f8 < *(ulonglong *)(lVar12 + 0x20)) {
            local_140 = *(void **)(lVar12 + 8);
          }
          else {
            local_140 = (void *)(lVar12 + 8);
          }
          local_2f0 = *(ulonglong *)(local_148 + 0x18);
          if (local_3f8 < *(ulonglong *)(local_148 + 0x20)) {
            local_138 = *(void **)(local_148 + 8);
          }
          else {
            local_138 = (void *)(local_148 + 8);
          }
          local_130 = local_2f0;
          if (local_2f8 < local_2f0) {
            local_130 = local_2f8;
          }
          iVar5 = memcmp(local_138,local_140,local_130);
          bVar4 = local_2f0 < local_2f8;
          if (iVar5 != local_408) {
            bVar4 = iVar5 < local_408;
          }
          local_410 = 0xa263d8262d0ee7be;
          if (bVar4) {
            local_410 = 0x8dea0da2aaf95a3a;
          }
          local_418 = 0x77b9d5b0b97a9f72;
          local_388 = local_338;
        }
      }
      else if (uVar6 == 0x364b7710bf854202) {
        local_170 = local_360;
        local_402 = local_360 == local_400;
        local_410 = 0x6880a819265f8376;
        if ((bool)local_402) {
          local_410 = 0x77c98eaff9edddf4;
        }
        local_401 = local_3c0 == local_3f0;
        local_3e0 = local_368;
        if (!(bool)local_401) {
          local_410 = 0x6880a819265f8376;
        }
        local_418 = 0x1f5c143730c930cd;
      }
      else if (uVar6 == 0x384ffe37ab8698bc) {
        *local_1e0 = local_c0;
        local_1d8 = local_318 + 1;
        local_410 = 0x9c87aba58720a563;
        if (local_1d8 == local_188) {
          local_410 = 0x10bfd68f54862b80;
        }
        local_418 = 0x6a0980f2268eafd7;
      }
    }
    else if ((longlong)uVar6 < 0x6606e5be95eee6c9) {
      if ((longlong)uVar6 < 0x45c8f5e751dc04ef) {
        if (uVar6 == 0x397aaba951c78163) {
          local_3c0 = local_370;
          local_360 = local_58;
          local_3e8 = local_378;
          local_410 = 0x71960cb6e1b0ded2;
          if (local_400 < local_58) {
            local_410 = 0x74b4c91f4ea3ef5f;
          }
          local_418 = 0x47dd7ba65e359cd0;
          local_298 = local_58;
          local_368 = local_168;
          local_290 = local_168;
        }
        else if (uVar6 == 0x3d909f645403d6b5) {
          local_70 = local_248;
          local_188 = local_250;
          local_330 = local_258;
          local_410 = 0x79053c8f8a025545;
          if (local_258 == local_250) {
            local_410 = 0x157e1e23b7749f8d;
          }
          local_418 = 0x6fc8485ec57c1bda;
        }
        else if (uVar6 == 0x3e124cbf2ae64417) {
          local_410 = 0xaad6bd9112a8013a;
          local_418 = 0x2a549258a9d89a05;
          local_1d0 = local_358;
          local_1c8 = local_350;
          local_1c0 = local_348;
          local_1b8 = local_340;
        }
      }
      else if ((longlong)uVar6 < 0x4a7d051a35fc5a61) {
        if (uVar6 == 0x45c8f5e751dc04ef) {
          uVar11 = local_d8 + local_3d8 >> (bVar8 & 0x3f);
          lVar13 = uVar11 << ((byte)local_3d8 & 0x3f);
          plVar3 = local_400 + uVar11;
          FUN_18012c0b0(local_400,plVar3,local_400 + lVar13);
          lVar12 = local_3a0 - uVar11;
          FUN_18012c0b0(local_3d0 + lVar12,local_3d0,local_3d0 + uVar11);
          plVar1 = local_2c0 + lVar12;
          FUN_18012c0b0(local_2c0 + (local_3a0 - lVar13),plVar1);
          FUN_18012c0b0(plVar3,local_3d0,plVar1);
          local_410 = 0x4a70b2060eb60629;
          local_418 = 0x407b5b7cf358fcb4;
        }
        else if (uVar6 == 0x4938621f235d82f4) {
          local_388 = local_338 + -1;
          local_410 = 0x8838e7518e8ffadd;
          if (local_338 == local_190) {
            local_410 = 0x146ddafd08e2d95c;
          }
          local_418 = 0xee3e02ef1b611c14;
          local_2c8 = local_388;
        }
      }
      else if (uVar6 == 0x4a7d051a35fc5a61) {
        local_88 = local_180 >> (bVar8 & 0x3f);
        local_410 = 0xd3ce40fa96d7c29e;
        local_418 = 0xa2e86d760cf79a36;
        local_270 = local_180 >> ((byte)local_308 & 0x3f);
      }
      else if (uVar6 == 0x5c7dd53df4848d63) {
        FUN_18012c0b0(local_400,local_3d0,local_2c0);
        local_410 = 0xf6d70944b243d1c;
        local_418 = 0x56699eeb6cac781;
      }
    }
    else if ((longlong)uVar6 < 0x71262d8c9a2058a8) {
      if (uVar6 == 0x6606e5be95eee6c9) {
        lVar12 = *local_2c8;
        *local_2c8 = local_148;
        *local_300 = lVar12;
        local_410 = 0xb924cd96b066e800;
        local_418 = 0x43771584a3e52d48;
        local_388 = local_2c8;
      }
      else if (uVar6 == 0x68959a98c924ed39) {
        local_398 = (local_68 >> 2) + (local_68 >> ((byte)local_3d8 & 0x3f));
        local_110 = local_3e0;
        local_108 = local_3e8;
        local_410 = 0xe12aee1f12d39122;
        if ((longlong)local_3e0 - (longlong)local_328 < (longlong)local_60 - (longlong)local_3e8) {
          local_410 = 0x60baa01fc54d2941;
        }
        local_418 = 0x11b61d315978291f;
      }
      else if (uVar6 == 0x710cbd2e9c35005e) {
        FUN_180129ae0(local_400,local_3e0,local_398);
        local_1a8 = local_3f0;
        local_410 = 0x8cdf0ae063a691b4;
        local_418 = 0x332717c584cbac49;
        local_1b0 = local_108;
        local_1a0 = local_3e8;
        local_198 = local_1a8;
      }
    }
    else if ((longlong)uVar6 < 0x77dcbc2e1696b3bb) {
      if (uVar6 == 0x71262d8c9a2058a8) {
        uVar14 = local_270 - 1;
        local_50 = local_400[uVar14];
        FUN_18012bb00(local_400,uVar14,local_88,&local_50);
        local_410 = 0x12596704fb8b8049;
        if (local_3d8 < uVar11) {
          local_410 = 0x43b8556ce821a5e8;
        }
        local_418 = 0x329e78e07201fd40;
        local_288 = local_3f0;
        local_270 = uVar14;
      }
      else if (uVar6 == 0x749e4a2ab39f79df) {
        iVar5 = memcmp(local_a0,local_98,local_90);
        bVar4 = local_2b0 < local_2a8;
        if (iVar5 != local_408) {
          bVar4 = iVar5 < local_408;
        }
        local_410 = 0xc0ae0e62d45ed99b;
        if (bVar4) {
          local_410 = 0xd531d922fbfa4ee7;
        }
        local_418 = 0xd44e976db7000ff0;
        local_208 = local_a8;
      }
    }
    else if (uVar6 == 0x77dcbc2e1696b3bb) {
      local_410 = 0xd766e5883e463a6e;
      if (local_402 != '\0') {
        local_410 = 0x8e45a684ed57538e;
      }
      local_418 = 0x7c78585fb1b9408d;
    }
    else if (uVar6 == 0x7ab6567d72088457) {
      if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_438)) {
      }
      return;
    }
  }
  if ((longlong)uVar6 < -0x24ad4c7620cee8c6) {
    if (-0x54e142287000851e < (longlong)uVar6) {
      if ((longlong)uVar6 < -0x42a9a5756ff43c03) {
        if (uVar6 == 0xab1ebdd78fff7ae3) {
          local_3b0 = local_170 + -1;
          local_410 = 0x86b9f7ebb8e108ce;
          if (local_401 != '\0') {
            local_410 = 0x3f3c28f8aad0120a;
          }
          local_418 = 0x910be9f88011448b;
        }
        else if (uVar6 == 0xae37c1002ac15681) {
          local_2a0 = local_3e0 + -1;
          local_78 = local_3e0[-1];
          local_410 = 0xd81d6ae8945a8cb6;
          if (local_170 == local_3e0) {
            local_410 = 0xd8a5412d36e4cc75;
          }
          local_418 = 0xdfddc30d7fc919fa;
          local_268 = local_78;
        }
        else if (uVar6 == 0xae59ad7d4a1c24e7) {
          plVar3 = local_330;
          FUN_1802079d0(local_80,local_330,(longlong)local_318 - (longlong)local_70);
          local_410 = 0x27970d3b30545db8;
          local_418 = 0x1fd8f30c9bd2c504;
          local_1e0 = plVar3;
        }
      }
      else if ((longlong)uVar6 < -0x3630cec5046c70bc) {
        if (uVar6 == 0xbd565a8a900bc3fd) {
          local_390 = local_210 + 1;
          local_410 = 0x6f255e906837d54e;
          if (local_390 < local_3f0) {
            local_410 = 0x688b9513162f55f6;
          }
          local_418 = 0xb3d9269ac91e42cc;
        }
        else if (uVar6 == 0xbff81d25e76d3dfd) {
          local_410 = 0x5d9c99a303e45ba4;
          if ((longlong)local_1a8 - (longlong)local_1b0 < local_310) {
            local_410 = 0xee83ad6daaccf91c;
          }
          local_418 = 0xd3133209fecf2fa9;
          local_258 = local_1a0;
          local_250 = local_198;
          local_248 = local_1b0;
          local_240 = (longlong)local_1a8 - (longlong)local_1b0;
          local_238 = local_1b0;
          local_230 = local_1a8;
          local_228 = local_398;
          local_220 = local_198;
          local_218 = local_1a0;
        }
      }
      else if (uVar6 == 0xc9cf313afb938f44) {
        local_178 = local_1e8;
        local_d0 = local_1e8 + -1;
        local_c8 = local_1e8[-1];
        uVar11 = *(ulonglong *)(local_c8 + 0x18);
        if (local_3f8 < *(ulonglong *)(local_c8 + 0x20)) {
          pvVar10 = *(void **)(local_c8 + 8);
        }
        else {
          pvVar10 = (void *)(local_c8 + 8);
        }
        ppuVar7 = &local_2b8;
        if (local_3f8 < local_1f8) {
          ppuVar7 = &local_200;
        }
        uVar6 = local_1f0;
        if (uVar11 < local_1f0) {
          uVar6 = uVar11;
        }
        iVar5 = memcmp(*ppuVar7,pvVar10,uVar6);
        bVar4 = uVar14 < uVar11;
        if (iVar5 != local_408) {
          bVar4 = iVar5 < local_408;
        }
        local_410 = 0x4073b8d9f0ebde10;
        if (bVar4) {
          local_410 = 0xa7c8cf4af70aaac8;
        }
        local_418 = 0x783c46ee5b6d46ac;
        local_1e0 = local_178;
      }
      else if (uVar6 == 0xd5da0d96947478cc) {
        iVar5 = memcmp(local_140,local_138,local_130);
        bVar4 = local_2f8 < local_2f0;
        if (iVar5 != local_408) {
          bVar4 = iVar5 < local_408;
        }
        local_410 = 0x7b55b56b4c7c5382;
        if (bVar4) {
          local_410 = 0x426a064d0a49374;
        }
        local_418 = 0x326dd7746f21d176;
        local_368 = local_338;
        local_360 = local_190;
      }
      goto LAB_180129c60;
    }
    if (-0x775c11a07adc3aa8 < (longlong)uVar6) {
      if (uVar6 == 0x88a3ee5f8523c559) {
        local_410 = 0x9f4009f31ca5c5fc;
        if (local_3c8 == local_3a8) {
          local_410 = 0xedde686299b571cc;
        }
        local_418 = 0x1dcf94b867f2c2fa;
      }
      else if (uVar6 == 0x8e8fabaafd2b740d) {
        local_400 = local_218;
        local_3f0 = local_220;
        local_68 = local_228;
        local_60 = local_230;
        local_328 = local_238;
        local_180 = local_240;
        local_410 = 0x47eb465ff6323bb3;
        if ((longlong)local_228 < (longlong)local_3d8) {
          local_410 = 0x147c5faf3281f3eb;
        }
        local_418 = 0x5e015ab5077da98a;
      }
      else if (uVar6 == 0x8f135ebdd70be50d) {
        local_370 = local_3a8 + 1;
        local_410 = 0x8da31c0f37b41c6e;
        if (local_370 < local_3f0) {
          local_410 = 0x4ad3dd5d67c8b41e;
        }
        local_418 = 0xb4d9b7a666739d0d;
        local_280 = local_370;
        local_278 = local_380;
        local_378 = local_380;
      }
      goto LAB_180129c60;
    }
    if (uVar6 == 0x80822fc9bb709b3f) {
      local_370 = local_1b8;
      local_58 = local_1c0;
      local_378 = local_1c8;
      local_168 = local_1d0;
      local_410 = 0xc210ec60c9594de3;
      if (local_1b8 < local_3f0) {
        local_410 = 0x5602d329925e593;
      }
      local_418 = 0xfb6a47c9989ecc80;
      local_280 = local_1b8;
      local_278 = local_1c8;
      goto LAB_180129c60;
    }
    if (uVar6 == 0x80ea2b037abe7106) {
      iVar5 = memcmp(local_128,local_120,local_118);
      bVar4 = local_2e8 < local_2e0;
      if (iVar5 != local_408) {
        bVar4 = iVar5 < local_408;
      }
      local_410 = 0x314e0bb1760263b8;
      if (bVar4) {
        local_410 = 0x50e42931472037c7;
      }
      local_418 = 0x8c18513be609a045;
      local_210 = local_390;
      goto LAB_180129c60;
    }
    if (uVar6 != 0x828f9d4b7b570706) goto LAB_180129c60;
    lVar12 = *local_3c8;
    *local_3c8 = local_100;
    *local_3a8 = lVar12;
    local_410 = 0xdae805633c9f5b7;
    local_418 = 0x82bddeebe4c210ba;
  }
  else {
    if (-0x971d4a85e51f54d < (longlong)uVar6) {
      if ((longlong)uVar6 < -0x1f59504fe44d6ed) {
        if (uVar6 == 0xf68e2b57a1ae0ab4) {
          local_318 = local_1d8;
          local_c0 = *local_1d8;
          lVar12 = *local_330;
          local_2b8 = (undefined8 *)(local_c0 + 8);
          uVar11 = *(ulonglong *)(lVar12 + 0x18);
          if (local_3f8 < *(ulonglong *)(lVar12 + 0x20)) {
            pvVar10 = *(void **)(lVar12 + 8);
          }
          else {
            pvVar10 = (void *)(lVar12 + 8);
          }
          local_b8 = (ulonglong *)(local_c0 + 0x18);
          uVar14 = *(ulonglong *)(local_c0 + 0x18);
          local_b0 = (ulonglong *)(local_c0 + 0x20);
          uVar6 = *(ulonglong *)(local_c0 + 0x20);
          puVar2 = *(undefined8 **)(local_c0 + 8);
          _Buf1 = local_2b8;
          if (local_3f8 < uVar6) {
            _Buf1 = puVar2;
          }
          uVar9 = uVar14;
          if (uVar11 < uVar14) {
            uVar9 = uVar11;
          }
          iVar5 = memcmp(_Buf1,pvVar10,uVar9);
          bVar4 = uVar14 < uVar11;
          if (iVar5 != local_408) {
            bVar4 = iVar5 < local_408;
          }
          local_410 = 0x2ed52a52ef3d3969;
          if (bVar4) {
            local_410 = 0x4943b6155eb292ca;
          }
          local_418 = 0xe71a1b6814aeb62d;
          local_200 = puVar2;
          local_1e8 = local_318;
          local_1f8 = uVar6;
          local_1f0 = uVar14;
        }
        else if (uVar6 == 0xf9bca45e51ca68c0) {
          iVar5 = memcmp(local_f8,local_f0,local_e8);
          bVar4 = local_2d8 < local_2d0;
          if (iVar5 != local_408) {
            bVar4 = iVar5 < local_408;
          }
          local_410 = 0xada6d80614d6ebc0;
          if (bVar4) {
            local_410 = 0x1c7f9df0c032affa;
          }
          local_418 = 0x2505365991f52e99;
          local_378 = local_3c8;
          local_370 = local_3a8;
        }
        else if (uVar6 == 0xfa53d8121383c548) {
          local_410 = 0xd57feec550309c2a;
          if (local_400 < local_300) {
            local_410 = 0xd05d2b6cff23ada7;
          }
          local_418 = 0xe33499d5efb5de28;
          local_298 = local_300;
          local_290 = local_388;
          local_368 = local_388;
          local_360 = local_300;
        }
      }
      else if ((longlong)uVar6 < 0x7788220492dd58f) {
        if (uVar6 == 0xfe0a6afb01bb2913) {
          local_3c8 = local_278;
          local_3a8 = local_280;
          local_100 = *local_280;
          lVar12 = *local_168;
          local_2d8 = *(ulonglong *)(local_100 + 0x18);
          if (local_3f8 < *(ulonglong *)(local_100 + 0x20)) {
            local_f8 = *(void **)(local_100 + 8);
          }
          else {
            local_f8 = (void *)(local_100 + 8);
          }
          local_2d0 = *(ulonglong *)(lVar12 + 0x18);
          if (local_3f8 < *(ulonglong *)(lVar12 + 0x20)) {
            local_f0 = *(void **)(lVar12 + 8);
          }
          else {
            local_f0 = (void *)(lVar12 + 8);
          }
          local_e8 = local_2d0;
          if (local_2d8 < local_2d0) {
            local_e8 = local_2d8;
          }
          iVar5 = memcmp(local_f0,local_f8,local_e8);
          bVar4 = local_2d0 < local_2d8;
          if (iVar5 != local_408) {
            bVar4 = iVar5 < local_408;
          }
          local_410 = 0xad8e5d99867ad93f;
          if (bVar4) {
            local_410 = 0xdb21a77a00bb54f2;
          }
          local_418 = 0x5432f9c7d7b0b1ff;
          local_380 = local_3c8;
        }
        else if (uVar6 == 0x17f4e4f4cfa4117) {
          local_410 = 0x106755459137524;
          local_418 = 0xbc502fdec918b6d9;
          local_210 = local_3d0;
        }
      }
      else if (uVar6 == 0x7788220492dd58f) {
        local_350 = local_3e8 + -1;
        *local_2a0 = local_3e8[-1];
        local_3e8[-1] = local_268;
        local_410 = 0x44a2c1aa800f37ef;
        local_418 = 0x7ab08d15aae973f8;
        local_358 = local_2a0;
        local_348 = local_3b0;
        local_340 = local_3c0;
      }
      else if (uVar6 == 0x7c0a9e5eb93954c) {
        local_268 = *local_3b0;
        *local_3b0 = local_78;
        *local_2a0 = local_268;
        local_410 = 0xa61fb27f1965d87f;
        local_418 = 0xa167305f50480df0;
      }
      goto LAB_180129c60;
    }
    if ((longlong)uVar6 < -0xfee032501b84cca) {
      if (uVar6 == 0xdb52b389df31173a) {
        lVar12 = *local_320;
        lVar13 = *local_390;
        local_2e8 = *(ulonglong *)(lVar12 + 0x18);
        if (local_3f8 < *(ulonglong *)(lVar12 + 0x20)) {
          local_128 = *(void **)(lVar12 + 8);
        }
        else {
          local_128 = (void *)(lVar12 + 8);
        }
        local_2e0 = *(ulonglong *)(lVar13 + 0x18);
        if (local_3f8 < *(ulonglong *)(lVar13 + 0x20)) {
          local_120 = *(void **)(lVar13 + 8);
        }
        else {
          local_120 = (void *)(lVar13 + 8);
        }
        local_118 = local_2e0;
        if (local_2e8 < local_2e0) {
          local_118 = local_2e8;
        }
        iVar5 = memcmp(local_120,local_128,local_118);
        bVar4 = local_2e0 < local_2e8;
        if (iVar5 != local_408) {
          bVar4 = iVar5 < local_408;
        }
        local_410 = 0x114dbf486cd908fe;
        if (bVar4) {
          local_410 = 0x4d5bec41b74eee7a;
        }
        local_418 = 0x91a7944b166779f8;
      }
      else if (uVar6 == 0xdcfc780aa1299782) {
        local_410 = 0x886e5a21df9676f9;
        local_418 = 0x8ec75e864e6edc6;
        local_1d0 = local_320;
        local_1c8 = local_390;
        local_1c0 = local_320;
        local_1b8 = local_390;
      }
      else if (uVar6 == 0xdff489a4ac67ec64) {
        *local_178 = local_c8;
        local_410 = 0xd790294c4ce7eea6;
        local_418 = 0x1e5f1876b77461e2;
        local_1e8 = local_d0;
        local_200 = (undefined8 *)*local_2b8;
        local_1f8 = *local_b0;
        local_1f0 = *local_b8;
      }
      goto LAB_180129c60;
    }
    if (uVar6 != 0xf011fcdafe47b336) {
      if (uVar6 == 0xf09cf32e4babb83d) {
        FUN_180129ae0(local_3e8,local_3f0,local_398);
        local_410 = 0xa6830e7f39c74ae9;
        local_418 = 0x197b135adeaa7714;
        local_1b0 = local_400;
        local_1a8 = local_110;
        local_1a0 = local_400;
        local_198 = local_3e0;
      }
      else if (uVar6 == 0xf23dfedb5cee1303) {
        local_260 = *local_3e0;
        local_410 = 0xecd8db0e9aa889d2;
        if (local_3e8 == local_3c0) {
          local_410 = 0xd02b88fe9b236305;
        }
        local_418 = 0xdd6401aff05f37cf;
        local_e0 = local_260;
        goto LAB_18012aae8;
      }
      goto LAB_180129c60;
    }
    local_410 = 0x35a349558768fee8;
    local_418 = 0xbab017e850631be5;
  }
  local_380 = local_3c8 + 1;
  goto LAB_180129c60;
}



void FUN_18012bb00(longlong param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong _Size;
  ulonglong local_d8;
  ulonglong local_d0;
  int local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_50;
  longlong local_48;

  local_d0 = 0x74ae3d77395dcd12;
  local_d8 = 0xf7c4950c713bf941;
LAB_18012bbb0:
  do {
    while( true ) {
      uVar7 = local_d0 ^ 0x98aa0d0bd355c301;
      uVar5 = local_d0 ^ local_d8;
      local_d8 = local_d8 ^ 0x98aa0d0bd355c301;
      local_d0 = uVar7;
      if ((longlong)uVar5 < -0x4c4245343cb3aef9) break;
      if ((longlong)uVar5 < 0x39a2faab27383375) {
        if (uVar5 == 0xb3bdbacbc34c5107) {
          local_d0 = 0xd7ec099e06c9464;
          if ((longlong)local_80 <= (longlong)param_2) {
            local_d0 = 0x1eb51b73cc3fce1a;
          }
          local_d8 = 0x8c9cd050e97f8f6c;
          local_a8 = local_80;
          local_70 = local_80;
        }
        else if (uVar5 == 0x10d116409c8a3d44) {
          uVar7 = local_78 << ((byte)local_c0 & 0x3f);
          lVar1 = *(longlong *)(param_1 + 8 + uVar7 * 8);
          lVar2 = *(longlong *)(param_1 + (uVar7 + 2) * 8);
          uVar5 = *(ulonglong *)(lVar1 + 0x18);
          if (local_b8 < *(ulonglong *)(lVar1 + 0x20)) {
            pvVar8 = *(void **)(lVar1 + 8);
            uVar9 = *(ulonglong *)(lVar2 + 0x18);
            if (*(ulonglong *)(lVar2 + 0x20) <= local_b8) goto LAB_18012bc64;
LAB_18012bfc0:
            pvVar6 = *(void **)(lVar2 + 8);
          }
          else {
            pvVar8 = (void *)(lVar1 + 8);
            uVar9 = *(ulonglong *)(lVar2 + 0x18);
            if (local_b8 < *(ulonglong *)(lVar2 + 0x20)) goto LAB_18012bfc0;
LAB_18012bc64:
            pvVar6 = (void *)(lVar2 + 8);
          }
          _Size = uVar9;
          if (uVar5 < uVar9) {
            _Size = uVar5;
          }
          iVar4 = memcmp(pvVar6,pvVar8,_Size);
          bVar3 = uVar9 < uVar5;
          if (iVar4 != local_c4) {
            bVar3 = iVar4 < local_c4;
          }
          local_88 = uVar7 | local_c0;
          if (!bVar3) {
            local_88 = uVar7 + 2;
          }
          *(undefined8 *)(param_1 + local_78 * 8) = *(undefined8 *)(param_1 + local_88 * 8);
          local_d0 = 0x7de36d06297f40e7;
          if ((longlong)local_b0 <= (longlong)local_88) {
            local_d0 = 0x2a76246d8446ab89;
          }
          local_d8 = 0x6d327b46b5f57da3;
          local_78 = local_88;
        }
      }
      else if (uVar5 == 0x39a2faab27383375) {
        *(undefined8 *)(param_1 + local_b0 * 8) = *(undefined8 *)(param_1 + local_90 * 8);
        local_d0 = 0xd4ab9b58e040f6f0;
        local_d8 = 0x67162193230ca7f7;
        local_80 = local_90;
      }
      else if (uVar5 == 0x47445f2b31b3d62a) {
        local_80 = local_88;
        local_d0 = 0xa502a88541e0061c;
        if ((local_c0 & param_3) != 0 || local_b0 != local_88) {
          local_d0 = 0x2f1de8e5a594646e;
        }
        local_d8 = 0x9ca0522e66d83569;
      }
    }
    if ((longlong)uVar5 < -0x7270874d6281c749) {
      if (uVar5 == 0x81e210c909131b08) {
        local_68 = local_70;
        local_50 = local_70 + local_98 >> ((byte)local_c0 & 0x3f);
        lVar1 = *param_4;
        local_48 = *(longlong *)(param_1 + local_50 * 8);
        uVar5 = *(ulonglong *)(lVar1 + 0x18);
        if (local_b8 < *(ulonglong *)(lVar1 + 0x20)) {
          pvVar8 = *(void **)(lVar1 + 8);
          uVar7 = *(ulonglong *)(local_48 + 0x18);
          if (*(ulonglong *)(local_48 + 0x20) <= local_b8) goto LAB_18012bea8;
LAB_18012bf57:
          pvVar6 = *(void **)(local_48 + 8);
        }
        else {
          pvVar8 = (void *)(lVar1 + 8);
          uVar7 = *(ulonglong *)(local_48 + 0x18);
          if (local_b8 < *(ulonglong *)(local_48 + 0x20)) goto LAB_18012bf57;
LAB_18012bea8:
          pvVar6 = (void *)(local_48 + 8);
        }
        uVar9 = uVar5;
        if (uVar7 <= uVar5) {
          uVar9 = uVar7;
        }
        iVar4 = memcmp(pvVar6,pvVar8,uVar9);
        bVar3 = uVar7 < uVar5;
        if (iVar4 != local_c4) {
          bVar3 = iVar4 < local_c4;
        }
        local_d0 = 0xab718ad8570bf310;
        if (!bVar3) {
          local_d0 = 0xb4d73949ef358ad1;
        }
        local_d8 = 0x26fef26aca75cba7;
        local_a8 = local_70;
      }
      else if (uVar5 == 0x836aa87b48663453) {
        local_c0 = 1;
        local_c4 = 0;
        local_98 = -1;
        local_b8 = 0xf;
        local_90 = param_3 - 1;
        local_b0 = (longlong)local_90 >> 1;
        local_d0 = 0x27282d50cb229942;
        if ((longlong)local_b0 <= (longlong)param_2) {
          local_d0 = 0x70bd643b661b722c;
        }
        local_d8 = 0x37f93b1057a8a406;
        local_88 = param_2;
        local_78 = param_2;
      }
      goto LAB_18012bbb0;
    }
    if (uVar5 == 0x8d8f78b29d7e38b7) {
      *(longlong *)(param_1 + local_68 * 8) = local_48;
      local_d0 = 0xbbf17c7f744487f2;
      if (local_50 <= param_2) {
        local_d0 = 0xa83aa7955817dd8c;
      }
      local_d8 = 0x3a136cb67d579cfa;
      local_a8 = local_50;
      local_70 = local_50;
    }
    else if (uVar5 == 0x9229cb2325404176) {
      *(longlong *)(param_1 + local_a8 * 8) = *param_4;
      return;
    }
  } while( true );
}



void FUN_18012c0b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  void *_Buf1;
  undefined8 *puVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong _Size;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_b8 = 0x3bd13bc3f8adfc5b;
  local_c0 = 0xb3ce1ff0b356f515;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_b8 ^ local_c0;
          local_c0 = local_c0 ^ 0xff8335ea5a558129;
          if (0x1ecc02a7541a73d9 < (longlong)uVar3) break;
          if (uVar3 == 0x881f24334bfb094e) {
            local_c4 = 0;
            local_b0 = 0xf;
            local_70 = *param_1;
            local_a8 = *param_2;
            uVar3 = *(ulonglong *)(local_70 + 0x18);
            if (*(ulonglong *)(local_70 + 0x20) < 0x10) {
              pvVar5 = (void *)(local_70 + 8);
            }
            else {
              pvVar5 = *(void **)(local_70 + 8);
            }
            local_88 = *(ulonglong *)(local_a8 + 0x18);
            local_90 = *(ulonglong *)(local_a8 + 0x20);
            local_98 = *(void **)(local_a8 + 8);
            _Buf1 = local_98;
            if (local_90 < 0x10) {
              _Buf1 = (void *)(local_a8 + 8);
            }
            uVar6 = local_88;
            if (uVar3 < local_88) {
              uVar6 = uVar3;
            }
            iVar2 = memcmp(_Buf1,pvVar5,uVar6);
            bVar1 = local_88 < uVar3;
            if (iVar2 != 0) {
              bVar1 = iVar2 < 0;
            }
            local_b8 = 0xd0144521dd80d5e8;
            if (!bVar1) {
              local_b8 = 0x5283bb28782ceb0a;
            }
            local_c0 = 0xe540e230d5b2f2c0;
            local_80 = local_a8;
          }
          else if (uVar3 == 0xb7c35918ad9e19ca) {
            local_48 = local_80;
            local_a0 = *param_3;
            local_60 = (undefined8 *)(local_a0 + 8);
            pvVar5 = local_98;
            if (local_90 <= local_b0) {
              pvVar5 = (void *)(local_80 + 8);
            }
            local_58 = (ulonglong *)(local_a0 + 0x18);
            uVar3 = *(ulonglong *)(local_a0 + 0x18);
            local_50 = (ulonglong *)(local_a0 + 0x20);
            puVar4 = local_60;
            if (local_b0 < *(ulonglong *)(local_a0 + 0x20)) {
              puVar4 = *(undefined8 **)(local_a0 + 8);
            }
            uVar6 = uVar3;
            if (local_88 < uVar3) {
              uVar6 = local_88;
            }
            iVar2 = memcmp(puVar4,pvVar5,uVar6);
            bVar1 = uVar3 < local_88;
            if (iVar2 != local_c4) {
              bVar1 = iVar2 < local_c4;
            }
            local_b8 = 0xded79e419e6bb233;
            if (!bVar1) {
              local_b8 = 0xbc424953272e4960;
            }
            local_c0 = 0xc01b9ce6ca71c1e9;
          }
          else {
            local_b8 = local_b8 ^ 0xff8335ea5a558129;
            if (uVar3 == 0xcd3e65d837bcf0a8) {
              *param_2 = local_68;
              *param_1 = local_a0;
              local_b8 = 0x2571c31911654032;
              local_c0 = 0x592816acfc3ac8bb;
            }
          }
        }
        if (uVar3 != 0x1ecc02a7541a73da) break;
        *param_3 = local_48;
        *param_2 = local_a0;
        local_68 = *param_1;
        uVar3 = *(ulonglong *)(local_68 + 0x18);
        if (local_b0 < *(ulonglong *)(local_68 + 0x20)) {
          pvVar5 = *(void **)(local_68 + 8);
        }
        else {
          pvVar5 = (void *)(local_68 + 8);
        }
        uVar6 = *local_58;
        puVar4 = local_60;
        if (local_b0 < *local_50) {
          puVar4 = (undefined8 *)*local_60;
        }
        _Size = uVar6;
        if (uVar3 < uVar6) {
          _Size = uVar3;
        }
        iVar2 = memcmp(puVar4,pvVar5,_Size);
        bVar1 = uVar6 < uVar3;
        if (iVar2 != local_c4) {
          bVar1 = iVar2 < local_c4;
        }
        local_b8 = 0xc131abf07a51d88c;
        if (!bVar1) {
          local_b8 = 0x70561b9da0b2a0ad;
        }
        local_c0 = 0xc0fce284ded2824;
      }
      if (uVar3 != 0x3554a71108322728) break;
      *param_2 = local_70;
      *param_1 = local_a8;
      local_80 = *param_2;
      local_98 = *(void **)(local_80 + 8);
      local_88 = *(ulonglong *)(local_80 + 0x18);
      local_90 = *(ulonglong *)(local_80 + 0x20);
      local_b8 = 0xb26837394f034c5a;
      local_c0 = 0x5ab6e21e29d5590;
    }
    local_b8 = local_b8 ^ 0xff8335ea5a558129;
  } while (uVar3 != 0x7c59d5b5ed5f8889);
  return;
}



undefined4 * FUN_18012c4e0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;

  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_1801d61c8(0x50);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 2) = lVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  plVar3 = (longlong *)FUN_1801d61c8(0x80);
  lVar1 = *(longlong *)(param_1 + 6);
  uVar5 = *(longlong *)(param_1 + 10) - lVar1;
  if (uVar5 != 0) {
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(longlong **)(param_1 + 6) = plVar3;
  *(longlong **)(param_1 + 8) = plVar3 + 0x10;
  *(longlong **)(param_1 + 10) = plVar3 + 0x10;
  *plVar3 = lVar2;
  plVar3[1] = lVar2;
  plVar3[2] = lVar2;
  plVar3[3] = lVar2;
  plVar3[4] = lVar2;
  plVar3[5] = lVar2;
  plVar3[6] = lVar2;
  plVar3[7] = lVar2;
  plVar3[8] = lVar2;
  plVar3[9] = lVar2;
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar2;
  plVar3[0xe] = lVar2;
  plVar3[0xf] = lVar2;
  return param_1;
}



void Unwind_18012c6b0(undefined8 param_1,longlong param_2)

{
  FUN_1801252f0(*(undefined8 *)(param_2 + 0x38));
  FUN_18011b510(*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_18012c6f0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong local_1b0;
  ulonglong local_1a8;
  byte local_1a0;
  uintptr_t local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong local_178;
  longlong local_170;
  ulonglong local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 *local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  ulonglong local_98;
  ulonglong *local_90;
  ulonglong local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];

  local_1a8 = 0x3ca33b357c33ffa9;
  local_1b0 = 0xa22539bfebf8fd65;
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_1a8 ^ 0xb99c4f9969da7564;
              uVar2 = local_1a8 ^ local_1b0;
              local_1b0 = local_1b0 ^ 0xb99c4f9969da7564;
              local_1a8 = uVar3;
              if ((longlong)uVar2 < 0x80f6678a44227fb) break;
              if ((longlong)uVar2 < 0x554cc27e07cd7abf) {
                if ((longlong)uVar2 < 0x302bda717355c2e6) {
                  if ((longlong)uVar2 < 0x10116e3cbaa4c239) {
                    if (uVar2 == 0x80f6678a44227fb) {
                      local_1a8 = 0x3cae6f8d434e342d;
                      if (local_190 == local_140) {
                        local_1a8 = 0xded741e45f454b9c;
                      }
                      local_1b0 = 0x69e2adf344834e92;
                    }
                    else if (uVar2 == 0xfb85924fda68daa) {
                      local_1a8 = 0xf34c0b2d63b8c067;
                      if (param_2 < 0x1ffffffffffffffc) {
                        local_1a8 = 0xc029dad7a3b66e67;
                      }
                      local_1b0 = 0x406cc66379b8435f;
                    }
                  }
                  else if (uVar2 == 0x257c1289cabe3d25) {
                    *param_1 = (ulonglong)local_180;
                    local_80 = (undefined8 *)((longlong)local_180 + local_188);
                    *local_c0 = (ulonglong)local_80;
                    *local_90 = (ulonglong)local_80;
                    local_110 = ((ulonglong)(local_188 + local_170) >> (local_1a0 & 0x3f)) + local_148;
                    local_1a8 = 0xf465035d465d8eba;
                    if ((ulonglong)(local_188 + local_170) < local_158) {
                      local_1a8 = 0x31a579862a93c3ba;
                    }
                    local_1b0 = 0xada94deb5b2d7537;
                    local_f0 = local_180;
                  }
                  else if (uVar2 == 0x10116e3cbaa4c239) {
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_198);
                  }
                }
                else if (uVar2 == 0x302bda717355c2e6) {
                  lVar4 = local_c8 << (local_1a0 & 0x3f);
                  puVar1 = (undefined8 *)((longlong)local_180 + lVar4);
                  *puVar1 = local_78._0_8_;
                  puVar1[1] = local_78._8_8_;
                  puVar1 = (undefined8 *)((longlong)local_180 + lVar4 + 0x10);
                  *puVar1 = local_78._0_8_;
                  puVar1[1] = local_78._8_8_;
                  local_c8 = local_c8 + local_150;
                  local_1a8 = 0x859d1a92d24b304d;
                  if (local_c8 == local_138) {
                    local_1a8 = 0x8219ec69b61a9ea7;
                  }
                  local_1b0 = 0xb5b6c0e3a11ef2ab;
                }
                else if (uVar2 == 0x37af2c8a17046c0c) {
                  local_1a8 = 0x2f761b021fa791b5;
                  if (local_110 == local_138) {
                    local_1a8 = 0x44fc37875df2236;
                  }
                  local_1b0 = 0xb37a2f6f6e192738;
                  local_f0 = local_a8;
                }
                else if (uVar2 == 0x4f424a8dbb88ea0a) {
                  local_100 = local_118 + local_178;
                  local_1a8 = 0x3d989ca829425811;
                  local_1b0 = 0x38fd62ef9cc46992;
                  local_f8 = local_98;
                }
              }
              else if ((longlong)uVar2 < 0x66d0fd9edb5d83a0) {
                if (uVar2 == 0x554cc27e07cd7abf) {
                  uVar2 = (longlong)local_b8 + (local_170 - (longlong)local_b0);
                  local_130 = (uVar2 >> (local_1a0 & 0x3f)) + local_148;
                  local_1a8 = 0x5948b3d010872ca2;
                  if (uVar2 < local_158) {
                    local_1a8 = 0xbdf5bcb6d9bd44c8;
                  }
                  local_1b0 = 0xdb25412802e0c768;
                  local_d8 = local_190;
                }
                else if (uVar2 == 0x55c2a0cdb51697df) {
                  local_98 = *(ulonglong *)(local_120 - 8);
                  local_1a8 = 0x6e408b8de787c081;
                  if ((local_88 + local_170) - local_98 < 0x20) {
                    local_1a8 = 0x3113af3ce6abe8b2;
                  }
                  local_1b0 = 0x7e51e5b15d2302b8;
                }
                else if (uVar2 == 0x59cc4eb61d70fb8d) {
                  local_138 = local_110 & local_160;
                  local_a8 = (undefined8 *)((local_138 << (local_1a0 & 0x3f)) + (longlong)local_180);
                  local_78._8_4_ = (int)param_3;
                  local_78._0_8_ = param_3;
                  local_78._12_4_ = uVar5;
                  local_1a8 = 0x8263706fcfd7b917;
                  local_1b0 = 0xb248aa1ebc827bf1;
                  local_c8 = local_198;
                }
              }
              else if (uVar2 == 0x66d0fd9edb5d83a0) {
                local_1a8 = 0xad90f6562975012f;
                local_1b0 = 0x7b65a2915d401cb1;
                local_d0 = local_d8;
              }
              else if (uVar2 == 0x69eb8e360a99b6d1) {
                local_1a8 = 0x8971d18ff9f12ff3;
                if (local_130 == local_128) {
                  local_1a8 = 0x5894c006396aa95d;
                }
                local_1b0 = 0xefa12c1122acac53;
                local_d8 = local_a0;
              }
              else if (uVar2 == 0x7abab50246e3b4bc) {
                *local_108 = param_3;
                local_108 = local_108 + 1;
                local_1a8 = 0xa2e02d9d0997906b;
                if (local_108 == local_80) {
                  local_1a8 = 0x6f6f748854b221d9;
                }
                local_1b0 = 0xd85a989f4f7424d7;
              }
            }
            if ((longlong)uVar2 < -0x48ca13e8e439faf2) break;
            if ((longlong)uVar2 < -0x6d90b429e3d14b7) {
              if ((longlong)uVar2 < -0x1c8475a9582a225e) {
                if (uVar2 == 0xd6f554c774351d9e) {
                  *local_d0 = param_3;
                  local_d0 = local_d0 + 1;
                  local_1a8 = 0xf1cfec910f102a44;
                  if (local_d0 == local_140) {
                    local_1a8 = 0x900f544160e332d4;
                  }
                  local_1b0 = 0x273ab8567b2537da;
                }
                else {
                  if (uVar2 == 0xb735ec171bc6050e) {
                    return;
                  }
                  if (uVar2 == 0xc727bd89b6e0865b) goto LAB_18012d3d2;
                }
              }
              else if (uVar2 == 0xe37b8a56a7d5dda2) {
                local_180 = local_e0;
                local_90 = param_1 + 2;
                local_120 = *param_1;
                local_118 = param_1[2] - local_120;
                local_1a8 = 0x61a361c7de4ee807;
                if (local_118 == local_198) {
                  local_1a8 = 0xc9db43f5619c8af9;
                }
                local_1b0 = 0xeca7517cab22b7dc;
                local_88 = local_120;
              }
              else if (uVar2 == 0xede820b9886d2b79) {
                local_e0 = (undefined8 *)FUN_1801d61c8(local_188);
                local_1a8 = 0x3aee0d9498ac90be;
                local_1b0 = 0xd99587c23f794d1c;
              }
            }
            else if (uVar2 == 0xf926f4bd61c2eb49) {
              lVar4 = local_e8 << (local_1a0 & 0x3f);
              puVar1 = (undefined8 *)((longlong)local_190 + lVar4);
              *puVar1 = local_68._0_8_;
              puVar1[1] = local_68._8_8_;
              puVar1 = (undefined8 *)((longlong)local_190 + lVar4 + 0x10);
              *puVar1 = local_68._0_8_;
              puVar1[1] = local_68._8_8_;
              local_e8 = local_e8 + local_150;
              local_1a8 = 0xc5109736310d45c2;
              if (local_e8 == local_128) {
                local_1a8 = 0x55ddedbd5a56185a;
              }
              local_1b0 = 0x3c36638b50cfae8b;
            }
            else if (uVar2 == 0xfe19851e03c0a4c3) {
              local_1a8 = 0x9e6d378b4d7a5daf;
              if (0x1fffffffffffffff < param_2) {
                local_1a8 = 0xf42c07aa30f50e63;
              }
              local_1b0 = 0x330bba2386158838;
            }
            else if (uVar2 == 0x565fe47b5863183) {
              thunk_FUN_1801f42e0(local_f8,local_100);
              local_1a8 = 0xac7b32e06206efb8;
              local_1b0 = 0x89072069a8b8d29d;
            }
          }
          if (-0x63f3cb928e414974 < (longlong)uVar2) break;
          if (uVar2 == 0x80451cb4da0e2d38) {
            lVar4 = FUN_1801d61c8(local_188 + local_178);
            local_e0 = (undefined8 *)(local_178 + lVar4 & 0xffffffffffffffe0);
            local_e0[-1] = lVar4;
            local_1a8 = 0xea47ef78ce0b896f;
            local_1b0 = 0x93c652e69de54cd;
          }
          else if (uVar2 == 0x826df2f81267ebca) {
            local_128 = local_130 & local_160;
            local_a0 = (undefined8 *)((local_128 << (local_1a0 & 0x3f)) + (longlong)local_190);
            local_68._8_4_ = (int)param_3;
            local_68._0_8_ = param_3;
            local_68._12_4_ = uVar5;
            local_1a8 = 0x66f34e136593d953;
            local_1b0 = 0x9fd5baae0451321a;
            local_e8 = local_198;
          }
          else if (uVar2 == 0x8d0430bb756c5fdb) {
            local_100 = local_118;
            local_1a8 = 0x6caee9743772529;
            if (0xfff < local_118) {
              local_1a8 = 0x566db01d43e78375;
            }
            local_1b0 = 0x3af10d0f6f114aa;
            local_f8 = local_120;
          }
        }
        if (-0x5299725734902a6a < (longlong)uVar2) break;
        if (uVar2 == 0x9c0c346d71beb68d) {
          local_1a8 = 0xf127e2bfe4b39ce4;
          local_1b0 = 0x8b9d57bda2502858;
          local_108 = local_f0;
        }
        else if (uVar2 == 0x9e86028a97cb02cc) {
          local_148 = 1;
          local_150 = 4;
          local_158 = 0x18;
          local_170 = -8;
          local_178 = 0x27;
          local_1a0 = 3;
          local_160 = 0x3ffffffffffffffc;
          local_198 = 0;
          local_c0 = param_1 + 1;
          local_140 = (undefined8 *)param_1[1];
          local_190 = (undefined8 *)*param_1;
          local_1a8 = 0x3f91d3928061faae;
          if ((ulonglong)((longlong)local_140 - (longlong)local_190 >> 3) < param_2) {
            local_1a8 = 0xc98730f427e37996;
          }
          local_1b0 = 0x379eb5ea2423dd55;
          local_b8 = local_140;
          local_b0 = local_190;
        }
      }
      if (uVar2 != 0xad668da8cb6fd597) break;
      local_188 = param_2 << (local_1a0 & 0x3f);
      local_1a8 = 0xa5dcc6b243357514;
      if (0x1ff < param_2) {
        local_1a8 = 0x478cbf2f36fed3c7;
      }
      local_1b0 = 0x4834e60bcb585e6d;
    }
  } while (uVar2 != 0xb320cd4e1a008338);
LAB_18012d3d2:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_18012d400(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x61004cb8411b1a99;
  local_58 = 0x1756052d1f507efd;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x765c14b787a1c64b;
        if (uVar1 != 0x9e7963fa985b2089) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0x63800fd8e1fb6d09;
        local_58 = 0xb69e4dd6e328e1b4;
      }
      if (uVar1 != 0x765649955e4b6464) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0x8da62beca2470a41;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0xc6c10a1838cfa675;
      }
      local_58 = 0x58b869e2a09486fc;
    }
    local_50 = local_50 ^ 0x765c14b787a1c64b;
  } while (uVar1 != 0xd51e420e02d38cbd);
  return;
}



void FUN_18012d530(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xec002699cd3ac0d5;
  local_50 = 0xcaf62dfe600f4a4d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x32603c7e383e8236;
        if (uVar1 != 0x26f60b67ad358a98) break;
        local_48 = 0xfdfe3dc7f5234e3d;
        if (param_2 != '\0') {
          local_48 = 0xc4b74bfbe56c8860;
        }
        local_50 = 0xb109b13e180dfa56;
      }
      if (uVar1 != 0x75befac5fd617236) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0x69bf05fe0f939c67;
      local_50 = 0x25488907e2bd280c;
    }
    local_48 = local_48 ^ 0x32603c7e383e8236;
  } while (uVar1 != 0x4cf78cf9ed2eb46b);
  return;
}



longlong * FUN_18012d660(float *param_1,longlong *param_2,byte *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;

  uVar8 = ((ulonglong)param_3[7] ^
          ((ulonglong)param_3[6] ^
          ((ulonglong)param_3[5] ^
          ((ulonglong)param_3[4] ^
          ((ulonglong)param_3[3] ^
          ((ulonglong)param_3[2] ^
          ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
  lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
  puVar7 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != *(undefined8 **)(param_1 + 2)) {
    if (*(longlong *)param_3 != puVar1[2]) {
      do {
        puVar7 = puVar1;
        if (puVar1 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_18012d7e1;
        puVar1 = (undefined8 *)puVar1[1];
      } while (*(longlong *)param_3 != puVar1[2]);
    }
    *param_2 = (longlong)puVar1;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_18012d7e1:
  if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
    FUN_18012f2d1(&DAT_1802a49e4,&DAT_18028030e,0x17,0x1b,&DAT_1802a4a00);
    FUN_1801d7524(&DAT_1802a49e4);
  }
  puVar1 = (undefined8 *)FUN_1801d61c8(0x50);
  puVar1[2] = *(undefined8 *)param_3;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0xf;
  uVar2 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar2 < 0) {
    fVar10 = (float)uVar2;
    fVar11 = *param_1;
    uVar2 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar2 < 0) goto LAB_18012d859;
LAB_18012d8a7:
    if (fVar11 < fVar10 / (float)(longlong)uVar2) {
LAB_18012d8bc:
      fVar11 = (float)FUN_1801eacf0(fVar10 / fVar11);
      uVar5 = (longlong)(fVar11 - 9.223372e+18) & (longlong)fVar11 >> 0x3f | (longlong)fVar11;
      uVar3 = 8;
      if (8 < uVar5) {
        uVar3 = uVar5;
      }
      uVar5 = uVar2;
      if (uVar2 < uVar3) {
        uVar5 = uVar2 << 3;
        if (uVar2 << 3 <= uVar3) {
          uVar5 = uVar3;
        }
        if (0x1ff < uVar2) {
          uVar5 = uVar3;
        }
      }
      FUN_18012dfe0(param_1,uVar5);
      lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
      puVar7 = *(undefined8 **)(param_1 + 2);
      if (puVar4 != *(undefined8 **)(param_1 + 2)) {
        if (puVar1[2] != puVar4[2]) {
          do {
            puVar7 = puVar4;
            if (puVar4 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_18012d987;
            puVar4 = (undefined8 *)puVar4[1];
          } while (puVar1[2] != puVar4[2]);
        }
        puVar7 = (undefined8 *)*puVar4;
      }
    }
  }
  else {
    fVar10 = (float)(longlong)uVar2;
    fVar11 = *param_1;
    uVar2 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar2) goto LAB_18012d8a7;
LAB_18012d859:
    if (fVar11 < fVar10 / (float)uVar2) goto LAB_18012d8bc;
  }
LAB_18012d987:
  puVar4 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar1 = puVar7;
  puVar1[1] = puVar4;
  *puVar4 = puVar1;
  puVar7[1] = puVar1;
  lVar6 = *(longlong *)(param_1 + 6);
  lVar9 = (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar6 + lVar9) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + lVar9) = puVar1;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar9) == puVar7) {
      *(undefined8 **)(lVar6 + lVar9) = puVar1;
      goto LAB_18012d9e5;
    }
    if (*(undefined8 **)(lVar6 + 8 + lVar9) != puVar4) goto LAB_18012d9e5;
  }
  *(undefined8 **)(lVar6 + 8 + lVar9) = puVar1;
LAB_18012d9e5:
  *param_2 = (longlong)puVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void Unwind_18012db10(undefined8 param_1,longlong param_2)

{
  FUN_18012db50(param_2 + 0x30);
  return;
}



void FUN_18012db50(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_a8 = 0x9190bf16fcfd9687;
  local_b0 = 0xead3a067a6fc356d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_a8 ^ 0x39a39c867c0b7cb9;
            uVar1 = local_a8 ^ local_b0;
            local_b0 = local_b0 ^ 0x39a39c867c0b7cb9;
            local_a8 = uVar2;
            if ((longlong)uVar1 < 0x6587362bcd47bc7) break;
            if ((longlong)uVar1 < 0x33a7932bd46bba16) {
              if (uVar1 == 0x2579b5325f78e9f8) {
                local_70 = *local_88;
                local_78 = local_80 + 1;
                local_a8 = 0xdbc33db59db5077f;
                if (local_78 < 0x1000) {
                  local_a8 = 0x307bce854bfab30c;
                }
                local_b0 = 0x1dddd1ca10ed8cbb;
                local_58 = local_70;
              }
              else if (uVar1 == 0x2da61f4f5b173fb7) {
                thunk_FUN_1801f42e0(local_70,local_78);
                local_a8 = 0xf9a92f419d9a02b2;
                local_b0 = 0xef525ffdcf8a935;
              }
              else if (uVar1 == 0x6587362bcd47bc7) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a0);
              }
            }
            else if (uVar1 == 0x33a7932bd46bba16) {
              local_88 = (longlong *)(local_90 + 0x28);
              local_60 = (ulonglong *)(local_90 + 0x40);
              local_80 = *(ulonglong *)(local_90 + 0x40);
              local_a8 = 0x72ba6084e0615079;
              if (local_80 <= local_98) {
                local_a8 = 0xa09fdf08fe7b1206;
              }
              local_b0 = 0x57c3d5b6bf19b981;
            }
            else if (uVar1 == 0x7b431f715a01a3ea) {
              local_98 = 0xf;
              local_a0 = 0;
              local_68 = (longlong *)(param_1 + 8);
              local_90 = *(longlong *)(param_1 + 8);
              local_a8 = 0x10b9f943ffc47162;
              if (local_90 != 0) {
                local_a8 = 0xdc94158f65fb4b0b;
              }
              local_b0 = 0xef3386a4b190f11d;
            }
          }
          if (-0x39e1138072a7743d < (longlong)uVar1) break;
          if (uVar1 == 0x9a1c230e725b0be8) {
            local_78 = local_80 + 0x28;
            local_70 = local_48;
            local_a8 = 0xa39c6c67407567bc;
            local_b0 = 0x8e3a73281b62580b;
          }
          else if (uVar1 == 0xb4efb9536422925b) {
            thunk_FUN_1801f42e0(local_50,0x50);
            local_a8 = 0x6e022bbee82564e;
            local_b0 = 0xf96a5d5ca0d6d631;
          }
        }
        if (uVar1 != 0xc61eec7f8d588bc4) break;
        local_48 = *(longlong *)(local_58 + -8);
        local_a8 = 0xa75f76058b960c27;
        if (0x1f < (local_58 - local_48) - 8U) {
          local_a8 = 0x3b1b266945197c08;
        }
        local_b0 = 0x3d43550bf9cd07cf;
      }
      if (uVar1 != 0xf75c0abe4162ab87) break;
      *(uintptr_t *)(local_90 + 0x38) = local_a0;
      *local_60 = local_98;
      *(undefined1 *)local_88 = 0;
      local_50 = *local_68;
      local_a8 = 0x50bab75d0a024895;
      if (local_50 != 0) {
        local_a8 = 0x1bdf71e920745ab1;
      }
      local_b0 = 0xaf30c8ba4456c8ea;
    }
  } while (uVar1 != 0xff8a7fe74e54807f);
  return;
}



void FUN_18012dfe0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;

  local_f0 = 0xfe53de44416e992f;
  local_f8 = 0x57cbee74db9c5f1d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar8 = local_f0 ^ 0xd7000243e4727a93;
            uVar5 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0xd7000243e4727a93;
            local_f0 = uVar8;
            if (0x1adcc2b4fa42cae7 < (longlong)uVar5) break;
            if ((longlong)uVar5 < -0x1efe1901ff82f4ed) {
              if ((longlong)uVar5 < -0x5667cfcf650d39ce) {
                if (uVar5 == 0x8265378315166a3d) {
                  *local_98 = local_e8;
                  *local_c8 = local_e8;
                  local_f0 = 0x6b462ce5b281a1f7;
                  local_f8 = 0x98fe28904c63006c;
                }
                else if (uVar5 == 0xa488bf6cddcda19c) {
                  FUN_18012f2d1(&DAT_1802a4a04,&DAT_180280352,0x1e,0x1a,&DAT_1802a4a20);
                  FUN_1801d7524(&DAT_1802a4a04);
                }
              }
              else if (uVar5 == 0xa99830309af2c632) {
                local_a8 = 1;
                local_b0 = -1;
                local_e0 = 0x100000001b3;
                local_a0 = (longlong *)(param_1 + 0x18);
                local_f0 = 0xa064b13ea79fdeff;
                if (0x800000000000000 < param_2) {
                  local_f0 = 0x76928b8f8d42d355;
                }
                local_f8 = 0xd21a34e3508f72c9;
              }
              else if (uVar5 == 0xb9cb37a7064e7fb1) {
                local_90 = (longlong *)local_80[1];
                local_f0 = 0x3dd0c0de7dd79bd2;
                if (local_58 == local_90[2]) {
                  local_f0 = 0x39996aeeaa743cc8;
                }
                local_f8 = 0x40a8f4ebb57de3f3;
                local_78 = local_90;
              }
            }
            else if ((longlong)uVar5 < 0x8ce729e3071d07) {
              if (uVar5 == 0xe101e6fe007d0b13) {
                local_90 = (longlong *)*local_c8;
                local_58 = *local_50;
                local_f0 = 0x86b951af2055b86f;
                if (local_58 == local_90[2]) {
                  local_f0 = 0xfb4d82b30bf8dd49;
                }
                local_f8 = 0xfbc1659ae8ffc04e;
                local_60 = local_90;
              }
              else if (uVar5 == 0xf3b80475fee2a19b) {
                local_f0 = 0xe4bfc52926a62505;
                if (local_d8 == local_d0) {
                  local_f0 = 0xac1f4fb32f7c2fc4;
                }
                local_f8 = 0xead959622b9648ef;
                local_88 = local_d8;
              }
            }
            else if (uVar5 == 0x8ce729e3071d07) {
              local_68 = (longlong *)*local_60;
              local_f0 = 0xd4db959763ce483;
              if (local_68 == local_e8) {
                local_f0 = 0x7d8b6fe1109fe565;
              }
              local_f8 = 0x17917bed8c7e2e6b;
            }
            else if (uVar5 == 0xe669c4b0d306dea) {
              local_e8 = local_88;
              local_d8 = (longlong *)*local_88;
              local_50 = local_88 + 2;
              lVar9 = *local_a0;
              lVar6 = (((ulonglong)*(byte *)((longlong)local_88 + 0x17) ^
                       ((ulonglong)*(byte *)((longlong)local_88 + 0x16) ^
                       ((ulonglong)*(byte *)((longlong)local_88 + 0x15) ^
                       ((ulonglong)*(byte *)((longlong)local_88 + 0x14) ^
                       ((ulonglong)*(byte *)((longlong)local_88 + 0x13) ^
                       ((ulonglong)*(byte *)((longlong)local_88 + 0x12) ^
                       ((ulonglong)*(byte *)((longlong)local_88 + 0x11) ^
                       ((ulonglong)*(byte *)(local_88 + 2) ^ 0xcbf29ce484222325) * local_e0) * local_e0) * local_e0) *
                       local_e0) * local_e0) * local_e0) * local_e0) * local_e0 & *local_70) * 0x10;
              local_98 = (undefined8 *)(lVar9 + lVar6);
              local_c8 = (undefined8 *)(lVar9 + lVar6 + 8);
              local_48 = *(longlong **)(lVar9 + lVar6);
              local_f0 = 0xd6ae98933afc4f0e;
              if (local_48 == local_d0) {
                local_f0 = 0xb5ca49ee2f972e20;
              }
              local_f8 = 0x37af7e6d3a81441d;
            }
          }
          if ((longlong)uVar5 < 0x727e85ddf710ac36) break;
          if (uVar5 == 0x727e85ddf710ac36) {
            uVar5 = local_b0 + param_2 | local_a8;
            lVar9 = 0x3f;
            if (uVar5 != 0) {
              for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            bVar7 = 0x40 - ((byte)lVar9 ^ 0x3f);
            lVar9 = local_a8 << (bVar7 & 0x3f);
            local_d0 = *(longlong **)(param_1 + 8);
            FUN_18012c6f0(local_a0,2L << (bVar7 & 0x3f));
            local_70 = (ulonglong *)(param_1 + 0x30);
            *(longlong *)(param_1 + 0x30) = local_b0 + lVar9;
            *(longlong *)(param_1 + 0x38) = lVar9;
            local_88 = (longlong *)**(undefined8 **)(param_1 + 8);
            local_f0 = 0xb58cbf78b662286;
            if (local_88 == local_d0) {
              local_f0 = 0x43f8416d82bc2847;
            }
            local_f8 = 0x53e57bc86564f6c;
          }
          else if (uVar5 == 0x79319e051f09df3b) {
            lVar9 = *local_78;
            puVar1 = (undefined8 *)local_e8[1];
            *puVar1 = local_d8;
            plVar4 = (longlong *)local_d8[1];
            *plVar4 = lVar9;
            puVar2 = *(undefined8 **)(lVar9 + 8);
            *puVar2 = local_e8;
            *(longlong **)(lVar9 + 8) = plVar4;
            local_d8[1] = (longlong)puVar1;
            local_e8[1] = (longlong)puVar2;
            local_f0 = 0x8e8cbf76424cc6e6;
            local_f8 = 0x7d34bb03bcae677d;
          }
          else if (uVar5 == 0x7d783435c8aa7821) {
            local_80 = local_90;
            local_f0 = 0xeacb299c19b5538;
            if (local_48 == local_90) {
              local_f0 = 0xc7479c0229aae78b;
            }
            local_f8 = 0xb767853ec7d52a89;
          }
        }
        if ((longlong)uVar5 < 0x6a1a140c9ce1cb0e) break;
        if (uVar5 == 0x6a1a140c9ce1cb0e) {
          *local_c8 = local_e8;
          local_f0 = 0x870861b6dd9b3a76;
          local_f8 = 0x74b065c323799bed;
        }
        else if (uVar5 == 0x7020193cee7fcd02) {
          puVar1 = (undefined8 *)local_e8[1];
          *puVar1 = local_d8;
          puVar2 = (undefined8 *)local_d8[1];
          *puVar2 = local_80;
          puVar3 = (undefined8 *)local_80[1];
          *puVar3 = local_e8;
          local_80[1] = (longlong)puVar2;
          local_d8[1] = (longlong)puVar1;
          local_e8[1] = (longlong)puVar3;
          *local_98 = local_e8;
          local_f0 = 0xa5d653415b08b78a;
          local_f8 = 0x566e5734a5ea1611;
        }
      }
      if (uVar5 != 0x1adcc2b4fa42cae8) break;
      puVar1 = (undefined8 *)local_e8[1];
      *puVar1 = local_d8;
      puVar2 = (undefined8 *)local_d8[1];
      *puVar2 = local_68;
      puVar3 = (undefined8 *)local_68[1];
      *puVar3 = local_e8;
      local_68[1] = (longlong)puVar2;
      local_d8[1] = (longlong)puVar1;
      local_e8[1] = (longlong)puVar3;
      local_f0 = 0xbb87c4fb38b64db9;
      local_f8 = 0xd19dd0f7a45786b7;
    }
  } while (uVar5 != 0x46c616d104ea672b);
  return;
}



longlong FUN_18012e800(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_c1;
  ulonglong local_c0;
  ulonglong local_b8;
  uintptr_t local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_58;
  longlong local_50;
  ulonglong *local_48;

  local_b8 = 0x8c20a647ccad098f;
  local_c0 = 0x565ab8df56e9e055;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_b8 ^ 0x256a15baff76efb5;
            uVar2 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0x256a15baff76efb5;
            local_b8 = uVar4;
            if (0x826d757d635fedf < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x2620014c78750e9a) {
              if (uVar2 == 0x9b0fddcd1fe1df94) {
                local_b8 = 0xaeaccafadd08eed0;
                if (local_c1 != '\0') {
                  local_b8 = 0xd3dc02794acea0f9;
                }
                local_c0 = 0xf1165835b9fffe17;
              }
              else if (uVar2 == 0xccd71e60372fe23f) {
                local_70 = local_78 + 0x28;
                local_b8 = 0x9e11bd7cd2da0322;
                local_c0 = 0x96376a2b04effdc2;
                local_68 = local_58;
              }
              else if (uVar2 == 0xa126257999037079) {
                param_2[7] = local_a8;
                *local_48 = local_a0;
                *(undefined1 *)local_80 = 0;
                thunk_FUN_1801f42e0(param_2,0x50);
                return local_88;
              }
            }
            else if (uVar2 == 0xd9dffeb3878af166) {
              local_58 = *(longlong *)(local_50 + -8);
              local_b8 = 0x49cc40067d2a0e88;
              if ((local_50 - local_58) - 8U < 0x20) {
                local_b8 = 0xdbf8c59becf81f32;
              }
              local_c0 = 0x172fdbfbdbd7fd0d;
            }
            else if (uVar2 == 0xda7a1e989a44e9da) {
              local_a0 = 0xf;
              local_a8 = 0;
              lVar1 = *(longlong *)(param_1 + 0x18);
              lVar3 = (((ulonglong)*(byte *)((longlong)param_2 + 0x17) ^
                       ((ulonglong)*(byte *)((longlong)param_2 + 0x16) ^
                       ((ulonglong)*(byte *)((longlong)param_2 + 0x15) ^
                       ((ulonglong)*(byte *)((longlong)param_2 + 0x14) ^
                       ((ulonglong)*(byte *)((longlong)param_2 + 0x13) ^
                       ((ulonglong)*(byte *)((longlong)param_2 + 0x12) ^
                       ((ulonglong)*(byte *)((longlong)param_2 + 0x11) ^
                       ((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
                       0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                       0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
              local_98 = (longlong *)(lVar1 + lVar3);
              local_90 = (longlong *)(lVar1 + lVar3 + 8);
              local_c1 = *(longlong **)(lVar1 + lVar3) == param_2;
              local_b8 = 0x5ecacb0151e8d6c5;
              if (*(longlong **)(lVar1 + 8 + lVar3) == param_2) {
                local_b8 = 0xcb9b57b12ae6f01a;
              }
              local_c0 = 0xc5c516cc4e090951;
            }
            else if (uVar2 == 0xea58172fc7667ebd) {
              lVar1 = *(longlong *)(param_1 + 8);
              *local_98 = lVar1;
              *local_90 = lVar1;
              local_b8 = 0x75214a28989b611d;
              local_c0 = 0x2a9bd8e7fc6c71da;
            }
          }
          if (0x3dbb3a0946ef7198 < (longlong)uVar2) break;
          if (uVar2 == 0x826d757d635fee0) {
            thunk_FUN_1801f42e0(local_68,local_70);
            local_b8 = 0x31f7ea69c79d88f5;
            local_c0 = 0x90d1cf105e9ef88c;
          }
          else if (uVar2 == 0xe5e417d64eff94b) {
            local_b8 = 0x5d97c2b26a4aecb;
            if (local_c1 != '\0') {
              local_b8 = 0xbb775bd1b0720d41;
            }
            local_c0 = 0x512f4cfe771473fc;
          }
          else if (uVar2 == 0x22ca5a4cf3315eee) {
            *local_98 = *param_2;
            local_b8 = 0x30d616072466d0de;
            local_c0 = 0x6f6c84c84091c019;
          }
        }
        if (0x5ee39bfda6fdf384 < (longlong)uVar2) break;
        if (uVar2 == 0x3dbb3a0946ef7199) {
          local_68 = *local_80;
          local_70 = local_78 + 1;
          local_b8 = 0x24cdc98bfbc836a1;
          if (0xfff < local_70) {
            local_b8 = 0xf534e06faa773927;
          }
          local_c0 = 0x2ceb1edc2dfdc841;
          local_50 = local_68;
        }
        else if (uVar2 == 0x54f630d551b0dd37) {
          *local_90 = param_2[1];
          local_b8 = 0xc71e7a1afe6b687e;
          local_c0 = 0x98a4e8d59a9c78b9;
        }
      }
      if (uVar2 != 0x5fba92cf64f710c7) break;
      local_88 = *param_2;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      *(longlong *)param_2[1] = local_88;
      *(longlong *)(local_88 + 8) = param_2[1];
      local_80 = param_2 + 5;
      local_48 = (ulonglong *)(param_2 + 8);
      local_78 = param_2[8];
      local_b8 = 0x90bc7cd5f0a0f034;
      if (local_a0 < local_78) {
        local_b8 = 0xc2163a52f4cf1d4;
      }
      local_c0 = 0x319a59ac69a3804d;
    }
  } while (uVar2 != 0x5ee39bfda6fdf385);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a8);
}



longlong FUN_18012eee0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_a8;
  ulonglong local_a0;
  uint local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_a0 = 0xbadbdbbe9863b49f;
  local_a8 = 0xb82daff8fbc8b35b;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_a0 ^ 0xccb01ea9cdd399e;
          uVar1 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0xccb01ea9cdd399e;
          local_a0 = uVar2;
          if ((longlong)uVar1 < 0x1d6c44cf7c5a1243) break;
          if ((longlong)uVar1 < 0x4e48df5719ccb568) {
            if (uVar1 == 0x1d6c44cf7c5a1243) {
              thunk_FUN_1801f42e0(param_1,0xd8);
              local_a0 = 0xddbbf3ce7fe11b1c;
              local_a8 = 0x70752209c26dcd34;
            }
            else if (uVar1 == 0x4c682ec4e322d4a4) {
              thunk_FUN_1801f42e0(local_80,local_88);
              *local_78 = 0;
              local_78[1] = 0;
              local_78[2] = 0;
              local_a0 = 0xf63089028607ec2a;
              local_a8 = 0xb87856559fcb5942;
            }
          }
          else if (uVar1 == 0x4e48df5719ccb568) {
            FUN_18011b510(param_1 + 0x78);
            FUN_180106c90(param_1);
            local_a0 = 0xfa3d8fe770a42731;
            if ((param_2 & 1) == local_98) {
              local_a0 = 0x4a9f1aefb172e35a;
            }
            local_a8 = 0xe751cb280cfe3572;
          }
          else if (uVar1 == 0x69fc11579a7eb95f) {
            local_88 = local_60 + 0x27;
            local_a0 = 0x109aa204fc5bd584;
            local_a8 = 0x5cf28cc01f790120;
            local_80 = local_70;
          }
        }
        if ((longlong)uVar1 < -0xab3fca4b05ba666) break;
        if (uVar1 == 0xf54c035b4fa4599a) {
          local_70 = *(longlong *)(local_90 + -8);
          local_a0 = 0xdd13ef47acd29a6e;
          if ((local_68 - local_70) - 8U < 0x20) {
            local_a0 = 0x515666080b11be8a;
          }
          local_a8 = 0x38aa775f916f07d5;
        }
        else if (uVar1 == 0x2f6744663ab07c4) {
          local_98 = 0;
          local_78 = (undefined8 *)(param_1 + 0x88);
          local_90 = *(longlong *)(param_1 + 0x88);
          local_a0 = 0x13507c9ed7dad68e;
          if (local_90 == 0) {
            local_a0 = 0xbad43957bce6aaea;
          }
          local_a8 = 0xf49ce600a52a1f82;
        }
      }
      if (uVar1 != 0xe7cc9a9e72f0c90c) break;
      local_68 = local_90;
      local_88 = *(longlong *)(param_1 + 0x98) - local_90;
      local_a0 = 0xc97be4f2bd908e26;
      if (0xfff < local_88) {
        local_a0 = 0x705fc96d11160318;
      }
      local_a8 = 0x8513ca365eb25a82;
      local_80 = local_90;
      local_60 = local_88;
    }
    if (uVar1 == 0xadced1c7bd8cd628) break;
    if (uVar1 == 0xe5b998183dbd9dbb) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_98,0);
    }
  }
  return param_1;
}



void FUN_18012f2d1(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_6d;
  char local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0xaf627b662dca72a9;
  local_68 = 0xd179e274727cc7ec;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xa6152e2299186da2;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xa6152e2299186da2;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x2b280ffa7489239) break;
          if (uVar1 == 0x2b280ffa7489239) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xaceed8e99b868005;
            local_68 = 0xe0a0cbde5e254557;
          }
          else if (uVar1 == 0x4c4e1337c5a3c552) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0x95daf7fd567c2fd;
            if (local_54 == param_4) {
              local_60 = 0x35d7fe0071eec3e4;
            }
            local_68 = 0xd284f26d27102939;
          }
          else if (uVar1 == 0x7e1b99125fb6b545) {
            local_60 = 0xc505afd26790509d;
            if (*param_5 == 1) {
              local_60 = 0xd753e6916dd7c57d;
            }
            local_68 = 0x1edcf2c095e7bb59;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0x2426a2ed0d88143c) break;
        if (uVar1 == 0xdbd95d12f277ebc4) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x32e260748e626112;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xf4e7d6cb895af465;
          }
          local_68 = 0x3050e08b292af32b;
        }
        else if (uVar1 == 0xe7530c6d56feeadd) {
          *param_5 = 1;
          local_60 = 0xae29f77cd6b9bbf5;
          local_68 = 0x67a6e32d2e89c5d1;
        }
      }
      if (uVar1 != 0xc4b73640a070074e) break;
      local_6a = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0xfa20bb003c320a2e;
      local_68 = 0xb66ea837f991cf7c;
    }
  } while (uVar1 != 0xc98f1451f8307e24);
  return;
}



void FUN_18012f590(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_18012f6d0(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_18012f700(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uintptr_t uVar11;
  uintptr_t local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  uintptr_t local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_68 = 0x20;
  local_28 = 4;
  local_60 = 4;
  local_58 = 0xf;
  local_21 = 0;
  local_30 = 0;
  lVar7 = FUN_1801b2b70();
  uVar11 = lVar7 + 0x349a40;
  uStack_80 = local_30;
  puVar8 = (undefined4 *)FUN_1801d61c8(local_68);
  local_78 = 0x13;
  uStack_70 = 0x1f;
  local_88 = puVar8;
  FUN_18013105c(&DAT_1802a4aac,&DAT_1802805d0,0x1f,0x14,&DAT_1802a4ac0);
  *(uint *)((longlong)puVar8 + 0xf) = CONCAT31(DAT_1802a4abb._1_3_,(undefined1)DAT_1802a4abb);
  uVar5 = uRam00000001802a4ab8;
  uVar4 = uRam00000001802a4ab4;
  uVar3 = uRam00000001802a4ab0;
  *puVar8 = _DAT_1802a4aac;
  puVar8[1] = uVar3;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  *(undefined1 *)((longlong)puVar8 + 0x13) = local_21;
  uVar2 = CONCAT44(DAT_1802803b0._4_4_,(undefined4)DAT_1802803b0);
  local_90 = uVar11;
  if (local_58 < uVar2) {
    lVar1 = CONCAT44(DAT_180280398._4_4_,(undefined4)DAT_180280398);
    uVar10 = uVar2 + 1;
    lVar7 = lVar1;
    if (0xfff < uVar10) {
      lVar7 = *(longlong *)(lVar1 + -8);
      if (local_68 <= (lVar1 - lVar7) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_30);
      }
      uVar10 = uVar2 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar7,uVar10);
  }
  _DAT_1802803a8 = (undefined4)local_78;
  uRam00000001802803ac = local_78._4_4_;
  DAT_1802803b0._0_4_ = (undefined4)uStack_70;
  DAT_1802803b0._4_4_ = uStack_70._4_4_;
  DAT_180280398._0_4_ = (undefined4)local_88;
  DAT_180280398._4_4_ = local_88._4_4_;
  uRam00000001802803a0 = (undefined4)uStack_80;
  uRam00000001802803a4 = uStack_80._4_4_;
  local_78 = local_30;
  uStack_70 = local_58;
  local_88 = (undefined4 *)CONCAT71(local_88._1_7_,local_21);
  if (uVar11 == local_30) {
    FUN_18013105c(&DAT_1802a4ac4,&DAT_180280621,0x16,0x19,&DAT_1802a4ae0);
    local_50 = &DAT_1802a4ac4;
    local_48 = 0x18;
    FUN_18013105c(&DAT_1802a4ae4,&DAT_180280660,0x14,5,&DAT_1802a4aec);
    local_40 = &DAT_1802a4ae4;
    local_38 = local_60;
    FUN_1800ed150(local_28,&local_40,&local_50,&DAT_180280398);
  }
  else {
    _DAT_1802803b8 = uVar11;
    cVar6 = FUN_180182740(uVar11,FUN_180130030,&DAT_1802803c0);
    if (cVar6 == '\0') {
      FUN_18013105c(&DAT_1802a4af0,&DAT_18028068c,0x1a,0x22,&DAT_1802a4b14);
      local_50 = &DAT_1802a4af0;
      local_48 = 0x21;
      FUN_18013105c(&DAT_1802a4ae4,&DAT_180280660,0x14,5,&DAT_1802a4aec);
      local_40 = &DAT_1802a4ae4;
      local_38 = local_60;
      FUN_1800ed3e0(local_28,&local_40,&local_50,&DAT_180280398,&local_90);
      _DAT_1802803b8 = 0;
    }
    else {
      DAT_1802803c8 = 1;
      uVar9 = FUN_180181700();
      FUN_180182360(uVar9,&PTR_PTR_180280390);
    }
  }
  return 1;
}



void Unwind_18012fab0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



undefined8 * FUN_18012fae0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined ***local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined7 local_b8;
  undefined4 uStack_b1;
  undefined5 uStack_ad;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_31 = 0;
  local_38 = 0;
  local_48 = 0;
  local_d0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x40);
  local_c8 = 0x31;
  local_c0 = 0x3f;
  local_d8 = puVar3;
  FUN_18013105c(&DAT_1802a4a38,&DAT_1802804d8,0x14,0x32,&DAT_1802a4a6c);
  *(undefined1 *)(puVar3 + 0xc) = DAT_1802a4a68;
  uVar4 = uRam00000001802a4a60;
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a4a58;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a4a50;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a4a48;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a4a44;
  uVar1 = uRam00000001802a4a40;
  uVar5 = uRam00000001802a4a3c;
  *puVar3 = _DAT_1802a4a38;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x31) = local_31;
  uStack_b1._1_3_ = (undefined3)local_48;
  uStack_ad = (undefined5)((ulonglong)local_48 >> 0x18);
  local_a8 = 0xb;
  local_a0 = local_50;
  uVar5 = 1;
  FUN_18013105c(&DAT_1802a4a26,&DAT_18028049d,0x1b,0xc,&DAT_1802a4a34);
  local_b8 = (undefined7)DAT_1802a4a26;
  uStack_b1 = ram0x0001802a4a2d;
  FUN_1801063a0(param_1,&local_b8,&local_d8,local_38,CONCAT44(uVar5,local_38));
  *param_1 = &PTR_FUN_180219330;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_40 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x30);
  local_88 = 0x2b;
  uStack_80 = 0x2f;
  local_98 = puVar3;
  FUN_18013105c(&DAT_1802a4a70,&DAT_18028053d,0x1f,0x2c,&DAT_1802a4a9c);
  uVar4 = uRam00000001802a4a93;
  *(ulonglong *)((longlong)puVar3 + 0x1b) = CONCAT35(uRam00000001802a4a90,_DAT_1802a4a8b);
  *(undefined8 *)((longlong)puVar3 + 0x23) = uVar4;
  uVar4 = CONCAT53(_DAT_1802a4a8b,uRam00000001802a4a88);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a4a80;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a4a7c;
  uVar1 = uRam00000001802a4a78;
  uVar5 = uRam00000001802a4a74;
  *puVar3 = _DAT_1802a4a70;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x2b) = local_31;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 5;
  local_60 = local_50;
  uVar5 = 1;
  FUN_18013105c(&DAT_1802a4aa0,&DAT_18028059f,0x10,6,&DAT_1802a4aa8);
  local_78 = CONCAT44(CONCAT31(local_78._5_3_,DAT_1802a4aa4),DAT_1802a4aa0);
  uVar4 = FUN_180108270(local_40,&local_78,&local_98,0x3f800000,CONCAT44(uVar5,0x3e800000),0x40800000,0x3d4ccccd);
  local_40[0xe] = uVar4;
  uVar4 = FUN_1800ba260();
  local_118 = &PTR_LAB_180219390;
  local_110 = local_40;
  local_108 = &LAB_18012feb0;
  local_e0 = &local_118;
  FUN_180130290(uVar4,local_40,local_e0,local_38);
  return local_40;
}



void Unwind_18012fe70(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x118));
  return;
}



undefined1 FUN_18012ff00(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x4f27cdb3a2255ca8;
  local_68 = 0x956b2b8755916a32;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xe196b086a38cfa5b;
        if (uVar1 != 0xda4ce634f7b4369a) break;
        local_60 = 0xd3c740070507c8e1;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x342234faa19a3295;
        }
        local_68 = 0x13316fcf78840447;
        local_69 = 1;
      }
      if (uVar1 != 0x27135b35d91e36d2) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x36cadc40b3a3a467;
      local_68 = 0xf63cf388ce2068c1;
    }
    local_60 = local_60 ^ 0xe196b086a38cfa5b;
  } while (uVar1 != 0xc0f62fc87d83cca6);
  return local_69;
}


