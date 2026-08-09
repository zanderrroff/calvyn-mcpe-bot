#include "../include/aerialclient_types.h"


void FUN_180100220(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x1a147474aba3329b;
  local_50 = 0x8d0e49816237c46e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x4157f0f01c3e3d83;
        if (uVar1 != 0x971a3df5c994f6f5) break;
        local_48 = 0x745bf5298a994285;
        if (param_2 == 0) {
          local_48 = 0x5ce975d98c0f46e7;
        }
        local_50 = 0xbc9784a4519b5786;
      }
      if (uVar1 != 0xc8cc718ddb021503) break;
      LOCK();
      DAT_1802a4344 = DAT_1802a4344 + param_2;
      UNLOCK();
      LOCK();
      DAT_1802a4348 = DAT_1802a4348 + 1;
      UNLOCK();
      local_48 = 0x7f748b595c0d3bb8;
      local_50 = 0x9f0a7a2481992ad9;
    }
    local_48 = local_48 ^ 0x4157f0f01c3e3d83;
  } while (uVar1 != 0xe07ef17ddd941161);
  return;
}



undefined * FUN_180100330(void)

{
  return &DAT_18027dca8;
}



void FUN_180100340(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x370);
  param_2[1] = *(undefined8 *)(param_1 + 0x378);
  param_2[2] = *(undefined8 *)(param_1 + 0x380);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x388);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x38c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x390);
  param_2[5] = DAT_1802a4350;
  param_2[6] = DAT_1802a4348;
  *(undefined4 *)(param_2 + 7) = DAT_1802a4358;
  return;
}



void FUN_1801003a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  BOOL BVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_2e8 [32];
  int local_2c8;
  undefined2 local_2c2;
  ulonglong local_2c0;
  ulonglong local_2b8;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  undefined4 *local_270;
  byte local_268 [256];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_2e8;
  local_2b8 = 0xbf22f383ad5df83b;
  local_2c0 = 0x9b3374dd07b5736a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            lVar4 = local_278;
            lVar3 = local_280;
            iVar2 = local_29c;
            iVar1 = local_2a0;
            iVar8 = local_2a4;
            uVar10 = local_2b8 ^ 0x235320f862b16eec;
            uVar9 = local_2b8 ^ local_2c0;
            local_2c0 = local_2c0 ^ 0x235320f862b16eec;
            local_2b8 = uVar10;
            if (0x2411875eaae88b50 < (longlong)uVar9) break;
            if ((longlong)uVar9 < -0x11408ca14ef3390) {
              if (uVar9 == 0xd0480c5d47fd679b) {
                local_2b8 = 0x934d531987957804;
                local_2c0 = 0x6da6a42c6c85b474;
                local_2ac = local_298;
                local_2a8 = local_294;
              }
              else if (uVar9 == 0xf3671b450369f3f3) {
                FUN_1801b9f70();
                local_78 = 0;
                uStack_70 = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_a8 = 0;
                uStack_a0 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                local_d8 = 0;
                uStack_d0 = 0;
                local_e8 = 0;
                uStack_e0 = 0;
                local_f8 = 0;
                uStack_f0 = 0;
                local_108 = 0;
                uStack_100 = 0;
                local_118 = 0;
                uStack_110 = 0;
                local_128 = 0;
                uStack_120 = 0;
                local_138 = 0;
                uStack_130 = 0;
                local_148 = 0;
                uStack_140 = 0;
                local_158 = 0;
                uStack_150 = 0;
                local_168 = 0;
                uStack_160 = 0;
                local_268[0xf0] = 0;
                local_268[0xf1] = 0;
                local_268[0xf2] = 0;
                local_268[0xf3] = 0;
                local_268[0xf4] = 0;
                local_268[0xf5] = 0;
                local_268[0xf6] = 0;
                local_268[0xf7] = 0;
                local_268[0xf8] = 0;
                local_268[0xf9] = 0;
                local_268[0xfa] = 0;
                local_268[0xfb] = 0;
                local_268[0xfc] = 0;
                local_268[0xfd] = 0;
                local_268[0xfe] = 0;
                local_268[0xff] = 0;
                local_268[0xe0] = 0;
                local_268[0xe1] = 0;
                local_268[0xe2] = 0;
                local_268[0xe3] = 0;
                local_268[0xe4] = 0;
                local_268[0xe5] = 0;
                local_268[0xe6] = 0;
                local_268[0xe7] = 0;
                local_268[0xe8] = 0;
                local_268[0xe9] = 0;
                local_268[0xea] = 0;
                local_268[0xeb] = 0;
                local_268[0xec] = 0;
                local_268[0xed] = 0;
                local_268[0xee] = 0;
                local_268[0xef] = 0;
                local_268[0xd0] = 0;
                local_268[0xd1] = 0;
                local_268[0xd2] = 0;
                local_268[0xd3] = 0;
                local_268[0xd4] = 0;
                local_268[0xd5] = 0;
                local_268[0xd6] = 0;
                local_268[0xd7] = 0;
                local_268[0xd8] = 0;
                local_268[0xd9] = 0;
                local_268[0xda] = 0;
                local_268[0xdb] = 0;
                local_268[0xdc] = 0;
                local_268[0xdd] = 0;
                local_268[0xde] = 0;
                local_268[0xdf] = 0;
                local_268[0xc0] = 0;
                local_268[0xc1] = 0;
                local_268[0xc2] = 0;
                local_268[0xc3] = 0;
                local_268[0xc4] = 0;
                local_268[0xc5] = 0;
                local_268[0xc6] = 0;
                local_268[199] = 0;
                local_268[200] = 0;
                local_268[0xc9] = 0;
                local_268[0xca] = 0;
                local_268[0xcb] = 0;
                local_268[0xcc] = 0;
                local_268[0xcd] = 0;
                local_268[0xce] = 0;
                local_268[0xcf] = 0;
                local_268[0xb0] = 0;
                local_268[0xb1] = 0;
                local_268[0xb2] = 0;
                local_268[0xb3] = 0;
                local_268[0xb4] = 0;
                local_268[0xb5] = 0;
                local_268[0xb6] = 0;
                local_268[0xb7] = 0;
                local_268[0xb8] = 0;
                local_268[0xb9] = 0;
                local_268[0xba] = 0;
                local_268[0xbb] = 0;
                local_268[0xbc] = 0;
                local_268[0xbd] = 0;
                local_268[0xbe] = 0;
                local_268[0xbf] = 0;
                local_268[0xa0] = 0;
                local_268[0xa1] = 0;
                local_268[0xa2] = 0;
                local_268[0xa3] = 0;
                local_268[0xa4] = 0;
                local_268[0xa5] = 0;
                local_268[0xa6] = 0;
                local_268[0xa7] = 0;
                local_268[0xa8] = 0;
                local_268[0xa9] = 0;
                local_268[0xaa] = 0;
                local_268[0xab] = 0;
                local_268[0xac] = 0;
                local_268[0xad] = 0;
                local_268[0xae] = 0;
                local_268[0xaf] = 0;
                local_268[0x90] = 0;
                local_268[0x91] = 0;
                local_268[0x92] = 0;
                local_268[0x93] = 0;
                local_268[0x94] = 0;
                local_268[0x95] = 0;
                local_268[0x96] = 0;
                local_268[0x97] = 0;
                local_268[0x98] = 0;
                local_268[0x99] = 0;
                local_268[0x9a] = 0;
                local_268[0x9b] = 0;
                local_268[0x9c] = 0;
                local_268[0x9d] = 0;
                local_268[0x9e] = 0;
                local_268[0x9f] = 0;
                local_268[0x80] = 0;
                local_268[0x81] = 0;
                local_268[0x82] = 0;
                local_268[0x83] = 0;
                local_268[0x84] = 0;
                local_268[0x85] = 0;
                local_268[0x86] = 0;
                local_268[0x87] = 0;
                local_268[0x88] = 0;
                local_268[0x89] = 0;
                local_268[0x8a] = 0;
                local_268[0x8b] = 0;
                local_268[0x8c] = 0;
                local_268[0x8d] = 0;
                local_268[0x8e] = 0;
                local_268[0x8f] = 0;
                local_268[0x70] = 0;
                local_268[0x71] = 0;
                local_268[0x72] = 0;
                local_268[0x73] = 0;
                local_268[0x74] = 0;
                local_268[0x75] = 0;
                local_268[0x76] = 0;
                local_268[0x77] = 0;
                local_268[0x78] = 0;
                local_268[0x79] = 0;
                local_268[0x7a] = 0;
                local_268[0x7b] = 0;
                local_268[0x7c] = 0;
                local_268[0x7d] = 0;
                local_268[0x7e] = 0;
                local_268[0x7f] = 0;
                local_268[0x60] = 0;
                local_268[0x61] = 0;
                local_268[0x62] = 0;
                local_268[99] = 0;
                local_268[100] = 0;
                local_268[0x65] = 0;
                local_268[0x66] = 0;
                local_268[0x67] = 0;
                local_268[0x68] = 0;
                local_268[0x69] = 0;
                local_268[0x6a] = 0;
                local_268[0x6b] = 0;
                local_268[0x6c] = 0;
                local_268[0x6d] = 0;
                local_268[0x6e] = 0;
                local_268[0x6f] = 0;
                local_268[0x50] = 0;
                local_268[0x51] = 0;
                local_268[0x52] = 0;
                local_268[0x53] = 0;
                local_268[0x54] = 0;
                local_268[0x55] = 0;
                local_268[0x56] = 0;
                local_268[0x57] = 0;
                local_268[0x58] = 0;
                local_268[0x59] = 0;
                local_268[0x5a] = 0;
                local_268[0x5b] = 0;
                local_268[0x5c] = 0;
                local_268[0x5d] = 0;
                local_268[0x5e] = 0;
                local_268[0x5f] = 0;
                local_268[0x40] = 0;
                local_268[0x41] = 0;
                local_268[0x42] = 0;
                local_268[0x43] = 0;
                local_268[0x44] = 0;
                local_268[0x45] = 0;
                local_268[0x46] = 0;
                local_268[0x47] = 0;
                local_268[0x48] = 0;
                local_268[0x49] = 0;
                local_268[0x4a] = 0;
                local_268[0x4b] = 0;
                local_268[0x4c] = 0;
                local_268[0x4d] = 0;
                local_268[0x4e] = 0;
                local_268[0x4f] = 0;
                local_268[0x30] = 0;
                local_268[0x31] = 0;
                local_268[0x32] = 0;
                local_268[0x33] = 0;
                local_268[0x34] = 0;
                local_268[0x35] = 0;
                local_268[0x36] = 0;
                local_268[0x37] = 0;
                local_268[0x38] = 0;
                local_268[0x39] = 0;
                local_268[0x3a] = 0;
                local_268[0x3b] = 0;
                local_268[0x3c] = 0;
                local_268[0x3d] = 0;
                local_268[0x3e] = 0;
                local_268[0x3f] = 0;
                local_268[0x20] = 0;
                local_268[0x21] = 0;
                local_268[0x22] = 0;
                local_268[0x23] = 0;
                local_268[0x24] = 0;
                local_268[0x25] = 0;
                local_268[0x26] = 0;
                local_268[0x27] = 0;
                local_268[0x28] = 0;
                local_268[0x29] = 0;
                local_268[0x2a] = 0;
                local_268[0x2b] = 0;
                local_268[0x2c] = 0;
                local_268[0x2d] = 0;
                local_268[0x2e] = 0;
                local_268[0x2f] = 0;
                local_268[0x10] = 0;
                local_268[0x11] = 0;
                local_268[0x12] = 0;
                local_268[0x13] = 0;
                local_268[0x14] = 0;
                local_268[0x15] = 0;
                local_268[0x16] = 0;
                local_268[0x17] = 0;
                local_268[0x18] = 0;
                local_268[0x19] = 0;
                local_268[0x1a] = 0;
                local_268[0x1b] = 0;
                local_268[0x1c] = 0;
                local_268[0x1d] = 0;
                local_268[0x1e] = 0;
                local_268[0x1f] = 0;
                local_268[0] = 0;
                local_268[1] = 0;
                local_268[2] = 0;
                local_268[3] = 0;
                local_268[4] = 0;
                local_268[5] = 0;
                local_268[6] = 0;
                local_268[7] = 0;
                local_268[8] = 0;
                local_268[9] = 0;
                local_268[10] = 0;
                local_268[0xb] = 0;
                local_268[0xc] = 0;
                local_268[0xd] = 0;
                local_268[0xe] = 0;
                local_268[0xf] = 0;
                BVar7 = GetKeyboardState(local_268);
                local_29c = local_2c8;
                local_2b8 = 0x3326653edbb3dd5d;
                if (BVar7 == local_2c8) {
                  local_2b8 = 0xe7d1ee5d242db14;
                }
                local_278 = local_290;
                local_2c0 = 0xfcc734334f58dd0;
                local_280 = local_290;
                local_2a4 = local_2c8;
                local_2a0 = local_2c8;
              }
              else if (uVar9 == 0xe988acc8b043943e) {
                FUN_1801da68c(5);
              }
            }
            else if (uVar9 == 0xfeebf735eb10cc70) {
              *(int *)(param_1 + 0x38c) = local_2a8;
              *(int *)(param_1 + 0x390) = local_2ac;
              iVar8 = FUN_1801da264(param_1);
              local_2b8 = 0x6968fc498511a7ce;
              if (iVar8 == local_2c8) {
                local_2b8 = 0xb07064b6ff346916;
              }
              local_2c0 = 0x80e05081355233f0;
            }
            else if (uVar9 == 0x1b16da6e6b756c4) {
              uVar6 = GetAsyncKeyState((int)local_278);
              uVar6 = uVar6 >> ((byte)local_2c2 & 0x1f);
              local_29c = iVar2 + (uint)uVar6;
              *(char *)((longlong)&local_168 + lVar4) = (char)uVar6;
              local_278 = lVar4 + local_290;
              local_2b8 = 0x9b303bd3c81dda20;
              if (local_278 == local_288) {
                local_2b8 = 0x4ac95a286957eb7f;
              }
              local_2c0 = 0x9a8156752eaa8ce4;
              local_298 = local_2c8;
              local_294 = local_29c;
            }
          }
          if (0x3cea167def46508c < (longlong)uVar9) break;
          if (uVar9 == 0x2411875eaae88b51) {
            local_290 = 1;
            local_2c8 = 0;
            local_2c2 = 0xf;
            local_288 = 0x100;
            LOCK();
            *(longlong *)(param_1 + 0x370) = *(longlong *)(param_1 + 0x370) + 1;
            UNLOCK();
            FUN_1800fea80();
            cVar5 = FUN_1801b8b10();
            local_2b8 = 0x7db1e49c102d37c5;
            if (cVar5 != '\0') {
              local_2b8 = 0xe0c78094a48d7327;
            }
            local_2c0 = 0x13a09bd1a7e480d4;
          }
          else if (uVar9 == 0x30903437ca665ae6) {
            local_270 = (undefined4 *)(param_1 + 0x4c);
            local_2b8 = 0xb51cf194cfc807ed;
            if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
              local_2b8 = 0xad0d35c47182e80f;
            }
            local_2c0 = 0xd5cce09587dba5a6;
          }
        }
        if ((longlong)uVar9 < 0x6e117f4db7c9b711) break;
        if (uVar9 == 0x6e117f4db7c9b711) {
          FUN_1801ba380();
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_2ac = local_2c8;
          local_2a8 = local_2c8;
          local_2b8 = 0x4cb96de0e80968a9;
          local_2c0 = 0xb2529ad50319a4d9;
        }
        else if (uVar9 == 0x78c1d551f6594da9) {
          *local_270 = 0x7ffffffe;
          FUN_1801da68c(6);
        }
      }
      if (uVar9 != 0x3cea167def46508d) break;
      uVar6 = GetAsyncKeyState((int)local_280);
      local_2a4 = (uint)(uVar6 >> ((byte)local_2c2 & 0x1f)) + iVar8;
      local_2a0 = (uint)(local_268[lVar3] >> 7) + iVar1;
      *(bool *)((longlong)&local_168 + lVar3) = (char)local_268[lVar3] < '\0' || (short)uVar6 < 0;
      local_280 = lVar3 + local_290;
      local_2b8 = 0x1e0d42f6cac87bcf;
      if (local_280 == local_288) {
        local_2b8 = 0xf2af58d662734cd9;
      }
      local_2c0 = 0x22e7548b258e2b42;
      local_298 = local_2a0;
      local_294 = local_2a4;
    }
  } while (uVar9 != 0x60d011014813a24b);
  FUN_1802079d0(param_1 + 0x50,&local_168,0x100);
  FUN_1801da26c(param_1);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_2e8)) {
  }
  return;
}



void FUN_180100b10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong local_100;
  tagPOINT local_d8;
  tagPOINT local_d0;
  ULONGLONG local_c8;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  char local_a8;
  uint local_a4;
  char local_a0;
  char cStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  longlong local_90;
  ulonglong local_88;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  char local_62;
  char local_61;
  undefined8 local_60;
  undefined4 uVar14;

  local_60 = 0xfffffffffffffffe;
  local_100 = 1;
  local_68 = 0;
  local_61 = '\0';
  local_7c = 0x3f00;
  local_62 = '\x01';
  local_78 = 6;
  local_c0 = 0x7fffffff;
  local_bc = 0x3f0000;
  local_74 = 2;
  local_b8 = 8;
  local_d0.x = 0;
  local_d0.y = 0;
  local_6c = 1;
  local_b4 = 4;
  local_b0 = 5;
  local_ac = 0x7ffffffe;
  local_70 = -1;
  LOCK();
  *(longlong *)(param_1 + 0x378) = *(longlong *)(param_1 + 0x378) + 1;
  UNLOCK();
  local_c8 = GetTickCount64();
  local_d8 = local_d0;
  uVar6 = GetCursorPos(&local_d8);
  if ((uVar6 != local_68) && (cVar5 = FUN_1801baf80(&local_d8), cVar5 != '\0')) {
    uVar13 = FUN_180172580();
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    auVar15._0_4_ = (float)local_d8.x;
    auVar15._4_4_ = (float)local_d8.y;
    auVar15._8_8_ = 0;
    auVar16._4_4_ = (int)uVar13;
    auVar16._0_4_ = (int)uVar13;
    auVar16._8_4_ = uVar14;
    auVar16._12_4_ = uVar14;
    auVar16 = divps(auVar15,auVar16);
    *(longlong *)(param_1 + 0x350) = auVar16._0_8_;
  }
  lVar1 = param_1 + 0x150;
  FUN_1802079d0(param_1 + 0x250,lVar1,0x100);
  uVar6 = FUN_1801da264(param_1);
  if (uVar6 != local_68) {
    FUN_1801da68c(local_b0);
  }
  if (*(int *)(param_1 + 0x4c) == local_c0) {
    *(undefined4 *)(param_1 + 0x4c) = local_ac;
    FUN_1801da68c(local_78);
  }
  FUN_1802079d0(lVar1,param_1 + 0x50);
  FUN_1801da26c();
  uVar13 = FUN_1800ba260();
  uVar6 = DAT_1802a4344;
  LOCK();
  DAT_1802a4344 = 0;
  UNLOCK();
  if (uVar6 != local_68) {
    local_a8 = local_61;
    local_a4 = 3;
    if ((int)uVar6 <= (int)local_68) {
      local_a4 = local_b4;
    }
    local_a0 = local_62;
    fStack_94 = (float)(int)uVar6;
    uStack_9c = (undefined4)*(undefined8 *)(param_1 + 0x350);
    uStack_98 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x350) >> 0x20);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a4364
        ) && (FUN_1801d62d8(&DAT_1802a4364), DAT_1802a4364 == local_70)) {
      DAT_1802a4360 = DAT_1802a3dec;
      DAT_1802a3dec = local_6c + DAT_1802a3dec;
      _Init_thread_footer(&DAT_1802a4364);
    }
    FUN_1800bc160(uVar13,DAT_1802a4360);
  }
  uVar6 = FUN_1801da264(&DAT_18027e040);
  lVar4 = DAT_1802a42a0;
  puVar8 = DAT_1802a4298;
  puVar3 = DAT_1802a4290;
  if (uVar6 != local_68) {
    FUN_1801da68c(local_b0);
  }
  if (DAT_18027e08c == local_c0) {
    DAT_18027e08c = local_ac;
    FUN_1801da68c(local_78);
  }
  DAT_1802a4290 = (uint *)0x0;
  DAT_1802a4298 = (uint *)0x0;
  DAT_1802a42a0 = 0;
  FUN_1801da26c(&DAT_18027e040);
  cVar5 = local_a8;
  uVar6 = local_6c;
  local_a8 = local_61;
  for (puVar11 = puVar3; local_6c = uVar6, local_61 = local_a8, puVar11 != puVar8; puVar11 = puVar11 + 1) {
    local_a4 = *puVar11;
    local_a0 = '\0';
    cStack_9f = '\0';
    uStack_9e = 0;
    uStack_98 = 0;
    fStack_94 = 0.0;
    local_90 = 0;
    if (local_a4 != local_b8) {
      local_90 = local_100;
      uVar6 = local_a4;
      if (0x7f < local_a4) {
        if (local_a4 < 0x800) {
          uVar6 = (local_a4 << ((byte)local_b8 & 0x1f) & local_7c | local_a4 >> ((byte)local_78 & 0x1f)) + 0x80c0;
          local_90 = 0xb09ee77f1d0f14b;
          lVar9 = -0xb09ee77f1d0f149;
        }
        else if (local_a4 < 0x10000) {
          uVar6 = (local_a4 << 0x10 & local_bc | local_a4 << ((byte)local_74 & 0x1f) & local_7c | local_a4 >> 0xc) +
                  0x8080e0;
          local_90 = 0x49712a656ffc70c4;
          lVar9 = -0x49712a656ffc70c1;
        }
        else {
          uVar6 = ((local_a4 & 0x3f) << 0x18 |
                  local_a4 << 10 & local_bc | local_a4 >> 0x12 & 0xf | local_a4 >> ((byte)local_b4 & 0x1f) & local_7c) +
                  0x808080f0;
          local_90 = -0x6362b341978a1acf;
          lVar9 = 0x6362b341978a1ad3;
        }
        local_90 = local_90 + lVar9;
      }
      local_a0 = (char)uVar6;
      cStack_9f = (char)(uVar6 >> 8);
      uStack_9e = (undefined2)(uVar6 >> 0x10);
    }
    uStack_9c = 0;
    local_88 = 0xf;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a436c
        ) && (FUN_1801d62d8(&DAT_1802a436c), DAT_1802a436c == local_70)) {
      DAT_1802a4368 = DAT_1802a3dec;
      DAT_1802a3dec = local_6c + DAT_1802a3dec;
      _Init_thread_footer(&DAT_1802a436c);
    }
    FUN_1800bc160(uVar13,DAT_1802a4368);
    if (0xf < local_88) {
      lVar2 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,CONCAT11(cStack_9f,local_a0)));
      uVar10 = local_88 + 1;
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar9)) goto LAB_180101545;
        uVar10 = local_88 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar9,uVar10);
    }
    cVar5 = local_a8;
    uVar6 = local_6c;
    local_a8 = local_61;
  }
  do {
    local_a8 = cVar5;
    if (0xff < uVar6) {
      uVar6 = *(uint *)(param_1 + 0x35c);
      if (uVar6 != local_68) {
        if ((*(char *)(param_1 + 0x358) == '\x01') && (*(char *)(lVar1 + (int)uVar6) != '\0')) {
          if ((0x15d < local_c8 - *(longlong *)(param_1 + 0x360)) && (0x1d < local_c8 - *(longlong *)(param_1 + 0x368)))
          {
            *(ULONGLONG *)(param_1 + 0x368) = local_c8;
            local_a8 = local_61;
            local_a0 = local_62;
            cStack_9f = local_62;
            local_a4 = uVar6;
            if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
                 DAT_1802a40fc) && (FUN_1801d62d8(&DAT_1802a40fc), DAT_1802a40fc == local_70)) {
              DAT_1802a40f8 = DAT_1802a3dec;
              DAT_1802a3dec = local_6c + DAT_1802a3dec;
              _Init_thread_footer(&DAT_1802a40fc);
            }
            FUN_1800bc160(uVar13,DAT_1802a40f8);
          }
        }
        else {
          *(uint *)(param_1 + 0x35c) = local_68;
        }
      }
      if (puVar3 != (uint *)0x0) {
        uVar10 = lVar4 - (longlong)puVar3;
        puVar8 = puVar3;
        if (0xfff < uVar10) {
          puVar8 = *(uint **)(puVar3 + -2);
          if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar8))) {
LAB_180101545:
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_68,(uintptr_t)local_d0);
          }
          uVar10 = uVar10 + 0x27;
        }
        thunk_FUN_1801f42e0(puVar8,uVar10);
      }
      return;
    }
    cVar5 = *(char *)(lVar1 + (ulonglong)uVar6);
    if (cVar5 == *(char *)(param_1 + 0x250 + (ulonglong)uVar6)) goto LAB_1801010b0;
    LOCK();
    *(longlong *)(param_1 + 0x380) = *(longlong *)(param_1 + 0x380) + 1;
    UNLOCK();
    bVar12 = (byte)uVar6;
    if (cVar5 == '\0') {
      if (uVar6 == *(uint *)(param_1 + 0x35c)) {
        *(uint *)(param_1 + 0x35c) = local_68;
      }
    }
    else {
      *(uint *)(param_1 + 0x388) = uVar6;
      if (*(char *)(param_1 + 0x358) == '\x01') {
        if ((char)bVar12 < '\x10') {
          if ((char)bVar12 < '\x04') {
            if ((char)bVar12 < '\0') {
              if ((bVar12 & 0xfe) != 0x90) goto LAB_180101174;
            }
            else if (2 < uVar6) {
LAB_180101174:
              *(uint *)(param_1 + 0x35c) = uVar6;
              *(ULONGLONG *)(param_1 + 0x360) = local_c8;
              *(ULONGLONG *)(param_1 + 0x368) = local_c8;
            }
          }
          else if ((char)bVar12 < '\t') {
            if (uVar6 != 4) goto LAB_180101174;
          }
          else if ((char)bVar12 < '\r') {
            if (uVar6 != 9) goto LAB_180101174;
          }
          else if (uVar6 != 0xd) goto LAB_180101174;
        }
        else if ((char)bVar12 < '!') {
          if ((char)bVar12 < '\x14') {
            if (2 < (byte)(bVar12 - 0x10)) goto LAB_180101174;
          }
          else if ((char)bVar12 < '\x1b') {
            if (uVar6 != 0x14) goto LAB_180101174;
          }
          else if (uVar6 != 0x1b) goto LAB_180101174;
        }
        else if ((char)bVar12 < '-') {
          if (7 < (byte)(bVar12 - 0x21)) goto LAB_180101174;
        }
        else if ((char)bVar12 < '[') {
          if (uVar6 != 0x2d) goto LAB_180101174;
        }
        else if (1 < (byte)(bVar12 + 0xa5)) goto LAB_180101174;
      }
    }
    if ((char)bVar12 < '\x04') {
      if (uVar6 < 3) {
LAB_1801011d6:
        local_a4 = local_6c;
        if (uVar6 != local_74) {
          local_a4 = local_74;
        }
        local_a8 = local_61;
        fStack_94 = 0.0;
        if (uVar6 == local_6c) {
          local_a4 = local_68;
        }
        uStack_9c = (undefined4)*(undefined8 *)(param_1 + 0x350);
        uStack_98 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x350) >> 0x20);
        local_a0 = cVar5;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
             DAT_1802a4364) && (FUN_1801d62d8(&DAT_1802a4364), DAT_1802a4364 == local_70)) {
          DAT_1802a4360 = DAT_1802a3dec;
          DAT_1802a3dec = local_6c + DAT_1802a3dec;
          _Init_thread_footer(&DAT_1802a4364);
        }
        FUN_1800bc160(uVar13,DAT_1802a4360);
        goto LAB_1801010b0;
      }
    }
    else if (uVar6 == 4) goto LAB_1801011d6;
    if ((char)bVar12 < '\x14') {
      if ((char)bVar12 < '\x10') {
        if ((bVar12 & 0xfe) != 0x90) {
LAB_180101286:
          local_a8 = local_61;
          cStack_9f = local_61;
          local_a4 = uVar6;
          local_a0 = cVar5;
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
               DAT_1802a40fc) && (FUN_1801d62d8(&DAT_1802a40fc), DAT_1802a40fc == local_70)) {
            DAT_1802a40f8 = DAT_1802a3dec;
            DAT_1802a3dec = local_6c + DAT_1802a3dec;
            _Init_thread_footer(&DAT_1802a40fc);
          }
          FUN_1800bc160(uVar13,DAT_1802a40f8);
          if (((cVar5 != '\0') && (local_a8 == '\0')) && (*(char *)(param_1 + 0x358) == '\0')) {
            uVar7 = FUN_180111340();
            FUN_180114900(uVar7,uVar6);
          }
        }
      }
      else if (2 < (byte)(bVar12 - 0x10)) goto LAB_180101286;
    }
    else if ((char)bVar12 < '[') {
      if (uVar6 != 0x14) goto LAB_180101286;
    }
    else if (1 < (byte)(bVar12 + 0xa5)) goto LAB_180101286;
LAB_1801010b0:
    uVar6 = uVar6 + local_6c;
    cVar5 = local_a8;
  } while( true );
}



void Unwind_180101620(undefined8 param_1,longlong param_2)

{
  FUN_1800fe070(param_2 + 0x30);
  return;
}



void Unwind_180101660(undefined8 param_1,longlong param_2)

{
  FUN_1801016a0(param_2 + 0xa0);
  return;
}



