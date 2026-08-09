#include "../include/aerialclient_types.h"


undefined8
FUN_1801a00d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,longlong *param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  short *psVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  int iStack_314;
  longlong local_310;
  undefined **local_308 [3];
  longlong *local_2f0;
  longlong *local_2e8;
  longlong *local_2d0;
  ulonglong *local_2c8;
  int *local_2b8;
  longlong local_2a8;
  ulonglong local_2a0;
  uint local_298;
  undefined **local_288 [12];
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  longlong local_208;
  uintptr_t local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 local_1d8;
  undefined1 uStack_1d1;
  ulonglong local_1d0;
  longlong *plStack_1c8;
  longlong *local_1c0;
  longlong *local_1a8;
  ulonglong *local_1a0;
  int *local_190;
  longlong local_180;
  ulonglong local_178;
  uint local_170;
  undefined **local_160 [13];
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  char *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  uint local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  uintptr_t local_78;
  undefined4 local_6c;
  short local_68 [2];
  uint local_64;
  undefined4 *local_60;
  undefined1 local_51;
  undefined4 local_50;
  char local_4a;
  char local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_78 = 0;
  local_4a = '\x01';
  local_b8 = 1;
  local_c0 = 0x27;
  local_50 = 1;
  local_f0 = 0x10;
  local_ac = 4;
  local_a8 = 0x22;
  local_a4 = -1;
  local_e8 = 0xf;
  local_e0 = 0xfff;
  local_a0 = 2;
  local_9c = -0x88;
  local_49 = '\0';
  local_64 = 0;
  local_d8 = -8;
  local_d0 = (char *)0x20;
  local_f8 = param_2;
  FUN_1801979f0(&local_310,1);
  iVar1 = *(int *)(local_310 + 4);
  local_c8 = param_3;
  if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
    lVar9 = param_3[3];
    if (lVar9 != 0) goto LAB_1801a02a0;
    uVar5 = FUN_1801d8b48(1);
    uStack_1e0 = (undefined7)uVar5;
    uStack_1d9 = (undefined1)((ulonglong)uVar5 >> 0x38);
  }
  else {
    lVar9 = FUN_1801d8d8c();
LAB_1801a02a0:
    plVar11 = *(longlong **)(lVar9 + 8);
    uStack_1e0 = SUB87(plVar11,0);
    uStack_1d9 = (undefined1)((ulonglong)plVar11 >> 0x38);
    (**(code **)(*plVar11 + 8))();
  }
  FUN_180197c40((longlong)local_308 + (longlong)iVar1 + -8,local_228,&local_1e8);
  if ((local_220 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*local_220 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,local_50);
  }
  if (((longlong *)CONCAT17(uStack_1d9,uStack_1e0) != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*(longlong *)CONCAT17(uStack_1d9,uStack_1e0) + 0x10))(),
     puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,local_50);
  }
  pcVar16 = (char *)param_1[3];
  pcVar3 = (char *)param_1[4];
  if (pcVar16 == pcVar3) {
    FUN_18019e350(&local_310,param_4);
  }
  else {
    for (; pcVar16 != pcVar3; pcVar16 = pcVar16 + 3) {
      if (*pcVar16 == local_49) {
        cVar4 = FUN_1801a0fc0(param_1,&local_310,pcVar16,param_5,param_4);
        plVar11 = local_98;
        if (cVar4 == '\0') {
          if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
            FUN_1801994d0(&local_1e8,local_50);
            iVar1 = *(int *)((longlong)local_1e8 + 4);
            if (local_c8[3] == 0) {
              local_90 = (longlong *)FUN_1801d8b48(1);
            }
            else {
              local_90 = *(longlong **)(local_c8[3] + 8);
              (**(code **)(*local_90 + 8))();
            }
            FUN_180199720((longlong)&local_1e8 + (longlong)iVar1,local_218,&local_98);
            if ((local_210 != (longlong *)0x0) &&
               (puVar6 = (undefined8 *)(**(code **)(*local_210 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)(puVar6,local_50);
            }
            if ((local_90 != (longlong *)0x0) &&
               (puVar6 = (undefined8 *)(**(code **)(*local_90 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)(puVar6,local_50);
            }
            psVar12 = (short *)((longlong)&local_6c + 2);
            if (pcVar16[1] != local_49) {
              local_6c._2_2_ = (short)pcVar16[1];
              psVar12 = local_68;
            }
            local_6c = CONCAT22(local_6c._2_2_,0x25);
            *psVar12 = (short)pcVar16[2];
            psVar12[1] = 0;
            local_98 = param_5;
            local_90 = (longlong *)&local_6c;
            lVar9 = FUN_1801e15b0();
            local_88 = (longlong)local_68 + (lVar9 << ((byte)local_b8 & 0x3f)) + -4;
            FUN_1801998e0(&local_1e8);
            if (((local_a8 & local_170) == local_a0) || (uVar13 = *local_1a0, uVar13 == 0)) {
              if (((local_170 & local_ac) == local_64) && (*local_1a8 != 0)) {
                local_208 = *plStack_1c8;
                uVar13 = *local_1a8 + (longlong)*local_190 * 2;
                goto LAB_1801a05e9;
              }
              local_208 = 0;
              local_200 = local_78;
            }
            else {
              local_208 = *local_1c0;
              if (uVar13 < local_178) {
                uVar13 = local_178;
              }
LAB_1801a05e9:
              local_200 = (longlong)(uVar13 - local_208) >> ((byte)local_b8 & 0x3f);
            }
            FUN_180072fc0(&local_98,0xfde9,&local_208,&local_51);
            plVar11 = &local_98;
            if (local_e8 < local_80) {
              plVar11 = local_98;
            }
            FUN_18008cbd0(&local_310,plVar11,local_88);
            if (local_e8 < local_80) {
              uVar13 = local_b8 + local_80;
              plVar11 = local_98;
              if (local_e0 < uVar13) {
                plVar11 = (longlong *)local_98[-1];
                if (local_d0 <= (char *)((longlong)local_98 + (local_d8 - (longlong)plVar11))) goto LAB_1801a0cd3;
                uVar13 = local_80 + 0x28;
              }
              thunk_FUN_1801f42e0(plVar11,uVar13);
            }
            *(undefined ***)((longlong)&local_1e8 + (longlong)*(int *)((longlong)local_1e8 + 4)) = &PTR_LAB_18021fc08;
            *(int *)((longlong)&local_1f0 + (longlong)*(int *)((longlong)local_1e8 + 4) + 4) =
                 local_9c + *(int *)((longlong)local_1e8 + 4);
            uStack_1e0 = 0x18021fc20;
            uStack_1d9 = 0;
            FUN_1801adfa0(&stack0xfffffffffffffe20);
            lVar9 = local_180;
            uStack_1e0 = 0x18021fca0;
            uStack_1d9 = 0;
            if (local_180 != 0) {
              if ((*(longlong **)(local_180 + 8) != (longlong *)0x0) &&
                 (puVar6 = (undefined8 *)(**(code **)(**(longlong **)(local_180 + 8) + 0x10))(),
                 puVar6 != (undefined8 *)0x0)) {
                (**(code **)*puVar6)(puVar6,local_50);
              }
              thunk_FUN_1801f42e0(lVar9,local_f0);
            }
            local_160[0] = &PTR_FUN_18020e8e8;
            std::ios_base::_Ios_base_dtor((ios_base *)local_160);
          }
          else {
            local_98 = (longlong *)CONCAT71(local_98._1_7_,0x25);
            pcVar7 = (char *)((longlong)&local_98 + 1);
            if (pcVar16[1] != local_49) {
              local_98._2_6_ = SUB86(plVar11,2);
              local_98._0_2_ = CONCAT11(pcVar16[1],0x25);
              pcVar7 = (char *)((longlong)&local_98 + 2);
            }
            *pcVar7 = pcVar16[2];
            pcVar7[1] = local_49;
            local_1e8 = param_5;
            uStack_1e0 = SUB87(&local_98,0);
            uStack_1d9 = (undefined1)((ulonglong)&local_98 >> 0x38);
            sVar8 = strlen((char *)&local_98);
            local_1d8 = (undefined7)((longlong)&local_98 + sVar8);
            uStack_1d1 = (undefined1)((longlong)&local_98 + sVar8 >> 0x38);
            FUN_180199d90(&local_310,&local_1e8);
          }
        }
      }
      else {
        FUN_180197e00(&local_310);
      }
    }
  }
  local_6c = local_a4;
  if (((local_a8 & local_298) == local_a0) || (uVar13 = *local_2c8, uVar13 == 0)) {
    if (((local_298 & local_ac) == local_64) && (*local_2d0 != 0)) {
      local_1f8 = *local_2f0;
      local_1f0 = (*local_2d0 + (longlong)*local_2b8) - local_1f8;
    }
    else {
      local_1f8 = 0;
      local_1f0 = local_78;
    }
  }
  else {
    local_1f8 = *local_2e8;
    if (uVar13 < local_2a0) {
      uVar13 = local_2a0;
    }
    local_1f0 = uVar13 - local_1f8;
  }
  FUN_18002e670(&local_1f8);
  local_1d8 = (undefined7)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xf) >> 8);
  local_1e8 = (longlong *)*param_1;
  uStack_1e0 = (undefined7)param_1[1];
  uStack_1d9 = (undefined1)((ulonglong)param_1[1] >> 0x38);
  local_1d0 = 0;
  plStack_1c8 = (longlong *)0x0;
  local_1c0 = (longlong *)0x0;
  uVar13 = param_1[3];
  uVar15 = param_1[4] - uVar13;
  if (uVar15 >> 0x20 == 0) {
    uVar10 = (uVar15 & 0xffffffff) / 3;
    uVar14 = (uVar15 & 0xffffffff) % 3;
  }
  else {
    uVar10 = (longlong)uVar15 / 3;
    uVar14 = (longlong)uVar15 % 3;
  }
  if (param_1[4] != uVar13) {
    if (0x5555555555555555 < uVar10) {
      FUN_18018b7f0(0x5555555555555555,uVar14);
      goto LAB_1801a0cf9;
    }
    if (uVar10 < 0x556) {
      uVar10 = FUN_1801d61c8(uVar15);
    }
    else {
      lVar9 = FUN_1801d61c8(local_c0 + uVar15);
      uVar10 = local_c0 + lVar9 & 0xffffffffffffffe0;
      *(longlong *)(uVar10 - 8) = lVar9;
    }
    local_1c0 = (longlong *)(uVar15 + uVar10);
    lVar9 = param_1[4] - param_1[3];
    uVar13 = uVar10;
    local_1d0 = uVar10;
    plStack_1c8 = (longlong *)uVar10;
    FUN_1802079d0(uVar10,param_1[3],lVar9);
    plStack_1c8 = (longlong *)(lVar9 + uVar10);
  }
  puVar6 = local_c8;
  uVar5 = local_f8;
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 <= local_a4) goto LAB_1801a0b9d;
  cVar4 = local_49;
  if ((ulonglong)uVar2 < (ulonglong)local_c8[1]) {
    uVar15 = *(ulonglong *)(local_c8[2] + (ulonglong)uVar2 * 8);
    lVar9 = local_c8[2] + local_c8[1] * 8;
    uVar10 = uVar15 & 0xfffffffffffffff;
    uVar13 = 0x2e0aa19bd516343c;
    uVar15 = uVar15 >> 0x3c;
    if (uVar15 < 7) {
      if (uVar15 < 4) {
        if (uVar15 < 2) {
          if (uVar15 == 1) {
            local_60 = (undefined4 *)CONCAT44(local_60._4_4_,*(undefined4 *)(lVar9 + uVar10));
            cVar4 = local_4a;
          }
          else {
LAB_1801a0b4c:
            cVar4 = '\0';
          }
        }
        else if (uVar15 == 3) {
          local_60 = *(undefined4 **)(lVar9 + uVar10);
          cVar4 = '\x03';
        }
        else {
          local_60 = (undefined4 *)CONCAT44(local_60._4_4_,*(undefined4 *)(lVar9 + uVar10));
          cVar4 = '\x02';
        }
      }
      else if (uVar15 == 4) {
        local_60 = *(undefined4 **)(lVar9 + uVar10);
        cVar4 = '\x04';
      }
      else if (uVar15 == 6) {
        local_60 = (undefined4 *)CONCAT71(local_60._1_7_,*(undefined1 *)(lVar9 + uVar10));
        cVar4 = '\x06';
      }
      else {
        local_60 = (undefined4 *)CONCAT71(local_60._1_7_,*(undefined1 *)(lVar9 + uVar10));
        cVar4 = '\x05';
      }
    }
    else if (uVar15 < 10) {
      if (uVar15 == 7) {
        local_60 = (undefined4 *)CONCAT44(local_60._4_4_,*(undefined4 *)(lVar9 + uVar10));
        cVar4 = '\a';
      }
      else if (uVar15 == 9) {
        local_60 = *(undefined4 **)(lVar9 + uVar10);
        cVar4 = '\t';
      }
      else {
        local_60 = *(undefined4 **)(lVar9 + uVar10);
        cVar4 = '\b';
      }
    }
    else if (uVar15 < 0xc) {
      if (uVar15 == 10) {
        local_60 = *(undefined4 **)(lVar9 + uVar10);
        cVar4 = '\n';
      }
      else {
        local_60 = *(undefined4 **)(lVar9 + uVar10);
        cVar4 = '\v';
      }
    }
    else if (uVar15 == 0xc) {
      local_60 = *(undefined4 **)(lVar9 + uVar10);
      uVar13 = *(ulonglong *)(lVar9 + 8 + uVar10);
      cVar4 = '\f';
    }
    else {
      if (uVar15 != 0xd) goto LAB_1801a0b4c;
      local_60 = *(undefined4 **)(lVar9 + uVar10);
      uVar13 = *(ulonglong *)(lVar9 + 8 + uVar10);
      cVar4 = '\r';
    }
  }
  local_98 = (longlong *)CONCAT71(local_98._1_7_,cVar4);
  local_90 = (longlong *)local_60;
  local_88 = uVar13;
  uVar13 = FUN_180022af0(&local_98,&local_51);
  if (0x7fffffff < uVar13) {
LAB_1801a0cf9:
    FUN_1801b23c0(&DAT_1802a756c,&DAT_18029b85f,0x17,0x13,&DAT_1802a7580);
    FUN_180004aa0(&DAT_1802a756c);
  }
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(int)uVar13);
LAB_1801a0b9d:
  local_98 = &local_310;
  FUN_1801a2150(uVar5,*puVar6,local_6c,&local_1e8,local_4a,&local_98);
  if (local_1d0 != 0) {
    uVar15 = (longlong)local_1c0 - local_1d0;
    uVar13 = local_1d0;
    if (local_e0 < uVar15) {
      uVar13 = *(ulonglong *)(local_1d0 - 8);
      if (local_d0 <= (char *)((local_1d0 + local_d8) - uVar13)) {
LAB_1801a0cd3:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_64,local_78);
      }
      uVar15 = uVar15 + local_c0;
    }
    thunk_FUN_1801f42e0(uVar13,uVar15);
  }
  *(undefined ***)((longlong)local_308 + (longlong)*(int *)(local_310 + 4) + -8) = &PTR_LAB_18021fb60;
  *(int *)((longlong)&iStack_314 + (longlong)*(int *)(local_310 + 4)) = local_9c + *(int *)(local_310 + 4);
  local_308[0] = &PTR_FUN_18021fb70;
  FUN_18019ddd0(local_308);
  local_308[0] = &PTR_FUN_18020e870;
  if (local_2a8 != 0) {
    if ((*(longlong **)(local_2a8 + 8) != (longlong *)0x0) &&
       (puVar6 = (undefined8 *)(**(code **)(**(longlong **)(local_2a8 + 8) + 0x10))(), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,local_50);
    }
    thunk_FUN_1801f42e0(local_2a8,local_f0);
  }
  local_288[0] = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor((ios_base *)local_288);
  return uVar5;
}



void Unwind_1801a0d40(void)

{
  Unwind_1801dd394();
}



void Unwind_1801a0d70(void)

{
  Unwind_1801dd394();
}



void Unwind_1801a0da0(void)

{
  Unwind_1801dd394();
}



void Unwind_1801a0dd0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x168) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x168) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x2f8));
    }
  }
  return;
}



void Unwind_1801a0e30(undefined8 param_1,longlong param_2)

{
  FUN_18019b2a0(param_2 + 0x160);
  return;
}



void Unwind_1801a0e70(void)

{
  Unwind_1801dd394();
}



void Unwind_1801a0ea0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2b0);
  return;
}



void Unwind_1801a0ee0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x2b8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x2b8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x2f8));
    }
  }
  return;
}



void Unwind_1801a0f40(undefined8 param_1,longlong param_2)

{
  FUN_180199ca0(param_2 + 0x160);
  return;
}



void Unwind_1801a0f80(undefined8 param_1,longlong param_2)

{
  FUN_18019b5b0(param_2 + 0x38);
  return;
}



undefined8 FUN_1801a0fc0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,ulonglong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  longlong *_Str1;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *_Str2;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  bool bVar17;
  undefined1 local_118 [8];
  ulonglong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  uintptr_t local_e8;
  ulonglong local_e0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  uint local_9c;
  undefined1 local_98 [16];
  undefined *local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined4 local_77;
  undefined *local_73;
  uint local_6b;
  uintptr_t local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  uint local_40;
  undefined1 local_3b;
  undefined1 local_3a;
  char local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_3a = 0x2d;
  local_60 = 0;
  local_3b = 100;
  local_a8 = 1;
  local_43 = 0x2f;
  local_cc = 1;
  local_42 = 0x6d;
  local_110 = 0xfff;
  local_108 = 0x28;
  local_50 = 0xf;
  local_9c = 100;
  local_39 = '\0';
  local_40 = 0;
  local_100 = -8;
  local_58 = 0x20;
  local_41 = 0x30;
  iVar5 = *(int *)(param_4 + 0x14);
  iVar14 = iVar5 + 0x76c;
  iVar16 = *(int *)(param_4 + 0x10) + 1;
  cVar1 = *(char *)(param_3 + 1);
  bVar9 = *(byte *)(param_3 + 2);
  if ((char)bVar9 < 'Y') {
    if ((char)bVar9 < 'H') {
      if ('C' < (char)bVar9) {
        if ((char)bVar9 < 'F') {
          if (bVar9 != 0x44) {
            return 0;
          }
          local_98._0_3_ = 0x6d0000;
          FUN_1801a0fc0(param_1,param_2,local_98,param_4,param_5);
          FUN_180197e00(param_2,local_43);
          local_98[1] = local_39;
          local_98[0] = local_39;
          local_98[2] = local_3b;
          FUN_1801a0fc0(param_1,param_2,local_98,param_4,param_5);
          FUN_180197e00(param_2,local_43);
          local_98[1] = local_39;
          local_98[0] = local_39;
          uVar4 = 0x79;
        }
        else {
          if (bVar9 != 0x46) {
            return 0;
          }
          local_98._0_3_ = 0x590000;
          FUN_1801a0fc0(param_1,param_2,local_98,param_4,param_5);
          FUN_180197e00(param_2,local_3a);
          local_98[1] = local_39;
          local_98[0] = local_39;
          local_98[2] = local_42;
          FUN_1801a0fc0(param_1,param_2,local_98,param_4,param_5);
          FUN_180197e00(param_2,local_3a);
          local_98[1] = local_39;
          local_98[0] = local_39;
          uVar4 = local_3b;
        }
        local_98[2] = uVar4;
        FUN_1801a0fc0(param_1,param_2,local_98,param_4,param_5);
        return 1;
      }
      if (bVar9 != 0x43) {
        return 0;
      }
      if (cVar1 != '\0') {
        return 0;
      }
      if (iVar5 < -0x76c) {
        FUN_180197e00(param_2,0x2d);
      }
      uVar6 = 0;
      if (iVar14 % (int)local_9c < (int)local_40) {
        uVar6 = local_9c;
      }
      iVar5 = iVar14 % (int)local_9c + uVar6;
      uVar6 = iVar5 - iVar14;
      if (iVar5 < iVar14) {
        uVar6 = iVar14 - iVar5;
      }
      local_b0 = CONCAT44(local_b0._4_4_,uVar6 / local_9c);
      local_b8 = (undefined *)0x1000000000000000;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined *)0x0;
      local_80 = local_50;
      local_f8._8_8_ = &local_b8;
      local_f8._0_8_ = local_a8;
      FUN_1801b23c0(&DAT_1802a77f8,&DAT_18029c491,0x13,6,&DAT_1802a7800);
      local_c8 = &DAT_1802a77f8;
      local_c0 = (undefined1 *)0x5;
      FUN_180003080(local_118,local_98,&local_c8,local_f8,local_60);
      puVar15 = local_98;
      if (local_50 < local_80) {
        puVar15 = (undefined1 *)local_98._0_8_;
      }
      FUN_18008cbd0(param_2,puVar15,local_88);
    }
    else {
      if ('R' < (char)bVar9) {
        if (bVar9 != 0x53) {
          if (bVar9 != 0x54) {
            return 0;
          }
          local_e8 = CONCAT44((int)*(undefined8 *)(param_4 + 4),(int)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20));
          local_f8._8_8_ = 0x1000000000000004;
          local_f8._0_8_ = 0x1000000000000000;
          local_98 = (undefined1  [16])0x0;
          local_88 = (undefined *)0x0;
          local_80 = 0xf;
          FUN_180002240(local_98,0x1c);
          local_88 = (undefined *)local_60;
          local_c8 = (undefined *)0x2;
          local_c0 = local_f8;
          FUN_1801b23c0(&DAT_1802a7804,&DAT_18029c4be,0x19,0xd,&DAT_1802a7814);
          local_b8 = &DAT_1802a7804;
          local_b0 = 0xc;
          FUN_180003080(local_118,local_98,&local_b8,&local_c8,local_60);
          puVar15 = local_98;
          if (local_50 < local_80) {
            puVar15 = (undefined1 *)local_98._0_8_;
          }
          FUN_18008cbd0(param_2,puVar15,local_88);
          if (local_80 <= local_50) goto LAB_1801a1674;
          uVar11 = local_a8 + local_80;
          lVar13 = local_98._0_8_;
          if (local_110 < uVar11) {
            lVar13 = *(longlong *)(local_98._0_8_ + -8);
            if (local_58 <= (ulonglong)((local_98._0_8_ + local_100) - lVar13)) goto LAB_1801a1e9a;
            uVar11 = local_80 + local_108;
          }
          thunk_FUN_1801f42e0(lVar13,uVar11);
        }
LAB_1801a1674:
        if (cVar1 != '\0') {
          return 0;
        }
        uVar11 = *param_5;
        if (uVar11 >> 0x20 == 0) {
          uVar12 = (uVar11 & 0xffffffff) / 86400000;
        }
        else {
          uVar12 = (longlong)uVar11 / 86400000;
        }
        bVar9 = (byte)local_58;
        lVar13 = ((longlong)(uVar12 << (bVar9 & 0x3f)) >> (bVar9 & 0x3f)) * 86400000;
        uVar11 = ((longlong)(uVar12 - (lVar13 - uVar11 != 0 && (longlong)uVar11 <= lVar13) << (bVar9 & 0x3f)) >>
                 (bVar9 & 0x3f)) * -86400000 + uVar11;
        uVar12 = -uVar11;
        if ((longlong)uVar12 < 0) {
          uVar12 = uVar11;
        }
        uVar11 = uVar12;
        if (uVar12 >> 0x20 == 0) {
          uVar11 = uVar12 & 0xffffffff;
        }
        uVar11 = ((longlong)(uVar11 / 3600000 << (bVar9 & 0x3f)) >> (bVar9 & 0x3f)) * -3600000 + uVar12;
        if (uVar11 >> 0x20 == 0) {
          uVar7 = (uVar11 & 0xffffffff) / 60000;
        }
        else {
          uVar7 = (longlong)uVar11 / 60000;
        }
        uVar11 = ((longlong)(uVar7 << (bVar9 & 0x3f)) >> (bVar9 & 0x3f)) * -60000 + uVar11;
        if (uVar11 >> 0x20 == 0) {
          uVar11 = (uVar11 & 0xffffffff) / 1000;
        }
        else {
          uVar11 = (longlong)uVar11 / 1000;
        }
        if (uVar12 >> 0x20 == 0) {
          uVar12 = (uVar12 & 0xffffffff) % 1000;
        }
        else {
          uVar12 = (longlong)uVar12 % 1000;
        }
        local_98._0_8_ = uVar12;
        local_f8._0_8_ = uVar11;
        FUN_1801a84e0(param_2,local_f8,local_98);
        return 1;
      }
      if ('P' < (char)bVar9) {
        if (bVar9 != 0x51) {
          return 0;
        }
        return 1;
      }
      if (bVar9 != 0x48) {
        return 0;
      }
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_4 + 8));
      local_b8 = (undefined *)0x1000000000000000;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined *)0x0;
      local_80 = 0xf;
      local_f8._8_8_ = &local_b8;
      local_f8._0_8_ = 1;
      FUN_1801b23c0(&DAT_1802a77f8,&DAT_18029c491,0x13,6,&DAT_1802a7800);
      local_c8 = &DAT_1802a77f8;
      local_c0 = (undefined1 *)0x5;
      FUN_180003080(local_118,local_98,&local_c8,local_f8,local_60);
      puVar15 = local_98;
      if (local_50 < local_80) {
        puVar15 = (undefined1 *)local_98._0_8_;
      }
      FUN_18008cbd0(param_2,puVar15,local_88);
    }
