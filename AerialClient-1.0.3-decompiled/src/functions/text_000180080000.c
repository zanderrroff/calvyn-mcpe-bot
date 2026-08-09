#include "../include/aerialclient_types.h"


void Unwind_1800806a0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800806d0(void)

{
  Unwind_1801dd394();
}



void Unwind_180080700(void)

{
  Unwind_1801dd394();
}



void Unwind_180080730(void)

{
  Unwind_1801dd394();
}



void Unwind_180080760(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x60);
  return;
}



void Unwind_1800807a0(undefined8 param_1,longlong param_2)

{
  FUN_1800812d0(param_2 + 0x80);
  return;
}



void FUN_1800807e0(void)

{
  FUN_1800b8f52(&DAT_1802a1ffc,&DAT_180271b51,0x11,0x10,&DAT_1802a200c);
  FUN_1801d7524(&DAT_1802a1ffc);
}



void FUN_180080820(ulonglong *param_1,ulonglong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;

  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar13 = *param_2;
  if (0xfffffffffffffff < uVar13) {
LAB_180080a33:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar13 == 0) {
    uVar13 = 0;
    puVar14 = (undefined1 *)*param_1;
    puVar10 = (undefined1 *)param_1[1];
    if (puVar14 == puVar10) goto LAB_180080974;
  }
  else if (uVar13 < 0x100) {
    uVar13 = FUN_1801d61c8();
    puVar14 = (undefined1 *)*param_1;
    puVar10 = (undefined1 *)param_1[1];
    if (puVar14 == puVar10) goto LAB_180080974;
  }
  else {
    if (0xffffffffffffffd < uVar13) goto LAB_180080a33;
    lVar11 = FUN_1801d61c8(uVar13 * 0x10 + 0x27);
    uVar13 = lVar11 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar13 - 8) = lVar11;
    puVar14 = (undefined1 *)*param_1;
    puVar10 = (undefined1 *)param_1[1];
    if (puVar14 == puVar10) goto LAB_180080974;
  }
  lVar11 = 0;
  do {
    puVar1 = (undefined4 *)(puVar14 + lVar11);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(uVar13 + lVar11);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar14[lVar11] = 0;
    *(undefined8 *)(puVar14 + lVar11 + 8) = 0;
    lVar9 = lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while (puVar14 + lVar9 != puVar10);
  puVar14 = (undefined1 *)*param_1;
LAB_180080974:
  uVar5 = *param_2;
  if (puVar14 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)param_1[1];
    if (puVar14 != puVar10) {
      do {
        FUN_18007ff50(puVar14 + 8,*puVar14);
        puVar14 = puVar14 + 0x10;
      } while (puVar14 != puVar10);
      puVar14 = (undefined1 *)*param_1;
    }
    uVar12 = param_1[2] - (longlong)puVar14;
    puVar10 = puVar14;
    if (0xfff < uVar12) {
      puVar10 = *(undefined1 **)(puVar14 + -8);
      if ((undefined1 *)0x1f < puVar14 + (-8 - (longlong)puVar10)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar10,uVar12);
  }
  *param_1 = uVar13;
  param_1[1] = (uVar4 - uVar3) + uVar13;
  param_1[2] = uVar5 * 0x10 + uVar13;
  return;
}



void Unwind_180080a60(void)

{
  Unwind_1801dd394();
}



void FUN_180080a80(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;

  puVar1 = (undefined1 *)param_1[1];
  for (puVar2 = (undefined1 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    FUN_18007ff50(puVar2 + 8,*puVar2);
  }
  return;
}



void Unwind_180080ad0(void)

{
  Unwind_1801dd394();
}



undefined1 * FUN_180080af0(ulonglong *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;

  uVar3 = *param_1;
  uVar12 = ((longlong)(param_1[1] - uVar3) >> 4) + 1;
  uVar8 = (longlong)(param_1[2] - uVar3) >> 4;
  uVar13 = (uVar8 >> 1) + uVar8;
  if (uVar13 <= uVar12) {
    uVar13 = uVar12;
  }
  if (0xfffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar13 = 0xfffffffffffffff;
  }
  if (0xfffffffffffffff < uVar13) {
LAB_180080e0a:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar13 == 0) {
    uVar8 = 0;
  }
  else if (uVar13 < 0x100) {
    uVar8 = FUN_1801d61c8(uVar13 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar13) goto LAB_180080e0a;
    lVar9 = FUN_1801d61c8(uVar13 * 0x10 + 0x27);
    uVar8 = lVar9 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar9;
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar1 = (undefined4 *)(param_2 + (uVar8 - uVar3));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined1 *)param_3 = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  puVar14 = (undefined1 *)*param_1;
  puVar10 = (undefined1 *)param_1[1];
  if (param_2 == puVar10) {
    if (puVar14 == param_2) goto LAB_180080d4e;
    lVar9 = 0;
    do {
      puVar1 = (undefined4 *)(puVar14 + lVar9);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(uVar8 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar14[lVar9] = 0;
      *(undefined8 *)(puVar14 + lVar9 + 8) = 0;
      lVar7 = lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    } while (puVar14 + lVar7 != param_2);
  }
  else {
    if (puVar14 != param_2) {
      lVar9 = 0;
      do {
        puVar1 = (undefined4 *)(puVar14 + lVar9);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(uVar8 + lVar9);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        puVar14[lVar9] = 0;
        *(undefined8 *)(puVar14 + lVar9 + 8) = 0;
        lVar7 = lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      } while (puVar14 + lVar7 != param_2);
      puVar10 = (undefined1 *)param_1[1];
    }
    if (param_2 != puVar10) {
      lVar9 = 0;
      do {
        puVar1 = (undefined4 *)(param_2 + lVar9);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(param_2 + lVar9 + (uVar8 - uVar3) + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        param_2[lVar9] = 0;
        *(undefined8 *)(param_2 + lVar9 + 8) = 0;
        lVar7 = lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      } while (param_2 + lVar7 != puVar10);
    }
  }
  puVar14 = (undefined1 *)*param_1;
LAB_180080d4e:
  if (puVar14 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)param_1[1];
    if (puVar14 != puVar10) {
      do {
        FUN_18007ff50(puVar14 + 8,*puVar14);
        puVar14 = puVar14 + 0x10;
      } while (puVar14 != puVar10);
      puVar14 = (undefined1 *)*param_1;
    }
    uVar11 = param_1[2] - (longlong)puVar14;
    puVar10 = puVar14;
    if (0xfff < uVar11) {
      puVar10 = *(undefined1 **)(puVar14 + -8);
      if ((undefined1 *)0x1f < puVar14 + (-8 - (longlong)puVar10)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = uVar11 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar10,uVar11);
  }
  *param_1 = uVar8;
  param_1[1] = uVar12 * 0x10 + uVar8;
  param_1[2] = uVar13 * 0x10 + uVar8;
  return param_2 + (uVar8 - uVar3);
}



void Unwind_180080e40(void)

{
  Unwind_1801dd394();
}



void FUN_180080e60(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;

  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  puVar5 = *(undefined1 **)(param_1 + 0x18);
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  if (puVar5 != puVar1) {
    do {
      FUN_18007ff50(puVar5 + 8,*puVar5);
      puVar5 = puVar5 + 0x10;
    } while (puVar5 != puVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x10;
  lVar3 = lVar2;
  if (0xfff < uVar4) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar4 = uVar4 + 0x27;
  }
  thunk_FUN_1801f42e0(lVar3,uVar4);
  return;
}



void Unwind_180080f80(void)

{
  Unwind_1801dd394();
}



void FUN_180080fa0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;

  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_180080fa0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18007ff50(param_3 + 9,(char)param_3[8]);
    uVar3 = param_3[7];
    if (0xf < uVar3) {
      lVar4 = param_3[4];
      uVar6 = uVar3 + 1;
      lVar5 = lVar4;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar5) - 8U) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar6 = uVar3 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar5,uVar6);
    }
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(undefined1 *)(param_3 + 4) = 0;
    thunk_FUN_1801f42e0(param_3,0x50);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}



void Unwind_180081150(void)

{
  Unwind_1801dd394();
}



void FUN_180081170(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  FUN_18007ff50(param_2 + 0x48,*(undefined1 *)(param_2 + 0x40));
  uVar1 = *(ulonglong *)(param_2 + 0x38);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xf;
  *(undefined1 *)(param_2 + 0x20) = 0;
  thunk_FUN_1801f42e0(param_2,0x50);
  return;
}



void Unwind_1800812b0(void)

{
  Unwind_1801dd394();
}



void FUN_1800812d0(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;

  puVar2 = (undefined1 *)*param_1;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[1];
    if (puVar2 != puVar3) {
      do {
        FUN_18007ff50(puVar2 + 8,*puVar2);
        puVar2 = puVar2 + 0x10;
      } while (puVar2 != puVar3);
      puVar2 = (undefined1 *)*param_1;
    }
    uVar1 = param_1[2] - (longlong)puVar2;
    puVar3 = puVar2;
    if (0xfff < uVar1) {
      puVar3 = *(undefined1 **)(puVar2 + -8);
      if ((undefined1 *)0x1f < puVar2 + (-8 - (longlong)puVar3)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar1 = uVar1 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar3,uVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void Unwind_1800813d0(void)

{
  Unwind_1801dd394();
}



ulonglong * FUN_1800813f0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;

  puVar2 = (ulonglong *)FUN_1801d61c8(0x20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = param_1[2];
  if (0xf < param_1[3]) {
    param_1 = (ulonglong *)*param_1;
  }
  if (-1 < (longlong)uVar1) {
    if (uVar1 < 0x10) {
      puVar2[2] = uVar1;
      puVar2[3] = 0xf;
      uVar1 = param_1[1];
      *puVar2 = *param_1;
      puVar2[1] = uVar1;
    }
    else {
      uVar3 = uVar1 | 0xf;
      uVar5 = 0x16;
      if (0x16 < uVar3) {
        uVar5 = uVar3;
      }
      if (uVar3 < 0xfff) {
        uVar3 = FUN_1801d61c8(uVar5 + 1);
      }
      else {
        lVar4 = FUN_1801d61c8(uVar5 + 0x28);
        uVar3 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar4;
      }
      *puVar2 = uVar3;
      puVar2[2] = uVar1;
      puVar2[3] = uVar5;
      FUN_1802079d0(uVar3,param_1,uVar1 + 1);
    }
    return puVar2;
  }
  FUN_180002ac0();
}



void Unwind_180081580(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
  return;
}



void * __thiscall FUN_1800815b0(void *this,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined1 local_108;
  undefined7 uStack_107;
  uintptr_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  uintptr_t local_98;
  ulonglong local_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uintptr_t local_58;
  uint local_4c;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_80 = 0x20;
  local_58 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_60 = 0xfff;
  local_4c = 0;
  local_c8 = (undefined8 ***)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  local_e0 = 0;
  local_d8 = 10;
  local_d0 = 0xf;
  FUN_1800b8f52(&DAT_1802a206c,&DAT_180271cff,0x14,0xb,&DAT_1802a2078);
  local_e0 = CONCAT62(local_e0._2_6_,DAT_1802a2074);
  local_e8 = DAT_1802a206c;
  FUN_180081f20(&local_108,&local_e8,param_2);
  local_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = local_48;
  if (local_48 < local_f8 + *(longlong *)(param_3 + 0x10)) {
    FUN_180002240(&local_a8);
    local_98 = local_58;
  }
  FUN_1800820e0(&local_a8,&local_108,&local_c8,param_3);
  if (local_48 < local_f0) {
    lVar1 = CONCAT71(uStack_107,local_108);
    uVar4 = local_78 + local_f0;
    lVar2 = lVar1;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (local_80 <= (ulonglong)((lVar1 + local_70) - lVar2)) goto LAB_1800818e6;
      uVar4 = local_f0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  local_f8 = local_58;
  local_f0 = local_48;
  local_108 = 0;
  if (local_48 < local_d0) {
    uVar4 = local_78 + local_d0;
    lVar2 = local_e8;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(local_e8 + -8);
      if (local_80 <= (ulonglong)((local_e8 + local_70) - lVar2)) goto LAB_1800818e6;
      uVar4 = local_d0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  if (local_48 < local_b0) {
    uVar4 = local_78 + local_b0;
    pppuVar3 = (undefined8 ***)local_c8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_c8[-1];
      if (local_80 <= (ulonglong)((longlong)local_c8 + (local_70 - (longlong)pppuVar3))) goto LAB_1800818e6;
      uVar4 = local_b0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  local_c8 = &local_a8;
  if (local_48 < local_90) {
    local_c8 = local_a8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  FUN_1801dd1b8(&local_c8,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020e900;
  if (local_48 < local_90) {
    uVar4 = local_78 + local_90;
    pppuVar3 = (undefined8 ***)local_a8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_a8[-1];
      if (local_80 <= (ulonglong)((longlong)local_a8 + (local_70 - (longlong)pppuVar3))) {
LAB_1800818e6:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_58);
      }
      uVar4 = local_90 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  return this;
}



void Unwind_180081900(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_180081940(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  FUN_180001ef0(param_2 + 0x30);
  return;
}



undefined8 * FUN_180081980(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong uVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar5 = 0xf;
  if (0xf < sVar3 + sVar2) {
    FUN_180002240(param_1,sVar3 + sVar2);
    param_1[2] = 0;
    uVar5 = param_1[3];
  }
  sVar2 = strlen(param_2);
  if (uVar5 < sVar2) {
    FUN_180066dd0(param_1,sVar2);
  }
  else {
    param_1[2] = sVar2;
    puVar4 = param_1;
    if (0xf < uVar5) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar4,param_2,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2) = 0;
  }
  _Str = (char *)*param_3;
  sVar2 = strlen(_Str);
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < sVar2) {
    FUN_180066dd0(param_1,sVar2,param_1,_Str,sVar2);
  }
  else {
    param_1[2] = sVar2 + lVar1;
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar4,_Str,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2 + lVar1) = 0;
  }
  return param_1;
}



void Unwind_180081af0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined * FUN_180081b20(byte *param_1)

{
  ulonglong uVar1;
  byte local_59;
  ulonglong local_58;
  ulonglong local_50;
  undefined *local_48;

  local_50 = 0xae815135c5dabaab;
  local_58 = 0xc1d04c44025e0676;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x8c7d8d88d79fa646;
        if (uVar1 != 0x9ff2997d3556f35a) break;
        FUN_1800b94e0(&DAT_1802a34d8);
        local_48 = *(undefined **)(&DAT_1802a34d8 + (ulonglong)local_59 * 8);
        local_50 = 0x7ad0729734d3319b;
        local_58 = 0x47669d037eac6d7d;
      }
      if (uVar1 != 0x6f511d71c784bcdd) break;
      local_59 = *param_1;
      FUN_1800b8f52(&DAT_1802a20f4,&DAT_180271f17,0x1b,7,&DAT_1802a20fc);
      local_50 = 0x1332672e48d65194;
      if (local_59 < 10) {
        local_50 = 0xb17611c737fffe28;
      }
      local_58 = 0x2e8488ba02a90d72;
      local_48 = &DAT_1802a20f4;
    }
    local_50 = local_50 ^ 0x8c7d8d88d79fa646;
  } while (uVar1 != 0x3db6ef944a7f5ce6);
  return local_48;
}



undefined8 * FUN_180081d80(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;

  if (param_2 < '\x04') {
    if (param_2 < '\x02') {
      if (param_2 == '\x01') {
        plVar1 = (longlong *)FUN_1801d61c8(0x10);
        *plVar1 = 0;
        plVar1[1] = 0;
        lVar2 = FUN_1801d61c8(0x50);
        *(longlong *)lVar2 = lVar2;
        *(longlong *)(lVar2 + 8) = lVar2;
        *(longlong *)(lVar2 + 0x10) = lVar2;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x19) = 1;
        *plVar1 = lVar2;
        *param_1 = plVar1;
        return param_1;
      }
LAB_180081e68:
      *param_1 = 0;
      return param_1;
    }
    if (param_2 == '\x03') {
      puVar3 = (undefined8 *)FUN_180083800(&DAT_18020c3c0);
    }
    else {
      puVar3 = (undefined8 *)FUN_1801d61c8(0x18);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
  }
  else {
    if (param_2 < '\x06') {
      if (param_2 == '\x04') {
        *(undefined1 *)param_1 = 0;
        return param_1;
      }
    }
    else if (param_2 != '\x06') {
      if (param_2 < '\b') {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        if (param_2 != '\b') goto LAB_180081e68;
        puVar3 = (undefined8 *)FUN_1801d61c8(0x28);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 4) = 0;
      }
      goto LAB_180081ed5;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_180081ed5:
  *param_1 = puVar3;
  return param_1;
}



void Unwind_180081ef0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 FUN_180081f20(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_60 [3];
  ulonglong local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  FUN_180082d10(local_60,param_3);
  local_39 = 0x2e;
  FUN_1800b8f52(&DAT_1802a2084,&DAT_180271d64,0x1b,0x11,&DAT_1802a2098);
  FUN_1800b8f52(&DAT_1802a207c,&DAT_180271d2f,0x1b,3,&DAT_1802a2080);
  FUN_180082600(param_1,&DAT_1802a2084,param_2,&local_39,local_60,&DAT_1802a207c);
  if (0xf < local_48) {
    uVar2 = local_48 + 1;
    lVar1 = local_60[0];
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(local_60[0] + -8);
      if (0x1f < (local_60[0] - lVar1) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = local_48 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
  }
  return param_1;
}



void Unwind_1800820b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x38);
  return;
}



void FUN_1800820e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_c9;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  longlong local_88;
  ulonglong *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_c0 = 0x80b237c31957d8e4;
  local_c8 = 0xa6bb7cbfb33b0298;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_c0 ^ 0x3b7478ed9a2ac0b0;
            uVar1 = local_c0 ^ local_c8;
            local_c8 = local_c8 ^ 0x3b7478ed9a2ac0b0;
            local_c0 = uVar2;
            if (0x26094b7caa6cda7b < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x53b753d2ca7a3476) {
              if (uVar1 == 0x8eda8cafc55ef0e3) {
                FUN_180066dd0(param_1);
                local_c0 = 0xd2f31659d27e310f;
                local_c8 = 0x8d995c3e33f41a5a;
              }
              else if (uVar1 == 0x978552a88d5537bd) {
                local_a0 = param_3[2];
                local_78 = param_3;
                if (local_b8 < (ulonglong)param_3[3]) {
                  local_78 = (undefined8 *)*param_3;
                }
                local_70 = *local_b0;
                local_50 = *local_80;
                local_c0 = 0xb9e0fc326fe74920;
                if (local_50 - local_70 < local_a0) {
                  local_c0 = 0x5478d079bf6522da;
                }
                local_c8 = 0x15a8501f5a6282aa;
              }
            }
            else if (uVar1 == 0xac48ac2d3585cb8a) {
              *local_b0 = local_70 + local_a0;
              puVar3 = param_1;
              if (local_b8 < local_50) {
                puVar3 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_70 + (longlong)puVar3,local_78,local_a0);
              *(undefined1 *)((longlong)puVar3 + local_70 + local_a0) = local_c9;
              local_c0 = 0xdedf43ca7e31e01c;
              local_c8 = 0xb3962c46a9465255;
            }
            else if (uVar1 == 0xd812f7feb2419c1b) {
              FUN_180066dd0(param_1);
              local_c0 = 0xaff898ad22ef268f;
              local_c8 = 0x387dca05afba1132;
            }
            else if (uVar1 == 0x665d3ba319a1821) {
              *local_b0 = local_88 + local_a8;
              puVar3 = param_1;
              if (local_b8 < local_58) {
                puVar3 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_88 + (longlong)puVar3,local_90,local_a8);
              *(undefined1 *)((longlong)puVar3 + local_88 + local_a8) = local_c9;
              local_c0 = 0xc6cbbdfb911676cc;
              local_c8 = 0x514eef531c434171;
            }
          }
          if (0x45713c7ac3d8af76 < (longlong)uVar1) break;
          if (uVar1 == 0x26094b7caa6cda7c) {
            local_b8 = 0xf;
            local_c9 = 0;
            local_a8 = param_2[2];
            local_90 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              local_90 = (undefined8 *)*param_2;
            }
            local_b0 = param_1 + 2;
            local_88 = param_1[2];
            local_80 = param_1 + 3;
            local_58 = param_1[3];
            local_c0 = 0xc431bf94052625aa;
            if (local_58 - local_88 < local_a8) {
              local_c0 = 0x1a469bd086fda190;
            }
            local_c8 = 0xc2546c2e34bc3d8b;
          }
          else if (uVar1 == 0x41d08066e507a070) {
            FUN_180066dd0(param_1);
            local_c0 = 0x52479772b9cd6d68;
            local_c8 = 0x3f0ef8fe6ebadf21;
          }
        }
        if (uVar1 != 0x45713c7ac3d8af77) break;
        *local_b0 = local_60 + local_98;
        puVar3 = param_1;
        if (local_b8 < local_48) {
          puVar3 = (undefined8 *)*param_1;
        }
        FUN_1802079d0(local_60 + (longlong)puVar3,local_68,local_98);
        *(undefined1 *)((longlong)puVar3 + local_60 + local_98) = local_c9;
        local_c0 = 0x537b4f14692fcdfa;
        local_c8 = 0xc11057388a5e6af;
      }
      if (uVar1 != 0x6d496f8cd777b249) break;
      local_98 = param_4[2];
      local_68 = param_4;
      if (local_b8 < (ulonglong)param_4[3]) {
        local_68 = (undefined8 *)*param_4;
      }
      local_60 = *local_b0;
      local_48 = *local_80;
      local_c0 = 0x52711420aa2e2ef8;
      if (local_48 - local_60 < local_98) {
        local_c0 = 0x99daa4f5aca8716c;
      }
      local_c8 = 0x1700285a69f6818f;
    }
  } while (uVar1 != 0x5f6a4a67e18a2b55);
  return;
}



undefined8 *
FUN_180082600(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined8 param_4,longlong param_5,char *param_6)

{
  longlong lVar1;
  longlong lVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  ulonglong uVar6;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar3 = strlen(param_2);
  lVar1 = param_3[2];
  lVar2 = *(longlong *)(param_5 + 0x10);
  sVar4 = strlen(param_6);
  uVar6 = 0xf;
  if (0xf < sVar3 + lVar1 + sVar4 + 1 + lVar2) {
    FUN_180002240(param_1);
    param_1[2] = 0;
    uVar6 = param_1[3];
  }
  sVar3 = strlen(param_2);
  if (uVar6 < sVar3) {
    FUN_180066dd0(param_1,sVar3);
  }
  else {
    param_1[2] = sVar3;
    puVar5 = param_1;
    if (0xf < uVar6) {
      puVar5 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar5,param_2,sVar3);
    *(undefined1 *)((longlong)puVar5 + sVar3) = 0;
  }
  uVar6 = param_3[2];
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < uVar6) {
    FUN_180066dd0(param_1,uVar6,uVar6,param_3,uVar6);
  }
  else {
    param_1[2] = lVar1 + uVar6;
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar5,param_3);
    *(undefined1 *)((longlong)puVar5 + lVar1 + uVar6) = 0;
  }
  FUN_180082800(param_1,param_4,param_5,param_6);
  return param_1;
}



void Unwind_1800827c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x38));
  return;
}



void FUN_180082800(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3,char *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 local_c2;
  undefined1 local_c1;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  size_t local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong *local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_b8 = 0xfcd316e05563cb4a;
  local_c0 = 0x8857c0192ec93ddc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_b8 ^ 0xaf85b9d436d3bf75;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0xaf85b9d436d3bf75;
            local_b8 = uVar3;
            if ((longlong)uVar1 < 0x28ce407c58dabcb9) break;
            if ((longlong)uVar1 < 0x45db505dea476f02) {
              if (uVar1 == 0x28ce407c58dabcb9) {
                FUN_18006a970(param_1,local_90);
                local_b8 = 0xbabe197315ff9527;
                local_c0 = 0x391a772fa19ff7e8;
              }
              else if (uVar1 == 0x297066bd179774de) {
                FUN_180066dd0(param_1);
                local_b8 = 0x4a3ba4624f4a29fe;
                local_c0 = 0x22a08129d43fedce;
              }
            }
            else if (uVar1 == 0x45db505dea476f02) {
              *local_b0 = local_70 + local_a0;
              puVar2 = param_1;
              if (local_a8 < local_50) {
                puVar2 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_70 + (longlong)puVar2,local_78,local_a0);
              *(undefined1 *)((longlong)puVar2 + local_70 + local_a0) = local_c2;
              local_b8 = 0xb5fc9c390c1a2c1a;
              local_c0 = 0xdd67b972976fe82a;
            }
            else if (uVar1 == 0x689b254b9b75c430) {
              local_98 = strlen(param_4);
              local_68 = *local_b0;
              local_48 = *local_80;
              local_b8 = 0x70863ae84fc063c3;
              if (local_48 - local_68 < local_98) {
                local_b8 = 0x46ae2853a385733;
              }
              local_c0 = 0x98c5c6e5a7d68bd7;
            }
            else if (uVar1 == 0x7484d6f97baaf696) {
              local_a8 = 0xf;
              local_90 = 1;
              local_c2 = 0;
              local_c1 = *param_2;
              local_b0 = param_1 + 2;
              local_88 = param_1[2];
              local_80 = param_1 + 3;
              local_58 = param_1[3];
              local_b8 = 0xe80e8b1459af016;
              if (local_88 < local_58) {
                local_b8 = 0x9bdbd62540ee9e42;
              }
              local_c0 = 0x264ea8cd1d404caf;
            }
          }
          if (-0x426a8117a2512d14 < (longlong)uVar1) break;
          if (uVar1 == 0x83a46e5cb46062cf) {
            local_a0 = param_3[2];
            local_78 = param_3;
            if (local_a8 < (ulonglong)param_3[3]) {
              local_78 = (undefined8 *)*param_3;
            }
            local_70 = *local_b0;
            local_50 = *local_80;
            local_b8 = 0xdd255c7f5505c525;
            if (local_50 - local_70 < local_a0) {
              local_b8 = 0xb18e6a9fa8d5def9;
            }
            local_c0 = 0x98fe0c22bf42aa27;
          }
          else if (uVar1 == 0x9caf24609deedce4) {
            FUN_180066dd0(param_1);
            local_b8 = 0xa1e8599994daa6e2;
            local_c0 = 0x1f16ba2a58e306a6;
          }
        }
        if (uVar1 != 0xbd957ee85daed2ed) break;
        *local_b0 = local_88 + local_90;
        puVar2 = param_1;
        if (local_a8 < local_58) {
          puVar2 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)puVar2 + local_88) = local_c1;
        *(undefined1 *)((longlong)puVar2 + local_88 + local_90) = local_c2;
        local_b8 = 0x4aece96ec48a73b9;
        local_c0 = 0xc948873270ea1176;
      }
      if (uVar1 != 0xe843fc0de816e814) break;
      *local_b0 = local_68 + local_98;
      puVar2 = param_1;
      if (local_a8 < local_48) {
        puVar2 = (undefined8 *)*param_1;
      }
      FUN_1802079d0(local_68 + (longlong)puVar2,param_4,local_98);
      *(undefined1 *)((longlong)puVar2 + local_68 + local_98) = local_c2;
      local_b8 = 0xcba1fcfea5ab8621;
      local_c0 = 0x755f1f4d69922665;
    }
  } while (uVar1 != 0xbefee3b3cc39a044);
  return;
}



undefined8 * FUN_180082d10(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte local_109;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_63 [35];

  local_100 = 0xd3e7ef42df39361;
  local_108 = 0x69b245ea570697c1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_100 ^ 0x9a1e8f6c0d75f89c;
            uVar1 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x9a1e8f6c0d75f89c;
            local_100 = uVar3;
            if ((longlong)uVar1 < 0x2324d413eede3c9e) break;
            if ((longlong)uVar1 < 0x4a411a2bcafc47d3) {
              if (uVar1 == 0x2324d413eede3c9e) {
                local_88 = local_c0;
                local_e0 = (longlong)local_90 - (longlong)local_c0;
                local_100 = 0x91390dfdec8edb91;
                if ((longlong)local_e0 < 0) {
                  local_100 = 0xc973279fffe9c49c;
                }
                local_108 = 0x602b438b7dd573e2;
              }
              else if (uVar1 == 0x255b3a9e20fce478) {
                *param_1 = 0;
                param_1[1] = 0;
                local_100 = 0x9eceb39ce265f808;
                local_108 = 0xbdea678f0cbbc496;
                local_c0 = local_c8;
              }
              else if (uVar1 == 0x4584fd9f439d4892) {
                *param_1 = local_a0;
                local_100 = 0x552266c96a8fac5e;
                local_108 = 0x1f637ce2a073eb8d;
                local_b8 = local_d8;
                local_b0 = local_a0;
              }
            }
            else if ((longlong)uVar1 < 0x5bfedf8f6af022e7) {
              if (uVar1 == 0x4a411a2bcafc47d3) {
                param_1[2] = local_e0;
                param_1[3] = local_b8;
                FUN_1802079d0(local_b0,local_88,local_e0);
                *(undefined1 *)((longlong)local_b0 + local_e0) = 0;
                local_100 = 0x871f89d3adb1ecf;
                local_108 = 0xbd8f36221a6d012a;
              }
              else if (uVar1 == 0x5bf6e2eeeb340285) {
                *(undefined1 *)((longlong)&local_80 + local_80 + 6) = 0x2d;
                param_1[2] = 0;
                param_1[3] = 0;
                *param_1 = 0;
                param_1[1] = 0;
                local_100 = 0x496a264281998176;
                if (local_80 + -2 == local_d0) {
                  local_100 = 0x78ae04c2cedad523;
                }
                local_c0 = (undefined1 *)((longlong)&local_80 + local_80 + 6);
                local_108 = 0x6a4ef2516f47bde8;
              }
            }
            else if (uVar1 == 0x5bfedf8f6af022e7) {
              local_80 = local_a8;
              *(byte *)((longlong)&local_80 + local_a8 + 7) = (byte)(local_f0 % local_f8) | local_109;
              local_100 = 0x193ea0b4d01cdf9;
              if (local_f0 < local_f8) {
                local_100 = 0x19bd76accc5ed9b;
              }
              local_108 = 0x5a6d358427f1ef1e;
              local_f0 = local_f0 / local_f8;
              local_a8 = local_a8 + -1;
            }
            else if (uVar1 == 0x648c3b1e7af504a0) {
              local_109 = 0x30;
              local_e8 = 0xf;
              local_d0 = 0x15;
              local_f8 = 10;
              local_f4 = 0;
              local_98 = local_63;
              local_100 = 0x78211ab0a0b3fd18;
              if ((int)param_2 < 0) {
                local_100 = 0x6a971dc0e0373ec;
              }
              local_108 = 0xe830e5d5951b91c1;
              local_ec = param_2;
              local_90 = local_98;
            }
          }
          if ((longlong)uVar1 < -0x11666bf664e71dd3) break;
          if ((longlong)uVar1 < 0xe6321d2376894bd) {
            if (uVar1 == 0xee9994099b18e22d) {
              local_100 = 0xf10c9922c7197939;
              local_108 = 0xaaf246adade95bde;
              local_f0 = local_f4 - param_2;
              local_a8 = local_d0;
            }
            else if (uVar1 == 0xf1124e76915ba873) {
              local_b8 = local_e8;
              local_100 = 0xc6008e615062f5fe;
              if (local_e0 < 0x10) {
                local_100 = 0x56d9d468ac60e968;
              }
              local_108 = 0x1c98ce43669caebb;
              local_b0 = param_1;
            }
          }
          else if (uVar1 == 0xe6321d2376894bd) {
            lVar2 = FUN_1801d61c8(local_d8 + 0x28);
            local_a0 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
            local_a0[-1] = lVar2;
            local_100 = 0x6e759e2af21aedcb;
            local_108 = 0x2bf163b5b187a559;
          }
          else if (uVar1 == 0x12e0f693a19d68cb) {
            param_1[3] = local_e8;
            local_100 = 0x89c99713eddb10db;
            local_108 = 0x3c3759accd6d0f3e;
          }
        }
        if (-0x56a79beb7dc34883 < (longlong)uVar1) break;
        if (uVar1 == 0x808097270b64e672) {
          local_a0 = (undefined8 *)FUN_1801d61c8(local_d8 + 1);
          local_100 = 0x75ec820c95beb4af;
          local_108 = 0x30687f93d623fc3d;
        }
        else if (uVar1 == 0x9011ff6535a86cd9) {
          local_c8 = local_98 + -1;
          local_98[-1] = (byte)(local_ec % local_f8) | local_109;
          local_100 = 0xac7ac7c07a37cdcc;
          if (local_ec < local_f8) {
            local_100 = 0x1930023b6f63456d;
          }
          local_108 = 0x3c6b38a54f9fa115;
          local_ec = local_ec / local_f8;
          local_98 = local_c8;
        }
      }
      if (uVar1 != 0xda98402236fe5b45) break;
      uVar1 = local_e0 | local_e8;
      local_d8 = 0x16;
      if (0x16 < uVar1) {
        local_d8 = uVar1;
      }
      local_100 = 0xc1efa99c4c93c1ba;
      if (0xffe < uVar1) {
        local_100 = 0x4f0c1f69709fb375;
      }
      local_108 = 0x416f3ebb47f727c8;
    }
    if (uVar1 == 0xb5fecebf20b61fe5) break;
    if (uVar1 == 0xa9586414823cb77e) {
      FUN_180002ac0();
    }
  }
  return param_1;
}