void FUN_1801016a0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
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

  local_90 = 0x6bcf24c9d36f39fa;
  local_98 = 0x7bee2dbb153f66de;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x896e8ee73faf89de;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x896e8ee73faf89de;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x25730ded5b3ba9fc) break;
          if (uVar1 == 0x25730ded5b3ba9fc) {
            local_60 = *local_78;
            local_68 = local_70 + 1;
            local_90 = 0x807826f28078006e;
            if (0xfff < local_68) {
              local_90 = 0x3800100d83f7d0db;
            }
            local_98 = 0x13ae7b9b897338d1;
            local_50 = local_60;
          }
          else if (uVar1 == 0x2bae6b960a84e80a) {
            local_48 = *(longlong *)(local_50 + -8);
            local_90 = 0x3804d8172bf90212;
            if ((local_50 - local_48) - 8U < 0x20) {
              local_90 = 0x1014082367aa1bcf;
            }
            local_98 = 0x28ad38c822fa6e57;
          }
          else if (uVar1 == 0x38b930eb45507598) {
            local_68 = local_70 + 0x28;
            local_60 = local_48;
            local_90 = 0xc90cfd7217bef3ff;
            local_98 = 0x5adaa01b1eb5cb40;
          }
        }
        if (0x10210972c6505f23 < (longlong)uVar1) break;
        if (uVar1 == 0x93d65d69090b38bf) {
          thunk_FUN_1801f42e0(local_60,local_68);
          local_90 = 0xdda675597deeca3d;
          local_98 = 0xc9b0ed1463004dde;
        }
      }
      if (uVar1 != 0x10210972c6505f24) break;
      local_80 = 0;
      local_88 = 0xf;
      local_78 = (longlong *)(param_1 + 8);
      local_58 = (undefined8 *)(param_1 + 0x20);
      local_70 = *(ulonglong *)(param_1 + 0x20);
      local_90 = 0x386ba784a7c51a1d;
      if (0xf < local_70) {
        local_90 = 0x90e3224e2103402;
      }
      local_98 = 0x2c7d3fc9b92b9dfe;
    }
    if (uVar1 == 0x1416984d1eee87e3) break;
    if (uVar1 == 0x10a9e0df09036c45) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_80);
    }
  }
  *(uintptr_t *)(param_1 + 0x18) = local_80;
  *local_58 = local_88;
  *(undefined1 *)local_78 = 0;
  return;
}



undefined1 FUN_180101a00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xecb0f799507805ff;
  local_50 = 0x7eb7b35470631b10;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x57214ee5db1ab2c8;
        if (uVar1 != 0x920744cd201b1eef) break;
        local_48 = 0x6fee550bc75ece9b;
        if (param_2 - 0x100 < 0xffffff01) {
          local_48 = 0x77c6608f4c51ca1d;
        }
        local_50 = 0x3aaaf4478eaac663;
        local_51 = 0;
      }
      if (uVar1 != 0x5544a14c49f408f8) break;
      local_51 = *(undefined1 *)(param_1 + 0x150 + (ulonglong)param_2);
      local_48 = 0x7af1c850f4b6b68b;
      local_50 = 0x379d5c98364dbaf5;
    }
    local_48 = local_48 ^ 0x57214ee5db1ab2c8;
  } while (uVar1 != 0x4d6c94c8c2fb0c7e);
  return local_51;
}



byte FUN_180101b40(void)

{
  return DAT_1802a435c & 1;
}



char * FUN_180101b50(char *param_1,UINT param_2)

{
  SHORT SVar1;
  ushort uVar2;
  UINT wScanCode;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_1e1;
  ulonglong local_1e0;
  ulonglong local_1d8;
  short local_1ce;
  UINT local_1cc;
  ulonglong local_1c8;
  uint local_1c0;
  DWORD local_1bc;
  ulonglong local_1b8;
  int local_1b0;
  uint local_1ac;
  longlong local_1a8;
  ulonglong local_1a0;
  HKL local_198;
  ulonglong local_190;
  char *local_188;
  char *local_180;
  WCHAR local_178 [8];
  CHAR local_168 [296];

  local_1d8 = 0xd1ceb36f1c3f72a1;
  local_1e0 = 0x3fd5ca92be2352e1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_1d8 ^ 0x164afc282cdc539a;
              uVar3 = local_1d8 ^ local_1e0;
              local_1e0 = local_1e0 ^ 0x164afc282cdc539a;
              local_1d8 = uVar5;
              if (-0xe15ff46bb41ae60 < (longlong)uVar3) break;
              if ((longlong)uVar3 < -0x26acefa009a9067d) {
                if ((longlong)uVar3 < -0x45b7d3ab2d644b32) {
                  if (uVar3 == 0x844f1cae8aa6061f) {
                    local_180 = (char *)FUN_1801d61c8(local_1b8 + local_1a8);
                    local_1d8 = 0xaa26e1762697ada6;
                    local_1e0 = 0xb7b4716fe3354855;
                  }
                  else if (uVar3 == 0x8516da3125b88f56) {
                    wScanCode = MapVirtualKeyExW(param_2,local_1cc,local_198);
                    local_178[0] = L'\0';
                    local_178[1] = L'\0';
                    local_178[2] = L'\0';
                    local_178[3] = L'\0';
                    local_178[4] = L'\0';
                    local_178[5] = L'\0';
                    local_178[6] = L'\0';
                    local_178[7] = L'\0';
                    local_1b0 = ToUnicodeEx(param_2,wScanCode,(BYTE *)(local_168 + 0x10),local_178,8,local_1cc,local_198
                                           );
                    local_1d8 = 0x53b34b4cd36eba07;
                    if (local_178[0] == L'\x7f' || (ushort)local_178[0] < 0x20) {
                      local_1d8 = 0x6d9602379a67826c;
                    }
                    if (local_1b0 < 1) {
                      local_1d8 = 0x6d9602379a67826c;
                    }
                    local_1e0 = 0x3c71a3b543b14c13;
                  }
                  else if (uVar3 == 0xb391af2dec6e61e2) {
                    local_1d8 = 0xde7d4ada4dcb3634;
                    local_1e0 = 0x8954492aa56c721d;
                  }
                }
                else if (uVar3 == 0xba482c54d29bb4ce) {
                  local_198 = GetKeyboardLayout(local_1bc);
                  local_168[0x100] = '\0';
                  local_168[0x101] = '\0';
                  local_168[0x102] = '\0';
                  local_168[0x103] = '\0';
                  local_168[0x104] = '\0';
                  local_168[0x105] = '\0';
                  local_168[0x106] = '\0';
                  local_168[0x107] = '\0';
                  local_168[0x108] = '\0';
                  local_168[0x109] = '\0';
                  local_168[0x10a] = '\0';
                  local_168[0x10b] = '\0';
                  local_168[0x10c] = '\0';
                  local_168[0x10d] = '\0';
                  local_168[0x10e] = '\0';
                  local_168[0x10f] = '\0';
                  local_168[0xf0] = '\0';
                  local_168[0xf1] = '\0';
                  local_168[0xf2] = '\0';
                  local_168[0xf3] = '\0';
                  local_168[0xf4] = '\0';
                  local_168[0xf5] = '\0';
                  local_168[0xf6] = '\0';
                  local_168[0xf7] = '\0';
                  local_168[0xf8] = '\0';
                  local_168[0xf9] = '\0';
                  local_168[0xfa] = '\0';
                  local_168[0xfb] = '\0';
                  local_168[0xfc] = '\0';
                  local_168[0xfd] = '\0';
                  local_168[0xfe] = '\0';
                  local_168[0xff] = '\0';
                  local_168[0xe0] = '\0';
                  local_168[0xe1] = '\0';
                  local_168[0xe2] = '\0';
                  local_168[0xe3] = '\0';
                  local_168[0xe4] = '\0';
                  local_168[0xe5] = '\0';
                  local_168[0xe6] = '\0';
                  local_168[0xe7] = '\0';
                  local_168[0xe8] = '\0';
                  local_168[0xe9] = '\0';
                  local_168[0xea] = '\0';
                  local_168[0xeb] = '\0';
                  local_168[0xec] = '\0';
                  local_168[0xed] = '\0';
                  local_168[0xee] = '\0';
                  local_168[0xef] = '\0';
                  local_168[0xd0] = '\0';
                  local_168[0xd1] = '\0';
                  local_168[0xd2] = '\0';
                  local_168[0xd3] = '\0';
                  local_168[0xd4] = '\0';
                  local_168[0xd5] = '\0';
                  local_168[0xd6] = '\0';
                  local_168[0xd7] = '\0';
                  local_168[0xd8] = '\0';
                  local_168[0xd9] = '\0';
                  local_168[0xda] = '\0';
                  local_168[0xdb] = '\0';
                  local_168[0xdc] = '\0';
                  local_168[0xdd] = '\0';
                  local_168[0xde] = '\0';
                  local_168[0xdf] = '\0';
                  local_168[0xc0] = '\0';
                  local_168[0xc1] = '\0';
                  local_168[0xc2] = '\0';
                  local_168[0xc3] = '\0';
                  local_168[0xc4] = '\0';
                  local_168[0xc5] = '\0';
                  local_168[0xc6] = '\0';
                  local_168[199] = '\0';
                  local_168[200] = '\0';
                  local_168[0xc9] = '\0';
                  local_168[0xca] = '\0';
                  local_168[0xcb] = '\0';
                  local_168[0xcc] = '\0';
                  local_168[0xcd] = '\0';
                  local_168[0xce] = '\0';
                  local_168[0xcf] = '\0';
                  local_168[0xb0] = '\0';
                  local_168[0xb1] = '\0';
                  local_168[0xb2] = '\0';
                  local_168[0xb3] = '\0';
                  local_168[0xb4] = '\0';
                  local_168[0xb5] = '\0';
                  local_168[0xb6] = '\0';
                  local_168[0xb7] = '\0';
                  local_168[0xb8] = '\0';
                  local_168[0xb9] = '\0';
                  local_168[0xba] = '\0';
                  local_168[0xbb] = '\0';
                  local_168[0xbc] = '\0';
                  local_168[0xbd] = '\0';
                  local_168[0xbe] = '\0';
                  local_168[0xbf] = '\0';
                  local_168[0xa0] = '\0';
                  local_168[0xa1] = '\0';
                  local_168[0xa2] = '\0';
                  local_168[0xa3] = '\0';
                  local_168[0xa4] = '\0';
                  local_168[0xa5] = '\0';
                  local_168[0xa6] = '\0';
                  local_168[0xa7] = '\0';
                  local_168[0xa8] = '\0';
                  local_168[0xa9] = '\0';
                  local_168[0xaa] = '\0';
                  local_168[0xab] = '\0';
                  local_168[0xac] = '\0';
                  local_168[0xad] = '\0';
                  local_168[0xae] = '\0';
                  local_168[0xaf] = '\0';
                  local_168[0x90] = '\0';
                  local_168[0x91] = '\0';
                  local_168[0x92] = '\0';
                  local_168[0x93] = '\0';
                  local_168[0x94] = '\0';
                  local_168[0x95] = '\0';
                  local_168[0x96] = '\0';
                  local_168[0x97] = '\0';
                  local_168[0x98] = '\0';
                  local_168[0x99] = '\0';
                  local_168[0x9a] = '\0';
                  local_168[0x9b] = '\0';
                  local_168[0x9c] = '\0';
                  local_168[0x9d] = '\0';
                  local_168[0x9e] = '\0';
                  local_168[0x9f] = '\0';
                  local_168[0x80] = '\0';
                  local_168[0x81] = '\0';
                  local_168[0x82] = '\0';
                  local_168[0x83] = '\0';
                  local_168[0x84] = '\0';
                  local_168[0x85] = '\0';
                  local_168[0x86] = '\0';
                  local_168[0x87] = '\0';
                  local_168[0x88] = '\0';
                  local_168[0x89] = '\0';
                  local_168[0x8a] = '\0';
                  local_168[0x8b] = '\0';
                  local_168[0x8c] = '\0';
                  local_168[0x8d] = '\0';
                  local_168[0x8e] = '\0';
                  local_168[0x8f] = '\0';
                  local_168[0x70] = '\0';
                  local_168[0x71] = '\0';
                  local_168[0x72] = '\0';
                  local_168[0x73] = '\0';
                  local_168[0x74] = '\0';
                  local_168[0x75] = '\0';
                  local_168[0x76] = '\0';
                  local_168[0x77] = '\0';
                  local_168[0x78] = '\0';
                  local_168[0x79] = '\0';
                  local_168[0x7a] = '\0';
                  local_168[0x7b] = '\0';
                  local_168[0x7c] = '\0';
                  local_168[0x7d] = '\0';
                  local_168[0x7e] = '\0';
                  local_168[0x7f] = '\0';
                  local_168[0x60] = '\0';
                  local_168[0x61] = '\0';
                  local_168[0x62] = '\0';
                  local_168[99] = '\0';
                  local_168[100] = '\0';
                  local_168[0x65] = '\0';
                  local_168[0x66] = '\0';
                  local_168[0x67] = '\0';
                  local_168[0x68] = '\0';
                  local_168[0x69] = '\0';
                  local_168[0x6a] = '\0';
                  local_168[0x6b] = '\0';
                  local_168[0x6c] = '\0';
                  local_168[0x6d] = '\0';
                  local_168[0x6e] = '\0';
                  local_168[0x6f] = '\0';
                  local_168[0x50] = '\0';
                  local_168[0x51] = '\0';
                  local_168[0x52] = '\0';
                  local_168[0x53] = '\0';
                  local_168[0x54] = '\0';
                  local_168[0x55] = '\0';
                  local_168[0x56] = '\0';
                  local_168[0x57] = '\0';
                  local_168[0x58] = '\0';
                  local_168[0x59] = '\0';
                  local_168[0x5a] = '\0';
                  local_168[0x5b] = '\0';
                  local_168[0x5c] = '\0';
                  local_168[0x5d] = '\0';
                  local_168[0x5e] = '\0';
                  local_168[0x5f] = '\0';
                  local_168[0x40] = '\0';
                  local_168[0x41] = '\0';
                  local_168[0x42] = '\0';
                  local_168[0x43] = '\0';
                  local_168[0x44] = '\0';
                  local_168[0x45] = '\0';
                  local_168[0x46] = '\0';
                  local_168[0x47] = '\0';
                  local_168[0x48] = '\0';
                  local_168[0x49] = '\0';
                  local_168[0x4a] = '\0';
                  local_168[0x4b] = '\0';
                  local_168[0x4c] = '\0';
                  local_168[0x4d] = '\0';
                  local_168[0x4e] = '\0';
                  local_168[0x4f] = '\0';
                  local_168[0x30] = '\0';
                  local_168[0x31] = '\0';
                  local_168[0x32] = '\0';
                  local_168[0x33] = '\0';
                  local_168[0x34] = '\0';
                  local_168[0x35] = '\0';
                  local_168[0x36] = '\0';
                  local_168[0x37] = '\0';
                  local_168[0x38] = '\0';
                  local_168[0x39] = '\0';
                  local_168[0x3a] = '\0';
                  local_168[0x3b] = '\0';
                  local_168[0x3c] = '\0';
                  local_168[0x3d] = '\0';
                  local_168[0x3e] = '\0';
                  local_168[0x3f] = '\0';
                  local_168[0x20] = '\0';
                  local_168[0x21] = '\0';
                  local_168[0x22] = '\0';
                  local_168[0x23] = '\0';
                  local_168[0x24] = '\0';
                  local_168[0x25] = '\0';
                  local_168[0x26] = '\0';
                  local_168[0x27] = '\0';
                  local_168[0x28] = '\0';
                  local_168[0x29] = '\0';
                  local_168[0x2a] = '\0';
                  local_168[0x2b] = '\0';
                  local_168[0x2c] = '\0';
                  local_168[0x2d] = '\0';
                  local_168[0x2e] = '\0';
                  local_168[0x2f] = '\0';
                  local_168[0x10] = '\0';
                  local_168[0x11] = '\0';
                  local_168[0x12] = '\0';
                  local_168[0x13] = '\0';
                  local_168[0x14] = '\0';
                  local_168[0x15] = '\0';
                  local_168[0x16] = '\0';
                  local_168[0x17] = '\0';
                  local_168[0x18] = '\0';
                  local_168[0x19] = '\0';
                  local_168[0x1a] = '\0';
                  local_168[0x1b] = '\0';
                  local_168[0x1c] = '\0';
                  local_168[0x1d] = '\0';
                  local_168[0x1e] = '\0';
                  local_168[0x1f] = '\0';
                  SVar1 = GetAsyncKeyState(local_1c0);
                  local_1d8 = 0x9c464f90a5894bca;
                  if (local_1ce < SVar1) {
                    local_1d8 = 0x9b09d68edad0607f;
                  }
                  local_1e0 = 0xc7501efeaf7aaa02;
                }
                else if (uVar3 == 0xbadbb06ed8ecc734) {
                  local_168[0x21] = local_1e1;
                  local_1d8 = 0x7f8f37b0fde4d41f;
                  local_1e0 = 0x1b3a0c459890e9cc;
                }
                else if (uVar3 == 0xd2e3320305684f37) {
                  local_168[0x22] = local_1e1;
                  local_1d8 = 0xef2a05cea50197ad;
                  local_1e0 = 0x99b6a6917bc782cd;
                }
              }
              else if ((longlong)uVar3 < -0x131f57444094fcd2) {
                if (uVar3 == 0xd953105ff656f983) {
                  local_1d8 = 0xa01cfa1481547959;
                  local_1e0 = 0x138d55396d3a18bb;
                }
                else if (uVar3 == 0xdde95e9f18301b6e) {
                  lVar4 = FUN_1801d61c8(local_1b8 + 0x28);
                  local_180 = (char *)(lVar4 + 0x27U & 0xffffffffffffffe0);
                  *(longlong *)(local_180 + -8) = lVar4;
                  local_1d8 = 0xaedb7eb167c5f395;
                  local_1e0 = 0xb349eea8a2671666;
                }
                else if (uVar3 == 0xe91e407fe4616d95) {
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
                  *(longlong *)(param_1 + 0x10) = local_1a8;
                  *(ulonglong *)(param_1 + 0x18) = local_1c8;
                  *param_1 = (char)param_2 + -0x30;
                  local_1d8 = 0xa7090b4d9577008a;
                  local_1e0 = 0xf02008bd7dd044a3;
                }
              }
              else if (uVar3 == 0xece0a8bbbf6b032e) {
                *(ulonglong *)(param_1 + 0x10) = local_1a0;
                *(ulonglong *)(param_1 + 0x18) = local_190;
                FUN_1802079d0(local_188,local_168,local_1a0);
                local_188[local_1a0] = '\0';
                local_1d8 = 0x4c3a14e0a7ab94fc;
                local_1e0 = 0x956904bf51fd6d7f;
              }
              else if (uVar3 == 0xede0ec0f64e2c904) {
                local_1bc = FUN_1801b9df0();
                local_1d8 = 0xcaf00772666e5587;
                if (local_1bc == local_1cc) {
                  local_1d8 = 0x5765923028c9b1cc;
                }
                local_1e0 = 0x70b82b26b4f5e149;
              }
              else if (uVar3 == 0xee1b79fda21c2040) {
                local_1a8 = 1;
                local_1cc = 0;
                local_1e1 = 0x80;
                local_1c0 = 0x10;
                local_1ce = -1;
                local_1c8 = 0xf;
                local_1d8 = 0xecd8fbf590b06384;
                if (param_2 - 0x60 < 10) {
                  local_1d8 = 0xe82657851033c715;
                }
                local_1e0 = 0x13817faf452aa80;
              }
            }
            if (0x572903f0e8a74428 < (longlong)uVar3) break;
            if ((longlong)uVar3 < 0x1d929019c5a2e5f3) {
              if (uVar3 == 0xf1ea00b944be51a1) {
                local_168[0x24] = 1;
                local_1d8 = 0x65cc413839e1aa48;
                local_1e0 = 0xe0da9b091c59251e;
              }
              else if (uVar3 == 0xf7f02ad56e4baf8c) {
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
                param_1[0x10] = '\0';
                param_1[0x11] = '\0';
                param_1[0x12] = '\0';
                param_1[0x13] = '\0';
                param_1[0x14] = '\0';
                param_1[0x15] = '\0';
                param_1[0x16] = '\0';
                param_1[0x17] = '\0';
                *(ulonglong *)(param_1 + 0x18) = local_1c8;
                local_1d8 = 0x47a1789d85512f69;
                local_1e0 = 0x9ef268c27307d6ea;
              }
              else if (uVar3 == 0x1ba97972a10fc767) {
                local_1a0 = (ulonglong)local_1ac;
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
                local_190 = local_1c8;
                local_1d8 = 0x9d852bc31bbf7bcc;
                if (local_1ac < local_1c0) {
                  local_1d8 = 0xe9c348c01df9888;
                }
                local_1e0 = 0xe27c9c37beb49ba6;
                local_188 = param_1;
              }
            }
            else if (uVar3 == 0x1d929019c5a2e5f3) {
              *(char **)param_1 = local_180;
              local_1d8 = 0xc1b11e92cf120795;
              local_1e0 = 0x2d51b629707904bb;
              local_190 = local_1b8;
              local_188 = local_180;
            }
            else if (uVar3 == 0x27ddb9169c3c5085) {
              local_1bc = GetCurrentThreadId();
              local_1d8 = 0x8b0900cacaaa4820;
              local_1e0 = 0x31412c9e1831fcee;
            }
            else if (uVar3 == 0x51e7a182d9d6ce7f) {
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
              param_1[0x10] = '\0';
              param_1[0x11] = '\0';
              param_1[0x12] = '\0';
              param_1[0x13] = '\0';
              param_1[0x14] = '\0';
              param_1[0x15] = '\0';
              param_1[0x16] = '\0';
              param_1[0x17] = '\0';
              *(ulonglong *)(param_1 + 0x18) = local_1c8;
              local_1d8 = 0xf53acdb686d32c6d;
              local_1e0 = 0x46ab629b6abd4d8f;
            }
          }
          if ((longlong)uVar3 < 0x6fc2e8f990dff614) break;
          if (uVar3 == 0x6fc2e8f990dff614) {
            local_168[0] = '\0';
            local_168[1] = '\0';
            local_168[2] = '\0';
            local_168[3] = '\0';
            local_168[4] = '\0';
            local_168[5] = '\0';
            local_168[6] = '\0';
            local_168[7] = '\0';
            local_168[8] = '\0';
            local_168[9] = '\0';
            local_168[10] = '\0';
            local_168[0xb] = '\0';
            local_168[0xc] = '\0';
            local_168[0xd] = '\0';
            local_168[0xe] = '\0';
            local_168[0xf] = '\0';
            local_1ac = WideCharToMultiByte(0xfde9,local_1cc,local_178,local_1b0,local_168,0xf,(LPCSTR)0x0,(LPBOOL)0x0);
            local_1d8 = 0xf6b5e90bf5623c11;
            if ((int)local_1cc < (int)local_1ac) {
              local_1d8 = 0x1aecbaac3a2654fa;
            }
            local_1e0 = 0x145c3de9b29939d;
          }
          else if (uVar3 == 0x769ca35fdec61560) {
            uVar2 = GetKeyState(0x14);
            local_1d8 = 0xc642bde75aad8aec;
            if ((uVar2 & 1) == 0) {
              local_1d8 = 0xb2be676f3bab541b;
            }
            local_1e0 = 0x37a8bd5e1e13db4d;
          }
          else if (uVar3 == 0x7ff9b7f4a50be06a) {
            uVar3 = local_1a0 | local_1c8;
            local_1b8 = 0x16;
            if (0x16 < uVar3) {
              local_1b8 = uVar3;
            }
            local_1d8 = 0x93edf80e7072cf7f;
            if (0xffe < uVar3) {
              local_1d8 = 0xca4bba3fe2e4d20e;
            }
            local_1e0 = 0x17a2e4a0fad4c960;
          }
        }
        if ((longlong)uVar3 < 0x5c59c87075aaca7d) break;
        if (uVar3 == 0x5c59c87075aaca7d) {
          SVar1 = GetAsyncKeyState(0x11);
          local_1d8 = 0x30a05d049193c8a3;
          if (local_1ce < SVar1) {
            local_1d8 = 0xeeced69f2c0b3244;
          }
          local_1e0 = 0x8a7bed6a497f0f97;
        }
        else if (uVar3 == 0x64b53bf565743dd3) {
          SVar1 = GetAsyncKeyState(0x12);
          local_1d8 = 0xf5a69b58563b18b8;
          if (local_1ce < SVar1) {
            local_1d8 = 0x51d90a048d9542ef;
          }
          local_1e0 = 0x2745a95b5353578f;
        }
      }
      if (uVar3 != 0x5b16516e0af3e1c8) break;
      local_168[0x20] = local_1e1;
      local_1d8 = 0x943585a4b472f4be;
      local_1e0 = 0xc86c4dd4c1d83ec3;
    }
  } while (uVar3 != 0x572903f0e8a74429);
  return param_1;
}



undefined * FUN_1801026e0(uint param_1)

{
  UINT UVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStackY_168 [32];
  ulonglong local_120;
  ulonglong local_118;
  UINT local_10c;
  undefined *local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  WCHAR local_e8 [68];
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStackY_168;
  local_118 = 0xef36f4e0a26344ee;
  local_120 = 0xaaf552e71393980d;
LAB_180102806:
  uVar4 = local_118 ^ 0xf823584b7f5ddd2;
  uVar3 = local_118 ^ local_120;
  local_120 = local_120 ^ 0xf823584b7f5ddd2;
  local_118 = uVar4;
  if ((longlong)uVar3 < 0xf01393aa9c0b72c) {
    if ((longlong)uVar3 < -0x1f518e3948c6e708) {
      if (uVar3 == 0x8d65e292b00bf76c) {
        FUN_180105a77(&DAT_1802a4468,&DAT_18027e514,0x12,7);
        FUN_180096a50(&DAT_1802a4300,local_f8,&DAT_1802a4468,(ulonglong)param_1);
        local_118 = 0x273e5dd658fe362f;
        local_120 = 0x2e7d92d3d6c06a0c;
      }
      else if (uVar3 == 0xa192968b992e0830) {
        local_118 = 0x2e4529e4cf0f19cf;
        if (param_1 - 0x41 < 0x1a) {
          local_118 = 0x3fc2f27225d0f18;
        }
        if (param_1 - 0x30 < local_fc) {
          local_118 = 0x3fc2f27225d0f18;
        }
        local_120 = 0xe3525ee1956417e0;
      }
      else if (uVar3 == 0xcd1777055a6b0e2f) {
        UVar1 = MapVirtualKeyW(param_1,local_10c);
        local_e8[0x38] = L'\0';
        local_e8[0x39] = L'\0';
        local_e8[0x3a] = L'\0';
        local_e8[0x3b] = L'\0';
        local_e8[0x3c] = L'\0';
        local_e8[0x3d] = L'\0';
        local_e8[0x3e] = L'\0';
        local_e8[0x3f] = L'\0';
        local_e8[0x30] = L'\0';
        local_e8[0x31] = L'\0';
        local_e8[0x32] = L'\0';
        local_e8[0x33] = L'\0';
        local_e8[0x34] = L'\0';
        local_e8[0x35] = L'\0';
        local_e8[0x36] = L'\0';
        local_e8[0x37] = L'\0';
        local_e8[0x28] = L'\0';
        local_e8[0x29] = L'\0';
        local_e8[0x2a] = L'\0';
        local_e8[0x2b] = L'\0';
        local_e8[0x2c] = L'\0';
        local_e8[0x2d] = L'\0';
        local_e8[0x2e] = L'\0';
        local_e8[0x2f] = L'\0';
        local_e8[0x20] = L'\0';
        local_e8[0x21] = L'\0';
        local_e8[0x22] = L'\0';
        local_e8[0x23] = L'\0';
        local_e8[0x24] = L'\0';
        local_e8[0x25] = L'\0';
        local_e8[0x26] = L'\0';
        local_e8[0x27] = L'\0';
        local_e8[0x18] = L'\0';
        local_e8[0x19] = L'\0';
        local_e8[0x1a] = L'\0';
        local_e8[0x1b] = L'\0';
        local_e8[0x1c] = L'\0';
        local_e8[0x1d] = L'\0';
        local_e8[0x1e] = L'\0';
        local_e8[0x1f] = L'\0';
        local_e8[0x10] = L'\0';
        local_e8[0x11] = L'\0';
        local_e8[0x12] = L'\0';
        local_e8[0x13] = L'\0';
        local_e8[0x14] = L'\0';
        local_e8[0x15] = L'\0';
        local_e8[0x16] = L'\0';
        local_e8[0x17] = L'\0';
        local_e8[8] = L'\0';
        local_e8[9] = L'\0';
        local_e8[10] = L'\0';
        local_e8[0xb] = L'\0';
        local_e8[0xc] = L'\0';
        local_e8[0xd] = L'\0';
        local_e8[0xe] = L'\0';
        local_e8[0xf] = L'\0';
        local_e8[0] = L'\0';
        local_e8[1] = L'\0';
        local_e8[2] = L'\0';
        local_e8[3] = L'\0';
        local_e8[4] = L'\0';
        local_e8[5] = L'\0';
        local_e8[6] = L'\0';
        local_e8[7] = L'\0';
        iVar2 = GetKeyNameTextW(UVar1 << 0x10,local_e8,0x3f);
        local_118 = 0x631228bb4ae61c76;
        if ((int)local_10c < iVar2) {
          local_118 = 0x916a837a9d2d013b;
        }
        local_120 = 0xee77ca29faedeb1a;
      }
      goto LAB_180102806;
    }
    if (uVar3 == 0xe0ae71c6b73918f8) {
      DAT_1802a4301 = 0;
      local_118 = 0x2da12ab7c302d474;
      local_120 = 0x387725e7444106d2;
      DAT_1802a4300 = (byte)param_1;
    }
    else {
      if (uVar3 == 0x460d772712e4603) {
        local_118 = 0xfb9d63c576b81080;
        if (param_1 - 0x70 < 0x18) {
          local_118 = 0xe72575821e44b1ad;
        }
        local_120 = 0xe8244cb8b7840681;
        goto LAB_180102806;
      }
      if (uVar3 != 0x943cf058e3e5c23) goto LAB_180102806;
      local_118 = 0x400af8f24b11034;
      local_120 = 0x11d6a0dfa3f2c292;
    }
  }
  else {
    if (0x15d60f508743d2a5 < (longlong)uVar3) {
      if ((longlong)uVar3 < 0x45c3a607b1f0dce3) {
        if (uVar3 == 0x4517ba0e058770f5) {
          FUN_180105d30(&DAT_1802a44b8);
          local_108 = *(undefined **)(&DAT_1802a44b8 + (ulonglong)param_1 * 8);
          local_118 = 0xec5d158bb9e37458;
          local_120 = 0xf98b1adb3ea0a6fe;
        }
        else if (uVar3 == 0x15d60f508743d2a6) {
          if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStackY_168)) {
            return local_108;
          }
        }
      }
      else if (uVar3 == 0x7f1d495367c0ea21) {
        WideCharToMultiByte(0xfde9,local_10c,local_e8,-1,(LPSTR)&DAT_1802a4300,0x40,(LPCSTR)0x0,(LPBOOL)0x0);
        local_118 = 0xc6b98b4d18b27213;
        local_120 = 0xcffa4448968c2e30;
      }
      else if (uVar3 == 0x45c3a607b1f0dce3) {
        local_10c = 0;
        local_f8 = 0x40;
        local_fc = 10;
        local_118 = 0x2c2d484743d724b5;
        if ((0x61ff08002317U >> ((byte)param_1 & 0x3f) & 1) != 0) {
          local_118 = 0x6d5a253b377e1243;
        }
        if (0x2e < param_1) {
          local_118 = 0x2c2d484743d724b5;
        }
        local_120 = 0x284d9f3532f962b6;
      }
      goto LAB_180102806;
    }
    if (uVar3 != 0xf01393aa9c0b72c) {
      if (uVar3 == 0xf7f5c6a45c05d3b) {
        FUN_180105a77(&DAT_1802a4458,&DAT_18027e4dc,0x1c,10);
        FUN_180096a50(&DAT_1802a4300,local_f8,&DAT_1802a4458,local_ec);
        local_118 = 0x29daac11b80d5fc6;
        local_120 = 0x3c0ca3413f4e8d60;
        goto LAB_1801027fc;
      }
      if (uVar3 == 0x13b92f7dc13c1601) {
        local_ec = param_1 - 0x60;
        local_118 = 0xb3390654e19f7ea8;
        if (local_ec < local_fc) {
          local_118 = 0x1dd4ccb53d712ba3;
        }
        local_120 = 0x12ab90df78b17698;
      }
      goto LAB_180102806;
    }
    FUN_180105a77(&DAT_1802a4450,&DAT_18027e4b3,0x15,4);
    FUN_180096a50(&DAT_1802a4300,local_f8,&DAT_1802a4450,param_1 - 0x6f);
    local_118 = 0xeee8d1d4f91763c;
    local_120 = 0x1b38824dc8d2a49a;
  }