LAB_1801a1783:
    if (local_80 <= local_50) {
      return 1;
    }
    uVar12 = local_a8 + local_80;
    uVar11 = local_80;
    lVar10 = local_98._0_8_;
    lVar13 = local_98._0_8_;
    if (uVar12 <= local_110) goto LAB_1801a17c3;
  }
  else {
    if ((char)bVar9 < 'q') {
      if ('c' < (char)bVar9) {
        if ((char)bVar9 < 'm') {
          if ((bVar9 & 0x7e) != 100) {
            return 0;
          }
          if (cVar1 != '\0') {
            return 0;
          }
          iVar16 = *(int *)(param_4 + 0xc);
          if (iVar16 < 10) {
            uVar4 = 0x20;
            if (bVar9 == 100) {
              uVar4 = 0x30;
            }
            FUN_180197e00(param_2,uVar4);
            iVar16 = *(int *)(param_4 + 0xc);
          }
        }
        else {
          if (bVar9 != 0x6d) {
            return 0;
          }
          if (cVar1 != '\0') {
            return 0;
          }
          if (*(int *)(param_4 + 0x10) < 9) {
            FUN_180197e00(param_2,0x30);
          }
        }
        FUN_1801a3270(param_2,iVar16);
        return 1;
      }
      if (bVar9 != 0x59) {
        if (bVar9 != 0x5a) {
          return 0;
        }
        FUN_18008cbd0(param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
        return 1;
      }
      if (cVar1 != '\0') {
        return 0;
      }
      if (iVar5 < -0x76c) {
        FUN_180197e00(param_2,0x2d);
      }
      iVar5 = -iVar14;
      if (-iVar14 < 0) {
        iVar5 = iVar14;
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar5);
      local_b8 = (undefined *)0x1000000000000000;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined *)0x0;
      local_80 = local_50;
      local_f8._8_8_ = &local_b8;
      local_f8._0_8_ = local_a8;
      FUN_1801b23c0(&DAT_1802a77ec,&DAT_18029c460,0x11,6,&DAT_1802a77f4);
      local_c8 = &DAT_1802a77ec;
      local_c0 = (undefined1 *)0x5;
      FUN_180003080(local_118,local_98,&local_c8,local_f8,local_60);
      puVar15 = local_98;
      if (local_50 < local_80) {
        puVar15 = (undefined1 *)local_98._0_8_;
      }
      FUN_18008cbd0(param_2,puVar15,local_88);
      goto LAB_1801a1783;
    }
    if ((char)bVar9 < 'y') {
      if (bVar9 == 0x71) {
        return 1;
      }
      if (bVar9 != 0x72) {
        return 0;
      }
      plVar2 = *(longlong **)(*(longlong *)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4) + 0x40) + 8);
      (**(code **)(*plVar2 + 8))();
      lVar13 = FUN_1801d8d8c();
      plVar3 = *(longlong **)(lVar13 + 8);
      if (plVar2 == plVar3) {
        bVar17 = true;
      }
      else {
        _Str1 = plVar2 + 6;
        if ((longlong *)plVar2[5] != (longlong *)0x0) {
          _Str1 = (longlong *)plVar2[5];
        }
        if (((char)*_Str1 == '*') && (*(char *)((longlong)_Str1 + 1) == local_39)) {
          bVar17 = false;
        }
        else {
          if (plVar3 == (longlong *)0x0) {
            _Str2 = (longlong *)&DAT_18020c3c0;
          }
          else {
            _Str2 = plVar3 + 6;
            if ((longlong *)plVar3[5] != (longlong *)0x0) {
              _Str2 = (longlong *)plVar3[5];
            }
          }
          uVar6 = strcmp((char *)_Str1,(char *)_Str2);
          bVar17 = uVar6 == local_40;
        }
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,local_cc);
      }
      if (!bVar17) {
        return 0;
      }
      local_98._0_8_ = param_4;
      FUN_1801b23c0(&DAT_1802a77dc,&DAT_18029c430,0x11,0xc,&DAT_1802a77e8);
      local_98._8_8_ = &DAT_1802a77dc;
      local_88 = &DAT_1802a77e7;
      FUN_180199d90(param_2,local_98);
      return 1;
    }
    if (bVar9 == 0x79) {
      if (cVar1 != '\0') {
        return 0;
      }
      iVar5 = 0;
      if (iVar14 % 100 < 0) {
        iVar5 = 100;
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar14 % 100 + iVar5);
      local_b8 = (undefined *)0x1000000000000000;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined *)0x0;
      local_80 = 0xf;
      local_f8._8_8_ = &local_b8;
      local_f8._0_8_ = 1;
      FUN_1801b23c0(&DAT_1802a77f8,&DAT_18029c491,0x13,6,&DAT_1802a7800);
      local_c8 = &DAT_1802a77f8;
      local_c0 = (undefined1 *)0x5;
      FUN_180003080(local_118,local_98,&local_c8,local_f8,local_60);
      puVar15 = local_98;
      if (local_50 < local_80) {
        puVar15 = (undefined1 *)local_98._0_8_;
      }
      FUN_18008cbd0(param_2,puVar15,local_88);
      goto LAB_1801a1783;
    }
    if (bVar9 != 0x7a) {
      return 0;
    }
    local_78 = 0x2b;
    local_77 = 0;
    local_98._8_8_ = 0x1000000000000001;
    local_98._0_8_ = 0x6000000000000000;
    FUN_1801b23c0(&DAT_1802a7818,&DAT_18029c503,0x18,2,&DAT_1802a781c);
    local_73 = &DAT_18020c3c0;
    if (cVar1 != '\0') {
      local_73 = &DAT_1802a7818;
    }
    local_88 = (undefined *)0xb000000000000005;
    local_6b = local_40;
    local_80 = 0x100000000000000d;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = local_50;
    FUN_180002240(local_f8,0x46);
    local_e8 = local_60;
    local_c8 = (undefined *)0x4;
    local_c0 = local_98;
    FUN_1801b23c0(&DAT_1802a7820,&DAT_18029c53b,0x12,0xf,&DAT_1802a7830);
    local_b8 = &DAT_1802a7820;
    local_b0 = 0xe;
    FUN_180003080(local_118,local_f8,&local_b8,&local_c8,local_60);
    puVar15 = local_f8;
    if (local_50 < local_e0) {
      puVar15 = (undefined1 *)local_f8._0_8_;
    }
    FUN_18008cbd0(param_2,puVar15,local_e8);
    if (local_e0 <= local_50) {
      return 1;
    }
    uVar12 = local_a8 + local_e0;
    uVar11 = local_e0;
    lVar10 = local_f8._0_8_;
    lVar13 = local_f8._0_8_;
    if (uVar12 <= local_110) goto LAB_1801a17c3;
  }
  lVar13 = *(longlong *)(lVar10 + -8);
  if (local_58 <= (ulonglong)((lVar10 + local_100) - lVar13)) {
LAB_1801a1e9a:
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_40,local_60);
  }
  uVar12 = uVar11 + local_108;
LAB_1801a17c3:
  thunk_FUN_1801f42e0(lVar13,uVar12);
  return 1;
}



void Unwind_1801a1ec0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



void Unwind_1801a1ef0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a1f20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a1f50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a1f80(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a1fb0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a1fe0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a2010(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x40) + 0x10))();
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xac));
  }
  return;
}



void Unwind_1801a2060(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a2090(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a20c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801a20f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



void Unwind_1801a2120(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void FUN_1801a2150(undefined8 *param_1,undefined8 *param_2,int param_3,int *param_4,byte param_5,longlong *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte local_203;
  byte local_202;
  byte local_201;
  ulonglong local_200;
  ulonglong local_1f8;
  undefined1 local_1e9;
  byte local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  byte local_1e5;
  uint local_1e4;
  uint local_1dc;
  undefined8 *local_1d8;
  int local_1d0;
  uint local_1cc;
  longlong local_1c8;
  uint local_1bc;
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  uint local_1a8;
  int local_1a4;
  uint local_1a0;
  uint local_19c;
  longlong local_198;
  ulonglong local_190;
  undefined1 *local_188;
  ulonglong *local_180;
  ulonglong *local_178;
  undefined1 *local_170;
  ulonglong *local_168;
  uint local_160;
  uint local_15c;
  int local_158;
  int local_154;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  ulonglong *local_e0;
  longlong *local_d8;
  undefined1 *local_d0;
  ulonglong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  ulonglong *local_98;
  longlong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;

  local_1f8 = 0x3880c5d92fc86fce;
  local_200 = 0x4e9b2d19ab23932e;
LAB_1801a2270:
  do {
    while( true ) {
      uVar3 = local_1f8 ^ 0x8c7f8d7f05ff2bf6;
      uVar2 = local_1f8 ^ local_200;
      local_200 = local_200 ^ 0x8c7f8d7f05ff2bf6;
      local_1f8 = uVar3;
      if ((longlong)uVar2 < 0x1b385d08a011efd7) break;
      if ((longlong)uVar2 < 0x444da1505ed945ed) {
        if ((longlong)uVar2 < 0x2c6b2cb6a2a3ee58) {
          if ((longlong)uVar2 < 0x25b2a1f01d7557d9) {
            if (uVar2 == 0x1b385d08a011efd7) {
              local_202 = param_5;
              if ((byte)param_4[4] != local_203) {
                local_202 = (byte)param_4[4];
              }
              local_1f8 = 0x72a99529c02f63be;
              local_200 = 0x54d38f2499c6e50c;
            }
            else if (uVar2 == 0x1df784710e547057) {
              local_50 = local_100;
              local_1e7 = *local_100;
              local_130 = *local_178;
              local_138 = local_1c8 + local_130;
              local_1f8 = 0x17d289b2cf1dc886;
              if (*local_c8 < local_138) {
                local_1f8 = 0x3cdd6135536b7aa6;
              }
              local_200 = 0x248371f7d5c8f62d;
              local_88 = local_138;
            }
          }
          else if (uVar2 == 0x25b2a1f01d7557d9) {
            local_154 = local_1a4;
            local_19c = local_1a8;
            local_188 = (undefined1 *)((longlong)param_4 + 0x13);
            local_201 = *(byte *)((longlong)param_4 + 0x11);
            local_190 = (ulonglong)local_201;
            local_1f8 = 0xd89390f19334981c;
            if ((int)local_1e4 < local_1a4) {
              local_1f8 = 0xe43c5dd2c029949c;
            }
            local_200 = 0x895702043d23feb6;
            local_1dc = local_1a8;
            local_1e8 = local_201;
            local_170 = local_188;
            local_150 = local_190;
          }
          else if (uVar2 == 0x267a1a0d59e986b2) {
            local_1f8 = 0x8d1d287713e316e0;
            if ((char)local_202 < '\x02') {
              local_1f8 = 0xf868bc6be96ba4b1;
            }
            local_200 = 0xbc251d3bb7b2e15c;
          }
        }
        else if ((longlong)uVar2 < 0x3351f8451ad53eab) {
          if (uVar2 == 0x2c6b2cb6a2a3ee58) {
            local_1f8 = 0xb4b0a4ddd2b5e98f;
            local_200 = 0x1583e871e5ebd6d6;
            local_1cc = 0;
          }
          else if (uVar2 == 0x3138354ca451f7bc) {
            local_1f8 = 0x224b0c7264ba3fba;
            if ((char)local_202 < '\x03') {
              local_1f8 = 0xb029d68f491fc3ed;
            }
            local_200 = 0x4d1af5fca7437dcc;
          }
        }
        else if (uVar2 == 0x3351f8451ad53eab) {
          lVar1 = *local_c0;
          *local_178 = local_138;
          *(undefined1 *)(lVar1 + local_130) = local_1e7;
          local_100 = local_50 + 1;
          local_1f8 = 0xcc5472a5f05ad962;
          if (local_100 == local_d0) {
            local_1f8 = 0xc4c1614e1ab7ee51;
          }
          local_200 = 0xd1a3f6d4fe0ea935;
        }
        else if (uVar2 == 0x3f8b5109b95219c7) {
          local_110 = (undefined8 *)(local_198 + 0x20);
          local_118 = (undefined1 *)(**(int **)(local_198 + 0x58) + local_78);
          local_1f8 = 0x26b50525726bc3f3;
          local_200 = 0xd5334f7746279d05;
        }
        else if (uVar2 == 0x41014e968b17d371) {
          local_15c = local_1b0;
          local_1f8 = 0x59d90ea97a2e2ea2;
          local_200 = 0x973ccf9499ad6c2f;
          local_f8 = local_68;
        }
      }
      else if ((longlong)uVar2 < 0x67d60b49f07fc276) {
        if ((longlong)uVar2 < 0x4ed81d912e889c22) {
          if (uVar2 == 0x444da1505ed945ed) {
            local_1f8 = 0x29a24aefce50ae76;
            if (local_202 == 1) {
              local_1f8 = 0xdc3059f5bf225657;
            }
            local_200 = 0x5c966596cf3402e;
          }
          else if (uVar2 == 0x45fe1c970b94afd8) {
            local_158 = local_1ac;
            local_1f8 = 0x35001dd0472425a;
            local_200 = 0x1ea785ac0a26320d;
            local_100 = local_170;
          }
        }
        else if (uVar2 == 0x4ed81d912e889c22) {
          local_180 = local_1d8 + 2;
          local_e0 = local_1d8 + 3;
          local_d8 = local_1d8 + 1;
          local_1f8 = 0x5585a95d03685a76;
          local_200 = 0xd5f6542b42602e01;
          local_108 = local_b8;
        }
        else if (uVar2 == 0x51c492f5ae1766aa) {
          local_1a0 = local_1dc;
          local_68 = local_188;
          local_1e5 = local_201;
          local_60 = local_190;
          local_198 = *param_6;
          local_160 = *(uint *)(local_198 + 0x78);
          local_1f8 = 0xd9cefc07ce64e033;
          if ((local_160 & 0x22) == local_1bc) {
            local_1f8 = 0x54d9d92b04da04ab;
          }
          local_200 = 0x330fd262f4a5c6dd;
        }
      }
      else if ((longlong)uVar2 < 0x6f51f98ec3f94276) {
        if (uVar2 == 0x67d60b49f07fc276) {
          local_1f8 = 0xb673857801a4e4d;
          if ((local_160 & 4) == local_1e4) {
            local_1f8 = 0x7ae48e3dffa21656;
          }
          local_200 = 0x94648425a1273deb;
        }
        else if (uVar2 == 0x6d6b5fd6fd0a6a2a) {
          local_d0 = local_170 + local_150;
          local_178 = local_1d8 + 2;
          local_c8 = local_1d8 + 3;
          local_c0 = local_1d8 + 1;
          local_1f8 = 0x4dd00626477cf275;
          if (local_1e8 == local_203) {
            local_1f8 = 0x59ea8844e2ff3b07;
          }
          local_190 = 0;
          local_200 = 0x82e1ab14ce85dad;
          local_201 = local_203;
          local_1ac = local_154;
LAB_1801a3203:
          local_188 = local_170;
          local_1dc = local_19c;
        }
      }
      else if (uVar2 == 0x6f51f98ec3f94276) {
        local_1f8 = 0x8e28c76a7f3c3967;
        if (local_202 == 3) {
          local_1f8 = 0x4f89efd2ea47d3a3;
        }
        local_200 = 0xa243ebdcdd9fd73f;
      }
      else if (uVar2 == 0x7a8b780914ff5fbf) {
        local_1b0 = local_1b8 + local_15c;
        local_1f8 = 0x971712ebc1f7c07c;
        if (local_1b4 < (int)local_15c) {
          local_1f8 = 0x1cdf9463fee00239;
        }
        local_200 = 0x5ddedaf575f7d148;
      }
      else if (uVar2 == 0x761be8c084ebfce0) {
        local_1c8 = 1;
        local_1b4 = 1;
        local_1b8 = -1;
        local_1bc = 2;
        local_203 = 0;
        local_1e4 = 0;
        local_1d0 = *param_4;
        local_1f8 = 0x54a2e6d5e19ad2b5;
        if (param_3 < local_1d0) {
          local_1f8 = 0xeea9f77176d5023b;
        }
        local_200 = 0xf591aa79d6c4edec;
        local_1cc = 0;
        local_1d8 = param_2;
      }
    }
    if (-0x153ed19ac53ed913 < (longlong)uVar2) {
      if ((longlong)uVar2 < -0x2ccdc8c11a341df) {
        if ((longlong)uVar2 < -0x117ff5e7a17ad443) {
          if (uVar2 == 0xeac12e653ac126ee) {
            local_b0 = (undefined1 *)**(undefined8 **)(local_198 + 0x48);
            local_1f8 = 0xd4f8f6b84a4a1620;
            if (local_b0 == (undefined1 *)0x0) {
              local_1f8 = 0x4dafa07c2af28cf9;
            }
            local_200 = 0x2a79ab35da8d4e8f;
          }
          else if (uVar2 == 0xedca040e37d8049c) {
            local_1a4 = (local_1d0 - param_3) / (int)local_1bc;
            local_1a8 = (local_1d0 - param_3) - local_1a4;
            local_1f8 = 0x7036c25ed561fa52;
            local_200 = 0x558463aec814ad8b;
          }
        }
        else if (uVar2 == 0xee800a185e852bbd) {
          local_78 = **(longlong **)(local_198 + 0x40);
          local_1f8 = 0x20c51b1196dca343;
          if (local_78 == 0) {
            local_1f8 = 0x804df66a0eb3c922;
          }
          local_200 = 0x1f4e4a182f8eba84;
        }
        else if (uVar2 == 0xf3864a52344c5ef6) {
          local_70 = local_118;
          local_b8 = *(undefined1 **)*local_110;
          local_1f8 = 0x4d580fcfde591eb4;
          if (local_118 == local_b8) {
            local_1f8 = 0x9c83ae2cd1ecf130;
          }
          local_200 = 0x380125ef0d18296;
        }
      }
      else if ((longlong)uVar2 < 0x151ca5baec700739) {
        if (uVar2 == 0xfd332373ee5cbe21) {
          local_1a4 = local_1d0 - param_3;
          local_1f8 = 0xde243a11dcdc2050;
          local_200 = 0xfb969be1c1a97789;
          local_1a8 = local_1e4;
        }
        else if (uVar2 == 0xfe815d8d90c758af) {
          local_110 = (undefined8 *)(local_198 + 0x28);
          local_118 = local_b0;
          if (local_b0 < *(undefined1 **)(local_198 + 0x70)) {
            local_118 = *(undefined1 **)(local_198 + 0x70);
          }
          local_1f8 = 0xee828f188805d432;
          local_200 = 0x1d04c54abc498ac4;
        }
      }
      else if (uVar2 == 0x151ca5baec700739) {
        lVar1 = *local_90;
        *local_168 = local_128;
        *(undefined1 *)(lVar1 + local_120) = local_1e6;
        local_f8 = local_48 + 1;
        local_1f8 = 0x751c1738b28eaaab;
        if (local_f8 == local_a0) {
          local_1f8 = 0xc172ae0c45f2b799;
        }
        local_200 = 0xbbf9d605510de826;
      }
      else {
        if (uVar2 == 0x1562979ae4b94764) {
          local_1f8 = 0x4b48a25c5b57f0c5;
          if (local_1b4 < local_158) {
            local_1f8 = 0x5f722c3efed439b7;
          }
          local_200 = 0x1a8c30a9f540966f;
          local_190 = local_150;
          local_201 = 1;
          local_1ac = local_1b8 + local_158;
          goto LAB_1801a3203;
        }
        if (uVar2 == 0x185e10c286a38c8b) {
          (**(code **)*local_1d8)(local_1d8,local_88);
          local_130 = *local_178;
          local_138 = local_1c8 + local_130;
          local_1f8 = 0xc8a107f2a8bcf150;
          local_200 = 0xfbf0ffb7b269cffb;
        }
      }
      goto LAB_1801a2270;
    }
    if ((longlong)uVar2 < -0x3f167d389dd0e7cb) {
      if ((longlong)uVar2 < -0x630a8b34785f18d5) {
        if (uVar2 == 0x8073fd7641087477) {
          local_58 = local_108;
          local_1e9 = *local_108;
          local_140 = *local_180;
          local_148 = local_1c8 + local_140;
          local_1f8 = 0x29be6de6b270d4a7;
          if (*local_e0 < local_148) {
            local_1f8 = 0x6573e7a722496211;
          }
          local_200 = 0xf4d521bfb30425ee;
          local_a8 = local_148;
        }
        else if (uVar2 == 0x91a6c618914d47ff) {
          (**(code **)*local_1d8)(local_1d8,local_a8);
          local_140 = *local_180;
          local_148 = local_1c8 + local_140;
          local_1f8 = 0xb8c787e0f29bce2f;
          local_200 = 0x65accbb9f3ef3f66;
        }
      }
      else if (uVar2 == 0x9cf574cb87a0e72b) {
        local_a0 = (undefined1 *)((longlong)param_4 + local_60 + 0x13);
        local_168 = local_1d8 + 2;
        local_98 = local_1d8 + 3;
        local_90 = local_1d8 + 1;
        local_1f8 = 0x44a5de021efa69b7;
        if (local_1e5 == local_203) {
          local_1f8 = 0xcf6d588a21edabf2;
        }
        local_200 = 0x5a4909495edbac6;
        local_1b0 = local_1a0;
      }
      else if (uVar2 == 0x9f03bc72213d73a6) {
        local_1f8 = 0x803f76b1b44a83a8;
        if ((int)local_1e4 < (int)local_1a0) {
          local_1f8 = 0xd603ca6487ea75b7;
        }
        local_200 = 0x4af6beaf004a929c;
      }
      else if (uVar2 == 0xa1334cac375e3f59) {
        local_1dc = local_1cc;
        local_201 = *(byte *)((longlong)param_4 + 0x11);
        local_190 = (ulonglong)local_201;
        local_1f8 = 0x453a7994e532da8b;
        local_200 = 0x14feeb614b25bc21;
        local_188 = (undefined1 *)((longlong)param_4 + 0x13);
      }
    }
    else if ((longlong)uVar2 < -0x2606c0532c2ee987) {
      if (uVar2 == 0xc0e982c7622f1835) {
        (**(code **)*local_1d8)(local_1d8,local_80);
        local_120 = *local_168;
        local_128 = local_1c8 + local_120;
        local_1f8 = 0x24e97e6ef3c43556;
        local_200 = 0x31f5dbd41fb4326f;
      }
      else if (uVar2 == 0xcee5c13de383428d) {
        local_48 = local_f8;
        local_1e6 = *local_f8;
        local_120 = *local_168;
        local_128 = local_1c8 + local_120;
        local_1f8 = 0xdf070a53458c9141;
        if (*local_98 < local_128) {
          local_1f8 = 0xaf22d2ecbd38e4d;
        }
        local_200 = 0xca1bafe9a9fc9678;
        local_80 = local_128;
      }
      else if (uVar2 == 0xcac9c81eb4001134) {
        *param_1 = local_1d8;
        return;
      }
    }
    else if (uVar2 == 0xd9f93facd3d11679) {
      local_1cc = local_1d0 - param_3;
      local_1f8 = 0x42dec4611a30424;
      local_200 = 0xa51ea0ea26fd3b7d;
    }
    else if (uVar2 == 0xdd6b4c590174f149) {
      lVar1 = *local_d8;
      *local_180 = local_148;
      *(undefined1 *)(lVar1 + local_140) = local_1e9;
      local_108 = local_58 + 1;
      local_1f8 = 0x5fa9c21f325f7718;
      if (local_108 == local_70) {
        local_1f8 = 0x40d9831b526a70c9;
      }
      local_200 = 0xdfda3f697357036f;
    }
  } while( true );
}



longlong * FUN_1801a3270(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  byte local_b0 [16];
  failure_vftable *local_a0;
  longlong *local_98;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *local_58;
  bool local_50;
  longlong *local_48;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 local_29;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_3c = 1;
  local_38 = 4;
  local_29 = 0;
  local_30 = 0;
  lVar4 = *param_1;
  lVar5 = (longlong)*(int *)(lVar4 + 4);
  plVar1 = *(longlong **)((longlong)param_1 + lVar5 + 0x48);
  local_58 = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
    lVar4 = *param_1;
    lVar5 = (longlong)*(int *)(lVar4 + 4);
  }
  local_48 = param_1;
  if (*(uint *)((longlong)param_1 + lVar5 + 0x10) == local_30) {
    plVar1 = *(longlong **)((longlong)param_1 + lVar5 + 0x50);
    if ((plVar1 == (longlong *)0x0) || (plVar1 == param_1)) {
      local_50 = true;
    }
    else {
      FUN_18008d170();
      lVar4 = *param_1;
      local_50 = *(uint *)((longlong)param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == local_30;
      local_34 = local_30;
      if (!local_50) goto LAB_1801a33dd;
    }
    plVar1 = local_48;
    local_98 = *(longlong **)(*(longlong *)((longlong)local_48 + (longlong)*(int *)(lVar4 + 4) + 0x40) + 8);
    (**(code **)(*local_98 + 8))();
    plVar2 = (longlong *)FUN_1801a3660(&local_a0);
    if ((local_98 != (longlong *)0x0) &&
       (puVar3 = (undefined8 *)(**(code **)(*local_98 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,local_3c);
    }
    lVar4 = (longlong)*(int *)(*plVar1 + 4);
    local_60 = *(undefined8 *)((longlong)plVar1 + lVar4 + 0x48);
    local_68[0] = local_29;
    (**(code **)(*plVar2 + 0x48))
              (plVar2,local_b0,local_68,(longlong)plVar1 + lVar4,*(undefined1 *)((longlong)plVar1 + lVar4 + 0x58),
               param_2);
    local_34 = (uint)local_b0[0] << 2;
  }
  else {
    local_50 = (bool)local_29;
    local_34 = local_30;
  }
LAB_1801a33dd:
  plVar1 = local_48;
  lVar4 = (longlong)*(int *)(*local_48 + 4);
  uVar7 = local_38;
  if (*(longlong *)((longlong)local_48 + lVar4 + 0x48) != 0) {
    uVar7 = local_30;
  }
  uVar7 = (local_34 | *(uint *)((longlong)local_48 + lVar4 + 0x10)) & 0x17 | uVar7;
  *(uint *)((longlong)local_48 + lVar4 + 0x10) = uVar7;
  uVar7 = uVar7 & *(uint *)((longlong)local_48 + lVar4 + 0x14);
  if (uVar7 != local_30) {
    puVar6 = &DAT_1802a778c;
    if ((uVar7 & 2) == local_30) {
      puVar6 = &DAT_1802a77a8;
    }
    if ((local_38 & uVar7) != local_30) {
      puVar6 = &DAT_1802a7770;
    }
    FUN_1801b23c0(&DAT_1802a77a8,&DAT_18029c305,0x1b,0x15,&DAT_1802a77c0);
    FUN_1801b23c0(&DAT_1802a778c,&DAT_18029c2c0,0x18,0x16,&DAT_1802a77a4);
    FUN_1801b23c0(&DAT_1802a7770,&DAT_18029c279,0x1f,0x15,&DAT_1802a7788);
    local_78[0] = local_3c;
    local_70 = &PTR_vftable_18020e948;
    FUN_18008bba0(&local_a0,local_78,puVar6);
    local_a0 = &std::ios_base::failure::vftable;
    FUN_1801dd110(&local_a0,&DAT_1802536a8);
  }
  uVar7 = __uncaught_exceptions();
  if (uVar7 == local_30) {
    FUN_18008d4f0(local_58);
  }
  plVar2 = *(longlong **)((longlong)local_58 + (longlong)*(int *)(*local_58 + 4) + 0x48);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return plVar1;
}



void Unwind_1801a3550(undefined8 param_1,longlong param_2)

{
  FUN_18008d490(param_2 + 0x90);
  return;
}



void Unwind_1801a3580(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x50) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xac));
    }
  }
  return;
}



undefined8 Catch_All_1801a35c0(undefined8 param_1,longlong param_2)

{
  FUN_18008ad50((longlong)*(int *)(**(longlong **)(param_2 + 0xa0) + 4) + (longlong)*(longlong **)(param_2 + 0xa0),
                *(undefined4 *)(param_2 + 0xb0),1);
  *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0xb8);
  return 0x1801a33dd;
}



