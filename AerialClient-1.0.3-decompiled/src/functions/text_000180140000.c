#include "../include/aerialclient_types.h"


void Unwind_1801402b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x38);
  return;
}



undefined8 * FUN_1801402e0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined ***local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
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
  local_31 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_d0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x40);
  local_c8 = 0x37;
  local_c0 = 0x3f;
  local_d8 = puVar3;
  FUN_18014103c(&DAT_1802a5358,&DAT_180286f8a,0x14,0x38,&DAT_1802a5390);
  *(ulonglong *)((longlong)puVar3 + 0x2f) = CONCAT71(DAT_1802a5387._1_7_,(undefined1)DAT_1802a5387);
  uVar4 = CONCAT17((undefined1)DAT_1802a5387,uRam00000001802a5380);
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a5378;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a5370;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a5368;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a5364;
  uVar1 = uRam00000001802a5360;
  uVar5 = uRam00000001802a535c;
  *puVar3 = _DAT_1802a5358;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x37) = local_31;
  local_b0 = local_50;
  local_a8 = 9;
  local_a0 = local_48;
  uVar5 = 1;
  FUN_18014103c(&DAT_1802a534a,&DAT_180286f4c,0x18,10,&DAT_1802a5354);
  local_b0 = CONCAT71(local_b0._1_7_,DAT_1802a5352);
  local_b8 = DAT_1802a534a;
  FUN_1801063a0(param_1,&local_b8,&local_d8,local_38,CONCAT44(uVar5,local_38));
  *param_1 = &PTR_FUN_18021a730;
  local_e8 = 0x3f800000;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3f800000;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  local_40 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x30);
  local_88 = 0x23;
  uStack_80 = 0x2f;
  local_98 = puVar3;
  FUN_18014103c(&DAT_1802a5394,&DAT_180286fe9,0x1b,0x24,&DAT_1802a53b8);
  *(undefined4 *)((longlong)puVar3 + 0x1f) = DAT_1802a53b3;
  uVar4 = CONCAT17((undefined1)DAT_1802a53b3,uRam00000001802a53ac);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a53a4;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a53a0;
  uVar1 = uRam00000001802a539c;
  uVar5 = uRam00000001802a5398;
  *puVar3 = _DAT_1802a5394;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x23) = local_31;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 6;
  local_60 = local_48;
  FUN_18014103c(&DAT_1802a53bc,&DAT_18028703b,0x1f,7,&DAT_1802a53c4);
  local_78 = CONCAT44(CONCAT22(local_78._6_2_,DAT_1802a53c0),DAT_1802a53bc);
  uVar4 = FUN_1801089f0(local_40,&local_78,&local_98,&local_e8);
  local_40[0xe] = uVar4;
  uVar4 = FUN_1800ba260();
  local_128 = &PTR_LAB_18021a770;
  local_120 = local_40;
  local_118 = &LAB_180140680;
  local_f0 = &local_128;
  FUN_180121610(uVar4,local_40,local_f0,local_38);
  return local_40;
}



void Unwind_180140640(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x118));
  return;
}



undefined1 FUN_1801406e0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x7c9e6e8763f0df34;
  local_68 = 0xadce2f0206e43b26;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x93f397c1ae2f5781;
        if (uVar1 != 0xd15041856514e412) break;
        local_60 = 0xb72fb07ac0f41c56;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xff81dc1758a21c59;
        }
        local_68 = 0x99dc6330be80d6e6;
        local_69 = 1;
      }
      if (uVar1 != 0x665dbf27e622cabf) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xb01b4a90f6860a85;
      local_68 = 0x9ee899da88f2c035;
    }
    local_60 = local_60 ^ 0x93f397c1ae2f5781;
  } while (uVar1 != 0x2ef3d34a7e74cab0);
  return local_69;
}



undefined8 FUN_180140810(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_50;
  float *local_48;

  local_60 = 0x47859c6afc45fec4;
  local_68 = 0xa4b8c080d2dc31e7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x220ae29d59bba525;
          if (-0x1cc2a315d16630de < (longlong)uVar2) break;
          if (uVar2 == 0x8fc9fde4a76f7e83) {
            local_60 = 0x628513c8a58cafe;
            if ((*(uint *)(param_3 + 0xec) & 2) == 0) {
              local_60 = 0xbf73e9ff14c80c01;
            }
            local_68 = 0xae4dcbd996983258;
          }
          else if (uVar2 == 0xa8659ae51cc0f8a6) {
            *param_2 = DAT_180286e68;
            param_2[1] = DAT_180286e6c;
            param_2[2] = DAT_180286e70;
            *local_48 = DAT_180286e74 * *local_48;
            local_60 = 0xdae6b604b9bbe9fd;
            local_68 = 0xcbd894223bebd7a4;
          }
          else {
            local_60 = local_60 ^ 0x220ae29d59bba525;
            if (uVar2 == 0xbdada3073bb20695) {
              local_48 = (float *)(param_2 + 3);
              local_60 = 0x5f9b14a458657a08;
              if (0.001 < (float)param_2[3]) {
                local_60 = 0x1aaec581457ce65e;
              }
              local_68 = 0x4ea53682da354451;
            }
          }
        }
        if (uVar2 != 0xe33d5cea2e99cf23) break;
        local_50 = (*DAT_180286e58)(param_1,param_2,param_3);
        local_60 = 0xb6bac162d1db5e3b;
        if ((DAT_1802a5349 & 1) != 0) {
          local_60 = 0x1a294043683966f7;
        }
        if (param_2 == (undefined4 *)0x0) {
          local_60 = 0xb6bac162d1db5e3b;
        }
        if (param_3 == 0) {
          local_60 = 0xb6bac162d1db5e3b;
        }
        local_68 = 0xa784e344538b6062;
      }
      if (uVar2 != 0x540bf3039f49a20f) break;
      cVar1 = FUN_1801b3c30(param_3,0xf0);
      local_60 = 0xbc5052dae0b5e7f1;
      if (cVar1 != '\0') {
        local_60 = 0x22a78d18c58aa72b;
      }
      local_68 = 0xad6e70fc62e5d9a8;
    }
    local_60 = local_60 ^ 0x220ae29d59bba525;
  } while (uVar2 != 0x113e222682503e59);
  return local_50;
}



void FUN_180140ae0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x18dad8aa23bdb29f;
  local_58 = 0x9cb48dd7e720c230;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xa50f4175b4dcd9fc;
        if (uVar1 != 0x846e557dc49d70af) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0x8d2a641966cc017b;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0xc5ee7d0dc6294d4d;
        }
        local_58 = 0x3014aa29cb6684a7;
      }
      if (uVar1 != 0xf5fad7240d4fc9ea) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0x438e448a9d8b85cf;
      local_58 = 0xfeb08aba30210013;
    }
    local_50 = local_50 ^ 0xa50f4175b4dcd9fc;
  } while (uVar1 != 0xbd3ece30adaa85dc);
  return;
}



void FUN_180140c10(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x62dfa08703420e76;
  local_50 = 0x92379da153f93416;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc15f55e3d0338987;
        if (uVar1 != 0xf0e83d2650bb3a60) break;
        local_48 = 0x5f362a3dabfd58d6;
        if (param_2 != '\0') {
          local_48 = 0x1326d2b47da5dddb;
        }
        local_50 = 0x742f0fbba6802679;
      }
      if (uVar1 != 0x6709dd0fdb25fba2) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xad13b4e066684b36;
      local_50 = 0x860a91666b153599;
    }
    local_48 = local_48 ^ 0xc15f55e3d0338987;
  } while (uVar1 != 0x2b1925860d7d7eaf);
  return;
}



undefined8 FUN_180140d40(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xf54b0faaf25de2b6;
  local_50 = 0x449c0fb710eea265;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x1c5afd1cee6022f6;
        if (uVar1 != 0x988c80fd9fab0136) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0xe28d208f70269287;
        local_50 = 0xd97099bc0dbbd7dd;
      }
      if (uVar1 != 0xb1d7001de2b340d3) break;
      FUN_18013fd70(param_1);
      local_48 = 0x939d9070960b804c;
      if ((param_2 & 1) == 0) {
        local_48 = 0x30eca9be743dc420;
      }
      local_50 = 0xb11108d09a0817a;
    }
    local_48 = local_48 ^ 0x1c5afd1cee6022f6;
  } while (uVar1 != 0x3bfdb9337d9d455a);
  return param_1;
}



undefined8 FUN_180140e90(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x3183578a5812a093;
  local_50 = 0xdf1f2044777d257e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xa551afa2d2c40b21;
        if (uVar1 != 0xee9c77ce2f6f85ed) break;
        FUN_180106c90(param_1);
        local_48 = 0x8c257a0d17ab2150;
        if ((param_2 & 1) == 0) {
          local_48 = 0x52c79cbe8b6c4f6d;
        }
        local_50 = 0x8875b39ac05db6c9;
      }
      if (uVar1 != 0x450c997d7f69799) break;
      thunk_FUN_1801f42e0(param_1,0x78);
      local_48 = 0x994696f7c707c39a;
      local_50 = 0x43f4b9d38c363a3e;
    }
    local_48 = local_48 ^ 0xa551afa2d2c40b21;
  } while (uVar1 != 0xdab22f244b31f9a4);
  return param_1;
}



void FUN_180140fe0(void)

{
  atexit((_func_5014 *)&LAB_18013fed0);
  FUN_18014103c(&DAT_1802a534a,&DAT_180286f4c,0x18,10,&DAT_1802a5354);
  FUN_1800f0070(&DAT_1802a5348,&DAT_1802a534a,FUN_18013fee0);
  return;
}



void FUN_18014103c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xf773b35987531f1f;
  local_68 = 0x11bc027c1c124e15;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xdd2f456301ab7a08;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xdd2f456301ab7a08;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0x129bc70f340a743a) break;
          if (uVar1 == 0xed6438f0cbf58bc6) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x2fe8a740d2386122;
            local_68 = 0xe9707a712023635d;
          }
          else if (uVar1 == 0x340bb6680f69f06f) {
            local_6b = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xbbf57d3bcc8df07b;
            local_68 = 0x7d6da00a3e96f204;
          }
          else if (uVar1 == 0x61c502dca6a9ddad) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xcb2ab916b68adcba;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x1245378e7216a713;
            }
            local_68 = 0x264e81e67d7f577c;
          }
        }
        if ((longlong)uVar1 < -0x396722ce0de4fd81) break;
        if (uVar1 == 0xc698dd31f21b027f) {
          local_6a = local_6b ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6a;
          local_54 = local_4c + 1;
          local_60 = 0x85b1956894776b9d;
          if (local_54 == param_4) {
            local_60 = 0x76baaccf74f483ee;
          }
          local_68 = 0xe47497b432deb630;
        }
        else if (uVar1 == 0xe6cfb1259b41510a) {
          local_60 = 0xd9a36a6a52556827;
          if (*param_5 == 1) {
            local_60 = 0x57da86a7332ffcf;
          }
          local_68 = 0xb86668b6f4fcb58a;
          local_54 = 0;
          local_6a = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x92ce3b7b462a35de) break;
      *param_5 = 1;
      local_60 = 0xa9638bcf90cc3976;
      local_68 = 0x14784b1317027333;
    }
  } while (uVar1 != 0xbd1bc0dc87ce4a45);
  return;
}



undefined8 * FUN_1801412f0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 ***pppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_108 [96];
  undefined4 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_48 = 1;
  local_38 = 0x1f;
  local_30 = 0;
  local_40 = 0xf;
  local_60 = 0;
  local_68 = (undefined8 **)FUN_1801d61c8(0x20);
  local_58 = 0x1e;
  local_50 = local_38;
  *local_68 = (undefined8 **)0x0;
  local_68[1] = (undefined8 **)0x0;
  *(undefined8 *)((longlong)local_68 + 0xf) = 0;
  *(undefined8 *)((longlong)local_68 + 0x17) = 0;
  uVar7 = local_30;
  uVar9 = local_48;
  do {
    pppuVar6 = &local_68;
    if (local_40 < local_50) {
      pppuVar6 = (undefined8 ***)local_68;
    }
    *(byte *)((longlong)pppuVar6 + uVar7) =
         (char)local_38 * (char)uVar7 + 0x5dU ^ (byte)(0x8c743a >> ((byte)((int)uVar7 << 3) & 0x18)) ^
         (&DAT_18021a950)[uVar7];
    uVar8 = local_48 + uVar9;
    uVar7 = uVar9;
    uVar9 = uVar8;
  } while (uVar8 != local_38);
  FUN_1801b63c0(local_108,&local_68,7);
  local_a0 = local_30;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x30);
  local_98 = 0x28;
  local_90 = 0x2f;
  local_a8 = puVar5;
  FUN_180141750(&DAT_1802a5448,&DAT_18028809c,0x19,0x29,&DAT_1802a5474);
  *(undefined8 *)(puVar5 + 8) = DAT_1802a5468;
  uVar4 = uRam00000001802a5460;
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a5458;
  *(undefined8 *)(puVar5 + 6) = uVar4;
  uVar3 = uRam00000001802a5454;
  uVar2 = uRam00000001802a5450;
  uVar1 = uRam00000001802a544c;
  *puVar5 = _DAT_1802a5448;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)(puVar5 + 10) = 0;
  local_80 = local_30;
  local_78 = 0xc;
  local_70 = local_40;
  FUN_180141750(&DAT_1802a5478,&DAT_1802880f8,0x12,0xd,&DAT_1802a5488);
  local_80 = CONCAT44(local_80._4_4_,DAT_1802a5480);
  local_88 = DAT_1802a5478;
  FUN_18016c8e0(param_1,&local_88,&local_a8,2,local_108);
  *param_1 = &PTR_FUN_18021a910;
  return param_1;
}



void Unwind_1801415c0(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(param_2 + 0x30);
  return;
}



undefined8 * FUN_1801415f0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x6c4f4ac2349ced1e;
  local_50 = 0x147ad8d039e112db;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc3e4763c2afc113c;
        if (uVar1 != 0x556c4b037f1687ec) break;
        thunk_FUN_1801f42e0(param_1,0xd0);
        local_48 = 0x9a21413f6a45b060;
        local_50 = 0x854d718503b06610;
      }
      if (uVar1 != 0x783592120d7dffc5) break;
      *param_1 = &PTR_FUN_180217de0;
      FUN_18011a170(param_1 + 0xe);
      FUN_180106c90(param_1);
      local_48 = 0xb08d7f0c54c83687;
      if ((param_2 & 1) == 0) {
        local_48 = 0xfa8d04b5422b671b;
      }
      local_50 = 0xe5e1340f2bdeb16b;
    }
    local_48 = local_48 ^ 0xc3e4763c2afc113c;
  } while (uVar1 != 0x1f6c30ba69f5d670);
  return param_1;
}



void FUN_180141750(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x66f113507034fc6b;
  local_68 = 0x47a91c7140b379de;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x617ea1acc8f7469e;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x617ea1acc8f7469e;
          local_60 = uVar2;
          if (-0x1832e3b104bc35e0 < (longlong)uVar1) break;
          if (uVar1 == 0xa4f292949b6173eb) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x971a8e5f13c65dac;
            local_68 = 0xdc3d940ac999c711;
          }
          else if (uVar1 == 0xc4ccaba79e73a779) {
            *param_5 = 1;
            local_60 = 0x73726174b5f1cb0d;
            local_68 = 0x33ba34d99612837b;
          }
          else if (uVar1 == 0xd6e162fe53dc701e) {
            local_6b = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xc1e79368191937c9;
            local_68 = 0x8ac0893dc346ad74;
          }
        }
        if (0x40c855ad23e34875 < (longlong)uVar1) break;
        if (uVar1 == 0xe7cd1c4efb43ca21) {
          local_69 = local_6a;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x86ddac9c2e2e1a59;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xf4ce5cf6e69319ac;
          }
          local_68 = 0x222f3e08b54f69b2;
        }
        else if (uVar1 == 0x21580f21308785b5) {
          local_60 = 0x36152c10723f0179;
          if (*param_5 == 1) {
            local_60 = 0x911065f3aa9f832e;
          }
          local_68 = 0xd1d8305e897ccb58;
          local_54 = 0;
          local_6a = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x4b271a55da5f9abd) break;
      local_6a = local_6b ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6a;
      local_54 = local_4c + 1;
      local_60 = 0xcc7ec375876e0981;
      if (local_54 == param_4) {
        local_60 = 0xef7f749ce25e64d9;
      }
      local_68 = 0x2bb3df3b7c2dc3a0;
    }
  } while (uVar1 != 0x40c855ad23e34876);
  return;
}



void FUN_180141a10(longlong param_1)

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



void Unwind_180141b50(void)

{
  Unwind_1801dd394();
}



void FUN_180141b80(longlong param_1)

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



void Unwind_180141cc0(void)

{
  Unwind_1801dd394();
}



void FUN_180141cf0(longlong param_1)

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



void Unwind_180141e30(void)

{
  Unwind_1801dd394();
}



void FUN_180141e70(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_a0 = 0x9a8d128594225e5b;
  local_a8 = 0x563f08adb1065178;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            plVar1 = DAT_1802a5498;
            uVar3 = local_a0 ^ 0xd34e6539655d39c5;
            uVar2 = local_a0 ^ local_a8;
            local_a8 = local_a8 ^ 0xd34e6539655d39c5;
            local_a0 = uVar3;
            if (-0x334de5d7dadbf0de < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x56f09b0c60e60e7c) {
              if (uVar2 == 0x94e0d1ccb112ed42) {
                plVar1 = (longlong *)*local_78;
                thunk_FUN_1801f42e0(local_78,local_98);
                local_a0 = 0xac782f149dff225d;
                if (plVar1 == (longlong *)0x0) {
                  local_a0 = 0xba2f4b0d3814338c;
                }
                local_a8 = 0x3898fed82cedcf1f;
                local_78 = plVar1;
              }
              else if (uVar2 == 0x82b7b5d514f9fc93) {
                thunk_FUN_1801f42e0(DAT_1802a5498,local_98);
                return;
              }
            }
            else if (uVar2 == 0xa90f64f39f19f184) {
              local_70 = *(longlong *)(local_90 + -8);
              local_a0 = 0xd3c57f2b3211af79;
              if ((local_68 - local_70) - 8U < 0x20) {
                local_a0 = 0x6eb05a5d8b7834;
              }
              local_a8 = 0x24262485f97b90a4;
            }
            else if (uVar2 == 0xc2f869ef37d620bd) {
              local_68 = local_90;
              local_88 = DAT_1802a54b8 - local_90;
              local_a0 = 0x7429ec74b980ec46;
              if (0xfff < local_88) {
                local_a0 = 0x9ed5aa9469ca8bdc;
              }
              local_a8 = 0x37dace67f6d37a58;
              local_80 = local_90;
              local_60 = local_88;
            }
          }
          if (-0x81ca4513495c024 < (longlong)uVar2) break;
          if (uVar2 == 0xccb21a2825240f23) {
            local_98 = 0x28;
            local_90 = DAT_1802a54a8;
            local_a0 = 0x1ef9a0b24ffe1f84;
            if (DAT_1802a54a8 == 0) {
              local_a0 = 0x29c63190de5ccf28;
            }
            local_a8 = 0xdc01c95d78283f39;
          }
          else if (uVar2 == 0xf5c7f8cda674f011) {
            *(undefined8 *)DAT_1802a5498[1] = 0;
            local_a0 = 0x64adf97ea7b99b6a;
            if ((longlong *)*plVar1 == (longlong *)0x0) {
              local_a0 = 0x72fa9d6702528abb;
            }
            local_a8 = 0xf04d28b216ab7628;
            local_78 = (longlong *)*plVar1;
          }
        }
        if (uVar2 != 0x244894dfa4f0e890) break;
        local_88 = local_60 + 0x27;
        local_a0 = 0x228397545f6e2d2f;
        local_a8 = 0x6170b547103dbb31;
        local_80 = local_70;
      }
      if (uVar2 != 0x43f322134f53961e) break;
      thunk_FUN_1801f42e0(local_80,local_88);
      DAT_1802a54a8 = 0;
      DAT_1802a54b0 = 0;
      DAT_1802a54b8 = 0;
      local_a0 = 0xaab29006d5ec5739;
      local_a8 = 0x5f7568cb7398a728;
    }
  } while (uVar2 != 0xf7e35baecb6a3fdd);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



undefined8 FUN_180142280(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined6 local_98;
  undefined2 uStack_92;
  undefined6 local_90;
  undefined2 uStack_8a;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar4 = FUN_1801b2b70();
  local_30 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x11;
  local_20 = 0x1f;
  local_38 = puVar5;
  FUN_18014865c(&DAT_1802a573c,&DAT_1802888dd,0x16,0x12,&DAT_1802a5750);
  *(undefined1 *)(puVar5 + 4) = DAT_1802a574c;
  uVar3 = uRam00000001802a5748;
  uVar2 = uRam00000001802a5744;
  uVar1 = uRam00000001802a5740;
  *puVar5 = _DAT_1802a573c;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x11) = 0;
  FUN_180145520(&PTR_PTR_1802881a0,&local_38,lVar4 + 0x15d390,FUN_180145900);
  lVar4 = FUN_1801b2b70();
  local_50 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x20);
  local_48 = 0x14;
  local_40 = 0x1f;
  local_58 = puVar5;
  FUN_18014865c(&DAT_1802a5754,&DAT_180288918,0x1f,0x15,&DAT_1802a576c);
  puVar5[4] = DAT_1802a5764;
  uVar3 = uRam00000001802a5760;
  uVar2 = uRam00000001802a575c;
  uVar1 = uRam00000001802a5758;
  *puVar5 = _DAT_1802a5754;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)(puVar5 + 5) = 0;
  FUN_1801468b0(&PTR_PTR_180288160,&local_58,lVar4 + 0x56fcc0,FUN_180146c90);
  lVar4 = FUN_1801b2b70();
  local_90 = 0;
  uStack_8a = 0;
  local_88 = 0xe;
  local_80 = 0xf;
  FUN_18014865c(&DAT_1802a5770,&DAT_18028895e,0x10,0xf,&DAT_1802a5780);
  local_90 = uRam00000001802a5778;
  local_98 = (undefined6)DAT_1802a5770;
  uStack_92 = DAT_1802a5770._6_2_;
  FUN_180147300(&PTR_PTR_1802881e0,&local_98,lVar4 + 0x180010,FUN_1801476e0);
  lVar4 = FUN_1801b2b70();
  local_70 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x20);
  local_68 = 0x17;
  local_60 = 0x1f;
  local_78 = puVar5;
  FUN_18014865c(&DAT_1802a5784,&DAT_180288993,0x15,0x18,&DAT_1802a579c);
  *(ulonglong *)((longlong)puVar5 + 0xf) = CONCAT71(DAT_1802a5793._1_7_,(undefined1)DAT_1802a5793);
  uVar3 = uRam00000001802a5790;
  uVar2 = uRam00000001802a578c;
  uVar1 = uRam00000001802a5788;
  *puVar5 = _DAT_1802a5784;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x17) = 0;
  FUN_18013f040(&PTR_PTR_180288220,&local_78,lVar4 + 0x9c72d0,FUN_180147940);
  return 1;
}