LAB_1801027fc:
  local_108 = &DAT_1802a4300;
  goto LAB_180102806;
}



void FUN_180102db0(longlong *param_1)

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

  local_90 = 0x7b2cfbbd81260bf7;
  local_98 = 0x15a09d8d2479984f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x2ba9594fe1e30a16;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x2ba9594fe1e30a16;
          local_90 = uVar2;
          if (0x21362d9c43a8b89 < (longlong)uVar1) break;
          if (uVar1 == 0x85884372b819d61e) {
            local_60 = *(longlong *)(local_88 + -8);
            local_90 = 0xc9534692e5363123;
            if ((local_70 - local_60) - 8U < 0x20) {
              local_90 = 0x2bac7169516145d9;
            }
            local_98 = 0x96237194219bafb2;
          }
          else if (uVar1 == 0xbd8f00fd70faea6b) {
            local_80 = local_68 + 0x27;
            local_90 = 0x25f95fd094ec5d14;
            local_98 = 0x630bd5589e73fc19;
            local_78 = local_60;
          }
          else if (uVar1 == 0xf017c833a3236c88) {
            local_70 = local_88;
            local_80 = param_1[2] - local_88;
            local_90 = 0x2853b0a2ab6218e3;
            if (0xfff < local_80) {
              local_90 = 0xeb29795819e46ff0;
            }
            local_98 = 0x6ea13a2aa1fdb9ee;
            local_78 = local_88;
            local_68 = local_80;
          }
        }
        if ((longlong)uVar1 < 0x5f703706c4ad9e91) break;
        if (uVar1 == 0x6e8c6630a55f93b8) {
          local_88 = *param_1;
          local_90 = 0xed9a5e1f608f9320;
          if (local_88 == 0) {
            local_90 = 0x1f9ef4f507967422;
          }
          local_98 = 0x1d8d962cc3acffa8;
        }
        else if (uVar1 == 0x5f703706c4ad9e91) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0x46f28a880a9fa10d) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_90 = 0xec471fd8b6aa3d51;
      local_98 = 0xee547d017290b6db;
    }
  } while (uVar1 != 0x21362d9c43a8b8a);
  return;
}



void FUN_1801030b0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong *local_48;

  local_58 = 0x207a3f8cabcb988c;
  local_60 = 0xdca87ffe42665e78;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x7991d63b7e00dbdb;
        if (uVar2 != 0xfb68abe9ecdb9681) break;
        plVar1 = (longlong *)*local_48;
        thunk_FUN_1801f42e0(local_48,local_50);
        local_58 = 0x42c7ba79fa0253d;
        if (plVar1 == (longlong *)0x0) {
          local_58 = 0xf657097a171287cf;
        }
        local_60 = 0xff44d04e737bb3bc;
        local_48 = plVar1;
      }
      if (uVar2 != 0xfcd24072e9adc6f4) break;
      local_50 = 0x20;
      plVar1 = (longlong *)*param_1;
      *(undefined8 *)plVar1[1] = 0;
      local_48 = (longlong *)*plVar1;
      local_58 = 0x8e9ad62f5404e44b;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0x7ce1a4f2dcb646b9;
      }
      local_60 = 0x75f27dc6b8df72ca;
    }
    local_58 = local_58 ^ 0x7991d63b7e00dbdb;
  } while (uVar2 != 0x913d93464693473);
  thunk_FUN_1801f42e0(*param_1,local_50);
  return;
}



longlong FUN_180103210(ulonglong *param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  byte local_d8;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uintptr_t local_b0;
  ulonglong *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_f8 = 0xfb6b4f825f8e5293;
  local_100 = 0x57825d8fcb8056dc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_f8 ^ 0x8e827a8a79ffbb51;
            uVar1 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0x8e827a8a79ffbb51;
            local_f8 = uVar3;
            if (-0x2530321a13704bcc < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x6ab4a4d9b43f8cbb) {
              if ((longlong)uVar1 < -0x70615ff85c66b9a1) {
                if (uVar1 == 0x832296d57b274a6b) {
                  local_f8 = 0x32c2b731a7c8b320;
                  if (local_f0 < 0x400) {
                    local_f8 = 0x1b6cd22279627cce;
                  }
                  local_100 = 0xed34d19c31240278;
                }
                else if (uVar1 == 0x82fde2cbabcc96f9) {
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b0);
                }
              }
              else if (uVar1 == 0x8f9ea007a399465f) {
                local_48 = *(ulonglong *)(local_90 - 8);
                local_f8 = 0x5af861ef94d8006f;
                if (0x1f < (local_58 - local_48) - 8) {
                  local_f8 = 0x2ca4ec1d39b22a3;
                }
                local_100 = 0x8037ac0a7857b45a;
              }
              else if (uVar1 == 0x94b26c3a16f842e9) {
                thunk_FUN_1801f42e0(local_78,local_80);
                local_f8 = 0x45e26338010d2f51;
                local_100 = 0xecef42d15b04bcc;
              }
            }
            else if ((longlong)uVar1 < -0x5316edf26bf1fbb1) {
              if (uVar1 == 0x954b5b264bc07345) {
                local_88 = local_f0 << (local_d8 & 0x3f);
                local_f8 = 0x93188fc9e9978ebe;
                if (local_f0 != local_b0) {
                  local_f8 = 0xe614c61b4bcc0146;
                }
                local_100 = 0x653650ce30eb4b2d;
                local_b8 = 0;
              }
              else if (uVar1 == 0xa3e9a0df6f9f8189) {
                FUN_1802079d0(local_e8,*param_1,local_c0 - *param_1);
                FUN_1802079d0(local_98 + 4,param_2);
                local_f8 = 0x8eea405ae801fffb;
                local_100 = 0xaefa2d44747b2c38;
              }
            }
            else if (uVar1 == 0xace9120d940e044f) {
              local_d8 = 2;
              local_b0 = 0;
              local_e0 = 0x27;
              local_c8 = param_1 + 1;
              uVar1 = *param_1;
              local_68 = param_2 - uVar1;
              local_60 = ((longlong)(param_1[1] - uVar1) >> 2) + 1;
              local_a0 = param_1 + 2;
              uVar1 = (longlong)(param_1[2] - uVar1) >> 2;
              local_f0 = (uVar1 >> 1) + uVar1;
              if (local_f0 <= local_60) {
                local_f0 = local_60;
              }
              if (0x3fffffffffffffff - (uVar1 >> 1) < uVar1) {
                local_f0 = 0x3fffffffffffffff;
              }
              local_f8 = 0xb76977faaa315fee;
              if (local_f0 < 0x4000000000000000) {
                local_f8 = 0x492ee65f302b4655;
              }
              local_100 = 0xdc65bd797beb3510;
              local_c0 = param_2;
            }
            else if (uVar1 == 0xc256eb35eccc9e5c) {
              FUN_1802079d0(local_e8);
              local_f8 = 0xa20a8f763dafdbd0;
              local_100 = 0x821ae268a1d50813;
            }
          }
          if (-0x8ce253991006602 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x9d120f826833a6d) {
            if (uVar1 == 0xdacfcde5ec8fb435) {
              local_80 = local_50 + local_e0;
              local_78 = local_48;
              local_f8 = 0xa979a88db1f4359a;
              local_100 = 0x3dcbc4b7a70c7773;
            }
            else if (uVar1 == 0xdff666ad96ecb158) {
              local_f8 = 0x1b86d5e38ce0a720;
              if (0x3ffffffffffffff6 < local_f0) {
                local_f8 = 0xde094b456830f80e;
              }
              local_100 = 0x2938918306cf61f1;
            }
          }
          else if (uVar1 == 0xf62edf07d97cc593) {
            local_e8 = local_b8;
            local_98 = local_b8 + local_68;
            *(undefined4 *)(local_b8 + local_68) = *param_3;
            local_f8 = 0xc4edbfa91f8edc13;
            if (param_2 != *local_c8) {
              local_f8 = 0xa552f4439cddc3c6;
            }
            local_100 = 0x6bb549cf342424f;
          }
          else if (uVar1 == 0xf65803be48467eb6) {
            local_b8 = FUN_1801d61c8(local_88);
            local_f8 = 0x6ea160084c4702ea;
            local_100 = 0x988fbf0f953bc779;
          }
        }
        if (0x32be44608a2fc6d0 < (longlong)uVar1) break;
        if (uVar1 == 0x18bf3ccd46269e01) {
          local_58 = local_90;
          local_80 = *local_a0 - local_90;
          local_f8 = 0x393a9d4661e7aa39;
          if (local_80 < 0x1000) {
            local_f8 = 0x2216517bd486ae8f;
          }
          local_100 = 0xb6a43d41c27eec66;
          local_78 = local_90;
          local_50 = local_80;
        }
        else if (uVar1 == 0x20106d1e9c7ad3c3) {
          local_90 = *param_1;
          local_f8 = 0x9b06ba67dd00e34b;
          if (local_90 != 0) {
            local_f8 = 0xc89511bf8f9b19d7;
          }
          local_100 = 0xd02a2d72c9bd87d6;
        }
        else if (uVar1 == 0xf731dac66eff99ff) goto LAB_180103a77;
      }
      if (uVar1 != 0x32be44608a2fc6d1) break;
      lVar2 = FUN_1801d61c8(local_88 + local_e0);
      local_b8 = local_e0 + lVar2 & 0xffffffffffffffe0;
      *(longlong *)(local_b8 - 8) = lVar2;
      local_f8 = 0xcee88c18b0b3069d;
      local_100 = 0x38c6531f69cfc30e;
    }
    if (uVar1 == 0x4b2c971514bd649d) {
      *param_1 = local_e8;
      *local_c8 = local_e8 + local_60 * 4;
      *local_a0 = local_f0 * 4 + local_e8;
      return local_98;
    }
  } while (uVar1 != 0x6b0cca83d1da6afe);
LAB_180103a77:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined4 * FUN_180103a80(undefined4 *param_1,undefined4 *param_2)

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



void Unwind_180103c40(undefined8 param_1,longlong param_2)

{
  FUN_180102db0(*(undefined8 *)(param_2 + 0x30));
  FUN_1801030b0(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_180103c80(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
  longlong local_160;
  ulonglong local_158;
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
  ulonglong *local_98;
  ulonglong local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];

  local_1a8 = 0x8daf69159357ec8;
  local_1b0 = 0x56ee5aeb908f722c;
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_1a8 ^ 0xc3871e4ac5544a9;
              uVar2 = local_1a8 ^ local_1b0;
              local_1b0 = local_1b0 ^ 0xc3871e4ac5544a9;
              local_1a8 = uVar3;
              if (0x2bf7b5d767332748 < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x212d15e9a0431d87) {
                if ((longlong)uVar2 < -0x30a839e4bb1d66fe) {
                  if (uVar2 == 0x93d6fc509b608a34) {
                    local_1a8 = 0xe6417cef0ff3b1f9;
                    if (0x1fffffffffffffff < param_2) {
                      local_1a8 = 0xed82bebdb8b9213e;
                    }
                    local_1b0 = 0xddbd7c0bd214a010;
                  }
                  else if (uVar2 == 0x98d50dce99d0e571) {
                    local_180 = local_c8;
                    local_98 = param_1 + 2;
                    local_130 = *param_1;
                    local_128 = param_1[2] - local_130;
                    local_1a8 = 0xed73d1567f7cfac6;
                    if (local_128 == local_198) {
                      local_1a8 = 0xc105ab10b336c517;
                    }
                    local_1b0 = 0xc6846481184fdd8f;
                    local_90 = local_130;
                  }
                  else if (uVar2 == 0xb12d7a3263b7b7bb) {
                    *local_f8 = param_3;
                    local_f8 = local_f8 + 1;
                    local_1a8 = 0xca62a465410bde04;
                    if (local_f8 == local_140) {
                      local_1a8 = 0x780c906e489ef01f;
                    }
                    local_1b0 = 0x7b4fde5722bc69bf;
                  }
                }
                else if ((longlong)uVar2 < -0x250a89008d9619b8) {
                  if (uVar2 == 0xd891e2f99cae7dfd) {
                    local_1a8 = 0x7315900437688f63;
                    if (param_2 < 0x1ffffffffffffffc) {
                      local_1a8 = 0x4fb9652b71884f9f;
                    }
                    local_1b0 = 0x12f23ae6652bc856;
                  }
                  else if (uVar2 == 0xcf57c61b44e29902) {
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_198);
                  }
                }
                else if (uVar2 == 0xdaf576ff7269e648) {
                  uVar2 = (longlong)local_b8 + (local_178 - (longlong)local_b0);
                  local_120 = (uVar2 >> (local_1a0 & 0x3f)) + local_148;
                  local_1a8 = 0x9e6464a98692d0af;
                  if (uVar2 < local_158) {
                    local_1a8 = 0xaeaa31d5b023bdf9;
                  }
                  local_1b0 = 0xb33e8c97447a115f;
                  local_f0 = local_190;
                }
                else if (uVar2 == 0xdc6dc8c318080fc3) {
                  local_1a8 = 0xa76cf78e3d4addef;
                  if (local_190 == local_140) {
                    local_1a8 = 0x7edacf482501a207;
                  }
                  local_1b0 = 0x7d9981714f233ba7;
                }
              }
              else if ((longlong)uVar2 < 0x19a2ef429788986f) {
                if ((longlong)uVar2 < 0x3434e396a2299a0) {
                  if (uVar2 == 0xded2ea165fbce279) {
                    local_d8 = local_128 + local_170;
                    local_d0 = local_a0;
                    local_1a8 = 0xc2852a7bf1fe3bb6;
                    local_1b0 = 0xb644671671bc9ae5;
                  }
                  else if (uVar2 == 0x4eb46679fd6c8b) {
                    local_c8 = (undefined8 *)FUN_1801d61c8(local_188);
                    local_1a8 = 0x7f1aaa65101e9034;
                    local_1b0 = 0xe7cfa7ab89ce7545;
                  }
                }
                else if (uVar2 == 0x781cf91ab791898) {
                  *param_1 = (ulonglong)local_180;
                  local_80 = (undefined8 *)((longlong)local_180 + local_188);
                  *local_c0 = (ulonglong)local_80;
                  *local_98 = (ulonglong)local_80;
                  local_110 = ((ulonglong)(local_188 + local_178) >> (local_1a0 & 0x3f)) + local_148;
                  local_1a8 = 0xe622a474fc5d051e;
                  if ((ulonglong)(local_188 + local_178) < local_158) {
                    local_1a8 = 0xc17d0f4e1449d35a;
                  }
                  local_1b0 = 0x9b0a746d44e3c056;
                  local_108 = local_180;
                }
                else if (uVar2 == 0x3434e396a2299a0) {
                  return;
                }
              }
              else if (uVar2 == 0x19a2ef429788986f) {
                local_1a8 = 0xc788106264cbb59b;
                if (local_120 == local_138) {
                  local_1a8 = 0xd95fe319fab0809d;
                }
                local_1b0 = 0xda1cad209092193d;
                local_f0 = local_a8;
              }
              else if (uVar2 == 0x1b519cec767dc76e) {
                local_a0 = *(ulonglong *)(local_130 - 8);
                local_1a8 = 0x40123911c8b9d9d4;
                if ((local_90 + local_178) - local_a0 < 0x20) {
                  local_1a8 = 0x5197151cd3e7a2af;
                }
                local_1b0 = 0x8f45ff0a8c5b40d6;
              }
              else if (uVar2 == 0x1d94bd42f459aca6) {
                local_1a8 = 0x4d62400de164f899;
                local_1b0 = 0xfc4f3a3f82d34f22;
                local_f8 = local_f0;
              }
            }
            if ((longlong)uVar2 < 0x58fe3c1c0e05a466) break;
            if ((longlong)uVar2 < 0x5e34ac7ac9ba0ce4) {
              if (uVar2 == 0x58fe3c1c0e05a466) {
                lVar4 = local_100 << (local_1a0 & 0x3f);
                puVar1 = (undefined8 *)((longlong)local_180 + lVar4);
                *puVar1 = local_68._0_8_;
                puVar1[1] = local_68._8_8_;
                puVar1 = (undefined8 *)((longlong)local_180 + lVar4 + 0x10);
                *puVar1 = local_68._0_8_;
                puVar1[1] = local_68._8_8_;
                local_100 = local_100 + local_160;
                local_1a8 = 0x87967a513b59e525;
                if (local_100 == local_118) {
                  local_1a8 = 0x9195f989bee3af94;
                }
                local_1b0 = 0xdf68464d355c4143;
              }
              else if (uVar2 == 0x5a777b2350aa130c) {
                local_1a8 = 0xf6af6bc782945aa9;
                local_1b0 = 0xd8b41e3911438dd3;
                local_e8 = local_108;
              }
              else if (uVar2 == 0x5d4b5fcd14a387c9) {
                lVar4 = FUN_1801d61c8(local_188 + local_170);
                local_c8 = (undefined8 *)(local_170 + lVar4 & 0xffffffffffffffe0);
                local_c8[-1] = lVar4;
                local_1a8 = 0x37715f3143013755;
                local_1b0 = 0xafa452ffdad1d224;
              }
            }
            else if ((longlong)uVar2 < 0x74c14d6d8042a153) {
              if (uVar2 == 0x5e34ac7ac9ba0ce4) {
                local_148 = 1;
                local_150 = 0x3ffffffffffffffc;
                local_198 = 0;
                local_158 = 0x18;
                local_160 = 4;
                local_170 = 0x27;
                local_1a0 = 3;
                local_178 = -8;
                local_c0 = param_1 + 1;
                local_140 = (undefined8 *)param_1[1];
                local_190 = (undefined8 *)*param_1;
                local_1a8 = 0x494a20f8310cefe8;
                if ((ulonglong)((longlong)local_140 - (longlong)local_190 >> 3) < param_2) {
                  local_1a8 = 0x6f1146bb2646a1f;
                }
                local_1b0 = 0x9527e83b2904e02b;
                local_b8 = local_140;
                local_b0 = local_190;
              }
              else if (uVar2 == 0x61e7aae252434735) goto LAB_18010496d;
            }
            else if (uVar2 == 0x74c14d6d8042a153) {
              thunk_FUN_1801f42e0(local_d0,local_d8);
              local_1a8 = 0xbe50bf8d5bd1b76e;
              local_1b0 = 0xb9d1701cf0a8aff6;
            }
            else if (uVar2 == 0x7d28d019b8bec548) {
              local_118 = local_110 & local_150;
              local_88 = (undefined8 *)((local_118 << (local_1a0 & 0x3f)) + (longlong)local_180);
              local_68._8_4_ = (int)param_3;
              local_68._0_8_ = param_3;
              local_68._12_4_ = uVar5;
              local_1a8 = 0x10887f1572d06491;
              local_1b0 = 0x487643097cd5c0f7;
              local_100 = local_198;
            }
          }
          if (0x303fc2b66aad812d < (longlong)uVar2) break;
          if (uVar2 == 0x2bf7b5d767332749) {
            local_1a8 = 0x4c54c7c3468b67cd;
            if (0xfff < local_128) {
              local_1a8 = 0x23c41642b0b401f0;
            }
            local_1b0 = 0x38958aaec6c9c69e;
            local_d8 = local_128;
            local_d0 = local_130;
          }
          else if (uVar2 == 0x2d5ae83ec2e8c1f0) {
            local_138 = local_120 & local_150;
            local_a8 = (undefined8 *)((local_138 << (local_1a0 & 0x3f)) + (longlong)local_190);
            local_78._8_4_ = (int)param_3;
            local_78._0_8_ = param_3;
            local_78._12_4_ = uVar5;
            local_1a8 = 0xa6b5d70770501299;
            local_1b0 = 0xee0f5e3533ddf525;
            local_e0 = local_198;
          }
          else if (uVar2 == 0x2e1b75fe93d7d77a) {
            *local_e8 = param_3;
            local_e8 = local_e8 + 1;
            local_1a8 = 0x1ed0e63d25af390b;
            if (local_e8 == local_80) {
              local_1a8 = 0x3388ddfadc5a77d1;
            }
            local_1b0 = 0x30cb93c3b678ee71;
          }
        }
        if ((longlong)uVar2 < 0x48ba8932438de7bc) break;
        if (uVar2 == 0x48ba8932438de7bc) {
          lVar4 = local_e0 << (local_1a0 & 0x3f);
          puVar1 = (undefined8 *)((longlong)local_190 + lVar4);
          *puVar1 = local_78._0_8_;
          puVar1[1] = local_78._8_8_;
          puVar1 = (undefined8 *)((longlong)local_190 + lVar4 + 0x10);
          *puVar1 = local_78._0_8_;
          puVar1[1] = local_78._8_8_;
          local_e0 = local_e0 + local_160;
          local_1a8 = 0xdd74419bdeb7f8ba;
          if (local_e0 == local_138) {
            local_1a8 = 0x8c6c27eb0ab28769;
          }
          local_1b0 = 0x95cec8a99d3a1f06;
        }
        else if (uVar2 == 0x4efdbfc48bbfeed7) {
          local_1a8 = 0x67af53f9325c3187;
          if (local_110 == local_118) {
            local_1a8 = 0x3e9b66e308d4bb2b;
          }
          local_1b0 = 0x3dd828da62f6228b;
          local_108 = local_88;
        }
      }
      if (uVar2 != 0x3bfc00e4dde711e9) break;
      local_188 = param_2 << (local_1a0 & 0x3f);
      local_1a8 = 0x95343abeda90cac9;
      if (0x1ff < param_2) {
        local_1a8 = 0x4deb6c213fc3dbbf;
      }
      local_1b0 = 0x957a8ed8a36da642;
    }
  } while (uVar2 != 0x303fc2b66aad812e);
LAB_18010496d:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_180104980(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
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
  longlong *local_c8;
  int local_bc;
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;

  local_f0 = 0xa1c2242d39b7e02b;
  local_f8 = 0xbe32b3cda2f86fa8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar8 = local_f0 ^ 0x92d01044b4bdb89e;
            uVar5 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0x92d01044b4bdb89e;
            local_f0 = uVar8;
            if ((longlong)uVar5 < 0x1c1bf3739baf7bbe) break;
            if ((longlong)uVar5 < 0x40bdd6b85c921b4e) {
              if (uVar5 == 0x1c1bf3739baf7bbe) {
                local_e8 = local_80;
                local_d8 = (longlong *)*local_80;
                local_68 = local_80 + 2;
                lVar9 = *local_98;
                lVar6 = (((ulonglong)*(byte *)((longlong)local_80 + 0x13) ^
                         ((ulonglong)*(byte *)((longlong)local_80 + 0x12) ^
                         ((ulonglong)*(byte *)((longlong)local_80 + 0x11) ^
                         ((ulonglong)*(byte *)(local_80 + 2) ^ 0xcbf29ce484222325) * local_e0) * local_e0) * local_e0) *
                         local_e0 & *local_70) * 0x10;
                local_90 = (undefined8 *)(lVar9 + lVar6);
                local_c8 = (longlong *)(lVar9 + lVar6 + 8);
                local_60 = *(longlong **)(lVar9 + lVar6);
                local_f0 = 0x10a0eed32e7defb0;
                if (local_60 == local_d0) {
                  local_f0 = 0xaa99326c29a2575f;
                }
                local_f8 = 0x28ba3a1fb6d5c4f2;
              }
              else if (uVar5 == 0x1ff097e09b4f8f83) {
                local_a0 = 1;
                local_a8 = -1;
                local_e0 = 0x100000001b3;
                local_98 = (longlong *)(param_1 + 0x18);
                local_f0 = 0xfee3957cb683a19b;
                if (0x800000000000000 < param_2) {
                  local_f0 = 0x8b0f66ee942bb070;
                }
                local_f8 = 0x7625c654473de44d;
              }
              else if (uVar5 == 0x381ad4cc98a82b42) {
                local_88 = (longlong *)*local_c8;
                local_bc = (int)*local_68;
                local_f0 = 0xbb10921f3bea6bb1;
                if (local_bc == (int)local_88[2]) {
                  local_f0 = 0x1940eaadd2accd40;
                }
                local_f8 = 0xfbad44a7677870ff;
                local_48 = local_88;
              }
            }
            else if ((longlong)uVar5 < 0x63fbedf5e27dab5e) {
              if (uVar5 == 0x40bdd6b85c921b4e) {
                local_78 = local_88;
                local_f0 = 0xf3ee4b99bb48d5ee;
                if (local_60 == local_88) {
                  local_f0 = 0x4473ddec057c8734;
                }
                local_f8 = 0x1936ecfd23fb201e;
              }
              else if (uVar5 == 0x5d4531112687a72a) {
                puVar2 = (undefined8 *)local_e8[1];
                *puVar2 = local_d8;
                puVar4 = (undefined8 *)local_d8[1];
                *puVar4 = local_78;
                puVar1 = (undefined8 *)local_78[1];
                *puVar1 = local_e8;
                local_78[1] = (longlong)puVar4;
                local_d8[1] = (longlong)puVar2;
                local_e8[1] = (longlong)puVar1;
                *local_90 = local_e8;
                local_f0 = 0x1be8eca6919d46e2;
                local_f8 = 0x6cf4592f8a65f817;
              }
            }
            else if (uVar5 == 0x771cb5891bf8bef5) {
              local_f0 = 0x9a20ab8c6b5e793f;
              if (local_d8 == local_d0) {
                local_f0 = 0xe5c0b50a128ca9df;
              }
              local_f8 = 0x863b58fff0f10281;
              local_80 = local_d8;
            }
            else if (uVar5 == 0x63fbedf5e27dab5e) {
              return;
            }
          }
          if (-0x1527589b674c0a11 < (longlong)uVar5) break;
          if ((longlong)uVar5 < -0x616418d3de259365) {
            if (uVar5 == 0x822308739f7793ad) {
              *local_90 = local_e8;
              *local_c8 = (longlong)local_e8;
              local_f0 = 0xd8c61f090b5212f0;
              local_f8 = 0xafdaaa8010aaac05;
            }
            else if (uVar5 == 0x88c65328f1be45d6) {
              uVar5 = local_a8 + param_2 | local_a0;
              lVar9 = 0x3f;
              if (uVar5 != 0) {
                for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              bVar7 = 0x40 - ((byte)lVar9 ^ 0x3f);
              lVar9 = local_a0 << (bVar7 & 0x3f);
              local_d0 = *(longlong **)(param_1 + 8);
              FUN_180103c80(local_98,2L << (bVar7 & 0x3f));
              local_70 = (ulonglong *)(param_1 + 0x30);
              *(longlong *)(param_1 + 0x30) = local_a8 + lVar9;
              *(longlong *)(param_1 + 0x38) = lVar9;
              local_80 = (longlong *)**(longlong **)(param_1 + 8);
              local_f0 = 0x9c59003316fc8d90;
              if (local_80 == local_d0) {
                local_f0 = 0xe3b91eb56f2e5d70;
              }
              local_f8 = 0x8042f3408d53f62e;
            }
          }
          else if (uVar5 == 0x9e9be72c21da6c9b) {
            lVar9 = *local_50;
            puVar2 = (undefined8 *)local_e8[1];
            *puVar2 = local_d8;
            plVar3 = (longlong *)local_d8[1];
            *plVar3 = lVar9;
            puVar4 = *(undefined8 **)(lVar9 + 8);
            *puVar4 = local_e8;
            *(longlong **)(lVar9 + 8) = plVar3;
            local_d8[1] = (longlong)puVar2;
            local_e8[1] = (longlong)puVar4;
            local_f0 = 0x4876a2f466734215;
            local_f8 = 0x3f6a177d7d8bfce0;
          }
          else if (uVar5 == 0xe2edae0ab5d4bdbf) {
            local_58 = *local_48;
            local_f0 = 0x6a3bd7b661dfb1fd;
            if ((longlong *)local_58 == local_e8) {
              local_f0 = 0x91c58598175aa199;
            }
            local_f8 = 0x6f67205ee8f0c8bb;
          }
        }
        if ((longlong)uVar5 < -0x15d5a39005596de) break;
        if (uVar5 == 0xfea2a5c6ffaa6922) {
          *local_c8 = (longlong)local_e8;
          local_f0 = 0x9c940b062e3abf58;
          local_f8 = 0xeb88be8f35c201ad;
        }
        else if (uVar5 == 0x55cf7e8892f7946) {
          puVar2 = (undefined8 *)local_e8[1];
          *puVar2 = local_d8;
          plVar3 = (longlong *)local_d8[1];
          *plVar3 = local_58;
          puVar4 = *(undefined8 **)(local_58 + 8);
          *puVar4 = local_e8;
          *(longlong **)(local_58 + 8) = plVar3;
          local_d8[1] = (longlong)puVar2;
          local_e8[1] = (longlong)puVar4;
          local_f0 = 0x6efd436745429c31;
          local_f8 = 0x905fe6a1bae8f513;
        }
      }
      if (uVar5 != 0xead8a76498b3f5f0) break;
      local_88 = (longlong *)local_78[1];
      local_f0 = 0x1092f117e9d93ea1;
      if (local_bc == (int)local_88[2]) {
        local_f0 = 0xceb4c08394914974;
      }
      local_f8 = 0x502f27afb54b25ef;
      local_50 = local_88;
    }
  } while (uVar5 != 0xfd2aa0bad316543d);
  FUN_180105a77(&DAT_1802a4494,&DAT_18027e624,0x18,0x1a,&DAT_1802a44b0);
  FUN_1801d7524(&DAT_1802a4494);
}