void Unwind_1801a3610(undefined8 param_1,longlong param_2)

{
  FUN_18008d0f0(param_2 + 0x90);
  return;
}



void Unwind_1801a3640(void)

{
  Unwind_1801dd394();
}



longlong * FUN_1801a3660(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
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
  local_50 = 0x10;
  local_34 = 0;
  std::_Lockit::_Lockit(local_38,0);
  plVar2 = DAT_1802a72b8;
  if (DAT_1802a7298 == local_58) {
    std::_Lockit::_Lockit(local_c0,local_34);
    if (DAT_1802a7298 == local_58) {
      DAT_1802a7298 = (longlong)local_3c + (longlong)DAT_1802a9348;
      DAT_1802a9348 = (int)DAT_1802a7298;
    }
    std::_Lockit::~_Lockit(local_c0);
  }
  uVar1 = DAT_1802a7298;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((((*(ulonglong *)(lVar3 + 0x18) <= DAT_1802a7298) ||
       (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + DAT_1802a7298 * 8), plVar5 == (longlong *)0x0)) &&
      ((*(char *)(lVar3 + 0x24) != '\x01' ||
       ((lVar3 = FUN_1801d8b40(), *(ulonglong *)(lVar3 + 0x18) <= uVar1 ||
        (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + uVar1 * 8), plVar5 == (longlong *)0x0)))))) &&
     (plVar5 = plVar2, plVar2 == (longlong *)0x0)) {
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
    plVar2 = local_48;
    *(int *)(local_48 + 1) = local_34;
    *local_48 = (longlong)&std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
    FUN_1800322f0(local_c0);
    FUN_1801d8b04(plVar2);
    plVar5 = local_48;
    (**(code **)(*local_48 + 8))(local_48);
    DAT_1802a72b8 = plVar5;
  }
  std::_Lockit::~_Lockit(local_38);
  return plVar5;
}



void Unwind_1801a3800(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0xb0));
  return;
}



void Unwind_1801a3830(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x98));
  return;
}



void Unwind_1801a3860(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0xa0))(*(undefined8 **)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xac));
  return;
}



void Unwind_1801a3e00(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_1801a42b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_1801a5f60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x88) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x88) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xd8));
    }
  }
  return;
}



void Unwind_1801a5fb0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



undefined1 *
FUN_1801a6130(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,undefined1 param_5,
             char *param_6,ulonglong param_7)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 ***pppuVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  byte ****ppppbVar18;
  ulonglong uVar19;
  bool bVar20;
  byte ***local_120;
  longlong *local_118;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  byte *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined3 uStack_d4;
  undefined4 local_d0;
  undefined3 uStack_cc;
  undefined4 uStack_c8;
  undefined3 uStack_c4;
  undefined4 uStack_c0;
  undefined3 uStack_bc;
  undefined4 local_b8;
  undefined3 uStack_b4;
  longlong local_b0;
  undefined8 ***local_a8;
  longlong *plStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60;
  byte local_5b;
  char local_5a;
  char local_59;
  ulonglong local_58;
  int local_50;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_58 = 0;
  local_49 = 1;
  local_88 = 1;
  local_7c = 1;
  local_50 = -1;
  local_100 = 0xfff;
  local_b0 = -1;
  local_e8 = 0x28;
  local_70 = 0xf;
  local_5b = 0x7e;
  local_5a = '\0';
  local_60 = 0;
  local_f8 = -8;
  local_f0 = (byte *)0x20;
  local_59 = -1;
  uVar12 = 0;
  if (param_7 != 0) {
    uVar12 = 1;
    if (*param_6 != '+') {
      uVar12 = (ulonglong)(*param_6 == '-');
    }
  }
  if ((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (uVar12 + 2 <= param_7)) && (param_6[uVar12] == '0')) {
    cVar2 = param_6[uVar12 + 1];
    bVar20 = cVar2 == 'x';
    if (cVar2 < 'x') {
      bVar20 = cVar2 == 'X';
    }
    local_68 = uVar12 + 2;
    if (!bVar20) goto LAB_1801a6317;
  }
  else {
LAB_1801a6317:
    local_68 = uVar12;
  }
  plStack_a0 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_78 = param_3;
  (**(code **)(*plStack_a0 + 8))();
  plVar8 = (longlong *)FUN_18008bf60(&local_a8);
  if ((plStack_a0 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*plStack_a0 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,local_7c);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined8 ****)0x0;
  plStack_a0 = (longlong *)0x0;
  local_e0 = param_4;
  if ((longlong)param_7 < (longlong)local_58) {
LAB_1801a6c8b:
    FUN_180002ac0();
  }
  uVar12 = local_70;
  ppppuVar17 = &local_a8;
  if (0xf < param_7) {
    uVar10 = local_70 | param_7;
    uVar12 = 0x16;
    if (0x16 < uVar10) {
      uVar12 = uVar10;
    }
    if (uVar10 < 0xfff) {
      ppppuVar17 = (undefined8 ****)FUN_1801d61c8(local_88 + uVar12);
      local_a8 = ppppuVar17;
    }
    else {
      pppuVar11 = (undefined8 ***)FUN_1801d61c8(local_e8 + uVar12);
      ppppuVar17 = (undefined8 ****)((longlong)pppuVar11 + 0x27U & 0xffffffffffffffe0);
      ppppuVar17[-1] = pppuVar11;
      local_a8 = ppppuVar17;
    }
  }
  local_98 = param_7;
  uStack_90 = uVar12;
  FUN_180207610(ppppuVar17,0,param_7);
  *(char *)((longlong)ppppuVar17 + param_7) = local_5a;
  ppppuVar17 = &local_a8;
  if (local_70 < uStack_90) {
    ppppuVar17 = (undefined8 ****)local_a8;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,param_6,param_6 + param_7,ppppuVar17);
  local_118 = *(longlong **)(*(longlong *)(local_e0 + 0x40) + 8);
  (**(code **)(*local_118 + 8))();
  plVar8 = (longlong *)FUN_180029a60(&local_120);
  if ((local_118 != (longlong *)0x0) &&
     (puVar9 = (undefined8 *)(**(code **)(*local_118 + 0x10))(), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,local_7c);
  }
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_120);
  ppppbVar18 = &local_120;
  if (local_70 < local_108) {
    ppppbVar18 = (byte ****)local_120;
  }
  if ((byte)(*(byte *)ppppbVar18 + local_59) < local_5b) {
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
LAB_1801a64e3:
    while ((bVar3 = *(byte *)ppppbVar18, (byte)(local_59 + bVar3) < local_5b && ((ulonglong)bVar3 < param_7 - local_68))
          ) {
      param_7 = param_7 - bVar3;
      lVar16 = local_98 - param_7;
      if (local_98 < param_7) {
        FUN_1800615a0();
        goto LAB_1801a6c8b;
      }
      if (uStack_90 != local_98) goto LAB_1801a6550;
      FUN_1801a6e70(&local_a8,local_88,lVar16,param_7,local_88,uVar5);
      if (local_5a < (char)*(byte *)((longlong)ppppbVar18 + 1)) goto LAB_1801a64e0;
    }
  }
  uVar10 = local_98;
  uVar12 = *(ulonglong *)(local_e0 + 0x28);
  uVar15 = uVar12 - local_98;
  uVar19 = local_58;
  if (local_98 <= uVar12 && uVar15 != 0) {
    uVar19 = uVar15;
  }
  if ((longlong)uVar12 <= (longlong)local_58) {
    uVar19 = local_58;
  }
  uVar6 = *(uint *)(local_e0 + 0x18) & 0x1c0;
  if (uVar6 < 0x100) {
    if (uVar6 != 0x40) {
LAB_1801a6654:
      uVar5 = *local_78;
      uStack_bc = (undefined3)((uint)*(undefined4 *)(local_78 + 4) >> 8);
      uStack_c0 = *(undefined4 *)(local_78 + 1);
      plVar8 = *(longlong **)(local_78 + 8);
      uVar14 = uVar5;
      if ((uVar19 != local_58) && (uVar14 = local_49, plVar8 != (longlong *)0x0)) {
LAB_1801a66cc:
        do {
          if (*(longlong *)plVar8[8] != 0) {
            iVar7 = *(int *)plVar8[0xb];
            if ((int)local_60 < iVar7) {
              *(int *)plVar8[0xb] = iVar7 + local_50;
              puVar13 = *(undefined1 **)plVar8[8];
              *(undefined1 **)plVar8[8] = puVar13 + 1;
              *puVar13 = param_5;
              uVar15 = uVar15 + local_b0;
              uVar14 = uVar5;
              if (uVar15 == local_58) break;
              goto LAB_1801a66cc;
            }
          }
          iVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,param_5);
          uVar14 = local_49;
          if (iVar7 != local_50) {
            uVar14 = uVar5;
          }
          uVar5 = uVar14;
          uVar15 = uVar15 + local_b0;
          uVar14 = uVar5;
        } while (uVar15 != local_58);
      }
      puVar13 = local_78;
      puVar1 = (undefined4 *)(local_78 + 1);
      *local_78 = uVar14;
      *(uint *)(local_78 + 4) = CONCAT31(uStack_bc,uStack_c0._3_1_);
      *puVar1 = uStack_c0;
      *(longlong **)(local_78 + 8) = plVar8;
      uVar5 = uVar14;
      if ((local_68 != local_58) && (uVar5 = local_49, plVar8 != (longlong *)0x0)) {
        uVar12 = local_68;
        ppppuVar17 = &local_a8;
        if (local_70 < uStack_90) {
          ppppuVar17 = (undefined8 ****)local_a8;
        }
LAB_1801a6798:
        do {
          uVar5 = *(undefined1 *)ppppuVar17;
          if (*(longlong *)plVar8[8] != 0) {
            iVar7 = *(int *)plVar8[0xb];
            if ((int)local_60 < iVar7) {
              *(int *)plVar8[0xb] = iVar7 + local_50;
              puVar4 = *(undefined1 **)plVar8[8];
              *(undefined1 **)plVar8[8] = puVar4 + 1;
              *puVar4 = uVar5;
              uVar12 = uVar12 + local_b0;
              ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + 1);
              uVar5 = uVar14;
              if (uVar12 == local_58) break;
              goto LAB_1801a6798;
            }
          }
          iVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,uVar5);
          uVar5 = local_49;
          if (iVar7 != local_50) {
            uVar5 = uVar14;
          }
          uVar14 = uVar5;
          uVar12 = uVar12 + local_b0;
          ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + 1);
          uVar5 = uVar14;
        } while (uVar12 != local_58);
      }
      *local_78 = uVar5;
      *(uint *)(puVar13 + 4) = CONCAT31(uStack_bc,uStack_c0._3_1_);
      *puVar1 = uStack_c0;
      goto LAB_1801a6a33;
    }
    uVar14 = *local_78;
    local_d8._0_3_ = (undefined3)*(undefined4 *)(local_78 + 1);
    local_d8._3_1_ = (undefined1)*(undefined4 *)(local_78 + 4);
    uStack_d4 = (undefined3)((uint)*(undefined4 *)(local_78 + 4) >> 8);
    plVar8 = *(longlong **)(local_78 + 8);
    uVar5 = uVar14;
    if ((local_68 != local_58) && (uVar5 = local_49, plVar8 != (longlong *)0x0)) {
      ppppuVar17 = &local_a8;
      uVar12 = local_68;
      if (local_70 < uStack_90) {
        ppppuVar17 = (undefined8 ****)local_a8;
      }
LAB_1801a6858:
      do {
        uVar5 = *(undefined1 *)ppppuVar17;
        if (*(longlong *)plVar8[8] != 0) {
          iVar7 = *(int *)plVar8[0xb];
          if ((int)local_60 < iVar7) {
            *(int *)plVar8[0xb] = iVar7 + local_50;
            puVar13 = *(undefined1 **)plVar8[8];
            *(undefined1 **)plVar8[8] = puVar13 + 1;
            *puVar13 = uVar5;
            uVar12 = uVar12 + local_b0;
            ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + 1);
            uVar5 = uVar14;
            if (uVar12 == local_58) break;
            goto LAB_1801a6858;
          }
        }
        iVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,uVar5);
        uVar5 = local_49;
        if (iVar7 != local_50) {
          uVar5 = uVar14;
        }
        uVar14 = uVar5;
        uVar12 = uVar12 + local_b0;
        ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + 1);
        uVar5 = uVar14;
      } while (uVar12 != local_58);
    }
    *local_78 = uVar5;
    *(uint *)(local_78 + 4) = CONCAT31(uStack_d4,local_d8._3_1_);
    *(undefined4 *)(local_78 + 1) = local_d8;
    *(longlong **)(local_78 + 8) = plVar8;
  }
  else {
    if (uVar6 != 0x100) goto LAB_1801a6654;
    uVar5 = *local_78;
    local_b8._0_3_ = (undefined3)*(undefined4 *)(local_78 + 1);
    local_b8._3_1_ = (undefined1)*(undefined4 *)(local_78 + 4);
    uStack_b4 = (undefined3)((uint)*(undefined4 *)(local_78 + 4) >> 8);
    plVar8 = *(longlong **)(local_78 + 8);
    uVar14 = uVar5;
    if ((local_68 != local_58) && (uVar14 = local_49, plVar8 != (longlong *)0x0)) {
      uVar12 = local_68;
      ppppuVar17 = &local_a8;
      if (local_70 < uStack_90) {
        ppppuVar17 = (undefined8 ****)local_a8;
      }
LAB_1801a6918:
      do {
        uVar14 = *(undefined1 *)ppppuVar17;
        if (*(longlong *)plVar8[8] != 0) {
          iVar7 = *(int *)plVar8[0xb];
          if ((int)local_60 < iVar7) {
            *(int *)plVar8[0xb] = iVar7 + local_50;
            puVar13 = *(undefined1 **)plVar8[8];
            *(undefined1 **)plVar8[8] = puVar13 + 1;
            *puVar13 = uVar14;
            uVar12 = uVar12 + local_b0;
            ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + 1);
            uVar14 = uVar5;
            if (uVar12 == local_58) break;
            goto LAB_1801a6918;
          }
        }
        iVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,uVar14);
        uVar14 = local_49;
        if (iVar7 != local_50) {
          uVar14 = uVar5;
        }
        uVar5 = uVar14;
        uVar12 = uVar12 + local_b0;
        ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + 1);
        uVar14 = uVar5;
      } while (uVar12 != local_58);
    }
    puVar13 = local_78;
    puVar1 = (undefined4 *)(local_78 + 1);
    *local_78 = uVar14;
    *(uint *)(local_78 + 4) = CONCAT31(uStack_b4,local_b8._3_1_);
    *puVar1 = local_b8;
    *(longlong **)(local_78 + 8) = plVar8;
    uVar5 = uVar14;
    if ((uVar19 != local_58) && (uVar5 = local_49, plVar8 != (longlong *)0x0)) {
LAB_1801a69dc:
      do {
        if (*(longlong *)plVar8[8] != 0) {
          iVar7 = *(int *)plVar8[0xb];
          if ((int)local_60 < iVar7) {
            *(int *)plVar8[0xb] = iVar7 + local_50;
            puVar4 = *(undefined1 **)plVar8[8];
            *(undefined1 **)plVar8[8] = puVar4 + 1;
            *puVar4 = param_5;
            uVar15 = uVar15 + local_b0;
            uVar5 = uVar14;
            if (uVar15 == local_58) break;
            goto LAB_1801a69dc;
          }
        }
        iVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,param_5);
        uVar5 = local_49;
        if (iVar7 != local_50) {
          uVar5 = uVar14;
        }
        uVar14 = uVar5;
        uVar15 = uVar15 + local_b0;
        uVar5 = uVar14;
      } while (uVar15 != local_58);
    }
    *local_78 = uVar5;
    *(uint *)(puVar13 + 4) = CONCAT31(uStack_b4,local_b8._3_1_);
    *puVar1 = local_b8;
LAB_1801a6a33:
    *(longlong **)(local_78 + 8) = plVar8;
    uVar19 = local_58;
  }
  uVar10 = uVar10 - local_68;
  local_d0._0_3_ = (undefined3)*(undefined4 *)(local_78 + 1);
  local_d0._3_1_ = (undefined1)*(undefined4 *)(local_78 + 4);
  uStack_cc = (undefined3)((uint)*(undefined4 *)(local_78 + 4) >> 8);
  uVar14 = uVar5;
  if ((uVar10 != local_58) && (uVar14 = local_49, plVar8 != (longlong *)0x0)) {
    ppppuVar17 = &local_a8;
    if (local_70 < uStack_90) {
      ppppuVar17 = (undefined8 ****)local_a8;
    }
    puVar13 = (undefined1 *)((longlong)ppppuVar17 + local_68);
LAB_1801a6ab8:
    do {
      uVar14 = *puVar13;
      if (*(longlong *)plVar8[8] != 0) {
        iVar7 = *(int *)plVar8[0xb];
        if ((int)local_60 < iVar7) {
          *(int *)plVar8[0xb] = iVar7 + local_50;
          puVar4 = *(undefined1 **)plVar8[8];
          *(undefined1 **)plVar8[8] = puVar4 + 1;
          *puVar4 = uVar14;
          uVar10 = uVar10 + local_b0;
          puVar13 = puVar13 + 1;
          uVar14 = uVar5;
          if (uVar10 == local_58) break;
          goto LAB_1801a6ab8;
        }
      }
      iVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,uVar14);
      uVar14 = local_49;
      if (iVar7 != local_50) {
        uVar14 = uVar5;
      }
      uVar5 = uVar14;
      uVar10 = uVar10 + local_b0;
      puVar13 = puVar13 + 1;
      uVar14 = uVar5;
    } while (uVar10 != local_58);
  }
  *local_78 = uVar14;
  *(uint *)(local_78 + 4) = CONCAT31(uStack_cc,local_d0._3_1_);
  *(undefined4 *)(local_78 + 1) = local_d0;
  *(longlong **)(local_78 + 8) = plVar8;
  *(ulonglong *)(local_e0 + 0x28) = local_58;
  uVar5 = *local_78;
  uStack_c8 = *(undefined4 *)(local_78 + 1);
  uStack_c4 = (undefined3)((uint)*(undefined4 *)(local_78 + 4) >> 8);
  plVar8 = *(longlong **)(local_78 + 8);
  uVar14 = uVar5;
  if ((uVar19 != local_58) && (uVar14 = local_49, plVar8 != (longlong *)0x0)) {
LAB_1801a6b9c:
    do {
      if (*(longlong *)plVar8[8] != 0) {
        iVar7 = *(int *)plVar8[0xb];
        if ((int)local_60 < iVar7) {
          *(int *)plVar8[0xb] = iVar7 + local_50;
          puVar13 = *(undefined1 **)plVar8[8];
          *(undefined1 **)plVar8[8] = puVar13 + 1;
          *puVar13 = param_5;
          uVar19 = uVar19 + local_b0;
          uVar14 = uVar5;
          if (uVar19 == local_58) break;
          goto LAB_1801a6b9c;
        }
      }
      iVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,param_5);
      uVar14 = local_49;
      if (iVar7 != local_50) {
        uVar14 = uVar5;
      }
      uVar5 = uVar14;
      uVar19 = uVar19 + local_b0;
      uVar14 = uVar5;
    } while (uVar19 != local_58);
  }
  *param_2 = uVar14;
  *(undefined4 *)(param_2 + 1) = uStack_c8;
  *(uint *)(param_2 + 4) = CONCAT31(uStack_c4,uStack_c8._3_1_);
  *(longlong **)(param_2 + 8) = plVar8;
  if (local_70 < local_108) {
    uVar12 = local_88 + local_108;
    ppppbVar18 = (byte ****)local_120;
    if (local_100 < uVar12) {
      ppppbVar18 = (byte ****)local_120[-1];
      if (local_f0 <= (byte *)((longlong)local_120 + (local_f8 - (longlong)ppppbVar18))) goto LAB_1801a6c90;
      uVar12 = local_108 + local_e8;
    }
    thunk_FUN_1801f42e0(ppppbVar18,uVar12);
  }
  if (local_70 < uStack_90) {
    uVar12 = local_88 + uStack_90;
    ppppuVar17 = (undefined8 ****)local_a8;
    if (local_100 < uVar12) {
      ppppuVar17 = (undefined8 ****)local_a8[-1];
      if (local_f0 <= (byte *)((longlong)local_a8 + (local_f8 - (longlong)ppppuVar17))) {
LAB_1801a6c90:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_60,local_58);
      }
      uVar12 = uStack_90 + local_e8;
    }
    thunk_FUN_1801f42e0(ppppuVar17,uVar12);
  }
  return param_2;
LAB_1801a6550:
  local_98 = local_98 + local_88;
  ppppuVar17 = &local_a8;
  if (local_70 < uStack_90) {
    ppppuVar17 = (undefined8 ****)local_a8;
  }
  FUN_1802079d0((undefined1 *)((longlong)ppppuVar17 + param_7 + 1),(undefined1 *)((longlong)ppppuVar17 + param_7),
                lVar16 + local_88);
  *(undefined1 *)((longlong)ppppuVar17 + param_7) = uVar5;
  if (local_5a < (char)*(byte *)((longlong)ppppbVar18 + 1)) {
LAB_1801a64e0:
    ppppbVar18 = (byte ****)((longlong)ppppbVar18 + 1);
  }
  goto LAB_1801a64e3;
}



void Unwind_1801a6cb0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x40) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x40) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xdc));
    }
  }
  return;
}



void Unwind_1801a6d00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0xb8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xb8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xdc));
    }
  }
  return;
}



void Unwind_1801a6d50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x38);
  return;
}



void Unwind_1801a6d90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xb0);
  return;
}



int FUN_1801a6dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;

  local_28 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar3 = (undefined8 *)FUN_180097330();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = FUN_1801e6890(*puVar3,param_1,param_2,param_3);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_1802a0400 == (local_28 ^ (ulonglong)auStack_68)) {
    return iVar2;
  }
}



ulonglong *
FUN_1801a6e70(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uintptr_t local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;

  local_108 = 0xcdd64bb7c0118f9;
  local_110 = 0x1729446c62b5a5be;
LAB_1801a6fe0:
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_108 ^ 0x8974d8c69008807c;
        uVar1 = local_108 ^ local_110;
        local_110 = local_110 ^ 0x8974d8c69008807c;
        local_108 = uVar3;
        if (0x1bf420d71eb4bd46 < (longlong)uVar1) break;
        if ((longlong)uVar1 < -0x3277df3ad3d3e5ce) {
          if ((longlong)uVar1 < -0x66a7464cddad9f45) {
            if (uVar1 == 0x84d143a235ec5e4f) {
              local_d0 = *param_1;
              FUN_1802079d0(local_b0,local_d0,param_4);
              FUN_180207610(local_b0 + param_4,param_6,param_5);
              FUN_1802079d0(local_b0 + param_4 + param_5,local_d0 + param_4);
              local_80 = local_f8 + local_100;
              local_108 = 0xcb49daa8e0ff5a92;
              if (local_90 < local_80) {
                local_108 = 0x698e77fc4a37c2da;
              }
              local_110 = 0xc8d35e9acc448f28;
              local_78 = local_d0;
            }
            else if (uVar1 == 0x978aa00b2b9010c1) {
              FUN_1802079d0(local_b0,param_1,param_4);
              FUN_180207610(local_b0 + param_4,param_6,param_5);
              FUN_1802079d0(local_b0 + param_4 + param_5,(longlong)param_1 + param_4);
              local_108 = 0x8f65d5dee6f7f8e8;
              local_110 = 0x8e7f649a5ae513b0;
            }
          }
          else if (uVar1 == 0x9958b9b3225260bb) {
            local_c8 = local_b8;
            lVar2 = FUN_1801d61c8(local_98 + local_b8);
            local_c0 = lVar2 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(local_c0 - 8) = lVar2;
            local_108 = 0x6c5417da56e678e4;
            local_110 = 0x46c3242d732f53f7;
          }
          else if (uVar1 == 0xa15d296686734df2) {
            local_60 = *(ulonglong *)(local_d0 - 8);
            local_108 = 0x7577009bf475cc74;
            if ((local_d0 - local_60) - 8 < 0x20) {
              local_108 = 0x8f536fad2a95962e;
            }
            local_110 = 0x5b2b3b593f89e634;
          }
        }
        else if ((longlong)uVar1 < 0x2ee617d2bbaa3ca) {
          if (uVar1 == 0xd47854f4151c701a) {
            local_80 = local_f8 + local_98;
            local_108 = 0x478d061bffa5aacb;
            local_110 = 0x44178229d31e7f71;
            local_78 = local_60;
          }
          else {
            if (uVar1 == 0x11ab144bc12eb58) {
              *param_1 = local_b0;
              return param_1;
            }
            if (uVar1 == 0xcd8820c52c2c1a32) {
              FUN_180002ac0();
            }
          }
        }
        else if (uVar1 == 0x2ee617d2bbaa3ca) {
          local_c0 = FUN_1801d61c8(local_d8);
          local_108 = 0x932859498dda0978;
          local_110 = 0xb9bf6abea813226b;
          local_c8 = local_88;
        }
        else if (uVar1 == 0x39a84322cbbd5ba) {
          thunk_FUN_1801f42e0(local_78,local_80);
          local_108 = 0x1bc27ea4e334c817;
          local_110 = 0x1ad8cfe05f26234f;
        }
      }
      if ((longlong)uVar1 < 0x379574760e48d962) break;
      if ((longlong)uVar1 < 0x3dfb248369af6f33) {
        if (uVar1 == 0x379574760e48d962) {
          local_108 = 0x3e942393c83b2813;
          if (local_d8 < 0xffffffffffffffd9) {
            local_108 = 0xc01b68aaf74a461e;
          }
          local_110 = 0x5943d119d51826a5;
          local_b8 = local_88;
        }
        else if (uVar1 == 0x3da73999ffd76926) {
          local_88 = local_68 + local_f8;
          if (local_68 + local_f8 < local_48) {
            local_88 = local_48;
          }
          local_d8 = local_88 + local_100;
          local_108 = 0xed32dcef25d791f0;
          if (local_d8 == local_e8) {
            local_108 = 0x8aa240c5a4317ed3;
          }
          local_110 = 0xa035733281f855c0;
          local_c8 = 0xffffffffffffffff;
          local_c0 = 0;
        }
      }
      else if (uVar1 == 0x3dfb248369af6f33) {
        local_58 = local_e0 + param_2;
        local_50 = param_1 + 3;
        local_f8 = param_1[3];
        local_48 = local_a0 | local_58;
        local_108 = 0xab18fb3fa233b548;
        if ((longlong)local_58 < (longlong)local_e8) {
          local_108 = 0x17823fe7b7f77bbe;
        }
        local_110 = 0x8eda865495a51b05;
LAB_1801a7637:
        local_b8 = local_f0;
      }
      else if (uVar1 == 0x4d07afdda42fc430) {
        local_108 = 0xfee601b03941d166;
        if (local_90 < local_d8) {
          local_108 = 0xcb9d14bb1cb3abce;
        }
        local_110 = 0xfc0860cd12fb72ac;
      }
      else if (uVar1 == 0x67d7f28a1d230eb6) {
        std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
      }
    }
    if ((longlong)uVar1 < 0x2a9733f725c92b13) {
      if (uVar1 == 0x1bf420d71eb4bd47) {
        local_f0 = 0x7fffffffffffffff;
        local_e8 = 0;
        local_100 = 1;
        local_90 = 0xfff;
        local_98 = 0x28;
        local_a0 = 0xf;
        local_70 = param_1 + 2;
        local_e0 = param_1[2];
        local_108 = 0x8a7ac34de0e3e578;
        if (0x7fffffffffffffff - local_e0 < param_2) {
          local_108 = 0x7a09c70ba5609079;
        }
        local_110 = 0xb781e7ce894c8a4b;
      }
      else if (uVar1 == 0x25c27d6b3796ae4d) {
        local_68 = local_f8 >> ((byte)local_100 & 0x3f);
        local_108 = 0x1339e7f6fa35639f;
        if ((local_68 ^ local_f0) < local_f8) {
          local_108 = 0xb7c667dc27b06a02;
        }
        local_110 = 0x2e9ede6f05e20ab9;
        goto LAB_1801a7637;
      }
      goto LAB_1801a6fe0;
    }
    if (uVar1 == 0x2a9733f725c92b13) {
      local_b0 = local_c0;
      *local_70 = local_58;
      *local_50 = local_c8;
      local_108 = 0x213a680be4604a6a;
      if (local_a0 < local_f8) {
        local_108 = 0x32618ba2fa1c04e4;
      }
      local_110 = 0xb6b0c800cff05aab;
    }
    else if (uVar1 == 0x2e5c3bc2cbfc2a40) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e8);
    }
  } while( true );
}



