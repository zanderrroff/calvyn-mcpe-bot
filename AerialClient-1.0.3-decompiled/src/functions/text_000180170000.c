#include "../include/aerialclient_types.h"


void Unwind_180170280(undefined8 param_1,longlong param_2)

{
  FUN_180131590(param_2 + 0xb0);
  return;
}



void Unwind_1801702f0(undefined8 param_1,longlong param_2)

{
  FUN_180131590(param_2 + 0x90);
  return;
}



float FUN_180170360(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;

  uVar7 = param_2[2];
  if (uVar7 == 0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = 0.0;
    uVar5 = 0;
    do {
      puVar8 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar8 = (undefined8 *)*param_2;
      }
      bVar3 = *(byte *)((longlong)puVar8 + uVar5);
      uVar11 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        uVar9 = (uint)bVar3;
        if ((bVar3 & 0xe0) == 0xc0) {
          uVar9 = 0x1f;
LAB_180170430:
          bVar4 = 0;
          uVar9 = uVar9 & uVar11;
        }
        else {
          if ((uVar9 & 0xfffffff0) == 0xe0) {
            uVar9 = 0xf;
            goto LAB_180170430;
          }
          uVar11 = 0xfffd;
          if ((uVar9 & 0xfffffff8) != 0xf0) goto LAB_1801703ca;
          bVar4 = 1;
          uVar9 = uVar9 & 7;
        }
        if (uVar5 + 1 < uVar7) {
          uVar12 = (uint)*(byte *)((longlong)puVar8 + uVar5 + 1);
          uVar10 = 0xfffd;
          uVar1 = uVar5 + 1;
          uVar11 = uVar10;
          if ((uVar12 & 0xffffffc0) == 0x80) {
            uVar9 = uVar12 & 0x3f | uVar9 << 6;
            uVar1 = uVar5 + 2;
            uVar11 = uVar9;
            if ((((bVar3 & 0xe0) != 0xc0) && (uVar1 < uVar7)) &&
               (uVar11 = uVar10, (*(byte *)((longlong)puVar8 + uVar1) & 0xc0) == 0x80)) {
              uVar9 = *(byte *)((longlong)puVar8 + uVar1) & 0x3f | uVar9 << 6;
              uVar2 = uVar5 + 3;
              uVar1 = uVar2;
              uVar11 = uVar9;
              if (((bool)(bVar4 & uVar2 < uVar7)) &&
                 (uVar11 = uVar10, (*(byte *)((longlong)puVar8 + uVar2) & 0xffffffc0) == 0x80)) {
                uVar1 = uVar5 + 4;
                uVar11 = *(byte *)((longlong)puVar8 + uVar2) & 0x3f | uVar9 << 6;
              }
            }
          }
        }
        else {
          uVar1 = uVar5 + 1;
          uVar11 = uVar9;
        }
      }
      else {
LAB_1801703ca:
        uVar1 = uVar5 + 1;
      }
      uVar5 = uVar1;
      lVar6 = FUN_18016f810(DAT_1802a6c60,DAT_1802a6c68,uVar11,param_3,param_4);
      if (lVar6 != 0) {
        fVar13 = fVar13 + *(float *)(lVar6 + 0x20);
      }
      uVar7 = param_2[2];
    } while (uVar5 < uVar7);
  }
  return fVar13;
}



void FUN_180170550(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_48 [32];
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  ulonglong local_8;

  puVar5 = DAT_1802a6c40;
  local_8 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  local_18 = fVar1;
  fStack_14 = fVar2;
  fStack_10 = fVar3;
  fStack_c = fVar4;
  if (DAT_1802a6c38 != DAT_1802a6c40) {
    local_18 = *(float *)(DAT_1802a6c40 + -2);
    if (*(float *)(DAT_1802a6c40 + -2) <= fVar1) {
      local_18 = fVar1;
    }
    fStack_14 = *(float *)((longlong)DAT_1802a6c40 + -0xc);
    if (*(float *)((longlong)DAT_1802a6c40 + -0xc) <= fVar2) {
      fStack_14 = fVar2;
    }
    fStack_10 = *(float *)(DAT_1802a6c40 + -1);
    if (fVar3 <= *(float *)(DAT_1802a6c40 + -1)) {
      fStack_10 = fVar3;
    }
    fStack_c = *(float *)((longlong)DAT_1802a6c40 + -4);
    if (fVar4 <= *(float *)((longlong)DAT_1802a6c40 + -4)) {
      fStack_c = fVar4;
    }
  }
  if (DAT_1802a6c40 == DAT_1802a6c48) {
    FUN_180171ee0(&DAT_1802a6c38,DAT_1802a6c40,&local_18);
  }
  else {
    *DAT_1802a6c40 = CONCAT44(fStack_14,local_18);
    puVar5[1] = CONCAT44(fStack_c,fStack_10);
    DAT_1802a6c40 = DAT_1802a6c40 + 2;
  }
  auVar7._4_4_ = fStack_14;
  auVar7._0_4_ = local_18;
  auVar6._4_4_ = fStack_c;
  auVar6._0_4_ = fStack_10;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7 = maxps(auVar6,auVar7);
  local_28 = (int)local_18;
  iStack_24 = (int)fStack_14;
  iStack_20 = (int)auVar7._0_4_;
  iStack_1c = (int)auVar7._4_4_;
  if (DAT_1802a6c68 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c68 + 0x168))(DAT_1802a6c68,1,&local_28);
  }
  if (DAT_1802a0400 != (local_8 ^ (ulonglong)auStack_48)) {
  }
  return;
}



void FUN_180170650(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_10;
  undefined8 local_8;

  if (DAT_1802a6c38 != DAT_1802a6c40) {
    DAT_1802a6c40 = DAT_1802a6c40 + -0x10;
  }
  if (DAT_1802a6c68 != (longlong *)0x0) {
    if (DAT_1802a6c38 == DAT_1802a6c40) {
      local_10 = 0;
      local_8 = CONCAT44((int)(float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20),
                         (int)(float)*(undefined8 *)(param_1 + 4));
    }
    else {
      fVar1 = *(float *)(DAT_1802a6c40 + -0x10);
      fVar2 = *(float *)(DAT_1802a6c40 + -0xc);
      local_10 = CONCAT44((int)fVar2,(int)fVar1);
      fVar3 = *(float *)(DAT_1802a6c40 + -8);
      if (*(float *)(DAT_1802a6c40 + -8) <= fVar1) {
        fVar3 = fVar1;
      }
      fVar1 = *(float *)(DAT_1802a6c40 + -4);
      if (*(float *)(DAT_1802a6c40 + -4) <= fVar2) {
        fVar1 = fVar2;
      }
      local_8 = CONCAT44((int)fVar1,(int)fVar3);
    }
    (**(code **)(*DAT_1802a6c68 + 0x168))(DAT_1802a6c68,1,&local_10);
  }
  return;
}



void FUN_180170700(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;

  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x28) - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_1801f42e0(puVar2,0x20);
    puVar2 = puVar3;
  }
  thunk_FUN_1801f42e0(*(undefined8 *)(param_1 + 8),0x20);
  return;
}



undefined4 * FUN_1801707c0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;

  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_1801d61c8(0x20);
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
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) {
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



void Unwind_1801708f0(undefined8 param_1,longlong param_2)

{
  FUN_18016f400(*(undefined8 *)(param_2 + 0x30));
  FUN_180170b00(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_180170930(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  ulonglong uVar9;
  undefined4 *puVar11;

  uVar10 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar8 = (undefined4)param_3;
  puVar11 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  if ((ulonglong)((longlong)puVar3 - (longlong)puVar11 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
LAB_180170ad6:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    lVar2 = param_2 * 8;
    if (param_2 < 0x200) {
      puVar11 = (undefined4 *)FUN_1801d61c8(lVar2);
      lVar4 = *param_1;
      uVar6 = param_1[2] - lVar4;
    }
    else {
      if (0x1ffffffffffffffb < param_2) goto LAB_180170ad6;
      lVar4 = FUN_1801d61c8(lVar2 + 0x27);
      puVar11 = (undefined4 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar11 + -2) = lVar4;
      lVar4 = *param_1;
      uVar6 = param_1[2] - lVar4;
    }
    if (uVar6 != 0) {
      lVar5 = lVar4;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar4 + -8);
        if (0x1f < (ulonglong)((lVar4 + -8) - lVar5)) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar6 = uVar6 + 0x27;
      }
      thunk_FUN_1801f42e0(lVar5,uVar6);
    }
    *param_1 = (longlong)puVar11;
    puVar3 = puVar11 + param_2 * 2;
    param_1[1] = (longlong)puVar3;
    param_1[2] = (longlong)puVar3;
    if (0x17 < lVar2 - 8U) {
      uVar7 = (lVar2 - 8U >> 3) + 1;
      uVar6 = uVar7 & 0xfffffffffffffffc;
      uVar9 = 0;
      do {
        puVar1 = puVar11 + uVar9 * 2;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1[2] = uVar8;
        puVar1[3] = uVar10;
        puVar1 = puVar11 + uVar9 * 2 + 4;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1[2] = uVar8;
        puVar1[3] = uVar10;
        uVar9 = uVar9 + 4;
      } while (uVar6 != uVar9);
      puVar11 = puVar11 + uVar6 * 2;
      if (uVar7 == uVar6) {
        return;
      }
    }
    do {
      *puVar11 = uVar8;
      puVar11[1] = uVar10;
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar3);
  }
  else if (puVar11 != puVar3) {
    uVar6 = ((longlong)puVar3 - (longlong)puVar11) - 8;
    if (0x17 < uVar6) {
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0xfffffffffffffffc;
      uVar9 = 0;
      do {
        puVar1 = puVar11 + uVar9 * 2;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1[2] = uVar8;
        puVar1[3] = uVar10;
        puVar1 = puVar11 + uVar9 * 2 + 4;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1[2] = uVar8;
        puVar1[3] = uVar10;
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
      puVar11 = puVar11 + uVar7 * 2;
      if (uVar6 == uVar7) {
        return;
      }
    }
    do {
      *puVar11 = uVar8;
      puVar11[1] = uVar10;
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar3);
  }
  return;
}



void FUN_180170b00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1801f42e0(puVar1,0x20);
    puVar1 = puVar2;
  }
  thunk_FUN_1801f42e0(*param_1,0x20);
  return;
}



void FUN_180170b50(ulonglong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;

  puVar4 = DAT_1802a6c18;
  puVar9 = DAT_1802a6c10;
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  if ((ulonglong)((longlong)DAT_1802a6c18 - (longlong)DAT_1802a6c10 >> 3) < param_1) {
    if (param_1 >> 0x3d != 0) {
LAB_180170d14:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    lVar2 = param_1 * 8;
    if (param_1 < 0x200) {
      puVar9 = (undefined4 *)FUN_1801d61c8(lVar2);
      uVar7 = (longlong)DAT_1802a6c20 - (longlong)DAT_1802a6c10;
    }
    else {
      if (0x1ffffffffffffffb < param_1) goto LAB_180170d14;
      lVar3 = FUN_1801d61c8(lVar2 + 0x27);
      puVar9 = (undefined4 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar9 + -2) = lVar3;
      uVar7 = (longlong)DAT_1802a6c20 - (longlong)DAT_1802a6c10;
    }
    if (uVar7 != 0) {
      puVar4 = DAT_1802a6c10;
      if (0xfff < uVar7) {
        puVar4 = *(undefined4 **)(DAT_1802a6c10 + -2);
        if (0x1f < (ulonglong)((longlong)DAT_1802a6c10 + (-8 - (longlong)puVar4))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar7 = uVar7 + 0x27;
      }
      thunk_FUN_1801f42e0(puVar4,uVar7);
    }
    puVar4 = puVar9 + param_1 * 2;
    DAT_1802a6c10 = puVar9;
    DAT_1802a6c18 = puVar4;
    DAT_1802a6c20 = puVar4;
    if (0x17 < lVar2 - 8U) {
      uVar10 = (lVar2 - 8U >> 3) + 1;
      uVar7 = uVar10 & 0xfffffffffffffffc;
      uVar11 = 0;
      do {
        puVar5 = puVar9 + uVar11 * 2;
        *puVar5 = uVar6;
        puVar5[1] = uVar8;
        puVar5[2] = uVar6;
        puVar5[3] = uVar8;
        puVar5 = puVar9 + uVar11 * 2 + 4;
        *puVar5 = uVar6;
        puVar5[1] = uVar8;
        puVar5[2] = uVar6;
        puVar5[3] = uVar8;
        uVar11 = uVar11 + 4;
      } while (uVar7 != uVar11);
      puVar9 = puVar9 + uVar7 * 2;
      if (uVar10 == uVar7) {
        return;
      }
    }
    do {
      *puVar9 = uVar6;
      puVar9[1] = uVar8;
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar4);
  }
  else if (DAT_1802a6c10 != DAT_1802a6c18) {
    uVar7 = ((longlong)DAT_1802a6c18 - (longlong)DAT_1802a6c10) - 8;
    puVar5 = DAT_1802a6c10;
    if (0x17 < uVar7) {
      uVar7 = (uVar7 >> 3) + 1;
      uVar10 = uVar7 & 0xfffffffffffffffc;
      puVar5 = DAT_1802a6c10 + uVar10 * 2;
      uVar11 = 0;
      do {
        puVar1 = puVar9 + uVar11 * 2;
        *puVar1 = uVar6;
        puVar1[1] = uVar8;
        puVar1[2] = uVar6;
        puVar1[3] = uVar8;
        puVar1 = puVar9 + uVar11 * 2 + 4;
        *puVar1 = uVar6;
        puVar1[1] = uVar8;
        puVar1[2] = uVar6;
        puVar1[3] = uVar8;
        uVar11 = uVar11 + 4;
      } while (uVar10 != uVar11);
      if (uVar7 == uVar10) {
        return;
      }
    }
    do {
      *puVar5 = uVar6;
      puVar5[1] = uVar8;
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  return;
}



void FUN_180170d40(void)

{
  longlong lVar1;
  ulonglong uVar2;

  if (DAT_1802a6c10 != 0) {
    uVar2 = DAT_1802a6c20 - DAT_1802a6c10;
    lVar1 = DAT_1802a6c10;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(DAT_1802a6c10 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6c10 + -8) - lVar1)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
    DAT_1802a6c10 = 0;
    DAT_1802a6c18 = 0;
    DAT_1802a6c20 = 0;
  }
  return;
}



void FUN_180170dc0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar2 = DAT_1802a6c00;
  *(undefined8 *)DAT_1802a6c00[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1801f42e0(puVar2,0x40);
    puVar2 = puVar1;
  }
  thunk_FUN_1801f42e0(DAT_1802a6c00,0x40);
  return;
}



void FUN_180170e10(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_88 = *param_3;
    local_80 = param_3[1];
    local_a8 = *param_4;
    local_b8 = 0xb000000000000000;
    local_a0 = *param_5;
    local_b0 = 0xb000000000000008;
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (0xf < local_80 + 0x40U) {
      FUN_180002240(&local_68);
    }
    local_58 = 0;
    local_98 = 2;
    local_90 = &local_b8;
    FUN_180003080(local_d0,&local_68,&local_88,&local_98,0);
    local_78 = &local_68;
    if (0xf < local_50) {
      local_78 = local_68;
    }
    local_70 = local_58;
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_c8);
    if (0xf < local_50) {
      uVar3 = local_50 + 1;
      pppuVar4 = (undefined8 ***)local_68;
      if (0xfff < uVar3) {
        pppuVar4 = (undefined8 ***)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppuVar4))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = local_50 + 0x28;
      }
      thunk_FUN_1801f42e0(pppuVar4,uVar3);
    }
  }
  return;
}



void Unwind_180170fa0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_180170fe0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void FUN_180171020(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;

  if (*(ulonglong *)(param_1 + 0x10) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x38) >> 3 <= *(ulonglong *)(param_1 + 0x10)) {
    *(undefined8 *)plVar2[1] = 0;
    puVar10 = (undefined8 *)*plVar2;
    while (puVar10 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar10;
      thunk_FUN_1801f42e0(puVar10,0x40);
      puVar10 = puVar6;
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar14 = *(undefined4 **)(param_1 + 0x18);
    puVar7 = *(undefined4 **)(param_1 + 0x20);
    if (puVar14 == puVar7) {
      return;
    }
    uVar8 = *(undefined4 *)(param_1 + 8);
    uVar9 = *(undefined4 *)(param_1 + 0xc);
    uVar15 = (longlong)puVar7 + (-8 - (longlong)puVar14);
    if (0x17 < uVar15) {
      uVar15 = (uVar15 >> 3) + 1;
      uVar16 = uVar15 & 0xfffffffffffffffc;
      uVar17 = 0;
      do {
        puVar1 = puVar14 + uVar17 * 2;
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        puVar1 = puVar14 + uVar17 * 2 + 4;
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        uVar17 = uVar17 + 4;
      } while (uVar16 != uVar17);
      puVar14 = puVar14 + uVar16 * 2;
      if (uVar15 == uVar16) {
        return;
      }
    }
    do {
      *puVar14 = uVar8;
      puVar14[1] = uVar9;
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar7);
    return;
  }
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == plVar2) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  plVar5 = (longlong *)plVar3[1];
  lVar18 = (((ulonglong)*(byte *)((longlong)plVar3 + 0x17) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x16) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x15) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x14) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x13) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x12) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x11) ^
            ((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 &
           *(ulonglong *)(param_1 + 0x30)) * 0x10;
  lVar19 = *(longlong *)(lVar4 + lVar18);
  plVar11 = *(longlong **)(lVar4 + 8 + lVar18);
  plVar12 = plVar3;
  if ((longlong *)lVar19 == plVar3) {
    do {
      plVar13 = (longlong *)*plVar12;
      thunk_FUN_1801f42e0(plVar12,0x40);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar12 == plVar11) goto LAB_180171166;
      plVar12 = plVar13;
    } while (plVar13 != plVar2);
    *(longlong **)(lVar4 + lVar18) = plVar13;
  }
  else {
    do {
      plVar13 = (longlong *)*plVar12;
      thunk_FUN_1801f42e0(plVar12,0x40);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar12 == plVar11) goto LAB_180171166;
      plVar12 = plVar13;
    } while (plVar13 != plVar2);
  }
LAB_18017132d:
  *plVar5 = (longlong)plVar13;
  plVar13[1] = (longlong)plVar5;
  return;
LAB_180171166:
  plVar11 = plVar5;
  if ((longlong *)lVar19 == plVar3) {
    *(longlong **)(lVar4 + lVar18) = plVar2;
    plVar11 = plVar2;
  }
  *(longlong **)(lVar4 + 8 + lVar18) = plVar11;
  while (plVar13 != plVar2) {
    lVar19 = (((ulonglong)*(byte *)((longlong)plVar13 + 0x17) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x16) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x15) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x14) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x13) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x12) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x11) ^
              ((ulonglong)*(byte *)(plVar13 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3
              ) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 &
             *(ulonglong *)(param_1 + 0x30)) * 0x10;
    plVar3 = *(longlong **)(lVar4 + 8 + lVar19);
    plVar11 = plVar13;
    while( true ) {
      plVar13 = (longlong *)*plVar11;
      thunk_FUN_1801f42e0(plVar11,0x40);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar11 == plVar3) break;
      plVar11 = plVar13;
      if (plVar13 == plVar2) {
        *(longlong **)(lVar4 + lVar19) = plVar13;
        goto LAB_18017132d;
      }
    }
    *(longlong **)(lVar4 + lVar19) = plVar2;
    *(longlong **)(lVar4 + 8 + lVar19) = plVar2;
  }
  goto LAB_18017132d;
}



void FUN_180171350(void)

{
  FUN_1801d7524("vector too long");
}



longlong FUN_180171370(uint param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong **local_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong *local_38;
  uint local_2c;
  longlong *local_28 [2];
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_78;
  lVar3 = (((ulonglong)(param_1 >> 0x18) ^
           ((ulonglong)(param_1 >> 0x10) & 0xff ^
           ((ulonglong)(byte)(param_1 >> 8) ^ ((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3) * 0x100000001b3 & _DAT_1802a6bc8) * 0x10;
  lVar2 = *(longlong *)(DAT_1802a6bb0 + 8 + lVar3);
  if (lVar2 != DAT_1802a6ba0) {
    if (param_1 != *(uint *)(lVar2 + 0x10)) {
      do {
        if (lVar2 == *(longlong *)(DAT_1802a6bb0 + lVar3)) goto LAB_18017141c;
        lVar2 = *(longlong *)(lVar2 + 8);
      } while (param_1 != *(uint *)(lVar2 + 0x10));
    }
    if (lVar2 != DAT_1802a6ba0) {
      local_48 = *(longlong *)(lVar2 + 0x18);
      goto LAB_180171568;
    }
  }
LAB_18017141c:
  local_2c = param_1;
  if (DAT_1802a6b90 == (longlong *)0x0) {
    DWriteCreateFactory(0,&DAT_18021e740,&DAT_1802a6b90);
    local_48 = 0;
    if (DAT_1802a6b90 == (longlong *)0x0) goto LAB_180171568;
  }
  local_38 = (longlong *)0x0;
  iVar1 = (**(code **)(*DAT_1802a6b90 + 0x18))(DAT_1802a6b90,&local_38,0);
  local_48 = 0;
  if (-1 < iVar1) {
    local_3c = 0;
    local_40 = 0;
    (**(code **)(*local_38 + 0x28))(local_38,L"Segoe UI",&local_3c,&local_40);
    local_48 = 0;
    local_50 = (longlong *)0x0;
    if (local_40 != 0) {
      iVar1 = (**(code **)(*local_38 + 0x20))(local_38,local_3c,&local_50);
      if (-1 < iVar1) {
        local_28[0] = (longlong *)0x0;
        iVar1 = 400;
        if (param_1 - 1 < 3) {
          iVar1 = param_1 * 100 + 400;
        }
        local_58 = local_28;
        iVar1 = (**(code **)(*local_50 + 0x38))(local_50,iVar1,5,0);
        if (-1 < iVar1) {
          (**(code **)(*local_28[0] + 0x68))(local_28[0],&local_48);
          (**(code **)(*local_28[0] + 0x10))();
        }
        (**(code **)(*local_50 + 0x10))();
      }
    }
    (**(code **)(*local_38 + 0x10))();
    lVar2 = local_48;
    FUN_1801715a0(&DAT_1802a6b98,local_28,&local_2c);
    local_28[0][3] = lVar2;
  }
LAB_180171568:
  if (DAT_1802a0400 == (local_18 ^ (ulonglong)auStack_78)) {
    return local_48;
  }
}



longlong * FUN_1801715a0(float *param_1,longlong *param_2,byte *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;

  uVar8 = ((ulonglong)param_3[3] ^
          ((ulonglong)param_3[2] ^
          ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3;
  lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != *(undefined8 **)(param_1 + 2)) {
    if (*(int *)param_3 != *(int *)(puVar1 + 2)) {
      do {
        puVar10 = puVar1;
        if (puVar1 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_180171649;
        puVar1 = (undefined8 *)puVar1[1];
      } while (*(int *)param_3 != *(int *)(puVar1 + 2));
    }
    uVar5 = 0;
    goto LAB_1801717fb;
  }
LAB_180171649:
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_1801d7524("unordered_map/set too long");
  }
  puVar1 = (undefined8 *)FUN_1801d61c8(0x20);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)param_3;
  puVar1[3] = 0;
  uVar3 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar3 < 0) {
    fVar11 = (float)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar3 < 0) goto LAB_18017168f;
LAB_1801716d9:
    if (fVar12 < fVar11 / (float)(longlong)uVar3) {
LAB_1801716ee:
      fVar12 = (float)FUN_1801eacf0(fVar11 / fVar12);
      uVar4 = (longlong)(fVar12 - 9.223372e+18) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
      uVar2 = 8;
      if (8 < uVar4) {
        uVar2 = uVar4;
      }
      uVar4 = uVar3;
      if (uVar3 < uVar2) {
        uVar4 = uVar3 * 8;
        if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
          uVar4 = uVar2;
        }
        if (0x1ff < uVar3) {
          uVar4 = uVar2;
        }
      }
      FUN_180171860(param_1,uVar4);
      lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
      puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
      puVar10 = *(undefined8 **)(param_1 + 2);
      if (puVar7 != *(undefined8 **)(param_1 + 2)) {
        if (*(int *)(puVar1 + 2) != *(int *)(puVar7 + 2)) {
          do {
            puVar10 = puVar7;
            if (puVar7 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1801717a7;
            puVar7 = (undefined8 *)puVar7[1];
          } while (*(int *)(puVar1 + 2) != *(int *)(puVar7 + 2));
        }
        puVar10 = (undefined8 *)*puVar7;
      }
    }
  }
  else {
    fVar11 = (float)(longlong)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar3) goto LAB_1801716d9;
LAB_18017168f:
    if (fVar12 < fVar11 / (float)uVar3) goto LAB_1801716ee;
  }
LAB_1801717a7:
  puVar7 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar1 = puVar10;
  puVar1[1] = puVar7;
  *puVar7 = puVar1;
  puVar10[1] = puVar1;
  lVar6 = *(longlong *)(param_1 + 6);
  lVar9 = (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar6 + lVar9) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + lVar9) = puVar1;
    *(undefined8 **)(lVar6 + 8 + lVar9) = puVar1;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar9) != puVar10) {
      uVar5 = 1;
      if (*(undefined8 **)(lVar6 + 8 + lVar9) == puVar7) {
        *(undefined8 **)(lVar6 + 8 + lVar9) = puVar1;
      }
      goto LAB_1801717fb;
    }
    *(undefined8 **)(lVar6 + lVar9) = puVar1;
  }
  uVar5 = 1;
LAB_1801717fb:
  *param_2 = (longlong)puVar1;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}



void Unwind_180171820(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x28),0x20);
  return;
}