undefined8 * FUN_1801425e0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_328;
  undefined8 *local_320;
  code *local_318;
  undefined ***local_2f0;
  undefined4 *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined7 local_2c8;
  undefined4 uStack_2c1;
  undefined5 uStack_2bd;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined5 local_288;
  undefined3 uStack_283;
  undefined5 local_280;
  undefined3 uStack_27b;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined6 local_248;
  undefined2 uStack_242;
  undefined6 local_240;
  undefined2 uStack_23a;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined7 local_208;
  undefined4 uStack_201;
  undefined5 uStack_1fd;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_58 = 0;
  local_78 = 0x3f;
  local_90 = 5;
  local_48 = 0xf;
  local_a0 = 0xb;
  local_98 = 9;
  local_60 = 0x2f;
  local_70 = 0x40;
  local_31 = 0;
  local_88 = 0x20;
  local_80 = 0x39;
  local_68 = 0x30;
  local_54 = 0;
  local_50 = 0;
  local_2e0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x40);
  local_2d8 = local_80;
  local_2d0 = local_78;
  local_2e8 = puVar3;
  FUN_18014865c(&DAT_1802a54ec,&DAT_1802883c6,0x15,0x3a,&DAT_1802a5528);
  uVar4 = uRam00000001802a551d;
  *(ulonglong *)((longlong)puVar3 + 0x29) = CONCAT17(uRam00000001802a551c,_DAT_1802a5515);
  *(undefined8 *)((longlong)puVar3 + 0x31) = uVar4;
  uVar4 = CONCAT71(_DAT_1802a5515,uRam00000001802a5514);
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a550c;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a5504;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a54fc;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a54f8;
  uVar1 = uRam00000001802a54f4;
  uVar5 = uRam00000001802a54f0;
  *puVar3 = _DAT_1802a54ec;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x39) = local_31;
  uStack_2c1._1_3_ = (undefined3)local_50;
  uStack_2bd = (undefined5)((ulonglong)local_50 >> 0x18);
  local_2b8 = local_a0;
  local_2b0 = local_48;
  uVar5 = 1;
  FUN_18014865c(&DAT_1802a54dc,&DAT_180288391,0x19,0xc,&DAT_1802a54e8);
  local_2c8 = (undefined7)DAT_1802a54dc;
  uStack_2c1 = ram0x0001802a54e3;
  FUN_1801063a0(param_1,&local_2c8,&local_2e8,local_54,CONCAT44(uVar5,local_54));
  *param_1 = &PTR_FUN_18021aa80;
  *(undefined4 *)(param_1 + 0x16) = local_58;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = (undefined4 *)0x0;
  uStack_1e0 = 0;
  local_40 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_68);
  local_1d8 = local_88;
  uStack_1d0 = local_60;
  local_1e8 = puVar3;
  FUN_18014865c(&DAT_1802a552c,&DAT_180288430,0x1c,0x21,&DAT_1802a5550);
  uVar4 = uRam00000001802a5544;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a553c;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a5538;
  uVar1 = uRam00000001802a5534;
  uVar5 = uRam00000001802a5530;
  *puVar3 = _DAT_1802a552c;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 8) = local_31;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = local_90;
  local_1b0 = local_48;
  uVar5 = 1;
  FUN_18014865c(&DAT_1802a5554,&DAT_18028847e,0x12,6,&DAT_1802a555c);
  local_1c8 = CONCAT44(CONCAT31(local_1c8._5_3_,DAT_1802a5558),DAT_1802a5554);
  uVar4 = FUN_180108270(local_40,&local_1c8,&local_1e8,0x43700000,CONCAT44(uVar5,local_58),0x44340000,0x41200000);
  local_40[0xe] = uVar4;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_88);
  local_198 = 0x1c;
  uStack_190 = 0x1f;
  local_1a8 = puVar3;
  FUN_18014865c(&DAT_1802a5560,&DAT_1802884a6,0x11,0x1d,&DAT_1802a5580);
  uVar4 = uRam00000001802a5574;
  *(ulonglong *)(puVar3 + 3) = CONCAT44(uRam00000001802a5570,_DAT_1802a556c);
  *(undefined8 *)(puVar3 + 5) = uVar4;
  uVar2 = _DAT_1802a556c;
  uVar1 = uRam00000001802a5568;
  uVar5 = uRam00000001802a5564;
  *puVar3 = _DAT_1802a5560;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 7) = local_31;
  local_2a0 = local_50;
  local_298 = local_98;
  local_290 = local_48;
  uVar5 = 1;
  FUN_18014865c(&DAT_1802a5584,&DAT_1802884eb,0x16,10,&DAT_1802a5590);
  local_2a0 = CONCAT71(local_2a0._1_7_,DAT_1802a558c);
  local_2a8 = DAT_1802a5584;
  uVar4 = FUN_180107ed0(local_40,&local_2a8,&local_1a8,6,CONCAT44(uVar5,1),0xc);
  local_40[0xf] = uVar4;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_68);
  local_178 = 0x2c;
  uStack_170 = local_60;
  local_188 = puVar3;
  FUN_18014865c(&DAT_1802a5594,&DAT_18028852a,0x1e,0x2d,&DAT_1802a55c4);
  uVar4 = uRam00000001802a55b8;
  *(ulonglong *)(puVar3 + 7) = CONCAT44(uRam00000001802a55b4,_DAT_1802a55b0);
  *(undefined8 *)(puVar3 + 9) = uVar4;
  uVar4 = CONCAT44(_DAT_1802a55b0,uRam00000001802a55ac);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a55a4;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a55a0;
  uVar1 = uRam00000001802a559c;
  uVar5 = uRam00000001802a5598;
  *puVar3 = _DAT_1802a5594;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 0xb) = local_31;
  local_280 = (undefined5)local_50;
  uStack_27b = (undefined3)((ulonglong)local_50 >> 0x28);
  local_278 = 0xd;
  local_270 = local_48;
  uVar5 = 1;
  FUN_18014865c(&DAT_1802a55c8,&DAT_180288590,0x15,0xe,&DAT_1802a55d8);
  local_280 = uRam00000001802a55d0;
  local_288 = (undefined5)DAT_1802a55c8;
  uStack_283 = DAT_1802a55c8._5_3_;
  uVar4 = FUN_180108270(local_40,&local_288,&local_188,0xbdf5c28f,CONCAT44(uVar5,0xbf000000),0x3f19999a,0x3c23d70a);
  local_40[0x10] = uVar4;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_68);
  local_158 = 0x28;
  uStack_150 = local_60;
  local_168 = puVar3;
  FUN_18014865c(&DAT_1802a55dc,&DAT_1802885d2,0x1c,0x29,&DAT_1802a5608);
  *(undefined8 *)(puVar3 + 8) = DAT_1802a55fc;
  uVar4 = uRam00000001802a55f4;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a55ec;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a55e8;
  uVar1 = uRam00000001802a55e4;
  uVar5 = uRam00000001802a55e0;
  *puVar3 = _DAT_1802a55dc;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 10) = local_31;
  local_260 = local_50;
  local_258 = local_98;
  local_250 = local_48;
  FUN_18014865c(&DAT_1802a560c,&DAT_180288635,0x16,10,&DAT_1802a5618);
  local_260 = CONCAT71(local_260._1_7_,DAT_1802a5614);
  local_268 = DAT_1802a560c;
  uVar4 = FUN_180107b80(local_40,&local_268,&local_168,1);
  local_40[0x12] = uVar4;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (undefined4 *)0x0;
  uStack_140 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_68);
  local_138 = 0x2e;
  uStack_130 = local_60;
  local_148 = puVar3;
  FUN_18014865c(&DAT_1802a561c,&DAT_180288670,0x15,0x2f,&DAT_1802a564c);
  uVar4 = uRam00000001802a5642;
  *(ulonglong *)((longlong)puVar3 + 0x1e) = CONCAT62(uRam00000001802a563c,_DAT_1802a563a);
  *(undefined8 *)((longlong)puVar3 + 0x26) = uVar4;
  uVar4 = CONCAT26(_DAT_1802a563a,uRam00000001802a5634);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a562c;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a5628;
  uVar1 = uRam00000001802a5624;
  uVar5 = uRam00000001802a5620;
  *puVar3 = _DAT_1802a561c;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x2e) = local_31;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = local_90;
  local_110 = local_48;
  uVar5 = 1;
  FUN_18014865c(&DAT_1802a5650,&DAT_1802886c4,0x18,6,&DAT_1802a5658);
  local_128 = CONCAT44(CONCAT31(local_128._5_3_,DAT_1802a5654),DAT_1802a5650);
  uVar4 = FUN_180108270(local_40,&local_128,&local_148,local_58,CONCAT44(uVar5,0xbf800000),0x3f800000,0x3d4ccccd);
  local_40[0x11] = uVar4;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_68);
  local_f8 = local_60;
  uStack_f0 = local_60;
  local_108 = puVar3;
  FUN_18014865c(&DAT_1802a565c,&DAT_180288701,0x15,0x30,&DAT_1802a568c);
  uVar4 = uRam00000001802a5683;
  *(ulonglong *)((longlong)puVar3 + 0x1f) = CONCAT71(uRam00000001802a567c,DAT_1802a567b);
  *(undefined8 *)((longlong)puVar3 + 0x27) = uVar4;
  uVar4 = CONCAT17(DAT_1802a567b,uRam00000001802a5674);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a566c;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a5668;
  uVar1 = uRam00000001802a5664;
  uVar5 = uRam00000001802a5660;
  *puVar3 = _DAT_1802a565c;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x2f) = local_31;
  local_240 = (undefined6)local_50;
  uStack_23a = (undefined2)((ulonglong)local_50 >> 0x30);
  local_238 = 0xe;
  local_230 = local_48;
  FUN_18014865c(&DAT_1802a5690,&DAT_180288761,0x1e,0xf,&DAT_1802a56a0);
  local_240 = uRam00000001802a5698;
  local_248 = (undefined6)DAT_1802a5690;
  uStack_242 = DAT_1802a5690._6_2_;
  uVar4 = FUN_180107b80(local_40,&local_248,&local_108,1);
  local_40[0x13] = uVar4;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_70);
  local_d8 = local_80;
  uStack_d0 = local_78;
  local_e8 = puVar3;
  FUN_18014865c(&DAT_1802a56a4,&DAT_1802887a4,0x13,0x3a,&DAT_1802a56e0);
  uVar4 = uRam00000001802a56d5;
  *(ulonglong *)((longlong)puVar3 + 0x29) = CONCAT17(uRam00000001802a56d4,_DAT_1802a56cd);
  *(undefined8 *)((longlong)puVar3 + 0x31) = uVar4;
  uVar4 = CONCAT71(_DAT_1802a56cd,uRam00000001802a56cc);
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a56c4;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a56bc;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a56b4;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a56b0;
  uVar1 = uRam00000001802a56ac;
  uVar5 = uRam00000001802a56a8;
  *puVar3 = _DAT_1802a56a4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x39) = local_31;
  local_220 = local_50;
  local_218 = 10;
  local_210 = local_48;
  FUN_18014865c(&DAT_1802a56e4,&DAT_180288802,0x1d,0xb,&DAT_1802a56f0);
  local_220 = CONCAT62(local_220._2_6_,DAT_1802a56ec);
  local_228 = DAT_1802a56e4;
  uVar4 = FUN_180107b80(local_40,&local_228,&local_e8,0);
  local_40[0x14] = uVar4;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_70);
  local_b8 = 0x31;
  uStack_b0 = local_78;
  local_c8 = puVar3;
  FUN_18014865c(&DAT_1802a56f4,&DAT_18028883e,0x10,0x32,&DAT_1802a5728);
  *(undefined1 *)(puVar3 + 0xc) = DAT_1802a5724;
  uVar4 = uRam00000001802a571c;
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a5714;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a570c;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a5704;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a5700;
  uVar1 = uRam00000001802a56fc;
  uVar5 = uRam00000001802a56f8;
  *puVar3 = _DAT_1802a56f4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x31) = local_31;
  uStack_201._1_3_ = (undefined3)local_50;
  uStack_1fd = (undefined5)((ulonglong)local_50 >> 0x18);
  local_1f8 = local_a0;
  local_1f0 = local_48;
  FUN_18014865c(&DAT_1802a572c,&DAT_18028889c,0x16,0xc,&DAT_1802a5738);
  local_208 = (undefined7)DAT_1802a572c;
  uStack_201 = ram0x0001802a5733;
  uVar4 = FUN_180107b80(local_40,&local_208,&local_c8,0);
  local_40[0x15] = uVar4;
  uVar4 = FUN_1800ba260();
  local_328 = &PTR_LAB_18021aac0;
  local_320 = local_40;
  local_318 = FUN_1801433a0;
  local_2f0 = &local_328;
  FUN_180121610(uVar4,local_40,local_2f0,local_54);
  return local_40;
}



void Unwind_180143360(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x328));
  return;
}



void FUN_1801433a0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_b9;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong *local_a0;
  float local_94;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  float *local_48;

  local_b0 = 0x9f123377cf0a2e77;
  local_b8 = 0x3cfabf0d7e83f0eb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_b0 ^ 0x829e8dd13ab100e1;
              uVar2 = local_b0 ^ local_b8;
              local_b8 = local_b8 ^ 0x829e8dd13ab100e1;
              local_b0 = uVar4;
              if (0x356a811c3408e572 < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x494329eb0a54d0a9) {
                if ((longlong)uVar2 < -0x5c1773854e762164) {
                  if (uVar2 == 0x95ae83e21ec98f78) {
                    FUN_1801da26c(&DAT_180288278);
                    local_b0 = 0x321afd945b21d17a;
                    local_b8 = 0x6e02d03600216c7c;
                  }
                  else if (uVar2 == 0xa29ec3456ee5f9ce) {
                    *local_88 = local_a0[1];
                    local_b0 = 0x36b3c82552592fe0;
                    local_b8 = 0x31444baa2a252134;
                  }
                }
                else if (uVar2 == 0xa3e88c7ab189de9c) {
                  local_a8 = 0x100000001b3;
                  DAT_180288264 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90);
                  DAT_180288268 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x90);
                  DAT_1802a54d4 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x90);
                  DAT_18028826c = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90);
                  DAT_1802a54d8 = *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x90);
                  DAT_180288270 = *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x90);
                  DAT_1802a54d9 = *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x90);
                  DAT_1802a54da = *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x90);
                  DAT_1802a54db = 1;
                  local_94 = (float)FUN_1800eb440();
                  local_b0 = 0x94df7860ff34325c;
                  if (1.0 < local_94 - *(float *)(param_1 + 0xb0)) {
                    local_b0 = 0x7a15bfb91d617768;
                  }
                  local_b8 = 0xc8c755c2a4348f5a;
                  local_48 = (float *)(param_1 + 0xb0);
                }
                else if (uVar2 == 0xb2d2ea7bb955f832) {
                  *local_48 = local_94;
                  iVar1 = FUN_1801da264(&DAT_180288278);
                  local_b0 = 0x1fc22ed375f27648;
                  if (iVar1 == 0) {
                    local_b0 = 0x3ee206aa15590225;
                  }
                  local_b8 = 0x2aa8afcf41fa933b;
                }
              }
              else if ((longlong)uVar2 < 0x144aa96554a3911e) {
                if (uVar2 == 0xb6bcd614f5ab2f57) {
                  local_68 = (longlong *)*local_a0;
                  local_b0 = 0x90f87309097aa345;
                  local_b8 = 0xc22df307ad452e36;
                  local_70 = local_60;
                }
                else if (uVar2 == 0x7f7838f787c0ed4) {
                  local_68 = (longlong *)*local_a0;
                  DAT_1802a54a0 = DAT_1802a54a0 + -1;
                  *(longlong **)local_a0[1] = local_68;
                  local_68[1] = local_a0[1];
                  thunk_FUN_1801f42e0(local_a0,0x28);
                  local_b0 = 0xbe1c91371c86e852;
                  local_b8 = 0xecc91139b8b96521;
                  local_70 = DAT_1802a5498;
                }
                else if (uVar2 == 0xe2cc4876421cc0eb) {
                  DAT_1802882c4 = 0x7ffffffe;
                  FUN_1801da68c(6);
                }
              }
              else if (uVar2 == 0x144aa96554a3911e) {
                local_b0 = 0x59b2927040e6b523;
                if (DAT_1802882c4 == 0x7fffffff) {
                  local_b0 = 0xed651dc2044213c0;
                }
                local_b8 = 0xfa955b4465ed32b;
              }
              else if (uVar2 == 0x24ec5ef3da88727a) {
                lVar3 = (((ulonglong)*(byte *)((longlong)local_a0 + 0x17) ^
                         ((ulonglong)*(byte *)((longlong)local_a0 + 0x16) ^
                         ((ulonglong)*(byte *)((longlong)local_a0 + 0x15) ^
                         ((ulonglong)*(byte *)((longlong)local_a0 + 0x14) ^
                         ((ulonglong)*(byte *)((longlong)local_a0 + 0x13) ^
                         ((ulonglong)*(byte *)((longlong)local_a0 + 0x12) ^
                         ((ulonglong)*(byte *)((longlong)local_a0 + 0x11) ^
                         ((ulonglong)*(byte *)(local_a0 + 2) ^ 0xcbf29ce484222325) * local_a8) * local_a8) * local_a8) *
                         local_a8) * local_a8) * local_a8) * local_a8) * local_a8 & DAT_1802a54c0) * 0x10;
                local_90 = (longlong *)(DAT_1802a54a8 + lVar3);
                local_88 = (longlong *)(DAT_1802a54a8 + lVar3 + 8);
                local_b9 = *(longlong **)(DAT_1802a54a8 + lVar3) == local_a0;
                local_b0 = 0x7a8199eab33af720;
                if (*(longlong **)(DAT_1802a54a8 + 8 + lVar3) == local_a0) {
                  local_b0 = 0x68471cf24c905db9;
                }
                local_b8 = 0xf6235ce54ed04b8;
              }
            }
            if ((longlong)uVar2 < 0x6130f80cd480d2d7) break;
            if ((longlong)uVar2 < 0x67d75fa7889c3d3d) {
              if (uVar2 == 0x6130f80cd480d2d7) {
                *local_90 = (longlong)local_60;
                *local_88 = (longlong)local_60;
                local_b0 = 0xe72b2b64ca3bd669;
                local_b8 = 0xe0dca8ebb247d8bd;
              }
              else if (uVar2 == 0x6725293c187d5901) {
                local_b0 = 0xda6550bf0a0810d3;
                if (local_b9 != '\0') {
                  local_b0 = 0x19cb6bf6b06d3bca;
                }
                local_b8 = 0x78fb93fa64ede91d;
              }
            }
            else if (uVar2 == 0x67d75fa7889c3d3d) {
              local_a0 = local_78;
              local_60 = local_80;
              local_b0 = 0x674cc1344af39fbd;
              if (2.0 < local_94 - *(float *)((longlong)local_78 + 0x24)) {
                local_b0 = 0xf51c49d365d0c290;
              }
              local_b8 = 0xd1f01720bf58b0ea;
            }
            else if (uVar2 == 0x75e3ac24e7d7f398) {
              local_b0 = 0x84cc2f0cb5333b27;
              if (local_b9 != '\0') {
                local_b0 = 0xc16bae8cd170323d;
              }
              local_b8 = 0x833bac83cd4f35f3;
            }
          }
          if ((longlong)uVar2 < 0x561bc7c406b86608) break;
          if (uVar2 == 0x561bc7c406b86608) {
            local_78 = (longlong *)*DAT_1802a5498;
            local_b0 = 0xaabf7b986c550895;
            if (local_78 == DAT_1802a5498) {
              local_b0 = 0x58c6a7ddfa00bad0;
            }
            local_b8 = 0xcd68243fe4c935a8;
            local_80 = DAT_1802a5498;
          }
          else if (uVar2 == 0x5c182da25b00bd06) {
            return;
          }
        }
        if (uVar2 != 0x4250020f1c3f07ce) break;
        *local_90 = *local_a0;
        local_b0 = 0x2525aeb6f91411ec;
        local_b8 = 0x22d22d3981681f38;
      }
      if (uVar2 != 0x52d5800ea43f8d73) break;
      local_78 = local_68;
      local_80 = local_70;
      local_b0 = 0x591588114bbe3a9a;
      if (local_68 == local_70) {
        local_b0 = 0xab6c5454ddeb88df;
      }
      local_b8 = 0x3ec2d7b6c32207a7;
    }
  } while (uVar2 != 0x356a811c3408e573);
  FUN_1801da68c(5);
}



void FUN_180143c70(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x2ed29da7fd2d934f;
  local_50 = 0x306caa823d8de267;
  while( true ) {
    while( true ) {
      while( true ) {
        uVar2 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xea85c2ab9f580dc2;
        if ((longlong)uVar2 < 0x37ea93047b702280) break;
        if (uVar2 == 0x37ea93047b702280) {
          local_48 = 0x1c28245ebacc1a09;
          if (DAT_1802882c4 == 0x7fffffff) {
            local_48 = 0xb5aaa3d6cea9e40c;
          }
          local_50 = 0x68ca20f90a52270f;
        }
        else {
          local_48 = local_48 ^ 0xea85c2ab9f580dc2;
          if (uVar2 == 0x74e204a7b09e3d06) {
            FUN_180143e30(&DAT_1802a5490);
            FUN_1801da26c(&DAT_180288278);
            return;
          }
        }
      }
      if (uVar2 != 0x1ebe3725c0a07128) break;
      DAT_1802a54db = 0;
      iVar1 = FUN_1801da264(&DAT_180288278);
      local_48 = 0xa79f183f7b0f7655;
      if (iVar1 == 0) {
        local_48 = 0xa37c5bddbf37b773;
      }
      local_50 = 0x9496c8d9c44795f3;
    }
    if (uVar2 == 0xdd60832fc4fbc303) break;
    local_48 = local_48 ^ 0xea85c2ab9f580dc2;
    if (uVar2 == 0x3309d0e6bf48e3a6) {
      FUN_1801da68c(5);
    }
  }
  DAT_1802882c4 = 0x7ffffffe;
  FUN_1801da68c(6);
}



void FUN_180143e30(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  char local_1a1;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  ulonglong local_188;
  byte local_180;
  undefined8 local_178;
  ulonglong *local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  ulonglong local_138;
  undefined8 local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  ulonglong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;

  local_1b8 = 0x38e27ef8a86d59fb;
  local_1c0 = 0x840eb157453f6543;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_1b8 ^ 0x9dbc5394d8e08795;
              uVar3 = local_1b8 ^ local_1c0;
              local_1c0 = local_1c0 ^ 0x9dbc5394d8e08795;
              local_1b8 = uVar4;
              if (-0xa34bc792b14e32 < (longlong)uVar3) break;
              if ((longlong)uVar3 < -0x3f01260b2025a17a) {
                if ((longlong)uVar3 < -0x537a5d22b10c92e2) {
                  if (uVar3 == 0x881a3c024e5a099a) {
                    lVar5 = (((ulonglong)*(byte *)((longlong)local_98 + 0x17) ^
                             ((ulonglong)*(byte *)((longlong)local_98 + 0x16) ^
                             ((ulonglong)*(byte *)((longlong)local_98 + 0x15) ^
                             ((ulonglong)*(byte *)((longlong)local_98 + 0x14) ^
                             ((ulonglong)*(byte *)((longlong)local_98 + 0x13) ^
                             ((ulonglong)*(byte *)((longlong)local_98 + 0x12) ^
                             ((ulonglong)*(byte *)((longlong)local_98 + 0x11) ^
                             (*(byte *)(local_98 + 2) ^ local_138) * local_1b0) * local_1b0) * local_1b0) * local_1b0) *
                             local_1b0) * local_1b0) * local_1b0) * local_1b0 & *local_80) << ((byte)local_160 & 0x3f);
                    local_e8 = (undefined8 *)(local_110 + lVar5);
                    local_70 = (undefined8 *)(local_110 + lVar5 + 8);
                    local_68 = *(longlong **)(local_110 + 8 + lVar5);
                    local_1b8 = 0x61f0833cff22660e;
                    local_1c0 = 0x2a5a00a61e9c82fc;
                    local_e0 = local_98;
                  }
                  else if (uVar3 == 0x8a360aa47cff3795) {
                    local_198 = (longlong *)*local_1a0;
                    local_1b8 = 0xdcd45df32dd929ad;
                    if (local_198 == local_1a0) {
                      local_1b8 = 0x3f5c05ae92e2c6ff;
                    }
                    local_1c0 = 0x2388e9cb40979862;
                  }
                  else if (uVar3 == 0x8d779b6ce7de9375) {
                    local_120 = local_128 & 0x3ffffffffffffffc;
                    local_88 = (longlong *)((local_120 << (local_180 & 0x3f)) + (longlong)local_148);
                    local_58 = (undefined4)local_130;
                    uStack_54 = local_130._4_4_;
                    uStack_50 = (undefined4)local_130;
                    uStack_4c = local_130._4_4_;
                    local_1b8 = 0x3f0cbafb8edb87ff;
                    local_1c0 = 0x3cc41c6295326db0;
                    local_b0 = local_188;
                  }
                }
                else if ((longlong)uVar3 < -0x4313305012adc348) {
                  if (uVar3 == 0xac85a2dd4ef36d1e) {
                    local_1b8 = 0x4385456922611992;
                    if (local_128 == local_120) {
                      local_1b8 = 0x62df294c6a285e32;
                    }
                    local_1c0 = 0x7e0bc529b85d00af;
                    local_d0 = local_88;
                  }
                  else if (uVar3 == 0xb35d53b6183ac881) {
                    local_190 = local_140;
                    *local_100 = local_140;
                    local_1b8 = 0x4864ac7ece27af8;
                    local_1c0 = 0x48b844fa1e78c90c;
                  }
                }
                else if (uVar3 == 0xbceccfafed523cb8) {
                  local_178 = 0x28;
                  local_1b0 = 0x100000001b3;
                  local_160 = 4;
                  local_168 = -1;
                  local_180 = 3;
                  local_138 = 0xcbf29ce484222325;
                  local_188 = 0;
                  local_158 = (longlong *)(param_1 + 8);
                  local_170 = (ulonglong *)(param_1 + 0x10);
                  local_90 = *(ulonglong *)(param_1 + 0x10);
                  local_1b8 = 0x9de0242f991a68a2;
                  if (local_90 == 0) {
                    local_1b8 = 0x3e3d2ff45da3e67a;
                  }
                  local_1c0 = 0x22e9c3918fd6b8e7;
                }
                else if (uVar3 == 0xbf09e7be16ccd045) {
                  local_1b8 = 0xddb3b0f9fb21ceb5;
                  if (local_90 < *(ulonglong *)(param_1 + 0x38) >> (local_180 & 0x3f)) {
                    local_1b8 = 0x84ab075d4cd3ecae;
                  }
                  local_1a0 = (longlong *)*local_158;
                  local_1c0 = 0xe9d0df9302cdb3b;
                }
              }
              else if ((longlong)uVar3 < -0x2cd142ff34f2ea72) {
                if (uVar3 == 0xc0fed9f4dfda5e86) {
                  local_140 = (longlong *)*local_a8;
                  local_1b8 = 0xa1b6474d70b11dbe;
                  if (local_a8 == local_f8) {
                    local_1b8 = 0x809eb96e45fc051b;
                  }
                  thunk_FUN_1801f42e0(local_a8,local_178);
                  *local_170 = *local_170 + local_168;
                  local_1c0 = 0xb748424d675d381b;
                  local_b8 = local_140;
                }
                else if (uVar3 == 0xc7c72219a3ad749f) {
                  local_c8 = local_f0;
                  local_1b8 = 0x93b66d1c15faef0f;
                  if (local_f0 == local_1a0) {
                    local_1b8 = 0xe51a1d12a289a67b;
                  }
                  local_1c0 = 0xa924132f5013158f;
                  local_190 = local_f0;
                }
                else if (uVar3 == 0xd1e2c33516512f68) {
                  *local_78 = local_c0;
                  local_1b8 = 0x749c71eb21101920;
                  if (local_60 == local_1a0) {
                    local_1b8 = 0xb0b843d49dd0a34e;
                  }
                  local_1c0 = 0xfc864de96f4a10ba;
                  local_190 = local_60;
                  local_98 = local_60;
                }
              }
              else if ((longlong)uVar3 < -0x23c0b76a5bbdc58a) {
                if (uVar3 == 0xd32ebd00cb0d158e) {
                  *(undefined8 *)local_1a0[1] = 0;
                  local_1b8 = 0xa95d235f65cf5bc;
                  if ((longlong *)*local_1a0 == (longlong *)0x0) {
                    local_1b8 = 0xee87ba6aeb63f4bc;
                  }
                  local_1c0 = 0x7be765d4833889a;
                  local_a0 = (longlong *)*local_1a0;
                }
                else if (uVar3 == 0xdb9158558f782995) {
                  *local_e8 = local_1a0;
                  *local_70 = local_1a0;
                  local_98 = local_150;
                  local_1b8 = 0x137564118c94c046;
                  if (local_150 == local_1a0) {
                    local_1b8 = 0xd751562e30547a28;
                  }
                  local_1c0 = 0x9b6f5813c2cec9dc;
                  local_190 = local_150;
                }
              }
              else if (uVar3 == 0xdc3f4895a4423a76) {
                *local_d8 = local_130;
                local_d8 = local_d8 + 1;
                local_1b8 = 0x80d4cd641b53697c;
                if (local_d8 == local_118) {
                  local_1b8 = 0x403f69946d640d97;
                }
                local_1c0 = 0x5ceb85f1bf11530a;
              }
              else if (uVar3 == 0xe939cc37a3507c26) {
                lVar5 = *local_158;
                *(longlong *)lVar5 = lVar5;
                *(longlong *)(lVar5 + 8) = lVar5;
                *local_170 = local_188;
                local_118 = *(longlong **)(param_1 + 0x20);
                local_148 = *(longlong **)(param_1 + 0x18);
                local_1b8 = 0x9edf84a2efd0dafe;
                if (local_148 == local_118) {
                  local_1b8 = 0xa4dc149f08095882;
                }
                local_1c0 = 0xb808f8fada7c061f;
              }
            }
            if ((longlong)uVar3 < 0x37d6fb2322a13d00) break;
            if ((longlong)uVar3 < 0x3dc80f68923bc729) {
              if (uVar3 == 0x37d6fb2322a13d00) {
                local_60 = local_b8;
                local_1b8 = 0xe219efa90cec38db;
                if (local_1a1 != '\0') {
                  local_1b8 = 0x1b6248b771a6672d;
                }
                local_1c0 = 0x33fb2c9c1abd17b3;
                local_c0 = local_108;
              }
              else if (uVar3 == 0x3a927e3345e9fa80) {
                local_f0 = (longlong *)*local_c8;
                local_1b8 = 0xb8f3a6a3b4b78804;
                if (local_c8 == local_f8) {
                  local_1b8 = 0x48e27f9935bbc19b;
                }
                thunk_FUN_1801f42e0(local_c8,local_178);
                *local_170 = *local_170 + local_168;
                local_1c0 = 0x7f3484ba171afc9b;
                local_b8 = local_f0;
              }
              else if (uVar3 == 0x3d8e80409a3c193d) {
                local_1b8 = 0x3ea7e2298922004d;
                local_1c0 = 0xe298aabc2d603a3b;
                local_d8 = local_d0;
              }
            }
            else if ((longlong)uVar3 < 0x4c3e0e3df29ab3f4) {
              if (uVar3 == 0x3dc80f68923bc729) {
                *local_e8 = local_150;
                local_1b8 = 0x518683e873b2399;
                local_1c0 = 0x4926660375a1906d;
                local_190 = local_150;
              }
              else if (uVar3 == 0x4baa839ae1bee4f2) {
                local_150 = (longlong *)*local_e0;
                local_1b8 = 0xdf223ab5e6390b62;
                if (local_e0 == local_68) {
                  local_1b8 = 0x70f4b69b7f9e08d1;
                }
                thunk_FUN_1801f42e0(local_e0,local_178);
                *local_170 = *local_170 + local_168;
                local_1c0 = 0xab65eecef0e62144;
              }
            }
            else if (uVar3 == 0x4c3e0e3df29ab3f4) {
              *local_108 = (longlong)local_190;
              local_190[1] = (longlong)local_108;
              local_1b8 = 0xa1134ae98e80a899;
              local_1c0 = 0xbdc7a68c5cf5f604;
            }
            else if (uVar3 == 0x7447d47b16df2a26) {
              local_1b8 = 0xf38efcd5a7693635;
              if (local_150 == local_1a0) {
                local_1b8 = 0x85ec7027d4ec15ee;
              }
              local_1c0 = 0xb8247f4f46d7d2c7;
              local_e0 = local_150;
            }
          }
          if (0x16fe050017ec25a4 < (longlong)uVar3) break;
          if (uVar3 == 0xff5cb4386d4eb1cf) {
            local_110 = *(longlong *)(param_1 + 0x18);
            local_108 = (longlong *)local_198[1];
            local_80 = (ulonglong *)(param_1 + 0x30);
            lVar5 = (((ulonglong)*(byte *)((longlong)local_198 + 0x17) ^
                     ((ulonglong)*(byte *)((longlong)local_198 + 0x16) ^
                     ((ulonglong)*(byte *)((longlong)local_198 + 0x15) ^
                     ((ulonglong)*(byte *)((longlong)local_198 + 0x14) ^
                     ((ulonglong)*(byte *)((longlong)local_198 + 0x13) ^
                     ((ulonglong)*(byte *)((longlong)local_198 + 0x12) ^
                     ((ulonglong)*(byte *)((longlong)local_198 + 0x11) ^
                     (*(byte *)(local_198 + 2) ^ local_138) * local_1b0) * local_1b0) * local_1b0) * local_1b0) *
                     local_1b0) * local_1b0) * local_1b0) * local_1b0 & *(ulonglong *)(param_1 + 0x30)) <<
                    ((byte)local_160 & 0x3f);
            local_100 = (undefined8 *)(local_110 + lVar5);
            local_78 = (undefined8 *)(local_110 + lVar5 + 8);
            local_1a1 = *(longlong **)(local_110 + lVar5) == local_198;
            local_f8 = *(longlong **)(local_110 + 8 + lVar5);
            local_1b8 = 0xc739ff1b9c71d27d;
            if ((bool)local_1a1) {
              local_1b8 = 0x3d5558dc0642767b;
            }
            local_1c0 = 0xfdab8128d99828fd;
            local_c8 = local_198;
            local_a8 = local_198;
          }
          else if (uVar3 == 0x3c8a6991be9ea4f) {
            lVar5 = local_b0 << (local_180 & 0x3f);
            puVar1 = (undefined8 *)((longlong)local_148 + lVar5);
            *puVar1 = CONCAT44(uStack_54,local_58);
            puVar1[1] = CONCAT44(uStack_4c,uStack_50);
            puVar1 = (undefined8 *)((longlong)local_148 + lVar5 + 0x10);
            *puVar1 = CONCAT44(uStack_54,local_58);
            puVar1[1] = CONCAT44(uStack_4c,uStack_50);
            local_b0 = local_b0 + local_160;
            local_1b8 = 0x743a87fec2f3d3e9;
            if (local_b0 == local_120) {
              local_1b8 = 0xdb7783ba97e954b8;
            }
            local_1c0 = 0x77f22167d91a39a6;
          }
          else if (uVar3 == 0xd2ba468be6f7d26) {
            plVar2 = (longlong *)*local_a0;
            thunk_FUN_1801f42e0(local_a0,local_178);
            local_1b8 = 0x364217c169acfb24;
            if (plVar2 == (longlong *)0x0) {
              local_1b8 = 0xd2507f9e7493fa24;
            }
            local_1c0 = 0x3b69b3a9d7c38602;
            local_a0 = plVar2;
          }
        }
        if ((longlong)uVar3 < 0x26d77c5835acdce1) break;
        if (uVar3 == 0x26d77c5835acdce1) {
          local_130 = *local_158;
          uVar3 = (longlong)local_118 + (-8 - (longlong)local_148);
          local_128 = (uVar3 >> (local_180 & 0x3f)) + 1;
          local_1b8 = 0x5370a5cd82982da6;
          if (uVar3 < 0x18) {
            local_1b8 = 0xe389bee1ff7aa7ee;
          }
          local_1c0 = 0xde073ea16546bed3;
          local_d0 = local_148;
        }
        else if (uVar3 == 0x2899642b6b1b709e) {
          *local_100 = local_1a0;
          local_1b8 = 0x53796863de19bad4;
          local_1c0 = 0x829bab56c84895bc;
          local_c0 = local_1a0;
        }
      }
      if (uVar3 != 0x16fe050017ec25a5) break;
      local_a8 = local_140;
      local_1b8 = 0x33d62ee387d4132b;
      if (local_140 == local_1a0) {
        local_1b8 = 0x4075a4a14034852c;
      }
      local_1c0 = 0xf328f717580e4dad;
    }
  } while (uVar3 != 0x1cd4ec65d2755e9d);
  return;
}