undefined1 *
FUN_1801a7740(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,undefined1 param_5,
             char *param_6,ulonglong param_7,char param_8)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 ***pppuVar14;
  undefined *puVar15;
  undefined8 ****ppppuVar16;
  undefined1 *puVar17;
  longlong lVar18;
  byte ****ppppbVar19;
  ulonglong uVar20;
  byte ***local_128;
  longlong *local_120;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  byte *local_f8;
  longlong local_f0;
  undefined4 local_e4;
  undefined3 uStack_e0;
  undefined4 local_dc;
  undefined3 uStack_d8;
  undefined4 uStack_d4;
  undefined3 uStack_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined3 uStack_bc;
  undefined4 local_b8;
  undefined3 uStack_b4;
  longlong local_b0;
  undefined8 ***local_a8;
  longlong *plStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined2 local_72;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60;
  char local_59;
  ulonglong local_58;
  int local_50;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_58 = 0;
  local_49 = 1;
  local_88 = 1;
  local_78 = 1;
  local_50 = -1;
  local_108 = 0xfff;
  local_b0 = -1;
  local_f0 = 0x28;
  local_68 = 0xf;
  local_cc = 0x3000;
  local_59 = '\0';
  local_60 = 0;
  local_100 = -8;
  local_f8 = (byte *)0x20;
  uVar9 = 0;
  if (param_7 != 0) {
    uVar9 = 1;
    if (*param_6 != '+') {
      uVar9 = (ulonglong)(*param_6 == '-');
    }
  }
  uVar7 = *(uint *)(param_4 + 0x18);
  puVar15 = &DAT_1802a783c;
  local_c8 = param_4;
  local_80 = param_3;
  FUN_1801b23c0(&DAT_1802a783c,&DAT_18029c597,0x17,3,&DAT_1802a7840);
  local_70 = uVar9;
  if ((uVar7 & 0x3000) == 0x3000) {
    puVar15 = &DAT_1802a7844;
    FUN_1801b23c0(&DAT_1802a7844,&DAT_18029c5c5,0x1b,3,&DAT_1802a7848);
    if ((uVar9 + 2 <= param_7) && (param_6[uVar9] == '0')) {
      cVar2 = param_6[uVar9 + 1];
      if (cVar2 < 'x') {
        if (cVar2 == 'X') {
LAB_1801a7975:
          local_70 = uVar9 + 2;
        }
      }
      else if (cVar2 == 'x') goto LAB_1801a7975;
    }
  }
  uVar9 = FUN_1801edb10(param_6,puVar15);
  local_72 = 0x2e;
  puVar10 = (undefined8 *)FUN_1801e13d8();
  local_72 = CONCAT11(local_72._1_1_,*(undefined1 *)*puVar10);
  uVar11 = FUN_1801edb10(param_6,&local_72);
  plStack_a0 = *(longlong **)(*(longlong *)(local_c8 + 0x40) + 8);
  (**(code **)(*plStack_a0 + 8))();
  plVar12 = (longlong *)FUN_18008bf60(&local_a8);
  if ((plStack_a0 != (longlong *)0x0) &&
     (puVar10 = (undefined8 *)(**(code **)(*plStack_a0 + 0x10))(), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)(puVar10,local_78);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined8 ****)0x0;
  plStack_a0 = (longlong *)0x0;
  if ((longlong)param_7 < (longlong)local_58) {
LAB_1801a839a:
    FUN_180002ac0();
  }
  ppppuVar16 = &local_a8;
  uVar20 = local_68;
  if (0xf < param_7) {
    uVar13 = local_68 | param_7;
    uVar20 = 0x16;
    if (0x16 < uVar13) {
      uVar20 = uVar13;
    }
    if (uVar13 < 0xfff) {
      ppppuVar16 = (undefined8 ****)FUN_1801d61c8(local_88 + uVar20);
      local_a8 = ppppuVar16;
    }
    else {
      pppuVar14 = (undefined8 ***)FUN_1801d61c8(local_f0 + uVar20);
      ppppuVar16 = (undefined8 ****)((longlong)pppuVar14 + 0x27U & 0xffffffffffffffe0);
      ppppuVar16[-1] = pppuVar14;
      local_a8 = ppppuVar16;
    }
  }
  local_98 = param_7;
  uStack_90 = uVar20;
  FUN_180207610(ppppuVar16,0,param_7);
  *(char *)((longlong)ppppuVar16 + param_7) = local_59;
  ppppuVar16 = &local_a8;
  if (local_68 < uStack_90) {
    ppppuVar16 = (undefined8 ****)local_a8;
  }
  (**(code **)(*plVar12 + 0x38))(plVar12,param_6,param_6 + param_7,ppppuVar16);
  local_120 = *(longlong **)(*(longlong *)(local_c8 + 0x40) + 8);
  (**(code **)(*local_120 + 8))();
  plVar12 = (longlong *)FUN_180029a60(&local_128);
  if ((local_120 != (longlong *)0x0) &&
     (puVar10 = (undefined8 *)(**(code **)(*local_120 + 0x10))(), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)(puVar10,local_78);
  }
  (**(code **)(*plVar12 + 0x28))(plVar12,&local_128);
  uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
  if (uVar11 != param_7) {
    uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12);
    ppppuVar16 = (undefined8 ****)local_a8;
    if (uStack_90 <= local_68) {
      ppppuVar16 = &local_a8;
    }
    *(undefined1 *)((longlong)ppppuVar16 + uVar11) = uVar6;
  }
  if (param_8 != '\0') {
    if (uVar11 != param_7) {
      uVar9 = uVar11;
    }
    ppppbVar19 = &local_128;
    if (local_68 < local_110) {
      ppppbVar19 = (byte ****)local_128;
    }
LAB_1801a7bb0:
    while ((bVar3 = *(byte *)ppppbVar19, (byte)(bVar3 - 1) < 0x7e && ((ulonglong)bVar3 < uVar9 - local_70))) {
      uVar9 = uVar9 - bVar3;
      lVar18 = local_98 - uVar9;
      if (local_98 < uVar9) {
        FUN_1800615a0();
        goto LAB_1801a839a;
      }
      if (uStack_90 != local_98) goto LAB_1801a7c30;
      FUN_1801a6e70(&local_a8,local_88,lVar18,uVar9,local_88,uVar5);
      if (local_59 < (char)*(byte *)((longlong)ppppbVar19 + 1)) goto LAB_1801a7c72;
    }
  }
  uVar11 = local_98;
  uVar9 = *(ulonglong *)(local_c8 + 0x28);
  uVar13 = uVar9 - local_98;
  uVar20 = local_58;
  if (local_98 <= uVar9 && uVar13 != 0) {
    uVar20 = uVar13;
  }
  if ((longlong)uVar9 <= (longlong)local_58) {
    uVar20 = local_58;
  }
  uVar7 = *(uint *)(local_c8 + 0x18) & 0x1c0;
  if (uVar7 < 0x100) {
    if (uVar7 != 0x40) {
LAB_1801a7d3d:
      uVar5 = *local_80;
      uStack_bc = (undefined3)((uint)*(undefined4 *)(local_80 + 4) >> 8);
      uStack_c0 = *(undefined4 *)(local_80 + 1);
      plVar12 = *(longlong **)(local_80 + 8);
      uVar6 = uVar5;
      if ((uVar20 != local_58) && (uVar6 = local_49, plVar12 != (longlong *)0x0)) {
LAB_1801a7dac:
        do {
          if (*(longlong *)plVar12[8] != 0) {
            iVar8 = *(int *)plVar12[0xb];
            if ((int)local_60 < iVar8) {
              *(int *)plVar12[0xb] = iVar8 + local_50;
              puVar17 = *(undefined1 **)plVar12[8];
              *(undefined1 **)plVar12[8] = puVar17 + 1;
              *puVar17 = param_5;
              uVar13 = uVar13 + local_b0;
              uVar6 = uVar5;
              if (uVar13 == local_58) break;
              goto LAB_1801a7dac;
            }
          }
          iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,param_5);
          uVar6 = local_49;
          if (iVar8 != local_50) {
            uVar6 = uVar5;
          }
          uVar5 = uVar6;
          uVar13 = uVar13 + local_b0;
          uVar6 = uVar5;
        } while (uVar13 != local_58);
      }
      puVar17 = local_80;
      puVar1 = (undefined4 *)(local_80 + 1);
      *local_80 = uVar6;
      *(uint *)(local_80 + 4) = CONCAT31(uStack_bc,uStack_c0._3_1_);
      *puVar1 = uStack_c0;
      *(longlong **)(local_80 + 8) = plVar12;
      uVar5 = uVar6;
      if ((local_70 != local_58) && (uVar5 = local_49, plVar12 != (longlong *)0x0)) {
        uVar9 = local_70;
        ppppuVar16 = &local_a8;
        if (local_68 < uStack_90) {
          ppppuVar16 = (undefined8 ****)local_a8;
        }
LAB_1801a7e78:
        do {
          uVar5 = *(undefined1 *)ppppuVar16;
          if (*(longlong *)plVar12[8] != 0) {
            iVar8 = *(int *)plVar12[0xb];
            if ((int)local_60 < iVar8) {
              *(int *)plVar12[0xb] = iVar8 + local_50;
              puVar4 = *(undefined1 **)plVar12[8];
              *(undefined1 **)plVar12[8] = puVar4 + 1;
              *puVar4 = uVar5;
              uVar9 = uVar9 + local_b0;
              ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1);
              uVar5 = uVar6;
              if (uVar9 == local_58) break;
              goto LAB_1801a7e78;
            }
          }
          iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar5);
          uVar5 = local_49;
          if (iVar8 != local_50) {
            uVar5 = uVar6;
          }
          uVar6 = uVar5;
          uVar9 = uVar9 + local_b0;
          ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1);
          uVar5 = uVar6;
        } while (uVar9 != local_58);
      }
      *local_80 = uVar5;
      *(uint *)(puVar17 + 4) = CONCAT31(uStack_bc,uStack_c0._3_1_);
      *puVar1 = uStack_c0;
      goto LAB_1801a8126;
    }
    uVar6 = *local_80;
    local_e4._0_3_ = (undefined3)*(undefined4 *)(local_80 + 1);
    local_e4._3_1_ = (undefined1)*(undefined4 *)(local_80 + 4);
    uStack_e0 = (undefined3)((uint)*(undefined4 *)(local_80 + 4) >> 8);
    plVar12 = *(longlong **)(local_80 + 8);
    uVar5 = uVar6;
    if ((local_70 != local_58) && (uVar5 = local_49, plVar12 != (longlong *)0x0)) {
      ppppuVar16 = &local_a8;
      uVar9 = local_70;
      if (local_68 < uStack_90) {
        ppppuVar16 = (undefined8 ****)local_a8;
      }
LAB_1801a7f38:
      do {
        uVar5 = *(undefined1 *)ppppuVar16;
        if (*(longlong *)plVar12[8] != 0) {
          iVar8 = *(int *)plVar12[0xb];
          if ((int)local_60 < iVar8) {
            *(int *)plVar12[0xb] = iVar8 + local_50;
            puVar17 = *(undefined1 **)plVar12[8];
            *(undefined1 **)plVar12[8] = puVar17 + 1;
            *puVar17 = uVar5;
            uVar9 = uVar9 + local_b0;
            ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1);
            uVar5 = uVar6;
            if (uVar9 == local_58) break;
            goto LAB_1801a7f38;
          }
        }
        iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar5);
        uVar5 = local_49;
        if (iVar8 != local_50) {
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        uVar9 = uVar9 + local_b0;
        ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1);
        uVar5 = uVar6;
      } while (uVar9 != local_58);
    }
    *local_80 = uVar5;
    *(uint *)(local_80 + 4) = CONCAT31(uStack_e0,local_e4._3_1_);
    *(undefined4 *)(local_80 + 1) = local_e4;
    *(longlong **)(local_80 + 8) = plVar12;
  }
  else {
    if (uVar7 != 0x100) goto LAB_1801a7d3d;
    uVar5 = *local_80;
    local_b8._0_3_ = (undefined3)*(undefined4 *)(local_80 + 1);
    local_b8._3_1_ = (undefined1)*(undefined4 *)(local_80 + 4);
    uStack_b4 = (undefined3)((uint)*(undefined4 *)(local_80 + 4) >> 8);
    plVar12 = *(longlong **)(local_80 + 8);
    uVar6 = uVar5;
    if ((local_70 != local_58) && (uVar6 = local_49, plVar12 != (longlong *)0x0)) {
      uVar9 = local_70;
      ppppuVar16 = &local_a8;
      if (local_68 < uStack_90) {
        ppppuVar16 = (undefined8 ****)local_a8;
      }
LAB_1801a7ff8:
      do {
        uVar6 = *(undefined1 *)ppppuVar16;
        if (*(longlong *)plVar12[8] != 0) {
          iVar8 = *(int *)plVar12[0xb];
          if ((int)local_60 < iVar8) {
            *(int *)plVar12[0xb] = iVar8 + local_50;
            puVar17 = *(undefined1 **)plVar12[8];
            *(undefined1 **)plVar12[8] = puVar17 + 1;
            *puVar17 = uVar6;
            uVar9 = uVar9 + local_b0;
            ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1);
            uVar6 = uVar5;
            if (uVar9 == local_58) break;
            goto LAB_1801a7ff8;
          }
        }
        iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar6);
        uVar6 = local_49;
        if (iVar8 != local_50) {
          uVar6 = uVar5;
        }
        uVar5 = uVar6;
        uVar9 = uVar9 + local_b0;
        ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1);
        uVar6 = uVar5;
      } while (uVar9 != local_58);
    }
    puVar17 = local_80;
    puVar1 = (undefined4 *)(local_80 + 1);
    *local_80 = uVar6;
    *(uint *)(local_80 + 4) = CONCAT31(uStack_b4,local_b8._3_1_);
    *puVar1 = local_b8;
    *(longlong **)(local_80 + 8) = plVar12;
    uVar5 = uVar6;
    if ((uVar20 != local_58) && (uVar5 = local_49, plVar12 != (longlong *)0x0)) {
LAB_1801a80cc:
      do {
        if (*(longlong *)plVar12[8] != 0) {
          iVar8 = *(int *)plVar12[0xb];
          if ((int)local_60 < iVar8) {
            *(int *)plVar12[0xb] = iVar8 + local_50;
            puVar4 = *(undefined1 **)plVar12[8];
            *(undefined1 **)plVar12[8] = puVar4 + 1;
            *puVar4 = param_5;
            uVar13 = uVar13 + local_b0;
            uVar5 = uVar6;
            if (uVar13 == local_58) break;
            goto LAB_1801a80cc;
          }
        }
        iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,param_5);
        uVar5 = local_49;
        if (iVar8 != local_50) {
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        uVar13 = uVar13 + local_b0;
        uVar5 = uVar6;
      } while (uVar13 != local_58);
    }
    *local_80 = uVar5;
    *(uint *)(puVar17 + 4) = CONCAT31(uStack_b4,local_b8._3_1_);
    *puVar1 = local_b8;
LAB_1801a8126:
    *(longlong **)(local_80 + 8) = plVar12;
    uVar20 = local_58;
  }
  uVar11 = uVar11 - local_70;
  local_dc._0_3_ = (undefined3)*(undefined4 *)(local_80 + 1);
  local_dc._3_1_ = (undefined1)*(undefined4 *)(local_80 + 4);
  uStack_d8 = (undefined3)((uint)*(undefined4 *)(local_80 + 4) >> 8);
  uVar6 = uVar5;
  if ((uVar11 != local_58) && (uVar6 = local_49, plVar12 != (longlong *)0x0)) {
    ppppuVar16 = &local_a8;
    if (local_68 < uStack_90) {
      ppppuVar16 = (undefined8 ****)local_a8;
    }
    puVar17 = (undefined1 *)((longlong)ppppuVar16 + local_70);
LAB_1801a81b8:
    do {
      uVar6 = *puVar17;
      if (*(longlong *)plVar12[8] != 0) {
        iVar8 = *(int *)plVar12[0xb];
        if ((int)local_60 < iVar8) {
          *(int *)plVar12[0xb] = iVar8 + local_50;
          puVar4 = *(undefined1 **)plVar12[8];
          *(undefined1 **)plVar12[8] = puVar4 + 1;
          *puVar4 = uVar6;
          uVar11 = uVar11 + local_b0;
          puVar17 = puVar17 + 1;
          uVar6 = uVar5;
          if (uVar11 == local_58) break;
          goto LAB_1801a81b8;
        }
      }
      iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar6);
      uVar6 = local_49;
      if (iVar8 != local_50) {
        uVar6 = uVar5;
      }
      uVar5 = uVar6;
      uVar11 = uVar11 + local_b0;
      puVar17 = puVar17 + 1;
      uVar6 = uVar5;
    } while (uVar11 != local_58);
  }
  *local_80 = uVar6;
  *(uint *)(local_80 + 4) = CONCAT31(uStack_d8,local_dc._3_1_);
  *(undefined4 *)(local_80 + 1) = local_dc;
  *(longlong **)(local_80 + 8) = plVar12;
  *(ulonglong *)(local_c8 + 0x28) = local_58;
  uVar5 = *local_80;
  uStack_d4 = *(undefined4 *)(local_80 + 1);
  uStack_d0 = (undefined3)((uint)*(undefined4 *)(local_80 + 4) >> 8);
  plVar12 = *(longlong **)(local_80 + 8);
  uVar6 = uVar5;
  if ((uVar20 != local_58) && (uVar6 = local_49, plVar12 != (longlong *)0x0)) {
LAB_1801a829c:
    do {
      if (*(longlong *)plVar12[8] != 0) {
        iVar8 = *(int *)plVar12[0xb];
        if ((int)local_60 < iVar8) {
          *(int *)plVar12[0xb] = iVar8 + local_50;
          puVar17 = *(undefined1 **)plVar12[8];
          *(undefined1 **)plVar12[8] = puVar17 + 1;
          *puVar17 = param_5;
          uVar20 = uVar20 + local_b0;
          uVar6 = uVar5;
          if (uVar20 == local_58) break;
          goto LAB_1801a829c;
        }
      }
      iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,param_5);
      uVar6 = local_49;
      if (iVar8 != local_50) {
        uVar6 = uVar5;
      }
      uVar5 = uVar6;
      uVar20 = uVar20 + local_b0;
      uVar6 = uVar5;
    } while (uVar20 != local_58);
  }
  *param_2 = uVar6;
  *(undefined4 *)(param_2 + 1) = uStack_d4;
  *(uint *)(param_2 + 4) = CONCAT31(uStack_d0,uStack_d4._3_1_);
  *(longlong **)(param_2 + 8) = plVar12;
  if (local_68 < local_110) {
    uVar9 = local_88 + local_110;
    ppppbVar19 = (byte ****)local_128;
    if (local_108 < uVar9) {
      ppppbVar19 = (byte ****)local_128[-1];
      if (local_f8 <= (byte *)((longlong)local_128 + (local_100 - (longlong)ppppbVar19))) goto LAB_1801a839f;
      uVar9 = local_110 + local_f0;
    }
    thunk_FUN_1801f42e0(ppppbVar19,uVar9);
  }
  if (local_68 < uStack_90) {
    uVar9 = local_88 + uStack_90;
    ppppuVar16 = (undefined8 ****)local_a8;
    if (local_108 < uVar9) {
      ppppuVar16 = (undefined8 ****)local_a8[-1];
      if (local_f8 <= (byte *)((longlong)local_a8 + (local_100 - (longlong)ppppuVar16))) {
LAB_1801a839f:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_60,local_58);
      }
      uVar9 = uStack_90 + local_f0;
    }
    thunk_FUN_1801f42e0(ppppuVar16,uVar9);
  }
  return param_2;
LAB_1801a7c30:
  local_98 = local_98 + local_88;
  ppppuVar16 = &local_a8;
  if (local_68 < uStack_90) {
    ppppuVar16 = (undefined8 ****)local_a8;
  }
  FUN_1802079d0((undefined1 *)((longlong)ppppuVar16 + uVar9 + 1),(undefined1 *)((longlong)ppppuVar16 + uVar9),
                lVar18 + local_88);
  *(undefined1 *)((longlong)ppppuVar16 + uVar9) = uVar5;
  if (local_59 < (char)*(byte *)((longlong)ppppbVar19 + 1)) {
LAB_1801a7c72:
    ppppbVar19 = (byte ****)((longlong)ppppbVar19 + 1);
  }
  goto LAB_1801a7bb0;
}



void Unwind_1801a83c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 200) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 200) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xf0));
    }
  }
  return;
}



void Unwind_1801a8410(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x48) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x48) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xf0));
    }
  }
  return;
}



void Unwind_1801a8460(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x40);
  return;
}



void Unwind_1801a84a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



void FUN_1801a84e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  ulonglong uVar5;
  undefined1 local_e0 [8];
  ulonglong local_d8;
  undefined8 **local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined *local_b0;
  undefined8 **local_a8;
  undefined *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 **local_88;
  undefined **ppuStack_80;
  uintptr_t local_78;
  ulonglong local_70;
  undefined8 **local_68;
  longlong *plStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined4 local_40;
  uint local_3c;
  uintptr_t local_38;
  ulonglong local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  local_90 = 1;
  local_40 = 1;
  local_d8 = 0xfff;
  local_d0 = (undefined8 ***)0x3000000000000000;
  local_c8 = 0x28;
  local_30 = 0xf;
  local_3c = 0;
  local_c0 = -8;
  local_b8 = 0x20;
  local_98 = *param_2;
  local_a0 = (undefined *)0x3000000000000000;
  local_68 = (undefined8 ***)0x0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  local_50 = 0xf;
  local_88 = (undefined8 ***)0x1;
  ppuStack_80 = &local_a0;
  FUN_1801b23c0(&DAT_1802a77f8,&DAT_18029c491,0x13,6,&DAT_1802a7800);
  local_b0 = &DAT_1802a77f8;
  local_a8 = (undefined8 ***)0x5;
  FUN_180003080(local_e0,&local_68,&local_b0,&local_88,local_38);
  pppuVar4 = &local_68;
  if (local_30 < local_50) {
    pppuVar4 = (undefined8 ***)local_68;
  }
  FUN_18008cbd0(param_1,pppuVar4,local_58);
  if (local_30 < local_50) {
    uVar5 = local_90 + local_50;
    pppuVar4 = (undefined8 ***)local_68;
    if (local_d8 < uVar5) {
      pppuVar4 = (undefined8 ***)local_68[-1];
      if (local_b8 <= (ulonglong)((longlong)local_68 + (local_c0 - (longlong)pppuVar4))) goto LAB_1801a886f;
      uVar5 = local_50 + local_c8;
    }
    thunk_FUN_1801f42e0(pppuVar4,uVar5);
  }
  plStack_60 = *(longlong **)(*(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x40) + 8);
  (**(code **)(*plStack_60 + 8))();
  plVar2 = (longlong *)FUN_180029a60(&local_68);
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  FUN_180197e00(param_1,uVar1);
  if (plStack_60 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*plStack_60 + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,local_40);
    }
  }
  local_58 = *param_3;
  local_68 = local_d0;
  local_50 = CONCAT44(local_50._4_4_,3);
  plStack_60 = (longlong *)0x2000000000000008;
  local_88 = (undefined8 ***)0x0;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_70 = local_30;
  FUN_180002240(&local_88,0x16);
  local_78 = local_38;
  local_b0 = (undefined *)0x2;
  local_a8 = &local_68;
  FUN_1801b23c0(&DAT_1802a784c,&DAT_18029c5f8,0x10,7,&DAT_1802a7854);
  local_a0 = &DAT_1802a784c;
  local_98 = 6;
  FUN_180003080(local_e0,&local_88,&local_a0,&local_b0,local_38);
  pppuVar4 = &local_88;
  if (local_30 < local_70) {
    pppuVar4 = (undefined8 ***)local_88;
  }
  FUN_18008cbd0(param_1,pppuVar4,local_78);
  if (local_30 < local_70) {
    uVar5 = local_90 + local_70;
    pppuVar4 = (undefined8 ***)local_88;
    if (local_d8 < uVar5) {
      pppuVar4 = (undefined8 ***)local_88[-1];
      if (local_b8 <= (ulonglong)((longlong)local_88 + (local_c0 - (longlong)pppuVar4))) {
LAB_1801a886f:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_3c,local_38);
      }
      uVar5 = local_70 + local_c8;
    }
    thunk_FUN_1801f42e0(pppuVar4,uVar5);
  }
  return;
}



void Unwind_1801a8890(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_1801a88c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0xa8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xa8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 200));
    }
  }
  return;
}