void FUN_180171860(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;

  if (0x800000000000000 < param_2) {
    FUN_1801d7524("invalid hash bucket count");
  }
  uVar8 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  bVar7 = -((byte)lVar9 ^ 0x3f);
  lVar9 = 1L << (bVar7 & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_180170930(param_1 + 0x18,2L << (bVar7 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x30) = lVar9 + -1;
  *(longlong *)(param_1 + 0x38) = lVar9;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001801718cb:
  do {
    if (plVar6 == plVar1) {
      return;
    }
    plVar2 = (longlong *)*plVar6;
    lVar9 = *(longlong *)(param_1 + 0x18);
    lVar10 = (((ulonglong)*(byte *)((longlong)plVar6 + 0x13) ^
              ((ulonglong)*(byte *)((longlong)plVar6 + 0x12) ^
              ((ulonglong)*(byte *)((longlong)plVar6 + 0x11) ^
              ((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3)
              * 0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
    if (*(longlong **)(lVar9 + lVar10) == plVar1) {
      *(longlong **)(lVar9 + lVar10) = plVar6;
    }
    else {
      plVar11 = *(longlong **)(lVar9 + 8 + lVar10);
      if ((int)plVar6[2] != (int)plVar11[2]) {
        do {
          if (*(longlong **)(lVar9 + lVar10) == plVar11) {
            plVar3 = (longlong *)plVar6[1];
            *plVar3 = (longlong)plVar2;
            puVar4 = (undefined8 *)plVar2[1];
            *puVar4 = plVar11;
            puVar5 = (undefined8 *)plVar11[1];
            *puVar5 = plVar6;
            plVar11[1] = (longlong)puVar4;
            plVar2[1] = (longlong)plVar3;
            plVar6[1] = (longlong)puVar5;
            *(longlong **)(lVar9 + lVar10) = plVar6;
            plVar6 = plVar2;
            goto joined_r0x0001801718cb;
          }
          plVar11 = (longlong *)plVar11[1];
        } while ((int)plVar6[2] != (int)plVar11[2]);
        lVar9 = *plVar11;
        plVar11 = (longlong *)plVar6[1];
        *plVar11 = (longlong)plVar2;
        plVar3 = (longlong *)plVar2[1];
        *plVar3 = lVar9;
        puVar4 = *(undefined8 **)(lVar9 + 8);
        *puVar4 = plVar6;
        *(longlong **)(lVar9 + 8) = plVar3;
        plVar2[1] = (longlong)plVar11;
        plVar6[1] = (longlong)puVar4;
        plVar6 = plVar2;
        goto joined_r0x0001801718cb;
      }
      plVar11 = (longlong *)*plVar11;
      if (plVar11 != plVar6) {
        plVar3 = (longlong *)plVar6[1];
        *plVar3 = (longlong)plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar11;
        puVar5 = (undefined8 *)plVar11[1];
        *puVar5 = plVar6;
        plVar11[1] = (longlong)puVar4;
        plVar2[1] = (longlong)plVar3;
        plVar6[1] = (longlong)puVar5;
      }
    }
    *(longlong **)(lVar9 + 8 + lVar10) = plVar6;
    plVar6 = plVar2;
  } while( true );
}



longlong * FUN_180171a10(byte *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;

  uVar9 = ((ulonglong)param_1[7] ^
          ((ulonglong)param_1[6] ^
          ((ulonglong)param_1[5] ^
          ((ulonglong)param_1[4] ^
          ((ulonglong)param_1[3] ^
          ((ulonglong)param_1[2] ^
          ((ulonglong)param_1[1] ^ ((ulonglong)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
  lVar13 = (DAT_1802a6c28 & uVar9) * 0x10;
  plVar6 = *(longlong **)(DAT_1802a6c10 + 8 + lVar13);
  plVar12 = DAT_1802a6c00;
  if (plVar6 != DAT_1802a6c00) {
    if (*(longlong *)param_1 != plVar6[2]) {
      do {
        plVar12 = plVar6;
        if (plVar6 == *(longlong **)(DAT_1802a6c10 + lVar13)) goto LAB_180171ae7;
        plVar6 = (longlong *)plVar6[1];
      } while (*(longlong *)param_1 != plVar6[2]);
    }
    goto LAB_180171e71;
  }
LAB_180171ae7:
  if (DAT_1802a6c08 == 0x3ffffffffffffff) {
    FUN_1801d7524("unordered_map/set too long");
  }
  plVar6 = (longlong *)FUN_1801d61c8(0x40);
  plVar6[2] = *(longlong *)param_1;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  uVar11 = DAT_1802a6c30;
  uVar7 = DAT_1802a6c08 + 1;
  if ((longlong)uVar7 < 0) {
    fVar16 = (float)uVar7;
    if ((longlong)DAT_1802a6c30 < 0) goto LAB_180171b4a;
LAB_180171b9e:
    fVar17 = fVar16 / (float)(longlong)DAT_1802a6c30;
  }
  else {
    fVar16 = (float)(longlong)uVar7;
    if (-1 < (longlong)DAT_1802a6c30) goto LAB_180171b9e;
LAB_180171b4a:
    fVar17 = fVar16 / (float)DAT_1802a6c30;
  }
  if (DAT_1802a6bf8 < fVar17) {
    fVar16 = (float)FUN_1801eacf0(fVar16 / DAT_1802a6bf8);
    plVar12 = DAT_1802a6c00;
    uVar8 = (longlong)(fVar16 - 9.223372e+18) & (longlong)fVar16 >> 0x3f | (longlong)fVar16;
    uVar7 = 8;
    if (8 < uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = uVar11;
    if (uVar11 < uVar7) {
      uVar8 = uVar11 * 8;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0x1ff < uVar11) {
        uVar8 = uVar7;
      }
    }
    if (0x800000000000000 < uVar8) {
      FUN_1801d7524("invalid hash bucket count");
    }
    uVar11 = uVar8 - 1 | 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar5 = (char)lVar13 + 1;
    FUN_180170b50(2L << (bVar5 & 0x3f),DAT_1802a6c00);
    DAT_1802a6c30 = 1L << (bVar5 & 0x3f);
    DAT_1802a6c28 = DAT_1802a6c30 - 1;
    plVar15 = (longlong *)*DAT_1802a6c00;
    lVar13 = DAT_1802a6c10;
joined_r0x000180171c75:
    DAT_1802a6c10 = lVar13;
    if (plVar15 != plVar12) {
      plVar1 = (longlong *)*plVar15;
      lVar10 = (((ulonglong)*(byte *)((longlong)plVar15 + 0x17) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x16) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x15) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x14) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x13) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x12) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x11) ^
                ((ulonglong)*(byte *)(plVar15 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 &
               DAT_1802a6c28) * 0x10;
      if (*(longlong **)(lVar13 + lVar10) == plVar12) {
        *(longlong **)(lVar13 + lVar10) = plVar15;
      }
      else {
        plVar14 = *(longlong **)(lVar13 + 8 + lVar10);
        if (plVar15[2] != plVar14[2]) {
          do {
            if (*(longlong **)(lVar13 + lVar10) == plVar14) {
              puVar4 = (undefined8 *)plVar15[1];
              *puVar4 = plVar1;
              puVar2 = (undefined8 *)plVar1[1];
              *puVar2 = plVar14;
              puVar3 = (undefined8 *)plVar14[1];
              *puVar3 = plVar15;
              plVar14[1] = (longlong)puVar2;
              plVar1[1] = (longlong)puVar4;
              plVar15[1] = (longlong)puVar3;
              *(longlong **)(lVar13 + lVar10) = plVar15;
              plVar15 = plVar1;
              lVar13 = DAT_1802a6c10;
              goto joined_r0x000180171c75;
            }
            plVar14 = (longlong *)plVar14[1];
          } while (plVar15[2] != plVar14[2]);
          lVar13 = *plVar14;
          puVar4 = (undefined8 *)plVar15[1];
          *puVar4 = plVar1;
          plVar14 = (longlong *)plVar1[1];
          *plVar14 = lVar13;
          puVar2 = *(undefined8 **)(lVar13 + 8);
          *puVar2 = plVar15;
          *(longlong **)(lVar13 + 8) = plVar14;
          plVar1[1] = (longlong)puVar4;
          plVar15[1] = (longlong)puVar2;
          plVar15 = plVar1;
          lVar13 = DAT_1802a6c10;
          goto joined_r0x000180171c75;
        }
        plVar14 = (longlong *)*plVar14;
        if (plVar14 != plVar15) {
          puVar4 = (undefined8 *)plVar15[1];
          *puVar4 = plVar1;
          puVar2 = (undefined8 *)plVar1[1];
          *puVar2 = plVar14;
          puVar3 = (undefined8 *)plVar14[1];
          *puVar3 = plVar15;
          plVar14[1] = (longlong)puVar2;
          plVar1[1] = (longlong)puVar4;
          plVar15[1] = (longlong)puVar3;
        }
      }
      *(longlong **)(lVar13 + 8 + lVar10) = plVar15;
      plVar15 = plVar1;
      lVar13 = DAT_1802a6c10;
      goto joined_r0x000180171c75;
    }
    lVar10 = (DAT_1802a6c28 & uVar9) * 0x10;
    plVar15 = *(longlong **)(lVar13 + 8 + lVar10);
    plVar12 = DAT_1802a6c00;
    if (plVar15 != DAT_1802a6c00) {
      if (plVar6[2] != plVar15[2]) {
        plVar12 = plVar15;
        do {
          if (plVar12 == *(longlong **)(lVar13 + lVar10)) goto LAB_180171e17;
          plVar15 = (longlong *)plVar12[1];
          plVar12 = plVar15;
        } while (plVar6[2] != plVar15[2]);
      }
      plVar12 = (longlong *)*plVar15;
    }
  }
LAB_180171e17:
  puVar4 = (undefined8 *)plVar12[1];
  DAT_1802a6c08 = DAT_1802a6c08 + 1;
  *plVar6 = (longlong)plVar12;
  plVar6[1] = (longlong)puVar4;
  *puVar4 = plVar6;
  plVar12[1] = (longlong)plVar6;
  lVar13 = DAT_1802a6c10;
  lVar10 = (uVar9 & DAT_1802a6c28) * 0x10;
  if (*(longlong **)(DAT_1802a6c10 + lVar10) == DAT_1802a6c00) {
    *(longlong **)(DAT_1802a6c10 + lVar10) = plVar6;
    *(longlong **)(lVar13 + 8 + lVar10) = plVar6;
  }
  else if (*(longlong **)(DAT_1802a6c10 + lVar10) == plVar12) {
    *(longlong **)(DAT_1802a6c10 + lVar10) = plVar6;
  }
  else if (*(undefined8 **)(DAT_1802a6c10 + 8 + lVar10) == puVar4) {
    *(longlong **)(DAT_1802a6c10 + 8 + lVar10) = plVar6;
  }
LAB_180171e71:
  return plVar6 + 3;
}



void Unwind_180171ea0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x28),0x40);
  return;
}



longlong FUN_180171ee0(ulonglong *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;

  uVar2 = *param_1;
  uVar11 = ((longlong)(param_1[1] - uVar2) >> 4) + 1;
  uVar8 = (longlong)(param_1[2] - uVar2) >> 4;
  uVar6 = (uVar8 >> 1) + uVar8;
  if (uVar6 <= uVar11) {
    uVar6 = uVar11;
  }
  if (0xfffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar6 = 0xfffffffffffffff;
  }
  if (uVar6 >> 0x3c == 0) {
    lVar10 = uVar6 * 0x10;
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else if (uVar6 < 0x100) {
      uVar6 = FUN_1801d61c8(lVar10);
    }
    else {
      if (0xffffffffffffffd < uVar6) goto LAB_18017204d;
      lVar7 = FUN_1801d61c8(lVar10 + 0x27);
      uVar6 = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar7;
    }
    lVar7 = uVar6 + (param_2 - uVar2);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)(uVar6 + (param_2 - uVar2));
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    if (param_2 == param_1[1]) {
      FUN_1802079d0(uVar6);
      uVar2 = *param_1;
    }
    else {
      FUN_1802079d0(uVar6,*param_1,param_2 - *param_1);
      FUN_1802079d0(lVar7 + 0x10,param_2);
      uVar2 = *param_1;
    }
    if (uVar2 != 0) {
      uVar9 = param_1[2] - uVar2;
      uVar8 = uVar2;
      if (0xfff < uVar9) {
        uVar8 = *(ulonglong *)(uVar2 - 8);
        if (0x1f < (uVar2 - 8) - uVar8) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar9 = uVar9 + 0x27;
      }
      thunk_FUN_1801f42e0(uVar8,uVar9);
    }
    *param_1 = uVar6;
    param_1[1] = uVar11 * 0x10 + uVar6;
    param_1[2] = lVar10 + uVar6;
    return lVar7;
  }
LAB_18017204d:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_180172070(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_38 [2];
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  DAT_1802a6b90 = 0;
  local_38[0] = 0;
  FUN_1801707c0(&DAT_1802a6b98,local_38);
  DAT_1802a6bd8 = 0;
  DAT_1802a6be0 = 0;
  _DAT_1802a6be8 = 0x100000001;
  DAT_1802a6bf0 = 0;
  DAT_1802a6bf8 = 0;
  DAT_1802a6c00 = 0;
  DAT_1802a6c08 = 0;
  lVar1 = FUN_1801d61c8(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  DAT_1802a6c10 = (longlong *)0x0;
  DAT_1802a6c18 = (longlong *)0x0;
  DAT_1802a6c20 = (longlong *)0x0;
  DAT_1802a6c28 = 7;
  DAT_1802a6c30 = 8;
  DAT_1802a6bf8 = 0x3f800000;
  DAT_1802a6c00 = lVar1;
  plVar2 = (longlong *)FUN_1801d61c8(0x80);
  uVar4 = (longlong)DAT_1802a6c20 - (longlong)DAT_1802a6c10;
  if (uVar4 != 0) {
    lVar3 = (longlong)DAT_1802a6c10;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)((longlong)DAT_1802a6c10 + -8);
      if (0x1f < (ulonglong)(((longlong)DAT_1802a6c10 + -8) - lVar3)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  DAT_1802a6c18 = plVar2 + 0x10;
  DAT_1802a6c10 = plVar2;
  DAT_1802a6c20 = DAT_1802a6c18;
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = lVar1;
  plVar2[4] = lVar1;
  plVar2[5] = lVar1;
  plVar2[6] = lVar1;
  plVar2[7] = lVar1;
  plVar2[8] = lVar1;
  plVar2[9] = lVar1;
  plVar2[10] = lVar1;
  plVar2[0xb] = lVar1;
  plVar2[0xc] = lVar1;
  plVar2[0xd] = lVar1;
  plVar2[0xe] = lVar1;
  plVar2[0xf] = lVar1;
  atexit(FUN_18016d530);
  atexit(FUN_18016d6a0);
  return;
}



void Unwind_180172220(void)

{
  FUN_180170d40();
  FUN_180170dc0();
  return;
}



void Unwind_180172250(void)

{
  FUN_180170700(&DAT_1802a6b98);
  return;
}



void FUN_180172280(void)

{
  longlong lVar1;
  ulonglong uVar2;

  if (DAT_1802a6ce0 != 0) {
    uVar2 = DAT_1802a6cf0 - DAT_1802a6ce0;
    lVar1 = DAT_1802a6ce0;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(DAT_1802a6ce0 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6ce0 + -8) - lVar1)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
    DAT_1802a6ce0 = 0;
    DAT_1802a6ce8 = 0;
    DAT_1802a6cf0 = 0;
  }
  return;
}



void FUN_180172300(void)

{
  longlong lVar1;
  ulonglong uVar2;

  if (DAT_1802a6d00 != 0) {
    uVar2 = DAT_1802a6d10 - DAT_1802a6d00;
    lVar1 = DAT_1802a6d00;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(DAT_1802a6d00 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6d00 + -8) - lVar1)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
    DAT_1802a6d00 = 0;
    DAT_1802a6d08 = 0;
    DAT_1802a6d10 = 0;
  }
  return;
}



byte FUN_180172380(void)

{
  byte bVar1;
  longlong lVar2;

  lVar2 = FUN_180177800();
  bVar1 = 0;
  if ((*(char *)(lVar2 + 0x78) == '\x01') && (*(char *)(lVar2 + 0x79) != '\0')) {
    bVar1 = *(byte *)(lVar2 + 0x7b) ^ 1;
  }
  return bVar1 & 1;
}



void FUN_1801723b0(void)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  int iVar10;
  uint uVar11;

  if (DAT_1802a6ce0 != DAT_1802a6ce8) {
    DAT_1802a6ce8 = DAT_1802a6ce0;
  }
  DAT_1802a6cf8 = 0;
  if (DAT_1802a6d00 != DAT_1802a6d08) {
    DAT_1802a6d08 = DAT_1802a6d00;
  }
  lVar4 = FUN_180177800();
  if (((*(char *)(lVar4 + 0x78) == '\x01') && (*(char *)(lVar4 + 0x79) != '\0')) && ((*(byte *)(lVar4 + 0x7b) & 1) == 0)
     ) {
    lVar4 = FUN_180177800();
    DAT_1802a6d18 = *(undefined8 *)(lVar4 + 0x40);
    fVar3 = (float)((ulonglong)DAT_1802a6d18 >> 0x20);
  }
  else {
    uVar5 = FUN_1801bad30();
    fVar3 = DAT_1802a6d24;
    if (DAT_1802a6d24 <= 0.0) {
      lVar4 = FUN_1801b2b70();
      cVar2 = FUN_1801b3c30((float *)(lVar4 + 0x16ec0a4),4);
      if (((cVar2 == '\0') || (fVar3 = *(float *)(lVar4 + 0x16ec0a4), fVar3 < 0.5)) || (8.0 < fVar3)) {
        fVar3 = 2.0;
      }
    }
    auVar7._0_4_ = (float)(int)uVar5;
    iVar10 = (int)((ulonglong)uVar5 >> 0x20);
    auVar7._4_4_ = (float)iVar10;
    auVar7._8_8_ = 0;
    uVar9 = -(uint)(0 < (int)uVar5);
    uVar11 = -(uint)(0 < iVar10);
    auVar8._4_4_ = fVar3;
    auVar8._0_4_ = fVar3;
    auVar8._8_4_ = fVar3;
    auVar8._12_4_ = fVar3;
    auVar8 = divps(auVar7,auVar8);
    fVar3 = (float)(~uVar11 & 0x43b40000 | auVar8._4_4_ & uVar11);
    DAT_1802a6d18 = CONCAT44(fVar3,~uVar9 & 0x44200000 | auVar8._0_4_ & uVar9);
  }
  bVar1 = DAT_1802a6d20;
  DAT_180297420 = fVar3 / 1000.0;
  if (DAT_180297420 <= 0.35) {
    DAT_180297420 = 0.35;
  }
  if (0.0 < fVar3) {
    if (DAT_1802a6d21 == '\x01') {
      lVar4 = FUN_180177800();
      bVar6 = 0;
      if ((*(char *)(lVar4 + 0x78) == '\x01') && (*(char *)(lVar4 + 0x79) != '\0')) {
        bVar6 = ~*(byte *)(lVar4 + 0x7b) & 1;
      }
      if (bVar1 == bVar6) {
        return;
      }
    }
    DAT_1802a6d21 = '\x01';
    lVar4 = FUN_180177800();
    DAT_1802a6d20 = 0;
    if ((*(char *)(lVar4 + 0x78) == '\x01') && (DAT_1802a6d20 = 0, *(char *)(lVar4 + 0x79) != '\0')) {
      DAT_1802a6d20 = ~*(byte *)(lVar4 + 0x7b) & 1;
    }
  }
  return;
}



undefined8 * FUN_180172540(undefined8 *param_1)

{
  if ((float)DAT_1802a6d18 <= 0.0) {
    FUN_1801723b0();
  }
  *param_1 = CONCAT44(DAT_1802a6d18._4_4_,(float)DAT_1802a6d18);
  return param_1;
}



undefined4 FUN_180172570(void)

{
  return DAT_180297420;
}



float FUN_180172580(void)

{
  char cVar1;
  longlong lVar2;
  float fVar3;

  lVar2 = FUN_180177800();
  if (((*(char *)(lVar2 + 0x78) == '\x01') && (*(char *)(lVar2 + 0x79) != '\0')) && ((*(byte *)(lVar2 + 0x7b) & 1) == 0)
     ) {
    return 1.0;
  }
  fVar3 = DAT_1802a6d24;
  if (DAT_1802a6d24 <= 0.0) {
    lVar2 = FUN_1801b2b70();
    cVar1 = FUN_1801b3c30((float *)(lVar2 + 0x16ec0a4),4);
    if (((cVar1 == '\0') || (fVar3 = *(float *)(lVar2 + 0x16ec0a4), fVar3 < 0.5)) || (8.0 < fVar3)) {
      return 2.0;
    }
  }
  return fVar3;
}



void FUN_180172610(undefined4 *param_1)

{
  *param_1 = DAT_1802a6d28;
  param_1[1] = DAT_1802a6d2c;
  param_1[2] = DAT_1802a6d30;
  param_1[3] = DAT_1802a6d34;
  return;
}



void FUN_180172640(float *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;

  if (((0.001 < *(float *)(param_2 + 0xc)) && (0.0 < param_1[2] - *param_1)) && (0.0 < param_1[3] - param_1[1])) {
    lVar1 = FUN_180177800();
    if (((*(char *)(lVar1 + 0x78) != '\x01') || (*(char *)(lVar1 + 0x79) == '\0')) ||
       ((*(byte *)(lVar1 + 0x7b) & 1) != 0)) {
      FUN_1801726e0(param_1,param_2);
      return;
    }
    uVar2 = FUN_18016d720();
    FUN_18016e9e0(uVar2,param_1,param_2,param_3);
    LOCK();
    DAT_1802a6d28 = DAT_1802a6d28 + 1;
    UNLOCK();
  }
  return;
}



void FUN_1801726e0(float *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a6d40) {
    FUN_1801d62d8(&DAT_1802a6d40);
    if (DAT_1802a6d40 == -1) {
      lVar2 = FUN_1801b2b70();
      DAT_1802a6d38 = (code *)(lVar2 + 0x1d9620);
      _Init_thread_footer(&DAT_1802a6d40);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a6d50) {
    FUN_1801d62d8(&DAT_1802a6d50);
    if (DAT_1802a6d50 == -1) {
      lVar2 = FUN_1801b2b70();
      DAT_1802a6d48 = (code *)(lVar2 + 0x1daf10);
      _Init_thread_footer(&DAT_1802a6d50);
    }
  }
  if (DAT_1802a6d00 == DAT_1802a6d08) {
LAB_1801727a0:
    lVar2 = (*DAT_1802a6d38)();
    if (lVar2 != 0) {
      (*DAT_1802a6d48)(lVar2);
      piVar3 = &DAT_1802a6d28;
      goto LAB_1801727e8;
    }
  }
  else {
    uVar4 = -(uint)(*param_1 < *(float *)(DAT_1802a6d08 + -0x10));
    uVar6 = -(uint)(param_1[1] < *(float *)(DAT_1802a6d08 + -0xc));
    uVar8 = -(uint)(*(float *)(DAT_1802a6d08 + -8) < param_1[2]);
    uVar9 = -(uint)(*(float *)(DAT_1802a6d08 + -4) < param_1[3]);
    iVar5 = -(uint)(0.0 < (float)(~uVar8 & (uint)param_1[2] | (uint)*(float *)(DAT_1802a6d08 + -8) & uVar8) -
                          (float)(~uVar4 & (uint)*param_1 | (uint)*(float *)(DAT_1802a6d08 + -0x10) & uVar4));
    iVar7 = -(uint)(0.0 < (float)(~uVar9 & (uint)param_1[3] | (uint)*(float *)(DAT_1802a6d08 + -4) & uVar9) -
                          (float)(~uVar6 & (uint)param_1[1] | (uint)*(float *)(DAT_1802a6d08 + -0xc) & uVar6));
    auVar1._4_4_ = iVar5;
    auVar1._0_4_ = iVar5;
    auVar1._8_4_ = iVar7;
    auVar1._12_4_ = iVar7;
    iVar5 = movmskpd((int)DAT_1802a6d08,auVar1);
    if (iVar5 == 3) goto LAB_1801727a0;
  }
  piVar3 = &DAT_1802a6d2c;
LAB_1801727e8:
  LOCK();
  *piVar3 = *piVar3 + 1;
  UNLOCK();
  return;
}



void Unwind_180172880(void)

{
  FUN_1801d6230(&DAT_1802a6d50);
  return;
}



void Unwind_1801728b0(void)

{
  FUN_1801d6230(&DAT_1802a6d40);
  return;
}



void FUN_1801728e0(float *param_1,longlong param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  ulonglong local_40;

  local_40 = DAT_1802a0400 ^ (ulonglong)auStack_78;
  if ((0.0 < param_3) && (0.001 < *(float *)(param_2 + 0xc))) {
    lVar1 = FUN_180177800();
    if ((*(char *)(lVar1 + 0x78) == '\x01') &&
       ((*(char *)(lVar1 + 0x79) != '\0' && ((*(byte *)(lVar1 + 0x7b) & 1) == 0)))) {
      uVar2 = FUN_18016d720();
      local_58 = param_4;
      FUN_18016ec90(uVar2,param_1,param_2,param_3);
      LOCK();
      DAT_1802a6d28 = DAT_1802a6d28 + 1;
      UNLOCK();
    }
    else {
      local_48 = param_1[2];
      fStack_44 = param_1[1] + param_3;
      local_50 = (float)*(undefined8 *)param_1;
      fStack_4c = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      FUN_1801726e0(&local_50,param_2);
      local_50 = *param_1;
      fStack_4c = param_1[3] - param_3;
      local_48 = (float)*(undefined8 *)(param_1 + 2);
      fStack_44 = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
      FUN_1801726e0(&local_50,param_2);
      fStack_44 = param_1[3] - param_3;
      local_50 = (float)*(undefined8 *)param_1;
      fStack_4c = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) + param_3;
      local_48 = local_50 + param_3;
      FUN_1801726e0(&local_50,param_2);
      local_48 = param_1[2];
      local_50 = local_48 - param_3;
      fStack_44 = param_1[3] - param_3;
      fStack_4c = param_3 + param_1[1];
      FUN_1801726e0(&local_50,param_2);
    }
  }
  if (DAT_1802a0400 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
}



void FUN_180172a80(float *param_1,float *param_2,float *param_3,char param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;

  local_70 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_180177800();
  if (((*(char *)(lVar1 + 0x78) == '\x01') && (*(char *)(lVar1 + 0x79) != '\0')) && ((*(byte *)(lVar1 + 0x7b) & 1) == 0)
     ) {
    uVar2 = FUN_18016d720();
    local_a0 = param_5;
    local_a8 = param_4;
    FUN_18016ecf0(uVar2,param_1,param_2,param_3);
    LOCK();
    DAT_1802a6d28 = DAT_1802a6d28 + 1;
    UNLOCK();
  }
  else if (param_4 == '\0') {
    fVar5 = (param_1[2] - *param_1) * 0.0625;
    iVar3 = 0;
    do {
      fVar4 = ((float)iVar3 + 0.5) * 0.0625;
      local_80 = fVar5 * (float)iVar3 + *param_1;
      local_78 = fVar5 + local_80 + 0.5;
      local_7c = param_1[1];
      local_74 = param_1[3];
      local_98 = fVar4 * (*param_3 - *param_2) + *param_2;
      fStack_94 = fVar4 * (param_3[1] - param_2[1]) + param_2[1];
      fStack_90 = fVar4 * (param_3[2] - param_2[2]) + param_2[2];
      fStack_8c = fVar4 * (param_3[3] - param_2[3]) + param_2[3];
      FUN_1801726e0(&local_80,&local_98);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
  }
  else {
    fVar5 = (param_1[3] - param_1[1]) * 0.0625;
    iVar3 = 0;
    do {
      fVar4 = ((float)iVar3 + 0.5) * 0.0625;
      local_7c = fVar5 * (float)iVar3 + param_1[1];
      local_80 = *param_1;
      local_78 = param_1[2];
      local_74 = fVar5 + local_7c + 0.5;
      local_98 = fVar4 * (*param_3 - *param_2) + *param_2;
      fStack_94 = fVar4 * (param_3[1] - param_2[1]) + param_2[1];
      fStack_90 = fVar4 * (param_3[2] - param_2[2]) + param_2[2];
      fStack_8c = fVar4 * (param_3[3] - param_2[3]) + param_2[3];
      FUN_1801726e0(&local_80,&local_98);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
  }
  if (DAT_1802a0400 != (local_70 ^ (ulonglong)auStack_c8)) {
  }
  return;
}



undefined8 FUN_180172cc0(float *param_1,float *param_2,float param_3,float param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar11;
  undefined8 uVar10;
  float extraout_XMM0_Db;
  float fVar12;
  float extraout_XMM0_Db_00;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c0;

  local_c0 = DAT_1802a0400 ^ (ulonglong)auStack_108;
  lVar5 = FUN_180177800();
  if (((*(char *)(lVar5 + 0x78) == '\x01') && (*(char *)(lVar5 + 0x79) != '\0')) && ((*(byte *)(lVar5 + 0x7b) & 1) == 0)
     ) {
    uVar4 = (uint)param_3;
    uVar6 = 2;
    if (2 < (int)uVar4) {
      uVar6 = uVar4;
    }
    uVar8 = uVar6;
    do {
      fVar15 = param_3 * ((float)(int)uVar8 / (float)(int)uVar6);
      fVar11 = (float)*param_5;
      fVar12 = (float)((ulonglong)*param_5 >> 0x20);
      fVar13 = *param_1 + fVar11;
      fVar14 = param_1[1] + fVar12;
      local_d8 = fVar13 - fVar15;
      fStack_d4 = fVar14 - fVar15;
      fVar13 = fVar15 + fVar13;
      fStack_d0 = fVar15 + param_1[2] + fVar11;
      fStack_cc = fVar15 + param_1[3] + fVar12;
      fStack_dc = (1.0 - (float)(int)uVar8 / (float)(int)uVar6) * param_2[3] * 0.35;
      fStack_e0 = param_2[2];
      local_e8 = *(undefined8 *)param_2;
      fVar11 = fVar15 + fVar14;
      if (0.001 < fStack_dc) {
        fVar13 = (float)-(uint)(0.0 < fStack_d0 - local_d8);
        iVar9 = -(uint)(0.0 < fStack_cc - fStack_d4);
        auVar2._4_4_ = fVar13;
        auVar2._0_4_ = fVar13;
        auVar2._8_4_ = iVar9;
        auVar2._12_4_ = iVar9;
        uVar4 = movmskpd(uVar4,auVar2);
        fVar11 = fVar13;
        if (((uVar4 & 1) != 0) && (bVar3 = (byte)uVar4 >> 1, uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3), bVar3 != 0)) {
          lVar5 = FUN_180177800();
          if ((*(char *)(lVar5 + 0x78) == '\x01') &&
             ((*(char *)(lVar5 + 0x79) != '\0' && ((*(byte *)(lVar5 + 0x7b) & 1) == 0)))) {
            uVar10 = FUN_18016d720();
            uVar4 = FUN_18016e9e0(uVar10,&local_d8,&local_e8,fVar15 + param_4);
            LOCK();
            DAT_1802a6d28 = DAT_1802a6d28 + 1;
            UNLOCK();
            fVar13 = extraout_XMM0_Da_00;
            fVar11 = extraout_XMM0_Db_00;
          }
          else {
            uVar4 = FUN_1801726e0(&local_d8,&local_e8);
            fVar13 = extraout_XMM0_Da;
            fVar11 = extraout_XMM0_Db;
          }
        }
      }
      uVar10 = CONCAT44(fVar11,fVar13);
      uVar7 = uVar8 - 1;
      bVar1 = 0 < (int)uVar8;
      uVar8 = uVar7;
    } while (uVar7 != 0 && bVar1);
  }
  else {
    local_d8 = *param_2 * 1.0;
    fStack_d4 = param_2[1] * 1.0;
    fStack_d0 = param_2[2] * 1.0;
    fStack_cc = param_2[3] * 0.5;
    fVar13 = (float)*param_5;
    fVar11 = (float)((ulonglong)*param_5 >> 0x20);
    fStack_e0 = param_1[2] + fVar13;
    fStack_dc = param_1[3] + fVar11;
    local_e8 = CONCAT44(param_1[1] + fVar11,*param_1 + fVar13);
    uVar10 = FUN_1801726e0(&local_e8,&local_d8);
  }
  if (DAT_1802a0400 == (local_c0 ^ (ulonglong)auStack_108)) {
    return uVar10;
  }
}



void FUN_180172f40(float *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  local_38 = 0x3d8888893d60e0e1;
  uStack_30 = 0x3f6147ae3db8b8b9;
  if ((0.0 < param_1[2] - *param_1) && (0.0 < param_1[3] - param_1[1])) {
    lVar1 = FUN_180177800();
    if ((*(char *)(lVar1 + 0x78) == '\x01') &&
       ((*(char *)(lVar1 + 0x79) != '\0' && ((*(byte *)(lVar1 + 0x7b) & 1) == 0)))) {
      uVar2 = FUN_18016d720();
      FUN_18016e9e0(uVar2,param_1,&local_38,param_2);
      LOCK();
      DAT_1802a6d28 = DAT_1802a6d28 + 1;
      UNLOCK();
    }
    else {
      FUN_1801726e0(param_1,&local_38);
    }
  }
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
}



void FUN_180173000(longlong param_1,float *param_2,float *param_3,float param_4,int param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  float *local_c8;
  float local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  ulonglong local_80;

  local_80 = DAT_1802a0400 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_1 + 0x10) == 0) || (param_3[3] <= 0.001)) goto LAB_1801732b9;
  lVar2 = FUN_180177800();
  if ((*(char *)(lVar2 + 0x78) == '\x01') && ((*(char *)(lVar2 + 0x79) != '\0' && ((*(byte *)(lVar2 + 0x7b) & 1) == 0)))
     ) {
    uVar5 = FUN_18016d720();
    local_b8 = 0;
    if (param_5 - 1U < 3) {
      local_b8 = param_5;
    }
    fVar10 = *param_2;
    if (param_6 != 0) {
      fVar11 = (float)FUN_180170360(uVar5,param_1,param_4,local_b8);
      if (param_6 == 1) {
        fVar11 = fVar11 * 0.5;
      }
      fVar10 = fVar10 - fVar11;
    }
    local_c8 = param_3;
    local_c0 = param_4;
    FUN_18016f470(uVar5,param_1,fVar10,param_2[1]);
LAB_1801732ae:
    piVar7 = &DAT_1802a6d30;
  }
  else {
    plVar3 = (longlong *)FUN_180179ff0();
    piVar7 = &DAT_1802a6d34;
    if ((*plVar3 != 0) &&
       ((lVar2 = *(longlong *)(*plVar3 + 0x30), lVar2 != 0 && (lVar2 = *(longlong *)(lVar2 + 0x88), lVar2 != 0)))) {
      fVar10 = *param_2;
      lVar4 = FUN_1801b2b70();
      iVar1 = (*(code *)(lVar4 + 0x1c6530))(lVar2,param_1,0x3f800000,0);
      lVar4 = DAT_1802a6d08;
      fVar11 = (float)iVar1;
      if (param_6 != 0) {
        fVar8 = fVar11;
        if (param_6 == 1) {
          fVar8 = fVar11 * 0.5;
        }
        fVar10 = fVar10 - fVar8;
      }
      if (DAT_1802a6d00 == DAT_1802a6d08) {
        fVar8 = param_2[1];
      }
      else {
        lVar6 = FUN_180177800();
        fVar9 = 10.0;
        if (((*(char *)(lVar6 + 0x78) == '\x01') && (*(char *)(lVar6 + 0x79) != '\0')) &&
           ((*(byte *)(lVar6 + 0x7b) & 1) == 0)) {
          fVar9 = param_4 * 1.35;
        }
        fVar8 = param_2[1];
        if (((fVar8 < *(float *)(lVar4 + -0xc)) ||
            (*(float *)(lVar4 + -4) <= fVar9 + fVar8 && fVar9 + fVar8 != *(float *)(lVar4 + -4))) ||
           ((fVar11 + fVar10 < *(float *)(lVar4 + -0x10) ||
            (*(float *)(lVar4 + -8) <= fVar10 && fVar10 != *(float *)(lVar4 + -8))))) goto LAB_1801732b5;
      }
      local_98 = *param_3 * 0.25;
      fStack_94 = param_3[1] * 0.25;
      fStack_90 = param_3[2] * 0.25;
      fStack_8c = param_3[3] * 1.0;
      lVar4 = FUN_1801b2b70();
      local_c8 = &local_98;
      local_a0 = 0;
      local_a8 = 0xffffffff;
      local_b0 = 0;
      local_b8 = local_b8 & 0xffffff00;
      local_c0 = (float)((uint)local_c0 & 0xffffff00);
      (*(code *)(lVar4 + 0x1c8b60))(lVar2,param_1,fVar10 + 1.0,fVar8 + 1.0);
      lVar4 = FUN_1801b2b70();
      local_a0 = 0;
      local_a8 = 0xffffffff;
      local_b0 = 0;
      local_b8 = local_b8 & 0xffffff00;
      local_c0 = (float)((uint)local_c0 & 0xffffff00);
      local_c8 = param_3;
      (*(code *)(lVar4 + 0x1c8b60))(lVar2,param_1,fVar10,fVar8);
      goto LAB_1801732ae;
    }
  }
LAB_1801732b5:
  LOCK();
  *piVar7 = *piVar7 + 1;
  UNLOCK();
LAB_1801732b9:
  if (DAT_1802a0400 != (local_80 ^ (ulonglong)auStack_e8)) {
  }
  return;
}



float FUN_180173310(float param_1)

{
  longlong lVar1;
  float fVar2;

  lVar1 = FUN_180177800();
  fVar2 = 10.0;
  if (((*(char *)(lVar1 + 0x78) == '\x01') && (*(char *)(lVar1 + 0x79) != '\0')) && ((*(byte *)(lVar1 + 0x7b) & 1) == 0)
     ) {
    fVar2 = param_1 * 1.35;
  }
  return fVar2;
}



ulonglong FUN_180173360(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  float fVar7;

  fVar7 = 0.0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_180177800();
    if (((*(char *)(lVar2 + 0x78) == '\x01') && (*(char *)(lVar2 + 0x79) != '\0')) &&
       ((*(byte *)(lVar2 + 0x7b) & 1) == 0)) {
      uVar5 = FUN_18016d720();
      iVar1 = 0;
      if (param_3 - 1U < 3) {
        iVar1 = param_3;
      }
      uVar6 = FUN_180170360(uVar5,param_1,param_2,iVar1);
      return uVar6;
    }
    plVar3 = (longlong *)FUN_180179ff0();
    if (((*plVar3 != 0) && (lVar2 = *(longlong *)(*plVar3 + 0x30), lVar2 != 0)) &&
       (lVar2 = *(longlong *)(lVar2 + 0x88), lVar2 != 0)) {
      lVar4 = FUN_1801b2b70();
      iVar1 = (*(code *)(lVar4 + 0x1c6530))(lVar2,param_1,0x3f800000,0);
      fVar7 = (float)iVar1;
    }
  }
  return (ulonglong)(uint)fVar7;
}



ulonglong * FUN_180173430(ulonglong *param_1,ulonglong *param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 ******ppppppuVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint3 *puVar11;
  ulonglong uVar12;
  undefined8 *******pppppppuVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  undefined8 *******local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 *******local_e0;
  undefined8 *******local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 *******local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_90;

  local_90 = 0xfffffffffffffffe;
  if ((param_3 <= 0.0) || (param_2[2] == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    return param_1;
  }
  fVar19 = (float)FUN_180173360(param_2,param_4,param_5);
  if (fVar19 <= param_3) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar12 = param_2[2];
    if (0xf < param_2[3]) {
      param_2 = (ulonglong *)*param_2;
    }
    if ((longlong)uVar12 < 0) {
      FUN_180002ac0();
    }
    if (0xf < uVar12) {
      uVar15 = uVar12 | 0xf;
      uVar9 = 0x16;
      if (0x16 < uVar15) {
        uVar9 = uVar15;
      }
      if (uVar15 < 0xfff) {
        uVar15 = FUN_1801d61c8(uVar9 + 1);
      }
      else {
        lVar6 = FUN_1801d61c8(uVar9 + 0x28);
        uVar15 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar15 - 8) = lVar6;
      }
      *param_1 = uVar15;
      param_1[2] = uVar12;
      param_1[3] = uVar9;
      FUN_1802079d0(uVar15,param_2,uVar12 + 1);
      return param_1;
    }
    param_1[2] = uVar12;
    param_1[3] = 0xf;
    uVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar12;
    return param_1;
  }
  lVar6 = FUN_180177800();
  puVar11 = (uint3 *)&DAT_18021e7e4;
  if (((*(char *)(lVar6 + 0x78) == '\x01') && (*(char *)(lVar6 + 0x79) != '\0')) &&
     (puVar11 = (uint3 *)&DAT_18021e7e0, (*(byte *)(lVar6 + 0x7b) & 1) != 0)) {
    puVar11 = (uint3 *)&DAT_18021e7e4;
  }
  uStack_d0 = 0;
  local_c8 = 3;
  local_c0 = 0xf;
  local_d8 = (undefined8 *******)(ulonglong)*puVar11;
  local_e0 = &local_d8;
  fVar19 = (float)FUN_180173360(local_e0,param_4,param_5);
  if (param_3 <= fVar19) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
  }
  else {
    uVar12 = param_2[2];
    while (uVar9 = local_c8, pppppppuVar16 = &local_b8, uVar12 != 0) {
      puVar18 = param_2;
      if (0xf < param_2[3]) {
        puVar18 = (ulonglong *)*param_2;
      }
      do {
        if (uVar12 == 0) goto LAB_180173717;
        uVar15 = uVar12 - 1;
        lVar6 = uVar12 - 1;
        uVar12 = uVar15;
      } while (*(char *)((longlong)puVar18 + lVar6) < -0x40);
      local_b8 = (undefined8 *******)0x0;
      uStack_b0 = 0;
      uVar9 = param_2[2];
      if (uVar15 <= param_2[2]) {
        uVar9 = uVar15;
      }
      if ((longlong)uVar9 < 0) {
        FUN_180002ac0();
      }
      uVar15 = 0xf;
      if (0xf < uVar9) {
        uVar7 = uVar9 | 0xf;
        uVar15 = 0x16;
        if (0x16 < uVar7) {
          uVar15 = uVar7;
        }
        if (uVar7 < 0xfff) {
          pppppppuVar16 = (undefined8 *******)FUN_1801d61c8(uVar15 + 1);
          local_b8 = pppppppuVar16;
        }
        else {
          ppppppuVar8 = (undefined8 ******)FUN_1801d61c8(uVar15 + 0x28);
          pppppppuVar16 = (undefined8 *******)((longlong)ppppppuVar8 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar16[-1] = ppppppuVar8;
          local_b8 = pppppppuVar16;
        }
      }
      local_a8 = uVar9;
      local_a0 = uVar15;
      FUN_1802079d0(pppppppuVar16,puVar18,uVar9);
      *(undefined1 *)((longlong)pppppppuVar16 + uVar9) = 0;
      fVar20 = (float)FUN_180173360(&local_b8,param_4,param_5);
      if (fVar20 + fVar19 <= param_3) {
        pppppppuVar16 = local_b8;
        if (local_a0 < 0x10) {
          pppppppuVar16 = &local_b8;
        }
        if (local_a8 == 0) goto LAB_1801738a8;
        cVar2 = *(char *)((longlong)pppppppuVar16 + (local_a8 - 1));
        lVar6 = (longlong)pppppppuVar16 + (local_a8 - 1);
        uVar12 = local_a8;
        goto joined_r0x000180173854;
      }
      if (0xf < local_a0) {
        uVar9 = local_a0 + 1;
        pppppppuVar16 = local_b8;
        if (0xfff < uVar9) {
          pppppppuVar16 = (undefined8 *******)local_b8[-1];
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppuVar16))) goto LAB_180173a9e;
          uVar9 = local_a0 + 0x28;
        }
        thunk_FUN_1801f42e0(pppppppuVar16,uVar9);
      }
    }
LAB_180173717:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (0xf < local_c0) {
      local_e0 = local_d8;
    }
    if ((longlong)local_c8 < 0) {
      FUN_180002ac0();
    }
    if (local_c8 < 0x10) {
      param_1[2] = local_c8;
      param_1[3] = 0xf;
      uVar3 = *(undefined4 *)((longlong)local_e0 + 4);
      uVar4 = *(undefined4 *)(local_e0 + 1);
      uVar5 = *(undefined4 *)((longlong)local_e0 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)local_e0;
      *(undefined4 *)((longlong)param_1 + 4) = uVar3;
      *(undefined4 *)(param_1 + 1) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    }
    else {
      uVar15 = local_c8 | 0xf;
      uVar12 = 0x16;
      if (0x16 < uVar15) {
        uVar12 = uVar15;
      }
      if (uVar15 < 0xfff) {
        uVar15 = FUN_1801d61c8(uVar12 + 1);
      }
      else {
        lVar6 = FUN_1801d61c8(uVar12 + 0x28);
        uVar15 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar15 - 8) = lVar6;
      }
      *param_1 = uVar15;
      param_1[2] = uVar9;
      param_1[3] = uVar12;
      FUN_1802079d0(uVar15,local_e0,uVar9 + 1);
    }
  }
  goto LAB_1801737e6;
joined_r0x000180173854:
  if (cVar2 != ' ') goto LAB_180173874;
  uVar12 = uVar12 - 1;
  if (uVar12 == 0) goto LAB_1801738a8;
  cVar2 = *(char *)(lVar6 + -1);
  lVar6 = lVar6 + -1;
  goto joined_r0x000180173854;
LAB_180173874:
  if (lVar6 - (longlong)pppppppuVar16 == -1) {
LAB_1801738a8:
    FUN_1800d4120(&local_108,&local_b8);
  }
  else {
    uVar12 = (lVar6 - (longlong)pppppppuVar16) + 1;
    local_108 = (undefined8 *******)0x0;
    uStack_100 = 0;
    if (local_a8 < uVar12) {
      uVar12 = local_a8;
    }
    if ((longlong)uVar12 < 0) {
      FUN_180002ac0();
    }
    if (uVar12 < 0x10) {
      pppppppuVar17 = &local_108;
      uVar9 = 0xf;
    }
    else {
      uVar15 = uVar12 | 0xf;
      uVar9 = 0x16;
      if (0x16 < uVar15) {
        uVar9 = uVar15;
      }
      if (uVar15 < 0xfff) {
        pppppppuVar17 = (undefined8 *******)FUN_1801d61c8(uVar9 + 1);
        local_108 = pppppppuVar17;
      }
      else {
        ppppppuVar8 = (undefined8 ******)FUN_1801d61c8(uVar9 + 0x28);
        pppppppuVar17 = (undefined8 *******)((longlong)ppppppuVar8 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar17[-1] = ppppppuVar8;
        local_108 = pppppppuVar17;
      }
    }
    local_f8 = uVar12;
    local_f0 = uVar9;
    FUN_1802079d0(pppppppuVar17,pppppppuVar16,uVar12);
    *(undefined1 *)((longlong)pppppppuVar17 + uVar12) = 0;
  }
  uVar7 = local_c0;
  uVar15 = local_c8;
  pppppppuVar17 = local_d8;
  uVar9 = local_f0;
  uVar12 = local_f8;
  pppppppuVar16 = local_108;
  uVar14 = 0x7fffffffffffffff;
  if ((local_f8 ^ 0x7fffffffffffffff) < local_c8) {
    FUN_180002ac0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = local_c8 + local_f8;
  uVar10 = 0xf;
  puVar18 = param_1;
  if (0xf < uVar1) {
    if ((longlong)uVar1 < 0) {
LAB_180173992:
      uVar10 = FUN_1801d61c8(uVar14 + 0x28);
      puVar18 = (ulonglong *)(uVar10 + 0x27 & 0xffffffffffffffe0);
      puVar18[-1] = uVar10;
      uVar10 = uVar14;
    }
    else {
      uVar10 = uVar1 | 0xf;
      uVar14 = 0x16;
      if (0x16 < uVar10) {
        uVar14 = uVar10;
      }
      if (0xffe < uVar10) goto LAB_180173992;
      puVar18 = (ulonglong *)FUN_1801d61c8(uVar14 + 1);
      uVar10 = uVar14;
    }
    *param_1 = (ulonglong)puVar18;
  }
  pppppppuVar13 = &local_d8;
  if (0xf < uVar7) {
    pppppppuVar13 = pppppppuVar17;
  }
  pppppppuVar17 = &local_108;
  if (0xf < uVar9) {
    pppppppuVar17 = pppppppuVar16;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar10;
  FUN_1802079d0(puVar18,pppppppuVar17,uVar12);
  FUN_1802079d0(uVar12 + (longlong)puVar18,pppppppuVar13,uVar15);
  *(undefined1 *)((longlong)puVar18 + uVar1) = 0;
  if (0xf < local_f0) {
    uVar12 = local_f0 + 1;
    pppppppuVar16 = local_108;
    if (0xfff < uVar12) {
      pppppppuVar16 = (undefined8 *******)local_108[-1];
      if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppppuVar16))) goto LAB_180173a9e;
      uVar12 = local_f0 + 0x28;
    }
    thunk_FUN_1801f42e0(pppppppuVar16,uVar12);
  }
  if (0xf < local_a0) {
    uVar12 = local_a0 + 1;
    pppppppuVar16 = local_b8;
    if (0xfff < uVar12) {
      pppppppuVar16 = (undefined8 *******)local_b8[-1];
      if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppuVar16))) goto LAB_180173a9e;
      uVar12 = local_a0 + 0x28;
    }
    thunk_FUN_1801f42e0(pppppppuVar16,uVar12);
  }
