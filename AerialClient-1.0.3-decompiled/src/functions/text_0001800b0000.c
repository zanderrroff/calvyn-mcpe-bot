#include "../include/aerialclient_types.h"


void Unwind_1800b0200(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0220(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0240(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0260(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x98);
  return;
}



undefined1 * FUN_1800b02a0(longlong *param_1,undefined1 *param_2,byte *param_3,char param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 local_d0 [16];
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined3 uStack_a7;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined3 uStack_97;
  undefined4 uStack_94;
  undefined8 auStack_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_42 = 1;
  local_78 = 0xe000000000000000;
  local_50 = 0;
  local_b0 = -1;
  local_68 = 1;
  local_41 = 0;
  local_70 = 5;
  local_64 = 0;
  local_80 = 0x1f;
  uVar3 = param_1[7];
  lVar13 = -0x2000000000000000;
  if (-1 < (longlong)uVar3) {
    lVar13 = 0;
  }
  uVar14 = (uVar3 & 0x1f) - 1;
  lVar16 = -0x2000000000000000;
  if ((uVar3 & 0x1f) != 0) {
    lVar16 = 0;
  }
  if ((1 << ((byte)uVar14 & 0x1f) & *(uint *)(lVar16 + param_1[4] + (uVar3 >> 5) * 4 + lVar13 + (uVar14 >> 5) * 4)) == 0
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    return param_2;
  }
  uStack_58 = (ulonglong)*param_3;
  local_60 = 4;
  if (param_4 == '\0') {
    local_d0[0] = 5;
    local_c0 = CONCAT44(local_c0._4_4_,(int)((ulonglong)(param_1[2] - param_1[1]) >> 3));
    plVar4 = (longlong *)param_1[0x15];
    if (plVar4 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_c0,local_d0,&local_60);
    if (cVar11 != '\0') goto LAB_1800b0457;
LAB_1800b0582:
    *param_2 = local_41;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
LAB_1800b0457:
    uVar14 = uStack_58;
    uVar3 = local_60;
    uVar8 = local_64;
    uVar9 = (undefined4)local_60;
    uVar10 = local_60._4_4_;
    if (param_1[1] == param_1[2]) {
      uStack_a4 = uVar10;
      local_60 = CONCAT71(local_60._1_7_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)*param_1;
      uVar1 = *puVar7;
      local_a8 = (undefined1)uVar3;
      *puVar7 = local_a8;
      _local_a8 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      uStack_a0 = *(undefined8 *)(puVar7 + 8);
      *(ulonglong *)(puVar7 + 8) = uVar14;
      FUN_18007ff50(&uStack_a0);
      lVar13 = *param_1;
LAB_1800b05fd:
      *param_2 = local_42;
    }
    else {
      pcVar5 = *(char **)(param_1[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_1800b0582;
      if (*pcVar5 == '\x02') {
        lVar13 = *(longlong *)(pcVar5 + 8);
        puVar6 = *(undefined4 **)(lVar13 + 8);
        if (puVar6 == *(undefined4 **)(lVar13 + 0x10)) {
          FUN_180080af0(lVar13,puVar6,&local_60);
        }
        else {
          *puVar6 = uVar9;
          puVar6[1] = uVar10;
          puVar6[2] = (undefined4)uStack_58;
          puVar6[3] = uStack_58._4_4_;
          local_60 = CONCAT71(local_60._1_7_,local_41);
          uStack_58 = 0;
          *(longlong *)(lVar13 + 8) = *(longlong *)(lVar13 + 8) + 0x10;
        }
        lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800b05fd;
      }
      uVar3 = param_1[0xb];
      uVar14 = local_78;
      if ((longlong)local_50 <= (longlong)uVar3) {
        uVar14 = local_50;
      }
      uVar12 = local_b0 + (local_80 & uVar3);
      uVar15 = local_78;
      if ((local_80 & uVar3) != local_50) {
        uVar15 = local_50;
      }
      local_b8 = uVar12 & local_80;
      uVar17 = local_68 << ((byte)local_b8 & 0x1f);
      lVar13 = param_1[8] + (uVar3 >> ((byte)local_70 & 0x3f)) * 4 + uVar14 + (uVar12 >> ((byte)local_70 & 0x3f)) * 4;
      uVar2 = *(uint *)(uVar15 + lVar13);
      local_c0 = lVar13 + uVar15;
      FUN_1800b17d0(param_1 + 8,local_d0,&local_c0);
      uVar14 = uStack_58;
      uVar3 = local_60;
      if ((uVar17 & uVar2) == uVar8) goto LAB_1800b0582;
      uStack_94 = local_60._4_4_;
      local_60 = CONCAT71(local_60._1_7_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)param_1[0xc];
      uVar1 = *puVar7;
      local_98 = (undefined1)uVar3;
      *puVar7 = local_98;
      _local_98 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      auStack_90[0] = *(undefined8 *)(puVar7 + 8);
      *(ulonglong *)(puVar7 + 8) = uVar14;
      FUN_18007ff50(auStack_90);
      *param_2 = local_42;
      lVar13 = param_1[0xc];
    }
    *(longlong *)(param_2 + 8) = lVar13;
  }
  FUN_18007ff50(&uStack_58,local_60 & 0xff);
  return param_2;
}



void Unwind_1800b0640(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0660(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0680(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b06a0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x98);
  return;
}



undefined1 * FUN_1800b06e0(longlong *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 local_c0 [16];
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined3 uStack_97;
  uint uStack_94;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined3 uStack_87;
  uint uStack_84;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  int local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_3a = 1;
  local_70 = 0xe000000000000000;
  local_48 = 0;
  local_a0 = -1;
  local_60 = 1;
  local_39 = 0;
  local_68 = 5;
  local_5c = 0;
  local_78 = 0x1f;
  uVar3 = param_1[7];
  lVar13 = -0x2000000000000000;
  if (-1 < (longlong)uVar3) {
    lVar13 = 0;
  }
  uVar16 = (uVar3 & 0x1f) - 1;
  lVar14 = -0x2000000000000000;
  if ((uVar3 & 0x1f) != 0) {
    lVar14 = 0;
  }
  if ((1 << ((byte)uVar16 & 0x1f) & *(uint *)(lVar14 + param_1[4] + (uVar3 >> 5) * 4 + lVar13 + (uVar16 >> 5) * 4)) == 0
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    return param_2;
  }
  local_58 = local_58 & 0xffffff00;
  uStack_50 = 0;
  if (param_4 == '\0') {
    local_c0[0] = 5;
    local_b0 = CONCAT44(local_b0._4_4_,(int)((ulonglong)(param_1[2] - param_1[1]) >> 3));
    plVar4 = (longlong *)param_1[0x15];
    if (plVar4 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_b0,local_c0,&local_58);
    if (cVar11 != '\0') goto LAB_1800b0884;
LAB_1800b09af:
    *param_2 = local_39;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
LAB_1800b0884:
    uVar10 = uStack_50;
    uVar2 = local_58;
    uVar8 = local_5c;
    if (param_1[1] == param_1[2]) {
      uStack_94 = uStack_54;
      local_58 = CONCAT31(local_58._1_3_,local_39);
      uStack_50 = 0;
      puVar7 = (undefined1 *)*param_1;
      uVar1 = *puVar7;
      local_98 = (undefined1)uVar2;
      *puVar7 = local_98;
      _local_98 = CONCAT31(local_58._1_3_,uVar1);
      uStack_90 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar10;
      FUN_18007ff50(&uStack_90);
      lVar13 = *param_1;
LAB_1800b0a2a:
      *param_2 = local_3a;
    }
    else {
      pcVar5 = *(char **)(param_1[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_1800b09af;
      if (*pcVar5 == '\x02') {
        lVar13 = *(longlong *)(pcVar5 + 8);
        puVar6 = *(uint **)(lVar13 + 8);
        if (puVar6 == *(uint **)(lVar13 + 0x10)) {
          FUN_180080af0(lVar13,puVar6,&local_58);
        }
        else {
          *puVar6 = local_58;
          puVar6[1] = uStack_54;
          puVar6[2] = (uint)uStack_50;
          puVar6[3] = uStack_50._4_4_;
          local_58 = CONCAT31(local_58._1_3_,local_39);
          uStack_50 = 0;
          *(longlong *)(lVar13 + 8) = *(longlong *)(lVar13 + 8) + 0x10;
        }
        lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800b0a2a;
      }
      uVar3 = param_1[0xb];
      uVar16 = local_70;
      if ((longlong)local_48 <= (longlong)uVar3) {
        uVar16 = local_48;
      }
      uVar12 = local_a0 + (local_78 & uVar3);
      uVar15 = local_70;
      if ((local_78 & uVar3) != local_48) {
        uVar15 = local_48;
      }
      local_a8 = uVar12 & local_78;
      uVar17 = local_60 << ((byte)local_a8 & 0x1f);
      lVar13 = param_1[8] + (uVar3 >> ((byte)local_68 & 0x3f)) * 4 + uVar16 + (uVar12 >> ((byte)local_68 & 0x3f)) * 4;
      uVar2 = *(uint *)(uVar15 + lVar13);
      local_b0 = lVar13 + uVar15;
      FUN_1800b17d0(param_1 + 8,local_c0,&local_b0);
      uVar10 = uStack_50;
      uVar9 = local_58;
      if ((uVar17 & uVar2) == uVar8) goto LAB_1800b09af;
      uStack_84 = uStack_54;
      local_58 = CONCAT31(local_58._1_3_,local_39);
      uStack_50 = 0;
      puVar7 = (undefined1 *)param_1[0xc];
      uVar1 = *puVar7;
      local_88 = (undefined1)uVar9;
      *puVar7 = local_88;
      _local_88 = CONCAT31(local_58._1_3_,uVar1);
      uStack_80 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar10;
      FUN_18007ff50(&uStack_80);
      *param_2 = local_3a;
      lVar13 = param_1[0xc];
    }
    *(longlong *)(param_2 + 8) = lVar13;
  }
  FUN_18007ff50(&uStack_50,(undefined1)local_58);
  return param_2;
}



void Unwind_1800b0a60(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0a80(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0aa0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0ac0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x90);
  return;
}



undefined1 * FUN_1800b0af0(longlong *param_1,undefined1 *param_2,undefined8 *param_3,char param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_d0 [16];
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined3 uStack_a7;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined3 uStack_97;
  undefined4 uStack_94;
  undefined8 auStack_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_43 = 5;
  local_42 = 1;
  local_78 = 0xe000000000000000;
  local_50 = 0;
  local_b0 = -1;
  local_68 = 1;
  local_41 = 0;
  local_70 = 5;
  local_64 = 0;
  local_80 = 0x1f;
  uVar3 = param_1[7];
  lVar14 = -0x2000000000000000;
  if (-1 < (longlong)uVar3) {
    lVar14 = 0;
  }
  uVar15 = (uVar3 & 0x1f) - 1;
  lVar17 = -0x2000000000000000;
  if ((uVar3 & 0x1f) != 0) {
    lVar17 = 0;
  }
  if ((1 << ((byte)uVar15 & 0x1f) & *(uint *)(lVar17 + param_1[4] + (uVar3 >> 5) * 4 + lVar14 + (uVar15 >> 5) * 4)) == 0
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    return param_2;
  }
  uStack_58 = *param_3;
  local_60 = 5;
  if (param_4 == '\0') {
    local_d0[0] = 5;
    local_c0 = CONCAT44(local_c0._4_4_,(int)((ulonglong)(param_1[2] - param_1[1]) >> 3));
    plVar4 = (longlong *)param_1[0x15];
    if (plVar4 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar12 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_c0,local_d0,&local_60);
    if (cVar12 != '\0') goto LAB_1800b0ca6;
LAB_1800b0dd1:
    *param_2 = local_41;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
LAB_1800b0ca6:
    uVar11 = uStack_58;
    uVar3 = local_60;
    uVar8 = local_64;
    uVar9 = (undefined4)local_60;
    uVar10 = local_60._4_4_;
    if (param_1[1] == param_1[2]) {
      uStack_a4 = uVar10;
      local_60 = CONCAT71(local_60._1_7_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)*param_1;
      uVar1 = *puVar7;
      local_a8 = (undefined1)uVar3;
      *puVar7 = local_a8;
      _local_a8 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      uStack_a0 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar11;
      FUN_18007ff50(&uStack_a0);
      lVar14 = *param_1;
LAB_1800b0e4c:
      *param_2 = local_42;
    }
    else {
      pcVar5 = *(char **)(param_1[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_1800b0dd1;
      if (*pcVar5 == '\x02') {
        lVar14 = *(longlong *)(pcVar5 + 8);
        puVar6 = *(undefined4 **)(lVar14 + 8);
        if (puVar6 == *(undefined4 **)(lVar14 + 0x10)) {
          FUN_180080af0(lVar14,puVar6,&local_60);
        }
        else {
          *puVar6 = uVar9;
          puVar6[1] = uVar10;
          puVar6[2] = (undefined4)uStack_58;
          puVar6[3] = uStack_58._4_4_;
          local_60 = CONCAT71(local_60._1_7_,local_41);
          uStack_58 = 0;
          *(longlong *)(lVar14 + 8) = *(longlong *)(lVar14 + 8) + 0x10;
        }
        lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800b0e4c;
      }
      uVar3 = param_1[0xb];
      uVar15 = local_78;
      if ((longlong)local_50 <= (longlong)uVar3) {
        uVar15 = local_50;
      }
      uVar13 = local_b0 + (local_80 & uVar3);
      uVar16 = local_78;
      if ((local_80 & uVar3) != local_50) {
        uVar16 = local_50;
      }
      local_b8 = uVar13 & local_80;
      uVar18 = local_68 << ((byte)local_b8 & 0x1f);
      lVar14 = param_1[8] + (uVar3 >> ((byte)local_70 & 0x3f)) * 4 + uVar15 + (uVar13 >> ((byte)local_70 & 0x3f)) * 4;
      uVar2 = *(uint *)(uVar16 + lVar14);
      local_c0 = lVar14 + uVar16;
      FUN_1800b17d0(param_1 + 8,local_d0,&local_c0);
      uVar11 = uStack_58;
      uVar3 = local_60;
      if ((uVar18 & uVar2) == uVar8) goto LAB_1800b0dd1;
      uStack_94 = local_60._4_4_;
      local_60 = CONCAT71(local_60._1_7_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)param_1[0xc];
      uVar1 = *puVar7;
      local_98 = (undefined1)uVar3;
      *puVar7 = local_98;
      _local_98 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      auStack_90[0] = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar11;
      FUN_18007ff50(auStack_90);
      *param_2 = local_42;
      lVar14 = param_1[0xc];
    }
    *(longlong *)(param_2 + 8) = lVar14;
  }
  FUN_18007ff50(&uStack_58,local_60 & 0xff);
  return param_2;
}



void Unwind_1800b0e80(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0ea0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0ec0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b0ee0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x98);
  return;
}



undefined1 * FUN_1800b0f20(longlong *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_d0 [16];
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined3 uStack_a7;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined3 uStack_97;
  undefined4 uStack_94;
  undefined8 auStack_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_42 = 1;
  local_78 = 0xe000000000000000;
  local_60 = 0;
  local_b0 = -1;
  local_68 = 1;
  local_41 = 0;
  local_70 = 5;
  local_64 = 0;
  local_80 = 0x1f;
  uVar3 = param_1[7];
  lVar14 = -0x2000000000000000;
  if (-1 < (longlong)uVar3) {
    lVar14 = 0;
  }
  uVar16 = (uVar3 & 0x1f) - 1;
  lVar17 = -0x2000000000000000;
  if ((uVar3 & 0x1f) != 0) {
    lVar17 = 0;
  }
  if ((1 << ((byte)uVar16 & 0x1f) & *(uint *)(lVar17 + param_1[4] + (uVar3 >> 5) * 4 + lVar14 + (uVar16 >> 5) * 4)) == 0
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    return param_2;
  }
  uStack_50 = 0;
  local_58 = 3;
  uStack_50 = FUN_1800813f0(param_3);
  if (param_4 == '\0') {
    local_d0[0] = 5;
    local_c0 = CONCAT44(local_c0._4_4_,(int)((ulonglong)(param_1[2] - param_1[1]) >> 3));
    plVar4 = (longlong *)param_1[0x15];
    if (plVar4 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar12 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_c0,local_d0,&local_58);
    if (cVar12 != '\0') goto LAB_1800b10dd;
LAB_1800b1208:
    *param_2 = local_41;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
LAB_1800b10dd:
    uVar11 = uStack_50;
    uVar3 = local_58;
    uVar8 = local_64;
    uVar9 = (undefined4)local_58;
    uVar10 = local_58._4_4_;
    if (param_1[1] == param_1[2]) {
      uStack_a4 = uVar10;
      local_58 = CONCAT71(local_58._1_7_,local_41);
      uStack_50 = 0;
      puVar7 = (undefined1 *)*param_1;
      uVar1 = *puVar7;
      local_a8 = (undefined1)uVar3;
      *puVar7 = local_a8;
      _local_a8 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      uStack_a0 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar11;
      FUN_18007ff50(&uStack_a0);
      lVar14 = *param_1;
LAB_1800b1283:
      *param_2 = local_42;
    }
    else {
      pcVar5 = *(char **)(param_1[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_1800b1208;
      if (*pcVar5 == '\x02') {
        lVar14 = *(longlong *)(pcVar5 + 8);
        puVar6 = *(undefined4 **)(lVar14 + 8);
        if (puVar6 == *(undefined4 **)(lVar14 + 0x10)) {
          FUN_180080af0(lVar14,puVar6,&local_58);
        }
        else {
          *puVar6 = uVar9;
          puVar6[1] = uVar10;
          puVar6[2] = (undefined4)uStack_50;
          puVar6[3] = uStack_50._4_4_;
          local_58 = CONCAT71(local_58._1_7_,local_41);
          uStack_50 = 0;
          *(longlong *)(lVar14 + 8) = *(longlong *)(lVar14 + 8) + 0x10;
        }
        lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800b1283;
      }
      uVar3 = param_1[0xb];
      uVar16 = local_78;
      if ((longlong)local_60 <= (longlong)uVar3) {
        uVar16 = local_60;
      }
      uVar13 = local_b0 + (local_80 & uVar3);
      uVar15 = local_78;
      if ((local_80 & uVar3) != local_60) {
        uVar15 = local_60;
      }
      local_b8 = uVar13 & local_80;
      uVar18 = local_68 << ((byte)local_b8 & 0x1f);
      local_c0 = param_1[8] + (uVar3 >> ((byte)local_70 & 0x3f)) * 4 + uVar16 + (uVar13 >> ((byte)local_70 & 0x3f)) * 4;
      uVar2 = *(uint *)(uVar15 + local_c0);
      local_c0 = local_c0 + uVar15;
      FUN_1800b17d0(param_1 + 8,local_d0,&local_c0);
      uVar11 = uStack_50;
      uVar3 = local_58;
      if ((uVar18 & uVar2) == uVar8) goto LAB_1800b1208;
      uStack_94 = local_58._4_4_;
      local_58 = CONCAT71(local_58._1_7_,local_41);
      uStack_50 = 0;
      puVar7 = (undefined1 *)param_1[0xc];
      uVar1 = *puVar7;
      local_98 = (undefined1)uVar3;
      *puVar7 = local_98;
      _local_98 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      auStack_90[0] = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar11;
      FUN_18007ff50(auStack_90);
      *param_2 = local_42;
      lVar14 = param_1[0xc];
    }
    *(longlong *)(param_2 + 8) = lVar14;
  }
  FUN_18007ff50(&uStack_50,local_58 & 0xff);
  return param_2;
}



void Unwind_1800b12c0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0xa0);
  return;
}



void Unwind_1800b1300(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b1320(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b1340(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b1360(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0xa0);
  return;
}



undefined1 * FUN_1800b13a0(longlong *param_1,undefined1 *param_2,undefined8 *param_3,char param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_d0 [16];
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined3 uStack_a7;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined3 uStack_97;
  undefined4 uStack_94;
  undefined8 auStack_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_42 = 1;
  local_78 = 0xe000000000000000;
  local_50 = 0;
  local_b0 = -1;
  local_68 = 1;
  local_41 = 0;
  local_70 = 5;
  local_64 = 0;
  local_80 = 0x1f;
  uVar3 = param_1[7];
  lVar14 = -0x2000000000000000;
  if (-1 < (longlong)uVar3) {
    lVar14 = 0;
  }
  uVar15 = (uVar3 & 0x1f) - 1;
  lVar17 = -0x2000000000000000;
  if ((uVar3 & 0x1f) != 0) {
    lVar17 = 0;
  }
  if ((1 << ((byte)uVar15 & 0x1f) & *(uint *)(lVar17 + param_1[4] + (uVar3 >> 5) * 4 + lVar14 + (uVar15 >> 5) * 4)) == 0
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    return param_2;
  }
  uStack_58 = *param_3;
  local_60 = 6;
  if (param_4 == '\0') {
    local_d0[0] = 5;
    local_c0 = CONCAT44(local_c0._4_4_,(int)((ulonglong)(param_1[2] - param_1[1]) >> 3));
    plVar4 = (longlong *)param_1[0x15];
    if (plVar4 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar12 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_c0,local_d0,&local_60);
    if (cVar12 != '\0') goto LAB_1800b1556;
LAB_1800b1681:
    *param_2 = local_41;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
LAB_1800b1556:
    uVar11 = uStack_58;
    uVar3 = local_60;
    uVar8 = local_64;
    uVar9 = (undefined4)local_60;
    uVar10 = local_60._4_4_;
    if (param_1[1] == param_1[2]) {
      uStack_a4 = uVar10;
      local_60 = CONCAT71(local_60._1_7_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)*param_1;
      uVar1 = *puVar7;
      local_a8 = (undefined1)uVar3;
      *puVar7 = local_a8;
      _local_a8 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      uStack_a0 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar11;
      FUN_18007ff50(&uStack_a0);
      lVar14 = *param_1;
LAB_1800b16fc:
      *param_2 = local_42;
    }
    else {
      pcVar5 = *(char **)(param_1[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_1800b1681;
      if (*pcVar5 == '\x02') {
        lVar14 = *(longlong *)(pcVar5 + 8);
        puVar6 = *(undefined4 **)(lVar14 + 8);
        if (puVar6 == *(undefined4 **)(lVar14 + 0x10)) {
          FUN_180080af0(lVar14,puVar6,&local_60);
        }
        else {
          *puVar6 = uVar9;
          puVar6[1] = uVar10;
          puVar6[2] = (undefined4)uStack_58;
          puVar6[3] = uStack_58._4_4_;
          local_60 = CONCAT71(local_60._1_7_,local_41);
          uStack_58 = 0;
          *(longlong *)(lVar14 + 8) = *(longlong *)(lVar14 + 8) + 0x10;
        }
        lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800b16fc;
      }
      uVar3 = param_1[0xb];
      uVar15 = local_78;
      if ((longlong)local_50 <= (longlong)uVar3) {
        uVar15 = local_50;
      }
      uVar13 = local_b0 + (local_80 & uVar3);
      uVar16 = local_78;
      if ((local_80 & uVar3) != local_50) {
        uVar16 = local_50;
      }
      local_b8 = uVar13 & local_80;
      uVar18 = local_68 << ((byte)local_b8 & 0x1f);
      lVar14 = param_1[8] + (uVar3 >> ((byte)local_70 & 0x3f)) * 4 + uVar15 + (uVar13 >> ((byte)local_70 & 0x3f)) * 4;
      uVar2 = *(uint *)(uVar16 + lVar14);
      local_c0 = lVar14 + uVar16;
      FUN_1800b17d0(param_1 + 8,local_d0,&local_c0);
      uVar11 = uStack_58;
      uVar3 = local_60;
      if ((uVar18 & uVar2) == uVar8) goto LAB_1800b1681;
      uStack_94 = local_60._4_4_;
      local_60 = CONCAT71(local_60._1_7_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)param_1[0xc];
      uVar1 = *puVar7;
      local_98 = (undefined1)uVar3;
      *puVar7 = local_98;
      _local_98 = CONCAT31((int3)(uVar3 >> 8),uVar1);
      auStack_90[0] = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar11;
      FUN_18007ff50(auStack_90);
      *param_2 = local_42;
      lVar14 = param_1[0xc];
    }
    *(longlong *)(param_2 + 8) = lVar14;
  }
  FUN_18007ff50(&uStack_58,local_60 & 0xff);
  return param_2;
}



void Unwind_1800b1730(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b1750(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b1770(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b1790(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x98);
  return;
}



longlong * FUN_1800b17d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_a8 [16];
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_60 = 0xe000000000000000;
  local_40 = 0;
  local_4c = 0xffffffff;
  local_68 = 3;
  local_58 = 5;
  local_48 = 0x1f;
  lVar3 = *param_1;
  uVar5 = param_1[3];
  uVar9 = 0;
  lVar10 = lVar3;
  if (uVar5 != 0) {
    uVar9 = (*param_3 - lVar3) * 8 + param_3[1];
    lVar10 = -0x2000000000000000;
    if (-1 < (longlong)uVar9) {
      lVar10 = 0;
    }
    lVar10 = lVar3 + (uVar9 >> 5) * 4 + lVar10;
    uVar9 = uVar9 & 0x1f;
  }
  local_88 = -0x2000000000000000;
  if (-1 < (longlong)uVar5) {
    local_88 = 0;
  }
  local_80 = uVar5 & 0x1f;
  local_78 = 4;
  if (uVar9 != 0x1f) {
    local_78 = 0;
  }
  local_70 = uVar9 + 1;
  if (uVar9 == 0x1f) {
    local_70 = 0;
  }
  local_88 = lVar3 + (uVar5 >> 5) * 4 + local_88;
  local_78 = local_78 + lVar10;
  local_98 = lVar10;
  local_90 = uVar9;
  FUN_1800b1a50(local_a8,&local_78,&local_88,&local_98);
  uVar5 = param_1[3] - 1;
  if ((longlong)local_40 <= (longlong)uVar5) {
    uVar8 = param_1[3] + 0x1eU >> ((byte)local_58 & 0x3f);
    lVar7 = *param_1;
    if ((uVar8 < (ulonglong)(param_1[1] - lVar7 >> 2)) && (lVar1 = lVar7 + uVar8 * 4, lVar1 != param_1[1])) {
      param_1[1] = lVar1;
    }
    param_1[3] = uVar5;
    if ((uVar5 & local_48) != local_40) {
      puVar2 = (uint *)(lVar7 + -4 + uVar8 * 4);
      *puVar2 = *puVar2 & (local_4c << ((byte)(uVar5 & local_48) & 0x1f) ^ local_4c);
      lVar7 = *param_1;
    }
    uVar9 = (lVar10 - lVar3 << ((byte)local_68 & 0x3f)) + uVar9;
    if ((longlong)local_40 <= (longlong)uVar9) {
      local_60 = local_40;
    }
    *param_2 = lVar7 + (uVar9 >> ((byte)local_58 & 0x3f)) * 4 + local_60;
    param_2[1] = uVar9 & local_48;
    return param_2;
  }
  FUN_1800a84e0();
  pcVar4 = (code *)swi(3);
  plVar6 = (longlong *)(*pcVar4)();
  return plVar6;
}



void Unwind_1800b1a30(void)

{
  Unwind_1801dd394();
}



longlong * FUN_1800b1a50(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong local_250;
  ulonglong local_248;
  char local_240;
  char local_23f;
  char local_23e;
  char local_23d;
  uint local_23c;
  uint local_238;
  char local_231;
  uint *local_230;
  uint local_224;
  uint local_220;
  char local_21c;
  ushort local_21a;
  ulonglong local_218;
  uint *local_210;
  ulonglong local_208;
  uint local_1fc;
  uint *local_1f8;
  uint local_1f0;
  uint local_1ec;
  undefined4 local_1e8;
  uint local_1e4;
  ulonglong local_1e0;
  ulonglong *local_1d8;
  ulonglong local_1d0;
  char local_1c4;
  uint local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  byte local_190;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  uint *local_168;
  ulonglong local_160;
  uint *local_158;
  uint *local_150;
  uint *local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  undefined4 local_134;
  byte local_130;
  longlong local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  byte *local_100;
  uint *local_f8;
  uint *local_f0;
  uint *local_e8;
  uint *local_e0;
  uint *local_d8;
  byte *local_d0;
  byte *local_c8;
  uint *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  longlong local_a0;
  uint *local_98;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong *local_68;
  byte *local_60;
  byte *local_58;
  uint *local_50;
  byte *local_48;

  local_248 = 0x1058e8567322624d;
  local_250 = 0x29d6981c02c1ab3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar9 = local_248 ^ 0x9d78fa4ea8c819ff;
                uVar7 = local_248 ^ local_250;
                local_250 = local_250 ^ 0x9d78fa4ea8c819ff;
                bVar1 = (byte)local_208;
                cVar2 = (char)local_1e0;
                local_248 = uVar9;
                if ((longlong)uVar7 < 0x12c581d7b30e78fe) break;
                if ((longlong)uVar7 < 0x4e86766960e36345) {
                  if ((longlong)uVar7 < 0x312a01de99b9f276) {
                    if ((longlong)uVar7 < 0x2f17fb21930a142e) {
                      if (uVar7 == 0x12c581d7b30e78fe) {
                        local_128 = 0x20;
                        local_218 = 0;
                        local_23f = -1;
                        local_238 = 0xffffffff;
                        local_190 = 3;
                        local_1c4 = '\0';
                        local_130 = 5;
                        local_1f0 = 0;
                        local_21a = 0xff;
                        local_21c = '\b';
                        local_180 = 7;
                        local_210 = (uint *)*param_2;
                        local_1f8 = (uint *)*param_3;
                        local_231 = local_210 == local_1f8;
                        local_208 = param_2[1];
                        local_1d8 = param_3 + 1;
                        local_1d0 = param_3[1];
                        local_248 = 0x7af7e6643510ef47;
                        if (local_208 == local_1d0) {
                          local_248 = 0xd551584507e870d6;
                        }
                        if (local_210 != local_1f8) {
                          local_248 = 0x7af7e6643510ef47;
                        }
                        local_250 = 0x3eda13dabfff3cc2;
                      }
                      else if (uVar7 == 0x2196530a2b7d8e03) {
                        local_140 = local_220 & local_1fc;
                        local_1bc = (local_140 & *local_210) << (cVar2 - bVar1 & 0x1f);
                        if (local_240 != '\0') {
                          local_1bc = (local_140 & *local_210) >> (bVar1 - cVar2 & 0x1f);
                        }
                        local_248 = 0xf9e16d9dc3411a74;
                        if (local_23d != '\0') {
                          local_248 = 0xa65f11a2b793c010;
                        }
                        local_250 = 0x5d448f6721e5ec8d;
                      }
                    }
                    else if (uVar7 == 0x2f17fb21930a142e) {
                      local_1e4 = local_1a8;
                      local_158 = local_e8;
                      local_150 = local_f0;
                      local_50 = local_f8;
                      local_80 = *local_1d8;
                      local_248 = 0xad634689e9f863ad;
                      if (local_80 < local_170) {
                        local_248 = 0xf3feb9703a36f864;
                      }
                      local_250 = 0x5ba6cc9fe68b8fbd;
                    }
                    else if (uVar7 == 0x3063184aa01e49d8) {
                      local_168 = local_210 + 1;
                      local_248 = 0x1bd47ae3611a113e;
                      if (local_240 != '\0') {
                        local_248 = 0x24d704e5a573e7e;
                      }
                      local_250 = 0xb03a2906f8d9d5cb;
                    }
                  }
                  else if ((longlong)uVar7 < 0x37cba728a6eea0d7) {
                    if (uVar7 == 0x312a01de99b9f276) {
                      local_134 = (undefined4)local_110;
                      local_248 = 0x881792b6d3993d;
                      local_250 = 0x77c1b70df62e49b5;
                      local_a8 = local_230;
                      local_198 = local_1b4;
                      local_b0 = local_168;
                    }
                    else if (uVar7 == 0x37809c51b615c80b) {
                      local_1c0 = (*local_98 & local_220) << ((byte)local_110 & 0x1f);
                      local_248 = 0x1ebf9d123cecab2b;
                      if (local_78 < local_118) {
                        local_248 = 0xce389385b6a3b5b1;
                      }
                      local_250 = 0x5039eb7b5c0fc86e;
                    }
                  }
                  else if (uVar7 == 0x37cba728a6eea0d7) {
                    *local_58 = local_23f << ((byte)local_120 & 0x1f) & *local_60 |
                                (byte)(local_21a >> (local_21c - (byte)local_120 & 0x1f)) & *local_58;
                    local_c8 = local_60 + 1;
                    local_d0 = local_58 + 1;
                    local_248 = 0x68e68f0021f8b229;
                    local_250 = 0xef623ebc0dcef07;
                  }
                  else if (uVar7 == 0x42baff905b06c454) {
                    local_48[local_70] =
                         (byte)(local_21a >> (local_21c - (byte)local_108 & 0x1f)) & *local_100 |
                         local_23f << ((byte)local_108 & 0x1f) & local_48[local_70];
                    local_248 = 0x237d48623b0c7824;
                    local_250 = 0xbdfe50250ec18669;
                  }
                  else if (uVar7 == 0x442df5be8aefd385) {
                    local_230 = (uint *)*param_4;
                    lVar8 = (local_1d0 - local_208) + ((longlong)local_1f8 - (longlong)local_210 << (local_190 & 0x3f));
                    uVar3 = *(undefined4 *)((longlong)param_4 + 4);
                    uVar4 = *(undefined4 *)(param_4 + 1);
                    uVar5 = *(undefined4 *)((longlong)param_4 + 0xc);
                    *(undefined4 *)param_1 = *(undefined4 *)param_4;
                    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
                    *(undefined4 *)(param_1 + 1) = uVar4;
                    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
                    local_68 = (ulonglong *)(param_1 + 1);
                    local_248 = 0x8b1a141ddc6f5809;
                    if ((ulonglong)param_1[1] < local_218 - lVar8) {
                      local_248 = 0x7e233b11ecc81b7d;
                    }
                    if ((longlong)local_218 <= lVar8) {
                      local_248 = 0x8b1a141ddc6f5809;
                    }
                    local_178 = lVar8 + param_1[1];
                    local_250 = 0x877bffc3b5287d5;
                  }
                }
                else if ((longlong)uVar7 < 0x63d7a11d48b04091) {
                  if ((longlong)uVar7 < 0x59ddc5918d012f2d) {
                    if (uVar7 == 0x4e86766960e36345) {
                      *local_148 = local_194 & local_1ec | local_1c0;
                      local_248 = 0x6493bd069fe52d2b;
                      if (*local_1d8 == local_118) {
                        local_248 = 0xa3cd60d02729fc4b;
                      }
                      local_250 = 0x3d4e789712e40206;
                    }
                    else if (uVar7 == 0x5898a5fc721ce41a) {
                      *param_1 = local_a0;
                      local_160 = local_178 & 0x1f;
                      *local_68 = local_160;
                      local_1fc = local_238 << (bVar1 & 0x1f);
                      local_1e0 = param_4[1];
                      local_224 = local_238 >> (local_1c4 - (char)local_1e0 & 0x1fU);
                      if (local_1e0 == local_218) {
                        local_224 = local_1f0;
                      }
                      local_220 = local_238 >> (local_1c4 - (char)local_1d0 & 0x1fU);
                      local_23c = local_238 << (sbyte)local_160;
                      local_23e = local_160 == local_218;
                      local_23d = local_230 == (uint *)(local_a0 + (ulonglong)(byte)local_23e * -4);
                      local_240 = local_1e0 < local_208;
                      local_248 = 0x1dac6cc9e572c519;
                      if (local_231 != '\0') {
                        local_248 = 0xde44b19fae36c7bb;
                      }
                      local_250 = 0xffd2e295854b49b8;
                    }
                  }
                  else if (uVar7 == 0x59ddc5918d012f2d) {
                    local_148[1] = local_148[1] & local_23c | (*local_98 & local_220) >> ((byte)local_1b8 & 0x1f);
                    local_248 = 0xe8a6e25794fe613c;
                    local_250 = 0x7625fa10a1339f71;
                  }
                  else if (uVar7 == 0x61015f8f669d2abb) {
                    local_1a0 = *local_230 & local_1ac |
                                (*local_1f8 & local_220) << ((char)local_160 - (char)local_1d0 & 0x1fU);
                    local_248 = 0x2eea07938ba2f8aa;
                    local_250 = 0x547c1604c2f2be1d;
                  }
                }
                else if ((longlong)uVar7 < 0x765484edd79a9ca8) {
                  if (uVar7 == 0x63d7a11d48b04091) {
                    local_50[2] = local_23c & local_50[2] |
                                  (local_238 ^ local_23c) & *local_158 >> ((byte)local_1b0 & 0x1f);
                    local_248 = 0x697ed038ebc5e0f8;
                    local_250 = 0xf7fdc87fde081eb5;
                  }
                  else if (uVar7 == 0x6610acebe1245d2e) {
                    local_48 = local_d0;
                    local_70 = (longlong)local_100 - (longlong)local_c8;
                    FUN_1802079d0();
                    local_248 = 0xe920d82e1f204055;
                    if (local_108 == local_218) {
                      local_248 = 0x35193ff971eb7a4c;
                    }
                    local_250 = 0xab9a27be44268401;
                  }
                }
                else if (uVar7 == 0x765484edd79a9ca8) {
                  local_a0 = *param_1 + (local_178 >> (local_130 & 0x3f)) * 4 + -0x2000000000000000;
                  local_248 = 0x8e80b4736eb74bb3;
                  local_250 = 0xd618118f1cabafa9;
                }
                else if (uVar7 == 0x7749a09f40fdd088) {
                  *local_a8 = local_198 & local_1ec | *local_b0 << ((byte)local_134 & 0x1f);
                  local_1a4 = local_a8[1] & local_13c | *local_b0 >> ((byte)local_1b8 & 0x1f);
                  local_a8[1] = local_1a4;
                  local_d8 = local_b0 + 1;
                  local_e0 = local_a8 + 1;
                  local_248 = 0xd652d4ffbd3bac4c;
                  if (local_d8 == local_1f8) {
                    local_248 = 0x2736dc6c1ef88074;
                  }
                  local_250 = 0xa11b7460fdc67cc4;
                  local_198 = local_1a4;
                  local_b0 = local_d8;
                  local_a8 = local_e0;
                }
                else if (uVar7 == 0x7a961197495046b7) {
                  *local_230 = local_1a0 | local_138;
                  local_248 = 0x914009014bf53da6;
                  local_250 = 0xfc311467e38c3eb;
                }
              }
              if ((longlong)uVar7 < -0x2f0fc4db4a77f0ce) break;
              if ((longlong)uVar7 < -0xcd3b9c36517180f) {
                if ((longlong)uVar7 < -0x1d8171a39fc6735f) {
                  if (uVar7 == 0xd0f03b24b5880f32) {
                    local_138 = (*local_210 & local_1fc) << (cVar2 - bVar1 & 0x1f);
                    if (local_240 != '\0') {
                      local_138 = (*local_210 & local_1fc) >> (bVar1 - cVar2 & 0x1f);
                    }
                    uVar6 = local_23c;
                    if (local_23e != '\0') {
                      uVar6 = local_1f0;
                    }
                    local_1ac = uVar6 | local_224;
                    local_248 = 0xd1683df988b8d15f;
                    if (local_1d0 == local_218) {
                      local_248 = 0x4b18b390016f54f2;
                    }
                    local_250 = 0xb0696276ee25fbe4;
                  }
                  else if (uVar7 == 0xdc4d4338fdbf7ba7) {
                    local_108 = local_180 & local_1d0;
                    local_c8 = (byte *)((local_208 >> (local_190 & 0x3f)) + (longlong)local_210);
                    local_100 = (byte *)((local_1d0 >> (local_190 & 0x3f)) + (longlong)local_1f8);
                    local_d0 = (byte *)((local_1e0 >> (local_190 & 0x3f)) + (longlong)local_230);
                    local_248 = 0x166965a225b06144;
                    if (local_120 == local_218) {
                      local_248 = 0x47b26e61627a9cbd;
                    }
                    local_250 = 0x21a2c28a835ec193;
                    local_60 = local_c8;
                    local_58 = local_d0;
                  }
                }
                else if (uVar7 == 0xe27e8e5c60398ca1) {
                  local_248 = 0xfdd86d2fa95fd24f;
                  if (local_23d != '\0') {
                    local_248 = 0xb56090632d2ff2f3;
                  }
                  local_250 = 0x6590ab4798a7fdc1;
                }
                else if (uVar7 == 0xeb8b4b9fb8174c14) {
                  uVar3 = *(undefined4 *)((longlong)param_4 + 4);
                  uVar4 = *(undefined4 *)(param_4 + 1);
                  uVar5 = *(undefined4 *)((longlong)param_4 + 0xc);
                  *(undefined4 *)param_1 = *(undefined4 *)param_4;
                  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
                  *(undefined4 *)(param_1 + 1) = uVar4;
                  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
                  local_248 = 0xd2a274d57a27d176;
                  local_250 = 0x4c216c924fea2f3b;
                }
              }
              else if ((longlong)uVar7 < -0x4e4613a6989d363) {
                if (uVar7 == 0xf32c463c9ae8e7f1) {
                  *local_150 = *local_150 & local_23c | local_1e4;
                  local_248 = 0x813f52aeb661e9bd;
                  local_250 = 0x1fbc4ae983ac17f0;
                }
                else if (uVar7 == 0xf6c58a160f73ec10) {
                  *local_150 = *local_158 << ((byte)local_1e8 & 0x1f) | local_1e4;
                  local_248 = 0xf036625b0527181f;
                  if (*local_1d8 == local_170) {
                    local_248 = 0xd62db01785aa6c3;
                  }
                  local_250 = 0x93e1c3464d97588e;
                }
              }
              else if (uVar7 == 0xfb1b9ec596762c9d) {
                uVar6 = local_23c;
                if (local_23e != '\0') {
                  uVar6 = local_1f0;
                }
                *local_230 = (uVar6 | local_224) & *local_230 | local_1bc;
                local_248 = 0x1b536a1cdfd38cd9;
                local_250 = 0x85d0725bea1e7294;
              }
              else if (uVar7 == 0xfb71d1e6ef4aaf16) {
                local_1a0 = *local_230 & local_1ac;
                local_248 = 0xf6b1191d061b207b;
                local_250 = 0x8c27088a4f4b66cc;
              }
              else if (uVar7 == 0xfcb229ba2369a016) {
                *local_b8 = *local_c0 << ((byte)local_1e8 & 0x1f) | local_19c;
                local_1a8 = *local_c0 >> ((byte)local_1b0 & 0x1f);
                local_f0 = local_b8 + 1;
                local_e8 = local_c0 + 1;
                local_248 = 0x322e7c46cf1596ae;
                if (local_e8 == local_1f8) {
                  local_248 = 0xe18baedd7f762296;
                }
                local_250 = 0xce9c55fcec7c36b8;
                local_f8 = local_b8;
                local_19c = local_1a8;
                local_c0 = local_e8;
                local_b8 = local_f0;
              }
            }
            if (-0x617ce7b8ca3201b4 < (longlong)uVar7) break;
            if ((longlong)uVar7 < -0x6ada1c2980c1499d) {
              if (uVar7 == 0x836dabe1e73ddfdc) {
                local_a0 = (local_178 >> (local_130 & 0x3f)) * 4 + *param_1;
                local_248 = 0x3c535e603cf61656;
                local_250 = 0x64cbfb9c4eeaf24c;
              }
              else if (uVar7 == 0x862da80ce33efcb0) {
                local_98 = local_d8;
                local_148 = local_e0;
                local_194 = local_1a4;
                local_78 = *local_1d8;
                local_248 = 0x725dbc4573a28616;
                if (local_78 == local_218) {
                  local_248 = 0xdb5e3853f07ab050;
                }
                local_250 = 0x45dd2014c5b74e1d;
              }
            }
            else if (uVar7 == 0x9525e3d67f3eb663) {
              *local_150 = *local_150 & local_23c | (*local_158 & local_220) << ((byte)local_1e8 & 0x1f) | local_1e4;
              local_248 = 0xc9036a0717f0fa98;
              local_250 = 0x57807240223d04d5;
            }
            else if (uVar7 == 0x9848c66831f82f8e) {
              local_120 = local_208 & local_180;
              local_248 = 0x7426d99a9cfcb994;
              if (local_120 == (local_1e0 & local_180)) {
                local_248 = 0x980882e8c15d8beb;
              }
              local_250 = 0x4445c1d03ce2f04c;
            }
            else if (uVar7 == 0x9e0178feeaac7ddf) {
              *local_148 = (local_1ec | local_23c) & local_194 | local_1c0;
              local_248 = 0x71d184a788897a77;
              local_250 = 0xef529ce0bd44843a;
            }
          }
          if ((longlong)uVar7 < -0x5411ac1a663c3b0b) break;
          if (uVar7 == 0xabee53e599c3c4f5) {
            lVar8 = local_1e0 - local_208;
            local_170 = local_128 - lVar8;
            local_1e8 = (undefined4)lVar8;
            *local_230 = *local_230 & local_224 | (*local_210 & local_1fc) << ((byte)lVar8 & 0x1f);
            local_1b0 = (undefined4)local_170;
            local_f8 = local_230;
            local_1a8 = *local_210 >> ((byte)local_170 & 0x1f);
            local_f0 = local_230 + 1;
            local_e8 = local_168;
            local_248 = 0x8bd8305b81826b7c;
            if (local_168 == local_1f8) {
              local_248 = 0x587de2c031e1df44;
            }
            local_250 = 0x776a19e1a2ebcb6a;
            local_19c = local_1a8;
            local_c0 = local_e8;
            local_b8 = local_f0;
          }
          else if (uVar7 == 0xb2775948a28eebb5) {
            local_118 = local_208 - local_1e0;
            local_110 = local_128 - local_118;
            local_1b8 = (undefined4)local_118;
            local_1ec = local_238 >> ((byte)local_118 & 0x1f);
            local_13c = local_1ec ^ local_238;
            local_1b4 = *local_230 & local_224 | (*local_210 & local_1fc) >> ((byte)local_118 & 0x1f);
            *local_230 = local_1b4;
            local_d8 = local_168;
            local_248 = 0x1152870cf1ca84ec;
            if (local_168 == local_1f8) {
              local_248 = 0xa6552ede8b4d8a2a;
            }
            local_250 = 0x207886d26873769a;
            local_e0 = local_230;
            local_1a4 = local_1b4;
          }
        }
        if (uVar7 != 0xa4a5e2fae2a4f6f9) break;
        *local_230 = *local_230 & local_224 | local_1bc;
        local_230[1] = local_230[1] & local_23c |
                       (*local_210 & local_140) >> ((char)(int)*local_1d8 - (char)local_160 & 0x1fU);
        local_248 = 0x8bda8a04e0eeed06;
        local_250 = 0x15599243d523134b;
      }
      if (uVar7 != 0xa85875efdcbd77d9) break;
      local_248 = 0xba7218406b5502e3;
      if (local_80 == local_218) {
        local_248 = 0xdc7bbdaa8e835371;
      }
      local_250 = 0x2f57fb96146bb480;
    }
  } while (uVar7 != 0x9e83184735cdfe4d);
  return param_1;
}



undefined8 FUN_1800b3200(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  bool bVar9;
  byte local_104 [12];
  undefined8 ***local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  uintptr_t local_78;
  longlong local_70;
  uint local_64;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  byte local_42;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_58 = 0xf;
  local_b0 = 0x27;
  local_42 = 0x30;
  local_a8 = 0x20;
  local_78 = 0;
  local_60 = 1;
  local_a0 = -8;
  local_70 = 0x28;
  local_50 = 10;
  local_41 = 0;
  local_98 = 0xfff;
  local_64 = 0;
  local_90 = 0xffffffffffffffe0;
  local_88 = 0xffe;
  local_80 = 0x10;
  lVar7 = (longlong)&local_c8 + 5;
  uVar5 = 0;
  uVar4 = *(ulonglong *)(param_2 + 8);
  do {
    if (uVar4 >> 0x20 == 0) {
      bVar3 = (byte)((uVar4 & 0xffffffff) % 10);
    }
    else {
      bVar3 = (byte)(uVar4 % 10);
    }
    *(byte *)(lVar7 + -1) = bVar3 | 0x30;
    uVar1 = uVar4;
    if (uVar4 >> 0x20 == 0) {
      uVar1 = uVar4 & 0xffffffff;
    }
    lVar7 = lVar7 + -1;
    uVar5 = uVar5 + 1;
    bVar9 = 9 < uVar4;
    uVar4 = uVar1 / 10;
  } while (bVar9);
  local_f8 = (undefined8 ****)0x0;
  uStack_f0 = 0;
  if ((longlong)uVar5 < 0) {
    FUN_180002ac0();
  }
  if (uVar5 < 0x10) {
    ppppuVar8 = &local_f8;
    uVar4 = local_58;
  }
  else {
    uVar1 = uVar5 | 0xf;
    uVar4 = 0x16;
    if (0x16 < uVar1) {
      uVar4 = uVar1;
    }
    if (uVar1 < 0xfff) {
      ppppuVar8 = (undefined8 ****)FUN_1801d61c8(uVar4 + 1);
      local_f8 = ppppuVar8;
    }
    else {
      pppuVar2 = (undefined8 ***)FUN_1801d61c8(uVar4 + 0x28);
      ppppuVar8 = (undefined8 ****)(local_b0 + (longlong)pppuVar2 & local_90);
      ppppuVar8[-1] = pppuVar2;
      local_f8 = ppppuVar8;
    }
  }
  local_e8 = uVar5;
  local_e0 = uVar4;
  FUN_1802079d0(ppppuVar8,lVar7,uVar5);
  *(undefined1 *)((longlong)ppppuVar8 + uVar5) = local_41;
  pbVar6 = local_104 + 1;
  uVar5 = 0;
  uVar4 = *(longlong *)(param_2 + 0x10) + local_60;
  do {
    if ((uVar4 | local_50) >> 0x20 == 0) {
      bVar3 = (byte)((uVar4 & 0xffffffff) % (local_50 & 0xffffffff));
    }
    else {
      bVar3 = (byte)(uVar4 % local_50);
    }
    pbVar6[-1] = bVar3 | local_42;
    if ((uVar4 | local_50) >> 0x20 == 0) {
      uVar1 = (uVar4 & 0xffffffff) / (local_50 & 0xffffffff);
    }
    else {
      uVar1 = uVar4 / local_50;
    }
    pbVar6 = pbVar6 + -1;
    uVar5 = uVar5 + 1;
    bVar9 = local_50 <= uVar4;
    uVar4 = uVar1;
  } while (bVar9);
  local_d8 = (undefined8 ****)0x0;
  uStack_d0 = 0;
  if ((longlong)uVar5 < (longlong)local_78) {
    FUN_180002ac0();
  }
  if (uVar5 < local_80) {
    ppppuVar8 = &local_d8;
    uVar4 = local_58;
  }
  else {
    uVar1 = local_58 | uVar5;
    uVar4 = 0x16;
    if (0x16 < uVar1) {
      uVar4 = uVar1;
    }
    if (local_88 < uVar1) {
      pppuVar2 = (undefined8 ***)FUN_1801d61c8(local_70 + uVar4);
      ppppuVar8 = (undefined8 ****)(local_b0 + (longlong)pppuVar2 & local_90);
      ppppuVar8[-1] = pppuVar2;
      local_d8 = ppppuVar8;
    }
    else {
      ppppuVar8 = (undefined8 ****)FUN_1801d61c8(local_60 + uVar4);
      local_d8 = ppppuVar8;
    }
  }
  local_c8 = uVar5;
  local_c0 = uVar4;
  FUN_1802079d0(ppppuVar8,pbVar6,uVar5);
  *(undefined1 *)((longlong)ppppuVar8 + uVar5) = local_41;
  FUN_1800b8f52(&DAT_1802a3350,&DAT_180274f75,0x14,10,&DAT_1802a335c);
  FUN_1800b8f52(&DAT_1802a3340,&DAT_180274f30,0x1f,10,&DAT_1802a334c);
  FUN_1800b41b0(param_1,&DAT_1802a3350,&local_d8,&DAT_1802a3340,&local_f8);
  if (local_58 < local_c0) {
    uVar4 = local_60 + local_c0;
    ppppuVar8 = (undefined8 ****)local_d8;
    if (local_98 < uVar4) {
      ppppuVar8 = (undefined8 ****)local_d8[-1];
      if (local_a8 <= (ulonglong)((longlong)local_d8 + (local_a0 - (longlong)ppppuVar8))) goto LAB_1800b3678;
      uVar4 = local_c0 + local_70;
    }
    thunk_FUN_1801f42e0(ppppuVar8,uVar4);
  }
  if (local_58 < local_e0) {
    uVar4 = local_60 + local_e0;
    ppppuVar8 = (undefined8 ****)local_f8;
    if (local_98 < uVar4) {
      ppppuVar8 = (undefined8 ****)local_f8[-1];
      if (local_a8 <= (ulonglong)((longlong)local_f8 + (local_a0 - (longlong)ppppuVar8))) {
LAB_1800b3678:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_64,local_78);
      }
      uVar4 = local_e0 + local_70;
    }
    thunk_FUN_1801f42e0(ppppuVar8,uVar4);
  }
  return param_1;
}



void Unwind_1800b36a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_1800b36e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  return;
}



void FUN_1800b3720(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_d9;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  size_t local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_d0 = 0x263df630a8b1f554;
  local_d8 = 0x84202274a0632430;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_d0 ^ 0x59024da350e6b642;
            uVar1 = local_d0 ^ local_d8;
            local_d8 = local_d8 ^ 0x59024da350e6b642;
            local_d0 = uVar2;
            if ((longlong)uVar1 < -0xa3a51ca7878dc1f) break;
            if ((longlong)uVar1 < -0x4e4efdba6934d54) {
              if (uVar1 == 0xf5c5ae35878723e1) {
                *local_c0 = local_98 + local_b8;
                puVar3 = param_1;
                if (local_c8 < local_58) {
                  puVar3 = (undefined8 *)*param_1;
                }
                FUN_1802079d0(local_98 + (longlong)puVar3,local_a0,local_b8);
                *(undefined1 *)((longlong)puVar3 + local_98 + local_b8) = local_d9;
                local_d0 = 0x2d8ad5924133b252;
                local_d8 = 0x291f1a41fc66696b;
              }
              else if (uVar1 == 0xf9e31f711966af44) {
                *local_c0 = local_78 + local_a8;
                puVar3 = param_1;
                if (local_c8 < local_48) {
                  puVar3 = (undefined8 *)*param_1;
                }
                FUN_1802079d0(local_78 + (longlong)puVar3,local_80,local_a8);
                *(undefined1 *)((longlong)puVar3 + local_78 + local_a8) = local_d9;
                local_d0 = 0x87315247c1d9b441;
                local_d8 = 0x383350b883d1eeaf;
              }
            }
            else if (uVar1 == 0xfb1b1024596cb2ac) {
              local_a8 = param_4[2];
              local_80 = param_4;
              if (local_c8 < (ulonglong)param_4[3]) {
                local_80 = (undefined8 *)*param_4;
              }
              local_78 = *local_c0;
              local_48 = *local_90;
              local_d0 = 0xda8557e7551aca66;
              if (local_48 - local_78 < local_a8) {
                local_d0 = 0xc3d0ed75328e6ee0;
              }
              local_d8 = 0x236648964c7c6522;
            }
            else if (uVar1 == 0x495cfd3bd55db39) {
              local_b0 = strlen(param_3);
              local_88 = *local_c0;
              local_50 = *local_90;
              local_d0 = 0x9e277b58a39ed8ef;
              if (local_50 - local_88 < local_b0) {
                local_d0 = 0x80293cbcc87fb06e;
              }
              local_d8 = 0x4050ea18d5ad07dc;
            }
            else if (uVar1 == 0x272059000c267d0b) {
              FUN_180066dd0(param_1);
              local_d0 = 0x546041673c1fdd4;
              local_d8 = 0x1d3cbc5ce9426ed;
            }
          }
          if ((longlong)uVar1 < -0x21886ebf89cc20cd) break;
          if (uVar1 == 0xde7791407633df33) {
            *local_c0 = local_88 + local_b0;
            puVar3 = param_1;
            if (local_c8 < local_50) {
              puVar3 = (undefined8 *)*param_1;
            }
            FUN_1802079d0(local_88 + (longlong)puVar3,param_3,local_b0);
            *(undefined1 *)((longlong)puVar3 + local_88 + local_b0) = local_d9;
            local_d0 = 0x39154ca948e41d50;
            local_d8 = 0xc20e5c8d1188affc;
          }
          else if (uVar1 == 0xe0b6a5e37ef20bc2) {
            FUN_180066dd0(param_1);
            local_d0 = 0xdd19f0ce1ca72c76;
            local_d8 = 0x621bf2315eaf7698;
          }
        }
        if (uVar1 != 0xa21dd44408d2d164) break;
        local_c8 = 0xf;
        local_d9 = 0;
        local_b8 = param_2[2];
        local_a0 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          local_a0 = (undefined8 *)*param_2;
        }
        local_c0 = param_1 + 2;
        local_98 = param_1[2];
        local_90 = param_1 + 3;
        local_58 = param_1[3];
        local_d0 = 0xc6034f17ce14c844;
        if (local_58 - local_98 < local_b8) {
          local_d0 = 0x14e6b82245b596ae;
        }
        local_d8 = 0x33c6e1224993eba5;
      }
      if (uVar1 != 0xc079d6a41dd2b7b2) break;
      FUN_180066dd0(param_1);
      local_d0 = 0xc51d6c5e5723da5e;
      local_d8 = 0x3e067c7a0e4f68f2;
    }
  } while (uVar1 != 0xbf0202ff42085aee);
  FUN_1800b3c90(param_1,param_5,param_6,param_7);
  return;
}