undefined1 FUN_180144d20(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0xfbbc53f81378ecf;
  local_68 = 0x9a1d683389a15ebf;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xbffe229d24de8972;
        if (uVar1 != 0x95a6ad0c0896d070) break;
        local_60 = 0x9b762155f2d7596e;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x84099d02aa478d8c;
        }
        local_68 = 0x40d5399662657ff4;
        local_69 = 1;
      }
      if (uVar1 != 0xc4dca494c822f278) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xe79e78bd439ea8b0;
      local_68 = 0x3c3d607ed32c8e2a;
    }
    local_60 = local_60 ^ 0xbffe229d24de8972;
  } while (uVar1 != 0xdba318c390b2269a);
  return local_69;
}



undefined1 FUN_180144e50(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x14ecd28c7c70e9b3;
  local_68 = 0xc391b2f1af8bba2e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x96913c132e4414b0;
        if (uVar1 != 0xd77d607dd3fb539d) break;
        local_60 = 0x37403e707e060818;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xbd696dd1972a9a92;
        }
        local_68 = 0x86520b1291ff9c57;
        local_69 = 1;
      }
      if (uVar1 != 0x3b3b66c306d506c5) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x63e9c3900885961d;
      local_68 = 0xd2fbf6f2e77c0252;
    }
    local_60 = local_60 ^ 0x96913c132e4414b0;
  } while (uVar1 != 0xb1123562eff9944f);
  return local_69;
}



undefined1 FUN_180144f80(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x87bd14bdde120a23;
  local_68 = 0x5107333f8aab1072;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xf3e4e528eb1caaf3;
        if (uVar1 != 0xd6ba278254b91a51) break;
        local_60 = 0x48504765b2c5cbe9;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x6f9ab9ce694df581;
        }
        local_68 = 0xb34e518c21386778;
        local_69 = 1;
      }
      if (uVar1 != 0xdcd4e842487592f9) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xc8eceb70ebfda198;
      local_68 = 0x33f2fd9978000d09;
    }
    local_60 = local_60 ^ 0xf3e4e528eb1caaf3;
  } while (uVar1 != 0xfb1e16e993fdac91);
  return local_69;
}



void FUN_1801450b0(void)

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

  local_90 = 0xbc92e89865fc8f79;
  local_98 = 0x3754210d50afc7db;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x2a069d039dd7683;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x2a069d039dd7683;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x52ab6d365c833eeb) break;
          if (uVar1 == 0x52ab6d365c833eeb) {
            local_80 = local_60 + 0x27;
            local_90 = 0x4256cf9b3a5beb66;
            local_98 = 0x18f1fb7be218f611;
            local_78 = local_70;
          }
          else if (uVar1 == 0x5aa734e0d8431d77) {
            thunk_FUN_1801f42e0(local_78,local_80);
            DAT_1802a54a8 = 0;
            DAT_1802a54b0 = 0;
            DAT_1802a54b8 = 0;
            local_90 = 0x2c1132ee7799714;
            local_98 = 0xeb406a0ec9beb4b9;
          }
          else if (uVar1 == 0x6c9310086547642c) {
            local_68 = local_88;
            local_80 = DAT_1802a54b8 - local_88;
            local_90 = 0x326e96000951687a;
            if (0xfff < local_80) {
              local_90 = 0x7baafca62af0ad23;
            }
            local_98 = 0x68c9a2e0d112750d;
            local_78 = local_88;
            local_60 = local_80;
          }
        }
        if ((longlong)uVar1 < 0x13635e46fbe2d82e) break;
        if (uVar1 == 0x13635e46fbe2d82e) {
          local_70 = *(longlong *)(local_88 + -8);
          local_90 = 0xd60495aaea76a8da;
          if ((local_68 - local_70) - 8U < 0x20) {
            local_90 = 0x9937dfaf7c79cab1;
          }
          local_98 = 0xcb9cb29920faf45a;
        }
        else if (uVar1 == 0x1d982733ca8c5c80) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0x8bc6c995355348a2) break;
      local_88 = DAT_1802a54a8;
      local_90 = 0x8c4034223f26f4b5;
      if (DAT_1802a54a8 == 0) {
        local_90 = 0x9525d0a74a6b334;
      }
      local_98 = 0xe0d3242a5a619099;
    }
  } while (uVar1 != 0xe98179202ec723ad);
  return;
}



void FUN_1801453b0(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong *local_48;

  local_58 = 0x2607093c35435842;
  local_60 = 0x596a0f22563727a2;
  do {
    while( true ) {
      while( true ) {
        plVar1 = DAT_1802a5498;
        uVar2 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x76ee0a9b952341ae;
        if (uVar2 != 0xa9113669a18dc26f) break;
        plVar1 = (longlong *)*local_48;
        thunk_FUN_1801f42e0(local_48,local_50);
        local_58 = 0x20a42360387c3e12;
        if (plVar1 == (longlong *)0x0) {
          local_58 = 0x8cb4605ce122abe2;
        }
        local_60 = 0x89b5150999f1fc7d;
        local_48 = plVar1;
      }
      if (uVar2 != 0x7f6d061e63747fe0) break;
      local_50 = 0x28;
      *(undefined8 *)DAT_1802a5498[1] = 0;
      local_58 = 0xa98daee9af3b50c4;
      if ((longlong *)*plVar1 == (longlong *)0x0) {
        local_58 = 0x59dedd57665c534;
      }
      local_60 = 0x9c98800eb692ab;
      local_48 = (longlong *)*plVar1;
    }
    local_58 = local_58 ^ 0x76ee0a9b952341ae;
  } while (uVar2 != 0x501755578d3579f);
  thunk_FUN_1801f42e0(DAT_1802a5498,local_50);
  return;
}



ulonglong FUN_180145520(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 0x28;
  local_58 = 0xf;
  local_88 = 4;
  local_80 = 0xfff;
  local_39 = 0;
  local_78 = 0x20;
  local_70 = -8;
  local_68 = 1;
  local_50 = 0;
  local_48 = 0;
  local_4c = 4;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1801458a9;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_18014865c(&DAT_1802a57a0,&DAT_1802889d6,0x1b,0x19,&DAT_1802a57bc);
    local_d8 = &DAT_1802a57a0;
    local_d0 = 0x18;
    FUN_18014865c(&DAT_1802a57c0,&DAT_180288a27,0x1d,5,&DAT_1802a57c8);
    local_c8 = &DAT_1802a57c0;
    local_c0 = local_88;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_180145857:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180145897;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_18014865c(&DAT_1802a57cc,&DAT_180288a5a,0x14,0x22,&DAT_1802a57f0);
      local_b8 = &DAT_1802a57cc;
      local_b0 = 0x21;
      FUN_18014865c(&DAT_1802a57c0,&DAT_180288a27,0x1d,5,&DAT_1802a57c8);
      local_a8 = &DAT_1802a57c0;
      local_a0 = local_88;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180145857;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180145897;
  }
  lVar10 = *local_60;
  uVar13 = local_68 + uVar9;
  lVar11 = lVar10;
  if (local_80 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_78 <= (ulonglong)((lVar10 + local_70) - lVar11)) {
LAB_1801458a9:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_90;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180145897:
  return uVar12 & 0xffffffff;
}



void Unwind_1801458d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