LAB_1801737e6:
  if (0xf < local_c0) {
    uVar12 = local_c0 + 1;
    pppppppuVar16 = local_d8;
    if (0xfff < uVar12) {
      pppppppuVar16 = (undefined8 *******)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppppuVar16))) {
LAB_180173a9e:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = local_c0 + 0x28;
    }
    thunk_FUN_1801f42e0(pppppppuVar16,uVar12);
  }
  return param_1;
}



void Unwind_180173ad0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x40);
  return;
}



void Unwind_180173b40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_180173bb0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void FUN_180173c20(undefined4 param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  undefined8 uVar2;

  lVar1 = FUN_180177800();
  if ((((*(char *)(lVar1 + 0x78) == '\x01') && (*(char *)(lVar1 + 0x79) != '\0')) && (0.001 < param_3)) &&
     ((*(byte *)(lVar1 + 0x7b) & 1) == 0)) {
    lVar1 = FUN_180174330(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_18016d720();
      FUN_18016ed70(uVar2,lVar1,param_2,param_3);
      LOCK();
      DAT_1802a6d28 = DAT_1802a6d28 + 1;
      UNLOCK();
    }
  }
  return;
}



float FUN_180173ca0(undefined4 param_1)

{
  float fVar1;
  undefined1 auStack_38 [40];
  float local_10;
  float local_c;
  ulonglong local_8;

  local_8 = DAT_1802a0400 ^ (ulonglong)auStack_38;
  FUN_180174fd0(&local_10,param_1);
  fVar1 = 0.0;
  if (0.0 < local_c) {
    fVar1 = local_10 / local_c;
  }
  if (DAT_1802a0400 == (local_8 ^ (ulonglong)auStack_38)) {
    return fVar1;
  }
}



void FUN_180173d00(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  if (((param_1 != (undefined8 *)0x0) && (2 < param_2)) && (0.001 < *(float *)(param_3 + 0xc))) {
    lVar6 = FUN_180177800();
    if (((*(char *)(lVar6 + 0x78) == '\x01') && (*(char *)(lVar6 + 0x79) != '\0')) &&
       ((*(byte *)(lVar6 + 0x7b) & 1) == 0)) {
      uVar8 = FUN_18016d720();
      FUN_18016ee10(uVar8,param_1,param_2,param_3);
      LOCK();
      DAT_1802a6d28 = DAT_1802a6d28 + 1;
      UNLOCK();
    }
    else {
      local_38._8_8_ = *param_1;
      local_38._0_8_ = *param_1;
      uVar1 = 0;
      do {
        uVar7 = uVar1;
        uVar1 = param_1[uVar7 + 1];
        uVar2 = param_1[uVar7 + 2];
        fVar11 = (float)(uVar1 >> 0x20);
        auVar15._0_8_ = CONCAT44(-(uint)(fVar11 < local_38._4_4_),-(uint)((float)uVar1 < local_38._0_4_));
        auVar15._8_4_ = -(uint)(local_38._8_4_ < (float)uVar1);
        auVar15._12_4_ = -(uint)(local_38._12_4_ < fVar11);
        uVar5 = uVar1 & auVar15._8_8_;
        auVar16._0_8_ = ~auVar15._0_8_ & local_38._0_8_;
        auVar16._8_8_ = ~auVar15._8_8_ & local_38._8_8_;
        auVar3._8_4_ = (int)uVar5;
        auVar3._0_8_ = uVar1 & auVar15._0_8_;
        auVar3._12_4_ = (int)(uVar5 >> 0x20);
        auVar16 = auVar16 | auVar3;
        fVar11 = (float)(uVar2 >> 0x20);
        auVar9._0_8_ = CONCAT44(-(uint)(fVar11 < auVar16._4_4_),-(uint)((float)uVar2 < auVar16._0_4_));
        auVar9._8_4_ = -(uint)(auVar16._8_4_ < (float)uVar2);
        auVar9._12_4_ = -(uint)(auVar16._12_4_ < fVar11);
        auVar12._0_8_ = uVar2 & auVar9._0_8_;
        auVar12._8_8_ = uVar2 & auVar9._8_8_;
        auVar10._0_8_ = ~auVar9._0_8_ & auVar16._0_8_;
        auVar10._8_8_ = ~auVar9._8_8_ & auVar16._8_8_;
        local_38 = auVar10 | auVar12;
        uVar1 = uVar7 + 2;
      } while ((param_2 - 1 & 0xfffffffffffffffe) != uVar7 + 2);
      if ((param_2 - 1 & 1) != 0) {
        uVar1 = param_1[uVar7 + 3];
        fVar11 = (float)(uVar1 >> 0x20);
        auVar13._0_8_ = CONCAT44(-(uint)(fVar11 < local_38._4_4_),-(uint)((float)uVar1 < local_38._0_4_));
        auVar13._8_4_ = -(uint)(local_38._8_4_ < (float)uVar1);
        auVar13._12_4_ = -(uint)(local_38._12_4_ < fVar11);
        uVar2 = uVar1 & auVar13._8_8_;
        auVar14._0_8_ = ~auVar13._0_8_ & local_38._0_8_;
        auVar14._8_8_ = ~auVar13._8_8_ & local_38._8_8_;
        auVar4._8_4_ = (int)uVar2;
        auVar4._0_8_ = uVar1 & auVar13._0_8_;
        auVar4._12_4_ = (int)(uVar2 >> 0x20);
        local_38 = auVar14 | auVar4;
      }
      FUN_1801726e0(local_38,param_3);
    }
  }
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
}



void FUN_180173e70(undefined1 (*param_1) [16])

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_20;

  puVar5 = DAT_1802a6d08;
  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  if (DAT_1802a6d00 == DAT_1802a6d08) {
    local_38 = *(ulonglong *)*param_1;
    uStack_30 = *(ulonglong *)(*param_1 + 8);
    if (DAT_1802a6d08 == DAT_1802a6d10) goto LAB_180173f0d;
LAB_180173ed1:
    *DAT_1802a6d08 = local_38;
    puVar5[1] = uStack_30;
    DAT_1802a6d08 = DAT_1802a6d08 + 2;
    lVar6 = FUN_180177800();
    cVar11 = *(char *)(lVar6 + 0x78);
  }
  else {
    auVar2 = *(undefined1 (*) [16])(DAT_1802a6d08 + -2);
    auVar3 = *param_1;
    auVar13._0_8_ = CONCAT44(-(uint)(auVar3._4_4_ < auVar2._4_4_),-(uint)(auVar3._0_4_ < auVar2._0_4_));
    auVar13._8_4_ = -(uint)(auVar2._8_4_ < auVar3._8_4_);
    auVar13._12_4_ = -(uint)(auVar2._12_4_ < auVar3._12_4_);
    local_38 = ~auVar13._0_8_ & auVar3._0_8_ | auVar2._0_8_ & auVar13._0_8_;
    uStack_30 = ~auVar13._8_8_ & auVar3._8_8_ | auVar2._8_8_ & auVar13._8_8_;
    if (DAT_1802a6d08 != DAT_1802a6d10) goto LAB_180173ed1;
LAB_180173f0d:
    FUN_180171ee0(&DAT_1802a6d00,DAT_1802a6d08,&local_38);
    lVar6 = FUN_180177800();
    cVar11 = *(char *)(lVar6 + 0x78);
  }
  if (((cVar11 == '\x01') && (*(char *)(lVar6 + 0x79) != '\0')) && ((*(byte *)(lVar6 + 0x7b) & 1) == 0)) {
    uVar9 = FUN_18016d720();
    FUN_180170550(uVar9,param_1);
    local_38 = ((longlong)DAT_1802a6cf8 >> 0x3f & 0xe000000000000000U) + (DAT_1802a6cf8 >> 5) * 4 + DAT_1802a6ce0;
    uStack_30 = (ulonglong)((uint)DAT_1802a6cf8 & 0x1f);
    uVar7 = FUN_1800a7a20(&DAT_1802a6ce0,&local_38,1);
    uVar10 = (uint)uVar7 & 0x1f;
    uVar1 = (ulonglong)uVar10 + 1;
    uVar4 = uVar1 >> 5;
    uVar12 = (uint)uVar1 & 0x1f;
    if (uVar10 != uVar12 || uVar4 != 0) {
      puVar8 = (uint *)(((longlong)uVar7 >> 0x3f & 0xe000000000000000U) + (uVar7 >> 5) * 4 + DAT_1802a6ce0);
      uVar10 = -1 << (sbyte)uVar10;
      cVar11 = (char)uVar12;
      if (uVar4 == 0) {
        uVar10 = uVar10 << (-cVar11 & 0x1fU);
      }
      else {
        *puVar8 = *puVar8 | uVar10;
        FUN_180207610(puVar8 + 1,CONCAT71((uint7)(uint3)(uVar10 >> 8),0xff),uVar4 * 4 + -4);
        if ((uVar1 & 0x1f) == 0) goto LAB_18017410c;
        puVar8 = puVar8 + uVar4;
        uVar10 = 0xffffffff;
      }
      *puVar8 = *puVar8 | uVar10 >> (-cVar11 & 0x1fU);
    }
  }
  else {
    local_38 = ((longlong)DAT_1802a6cf8 >> 0x3f & 0xe000000000000000U) + (DAT_1802a6cf8 >> 5) * 4 + DAT_1802a6ce0;
    uStack_30 = (ulonglong)((uint)DAT_1802a6cf8 & 0x1f);
    uVar7 = FUN_1800a7a20(&DAT_1802a6ce0,&local_38,1);
    uVar10 = (uint)uVar7 & 0x1f;
    uVar1 = (ulonglong)uVar10 + 1;
    uVar4 = uVar1 >> 5;
    uVar12 = (uint)uVar1 & 0x1f;
    if (uVar10 != uVar12 || uVar4 != 0) {
      puVar8 = (uint *)(((longlong)uVar7 >> 0x3f & 0xe000000000000000U) + (uVar7 >> 5) * 4 + DAT_1802a6ce0);
      uVar10 = ~(-1 << (sbyte)uVar10);
      cVar11 = (char)uVar12;
      if (uVar4 == 0) {
        uVar10 = ~(0xffffffffU >> (-cVar11 & 0x1fU)) | uVar10;
      }
      else {
        *puVar8 = *puVar8 & uVar10;
        FUN_180207610(puVar8 + 1,0,uVar4 * 4 + -4);
        if ((uVar1 & 0x1f) == 0) goto LAB_18017410c;
        puVar8 = puVar8 + uVar4;
        uVar10 = ~(0xffffffffU >> (-cVar11 & 0x1fU));
      }
      *puVar8 = *puVar8 & uVar10;
    }
  }
LAB_18017410c:
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
}



void FUN_180174140(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_30;
  ulonglong local_28;
  undefined1 local_20 [16];

  if (DAT_1802a6d00 != DAT_1802a6d08) {
    DAT_1802a6d08 = DAT_1802a6d08 + -0x10;
  }
  if (DAT_1802a6cf8 != 0) {
    uVar5 = (ulonglong)((uint)DAT_1802a6cf8 & 0x1f);
    uVar6 = uVar5 - 1;
    lVar2 = ((ulonglong)(uVar5 != 0) << 0x3d) +
            ((longlong)DAT_1802a6cf8 >> 0x3f & 0xe000000000000000U) + (DAT_1802a6cf8 >> 5) * 4 + DAT_1802a6ce0 +
            (uVar6 >> 5) * 4;
    local_30 = lVar2 + -0x2000000000000000;
    uVar4 = (uint)uVar6;
    local_28 = (ulonglong)(uVar4 & 0x1f);
    uVar1 = *(uint *)(lVar2 + -0x2000000000000000);
    FUN_1800b17d0(&DAT_1802a6ce0,local_20,&local_30);
    if ((uVar1 >> (uVar4 & 0x1f) & 1) != 0) {
      uVar3 = FUN_18016d720();
      FUN_180170650(uVar3);
    }
  }
  return;
}



void FUN_180174210(void)

{
  if (DAT_1802a6ce0 != DAT_1802a6ce8) {
    DAT_1802a6ce8 = DAT_1802a6ce0;
  }
  DAT_1802a6cf8 = 0;
  if (DAT_1802a6d00 != DAT_1802a6d08) {
    DAT_1802a6d08 = DAT_1802a6d00;
  }
  return;
}



void FUN_180174250(void)

{
  atexit(FUN_180172280);
  atexit(FUN_180172300);
  return;
}



void FUN_180174270(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;

  if (DAT_1802a6d70 != 0) {
    uVar4 = DAT_1802a6d80 - DAT_1802a6d70;
    lVar3 = DAT_1802a6d70;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(DAT_1802a6d70 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6d70 + -8) - lVar3)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
    DAT_1802a6d70 = 0;
    DAT_1802a6d78 = 0;
    DAT_1802a6d80 = 0;
  }
  puVar2 = DAT_1802a6d60;
  *(undefined8 *)DAT_1802a6d60[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1801f42e0(puVar2,0x28);
    puVar2 = puVar1;
  }
  thunk_FUN_1801f42e0(DAT_1802a6d60,0x28);
  return;
}



undefined8 FUN_180174330(uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  HRESULT HVar6;
  longlong lVar7;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  char *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  char *local_78;
  char *pcStack_70;
  longlong local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_54 = param_1;
  lVar7 = FUN_180177800();
  puVar9 = DAT_1802a6d60;
  if (*(char *)(lVar7 + 0x78) != '\x01') {
    return 0;
  }
  if (*(char *)(lVar7 + 0x79) == '\0') {
    return 0;
  }
  plVar1 = *(longlong **)(lVar7 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if ((*(byte *)(lVar7 + 0x7b) & 1) != 0) {
    return 0;
  }
  if ((DAT_1802a6d98 != plVar1) || (DAT_1802a6da0 != *(longlong *)(lVar7 + 0x70))) {
    for (puVar12 = (undefined8 *)*DAT_1802a6d60; puVar12 != puVar9; puVar12 = (undefined8 *)*puVar12) {
      if ((longlong *)puVar12[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar12[3] + 0x10))();
        puVar12[3] = 0;
      }
    }
    FUN_180175040(&DAT_1802a6d58);
    DAT_1802a6da0 = *(longlong *)(lVar7 + 0x70);
    DAT_1802a6d98 = plVar1;
  }
  uVar3 = local_54;
  lVar7 = (((ulonglong)local_54._3_1_ ^
           ((ulonglong)local_54._2_1_ ^
           ((ulonglong)local_54._1_1_ ^ ((ulonglong)(byte)local_54 ^ 0xcbf29ce484222325) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3) * 0x100000001b3 & DAT_1802a6d88) * 0x10;
  puVar9 = *(undefined8 **)(DAT_1802a6d70 + 8 + lVar7);
  if (puVar9 != DAT_1802a6d60) {
    if (local_54 != *(uint *)(puVar9 + 2)) {
      do {
        if (puVar9 == *(undefined8 **)(DAT_1802a6d70 + lVar7)) goto LAB_18017449c;
        puVar9 = (undefined8 *)puVar9[1];
      } while (local_54 != *(uint *)(puVar9 + 2));
    }
    if (puVar9 != DAT_1802a6d60) {
      return puVar9[3];
    }
  }
LAB_18017449c:
  local_60 = local_54;
  local_b8 = 0;
  uStack_b0 = 0;
  if (DAT_1802a6da8 == (longlong *)0x0) {
    HVar6 = CoInitializeEx((LPVOID)0x0,0);
    if (HVar6 < 0 && HVar6 != -0x7ffefefa) goto LAB_1801749c1;
    HVar6 = CoCreateInstance((IID *)&DAT_180224008,(LPUNKNOWN)0x0,1,(IID *)&DAT_18021e878,&DAT_1802a6da8);
    if (HVar6 < 0) {
      local_f8 = "WIC is unavailable";
      local_f0 = 0x12;
      local_78 = "Images";
      pcStack_70 = (char *)0x6;
      FUN_180001ad0(4,&local_78,&local_f8);
      goto LAB_1801749c1;
    }
    if (DAT_1802a6da8 == (longlong *)0x0) goto LAB_1801749c1;
  }
  plVar2 = DAT_1802a6da8;
  if (DAT_1802a6db0 == (HMODULE)0x0) {
    GetModuleHandleExW(6,(LPCWSTR)FUN_1801753e0,&DAT_1802a6db0);
  }
  hResInfo = FindResourceW(DAT_1802a6db0,(LPCWSTR)(ulonglong)(uVar3 & 0xffff),(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    local_f8 = "resource {} not found in the DLL";
    local_f0 = 0x20;
    local_78 = "Images";
    pcStack_70 = (char *)0x6;
    FUN_180175420(4,&local_78,&local_f8,&local_60);
  }
  else {
    if (DAT_1802a6db0 == (HMODULE)0x0) {
      GetModuleHandleExW(6,(LPCWSTR)FUN_1801753e0,&DAT_1802a6db0);
    }
    DVar4 = SizeofResource(DAT_1802a6db0,hResInfo);
    if (DAT_1802a6db0 == (HMODULE)0x0) {
      GetModuleHandleExW(6,(LPCWSTR)FUN_1801753e0,&DAT_1802a6db0);
    }
    hResData = LoadResource(DAT_1802a6db0,hResInfo);
    if (((hResData != (HGLOBAL)0x0) && (pvVar8 = LockResource(hResData), pvVar8 != (LPVOID)0x0)) && (DVar4 != 0)) {
      local_88 = (longlong *)0x0;
      local_98 = (longlong *)0x0;
      local_90 = (longlong *)0x0;
      local_80 = (longlong *)0x0;
      iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_88);
      if (((iVar5 < 0) || (iVar5 = (**(code **)(*local_88 + 0x80))(local_88,pvVar8,DVar4), iVar5 < 0)) ||
         ((iVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,local_88,0,1,&local_98), iVar5 < 0 ||
          ((iVar5 = (**(code **)(*local_98 + 0x68))(local_98,0,&local_90), iVar5 < 0 ||
           (iVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,&local_80), iVar5 < 0)))))) {
        local_58 = 0;
        local_5c = 0;
        local_78 = (char *)0x0;
        pcStack_70 = (char *)0x0;
        local_68 = 0;
      }
      else {
        iVar5 = (**(code **)(*local_80 + 0x40))(local_80,local_90,&DAT_180224018,0,0,0,1);
        local_58 = 0;
        local_5c = 0;
        local_78 = (char *)0x0;
        pcStack_70 = (char *)0x0;
        local_68 = 0;
        if ((-1 < iVar5) &&
           (iVar5 = (**(code **)(*local_80 + 0x18))(local_80,&local_58,&local_5c),
           (local_5c != 0 && local_58 != 0) && -1 < iVar5)) {
          uVar11 = (ulonglong)local_5c * (ulonglong)local_58 * 4;
          lVar7 = uVar11 - ((longlong)pcStack_70 - (longlong)local_78);
          if (uVar11 < (ulonglong)((longlong)pcStack_70 - (longlong)local_78)) {
            pcStack_70 = local_78 + uVar11;
          }
          else if (lVar7 != 0) {
            if ((ulonglong)(local_68 - (longlong)local_78) < uVar11) {
              FUN_180175810(&local_78,uVar11,&local_f8);
            }
            else {
              pcVar10 = pcStack_70 + lVar7;
              FUN_180207610(pcStack_70,0);
              pcStack_70 = pcVar10;
            }
          }
          iVar5 = (**(code **)(*local_80 + 0x38))(local_80,0,local_58 << 2,(int)pcStack_70 - (int)local_78,local_78);
        }
      }
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
        local_80 = (longlong *)0x0;
      }
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x10))();
        local_90 = (longlong *)0x0;
      }
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
        local_98 = (longlong *)0x0;
      }
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
        local_88 = (longlong *)0x0;
      }
      if ((iVar5 < 0) || (local_78 == pcStack_70)) {
        local_108 = (char *)CONCAT44(local_108._4_4_,iVar5);
        local_f8 = "resource {} failed to decode ({:#x})";
        local_f0 = 0x24;
        local_c8 = "Images";
        local_c0 = 6;
        FUN_180175600(4,&local_c8,&local_f8,&local_60,&local_108);
      }
      else {
        local_e0 = 0;
        uStack_d4 = 0;
        local_d0 = 0;
        local_f8 = (char *)CONCAT44(local_5c,local_58);
        local_f0 = 0x100000001;
        uStack_e8 = 0x1c;
        uStack_e4 = 1;
        uStack_dc = 1;
        uStack_d8 = 8;
        local_c8 = local_78;
        local_c0 = (ulonglong)(local_58 << 2);
        local_a0 = (longlong *)0x0;
        iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_f8,&local_c8,&local_a0);
        if (iVar5 < 0) {
          local_108 = "resource {} texture creation failed";
          local_100 = 0x23;
          local_118 = "Images";
          local_110 = 6;
          FUN_180175420(4,&local_118);
        }
        else {
          iVar5 = (**(code **)(*plVar1 + 0x38))(plVar1,local_a0);
          if (local_a0 != (longlong *)0x0) {
            (**(code **)(*local_a0 + 0x10))();
          }
          if (iVar5 < 0) {
            local_b8 = 0;
          }
          else {
            uStack_b0 = CONCAT44((float)local_5c,(float)local_58);
          }
        }
      }
      if (local_78 != (char *)0x0) {
        uVar11 = local_68 - (longlong)local_78;
        pcVar10 = local_78;
        if (0xfff < uVar11) {
          pcVar10 = *(char **)(local_78 + -8);
          if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar10)) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar11 = uVar11 + 0x27;
        }
        thunk_FUN_1801f42e0(pcVar10,uVar11);
      }
    }
  }
LAB_1801749c1:
  puVar9 = (undefined8 *)FUN_180174b80(&local_54);
  *puVar9 = local_b8;
  puVar9[1] = uStack_b0;
  return local_b8;
}



void Unwind_180174ae0(undefined8 param_1,longlong param_2)

{
  FUN_180131590(param_2 + 0xe0);
  return;
}



void FUN_180174b20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1802a6d60;
  for (puVar2 = (undefined8 *)*DAT_1802a6d60; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    if ((longlong *)puVar2[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar2[3] + 0x10))();
      puVar2[3] = 0;
    }
  }
  FUN_180175040(&DAT_1802a6d58);
  DAT_1802a6d98 = 0;
  return;
}