undefined * FUN_1800834e0(longlong param_1)

{
  undefined *puVar1;

  puVar1 = *(undefined **)(param_1 + 0x28);
  FUN_1800b8f52(&DAT_1802a1f60,&DAT_18027190a,0x1f,0x12,&DAT_1802a1f74);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_1802a1f60;
  }
  return puVar1;
}



undefined8 * FUN_180083800(char *param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;

  puVar1 = (undefined8 *)FUN_1801d61c8(0x20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  sVar2 = strlen(param_1);
  if (-1 < (longlong)sVar2) {
    uVar6 = 0xf;
    puVar5 = puVar1;
    if (0xf < sVar2) {
      uVar3 = sVar2 | 0xf;
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
      *puVar1 = puVar5;
    }
    puVar1[2] = sVar2;
    puVar1[3] = uVar6;
    FUN_1802079d0(puVar5,param_1,sVar2);
    *(undefined1 *)((longlong)puVar5 + sVar2) = 0;
    return puVar1;
  }
  FUN_180002ac0();
}



void Unwind_180083990(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30));
  return;
}



void * __thiscall FUN_1800839c0(void *this,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined1 local_108;
  undefined7 uStack_107;
  uintptr_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  uintptr_t local_98;
  ulonglong local_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uintptr_t local_58;
  uint local_4c;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_80 = 0x20;
  local_58 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_60 = 0xfff;
  local_4c = 0;
  local_c8 = (undefined8 ***)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  local_e0 = 0;
  local_d8 = 10;
  local_d0 = 0xf;
  FUN_1800b8f52(&DAT_1802a206c,&DAT_180271cff,0x14,0xb,&DAT_1802a2078);
  local_e0 = CONCAT62(local_e0._2_6_,DAT_1802a2074);
  local_e8 = DAT_1802a206c;
  FUN_180081f20(&local_108,&local_e8,param_2);
  local_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = local_48;
  if (local_48 < local_f8 + *(longlong *)(param_3 + 0x10)) {
    FUN_180002240(&local_a8);
    local_98 = local_58;
  }
  FUN_1800820e0(&local_a8,&local_108,&local_c8,param_3);
  if (local_48 < local_f0) {
    lVar1 = CONCAT71(uStack_107,local_108);
    uVar4 = local_78 + local_f0;
    lVar2 = lVar1;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (local_80 <= (ulonglong)((lVar1 + local_70) - lVar2)) goto LAB_180083cf6;
      uVar4 = local_f0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  local_f8 = local_58;
  local_f0 = local_48;
  local_108 = 0;
  if (local_48 < local_d0) {
    uVar4 = local_78 + local_d0;
    lVar2 = local_e8;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(local_e8 + -8);
      if (local_80 <= (ulonglong)((local_e8 + local_70) - lVar2)) goto LAB_180083cf6;
      uVar4 = local_d0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  if (local_48 < local_b0) {
    uVar4 = local_78 + local_b0;
    pppuVar3 = (undefined8 ***)local_c8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_c8[-1];
      if (local_80 <= (ulonglong)((longlong)local_c8 + (local_70 - (longlong)pppuVar3))) goto LAB_180083cf6;
      uVar4 = local_b0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  local_c8 = &local_a8;
  if (local_48 < local_90) {
    local_c8 = local_a8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  FUN_1801dd1b8(&local_c8,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020e900;
  if (local_48 < local_90) {
    uVar4 = local_78 + local_90;
    pppuVar3 = (undefined8 ***)local_a8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_a8[-1];
      if (local_80 <= (ulonglong)((longlong)local_a8 + (local_70 - (longlong)pppuVar3))) {
LAB_180083cf6:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_58);
      }
      uVar4 = local_90 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  return this;
}



void Unwind_180083d10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_180083d50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void * __thiscall FUN_180083d90(void *this,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined1 local_108;
  undefined7 uStack_107;
  uintptr_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  uintptr_t local_98;
  ulonglong local_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uintptr_t local_58;
  uint local_4c;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_80 = 0x20;
  local_58 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_60 = 0xfff;
  local_4c = 0;
  local_c8 = (undefined8 ***)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  local_e0 = 0;
  local_d8 = 10;
  local_d0 = 0xf;
  FUN_1800b8f52(&DAT_1802a206c,&DAT_180271cff,0x14,0xb,&DAT_1802a2078);
  local_e0 = CONCAT62(local_e0._2_6_,DAT_1802a2074);
  local_e8 = DAT_1802a206c;
  FUN_180081f20(&local_108,&local_e8,param_2);
  local_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = local_48;
  if (local_48 < local_f8 + *(longlong *)(param_3 + 0x10)) {
    FUN_180002240(&local_a8);
    local_98 = local_58;
  }
  FUN_1800820e0(&local_a8,&local_108,&local_c8,param_3);
  if (local_48 < local_f0) {
    lVar1 = CONCAT71(uStack_107,local_108);
    uVar4 = local_78 + local_f0;
    lVar2 = lVar1;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (local_80 <= (ulonglong)((lVar1 + local_70) - lVar2)) goto LAB_1800840c6;
      uVar4 = local_f0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  local_f8 = local_58;
  local_f0 = local_48;
  local_108 = 0;
  if (local_48 < local_d0) {
    uVar4 = local_78 + local_d0;
    lVar2 = local_e8;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(local_e8 + -8);
      if (local_80 <= (ulonglong)((local_e8 + local_70) - lVar2)) goto LAB_1800840c6;
      uVar4 = local_d0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  if (local_48 < local_b0) {
    uVar4 = local_78 + local_b0;
    pppuVar3 = (undefined8 ***)local_c8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_c8[-1];
      if (local_80 <= (ulonglong)((longlong)local_c8 + (local_70 - (longlong)pppuVar3))) goto LAB_1800840c6;
      uVar4 = local_b0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  local_c8 = &local_a8;
  if (local_48 < local_90) {
    local_c8 = local_a8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  FUN_1801dd1b8(&local_c8,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020e900;
  if (local_48 < local_90) {
    uVar4 = local_78 + local_90;
    pppuVar3 = (undefined8 ***)local_a8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_a8[-1];
      if (local_80 <= (ulonglong)((longlong)local_a8 + (local_70 - (longlong)pppuVar3))) {
LAB_1800840c6:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_58);
      }
      uVar4 = local_90 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  return this;
}



void Unwind_1800840e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_180084120(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  FUN_180001ef0(param_2 + 0x30);
  return;
}



undefined8 * FUN_180084160(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong uVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar5 = 0xf;
  if (0xf < sVar3 + sVar2) {
    FUN_180002240(param_1,sVar3 + sVar2);
    param_1[2] = 0;
    uVar5 = param_1[3];
  }
  sVar2 = strlen(param_2);
  if (uVar5 < sVar2) {
    FUN_180066dd0(param_1,sVar2);
  }
  else {
    param_1[2] = sVar2;
    puVar4 = param_1;
    if (0xf < uVar5) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar4,param_2,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2) = 0;
  }
  _Str = (char *)*param_3;
  sVar2 = strlen(_Str);
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < sVar2) {
    FUN_180066dd0(param_1,sVar2,param_1,_Str,sVar2);
  }
  else {
    param_1[2] = sVar2 + lVar1;
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar4,_Str,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2 + lVar1) = 0;
  }
  return param_1;
}



void Unwind_1800842d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



char * FUN_180084300(char *param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_21;
  char *local_20;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  cVar1 = *param_2;
  *param_1 = cVar1;
  local_20 = param_1;
  if (cVar1 < '\x05') {
    if (cVar1 < '\x03') {
      if (cVar1 == '\x02') {
        plVar2 = *(longlong **)(param_2 + 8);
        puVar4 = (undefined8 *)FUN_1801d61c8(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        FUN_180084bb0(puVar4,plVar2[1] - *plVar2 >> 4,plVar2,plVar2 + 1);
        param_1 = local_20;
      }
      else {
        if (cVar1 != '\x01') {
          return param_1;
        }
        uVar3 = *(undefined8 *)(param_2 + 8);
        puVar4 = (undefined8 *)FUN_1801d61c8(0x10);
        FUN_1800844a0(puVar4,uVar3,&local_21);
        param_1 = local_20;
      }
    }
    else if (cVar1 == '\x04') {
      puVar4 = (undefined8 *)(ulonglong)(byte)param_2[8];
    }
    else {
      puVar4 = (undefined8 *)FUN_1800813f0(*(undefined8 *)(param_2 + 8));
      param_1 = local_20;
    }
  }
  else if ((cVar1 < '\a') || (cVar1 == '\a')) {
    puVar4 = *(undefined8 **)(param_2 + 8);
  }
  else {
    if (cVar1 != '\b') {
      return param_1;
    }
    puVar4 = (undefined8 *)FUN_180084e90(*(undefined8 *)(param_2 + 8));
    param_1 = local_20;
  }
  *(undefined8 **)(param_1 + 8) = puVar4;
  return param_1;
}



void Unwind_180084420(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(*(undefined8 *)(param_2 + 0x48));
  return;
}



void Unwind_180084440(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30));
  return;
}



void Unwind_180084470(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x28));
  return;
}



longlong * FUN_1800844a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;

  *param_1 = 0;
  param_1[1] = 0;
  plVar6 = param_1;
  plVar7 = param_1;
  lVar2 = FUN_1801d61c8(0x50);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined1 *)(lVar2 + 0x18) = 1;
  *(undefined1 *)(lVar2 + 0x19) = 1;
  *param_1 = lVar2;
  uVar3 = FUN_180084710(param_1,*(undefined8 *)(*param_2 + 8),lVar2,param_4,plVar6,plVar7);
  *(undefined8 *)(*param_1 + 8) = uVar3;
  param_1[1] = param_2[1];
  plVar6 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar6[1];
  if (*(char *)(plVar6[1] + 0x19) == '\0') {
    do {
      plVar4 = plVar7;
      plVar7 = (longlong *)*plVar4;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
    *plVar6 = (longlong)plVar4;
    lVar2 = *param_1;
    lVar1 = *(longlong *)(lVar2 + 8);
    do {
      lVar5 = lVar1;
      lVar1 = *(longlong *)(lVar5 + 0x10);
    } while (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x19) == '\0');
  }
  else {
    *plVar6 = (longlong)plVar6;
    lVar2 = *param_1;
    lVar5 = lVar2;
  }
  *(longlong *)(lVar2 + 0x10) = lVar5;
  return param_1;
}



void Unwind_1800845a0(undefined8 param_1,longlong param_2)

{
  FUN_1800845d0(param_2 + 0x20);
  return;
}



void FUN_1800845d0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;

  local_50 = 0x95ff23d484d872fc;
  local_58 = 0xd2041deec73ed3a2;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xea8e5e8ac590acd;
        if (uVar1 != 0xe186e4f4cdf51f52) break;
        FUN_180080fa0(local_48,*param_1,*(undefined8 *)(*local_48 + 8));
        thunk_FUN_1801f42e0(*local_48,0x50);
        local_50 = 0xdbd52ae4729a01d7;
        local_58 = 0x53e0913966590d4d;
      }
      if (uVar1 != 0x47fb3e3a43e6a15e) break;
      local_48 = (longlong *)param_1[1];
      local_50 = 0x66475ad29eac39e0;
      if (local_48 == (longlong *)0x0) {
        local_50 = 0xff405fb479a2a28;
      }
      local_58 = 0x87c1be26535926b2;
    }
    local_50 = local_50 ^ 0xea8e5e8ac590acd;
  } while (uVar1 != 0x8835bbdd14c30c9a);
  return;
}



undefined8 * FUN_180084710(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;

  puVar1 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_1800847d0(param_1,puVar1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar2 = FUN_180084710(param_1,*param_2);
    *puVar1 = uVar2;
    uVar2 = FUN_180084710(param_1,param_2[2]);
    puVar1[2] = uVar2;
  }
  return puVar1;
}



void Unwind_1800847a0(undefined8 param_1,longlong param_2)

{
  FUN_180084a50(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_1800847d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;

  puVar5 = (undefined8 *)FUN_1801d61c8(0x50);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar1 = param_3[2];
  puVar8 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar8 = (undefined8 *)*param_3;
  }
  if (-1 < (longlong)uVar1) {
    if (uVar1 < 0x10) {
      puVar5[6] = uVar1;
      puVar5[7] = 0xf;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 4);
      uVar3 = *(undefined4 *)(puVar8 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0xc);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)puVar8;
      *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
      *(undefined4 *)(puVar5 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar4;
    }
    else {
      uVar6 = uVar1 | 0xf;
      uVar9 = 0x16;
      if (0x16 < uVar6) {
        uVar9 = uVar6;
      }
      if (uVar6 < 0xfff) {
        uVar6 = FUN_1801d61c8(uVar9 + 1);
      }
      else {
        lVar7 = FUN_1801d61c8(uVar9 + 0x28);
        uVar6 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar7;
      }
      puVar5[4] = uVar6;
      puVar5[6] = uVar1;
      puVar5[7] = uVar9;
      FUN_1802079d0(uVar6,puVar8,uVar1 + 1);
    }
    FUN_180084300(puVar5 + 8,param_3 + 4);
    *puVar5 = param_2;
    puVar5[1] = param_2;
    puVar5[2] = param_2;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x19) = 0;
    return;
  }
  FUN_180002ac0();
}



void Unwind_1800849d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    thunk_FUN_1801f42e0(*(longlong *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



void Unwind_180084a10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x40);
  return;
}



void FUN_180084a50(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char local_59;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;

  local_50 = 0x6209368c16b41ab8;
  local_58 = 0xd160b5f538ad11e7;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x5b4e5ab7f9ea944f;
        if (uVar2 != 0xb36983792e190b5f) break;
        local_59 = '\0';
        local_50 = 0x32e6c3c1e24eaf86;
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          local_50 = 0xa139acb83c47bf92;
        }
        local_58 = 0x4b041daea79903f8;
        local_48 = param_3;
      }
      if (uVar2 != 0xea3db1169bdebc6a) break;
      FUN_180084a50(param_1,param_2,local_48[2]);
      plVar1 = (longlong *)*local_48;
      FUN_180081170(param_2,local_48);
      local_50 = 0xd6431876df073ee3;
      if (*(char *)((longlong)plVar1 + 0x19) == local_59) {
        local_50 = 0x459c770f010e2ef7;
      }
      local_58 = 0xafa1c6199ad0929d;
      local_48 = plVar1;
    }
    local_50 = local_50 ^ 0x5b4e5ab7f9ea944f;
  } while (uVar2 != 0x79e2de6f45d7ac7e);
  return;
}



void FUN_180084bb0(ulonglong *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (0xfffffffffffffff < param_2) {
      FUN_1800807e0();
    }
    if (param_2 < 0x100) {
      uVar3 = FUN_1801d61c8(param_2 * 0x10);
    }
    else {
      if (0xffffffffffffffd < param_2) {
        std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
      }
      lVar1 = FUN_1801d61c8(param_2 * 0x10 + 0x27);
      uVar3 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar1;
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = param_2 * 0x10 + uVar3;
    lVar1 = *param_4;
    local_40 = param_1;
    for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
      FUN_180084300(uVar3,lVar2);
      uVar3 = uVar3 + 0x10;
    }
    param_1[1] = uVar3;
    local_40 = (ulonglong *)0x0;
    FUN_180084d60(&local_40);
  }
  return;
}



void Unwind_180084d20(undefined8 param_1,longlong param_2)

{
  FUN_180080a80(param_2 + 0x28);
  FUN_180084d60(param_2 + 0x48);
  return;
}



void FUN_180084d60(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;

  param_1 = (undefined8 *)*param_1;
  if ((param_1 != (undefined8 *)0x0) && (puVar2 = (undefined1 *)*param_1, puVar2 != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)param_1[1];
    if (puVar2 != puVar3) {
      do {
        FUN_18007ff50(puVar2 + 8,*puVar2);
        puVar2 = puVar2 + 0x10;
      } while (puVar2 != puVar3);
      puVar2 = (undefined1 *)*param_1;
    }
    uVar1 = param_1[2] - (longlong)puVar2;
    puVar3 = puVar2;
    if (0xfff < uVar1) {
      puVar3 = *(undefined1 **)(puVar2 + -8);
      if ((undefined1 *)0x1f < puVar2 + (-8 - (longlong)puVar3)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar1 = uVar1 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar3,uVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void Unwind_180084e70(void)

{
  Unwind_1801dd394();
}



ulonglong * FUN_180084e90(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;

  puVar1 = (ulonglong *)FUN_1801d61c8(0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar4 = param_1[1] - *param_1;
  if (uVar4 != 0) {
    if ((longlong)uVar4 < 0) {
      FUN_1800807e0();
    }
    if (uVar4 < 0x1000) {
      uVar3 = FUN_1801d61c8(uVar4);
    }
    else {
      lVar2 = FUN_1801d61c8(uVar4 + 0x27);
      uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar2;
    }
    *puVar1 = uVar3;
    puVar1[2] = uVar4 + uVar3;
    lVar2 = param_1[1] - *param_1;
    FUN_1802079d0(uVar3,*param_1,lVar2);
    puVar1[1] = lVar2 + uVar3;
  }
  *(char *)(puVar1 + 4) = (char)param_1[4];
  puVar1[3] = param_1[3];
  return puVar1;
}



void Unwind_180084fc0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_180084ff0(longlong *param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *pvVar13;
  ulonglong _Size;
  char local_103;
  char local_102;
  byte local_101;
  ulonglong local_100;
  ulonglong local_f8;
  int local_ec;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  uint local_58;
  longlong *local_50;
  undefined8 local_48;

  local_f8 = 0x90b7ac803a66634b;
  local_100 = 0xfd840575c0fe451a;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar12 = local_f8 ^ 0x38e312580a40a28f;
          uVar9 = local_f8 ^ local_100;
          local_100 = local_100 ^ 0x38e312580a40a28f;
          local_f8 = uVar12;
          if ((longlong)uVar9 < -0x129a6743ff52e292) break;
          if ((longlong)uVar9 < 0x631bae6ea6db2867) {
            if (uVar9 == 0xed6598bc00ad1d6e) {
              local_50 = param_1;
              plVar10 = (longlong *)FUN_1801d61c8(0x50);
              lVar11 = param_3[1];
              lVar6 = param_3[2];
              uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
              lVar7 = param_3[3];
              uVar3 = *(undefined4 *)((longlong)param_3 + 0x1c);
              plVar10[4] = *param_3;
              plVar10[5] = lVar11;
              *(int *)(plVar10 + 6) = (int)lVar6;
              *(undefined4 *)((longlong)plVar10 + 0x34) = uVar2;
              *(int *)(plVar10 + 7) = (int)lVar7;
              *(undefined4 *)((longlong)plVar10 + 0x3c) = uVar3;
              param_3[2] = local_d8;
              param_3[3] = local_e8;
              *(char *)param_3 = local_103;
              uVar2 = *(undefined4 *)(param_4 + 4);
              uVar3 = *(undefined4 *)(param_4 + 8);
              uVar4 = *(undefined4 *)(param_4 + 0xc);
              *(undefined4 *)(plVar10 + 8) = *(undefined4 *)param_4;
              *(undefined4 *)((longlong)plVar10 + 0x44) = uVar2;
              *(undefined4 *)(plVar10 + 9) = uVar3;
              *(undefined4 *)((longlong)plVar10 + 0x4c) = uVar4;
              *param_4 = local_103;
              param_4[8] = '\0';
              param_4[9] = '\0';
              param_4[10] = '\0';
              param_4[0xb] = '\0';
              param_4[0xc] = '\0';
              param_4[0xd] = '\0';
              param_4[0xe] = '\0';
              param_4[0xf] = '\0';
              *plVar10 = local_d0;
              plVar10[1] = local_d0;
              plVar10[2] = local_d0;
              *(char *)(plVar10 + 3) = local_103;
              *(char *)((longlong)plVar10 + 0x19) = local_103;
              local_48 = 0;
              FUN_180085660(&local_50);
              local_60 = local_68;
              local_58 = local_dc;
              local_c8 = FUN_1800857e0(param_1,&local_60,plVar10);
              local_f8 = 0xaa1c80e437c22d19;
              local_100 = 0x279d583ec7b14cf4;
              local_102 = '\x01';
            }
            else if (uVar9 == 0x5e5c9de174eab169) {
              local_a0 = local_b8;
              local_dc = local_e0;
              local_68 = local_c0;
              local_f8 = 0xa3c534e8311dddba;
              if (*(char *)(local_b8 + 0x19) != local_103) {
                local_f8 = 0x4d8310d295fac957;
              }
              local_100 = 0x2e98bebc3321e130;
            }
          }
          else if (uVar9 == 0x631bae6ea6db2867) {
            local_f8 = 0xf1b746f69499c47d;
            if (param_1[1] != 0x333333333333333) {
              local_f8 = 0xa8eb8f975fcf939a;
            }
            local_100 = 0x458e172b5f628ef4;
          }
          else if (uVar9 == 0x6d33a9f5fa982651) {
            local_e8 = 0xf;
            local_d8 = 0;
            local_103 = '\0';
            local_ec = 0;
            local_d0 = *param_1;
            local_c0 = *(longlong *)(local_d0 + 8);
            local_f8 = 0x601deadcf81b1a1e;
            if (*(char *)(local_c0 + 0x19) != '\0') {
              local_f8 = 0xd490d5c3714244ee;
            }
            local_100 = 0x8acc482205a8f587;
            local_e0 = 0;
            local_b8 = local_d0;
            local_88 = local_c0;
          }
        }
        if ((longlong)uVar9 < -0x4b1b87593885ab6b) break;
        if (uVar9 == 0xb4e478a6c77a5495) {
          local_98 = local_a8;
          uVar9 = *(ulonglong *)(local_a8 + 0x30);
          if (local_e8 < *(ulonglong *)(local_a8 + 0x38)) {
            pvVar13 = *(void **)(local_a8 + 0x20);
          }
          else {
            pvVar13 = (void *)(local_a8 + 0x20);
          }
          uVar12 = uVar9;
          if (local_80 < uVar9) {
            uVar12 = local_80;
          }
          iVar8 = memcmp(pvVar13,local_78,uVar12);
          local_101 = uVar9 < local_80;
          if (iVar8 != local_ec) {
            local_101 = iVar8 < local_ec;
          }
          lVar11 = 0x10;
          if ((bool)local_101 == false) {
            lVar11 = local_d8;
            local_b0 = local_a8;
          }
          local_a8 = *(longlong *)(local_a8 + lVar11);
          local_f8 = 0x11d4a646eb23bedf;
          if (*(char *)(local_a8 + 0x19) != local_103) {
            local_f8 = 0x74b65f0e8ef376b0;
          }
          local_100 = 0xa530dee02c59ea4a;
          local_70 = local_b0;
        }
        else if (uVar9 == 0xd18681eea2aa9cfa) {
          local_e0 = local_101 ^ 1;
          local_f8 = 0x5aee6d67d9599789;
          local_100 = 0x4b2f086adb326e0;
          local_b8 = local_70;
          local_c0 = local_98;
        }
        else if (uVar9 == 0xead1a2fefdb3ef99) {
          local_80 = param_3[2];
          local_78 = param_3;
          if (local_e8 < (ulonglong)param_3[3]) {
            local_78 = (longlong *)*param_3;
          }
          local_f8 = 0x4438fdf3855b07a4;
          local_100 = 0xf0dc855542215331;
          local_b0 = local_d0;
          local_a8 = local_88;
        }
      }
      if (uVar9 != 0x8d5d8a54023c3c8a) break;
      uVar9 = *(ulonglong *)(local_a0 + 0x30);
      if (local_e8 < *(ulonglong *)(local_a0 + 0x38)) {
        pvVar13 = *(void **)(local_a0 + 0x20);
      }
      else {
        pvVar13 = (void *)(local_a0 + 0x20);
      }
      uVar12 = param_3[2];
      plVar10 = param_3;
      if (local_e8 < (ulonglong)param_3[3]) {
        plVar10 = (longlong *)*param_3;
      }
      _Size = uVar12;
      if (uVar9 < uVar12) {
        _Size = uVar9;
      }
      iVar8 = memcmp(plVar10,pvVar13,_Size);
      bVar5 = uVar9 <= uVar12;
      if (iVar8 != local_ec) {
        bVar5 = -1 < iVar8;
      }
      local_f8 = 0xc3fd1e6ff5153d27;
      if (!bVar5) {
        local_f8 = 0x2d6768dba3bd74ad;
      }
      local_100 = 0x4e7cc6b505665cca;
      local_c8 = local_a0;
      local_102 = local_103;
    }
    if (uVar9 == 0x8d81d8daf07361ed) break;
    if (uVar9 == 0xb43951ddcbfb4a89) {
      FUN_180086cc0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_2 = local_c8;
  *(char *)(param_2 + 1) = local_102;
  return;
}



void FUN_180085660(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;

  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18007ff50(lVar1 + 0x48,*(undefined1 *)(lVar1 + 0x40));
    uVar2 = *(ulonglong *)(lVar1 + 0x38);
    if (0xf < uVar2) {
      lVar3 = *(longlong *)(lVar1 + 0x20);
      uVar5 = uVar2 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar4) - 8U) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar5 = uVar2 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar4,uVar5);
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0xf;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      thunk_FUN_1801f42e0(*(longlong *)(param_1 + 8),0x50);
      return;
    }
  }
  return;
}



void Unwind_1800857c0(void)

{
  Unwind_1801dd394();
}