void FUN_1800b3c90(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_c1;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  size_t local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_b8 = 0xf814ef350554d2b1;
  local_c0 = 0x8d01b8b872098e43;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_b8 ^ 0x1599f8f114b680cc;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0x1599f8f114b680cc;
            local_b8 = uVar2;
            if ((longlong)uVar1 < 0x5426193ffecbe3e) break;
            if ((longlong)uVar1 < 0x3693479bd8c1d08d) {
              if (uVar1 == 0x5426193ffecbe3e) {
                FUN_180066dd0(param_1);
                local_b8 = 0x7f68bb9098e24e1b;
                local_c0 = 0xaac2f4d796a1d44b;
              }
              else if (uVar1 == 0x2de1f5d71e5b0106) {
                *local_a8 = local_88 + local_a0;
                puVar3 = param_1;
                if (local_b0 < local_58) {
                  puVar3 = (undefined8 *)*param_1;
                }
                FUN_1802079d0(local_88 + (longlong)puVar3,param_2,local_a0);
                *(undefined1 *)((longlong)puVar3 + local_88 + local_a0) = local_c1;
                local_b8 = 0xfa247209c5eaf9a6;
                local_c0 = 0x2f8e3d4ecba963f6;
              }
            }
            else if (uVar1 == 0x3693479bd8c1d08d) {
              *local_a8 = local_60 + local_90;
              puVar3 = param_1;
              if (local_b0 < local_48) {
                puVar3 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_60 + (longlong)puVar3,local_68,local_90);
              *(undefined1 *)((longlong)puVar3 + local_60 + local_90) = local_c1;
              local_b8 = 0x7ca1ee4f2fbd8ace;
              local_c0 = 0x87bf5e0f5740701c;
            }
            else if (uVar1 == 0x4288f2f43ddde073) {
              FUN_180066dd0(param_1);
              local_b8 = 0x61dc944116465544;
              local_c0 = 0x9ac224016ebbaf96;
            }
            else if (uVar1 == 0x7515578d775d5cf2) {
              local_b0 = 0xf;
              local_c1 = 0;
              local_a0 = strlen(param_2);
              local_a8 = param_1 + 2;
              local_88 = param_1[2];
              local_80 = param_1 + 3;
              local_58 = param_1[3];
              local_b8 = 0xe3a737b97fdc64f2;
              if (local_58 - local_88 < local_a0) {
                local_b8 = 0xcb04a3fd9e6bdbca;
              }
              local_c0 = 0xce46c26e618765f4;
            }
          }
          if (-0x2a55b0b8f1bc65b1 < (longlong)uVar1) break;
          if (uVar1 == 0x8614dd19a5fab214) {
            local_90 = param_4[2];
            local_68 = param_4;
            if (local_b0 < (ulonglong)param_4[3]) {
              local_68 = (undefined8 *)*param_4;
            }
            local_60 = *local_a8;
            local_48 = *local_80;
            local_b8 = 0x45cf878142d373c2;
            if (local_48 - local_60 < local_90) {
              local_b8 = 0x31d432eea7cf433c;
            }
            local_c0 = 0x735cc01a9a12a34f;
          }
          else if (uVar1 == 0xcde371e97522140e) {
            *local_a8 = local_70 + local_98;
            puVar3 = param_1;
            if (local_b0 < local_50) {
              puVar3 = (undefined8 *)*param_1;
            }
            FUN_1802079d0(local_70 + (longlong)puVar3,local_78,local_98);
            *(undefined1 *)((longlong)puVar3 + local_70 + local_98) = local_c1;
            local_b8 = 0xe47442450f4d9614;
            local_c0 = 0x62609f5caab72400;
          }
        }
        if (uVar1 != 0xd5aa4f470e439a50) break;
        local_98 = param_3[2];
        local_78 = param_3;
        if (local_b0 < (ulonglong)param_3[3]) {
          local_78 = (undefined8 *)*param_3;
        }
        local_70 = *local_a8;
        local_50 = *local_80;
        local_b8 = 0x4e4ad8c04c864a5f;
        if (local_50 - local_70 < local_98) {
          local_b8 = 0x7c2c25329979f05d;
        }
        local_c0 = 0x83a9a92939a45e51;
      }
      if (uVar1 != 0xff858c1ba0ddae0c) break;
      FUN_180066dd0(param_1);
      local_b8 = 0x3992c4311f4f135a;
      local_c0 = 0xbf861928bab5a14e;
    }
  } while (uVar1 != 0xfb1eb04078fdfad2);
  return;
}