longlong * FUN_180174b80(byte *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;

  uVar9 = ((ulonglong)param_1[3] ^
          ((ulonglong)param_1[2] ^
          ((ulonglong)param_1[1] ^ ((ulonglong)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3;
  lVar13 = (DAT_1802a6d88 & uVar9) * 0x10;
  plVar6 = *(longlong **)(DAT_1802a6d70 + 8 + lVar13);
  plVar12 = DAT_1802a6d60;
  if (plVar6 != DAT_1802a6d60) {
    if (*(int *)param_1 != (int)plVar6[2]) {
      do {
        plVar12 = plVar6;
        if (plVar6 == *(longlong **)(DAT_1802a6d70 + lVar13)) goto LAB_180174c26;
        plVar6 = (longlong *)plVar6[1];
      } while (*(int *)param_1 != (int)plVar6[2]);
    }
    goto LAB_180174f61;
  }
LAB_180174c26:
  if (DAT_1802a6d68 == 0x666666666666666) {
    FUN_1801d7524("unordered_map/set too long");
  }
  plVar6 = (longlong *)FUN_1801d61c8(0x28);
  *(undefined4 *)(plVar6 + 2) = *(undefined4 *)param_1;
  plVar6[3] = 0;
  plVar6[4] = 0;
  uVar11 = DAT_1802a6d90;
  uVar7 = DAT_1802a6d68 + 1;
  if ((longlong)uVar7 < 0) {
    fVar16 = (float)uVar7;
    if ((longlong)DAT_1802a6d90 < 0) goto LAB_180174c7b;
LAB_180174ccf:
    fVar17 = fVar16 / (float)(longlong)DAT_1802a6d90;
  }
  else {
    fVar16 = (float)(longlong)uVar7;
    if (-1 < (longlong)DAT_1802a6d90) goto LAB_180174ccf;
LAB_180174c7b:
    fVar17 = fVar16 / (float)DAT_1802a6d90;
  }
  if (DAT_1802a6d58 < fVar17) {
    fVar16 = (float)FUN_1801eacf0(fVar16 / DAT_1802a6d58);
    plVar12 = DAT_1802a6d60;
    uVar8 = (longlong)(fVar16 - 9.223372e+18) & (longlong)fVar16 >> 0x3f | (longlong)fVar16;
    uVar7 = 8;
    if (8 < uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = uVar11;
    if (uVar11 < uVar7) {
      uVar8 = uVar11 * 8;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0x1ff < uVar11) {
        uVar8 = uVar7;
      }
    }
    if (0x800000000000000 < uVar8) {
      FUN_1801d7524("invalid hash bucket count");
    }
    uVar11 = uVar8 - 1 | 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar5 = (char)lVar13 + 1;
    FUN_180175940(2L << (bVar5 & 0x3f),DAT_1802a6d60);
    DAT_1802a6d90 = 1L << (bVar5 & 0x3f);
    DAT_1802a6d88 = DAT_1802a6d90 - 1;
    plVar15 = (longlong *)*DAT_1802a6d60;
    lVar13 = DAT_1802a6d70;
joined_r0x000180174da6:
    DAT_1802a6d70 = lVar13;
    if (plVar15 != plVar12) {
      plVar1 = (longlong *)*plVar15;
      lVar10 = (((ulonglong)*(byte *)((longlong)plVar15 + 0x13) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x12) ^
                ((ulonglong)*(byte *)((longlong)plVar15 + 0x11) ^
                ((ulonglong)*(byte *)(plVar15 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3 & DAT_1802a6d88) * 0x10;
      if (*(longlong **)(lVar13 + lVar10) == plVar12) {
        *(longlong **)(lVar13 + lVar10) = plVar15;
      }
      else {
        plVar14 = *(longlong **)(lVar13 + 8 + lVar10);
        if ((int)plVar15[2] != (int)plVar14[2]) {
          do {
            if (*(longlong **)(lVar13 + lVar10) == plVar14) {
              puVar4 = (undefined8 *)plVar15[1];
              *puVar4 = plVar1;
              puVar2 = (undefined8 *)plVar1[1];
              *puVar2 = plVar14;
              puVar3 = (undefined8 *)plVar14[1];
              *puVar3 = plVar15;
              plVar14[1] = (longlong)puVar2;
              plVar1[1] = (longlong)puVar4;
              plVar15[1] = (longlong)puVar3;
              *(longlong **)(lVar13 + lVar10) = plVar15;
              plVar15 = plVar1;
              lVar13 = DAT_1802a6d70;
              goto joined_r0x000180174da6;
            }
            plVar14 = (longlong *)plVar14[1];
          } while ((int)plVar15[2] != (int)plVar14[2]);
          lVar13 = *plVar14;
          puVar4 = (undefined8 *)plVar15[1];
          *puVar4 = plVar1;
          plVar14 = (longlong *)plVar1[1];
          *plVar14 = lVar13;
          puVar2 = *(undefined8 **)(lVar13 + 8);
          *puVar2 = plVar15;
          *(longlong **)(lVar13 + 8) = plVar14;
          plVar1[1] = (longlong)puVar4;
          plVar15[1] = (longlong)puVar2;
          plVar15 = plVar1;
          lVar13 = DAT_1802a6d70;
          goto joined_r0x000180174da6;
        }
        plVar14 = (longlong *)*plVar14;
        if (plVar14 != plVar15) {
          puVar4 = (undefined8 *)plVar15[1];
          *puVar4 = plVar1;
          puVar2 = (undefined8 *)plVar1[1];
          *puVar2 = plVar14;
          puVar3 = (undefined8 *)plVar14[1];
          *puVar3 = plVar15;
          plVar14[1] = (longlong)puVar2;
          plVar1[1] = (longlong)puVar4;
          plVar15[1] = (longlong)puVar3;
        }
      }
      *(longlong **)(lVar13 + 8 + lVar10) = plVar15;
      plVar15 = plVar1;
      lVar13 = DAT_1802a6d70;
      goto joined_r0x000180174da6;
    }
    lVar10 = (DAT_1802a6d88 & uVar9) * 0x10;
    plVar15 = *(longlong **)(lVar13 + 8 + lVar10);
    plVar12 = DAT_1802a6d60;
    if (plVar15 != DAT_1802a6d60) {
      if ((int)plVar6[2] != (int)plVar15[2]) {
        plVar12 = plVar15;
        do {
          if (plVar12 == *(longlong **)(lVar13 + lVar10)) goto LAB_180174f07;
          plVar15 = (longlong *)plVar12[1];
          plVar12 = plVar15;
        } while ((int)plVar6[2] != (int)plVar15[2]);
      }
      plVar12 = (longlong *)*plVar15;
    }
  }
LAB_180174f07:
  puVar4 = (undefined8 *)plVar12[1];
  DAT_1802a6d68 = DAT_1802a6d68 + 1;
  *plVar6 = (longlong)plVar12;
  plVar6[1] = (longlong)puVar4;
  *puVar4 = plVar6;
  plVar12[1] = (longlong)plVar6;
  lVar13 = DAT_1802a6d70;
  lVar10 = (uVar9 & DAT_1802a6d88) * 0x10;
  if (*(longlong **)(DAT_1802a6d70 + lVar10) == DAT_1802a6d60) {
    *(longlong **)(DAT_1802a6d70 + lVar10) = plVar6;
    *(longlong **)(lVar13 + 8 + lVar10) = plVar6;
  }
  else if (*(longlong **)(DAT_1802a6d70 + lVar10) == plVar12) {
    *(longlong **)(DAT_1802a6d70 + lVar10) = plVar6;
  }
  else if (*(undefined8 **)(DAT_1802a6d70 + 8 + lVar10) == puVar4) {
    *(longlong **)(DAT_1802a6d70 + 8 + lVar10) = plVar6;
  }
LAB_180174f61:
  return plVar6 + 3;
}



void Unwind_180174f90(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x28),0x28);
  return;
}



undefined8 * FUN_180174fd0(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  lVar1 = FUN_180174330(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_180174b80(&local_14);
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  *param_1 = uVar2;
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_38)) {
    return param_1;
  }
}



void FUN_180175040(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;

  if (*(ulonglong *)(param_1 + 0x10) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x38) >> 3 <= *(ulonglong *)(param_1 + 0x10)) {
    *(undefined8 *)plVar2[1] = 0;
    puVar10 = (undefined8 *)*plVar2;
    while (puVar10 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar10;
      thunk_FUN_1801f42e0(puVar10,0x28);
      puVar10 = puVar6;
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar14 = *(undefined4 **)(param_1 + 0x18);
    puVar7 = *(undefined4 **)(param_1 + 0x20);
    if (puVar14 == puVar7) {
      return;
    }
    uVar8 = *(undefined4 *)(param_1 + 8);
    uVar9 = *(undefined4 *)(param_1 + 0xc);
    uVar15 = (longlong)puVar7 + (-8 - (longlong)puVar14);
    if (0x17 < uVar15) {
      uVar15 = (uVar15 >> 3) + 1;
      uVar16 = uVar15 & 0xfffffffffffffffc;
      uVar17 = 0;
      do {
        puVar1 = puVar14 + uVar17 * 2;
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        puVar1 = puVar14 + uVar17 * 2 + 4;
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        uVar17 = uVar17 + 4;
      } while (uVar16 != uVar17);
      puVar14 = puVar14 + uVar16 * 2;
      if (uVar15 == uVar16) {
        return;
      }
    }
    do {
      *puVar14 = uVar8;
      puVar14[1] = uVar9;
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar7);
    return;
  }
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == plVar2) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  plVar5 = (longlong *)plVar3[1];
  lVar18 = (((ulonglong)*(byte *)((longlong)plVar3 + 0x13) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x12) ^
            ((ulonglong)*(byte *)((longlong)plVar3 + 0x11) ^
            ((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
            0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  lVar19 = *(longlong *)(lVar4 + lVar18);
  plVar11 = *(longlong **)(lVar4 + 8 + lVar18);
  plVar12 = plVar3;
  if ((longlong *)lVar19 == plVar3) {
    do {
      plVar13 = (longlong *)*plVar12;
      thunk_FUN_1801f42e0(plVar12,0x28);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar12 == plVar11) goto LAB_180175156;
      plVar12 = plVar13;
    } while (plVar13 != plVar2);
    *(longlong **)(lVar4 + lVar18) = plVar13;
  }
  else {
    do {
      plVar13 = (longlong *)*plVar12;
      thunk_FUN_1801f42e0(plVar12,0x28);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar12 == plVar11) goto LAB_180175156;
      plVar12 = plVar13;
    } while (plVar13 != plVar2);
  }
LAB_1801752ed:
  *plVar5 = (longlong)plVar13;
  plVar13[1] = (longlong)plVar5;
  return;
LAB_180175156:
  plVar11 = plVar5;
  if ((longlong *)lVar19 == plVar3) {
    *(longlong **)(lVar4 + lVar18) = plVar2;
    plVar11 = plVar2;
  }
  *(longlong **)(lVar4 + 8 + lVar18) = plVar11;
  while (plVar13 != plVar2) {
    lVar19 = (((ulonglong)*(byte *)((longlong)plVar13 + 0x13) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x12) ^
              ((ulonglong)*(byte *)((longlong)plVar13 + 0x11) ^
              ((ulonglong)*(byte *)(plVar13 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3
              ) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
    plVar3 = *(longlong **)(lVar4 + 8 + lVar19);
    plVar11 = plVar13;
    while( true ) {
      plVar13 = (longlong *)*plVar11;
      thunk_FUN_1801f42e0(plVar11,0x28);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar11 == plVar3) break;
      plVar11 = plVar13;
      if (plVar13 == plVar2) {
        *(longlong **)(lVar4 + lVar19) = plVar13;
        goto LAB_1801752ed;
      }
    }
    *(longlong **)(lVar4 + lVar19) = plVar2;
    *(longlong **)(lVar4 + 8 + lVar19) = plVar2;
  }
  goto LAB_1801752ed;
}



void FUN_180175310(void)

{
  longlong lVar1;
  ulonglong uVar2;

  if (DAT_1802a6d70 != 0) {
    uVar2 = DAT_1802a6d80 - DAT_1802a6d70;
    lVar1 = DAT_1802a6d70;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(DAT_1802a6d70 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6d70 + -8) - lVar1)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
    DAT_1802a6d70 = 0;
    DAT_1802a6d78 = 0;
    DAT_1802a6d80 = 0;
  }
  return;
}



void FUN_180175390(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar2 = DAT_1802a6d60;
  *(undefined8 *)DAT_1802a6d60[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1801f42e0(puVar2,0x28);
    puVar2 = puVar1;
  }
  thunk_FUN_1801f42e0(DAT_1802a6d60,0x28);
  return;
}



longlong FUN_1801753e0(void)

{
  if (DAT_1802a6db0 != 0) {
    return DAT_1802a6db0;
  }
  GetModuleHandleExW(6,(LPCWSTR)FUN_1801753e0,(HMODULE *)&DAT_1802a6db0);
  return DAT_1802a6db0;
}



void FUN_180175420(int param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_98 = *param_3;
    local_90 = param_3[1];
    local_80 = *param_4;
    local_88 = 0x1000000000000000;
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (0xf < local_90 + 8U) {
      FUN_180002240(&local_68);
    }
    local_58 = 0;
    local_a8 = 1;
    local_a0 = &local_88;
    FUN_180003080(local_c0,&local_68,&local_98,&local_a8,0);
    local_78 = &local_68;
    if (0xf < local_50) {
      local_78 = local_68;
    }
    local_70 = local_58;
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_b8);
    if (0xf < local_50) {
      uVar3 = local_50 + 1;
      pppuVar4 = (undefined8 ***)local_68;
      if (0xfff < uVar3) {
        pppuVar4 = (undefined8 ***)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppuVar4))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = local_50 + 0x28;
      }
      thunk_FUN_1801f42e0(pppuVar4,uVar3);
    }
  }
  return;
}



void Unwind_180175580(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



void Unwind_1801755c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



void FUN_180175600(int param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_a0 = *param_3;
    local_98 = param_3[1];
    local_70 = *param_4;
    local_80 = 0x1000000000000000;
    local_6c = *param_5;
    local_78 = 0x2000000000000004;
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (local_98 < 0xfffffffffffffff0) {
      FUN_180002240(&local_68,local_98 + 0x10);
    }
    local_58 = 0;
    local_b0 = 2;
    local_a8 = &local_80;
    FUN_180003080(local_d0,&local_68,&local_a0,&local_b0,0);
    local_90 = &local_68;
    if (0xf < local_50) {
      local_90 = local_68;
    }
    local_88 = local_58;
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_c8);
    if (0xf < local_50) {
      uVar3 = local_50 + 1;
      pppuVar4 = (undefined8 ***)local_68;
      if (0xfff < uVar3) {
        pppuVar4 = (undefined8 ***)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppuVar4))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = local_50 + 0x28;
      }
      thunk_FUN_1801f42e0(pppuVar4,uVar3);
    }
  }
  return;
}



void Unwind_180175790(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1801757d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void FUN_180175810(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;

  if ((longlong)param_2 < 0) {
    FUN_1800807e0();
  }
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2] - uVar1;
  uVar6 = (uVar2 >> 1) + uVar2;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if ((uVar2 >> 1 ^ 0x7fffffffffffffff) < uVar2) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 == 0) {
    uVar2 = 0;
  }
  else if (uVar6 < 0x1000) {
    uVar2 = FUN_1801d61c8(uVar6);
  }
  else {
    if (0xffffffffffffffd8 < uVar6) {
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    lVar3 = FUN_1801d61c8(uVar6 + 0x27);
    uVar2 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar3;
  }
  lVar3 = uVar4 - uVar1;
  FUN_180207610(uVar2 + lVar3,0,param_2 - lVar3);
  FUN_1802079d0(uVar2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar5 = param_1[2] - uVar1;
    uVar4 = uVar1;
    if (0xfff < uVar5) {
      uVar4 = *(ulonglong *)(uVar1 - 8);
      if (0x1f < (uVar1 - 8) - uVar4) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1801f42e0(uVar4,uVar5);
  }
  *param_1 = uVar2;
  param_1[1] = param_2 + uVar2;
  param_1[2] = uVar6 + uVar2;
  return;
}



void FUN_180175940(ulonglong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;

  puVar4 = DAT_1802a6d78;
  puVar9 = DAT_1802a6d70;
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  if ((ulonglong)((longlong)DAT_1802a6d78 - (longlong)DAT_1802a6d70 >> 3) < param_1) {
    if (param_1 >> 0x3d != 0) {
LAB_180175b04:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    lVar2 = param_1 * 8;
    if (param_1 < 0x200) {
      puVar9 = (undefined4 *)FUN_1801d61c8(lVar2);
      uVar7 = (longlong)DAT_1802a6d80 - (longlong)DAT_1802a6d70;
    }
    else {
      if (0x1ffffffffffffffb < param_1) goto LAB_180175b04;
      lVar3 = FUN_1801d61c8(lVar2 + 0x27);
      puVar9 = (undefined4 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar9 + -2) = lVar3;
      uVar7 = (longlong)DAT_1802a6d80 - (longlong)DAT_1802a6d70;
    }
    if (uVar7 != 0) {
      puVar4 = DAT_1802a6d70;
      if (0xfff < uVar7) {
        puVar4 = *(undefined4 **)(DAT_1802a6d70 + -2);
        if (0x1f < (ulonglong)((longlong)DAT_1802a6d70 + (-8 - (longlong)puVar4))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar7 = uVar7 + 0x27;
      }
      thunk_FUN_1801f42e0(puVar4,uVar7);
    }
    puVar4 = puVar9 + param_1 * 2;
    DAT_1802a6d70 = puVar9;
    DAT_1802a6d78 = puVar4;
    DAT_1802a6d80 = puVar4;
    if (0x17 < lVar2 - 8U) {
      uVar10 = (lVar2 - 8U >> 3) + 1;
      uVar7 = uVar10 & 0xfffffffffffffffc;
      uVar11 = 0;
      do {
        puVar5 = puVar9 + uVar11 * 2;
        *puVar5 = uVar6;
        puVar5[1] = uVar8;
        puVar5[2] = uVar6;
        puVar5[3] = uVar8;
        puVar5 = puVar9 + uVar11 * 2 + 4;
        *puVar5 = uVar6;
        puVar5[1] = uVar8;
        puVar5[2] = uVar6;
        puVar5[3] = uVar8;
        uVar11 = uVar11 + 4;
      } while (uVar7 != uVar11);
      puVar9 = puVar9 + uVar7 * 2;
      if (uVar10 == uVar7) {
        return;
      }
    }
    do {
      *puVar9 = uVar6;
      puVar9[1] = uVar8;
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar4);
  }
  else if (DAT_1802a6d70 != DAT_1802a6d78) {
    uVar7 = ((longlong)DAT_1802a6d78 - (longlong)DAT_1802a6d70) - 8;
    puVar5 = DAT_1802a6d70;
    if (0x17 < uVar7) {
      uVar7 = (uVar7 >> 3) + 1;
      uVar10 = uVar7 & 0xfffffffffffffffc;
      puVar5 = DAT_1802a6d70 + uVar10 * 2;
      uVar11 = 0;
      do {
        puVar1 = puVar9 + uVar11 * 2;
        *puVar1 = uVar6;
        puVar1[1] = uVar8;
        puVar1[2] = uVar6;
        puVar1[3] = uVar8;
        puVar1 = puVar9 + uVar11 * 2 + 4;
        *puVar1 = uVar6;
        puVar1[1] = uVar8;
        puVar1[2] = uVar6;
        puVar1[3] = uVar8;
        uVar11 = uVar11 + 4;
      } while (uVar10 != uVar11);
      if (uVar7 == uVar10) {
        return;
      }
    }
    do {
      *puVar5 = uVar6;
      puVar5[1] = uVar8;
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  return;
}



void FUN_180175b30(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;

  DAT_1802a6d58 = 0;
  DAT_1802a6d60 = 0;
  DAT_1802a6d68 = 0;
  lVar1 = FUN_1801d61c8(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  DAT_1802a6d70 = (longlong *)0x0;
  DAT_1802a6d78 = (longlong *)0x0;
  DAT_1802a6d80 = (longlong *)0x0;
  DAT_1802a6d88 = 7;
  DAT_1802a6d90 = 8;
  DAT_1802a6d58 = 0x3f800000;
  DAT_1802a6d60 = lVar1;
  plVar2 = (longlong *)FUN_1801d61c8(0x80);
  uVar4 = (longlong)DAT_1802a6d80 - (longlong)DAT_1802a6d70;
  if (uVar4 != 0) {
    lVar3 = (longlong)DAT_1802a6d70;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)((longlong)DAT_1802a6d70 + -8);
      if (0x1f < (ulonglong)(((longlong)DAT_1802a6d70 + -8) - lVar3)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  DAT_1802a6d78 = plVar2 + 0x10;
  DAT_1802a6d70 = plVar2;
  DAT_1802a6d80 = DAT_1802a6d78;
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = lVar1;
  plVar2[4] = lVar1;
  plVar2[5] = lVar1;
  plVar2[6] = lVar1;
  plVar2[7] = lVar1;
  plVar2[8] = lVar1;
  plVar2[9] = lVar1;
  plVar2[10] = lVar1;
  plVar2[0xb] = lVar1;
  plVar2[0xc] = lVar1;
  plVar2[0xd] = lVar1;
  plVar2[0xe] = lVar1;
  plVar2[0xf] = lVar1;
  atexit(FUN_180174270);
  return;
}



void Unwind_180175c80(void)

{
  FUN_180175310();
  FUN_180175390();
  return;
}



undefined * FUN_180175cb0(void)

{
  return &DAT_180297428;
}



void FUN_180175cc0(char *param_1,char param_2)

{
  if (param_2 != '\0') {
    param_1[1] = '\0';
    *(char **)(param_1 + 0x10) = "waiting for a frame";
    param_1[0x18] = '\0';
    *param_1 = param_2;
    return;
  }
  *(undefined **)(param_1 + 0x10) = &DAT_18021e8e9;
  param_1[0x18] = '\0';
  *param_1 = '\0';
  return;
}



void FUN_180175cf0(longlong param_1)

{
  FUN_180175e70();
  if (DAT_1802a6e00 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e00 + 0x10))();
    DAT_1802a6e00 = (longlong *)0x0;
  }
  if (DAT_1802a6e08 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e08 + 0x10))();
    DAT_1802a6e08 = (longlong *)0x0;
  }
  if (DAT_1802a6e10 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e10 + 0x10))();
    DAT_1802a6e10 = (longlong *)0x0;
  }
  if (DAT_1802a6e18 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e18 + 0x10))();
    DAT_1802a6e18 = (longlong *)0x0;
  }
  if (DAT_1802a6e20 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e20 + 0x10))();
    DAT_1802a6e20 = (longlong *)0x0;
  }
  if (DAT_1802a6e28 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e28 + 0x10))();
    DAT_1802a6e28 = (longlong *)0x0;
  }
  if (DAT_1802a6e30 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e30 + 0x10))();
    DAT_1802a6e30 = (longlong *)0x0;
  }
  if (DAT_1802a6e38 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e38 + 0x10))();
    DAT_1802a6e38 = (longlong *)0x0;
  }
  if (DAT_1802a6e40 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e40 + 0x10))();
    DAT_1802a6e40 = (longlong *)0x0;
  }
  if (DAT_1802a6dc0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6dc0 + 0x10))();
    DAT_1802a6dc0 = (longlong *)0x0;
  }
  if (DAT_1802a6db8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6db8 + 0x10))();
    DAT_1802a6db8 = (longlong *)0x0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



void FUN_180175e50(longlong param_1)

{
  FUN_180175e70();
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



void FUN_180175e70(void)

{
  if (DAT_1802a6dd0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6dd0 + 0x10))();
    DAT_1802a6dd0 = (longlong *)0x0;
  }
  if (DAT_1802a6dc8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6dc8 + 0x10))();
    DAT_1802a6dc8 = (longlong *)0x0;
  }
  if (DAT_1802a6de0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6de0 + 0x10))();
    DAT_1802a6de0 = (longlong *)0x0;
  }
  if (DAT_1802a6de8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6de8 + 0x10))();
    DAT_1802a6de8 = (longlong *)0x0;
  }
  if (DAT_1802a6dd8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6dd8 + 0x10))();
    DAT_1802a6dd8 = (longlong *)0x0;
  }
  if (DAT_1802a6df8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6df8 + 0x10))();
    DAT_1802a6df8 = (longlong *)0x0;
  }
  if (DAT_1802a6df0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6df0 + 0x10))();
    DAT_1802a6df0 = (longlong *)0x0;
  }
  _DAT_1802a6e48 = 0;
  DAT_1802a6e50 = 0;
  return;
}



void FUN_180175f60(undefined1 *param_1)

{
  *param_1 = 0;
  FUN_180175cf0();
  return;
}



void FUN_180175f70(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  LARGE_INTEGER LVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  local_38.QuadPart = 0;
  QueryPerformanceCounter(&local_38);
  LVar4 = local_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
    ((LARGE_INTEGER *)(param_1 + 0x20))->QuadPart = (LONGLONG)local_38;
  }
  else {
    if (DAT_1802a6e58 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1802a6e58);
    }
    dVar3 = 0.0;
    if (DAT_1802a6e58 != 0) {
      dVar3 = (double)(LVar4.QuadPart - lVar2) / (double)DAT_1802a6e58;
    }
    ((LARGE_INTEGER *)(param_1 + 0x20))->QuadPart = (LONGLONG)LVar4;
    if ((0.0 < dVar3) && (dVar3 <= 0.25)) {
      fVar1 = *(float *)(param_1 + 4);
      fVar7 = 0.0;
      if (0.0 <= fVar1) {
        fVar7 = fVar1;
      }
      auVar5._0_4_ = -(float)dVar3;
      auVar5._4_4_ = 0x80000000;
      auVar5._8_4_ = 0x80000000;
      auVar5._12_4_ = 0x80000000;
      auVar6._4_12_ = auVar5._4_12_;
      auVar6._0_4_ = auVar5._0_4_ /
                     (float)(-(uint)(1.0 < fVar1) & 0x3e20c49c | ~-(uint)(1.0 < fVar1) & (uint)(fVar7 * 0.15 + 0.007));
      FUN_1801ecf00(auVar6._0_8_);
    }
  }
  if (DAT_1802a0400 != (local_30 ^ (ulonglong)auStack_58)) {
  }
  return;
}



undefined8 FUN_1801760e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_d8;
  local_80 = (longlong *)0x0;
  uVar3 = 0;
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2,0,&DAT_18021e8f0,&local_80);
  if (iVar1 < 0) goto LAB_18017637a;
  uStack_98 = 0;
  uStack_94 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  (**(code **)(*local_80 + 0x50))(local_80,&local_b8);
  if (local_a8._4_4_ == 1) {
    if ((((int)local_b8 == DAT_1802a6e48) && (local_b8._4_4_ == DAT_1802a6e4c)) && ((int)local_a8 == DAT_1802a6e50)) {
LAB_1801762e5:
      if (local_80 == DAT_1802a6df0 && DAT_1802a6df8 != (longlong *)0x0) {
        uVar3 = 1;
        if (local_80 != (longlong *)0x0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
        goto LAB_18017637a;
      }
      if (DAT_1802a6df8 != (longlong *)0x0) {
        (**(code **)(*DAT_1802a6df8 + 0x10))(DAT_1802a6df8);
        DAT_1802a6df8 = (longlong *)0x0;
      }
      if (DAT_1802a6df0 != (longlong *)0x0) {
        (**(code **)(*DAT_1802a6df0 + 0x10))();
        DAT_1802a6df0 = (longlong *)0x0;
      }
      iVar1 = (**(code **)(*DAT_1802a6db8 + 0x48))(DAT_1802a6db8,local_80,0,&DAT_1802a6df8);
      if (-1 < iVar1) {
        uVar3 = 1;
        DAT_1802a6df0 = local_80;
        goto LAB_18017637a;
      }
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
        local_80 = (longlong *)0x0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      pcVar2 = "could not view the back buffer";
    }
    else {
      FUN_180175e70();
      uStack_30 = 0;
      uStack_20 = 0;
      local_48 = local_b8;
      uStack_40 = 0x100000001;
      local_38 = (int)local_a8;
      uStack_34 = 1;
      uStack_28 = 8;
      iVar1 = (**(code **)(*DAT_1802a6db8 + 0x28))(DAT_1802a6db8,&local_48,0,&DAT_1802a6dc8);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*DAT_1802a6db8 + 0x38))(DAT_1802a6db8,DAT_1802a6dc8,0,&DAT_1802a6dd0);
        if (-1 < iVar1) {
          uStack_64 = uStack_34;
          uStack_60 = (undefined4)uStack_30;
          uStack_5c = uStack_30._4_4_;
          uStack_54 = uStack_28._4_4_;
          uStack_50 = uStack_20;
          local_78 = (undefined4)local_48;
          uStack_74 = local_48._4_4_;
          uStack_70 = (undefined4)uStack_40;
          uStack_6c = uStack_40._4_4_;
          local_68 = 10;
          local_58 = 0x28;
          iVar1 = (**(code **)(*DAT_1802a6db8 + 0x28))(DAT_1802a6db8,&local_78,0,&DAT_1802a6dd8);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*DAT_1802a6db8 + 0x38))(DAT_1802a6db8,DAT_1802a6dd8,0,&DAT_1802a6de0);
            if (-1 < iVar1) {
              iVar1 = (**(code **)(*DAT_1802a6db8 + 0x48))(DAT_1802a6db8,DAT_1802a6dd8,0,&DAT_1802a6de8);
              if (-1 < iVar1) {
                _DAT_1802a6e48 = local_b8;
                DAT_1802a6e50 = (int)local_a8;
                *(undefined1 *)(param_1 + 0x18) = 0;
                goto LAB_1801762e5;
              }
            }
          }
        }
      }
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
        local_80 = (longlong *)0x0;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      pcVar2 = "could not create the frame buffers";
    }
  }
  else {
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
      local_80 = (longlong *)0x0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    pcVar2 = "the swap chain is multisampled";
  }
  *(char **)(param_1 + 0x10) = pcVar2;
  FUN_180175cf0(param_1);
  uVar3 = 0;
LAB_18017637a:
  if (DAT_1802a0400 == (local_18 ^ (ulonglong)auStack_d8)) {
    return uVar3;
  }
}