void FUN_1800857e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char local_1fa;
  undefined1 local_1f9;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;

  local_1f0 = 0x736a52a05a380b40;
  local_1f8 = 0xf0f5e344cb6d04bd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar1 = local_1f0 ^ 0xfac5056dba96abeb;
                uVar2 = local_1f0 ^ local_1f8;
                local_1f8 = local_1f8 ^ 0xfac5056dba96abeb;
                local_1f0 = uVar1;
                if (-0x252187e2377d418c < (longlong)uVar2) break;
                if ((longlong)uVar2 < -0x402f4ed3e70e62a7) {
                  if ((longlong)uVar2 < -0x58e85309ec1609ed) {
                    if ((longlong)uVar2 < -0x7b408f2f78cbee09) {
                      if (uVar2 == 0x839fb1e491550ffd) {
                        local_1f9 = 1;
                        local_1fa = '\0';
                        param_1[1] = param_1[1] + 1;
                        local_1d0 = (longlong *)*param_1;
                        local_170 = (longlong *)*param_2;
                        local_f0 = param_3 + 1;
                        param_3[1] = (longlong)local_170;
                        local_1f0 = 0x3a21f6a9397f10c;
                        if (local_170 == local_1d0) {
                          local_1f0 = 0x4f1fb63eb71ff75b;
                        }
                        local_1f8 = 0x7f8e5477602649bb;
                      }
                      else if (uVar2 == 0x842f3a93472f0f08) {
                        *local_1d0 = (longlong)param_3;
                        local_1f0 = 0x56f15b4852feca9a;
                        local_1f8 = 0x98810a3e7bf448e1;
                      }
                      else if (uVar2 == 0x847fca7a70584e2e) {
                        *local_170 = (longlong)param_3;
                        local_1f0 = 0x379b9f838460ee04;
                        if (*param_2 == *local_1d0) {
                          local_1f0 = 0x7dc4f466ea456377;
                        }
                        local_1f8 = 0xf9ebcef5ad6a6c7f;
                      }
                    }
                    else if (uVar2 == 0x84bf70d0873411f7) {
                      *(longlong **)(local_58 + 8) = local_1b8;
                      local_1f0 = 0xbb861d9fc79cc9e9;
                      local_1f8 = 0xf7f31183608e2372;
                    }
                    else if (uVar2 == 0x8954b7db2d0b0005) {
                      local_160 = (longlong *)local_1d0[1];
                      local_1f0 = 0x1ccd1fcf63d3274d;
                      local_1f8 = 0x3d4855ed7d4b8b24;
                    }
                    else if (uVar2 == 0x8c702050043a4922) {
                      *local_a8 = local_1d8;
                      local_1f0 = 0x105e44f2ec3bdda;
                      local_1f8 = 0x347194d7f42f9d97;
                    }
                  }
                  else if ((longlong)uVar2 < -0x454769697ef4f97c) {
                    if (uVar2 == 0xa717acf613e9f613) {
                      *local_1e0 = (longlong)local_1e8;
                      *local_1a8 = (longlong)local_1e0;
                      local_1f0 = 0x15d6f94e2c3e878c;
                      local_1f8 = 0xcf088153e4bc39f9;
                      local_118 = local_1e0;
                      local_110 = local_1e8;
                    }
                    else if (uVar2 == 0xb68ea6bc5971bea4) {
                      local_108 = local_148;
                      local_1d8[1] = (longlong)local_148;
                      local_78 = (undefined8 *)(*param_1 + 8);
                      local_1f0 = 0x849317a24fce772d;
                      if (local_1e8 == *(longlong **)(*param_1 + 8)) {
                        local_1f0 = 0x87e4fe222c6436bf;
                      }
                      local_1f8 = 0x4eb8011705ccd64a;
                    }
                    else if (uVar2 == 0xb86d710502d27856) {
                      *local_180 = local_1e0;
                      local_1f0 = 0xc50edd0872f60d7a;
                      local_1f8 = 0x621971fe611ffb69;
                    }
                  }
                  else if (uVar2 == 0xbab89696810b0684) {
                    *local_d8 = local_1c0;
                    local_1f0 = 0xde9495ec1d8e3465;
                    local_1f8 = 0x6099420327a0bb3d;
                  }
                  else if (uVar2 == 0xbe0dd7ef3a2e8f58) {
                    *local_1c0 = local_1c8;
                    *local_e0 = local_1c0;
                    local_1f0 = 0xbbc92946f9d5db48;
                    local_1f8 = 0x887047ae018fbea2;
                    local_1a0 = local_50;
                  }
                  else if (uVar2 == 0xbeb9f7c179b4b8d8) {
                    *local_60 = local_1b8;
                    *local_88 = local_1b0;
                    local_1f0 = 0x1f30b9f0bf40eb9b;
                    local_1f8 = 0x2c89d718471a8e71;
                    local_1a0 = local_48;
                  }
                }
                else if ((longlong)uVar2 < -0x327f8ac8ca9cb199) {
                  if ((longlong)uVar2 < -0x36a300cad6571f0b) {
                    if (uVar2 == 0xbfd0b12c18f19d59) {
                      *local_d0 = local_1b0;
                      local_1f0 = 0x5b87f63355e6dfdb;
                      local_1f8 = 0xe53e01f22c526703;
                    }
                    else if (uVar2 == 0xc2b61e373406b8db) {
                      local_1f0 = 0xf4012dfd77992a6c;
                      if (local_1e8 == (longlong *)*local_180) {
                        local_1f0 = 0xbc7e29576a3c689d;
                      }
                      local_1f8 = 0x413585268ee10cb;
                    }
                    else if (uVar2 == 0xc57b79aacca37213) {
                      local_e0 = (undefined8 *)(local_1c8 + 8);
                      local_190 = *(longlong **)(local_1c8 + 8);
                      local_1c0[1] = (longlong)local_190;
                      local_d8 = (undefined8 *)(*param_1 + 8);
                      local_1f0 = 0xca3b40da70af3345;
                      if (local_1c8 == *(longlong *)(*param_1 + 8)) {
                        local_1f0 = 0x41651dfe25dbbddb;
                      }
                      local_1f8 = 0xfbdd8b68a4d0bb5f;
                    }
                  }
                  else if (uVar2 == 0xc95cff3529a8e0f5) {
                    *local_78 = local_1d8;
                    local_1f0 = 0x7c1091dcdafcf788;
                    local_1f8 = 0x4964e1440010d7c5;
                  }
                  else if (uVar2 == 0xca2b16b54a02a167) {
                    local_a8 = local_108 + 2;
                    local_1f0 = 0xe92729d54bd8b009;
                    if (local_1e8 == (longlong *)local_108[2]) {
                      local_1f0 = 0x70ad9c713c07af16;
                    }
                    local_1f8 = 0xfcddbc21383de634;
                  }
                  else if (uVar2 == 0xcc481040628031a7) {
                    local_98 = (undefined1 *)(local_188[2] + 0x18);
                    local_1f0 = 0x551c99bb7aaaab91;
                    if (*(char *)(local_188[2] + 0x18) == local_1fa) {
                      local_1f0 = 0xced5715a2d9176e0;
                    }
                    local_1f8 = 0x1fba2a59126bfca7;
                  }
                }
                else if ((longlong)uVar2 < -0x2f43a6780f0eb3e6) {
                  if (uVar2 == 0xcd80753735634e67) {
                    *local_e8 = (longlong)param_3;
                    local_1f0 = 0xc3fbd2945c6a6fac;
                    local_1f8 = 0xd8b83e27560edd7;
                  }
                  else if (uVar2 == 0xce705176290a827b) {
                    local_128 = local_f0;
                    local_130 = (longlong *)*local_f0;
                    local_138 = local_130 + 3;
                    local_1f0 = 0xf092687bb6bd91b2;
                    if ((char)local_130[3] == local_1fa) {
                      local_1f0 = 0x36f79ca882025f43;
                    }
                    local_1f8 = 0x79c6dfa09bb691b7;
                    local_120 = param_3;
                  }
                  else if (uVar2 == 0xd0a54404a67607c2) {
                    *local_80 = local_1b0;
                    local_1f0 = 0x973975146150203e;
                    local_1f8 = 0x298082d518e498e6;
                  }
                }
                else if ((longlong)uVar2 < -0x28f5e42f2f33f2ec) {
                  if (uVar2 == 0xd0bc5987f0f14c1a) {
                    local_b8 = local_1d8 + 2;
                    local_b0 = local_1d8[2];
                    *local_1e8 = local_b0;
                    local_1f0 = 0xf4aa917091831328;
                    if (*(char *)(local_b0 + 0x19) == local_1fa) {
                      local_1f0 = 0xb4faa712ee434649;
                    }
                    local_1f8 = 0x422437ccc8f2ad8c;
                    local_148 = local_188;
                  }
                  else if (uVar2 == 0xd16f5b033ffa8a47) {
                    *(undefined1 *)local_f8 = local_1f9;
                    *local_98 = local_1f9;
                    *(char *)(*(longlong *)(*local_198 + 8) + 0x18) = local_1fa;
                    local_1a0 = *(longlong **)(*local_198 + 8);
                    local_1f0 = 0x9c0354fef0a92031;
                    local_1f8 = 0xafba3a1608f345db;
                  }
                }
                else if (uVar2 == 0xd70a1bd0d0cc0d14) {
                  *(undefined1 *)local_f8 = local_1f9;
                  *(undefined1 *)local_a0 = local_1f9;
                  *(char *)(*(longlong *)(*local_198 + 8) + 0x18) = local_1fa;
                  local_1a0 = *(longlong **)(*local_198 + 8);
                  local_1f0 = 0x10af3a75ed79f77c;
                  local_1f8 = 0x2316549d15239296;
                }
                else if (uVar2 == 0xda6eb4ab0f00e639) {
                  *local_70 = local_1e0;
                  local_1f0 = 0x2b7fc5f7fc96c4a;
                  local_1f8 = 0xa5a050a96c209a59;
                }
              }
              if ((longlong)uVar2 < 0x31e6cbb2d47f881a) break;
              if ((longlong)uVar2 < 0x4aa6b3e268c15736) {
                if ((longlong)uVar2 < 0x35e78b1ea70dc725) {
                  if (uVar2 == 0x31e6cbb2d47f881a) {
                    local_1f0 = 0x755d9e4f2d3ebd03;
                    if (local_1c8 == *local_190) {
                      local_1f0 = 0x4b8b8690cd26d233;
                    }
                    local_1f8 = 0x6f40125b04fd9f75;
                  }
                  else if (uVar2 == 0x33b96ee8f85a65ea) {
                    local_128 = local_1a0 + 1;
                    local_130 = (longlong *)local_1a0[1];
                    local_138 = local_130 + 3;
                    local_1f0 = 0xeee31fcfc6ca0888;
                    if ((char)local_130[3] == local_1fa) {
                      local_1f0 = 0x2886eb1cf275c679;
                    }
                    local_1f8 = 0x67b7a814ebc1088d;
                    local_120 = local_1a0;
                  }
                  else if (uVar2 == 0x35747098daec204d) {
                    *local_b8 = (longlong)local_1e8;
                    local_158 = local_1d8;
                    *local_1a8 = (longlong)local_1d8;
                    local_1f0 = 0x40d09de6f95cdbd4;
                    local_1f8 = 0x4272c49b2a5c0fe2;
                    local_150 = local_1e8;
                  }
                }
                else if (uVar2 == 0x35e78b1ea70dc725) {
                  *local_168 = local_1b0;
                  local_1f0 = 0x2f5d0694d96ebabd;
                  local_1f8 = 0x91e4f155a0da0265;
                }
                else if (uVar2 == 0x396b495c50ffb29d) {
                  local_a0 = local_68 + 3;
                  local_1f0 = 0x5b5366157aedc63c;
                  if ((char)local_68[3] == local_1fa) {
                    local_1f0 = 0xa491080ab80b5c1b;
                  }
                  local_1f8 = 0x739b13da68c7510f;
                }
                else if (uVar2 == 0x4405403dda2de4b8) {
                  *(longlong *)(local_c8 + 8) = local_1c8;
                  local_1f0 = 0x77ba55d2fc42ce64;
                  local_1f8 = 0xb2c12c7830e1bc77;
                }
              }
              else if ((longlong)uVar2 < 0x6bc870a0738c3e13) {
                if (uVar2 == 0x4aa6b3e268c15736) {
                  local_90 = local_1e8 + 2;
                  local_1e0 = (longlong *)local_1e8[2];
                  local_1f0 = 0x48cda975186b4642;
                  if (local_100 == local_1e0) {
                    local_1f0 = 0x6b8528a00dd29b0c;
                  }
                  local_1f8 = 0x9213d168d0e9f837;
                  local_118 = local_1e8;
                  local_110 = local_100;
                }
                else if (uVar2 == 0x4c750c1ca712ea9b) {
                  local_88 = local_1b8 + 1;
                  local_168 = (longlong *)local_1b8[1];
                  *(longlong **)(local_1b0 + 8) = local_168;
                  local_80 = (longlong *)(*param_1 + 8);
                  local_1f0 = 0xbefaba588b0474e2;
                  if (local_1b8 == *(longlong **)(*param_1 + 8)) {
                    local_1f0 = 0x1260f9cdd96844d0;
                  }
                  local_1f8 = 0xc2c5bdc97f1e4312;
                }
                else if (uVar2 == 0x4f31430819b4cef4) {
                  local_100 = local_120;
                  local_198 = local_128;
                  local_1e8 = local_130;
                  local_f8 = local_138;
                  local_1a8 = local_130 + 1;
                  local_188 = (undefined8 *)local_130[1];
                  local_68 = (longlong *)*local_188;
                  local_1f0 = 0xdc45ad8ce8430c20;
                  if (local_130 == local_68) {
                    local_1f0 = 0x2966f490da3c8f1a;
                  }
                  local_1f8 = 0xe52ee4d0b8bcbebd;
                }
              }
              else if (uVar2 == 0x6bc870a0738c3e13) {
                *(longlong **)(local_c0 + 8) = local_1e8;
                local_140 = (undefined8 *)*local_1a8;
                local_1f0 = 0x83a50daba156be2b;
                local_1f8 = 0x70e99471e6d198d7;
              }
              else if (uVar2 == 0x7c2c4b1df3b1b8b7) {
                local_1f0 = 0xb268435314ae143f;
                if ((int)param_2[1] == 0) {
                  local_1f0 = 0xd59aaa9a1e93540d;
                }
                local_1f8 = 0x3617892964f65a11;
              }
              else if (uVar2 == 0x7c3f0791f41a37f0) {
                local_d0 = local_168 + 2;
                local_1f0 = 0xb3c4e96b668f95e0;
                if (local_1b8 == (longlong *)local_168[2]) {
                  local_1f0 = 0x39f3d359d973cf9c;
                }
                local_1f8 = 0x86236275c18252c5;
              }
            }
            if (0x2a2597dd300d435 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0xcb36625b878d904) {
              if (uVar2 == 0xdade781dc882be75) {
                local_48 = local_110;
                *(undefined1 *)(local_118 + 3) = local_1f9;
                *(char *)(*(longlong *)(local_110[1] + 8) + 0x18) = local_1fa;
                local_1b8 = *(longlong **)(local_110[1] + 8);
                local_1b0 = *local_1b8;
                local_60 = (undefined8 *)(local_1b0 + 0x10);
                local_58 = *(longlong *)(local_1b0 + 0x10);
                *local_1b8 = local_58;
                local_1f0 = 0xea91a560b4c82c92;
                if (*(char *)(local_58 + 0x19) == local_1fa) {
                  local_1f0 = 0x225bd9ac94eed7fe;
                }
                local_1f8 = 0xa6e4a97c13dac609;
              }
              else if (uVar2 == 0xe38d23b37a650e1c) {
                local_170[2] = (longlong)param_3;
                local_e8 = local_1d0 + 2;
                local_1f0 = 0x2482a136dbf7ee4b;
                if (*param_2 == local_1d0[2]) {
                  local_1f0 = 0x27728577c79e2257;
                }
                local_1f8 = 0xeaf2f040f2fd6c30;
              }
              else if (uVar2 == 0xf01275af1f773aa7) {
                local_180[2] = local_1e0;
                local_1f0 = 0x4b04b2c2708d3dd5;
                local_1f8 = 0xec131e346364cbc6;
              }
            }
            else if (uVar2 == 0xf34c99da478726fc) {
              local_180 = local_140;
              local_1e0[1] = (longlong)local_140;
              local_70 = (undefined8 *)(*param_1 + 8);
              local_1f0 = 0x726c6b9631cf233a;
              if (local_1e8 == *(longlong **)(*param_1 + 8)) {
                local_1f0 = 0x6ab4c10a0ac97dd8;
              }
              local_1f8 = 0xb0da75a105c99be1;
            }
            else if (uVar2 == 0xf6de90de26b1ebc5) {
              *(longlong **)(local_b0 + 8) = local_1e8;
              local_148 = (undefined8 *)*local_1a8;
              local_1f0 = 0x5d4bd01a272d6f2a;
              local_1f8 = 0xebc576a67e5cd18e;
            }
            else if (uVar2 == 0xf996f9c8dd3b633b) {
              local_c0 = *local_1e0;
              *local_90 = local_c0;
              local_1f0 = 0x3c2f290175ed9dd3;
              if (*(char *)(local_c0 + 0x19) == local_1fa) {
                local_1f0 = 0xa4abc07b41e6853c;
              }
              local_1f8 = 0xcf63b0db326abb2f;
              local_140 = local_188;
            }
          }
          if (0x21854a221e98ac68 < (longlong)uVar2) break;
          if (uVar2 == 0x2a2597dd300d436) {
            local_50 = local_150;
            *(undefined1 *)(local_158 + 3) = local_1f9;
            *(char *)(*(longlong *)(local_150[1] + 8) + 0x18) = local_1fa;
            local_1c8 = *(longlong *)(local_150[1] + 8);
            local_1c0 = *(longlong **)(local_1c8 + 0x10);
            local_c8 = *local_1c0;
            *(longlong *)(local_1c8 + 0x10) = local_c8;
            local_1f0 = 0xe998f28203d232ed;
            if (*(char *)(local_c8 + 0x19) == local_1fa) {
              local_1f0 = 0x68e6cb15155ca446;
            }
            local_1f8 = 0x2ce38b28cf7140fe;
          }
          else if (uVar2 == 0x15fa95f473e5563d) {
            *local_108 = local_1d8;
            local_1f0 = 0xf3cc8b8012f948fd;
            local_1f8 = 0xc6b8fb18c81568b0;
          }
          else if (uVar2 == 0x1a1d8c1429c32276) {
            local_190[2] = (longlong)local_1c0;
            local_1f0 = 0xf1a5dddf84a7da9d;
            local_1f8 = 0x4fa80a30be8955c5;
          }
        }
        if ((longlong)uVar2 < 0x28c875cf122a9733) break;
        if (uVar2 == 0x28c875cf122a9733) {
          local_1d8 = (longlong *)*local_1e8;
          local_1f0 = 0xb74b1cd6114a5423;
          if (local_100 == local_1d8) {
            local_1f0 = 0x65551c2c32bbcc0f;
          }
          local_1f8 = 0xb5e945abc24a8015;
          local_158 = local_1e8;
          local_150 = local_100;
        }
        else if (uVar2 == 0x3091e249d739bee0) {
          *local_1d0 = (longlong)param_3;
          local_1d0[1] = (longlong)param_3;
          local_1d0[2] = (longlong)param_3;
          local_1f0 = 0xf190ef2170b71d6d;
          local_1f8 = 0xd015a5036e2fb104;
          local_160 = param_3;
        }
      }
      if (uVar2 != 0x24cb94cbc9db4d46) break;
      *local_190 = (longlong)local_1c0;
      local_1f0 = 0xc186e841d06b808d;
      local_1f8 = 0x7f8b3faeea450fd5;
    }
  } while (uVar2 != 0x21854a221e98ac69);
  *(undefined1 *)(local_160 + 3) = local_1f9;
  return;
}



void FUN_180086cc0(void)

{
  FUN_1800b8f52(&DAT_1802a2168,&DAT_180272019,0x1b,0x11,&DAT_1802a217c);
  FUN_1801d7524(&DAT_1802a2168);
}



void FUN_180086d00(ulonglong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 *local_60;
  undefined4 *local_58;
  ulonglong *local_50;
  longlong local_48;
  ulonglong *local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_48 = 0x27;
  if (param_2 != 0) {
    if (0xfffffffffffffff < param_2) {
      FUN_1800807e0();
    }
    if (param_2 < 0x100) {
      puVar2 = (undefined4 *)FUN_1801d61c8(param_2 * 0x10);
    }
    else {
      if (0xffffffffffffffd < param_2) {
        std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
      }
      lVar1 = FUN_1801d61c8(param_2 * 0x10 + 0x27);
      puVar2 = (undefined4 *)(local_48 + lVar1 & 0xffffffffffffffe0);
      *(longlong *)(puVar2 + -2) = lVar1;
    }
    *param_1 = (ulonglong)puVar2;
    param_1[1] = (ulonglong)puVar2;
    param_1[2] = (ulonglong)(puVar2 + param_2 * 4);
    param_4 = (undefined8 *)*param_4;
    param_3 = (undefined8 *)*param_3;
    local_60 = puVar2;
    local_50 = param_1;
    if (param_3 != param_4) {
      local_40 = param_1;
      do {
        if (param_3[2] == 0) {
          local_78 = *param_3;
          uStack_70 = param_3[1];
          *(undefined1 *)param_3 = 0;
          param_3[1] = 0;
        }
        else {
          local_58 = puVar2;
          FUN_180084300(&local_78);
        }
        *puVar2 = (undefined4)local_78;
        puVar2[1] = local_78._4_4_;
        puVar2[2] = (undefined4)uStack_70;
        puVar2[3] = uStack_70._4_4_;
        puVar2 = puVar2 + 4;
        param_3 = param_3 + 3;
      } while (param_3 != param_4);
    }
    param_1[1] = (ulonglong)puVar2;
    local_40 = (ulonglong *)0x0;
    local_58 = puVar2;
    FUN_180084d60(&local_40);
  }
  return;
}



void Unwind_180086ea0(undefined8 param_1,longlong param_2)

{
  FUN_180080a80(param_2 + 0x38);
  FUN_180084d60(param_2 + 0x58);
  return;
}



char * FUN_180086ee0(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_c0 [56];
  undefined1 local_88 [56];
  undefined1 local_50 [36];
  undefined4 local_2c;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_2c = 0xd6;
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 < '\x01') {
    if (cVar1 == '\0') {
      FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
      FUN_180057290(local_50,&DAT_1802a2258);
      FUN_1800886d0(local_c0,local_2c,local_50,pcVar2);
      FUN_1801dd110(local_c0,&DAT_180253660);
    }
  }
  else {
    if (cVar1 == '\x01') {
      return (char *)(param_1[1] + 0x40);
    }
    if (cVar1 == '\x02') {
      return (char *)param_1[2];
    }
  }
  if (param_1[3] == 0) {
    return pcVar2;
  }
  FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
  FUN_180057290(local_50,&DAT_1802a2258);
  FUN_1800886d0(local_88,local_2c,local_50,pcVar2);
  FUN_1801dd110(local_88,&DAT_180253660);
}



void Unwind_180087030(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_180087060(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



undefined8 * FUN_180087090(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_c8 [56];
  undefined1 local_90 [56];
  undefined8 local_58 [4];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_38 = 0xf;
  if (*param_1 != '\x01') {
    local_58[0] = FUN_180081b20(param_1);
    FUN_1800b8f52(&DAT_1802a2270,&DAT_180272281,0x16,0x19,&DAT_1802a228c);
    FUN_180088cc0(local_90,&DAT_1802a2270,local_58);
    FUN_180083d90(local_c8,0x132,local_90,param_1);
    FUN_1801dd110(local_c8,&DAT_180253620);
  }
  lVar5 = FUN_180088e60(*(undefined8 *)(param_1 + 8),param_3);
  cVar1 = *param_1;
  local_30 = param_2;
  if (cVar1 < '\x02') {
    if (cVar1 != '\x01') {
LAB_180087200:
      FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
      FUN_180057290(local_58,&DAT_1802a2258);
      FUN_1800886d0(local_90,0xd6,local_58,param_1);
      FUN_1801dd110(local_90,&DAT_180253660);
    }
    if (lVar5 != **(longlong **)(param_1 + 8)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = local_38;
      FUN_180087f60(lVar5 + 0x40,param_2);
      return local_30;
    }
  }
  else if ((cVar1 != '\x02') || (*(longlong *)(*(longlong *)(param_1 + 8) + 8) != 0)) goto LAB_180087200;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[3];
  param_2[2] = param_4[2];
  param_2[3] = uVar4;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_4[2] = 0;
  param_4[3] = local_38;
  *(undefined1 *)param_4 = 0;
  return param_2;
}



void Unwind_180087270(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 200));
  return;
}



void Unwind_1800872a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_1800872d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



undefined8 * FUN_180087300(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_c8 [56];
  undefined1 local_90 [56];
  undefined8 local_58 [4];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_38 = 0xf;
  if (*param_1 != '\x01') {
    local_58[0] = FUN_180081b20(param_1);
    FUN_1800b8f52(&DAT_1802a2270,&DAT_180272281,0x16,0x19,&DAT_1802a228c);
    FUN_180088cc0(local_90,&DAT_1802a2270,local_58);
    FUN_180083d90(local_c8,0x132,local_90,param_1);
    FUN_1801dd110(local_c8,&DAT_180253620);
  }
  lVar5 = FUN_180089270(*(undefined8 *)(param_1 + 8),param_3);
  cVar1 = *param_1;
  local_30 = param_2;
  if (cVar1 < '\x02') {
    if (cVar1 != '\x01') {
LAB_180087470:
      FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
      FUN_180057290(local_58,&DAT_1802a2258);
      FUN_1800886d0(local_90,0xd6,local_58,param_1);
      FUN_1801dd110(local_90,&DAT_180253660);
    }
    if (lVar5 != **(longlong **)(param_1 + 8)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = local_38;
      FUN_180087f60(lVar5 + 0x40,param_2);
      return local_30;
    }
  }
  else if ((cVar1 != '\x02') || (*(longlong *)(*(longlong *)(param_1 + 8) + 8) != 0)) goto LAB_180087470;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[3];
  param_2[2] = param_4[2];
  param_2[3] = uVar4;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_4[2] = 0;
  param_4[3] = local_38;
  *(undefined1 *)param_4 = 0;
  return param_2;
}



void Unwind_1800874e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 200));
  return;
}



void Unwind_180087510(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_180087540(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



void FUN_180087570(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_f9;
  ulonglong local_f8;
  ulonglong local_f0;
  uint local_e4;
  uintptr_t local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong *local_50;
  longlong local_48;

  local_f0 = 0x23e04319b4867811;
  local_f8 = 0x4590db08f5d5e151;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_f0 ^ 0x84843db32c2cc154;
            uVar1 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0x84843db32c2cc154;
            local_f0 = uVar2;
            if ((longlong)uVar1 < 0x149ba6fe43e8bcba) break;
            if ((longlong)uVar1 < 0x6670981141539940) {
              if ((longlong)uVar1 < 0x231079c30ba314d9) {
                if (uVar1 == 0x149ba6fe43e8bcba) {
                  local_88 = *param_1;
                  local_90 = local_98 + local_b8;
                  local_f0 = 0x5ba237a5fc05cf1b;
                  if (local_d0 < local_90) {
                    local_f0 = 0xb0658582743ec92e;
                  }
                  local_f8 = 0xbb9d68ba89745b2f;
                  local_68 = local_88;
                }
                else if (uVar1 == 0x15aa590b5ef6877f) {
                  param_1[6] = local_e0;
                  *local_70 = local_d8;
                  *(undefined1 *)local_a8 = local_f9;
                  local_50 = (ulonglong *)(param_1 + 3);
                  local_98 = param_1[3];
                  local_f0 = 0x542328421a510c9c;
                  if (local_d8 < local_98) {
                    local_f0 = 0x29dc484e4a7e307f;
                  }
                  local_f8 = 0x3d47eeb009968cc5;
                }
              }
              else if (uVar1 == 0x24ce969b99a560d7) {
                local_90 = local_98 + local_c8;
                local_f0 = 0xd575ffa73e258920;
                local_f8 = 0x354aa0b84b541d14;
                local_88 = local_58;
              }
              else if (uVar1 == 0x231079c30ba314d9) goto LAB_180087b39;
            }
            else if (uVar1 == 0x6670981141539940) {
              local_d8 = 0xf;
              local_b0 = 0x20;
              local_e0 = 0;
              local_b8 = 1;
              local_c0 = -8;
              local_c8 = 0x28;
              local_f9 = 0;
              local_d0 = 0xfff;
              local_e4 = 0;
              local_a8 = param_1 + 4;
              local_70 = (ulonglong *)(param_1 + 7);
              local_a0 = param_1[7];
              local_f0 = 0x23892a7728b224eb;
              if (0xf < local_a0) {
                local_f0 = 0x4a0a4d5f25126993;
              }
              local_f8 = 0x3623737c7644a394;
            }
            else if (uVar1 == 0x7c293e235356ca07) {
              local_78 = *local_a8;
              local_80 = local_a0 + local_b8;
              local_f0 = 0xff07f4b7b08f35f7;
              if (local_d0 < local_80) {
                local_f0 = 0xd5d4c85bbf785557;
              }
              local_f8 = 0x5039aafeaf06e49;
              local_60 = local_78;
            }
            else if (uVar1 == 0x6964c6f213c78059) {
              param_1[2] = local_e0;
              *local_50 = local_d8;
              *(undefined1 *)param_1 = local_f9;
              return;
            }
          }
          if (-0x5fb91e7a580a443 < (longlong)uVar1) break;
          if (uVar1 == 0xb9d635d213583db7) {
            local_80 = local_a0 + local_c8;
            local_f0 = 0x1895e90985166f23;
            local_f8 = 0xe2918711df69349d;
            local_78 = local_48;
          }
          else if (uVar1 == 0xd0d752f455883b1e) {
            local_48 = *(longlong *)(local_60 + -8);
            local_f0 = 0x8c0550a6f74edb55;
            if ((ulonglong)((local_60 + local_c0) - local_48) < local_b0) {
              local_f0 = 0x37aac660cc6dbe37;
            }
            local_f8 = 0x8e7cf3b2df358380;
          }
          else if (uVar1 == 0xe03f5f1f75719434) {
            thunk_FUN_1801f42e0(local_88,local_90);
            local_f0 = 0x231dfc0a1c8d04c9;
            local_f8 = 0x4a793af80f4a8490;
          }
        }
        if (uVar1 != 0xfa046e185a7f5bbe) break;
        thunk_FUN_1801f42e0(local_78,local_80);
        local_f0 = 0x3c85cb09455502a7;
        local_f8 = 0x292f92021ba385d8;
      }
      if (uVar1 != 0xbf8ed38fd4a9201) break;
      local_58 = *(longlong *)(local_68 + -8);
      local_f0 = 0x5857b9c507354529;
      if ((ulonglong)((local_68 + local_c0) - local_58) < local_b0) {
        local_f0 = 0x5f89569d95333127;
      }
      local_f8 = 0x7b47c0060c9651f0;
    }
  } while (uVar1 != 0x279a314287b58d5);
LAB_180087b39:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_e4,local_e0);
}



undefined8 * FUN_180087b90(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong uVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar5 = 0xf;
  if (0xf < sVar3 + sVar2) {
    FUN_180002240(param_1,sVar3 + sVar2);
    param_1[2] = 0;
    uVar5 = param_1[3];
  }
  sVar2 = strlen(param_2);
  if (uVar5 < sVar2) {
    FUN_180066dd0(param_1,sVar2);
  }
  else {
    param_1[2] = sVar2;
    puVar4 = param_1;
    if (0xf < uVar5) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar4,param_2,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2) = 0;
  }
  _Str = (char *)*param_3;
  sVar2 = strlen(_Str);
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < sVar2) {
    FUN_180066dd0(param_1,sVar2,param_1,_Str,sVar2);
  }
  else {
    param_1[2] = sVar2 + lVar1;
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar4,_Str,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2 + lVar1) = 0;
  }
  return param_1;
}



void Unwind_180087d00(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_180087d30(undefined8 param_1,char *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 local_88 [56];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  cVar1 = *param_2;
  if (cVar1 < '\x06') {
    if (cVar1 != '\x05') {
      if (cVar1 != '\x04') {
LAB_180087d7f:
        local_30 = FUN_180081b20(param_2);
        FUN_1800b8f52(&DAT_1802a21c0,&DAT_18027211a,0x1a,0x1d,&DAT_1802a21e0);
        FUN_180081980(local_50,&DAT_1802a21c0,&local_30);
        FUN_180083d90(local_88,0x12e,local_50,param_2);
        FUN_1801dd110(local_88,&DAT_180253620);
      }
      uVar2 = (uint)(byte)param_2[8];
      goto LAB_180087d70;
    }
  }
  else if (cVar1 != '\x06') {
    if (cVar1 != '\a') goto LAB_180087d7f;
    uVar2 = (uint)*(double *)(param_2 + 8);
    goto LAB_180087d70;
  }
  uVar2 = *(uint *)(param_2 + 8);
LAB_180087d70:
  *param_3 = uVar2;
  return;
}



void Unwind_180087e00(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



void FUN_180087e30(undefined8 param_1,char *param_2,float *param_3)

{
  char cVar1;
  ulonglong uVar2;
  float fVar3;
  undefined1 local_88 [56];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  cVar1 = *param_2;
  if (cVar1 < '\x06') {
    if (cVar1 == '\x05') {
      fVar3 = (float)*(longlong *)(param_2 + 8);
    }
    else {
      if (cVar1 != '\x04') {
LAB_180087eb3:
        local_30 = FUN_180081b20(param_2);
        FUN_1800b8f52(&DAT_1802a21c0,&DAT_18027211a,0x1a,0x1d,&DAT_1802a21e0);
        FUN_180081980(local_50,&DAT_1802a21c0,&local_30);
        FUN_180083d90(local_88,0x12e,local_50,param_2);
        FUN_1801dd110(local_88,&DAT_180253620);
      }
      fVar3 = (float)(int)param_2[8];
    }
  }
  else if (cVar1 == '\x06') {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((longlong)uVar2 < 0) {
      fVar3 = (float)uVar2;
    }
    else {
      fVar3 = (float)(longlong)uVar2;
    }
  }
  else {
    if (cVar1 != '\a') goto LAB_180087eb3;
    fVar3 = (float)*(double *)(param_2 + 8);
  }
  *param_3 = fVar3;
  return;
}



void Unwind_180087f30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



void FUN_180087f60(char *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_90 [56];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_30 = 0xf;
  if (*param_1 != '\x03') {
    local_38 = FUN_180081b20();
    FUN_1800b8f52(&DAT_1802a21e4,&DAT_18027216f,0x12,0x1d,&DAT_1802a2204);
    FUN_180081980(local_58,&DAT_1802a21e4,&local_38);
    FUN_180083d90(local_90,0x12e,local_58,param_1);
    FUN_1801dd110(local_90,&DAT_180253620);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (param_2 != plVar3) {
    uVar1 = plVar3[2];
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    if ((ulonglong)param_2[3] < uVar1) {
      FUN_18007f460(param_2,uVar1);
      return;
    }
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    param_2[2] = uVar1;
    FUN_1802079d0(puVar2,plVar3,uVar1);
    *(undefined1 *)((longlong)puVar2 + uVar1) = 0;
  }
  return;
}



void Unwind_180088090(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x60);
  return;
}



void FUN_1800880c0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_f9;
  ulonglong local_f8;
  ulonglong local_f0;
  uint local_e4;
  uintptr_t local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong *local_70;
  ulonglong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_f0 = 0x8e20f782ed18e62d;
  local_f8 = 0x6f418992685e5ec;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_f0 ^ 0xc1fe0ee5f3401e35;
            uVar1 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0xc1fe0ee5f3401e35;
            local_f0 = uVar2;
            if ((longlong)uVar1 < 0x20fe9b2030405f30) break;
            if ((longlong)uVar1 < 0x3ee75b6db2625615) {
              if (uVar1 == 0x20fe9b2030405f30) {
                local_78 = *local_a8;
                local_80 = local_a0 + local_b8;
                local_f0 = 0x8d862deccf140e5b;
                if (local_d0 < local_80) {
                  local_f0 = 0x997391158a818f59;
                }
                local_f8 = 0xb36176817d76584e;
                local_48 = local_78;
              }
              else if (uVar1 == 0x2a12e794f7f7d717) {
                local_50 = *(longlong *)(local_48 + -8);
                local_f0 = 0x25b25275d412a9d;
                if ((ulonglong)((local_48 + local_c0) - local_50) < local_b0) {
                  local_f0 = 0x23b1528fd20e7462;
                }
                local_f8 = 0x992e211e6336cb5a;
              }
            }
            else if (uVar1 == 0x3ee75b6db2625615) {
              thunk_FUN_1801f42e0(local_78,local_80);
              local_f0 = 0xe8cd872fef3affa6;
              local_f8 = 0x4e070ead3a0b6c23;
            }
            else if (uVar1 == 0x6d117c208316f551) {
              local_90 = local_98 + local_c8;
              local_f0 = 0xf4bf8b6fbf69d8c4;
              local_f8 = 0xfcb00d50309d946d;
              local_88 = local_60;
            }
            else if (uVar1 == 0x73d3d7382f8620b7) {
              local_88 = *param_1;
              local_90 = local_98 + local_b8;
              local_f0 = 0x781d97e48d18f639;
              if (local_d0 < local_90) {
                local_f0 = 0xbeb36934f133e4ed;
              }
              local_f8 = 0x701211db02ecba90;
              local_58 = local_88;
            }
          }
          if ((longlong)uVar1 < -0x45608c6e4ec740c8) break;
          if ((longlong)uVar1 < -0x1f08fd388ce1511f) {
            if (uVar1 == 0xba9f7391b138bf38) {
              local_80 = local_a0 + local_c8;
              local_f0 = 0xd823c973b3c9c139;
              local_f8 = 0xe6c4921e01ab972c;
              local_78 = local_50;
            }
            else if (uVar1 == 0xcea178eff3df5e7d) {
              local_60 = *(longlong *)(local_58 + -8);
              local_f0 = 0xeeff89908425626c;
              if ((ulonglong)((local_58 + local_c0) - local_60) < local_b0) {
                local_f0 = 0x6319f777742d39dc;
              }
              local_f8 = 0xe088b57f73bcc8d;
            }
          }
          else if (uVar1 == 0x80f863f8ff44ca9) {
            thunk_FUN_1801f42e0(local_88,local_90);
            local_f0 = 0xe057ec7b0873cfa7;
            local_f8 = 0x550cb447a05377e2;
          }
          else if (uVar1 == 0xe0f702c7731eaee1) goto LAB_180088680;
        }
        if ((longlong)uVar1 < -0x5935767d2ace6c7b) break;
        if (uVar1 == 0xa6ca8982d5319385) {
          param_1[6] = local_e0;
          *local_70 = local_d8;
          *(undefined1 *)local_a8 = local_f9;
          local_68 = (ulonglong *)(param_1 + 3);
          local_98 = param_1[3];
          local_f0 = 0x3ad12dc6ce874d1;
          if (local_d8 < local_98) {
            local_f0 = 0xc5259dd8eb4eec23;
          }
          local_f8 = 0xb6f64ae0c4c8cc94;
        }
        else if (uVar1 == 0xb55b583ca820b845) {
          param_1[2] = local_e0;
          *local_68 = local_d8;
          *(undefined1 *)param_1 = local_f9;
          return;
        }
      }
      if (uVar1 != 0x88d4ef1bcb9d03c1) break;
      local_d8 = 0xf;
      local_b0 = 0x20;
      local_e0 = 0;
      local_b8 = 1;
      local_c0 = -8;
      local_c8 = 0x28;
      local_f9 = 0;
      local_d0 = 0xfff;
      local_e4 = 0;
      local_a8 = param_1 + 4;
      local_70 = (ulonglong *)(param_1 + 7);
      local_a0 = param_1[7];
      local_f0 = 0xacfa8cced13a53c5;
      if (0xf < local_a0) {
        local_f0 = 0x2ace9e6c344b9f70;
      }
      local_f8 = 0xa30054c040bc040;
    }
  } while (uVar1 != 0x9b7504393e77e1c7);