undefined8 * FUN_1800b41b0(undefined8 *param_1,char *param_2,longlong param_3,char *param_4,longlong param_5)

{
  longlong lVar1;
  size_t sVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  lVar1 = *(longlong *)(param_3 + 0x10);
  sVar3 = strlen(param_4);
  uVar4 = sVar3 + sVar2 + lVar1 + *(longlong *)(param_5 + 0x10);
  uVar5 = 0xf;
  if (0xf < uVar4) {
    FUN_180002240(param_1,uVar4);
    param_1[2] = 0;
    uVar5 = param_1[3];
  }
  sVar2 = strlen(param_2);
  if (uVar5 < sVar2) {
    FUN_180066dd0(param_1,sVar2);
  }
  else {
    param_1[2] = sVar2;
    puVar6 = param_1;
    if (0xf < uVar5) {
      puVar6 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar6,param_2,sVar2);
    *(undefined1 *)((longlong)puVar6 + sVar2) = 0;
  }
  FUN_1800b4320(param_1,param_3,param_4,param_5);
  return param_1;
}



void Unwind_1800b42e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x38));
  return;
}



void FUN_1800b4320(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_c1;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  size_t local_98;
  ulonglong local_90;
  undefined8 *local_88;
  longlong local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_b8 = 0x1aeaf92a4fe29ac8;
  local_c0 = 0x2d8732b6e2050f3c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_b8 ^ 0xee293d0940e01140;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0xee293d0940e01140;
            local_b8 = uVar2;
            if ((longlong)uVar1 < -0x76a27f99bf0f2e1) break;
            if ((longlong)uVar1 < 0x376dcb9cade795f4) {
              if (uVar1 == 0xf895d806640f0d1f) {
                local_98 = strlen(param_3);
                local_70 = *local_a8;
                local_50 = *local_78;
                local_b8 = 0xe8f7ff3bff40766;
                if (local_50 - local_70 < local_98) {
                  local_b8 = 0x1beba3cefa9fcde3;
                }
                local_c0 = 0xa46124e81e516ca8;
              }
              else if (uVar1 == 0xf929222f99045816) {
                FUN_180066dd0(param_1);
                local_b8 = 0x4c76b670c4e2c104;
                local_c0 = 0xb4e36e76a0edcc1b;
              }
            }
            else if (uVar1 == 0x3de7ab107217a27b) {
              *local_a8 = local_60 + local_90;
              puVar3 = param_1;
              if (local_b0 < local_48) {
                puVar3 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_60 + (longlong)puVar3,local_68,local_90);
              *(undefined1 *)((longlong)puVar3 + local_60 + local_90) = local_c1;
              local_b8 = 0x87ce50ccfd01d67c;
              local_c0 = 0x21fad9641eb89fea;
            }
            else if (uVar1 == 0x3d92a569ca3298c7) {
              local_90 = param_4[2];
              local_68 = param_4;
              if (local_b0 < (ulonglong)param_4[3]) {
                local_68 = (undefined8 *)*param_4;
              }
              local_60 = *local_a8;
              local_48 = *local_78;
              local_b8 = 0x6ca02fd492216bae;
              if (local_48 - local_60 < local_90) {
                local_b8 = 0x8f38a86ac2b93f4d;
              }
              local_c0 = 0x514784c4e036c9d5;
            }
            else if (uVar1 == 0x376dcb9cade795f4) {
              local_b0 = 0xf;
              local_c1 = 0;
              local_a0 = param_2[2];
              local_88 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                local_88 = (undefined8 *)*param_2;
              }
              local_a8 = param_1 + 2;
              local_80 = param_1[2];
              local_78 = param_1 + 3;
              local_58 = param_1[3];
              local_b8 = 0x1dd50a217c7f7e4f;
              if (local_58 - local_80 < local_a0) {
                local_b8 = 0x1a930362cc682f9;
              }
              local_c0 = 0xf8801219b5c2daef;
            }
          }
          if ((longlong)uVar1 < -0x2180d351dd700968) break;
          if (uVar1 == 0xde7f2cae228ff698) {
            FUN_180066dd0(param_1);
            local_b8 = 0xdf1f5a8b2f11c7b7;
            local_c0 = 0x792bd323cca88e21;
          }
          else if (uVar1 == 0xe5551838c9bda4a0) {
            *local_a8 = local_80 + local_a0;
            puVar3 = param_1;
            if (local_b0 < local_58) {
              puVar3 = (undefined8 *)*param_1;
            }
            FUN_1802079d0(local_80 + (longlong)puVar3,local_88,local_a0);
            *(undefined1 *)((longlong)puVar3 + local_80 + local_a0) = local_c1;
            local_b8 = 0x33b6acf19a5d9c13;
            local_c0 = 0xcb2374f7fe52910c;
          }
        }
        if (uVar1 != 0xaaee5b1ba1a56bce) break;
        *local_a8 = local_70 + local_98;
        puVar3 = param_1;
        if (local_b0 < local_50) {
          puVar3 = (undefined8 *)*param_1;
        }
        FUN_1802079d0(local_70 + (longlong)puVar3,param_3,local_98);
        *(undefined1 *)((longlong)puVar3 + local_70 + local_98) = local_c1;
        local_b8 = 0xcc0a38cedba4c465;
        local_c0 = 0xf1989da711965ca2;
      }
      if (uVar1 != 0xbf8a8726e4cea14b) break;
      FUN_180066dd0(param_1);
      local_b8 = 0x2fac42b204dd272d;
      local_c0 = 0x123ee7dbceefbfea;
    }
  } while (uVar1 != 0xa63489a8e3b94996);
  return;
}



undefined8 * FUN_1800b4840(undefined8 *param_1,undefined8 *param_2,char *param_3,longlong param_4,undefined8 param_5)

{
  size_t sVar1;
  size_t sVar2;
  char *_Str;
  undefined8 *puVar3;
  ulonglong uVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  _Str = (char *)*param_2;
  sVar1 = strlen(_Str);
  sVar2 = strlen(param_3);
  uVar4 = 0xf;
  if (0xf < sVar2 + *(longlong *)(param_4 + 0x10) + sVar1 + 1) {
    FUN_180002240(param_1);
    param_1[2] = 0;
    _Str = (char *)*param_2;
    uVar4 = param_1[3];
  }
  sVar1 = strlen(_Str);
  if (uVar4 < sVar1) {
    FUN_180066dd0(param_1,sVar1);
  }
  else {
    param_1[2] = sVar1;
    puVar3 = param_1;
    if (0xf < uVar4) {
      puVar3 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar3,_Str,sVar1);
    *(undefined1 *)((longlong)puVar3 + sVar1) = 0;
  }
  FUN_1800b5070(param_1,param_3,param_4,param_5);
  return param_1;
}



void Unwind_1800b4980(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x30));
  return;
}



undefined8 * FUN_1800b49b0(undefined8 *param_1,char *param_2,undefined8 *param_3)

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



void Unwind_1800b4b20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_1800b4b50(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 local_c2;
  undefined1 local_c1;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  size_t local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong *local_80;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_b8 = 0x3a5c28a39dd6971c;
  local_c0 = 0x60215aca12d26533;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_b8 ^ 0x5a774c9fc59b625a;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0x5a774c9fc59b625a;
            local_b8 = uVar3;
            if ((longlong)uVar1 < 0x2d0c246d3316701) break;
            if ((longlong)uVar1 < 0x2956b8fa051cdf73) {
              if (uVar1 == 0x2d0c246d3316701) {
                *local_b0 = local_78 + local_90;
                puVar2 = param_1;
                if (local_a8 < local_50) {
                  puVar2 = (undefined8 *)*param_1;
                }
                *(undefined1 *)((longlong)puVar2 + local_78) = local_c1;
                *(undefined1 *)((longlong)puVar2 + local_78 + local_90) = local_c2;
                local_b8 = 0x43ad248105a378fb;
                local_c0 = 0x9692a4d8b0a520b2;
              }
              else if (uVar1 == 0xba31bd211af61c5) {
                *local_b0 = local_88 + local_a0;
                puVar2 = param_1;
                if (local_a8 < local_58) {
                  puVar2 = (undefined8 *)*param_1;
                }
                FUN_1802079d0(local_88 + (longlong)puVar2,param_2,local_a0);
                *(undefined1 *)((longlong)puVar2 + local_88 + local_a0) = local_c2;
                local_b8 = 0x69da329774d2510d;
                local_c0 = 0xee54b8a775288d10;
              }
            }
            else if (uVar1 == 0x2956b8fa051cdf73) {
              FUN_180066dd0(param_1);
              local_b8 = 0xf77e4de5e8d896d5;
              local_c0 = 0x65f66e30234b2d54;
            }
            else if (uVar1 == 0x5bbfdf5daa83bf59) {
              FUN_180066dd0(param_1);
              local_b8 = 0x9e30820e8a675144;
              local_c0 = 0x19be083e8b9d8d59;
            }
            else if (uVar1 == 0x5a7d72698f04f22f) {
              local_a8 = 0xf;
              local_90 = 1;
              local_c2 = 0;
              local_a0 = strlen(param_2);
              local_b0 = param_1 + 2;
              local_88 = param_1[2];
              local_80 = param_1 + 3;
              local_58 = param_1[3];
              local_b8 = 0x77e0fd16ad561b87;
              if (local_58 - local_88 < local_a0) {
                local_b8 = 0x27fc3999167ac51b;
              }
              local_c0 = 0x7c43e6c4bcf97a42;
            }
          }
          if (-0x5089575cdcc7bbc2 < (longlong)uVar1) break;
          if (uVar1 == 0x878e8a3001fadc1d) {
            local_98 = param_3[2];
            local_70 = param_3;
            if (local_a8 < (ulonglong)param_3[3]) {
              local_70 = (undefined8 *)*param_3;
            }
            local_68 = *local_b0;
            local_48 = *local_80;
            local_b8 = 0xcf1dd2cf10143e07;
            if (local_48 - local_68 < local_98) {
              local_b8 = 0xb12cfbc3cded556;
            }
            local_c0 = 0x2244774639c20a25;
          }
          else if (uVar1 == 0x928823d5cb93bb81) {
            local_c1 = *param_4;
            local_78 = *local_b0;
            local_50 = *local_80;
            local_b8 = 0xd6da6f6f738f89b3;
            if (local_78 < local_50) {
              local_b8 = 0x7b7c058a8386aa8d;
            }
            local_c0 = 0x79acc7cc50b7cd8c;
          }
        }
        if (uVar1 != 0xaf76a8a32338443f) break;
        FUN_18006a970(param_1,local_90);
        local_b8 = 0xa2574d9bd37530fb;
        local_c0 = 0x7768cdc2667368b2;
      }
      if (uVar1 != 0xed59a58929d63422) break;
      *local_b0 = local_68 + local_98;
      puVar2 = param_1;
      if (local_a8 < local_48) {
        puVar2 = (undefined8 *)*param_1;
      }
      FUN_1802079d0(local_68 + (longlong)puVar2,local_70,local_98);
      *(undefined1 *)((longlong)puVar2 + local_68 + local_98) = local_c2;
      local_b8 = 0x6273b65c2b733cf;
      local_c0 = 0x94af18b00924884e;
    }
  } while (uVar1 != 0xd53f8059b5065849);
  return;
}



void FUN_1800b5070(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 local_c2;
  undefined1 local_c1;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  size_t local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_b8 = 0xc7231b62a0e0004b;
  local_c0 = 0x7686fdc9050b678e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_b8 ^ 0xfbefa10356bd5813;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0xfbefa10356bd5813;
            local_b8 = uVar3;
            if (0x4699c9a71f44c657 < (longlong)uVar1) break;
            if ((longlong)uVar1 < 0x37b052695a07c2ed) {
              if (uVar1 == 0xb1a5e6aba5eb67c5) {
                local_a8 = 0xf;
                local_90 = 1;
                local_c2 = 0;
                local_a0 = strlen(param_2);
                local_b0 = param_1 + 2;
                local_88 = param_1[2];
                local_80 = param_1 + 3;
                local_58 = param_1[3];
                local_b8 = 0x9afaf8bb4e9eba74;
                if (local_58 - local_88 < local_a0) {
                  local_b8 = 0x272db27be68baf1;
                }
                local_c0 = 0xd869c4a7a234d1ff;
              }
              else if (uVar1 == 0xda1b1f801c5c6b0e) {
                FUN_180066dd0(param_1);
                local_b8 = 0xda6e6551535d1b67;
                local_c0 = 0x91e2862e1bbfbb41;
              }
            }
            else if (uVar1 == 0x37b052695a07c2ed) {
              local_c1 = *param_4;
              local_68 = *local_b0;
              local_48 = *local_80;
              local_b8 = 0x129e7de2efe2961d;
              if (local_68 < local_48) {
                local_b8 = 0x18083d41b3b0471e;
              }
              local_c0 = 0x569a4ba7a7351669;
            }
            else if (uVar1 == 0x42933c1cecaa6b8b) {
              *local_b0 = local_88 + local_a0;
              puVar2 = param_1;
              if (local_a8 < local_58) {
                puVar2 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_88 + (longlong)puVar2,param_2,local_a0);
              *(undefined1 *)((longlong)puVar2 + local_88 + local_a0) = local_c2;
              local_b8 = 0xaeae9cd0f154d77b;
              local_c0 = 0xe5227fafb9b6775d;
            }
            else if (uVar1 == 0x4404364548d78074) {
              FUN_18006a970(param_1,local_90);
              local_b8 = 0xbc7df0214b5d9bdb;
              local_c0 = 0xfae4398654195d83;
            }
          }
          if ((longlong)uVar1 < 0x5f9d00ff44c9b09b) break;
          if (uVar1 == 0x5f9d00ff44c9b09b) {
            FUN_180066dd0(param_1);
            local_b8 = 0x5d6ee20dd2151b3e;
            local_c0 = 0x6adeb0648812d9d3;
          }
          else if (uVar1 == 0x71a81f42e6b3c55f) {
            *local_b0 = local_70 + local_98;
            puVar2 = param_1;
            if (local_a8 < local_50) {
              puVar2 = (undefined8 *)*param_1;
            }
            FUN_1802079d0(local_70 + (longlong)puVar2,local_78,local_98);
            *(undefined1 *)((longlong)puVar2 + local_70 + local_98) = local_c2;
            local_b8 = 0x3fc0518f89214332;
            local_c0 = 0x87003e6d32681df;
          }
        }
        if (uVar1 != 0x4b8ce37f48e2a026) break;
        local_98 = param_3[2];
        local_78 = param_3;
        if (local_a8 < (ulonglong)param_3[3]) {
          local_78 = (undefined8 *)*param_3;
        }
        local_70 = *local_b0;
        local_50 = *local_80;
        local_b8 = 0xd6fcc72e9421e346;
        if (local_50 - local_70 < local_98) {
          local_b8 = 0xf8c9d893365b9682;
        }
        local_c0 = 0xa754d86c72922619;
      }
      if (uVar1 != 0x4e9276e614855177) break;
      *local_b0 = local_68 + local_90;
      puVar2 = param_1;
      if (local_a8 < local_48) {
        puVar2 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((longlong)puVar2 + local_68) = local_c1;
      *(undefined1 *)((longlong)puVar2 + local_68 + local_90) = local_c2;
      local_b8 = 0x1df58a2aeb1244df;
      local_c0 = 0x5b6c438df4568287;
    }
  } while (uVar1 != 0x4699c9a71f44c658);
  return;
}



undefined8 FUN_1800b55a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_98;
  local_70 = 0x346b943562529bb9;
  local_78 = 0xe076f9ca81772d8e;
  while( true ) {
    while( true ) {
      uVar2 = local_70 ^ 0xf0799e296d48b4aa;
      uVar1 = local_70 ^ local_78;
      local_78 = local_78 ^ 0xf0799e296d48b4aa;
      if (uVar1 != 0xd41d6dffe325b637) break;
      *(undefined1 *)(param_1 + 0x28) = 1;
      local_70 = 0xd5b350ddef249e0d;
      if (*(char *)(param_1 + 0x29) != '\0') {
        local_70 = 0x38aadc4df21fd465;
      }
      local_78 = 0x81f304f442d3b83c;
    }
    if (uVar1 == 0x54405429adf72631) break;
    local_70 = uVar2;
    if (uVar1 == 0xb959d8b9b0cc6c59) {
      std::runtime_error::runtime_error((runtime_error *)&stack0xffffffffffffff98,param_4);
      FUN_1801dd110((runtime_error *)&stack0xffffffffffffff98,&DAT_1802536f0);
    }
  }
  if (DAT_1802a0400 == (local_30 ^ (ulonglong)auStack_98)) {
    return 0;
  }
}



longlong FUN_1800b56c0(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    uVar1 = *param_2;
    FUN_180081d80(&local_38);
    puVar3 = (undefined1 *)*param_1;
    *puVar3 = uVar1;
    uVar4 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = local_38;
    local_38 = uVar4;
    FUN_18007ff50(&local_38);
    lVar5 = *param_1;
  }
  else {
    pcVar2 = *(char **)(param_1[2] + -8);
    if (*pcVar2 == '\x02') {
      lVar5 = *(longlong *)(pcVar2 + 8);
      puVar3 = *(undefined1 **)(lVar5 + 8);
      if (puVar3 == *(undefined1 **)(lVar5 + 0x10)) {
        FUN_1800b60a0(lVar5,puVar3);
      }
      else {
        *puVar3 = *param_2;
        FUN_180081d80(puVar3 + 8);
        *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x10;
      }
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_30 = *param_2;
      FUN_180081d80(&local_28);
      puVar3 = (undefined1 *)param_1[4];
      uVar1 = *puVar3;
      *puVar3 = local_30;
      uVar4 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = local_28;
      local_30 = uVar1;
      local_28 = uVar4;
      FUN_18007ff50(&local_28);
      lVar5 = param_1[4];
    }
  }
  return lVar5;
}



void Unwind_1800b57d0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b57f0(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b5810(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  byte local_e8;
  longlong local_e0;
  ulonglong *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  uintptr_t local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_108 = 0xfa4ffff3fb286c8f;
  local_110 = 0x6e11eff561a90720;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_108 ^ 0x95e9db5983d7d41b;
            uVar1 = local_108 ^ local_110;
            local_110 = local_110 ^ 0x95e9db5983d7d41b;
            local_108 = uVar3;
            if (0x357fb852126eac0 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x63a2a4924006273e) {
              if ((longlong)uVar1 < -0x6d806ad8de8dbf2d) {
                if (uVar1 == 0x87ca062913a01b20) {
                  FUN_1802079d0(local_f8,*param_1,local_d0 - *param_1);
                  FUN_1802079d0(local_a0 + 8,param_2);
                  local_108 = 0x5f8a8ae24aaca4a0;
                  local_110 = 0x5cdd71676b8a4e61;
                }
                else if (uVar1 == 0x8ffc68e44a839f71) {
                  local_108 = 0x22ed6328fa375d84;
                  if (0x1ffffffffffffffb < local_100) {
                    local_108 = 0x76ca694abfc78502;
                  }
                  local_110 = 0xe073dd3ff186d99;
                }
              }
              else if (uVar1 == 0x927f9527217240d3) {
                local_f8 = local_c8;
                local_a0 = local_c8 + local_68;
                *(undefined8 *)(local_c8 + local_68) = *param_3;
                local_108 = 0x5e4dd26258543ccd;
                if (param_2 != *local_d8) {
                  local_108 = 0xe7294f353d59803c;
                }
                local_110 = 0x60e3491c2ef99b1c;
              }
              else if (uVar1 == 0x945e10069a816baf) {
                local_e0 = 0x27;
                local_b8 = 0;
                local_e8 = 3;
                uVar1 = *param_1;
                local_68 = param_2 - uVar1;
                local_60 = ((longlong)(param_1[1] - uVar1) >> 3) + 1;
                uVar1 = (longlong)(param_1[2] - uVar1) >> 3;
                local_100 = (uVar1 >> 1) + uVar1;
                if (local_100 <= local_60) {
                  local_100 = local_60;
                }
                if (0x1fffffffffffffff - (uVar1 >> 1) < uVar1) {
                  local_100 = 0x1fffffffffffffff;
                }
                local_108 = 0xee76e94c669efb2a;
                if (local_100 < 0x2000000000000000) {
                  local_108 = 0x2c62252ad20ad6ac;
                }
                local_110 = 0xf24a2b59c6f1841b;
                local_d8 = param_1 + 1;
                local_d0 = param_2;
                local_b0 = param_1 + 2;
              }
            }
            else if ((longlong)uVar1 < -0x44a7c72c7e92824b) {
              if (uVar1 == 0x9c5d5b6dbff9d8c2) {
                local_58 = *(ulonglong *)(local_a8 - 8);
                local_108 = 0x2a4a9de471315824;
                if (0x1f < (local_50 - local_58) - 8) {
                  local_108 = 0x3746956990998cd8;
                }
                local_110 = 0x8c1eadba11f4f16d;
              }
              else if (uVar1 == 0xa654305e60c5a949) {
                local_90 = local_48 + local_e0;
                local_108 = 0x75cdcdb25871992c;
                local_110 = 0x8b488e5f4e25797;
                local_88 = local_58;
              }
            }
            else if (uVar1 == 0xde280e7314fb52b7) {
              local_98 = local_100 << (local_e8 & 0x3f);
              local_108 = 0xd313a87bf4367f7f;
              if (local_100 != local_b8) {
                local_108 = 0x714ba2b7bcc3c09d;
              }
              local_110 = 0x416c3d5cd5443fac;
              local_c8 = 0;
            }
            else if (uVar1 == 0xbb5838d3816d7db5) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b8);
            }
          }
          if (0x3eae9b7e76ada7d0 < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x1c3cc215a06f7f31) {
            if (uVar1 == 0x357fb852126eac1) {
              local_a8 = *param_1;
              local_108 = 0x405b9bdffe3325e1;
              if (local_a8 != 0) {
                local_108 = 0x39a076f6d078f7ab;
              }
              local_110 = 0x3e32665c714ae19e;
            }
            else if (uVar1 == 0x79210aaa1321635) {
              local_88 = local_a8;
              local_90 = *local_b0 - local_a8;
              local_108 = 0x87ee99cd938c4994;
              if (local_90 < 0x1000) {
                local_108 = 0x66ca87f780e65fed;
              }
              local_110 = 0x1bb3c2a02c759156;
              local_50 = local_88;
              local_48 = local_90;
            }
          }
          else if (uVar1 == 0x2cea5efb052f301d) {
            lVar2 = FUN_1801d61c8(local_98 + local_e0);
            local_c8 = local_e0 + lVar2 & 0xffffffffffffffe0;
            *(longlong *)(local_c8 - 8) = lVar2;
            local_108 = 0x71b99473d7b9572f;
            local_110 = 0xe3c60154f6cb17fc;
          }
          else if (uVar1 == 0x30279feb6987ff31) {
            local_108 = 0x8754f92ab42dd789;
            if (local_100 < 0x200) {
              local_108 = 0x59755be6075667ff;
            }
            local_110 = 0x8a891cefeae48f8;
          }
          else if (uVar1 == 0x1c3cc215a06f7f31) goto LAB_1800b6095;
        }
        if (0x78cd549940dfe89a < (longlong)uVar1) break;
        if (uVar1 == 0x3eae9b7e76ada7d1) {
          FUN_1802079d0(local_f8);
          local_108 = 0x9eeabad448ae6143;
          local_110 = 0x9dbd415169888b82;
        }
        else if (uVar1 == 0x51ddca28f9f82f07) {
          local_c8 = FUN_1801d61c8(local_98);
          local_108 = 0x18a21d900fe5bf01;
          local_110 = 0x8add88b72e97ffd2;
        }
      }
      if (uVar1 != 0x7d794557ac93cebb) break;
      thunk_FUN_1801f42e0(local_88,local_90);
      local_108 = 0x61de68ca29fd0093;
      local_110 = 0x1fb79549a684c4ec;
    }
    if (uVar1 == 0x7e69fd838f79c47f) {
      *param_1 = local_f8;
      *local_d8 = local_f8 + local_60 * 8;
      *local_b0 = local_100 * 8 + local_f8;
      return local_a0;
    }
  } while (uVar1 != 0x78cd549940dfe89b);