undefined8 * FUN_180105160(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_130;
  ulonglong local_128;
  char local_119;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  byte local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  ulonglong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;

  local_128 = 0x330505b3a239192;
  local_130 = 0x617d8a78ab18477;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_128 ^ 0x37de7465e85fc55b;
              uVar1 = local_128 ^ local_130;
              local_130 = local_130 ^ 0x37de7465e85fc55b;
              local_128 = uVar2;
              if (0x19a6d90631d0adc4 < (longlong)uVar1) break;
              if ((longlong)uVar1 < -0x3d743a2a93f230d3) {
                if ((longlong)uVar1 < -0x6f637cc4ddba1199) {
                  if (uVar1 == 0x830eb7506014cb5c) {
                    *local_c0 = local_d0;
                    local_128 = 0x71963825fc5a5494;
                    local_130 = 0x29ea6b9619388ca1;
                    local_98 = local_d0;
                  }
                  else if (uVar1 == 0x84f6c25daa12b700) {
                    *local_c0 = local_f0;
                    local_128 = 0x33e9bbcfc99e9a92;
                    local_130 = 0x64232e556f2ed607;
                    local_110 = local_f0;
                  }
                }
                else if (uVar1 == 0x909c833b2245ee67) {
                  lVar3 = (((ulonglong)*(byte *)((longlong)local_90 + 0x13) ^
                           ((ulonglong)*(byte *)((longlong)local_90 + 0x12) ^
                           ((ulonglong)*(byte *)((longlong)local_90 + 0x11) ^
                           (*(byte *)(local_90 + 2) ^ local_e0) * local_118) * local_118) * local_118) * local_118 &
                          *local_68) << (local_d8 & 0x3f);
                  local_a8 = (undefined8 *)(local_70 + lVar3);
                  local_58 = (undefined8 *)(local_70 + lVar3 + 8);
                  local_50 = *(undefined8 **)(local_70 + 8 + lVar3);
                  local_128 = 0x277cb6311aeec53f;
                  local_130 = 0x4909255a8646b11b;
                  local_80 = local_90;
                }
                else if (uVar1 == 0xb9630c87fdb5922c) {
                  *local_a8 = local_d0;
                  *local_58 = local_d0;
                  local_128 = 0x73fbab83f2efd7a7;
                  if (local_e8 == param_3) {
                    local_128 = 0xb4adbd22761a7555;
                  }
                  local_130 = 0xe36728b8d0aa39c0;
                  local_110 = local_e8;
                  local_90 = local_e8;
                }
              }
              else if ((longlong)uVar1 < 0x52788fcb09215e5) {
                if (uVar1 == 0xc28bc5d56c0dcf2d) {
                  *local_a8 = local_e8;
                  local_128 = 0x5e0cfc489b8231c9;
                  local_130 = 0x9c669d23d327d5c;
                  local_110 = local_e8;
                }
                else if (uVar1 == 0xca2f782e44eab1be) {
                  local_f0 = (undefined8 *)*local_88;
                  local_128 = 0x1a5d562fc152afbf;
                  if (local_88 == local_b8) {
                    local_128 = 0x6739df47d080bea3;
                  }
                  thunk_FUN_1801f42e0(local_88,local_100);
                  *local_f8 = *local_f8 + local_108;
                  local_130 = 0x54ec413f7488fc2b;
                  local_78 = local_f0;
                }
              }
              else if (uVar1 == 0x52788fcb09215e5) {
                local_100 = 0x20;
                local_108 = -1;
                local_118 = 0x100000001b3;
                local_d8 = 4;
                local_e0 = 0xcbf29ce484222325;
                local_128 = 0xaac7a217f12c7656;
                if (param_2 == param_3) {
                  local_128 = 0x977342f47be9812d;
                }
                local_130 = 0xbe11eb55d2d9bc91;
              }
              else if (uVar1 == 0x14d6494223f5cac7) {
                local_d0 = *(undefined8 **)(param_1 + 8);
                local_70 = *(longlong *)(param_1 + 0x18);
                local_c8 = (undefined8 *)param_2[1];
                local_68 = (ulonglong *)(param_1 + 0x30);
                lVar3 = (((ulonglong)*(byte *)((longlong)param_2 + 0x13) ^
                         ((ulonglong)*(byte *)((longlong)param_2 + 0x12) ^
                         ((ulonglong)*(byte *)((longlong)param_2 + 0x11) ^
                         (*(byte *)(param_2 + 2) ^ local_e0) * local_118) * local_118) * local_118) * local_118 &
                        *(ulonglong *)(param_1 + 0x30)) << (local_d8 & 0x3f);
                local_c0 = (undefined8 *)(local_70 + lVar3);
                local_60 = (undefined8 *)(local_70 + lVar3 + 8);
                local_119 = *(undefined8 **)(local_70 + lVar3) == param_2;
                local_f8 = (longlong *)(param_1 + 0x10);
                local_b8 = *(undefined8 **)(local_70 + 8 + lVar3);
                local_128 = 0x77498840696c7bca;
                if ((bool)local_119) {
                  local_128 = 0x945cfb4d34645de0;
                }
                local_130 = 0x5e738363708eec5e;
                local_a0 = param_2;
                local_88 = param_2;
              }
            }
            if ((longlong)uVar1 < 0x4eb11710b5da5394) break;
            if ((longlong)uVar1 < 0x587c53b3e562d835) {
              if (uVar1 == 0x4eb11710b5da5394) {
                local_88 = local_f0;
                local_128 = 0xcd151236496892a1;
                if (local_f0 == param_3) {
                  local_128 = 0x83cca845a790941f;
                }
                local_130 = 0x73a6a180d82231f;
              }
              else if (uVar1 == 0x57ca959aa6b04c95) {
                *local_c8 = local_110;
                local_110[1] = local_c8;
                local_128 = 0x20eed9eec9b6a295;
                local_130 = 0x98c704f60869f29;
              }
            }
            else if (uVar1 == 0x587c53b3e562d835) {
              *local_60 = local_98;
              local_128 = 0x52cb84748d730457;
              if (local_48 == param_3) {
                local_128 = 0x959d92d50986a6a5;
              }
              local_130 = 0xc257074faf36ea30;
              local_110 = local_48;
              local_90 = local_48;
            }
            else if (uVar1 == 0x6e75936b9ca87424) {
              local_e8 = (undefined8 *)*local_80;
              local_128 = 0xa40e1e19f4054611;
              if (local_80 == local_50) {
                local_128 = 0x7410cb3e03fb58b;
              }
              thunk_FUN_1801f42e0(local_80,local_100);
              *local_f8 = *local_f8 + local_108;
              local_130 = 0xbe2200341d8a27a7;
            }
          }
          if (0x293a0b2319e29793 < (longlong)uVar1) break;
          if (uVar1 == 0x19a6d90631d0adc5) {
            local_110 = local_b0;
            local_128 = 0x2c2126ae9f0a95f1;
            if (local_b0 == param_3) {
              local_128 = 0x52d1b81720584ef0;
            }
            local_130 = 0x51b2d8d86e80265;
            local_a0 = local_110;
          }
          else if (uVar1 == 0x1a2c1e2de98f61b6) {
            local_128 = 0x5d8470c517bccb79;
            if (local_e8 == param_3) {
              local_128 = 0xf17a267be7197070;
            }
            local_130 = 0x33f1e3ae8b14bf5d;
            local_80 = local_e8;
          }
        }
        if (uVar1 != 0x293a0b2319e29794) break;
        local_b0 = (undefined8 *)*local_a0;
        local_128 = 0x668eeea161f7b4d0;
        if (local_a0 == local_b8) {
          local_128 = 0x4cfda9dff42f5b9d;
        }
        thunk_FUN_1801f42e0(local_a0,local_100);
        *local_f8 = *local_f8 + local_108;
        local_130 = 0x7f2837a750271915;
        local_78 = local_b0;
      }
      if (uVar1 != 0x33d59e78a4084288) break;
      local_48 = local_78;
      local_128 = 0xcb2fd36000ec9644;
      if (local_119 != '\0') {
        local_128 = 0x105d3783859a852d;
      }
      local_130 = 0x935380d3e58e4e71;
      local_98 = local_c8;
    }
  } while (uVar1 != 0x2962a9a1a9303dbc);
  return param_3;
}



void FUN_180105a00(void)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;

  local_8 = DAT_1802a0400 ^ (ulonglong)auStack_38;
  atexit(FUN_1800fe370);
  local_10 = 0;
  FUN_180103a80(&DAT_1802a42a8,&local_10,&local_9);
  atexit(FUN_1800fe680);
  if (DAT_1802a0400 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
}



void FUN_180105a77(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x1a7222a8793a788f;
  local_68 = 0x1e5e052684a8e6f4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xb5c54696d63201d8;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xb5c54696d63201d8;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0x26ecc840a5387523) break;
          if (uVar1 == 0xd91337bf5ac78add) {
            *param_5 = 1;
            local_60 = 0x143cd1bd3f18e843;
            local_68 = 0xae5cb50c8bbdda16;
          }
          else if (uVar1 == 0xee06a5c92ddf603e) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x4db8c16e4fe4585e;
            local_68 = 0xe0e0a7dc7cd59ab5;
          }
          else if (uVar1 == 0x42c278efd929e7b) {
            local_60 = 0x7922267d02b23935;
            if (*param_5 == 1) {
              local_60 = 0x58375654f68fda5;
            }
            local_68 = 0xbfe311d4fbcdcff0;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if (-0x459f9b4e4b5acdac < (longlong)uVar1) break;
        if (uVar1 == 0xa0fdd46b6afe9c22) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x630803fbba66ce;
          local_68 = 0xad3b6eb1c88ba425;
        }
        else if (uVar1 == 0xad5866b23331c2eb) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0x5179ded1b678265a;
          if (local_54 == param_4) {
            local_60 = 0x4eabdec715c05a42;
          }
          local_68 = 0x97b8e9784f07d09f;
        }
      }
      if (uVar1 != 0xc6c137a9f97ff6c5) break;
      local_69 = local_6b;
      local_4c = local_54;
      local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
      local_6c = *(char *)(local_48 + (int)local_54);
      local_60 = 0xcdc101e9626bdec;
      if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
        local_60 = 0x422761bcd10741f0;
      }
      local_68 = 0xe2dab5d7bbf9ddd2;
    }
  } while (uVar1 != 0xba6064b1b4a53255);
  return;
}



void FUN_180105d30(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xcb2305073d43b9ad;
  local_50 = 0x6ce120b541c2c0ac;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x70a28192e3f14c28;
        if (uVar1 != 0xa7c225b27c817901) break;
        local_48 = 0xb994f8121dbafc5;
        if (DAT_1802a4630 == 1) {
          local_48 = 0x5abfb7b071d0c3;
        }
        local_50 = 0x7614a3f3848ddaf4;
      }
      if (uVar1 != 0x7d8dec72a5567531) break;
      FUN_180105a77(&DAT_1802a4370,&DAT_18027e0ac,0x1f,5,&DAT_1802a4378);
      _DAT_1802a44b8 = &DAT_1802a4370;
      FUN_180105a77(&DAT_1802a437c,&DAT_18027e0e4,0x19,8,&DAT_1802a4384);
      _DAT_1802a44c0 = &DAT_1802a437c;
      FUN_180105a77(&DAT_1802a4388,&DAT_18027e118,0x1f,8,&DAT_1802a4390);
      _DAT_1802a44c8 = &DAT_1802a4388;
      FUN_180105a77(&DAT_1802a4394,&DAT_18027e152,0x1b,8,&DAT_1802a439c);
      _DAT_1802a44d8 = &DAT_1802a4394;
      FUN_180105a77(&DAT_1802a43cc,&DAT_18027e254,0x16,10,&DAT_1802a43d8);
      _DAT_1802a44f8 = &DAT_1802a43cc;
      FUN_180105a77(&DAT_1802a43ac,&DAT_18027e1ba,0x10,4,&DAT_1802a43b0);
      _DAT_1802a4500 = &DAT_1802a43ac;
      FUN_180105a77(&DAT_1802a43c0,&DAT_18027e21b,0x18,6,&DAT_1802a43c8);
      _DAT_1802a4520 = &DAT_1802a43c0;
      FUN_180105a77(&DAT_1802a43b4,&DAT_18027e1e7,0x13,7,&DAT_1802a43bc);
      _DAT_1802a4590 = &DAT_1802a43b4;
      FUN_180105a77(&DAT_1802a43a0,&DAT_18027e18c,0x13,6,&DAT_1802a43a8);
      _DAT_1802a45b8 = &DAT_1802a43a0;
      FUN_180105a77(&DAT_1802a4408,&DAT_18027e35d,0x1f,8,&DAT_1802a4410);
      _DAT_1802a45c0 = &DAT_1802a4408;
      FUN_180105a77(&DAT_1802a4414,&DAT_18027e3a2,0x16,10,&DAT_1802a4420);
      _DAT_1802a45c8 = &DAT_1802a4414;
      FUN_180105a77(&DAT_1802a4400,&DAT_18027e31e,0x1f,4,&DAT_1802a4404);
      _DAT_1802a45d0 = &DAT_1802a4400;
      FUN_180105a77(&DAT_1802a43f4,&DAT_18027e2e4,0x17,5,&DAT_1802a43fc);
      _DAT_1802a45d8 = &DAT_1802a43f4;
      FUN_180105a77(&DAT_1802a4438,&DAT_18027e43e,0x1a,5,&DAT_1802a4440);
      _DAT_1802a45e0 = &DAT_1802a4438;
      FUN_180105a77(&DAT_1802a4424,&DAT_18027e3e0,0x1a,3,&DAT_1802a4428);
      _DAT_1802a45e8 = &DAT_1802a4424;
      FUN_180105a77(&DAT_1802a4444,&DAT_18027e478,0x19,6,&DAT_1802a444c);
      _DAT_1802a45f0 = &DAT_1802a4444;
      FUN_180105a77(&DAT_1802a442c,&DAT_18027e411,0x15,5,&DAT_1802a4434);
      _DAT_1802a45f8 = &DAT_1802a442c;
      FUN_180105a77(&DAT_1802a43e8,&DAT_18027e2b4,0x18,7,&DAT_1802a43f0);
      _DAT_1802a4620 = &DAT_1802a43e8;
      FUN_180105a77(&DAT_1802a43dc,&DAT_18027e287,0x14,7,&DAT_1802a43e4);
      _DAT_1802a4628 = &DAT_1802a43dc;
      DAT_1802a4630 = 1;
      local_48 = 0x881d95018d183aaf;
      local_50 = 0xfe538945b9e43098;
    }
    local_48 = local_48 ^ 0x70a28192e3f14c28;
  } while (uVar1 != 0x764e1c4434fc0a37);
  return;
}



undefined * FUN_180106230(uint param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  undefined *local_48;

  local_50 = 0x48ea836acac7a5e;
  local_58 = 0x3d3d4d36dd2d3592;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xc8eface5053c6bea;
        if (uVar1 != 0x92316c1833f977aa) break;
        FUN_180111150(&DAT_1802a46a0);
        local_48 = *(undefined **)(&DAT_1802a46a0 + (ulonglong)param_1 * 8);
        local_50 = 0x79146acdf937a7ed;
        local_58 = 0x628e5d242cc8ce59;
      }
      if (uVar1 != 0x39b3e50071814fcc) break;
      FUN_180110e90(&DAT_1802a4670,&DAT_18027e75c,0x12,8,&DAT_1802a4678);
      local_50 = 0xbb60938acbc7516d;
      if (param_1 < 4) {
        local_50 = 0x32cbc87b2dc14f73;
      }
      local_58 = 0xa0faa4631e3838d9;
      local_48 = &DAT_1802a4670;
    }
    local_50 = local_50 ^ 0xc8eface5053c6bea;
  } while (uVar1 != 0x1b9a37e9d5ff69b4);
  return local_48;
}



undefined8 * FUN_1801063a0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;

  *param_1 = &PTR_FUN_180217440;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = lVar2;
  lVar2 = param_2[3];
  param_1[3] = param_2[2];
  param_1[4] = lVar2;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar2 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  lVar9 = param_3[2];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
  lVar7 = param_3[3];
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(int *)(param_1 + 5) = (int)*param_3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(int *)(param_1 + 6) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(int *)(param_1 + 7) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  *(int *)(param_1 + 8) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(param_1 + 9) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_180110e90(&DAT_1802a4694,&DAT_18027e8b9,0x16,8,&DAT_1802a469c);
  FUN_180110e90(&DAT_1802a467c,&DAT_18027e86e,0x1b,0x14,&DAT_1802a4690);
  uVar8 = FUN_180106690(param_1,&DAT_1802a4694,&DAT_1802a467c,&stack0x00000028);
  param_1[0xd] = uVar8;
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar10 = uVar1 + 1;
    lVar9 = lVar2;
    if (0xfff < uVar10) {
      lVar9 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar9)) goto LAB_18010661d;
      uVar10 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar9,uVar10);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[3];
  if (0xf < uVar1) {
    lVar2 = *param_3;
    uVar10 = uVar1 + 1;
    lVar9 = lVar2;
    if (0xfff < uVar10) {
      lVar9 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar9)) {
LAB_18010661d:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar9,uVar10);
  }
  return param_1;
}



void Unwind_180106640(undefined8 param_1,longlong param_2)

{
  FUN_180106780(*(undefined8 *)(param_2 + 0x40));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x38));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x30));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x70));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x78));
  return;
}



undefined8 * FUN_180106690(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  FUN_180109220(&local_30);
  puVar2 = local_30;
  local_30 = (undefined8 *)0x0;
  local_38 = puVar2;
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 == *(undefined8 **)(param_1 + 0x60)) {
    FUN_18010a500(param_1 + 0x50,puVar1,&local_38);
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)(local_38,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 8;
  }
  puVar1 = local_30;
  if (local_30 != (undefined8 *)0x0) {
    FUN_18010eba0(local_30);
    thunk_FUN_1801f42e0(puVar1,0x98);
  }
  return puVar2;
}



void Unwind_180106740(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x34));
  }
  FUN_180109520(param_2 + 0x28);
  return;
}



void FUN_180106780(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  ulonglong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;

  local_c8 = 0x340dca0b0f1eb5cf;
  local_d0 = 0x3edcbe51e5e1637;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_c8 ^ 0xc26ec4561edccfd1;
            uVar1 = local_c8 ^ local_d0;
            local_d0 = local_d0 ^ 0xc26ec4561edccfd1;
            local_c8 = uVar2;
            if (0x21f9b47f9bd0bc29 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x2b94111628021181) {
              if (uVar1 == 0xa8b7cfe74ebf20b5) {
                (**(code **)*local_70)(local_70,1);
                local_c8 = 0xfae989d734f1d2b2;
                local_d0 = 0x9d0fc5b0706c9800;
              }
              else if (uVar1 == 0xd18a9ff5df02e007) {
                local_98 = param_1 + 2;
                local_90 = (undefined8 *)param_1[1];
                local_c8 = 0xaa7985f441be819;
                if (local_a0 == local_90) {
                  local_c8 = 0x3538641ef998e63a;
                }
                local_d0 = 0xde547180fea0ac5a;
                local_c0 = local_a0;
                local_a8 = local_a0;
              }
            }
            else if (uVar1 == 0xd46beee9d7fdee7f) {
              local_b8 = local_80 + 0x27;
              local_c8 = 0xe9db0018fe003d0d;
              local_d0 = 0xcf8312fe16262216;
              local_b0 = local_78;
            }
            else if (uVar1 == 0xd4f3e9dfbabb4443) {
              local_60 = local_a8;
              local_70 = (undefined8 *)*local_a8;
              local_c8 = 0x31292c59ff989077;
              if (local_70 == (undefined8 *)0x0) {
                local_c8 = 0xfe78afd9f5bafa70;
              }
              local_d0 = 0x999ee3beb127b0c2;
            }
            else if (uVar1 == 0xeb6c159e07384a60) {
              local_b0 = local_c0;
              local_b8 = *local_98 - (longlong)local_c0;
              local_c8 = 0xa785319364b095d5;
              if (0xfff < local_b8) {
                local_c8 = 0xb588dda581bfcf15;
              }
              local_d0 = 0x81dd23758c968ace;
              local_88 = local_b0;
              local_80 = local_b8;
              local_68 = local_b0;
            }
          }
          if (0x37e001ee1140a3f7 < (longlong)uVar1) break;
          if (uVar1 == 0x21f9b47f9bd0bc2a) {
            local_c0 = (undefined8 *)*param_1;
            local_c8 = 0xb36757ca267ff49b;
            local_d0 = 0x580b42542147befb;
          }
          else if (uVar1 == 0x265812e6e8261f1b) {
            thunk_FUN_1801f42e0(local_b0,local_b8);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_c8 = 0x3a828de21b96183;
            local_d0 = 0x4f3f1da6c7dde273;
          }
          else if (uVar1 == 0x3455fed00d2945db) {
            local_78 = (undefined8 *)local_68[-1];
            local_c8 = 0x576b3f7de7b15870;
            if ((ulonglong)((longlong)local_88 + (-8 - (longlong)local_78)) < 0x20) {
              local_c8 = 0xbd7770442c6eb3f6;
            }
            local_d0 = 0x691c9eadfb935d89;
          }
        }
        if (0x4c973578e66483ef < (longlong)uVar1) break;
        if (uVar1 == 0x37e001ee1140a3f8) {
          local_a0 = (undefined8 *)*param_1;
          local_c8 = 0xe2744906c9f28a7e;
          if (local_a0 == (undefined8 *)0x0) {
            local_c8 = 0x7f69e38bf094e989;
          }
          local_d0 = 0x33fed6f316f06a79;
        }
        else if (uVar1 == 0x3e77a1d01c2205f9) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0x67e64c67449d4ab2) break;
      local_a8 = local_60 + 1;
      local_c8 = 0xd8dd3bc466373772;
      if (local_a8 == local_90) {
        local_c8 = 0x2dd76664475ccf1b;
      }
      local_d0 = 0xc2ed21bdc8c7331;
    }
  } while (uVar1 != 0x4c973578e66483f0);
  return;
}