void Unwind_1801a8900(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



void Unwind_1801a8930(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_1801a8960(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



void FUN_1801a8990(int *param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte local_a3;
  byte local_a2;
  byte local_a1;
  int local_a0;
  ushort local_9c;
  ushort local_9a;
  int local_98;
  uint local_94;
  ulonglong local_90;
  ulonglong local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  byte local_68;
  int local_64;
  uint local_60;
  uint local_5c;

  local_88 = 0x10f7ffa8cede5c2f;
  local_90 = 0x17b453845e1f6a99;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar6 = local_88 ^ 0x58afc386cc88e171;
          uVar3 = local_88 ^ local_90;
          local_90 = local_90 ^ 0x58afc386cc88e171;
          local_88 = uVar6;
          if (0x743ac2c90c136b5 < (longlong)uVar3) break;
          if (uVar3 == 0xa933c5e26d20addb) {
            local_88 = 0x1128aebae9bbd86a;
            if (local_5c < local_94) {
              local_88 = 0x7b5543df1ee1bc60;
            }
            local_90 = 0x4788d69e1a4ed3dd;
            local_78 = local_a0;
            local_74 = local_a0;
          }
          else if (uVar3 == 0xeef0f04b06cc4465) {
            local_88 = 0x762bbf43a562dfd8;
            if ((local_9a & 3) == local_9c) {
              local_88 = 0xc4b922a678d1040f;
            }
            if (local_a3 != local_a1) {
              local_88 = 0x762bbf43a562dfd8;
            }
            local_90 = 0x3903c3d00ab31e1b;
          }
          else if (uVar3 == 0xfdbae17672621a14) {
            local_88 = 0x3b78fddb05163fd2;
            if ((short)local_9a % 400 == local_9c) {
              local_88 = 0xdd6344aac7e753ca;
            }
            if ((short)local_9a % 100 != local_9c) {
              local_88 = 0xdd6344aac7e753ca;
            }
            local_90 = 0x74508148aac7fe11;
            local_5c = 0x1d;
          }
        }
        if ((longlong)uVar3 < 0x4f287c93afd1c1c3) break;
        if (uVar3 == 0x4f287c93afd1c1c3) {
          local_88 = 0xd3fd0631a458e1a2;
          local_90 = 0x7acec3d3c9784c79;
          local_5c = (uint)(byte)(&DAT_18021fbf0)[(uint)local_a2 & (uint)local_a2 + (uint)local_a3];
        }
        else if (uVar3 == 0x56a07824f3f50bb7) {
          iVar5 = -399;
          iVar2 = 9;
          if (local_a1 < local_a3) {
            iVar2 = -3;
          }
          iVar9 = local_7c - (uint)(local_a3 < 3);
          if (local_a0 <= iVar9) {
            iVar5 = 0;
          }
          iVar5 = ((iVar5 + iVar9) % 400 - (iVar5 + iVar9)) + iVar9;
          iVar1 = local_7c + local_64;
          if (0 < (short)local_9a) {
            iVar1 = local_6c + local_7c;
          }
          iVar7 = -99;
          if (local_a0 <= iVar9) {
            iVar7 = 0;
          }
          uVar8 = (iVar2 + local_60) * 0x3d3 + 0x13;
          bVar4 = (byte)local_98;
          local_78 = (int)((local_80 * iVar5 >> (bVar4 & 0x1f)) +
                           ((int)uVar8 >> (local_68 & 0x1f)) + local_94 + local_98 + iVar5 / local_64) % 7;
          iVar2 = (iVar7 + iVar9) / local_70;
          local_74 = (iVar2 >> (bVar4 & 0x1f)) +
                     ((local_94 + (iVar9 * local_80 >> (bVar4 & 0x1f)) + (uVar8 >> (local_68 & 0x1f)) + iVar1 / local_70
                      ) - ((iVar1 / local_70 >> (bVar4 & 0x1f)) + ((local_6c + local_7c) * local_80 >> (bVar4 & 0x1f)) +
                          iVar2)) + -0x133;
          local_88 = 0x316aebb29ef65741;
          local_90 = 0xdb77ef39a5938fc;
        }
      }
      if (uVar3 != 0x743ac2c90c136b6) break;
      local_9c = 0;
      local_64 = -100;
      local_68 = 5;
      local_6c = -1;
      local_a1 = 2;
      local_80 = 0x5b5;
      local_98 = 2;
      local_70 = 100;
      local_a0 = 0;
      local_a2 = 0xf;
      local_94 = (uint)*(byte *)((longlong)param_2 + 3);
      local_a3 = (byte)param_2[1];
      local_60 = (uint)local_a3;
      local_9a = *param_2;
      local_7c = (int)(short)local_9a;
      local_88 = 0xc265b5f25d315446;
      if (*(byte *)((longlong)param_2 + 3) == 0) {
        local_88 = 0x1048d0f85f527f9e;
      }
      if ((byte)(local_a3 - 0xd) < 0xf4) {
        local_88 = 0x1048d0f85f527f9e;
      }
      if (local_9a == 0x8000) {
        local_88 = 0x1048d0f85f527f9e;
      }
      local_90 = 0x2c9545b95bfd1023;
      local_78 = 0;
      local_74 = 0;
    }
  } while (uVar3 != 0x3cdd954104af6fbd);
  *param_1 = local_a0;
  param_1[1] = local_a0;
  param_1[2] = local_a0;
  param_1[3] = local_94;
  param_1[4] = local_60 + local_6c;
  param_1[5] = local_7c + -0x76c;
  param_1[7] = local_74;
  param_1[6] = local_78;
  return;
}



ios_base * FUN_1801a9000(ios_base *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1,0x60);
  }
  return param_1;
}



void Unwind_1801a9070(void)

{
  Unwind_1801dd394();
}



void FUN_1801a9090(longlong param_1,undefined8 param_2,char param_3)

{
  undefined2 uVar1;
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
  local_38 = 1;
  local_3c = 4;
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
  plVar4 = (longlong *)FUN_1801a9670(&stack0xffffffffffffff88);
  uVar1 = (**(code **)(*plVar4 + 0x60))(plVar4,0x20);
  if (local_70 != (longlong *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*local_70 + 0x10))();
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,local_38);
    }
  }
  *(undefined2 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar2 = *(uint *)(param_1 + 0x10) & 0x13 | local_3c;
    *(uint *)(param_1 + 0x10) = uVar2;
    uVar2 = uVar2 & *(uint *)(param_1 + 0x14);
    if (uVar2 != local_34) {
      puVar6 = &DAT_1802a778c;
      if ((uVar2 & 2) == local_34) {
        puVar6 = &DAT_1802a77a8;
      }
      if ((*(uint *)(param_1 + 0x14) & local_3c) != local_34) {
        puVar6 = &DAT_1802a7770;
      }
      FUN_1801b23c0(&DAT_1802a77a8,&DAT_18029c305,0x1b,0x15,&DAT_1802a77c0);
      FUN_1801b23c0(&DAT_1802a778c,&DAT_18029c2c0,0x18,0x16,&DAT_1802a77a4);
      FUN_1801b23c0(&DAT_1802a7770,&DAT_18029c279,0x1f,0x15,&DAT_1802a7788);
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



void Unwind_1801a92f0(undefined8 param_1,longlong param_2)

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



void Unwind_1801a9340(void)

{
  Unwind_1801dd394();
}



void FUN_1801a9380(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
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
  local_90 = 0x64f7c507f80589eb;
  local_98 = 0x64dcd0d9c2af7549;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_90 ^ 0x2db23bb6220b8de0;
        uVar1 = local_90 ^ local_98;
        local_98 = local_98 ^ 0x2db23bb6220b8de0;
        local_90 = uVar3;
        if (0x1f17f692c72c62cc < (longlong)uVar1) break;
        if (uVar1 == 0x2b15de3aaafca2) {
          local_9c = 4;
          local_a0 = 0;
          uVar2 = local_9c;
          if (*(longlong *)(param_1 + 0x48) != 0) {
            uVar2 = 0;
          }
          uVar2 = (*(uint *)(param_1 + 0x10) | param_2) & 0x17 | uVar2;
          *(uint *)(param_1 + 0x10) = uVar2;
          local_84 = uVar2 & *(uint *)(param_1 + 0x14);
          local_90 = 0x9a556cd96611d2d8;
          if (local_84 == 0) {
            local_90 = 0x8ac3356430ef9710;
          }
          local_98 = 0x85429a4ba13db015;
        }
        else if (uVar1 == 0xf81af2f91d22705) {
          if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_c8)) {
            return;
          }
        }
      }
      if (uVar1 != 0x1f17f692c72c62cd) break;
      local_90 = 0xca5be5c37a649e2;
      if (param_3 != '\0') {
        local_90 = 0x886a1e4ff79f5e5;
      }
      local_98 = 0x6310e3da4f49020d;
    }
    if (uVar1 == 0x6b96423eb030f7e8) {
      FUN_1801dd110(0,0);
    }
  } while (uVar1 != 0x6fb55d8678ef4bef);
  puVar4 = &DAT_1802a778c;
  if ((local_84 & 2) == local_a0) {
    puVar4 = &DAT_1802a77a8;
  }
  if ((local_9c & local_84) != local_a0) {
    puVar4 = &DAT_1802a7770;
  }
  local_a8 = &DAT_1802a77c0;
  FUN_1801b23c0(&DAT_1802a77a8,&DAT_18029c305,0x1b,0x15);
  local_a8 = &DAT_1802a77a4;
  FUN_1801b23c0(&DAT_1802a778c,&DAT_18029c2c0,0x18,0x16);
  local_a8 = &DAT_1802a7788;
  FUN_1801b23c0(&DAT_1802a7770,&DAT_18029c279,0x1f,0x15);
  local_80[0] = 1;
  local_78 = &PTR_vftable_18020e948;
  std::ios_base::failure::failure((failure *)&stack0xffffffffffffff90,puVar4,local_80);
  FUN_1801dd110((failure *)&stack0xffffffffffffff90,&DAT_1802536a8);
}



longlong * FUN_1801a9670(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  _Lockit local_54 [4];
  longlong *local_50;
  longlong *local_48;
  int local_3c;
  int local_38;
  _Lockit local_34 [4];
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_3c = 1;
  local_38 = 0;
  std::_Lockit::_Lockit(local_34,0);
  plVar1 = DAT_1802a72c0;
  local_50 = DAT_1802a72c0;
  if (DAT_1802a9358 == 0) {
    std::_Lockit::_Lockit(local_54,local_38);
    if (DAT_1802a9358 == 0) {
      DAT_1802a9358 = (longlong)local_3c + (longlong)DAT_1802a9348;
      DAT_1802a9348 = (int)DAT_1802a9358;
    }
    std::_Lockit::~_Lockit(local_54);
  }
  uVar2 = DAT_1802a9358;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((*(ulonglong *)(lVar3 + 0x18) <= DAT_1802a9358) ||
     (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + DAT_1802a9358 * 8), plVar4 == (longlong *)0x0)) {
    if (*(char *)(lVar3 + 0x24) == '\x01') {
      lVar3 = FUN_1801d8b40();
      if ((uVar2 < *(ulonglong *)(lVar3 + 0x18)) &&
         (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + uVar2 * 8), plVar4 != (longlong *)0x0))
      goto LAB_1801a97a7;
    }
    plVar4 = plVar1;
    if (plVar1 == (longlong *)0x0) {
      lVar3 = std::ctype<wchar_t>::ctype<wchar_t>_Constructor_or_Destructor((longlong *)&local_50,param_1);
      if (lVar3 == -1) {
        std::bad_cast::bad_cast_Constructor_or_Destructor();
      }
      local_48 = local_50;
      FUN_1801d8b04();
      (**(code **)(*local_48 + 8))();
      DAT_1802a72c0 = local_50;
      plVar4 = local_50;
    }
  }
LAB_1801a97a7:
  std::_Lockit::~_Lockit(local_34);
  return plVar4;
}



void Unwind_1801a97d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x40))(*(undefined8 **)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x4c));
  }
  return;
}



void Unwind_1801a9810(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x54));
  return;
}



void Unwind_1801a9940(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_2 + 0xb8));
  return;
}



ios_base * FUN_1801aa850(ios_base *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1 + -0x10,0x70);
  }
  return param_1 + -0x10;
}



void Unwind_1801aa8c0(void)

{
  Unwind_1801dd394();
}



short FUN_1801aa8e0(longlong param_1,short param_2)

{
  short *psVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  short local_14a;
  ulonglong local_148;
  ulonglong local_140;
  short local_138;
  char local_135;
  uint local_134;
  ulonglong local_130;
  byte local_128;
  int local_11c;
  uint local_118;
  int local_114;
  uint local_110;
  uint local_10c;
  uint *local_108;
  ulonglong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  uintptr_t local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_58;
  int *local_50;
  longlong local_48;

  local_140 = 0x66f0397cfb24218e;
  local_148 = 0x830f158f967c8f86;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_140 ^ 0x835ac435994aac83;
              uVar2 = local_140 ^ local_148;
              local_148 = local_148 ^ 0x835ac435994aac83;
              local_140 = uVar5;
              if ((longlong)uVar2 < -0x222ff34d48743b4) break;
              if ((longlong)uVar2 < 0x501efb33cf1d5d86) {
                if ((longlong)uVar2 < 0x3016fbc8957326fb) {
                  if (uVar2 == 0xfddd00cb2b78bc4c) {
                    **(uint **)(param_1 + 0x50) = local_110;
                    local_10c = *local_108;
                    local_140 = 0x3251d147a185b1f3;
                    if ((local_118 & local_10c) == local_134) {
                      local_140 = 0x337212bc9ecc7610;
                    }
                    local_148 = 0xbe6548615bb73b99;
                  }
                  else if (uVar2 == 0x19256970dd282a7) {
                    local_140 = 0x7974d11af2fb1b2c;
                    if (local_130 < local_d8) {
                      local_140 = 0x19f342247a9392cf;
                    }
                    local_14a = local_138;
                    local_148 = 0xf5fbe5d717840576;
                    local_80 = 0xfffffffe;
                    local_78 = local_d8;
                  }
                }
                else if (uVar2 == 0x3016fbc8957326fb) {
                  lVar3 = *local_58;
                  lVar4 = (**(longlong **)(param_1 + 0x38) - local_a8) + local_e0;
                  *(ulonglong *)*local_b0 = local_e0;
                  **(longlong **)(param_1 + 0x38) = lVar4;
                  local_140 = 0xdc9f2b03896aff99;
                  local_148 = 0x21422bc8a21243d5;
                  local_110 = (uint)((ulonglong)(lVar3 - lVar4) >> (local_128 & 0x3f));
                }
                else if (uVar2 == 0x4612d7ae3b15b063) {
                  local_90 = local_68;
                  local_88 = FUN_1801d61c8(local_70);
                  local_140 = 0x3311424d00b090c6;
                  local_148 = 0x6fad93f7e76d6321;
                }
                else if (uVar2 == 0x4e668be3ac8ee416) {
                  thunk_FUN_1801f42e0(local_98,local_a0);
                  local_10c = *local_108;
                  local_140 = 0x45d99d75c0ff6e96;
                  local_148 = 0xc8cec7a80584231f;
                }
              }
              else if ((longlong)uVar2 < 0x6c0fee27e6a1b9bd) {
                if (uVar2 == 0x501efb33cf1d5d86) {
                  local_f0 = (undefined8 *)(param_1 + 0x40);
                  local_c0 = **(longlong **)(param_1 + 0x40);
                  local_b8 = (undefined8 *)(param_1 + 0x58);
                  local_50 = *(int **)(param_1 + 0x58);
                  local_114 = *local_50;
                  local_140 = 0xf8b5fb6e91d9eeda;
                  if ((int)local_134 < local_114) {
                    local_140 = 0xf58efc9f5ac04d33;
                  }
                  local_135 = local_c0 != 0;
                  if (!(bool)local_135) {
                    local_140 = 0xf8b5fb6e91d9eeda;
                  }
                  local_148 = 0x313d10f22342eb12;
                }
                else if (uVar2 == 0x540ffb59786b70a3) {
                  local_78 = local_130 << (local_128 & 0x3f);
                  local_80 = local_130 << 2;
                  local_140 = 0xe89a9894207580f;
                  if (0x3ff < local_130) {
                    local_140 = 0xa493d9d414057fd5;
                  }
                  local_148 = 0x489b7e277912e86c;
                  local_70 = local_80;
                  local_68 = local_78;
                }
                else if (uVar2 == 0x5cbcd1bae7ddf3e7) {
                  local_e0 = local_88;
                  local_c8 = local_130 << (local_128 & 0x3f);
                  FUN_1802079d0(local_88,local_e8);
                  local_58 = (longlong *)(param_1 + 0x68);
                  *(ulonglong *)(param_1 + 0x68) = local_88 + local_c8 + 2;
                  **(ulonglong **)(param_1 + 0x20) = local_88;
                  *(ulonglong *)*local_f0 = local_88 + local_c8;
                  *(int *)*local_b8 = (int)local_90 - (int)local_130;
                  local_140 = 0xf7f4ff637f11c390;
                  if ((*local_108 & 4) == local_134) {
                    local_140 = 0x2dc9a0e559c3327c;
                  }
                  local_148 = 0x1ddf5b2dccb01487;
                }
              }
              else if (uVar2 == 0x6c0fee27e6a1b9bd) {
                local_48 = *(longlong *)(local_e8 + -8);
                local_140 = 0xaf026eb5b8f048db;
                if ((local_a8 - local_48) - 8U < local_100) {
                  local_140 = 0xae2e0f2e51e86ea0;
                }
                local_148 = 0xd2e5f0480866b0e9;
              }
              else if (uVar2 == 0x7ccbff66598ede49) {
                local_a0 = local_c8 + local_f8;
                local_140 = 0x8676d358ced99034;
                local_148 = 0xc81058bb62577422;
                local_98 = local_48;
              }
              else if (uVar2 == 0x7de79efdb096f832) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_134,local_d0);
              }
            }
            if ((longlong)uVar2 < -0x367714634d64fa38) break;
            if ((longlong)uVar2 < -0x15d45bb14c5e28e9) {
              if (uVar2 == 0xc988eb9cb29b05c8) {
                local_e8 = **(longlong **)(param_1 + 0x18);
                local_130 = (((longlong)local_114 << (local_128 & 0x3f)) + local_c0) - local_e8 >> (local_128 & 0x3f);
                if (local_135 == '\0') {
                  local_130 = local_d0;
                }
                local_140 = 0x557467dc92c8a14a;
                if (local_130 < local_100) {
                  local_140 = 0xae8143bbdf661eec;
                }
                local_148 = 0xe8939415e473ae8f;
                local_70 = 0x40;
                local_68 = local_100;
                local_b0 = (undefined8 *)(param_1 + 0x18);
                local_a8 = local_e8;
              }
              else if (uVar2 == 0xe5ff2cf36d58ae08) {
                local_138 = -1;
                local_d0 = 0;
                local_128 = 1;
                local_f8 = 0x27;
                local_118 = 1;
                local_11c = -1;
                local_d8 = 0x7fffffff;
                local_134 = 0;
                local_100 = 0x20;
                local_108 = (uint *)(param_1 + 0x70);
                local_140 = 0xe7e716532efbd2f1;
                if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
                  local_140 = 0x9a62fc1c4fd308b8;
                }
                local_148 = 0x6b68229ecb84ccab;
                local_14a = -1;
              }
            }
            else if (uVar2 == 0xea2ba44eb3a1d717) {
              *(ulonglong *)*local_b0 = local_e0;
              **(ulonglong **)(param_1 + 0x38) = local_e0;
              local_140 = 0x4373874cd9cf109f;
              local_148 = 0xbeae8787f2b7acd3;
              local_110 = local_134;
            }
            else if (uVar2 == 0xec08a7f36d1797b9) {
              lVar3 = FUN_1801d61c8(local_80 + local_f8);
              local_88 = local_f8 + lVar3 & 0xffffffffffffffe0;
              *(longlong *)(local_88 - 8) = lVar3;
              local_140 = 0x9b227bbf4091dd75;
              local_148 = 0xc79eaa05a74c2e92;
              local_90 = local_78;
            }
            else if (uVar2 == 0xf10ade828457c413) {
              local_140 = 0xb220061d7b87c062;
              if (param_2 == local_138) {
                local_140 = 0x6eb1c9e351e583be;
              }
              local_148 = 0xe23efd2eb49a9de4;
              local_14a = 0;
            }
          }
          if ((longlong)uVar2 < -0x42180c368944f03b) break;
          if (uVar2 == 0xbde7f3c976bb0fc5) {
            local_140 = 0x7b6f579f5ce4fbae;
            if (local_130 < 0x3fffffff) {
              local_140 = 0x2ef2fa51295d09aa;
            }
            local_148 = 0x7afd010851367909;
          }
          else if (uVar2 == 0xc4b3ec6d7982a621) {
            *local_50 = local_114 + local_11c;
            psVar1 = *(short **)*local_f0;
            *(short **)*local_f0 = psVar1 + 1;
            *psVar1 = param_2;
            *(longlong *)(param_1 + 0x68) = local_c0 + 2;
            local_140 = 0xad8161317651be0d;
            local_148 = 0x210e55fc932ea057;
            local_14a = param_2;
          }
        }
        if (uVar2 != 0x8c349926fa328a6a) break;
        local_140 = 0x81ecd6626ced8b88;
        if (0x7ff < local_130) {
          local_140 = 0xa385b3a626c2d623;
        }
        local_148 = 0xcf8a5d81c0636f9e;
        local_a0 = local_c8;
        local_98 = local_e8;
      }
      if (uVar2 != 0x8d175addc57b4d89) break;
      *local_108 = local_10c | local_118;
      *(int *)*local_b8 = *(int *)*local_b8 + local_11c;
      psVar1 = *(short **)*local_f0;
      *(short **)*local_f0 = psVar1 + 1;
      *psVar1 = param_2;
      local_140 = 0x5eaf9885eea602e6;
      local_148 = 0xd220ac480bd91cbc;
      local_14a = param_2;
    }
  } while (uVar2 != 0x8c8f34cde57f1e5a);
  return local_14a;
}



short FUN_1801ab480(longlong param_1,short param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short local_6c;
  short local_6a;
  ulonglong local_68;
  ulonglong local_60;
  int local_54;
  undefined8 *local_50;
  ulonglong local_48;

  local_60 = 0x7fa75adb1833fb6;
  local_68 = 0x96e32cfdbb34f04f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_60 ^ 0x405081578c5e0c52;
          uVar2 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x405081578c5e0c52;
          local_60 = uVar1;
          if (0x396d57fb84ca102b < (longlong)uVar2) break;
          if ((longlong)uVar2 < -0x9c3794686ea6e42) {
            if (uVar2 == 0x911959500ab7cff9) {
              local_6a = -1;
              local_54 = 1;
              local_50 = (undefined8 *)(param_1 + 0x38);
              local_48 = **(ulonglong **)(param_1 + 0x38);
              local_60 = 0x1ad1f10f39d9e1e7;
              if (local_48 == 0) {
                local_60 = 0x9a2dc62d21d9eb40;
              }
              local_68 = 0xe58c4b6d5cab50a4;
              local_6c = local_6a;
            }
            else if (uVar2 == 0xdcbc7b82ce403a22) {
              **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + local_54;
              *(longlong *)*local_50 = *(longlong *)*local_50 + -2;
              **(short **)*local_50 = param_2;
              local_60 = 0xf928dd46f7472ad6;
              local_68 = 0x868950068a359132;
              local_6c = param_2;
            }
          }
          else if (uVar2 == 0xf63c86b9791591be) {
            local_60 = 0x60edcc1879d26e5f;
            if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
              local_60 = 0xc3f03adacae0ef99;
            }
            local_68 = 0x1f4c415804a0d5bb;
            local_6c = local_6a;
          }
          else if (uVar2 == 0xff5dba626572b143) {
            local_60 = 0x8e9b0a76cbb83f72;
            if (**(ulonglong **)(param_1 + 0x18) < local_48) {
              local_60 = 0xc857d0cd320094ba;
            }
            local_68 = 0xf13a8736b6ca8496;
            local_6c = local_6a;
          }
        }
        if (0x6870bf6aa57926e8 < (longlong)uVar2) break;
        if (uVar2 == 0x396d57fb84ca102c) {
          local_60 = 0x65b5519828f20e8a;
          if (param_2 == local_6a) {
            local_60 = 0x4aeecfff5de6f174;
          }
          local_68 = 0xdc5eef28d8b2863;
        }
        else if (uVar2 == 0x472b210dd06dd917) {
          **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + local_54;
          *(longlong *)*local_50 = *(longlong *)*local_50 + -2;
          local_60 = 0xc3eb5381204c24af;
          local_68 = 0xbc4adec15d3e9f4b;
          local_6c = 0;
        }
      }
      if (uVar2 != 0x6870bf6aa57926e9) break;
      local_60 = 0x83c29635a09132e4;
      if (param_2 == *(short *)(local_48 - 2)) {
        local_60 = 0xa9426b0e17c49978;
      }
      local_68 = 0x75fe108cd984a35a;
    }
  } while (uVar2 != 0x7fa18d407d72bbe4);
  return local_6c;
}



undefined2 FUN_1801ab810(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined2 local_9c;
  undefined2 local_9a;
  ulonglong local_98;
  ulonglong local_90;
  uint local_84;
  undefined2 *local_80;
  undefined2 *local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  int *local_48;

  local_90 = 0xb454b210d3ef0191;
  local_98 = 0x820100f3ca746115;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_90 ^ 0xf1035e7657435a2e;
          uVar2 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xf1035e7657435a2e;
          local_90 = uVar1;
          if ((longlong)uVar2 < 0x2cc917a3d19535f7) break;
          if ((longlong)uVar2 < 0x66261fbb52226825) {
            if (uVar2 == 0x2cc917a3d19535f7) {
              *local_60 = local_58;
              *local_48 = (int)((ulonglong)((longlong)local_58 - *local_68) >> 1);
              local_78 = *(undefined2 **)*local_70;
              local_90 = 0x4d0fd405d283eb6d;
              local_98 = 0x91bf7a651a6b62fc;
            }
            else if (uVar2 == 0x3655b2e3199b6084) {
              local_9a = 0xffff;
              local_84 = 0;
              local_70 = (undefined8 *)(param_1 + 0x38);
              local_68 = *(longlong **)(param_1 + 0x38);
              local_80 = (undefined2 *)*local_68;
              local_90 = 0x98e19766d2da1960;
              if (local_80 == (undefined2 *)0x0) {
                local_90 = 0xe444c0d35625f03;
              }
              local_98 = 0x8be4bb43401f5fde;
              local_9c = local_9a;
            }
          }
          else if (uVar2 == 0x66261fbb52226825) {
            local_60 = (undefined8 *)(param_1 + 0x68);
            local_58 = *(undefined2 **)(param_1 + 0x68);
            if (*(undefined2 **)(param_1 + 0x68) < local_50) {
              local_58 = local_50;
            }
            local_90 = 0x41bebd44e945bcef;
            if (local_80 < local_58) {
              local_90 = 0xe8d75da94dad89c5;
            }
            local_98 = 0xc41e4a0a9c38bc32;
            local_9c = local_9a;
          }
          else if (uVar2 == 0x730e43d92138a1ac) {
            local_50 = (undefined2 *)**(undefined8 **)(param_1 + 0x40);
            local_90 = 0xeb81e777be1fd46;
            if (local_50 == (undefined2 *)0x0) {
              local_90 = 0xa7a605b1577d6e37;
            }
            local_98 = 0x2206f2ff22006eea;
            local_9c = local_9a;
          }
        }
        if ((longlong)uVar2 < 0x13052c2592c546be) break;
        if (uVar2 == 0x13052c2592c546be) {
          local_48 = *(int **)(param_1 + 0x50);
          local_90 = 0xbc408af81eca8955;
          if ((int)local_84 < *local_48) {
            local_90 = 0x13fe6741f71aa168;
          }
          local_98 = 0xcf4ec9213ff228f9;
          local_78 = local_80;
        }
        else if (uVar2 == 0x2cbeec8859e193ac) {
          local_90 = 0xca351c54aee65366;
          if ((*(uint *)(param_1 + 0x70) & 4) == local_84) {
            local_90 = 0x29b3f4a189b93b9e;
          }
          local_98 = 0x4f95eb1adb9b53bb;
          local_9c = local_9a;
        }
      }
      if (uVar2 != 0xdcb0ae60c8e88991) break;
      local_9c = *local_78;
      local_90 = 0x2707a08315fbfe40;
      local_98 = 0xa2a757cd6086fe9d;
    }
  } while (uVar2 != 0x85a0f74e757d00dd);
  return local_9c;
}