bool FUN_180145900(float *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  byte bVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  float *pfVar25;
  ulonglong uVar26;
  byte bVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  longlong unaff_retaddr;
  undefined8 extraout_XMM0_Qb;

  if ((DAT_1802a54db & 1) == 0) {
    uVar10 = (*DAT_1802881d0)(param_1);
    return (bool)uVar10;
  }
  lVar12 = FUN_1801b2b70();
  lVar12 = lVar12 + 0x56fe83;
  uVar1 = *(ulonglong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10);
  if ((lVar12 == unaff_retaddr) && (uVar1 != 0)) {
    FUN_1801b3c30(uVar1,0xe78);
  }
  (*DAT_1802881d0)(param_1);
  if (uVar1 == 0 || lVar12 != unaff_retaddr) {
    return uVar1 != 0 && lVar12 == unaff_retaddr;
  }
  cVar9 = FUN_1801b3c30(param_1,0x40);
  if (cVar9 == '\0') {
    return false;
  }
  cVar9 = FUN_1801b3c30(uVar1,0xe78);
  bVar8 = DAT_1802a54da;
  if (cVar9 == '\0') {
    bVar29 = false;
    bVar27 = 0;
  }
  else {
    bVar27 = *(float *)(uVar1 + 0xb4) * *(float *)(uVar1 + 0xb4) +
             *(float *)(uVar1 + 0xac) * *(float *)(uVar1 + 0xac) + *(float *)(uVar1 + 0xb0) * *(float *)(uVar1 + 0xb0) <
             0.0001 | *(byte *)(uVar1 + 0x12e);
    bVar29 = *(longlong *)(uVar1 + 0xe70) != 0;
  }
  fVar30 = (float)FUN_1800eb440();
  bVar7 = DAT_1802a54d9;
  bVar6 = DAT_180288270;
  iVar11 = FUN_1801da264(&DAT_180288278);
  if (iVar11 != 0) {
    FUN_1801da68c(5);
  }
  if (DAT_1802882c4 == 0x7fffffff) {
    DAT_1802882c4 = 0x7ffffffe;
    FUN_1801da68c(6);
  }
  uVar28 = (uVar1 >> 0x38 ^
           (uVar1 >> 0x30 & 0xff ^
           (uVar1 >> 0x28 & 0xff ^
           (uVar1 >> 0x20 & 0xff ^
           (uVar1 >> 0x18 & 0xff ^
           (uVar1 >> 0x10 & 0xff ^
           (uVar1 >> 8 & 0xff ^ (uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
  plVar13 = (longlong *)DAT_1802a54a8[(DAT_1802a54c0 & uVar28) * 2 + 1];
  plVar24 = DAT_1802a5498;
  if (plVar13 != DAT_1802a5498) {
    plVar24 = plVar13;
    if (uVar1 != plVar13[2]) {
      do {
        if (plVar24 == (longlong *)DAT_1802a54a8[(DAT_1802a54c0 & uVar28) * 2]) goto LAB_180145e1b;
        plVar24 = (longlong *)plVar24[1];
      } while (uVar1 != plVar24[2]);
    }
    goto LAB_180146458;
  }
LAB_180145e1b:
  if (DAT_1802a54a0 == 0x666666666666666) {
    FUN_18014865c(&DAT_1802a57f4,&DAT_180289999,0x11,0x1b,&DAT_1802a5810);
    FUN_1801d7524(&DAT_1802a57f4);
  }
  plVar13 = (longlong *)FUN_1801d61c8(0x28);
  plVar13[2] = uVar1;
  plVar13[3] = 0;
  plVar13[4] = 0x3f800000;
  uVar14 = DAT_1802a54c8;
  uVar21 = DAT_1802a54a0 + 1;
  if ((longlong)uVar21 < 0) {
    auVar35 = ZEXT416((uint)(float)uVar21);
    if ((longlong)DAT_1802a54c8 < 0) goto LAB_180145e88;
LAB_180145edd:
    fVar32 = auVar35._0_4_ / (float)(longlong)DAT_1802a54c8;
  }
  else {
    auVar35 = ZEXT416((uint)(float)(longlong)uVar21);
    if (-1 < (longlong)DAT_1802a54c8) goto LAB_180145edd;
LAB_180145e88:
    fVar32 = auVar35._0_4_ / (float)DAT_1802a54c8;
  }
  if (DAT_1802a5490 < fVar32) {
    auVar35._0_4_ = auVar35._0_4_ / DAT_1802a5490;
    fVar32 = (float)FUN_1801eacf0(auVar35._0_8_);
    puVar18 = DAT_1802a54b0;
    puVar23 = DAT_1802a54a8;
    plVar24 = DAT_1802a5498;
    uVar22 = (longlong)(fVar32 - 9.223372e+18) & (longlong)fVar32 >> 0x3f | (longlong)fVar32;
    uVar21 = 8;
    if (8 < uVar22) {
      uVar21 = uVar22;
    }
    uVar22 = uVar14;
    if (uVar14 < uVar21) {
      uVar22 = uVar14 << 3;
      if (uVar14 << 3 <= uVar21) {
        uVar22 = uVar21;
      }
      if (0x1ff < uVar14) {
        uVar22 = uVar21;
      }
    }
    if (0x800000000000000 < uVar22) {
      FUN_18014865c(&DAT_1802a5814,&DAT_1802899e2,0x17,0x1a,&DAT_1802a5830);
      FUN_1801d7524(&DAT_1802a5814);
    }
    uVar14 = uVar22 - 1 | 1;
    lVar12 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    bVar17 = 0x40 - ((byte)lVar12 ^ 0x3f);
    uVar14 = 1L << (bVar17 & 0x3f);
    uVar31 = SUB84(DAT_1802a5498,0);
    uVar40 = (undefined4)((ulonglong)DAT_1802a5498 >> 0x20);
    if ((ulonglong)((longlong)DAT_1802a54b0 - (longlong)DAT_1802a54a8 >> 3) < (ulonglong)(2L << (bVar17 & 0x3f))) {
      lVar12 = 0x10L << (bVar17 & 0x3f);
      if (uVar22 < 0x81) {
        puVar23 = (undefined8 *)FUN_1801d61c8(lVar12);
      }
      else {
        lVar15 = FUN_1801d61c8(lVar12 + 0x27);
        puVar23 = (undefined8 *)(lVar15 + 0x27U & 0xffffffffffffffe0);
        puVar23[-1] = lVar15;
      }
      uVar21 = (longlong)DAT_1802a54b8 - (longlong)DAT_1802a54a8;
      if (uVar21 != 0) {
        puVar18 = DAT_1802a54a8;
        if (0xfff < uVar21) {
          puVar18 = (undefined8 *)DAT_1802a54a8[-1];
          if (0x1f < (ulonglong)((longlong)DAT_1802a54a8 + (-8 - (longlong)puVar18))) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar21 = uVar21 + 0x27;
        }
        thunk_FUN_1801f42e0(puVar18,uVar21);
      }
      puVar18 = (undefined8 *)((longlong)puVar23 + lVar12);
      uVar21 = (lVar12 - 8U >> 3) + 1;
      DAT_1802a54a8 = puVar23;
      DAT_1802a54b0 = puVar18;
      DAT_1802a54b8 = puVar18;
      if (0x17 < lVar12 - 8U) {
        uVar26 = uVar21 & 0x3ffffffffffffffc;
        auVar36._8_4_ = uVar31;
        auVar36._0_8_ = plVar24;
        auVar36._12_4_ = uVar40;
        uVar22 = 0;
        do {
          *(undefined1 (*) [16])(puVar23 + uVar22) = auVar36;
          *(undefined1 (*) [16])(puVar23 + uVar22 + 2) = auVar36;
          uVar22 = uVar22 + 4;
        } while (uVar22 != uVar26);
        puVar23 = puVar23 + uVar26;
        if (uVar21 == uVar26) goto LAB_1801461cc;
      }
      do {
        *puVar23 = plVar24;
        puVar23 = puVar23 + 1;
      } while (puVar23 != puVar18);
    }
    else if (DAT_1802a54a8 != DAT_1802a54b0) {
      uVar21 = (longlong)DAT_1802a54b0 + (-8 - (longlong)DAT_1802a54a8);
      uVar22 = (uVar21 >> 3) + 1;
      puVar16 = DAT_1802a54a8;
      if (0x17 < uVar21) {
        uVar26 = uVar22 & 0x3ffffffffffffffc;
        puVar16 = DAT_1802a54a8 + uVar26;
        auVar37._8_4_ = uVar31;
        auVar37._0_8_ = DAT_1802a5498;
        auVar37._12_4_ = uVar40;
        uVar21 = 0;
        do {
          *(undefined1 (*) [16])(puVar23 + uVar21) = auVar37;
          *(undefined1 (*) [16])(puVar23 + uVar21 + 2) = auVar37;
          uVar21 = uVar21 + 4;
        } while (uVar21 != uVar26);
        if (uVar22 == uVar26) goto LAB_1801461cc;
      }
      do {
        *puVar16 = plVar24;
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar18);
    }
LAB_1801461cc:
    DAT_1802a54c0 = uVar14 - 1;
    DAT_1802a54c8 = uVar14;
    plVar20 = (longlong *)*DAT_1802a5498;
    puVar23 = DAT_1802a54a8;
joined_r0x0001801461f2:
    DAT_1802a54a8 = puVar23;
    if (plVar20 != plVar24) {
      plVar2 = (longlong *)*plVar20;
      uVar14 = ((ulonglong)*(byte *)((longlong)plVar20 + 0x17) ^
               ((ulonglong)*(byte *)((longlong)plVar20 + 0x16) ^
               ((ulonglong)*(byte *)((longlong)plVar20 + 0x15) ^
               ((ulonglong)*(byte *)((longlong)plVar20 + 0x14) ^
               ((ulonglong)*(byte *)((longlong)plVar20 + 0x13) ^
               ((ulonglong)*(byte *)((longlong)plVar20 + 0x12) ^
               ((ulonglong)*(byte *)((longlong)plVar20 + 0x11) ^
               ((ulonglong)*(byte *)(plVar20 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
               0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 &
               DAT_1802a54c0;
      if ((longlong *)puVar23[uVar14 * 2] == plVar24) {
        puVar23[uVar14 * 2] = plVar20;
LAB_180146204:
        puVar23[uVar14 * 2 + 1] = plVar20;
        plVar20 = plVar2;
        puVar23 = DAT_1802a54a8;
      }
      else {
        plVar19 = (longlong *)puVar23[uVar14 * 2 + 1];
        if (plVar20[2] == plVar19[2]) {
          plVar19 = (longlong *)*plVar19;
          if (plVar19 != plVar20) {
            puVar18 = (undefined8 *)plVar20[1];
            *puVar18 = plVar2;
            puVar16 = (undefined8 *)plVar2[1];
            *puVar16 = plVar19;
            puVar3 = (undefined8 *)plVar19[1];
            *puVar3 = plVar20;
            plVar19[1] = (longlong)puVar16;
            plVar2[1] = (longlong)puVar18;
            plVar20[1] = (longlong)puVar3;
          }
          goto LAB_180146204;
        }
        do {
          if ((longlong *)puVar23[uVar14 * 2] == plVar19) {
            puVar18 = (undefined8 *)plVar20[1];
            *puVar18 = plVar2;
            puVar16 = (undefined8 *)plVar2[1];
            *puVar16 = plVar19;
            puVar3 = (undefined8 *)plVar19[1];
            *puVar3 = plVar20;
            plVar19[1] = (longlong)puVar16;
            plVar2[1] = (longlong)puVar18;
            plVar20[1] = (longlong)puVar3;
            puVar23[uVar14 * 2] = plVar20;
            plVar20 = plVar2;
            puVar23 = DAT_1802a54a8;
            goto joined_r0x0001801461f2;
          }
          plVar19 = (longlong *)plVar19[1];
        } while (plVar20[2] != plVar19[2]);
        lVar12 = *plVar19;
        puVar23 = (undefined8 *)plVar20[1];
        *puVar23 = plVar2;
        plVar19 = (longlong *)plVar2[1];
        *plVar19 = lVar12;
        puVar18 = *(undefined8 **)(lVar12 + 8);
        *puVar18 = plVar20;
        *(longlong **)(lVar12 + 8) = plVar19;
        plVar2[1] = (longlong)puVar23;
        plVar20[1] = (longlong)puVar18;
        plVar20 = plVar2;
        puVar23 = DAT_1802a54a8;
      }
      goto joined_r0x0001801461f2;
    }
    plVar20 = (longlong *)puVar23[(DAT_1802a54c0 & uVar28) * 2 + 1];
    plVar24 = DAT_1802a5498;
    if (plVar20 != DAT_1802a5498) {
      if (plVar13[2] != plVar20[2]) {
        do {
          plVar24 = plVar20;
          if (plVar20 == (longlong *)puVar23[(DAT_1802a54c0 & uVar28) * 2]) goto LAB_180146397;
          plVar20 = (longlong *)plVar20[1];
        } while (plVar13[2] != plVar20[2]);
      }
      plVar24 = (longlong *)*plVar20;
    }
  }
LAB_180146397:
  puVar23 = (undefined8 *)plVar24[1];
  DAT_1802a54a0 = DAT_1802a54a0 + 1;
  *plVar13 = (longlong)plVar24;
  plVar13[1] = (longlong)puVar23;
  *puVar23 = plVar13;
  plVar24[1] = (longlong)plVar13;
  puVar18 = DAT_1802a54a8;
  uVar28 = uVar28 & DAT_1802a54c0;
  if ((longlong *)DAT_1802a54a8[uVar28 * 2] == DAT_1802a5498) {
    DAT_1802a54a8[uVar28 * 2] = plVar13;
LAB_1801463ed:
    puVar18[uVar28 * 2 + 1] = plVar13;
  }
  else if ((longlong *)DAT_1802a54a8[uVar28 * 2] == plVar24) {
    DAT_1802a54a8[uVar28 * 2] = plVar13;
  }
  else if ((undefined8 *)DAT_1802a54a8[uVar28 * 2 + 1] == puVar23) goto LAB_1801463ed;
  *(float *)(plVar13 + 3) = (float)(int)((uVar1 >> 4 & 0xffffffff) % 0x168);
  uVar31 = 0x3f800000;
  if ((uVar1 >> 4 & 0x40) != 0) {
    uVar31 = 0xbf800000;
  }
  *(undefined4 *)(plVar13 + 4) = uVar31;
  *(float *)((longlong)plVar13 + 0x24) = fVar30;
  plVar24 = plVar13;
LAB_180146458:
  pfVar25 = (float *)(plVar24 + 3);
  fVar32 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x18) == 0) {
    fVar32 = fVar30 - *(float *)((longlong)plVar24 + 0x24);
    fVar32 = (float)(-(uint)(0.1 < fVar32) & 0x3dcccccd | ~-(uint)(0.1 < fVar32) & ~-(uint)(fVar32 < 0.0) & (uint)fVar32
                    );
    *(float *)((longlong)plVar24 + 0x24) = fVar30;
  }
  if (((bVar8 | bVar27) & 1) == 0) {
    fVar30 = (float)FUN_1801ebe20();
    *pfVar25 = fVar30;
  }
  else if ((bVar7 & 1) == 0) {
    fVar30 = 0.0;
    fVar43 = 180.0;
    if (bVar29) {
      fVar30 = 174.0;
      fVar43 = 90.0;
    }
    if (((bVar6 & 1) == 0) || ((DAT_1802a54da & 1) != 0)) {
      *pfVar25 = fVar43;
    }
    else {
      fVar44 = (float)FUN_1801ecf00(fVar32 * -10.0);
      fVar32 = *pfVar25;
      auVar38._0_8_ = FUN_1801ebe20((fVar43 - fVar32) + 540.0);
      auVar38._8_8_ = extraout_XMM0_Qb;
      auVar39._4_12_ = auVar38._4_12_;
      auVar39._0_4_ = ((float)auVar38._0_8_ + -180.0) * (1.0 - fVar44) + fVar32 + 360.0;
      fVar32 = (float)FUN_1801ebe20(auVar39._0_8_);
      *pfVar25 = fVar32;
      fVar30 = (fVar30 - *(float *)((longlong)plVar24 + 0x1c)) * (1.0 - fVar44) + *(float *)((longlong)plVar24 + 0x1c);
    }
    *(float *)((longlong)plVar24 + 0x1c) = fVar30;
  }
  FUN_1801da26c(&DAT_180288278);
  fVar30 = param_1[4];
  fVar32 = param_1[5];
  fVar43 = param_1[6];
  fVar44 = param_1[7];
  param_1[4] = fVar30 * -4.371139e-08 + param_1[8];
  param_1[5] = fVar32 * -4.371139e-08 + param_1[9];
  param_1[6] = fVar43 * -4.371139e-08 + param_1[10];
  param_1[7] = fVar44 * -4.371139e-08 + param_1[0xb];
  fVar30 = param_1[8] * -4.371139e-08 - fVar30;
  fVar32 = param_1[9] * -4.371139e-08 - fVar32;
  fVar43 = param_1[10] * -4.371139e-08 - fVar43;
  fVar44 = param_1[0xb] * -4.371139e-08 - fVar44;
  param_1[8] = fVar30;
  param_1[9] = fVar32;
  param_1[10] = fVar43;
  param_1[0xb] = fVar44;
  fVar33 = (float)FUN_1801ec4b0();
  fVar34 = (float)FUN_1801eca40();
  fVar41 = *param_1;
  fVar42 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  *param_1 = fVar41 * fVar33 + fVar34 * fVar30;
  param_1[1] = fVar42 * fVar33 + fVar34 * fVar32;
  param_1[2] = fVar4 * fVar33 + fVar34 * fVar43;
  param_1[3] = fVar5 * fVar33 + fVar34 * fVar44;
  param_1[8] = fVar33 * fVar30 - fVar34 * fVar41;
  param_1[9] = fVar33 * fVar32 - fVar34 * fVar42;
  param_1[10] = fVar33 * fVar43 - fVar34 * fVar4;
  param_1[0xb] = fVar33 * fVar44 - fVar34 * fVar5;
  fVar30 = (float)FUN_1801ec4b0();
  fVar32 = (float)FUN_1801eca40();
  fVar43 = fVar30 * param_1[4] - *param_1 * fVar32;
  fVar44 = fVar30 * param_1[5] - param_1[1] * fVar32;
  fVar41 = fVar30 * param_1[6] - param_1[2] * fVar32;
  fVar42 = fVar30 * param_1[7] - param_1[3] * fVar32;
  *param_1 = fVar30 * *param_1 + fVar32 * param_1[4];
  param_1[1] = fVar30 * param_1[1] + fVar32 * param_1[5];
  param_1[2] = fVar30 * param_1[2] + fVar32 * param_1[6];
  param_1[3] = fVar30 * param_1[3] + fVar32 * param_1[7];
  param_1[4] = fVar43;
  param_1[5] = fVar44;
  param_1[6] = fVar41;
  param_1[7] = fVar42;
  if ((!bVar29) && ((DAT_1802a54d4 != 0.0 || (NAN(DAT_1802a54d4))))) {
    fVar44 = fVar44 * DAT_1802a54d4;
    fVar41 = fVar41 * DAT_1802a54d4;
    fVar42 = fVar42 * DAT_1802a54d4;
    param_1[0xc] = fVar43 * DAT_1802a54d4 + param_1[0xc];
    param_1[0xd] = fVar44 + param_1[0xd];
    param_1[0xe] = fVar41 + param_1[0xe];
    param_1[0xf] = fVar42 + param_1[0xf];
  }
  return false;
}



void Unwind_1801467d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x78));
  return;
}



void Unwind_180146840(void)

{
  FUN_1801da26c(&DAT_180288278);
  return;
}



ulonglong FUN_1801468b0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 0x28;
  local_58 = 0xf;
  local_88 = 4;
  local_80 = 0xfff;
  local_39 = 0;
  local_78 = 0x20;
  local_70 = -8;
  local_68 = 1;
  local_50 = 0;
  local_48 = 0;
  local_4c = 4;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_180146c39;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_18014865c(&DAT_1802a57a0,&DAT_1802889d6,0x1b,0x19,&DAT_1802a57bc);
    local_d8 = &DAT_1802a57a0;
    local_d0 = 0x18;
    FUN_18014865c(&DAT_1802a57c0,&DAT_180288a27,0x1d,5,&DAT_1802a57c8);
    local_c8 = &DAT_1802a57c0;
    local_c0 = local_88;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_180146be7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180146c27;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_18014865c(&DAT_1802a57cc,&DAT_180288a5a,0x14,0x22,&DAT_1802a57f0);
      local_b8 = &DAT_1802a57cc;
      local_b0 = 0x21;
      FUN_18014865c(&DAT_1802a57c0,&DAT_180288a27,0x1d,5,&DAT_1802a57c8);
      local_a8 = &DAT_1802a57c0;
      local_a0 = local_88;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180146be7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180146c27;
  }
  lVar10 = *local_60;
  uVar13 = local_68 + uVar9;
  lVar11 = lVar10;
  if (local_80 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_78 <= (ulonglong)((lVar10 + local_70) - lVar11)) {
LAB_180146c39:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_90;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180146c27:
  return uVar12 & 0xffffffff;
}



void Unwind_180146c60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_180146c90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;

  local_c0 = 0x67f3ac1a603d2d1b;
  local_c8 = 0x6ba13b7788aab52b;
LAB_180146d90:
  do {
    while( true ) {
      uVar4 = local_c0 ^ 0x82a276b4bbd4d1ca;
      uVar3 = local_c0 ^ local_c8;
      local_c8 = local_c8 ^ 0x82a276b4bbd4d1ca;
      local_c0 = uVar4;
      if ((longlong)uVar3 < 0x227f53e5144dabc8) break;
      if ((longlong)uVar3 < 0x59596ee57f04ada2) {
        if (uVar3 == 0x227f53e5144dabc8) {
          DAT_180288260 = *(undefined4 *)(param_2 + 0x14c);
          local_c0 = 0x1320ab99c496eb39;
          local_c8 = 0xda144ccfc314666;
        }
        else if (uVar3 == 0x32e1dcd193ff2b73) {
          local_9c = local_b0;
          lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          local_98 = (int *)(lVar1 + 0x18);
          local_a0 = *(int *)(lVar1 + 0x18);
          local_c0 = 0x8ab4de6fd481c55;
          local_c8 = 0xd3acade8eef8a34d;
          local_ac = 0;
        }
        else if (uVar3 == 0x525d2fc4e06c9b40) {
          local_a8 = (undefined1 *)(param_2 + 0xec0);
          local_ca = *(undefined1 *)(param_2 + 0xec0);
          *(undefined1 *)(param_2 + 0xec0) = 1;
          local_c0 = 0xb4ec715442dd2f39;
          local_c8 = 0x1210ad16f1bc43bf;
        }
      }
      else if ((longlong)uVar3 < 0x5a85f37a8549fc64) {
        if (uVar3 == 0x59596ee57f04ada2) {
          *local_90 = local_b5;
          local_c0 = 0x73dd64e59c8ee04f;
          local_c8 = 0xed3fc958ab8db6a8;
        }
        else if (uVar3 == 0x5a65f3204a561628) {
          cVar2 = FUN_1801b3c30(param_2,0x150);
          local_c0 = 0xcbd7bf9bdb9c9634;
          if (cVar2 != '\0') {
            local_c0 = 0xf729032bf77690a3;
          }
          local_c8 = 0xd55650cee33b3b6b;
        }
      }
      else if (uVar3 == 0x5a85f37a8549fc64) {
        *local_98 = local_a0;
        local_c0 = 0xe41d732b1dbbb897;
        if (local_90 == (undefined1 *)0x0) {
          local_c0 = 0x23a6b07355bc43d2;
        }
        local_c8 = 0xbd441dce62bf1535;
      }
      else if (uVar3 == 0x7885a6c65afb5030) {
        cVar2 = FUN_1801b3c30(param_2,0xec1);
        local_c0 = 0x73b02a374b98db3e;
        if (cVar2 != '\0') {
          local_c0 = 0x8711d9b118952cf8;
        }
        local_c8 = 0xd54cf675f8f9b7b8;
LAB_18014707d:
        local_ca = local_c9;
        local_a8 = (undefined1 *)0x0;
      }
    }
    if ((longlong)uVar3 < 0xc52976de8979830) {
      if ((longlong)uVar3 < -0x590323bd4c9e937a) {
        if (uVar3 == 0x940ca339ffab926a) {
          local_c0 = 0x2604939c9c57321a;
          local_c8 = 0x80f84fde2f365e9c;
          local_ca = local_c9;
          local_a8 = (undefined1 *)0x0;
        }
        else if (uVar3 == 0x9ee2adbd370356e7) {
          *local_78 = local_70;
          return;
        }
      }
      else if (uVar3 == 0xa6fcdc42b3616c86) {
        local_90 = local_a8;
        local_b5 = local_ca;
        local_c0 = 0xa75f2267a3d63dd2;
        if ((DAT_1802a54db & 1) != 0) {
          local_c0 = 0x84cdf4e0a47554f2;
        }
        local_c8 = 0x95befeb6302916a1;
        local_b0 = local_b4;
      }
      else if (uVar3 == 0xdb07e00e13b0bf18) {
        *local_98 = local_ac;
        (*DAT_180288190)(param_1,param_2,param_3,param_4,param_5);
        local_ac = local_ac + local_b4;
        local_c0 = 0xf4c3504958884a7f;
        if (local_ac == local_9c) {
          local_c0 = 0x7541433dce710903;
        }
        local_c8 = 0x2fc4b0474b38f567;
      }
      goto LAB_180146d90;
    }
    if (uVar3 == 0xc52976de8979830) {
      local_b4 = 1;
      local_c9 = 0;
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_78 = (undefined8 *)(lVar1 + 0x10);
      local_70 = *(undefined8 *)(lVar1 + 0x10);
      *(longlong *)(lVar1 + 0x10) = param_2;
      local_c0 = 0xe9738ee0c3674f90;
      if (param_2 == 0) {
        local_c0 = 0x271adef9769acbd2;
      }
      local_c8 = 0xb3167dc0893159b8;
    }
    else if (uVar3 == 0x11730a56945c4253) {
      local_b0 = DAT_18028826c;
      if (DAT_18028826c < 2) {
        local_b0 = 1;
      }
      if (7 < local_b0) {
        local_b0 = 8;
      }
      local_c0 = 0x8fb0dcff38dbfa68;
      local_c8 = 0xbd51002eab24d11b;
    }
    else if (uVar3 == 0x1e81ef5538a7ad5f) {
      local_c0 = 0x8c621facfff7eb7e;
      if ((DAT_1802a54db & 1) != 0) {
        local_c0 = 0x521b6528166dd7c8;
      }
      local_c8 = 0x2a9ec3ee4c9687f8;
      goto LAB_18014707d;
    }
  } while( true );
}



ulonglong FUN_180147300(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 0x28;
  local_58 = 0xf;
  local_88 = 4;
  local_80 = 0xfff;
  local_39 = 0;
  local_78 = 0x20;
  local_70 = 1;
  local_68 = -8;
  local_50 = 0;
  local_48 = 0;
  local_4c = 4;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_180147689;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_18014865c(&DAT_1802a57a0,&DAT_1802889d6,0x1b,0x19,&DAT_1802a57bc);
    local_d8 = &DAT_1802a57a0;
    local_d0 = 0x18;
    FUN_18014865c(&DAT_1802a57c0,&DAT_180288a27,0x1d,5,&DAT_1802a57c8);
    local_c8 = &DAT_1802a57c0;
    local_c0 = local_88;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_180147637:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180147677;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_18014865c(&DAT_1802a57cc,&DAT_180288a5a,0x14,0x22,&DAT_1802a57f0);
      local_b8 = &DAT_1802a57cc;
      local_b0 = 0x21;
      FUN_18014865c(&DAT_1802a57c0,&DAT_180288a27,0x1d,5,&DAT_1802a57c8);
      local_a8 = &DAT_1802a57c0;
      local_a0 = local_88;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180147637;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180147677;
  }
  lVar10 = *local_60;
  uVar13 = local_70 + uVar9;
  lVar11 = lVar10;
  if (local_80 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_78 <= (ulonglong)((lVar10 + local_68) - lVar11)) {
LAB_180147689:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_90;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180147677:
  return uVar12 & 0xffffffff;
}



void Unwind_1801476b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1801476e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_retaddr;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;

  local_98 = 0x344b3f28afa0822f;
  local_a0 = 0xf2d84774eb349e1e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x6b27d7c1220d06a4;
          if (0x49a6d6a30e568cb < (longlong)uVar2) break;
          if (uVar2 == 0x930feaad0a1f81ca) {
            lVar1 = FUN_1801b2b70();
            local_98 = 0xc8c24f739e3f73da;
            if (lVar1 + 0x5704fa == local_90) {
              local_98 = 0xabb431f6c8f925a7;
            }
            local_a0 = 0xf6d6925070f47ce2;
          }
          else {
            local_98 = local_98 ^ 0x6b27d7c1220d06a4;
            if (uVar2 == 0xc693785c44941c31) {
              local_98 = 0xc7084ab93cb0828f;
              if ((DAT_1802a54db & 1) != 0) {
                local_98 = 0xfd86faf0e29ee57b;
              }
              local_a0 = 0xf91c979ad27b8db7;
            }
          }
        }
        if (uVar2 != 0x49a6d6a30e568cc) break;
        lVar1 = FUN_1801b2b70();
        local_98 = 0xb575f3227c29b463;
        if (lVar1 + 0x57031e == unaff_retaddr) {
          local_98 = 0x7b18ba29ce3b6cec;
        }
        local_a0 = 0x267a198f763635a9;
        local_90 = unaff_retaddr;
      }
      if (uVar2 != 0x3e14dd23eecb0f38) break;
      (*DAT_180288210)(param_1,param_2,param_3,param_4,param_5);
      local_98 = 0xb7b0cdcf59f51a56;
      local_a0 = 0xead26e69e1f84313;
    }
    local_98 = local_98 ^ 0x6b27d7c1220d06a4;
  } while (uVar2 != 0x5d62a3a6b80d5945);
  return;
}



undefined4 FUN_180147940(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;

  local_50 = 0x15dd54c168427895;
  local_58 = 0x85d7d390a157b1dd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_50 ^ 0xd6225f929cdddb91;
          uVar2 = local_50 ^ local_58;
          local_58 = local_58 ^ 0xd6225f929cdddb91;
          local_50 = uVar3;
          if ((longlong)uVar2 < 0x1e488f89c1f22e5) break;
          if (uVar2 == 0x1e488f89c1f22e5) {
            local_44 = DAT_180288260;
            local_50 = 0x3cb3ca94abe08ebd;
            if (-1 < DAT_180288260) {
              local_50 = 0xa55d23661d1f087e;
            }
            local_58 = 0x5207d109da92960b;
          }
          else if (uVar2 == 0x3022318b5435aeec) {
            local_50 = 0x670c8cc08f6763f6;
            if ((DAT_1802a54d8 & 1) != 0) {
              local_50 = 0x85c1fa5620a59a5;
            }
            if (param_1 == 0) {
              local_50 = 0x670c8cc08f6763f6;
            }
            local_58 = 0x9b8975dfe157b40;
          }
          else if (uVar2 == 0x6eb41b9d717218b6) {
            local_48 = (*DAT_180288250)(param_1);
            local_50 = 0xafd9716f8904055b;
            local_58 = 0x3c163b02abcde278;
          }
        }
        if ((longlong)uVar2 < -0x12fd8e219a81ea7b) break;
        if (uVar2 == 0xed0271de657e1585) {
          local_50 = 0x637e4752a6fac15;
          if (*(int *)(param_1 + 0x14c) == local_44) {
            local_50 = 0xfb4cb58579d45380;
          }
          local_58 = 0x6883ffe85b1db4a3;
          local_48 = 0;
        }
        else if (uVar2 == 0xf75af26fc78d9e75) {
          cVar1 = FUN_1801b3c30(param_1,0x150);
          local_50 = 0x55bfc05040a0e277;
          if (cVar1 != '\0') {
            local_50 = 0xd609aa1354acef44;
          }
          local_58 = 0x3b0bdbcd31d2fac1;
        }
      }
      if (uVar2 != 0x900a8751c915c948) break;
      local_50 = 0x1a802012cc8f83c7;
      if ((DAT_1802a54db & 1) != 0) {
        local_50 = 0x44160a04e9c8359d;
      }
      local_58 = 0x74343b8fbdfd9b71;
    }
  } while (uVar2 != 0x93cf4a6d22c9e723);
  return local_48;
}



void FUN_180147c20(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x6e0c2000439e23fa;
  local_58 = 0x6b8299f8e458b358;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xc230901605ba1b26;
        if (uVar1 != 0x58eb9f8a7c690a2) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0x2bedecb2b7703fcd;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0xf4c797468402ba;
        }
        local_58 = 0x2d696636b491bacf;
      }
      if (uVar1 != 0x2d9da1a1f215b875) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0xf5ee2586ba57c5c;
      local_58 = 0x9da68dc6844f95e;
    }
    local_50 = local_50 ^ 0xc230901605ba1b26;
  } while (uVar1 != 0x6848a8403e18502);
  return;
}



void FUN_180147d50(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x3e36aa1a3d8eca66;
  local_50 = 0x8325876db2ace18;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x798686514da42f06;
        if (uVar1 != 0x3604f26ce6a4047e) break;
        local_48 = 0x3596a7af8c2ac82c;
        if (param_2 != '\0') {
          local_48 = 0x26e4aa71653589c3;
        }
        local_50 = 0x79212073f8cb48f5;
      }
      if (uVar1 != 0x5fc58a029dfec136) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xff2bd77721c1e4fb;
      local_50 = 0xb39c50ab55206422;
    }
    local_48 = local_48 ^ 0x798686514da42f06;
  } while (uVar1 != 0x4cb787dc74e180d9);
  return;
}



undefined8 FUN_180147e80(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x4ea7ff4be2985e1d;
  local_50 = 0xb04a5bf2961348eb;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xf699b3d691d1afb;
        if (uVar1 != 0xaec166c1e1622145) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0x8766ca48e0a12197;
        local_50 = 0xe57ab4f50b115436;
      }
      if (uVar1 != 0xfeeda4b9748b16f6) break;
      FUN_180141a10(param_1);
      local_48 = 0x3604ee0ad4ea5433;
      if ((param_2 & 1) == 0) {
        local_48 = 0xfad9f676de3800d7;
      }
      local_50 = 0x98c588cb35887576;
    }
    local_48 = local_48 ^ 0xf699b3d691d1afb;
  } while (uVar1 != 0x621c7ebdebb075a1);
  return param_1;
}



undefined8 FUN_180147fd0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x999fc38d5bdfc54e;
  local_50 = 0x148e2195898d0f30;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb464ba8144908e8b;
        if (uVar1 != 0x8d11e218d252ca7e) break;
        FUN_180141b80(param_1);
        local_48 = 0x596ac37a27d8cc95;
        if ((param_2 & 1) == 0) {
          local_48 = 0x480efb366ce20d5e;
        }
        local_50 = 0xa87a937b32340134;
      }
      if (uVar1 != 0xf110500115eccda1) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0x42dd4b566520ea3;
      local_50 = 0xe459bcf8388402c9;
    }
    local_48 = local_48 ^ 0xb464ba8144908e8b;
  } while (uVar1 != 0xe074684d5ed60c6a);
  return param_1;
}



undefined8 FUN_180148120(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xa2387b6583079a02;
  local_50 = 0x3ee258094ab2af37;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xab1b0930f066e0ec;
        if (uVar1 != 0x9cda236cc9b53535) break;
        FUN_180141cf0(param_1);
        local_48 = 0xb160e7b252bcbf36;
        if ((param_2 & 1) == 0) {
          local_48 = 0x9009102eaa6ded24;
        }
        local_50 = 0x96ee65924aacbd3d;
      }
      if (uVar1 != 0x278e82201810020b) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0x3bc8a1600bfaf297;
      local_50 = 0x3d2fd4dceb3ba28e;
    }
    local_48 = local_48 ^ 0xab1b0930f066e0ec;
  } while (uVar1 != 0x6e775bce0c15019);
  return param_1;
}



undefined8 FUN_180148270(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x5dec1f856641505e;
  local_50 = 0x4438642839e46819;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x801e8219a78ab625;
        if (uVar1 != 0x24e13e2157ef762) break;
        thunk_FUN_1801f42e0(param_1,0xb8);
        local_48 = 0xcff8c009619740c5;
        local_50 = 0x44059abe0539a3ea;
      }
      if (uVar1 != 0x19d47bad5fa53847) break;
      FUN_180106c90(param_1);
      local_48 = 0x93decc238da3c1ac;
      if ((param_2 & 1) == 0) {
        local_48 = 0x1a6d8576fc73d5e1;
      }
      local_50 = 0x9190dfc198dd36ce;
    }
    local_48 = local_48 ^ 0x801e8219a78ab625;
  } while (uVar1 != 0x8bfd5ab764aee32f);
  return param_1;
}



void FUN_1801483c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;

  atexit((_func_5014 *)&LAB_180141b70);
  atexit((_func_5014 *)&LAB_180141ce0);
  atexit((_func_5014 *)&LAB_180141e50);
  atexit((_func_5014 *)&LAB_180141e60);
  DAT_1802a5490 = 0;
  DAT_1802a5498 = 0;
  DAT_1802a54a0 = 0;
  lVar1 = FUN_1801d61c8(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  DAT_1802a54a8 = (longlong *)0x0;
  DAT_1802a54b0 = (longlong *)0x0;
  DAT_1802a54b8 = (longlong *)0x0;
  DAT_1802a54c0 = 7;
  DAT_1802a54c8 = 8;
  DAT_1802a5490 = 0x3f800000;
  DAT_1802a5498 = lVar1;
  plVar2 = (longlong *)FUN_1801d61c8(0x80);
  uVar4 = (longlong)DAT_1802a54b8 - (longlong)DAT_1802a54a8;
  if (uVar4 != 0) {
    lVar3 = (longlong)DAT_1802a54a8;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)((longlong)DAT_1802a54a8 + -8);
      if (0x1f < ((longlong)DAT_1802a54a8 - lVar3) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  DAT_1802a54b0 = plVar2 + 0x10;
  DAT_1802a54a8 = plVar2;
  DAT_1802a54b8 = DAT_1802a54b0;
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
  atexit(FUN_180141e70);
  FUN_18014865c(&DAT_1802a54dc,&DAT_180288391,0x19,0xc,&DAT_1802a54e8);
  FUN_1800f0070(&DAT_1802a54d0,&DAT_1802a54dc,FUN_180142280);
  return;
}



void Unwind_180148630(void)

{
  FUN_1801450b0();
  FUN_1801453b0();
  return;
}



void FUN_18014865c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x3453cd02a55859;
  local_68 = 0x46e7f08f0c6da18b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x7d413592e5fe49d9;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x7d413592e5fe49d9;
          local_60 = uVar2;
          if (-0xb22126b0d548607 < (longlong)uVar1) break;
          if (uVar1 == 0xd51969a990c6c369) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0x51fd18e30a611b37;
            local_68 = 0xb4b36d4a1eb794e3;
          }
          else if (uVar1 == 0xe1ab8f506fa533c6) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x761e763feb3ead84;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x57daf20289531717;
            }
            local_68 = 0x82c39bab1995d47e;
          }
          else if (uVar1 == 0xe54e75a914d68fd4) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0xe00b96e1169ff996;
            if (local_54 == param_4) {
              local_60 = 0x46622d1a4bc9d59a;
            }
            local_68 = 0x1a019b1793aca50;
          }
        }
        if ((longlong)uVar1 < 0x46d3a3420ec8f9d2) break;
        if (uVar1 == 0x47c234ab32f31fca) {
          *param_5 = 1;
          local_60 = 0x7aa1795b32559de0;
          local_68 = 0x73b254d41c5f0055;
        }
        else if (uVar1 == 0x46d3a3420ec8f9d2) {
          local_60 = 0x9f9a2963d4109034;
          if (*param_5 == 1) {
            local_60 = 0x77228bbc95bf3e47;
          }
          local_68 = 0x7e31a633bbb5a3f2;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0xf4dded94f2ab79fa) break;
      local_6a = -(local_6c - local_69 ^ local_6d);
      local_60 = 0xef36d4e4a81d2b1f;
      local_68 = 0xa78a14dbccba4cb;
    }
  } while (uVar1 != 0x9132d8f2e0a9db5);
  return;
}



undefined8 * FUN_180148910(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_168;
  undefined8 *local_160;
  code *local_158;
  undefined ***local_130;
  undefined4 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_80;
  undefined3 uStack_7c;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 *local_30;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_3c = 0x3c23d70a;
  local_38 = 0x3f800000;
  local_60 = 0x1f;
  local_48 = 0;
  local_50 = 0xf;
  local_34 = 0;
  local_58 = 0x20;
  local_21 = 0;
  local_120 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x30);
  local_118 = 0x22;
  local_110 = 0x2f;
  local_128 = puVar3;
  FUN_18014947b(&DAT_1802a5834,&DAT_180289ad9,0x19,0x23,&DAT_1802a5858);
  *(undefined2 *)(puVar3 + 8) = DAT_1802a5854;
  uVar4 = uRam00000001802a584c;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a5844;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a5840;
  uVar1 = uRam00000001802a583c;
  uVar5 = uRam00000001802a5838;
  *puVar3 = _DAT_1802a5834;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x22) = local_21;
  local_78 = local_48;
  local_70 = 7;
  local_68 = local_50;
  uVar5 = 1;
  FUN_18014947b(&DAT_1802a585c,&DAT_180289b2e,0x19,8,&DAT_1802a5864);
  uStack_7c = uRam00000001802a5860;
  local_80 = DAT_1802a585c;
  local_79 = local_21;
  FUN_1801063a0(param_1,&local_80,&local_128,local_34,CONCAT44(uVar5,local_34));
  *param_1 = &PTR_FUN_18021b1a0;
  *(undefined4 *)(param_1 + 0x10) = local_38;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  local_30 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_58);
  local_b8 = 0x1a;
  uStack_b0 = local_60;
  local_c8 = puVar3;
  FUN_18014947b(&DAT_1802a5868,&DAT_180289b6c,0x18,0x1b,&DAT_1802a5884);
  uVar4 = uRam00000001802a587a;
  *(ulonglong *)((longlong)puVar3 + 10) = CONCAT26(uRam00000001802a5878,CONCAT42(uRam00000001802a5874,_DAT_1802a5872));
  *(undefined8 *)((longlong)puVar3 + 0x12) = uVar4;
  uVar2 = uRam00000001802a5874;
  uVar1 = uRam00000001802a586c;
  uVar5 = CONCAT22(_DAT_1802a5872,uRam00000001802a5870);
  *puVar3 = _DAT_1802a5868;
  puVar3[1] = uVar1;
  puVar3[2] = uVar5;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1a) = local_21;
  local_100 = local_48;
  local_f8 = 10;
  local_f0 = local_50;
  uVar5 = 1;
  FUN_18014947b(&DAT_1802a5888,&DAT_180289bbc,0x1a,0xb,&DAT_1802a5894);
  local_100 = CONCAT62(local_100._2_6_,DAT_1802a5890);
  local_108 = DAT_1802a5888;
  uVar4 = FUN_180108270(local_30,&local_108,&local_c8,0x3f933333,CONCAT44(uVar5,local_38),0x3fc00000,local_3c);
  local_30[0xe] = uVar4;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_58);
  local_98 = 0x14;
  uStack_90 = local_60;
  local_a8 = puVar3;
  FUN_18014947b(&DAT_1802a5898,&DAT_180289bfc,0x15,0x15,&DAT_1802a58b0);
  puVar3[4] = DAT_1802a58a8;
  uVar2 = uRam00000001802a58a4;
  uVar1 = uRam00000001802a58a0;
  uVar5 = uRam00000001802a589c;
  *puVar3 = _DAT_1802a5898;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 5) = local_21;
  local_e0 = local_48;
  local_d8 = 9;
  local_d0 = local_50;
  uVar5 = 1;
  FUN_18014947b(&DAT_1802a58b4,&DAT_180289c3f,0x1e,10,&DAT_1802a58c0);
  local_e0 = CONCAT71(local_e0._1_7_,DAT_1802a58bc);
  local_e8 = DAT_1802a58b4;
  uVar4 = FUN_180108270(local_30,&local_e8,&local_a8,0x3e19999a,CONCAT44(uVar5,0x3ca3d70a),local_38,local_3c);
  local_30[0xf] = uVar4;
  uVar4 = FUN_1800ba260();
  local_168 = &PTR_LAB_18021b1e0;
  local_160 = local_30;
  local_158 = FUN_180148e70;
  local_130 = &local_168;
  FUN_180121610(uVar4,local_30,local_130,local_34);
  return local_30;
}