void FUN_180106c90(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;

  *param_1 = &PTR_FUN_180217440;
  uVar3 = FUN_1800ba260();
  FUN_1800bb310(uVar3,param_1);
  plVar7 = (longlong *)param_1[10];
  if (plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[0xb];
    if (plVar7 != plVar8) {
      do {
        puVar1 = (undefined8 *)*plVar7;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar8);
      plVar7 = (longlong *)param_1[10];
    }
    uVar5 = param_1[0xc] - (longlong)plVar7;
    plVar8 = plVar7;
    if (0xfff < uVar5) {
      plVar8 = (longlong *)plVar7[-1];
      if (0x1f < (ulonglong)((longlong)plVar7 + (-8 - (longlong)plVar8))) goto LAB_180106ec8;
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1801f42e0(plVar8,uVar5);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  uVar5 = param_1[8];
  if (0xf < uVar5) {
    lVar2 = param_1[5];
    uVar6 = uVar5 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar6) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_180106ec8;
      uVar6 = uVar5 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar6);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  uVar5 = param_1[4];
  if (0xf < uVar5) {
    lVar2 = param_1[1];
    uVar6 = uVar5 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar6) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_180106ec8:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar5 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar6);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void Unwind_180106ef0(void)

{
  Unwind_1801dd394();
}



ulonglong * FUN_180106f10(longlong *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ***local_100 [2];
  undefined8 **local_f0;
  undefined8 **local_e8;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 **local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 **local_a0;
  undefined8 ***local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined8 **ppuStack_80;
  longlong local_78;
  uint local_6c;
  undefined8 **local_68;
  longlong local_60;
  undefined8 **local_58;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_49 = 0;
  local_e0 = 0x27;
  local_d8 = 0xfff;
  local_d0 = 0xfffffffffffffffc;
  local_68 = (undefined8 ***)0x0;
  local_78 = 0x28;
  local_c8 = (undefined8 ***)0xffe;
  local_c0 = 0xffffffffffffffe0;
  local_b8 = 0x20;
  local_6c = 0;
  local_58 = (undefined8 ***)0xf;
  local_60 = 1;
  local_b0 = -8;
  (**(code **)(*param_1 + 0x10))(param_1,local_100);
  if (local_f0 == local_68) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    uVar14 = param_1[3];
    if (local_58 < (undefined8 ***)param_1[4]) {
      param_1 = (longlong *)param_1[1];
    }
    else {
      param_1 = param_1 + 1;
    }
    if ((longlong)uVar14 < (longlong)local_68) {
      FUN_180002ac0();
    }
    if (uVar14 < 0x10) {
      param_2[2] = uVar14;
      param_2[3] = (ulonglong)local_58;
      uVar1 = *(undefined4 *)((longlong)param_1 + 4);
      lVar10 = param_1[1];
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      *(int *)param_2 = (int)*param_1;
      *(undefined4 *)((longlong)param_2 + 4) = uVar1;
      *(int *)(param_2 + 1) = (int)lVar10;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    }
    else {
      pppuVar9 = (undefined8 ***)((ulonglong)local_58 | uVar14);
      pppuVar8 = (undefined8 ***)0x16;
      if ((undefined8 ***)0x16 < pppuVar9) {
        pppuVar8 = pppuVar9;
      }
      if (local_c8 < pppuVar9) {
        lVar10 = FUN_1801d61c8(local_78 + (longlong)pppuVar8);
        uVar12 = local_e0 + lVar10 & local_c0;
        *(longlong *)(uVar12 - 8) = lVar10;
      }
      else {
        uVar12 = FUN_1801d61c8(local_60 + (longlong)pppuVar8);
      }
      *param_2 = uVar12;
      param_2[2] = uVar14;
      param_2[3] = (ulonglong)pppuVar8;
      FUN_1802079d0(uVar12,param_1,uVar14 + local_60);
    }
  }
  else {
    uVar14 = param_1[3];
    if ((local_d0 & uVar14) == 0x7ffffffffffffffc) {
      FUN_180002ac0();
    }
    plVar13 = (longlong *)param_1[1];
    pppuVar8 = (undefined8 ***)param_1[4];
    local_98 = (undefined8 ****)0x0;
    uStack_90 = 0;
    pppuVar9 = (undefined8 ***)(uVar14 + 4);
    if (local_58 < pppuVar9) {
      pppuVar16 = (undefined8 ***)0x7fffffffffffffff;
      local_a8 = plVar13;
      local_a0 = pppuVar8;
      if ((longlong)local_d0 <= (longlong)uVar14) {
        pppuVar8 = (undefined8 ***)((ulonglong)local_58 | (ulonglong)pppuVar9);
        pppuVar16 = (undefined8 ***)0x16;
        if ((undefined8 ***)0x16 < pppuVar8) {
          pppuVar16 = pppuVar8;
        }
        if (pppuVar8 <= local_c8) {
          ppppuVar17 = (undefined8 ****)FUN_1801d61c8(local_60 + (longlong)pppuVar16);
          plVar13 = local_a8;
          pppuVar8 = (undefined8 ***)local_a0;
          local_98 = ppppuVar17;
          goto LAB_1801071f9;
        }
      }
      pppuVar8 = (undefined8 ***)FUN_1801d61c8(local_78 + (longlong)pppuVar16);
      ppppuVar17 = (undefined8 ****)(local_e0 + (longlong)pppuVar8 & local_c0);
      ppppuVar17[-1] = pppuVar8;
      plVar13 = local_a8;
      pppuVar8 = (undefined8 ***)local_a0;
      local_98 = ppppuVar17;
    }
    else {
      ppppuVar17 = &local_98;
      pppuVar16 = (undefined8 ***)local_58;
    }
LAB_1801071f9:
    plVar15 = param_1 + 1;
    if (local_58 < pppuVar8) {
      plVar15 = plVar13;
    }
    local_88 = pppuVar9;
    ppuStack_80 = pppuVar16;
    FUN_1802079d0(ppppuVar17,plVar15,uVar14);
    *(undefined4 *)((longlong)ppppuVar17 + uVar14) = 0x37a7c220;
    *(undefined1 *)((longlong)ppppuVar17 + (longlong)pppuVar9) = local_49;
    ppppuVar17 = local_100;
    if (local_58 < local_e8) {
      ppppuVar17 = (undefined8 ****)local_100[0];
    }
    if ((undefined8 ***)((longlong)ppuStack_80 - (longlong)local_88) < local_f0) {
      ppppuVar11 = (undefined8 ****)FUN_180066dd0(&local_98,local_f0,local_f0,ppppuVar17,local_f0);
    }
    else {
      pppuVar8 = (undefined8 ***)((longlong)local_88 + (longlong)local_f0);
      ppppuVar11 = &local_98;
      ppppuVar18 = ppppuVar11;
      if (local_58 < ppuStack_80) {
        ppppuVar18 = (undefined8 ****)local_98;
      }
      lVar10 = (longlong)local_88 + (longlong)ppppuVar18;
      local_88 = pppuVar8;
      FUN_1802079d0(lVar10,ppppuVar17);
      *(undefined1 *)((longlong)ppppuVar18 + (longlong)pppuVar8) = local_49;
    }
    uVar1 = *(undefined4 *)ppppuVar11;
    uVar2 = *(undefined4 *)((longlong)ppppuVar11 + 4);
    uVar3 = *(undefined4 *)(ppppuVar11 + 1);
    uVar4 = *(undefined4 *)((longlong)ppppuVar11 + 0xc);
    uVar5 = *(undefined4 *)((longlong)ppppuVar11 + 0x14);
    uVar6 = *(undefined4 *)(ppppuVar11 + 3);
    uVar7 = *(undefined4 *)((longlong)ppppuVar11 + 0x1c);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(ppppuVar11 + 2);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    *(undefined4 *)(param_2 + 3) = uVar6;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar7;
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    ppppuVar11[2] = (undefined8 ***)local_68;
    ppppuVar11[3] = (undefined8 ***)local_58;
    *(undefined1 *)ppppuVar11 = local_49;
    if (local_58 < ppuStack_80) {
      uVar14 = local_60 + (longlong)ppuStack_80;
      ppppuVar17 = (undefined8 ****)local_98;
      if (local_d8 < uVar14) {
        ppppuVar17 = (undefined8 ****)local_98[-1];
        if (local_b8 <= (ulonglong)((longlong)local_98 + (local_b0 - (longlong)ppppuVar17))) goto LAB_18010735a;
        uVar14 = (longlong)ppuStack_80 + local_78;
      }
      thunk_FUN_1801f42e0(ppppuVar17,uVar14);
    }
  }
  if (local_58 < local_e8) {
    uVar14 = local_60 + (longlong)local_e8;
    ppppuVar17 = (undefined8 ****)local_100[0];
    if (local_d8 < uVar14) {
      ppppuVar17 = (undefined8 ****)local_100[0][-1];
      if (local_b8 <= (ulonglong)((longlong)local_100[0] + (local_b0 - (longlong)ppppuVar17))) {
LAB_18010735a:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_6c,(uintptr_t)local_68);
      }
      uVar14 = (longlong)local_e8 + local_78;
    }
    thunk_FUN_1801f42e0(ppppuVar17,uVar14);
  }
  return param_2;
}



void Unwind_180107380(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1801073c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x28);
  return;
}



void FUN_180107400(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char local_79;
  ulonglong local_78;
  ulonglong local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  char local_48;

  local_70 = 0x676cf45973d29dc5;
  local_78 = 0x878a6d6a5d2a5937;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_70 ^ local_78;
          local_78 = local_78 ^ 0x6814f578cc0dc74d;
          if ((longlong)uVar1 < 0x190394d4a446a6e7) break;
          if (uVar1 == 0x190394d4a446a6e7) {
            FUN_1800bc160(local_60,DAT_1802a4634,local_58);
            local_70 = 0xc9dafe61a35aae71;
            local_78 = 0x701ec596030cf77;
          }
          else if (uVar1 == 0x3f6bd10cbe0938cf) {
            FUN_1801d62d8(&DAT_1802a4638);
            local_70 = 0xdcfdee9707b09053;
            if (DAT_1802a4638 == -1) {
              local_70 = 0xb8b2ee612b4ef857;
            }
            local_78 = 0xc5fe7a43a3f636b4;
          }
          else {
            local_70 = local_70 ^ 0x6814f578cc0dc74d;
            if (uVar1 == 0x7d4c942288b8cee3) {
              DAT_1802a4634 = DAT_1802a3dec;
              DAT_1802a3dec = DAT_1802a3dec + 1;
              _Init_thread_footer(&DAT_1802a4638);
              local_70 = 0x68e5f412cf8a5bb5;
              local_78 = 0x71e660c66bccfd52;
            }
          }
        }
        if (uVar1 != 0xe0e699332ef8c4f2) break;
        local_68 = (char *)((longlong)param_1 + 0x4c);
        local_70 = 0xf311ca3af14f790c;
        if (*(char *)((longlong)param_1 + 0x4c) == param_2) {
          local_70 = 0x2b2da73b63ad319d;
        }
        local_78 = 0xe5f6b503a0c7509b;
        local_79 = param_2;
      }
      if (uVar1 != 0x16e77f3951882997) break;
      *local_68 = local_79;
      lVar2 = 0x38;
      if (param_2 != '\0') {
        lVar2 = 0x30;
      }
      (**(code **)(*param_1 + lVar2))(param_1);
      local_58[0] = 0;
      local_48 = local_79;
      local_50 = param_1;
      local_60 = FUN_1800ba260();
      local_70 = 0x3240460fd8e2b3de;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
          DAT_1802a4638) {
        local_70 = 0x142803d7c2ad2df6;
      }
      local_78 = 0x2b43d2db7ca41539;
    }
    local_70 = local_70 ^ 0x6814f578cc0dc74d;
  } while (uVar1 != 0xcedb1238c36a6106);
  return;
}



longlong FUN_1801076d0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Buf2;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  size_t local_a0;
  longlong *local_98;
  longlong *local_90;
  size_t local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;

  local_b0 = 0x243b536813091f3c;
  local_b8 = 0x29641d78a3dba136;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_b0 ^ 0x70eb2a8eb0197a11;
            uVar2 = local_b0 ^ local_b8;
            local_b8 = local_b8 ^ 0x70eb2a8eb0197a11;
            local_b0 = uVar3;
            if ((longlong)uVar2 < 0xd5f4e10b0d2be0a) break;
            if ((longlong)uVar2 < 0x24c66fd28d3756f0) {
              if (uVar2 == 0xd5f4e10b0d2be0a) {
                local_88 = 0;
                local_68 = (void *)*param_2;
                local_a0 = param_2[1];
                local_98 = *(longlong **)(param_1 + 0x58);
                local_90 = *(longlong **)(param_1 + 0x50);
                local_b0 = 0x702984c28fdd54e0;
                if (local_90 == local_98) {
                  local_b0 = 0x91cb5ec54b973faf;
                }
                local_b8 = 0x7bd2b6b24b8105d4;
                local_60 = local_90;
              }
              else if (uVar2 == 0x11dde5c95610e0de) {
                local_70 = local_78;
                local_58 = *local_78;
                local_b0 = 0xc57d268002a57d1;
                if (local_a0 == *(size_t *)(local_58 + 0x20)) {
                  local_b0 = 0x48cea456087a3c3f;
                }
                local_b8 = 0x2891bdba8d1d0121;
              }
            }
            else if (uVar2 == 0x24c66fd28d3756f0) {
              local_78 = local_70 + 1;
              local_b0 = 0x789cad267602e299;
              if (local_78 == local_98) {
                local_b0 = 0xcee4fc4de7442165;
              }
              local_b8 = 0x694148ef20120247;
              local_a8 = 0;
            }
            else if (uVar2 == 0x2ccbcf38c63e90d1) {
              local_a8 = *local_50;
              local_b0 = 0x6b5cf816a2cae4ca;
              local_b8 = 0xccf94cb4659cc7e8;
            }
            else if (uVar2 == 0x605f19ec85673d1e) {
              if (*(ulonglong *)(local_58 + 0x28) < 0x10) {
                _Buf2 = (void *)(local_58 + 0x10);
              }
              else {
                _Buf2 = *(void **)(local_58 + 0x10);
              }
              iVar1 = memcmp(local_68,_Buf2,local_a0);
              local_b0 = 0x6da3bbe0f4ede6a;
              if (iVar1 == 0) {
                local_b0 = 0xc805bc1b826fb2e1;
              }
              local_b8 = 0x221c546c8279889a;
              local_90 = local_70;
            }
          }
          if ((longlong)uVar2 < -0x15e61788ffe9c585) break;
          if (uVar2 == 0xea19e87700163a7b) {
            local_50 = local_90;
            local_b0 = 0x4b5696ccfdbcedc6;
            if (local_90 == local_98) {
              local_b0 = 0xc038ed56fcd45e35;
            }
            local_b8 = 0x679d59f43b827d17;
            local_a8 = 0;
          }
          else if (uVar2 == 0xbfb3270c45c5134) {
            local_b0 = 0xabe5388f2d4c3e48;
            if (local_a0 == local_88) {
              local_b0 = 0x2a7962bc000da41d;
            }
            local_b8 = 0xba38dd467b5cde96;
            local_80 = local_60;
            local_78 = local_60;
          }
        }
        if (uVar2 != 0x9041bffa7b517a8b) break;
        local_48 = local_80;
        local_b0 = 0xb87192c4826bd1c;
        if (*(size_t *)(*local_80 + 0x20) == local_88) {
          local_b0 = 0x4a61f237aac5dbfd;
        }
        local_b8 = 0xa0781a40aad3e186;
        local_90 = local_80;
      }
      if (uVar2 != 0xabff036ce2f55c9a) break;
      local_80 = local_48 + 1;
      local_b0 = 0xe5e8b341f4b2d845;
      if (local_80 == local_98) {
        local_b0 = 0xd20cb81948b581ec;
      }
      local_b8 = 0x75a90cbb8fe3a2ce;
      local_a8 = 0;
    }
  } while (uVar2 != 0xa7a5b4a2c7562322);
  return local_a8;
}



undefined8 FUN_180107b80(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  uVar3 = FUN_180107d50();
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_180107cf9;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[3];
  if (0xf < uVar1) {
    lVar2 = *param_3;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_180107cf9:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  return uVar3;
}



void Unwind_180107d20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x50));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x58));
  return;
}



undefined8 * FUN_180107d50(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_39 = 0;
  local_50 = 0;
  local_40 = 1;
  local_48 = 0xf;
  puVar3 = (undefined8 *)FUN_1801d61c8(0x98);
  uVar1 = *param_4;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  param_3[2] = local_50;
  param_3[3] = local_48;
  *(undefined1 *)param_3 = local_39;
  local_78 = (undefined8 *)*param_2;
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = local_50;
  param_2[3] = local_48;
  *(undefined1 *)param_2 = local_39;
  FUN_18010bdb0(puVar3,&local_78,&local_98,uVar1);
  local_98 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 == *(undefined8 **)(param_1 + 0x60)) {
    local_78 = puVar3;
    FUN_18010a500(param_1 + 0x50,puVar2,&local_78);
    if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,local_40);
    }
  }
  else {
    *puVar2 = puVar3;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 8;
  }
  return puVar3;
}



void Unwind_180107e90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x78));
  }
  FUN_18010bc80(param_2 + 0x20);
  return;
}



undefined8 FUN_180107ed0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  uVar3 = FUN_1801080b0();
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_18010805b;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[3];
  if (0xf < uVar1) {
    lVar2 = *param_3;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_18010805b:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  return uVar3;
}



void Unwind_180108080(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x58));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x60));
  return;
}



undefined8 *
FUN_1801080b0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_49 = 0;
  local_60 = 0;
  local_50 = 1;
  local_58 = 0xf;
  puVar5 = (undefined8 *)FUN_1801d61c8(0xa0);
  uVar1 = *param_6;
  uVar2 = *param_5;
  uVar3 = *param_4;
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = param_3[2];
  uStack_90 = param_3[3];
  param_3[2] = local_60;
  param_3[3] = local_58;
  *(undefined1 *)param_3 = local_49;
  local_88 = (undefined8 *)*param_2;
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_78 = *(undefined4 *)(param_2 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_70 = *(undefined4 *)(param_2 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = local_60;
  param_2[3] = local_58;
  *(undefined1 *)param_2 = local_49;
  FUN_18010c6e0(puVar5,&local_88,&local_a8,uVar3,uVar2,uVar1);
  local_a8 = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
    local_88 = puVar5;
    FUN_18010a500(param_1 + 0x50,puVar4,&local_88);
    if (local_88 != (undefined8 *)0x0) {
      (**(code **)*local_88)(local_88,local_50);
    }
  }
  else {
    *puVar4 = puVar5;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 8;
  }
  return puVar5;
}



void Unwind_180108220(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x88));
  }
  FUN_18010c5b0(param_2 + 0x30);
  return;
}



undefined8 FUN_180108270(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  uVar3 = FUN_180108450();
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_180108405;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[3];
  if (0xf < uVar1) {
    lVar2 = *param_3;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_180108405:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  return uVar3;
}



void Unwind_180108420(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x68));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x70));
  return;
}



undefined8 *
FUN_180108450(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_49 = 0;
  local_60 = 0;
  local_50 = 1;
  local_58 = 0xf;
  puVar6 = (undefined8 *)FUN_1801d61c8(0xa8);
  uVar1 = *param_7;
  uVar2 = *param_6;
  uVar3 = *param_5;
  uVar4 = *param_4;
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = param_3[2];
  uStack_90 = param_3[3];
  param_3[2] = local_60;
  param_3[3] = local_58;
  *(undefined1 *)param_3 = local_49;
  local_88 = (undefined8 *)*param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  param_2[2] = local_60;
  param_2[3] = local_58;
  *(undefined1 *)param_2 = local_49;
  FUN_18010d030(puVar6,&local_88,&local_a8,uVar4,uVar3,uVar2,uVar1);
  local_a8 = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x58);
  if (puVar5 == *(undefined8 **)(param_1 + 0x60)) {
    local_88 = puVar6;
    FUN_18010a500(param_1 + 0x50,puVar5,&local_88);
    if (local_88 != (undefined8 *)0x0) {
      (**(code **)*local_88)(local_88,local_50);
    }
  }
  else {
    *puVar5 = puVar6;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 8;
  }
  return puVar6;
}



void Unwind_1801085d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x98));
  }
  FUN_18010cf00(param_2 + 0x40);
  return;
}



undefined8 FUN_180108620(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  uVar3 = FUN_180108830();
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_1801087ca;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[3];
  if (0xf < uVar1) {
    lVar2 = *param_3;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_1801087ca:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  FUN_180078630(param_4);
  return uVar3;
}



void Unwind_1801087f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x58));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x50));
  FUN_180078630(*(undefined8 *)(param_2 + 0x60));
  return;
}



undefined8 *
FUN_180108830(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_41 = 0;
  local_58 = 0;
  local_48 = 1;
  local_50 = 0xf;
  puVar3 = (undefined8 *)FUN_1801d61c8(0xb0);
  uVar1 = *param_5;
  local_a8 = param_4[2];
  param_4[2] = 0;
  local_b8 = *param_4;
  uStack_b0 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  param_3[2] = local_58;
  param_3[3] = local_50;
  *(undefined1 *)param_3 = local_41;
  local_78 = (undefined8 *)*param_2;
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = local_58;
  param_2[3] = local_50;
  *(undefined1 *)param_2 = local_41;
  FUN_18010d9f0(puVar3,&local_78,&local_98,&local_b8,uVar1);
  local_98 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 == *(undefined8 **)(param_1 + 0x60)) {
    local_78 = puVar3;
    FUN_18010a500(param_1 + 0x50,puVar2,&local_78);
    if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,local_48);
    }
  }
  else {
    *puVar2 = puVar3;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 8;
  }
  return puVar3;
}



void Unwind_1801089a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x70);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xa0));
  }
  FUN_18010d8c0(param_2 + 0x50);
  return;
}



undefined8 FUN_1801089f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  uVar3 = FUN_180108bb0();
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_180108b61;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[3];
  if (0xf < uVar1) {
    lVar2 = *param_3;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_180108b61:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  return uVar3;
}



void Unwind_180108b80(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x50));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x58));
  return;
}



undefined8 * FUN_180108bb0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_39 = 0;
  local_50 = 0;
  local_40 = 1;
  local_48 = 0xf;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xb0);
  local_a8 = *param_4;
  uStack_a0 = param_4[1];
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  param_3[2] = local_50;
  param_3[3] = local_48;
  *(undefined1 *)param_3 = local_39;
  local_78 = (undefined8 *)*param_2;
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = local_50;
  param_2[3] = local_48;
  *(undefined1 *)param_2 = local_39;
  FUN_18010e390(puVar2,&local_78,&local_98,&local_a8);
  local_98 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 == *(undefined8 **)(param_1 + 0x60)) {
    local_78 = puVar2;
    FUN_18010a500(param_1 + 0x50,puVar1,&local_78);
    if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,local_40);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 8;
  }
  return puVar2;
}



void Unwind_180108d00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x88));
  }
  FUN_18010e260(param_2 + 0x30);
  return;
}



undefined8 FUN_180108d40(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  uVar3 = FUN_180108ff0();
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_180108f7c;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[3];
  if (0xf < uVar1) {
    lVar2 = *param_3;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_180108f7c;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  uVar1 = param_4[3];
  if (0xf < uVar1) {
    lVar2 = *param_4;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_180108f7c;
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  param_4[2] = 0;
  param_4[3] = 0xf;
  *(undefined1 *)param_4 = 0;
  uVar1 = param_5[3];
  if (0xf < uVar1) {
    lVar2 = *param_5;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_180108f7c:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  return uVar3;
}



void Unwind_180108fa0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x40));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x38));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x30));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xe0));
  return;
}



undefined8 *
FUN_180108ff0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_41 = 0;
  local_58 = 0;
  local_48 = 1;
  local_50 = 0xf;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xe8);
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = param_5[2];
  uStack_80 = param_5[3];
  param_5[2] = local_58;
  param_5[3] = local_50;
  *(undefined1 *)param_5 = local_41;
  local_78 = (undefined8 *)*param_4;
  uStack_70 = param_4[1];
  local_68 = param_4[2];
  uStack_60 = param_4[3];
  param_4[2] = local_58;
  param_4[3] = local_50;
  *(undefined1 *)param_4 = local_41;
  local_d8 = *param_3;
  uStack_d0 = param_3[1];
  local_c8 = param_3[2];
  uStack_c0 = param_3[3];
  param_3[2] = local_58;
  param_3[3] = local_50;
  *(undefined1 *)param_3 = local_41;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_a8 = param_2[4];
  uStack_a4 = param_2[5];
  uStack_a0 = param_2[6];
  uStack_9c = param_2[7];
  *(undefined8 *)(param_2 + 4) = local_58;
  *(undefined8 *)(param_2 + 6) = local_50;
  *(undefined1 *)param_2 = local_41;
  FUN_18010f400(puVar2,&local_b8,&local_d8,&local_78,&local_98);
  local_98 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 == *(undefined8 **)(param_1 + 0x60)) {
    local_78 = puVar2;
    FUN_18010a500(param_1 + 0x50,puVar1,&local_78);
    if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,local_48);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 8;
  }
  return puVar2;
}



void Unwind_1801091a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x90);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0xc0));
  }
  FUN_18010f2d0(param_2 + 0x70);
  return;
}



undefined8 * FUN_180109220(undefined8 *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  size_t local_d8;
  ulonglong uStack_d0;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  size_t local_b8;
  ulonglong uStack_b0;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_a0 = 0x10;
  local_49 = 0;
  local_98 = 0x27;
  local_90 = 0x98;
  local_88 = 0;
  local_80 = 0x28;
  local_78 = 0xffe;
  local_70 = 0xffffffffffffffe0;
  local_58 = 0xf;
  local_68 = 1;
  local_60 = FUN_1801d61c8(0x98);
  uVar1 = *param_4;
  local_c8 = (undefined8 ****)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  sVar2 = strlen(param_3);
  if ((longlong)sVar2 < local_88) {
    FUN_180002ac0();
  }
  if (sVar2 < local_a0) {
    ppppuVar6 = &local_c8;
    uVar5 = local_58;
  }
  else {
    uVar3 = local_58 | sVar2;
    uVar5 = 0x16;
    if (0x16 < uVar3) {
      uVar5 = uVar3;
    }
    if (local_78 < uVar3) {
      pppuVar4 = (undefined8 ***)FUN_1801d61c8(local_80 + uVar5);
      ppppuVar6 = (undefined8 ****)(local_98 + (longlong)pppuVar4 & local_70);
      ppppuVar6[-1] = pppuVar4;
      local_c8 = ppppuVar6;
    }
    else {
      ppppuVar6 = (undefined8 ****)FUN_1801d61c8(local_68 + uVar5);
      local_c8 = ppppuVar6;
    }
  }
  local_b8 = sVar2;
  uStack_b0 = uVar5;
  FUN_1802079d0(ppppuVar6,param_3,sVar2);
  *(undefined1 *)((longlong)ppppuVar6 + sVar2) = local_49;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (undefined8 ****)0x0;
  uStack_e0 = 0;
  sVar2 = strlen(param_2);
  if ((longlong)sVar2 < local_88) {
    FUN_180002ac0();
  }
  if (sVar2 < local_a0) {
    ppppuVar6 = &local_e8;
    uVar5 = local_58;
  }
  else {
    uVar3 = local_58 | sVar2;
    uVar5 = 0x16;
    if (0x16 < uVar3) {
      uVar5 = uVar3;
    }
    if (local_78 < uVar3) {
      pppuVar4 = (undefined8 ***)FUN_1801d61c8(local_80 + uVar5);
      ppppuVar6 = (undefined8 ****)(local_98 + (longlong)pppuVar4 & local_70);
      ppppuVar6[-1] = pppuVar4;
      local_e8 = ppppuVar6;
    }
    else {
      ppppuVar6 = (undefined8 ****)FUN_1801d61c8(local_68 + uVar5);
      local_e8 = ppppuVar6;
    }
  }
  local_d8 = sVar2;
  uStack_d0 = uVar5;
  FUN_1802079d0(ppppuVar6,param_2,sVar2);
  *(undefined1 *)((longlong)ppppuVar6 + sVar2) = local_49;
  FUN_180109650(local_60,&local_e8,&local_c8,uVar1);
  *param_1 = local_60;
  return param_1;
}



void Unwind_1801094a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x40);
  return;
}



void Unwind_1801094e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x78));
  return;
}



void FUN_180109520(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xa11702e2cb903f9e;
  local_58 = 0x8a76ba0f8b1b2be0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xcd0f9d1dc52fd3d5;
        if (uVar1 != 0x98ef108fd623b59d) break;
        FUN_18010eba0(local_48);
        thunk_FUN_1801f42e0(local_48,0x98);
        local_50 = 0xde81d1803f5fb26e;
        local_58 = 0xc8e0b187fa7482c8;
      }
      if (uVar1 != 0x2b61b8ed408b147e) break;
      local_48 = *param_1;
      local_50 = 0x56bbebfc316d4ab5;
      if (local_48 == 0) {
        local_50 = 0xd8359b742265cf8e;
      }
      local_58 = 0xce54fb73e74eff28;
    }
    local_50 = local_50 ^ 0xcd0f9d1dc52fd3d5;
  } while (uVar1 != 0x16616007c52b30a6);
  return;
}



undefined8 * FUN_180109650(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_141;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  uintptr_t local_128;
  uint local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  uintptr_t *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;

  local_138 = 0x276d632a42cf14eb;
  local_140 = 0x25314c8440d8f854;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_138 ^ 0x1f727e5c308973f8;
            uVar1 = local_138 ^ local_140;
            local_140 = local_140 ^ 0x1f727e5c308973f8;
            local_138 = uVar2;
            if (0x2282d0b3b1f528e4 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x19d38c38a71be58b) {
              if (uVar1 == 0x968a78e6a88a7d82) {
                local_90 = *(longlong *)(local_98 + -8);
                local_138 = 0xf663efc63549a6a7;
                if ((ulonglong)((local_98 + local_118) - local_90) < local_100) {
                  local_138 = 0x9851a768a1527e51;
                }
                local_140 = 0xcf74ef82e49fdad6;
              }
              else if (uVar1 == 0xd6efe9693224d170) {
                local_c8 = local_e0 + local_108;
                local_138 = 0x56af730878b3b932;
                local_140 = 0x742da3bbc94691d7;
                local_c0 = local_a0;
              }
            }
            else if (uVar1 == 0xe62c73c758e41a75) {
              local_c0 = *param_3;
              local_c8 = local_e0 + local_110;
              local_138 = 0x4938fbb94f0938d7;
              if (local_f8 < local_c8) {
                local_138 = 0x9ec189afe2126e9d;
              }
              local_140 = 0x6bba2b0afefc1032;
              local_a8 = local_c0;
            }
            else if (uVar1 == 0xf57ba2a51cee7eaf) {
              local_a0 = *(longlong *)(local_a8 + -8);
              local_138 = 0xc87fef143a06382c;
              if ((ulonglong)((local_a8 + local_118) - local_a0) < local_100) {
                local_138 = 0x294d1158dd4c7ae6;
              }
              local_140 = 0xffa2f831ef68ab96;
            }
            else if (uVar1 == 0x25c2fae0217ecbf) {
              local_141 = 0;
              local_f8 = 0xfff;
              local_128 = 0;
              local_100 = 0x20;
              local_108 = 0x28;
              local_11c = 0;
              local_130 = 0xf;
              local_110 = 1;
              local_118 = -8;
              local_68 = *param_3;
              lStack_60 = param_3[1];
              local_58 = param_3[2];
              lStack_50 = param_3[3];
              param_3[2] = 0;
              local_b8 = (ulonglong *)(param_3 + 3);
              param_3[3] = 0xf;
              *(undefined1 *)param_3 = 0;
              local_88 = (undefined4)*param_2;
              uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
              uStack_80 = (undefined4)param_2[1];
              uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
              local_78 = (undefined4)param_2[2];
              uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
              uStack_70 = (undefined4)param_2[3];
              uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
              local_b0 = (uintptr_t *)(param_2 + 2);
              param_2[2] = 0;
              local_f0 = (ulonglong *)(param_2 + 3);
              param_2[3] = 0xf;
              *(undefined1 *)param_2 = 0;
              FUN_180109d00(param_1,5,&local_88,&local_68);
              *param_1 = &PTR_FUN_180217480;
              *(undefined4 *)(param_1 + 0x12) = param_4;
              *(undefined4 *)((longlong)param_1 + 0x94) = param_4;
              local_e8 = *local_f0;
              local_138 = 0x2c1b99f314baa2d5;
              if (0xf < local_e8) {
                local_138 = 0x44c15d4d43f2b509;
              }
              local_140 = 0x6be5ffd9c5a8defa;
            }
          }
          if ((longlong)uVar1 < 0x47fe662ad1127c2f) break;
          if (uVar1 == 0x47fe662ad1127c2f) {
            *local_b0 = local_128;
            *local_f0 = local_130;
            *(undefined1 *)param_2 = local_141;
            local_e0 = *local_b8;
            local_138 = 0xbdbdc12fdb752fe4;
            if (local_130 < local_e0) {
              local_138 = 0x6f342175e4690459;
            }
            local_140 = 0x891852b2bc8d1e2c;
          }
          else if (uVar1 == 0x483a91bd997c4d79) {
            thunk_FUN_1801f42e0(local_d0,local_d8);
            local_138 = 0xc49b8da28b646a11;
            local_140 = 0x8365eb885a76163e;
          }
          else if (uVar1 == 0x572548ea45cda487) {
            local_d8 = local_e8 + local_108;
            local_d0 = local_90;
            local_138 = 0xf72fe39b5ab8f2eb;
            local_140 = 0xbf157226c3c4bf92;
          }
        }
        if (0x2f24a294865a6bf2 < (longlong)uVar1) break;
        if (uVar1 == 0x2282d0b3b1f528e5) {
          thunk_FUN_1801f42e0(local_c0,local_c8);
          local_138 = 0x4a5bf83abe68eb3a;
          local_140 = 0x7efe6ba7d990daf2;
        }
      }
      if (0x34a5939d67f831c7 < (longlong)uVar1) break;
      if (uVar1 == 0x2f24a294865a6bf3) {
        local_d0 = *param_2;
        local_d8 = local_e8 + local_110;
        local_138 = 0x79451ef02c5c99f;
        if (local_f8 < local_d8) {
          local_138 = 0xd924b8b43333f964;
        }
        local_140 = 0x4faec0529bb984e6;
        local_98 = local_d0;
      }
    }
    if (uVar1 == 0x34a5939d67f831c8) break;
    if ((uVar1 == 0x37dd1725d56e93ba) || (uVar1 == 0x39170044d1d67c71)) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_11c,local_128);
    }
  }
  return param_1;
}