undefined2 FUN_1801abb80(longlong *param_1)

{
  undefined2 *puVar1;
  short sVar2;
  ulonglong uVar3;
  undefined2 local_52;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x692c12222dee6c87;
  local_50 = 0x62c1b1fdf059be34;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xd196bb111937f52f;
        if (uVar3 != 0xbeda3dfddb7d2b3) break;
        sVar2 = (**(code **)(*param_1 + 0x30))(param_1);
        local_48 = 0x4ab5ed67cc4b6202;
        if (sVar2 == -1) {
          local_48 = 0x7a971552ffbce25f;
        }
        local_50 = 0xd6221bf761439eb;
        local_52 = 0xffff;
      }
      if (uVar3 != 0x47d7ccd8ba5f5be9) break;
      *(int *)param_1[10] = *(int *)param_1[10] + -1;
      puVar1 = *(undefined2 **)param_1[7];
      *(undefined2 **)param_1[7] = puVar1 + 1;
      local_52 = *puVar1;
      local_48 = 0x71d279836cc747b3;
      local_50 = 0x6274d6ee56f9c07;
    }
    local_48 = local_48 ^ 0xd196bb111937f52f;
  } while (uVar3 != 0x77f534ed89a8dbb4);
  return local_52;
}



longlong FUN_1801abce0(longlong *param_1,short *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_c0;
  ulonglong local_b8;
  short local_aa;
  ulonglong local_a8;
  ulonglong local_a0;
  uint local_94;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  short *local_78;
  ulonglong local_70;
  ulonglong local_68;
  short *local_60;
  short *local_58;
  longlong local_48;

  local_b8 = 0x35d1101a8af28506;
  local_c0 = 0xdb15397e44546e6d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_b8 ^ 0xe02abaf235b75cd0;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0xe02abaf235b75cd0;
            local_b8 = uVar2;
            if ((longlong)uVar1 < 0x23e07fd78ac06e7a) break;
            if ((longlong)uVar1 < 0x4640e822713c32cf) {
              if (uVar1 == 0x23e07fd78ac06e7a) {
                *local_58 = local_aa;
                local_78 = local_58 + 1;
                local_70 = local_a8 - 1;
                local_b8 = 0xde3aa5e862b36997;
                local_c0 = 0x3848c31b2c5a0fdc;
              }
              else if (uVar1 == 0x29b9795d7cfce355) {
                local_aa = (**(code **)(*param_1 + 0x38))(param_1);
                local_b8 = 0xa897f29c44ab5ff7;
                if (local_aa == -1) {
                  local_b8 = 0x16a5ef27a38f3f0a;
                }
                local_c0 = 0x8b778d4bce6b318d;
                local_a0 = local_a8;
              }
            }
            else if (uVar1 == 0x4640e822713c32cf) {
              local_58 = local_60;
              local_a8 = local_68;
              local_48 = *(longlong *)*local_88;
              local_b8 = 0x190f7a9118cbdeb4;
              if (local_48 == 0) {
                local_b8 = 0x82b161b93b6d9523;
              }
              local_c0 = 0xab0818e447917676;
            }
            else if (uVar1 == 0x6f4011763db1ac67) {
              local_88 = param_1 + 7;
              local_80 = param_1 + 10;
              local_b8 = 0x96ed9e597026330a;
              local_c0 = 0xd0ad767b011a01c5;
              local_68 = param_3;
              local_60 = param_2;
            }
          }
          if ((longlong)uVar1 < -0x113bd69b31591495) break;
          if (uVar1 == 0xeec42964cea6eb6b) {
            local_90 = 0;
            local_b8 = 0xcde6b547fe209416;
            if (0 < (longlong)param_3) {
              local_b8 = 0x3f74c65dae7536f6;
            }
            local_c0 = 0x5034d72b93c49a91;
            local_a0 = param_3;
          }
          else if (uVar1 == 0x19687c125b16a2c4) {
            uVar1 = (ulonglong)local_94;
            if (local_a8 < local_94) {
              uVar1 = local_a8;
            }
            FUN_1802079d0(local_58,local_48,uVar1 << 1);
            local_78 = local_58 + uVar1;
            local_70 = local_a8 - uVar1;
            *(int *)*local_80 = *(int *)*local_80 - (int)uVar1;
            *(longlong *)*local_88 = *(longlong *)*local_88 + uVar1 * 2;
            local_b8 = 0xd0bd78ce1aa25995;
            local_c0 = 0x36cf1e3d544b3fde;
          }
        }
        if (uVar1 != 0xb20762755f5aa8c2) break;
        local_94 = *(uint *)*local_80;
        local_b8 = 0xcfcfea57a0746075;
        if (0 < (int)local_94) {
          local_b8 = 0xff1eef18879e21e4;
        }
        local_c0 = 0xe676930adc888320;
      }
      if (uVar1 != 0xe67266f34ee9664b) break;
      local_a0 = local_70;
      local_60 = local_78;
      local_b8 = 0x7489cf67f4707411;
      if (local_90 < (longlong)local_70) {
        local_b8 = 0xaf1b4529e8a84859;
      }
      local_c0 = 0xe95bad0b99947a96;
      local_68 = local_a0;
    }
  } while (uVar1 != 0x9dd2626c6de40e87);
  return param_3 - local_a0;
}



longlong FUN_1801ac170(longlong *param_1,undefined2 *param_2,ulonglong param_3)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined2 *local_b0;
  uint local_a4;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  ulonglong local_88;
  undefined2 *local_80;
  undefined2 *local_78;
  ulonglong local_70;
  longlong local_48;

  local_c8 = 0x9c8a67ed3ea6ba23;
  local_d0 = 0x7bb0a768832305e6;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_c8 ^ 0x44d8f202dc26064d;
            uVar2 = local_c8 ^ local_d0;
            local_d0 = local_d0 ^ 0x44d8f202dc26064d;
            local_c8 = uVar3;
            if (-0x1483bef2a7541dff < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x18c53f7a427a403b) {
              if (uVar2 == 0x88fc5a91d2850650) {
                local_a4 = *(uint *)*local_90;
                local_c8 = 0x7c499329ead074ae;
                if (0 < (int)local_a4) {
                  local_c8 = 0x734e4fed7ec60d8b;
                }
                local_d0 = 0x9735d224b27b96ac;
              }
              else if (uVar2 == 0xe47b9dc9ccbd9b27) {
                uVar2 = (ulonglong)local_a4;
                if (local_c0 < local_a4) {
                  uVar2 = local_c0;
                }
                FUN_1802079d0(local_48,local_b0,uVar2 << 1);
                local_78 = local_b0 + uVar2;
                local_70 = local_c0 - uVar2;
                *(int *)*local_90 = *(int *)*local_90 - (int)uVar2;
                *(longlong *)*local_98 = *(longlong *)*local_98 + uVar2 * 2;
                local_c8 = 0x10429564385e7712;
                local_d0 = 0xeab7c2ee1365116a;
              }
            }
            else if (uVar2 == 0xe73ac085bd85bfc5) {
              local_a0 = 0;
              local_c8 = 0x3be60c6e83dc3763;
              if (0 < (longlong)param_3) {
                local_c8 = 0xf282ed2da5db4466;
              }
              local_d0 = 0x1ab916597fa0c3a2;
              local_b8 = param_3;
            }
            else if (uVar2 == 0xe83bfb74da7b87c4) {
              local_c8 = 0x3553b486c77ced62;
              local_d0 = 0x54996c272e0b04fd;
              local_98 = param_1 + 8;
              local_90 = param_1 + 0xb;
              local_88 = param_3;
              local_80 = param_2;
            }
          }
          if (0x215f1a37fc7cf4c0 < (longlong)uVar2) break;
          if (uVar2 == 0xeb7c410d58abe202) {
            sVar1 = (**(code **)(*param_1 + 0x18))(param_1,*local_b0);
            local_c8 = 0x9496d92197e95a00;
            if (sVar1 == -1) {
              local_c8 = 0x858595e1412a9c86;
            }
            local_d0 = 0xa4da8fd6bd566847;
            local_b8 = local_c0;
          }
          else if (uVar2 == 0xfaf5578a2b3b6678) {
            local_b8 = local_70;
            local_80 = local_78;
            local_c8 = 0xe52d82b07fd0a066;
            if (local_a0 < (longlong)local_70) {
              local_c8 = 0xa5b840266adbbd38;
            }
            local_d0 = 0xc472988783ac54a7;
            local_88 = local_b8;
          }
        }
        if (uVar2 != 0x304c56f72abf3247) break;
        local_78 = local_b0 + 1;
        local_70 = local_c0 - 1;
        local_c8 = 0x7a1612f95cd4cffe;
        local_d0 = 0x80e3457377efa986;
      }
      if (uVar2 != 0x61cad8a1e977e99f) break;
      local_b0 = local_80;
      local_c0 = local_88;
      local_48 = *(longlong *)*local_98;
      local_c8 = 0x154db886bd2dd2ff;
      if (local_48 == 0) {
        local_c8 = 0x76cda31a370336ad;
      }
      local_d0 = 0x9db1e2176fa8d4af;
    }
  } while (uVar2 != 0x215f1a37fc7cf4c1);
  return param_3 - local_b8;
}



void FUN_1801ac640(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char local_111;
  ulonglong local_110;
  ulonglong local_108;
  char local_ff;
  char local_fe;
  char local_fd;
  uint local_fc;
  ulonglong local_f8;
  ulonglong local_f0;
  byte local_e8;
  uint local_dc;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong *local_58;
  longlong local_50;
  longlong *local_48;

  local_108 = 0xd74ff3605c91e0eb;
  local_110 = 0xeda072f3766be858;
LAB_1801ac740:
  while( true ) {
    uVar3 = local_108 ^ 0x91a1924d9f20bd4;
    uVar4 = local_108 ^ local_110;
    local_110 = local_110 ^ 0x91a1924d9f20bd4;
    local_108 = uVar3;
    if (0x89790bdd260fb29 < (longlong)uVar4) break;
    if ((longlong)uVar4 < -0x389520e55befea2c) {
      if ((longlong)uVar4 < -0x5df84fe7f221991b) {
        if (uVar4 == 0x842eb2e3358f9be4) {
          uVar3 = 0xaa0c80b1c828a8a4;
          if (local_fd != '\0') {
            uVar3 = 0xb4b41907faa94652;
          }
          if (local_a8 == local_fc) {
            uVar3 = 0xb4b41907faa94652;
          }
          local_108 = 0xaa0c80b1c828a8a4;
          if (local_c8 != 0) {
            local_108 = uVar3;
          }
          if (local_ac == local_fc) {
            local_108 = uVar3;
          }
          local_110 = 0xcb193375b63f08e;
          local_f8 = local_f0;
        }
        else if (uVar4 == 0x92fc1b6371139428) {
          local_108 = 0xc5b7d72e25d0877b;
          if (*(ulonglong *)(param_1 + 0x68) < local_88) {
            local_108 = 0x6c8bc2133f7ea2fb;
          }
          local_110 = 0x97fdffc724b13f6d;
          local_111 = '\x01';
          local_c0 = local_88;
          local_58 = (ulonglong *)(param_1 + 0x68);
        }
        else if (uVar4 == 0x9d14cb8c6919d30d) {
          local_108 = 0x5b67d72b4dfc06f5;
          if (local_fd != '\0') {
            local_108 = 0x919db371a331db26;
          }
          if (local_fe == '\0') {
            local_108 = 0x5b67d72b4dfc06f5;
          }
          local_110 = 0xfddac4addeb75edf;
LAB_1801acc10:
          local_f8 = local_d0;
        }
      }
      else if ((longlong)uVar4 < -0x4dd630cc83597aee) {
        if (uVar4 == 0xa207b0180dde66e5) {
          local_108 = 0xe4013a0e9bba1e58;
          if (param_4 == 2) {
            local_108 = 0x3d69a20f1ff5680b;
          }
          local_110 = 0x5628f53de71c9b4a;
        }
        else if (uVar4 == 0xa6bd1386934b582a) {
          *param_2 = local_f8;
          param_2[1] = 0;
          param_2[2] = 0;
          return;
        }
      }
      else if (uVar4 == 0xb229cf337ca68512) {
        local_108 = 0xf900191958f03994;
        local_110 = 0x5fbd0a9fcbbb61be;
        local_f8 = 0xffffffffffffffff;
      }
      else if (uVar4 == 0xb8058a30a1cab6dc) {
        local_a0 = local_d0 * 2 + local_d8;
        local_108 = 0x7073241801f25ab0;
        if (local_c8 != 0) {
          local_108 = 0x2a0d308eccfb9c69;
        }
        if (local_ff == '\0') {
          local_108 = 0x7073241801f25ab0;
        }
        local_110 = 0xed67ef9468eb89bd;
      }
    }
    else if ((longlong)uVar4 < -0x6539cb7624d5a27) {
      if (uVar4 == 0xc76adf1aa41015d4) {
        *local_48 = local_a0;
        **(undefined4 **)(param_1 + 0x50) = (int)((ulonglong)(local_50 - local_a0) >> (local_e8 & 0x3f));
        local_108 = 0x66ce6f197dfff3ef;
        local_110 = 0xfbdaa49514e620e2;
      }
      else if (uVar4 == 0xeb08e5d2106aa83a) {
        local_108 = 0xf662b478c141e9ba;
        if (param_4 < 1) {
          local_108 = 0xf1547f6232771924;
        }
        local_110 = 0xe4193751dfc1a2cd;
      }
      else if (uVar4 == 0xf1ad8e0db5d96657) {
        local_48 = *(longlong **)(param_1 + 0x38);
        local_c8 = *local_48;
        local_108 = 0x249b044799a55d8;
        if (local_a4 == local_fc) {
          local_108 = 0x58940810aa9b16e4;
        }
        local_110 = 0x500398ad78fbedce;
LAB_1801ace93:
        local_111 = '\0';
        local_c0 = 0;
      }
    }
    else if ((longlong)uVar4 < -0x41c991f106cbd7d) {
      if (uVar4 == 0xf9ac63489db2a5d9) {
        local_108 = 0x34960a595d03e531;
        if (local_d0 == 0) {
          local_108 = 0x8bd328ac946c809;
        }
        local_110 = 0xb0b8b8ba688c7ed5;
      }
      else if (uVar4 == 0xfb763dd41bcf9d96) {
        local_c0 = local_88;
        *local_58 = local_88;
        local_108 = 0x585b1b7240e8f98e;
        local_110 = 0xa11339b41894198;
        local_111 = '\x01';
      }
    }
    else if (uVar4 == 0xfbe366e0ef934283) {
      local_108 = 0x9e558abddcafdd0;
      if (local_ff != '\0') {
        local_108 = 0x6ae7ced411d20d;
      }
      local_110 = 0x385fd9c9ea2f0b8d;
    }
    else if (uVar4 == 0x65d65fba6707a63) {
      local_b8 = local_c8 - local_98 >> (local_e8 & 0x3f);
      local_108 = 0xc224efcb1c2b0910;
      local_110 = 0xfb99bbd17e2e989a;
    }
  }
  if ((longlong)uVar4 < 0x39bd541a6205918a) {
    if ((longlong)uVar4 < 0x2929e0d7000419ba) {
      if (uVar4 == 0x89790bdd260fb2a) {
        local_88 = **(ulonglong **)(param_1 + 0x40);
        local_108 = 0x25ddfce685e6f08b;
        if (local_88 == 0) {
          local_108 = 0xe56bcf6cf594dcb5;
        }
        local_110 = 0xb721e785f4f564a3;
        goto LAB_1801ace93;
      }
      if (uVar4 == 0x127b83291e804b77) {
        local_108 = 0xf86b6b208ba6fcf0;
        if (param_4 < 2) {
          local_108 = 0xf0f68354b5f1eab;
        }
        local_110 = 0x5a6cdb3886789a15;
      }
      else if (uVar4 == 0x154d4833edb6bbe9) {
        local_108 = 0xd58c222589f91d91;
        if (param_4 == 0) {
          local_108 = 0x5e18b90c975a0909;
        }
        local_110 = 0x67a5ed16f55f9883;
        local_b8 = 0;
      }
      goto LAB_1801ac740;
    }
    if (uVar4 == 0x2929e0d7000419ba) {
      local_b8 = (longlong)(local_80 - local_98) >> (local_e8 & 0x3f);
      local_108 = 0x321564a8c89e19a4;
      local_110 = 0xba830b2aa9b882e;
      goto LAB_1801ac740;
    }
    if (uVar4 == 0x31ba816237e5f65d) {
      local_108 = 0x4497cc05aaf4821c;
      if (local_fe != '\0') {
        local_108 = 0xa0a0fc0d86c7d96a;
      }
      local_110 = 0xe22adf8339bfda36;
      local_f8 = local_f0;
      goto LAB_1801ac740;
    }
    if (uVar4 != 0x38353e073e3ed980) goto LAB_1801ac740;
    local_108 = 0xa1b1d0ea3a0e95f8;
    if (local_d8 != 0) {
      local_108 = 0x151a6970f35b7b1;
    }
    if (local_c8 != 0) {
      local_108 = 0xa1b1d0ea3a0e95f8;
    }
    local_110 = 0xa7ecb5119c7eef9b;
  }
  else if ((longlong)uVar4 < 0x524a28e90161b816) {
    if (uVar4 == 0x39bd541a6205918a) {
      local_d0 = local_b8 + param_3;
      local_108 = 0x18f7ea77057df584;
      if (local_90 < local_d0) {
        local_108 = 0x47e69ab90b840877;
      }
      local_110 = 0xe15b893f98cf505d;
    }
    else {
      if (uVar4 == 0x3aef81932afa08b3) {
        local_dc = 3;
        local_e8 = 1;
        local_f0 = 0xffffffffffffffff;
        local_fc = 0;
        local_ac = param_5 & 1;
        local_ff = local_ac != 0;
        local_a8 = param_5 & 2;
        local_a4 = *(uint *)(param_1 + 0x70) & 2;
        uVar3 = 0xf38c741aa1242275;
        if (local_a4 != 0) {
          uVar3 = 0xa49ce99187b61c08;
        }
        local_fe = local_a8 != 0;
        if (!(bool)local_fe) {
          uVar3 = 0xf38c741aa1242275;
        }
        local_108 = uVar3;
        if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
          local_108 = 0xa49ce99187b61c08;
        }
        if (local_ac == 0) {
          local_108 = uVar3;
        }
        local_110 = 0x221fa1714fd4422;
        local_f8 = local_f0;
        goto LAB_1801ac740;
      }
      if (uVar4 != 0x428a238ebf78035c) goto LAB_1801ac740;
      local_108 = 0x9d01ae62d1b82b0e;
      if (local_d8 != 0) {
        local_108 = 0x12955d3342f76a9e;
      }
      if (local_80 != 0) {
        local_108 = 0x9d01ae62d1b82b0e;
      }
      local_110 = 0xb4284eb5d1bc32b4;
    }
  }
  else {
    if (0x6b415732f8e9f340 < (longlong)uVar4) {
      if (uVar4 == 0x6b415732f8e9f341) {
        local_108 = 0x8e65752406f97f86;
        local_110 = 0xb7d8213e64fcee0c;
        local_b8 = local_90;
      }
      else if (uVar4 == 0x6c4777dc7d8685f9) {
        iVar1 = **(int **)(param_1 + 0x58);
        lVar2 = **(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = local_d8;
        **(longlong **)(param_1 + 0x40) = local_a0;
        **(undefined4 **)(param_1 + 0x58) =
             (int)((ulonglong)(((longlong)iVar1 * 2 + lVar2) - local_a0) >> (local_e8 & 0x3f));
        local_108 = 0x9d018c39e567bfa7;
        local_110 = 0x3bbc9fbf762ce78d;
        goto LAB_1801acc10;
      }
      goto LAB_1801ac740;
    }
    if (uVar4 == 0x524a28e90161b816) {
      local_80 = local_c0;
      local_fd = local_111;
      local_d8 = **(longlong **)(param_1 + 0x18);
      local_50 = *(longlong *)(param_1 + 0x68);
      local_90 = local_50 - local_d8 >> (local_e8 & 0x3f);
      local_108 = 0xff2237c5486b78a3;
      local_110 = 0x142ad2175801d099;
      local_98 = local_d8;
      goto LAB_1801ac740;
    }
    if (uVar4 != 0x5563b30dcd2784be) goto LAB_1801ac740;
    local_108 = 0xa1dc804f5c88a1ef;
    if ((local_dc & param_5) == local_dc) {
      local_108 = 0xfc82f5292050bb46;
    }
    local_110 = 0x5a3fe6afb31be36c;
  }
  local_f8 = local_f0;
  goto LAB_1801ac740;
}