LAB_1800b6095:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined1 * FUN_1800b60a0(ulonglong *param_1,undefined1 *param_2,undefined1 *param_3)

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
LAB_1800b640b:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar13 == 0) {
    uVar8 = 0;
  }
  else if (uVar13 < 0x100) {
    uVar8 = FUN_1801d61c8(uVar13 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar13) goto LAB_1800b640b;
    lVar9 = FUN_1801d61c8(uVar13 * 0x10 + 0x27);
    uVar8 = lVar9 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar9;
  }
  param_2[uVar8 - uVar3] = *param_3;
  FUN_180081d80();
  puVar14 = (undefined1 *)*param_1;
  puVar10 = (undefined1 *)param_1[1];
  if (param_2 == puVar10) {
    if (puVar14 == param_2) goto LAB_1800b632f;
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
LAB_1800b632f:
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



void Unwind_1800b6440(undefined8 param_1,longlong param_2)

{
  FUN_180080e60(param_2 + 0x28);
  return;
}



void Unwind_1800b6480(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b64b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  local_28 = 0;
  local_19 = 7;
  if (param_1[1] == param_1[2]) {
    uVar1 = *param_2;
    puVar6 = (undefined1 *)*param_1;
    *puVar6 = 7;
    local_40 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar1;
    FUN_18007ff50(&local_40);
    return *param_1;
  }
  pcVar3 = *(char **)(param_1[2] + -8);
  if (*pcVar3 == '\x02') {
    lVar4 = *(longlong *)(pcVar3 + 8);
    puVar5 = *(undefined8 **)(lVar4 + 8);
    if (puVar5 == *(undefined8 **)(lVar4 + 0x10)) {
      FUN_1800b6620();
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar1 = *param_2;
      *(undefined1 *)puVar5 = 7;
      puVar5[1] = uVar1;
      *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 0x10;
    }
    return *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  uVar1 = *param_2;
  pbVar7 = (byte *)param_1[4];
  bVar2 = *pbVar7;
  *pbVar7 = 7;
  local_38 = (ulonglong)bVar2;
  local_30 = *(undefined8 *)(pbVar7 + 8);
  *(undefined8 *)(pbVar7 + 8) = uVar1;
  FUN_18007ff50(&local_30);
  return param_1[4];
}



void Unwind_1800b65e0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b6600(void)

{
  Unwind_1801dd394();
}



undefined1 * FUN_1800b6620(ulonglong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;

  uVar4 = *param_1;
  uVar13 = ((longlong)(param_1[1] - uVar4) >> 4) + 1;
  uVar9 = (longlong)(param_1[2] - uVar4) >> 4;
  uVar14 = (uVar9 >> 1) + uVar9;
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (0xfffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar14 = 0xfffffffffffffff;
  }
  if (0xfffffffffffffff < uVar14) {
LAB_1800b693a:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar14 == 0) {
    uVar9 = 0;
  }
  else if (uVar14 < 0x100) {
    uVar9 = FUN_1801d61c8(uVar14 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar14) goto LAB_1800b693a;
    lVar10 = FUN_1801d61c8(uVar14 * 0x10 + 0x27);
    uVar9 = lVar10 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar9 - 8) = lVar10;
  }
  *(undefined8 *)(param_2 + (uVar9 - uVar4)) = 0;
  *(undefined8 *)((longlong)(param_2 + (uVar9 - uVar4)) + 8) = 0;
  uVar3 = *param_3;
  param_2[uVar9 - uVar4] = 7;
  *(undefined8 *)(param_2 + ((uVar9 + 8) - uVar4)) = uVar3;
  puVar15 = (undefined1 *)*param_1;
  puVar11 = (undefined1 *)param_1[1];
  if (param_2 == puVar11) {
    if (puVar15 == param_2) goto LAB_1800b687e;
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(puVar15 + lVar10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(uVar9 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar15[lVar10] = 0;
      *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
      lVar8 = lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    } while (puVar15 + lVar8 != param_2);
  }
  else {
    if (puVar15 != param_2) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(puVar15 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(uVar9 + lVar10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar15[lVar10] = 0;
        *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (puVar15 + lVar8 != param_2);
      puVar11 = (undefined1 *)param_1[1];
    }
    if (param_2 != puVar11) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(param_2 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(param_2 + lVar10 + (uVar9 - uVar4) + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        param_2[lVar10] = 0;
        *(undefined8 *)(param_2 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (param_2 + lVar8 != puVar11);
    }
  }
  puVar15 = (undefined1 *)*param_1;
LAB_1800b687e:
  if (puVar15 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)param_1[1];
    if (puVar15 != puVar11) {
      do {
        FUN_18007ff50(puVar15 + 8,*puVar15);
        puVar15 = puVar15 + 0x10;
      } while (puVar15 != puVar11);
      puVar15 = (undefined1 *)*param_1;
    }
    uVar12 = param_1[2] - (longlong)puVar15;
    puVar11 = puVar15;
    if (0xfff < uVar12) {
      puVar11 = *(undefined1 **)(puVar15 + -8);
      if ((undefined1 *)0x1f < puVar15 + (-8 - (longlong)puVar11)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar11,uVar12);
  }
  *param_1 = uVar9;
  param_1[1] = uVar13 * 0x10 + uVar9;
  param_1[2] = uVar14 * 0x10 + uVar9;
  return param_2 + (uVar9 - uVar4);
}



void Unwind_1800b6970(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b6990(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  local_28 = 0;
  local_19 = 4;
  if (param_1[1] == param_1[2]) {
    bVar1 = *param_2;
    puVar6 = (undefined1 *)*param_1;
    *puVar6 = 4;
    local_40 = *(undefined8 *)(puVar6 + 8);
    *(ulonglong *)(puVar6 + 8) = (ulonglong)bVar1;
    FUN_18007ff50(&local_40);
    return *param_1;
  }
  pcVar3 = *(char **)(param_1[2] + -8);
  if (*pcVar3 == '\x02') {
    lVar4 = *(longlong *)(pcVar3 + 8);
    puVar5 = *(undefined8 **)(lVar4 + 8);
    if (puVar5 == *(undefined8 **)(lVar4 + 0x10)) {
      FUN_1800b6b00();
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      bVar1 = *param_2;
      *(undefined1 *)puVar5 = 4;
      puVar5[1] = (ulonglong)bVar1;
      *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 0x10;
    }
    return *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  bVar1 = *param_2;
  pbVar7 = (byte *)param_1[4];
  bVar2 = *pbVar7;
  *pbVar7 = 4;
  local_38 = (ulonglong)bVar2;
  local_30 = *(undefined8 *)(pbVar7 + 8);
  *(ulonglong *)(pbVar7 + 8) = (ulonglong)bVar1;
  FUN_18007ff50(&local_30);
  return param_1[4];
}



void Unwind_1800b6ac0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b6ae0(void)

{
  Unwind_1801dd394();
}



undefined1 * FUN_1800b6b00(ulonglong *param_1,undefined1 *param_2,byte *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;

  uVar4 = *param_1;
  uVar13 = ((longlong)(param_1[1] - uVar4) >> 4) + 1;
  uVar9 = (longlong)(param_1[2] - uVar4) >> 4;
  uVar14 = (uVar9 >> 1) + uVar9;
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (0xfffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar14 = 0xfffffffffffffff;
  }
  if (0xfffffffffffffff < uVar14) {
LAB_1800b6e1a:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar14 == 0) {
    uVar9 = 0;
  }
  else if (uVar14 < 0x100) {
    uVar9 = FUN_1801d61c8(uVar14 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar14) goto LAB_1800b6e1a;
    lVar10 = FUN_1801d61c8(uVar14 * 0x10 + 0x27);
    uVar9 = lVar10 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar9 - 8) = lVar10;
  }
  *(undefined8 *)(param_2 + (uVar9 - uVar4)) = 0;
  *(undefined8 *)((longlong)(param_2 + (uVar9 - uVar4)) + 8) = 0;
  bVar3 = *param_3;
  param_2[uVar9 - uVar4] = 4;
  *(ulonglong *)(param_2 + ((uVar9 + 8) - uVar4)) = (ulonglong)bVar3;
  puVar15 = (undefined1 *)*param_1;
  puVar11 = (undefined1 *)param_1[1];
  if (param_2 == puVar11) {
    if (puVar15 == param_2) goto LAB_1800b6d5e;
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(puVar15 + lVar10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(uVar9 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar15[lVar10] = 0;
      *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
      lVar8 = lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    } while (puVar15 + lVar8 != param_2);
  }
  else {
    if (puVar15 != param_2) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(puVar15 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(uVar9 + lVar10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar15[lVar10] = 0;
        *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (puVar15 + lVar8 != param_2);
      puVar11 = (undefined1 *)param_1[1];
    }
    if (param_2 != puVar11) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(param_2 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(param_2 + lVar10 + (uVar9 - uVar4) + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        param_2[lVar10] = 0;
        *(undefined8 *)(param_2 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (param_2 + lVar8 != puVar11);
    }
  }
  puVar15 = (undefined1 *)*param_1;
LAB_1800b6d5e:
  if (puVar15 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)param_1[1];
    if (puVar15 != puVar11) {
      do {
        FUN_18007ff50(puVar15 + 8,*puVar15);
        puVar15 = puVar15 + 0x10;
      } while (puVar15 != puVar11);
      puVar15 = (undefined1 *)*param_1;
    }
    uVar12 = param_1[2] - (longlong)puVar15;
    puVar11 = puVar15;
    if (0xfff < uVar12) {
      puVar11 = *(undefined1 **)(puVar15 + -8);
      if ((undefined1 *)0x1f < puVar15 + (-8 - (longlong)puVar11)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar11,uVar12);
  }
  *param_1 = uVar9;
  param_1[1] = uVar13 * 0x10 + uVar9;
  param_1[2] = uVar14 * 0x10 + uVar9;
  return param_2 + (uVar9 - uVar4);
}



void Unwind_1800b6e50(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b6e70(longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  local_28 = 0;
  local_19 = 0;
  if (param_1[1] == param_1[2]) {
    puVar3 = (undefined1 *)*param_1;
    *puVar3 = 0;
    local_40 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = 0;
    FUN_18007ff50(&local_40);
    return *param_1;
  }
  pcVar1 = *(char **)(param_1[2] + -8);
  if (*pcVar1 == '\x02') {
    lVar2 = *(longlong *)(pcVar1 + 8);
    puVar3 = *(undefined1 **)(lVar2 + 8);
    if (puVar3 == *(undefined1 **)(lVar2 + 0x10)) {
      FUN_1800b6fc0(lVar2,puVar3,param_2);
    }
    else {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x10;
    }
    return *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  puVar3 = (undefined1 *)param_1[4];
  local_38 = *puVar3;
  *puVar3 = 0;
  local_30 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = 0;
  FUN_18007ff50(&local_30);
  return param_1[4];
}



void Unwind_1800b6f80(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b6fa0(void)

{
  Unwind_1801dd394();
}



undefined1 * FUN_1800b6fc0(ulonglong *param_1,undefined1 *param_2)

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
LAB_1800b72ba:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar13 == 0) {
    uVar8 = 0;
  }
  else if (uVar13 < 0x100) {
    uVar8 = FUN_1801d61c8(uVar13 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar13) goto LAB_1800b72ba;
    lVar9 = FUN_1801d61c8(uVar13 * 0x10 + 0x27);
    uVar8 = lVar9 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar9;
  }
  param_2[uVar8 - uVar3] = 0;
  *(undefined8 *)(param_2 + ((uVar8 + 8) - uVar3)) = 0;
  puVar14 = (undefined1 *)*param_1;
  puVar10 = (undefined1 *)param_1[1];
  if (param_2 == puVar10) {
    if (puVar14 == param_2) goto LAB_1800b71fe;
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
LAB_1800b71fe:
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



void Unwind_1800b72f0(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b7310(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  local_19 = 5;
  local_28 = 0;
  if (param_1[1] == param_1[2]) {
    uVar5 = *param_2;
    puVar6 = (undefined1 *)*param_1;
    *puVar6 = 5;
    local_40 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar5;
    FUN_18007ff50(&local_40);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -8);
  if (*pcVar2 == '\x02') {
    lVar3 = *(longlong *)(pcVar2 + 8);
    puVar4 = *(undefined8 **)(lVar3 + 8);
    if (puVar4 == *(undefined8 **)(lVar3 + 0x10)) {
      FUN_1800b7480();
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      uVar5 = *param_2;
      *(undefined1 *)puVar4 = 5;
      puVar4[1] = uVar5;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x10;
    }
    return *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  uVar5 = *param_2;
  pbVar7 = (byte *)param_1[4];
  bVar1 = *pbVar7;
  *pbVar7 = 5;
  local_38 = (ulonglong)bVar1;
  local_30 = *(undefined8 *)(pbVar7 + 8);
  *(undefined8 *)(pbVar7 + 8) = uVar5;
  FUN_18007ff50(&local_30);
  return param_1[4];
}



void Unwind_1800b7440(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b7460(void)

{
  Unwind_1801dd394();
}



undefined1 * FUN_1800b7480(ulonglong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;

  uVar3 = *param_1;
  uVar13 = ((longlong)(param_1[1] - uVar3) >> 4) + 1;
  uVar9 = (longlong)(param_1[2] - uVar3) >> 4;
  uVar14 = (uVar9 >> 1) + uVar9;
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (0xfffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar14 = 0xfffffffffffffff;
  }
  if (0xfffffffffffffff < uVar14) {
LAB_1800b779a:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar14 == 0) {
    uVar9 = 0;
  }
  else if (uVar14 < 0x100) {
    uVar9 = FUN_1801d61c8(uVar14 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar14) goto LAB_1800b779a;
    lVar10 = FUN_1801d61c8(uVar14 * 0x10 + 0x27);
    uVar9 = lVar10 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar9 - 8) = lVar10;
  }
  *(undefined8 *)(param_2 + (uVar9 - uVar3)) = 0;
  *(undefined8 *)((longlong)(param_2 + (uVar9 - uVar3)) + 8) = 0;
  uVar4 = *param_3;
  param_2[uVar9 - uVar3] = 5;
  *(undefined8 *)(param_2 + ((uVar9 + 8) - uVar3)) = uVar4;
  puVar15 = (undefined1 *)*param_1;
  puVar11 = (undefined1 *)param_1[1];
  if (param_2 == puVar11) {
    if (puVar15 == param_2) goto LAB_1800b76de;
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(puVar15 + lVar10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(uVar9 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar15[lVar10] = 0;
      *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
      lVar8 = lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    } while (puVar15 + lVar8 != param_2);
  }
  else {
    if (puVar15 != param_2) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(puVar15 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(uVar9 + lVar10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar15[lVar10] = 0;
        *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (puVar15 + lVar8 != param_2);
      puVar11 = (undefined1 *)param_1[1];
    }
    if (param_2 != puVar11) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(param_2 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(param_2 + lVar10 + (uVar9 - uVar3) + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        param_2[lVar10] = 0;
        *(undefined8 *)(param_2 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (param_2 + lVar8 != puVar11);
    }
  }
  puVar15 = (undefined1 *)*param_1;
LAB_1800b76de:
  if (puVar15 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)param_1[1];
    if (puVar15 != puVar11) {
      do {
        FUN_18007ff50(puVar15 + 8,*puVar15);
        puVar15 = puVar15 + 0x10;
      } while (puVar15 != puVar11);
      puVar15 = (undefined1 *)*param_1;
    }
    uVar12 = param_1[2] - (longlong)puVar15;
    puVar11 = puVar15;
    if (0xfff < uVar12) {
      puVar11 = *(undefined1 **)(puVar15 + -8);
      if ((undefined1 *)0x1f < puVar15 + (-8 - (longlong)puVar11)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar11,uVar12);
  }
  *param_1 = uVar9;
  param_1[1] = uVar13 * 0x10 + uVar9;
  param_1[2] = uVar14 * 0x10 + uVar9;
  return param_2 + (uVar9 - uVar3);
}



void Unwind_1800b77d0(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b77f0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_21 = 3;
  if (param_1[1] == param_1[2]) {
    uStack_40 = 0;
    uVar5 = FUN_1800813f0(param_2);
    puVar4 = (undefined1 *)*param_1;
    *puVar4 = local_21;
    uStack_40 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar5;
    FUN_18007ff50(&uStack_40);
    lVar6 = *param_1;
  }
  else {
    pcVar2 = *(char **)(param_1[2] + -8);
    if (*pcVar2 == '\x02') {
      lVar6 = *(longlong *)(pcVar2 + 8);
      puVar3 = *(undefined8 **)(lVar6 + 8);
      if (puVar3 == *(undefined8 **)(lVar6 + 0x10)) {
        FUN_1800b7a00(lVar6);
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)puVar3 = 3;
        uVar5 = FUN_1800813f0(param_2);
        puVar3[1] = uVar5;
        *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 0x10;
      }
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      uStack_30 = 0;
      local_38 = 3;
      uStack_37 = 0;
      uVar5 = FUN_1800813f0(param_2);
      puVar4 = (undefined1 *)param_1[4];
      uVar1 = *puVar4;
      *puVar4 = local_21;
      _local_38 = CONCAT71(uStack_37,uVar1);
      uStack_30 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uVar5;
      FUN_18007ff50(&uStack_30);
      lVar6 = param_1[4];
    }
  }
  return lVar6;
}



void Unwind_1800b7930(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x40);
  return;
}



void Unwind_1800b7960(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x30);
  return;
}



void Unwind_1800b7990(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b79b0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(*(undefined8 *)(param_2 + 0x28));
  return;
}



void Unwind_1800b79e0(void)

{
  Unwind_1801dd394();
}



undefined1 * FUN_1800b7a00(ulonglong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;

  uVar3 = *param_1;
  uVar15 = ((longlong)(param_1[1] - uVar3) >> 4) + 1;
  uVar8 = (longlong)(param_1[2] - uVar3) >> 4;
  uVar13 = (uVar8 >> 1) + uVar8;
  if (uVar13 <= uVar15) {
    uVar13 = uVar15;
  }
  if (0xfffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar13 = 0xfffffffffffffff;
  }
  if (0xfffffffffffffff < uVar13) {
LAB_1800b7d5a:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar13 == 0) {
    uVar8 = 0;
  }
  else if (uVar13 < 0x100) {
    uVar8 = FUN_1801d61c8(uVar13 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar13) goto LAB_1800b7d5a;
    lVar10 = FUN_1801d61c8(uVar13 * 0x10 + 0x27);
    uVar8 = lVar10 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar10;
  }
  *(undefined8 *)(param_2 + (uVar8 - uVar3)) = 0;
  *(undefined8 *)((longlong)(param_2 + (uVar8 - uVar3)) + 8) = 0;
  param_2[uVar8 - uVar3] = 3;
  uVar9 = FUN_1800813f0(param_3);
  *(undefined8 *)(param_2 + (uVar8 - uVar3) + 8) = uVar9;
  puVar14 = (undefined1 *)*param_1;
  puVar12 = (undefined1 *)param_1[1];
  if (param_2 == puVar12) {
    if (puVar14 == param_2) goto LAB_1800b7c8e;
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(puVar14 + lVar10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(uVar8 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar14[lVar10] = 0;
      *(undefined8 *)(puVar14 + lVar10 + 8) = 0;
      lVar7 = lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    } while (puVar14 + lVar7 != param_2);
  }
  else {
    if (puVar14 != param_2) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(puVar14 + lVar10);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(uVar8 + lVar10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        puVar14[lVar10] = 0;
        *(undefined8 *)(puVar14 + lVar10 + 8) = 0;
        lVar7 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (puVar14 + lVar7 != param_2);
      puVar12 = (undefined1 *)param_1[1];
    }
    if (param_2 != puVar12) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(param_2 + lVar10);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(param_2 + lVar10 + (uVar8 - uVar3) + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        param_2[lVar10] = 0;
        *(undefined8 *)(param_2 + lVar10 + 8) = 0;
        lVar7 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (param_2 + lVar7 != puVar12);
    }
  }
  puVar14 = (undefined1 *)*param_1;
LAB_1800b7c8e:
  if (puVar14 != (undefined1 *)0x0) {
    puVar12 = (undefined1 *)param_1[1];
    if (puVar14 != puVar12) {
      do {
        FUN_18007ff50(puVar14 + 8,*puVar14);
        puVar14 = puVar14 + 0x10;
      } while (puVar14 != puVar12);
      puVar14 = (undefined1 *)*param_1;
    }
    uVar11 = param_1[2] - (longlong)puVar14;
    puVar12 = puVar14;
    if (0xfff < uVar11) {
      puVar12 = *(undefined1 **)(puVar14 + -8);
      if ((undefined1 *)0x1f < puVar14 + (-8 - (longlong)puVar12)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = uVar11 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar12,uVar11);
  }
  *param_1 = uVar8;
  param_1[1] = uVar15 * 0x10 + uVar8;
  param_1[2] = uVar13 * 0x10 + uVar8;
  return param_2 + (uVar8 - uVar3);
}



void Unwind_1800b7d90(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(*(undefined8 *)(param_2 + 0x68));
  FUN_180080e60(param_2 + 0x30);
  return;
}



void Unwind_1800b7dd0(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b7e00(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  local_28 = 0;
  local_19 = 6;
  if (param_1[1] == param_1[2]) {
    uVar5 = *param_2;
    puVar6 = (undefined1 *)*param_1;
    *puVar6 = 6;
    local_40 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar5;
    FUN_18007ff50(&local_40);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -8);
  if (*pcVar2 == '\x02') {
    lVar3 = *(longlong *)(pcVar2 + 8);
    puVar4 = *(undefined8 **)(lVar3 + 8);
    if (puVar4 == *(undefined8 **)(lVar3 + 0x10)) {
      FUN_1800b7f70();
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      uVar5 = *param_2;
      *(undefined1 *)puVar4 = 6;
      puVar4[1] = uVar5;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x10;
    }
    return *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  uVar5 = *param_2;
  pbVar7 = (byte *)param_1[4];
  bVar1 = *pbVar7;
  *pbVar7 = 6;
  local_38 = (ulonglong)bVar1;
  local_30 = *(undefined8 *)(pbVar7 + 8);
  *(undefined8 *)(pbVar7 + 8) = uVar5;
  FUN_18007ff50(&local_30);
  return param_1[4];
}



void Unwind_1800b7f30(void)

{
  Unwind_1801dd394();
}



void Unwind_1800b7f50(void)

{
  Unwind_1801dd394();
}



undefined1 * FUN_1800b7f70(ulonglong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;

  uVar3 = *param_1;
  uVar13 = ((longlong)(param_1[1] - uVar3) >> 4) + 1;
  uVar9 = (longlong)(param_1[2] - uVar3) >> 4;
  uVar14 = (uVar9 >> 1) + uVar9;
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (0xfffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar14 = 0xfffffffffffffff;
  }
  if (0xfffffffffffffff < uVar14) {
LAB_1800b828a:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar14 == 0) {
    uVar9 = 0;
  }
  else if (uVar14 < 0x100) {
    uVar9 = FUN_1801d61c8(uVar14 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar14) goto LAB_1800b828a;
    lVar10 = FUN_1801d61c8(uVar14 * 0x10 + 0x27);
    uVar9 = lVar10 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar9 - 8) = lVar10;
  }
  *(undefined8 *)(param_2 + (uVar9 - uVar3)) = 0;
  *(undefined8 *)((longlong)(param_2 + (uVar9 - uVar3)) + 8) = 0;
  uVar4 = *param_3;
  param_2[uVar9 - uVar3] = 6;
  *(undefined8 *)(param_2 + ((uVar9 + 8) - uVar3)) = uVar4;
  puVar15 = (undefined1 *)*param_1;
  puVar11 = (undefined1 *)param_1[1];
  if (param_2 == puVar11) {
    if (puVar15 == param_2) goto LAB_1800b81ce;
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(puVar15 + lVar10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(uVar9 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar15[lVar10] = 0;
      *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
      lVar8 = lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    } while (puVar15 + lVar8 != param_2);
  }
  else {
    if (puVar15 != param_2) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(puVar15 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(uVar9 + lVar10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar15[lVar10] = 0;
        *(undefined8 *)(puVar15 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (puVar15 + lVar8 != param_2);
      puVar11 = (undefined1 *)param_1[1];
    }
    if (param_2 != puVar11) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(param_2 + lVar10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(param_2 + lVar10 + (uVar9 - uVar3) + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        param_2[lVar10] = 0;
        *(undefined8 *)(param_2 + lVar10 + 8) = 0;
        lVar8 = lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (param_2 + lVar8 != puVar11);
    }
  }
  puVar15 = (undefined1 *)*param_1;
LAB_1800b81ce:
  if (puVar15 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)param_1[1];
    if (puVar15 != puVar11) {
      do {
        FUN_18007ff50(puVar15 + 8,*puVar15);
        puVar15 = puVar15 + 0x10;
      } while (puVar15 != puVar11);
      puVar15 = (undefined1 *)*param_1;
    }
    uVar12 = param_1[2] - (longlong)puVar15;
    puVar11 = puVar15;
    if (0xfff < uVar12) {
      puVar11 = *(undefined1 **)(puVar15 + -8);
      if ((undefined1 *)0x1f < puVar15 + (-8 - (longlong)puVar11)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar11,uVar12);
  }
  *param_1 = uVar9;
  param_1[1] = uVar13 * 0x10 + uVar9;
  param_1[2] = uVar14 * 0x10 + uVar9;
  return param_2 + (uVar9 - uVar3);
}



void Unwind_1800b82c0(void)

{
  Unwind_1801dd394();
}



longlong FUN_1800b82e0(longlong *param_1,char *param_2)

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

  local_a0 = 0x6d450b547e3b722;
  local_a8 = 0x7478c29afe1f5e5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar6 = local_a0 ^ 0xdfd60b42c75675c1;
          uVar3 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0xdfd60b42c75675c1;
          local_a0 = uVar6;
          if ((longlong)uVar3 < 0x193dc9ce80242c7) break;
          if (uVar3 == 0x225e3707f33bb0b2) {
            local_a0 = 0xe49b5f89ba4d3dc5;
            local_a8 = 0x1671e9874263eec2;
            local_80 = local_88;
          }
          else if (uVar3 == 0xc9d0aa8f2b72081) {
            uVar3 = *(ulonglong *)(local_68 + 0x30);
            if (local_90 < *(ulonglong *)(local_68 + 0x38)) {
              pvVar7 = *(void **)(local_68 + 0x20);
            }
            else {
              pvVar7 = (void *)(local_68 + 0x20);
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
            local_78 = local_68;
            if (bVar1) {
              lVar5 = 0x10;
              local_78 = local_70;
            }
            local_68 = *(longlong *)(local_68 + lVar5);
            local_a0 = 0x600982a24db82952;
            if (*(char *)(local_68 + 0x19) != local_a9) {
              local_a0 = 0x9b88f4d995375e21;
            }
            local_a8 = 0x6c94880abf0f09d3;
            local_70 = local_78;
          }
          else if (uVar3 == 0x193dc9ce80242c7) {
            local_90 = 0xf;
            local_a9 = '\0';
            local_94 = 0;
            local_88 = *param_1;
            local_50 = *(longlong *)(local_88 + 8);
            local_a0 = 0xd6fc0decdd74723a;
            if (*(char *)(local_50 + 0x19) != '\0') {
              local_a0 = 0x9b10e06877abb0d3;
            }
            local_a8 = 0x6c0c9cbb5d93e721;
            local_78 = local_88;
          }
        }
        if ((longlong)uVar3 < -0x97d5114fa9a1a09) break;
        if (uVar3 == 0xf682aeeb0565e5f7) {
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
          local_a0 = 0x4d90bed625c0e405;
          if (!bVar1) {
            local_a0 = 0x9d243fdf2ed587b0;
          }
          local_a8 = 0xbf7a08d8ddee3702;
          local_80 = local_60;
        }
        else if (uVar3 == 0xf71c7cd32a3857f2) {
          local_60 = local_78;
          local_a0 = 0xa176605d9f8a5f33;
          if (*(char *)(local_78 + 0x19) != local_a9) {
            local_a0 = 0x75aaf9b169d40a76;
          }
          local_a8 = 0x57f4ceb69aefbac4;
        }
      }
      if (uVar3 != 0xbaf0915780e7951b) break;
      local_48 = strlen(param_2);
      local_a0 = 0x9956899eacc606d2;
      local_a8 = 0x95cb83365e712653;
      local_70 = local_88;
      local_68 = local_50;
    }
  } while (uVar3 != 0xf2eab60ef82ed307);
  return local_80;
}



longlong FUN_1800b86f0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *_Buf1;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong _Size;
  char local_b1;
  ulonglong local_b0;
  ulonglong local_a8;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  ulonglong local_50;
  undefined8 *local_48;

  local_a8 = 0x60a62c5e3a2f2fb2;
  local_b0 = 0x82b26e976dd2346e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_a8 ^ 0xfc24841eb18691ba;
          uVar3 = local_a8 ^ local_b0;
          local_b0 = local_b0 ^ 0xfc24841eb18691ba;
          local_a8 = uVar5;
          if ((longlong)uVar3 < -0x437e37724089e316) break;
          if (uVar3 == 0xbc81c88dbf761cea) {
            uVar3 = *(ulonglong *)(local_68 + 0x30);
            if (local_98 < *(ulonglong *)(local_68 + 0x38)) {
              pvVar6 = *(void **)(local_68 + 0x20);
            }
            else {
              pvVar6 = (void *)(local_68 + 0x20);
            }
            uVar5 = param_2[2];
            _Buf1 = param_2;
            if (local_98 < (ulonglong)param_2[3]) {
              _Buf1 = (undefined8 *)*param_2;
            }
            _Size = uVar5;
            if (uVar3 < uVar5) {
              _Size = uVar3;
            }
            iVar2 = memcmp(_Buf1,pvVar6,_Size);
            bVar1 = uVar3 <= uVar5;
            if (iVar2 != local_9c) {
              bVar1 = -1 < iVar2;
            }
            local_a8 = 0xa7ad8379d8e26f11;
            if (!bVar1) {
              local_a8 = 0x831aa061fcb5e8bd;
            }
            local_b0 = 0x27eb9e94c4a48611;
            local_88 = local_68;
          }
          else if (uVar3 == 0x39b59cbd8557de22) {
            uVar3 = *(ulonglong *)(local_78 + 0x30);
            if (local_98 < *(ulonglong *)(local_78 + 0x38)) {
              pvVar6 = *(void **)(local_78 + 0x20);
            }
            else {
              pvVar6 = (void *)(local_78 + 0x20);
            }
            uVar5 = uVar3;
            if (local_50 < uVar3) {
              uVar5 = local_50;
            }
            iVar2 = memcmp(pvVar6,local_48,uVar5);
            bVar1 = uVar3 < local_50;
            if (iVar2 != local_9c) {
              bVar1 = iVar2 < local_9c;
            }
            lVar4 = 0;
            local_70 = local_78;
            if (bVar1) {
              lVar4 = 0x10;
              local_70 = local_80;
            }
            local_78 = *(longlong *)(local_78 + lVar4);
            local_a8 = 0xd5da9417974ee288;
            if (*(char *)(local_78 + 0x19) != local_b1) {
              local_a8 = 0x67da890596fae4d5;
            }
            local_b0 = 0xec6f08aa12193caa;
            local_80 = local_70;
          }
          else if (uVar3 == 0xe21442c957fd1bdc) {
            local_98 = 0xf;
            local_b1 = '\0';
            local_9c = 0;
            local_90 = *param_1;
            local_58 = *(longlong *)(local_90 + 8);
            local_a8 = 0xfd5220831c67f56e;
            if (*(char *)(local_58 + 0x19) != '\0') {
              local_a8 = 0xc6e1331c74423ac0;
            }
            local_b0 = 0x4d54b2b3f0a1e2bf;
            local_70 = local_90;
          }
        }
        if ((longlong)uVar3 < -0x5b0ec10ac7ee9154) break;
        if (uVar3 == 0xa4f13ef538116eac) {
          local_a8 = 0x76e6194b24a29e3e;
          local_b0 = 0xf6a004a638e4773e;
          local_88 = local_90;
        }
        else if (uVar3 == 0xb0069230ecc617d1) {
          local_50 = param_2[2];
          local_48 = param_2;
          if (local_98 < (ulonglong)param_2[3]) {
            local_48 = (undefined8 *)*param_2;
          }
          local_a8 = 0x5ee3bfd0918d346;
          local_b0 = 0x3c5ba7408c4f0d64;
          local_78 = local_58;
          local_80 = local_90;
        }
      }
      if (uVar3 != 0x8bb581af84e3d87f) break;
      local_68 = local_70;
      local_a8 = 0x9255040b6855d56d;
      if (*(char *)(local_70 + 0x19) != local_b1) {
        local_a8 = 0x8a25f273ef32a72b;
      }
      local_b0 = 0x2ed4cc86d723c987;
    }
  } while (uVar3 != 0x80461ded1c46e900);
  return local_88;
}



longlong FUN_1800b8b40(longlong *param_1,char *param_2)

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

  local_a0 = 0x6c08d82b5684e694;
  local_a8 = 0x91f881d5514550a0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar6 = local_a0 ^ 0x88cef4ca7f5e659d;
          uVar3 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0x88cef4ca7f5e659d;
          local_a0 = uVar6;
          if (0x15d48599dbf6c1d1 < (longlong)uVar3) break;
          if (uVar3 == 0x869a1637e4aa2e94) {
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
            local_a0 = 0xfe82d1aa980cc8cc;
            if (!bVar1) {
              local_a0 = 0xaa1e1dda6c963704;
            }
            local_a8 = 0x83b857efc7b37317;
            local_80 = local_60;
          }
          else if (uVar3 == 0xfdf059fe07c1b634) {
            local_90 = 0xf;
            local_a9 = '\0';
            local_94 = 0;
            local_88 = *param_1;
            local_50 = *(longlong *)(local_88 + 8);
            local_a0 = 0xb29bf7875ca7dcd3;
            if (*(char *)(local_50 + 0x19) != '\0') {
              local_a0 = 0x586d3e221238882d;
            }
            local_a8 = 0x4db9bbbbc9ce49ff;
            local_78 = local_88;
          }
          else if (uVar3 == 0xff224c3c9569952c) {
            local_48 = strlen(param_2);
            local_a0 = 0xc78ece23f6ff83e1;
            local_a8 = 0xdc93a82b7cf3d4e4;
            local_70 = local_88;
            local_68 = local_50;
          }
        }
        if (0x29a64a35ab254412 < (longlong)uVar3) break;
        if (uVar3 == 0x15d48599dbf6c1d2) {
          local_60 = local_78;
          local_a0 = 0xf0a119ba88ed3fc4;
          if (*(char *)(local_78 + 0x19) != local_a9) {
            local_a0 = 0x5f9d45b8c7625543;
          }
          local_a8 = 0x763b0f8d6c471150;
        }
        else if (uVar3 == 0x1b1d66088a0c5705) {
          uVar3 = *(ulonglong *)(local_68 + 0x30);
          if (local_90 < *(ulonglong *)(local_68 + 0x38)) {
            pvVar7 = *(void **)(local_68 + 0x20);
          }
          else {
            pvVar7 = (void *)(local_68 + 0x20);
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
          local_78 = local_68;
          if (bVar1) {
            lVar5 = 0x10;
            local_78 = local_70;
          }
          local_68 = *(longlong *)(local_68 + lVar5);
          local_a0 = 0x1061c33de8f60d56;
          if (*(char *)(local_68 + 0x19) != local_a9) {
            local_a0 = 0x1ea820acb90c9b81;
          }
          local_a8 = 0xb7ca53562fa5a53;
          local_70 = local_78;
        }
      }
      if (uVar3 != 0x29a64a35ab254413) break;
      local_a0 = 0x2ed45207433e6f80;
      local_a8 = 0x53eed4421c81d45b;
      local_80 = local_88;
    }
  } while (uVar3 != 0x7d3a86455fbfbbdb);
  return local_80;
}



void FUN_1800b8f52(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x759f15727c0ef8ac;
  local_68 = 0xf812b0374d2a64;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xef08157e96290b23;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xef08157e96290b23;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x4d3eb810b1670e28) break;
          if (uVar1 == 0x4d3eb810b1670e28) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x195f0398594501a8;
            local_68 = 0xeb790de7398aa87c;
          }
          else if (uVar1 == 0x7b281f0985879a31) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x17695e330f27074b;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x7498f60868368fec;
            }
            local_68 = 0x5a57e623be400963;
          }
          else if (uVar1 == 0x756707c24b43d2c8) {
            local_60 = 0xaf531a437e35086e;
            if (*param_5 == 1) {
              local_60 = 0x5581f02729f25fdc;
            }
            local_68 = 0xd47b054afbb2925f;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0xdd9f1809f30562c) break;
        if (uVar1 == 0xf2260e7f60cfa9d4) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0x81abcaa20c5fc523;
          if (local_54 == param_4) {
            local_60 = 0x3b921f66195c7804;
          }
          local_68 = 0xfa83d5ab89d85f12;
        }
        else if (uVar1 == 0x2ecf102bd676868f) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x6ef11ea5a61f0fdf;
          local_68 = 0x9cd710dac6d0a60b;
        }
      }
      if (uVar1 != 0xc111cacd90842716) break;
      *param_5 = 1;
      local_60 = 0xce87ec9bb7980d28;
      local_68 = 0x4f7d19f665d8c0ab;
    }
  } while (uVar1 != 0x81faf56dd240cd83);
  return;
}



void FUN_1800b9206(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort local_72;
  short local_70;
  ushort local_6e;
  ushort local_6c;
  ushort local_6a;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0x8a9fc7afb45bcffb;
  local_68 = 0x669fedd9779b98f1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x3f2f8ef07044bca;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x3f2f8ef07044bca;
          local_60 = uVar2;
          if (-0x331cf5f934fd1d4b < (longlong)uVar1) break;
          if (uVar1 == 0x81db008000a990ea) {
            *param_5 = 1;
            local_60 = 0x86ad9bc8bd5c318c;
            local_68 = 0x4a4e91ce765ed33a;
          }
          else if (uVar1 == 0x939addbf7e5a0c9c) {
            local_6c = -(local_70 - local_6a ^ local_72);
            local_60 = 0x262b672bb28b914d;
            local_68 = 0x67ad08593977e14d;
          }
          else if (uVar1 == 0xb42f56f317b31112) {
            local_6c = ~(local_70 + local_6a ^ local_72);
            local_60 = 0x27835b89943df445;
            local_68 = 0x660534fb1fc18445;
          }
        }
        if ((longlong)uVar1 < -0x13ffd5893c3fa8f6) break;
        if (uVar1 == 0x41866f728bfc7000) {
          local_6e = local_6c ^ local_72;
          *(ushort *)(param_1 + (longlong)(int)local_4c * 2) = local_6e;
          local_54 = local_4c + 1;
          local_60 = 0xd6af41d153bc51bb;
          if (local_54 == param_4) {
            local_60 = 0x8498b008a6837f93;
          }
          local_68 = 0x543b088a62aef79;
        }
        else if (uVar1 == 0xec002a76c3c0570a) {
          local_60 = 0x7d5c630165c8d428;
          if (*param_5 == 1) {
            local_60 = 0x6253985e5b5c885c;
          }
          local_68 = 0xaeb09258905e6aea;
          local_54 = 0;
          local_6e = 0;
          local_48 = (int)(param_3 * 2) + param_2;
        }
      }
      if (uVar1 != 0xd3ecf159f596bec2) break;
      local_6a = local_6e;
      local_4c = local_54;
      local_72 = *(ushort *)(param_2 + (longlong)(int)(local_54 % param_3) * 2);
      local_70 = *(short *)(local_48 + (int)(local_54 * 2));
      local_60 = 0x68e7dd887cce1848;
      if (((local_54 % param_3) * (uint)local_72 & 1) == 0) {
        local_60 = 0x4f5256c4152705c6;
      }
      local_68 = 0xfb7d0037029414d4;
    }
  } while (uVar1 != 0xcce30a06cb02e2b6);
  return;
}