undefined8 * FUN_180109d00(undefined8 *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  uintptr_t local_f8;
  uint local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  uintptr_t *local_88;
  ulonglong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;

  local_108 = 0xdc1bf5dc9a52f3a;
  local_110 = 0x95883d8273322338;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar7 = local_108 ^ 0xfb3976f06d0d7c8b;
            uVar6 = local_108 ^ local_110;
            local_110 = local_110 ^ 0xfb3976f06d0d7c8b;
            local_108 = uVar7;
            if (-0x1551856990ba9dfc < (longlong)uVar6) break;
            if ((longlong)uVar6 < -0x59f37e85022a3e95) {
              if (uVar6 == 0x89f181076afc39f6) {
                local_60 = *(longlong *)(local_70 + -8);
                local_108 = 0xbc56704fcc8580d;
                if ((ulonglong)((local_70 + local_e8) - local_60) < local_d0) {
                  local_108 = 0xb26f3926fe16e99f;
                }
                local_110 = 0x7a351452b882157c;
              }
              else if (uVar6 == 0x984982dfba970c02) {
                local_111 = 0;
                local_c8 = 0xfff;
                local_d0 = 0x20;
                local_f8 = 0;
                local_d8 = 0x28;
                local_f0 = 0;
                local_100 = 0xf;
                local_e0 = 1;
                local_e8 = -8;
                *param_1 = &PTR_vfunction1_180217490;
                *(undefined4 *)(param_1 + 1) = param_2;
                param_1[4] = 0;
                param_1[5] = 0;
                param_1[2] = 0;
                param_1[3] = 0;
                lVar3 = param_3[1];
                param_1[2] = *param_3;
                param_1[3] = lVar3;
                lVar3 = param_3[3];
                param_1[4] = param_3[2];
                param_1[5] = lVar3;
                local_88 = (uintptr_t *)(param_3 + 2);
                param_3[2] = 0;
                local_c0 = (ulonglong *)(param_3 + 3);
                param_3[3] = 0xf;
                *(undefined1 *)param_3 = 0;
                param_1[8] = 0;
                param_1[9] = 0;
                param_1[6] = 0;
                param_1[7] = 0;
                uVar1 = *(undefined4 *)((longlong)param_4 + 4);
                lVar5 = param_4[1];
                uVar2 = *(undefined4 *)((longlong)param_4 + 0xc);
                lVar3 = param_4[2];
                lVar4 = param_4[3];
                *(int *)(param_1 + 6) = (int)*param_4;
                *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
                *(int *)(param_1 + 7) = (int)lVar5;
                *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
                param_1[8] = lVar3;
                param_1[9] = lVar4;
                param_4[2] = 0;
                local_80 = (ulonglong *)(param_4 + 3);
                param_4[3] = 0xf;
                *(undefined1 *)param_4 = 0;
                param_1[0x11] = 0;
                local_b8 = *local_c0;
                local_108 = 0x217f4e9cfdc76910;
                if (0xf < local_b8) {
                  local_108 = 0xafe61d9b1e5ecccf;
                }
                local_110 = 0x118c551795fc65c6;
              }
            }
            else if (uVar6 == 0xa60c817afdd5c16b) {
              local_98 = local_b0 + local_d8;
              local_108 = 0xbb8eecd13637f72f;
              local_110 = 0x422fc42bcbba3a5f;
              local_90 = local_68;
            }
            else if (uVar6 == 0xbe6a488c8ba2a909) {
              local_a0 = *param_3;
              local_a8 = local_b8 + local_e0;
              local_108 = 0xa43a161aa30f242;
              if (local_c8 < local_a8) {
                local_108 = 0x691c5af0af89a9b1;
              }
              local_110 = 0xe0eddbf7c5759047;
              local_70 = local_a0;
            }
            else if (uVar6 == 0xc85a2d744694fce3) {
              local_a8 = local_b8 + local_d8;
              local_a0 = local_60;
              local_108 = 0x2b47c9a183a5eadc;
              local_110 = 0xc1e9b337ece088d9;
            }
          }
          if ((longlong)uVar6 < 0x30f31b8b683b0cd6) break;
          if ((longlong)uVar6 < 0x68122556459a9765) {
            if (uVar6 == 0x30f31b8b683b0cd6) {
              *local_88 = local_f8;
              *local_c0 = local_100;
              *(undefined1 *)param_3 = local_111;
              local_b0 = *local_80;
              local_108 = 0xcc6bcf5b00e2b445;
              if (local_100 < local_b0) {
                local_108 = 0x80e153bad413fe63;
              }
              local_110 = 0xe032eba4b745d345;
            }
            else if (uVar6 == 0x60d3b81e63562d26) {
              local_90 = *param_4;
              local_98 = local_b0 + local_e0;
              local_108 = 0x8d905a7f4c599f7e;
              if (local_c8 < local_98) {
                local_108 = 0x1c2357d3f44ec56b;
              }
              local_110 = 0x74317285b1d4520e;
              local_78 = local_90;
            }
          }
          else if (uVar6 == 0x68122556459a9765) {
            local_68 = *(longlong *)(local_78 + -8);
            local_108 = 0x87df59345f5048e5;
            if ((ulonglong)((local_78 + local_e8) - local_68) < local_d0) {
              local_108 = 0x398e98542407db26;
            }
            local_110 = 0x9f82192ed9d21a4d;
          }
          else if (uVar6 == 0x71f07356444a4d71) goto LAB_18010a361;
        }
        if (-0x65ed70502723291 < (longlong)uVar6) break;
        if (uVar6 == 0xeaae7a966f456205) {
          thunk_FUN_1801f42e0(local_a0,local_a8);
          local_108 = 0xd1742a214d8821cc;
          local_110 = 0xe18731aa25b32d1a;
        }
      }
      if (uVar6 != 0xf9a128fafd8dcd70) break;
      thunk_FUN_1801f42e0(local_90,local_98);
      local_108 = 0x43bdb31cfe742e9f;
      local_110 = 0x6fe497e349d3499f;
    }
    if (uVar6 == 0x2c5924ffb7a76700) {
      return param_1;
    }
  } while (uVar6 != 0x185d401a868252a8);
LAB_18010a361:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f0,local_f8);
}



undefined8 FUN_18010a3b0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xa42251b7c1492455;
  local_50 = 0x8e439a78cfb39740;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xca0457afb8111beb;
        if (uVar1 != 0x2a61cbcf0efab315) break;
        FUN_18010eba0(param_1);
        local_48 = 0x7360eaa309e761a5;
        if ((param_2 & 1) == 0) {
          local_48 = 0xf4aa596290357ad2;
        }
        local_50 = 0x3ebafd5ff15895fc;
      }
      if (uVar1 != 0x4dda17fcf8bff459) break;
      thunk_FUN_1801f42e0(param_1,0x98);
      local_48 = 0x6fd69b4e663560e6;
      local_50 = 0xa5c63f7307588fc8;
    }
    local_48 = local_48 ^ 0xca0457afb8111beb;
  } while (uVar1 != 0xca10a43d616def2e);
  return param_1;
}



longlong FUN_18010a500(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong local_298;
  ulonglong local_290;
  char local_281;
  byte local_280;
  undefined8 *local_278;
  ulonglong local_270;
  undefined8 *local_268;
  longlong local_260;
  uintptr_t local_258;
  longlong local_250;
  longlong *local_248;
  undefined8 *local_240;
  ulonglong local_238;
  undefined8 *local_230;
  longlong local_228;
  ulonglong local_218;
  longlong local_210;
  longlong local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  longlong local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  ulonglong local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  undefined8 *local_190;
  ulonglong local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  ulonglong local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  longlong local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 *local_100;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;

  local_290 = 0x123cd988a333002b;
  local_298 = 0xd9e3ba6d1b9d6a36;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar10 = local_290 ^ 0x4674230f3412bfbb;
                uVar9 = local_290 ^ local_298;
                local_298 = local_298 ^ 0x4674230f3412bfbb;
                local_290 = uVar10;
                if (-0xc28c26c25f4e44c < (longlong)uVar9) break;
                if ((longlong)uVar9 < -0x45253173f9692abc) {
                  if ((longlong)uVar9 < -0x6219db8d3a4788bd) {
                    if ((longlong)uVar9 < -0x6b0c59d7e48b6c52) {
                      if (uVar9 == 0x82c8c0126c7f0e7e) {
                        local_100 = local_170;
                        local_108 = *local_1b8 - (longlong)local_170;
                        local_290 = 0x62ab14e86bb0b0f4;
                        if (local_108 < 0x1000) {
                          local_290 = 0x9779ab8358b19bba;
                        }
                        local_298 = 0xa33df299fa59bbcd;
                        local_d0 = local_100;
                        local_c8 = local_108;
                        local_78 = local_100;
                      }
                      else if (uVar9 == 0x8e87fe79b3a948fb) {
                        local_80 = (undefined8 *)*local_248;
                        local_170 = local_60;
                        local_290 = 0x7eb891ea8d69acfe;
                        if (local_60 != local_80) {
                          local_290 = 0xbd16e42f191aa28a;
                        }
                        local_298 = 0xfc7051f8e116a280;
                        local_150 = local_60;
                      }
                      else if (uVar9 == 0x939fb55f959d1aa6) {
                        lVar11 = ((longlong)local_1c0 + (local_270 - (longlong)local_230) & local_270) + local_210;
                        local_290 = 0x1401c99c6d1e754d;
                        if ((undefined8 *)((longlong)local_268 + lVar11) <= local_278) {
                          local_290 = 0xcf417cac0af1a632;
                        }
                        if ((undefined8 *)(lVar11 + (longlong)local_278) <= local_268) {
                          local_290 = 0xcf417cac0af1a632;
                        }
                        local_298 = 0x53995a8840ab3657;
                        local_1d8 = local_268;
                        local_1d0 = local_278;
                      }
                    }
                    else if (uVar9 == 0x94f3a6281b7493ae) {
                      uVar3 = *local_140;
                      *local_140 = 0;
                      *(undefined8 *)(local_138 + 8) = uVar3;
                      local_140 = local_140 + 1;
                      local_290 = 0x77036ac6d9b8c9d1;
                      if (local_140 != local_68) {
                        local_290 = 0x1ca20147037d8c8;
                      }
                      local_138 = local_138 + 8;
                      local_298 = 0x9539863c6b434b66;
                    }
                    else if (uVar9 == 0x99c4e799840734b1) {
                      local_200 = (undefined8 *)FUN_1801d61c8(local_178);
                      local_290 = 0x172adfd2cf60d219;
                      local_298 = 0x6f4a69fa8d14371;
                    }
                    else if (uVar9 == 0x9cd826244a5a9065) {
                      local_1a0 = local_1a8 & local_218;
                      local_a8 = (undefined8 *)((local_1a0 << (local_280 & 0x3f)) + (longlong)local_268);
                      local_a0 = (undefined8 *)((local_1a0 << (local_280 & 0x3f)) + (longlong)local_278);
                      local_290 = 0x6a4700ef410425b7;
                      local_298 = 0x2d1d9cdd9a8db5cf;
                      local_110 = local_258;
                    }
                  }
                  else if ((longlong)uVar9 < -0x4c52da1efa1e7780) {
                    if (uVar9 == 0x9de62472c5b87743) {
                      local_108 = local_c8 + local_208;
                      local_290 = 0xa77d5c7d016afcf8;
                      local_298 = 0x93390567a382dc8f;
                      local_100 = local_b0;
                    }
                    else if (uVar9 == 0xafeec6200ba2ccc3) {
                      local_170 = (undefined8 *)*param_1;
                      local_290 = 0x9fe08ddabafe19d8;
                      local_298 = 0x1d284dc8d68117a6;
                    }
                    else if (uVar9 == 0xad82851151af249e) {
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_258);
                    }
                  }
                  else if (uVar9 == 0xb3ad25e105e18880) {
                    local_290 = 0x27286dbd6711f1cd;
                    if (local_238 < 0x200) {
                      local_290 = 0x3e2d7bb76831c35;
                    }
                    local_298 = 0x9a263022f2842884;
                  }
                  else if (uVar9 == 0xb972808837f349c1) {
                    uVar9 = (longlong)local_190 + (local_270 - (longlong)local_240);
                    local_180 = (uVar9 >> (local_280 & 0x3f)) + local_260;
                    local_290 = 0x3b39286810f8409a;
                    if (0x107 < uVar9) {
                      local_290 = 0xedf204e35faee52f;
                    }
                    local_298 = 0x51eceeb723f8548c;
                    local_1f0 = local_250;
                    local_1f8 = param_2;
                  }
                  else if (uVar9 == 0xba5c26d6fe3927d8) {
                    local_290 = 0x7e161780b2d82adc;
                    if (local_180 != local_1b0) {
                      local_290 = 0xf6f93da53323bc7d;
                    }
                    local_298 = 0x9c2cfb7a0023a86b;
                    local_1f8 = local_c0;
                    local_1f0 = local_b8;
                  }
                }
                else if ((longlong)uVar9 < -0x34209c1a475195e3) {
                  if ((longlong)uVar9 < -0x42f1a2606a6a26b7) {
                    if (uVar9 == 0xbadace8c0696d544) {
                      local_290 = 0x693b70090f71b6f1;
                      if (local_198 != local_188) {
                        local_290 = 0x51753095bfaaf2aa;
                      }
                      local_298 = 0x8b019cf3bd8a3446;
                      local_1e8 = local_90;
                      local_1e0 = local_88;
                    }
                    else if (uVar9 == 0xbc1eea547c56b1a3) {
                      uVar9 = (longlong)local_190 + (local_270 - (longlong)local_240) & local_270;
                      local_290 = 0x57eaff1c2ef06d2b;
                      if ((longlong)param_2 + uVar9 + 8 <=
                          (ulonglong)((longlong)local_240 + (local_210 - local_f0) + (longlong)local_278)) {
                        local_290 = 0x589b3923de6a4b98;
                      }
                      if ((undefined8 *)((longlong)local_278 + (longlong)local_240 + ((uVar9 + 0x10) - local_f0)) <=
                          param_2) {
                        local_290 = 0x589b3923de6a4b98;
                      }
                      local_298 = 0x3d3f39c31df0793d;
                      local_1f0 = local_250;
                      local_1f8 = param_2;
                    }
                  }
                  else if (uVar9 == 0xbd0e5d9f9595d949) {
                    local_290 = 0x86cda905e1dd8150;
                    if (0x1ffffffffffffffb < local_238) {
                      local_290 = 0x94c63a25eb4e9fa3;
                    }
                    local_298 = 0x9c8bbf18e34fa72b;
                  }
                  else if (uVar9 == 0xc196e67191e90b39) {
                    local_b0 = (undefined8 *)local_78[-1];
                    local_290 = 0xeda565b3e95fa9b0;
                    if (0x1f < (longlong)local_d0 + (local_270 - (longlong)local_b0)) {
                      local_290 = 0xddc1c4d07d48fa6d;
                    }
                    local_298 = 0x704341c12ce7def3;
                  }
                  else if (uVar9 == 0xc379978e6b417e87) {
                    local_148 = (undefined8 *)*local_248;
                    local_290 = 0xc26263034c945d3c;
                    local_298 = 0xf5aa6d4a8cbbc33a;
                  }
                }
                else if ((longlong)uVar9 < -0x1f71438b46e5a079) {
                  if ((longlong)uVar9 < -0x297bd616948812b5) {
                    if (uVar9 == 0xcbdf63e5b8ae6a1d) {
                      local_208 = 0x27;
                      local_210 = 8;
                      local_1c8 = 0x98;
                      local_258 = 0;
                      local_218 = 0x3ffffffffffffffc;
                      local_228 = 4;
                      local_260 = 1;
                      local_270 = 0xfffffffffffffff8;
                      local_280 = 3;
                      local_248 = param_1 + 1;
                      local_f0 = *param_1;
                      local_e8 = (longlong)param_2 - local_f0;
                      local_e0 = (param_1[1] - local_f0 >> 3) + 1;
                      local_1b8 = param_1 + 2;
                      uVar9 = param_1[2] - local_f0 >> 3;
                      local_238 = (uVar9 >> 1) + uVar9;
                      if (local_238 <= local_e0) {
                        local_238 = local_e0;
                      }
                      if (0x1fffffffffffffff - (uVar9 >> 1) < uVar9) {
                        local_238 = 0x1fffffffffffffff;
                      }
                      local_290 = 0x3411b0c91c7153dd;
                      if (local_238 < 0x2000000000000000) {
                        local_290 = 0x880fabb37e115a39;
                      }
                      local_298 = 0xf96ba8639c8d27d8;
                      local_240 = param_2;
                      local_1c0 = param_2;
                    }
                    else if (uVar9 == 0xcd7a18aa80fc7405) goto LAB_18010bbf0;
                  }
                  else if (uVar9 == 0xd68429e96b77ed4b) {
                    (**(code **)*local_98)(local_98,1);
                    local_290 = 0xc6dd0b6a400479ab;
                    local_298 = 0xcf7ec72f64d8a073;
                  }
                  else if (uVar9 == 0xda74ac660220c6ec) {
                    local_290 = 0xdf11b5df3ac2da1f;
                    local_298 = 0xbf39c71530901da9;
                    local_130 = local_1e8;
                    local_128 = local_1e0;
                  }
                }
                else if (uVar9 == 0xe08ebc74b91a5f87) {
                  lVar11 = local_158 << (local_280 & 0x3f);
                  lVar12 = local_158 << (local_280 & 0x3f);
                  puVar1 = (undefined4 *)((longlong)param_2 + lVar11);
                  uVar4 = *puVar1;
                  uVar5 = puVar1[1];
                  uVar6 = puVar1[2];
                  uVar7 = puVar1[3];
                  puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0x10);
                  uVar3 = *puVar2;
                  uVar8 = puVar2[1];
                  *(undefined8 *)((longlong)param_2 + lVar11) = 0;
                  ((undefined8 *)((longlong)param_2 + lVar11))[1] = 0;
                  puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0x10);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  puVar1 = (undefined4 *)(local_250 + 8 + lVar12);
                  *puVar1 = uVar4;
                  puVar1[1] = uVar5;
                  puVar1[2] = uVar6;
                  puVar1[3] = uVar7;
                  puVar2 = (undefined8 *)(local_250 + 0x18 + lVar12);
                  *puVar2 = uVar3;
                  puVar2[1] = uVar8;
                  local_158 = local_158 + local_228;
                  local_290 = 0x9aa10a9d72474965;
                  if (local_158 != local_1b0) {
                    local_290 = 0xc073903f3564313a;
                  }
                  local_298 = 0x20fd2c4b8c7e6ebd;
                }
                else if (uVar9 == 0xe23aecfab2fb82b7) {
                  local_120 = (undefined8 *)*param_1;
                  local_290 = 0x172c1b12f36e5096;
                  local_298 = 0xe12a9a3e2edc525d;
                }
                else if (uVar9 == 0xecd8b857e95bdf12) {
                  *param_1 = (longlong)local_278;
                  *local_248 = (longlong)(local_278 + local_e0);
                  *local_1b8 = (longlong)(local_278 + local_238);
                  return local_250;
                }
              }
              if ((longlong)uVar9 < 0x37c80e49c02f9e06) break;
              if ((longlong)uVar9 < 0x50d34880ad4252e4) {
                if ((longlong)uVar9 < 0x4166b5d7f80c000a) {
                  if (uVar9 == 0x37c80e49c02f9e06) {
                    local_190 = local_148;
                    local_290 = 0xa98f4d7d8b76f39f;
                    if (param_2 != local_148) {
                      local_290 = 0xf2c7210f0e7e38e9;
                    }
                    local_298 = 0x4bb5a187398d7128;
                    local_68 = local_190;
                  }
                  else if (uVar9 == 0x39105e9b5a818f66) {
                    uVar9 = (longlong)local_1c0 + (local_270 - (longlong)local_230);
                    local_1a8 = (uVar9 >> (local_280 & 0x3f)) + local_260;
                    local_290 = 0xddd3e9ef2936288e;
                    if (local_1c8 <= uVar9) {
                      local_290 = 0x9d4cfa4911e7132;
                    }
                    local_298 = 0x9a4b7afb04836b94;
                    local_1d8 = local_268;
                    local_1d0 = local_278;
                  }
                }
                else if (uVar9 == 0x4166b5d7f80c000a) {
                  local_70 = local_150;
                  local_98 = (undefined8 *)*local_150;
                  local_290 = 0x5a35148340de7a06;
                  if (local_98 != (undefined8 *)0x0) {
                    local_290 = 0x8512f12f0f754e95;
                  }
                  local_298 = 0x5396d8c66402a3de;
                }
                else if (uVar9 == 0x475a9c32db899078) {
                  lVar11 = local_110 << (local_280 & 0x3f);
                  lVar12 = local_110 << (local_280 & 0x3f);
                  puVar1 = (undefined4 *)((longlong)local_268 + lVar11);
                  uVar4 = *puVar1;
                  uVar5 = puVar1[1];
                  uVar6 = puVar1[2];
                  uVar7 = puVar1[3];
                  puVar2 = (undefined8 *)((longlong)local_268 + lVar11 + 0x10);
                  uVar3 = *puVar2;
                  uVar8 = puVar2[1];
                  *(undefined8 *)((longlong)local_268 + lVar11) = 0;
                  ((undefined8 *)((longlong)local_268 + lVar11))[1] = 0;
                  puVar2 = (undefined8 *)((longlong)local_268 + lVar11 + 0x10);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  puVar1 = (undefined4 *)((longlong)local_278 + lVar12);
                  *puVar1 = uVar4;
                  puVar1[1] = uVar5;
                  puVar1[2] = uVar6;
                  puVar1[3] = uVar7;
                  puVar2 = (undefined8 *)((longlong)local_278 + lVar12 + 0x10);
                  *puVar2 = uVar3;
                  puVar2[1] = uVar8;
                  local_110 = local_110 + local_228;
                  local_290 = 0xf8933bd2adf03180;
                  if (local_110 != local_1a0) {
                    local_290 = 0x8e0b66e3ebc201aa;
                  }
                  local_298 = 0xc951fad1304b91d2;
                }
                else if (uVar9 == 0x479893142db5431a) {
                  local_290 = 0x36b48321006c24c;
                  local_298 = 0x9474bb0de19b12a;
                  local_168 = local_1d8;
                  local_160 = local_1d0;
                }
              }
              else if ((longlong)uVar9 < 0x6ad5c6df33001416) {
                if (uVar9 == 0x50d34880ad4252e4) {
                  lVar11 = ((longlong)local_240 + (local_270 - (longlong)local_230) & local_270) + local_210;
                  local_290 = 0x822ef15776cd8e4c;
                  if ((undefined8 *)((longlong)local_268 + lVar11) <= local_278) {
                    local_290 = 0xadbf1cf3f48ca2d6;
                  }
                  if ((undefined8 *)(lVar11 + (longlong)local_278) <= local_268) {
                    local_290 = 0xadbf1cf3f48ca2d6;
                  }
                  local_298 = 0x585a5d3174ed48a0;
                  local_1e8 = local_268;
                  local_1e0 = local_278;
                }
                else if (uVar9 == 0x602872ca0a52c7b6) {
                  uVar3 = *local_130;
                  *local_130 = 0;
                  *local_128 = uVar3;
                  local_130 = local_130 + 1;
                  local_290 = 0x6d87c24c3dd7796e;
                  if (local_130 != param_2) {
                    local_290 = 0xef955c7c857e3c6f;
                  }
                  local_128 = local_128 + 1;
                  local_298 = 0x8fbd2eb68f2cfbd9;
                }
                else if (uVar9 == 0x65a400e0c39a32a5) {
                  local_1b0 = local_180 & local_218;
                  local_c0 = (undefined8 *)((local_1b0 << (local_280 & 0x3f)) + (longlong)param_2);
                  local_b8 = (local_1b0 << (local_280 & 0x3f)) + local_250;
                  local_290 = 0xf27653ab2b8b2f51;
                  local_298 = 0x12f8efdf929170d6;
                  local_158 = local_258;
                }
              }
              else if (uVar9 == 0x6ad5c6df33001416) {
                local_290 = 0x6fff9a164d1df744;
                local_298 = 0xfb0c3c3e566964ea;
                local_140 = local_1f8;
                local_138 = local_1f0;
              }
              else if (uVar9 == 0x716403d0e29c7de1) {
                local_178 = local_238 << (local_280 & 0x3f);
                local_290 = 0x130fc14516e7b1e;
                if (local_238 != local_258) {
                  local_290 = 0xa343a0b8333e62f6;
                }
                local_298 = 0x10ee855936dfea76;
                local_200 = (undefined8 *)0x0;
              }
              else if (uVar9 == 0x7ac74f4f0b10f934) {
                local_290 = 0x4f14d0ed460eed64;
                if (local_281 == '\0') {
                  local_290 = 0x41cc803fdca0fc04;
                }
                local_298 = 0x78dcdea486217362;
                local_148 = local_d8;
              }
            }
            if ((longlong)uVar9 < 0xb55df8027e2e4da) break;
            if ((longlong)uVar9 < 0x1a46161d0292267b) {
              if (uVar9 == 0xb55df8027e2e4da) {
                uVar9 = (longlong)local_240 + (local_270 - (longlong)local_230);
                local_198 = (uVar9 >> (local_280 & 0x3f)) + local_260;
                local_290 = 0x18a46e5905527111;
                if (local_1c8 <= uVar9) {
                  local_290 = 0x92038abfaa30e519;
                }
                local_298 = 0xc2d0c23f0772b7fd;
                local_1e8 = local_268;
                local_1e0 = local_278;
              }
              else if (uVar9 == 0xbea4a4bec646e01) {
                lVar11 = local_118 << (local_280 & 0x3f);
                lVar12 = local_118 << (local_280 & 0x3f);
                puVar1 = (undefined4 *)((longlong)local_268 + lVar11);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                puVar2 = (undefined8 *)((longlong)local_268 + lVar11 + 0x10);
                uVar3 = *puVar2;
                uVar8 = puVar2[1];
                *(undefined8 *)((longlong)local_268 + lVar11) = 0;
                ((undefined8 *)((longlong)local_268 + lVar11))[1] = 0;
                puVar2 = (undefined8 *)((longlong)local_268 + lVar11 + 0x10);
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar1 = (undefined4 *)((longlong)local_278 + lVar12);
                *puVar1 = uVar4;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                puVar2 = (undefined8 *)((longlong)local_278 + lVar12 + 0x10);
                *puVar2 = uVar3;
                puVar2[1] = uVar8;
                local_118 = local_118 + local_228;
                local_290 = 0x84ceafb161cf489d;
                if (local_118 != local_188) {
                  local_290 = 0x35fe2b768b3df3d8;
                }
                local_298 = 0x3e14613d67599dd9;
              }
              else if (uVar9 == 0x11de794d67b19168) {
                local_278 = local_200;
                local_250 = (longlong)local_200 + local_e8;
                uVar3 = *param_3;
                *param_3 = 0;
                *(undefined8 *)((longlong)local_200 + local_e8) = uVar3;
                local_d8 = (undefined8 *)*local_248;
                local_268 = (undefined8 *)*param_1;
                local_281 = local_268 == param_2;
                local_290 = 0xe0ca699978b57d64;
                if (param_2 != local_d8) {
                  local_290 = 0x69da1b45a9ae9fe5;
                }
                local_298 = 0x131d540aa2be66d1;
                local_230 = local_268;
              }
            }
            else if (uVar9 == 0x1a46161d0292267b) {
              lVar11 = FUN_1801d61c8(local_178 + local_208);
              local_200 = (undefined8 *)(local_208 + lVar11 & 0xffffffffffffffe0);
              local_200[-1] = lVar11;
              local_290 = 0xacb158cb5ed1b3a6;
              local_298 = 0xbd6f2186396022ce;
            }
            else if (uVar9 == 0x31c2c1039dbba052) {
              local_290 = 0xdaea04474b8d5a08;
              if (local_1a8 != local_1a0) {
                local_290 = 0x5e0b00dd0d796795;
              }
              local_298 = 0x199393c920cc248f;
              local_1d8 = local_a8;
              local_1d0 = local_a0;
            }
            else if (uVar9 == 0x3444591aa2e82077) {
              thunk_FUN_1801f42e0(local_100,local_108);
              local_290 = 0x9489a7fea5e87c08;
              local_298 = 0x78511fa94cb3a31a;
            }
          }
          if (0x84d853d08013887 < (longlong)uVar9) break;
          if (uVar9 == 0xf3d73d93da0b1bb5) {
            local_290 = 0xbe84d62d84c26dbb;
            if (local_281 == '\0') {
              local_290 = 0x43d788817e928baa;
            }
            local_298 = 0x4882570159706f70;
            local_120 = local_268;
          }
          else if (uVar9 == 0xf5e541c28061ea76) {
            local_188 = local_198 & local_218;
            local_90 = (undefined8 *)((local_188 << (local_280 & 0x3f)) + (longlong)local_268);
            local_88 = (undefined8 *)((local_188 << (local_280 & 0x3f)) + (longlong)local_278);
            local_290 = 0xb323210648e7cb57;
            local_298 = 0xb8c96b4da483a556;
            local_118 = local_258;
          }
          else if (uVar9 == 0xf606812cddb202cb) {
            local_60 = local_120;
            local_290 = 0xb60489ef5aa5ebb7;
            if (local_120 != (undefined8 *)0x0) {
              local_290 = 0xd45bcfc100577c5e;
            }
            local_298 = 0x5adc31b8b3fe34a5;
          }
        }
        if (uVar9 != 0x9a3cc4524dcd9d8) break;
        local_150 = local_70 + 1;
        local_290 = 0x6bf65c0758820e3f;
        if (local_150 != local_80) {
          local_290 = 0x857e2ff0ab2cc2f6;
        }
        local_298 = 0xc4189a275320c2fc;
      }
      if (uVar9 != 0xa2c0382ce1f7366) break;
      uVar3 = *local_168;
      *local_168 = 0;
      *local_160 = uVar3;
      local_168 = local_168 + 1;
      local_290 = 0x65087e30c0e8d723;
      if (local_168 != param_2) {
        local_290 = 0xac5dea3c65b6dac2;
      }
      local_160 = local_160 + 1;
      local_298 = 0xa671e9beaba9a9a4;
    }
  } while (uVar9 != 0x84d853d08013888);