void FUN_1801ad200(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char local_e2;
  char local_e1;
  uint local_e0;
  char local_da;
  char local_d9;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  byte local_a8;
  uint local_94;
  uint local_90;
  uint local_8c;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong *local_58;
  longlong *local_50;
  longlong local_48;

  local_d0 = 0x47f22088caccbae;
  local_d8 = 0x8f582f834cfaa064;
LAB_1801ad2f0:
  do {
    while( true ) {
      uVar4 = local_d0 ^ 0xd2b01115fe8875d3;
      uVar3 = local_d0 ^ local_d8;
      local_d8 = local_d8 ^ 0xd2b01115fe8875d3;
      local_d0 = uVar4;
      if ((longlong)uVar3 < 0xa9035abaf1e5d) break;
      if ((longlong)uVar3 < 0x64ab677f80ab3019) {
        if (uVar3 == 0xa9035abaf1e5d) {
          *local_50 = local_78;
          **(undefined4 **)(param_1 + 0x50) = (int)((ulonglong)(local_48 - local_78) >> (local_a8 & 0x3f));
          local_d0 = 0x89540a671623d632;
          local_d8 = 0x87914f23f1ff3103;
        }
        else if (uVar3 == 0xec54544e7dce731) {
          local_d0 = 0x2b5a35470bfbcdd7;
          if (local_e1 != '\0') {
            local_d0 = 0x4798bc1fa2dd40e5;
          }
          if (local_d9 == '\0') {
            local_d0 = 0x2b5a35470bfbcdd7;
          }
          local_d8 = 0xfc99abaa30a4917a;
LAB_1801ad7b9:
          local_c0 = local_c8;
        }
        else if (uVar3 == 0x461268dabacd6b8b) {
          uVar3 = 0xd820250b80a8aff4;
          if (local_e1 != '\0') {
            uVar3 = 0xf3cd7ad37b94d21d;
          }
          if (local_90 == local_e0) {
            uVar3 = 0xf3cd7ad37b94d21d;
          }
          local_d0 = 0xd820250b80a8aff4;
          if (local_80 != 0) {
            local_d0 = uVar3;
          }
          if (local_94 == local_e0) {
            local_d0 = uVar3;
          }
          local_d8 = 0xfe3bbe6bbf7f359;
          local_c0 = local_b0;
        }
      }
      else if (uVar3 == 0x64ab677f80ab3019) {
        local_e1 = local_e2;
        local_70 = **(longlong **)(param_1 + 0x18);
        local_48 = *(longlong *)(param_1 + 0x68);
        local_d0 = 0x8bc92700ccae8c3f;
        if ((ulonglong)(local_48 - local_70 >> (local_a8 & 0x3f)) < local_c8) {
          local_d0 = 0xcd60dd7bbb319a41;
        }
        local_d8 = 0x1aa34396806ec6ec;
        local_c0 = local_b0;
      }
      else if (uVar3 == 0x67f4de3b996e7861) {
        local_c8 = param_3[1] + *param_3;
        local_50 = *(longlong **)(param_1 + 0x38);
        local_80 = *local_50;
        local_d0 = 0x8df7ea551adedc24;
        if (local_8c == local_e0) {
          local_d0 = 0x4ac62a4300b1f13e;
        }
        local_d8 = 0xe95c8d2a9a75ec3d;
LAB_1801ad824:
        local_e2 = '\0';
      }
      else if (uVar3 == 0x6f81fc9c6d487e6e) {
        *local_58 = local_88;
        local_d0 = 0xd0648448ebb4a2db;
        local_d8 = 0xb4cfe3376b1f92c2;
LAB_1801ad86f:
        local_e2 = '\x01';
      }
    }
    if ((longlong)uVar3 < -0x54afa07bf6b6d1d8) {
      if (uVar3 == 0x8b270d8bc0566bca) {
        local_a8 = 1;
        local_b0 = 0xffffffffffffffff;
        local_e0 = 0;
        local_94 = param_4 & 1;
        local_da = local_94 != 0;
        local_90 = param_4 & 2;
        local_8c = *(uint *)(param_1 + 0x70) & 2;
        uVar3 = 0xf5505835926f7cf8;
        if (local_8c != 0) {
          uVar3 = 0x456718e3305e5834;
        }
        local_d9 = local_90 != 0;
        if (!(bool)local_d9) {
          uVar3 = 0xf5505835926f7cf8;
        }
        local_d0 = uVar3;
        if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
          local_d0 = 0x456718e3305e5834;
        }
        if (local_94 == 0) {
          local_d0 = uVar3;
        }
        local_d8 = 0x92a4860e0b010499;
        local_c0 = local_b0;
      }
      else if (uVar3 == 0x916a64964cc04ad3) {
        local_d0 = 0x2abb21eb1498ca0f;
        if (local_c8 == 0) {
          local_d0 = 0x908788046e3680c0;
        }
        local_d8 = 0x6ca94931ae55a184;
      }
      else if (uVar3 == 0xa39aa7699ac41d03) {
        local_88 = **(ulonglong **)(param_1 + 0x40);
        local_d0 = 0x1170dfc52ad9bde5;
        if (local_88 == 0) {
          local_d0 = 0xde8be73ea33ba3d4;
        }
        local_d8 = 0xba208041239093cd;
        goto LAB_1801ad824;
      }
      goto LAB_1801ad2f0;
    }
    if ((longlong)uVar3 < -0x283c6112c4a0a353) {
      if (uVar3 == 0xab505f8409492e28) {
        local_58 = (ulonglong *)(param_1 + 0x68);
        local_d0 = 0xb5660338f994c52f;
        if (*(ulonglong *)(param_1 + 0x68) < local_88) {
          local_d0 = 0xbe4c98db14778b58;
        }
        local_d8 = 0xd1cd6447793ff536;
        goto LAB_1801ad86f;
      }
      if (uVar3 == 0xbb0117b59279d19f) {
        iVar1 = **(int **)(param_1 + 0x58);
        lVar2 = **(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = local_70;
        **(longlong **)(param_1 + 0x40) = local_78;
        **(undefined4 **)(param_1 + 0x58) =
             (int)((ulonglong)(((longlong)iVar1 * 2 + lVar2) - local_78) >> (local_a8 & 0x3f));
        local_d0 = 0xa340c066ac6b0242;
        local_d8 = 0x74835e8b97345eef;
        goto LAB_1801ad7b9;
      }
    }
    else if (uVar3 == 0xfc2ec135c0632144) {
      local_78 = local_c8 * 2 + local_70;
      local_d0 = 0x6a18f9452a3af640;
      if (local_80 != 0) {
        local_d0 = 0x64d72c3466490f2c;
      }
      if (local_da == '\0') {
        local_d0 = 0x6a18f9452a3af640;
      }
      local_d8 = 0x64ddbc01cde61171;
    }
    else if (uVar3 == 0xd7c39eed3b5f5cad) {
      *param_2 = local_c0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
  } while( true );
}



undefined8 * FUN_1801ad940(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong *local_48;

  local_68 = 0xeb84293677d982f1;
  local_70 = 0x312e356a38f85e46;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_68 ^ 0xe739f01f39df5571;
          uVar1 = local_68 ^ local_70;
          local_70 = local_70 ^ 0xe739f01f39df5571;
          local_68 = uVar2;
          if ((longlong)uVar1 < -0x1d4e7cafa375244b) break;
          if ((longlong)uVar1 < -0xaea3eb8c596c0ba) {
            if (uVar1 == 0xe2b183505c8adbb5) {
              local_48 = *(longlong **)(local_58 + 8);
              local_68 = 0x8b7acd8286e478f2;
              if (local_48 == (longlong *)0x0) {
                local_68 = 0xb307c43e92f481a3;
              }
              local_70 = 0x46120579a89dbee5;
            }
            else if (uVar1 == 0xf49b854db12bd5f1) {
              (**(code **)*local_50)(local_50,local_60);
              local_68 = 0x559f41b7b68c2bc2;
              local_70 = 0xa08a80f08ce51484;
            }
          }
          else if (uVar1 == 0xf515c1473a693f46) {
            thunk_FUN_1801f42e0(local_58,0x10);
            local_68 = 0x41b536119dda199c;
            local_70 = 0xff2d74b0ee4d846f;
          }
          else if (uVar1 == 0x6b7d0dd041c35b45) {
            thunk_FUN_1801f42e0(param_1,0x68);
            local_68 = 0x35404a723998694f;
            local_70 = 0xf79cdeaae5e93557;
          }
        }
        if ((longlong)uVar1 < -0x32973704d18639e9) break;
        if (uVar1 == 0xcd68c8fb2e79c617) {
          local_50 = (undefined8 *)(**(code **)(*local_48 + 0x10))();
          local_68 = 0xd04c387c59d8b67e;
          if (local_50 == (undefined8 *)0x0) {
            local_68 = 0xd1c27c76d29a5cc9;
          }
          local_70 = 0x24d7bd31e8f3638f;
        }
        else if (uVar1 == 0xdaaa1c5c4f21dcb7) {
          local_60 = 1;
          *param_1 = &PTR_FUN_18021fca0;
          local_58 = param_1[0xc];
          local_68 = 0xd0e77cf15313741a;
          if (local_58 == 0) {
            local_68 = 0x8ccebd007c0e325c;
          }
          local_70 = 0x3256ffa10f99afaf;
        }
      }
      if (uVar1 != 0xbe9842a173979df3) break;
      local_68 = 0xf8abb80c8b392413;
      if ((local_60 & param_2) == 0) {
        local_68 = 0x510a2104168b234e;
      }
      local_70 = 0x93d6b5dccafa7f56;
    }
  } while (uVar1 != 0xc2dc94d8dc715c18);
  return param_1;
}



undefined8 * FUN_1801adc60(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong *local_48;

  local_68 = 0x8d7c788a2fa6f318;
  local_70 = 0x307a2e5c066b0c57;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_68 ^ 0x3fda188b33a19fce;
          uVar1 = local_68 ^ local_70;
          local_70 = local_70 ^ 0x3fda188b33a19fce;
          local_68 = uVar2;
          if (-0x269ec027593d72 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x42f9a929d63200b1) {
            if (uVar1 == 0x973c39ee4bd2d687) {
              local_68 = 0x7f6dd63364fdf002;
              if ((local_60 & param_2) == 0) {
                local_68 = 0x7b58bb84f35b11a5;
              }
              local_70 = 0x8481dabb2bfdd32a;
            }
            else if (uVar1 == 0xa23ba6a085a15ab6) {
              local_48 = *(longlong **)(local_58 + 8);
              local_68 = 0x2bc4004ce2480b11;
              if (local_48 == (longlong *)0x0) {
                local_68 = 0x2bd3e35606f13873;
              }
              local_70 = 0x24b97097877a4100;
            }
          }
          else if (uVar1 == 0xbd0656d629cdff4f) {
            local_60 = 1;
            *param_1 = &PTR_FUN_18021fc20;
            FUN_1801adfa0(param_1);
            *param_1 = &PTR_FUN_18021fca0;
            local_58 = param_1[0xc];
            local_68 = 0xc35e5eeee0d7648a;
            if (local_58 == 0) {
              local_68 = 0xf659c1a02ea4e8bb;
            }
            local_70 = 0x6165f84e65763e3c;
          }
          else if (uVar1 == 0xfbec0c884f002328) {
            thunk_FUN_1801f42e0(param_1,0x78);
            local_68 = 0x4ac1db75fb9c74e;
            local_70 = 0xfb757c88871f05c1;
          }
        }
        if ((longlong)uVar1 < 0xf7d70db65324a11) break;
        if (uVar1 == 0xf7d70db65324a11) {
          local_50 = (undefined8 *)(**(code **)(*local_48 + 0x10))();
          local_68 = 0x77601803d15db9ba;
          if (local_50 == (undefined8 *)0x0) {
            local_68 = 0x5921a43a5f485a2d;
          }
          local_70 = 0x564b37fbdec3235e;
        }
        else if (uVar1 == 0x212b2ff80f9e9ae4) {
          (**(code **)*local_50)(local_50,local_60);
          local_68 = 0x34e51b236cb74756;
          local_70 = 0x3b8f88e2ed3c3e25;
        }
      }
      if (uVar1 != 0xf6a93c1818b7973) break;
      thunk_FUN_1801f42e0(local_58,0x10);
      local_68 = 0x14f48509b45db632;
      local_70 = 0x83c8bce7ff8f60b5;
    }
  } while (uVar1 != 0xffd9613fd8a6c28f);
  return param_1;
}



void FUN_1801adfa0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;

  local_98 = 0xef6e8c0bc2407349;
  local_a0 = 0x8fd5d1bd11ed47c2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ 0x20076512856c084d;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x20076512856c084d;
          local_98 = uVar2;
          if ((longlong)uVar1 < -0x430829588b660fa) break;
          if ((longlong)uVar1 < 0x324078b136a850ee) {
            if (uVar1 == 0xfbcf7d6a77499f06) {
              local_78 = local_50 + 0x27;
              local_98 = 0x9ebdf585958313cb;
              local_a0 = 0x2398a78ad0eb957;
              local_70 = local_48;
            }
            else if (uVar1 == 0x260b8cd6a54d2f5) {
              local_80 = **(longlong **)(param_1 + 0x38);
              local_88 = 0x50;
              local_98 = 0x54126b44b7be93a4;
              local_a0 = 0x665213f58116c34a;
            }
            else if (uVar1 == 0xffb5bd64d153e0cb) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_8c,0);
            }
          }
          else if (uVar1 == 0x324078b136a850ee) {
            local_70 = **(longlong **)(param_1 + 0x18);
            local_78 = ((longlong)**(int **)(param_1 + local_88) * 2 + local_80) - local_70;
            local_98 = 0x4ebe468744f263c4;
            if (local_78 < 0x1000) {
              local_98 = 0x604ae6192f3fb482;
            }
            local_a0 = 0xfcce99e417b21e1e;
            local_60 = local_70;
            local_58 = local_70;
            local_50 = local_78;
          }
          else if (uVar1 == 0x60bb5db6d3ad348b) {
            local_8c = 0;
            local_68 = (uint *)(param_1 + 0x70);
            local_98 = 0x6273db9515cf7bd7;
            if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
              local_98 = 0x3ed862ba23b9d2cb;
            }
            local_a0 = 0x88d45d6ca79f6705;
          }
        }
        if (-0x49f3c0297bd94a33 < (longlong)uVar1) break;
        if (uVar1 == 0x9c847ffd388daa9c) {
          thunk_FUN_1801f42e0(local_70,local_78);
          local_98 = 0x749e731ee47d723e;
          local_a0 = 0x9e39f5e7562d6eec;
        }
        else if (uVar1 == 0xb270df6353407dda) {
          local_48 = *(longlong *)(local_60 + -8);
          local_98 = 0x163bde2bdbfc15b1;
          if (0x1f < (local_58 - local_48) - 8U) {
            local_98 = 0x12411e257de66a7c;
          }
          local_a0 = 0xedf4a341acb58ab7;
        }
      }
      if (uVar1 != 0xb60c3fd68426b5ce) break;
      local_80 = **(longlong **)(param_1 + 0x40);
      local_88 = 0x58;
      local_98 = 0xf09d1ed3febd6f68;
      if (local_80 != 0) {
        local_98 = 0xc0bddeafa241ed73;
      }
      local_a0 = 0xf2fda61e94e9bd9d;
    }
  } while (uVar1 != 0xeaa786f9b2501cd2);
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(uint **)(param_1 + 0x50) = local_8c;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(uint **)(param_1 + 0x58) = local_8c;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *local_68 = *local_68 & 0xfffffffe;
  return;
}



ios_base * FUN_1801ae3e0(ios_base *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;

  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88) = &PTR_LAB_18021fc08;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x8c) =
       *(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88;
  *(undefined ***)(param_1 + -0x80) = &PTR_FUN_18021fc20;
  FUN_1801adfa0(param_1 + -0x80);
  *(undefined ***)(param_1 + -0x80) = &PTR_FUN_18021fca0;
  lVar1 = *(longlong *)(param_1 + -0x20);
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_1801f42e0(lVar1,0x10);
  }
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1 + -0x88,0xe8);
  }
  return param_1 + -0x88;
}



void Unwind_1801ae500(void)

{
  Unwind_1801dd394();
}



longlong * FUN_1801ae520(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  _Lockit local_54 [4];
  longlong *local_50;
  longlong *local_48;
  int local_3c;
  int local_38;
  _Lockit local_34 [4];
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_3c = 1;
  local_38 = 0;
  std::_Lockit::_Lockit(local_34,0);
  plVar2 = DAT_1802a72c8;
  local_50 = DAT_1802a72c8;
  if (DAT_1802a72a0 == 0) {
    std::_Lockit::_Lockit(local_54,local_38);
    if (DAT_1802a72a0 == 0) {
      DAT_1802a72a0 = (longlong)local_3c + (longlong)DAT_1802a9348;
      DAT_1802a9348 = (int)DAT_1802a72a0;
    }
    std::_Lockit::~_Lockit(local_54);
  }
  uVar1 = DAT_1802a72a0;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((*(ulonglong *)(lVar3 + 0x18) <= DAT_1802a72a0) ||
     (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + DAT_1802a72a0 * 8), plVar4 == (longlong *)0x0)) {
    if (*(char *)(lVar3 + 0x24) == '\x01') {
      lVar3 = FUN_1801d8b40();
      if ((uVar1 < *(ulonglong *)(lVar3 + 0x18)) &&
         (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + uVar1 * 8), plVar4 != (longlong *)0x0))
      goto LAB_1801ae657;
    }
    plVar4 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      lVar3 = std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
              time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>_Constructor_or_Destructor
                        ((longlong *)&local_50,param_1);
      if (lVar3 == -1) {
        std::bad_cast::bad_cast_Constructor_or_Destructor();
      }
      local_48 = local_50;
      FUN_1801d8b04();
      (**(code **)(*local_48 + 8))();
      DAT_1802a72c8 = local_50;
      plVar4 = local_50;
    }
  }
LAB_1801ae657:
  std::_Lockit::~_Lockit(local_34);
  return plVar4;
}



void Unwind_1801ae680(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x40))(*(undefined8 **)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x4c));
  }
  return;
}



void Unwind_1801ae6c0(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x54));
  return;
}



void FUN_1801ae6f0(longlong *param_1,undefined1 *param_2,undefined4 *param_3,longlong param_4,undefined2 param_5,
                  undefined8 param_6,short *param_7,short *param_8)

{
  int iVar1;
  short *psVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  short *psVar17;
  bool bVar18;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5a;
  int local_58;
  int local_54;
  undefined1 local_4d;
  short local_4c;
  undefined1 local_49;
  undefined8 local_48;
  undefined4 uVar16;

  local_48 = 0xfffffffffffffffe;
  local_4c = -1;
  local_49 = 1;
  local_60 = 1;
  local_58 = -1;
  local_4d = 0;
  local_54 = 0;
  local_5a = 0x3f;
  uStack_68 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_88 = param_4;
  local_80 = param_1;
  (**(code **)(*uStack_68 + 8))();
  plVar12 = (longlong *)FUN_1801a9670(&local_70);
  local_78 = param_2;
  if ((uStack_68 != (longlong *)0x0) &&
     (puVar13 = (undefined8 *)(**(code **)(*uStack_68 + 0x10))(), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)(puVar13,local_60);
  }
LAB_1801ae7ea:
  do {
    if (param_7 == param_8) {
LAB_1801aed3a:
      *local_78 = *(undefined1 *)param_3;
      *(undefined8 *)(local_78 + 1) = *(undefined8 *)((longlong)param_3 + 1);
      *(undefined4 *)(local_78 + 9) = *(undefined4 *)((longlong)param_3 + 9);
      *(undefined2 *)(local_78 + 0xd) = *(undefined2 *)((longlong)param_3 + 0xd);
      local_78[0xf] = *(undefined1 *)((longlong)param_3 + 0xf);
      return;
    }
    cVar6 = (**(code **)(*plVar12 + 0x70))(plVar12,*param_7,local_4d);
    psVar17 = param_7;
    if (cVar6 != '%') {
LAB_1801aeb90:
      plVar3 = *(longlong **)(param_3 + 2);
      if (plVar3 == (longlong *)0x0) {
LAB_1801ae7e0:
        *(undefined1 *)param_3 = local_49;
      }
      else {
        sVar9 = *psVar17;
        if (*(longlong *)plVar3[8] == 0) {
LAB_1801aebe0:
          sVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar9);
          if (sVar9 == local_4c) goto LAB_1801ae7e0;
        }
        else {
          iVar1 = *(int *)plVar3[0xb];
          if (iVar1 <= local_54) goto LAB_1801aebe0;
          *(int *)plVar3[0xb] = iVar1 + local_58;
          psVar2 = *(short **)plVar3[8];
          *(short **)plVar3[8] = psVar2 + 1;
          *psVar2 = sVar9;
          if (sVar9 == local_4c) goto LAB_1801ae7e0;
        }
      }
LAB_1801ae7e6:
      param_7 = psVar17 + 1;
      goto LAB_1801ae7ea;
    }
    psVar17 = param_7 + 1;
    if (psVar17 == param_8) {
      plVar12 = *(longlong **)(param_3 + 2);
      if (plVar12 != (longlong *)0x0) {
        sVar9 = *param_7;
        if (*(longlong *)plVar12[8] == 0) {
LAB_1801aec82:
          sVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,sVar9);
        }
        else {
          iVar1 = *(int *)plVar12[0xb];
          if (iVar1 <= local_54) goto LAB_1801aec82;
          *(int *)plVar12[0xb] = iVar1 + local_58;
          psVar17 = *(short **)plVar12[8];
          *(short **)plVar12[8] = psVar17 + 1;
          *psVar17 = sVar9;
        }
        if (sVar9 != local_4c) goto LAB_1801aed3a;
      }
LAB_1801aed34:
      *(undefined1 *)param_3 = local_49;
      goto LAB_1801aed3a;
    }
    sVar9 = param_7[1];
    uVar10 = (**(code **)(*plVar12 + 0x70))(plVar12,sVar9,local_4d);
    sVar8 = *param_7;
    cVar6 = (char)uVar10;
    if (cVar6 < 'E') {
      if (cVar6 < '%') {
        if (cVar6 == '#') goto LAB_1801ae8df;
      }
      else if (cVar6 == '%') {
        plVar3 = *(longlong **)(param_3 + 2);
        if (plVar3 == (longlong *)0x0) {
LAB_1801aec2f:
          *(undefined1 *)param_3 = local_49;
          param_7 = param_7 + 2;
        }
        else {
          if (*(longlong *)plVar3[8] == 0) {
LAB_1801aec18:
            sVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar8);
            if (sVar9 == local_4c) goto LAB_1801aec2f;
          }
          else {
            iVar1 = *(int *)plVar3[0xb];
            if (iVar1 <= local_54) goto LAB_1801aec18;
            *(int *)plVar3[0xb] = iVar1 + local_58;
            psVar17 = *(short **)plVar3[8];
            *(short **)plVar3[8] = psVar17 + 1;
            *psVar17 = sVar8;
            if (sVar8 == local_4c) goto LAB_1801aec2f;
          }
          param_7 = param_7 + 2;
        }
        goto LAB_1801ae7ea;
      }
LAB_1801aeab0:
      bVar5 = true;
      uVar15 = 0;
      uVar16 = 0;
      uVar11 = uVar10;
      if ('i' < cVar6) goto LAB_1801ae913;
LAB_1801aeac1:
      uVar14 = (undefined1)uVar16;
      cVar6 = (char)uVar11;
      if (cVar6 < 'R') {
        if ('E' < cVar6) {
          bVar18 = cVar6 == 'M';
          if (cVar6 < 'M') {
            bVar7 = cVar6 + 0xba;
            goto joined_r0x0001801aeb0f;
          }
          goto LAB_1801aeb33;
        }
        bVar7 = cVar6 + 0xbf;
joined_r0x0001801aeb0f:
        if (bVar7 < 4) goto LAB_1801ae985;
      }
      else {
        if ('`' < cVar6) {
          if (cVar6 < 'g') {
            if ((byte)(cVar6 + 0x9fU) < 5) goto LAB_1801ae985;
            goto LAB_1801ae926;
          }
          bVar7 = cVar6 + 0x99;
          goto joined_r0x0001801aebfd;
        }
        if ((byte)(cVar6 + 0xaeU) < 9) goto LAB_1801ae985;
      }
LAB_1801ae926:
      plVar3 = *(longlong **)(param_3 + 2);
      if (plVar3 == (longlong *)0x0) {
LAB_1801aea4a:
        *(undefined1 *)param_3 = local_49;
      }
      else if (*(longlong *)plVar3[8] == 0) {
LAB_1801aea31:
        sVar8 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar8);
        if (sVar8 == local_4c) goto LAB_1801aea4a;
      }
      else {
        iVar1 = *(int *)plVar3[0xb];
        if (iVar1 <= local_54) goto LAB_1801aea31;
        *(int *)plVar3[0xb] = iVar1 + local_58;
        psVar2 = *(short **)plVar3[8];
        *(short **)plVar3[8] = psVar2 + 1;
        *psVar2 = sVar8;
        if (sVar8 == local_4c) goto LAB_1801aea4a;
      }
      if (bVar5) goto LAB_1801aeb90;
      plVar3 = *(longlong **)(param_3 + 2);
      if (plVar3 != (longlong *)0x0) {
        if (*(longlong *)plVar3[8] != 0) {
          iVar1 = *(int *)plVar3[0xb];
          if (local_54 < iVar1) {
            *(int *)plVar3[0xb] = iVar1 + local_58;
            psVar2 = *(short **)plVar3[8];
            *(short **)plVar3[8] = psVar2 + 1;
            *psVar2 = sVar9;
            if (sVar9 != local_4c) goto LAB_1801aeb90;
            goto LAB_1801aeb84;
          }
        }
        sVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar9);
        if (sVar9 != local_4c) goto LAB_1801aeb90;
      }
LAB_1801aeb84:
      *(undefined1 *)param_3 = local_49;
      goto LAB_1801aeb90;
    }
    if (cVar6 < 'O') {
      if (cVar6 == 'E') goto LAB_1801ae8df;
      goto LAB_1801aeab0;
    }
    if ('P' < cVar6) {
      if (cVar6 == 'Q') goto LAB_1801ae8df;
      goto LAB_1801aeab0;
    }
    if (cVar6 != 'O') goto LAB_1801aeab0;
LAB_1801ae8df:
    psVar17 = param_7 + 2;
    if (psVar17 == param_8) {
      plVar12 = *(longlong **)(param_3 + 2);
      if (plVar12 == (longlong *)0x0) {
LAB_1801aece4:
        *(undefined1 *)param_3 = local_49;
      }
      else {
        if (*(longlong *)plVar12[8] == 0) {
LAB_1801aecd1:
          sVar8 = (**(code **)(*plVar12 + 0x18))(plVar12,sVar8);
        }
        else {
          iVar1 = *(int *)plVar12[0xb];
          if (iVar1 <= local_54) goto LAB_1801aecd1;
          *(int *)plVar12[0xb] = iVar1 + local_58;
          psVar17 = *(short **)plVar12[8];
          *(short **)plVar12[8] = psVar17 + 1;
          *psVar17 = sVar8;
        }
        if (sVar8 == local_4c) goto LAB_1801aece4;
      }
      plVar12 = *(longlong **)(param_3 + 2);
      if (plVar12 == (longlong *)0x0) goto LAB_1801aed34;
      if (*(longlong *)plVar12[8] == 0) {
LAB_1801aed21:
        sVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,sVar9);
      }
      else {
        iVar1 = *(int *)plVar12[0xb];
        if (iVar1 <= local_54) goto LAB_1801aed21;
        *(int *)plVar12[0xb] = iVar1 + local_58;
        psVar17 = *(short **)plVar12[8];
        *(short **)plVar12[8] = psVar17 + 1;
        *psVar17 = sVar9;
      }
      if (sVar9 == local_4c) goto LAB_1801aed34;
      goto LAB_1801aed3a;
    }
    uVar11 = (**(code **)(*plVar12 + 0x70))(plVar12,*psVar17,local_4d);
    bVar5 = false;
    uVar15 = uVar10;
    uVar16 = uVar10;
    if ((char)uVar11 < 'j') goto LAB_1801aeac1;
LAB_1801ae913:
    uVar14 = (undefined1)uVar15;
    bVar7 = (byte)uVar11;
    if ('q' < (char)bVar7) {
      if ((char)bVar7 < 't') {
        if (bVar7 == 0x72) goto LAB_1801ae985;
      }
      else {
        if ('v' < (char)bVar7) {
          bVar7 = bVar7 + 0x89;
          goto joined_r0x0001801aeb0f;
        }
        if ((bVar7 & 0x7e) == 0x74) goto LAB_1801ae985;
      }
      goto LAB_1801ae926;
    }
    if ((char)bVar7 < 'm') {
      if (bVar7 == 0x6a) goto LAB_1801ae985;
      goto LAB_1801ae926;
    }
    bVar18 = bVar7 == 0x70;
    if ((char)bVar7 < 'p') {
      bVar7 = bVar7 + 0x93;
joined_r0x0001801aebfd:
      if (bVar7 < 2) goto LAB_1801ae985;
      goto LAB_1801ae926;
    }
LAB_1801aeb33:
    if (!bVar18) goto LAB_1801ae926;
LAB_1801ae985:
    cVar6 = FUN_1801af970(uVar11,param_6);
    if (cVar6 == '\0') {
      plVar3 = *(longlong **)(param_3 + 2);
      if (plVar3 == (longlong *)0x0) goto LAB_1801ae7e0;
      if (*(longlong *)plVar3[8] != 0) {
        iVar1 = *(int *)plVar3[0xb];
        if (local_54 < iVar1) {
          *(int *)plVar3[0xb] = iVar1 + local_58;
          puVar4 = *(undefined2 **)plVar3[8];
          *(undefined2 **)plVar3[8] = puVar4 + 1;
          *puVar4 = local_5a;
          param_7 = psVar17 + 1;
          goto LAB_1801ae7ea;
        }
      }
      sVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,local_5a);
      if (sVar9 == local_4c) goto LAB_1801ae7e0;
      goto LAB_1801ae7e6;
    }
    local_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90 = param_3[2];
    uStack_8c = param_3[3];
    (**(code **)(*local_80 + 0x18))(local_80,&local_70,&local_98,local_88,param_5,param_6,(char)uVar11,uVar14);
    *param_3 = local_70;
    param_3[1] = uStack_6c;
    param_3[2] = (undefined4)uStack_68;
    param_3[3] = uStack_68._4_4_;
    param_7 = psVar17 + 1;
  } while( true );
}



void Unwind_1801aed80(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x70) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x78));
    }
  }
  return;
}