void Unwind_180148e40(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x178));
  return;
}



void FUN_180148e70(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;

  local_58 = 0xde754bf50708bd08;
  local_60 = 0x11e7c072d34a29bf;
  do {
    while( true ) {
      uVar2 = local_58 ^ local_60;
      local_60 = local_60 ^ 0xfda13cc02100477a;
      if ((longlong)uVar2 < 0x1b36c225de1794e) break;
      if (uVar2 == 0x1b36c225de1794e) {
        cVar1 = (**(code **)(*local_48 + 0x5e0))();
        local_58 = 0xf91acd1125e9ec54;
        if (cVar1 != '\0') {
          local_58 = 0x74b31201868e61b3;
        }
        local_60 = 0x2dd62b19f71415b;
LAB_180148f2d:
        local_64 = local_4c;
      }
      else {
        local_58 = local_58 ^ 0xfda13cc02100477a;
        if (uVar2 == 0x766e70b019ff20e8) {
          local_64 = *(float *)(*(longlong *)(param_1 + 0x70) + 0x90);
          local_58 = 0xdc97dc3f20024607;
          local_60 = 0x2750739f9a9aeb08;
        }
      }
    }
    if (uVar2 == 0xcf928b87d44294b7) {
      local_4c = 1.0;
      lVar3 = FUN_180179ff0();
      local_48 = *(longlong **)(lVar3 + 8);
      local_58 = 0x34f5a192f40cde2c;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0xce81621013750a6d;
      }
      local_60 = 0x3546cdb0a9eda762;
      goto LAB_180148f2d;
    }
    local_58 = local_58 ^ 0xfda13cc02100477a;
    if (uVar2 == 0xfbc7afa0ba98ad0f) {
      fVar5 = (local_64 - *(float *)(param_1 + 0x80)) * *(float *)(*(longlong *)(param_1 + 0x78) + 0x90) +
              *(float *)(param_1 + 0x80);
      uVar4 = -(uint)(ABS(local_64 - fVar5) < 0.0005);
      *(uint *)(param_1 + 0x80) = uVar4 & (uint)local_64 | ~uVar4 & (uint)fVar5;
      FUN_1800edd90(0);
      return;
    }
  } while( true );
}



void FUN_180149080(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  FUN_1800edd90(0,0x3f800000);
  return;
}



void FUN_1801490e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xac964c7ae4cb414f;
  local_58 = 0x6ddb0199bb18fa4e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x58b1b517ed14a247;
        if (uVar1 != 0xc14d4de35fd3bb01) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0x571910f1a268c0d7;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0xe8af8b3589b4d10d;
        }
        local_58 = 0x9d03f903d2280e23;
      }
      if (uVar1 != 0x75ac72365b9cdf2e) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0xdbd958cd873fd734;
      local_58 = 0x11c3b13ff77f19c0;
    }
    local_50 = local_50 ^ 0x58b1b517ed14a247;
  } while (uVar1 != 0xca1ae9f27040cef4);
  return;
}



void FUN_180149210(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xa2bb4784ada12bb3;
  local_50 = 0xc072f78aa9043fcd;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x4e61bc6a2319d9ca;
        if (uVar1 != 0x3ca6455bc689c6d3) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0x134f10913367ab7b;
        local_50 = 0xd42992ced687fa2a;
      }
      if (uVar1 != 0x62c9b00e04a5147e) break;
      local_48 = 0x496bcb18ec07f85d;
      if (param_2 != '\0') {
        local_48 = 0xb2ab0c1ccf6e6fdf;
      }
      local_50 = 0x8e0d494709e7a90c;
    }
    local_48 = local_48 ^ 0x4e61bc6a2319d9ca;
  } while (uVar1 != 0xc766825fe5e05151);
  return;
}



undefined8 FUN_180149330(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x9d566f6bb6a0289d;
  local_50 = 0x9c03ac0a7007aa2b;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xa491f8205342ca1;
        if (uVar1 != 0x155c361c6a782b6) break;
        FUN_180106c90(param_1);
        local_48 = 0x79a7dab5c2d33082;
        if ((param_2 & 1) == 0) {
          local_48 = 0xfed49518ee3ca649;
        }
        local_50 = 0x2c9b1b21e1ff4084;
      }
      if (uVar1 != 0x553cc194232c7006) break;
      thunk_FUN_1801f42e0(param_1,0x88);
      local_48 = 0x7311434f489d9bb6;
      local_50 = 0xa15ecd76475e7d7b;
    }
    local_48 = local_48 ^ 0xa491f8205342ca1;
  } while (uVar1 != 0xd24f8e390fc3e6cd);
  return param_1;
}



void FUN_18014947b(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x59a5472e3972b53;
  local_68 = 0x3da57bfb81c0427c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x8cc72529a077d0ca;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x8cc72529a077d0ca;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x27c1cdc43d2caf55) break;
          if (uVar1 == 0x27c1cdc43d2caf55) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0xb17ffac59ae9efb;
            if (local_54 == param_4) {
              local_60 = 0xa2fbdf57bc4e3528;
            }
            local_68 = 0x3edd399b2c20c49;
          }
          else if (uVar1 == 0x42cfee92d44ae217) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xf44b9d626e098d6a;
            local_68 = 0xd38a50a65325223f;
          }
          else if (uVar1 == 0x383f2f896257692f) {
            local_60 = 0x6818f31fc3e31eec;
            if (*param_5 == 1) {
              local_60 = 0xbb292373995c6c09;
            }
            local_68 = 0x60e2df2a288f8c5e;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if (-0x243403a64e2c1faa < (longlong)uVar1) break;
        if (uVar1 == 0xa1160cce0e8c3961) {
          *param_5 = 1;
          local_60 = 0xfbafc30f71d5443d;
          local_68 = 0x20643f56c006a46a;
        }
        else if (uVar1 == 0xc19b9f16e4738a14) {
          local_6a = -(local_6c - local_69 ^ local_6d);
          local_60 = 0xbd330b5dfa705ced;
          local_68 = 0x9af2c699c75cf3b8;
        }
      }
      if (uVar1 != 0x8fa2c35eb6c92b2) break;
      local_69 = local_6b;
      local_4c = local_54;
      local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
      local_6c = *(char *)(local_48 + (int)local_54);
      local_60 = 0x3efd62f51c7139b8;
      if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
        local_60 = 0xbda913712c4851bb;
      }
      local_68 = 0xff66fde3f802b3ac;
    }
  } while (uVar1 != 0xdbcbfc59b1d3e057);
  return;
}



undefined8 * FUN_180149730(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined ***local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined7 local_68;
  undefined4 uStack_61;
  undefined5 uStack_5d;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_28 = 0;
  local_40 = 0;
  local_21 = 0;
  local_38 = 0xf;
  local_80 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x40);
  local_78 = 0x37;
  local_70 = 0x3f;
  local_88 = puVar3;
  FUN_18014b335(&DAT_1802a58c4,&DAT_180289e08,0x1a,0x38,&DAT_1802a58fc);
  *(ulonglong *)((longlong)puVar3 + 0x2f) = CONCAT71(DAT_1802a58f3._1_7_,(undefined1)DAT_1802a58f3);
  uVar4 = CONCAT17((undefined1)DAT_1802a58f3,uRam00000001802a58ec);
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a58e4;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a58dc;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a58d4;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a58d0;
  uVar1 = uRam00000001802a58cc;
  uVar5 = uRam00000001802a58c8;
  *puVar3 = _DAT_1802a58c4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x37) = local_21;
  uStack_61._1_3_ = (undefined3)local_40;
  uStack_5d = (undefined5)((ulonglong)local_40 >> 0x18);
  local_58 = 0xb;
  local_50 = local_38;
  uVar5 = 1;
  FUN_18014b335(&DAT_1802a5900,&DAT_180289e77,0x17,0xc,&DAT_1802a590c);
  local_68 = (undefined7)DAT_1802a5900;
  uStack_61 = ram0x0001802a5907;
  FUN_1801063a0(param_1,&local_68,&local_88,2,CONCAT44(uVar5,local_28));
  *param_1 = &PTR_FUN_18021b2d0;
  local_48 = param_1 + 0xe;
  *(undefined1 *)(param_1 + 0xe) = local_21;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x14] = local_38;
  local_30 = param_1;
  uVar4 = FUN_1800ba260();
  local_c8 = &PTR_LAB_18021b310;
  local_c0 = local_30;
  local_b8 = FUN_1801499d0;
  local_90 = &local_c8;
  FUN_1800faca0(uVar4,local_30,&local_c8,local_28);
  uVar4 = FUN_1800ba260();
  local_c8 = &PTR_LAB_18021b340;
  local_c0 = local_30;
  local_b8 = FUN_180149cf0;
  local_90 = &local_c8;
  FUN_180130290(uVar4,local_30,&local_c8,local_28);
  return local_30;
}



void Unwind_1801499a0(undefined8 param_1,longlong param_2)

{
  FUN_18014a480(*(undefined8 *)(param_2 + 0xb0));
  FUN_180106c90(*(undefined8 *)(param_2 + 200));
  return;
}



void FUN_1801499d0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_68;
  int local_5c;
  ulonglong local_58;
  uint local_50;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0;
  local_70 = 0;
  local_68 = 6;
  local_49 = 1;
  local_58 = 0xf;
  if (param_2[8] != '\x01') {
    return;
  }
  if (param_2[9] != '\0') {
    return;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 - 0x3aU < 0xfffffff7) {
    return;
  }
  lVar4 = FUN_1800c32a0();
  if (*(char *)(lVar4 + 0x210) != '\0') {
    return;
  }
  lVar4 = FUN_1800f5870();
  if (lVar4 == 0) {
    return;
  }
  cVar2 = FUN_1801b3c30(lVar4,0x528);
  if (cVar2 == '\0') {
    return;
  }
  local_98 = (undefined8 ****)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = local_58;
  iVar3 = FUN_1800f5e40(&local_98);
  uVar7 = local_68;
  if (((int)local_50 <= iVar3) && (local_88 != local_70)) {
    if (local_68 <= local_88) {
      ppppuVar6 = &local_98;
      if (local_58 < local_80) {
        ppppuVar6 = (undefined8 ****)local_98;
      }
      lVar8 = local_88 + (longlong)ppppuVar6;
      local_5c = iVar3;
      FUN_18014b335(&DAT_1802a5924,&DAT_180289fb1,0x1c,7,&DAT_1802a592c);
      lVar5 = thunk_FUN_1801d8570(ppppuVar6,lVar8,&DAT_1802a5924,uVar7);
      iVar3 = local_5c;
      if ((lVar5 != lVar8) && (lVar5 - (longlong)ppppuVar6 != -1)) goto LAB_180149bf3;
    }
    *(undefined1 *)(param_1 + 0x70) = local_49;
    *(uint *)(param_1 + 0x74) = local_50;
    *(uint *)(param_1 + 0x78) = local_50;
    *(int *)(param_1 + 0x7c) = iVar3;
    *(int *)(param_1 + 0x80) = iVar1 + -0x31;
    *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(lVar4 + 0x488);
    FUN_18014a7d0(param_1 + 0x88,&local_98);
    *param_2 = local_49;
  }
LAB_180149bf3:
  if (local_58 < local_80) {
    uVar7 = local_80 + 1;
    ppppuVar6 = (undefined8 ****)local_98;
    if (0xfff < uVar7) {
      ppppuVar6 = (undefined8 ****)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppuVar6))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_70);
      }
      uVar7 = local_80 + 0x28;
    }
    thunk_FUN_1801f42e0(ppppuVar6,uVar7);
  }
  return;
}



void Unwind_180149cb0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void FUN_180149cf0(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_a9;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  longlong local_88;
  int local_7c;
  undefined1 *local_78;
  int *local_70;
  int *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_a0 = 0x8332b7992a0f9c77;
  local_a8 = 0x78da8f6fa46933e8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar7 = local_a0 ^ 0xd36b9d6bf9dba2c7;
              uVar5 = local_a0 ^ local_a8;
              local_a8 = local_a8 ^ 0xd36b9d6bf9dba2c7;
              local_a0 = uVar7;
              if ((longlong)uVar5 < -0x169e26d2f8a0b332) break;
              if ((longlong)uVar5 < -0x417c70971995061) {
                if ((longlong)uVar5 < -0x10666640066c8877) {
                  if (uVar5 == 0xe961d92d075f4cce) {
                    iVar2 = *local_68;
                    *local_68 = local_94 + iVar2;
                    *local_70 = local_94;
                    local_a0 = 0xbb4b5da4a4ae20ee;
                    if (local_94 < iVar2) {
                      local_a0 = 0x3324cca7cbb3fdbb;
                    }
                    local_a8 = 0x38b67b8f70b0c7e1;
                  }
                  else if (uVar5 == 0xeb1c38b16078d523) {
                    local_70 = (int *)(param_1 + 0x78);
                    local_7c = *(int *)(param_1 + 0x78);
                    local_a0 = 0x17eba1a75cb9e98a;
                    if (0 < local_7c) {
                      local_a0 = 0x52198dd7338ce8fb;
                    }
                    local_a8 = 0xf8723818a52a9e03;
                  }
                }
                else if (uVar5 == 0xef9999bff9937789) {
                  local_90 = FUN_1800f5870();
                  local_a0 = 0xaa25d99f117f223a;
                  if (local_90 == 0) {
                    local_a0 = 0x96b6290df56e38cd;
                  }
                  local_a8 = 0xb8d89bbbbcb496c;
                }
                else if (uVar5 == 0xf76fa422ce1ce9fe) {
                  local_a0 = 0xc2e546578657359b;
                  if (local_98 == 2) {
                    local_a0 = 0x5cb113067c321c1f;
                  }
                  local_a8 = 0xeef3a05a9a8ef94d;
                }
              }
              else if ((longlong)uVar5 < 0x235368d4059c2171) {
                if (uVar5 == 0xfbe838f68e66af9f) {
                  local_a9 = 0;
                  local_94 = 1;
                  local_88 = 0x207f10;
                  local_78 = (undefined1 *)(param_1 + 0x70);
                  local_a0 = 0x394c52fb2656eb7b;
                  if (*(char *)(param_1 + 0x70) != '\0') {
                    local_a0 = 0x196ae382eb11418c;
                  }
                  local_a8 = 0xf276db338b6994af;
                }
                else if (uVar5 == 0xb92b728bb033a5a) {
                  *local_78 = local_a9;
                  local_a0 = 0xa95f57c1aba348e0;
                  local_a8 = 0x2aa271ea7fbdafef;
                }
              }
              else if (uVar5 == 0x235368d4059c2171) {
                uVar3 = *(undefined4 *)(param_1 + 0x80);
                uVar1 = *(undefined2 *)(param_1 + 0x84);
                lVar6 = FUN_1801b2b70();
                (*(code *)(lVar6 + local_88))(local_90,uVar1,&local_60,uVar3);
                local_a0 = 0xcaf6a0793f0b550e;
                local_a8 = 0x23977954385419c0;
              }
              else if (uVar5 == 0x2c16e60d1cd9ccd6) {
                local_a0 = 0x292b4a9164d24ded;
                local_a8 = 0x22b9fdb9dfd177b7;
              }
              else if (uVar5 == 0x2e9cb8de90b10316) {
                local_58 = 0;
                local_50 = 0xc;
                local_48 = 0xf;
                FUN_18014b335(&DAT_1802a5910,&DAT_180289eb9,0x11,0xd,&DAT_1802a5920);
                local_58 = CONCAT44(local_58._4_4_,DAT_1802a5918);
                local_60 = DAT_1802a5910;
                local_68 = (int *)(param_1 + 0x74);
                local_98 = *(int *)(param_1 + 0x74);
                local_a0 = 0x9f9c7516e9037e06;
                local_a8 = 0xc5b190b5c2da055;
              }
            }
            if (-0x4dbd4ca319431aaf < (longlong)uVar5) break;
            if ((longlong)uVar5 < -0x62c45f49b15a8e5f) {
              if (uVar5 == 0x83fd262bd41ee70f) {
                local_a0 = 0x38801d248600f7f0;
                local_a8 = 0xf3ba94ec2b3f8824;
              }
              else if (uVar5 == 0x93c76c1db52ede53) {
                local_a0 = 0x73204ae7d42fe15f;
                if (local_98 < 1) {
                  local_a0 = 0x6ed7a4afc8c3fb3e;
                }
                local_a8 = 0xacb175f7d66a4c6b;
              }
            }
            else if (uVar5 == 0x9d3ba0b64ea571a1) {
              *local_78 = local_a9;
              local_a0 = 0xcf18d166d2b02504;
              local_a8 = 0x42258ae7f8f5ad0;
            }
            else if (uVar5 == 0xa1a85024aab46b56) {
              cVar4 = FUN_1801b3c30(local_90,0x528);
              local_a0 = 0x4f3a3b00e9d15401;
              if (cVar4 != '\0') {
                local_a0 = 0xfc9d236837c526b6;
              }
              local_a8 = 0xd2019bb6a77425a0;
            }
            else if (uVar5 == 0xaa6bb5cf96a676f8) {
              *local_70 = local_7c + -1;
              local_a0 = 0xaf71e398eaa38bc4;
              local_a8 = 0x644b6a50479cf410;
            }
          }
          if (-0x36a6a43362800500 < (longlong)uVar5) break;
          if (uVar5 == 0xb242b35ce6bce552) {
            uVar3 = *(undefined4 *)(param_1 + 0x7c);
            uVar1 = *(undefined2 *)(param_1 + 0x84);
            lVar6 = FUN_1801b2b70();
            (*(code *)(lVar6 + local_88))(local_90,uVar1,param_1 + 0x88,uVar3);
            local_a0 = 0x7ae35d8a81354045;
            local_a8 = 0x938284a7866a0c8b;
          }
          else if (uVar5 == 0xc266d1581ea9b755) {
            local_a0 = 0x501d492404ece00b;
            if (local_98 == 0) {
              local_a0 = 0xb552f4e5854ad7dc;
            }
            local_a8 = 0x7c0baf2918352cdd;
          }
        }
        if (uVar5 != 0xc9595bcc9d7ffb01) break;
        uVar3 = *(undefined4 *)(param_1 + 0x7c);
        uVar1 = *(undefined2 *)(param_1 + 0x84);
        lVar6 = FUN_1801b2b70();
        (*(code *)(lVar6 + local_88))(local_90,uVar1,param_1 + 0x88,uVar3);
        local_a0 = 0xaaca04a506c39657;
        local_a8 = 0x43abdd88019cda99;
      }
      if (uVar5 != 0xdf913f100245ad34) break;
      local_a0 = 0x8b7cf9ebfb74c6d7;
      if (local_98 < 2) {
        local_a0 = 0x5f40351d30f40e58;
      }
      local_a8 = 0x7c135dc935682f29;
    }
  } while (uVar5 != 0xcb3a89c8ad3f7fd4);
  return;
}



void FUN_18014a480(longlong param_1)

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

  local_90 = 0x628949001b5c6efd;
  local_98 = 0xc884c0efda843e78;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x4c4681add65336a2;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x4c4681add65336a2;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x33d4949eadf8eb0b) break;
          if (uVar1 == 0x33d4949eadf8eb0b) {
            local_60 = *local_78;
            local_68 = local_70 + 1;
            local_90 = 0x82d5f788b2b33e01;
            if (0xfff < local_68) {
              local_90 = 0xcb3e9225fe65b049;
            }
            local_98 = 0xddc2ad17fa43da90;
            local_50 = local_60;
          }
          else if (uVar1 == 0x5f175a9f48f0e491) {
            thunk_FUN_1801f42e0(local_60,local_68);
            local_90 = 0x8be70510a1126c54;
            local_98 = 0x18988bd6c61b4aec;
          }
          else if (uVar1 == 0x75e46066976bd577) {
            local_68 = local_70 + 0x28;
            local_60 = local_48;
            local_90 = 0x760637aae7ede528;
            local_98 = 0x29116d35af1d01b9;
          }
        }
        if ((longlong)uVar1 < 0x16fc3f3204266ad9) break;
        if (uVar1 == 0x16fc3f3204266ad9) {
          local_48 = *(longlong *)(local_50 + -8);
          local_90 = 0x95adc19300954f3;
          if ((local_50 - local_48) - 8U < 0x20) {
            local_90 = 0x64efdcfe9ed73d1d;
          }
          local_98 = 0x110bbc9809bce86a;
        }
        else if (uVar1 == 0x1851608139b5bc99) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_80);
        }
      }
      if (uVar1 != 0xaa0d89efc1d85085) break;
      local_80 = 0;
      local_88 = 0xf;
      local_78 = (longlong *)(param_1 + 0x18);
      local_58 = (undefined8 *)(param_1 + 0x30);
      local_70 = *(ulonglong *)(param_1 + 0x30);
      local_90 = 0x307daf18a4775d1;
      if (0xf < local_70) {
        local_90 = 0xa3acc0a940b6b862;
      }
      local_98 = 0x90785437ed4e5369;
    }
  } while (uVar1 != 0x937f8ec6670926b8);
  *(uintptr_t *)(param_1 + 0x28) = local_80;
  *local_58 = local_88;
  *(undefined1 *)local_78 = 0;
  return;
}



undefined8 * FUN_18014a7d0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_68 = 0x197498bf476e7e9a;
  local_70 = 0xc202eda8c0ceb46c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_68 ^ local_70;
          local_70 = local_70 ^ 0xfc4a43f8584d5a85;
          if (-0x24898ae8785f350b < (longlong)uVar1) break;
          if (uVar1 == 0x99a41fcc98deb1e4) {
            local_58 = param_2[2];
            local_50 = param_2;
            if (local_60 < (ulonglong)param_2[3]) {
              local_50 = (undefined8 *)*param_2;
            }
            local_48 = param_1[3];
            local_68 = 0x97078c00d45d79d6;
            if (local_48 < local_58) {
              local_68 = 0x3e59bc9e49c374d5;
            }
            local_70 = 0x29066eca13d98087;
          }
          else {
            local_68 = local_68 ^ 0xfc4a43f8584d5a85;
            if (uVar1 == 0xbe01e2cac784f951) {
              puVar2 = param_1;
              if (local_60 < local_48) {
                puVar2 = (undefined8 *)*param_1;
              }
              param_1[2] = local_58;
              FUN_1802079d0(puVar2,local_50,local_58);
              *(undefined1 *)((longlong)puVar2 + local_58) = 0;
              local_68 = 0xc1d2eeed411ef2dd;
              local_70 = 0xabfb4a85101b7710;
            }
          }
        }
        if (uVar1 != 0xdb76751787a0caf6) break;
        local_60 = 0xf;
        local_68 = 0xc84d4b1f8f71be81;
        if (param_1 == param_2) {
          local_68 = 0x3bc0f0bb46aa8aa8;
        }
        local_70 = 0x51e954d317af0f65;
      }
      if (uVar1 != 0x175fd2545a1af452) break;
      FUN_18007f460(param_1,local_58);
      local_68 = 0xdeccbc1776aec533;
      local_70 = 0xb4e5187f27ab40fe;
    }
    local_68 = local_68 ^ 0xfc4a43f8584d5a85;
  } while (uVar1 != 0x6a29a468510585cd);
  return param_1;
}



void FUN_18014aa10(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xd0c53bea5d04ac47;
  local_58 = 0x23c05fb2765adc71;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x5412b7aa74601660;
        if (uVar1 != 0xaa7216e66bc97119) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0xe149227b66a02806;
        local_58 = 0x846b9cfeb4fed3a;
      }
      if (uVar1 != 0xf30564582b5e7036) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0x62c96fdf49368910;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x21b4e28daf103d35;
      }
      local_58 = 0x8bc6f46bc4d94c2c;
    }
    local_50 = local_50 ^ 0x5412b7aa74601660;
  } while (uVar1 != 0xe90f9bb48defc53c);
  return;
}



void FUN_18014ab40(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xb133161e0f62a182;
  local_50 = 0x152a902349ed434f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xa296424fbc9d1ded;
        if (uVar1 != 0xa419863d468fe2cd) break;
        local_48 = 0x6e2f1e9f4d1c894b;
        if (param_2 != '\0') {
          local_48 = 0xf355b23d0084d2fc;
        }
        local_50 = 0xff204076ca50e9d9;
      }
      if (uVar1 != 0xc75f24bcad43b25) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xea6202661f45453c;
      local_50 = 0x7b6d5c8f980925ae;
    }
    local_48 = local_48 ^ 0xa296424fbc9d1ded;
  } while (uVar1 != 0x910f5ee9874c6092);
  return;
}



void FUN_18014ac90(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x8787379af0f17f32;
  local_58 = 0xa62d7a8e983db2c4;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xc3cb785536e80b29;
        if (uVar1 != 0x21aa4d1468cccdf6) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0xafc2367c7e1bac79;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0xb75ac40ceba1f0d7;
        }
        local_58 = 0x8cdbce909b1995b4;
      }
      if (uVar1 != 0x3b810a9c70b86563) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0xcaa8e9a7b65b3a2;
      local_58 = 0x2fb376769e678a6f;
    }
    local_50 = local_50 ^ 0xc3cb785536e80b29;
  } while (uVar1 != 0x2319f8ece50239cd);
  return;
}



void FUN_18014adc0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xbc9264fe26b7a201;
  local_50 = 0xbfee57081b4abf30;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xf9c65895c2a71cf0;
        if (uVar1 != 0x37c33f63dfd1d31) break;
        local_48 = 0x8fe364810b04610e;
        if (param_2 != '\0') {
          local_48 = 0x322ed777bec2fc52;
        }
        local_50 = 0x1d722609767a3733;
      }
      if (uVar1 != 0x2f5cf17ec8b8cb61) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0x199f3915dd93d8bd;
      local_50 = 0x8b0e7b9da0ed8e80;
    }
    local_48 = local_48 ^ 0xf9c65895c2a71cf0;
  } while (uVar1 != 0x929142887d7e563d);
  return;
}