LAB_18010bbf0:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_18010bc80(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xb42c93aee40c8d47;
  local_58 = 0x4aa25aeac3bfe817;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xfc00e44970e24198;
        if (uVar1 != 0xfe8ec94427b36550) break;
        local_48 = *param_1;
        local_50 = 0xdcca80c53f88b3f8;
        if (local_48 == 0) {
          local_50 = 0xd293a8d4f4194ef0;
        }
        local_58 = 0x855359260fc78afe;
      }
      if (uVar1 != 0x5999d9e3304f3906) break;
      FUN_18010eba0(local_48);
      thunk_FUN_1801f42e0(local_48,0x98);
      local_50 = 0x9b923372daf62e7a;
      local_58 = 0xcc52c2802128ea74;
    }
    local_50 = local_50 ^ 0xfc00e44970e24198;
  } while (uVar1 != 0x57c0f1f2fbdec40e);
  return;
}



undefined8 * FUN_18010bdb0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_141;
  ulonglong local_140;
  ulonglong local_138;
  uint local_12c;
  ulonglong local_128;
  uintptr_t local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  uintptr_t *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;

  local_138 = 0x604c9562909bba1d;
  local_140 = 0x69a53577bcd69666;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_138 ^ 0x3b74f7f965ba2b30;
            uVar1 = local_138 ^ local_140;
            local_140 = local_140 ^ 0x3b74f7f965ba2b30;
            local_138 = uVar2;
            if ((longlong)uVar1 < 0x2c323442de6c98a8) break;
            if ((longlong)uVar1 < 0x4721ed3c6845715f) {
              if (uVar1 == 0x2c323442de6c98a8) {
                local_a8 = *(longlong *)(local_90 + -8);
                local_138 = 0x2e83b60d3636474;
                if ((ulonglong)((local_90 + local_118) - local_a8) < local_100) {
                  local_138 = 0x8034b007dd2c86b5;
                }
                local_140 = 0x45c9d65cbb26152b;
              }
              else if (uVar1 == 0x3fcc556306d4b724) {
                thunk_FUN_1801f42e0(local_c0,local_c8);
                local_138 = 0xb9bd5888589206b3;
                local_140 = 0xcc13e5ddac5716b4;
              }
              else if (uVar1 == 0x45a8bd7a60960024) {
                local_c0 = *param_3;
                local_c8 = local_e0 + local_110;
                local_138 = 0xad474f92edc602be;
                if (local_f8 < local_c8) {
                  local_138 = 0x2f7d1e9e5ec872ae;
                }
                local_140 = 0x928b1af1eb12b59a;
                local_98 = local_c0;
              }
            }
            else if ((longlong)uVar1 < 0x7ddada39123f1438) {
              if (uVar1 == 0x79c45635b0389226) {
                thunk_FUN_1801f42e0(local_d0,local_d8);
                local_138 = 0x8eab5a2d11a0c91f;
                local_140 = 0x5e17cd063a093f85;
              }
              else {
                if (uVar1 == 0x75aebd55f4c51007) {
                  return param_1;
                }
                if (uVar1 == 0x4721ed3c6845715f) goto LAB_18010c41d;
              }
            }
            else if (uVar1 == 0x7ddada39123f1438) {
              local_c8 = local_e0 + local_108;
              local_138 = 0xdfd08b795aeba039;
              local_140 = 0xe01cde1a5c3f171d;
              local_c0 = local_a0;
            }
          }
          if (-0xcb520ec4b2682c9 < (longlong)uVar1) break;
          if (uVar1 == 0xbdf6046fb5dac734) {
            local_a0 = *(longlong *)(local_98 + -8);
            local_138 = 0x2a3361bad8683e73;
            if ((ulonglong)((local_98 + local_118) - local_a0) < local_100) {
              local_138 = 0xa4a364907e8e5773;
            }
            local_140 = 0xd979bea96cb1434b;
          }
          else if (uVar1 == 0xc5fd665b660a939e) {
            local_d8 = local_e8 + local_108;
            local_d0 = local_a8;
            local_138 = 0x35d544b45cce7348;
            local_140 = 0x4c111281ecf6e16e;
          }
          else if (uVar1 == 0xd0bc972b2ba9f69a) {
            *local_b0 = local_120;
            *local_f0 = local_128;
            *(undefined1 *)param_2 = local_141;
            local_e0 = *local_b8;
            local_138 = 0xc2b878f747b88268;
            if (local_128 < local_e0) {
              local_138 = 0xf2be78d8d3eb924b;
            }
            local_140 = 0xb716c5a2b37d926f;
          }
        }
        if (uVar1 != 0x9e9a0152c4d2c7b) break;
        local_141 = 0;
        local_f8 = 0xfff;
        local_100 = 0x20;
        local_120 = 0;
        local_108 = 0x28;
        local_12c = 0;
        local_128 = 0xf;
        local_110 = 1;
        local_118 = -8;
        local_68 = *param_3;
        lStack_60 = param_3[1];
        local_58 = param_3[2];
        lStack_50 = param_3[3];
        param_3[2] = 0;
        local_b8 = (ulonglong *)(param_3 + 3);
        param_3[3] = 0xf;
        *(undefined1 *)param_3 = 0;
        local_88 = (undefined4)*param_2;
        uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_80 = (undefined4)param_2[1];
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_78 = (undefined4)param_2[2];
        uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_70 = (undefined4)param_2[3];
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_b0 = (uintptr_t *)(param_2 + 2);
        param_2[2] = 0;
        local_f0 = (ulonglong *)(param_2 + 3);
        param_2[3] = 0xf;
        *(undefined1 *)param_2 = 0;
        FUN_180109d00(param_1,0,&local_88,&local_68);
        *param_1 = &PTR_FUN_1802174a0;
        *(undefined1 *)(param_1 + 0x12) = param_4;
        *(undefined1 *)((longlong)param_1 + 0x91) = param_4;
        local_e8 = *local_f0;
        local_138 = 0xa4f285b1330192fc;
        if (0xf < local_e8) {
          local_138 = 0x7a78768dea9adbb2;
        }
        local_140 = 0x744e129a18a86466;
      }
      if (uVar1 != 0xe366417f232bfd4) break;
      local_d0 = *param_2;
      local_d8 = local_e8 + local_110;
      local_138 = 0x5ca764d5bf47864;
      if (local_f8 < local_d8) {
        local_138 = 0x503c143a35a072ea;
      }
      local_140 = 0x7c0e2078ebccea42;
      local_90 = local_d0;
    }
  } while (uVar1 != 0xf34adf13b4d97d38);
LAB_18010c41d:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_12c,local_120);
}



undefined8 FUN_18010c460(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x513ac4ec179afc7d;
  local_50 = 0xd160851c202ce3db;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x5f4dff5617d30165;
        if (uVar1 != 0x805a41f037b61fa6) break;
        FUN_18010eba0(param_1);
        local_48 = 0x1b85b9aa73ec950d;
        if ((param_2 & 1) == 0) {
          local_48 = 0x327614a340ccff95;
        }
        local_50 = 0x5c51d35061334cb1;
      }
      if (uVar1 != 0x47d46afa12dfd9bc) break;
      thunk_FUN_1801f42e0(param_1,0x98);
      local_48 = 0x53570097e03594ed;
      local_50 = 0x3d70c764c1ca27c9;
    }
    local_48 = local_48 ^ 0x5f4dff5617d30165;
  } while (uVar1 != 0x6e27c7f321ffb324);
  return param_1;
}



void FUN_18010c5b0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x144262cc53fef375;
  local_58 = 0x52e2f0ff80bd5ab5;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x63644695bb20e6b8;
        if (uVar1 != 0xde6144a057dfb9a6) break;
        FUN_18010eba0(local_48);
        thunk_FUN_1801f42e0(local_48,0xa0);
        local_50 = 0xab0bae5d1c59ca73;
        local_58 = 0x346468ad930ee376;
      }
      if (uVar1 != 0x46a09233d343a9c0) break;
      local_48 = *param_1;
      local_50 = 0x6bc3a47cbaf70840;
      if (local_48 == 0) {
        local_50 = 0x2acd262c627f98e3;
      }
      local_58 = 0xb5a2e0dced28b1e6;
    }
    local_50 = local_50 ^ 0x63644695bb20e6b8;
  } while (uVar1 != 0x9f6fc6f08f572905);
  return;
}



undefined8 *
FUN_18010c6e0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_141;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  uintptr_t local_128;
  uint local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  uintptr_t *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;

  local_138 = 0xf40ff89bedabbf48;
  local_140 = 0x1540a7d2f24a8006;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_138 ^ 0x84af647faad682f1;
            uVar1 = local_138 ^ local_140;
            local_140 = local_140 ^ 0x84af647faad682f1;
            local_138 = uVar2;
            if ((longlong)uVar1 < 0x198a5439f3500e43) break;
            if ((longlong)uVar1 < 0x4828a73a5d8730b9) {
              if (uVar1 == 0x198a5439f3500e43) {
                local_c8 = local_e8 + local_108;
                local_c0 = local_98;
                local_138 = 0x9ce9e8040303d3b5;
                local_140 = 0x3be6aeead6018224;
              }
              else if (uVar1 == 0x2766b8a1a240612a) {
                local_98 = *(longlong *)(local_a8 + -8);
                local_138 = 0xa7edafcc7edee496;
                if ((ulonglong)((local_a8 + local_118) - local_98) < local_100) {
                  local_138 = 0xaeab251bb21a3005;
                }
                local_140 = 0xb7217122414a3e46;
              }
              else if (uVar1 == 0x256f135da8e2942f) {
                return param_1;
              }
            }
            else if ((longlong)uVar1 < 0x56bf1b76d649486d) {
              if (uVar1 == 0x4828a73a5d8730b9) {
                local_90 = *(longlong *)(local_a0 + -8);
                local_138 = 0x3f633803e6e57cf6;
                if ((ulonglong)((local_a0 + local_118) - local_90) < local_100) {
                  local_138 = 0xeec4b2d5711588b;
                }
                local_140 = 0x69dc237530ac349b;
              }
              else if (uVar1 == 0x4ab615429e6739c9) {
                thunk_FUN_1801f42e0(local_d0,local_d8);
                local_138 = 0x1587daededf9ddd2;
                local_140 = 0x30e8c9b0451b49fd;
              }
            }
            else if (uVar1 == 0x6730685867bd6c10) {
              local_d8 = local_e0 + local_108;
              local_d0 = local_90;
              local_138 = 0x1d3edfb6d52d0f44;
              local_140 = 0x5788caf44b4a368d;
            }
            else if (uVar1 == 0x56bf1b76d649486d) goto LAB_18010cd71;
          }
          if (0xf7122f6691b054a < (longlong)uVar1) break;
          if (uVar1 == 0xa70f46eed5025191) {
            thunk_FUN_1801f42e0(local_c0,local_c8);
            local_138 = 0x730b491dc91fd4b8;
            local_140 = 0x66866e011eff2c8e;
          }
          else if (uVar1 == 0xb6dcb50bc83a3faf) {
            local_d0 = *param_3;
            local_d8 = local_e0 + local_110;
            local_138 = 0x48a7abe61b7fa73e;
            if (local_f8 < local_d8) {
              local_138 = 0x4a39199ed89fae4e;
            }
            local_140 = 0x211bea485189ef7;
            local_a0 = local_d0;
          }
          else if (uVar1 == 0xe14f5f491fe13f4e) {
            local_141 = 0;
            local_f8 = 0xfff;
            local_128 = 0;
            local_100 = 0x20;
            local_108 = 0x28;
            local_11c = 0;
            local_130 = 0xf;
            local_110 = 1;
            local_118 = -8;
            local_68 = *param_3;
            lStack_60 = param_3[1];
            local_58 = param_3[2];
            lStack_50 = param_3[3];
            param_3[2] = 0;
            local_b8 = (ulonglong *)(param_3 + 3);
            param_3[3] = 0xf;
            *(undefined1 *)param_3 = 0;
            local_88 = (undefined4)*param_2;
            uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
            uStack_80 = (undefined4)param_2[1];
            uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
            local_78 = (undefined4)param_2[2];
            uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
            uStack_70 = (undefined4)param_2[3];
            uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
            local_b0 = (uintptr_t *)(param_2 + 2);
            param_2[2] = 0;
            local_f0 = (ulonglong *)(param_2 + 3);
            param_2[3] = 0xf;
            *(undefined1 *)param_2 = 0;
            FUN_180109d00(param_1,1,&local_88,&local_68);
            *param_1 = &PTR_FUN_1802174b0;
            *(undefined4 *)(param_1 + 0x12) = param_4;
            *(undefined4 *)((longlong)param_1 + 0x94) = param_4;
            *(undefined4 *)(param_1 + 0x13) = param_5;
            *(undefined4 *)((longlong)param_1 + 0x9c) = param_6;
            local_e8 = *local_f0;
            local_138 = 0xba63bb2eb2dea899;
            if (0xf < local_e8) {
              local_138 = 0xa09fbec40c2555e4;
            }
            local_140 = 0xafee9c32653e50af;
          }
        }
        if (uVar1 != 0xf7122f6691b054b) break;
        local_c0 = *param_2;
        local_c8 = local_e8 + local_110;
        local_138 = 0xb2c1cf568d86665f;
        if (local_f8 < local_c8) {
          local_138 = 0x32a83119fac456e4;
        }
        local_140 = 0x15ce89b8588437ce;
        local_a8 = local_c0;
      }
      if (uVar1 != 0x158d271cd7e0f836) break;
      *local_b0 = local_128;
      *local_f0 = local_130;
      *(undefined1 *)param_2 = local_141;
      local_e0 = *local_b8;
      local_138 = 0xb9c2ea58526741c5;
      if (local_130 < local_e0) {
        local_138 = 0x2a714c0e32bfea45;
      }
      local_140 = 0x9cadf905fa85d5ea;
    }
  } while (uVar1 != 0x10ccdeee3f94dad0);
LAB_18010cd71:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_11c,local_128);
}



undefined8 FUN_18010cdb0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x49bfc33b9c1fdd4c;
  local_50 = 0x688eb910fa8ec188;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x37488eeec5be23b9;
        if (uVar1 != 0x21317a2b66911cc4) break;
        FUN_18010eba0(param_1);
        local_48 = 0x45e80b745c367c2c;
        if ((param_2 & 1) == 0) {
          local_48 = 0x16c4dcf899cad1da;
        }
        local_50 = 0x752bd0deff01171f;
      }
      if (uVar1 != 0x30c3dbaaa3376b33) break;
      thunk_FUN_1801f42e0(param_1,0xa0);
      local_48 = 0x665e2d7a9ce7331d;
      local_50 = 0x5b1215cfa2cf5d8;
    }
    local_48 = local_48 ^ 0x37488eeec5be23b9;
  } while (uVar1 != 0x63ef0c2666cbc6c5);
  return param_1;
}



void FUN_18010cf00(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x3cedd2fe74e45fb0;
  local_58 = 0xec71cbdc03633523;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x1d6580053ba3e6f1;
        if (uVar1 != 0x9ba52bf96149817b) break;
        FUN_18010eba0(local_48);
        thunk_FUN_1801f42e0(local_48,0xa8);
        local_50 = 0xa159650d109cb7c0;
        local_58 = 0x437fdc0b3bdadcbf;
      }
      if (uVar1 != 0xd09c192277876a93) break;
      local_48 = *param_1;
      local_50 = 0x170688288166e414;
      if (local_48 == 0) {
        local_50 = 0x6e851ad7cb690e10;
      }
      local_58 = 0x8ca3a3d1e02f656f;
    }
    local_50 = local_50 ^ 0x1d6580053ba3e6f1;
  } while (uVar1 != 0xe226b9062b466b7f);
  return;
}



undefined8 *
FUN_18010d030(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_181;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  uintptr_t local_168;
  uint local_15c;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong *local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong *local_f8;
  uintptr_t *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;

  local_178 = 0xd153d4e7bf566ae3;
  local_180 = 0x729ae294af48e885;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_178 ^ 0x36de54af3f0a50d5;
            uVar1 = local_178 ^ local_180;
            local_180 = local_180 ^ 0x36de54af3f0a50d5;
            local_178 = uVar2;
            if (0xfe23bafbf5cf876 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x6c34d4129bcb8003) {
              if (uVar1 == 0x88055cd9b71159ad) {
                thunk_FUN_1801f42e0(local_100,local_108);
                local_178 = 0xe96bb55e2bac0564;
                local_180 = 0xb7bfe7be03f89cd;
              }
              else if (uVar1 == 0x90decf7408e65a2a) {
                thunk_FUN_1801f42e0(local_110,local_118);
                local_178 = 0x9e1a7351445b812b;
                local_180 = 0xd894b39d51a5e627;
              }
            }
            else if (uVar1 == 0x93cb2bed64347ffd) {
              local_d0 = *(longlong *)(local_e0 + -8);
              local_178 = 0xc9c5fb74b663c84e;
              if ((ulonglong)((local_e0 + local_158) - local_d0) < local_140) {
                local_178 = 0xbcad935c32ff3c11;
              }
              local_180 = 0xf87e18f96cdadd0c;
            }
            else if (uVar1 == 0xa3c93673101e8266) {
              local_181 = 0;
              local_138 = 0xfff;
              local_168 = 0;
              local_140 = 0x20;
              local_148 = 0x28;
              local_15c = 0;
              local_170 = 0xf;
              local_150 = 1;
              local_158 = -8;
              local_a8 = *param_3;
              lStack_a0 = param_3[1];
              local_98 = param_3[2];
              lStack_90 = param_3[3];
              param_3[2] = 0;
              local_f8 = (ulonglong *)(param_3 + 3);
              param_3[3] = 0xf;
              *(undefined1 *)param_3 = 0;
              local_c8 = (undefined4)*param_2;
              uStack_c4 = *(undefined4 *)((longlong)param_2 + 4);
              uStack_c0 = (undefined4)param_2[1];
              uStack_bc = *(undefined4 *)((longlong)param_2 + 0xc);
              local_b8 = (undefined4)param_2[2];
              uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x14);
              uStack_b0 = (undefined4)param_2[3];
              uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
              local_f0 = (uintptr_t *)(param_2 + 2);
              param_2[2] = 0;
              local_130 = (ulonglong *)(param_2 + 3);
              param_2[3] = 0xf;
              *(undefined1 *)param_2 = 0;
              FUN_180109d00(param_1,2,&local_c8,&local_a8);
              *param_1 = &PTR_FUN_1802174c0;
              *(undefined4 *)(param_1 + 0x12) = param_4;
              *(undefined4 *)((longlong)param_1 + 0x94) = param_4;
              *(undefined4 *)(param_1 + 0x13) = param_5;
              *(undefined4 *)((longlong)param_1 + 0x9c) = param_6;
              *(undefined4 *)(param_1 + 0x14) = param_7;
              local_128 = *local_130;
              local_178 = 0x46801ba5ccd2f00;
              if (0xf < local_128) {
                local_178 = 0xe99a713028025bde;
              }
              local_180 = 0xe6784a9f975ea3a9;
            }
            else if (uVar1 == 0xe2104b25cb938ca9) {
              *local_f0 = local_168;
              *local_130 = local_170;
              *(undefined1 *)param_2 = local_181;
              local_120 = *local_f8;
              local_178 = 0x11ba88f0c379b5fe;
              if (local_170 < local_120) {
                local_178 = 0x20b3503dc1feff05;
              }
              local_180 = 0x5734483cd687d2f2;
            }
          }
          if ((longlong)uVar1 < 0x5920a283ff62d29c) break;
          if (uVar1 == 0x5920a283ff62d29c) {
            local_d8 = *(longlong *)(local_e8 + -8);
            local_178 = 0xda117c9225fa48b3;
            if ((ulonglong)((local_e8 + local_158) - local_d8) < local_140) {
              local_178 = 0x9d7b5a6b94678f66;
            }
            local_180 = 0xf6844ba3f4666342;
          }
          else if (uVar1 == 0x6bff11c86001ec24) {
            local_108 = local_128 + local_148;
            local_100 = local_d8;
            local_178 = 0x724527b0a6106747;
            local_180 = 0xfa407b6911013eea;
          }
          else if (uVar1 == 0x7787180117792df7) {
            local_110 = *param_3;
            local_118 = local_120 + local_150;
            local_178 = 0xfa93ad149bb7633d;
            if (local_138 < local_118) {
              local_178 = 0xf986498df76546ea;
            }
            local_180 = 0x6a4d626093513917;
            local_e0 = local_110;
          }
        }
        if ((longlong)uVar1 < 0x44d38ba55e25e11d) break;
        if (uVar1 == 0x44d38ba55e25e11d) {
          local_118 = local_120 + local_148;
          local_178 = 0x1ae1e446c227722b;
          local_180 = 0x8a3f2b32cac12801;
          local_110 = local_d0;
        }
        else if (uVar1 == 0x468ec0cc15fe670c) {
          return param_1;
        }
      }
      if (uVar1 != 0xfe23bafbf5cf877) break;
      local_100 = *param_2;
      local_108 = local_128 + local_150;
      local_178 = 0x171fe7bc8bf94668;
      if (local_138 < local_108) {
        local_178 = 0xc63a19e6c38acd59;
      }
      local_180 = 0x9f1abb653ce81fc5;
      local_e8 = local_100;
    }
  } while ((uVar1 != 0x2c953731d19c2bf1) && (uVar1 != 0x31bbe38ddab91542));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_15c,local_168);
}



undefined8 FUN_18010d770(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x38814ba14c2391b8;
  local_50 = 0xf9844ffa22695db3;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x88507620a6c8863a;
        if (uVar1 != 0xc105045b6e4acc0b) break;
        FUN_18010eba0(param_1);
        local_48 = 0x711851dd2c7cd0f2;
        if ((param_2 & 1) == 0) {
          local_48 = 0x1a067ebe2056a62d;
        }
        local_50 = 0xb4750e060fe4d904;
      }
      if (uVar1 != 0xc56d5fdb239809f6) break;
      thunk_FUN_1801f42e0(param_1,0xa8);
      local_48 = 0x52c01b9e3d968f94;
      local_50 = 0xfcb36b261224f0bd;
    }
    local_48 = local_48 ^ 0x88507620a6c8863a;
  } while (uVar1 != 0xae7370b82fb27f29);
  return param_1;
}



void FUN_18010d8c0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xbd15839c8aecdca9;
  local_58 = 0x60079a7131dbcc93;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xd8d813524ab64de8;
        if (uVar1 != 0xdd1219edbb37103a) break;
        local_48 = *param_1;
        local_50 = 0xe782c6fb3d9de9fc;
        if (local_48 == 0) {
          local_50 = 0x540fdd6f281f19bc;
        }
        local_58 = 0xf4069090c51b6c39;
      }
      if (uVar1 != 0x1384566bf88685c5) break;
      FUN_180078630(local_48 + 0x98);
      FUN_18010eba0(local_48);
      thunk_FUN_1801f42e0(local_48,0xb0);
      local_50 = 0xa29cbc68591274d6;
      local_58 = 0x295f197b4160153;
    }
    local_50 = local_50 ^ 0xd8d813524ab64de8;
  } while (uVar1 != 0xa0094dffed047585);
  return;
}



undefined8 *
FUN_18010d9f0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_159;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  uintptr_t local_140;
  uint local_134;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong *local_108;
  ulonglong *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  uintptr_t *local_c8;
  uintptr_t *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;

  local_150 = 0x995615a72c5a5e10;
  local_158 = 0x5cc3bc2e08273324;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar7 = local_150 ^ 0x58eb25e2bb01b288;
            uVar6 = local_150 ^ local_158;
            local_158 = local_158 ^ 0x58eb25e2bb01b288;
            local_150 = uVar7;
            if (0x1be431f8439a6583 < (longlong)uVar6) break;
            if ((longlong)uVar6 < -0x394991339d8be72) {
              if (uVar6 == 0xaabbb84d75cbbb5e) {
                thunk_FUN_1801f42e0(local_d0,local_d8);
                local_150 = 0x93ba256c8e1e58ba;
                local_158 = 0x87d9b8ce177ba302;
              }
              else if (uVar6 == 0xc595a989247d6d34) {
                local_159 = 0;
                local_110 = 0xfff;
                local_140 = 0;
                local_118 = 0x20;
                local_120 = 0x28;
                local_134 = 0;
                local_148 = 0xf;
                local_128 = 1;
                local_130 = -8;
                local_78 = *param_3;
                lStack_70 = param_3[1];
                local_68 = param_3[2];
                lStack_60 = param_3[3];
                local_c8 = (uintptr_t *)(param_3 + 2);
                param_3[2] = 0;
                local_108 = (ulonglong *)(param_3 + 3);
                param_3[3] = 0xf;
                *(undefined1 *)param_3 = 0;
                local_98 = (undefined4)*param_2;
                uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
                uStack_90 = (undefined4)param_2[1];
                uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
                local_88 = (undefined4)param_2[2];
                uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
                uStack_80 = (undefined4)param_2[3];
                uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
                local_c0 = (uintptr_t *)(param_2 + 2);
                param_2[2] = 0;
                local_100 = (ulonglong *)(param_2 + 3);
                param_2[3] = 0xf;
                *(undefined1 *)param_2 = 0;
                FUN_180109d00(param_1,3,&local_98,&local_78);
                *param_1 = &PTR_FUN_1802174d0;
                *(undefined4 *)(param_1 + 0x12) = param_5;
                *(undefined4 *)((longlong)param_1 + 0x94) = param_5;
                uVar1 = param_4[2];
                param_4[2] = 0;
                uVar2 = *(undefined4 *)param_4;
                uVar3 = *(undefined4 *)((longlong)param_4 + 4);
                uVar4 = *(undefined4 *)(param_4 + 1);
                uVar5 = *(undefined4 *)((longlong)param_4 + 0xc);
                *param_4 = 0;
                param_4[1] = 0;
                *(undefined4 *)(param_1 + 0x13) = uVar2;
                *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
                *(undefined4 *)(param_1 + 0x14) = uVar4;
                *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
                param_1[0x15] = uVar1;
                local_f8 = *local_100;
                local_150 = 0x70cafe6b6e861e91;
                if (0xf < local_f8) {
                  local_150 = 0x98c2052531c4a4a7;
                }
                local_158 = 0x64a963c9f7e3e529;
              }
              else if (uVar6 == 0xda636980e848138b) {
                local_e8 = local_f0 + local_120;
                local_e0 = local_b0;
                local_150 = 0x6c4bc8c3a2ff290a;
                local_158 = 0x25b9a2db401f50a1;
              }
            }
            else if (uVar6 == 0xfc6b66ecc627418e) {
              local_d0 = *param_2;
              local_d8 = local_f8 + local_128;
              local_150 = 0xcae37d250f365264;
              if (local_110 < local_d8) {
                local_150 = 0x415869c2d2b67ddb;
              }
              local_158 = 0x6058c5687afde93a;
              local_a0 = local_d0;
            }
            else if (uVar6 == 0x14639da29965fbb8) {
              *local_c0 = local_140;
              *local_100 = local_148;
              *(undefined1 *)param_2 = local_159;
              local_f0 = *local_108;
              local_150 = 0x3f5ec07a2750eb50;
              if (local_148 < local_f0) {
                local_150 = 0x5306313697c3a1c;
              }
              local_158 = 0x34a8f6ec8b899fb4;
            }
            else if (uVar6 == 0xbf63696acd974e4) {
              *local_c8 = local_140;
              *local_108 = local_148;
              *(undefined1 *)param_3 = local_159;
              FUN_180078630(param_4);
              return param_1;
            }
          }
          if ((longlong)uVar6 < 0x319895ffe2f5a5a8) break;
          if ((longlong)uVar6 < 0x706f36099405fe19) {
            if (uVar6 == 0x319895ffe2f5a5a8) {
              local_e0 = *param_3;
              local_e8 = local_f0 + local_128;
              local_150 = 0xd4bc217485063276;
              if (local_110 < local_e8) {
                local_150 = 0xe4d90ed3ae8f2c66;
              }
              local_158 = 0x9d4e4b6c67e64bdd;
              local_b8 = local_e0;
            }
            else if (uVar6 == 0x49f26a18e2e079ab) {
              thunk_FUN_1801f42e0(local_e0,local_e8);
              local_150 = 0x85786bfbf9aae23c;
              local_158 = 0x8e8e5d6d557396d8;
            }
          }
          else if (uVar6 == 0x799745bfc96967bb) {
            local_b0 = *(longlong *)(local_b8 + -8);
            local_150 = 0xe62d91443ae68472;
            if ((ulonglong)((local_b8 + local_130) - local_b0) < local_118) {
              local_150 = 0x1d0d141a628edd49;
            }
            local_158 = 0xc76e7d9a8ac6cec2;
          }
          else if (uVar6 == 0x706f36099405fe19) goto LAB_18010e093;
        }
        if (uVar6 != 0x1be431f8439a6584) break;
        local_d8 = local_f8 + local_120;
        local_150 = 0x4c1b4b3979251034;
        local_158 = 0xe6a0f3740ceeab6a;
        local_d0 = local_a8;
      }
      if (uVar6 != 0x2100acaaa84b94e1) break;
      local_a8 = *(longlong *)(local_a0 + -8);
      local_150 = 0xa98740291631c229;
      if ((ulonglong)((local_a0 + local_130) - local_a8) < local_118) {
        local_150 = 0xc20c47d8c1ae59b4;
      }
      local_158 = 0xd9e8762082343c30;
    }
  } while (uVar6 != 0x2143ecdeb0204ab0);