void FUN_1800b94e0(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xa42952862850e62d;
  local_50 = 0xaf5dba7bc6074456;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc642953d83ddb331;
        if (uVar1 != 0x100b23526caf1ef) break;
        FUN_1800b8f52(&DAT_1802a209c,&DAT_180271da3,0x16,5,&DAT_1802a20a4);
        _DAT_1802a34d8 = &DAT_1802a209c;
        FUN_1800b8f52(&DAT_1802a20a8,&DAT_180271dce,0x1a,7,&DAT_1802a20b0);
        _DAT_1802a34e0 = &DAT_1802a20a8;
        FUN_1800b8f52(&DAT_1802a20b4,&DAT_180271e03,0x1a,6,&DAT_1802a20bc);
        _DAT_1802a34e8 = &DAT_1802a20b4;
        FUN_1800b8f52(&DAT_1802a20c0,&DAT_180271e34,0x1e,7,&DAT_1802a20c8);
        _DAT_1802a34f0 = &DAT_1802a20c0;
        FUN_1800b8f52(&DAT_1802a20cc,&DAT_180271e72,0x15,8,&DAT_1802a20d4);
        _DAT_1802a34f8 = &DAT_1802a20cc;
        FUN_1800b8f52(&DAT_1802a20f4,&DAT_180271f17,0x1b,7,&DAT_1802a20fc);
        _DAT_1802a3500 = &DAT_1802a20f4;
        _DAT_1802a3508 = &DAT_1802a20f4;
        _DAT_1802a3510 = &DAT_1802a20f4;
        FUN_1800b8f52(&DAT_1802a20d8,&DAT_180271ea3,0x1a,7,&DAT_1802a20e0);
        _DAT_1802a3518 = &DAT_1802a20d8;
        FUN_1800b8f52(&DAT_1802a20e4,&DAT_180271ee2,0x18,10,&DAT_1802a20f0);
        _DAT_1802a3520 = &DAT_1802a20e4;
        DAT_1802a3528 = 1;
        local_48 = 0x963380f8de3f0b5c;
        local_50 = 0xcfcbd1783938fa91;
      }
      if (uVar1 != 0xb74e8fdee57a27b) break;
      local_48 = 0xc8dbbffe9e5a3a8;
      if (DAT_1802a3528 == 1) {
        local_48 = 0x5475584a2828a38a;
      }
      local_50 = 0xd8d09cacf2f5247;
    }
    local_48 = local_48 ^ 0xc642953d83ddb331;
  } while (uVar1 != 0x59f85180e707f1cd);
  return;
}



void FUN_1800b97b0(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x194cb1986e60c4af;
  local_50 = 0x2b1c034e3ba1c6a1;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb1e696db43dd166c;
        if (uVar1 != 0x3250b2d655c1020e) break;
        local_48 = 0xaf0899ec2d0c55c6;
        if (DAT_1802a3578 == 1) {
          local_48 = 0x16057a57a5ca4f78;
        }
        local_50 = 0xed119a0a1d7fc6b6;
      }
      if (uVar1 != 0x421903e630739370) break;
      FUN_1800b8f52(&DAT_1802a20a8,&DAT_180271dce,0x1a,7,&DAT_1802a20b0);
      _DAT_1802a3530 = &DAT_1802a20a8;
      FUN_1800b8f52(&DAT_1802a20f4,&DAT_180271f17,0x1b,7,&DAT_1802a20fc);
      _DAT_1802a3538 = &DAT_1802a20f4;
      FUN_1800b8f52(&DAT_1802a20c0,&DAT_180271e34,0x1e,7,&DAT_1802a20c8);
      _DAT_1802a3540 = &DAT_1802a20c0;
      FUN_1800b8f52(&DAT_1802a20cc,&DAT_180271e72,0x15,8,&DAT_1802a20d4);
      _DAT_1802a3548 = &DAT_1802a20cc;
      _DAT_1802a3550 = &DAT_1802a20f4;
      _DAT_1802a3558 = &DAT_1802a20f4;
      _DAT_1802a3560 = &DAT_1802a20f4;
      FUN_1800b8f52(&DAT_1802a20d8,&DAT_180271ea3,0x1a,7,&DAT_1802a20e0);
      _DAT_1802a3568 = &DAT_1802a20d8;
      FUN_1800b8f52(&DAT_1802a20e4,&DAT_180271ee2,0x18,10,&DAT_1802a20f0);
      _DAT_1802a3570 = &DAT_1802a20e4;
      DAT_1802a3578 = 1;
      local_48 = 0x70fa0f8cdc59a753;
      local_50 = 0x8beeefd164ec2e9d;
    }
    local_48 = local_48 ^ 0xb1e696db43dd166c;
  } while (uVar1 != 0xfb14e05db8b589ce);
  return;
}



void FUN_1800b9a10(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x819d08c803fb5a6;
  local_50 = 0x59fa40c1ff3ed6b7;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x5f77c47581e14d30;
        if (uVar1 != 0x3282bd437368bd92) break;
        FUN_1800b8f52(&DAT_1802a33c4,&DAT_180275105,0x16,0x10,&DAT_1802a33d4);
        _DAT_1802a3580 = &DAT_1802a33c4;
        FUN_1800b8f52(&DAT_1802a33d8,&DAT_18027514a,0x1d,0xd,&DAT_1802a33e8);
        _DAT_1802a3588 = &DAT_1802a33d8;
        FUN_1800b8f52(&DAT_1802a33ec,&DAT_180275188,0x12,0xe,&DAT_1802a33fc);
        _DAT_1802a3590 = &DAT_1802a33ec;
        FUN_1800b8f52(&DAT_1802a3400,&DAT_1802751c6,0x17,0xd,&DAT_1802a3410);
        _DAT_1802a3598 = &DAT_1802a3400;
        FUN_1800b8f52(&DAT_1802a3414,&DAT_180275204,0x16,0xf,&DAT_1802a3424);
        _DAT_1802a35a0 = &DAT_1802a3414;
        FUN_1800b8f52(&DAT_1802a3428,&DAT_18027523a,0x11,0xf,&DAT_1802a3438);
        _DAT_1802a35a8 = &DAT_1802a3428;
        _DAT_1802a35b0 = &DAT_1802a3428;
        _DAT_1802a35b8 = &DAT_1802a3428;
        FUN_1800b8f52(&DAT_1802a343c,&DAT_180275273,0x1f,4,&DAT_1802a3440);
        _DAT_1802a35c0 = &DAT_1802a343c;
        FUN_1800b8f52(&DAT_1802a3444,&DAT_1802752b1,0x13,4,&DAT_1802a3448);
        _DAT_1802a35c8 = &DAT_1802a3444;
        FUN_1800b8f52(&DAT_1802a344c,&DAT_1802752e7,0x1b,4,&DAT_1802a3450);
        _DAT_1802a35d0 = &DAT_1802a344c;
        FUN_1800b8f52(&DAT_1802a3454,&DAT_180275316,0x16,4,&DAT_1802a3458);
        _DAT_1802a35d8 = &DAT_1802a3454;
        FUN_1800b8f52(&DAT_1802a345c,&DAT_180275346,0x10,4,&DAT_1802a3460);
        _DAT_1802a35e0 = &DAT_1802a345c;
        FUN_1800b8f52(&DAT_1802a3464,&DAT_180275374,0x12,4,&DAT_1802a3468);
        _DAT_1802a35e8 = &DAT_1802a3464;
        FUN_1800b8f52(&DAT_1802a34b0,&DAT_18027544e,0x12,0xe,&DAT_1802a34c0);
        _DAT_1802a35f0 = &DAT_1802a34b0;
        FUN_1800b8f52(&DAT_1802a3480,&DAT_1802753ce,0x17,0xd,&DAT_1802a3490);
        _DAT_1802a35f8 = &DAT_1802a3480;
        FUN_1800b8f52(&DAT_1802a3494,&DAT_18027540c,0x17,0x17,&DAT_1802a34ac);
        _DAT_1802a3600 = &DAT_1802a3494;
        DAT_1802a3608 = 1;
        local_48 = 0x800d1932bd8381a7;
        local_50 = 0xa9f1fd4ac9669f08;
      }
      if (uVar1 != 0x51e3904d7f016311) break;
      local_48 = 0xb4ed6962effbcd99;
      if (DAT_1802a3608 == 1) {
        local_48 = 0xaf933059e8766ea4;
      }
      local_50 = 0x866fd4219c93700b;
    }
    local_48 = local_48 ^ 0x5f77c47581e14d30;
  } while (uVar1 != 0x29fce47874e51eaf);
  return;
}



void FUN_1800b9e50(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xb332b44ab4216b5b;
  local_50 = 0x9ca63b95d87fd825;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xe423d89e24a2e59b;
        if (uVar1 != 0x2a14520d338b3fb5) break;
        FUN_1800b8f52(&DAT_1802a33d8,&DAT_18027514a,0x1d,0xd,&DAT_1802a33e8);
        _DAT_1802a3610 = &DAT_1802a33d8;
        FUN_1800b8f52(&DAT_1802a33ec,&DAT_180275188,0x12,0xe,&DAT_1802a33fc);
        _DAT_1802a3618 = &DAT_1802a33ec;
        FUN_1800b8f52(&DAT_1802a3400,&DAT_1802751c6,0x17,0xd,&DAT_1802a3410);
        _DAT_1802a3620 = &DAT_1802a3400;
        FUN_1800b8f52(&DAT_1802a3414,&DAT_180275204,0x16,0xf,&DAT_1802a3424);
        _DAT_1802a3628 = &DAT_1802a3414;
        FUN_1800b8f52(&DAT_1802a3428,&DAT_18027523a,0x11,0xf,&DAT_1802a3438);
        _DAT_1802a3630 = &DAT_1802a3428;
        _DAT_1802a3638 = &DAT_1802a3428;
        _DAT_1802a3640 = &DAT_1802a3428;
        FUN_1800b8f52(&DAT_1802a343c,&DAT_180275273,0x1f,4,&DAT_1802a3440);
        _DAT_1802a3648 = &DAT_1802a343c;
        FUN_1800b8f52(&DAT_1802a3444,&DAT_1802752b1,0x13,4,&DAT_1802a3448);
        _DAT_1802a3650 = &DAT_1802a3444;
        FUN_1800b8f52(&DAT_1802a344c,&DAT_1802752e7,0x1b,4,&DAT_1802a3450);
        _DAT_1802a3658 = &DAT_1802a344c;
        FUN_1800b8f52(&DAT_1802a3454,&DAT_180275316,0x16,4,&DAT_1802a3458);
        _DAT_1802a3660 = &DAT_1802a3454;
        FUN_1800b8f52(&DAT_1802a345c,&DAT_180275346,0x10,4,&DAT_1802a3460);
        _DAT_1802a3668 = &DAT_1802a345c;
        FUN_1800b8f52(&DAT_1802a3464,&DAT_180275374,0x12,4,&DAT_1802a3468);
        _DAT_1802a3670 = &DAT_1802a3464;
        FUN_1800b8f52(&DAT_1802a346c,&DAT_18027539c,0x10,0xe,&DAT_1802a347c);
        _DAT_1802a3678 = &DAT_1802a346c;
        FUN_1800b8f52(&DAT_1802a3480,&DAT_1802753ce,0x17,0xd,&DAT_1802a3490);
        _DAT_1802a3680 = &DAT_1802a3480;
        FUN_1800b8f52(&DAT_1802a3494,&DAT_18027540c,0x17,0x17,&DAT_1802a34ac);
        _DAT_1802a3688 = &DAT_1802a3494;
        DAT_1802a3690 = 1;
        local_48 = 0xa42a9532fe6add98;
        local_50 = 0x35c7c8e26d603672;
      }
      if (uVar1 != 0x2f948fdf6c5eb37e) break;
      local_48 = 0xf6bda39797db4c1c;
      if (DAT_1802a3690 == 1) {
        local_48 = 0x4d44ac4a375a9843;
      }
      local_50 = 0xdca9f19aa45073a9;
    }
    local_48 = local_48 ^ 0xe423d89e24a2e59b;
  } while (uVar1 != 0x91ed5dd0930aebea);
  return;
}



undefined * FUN_1800ba260(void)

{
  undefined4 local_18;
  undefined1 local_11;
  undefined8 local_10;

  local_10 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3710) {
    FUN_1801d62d8(&DAT_1802a3710);
    if (DAT_1802a3710 == -1) {
      local_18 = 0;
      FUN_1800bd480(&DAT_1802a3698,&local_18,&local_11);
      _DAT_1802a36d8 = 0;
      _DAT_1802a36e0 = 0;
      uRam00000001802a36e8 = 0;
      _DAT_1802a36f0 = 0;
      uRam00000001802a36f8 = 0;
      _DAT_1802a3700 = 0;
      uRam00000001802a3708 = 0;
      atexit((_func_5014 *)&LAB_1800baf20);
      _Init_thread_footer(&DAT_1802a3710);
      return &DAT_1802a3698;
    }
  }
  return &DAT_1802a3698;
}



void Unwind_1800ba330(void)

{
  FUN_1801d6230(&DAT_1802a3710);
  return;
}