longlong FUN_18014aef0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_98 = 0xc5ad5e53efa487e7;
  local_a0 = 0xd38166c359ad0989;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_98 ^ 0x8af24adcd5027b20;
            uVar1 = local_98 ^ local_a0;
            local_a0 = local_a0 ^ 0x8af24adcd5027b20;
            local_98 = uVar2;
            if ((longlong)uVar1 < 0x18de1645a698cd4a) break;
            if ((longlong)uVar1 < 0x60f28198888cff20) {
              if (uVar1 == 0x18de1645a698cd4a) {
                *(uintptr_t *)(param_1 + 0x98) = local_80;
                *local_58 = local_88;
                *(undefined1 *)local_78 = 0;
                FUN_180106c90(param_1);
                local_98 = 0x69af8dea4c10996;
                if ((param_2 & 1) == local_90) {
                  local_98 = 0xe221af8f51add7f3;
                }
                local_a0 = 0x9d17d7089574ed43;
              }
              else if (uVar1 == 0x3d7af4bfbf9f12c5) {
                local_60 = *local_78;
                local_68 = local_70 + 1;
                local_98 = 0x913c7864f534e940;
                if (0xfff < local_68) {
                  local_98 = 0x34afaf6378e0ea82;
                }
                local_a0 = 0xf1cef9fc7db81660;
                local_48 = local_60;
              }
            }
            else if (uVar1 == 0x60f28198888cff20) {
              thunk_FUN_1801f42e0(local_60,local_68);
              local_98 = 0xfcabcab391444e92;
              local_a0 = 0xe475dcf637dc83d8;
            }
            else if (uVar1 == 0x7f367887c4d93ab0) {
              return param_1;
            }
          }
          if (-0x2e0dc9a39552c775 < (longlong)uVar1) break;
          if (uVar1 == 0x9b8d2fd631b5e4d5) {
            thunk_FUN_1801f42e0(param_1,0xa8);
            local_98 = 0x5c91ae602ed1d768;
            local_a0 = 0x23a7d6e7ea08edd8;
          }
          else if (uVar1 == 0xc561569f0558fce2) {
            local_50 = *(longlong *)(local_48 + -8);
            local_98 = 0x9332f14ebdf79897;
            if ((local_48 - local_50) - 8U < 0x20) {
              local_98 = 0x97b0e685d9b42774;
            }
            local_a0 = 0x42c0c712d75aa01b;
          }
        }
        if (uVar1 != 0xd57021970eee876f) break;
        local_68 = local_70 + 0x28;
        local_60 = local_50;
        local_98 = 0x2ccb0087ade7ed4b;
        local_a0 = 0x4c39811f256b126b;
      }
      if (uVar1 != 0x162c3890b6098e6e) break;
      local_90 = 0;
      local_80 = 0;
      local_88 = 0xf;
      local_78 = (longlong *)(param_1 + 0x88);
      local_58 = (undefined8 *)(param_1 + 0xa0);
      local_70 = *(ulonglong *)(param_1 + 0xa0);
      local_98 = 0xbfaddb1315fa6544;
      if (0xf < local_70) {
        local_98 = 0x9a0939e90cfdbacb;
      }
      local_a0 = 0xa773cd56b362a80e;
    }
  } while (uVar1 != 0xd1f2365c6aad388c);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_90,local_80);
}



void FUN_18014b335(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x11f43a9d1eb56acd;
  local_68 = 0xc9f584a8ce83ed52;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x601cd3061594f1d;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x601cd3061594f1d;
          local_60 = uVar2;
          if (-0x501a6f48d1f7116e < (longlong)uVar1) break;
          if (uVar1 == 0x840bca5d44952aea) {
            *param_5 = 1;
            local_60 = 0xdd5d2ef7a59039c;
            local_68 = 0xa23042585451ed0f;
          }
          else if (uVar1 == 0x845fec89780eacb5) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0xa564997fd86be19f;
            if (local_54 == param_4) {
              local_60 = 0x461a2823fcd93df;
            }
            local_68 = 0x806a68df7b58b935;
          }
          else if (uVar1 == 0x97d77f2a9a5c1856) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x4e9127c544486ae1;
            local_68 = 0xcacecb4c3c46c654;
          }
        }
        if ((longlong)uVar1 < -0x27fe41ca2fc97861) break;
        if (uVar1 == 0x250ef1a0a33358aa) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0xf81871336dc02c5d;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xdff8c2472f1003b9;
          }
          local_68 = 0x6fcf0e19f79c340b;
        }
        else if (uVar1 == 0xd801be35d036879f) {
          local_60 = 0x35cf9b414d8c022a;
          if (*param_5 == 1) {
            local_60 = 0xbf24fa56c0b7b413;
          }
          local_68 = 0x10c16ae1eebf5a80;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0xb037cc5ed88c37b2) break;
      local_6a = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0x7e20afb32acb4ee1;
      local_68 = 0xfa7f433a52c5e254;
    }
  } while (uVar1 != 0xafe590b72e08ee93);
  return;
}



undefined8 * FUN_18014b5f0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_178;
  undefined8 *local_170;
  code *local_168;
  undefined ***local_140;
  undefined4 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_90;
  undefined3 uStack_8c;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 *local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_4c = 0x3d4ccccd;
  local_48 = 0x3f800000;
  local_31 = 0;
  local_44 = 0;
  local_70 = 0x30;
  local_68 = 0;
  local_60 = 0x2f;
  local_58 = 0xf;
  local_130 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x50);
  local_128 = 0x41;
  local_120 = 0x4f;
  local_138 = puVar3;
  FUN_18014c69b(&DAT_1802a5930,&DAT_18028a0af,0x11,0x42,&DAT_1802a5974);
  *(undefined1 *)(puVar3 + 0x10) = DAT_1802a5970;
  uVar4 = uRam00000001802a5968;
  *(undefined8 *)(puVar3 + 0xc) = _DAT_1802a5960;
  *(undefined8 *)(puVar3 + 0xe) = uVar4;
  uVar4 = uRam00000001802a5958;
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a5950;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a5948;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a5940;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a593c;
  uVar1 = uRam00000001802a5938;
  uVar5 = uRam00000001802a5934;
  *puVar3 = _DAT_1802a5930;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x41) = local_31;
  local_110 = local_68;
  local_108 = 10;
  local_100 = local_58;
  uVar5 = 1;
  FUN_18014c69b(&DAT_1802a5978,&DAT_18028a120,0x1d,0xb,&DAT_1802a5984);
  local_110 = CONCAT62(local_110._2_6_,DAT_1802a5980);
  local_118 = DAT_1802a5978;
  FUN_1801063a0(param_1,&local_118,&local_138,local_44,CONCAT44(uVar5,local_44));
  *param_1 = &PTR_FUN_18021b510;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_40 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_70);
  local_e8 = 0x2a;
  uStack_e0 = local_60;
  local_f8 = puVar3;
  FUN_18014c69b(&DAT_1802a5988,&DAT_18028a15d,0x1a,0x2b,&DAT_1802a59b4);
  uVar4 = uRam00000001802a59aa;
  *(ulonglong *)((longlong)puVar3 + 0x1a) = CONCAT26(uRam00000001802a59a8,_DAT_1802a59a2);
  *(undefined8 *)((longlong)puVar3 + 0x22) = uVar4;
  uVar4 = CONCAT62(_DAT_1802a59a2,uRam00000001802a59a0);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a5998;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a5994;
  uVar1 = uRam00000001802a5990;
  uVar5 = uRam00000001802a598c;
  *puVar3 = _DAT_1802a5988;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x2a) = local_31;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 6;
  local_c0 = local_58;
  uVar5 = 1;
  FUN_18014c69b(&DAT_1802a59b8,&DAT_18028a1bb,0x15,7,&DAT_1802a59c0);
  local_d8 = CONCAT44(CONCAT22(local_d8._6_2_,DAT_1802a59bc),DAT_1802a59b8);
  uVar4 = FUN_180108270(local_40,&local_d8,&local_f8,0x3ecccccd,CONCAT44(uVar5,local_4c),local_48,local_4c);
  local_40[0xe] = uVar4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_70);
  local_a8 = local_60;
  uStack_a0 = local_60;
  local_b8 = puVar3;
  FUN_18014c69b(&DAT_1802a59c4,&DAT_18028a1f1,0x11,0x30,&DAT_1802a59f4);
  uVar4 = uRam00000001802a59eb;
  *(ulonglong *)((longlong)puVar3 + 0x1f) = CONCAT71(uRam00000001802a59e4,DAT_1802a59e3);
  *(undefined8 *)((longlong)puVar3 + 0x27) = uVar4;
  uVar4 = CONCAT17(DAT_1802a59e3,uRam00000001802a59dc);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a59d4;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a59d0;
  uVar1 = uRam00000001802a59cc;
  uVar5 = uRam00000001802a59c8;
  *puVar3 = _DAT_1802a59c4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x2f) = local_31;
  local_88 = local_68;
  local_80 = 7;
  local_78 = local_58;
  uVar5 = 1;
  FUN_18014c69b(&DAT_1802a59f8,&DAT_18028a242,0x10,8,&DAT_1802a5a00);
  uStack_8c = uRam00000001802a59fc;
  local_90 = DAT_1802a59f8;
  local_89 = local_31;
  uVar4 = FUN_180108270(local_40,&local_90,&local_b8,local_48,CONCAT44(uVar5,0x3dcccccd),local_48,local_4c);
  local_40[0xf] = uVar4;
  uVar4 = FUN_1800ba260();
  local_178 = &PTR_LAB_18021b550;
  local_170 = local_40;
  local_168 = FUN_18014bb80;
  local_140 = &local_178;
  FUN_180121610(uVar4,local_40,local_140,local_44);
  return local_40;
}



void Unwind_18014bb40(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x178));
  return;
}



void FUN_18014bb80(longlong param_1)

{
  longlong lVar1;

  lVar1 = FUN_180175cb0();
  *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90);
  return;
}



undefined8 * FUN_18014bbb0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_b1;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  char *local_60;

  local_a8 = 0x805bb190ac5f71bd;
  local_b0 = 0x609d005e39de213f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_a8 ^ 0x88aa73f60214716;
            uVar1 = local_a8 ^ local_b0;
            local_b0 = local_b0 ^ 0x88aa73f60214716;
            local_a8 = uVar4;
            if ((longlong)uVar1 < 0xf905ab697af5178) break;
            if ((longlong)uVar1 < 0x4b5ce0cb696b28a1) {
              if ((longlong)uVar1 < 0x1ddd81a7687eaadf) {
                if (uVar1 == 0x1b20e64d58e5f6df) {
                  *param_2 = 0;
                  param_2[1] = 0;
                  param_2[2] = 0;
                  param_2[3] = local_a0;
                  local_a8 = 0xa9b154989ebdf17e;
                  local_b0 = 0xa6210e2e0912a006;
                }
                else if (uVar1 == 0xf905ab697af5178) {
                  return param_2;
                }
              }
              else if (uVar1 == 0x1ddd81a7687eaadf) {
                *param_2 = 0;
                param_2[1] = 0;
                param_2[2] = 0;
                param_2[3] = local_a0;
                local_a8 = 0x3cc0db787f6f1e7e;
                local_b0 = 0x335081cee8c04f06;
              }
              else if (uVar1 == 0x2c967fdff60cb2bc) {
                param_2[2] = local_90;
                param_2[3] = local_80;
                FUN_1802079d0(local_78,local_60,local_90);
                *(undefined1 *)((longlong)local_78 + local_90) = local_b1;
                local_a8 = 0x5c5e89707802a080;
                local_b0 = 0x53ced3c6efadf1f8;
              }
            }
            else if (uVar1 == 0x4b5ce0cb696b28a1) {
              uVar1 = local_90 | local_a0;
              local_98 = 0x16;
              if (0x16 < uVar1) {
                local_98 = uVar1;
              }
              local_a8 = 0x76ceb3d3de2db458;
              if (0xffe < uVar1) {
                local_a8 = 0xb19e0daa97fd1015;
              }
              local_b0 = 0x331676205909190;
            }
            else if (uVar1 == 0x66e03e0dabfc1839) {
              lVar3 = FUN_180175cb0();
              local_a8 = 0xf503d18200b4af9;
              if ((*(byte *)(lVar3 + 1) & 1) != 0) {
                local_a8 = 0xa6438cc311129be6;
              }
              local_b0 = 0x128dbcbf4875e026;
            }
            else if (uVar1 == 0x75ffd4b1dbbd25c8) {
              local_70 = (undefined8 *)FUN_1801d61c8(local_98 + 1);
              local_a8 = 0x3cc89eedf80efc0c;
              local_b0 = 0xd8b7b2c21e8005f6;
            }
          }
          if ((longlong)uVar1 < -0x4b31cf83a6988440) break;
          if ((longlong)uVar1 < -0x1b80d3d019710606) {
            if (uVar1 == 0xb4ce307c59677bc0) {
              lVar3 = FUN_180175cb0();
              local_60 = *(char **)(lVar3 + 0x10);
              *param_2 = 0;
              param_2[1] = 0;
              local_90 = strlen(local_60);
              local_a8 = 0xd36d23d85e7ec406;
              if ((longlong)local_90 < local_88) {
                local_a8 = 0xc8bf03a9f61c0f4b;
              }
              local_b0 = 0x61fd045764496775;
            }
            else if (uVar1 == 0xe0c6b1ce95815082) {
              local_b1 = 0;
              local_88 = 0;
              local_a0 = 0xf;
              local_a8 = 0x1bd4d023d1a0a3c1;
              if (*(char *)(param_1 + 0x4c) != '\0') {
                local_a8 = 0x533a1d8c8a3136e;
              }
              local_b0 = 0xf4366e8945551e;
            }
          }
          else if (uVar1 == 0xe47f2c2fe68ef9fa) {
            local_78 = local_70;
            *param_2 = local_70;
            local_a8 = 0x4e62afe986dc62fb;
            local_b0 = 0x62f4d03670d0d047;
            local_80 = local_98;
          }
          else if (uVar1 == 0x5c797b641e64670) {
            uVar2 = FUN_180177800();
            lVar3 = FUN_180178490(uVar2);
            local_a8 = 0xcf04a62197f5f54f;
            if (lVar3 == local_88) {
              local_a8 = 0x25fb2a98fca6e0a8;
            }
            local_b0 = 0xa9e4982c3c09ed76;
          }
        }
        if ((longlong)uVar1 < -0x4d6fd870c5c85c8d) break;
        if (uVar1 == 0xb290278f3a37a373) {
          local_a8 = 0x190bcf095a628eb7;
          if (local_90 < 0x10) {
            local_a8 = 0x7ec1501dc50514aa;
          }
          local_b0 = 0x52572fc23309a616;
          local_80 = local_a0;
          local_78 = param_2;
        }
        else if (uVar1 == 0xb2af6ac8926d8185) {
          lVar3 = FUN_1801d61c8(local_98 + 0x28);
          local_70 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
          local_70[-1] = lVar3;
          local_a8 = 0xb521d4a7a79832d3;
          local_b0 = 0x515ef8884116cb29;
        }
      }
      if (uVar1 != 0x8c1fb2b4c0af0dde) break;
      param_2[2] = local_a0;
      param_2[3] = local_a0;
      FUN_18014c69b(&DAT_1802a5a04,&DAT_18028a278,0x1a,0x10,&DAT_1802a5a14);
      *(ulonglong *)((longlong)param_2 + 7) = CONCAT71(uRam00000001802a5a0c,DAT_1802a5a04._7_1_);
      *param_2 = CONCAT17(DAT_1802a5a04._7_1_,(undefined7)DAT_1802a5a04);
      *(undefined1 *)((longlong)param_2 + 0xf) = local_b1;
      local_a8 = 0xa7bbd9cb38c9ab70;
      local_b0 = 0xa82b837daf66fa08;
    }
  } while (uVar1 != 0xa94207fe9255683e);
  FUN_180002ac0();
}



void FUN_18014c270(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;

  lVar1 = FUN_180175cb0();
  *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90);
  uVar2 = FUN_180175cb0();
  FUN_180175cc0(uVar2,1);
  return;
}



void FUN_18014c2b0(void)

{
  undefined8 uVar1;

  uVar1 = FUN_180175cb0();
  FUN_180175cc0(uVar1,0);
  return;
}



void FUN_18014c2f0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xe87be5aa3d7bc95a;
  local_58 = 0x7533c816770d3364;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x259d42e0cad956b1;
        if (uVar1 != 0x96f7f53cafc8e893) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0xca4090bd8e620f7;
        local_58 = 0xfd60c28959b83cd9;
      }
      if (uVar1 != 0x9d482dbc4a76fa3e) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0xf4a03501be49fc97;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x93930bbf90df082a;
      }
      local_58 = 0x564fe833f17e0b9;
    }
    local_50 = local_50 ^ 0x259d42e0cad956b1;
  } while (uVar1 != 0xf1c4cb82815e1c2e);
  return;
}



void FUN_18014c420(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x667253d6388112c5;
  local_50 = 0xfa71b993c09bd447;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xcc576a854377ee9d;
        if (uVar1 != 0x9c03ea45f81ac682) break;
        local_48 = 0x475e50a8c03c66ae;
        if (param_2 != '\0') {
          local_48 = 0xc8a6f35cf7e4edfb;
        }
        local_50 = 0xcbcc307e0adbb23d;
      }
      if (uVar1 != 0x36ac322fd3f5fc6) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0x7ff5f3c57c02db0e;
      local_50 = 0xf3679313b6e50f9d;
    }
    local_48 = local_48 ^ 0xcc576a854377ee9d;
  } while (uVar1 != 0x8c9260d6cae7d493);
  return;
}



undefined8 FUN_18014c550(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x117040c588753994;
  local_50 = 0x55c55232c7a21b67;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xf729d1a9646b9d45;
        if (uVar1 != 0x44b512f74fd722f3) break;
        FUN_180106c90(param_1);
        local_48 = 0x544fa367fcd81009;
        if ((param_2 & 1) == 0) {
          local_48 = 0x9220697af1921e94;
        }
        local_50 = 0x1bd7eefa51d7857b;
      }
      if (uVar1 != 0x4f984d9dad0f9572) break;
      thunk_FUN_1801f42e0(param_1,0x80);
      local_48 = 0x3afe973ee2f61054;
      local_50 = 0xb30910be42b38bbb;
    }
    local_48 = local_48 ^ 0xf729d1a9646b9d45;
  } while (uVar1 != 0x89f78780a0459bef);
  return param_1;
}



void FUN_18014c69b(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x2a084570a5e4bee2;
  local_68 = 0x29e2fb1dbe42e741;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x9fb0aeadf2d47c3d;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x9fb0aeadf2d47c3d;
          local_60 = uVar2;
          if (-0x68b35a0accb90252 < (longlong)uVar1) break;
          if (uVar1 == 0x82b054750fe6b64f) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xcfe206e41aa7bf04;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x6d7a6d59772c28dd;
            }
            local_68 = 0x48d0d543b3cb0ecd;
          }
          else if (uVar1 == 0x858ffe81a9fa3918) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0x39252119fe95574c;
            if (local_54 == param_4) {
              local_60 = 0x2cd9d099c2351cac;
            }
            local_68 = 0xbb95756cf173e103;
          }
          else if (uVar1 == 0x8732d3a7a96cb1c9) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x59bbd17325bb9ac6;
            local_68 = 0xdc342ff28c41a3de;
          }
        }
        if (0x144d53e85d7c6f76 < (longlong)uVar1) break;
        if (uVar1 == 0x974ca5f53346fdaf) {
          *param_5 = 1;
          local_60 = 0xfab4b52a6d09880b;
          local_68 = 0xeef9e6c23075e77c;
        }
        else if (uVar1 == 0x3eabe6d1ba659a3) {
          local_60 = 0x454df0ca88b2fa82;
          if (*param_5 == 1) {
            local_60 = 0xd3b0f757da2823ba;
          }
          local_68 = 0xc7fda4bf87544ccd;
          local_54 = 0;
          local_6a = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x25aab81ac4e72610) break;
      local_6b = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0x4a792e1065ebe92c;
      local_68 = 0xcff6d091cc11d034;
    }
  } while (uVar1 != 0x144d53e85d7c6f77);
  return;
}



undefined8 * FUN_18014c950(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  longlong lVar9;
  undefined1 local_118 [96];
  undefined4 *local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  longlong local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_58 = 0x29;
  local_50 = 0xf;
  local_48 = 0x30;
  local_40 = 1;
  local_30 = 0;
  local_38 = 0x2f;
  local_70 = 0;
  local_78 = (undefined8 **)FUN_1801d61c8(0x30);
  local_68 = 0x28;
  local_60 = local_38;
  *local_78 = (undefined8 **)0x0;
  local_78[1] = (undefined8 **)0x0;
  local_78[2] = (undefined8 **)0x0;
  local_78[3] = (undefined8 **)0x0;
  *(undefined8 *)((longlong)local_78 + 0x19) = 0;
  *(undefined8 *)((longlong)local_78 + 0x21) = 0;
  lVar6 = local_40;
  lVar9 = local_30;
  do {
    lVar7 = lVar6;
    pppuVar8 = &local_78;
    if (local_50 < local_60) {
      pppuVar8 = (undefined8 ***)local_78;
    }
    *(byte *)((longlong)pppuVar8 + lVar9) =
         (char)lVar9 * '\x1f' + 0x5dU ^ (byte)(0x1c7d95c4 >> ((byte)((int)lVar9 << 3) & 0x18)) ^ (&DAT_18021b690)[lVar9]
    ;
    lVar6 = local_40 + lVar7;
    lVar9 = lVar7;
  } while (lVar6 != local_58);
  FUN_1801b63c0(local_118,&local_78,6);
  local_b0 = local_30;
  puVar5 = (undefined4 *)FUN_1801d61c8(local_48);
  local_a8 = local_58;
  local_a0 = local_38;
  local_b8 = puVar5;
  FUN_18014cdd0(&DAT_1802a5a18,&DAT_18028a331,0x19,0x2a,&DAT_1802a5a44);
  uVar1 = uRam00000001802a5a39;
  *(ulonglong *)((longlong)puVar5 + 0x19) = CONCAT17(uRam00000001802a5a38,_DAT_1802a5a31);
  *(undefined8 *)((longlong)puVar5 + 0x21) = uVar1;
  uVar1 = CONCAT71(_DAT_1802a5a31,uRam00000001802a5a30);
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a5a28;
  *(undefined8 *)(puVar5 + 6) = uVar1;
  uVar4 = uRam00000001802a5a24;
  uVar3 = uRam00000001802a5a20;
  uVar2 = uRam00000001802a5a1c;
  *puVar5 = _DAT_1802a5a18;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)((longlong)puVar5 + 0x29) = 0;
  local_90 = local_30;
  local_88 = 10;
  local_80 = local_50;
  FUN_18014cdd0(&DAT_1802a5a48,&DAT_18028a38e,0x13,0xb,&DAT_1802a5a54);
  local_90 = CONCAT62(local_90._2_6_,DAT_1802a5a50);
  local_98 = DAT_1802a5a48;
  FUN_18016c8e0(param_1,&local_98,&local_b8,2,local_118);
  *param_1 = &PTR_FUN_18021b650;
  return param_1;
}



void Unwind_18014cc40(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(param_2 + 0x30);
  return;
}



undefined8 * FUN_18014cc70(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x8bc1c549c4d653cf;
  local_50 = 0xcfaab082374efb0d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc2ddad334287fb1e;
        if (uVar1 != 0x9566e2a4f741e5e8) break;
        thunk_FUN_1801f42e0(param_1,0xd0);
        local_48 = 0x8caf4ad2bfffe5dd;
        local_50 = 0xbaeffc13ff13c574;
      }
      if (uVar1 != 0x446b75cbf398a8c2) break;
      *param_1 = &PTR_FUN_180217de0;
      FUN_18011a170(param_1 + 0xe);
      FUN_180106c90(param_1);
      local_48 = 0x3a0e5f039d423ce2;
      if ((param_2 & 1) == 0) {
        local_48 = 0x99280b662aeff9a3;
      }
      local_50 = 0xaf68bda76a03d90a;
    }
    local_48 = local_48 ^ 0xc2ddad334287fb1e;
  } while (uVar1 != 0x3640b6c140ec20a9);
  return param_1;
}



void FUN_18014cdd0(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xa2356a253cac3d79;
  local_68 = 0x2f03fcfebc0802c6;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x816d01c89f70884c;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x816d01c89f70884c;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0x9dbcbb6219c13f5) break;
          if (uVar1 == 0xf6243449de63ec0b) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0x81ac726d381cda8c;
            if (local_54 == param_4) {
              local_60 = 0x5f18c7939db24c44;
            }
            local_68 = 0x72887a414a3a8daf;
          }
          else if (uVar1 == 0xbfd1f9b9bc3a890) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0x1f83977ab7e0095a;
            local_68 = 0xe9a7a3336983e551;
          }
          else if (uVar1 == 0x2d90bdd2d788c1eb) {
            *param_5 = 1;
            local_60 = 0x77450b73bb179a25;
            local_68 = 0xb4731aa18e9b9007;
          }
        }
        if ((longlong)uVar1 < -0x2c2b18d82341b159) break;
        if (uVar1 == 0xd3d4e727dcbe4ea7) {
          local_6a = -(local_6c - local_69 ^ local_6d);
          local_60 = 0x433eeb632e702808;
          local_68 = 0xb51adf2af013c403;
        }
        else if (uVar1 == 0xf324082c72265723) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x4e7b11b7e26e19d5;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0x9652e90ba513ffe2;
          }
          local_68 = 0x9daff6903ed05772;
        }
      }
      if (uVar1 != 0x8d3696db80a43fbf) break;
      local_60 = 0x2dfe3c83d2cf77ae;
      if (*param_5 == 1) {
        local_60 = 0x1dec257d95652aaf;
      }
      local_68 = 0xdeda34afa0e9208d;
      local_54 = 0;
      local_6b = 0;
      local_48 = (int)param_3 + param_2;
    }
  } while (uVar1 != 0xc33611d2358c0a22);
  return;
}



undefined8 FUN_18014d0a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar4 = FUN_1801b2b70();
  local_30 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x13;
  local_20 = 0x1f;
  local_38 = puVar5;
  FUN_18014d6bc(&DAT_1802a5ab0,&DAT_18028a4e7,0x1a,0x14,&DAT_1802a5ac4);
  *(uint *)((longlong)puVar5 + 0xf) = CONCAT31(DAT_1802a5abf._1_3_,(undefined1)DAT_1802a5abf);
  uVar3 = uRam00000001802a5abc;
  uVar2 = uRam00000001802a5ab8;
  uVar1 = uRam00000001802a5ab4;
  *puVar5 = _DAT_1802a5ab0;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x13) = 0;
  FUN_1800ef070(&PTR_PTR_18028a3f0,&local_38,lVar4 + 0x5b4ad0,FUN_18014d360);
  return 1;
}



undefined8 * FUN_18014d1a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;

  local_28 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x40);
  local_20 = 0x3f;
  local_18 = 0x3f;
  local_30 = puVar5;
  FUN_18014d6bc(&DAT_1802a5a6c,&DAT_18028a482,0x12,0x40,&DAT_1802a5aac);
  uVar1 = uRam00000001802a5aa3;
  *(ulonglong *)((longlong)puVar5 + 0x2f) = CONCAT71(uRam00000001802a5a9c,DAT_1802a5a9b);
  *(undefined8 *)((longlong)puVar5 + 0x37) = uVar1;
  uVar1 = CONCAT17(DAT_1802a5a9b,uRam00000001802a5a94);
  *(undefined8 *)(puVar5 + 8) = _DAT_1802a5a8c;
  *(undefined8 *)(puVar5 + 10) = uVar1;
  uVar1 = uRam00000001802a5a84;
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a5a7c;
  *(undefined8 *)(puVar5 + 6) = uVar1;
  uVar4 = uRam00000001802a5a78;
  uVar3 = uRam00000001802a5a74;
  uVar2 = uRam00000001802a5a70;
  *puVar5 = _DAT_1802a5a6c;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)((longlong)puVar5 + 0x3f) = 0;
  local_48 = 0;
  local_40 = 0xc;
  local_38 = 0xf;
  puVar6 = &DAT_1802a5a68;
  FUN_18014d6bc(&DAT_1802a5a5a,&DAT_18028a442,0x18,0xd,&DAT_1802a5a68);
  local_48 = CONCAT44(local_48._4_4_,DAT_1802a5a62);
  local_50 = DAT_1802a5a5a;
  FUN_1801063a0(param_1,&local_50,&local_30,0,(ulonglong)puVar6 & 0xffffffff00000000);
  *param_1 = &PTR_FUN_18021b750;
  return param_1;
}



void FUN_18014d360(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x44e0dc363ec33344;
  local_68 = 0xe533e5271b093416;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xfe98f2772e73ff1d;
        if ((longlong)uVar2 < -0x17ecaa0ee9fc9ac2) break;
        if (uVar2 == 0xe81355f11603653e) {
          *(undefined8 *)(param_1 + 0x1278) = 0x3f8000003f800000;
          local_60 = 0x16dda3f326c51805;
          local_68 = 0xdc63f90631e091d0;
        }
        else {
          local_60 = local_60 ^ 0xfe98f2772e73ff1d;
          if (uVar2 == 0x4f07d8a7b2725807) {
            cVar1 = FUN_1801b3c30(param_1,0x1280);
            local_60 = 0xa63f20ed862f4dd3;
            if (cVar1 != '\0') {
              local_60 = 0x84922fe98709a138;
            }
            local_68 = 0x6c817a18910ac406;
          }
        }
      }
      if (uVar2 != 0xa1d3391125ca0752) break;
      (*DAT_18028a420)(param_1);
      local_60 = 0x8817192f5e3bd3c0;
      if ((DAT_1802a5a59 & 1) != 0) {
        local_60 = 0xdae9b7dfb6c0212;
      }
      if (param_1 == 0) {
        local_60 = 0x8817192f5e3bd3c0;
      }
      local_68 = 0x42a943da491e5a15;
    }
    local_60 = local_60 ^ 0xfe98f2772e73ff1d;
  } while (uVar2 != 0xcabe5af5172589d5);
  return;
}