LAB_18010e093:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_134,local_140);
}



longlong FUN_18010e100(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xa701f984dd1b55a2;
  local_50 = 0x55c0768507ac883c;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc1febe69d2dfd511;
        if (uVar1 != 0xf2c18f01dab7dd9e) break;
        FUN_180078630(param_1 + 0x98);
        FUN_18010eba0(param_1);
        local_48 = 0xf949f44f500776b;
        if ((param_2 & 1) == 0) {
          local_48 = 0xba1fe677b3a65b77;
        }
        local_50 = 0xf4e724561461343b;
      }
      if (uVar1 != 0xfb73bb12e1614350) break;
      thunk_FUN_1801f42e0(param_1,0xb0);
      local_48 = 0x7d511f2920d3e06b;
      local_50 = 0x33a9dd0887148f27;
    }
    local_48 = local_48 ^ 0xc1febe69d2dfd511;
  } while (uVar1 != 0x4ef8c221a7c76f4c);
  return param_1;
}



void FUN_18010e260(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x1544a4332917eb96;
  local_58 = 0xec1b896091320203;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x8ddbb298cc06e891;
        if (uVar1 != 0xdc5d95356b5d1ac6) break;
        FUN_18010eba0(local_48);
        thunk_FUN_1801f42e0(local_48,0xb0);
        local_50 = 0x3fd8f60f751e02c8;
        local_58 = 0xb483230a222eb14c;
      }
      if (uVar1 != 0xf95f2d53b825e995) break;
      local_48 = *param_1;
      local_50 = 0x6610bf133551952e;
      if (local_48 == 0) {
        local_50 = 0x3116ff23093c3c6c;
      }
      local_58 = 0xba4d2a265e0c8fe8;
    }
    local_50 = local_50 ^ 0x8ddbb298cc06e891;
  } while (uVar1 != 0x8b5bd5055730b384);
  return;
}



undefined8 * FUN_18010e390(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_141;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  uintptr_t local_128;
  uint local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  uintptr_t *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;

  local_138 = 0x40320c59160db01f;
  local_140 = 0x7ec1a009b4425060;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_138 ^ 0x7cbff832a3cc6832;
            uVar5 = local_138 ^ local_140;
            local_140 = local_140 ^ 0x7cbff832a3cc6832;
            local_138 = uVar6;
            if (-0x91762222e6a487c < (longlong)uVar5) break;
            if ((longlong)uVar5 < -0x42c8b94a99206b63) {
              if (uVar5 == 0x8590a83b086be6b6) {
                *local_b0 = local_128;
                *local_f0 = local_130;
                *(undefined1 *)param_2 = local_141;
                local_e0 = *local_b8;
                local_138 = 0x76f6fe7b84fdd3cb;
                if (local_130 < local_e0) {
                  local_138 = 0x8b360a272956f83d;
                }
                local_140 = 0x7dde97faf8c34fb8;
              }
              else if (uVar5 == 0xb308ab87ec394d20) {
                thunk_FUN_1801f42e0(local_c0,local_c8);
                local_138 = 0x8b33eb153be3ff53;
                local_140 = 0x801b829447dd6320;
              }
            }
            else if (uVar5 == 0xbd3746b566df949d) {
              local_a8 = *(longlong *)(local_a0 + -8);
              local_138 = 0x5277071fbf75ab25;
              if ((ulonglong)((local_a0 + local_118) - local_a8) < local_100) {
                local_138 = 0x1df4ee35d519e88e;
              }
              local_140 = 0x67f4e6d9f9333674;
            }
            else if (uVar5 == 0xd743fe9fd00d124a) {
              local_c8 = local_e0 + local_108;
              local_138 = 0xd2a6ce43c4fe4f77;
              local_140 = 0x61ae65c428c70257;
              local_c0 = local_98;
            }
            else if (uVar5 == 0xed017c1c83796f1b) {
              local_d0 = *param_2;
              local_d8 = local_e8 + local_110;
              local_138 = 0x982906ba69a994e5;
              if (local_f8 < local_d8) {
                local_138 = 0x7d9d91b03c07ac58;
              }
              local_140 = 0xc0aad7055ad838c5;
              local_a0 = local_d0;
            }
          }
          if ((longlong)uVar5 < 0x5883d1bf3371ac20) break;
          if (uVar5 == 0x5883d1bf3371ac20) {
            thunk_FUN_1801f42e0(local_d0,local_d8);
            local_138 = 0x25be054d750a4c97;
            local_140 = 0xa02ead767d61aa21;
          }
          else if (uVar5 == 0x7003c96b3287f383) {
            local_98 = *(longlong *)(local_90 + -8);
            local_138 = 0xd3c45189aa0be58f;
            if ((ulonglong)((local_90 + local_118) - local_98) < local_100) {
              local_138 = 0x3d761fdaae22dd56;
            }
            local_140 = 0xea35e1457e2fcf1c;
          }
          else if (uVar5 == 0x7a0008ec2c2adefa) {
            local_d8 = local_e8 + local_108;
            local_d0 = local_a8;
            local_138 = 0xe51aef60987d2f5a;
            local_140 = 0xbd993edfab0c837a;
          }
        }
        if (0x3583e1c646469d50 < (longlong)uVar5) break;
        if (uVar5 == 0xf6e89dddd195b785) {
          local_c0 = *param_3;
          local_c8 = local_e0 + local_110;
          local_138 = 0x14e5bf543ae71e6a;
          if (local_f8 < local_c8) {
            local_138 = 0xd7eeddb8e459a0c9;
          }
          local_140 = 0xa7ed14d3d6de534a;
          local_90 = local_c0;
        }
        else if (uVar5 == 0xb2869817c3e9c73) {
          return param_1;
        }
      }
      if (uVar5 != 0x3ef3ac50a24fe07f) break;
      local_141 = 0;
      local_f8 = 0xfff;
      local_128 = 0;
      local_100 = 0x20;
      local_108 = 0x28;
      local_11c = 0;
      local_130 = 0xf;
      local_110 = 1;
      local_118 = -8;
      local_68 = *param_3;
      lStack_60 = param_3[1];
      local_58 = param_3[2];
      lStack_50 = param_3[3];
      param_3[2] = 0;
      local_b8 = (ulonglong *)(param_3 + 3);
      param_3[3] = 0xf;
      *(undefined1 *)param_3 = 0;
      local_88 = (undefined4)*param_2;
      uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_80 = (undefined4)param_2[1];
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_78 = (undefined4)param_2[2];
      uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_70 = (undefined4)param_2[3];
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_b0 = (uintptr_t *)(param_2 + 2);
      param_2[2] = 0;
      local_f0 = (ulonglong *)(param_2 + 3);
      param_2[3] = 0xf;
      *(undefined1 *)param_2 = 0;
      FUN_180109d00(param_1,4,&local_88,&local_68);
      *param_1 = &PTR_FUN_1802174e0;
      uVar4 = param_4[1];
      param_1[0x12] = *param_4;
      param_1[0x13] = uVar4;
      uVar1 = *(undefined4 *)((longlong)param_4 + 4);
      uVar2 = *(undefined4 *)(param_4 + 1);
      uVar3 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_4;
      *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
      *(undefined4 *)(param_1 + 0x15) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
      local_e8 = *local_f0;
      local_138 = 0xf4ab5dd3f79af474;
      if (0xf < local_e8) {
        local_138 = 0x9c3a89f47c887dd9;
      }
      local_140 = 0x713bf5e8fff112c2;
    }
  } while ((uVar5 != 0x3583e1c646469d51) && (uVar5 != 0x39f1b0ccd4242a93));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_11c,local_128);
}



undefined8 FUN_18010ea50(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x6fe98a8097eac6de;
  local_50 = 0x4619145e3fbe4d3b;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xae37063c5c2e6ff4;
        if (uVar1 != 0x95fd926a958bddff) break;
        thunk_FUN_1801f42e0(param_1,0xb0);
        local_48 = 0x6c3b22771b88e8ba;
        local_50 = 0xaa82df4170b97948;
      }
      if (uVar1 != 0x29f09edea8548be5) break;
      FUN_18010eba0(param_1);
      local_48 = 0x2ffcddea6610cb42;
      if ((param_2 & 1) == 0) {
        local_48 = 0x7cb8b2b698aa874f;
      }
      local_50 = 0xba014f80f39b16bd;
    }
    local_48 = local_48 ^ 0xae37063c5c2e6ff4;
  } while (uVar1 != 0xc6b9fd366b3191f2);
  return param_1;
}



void FUN_18010eba0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  uint local_fc;
  ulonglong local_f8;
  uintptr_t local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  longlong local_50;
  longlong local_48;

  local_108 = 0xb4f3b87462945e6c;
  local_110 = 0x67cc5bfdf54e349b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_108 ^ 0x3134eb862c80a6a;
            uVar1 = local_108 ^ local_110;
            local_110 = local_110 ^ 0x3134eb862c80a6a;
            local_108 = uVar2;
            if (-0xe6ac29d4baacde6 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x40693f24b51669de) {
              if ((longlong)uVar1 < -0x5d402c8853bc885e) {
                if (uVar1 == 0x8beb6237ccffe8eb) {
                  thunk_FUN_1801f42e0(local_98,local_a0);
                  local_108 = 0x305bfe13f02e82f9;
                  local_110 = 0x92e42d645c6df55b;
                }
                else if (uVar1 == 0x92c771785e42b671) {
                  local_98 = *local_b0;
                  local_a0 = local_a8 + local_e0;
                  local_108 = 0x130ea2cd43dcc9fe;
                  if (local_c8 < local_a0) {
                    local_108 = 0xb575f06182a3dad8;
                  }
                  local_110 = 0x98e5c0fa8f232115;
                  local_70 = local_98;
                }
              }
              else if (uVar1 == 0xb2d5c59163e1124e) {
                (**(code **)(*local_78 + 0x20))(local_78,CONCAT71((int7)(uVar2 >> 8),local_78 != param_1 + 10));
                *local_80 = 0;
                local_108 = 0xf66d5e0978a6100b;
                local_110 = 0x2f922dd679d8dfd6;
              }
              else if (uVar1 == 0xa2bfd377ac4377a2) {
                param_1[4] = local_f0;
                *local_58 = local_f8;
                *(undefined1 *)local_b0 = local_111;
                return;
              }
            }
            else if (uVar1 == 0xbf96c0db4ae99622) {
              thunk_FUN_1801f42e0(local_88,local_90);
              local_108 = 0x2e60ecc3ad208359;
              local_110 = 0xbcc0ace64630564;
            }
            else if (uVar1 == 0xd33fe38997da6af7) {
              local_111 = 0;
              local_c8 = 0xfff;
              local_d0 = 0x20;
              local_f0 = 0;
              local_d8 = 0x28;
              local_fc = 0;
              local_f8 = 0xf;
              local_e0 = 1;
              local_e8 = -8;
              *param_1 = &PTR_vfunction1_180217490;
              local_80 = param_1 + 0x11;
              local_78 = (longlong *)param_1[0x11];
              local_108 = 0x2bb4dd796e982d53;
              if (local_78 == (longlong *)0x0) {
                local_108 = 0x409e6b370c07f0c0;
              }
              local_110 = 0x996118e80d793f1d;
            }
            else if (uVar1 == 0xd9ff73df017ecfdd) {
              local_c0 = param_1 + 6;
              local_60 = param_1 + 9;
              local_b8 = param_1[9];
              local_108 = 0x4d6096b6229554e0;
              if (local_f8 < local_b8) {
                local_108 = 0x669e9a87624dfe38;
              }
              local_110 = 0x68cc70bbebd6d2dd;
            }
          }
          if ((longlong)uVar1 < 0x2d90309b0d80fbcd) break;
          if ((longlong)uVar1 < 0x4c72a7ad8861d70e) {
            if (uVar1 == 0x2d90309b0d80fbcd) {
              local_68 = *(longlong *)(local_70 + -8);
              local_108 = 0x2a054500ef9ff11a;
              if ((ulonglong)((local_70 + local_e8) - local_68) < local_d0) {
                local_108 = 0x693cdded5079031a;
              }
              local_110 = 0x254e7a40d818d414;
            }
            else if (uVar1 == 0x348f113a53452879) {
              local_90 = local_b8 + local_d8;
              local_108 = 0x1ff7f6f7e0a20eab;
              local_110 = 0xa061362caa4b9889;
              local_88 = local_50;
            }
          }
          else if (uVar1 == 0x4c72a7ad8861d70e) {
            local_a0 = local_a8 + local_d8;
            local_108 = 0xf9ab1d9db9fb37d3;
            local_110 = 0x72407faa7504df38;
            local_98 = local_68;
          }
          else if (uVar1 == 0x67eb8d8d8c80a3cc) goto LAB_18010f26b;
        }
        if (0xf4b3f403787250d < (longlong)uVar1) break;
        if (uVar1 == 0xf1953d62b455321b) {
          local_50 = *(longlong *)(local_48 + -8);
          local_108 = 0xd371f1076482b10f;
          if ((ulonglong)((local_48 + local_e8) - local_50) < local_d0) {
            local_108 = 0x80156db0bb473aba;
          }
          local_110 = 0xb49a7c8ae80212c3;
        }
        else if (uVar1 == 0xe52ea3c899b2ce5) {
          local_88 = *local_c0;
          local_90 = local_b8 + local_e0;
          local_108 = 0xcc6d1a789b5205c1;
          if (local_c8 < local_90) {
            local_108 = 0x826ee7c165eea1f8;
          }
          local_110 = 0x73fbdaa3d1bb93e3;
          local_48 = local_88;
        }
      }
      if (uVar1 != 0x25ace60dc943863d) break;
      param_1[8] = local_f0;
      *local_60 = local_f8;
      *(undefined1 *)local_c0 = local_111;
      local_b0 = param_1 + 2;
      local_58 = param_1 + 5;
      local_a8 = param_1[5];
      local_108 = 0xfb27792cdfb6fa3a;
      if (local_f8 < local_a8) {
        local_108 = 0xcb5fdb232db73be9;
      }
      local_110 = 0x5998aa5b73f58d98;
    }
  } while (uVar1 != 0xf4b3f403787250e);
LAB_18010f26b:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_fc,local_f0);
}



void FUN_18010f2d0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xc2e1e71bc51ee5;
  local_58 = 0xbd3b75b74847ee36;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xa4a4028642300cf2;
        if (uVar1 != 0x837e60e89cae0591) break;
        FUN_1801102e0(local_48);
        thunk_FUN_1801f42e0(local_48,0xe8);
        local_50 = 0xbce41f0e790e801e;
        local_58 = 0x635147b25539ff74;
      }
      if (uVar1 != 0xbdf994505382f0d3) break;
      local_48 = *param_1;
      local_50 = 0xd2a319276346eb1a;
      if (local_48 == 0) {
        local_50 = 0x8e682173d3df91e1;
      }
      local_58 = 0x51dd79cfffe8ee8b;
    }
    local_50 = local_50 ^ 0xa4a4028642300cf2;
  } while (uVar1 != 0xdfb558bc2c377f6a);
  return;
}



undefined8 * FUN_18010f400(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_1c1;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  uintptr_t local_1a8;
  uint local_19c;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong *local_170;
  ulonglong *local_168;
  ulonglong *local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  uintptr_t *local_f8;
  uintptr_t *local_f0;
  uintptr_t *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;

  local_1b8 = 0x9ac273415b88ab18;
  local_1c0 = 0xac46f1f3938dfdab;
LAB_18010f710:
  do {
    uVar7 = local_1b8 ^ 0x99fd7276a015eeaa;
    uVar6 = local_1b8 ^ local_1c0;
    local_1c0 = local_1c0 ^ 0x99fd7276a015eeaa;
    local_1b8 = uVar7;
    if ((longlong)uVar6 < 0x368482b2c80556b3) {
      if ((longlong)uVar6 < -0x7f004e49a76b2a5) {
        if (-0x36e0465077c7bbe3 < (longlong)uVar6) {
          if (uVar6 == 0xc91fb9af8838441e) {
            local_120 = *param_4;
            local_128 = local_140 + local_190;
            local_1b8 = 0xbd6353c77579e898;
            if (local_178 < local_128) {
              local_1b8 = 0x642e6dda905c0cf7;
            }
            local_1c0 = 0xdaa5ab7956a9b0c8;
            local_d8 = local_120;
          }
          else if (uVar6 == 0xd7203bd3e6c827f4) {
            thunk_FUN_1801f42e0(local_100,local_108);
            local_1b8 = 0x92049bc7bf0c0774;
            local_1c0 = 0xdf2a90cd3b338eef;
          }
          else if (uVar6 == 0xefb2bf4b524d598d) {
            local_100 = *param_3;
            local_108 = local_148 + local_190;
            local_1b8 = 0x336c04bdf117ee20;
            if (local_178 < local_108) {
              local_1b8 = 0xab24f7673578e24f;
            }
            local_1c0 = 0xe44c3f6e17dfc9d4;
            local_d0 = local_100;
          }
          goto LAB_18010f710;
        }
        if (-0x4174395c390a43c2 < (longlong)uVar6) {
          if (uVar6 == 0xbe8bc6a3c6f5bc3f) {
            local_b8 = *(longlong *)(local_d8 + -8);
            local_1b8 = 0xc53c2a3cf812fc5f;
            if ((ulonglong)((local_d8 + local_198) - local_b8) < local_180) {
              local_1b8 = 0x231bc93b99528629;
            }
            local_1c0 = 0x3d33d1279d9bb104;
          }
          else if (uVar6 == 0xc5913f8db7289e40) {
            local_110 = *param_2;
            local_118 = local_158 + local_190;
            local_1b8 = 0x2745b29c6495a79a;
            if (local_178 < local_118) {
              local_1b8 = 0x3a99b522be2c14e8;
            }
            local_1c0 = 0x7c5c76764c8e7d9b;
            local_a8 = local_110;
          }
          goto LAB_18010f710;
        }
        if (uVar6 == 0x98859331657ece69) {
          return param_1;
        }
        if (uVar6 == 0x849b5a4b44aadfba) goto LAB_18010ffcc;
        uVar7 = 0x89e83ab302aa27bd;
      }
      else {
        if (0x1e28181c04c9372c < (longlong)uVar6) {
          if (uVar6 == 0x1e28181c04c9372d) {
            local_128 = local_140 + local_188;
            local_1b8 = 0x26479b66425e8fb7;
            local_1c0 = 0x418163d8618ed7e7;
            local_120 = local_b8;
          }
          else if (uVar6 == 0x2d9e249cf53f5c62) {
            thunk_FUN_1801f42e0(local_130,local_138);
            local_1b8 = 0x34439d02ad0a17ac;
            local_1c0 = 0xacc60e33c874d9c5;
          }
          else if (uVar6 == 0x320e4efa6d99f765) {
            local_a0 = *(longlong *)(local_c8 + -8);
            local_1b8 = 0xa3dc503dec11af8a;
            if ((ulonglong)((local_c8 + local_198) - local_a0) < local_180) {
              local_1b8 = 0x7bd30ef02c8baaaf;
            }
            local_1c0 = 0x27470a76a8bb7030;
          }
          goto LAB_18010f710;
        }
        if (uVar6 == 0x90d0de1c3f21b89) {
          *local_e8 = local_1a8;
          *local_160 = local_1b0;
          *(undefined1 *)param_4 = local_1c1;
          local_150 = *local_e0;
          local_1b8 = 0xdd48f0ce2bef7318;
          if (local_1b0 < local_150) {
            local_1b8 = 0x395e158c69da0c0a;
          }
          local_1c0 = 0x45cd63ff4e91bd71;
          goto LAB_18010f710;
        }
        if (uVar6 == 0x12e454f042bf3afd) {
          local_108 = local_148 + local_188;
          local_1b8 = 0xfe212a0797a6758;
          local_1c0 = 0xd8c229739fb240ac;
          local_100 = local_b0;
          goto LAB_18010f710;
        }
        uVar7 = 0xf80ffb1b65894d5b;
      }
    }
    else {
      if ((longlong)uVar6 < 0x5b19c4ea281bda01) {
        if ((longlong)uVar6 < 0x46c5c354f2a26973) {
          if (uVar6 == 0x368482b2c80556b3) {
            local_1c1 = 0;
            local_178 = 0xfff;
            local_1a8 = 0;
            local_180 = 0x20;
            local_188 = 0x28;
            local_19c = 0;
            local_1b0 = 0xf;
            local_190 = 1;
            local_198 = -8;
            local_78 = *param_3;
            lStack_70 = param_3[1];
            local_68 = param_3[2];
            lStack_60 = param_3[3];
            local_f8 = (uintptr_t *)(param_3 + 2);
            param_3[2] = 0;
            local_170 = (ulonglong *)(param_3 + 3);
            param_3[3] = 0xf;
            *(undefined1 *)param_3 = 0;
            local_98 = (undefined4)*param_2;
            uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
            uStack_90 = (undefined4)param_2[1];
            uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
            local_88 = (undefined4)param_2[2];
            uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
            uStack_80 = (undefined4)param_2[3];
            uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
            local_f0 = (uintptr_t *)(param_2 + 2);
            param_2[2] = 0;
            local_168 = (ulonglong *)(param_2 + 3);
            param_2[3] = 0xf;
            *(undefined1 *)param_2 = 0;
            FUN_180109d00(param_1,7,&local_98,&local_78);
            *param_1 = &PTR_FUN_1802174f0;
            param_1[0x12] = 0;
            param_1[0x13] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x18] = 0;
            lVar3 = param_4[3];
            param_1[0x17] = param_4[2];
            param_1[0x18] = lVar3;
            lVar3 = param_4[1];
            param_1[0x15] = *param_4;
            param_1[0x16] = lVar3;
            local_e8 = (uintptr_t *)(param_4 + 2);
            param_4[2] = 0;
            local_160 = (ulonglong *)(param_4 + 3);
            param_4[3] = 0xf;
            *(undefined1 *)param_4 = 0;
            param_1[0x1b] = 0;
            param_1[0x1c] = 0;
            param_1[0x19] = 0;
            param_1[0x1a] = 0;
            lVar4 = *param_5;
            uVar1 = *(undefined4 *)((longlong)param_5 + 4);
            lVar5 = param_5[1];
            uVar2 = *(undefined4 *)((longlong)param_5 + 0xc);
            lVar3 = param_5[3];
            param_1[0x1b] = param_5[2];
            param_1[0x1c] = lVar3;
            *(int *)(param_1 + 0x19) = (int)lVar4;
            *(undefined4 *)((longlong)param_1 + 0xcc) = uVar1;
            *(int *)(param_1 + 0x1a) = (int)lVar5;
            *(undefined4 *)((longlong)param_1 + 0xd4) = uVar2;
            param_5[2] = 0;
            local_e0 = (ulonglong *)(param_5 + 3);
            param_5[3] = 0xf;
            *(undefined1 *)param_5 = 0;
            local_158 = *local_168;
            local_1b8 = 0x406812a70f3b6dc4;
            if (0xf < local_158) {
              local_1b8 = 0xbb0af71929fa3942;
            }
            local_1c0 = 0x7e9bc8949ed2a702;
          }
          else if (uVar6 == 0x3ef3da3391e9cac6) {
            *local_f0 = local_1a8;
            *local_168 = local_1b0;
            *(undefined1 *)param_2 = local_1c1;
            local_148 = *local_170;
            local_1b8 = 0x77c8847e7b25d5b8;
            if (local_1b0 < local_148) {
              local_1b8 = 0xd554303fad5705ae;
            }
            local_1c0 = 0x3ae68f74ff1a5c23;
          }
        }
        else if (uVar6 == 0x46c5c354f2a26973) {
          local_c0 = *(longlong *)(local_a8 + -8);
          local_1b8 = 0x4aaa7d5cf6f92927;
          if ((ulonglong)((local_a8 + local_198) - local_c0) < local_180) {
            local_1b8 = 0x5150b9a6c0491a70;
          }
          local_1c0 = 0x3aaa9192f3153094;
        }
        else if (uVar6 == 0x4d2e0b0a843f899b) {
          *local_f8 = local_1a8;
          *local_170 = local_1b0;
          *(undefined1 *)param_3 = local_1c1;
          local_140 = *local_160;
          local_1b8 = 0xc9f11c50c6b9de45;
          if (local_1b0 < local_140) {
            local_1b8 = 0x9e3a81e8d7381d2;
          }
          local_1c0 = 0xc0fc11b1054bc5cc;
        }
        else if (uVar6 == 0x4f68c80922a72b9b) {
          local_b0 = *(longlong *)(local_d0 + -8);
          local_1b8 = 0xa25f37df2655f666;
          if ((ulonglong)((local_d0 + local_198) - local_b0) < local_180) {
            local_1b8 = 0x3953599c6640eb26;
          }
          local_1c0 = 0x2bb70d6c24ffd1db;
        }
        goto LAB_18010f710;
      }
      if ((longlong)uVar6 < 0x6bfa2834335c2ae4) {
        if (uVar6 == 0x5b19c4ea281bda01) {
          thunk_FUN_1801f42e0(local_110,local_118);
          local_1b8 = 0x59dcb1c113912035;
          local_1c0 = 0x672f6bf28278eaf3;
        }
        else if (uVar6 == 0x5c9404868430da9f) {
          local_138 = local_150 + local_188;
          local_130 = local_a0;
          local_1b8 = 0x5e489aa71ff33163;
          local_1c0 = 0x73d6be3beacc6d01;
        }
        else if (uVar6 == 0x67c6f8be23d05850) {
          thunk_FUN_1801f42e0(local_120,local_128);
          local_1b8 = 0x20a6dd0ec8b0925c;
          local_1c0 = 0x29abd0ef0b4289d5;
        }
        goto LAB_18010f710;
      }
      if (uVar6 == 0x6bfa2834335c2ae4) {
        local_118 = local_158 + local_188;
        local_1b8 = 0x83151f5d8f59fed1;
        local_1c0 = 0xd80cdbb7a74224d0;
        local_110 = local_c0;
        goto LAB_18010f710;
      }
      if (uVar6 == 0x7c937673274bb17b) {
        local_130 = *param_5;
        local_138 = local_150 + local_190;
        local_1b8 = 0xdee510b74abbeaed;
        if (local_178 < local_138) {
          local_1b8 = 0xc1757ad1d21d41ea;
        }
        local_1c0 = 0xf37b342bbf84b68f;
        local_c8 = local_130;
        goto LAB_18010f710;
      }
      uVar7 = 0x7000ecce05ec19b3;
    }
    if (uVar6 == uVar7) {
LAB_18010ffcc:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_19c,local_1a8);
    }
  } while( true );
}



void FUN_18010fff0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_68 = 0x528c6385f7a61aeb;
  local_70 = 0xa744bab3f6783034;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_68 ^ local_70;
        local_70 = local_70 ^ 0x9def4f95bf9bc490;
        if ((longlong)uVar1 < 0x64690d90501686df) break;
        if (uVar1 == 0x64690d90501686df) {
          FUN_1800880c0(local_60);
          local_60 = local_60 + 0x40;
          local_68 = 0x9ac125bc69e9944c;
          if (local_60 == local_48) {
            local_68 = 0x993ab525decfc842;
          }
          local_70 = 0xfea8282c39ff1293;
        }
        else {
          local_68 = local_68 ^ 0x9def4f95bf9bc490;
          if (uVar1 == 0x67929d09e730dad1) {
            *local_50 = *local_58;
            local_68 = 0xea5ac277cb2cb246;
            local_70 = 0x3428c12cf5f8b8d2;
          }
        }
      }
      if (uVar1 != 0xf5c8d93601de2adf) break;
      local_58 = (undefined8 *)(param_1 + 0x90);
      local_50 = (undefined8 *)(param_1 + 0x98);
      local_60 = *(longlong *)(param_1 + 0x90);
      local_48 = *(longlong *)(param_1 + 0x98);
      local_68 = 0x8fea24259223a08;
      if (local_60 == local_48) {
        local_68 = 0xb2e5ac8937e0b643;
      }
      local_70 = 0x6c97afd20934bcd7;
    }
    local_68 = local_68 ^ 0x9def4f95bf9bc490;
  } while (uVar1 != 0xde72035b3ed40a94);
  return;
}