undefined8 FUN_180176440(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  char *local_260;
  char *local_258;
  undefined4 local_250;
  undefined4 local_248;
  longlong **local_240;
  longlong **local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;

  local_40 = DAT_1802a0400 ^ (ulonglong)auStack_288;
  if (DAT_1802a6db8 == (longlong *)0x0) {
    iVar3 = (**(code **)(*param_2 + 0x38))(param_2,&DAT_18021e968,&DAT_1802a6db8);
    if (iVar3 < 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      *(char **)(param_1 + 0x10) = "the swap chain has no D3D11 device";
    }
    else {
      (**(code **)(*DAT_1802a6db8 + 0x140))(DAT_1802a6db8,&DAT_1802a6dc0);
      local_188 = (longlong *)0x0;
      local_190 = (longlong *)0x0;
      local_238 = &local_190;
      local_240 = &local_188;
      local_258 = "vs_4_0";
      local_260 = "vs_main";
      local_248 = 0;
      local_250 = 0;
      local_268 = (undefined8 *)0x0;
      iVar3 = D3DCompile("\nstruct VSOut { float4 pos : SV_POSITION; float2 uv : TEXCOORD0; };\n\nVSOut vs_main(uint id : SV_VertexID) {\n    VSOut output;\n    output.uv  = float2((id << 1) & 2, id & 2);\n    output.pos = float4(output.uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\ncbuffer Params : register(b0) {\n    float blend;\n    float opacity;\n    float2 padding;\n};\n\nTexture2D    sceneTexture   : register(t0);\nTexture2D    historyTexture : register(t1);\nSamplerState linearClamp    : register(s0);\n\nfloat4 ps_accumulate(VSOut input) : SV_TARGET {\n    return float4(sceneTexture.Sample(linearClamp, input.uv).rgb, blend);\n}\n\nfloat4 ps_present(VSOut input) : SV_TARGET {\n    return float4(historyTexture.Sample(linearClamp, input.uv).rgb, opacity);\n}\n"
                         ,0x2f5,0,0);
      if (iVar3 < 0) {
        if (local_190 == (longlong *)0x0) {
          local_180 = &DAT_18021e707;
        }
        else {
          local_180 = (undefined *)(**(code **)(*local_190 + 0x18))();
        }
        local_1a0 = "vertex shader failed to compile: {}";
        local_198 = 0x23;
        local_1b0 = "MotionBlur";
        local_1a8 = 10;
        FUN_180177400(4,&local_1b0,&local_1a0,&local_180);
        if (local_190 != (longlong *)0x0) {
          (**(code **)(*local_190 + 0x10))();
        }
      }
      else {
        if (local_190 != (longlong *)0x0) {
          (**(code **)(*local_190 + 0x10))();
          local_190 = (longlong *)0x0;
        }
        plVar1 = DAT_1802a6db8;
        uVar4 = (**(code **)(*local_188 + 0x20))();
        uVar5 = (**(code **)(*local_188 + 0x18))();
        local_268 = &DAT_1802a6e00;
        iVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,uVar5,uVar4,0);
        if (local_188 != (longlong *)0x0) {
          (**(code **)(*local_188 + 0x10))();
          local_188 = (longlong *)0x0;
        }
        if (((-1 < iVar3) && (cVar2 = FUN_1801775f0("ps_accumulate",&DAT_1802a6e08), cVar2 != '\0')) &&
           (cVar2 = FUN_1801775f0("ps_present",&DAT_1802a6e10), cVar2 != '\0')) {
          local_1b8 = 0;
          local_1c8 = 0x10;
          uStack_1c4 = 2;
          uStack_1c0 = 4;
          uStack_1bc = 0x10000;
          iVar3 = (**(code **)(*DAT_1802a6db8 + 0x18))(DAT_1802a6db8,&local_1c8,0,&DAT_1802a6e18);
          if (-1 < iVar3) {
            local_78 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            uStack_74 = 3;
            uStack_70 = 3;
            uStack_6c = 3;
            local_48 = 0x7f7fffff;
            iVar3 = (**(code **)(*DAT_1802a6db8 + 0xb8))(DAT_1802a6db8,&local_78,&DAT_1802a6e20);
            if (-1 < iVar3) {
              FUN_180207610(&local_180,0,0x108);
              local_178 = 1;
              uStack_174 = 5;
              uStack_170 = 6;
              uStack_16c = 1;
              local_168 = 0x200000001;
              local_160 = 1;
              local_15c = 7;
              iVar3 = (**(code **)(*DAT_1802a6db8 + 0xa0))(DAT_1802a6db8,&local_180,&DAT_1802a6e28);
              if ((-1 < iVar3) &&
                 (iVar3 = (**(code **)(*DAT_1802a6db8 + 0xa0))(DAT_1802a6db8,&local_180,&DAT_1802a6e30), -1 < iVar3)) {
                local_1e8 = 0;
                uStack_1e0 = 0;
                local_1f8 = 0;
                uStack_1f0 = 0;
                local_208 = 0;
                uStack_200 = 0;
                local_1d8 = 0;
                iVar3 = (**(code **)(*DAT_1802a6db8 + 0xa8))(DAT_1802a6db8,&local_208,&DAT_1802a6e38);
                if (-1 < iVar3) {
                  local_218 = 0;
                  uStack_210 = 0;
                  local_228 = 0;
                  uStack_220 = 0;
                  local_230 = 0x100000003;
                  iVar3 = (**(code **)(*DAT_1802a6db8 + 0xb0))(DAT_1802a6db8,&local_230,&DAT_1802a6e40);
                  if (-1 < iVar3) goto LAB_180176470;
                }
              }
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(char **)(param_1 + 0x10) = "the blur pipeline could not be built";
    }
    FUN_180175cf0(param_1);
    uVar4 = 0;
  }
  else {
LAB_180176470:
    uVar4 = FUN_1801760e0(param_1,param_2);
  }
  if (DAT_1802a0400 != (local_40 ^ (ulonglong)auStack_288)) {
  }
  return uVar4;
}



void FUN_1801768e0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  undefined4 **local_460;
  float local_454;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined4 *local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  longlong *local_3e8;
  longlong *plStack_3e0;
  longlong *local_3d8;
  longlong *plStack_3d0;
  longlong *local_3c8;
  longlong *plStack_3c0;
  longlong *local_3b8;
  longlong *plStack_3b0;
  longlong *local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388 [2];
  longlong *local_380;
  undefined4 local_378 [2];
  longlong *local_370;
  int local_368;
  undefined1 local_364 [384];
  int local_1e4;
  undefined1 local_1e0 [256];
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;

  local_70 = DAT_1802a0400 ^ (ulonglong)auStack_488;
  if (((*param_1 & 1) != 0) && ((param_1[1] & 1) == 0)) {
    lVar3 = FUN_1800c32a0();
    if (*(char *)(lVar3 + 0x210) == '\0') {
      plVar4 = (longlong *)FUN_180179ff0();
      if ((((plVar4[1] != 0) && (plVar4[3] != 0)) && (*plVar4 != 0)) &&
         (lVar3 = *(longlong *)(*plVar4 + 0x30), lVar3 != 0)) {
        cVar1 = FUN_1801b3c30(lVar3,0x200);
        if ((cVar1 != '\0') && (*(char *)(lVar3 + 0xb8) != '\0')) {
          cVar1 = FUN_180176440(param_1,param_2);
          if (cVar1 != '\0') {
            if (param_1[0x18] == 1) {
              uVar5 = FUN_180175f70(param_1);
            }
            else {
              uVar5 = 0x3f800000;
            }
            plVar4 = DAT_1802a6dc0;
            local_454 = *(float *)(param_1 + 8);
            local_380 = (longlong *)0x0;
            local_378[0] = 0;
            local_370 = (longlong *)0x0;
            local_3e8 = (longlong *)0x0;
            plStack_3e0 = (longlong *)0x0;
            local_3d8 = (longlong *)0x0;
            plStack_3d0 = (longlong *)0x0;
            local_3c8 = (longlong *)0x0;
            plStack_3c0 = (longlong *)0x0;
            local_3b8 = (longlong *)0x0;
            plStack_3b0 = (longlong *)0x0;
            local_3a8 = (longlong *)0x0;
            plStack_3a0 = (longlong *)0x0;
            local_398 = 0;
            uStack_390 = 0;
            local_388[0] = 0;
            local_368 = 0x10;
            FUN_180207610(local_364,0,0x180);
            local_1e4 = 0x10;
            FUN_180207610(local_1e0,0,0x154);
            (**(code **)(*plVar4 + 0x2c8))(plVar4,8,&local_3e8,&local_3a8);
            (**(code **)(*plVar4 + 0x2d8))(plVar4,&plStack_3a0,&local_398,local_388);
            (**(code **)(*plVar4 + 0x2e0))(plVar4,&local_380,local_378);
            (**(code **)(*plVar4 + 0x2f0))(plVar4,&local_370);
            (**(code **)(*plVar4 + 0x2f8))(plVar4,&local_368,local_364);
            (**(code **)(*plVar4 + 0x300))(plVar4,&local_1e4,local_1e0);
            (**(code **)(*plVar4 + 0x260))(plVar4,&local_e0,0,0);
            (**(code **)(*plVar4 + 0x250))(plVar4,&local_d8,0,0);
            (**(code **)(*plVar4 + 0x290))(plVar4,&local_d0,0,0);
            (**(code **)(*plVar4 + 0x310))(plVar4,&local_c8,0,0);
            (**(code **)(*plVar4 + 0x330))(plVar4,&local_c0,0,0);
            (**(code **)(*plVar4 + 0x248))(plVar4,0,2,&local_b8);
            (**(code **)(*plVar4 + 600))(plVar4,0,1,&local_a8);
            (**(code **)(*plVar4 + 0x268))(plVar4,0,1,&local_a0);
            (**(code **)(*plVar4 + 0x270))(plVar4,&local_98);
            (**(code **)(*plVar4 + 0x298))(plVar4,local_90);
            (**(code **)(*plVar4 + 0x108))(plVar4,0,0,0);
            (**(code **)(*plVar4 + 0x178))(plVar4,DAT_1802a6dc8,DAT_1802a6df0);
            local_438 = (undefined4 *)0x0;
            uStack_430 = 0;
            local_460 = &local_438;
            local_468 = 0;
            iVar2 = (**(code **)(*plVar4 + 0x70))(plVar4,DAT_1802a6e18,0,4);
            if (-1 < iVar2) {
              fVar7 = 0.0;
              if (0.0 <= local_454) {
                fVar7 = local_454;
              }
              *local_438 = uVar5;
              local_438[1] = -(uint)(1.0 < local_454) & 0x3f800000 | ~-(uint)(1.0 < local_454) & (uint)fVar7;
              (**(code **)(*plVar4 + 0x78))(plVar4,DAT_1802a6e18,0);
            }
            auVar6._0_8_ = _DAT_1802a6e48 & 0xffffffff;
            auVar6._8_4_ = (int)(_DAT_1802a6e48 >> 0x20);
            auVar6._12_4_ = 0;
            uStack_448 = CONCAT44((float)(SUB168(auVar6 | _DAT_18021dd80,8) - DAT_18021dd80._8_8_),
                                  (float)(SUB168(auVar6 | _DAT_18021dd80,0) - (double)DAT_18021dd80));
            local_450 = 0;
            local_440 = 0x3f80000000000000;
            local_3f8 = 0;
            uStack_3f0 = 0;
            (**(code **)(*plVar4 + 0xb8))(plVar4,0,0,0);
            (**(code **)(*plVar4 + 0x1e0))(plVar4,0,0,0);
            (**(code **)(*plVar4 + 0x200))(plVar4,0,0,0);
            (**(code **)(*plVar4 + 0x88))(plVar4,0);
            (**(code **)(*plVar4 + 0xc0))(plVar4,4);
            (**(code **)(*plVar4 + 0x58))(plVar4,DAT_1802a6e00,0,0);
            (**(code **)(*plVar4 + 0x158))(plVar4,DAT_1802a6e40);
            (**(code **)(*plVar4 + 0x160))(plVar4,1,&local_450);
            (**(code **)(*plVar4 + 0x120))(plVar4,DAT_1802a6e38,0);
            (**(code **)(*plVar4 + 0x50))(plVar4,0,1,&DAT_1802a6e20);
            (**(code **)(*plVar4 + 0x80))(plVar4,0,1,&DAT_1802a6e18);
            local_408 = DAT_1802a6dd0;
            local_400 = 0;
            (**(code **)(*plVar4 + 0x108))(plVar4,1,&DAT_1802a6de8,0);
            (**(code **)(*plVar4 + 0x118))(plVar4,DAT_1802a6e28,&local_3f8,0xffffffff);
            (**(code **)(*plVar4 + 0x48))(plVar4,DAT_1802a6e08,0,0);
            (**(code **)(*plVar4 + 0x40))(plVar4,0,2,&local_408);
            (**(code **)(*plVar4 + 0x68))(plVar4,3,0);
            local_418 = 0;
            uStack_410 = 0;
            (**(code **)(*plVar4 + 0x40))(plVar4,0,2,&local_418);
            local_428 = 0;
            local_420 = DAT_1802a6de0;
            (**(code **)(*plVar4 + 0x108))(plVar4,1,&DAT_1802a6df8,0);
            (**(code **)(*plVar4 + 0x118))(plVar4,DAT_1802a6e30,&local_3f8,0xffffffff);
            (**(code **)(*plVar4 + 0x48))(plVar4,DAT_1802a6e10,0,0);
            (**(code **)(*plVar4 + 0x40))(plVar4,0,2,&local_428);
            (**(code **)(*plVar4 + 0x68))(plVar4,3,0);
            local_88 = 0;
            uStack_80 = 0;
            (**(code **)(*plVar4 + 0x40))(plVar4,0,2,&local_88);
            (**(code **)(*plVar4 + 0x108))(plVar4,8,&local_3e8,local_3a8);
            (**(code **)(*plVar4 + 0x118))(plVar4,plStack_3a0,&local_398,local_388[0]);
            (**(code **)(*plVar4 + 0x120))(plVar4,local_380,local_378[0]);
            (**(code **)(*plVar4 + 0x158))(plVar4,local_370);
            if (local_368 != 0) {
              (**(code **)(*plVar4 + 0x160))(plVar4,local_368,local_364);
            }
            if (local_1e4 != 0) {
              (**(code **)(*plVar4 + 0x168))(plVar4,local_1e4,local_1e0);
            }
            (**(code **)(*plVar4 + 0x58))(plVar4,local_e0,0,0);
            (**(code **)(*plVar4 + 0x48))(plVar4,local_d8,0,0);
            (**(code **)(*plVar4 + 0xb8))(plVar4,local_d0,0,0);
            (**(code **)(*plVar4 + 0x1e0))(plVar4,local_c8,0,0);
            (**(code **)(*plVar4 + 0x200))(plVar4,local_c0,0,0);
            (**(code **)(*plVar4 + 0x40))(plVar4,0,2,&local_b8);
            (**(code **)(*plVar4 + 0x50))(plVar4,0,1,&local_a8);
            (**(code **)(*plVar4 + 0x80))(plVar4,0,1,&local_a0);
            (**(code **)(*plVar4 + 0x88))(plVar4,local_98);
            (**(code **)(*plVar4 + 0xc0))(plVar4,local_90[0]);
            if (local_3e8 != (longlong *)0x0) {
              (**(code **)(*local_3e8 + 0x10))();
              local_3e8 = (longlong *)0x0;
            }
            if (plStack_3e0 != (longlong *)0x0) {
              (**(code **)(*plStack_3e0 + 0x10))();
              plStack_3e0 = (longlong *)0x0;
            }
            if (local_3d8 != (longlong *)0x0) {
              (**(code **)(*local_3d8 + 0x10))();
              local_3d8 = (longlong *)0x0;
            }
            if (plStack_3d0 != (longlong *)0x0) {
              (**(code **)(*plStack_3d0 + 0x10))();
              plStack_3d0 = (longlong *)0x0;
            }
            if (local_3c8 != (longlong *)0x0) {
              (**(code **)(*local_3c8 + 0x10))();
              local_3c8 = (longlong *)0x0;
            }
            if (plStack_3c0 != (longlong *)0x0) {
              (**(code **)(*plStack_3c0 + 0x10))();
              plStack_3c0 = (longlong *)0x0;
            }
            if (local_3b8 != (longlong *)0x0) {
              (**(code **)(*local_3b8 + 0x10))();
              local_3b8 = (longlong *)0x0;
            }
            if (plStack_3b0 != (longlong *)0x0) {
              (**(code **)(*plStack_3b0 + 0x10))();
              plStack_3b0 = (longlong *)0x0;
            }
            if (local_3a8 != (longlong *)0x0) {
              (**(code **)(*local_3a8 + 0x10))();
              local_3a8 = (longlong *)0x0;
            }
            if (plStack_3a0 != (longlong *)0x0) {
              (**(code **)(*plStack_3a0 + 0x10))();
              plStack_3a0 = (longlong *)0x0;
            }
            if (local_380 != (longlong *)0x0) {
              (**(code **)(*local_380 + 0x10))();
              local_380 = (longlong *)0x0;
            }
            if (local_370 != (longlong *)0x0) {
              (**(code **)(*local_370 + 0x10))();
              local_370 = (longlong *)0x0;
            }
            if (local_e0 != (longlong *)0x0) {
              (**(code **)(*local_e0 + 0x10))();
              local_e0 = (longlong *)0x0;
            }
            if (local_d8 != (longlong *)0x0) {
              (**(code **)(*local_d8 + 0x10))();
              local_d8 = (longlong *)0x0;
            }
            if (local_d0 != (longlong *)0x0) {
              (**(code **)(*local_d0 + 0x10))();
              local_d0 = (longlong *)0x0;
            }
            if (local_c8 != (longlong *)0x0) {
              (**(code **)(*local_c8 + 0x10))();
              local_c8 = (longlong *)0x0;
            }
            if (local_c0 != (longlong *)0x0) {
              (**(code **)(*local_c0 + 0x10))();
              local_c0 = (longlong *)0x0;
            }
            if (local_b8 != (longlong *)0x0) {
              (**(code **)(*local_b8 + 0x10))();
              local_b8 = (longlong *)0x0;
            }
            if (local_b0 != (longlong *)0x0) {
              (**(code **)(*local_b0 + 0x10))();
              local_b0 = (longlong *)0x0;
            }
            if (local_a8 != (longlong *)0x0) {
              (**(code **)(*local_a8 + 0x10))();
              local_a8 = (longlong *)0x0;
            }
            if (local_a0 != (longlong *)0x0) {
              (**(code **)(*local_a0 + 0x10))();
              local_a0 = (longlong *)0x0;
            }
            if (local_98 != (longlong *)0x0) {
              (**(code **)(*local_98 + 0x10))();
            }
            if (param_1[0x18] == 0) {
              param_1[0x18] = 1;
              *(char **)(param_1 + 0x10) = "running";
            }
          }
          goto LAB_180176945;
        }
      }
    }
    param_1[0x18] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
LAB_180176945:
  if (DAT_1802a0400 == (local_70 ^ (ulonglong)auStack_488)) {
    return;
  }
}



void FUN_180177400(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_98 = *param_3;
    local_90 = param_3[1];
    local_80 = *param_4;
    local_88 = 0xb000000000000000;
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (0xf < local_90 + 0x20U) {
      FUN_180002240(&local_68);
    }
    local_58 = 0;
    local_a8 = 1;
    local_a0 = &local_88;
    FUN_180003080(local_c0,&local_68,&local_98,&local_a8,0);
    local_78 = &local_68;
    if (0xf < local_50) {
      local_78 = local_68;
    }
    local_70 = local_58;
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_b8);
    if (0xf < local_50) {
      uVar3 = local_50 + 1;
      pppuVar4 = (undefined8 ***)local_68;
      if (0xfff < uVar3) {
        pppuVar4 = (undefined8 ***)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppuVar4))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = local_50 + 0x28;
      }
      thunk_FUN_1801f42e0(pppuVar4,uVar3);
    }
  }
  return;
}



void Unwind_180177570(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



void Unwind_1801775b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



bool FUN_1801775f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined8 local_90;
  char *local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong **local_70;
  longlong **local_68;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_68 = &local_38;
  local_70 = &local_30;
  local_88 = "ps_4_0";
  local_78 = 0;
  local_80 = 0;
  local_98 = (undefined **)0x0;
  local_90 = param_1;
  local_28 = param_1;
  iVar2 = D3DCompile("\nstruct VSOut { float4 pos : SV_POSITION; float2 uv : TEXCOORD0; };\n\nVSOut vs_main(uint id : SV_VertexID) {\n    VSOut output;\n    output.uv  = float2((id << 1) & 2, id & 2);\n    output.pos = float4(output.uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\ncbuffer Params : register(b0) {\n    float blend;\n    float opacity;\n    float2 padding;\n};\n\nTexture2D    sceneTexture   : register(t0);\nTexture2D    historyTexture : register(t1);\nSamplerState linearClamp    : register(s0);\n\nfloat4 ps_accumulate(VSOut input) : SV_TARGET {\n    return float4(sceneTexture.Sample(linearClamp, input.uv).rgb, blend);\n}\n\nfloat4 ps_present(VSOut input) : SV_TARGET {\n    return float4(historyTexture.Sample(linearClamp, input.uv).rgb, opacity);\n}\n"
                     ,0x2f5,0,0);
  if (iVar2 < 0) {
    if (local_38 == (longlong *)0x0) {
      local_40 = &DAT_18021e707;
    }
    else {
      local_40 = (undefined *)(**(code **)(*local_38 + 0x18))();
    }
    local_50 = "{} failed to compile: {}";
    local_48 = 0x18;
    local_60 = "MotionBlur";
    local_58 = 10;
    local_98 = &local_40;
    FUN_180170e10(4,&local_60,&local_50,&local_28);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    bVar5 = false;
  }
  else {
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
      local_38 = (longlong *)0x0;
    }
    plVar1 = DAT_1802a6db8;
    uVar3 = (**(code **)(*local_30 + 0x20))();
    uVar4 = (**(code **)(*local_30 + 0x18))();
    local_98 = (undefined **)param_2;
    iVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,uVar4,uVar3,0);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
    bVar5 = -1 < iVar2;
  }
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_b8)) {
    return bVar5;
  }
}



undefined * FUN_180177800(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a6ee8) {
    FUN_1801d62d8(&DAT_1802a6ee8);
    if (DAT_1802a6ee8 == -1) {
      _DAT_1802a6ec8 = 0;
      uRam00000001802a6ed0 = 0;
      DAT_1802a6eb8 = 0;
      _DAT_1802a6ec0 = 0;
      _DAT_1802a6ea8 = 0;
      uRam00000001802a6eb0 = 0;
      DAT_1802a6e98 = 0;
      uRam00000001802a6ea0 = 0;
      _DAT_1802a6ed8 = 0x100;
      _DAT_1802a6ee0 = "not installed";
      atexit(FUN_1801778b0);
      _Init_thread_footer(&DAT_1802a6ee8);
      return &DAT_1802a6e60;
    }
  }
  return &DAT_1802a6e60;
}



void FUN_1801778b0(void)

{
  if (DAT_1802a6e98 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6e98 + 0x20))(DAT_1802a6e98,DAT_1802a6e98 != (longlong *)&DAT_1802a6e60);
    DAT_1802a6e98 = (longlong *)0x0;
  }
  return;
}



void FUN_1801778f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;

  if (param_1 != param_2) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      param_1[7] = 0;
    }
    plVar1 = (longlong *)param_2[7];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    if (plVar1 != param_2) {
      param_1[7] = (longlong)plVar1;
      return;
    }
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
    param_1[7] = lVar2;
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
  return;
}



char * FUN_180177970(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  char **ppcVar9;
  int *piVar10;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  int local_15c;
  undefined8 local_158;
  undefined4 local_150;
  int local_148 [12];
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;

  if (*(char *)(param_1 + 0x7a) != '\0') {
    return (char *)0x1;
  }
  local_178 = (longlong *)0x0;
  iVar6 = CreateDXGIFactory1(&DAT_18021ed28,&local_178);
  if (iVar6 < 0) {
    *(char **)(param_1 + 0x80) = "CreateDXGIFactory1 failed";
    local_a8 = &DAT_18021ed52;
    local_a0 = 2;
    local_b8 = &DAT_18021e717;
    local_b0 = 3;
    ppuVar7 = &local_b8;
    ppuVar8 = &local_a8;
LAB_180177dd2:
    FUN_180177400(4,ppuVar7,ppuVar8,param_1 + 0x80);
  }
  else {
    local_170 = (longlong *)0x0;
    local_158 = 0xa1000000b000;
    local_150 = 0xa000;
    iVar6 = D3D11CreateDevice(0,1,0,0,&local_158,3,7,&local_170,0,0);
    if (iVar6 < 0) {
      if (local_178 != (longlong *)0x0) {
        (**(code **)(*local_178 + 0x10))();
        local_178 = (longlong *)0x0;
      }
      *(char **)(param_1 + 0x80) = "D3D11CreateDevice failed";
      local_148[0] = iVar6;
      local_c8 = "{} ({:#x})";
      local_c0 = 10;
      local_d8 = &DAT_18021e717;
      local_d0 = 3;
      piVar10 = local_148;
      ppuVar7 = &local_d8;
      ppcVar9 = &local_c8;
    }
    else {
      local_148[0xb] = 0;
      local_148[0] = 0x10;
      local_148[1] = 0x10;
      local_148[2] = 0x57;
      local_148[3] = 0;
      local_148[4] = 1;
      local_148[5] = 0;
      local_148[6] = 0x20;
      local_148[7] = 2;
      local_148[8] = 0;
      local_148[9] = 3;
      local_148[10] = 1;
      local_168 = (longlong *)0x0;
      iVar6 = (**(code **)(*local_178 + 0xc0))(local_178,local_170,local_148,0,&local_168);
      if (-1 < iVar6) {
        lVar1 = *local_168;
        uVar2 = *(undefined8 *)(lVar1 + 0x40);
        uVar3 = *(undefined8 *)(lVar1 + 0x68);
        uVar4 = *(undefined8 *)(lVar1 + 0xb0);
        (**(code **)(lVar1 + 0x10))();
        local_168 = (longlong *)0x0;
        if (local_170 != (longlong *)0x0) {
          (**(code **)(*local_170 + 0x10))();
          local_170 = (longlong *)0x0;
        }
        if (local_178 != (longlong *)0x0) {
          (**(code **)(*local_178 + 0x10))();
          local_178 = (longlong *)0x0;
        }
        local_50 = 0;
        local_58 = (char *)FUN_1801d61c8(0x20);
        local_48 = 0x17;
        local_40 = 0x1f;
        builtin_strncpy(local_58,"IDXGISwapChain::Present",0x18);
        cVar5 = FUN_1800ef070(&PTR_PTR_180297450,&local_58,uVar2,FUN_1801780c0);
        if (cVar5 != '\0') {
          local_70 = 0;
          local_78 = (char *)FUN_1801d61c8(0x20);
          local_68 = 0x19;
          local_60 = 0x1f;
          builtin_strncpy(local_78,"IDXGISwapChain1::Present1",0x1a);
          cVar5 = FUN_1800ef070(&PTR_PTR_180297490,&local_78,uVar4,FUN_180178160);
          if (cVar5 != '\0') {
            local_90 = 0;
            local_98 = (char *)FUN_1801d61c8(0x20);
            local_88 = 0x1d;
            local_80 = 0x1f;
            builtin_strncpy(local_98,"IDXGISwapChain::ResizeBuffers",0x1e);
            cVar5 = FUN_1800ef070(&PTR_PTR_1802974d0,&local_98,uVar3,FUN_180178210);
            if (cVar5 != '\0') {
              *(undefined1 *)(param_1 + 0x7a) = 1;
              *(char **)(param_1 + 0x80) = "waiting for the first frame";
              return "esent";
            }
          }
        }
        *(char **)(param_1 + 0x80) = "could not detour Present";
        local_108 = &DAT_18021ed52;
        local_100 = 2;
        local_118 = &DAT_18021e717;
        local_110 = 3;
        ppuVar7 = &local_118;
        ppuVar8 = &local_108;
        goto LAB_180177dd2;
      }
      if (local_170 != (longlong *)0x0) {
        (**(code **)(*local_170 + 0x10))();
        local_170 = (longlong *)0x0;
      }
      if (local_178 != (longlong *)0x0) {
        (**(code **)(*local_178 + 0x10))();
        local_178 = (longlong *)0x0;
      }
      *(char **)(param_1 + 0x80) = "CreateSwapChainForComposition failed";
      local_e8 = "{} ({:#x})";
      local_e0 = 10;
      local_f8 = &DAT_18021e717;
      local_f0 = 3;
      piVar10 = &local_15c;
      ppuVar7 = &local_f8;
      ppcVar9 = &local_e8;
      local_15c = iVar6;
    }
    FUN_180177eb0(4,ppuVar7,ppcVar9,param_1 + 0x80,piVar10);
  }
  return (char *)0x0;
}



void FUN_180177eb0(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_88 = *param_3;
    local_80 = param_3[1];
    local_a8 = *param_4;
    local_b8 = 0xb000000000000000;
    local_a0 = *param_5;
    local_b0 = 0x2000000000000008;
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (0xf < local_80 + 0x28U) {
      FUN_180002240(&local_68);
    }
    local_58 = 0;
    local_98 = 2;
    local_90 = &local_b8;
    FUN_180003080(local_d0,&local_68,&local_88,&local_98,0);
    local_78 = &local_68;
    if (0xf < local_50) {
      local_78 = local_68;
    }
    local_70 = local_58;
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_c8);
    if (0xf < local_50) {
      uVar3 = local_50 + 1;
      pppuVar4 = (undefined8 ***)local_68;
      if (0xfff < uVar3) {
        pppuVar4 = (undefined8 ***)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppuVar4))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = local_50 + 0x28;
      }
      thunk_FUN_1801f42e0(pppuVar4,uVar3);
    }
  }
  return;
}



void Unwind_180178040(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_180178080(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void FUN_1801780c0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  local_30 = param_1;
  local_28 = &local_30;
  FUN_18017d590("motion blur",FUN_180178730,&local_28);
  local_28 = &local_30;
  FUN_18017d590("overlay present",FUN_180178750,&local_28);
  (*DAT_180297480)(local_30,param_2,param_3);
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
}



void FUN_180178160(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_38 = &local_40;
  FUN_18017d590("motion blur",FUN_180178730,&local_38);
  local_38 = &local_40;
  FUN_18017d590("overlay present1",FUN_180178750,&local_38);
  (*DAT_1802974c0)(param_1,param_2,param_3,param_4);
  if (DAT_1802a0400 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
}



void FUN_180178210(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;

  uVar1 = FUN_180175cb0();
  FUN_180175e50(uVar1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a6ee8) {
    FUN_1801d62d8(&DAT_1802a6ee8);
    if (DAT_1802a6ee8 == -1) {
      _DAT_1802a6ec8 = 0;
      uRam00000001802a6ed0 = 0;
      DAT_1802a6eb8 = (longlong *)0x0;
      _DAT_1802a6ec0 = 0;
      _DAT_1802a6ea8 = 0;
      uRam00000001802a6eb0 = 0;
      DAT_1802a6e98 = 0;
      uRam00000001802a6ea0 = 0;
      _DAT_1802a6ed8 = 0x100;
      _DAT_1802a6ee0 = "not installed";
      atexit(FUN_1801778b0);
      _Init_thread_footer(&DAT_1802a6ee8);
    }
  }
  _DAT_1802a6ed8 = _DAT_1802a6ed8 & 0xffffff00;
  if (DAT_1802a6eb8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6eb8 + 0x10))();
    DAT_1802a6eb8 = (longlong *)0x0;
  }
  _DAT_1802a6ec0 = 0;
  (*DAT_180297500)(param_1,param_2,param_3,param_4);
  return;
}



longlong * FUN_180178310(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  ulonglong local_68 [3];
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  longlong *local_38;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  plVar2 = (longlong *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2,0,&DAT_18021e8f0,&local_38);
  if (-1 < iVar1) {
    uStack_48 = 0;
    uStack_44 = 0;
    local_68[2] = 0;
    uStack_50 = 0;
    local_4c = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    (**(code **)(*local_38 + 0x50))(local_38,local_68);
    auVar3._0_8_ = local_68[0] & 0xffffffff;
    auVar3._8_4_ = (int)(local_68[0] >> 0x20);
    auVar3._12_4_ = 0;
    *(ulonglong *)(param_1 + 0x40) =
         CONCAT44((float)(SUB168(auVar3 | _DAT_18021dd80,8) - DAT_18021dd80._8_8_),
                  (float)(SUB168(auVar3 | _DAT_18021dd80,0) - (double)DAT_18021dd80));
    plVar2 = *(longlong **)(param_1 + 0x58);
    if (local_38 == *(longlong **)(param_1 + 0x60)) {
      if (plVar2 != (longlong *)0x0) {
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x10))(local_38);
          plVar2 = *(longlong **)(param_1 + 0x58);
        }
        goto LAB_18017842f;
      }
    }
    else if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))
                      (*(longlong **)(param_1 + 0x48),local_38,0,(longlong *)(param_1 + 0x58));
    if (iVar1 < 0) {
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      plVar2 = (longlong *)0x0;
    }
    else {
      *(longlong **)(param_1 + 0x60) = local_38;
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
      plVar2 = *(longlong **)(param_1 + 0x58);
    }
  }
LAB_18017842f:
  if (DAT_1802a0400 != (local_30 ^ (ulonglong)auStack_88)) {
  }
  return plVar2;
}



void FUN_180178470(longlong param_1,undefined8 param_2)

{
  byte bVar1;

  LOCK();
  bVar1 = *(byte *)(param_1 + 0x7b);
  *(byte *)(param_1 + 0x7b) = 1;
  UNLOCK();
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x80) = param_2;
  }
  return;
}



undefined8 FUN_180178490(void)

{
  return DAT_1802a6ef0;
}



void FUN_1801784a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong *local_28;
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  LOCK();
  DAT_1802a6ef0 = DAT_1802a6ef0 + 1;
  UNLOCK();
  if ((*(char *)(param_1 + 0x79) == '\x01') && ((*(byte *)(param_1 + 0x7b) & 1) == 0)) {
    local_28 = (longlong *)0x0;
    iVar2 = (**(code **)(*param_2 + 0x38))(param_2,&DAT_18021e968,&local_28);
    if (local_28 != (longlong *)0x0 && -1 < iVar2) {
      if (local_28 == *(longlong **)(param_1 + 0x48)) {
        (**(code **)(*local_28 + 0x10))();
        if (param_2 != *(longlong **)(param_1 + 0x68)) {
          *(longlong **)(param_1 + 0x68) = param_2;
          if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
            *(undefined8 *)(param_1 + 0x58) = 0;
          }
          *(undefined8 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x78) = 0;
        FUN_180174b20();
        uVar3 = FUN_18016d720();
        FUN_18016ddb0(uVar3);
        if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
        }
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(longlong **)(param_1 + 0x48) = local_28;
        (**(code **)(*local_28 + 0x140))(local_28,(undefined8 *)(param_1 + 0x50));
        *(longlong **)(param_1 + 0x68) = param_2;
        *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
      }
      lVar4 = FUN_180178310(param_1,param_2);
      if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
        uVar3 = FUN_18016d720();
        local_38 = *(undefined4 *)(param_1 + 0x40);
        local_30 = *(undefined4 *)(param_1 + 0x44);
        cVar1 = FUN_18016e110(uVar3,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),lVar4);
        if (cVar1 == '\0') {
          *(undefined1 *)(param_1 + 0x78) = 0;
          *(char **)(param_1 + 0x80) = "renderer setup failed";
        }
        else {
          *(undefined1 *)(param_1 + 0x78) = 1;
          *(char **)(param_1 + 0x80) = "ready";
          if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
            FUN_1801d7504();
          }
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
          FUN_18016e540(uVar3);
        }
      }
    }
  }
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
}



void FUN_1801786a0(longlong param_1)

{
  undefined8 uVar1;

  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_180174b20();
  uVar1 = FUN_18016d720();
  FUN_18016ddb0(uVar1);
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(char **)(param_1 + 0x80) = "shut down";
  return;
}



void FUN_180178730(undefined8 *param_1)

{
  undefined8 uVar1;

  uVar1 = FUN_180175cb0();
  FUN_1801768e0(uVar1,*(undefined8 *)*param_1);
  return;
}



void FUN_180178750(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a6ee8) {
    FUN_1801d62d8(&DAT_1802a6ee8);
    if (DAT_1802a6ee8 == -1) {
      _DAT_1802a6ec8 = 0;
      uRam00000001802a6ed0 = 0;
      DAT_1802a6eb8 = 0;
      _DAT_1802a6ec0 = 0;
      _DAT_1802a6ea8 = 0;
      uRam00000001802a6eb0 = 0;
      DAT_1802a6e98 = 0;
      uRam00000001802a6ea0 = 0;
      _DAT_1802a6ed8 = 0x100;
      _DAT_1802a6ee0 = "not installed";
      atexit(FUN_1801778b0);
      _Init_thread_footer(&DAT_1802a6ee8);
    }
  }
  FUN_1801784a0(&DAT_1802a6e60,*(undefined8 *)*param_1);
  return;
}



void FUN_180178810(void)

{
  atexit((_func_5014 *)&LAB_1801777d0);
  atexit((_func_5014 *)&LAB_1801777e0);
  atexit((_func_5014 *)&LAB_1801777f0);
  return;
}



undefined8 FUN_180178840(undefined8 *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];

  if ((0.0 < *param_2) && (0.0 < param_2[1])) {
    lVar4 = FUN_1801b2b70();
    cVar3 = FUN_1801b3c30((undefined8 *)(lVar4 + 0x19436f8),0xc);
    if (cVar3 != '\0') {
      uVar17 = *(undefined4 *)(lVar4 + 0x1943700);
      *param_1 = *(undefined8 *)(lVar4 + 0x19436f8);
      *(undefined4 *)(param_1 + 1) = uVar17;
      lVar4 = FUN_180179ff0();
      lVar4 = *(longlong *)(lVar4 + 8);
      if (lVar4 != 0) {
        FUN_1800eddc0();
        for (fVar24 = *(float *)(lVar4 + 0xbc) - *(float *)(lVar4 + 0xc4); 180.0 < fVar24; fVar24 = fVar24 + -360.0) {
        }
        for (; fVar24 < -180.0; fVar24 = fVar24 + 360.0) {
        }
        uVar6 = FUN_1801ec4b0();
        fVar15 = (float)((ulonglong)uVar6 >> 0x20);
        uVar7 = FUN_1801eca40();
        uVar8 = FUN_1801eca40();
        fVar24 = (float)uVar8;
        uVar9 = FUN_1801ec4b0();
        fVar5 = (float)uVar9 * (float)uVar6;
        fVar13 = -(float)uVar6 * (float)uVar7;
        auVar23._4_4_ = fVar13;
        auVar23._0_4_ = fVar5;
        fVar14 = (float)((ulonglong)uVar9 >> 0x20) * fVar15;
        fVar15 = -fVar15 * (float)((ulonglong)uVar7 >> 0x20);
        *(float *)((longlong)param_1 + 0xc) = fVar13;
        *(float *)(param_1 + 2) = -fVar24;
        *(float *)((longlong)param_1 + 0x14) = fVar5;
        fVar19 = fVar24 * -0.0 - fVar5;
        fVar16 = 0.0;
        auVar23._8_4_ = fVar14;
        auVar23._12_4_ = fVar15;
        auVar20._4_12_ = auVar23._4_12_;
        auVar20._0_4_ = fVar5 * 0.0 + fVar13 * -0.0;
        fVar25 = fVar24 * 0.0;
        fVar27 = fVar13 + fVar25;
        fVar32 = fVar27 * fVar27 + fVar19 * fVar19 + auVar20._0_4_ * auVar20._0_4_;
        uVar17 = 0;
        uVar18 = 0;
        fVar26 = 0.0;
        fVar31 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        if (0.0 < fVar32) {
          fVar32 = SQRT(fVar32);
          fVar26 = fVar19 / fVar32;
          auVar22._0_8_ = auVar20._0_8_;
          auVar22._8_4_ = fVar13;
          auVar22._12_4_ = fVar13;
          auVar21._8_8_ = auVar22._8_8_;
          auVar21._4_4_ = fVar27;
          auVar21._0_4_ = auVar20._0_4_;
          auVar2._4_4_ = fVar32;
          auVar2._0_4_ = fVar32;
          auVar2._8_4_ = fVar32;
          auVar2._12_4_ = fVar32;
          auVar23 = divps(auVar21,auVar2);
          fVar28 = auVar23._0_4_;
          fVar31 = auVar23._4_4_;
          fVar29 = auVar23._8_4_;
          fVar30 = auVar23._12_4_;
          fVar25 = fVar24 * fVar31;
        }
        *(float *)(param_1 + 3) = fVar26;
        *(float *)((longlong)param_1 + 0x1c) = fVar28;
        *(float *)(param_1 + 4) = fVar31;
        auVar10._0_4_ = fVar5 * fVar28 + fVar25;
        auVar10._4_4_ = fVar13 * fVar31 + -fVar5 * fVar26;
        auVar10._8_4_ = fVar14 * fVar29 + (float)((ulonglong)uVar8 >> 0x20);
        auVar10._12_4_ = fVar15 * fVar30 + -fVar13;
        fVar5 = -fVar24 * fVar26 - fVar13 * fVar28;
        fVar24 = fVar5 * fVar5 + auVar10._0_4_ * auVar10._0_4_ + auVar10._4_4_ * auVar10._4_4_;
        if (0.0 < fVar24) {
          fVar24 = SQRT(fVar24);
          fVar16 = fVar5 / fVar24;
          auVar1._4_4_ = fVar24;
          auVar1._0_4_ = fVar24;
          auVar1._8_4_ = fVar24;
          auVar1._12_4_ = fVar24;
          auVar23 = divps(auVar10,auVar1);
          uVar17 = auVar23._0_4_;
          uVar18 = auVar23._4_4_;
        }
        *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(uVar18,uVar17);
        *(float *)((longlong)param_1 + 0x2c) = fVar16;
        auVar11._0_8_ = FUN_1800eddb0();
        auVar11._8_8_ = extraout_XMM0_Qb;
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = (float)auVar11._0_8_ * 0.017453292 * 0.5;
        uVar17 = FUN_1801ed380(auVar12._0_8_);
        *(undefined4 *)(param_1 + 6) = uVar17;
        uVar6 = *(undefined8 *)param_2;
        param_1[7] = uVar6;
        *(float *)((longlong)param_1 + 0x34) = *param_2 / param_2[1];
        return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
    }
  }
  return 0;
}