undefined8 FUN_18014d510(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x6d4b38d0c0ce0bda;
  local_50 = 0x398b8ac16031f252;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc211592ebd42e561;
        if (uVar1 != 0x1d34749d6384522) break;
        thunk_FUN_1801f42e0(param_1,0x70);
        local_48 = 0xdcadb11e48b42408;
        local_50 = 0x9272eb9bf53d14ca;
      }
      if (uVar1 != 0x54c0b211a0fff988) break;
      FUN_180106c90(param_1);
      local_48 = 0xeb0648e2df31ee6c;
      if ((param_2 & 1) == 0) {
        local_48 = 0xa40a552eb4809b8c;
      }
      local_50 = 0xead50fab0909ab4e;
    }
    local_48 = local_48 ^ 0xc211592ebd42e561;
  } while (uVar1 != 0x4edf5a85bd8930c2);
  return param_1;
}



void FUN_18014d660(void)

{
  atexit((_func_5014 *)&LAB_18014d090);
  FUN_18014d6bc(&DAT_1802a5a5a,&DAT_18028a442,0x18,0xd,&DAT_1802a5a68);
  FUN_1800f0070(&DAT_1802a5a58,&DAT_1802a5a5a,FUN_18014d0a0);
  return;
}



void FUN_18014d6bc(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x6f41a8f28cb7460;
  local_68 = 0xec1dbe9d71ae652d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x5b4a92ac59a1b9b2;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x5b4a92ac59a1b9b2;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x4187900ad97c3046) break;
          if (uVar1 == 0x4187900ad97c3046) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x5f825cbc1b42f1fb;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x1e6e23ad8f7b74fa;
            }
            local_68 = 0x7875973551ad0c56;
          }
          else if (uVar1 == 0x5b17b02357df5d07) {
            *param_5 = 1;
            local_60 = 0xe51fb773605780e5;
            local_68 = 0xc1242e8d4b5d4ac0;
          }
          else if (uVar1 == 0x661bb498ded678ac) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xab76d18b2282104a;
            local_68 = 0x6db312bb15c0684f;
          }
        }
        if (0x243b99fe2b0aca24 < (longlong)uVar1) break;
        if (uVar1 == 0xc6c5c33037427805) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0xcb2e2f3a0af9e776;
          if (local_54 == param_4) {
            local_60 = 0xd1be0f13845a8a37;
          }
          local_68 = 0x8aa9bf30d385d730;
        }
        else if (uVar1 == 0xeae9a4125965114d) {
          local_60 = 0xc736c7d82f11e93;
          if (*param_5 == 1) {
            local_60 = 0x69cf65897087e4f0;
          }
          local_68 = 0x4df4fc775b8d2ed5;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x27f7cb894aeffdad) break;
      local_6a = -(local_6c - local_69 ^ local_6d);
      local_60 = 0x4d48da577d3dd0c4;
      local_68 = 0x8b8d19674a7fa8c1;
    }
  } while (uVar1 != 0x243b99fe2b0aca25);
  return;
}



undefined8 * FUN_18014d970(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  longlong lVar9;
  undefined1 local_110 [96];
  undefined4 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_50 = 1;
  local_48 = 0xf;
  local_40 = 9;
  local_38 = 0;
  local_68 = 0;
  local_70 = (undefined8 **)FUN_1801d61c8(0x40);
  local_60 = 0x31;
  local_58 = 0x3f;
  *local_70 = (undefined8 **)0x0;
  local_70[1] = (undefined8 **)0x0;
  local_70[2] = (undefined8 **)0x0;
  local_70[3] = (undefined8 **)0x0;
  local_70[4] = (undefined8 **)0x0;
  local_70[5] = (undefined8 **)0x0;
  *(undefined2 *)(local_70 + 6) = 0;
  lVar6 = local_50;
  lVar9 = local_38;
  do {
    lVar7 = lVar6;
    pppuVar8 = &local_70;
    if (local_48 < local_58) {
      pppuVar8 = (undefined8 ***)local_70;
    }
    *(byte *)((longlong)pppuVar8 + lVar9) =
         (char)lVar9 * '\x1f' + 0x5dU ^ (byte)(0xf449c214 >> ((byte)((int)lVar9 << 3) & 0x18)) ^ (&DAT_18021b850)[lVar9]
    ;
    lVar6 = local_50 + lVar7;
    lVar9 = lVar7;
  } while (lVar6 != 0x32);
  FUN_1801b63c0(local_110,&local_70,local_40);
  local_a8 = local_38;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x30);
  local_a0 = 0x2d;
  local_98 = 0x2f;
  local_b0 = puVar5;
  FUN_18014ddf0(&DAT_1802a5ac8,&DAT_18028b4e6,0x18,0x2e,&DAT_1802a5af8);
  uVar1 = uRam00000001802a5aed;
  *(ulonglong *)((longlong)puVar5 + 0x1d) = CONCAT53(uRam00000001802a5ae8,_DAT_1802a5ae5);
  *(undefined8 *)((longlong)puVar5 + 0x25) = uVar1;
  uVar1 = CONCAT35(_DAT_1802a5ae5,uRam00000001802a5ae0);
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a5ad8;
  *(undefined8 *)(puVar5 + 6) = uVar1;
  uVar4 = uRam00000001802a5ad4;
  uVar3 = uRam00000001802a5ad0;
  uVar2 = uRam00000001802a5acc;
  *puVar5 = _DAT_1802a5ac8;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)((longlong)puVar5 + 0x2d) = 0;
  local_88 = local_38;
  local_80 = local_40;
  local_78 = local_48;
  FUN_18014ddf0(&DAT_1802a5afc,&DAT_18028b549,0x1c,10,&DAT_1802a5b08);
  local_88 = CONCAT71(local_88._1_7_,DAT_1802a5b04);
  local_90 = DAT_1802a5afc;
  FUN_18016c8e0(param_1,&local_90,&local_b0,0,local_110);
  *param_1 = &PTR_FUN_18021b810;
  return param_1;
}



void Unwind_18014dc60(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(param_2 + 0x28);
  return;
}



undefined8 * FUN_18014dc90(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x69f7508102e535e3;
  local_50 = 0x2233f9e222d1c693;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x4e4bac42af28e88b;
        if (uVar1 != 0x1b5fd5d36800c4d0) break;
        thunk_FUN_1801f42e0(param_1,0xd0);
        local_48 = 0x90d0b8644b0ed97;
        local_50 = 0xba21ca8bab3c5e58;
      }
      if (uVar1 != 0x4bc4a9632034f370) break;
      *param_1 = &PTR_FUN_180217de0;
      FUN_18011a170(param_1 + 0xe);
      FUN_180106c90(param_1);
      local_48 = 0xae0a44383cbefc8e;
      if ((param_2 & 1) == 0) {
        local_48 = 0x67950e6bb328b91;
      }
      local_50 = 0xb55591eb54be385e;
    }
    local_48 = local_48 ^ 0x4e4bac42af28e88b;
  } while (uVar1 != 0xb32cc10def8cb3cf);
  return param_1;
}



void FUN_18014ddf0(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xa05c7a119bf49e7f;
  local_68 = 0xbd1446f12efa996e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x77ebd85e8c279ff4;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x77ebd85e8c279ff4;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x1d483ce0b50e0711) break;
          if (uVar1 == 0x703653f490e21198) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x6cddd813f14754e4;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x29397fbb67d74250;
            }
            local_68 = 0x2fb69fe83ebda625;
          }
          else if (uVar1 == 0x436b47fbcffaf2c1) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xccf6572936ea8fad;
            local_68 = 0x3787da682a9ce3be;
          }
          else if (uVar1 == 0x1d483ce0b50e0711) {
            local_60 = 0xa707bd76efec37b3;
            if (*param_5 == 1) {
              local_60 = 0x176c78f684d99e07;
            }
            local_68 = 0xd731ee827f0e262b;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0x48e72bee38993ed) break;
        if (uVar1 == 0xfb718d411c766c13) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0x9d70eab37863e807;
          if (local_54 == param_4) {
            local_60 = 0x251d17dcdcfc5b74;
          }
          local_68 = 0xed46b947e881f99f;
        }
        else if (uVar1 == 0x68fe053596ae475) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xab5ef89540616f50;
          local_68 = 0x502f75d45c170343;
        }
      }
      if (uVar1 != 0xc85bae9b347da2eb) break;
      *param_5 = 1;
      local_60 = 0x63fb46e8029a43ed;
      local_68 = 0xa3a6d09cf94dfbc1;
    }
  } while (uVar1 != 0xc05d9674fbd7b82c);
  return;
}



void FUN_18014e0b0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_f8;
  ulonglong local_f0;
  uint local_e4;
  ulonglong local_e0;
  uintptr_t local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_f0 = 0x89f56edf3de4f795;
  local_f8 = 0x7df882e92361d91c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_f0 ^ 0x92bcb8f6f8c3baf2;
            uVar1 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0x92bcb8f6f8c3baf2;
            local_f0 = uVar2;
            if (-0x7885bee6d70d4bb < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x2fd3cb6a90d88e26) {
              if (uVar1 == 0xa86a0683cd16006c) {
                local_a8 = local_80 + local_c0;
                local_f0 = 0x9cffa62d31b30b42;
                local_f8 = 0xd6b57b3450118dc5;
                local_a0 = local_70;
              }
              else if (uVar1 == 0xbaf6b1fe6d80746e) {
                local_68 = local_b0;
                local_98 = DAT_1802a5b20 - local_b0;
                local_f0 = 0x66c77290cd50fe4e;
                if (local_c8 < local_98) {
                  local_f0 = 0x505fc5becacbc1d6;
                }
                local_f8 = 0x4a23aebaaf4ba5db;
                local_90 = local_b0;
                local_60 = local_98;
              }
            }
            else if (uVar1 == 0xd02c34956f2771da) {
              local_70 = *(longlong *)(local_b8 + -8);
              local_f0 = 0xf45e8af4ada9ec4d;
              if ((ulonglong)((local_88 + local_d0) - local_70) < local_e0) {
                local_f0 = 0x842e2d58f261a39;
              }
              local_f8 = 0xa028e45642301a55;
            }
            else if (uVar1 == 0xd703a4da15017f53) {
              local_98 = local_60 + local_c0;
              local_f0 = 0xf864577bbd7e4727;
              local_f8 = 0xd4808b51df651cb2;
              local_90 = local_78;
            }
            else if (uVar1 == 0xf40dec361e852e89) {
              local_c0 = 0x27;
              local_c8 = 0xfff;
              local_d0 = -8;
              local_d8 = 0;
              local_e0 = 0x20;
              local_e4 = 0;
              local_b8 = DAT_1802a5b28;
              local_f0 = 0x6e27dd534d8ca6b4;
              if (DAT_1802a5b28 == 0) {
                local_f0 = 0x9041cb57297892e3;
              }
              local_f8 = 0x68366f46bbf7b9a5;
            }
          }
          if (0x1fe045333d3e6ebf < (longlong)uVar1) break;
          if (uVar1 == 0xf877a411928f2b46) {
            local_b0 = DAT_1802a5b10;
            local_f0 = 0x83ec1bb2ee7ee6e;
            if (DAT_1802a5b10 == 0) {
              local_f0 = 0xc45d9453501c0dcb;
            }
            local_f8 = 0xb2c8704543679a00;
          }
          else if (uVar1 == 0x611b215f67b1f11) {
            local_88 = local_b8;
            local_a8 = DAT_1802a5b38 - local_b8;
            local_f0 = 0x43cd1743bf438a0b;
            if (local_c8 < local_a8) {
              local_f0 = 0xd9abfecfb1c67d56;
            }
            local_f8 = 0x987ca5adee10c8c;
            local_a0 = local_b8;
            local_80 = local_a8;
          }
          else if (uVar1 == 0x1a7c6b046580640d) {
            local_78 = *(longlong *)(local_b0 + -8);
            local_f0 = 0xcaff8f4d8f8bb674;
            if ((ulonglong)((local_68 + local_d0) - local_78) < local_e0) {
              local_f0 = 0x21c6ea4a7b4a7e7;
            }
            local_f8 = 0xd51fca7eb2b5d8b4;
          }
        }
        if ((longlong)uVar1 < 0x4a4add1961a28687) break;
        if (uVar1 == 0x4a4add1961a28687) {
          thunk_FUN_1801f42e0(local_a0,local_a8);
          DAT_1802a5b28 = 0;
          DAT_1802a5b30 = 0;
          DAT_1802a5b38 = 0;
          local_f0 = 0xdda743f7913bb37a;
          local_f8 = 0x25d0e7e603b4983c;
        }
        else {
          if (uVar1 == 0x7695e416137b97cb) {
            return;
          }
          if (uVar1 == 0x54766ea2ef99f618) goto LAB_18014e5ea;
        }
      }
      if (uVar1 != 0x2ce4dc2a621b5b95) break;
      thunk_FUN_1801f42e0(local_90,local_98);
      DAT_1802a5b10 = 0;
      DAT_1802a5b18 = 0;
      DAT_1802a5b20 = 0;
      local_f0 = 0x49989e8fa9f3d528;
      local_f8 = 0x3f0d7a99ba8842e3;
    }
  } while (uVar1 != 0x1fe045333d3e6ec0);
LAB_18014e5ea:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_e4,local_d8);
}



undefined8 * FUN_18014e630(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 ***pppuVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined **local_4d8;
  undefined8 *local_4d0;
  undefined1 *local_4c8;
  undefined ***local_4a0;
  undefined4 *local_498;
  undefined8 local_490;
  undefined8 local_488;
  ulonglong local_480;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  ulonglong local_460;
  undefined8 local_458;
  longlong local_450;
  undefined8 local_448;
  ulonglong local_440;
  undefined8 local_438;
  longlong local_430;
  undefined8 local_428;
  ulonglong local_420;
  undefined7 local_418;
  undefined4 uStack_411;
  undefined5 uStack_40d;
  undefined8 local_408;
  ulonglong local_400;
  undefined7 local_3f8;
  undefined4 uStack_3f1;
  undefined5 uStack_3ed;
  undefined8 local_3e8;
  ulonglong local_3e0;
  undefined4 *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 *local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  ulonglong uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  ulonglong local_380;
  undefined4 *local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  ulonglong uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  ulonglong local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  ulonglong local_300;
  undefined4 *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  ulonglong local_2c0;
  undefined4 *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 **local_298;
  longlong local_290;
  undefined8 local_288;
  ulonglong local_280;
  undefined8 **local_278;
  longlong local_270;
  undefined8 local_268;
  ulonglong local_260;
  undefined8 **local_258;
  longlong local_250;
  undefined8 local_248;
  ulonglong local_240;
  undefined8 **local_238;
  longlong local_230;
  undefined8 local_228;
  ulonglong local_220;
  undefined8 **local_218;
  longlong local_210;
  undefined8 local_208;
  ulonglong local_200;
  undefined8 **local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  ulonglong local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined4 *local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  undefined4 *local_188;
  longlong lStack_180;
  longlong local_178;
  undefined1 *local_168;
  undefined1 *puStack_160;
  undefined1 *local_158;
  undefined1 *local_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 *local_70;
  undefined8 local_68;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_5c = 0x9f889320;
  local_32 = 0xc3;
  local_e8 = 0x32;
  local_90 = 0x3f;
  local_58 = 0x18;
  local_54 = 3;
  local_48 = 1;
  local_e0 = 0x38;
  local_a8 = 0x33;
  local_d8 = 0xb;
  local_40 = 0;
  local_d0 = 9;
  local_c0 = 0x15;
  local_88 = 0x40;
  local_c8 = 0x39;
  local_a0 = 5;
  local_98 = 0x20;
  local_31 = 0;
  local_80 = 0x5d;
  local_68 = 0x1f;
  local_b8 = 6;
  local_b0 = 0x2f;
  local_74 = 0;
  local_f0 = 0x30;
  local_50 = 0xf;
  local_490 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x40);
  local_488 = 0x36;
  local_480 = local_90;
  uVar11 = 1;
  local_498 = puVar5;
  FUN_180151b62(&DAT_1802a5b48,&DAT_18028b670,0x13,0x37,&DAT_1802a5b80);
  *(ulonglong *)((longlong)puVar5 + 0x2e) = CONCAT62(DAT_1802a5b76._2_6_,(undefined2)DAT_1802a5b76);
  uVar6 = CONCAT26((undefined2)DAT_1802a5b76,uRam00000001802a5b70);
  *(undefined8 *)(puVar5 + 8) = _DAT_1802a5b68;
  *(undefined8 *)(puVar5 + 10) = uVar6;
  uVar6 = uRam00000001802a5b60;
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a5b58;
  *(undefined8 *)(puVar5 + 6) = uVar6;
  uVar3 = uRam00000001802a5b54;
  uVar2 = uRam00000001802a5b50;
  uVar1 = uRam00000001802a5b4c;
  *puVar5 = _DAT_1802a5b48;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x36) = local_31;
  local_470 = local_40;
  local_468 = 8;
  local_460 = local_50;
  local_478 = 0x7265646e65526f4e;
  FUN_1801063a0(param_1,&local_478,&local_498,local_74,CONCAT44(uVar11,local_74));
  *param_1 = &PTR_FUN_18021b940;
  local_1a8 = (undefined4 *)0x0;
  lStack_1a0 = 0;
  local_198 = 0;
  local_70 = param_1;
  local_1a8 = (undefined4 *)FUN_1801d61c8(0x11);
  lStack_1a0 = (longlong)local_1a8 + 0x11;
  *local_1a8 = 0x4cde280f;
  local_1a8[1] = 0x8b48c08b;
  local_1a8[2] = 0xce8b49d6;
  local_1a8[3] = 0x90909090;
  *(undefined1 *)(local_1a8 + 4) = 0x90;
  local_290 = local_40;
  local_33 = 1;
  local_198 = lStack_1a0;
  local_298 = (undefined8 **)FUN_1801d61c8(local_88);
  local_1d8 = local_70 + 0x15;
  local_288 = local_e8;
  local_280 = local_90;
  local_298[4] = (undefined8 **)0x0;
  local_298[5] = (undefined8 **)0x0;
  local_298[2] = (undefined8 **)0x0;
  local_298[3] = (undefined8 **)0x0;
  *local_298 = (undefined8 **)0x0;
  local_298[1] = (undefined8 **)0x0;
  *(undefined4 *)((longlong)local_298 + 0x2f) = 0;
  lVar7 = local_40;
  lVar10 = local_48;
  do {
    pppuVar9 = &local_298;
    if (local_50 < local_280) {
      pppuVar9 = (undefined8 ***)local_298;
    }
    *(byte *)((longlong)pppuVar9 + lVar7) =
         (char)local_80 + (char)local_68 * (char)lVar7 ^
         (byte)(local_5c >> ((byte)((int)lVar7 << ((byte)local_54 & 0x1f)) & (byte)local_58 & 0x1f)) ^
         (&DAT_18021b991)[lVar7];
    lVar8 = local_48 + lVar10;
    lVar7 = lVar10;
    lVar10 = lVar8;
  } while (lVar8 != local_a8);
  local_33 = 0;
  FUN_1801b5d80(local_1d8,&local_298,&local_1a8);
  local_188 = (undefined4 *)0x0;
  lStack_180 = 0;
  local_178 = 0;
  local_188 = (undefined4 *)FUN_1801d61c8(local_b8);
  lStack_180 = (longlong)local_188 + 6;
  *local_188 = 0x1a0e9;
  *(undefined1 *)(local_188 + 1) = local_31;
  *(undefined1 *)((longlong)local_188 + 5) = 0x90;
  local_270 = local_40;
  local_34 = 1;
  local_178 = lStack_180;
  local_278 = (undefined8 **)FUN_1801d61c8(local_f0);
  local_1d0 = local_70 + 0x21;
  local_268 = 0x2c;
  local_260 = local_b0;
  *(undefined8 *)((longlong)local_278 + 0x1d) = 0;
  *(undefined8 *)((longlong)local_278 + 0x25) = 0;
  local_278[2] = (undefined8 **)0x0;
  local_278[3] = (undefined8 **)0x0;
  *local_278 = (undefined8 **)0x0;
  local_278[1] = (undefined8 **)0x0;
  lVar7 = local_40;
  lVar10 = local_48;
  do {
    pppuVar9 = &local_278;
    if (local_50 < local_260) {
      pppuVar9 = (undefined8 ***)local_278;
    }
    *(byte *)((longlong)pppuVar9 + lVar7) =
         (char)local_80 + (char)local_68 * (char)lVar7 ^
         (byte)(local_5c >> ((byte)((int)lVar7 << ((byte)local_54 & 0x1f)) & (byte)local_58 & 0x1f)) ^
         (&DAT_18021b9c4)[lVar7];
    lVar8 = local_48 + lVar10;
    lVar7 = lVar10;
    lVar10 = lVar8;
  } while (lVar8 != 0x2d);
  local_34 = 0;
  FUN_1801b5d80(local_1d0,&local_278,&local_188);
  local_168 = (undefined1 *)0x0;
  puStack_160 = (undefined1 *)0x0;
  local_158 = (undefined1 *)0x0;
  local_168 = (undefined1 *)FUN_1801d61c8(local_48);
  puStack_160 = local_168 + 1;
  *local_168 = local_32;
  local_250 = local_40;
  local_35 = 1;
  local_158 = puStack_160;
  local_258 = (undefined8 **)FUN_1801d61c8(local_88);
  local_1c8 = local_70 + 0x2d;
  local_248 = local_e8;
  local_240 = local_90;
  local_258[4] = (undefined8 **)0x0;
  local_258[5] = (undefined8 **)0x0;
  local_258[2] = (undefined8 **)0x0;
  local_258[3] = (undefined8 **)0x0;
  *local_258 = (undefined8 **)0x0;
  local_258[1] = (undefined8 **)0x0;
  *(undefined4 *)((longlong)local_258 + 0x2f) = 0;
  lVar7 = local_40;
  lVar10 = local_48;
  do {
    pppuVar9 = &local_258;
    if (local_50 < local_240) {
      pppuVar9 = (undefined8 ***)local_258;
    }
    *(byte *)((longlong)pppuVar9 + lVar7) =
         (char)local_80 + (char)local_68 * (char)lVar7 ^
         (byte)(local_5c >> ((byte)((int)lVar7 << ((byte)local_54 & 0x1f)) & (byte)local_58 & 0x1f)) ^
         (&DAT_18021b9f1)[lVar7];
    lVar8 = local_48 + lVar10;
    lVar7 = lVar10;
    lVar10 = lVar8;
  } while (lVar8 != local_a8);
  local_35 = 0;
  FUN_1801b5d80(local_1c8,&local_258,&local_168);
  local_148 = (undefined1 *)0x0;
  puStack_140 = (undefined1 *)0x0;
  local_138 = (undefined1 *)0x0;
  local_148 = (undefined1 *)FUN_1801d61c8(local_48);
  puStack_140 = local_148 + 1;
  *local_148 = local_32;
  local_230 = local_40;
  local_36 = 1;
  local_138 = puStack_140;
  local_238 = (undefined8 **)FUN_1801d61c8(0x50);
  local_1c0 = local_70 + 0x39;
  local_228 = 0x41;
  local_220 = 0x4f;
  local_238[6] = (undefined8 **)0x0;
  local_238[7] = (undefined8 **)0x0;
  local_238[4] = (undefined8 **)0x0;
  local_238[5] = (undefined8 **)0x0;
  local_238[2] = (undefined8 **)0x0;
  local_238[3] = (undefined8 **)0x0;
  *local_238 = (undefined8 **)0x0;
  local_238[1] = (undefined8 **)0x0;
  *(undefined2 *)(local_238 + 8) = 0;
  lVar7 = local_40;
  lVar10 = local_48;
  do {
    pppuVar9 = &local_238;
    if (local_50 < local_220) {
      pppuVar9 = (undefined8 ***)local_238;
    }
    *(byte *)((longlong)pppuVar9 + lVar7) =
         (char)local_80 + (char)local_68 * (char)lVar7 ^
         (byte)(local_5c >> ((byte)((int)lVar7 << ((byte)local_54 & 0x1f)) & (byte)local_58 & 0x1f)) ^
         (&DAT_18021ba24)[lVar7];
    lVar8 = local_48 + lVar10;
    lVar7 = lVar10;
    lVar10 = lVar8;
  } while (lVar8 != 0x42);
  local_36 = 0;
  FUN_1801b5d80(local_1c0,&local_238,&local_148);
  local_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  local_118 = (undefined1 *)0x0;
  local_128 = (undefined1 *)FUN_1801d61c8(local_48);
  puStack_120 = local_128 + 1;
  *local_128 = local_32;
  local_210 = local_40;
  local_37 = 1;
  local_118 = puStack_120;
  local_218 = (undefined8 **)FUN_1801d61c8(local_88);
  local_1b8 = local_70 + 0x45;
  local_208 = local_e0;
  local_200 = local_90;
  *(undefined8 *)((longlong)local_218 + 0x29) = 0;
  *(undefined8 *)((longlong)local_218 + 0x31) = 0;
  local_218[4] = (undefined8 **)0x0;
  local_218[5] = (undefined8 **)0x0;
  local_218[2] = (undefined8 **)0x0;
  local_218[3] = (undefined8 **)0x0;
  *local_218 = (undefined8 **)0x0;
  local_218[1] = (undefined8 **)0x0;
  lVar7 = local_40;
  lVar10 = local_48;
  do {
    pppuVar9 = &local_218;
    if (local_50 < local_200) {
      pppuVar9 = (undefined8 ***)local_218;
    }
    *(byte *)((longlong)pppuVar9 + lVar7) =
         (char)local_80 + (char)local_68 * (char)lVar7 ^
         (byte)(local_5c >> ((byte)((int)lVar7 << ((byte)local_54 & 0x1f)) & (byte)local_58 & 0x1f)) ^
         (&DAT_18021ba66)[lVar7];
    lVar8 = local_48 + lVar10;
    lVar7 = lVar10;
    lVar10 = lVar8;
  } while (lVar8 != local_c8);
  local_37 = 0;
  FUN_1801b5d80(local_1b8,&local_218,&local_128);
  local_108 = (undefined1 *)0x0;
  puStack_100 = (undefined1 *)0x0;
  local_f8 = (undefined1 *)0x0;
  local_108 = (undefined1 *)FUN_1801d61c8(local_48);
  puStack_100 = local_108 + 1;
  *local_108 = local_32;
  local_1f0 = local_40;
  local_38 = 1;
  local_f8 = puStack_100;
  local_1f8 = (undefined8 **)FUN_1801d61c8(local_88);
  local_1b0 = local_70 + 0x51;
  local_1e8 = local_e0;
  local_1e0 = local_90;
  *(undefined8 *)((longlong)local_1f8 + 0x29) = 0;
  *(undefined8 *)((longlong)local_1f8 + 0x31) = 0;
  local_1f8[4] = (undefined8 **)0x0;
  local_1f8[5] = (undefined8 **)0x0;
  local_1f8[2] = (undefined8 **)0x0;
  local_1f8[3] = (undefined8 **)0x0;
  *local_1f8 = (undefined8 **)0x0;
  local_1f8[1] = (undefined8 **)0x0;
  lVar7 = local_40;
  lVar10 = local_48;
  do {
    pppuVar9 = &local_1f8;
    if (local_50 < local_1e0) {
      pppuVar9 = (undefined8 ***)local_1f8;
    }
    *(byte *)((longlong)pppuVar9 + lVar7) =
         (char)local_80 + (char)local_68 * (char)lVar7 ^
         (byte)(local_5c >> ((byte)((int)lVar7 << ((byte)local_54 & 0x1f)) & (byte)local_58 & 0x1f)) ^
         (&DAT_18021ba9f)[lVar7];
    lVar8 = local_48 + lVar10;
    lVar7 = lVar10;
    lVar10 = lVar8;
  } while (lVar8 != local_c8);
  local_38 = 0;
  FUN_1801b5d80(local_1b0,&local_1f8,&local_108);
  puVar4 = local_70;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3d8 = (undefined4 *)0x0;
  uStack_3d0 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(local_98);
  local_3c8 = local_c0;
  uStack_3c0 = local_68;
  local_3d8 = puVar5;
  FUN_180151b62(&DAT_1802a5b84,&DAT_18028b6d9,0x1e,0x16,&DAT_1802a5b9c);
  *(ulonglong *)((longlong)puVar5 + 0xd) = CONCAT53(DAT_1802a5b91._3_5_,(undefined3)DAT_1802a5b91);
  uVar3 = uRam00000001802a5b90;
  uVar2 = uRam00000001802a5b8c;
  uVar1 = uRam00000001802a5b88;
  *puVar5 = _DAT_1802a5b84;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x15) = local_31;
  local_450 = local_40;
  local_448 = local_d0;
  local_440 = local_50;
  FUN_180151b62(&DAT_1802a5ba0,&DAT_18028b729,0x1a,10,&DAT_1802a5bac);
  local_450 = CONCAT71(local_450._1_7_,DAT_1802a5ba8);
  local_458 = DAT_1802a5ba0;
  uVar6 = FUN_180107b80(puVar4,&local_458,&local_3d8,0);
  puVar4[0xe] = uVar6;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = (undefined4 *)0x0;
  uStack_3b0 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(local_88);
  local_3a8 = local_a8;
  uStack_3a0 = local_90;
  local_3b8 = puVar5;
  FUN_180151b62(&DAT_1802a5bb0,&DAT_18028b75f,0x1b,0x34,&DAT_1802a5be4);
  *(undefined4 *)((longlong)puVar5 + 0x2f) = DAT_1802a5bdf;
  uVar6 = CONCAT17((undefined1)DAT_1802a5bdf,uRam00000001802a5bd8);
  *(undefined8 *)(puVar5 + 8) = _DAT_1802a5bd0;
  *(undefined8 *)(puVar5 + 10) = uVar6;
  uVar6 = uRam00000001802a5bc8;
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a5bc0;
  *(undefined8 *)(puVar5 + 6) = uVar6;
  uVar3 = uRam00000001802a5bbc;
  uVar2 = uRam00000001802a5bb8;
  uVar1 = uRam00000001802a5bb4;
  *puVar5 = _DAT_1802a5bb0;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x33) = local_31;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = local_a0;
  local_380 = local_50;
  FUN_180151b62(&DAT_1802a5be8,&DAT_18028b7bf,0x1d,6,&DAT_1802a5bf0);
  local_398 = CONCAT44(CONCAT31(local_398._5_3_,DAT_1802a5bec),DAT_1802a5be8);
  uVar6 = FUN_180107b80(puVar4,&local_398,&local_3b8,0);
  puVar4[0xf] = uVar6;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = (undefined4 *)0x0;
  uStack_370 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(local_98);
  local_368 = local_c0;
  uStack_360 = local_68;
  local_378 = puVar5;
  FUN_180151b62(&DAT_1802a5bf4,&DAT_18028b7fa,0x1f,0x16,&DAT_1802a5c0c);
  *(ulonglong *)((longlong)puVar5 + 0xd) = CONCAT53(DAT_1802a5c01._3_5_,(undefined3)DAT_1802a5c01);
  uVar3 = uRam00000001802a5c00;
  uVar2 = uRam00000001802a5bfc;
  uVar1 = uRam00000001802a5bf8;
  *puVar5 = _DAT_1802a5bf4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x15) = local_31;
  local_430 = local_40;
  local_428 = local_d0;
  local_420 = local_50;
  FUN_180151b62(&DAT_1802a5c10,&DAT_18028b83f,0x18,10,&DAT_1802a5c1c);
  local_430 = CONCAT71(local_430._1_7_,DAT_1802a5c18);
  local_438 = DAT_1802a5c10;
  uVar6 = FUN_180107b80(puVar4,&local_438,&local_378,0);
  puVar4[0x10] = uVar6;
  local_348 = 0;
  uStack_340 = 0;
  local_358 = (undefined4 *)0x0;
  uStack_350 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(local_f0);
  local_348 = 0x23;
  uStack_340 = local_b0;
  local_358 = puVar5;
  FUN_180151b62(&DAT_1802a5c20,&DAT_18028b876,0x12,0x24,&DAT_1802a5c44);
  *(undefined4 *)((longlong)puVar5 + 0x1f) = DAT_1802a5c3f;
  uVar6 = CONCAT17((undefined1)DAT_1802a5c3f,uRam00000001802a5c38);
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a5c30;
  *(undefined8 *)(puVar5 + 6) = uVar6;
  uVar3 = uRam00000001802a5c2c;
  uVar2 = uRam00000001802a5c28;
  uVar1 = uRam00000001802a5c24;
  *puVar5 = _DAT_1802a5c20;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x23) = local_31;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = local_a0;
  local_320 = local_50;
  FUN_180151b62(&DAT_1802a5c48,&DAT_18028b8bc,0x10,6,&DAT_1802a5c50);
  local_338 = CONCAT44(CONCAT31(local_338._5_3_,DAT_1802a5c4c),DAT_1802a5c48);
  uVar6 = FUN_180107b80(puVar4,&local_338,&local_358,0);
  puVar4[0x11] = uVar6;
  uStack_411._1_3_ = (undefined3)local_40;
  uStack_40d = (undefined5)((ulonglong)local_40 >> 0x18);
  local_408 = local_d8;
  local_400 = local_50;
  FUN_180151b62(&DAT_1802a5c54,&DAT_18028b8f0,0x17,0xc,&DAT_1802a5c60);
  local_418 = (undefined7)DAT_1802a5c54;
  uStack_411 = ram0x0001802a5c5b;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = local_b8;
  local_300 = local_50;
  FUN_180151b62(&DAT_1802a5c64,&DAT_18028b924,0x1a,7,&DAT_1802a5c6c);
  local_318 = CONCAT44(CONCAT22(local_318._6_2_,DAT_1802a5c68),DAT_1802a5c64);
  uVar6 = FUN_180107b80(puVar4,&local_318,&local_418,0);
  puVar4[0x12] = uVar6;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = (undefined4 *)0x0;
  uStack_2f0 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(local_98);
  local_2e8 = 0x18;
  uStack_2e0 = local_68;
  local_2f8 = puVar5;
  FUN_180151b62(&DAT_1802a5c70,&DAT_18028b95e,0x12,0x19,&DAT_1802a5c8c);
  *(undefined8 *)(puVar5 + 4) = DAT_1802a5c80;
  uVar3 = uRam00000001802a5c7c;
  uVar2 = uRam00000001802a5c78;
  uVar1 = uRam00000001802a5c74;
  *puVar5 = _DAT_1802a5c70;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)(puVar5 + 6) = local_31;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = local_a0;
  local_2c0 = local_50;
  FUN_180151b62(&DAT_1802a5c90,&DAT_18028b9a4,0x17,6,&DAT_1802a5c98);
  local_2d8 = CONCAT44(CONCAT31(local_2d8._5_3_,DAT_1802a5c94),DAT_1802a5c90);
  uVar6 = FUN_180107b80(puVar4,&local_2d8,&local_2f8,0);
  puVar4[0x13] = uVar6;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = (undefined4 *)0x0;
  uStack_2b0 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(local_98);
  local_2a8 = 0x19;
  uStack_2a0 = local_68;
  local_2b8 = puVar5;
  FUN_180151b62(&DAT_1802a5c9c,&DAT_18028b9db,0x1a,0x1a,&DAT_1802a5cb8);
  uVar6 = uRam00000001802a5cad;
  *(ulonglong *)((longlong)puVar5 + 9) = CONCAT17(uRam00000001802a5cac,CONCAT43(uRam00000001802a5ca8,_DAT_1802a5ca5));
  *(undefined8 *)((longlong)puVar5 + 0x11) = uVar6;
  uVar3 = uRam00000001802a5ca8;
  uVar2 = uRam00000001802a5ca4;
  uVar1 = uRam00000001802a5ca0;
  *puVar5 = _DAT_1802a5c9c;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x19) = local_31;
  uStack_3f1._1_3_ = (undefined3)local_40;
  uStack_3ed = (undefined5)((ulonglong)local_40 >> 0x18);
  local_3e8 = local_d8;
  local_3e0 = local_50;
  FUN_180151b62(&DAT_1802a5cbc,&DAT_18028ba25,0x13,0xc,&DAT_1802a5cc8);
  local_3f8 = (undefined7)DAT_1802a5cbc;
  uStack_3f1 = ram0x0001802a5cc3;
  uVar6 = FUN_180107b80(puVar4,&local_3f8,&local_2b8,0);
  puVar4[0x14] = uVar6;
  uVar6 = FUN_1800ba260();
  local_4d8 = &PTR_LAB_18021bae0;
  local_4d0 = puVar4;
  local_4c8 = &LAB_18014fd90;
  local_4a0 = &local_4d8;
  FUN_180130290(uVar6,puVar4,local_4a0,local_74);
  return puVar4;
}