void FUN_1801aedd0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;

  iVar2 = __uncaught_exceptions();
  if (iVar2 == 0) {
    FUN_1801b11b0(*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void Unwind_1801aee30(void)

{
  Unwind_1801dd394();
}



longlong * FUN_1801aee50(longlong *param_1)

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
      FUN_1801aee50();
      local_40 = *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) == local_2c;
      if (!local_40) goto LAB_1801aef66;
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
      puVar6 = &DAT_1802a778c;
      if ((uVar4 & 2) == local_2c) {
        puVar6 = &DAT_1802a77a8;
      }
      if ((local_30 & uVar4) != local_2c) {
        puVar6 = &DAT_1802a7770;
      }
      FUN_1801b23c0(&DAT_1802a77a8,&DAT_18029c305,0x1b,0x15,&DAT_1802a77c0);
      FUN_1801b23c0(&DAT_1802a778c,&DAT_18029c2c0,0x18,0x16,&DAT_1802a77a4);
      FUN_1801b23c0(&DAT_1802a7770,&DAT_18029c279,0x1f,0x15,&DAT_1802a7788);
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
LAB_1801aef66:
  uVar4 = __uncaught_exceptions();
  plVar1 = local_48;
  if (uVar4 == local_2c) {
    FUN_1801b11b0(local_48);
  }
  plVar1 = *(longlong **)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



void Unwind_1801af0a0(undefined8 param_1,longlong param_2)

{
  FUN_18008d490(param_2 + 0x70);
  return;
}



undefined8 Catch_All_1801af0d0(undefined8 param_1,longlong param_2)

{
  FUN_1801a9380((longlong)*(int *)(**(longlong **)(param_2 + 0x68) + 4) + (longlong)*(longlong **)(param_2 + 0x68),
                *(undefined4 *)(param_2 + 0x88),1);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x8c);
  return 0x1801aef27;
}



void Unwind_1801af120(undefined8 param_1,longlong param_2)

{
  FUN_1801aedd0(param_2 + 0x70);
  return;
}



void Unwind_1801af150(void)

{
  Unwind_1801dd394();
}



void Unwind_1801af260(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x90));
  return;
}



void Unwind_1801af7d0(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0xb0);
  return;
}



undefined1 FUN_1801af970(byte param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_79;
  ulonglong local_78;
  ulonglong local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;

  local_70 = 0xf2a14a10fe875e0e;
  local_78 = 0x3e6a28c5bee6670f;
LAB_1801afa4a:
  uVar1 = local_70 ^ 0x60fd201afcaac6a1;
  uVar2 = local_70 ^ local_78;
  local_78 = local_78 ^ 0x60fd201afcaac6a1;
  local_70 = uVar1;
  if ((longlong)uVar2 < -0x34765a603be6f74) {
    if ((longlong)uVar2 < -0x4d2376e3e912a95e) {
      if ((longlong)uVar2 < -0x5fd2d3caf62723cb) {
        if ((longlong)uVar2 < -0x728ad1b865b06796) {
          if ((longlong)uVar2 < -0x74d291df0317a7c8) {
            if (uVar2 == 0x83c5bdeccc2d42b3) {
              local_79 = param_2[7] < local_4c;
              local_70 = 0xcf6b2cec25a4ca8;
              local_78 = 0x12fcbbab8be3114f;
            }
            else if (uVar2 == 0x8a0759a386a6542d) {
              local_70 = 0xe9b0f85852f0e96b;
              if ((char)param_1 < 'p') {
                local_70 = 0xcec7726a428c9615;
              }
              local_78 = 0xedcbaf74efb150d6;
            }
          }
          else if (uVar2 == 0x8b2d6e20fce85838) {
            local_70 = 0x9cd43d4740092fab;
            if ((char)param_1 < 'H') {
              local_70 = 0x4f27260780688f00;
            }
            local_78 = 0xd208f0352824eff1;
          }
          else if (uVar2 == 0x8b53d8868c5f0e7d) {
            local_70 = 0x1aa6dd42e3f33dab;
            if ((char)param_1 < 'F') {
              local_70 = 0xdd8b33cdc9561b3f;
            }
            local_78 = 0x918bb3621f1b6593;
          }
        }
        else if ((longlong)uVar2 < -0x7187152111732c79) {
          if (uVar2 == 0x8d752e479a4f986a) {
            local_70 = 0x8590b038b1555075;
            if ((char)param_1 < 'B') {
              local_70 = 0xdb833beeb302ebf3;
            }
            local_78 = 0x64a75ed8ba58715f;
          }
          else if (uVar2 == 0x8de1bcf82f838e89) {
            local_70 = 0x94a4a15958175edf;
            if ((char)param_1 < 'm') {
              local_70 = 0xeaab827dbd7d581d;
            }
            local_78 = 0x75934fb9531a7ff5;
          }
        }
        else if (uVar2 == 0x8e78eadeee8cd387) {
          local_70 = 0xc8e857f4832c404e;
          if ((char)param_1 < 'd') {
            local_70 = 0x17a95d7c6320c13b;
          }
          local_78 = 0x621eed3e957d67f6;
        }
        else if (uVar2 == 0x9d2fd632a84c60f1) {
          local_70 = 0xb4a5cdaaad786bfc;
          if ((char)param_1 < 'G') {
            local_70 = 0xda53e28a9bac7724;
          }
          local_78 = 0x71d93e2f057c586f;
        }
        else if (uVar2 == 0x9f38cdc4ee6727e8) {
          local_70 = 0xe8dea66fe1b5db65;
          if (param_1 == 0x6a) {
            local_70 = 0x75e6f36f3e2abd17;
          }
          local_78 = 0x498e01c41e189049;
        }
        goto LAB_1801afa4a;
      }
      if ((longlong)uVar2 < -0x57e79744fa49c73b) {
        if ((longlong)uVar2 < -0x5eaf58540052b4d4) {
          if (uVar2 == 0xa02d2c3509d8dc35) {
            local_70 = 0x9b1693544db17e15;
            if ((char)param_1 < 'x') {
              local_70 = 0xc25c9d4057e2ab9e;
            }
            local_78 = 0x92be3559415253ac;
          }
          else if (uVar2 == 0xa032a9b805e57406) {
            local_70 = 0x87f9b0695fca9225;
            if ((char)param_1 < 'h') {
              local_70 = 0x494abcad3dd90335;
            }
            local_78 = 0x8c364f2895dd30a6;
          }
          goto LAB_1801afa4a;
        }
        if (uVar2 == 0xa150a7abffad4b2c) {
          local_70 = 0x2bc3d9d9795286cb;
          local_78 = 0x990abc00c16d8ee3;
          goto LAB_1801afa4a;
        }
        if (uVar2 != 0xa3327fe09069a0cb) {
          if (uVar2 == 0xa63fcc3d4306c78b) {
            local_70 = 0x7a5d22721cdb9514;
            if ((char)param_1 < 'r') {
              local_70 = 0x244702c504d165ed;
            }
            local_78 = 0xae405b66827731c0;
          }
          goto LAB_1801afa4a;
        }
        local_70 = 0x69dce1e6f08e2c7;
        if (param_2[6] < local_64) {
          local_70 = 0x9b527a97ea9cfd93;
        }
        local_78 = 0x1897c77b26b1bf20;
      }
      else if ((longlong)uVar2 < -0x55094535e9aed848) {
        if (uVar2 == 0xa81868bb05b638c5) {
          local_70 = 0x6aa4fa6d6d741def;
          if ((char)param_1 < 'V') {
            local_70 = 0xe5828b55a72c4eed;
          }
          local_78 = 0xb1d355a28c960da0;
          goto LAB_1801afa4a;
        }
        if (uVar2 != 0xaa885b889853d5c6) goto LAB_1801afa4a;
        local_70 = 0x707c5b55a0256fa4;
        if (param_2[2] < local_68) {
          local_70 = 0xbb247283c813e0ba;
        }
        local_78 = 0x6e765230e99c3243;
      }
      else {
        if (uVar2 == 0xaaf6baca165127b8) {
          local_70 = 0xafc5fe638154eee6;
          if ((param_1 & 0xfe) == 100) {
            local_70 = 0x7b10006c5f567617;
          }
          local_78 = 0xe9559c87ef9a5ca;
          goto LAB_1801afa4a;
        }
        if (uVar2 == 0xab8adca59ed02f4b) {
          local_70 = 0x4bcccb784c775526;
          if (param_2[5] + local_5c < local_58) {
            local_70 = 0xe919f89c4220070e;
          }
          local_78 = 0x55c6c21d05ce08c1;
        }
        else {
          if (uVar2 != 0xb2c965d9b83f0828) goto LAB_1801afa4a;
          local_70 = 0x653f1f7a9c6c811;
          local_78 = 0x1859f892e07f95f6;
        }
      }
    }
    else if ((longlong)uVar2 < -0x35bb7999a9bf68a3) {
      if ((longlong)uVar2 < -0x3e20570cd3f5ef2d) {
        if ((longlong)uVar2 < -0x4320c57eb811f031) {
          if (uVar2 != 0xb2dc891c16ed56a2) {
            if (uVar2 == 0xb58f564bca1b59e3) {
              local_70 = 0x485c2699b4f0a572;
              local_78 = 0x56af7433ddb24256;
            }
            goto LAB_1801afa4a;
          }
          local_70 = 0xb967954259888bff;
          if (param_2[4] < local_50) {
            local_70 = 0xba6973d7b9cf4898;
          }
          local_78 = 0xa76d9c271031d618;
        }
        else {
          if (uVar2 != 0xbcdf3a8147ee0fcf) {
            if (uVar2 == 0xbe80e0588c898694) {
              local_79 = param_2[1] < local_60;
              local_70 = 0xf31dfd6fdec3bd8b;
              local_78 = 0xed17f40a977ae06c;
            }
            else if (uVar2 == 0xbf246536095a9aac) {
              local_70 = 0x678d09adbd77c6de;
              if (param_1 == 0x41) {
                local_70 = 0x3128cc218440b0f;
              }
              local_78 = 0xc6ddae0642da8df2;
            }
            goto LAB_1801afa4a;
          }
          local_70 = 0xe17d80fd7a762748;
          if (param_2[4] < local_50) {
            local_70 = 0xff451c4f2ee1251a;
          }
          local_78 = 0xff77899833cf7aaf;
        }
      }
      else {
        if (-0x3a30dd3ba5617904 < (longlong)uVar2) {
          if (uVar2 == 0xc5cf22c45a9e86fd) {
            local_79 = param_2[6] < local_64;
            local_70 = 0x36812cd495413530;
            local_78 = 0x288b25b1dcf868d7;
          }
          else if (uVar2 == 0xc730c71eb796c982) {
            local_70 = 0xe917b263ffcbd80a;
            if ((char)param_1 < 'u') {
              local_70 = 0xef05526bb515c3b4;
            }
            local_78 = 0x493a9e56f613043f;
          }
          else if (uVar2 == 0xca17273afc97c10e) {
            local_70 = 0x14970dcbd6dd33d7;
            if ((char)param_1 < 'b') {
              local_70 = 0x306fc1ef874e9400;
            }
            local_78 = 0xf5a0e32bddd012fd;
          }
          goto LAB_1801afa4a;
        }
        if (uVar2 == 0xc1dfa8f32c0a10d3) {
          local_70 = 0x7dc2e7484023abc3;
          if ((char)param_1 < 'n') {
            local_70 = 0x70b6a630a1f5f51c;
          }
          local_78 = 0xbaf22056f7b56241;
          goto LAB_1801afa4a;
        }
        if (uVar2 != 0xc57cf385a8043393) goto LAB_1801afa4a;
        local_70 = 0x2f35a37580575ad3;
        if (param_2[5] + local_5c < local_58) {
          local_70 = 0x531931ca8fa7c7de;
        }
        local_78 = 0x313faa10c9ee0734;
      }
    }
    else {
      if (-0x2aaddf4cde702d08 < (longlong)uVar2) {
        if ((longlong)uVar2 < -0x1f4da15262be4328) {
          if (uVar2 == 0xd55220b3218fd2f9) {
            local_79 = param_2[1] < local_60;
            local_70 = 0x8e76b0620bb66b5d;
            local_78 = 0x907cb907420f36ba;
          }
          else if (uVar2 == 0xdb77afcfe1e2104f) {
            local_70 = 0x782a105600741a26;
            if ((char)param_1 < 'X') {
              local_70 = 0x78ced53cdccbf19b;
            }
            local_78 = 0x37e71243b1483097;
          }
        }
        else if (uVar2 == 0xe0b25ead9d41bcd8) {
          local_70 = 0xea53cb22775d9df7;
          if (param_1 == 0x72) {
            local_70 = 0x23456badf412bdb1;
          }
          local_78 = 0x4b036c8988f0d6db;
        }
        else if (uVar2 == 0xe137eee00b0d212a) {
          local_79 = param_2[4] < local_50;
          local_70 = 0x1481ee7cd01e98f2;
          local_78 = 0xa8be71999a7c515;
        }
        else if (uVar2 == 0xf2d83b880b40d0ec) {
          local_79 = param_2[7] < local_4c;
          local_70 = 0xea2ac6c49e3e6ca6;
          local_78 = 0xf420cfa1d7873141;
        }
        goto LAB_1801afa4a;
      }
      if ((longlong)uVar2 < -0x33349d2abf9ec6ff) {
        if (uVar2 == 0xca4486665640975d) {
          local_70 = 0xbbd3001ffdea09af;
          if ((char)param_1 < 'g') {
            local_70 = 0x980b0263616a9c80;
          }
          local_78 = 0xe817bde85ccc8b1b;
        }
        else if (uVar2 == 0xcbf52719e6e4ce55) {
          local_70 = 0x2704717a4802103e;
          if ((char)param_1 < 'S') {
            local_70 = 0xc0b8fd13a7543382;
          }
          local_78 = 0x6a30a69b3f07e644;
        }
        goto LAB_1801afa4a;
      }
      if (uVar2 == 0xcccb62d540613901) {
        local_44 = 0x3d;
        local_58 = 10000;
        local_5c = 0x76c;
        local_60 = 0x3c;
        local_48 = -1;
        local_64 = 7;
        local_4c = 0x16e;
        local_68 = 0x18;
        local_50 = 0xc;
        local_70 = 0x335d97e4a64d109e;
        if (param_2 == (uint *)0x0) {
          local_70 = 0x98d8c8ca25ef149a;
        }
        local_54 = 0x1f;
        local_78 = 0x86d2c1af6c56497d;
      }
      else {
        if (uVar2 != 0xcefbae03e8c138da) {
          if (uVar2 == 0xd41d79149eaca4d4) {
            local_70 = 0x37bad630d0fff73d;
            if ((char)param_1 < 't') {
              local_70 = 0xc90281f804071602;
            }
            local_78 = 0x29b0df559946aada;
            goto LAB_1801b1111;
          }
          goto LAB_1801afa4a;
        }
        local_70 = 0x527e25ca726e1f47;
        if (param_2[1] < local_60) {
          local_70 = 0x3a7882047a6b5573;
        }
        local_78 = 0x4c742caf3bd742a0;
      }
    }
  }
  else {
    if ((longlong)uVar2 < 0x4d34d7e17705f67a) {
      if ((longlong)uVar2 < 0x1e0a096549b95de7) {
        if ((longlong)uVar2 < 0xbcfff41ca17a283) {
          if ((longlong)uVar2 < 0x35843ecdd010799) {
            if (uVar2 == 0xfcb89a59fc41908c) {
              local_70 = 0x6e9513c055d7de4b;
              if ((char)param_1 < 'U') {
                local_70 = 0xa5e16b04b95c15ea;
              }
              local_78 = 0xcda76c20c5be7e80;
            }
            else if (uVar2 == 0x3295d71d2e5fb5) {
              local_79 = param_2[3] + local_48 < local_54;
              local_70 = 0xf4e3dd999e15be43;
              local_78 = 0xeae9d4fcd7ace3a4;
            }
          }
          else if (uVar2 == 0x35843ecdd010799) {
            local_70 = 0xf71a6f8c3c4be151;
            if (param_1 == 0x7a) {
              local_70 = 0x4840c1428a5ff79a;
            }
            local_78 = 0x564ac827c3e6aa7d;
LAB_1801b1111:
            local_79 = 1;
          }
          else if (uVar2 == 0x47b572cbd41b9bd) {
            local_70 = 0x7edeca1008f58a02;
            if (param_1 == 0x70) {
              local_70 = 0x8b8b1555434b6617;
            }
            local_78 = 0xdf8e6dbbf758c12e;
          }
          else if (uVar2 == 0x9a8a60d0ce32db9) {
            local_70 = 0xa6716d521b0ab380;
            if ((char)param_1 < 'y') {
              local_70 = 0x208fba372fc74ed1;
            }
            local_78 = 0x8b056692b117619a;
          }
        }
        else if ((longlong)uVar2 < 0x12cb69ec3fbc9571) {
          if (uVar2 == 0xbcfff41ca17a283) {
            local_70 = 0x3b481d801c0bb36a;
            if (param_1 == 0x68) {
              local_70 = 0x7b2f54cbe8abd96c;
            }
            local_78 = 0x9a18ba2be3a6f846;
          }
          else if (uVar2 == 0x1030d160f161f3bc) {
            local_79 = param_2[5] + local_5c < local_58;
            local_70 = 0xe5368072777d3395;
            local_78 = 0xfb3c89173ec46e72;
          }
        }
        else if (uVar2 == 0x12cb69ec3fbc9571) {
          local_70 = 0xe2d3089cc2af01c3;
          if ((char)param_1 < 'D') {
            local_70 = 0xa7094e48336bd554;
          }
          local_78 = 0x8d3e808feaf42733;
        }
        else if (uVar2 == 0x17783f5104d52171) {
          local_70 = 0xf1f335767ae457eb;
          if ((param_1 & 0xfe) == 0x48) {
            local_70 = 0x4a6ea33315abbfe;
          }
          local_78 = 0x50a392dd85491cc7;
        }
        else if (uVar2 == 0x1d04eff0a9fe9e80) {
          local_70 = 0x7e59b4ea203f46bb;
          if (param_2[3] + local_48 < local_54) {
            local_70 = 0x2ecee941e237aa76;
          }
          local_78 = 0x6053bd8f69861b5c;
          goto LAB_1801afa40;
        }
      }
      else if ((longlong)uVar2 < 0x3c68f2ab20322d5e) {
        if ((longlong)uVar2 < 0x2a37cec7d99ff267) {
          if (uVar2 == 0x1ef352aa6942e724) {
            local_70 = 0xe344f006e3336afc;
            if ((char)param_1 < 'a') {
              local_70 = 0x7b6e6ffedc322756;
            }
            local_78 = 0x229b58f5cf397a2f;
          }
          else {
            if (uVar2 == 0x230cdd1ead3dc6c3) {
              local_70 = 0xfa6cabe76c8b4f6d;
              if (param_1 == 0x6e) {
                local_70 = 0x45360529da9f59a6;
              }
              local_78 = 0x5b3c0c4c93260441;
              goto LAB_1801b1111;
            }
            if (uVar2 == 0x1e0a096549b95de7) {
              return local_79;
            }
          }
        }
        else if (uVar2 == 0x2a37cec7d99ff267) {
          local_79 = param_2[5] + local_5c < local_58;
          local_70 = 0x4711d79cf5e59f6;
          local_78 = 0x1a7b141c86e70411;
        }
        else if (uVar2 == 0x2d740bc0aa1dd21a) {
          local_70 = 0xadba64d5df73dc53;
          if ((char)param_1 < 'z') {
            local_70 = 0x84d5e9fedbed29ad;
          }
          local_78 = 0xaee227390272dbca;
        }
      }
      else if ((longlong)uVar2 < 0x41d0cb3c228be969) {
        if (uVar2 == 0x3c68f2ab20322d5e) {
          local_79 = param_2[7] < local_4c;
          local_70 = 0x7fca8540f7b8759c;
          local_78 = 0x61c08c25be01287b;
        }
        else if (uVar2 == 0x3eff4bc1df0d268e) {
          local_79 = *param_2 < local_44;
          local_70 = 0x3ec0cbef0e1ebec2;
          local_78 = 0x20cac28a47a7e325;
        }
      }
      else {
        if (uVar2 == 0x41d0cb3c228be969) {
          local_70 = 0x331c9d6e890052aa;
          if (param_1 == 0x5a) {
            local_70 = 0x8c4633a03f144461;
          }
          local_78 = 0x924c3ac576ad1986;
          goto LAB_1801b1111;
        }
        if (uVar2 == 0x486a18cbe46d680c) {
          local_70 = 0x713642801c412da;
          if (param_2[1] < local_60) {
            local_70 = 0x27e6268c977069b3;
          }
          local_78 = 0x19196d4d487d4f3d;
          goto LAB_1801afa40;
        }
        if (uVar2 == 0x4c0080afd64d7eac) {
          local_70 = 0x7ac833288090d3e8;
          if ((char)param_1 < 'C') {
            local_70 = 0xe57674832563def3;
          }
          local_78 = 0x68035ac4bf2c4699;
        }
      }
      goto LAB_1801afa4a;
    }
    if ((longlong)uVar2 < 0x62269bda4649c0ea) {
      if ((longlong)uVar2 < 0x50e2a81916b0f832) {
        if ((longlong)uVar2 < 0x4edccd72682dc05a) {
          if (uVar2 == 0x4d34d7e17705f67a) {
            local_79 = *param_2 < local_44;
            local_70 = 0xe5be232532990a5a;
            local_78 = 0xfbb42a407b2057bd;
          }
          else if (uVar2 == 0x4e9d54ce8bb1b12a) {
            local_70 = 0xa031419e2a933d52;
            if (param_2[2] < local_68) {
              local_70 = 0x70c0e6f88beb586f;
            }
            local_78 = 0xbe3b48fb632a60b5;
            goto LAB_1801afa40;
          }
        }
        else if (uVar2 == 0x4edccd72682dc05a) {
          local_70 = 0xff53c2fa2ce19363;
          if ((char)param_1 < 'M') {
            local_70 = 0x98d813801124bedc;
          }
          local_78 = 0x8fa02cd115f19fad;
        }
        else {
          if (uVar2 == 0x4f29c77f6d83c10c) {
            local_70 = 0xe1b5d8f2e2deca49;
            if ((char)param_1 < 'W') {
              local_70 = 0x5c8dae773b0e3765;
            }
            local_78 = 0x4287a71272b76a82;
            goto LAB_1801b1111;
          }
          if (uVar2 == 0x4fcd0215b13c2ab1) {
            local_70 = 0x9741925fd805e814;
            if ((char)param_1 < 'Y') {
              local_70 = 0x821a6c4830837656;
            }
            local_78 = 0xea5c6b6c4c611d3c;
          }
        }
      }
      else if ((longlong)uVar2 < 0x540578eeb413a739) {
        if (uVar2 == 0x50e2a81916b0f832) {
          local_70 = 0x8912564c4541bf68;
          if ((char)param_1 < 'w') {
            local_70 = 0x317a8aff3a1d3303;
          }
          local_78 = 0x4cdd74881fdf3995;
        }
        else if (uVar2 == 0x53c4bdf7a12682b4) {
          local_70 = 0x9d640ce9440ec1e4;
          if ((char)param_1 < 'j') {
            local_70 = 0xb0b719a96e683b6b;
          }
          local_78 = 0x1085b0116b8d4f6d;
        }
      }
      else if (uVar2 == 0x540578eeb413a739) {
        local_79 = param_2[2] < local_68;
        local_70 = 0x4c23ca2dd388349b;
        local_78 = 0x5229c3489a31697c;
      }
      else if (uVar2 == 0x5451def72bba434d) {
        local_70 = 0x9b0a8e125834c22a;
        if ((char)param_1 < 'T') {
          local_70 = 0xac47335242919cf3;
        }
        local_78 = 0x67b2144ba47552a6;
      }
      else if (uVar2 == 0x59f5370b130b5d79) {
        local_70 = 0x25f3e864a87b74af;
        if ((char)param_1 < 'R') {
          local_70 = 0x6b8585921924217;
        }
        local_78 = 0x8deb80dfadcd4c6a;
      }
      goto LAB_1801afa4a;
    }
    if ((longlong)uVar2 < 0x758559a421afd3dd) {
      if (0x6fed8813285b26ef < (longlong)uVar2) {
        if (uVar2 == 0x6fed8813285b26f0) {
          local_70 = 0x8147cb497fedb0fe;
          if (param_1 == 0x44) {
            local_70 = 0x8b9db0471e90d499;
          }
          local_78 = 0x20176ce28040fbd2;
        }
        else if (uVar2 == 0x701cbf8b3da6179b) {
          local_70 = 0xdd5465d43cbf0b62;
          if ((char)param_1 < 'c') {
            local_70 = 0x993ba8302ea419eb;
          }
          local_78 = 0x532c8f0ad233d8e5;
        }
        else if (uVar2 == 0x70f3ee2b39100cce) {
          local_70 = 0x5b785072681648af;
          if (param_1 == 0x4d) {
            local_70 = 0x44a817811b328517;
          }
          local_78 = 0xfa28f7d997bb0383;
        }
        goto LAB_1801afa4a;
      }
      if (uVar2 == 0x62269bda4649c0ea) {
        local_70 = 0xa26e904af4fbfb27;
        if (param_2[6] < local_64) {
          local_70 = 0x4ebca2a7b602762c;
        }
        local_78 = 0xbc64992fbd42a6c0;
      }
      else {
        if (uVar2 != 0x684607247ce26b6a) goto LAB_1801afa4a;
        local_70 = 0xd6816d806947d264;
        if (param_2[2] < local_68) {
          local_70 = 0x80e17c2ec493e78f;
        }
        local_78 = 0xc88b64e520fe8f83;
      }
    }
    else if ((longlong)uVar2 < 0x760caeab41bc17d3) {
      if (uVar2 == 0x758559a421afd3dd) {
        local_79 = param_2[3] + local_48 < local_54;
        local_70 = 0x540ba0e668ac8a68;
        local_78 = 0x4a01a9832115d78f;
        goto LAB_1801afa4a;
      }
      if (uVar2 != 0x75b7b042f65da6cd) goto LAB_1801afa4a;
      local_70 = 0xc23b10e42bd3dfd2;
      if (param_2[6] < local_64) {
        local_70 = 0x6eed909d7487d497;
      }
      local_78 = 0xdc311981626a8235;
    }
    else {
      if (uVar2 != 0x760caeab41bc17d3) {
        if (uVar2 == 0x7d1df9339464f528) {
          local_70 = 0xe82842304103692a;
          if ((char)param_1 < 'Z') {
            local_70 = 0x83cf47cbba177224;
          }
          local_78 = 0xa9f8890c63888043;
        }
        else if (uVar2 == 0x7da7fe7725c20a96) {
          local_70 = 0x71b08f0067e1254a;
          if (param_1 == 0x75) {
            local_70 = 0x152f0a6fc2d2e89b;
          }
          local_78 = 0xd0e028ab984c6e66;
        }
        goto LAB_1801afa4a;
      }
      local_70 = 0x1b70bc565251ebf4;
      if (*param_2 < local_44) {
        local_70 = 0x154a6453ea8945af;
      }
      local_78 = 0x57ab5331be8b613;
    }
  }
LAB_1801afa40:
  local_79 = 0;
  goto LAB_1801afa4a;
}