bool FUN_180178b90(float *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,undefined8 *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_R11D;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];

  fVar5 = *(float *)(param_2 + 1);
  uVar7 = *param_2;
  fVar1 = param_3[2];
  fVar12 = (float)uVar7;
  fVar6 = (float)((ulonglong)uVar7 >> 0x20);
  fVar10 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  fVar11 = (float)*(undefined8 *)param_3;
  fVar13 = param_1[5] * (fVar5 - param_1[2]) + param_1[3] * (fVar12 - *param_1) + param_1[4] * (fVar6 - param_1[1]);
  fVar14 = param_1[5] * (fVar1 - param_1[2]) + param_1[3] * (fVar11 - *param_1) + param_1[4] * (fVar10 - param_1[1]);
  auVar9._4_4_ = -(uint)(0.05 <= fVar13);
  auVar9._0_4_ = -(uint)(0.05 <= fVar13);
  auVar9._8_4_ = -(uint)(0.05 <= fVar14);
  auVar9._12_4_ = -(uint)(0.05 <= fVar14);
  uVar4 = movmskpd(in_R11D,auVar9);
  if (uVar4 != 0) {
    if ((uVar4 & 1) == 0) {
      fVar13 = (0.05 - fVar13) / (fVar14 - fVar13);
      uVar7 = CONCAT44(fVar6 + fVar13 * (fVar10 - fVar6),fVar12 + fVar13 * (fVar11 - fVar12));
      fVar5 = fVar5 + (fVar1 - fVar5) * fVar13;
      *param_2 = uVar7;
      *(float *)(param_2 + 1) = fVar5;
    }
    else if ((byte)((byte)uVar4 >> 1) == 0) {
      fVar13 = (0.05 - fVar14) / (fVar13 - fVar14);
      *(ulonglong *)param_3 = CONCAT44(fVar13 * (fVar6 - fVar10) + fVar10,fVar13 * (fVar12 - fVar11) + fVar11);
      param_3[2] = (fVar5 - fVar1) * fVar13 + fVar1;
      uVar7 = *param_2;
      fVar5 = *(float *)(param_2 + 1);
    }
    fVar6 = (float)((ulonglong)uVar7 >> 0x20) - param_1[1];
    fVar11 = (float)uVar7 - *param_1;
    fVar5 = fVar5 - param_1[2];
    fVar1 = param_1[8];
    fVar12 = param_1[9];
    auVar8._0_4_ = fVar1 * fVar5 + param_1[6] * fVar11 + param_1[7] * fVar6;
    auVar8._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20) * fVar5 +
                   fVar12 * fVar11 + (float)*(undefined8 *)(param_1 + 10) * fVar6;
    auVar8._8_4_ = fVar1 * fVar5 + fVar1 * fVar11 + fVar1 * fVar6;
    auVar8._12_4_ = fVar12 * fVar5 + fVar12 * fVar11 + fVar12 * fVar6;
    fVar5 = (param_1[5] * fVar5 + param_1[3] * fVar11 + param_1[4] * fVar6) * param_1[0xc];
    auVar2._4_4_ = fVar5;
    auVar2._0_4_ = param_1[0xd] * fVar5;
    auVar2._8_8_ = 0;
    auVar9 = divps(auVar8,auVar2);
    *param_4 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) * (1.0 - auVar9._4_4_) * 0.5,
                        (float)*(undefined8 *)(param_1 + 0xe) * (auVar9._0_4_ + 1.0) * 0.5);
    fVar12 = *param_3 - *param_1;
    fVar11 = param_3[1] - param_1[1];
    fVar6 = param_3[2] - param_1[2];
    fVar5 = param_1[8];
    fVar1 = param_1[9];
    auVar15._0_4_ = fVar5 * fVar6 + param_1[6] * fVar12 + param_1[7] * fVar11;
    auVar15._4_4_ =
         (float)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20) * fVar6 +
         fVar1 * fVar12 + (float)*(undefined8 *)(param_1 + 10) * fVar11;
    auVar15._8_4_ = fVar5 * fVar6 + fVar5 * fVar12 + fVar5 * fVar11;
    auVar15._12_4_ = fVar1 * fVar6 + fVar1 * fVar12 + fVar1 * fVar11;
    fVar5 = (param_1[5] * fVar6 + param_1[3] * fVar12 + param_1[4] * fVar11) * param_1[0xc];
    auVar3._4_4_ = fVar5;
    auVar3._0_4_ = param_1[0xd] * fVar5;
    auVar3._8_8_ = 0;
    auVar9 = divps(auVar15,auVar3);
    *param_5 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) * (1.0 - auVar9._4_4_) * 0.5,
                        (float)*(undefined8 *)(param_1 + 0xe) * (auVar9._0_4_ + 1.0) * 0.5);
  }
  return uVar4 != 0;
}



void FUN_180178e90(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,float param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_40;

  local_40 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  local_70 = 0;
  local_78 = 0;
  local_88 = *param_3;
  local_80 = *(undefined4 *)(param_3 + 1);
  local_98 = *param_2;
  local_90 = *(undefined4 *)(param_2 + 1);
  local_a8 = &local_78;
  cVar1 = FUN_180178b90(param_1,&local_98,&local_88,&local_70);
  if (cVar1 != '\0') {
    fStack_50 = (float)local_70;
    fStack_4c = (float)((ulonglong)local_70 >> 0x20);
    local_58 = (float)local_78;
    if (((((-8.0 <= fStack_50) || (-8.0 <= local_58)) && ((-8.0 <= fStack_4c || (-8.0 <= local_78._4_4_)))) &&
        ((fVar4 = *(float *)(param_1 + 0x38) + 8.0, fStack_50 <= fVar4 || (local_58 <= fVar4)))) &&
       ((fVar4 = *(float *)(param_1 + 0x3c) + 8.0, fStack_4c <= fVar4 || (local_78._4_4_ <= fVar4)))) {
      fVar5 = local_58 - fStack_50;
      fVar4 = local_78._4_4_ - fStack_4c;
      fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
      if (0.01 <= fVar6) {
        param_5 = param_5 * 0.5;
        auVar2._0_8_ = CONCAT44(fVar5,fVar4) ^ 0x80000000;
        auVar2._8_4_ = -fVar4;
        auVar2._12_4_ = fVar5;
        auVar3._4_4_ = fVar6;
        auVar3._0_4_ = fVar6;
        auVar3._8_4_ = fVar6;
        auVar3._12_4_ = fVar6;
        auVar3 = divps(auVar2,auVar3);
        fVar4 = auVar3._0_4_ * param_5;
        fStack_54 = auVar3._4_4_ * param_5;
        fVar5 = auVar3._8_4_ * param_5;
        param_5 = auVar3._12_4_ * param_5;
        local_68 = fStack_50 + fVar4;
        fStack_64 = fStack_4c + fStack_54;
        fStack_60 = local_58 + fVar5;
        fStack_5c = local_78._4_4_ + param_5;
        local_58 = local_58 - fVar4;
        fStack_54 = local_78._4_4_ - fStack_54;
        fStack_50 = fStack_50 - fVar5;
        fStack_4c = fStack_4c - param_5;
        FUN_180173d00(&local_68,4,param_4);
      }
    }
  }
  if (DAT_1802a0400 == (local_40 ^ (ulonglong)auStack_c8)) {
    return;
  }
}



undefined * FUN_180179060(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a6ef8) {
    FUN_1801d62d8(&DAT_1802a6ef8);
    if (DAT_1802a6ef8 == -1) {
      atexit(FUN_1801790d0);
      _Init_thread_footer(&DAT_1802a6ef8);
      return &DAT_180297510;
    }
  }
  return &DAT_180297510;
}



void FUN_1801790d0(void)

{
  longlong lVar1;
  ulonglong uVar2;

  if (DAT_180297528 != 0) {
    uVar2 = DAT_180297538 - DAT_180297528;
    lVar1 = DAT_180297528;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(DAT_180297528 + -8);
      if (0x1f < (ulonglong)((DAT_180297528 + -8) - lVar1)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
    DAT_180297528 = 0;
    uRam0000000180297530 = 0;
    DAT_180297538 = 0;
  }
  return;
}



undefined8 FUN_180179150(char *param_1)

{
  longlong ***ppplVar1;
  longlong ***ppplVar2;
  char cVar3;
  longlong *plVar4;
  longlong ****pppplVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong ***ppplVar8;
  longlong ****pppplVar9;
  longlong ***ppplVar10;
  ulonglong uVar11;
  longlong ***ppplVar12;
  longlong ***ppplVar13;
  char *pcVar14;
  longlong ****pppplVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong ***local_e8 [2];
  longlong lStack_d8;
  ulonglong local_d0;
  longlong **local_c8;
  longlong **pplStack_c0;
  longlong **local_b8;
  longlong **local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;

  local_70 = 0xfffffffffffffffe;
  if (*param_1 != '\0') {
    return 1;
  }
  if (param_1[1] != '\0') {
    return 0;
  }
  plVar4 = (longlong *)FUN_180179ff0();
  lVar16 = *plVar4;
  pcVar14 = "waiting for the game\'s texture group";
  if ((((lVar16 == 0) || (cVar3 = FUN_1801b3c30(lVar16,0x38), cVar3 == '\0')) ||
      (lVar16 = *(longlong *)(lVar16 + 0x30), lVar16 == 0)) ||
     ((cVar3 = FUN_1801b3c30(lVar16,0x88), cVar3 == '\0' || (local_80 = *(longlong *)(lVar16 + 0x80), local_80 == 0))))
  {
    uVar7 = 0;
  }
  else {
    local_78 = (code *)FUN_1801b2b70();
    FUN_180179610(param_1);
    lVar16 = *(longlong *)(param_1 + 0x18);
    if ((ulonglong)(*(longlong *)(param_1 + 0x28) - lVar16) < 0x210) {
      FUN_180179ef0(param_1 + 0x18,0x210);
      lVar17 = *(longlong *)(param_1 + 0x18);
      FUN_180207610(lVar17,0,0x210);
      lVar17 = lVar17 + 0x210;
    }
    else {
      uVar6 = *(longlong *)(param_1 + 0x20) - lVar16;
      if (uVar6 < 0x210) {
        FUN_180207610(lVar16,0,uVar6);
        lVar17 = *(longlong *)(param_1 + 0x20);
        FUN_180207610(lVar17,0,0x210 - uVar6);
        lVar17 = (0x210 - uVar6) + lVar17;
      }
      else {
        lVar17 = lVar16 + 0x210;
        FUN_180207610(lVar16,0,0x210);
      }
    }
    local_78 = (code *)((longlong)local_78 + 0x73f2b0);
    *(longlong *)(param_1 + 0x20) = lVar17;
    for (uVar18 = 0; uVar18 < 6; uVar18 = uVar18 + 1) {
      local_c8 = (longlong **)0x0;
      pplStack_c0 = (longlong **)0x0;
      local_b8 = (longlong **)0x0;
      local_b0 = (longlong **)0xf;
      local_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 0xf;
      FUN_180082d10(local_e8,uVar18);
      if (local_d0 - lStack_d8 < 0x2f) {
        pppplVar5 = (longlong ****)
                    FUN_1800041c0(local_e8,0x2f,lStack_d8,0,"textures/environment/overworld_cubemap/cubemap_",0x2f);
      }
      else {
        pppplVar5 = local_e8;
        if (0xf < local_d0) {
          pppplVar5 = (longlong ****)local_e8[0];
        }
        pppplVar15 = (longlong ****)0x2f;
        if ((&UNK_18021efc7 < (char *)((longlong)pppplVar5 + lStack_d8) && pppplVar5 < (longlong ****)0x18021eff7) &&
           (pppplVar15 = pppplVar5 + -0x30043df9,
           pppplVar5 < "textures/environment/overworld_cubemap/cubemap_" || pppplVar15 == (longlong ****)0x0)) {
          pppplVar15 = (longlong ****)0x0;
        }
        lVar16 = lStack_d8 + 1;
        pppplVar9 = (longlong ****)local_e8[0];
        if (local_d0 < 0x10) {
          pppplVar9 = local_e8;
        }
        lStack_d8 = lStack_d8 + 0x2f;
        FUN_1802079d0((char *)((longlong)pppplVar9 + 0x2f),pppplVar5,lVar16);
        FUN_1802079d0(pppplVar5,"textures/environment/overworld_cubemap/cubemap_",pppplVar15);
        FUN_1802079d0((char *)((longlong)pppplVar5 + (longlong)pppplVar15),(char *)((longlong)pppplVar15 + 0x18021eff7),
                      0x2f - (longlong)pppplVar15);
        pppplVar5 = local_e8;
      }
      ppplVar12 = *pppplVar5;
      ppplVar1 = pppplVar5[1];
      ppplVar2 = pppplVar5[2];
      ppplVar8 = pppplVar5[3];
      pppplVar5[2] = (longlong ***)0x0;
      pppplVar5[3] = (longlong ***)0xf;
      *(char *)pppplVar5 = '\0';
      if (0xf < local_d0) {
        uVar6 = local_d0 + 1;
        pppplVar5 = (longlong ****)local_e8[0];
        if (0xfff < uVar6) {
          pppplVar5 = (longlong ****)local_e8[0][-1];
          if ((char *)0x1f < (char *)((longlong)local_e8[0] + (-8 - (longlong)pppplVar5))) goto LAB_180179554;
          uVar6 = local_d0 + 0x28;
        }
        thunk_FUN_1801f42e0(pppplVar5,uVar6);
      }
      if ((longlong ***)0xf < local_b0) {
        ppplVar13 = (longlong ***)((longlong)local_b0 + 1);
        ppplVar10 = (longlong ***)local_c8;
        if ((longlong ***)0xfff < ppplVar13) {
          ppplVar10 = (longlong ***)local_c8[-1];
          if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppplVar10))) goto LAB_180179554;
          ppplVar13 = (longlong ***)(local_b0 + 5);
        }
        thunk_FUN_1801f42e0(ppplVar10,ppplVar13);
      }
      local_c8 = (longlong **)ppplVar12;
      pplStack_c0 = (longlong **)ppplVar1;
      local_b8 = (longlong **)ppplVar2;
      local_b0 = (longlong **)ppplVar8;
      (*local_78)((ulonglong)(uVar18 * 0x58) + *(longlong *)(param_1 + 0x18),local_80,&local_c8);
      if (0xf < local_88) {
        uVar6 = local_88 + 1;
        uVar11 = local_a0;
        if (0xfff < uVar6) {
          uVar11 = *(ulonglong *)(local_a0 - 8);
          if (0x1f < (local_a0 - 8) - uVar11) goto LAB_180179554;
          uVar6 = local_88 + 0x28;
        }
        thunk_FUN_1801f42e0(uVar11,uVar6);
      }
      local_90 = 0;
      local_88 = 0xf;
      local_a0 = local_a0 & 0xffffffffffffff00;
      if ((longlong ***)0xf < local_b0) {
        ppplVar12 = (longlong ***)((longlong)local_b0 + 1);
        ppplVar8 = (longlong ***)local_c8;
        if ((longlong ***)0xfff < ppplVar12) {
          ppplVar8 = (longlong ***)local_c8[-1];
          if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppplVar8))) {
LAB_180179554:
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          ppplVar12 = (longlong ***)(local_b0 + 5);
        }
        thunk_FUN_1801f42e0(ppplVar8,ppplVar12);
      }
    }
    *(longlong *)(param_1 + 0x10) = local_80;
    *param_1 = '\x01';
    uVar7 = 1;
    pcVar14 = "ready";
  }
  *(char **)(param_1 + 8) = pcVar14;
  return uVar7;
}



void Unwind_180179570(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_1801795c0(undefined8 param_1,longlong param_2)

{
  FUN_1801797d0(param_2 + 0x50);
  return;
}



void FUN_180179610(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  if (0x20f < (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18))) {
    lVar2 = FUN_1801b2b70();
    pcVar3 = (code *)(lVar2 + 0x44c160);
    local_28 = *(longlong **)(param_1 + 0x18);
    lVar2 = *local_28;
    if (lVar2 != 0) {
      cVar1 = FUN_1801b3c30(lVar2,0x30);
      if (cVar1 != '\0') {
        (*pcVar3)(lVar2 + 0x28,&local_28);
      }
    }
    local_28 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x58);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x58);
    if (lVar2 != 0) {
      cVar1 = FUN_1801b3c30(lVar2,0x30);
      if (cVar1 != '\0') {
        (*pcVar3)(lVar2 + 0x28,&local_28);
      }
    }
    local_28 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0);
    if (lVar2 != 0) {
      cVar1 = FUN_1801b3c30(lVar2,0x30);
      if (cVar1 != '\0') {
        (*pcVar3)(lVar2 + 0x28,&local_28);
      }
    }
    local_28 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x108);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x108);
    if (lVar2 != 0) {
      cVar1 = FUN_1801b3c30(lVar2,0x30);
      if (cVar1 != '\0') {
        (*pcVar3)(lVar2 + 0x28,&local_28);
      }
    }
    local_28 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x160);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x160);
    if (lVar2 != 0) {
      cVar1 = FUN_1801b3c30(lVar2,0x30);
      if (cVar1 != '\0') {
        (*pcVar3)(lVar2 + 0x28,&local_28);
      }
    }
    local_28 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x1b8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1b8);
    if (lVar2 != 0) {
      cVar1 = FUN_1801b3c30(lVar2,0x30);
      if (cVar1 != '\0') {
        (*pcVar3)(lVar2 + 0x28,&local_28);
      }
    }
  }
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
}



void FUN_1801797d0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;

  uVar1 = param_1[8];
  if (0xf < uVar1) {
    lVar2 = param_1[5];
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_18017987a;
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar3);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_18017987a:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined8 FUN_1801798a0(char *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;

  if (*param_1 == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    plVar3 = (longlong *)FUN_180179ff0();
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      cVar2 = FUN_1801b3c30(lVar4,0x38);
      if ((cVar2 != '\0') && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
        cVar2 = FUN_1801b3c30(lVar4,0x88);
        if (cVar2 != '\0') {
          lVar4 = *(longlong *)(lVar4 + 0x80);
          if (lVar1 != lVar4) goto LAB_180179908;
          goto LAB_1801798f7;
        }
      }
    }
    lVar4 = 0;
    if (lVar1 == 0) {
LAB_1801798f7:
      return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
  }
LAB_180179908:
  FUN_180179610(param_1);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != *(longlong *)(param_1 + 0x20)) {
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  if ((lVar1 != 0) && (lVar1 != *(longlong *)(param_1 + 0x28))) {
    uVar6 = *(longlong *)(param_1 + 0x28) - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar6) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar4,uVar6);
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
  }
  *param_1 = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *(char **)(param_1 + 8) = "not loaded";
  uVar5 = FUN_180179150(param_1);
  return uVar5;
}



void FUN_1801799b0(undefined1 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;

  FUN_180179610();
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != *(longlong *)(param_1 + 0x20)) {
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  if ((lVar1 != *(longlong *)(param_1 + 0x28)) && (lVar1 != 0)) {
    uVar3 = *(longlong *)(param_1 + 0x28) - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(char **)(param_1 + 8) = "not loaded";
  return;
}



void FUN_180179a50(char *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  code *pcVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  code *local_128;
  longlong local_120;
  code *local_118;
  code *local_110;
  longlong local_108;
  longlong lStack_100;
  ulonglong local_f0;

  local_f0 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  if ((param_2 != 0) && (*param_1 != '\0')) {
    cVar3 = FUN_1801b3c30(param_2,0x3a8);
    if (cVar3 != '\0') {
      lVar4 = FUN_1801b2b70();
      lVar10 = lVar4 + 0x1925550;
      lVar5 = FUN_1801b2b70();
      cVar3 = FUN_1801b3c30(lVar10,0x140);
      if (cVar3 != '\0') {
        cVar3 = FUN_1801b3c30(lVar5 + 0x192aed0,0x20);
        if (cVar3 != '\0') {
          lVar6 = FUN_1801b2b70();
          local_128 = (code *)(lVar6 + 0x730000);
          lVar6 = FUN_1801b2b70();
          lVar7 = FUN_1801b2b70();
          lVar8 = FUN_1801b2b70();
          lVar9 = FUN_1801b2b70();
          local_120 = FUN_1801b2b70();
          local_108 = 0;
          lStack_100 = 0;
          (*local_128)(lVar5 + 0x192aed0,&local_108);
          if (lStack_100 != 0) {
            local_110 = (code *)(lVar7 + 0x5d0660);
            local_118 = (code *)(lVar8 + 0x5d0890);
            pcVar12 = (code *)(lVar9 + 0x5d0960);
            pcVar11 = (code *)(local_120 + 0x5d19e0);
            (*(code *)(lVar6 + 0x15d560))(lStack_100,0x44480000,0x44480000,0x44480000);
            pfVar13 = (float *)&DAT_18021ef10;
            lVar5 = 0;
            do {
              lVar6 = *(longlong *)(param_1 + 0x18);
              *(undefined1 *)(lVar4 + 0x19256c0) = 0;
              *(undefined1 *)(lVar4 + 0x1925675) = 0;
              (*local_110)(lVar10,1,8);
              local_138 = CONCAT31(local_138._1_3_,0xff);
              (*local_118)(lVar10,0xff,0xff,0xff);
              fVar1 = pfVar13[-7];
              fVar2 = pfVar13[-1];
              fVar16 = *pfVar13;
              fVar14 = pfVar13[-6] - pfVar13[-3];
              fVar19 = fVar14 - fVar16;
              fVar15 = pfVar13[-3] + pfVar13[-6];
              local_128 = (code *)CONCAT44(local_128._4_4_,fVar16 + fVar15);
              fVar15 = fVar15 - fVar16;
              fVar18 = fVar2 + fVar1 + 0.0;
              fVar17 = (fVar1 + 0.0) - fVar2;
              fVar20 = pfVar13[-5] + pfVar13[-8];
              fVar14 = fVar14 + fVar16;
              fVar16 = pfVar13[-8] - pfVar13[-5];
              local_120 = CONCAT44(local_120._4_4_,fVar16 + 0.0);
              local_130 = 0;
              local_138 = 0;
              (*pcVar12)(lVar10,fVar16 + 0.0,fVar2 + fVar1,fVar14);
              local_130 = 0;
              local_138 = 0x3f800000;
              (*pcVar12)(lVar10,fVar20 + 0.0,fVar18,local_128._0_4_);
              local_130 = 0x3f800000;
              local_138 = 0x3f800000;
              (*pcVar12)(lVar10,fVar20,fVar17,fVar15);
              local_130 = 0x3f800000;
              local_138 = 0;
              (*pcVar12)(lVar10,fVar16,fVar1 - fVar2,fVar19);
              local_130 = 0x3f800000;
              local_138 = 0;
              (*pcVar12)(lVar10,fVar16,fVar1 - fVar2,fVar19);
              local_130 = 0x3f800000;
              local_138 = 0x3f800000;
              (*pcVar12)(lVar10,fVar20,fVar17,fVar15);
              local_130 = 0;
              local_138 = 0x3f800000;
              (*pcVar12)(lVar10,fVar20 + 0.0,fVar18,local_128._0_4_);
              local_130 = 0;
              local_138 = 0;
              (*pcVar12)(lVar10,(undefined4)local_120,fVar2 + fVar1,fVar14);
              if ((*(int *)(lVar4 + 0x19256b8) != 8) && (param_1[2] == '\0')) {
                param_1[2] = '\x01';
              }
              (*pcVar11)(lVar10,param_2 + 0x308,lVar6 + lVar5);
              lVar5 = lVar5 + 0x58;
              pfVar13 = pfVar13 + 9;
            } while (lVar5 != 0x210);
            if (param_1[3] == '\0') {
              param_1[3] = '\x01';
            }
          }
          if (local_108 != 0) {
            cVar3 = FUN_1801b3c30(local_108,0x20);
            if (cVar3 != '\0') {
              *(undefined1 *)(local_108 + 0x18) = 1;
              *(longlong *)(local_108 + 8) = *(longlong *)(local_108 + 8) + -0x40;
            }
          }
        }
      }
    }
  }
  if (DAT_1802a0400 == (local_f0 ^ (ulonglong)auStack_158)) {
    return;
  }
}



void FUN_180179ef0(ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  if ((longlong)param_2 < 0) {
    FUN_1800807e0();
  }
  uVar2 = *param_1;
  uVar4 = param_1[2] - uVar2;
  uVar5 = (uVar4 >> 1) + uVar4;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if ((uVar4 >> 1 ^ 0x7fffffffffffffff) < uVar4) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar2 != 0) {
    uVar3 = uVar2;
    if (0xfff < uVar4) {
      uVar3 = *(ulonglong *)(uVar2 - 8);
      if (0x1f < (uVar2 - 8) - uVar3) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(uVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar5 == 0) {
    uVar2 = 0;
  }
  else if (uVar5 < 0x1000) {
    uVar2 = FUN_1801d61c8(uVar5);
  }
  else {
    if (0xffffffffffffffd8 < uVar5) {
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    lVar1 = FUN_1801d61c8(uVar5 + 0x27);
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[2] = uVar5 + uVar2;
  return;
}



undefined * FUN_180179ff0(void)

{
  return &DAT_1802a6f00;
}



undefined8 * FUN_18017a000(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;

  if ((((*param_1 != 0) && (cVar2 = FUN_1801b3c30(*param_1,0x40), cVar2 != '\0')) &&
      (lVar1 = *(longlong *)(*param_1 + 0x30), lVar1 != 0)) && (cVar2 = FUN_1801b3c30(lVar1,0xc0), cVar2 != '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    lVar3 = FUN_1801b2b70();
    (*(code *)(lVar3 + 0x138a70))(lVar1,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  return param_2;
}



void Unwind_18017a0f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_18017a120(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



void FUN_18017a130(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xb19eb31925ad98cb;
  local_50 = 0xafd232b1067f12e5;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x97ea0d120d39f5cd;
        if (uVar1 != 0x85ee25753fa403a5) break;
        DAT_1802a6f28 = AddVectoredExceptionHandler(1,FUN_18017a250);
        local_48 = 0x43fb520274a48d84;
        local_50 = 0x8f1edcdcbca3f306;
      }
      if (uVar1 != 0x1e4c81a823d28a2e) break;
      local_48 = 0xf2098bd640163c55;
      if (DAT_1802a6f28 == (PVOID)0x0) {
        local_48 = 0xbb02207db7b54172;
      }
      local_50 = 0x3eec0508881142d7;
    }
    local_48 = local_48 ^ 0x97ea0d120d39f5cd;
  } while (uVar1 != 0xcce58edec8077e82);
  return;
}



int FUN_18017a250(undefined8 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_2a8 [32];
  int *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  DWORD *local_270;
  ulonglong local_268;
  ulonglong local_260;
  int local_254;
  int local_250;
  ushort local_24c;
  ushort local_24a;
  undefined *local_248;
  int local_23c;
  undefined4 local_238;
  ushort local_232;
  int *local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined *local_218;
  undefined1 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  int *local_1f8;
  int *local_1f0;
  undefined1 *local_1e8;
  ulonglong local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  ushort local_1b2;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined *local_160;
  DWORD local_154;
  undefined1 local_150 [64];
  undefined1 local_110 [8];
  int local_108 [24];
  undefined1 local_a8 [64];
  undefined1 local_68 [8];
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_2a8;
  local_260 = 0xecdf33090b4bc2ae;
  local_268 = 0xf6194e7834ae0a15;
  local_228 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                iVar1 = DAT_1802a6f30;
                uVar3 = local_260 ^ 0x9b62335cf33bfb3b;
                uVar2 = local_260 ^ local_268;
                local_268 = local_268 ^ 0x9b62335cf33bfb3b;
                local_260 = uVar3;
                if (-0x59a6ae8e3414d10 < (longlong)uVar2) break;
                if ((longlong)uVar2 < -0x37bd409cf2c2bd38) {
                  if ((longlong)uVar2 < -0x55bf207ecfcf64a8) {
                    if ((longlong)uVar2 < -0x6b82d05df220a837) {
                      if (uVar2 == 0x81342c2070730da8) {
                        uVar2 = *(ulonglong *)(local_230 + 8);
                        local_188 = *(undefined8 *)(local_230 + 10);
                        local_288 = (int *)&DAT_1802a6f9c;
                        local_1e0 = uVar2;
                        FUN_18017d12d(&DAT_1802a6f90,&DAT_18029769a,0x1b);
                        local_260 = 0xf7d5ca065ed29e3c;
                        if (uVar2 < 9) {
                          local_260 = 0x18d30e302f5c6d7c;
                        }
                        local_268 = 0xffc29c92c4e5cf03;
                        local_218 = &DAT_1802a6f90;
                      }
                      else if (uVar2 == 0x8c8a4887f8596ecf) {
                        local_288 = (int *)&DAT_1802a70a0;
                        FUN_18017d12d(&DAT_1802a7088,&DAT_1802988ce,0x19);
                        local_260 = 0xcc32319244cfffa2;
                        local_268 = 0x27a40d4041069dba;
                        local_248 = &DAT_1802a7088;
                      }
                      else if (uVar2 == 0x93515e77f78a4600) {
                        local_260 = 0x2c6de94457e783e6;
                        if (local_250 == -0x3fffff74) {
                          local_260 = 0x7c6ee138e91c07e1;
                        }
                        local_268 = 0x6411888036c24382;
                      }
                    }
                    else if (uVar2 == 0x947d2fa20ddf57c9) {
                      local_230 = (int *)*local_228;
                      local_1f0 = local_230 + 4;
                      FUN_18017bb00(local_a8,*(undefined8 *)(local_230 + 4));
                      local_154 = GetCurrentThreadId();
                      local_1e8 = local_68;
                      local_254 = *local_230;
                      local_288 = (int *)&DAT_1802a6ff4;
                      FUN_18017d12d(&DAT_1802a6fe0,&DAT_18029870c,0x13);
                      local_260 = 0x8a4739b9b40311af;
                      local_268 = 0xceb639626473c85d;
                    }
                    else if (uVar2 == 0xa4c42df0dfc43699) {
                      local_260 = 0xd97fe6f86e917138;
                      if (local_254 < -0x3fffffe3) {
                        local_260 = 0x32c421908319d3b0;
                      }
                      local_268 = 0xce9b95fd7b0c8f6b;
                    }
                    else if (uVar2 == 0xa91fa0de4bbc01ae) {
                      local_260 = 0x7a350a97b2bcd5d2;
                      if (local_250 < -0x3fffff03) {
                        local_260 = 0xdd6585820fe1e014;
                      }
                      local_268 = 0x652823c537e77ecc;
                    }
                  }
                  else if ((longlong)uVar2 < -0x4eb66a6afd1c0804) {
                    if (uVar2 == 0xaa40df8130309b58) {
                      local_250 = *local_1f8;
                      local_260 = 0x95df48c7715631ce;
                      local_268 = 0x78837678d6df27c9;
                    }
                    else if (uVar2 == 0xaad87bd0f5d59043) {
                      local_260 = 0x5d8703de141e1410;
                      if (local_250 == -0x3fffffe3) {
                        local_260 = 0xd840ba2aae59017;
                      }
                      local_268 = 0x15fb621a753bd474;
                    }
                    else if (uVar2 == 0xada6919aa77cc7bd) {
                      local_260 = 0x75f7ca0fcb3d96ad;
                      local_268 = 0x6c7001f1843dbb2f;
                    }
                  }
                  else if ((longlong)uVar2 < -0x3dc82e355fc895aa) {
                    if (uVar2 == 0xb149959502e3f7fc) {
                      local_260 = 0xc9100b51f835deb9;
                      if (local_250 < -0x3fffff6a) {
                        local_260 = 0x4cb08fb313ca6cbe;
                      }
                      local_268 = 0x600fab8fb389df17;
                    }
                    else if (uVar2 == 0xb84da64738069ed8) {
                      local_260 = 0xa5159673e2d45985;
                      if (local_250 == -0x3fffff6a) {
                        local_260 = 0xf5169e0f5c2fdd82;
                      }
                      local_268 = 0xed69f7b783f199e1;
                    }
                  }
                  else if (uVar2 == 0xc237d1caa0376a56) {
                    local_260 = 0xa019912c17dbc6c2;
                    if (local_254 == -0x3fffff6a) {
                      local_260 = 0x99b20699aeced03a;
                    }
                    local_268 = 0xad508aec75c3159a;
                  }
                  else if (uVar2 == 0xc58209c4b6d2e383) {
                    local_260 = 0xf9707af9f604bead;
                    if (local_250 < -0x3ffffffb) {
                      local_260 = 0x3450fc67cb1ac0d5;
                    }
                    local_268 = 0x4da9fc308d4d3d;
                  }
                }
                else if ((longlong)uVar2 < -0x18ee6d5d14465d81) {
                  if ((longlong)uVar2 < -0x22f323a8d2fb2e5b) {
                    if (uVar2 == 0xc842bf630d3d42c8) {
                      local_260 = 0x99b42475132cc189;
                      if (local_254 < -0x3fffff03) {
                        local_260 = 0xb3bc8f594d876a01;
                      }
                      local_268 = 0x718b5e93edb00057;
                    }
                    else if (uVar2 == 0xd7d21f2181a9441a) {
                      local_260 = 0xc61e2c5979403bd4;
                      if (local_254 < -0x3ffffffb) {
                        local_260 = 0x128586fec2cca3b5;
                      }
                      local_268 = 0x2d88108b7c8959cc;
                      local_248 = &DAT_1802a6fe0;
                    }
                    else if (uVar2 == 0xdbaaefa36066b09f) {
                      local_260 = 0x3c9b070a0cd5e5bf;
                      if (local_254 == -0x3fffff74) {
                        local_260 = 0xcadab342908f587d;
                      }
                      local_268 = 0x31d21cca6ecd36e7;
                    }
                  }
                  else if (uVar2 == 0xdd0cdc572d04d1a5) {
                    local_260 = 0x29e38db144123a3f;
                    if (local_254 < -0x3fffff6c) {
                      local_260 = 0xe436fca42dc70d1e;
                    }
                    local_268 = 0x3f9c13074da1bd81;
                  }
                  else if (uVar2 == 0xddd212f05713acb4) {
                    FUN_18017bb00(local_150,*(undefined8 *)(local_108 + (ulonglong)local_24a * 2));
                    uVar2 = (ulonglong)local_1b2;
                    local_288 = (int *)&DAT_1802a6fcc;
                    FUN_18017d12d(&DAT_1802a6fb8,&DAT_18029771d,0x14,0x14);
                    local_1c8 = &DAT_1802a6fb8;
                    *local_208 = 0x13;
                    local_288 = (int *)&DAT_1802a6f64;
                    FUN_18017d12d(&DAT_1802a6f5c,&DAT_1802975b4,0x1b,6);
                    local_1d8 = &DAT_1802a6f5c;
                    *local_200 = local_220;
                    local_278 = local_210;
                    local_288 = local_108 + uVar2 * 2;
                    local_280 = local_150;
                    FUN_18017c740(local_238,&local_1d8,&local_1c8,&local_1b2);
                    local_24a = local_1b2 + 1;
                    local_260 = 0x5f9e9ed39ec117d4;
                    if (local_24a < local_232) {
                      local_260 = 0x2fea1db96eae7cdd;
                    }
                    local_268 = 0xf2380f4939bdd069;
                    local_1b2 = local_24a;
                  }
                  else if (uVar2 == 0xe650be3063b5429c) {
                    local_288 = (int *)&DAT_1802a70b0;
                    FUN_18017d12d(&DAT_1802a70a4,&DAT_180298917,0x1c,10);
                    local_260 = 0xeb10abc08489659d;
                    local_268 = 0x86971281400785;
                    local_248 = &DAT_1802a70a4;
                  }
                }
                else if ((longlong)uVar2 < -0x1469c32dfa369de8) {
                  if (uVar2 == 0xe71192a2ebb9a27f) {
                    uVar2 = 2;
                    if (local_1e0 != 8) {
                      uVar2 = local_1e0;
                    }
                    FUN_18017d3e0(&DAT_1802a70c0);
                    local_218 = *(undefined **)(&DAT_1802a70c0 + uVar2 * 8);
                    local_260 = 0x3ec70ffb1558375f;
                    local_268 = 0x36d0596f8f6f6660;
                  }
                  else if (uVar2 == 0xe83f7ae6fe9cc1de) {
                    local_260 = 0xcfe9f0d05357e26;
                    if (local_254 == -0x3fffff03) {
                      local_260 = 0xfa000b7a8c9602f5;
                    }
                    local_268 = 0x1b784cd672dad7e;
                  }
                  else if (uVar2 == 0xe8b6ac459ffcdb9a) {
                    local_288 = (int *)&DAT_1802a703c;
                    FUN_18017d12d(&DAT_1802a702c,&DAT_1802987cc,0x18,0xe);
                    local_260 = 0x48f3908d14e5cda5;
                    local_268 = 0xa365ac5f112cafbd;
                    local_248 = &DAT_1802a702c;
                  }
                }
                else if ((longlong)uVar2 < -0x1042ceb498af46fa) {
                  if (uVar2 == 0xeb963cd205c96218) {
                    local_160 = local_248;
                    local_288 = (int *)&DAT_1802a6f58;
                    FUN_18017d12d(&DAT_1802a6f34,&DAT_18029755f,0x1f,0x21);
                    local_170 = &DAT_1802a6f34;
                    local_168 = 0x20;
                    local_288 = (int *)&DAT_1802a6f64;
                    FUN_18017d12d(&DAT_1802a6f5c,&DAT_1802975b4,0x1b,6);
                    local_180 = &DAT_1802a6f5c;
                    local_178 = local_220;
                    local_270 = &local_154;
                    local_278 = local_1e8;
                    local_280 = local_a8;
                    local_288 = local_1f0;
                    FUN_18017c170(local_238,&local_180,&local_170);
                    local_260 = 0x9572422255d32cbb;
                    if (*local_230 == -0x3ffffffb) {
                      local_260 = 0x273d6cd7b660cf8d;
                    }
                    local_268 = 0x7acf7369328395bd;
                  }
                  else if (uVar2 == 0xed5c3ebfa7891607) {
                    local_260 = 0x7bb58bcc5c3d5313;
                    if (local_250 < -0x3fffff74) {
                      local_260 = 0xf7e179de80c476c;
                    }
                    local_268 = 0xcafc1e595edea4ef;
                  }
                }
                else if (uVar2 == 0xefbd314b6750b906) {
                  local_108[0x14] = 0;
                  local_108[0x15] = 0;
                  local_108[0x16] = 0;
                  local_108[0x17] = 0;
                  local_108[0x10] = 0;
                  local_108[0x11] = 0;
                  local_108[0x12] = 0;
                  local_108[0x13] = 0;
                  local_108[0xc] = 0;
                  local_108[0xd] = 0;
                  local_108[0xe] = 0;
                  local_108[0xf] = 0;
                  local_108[8] = 0;
                  local_108[9] = 0;
                  local_108[10] = 0;
                  local_108[0xb] = 0;
                  local_108[4] = 0;
                  local_108[5] = 0;
                  local_108[6] = 0;
                  local_108[7] = 0;
                  local_108[0] = 0;
                  local_108[1] = 0;
                  local_108[2] = 0;
                  local_108[3] = 0;
                  local_232 = RtlCaptureStackBackTrace(local_23c,0xc,local_108,0);
                  local_1b2 = local_24c;
                  local_260 = 0xd7daa89fe549e3e9;
                  if (local_232 == local_24c) {
                    local_260 = 0x19bd733cf6e9c7b4;
                  }
                  local_268 = 0xb41be2a651950009;
                }
                else if (uVar2 == 0xf93dd305c689f390) {
                  local_260 = 0x5ec805660b371c23;
                  if (local_250 < -0x3fffffe3) {
                    local_260 = 0x9ea0bb77cba08efd;
                  }
                  local_268 = 0xf4107eb6fee28c60;
                }
              }
              if ((longlong)uVar2 < 0x2cbf243ca043b3a9) break;
              if ((longlong)uVar2 < 0x46f0a743fa3c2b9e) {
                if ((longlong)uVar2 < 0x3c622f1cbb903a8a) {
                  if (uVar2 == 0x2cbf243ca043b3a9) {
                    local_260 = 0xf3cfecb4048082ca;
                    if (local_250 < -0x3fffff6c) {
                      local_260 = 0x9afb27d4efb4763b;
                    }
                    local_268 = 0x9aa79a3183e303b;
                  }
                  else if (uVar2 == 0x341d559bfb978de8) {
                    local_260 = 0x13bf763148db2150;
                    if (local_250 == -0x7ffffffe) {
                      local_260 = 0x43bc7e4df620a557;
                    }
                    local_268 = 0x5bc317f529fee134;
                  }
                  else if (uVar2 == 0x34e28c75db0dc5a0) {
                    local_288 = (int *)&DAT_1802a7028;
                    FUN_18017d12d(&DAT_1802a7010,&DAT_180298785,0x1c,0x17);
                    local_260 = 0xe1ae7a0f012b1141;
                    local_268 = 0xa3846dd04e27359;
                    local_248 = &DAT_1802a7010;
                  }
                }
                else if (uVar2 == 0x3c622f1cbb903a8a) {
                  local_260 = 0xcc5edea91bd3f557;
                  if (local_254 < -0x3ffffffa) {
                    local_260 = 0xbf48ec7845be87d4;
                  }
                  local_268 = 0x689af359c417c3ce;
                }
                else if (uVar2 == 0x3f0d9675be45fa79) {
                  local_260 = 0xccf00e7713978fe3;
                  if (local_254 == -0x7ffffffe) {
                    local_260 = 0x9894bb9b531abda8;
                  }
                  local_268 = 0xc1b915b7718f5cbb;
                }
                else if (uVar2 == 0x44f100dbd070d9f2) {
                  local_260 = 0xa1732b39545927f3;
                  if (local_254 < -0x3fffff74) {
                    local_260 = 0xda648fa6196ddf2d;
                  }
                  local_268 = 0xe606a0baa2fde5a7;
                }
              }
              else if ((longlong)uVar2 < 0x592dae2c2295e113) {
                if (uVar2 == 0x46f0a743fa3c2b9e) {
                  local_288 = (int *)&DAT_1802a700c;
                  FUN_18017d12d(&DAT_1802a6ff8,&DAT_180298740,0x18,0x14);
                  local_260 = 0xb8e5d19db3034891;
                  local_268 = 0x5373ed4fb6ca2a89;
                  local_248 = &DAT_1802a6ff8;
                }
                else if (uVar2 == 0x47758b83f6a4c254) {
                  local_260 = 0x9171c48dfa7ae726;
                  if (local_254 < -0x3fffff6a) {
                    local_260 = 0x843fa7b9da43744b;
                  }
                  local_268 = 0x59337beef747a5ee;
                }
                else if (uVar2 == 0x487c61c46125c064) {
                  local_260 = 0x5ead5d92f40e2687;
                  local_268 = 0x472a966cbb0e0b05;
                }
              }
              else if ((longlong)uVar2 < 0x63c14a39b4dce3e0) {
                if (uVar2 == 0x592dae2c2295e113) {
                  local_288 = (int *)&DAT_1802a7084;
                  FUN_18017d12d(&DAT_1802a7070,&DAT_180298888,0x1b,0x12);
                  local_260 = 0x9fae8ebe60e19b50;
                  local_268 = 0x7438b26c6528f948;
                  local_248 = &DAT_1802a7070;
                }
                else if (uVar2 == 0x5df21fbe84e35a30) {
                  local_260 = 0x57045848962a2c10;
                  if (1 < (uint)local_230[6]) {
                    local_260 = 0x398d4523810998be;
                  }
                  local_268 = 0xb8b96903f17a9516;
                }
              }
              else if (uVar2 == 0x63c14a39b4dce3e0) {
                local_210 = local_110;
                local_208 = &local_1c0;
                local_200 = &local_1d0;
                local_260 = 0x1a97fe4ef3e7c514;
                local_268 = 0xc745ecbea4f469a0;
                local_24a = local_24c;
              }
              else if (uVar2 == 0x6ab0c5c13542029d) {
                local_260 = 0xc3c59e5dd361c8ef;
                if (local_250 + 0x3ffffffbU < 2) {
                  local_260 = 0x93c696216d9a4ce8;
                }
                local_268 = 0x8bb9ff99b244088b;
              }
            }
            if (0x167f9eb609b387bd < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x3a04b9207eaa325) {
              if (uVar2 == 0xfa6595171cbeb2f1) {
                local_260 = 0x51660297429ed324;
                if (local_250 == -0x3fffff6c) {
                  local_260 = 0x1650aebfc655723;
                }
                local_268 = 0x191a635323bb1340;
              }
              else if (uVar2 == 0xfb08af88fe426e9a) {
                local_288 = (int *)&DAT_1802a706c;
                FUN_18017d12d(&DAT_1802a7054,&DAT_18029884b,0x14,0x16);
                local_260 = 0xe610a4b444597f5d;
                local_268 = 0xd86986641901d45;
                local_248 = &DAT_1802a7054;
              }
              else if (uVar2 == 0xfbb78fb7ebbbaf8b) {
                local_288 = (int *)&DAT_1802a7050;
                FUN_18017d12d(&DAT_1802a7040,&DAT_180298809,0x1d,0xf);
                local_260 = 0x17d4ffd6c95543a7;
                local_268 = 0xfc42c304cc9c21bf;
                local_248 = &DAT_1802a7040;
              }
            }
            else if (uVar2 == 0xfc5fb46df8155cdb) {
              local_260 = 0x40c12ceb9f7629c3;
              if (local_254 == -0x3ffffffa) {
                local_260 = 0xa53e9b6e62922101;
              }
              local_268 = 0x4d88372bfd6efa9b;
            }
            else if (uVar2 == 0x81756949a37513f) {
              local_190 = local_218;
              local_288 = (int *)&DAT_1802a6fb4;
              FUN_18017d12d(&DAT_1802a6fa0,&DAT_1802976d8,0x1a,0x13);
              local_1a0 = &DAT_1802a6fa0;
              local_198 = 0x12;
              local_288 = (int *)&DAT_1802a6f64;
              FUN_18017d12d(&DAT_1802a6f5c,&DAT_1802975b4,0x1b,6);
              local_1b0 = &DAT_1802a6f5c;
              local_1a8 = local_220;
              local_288 = (int *)&local_188;
              FUN_18017c490(local_238,&local_1b0,&local_1a0,&local_190);
              local_260 = 0x9d0d8762e3079823;
              local_268 = 0x72b0b62984572125;
            }
            else if (uVar2 == 0xd491bc06218d358) {
              local_260 = 0xafb4c382f9ee572e;
              local_268 = 0x49e47db29a5b15b2;
            }
          }
          if (0x1987cbfe4f002d81 < (longlong)uVar2) break;
          if (uVar2 == 0x167f9eb609b387be) {
            local_260 = 0xab5fb7c2c21a54e6;
            if (local_254 == -0x3fffff6c) {
              local_260 = 0x2a9ce485585be971;
            }
            local_268 = 0xa616ac02a00287be;
          }
          else if (uVar2 == 0x17e47305159dfe53) {
            local_260 = 0x629783ed2bac085c;
            if (local_254 == -0x3fffffe3) {
              local_260 = 0x292e3f6eb388f09a;
            }
            local_268 = 0x6fde982d49b4db04;
          }
          else if (uVar2 == 0x187f69b8dfde4463) {
            LOCK();
            DAT_1802a6f30 = 1;
            UNLOCK();
            local_260 = 0xab850d9158eca517;
            if (iVar1 == local_23c) {
              local_260 = 0x267fe9cd1a33df5c;
            }
            local_268 = 0xb202c66f17ec8895;
          }
        }
        if ((longlong)uVar2 < 0x1f1d2952855bab1e) break;
        if (uVar2 == 0x1f1d2952855bab1e) {
          local_260 = 0x4b1bd0cfaf421cd9;
          if (local_250 == -0x3fffff03) {
            local_260 = 0x1b18d8b311b998de;
          }
          local_268 = 0x367b10bce67dcbd;
        }
        else if (uVar2 == 0x27d1b03f721521e2) {
          local_1f8 = (int *)*local_228;
          local_260 = 0x5dc8561560e861fc;
          if (local_1f8 == (int *)0x0) {
            local_260 = 0xee0f426a1fd8d726;
          }
          local_268 = 0xf788899450d8faa4;
        }
      }
      if (uVar2 != 0x1ac67d713fe5c8bb) break;
      local_238 = 4;
      local_24c = 0;
      local_23c = 0;
      local_220 = 5;
      local_260 = 0x39bb895f033efd82;
      if (local_228 == (undefined8 *)0x0) {
        local_260 = 0x7edf29e3e2bf1e2;
      }
      local_268 = 0x1e6a3960712bdc60;
    }
  } while (uVar2 != 0x1987cbfe4f002d82);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_2a8)) {
  }
  return local_23c;
}