LAB_180088680:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_e4,local_e0);
}



void * __thiscall FUN_1800886d0(void *this,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  ulonglong uVar8;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  uintptr_t local_c8;
  ulonglong local_c0;
  undefined8 **local_b8;
  undefined8 uStack_b0;
  uintptr_t local_a8;
  ulonglong local_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  uintptr_t local_50;
  uint local_44;
  ulonglong local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_40 = 0xf;
  local_58 = 0x20;
  local_50 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_31 = 0;
  local_60 = 0xfff;
  local_44 = 0;
  local_98 = (undefined8 ***)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_f0 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x20);
  local_e8 = 0x10;
  local_e0 = 0x1f;
  local_f8 = puVar5;
  FUN_1800b8f52(&DAT_1802a2240,&DAT_180272211,0x16,0x11,&DAT_1802a2254);
  uVar4 = uRam00000001802a224c;
  uVar3 = uRam00000001802a2248;
  uVar2 = uRam00000001802a2244;
  *puVar5 = _DAT_1802a2240;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)(puVar5 + 4) = local_31;
  FUN_180081f20(&local_d8,&local_f8,param_2);
  local_b8 = (undefined8 ***)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = local_40;
  if (local_40 < local_88 + local_c8 + *(longlong *)(param_3 + 0x10)) {
    FUN_180002240(&local_b8);
    local_a8 = local_50;
  }
  FUN_1800820e0(&local_b8,&local_d8,&local_98,param_3);
  if (local_40 < local_c0) {
    lVar1 = CONCAT71(uStack_d7,local_d8);
    uVar8 = local_78 + local_c0;
    lVar6 = lVar1;
    if (local_60 < uVar8) {
      lVar6 = *(longlong *)(lVar1 + -8);
      if (local_58 <= (ulonglong)((lVar1 + local_70) - lVar6)) goto LAB_180088a1f;
      uVar8 = local_c0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar6,uVar8);
  }
  local_c8 = local_50;
  local_c0 = local_40;
  local_d8 = local_31;
  if (local_40 < local_e0) {
    uVar8 = local_78 + local_e0;
    puVar5 = local_f8;
    if (local_60 < uVar8) {
      puVar5 = *(undefined4 **)(local_f8 + -2);
      if (local_58 <= (ulonglong)((longlong)local_f8 + (local_70 - (longlong)puVar5))) goto LAB_180088a1f;
      uVar8 = local_e0 + local_68;
    }
    thunk_FUN_1801f42e0(puVar5,uVar8);
  }
  if (local_40 < local_80) {
    uVar8 = local_78 + local_80;
    pppuVar7 = (undefined8 ***)local_98;
    if (local_60 < uVar8) {
      pppuVar7 = (undefined8 ***)local_98[-1];
      if (local_58 <= (ulonglong)((longlong)local_98 + (local_70 - (longlong)pppuVar7))) goto LAB_180088a1f;
      uVar8 = local_80 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar7,uVar8);
  }
  local_98 = &local_b8;
  if (local_40 < local_a0) {
    local_98 = local_b8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_90 = CONCAT71(uStack_90._1_7_,1);
  FUN_1801dd1b8(&local_98,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020e928;
  if (local_40 < local_a0) {
    uVar8 = local_78 + local_a0;
    pppuVar7 = (undefined8 ***)local_b8;
    if (local_60 < uVar8) {
      pppuVar7 = (undefined8 ***)local_b8[-1];
      if (local_58 <= (ulonglong)((longlong)local_b8 + (local_70 - (longlong)pppuVar7))) {
LAB_180088a1f:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_44,local_50);
      }
      uVar8 = local_a0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar7,uVar8);
  }
  return this;
}



void Unwind_180088a40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_180088a70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_180088aa0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  FUN_180001ef0(param_2 + 0x50);
  return;
}



undefined8 * FUN_180088cc0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong uVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar5 = 0xf;
  if (0xf < sVar3 + sVar2) {
    FUN_180002240(param_1,sVar3 + sVar2);
    param_1[2] = 0;
    uVar5 = param_1[3];
  }
  sVar2 = strlen(param_2);
  if (uVar5 < sVar2) {
    FUN_180066dd0(param_1,sVar2);
  }
  else {
    param_1[2] = sVar2;
    puVar4 = param_1;
    if (0xf < uVar5) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar4,param_2,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2) = 0;
  }
  _Str = (char *)*param_3;
  sVar2 = strlen(_Str);
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < sVar2) {
    FUN_180066dd0(param_1,sVar2,param_1,_Str,sVar2);
  }
  else {
    param_1[2] = sVar2 + lVar1;
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar4,_Str,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2 + lVar1) = 0;
  }
  return param_1;
}



void Unwind_180088e30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



longlong FUN_180088e60(longlong *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  char local_a9;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_94;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;

  local_a0 = 0x76bc630994395f33;
  local_a8 = 0x79a53a7ba7f3fc67;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar6 = local_a0 ^ 0xd39b101d3d895c17;
          uVar3 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0xd39b101d3d895c17;
          local_a0 = uVar6;
          if ((longlong)uVar3 < 0x23a06c511fb54159) break;
          if (uVar3 == 0x23a06c511fb54159) {
            local_60 = local_70;
            local_a0 = 0xa3eb071686f4bf84;
            if (*(char *)(local_70 + 0x19) != local_a9) {
              local_a0 = 0x7f04e80835a671bf;
            }
            local_a8 = 0x9bd97a18ee7537bf;
          }
          else if (uVar3 == 0x38327d0e6881883b) {
            sVar4 = strlen(param_2);
            uVar3 = *(ulonglong *)(local_60 + 0x30);
            if (local_90 < *(ulonglong *)(local_60 + 0x38)) {
              pvVar7 = *(void **)(local_60 + 0x20);
            }
            else {
              pvVar7 = (void *)(local_60 + 0x20);
            }
            uVar6 = uVar3;
            if (sVar4 < uVar3) {
              uVar6 = sVar4;
            }
            iVar2 = memcmp(pvVar7,param_2,uVar6);
            bVar1 = uVar3 <= sVar4;
            if (iVar2 != local_94) {
              bVar1 = iVar2 < 1;
            }
            local_a0 = 0x9eba1e69c4cab606;
            if (!bVar1) {
              local_a0 = 0xf9140ab1e36c9029;
            }
            local_a8 = 0x1dc998a138bfd629;
            local_68 = local_60;
          }
          else if (uVar3 == 0x46eed765593fdf06) {
            local_48 = strlen(param_2);
            local_a0 = 0x36e916e3808001ed;
            local_a8 = 0xc2e79fd21929b1ac;
            local_80 = local_88;
            local_78 = local_50;
          }
        }
        if ((longlong)uVar3 < -0xbf176ce66564fbf) break;
        if (uVar3 == 0xf40e893199a9b041) {
          uVar3 = *(ulonglong *)(local_78 + 0x30);
          if (local_90 < *(ulonglong *)(local_78 + 0x38)) {
            pvVar7 = *(void **)(local_78 + 0x20);
          }
          else {
            pvVar7 = (void *)(local_78 + 0x20);
          }
          uVar6 = uVar3;
          if (local_48 < uVar3) {
            uVar6 = local_48;
          }
          iVar2 = memcmp(pvVar7,param_2,uVar6);
          bVar1 = uVar3 < local_48;
          if (iVar2 != local_94) {
            bVar1 = iVar2 < local_94;
          }
          lVar5 = 0;
          local_70 = local_78;
          if (bVar1) {
            lVar5 = 0x10;
            local_70 = local_80;
          }
          local_78 = *(longlong *)(local_78 + lVar5);
          local_a0 = 0xf54da169d3ed3094;
          if (*(char *)(local_78 + 0x19) != local_a9) {
            local_a0 = 0x22e3440955f1c18c;
          }
          local_a8 = 0x14328584a4480d5;
          local_80 = local_70;
        }
        else if (uVar3 == 0xf19597233caa354) {
          local_90 = 0xf;
          local_a9 = '\0';
          local_94 = 0;
          local_88 = *param_1;
          local_50 = *(longlong *)(local_88 + 8);
          local_a0 = 0x49c767d928315bbd;
          if (*(char *)(local_50 + 0x19) != '\0') {
            local_a0 = 0x2c89dced6ebbc5e2;
          }
          local_a8 = 0xf29b0bc710e84bb;
          local_70 = local_88;
        }
      }
      if (uVar3 != 0xe4dd9210dbd34600) break;
      local_a0 = 0x200c6fc477c66066;
      local_a8 = 0xa37fe90c8bb30049;
      local_68 = local_88;
    }
  } while (uVar3 != 0x837386c8fc75602f);
  return local_68;
}



longlong FUN_180089270(longlong *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  char local_a9;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_94;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;

  local_a0 = 0x60a648b3e9a32142;
  local_a8 = 0x88dd5bfbd2215255;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar6 = local_a0 ^ 0x5b7f1332cc1b2945;
          uVar3 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0x5b7f1332cc1b2945;
          local_a0 = uVar6;
          if (-0x8b0dfb8d22a1d8f < (longlong)uVar3) break;
          if (uVar3 == 0xc7f8e16c50216519) {
            sVar4 = strlen(param_2);
            uVar3 = *(ulonglong *)(local_60 + 0x30);
            if (local_90 < *(ulonglong *)(local_60 + 0x38)) {
              pvVar7 = *(void **)(local_60 + 0x20);
            }
            else {
              pvVar7 = (void *)(local_60 + 0x20);
            }
            uVar6 = uVar3;
            if (sVar4 < uVar3) {
              uVar6 = sVar4;
            }
            iVar2 = memcmp(pvVar7,param_2,uVar6);
            bVar1 = uVar3 <= sVar4;
            if (iVar2 != local_94) {
              bVar1 = iVar2 < 1;
            }
            local_a0 = 0x52d252c5e8ea3a12;
            if (!bVar1) {
              local_a0 = 0xb194a9e61189ca0e;
            }
            local_a8 = 0x5f90b584388aaec4;
            local_68 = local_60;
          }
          else if (uVar3 == 0xe87b13483b827317) {
            local_90 = 0xf;
            local_a9 = '\0';
            local_94 = 0;
            local_88 = *param_1;
            local_50 = *(longlong *)(local_88 + 8);
            local_a0 = 0x7e0aea892b40eeb0;
            if (*(char *)(local_50 + 0x19) != '\0') {
              local_a0 = 0x8b4d475809c62a09;
            }
            local_a8 = 0x7c02671f2413c87b;
            local_70 = local_88;
          }
          else if (uVar3 == 0xee041c62290364ca) {
            local_a0 = 0xe062a114ab00c37d;
            local_a8 = 0xed2046557b6057ab;
            local_68 = local_88;
          }
        }
        if (0xd42e741d06094d5 < (longlong)uVar3) break;
        if (uVar3 == 0xf74f20472dd5e272) {
          local_60 = local_70;
          local_a0 = 0xdf17a8db568376d3;
          if (*(char *)(local_70 + 0x19) != local_a9) {
            local_a0 = 0xf6eb55d52fa17700;
          }
          local_a8 = 0x18ef49b706a213ca;
        }
        else if (uVar3 == 0x2088d960f5326cb) {
          local_48 = strlen(param_2);
          local_a0 = 0x9cf0f26a6a99a33f;
          local_a8 = 0xa4e2b40933c6f1bb;
          local_78 = local_50;
          local_80 = local_88;
        }
      }
      if (uVar3 != 0x38124663595f5284) break;
      uVar3 = *(ulonglong *)(local_78 + 0x30);
      if (local_90 < *(ulonglong *)(local_78 + 0x38)) {
        pvVar7 = *(void **)(local_78 + 0x20);
      }
      else {
        pvVar7 = (void *)(local_78 + 0x20);
      }
      uVar6 = uVar3;
      if (local_48 < uVar3) {
        uVar6 = local_48;
      }
      iVar2 = memcmp(pvVar7,param_2,uVar6);
      bVar1 = uVar3 < local_48;
      if (iVar2 != local_94) {
        bVar1 = iVar2 < local_94;
      }
      lVar5 = 0;
      local_70 = local_78;
      if (bVar1) {
        lVar5 = 0x10;
        local_70 = local_80;
      }
      local_78 = *(longlong *)(local_78 + lVar5);
      local_a0 = 0x1d649e9ccba3a51b;
      if (*(char *)(local_78 + 0x19) != local_a9) {
        local_a0 = 0xd239f8b8bf2915ed;
      }
      local_a8 = 0x2576d8ff92fcf79f;
      local_80 = local_70;
    }
  } while (uVar3 != 0xd42e741d06094d6);
  return local_68;
}



longlong FUN_180089690(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_199;
  ulonglong local_198;
  ulonglong local_190;
  char local_181;
  uintptr_t local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 *local_168;
  byte local_158;
  ulonglong local_150;
  ulonglong local_148;
  longlong local_140;
  undefined8 *local_138;
  longlong *local_128;
  undefined8 *local_120;
  ulonglong local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  longlong local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  ulonglong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;

  local_190 = 0xb14ea602cfc1291e;
  local_198 = 0x664a9508400c07c9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar10 = local_190 ^ 0x71d79705f563901f;
              uVar8 = local_190 ^ local_198;
              local_198 = local_198 ^ 0x71d79705f563901f;
              local_190 = uVar10;
              if ((longlong)uVar8 < -0x2c7bf3c3d7ad99b6) break;
              if ((longlong)uVar8 < 0xf15a11f4b3a0469) {
                if ((longlong)uVar8 < -0x14a362721611ca88) {
                  if (uVar8 == 0xd3840c3c2852664a) {
                    FUN_1800880c0(local_110);
                    local_110 = local_110 + 8;
                    local_190 = 0x1211e1e2528e51c0;
                    if (local_110 != local_98) {
                      local_190 = 0x66dcfc2940624beb;
                    }
                    local_198 = 0xb558f01568302da1;
                  }
                  else if (uVar8 == 0xd704330a8fcd2ed7) {
                    local_150 = 0x27;
                    local_178 = 0xf;
                    local_158 = 6;
                    local_180 = 0;
                    local_199 = 0;
                    local_170 = param_1 + 1;
                    lVar9 = *param_1;
                    local_a8 = (longlong)param_2 - lVar9;
                    local_a0 = (param_1[1] - lVar9 >> 6) + 1;
                    local_128 = param_1 + 2;
                    uVar8 = param_1[2] - lVar9 >> 6;
                    local_148 = (uVar8 >> 1) + uVar8;
                    if (local_148 <= local_a0) {
                      local_148 = local_a0;
                    }
                    if (0x3ffffffffffffff - (uVar8 >> 1) < uVar8) {
                      local_148 = 0x3ffffffffffffff;
                    }
                    local_190 = 0xcd880c9a86ab4d24;
                    if (local_148 < 0x400000000000000) {
                      local_190 = 0x7180711f45724561;
                    }
                    local_198 = 0xf097024dc3eb0359;
                  }
                  else if (uVar8 == 0xe73175d9916ec12d) {
                    *(undefined8 *)(local_f8 + 0x50) = 0;
                    *(undefined8 *)(local_f8 + 0x58) = 0;
                    *(undefined8 *)(local_f8 + 0x40) = 0;
                    *(undefined8 *)(local_f8 + 0x48) = 0;
                    uVar5 = local_100[1];
                    uVar6 = local_100[2];
                    uVar7 = local_100[3];
                    *(undefined8 *)(local_f8 + 0x40) = *local_100;
                    *(undefined8 *)(local_f8 + 0x48) = uVar5;
                    *(undefined8 *)(local_f8 + 0x50) = uVar6;
                    *(undefined8 *)(local_f8 + 0x58) = uVar7;
                    local_100[2] = local_180;
                    local_100[3] = local_178;
                    *(undefined1 *)local_100 = local_199;
                    *(undefined8 *)(local_f8 + 0x70) = 0;
                    *(undefined8 *)(local_f8 + 0x78) = 0;
                    *(undefined8 *)(local_f8 + 0x60) = 0;
                    *(undefined8 *)(local_f8 + 0x68) = 0;
                    uVar2 = *(undefined4 *)((longlong)local_100 + 0x24);
                    uVar3 = *(undefined4 *)(local_100 + 5);
                    uVar4 = *(undefined4 *)((longlong)local_100 + 0x2c);
                    uVar5 = local_100[6];
                    uVar6 = local_100[7];
                    *(undefined4 *)(local_f8 + 0x60) = *(undefined4 *)(local_100 + 4);
                    *(undefined4 *)(local_f8 + 100) = uVar2;
                    *(undefined4 *)(local_f8 + 0x68) = uVar3;
                    *(undefined4 *)(local_f8 + 0x6c) = uVar4;
                    *(undefined8 *)(local_f8 + 0x70) = uVar5;
                    *(undefined8 *)(local_f8 + 0x78) = uVar6;
                    local_100[6] = local_180;
                    local_100[7] = local_178;
                    *(undefined1 *)(local_100 + 4) = local_199;
                    local_100 = local_100 + 8;
                    local_190 = 0xbceccc6ae2f6390a;
                    if (local_100 != local_70) {
                      local_190 = 0xfd3082449cb10a2c;
                    }
                    local_f8 = local_f8 + 0x40;
                    local_198 = 0x1a01f79d0ddfcb01;
                  }
                }
                else if (uVar8 == 0xeb5c9d8de9ee3578) {
                  thunk_FUN_1801f42e0(local_e0,local_e8);
                  local_190 = 0xb515f5092b1f5513;
                  local_198 = 0x85c581ecfab69b78;
                }
                else if (uVar8 == 0xf4888e280bbd41fa) {
                  local_190 = 0x6c793a0c35abfb2b;
                  if (local_148 < 0x40) {
                    local_190 = 0x5a9bcc514a091540;
                  }
                  local_198 = 0xc10aae8ed8a16a53;
                }
                else if (uVar8 == 0x6190f7e5ff5c702) {
                  local_168 = local_138;
                  local_140 = (longlong)local_138 + local_a8;
                  puVar1 = (undefined8 *)((longlong)local_138 + local_a8 + 0x10);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)((longlong)local_138 + local_a8) = 0;
                  ((undefined8 *)((longlong)local_138 + local_a8))[1] = 0;
                  uVar5 = param_3[1];
                  uVar6 = param_3[2];
                  uVar7 = param_3[3];
                  *(undefined8 *)((longlong)local_138 + local_a8) = *param_3;
                  ((undefined8 *)((longlong)local_138 + local_a8))[1] = uVar5;
                  puVar1 = (undefined8 *)((longlong)local_138 + local_a8 + 0x10);
                  *puVar1 = uVar6;
                  puVar1[1] = uVar7;
                  param_3[2] = local_180;
                  param_3[3] = local_178;
                  *(undefined1 *)param_3 = local_199;
                  *(undefined8 *)(local_140 + 0x30) = 0;
                  *(undefined8 *)(local_140 + 0x38) = 0;
                  *(undefined8 *)(local_140 + 0x20) = 0;
                  *(undefined8 *)(local_140 + 0x28) = 0;
                  uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
                  uVar3 = *(undefined4 *)(param_3 + 5);
                  uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
                  uVar5 = param_3[6];
                  uVar6 = param_3[7];
                  *(undefined4 *)(local_140 + 0x20) = *(undefined4 *)(param_3 + 4);
                  *(undefined4 *)(local_140 + 0x24) = uVar2;
                  *(undefined4 *)(local_140 + 0x28) = uVar3;
                  *(undefined4 *)(local_140 + 0x2c) = uVar4;
                  *(undefined8 *)(local_140 + 0x30) = uVar5;
                  *(undefined8 *)(local_140 + 0x38) = uVar6;
                  param_3[6] = local_180;
                  param_3[7] = local_178;
                  *(undefined1 *)(param_3 + 4) = local_199;
                  local_78 = (undefined8 *)*local_170;
                  local_120 = (undefined8 *)*param_1;
                  local_181 = local_120 == param_2;
                  local_190 = 0xc5fb98e4b3c0c179;
                  if (param_2 != local_78) {
                    local_190 = 0xc1a6b07237871d88;
                  }
                  local_198 = 0xe82877bfc1feafaf;
                }
              }
              else if ((longlong)uVar8 < 0x2ea82f0d0e9db884) {
                if (uVar8 == 0xf15a11f4b3a0469) {
                  local_d0[2] = 0;
                  local_d0[3] = 0;
                  *local_d0 = 0;
                  local_d0[1] = 0;
                  uVar5 = local_d8[1];
                  uVar6 = local_d8[2];
                  uVar7 = local_d8[3];
                  *local_d0 = *local_d8;
                  local_d0[1] = uVar5;
                  local_d0[2] = uVar6;
                  local_d0[3] = uVar7;
                  local_d8[2] = local_180;
                  local_d8[3] = local_178;
                  *(undefined1 *)local_d8 = local_199;
                  local_d0[6] = 0;
                  local_d0[7] = 0;
                  local_d0[4] = 0;
                  local_d0[5] = 0;
                  uVar2 = *(undefined4 *)((longlong)local_d8 + 0x24);
                  uVar3 = *(undefined4 *)(local_d8 + 5);
                  uVar4 = *(undefined4 *)((longlong)local_d8 + 0x2c);
                  uVar5 = local_d8[6];
                  uVar6 = local_d8[7];
                  *(undefined4 *)(local_d0 + 4) = *(undefined4 *)(local_d8 + 4);
                  *(undefined4 *)((longlong)local_d0 + 0x24) = uVar2;
                  *(undefined4 *)(local_d0 + 5) = uVar3;
                  *(undefined4 *)((longlong)local_d0 + 0x2c) = uVar4;
                  local_d0[6] = uVar5;
                  local_d0[7] = uVar6;
                  local_d8[6] = local_180;
                  local_d8[7] = local_178;
                  *(undefined1 *)(local_d8 + 4) = local_199;
                  local_d8 = local_d8 + 8;
                  local_190 = 0xce6ff107d82b28d5;
                  if (local_d8 != param_2) {
                    local_190 = 0x7726ee1efeb0b72c;
                  }
                  local_d0 = local_d0 + 8;
                  local_198 = 0x78334f01b58ab345;
                }
                else if (uVar8 == 0x298ec7cdf679b227) {
                  local_190 = 0x2f4eaef8ed8cae70;
                  if (local_181 == '\0') {
                    local_190 = 0xa52bf55f32cc0821;
                  }
                  local_198 = 0xaa3e544079f60c48;
                  local_108 = local_78;
                  local_d8 = local_120;
                  local_d0 = local_168;
                }
                else if (uVar8 == 0x2dd3ef5b723e6ed6) {
                  local_190 = 0xe68a52568b55ece3;
                  if (local_181 == '\0') {
                    local_190 = 0xd020c351a2c9e1ba;
                  }
                  local_198 = 0x65f285e0cb29326a;
                  local_c8 = local_120;
                  local_c0 = local_168;
                  local_b8 = local_c8;
                }
              }
              else if ((longlong)uVar8 < 0x3d1f0ed745404e7d) {
                if (uVar8 == 0x2ea82f0d0e9db884) {
                  local_e8 = local_80 | local_150;
                  local_e0 = local_90;
                  local_190 = 0x87ac86bb18e96433;
                  local_198 = 0x6cf01b36f107514b;
                }
                else if (uVar8 == 0x30d074e5d1a9ce6b) {
                  *param_1 = (longlong)local_168;
                  *local_170 = (longlong)(local_168 + local_a0 * 8);
                  *local_128 = (longlong)(local_168 + local_148 * 8);
                  return local_140;
                }
              }
              else if (uVar8 == 0x459695fd70d8ce41) {
                local_88 = local_f0;
                local_e8 = *local_128 - (longlong)local_f0;
                local_190 = 0x1390503250841bb8;
                if (local_e8 < 0x1000) {
                  local_190 = 0x5f55e7e9c3be4d11;
                }
                local_198 = 0xb4097a642a507869;
                local_e0 = local_f0;
                local_80 = local_e8;
                local_68 = local_88;
              }
              else if (uVar8 == 0x3d1f0ed745404e7d) {
                std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
              }
            }
            if (-0x58b6ee08c54183a0 < (longlong)uVar8) break;
            if ((longlong)uVar8 < -0x723d10a1f4b3b731) {
              if (uVar8 == 0x8117735286994638) {
                local_118 = local_148 << (local_158 & 0x3f);
                local_190 = 0x63db59962041804d;
                if (local_148 != local_180) {
                  local_190 = 0x914ad8c0740906b5;
                }
                local_198 = 0x65c256e87fb4474f;
                local_138 = (undefined8 *)0x0;
              }
              else if (uVar8 == 0x8378d7b6407cde89) {
                local_60 = local_b8;
                local_190 = 0x155dde956535d6d6;
                if (local_b8 != (undefined8 *)0x0) {
                  local_190 = 0xa84f452ebfd05072;
                }
                local_198 = 0x258daa70b49c18bd;
              }
              else if (uVar8 == 0x8570fab8947aa238) {
                local_70 = local_108;
                local_190 = 0x2f6db6d2c585dadd;
                if (param_2 != local_108) {
                  local_190 = 0x6eb1f8fcbbc2e9fb;
                }
                local_198 = 0x89808d252aac28d6;
                local_f8 = local_140;
                local_100 = param_2;
              }
            }
            else if (uVar8 == 0x8dc2ef5e0b4c48cf) {
              local_98 = (undefined8 *)*local_170;
              local_110 = local_60;
              local_190 = 0x4c83db74e25f8a02;
              if (local_60 != local_98) {
                local_190 = 0xda9142b5bad52209;
              }
              local_198 = 0x9154e8992874443;
              local_f0 = local_110;
            }
            else if (uVar8 == 0x9b9162df92a87f13) {
              local_138 = (undefined8 *)FUN_1801d61c8(local_118);
              local_190 = 0xe2c0bb27e22c0221;
              local_198 = 0xe4d9b459bdd9c523;
            }
            else if (uVar8 == 0xa6ed3bf7ef29f20b) {
              local_b8 = (undefined8 *)*param_1;
              local_190 = 0xd5dd9d6a93f78478;
              local_198 = 0x56a54adcd38b5af1;
            }
          }
          if (-0x4a2db94e961f2c31 < (longlong)uVar8) break;
          if (uVar8 == 0xa74911f73abe7c61) {
            local_f0 = (undefined8 *)*param_1;
            local_190 = 0x893c2ed798b6048;
            local_198 = 0x4d0557100953ae09;
          }
          else if (uVar8 == 0xa7992a567ad463d1) {
            local_90 = (undefined8 *)local_68[-1];
            local_190 = 0x93ca4d20e11c1371;
            if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)local_90))) {
              local_190 = 0x6918164116b01c2;
            }
            local_198 = 0xbd62622def81abf5;
          }
          else if (uVar8 == 0xad739482ed0a9178) {
            lVar9 = FUN_1801d61c8(local_118 | local_150);
            local_138 = (undefined8 *)(local_150 + lVar9 & 0xffffffffffffffe0);
            local_138[-1] = lVar9;
            local_190 = 0xc042d58243077d55;
            local_198 = 0xc65bdafc1cf2ba57;
          }
        }
        if (uVar8 != 0xb5d246b169e0d3d0) break;
        local_c0[2] = 0;
        local_c0[3] = 0;
        *local_c0 = 0;
        local_c0[1] = 0;
        uVar5 = local_c8[1];
        uVar6 = local_c8[2];
        uVar7 = local_c8[3];
        *local_c0 = *local_c8;
        local_c0[1] = uVar5;
        local_c0[2] = uVar6;
        local_c0[3] = uVar7;
        local_c8[2] = local_180;
        local_c8[3] = local_178;
        *(undefined1 *)local_c8 = local_199;
        local_c0[6] = 0;
        local_c0[7] = 0;
        local_c0[4] = 0;
        local_c0[5] = 0;
        uVar2 = *(undefined4 *)((longlong)local_c8 + 0x24);
        uVar3 = *(undefined4 *)(local_c8 + 5);
        uVar4 = *(undefined4 *)((longlong)local_c8 + 0x2c);
        uVar5 = local_c8[6];
        uVar6 = local_c8[7];
        *(undefined4 *)(local_c0 + 4) = *(undefined4 *)(local_c8 + 4);
        *(undefined4 *)((longlong)local_c0 + 0x24) = uVar2;
        *(undefined4 *)(local_c0 + 5) = uVar3;
        *(undefined4 *)((longlong)local_c0 + 0x2c) = uVar4;
        local_c0[6] = uVar5;
        local_c0[7] = uVar6;
        local_c8[6] = local_180;
        local_c8[7] = local_178;
        *(undefined1 *)(local_c8 + 4) = local_199;
        local_c8 = local_c8 + 8;
        local_190 = 0x8c9c99347137499d;
        if (local_c8 != param_2) {
          local_190 = 0x9fa3e472f7fe6846;
        }
        local_c0 = local_c0 + 8;
        local_198 = 0x2a71a2c39e1ebb96;
      }
      if (uVar8 != 0xb65cbe066da19b90) break;
      local_108 = (undefined8 *)*local_170;
      local_190 = 0xc2fb0aa244fd380d;
      local_198 = 0x478bf01ad0879a35;
    }
  } while (uVar8 != 0xbbf3e349feeaaa37);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_180);
}