void FUN_1800ba360(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_188;
  ulonglong local_180;
  uint local_178;
  int local_174;
  ulonglong local_170;
  uintptr_t local_168;
  longlong local_160;
  longlong local_158;
  ulonglong local_150;
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;

  local_180 = 0x188c7fc17e935092;
  local_188 = 0x435f5df98dffb105;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar6 = local_180 ^ 0xb57e9213adbc2105;
              uVar5 = local_180 ^ local_188;
              local_188 = local_188 ^ 0xb57e9213adbc2105;
              local_180 = uVar6;
              if (0x542c05df9b03f35 < (longlong)uVar5) break;
              if ((longlong)uVar5 < -0x474f8a87ad580cd8) {
                if ((longlong)uVar5 < -0x5ce1518d485e8be2) {
                  if (uVar5 == 0x8a6fd3fa36cbef56) {
                    local_70 = (undefined8 *)(param_1 + 0x18);
                    local_128 = *(longlong *)(param_1 + 0x18);
                    local_180 = 0xc1b1828334073b5d;
                    if (local_128 == 0) {
                      local_180 = 0x69ea79e303cd57ed;
                    }
                    local_188 = 0x91b0632857fd2fb3;
                  }
                  else if (uVar5 == 0x9ca4c00ea7ab8ab2) {
                    thunk_FUN_1801f42e0(local_f0,local_f8);
                    *local_d8 = 0;
                    local_d8[1] = 0;
                    local_d8[2] = 0;
                    local_180 = 0xdb4da687553a0375;
                    local_188 = 0x870b2c59ff168529;
                  }
                  else if (uVar5 == 0x9eb74517da4199ed) {
                    local_108 = (longlong *)*local_108;
                    FUN_1800be7d0(local_130);
                    local_180 = 0x3003d46e2f7b0b38;
                    if (local_108 == (longlong *)0x0) {
                      local_180 = 0x108ec56d8a4d8333;
                    }
                    local_188 = 0xaeb49179f53a92d5;
                  }
                }
                else if (uVar5 == 0xa31eae72b7a1741e) {
                  local_90 = *(longlong *)(local_68 + -8);
                  local_180 = 0xc6381f8be75d60e0;
                  if ((ulonglong)((local_a8 + local_158) - local_90) < local_150) {
                    local_180 = 0xc93f66ef9784c698;
                  }
                  local_188 = 0x3d73acc186d8c830;
                }
                else if (uVar5 == 0xa7d9ef5818927943) {
                  local_a8 = local_120;
                  local_118 = *local_80 - local_120;
                  local_180 = 0xca1f475c069bdd52;
                  if (local_170 < local_118) {
                    local_180 = 0x6c432973488a967a;
                  }
                  local_188 = 0xcf5d8701ff2be264;
                  local_110 = local_120;
                  local_a0 = local_118;
                  local_68 = local_a8;
                }
                else if (uVar5 == 0xb59d5d33fc8204a0) {
                  local_100 = local_60 + 0x30;
                  local_180 = 0x234e4b5e4693061e;
                  if (local_100 == local_78) {
                    local_180 = 0x1ce4b635473fab2a;
                  }
                  local_188 = 0x5e6f85541b09d9c7;
                }
              }
              else if ((longlong)uVar5 < -0x13c170f4ee12a591) {
                if ((longlong)uVar5 < -0x3d86e16537123b4a) {
                  if (uVar5 == 0xb8b0757852a7f328) {
                    (**(code **)(*local_148 + 8))();
                    local_180 = 0x387b17a546425d36;
                    local_188 = 0x8de64a96bac05996;
                  }
                  else if (uVar5 == 0xbe3a54147f7711e6) {
                    thunk_FUN_1801f42e0(*local_130,0x30);
                    return;
                  }
                }
                else if (uVar5 == 0xc2791e9ac8edc4b6) {
                  (**(code **)*local_148)(local_148);
                  LOCK();
                  piVar1 = (int *)((longlong)local_148 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  local_180 = 0xbee56a619eee8607;
                  if (iVar2 == local_174) {
                    local_180 = 0xb3c8422a30cb718f;
                  }
                  local_188 = 0xb783752626c82a7;
                }
                else if (uVar5 == 0xc747ffe8f5c57d68) {
                  local_88 = *(longlong *)(local_140 + -8);
                  local_180 = 0xa73f26bd42383270;
                  if ((ulonglong)((local_b8 + local_158) - local_88) < local_150) {
                    local_180 = 0xe531a35fc4adecf5;
                  }
                  local_188 = 0xaf450fcd838e2514;
                }
              }
              else if ((longlong)uVar5 < -0x7a5e534abcf87a2) {
                if (uVar5 == 0xf44cca2e115c0ea8) {
                  local_118 = local_a0 + local_160;
                  local_110 = local_90;
                  local_180 = 0x819025b11b77933c;
                  local_188 = 0x84d2e5ece2c7ac0a;
                }
                else if (uVar5 == 0xec3e8f0b11ed5a6f) goto LAB_1800baec6;
              }
              else if (uVar5 == 0xf85a1acb5430785e) {
                local_130 = (undefined8 *)(param_1 + 8);
                plVar3 = *(longlong **)(param_1 + 8);
                *(undefined8 *)plVar3[1] = 0;
                local_108 = (longlong *)*plVar3;
                local_180 = 0x8fd0081bc882861b;
                if (local_108 == (longlong *)0x0) {
                  local_180 = 0xaf5d19186db40e10;
                }
                local_188 = 0x11674d0c12c31ff6;
              }
              else if (uVar5 == 0x276ee56dd6eb4d4) {
                LOCK();
                plVar3 = local_148 + 1;
                lVar4 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                local_180 = 0xa897c53457d6e21;
                if ((int)lVar4 == local_174) {
                  local_180 = 0x7d6d3ffa7112ae37;
                }
                local_188 = 0xbf142160b9ff6a81;
              }
              else if (uVar5 == 0xfb4bb34a6185a8d0) goto LAB_1800baec6;
            }
            if ((longlong)uVar5 < 0x4a74ac924723c9e1) break;
            if ((longlong)uVar5 < 0x5c468adeaa2c865c) {
              if (uVar5 == 0x4a74ac924723c9e1) {
                local_f8 = local_b0 + local_160;
                local_180 = 0xf6255f920c09d57c;
                local_188 = 0x6a819f9caba25fce;
                local_f0 = local_88;
              }
              else if (uVar5 == 0x5001e1ab63fa14ee) {
                local_c8 = local_128;
                local_e8 = *(longlong *)(param_1 + 0x28) - local_128;
                local_180 = 0x44dae94e4610abf3;
                if (local_170 < local_e8) {
                  local_180 = 0x18f96e8a06e6e297;
                }
                local_188 = 0x7cf10b28f69e59c4;
                local_e0 = local_128;
                local_c0 = local_e8;
              }
              else if (uVar5 == 0x5bd32238f36ce197) {
                local_150 = 0x20;
                local_158 = -8;
                local_160 = 0x27;
                local_168 = 0;
                local_178 = 0;
                local_174 = 1;
                local_170 = 0xfff;
                local_d8 = (undefined8 *)(param_1 + 0x60);
                local_140 = *(longlong *)(param_1 + 0x60);
                local_180 = 0xd7e9213970ff0f79;
                if (local_140 == 0) {
                  local_180 = 0xb77457dd6c303730;
                }
                local_188 = 0xeb32dd03c61cb16c;
              }
            }
            else if (uVar5 == 0x5c468adeaa2c865c) {
              local_138 = (longlong *)(param_1 + 0x48);
              local_98 = *(longlong *)(param_1 + 0x48);
              local_180 = 0x1a5b36e337962727;
              if (local_98 == 0) {
                local_180 = 0xae046afe7b61e881;
              }
              local_188 = 0x246bb9044daa07d7;
            }
            else if (uVar5 == 0x640865a2f078bb53) {
              local_d0 = *(longlong *)(local_128 + -8);
              local_180 = 0xcc5baa2bb21ae9af;
              if ((ulonglong)((local_c8 + local_158) - local_d0) < local_150) {
                local_180 = 0x9058cf1aa96969;
              }
              local_188 = 0x20652520a3f7b3c0;
            }
            else if (uVar5 == 0x7d21ce0a5d9adfd9) {
              local_60 = local_100;
              local_148 = *(longlong **)(local_100 + 0x20);
              local_180 = 0xdbf99b2b70cbe8ed;
              if (local_148 == (longlong *)0x0) {
                local_180 = 0x6c12284e51275899;
              }
              local_188 = 0xd98f757dada55c39;
            }
          }
          if ((longlong)uVar5 < 0x3cdbfc3ab6e3be15) break;
          if (uVar5 == 0x3cdbfc3ab6e3be15) {
            local_b8 = local_140;
            local_f8 = *(longlong *)(param_1 + 0x70) - local_140;
            local_180 = 0xe42e323f7b9dd20a;
            if (local_170 < local_f8) {
              local_180 = 0xbfcd0dd929f325d0;
            }
            local_188 = 0x788af231dc3658b8;
            local_f0 = local_140;
            local_b0 = local_f8;
          }
          else if (uVar5 == 0x3e308fe77a3c20f0) {
            local_80 = (longlong *)(param_1 + 0x58);
            local_78 = *(longlong *)(param_1 + 0x50);
            local_180 = 0x5eafa96ae7808a00;
            if (local_98 == local_78) {
              local_180 = 0x84578838a2882c9a;
            }
            local_188 = 0x238e6760ba1a55d9;
            local_120 = local_98;
            local_100 = local_98;
          }
          else if (uVar5 == 0x428b33615c3672ed) {
            local_120 = *local_138;
            local_180 = 0x91ab4764133d3631;
            local_188 = 0x3672a83c0baf4f72;
          }
        }
        if ((longlong)uVar5 < 0x20f57defb95edaa9) break;
        if (uVar5 == 0x20f57defb95edaa9) {
          local_e8 = local_c0 + local_160;
          local_180 = 0x359325be585b6f0f;
          local_188 = 0xdb8c7d8e8d59d38;
          local_e0 = local_d0;
        }
        else if (uVar5 == 0x382be266b08ef237) {
          thunk_FUN_1801f42e0(local_e0,local_e8);
          *local_70 = 0;
          local_70[1] = 0;
          local_70[2] = 0;
          local_180 = 0xce490fa30c4a6c4a;
          local_188 = 0x36131568587a1414;
        }
      }
      if (uVar5 != 0x542c05df9b03f36) break;
      thunk_FUN_1801f42e0(local_110,local_118);
      *local_138 = 0;
      local_138[1] = 0;
      local_138[2] = 0;
      local_180 = 0xe5ad441def5d77e3;
      local_188 = 0x6fc297e7d99698b5;
    }
  } while (uVar5 != 0x87a2970c1b61764);
LAB_1800baec6:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_178,local_168);
}



void FUN_1800baf30(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_50 [2];
  longlong local_40;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_40 = 0;
  local_30 = 1;
  local_38 = param_3;
  local_2c = param_2;
  if (*(int *)(param_1 + 0x40) < 1) {
    FUN_1800c1d50(param_1,local_50,&local_2c);
    lVar9 = *(longlong *)(local_50[0] + 0x18);
    uVar7 = *(longlong *)(local_50[0] + 0x20) - lVar9;
    if (local_40 < (longlong)uVar7) {
      if (uVar7 >> 0x20 == 0) {
        uVar7 = uVar7 & 0xffffffff;
      }
      uVar7 = uVar7 / 0x28;
      do {
        uVar8 = uVar7 >> 1;
        uVar7 = (uVar8 ^ 0xffffffffffffffff) + uVar7;
        lVar6 = lVar9 + 0x28 + uVar8 * 0x28;
        if (*(int *)(lVar9 + 8 + uVar8 * 0x28) < *(int *)(local_38 + 1)) {
          uVar7 = uVar8;
          lVar6 = lVar9;
        }
        lVar9 = lVar6;
      } while (local_40 < (longlong)uVar7);
    }
    FUN_1800bfdc0(local_50[0] + 0x18,local_50);
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x50);
    if (puVar4 == *(undefined4 **)(param_1 + 0x58)) {
      FUN_1800bee40(param_1 + 0x48,puVar4,&local_2c);
    }
    else {
      *puVar4 = param_2;
      *(undefined8 *)(puVar4 + 2) = *param_3;
      puVar4[4] = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 6) = param_3[2];
      *(undefined8 *)(puVar4 + 8) = param_3[3];
      param_3[2] = 0;
      param_3[3] = 0;
      *(undefined8 *)(puVar4 + 10) = param_3[4];
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 0x30;
    }
  }
  plVar5 = (longlong *)local_38[3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == local_30) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_30) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



void Unwind_1800bb0f0(undefined8 param_1,longlong param_2)

{
  FUN_1800bb120(*(undefined8 *)(param_2 + 0x40));
  return;
}



void FUN_1800bb120(longlong param_1)

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

  local_58 = 0xa3e5cc9b7168938a;
  local_60 = 0x11e8d43c024c0f55;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0x4610cd8df010471d;
          if ((longlong)uVar5 < 0x4738abad299639e3) break;
          if (uVar5 == 0x4738abad299639e3) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_58 = 0x6331415026839353;
            if (iVar3 == local_4c) {
              local_58 = 0xb20b13e1c4d2f498;
            }
            local_60 = 0xf89dbbc22daa32f8;
          }
          else {
            local_58 = local_58 ^ 0x4610cd8df010471d;
            if (uVar5 == 0x4a96a823e978c660) {
              (**(code **)(*local_48 + 8))();
              local_58 = 0x605542ede3b3801e;
              local_60 = 0xfbf9b87fe89a21b5;
            }
          }
        }
        if (uVar5 != 0xb20d18a773249cdf) break;
        local_4c = 1;
        local_48 = *(longlong **)(param_1 + 0x18);
        local_58 = 0x67ab53382b3da021;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0x4999c1a76c987035;
        }
        local_60 = 0xd2353b3567b1d19e;
      }
      if (uVar5 != 0xb59e680d4c8c71bf) break;
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_58 = 0x9b553537981ef8e1;
      if ((int)lVar4 == local_4c) {
        local_58 = 0x47c16408baa160a9;
      }
      local_60 = 0xf9cfa59337594a;
    }
    local_58 = local_58 ^ 0x4610cd8df010471d;
  } while (uVar5 != 0x9bacfa920b29a1ab);
  return;
}



void FUN_1800bb310(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_190;
  ulonglong local_188;
  int local_17c;
  longlong *local_178;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;

  local_188 = 0x4519e4652c504260;
  local_190 = 0xb1dd295313e63300;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar9 = local_188 ^ 0xb6fbf134ef164c10;
                uVar8 = local_188 ^ local_190;
                local_190 = local_190 ^ 0xb6fbf134ef164c10;
                local_188 = uVar9;
                if ((longlong)uVar8 < -0xbe3f8b6c873e052) break;
                if ((longlong)uVar8 < 0x1760b30040b135e8) {
                  if ((longlong)uVar8 < -0x2dd3f9b34103fc9) {
                    if ((longlong)uVar8 < -0x453fbbe9d44f434) {
                      if (uVar8 == 0xf41c0749378c1fae) {
                        (**(code **)*local_168)(local_168);
                        LOCK();
                        piVar1 = (int *)((longlong)local_168 + 0xc);
                        iVar3 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        local_188 = 0x116fc12a31778802;
                        if (iVar3 == local_17c) {
                          local_188 = 0xa5e5c65619f3a227;
                        }
                        local_190 = 0xfde4e9c92b0c647b;
                      }
                      else if (uVar8 == 0xf4c4cd363fb67160) {
                        local_17c = 1;
                        local_188 = 0x3a38c517e6172559;
                        if (0 < *(int *)(param_1 + 0x40)) {
                          local_188 = 0xa100a78e44ae971;
                        }
                        local_190 = 0x38da340c7176130a;
                      }
                    }
                    else if (uVar8 == 0xfbac044162bb0bcc) {
                      *local_140 = param_2;
                      *local_b0 = *local_b0 + 8;
                      local_188 = 0x103c10fa80adf1f5;
                      local_190 = 0xdaf2f78d152bb344;
                    }
                    else if (uVar8 == 0xfc583ed1ce39d7c1) {
                      local_148 = local_90 + 5;
                      local_188 = 0x3df5d6d3fd9e8d4;
                      if (local_148 == local_178) {
                        local_188 = 0x3d9e943d892760f8;
                      }
                      local_190 = 0xe4c8c4cd853e53e5;
                      local_138 = local_148;
                    }
                  }
                  else if ((longlong)uVar8 < 0x2e2f11b97613653) {
                    if (uVar8 == 0xfd22c064cbefc037) {
                      local_a8 = (longlong *)*local_150;
                      local_110 = local_178;
                      local_188 = 0xf6c2b1a696414c79;
                      if (local_a8 == local_178) {
                        local_188 = 0x614a7da8bec0ad59;
                      }
                      local_190 = 0x7d89145ff6fb044d;
                      local_108 = local_80;
                      local_e8 = local_110;
                      local_e0 = local_108;
                    }
                    else if (uVar8 == 0xfd577029bfcaee42) {
                      local_70 = local_f0;
                      local_150 = local_f0 + 4;
                      local_178 = (longlong *)local_f0[4];
                      local_148 = (longlong *)local_f0[3];
                      local_188 = 0x4ad5f1ecf4d7f3ab;
                      if (local_148 == local_178) {
                        local_188 = 0x749438bc42297b87;
                      }
                      local_190 = 0xadc2684c4e30489a;
                      local_138 = local_148;
                    }
                  }
                  else if (uVar8 == 0x2e2f11b97613653) {
                    local_98 = *(longlong **)(param_1 + 8);
                    local_f0 = (longlong *)*local_98;
                    local_188 = 0x206f3014903cf81;
                    if (local_f0 == local_98) {
                      local_188 = 0x293141fe236f7ec4;
                    }
                    local_190 = 0xff518328f6c921c3;
                  }
                  else if (uVar8 == 0xf90fca6677b2168) {
                    local_e8 = (longlong *)*local_150;
                    local_188 = 0x576b6fb513467c7c;
                    local_190 = 0x4ba806425b7dd568;
                    local_e0 = local_a0;
                  }
                }
                else if ((longlong)uVar8 < 0x549dd18dab902451) {
                  if ((longlong)uVar8 < 0x2c3f7a187b6faf5c) {
                    if (uVar8 == 0x1760b30040b135e8) {
                      local_118 = local_120;
                      local_d0 = local_128;
                      local_c8 = local_130;
                      local_188 = 0x444a5217b01f1bbf;
                      if (*local_130 == param_2) {
                        local_188 = 0x999c5bd99faaba0;
                      }
                      local_190 = 0xd09df917fb75c261;
                      local_d8 = local_118;
                    }
                    else if (uVar8 == 0x1cc369f7483ba914) {
                      local_60 = local_e8;
                      local_188 = 0xe2c550e8550e1a15;
                      if (local_e0 == local_e8) {
                        local_188 = 0x2e0cd2aca9033bb0;
                      }
                      local_68 = local_e0;
                      local_190 = 0x966f4e85a068f9af;
                      local_f8 = local_e0;
                    }
                  }
                  else if (uVar8 == 0x2c3f7a187b6faf5c) {
                    (**(code **)*local_158)(local_158);
                    LOCK();
                    piVar1 = (int *)((longlong)local_158 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    local_188 = 0x4821408c1ac30809;
                    if (iVar3 == local_17c) {
                      local_188 = 0x481ec90d5bc70544;
                    }
                    local_190 = 0xe89033dde14066aa;
                  }
                  else if (uVar8 == 0x32ca3e74953cfa7b) {
                    local_b0 = (longlong *)(param_1 + 0x68);
                    local_140 = *(longlong **)(param_1 + 0x68);
                    local_188 = 0xf5cfec96dc4d10ba;
                    if (local_140 == *(longlong **)(param_1 + 0x70)) {
                      local_188 = 0x5afe395a15663f27;
                    }
                    local_190 = 0xe63e8d7bef61b76;
                    local_b8 = param_2;
                  }
                }
                else if ((longlong)uVar8 < 0x6c3e2f5d4b751a83) {
                  if (uVar8 == 0x549dd18dab902451) {
                    FUN_1800c14d0(param_1 + 0x60,local_140,&local_b8);
                    local_188 = 0xf00c7bc5563b47f9;
                    local_190 = 0x3ac29cb2c3bd0548;
                  }
                  else if (uVar8 == 0x58012f9f32ffc65c) {
                    (**(code **)(*local_168 + 8))();
                    local_188 = 0x1f9aa0c8c1303d16;
                    local_190 = 0xf311882bdb4bd16f;
                  }
                }
                else if (uVar8 == 0x6c3e2f5d4b751a83) {
                  local_f0 = (longlong *)*local_70;
                  local_188 = 0xb288598e80251b27;
                  if (local_f0 == local_98) {
                    local_188 = 0x99bfeb71ea49aa62;
                  }
                  local_190 = 0x4fdf29a73feff565;
                }
                else if (uVar8 == 0x74aa1e6df566e3ba) {
                  local_78 = local_f8;
                  local_158 = (longlong *)local_f8[3];
                  local_188 = 0xd16e5e8631806771;
                  if (local_158 == (longlong *)0x0) {
                    local_188 = 0x9a87f6935833acd3;
                  }
                  local_190 = 0x3a3685c2a3b0c270;
                }
                else if (uVar8 == 0x7c11103013bccba3) {
                  (**(code **)*local_160)(local_160);
                  LOCK();
                  piVar1 = (int *)((longlong)local_160 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  local_188 = 0xb69550b08ff7ccbf;
                  if (iVar3 == local_17c) {
                    local_188 = 0xb3b09f6eba34db13;
                  }
                  local_190 = 0x3c23b10433a86801;
                }
              }
              if (-0x40cfd95bf5dad939 < (longlong)uVar8) break;
              if ((longlong)uVar8 < -0x6b2854ffb4952622) {
                if ((longlong)uVar8 < -0x706cd19576634cee) {
                  if (uVar8 == 0x8ab6e1b4bc5fa4be) {
                    local_88[4] = local_c0[4];
                    local_108 = local_88 + 5;
                    local_110 = local_c0 + 5;
                    local_188 = 0x6f1029905da29d47;
                    if (local_110 == local_a8) {
                      local_188 = 0xebcb70cf5a63f41b;
                    }
                    local_190 = 0xe45b8c693d18d573;
                    local_a0 = local_108;
                  }
                  else if (uVar8 == 0x8b4ba5f960ba4834) {
                    local_88 = local_108;
                    local_c0 = local_110;
                    *(int *)(local_108 + 1) = (int)local_110[1];
                    *local_108 = *local_110;
                    lVar7 = local_110[2];
                    uVar4 = *(undefined4 *)((longlong)local_110 + 0x14);
                    lVar6 = local_110[3];
                    uVar5 = *(undefined4 *)((longlong)local_110 + 0x1c);
                    local_110[2] = 0;
                    local_110[3] = 0;
                    local_160 = (longlong *)local_108[3];
                    *(int *)(local_108 + 2) = (int)lVar7;
                    *(undefined4 *)((longlong)local_108 + 0x14) = uVar4;
                    *(int *)(local_108 + 3) = (int)lVar6;
                    *(undefined4 *)((longlong)local_108 + 0x1c) = uVar5;
                    local_188 = 0xcebdd5ca7d331e37;
                    if (local_160 == (longlong *)0x0) {
                      local_188 = 0xfb3b12dacb499c41;
                    }
                    local_190 = 0x718df36e771638ff;
                  }
                }
                else if (uVar8 == 0x8f932e6a899cb312) {
                  (**(code **)(*local_160 + 8))();
                  local_188 = 0x209f4afe84f7ae13;
                  local_190 = 0xaa29ab4a38a80aad;
                }
                else if (uVar8 == 0x93870e6065332d22) {
                  LOCK();
                  plVar2 = local_168 + 1;
                  lVar7 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  local_188 = 0xcdb2384c6e1fd376;
                  if ((int)lVar7 == local_17c) {
                    local_188 = 0xd52517e643e820a1;
                  }
                  local_190 = 0x213910af74643f0f;
                }
              }
              else if ((longlong)uVar8 < -0x5f4e8cae047c915d) {
                if (uVar8 == 0x94d7ab004b6ad9de) {
                  *(int *)(local_d8 + 1) = (int)local_c8[1];
                  *local_d8 = *local_c8;
                  lVar7 = local_d0[7];
                  uVar4 = *(undefined4 *)((longlong)local_d0 + 0x3c);
                  lVar6 = local_d0[8];
                  uVar5 = *(undefined4 *)((longlong)local_d0 + 0x44);
                  local_d0[7] = 0;
                  local_d0[8] = 0;
                  local_168 = (longlong *)local_d8[3];
                  *(int *)(local_d8 + 2) = (int)lVar7;
                  *(undefined4 *)((longlong)local_d8 + 0x14) = uVar4;
                  *(int *)(local_d8 + 3) = (int)lVar6;
                  *(undefined4 *)((longlong)local_d8 + 0x1c) = uVar5;
                  local_188 = 0xc971ccaa6c5c194d;
                  if (local_168 == (longlong *)0x0) {
                    local_188 = 0xb67dea291314d816;
                  }
                  local_190 = 0x5af6c2ca096f346f;
                }
                else if (uVar8 == 0xa08efad0ba8763ee) {
                  (**(code **)(*local_158 + 8))();
                  local_188 = 0x17635f003a984f09;
                  local_190 = 0xb7d22c51c11b21aa;
                }
              }
              else if (uVar8 == 0xa0b17351fb836ea3) {
                local_f8 = local_78 + 5;
                local_188 = 0xba90cb8605e3fc6d;
                if (local_f8 == local_60) {
                  local_188 = 0x765949c2f9eeddc8;
                }
                local_190 = 0xce3ad5ebf0851fd7;
              }
              else if (uVar8 == 0xb8639c29096bc21f) {
                *local_150 = (longlong)local_68;
                local_188 = 0xa4864e8208affcc7;
                local_190 = 0xc8b861df43dae644;
              }
            }
            if ((longlong)uVar8 < -0x26a9af0ff3e6cce3) break;
            if ((longlong)uVar8 < -0x14a724bb6dcf5aff) {
              if (uVar8 == 0xd95650f00c19331d) {
                local_130 = local_148 + 5;
                local_188 = 0x562451b9af84f65a;
                if (local_130 == local_178) {
                  local_188 = 0x8654c9e3753a97e0;
                }
                if (local_148 == local_178) {
                  local_188 = 0x8654c9e3753a97e0;
                }
                local_190 = 0x4144e2b9ef35c3b2;
                local_128 = local_148;
                local_120 = local_148;
                local_100 = local_148;
              }
              else if (uVar8 == 0xe71799a0bae7bb31) {
                local_90 = local_138;
                local_188 = 0xc24d445c6debf679;
                if (*local_138 == param_2) {
                  local_188 = 0xe7432a7dafcb12a5;
                }
                local_190 = 0x3e157a8da3d221b8;
                local_148 = local_138;
              }
            }
            else if (uVar8 == 0xeb58db449230a501) {
              LOCK();
              plVar2 = local_158 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              local_188 = 0x903ad44e1bda037f;
              if ((int)lVar7 == local_17c) {
                local_188 = 0x1cb4dd079b36c280;
              }
              local_190 = 0x308ba71fe0596ddc;
            }
            else if (uVar8 == 0xec8b28e31a7bec79) {
              local_d8[4] = local_d0[9];
              local_118 = local_d8 + 5;
              local_188 = 0x8220f7bfe8c49037;
              local_190 = 0x5b24cb158a4bf9f6;
            }
          }
          if (-0x353118886a79bd50 < (longlong)uVar8) break;
          if (uVar8 == 0xbf3026a40a2526c8) {
            LOCK();
            plVar2 = local_160 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            local_188 = 0xe3c79a4da5888dfa;
            if ((int)lVar7 == local_17c) {
              local_188 = 0x15606bc90a6be2e7;
            }
            local_190 = 0x69717bf919d72944;
          }
          else if (uVar8 == 0xc7102b5a9a0f5452) {
            local_80 = local_100;
            local_188 = 0xe100e839e25bc2cf;
            if (local_100 == local_178) {
              local_188 = 0x701c070062c1187b;
            }
            local_190 = 0x1c22285d29b402f8;
          }
        }
        if (uVar8 != 0xcacee777958642b1) break;
        local_188 = 0xc8fbb2e092c565ae;
        local_190 = 0x1e9b703647633aa9;
      }
      if (uVar8 != 0xd9043caa628f69c1) break;
      local_130 = local_c8 + 5;
      local_188 = 0x42bb2fdbcd6a89e8;
      if (local_130 == local_178) {
        local_188 = 0x92cbb78117d4e852;
      }
      local_190 = 0x55db9cdb8ddbbc00;
      local_128 = local_c8;
      local_120 = local_118;
      local_100 = local_118;
    }
  } while (uVar8 != 0xd660c2d6d5a65f07);
  return;
}