void Unwind_18014fa50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d5) == '\x01') {
    FUN_180131590(param_2 + 0x360);
  }
  return;
}



void Unwind_18014fa90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d4) == '\x01') {
    FUN_180131590(param_2 + 0x380);
  }
  return;
}



void Unwind_18014fad0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d3) == '\x01') {
    FUN_180131590(param_2 + 0x3a0);
  }
  return;
}



void Unwind_18014fb10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d2) == '\x01') {
    FUN_180131590(param_2 + 0x3c0);
  }
  return;
}



void Unwind_18014fb50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d1) == '\x01') {
    FUN_180131590(param_2 + 0x3e0);
  }
  return;
}



void Unwind_18014fb90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d0) == '\x01') {
    FUN_180131590(param_2 + 0x400);
  }
  return;
}



void Unwind_18014fbd0(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(*(undefined8 *)(param_2 + 0x358));
  return;
}



void Unwind_18014fc10(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(*(undefined8 *)(param_2 + 0x350));
  return;
}



void Unwind_18014fc50(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(*(undefined8 *)(param_2 + 0x348));
  return;
}



void Unwind_18014fc90(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(*(undefined8 *)(param_2 + 0x340));
  return;
}



void Unwind_18014fcd0(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(*(undefined8 *)(param_2 + 0x338));
  return;
}



void Unwind_18014fd10(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(*(undefined8 *)(param_2 + 0x330));
  return;
}



void Unwind_18014fd50(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x498));
  return;
}



void FUN_18014fda0(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong local_108;
  ulonglong local_100;
  char local_f1;
  char local_f0;
  char local_ef;
  char local_ee;
  char local_ed;
  char local_ec;
  undefined1 local_eb;
  char local_ea;
  undefined1 local_e9;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_100 = 0x9d2ccfc016c0840b;
  local_108 = 0x1fea83ac6d4f85f3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                lVar5 = local_58;
                uVar1 = local_60;
                uVar4 = local_70;
                lVar8 = DAT_18028b5b0;
                uVar7 = local_100 ^ 0xb53066b5596155d7;
                uVar3 = local_100 ^ local_108;
                local_108 = local_108 ^ 0xb53066b5596155d7;
                local_100 = uVar7;
                if ((longlong)uVar3 < 0x11bb592e353751bd) break;
                if ((longlong)uVar3 < 0x4d6c13542a24cd87) {
                  if ((longlong)uVar3 < 0x2e83f0dda8023fd5) {
                    if ((longlong)uVar3 < 0x1c08e8baa41a9ff0) {
                      if (uVar3 == 0x11bb592e353751bd) {
                        FUN_1801b71a0(local_a0);
                        local_100 = 0xc55a8a2a32f6b9fa;
                        local_108 = 0x63a3818e3c42c18a;
                      }
                      else if (uVar3 == 0x19c90f0380f19a13) {
                        FUN_1801b6c10(local_80);
                        local_100 = 0x9c87ad3d811a2236;
                        local_108 = 0xa4fdb474999a7b22;
                      }
                    }
                    else if (uVar3 == 0x1c08e8baa41a9ff0) {
                      FUN_1801b71a0(local_b8);
                      local_100 = 0x433d1762d0a18e89;
                      local_108 = 0xe5facb248b62b800;
                    }
                    else if (uVar3 == 0x1db1914025721327) {
                      cVar2 = FUN_1801b3ef0(local_b0,&DAT_18028b5b8,local_d8);
                      local_100 = 0x956bd4fa79be6482;
                      if (cVar2 != '\0') {
                        local_100 = 0x3e3b8267bc91f0b3;
                      }
                      local_108 = 0xd807c7ae539aa905;
                    }
                    else if (uVar3 == 0x20aa24cd8e78dff7) {
                      FUN_180150f40(&DAT_1802a5b28,local_e8,&local_e9);
                      local_100 = 0x9a2bc8078c8c2a4a;
                      local_108 = 0x6a8edf5386a26a62;
                    }
                  }
                  else if ((longlong)uVar3 < 0x387a194918805914) {
                    if (uVar3 == 0x2e83f0dda8023fd5) {
                      DAT_18028b5b8 = *local_b0;
                      local_eb = 0xc3;
                      cVar2 = FUN_1801b3ef0(local_b0,&local_eb,local_d8);
                      local_100 = 0x5dc28b66c1351888;
                      if (cVar2 != '\0') {
                        local_100 = 0x815f247ae495dda8;
                      }
                      local_108 = 0x37c7dfe6e6455dd7;
                    }
                    else if (uVar3 == 0x30589aff25d468b6) {
                      uVar4 = DAT_1802a5b38 - local_48;
                      if ((uVar4 | local_e0) >> 0x20 == 0) {
                        uVar4 = (uVar4 & 0xffffffff) / (local_e0 & 0xffffffff);
                      }
                      else {
                        uVar4 = (longlong)uVar4 / (longlong)local_e0;
                      }
                      local_100 = 0xc0f30a9ecd731a9d;
                      if (uVar4 < local_e8) {
                        local_100 = 0x90599f81899dd2da;
                      }
                      local_108 = 0xb0f3bb4c07e50d2d;
                    }
                  }
                  else if (uVar3 == 0x387a194918805914) {
                    local_a0 = param_1 + 0x108;
                    local_100 = 0xe84993d42e2d692c;
                    if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x90) != '\0') {
                      local_100 = 0x2622bcb1912c04a1;
                    }
                    local_108 = 0xf9f2cafa1b1a3891;
                  }
                  else if (uVar3 == 0x3c09f5b2eaf3eb42) {
                    local_b8 = param_1 + 0x288;
                    local_100 = 0xa021d317d9e1d936;
                    if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x90) != '\0') {
                      local_100 = 0xf645c50e398719c2;
                    }
                    local_108 = 0xbc293bad7dfb46c6;
                  }
                  else if (uVar3 == 0x4a6cfea3447c5f04) {
                    FUN_1801b6c10(local_b8);
                    local_100 = 0xec6727702a85c372;
                    local_108 = 0x4aa0fb367146f5fb;
                  }
                }
                else if ((longlong)uVar3 < 0x6a0554802770455f) {
                  if ((longlong)uVar3 < 0x5552c17503158fa0) {
                    if (uVar3 == 0x4d6c13542a24cd87) {
                      local_100 = 0xc8240c2a36db1e7;
                      if (local_ea != '\0') {
                        local_100 = 0xb8d19b9e45d3fdcf;
                      }
                      local_108 = 0xa8c671829f65257;
                    }
                    else if (uVar3 == 0x5529ffa48fa5c902) {
                      FUN_1801b6c10(local_98);
                      FUN_1801b6c10(local_90);
                      local_100 = 0x4420c4051a3c26d5;
                      local_108 = 0xe38913c5a7f4f649;
                    }
                  }
                  else if (uVar3 == 0x5552c17503158fa0) {
                    local_100 = 0xb8e2502eeae10b73;
                    if (DAT_1802a5b18 == DAT_1802a5b10) {
                      local_100 = 0xa3c63104931fbf54;
                    }
                    local_108 = 0x1619e16de486136;
                    local_78 = DAT_1802a5b10;
                    local_70 = local_c0;
                    local_f1 = local_f0;
                  }
                  else if (uVar3 == 0x578ae018c04e4889) {
                    local_100 = 0x4211e959e798c5fe;
                    if (local_ed != '\0') {
                      local_100 = 0xe1adf34b1f8a3e02;
                    }
                    local_108 = 0xb4ff323e1c9fb1a2;
                  }
                  else if (uVar3 == 0x619fb00e0b7bd5fd) {
                    FUN_1801b71a0(local_98);
                    FUN_1801b71a0(local_90);
                    local_100 = 0x296d65948bb1b98;
                    local_108 = 0xa53f0199f573cb04;
                  }
                }
                else if ((longlong)uVar3 < 0x717acdcc0654efaf) {
                  if (uVar3 == 0x6a0554802770455f) {
                    local_100 = 0x8245d81ebf279a41;
                    local_108 = 0xcf29cb4a950357c6;
                  }
                  else if (uVar3 == 0x6b860c97f2c78323) {
                    FUN_1801b71a0(local_a8);
                    local_100 = 0xb250d46d91a6a61c;
                    local_108 = 0x8e5921df7b554d5e;
                  }
                  else if (uVar3 == 0x7000b1d2ca9617b0) {
                    lVar8 = (local_e8 - local_88) * local_e0;
                    FUN_180207610(local_58,0,lVar8);
                    DAT_1802a5b30 = lVar8 + lVar5;
                    local_100 = 0xbcc3682a34157cd3;
                    local_108 = 0x4c667f7e3e3b3cfb;
                  }
                }
                else if (uVar3 == 0x717acdcc0654efaf) {
                  FUN_1801b71a0(local_80);
                  local_100 = 0xa8aa72aef7a358ab;
                  local_108 = 0x90d06be7ef2301bf;
                }
                else if (uVar3 == 0x76b18142905f82aa) {
                  lVar8 = *(longlong *)(local_68 + local_60 * 8);
                  lVar6 = FUN_1801b2b70();
                  lVar9 = DAT_1802a5b28;
                  lVar5 = uVar1 * 5;
                  *(undefined4 *)(DAT_1802a5b28 + lVar5) = *(undefined4 *)(lVar6 + lVar8);
                  *(undefined1 *)(lVar9 + 4 + lVar5) = *(undefined1 *)(lVar6 + 4 + lVar8);
                  local_cc = 0x90;
                  local_d0 = 0x90909090;
                  FUN_1801b3ef0(lVar6 + lVar8,&local_d0,local_e0);
                  local_60 = uVar1 + local_d8;
                  local_100 = 0x4b0871cb6ac63249;
                  if (local_60 < (ulonglong)(DAT_1802a5b18 - DAT_1802a5b10 >> ((byte)local_c8 & 0x3f))) {
                    local_100 = 0x9f1e5f9bb7ce6e81;
                  }
                  local_108 = 0xe9afded92791ec2b;
                  local_68 = DAT_1802a5b10;
                  local_f1 = local_ef;
                }
                else if (uVar3 == 0x7abdfaf78c3becdb) {
                  local_100 = 0xae849449018164cf;
                  if (local_ed != '\0') {
                    local_100 = 0x9105c93424e0892e;
                  }
                  local_108 = 0x67eb1253dfe7fd72;
                }
              }
              if (-0x467c31c7cb5695bc < (longlong)uVar3) break;
              if ((longlong)uVar3 < -0x593823b9a43cc977) {
                if ((longlong)uVar3 < -0x600fe98109dcbde7) {
                  if (uVar3 == 0x82c64c6c7b8f01f8) {
                    local_ef = '\x01';
                    local_d8 = 1;
                    local_c0 = 0;
                    local_c8 = 3;
                    local_e0 = 5;
                    local_f0 = '\0';
                    local_ea = *(char *)(param_1 + 0x4c);
                    local_100 = 0x5861257ebd062d6a;
                    if (local_ea != '\0') {
                      local_100 = 0x2eb4b1b780ac8e30;
                    }
                    local_108 = 0xf5274e2e40afb0ad;
                  }
                  else if (uVar3 == 0x8ab2dd0385e693af) {
                    local_100 = 0x24a3bd2530df240;
                    if (local_88 < local_e8) {
                      local_100 = 0xc2b7b6797cf7dade;
                    }
                    local_108 = 0xf2ef2c865923b268;
                  }
                }
                else if (uVar3 == 0x9ff0167ef6234219) {
                  local_100 = 0x14bf088f134595df;
                  if (local_ee != '\0') {
                    local_100 = 0x44628a9b1c134b7f;
                  }
                  local_108 = 0x59d31bdb39615858;
                }
                else if (uVar3 == 0xa1754d055d532edb) {
                  DAT_1802a5b30 = local_e8 * 5 + local_50;
                  local_100 = 0x8069f46f96f3bedd;
                  local_108 = 0x70cce33b9cddfef5;
                }
                else if (uVar3 == 0xa2a7af124d57de62) {
                  DAT_1802a5b40 = local_f1;
                  local_100 = 0x2191057c5c5ee308;
                  local_108 = 0xd77fde1ba7599754;
                }
              }
              else if ((longlong)uVar3 < -0x52b994af02566239) {
                if (uVar3 == 0xa6c7dc465bc33689) {
                  local_ec = *(char *)(*(longlong *)(param_1 + 0x98) + 0x90);
                  local_100 = 0x5916ff7fdb58cd85;
                  local_108 = 0x8874842e5ed0fa63;
                }
                else if (uVar3 == 0xa6f90ba40eb47870) {
                  local_98 = param_1 + 0x168;
                  local_90 = param_1 + 0x1c8;
                  local_100 = 0x19c7cac63b963d10;
                  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x90) != '\0') {
                    local_100 = 0x2d71856cbf4821ef;
                  }
                  local_108 = 0x78587ac830ede8ed;
                }
                else if (uVar3 == 0xa7a9d7c0bdc8d09c) {
                  local_a8 = param_1 + 0x228;
                  local_100 = 0xe8b4f9fd4b74065;
                  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x90) != '\0') {
                    local_100 = 0xd8ace70a25d4e6fa;
                  }
                  local_108 = 0x650d43082670c346;
                }
              }
              else if (uVar3 == 0xad466b50fda99dc7) {
                FUN_1801b71a0(param_1 + 0xa8);
                FUN_1801b71a0(param_1 + 0x108);
                FUN_1801b71a0(param_1 + 0x168);
                FUN_1801b71a0(param_1 + 0x1c8);
                FUN_1801b71a0(param_1 + 0x228);
                FUN_1801b71a0(param_1 + 0x288);
                local_100 = 0x22114d41ee620be0;
                local_108 = 0xf37336106bea3c06;
                local_ec = '\0';
              }
              else if (uVar3 == 0xb25dfc866c25af98) {
                local_ed = DAT_1802a5b40;
                local_100 = 0xf965d988cebc841f;
                if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x90) != '\0') {
                  local_100 = 0xd452c36782c9204d;
                }
                local_108 = 0xaeef39900ef2cc96;
              }
              else if (uVar3 == 0xb698fb9c02d0807f) {
                DAT_18028b5b9 = local_ef;
                local_100 = 0x49379b8f89965c2e;
                local_108 = 0x2332cf0faee61971;
              }
            }
            if (-0x202f89b475c9c3d1 < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x369079e521996643) {
              if (uVar3 == 0xb983ce3834a96a45) {
                lVar9 = local_70 * 5 + DAT_1802a5b28;
                lVar8 = *(longlong *)(local_78 + local_70 * 8);
                lVar5 = FUN_1801b2b70();
                FUN_1801b3ef0(lVar8 + lVar5,lVar9,local_e0);
                local_70 = uVar4 + local_d8;
                local_78 = DAT_1802a5b10;
                local_100 = 0xf9eaeba4f285f175;
                if (local_70 < (ulonglong)(DAT_1802a5b18 - DAT_1802a5b10 >> ((byte)local_c8 & 0x3f))) {
                  local_100 = 0xe2ce8a8e8b7b4552;
                }
                local_108 = 0x5b4d44b6bfd22f17;
                local_f1 = local_f0;
              }
              else if (uVar3 == 0xbda1a40203a425bc) {
                FUN_1801b6c10(local_a8);
                local_100 = 0x573268a2c96ca0e5;
                local_108 = 0x6b3b9d10239f4ba7;
              }
            }
            else if (uVar3 == 0xc96f861ade6699bd) {
              local_e8 = DAT_1802a5b18 - DAT_1802a5b10 >> ((byte)local_c8 & 0x3f);
              local_58 = DAT_1802a5b30;
              local_50 = DAT_1802a5b28;
              uVar4 = DAT_1802a5b30 - DAT_1802a5b28;
              if ((uVar4 | local_e0) >> 0x20 == 0) {
                local_88 = (uVar4 & 0xffffffff) / (local_e0 & 0xffffffff);
              }
              else {
                local_88 = (longlong)uVar4 / (longlong)local_e0;
              }
              local_100 = 0x9eaea44fc9763bec;
              if (local_e8 < local_88) {
                local_100 = 0xb569344911c38698;
              }
              local_108 = 0x141c794c4c90a843;
              local_48 = local_50;
            }
            else if (uVar3 == 0xd1627b51858837e6) {
              local_100 = 0x76365f0ea3a7f978;
              if (local_ec != '\0') {
                local_100 = 0x16c84bc5c0d24b1a;
              }
              lVar5 = FUN_1801b2b70();
              local_b0 = (undefined1 *)(lVar5 + lVar8);
              local_ee = DAT_18028b5b9;
              local_108 = 0xe9c649705584bb61;
            }
            else if (uVar3 == 0xdb93ff99c0033e9d) {
              local_80 = param_1 + 0xa8;
              local_100 = 0xa70f9fa0970fc8be;
              if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x90) != '\0') {
                local_100 = 0xcfbc5d6f11aabd02;
              }
              local_108 = 0xd675526c915b2711;
            }
          }
          if (-0x911249804f88ba5 < (longlong)uVar3) break;
          if (uVar3 == 0xdfd0764b8a363c30) {
            FUN_1801b6c10(local_a0);
            local_100 = 0x54b3d8381b4c47b5;
            local_108 = 0xf24ad39c15f83fc5;
          }
          else if (uVar3 == 0xe63c45c9ef0b59b6) {
            DAT_18028b5b9 = local_f0;
            local_100 = 0xa733385a093494b5;
            local_108 = 0xea5f2b0e23105932;
          }
          else if (uVar3 == 0xf0a517540a2e4028) {
            local_68 = DAT_1802a5b10;
            local_60 = local_c0;
            local_f1 = local_ef;
            local_100 = 0x2826f24f408c20cc;
            if (DAT_1802a5b18 == DAT_1802a5b10) {
              local_100 = 0xfc30dc1f9d847c04;
            }
            local_108 = 0x5e97730dd0d3a266;
          }
        }
        if (uVar3 != 0xff0e02b59556f07b) break;
        local_100 = 0x731de304099c3716;
        if (local_ee != '\0') {
          local_100 = 0x10f2008d8bbac544;
        }
        local_108 = 0x5d9e13d9a19e08c3;
      }
      if (uVar3 != 0x60e27da8a9be3b0) break;
      local_100 = 0xcc944c01c53a0600;
      if (DAT_1802a5b40 != '\0') {
        local_100 = 0x6f2856133d28fdfc;
      }
      local_108 = 0x3a7a97663e3d725c;
    }
  } while (uVar3 != 0xf6eedb67fb07745c);
  return;
}