void FUN_18017b9e0(void)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xc033fb3304552021;
  local_58 = 0xbc6eb946b0cb561a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x226a444194ef3ee4;
        if (uVar1 != 0xbb919efb5e8ed06c) break;
        RemoveVectoredExceptionHandler(local_48);
        DAT_1802a6f28 = (PVOID)0x0;
        local_50 = 0x94725d0f1bf95914;
        local_58 = 0x6f0b903754b13ff5;
      }
      if (uVar1 != 0x7c5d4275b49e763b) break;
      local_48 = DAT_1802a6f28;
      local_50 = 0x8bb213520fd2647b;
      if (DAT_1802a6f28 == (PVOID)0x0) {
        local_50 = 0xcb5a40911e14d2f6;
      }
      local_58 = 0x30238da9515cb417;
    }
    local_50 = local_50 ^ 0x226a444194ef3ee4;
  } while (uVar1 != 0xfb79cd384f4866e1);
  return;
}



void FUN_18017bb00(char *param_1,LPCWSTR param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  HMODULE pHVar3;
  DWORD DVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ***pppuVar12;
  ulonglong uVar13;
  WCHAR local_328 [264];
  undefined8 **local_118 [3];
  ulonglong local_100;
  undefined2 *local_f8;
  uintptr_t local_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined2 local_c0;
  undefined6 uStack_be;
  uintptr_t local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  uintptr_t local_60;
  HMODULE local_58;
  longlong local_50;
  ulonglong local_48;
  undefined1 local_3f;
  undefined2 local_3e;
  DWORD local_3c;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_a0 = 0xf;
  local_48 = 7;
  local_88 = 0x20;
  local_50 = 1;
  local_80 = -8;
  local_78 = 0x29;
  local_70 = 2;
  local_68 = 0xfff;
  local_3e = 0;
  local_60 = 0;
  local_98 = 0x7ffffffffffffffe;
  local_3c = 0;
  local_90 = 0x40;
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0] = '<';
  param_1[1] = 'u';
  param_1[2] = 'n';
  param_1[3] = 'm';
  param_1[4] = 'a';
  param_1[5] = 'p';
  param_1[6] = 'p';
  param_1[7] = 'e';
  param_1[8] = 'd';
  param_1[9] = '>';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  *(LPCWSTR *)(param_1 + 0x40) = param_2;
  local_58 = (HMODULE)0x0;
  DVar4 = GetModuleHandleExW(6,param_2,&local_58);
  pHVar3 = local_58;
  if (local_58 != (HMODULE)0x0 && DVar4 != local_3c) {
    FUN_180207610(local_328,0,0x208);
    DVar4 = GetModuleFileNameW(pHVar3,local_328,0x104);
    pHVar3 = local_58;
    uVar2 = local_90;
    if (DVar4 == local_3c) {
      FUN_18017d12d(&DAT_1802a6fd8,&DAT_180297785,0x10,3,&DAT_1802a6fdc);
      FUN_180096a50(param_1,uVar2,&DAT_1802a6fd8,pHVar3);
    }
    else {
      uVar6 = FUN_1801e15b0(local_328);
      local_e8 = (undefined8 ***)0x0;
      uStack_e0 = 0;
      if (local_98 < uVar6) {
        FUN_180002ac0();
      }
      if (uVar6 < 8) {
        pppuVar12 = &local_e8;
        uVar13 = local_48;
      }
      else {
        uVar8 = local_48 | uVar6;
        if (local_98 < uVar8) {
LAB_18017c0bd:
          std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
        }
        uVar13 = 10;
        if (10 < uVar8) {
          uVar13 = uVar8;
        }
        lVar11 = uVar13 << ((byte)local_50 & 0x3f);
        if (uVar8 < 0x7ff) {
          pppuVar12 = (undefined8 ***)FUN_1801d61c8(lVar11 + local_70);
          local_e8 = pppuVar12;
        }
        else {
          if (0x7fffffffffffffeb < uVar8) goto LAB_18017c0bd;
          ppuVar7 = (undefined8 **)FUN_1801d61c8(lVar11 + local_78);
          pppuVar12 = (undefined8 ***)((longlong)ppuVar7 + 0x27U & 0xffffffffffffffe0);
          pppuVar12[-1] = ppuVar7;
          local_e8 = pppuVar12;
        }
      }
      local_d8 = uVar6;
      local_d0 = uVar13;
      FUN_1802079d0(pppuVar12,local_328,uVar6 << ((byte)local_50 & 0x3f));
      *(undefined2 *)((longlong)pppuVar12 + uVar6 * 2) = local_3e;
      puVar9 = &local_c0;
      FUN_18017ca40(&local_e8,puVar9);
      if (local_48 < local_a8) {
        puVar9 = (undefined2 *)CONCAT62(uStack_be,local_c0);
      }
      local_f0 = local_b0;
      local_f8 = puVar9;
      uVar5 = __std_fs_code_page();
      FUN_180072fc0(local_118,uVar5,&local_f8,&local_3f);
      if (local_48 < local_a8) {
        lVar1 = CONCAT62(uStack_be,local_c0);
        lVar10 = local_a8 << ((byte)local_50 & 0x3f);
        uVar6 = local_70 + lVar10;
        lVar11 = lVar1;
        if (local_68 < uVar6) {
          lVar11 = *(longlong *)(lVar1 + -8);
          if (local_88 <= (ulonglong)((lVar1 + local_80) - lVar11)) goto LAB_18017c0c2;
          uVar6 = lVar10 + local_78;
        }
        thunk_FUN_1801f42e0(lVar11,uVar6);
      }
      local_b0 = local_60;
      local_a8 = local_48;
      local_c0 = local_3e;
      if (local_48 < local_d0) {
        lVar11 = local_d0 << ((byte)local_50 & 0x3f);
        uVar6 = local_70 + lVar11;
        pppuVar12 = (undefined8 ***)local_e8;
        if (local_68 < uVar6) {
          pppuVar12 = (undefined8 ***)local_e8[-1];
          if (local_88 <= (ulonglong)((longlong)local_e8 + (local_80 - (longlong)pppuVar12))) goto LAB_18017c0c2;
          uVar6 = lVar11 + local_78;
        }
        thunk_FUN_1801f42e0(pppuVar12,uVar6);
      }
      uVar2 = local_90;
      pppuVar12 = local_118;
      if (local_a0 < local_100) {
        pppuVar12 = (undefined8 ***)local_118[0];
      }
      FUN_18017d12d(&DAT_1802a6fd0,&DAT_180297757,0x18,3,&DAT_1802a6fd4);
      FUN_180096a50(param_1,uVar2,&DAT_1802a6fd0,pppuVar12);
      if (local_a0 < local_100) {
        uVar6 = local_50 + local_100;
        pppuVar12 = (undefined8 ***)local_118[0];
        if (local_68 < uVar6) {
          pppuVar12 = (undefined8 ***)local_118[0][-1];
          if (local_88 <= (ulonglong)((longlong)local_118[0] + (local_80 - (longlong)pppuVar12))) {
LAB_18017c0c2:
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_3c,local_60);
          }
          uVar6 = local_100 + 0x28;
        }
        thunk_FUN_1801f42e0(pppuVar12,uVar6);
      }
    }
    *(longlong *)(param_1 + 0x40) = (longlong)param_2 - (longlong)local_58;
  }
  return;
}



void Unwind_18017c0f0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x298);
  return;
}



void Unwind_18017c130(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x270);
  return;
}



void FUN_18017c170(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 *param_7,undefined4 *param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 ***local_88;
  uintptr_t local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_58 = 0;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_98 = *param_3;
    local_90 = param_3[1];
    local_d0 = *param_4;
    local_f8 = 0xb000000000000000;
    local_c8 = *param_5;
    local_f0 = 0xa000000000000008;
    local_c0 = param_6;
    local_e8 = 0xb000000000000010;
    local_b8 = *param_7;
    local_e0 = 0x4000000000000018;
    local_b0 = *param_8;
    local_d8 = 0x2000000000000020;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_50;
    if (local_50 < local_90 + 0x58U) {
      FUN_180002240(&local_78);
      local_68 = local_58;
    }
    local_a8 = 5;
    local_a0 = &local_f8;
    FUN_180003080(local_110,&local_78,&local_98,&local_a8,local_58);
    local_88 = &local_78;
    if (local_50 < local_60) {
      local_88 = local_78;
    }
    local_80 = local_68;
    local_108 = *param_2;
    uStack_104 = param_2[1];
    uStack_100 = param_2[2];
    uStack_fc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_108,&local_88);
    if (local_50 < local_60) {
      uVar4 = local_60 + 1;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_58);
        }
        uVar4 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_18017c410(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



void Unwind_18017c450(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



void FUN_18017c490(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 local_f0 [8];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 ***local_90;
  uintptr_t local_88;
  longlong local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_58 = 0;
  local_80 = 0x28;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_a0 = *param_3;
    local_98 = param_3[1];
    local_c0 = *param_4;
    local_d0 = 0xb000000000000000;
    local_b8 = *param_5;
    local_c8 = 0x4000000000000008;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_50;
    if (local_50 < (ulonglong)(local_80 + local_98)) {
      FUN_180002240(&local_78);
      local_68 = local_58;
    }
    local_b0 = 2;
    local_a8 = &local_d0;
    FUN_180003080(local_f0,&local_78,&local_a0,&local_b0,local_58);
    local_90 = &local_78;
    if (local_50 < local_60) {
      local_90 = local_78;
    }
    local_88 = local_68;
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_e8,&local_90);
    if (local_50 < local_60) {
      uVar4 = local_60 + 1;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_58);
        }
        uVar4 = local_60 + local_80;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_18017c6c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_18017c700(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void FUN_18017c740(int param_1,undefined4 *param_2,undefined8 *param_3,ushort *param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 local_100 [8];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 ***local_88;
  uintptr_t local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_58 = 0;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_98 = *param_3;
    local_90 = param_3[1];
    local_c8 = (uint)*param_4;
    local_e8 = 0x2000000000000000;
    local_c4 = *param_5;
    local_e0 = 0xa000000000000004;
    local_bc = param_6;
    local_d8 = 0xb00000000000000c;
    local_b4 = *param_7;
    local_d0 = 0x4000000000000014;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_50;
    if (local_50 < local_90 + 0x38U) {
      FUN_180002240(&local_78);
      local_68 = local_58;
    }
    local_a8 = 4;
    local_a0 = &local_e8;
    FUN_180003080(local_100,&local_78,&local_98,&local_a8,local_58);
    local_88 = &local_78;
    if (local_50 < local_60) {
      local_88 = local_78;
    }
    local_80 = local_68;
    local_f8 = *param_2;
    uStack_f4 = param_2[1];
    uStack_f0 = param_2[2];
    uStack_ec = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_f8,&local_88);
    if (local_50 < local_60) {
      uVar4 = local_60 + 1;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_58);
        }
        uVar4 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_18017c9c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xb0);
  return;
}



void Unwind_18017ca00(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xb0);
  return;
}



undefined8 * FUN_18017ca40(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong local_e8;
  ulonglong local_e0;
  short local_d2;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  byte local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 *local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_e0 = 0x32d3f3a50f945e65;
  local_e8 = 0xd8b75e62f9c41061;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_e0 ^ 0xd6e970d0a678479d;
            uVar1 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0xd6e970d0a678479d;
            local_e0 = uVar4;
            if ((longlong)uVar1 < -0x30f57dae244a8144) break;
            if ((longlong)uVar1 < 0x51c1c0c482d174ac) {
              if ((longlong)uVar1 < -0x1733b300fcc027b9) {
                if (uVar1 == 0xcf0a8251dbb57ebc) {
                  local_e0 = 0xb7dba0e0c08e35a8;
                  if (local_d2 == 0x2f) {
                    local_e0 = 0x8e0f1189c7251e67;
                  }
                  local_e8 = 0xdfced14d45f46acb;
                }
                else if (uVar1 == 0xe238aef2c1359fdd) {
                  local_e0 = 0xe521a33ec51f22ee;
                  if (local_c8 < 8) {
                    local_e0 = 0x9516c2cde18b327c;
                  }
                  local_e8 = 0x7dda8e32e2b4ea3b;
                  local_a8 = local_d0;
                  local_a0 = param_2;
                }
              }
              else if (uVar1 == 0xea64adc7f6504e04) {
                local_d0 = 7;
                local_b8 = 1;
                puVar3 = param_1;
                if (7 < (ulonglong)param_1[3]) {
                  puVar3 = (undefined8 *)*param_1;
                }
                local_98 = (longlong)puVar3 + param_1[2] * 2;
                local_78 = FUN_180068d00(puVar3,local_98);
                local_e0 = 0x744a7a01eb41a75;
                local_e8 = 0x8e7ca4cb58f700e0;
                local_80 = local_98;
              }
              else if (uVar1 == 0xe8cc4cff033fd847) {
                param_2[2] = local_c8;
                param_2[3] = local_a8;
                FUN_1802079d0(local_a0,local_c0,local_68);
                *(undefined2 *)((longlong)local_a0 + local_68) = 0;
                return param_2;
              }
            }
            else if (uVar1 == 0x51c1c0c482d174ac) {
              local_68 = local_80 - local_c0;
              local_c8 = local_68 >> (local_b8 & 0x3f);
              *param_2 = 0;
              param_2[1] = 0;
              local_e0 = 0x90480fc842d8d27;
              if (0x7ffffffffffffffe < local_c8) {
                local_e0 = 0x63f286f9be3e8d22;
              }
              local_e8 = 0xeb3c2e0e451812fa;
            }
            else if (uVar1 == 0x681571ad857a5f63) {
              local_e0 = 0xfcd425593767043e;
              local_e8 = 0x75ec263271241eab;
              local_98 = local_70;
            }
            else if (uVar1 == 0x76e502b564f6a4e3) {
              lVar2 = FUN_1801d61c8(local_b0 + 0x29);
              local_90 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
              local_90[-1] = lVar2;
              local_e0 = 0xee45ccc09d65a82;
              local_e8 = 0x8b344681419bd4e7;
            }
          }
          if ((longlong)uVar1 < -0x734e6938426840da) break;
          if ((longlong)uVar1 < -0x69066ffa6ec19ba2) {
            if (uVar1 == 0x8cb196c7bd97bf26) {
              local_e0 = 0x9b2f0b82e108657;
              if (local_d2 == 0x5c) {
                local_e0 = 0x306641d129bbad98;
              }
              local_e8 = 0x61a78115ab6ad934;
            }
            else if (uVar1 == 0x949ee2fae02149c5) {
              local_90 = (undefined8 *)FUN_1801d61c8(local_b0 + 2);
              local_e0 = 0x754e28d7ef5e62c5;
              local_e8 = 0xf09e329aa713eca0;
            }
          }
          else if (uVar1 == 0x96f99005913e645e) {
            local_e0 = 0x391371c1cfb4c249;
            if (local_d2 < 0x5c) {
              local_e0 = 0x7aa86557a99603d3;
            }
            local_e8 = 0xb5a2e70672237d6f;
          }
          else if (uVar1 == 0x98fb2d0c27abc8d5) {
            uVar1 = local_c8 | local_d0;
            local_60 = 10;
            if (10 < uVar1) {
              local_60 = uVar1;
            }
            local_b0 = local_60 << (local_b8 & 0x3f);
            local_e0 = 0x2a31013b4922ab54;
            if (0x7fe < uVar1) {
              local_e0 = 0xc84ae174cdf54672;
            }
            local_e8 = 0xbeafe3c1a903e291;
          }
        }
        if (-0x7731570804d96029 < (longlong)uVar1) break;
        if (uVar1 == 0x85d01a4d484d8e65) {
          local_a0 = local_90;
          *param_2 = local_90;
          local_e0 = 0xe3db119d812f722b;
          local_e8 = 0xb175d628210aa6c;
          local_a8 = local_60;
        }
        else if (uVar1 == 0x85d8f4f9bf68f8c5) {
          local_70 = local_c0 + -2;
          local_d2 = *(short *)(local_c0 + -2);
          local_e0 = 0xcb8cfe12da08cdd4;
          local_e8 = 0x5d756e174b36a98a;
        }
      }
      if (uVar1 != 0x8938036b46431a95) break;
      local_c0 = local_98;
      local_e0 = 0xfdfb91512f9474e3;
      if (local_78 == local_98) {
        local_e0 = 0x29e2a56c122df88a;
      }
      local_e8 = 0x782365a890fc8c26;
    }
  } while (uVar1 != 0x88cea8f7fb269fd8);
  FUN_180002ac0();
}



void FUN_18017d12d(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xe76e29bb5d6c8d33;
  local_68 = 0x5bb30db907297975;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xcf1be2fbe496696;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xcf1be2fbe496696;
          local_60 = uVar2;
          if (0x3dbe2a27a1bf3a9 < (longlong)uVar1) break;
          if (uVar1 == 0xb872d86870b3e7d9) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xd9beb8975d31fa49;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x1171f3765ace6441;
            }
            local_68 = 0xd295887c011dae7;
          }
          else if (uVar1 == 0xbcdd24025a45f446) {
            local_60 = 0xd37d2aad9afb151f;
            if (*param_5 == 1) {
              local_60 = 0x2b2e5955a3bb1894;
            }
            local_68 = 0x6b0ff2c5ea48f2c6;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
          else if (uVar1 == 0xd497e0109d2020ae) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xfe060e6712ab7a49;
            local_68 = 0x8eae3654c20b5bbb;
          }
        }
        if (0x4021ab9049f3ea51 < (longlong)uVar1) break;
        if (uVar1 == 0x3dbe2a27a1bf3aa) {
          *param_5 = 1;
          local_60 = 0x1da7c7e090d002e8;
          local_68 = 0x5d866c70d923e8ba;
        }
        else if (uVar1 == 0x1c58abf19adfbea6) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xa7ebdab1b8d26d08;
          local_68 = 0xd743e28268724cfa;
        }
      }
      if (uVar1 != 0x70a83833d0a021f2) break;
      local_6a = local_6b ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6a;
      local_54 = local_4c + 1;
      local_60 = 0xf96544205b938981;
      if (local_54 == param_4) {
        local_60 = 0x42cc7eea513b9df2;
      }
      local_68 = 0x41179c482b206e58;
    }
  } while (uVar1 != 0x4021ab9049f3ea52);
  return;
}



void FUN_18017d3e0(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xc3158e42a83ab4a6;
  local_50 = 0x8c192088a3e8f246;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x825dd6cf32000d41;
        if (uVar1 != 0xf3586b0b59da21ee) break;
        FUN_18017d12d(&DAT_1802a6f68,&DAT_1802975e5,0x1e,8,&DAT_1802a6f70);
        _DAT_1802a70c0 = &DAT_1802a6f68;
        FUN_18017d12d(&DAT_1802a6f74,&DAT_180297628,0x16,8,&DAT_1802a6f7c);
        _DAT_1802a70c8 = &DAT_1802a6f74;
        FUN_18017d12d(&DAT_1802a6f80,&DAT_18029765e,0x19,10,&DAT_1802a6f8c);
        _DAT_1802a70d0 = &DAT_1802a6f80;
        DAT_1802a70d8 = 1;
        local_48 = 0x566f8936f5295d7c;
        local_50 = 0x226c7ecd8d6ccda5;
      }
      if (uVar1 != 0x4f0caeca0bd246e0) break;
      local_48 = 0x6fc72327a2b5f37e;
      if (DAT_1802a70d8 == 1) {
        local_48 = 0xe89cbfd7832a4249;
      }
      local_50 = 0x9c9f482cfb6fd290;
    }
    local_48 = local_48 ^ 0x825dd6cf32000d41;
  } while (uVar1 != 0x7403f7fb784590d9);
  return;
}



ulonglong FUN_18017d590(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;

  (*param_2)(param_3);
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1) & 0xffffffff;
}