void FUN_1800bc160(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_100;
  ulonglong local_f8;
  int local_ec;
  longlong *local_e0;
  longlong *local_d8;
  int *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  code *local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;

  local_f8 = 0xc0bb5cb1dc300b7f;
  local_100 = 0xce78c545aeb0c80c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_f8 ^ 0x5d8078d81d5110a6;
            uVar2 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0x5d8078d81d5110a6;
            local_f8 = uVar3;
            if (-0x196f43baed308036 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x4e8b7c0e5e49db10) {
              if (uVar2 == 0x83eb4d85526e7cf5) {
                local_ec = *local_d0 + -1;
                local_f8 = 0x4a7d870a8aa0242a;
                local_100 = 0xfb0904fb2b1600da;
              }
              else if (uVar2 == 0x87be017287b1bc07) {
                FUN_1800bc880(param_1);
                local_f8 = 0x841430bf64df3e9a;
                local_100 = 0xa6b209178532e17a;
              }
              else if (uVar2 == 0x9174e523241d8c52) {
                (*local_60)(local_68 + 0x10,param_3);
                local_b8 = *local_d8;
                local_c0 = *local_e0;
                local_f8 = 0x48fc63155172e15b;
                local_100 = 0x94b31ee3d6ed8a4b;
              }
            }
            else if ((longlong)uVar2 < -0x3597fcbc6250943f) {
              if (uVar2 == 0xb17483f1a1b624f0) {
                *local_d0 = local_ec;
                local_f8 = 0x60bb7ef48d08b6e4;
                if (local_ec == 0) {
                  local_f8 = 0xc5a3462eeb54d503;
                }
                local_100 = 0x421d475c6ce56904;
              }
              else if (uVar2 == 0xc2b91a906e8ed971) {
                local_70 = *local_88;
                local_f8 = 0xbef560fd3704f213;
                if (param_2 == *(uint *)(local_80 + 0x10)) {
                  local_f8 = 0x9a282c677539bbb7;
                }
                local_100 = 0x50402f24e896d076;
                local_c8 = local_80;
                local_98 = local_80;
              }
            }
            else if (uVar2 == 0xca6803439daf6bc1) {
              local_58 = local_c8;
              local_f8 = 0x71e7222387a2da29;
              if (local_c8 == local_78) {
                local_f8 = 0xa5783fdc73ae8913;
              }
              local_100 = 0x87de0674924356f3;
            }
            else if (uVar2 == 0xdc4f7df6879f6b10) {
              uVar2 = local_b8 - local_c0;
              if (uVar2 >> 0x20 == 0) {
                uVar2 = (uVar2 & 0xffffffff) / 0x28;
              }
              else {
                uVar2 = (longlong)uVar2 / 0x28;
              }
              local_a0 = local_50 + 1;
              local_f8 = 0xae542cb5bbd6fb02;
              if (local_a0 < uVar2) {
                local_f8 = 0xcb2fdd75fb77f83c;
              }
              local_100 = 0x2dbf6130e9b887f7;
              local_b0 = local_c0;
              local_a8 = local_b8;
            }
          }
          if (0xec399f47280c372 < (longlong)uVar2) break;
          if (uVar2 == 0xe690bc4512cf7fcb) {
            local_50 = local_a0;
            local_68 = local_b0 + local_a0 * 0x28;
            local_60 = *(code **)(local_b0 + 0x20 + local_a0 * 0x28);
            local_f8 = 0xc7e70bcb6bbfb010;
            if (local_60 == (code *)0x0) {
              local_f8 = 0x8adc931ec83d5752;
            }
            local_100 = 0x5693eee84fa23c42;
            local_c0 = local_b0;
            local_b8 = local_a8;
          }
          else if (uVar2 == 0xeeb54fd9df922265) {
            local_48 = local_98;
            local_f8 = 0x2c945a0eda88a6fe;
            if (local_98 == local_70) {
              local_f8 = 0x1d3ced7377c22501;
            }
            local_100 = 0x3f9ad4db962ffae1;
          }
          else if (uVar2 == 0xf639245715e18cda) {
            local_e0 = (longlong *)(local_58 + 0x18);
            local_d8 = (longlong *)(local_58 + 0x20);
            local_f8 = 0x10ff6dbae275d11d;
            if (*(longlong *)(local_58 + 0x18) == *(longlong *)(local_58 + 0x20)) {
              local_f8 = 0x12c832b0b03e446c;
            }
            local_100 = 0x306e0b1851d39b8c;
          }
        }
        if (0x209166a2b3a64a90 < (longlong)uVar2) break;
        if (uVar2 == 0xec399f47280c373) {
          lVar1 = (((ulonglong)(param_2 >> 0x18) ^
                   ((ulonglong)(param_2 >> 0x10 & 0xff) ^
                   ((ulonglong)(param_2 >> 8 & 0xff) ^
                   ((ulonglong)(param_2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3)
                   * 0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
          local_88 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar1);
          local_80 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar1);
          local_78 = *(longlong *)(param_1 + 8);
          local_f8 = 0x8fd475a59650db9b;
          if (local_80 == local_78) {
            local_f8 = 0x6fcb569d1933dd0a;
          }
          local_100 = 0x4d6d6f35f8de02ea;
        }
        else if (uVar2 == 0x130e8ed54ca75c1f) {
          local_c8 = *(longlong *)(local_48 + 8);
          local_f8 = 0x14d07e0566a80eec;
          if (param_2 == *(uint *)(local_c8 + 0x10)) {
            local_f8 = 0x300d329f24954748;
          }
          local_100 = 0xfa6531dcb93a2c89;
          local_98 = local_c8;
        }
      }
      if (uVar2 != 0x209166a2b3a64a91) break;
      local_d0 = (int *)(param_1 + 0x40);
      local_ec = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = local_ec + 1;
      local_a8 = *local_d8;
      local_b0 = *local_e0;
      local_a0 = 0;
      local_f8 = 0x93c3902959a66375;
      if (local_a8 == local_b0) {
        local_f8 = 0xc427af9deadf384e;
      }
      local_100 = 0x75532c6c4b691cbe;
    }
  } while (uVar2 != 0x22a639a8e1eddfe0);
  return;
}



void FUN_1800bc880(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;

  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar11 = *(longlong *)(param_1 + 0x68);
  if (lVar4 == lVar11) {
    lVar10 = *(longlong *)(param_1 + 0x48);
    lVar12 = *(longlong *)(param_1 + 0x50);
    if (lVar10 == lVar12) {
      return;
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x48);
    lVar12 = *(longlong *)(param_1 + 0x50);
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar6 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  for (lVar13 = lVar4; lVar8 = lVar10, lVar13 != lVar11; lVar13 = lVar13 + 8) {
    FUN_1800bb310();
  }
  for (; lVar8 != lVar12; lVar8 = lVar8 + 0x30) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    FUN_1800baf30();
  }
  lVar11 = lVar10;
  if (lVar10 != 0) {
    for (; lVar11 != lVar12; lVar11 = lVar11 + 0x30) {
      plVar7 = *(longlong **)(lVar11 + 0x20);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar7)();
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
    }
    uVar9 = lVar6 - lVar10;
    if (0xfff < uVar9) {
      if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800bcaf5;
      uVar9 = uVar9 + 0x27;
      lVar10 = *(longlong *)(lVar10 + -8);
    }
    thunk_FUN_1801f42e0(lVar10,uVar9);
  }
  if (lVar4 != 0) {
    uVar9 = lVar5 - lVar4;
    lVar11 = lVar4;
    if (0xfff < uVar9) {
      lVar11 = *(longlong *)(lVar4 + -8);
      if (0x1f < (ulonglong)((lVar4 + -8) - lVar11)) {
LAB_1800bcaf5:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = uVar9 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar11,uVar9);
  }
  return;
}



void Unwind_1800bcb10(undefined8 param_1,longlong param_2)

{
  FUN_1800bcb60(param_2 + 0x70);
  FUN_1800bd190(param_2 + 0x58);
  return;
}



void FUN_1800bcb60(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_d8;
  ulonglong local_d0;
  int local_c4;
  longlong *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;

  local_d0 = 0xe38b08befd69affc;
  local_d8 = 0x43e71acf1680a0a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_d0 ^ 0x4927c286c8255b76;
            uVar5 = local_d0 ^ local_d8;
            local_d8 = local_d8 ^ 0x4927c286c8255b76;
            local_d0 = uVar6;
            if ((longlong)uVar5 < 0xbf359af7de40d10) break;
            if ((longlong)uVar5 < 0x4449dd6d524d452d) {
              if (uVar5 == 0xbf359af7de40d10) {
                (**(code **)(*local_c0 + 8))();
                local_d0 = 0x5ca3ed2590a02c70;
                local_d8 = 0x428b610ac0ba23ed;
              }
              else if (uVar5 == 0x161645ee5c5ebfb1) {
                LOCK();
                plVar2 = local_c0 + 1;
                lVar4 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                local_d0 = 0x4585d254f1ec740b;
                if ((int)lVar4 == local_c4) {
                  local_d0 = 0x1fe48316f3bb3ebb;
                }
                local_d8 = 0x5bad5e7ba1f67b96;
              }
              else if (uVar5 == 0x1e288c2f501a0f9d) {
                local_a8 = local_68 + 0x30;
                local_d0 = 0x850c79beebd38a1e;
                if (local_a8 == local_88) {
                  local_d0 = 0xdd1c1300937a2b51;
                }
                local_d8 = 0x4410ca3295d619ae;
              }
            }
            else if ((longlong)uVar5 < 0x5cbde54d66c7b8ab) {
              if (uVar5 == 0x4449dd6d524d452d) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)local_c0 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_d0 = 0x8f614756af1bf6c3;
                if (iVar3 == local_c4) {
                  local_d0 = 0x9aba92d682e5f44e;
                }
                local_d8 = 0x9149cb79ff01f95e;
              }
              else if (uVar5 == 0x4aa1af956ae97ce6) {
                local_78 = local_a0;
                local_b8 = *local_90 - local_a0;
                local_d0 = 0x55a9b5b0970e005f;
                if (0xfff < local_b8) {
                  local_d0 = 0xd9147a2ca158f919;
                }
                local_d8 = 0x3b537b8658948e83;
                local_b0 = local_a0;
                local_70 = local_b8;
                local_60 = local_78;
              }
            }
            else if (uVar5 == 0x6eface36cf9a8edc) {
              thunk_FUN_1801f42e0(local_b0,local_b8);
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              local_d0 = 0x832a8952f46a843b;
              local_d8 = 0x438178182fcd2c6c;
            }
            else if (uVar5 == 0x5cbde54d66c7b8ab) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          if (-0x3f540eb5245857aa < (longlong)uVar5) break;
          if (uVar5 == 0x990cd93206ac32ff) {
            local_a0 = *param_1;
            local_d0 = 0x6a440f0cfcecde8f;
            local_d8 = 0x20e5a0999605a269;
          }
          else if (uVar5 == 0xa06c1271ebe90f5d) {
            local_c4 = 1;
            local_98 = *param_1;
            local_d0 = 0xdd922cbbd93d3503;
            if (local_98 == 0) {
              local_d0 = 0xddbd695d8028d577;
            }
            local_d8 = 0x1d1698175b8f7d20;
          }
          else if (uVar5 == 0xc084b4ac82b24823) {
            local_90 = param_1 + 2;
            local_88 = param_1[1];
            local_a8 = local_98;
            local_d0 = 0xeaae88e395817992;
            if (local_98 == local_88) {
              local_d0 = 0x611394fa816d96c4;
            }
            local_d8 = 0x2bb23b6feb84ea22;
            local_a0 = local_a8;
          }
        }
        if ((longlong)uVar5 < -0x1db8fe5506338866) break;
        if (uVar5 == 0xe24701aaf9cc779a) {
          local_80 = *(longlong *)(local_60 + -8);
          local_d0 = 0xe15a7988d3f3552a;
          if ((local_78 - local_80) - 8U < 0x20) {
            local_d0 = 0x48fbe35536a3e4b1;
          }
          local_d8 = 0xbde79cc5b534ed81;
        }
        else if (uVar5 == 0xf51c7f9083970930) {
          local_b8 = local_70 + 0x27;
          local_b0 = local_80;
          local_d0 = 0x9fbda66c4bc58dd6;
          local_d8 = 0xf147685a845f030a;
        }
      }
      if (uVar5 != 0xc11cb38c7e0593b0) break;
      local_68 = local_a8;
      local_c0 = *(longlong **)(local_a8 + 0x20);
      local_d0 = 0x3ba21175ada4ccac;
      if (local_c0 == (longlong *)0x0) {
        local_d0 = 0x339cd8b4a1e07c80;
      }
      local_d8 = 0x2db4549bf1fa731d;
    }
  } while (uVar5 != 0xc0abf14adba7a857);
  return;
}



void FUN_1800bd190(longlong *param_1)

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

  local_90 = 0x599490c5dae610ee;
  local_98 = 0x4be6e432ae0749f6;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xf3274825688da9cf;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xf3274825688da9cf;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x127274f774e15918) break;
          if (uVar1 == 0x127274f774e15918) {
            local_88 = *param_1;
            local_90 = 0x44ec711f1437e25e;
            if (local_88 == 0) {
              local_90 = 0x8ac90e3ec4b7c676;
            }
            local_98 = 0xc0c8fb32604ca0a3;
          }
          else if (uVar1 == 0x6e76527ee6f47033) {
            local_80 = local_68 + 0x27;
            local_90 = 0xe6f100bcceff3c5b;
            local_98 = 0x736c9ff41fa09dd;
            local_78 = local_60;
          }
          else if (uVar1 == 0x4a01f50ca4fb66d5) {
            return;
          }
        }
        if ((longlong)uVar1 < -0x1e3836bc70faca7a) break;
        if (uVar1 == 0xe1c7c9438f053586) {
          thunk_FUN_1801f42e0(local_78,local_80);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          local_90 = 0xa4cf17eeb9964ec4;
          local_98 = 0xeecee2e21d6d2811;
        }
        else if (uVar1 == 0xe422a48305725fea) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0x7cf33453a01e55ee;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0xb28fc3768a0b39a4;
          }
          local_98 = 0xdcf991086cff4997;
        }
      }
      if (uVar1 != 0x84248a2d747b42fd) break;
      local_70 = local_88;
      local_80 = param_1[2] - local_88;
      local_90 = 0x414973d115ad2ae5;
      if (0xfff < local_80) {
        local_90 = 0x44ac1e119fda4089;
      }
      local_98 = 0xa08eba929aa81f63;
      local_78 = local_88;
      local_68 = local_80;
    }
  } while (uVar1 != 0xa00aa55bcce11c79);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



undefined4 * FUN_1800bd480(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;

  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_1801d61c8(0x30);
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



void Unwind_1800bd650(undefined8 param_1,longlong param_2)

{
  FUN_1800be380(*(undefined8 *)(param_2 + 0x38));
  FUN_1800be670(*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_1800bd690(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
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
  undefined8 *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
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

  local_1a8 = 0x5fd2296e49f47c70;
  local_1b0 = 0xa2aa1810502d2b7d;
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_1a8 ^ 0xa9bb779372cb352e;
              uVar2 = local_1a8 ^ local_1b0;
              local_1b0 = local_1b0 ^ 0xa9bb779372cb352e;
              local_1a8 = uVar4;
              if (-0x3441ec5ece57251b < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x5df35f87b14371e9) {
                if ((longlong)uVar2 < -0x65a9a1936f56b540) {
                  if (uVar2 == 0x8e46ae2a2ed42111) {
                    local_180 = local_f0;
                    local_90 = param_1 + 2;
                    local_128 = *param_1;
                    local_120 = param_1[2] - local_128;
                    local_1a8 = 0x4ab43a1c634b0dc5;
                    if (local_120 == local_198) {
                      local_1a8 = 0x72eec408bd5ec912;
                    }
                    local_1b0 = 0xd0e26470f3e24705;
                    local_88 = local_128;
                  }
                  else if (uVar2 == 0x8ec49eedef95a683) {
                    local_130 = local_110 & local_160;
                    local_a0 = (undefined8 *)((local_130 << (local_1a0 & 0x3f)) + (longlong)local_190);
                    local_68._8_4_ = (int)param_3;
                    local_68._0_8_ = param_3;
                    local_68._12_4_ = uVar5;
                    local_1a8 = 0x7381cd7a673f90dc;
                    local_1b0 = 0x9e54654d60583ea9;
                    local_e0 = local_198;
                  }
                  else if (uVar2 == 0x91dfced90b357f69) {
                    local_98 = *(ulonglong *)(local_128 - 8);
                    local_1a8 = 0xfbcfbdd06c240463;
                    if ((local_88 + local_170) - local_98 < 0x20) {
                      local_1a8 = 0x852156dd0a0b78eb;
                    }
                    local_1b0 = 0xac1a5f0123bf592c;
                  }
                }
                else if (uVar2 == 0x9a565e6c90a94ac0) {
                  local_1a8 = 0xb3f11465456cd4af;
                  if (0xfff < local_120) {
                    local_1a8 = 0xe990c91d7ff17120;
                  }
                  local_1b0 = 0x784f07c474c40e49;
                  local_100 = local_120;
                  local_f8 = local_128;
                }
                else if (uVar2 == 0x9ae2d5ba386cef27) {
                  uVar2 = (longlong)local_b8 + (local_170 - (longlong)local_b0);
                  local_110 = (uVar2 >> (local_1a0 & 0x3f)) + local_148;
                  local_1a8 = 0xcb3b9b32be8fef7b;
                  if (uVar2 < local_150) {
                    local_1a8 = 0x77739521d7034bde;
                  }
                  local_1b0 = 0x45ff05df511a49f8;
                  local_108 = local_190;
                }
                else if (uVar2 == 0xa136c3ea7d28a739) {
                  local_f0 = (undefined8 *)FUN_1801d61c8(local_188);
                  local_1a8 = 0xdd15cb5019d880a0;
                  local_1b0 = 0x5353657a370ca1b1;
                }
              }
              else if ((longlong)uVar2 < -0x56584efcdb87bf4a) {
                if (uVar2 == 0xa20ca0784ebc8e17) {
                  *param_1 = (ulonglong)local_180;
                  local_80 = (undefined8 *)((longlong)local_180 + local_188);
                  *local_c0 = (ulonglong)local_80;
                  *local_90 = (ulonglong)local_80;
                  local_118 = ((ulonglong)(local_188 + local_170) >> (local_1a0 & 0x3f)) + local_148;
                  local_1a8 = 0x294c44aebb4f8dd5;
                  if ((ulonglong)(local_188 + local_170) < local_150) {
                    local_1a8 = 0x8c14e347d9e8d68d;
                  }
                  local_1b0 = 0xc2774ef9b6fc9d66;
                  local_e8 = local_180;
                }
                else if (uVar2 == 0xa376253458e35cf3) {
                  local_188 = param_2 << (local_1a0 & 0x3f);
                  local_1a8 = 0x3f7ea82ac4ba8b82;
                  if (0x1ff < param_2) {
                    local_1a8 = 0x37efdac39dea6c0d;
                  }
                  local_1b0 = 0x9e486bc0b9922cbb;
                }
                else if (uVar2 == 0xa399708f4b99edbb) {
                  local_1a8 = 0x571f1ffadd28549b;
                  if (0x1fffffffffffffff < param_2) {
                    local_1a8 = 0xde62a92c12fa4737;
                  }
                  local_1b0 = 0xf4693ace85cb0868;
                }
              }
              else if (uVar2 == 0xa9a7b103247840b6) {
                local_1a8 = 0x8769447871b12b69;
                if (param_2 < 0x1ffffffffffffffc) {
                  local_1a8 = 0x21e2a685c57d18a9;
                }
                local_1b0 = 0xd28ac953e8409895;
              }
              else if (uVar2 == 0xac4c3f5d5fd7420d) {
                lVar3 = local_d0 << (local_1a0 & 0x3f);
                puVar1 = (undefined8 *)((longlong)local_180 + lVar3);
                *puVar1 = local_78._0_8_;
                puVar1[1] = local_78._8_8_;
                puVar1 = (undefined8 *)((longlong)local_180 + lVar3 + 0x10);
                *puVar1 = local_78._0_8_;
                puVar1[1] = local_78._8_8_;
                local_d0 = local_d0 + local_158;
                local_1a8 = 0x978ee0ce8ddaba76;
                if (local_d0 == local_138) {
                  local_1a8 = 0x69c5fbe8b620982;
                }
                local_1b0 = 0x3bc2df93d20df87b;
              }
              else if (uVar2 == 0xcb7ad3908250c152) {
                *local_d8 = param_3;
                local_d8 = local_d8 + 1;
                local_1a8 = 0xfdc733b74afdbeb;
                if (local_d8 == local_80) {
                  local_1a8 = 0xc23c85747f25ae2c;
                }
                local_1b0 = 0xc4a6a0abf6ff1ab9;
              }
            }
            if (0x7a5cd9c85e4f35d < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0xc979029d2c27fc4) {
              if (uVar2 == 0xcbbe13a131a8dae6) {
                thunk_FUN_1801f42e0(local_f8,local_100);
                local_1a8 = 0x6ff0a23c00386740;
                local_1b0 = 0xcdfc02444e84e957;
              }
              else if (uVar2 == 0xeb3b0a570db310b3) {
                local_138 = local_118 & local_160;
                local_a8 = (undefined8 *)((local_138 << (local_1a0 & 0x3f)) + (longlong)local_180);
                local_78._8_4_ = (int)param_3;
                local_78._0_8_ = param_3;
                local_78._12_4_ = uVar5;
                local_1a8 = 0x2d4a7db7b86fbbb8;
                local_1b0 = 0x810642eae7b8f9b5;
                local_d0 = local_198;
              }
              else if (uVar2 == 0xedd5a8370767ae75) {
                lVar3 = local_e0 << (local_1a0 & 0x3f);
                puVar1 = (undefined8 *)((longlong)local_190 + lVar3);
                *puVar1 = local_68._0_8_;
                puVar1[1] = local_68._8_8_;
                puVar1 = (undefined8 *)((longlong)local_190 + lVar3 + 0x10);
                *puVar1 = local_68._0_8_;
                puVar1[1] = local_68._8_8_;
                local_e0 = local_e0 + local_158;
                local_1a8 = 0x4983d310f6c5486f;
                if (local_e0 == local_130) {
                  local_1a8 = 0xa3f3b6bb74461544;
                }
                local_1b0 = 0xa4567b27f1a2e61a;
              }
            }
            else if ((longlong)uVar2 < -0x2762cbd53e909cb) {
              if (uVar2 == 0xf3686fd62d3d803c) {
                lVar3 = FUN_1801d61c8(local_188 + local_178);
                local_f0 = (undefined8 *)(local_178 + lVar3 & 0xffffffffffffffe0);
                local_f0[-1] = lVar3;
                local_1a8 = 0x8fb1f45d261ba05f;
                local_1b0 = 0x1f75a7708cf814e;
              }
              else if (uVar2 == 0xfd78317e19d9570d) {
                local_148 = 1;
                local_170 = -8;
                local_150 = 0x18;
                local_158 = 4;
                local_160 = 0x3ffffffffffffffc;
                local_178 = 0x27;
                local_198 = 0;
                local_1a0 = 3;
                local_c0 = param_1 + 1;
                local_140 = (undefined8 *)param_1[1];
                local_190 = (undefined8 *)*param_1;
                local_1a8 = 0x281a0bb96ad0a7ea;
                if ((ulonglong)((longlong)local_140 - (longlong)local_190 >> 3) < param_2) {
                  local_1a8 = 0x760aa8748d5fbc64;
                }
                local_1b0 = 0xd593d8fbc6c651df;
                local_b8 = local_140;
                local_b0 = local_190;
              }
            }
            else if (uVar2 == 0xfd89d342ac16f635) {
              local_1a8 = 0x62f30bc2d5054775;
              if (local_190 == local_140) {
                local_1a8 = 0xfe8bfba764b31cc7;
              }
              local_1b0 = 0xf811de78ed69a852;
            }
            else if (uVar2 == 0x69a25df89dab495) {
              return;
            }
          }
          if (0x3d5e802d596ff1f8 < (longlong)uVar2) break;
          if ((longlong)uVar2 < 0x2a0b93e297314f5f) {
            if (uVar2 == 0x7a5cd9c85e4f35e) {
              local_1a8 = 0x43afecd2dca0ccd5;
              if (local_110 == local_130) {
                local_1a8 = 0x77b959f3d3637a66;
              }
              local_1b0 = 0x71237c2c5ab9cef3;
              local_108 = local_a0;
            }
            else if (uVar2 == 0x293b09dc29b421c7) {
              local_100 = local_120 + local_178;
              local_f8 = local_98;
              local_1a8 = 0x9aa0648d6e63384a;
              local_1b0 = 0x511e772c5fcbe2ac;
            }
          }
          else if (uVar2 == 0x328c90fe86190226) {
            local_1a8 = 0xd5e3338071a9b6c2;
            local_1b0 = 0x9a6638c74c4270c3;
            local_c8 = local_108;
          }
          else if (uVar2 == 0x2a0b93e297314f5f) goto LAB_1800be32d;
        }
        if (0x4f850b473debc600 < (longlong)uVar2) break;
        if (uVar2 == 0x3d5e802d596ff1f9) {
          local_1a8 = 0x8fe0c5a93e9f1a9f;
          if (local_118 == local_138) {
            local_1a8 = 0xc7194dc8d851e5e1;
          }
          local_1b0 = 0xc1836817518b5174;
          local_e8 = local_a8;
        }
        else if (uVar2 == 0x4e63adbe6f144beb) {
          local_1a8 = 0x24345d6f8d56de8e;
          local_1b0 = 0xef4e8eff0f061fdc;
          local_d8 = local_e8;
        }
      }
      if (uVar2 != 0x4f850b473debc601) break;
      *local_c8 = param_3;
      local_c8 = local_c8 + 1;
      local_1a8 = 0x5ba11040cfefe860;
      if (local_c8 == local_140) {
        local_1a8 = 0x12be3ed87bde9af4;
      }
      local_1b0 = 0x14241b07f2042e61;
    }
    if (uVar2 == 0x55e38d2b99f1b3fc) break;
    if (uVar2 == 0x57d5e2d14f9b5d4f) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_198);
    }
  }
LAB_1800be32d:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_1800be380(longlong *param_1)

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

  local_90 = 0x520cfb2318b10b31;
  local_98 = 0xd8abca3a89337f15;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xbe59343d66396838;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xbe59343d66396838;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x233e6cd4821ada3c) break;
          if (uVar1 == 0x36ef69cc21b208da) {
            local_80 = local_68 + 0x27;
            local_90 = 0xbc9dded8d547f6d1;
            local_98 = 0x86000333079d1f38;
            local_78 = local_60;
          }
          else if (uVar1 == 0x3a9dddebd2dae9e9) {
            thunk_FUN_1801f42e0(local_78,local_80);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_90 = 0xf6d3a80d83b839d8;
            local_98 = 0xd5edc4d901a2e3e4;
          }
          else if (uVar1 == 0x233e6cd4821ada3c) {
            return;
          }
        }
        if (0xe444c7ba720d17 < (longlong)uVar1) break;
        if (uVar1 == 0x8aa7311991827424) {
          local_88 = *param_1;
          local_90 = 0x83d32badf20e8678;
          if (local_88 == 0) {
            local_90 = 0xb6f5c7b40e530536;
          }
          local_98 = 0x95cbab608c49df0a;
        }
        else if (uVar1 == 0xae00df90b59468a6) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0x231757004e695e4;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0x343a587b9f269026;
          }
          local_98 = 0x2d531b7be9498fc;
        }
      }
      if (uVar1 != 0x161880cd7e475972) break;
      local_70 = local_88;
      local_80 = param_1[2] - local_88;
      local_90 = 0x1a9e07679f591dfd;
      if (0xfff < local_80) {
        local_90 = 0x8e03051cf8179cb2;
      }
      local_98 = 0x2003da8c4d83f414;
      local_78 = local_88;
      local_68 = local_80;
    }
  } while (uVar1 != 0xe444c7ba720d18);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800be670(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;

  local_50 = 0x7ed4f213a594b890;
  local_58 = 0x4db1c06a63055d75;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x37153e37a9af239c;
        if (uVar2 != 0x33653279c691e5e5) break;
        puVar1 = (undefined8 *)*param_1;
        *(undefined8 *)puVar1[1] = 0;
        local_48 = (longlong *)*puVar1;
        local_50 = 0x6971152218dad64b;
        if (local_48 == (longlong *)0x0) {
          local_50 = 0xde1730df0e8a0c61;
        }
        local_58 = 0x129ae87c0e6c6caf;
      }
      if (uVar2 != 0x7bebfd5e16b6bae4) break;
      local_48 = (longlong *)*local_48;
      FUN_1800be7d0(param_1);
      local_50 = 0x783e3e008863e868;
      if (local_48 == (longlong *)0x0) {
        local_50 = 0xcf581bfd9e333242;
      }
      local_58 = 0x3d5c35e9ed5528c;
    }
    local_50 = local_50 ^ 0x37153e37a9af239c;
  } while (uVar2 != 0xcc8dd8a300e660ce);
  thunk_FUN_1801f42e0(*param_1,0x30);
  return;
}