undefined8 * FUN_18008a470(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  uVar2 = param_3[1];
  if (uVar2 == 0) {
    return param_1;
  }
  if (0x7fffffff < uVar2) {
    uVar2 = FUN_180067b60(0x16);
LAB_18008a653:
    FUN_180068290(uVar2 & 0xffffffff);
  }
  uVar7 = 0;
  uVar1 = FUN_1801d9130(param_2,*param_3,uVar2,0,0);
  uVar2 = uVar1 >> 0x20;
  if (uVar2 != 0) goto LAB_18008a653;
  lVar4 = uVar1 << 0x20;
  uVar6 = lVar4 >> 0x20;
  uVar2 = param_1[2];
  uVar3 = uVar6 - uVar2;
  puVar5 = param_1;
  if (uVar6 < uVar2 || uVar3 == 0) {
    param_1[2] = uVar6;
    if (7 < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
  }
  else {
    if (param_1[3] - uVar2 < uVar3) {
      FUN_180063860(param_1,uVar3,lVar4,uVar3,uVar7 & 0xffff0000);
      goto LAB_18008a5fb;
    }
    param_1[2] = uVar6;
    if (7 < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    FUN_180207610((longlong)puVar5 + uVar2 * 2,0,(lVar4 >> 0x1f) + uVar2 * -2);
  }
  *(undefined2 *)((longlong)puVar5 + uVar6 * 2) = 0;
LAB_18008a5fb:
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar2 = FUN_1801d9130(param_2,*param_3,*(undefined4 *)(param_3 + 1),puVar5,(int)uVar1);
  if (uVar2 >> 0x20 == 0) {
    return param_1;
  }
  FUN_180068290(uVar2 >> 0x20);
}



void Unwind_18008a670(undefined8 param_1,longlong param_2)

{
  FUN_180062880(*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_18008a6a0(longlong *param_1,undefined8 param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  failure_vftable *local_a8 [5];
  undefined4 local_80 [2];
  undefined **local_78;
  longlong *local_70;
  undefined4 local_64;
  longlong *local_60;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_54 = 4;
  local_41 = 0;
  local_4c = 2;
  local_48 = 0;
  local_50 = -0xa8;
  local_64 = 0;
  if (param_5 == 0) {
    puVar5 = (undefined *)*param_1;
  }
  else {
    puVar5 = &DAT_18020e7e8;
    *param_1 = (longlong)&DAT_18020e7e8;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x15] = (longlong)&PTR_FUN_18020e938;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(puVar5 + 4)) = &PTR_LAB_18020e7e0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4) + -0xa8;
  plVar1 = param_1 + 1;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_18020e940;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4) + -0x10;
  local_60 = param_1;
  FUN_18008b0e0((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,plVar1,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_18020e7e0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = local_50 + *(int *)(*param_1 + 4);
  param_1[1] = (longlong)&PTR_FUN_18020e870;
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
  lVar2 = FUN_1801d61c8(0x10);
  uVar3 = FUN_1801d8b48(1);
  *(undefined8 *)(lVar2 + 8) = uVar3;
  local_60[0xd] = lVar2;
  local_60[1] = (longlong)&PTR_FUN_18020e7f0;
  *(undefined1 *)((longlong)local_60 + 0x84) = local_41;
  *(undefined1 *)((longlong)local_60 + 0x79) = local_41;
  local_60[4] = (longlong)(local_60 + 2);
  local_60[5] = (longlong)(local_60 + 3);
  local_60[8] = (longlong)(local_60 + 6);
  local_60[9] = (longlong)(local_60 + 7);
  local_60[0xb] = (longlong)(local_60 + 10);
  local_60[0xc] = (longlong)local_60 + 0x54;
  *(uint *)((longlong)local_60 + 0x54) = local_48;
  *(uint *)(local_60 + 10) = local_48;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[0x11] = 0;
  *(undefined8 *)((longlong)local_60 + 0x7c) = DAT_1802a1e70;
  local_60[0xe] = 0;
  local_70 = plVar1;
  lVar2 = FUN_18008ab10(plVar1,param_2,param_3 | local_4c,param_4);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*local_60 + 4);
    uVar4 = local_54;
    if (*(longlong *)((longlong)local_60 + lVar2 + 0x48) != 0) {
      uVar4 = local_48;
    }
    uVar6 = *(uint *)((longlong)local_60 + lVar2 + 0x10) & 0x15 | uVar4 | local_4c;
    *(uint *)((longlong)local_60 + lVar2 + 0x10) = uVar6;
    uVar4 = *(uint *)((longlong)local_60 + lVar2 + 0x14);
    uVar6 = uVar6 & uVar4;
    if (uVar6 != local_48) {
      puVar5 = &DAT_1802a22ac;
      if ((uVar4 & local_4c) == local_48) {
        puVar5 = &DAT_1802a22c8;
      }
      if ((uVar6 & local_54) != local_48) {
        puVar5 = &DAT_1802a2290;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_80[0] = 1;
      local_78 = &PTR_vftable_18020e948;
      FUN_18008bba0(local_a8,local_80,puVar5);
      local_a8[0] = &std::ios_base::failure::vftable;
      FUN_1801dd110(local_a8,&DAT_1802536a8);
    }
  }
  return;
}



void Unwind_18008aa50(undefined8 param_1,longlong param_2)

{
  FUN_180078d60(*(undefined8 *)(param_2 + 0x68));
  return;
}



void Unwind_18008aa90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;

  if (*(int *)(param_2 + 0x100) != *(int *)(param_2 + 0x74)) {
    lVar1 = *(longlong *)(param_2 + 0x78);
    *(undefined ***)(lVar1 + 0xa8) = &PTR_FUN_18020e8e8;
    std::ios_base::_Ios_base_dtor((ios_base *)(lVar1 + 0xa8));
  }
  return;
}



void Unwind_18008aaf0(void)

{
  Unwind_1801dd394();
}



longlong FUN_18008ab10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 1;
  local_4c = 0;
  if ((*(longlong *)(param_1 + 0x80) == 0) && (lVar3 = FUN_1801d9dbc(param_2,param_3,param_4), lVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(undefined1 *)(param_1 + 0x71) = 0;
    puVar5 = (undefined8 *)(param_1 + 8);
    *(undefined8 **)(param_1 + 0x18) = puVar5;
    *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
    puVar1 = (undefined8 *)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x38) = puVar1;
    *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
    *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined4 *)(param_1 + 0x4c) = local_4c;
    *(undefined4 *)(param_1 + 0x48) = local_4c;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_60 = 0;
    local_70 = 0;
    local_68 = 0;
    _get_stream_buffer_pointers(lVar3,&local_60,&local_70,&local_68);
    *(undefined8 *)(param_1 + 0x18) = local_60;
    *(undefined8 *)(param_1 + 0x20) = local_60;
    *(undefined8 *)(param_1 + 0x38) = local_70;
    *(undefined8 *)(param_1 + 0x40) = local_70;
    *(undefined8 *)(param_1 + 0x50) = local_68;
    *(undefined8 *)(param_1 + 0x58) = local_68;
    *(longlong *)(param_1 + 0x80) = lVar3;
    *(undefined8 *)(param_1 + 0x74) = DAT_1802a1e70;
    *(undefined8 *)(param_1 + 0x68) = 0;
    local_58 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    (**(code **)(*local_58 + 8))();
    plVar4 = (longlong *)FUN_18007eda0(&local_60);
    cVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (cVar2 == '\0') {
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
      *(undefined8 **)(param_1 + 0x38) = puVar1;
      *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
      *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
      *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
      *(undefined4 *)(param_1 + 0x4c) = local_4c;
      *(undefined4 *)(param_1 + 0x48) = local_4c;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(longlong **)(param_1 + 0x68) = plVar4;
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    if ((local_58 != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(*local_58 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,local_50);
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



void Unwind_18008ad00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x40) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x40) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x48));
    }
  }
  return;
}



void FUN_18008ad50(longlong param_1,uint param_2,char param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  uint local_84;
  undefined4 local_80 [2];
  undefined **local_78;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  local_90 = 0xd7b606817f244e3;
  local_98 = 0x4bddb20281e43f83;
  do {
    while( true ) {
      uVar4 = local_90 ^ 0x7df3f43816adc7a4;
      uVar3 = local_90 ^ local_98;
      local_98 = local_98 ^ 0x7df3f43816adc7a4;
      local_90 = uVar4;
      if ((longlong)uVar3 < 0x46a6d26a96167b60) break;
      if (uVar3 == 0x536b53a009085d7d) {
        local_90 = 0xbc4439e7b5ad944b;
        if (param_3 != '\0') {
          local_90 = 0x26809046f2d98178;
        }
        local_98 = 0x1b6427efa8ed08f0;
      }
      else if (uVar3 == 0x46a6d26a96167b60) {
        local_9c = 4;
        local_a0 = 0;
        uVar2 = local_9c;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          uVar2 = 0;
        }
        uVar2 = (*(uint *)(param_1 + 0x10) | param_2) & 0x17 | uVar2;
        *(uint *)(param_1 + 0x10) = uVar2;
        local_84 = uVar2 & *(uint *)(param_1 + 0x14);
        local_90 = 0x48b1708e294d2d31;
        if (local_84 == 0) {
          local_90 = 0x5f31cd9bbc16e730;
        }
        local_98 = 0x1bda232e2045704c;
      }
    }
    if (uVar3 == 0x44ebeeb59c53977c) {
      if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_c8)) {
        return;
      }
    }
    if (uVar3 == 0xa7201e081d409cbb) {
      puVar1 = &DAT_1802a22ac;
      if ((local_84 & 2) == local_a0) {
        puVar1 = &DAT_1802a22c8;
      }
      if ((local_9c & local_84) != local_a0) {
        puVar1 = &DAT_1802a2290;
      }
      local_a8 = &DAT_1802a22e0;
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15);
      local_a8 = &DAT_1802a22c4;
      FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16);
      local_a8 = &DAT_1802a22a8;
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15);
      local_80[0] = 1;
      local_78 = &PTR_vftable_18020e948;
      std::ios_base::failure::failure((failure *)&stack0xffffffffffffff90,puVar1,local_80);
      FUN_1801dd110((failure *)&stack0xffffffffffffff90,&DAT_1802536a8);
    }
  } while (uVar3 != 0x3de4b7a95a348988);
  FUN_1801dd110(0,0);
}



ios_base * FUN_18008b050(ios_base *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1,0x60);
  }
  return param_1;
}



void Unwind_18008b0c0(void)

{
  Unwind_1801dd394();
}



void FUN_18008b0e0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong *local_70;
  undefined4 local_50;
  undefined **local_48;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  longlong local_30;

  local_30 = -2;
  local_3c = 4;
  local_38 = 1;
  local_34 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar3 = FUN_1801d61c8(0x10);
  local_70 = (longlong *)FUN_1801d8b48(1);
  *(longlong **)(lVar3 + 8) = local_70;
  *(longlong *)(param_1 + 0x40) = lVar3;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  (**(code **)(*local_70 + 8))(local_70);
  plVar4 = (longlong *)FUN_18008bf60(&stack0xffffffffffffff88);
  uVar1 = (**(code **)(*plVar4 + 0x40))(plVar4,0x20);
  if (local_70 != (longlong *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*local_70 + 0x10))();
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,local_38);
    }
  }
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar2 = *(uint *)(param_1 + 0x10) & 0x13 | local_3c;
    *(uint *)(param_1 + 0x10) = uVar2;
    uVar2 = uVar2 & *(uint *)(param_1 + 0x14);
    if (uVar2 != local_34) {
      puVar6 = &DAT_1802a22ac;
      if ((uVar2 & 2) == local_34) {
        puVar6 = &DAT_1802a22c8;
      }
      if ((*(uint *)(param_1 + 0x14) & local_3c) != local_34) {
        puVar6 = &DAT_1802a2290;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_50 = local_38;
      local_48 = &PTR_vftable_18020e948;
      std::ios_base::failure::failure((failure *)&stack0xffffffffffffff88,puVar6,&stack0xffffffffffffffb0);
      FUN_1801dd110((failure *)&stack0xffffffffffffff88,&DAT_1802536a8);
    }
  }
  if (param_3 != '\0') {
    FUN_1801d9b1c(param_1);
  }
  return;
}



void Unwind_18008b340(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x70));
    }
  }
  return;
}



void Unwind_18008b390(void)

{
  Unwind_1801dd394();
}



undefined8 * FUN_18008bba0(undefined8 *param_1,undefined4 *param_2,char *param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 ***local_88;
  undefined8 uStack_80;
  size_t local_78;
  ulonglong local_70;
  uintptr_t local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_60 = 0;
  local_58 = 1;
  local_50 = 0x28;
  local_88 = (undefined8 ****)0x0;
  uStack_80 = 0;
  sVar1 = strlen(param_3);
  if ((longlong)sVar1 < (longlong)local_60) {
    FUN_180002ac0();
  }
  if (sVar1 < 0x10) {
    ppppuVar5 = &local_88;
    uVar4 = local_48;
  }
  else {
    uVar2 = local_48 | sVar1;
    uVar4 = 0x16;
    if (0x16 < uVar2) {
      uVar4 = uVar2;
    }
    if (uVar2 < 0xfff) {
      ppppuVar5 = (undefined8 ****)FUN_1801d61c8(local_58 + uVar4);
      local_88 = ppppuVar5;
    }
    else {
      pppuVar3 = (undefined8 ***)FUN_1801d61c8(local_50 + uVar4);
      ppppuVar5 = (undefined8 ****)((longlong)pppuVar3 + 0x27U & 0xffffffffffffffe0);
      ppppuVar5[-1] = pppuVar3;
      local_88 = ppppuVar5;
    }
  }
  local_78 = sVar1;
  local_70 = uVar4;
  FUN_1802079d0(ppppuVar5,param_3,sVar1);
  *(undefined1 *)((longlong)ppppuVar5 + sVar1) = 0;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  FUN_180066340(param_1,&local_98,&local_88);
  if (local_48 < local_70) {
    uVar4 = local_58 + local_70;
    ppppuVar5 = (undefined8 ****)local_88;
    if (0xfff < uVar4) {
      ppppuVar5 = (undefined8 ****)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar5))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_60);
      }
      uVar4 = local_70 + local_50;
    }
    thunk_FUN_1801f42e0(ppppuVar5,uVar4);
  }
  *param_1 = &std::system_error::vftable;
  return param_1;
}



void Unwind_18008bdd0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x40);
  return;
}



longlong * FUN_18008bf60(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  _Lockit local_c0 [104];
  ulonglong local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_3c;
  _Lockit local_38 [4];
  int local_34;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_58 = 0;
  local_3c = 1;
  local_34 = 0;
  local_50 = 0x30;
  std::_Lockit::_Lockit(local_38,0);
  plVar1 = DAT_1802a1e80;
  if (DAT_1802a9360 == local_58) {
    std::_Lockit::_Lockit(local_c0,local_34);
    if (DAT_1802a9360 == local_58) {
      DAT_1802a9360 = (longlong)local_3c + (longlong)DAT_1802a9348;
      DAT_1802a9348 = (int)DAT_1802a9360;
    }
    std::_Lockit::~_Lockit(local_c0);
  }
  uVar2 = DAT_1802a9360;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((((*(ulonglong *)(lVar3 + 0x18) <= DAT_1802a9360) ||
       (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + DAT_1802a9360 * 8), plVar5 == (longlong *)0x0)) &&
      ((*(char *)(lVar3 + 0x24) != '\x01' ||
       ((lVar3 = FUN_1801d8b40(), *(ulonglong *)(lVar3 + 0x18) <= uVar2 ||
        (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + uVar2 * 8), plVar5 == (longlong *)0x0)))))) &&
     (plVar5 = plVar1, plVar1 == (longlong *)0x0)) {
    local_48 = (longlong *)FUN_1801d61c8(local_50);
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 == 0) {
      puVar4 = &DAT_18020c3c0;
    }
    else {
      puVar4 = (undefined *)(lVar3 + 0x30);
      if (*(undefined **)(lVar3 + 0x28) != (undefined *)0x0) {
        puVar4 = *(undefined **)(lVar3 + 0x28);
      }
    }
    FUN_180032140(local_c0,puVar4);
    plVar1 = local_48;
    *(int *)(local_48 + 1) = local_34;
    *local_48 = (longlong)&std::ctype<char>::vftable;
    FUN_1801d9e70(local_48 + 2);
    FUN_1800322f0(local_c0);
    FUN_1801d8b04(plVar1);
    plVar5 = local_48;
    (**(code **)(*local_48 + 8))(local_48);
    DAT_1802a1e80 = plVar5;
  }
  std::_Lockit::~_Lockit(local_38);
  return plVar5;
}



void Unwind_18008c110(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0xb0));
  return;
}



void Unwind_18008c140(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x98));
  return;
}



void Unwind_18008c170(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0xa0))(*(undefined8 **)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xac));
  return;
}



ios_base * FUN_18008c860(ios_base *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1 + -0x10,0x70);
  }
  return param_1 + -0x10;
}



void Unwind_18008c8d0(void)

{
  Unwind_1801dd394();
}



void FUN_18008c8f0(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  uint local_84;
  undefined4 local_80 [2];
  undefined **local_78;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  local_90 = 0x4d17663dc9c6fbfb;
  local_98 = 0x6980c4cab2c1c8d2;
  do {
    while( true ) {
      while( true ) {
        uVar4 = local_90 ^ 0x25b8c7640aa60001;
        uVar1 = local_90 ^ local_98;
        local_98 = local_98 ^ 0x25b8c7640aa60001;
        local_90 = uVar4;
        if ((longlong)uVar1 < 0x2497a2f77b073329) break;
        if (uVar1 == 0x2497a2f77b073329) {
          local_9c = 4;
          local_a0 = 0;
          uVar2 = local_9c;
          if (*(longlong *)(param_1 + 0x48) != 0) {
            uVar2 = 0;
          }
          uVar2 = param_2 & 0x17 | uVar2;
          *(uint *)(param_1 + 0x10) = uVar2;
          local_84 = uVar2 & *(uint *)(param_1 + 0x14);
          local_90 = 0x3405dc53511601a;
          if (local_84 == 0) {
            local_90 = 0xeb489ea84047f639;
          }
          local_98 = 0x90657b8b2fdce469;
        }
        else if (uVar1 == 0x7b2de5236f9b1250) {
          if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_c8)) {
            return;
          }
        }
      }
      if (uVar1 != 0x9325264e1acd8473) break;
      local_90 = 0x28ae4f23d7c6785d;
      if (param_3 != '\0') {
        local_90 = 0xeb5ba34d69026d5;
      }
      local_98 = 0xaebb8ddbea4b6772;
    }
    if (uVar1 == 0x8615c2f83d8d1f2f) {
      puVar3 = &DAT_1802a22ac;
      if ((local_84 & 2) == local_a0) {
        puVar3 = &DAT_1802a22c8;
      }
      if ((local_9c & local_84) != local_a0) {
        puVar3 = &DAT_1802a2290;
      }
      local_a8 = &DAT_1802a22e0;
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15);
      local_a8 = &DAT_1802a22c4;
      FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16);
      local_a8 = &DAT_1802a22a8;
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15);
      local_80[0] = 1;
      local_78 = &PTR_vftable_18020e948;
      std::ios_base::failure::failure((failure *)&stack0xffffffffffffff90,puVar3,local_80);
      FUN_1801dd110((failure *)&stack0xffffffffffffff90,&DAT_1802536a8);
    }
  } while (uVar1 != 0xa00e37ef3cdb41a7);
  FUN_1801dd110(0,0);
}



longlong * FUN_18008cbd0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  failure_vftable *local_b8 [5];
  undefined4 local_90 [2];
  undefined **local_88;
  longlong local_80;
  longlong *local_78;
  bool local_70;
  longlong *local_68;
  uint local_5c;
  longlong local_58;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 4;
  local_58 = 0;
  local_4c = -1;
  local_80 = -1;
  local_44 = 0;
  lVar7 = *param_1;
  lVar11 = (longlong)*(int *)(lVar7 + 4);
  uVar6 = *(ulonglong *)((longlong)param_1 + lVar11 + 0x28);
  lVar12 = uVar6 - param_3;
  lVar9 = 0;
  if (param_3 <= uVar6 && lVar12 != 0) {
    lVar9 = lVar12;
  }
  if ((longlong)uVar6 < 1) {
    lVar9 = 0;
  }
  plVar2 = *(longlong **)((longlong)param_1 + lVar11 + 0x48);
  local_78 = param_1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
    lVar7 = *param_1;
    lVar11 = (longlong)*(int *)(lVar7 + 4);
  }
  if (*(uint *)((longlong)param_1 + lVar11 + 0x10) == local_44) {
    plVar2 = *(longlong **)((longlong)param_1 + lVar11 + 0x50);
    if ((plVar2 == (longlong *)0x0) || (plVar2 == param_1)) {
      local_70 = true;
    }
    else {
      FUN_18008d170();
      lVar7 = *param_1;
      local_70 = *(uint *)((longlong)param_1 + (longlong)*(int *)(lVar7 + 4) + 0x10) == local_44;
      uVar5 = local_48;
      if (!local_70) goto LAB_18008ce76;
    }
    lVar7 = (longlong)*(int *)(lVar7 + 4);
    local_68 = param_1;
    if ((lVar9 != local_58) && ((*(uint *)((longlong)param_1 + lVar7 + 0x18) & 0x1c0) != 0x40)) {
      do {
        lVar9 = lVar12;
        plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
        uVar1 = *(undefined1 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
        if (*(longlong *)plVar2[8] == 0) {
LAB_18008cd7b:
          local_5c = local_44;
          iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
          param_1 = local_68;
          if (iVar4 == local_4c) {
            uVar5 = local_48;
            uVar8 = local_48;
            if (lVar9 != local_58) goto LAB_18008ce11;
            goto LAB_18008ce65;
          }
        }
        else {
          iVar4 = *(int *)plVar2[0xb];
          if (iVar4 <= (int)local_44) goto LAB_18008cd7b;
          *(int *)plVar2[0xb] = iVar4 + local_4c;
          puVar3 = *(undefined1 **)plVar2[8];
          *(undefined1 **)plVar2[8] = puVar3 + 1;
          *puVar3 = uVar1;
        }
        lVar12 = lVar9 + local_80;
      } while (lVar9 + local_80 != local_58);
      lVar7 = (longlong)*(int *)(*param_1 + 4);
      lVar9 = local_58;
    }
    plVar2 = *(longlong **)((longlong)param_1 + lVar7 + 0x48);
    local_5c = local_44;
    uVar6 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3);
    param_1 = local_68;
    uVar5 = local_48;
    uVar8 = local_44;
    if (uVar6 == param_3) {
LAB_18008ce0b:
      uVar5 = uVar8;
      if (lVar9 != local_58) {
LAB_18008ce11:
        do {
          plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
          uVar1 = *(undefined1 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58);
          if (*(longlong *)plVar2[8] != 0) {
            iVar4 = *(int *)plVar2[0xb];
            if ((int)local_44 < iVar4) goto LAB_18008cdf0;
          }
          local_5c = uVar8;
          iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
          param_1 = local_68;
          uVar5 = local_48;
          if ((iVar4 == local_4c) || (lVar9 = lVar9 + local_80, uVar5 = uVar8, lVar9 == local_58)) break;
        } while( true );
      }
    }
LAB_18008ce65:
    *(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28) = local_58;
  }
  else {
    local_70 = false;
    uVar5 = local_48;
  }
LAB_18008ce76:
  lVar7 = (longlong)*(int *)(*param_1 + 4);
  uVar8 = local_48;
  if (*(longlong *)((longlong)param_1 + lVar7 + 0x48) != 0) {
    uVar8 = local_44;
  }
  uVar8 = (uVar5 | *(uint *)((longlong)param_1 + lVar7 + 0x10)) & 0x17 | uVar8;
  *(uint *)((longlong)param_1 + lVar7 + 0x10) = uVar8;
  uVar8 = uVar8 & *(uint *)((longlong)param_1 + lVar7 + 0x14);
  if (uVar8 != local_44) {
    puVar10 = &DAT_1802a22ac;
    if ((uVar8 & 2) == local_44) {
      puVar10 = &DAT_1802a22c8;
    }
    if ((local_48 & uVar8) != local_44) {
      puVar10 = &DAT_1802a2290;
    }
    FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
    FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
    FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
    local_90[0] = 1;
    local_88 = &PTR_vftable_18020e948;
    FUN_18008bba0(local_b8,local_90,puVar10);
    local_b8[0] = &std::ios_base::failure::vftable;
    FUN_1801dd110(local_b8,&DAT_1802536a8);
  }
  uVar5 = __uncaught_exceptions();
  plVar2 = local_78;
  if (uVar5 == local_44) {
    FUN_18008d4f0(local_78);
  }
  plVar2 = *(longlong **)((longlong)plVar2 + (longlong)*(int *)(*plVar2 + 4) + 0x48);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
LAB_18008cdf0:
  *(int *)plVar2[0xb] = iVar4 + local_4c;
  puVar3 = *(undefined1 **)plVar2[8];
  *(undefined1 **)plVar2[8] = puVar3 + 1;
  *puVar3 = uVar1;
  lVar9 = lVar9 + local_80;
  goto LAB_18008ce0b;
}



void Unwind_18008d000(undefined8 param_1,longlong param_2)

{
  FUN_18008d490(param_2 + 0x70);
  return;
}



undefined * Catch_All_18008d040(undefined8 param_1,longlong param_2)

{
  FUN_18008ad50((longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4) + (longlong)*(longlong **)(param_2 + 0x80),
                *(undefined4 *)(param_2 + 0xa0),1);
  return &DAT_18008cfeb;
}



void Unwind_18008d090(undefined8 param_1,longlong param_2)

{
  FUN_18008d0f0(param_2 + 0x70);
  return;
}



void Unwind_18008d0d0(void)

{
  Unwind_1801dd394();
}



void FUN_18008d0f0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;

  iVar2 = __uncaught_exceptions();
  if (iVar2 == 0) {
    FUN_18008d4f0(*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void Unwind_18008d150(void)

{
  Unwind_1801dd394();
}



longlong * FUN_18008d170(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined *puVar6;
  failure_vftable *local_88 [5];
  undefined4 local_60 [2];
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  bool local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_30 = 4;
  local_2c = 0;
  plVar1 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
  if (plVar1 == (longlong *)0x0) {
    return param_1;
  }
  local_48 = param_1;
  (**(code **)(*plVar1 + 8))(plVar1);
  if (*(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) == local_2c) {
    plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x50);
    if ((plVar2 == (longlong *)0x0) || (plVar2 == param_1)) {
      local_40 = true;
    }
    else {
      FUN_18008d170();
      local_40 = *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) == local_2c;
      if (!local_40) goto LAB_18008d286;
    }
    local_50 = param_1;
    iVar3 = (**(code **)(*plVar1 + 0x68))(plVar1);
    local_34 = local_30;
    if (iVar3 != -1) {
      local_34 = local_2c;
    }
    lVar5 = (longlong)*(int *)(*local_50 + 4);
    uVar4 = local_30;
    if (*(longlong *)((longlong)local_50 + lVar5 + 0x48) != 0) {
      uVar4 = local_2c;
    }
    uVar4 = *(uint *)((longlong)local_50 + lVar5 + 0x10) & 0x17 | uVar4 | local_34;
    *(uint *)((longlong)local_50 + lVar5 + 0x10) = uVar4;
    uVar4 = uVar4 & *(uint *)((longlong)local_50 + lVar5 + 0x14);
    param_1 = local_50;
    if (uVar4 != local_2c) {
      puVar6 = &DAT_1802a22ac;
      if ((uVar4 & 2) == local_2c) {
        puVar6 = &DAT_1802a22c8;
      }
      if ((local_30 & uVar4) != local_2c) {
        puVar6 = &DAT_1802a2290;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_60[0] = 1;
      local_58 = &PTR_vftable_18020e948;
      FUN_18008bba0(local_88,local_60,puVar6);
      local_88[0] = &std::ios_base::failure::vftable;
      FUN_1801dd110(local_88,&DAT_1802536a8);
    }
  }
  else {
    local_40 = false;
  }
LAB_18008d286:
  uVar4 = __uncaught_exceptions();
  plVar1 = local_48;
  if (uVar4 == local_2c) {
    FUN_18008d4f0(local_48);
  }
  plVar1 = *(longlong **)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



void Unwind_18008d3c0(undefined8 param_1,longlong param_2)

{
  FUN_18008d490(param_2 + 0x70);
  return;
}



undefined8 Catch_All_18008d3f0(undefined8 param_1,longlong param_2)

{
  FUN_18008ad50((longlong)*(int *)(**(longlong **)(param_2 + 0x68) + 4) + (longlong)*(longlong **)(param_2 + 0x68),
                *(undefined4 *)(param_2 + 0x88),1);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x8c);
  return 0x18008d247;
}



void Unwind_18008d440(undefined8 param_1,longlong param_2)

{
  FUN_18008d0f0(param_2 + 0x70);
  return;
}



void Unwind_18008d470(void)

{
  Unwind_1801dd394();
}



void FUN_18008d490(longlong *param_1)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void Unwind_18008d4d0(void)

{
  Unwind_1801dd394();
}



void FUN_18008d4f0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  failure_vftable *local_70 [5];
  undefined4 local_48 [2];
  undefined **local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_34 = 4;
  local_30 = 2;
  local_2c = 0;
  lVar4 = (longlong)*(int *)(*param_1 + 4);
  if ((*(int *)((longlong)param_1 + lVar4 + 0x10) == 0) && ((*(uint *)((longlong)param_1 + lVar4 + 0x18) & 2) != 0)) {
    iVar2 = (**(code **)(**(longlong **)((longlong)param_1 + lVar4 + 0x48) + 0x68))();
    if (iVar2 == -1) {
      lVar4 = (longlong)*(int *)(*param_1 + 4);
      uVar3 = *(uint *)((longlong)param_1 + lVar4 + 0x10) & 0x13 | local_34;
      *(uint *)((longlong)param_1 + lVar4 + 0x10) = uVar3;
      uVar1 = *(uint *)((longlong)param_1 + lVar4 + 0x14);
      uVar3 = uVar3 & uVar1;
      if (uVar3 != local_2c) {
        puVar5 = &DAT_1802a22ac;
        if ((uVar3 & local_30) == local_2c) {
          puVar5 = &DAT_1802a22c8;
        }
        if ((uVar1 & local_34) != local_2c) {
          puVar5 = &DAT_1802a2290;
        }
        FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
        FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
        FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
        local_48[0] = 1;
        local_40 = &PTR_vftable_18020e948;
        FUN_18008bba0(local_70,local_48,puVar5);
        local_70[0] = &std::ios_base::failure::vftable;
        FUN_1801dd110(local_70,&DAT_1802536a8);
      }
    }
  }
  return;
}



undefined8 Catch_All_18008d690(void)

{
  return 0x18008d591;
}



void Unwind_18008d6c0(void)

{
  Unwind_1801dd394();
}



void FUN_18008d6e0(longlong *param_1,undefined8 param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  failure_vftable *local_a8 [5];
  uint local_80 [2];
  undefined **local_78;
  longlong *local_70;
  undefined4 local_64;
  longlong *local_60;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_58 = 4;
  local_54 = 1;
  local_50 = -0xb0;
  local_41 = 0;
  local_4c = 2;
  local_48 = 0;
  local_64 = 0;
  if (param_5 == 0) {
    puVar5 = (undefined *)*param_1;
  }
  else {
    puVar5 = &DAT_18020e8f8;
    *param_1 = (longlong)&DAT_18020e8f8;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x16] = (longlong)&PTR_FUN_18020e938;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(puVar5 + 4)) = &PTR_LAB_18020e8f0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4) + -0xb0;
  plVar1 = param_1 + 2;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_18020e958;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  local_60 = param_1;
  FUN_18008b0e0((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,plVar1,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_18020e8f0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = local_50 + *(int *)(*param_1 + 4);
  param_1[2] = (longlong)&PTR_FUN_18020e870;
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
  lVar2 = FUN_1801d61c8(0x10);
  uVar3 = FUN_1801d8b48(1);
  *(undefined8 *)(lVar2 + 8) = uVar3;
  local_60[0xe] = lVar2;
  local_60[2] = (longlong)&PTR_FUN_18020e7f0;
  *(undefined1 *)((longlong)local_60 + 0x8c) = local_41;
  *(undefined1 *)((longlong)local_60 + 0x81) = local_41;
  local_60[5] = (longlong)(local_60 + 3);
  local_60[6] = (longlong)(local_60 + 4);
  local_60[9] = (longlong)(local_60 + 7);
  local_60[10] = (longlong)(local_60 + 8);
  local_60[0xc] = (longlong)(local_60 + 0xb);
  local_60[0xd] = (longlong)local_60 + 0x5c;
  *(uint *)((longlong)local_60 + 0x5c) = local_48;
  *(uint *)(local_60 + 0xb) = local_48;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  local_60[0x12] = 0;
  *(undefined8 *)((longlong)local_60 + 0x84) = DAT_1802a1e70;
  local_60[0xf] = 0;
  local_70 = plVar1;
  lVar2 = FUN_18008ab10(plVar1,param_2,param_3 | local_54,param_4);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*local_60 + 4);
    uVar4 = local_58;
    if (*(longlong *)((longlong)local_60 + lVar2 + 0x48) != 0) {
      uVar4 = local_48;
    }
    uVar6 = *(uint *)((longlong)local_60 + lVar2 + 0x10) & 0x15 | uVar4 | local_4c;
    *(uint *)((longlong)local_60 + lVar2 + 0x10) = uVar6;
    uVar4 = *(uint *)((longlong)local_60 + lVar2 + 0x14);
    uVar6 = uVar6 & uVar4;
    if (uVar6 != local_48) {
      puVar5 = &DAT_1802a22ac;
      if ((uVar4 & local_4c) == local_48) {
        puVar5 = &DAT_1802a22c8;
      }
      if ((uVar6 & local_58) != local_48) {
        puVar5 = &DAT_1802a2290;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_80[0] = local_54;
      local_78 = &PTR_vftable_18020e948;
      FUN_18008bba0(local_a8,local_80,puVar5);
      local_a8[0] = &std::ios_base::failure::vftable;
      FUN_1801dd110(local_a8,&DAT_1802536a8);
    }
  }
  return;
}