void FUN_18017d620(char *param_1,undefined4 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined8 ***pppuVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  undefined1 local_138 [8];
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  longlong local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  char *local_98;
  undefined4 local_8c;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_6c;
  ulonglong local_68;
  size_t local_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  size_t local_48;
  ulonglong uStack_40;
  uint local_38;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_d0 = 0x27;
  local_c8 = 0xfff;
  local_68 = 0xf;
  local_c0 = -8;
  local_88 = 0x20;
  local_80 = 0x28;
  local_b8 = 5;
  local_6c = 4;
  local_60 = 0;
  local_78 = 1;
  local_31 = 0;
  local_38 = 0;
  local_a0 = param_3;
  local_98 = param_1;
  local_8c = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a7120)
     && (FUN_1801d62d8(&DAT_1802a7120), DAT_1802a7120 == -1)) {
    local_58 = (undefined8 ***)((ulonglong)local_58 & 0xffffffff00000000);
    FUN_18017e460(&DAT_1802a70e0,&local_58,&local_b0);
    atexit(FUN_18017de40);
    _Init_thread_footer(&DAT_1802a7120);
  }
  uVar5 = FUN_1801da264(&DAT_180298940);
  if (uVar5 != local_38) {
    FUN_1801da68c(5);
  }
  if (DAT_18029898c == 0x7fffffff) {
    DAT_18029898c = 0x7ffffffe;
    FUN_1801da68c(6);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  sVar6 = strlen(param_1);
  if ((longlong)sVar6 < (longlong)local_60) {
    FUN_180002ac0();
  }
  if (sVar6 < 0x10) {
    ppppuVar11 = &local_58;
    uVar12 = local_68;
  }
  else {
    uVar7 = local_68 | sVar6;
    uVar12 = 0x16;
    if (0x16 < uVar7) {
      uVar12 = uVar7;
    }
    if (uVar7 < 0xfff) {
      ppppuVar11 = (undefined8 ****)FUN_1801d61c8(local_78 + uVar12);
      local_58 = ppppuVar11;
    }
    else {
      pppuVar8 = (undefined8 ***)FUN_1801d61c8(local_80 + uVar12);
      ppppuVar11 = (undefined8 ****)(local_d0 + (longlong)pppuVar8 & 0xffffffffffffffe0);
      ppppuVar11[-1] = pppuVar8;
      local_58 = ppppuVar11;
    }
  }
  local_48 = sVar6;
  uStack_40 = uVar12;
  FUN_1802079d0(ppppuVar11,param_1,sVar6);
  *(undefined1 *)((longlong)ppppuVar11 + sVar6) = local_31;
  FUN_18017fae0(&DAT_1802a70e0,&local_b0,&local_58);
  lVar4 = local_b0;
  if (local_68 < uStack_40) {
    uVar12 = local_78 + uStack_40;
    ppppuVar11 = (undefined8 ****)local_58;
    if (local_c8 < uVar12) {
      ppppuVar11 = (undefined8 ****)local_58[-1];
      if (local_88 <= (ulonglong)((longlong)local_58 + (local_c0 - (longlong)ppppuVar11))) goto LAB_18017dd26;
      uVar12 = uStack_40 + local_80;
    }
    thunk_FUN_1801f42e0(ppppuVar11,uVar12);
  }
  if (*(int *)(lVar4 + 0x30) < 3) {
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
    lVar9 = FUN_1801b2b70();
    uVar12 = local_a0;
    if ((lVar9 - 1U < local_a0) && (lVar10 = FUN_1801b2d10(), uVar12 < (ulonglong)(lVar10 + lVar9))) {
      local_118 = uVar12 - lVar9;
      local_120 = 0x4000000000000000;
      local_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = local_68;
      FUN_180002240(&local_58,0x23);
      local_48 = local_60;
      local_b0 = local_78;
      local_a8 = &local_120;
      FUN_18018143d(&DAT_1802a7124,&DAT_1802989a2,0x11,0x1c,&DAT_1802a7140);
      local_130 = &DAT_1802a7124;
      local_128 = 0x1b;
      FUN_180003080(local_138,&local_58,&local_130,&local_b0,local_60);
    }
    else {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = (undefined8 ***)0x0;
      uStack_50 = 0;
      ppppuVar11 = (undefined8 ****)FUN_1801d61c8(local_88);
      local_48 = 0x16;
      uStack_40 = 0x1f;
      local_58 = ppppuVar11;
      FUN_18018143d(&DAT_1802a7144,&DAT_1802989e3,0x1b,0x17,&DAT_1802a715c);
      *(ulonglong *)((longlong)ppppuVar11 + 0xe) = CONCAT62(DAT_1802a7152._2_6_,(undefined2)DAT_1802a7152);
      uVar3 = uRam00000001802a714c;
      uVar2 = uRam00000001802a7148;
      uVar1 = CONCAT22((undefined2)DAT_1802a7152,uRam00000001802a7150);
      *(undefined4 *)ppppuVar11 = _DAT_1802a7144;
      *(undefined4 *)((longlong)ppppuVar11 + 4) = uVar2;
      *(undefined4 *)(ppppuVar11 + 1) = uVar3;
      *(undefined4 *)((longlong)ppppuVar11 + 0xc) = uVar1;
      *(undefined1 *)((longlong)ppppuVar11 + 0x16) = local_31;
    }
    FUN_18018143d(&DAT_1802a7160,&DAT_180298a25,0x10,0x22,&DAT_1802a7184);
    local_110 = &DAT_1802a7160;
    local_108 = 0x21;
    FUN_18018143d(&DAT_1802a7188,&DAT_180298a74,0x1b,6,&DAT_1802a7190);
    local_100 = &DAT_1802a7188;
    local_f8 = local_b8;
    FUN_18017e140(local_6c,&local_100,&local_110,&local_98,&local_8c,&local_a0,&local_58);
    if (local_68 < uStack_40) {
      uVar12 = local_78 + uStack_40;
      ppppuVar11 = (undefined8 ****)local_58;
      if (local_c8 < uVar12) {
        ppppuVar11 = (undefined8 ****)local_58[-1];
        if (local_88 <= (ulonglong)((longlong)local_58 + (local_c0 - (longlong)ppppuVar11))) {
LAB_18017dd26:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_38,local_60);
        }
        uVar12 = uStack_40 + local_80;
      }
      thunk_FUN_1801f42e0(ppppuVar11,uVar12);
    }
    if (*(int *)(lVar4 + 0x30) == 3) {
      FUN_18018143d(&DAT_1802a7194,&DAT_180298aac,0x18,0x28,&DAT_1802a71bc);
      local_f0 = &DAT_1802a7194;
      local_e8 = local_d0;
      FUN_18018143d(&DAT_1802a7188,&DAT_180298a74,0x1b,6,&DAT_1802a7190);
      local_e0 = &DAT_1802a7188;
      local_d8 = local_b8;
      FUN_180177400(local_6c,&local_e0,&local_f0,&local_98);
    }
  }
  FUN_1801da26c(&DAT_180298940);
  return;
}



void Unwind_18017dd50(void)

{
  FUN_1801d6230(&DAT_1802a7120);
  return;
}



void Unwind_18017dd80(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x120);
  return;
}



void Unwind_18017ddb0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x120);
  return;
}



void Unwind_18017dde0(void)

{
  FUN_1801da26c(&DAT_180298940);
  return;
}



void Unwind_18017de10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x120);
  return;
}



void FUN_18017de40(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_90 = 0xd8cf614f4cf7195d;
  local_98 = 0xc44f8237ff6c1ebf;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x422f7f8693e4552a;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x422f7f8693e4552a;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x1c80e378b39b07e2) break;
          if (uVar1 == 0x4f196fe33605d19c) {
            local_70 = local_88;
            local_80 = DAT_1802a7108 - local_88;
            local_90 = 0x266126e4c3c2bf5b;
            if (0xfff < local_80) {
              local_90 = 0xdbe6de97dff56d49;
            }
            local_98 = 0xc83e6a2c08b797c4;
            local_78 = local_88;
            local_68 = local_80;
          }
          else if (uVar1 == 0x43fced48972eade0) {
            local_80 = local_68 + 0x27;
            local_90 = 0x3d5de098d525abf5;
            local_98 = 0xd302ac501e50836a;
            local_78 = local_60;
          }
          else if (uVar1 == 0x1c80e378b39b07e2) {
            local_88 = DAT_1802a70f8;
            local_90 = 0xc93379a9fe6b7581;
            if (DAT_1802a70f8 == 0) {
              local_90 = 0x4464306371238e5;
            }
            local_98 = 0x862a164ac86ea41d;
          }
        }
        if ((longlong)uVar1 < 0x13d8b4bbd742fa8d) break;
        if (uVar1 == 0x13d8b4bbd742fa8d) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0x7bd96002fc12c1e2;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0xbb0035c7ebd59ebe;
          }
          local_98 = 0xf8fcd88f7cfb335e;
        }
      }
      if (uVar1 != 0xee5f4cc8cb75289f) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      DAT_1802a70f8 = 0;
      uRam00000001802a7100 = 0;
      DAT_1802a7108 = 0;
      local_90 = 0x1f51e8900632476c;
      local_98 = 0x9d3dbddcf94edb94;
    }
    if (uVar1 == 0x826c554cff7c9cf8) break;
    if (uVar1 == 0x8325b88d80e9f2bc) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  FUN_18017f670(&DAT_1802a70e8);
  return;
}



void FUN_18017e140(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined4 *param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 *local_c4;
  longlong local_bc;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 ***local_90;
  uintptr_t local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_58 = 0;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_80 = *param_3;
    local_98 = param_3[1];
    local_d8 = *param_4;
    local_f8 = 0xb000000000000000;
    local_d0 = *param_5;
    local_f0 = 0x2000000000000008;
    local_cc = *param_6;
    local_e8 = 0xa00000000000000c;
    local_c4 = param_7;
    if (local_50 < (ulonglong)param_7[3]) {
      local_c4 = (undefined8 *)*param_7;
    }
    local_bc = param_7[2];
    local_e0 = 0xc000000000000014;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_50;
    if (local_50 < (ulonglong)(local_98 + 0x30 + local_bc)) {
      FUN_180002240(&local_78);
      local_68 = local_58;
    }
    local_b0 = 4;
    local_a8 = &local_f8;
    local_a0 = local_80;
    FUN_180003080(local_110,&local_78,&local_a0,&local_b0,local_58);
    local_90 = &local_78;
    if (local_50 < local_60) {
      local_90 = local_78;
    }
    local_88 = local_68;
    local_108 = *param_2;
    uStack_104 = param_2[1];
    uStack_100 = param_2[2];
    uStack_fc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_108,&local_90);
    if (local_50 < local_60) {
      uVar4 = local_60 + 1;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_58);
        }
        uVar4 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_18017e3e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



void Unwind_18017e420(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



undefined4 * FUN_18017e460(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;

  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_1801d61c8(0x38);
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



void Unwind_18017e630(undefined8 param_1,longlong param_2)

{
  FUN_18017f370(*(undefined8 *)(param_2 + 0x38));
  FUN_18017f670(*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_18017e670(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  undefined8 *local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  ulonglong *local_90;
  ulonglong local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];

  local_1a8 = 0x55114ab43491202c;
  local_1b0 = 0xdfb61dea065e04fb;
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_1a8 ^ 0x3790bdfacc354233;
              uVar2 = local_1a8 ^ local_1b0;
              local_1b0 = local_1b0 ^ 0x3790bdfacc354233;
              local_1a8 = uVar3;
              if (0x68d23f1dbbfe4db < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x2811c20474ce76fd) {
                if ((longlong)uVar2 < -0x5f6e5721b48dc445) {
                  if (uVar2 == 0x8314de1f121865a7) {
                    local_1a8 = 0xc659519ac88b9f6e;
                    if (local_110 == local_118) {
                      local_1a8 = 0x7f3a0fdc6f7ca441;
                    }
                    local_1b0 = 0x8bc74937ae787a6e;
                    local_f8 = local_80;
                  }
                  else if (uVar2 == 0x8aa7575e32cf24d7) {
                    local_170 = 0x27;
                    local_1a0 = 3;
                    local_148 = 4;
                    local_178 = -8;
                    local_150 = 0x18;
                    local_198 = 0;
                    local_158 = 1;
                    local_160 = 0x3ffffffffffffffc;
                    local_c0 = param_1 + 1;
                    local_140 = (undefined8 *)param_1[1];
                    local_190 = (undefined8 *)*param_1;
                    local_1a8 = 0x99482df300549164;
                    if ((ulonglong)((longlong)local_140 - (longlong)local_190 >> 3) < param_2) {
                      local_1a8 = 0x93dc739b1c482b4c;
                    }
                    local_1b0 = 0x601f07dcd738f535;
                    local_b8 = local_140;
                    local_b0 = local_190;
                  }
                  else if (uVar2 == 0x8d90a8729dd9d936) {
                    local_d8 = local_120 + local_170;
                    local_d0 = local_a0;
                    local_1a8 = 0x929e7ba0699daedc;
                    local_1b0 = 0x53da581a55a1cd7d;
                  }
                }
                else if (uVar2 == 0xa091a8de4b723bbb) {
                  local_130 = local_138 & local_160;
                  local_98 = (undefined8 *)((local_130 << (local_1a0 & 0x3f)) + (longlong)local_180);
                  local_78._8_4_ = (int)param_3;
                  local_78._0_8_ = param_3;
                  local_78._12_4_ = uVar5;
                  local_1a8 = 0xd9cc63e13549f83c;
                  local_1b0 = 0x348fab0436f24077;
                  local_e0 = local_198;
                }
                else if (uVar2 == 0xc14423ba3c3c63a1) {
                  thunk_FUN_1801f42e0(local_d0,local_d8);
                  local_1a8 = 0x40bf599db4d62585;
                  local_1b0 = 0xae0a53953b747d80;
                }
                else if (uVar2 == 0xc8849cab83b0c5db) {
                  local_180 = local_f0;
                  local_90 = param_1 + 2;
                  local_128 = *param_1;
                  local_120 = param_1[2] - local_128;
                  local_1a8 = 0x7143460fffedb58b;
                  if (local_120 == local_198) {
                    local_1a8 = 0xe675c7a9ba502474;
                  }
                  local_1b0 = 0x8c0cda135f27c71;
                  local_88 = local_128;
                }
              }
              else if ((longlong)uVar2 < -0xc3c8bb8348f2187) {
                if (uVar2 == 0xd7ee3dfb8b318903) {
                  lVar4 = local_108 << (local_1a0 & 0x3f);
                  puVar1 = (undefined8 *)((longlong)local_190 + lVar4);
                  *puVar1 = local_68._0_8_;
                  puVar1[1] = local_68._8_8_;
                  puVar1 = (undefined8 *)((longlong)local_190 + lVar4 + 0x10);
                  *puVar1 = local_68._0_8_;
                  puVar1[1] = local_68._8_8_;
                  local_108 = local_108 + local_148;
                  local_1a8 = 0xd61d43f342ff91eb;
                  if (local_108 == local_118) {
                    local_1a8 = 0x82e7a017dbd67d4f;
                  }
                  local_1b0 = 0x1f37e08c9ce18e8;
                }
                else if (uVar2 == 0xed43c8e503bbb84b) {
                  lVar4 = local_e0 << (local_1a0 & 0x3f);
                  puVar1 = (undefined8 *)((longlong)local_180 + lVar4);
                  *puVar1 = local_78._0_8_;
                  puVar1[1] = local_78._8_8_;
                  puVar1 = (undefined8 *)((longlong)local_180 + lVar4 + 0x10);
                  *puVar1 = local_78._0_8_;
                  puVar1[1] = local_78._8_8_;
                  local_e0 = local_e0 + local_148;
                  local_1a8 = 0x722e1e79c119086f;
                  if (local_e0 == local_130) {
                    local_1a8 = 0x99e0f56d191d54f8;
                  }
                  local_1b0 = 0x9f6dd69cc2a2b024;
                }
                else if (uVar2 == 0xeeb50a088fa25805) {
                  *param_1 = (ulonglong)local_180;
                  local_a8 = (undefined8 *)((longlong)local_180 + local_188);
                  *local_c0 = (ulonglong)local_a8;
                  *local_90 = (ulonglong)local_a8;
                  local_138 = ((ulonglong)(local_188 + local_178) >> (local_1a0 & 0x3f)) + local_158;
                  local_1a8 = 0x4e6ea7867b509e28;
                  if ((ulonglong)(local_188 + local_178) < local_150) {
                    local_1a8 = 0xe1ade1fb9ceaf713;
                  }
                  local_1b0 = 0xeeff0f583022a593;
                  local_e8 = local_180;
                }
              }
              else if ((longlong)uVar2 < -0x6a8d5d028939baf) {
                if (uVar2 == 0xf3c37447cb70de79) {
                  local_1a8 = 0x4fd270636bb00d70;
                  if (0x1fffffffffffffff < param_2) {
                    local_1a8 = 0x30e3cb1e354ab0f0;
                  }
                  local_1b0 = 0x6a6f30a45cb07b96;
                }
                else if (uVar2 == 0xf4fd46ebc104de2f) {
                  return;
                }
              }
              else if (uVar2 == 0xf9572a2fd76c6451) {
                local_1a8 = 0x902022e440912533;
                if (local_190 == local_140) {
                  local_1a8 = 0x9f2aa5d181e2dd99;
                }
                local_1b0 = 0x6bd7e33a40e603b6;
              }
              else if (uVar2 == 0xfbf7c1de00772685) {
                uVar2 = (longlong)local_b8 + (local_178 - (longlong)local_b0);
                local_110 = (uVar2 >> (local_1a0 & 0x3f)) + local_158;
                local_1a8 = 0x8ba2e4c90d243422;
                if (uVar2 < local_150) {
                  local_1a8 = 0xe2e888b81d6e795f;
                }
                local_1b0 = 0xaf7690157b9d9c5f;
                local_f8 = local_190;
              }
            }
            if ((longlong)uVar2 < 0x58ff0ca89fb1579b) break;
            if ((longlong)uVar2 < 0x69f4f08f7b112a40) {
              if ((longlong)uVar2 < 0x5e9ea7f9af80b404) {
                if (uVar2 == 0x58ff0ca89fb1579b) {
                  local_a0 = *(ulonglong *)(local_128 - 8);
                  local_1a8 = 0x86b542338d507618;
                  if ((local_88 + local_178) - local_a0 < 0x20) {
                    local_1a8 = 0x2b222fd17f13ad0;
                  }
                  local_1b0 = 0x8f228a8f8a28e3e6;
                }
                else if (uVar2 == 0x5a8cfbba69facb66) goto LAB_18017f323;
              }
              else if (uVar2 == 0x5e9ea7f9af80b404) {
                local_1a8 = 0x14e91281915ab89f;
                if (param_2 < 0x1ffffffffffffffc) {
                  local_1a8 = 0x6d55208f8090e98e;
                }
                local_1b0 = 0x5c0ae93ff64a04d0;
              }
              else if (uVar2 == 0x68a08eab18dfd971) {
                *local_100 = param_3;
                local_100 = local_100 + 1;
                local_1a8 = 0x37828abb3be7ad1f;
                if (local_100 == local_a8) {
                  local_1a8 = 0xabdf42fbe23caa41;
                }
                local_1b0 = 0x5f2204102338746e;
              }
            }
            else if (uVar2 == 0x69f4f08f7b112a40) {
              *local_c8 = param_3;
              local_c8 = local_c8 + 1;
              local_1a8 = 0x8c3c8357db9d19b0;
              if (local_c8 == local_140) {
                local_1a8 = 0x113535336188eddf;
              }
              local_1b0 = 0xe5c873d8a08c33f0;
            }
            else if (uVar2 == 0x6fce68692f3d8f56) {
              local_f0 = (undefined8 *)FUN_1801d61c8(local_188);
              local_1a8 = 0xc95d5138f9dae755;
              local_1b0 = 0x1d9cd937a6a228e;
            }
            else if (uVar2 == 0x79838baeca1fc9fa) {
              local_1a8 = 0x49cf7727c57fb7c7;
              if (0xfff < local_120) {
                local_1a8 = 0xd074583566f283fd;
              }
              local_1b0 = 0x888b549df943d466;
              local_d8 = local_120;
              local_d0 = local_128;
            }
          }
          if (0x25bd40c7370076e5 < (longlong)uVar2) break;
          if ((longlong)uVar2 < 0xf52eea3acc85280) {
            if (uVar2 == 0x68d23f1dbbfe4dc) {
              local_1a8 = 0xb23f292ec4b61490;
              if (local_138 == local_130) {
                local_1a8 = 0x49908166a97a983f;
              }
              local_1b0 = 0xbd6dc78d687e4610;
              local_e8 = local_98;
            }
            else if (uVar2 == 0x997c8bc077895fe) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_198);
            }
          }
          else if (uVar2 == 0xf52eea3acc85280) {
            local_1a8 = 0x7eb774f22985b364;
            local_1b0 = 0x1617fa59315a6a15;
            local_100 = local_e8;
          }
          else if (uVar2 == 0x24d474dc76b9a87d) {
            local_118 = local_110 & local_160;
            local_80 = (undefined8 *)((local_118 << (local_1a0 & 0x3f)) + (longlong)local_190);
            local_68._8_4_ = (int)param_3;
            local_68._0_8_ = param_3;
            local_68._12_4_ = uVar5;
            local_1a8 = 0xb060fec90cd098db;
            local_1b0 = 0x678ec33287e111d8;
            local_108 = local_198;
          }
        }
        if (0x48e3fbbe6710bc4e < (longlong)uVar2) break;
        if (uVar2 == 0x25bd40c7370076e6) {
          local_188 = param_2 << (local_1a0 & 0x3f);
          local_1a8 = 0x1bce2fdc3d451f6b;
          if (0x1ff < param_2) {
            local_1a8 = 0x2a9ee04cbdf82439;
          }
          local_1b0 = 0x740047b51278903d;
        }
        else if (uVar2 == 0x315fc9b076daed5e) {
          lVar4 = FUN_1801d61c8(local_188 + local_170);
          local_f0 = (undefined8 *)(local_170 + lVar4 & 0xffffffffffffffe0);
          local_f0[-1] = lVar4;
          local_1a8 = 0x2ac2d00181e30aa;
          local_1b0 = 0xca28b1ab9baef571;
        }
      }
      if (uVar2 != 0x4d9e18ad66f3e500) break;
      local_1a8 = 0x1f700a9a638ba9e1;
      local_1b0 = 0x7684fa15189a83a1;
      local_c8 = local_f8;
    }
  } while (uVar2 != 0x48e3fbbe6710bc4f);
LAB_18017f323:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_18017f370(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_90 = 0xf84d9ce64484592f;
  local_98 = 0x4f7d67c31c9a1275;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xa5952591b5732882;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xa5952591b5732882;
          local_90 = uVar2;
          if (0xd1e6768c713b3ab < (longlong)uVar1) break;
          if (uVar1 == 0xb730fb25581e4b5a) {
            local_88 = *param_1;
            local_90 = 0x84ebcb652f255824;
            if (local_88 == 0) {
              local_90 = 0xb2ead2249b781bb1;
            }
            local_98 = 0xbff4b54c5c6ba81d;
          }
          else if (uVar1 == 0xb84df5faf9dc1b3d) {
            local_60 = *(longlong *)(local_88 + -8);
            local_90 = 0x9079cef2eae05e15;
            if ((local_70 - local_60) - 8U < 0x20) {
              local_90 = 0x975921d04b4b0c15;
            }
            local_98 = 0xc3bf14374caf4b99;
          }
          else if (uVar1 == 0xfb3615b95473d6e0) {
            thunk_FUN_1801f42e0(local_78,local_80);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_90 = 0xc86bcbd5dc3a0fbe;
            local_98 = 0xc575acbd1b29bc12;
          }
        }
        if ((longlong)uVar1 < 0x53c6dac5a64f158c) break;
        if (uVar1 == 0x54e635e707e4478c) {
          local_80 = local_68 + 0x27;
          local_90 = 0x345e6c69054b099e;
          local_98 = 0xcf6879d05138df7e;
          local_78 = local_60;
        }
        else if (uVar1 == 0x53c6dac5a64f158c) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0x3b1f7e29734ef039) break;
      local_70 = local_88;
      local_80 = param_1[2] - local_88;
      local_90 = 0xa43b2519c01e358e;
      if (0xfff < local_80) {
        local_90 = 0xe740c55a6db1f853;
      }
      local_98 = 0x5f0d30a0946de36e;
      local_78 = local_88;
      local_68 = local_80;
    }
  } while (uVar1 != 0xd1e6768c713b3ac);
  return;
}



void FUN_18017f670(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_b8;
  ulonglong local_b0;
  uintptr_t local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  ulonglong *local_58;
  longlong local_50;
  longlong local_48;

  local_b0 = 0x196c0de55b700696;
  local_b8 = 0x10c42958e7e555a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_b0 ^ 0x70e26b8a894500a0;
          uVar2 = local_b0 ^ local_b8;
          local_b8 = local_b8 ^ 0x70e26b8a894500a0;
          local_b0 = uVar3;
          if (-0x27b654bd11c54bd6 < (longlong)uVar2) break;
          if ((longlong)uVar2 < -0x4f6a1a149971adc6) {
            if (uVar2 == 0x99ce200430bbe6bc) {
              local_68[4] = local_a8;
              *local_58 = local_98;
              *(undefined1 *)local_90 = 0;
              thunk_FUN_1801f42e0(local_68,local_a0);
              local_b0 = 0xb70cab11c2e2da65;
              if (local_60 != (undefined8 *)0x0) {
                local_b0 = 0xcaf68d7511d05a6d;
              }
              local_b8 = 0xe3b3bbcba1991eaf;
              local_70 = local_60;
            }
            else if (uVar2 == 0xa64f050153165368) {
              local_50 = *(longlong *)(local_48 + -8);
              local_b0 = 0xc344b4e837f820dd;
              if (0x1f < (local_48 - local_50) - 8U) {
                local_b0 = 0xd5f234f819861071;
              }
              local_b8 = 0xdbb9fbaf7bca45a;
            }
          }
          else if (uVar2 == 0xb095e5eb668e523a) {
            thunk_FUN_1801f42e0(local_78,local_80);
            local_b0 = 0x42ebeb74951c87f3;
            local_b8 = 0xdb25cb70a5a7614f;
          }
          else if (uVar2 == 0xceff2b52c0448487) {
            local_80 = local_88 + 0x28;
            local_78 = local_50;
            local_b0 = 0x42343868284f9f86;
            local_b8 = 0xf2a1dd834ec1cdbc;
          }
        }
        if (0x294536beb04944c1 < (longlong)uVar2) break;
        if (uVar2 == 0xf3bb7e16cda41ab5) {
          local_78 = *local_90;
          local_80 = local_88 + 1;
          local_b0 = 0x4fa53a720c291d96;
          if (local_80 < 0x1000) {
            local_b0 = 0x597fda9839b11cc4;
          }
          local_b8 = 0xe9ea3f735f3f4efe;
          local_48 = local_78;
        }
        else if (uVar2 == 0x18604f70d50e53cc) {
          local_98 = 0xf;
          local_a0 = 0x38;
          local_a8 = 0;
          plVar1 = (longlong *)*param_1;
          *(undefined8 *)plVar1[1] = 0;
          local_70 = (undefined8 *)*plVar1;
          local_b0 = 0x3aed4903f1ae1544;
          if (local_70 != (undefined8 *)0x0) {
            local_b0 = 0x47176f67229c954c;
          }
          local_b8 = 0x6e5259d992d5d18e;
        }
        else if (uVar2 == 0xd849ab42ee3ab42b) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a8);
        }
      }
      if (uVar2 != 0x294536beb04944c2) break;
      local_68 = local_70;
      local_60 = (undefined8 *)*local_70;
      local_90 = local_70 + 2;
      local_58 = local_70 + 5;
      local_88 = local_70[5];
      local_b0 = 0x7ba9dc6b5c7bc613;
      if (local_88 <= local_98) {
        local_b0 = 0x11dc8279a1643a1a;
      }
      local_b8 = 0x8812a27d91dfdca6;
    }
  } while (uVar2 != 0x54bf10da637bc4ca);
  thunk_FUN_1801f42e0(*param_1,local_a0);
  return;
}



undefined8 * FUN_18017fae0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *_Buf1;
  float fVar16;
  float fVar17;

  uVar8 = param_3[2];
  puVar7 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar14 = 0xcbf29ce484222325;
  if (uVar8 != 0) {
    lVar11 = 0;
    uVar14 = 0xcbf29ce484222325;
    if (3 < uVar8) {
      uVar13 = 0;
      uVar14 = 0xcbf29ce484222325;
      lVar11 = 0;
      do {
        uVar14 = ((ulonglong)*(byte *)((longlong)puVar7 + lVar11 + 3) ^
                 ((ulonglong)*(byte *)((longlong)puVar7 + lVar11 + 2) ^
                 ((ulonglong)*(byte *)((longlong)puVar7 + lVar11 + 1) ^
                 (*(byte *)((longlong)puVar7 + lVar11) ^ uVar14) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                 0x100000001b3;
        lVar11 = lVar11 + 4;
        uVar13 = uVar13 + 4;
      } while (uVar13 != (uVar8 & 0xfffffffffffffffc));
      if ((uVar8 & 3) == 0) goto LAB_18017fcad;
    }
    uVar13 = 0;
    do {
      uVar14 = (*(byte *)((longlong)puVar7 + lVar11) ^ uVar14) * 0x100000001b3;
      lVar11 = lVar11 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar8 & 3));
  }
LAB_18017fcad:
  lVar11 = (*(ulonglong *)(param_1 + 0xc) & uVar14) * 0x10;
  puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar11);
  puVar12 = *(undefined8 **)(param_1 + 2);
  if (puVar10 != puVar12) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar11);
    puVar12 = puVar10;
    if (uVar8 == 0) {
      lVar11 = puVar10[4];
      while (lVar11 != 0) {
        if (puVar12 == puVar1) goto LAB_18017fd52;
        puVar12 = (undefined8 *)puVar12[1];
        lVar11 = puVar12[4];
      }
LAB_18017fcfd:
      *param_2 = puVar12;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
    while( true ) {
      if (uVar8 == puVar12[4]) {
        if ((ulonglong)puVar12[5] < 0x10) {
          puVar10 = puVar12 + 2;
        }
        else {
          puVar10 = (undefined8 *)puVar12[2];
        }
        iVar6 = memcmp(puVar7,puVar10,uVar8);
        if (iVar6 == 0) goto LAB_18017fcfd;
      }
      if (puVar12 == puVar1) break;
      puVar12 = (undefined8 *)puVar12[1];
    }
  }
LAB_18017fd52:
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
    FUN_18018143d(&DAT_1802a71c0,&DAT_180298b7e,0x18,0x1b,&DAT_1802a71dc);
    FUN_1801d7524(&DAT_1802a71c0);
  }
  puVar7 = (undefined8 *)FUN_1801d61c8(0x38);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar7[2] = *param_3;
  puVar7[3] = uVar3;
  puVar7[4] = uVar4;
  puVar7[5] = uVar5;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  uVar8 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar8 < 0) {
    fVar16 = (float)uVar8;
    fVar17 = *param_1;
    uVar8 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar8 < 0) goto LAB_18017fdd2;
LAB_18017fe20:
    if (fVar16 / (float)(longlong)uVar8 <= fVar17) goto LAB_18017ff76;
  }
  else {
    fVar16 = (float)(longlong)uVar8;
    fVar17 = *param_1;
    uVar8 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar8) goto LAB_18017fe20;
LAB_18017fdd2:
    if (fVar16 / (float)uVar8 <= fVar17) goto LAB_18017ff76;
  }
  fVar17 = (float)FUN_1801eacf0(fVar16 / fVar17);
  uVar9 = (longlong)(fVar17 - 9.223372e+18) & (longlong)fVar17 >> 0x3f | (longlong)fVar17;
  uVar13 = 8;
  if (8 < uVar9) {
    uVar13 = uVar9;
  }
  uVar9 = uVar8;
  if (uVar8 < uVar13) {
    uVar9 = uVar8 << 3;
    if (uVar8 << 3 <= uVar13) {
      uVar9 = uVar13;
    }
    if (0x1ff < uVar8) {
      uVar9 = uVar13;
    }
  }
  FUN_1801805f0(param_1,uVar9);
  lVar11 = (*(ulonglong *)(param_1 + 0xc) & uVar14) * 0x10;
  puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar11);
  puVar12 = *(undefined8 **)(param_1 + 2);
  if (puVar10 != puVar12) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar11);
    _Size = puVar7[4];
    if ((ulonglong)puVar7[5] < 0x10) {
      _Buf1 = puVar7 + 2;
    }
    else {
      _Buf1 = (undefined8 *)puVar7[2];
    }
    puVar12 = puVar10;
    if (_Size == 0) {
      lVar11 = puVar10[4];
      while (lVar11 != 0) {
        if (puVar12 == puVar1) goto LAB_18017ff76;
        puVar12 = (undefined8 *)puVar12[1];
        lVar11 = puVar12[4];
      }
LAB_18017ff6d:
      puVar12 = (undefined8 *)*puVar12;
    }
    else {
      sVar2 = puVar10[4];
      while( true ) {
        if (_Size == sVar2) {
          if ((ulonglong)puVar12[5] < 0x10) {
            puVar10 = puVar12 + 2;
          }
          else {
            puVar10 = (undefined8 *)puVar12[2];
          }
          iVar6 = memcmp(_Buf1,puVar10,_Size);
          if (iVar6 == 0) goto LAB_18017ff6d;
        }
        if (puVar12 == puVar1) break;
        puVar12 = (undefined8 *)puVar12[1];
        sVar2 = puVar12[4];
      }
    }
  }
LAB_18017ff76:
  puVar10 = (undefined8 *)puVar12[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar12;
  puVar7[1] = puVar10;
  *puVar10 = puVar7;
  puVar12[1] = puVar7;
  lVar11 = *(longlong *)(param_1 + 6);
  lVar15 = (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar11 + lVar15) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar11 + lVar15) = puVar7;
    *(undefined8 **)(lVar11 + 8 + lVar15) = puVar7;
  }
  else if (*(undefined8 **)(lVar11 + lVar15) == puVar12) {
    *(undefined8 **)(lVar11 + lVar15) = puVar7;
  }
  else if (*(undefined8 **)(lVar11 + 8 + lVar15) == puVar10) {
    *(undefined8 **)(lVar11 + 8 + lVar15) = puVar7;
  }
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