void FUN_1800be7d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_e8;
  ulonglong local_e0;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;

  local_e0 = 0x861c082a808d1fba;
  local_e8 = 0x8bc48995bd276146;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_e0 ^ 0x3dd50d1a43c2f203;
            uVar5 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0x3dd50d1a43c2f203;
            local_e0 = uVar6;
            if (0x321d8c3d05026186 < (longlong)uVar5) break;
            if ((longlong)uVar5 < 0xd77c5261360921c) {
              if (uVar5 == 0xcdf03b961b11a32d) {
                local_78 = (longlong *)(param_2 + 0x28);
                local_70 = *(longlong *)(param_2 + 0x20);
                local_e0 = 0xd30ce3d9b9162c0d;
                if (local_98 == local_70) {
                  local_e0 = 0xec66aac2af74df96;
                }
                local_e8 = 0xde7b26ffaa76be11;
                local_b0 = local_98;
                local_a8 = local_98;
              }
              else if (uVar5 == 0xdb6d1ebab3a3379f) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)local_d0 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                local_e0 = 0x678941f5f5cc6a7d;
                if (iVar3 == local_d4) {
                  local_e0 = 0x4523d9d18767a0c8;
                }
                local_e8 = 0x1b595ef53aa19052;
              }
              else if (uVar5 == 0xf3430ee524e3a863) {
                local_b0 = *local_c8;
                local_e0 = 0x64c119d4d3b42b6b;
                local_e8 = 0x56dc95e9d6b64aec;
              }
            }
            else if (uVar5 == 0xd77c5261360921c) {
              local_60 = local_a8;
              local_d0 = *(longlong **)(local_a8 + 0x18);
              local_e0 = 0xe4582c1307eaa97;
              if (local_d0 == (longlong *)0x0) {
                local_e0 = 0x48af7d288078ff8f;
              }
              local_e8 = 0x347f62284f1505a0;
            }
            else if (uVar5 == 0xdd881bf3daa7efc) {
              local_d4 = 1;
              local_98 = *(longlong *)(param_2 + 0x18);
              local_e0 = 0x8e8aaae58eca91d6;
              if (local_98 == 0) {
                local_e0 = 0x41de2a6e070dc55;
              }
              local_e8 = 0x437a917395db32fb;
              local_c8 = (longlong *)(param_2 + 0x18);
            }
            else if (uVar5 == 0x2d684f64a2d401ae) {
              local_90 = *(longlong *)(local_68 + -8);
              local_e0 = 0x9fd3fd1588dcdf0a;
              if ((local_88 - local_90) - 8U < 0x20) {
                local_e0 = 0xadcabf318b4e433d;
              }
              local_e8 = 0xf8d429300ef0e013;
            }
          }
          if ((longlong)uVar5 < 0x5e7a8724bdc6309a) break;
          if ((longlong)uVar5 < 0x6707d425862c3f19) {
            if (uVar5 == 0x5e7a8724bdc6309a) {
              (**(code **)(*local_d0 + 8))();
              local_e0 = 0xed01a0edf4d7daa2;
              local_e8 = 0x91d1bfed3bba208d;
            }
            else if (uVar5 == 0x6003fee52fa94daf) {
              thunk_FUN_1801f42e0(local_b8,local_c0);
              *local_c8 = 0;
              local_c8[1] = 0;
              local_c8[2] = 0;
              local_e0 = 0x4310e232ded1ca1;
              local_e8 = 0x43567df65846f20f;
            }
          }
          else if (uVar5 == 0x7cd01f00cf6dfa2f) {
            local_a8 = local_60 + 0x28;
            local_e0 = 0xef689beb5c0c8590;
            if (local_a8 == local_70) {
              local_e0 = 0x115c50286b8fbfef;
            }
            local_e8 = 0xe21f5ecd4f6c178c;
          }
          else if (uVar5 == 0x6707d425862c3f19) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        if (0x476773d575abeead < (longlong)uVar5) break;
        if (uVar5 == 0x321d8c3d05026187) {
          local_b8 = local_b0;
          local_c0 = *local_78 - local_b0;
          local_e0 = 0x983ee8ab3638f8ac;
          if (0xfff < local_c0) {
            local_e0 = 0xd555592abb45b4ad;
          }
          local_e8 = 0xf83d164e1991b503;
          local_88 = local_b8;
          local_80 = local_c0;
          local_68 = local_b8;
        }
        else if (uVar5 == 0x3a3ae0e97f6baf37) {
          LOCK();
          plVar1 = local_d0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          local_e0 = 0x9d73735d4665f175;
          if ((int)lVar4 == local_d4) {
            local_e0 = 0x3ace72e73aab3cc5;
          }
          local_e8 = 0xe1a36c5d89080b5a;
        }
      }
      if (uVar5 != 0x551e960185bea32e) break;
      local_c0 = local_80 + 0x27;
      local_e0 = 0xe86988aa86b082b5;
      local_e8 = 0x886a764fa919cf1a;
      local_b8 = local_90;
    }
  } while (uVar5 != 0x476773d575abeeae);
  thunk_FUN_1801f42e0(param_2,0x30);
  return;
}



longlong FUN_1800bee40(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_121;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  longlong local_e0;
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  longlong local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  longlong local_70;
  undefined4 *local_68;
  undefined4 *local_60;

  local_118 = 0x1f670aa7d5b4c0d9;
  local_120 = 0xefe874815e3df994;
LAB_1800beee0:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar4 = local_118 ^ 0xad5ca1099ba3f62f;
          uVar2 = local_118 ^ local_120;
          local_120 = local_120 ^ 0xad5ca1099ba3f62f;
          local_118 = uVar4;
          if ((longlong)uVar2 < 0x1384b0560b7164e3) break;
          if ((longlong)uVar2 < 0x5fca1aebb2aaadae) {
            if (uVar2 == 0x1384b0560b7164e3) {
              local_118 = 0xf5d3a928db9501f;
              if (local_108 != local_110) {
                local_118 = 0x4e922c53aa7cd60b;
              }
              local_120 = 0xf832c364a33ad355;
            }
            else if (uVar2 == 0x4e6299b3f2199eaa) {
              *(undefined4 *)(local_90 + 0x30) = *local_98;
              *(undefined8 *)(local_90 + 0x38) = *(undefined8 *)(local_98 + 2);
              *(undefined4 *)(local_90 + 0x40) = local_98[4];
              *(undefined8 *)(local_90 + 0x48) = 0;
              *(undefined8 *)(local_90 + 0x50) = 0;
              *(undefined8 *)(local_90 + 0x48) = *(undefined8 *)(local_98 + 6);
              *(undefined8 *)(local_90 + 0x50) = *(undefined8 *)(local_98 + 8);
              *(undefined8 *)(local_98 + 6) = 0;
              *(undefined8 *)(local_98 + 8) = 0;
              *(undefined8 *)(local_90 + 0x58) = *(undefined8 *)(local_98 + 10);
              local_98 = local_98 + 0xc;
              local_118 = 0x89fdbe381db0c64a;
              if (local_98 != local_60) {
                local_118 = 0x71a7ae5ff694ab7a;
              }
              local_90 = local_90 + 0x30;
              local_120 = 0x3fc537ec048d35d0;
            }
            else if (uVar2 == 0x4fcf1fd414916a07) {
              local_a0 = (undefined4 *)*local_d0;
              local_118 = 0xc1bf5e8a51ea4f01;
              local_120 = 0x689742ae52e34b40;
            }
          }
          else if ((longlong)uVar2 < 0x6fed18150a776bf4) {
            if (uVar2 == 0x5fca1aebb2aaadae) {
              local_f0 = (undefined4 *)FUN_1801d61c8(local_c0);
              local_118 = 0xf05fcf42fb8cbba5;
              local_120 = 0xf92e2eeb81257291;
            }
            else if (uVar2 == 0x632393046503e5af) {
              local_118 = 0x8c171cb2e4fcd7ee;
              if (local_121 == '\0') {
                local_118 = 0xf45c78592ede55c4;
              }
              local_120 = 0x253f0096e7f5d3af;
              local_a0 = local_68;
              local_b0 = local_b8;
              local_a8 = local_e8;
            }
          }
          else if (uVar2 == 0x6fed18150a776bf4) {
            local_118 = 0xfde73054fbb584c9;
            if (local_121 == '\0') {
              local_118 = 0xcfa292c627cb498b;
            }
            local_120 = 0x4bdfb980e2887753;
            local_88 = local_b8;
            local_80 = local_e8;
          }
          else if (uVar2 == 0x7c58a17542f29c9a) {
            local_c0 = local_100 * local_108;
            local_118 = 0xe34ea085bc27990;
            if (local_108 != 0) {
              local_118 = 0x9288cc9f8f6bb8dc;
            }
            local_120 = 0x7450ba1216bb0a4;
            local_f0 = (undefined4 *)0x0;
          }
        }
        if (-0x495f10c8f6b9faa3 < (longlong)uVar2) break;
        if ((longlong)uVar2 < -0x56d7e3dbfcf6fbbf) {
          if (uVar2 == 0x847d2b46c5433ed8) {
            *local_80 = *local_88;
            *(undefined8 *)(local_80 + 2) = *(undefined8 *)(local_88 + 2);
            local_80[4] = local_88[4];
            *(undefined8 *)(local_80 + 6) = 0;
            *(undefined8 *)(local_80 + 8) = 0;
            *(undefined8 *)(local_80 + 6) = *(undefined8 *)(local_88 + 6);
            *(undefined8 *)(local_80 + 8) = *(undefined8 *)(local_88 + 8);
            *(undefined8 *)(local_88 + 6) = 0;
            *(undefined8 *)(local_88 + 8) = 0;
            *(undefined8 *)(local_80 + 10) = *(undefined8 *)(local_88 + 10);
            local_88 = local_88 + 0xc;
            local_118 = 0xded7dd54469f0672;
            if (local_88 != param_2) {
              local_118 = 0xec927fc69ae1cb30;
            }
            local_80 = local_80 + 0xc;
            local_120 = 0x68ef54805fa2f5e8;
          }
          else if (uVar2 == 0x95cdc73eae000878) {
            local_118 = 0x148504993e41e267;
            if (local_108 < 0x56) {
              local_118 = 0x58cbae24879a2b2a;
            }
            local_120 = 0x701b4cf35308684;
          }
        }
        else if (uVar2 == 0xa9281c2403090441) {
          local_60 = local_a0;
          local_118 = 0x36864ec6cda58f0e;
          if (param_2 != local_a0) {
            local_118 = 0xcedc5ea12681e23e;
          }
          local_120 = 0x80bec712d4987c94;
          local_90 = local_f8;
          local_98 = param_2;
        }
        else if (uVar2 == 0xb63889d4193df39a) {
          FUN_1800bf760(param_1,local_e8,local_c8,local_108);
          return local_f8;
        }
      }
      if ((longlong)uVar2 < -0xf7081d97476c6b3) break;
      if (uVar2 == 0xf08f7e268b89394d) {
        local_110 = 0x555555555555555;
        local_100 = 0x30;
        local_e0 = 0x27;
        local_d0 = param_1 + 1;
        lVar3 = *param_1;
        uVar2 = param_1[1] - lVar3;
        if (uVar2 >> 0x20 == 0) {
          uVar2 = (uVar2 & 0xffffffff) / 0x30;
        }
        else {
          uVar2 = (longlong)uVar2 / 0x30;
        }
        local_70 = (longlong)param_2 - lVar3;
        local_c8 = uVar2 + 1;
        uVar2 = param_1[2] - lVar3;
        if (uVar2 >> 0x20 == 0) {
          uVar2 = (uVar2 & 0xffffffff) / 0x30;
        }
        else {
          uVar2 = (longlong)uVar2 / 0x30;
        }
        uVar4 = uVar2 >> 1;
        if (local_c8 < uVar4 + uVar2) {
          local_108 = uVar4 + uVar2;
          if (uVar2 <= 0x555555555555555 - uVar4) goto LAB_1800bf67a;
LAB_1800bf6be:
          local_108 = 0x555555555555555;
LAB_1800bf690:
          local_118 = 0x542c496448d3d5a1;
        }
        else {
          local_108 = local_c8;
          if (0x555555555555555 - uVar4 < uVar2) goto LAB_1800bf6be;
LAB_1800bf67a:
          local_118 = 0x928cbfc8579aa406;
          if (local_108 < 0x555555555555556) goto LAB_1800bf690;
        }
        local_120 = 0x2874e8110a21493b;
      }
      else if (uVar2 == 0x971e1a97aa9c934) {
        local_e8 = local_f0;
        local_f8 = (longlong)local_f0 + local_70;
        *(undefined4 *)((longlong)local_f0 + local_70) = *param_3;
        *(undefined4 *)((longlong)local_f0 + local_70 + 0x10) = *(undefined4 *)(param_4 + 1);
        *(undefined8 *)((longlong)local_f0 + local_70 + 8) = *param_4;
        puVar1 = (undefined8 *)((longlong)local_f0 + local_70 + 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((longlong)local_f0 + local_70 + 0x18) = param_4[2];
        *(undefined8 *)(local_f8 + 0x20) = param_4[3];
        param_4[2] = 0;
        param_4[3] = 0;
        *(undefined8 *)(local_f8 + 0x28) = param_4[4];
        local_68 = (undefined4 *)*local_d0;
        local_b8 = (undefined4 *)*param_1;
        local_121 = local_b8 == param_2;
        local_118 = 0x1cd374b9027f532a;
        if (param_2 != local_68) {
          local_118 = 0x101dffa86d0bdd71;
        }
        local_120 = 0x733e6cac080838de;
      }
      else if (uVar2 == 0xf76ff9f62e83834a) goto LAB_1800bf718;
    }
    if (uVar2 == 0xb6a0ef370946055e) {
      lVar3 = FUN_1801d61c8(local_c0 + local_e0);
      local_f0 = (undefined4 *)(local_e0 + lVar3 & 0xffffffffffffffe0);
      *(longlong *)(local_f0 + -2) = lVar3;
      local_118 = 0xd6c1dbe5fb5da58f;
      local_120 = 0xdfb03a4c81f46cbb;
      goto LAB_1800beee0;
    }
    if (uVar2 == 0xd16378cfc92b866b) {
      *local_a8 = *local_b0;
      *(undefined8 *)(local_a8 + 2) = *(undefined8 *)(local_b0 + 2);
      local_a8[4] = local_b0[4];
      *(undefined8 *)(local_a8 + 6) = 0;
      *(undefined8 *)(local_a8 + 8) = 0;
      *(undefined8 *)(local_a8 + 6) = *(undefined8 *)(local_b0 + 6);
      *(undefined8 *)(local_a8 + 8) = *(undefined8 *)(local_b0 + 8);
      *(undefined8 *)(local_b0 + 6) = 0;
      *(undefined8 *)(local_b0 + 8) = 0;
      *(undefined8 *)(local_a8 + 10) = *(undefined8 *)(local_b0 + 10);
      local_b0 = local_b0 + 0xc;
      local_118 = 0x66588a33b4074a70;
      if (local_b0 != param_2) {
        local_118 = 0xf8f4ed2869bda61c;
      }
      local_a8 = local_a8 + 0xc;
      local_120 = 0x299795e7a0962077;
    }
    else if (uVar2 == 0xbaf857d95dbbed3d) {
LAB_1800bf718:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
  } while( true );
}



void FUN_1800bf760(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_e0;
  ulonglong local_d8;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_d8 = 0x32c923cdb1b75ded;
  local_e0 = 0x52438f8196de2bfc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_d8 ^ 0xe03a596f63f7af8c;
            uVar5 = local_d8 ^ local_e0;
            local_e0 = local_e0 ^ 0xe03a596f63f7af8c;
            local_d8 = uVar6;
            if ((longlong)uVar5 < -0xfab93def116ccd2) break;
            if ((longlong)uVar5 < 0x46bad76d88577983) {
              if ((longlong)uVar5 < 0x3e2d7220fa6ea3ff) {
                if (uVar5 == 0xf0546c210ee9332e) {
                  local_b0 = local_60 + 0x27;
                  local_d8 = 0xabde0f4149fff4eb;
                  local_e0 = 0x4b7b8f6378eb3a07;
                  local_a8 = local_58;
                }
                else if (uVar5 == 0x296f8d8ac7996a49) {
                  local_70 = *local_c0;
                  local_a0 = local_78;
                  local_d8 = 0xa4b11ef3ccbad4ef;
                  if (local_78 == local_70) {
                    local_d8 = 0xf3072f2ba88ee5ad;
                  }
                  local_e0 = 0x1b61a2535f7a636c;
                  local_98 = local_a0;
                }
              }
              else if (uVar5 == 0x413c828e3ce2ca4f) {
                (**(code **)(*local_c8 + 8))();
                local_d8 = 0x5ded233113670d4;
                local_e0 = 0x6442ce925959c055;
              }
              else if (uVar5 == 0x3e2d7220fa6ea3ff) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            else if (uVar5 == 0x46bad76d88577983) {
              local_a0 = *param_1;
              local_d8 = 0x44e49976023054e8;
              local_e0 = 0xac82140ef5c4d229;
            }
            else if (uVar5 == 0x619c1ca1486fb081) {
              local_98 = local_48 + 0x30;
              local_d8 = 0xe2f873887325035c;
              if (local_98 == local_70) {
                local_d8 = 0x1b92184568b2cd5c;
              }
              local_e0 = 0x5d28cf28e0e5b4df;
            }
            else if (uVar5 == 0x608aac4c27697611) {
              local_cc = 1;
              local_c0 = param_1 + 1;
              local_b8 = param_1 + 2;
              local_78 = *param_1;
              local_d8 = 0x7a1d9758cb4a6e4e;
              if (local_78 == 0) {
                local_d8 = 0xf9c588c694ebb371;
              }
              local_e0 = 0x53721ad20cd30407;
            }
          }
          if ((longlong)uVar5 < -0x3268191d464804e5) break;
          if (uVar5 == 0xcd97e6e2b9b7fb1b) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar2 = (int *)((longlong)local_c8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_d8 = 0xe60dfe2dfd964193;
            if (iVar3 == local_cc) {
              local_d8 = 0xc6ad6002891b3b5d;
            }
            local_e0 = 0x8791e28cb5f9f112;
          }
          else if (uVar5 == 0xe0a580223114ceec) {
            thunk_FUN_1801f42e0(local_a8,local_b0);
            local_d8 = 0xa0bf35f224d662c4;
            local_e0 = 0xa08a7e6bceed5b2;
          }
          else if (uVar5 == 0xe8668d78f7f486c1) {
            local_a8 = local_a0;
            local_b0 = *local_b8 - local_a0;
            local_d8 = 0x83787657b625c12d;
            if (0xfff < local_b0) {
              local_d8 = 0xc09e3b587db4d6f0;
            }
            local_e0 = 0x63ddf67587310fc1;
            local_68 = local_a8;
            local_60 = local_b0;
            local_50 = local_a8;
          }
        }
        if ((longlong)uVar5 < -0x402f435f6c3f487d) break;
        if (uVar5 == 0xbfd0bca093c0b783) {
          local_48 = local_98;
          local_c8 = *(longlong **)(local_98 + 0x20);
          local_d8 = 0x9914e51425ec0026;
          if (local_c8 == (longlong *)0x0) {
            local_d8 = 0x39ae5f288f93eddb;
          }
          local_e0 = 0x58324389c7fc5d5a;
        }
        else if (uVar5 == 0xc126a69de2105d7c) {
          LOCK();
          plVar1 = local_c8 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          local_d8 = 0x8ecef483cf8cf0a8;
          if ((int)lVar4 == local_cc) {
            local_d8 = 0x22c50ec03e54bb32;
          }
          local_e0 = 0xef52e82287e34029;
        }
      }
      if (uVar5 != 0xa343cd2dfa85d931) break;
      local_58 = *(longlong *)(local_50 + -8);
      local_d8 = 0xe378bae155fdce71;
      if ((local_68 - local_58) - 8U < 0x20) {
        local_d8 = 0x2d01a4e0a17a5ea0;
      }
      local_e0 = 0xdd55c8c1af936d8e;
    }
  } while (uVar5 != 0xaab792149838b776);
  *param_1 = param_2;
  *local_c0 = param_3 * 0x30 + param_2;
  *local_b8 = param_4 * 0x30 + param_2;
  return;
}



void FUN_1800bfdc0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_110;
  ulonglong local_108;
  int local_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;

  local_108 = 0xfc62d0354438a288;
  local_110 = 0x14ecb694da095137;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar10 = local_108 ^ 0x9ddad8e14f9fc361;
          uVar9 = local_108 ^ local_110;
          local_110 = local_110 ^ 0x9ddad8e14f9fc361;
          local_108 = uVar10;
          if ((longlong)uVar9 < -0x1573ad0555e87f02) break;
          if ((longlong)uVar9 < 0x375813f865c6f5a8) {
            if ((longlong)uVar9 < 0x11b7d9a014c51eae) {
              if (uVar9 == 0xea8c52faaa1780fe) {
                local_a8[-1] = local_b0[-1];
                local_108 = 0x32f2d8b1bb603f58;
                if (local_78 == local_f8) {
                  local_108 = 0xed7d9a2f58d68795;
                }
                local_110 = 0x4be4b6fe16dfca96;
                local_c0 = local_70;
                local_b8 = local_78;
              }
              else if (uVar9 == 0xb77a4711a3fb725) {
                local_d0 = (undefined8 *)FUN_1800c0550(param_1,local_f8,param_4);
                local_108 = 0x4cec5651a4fbe3d6;
                local_110 = 0x2e91ffb55e0ad52b;
              }
            }
            else if (uVar9 == 0x11b7d9a014c51eae) {
              LOCK();
              plVar2 = local_e8 + 1;
              lVar8 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              local_108 = 0xa8b67c6c09712045;
              if ((int)lVar8 == local_fc) {
                local_108 = 0x50d84a3fc7e10ce8;
              }
              local_110 = 0x678059c7a227f940;
            }
            else if (uVar9 == 0x274f9a6dd3518455) {
              LOCK();
              plVar2 = local_d8 + 1;
              lVar8 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              local_108 = 0x264c9cfbacb4be70;
              if ((int)lVar8 == local_fc) {
                local_108 = 0x2c1728743e5855fa;
              }
              local_110 = 0xccc0ce0106a33e8e;
            }
          }
          else if ((longlong)uVar9 < 0x627da9e4faf136fd) {
            if (uVar9 == 0x375813f865c6f5a8) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar1 = (int *)((longlong)local_e8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              local_108 = 0xf15bb7692ba018b9;
              if (iVar3 == local_fc) {
                local_108 = 0xda06934fde90836c;
              }
              local_110 = 0x3e6d92c280f6c1bc;
            }
            else if (uVar9 == 0x4b4fef9de4d39928) {
              local_e0 = param_4 + 2;
              local_108 = 0x27232c6db6129ec8;
              if (local_f0 == local_f8) {
                local_108 = 0x668d16a80378a025;
              }
              local_110 = 0xf104e96e17fb8940;
            }
          }
          else if (uVar9 == 0x79166e4fadbff5ce) {
            local_b0 = local_b8;
            local_a8 = local_c0;
            local_78 = local_b8 + -5;
            local_70 = local_c0 + -5;
            *(undefined4 *)(local_c0 + -4) = *(undefined4 *)(local_b8 + -4);
            local_c0[-5] = local_b8[-5];
            uVar4 = *(undefined4 *)(local_b8 + -3);
            uVar5 = *(undefined4 *)((longlong)local_b8 + -0x14);
            uVar6 = *(undefined4 *)(local_b8 + -2);
            uVar7 = *(undefined4 *)((longlong)local_b8 + -0xc);
            local_b8[-3] = 0;
            local_b8[-2] = 0;
            local_d8 = (longlong *)local_c0[-2];
            *(undefined4 *)(local_c0 + -3) = uVar4;
            *(undefined4 *)((longlong)local_c0 + -0x14) = uVar5;
            *(undefined4 *)(local_c0 + -2) = uVar6;
            *(undefined4 *)((longlong)local_c0 + -0xc) = uVar7;
            local_108 = 0xec0fb3e8e74f2fb7;
            if (local_d8 == (longlong *)0x0) {
              local_108 = 0x21cc7b7f9e092b1c;
            }
            local_110 = 0xcb402985341eabe2;
          }
          else if (uVar9 == 0x627da9e4faf136fd) {
            *param_2 = local_d0;
            return;
          }
        }
        if ((longlong)uVar9 < -0x29d83afc5e16e878) break;
        if ((longlong)uVar9 < -0x1b94fe72a199bd30) {
          if (uVar9 == 0xd627c503a1e91788) {
            local_98 = *(undefined4 *)(param_4 + 1);
            local_a0 = *param_4;
            local_68 = *local_e0;
            uStack_60 = local_e0[1];
            *local_e0 = 0;
            local_e0[1] = 0;
            local_80 = param_4[4];
            *(undefined4 *)(local_f0 + 1) = *(undefined4 *)(local_f0 + -4);
            *local_f0 = local_f0[-5];
            *(undefined4 *)(local_f0 + 2) = *(undefined4 *)(local_f0 + -3);
            *(undefined4 *)((longlong)local_f0 + 0x14) = *(undefined4 *)((longlong)local_f0 + -0x14);
            *(undefined4 *)(local_f0 + 3) = *(undefined4 *)(local_f0 + -2);
            *(undefined4 *)((longlong)local_f0 + 0x1c) = *(undefined4 *)((longlong)local_f0 + -0xc);
            local_f0[-3] = 0;
            local_f0[-2] = 0;
            local_f0[4] = local_f0[-1];
            *local_c8 = *local_c8 + 0x28;
            local_b8 = local_f0 + -5;
            local_108 = 0x20e572d3de8adf28;
            if (local_b8 == local_f8) {
              local_108 = 0xff6a304d3d3c67e5;
            }
            local_110 = 0x59f31c9c73352ae6;
            local_c0 = local_f0;
          }
          else if (uVar9 == 0xe0d7e67538fb6b74) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            local_108 = 0xdcb226c652df79ac;
            if (iVar3 == local_fc) {
              local_108 = 0xe48824812ff98d6a;
            }
            local_110 = 0x363e743cf8c8f952;
          }
        }
        else if (uVar9 == 0xe46b018d5e6642d0) {
          (**(code **)(*local_e8 + 8))();
          local_108 = 0x2a34fc6c30be4e02;
          local_110 = 0xe502d9c79be89707;
        }
        else if (uVar9 == 0xe88e66a19e31f3bf) {
          local_fc = 1;
          local_c8 = (longlong *)(param_1 + 8);
          local_f0 = *(undefined8 **)(param_1 + 8);
          local_108 = 0x685d724484bfcec9;
          if (local_f0 == *(undefined8 **)(param_1 + 0x10)) {
            local_108 = 0x286539a87a53e0c4;
          }
          local_110 = 0x23129dd9606c57e1;
          local_f8 = param_3;
        }
      }
      if (-0x30c9da5454a926fc < (longlong)uVar9) break;
      if (uVar9 == 0x9789ffc614832965) {
        *(undefined4 *)(local_f0 + 1) = *(undefined4 *)(param_4 + 1);
        *local_f0 = *param_4;
        local_f0[2] = 0;
        local_f0[3] = 0;
        local_f0[2] = *local_e0;
        local_f0[3] = param_4[3];
        *local_e0 = 0;
        local_e0[1] = 0;
        local_f0[4] = param_4[4];
        *local_c8 = *local_c8 + 0x28;
        local_108 = 0x956cfdb0700532f5;
        local_110 = 0xf71154548af40408;
LAB_1800bfe7a:
        local_d0 = local_f8;
      }
      else if (uVar9 == 0xa6992cd14e094d03) {
        *(undefined4 *)(local_f8 + 1) = local_98;
        *local_f8 = local_a0;
        local_e8 = (longlong *)local_f8[3];
        *(undefined4 *)(local_f8 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)local_f8 + 0x14) = local_68._4_4_;
        *(undefined4 *)(local_f8 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)local_f8 + 0x1c) = uStack_60._4_4_;
        local_108 = 0x45740d8beba1344b;
        if (local_e8 == (longlong *)0x0) {
          local_108 = 0x9bf5f1805432f3e0;
        }
        local_110 = 0x54c3d42bff642ae5;
      }
    }
    if (uVar9 == 0xcf3625abab56d905) {
      local_f8[4] = local_80;
      local_108 = 0xb0a40ecc19de36aa;
      local_110 = 0xd2d9a728e32f0057;
      goto LAB_1800bfe7a;
    }
    if (uVar9 == 0xd2b650bdd7317438) {
      (**(code **)(*local_d8 + 8))();
      local_108 = 0x72fe034e8d338ff7;
      local_110 = 0x987251b427240f09;
    }
  } while( true );
}