void Unwind_18008dab0(undefined8 param_1,longlong param_2)

{
  FUN_180078d60(*(undefined8 *)(param_2 + 0x68));
  return;
}



void Unwind_18008daf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;

  if (*(int *)(param_2 + 0x100) != *(int *)(param_2 + 0x74)) {
    lVar1 = *(longlong *)(param_2 + 0x78);
    *(undefined ***)(lVar1 + 0xb0) = &PTR_FUN_18020e8e8;
    std::ios_base::_Ios_base_dtor((ios_base *)(lVar1 + 0xb0));
  }
  return;
}



void Unwind_18008db50(void)

{
  Unwind_1801dd394();
}



ios_base * FUN_18008db90(ios_base *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1 + -0x18,0x78);
  }
  return param_1 + -0x18;
}



void Unwind_18008dc00(void)

{
  Unwind_1801dd394();
}



longlong * FUN_18008dc20(longlong *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined *puVar10;
  uint uVar11;
  bool bVar12;
  failure_vftable *local_b8 [5];
  uint local_90 [2];
  undefined **local_88;
  longlong *local_80;
  char local_78;
  ulonglong local_70;
  longlong local_68;
  uint local_5c;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_41;
  uint local_40;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_5c = 4;
  local_70 = 0xf;
  local_68 = 1;
  local_48 = 0xffffffff;
  local_50 = 1;
  local_41 = 0;
  local_4c = 2;
  local_40 = 0;
  plVar2 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
  local_80 = param_1;
  local_58 = param_1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  local_78 = FUN_18008e150(local_58,1);
  uVar6 = local_4c;
  if (local_78 != '\0') {
    param_2[2] = 0;
    puVar8 = param_2;
    if (local_70 < (ulonglong)param_2[3]) {
      puVar8 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar8 = local_41;
    plVar2 = *(longlong **)((longlong)local_58 + (longlong)*(int *)(*local_58 + 4) + 0x48);
    if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] <= (int)local_40)) {
      local_39 = 0;
      uVar7 = (**(code **)(*plVar2 + 0x30))();
    }
    else {
      uVar7 = (uint)**(byte **)plVar2[7];
    }
    bVar12 = false;
    while( true ) {
      uVar6 = local_40;
      uVar11 = local_50;
      if (uVar7 == local_48) break;
      if (uVar7 == (param_3 & 0xff)) {
        plVar2 = *(longlong **)((longlong)local_58 + (longlong)*(int *)(*local_58 + 4) + 0x48);
        if (*(longlong *)plVar2[7] != 0) {
          iVar1 = *(int *)plVar2[10];
          if ((int)local_40 < iVar1) {
            *(int *)plVar2[10] = iVar1 + local_48;
            *(longlong *)plVar2[7] = *(longlong *)plVar2[7] + 1;
            goto LAB_18008df27;
          }
        }
        local_39 = 1;
        (**(code **)(*plVar2 + 0x38))();
        goto LAB_18008df27;
      }
      uVar3 = param_2[2];
      uVar11 = local_4c;
      if (0x7ffffffffffffffe < uVar3) break;
      uVar4 = param_2[3];
      if (uVar3 < uVar4) {
        param_2[2] = local_68 + uVar3;
        puVar8 = param_2;
        if (local_70 < uVar4) {
          puVar8 = (undefined8 *)*param_2;
        }
        *(char *)((longlong)puVar8 + uVar3) = (char)uVar7;
        *(undefined1 *)((longlong)puVar8 + local_68 + uVar3) = local_41;
      }
      else {
        local_39 = bVar12;
        FUN_18006a970(param_2,local_68,uVar4,uVar7);
      }
      plVar2 = *(longlong **)((longlong)local_58 + (longlong)*(int *)(*local_58 + 4) + 0x48);
      if (*(longlong *)plVar2[7] == 0) {
LAB_18008de60:
        local_39 = 1;
        uVar6 = (**(code **)(*plVar2 + 0x38))(plVar2);
        bVar12 = true;
        uVar7 = local_48;
        if (uVar6 != local_48) {
LAB_18008de80:
          if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] <= (int)local_40)) {
            local_39 = 1;
            bVar12 = true;
            uVar7 = (**(code **)(*plVar2 + 0x30))(plVar2);
          }
          else {
            bVar12 = true;
            uVar7 = (uint)**(byte **)plVar2[7];
          }
        }
      }
      else {
        puVar5 = (uint *)plVar2[10];
        uVar6 = *puVar5;
        if ((int)uVar6 <= (int)local_50) {
          if (uVar6 != local_50) goto LAB_18008de60;
          *puVar5 = local_40;
          *(longlong *)plVar2[7] = *(longlong *)plVar2[7] + 1;
          goto LAB_18008de80;
        }
        *puVar5 = uVar6 + local_48;
        lVar9 = *(longlong *)plVar2[7];
        *(longlong *)plVar2[7] = lVar9 + 1;
        uVar7 = (uint)*(byte *)(lVar9 + 1);
        bVar12 = true;
      }
    }
    uVar6 = 0;
    if (!bVar12) {
      uVar6 = local_4c;
    }
    uVar6 = uVar11 | uVar6;
  }
LAB_18008df27:
  lVar9 = (longlong)*(int *)(*local_58 + 4);
  uVar7 = local_5c;
  if (*(longlong *)((longlong)local_58 + lVar9 + 0x48) != 0) {
    uVar7 = local_40;
  }
  uVar7 = (uVar6 | *(uint *)((longlong)local_58 + lVar9 + 0x10)) & 0x17 | uVar7;
  *(uint *)((longlong)local_58 + lVar9 + 0x10) = uVar7;
  uVar7 = uVar7 & *(uint *)((longlong)local_58 + lVar9 + 0x14);
  if (uVar7 == local_40) {
    plVar2 = *(longlong **)((longlong)local_80 + (longlong)*(int *)(*local_80 + 4) + 0x48);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return local_58;
  }
  puVar10 = &DAT_1802a22ac;
  if ((uVar7 & local_4c) == local_40) {
    puVar10 = &DAT_1802a22c8;
  }
  if ((local_5c & uVar7) != local_40) {
    puVar10 = &DAT_1802a2290;
  }
  FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
  FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
  FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
  local_90[0] = local_50;
  local_88 = &PTR_vftable_18020e948;
  FUN_18008bba0(local_b8,local_90,puVar10);
  local_b8[0] = &std::ios_base::failure::vftable;
  FUN_1801dd110(local_b8,&DAT_1802536a8);
}



undefined * Catch_All_18008e080(undefined8 param_1,longlong param_2)

{
  FUN_18008ad50((longlong)*(int *)(**(longlong **)(param_2 + 0x90) + 4) + (longlong)*(longlong **)(param_2 + 0x90),
                *(undefined4 *)(param_2 + 0x8c),1);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0xa8);
  return &DAT_18008df12;
}



void Unwind_18008e0d0(undefined8 param_1,longlong param_2)

{
  FUN_18008d490(param_2 + 0x68);
  return;
}



void Unwind_18008e100(undefined8 param_1,longlong param_2)

{
  FUN_18008d490(param_2 + 0x68);
  return;
}



void Unwind_18008e130(void)

{
  Unwind_1801dd394();
}



undefined4 FUN_18008e150(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong *local_78;
  uint local_58;
  undefined **local_50;
  longlong *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uintptr_t local_28;

  local_28 = 0xfffffffffffffffe;
  local_34 = 4;
  local_38 = 0xffffffff;
  local_30 = 1;
  local_3c = 2;
  local_2c = 0;
  lVar9 = (longlong)*(int *)(*param_1 + 4);
  uVar6 = *(uint *)((longlong)param_1 + lVar9 + 0x10);
  if (uVar6 == 0) {
    local_48 = param_1;
    if (*(longlong *)((longlong)param_1 + lVar9 + 0x50) != 0) {
      FUN_18008d170();
    }
    plVar1 = local_48;
    if ((param_2 == '\0') &&
       ((*(uint *)((longlong)local_48 + (longlong)*(int *)(*local_48 + 4) + 0x18) & local_30) != local_2c)) {
      local_78 = *(longlong **)(*(longlong *)((longlong)local_48 + (longlong)*(int *)(*local_48 + 4) + 0x40) + 8);
      (**(code **)(*local_78 + 8))();
      lVar9 = FUN_18008bf60(&stack0xffffffffffffff80);
      if ((local_78 != (longlong *)0x0) &&
         (puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)(puVar7,local_30);
      }
      plVar1 = *(longlong **)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x48);
      if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] <= (int)local_2c)) {
        uVar6 = (**(code **)(*plVar1 + 0x30))();
      }
      else {
        uVar6 = (uint)**(byte **)plVar1[7];
      }
LAB_18008e2d7:
      while (uVar6 != local_38) {
        if ((*(ushort *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)(uVar6 & 0xff) * 2) & 0x48) == 0) goto LAB_18008e3f2;
        plVar1 = *(longlong **)((longlong)local_48 + (longlong)*(int *)(*local_48 + 4) + 0x48);
        if (*(longlong *)plVar1[7] == 0) goto LAB_18008e350;
        puVar3 = (uint *)plVar1[10];
        uVar6 = *puVar3;
        if ((int)uVar6 <= (int)local_30) {
          if (uVar6 != local_30) goto LAB_18008e350;
          *puVar3 = local_2c;
          *(longlong *)plVar1[7] = *(longlong *)plVar1[7] + 1;
          goto LAB_18008e366;
        }
        *puVar3 = uVar6 + local_38;
        lVar2 = *(longlong *)plVar1[7];
        *(longlong *)plVar1[7] = lVar2 + 1;
        uVar6 = (uint)*(byte *)(lVar2 + 1);
      }
      lVar9 = (longlong)*(int *)(*local_48 + 4);
      uVar6 = local_34;
      if (*(longlong *)((longlong)local_48 + lVar9 + 0x48) != 0) {
        uVar6 = local_2c;
      }
      uVar5 = (*(uint *)((longlong)local_48 + lVar9 + 0x10) & 0x14 | uVar6) + 3;
      *(uint *)((longlong)local_48 + lVar9 + 0x10) = uVar5;
      uVar6 = *(uint *)((longlong)local_48 + lVar9 + 0x14);
      uVar5 = uVar5 & uVar6;
      if (uVar5 != local_2c) {
        puVar8 = &DAT_1802a22ac;
        if ((uVar6 & local_3c) == local_2c) {
          puVar8 = &DAT_1802a22c8;
        }
        bVar10 = (uVar5 & local_34) == local_2c;
        goto LAB_18008e436;
      }
    }
LAB_18008e3f2:
    uVar6 = *(uint *)((longlong)local_48 + (longlong)*(int *)(*local_48 + 4) + 0x10);
    uVar4 = CONCAT31((int3)(uVar6 >> 8),uVar6 == local_2c);
  }
  else {
    uVar5 = 4;
    if (*(longlong *)((longlong)param_1 + lVar9 + 0x48) != 0) {
      uVar5 = 0;
    }
    uVar5 = uVar6 & 0x15 | uVar5 | 2;
    *(uint *)((longlong)param_1 + lVar9 + 0x10) = uVar5;
    uVar6 = *(uint *)((longlong)param_1 + lVar9 + 0x14);
    uVar5 = uVar5 & uVar6;
    if (uVar5 != 0) {
      puVar8 = &DAT_1802a22ac;
      if ((uVar6 & 2) == 0) {
        puVar8 = &DAT_1802a22c8;
      }
      bVar10 = (uVar5 & 4) == 0;
LAB_18008e436:
      if (!bVar10) {
        puVar8 = &DAT_1802a2290;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_58 = local_30;
      local_50 = &PTR_vftable_18020e948;
      std::ios_base::failure::failure((failure *)&stack0xffffffffffffff80,puVar8,&stack0xffffffffffffffa8);
      FUN_1801dd110((failure *)&stack0xffffffffffffff80,&DAT_1802536a8);
    }
    uVar4 = 0;
  }
  return uVar4;
LAB_18008e350:
  uVar5 = (**(code **)(*plVar1 + 0x38))(plVar1);
  uVar6 = local_38;
  if (uVar5 != local_38) {
LAB_18008e366:
    if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] <= (int)local_2c)) {
      uVar6 = (**(code **)(*plVar1 + 0x30))(plVar1);
    }
    else {
      uVar6 = (uint)**(byte **)plVar1[7];
    }
  }
  goto LAB_18008e2d7;
}



void Unwind_18008e510(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x78));
    }
  }
  return;
}



undefined8 Catch_All_18008e550(undefined8 param_1,longlong param_2)

{
  FUN_18008ad50((longlong)*(int *)(**(longlong **)(param_2 + 0x60) + 4) + (longlong)*(longlong **)(param_2 + 0x60),
                *(undefined4 *)(param_2 + 0x74),1);
  return 0x18008e3f2;
}



undefined8 * FUN_18008e590(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong uVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar5 = 0xf;
  if (0xf < sVar3 + sVar2) {
    FUN_180002240(param_1,sVar3 + sVar2);
    param_1[2] = 0;
    uVar5 = param_1[3];
  }
  sVar2 = strlen(param_2);
  if (uVar5 < sVar2) {
    FUN_180066dd0(param_1,sVar2);
  }
  else {
    param_1[2] = sVar2;
    puVar4 = param_1;
    if (0xf < uVar5) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar4,param_2,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2) = 0;
  }
  _Str = (char *)*param_3;
  sVar2 = strlen(_Str);
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < sVar2) {
    FUN_180066dd0(param_1,sVar2,param_1,_Str,sVar2);
  }
  else {
    param_1[2] = sVar2 + lVar1;
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar4,_Str,sVar2);
    *(undefined1 *)((longlong)puVar4 + sVar2 + lVar1) = 0;
  }
  return param_1;
}



void Unwind_18008e700(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_18008e730(longlong *param_1,longlong *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *_Buf1;
  ulonglong uVar13;
  void *pvVar14;
  ulonglong _Size;
  char local_103;
  char local_102;
  byte local_101;
  ulonglong local_100;
  ulonglong local_f8;
  int local_ec;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  char *local_70;
  longlong local_68;
  longlong local_60;
  uint local_58;
  longlong *local_50;
  undefined8 local_48;

  local_f8 = 0x57b73dc6157a02e2;
  local_100 = 0x99144c50bb827c84;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar13 = local_f8 ^ 0x31dca60999c18630;
            uVar11 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0x31dca60999c18630;
            local_f8 = uVar13;
            if ((longlong)uVar11 < 0x16b13b14fe9f8f5a) break;
            if ((longlong)uVar11 < 0x304d81d76e66d675) {
              if (uVar11 == 0x16b13b14fe9f8f5a) {
                local_50 = param_1;
                plVar10 = (longlong *)FUN_1801d61c8(0x50);
                uVar1 = *(undefined4 *)(param_3 + 4);
                uVar2 = *(undefined4 *)(param_3 + 8);
                uVar3 = *(undefined4 *)(param_3 + 0xc);
                uVar4 = *(undefined4 *)(param_3 + 0x10);
                uVar5 = *(undefined4 *)(param_3 + 0x14);
                uVar6 = *(undefined4 *)(param_3 + 0x18);
                uVar7 = *(undefined4 *)(param_3 + 0x1c);
                *(undefined4 *)(plVar10 + 4) = *(undefined4 *)param_3;
                *(undefined4 *)((longlong)plVar10 + 0x24) = uVar1;
                *(undefined4 *)(plVar10 + 5) = uVar2;
                *(undefined4 *)((longlong)plVar10 + 0x2c) = uVar3;
                *(undefined4 *)(plVar10 + 6) = uVar4;
                *(undefined4 *)((longlong)plVar10 + 0x34) = uVar5;
                *(undefined4 *)(plVar10 + 7) = uVar6;
                *(undefined4 *)((longlong)plVar10 + 0x3c) = uVar7;
                *(longlong *)(param_3 + 0x10) = local_d8;
                *(ulonglong *)(param_3 + 0x18) = local_e8;
                *param_3 = local_103;
                *(char *)(plVar10 + 8) = local_103;
                plVar10[9] = 0;
                *plVar10 = local_d0;
                plVar10[1] = local_d0;
                plVar10[2] = local_d0;
                *(char *)(plVar10 + 3) = local_103;
                *(char *)((longlong)plVar10 + 0x19) = local_103;
                local_48 = 0;
                FUN_180085660(&local_50);
                local_60 = local_68;
                local_58 = local_dc;
                local_b8 = FUN_1800857e0(param_1,&local_60,plVar10);
                local_f8 = 0x2f59aef203c9d73c;
                local_100 = 0x30e73509a3dd33f3;
                local_102 = '\x01';
              }
              else if (uVar11 == 0x238cda88dd291e64) {
                uVar11 = *(ulonglong *)(local_98 + 0x30);
                if (local_e8 < *(ulonglong *)(local_98 + 0x38)) {
                  pvVar14 = *(void **)(local_98 + 0x20);
                }
                else {
                  pvVar14 = (void *)(local_98 + 0x20);
                }
                uVar13 = *(ulonglong *)(param_3 + 0x10);
                _Buf1 = param_3;
                if (local_e8 < *(ulonglong *)(param_3 + 0x18)) {
                  _Buf1 = *(char **)param_3;
                }
                _Size = uVar13;
                if (uVar11 < uVar13) {
                  _Size = uVar11;
                }
                iVar9 = memcmp(_Buf1,pvVar14,_Size);
                bVar8 = uVar11 <= uVar13;
                if (iVar9 != local_ec) {
                  bVar8 = -1 < iVar9;
                }
                local_102 = local_103;
                local_f8 = 0x46e4cd59f36f82a0;
                if (!bVar8) {
                  local_f8 = 0x6917d7753d1db01a;
                }
                local_100 = 0x595a56a2537b666f;
                local_b8 = local_98;
              }
              else if (uVar11 == 0x1fbe9bfba014e4cf) goto LAB_18008ed64;
            }
            else if (uVar11 == 0x304d81d76e66d675) {
              local_f8 = 0x54a900a538cd2c3a;
              if (param_1[1] != 0x333333333333333) {
                local_f8 = 0x44d7f547f8968203;
              }
              local_100 = 0x5266ce5306090d59;
            }
            else if (uVar11 == 0x69e81b48249ef909) {
              local_e0 = local_101 ^ 1;
              local_f8 = 0x7da214a90df22586;
              local_100 = 0xd22b8bb5fced102d;
              local_a8 = local_80;
              local_b0 = local_a0;
            }
          }
          if (-0x8f2cd2871f38f84 < (longlong)uVar11) break;
          if (uVar11 == 0xaf899f1cf11f35ab) {
            local_98 = local_a8;
            local_dc = local_e0;
            local_68 = local_b0;
            local_f8 = 0x2dc8af2e47d0eddf;
            if (*(char *)(local_a8 + 0x19) != local_103) {
              local_f8 = 0x3e09f471f49f25ce;
            }
            local_100 = 0xe4475a69af9f3bb;
          }
          else if (uVar11 == 0xcea37196aef87e66) {
            local_e8 = 0xf;
            local_d8 = 0;
            local_103 = '\0';
            local_ec = 0;
            local_d0 = *param_1;
            local_b0 = *(longlong *)(local_d0 + 8);
            local_f8 = 0x7300e0820a53bcca;
            if (*(char *)(local_b0 + 0x19) != '\0') {
              local_f8 = 0x2b844d497540f91c;
            }
            local_100 = 0x840dd255845fccb7;
            local_e0 = 0;
            local_a8 = local_d0;
            local_88 = local_b0;
          }
        }
        if (uVar11 != 0xf70d32d78e0c707d) break;
        local_78 = *(ulonglong *)(param_3 + 0x10);
        local_70 = param_3;
        if (local_e8 < *(ulonglong *)(param_3 + 0x18)) {
          local_70 = *(char **)param_3;
        }
        local_f8 = 0xfd7685af63e7e705;
        local_100 = 0xeb47b2aaf0c7a410;
        local_c8 = local_d0;
        local_c0 = local_88;
      }
      if (uVar11 != 0x1631370593204315) break;
      local_a0 = local_c0;
      uVar11 = *(ulonglong *)(local_c0 + 0x30);
      if (local_e8 < *(ulonglong *)(local_c0 + 0x38)) {
        pvVar14 = *(void **)(local_c0 + 0x20);
      }
      else {
        pvVar14 = (void *)(local_c0 + 0x20);
      }
      uVar13 = uVar11;
      if (local_78 < uVar11) {
        uVar13 = local_78;
      }
      iVar9 = memcmp(pvVar14,local_70,uVar13);
      local_101 = uVar11 < local_78;
      if (iVar9 != local_ec) {
        local_101 = iVar9 < local_ec;
      }
      lVar12 = 0x10;
      if ((bool)local_101 == false) {
        lVar12 = local_d8;
        local_c8 = local_c0;
      }
      local_c0 = *(longlong *)(local_c0 + lVar12);
      local_f8 = 0x9b5a309027ddd6e5;
      if (*(char *)(local_c0 + 0x19) != local_103) {
        local_f8 = 0xe4831cdd90636cf9;
      }
      local_100 = 0x8d6b0795b4fd95f0;
      local_80 = local_c8;
    }
  } while (uVar11 != 0x6cfcef63ec42163);
  FUN_180086cc0();
LAB_18008ed64:
  *param_2 = local_b8;
  *(char *)(param_2 + 1) = local_102;
  return;
}



undefined8 * FUN_18008ed90(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 uVar7;

  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar5 = (undefined8 *)FUN_1801e13d8();
  param_1[10] = puVar5;
  uVar7 = 0;
  if ((undefined1 *)puVar5[1] != (undefined1 *)0x0) {
    uVar7 = *(undefined1 *)puVar5[1];
  }
  *(undefined1 *)(param_1 + 0xb) = uVar7;
  uVar7 = 0;
  if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
    uVar7 = *(undefined1 *)*puVar5;
  }
  *(undefined1 *)((longlong)param_1 + 0x59) = uVar7;
  FUN_180207610((longlong)param_1 + 0x5a,0,0x200);
  *(char *)((longlong)param_1 + 0x25a) = (char)param_3;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  lVar6 = FUN_1801d61c8(0x210);
  param_1[0x4c] = lVar6;
  param_1[0x4e] = 0x200;
  param_1[0x4f] = 0x20f;
  FUN_180207610(lVar6,param_3,0x200);
  *(undefined1 *)(lVar6 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



void Unwind_18008ef20(undefined8 param_1,longlong param_2)

{
  FUN_180094ef0(*(undefined8 *)(param_2 + 0x28));
  FUN_180094ef0(*(undefined8 *)(param_2 + 0x20));
  return;
}



void FUN_18008ef60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  longlong *local_48;

  local_58 = 0xeccaf8acb2606204;
  local_60 = 0x4073b38317d4831f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0x54bbf8d08bb388ca;
          if (-0x3fca84782c667a1b < (longlong)uVar5) break;
          if (uVar5 == 0x94fa311fa2f8e92e) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_58 = 0x359fa18894cd7708;
            if (iVar3 == local_4c) {
              local_58 = 0x15e7e5f2b4402278;
            }
            local_60 = 0xd5d29e7567d9a79e;
          }
          else {
            local_58 = local_58 ^ 0x54bbf8d08bb388ca;
            if (uVar5 == 0xacb94b2fa5b4e11b) {
              local_4c = 1;
              local_48 = *(longlong **)(param_1 + 8);
              local_58 = 0x4372d489fb4ab3a7;
              if (local_48 == (longlong *)0x0) {
                local_58 = 0xfc6d7fb35766405f;
              }
              local_60 = 0x1c20404ea47290c9;
            }
          }
        }
        if (uVar5 != 0xc0357b87d39985e6) break;
        (**(code **)(*local_48 + 8))();
        local_58 = 0x3ee1e07c194d21b4;
        local_60 = 0xdeacdf81ea59f122;
      }
      if (uVar5 != 0x5f5294c75f38236e) break;
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_58 = 0x620a3a3cb93b4868;
      if ((int)lVar4 == local_4c) {
        local_58 = 0x16bd34dee8d771d0;
      }
      local_60 = 0x824705c14a2f98fe;
    }
    local_58 = local_58 ^ 0x54bbf8d08bb388ca;
  } while (uVar5 != 0xe04d3ffdf314d096);
  return;
}



void FUN_18008f150(undefined8 *param_1,char *param_2,char param_3,undefined1 param_4,int param_5,int param_6)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *in_stack_fffffffffffffa98;
  undefined4 uVar8;
  ulonglong local_558;
  ulonglong local_550;
  byte local_546;
  byte local_545;
  byte local_544;
  char local_543;
  byte local_541;
  undefined1 local_540;
  undefined1 local_53f;
  byte local_53e;
  byte local_53d;
  byte local_53c;
  byte local_53b;
  byte local_53a;
  byte local_539;
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  byte local_534;
  byte local_533;
  byte local_532;
  byte local_531;
  longlong local_530;
  longlong local_528;
  uint local_51c;
  ulonglong local_510;
  ulonglong local_508;
  uint local_500;
  uint local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0;
  uint local_4ec;
  longlong local_4e8;
  int local_4dc;
  uint local_4d8;
  int local_4d4;
  ulonglong local_4d0;
  ulonglong local_4c8;
  ulonglong local_4c0;
  longlong *local_4b8;
  uint local_4ac;
  uint local_4a8;
  uint local_4a4;
  uint local_4a0;
  uint local_49c;
  longlong *local_490;
  longlong *local_488;
  longlong *local_480;
  longlong *local_478;
  longlong *local_470;
  longlong *local_468;
  longlong *local_460;
  longlong *local_458;
  ulonglong local_450;
  ulonglong local_448;
  ulonglong local_440;
  ulonglong local_438;
  ulonglong local_430;
  ulonglong local_428;
  longlong local_420;
  undefined8 *local_418;
  undefined8 *local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  ulonglong local_3e0;
  ulonglong local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  undefined8 local_3b0;
  longlong local_3a0;
  undefined8 *local_398;
  ulonglong local_390;
  undefined8 *local_388;
  longlong *local_380;
  code *local_378;
  ulonglong *local_370;
  longlong *local_368;
  byte *local_360;
  longlong *local_358;
  code *local_350;
  undefined8 *local_340;
  longlong *local_338;
  byte *local_330;
  ulonglong local_320;
  ulonglong local_318;
  undefined8 *local_308;
  undefined8 *local_300;
  ulonglong local_2f8;
  byte *local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  longlong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  byte *local_2b0;
  byte *local_2a0;
  byte *local_298;
  ulonglong local_290;
  longlong *local_288;
  longlong local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong local_260;
  ulonglong local_258;
  longlong local_250;
  longlong *local_248;
  longlong local_240;
  ulonglong local_238;
  longlong local_228;
  ulonglong local_220;
  longlong *local_218;
  longlong *local_210;
  ulonglong local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  ulonglong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_188;
  longlong local_180;
  ulonglong local_170;
  longlong *local_168;
  undefined8 *local_160;
  ulonglong local_158;
  ulonglong local_148;
  ulonglong local_140;
  byte *local_130;
  ulonglong *local_128;
  ulonglong *local_120;
  ulonglong local_118;
  undefined8 *local_108;
  ulonglong local_100;
  longlong local_f0;
  double local_e8;
  longlong local_e0;
  longlong local_d8;
  byte *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  byte *local_a8;
  byte *local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;

  local_550 = 0xe145c16639186372;
  local_558 = 0x215da52f26856fd3;
LAB_18008f230:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar6 = local_550 ^ 0x5972c2c495808878;
          uVar3 = local_550 ^ local_558;
          local_558 = local_558 ^ 0x5972c2c495808878;
          uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffa98 >> 0x20);
          bVar4 = (byte)local_528;
          local_550 = uVar6;
          if (0x4581ab6dd43908d < (longlong)uVar3) break;
          if ((longlong)uVar3 < -0x3a1e47bebb2b6100) {
            if ((longlong)uVar3 < -0x5d3e7ad1e5278181) {
              if ((longlong)uVar3 < -0x6c771e2ca44e876e) {
                if ((longlong)uVar3 < -0x77d3fcf925e9df98) {
                  if ((longlong)uVar3 < -0x7cc46462e42c2d4f) {
                    if (uVar3 == 0x81e63b9a21b59f44) {
                      *(byte *)(local_280 + -1) = local_533 | local_546;
                      local_550 = 0x5ece6f7b7c42eddd;
                      local_558 = 0x2728b10035a5fe4f;
                    }
                    else if (uVar3 == 0x8234fcb923dd1a01) {
                      plVar7 = (longlong *)*param_1;
                      pcVar2 = *(code **)(*plVar7 + 8);
                      in_stack_fffffffffffffa98 = &DAT_1802a2410;
                      FUN_1800b8f52(&DAT_1802a2404,&DAT_1802734b8,0x13,0xc,&DAT_1802a2410);
                      (*pcVar2)(plVar7,&DAT_1802a2404,local_3b0);
                      local_550 = 0xfd572d39564b32e8;
                      local_558 = 0x1fb43a70962376e1;
                    }
                  }
                  else if (uVar3 == 0x833b9b9d1bd3d2b1) {
                    plVar7 = local_478;
                    if (local_508 < *local_128) {
                      plVar7 = (longlong *)*local_478;
                    }
                    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7,local_318);
                    FUN_18008f150(param_1,local_250,1,param_4,CONCAT44(uVar8,param_5),local_4a8);
                    plVar7 = (longlong *)*param_1;
                    pcVar2 = *(code **)(*plVar7 + 8);
                    in_stack_fffffffffffffa98 = &DAT_1802a2388;
                    FUN_1800b8f52(&DAT_1802a2384,&DAT_18027328d,0x1f,3,&DAT_1802a2388);
                    (*pcVar2)(plVar7,&DAT_1802a2384,local_530);
                    local_250 = local_250 + 0x10;
                    local_550 = 0xd7f39f519653fef4;
                    if (local_250 == *(longlong *)(*local_4b8 + 8) + -0x10) {
                      local_550 = 0xf90d3fedb1ba36af;
                    }
                    local_558 = 0x54c804cc8d802c45;
                  }
                  else if (uVar3 == 0x8404441567df4541) {
                    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_546);
                    local_550 = 0xc59692efeba6695b;
                    local_558 = 0x300ca4b620e33e3c;
                  }
                }
                else if ((longlong)uVar3 < -0x723b8ba2f2302327) {
                  if (uVar3 == 0x882c0306da162068) {
                    local_550 = 0xf65c703349733937;
                    if (local_53d < local_53c) {
                      local_550 = 0x1e6380a4b21db1fc;
                    }
                    local_558 = 0xf73610b96b9b2006;
                    local_531 = local_53c;
                    local_1a8 = local_408;
                  }
                  else if (uVar3 == 0x8c25918d5ccca06e) {
                    local_4f8 = local_4f4 + local_4dc;
                    local_550 = 0x74ce5d1ed3b85326;
                    local_558 = 0x8b8b847d2bd49ac1;
                  }
                }
                else if (uVar3 == 0x8dc4745d0dcfdcd9) {
                  local_460 = local_200;
                  plVar7 = local_480;
                  if (local_508 < *local_120) {
                    plVar7 = (longlong *)*local_480;
                  }
                  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7,local_320);
                  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_540);
                  FUN_1800950d0(param_1,local_200 + 4,param_4);
                  plVar7 = (longlong *)*param_1;
                  pcVar2 = *(code **)(*plVar7 + 8);
                  uVar8 = 1;
                  FUN_1800b8f52(&DAT_1802a237c,&DAT_180273263,0x13,4,&DAT_1802a2380);
                  (*pcVar2)(plVar7,&DAT_1802a237c,local_4e8);
                  FUN_18008f150(param_1,local_200 + 8,1,param_4,CONCAT44(uVar8,param_5),local_4ac);
                  plVar7 = (longlong *)*param_1;
                  pcVar2 = *(code **)(*plVar7 + 8);
                  in_stack_fffffffffffffa98 = &DAT_1802a2388;
                  FUN_1800b8f52(&DAT_1802a2384,&DAT_18027328d,0x1f,3,&DAT_1802a2388);
                  (*pcVar2)(plVar7,&DAT_1802a2384,local_530);
                  local_c8 = local_208 + local_528;
                  local_288 = (longlong *)local_200[2];
                  local_550 = 0xac72387f0a3b846e;
                  if (*(byte *)((longlong)local_288 + 0x19) == local_544) {
                    local_550 = 0x92aaab56fab4ed4;
                  }
                  local_558 = 0x974205bf297e2103;
                }
                else if (uVar3 == 0x90d8a65fd2ae92c3) {
                  *(undefined2 *)(local_400 + -2) =
                       *(undefined2 *)(&DAT_18020eb28 + (ulonglong)(local_53b % local_545) * 2);
                  local_532 = local_53b / local_545;
                  local_1f0 = local_400 + -2;
                  local_550 = 0x766ba5737e9a08b3;
                  local_558 = 0x42aad39ece3d43de;
                }
                else if (uVar3 == 0x92dc43d539441c45) {
                  plVar7 = (longlong *)*param_1;
                  pcVar2 = *(code **)(*plVar7 + 8);
                  FUN_1800b8f52(&DAT_1802a23bc,&DAT_1802733c0,0x15,4,&DAT_1802a23c0);
                  (*pcVar2)(plVar7,&DAT_1802a23bc,local_4e8);
                  plVar7 = local_490;
                  if (local_508 < *local_370) {
                    plVar7 = (longlong *)*local_490;
                  }
                  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7,local_390);
                  plVar7 = (longlong *)*param_1;
                  pcVar2 = *(code **)(*plVar7 + 8);
                  in_stack_fffffffffffffa98 = &DAT_1802a23d0;
                  FUN_1800b8f52(&DAT_1802a23c4,&DAT_1802733f0,0x1d,0xc,&DAT_1802a23d0);
                  (*pcVar2)(plVar7,&DAT_1802a23c4,local_3b0);
                  local_f0 = *local_368;
                  local_550 = 0x3d136e0036a9322f;
                  if (*(char *)(local_f0 + 0x20) != '\0') {
                    local_550 = 0xf97f2aa886473a2e;
                  }
                  local_558 = 0xb1aeaaf6d1c1a80;
                }
              }
              else if ((longlong)uVar3 < -0x66dbab3bac8a3233) {
                if ((longlong)uVar3 < -0x6b9d997c7da6b01a) {
                  if (uVar3 == 0x9388e1d35bb17892) {
                    in_stack_fffffffffffffa98 = (undefined *)CONCAT44(uVar8,param_5);
                    FUN_18008f150(param_1,local_2c8,0,param_4,in_stack_fffffffffffffa98,param_6);
                    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_535);
                    local_550 = 0x598f172d85c6789f;
                    local_558 = 0xbb6c006445ae3c96;
                  }
                  else if (uVar3 == 0x93968b021873c8a0) {
                    local_e8 = *(double *)(param_2 + 8);
                    local_550 = 0xac15f4822fb98a83;
                    if (ABS(local_e8) == INFINITY) {
                      local_550 = 0x78ef24eeb0d029bc;
                    }
                    local_558 = 0x69f44cc36b6d1583;
                  }
                }
                else if (uVar3 == 0x9462668382594fe6) {
                  local_d8 = *(longlong *)*local_4b8;
                  local_550 = 0x8aa832d83a72bb4;
                  if (local_d8 == ((longlong *)*local_4b8)[1] + -0x10) {
                    local_550 = 0x74c4dd77b8ac7365;
                  }
                  local_558 = 0xd901e6568496698f;
                }
                else if (uVar3 == 0x95775d514884cde8) {
                  local_550 = 0x46cad74306e4ae7c;
                  if (local_53d < local_53b) {
                    local_550 = 0x2d19760555160f1e;
                  }
                  local_558 = 0x720ba1aeb643e511;
                  local_532 = local_53b;
                  local_1f0 = local_400;
                }
                else if (uVar3 == 0x97384b46cf394a7a) {
                  *(undefined2 *)(local_78 + -2) = *(undefined2 *)(&DAT_18020ebf0 + local_80 * 2);
                  local_550 = 0xfc9a9f533c845d3c;
                  local_558 = 0x31b9f69de8a9a53f;
                }
              }
              else if ((longlong)uVar3 < -0x619750f5b92a9029) {
                if (uVar3 == 0x992454c45375cdcd) {
                  FUN_180067bb0(local_490,local_148 << (bVar4 & 0x3f),local_536);
                  local_550 = 0x79fab412676411fb;
                  local_558 = 0x52959d7d09bfef7c;
                }
                else if (uVar3 == 0x9a5e032adc97064c) {
                  local_380 = (longlong *)*param_1;
                  local_378 = *(code **)(*local_380 + 8);
                  local_550 = 0xe7252db4bd9bdc0f;
                  if (param_2[8] != '\0') {
                    local_550 = 0x141d97720ceebb2;
                  }
                  local_558 = 0xf0dd2b2a827e5f61;
                }
              }
              else if (uVar3 == 0x9e68af0a46d56fd7) {
                local_550 = 0x788ddbca99c233b2;
                if (*(byte *)(*local_288 + 0x19) == local_544) {
                  local_550 = 0x89a5a24bdf859624;
                }
                local_558 = 0x17cd0d419950f9f3;
                local_468 = local_288;
                local_288 = (longlong *)*local_288;
              }
              else if (uVar3 == 0x9fe500a897f9e196) {
                *(undefined2 *)(local_68 + -2) = *(undefined2 *)(&DAT_18020ebf0 + local_70 * 2);
                local_550 = 0xd9ecc4a2cb3c29d;
                local_558 = 0x3265693204a02bbb;
              }
              else if (uVar3 == 0xa04531acf5ca9a94) {
                local_80 = local_238;
                local_78 = local_240;
                local_550 = 0x734966c5f43fc3d7;
                if (local_438 < local_238) {
                  local_550 = 0xc25e2153481b87dd;
                }
                local_558 = 0x55666a158722cda7;
                local_1a0 = local_238;
                local_198 = local_240;
              }
            }
            else if ((longlong)uVar3 < -0x46a11f4bdc97c5d3) {
              if ((longlong)uVar3 < -0x523ac4dec3c5e516) {
                if ((longlong)uVar3 < -0x58c1e99ad5a98cb5) {
                  if (uVar3 == 0xa2c1852e1ad87e7f) {
                    local_458 = local_1b0;
                    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_540);
                    FUN_1800950d0(param_1,local_1b0 + 4,param_4);
                    plVar7 = (longlong *)*param_1;
                    pcVar2 = *(code **)(*plVar7 + 8);
                    uVar8 = 1;
                    FUN_1800b8f52(&DAT_1802a238c,&DAT_1802732bf,0x1f,3,&DAT_1802a2390);
                    (*pcVar2)(plVar7,&DAT_1802a238c);
                    in_stack_fffffffffffffa98 = (undefined *)CONCAT44(uVar8,param_5);
                    FUN_18008f150(param_1,local_1b0 + 8,0,param_4,in_stack_fffffffffffffa98,param_6);
                    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_537);
                    local_b0 = local_1b8 + local_528;
                    local_1f8 = (longlong *)local_1b0[2];
                    local_550 = 0x905d797436735b7e;
                    if (*(byte *)((longlong)local_1f8 + 0x19) == local_544) {
                      local_550 = 0xaf95ca819321fb2d;
                    }
                    local_558 = 0xc3520f4cc6736972;
                  }
                  else if (uVar3 == 0xa5cf485c3dd3dda8) {
                    local_550 = 0x31a0fd62fea4f4f2;
                    if (local_3c8 < local_4d0) {
                      local_550 = 0xa57a4d72c6f3a4cb;
                    }
                    local_558 = 0x7d524ca5ed594f96;
                  }
                }
                else if (uVar3 == 0xa73e16652a56734b) {
                  local_550 = 0xc15228c12f879337;
                  local_558 = 0x23b13f88efefd73e;
                }
                else if (uVar3 == 0xa974948a42683267) {
                  local_468 = (longlong *)local_98[1];
                  local_550 = 0x3dcd1b00f7385f6b;
                  if (*(byte *)((longlong)local_468 + 0x19) == local_544) {
                    local_550 = 0xebd32d3fd4c2af07;
                  }
                  local_558 = 0x528dcd8bf7aa952a;
                  local_270 = local_98;
                  local_278 = local_468;
                }
                else if (uVar3 == 0xab823641a75ce9fd) {
                  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_53f);
                  local_550 = 0xab7b8a578f2d1495;
                  local_558 = 0x49989d1e4f45509c;
                }
              }
              else if ((longlong)uVar3 < -0x481f7cff6738ca1c) {
                if (uVar3 == 0xadc53b213c3a1aea) {
                  plVar7 = local_478;
                  if (local_508 < (ulonglong)param_1[0x4f]) {
                    plVar7 = (longlong *)*local_478;
                  }
                  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7,local_318);
                  in_stack_fffffffffffffa98 = (undefined *)CONCAT44(uVar8,param_5);
                  FUN_18008f150(param_1,*(longlong *)(*local_4b8 + 8) + -0x10,1,param_4,in_stack_fffffffffffffa98,
                                local_4a8);
                  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_541);
                  plVar7 = local_478;
                  if (local_508 < (ulonglong)param_1[0x4f]) {
                    plVar7 = (longlong *)*local_478;
                  }
                  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7);
                  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_535);
                  local_550 = 0x382911bdcc870f3c;
                  local_558 = 0xdaca06f40cef4b35;
                }
                else if (uVar3 == 0xaf9728ef722bd0e5) {
                  local_268 = (longlong *)**(undefined8 **)*local_488;
                  local_550 = 0x40707892fcbd8bf7;
                  if (((undefined8 *)*local_488)[1] == local_528) {
                    local_550 = 0x91938f9616b665ab;
                  }
                  local_558 = 0x46218409d8bd6c72;
                  local_168 = local_268;
                }
              }
              else if (uVar3 == 0xb7e0830098c735e4) {
                local_2b8 = (ulonglong)local_500 + (longlong)local_388;
                local_550 = 0xa41b9c60eda74b79;
                if (local_448 < local_428) {
                  local_550 = 0x2a05c060000863a5;
                }
                local_558 = 0x45eadcc186dd1ed;
                local_2c0 = local_428;
                local_238 = local_428;
                local_240 = local_2b8;
              }
              else if (uVar3 == 0xb8b561b08dfc549e) {
                FUN_180067bb0(local_480,local_c0 << (bVar4 & 0x3f));
                local_550 = 0xad5f13adbab47eac;
                local_558 = 0x2c83b42c89fae49;
              }
              else if (uVar3 == 0xb94d21d6728efe32) {
                *(undefined2 *)(local_420 + -2) =
                     *(undefined2 *)(&DAT_18020eb28 + (ulonglong)(local_53a % local_545) * 2);
                local_534 = local_53a / local_545;
                local_2e8 = local_420 + -2;
                local_550 = 0x5b19802a07f78215;
                local_558 = 0x6cb5a792aa5ca464;
              }
            }
            else if ((longlong)uVar3 < -0x3fe79bb6e062f35f) {
              if ((longlong)uVar3 < -0x45651c4c154749a1) {
                if (uVar3 == 0xb95ee0b423683a2d) {
                  local_98 = local_278;
                  local_550 = 0x93af338935410fe;
                  if (local_270 == (longlong *)local_278[2]) {
                    local_550 = 0xcf0eb139d1aee8d8;
                  }
                  local_558 = 0x667a25b393c6dabf;
                  local_468 = local_278;
                }
                else if (uVar3 == 0xba96e56341f27100) {
                  local_539 = *local_298;
                  local_550 = 0x365d13a3ab5ddde8;
                  if (local_539 == local_544) {
                    local_550 = 0x96a517884ad5651b;
                  }
                  local_558 = 0xec883b9321cb8557;
                }
              }
              else if (uVar3 == 0xba9ae3b3eab8b65f) {
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_540);
                FUN_1800950d0(param_1,local_248 + 4,param_4);
                plVar7 = (longlong *)*param_1;
                pcVar2 = *(code **)(*plVar7 + 8);
                uVar8 = 1;
                FUN_1800b8f52(&DAT_1802a238c,&DAT_1802732bf,0x1f,3,&DAT_1802a2390);
                (*pcVar2)(plVar7,&DAT_1802a238c);
                in_stack_fffffffffffffa98 = (undefined *)CONCAT44(uVar8,param_5);
                FUN_18008f150(param_1,local_248 + 8,0,param_4,in_stack_fffffffffffffa98,param_6);
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_53f);
                local_550 = 0x265a73ff7aea016c;
                local_558 = 0xc4b964b6ba824565;
              }
              else if (uVar3 == 0xbccce7a74d2d6fbc) {
                local_470 = (longlong *)local_60[1];
                local_550 = 0x10b7d3c87ecd1ca3;
                if (*(byte *)((longlong)local_470 + 0x19) == local_544) {
                  local_550 = 0x31c05891f4d98592;
                }
                local_558 = 0x5521b7061ced5f58;
                local_210 = local_60;
                local_218 = local_470;
              }
              else if (uVar3 == 0xbf399d92f993900d) {
                (*(code *)*local_3e8)(local_3f0,0x7b);
                local_248 = (longlong *)**(undefined8 **)*local_488;
                local_550 = 0x21b66b17d0543511;
                if (((undefined8 *)*local_488)[1] == local_528) {
                  local_550 = 0x39ed0d8a2034fd31;
                }
                local_558 = 0x8377ee39ca8c4b6e;
                local_1b8 = local_4c8;
                local_1b0 = local_248;
              }
            }
            else if ((longlong)uVar3 < -0x3c44f6943748379f) {
              if (uVar3 == 0xc01864491f9d0ca1) {
                local_508 = 0xf;
                local_53d = 9;
                local_546 = 0x30;
                local_430 = 100000;
                local_53e = 99;
                local_4d4 = 4;
                local_510 = 100;
                local_438 = 9;
                local_4c8 = 0;
                local_53f = 0x7d;
                local_528 = 1;
                local_3a0 = -1;
                local_4e8 = 3;
                local_4c0 = 10;
                local_51c = 1;
                local_440 = 1000;
                local_544 = 0;
                local_448 = 99;
                local_4d8 = 2;
                local_450 = 9999;
                local_535 = 0x5d;
                local_4dc = 3;
                local_3b0 = 0xb;
                local_4d0 = 10000;
                local_536 = 0x20;
                local_541 = 10;
                local_537 = 0x2c;
                local_540 = 0x22;
                local_530 = 2;
                local_545 = 100;
                local_543 = *param_2;
                local_550 = 0x8deca0f3fabf5a8f;
                local_558 = 0x6b77424ed074bdae;
              }
              else if (uVar3 == 0xc031bc35f3274f04) {
                FUN_180095d50(param_1,*(undefined8 *)(param_2 + 8));
                local_550 = 0x4c998336d06e2ac5;
                local_558 = 0xae7a947f10066ecc;
              }
            }
            else if (uVar3 == 0xc3bb096bc8b7c861) {
              pcVar2 = (code *)local_410[1];
              in_stack_fffffffffffffa98 = &DAT_1802a2398;
              FUN_1800b8f52(&DAT_1802a2394,&DAT_1802732fc,0x15,3,&DAT_1802a2398);
              (*pcVar2)(local_418,&DAT_1802a2394);
              local_550 = 0x59aecaf09a48e98b;
              local_558 = 0xbb4dddb95a20ad82;
            }
            else if (uVar3 == 0xc3c5dd87c8ab7eac) {
              local_388 = param_1 + 2;
              local_550 = 0xb12747bc4be5553a;
              if (local_428 < local_4c0) {
                local_550 = 0x93891db1e15c1525;
              }
              local_558 = 0x858c33c0c70a75f9;
              local_49c = local_51c;
              local_170 = local_428;
            }
            else if (uVar3 == 0xc5d31251848832c7) {
              local_308 = param_1 + 2;
              local_550 = 0xc561fe32989a0586;
              if (local_3d8 < local_4c0) {
                local_550 = 0x211f46b897c5f8d6;
              }
              local_558 = 0x1e927f35d86df0b9;
              local_4a4 = local_51c;
              local_2f8 = local_3d8;
            }
          }
          else if ((longlong)uVar3 < -0x1cb8f5449d6df7b5) {
            if ((longlong)uVar3 < -0x27d7fe28d45514a3) {
              if ((longlong)uVar3 < -0x352e97feb3f064ee) {
                if ((longlong)uVar3 < -0x38d0aac82de85b23) {
                  if (uVar3 == 0xc5e1b84144d49f00) {
                    FUN_180097850(param_1 + 2,param_1 + 10,local_e8);
                    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_1 + 2);
                    local_550 = 0xab1136adb00daa01;
                    local_558 = 0x49f221e47065ee08;
                  }
                  else if (uVar3 == 0xc6b9ee132b988d3f) {
                    plVar7 = (longlong *)*param_1;
                    pcVar2 = *(code **)(*plVar7 + 8);
                    in_stack_fffffffffffffa98 = &DAT_1802a20a4;
                    FUN_1800b8f52(&DAT_1802a209c,&DAT_180271da3,0x16,5,&DAT_1802a20a4);
                    (*pcVar2)(plVar7,&DAT_1802a209c);
                    local_550 = 0xb425e804454d103d;
                    local_558 = 0x56c6ff4d85255434;
                  }
                }
                else if (uVar3 == 0xc72f5537d217a4dd) {
                  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_546);
                  local_550 = 0x16689a99cacbc535;
                  local_558 = 0x7161b7004c655145;
                }
                else if (uVar3 == 0xc758057a5adca5eb) {
                  *(undefined2 *)(local_408 + -2) =
                       *(undefined2 *)(&DAT_18020eb28 + (ulonglong)(local_53c % local_545) * 2);
                  local_531 = local_53c / local_545;
                  local_1a8 = local_408 + -2;
                  local_550 = 0xb90fe348915cef4;
                  local_558 = 0xafa9ebeabfdd7c5;
                }
                else if (uVar3 == 0xca89479ce33f763f) {
                  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_340);
                  local_550 = 0x313462fd986f082f;
                  local_558 = 0x563d4f641ec19c5f;
                }
              }
              else if ((longlong)uVar3 < -0x2e5da7d937d66034) {
                if (uVar3 == 0xcad168014c0f9b12) {
                  *(byte *)(local_2d8 + -1) = local_546 | (byte)local_2e0;
                  local_550 = 0x6a896831706a5038;
                  local_558 = 0x5572cd495879b91e;
                }
                else if (uVar3 == 0xcd2369ced42df803) {
                  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_388);
                  local_550 = 0x3e7f5e133f5b0e95;
                  local_558 = 0xcbe5684af41e59f2;
                }
              }
              else if (uVar3 == 0xd1a25826c8299fcc) {
                local_2a0 = local_130 + -1;
                local_550 = 0x2e8cf428e408c44c;
                if (local_360 == local_2a0) {
                  local_550 = 0x5c946347afc1aa13;
                }
                local_558 = 0x3feac4aa0cd859ee;
              }
              else if (uVar3 == 0xd1ab657b0731423b) {
                local_128 = param_1 + 0x4f;
                local_550 = 0x1c2510e6a95ee66f;
                local_558 = 0x9f1e8b7bb28d34de;
                local_250 = local_d8;
              }
              else if (uVar3 == 0xd7b20b9fce0b09d9) {
                plVar7 = local_480;
                if (local_508 < (ulonglong)param_1[0x4f]) {
                  plVar7 = (longlong *)*local_480;
                }
                (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7,local_320);
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_540);
                FUN_1800950d0(param_1,local_268 + 4,param_4);
                plVar7 = (longlong *)*param_1;
                pcVar2 = *(code **)(*plVar7 + 8);
                uVar8 = 1;
                FUN_1800b8f52(&DAT_1802a237c,&DAT_180273263,0x13,4,&DAT_1802a2380);
                (*pcVar2)(plVar7,&DAT_1802a237c,local_4e8);
                in_stack_fffffffffffffa98 = (undefined *)CONCAT44(uVar8,param_5);
                FUN_18008f150(param_1,local_268 + 8,1,param_4,in_stack_fffffffffffffa98,local_4ac);
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_541);
                plVar7 = local_480;
                if (local_508 < (ulonglong)param_1[0x4f]) {
                  plVar7 = (longlong *)*local_480;
                }
                (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7);
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_53f);
                local_550 = 0xd275a5ae49f90b3c;
                local_558 = 0x3096b2e789914f35;
              }
            }
            else if ((longlong)uVar3 < -0x21abd051bbc8118e) {
              if ((longlong)uVar3 < -0x252ad7cf7569a741) {
                if (uVar3 == 0xd82801d72baaeb5d) {
                  local_4fc = local_4f0 + local_4dc;
                  local_550 = 0x3fe266b529060396;
                  local_558 = 0xd214ff696c6923ac;
                }
                else if (uVar3 == 0xdaba9cd18535c47a) {
                  pcVar2 = (code *)local_3e8[1];
                  in_stack_fffffffffffffa98 = &DAT_1802a2370;
                  FUN_1800b8f52(&DAT_1802a236c,&DAT_180273201,0x12,3,&DAT_1802a2370);
                  (*pcVar2)(local_3f0,&DAT_1802a236c);
                  local_550 = 0xd2ed5b98482529cd;
                  local_558 = 0x300e4cd1884d6dc4;
                }
              }
              else if (uVar3 == 0xdad528308a9658bf) {
                local_100 = (ulonglong)local_539;
                lVar5 = local_530;
                if (local_545 <= local_539) {
                  lVar5 = local_4e8;
                }
                if (local_539 < local_541) {
                  lVar5 = local_528;
                }
                local_108 = param_1 + 2;
                local_3f8 = (longlong)param_1 + lVar5 + 0x10;
                local_550 = 0x3953d89cdf4fd15;
                if (local_53e < local_539) {
                  local_550 = 0x63981283119b11e8;
                }
                local_558 = 0x5552ba10f535110b;
              }
              else if (uVar3 == 0xdb5d2d4d60baac07) {
                local_550 = 0xe0e3d0120619d948;
                if (local_543 < '\x03') {
                  local_550 = 0x6f46acf5ce4655e5;
                }
                local_558 = 0x92ef1f7331a5c884;
              }
              else if (uVar3 == 0xdbf3810740f7f53f) {
                local_3d0 = local_2f8;
                local_4f4 = local_4a4;
                local_550 = 0xb30c9f551d59b286;
                if (local_2f8 < local_510) {
                  local_550 = 0xfd126afeda09c4d8;
                }
                local_558 = 0xc03952c9f0f8f96c;
              }
            }
            else if ((longlong)uVar3 < -0x1df68b45f49a40a7) {
              if (uVar3 == 0xde542fae4437ee72) {
                *(byte *)(local_180 + -1) = local_546 | (byte)local_188;
                local_550 = 0x890effc8e3e0f03a;
                local_558 = 0xf0dea0ee7eff5f02;
              }
              else if (uVar3 == 0xe0828d934c570c45) {
                if ((local_1d8 | local_510) >> 0x20 == 0) {
                  uVar3 = (local_1d8 & 0xffffffff) % (local_510 & 0xffffffff);
                }
                else {
                  uVar3 = local_1d8 % local_510;
                }
                if ((local_1d8 | local_510) >> 0x20 == 0) {
                  local_220 = (local_1d8 & 0xffffffff) / (local_510 & 0xffffffff);
                }
                else {
                  local_220 = local_1d8 / local_510;
                }
                *(undefined2 *)(local_1d0 + -2) = *(undefined2 *)(&DAT_18020ebf0 + uVar3 * 2);
                local_228 = local_1d0 + -2;
                local_550 = 0x2645727d56f9a0b6;
                if (local_450 < local_1d8) {
                  local_550 = 0x9b053ab5b500e24b;
                }
                local_558 = 0x7b87b726f957ee0e;
                local_1d8 = local_220;
                local_1d0 = local_228;
              }
            }
            else if (uVar3 == 0xe20974ba0b65bf59) {
              plVar7 = (longlong *)*param_1;
              pcVar2 = *(code **)(*plVar7 + 8);
              in_stack_fffffffffffffa98 = &DAT_1802a2400;
              FUN_1800b8f52(&DAT_1802a23f8,&DAT_180273492,0x10,6,&DAT_1802a2400);
              (*pcVar2)(plVar7,&DAT_1802a23f8);
              local_550 = 0x681ab2fa63605e60;
              local_558 = 0x8af9a5b3a3081a69;
            }
            else if (uVar3 == 0xe2d825df9319e6ea) {
              local_550 = 0x53d68d281d42d732;
              if (local_543 < '\x01') {
                local_550 = 0xd3fa574f701078e2;
              }
              local_558 = 0x278e7fcfe928cdba;
            }
            else if (uVar3 == 0xe2e31749c0684409) {
              return;
            }
          }
          else if ((longlong)uVar3 < -0xa65c9a634baa899) {
            if ((longlong)uVar3 < -0x14833c5dbce863f0) {
              if ((longlong)uVar3 < -0x19641d42d53418df) {
                if (uVar3 == 0xe3470abb6292084b) {
                  local_550 = 0x8f163cb604754b42;
                  if (local_543 < '\a') {
                    local_550 = 0x8b16cb53fd962084;
                  }
                  local_558 = 0x74a1cc4e35a5ce86;
                }
                else if (uVar3 == 0xe40d1d663262c422) {
                  local_358 = (longlong *)*param_1;
                  local_350 = *(code **)(*local_358 + 8);
                  local_550 = 0xa81d1f2bd9c4d1d4;
                  if (param_3 != '\0') {
                    local_550 = 0x948258cd56ec801f;
                  }
                  local_558 = 0xa50f47f00bcb7d57;
                }
              }
              else if (uVar3 == 0xe69be2bd2acbe721) {
                local_550 = 0x435b87eac7c886d4;
                if (local_543 < '\x05') {
                  local_550 = 0xf420f16be6484ff4;
                }
                local_558 = 0xa01c8d51a55a8e9f;
              }
              else if (uVar3 == 0xe955901dd98691fa) {
                *(undefined2 *)(local_408 + -2) = *(undefined2 *)(&DAT_18020eb28 + local_140 * 2);
                local_550 = 0xcbe6572d152c9a74;
                local_558 = 0xf8f88520c331a6ea;
              }
              else if (uVar3 == 0xeb1ce54028d8f0c7) {
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_546);
                local_550 = 0x24b4ecc092fd7192;
                local_558 = 0xb668af15abb96dd7;
              }
            }
            else if ((longlong)uVar3 < -0xe630da25d4f4b2d) {
              if (uVar3 == 0xeb7cc3a243179c10) {
                local_3c8 = local_290;
                local_4f0 = local_4a0;
                local_550 = 0xeb3862c978818177;
                if (local_290 < local_510) {
                  local_550 = 0xdacb5972130eb1b0;
                }
                local_558 = 0xe3e8936b35d4c94d;
              }
              else if (uVar3 == 0xedf699dc456f203a) {
                local_260 = (ulonglong)local_4fc + (longlong)local_300;
                local_550 = 0x40c19d17040f2709;
                if (local_448 < local_3e0) {
                  local_550 = 0x3ca5f40ceec1edd9;
                }
                local_558 = 0xc80eb603cb81faf;
                local_258 = local_3e0;
                local_1c8 = local_3e0;
                local_1c0 = local_260;
              }
            }
            else if (uVar3 == 0xf19cf25da2b0b4d3) {
              in_stack_fffffffffffffa98 = &DAT_1802a235c;
              FUN_1800b8f52(&DAT_1802a2354,&DAT_180272604,0x15,5,&DAT_1802a235c);
              (*local_378)(local_380,&DAT_1802a2354);
              local_550 = 0x386633c94d92aa13;
              local_558 = 0xda8524808dfaee1a;
            }
            else if (uVar3 == 0xf265c007eb5b20ae) {
              local_428 = *(ulonglong *)(local_f0 + 0x18);
              local_550 = 0x155ba35927010974;
              if (local_428 == local_4c8) {
                local_550 = 0x529a3acb88753299;
              }
              local_558 = 0xd69e7edeefaa77d8;
            }
            else if (uVar3 == 0xf47428809938b558) {
              local_550 = 0xa3accb229ba8db06;
              if (local_543 == '\0') {
                local_550 = 0xc22b33549a662572;
              }
              local_558 = 0x492dd47b1fea84d;
            }
          }
          else if ((longlong)uVar3 < -0x2564c79001c629f) {
            if ((longlong)uVar3 < -0x4480f07ce2f7a3c) {
              if (uVar3 == 0xf59a3659cb455767) {
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_541);
                plVar7 = local_490;
                if (local_508 < *local_370) {
                  plVar7 = (longlong *)*local_490;
                }
                (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7);
                (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_53f);
                local_550 = 0x5d84b57a40afec45;
                local_558 = 0xbf67a23380c7a84c;
              }
              else if (uVar3 == 0xf8f1a4599cc5b782) {
                (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_160);
                local_550 = 0xf210d2464e41d20c;
                local_558 = 0x60cc91937705ce49;
              }
            }
            else if (uVar3 == 0xfbb7f0f831d085c4) {
              local_550 = 0x2a1745cedebe7d9b;
              if (local_543 < '\b') {
                local_550 = 0xa4816eba08f09012;
              }
              local_558 = 0x3717e5b8108358b2;
            }
            else if (uVar3 == 0xfc1bd8b3dc457318) {
              local_3e0 = *(ulonglong *)(param_2 + 8);
              local_550 = 0x554017ee35a09f48;
              if (local_3e0 == local_4c8) {
                local_550 = 0x2c805c16b4b8b2b1;
              }
              local_558 = 0x39e323f4d5a644f6;
            }
            else if (uVar3 == 0xfce139a938b2b2a0) {
              local_140 = (ulonglong)local_53c;
              lVar5 = local_530;
              if (local_545 <= local_53c) {
                lVar5 = local_4e8;
              }
              if (local_53c < local_541) {
                lVar5 = local_528;
              }
              local_408 = lVar5 + (longlong)local_398;
              local_550 = 0x9def7d9d2ad7708f;
              if (local_53e < local_53c) {
                local_550 = 0xd29b7be1aa1df50c;
              }
              local_558 = 0x15c37e9bf0c150e7;
            }
          }
          else if ((longlong)uVar3 < -0x48f8e237cc11fe) {
            if (uVar3 == 0xfda9b386ffe39d61) {
              local_4b8 = (longlong *)(param_2 + 8);
              local_418 = (undefined8 *)*param_1;
              local_410 = (undefined8 *)*local_418;
              local_550 = 0x8c856408004d3935;
              if (**(longlong **)(param_2 + 8) == (*(longlong **)(param_2 + 8))[1]) {
                local_550 = 0x1a3fd2f6b3606b02;
              }
              local_558 = 0xd984db9d7bd7a363;
            }
            else if (uVar3 == 0xff45d963f86cc9e7) {
              local_228 = (ulonglong)local_4f8 + (longlong)local_308;
              local_220 = local_3d8;
              local_550 = 0xa27c537f62d92f82;
              if (local_448 < local_3d8) {
                local_550 = 0x1f3c1bb781206d7f;
              }
              local_558 = 0xffbe9624cd77613a;
              local_1d8 = local_220;
              local_1d0 = local_228;
            }
          }
          else if (uVar3 == 0xffb7071dc833ee02) {
            local_550 = 0x33c9ba861e72d1f8;
            if (local_543 < '\x06') {
              local_550 = 0xfe3de003110ede4;
            }
            local_558 = 0xcfd26235c237a2e0;
          }
          else if (uVar3 == 0xd57c233c9b6bbf) {
            local_158 = (ulonglong)local_53a;
            lVar5 = local_530;
            if (local_545 <= local_53a) {
              lVar5 = local_4e8;
            }
            if (local_53a < local_541) {
              lVar5 = local_528;
            }
            local_160 = param_1 + 2;
            local_420 = (longlong)param_1 + lVar5 + 0x10;
            local_550 = 0x6c4e0a89bb39cc90;
            if (local_53e < local_53a) {
              local_550 = 0xc96c8ff072badc63;
            }
            local_558 = 0x7021ae2600342251;
          }
          else if (uVar3 == 0x16a608a22e81931) {
            *(byte *)(local_1a8 + -1) = local_531 | local_546;
            local_550 = 0x52d0b2caeb6d0849;
            local_558 = 0x61ce60c73d7034d7;
          }
        }
        if ((longlong)uVar3 < 0x3ffba5782813e926) break;
        if ((longlong)uVar3 < 0x5ec78080d4e5bbd0) {
          if ((longlong)uVar3 < 0x530f7638f000320c) {
            if ((longlong)uVar3 < 0x4c41767738b738a6) {
              if ((longlong)uVar3 < 0x41afbc6a3480185f) {
                if (uVar3 == 0x3ffba5782813e926) {
                  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_308);
                  local_550 = 0x8f487da87aff3eb7;
                  local_558 = 0x24ca4be9dda3d74a;
                }
                else if (uVar3 == 0x410619b908a4a79a) {
                  local_550 = 0x90675100a557afc3;
                  if (local_3d0 < local_4d0) {
                    local_550 = 0x4c21fa4e855ef967;
                  }
                  local_558 = 0xc0046bc3d9925909;
                }
              }
              else if (uVar3 == 0x41afbc6a3480185f) {
                local_500 = local_4ec + local_4d8;
                local_550 = 0xc6c71875d605c541;
                local_558 = 0x71279b754ec2f0a5;
              }
              else if (uVar3 == 0x459664ce622043fb) {
                local_248 = local_470;
                local_1b8 = local_b0;
                local_550 = 0x4dcbff2ff078c6d1;
                if (local_b0 < (ulonglong)(*(longlong *)(*local_488 + 8) + local_3a0)) {
                  local_550 = 0x559099b200180ef1;
                }
                local_558 = 0xf7511c9c1ac0708e;
                local_1b0 = local_248;
              }
              else if (uVar3 == 0x473a9cfcdab869e3) {
                local_180 = (longlong)param_1 + 0x11;
                local_550 = 0xc8804e56919cb68;
                local_558 = 0xd2dc2b4b2d2e251a;
                local_188 = local_3e0;
              }
            }
            else if ((longlong)uVar3 < 0x4d3d726c3f1c988f) {
              if (uVar3 == 0x4c41767738b738a6) {
                local_90 = local_258;
                local_88 = local_260;
                local_550 = 0x6f890e46822e345;
                if (local_438 < local_258) {
                  local_550 = 0xee0ae75488ac633f;
                }
                local_558 = 0xd8acbf4a2c150d37;
                local_188 = local_258;
                local_180 = local_260;
              }
              else if (uVar3 == 0x4cf2b1c713fdbb64) {
                if ((local_3c8 | local_4d0) >> 0x20 == 0) {
                  local_290 = (local_3c8 & 0xffffffff) / (local_4d0 & 0xffffffff);
                }
                else {
                  local_290 = local_3c8 / local_4d0;
                }
                local_4fc = local_4f0 + local_4d4;
                local_550 = 0x97765e5b3dadde0c;
                if (local_3c8 < local_430) {
                  local_550 = 0x91fc04253bd56226;
                }
                local_558 = 0x7c0a9df97eba421c;
                local_4a0 = local_4fc;
              }
            }
            else if (uVar3 == 0x4d3d726c3f1c988f) {
              local_3d8 = *(ulonglong *)(local_e0 + 0x18);
              local_550 = 0xa19dacfb231bb5c0;
              if (local_3d8 == local_4c8) {
                local_550 = 0x3572f49c00e9e81b;
              }
              local_558 = 0x644ebeaaa7938707;
            }
            else if (uVar3 == 0x50633ac37cc5f6ca) {
              if ((local_3d0 | local_4d0) >> 0x20 == 0) {
                local_2f8 = (local_3d0 & 0xffffffff) / (local_4d0 & 0xffffffff);
              }
              else {
                local_2f8 = local_3d0 / local_4d0;
              }
              local_4f8 = local_4f4 + local_4d4;
              local_550 = 0xd7af59d6687b24b5;
              if (local_3d0 < local_430) {
                local_550 = 0xf31901b2d0e0186d;
              }
              local_558 = 0xc5cd8d1288cd18a;
              local_4a4 = local_4f8;
            }
            else if (uVar3 == 0x513c4a36a77a6f1c) {
              (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_546);
              local_550 = 0x6fa87b1dc91120db;
              local_558 = 0xc42a4d5c6e4dc926;
            }
          }
          else if ((longlong)uVar3 < 0x56c7879938c1ec1e) {
            if ((longlong)uVar3 < 0x5501bf957b9a9a56) {
              if (uVar3 == 0x530f7638f000320c) {
                local_210 = local_458;
                local_470 = (longlong *)local_458[1];
                local_550 = 0xb3bb8d664e0a0b80;
                if (*(byte *)((longlong)local_470 + 0x19) == local_544) {
                  local_550 = 0x92cc063fc41e92b1;
                }
                local_558 = 0xf62de9a82c2a487b;
                local_218 = local_470;
              }
              else if (uVar3 == 0x543c7c3a4312c16b) {
                local_550 = 0x3b882286d162daf2;
                if (local_543 < '\x02') {
                  local_550 = 0x20d2a1422c1901f;
                }
                local_558 = 0xe0d50fcbb1d876f5;
              }
            }
            else if (uVar3 == 0x5501bf957b9a9a56) {
              local_550 = 0x6b15158be3aa57d6;
              if (param_3 != '\0') {
                local_550 = 0x350ceeb8f1e8a035;
              }
              local_558 = 0x3154f40e2cab30bb;
            }
            else if (uVar3 == 0x55d9a296f79f12e1) {
              local_118 = (ulonglong)local_53b;
              lVar5 = local_530;
              if (local_545 <= local_53b) {
                lVar5 = local_4e8;
              }
              if (local_53b < local_541) {
                lVar5 = local_528;
              }
              local_400 = lVar5 + (longlong)local_340;
              local_550 = 0xe4fce90fa5865a8d;
              if (local_53e < local_53b) {
                local_550 = 0xe15312013fac05a6;
              }
              local_558 = 0x718bb45eed029765;
            }
            else if (uVar3 == 0x560ddbf1127fdf5b) {
              FUN_180067bb0(local_478,local_b8 << (bVar4 & 0x3f));
              local_550 = 0x88eb875b3332f334;
              local_558 = 0x1c89e1d8b16bbcd2;
            }
          }
          else if ((longlong)uVar3 < 0x5a41e185cf01676d) {
            if (uVar3 == 0x56c7879938c1ec1e) {
              local_550 = 0x1f6f78c1641d6bf2;
              if (local_53d < local_539) {
                local_550 = 0xc3399267ce091769;
              }
              local_558 = 0x9e89435b45a8f4b6;
              local_533 = local_539;
              local_280 = local_3f8;
            }
            else if (uVar3 == 0x59dcc8c84254b606) {
              local_398 = param_1 + 2;
              local_550 = 0xc538dc804c8ee723;
              local_558 = 0xd2e1908c6c09cf76;
              local_2f0 = local_330;
            }
          }
          else if (uVar3 == 0x5a41e185cf01676d) {
            (*(code *)*local_410)(local_418,0x5b);
            local_1e8 = *(longlong *)*local_4b8;
            local_2c8 = ((longlong *)*local_4b8)[1] + -0x10;
            local_550 = 0xd34e60ae58d67f81;
            if (local_1e8 == local_2c8) {
              local_550 = 0x2e5537835b45eb35;
            }
            local_558 = 0xbdddd65000f493a7;
          }
          else if (uVar3 == 0x5db0d13c8ba1e3df) {
            *(undefined2 *)(local_3f8 + -2) = *(undefined2 *)(&DAT_18020eb28 + local_100 * 2);
            local_550 = 0x19b9ee8367c6d2e2;
            local_558 = 0x605f30f82e21c170;
          }
          else if (uVar3 == 0x5dc2c55bafae4eb8) {
            local_2e0 = local_220;
            local_2d8 = local_228;
            local_550 = 0xef6496a86ffc5a6d;
            if (local_438 < local_220) {
              local_550 = 0xba50fe01b40a20e9;
            }
            local_558 = 0x25b5fea923f3c17f;
            local_70 = local_2e0;
            local_68 = local_2d8;
          }
        }
        else if ((longlong)uVar3 < 0x6f40d68b0092ca41) {
          if ((longlong)uVar3 < 0x67092d9986ae9470) {
            if ((longlong)uVar3 < 0x637ea7eda319f3fd) {
              if (uVar3 == 0x5ec78080d4e5bbd0) {
                local_500 = local_4ec + local_51c;
                local_550 = 0x4500da32d32ae8b1;
                local_558 = 0xf2e059324beddd55;
              }
              else if (uVar3 == 0x5f12d7abe355ea0f) {
                *(undefined2 *)(local_400 + -2) = *(undefined2 *)(&DAT_18020eb28 + local_118 * 2);
                local_550 = 0x2447e330c6a3d93b;
                local_558 = 0xeecea4ac259caf04;
              }
            }
            else if (uVar3 == 0x637ea7eda319f3fd) {
              local_53a = *local_2a0;
              local_550 = 0x941a7162d22dca92;
              if (local_53a == local_544) {
                local_550 = 0x7fd3e801c66e51ea;
              }
              local_558 = 0x94cf0d41eeb6a12d;
            }
            else if (uVar3 == 0x64e1ef97e834daca) {
              local_60 = local_218;
              local_550 = 0x678e5bc422536a04;
              if (local_210 == (longlong *)local_218[2]) {
                local_550 = 0x9ed4d8ad0d5e4643;
              }
              local_558 = 0x22183f0a407329ff;
              local_470 = local_218;
            }
            else if (uVar3 == 0x66939e91e336e06d) {
              (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_546);
              local_550 = 0xac5e79e7e30c8ae;
              local_558 = 0x758fdd3b33a14c5;
            }
          }
          else if ((longlong)uVar3 < 0x6ca3341ae006dbbe) {
            if (uVar3 == 0x67092d9986ae9470) {
              plVar7 = (longlong *)*param_1;
              pcVar2 = *(code **)(*plVar7 + 8);
              in_stack_fffffffffffffa98 = &DAT_1802a23b8;
              FUN_1800b8f52(&DAT_1802a23b4,&DAT_180273396,0x14,3,&DAT_1802a23b8);
              (*pcVar2)(plVar7,&DAT_1802a23b4,local_530);
              local_2b0 = local_a0 + 1;
              local_2a0 = (byte *)(*(longlong *)(*local_368 + 8) + -1);
              local_550 = 0x513e14214099b918;
              if (local_2b0 == local_2a0) {
                local_550 = 0x340fc87c33998935;
              }
              local_558 = 0x57716f9190807ac8;
            }
            else if (uVar3 == 0x6769109ce7f61f25) {
              (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_540);
              FUN_1800950d0(param_1,*(undefined8 *)(param_2 + 8));
              (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_540);
              local_550 = 0xbc58454bd875aca0;
              local_558 = 0x5ebb5202181de8a9;
            }
          }
          else if (uVar3 == 0x6ca3341ae006dbbe) {
            local_300 = param_1 + 2;
            local_550 = 0x29bc5cb6c0e30fdb;
            if (local_3e0 < local_4c0) {
              local_550 = 0x85fa03e8594cfa28;
            }
            local_558 = 0xc2c09f1483f493cb;
            local_4a0 = local_51c;
            local_290 = local_3e0;
          }
          else if (uVar3 == 0x6cc7c5cd5552925f) {
            local_550 = 0x1f16221e51ced472;
            if (*(byte *)(*local_1f8 + 0x19) == local_544) {
              local_550 = 0x3647831d66bc05d6;
            }
            local_558 = 0x5a8046d033ee9789;
            local_470 = local_1f8;
            local_1f8 = (longlong *)*local_1f8;
          }
          else if (uVar3 == 0x6e93b6fe5822ec26) {
            in_stack_fffffffffffffa98 = (undefined *)CONCAT44(uVar8,param_5);
            FUN_18008f150(param_1,local_1e8,0,param_4,in_stack_fffffffffffffa98,param_6);
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_537);
            local_1e8 = local_1e8 + 0x10;
            local_2c8 = *(longlong *)(*local_4b8 + 8) + -0x10;
            local_550 = 0x8526187345b6f4c9;
            if (local_1e8 == local_2c8) {
              local_550 = 0x783d4f5e4625607d;
            }
            local_558 = 0xebb5ae8d1d9418ef;
          }
        }
        else if ((longlong)uVar3 < 0x7596330e94385bb6) {
          if ((longlong)uVar3 < 0x7335cd9ceda14bea) {
            if (uVar3 == 0x6f40d68b0092ca41) {
              local_268 = local_468;
              local_208 = local_c8;
              local_550 = 0x2d2e652359288f7;
              if (local_c8 < (ulonglong)(*(longlong *)(*local_488 + 8) + local_3a0)) {
                local_550 = 0x58a49990f6565df7;
              }
              local_558 = 0xd560edcdfb99812e;
              local_200 = local_268;
            }
            else if (uVar3 == 0x720ccf6137bc11cc) {
              local_550 = 0xf684c9a9040455fb;
              if (local_543 < '\x04') {
                local_550 = 0xbb3da1f3f654c92;
              }
              local_558 = 0x6cdaca83d89353b7;
            }
          }
          else if (uVar3 == 0x7335cd9ceda14bea) {
            local_550 = 0x2aaa0744841caf1c;
            if (local_3d0 < local_440) {
              local_550 = 0x6786cd5b1ca299c3;
            }
            local_558 = 0x6bac1efd8cb80886;
          }
          else if (uVar3 == 0x741b126246a9d789) {
            local_550 = 0x7a5015f609ff59e4;
            if (local_3c0 < local_4d0) {
              local_550 = 0x511c5be64f70ea2d;
            }
            local_558 = 0x5fbc00a249af919d;
          }
          else if (uVar3 == 0x7458f2e7f46a1a88) {
            local_488 = (longlong *)(param_2 + 8);
            local_3f0 = (undefined8 *)*param_1;
            local_3e8 = (undefined8 *)*local_3f0;
            local_550 = 0x52a2bb597ac7b38;
            if (*(ulonglong *)(*(longlong *)(param_2 + 8) + 8) == local_4c8) {
              local_550 = 0xda49eb05060010b2;
            }
            local_558 = 0xf377d48335d4c8;
          }
        }
        else if ((longlong)uVar3 < 0x79e6de7b49e71392) {
          if (uVar3 == 0x7596330e94385bb6) {
            local_4fc = local_4f0 + local_4d8;
            local_550 = 0x9a1565f3c41227c5;
            local_558 = 0x77e3fc2f817d07ff;
          }
          else if (uVar3 == 0x79d05f269d1faf38) {
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_300);
            local_550 = 0xf44190f521cf1f64;
            local_558 = 0x16a287bce1a75b6d;
          }
        }
        else if (uVar3 == 0x79e6de7b49e71392) {
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_108);
          local_550 = 0xfc45a33ad12fd9b5;
          local_558 = 0xec118edcf9ab95f1;
        }
        else if (uVar3 == 0x7a2d2c1b6b1ee04c) {
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_546);
          local_550 = 0x7ae533c93051e65a;
          local_558 = 0x6ab11e2f18d5aa1e;
        }
        else if (uVar3 == 0x7b65d6946984733e) {
          *(undefined2 *)(local_420 + -2) = *(undefined2 *)(&DAT_18020eb28 + local_158 * 2);
          local_550 = 0x7f2421db9fdb7be1;
          local_558 = 0x87d58582031ecc63;
        }
      }
      if ((longlong)uVar3 < 0x1c6fa4afbb0deec1) break;
      if ((longlong)uVar3 < 0x34ab747c8cef20c3) {
        if ((longlong)uVar3 < 0x2b6f296f6edbfe87) {
          if ((longlong)uVar3 < 0x259343f15deb3d0e) {
            if (uVar3 == 0x1c6fa4afbb0deec1) {
              local_550 = 0x136960dcb8a4a527;
              if (local_53d < local_53a) {
                local_550 = 0x5fa091f07c8bf068;
              }
              local_558 = 0x24c54764150f8356;
              local_534 = local_53a;
              local_2e8 = local_420;
            }
            else if (uVar3 == 0x1d00a076ce3d2529) {
              local_550 = 0x2d86e45283234d8a;
              if (local_543 < '\t') {
                local_550 = 0xcee0e49b8b1b5e76;
              }
              local_558 = 0x2aedf9fdb9799a54;
            }
          }
          else if (uVar3 == 0x259343f15deb3d0e) {
            local_298 = local_d0 + -1;
            local_550 = 0x40660a6a92b92830;
            if (local_330 == local_298) {
              local_550 = 0xa32c27c1911fef36;
            }
            local_558 = 0x19bac2a2d0ed9e36;
          }
          else if (uVar3 == 0x25ec15544050c879) {
            if ((local_3c0 | local_4d0) >> 0x20 == 0) {
              local_170 = (local_3c0 & 0xffffffff) / (local_4d0 & 0xffffffff);
            }
            else {
              local_170 = local_3c0 / local_4d0;
            }
            local_500 = local_4ec + local_4d4;
            local_550 = 0xbd013006377568a6;
            if (local_3c0 < local_430) {
              local_550 = 0x3e4ac77a235d7d81;
            }
            local_558 = 0x89aa447abb9a4865;
            local_49c = local_500;
          }
          else if (uVar3 == 0x262f0cd0731d0e70) {
            *(byte *)(local_198 + -1) = local_546 | (byte)local_1a0;
            local_550 = 0x7a32f81c9584a329;
            local_558 = 0xb71191d241a95b2a;
          }
        }
        else if ((longlong)uVar3 < 0x30251f6cd279f276) {
          if (uVar3 == 0x2b6f296f6edbfe87) {
            local_370 = param_1 + 0x4f;
            plVar7 = local_490;
            if (local_508 < (ulonglong)param_1[0x4f]) {
              plVar7 = (longlong *)*local_490;
            }
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar7,local_390);
            plVar7 = (longlong *)*param_1;
            pcVar2 = *(code **)(*plVar7 + 8);
            in_stack_fffffffffffffa98 = &DAT_1802a23b0;
            FUN_1800b8f52(&DAT_1802a23a4,&DAT_18027335c,0x14,0xb,&DAT_1802a23b0);
            (*pcVar2)(plVar7,&DAT_1802a23a4);
            local_368 = (longlong *)(param_2 + 8);
            local_360 = (byte *)**(undefined8 **)(param_2 + 8);
            local_130 = (byte *)(*(undefined8 **)(param_2 + 8))[1];
            local_550 = 0x3c4eb78b3d199f9f;
            if (local_360 == local_130) {
              local_550 = 0x7f30ac78cc741c16;
            }
            local_558 = 0xedecefadf5300053;
          }
          else if (uVar3 == 0x2e5b6dac1865b248) {
            if ((local_2c0 | local_510) >> 0x20 == 0) {
              uVar3 = (local_2c0 & 0xffffffff) % (local_510 & 0xffffffff);
            }
            else {
              uVar3 = local_2c0 % local_510;
            }
            if ((local_2c0 | local_510) >> 0x20 == 0) {
              local_238 = (local_2c0 & 0xffffffff) / (local_510 & 0xffffffff);
            }
            else {
              local_238 = local_2c0 / local_510;
            }
            *(undefined2 *)(local_2b8 + -2) = *(undefined2 *)(&DAT_18020ebf0 + uVar3 * 2);
            local_2b8 = local_2b8 + -2;
            local_550 = 0x9fe705488636d7f4;
            if (local_450 < local_2c0) {
              local_550 = 0x11f959486b99ff28;
            }
            local_558 = 0x3fa234e473fc4d60;
            local_2c0 = local_238;
            local_240 = local_2b8;
          }
        }
        else if (uVar3 == 0x30251f6cd279f276) {
          if ((local_1c8 | local_510) >> 0x20 == 0) {
            uVar3 = (local_1c8 & 0xffffffff) % (local_510 & 0xffffffff);
          }
          else {
            uVar3 = local_1c8 % local_510;
          }
          if ((local_1c8 | local_510) >> 0x20 == 0) {
            local_258 = (local_1c8 & 0xffffffff) / (local_510 & 0xffffffff);
          }
          else {
            local_258 = local_1c8 / local_510;
          }
          *(undefined2 *)(local_1c0 + -2) = *(undefined2 *)(&DAT_18020ebf0 + uVar3 * 2);
          local_260 = local_1c0 + -2;
          local_550 = 0x581ef3c0ddd12730;
          if (local_450 < local_1c8) {
            local_550 = 0x247a9adb371fede0;
          }
          local_558 = 0x145f85b7e5661f96;
          local_1c8 = local_258;
          local_1c0 = local_260;
        }
        else if (uVar3 == 0x318d1f3d5d27fd48) {
          in_stack_fffffffffffffa98 = &DAT_1802a2378;
          FUN_1800b8f52(&DAT_1802a2374,&DAT_180273232,0x18,3,&DAT_1802a2378);
          (*local_350)(local_358,&DAT_1802a2374);
          local_390 = (ulonglong)(uint)(param_6 + param_5);
          local_490 = param_1 + 0x4c;
          local_148 = param_1[0x4e];
          local_550 = 0xb328408e5e80299a;
          if (local_148 < local_390) {
            local_550 = 0x1633d25632e1ad0;
          }
          local_558 = 0x984769e1305bd71d;
        }
        else if (uVar3 == 0x331ed20dd61d3c9e) {
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_398);
          local_550 = 0x223b5791eed90520;
          local_558 = 0x2fa64ddc23d3d94b;
        }
      }
      else if ((longlong)uVar3 < 0x37ac27b8adab2671) {
        if ((longlong)uVar3 < 0x360984af5bb528af) {
          if (uVar3 == 0x34ab747c8cef20c3) {
            local_3c0 = local_170;
            local_4ec = local_49c;
            local_550 = 0xe2cee5d0e703e993;
            if (local_170 < local_510) {
              local_550 = 0xb8a0ef0ba7f6e642;
            }
            local_558 = 0xe6676f8b73135d92;
          }
          else if (uVar3 == 0x34c176edb0a74b6d) {
            *(byte *)(local_1f0 + -1) = local_532 | local_546;
            local_550 = 0x7ea569b7ce0cd037;
            local_558 = 0xb42c2e2b2d33a608;
          }
        }
        else if (uVar3 == 0x360984af5bb528af) {
          plVar7 = (longlong *)*param_1;
          pcVar2 = *(code **)(*plVar7 + 8);
          in_stack_fffffffffffffa98 = &DAT_1802a20a4;
          FUN_1800b8f52(&DAT_1802a209c,&DAT_180271da3,0x16,5,&DAT_1802a20a4);
          (*pcVar2)(plVar7,&DAT_1802a209c);
          local_550 = 0xf0000e045c7f7eef;
          local_558 = 0x59a385d973a2988;
        }
        else if (uVar3 == 0x36a6581ea4b96e08) {
          *(undefined2 *)(local_88 + -2) = *(undefined2 *)(&DAT_18020ebf0 + local_90 * 2);
          local_550 = 0xb4cc75a1207f7f3f;
          local_558 = 0xcd1c2a87bd60d007;
        }
        else if (uVar3 == 0x36caa893e4ae00e3) {
          *(undefined2 *)(local_3f8 + -2) = *(undefined2 *)(&DAT_18020eb28 + (ulonglong)(local_539 % local_545) * 2);
          local_533 = local_539 / local_545;
          local_280 = local_3f8 + -2;
          local_550 = 0xf97a3be5d7711cf3;
          local_558 = 0x789c007ff6c483b7;
        }
      }
      else if ((longlong)uVar3 < 0x3b303dc02345a56d) {
        if (uVar3 == 0x37ac27b8adab2671) {
          *(byte *)(local_2e8 + -1) = local_534 | local_546;
          local_550 = 0xa75c183df523bb82;
          local_558 = 0x5fadbc6469e60c00;
        }
        else if (uVar3 == 0x3923ca1926da78fd) {
          local_4fc = local_4f0 + local_51c;
          local_550 = 0x3b4fd989f41d4b13;
          local_558 = 0xd6b94055b1726b29;
        }
      }
      else if (uVar3 == 0x3b303dc02345a56d) {
        local_270 = local_460;
        local_468 = (longlong *)local_460[1];
        local_550 = 0x35ef0742b947343e;
        if (*(byte *)((longlong)local_468 + 0x19) == local_544) {
          local_550 = 0xe3f1317d9abdc452;
        }
        local_558 = 0x5aafd1c9b9d5fe7f;
        local_278 = local_468;
      }
      else if (uVar3 == 0x3d2b38372af13db4) {
        local_550 = 0x8460f1718f0f4791;
        local_558 = 0x7b25281277638e76;
        uVar1 = local_51c;
LAB_180091dfa:
        local_4f8 = local_4f4 + uVar1;
      }
      else if (uVar3 == 0x3f8d398d4fa8086f) {
        local_2d8 = (longlong)param_1 + 0x11;
        local_550 = 0xb0ac1a92621c9914;
        local_558 = 0x7a7d72932e130206;
        local_2e0 = local_3d8;
      }
    }
    if ((longlong)uVar3 < 0xd9d1a4dcd0adc6b) {
      if ((longlong)uVar3 < 0x651fc9b2400e785) {
        if ((longlong)uVar3 < 0x5d95c611499aff0) {
          if (uVar3 == 0x4581ab6dd43908e) {
            pcVar2 = (code *)local_410[1];
            in_stack_fffffffffffffa98 = &DAT_1802a23a0;
            FUN_1800b8f52(&DAT_1802a239c,&DAT_18027332d,0x18,3,&DAT_1802a23a0);
            (*pcVar2)(local_418,&DAT_1802a239c);
            local_4a8 = param_6 + param_5;
            local_318 = (ulonglong)local_4a8;
            local_478 = param_1 + 0x4c;
            local_b8 = param_1[0x4e];
            local_550 = 0x154e5be673ac607f;
            if (local_b8 < local_318) {
              local_550 = 0xd721e694e38af0c2;
            }
            local_558 = 0x812c3d65f1f52f99;
          }
          else if (uVar3 == 0x4a98a5b9410b401) {
            local_550 = 0xc5b154b85971cdce;
            if (local_3c0 < local_440) {
              local_550 = 0xf005fab02b580218;
            }
            local_558 = 0xb1aa46da1fd81a47;
          }
        }
        else if (uVar3 == 0x5d95c611499aff0) {
          local_550 = 0xe4136f73716f2f57;
          if (param_3 != '\0') {
            local_550 = 0x422a0b2c1dfc419a;
          }
          local_558 = 0x5b2af2e188fcbf5a;
        }
        else if (uVar3 == 0x64f7bb0d019c3d0) {
          local_a0 = local_2b0;
          local_53b = *local_2b0;
          local_550 = 0xd08ebf784c08cb1a;
          if (local_53b == local_544) {
            local_550 = 0x427848d969807d26;
          }
          local_558 = 0x85571deebb97d9fb;
        }
      }
      else if ((longlong)uVar3 < 0x8d0f1a24d55483a) {
        if (uVar3 == 0x651fc9b2400e785) {
          local_120 = param_1 + 0x4f;
          local_550 = 0xc01784892fe5e02a;
          local_558 = 0x4dd3f0d4222a3cf3;
          local_208 = local_4c8;
          local_200 = local_168;
        }
        else if (uVar3 == 0x76b1daf3a5ad7de) {
          local_550 = 0x2fae63f9995e8270;
          if (local_543 == '\t') {
            local_550 = 0xaa4892590d5eb3a;
          }
          local_558 = 0x8890759cb308f13b;
        }
      }
      else if (uVar3 == 0x8d0f1a24d55483a) {
        local_550 = 0x58ce9409bf18b734;
        if (local_3c8 < local_440) {
          local_550 = 0x8897ef5b16f3312a;
        }
        local_558 = 0xfd01dc5582cb6a9c;
      }
      else {
        if (uVar3 == 0xc2ad3a6901a9145) {
          local_550 = 0x2e75821963a07eb;
          local_558 = 0xfda281426e56ce0c;
          uVar1 = local_4d8;
          goto LAB_180091dfa;
        }
        if (uVar3 == 0xd1258dbd20fac83) {
          in_stack_fffffffffffffa98 = &DAT_1802a23e0;
          FUN_1800b8f52(&DAT_1802a23d4,&DAT_180273431,0x10,0xb,&DAT_1802a23e0);
          (*local_350)(local_358,&DAT_1802a23d4);
          local_338 = (longlong *)(param_2 + 8);
          local_330 = (byte *)**(undefined8 **)(param_2 + 8);
          local_d0 = (byte *)(*(undefined8 **)(param_2 + 8))[1];
          local_550 = 0x804dfaee93fab76f;
          if (local_330 == local_d0) {
            local_550 = 0xb58a94f9e695c625;
          }
          local_558 = 0xa5deb91fce118a61;
        }
      }
      goto LAB_18008f230;
    }
    if ((longlong)uVar3 < 0x15637fe2611ef647) {
      if ((longlong)uVar3 < 0x10542de628844c44) {
        if (uVar3 == 0xd9d1a4dcd0adc6b) {
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_537);
          local_2f0 = local_a8 + 1;
          local_298 = (byte *)(*(longlong *)(*local_338 + 8) + -1);
          local_550 = 0x2f3351749584acd1;
          if (local_2f0 == local_298) {
            local_550 = 0x827cf81bf4f1f584;
          }
          local_558 = 0x38ea1d78b5038484;
        }
        else if (uVar3 == 0xea05b4406df7bb0) {
          local_500 = local_4ec + local_4dc;
          local_550 = 0xc1cffed0dcd19bb7;
          local_558 = 0x762f7dd04416ae53;
        }
      }
      else if (uVar3 == 0x10542de628844c44) {
        plVar7 = (longlong *)*param_1;
        pcVar2 = *(code **)(*plVar7 + 8);
        in_stack_fffffffffffffa98 = &DAT_1802a23f4;
        FUN_1800b8f52(&DAT_1802a23e4,&DAT_18027345c,0x14,0xd,&DAT_1802a23f4);
        (*pcVar2)(plVar7,&DAT_1802a23e4);
        local_e0 = *local_338;
        local_550 = 0x53960ceb850b05c9;
        if (*(char *)(local_e0 + 0x20) != '\0') {
          local_550 = 0xfca20a3db172221f;
        }
        local_558 = 0xb19f78518e6eba90;
      }
      else if (uVar3 == 0x111b682ddbbd3c3f) {
        plVar7 = (longlong *)*param_1;
        pcVar2 = *(code **)(*plVar7 + 8);
        in_stack_fffffffffffffa98 = &DAT_1802a20a4;
        FUN_1800b8f52(&DAT_1802a209c,&DAT_180271da3,0x16,5,&DAT_1802a20a4);
        (*pcVar2)(plVar7,&DAT_1802a209c);
        local_550 = 0xffad493a9be73d00;
        local_558 = 0x1d4e5e735b8f7909;
      }
      else if (uVar3 == 0x11663082e8d09da2) {
        local_340 = param_1 + 2;
        local_550 = 0x7c0f8bafc8034bbe;
        local_558 = 0x7a40f01f181a886e;
        local_2b0 = local_360;
      }
    }
    else if ((longlong)uVar3 < 0x17d94c0c20872855) {
      if (uVar3 == 0x15637fe2611ef647) {
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_546);
        local_550 = 0x820f9f7cb38ef255;
        local_558 = 0x60ec883573e6b65c;
      }
      else if (uVar3 == 0x16052e71265660dc) {
        local_198 = (longlong)param_1 + 0x11;
        local_550 = 0xa44320716a4ef284;
        local_558 = 0x826c2ca11953fcf4;
        local_1a0 = local_428;
      }
    }
    else if (uVar3 == 0x17d94c0c20872855) {
      local_a8 = local_2f0;
      local_53c = *local_2f0;
      local_550 = 0x3dbcb7604f85e9e7;
      if (local_53c == local_544) {
        local_550 = 0xa7ce10589401bb2a;
      }
      local_558 = 0xc15d8ec977375b47;
    }
    else if (uVar3 == 0x17f8069e3fe5836e) {
      in_stack_fffffffffffffa98 = &DAT_1802a2368;
      FUN_1800b8f52(&DAT_1802a2360,&DAT_18027262e,0x19,6,&DAT_1802a2368);
      (*local_378)(local_380,&DAT_1802a2360);
      local_550 = 0x9c6abd1f7c2ccce3;
      local_558 = 0x7e89aa56bc4488ea;
    }
    else if (uVar3 == 0x1900f9cd9500fec0) {
      pcVar2 = (code *)local_3e8[1];
      in_stack_fffffffffffffa98 = &DAT_1802a2378;
      FUN_1800b8f52(&DAT_1802a2374,&DAT_180273232,0x18,3,&DAT_1802a2378);
      (*pcVar2)(local_3f0,&DAT_1802a2374);
      local_4ac = param_6 + param_5;
      local_320 = (ulonglong)local_4ac;
      local_480 = param_1 + 0x4c;
      local_c0 = param_1[0x4e];
      local_550 = 0xa0465a4b0f361a3f;
      if (local_c0 < local_320) {
        local_550 = 0xb7641314f0e19e44;
      }
      local_558 = 0xfd172a47d1dcada;
    }
  } while( true );
}


