#include "../include/aerialclient_types.h"


undefined8 FUN_180110190(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xb31094f2dc381301;
  local_50 = 0xb3601ea21e157703;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc39eedadec60855f;
        if (uVar1 != 0x708a50c22d6402) break;
        FUN_1801102e0(param_1);
        local_48 = 0x5f05ca87f44bff10;
        if ((param_2 & 1) == 0) {
          local_48 = 0x671c3db62190d350;
        }
        local_50 = 0xd66c5c1ec1fb69e;
      }
      if (uVar1 != 0x52630f461854498e) break;
      thunk_FUN_1801f42e0(param_1,0xe8);
      local_48 = 0x2cce8e98e5faca9a;
      local_50 = 0x46b476ef2875af54;
    }
    local_48 = local_48 ^ 0xc39eedadec60855f;
  } while (uVar1 != 0x6a7af877cd8f65ce);
  return param_1;
}



void FUN_1801102e0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_179;
  ulonglong local_178;
  ulonglong local_170;
  uint local_164;
  uintptr_t local_160;
  ulonglong local_158;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  ulonglong local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong *local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;

  local_170 = 0xdd25edfd3fd35e6a;
  local_178 = 0xd7d34d8982bd4c09;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_170 ^ 0xe33bc53f8bd00044;
              uVar1 = local_170 ^ local_178;
              local_178 = local_178 ^ 0xe33bc53f8bd00044;
              local_170 = uVar2;
              if ((longlong)uVar1 < 0xaf6a074bd6e1263) break;
              if ((longlong)uVar1 < 0x37e513df2325f1c9) {
                if ((longlong)uVar1 < 0x1ec84dd7ff6233d8) {
                  if (uVar1 == 0xaf6a074bd6e1263) {
                    local_179 = 0;
                    local_140 = 0xfff;
                    local_148 = 0x20;
                    local_160 = 0;
                    local_130 = 0x28;
                    local_164 = 0;
                    local_158 = 0xf;
                    local_138 = 1;
                    local_150 = -8;
                    local_128 = (longlong *)(param_1 + 200);
                    local_c0 = (ulonglong *)(param_1 + 0xe0);
                    local_120 = *(ulonglong *)(param_1 + 0xe0);
                    local_170 = 0xd0c939b06b790070;
                    if (0xf < local_120) {
                      local_170 = 0xe52ec6983fe5943d;
                    }
                    local_178 = 0xfc1bd6c7da4b57bc;
                  }
                  else if (uVar1 == 0x1935105fe5aec381) {
                    local_e8 = *local_128;
                    local_f0 = local_120 + local_138;
                    local_170 = 0xce813fc28bc2bdde;
                    if (local_140 < local_f0) {
                      local_170 = 0x680349ded0d8b6f;
                    }
                    local_178 = 0x3dca8a018a75a325;
                    local_78 = local_e8;
                  }
                }
                else if (uVar1 == 0x1ec84dd7ff6233d8) {
                  *(uintptr_t *)(param_1 + 0xb8) = local_160;
                  *local_a8 = local_158;
                  *(undefined1 *)local_118 = local_179;
                  local_108 = (longlong *)(param_1 + 0x90);
                  local_a0 = *(longlong *)(param_1 + 0x90);
                  local_170 = 0x6033b829206c40d5;
                  if (local_a0 == 0) {
                    local_170 = 0x2d7daa618b33e75c;
                  }
                  local_178 = 0x1ce68942c695a6f3;
                }
                else if (uVar1 == 0x2cd2ef77b13257cc) {
                  *(uintptr_t *)(param_1 + 0xd8) = local_160;
                  *local_c0 = local_158;
                  *(undefined1 *)local_128 = local_179;
                  local_118 = (longlong *)(param_1 + 0xa8);
                  local_a8 = (ulonglong *)(param_1 + 0xc0);
                  local_110 = *(ulonglong *)(param_1 + 0xc0);
                  local_170 = 0x25105e48cadbae41;
                  if (local_158 < local_110) {
                    local_170 = 0xc3d0040169c6c50;
                  }
                  local_178 = 0x3bd8139f35b99d99;
                }
                else if (uVar1 == 0x319b23234da641af) {
                  FUN_18010eba0(param_1);
                  return;
                }
              }
              else if ((longlong)uVar1 < 0x40f018ab36ecd60b) {
                if (uVar1 == 0x37e513df2325f1c9) {
                  local_c8 = *local_118;
                  local_d0 = local_110 + local_138;
                  local_170 = 0x9bd6defbeb577c6a;
                  if (local_140 < local_d0) {
                    local_170 = 0xc68dc0faf4edb915;
                  }
                  local_178 = 0x5fa00bcaf81bdb70;
                  local_68 = local_c8;
                }
                else if (uVar1 == 0x3b4abe9c6778284a) {
                  local_70 = *(longlong *)(local_78 + -8);
                  local_170 = 0x9b4c0a4577e6286f;
                  if ((ulonglong)((local_78 + local_150) - local_70) < local_148) {
                    local_170 = 0x55757d48acaeee5f;
                  }
                  local_178 = 0x158565e39a423854;
                }
              }
              else if (uVar1 == 0x40f018ab36ecd60b) {
                local_f0 = local_120 + local_130;
                local_170 = 0x2b1998ce0687131b;
                local_178 = 0xd8522d0d07300de0;
                local_e8 = local_70;
              }
              else if (uVar1 == 0x5b15db50628f7b06) {
                local_d0 = local_110 + local_130;
                local_c8 = local_b0;
                local_170 = 0xd6c0d7936871f3f9;
                local_178 = 0x12b602a27b3d54e3;
              }
              else if (uVar1 == 0x7cd5316be6f9e626) {
                local_98 = (longlong *)(param_1 + 0xa0);
                local_90 = *(longlong *)(param_1 + 0x98);
                local_e0 = local_a0;
                local_170 = 0xedc338c7e0f9ce44;
                if (local_a0 == local_90) {
                  local_170 = 0x8eb397d5f4649485;
                }
                local_178 = 0x3c67c03beb4cb539;
                local_d8 = local_e0;
              }
            }
            if ((longlong)uVar1 < -0x3c06502d4ebe954a) break;
            if ((longlong)uVar1 < -0x271e083610d17fbc) {
              if (uVar1 == 0xc3f9afd2b1416ab6) {
                local_100 = local_80 + 0x27;
                local_f8 = local_b8;
                local_170 = 0x8b7fdec463f547aa;
                local_178 = 0x539e290d8cdbc7ee;
              }
              else if (uVar1 == 0xc476d531134ca71a) {
                thunk_FUN_1801f42e0(local_c8,local_d0);
                local_170 = 0x4057b51ed456d8e8;
                local_178 = 0x5e9ff8c92b34eb30;
              }
              else if (uVar1 == 0xd1a4f8fc0bb57b7d) {
                FUN_1800880c0(local_e0);
                local_e0 = local_e0 + 0x40;
                local_170 = 0x36a750e59602076;
                if (local_e0 == local_90) {
                  local_170 = 0x641e14953c212e27;
                }
                local_178 = 0xd2ce8df252d55b0b;
              }
            }
            else if (uVar1 == 0xd8e1f7c9ef2e8044) {
              thunk_FUN_1801f42e0(local_f8,local_100);
              *local_108 = 0;
              local_108[1] = 0;
              local_108[2] = 0;
              local_170 = 0x46cb816d9305dfd9;
              local_178 = 0x7750a24edea39e76;
            }
            else if (uVar1 == 0xf34bb5c301b71efb) {
              thunk_FUN_1801f42e0(local_e8,local_f0);
              local_170 = 0xfb9d9d1ea1fcdf1d;
              local_178 = 0xd74f726910ce88d1;
            }
            else if (uVar1 == 0x503bd4560f36414) goto LAB_180110cfa;
          }
          if (-0x4d2ba811e0d7de45 < (longlong)uVar1) break;
          if (uVar1 == 0x992dcb300cf66265) {
            local_b0 = *(longlong *)(local_68 + -8);
            local_170 = 0xbc46f69177b14b86;
            if ((ulonglong)((local_68 + local_150) - local_b0) < local_148) {
              local_170 = 0xe250908475cd5494;
            }
            local_178 = 0xb9454bd417422f92;
          }
          else if (uVar1 == 0xa4fb2f773765480c) {
            local_b8 = *(longlong *)(local_60 + -8);
            local_170 = 0x28b22f800f29e2a0;
            if ((ulonglong)((local_88 + local_150) - local_b8) < local_148) {
              local_170 = 0x2b9d8eeff30fad0b;
            }
            local_178 = 0xe864213d424ec7bd;
          }
          else if (uVar1 == 0x8ec96fa6eda4103b) goto LAB_180110cfa;
        }
        if (uVar1 != 0xb2d457ee1f2821bc) break;
        local_88 = local_d8;
        local_100 = *local_98 - local_d8;
        local_170 = 0x2bd5a94cd00ce194;
        if (local_140 < local_100) {
          local_170 = 0x57cf71f2084729dc;
        }
        local_178 = 0xf3345e853f2261d0;
        local_f8 = local_d8;
        local_80 = local_100;
        local_60 = local_88;
      }
      if (uVar1 != 0xb6d099676ef4752c) break;
      local_d8 = *local_108;
      local_170 = 0xdea2ac8e93e80dc8;
      local_178 = 0x6c76fb608cc02c74;
    }
  } while (uVar1 != 0xc0d60ebd4d67251d);
LAB_180110cfa:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_164,local_160);
}



undefined8 FUN_180110d40(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xc793ae13244cdf0a;
  local_50 = 0x28b35a28b6943ae6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x21db7fe55eaef906;
        if (uVar1 != 0x99ffebb393b90350) break;
        thunk_FUN_1801f42e0(param_1,0x70);
        local_48 = 0x2365c0169d8e149d;
        local_50 = 0x4bd357037c3a5ddb;
      }
      if (uVar1 != 0xef20f43b92d8e5ec) break;
      FUN_180106c90(param_1);
      local_48 = 0x7c5008d809774203;
      if ((param_2 & 1) == 0) {
        local_48 = 0x8d19747e7b7a0815;
      }
      local_50 = 0xe5afe36b9ace4153;
    }
    local_48 = local_48 ^ 0x21db7fe55eaef906;
  } while (uVar1 != 0x68b69715e1b44946);
  return param_1;
}



void FUN_180110e90(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x8f97a59d1787b370;
  local_68 = 0x77daac1b28275aad;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x494be75bc73f5223;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x494be75bc73f5223;
          local_60 = uVar2;
          if (-0x14ac3ab84ccb4568 < (longlong)uVar1) break;
          if (uVar1 == 0x93b113a7635e2c49) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xba3bb7725a419993;
            local_68 = 0x2f50a908efc0d1c5;
          }
          else if (uVar1 == 0x956b1e7ab5814856) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0xbbbe2f8c118f2b09;
            if (local_54 == param_4) {
              local_60 = 0x11e822231592f3f9;
            }
            local_68 = 0xfabbe764a6a64960;
          }
          else if (uVar1 == 0xc64ecc61852d4ed2) {
            local_6b = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xffacb91481f0019a;
            local_68 = 0x6ac7a76e347149cc;
          }
        }
        if (0x40cc417fa1a4025a < (longlong)uVar1) break;
        if (uVar1 == 0xeb53c547b334ba99) {
          *param_5 = 1;
          local_60 = 0xe4b153784008498e;
          local_68 = 0xa47d1207e1ac4bd5;
        }
        else if (uVar1 == 0xf84d09863fa0e9dd) {
          local_60 = 0x9d27af8a113abb1;
          if (*param_5 == 1) {
            local_60 = 0x81bf36fb79ecb83;
          }
          local_68 = 0x48d7b210163ac9d8;
          local_54 = 0;
          local_6a = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x4105c8e8b7296269) break;
      local_69 = local_6a;
      local_4c = local_54;
      local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
      local_6c = *(char *)(local_48 + (int)local_54);
      local_60 = 0x1ae1b405c68ce2a0;
      if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
        local_60 = 0x4f1e6bc320ff803b;
      }
      local_68 = 0x8950a7a2a5d2cee9;
    }
  } while (uVar1 != 0x40cc417fa1a4025b);
  return;
}



void FUN_180111150(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x47f36b4e80f3ff90;
  local_50 = 0xe219c8cbfcba860a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x74713489b43c3c6c;
        if (uVar1 != 0xa5eaa3857c49799a) break;
        local_48 = 0x9255300da683443e;
        if (DAT_1802a46c0 == 1) {
          local_48 = 0x103e67140ea6c747;
        }
        local_50 = 0x4b073b523c2d0db7;
      }
      if (uVar1 != 0xd9520b5f9aae4989) break;
      FUN_180110e90(&DAT_1802a463c,&DAT_18027e67e,0x1d,8,&DAT_1802a4644);
      _DAT_1802a46a0 = &DAT_1802a463c;
      FUN_180110e90(&DAT_1802a4648,&DAT_18027e6ba,0x10,10,&DAT_1802a4654);
      _DAT_1802a46a8 = &DAT_1802a4648;
      FUN_180110e90(&DAT_1802a4658,&DAT_18027e6e7,0x1e,6,&DAT_1802a4660);
      _DAT_1802a46b0 = &DAT_1802a4658;
      FUN_180110e90(&DAT_1802a4664,&DAT_18027e722,0x14,7,&DAT_1802a466c);
      _DAT_1802a46b8 = &DAT_1802a4664;
      DAT_1802a46c0 = 1;
      local_48 = 0x1229c31dd03dc409;
      local_50 = 0x49109f5be2b60ef9;
    }
    local_48 = local_48 ^ 0x74713489b43c3c6c;
  } while (uVar1 != 0x5b395c46328bcaf0);
  return;
}



undefined8 * FUN_180111340(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xf25840d8edff30e1;
  local_50 = 0xaaa7d9c4506795be;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x18808cd741e740fd;
        if ((longlong)uVar1 < 0x3e9052122e0419d3) break;
        if (uVar1 == 0x3e9052122e0419d3) {
          FUN_1801d62d8(&DAT_1802a46e0);
          local_48 = 0xc12b9a3ae3f1c388;
          if (DAT_1802a46e0 == -1) {
            local_48 = 0xe338cd2893989a21;
          }
          local_50 = 0x17e6de8c118af791;
        }
        else {
          local_48 = local_48 ^ 0x18808cd741e740fd;
          if (uVar1 == 0x58ff991cbd98a55f) {
            local_48 = 0x2cbf81ceb8afb6f4;
            if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
                DAT_1802a46e0) {
              local_48 = 0xc4e2976a64d09b3e;
            }
            local_50 = 0xfa72c5784ad482ed;
          }
        }
      }
      if (uVar1 != 0xf4de13a482126db0) break;
      atexit(FUN_1801114f0);
      _Init_thread_footer(&DAT_1802a46e0);
      local_48 = 0x8c66bf41b9be316c;
      local_50 = 0x5aabfbf74bc50575;
    }
    local_48 = local_48 ^ 0x18808cd741e740fd;
  } while (uVar1 != 0xd6cd44b6f27b3419);
  return &DAT_1802a46c8;
}



void FUN_1801114f0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong *local_60;

  local_c0 = 0xf36e0fec454e804a;
  local_c8 = 0x204ff5354c9395c8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_c0 ^ 0xfaa9242afec9c015;
            uVar1 = local_c0 ^ local_c8;
            local_c8 = local_c8 ^ 0xfaa9242afec9c015;
            local_c0 = uVar2;
            if (-0x2cde0526f622ea7f < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x571471b3177746a5) {
              if (uVar1 == 0x81304cda135f7d23) {
                local_80 = DAT_1802a46d0;
                local_c0 = 0xc39a002472ed311f;
                if (local_98 == DAT_1802a46d0) {
                  local_c0 = 0xf4710625dff2d236;
                }
                local_c8 = 0x6b718e689a658844;
                local_b8 = local_98;
                local_a0 = local_98;
              }
              else if (uVar1 == 0x9f00884d45975a72) {
                local_78 = local_a0;
                local_b0 = DAT_1802a46d8 - (longlong)local_a0;
                local_c0 = 0xe2b73c9e506ab826;
                if (0xfff < local_b0) {
                  local_c0 = 0x922bb46320920f22;
                }
                local_c8 = 0x2af60d74bfd6f3f5;
                local_a8 = local_a0;
                local_70 = local_b0;
                local_60 = local_78;
              }
            }
            else if (uVar1 == 0xa8eb8e4ce888b95b) {
              local_68 = local_b8;
              local_90 = (undefined8 *)*local_b8;
              local_c0 = 0x8fc6cb69f73aeb77;
              if (local_90 == (undefined8 *)0x0) {
                local_c0 = 0xa2959dcafc7c04a3;
              }
              local_c8 = 0x5051b73b8b20428a;
            }
            else if (uVar1 == 0xb8ddb9179f44fcd7) {
              local_88 = (longlong *)local_60[-1];
              local_c0 = 0x36bf1595d89c95c;
              if ((ulonglong)((longlong)local_78 + (-8 - (longlong)local_88)) < 0x20) {
                local_c0 = 0x2a0c8327eaf43a11;
              }
              local_c8 = 0x4b234c40be302776;
            }
            else if (uVar1 == 0xc84131eaefbc4bd3) {
              thunk_FUN_1801f42e0(local_a8,local_b0);
              DAT_1802a46c8 = (longlong *)0x0;
              DAT_1802a46d0 = (longlong *)0x0;
              DAT_1802a46d8 = 0;
              local_c0 = 0x3d48717308a87e52;
              local_c8 = 0x45f3f0ebca791365;
            }
          }
          if (0x1f697c3b1cd83f91 < (longlong)uVar1) break;
          if (uVar1 == 0xd321fad909dd1582) {
            local_98 = DAT_1802a46c8;
            local_c0 = 0xf7d69981ce7f0f41;
            if (DAT_1802a46c8 == (longlong *)0x0) {
              local_c0 = 0xe5d54c31ff11f55;
            }
            local_c8 = 0x76e6d55bdd207262;
          }
          else if (uVar1 == 0xdf977c527c1aa9fd) {
            (**(code **)*local_90)(local_90,1);
            local_c0 = 0xa5f20488a03ff543;
            local_c8 = 0x57362e79d763b36a;
          }
          else if (uVar1 == 0xf2c42af1775c4629) {
            local_b8 = local_68 + 1;
            local_c0 = 0xf187fdbf81134a2a;
            if (local_b8 == local_80) {
              local_c0 = 0x46050fc87543cce3;
            }
            local_c8 = 0x596c73f3699bf371;
          }
        }
        if (0x612fcf6754c41d66 < (longlong)uVar1) break;
        if (uVar1 == 0x1f697c3b1cd83f92) {
          local_a0 = DAT_1802a46c8;
          local_c0 = 0x514a74a90a4cc82a;
          local_c8 = 0xce4afce44fdb9258;
        }
        else if (uVar1 == 0x4848bd19e3b9ee2a) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0x612fcf6754c41d67) break;
      local_b0 = local_70 + 0x27;
      local_a8 = local_88;
      local_c0 = 0x6287ac7c9e03611;
      local_c8 = 0xce694b2d265c7dc2;
    }
  } while (uVar1 != 0x78bb8198c2d16d37);
  return;
}



void FUN_180111a00(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;

  local_50 = 0xb20ba645c06ebbdc;
  local_58 = 0xab4b3151ffce355f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xb29afe3ceb67c486;
        if (uVar1 != 0x194097143fa08e83) break;
        local_48 = param_1 + 1;
        local_50 = 0x49a660ed44a1b2ef;
        if (*param_1 == param_1[1]) {
          local_50 = 0xdb3e01fc91ff2c98;
        }
        local_58 = 0xeb1f93e03196fab7;
      }
      if (uVar1 != 0x3021921ca069d62f) break;
      FUN_180111c40(param_1);
      FUN_180111d40(param_1);
      FUN_180111e50(param_1);
      FUN_180111f60(param_1);
      FUN_180112070(param_1);
      FUN_180112180(param_1);
      FUN_180112290(param_1);
      FUN_1801123a0(param_1);
      FUN_1801124b0(param_1);
      FUN_1801125c0(param_1);
      FUN_1801126d0(param_1);
      FUN_1801127e0(param_1);
      FUN_1801128e0(param_1);
      FUN_1801129f0(param_1);
      FUN_180112b00(param_1);
      FUN_180112c10(param_1);
      FUN_180112d20(param_1);
      FUN_180112e30(param_1);
      FUN_180112f40(param_1);
      FUN_180113050(param_1);
      FUN_180113160(param_1);
      FUN_180113270(param_1);
      FUN_180113380(param_1);
      FUN_180113490(param_1);
      FUN_1801135a0(param_1);
      FUN_1801136b0(param_1);
      FUN_1801137c0(param_1);
      FUN_1801138d0(param_1);
      FUN_1801139e0(param_1);
      FUN_180113af0(param_1);
      FUN_180113c00(param_1);
      FUN_180113d10(param_1);
      FUN_180114c00(*param_1,*local_48,*local_48 - *param_1 >> 3);
      local_50 = 0x24c7e66826c75bee;
      local_58 = 0x867e156553f013b6;
    }
    local_50 = local_50 ^ 0xb29afe3ceb67c486;
  } while (uVar1 != 0xa2b9f30d75374858);
  return;
}



undefined8 * FUN_180111c40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x78);
  FUN_18012fae0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180111ce0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  return;
}



void Unwind_180111d10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180111d40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x98);
  FUN_180131cb0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180111de0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_180119570(param_2 + 0x20);
  return;
}



void Unwind_180111e20(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180111e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x90);
  FUN_180138600(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180111ef0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_1801196a0(param_2 + 0x20);
  return;
}



void Unwind_180111f30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180111f60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x80);
  FUN_18013bef0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112000(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_1801197d0(param_2 + 0x20);
  return;
}



void Unwind_180112040(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x78);
  FUN_18013eb40(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112110(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_180119900(param_2 + 0x20);
  return;
}



void Unwind_180112150(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x78);
  FUN_1801402e0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112220(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_180119a30(param_2 + 0x20);
  return;
}



void Unwind_180112260(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112290(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xb8);
  FUN_1801425e0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112330(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_180119b60(param_2 + 0x20);
  return;
}



void Unwind_180112370(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801123a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x88);
  FUN_180148910(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112440(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_180119c90(param_2 + 0x20);
  return;
}



void Unwind_180112480(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801124b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x80);
  FUN_18014b5f0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112550(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_180119dc0(param_2 + 0x20);
  return;
}



void Unwind_180112590(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801125c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x70);
  FUN_18014d1a0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112660(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_180119ef0(param_2 + 0x20);
  return;
}



void Unwind_1801126a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801126d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xd0);
  FUN_18014d970(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112770(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011a020(param_2 + 0x20);
  return;
}



void Unwind_1801127b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801127e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x2e8);
  FUN_18014e630(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112880(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  return;
}



void Unwind_1801128b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801128e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xd8);
  FUN_18015d4d0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112980(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011ab00(param_2 + 0x20);
  return;
}



void Unwind_1801129c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801129f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x78);
  FUN_180161720(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112a90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011ac40(param_2 + 0x20);
  return;
}



void Unwind_180112ad0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112b00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xe8);
  FUN_180163fe0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112ba0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011ad70(param_2 + 0x20);
  return;
}



void Unwind_180112be0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112c10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xc0);
  FUN_180166390(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112cb0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011aeb0(param_2 + 0x20);
  return;
}



void Unwind_180112cf0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x98);
  FUN_18016aef0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112dc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011afe0(param_2 + 0x20);
  return;
}



void Unwind_180112e00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112e30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xd8);
  FUN_180122690(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112ed0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011b110(param_2 + 0x20);
  return;
}



void Unwind_180112f10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180112f40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x100);
  FUN_180152b80(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180112fe0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011b990(param_2 + 0x20);
  return;
}



void Unwind_180113020(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x90);
  FUN_180168e40(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_1801130f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011cad0(param_2 + 0x20);
  return;
}



void Unwind_180113130(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x80);
  FUN_18011e4d0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113200(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011cc00(param_2 + 0x20);
  return;
}



void Unwind_180113240(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xd0);
  FUN_180131310(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113310(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011cd30(param_2 + 0x20);
  return;
}



void Unwind_180113350(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xd0);
  FUN_180136d30(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113420(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011ce80(param_2 + 0x20);
  return;
}



void Unwind_180113460(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113490(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xd0);
  FUN_1801412f0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113530(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011cfc0(param_2 + 0x20);
  return;
}



void Unwind_180113570(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801135a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xa8);
  FUN_180149730(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113640(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011d100(param_2 + 0x20);
  return;
}



void Unwind_180113680(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801136b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0xd0);
  FUN_18014c950(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113750(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011d550(param_2 + 0x20);
  return;
}



void Unwind_180113790(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801137c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x70);
  FUN_18015b8f0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113860(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011d690(param_2 + 0x20);
  return;
}



void Unwind_1801138a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801138d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x90);
  FUN_18015fcf0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113970(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011d7c0(param_2 + 0x20);
  return;
}



void Unwind_1801139b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_1801139e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x80);
  FUN_1801340e0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113a80(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011d8f0(param_2 + 0x20);
  return;
}



void Unwind_180113ac0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113af0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x70);
  FUN_180159ad0(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113b90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011da20(param_2 + 0x20);
  return;
}



void Unwind_180113bd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113c00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(0x78);
  FUN_180151e20(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113ca0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011db50(param_2 + 0x20);
  return;
}



void Unwind_180113ce0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180113d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 1;
  puVar2 = (undefined8 *)FUN_1801d61c8(400);
  FUN_18015a710(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    local_30 = puVar2;
    FUN_180117df0(param_1,puVar1,&local_30,param_4,0);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,local_24);
    }
  }
  else {
    *puVar1 = puVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  }
  return puVar2;
}



void Unwind_180113db0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x44));
  }
  FUN_18011dc80(param_2 + 0x20);
  return;
}



void Unwind_180113df0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_180113e20(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_90;
  ulonglong local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong *local_50;
  longlong *local_48;

  local_88 = 0x8224eaba4ceb4d5c;
  local_90 = 0xf3f88af830420d2a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_88 ^ 0x6648d7c86236ab28;
          uVar1 = local_88 ^ local_90;
          local_90 = local_90 ^ 0x6648d7c86236ab28;
          local_88 = uVar2;
          if (0x27aae19bc892e687 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x126d195148819e2d) {
            if (uVar1 == 0xc3f09f1be5fa16aa) {
              local_48 = local_70;
              local_58 = (undefined8 *)*local_70;
              local_88 = 0x69c279358b93f96e;
              if (local_58 == (undefined8 *)0x0) {
                local_88 = 0xee78caf7a68d645b;
              }
              local_90 = 0x837acd0933b2e59f;
            }
            else if (uVar1 == 0xeab8b43cb8211cf1) {
              (**(code **)*local_58)(local_58,1);
              local_88 = 0xe014f721bb0c8c91;
              local_90 = 0x8d16f0df2e330d55;
            }
          }
          else if (uVar1 == 0xed92e6aeb77e61d3) {
            *local_80 = *param_1;
            local_88 = 0xb51c40dfda2724;
            local_90 = 0x271ffddb1748c1ac;
          }
          else if (uVar1 == 0xed1b07a7e14903a) {
            local_70 = (longlong *)*param_1;
            local_50 = (longlong *)*local_80;
            local_88 = 0x1def372c8e9e41f7;
            if (local_70 == local_50) {
              local_88 = 0xf9b549aca3f6b1d5;
            }
            local_90 = 0xde1fa8376b64575d;
          }
        }
        if ((longlong)uVar1 < 0x6d0207fe953f81c4) break;
        if (uVar1 == 0x6d0207fe953f81c4) {
          local_70 = local_48 + 1;
          local_88 = 0xce6d1303ea095938;
          if (local_70 == local_50) {
            local_88 = 0xe00f6ab6b88d2e41;
          }
          local_90 = 0xd9d8c180ff34f92;
        }
        else if (uVar1 == 0x71dc60427ca94076) {
          local_78 = (undefined8 *)*param_1;
          local_60 = (undefined8 *)param_1[1];
          local_88 = 0x2ab959c86b63fe82;
          if (local_78 == local_60) {
            local_88 = 0x6fbb96d3513d0f99;
          }
          local_90 = 0x4811774899afe911;
          local_80 = param_1 + 1;
        }
      }
      if (uVar1 != 0x62a82e80f2cc1793) break;
      FUN_180107400(*local_78,0);
      local_78 = local_78 + 1;
      local_88 = 0x54c6835b69d34bb0;
      if (local_78 == local_60) {
        local_88 = 0x38bf1da1e50bcc19;
      }
      local_90 = 0x366eaddb9b1f5c23;
    }
  } while (uVar1 != 0x27aae19bc892e688);
  return;
}



longlong FUN_180114180(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  char *local_c0;
  longlong local_b8;
  longlong *local_b0;
  char *local_a8;
  char *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_78;
  longlong local_70;
  char *local_68;
  longlong *local_60;
  char *local_58;
  char *local_50;
  longlong *local_48;

  local_e8 = 0xda2d939a5fa6c631;
  local_f0 = 0x119f798e336e3501;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar5 = local_e8 ^ 0xf49693bad27dfebb;
            uVar4 = local_e8 ^ local_f0;
            local_f0 = local_f0 ^ 0xf49693bad27dfebb;
            local_e8 = uVar5;
            if (-0xbe612640bee9a03 < (longlong)uVar4) break;
            if ((longlong)uVar4 < -0x292368f35e30fcc8) {
              if (uVar4 == 0xc0e853494ca7a647) {
                local_58 = local_a0;
                local_50 = local_a8;
                cVar1 = *local_a8;
                iVar2 = tolower((int)*local_a0);
                iVar3 = tolower((int)cVar1);
                local_e8 = 0x385297e7790755da;
                if (iVar2 == iVar3) {
                  local_e8 = 0x19ffc762b3b7beea;
                }
                local_f0 = 0xde447fa5b67ae726;
              }
              else if (uVar4 == 0xc7bbb8c705cd59cc) {
                local_a0 = local_58 + 1;
                local_a8 = local_50 + 1;
                local_e8 = 0x59c3652a67c09d22;
                if (local_a0 == local_68) {
                  local_e8 = 0x88adc2280307c3d7;
                }
                local_f0 = 0x992b36632b673b65;
                local_d0 = local_90;
              }
              else if (uVar4 == 0xcbb2ea146cc8f330) {
                local_c8 = 0;
                local_c0 = (char *)*param_2;
                local_b8 = param_2[1];
                local_d8 = (longlong *)param_1[1];
                local_d0 = (longlong *)*param_1;
                local_e8 = 0xc1300d86717ef439;
                if (local_d0 == local_d8) {
                  local_e8 = 0x9ab0adb2d003f803;
                }
                local_f0 = 0x8b3659f9f86300b1;
                local_78 = local_d0;
              }
            }
            else if (uVar4 == 0xd6dc970ca1cf0338) {
              local_60 = local_b0;
              local_e8 = 0xb869d1c018d1bda2;
              if (*(longlong *)(*local_b0 + 0x18) == local_c8) {
                local_e8 = 0xfac001597745fd83;
              }
              local_f0 = 0xeb46f5125f250531;
              local_d0 = local_b0;
            }
            else if (uVar4 == 0xe240c3f0ca43a12c) {
              local_90 = local_98;
              local_70 = *local_98;
              local_e8 = 0xc0cef444a656bdb;
              if (*(longlong *)(local_70 + 0x18) == local_b8) {
                local_e8 = 0x1e03ea9d7109bcd9;
              }
              local_f0 = 0xea1a07068518d927;
            }
            else if (uVar4 == 0xe616e842cf7db2fc) {
              local_98 = local_90 + 1;
              local_e8 = 0xa4bc8ff7778b696c;
              if (local_98 == local_d8) {
                local_e8 = 0x1004a0297f2e574e;
              }
              local_f0 = 0x46fc4c07bdc8c840;
              local_e0 = 0;
            }
          }
          if (0x4a06547f891df487 < (longlong)uVar4) break;
          if (uVar4 == 0xf419ed9bf41165fe) {
            if (*(ulonglong *)(local_70 + 0x20) < 0x10) {
              local_a8 = (char *)(local_70 + 8);
            }
            else {
              local_a8 = *(char **)(local_70 + 8);
            }
            local_e8 = 0x896b52fa92653488;
            local_f0 = 0x498301b3dec292cf;
            local_a0 = local_c0;
          }
          else if (uVar4 == 0x6bc9cd2b6334891) {
            local_e0 = *local_48;
            local_e8 = 0xda2162e3a232f12d;
            local_f0 = 0x8cd98ecd60d46e23;
          }
          else if (uVar4 == 0x1186f44b2860f8b2) {
            local_48 = local_d0;
            local_e8 = 0xb1af1a7be6ac0897;
            if (local_d0 == local_d8) {
              local_e8 = 0xe1eb6a879279df08;
            }
            local_f0 = 0xb71386a9509f4006;
            local_e0 = 0;
          }
        }
        if (uVar4 != 0x4a06547f891df488) break;
        local_68 = local_c0 + local_b8;
        local_e8 = 0x895f9c1591987123;
        if (local_b8 == local_c8) {
          local_e8 = 0xbdc3c8e9fa14d337;
        }
        local_f0 = 0x6b1f5fe55bdbd00f;
        local_b0 = local_78;
        local_98 = local_78;
      }
      if (uVar4 != 0x532f24d247f4b893) break;
      local_b0 = local_60 + 1;
      local_e8 = 0x41c4a1ee8e8c08cf;
      if (local_b0 == local_d8) {
        local_e8 = 0xc1e0dacceda594f9;
      }
      local_f0 = 0x971836e22f430bf7;
      local_e0 = 0;
    }
  } while (uVar4 != 0x56f8ec2ec2e69f0e);
  return local_e0;
}



undefined8 * FUN_180114770(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_40;
  undefined8 *local_38;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar3 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  if (plVar3 != plVar1) {
    local_38 = param_2;
    do {
      local_40 = *plVar3;
      if (*(int *)(local_40 + 0x48) == param_3) {
        plVar2 = (longlong *)param_2[1];
        if (plVar2 == (longlong *)param_2[2]) {
          FUN_1800e5fa0(param_2,plVar2,&local_40);
          param_2 = local_38;
        }
        else {
          *plVar2 = local_40;
          param_2[1] = param_2[1] + 8;
          param_2 = local_38;
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return param_2;
}



void Unwind_180114810(undefined8 param_1,longlong param_2)

{
  FUN_1800c5b80(*(undefined8 *)(param_2 + 0x30));
  return;
}



undefined8 * FUN_180114840(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar3 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  if (plVar3 != plVar1) {
    local_30 = param_2;
    do {
      local_38 = *plVar3;
      if (*(char *)(local_38 + 0x4c) == '\x01') {
        plVar2 = (longlong *)param_2[1];
        if (plVar2 == (longlong *)param_2[2]) {
          FUN_1800e5fa0(param_2,plVar2,&local_38);
          param_2 = local_30;
        }
        else {
          *plVar2 = local_38;
          param_2[1] = param_2[1] + 8;
          param_2 = local_30;
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return param_2;
}



void Unwind_1801148d0(undefined8 param_1,longlong param_2)

{
  FUN_1800c5b80(*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined1 FUN_180114900(undefined8 *param_1,int param_2,char param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_71;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;

  local_68 = 0x68a08c49ad0a38ea;
  local_70 = 0x4fbf1d5416b304d9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_68 ^ 0x2754b561c331e1ae;
          uVar2 = local_68 ^ local_70;
          local_70 = local_70 ^ 0x2754b561c331e1ae;
          local_68 = uVar3;
          if (0x59316b1547565838 < (longlong)uVar2) break;
          if (uVar2 == 0x1de2db7ea72a8d60) {
            FUN_180107400(*local_58,*(byte *)(*local_58 + 0x4c) ^ 1);
            local_68 = 0xb8a6445e83859f0a;
            local_70 = 0xdfb3fc1b7745f1c8;
            local_74 = 1;
          }
          else if (uVar2 == 0x271f911dbbb93c33) {
            local_68 = 0x461359cf91777994;
            if (param_3 != '\0') {
              local_68 = 0x6ef02f366dad16ed;
            }
            if (param_2 == 0) {
              local_68 = 0x461359cf91777994;
            }
            local_70 = 0x2fe039ad8e7b905e;
            local_75 = 0;
          }
          else if (uVar2 == 0x4110169be3d686b3) {
            local_60 = (longlong *)*param_1;
            local_50 = (longlong *)param_1[1];
            local_68 = 0xa62ebf218af792de;
            if (local_60 == local_50) {
              local_68 = 0x96ecb456d2ad232d;
            }
            local_70 = 0xff1fd434cda1cae7;
            local_73 = 0;
            local_75 = 0;
          }
        }
        if (0x69f360621f0ce9c9 < (longlong)uVar2) break;
        if (uVar2 == 0x59316b1547565839) {
          local_58 = local_60;
          local_71 = local_73;
          local_48 = (longlong *)*local_60;
          local_68 = 0x146159ec5764a4e7;
          if (*(int *)(local_48[0xd] + 0x90) == param_2) {
            local_68 = 0x485d88f4c7a92c2;
          }
          local_70 = 0x7374e1a9a3a4ca25;
          local_74 = local_73;
        }
        else if (uVar2 == 0x6715b845f4c06ec2) {
          local_75 = local_74;
          local_60 = local_58 + 1;
          local_68 = 0xf8d32ca2497b35de;
          if (local_60 == local_50) {
            local_68 = 0xc81127d51121842d;
          }
          local_70 = 0xa1e247b70e2d6de7;
          local_73 = local_75;
        }
      }
      if (uVar2 != 0x77f13926efde58e7) break;
      cVar1 = (**(code **)(*local_48 + 0x18))();
      local_68 = 0x26972d06f43d7e6f;
      if (cVar1 != '\0') {
        local_68 = 0x5c604e3da7d79dcd;
      }
      local_70 = 0x3b75f6785317f30f;
      local_74 = local_71;
    }
  } while (uVar2 != 0x69f360621f0ce9ca);
  return local_75;
}



void FUN_180114c00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined8 *_Buf1;
  ulonglong uVar10;
  void *pvVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong _Size;
  ulonglong local_480;
  ulonglong local_478;
  int local_470;
  char local_46a;
  char local_469;
  longlong *local_468;
  undefined4 local_45c;
  ulonglong local_458;
  longlong *local_450;
  longlong *local_448;
  longlong *local_440;
  ulonglong local_438;
  longlong *local_430;
  longlong *local_428;
  longlong *local_420;
  byte local_418;
  longlong *local_410;
  longlong *local_408;
  longlong local_400;
  longlong *local_3f8;
  ulonglong local_3f0;
  longlong *local_3e8;
  longlong local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  longlong local_350;
  undefined8 local_348;
  longlong *local_340;
  ulonglong local_338;
  ulonglong local_330;
  longlong *local_328;
  longlong *local_320;
  undefined8 *local_318;
  longlong *local_310;
  ulonglong local_308;
  ulonglong local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  ulonglong local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  undefined8 *local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_270;
  undefined8 *local_268;
  longlong *local_260;
  longlong *local_258;
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
  longlong local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  void *local_160;
  void *local_158;
  size_t local_150;
  longlong local_148;
  longlong local_140;
  undefined8 *local_138;
  longlong local_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  longlong *local_100;
  longlong *local_f8;
  ulonglong local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  void *local_d0;
  void *local_c8;
  size_t local_c0;
  longlong *local_b8;
  void *local_b0;
  void *local_a8;
  size_t local_a0;
  undefined8 *local_98;
  void *local_90;
  void *local_88;
  size_t local_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;

  local_478 = 0x791fb8e7cd9c66d1;
  local_480 = 0xe24ff44876d280b4;
  local_188 = param_1;
  local_180 = param_2;
  local_178 = param_3;
LAB_180114d40:
  do {
    while( true ) {
      plVar6 = local_208;
      plVar5 = local_220;
      plVar1 = local_288;
      uVar12 = local_2a0;
      uVar10 = local_478 ^ 0x70196dfcc0752604;
      uVar8 = local_478 ^ local_480;
      local_480 = local_480 ^ 0x70196dfcc0752604;
      local_478 = uVar10;
      if (-0xe67a19e1f0c437d < (longlong)uVar8) break;
      if ((longlong)uVar8 < -0x4fa60dcfe4c6654a) {
        if ((longlong)uVar8 < -0x5bdc7386a5e9b883) {
          if ((longlong)uVar8 < -0x6958fb493388fde8) {
            if ((longlong)uVar8 < -0x6eda6b021835072f) {
              if (uVar8 == 0x87737afe140e2c07) {
                local_1e0 = *local_448;
                local_478 = 0xff29dcb7c8a5e6e2;
                if (local_450 == local_428) {
                  local_478 = 0x470d8eda5e8ee69;
                }
                local_480 = 0x2017ddbebb8a3525;
                local_148 = local_1e0;
              }
              else if (uVar8 == 0x899821efc4a4c56e) {
                (**(code **)*local_138)(local_138,local_45c);
                local_478 = 0xef63d87a1d31d4c6;
                local_480 = 0xd493ec9b2a840c2e;
              }
            }
            else if (uVar8 == 0x912594fde7caf8d1) {
              iVar7 = memcmp(local_b0,local_a8,local_a0);
              bVar4 = local_2f8 < local_2f0;
              if (iVar7 != local_470) {
                bVar4 = iVar7 < local_470;
              }
              local_478 = 0xd2bd0291a8ee9f02;
              if (bVar4) {
                local_478 = 0x423e6c1cfeb0a06b;
              }
              local_480 = 0xf522988420aeeaa9;
              local_270 = local_b8;
            }
            else if (uVar8 == 0x9490923e6382cabc) {
              local_328 = local_448 + -1;
              local_130 = local_448[-1];
              local_478 = 0x3dfe8dd663267059;
              if (local_1a8 == local_448) {
                local_478 = 0xa6d06faea5975d0b;
              }
              local_480 = 0xebad17be730387c7;
              local_2c8 = local_130;
            }
          }
          else if ((longlong)uVar8 < -0x64afb35044b1199b) {
            if (uVar8 == 0x96a704b6cc770218) {
              lVar13 = *local_428;
              *local_428 = *local_410;
              *local_410 = lVar13;
              local_3b0 = local_428 + 1;
              local_478 = 0x442d562c69cdbc6f;
              local_480 = 0xf474a41c72f426d9;
              local_3b8 = local_410;
              local_3c8 = local_448;
              local_3c0 = local_450;
            }
            else if (uVar8 == 0x98fe02619d3acc94) {
              local_278 = local_128;
              local_478 = 0xab84e7c0070513a7;
              if (local_388 == local_128) {
                local_478 = 0xd3ea4b748ff62579;
              }
              local_480 = 0x78387b9be366da7c;
              local_280 = local_120;
            }
          }
          else if (uVar8 == 0x9b504cafbb4ee665) {
            local_418 = 3;
            local_348 = 4;
            local_470 = 0;
            local_350 = 0x101;
            local_400 = 0;
            local_458 = 0xf;
            local_438 = 1;
            local_45c = 1;
            local_240 = local_180;
            local_248 = local_188;
            local_250 = (longlong)local_180 - (longlong)local_188;
            local_478 = 0xe33042fc1c6dbff7;
            if ((longlong)local_250 < 0x101) {
              local_478 = 0xf98a9e4fbdcb5743;
            }
            local_480 = 0xa6a80af8f2f36f2d;
            local_2c0 = local_188;
            local_2b8 = local_180;
            local_238 = local_178;
            local_230 = local_240;
            local_228 = local_248;
          }
          else if (uVar8 == 0xa38f990f7b33385a) {
            lVar13 = *local_3e8;
            lVar2 = *local_380;
            local_2e0 = *(ulonglong *)(lVar2 + 0x18);
            if (local_458 < *(ulonglong *)(lVar2 + 0x20)) {
              local_90 = *(void **)(lVar2 + 8);
            }
            else {
              local_90 = (void *)(lVar2 + 8);
            }
            local_2d8 = *(ulonglong *)(lVar13 + 0x18);
            if (local_458 < *(ulonglong *)(lVar13 + 0x20)) {
              local_88 = *(void **)(lVar13 + 8);
            }
            else {
              local_88 = (void *)(lVar13 + 8);
            }
            local_80 = local_2d8;
            if (local_2e0 < local_2d8) {
              local_80 = local_2e0;
            }
            iVar7 = memcmp(local_88,local_90,local_80);
            bVar4 = local_2d8 < local_2e0;
            if (iVar7 != local_470) {
              bVar4 = iVar7 < local_470;
            }
            local_478 = 0xb99f35fc9dd69386;
            if (bVar4) {
              local_478 = 0xc19cc602998f7bc2;
            }
            local_480 = 0xfd46df8fc1c4534e;
          }
        }
        else if ((longlong)uVar8 < -0x542dcf10936f00fb) {
          if ((longlong)uVar8 < -0x560a7e1ba8d97cbd) {
            if (uVar8 == 0xa4238c795a16477d) {
              local_50 = local_1d8;
              local_2e8 = local_1d8 - 1;
              local_360 = (undefined8 *)local_468[local_2e8];
              local_468[local_2e8] = 0;
              FUN_180117170(local_468,local_2e8,local_f0,&local_360);
              local_98 = local_360;
              local_478 = 0xcf6a320389db2a4;
              if (local_360 == (undefined8 *)0x0) {
                local_478 = 0xf0b6b7d9c1035852;
              }
              local_480 = 0x4315cd7aa616913b;
            }
            else if (uVar8 == 0xa8cf8bc69af027ea) {
              (**(code **)*local_108)(local_108,local_45c);
              local_478 = 0xece5b30b6af1d54c;
              local_480 = 0x4621512d4f6bbd19;
            }
          }
          else if (uVar8 == 0xa9f581e457268343) {
            local_3f0 = (local_68 >> 2) + (local_68 >> ((byte)local_438 & 0x3f));
            local_100 = local_448;
            local_f8 = local_450;
            local_478 = 0x7df6031e3dd4dbed;
            if ((longlong)local_448 - (longlong)local_378 < (longlong)local_60 - (longlong)local_450) {
              local_478 = 0xdf5f832d63d95e03;
            }
            local_480 = 0x71913fa994326dfe;
          }
          else if (uVar8 == 0xaac4e226259a6855) {
            local_140 = (longlong)local_3f8 - (longlong)local_378;
            FUN_180117170(local_468,local_400,local_140 >> (local_418 & 0x3f),&local_358);
            local_138 = local_358;
            local_478 = 0x76e7673acda69078;
            if (local_358 == (undefined8 *)0x0) {
              local_478 = 0xc48f72343eb78dfe;
            }
            local_480 = 0xff7f46d509025516;
          }
        }
        else if ((longlong)uVar8 < -0x5131437b0814cc03) {
          if (uVar8 == 0xabd230ef6c90ff05) {
            local_268 = (undefined8 *)*local_388;
            local_478 = 0xac44c442d8f086f8;
            if (local_268 == (undefined8 *)0x0) {
              local_478 = 0x53d6d59599a7b96d;
            }
            *local_388 = local_3e0;
            local_480 = 0x4f7ec5ceba75831c;
          }
          else if (uVar8 == 0xac93ceeb093983e0) {
            local_1a8 = local_398;
            local_46a = local_398 == local_468;
            local_478 = 0xba1819432ffae68f;
            if ((bool)local_46a) {
              local_478 = 0xacc438711e65f9f5;
            }
            local_469 = local_428 == local_440;
            local_448 = local_3a0;
            if (!(bool)local_469) {
              local_478 = 0xba1819432ffae68f;
            }
            local_480 = 0x531b99549437ab6;
          }
        }
        else if (uVar8 == 0xaecebc84f7eb33fd) {
          FUN_180114c00(local_468,local_448,local_3f0);
          local_1f8 = local_440;
          local_478 = 0x6ef5868907b9c882;
          local_480 = 0x9f6dd8e8e74a7406;
          local_200 = local_f8;
          local_1f0 = local_450;
          local_1e8 = local_1f8;
        }
        else if (uVar8 == 0xb049f828518703b1) {
          local_58 = local_218;
          local_370 = local_220;
          local_3e0 = *local_220;
          *local_220 = 0;
          lVar13 = *local_388;
          local_318 = (undefined8 *)(local_3e0 + 8);
          uVar12 = *(ulonglong *)(lVar13 + 0x18);
          if (local_458 < *(ulonglong *)(lVar13 + 0x20)) {
            pvVar11 = *(void **)(lVar13 + 8);
          }
          else {
            pvVar11 = (void *)(lVar13 + 8);
          }
          local_e8 = (ulonglong *)(local_3e0 + 0x18);
          uVar8 = *(ulonglong *)(local_3e0 + 0x18);
          local_e0 = (ulonglong *)(local_3e0 + 0x20);
          uVar10 = *(ulonglong *)(local_3e0 + 0x20);
          puVar3 = *(undefined8 **)(local_3e0 + 8);
          _Buf1 = local_318;
          if (local_458 < uVar10) {
            _Buf1 = puVar3;
          }
          _Size = uVar8;
          if (uVar12 < uVar8) {
            _Size = uVar12;
          }
          iVar7 = memcmp(_Buf1,pvVar11,_Size);
          bVar4 = uVar8 < uVar12;
          if (iVar7 != local_470) {
            bVar4 = iVar7 < local_470;
          }
          local_478 = 0x292af574d581498f;
          if (bVar4) {
            local_478 = 0x901471b6459b993e;
          }
          local_480 = 0xe2e24addf8ebeddc;
          local_2b0 = puVar3;
          local_298 = plVar5;
          local_2a8 = uVar10;
          local_2a0 = uVar8;
        }
      }
      else if ((longlong)uVar8 < -0x2f7770e6ffeb8c33) {
        if ((longlong)uVar8 < -0x37e4ff1aab3dc7de) {
          if ((longlong)uVar8 < -0x48e30b6721e1b53e) {
            if (uVar8 == 0xb059f2301b399ab6) {
              local_478 = 0xb09e9897682440c2;
              local_480 = 0xd32c20aa398ea51b;
              local_1d0 = local_3c8;
              local_1c8 = local_3c0;
              local_1c0 = local_3b8;
              local_1b8 = local_3b0;
            }
            else if (uVar8 == 0xb3a37aa36715c969) {
              local_478 = 0x56debd66b2be0c35;
              if (local_438 < local_50) {
                local_478 = 0xd738da2a4650bb10;
              }
              local_480 = 0x731b56531c46fc6d;
              local_1d8 = local_2e8;
              local_260 = local_440;
            }
          }
          else if (uVar8 == 0xb71cf498de1e4ac2) {
            local_478 = 0xf73bed8a5c91b856;
            local_480 = 0xc877d87c4b16fd67;
            local_258 = local_430;
          }
          else if (uVar8 == 0xbf29a0d666b99c39) {
            local_478 = 0xeb60c68596f53e51;
            if (local_46a != '\0') {
              local_478 = 0x47918ebd369af4ff;
            }
            local_480 = 0xc0e2f4432294d8f8;
          }
        }
        else if ((longlong)uVar8 < -0x307ca81e8b8696c8) {
          if (uVar8 == 0xc81b00e554c23822) {
            lVar13 = *local_420;
            *local_420 = local_168;
            *local_408 = lVar13;
            local_478 = 0x55daa35f605d73e3;
            local_480 = 0x75f0e3483a1e8daa;
LAB_180116c5c:
            local_390 = local_420 + 1;
          }
          else if (uVar8 == 0xcbc8bfa92d6aa453) {
            local_1b0 = local_298;
            local_340 = local_298 + -1;
            local_170 = local_298[-1];
            uVar8 = *(ulonglong *)(local_170 + 0x18);
            if (local_458 < *(ulonglong *)(local_170 + 0x20)) {
              pvVar11 = *(void **)(local_170 + 8);
            }
            else {
              pvVar11 = (void *)(local_170 + 8);
            }
            ppuVar9 = &local_318;
            if (local_458 < local_2a8) {
              ppuVar9 = &local_2b0;
            }
            uVar10 = local_2a0;
            if (uVar8 < local_2a0) {
              uVar10 = uVar8;
            }
            iVar7 = memcmp(*ppuVar9,pvVar11,uVar10);
            bVar4 = uVar12 < uVar8;
            if (iVar7 != local_470) {
              bVar4 = iVar7 < local_470;
            }
            local_478 = 0x5f13faaed0c1748e;
            if (bVar4) {
              local_478 = 0xebaad49789005195;
            }
            local_480 = 0x3b225b8e89142258;
          }
        }
        else if (uVar8 == 0xcf8357e174796938) {
          local_478 = 0x6c9b52af85689f9a;
          local_480 = 0xa753ed06a8023bc9;
          local_298 = local_340;
          local_2b0 = (undefined8 *)*local_318;
          local_2a8 = *local_e0;
          local_2a0 = *local_e8;
        }
        else if (uVar8 == 0xcfc7060bf8dc4d6d) {
          FUN_1801179d0(local_468,local_430,local_2d0);
          local_478 = 0xfb077868baf64fa7;
          local_480 = 0x9b54ed7d76b128cd;
        }
      }
      else if ((longlong)uVar8 < -0x26aa18d6ebc41f16) {
        if ((longlong)uVar8 < -0x29ac6597efda0862) {
          if (uVar8 == 0xd0888f19001473cd) {
            *local_340 = 0;
            local_110 = (undefined8 *)*local_1b0;
            *local_1b0 = local_170;
            local_478 = 0x4cb92658ad045a8c;
            if (local_110 == (undefined8 *)0x0) {
              local_478 = 0xf2b6373b3396fa7c;
            }
            local_480 = 0x3d3560da47ef9344;
          }
          else if (uVar8 == 0xd3bc9c5be463c9db) {
            local_128 = local_278 + -1;
            local_120 = local_280 + -1;
            lVar13 = local_278[-1];
            local_278[-1] = 0;
            local_118 = (undefined8 *)local_280[-1];
            local_280[-1] = lVar13;
            local_478 = 0xf1b92a8827104788;
            if (local_118 == (undefined8 *)0x0) {
              local_478 = 0x47626b3d47edfc88;
            }
            local_480 = 0xdf9c695cdad7301c;
          }
        }
        else if (uVar8 == 0xd6539a681025f79e) {
          local_2c8 = *local_410;
          *local_410 = local_130;
          *local_328 = local_2c8;
          local_478 = 0x8804d105781932ee;
          local_480 = 0xc579a915ae8de822;
        }
        else if (uVar8 == 0xd7f12cfad0a76077) {
          local_3a8 = local_368 + -1;
          local_478 = 0x38553e79ce1e0493;
          if (local_368 == local_198) {
            local_478 = 0x34f1e069d0cbd6c9;
          }
          local_480 = 0x5581e2d0d68165a9;
          local_320 = local_3a8;
        }
      }
      else if ((longlong)uVar8 < -0x20c1fef68cd02c39) {
        if (uVar8 == 0xd955e729143be0ea) {
          local_b8 = local_380 + -1;
          lVar13 = local_380[-1];
          lVar2 = *local_380;
          local_2f8 = *(ulonglong *)(lVar2 + 0x18);
          if (local_458 < *(ulonglong *)(lVar2 + 0x20)) {
            local_b0 = *(void **)(lVar2 + 8);
          }
          else {
            local_b0 = (void *)(lVar2 + 8);
          }
          local_2f0 = *(ulonglong *)(lVar13 + 0x18);
          if (local_458 < *(ulonglong *)(lVar13 + 0x20)) {
            local_a8 = *(void **)(lVar13 + 8);
          }
          else {
            local_a8 = (void *)(lVar13 + 8);
          }
          local_a0 = local_2f0;
          if (local_2f8 < local_2f0) {
            local_a0 = local_2f8;
          }
          iVar7 = memcmp(local_a8,local_b0,local_a0);
          bVar4 = local_2f0 < local_2f8;
          if (iVar7 != local_470) {
            bVar4 = iVar7 < local_470;
          }
          local_478 = 0x4e20527cd3e1fa14;
          if (bVar4) {
            local_478 = 0x68193219ea354807;
          }
          local_480 = 0xdf05c681342b02c5;
        }
        else if (uVar8 == 0xda8126aca1995c1c) {
          local_430 = local_468 + (local_1a0 >> ((byte)local_348 & 0x3f));
          local_2d0 = local_440 + -1;
          local_78 = (longlong)(local_440 + -1) - (longlong)local_378 >> (local_418 & 0x3f);
          local_478 = 0x181590ce04d0ec8f;
          if (0x28 < local_78) {
            local_478 = 0xa128919ea7592001;
          }
          local_480 = 0xd7d296c5fc0ca1e2;
        }
      }
      else if (uVar8 == 0xdf3e0109732fd3c7) {
        *local_448 = *local_450;
        *local_450 = local_148;
        local_1e0 = *local_448;
        local_478 = 0x7c42b147e00b27b0;
        local_480 = 0x5825b414fe69fcfc;
      }
      else if (uVar8 == 0xe33a018c628505e4) {
        (**(code **)*local_268)(local_268,local_45c);
        local_478 = 0xd9d22f2730293977;
        local_480 = 0xc57a3f7c13fb0306;
      }
      else if (uVar8 == 0xeddee3f8df33eb87) {
        iVar7 = memcmp(local_160,local_158,local_150);
        bVar4 = local_338 < local_330;
        if (iVar7 != local_470) {
          bVar4 = iVar7 < local_470;
        }
        local_478 = 0x260967149e3edba;
        if (bVar4) {
          local_478 = 0x2186c22402bed4fa;
        }
        local_480 = 0x68592c510612e3ee;
        local_3d8 = local_420;
        local_3d0 = local_408;
      }
    }
    if ((longlong)uVar8 < 0x44d9ea735c12c0c8) {
      if ((longlong)uVar8 < 0x25c5eb35aef8f058) {
        if ((longlong)uVar8 < 0x145dc384143740d7) {
          if ((longlong)uVar8 < 0xc673cb7a9e6b613) {
            if (uVar8 == 0xf1985e61e0f3bc84) {
              local_250 = (longlong)local_1f8 - (longlong)local_200;
              local_478 = 0x24f53caa42d79dce;
              if ((longlong)local_250 < local_350) {
                local_478 = 0x3e4fe019e371757a;
              }
              local_480 = 0x616d74aeac494d14;
              local_2c0 = local_1f0;
              local_2b8 = local_1e8;
              local_248 = local_200;
              local_240 = local_1f8;
              local_238 = local_3f0;
              local_230 = local_1e8;
              local_228 = local_1f0;
            }
            else if (uVar8 == 0xff64bd61c61cf491) {
              local_368 = local_208;
              local_198 = local_210;
              local_310 = local_210 + -1;
              local_d8 = local_210[-1];
              lVar13 = *local_208;
              local_308 = *(ulonglong *)(lVar13 + 0x18);
              if (local_458 < *(ulonglong *)(lVar13 + 0x20)) {
                local_d0 = *(void **)(lVar13 + 8);
              }
              else {
                local_d0 = (void *)(lVar13 + 8);
              }
              local_300 = *(ulonglong *)(local_d8 + 0x18);
              if (local_458 < *(ulonglong *)(local_d8 + 0x20)) {
                local_c8 = *(void **)(local_d8 + 8);
              }
              else {
                local_c8 = (void *)(local_d8 + 8);
              }
              local_c0 = local_300;
              if (local_308 < local_300) {
                local_c0 = local_308;
              }
              iVar7 = memcmp(local_c8,local_d0,local_c0);
              bVar4 = local_300 < local_308;
              if (iVar7 != local_470) {
                bVar4 = iVar7 < local_470;
              }
              local_478 = 0xe9b772f3a59f9737;
              if (bVar4) {
                local_478 = 0xb299b5e59b9522cf;
              }
              local_480 = 0xd3e9b75c9ddf91af;
              local_3a8 = plVar6;
            }
          }
          else if (uVar8 == 0xc673cb7a9e6b613) {
            FUN_180114c00(local_450,local_440,local_3f0);
            local_478 = 0xf07b2aec6792e4a;
            local_480 = 0xfe9feccf268a92ce;
            local_200 = local_468;
            local_1f8 = local_100;
            local_1f0 = local_468;
            local_1e8 = local_448;
          }
          else if (uVar8 == 0xe9946195033a9d2) {
            local_f0 = local_1a0 >> (local_418 & 0x3f);
            local_1d8 = local_1a0 >> ((byte)local_348 & 0x3f);
            local_478 = 0xa2028ad8f0049abc;
            local_480 = 0x62106a1aa12ddc1;
          }
        }
        else if ((longlong)uVar8 < 0x202a40175a43fe49) {
          if (uVar8 == 0x145dc384143740d7) {
            local_420 = local_288;
            local_408 = local_290;
            lVar13 = *local_190;
            local_168 = *local_290;
            local_338 = *(ulonglong *)(local_168 + 0x18);
            if (local_458 < *(ulonglong *)(local_168 + 0x20)) {
              local_160 = *(void **)(local_168 + 8);
            }
            else {
              local_160 = (void *)(local_168 + 8);
            }
            local_330 = *(ulonglong *)(lVar13 + 0x18);
            if (local_458 < *(ulonglong *)(lVar13 + 0x20)) {
              local_158 = *(void **)(lVar13 + 8);
            }
            else {
              local_158 = (void *)(lVar13 + 8);
            }
            local_150 = local_330;
            if (local_338 < local_330) {
              local_150 = local_338;
            }
            iVar7 = memcmp(local_158,local_160,local_150);
            bVar4 = local_330 < local_338;
            if (iVar7 != local_470) {
              bVar4 = iVar7 < local_470;
            }
            local_478 = 0xf2df596bac83bbc3;
            if (bVar4) {
              local_478 = 0x3f2bfa8429f3ae0d;
            }
            local_480 = 0x1f01ba9373b05044;
            local_390 = plVar1;
          }
          else if (uVar8 == 0x1ca8105b23d23a71) {
            local_218 = local_370;
            local_220 = local_370 + 1;
            local_478 = 0xe2a4a7bbb507001e;
            if (local_220 == local_70) {
              local_478 = 0x652cd2eb312f25bb;
            }
            local_480 = 0x52ed5f93e48003af;
          }
        }
        else if (uVar8 == 0x202a40175a43fe49) {
          local_288 = local_390;
          local_3d0 = local_408 + 1;
          local_478 = 0xa1cb97b69da2a406;
          if (local_3d0 < local_440) {
            local_478 = 0xfc49ba478d39d3c5;
          }
          local_480 = 0xe81479c3990e9312;
          local_3d8 = local_390;
          local_290 = local_3d0;
        }
        else if (uVar8 == 0x246705531e62db4c) {
          local_3c0 = local_450 + 1;
          *local_448 = *local_428;
          *local_428 = local_1e0;
          local_3c8 = local_448 + 1;
          local_3b0 = local_428 + 1;
          local_478 = 0x812093c30611512;
          local_480 = 0xb84bfb0c2b588fa4;
          local_3b8 = local_468;
        }
      }
      else if ((longlong)uVar8 < 0x37c18d78d5af2614) {
        if ((longlong)uVar8 < 0x2b8232c6b461e6a9) {
          if (uVar8 == 0x25c5eb35aef8f058) {
            local_3f8 = local_260 + -1;
            local_358 = (undefined8 *)local_260[-1];
            local_260[-1] = 0;
            lVar13 = *local_468;
            *local_468 = 0;
            local_108 = (undefined8 *)*local_3f8;
            *local_3f8 = lVar13;
            local_478 = 0x14b4707983371867;
            if (local_108 == (undefined8 *)0x0) {
              local_478 = 0x16bf19993c5d57d8;
            }
            local_480 = 0xbc7bfbbf19c73f8d;
          }
          else if (uVar8 == 0x279f9a15884075ab) {
            local_380 = local_270;
            local_478 = 0x6117bf01d1a46d36;
            if (local_468 < local_270) {
              local_478 = 0xf5eacb01b81c71e;
            }
            local_480 = 0xd60b4b990fba27f4;
          }
        }
        else if (uVar8 == 0x2b8232c6b461e6a9) {
          local_410 = local_1a8 + -1;
          local_478 = 0x7492ea0548173216;
          if (local_469 != '\0') {
            local_478 = 0x76a57c8de7e2fab2;
          }
          local_480 = 0xe235eeb38460300e;
        }
        else if (uVar8 == 0x2e2543d4fdc77794) {
          (**(code **)*local_118)(local_118,local_45c);
          local_478 = 0x5547b02d9cf67596;
          local_480 = 0xcdb9b24c01ccb902;
        }
      }
      else if ((longlong)uVar8 < 0x3cda198d584b288c) {
        if (uVar8 == 0x3a5ec5af38400698) {
          iVar7 = memcmp(local_d0,local_c8,local_c0);
          bVar4 = local_308 < local_300;
          if (iVar7 != local_470) {
            bVar4 = iVar7 < local_470;
          }
          local_478 = 0xdba6e0fa99040c20;
          if (bVar4) {
            local_478 = 0xa0c402eb409aefb7;
          }
          local_480 = 0xc57cc0049a36c57;
          local_3a0 = local_368;
          local_398 = local_198;
        }
        else if (uVar8 == 0x3bf034e137b5d8e8) {
          local_478 = 0xe6ea6a80aef5cd31;
          if (8 < local_140) {
            local_478 = 0xf4ee0ccdd5a21b7d;
          }
          local_480 = 0xd12be7f87b5aeb25;
          local_260 = local_3f8;
        }
        else if (uVar8 == 0x37c18d78d5af2614) {
          return;
        }
      }
      else if (uVar8 == 0x3cda198d584b288c) {
        local_478 = 0x36dffd5524c09436;
        local_480 = 0x556d4568756a71ef;
        local_1d0 = local_380;
        local_1c8 = local_3e8;
        local_1c0 = local_380;
        local_1b8 = local_3e8;
      }
      else if (uVar8 == 0x3f4c35f617874531) {
        local_3e8 = local_258 + 1;
        local_478 = 0x8f76fb45114c2be1;
        if (local_3e8 < local_440) {
          local_478 = 0x10237bc732343b37;
        }
        local_480 = 0xb3ace2c84907036d;
      }
      goto LAB_180114d40;
    }
    if ((longlong)uVar8 < 0x63b2b83d51aae5d9) {
      if ((longlong)uVar8 < 0x4fe36e5a9e8b239f) {
        if ((longlong)uVar8 < 0x49dfee7504ac3714) {
          if (uVar8 == 0x44d9ea735c12c0c8) {
            iVar7 = memcmp(local_90,local_88,local_80);
            bVar4 = local_2e0 < local_2d8;
            if (iVar7 != local_470) {
              bVar4 = iVar7 < local_470;
            }
            local_478 = 0xbea0c240c976ba31;
            if (bVar4) {
              local_478 = 0xbd36ee3b86bad78c;
            }
            local_480 = 0x81ecf7b6def1ff00;
            local_258 = local_3e8;
          }
          else if (uVar8 == 0x45984804ee9ed0da) {
            local_468 = local_228;
            local_440 = local_230;
            local_68 = local_238;
            local_60 = local_240;
            local_378 = local_248;
            local_1a0 = local_250;
            local_478 = 0x3ce7f78b40a2d40e;
            if ((longlong)local_238 < (longlong)local_438) {
              local_478 = 0xe8ff973eb10821c0;
            }
            local_480 = 0xe666d127e13b8812;
          }
        }
        else if (uVar8 == 0x49dfee7504ac3714) {
          local_428 = local_3d0;
          local_398 = local_48;
          local_450 = local_3d8;
          local_478 = 0xbf2684f8fb0814ad;
          if (local_468 < local_48) {
            local_478 = 0xecd1f772342d63dc;
          }
          local_480 = 0x13b54a13f231974d;
          local_3a0 = local_190;
          local_210 = local_398;
          local_208 = local_3a0;
        }
        else if (uVar8 == 0x4d7d7810d694dacc) {
          local_3c0 = local_450 + -1;
          *local_328 = local_450[-1];
          local_450[-1] = local_2c8;
          local_478 = 0xc71a8c0f1c80f46d;
          local_480 = 0x77437e3f07b96edb;
          local_3c8 = local_328;
          local_3b8 = local_410;
          local_3b0 = local_428;
        }
      }
      else if ((longlong)uVar8 < 0x60539515cc47676a) {
        if (uVar8 == 0x4fe36e5a9e8b239f) {
          (**(code **)*local_98)(local_98,local_45c);
          local_478 = 0x1aacc8ec4ed95475;
          local_480 = 0xa90fb24f29cc9d1c;
        }
        else if (uVar8 == 0x5f2294b74f38386e) {
          local_70 = local_2b8;
          local_388 = local_2c0;
          local_220 = local_2c0 + 1;
          local_478 = 0x49dfe164a7ddad1d;
          if (local_220 == local_2b8) {
            local_478 = 0xce57943423f588b8;
          }
          if (local_2c0 == local_2b8) {
            local_478 = 0xce57943423f588b8;
          }
          local_480 = 0xf996194cf65aaeac;
          local_218 = local_2c0;
        }
      }
      else if (uVar8 == 0x60539515cc47676a) {
        local_478 = 0x46522542bc4a6910;
        local_480 = 0x61cdbf57340a1cbb;
        local_270 = local_430;
      }
      else if (uVar8 == 0x617002b9064ab360) {
        local_478 = 0xf146e5aa685ca334;
        if (local_468 < local_310) {
          local_478 = 0xa2b19620a779d445;
        }
        local_480 = 0x5dd52b41616520d4;
        local_3a0 = local_3a8;
        local_398 = local_310;
        local_210 = local_310;
        local_208 = local_3a8;
      }
    }
    else if ((longlong)uVar8 < 0x6dd4dca9189f613a) {
      if ((longlong)uVar8 < 0x64a4af666815d664) {
        if (uVar8 == 0x63b2b83d51aae5d9) {
          local_48 = local_1c0;
          local_190 = local_1d0;
          local_478 = 0xe3d3dafbbf921c2;
          if (local_1b8 < local_440) {
            local_478 = 0x53bf105eab625601;
          }
          local_480 = 0x47e2d3dabf5516d6;
          local_3d8 = local_1c8;
          local_3d0 = local_1b8;
          local_290 = local_1b8;
          local_288 = local_1c8;
        }
        else if (uVar8 == 0x6431a12059d556d6) {
          local_268 = (undefined8 *)*local_1b0;
          local_478 = 0xcdbf76fff3e0da72;
          if (local_268 == (undefined8 *)0x0) {
            local_478 = 0x322d6728b2b7e5e7;
          }
          *local_1b0 = local_3e0;
          local_480 = 0x2e8577739165df96;
        }
      }
      else {
        if (uVar8 == 0x64a4af666815d664) {
          local_478 = 0xf705270a18038fbc;
          local_480 = 0xd72f671d424071f5;
          goto LAB_180116c5c;
        }
        if (uVar8 == 0x6a39ba204ff10e54) {
          local_478 = 0xac7abda33494c311;
          if (local_420 == local_408) {
            local_478 = 0xc5122008432d57;
          }
          local_480 = 0x6461bd466056fb33;
        }
      }
    }
    else if ((longlong)uVar8 < 0x72f63b6bbd7074e2) {
      if (uVar8 == 0x6dd4dca9189f613a) {
        lVar13 = *local_320;
        *local_320 = local_d8;
        *local_310 = lVar13;
        local_478 = 0xeb22b9cee6ecf0b;
        local_480 = 0x6fc22925e8247c6b;
        local_3a8 = local_320;
      }
      else if (uVar8 == 0x718c4682eaebc9c8) {
        (**(code **)*local_110)(local_110,local_45c);
        local_478 = 0xb84489299c9cb63;
        local_480 = 0xc4071f73edb0a25b;
      }
    }
    else if (uVar8 == 0x72f63b6bbd7074e2) {
      local_280 = local_58 + 2;
      local_478 = 0x29662ee6b0fa0c04;
      local_480 = 0xfadab2bd5499c5df;
      local_278 = local_370;
    }
    else if (uVar8 == 0x76fa075b5b5581e3) {
      uVar12 = local_78 + local_438 >> (local_418 & 0x3f);
      lVar13 = uVar12 << ((byte)local_438 & 0x3f);
      FUN_1801179d0(local_468,local_468 + uVar12,local_468 + lVar13);
      FUN_1801179d0(local_430 + (local_400 - uVar12),local_430,local_430 + uVar12);
      plVar1 = local_2d0 + (local_400 - uVar12);
      FUN_1801179d0(local_2d0 + (local_400 - lVar13),plVar1);
      FUN_1801179d0(local_468 + uVar12,local_430,plVar1);
      local_478 = 0xa4965b59b8f6ae0;
      local_480 = 0x6a1af0a057c80d8a;
    }
  } while( true );
}



void FUN_180117170(longlong param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong _Size;
  ulonglong local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  int local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_80;
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;

  local_f8 = 0xd316185389441f9c;
  local_100 = 0x2ed83111d7ae696d;
LAB_180117210:
  do {
    while( true ) {
      uVar8 = local_f8 ^ 0x602f0d4f0b4a635b;
      uVar6 = local_f8 ^ local_100;
      local_100 = local_100 ^ 0x602f0d4f0b4a635b;
      local_f8 = uVar8;
      if ((longlong)uVar6 < -0x231d6bda115890f) break;
      if ((longlong)uVar6 < 0x2e24fe2cd5d178a2) {
        if (uVar6 == 0xfdce29425eea76f1) {
          local_b8 = -1;
          local_ec = 0;
          local_e0 = 0xf;
          local_e8 = 1;
          local_f0 = 1;
          local_d8 = param_3 - 1;
          local_d0 = (longlong)local_d8 >> 1;
          local_f8 = 0x1ec568f335ceb1c2;
          if ((longlong)local_d0 <= (longlong)param_2) {
            local_f8 = 0x5564cb44f619e54c;
          }
          local_100 = 0xb1739363e607ed96;
          local_a8 = param_2;
          local_a0 = param_2;
        }
        else if (uVar6 == 0xff55e2db03793e7f) {
          (**(code **)*local_58)(local_58,local_f0);
          local_f8 = 0x7a73ffddac7958f4;
          local_100 = 0xa28ced4ca72494b0;
LAB_18011781f:
          local_c8 = local_d8;
        }
        else if (uVar6 == 0x16453bbabe1461c) {
          *local_78 = 0;
          local_48 = *(undefined8 **)(param_1 + local_98 * 8);
          *(longlong *)(param_1 + local_98 * 8) = local_70;
          local_f8 = 0x18763a9ad59832e1;
          if (local_48 != (undefined8 *)0x0) {
            local_f8 = 0xa6830c53abc0636e;
          }
          local_100 = 0x55c31b8465d1ee33;
        }
      }
      else if ((longlong)uVar6 < 0x591fdfa124466828) {
        if (uVar6 == 0x2e24fe2cd5d178a2) {
          local_98 = local_b0;
          local_80 = local_b0 + local_b8 >> ((byte)local_e8 & 0x3f);
          local_78 = (undefined8 *)(param_1 + local_80 * 8);
          local_70 = *(longlong *)(param_1 + local_80 * 8);
          lVar1 = *param_4;
          uVar6 = *(ulonglong *)(lVar1 + 0x18);
          if (local_e0 < *(ulonglong *)(lVar1 + 0x20)) {
            pvVar9 = *(void **)(lVar1 + 8);
            uVar8 = *(ulonglong *)(local_70 + 0x18);
            if (*(ulonglong *)(local_70 + 0x20) <= local_e0) goto LAB_1801175c4;
LAB_18011784a:
            pvVar7 = *(void **)(local_70 + 8);
          }
          else {
            pvVar9 = (void *)(lVar1 + 8);
            uVar8 = *(ulonglong *)(local_70 + 0x18);
            if (local_e0 < *(ulonglong *)(local_70 + 0x20)) goto LAB_18011784a;
LAB_1801175c4:
            pvVar7 = (void *)(local_70 + 8);
          }
          uVar10 = uVar6;
          if (uVar8 <= uVar6) {
            uVar10 = uVar8;
          }
          iVar5 = memcmp(pvVar7,pvVar9,uVar10);
          bVar4 = uVar8 < uVar6;
          if (iVar5 != local_ec) {
            bVar4 = iVar5 < local_ec;
          }
          local_f8 = 0x6833878ed016c4d6;
          if (!bVar4) {
            local_f8 = 0xe2f8897acca5106c;
          }
          local_100 = 0x6957d4357bf782ca;
          local_c0 = local_b0;
        }
        else if (uVar6 == 0x4db5211eb049dcd2) {
          local_f8 = 0x591d21bd8be43d06;
          if (local_80 <= param_2) {
            local_f8 = 0xfc9682dee967d702;
          }
          local_100 = 0x7739df915e3545a4;
          local_c0 = local_80;
          local_b0 = local_80;
        }
      }
      else if (uVar6 == 0x591fdfa124466828) {
        (**(code **)*local_60)(local_60,local_f0);
        local_f8 = 0xdb9348514c244360;
        local_100 = 0x495e61463a05f629;
      }
      else if (uVar6 == 0x59e2b01cab9f86a9) {
        (**(code **)*local_50)(local_50,local_f0);
        local_f8 = 0x7d5f4e4094baaa4c;
        local_100 = 0xdde1500d4618f94e;
      }
    }
    if ((longlong)uVar6 < -0x5049046f2c36a3ac) {
      if ((longlong)uVar6 < -0x6d32d6e889de4ab7) {
        if (uVar6 == 0x80efc11eb4ddc3b9) {
          uVar3 = *(undefined8 *)(param_1 + local_d8 * 8);
          *(undefined8 *)(param_1 + local_d8 * 8) = 0;
          local_58 = *(undefined8 **)(param_1 + local_d0 * 8);
          *(undefined8 *)(param_1 + local_d0 * 8) = uVar3;
          local_f8 = 0x80e6ea89fae72805;
          if (local_58 != (undefined8 *)0x0) {
            local_f8 = 0xa74c1ac3f2c3da3e;
          }
          local_100 = 0x5819f818f1bae441;
          goto LAB_18011781f;
        }
        if (uVar6 == 0x8baf5d4fb75292a6) {
          lVar1 = *param_4;
          *param_4 = 0;
          local_50 = *(undefined8 **)(param_1 + local_c0 * 8);
          *(longlong *)(param_1 + local_c0 * 8) = lVar1;
          local_f8 = 0x29793caee18739cb;
          if (local_50 != (undefined8 *)0x0) {
            local_f8 = 0xd02592ff98baec60;
          }
          local_100 = 0x89c722e333256ac9;
        }
      }
      else if (uVar6 == 0x92cd29177621b549) {
        local_a8 = local_68;
        local_f8 = 0x40ae7046805d11be;
        if ((longlong)local_d0 <= (longlong)local_68) {
          local_f8 = 0xb0fd3f1438a4530;
        }
        local_100 = 0xef188bd653944dea;
        local_a0 = local_a8;
      }
      else if (uVar6 == 0xa0be1e4dd2a25302) {
        return;
      }
      goto LAB_180117210;
    }
    if ((longlong)uVar6 < -0x1be8a7d8efe1f726) {
      if (uVar6 == 0xafb6fb90d3c95c54) {
        uVar8 = local_a8 << ((byte)local_e8 & 0x3f);
        lVar1 = *(longlong *)(param_1 + (uVar8 + 2) * 8);
        lVar2 = *(longlong *)(param_1 + 8 + uVar8 * 8);
        uVar6 = *(ulonglong *)(lVar2 + 0x18);
        if (local_e0 < *(ulonglong *)(lVar2 + 0x20)) {
          pvVar9 = *(void **)(lVar2 + 8);
          uVar10 = *(ulonglong *)(lVar1 + 0x18);
          if (*(ulonglong *)(lVar1 + 0x20) <= local_e0) goto LAB_18011766d;
LAB_1801178e4:
          pvVar7 = *(void **)(lVar1 + 8);
        }
        else {
          pvVar9 = (void *)(lVar2 + 8);
          uVar10 = *(ulonglong *)(lVar1 + 0x18);
          if (local_e0 < *(ulonglong *)(lVar1 + 0x20)) goto LAB_1801178e4;
LAB_18011766d:
          pvVar7 = (void *)(lVar1 + 8);
        }
        _Size = uVar10;
        if (uVar6 < uVar10) {
          _Size = uVar6;
        }
        iVar5 = memcmp(pvVar7,pvVar9,_Size);
        bVar4 = uVar10 < uVar6;
        if (iVar5 != local_ec) {
          bVar4 = iVar5 < local_ec;
        }
        local_68 = uVar8 | local_e8;
        if (!bVar4) {
          local_68 = uVar8 + 2;
        }
        uVar3 = *(undefined8 *)(param_1 + local_68 * 8);
        *(undefined8 *)(param_1 + local_68 * 8) = 0;
        local_60 = *(undefined8 **)(param_1 + local_a8 * 8);
        *(undefined8 *)(param_1 + local_a8 * 8) = uVar3;
        local_f8 = 0x59d858f3cd4541c5;
        if (local_60 != (undefined8 *)0x0) {
          local_f8 = 0x920aae459f229ca4;
        }
        local_100 = 0xcb1571e4bb64f48c;
      }
      else if (uVar6 == 0xd8ff12910b5dcc44) {
        local_f8 = 0xf7cb16e7a8d8dc79;
        if ((longlong)local_c8 <= (longlong)param_2) {
          local_f8 = 0x5240b584ca5b367d;
        }
        local_100 = 0xd9efe8cb7d09a4db;
        local_c0 = local_c8;
        local_b0 = local_c8;
      }
    }
    else if (uVar6 == 0xe4175827101e08da) {
      local_c8 = local_a0;
      local_f8 = 0x2e47443c34cf6013;
      if ((local_e8 & param_3) != 0 || local_d0 != local_a0) {
        local_f8 = 0x765797b38b4f6fee;
      }
      local_100 = 0xaea885228012a3aa;
    }
    else if (uVar6 == 0xf34017d7ce118d5d) {
      (**(code **)*local_48)(local_48,local_f0);
      local_f8 = 0x1448c2f60aaaa4a4;
      local_100 = 0x59fde3e8bae37876;
    }
  } while( true );
}



void FUN_1801179d0(longlong *param_1,longlong *param_2,longlong *param_3)

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

  local_b8 = 0x19928ccfb897fe65;
  local_c0 = 0xe1bc02319e199cf9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_b8 ^ local_c0;
          local_c0 = local_c0 ^ 0xfdeb509324fb2498;
          if ((longlong)uVar3 < -0x7d17101d9719d64) break;
          if (uVar3 == 0x3f551c6819966e5e) {
            *param_2 = local_68;
            *param_1 = local_a0;
            local_b8 = 0x384b391fa706f424;
            local_c0 = 0x86b5a9e0b9228ffd;
          }
          else if (uVar3 == 0x184b083e4a15f68e) {
            *param_2 = local_70;
            *param_1 = local_a8;
            local_80 = *param_2;
            local_98 = *(void **)(local_80 + 8);
            local_88 = *(ulonglong *)(local_80 + 0x18);
            local_90 = *(ulonglong *)(local_80 + 0x20);
            local_b8 = 0xca6bf379ddcf83c;
            local_c0 = 0xb04d03c721648303;
          }
          else {
            local_b8 = local_b8 ^ 0xfdeb509324fb2498;
            if (uVar3 == 0xf82e8efe268e629c) {
              local_c4 = 0;
              local_b0 = 0xf;
              local_a8 = *param_2;
              local_70 = *param_1;
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
              local_b8 = 0xba53299183700924;
              if (!bVar1) {
                local_b8 = 0x1ef39d5f75dd8495;
              }
              local_c0 = 0xa21821afc965ffaa;
              local_80 = local_a8;
            }
          }
        }
        if (uVar3 != 0xbcbe8d31297403cd) break;
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
        local_b8 = 0x7d2a141c60a5fbc7;
        if (!bVar1) {
          local_b8 = 0xfc81988b6717ee40;
        }
        local_c0 = 0x427f087479339599;
      }
      if (uVar3 != 0xbcebbcf0bcb87b3f) break;
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
      local_b8 = 0xef487f37ebf8a911;
      if (!bVar1) {
        local_b8 = 0xed0862f9dca8d105;
      }
      local_c0 = 0x53f6f206c28caadc;
    }
    local_b8 = local_b8 ^ 0xfdeb509324fb2498;
  } while (uVar3 != 0xbefe90ff1e247bd9);
  return;
}



longlong FUN_180117df0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
  longlong local_220;
  longlong local_210;
  ulonglong local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  ulonglong local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  ulonglong local_160;
  ulonglong local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  ulonglong local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  ulonglong local_100;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  ulonglong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;

  local_290 = 0x87f40b4641438d66;
  local_298 = 0x14487b4bf7f9f679;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar10 = local_290 ^ 0x5b74debbdfa8a0cd;
                uVar9 = local_290 ^ local_298;
                local_298 = local_298 ^ 0x5b74debbdfa8a0cd;
                local_290 = uVar10;
                if ((longlong)uVar9 < -0x287668749f5dd31) break;
                if ((longlong)uVar9 < 0x34193c9e8dacbb83) {
                  if ((longlong)uVar9 < 0x147ca2cbe2a0acac) {
                    if ((longlong)uVar9 < 0x8fab9cf8f1cc629) {
                      if (uVar9 == 0xfd789978b60a22cf) {
                        local_158 = local_88 + local_210;
                        local_150 = local_b8;
                        local_290 = 0x9a04d89fd83ec681;
                        local_298 = 0x1aefa4a78d3b7b05;
                      }
                      else if (uVar9 == 0x3aaf19393f8ce6c) {
                        local_290 = 0xe07171be814f5cf8;
                        local_298 = 0x5ed4331378908b2f;
                        local_138 = local_1f8;
                        local_130 = local_1f0;
                      }
                      else if (uVar9 == 0x74589f238d31476) {
                        local_290 = 0xff923b0678393162;
                        if (local_238 < 0x200) {
                          local_290 = 0xe3e95e69972a3064;
                        }
                        local_298 = 0x8144a1cdc5187264;
                      }
                    }
                    else if (uVar9 == 0x8fab9cf8f1cc629) {
                      (**(code **)*local_80)(local_80,1);
                      local_290 = 0xb976c20722f8a4ba;
                      local_298 = 0x179ce51d4a11be6f;
                    }
                    else if (uVar9 == 0x916081c8603763c) {
                      lVar11 = local_120 << (local_280 & 0x3f);
                      lVar12 = local_120 << (local_280 & 0x3f);
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
                      local_120 = local_120 + local_228;
                      local_290 = 0xd39754d5259d3f13;
                      if (local_120 != local_188) {
                        local_290 = 0xfb45faa3600543d8;
                      }
                      local_298 = 0xf253f2bfe60635e4;
                    }
                    else if (uVar9 == 0xe37c3985f6e7093) {
                      local_b8 = (undefined8 *)local_70[-1];
                      local_290 = 0x7fd3ced66fe9f42e;
                      if (0x1f < (longlong)local_90 + (local_270 - (longlong)local_b8)) {
                        local_290 = 0x9feafefa79fb4f6a;
                      }
                      local_298 = 0x82ab57aed9e3d6e1;
                    }
                  }
                  else if ((longlong)uVar9 < 0x21c4a66ac39b0af7) {
                    if (uVar9 == 0x147ca2cbe2a0acac) {
                      local_290 = 0x38086042949a7664;
                      if (local_281 == '\0') {
                        local_290 = 0xc9413129786a799a;
                      }
                      local_298 = 0xab8bd89aee276f5d;
                      local_128 = local_268;
                    }
                    else if (uVar9 == 0x1547e78a90921ef6) {
                      uVar3 = *local_170;
                      *local_170 = 0;
                      *local_168 = uVar3;
                      local_170 = local_170 + 1;
                      local_290 = 0x1dfe168a6f6958e1;
                      if (local_170 != param_2) {
                        local_290 = 0xcbaf20546cf24ade;
                      }
                      local_168 = local_168 + 1;
                      local_298 = 0xdee8c7defc605428;
                    }
                    else if (uVar9 == 0x1d41a954a018998b) {
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_258);
                    }
                  }
                  else if (uVar9 == 0x21c4a66ac39b0af7) {
                    local_290 = 0x5325037d91096540;
                    if (local_180 != local_188) {
                      local_290 = 0x3cbcb93f71c1817f;
                    }
                    local_298 = 0x9033d22902006989;
                    local_1d8 = local_a8;
                    local_1d0 = local_a0;
                  }
                  else if (uVar9 == 0x2ced18a0c9f095e8) {
                    local_290 = 0x1c570b934d7b3462;
                    if (local_198 != local_1b0) {
                      local_290 = 0x5a63ccb032c3d7d5;
                    }
                    local_298 = 0xdf41dac7de7238ab;
                    local_1e8 = local_d8;
                    local_1e0 = local_d0;
                  }
                  else if (uVar9 == 0x30560067e358a6da) {
                    local_110 = (undefined8 *)*local_248;
                    local_290 = 0x5115d8d69e82eddf;
                    local_298 = 0x24e01817e90658fc;
                  }
                }
                else if ((longlong)uVar9 < 0x62adffa452324200) {
                  if ((longlong)uVar9 < 0x3f3d9cd80a5563ca) {
                    if (uVar9 == 0x34193c9e8dacbb83) {
                      local_90 = local_118;
                      local_158 = *local_1b8 - (longlong)local_118;
                      local_290 = 0xc862b98042c0c978;
                      if (local_158 < 0x1000) {
                        local_290 = 0x46be062048ab046f;
                      }
                      local_298 = 0xc6557a181daeb9eb;
                      local_150 = local_118;
                      local_88 = local_158;
                      local_70 = local_90;
                    }
                    else if (uVar9 == 0x34199ec0e9ab6cf6) {
                      lVar11 = ((longlong)local_240 + (local_270 - (longlong)local_230) & local_270) + local_220;
                      local_290 = 0x3fb5217577eafe7f;
                      if ((undefined8 *)((longlong)local_268 + lVar11) <= local_278) {
                        local_290 = 0xac07d6bb0e7e7543;
                      }
                      if ((undefined8 *)(lVar11 + (longlong)local_278) <= local_268) {
                        local_290 = 0xac07d6bb0e7e7543;
                      }
                      local_298 = 0x933a4a63042b1689;
                      local_1d8 = local_268;
                      local_1d0 = local_278;
                    }
                  }
                  else if (uVar9 == 0x3f3d9cd80a5563ca) {
                    local_188 = local_180 & local_208;
                    local_a8 = (undefined8 *)((local_188 << (local_280 & 0x3f)) + (longlong)local_268);
                    local_a0 = (undefined8 *)((local_188 << (local_280 & 0x3f)) + (longlong)local_278);
                    local_290 = 0x8f969d829c77104f;
                    local_298 = 0x8680959e1a746673;
                    local_120 = local_258;
                  }
                  else if (uVar9 == 0x40618bcc27ed4506) {
                    local_1a8 = local_190 & local_208;
                    local_c8 = (undefined8 *)((local_1a8 << (local_280 & 0x3f)) + (longlong)local_268);
                    local_c0 = (undefined8 *)((local_1a8 << (local_280 & 0x3f)) + (longlong)local_278);
                    local_290 = 0x4635142112cd72d2;
                    local_298 = 0x2838d6122ebb721c;
                    local_160 = local_258;
                  }
                  else if (uVar9 == 0x528b5873c6732ec2) {
                    uVar9 = (longlong)local_1c0 + (local_270 - (longlong)local_230);
                    local_190 = (uVar9 >> (local_280 & 0x3f)) + local_260;
                    local_290 = 0x58db733fe4adbc90;
                    if (local_1c8 <= uVar9) {
                      local_290 = 0x9d018d4f8581547d;
                    }
                    local_298 = 0x5b7182ac775572fc;
                    local_1f8 = local_268;
                    local_1f0 = local_278;
                  }
                }
                else if ((longlong)uVar9 < 0x75f5c0c17784b523) {
                  if (uVar9 == 0x62adffa452324200) {
                    local_200 = (undefined8 *)FUN_1801d61c8(local_1a0);
                    local_290 = 0xfc4d0ac1f3af4b47;
                    local_298 = 0x77028d2b930ce85d;
                  }
                  else if (uVar9 == 0x62cae9b3964d16c7) {
                    uVar9 = (longlong)local_240 + (local_270 - (longlong)local_230);
                    local_180 = (uVar9 >> (local_280 & 0x3f)) + local_260;
                    local_290 = 0x718cf2983d8fb0f5;
                    if (local_1c8 <= uVar9) {
                      local_290 = 0xe91a074ea7e534f5;
                    }
                    local_298 = 0xdd03998e4e4e5803;
                    local_1d8 = local_268;
                    local_1d0 = local_278;
                  }
                  else if (uVar9 == 0x6e0dc2333c7600ce) {
                    lVar11 = local_160 << (local_280 & 0x3f);
                    lVar12 = local_160 << (local_280 & 0x3f);
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
                    local_160 = local_160 + local_228;
                    local_290 = 0x901d895852d21c03;
                    if (local_160 != local_1a8) {
                      local_290 = 0x6e0e9c61d671a4b9;
                    }
                    local_298 = 0x35e52ea07a477;
                  }
                }
                else if (uVar9 == 0x75f5c0c17784b523) {
                  local_178 = local_110;
                  local_290 = 0xe2a7451afc31cf0d;
                  if (param_2 != local_110) {
                    local_290 = 0xb6bb10d39cbce5ab;
                  }
                  local_298 = 0x21b1944e6f38c3c4;
                  local_68 = local_178;
                }
                else if (uVar9 == 0x7ae6204fa71dcc15) {
                  uVar3 = *local_148;
                  *local_148 = 0;
                  *(undefined8 *)(local_140 + 8) = uVar3;
                  local_148 = local_148 + 1;
                  local_290 = 0x250d4b3b98498485;
                  if (local_148 != local_68) {
                    local_290 = 0x9cfdba20ac5d4459;
                  }
                  local_140 = local_140 + 8;
                  local_298 = 0xe61b9a6f0b40884c;
                }
                else if (uVar9 == 0x7ed69acbbd214306) {
                  local_290 = 0xc60ff592deedc88;
                  if (0x1ffffffffffffffb < local_238) {
                    local_290 = 0x4750b49b49fa14a5;
                  }
                  local_298 = 0x8ad7658fdc9b3b13;
                }
              }
              if (-0x59b1744cb6d7712f < (longlong)uVar9) break;
              if ((longlong)uVar9 < -0x6fe128f5472a478c) {
                if ((longlong)uVar9 < -0x7adde988134e1082) {
                  if (uVar9 == 0x80eb7c385505bd84) {
                    thunk_FUN_1801f42e0(local_150,local_158);
                    local_290 = 0xd1fe3215dcb43417;
                    local_298 = 0x45242a7f06641f46;
                  }
                  else if (uVar9 == 0x84f20c0c8a32ad8c) {
                    local_98 = (undefined8 *)*local_248;
                    local_290 = 0x20ccd3722bee25e;
                    if (local_78 != local_98) {
                      local_290 = 0x9951da26ed4bbf71;
                    }
                    local_298 = 0x3615f1a9af1259dd;
                    local_118 = local_78;
                    local_108 = local_78;
                  }
                }
                else if (uVar9 == 0x85221677ecb1ef7e) {
                  local_290 = 0xe76cf3824731d5f3;
                  local_298 = 0x9d8ad3cde02c19e6;
                  local_148 = local_1e8;
                  local_140 = local_1e0;
                }
                else if (uVar9 == 0x86b79ad6f175e79b) {
                  lVar11 = FUN_1801d61c8(local_1a0 + local_210);
                  local_200 = (undefined8 *)(local_210 + lVar11 & 0xffffffffffffffe0);
                  local_200[-1] = lVar11;
                  local_290 = 0xbda230d978696dda;
                  local_298 = 0x36edb73318cacec0;
                }
                else if (uVar9 == 0x8b4f87ea60a3a31a) {
                  local_278 = local_200;
                  local_250 = (longlong)local_200 + local_e8;
                  uVar3 = *param_3;
                  *param_3 = 0;
                  *(undefined8 *)((longlong)local_200 + local_e8) = uVar3;
                  local_b0 = (undefined8 *)*local_248;
                  local_268 = (undefined8 *)*param_1;
                  local_281 = local_268 == param_2;
                  local_290 = 0x184e2d7be13cd8c5;
                  if (param_2 != local_b0) {
                    local_290 = 0xaa7c04034ab4fabb;
                  }
                  local_298 = 0xc328fb0039c7469;
                  local_230 = local_268;
                }
              }
              else if ((longlong)uVar9 < -0x6c438ff2494584e1) {
                if (uVar9 == 0x901ed70ab8d5b874) {
                  local_290 = 0xa1306ac53e0b877b;
                  if (local_190 != local_1a8) {
                    local_290 = 0x92cc9b314eabefcd;
                  }
                  local_298 = 0x91666aa2dd5321a1;
                  local_1f8 = local_c8;
                  local_1f0 = local_c0;
                }
                else if (uVar9 == 0x935272b2ec8afcd0) {
                  local_1a0 = local_238 << (local_280 & 0x3f);
                  local_290 = 0xe83fc91e36b30ff1;
                  if (local_238 != local_258) {
                    local_290 = 0x6435c7066ec3b89d;
                  }
                  local_298 = 0x63704ef45610aceb;
                  local_200 = (undefined8 *)0x0;
                }
                else if (uVar9 == 0x9383b8d87abd1939) {
                  local_78 = local_128;
                  local_290 = 0x3ecb841f593113cb;
                  if (local_128 != (undefined8 *)0x0) {
                    local_290 = 0x2ee3907909d39516;
                  }
                  local_298 = 0xaa119c7583e1389a;
                }
              }
              else if (uVar9 == 0x93bc700db6ba7b1f) {
                local_270 = 0xfffffffffffffff8;
                local_208 = 0x3ffffffffffffffc;
                local_210 = 0x27;
                local_1c8 = 0x98;
                local_280 = 3;
                local_220 = 8;
                local_228 = 4;
                local_258 = 0;
                local_260 = 1;
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
                local_290 = 0xc2c0bfc2f19296c9;
                if (local_238 < 0x2000000000000000) {
                  local_290 = 0xa4bbf6dc51f37df6;
                }
                local_298 = 0x37e9846ebd798126;
                local_240 = param_2;
                local_1c0 = param_2;
              }
              else if (uVar9 == 0x970a849df384266f) {
                uVar9 = (longlong)local_178 + (local_270 - (longlong)local_240);
                local_198 = (uVar9 >> (local_280 & 0x3f)) + local_260;
                local_290 = 0xb94c86319e0bdaca;
                if (0x107 < uVar9) {
                  local_290 = 0xdab3a2b4c3c32789;
                }
                local_298 = 0x3c6e904672ba35b4;
                local_1e0 = local_250;
                local_1e8 = param_2;
              }
              else if (uVar9 == 0x94da186adad02b51) {
                *param_1 = (longlong)local_278;
                *local_248 = (longlong)(local_278 + local_e0);
                *local_1b8 = (longlong)(local_278 + local_238);
                return local_250;
              }
            }
            if (-0x398ff01c0d2bd980 < (longlong)uVar9) break;
            if ((longlong)uVar9 < -0x50bbd470bda61954) {
              if (uVar9 == 0xa64e8bb349288ed2) {
                local_290 = 0x5f4c8d308f4944b5;
                if (local_281 == '\0') {
                  local_290 = 0x783215823ebedf54;
                }
                local_298 = 0x2ab94df1f8cdf196;
                local_110 = local_b0;
              }
              else if (uVar9 == 0xac8f6b1673c1e8f6) {
                local_290 = 0x7948db701a6f0fa;
                local_298 = 0x12d36a3d9134ee0c;
                local_170 = local_1d8;
                local_168 = local_1d0;
              }
              else if (uVar9 == 0xaeea271a68e91ad5) {
                local_108 = local_60 + 1;
                local_290 = 0xb39c0403bfcb3846;
                if (local_108 != local_98) {
                  local_290 = 0xe8419e40e0842129;
                }
                local_298 = 0x4705b5cfa2ddc785;
              }
            }
            else if (uVar9 == 0xaf442b8f4259e6ac) {
              local_60 = local_108;
              local_80 = (undefined8 *)*local_108;
              local_290 = 0x907bcaafc7c8e8a7;
              if (local_80 != (undefined8 *)0x0) {
                local_290 = 0x366b547a203d345b;
              }
              local_298 = 0x3e91edb5af21f272;
            }
            else if (uVar9 == 0xbea542adf9dfd7d7) {
              uVar3 = *local_138;
              *local_138 = 0;
              *local_130 = uVar3;
              local_138 = local_138 + 1;
              local_290 = 0xa97d1f73e4ca0880;
              if (local_138 != param_2) {
                local_290 = 0x278e5db9fe4d798d;
              }
              local_130 = local_130 + 1;
              local_298 = 0x992b1f140792ae5a;
            }
            else if (uVar9 == 0xc316d15493090cc9) {
              local_128 = (undefined8 *)*param_1;
              local_290 = 0xbef51663d3d1dd11;
              local_298 = 0x2d76aebba96cc428;
            }
          }
          if (-0x27cfc3a5bc25481b < (longlong)uVar9) break;
          if (uVar9 == 0xc6700fe3f2d42681) {
            lVar11 = ((longlong)local_1c0 + (local_270 - (longlong)local_230) & local_270) + local_220;
            local_290 = 0x143f09ec0a5110cf;
            if ((undefined8 *)((longlong)local_268 + lVar11) <= local_278) {
              local_290 = 0x57f473b3be449ba5;
            }
            if ((undefined8 *)(lVar11 + (longlong)local_278) <= local_268) {
              local_290 = 0x57f473b3be449ba5;
            }
            local_298 = 0x1795f87f99a9dea3;
            local_1f8 = local_268;
            local_1f0 = local_278;
          }
          else if (uVar9 == 0xd0c88f6126fb332a) {
            local_1b0 = local_198 & local_208;
            local_d8 = (undefined8 *)((local_1b0 << (local_280 & 0x3f)) + (longlong)param_2);
            local_d0 = (local_1b0 << (local_280 & 0x3f)) + local_250;
            local_290 = 0x91ba4e35a4557af9;
            local_298 = 0x498a726fe78fcd1f;
            local_100 = local_258;
          }
          else if (uVar9 == 0xcd87d11495612fb6) goto LAB_1801194dc;
        }
        if (-0xb664e33e2e9003e < (longlong)uVar9) break;
        if (uVar9 == 0xd8303c5a43dab7e6) {
          lVar11 = local_100 << (local_280 & 0x3f);
          lVar12 = local_100 << (local_280 & 0x3f);
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
          local_100 = local_100 + local_228;
          local_290 = 0xde09afc28ad85b37;
          if (local_100 != local_1b0) {
            local_290 = 0x2ad48b3800f27939;
          }
          local_298 = 0xf2e4b7624328cedf;
        }
        else if (uVar9 == 0xe6dd32f2b179123d) {
          uVar9 = (longlong)local_178 + (local_270 - (longlong)local_240) & local_270;
          local_290 = 0x6739c924db582e65;
          if ((longlong)param_2 + uVar9 + 8 <=
              (ulonglong)((longlong)local_240 + (local_220 - local_f0) + (longlong)local_278)) {
            local_290 = 0x32d350321112f231;
          }
          if ((undefined8 *)((longlong)local_278 + (longlong)local_240 + ((uVar9 + 0x10) - local_f0)) <= param_2) {
            local_290 = 0x32d350321112f231;
          }
          local_298 = 0xe21bdf5337e9c11b;
          local_1e0 = local_250;
          local_1e8 = param_2;
        }
      }
      if (uVar9 != 0xf499b1cc1d16ffc3) break;
      local_118 = (undefined8 *)*param_1;
      local_290 = 0xdfa341072ee3dea1;
      local_298 = 0xebba7d99a34f6522;
    }
  } while (uVar9 != 0xf5293bac4ceb17ef);
LAB_1801194dc:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_180119570(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x91f47685ee288876;
  local_58 = 0xdcd76c96957b82e0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x537dd9210d017918;
        if (uVar1 != 0xce9e48c6d597eb4b) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0x98);
        local_50 = 0xf086acd38d2ff8d6;
        local_58 = 0x5b6afe0ffe385227;
      }
      if (uVar1 != 0x4d231a137b530a96) break;
      local_48 = *param_1;
      local_50 = 0xd9163afc68ab8584;
      if (local_48 == 0) {
        local_50 = 0xbc6420e6ce2bc43e;
      }
      local_58 = 0x1788723abd3c6ecf;
    }
    local_50 = local_50 ^ 0x537dd9210d017918;
  } while (uVar1 != 0xabec52dc7317aaf1);
  return;
}



void FUN_1801196a0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x2b4bea93ffef001c;
  local_58 = 0xd152c8cac3b6a966;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x9c63da002dca269;
        if (uVar1 != 0xfa1922593c59a97a) break;
        local_48 = *param_1;
        local_50 = 0x9ccbab05f62aad80;
        if (local_48 == 0) {
          local_50 = 0x48a54b34e401e1a8;
        }
        local_58 = 0x6022e2846588639e;
      }
      if (uVar1 != 0xfce9498193a2ce1e) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x90);
      local_50 = 0x3601015089dc6b3b;
      local_58 = 0x1e86a8e00855e90d;
    }
    local_50 = local_50 ^ 0x9c63da002dca269;
  } while (uVar1 != 0x2887a9b081898236);
  return;
}



void FUN_1801197d0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xca786ca5b157a849;
  local_58 = 0x6d66b54825188c77;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xe7bf7b4c6f637b1d;
        if (uVar1 != 0xa71ed9ed944f243e) break;
        local_48 = *param_1;
        local_50 = 0xc4e45298118a67fa;
        if (local_48 == 0) {
          local_50 = 0xf163f0fa2415827;
        }
        local_58 = 0x91471036976632b7;
      }
      if (uVar1 != 0x55a342ae86ec554d) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x80);
      local_50 = 0xed216fbbca2dc1b1;
      local_58 = 0x73704082ff0aab21;
    }
    local_50 = local_50 ^ 0xe7bf7b4c6f637b1d;
  } while (uVar1 != 0x9e512f3935276a90);
  return;
}



void FUN_180119900(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x1c784ea6c377ef43;
  local_58 = 0xed93bfd67d2b21ab;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xee0ac97758f863a5;
        if (uVar1 != 0xf1ebf170be5ccee8) break;
        local_48 = *param_1;
        local_50 = 0x3412d884f6b9f4e8;
        if (local_48 == 0) {
          local_50 = 0x17d7f72cc9a29400;
        }
        local_58 = 0xb41a9550d56d7b0;
      }
      if (uVar1 != 0x3f5371d1fbef2358) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x78);
      local_50 = 0x83f80a58e2e7d8fb;
      local_58 = 0x9f6e542126139b4b;
    }
    local_50 = local_50 ^ 0xee0ac97758f863a5;
  } while (uVar1 != 0x1c965e79c4f443b0);
  return;
}



void FUN_180119a30(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xf5618cb96e1463c0;
  local_58 = 0x11f4fa5aa6b37fae;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x8a8e521c0a63ada8;
        if (uVar1 != 0xe49576e3c8a71c6e) break;
        local_48 = *param_1;
        local_50 = 0x170a4d831ac87833;
        if (local_48 == 0) {
          local_50 = 0x9da593adbde3efc0;
        }
        local_58 = 0x556e6a6b3c43f9b6;
      }
      if (uVar1 != 0x426427e8268b8185) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x78);
      local_50 = 0xc4a3cc15362b4d56;
      local_58 = 0xc6835d3b78b5b20;
    }
    local_50 = local_50 ^ 0x8a8e521c0a63ada8;
  } while (uVar1 != 0xc8cbf9c681a01676);
  return;
}



void FUN_180119b60(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xc4e3783c22653a29;
  local_58 = 0xfd73a4bd2b53ce27;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x81c57e043ce01a3e;
        if (uVar1 != 0xa83f45bf5ce878e7) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0xb8);
        local_50 = 0x6e30e448e4951aa4;
        local_58 = 0x618c4c36e3c4f329;
      }
      if (uVar1 != 0x3990dc810936f40e) break;
      local_48 = *param_1;
      local_50 = 0x4c49790abf62c299;
      if (local_48 == 0) {
        local_50 = 0xebca94cbe4db53f3;
      }
      local_58 = 0xe4763cb5e38aba7e;
    }
    local_50 = local_50 ^ 0x81c57e043ce01a3e;
  } while (uVar1 != 0xfbca87e0751e98d);
  return;
}



void FUN_180119c90(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xcbff0a1576f60049;
  local_58 = 0x1f901ff33511ac6a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x8048861bdbd6338b;
        if (uVar1 != 0xd46f15e643e7ac23) break;
        local_48 = *param_1;
        local_50 = 0x21ec931ead0c0162;
        if (local_48 == 0) {
          local_50 = 0x19bd7b15d1f40e14;
        }
        local_58 = 0x2c8edbf0e1f61abe;
      }
      if (uVar1 != 0xd6248ee4cfa1bdc) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x88);
      local_50 = 0xc19bcf8ec10342f8;
      local_58 = 0xf4a86f6bf1015652;
    }
    local_50 = local_50 ^ 0x8048861bdbd6338b;
  } while (uVar1 != 0x3533a0e5300214aa);
  return;
}



void FUN_180119dc0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xe9f58f4b1801bcb2;
  local_58 = 0xe38fd7110c23b791;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xb111365c39f49355;
        if (uVar1 != 0x90737b5197520654) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0x80);
        local_50 = 0x3d94f7bc4524a231;
        local_58 = 0x624f0d6379624226;
      }
      if (uVar1 != 0xa7a585a14220b23) break;
      local_48 = *param_1;
      local_50 = 0xa8004d1758c1a117;
      if (local_48 == 0) {
        local_50 = 0x67a8cc99f3d54754;
      }
      local_58 = 0x38733646cf93a743;
    }
    local_50 = local_50 ^ 0xb111365c39f49355;
  } while (uVar1 != 0x5fdbfadf3c46e017);
  return;
}



void FUN_180119ef0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x63bd0709346ebd2e;
  local_58 = 0xc0536e631236b678;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x1ce3c47b5d84a908;
        if (uVar1 != 0xa3ee696a26580b56) break;
        local_48 = *param_1;
        local_50 = 0xfe7cb81ded999e99;
        if (local_48 == 0) {
          local_50 = 0xce9d2e9233ddf7db;
        }
        local_58 = 0xce5cb5599f90cc4c;
      }
      if (uVar1 != 0x30200d44720952d5) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x70);
      local_50 = 0x39cb07accf75238c;
      local_58 = 0x390a9c676338181b;
    }
    local_50 = local_50 ^ 0x1ce3c47b5d84a908;
  } while (uVar1 != 0xc19bcbac4d3b97);
  return;
}



void FUN_18011a020(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;

  local_50 = 0xebb32df349dbab52;
  local_58 = 0x991ea1b3444904df;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x606abf52ba7c3fb7;
        if (uVar1 != 0xb403cd5c10426fc3) break;
        *local_48 = &PTR_FUN_180217de0;
        FUN_18011a170(local_48 + 0xe);
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0xd0);
        local_50 = 0xee5f346b94591919;
        local_58 = 0x539775cc12786d5a;
      }
      if (uVar1 != 0x72ad8c400d92af8d) break;
      local_48 = (undefined8 *)*param_1;
      local_50 = 0x98184404dea7ef03;
      if (local_48 == (undefined8 *)0x0) {
        local_50 = 0x91d3c8ff48c4f483;
      }
      local_58 = 0x2c1b8958cee580c0;
    }
    local_50 = local_50 ^ 0x606abf52ba7c3fb7;
  } while (uVar1 != 0xbdc841a786217443);
  return;
}



void FUN_18011a170(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_140;
  ulonglong local_138;
  uint local_12c;
  uintptr_t local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;

  local_138 = 0x5474e85f1a4faad9;
  local_140 = 0x54e9af7da8e9029e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_138 ^ 0x620cdbb4be10bdd6;
              uVar1 = local_138 ^ local_140;
              local_140 = local_140 ^ 0x620cdbb4be10bdd6;
              local_138 = uVar2;
              if ((longlong)uVar1 < 0x9d4722b2a6a847) break;
              if ((longlong)uVar1 < 0x34a9839f0c433ae1) {
                if ((longlong)uVar1 < 0xf9fc9d10ffe7f76) {
                  if (uVar1 == 0x9d4722b2a6a847) {
                    local_110 = -8;
                    local_100 = 0x27;
                    local_118 = 0x20;
                    local_12c = 0;
                    local_120 = 0xfff;
                    local_128 = 0;
                    local_108 = 0xf;
                    local_b0 = param_1 + 7;
                    local_f8 = param_1[7];
                    local_138 = 0xe577f7e4fb3ff425;
                    if (local_f8 != 0) {
                      local_138 = 0x308e6da8bc4f2cb7;
                    }
                    local_140 = 0x46d918776dccd254;
                  }
                  else if (uVar1 == 0xca9636448fab3ca) {
                    thunk_FUN_1801f42e0(local_b8,local_c0);
                    local_138 = 0x8a4ca5e0da70173f;
                    local_140 = 0xe0df8d05f6e7d2e3;
                  }
                  else if (uVar1 == 0xb3669776901a8ab) goto LAB_18011a945;
                }
                else if (uVar1 == 0xf9fc9d10ffe7f76) {
                  local_c0 = local_f0 + 0x28;
                  local_138 = 0xceb54b5d998cdbb5;
                  local_140 = 0xc21c2839d176687f;
                  local_b8 = local_70;
                }
                else if (uVar1 == 0x146d957eab833954) {
                  local_e0 = local_90 + local_100;
                  local_d8 = local_68;
                  local_138 = 0x757b89ee836f871d;
                  local_140 = 0x9dbd0d18804c2a41;
                }
              }
              else if ((longlong)uVar1 < 0x6a9328e52c97c5dc) {
                if (uVar1 == 0x34a9839f0c433ae1) {
                  local_68 = *(longlong *)(local_f8 + -8);
                  local_138 = 0x3025eba1105f7ce0;
                  if (local_118 <= (ulonglong)((local_98 + local_110) - local_68)) {
                    local_138 = 0x2f7e17a8d2dded1f;
                  }
                  local_140 = 0x24487edfbbdc45b4;
                }
                else if (uVar1 == 0x3847bc35c74fa4dc) {
                  local_70 = *(longlong *)(local_a8 + -8);
                  local_138 = 0xaccd620154de5127;
                  if (local_118 <= (ulonglong)((local_a8 + local_110) - local_70)) {
                    local_138 = 0x2b1e6efc32a62874;
                  }
                  local_140 = 0xa352abd05b202e51;
                }
              }
              else if (uVar1 == 0x765775dfd183fee3) {
                local_98 = local_f8;
                local_e0 = param_1[9] - local_f8;
                local_138 = 0x374a83264bcb1df1;
                if (local_e0 <= local_120) {
                  local_138 = 0xeb25844f44ab8a4c;
                }
                local_140 = 0x3e300b947882710;
                local_d8 = local_f8;
                local_90 = local_e0;
              }
              else if (uVar1 == 0x6a9328e52c97c5dc) {
                param_1[2] = local_128;
                *local_88 = local_108;
                *(undefined1 *)param_1 = 0;
                return;
              }
            }
            if ((longlong)uVar1 < -0x45a9d8dcea490dde) break;
            if ((longlong)uVar1 < -0x17397b09fcdc52a4) {
              if (uVar1 == 0xba56272315b6f222) {
                local_a0 = *(longlong *)(local_e8 + -8);
                local_138 = 0x37f912ceb070151b;
                if (local_118 <= (ulonglong)((local_80 + local_110) - local_a0)) {
                  local_138 = 0x269ce8f71d9cc85d;
                }
                local_140 = 0xa25976ce8d7a9442;
              }
              else if (uVar1 == 0xdb51b2d1869d6254) {
                local_80 = local_e8;
                local_d0 = param_1[6] - local_e8;
                local_138 = 0x6bd7ab5a6f9d819e;
                if (local_d0 <= local_120) {
                  local_138 = 0x53a36755b6ee47f9;
                }
                local_140 = 0xd1818c797a2b73bc;
                local_c8 = local_e8;
                local_78 = local_d0;
              }
            }
            else if (uVar1 == 0xe8c684f60323ad5c) {
              thunk_FUN_1801f42e0(local_d8,local_e0);
              *local_b0 = 0;
              local_b0[1] = 0;
              local_b0[2] = 0;
              local_138 = 0x7b758aa01fd75aa2;
              local_140 = 0xd8db653389247cd3;
            }
            else if (uVar1 == 0xee37cca395363b16) {
              local_b8 = *param_1;
              local_c0 = local_f0 + 1;
              local_138 = 0x135b2e4263a0422c;
              if (local_c0 <= local_120) {
                local_138 = 0x27b5f113ec15553a;
              }
              local_140 = 0x2b1c9277a4efe6f0;
              local_a8 = local_b8;
            }
          }
          if (-0x77b33ad39679f9dc < (longlong)uVar1) break;
          if (uVar1 == 0x800326acdb5533f0) {
            local_88 = (ulonglong *)(param_1 + 3);
            local_f0 = param_1[3];
            local_138 = 0x61f973fe154bef50;
            if (local_f0 <= local_108) {
              local_138 = 0xe55d97b8acea119a;
            }
            local_140 = 0x8fcebf5d807dd446;
          }
          else if (uVar1 == 0x8222eb2cccc53445) {
            thunk_FUN_1801f42e0(local_c8,local_d0);
            *local_60 = 0;
            local_60[1] = 0;
            local_60[2] = 0;
            local_138 = 0xeef19702900fb330;
            local_140 = 0x6ef2b1ae4b5a80c0;
          }
          else if (uVar1 == 0x84c59e3990e65c1f) goto LAB_18011a945;
        }
        if (uVar1 != 0x95a064003d0a8159) break;
        local_d0 = local_78 + local_100;
        local_c8 = local_a0;
        local_138 = 0x1478a5eb71a3b1f;
        local_140 = 0x836561727bdf0f5a;
      }
      if (uVar1 != 0xa3aeef9396f32671) break;
      local_60 = param_1 + 4;
      local_e8 = param_1[4];
      local_138 = 0x875db4e7a2c579d0;
      if (local_e8 != 0) {
        local_138 = 0xdc0f209aff0d2874;
      }
      local_140 = 0x75e924b79904a20;
    }
  } while (uVar1 != 0x884cc52c69860625);
LAB_18011a945:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_12c,local_128);
}



undefined8 * FUN_18011a9a0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x522c2cf542791317;
  local_50 = 0x3ec945f335adf1f6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x59baed4247870298;
        if (uVar1 != 0x89ecba6655abf755) break;
        thunk_FUN_1801f42e0(param_1,0xd0);
        local_48 = 0x3d2f83cb4b929e18;
        local_50 = 0x559e6e929d8a1be3;
      }
      if (uVar1 != 0x6ce5690677d4e2e1) break;
      *param_1 = &PTR_FUN_180217de0;
      FUN_18011a170(param_1 + 0xe);
      FUN_180106c90(param_1);
      local_48 = 0xf04d707ff00f2b05;
      if ((param_2 & 1) == 0) {
        local_48 = 0x1110274073bc59ab;
      }
      local_50 = 0x79a1ca19a5a4dc50;
    }
    local_48 = local_48 ^ 0x59baed4247870298;
  } while (uVar1 != 0x68b1ed59d61885fb);
  return param_1;
}



void FUN_18011ab00(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x4e5288050f5d51c4;
  local_58 = 0xb7e236788091b76f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x138ee443bec2cc6f;
        if (uVar1 != 0xe6890204ba34713b) break;
        FUN_18011a170(local_48 + 0x70);
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0xd8);
        local_50 = 0xf72714ab29a8ec9e;
        local_58 = 0x59d22227dd5419a1;
      }
      if (uVar1 != 0xf9b0be7d8fcce6ab) break;
      local_48 = *param_1;
      local_50 = 0xd0dcedf68a9ba3f2;
      if (local_48 == 0) {
        local_50 = 0x98a0d97ec45327f6;
      }
      local_58 = 0x3655eff230afd2c9;
    }
    local_50 = local_50 ^ 0x138ee443bec2cc6f;
  } while (uVar1 != 0xaef5368cf4fcf53f);
  return;
}



void FUN_18011ac40(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x9a085e603dc8a512;
  local_58 = 0x7434bbaff1141190;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x59348f5656e9c2d9;
        if (uVar1 != 0xee3ce5cfccdcb482) break;
        local_48 = *param_1;
        local_50 = 0x16f4b9105b65e73b;
        if (local_48 == 0) {
          local_50 = 0xa34a68de52dad3d4;
        }
        local_58 = 0x3dd570c9ea518a3c;
      }
      if (uVar1 != 0x2b21c9d9b1346d07) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x78);
      local_50 = 0xf1f6e9a5fb9b9f9e;
      local_58 = 0x6f69f1b24310c676;
    }
    local_50 = local_50 ^ 0x59348f5656e9c2d9;
  } while (uVar1 != 0x9e9f1817b88b59e8);
  return;
}



void FUN_18011ad70(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xaf8d6c5c2672895b;
  local_58 = 0xd0a71df4940e7f57;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x688a70234fe33af;
        if (uVar1 != 0x5fcf185c35b546b1) break;
        FUN_18011a170(local_48 + 0x88);
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0xe8);
        local_50 = 0x92d5993d7caa2df0;
        local_58 = 0xedd04fc3ae24cc56;
      }
      if (uVar1 != 0x7f2a71a8b27cf60c) break;
      local_48 = *param_1;
      local_50 = 0x55d3b3b670de844c;
      if (local_48 == 0) {
        local_50 = 0x75197d1497e5235b;
      }
      local_58 = 0xa1cabea456bc2fd;
    }
    local_50 = local_50 ^ 0x688a70234fe33af;
  } while (uVar1 != 0x7f05d6fed28ee1a6);
  return;
}



void FUN_18011aeb0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x732cbd41f83ef677;
  local_58 = 0x2cc28f6ad4f07106;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x533a8575c669a349;
        if (uVar1 != 0xce33d1561aa8f800) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0xc0);
        local_50 = 0x65481cc1fe2192aa;
        local_58 = 0x3bb7f3dfd7a9e59d;
      }
      if (uVar1 != 0x5fee322b2cce8771) break;
      local_48 = *param_1;
      local_50 = 0xe14cead889fd865b;
      if (local_48 == 0) {
        local_50 = 0x7180d490badd096c;
      }
      local_58 = 0x2f7f3b8e93557e5b;
    }
    local_50 = local_50 ^ 0x533a8575c669a349;
  } while (uVar1 != 0x5effef1e29887737);
  return;
}



void FUN_18011afe0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xc7420cd3cddd8b2e;
  local_58 = 0x9e1d963442c3f5f4;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x8b9ef8de80f0f198;
        if (uVar1 != 0xdf050dd9bd0c1c85) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0x98);
        local_50 = 0xa2d6b6d3d2c457d7;
        local_58 = 0x33788fdfb0f6b6f4;
      }
      if (uVar1 != 0x595f9ae78f1e7eda) break;
      local_48 = *param_1;
      local_50 = 0x381443183d8be1aa;
      if (local_48 == 0) {
        local_50 = 0x76bf77cde2b51c0c;
      }
      local_58 = 0xe7114ec18087fd2f;
    }
    local_50 = local_50 ^ 0x8b9ef8de80f0f198;
  } while (uVar1 != 0x91ae390c6232e123);
  return;
}



void FUN_18011b110(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_a8 = 0x9b375fc701be7f;
  local_b0 = 0xc1d4b4231bcbf85d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_a8 ^ 0xf2eb2e609403f312;
            uVar1 = local_a8 ^ local_b0;
            local_b0 = local_b0 ^ 0xf2eb2e609403f312;
            local_a8 = uVar2;
            if (-0x3eb07c832335b9df < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x593cbf5853aec9dc) {
              if (uVar1 == 0x8a10798f8dcf3481) {
                local_70 = local_98;
                local_90 = *(longlong *)(local_a0 + 0x98) - local_98;
                local_a8 = 0xb63a029830ba46c2;
                if (0xfff < local_90) {
                  local_a8 = 0x96a48edc8b57035c;
                }
                local_b0 = 0x2604d3f816fcfb8;
                local_88 = local_98;
                local_68 = local_90;
              }
              else if (uVar1 == 0x94c4c3e30a38cce4) {
                local_60 = *(longlong *)(local_98 + -8);
                local_a8 = 0xd982419b9bc43129;
                if ((local_70 - local_60) - 8U < 0x20) {
                  local_a8 = 0xd3c6b56a0740e77;
                }
                local_b0 = 0xca4a87475b41aa12;
              }
            }
            else if (uVar1 == 0xb45a4fa7b1d5897a) {
              thunk_FUN_1801f42e0(local_88,local_90);
              *local_78 = 0;
              local_78[1] = 0;
              local_78[2] = 0;
              local_a8 = 0x4be71f212c5dd06f;
              local_b0 = 0x425bb0b6b16ec42b;
            }
            else if (uVar1 == 0xa6c340a7ac513624) {
              return;
            }
          }
          if (0x9bcaf979d331443 < (longlong)uVar1) break;
          if (uVar1 == 0xc14f837cdcca4622) {
            local_a0 = *param_1;
            local_a8 = 0xf07ab40e53b37220;
            if (local_a0 == 0) {
              local_a8 = 0x2832ab760aea8436;
            }
            local_b0 = 0x8ef1ebd1a6bbb212;
          }
          else if (uVar1 == 0xc776ec11fb35a465) {
            local_90 = local_68 + 0x27;
            local_a8 = 0xb340f32b627e1a71;
            local_b0 = 0x71abc8cd3ab930b;
            local_88 = local_60;
          }
        }
        if (uVar1 != 0x9bcaf979d331444) break;
        FUN_18011b510(local_a0 + 0x78);
        FUN_180106c90(local_a0);
        thunk_FUN_1801f42e0(local_a0,0xd8);
        local_a8 = 0xc12d76578b227951;
        local_b0 = 0x67ee36f027734f75;
      }
      if (uVar1 != 0x7e8b5fdff508c032) break;
      local_78 = (undefined8 *)(local_a0 + 0x88);
      local_98 = *(longlong *)(local_a0 + 0x88);
      local_a8 = 0x737a78823cd910cc;
      if (local_98 == 0) {
        local_a8 = 0xf0d6ae9a2c253009;
      }
      local_b0 = 0xf96a010db116244d;
    }
  } while (uVar1 != 0x13c8c6dcc0859b3b);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_18011b510(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  uintptr_t local_a0;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  ulonglong *local_50;
  longlong local_48;

  local_b0 = 0x5744146ad0b95015;
  local_b8 = 0x78d073e3c8d305dc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_b0 ^ 0x238a821537e6dfa1;
            uVar2 = local_b0 ^ local_b8;
            local_b8 = local_b8 ^ 0x238a821537e6dfa1;
            local_b0 = uVar3;
            if ((longlong)uVar2 < 0x315c17dbe17b51ef) break;
            if ((longlong)uVar2 < 0x56f6af02682660ca) {
              if (uVar2 == 0x315c17dbe17b51ef) {
                local_80 = local_88 + 0x28;
                local_b0 = 0x557fb303300d0766;
                local_b8 = 0x5b8d4698500653ed;
                local_78 = local_48;
              }
              else if (uVar2 == 0x3bafb5cf1df6865d) {
                thunk_FUN_1801f42e0(*param_1,local_98);
                return;
              }
            }
            else if (uVar2 == 0x56f6af02682660ca) {
              local_68[7] = local_a0;
              *local_50 = local_a8;
              *(undefined1 *)local_90 = 0;
              thunk_FUN_1801f42e0(local_68,local_98);
              local_b0 = 0x978dda24c94a18c4;
              if (local_58 != (undefined8 *)0x0) {
                local_b0 = 0xf78c061ad0839593;
              }
              local_b8 = 0xac226febd4bc9e99;
              local_70 = local_58;
            }
            else if (uVar2 == 0x5bae69f1043f0b0a) {
              local_68 = local_70;
              local_58 = (undefined8 *)*local_70;
              local_90 = local_70 + 5;
              local_50 = local_70 + 8;
              local_88 = local_70[8];
              local_b0 = 0x525d82db1a3a4dba;
              if (local_88 <= local_a8) {
                local_b0 = 0xc34167c6a3c7461a;
              }
              local_b8 = 0x95b7c8c4cbe126d0;
            }
          }
          if (0xef2f59b600b548a < (longlong)uVar2) break;
          if (uVar2 == 0xc7ea4a1fd1db6b6a) {
            local_78 = *local_90;
            local_80 = local_88 + 1;
            local_b0 = 0x3cf0d714f04903a5;
            if (local_80 < 0x1000) {
              local_b0 = 0xe4cc3da35578b394;
            }
            local_b8 = 0xea3ec8383573e71f;
            local_60 = local_78;
          }
          else if (uVar2 == 0xd6ce1f2cc53ae4ba) {
            local_48 = *(longlong *)(local_60 + -8);
            local_b0 = 0x590fedc6dccf62dc;
            if (0x1f < (local_60 - local_48) - 8U) {
              local_b0 = 0x74999c51a391f1d9;
            }
            local_b8 = 0x6853fa1d3db43333;
          }
        }
        if (uVar2 != 0xef2f59b600b548b) break;
        thunk_FUN_1801f42e0(local_78,local_80);
        local_b0 = 0x44f5929680a36ff0;
        local_b8 = 0x12033d94e8850f3a;
      }
      if (uVar2 != 0x2f946789186a55c9) break;
      local_98 = 0x50;
      local_a0 = 0;
      local_a8 = 0xf;
      plVar1 = (longlong *)*param_1;
      *(undefined8 *)plVar1[1] = 0;
      local_70 = (undefined8 *)*plVar1;
      local_b0 = 0xd5bc7a129d3a1a04;
      if (local_70 != (undefined8 *)0x0) {
        local_b0 = 0xb5bda62c84f39753;
      }
      local_b8 = 0xee13cfdd80cc9c59;
    }
  } while (uVar2 != 0x1cca664c9e25c2ea);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a0);
}



void FUN_18011b990(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x86661d475d198009;
  local_58 = 0x58645426a9036df3;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x1eaa8724dbfa7db9;
        if (uVar1 != 0x94ae62c7e6d7a6f4) break;
        FUN_18011bac0(local_48);
        thunk_FUN_1801f42e0(local_48,0x100);
        local_50 = 0x1cc556858ee0207c;
        local_58 = 0xa4ddcda0ed761f43;
      }
      if (uVar1 != 0xde024961f41aedfa) break;
      local_48 = *param_1;
      local_50 = 0xbf6fd0b0eebb9228;
      if (local_48 == 0) {
        local_50 = 0x93d929526bfa0be3;
      }
      local_58 = 0x2bc1b277086c34dc;
    }
    local_50 = local_50 ^ 0x1eaa8724dbfa7db9;
  } while (uVar1 != 0xb8189b2563963f3f);
  return;
}



void FUN_18011bac0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f4;
  uintptr_t local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_100 = 0x6edf6876288cc75f;
  local_108 = 0x59477d601bb01bfa;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_100 ^ 0x44d0350cf31663a0;
            uVar2 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x44d0350cf31663a0;
            local_100 = uVar3;
            if ((longlong)uVar2 < 0x2cbbada34b8a4846) break;
            if ((longlong)uVar2 < 0x4fa226667aeaabea) {
              if ((longlong)uVar2 < 0x37981516333cdca5) {
                if (uVar2 == 0x2cbbada34b8a4846) {
                  local_88 = local_c0;
                  local_b8 = *(longlong *)(param_1 + 0xd8) - local_c0;
                  local_100 = 0x572433e17e26a045;
                  if (local_e8 < local_b8) {
                    local_100 = 0x1a42dda017b47634;
                  }
                  local_108 = 0x3e65230cda105da9;
                  local_b0 = local_c0;
                  local_80 = local_b8;
                }
                else if (uVar2 == 0x307339424350e428) goto LAB_18011c02b;
              }
              else if (uVar2 == 0x37981516333cdca5) {
                local_d0 = -8;
                local_d8 = 0x27;
                local_e0 = 0x20;
                local_f4 = 0;
                local_e8 = 0xfff;
                local_f0 = 0;
                local_98 = (undefined8 *)(param_1 + 0xe0);
                local_c8 = *(longlong *)(param_1 + 0xe0);
                local_100 = 0xba7ffd8fd3019b86;
                if (local_c8 == 0) {
                  local_100 = 0x6843819308bdd382;
                }
                local_108 = 0x80b86cd653e460b3;
              }
              else if (uVar2 == 0x3ac7915980e5fb35) {
                local_70 = local_c8;
                local_a8 = *(longlong *)(param_1 + 0xf0) - local_c8;
                local_100 = 0x4a11d5f3a8ffaffe;
                if (local_e8 < local_a8) {
                  local_100 = 0x84050ad0d452f868;
                }
                local_108 = 0x5b3f395d2150414;
                local_a0 = local_c8;
                local_68 = local_a8;
              }
            }
            else if (uVar2 == 0x4fa226667aeaabea) {
              thunk_FUN_1801f42e0(local_a0,local_a8);
              *local_98 = 0;
              local_98[1] = 0;
              local_98[2] = 0;
              local_100 = 0x8d306ae6831809c1;
              local_108 = 0x65cb87a3d841baf0;
            }
            else if (uVar2 == 0x694110eda436fdec) {
              thunk_FUN_1801f42e0(local_b0,local_b8);
              *local_78 = 0;
              local_78[1] = 0;
              local_78[2] = 0;
              local_100 = 0x2aad0e554a351527;
              local_108 = 0x4a2c15fe8f19df83;
            }
            else if (uVar2 == 0x60811babc52ccaa4) {
              FUN_18011c0a0(param_1 + 0x70);
              uVar1 = *(undefined8 *)(param_1 + 0x70);
              *(undefined8 *)(param_1 + 0x70) = 0;
              thunk_FUN_1801f42e0(uVar1,0x10);
              FUN_180106c90(param_1);
              return;
            }
          }
          if (-0x33dc67e56814e1a7 < (longlong)uVar2) break;
          if (uVar2 == 0x81b6f9450647fc7c) {
            local_90 = *(longlong *)(local_c8 + -8);
            local_100 = 0xee09ab5358bb9f26;
            if ((ulonglong)((local_70 + local_d0) - local_90) < local_e0) {
              local_100 = 0x835c72263156caa9;
            }
            local_108 = 0x222a3349cf50817c;
          }
          else if (uVar2 == 0xa176416ffe064bd5) {
            local_a8 = local_68 + local_d8;
            local_100 = 0x3055e5f087ece6a0;
            local_108 = 0x7ff7c396fd064d4a;
            local_a0 = local_90;
          }
          else if (uVar2 == 0xc466a69a70b917eb) {
            local_b8 = local_80 + local_d8;
            local_100 = 0x218ce1bf1a1e8769;
            local_108 = 0x48cdf152be287a85;
            local_b0 = local_60;
          }
        }
        if (uVar2 != 0xe8fbed455b59b331) break;
        local_78 = (undefined8 *)(param_1 + 200);
        local_c0 = *(longlong *)(param_1 + 200);
        local_100 = 0x36af0b0a2b0557de;
        if (local_c0 == 0) {
          local_100 = 0x7a95bd02a5a3d53c;
        }
        local_108 = 0x1a14a6a9608f1f98;
      }
      if (uVar2 != 0x2427feaccda42b9d) break;
      local_60 = *(longlong *)(local_c0 + -8);
      local_100 = 0xf7014babcd48dc5b;
      if ((ulonglong)((local_88 + local_d0) - local_60) < local_e0) {
        local_100 = 0x314d473fea12f98;
      }
      local_108 = 0xc77272e98e183873;
    }
  } while (uVar2 != 0xcc23981a97eb1e5a);
LAB_18011c02b:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_f0);
}



void FUN_18011c0a0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_180;
  ulonglong local_178;
  uintptr_t local_170;
  uint local_164;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  longlong local_128;
  uintptr_t *local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  uintptr_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  uintptr_t *local_d0;
  uintptr_t local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_178 = 0x190df405da55e75d;
  local_180 = 0xc474fa5852061ea9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_178 ^ 0xf1e168ba79d3849d;
              uVar1 = local_178 ^ local_180;
              local_180 = local_180 ^ 0xf1e168ba79d3849d;
              local_178 = uVar2;
              if ((longlong)uVar1 < 0x2f006149cfffe563) break;
              if ((longlong)uVar1 < 0x54b1d860257942d2) {
                if ((longlong)uVar1 < 0x53466361d3e0e26c) {
                  if (uVar1 == 0x2f006149cfffe563) {
                    thunk_FUN_1801f42e0(local_a8,0x38);
                    local_178 = 0x534c09a411bcf291;
                    local_180 = 0x11f55b3efefe2216;
                  }
                  else if (uVar1 == 0x42b9529aef42d087) {
                    local_178 = 0xd490f68281e66537;
                    if (local_148 < local_60) {
                      local_178 = 0xa76b0f03e30b17ba;
                    }
                    local_180 = 0x80212ee2a49f27e5;
                    local_100 = local_b0;
                  }
                  else if (uVar1 == 0x3fd18bd55d0b82a4) {
                    return;
                  }
                }
                else if (uVar1 == 0x53466361d3e0e26c) {
                  local_120 = (uintptr_t *)(param_1 + 0x18);
                  local_a0 = (longlong *)(param_1 + 0x10);
                  local_98 = (longlong *)(param_1 + 8);
                  local_178 = 0x363ce730d6deb2ee;
                  local_180 = 0x4090d43bccceb073;
                  local_f8 = local_c8;
                }
                else if (uVar1 == 0x544c57dfab3a047e) {
                  local_70 = *(longlong *)(local_88 + -8);
                  local_178 = 0xa0a8685184de0f4e;
                  if ((ulonglong)((local_88 + local_128) - local_70) < local_130) {
                    local_178 = 0xa8e822f2e5f5956a;
                  }
                  local_180 = 0xafbe7880cd9e4b42;
                }
              }
              else if ((longlong)uVar1 < 0x60b449305b1d7a3d) {
                if (uVar1 == 0x54b1d860257942d2) {
                  local_108 = *local_b8;
                  local_110 = *local_158;
                  local_178 = 0x4ebde40a20e949e7;
                  local_180 = 0x2e09ad3a7bf433da;
                }
                else if (uVar1 == 0x5e1e52fff6b71a93) {
                  local_e8 = *local_150;
                  local_f0 = local_118 + local_148;
                  local_178 = 0x1d8a9f56d8148074;
                  if (local_138 < local_f0) {
                    local_178 = 0xe5112d0a1c72ffbd;
                  }
                  local_180 = 0xb15d7ad5b748fbc3;
                  local_88 = local_e8;
                }
              }
              else if (uVar1 == 0x60b449305b1d7a3d) {
                local_68 = local_110;
                local_e0 = local_108 << 3;
                local_178 = 0xd083ed26109bf6f8;
                if (local_138 < local_e0) {
                  local_178 = 0x9534ae37d3b54c06;
                }
                local_180 = 0x612deb9556d64b02;
                local_d8 = local_110;
                local_c0 = local_e0;
              }
              else if (uVar1 == 0x6e4ec6f38168b4ca) {
                local_b8 = (ulonglong *)(param_1 + 0x10);
                local_108 = *(ulonglong *)(param_1 + 0x10);
                local_178 = 0x1f591eb1a8195c10;
                if ((longlong)local_170 < (longlong)local_108) {
                  local_178 = 0x58a77660b4901672;
                }
                local_180 = 0x7fed5781f304262d;
                local_110 = local_90;
                local_100 = local_108;
              }
              else if (uVar1 == 0x76ac330b1a10029d) {
                local_150 = *(longlong **)(*local_98 + (*local_a0 + local_160 & local_f8 + local_160 + *local_120) * 8);
                local_78 = (ulonglong *)(local_150 + 3);
                local_118 = local_150[3];
                local_178 = 0x8c4b048b4b0844f3;
                if (local_140 < local_118) {
                  local_178 = 0x5f4c4f89e14afe97;
                }
                local_180 = 0x1521d7617fde404;
              }
            }
            if (-0x2286f1a277ac060d < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x4e51f94cb9b24206) {
              if (uVar1 == 0x8d1919fd5cf5a0f7) {
                local_150[2] = local_170;
                *local_78 = local_140;
                *(undefined1 *)local_150 = 0;
                local_f8 = *local_d0 + local_160;
                *local_d0 = local_f8;
                local_178 = 0x60b42c65c2e8e154;
                if (local_f8 == local_170) {
                  local_178 = 0xc246e98a9844f9f0;
                }
                local_180 = 0x16181f6ed8f8e3c9;
              }
              else if (uVar1 == 0xacd7e5836f5c7bb7) {
                thunk_FUN_1801f42e0(local_e8,local_f0);
                local_178 = 0xcdcc085657fe727d;
                local_180 = 0x40d511ab0b0bd28a;
              }
            }
            else if (uVar1 == 0xb1ae06b3464dbdfa) {
              thunk_FUN_1801f42e0(local_d8,local_e0);
              *local_158 = 0;
              local_158[1] = 0;
              local_178 = 0x3ff6a9a49001187a;
              local_180 = 0x272271cd0a9ade;
            }
            else if (uVar1 == 0xd45ef6e440bc1a39) {
              *local_120 = local_170;
              local_178 = 0x5cf5bc1755fc6dfa;
              local_180 = 0x798fbcf75dd4a166;
            }
            else if (uVar1 == 0xdb71e2de8729daa0) {
              local_e0 = local_c0 + 0x27;
              local_d8 = local_80;
              local_178 = 0xe69a0bacbabe80fc;
              local_180 = 0x57340d1ffcf33d06;
            }
          }
          if (0xf1610d14940440b < (longlong)uVar1) break;
          if (uVar1 == 0xdd790e5d8853f9f4) {
            local_128 = -8;
            local_160 = -1;
            local_130 = 0x20;
            local_164 = 0;
            local_138 = 0xfff;
            local_170 = 0;
            local_140 = 0xf;
            local_148 = 1;
            local_d0 = (uintptr_t *)(param_1 + 0x20);
            local_c8 = *(uintptr_t *)(param_1 + 0x20);
            local_178 = 0x9cc73d7995eed313;
            if (local_c8 == 0) {
              local_178 = 0xeafb5ef84e26fde3;
            }
            local_180 = 0xcf815e18460e317f;
          }
          else if (uVar1 == 0xf41945a285630704) {
            local_80 = *(longlong *)(local_68 + -8);
            local_178 = 0xcd80f53e2b867950;
            if ((ulonglong)((local_68 + local_128) - local_80) < local_130) {
              local_178 = 0x4713a2be1b83205;
            }
            local_180 = 0xdf00d8f56691e8a5;
          }
          else if (uVar1 == 0x7565a72286bde28) {
            local_f0 = local_118 + 0x28;
            local_e8 = local_70;
            local_178 = 0x657212d894ba4dfe;
            local_180 = 0xc9a5f75bfbe63649;
          }
        }
        if ((longlong)uVar1 < 0x274a21e14794305f) break;
        if (uVar1 == 0x274a21e14794305f) {
          local_60 = local_100;
          local_b0 = local_100 + local_160;
          local_a8 = *(longlong *)(*local_158 + local_b0 * 8);
          local_178 = 0x39bbb8ea948881fe;
          if (local_a8 == 0) {
            local_178 = 0x54028b39b435b41a;
          }
          local_180 = 0x16bbd9a35b77649d;
        }
      }
      if (uVar1 != 0x257a00e00828cc9c) break;
      local_158 = (longlong *)(param_1 + 8);
      local_90 = *(longlong *)(param_1 + 8);
      local_178 = 0x9d93ee39ad1e2727;
      if (local_90 == 0) {
        local_178 = 0xcc0ca31f717d1149;
      }
      local_180 = 0xf3dd28ca2c7693ed;
    }
  } while ((uVar1 != 0xf1610d14940440c) && (uVar1 != 0x12802dcb4d1791f5));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_164,local_170);
}



void FUN_18011cad0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x27259d54f84bbd82;
  local_58 = 0xc1c08dfbddc4ae9b;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xefdc7d5691b06dd;
        if (uVar1 != 0xe6e510af258f1319) break;
        local_48 = *param_1;
        local_50 = 0x6c724a29a37f23fa;
        if (local_48 == 0) {
          local_50 = 0x40eb6b83ace33dba;
        }
        local_58 = 0x2f6294b9291bc7e3;
      }
      if (uVar1 != 0x4310de908a64e419) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x90);
      local_50 = 0xbe70d75b70bbbbb5;
      local_58 = 0xd1f92861f54341ec;
    }
    local_50 = local_50 ^ 0xefdc7d5691b06dd;
  } while (uVar1 != 0x6f89ff3a85f8fa59);
  return;
}



void FUN_18011cc00(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x3597243d139e65d;
  local_58 = 0x7b4534c0effa5460;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x7b5b2bd62640da5d;
        if (uVar1 != 0xfb3748512273482d) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0x80);
        local_50 = 0xb3e97631652f394a;
        local_58 = 0x2b5148f55b67958;
      }
      if (uVar1 != 0x781c46833ec3b23d) break;
      local_48 = *param_1;
      local_50 = 0xcdede95689427cb8;
      if (local_48 == 0) {
        local_50 = 0x8786c3b99ba87487;
      }
      local_58 = 0x36daa107ab313495;
    }
    local_50 = local_50 ^ 0x7b5b2bd62640da5d;
  } while (uVar1 != 0xb15c62be30994012);
  return;
}



void FUN_18011cd30(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;

  local_50 = 0x8836f8d0c118162b;
  local_58 = 0x82f0cbeb8044e288;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x57a37ae07c63f08a;
        if (uVar1 != 0xfecb0a97cc303d2e) break;
        *local_48 = &PTR_FUN_180217de0;
        FUN_18011a170(local_48 + 0xe);
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0xd0);
        local_50 = 0x7fcfcebb9046caee;
        local_58 = 0x70d2e1341c64e4a0;
      }
      if (uVar1 != 0xac6333b415cf4a3) break;
      local_48 = (undefined8 *)*param_1;
      local_50 = 0x8e14107aa3bbc579;
      if (local_48 == (undefined8 *)0x0) {
        local_50 = 0x7fc23562e3a9d619;
      }
      local_58 = 0x70df1aed6f8bf857;
    }
    local_50 = local_50 ^ 0x57a37ae07c63f08a;
  } while (uVar1 != 0xf1d2f8f8c222e4e);
  return;
}



void FUN_18011ce80(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;

  local_50 = 0x7564940647c21be7;
  local_58 = 0x71863a6043ef47be;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x1fe2de163dbcc852;
        if (uVar1 != 0x4e2ae66042d5c59) break;
        local_48 = (undefined8 *)*param_1;
        local_50 = 0xa73d14031e9f3c82;
        if (local_48 == (undefined8 *)0x0) {
          local_50 = 0x7d27315bda038089;
        }
        local_58 = 0xef2ea6d0707d65dd;
      }
      if (uVar1 != 0x4813b2d36ee2595f) break;
      *local_48 = &PTR_FUN_180217de0;
      FUN_18011a170(local_48 + 0xe);
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0xd0);
      local_50 = 0x5e2885958565d7c7;
      local_58 = 0xcc21121e2f1b3293;
    }
    local_50 = local_50 ^ 0x1fe2de163dbcc852;
  } while (uVar1 != 0x9209978baa7ee554);
  return;
}



void FUN_18011cfc0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;

  local_50 = 0xfe3c83f25aaf0472;
  local_58 = 0x6ccc812c9a931770;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x8fa83b2fb684588e;
        if (uVar1 != 0x92f002dec03c1302) break;
        local_48 = (undefined8 *)*param_1;
        local_50 = 0x39ce688b3f0a5339;
        if (local_48 == (undefined8 *)0x0) {
          local_50 = 0x4a52611f4df86910;
        }
        local_58 = 0x8fbeeaa66abb186b;
      }
      if (uVar1 != 0xb670822d55b14b52) break;
      *local_48 = &PTR_FUN_180217de0;
      FUN_18011a170(local_48 + 0xe);
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0xd0);
      local_50 = 0xc5ff4ed34f4e0799;
      local_58 = 0x13c56a680d76e2;
    }
    local_50 = local_50 ^ 0x8fa83b2fb684588e;
  } while (uVar1 != 0xc5ec8bb92743717b);
  return;
}



void FUN_18011d100(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_a0 = 0x1e27e1f5778281e4;
  local_a8 = 0xe8107ca72d9b4f74;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_a0 ^ 0xd7c5294b41c99eb6;
          uVar1 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0xd7c5294b41c99eb6;
          local_a0 = uVar2;
          if (-0xa0218c763db86ee < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x341e5efda108d083) {
            if (uVar1 == 0x82f3ea6245f2c1d5) {
              local_70 = local_78 + 0x28;
              local_a0 = 0x9dbc9040d993675f;
              local_a8 = 0x6dec6920737c437f;
              local_68 = local_48;
            }
            else if (uVar1 == 0xb7de0d8082a63150) {
              local_68 = *local_80;
              local_70 = local_78 + 1;
              local_a0 = 0x7af84afd3bd3bbc8;
              if (0xfff < local_70) {
                local_a0 = 0xa08b27e66b92d8be;
              }
              local_a8 = 0x8aa8b39d913c9fe8;
              local_58 = local_68;
            }
          }
          else if (uVar1 == 0xcbe1a1025ef72f7d) {
            *(uintptr_t *)(local_98 + 0x98) = local_88;
            *local_50 = local_90;
            *(undefined1 *)local_80 = 0;
            FUN_180106c90(local_98);
            thunk_FUN_1801f42e0(local_98,0xa8);
            local_a0 = 0x6fc1c99be9e5e2f8;
            local_a8 = 0x753abf2c95fc2b29;
          }
          else if (uVar1 == 0xf050f960aaef2420) {
            thunk_FUN_1801f42e0(local_68,local_70);
            local_a0 = 0x7cadfe9af1afef73;
            local_a8 = 0xb74c5f98af58c00e;
          }
        }
        if (-0x8fe5e1565ebfd74 < (longlong)uVar1) break;
        if (uVar1 == 0xf5fde7389c247913) {
          local_80 = (longlong *)(local_98 + 0x88);
          local_50 = (ulonglong *)(local_98 + 0xa0);
          local_78 = *(ulonglong *)(local_98 + 0xa0);
          local_a0 = 0x297e34ab2a98a561;
          if (local_90 < local_78) {
            local_a0 = 0x55419829f6c9bb4c;
          }
          local_a8 = 0xe29f95a9746f8a1c;
        }
        else if (uVar1 == 0xf6379d525a19ce90) {
          local_88 = 0;
          local_90 = 0xf;
          local_98 = *param_1;
          local_a0 = 0xc341f9d21ea2231;
          if (local_98 == 0) {
            local_a0 = 0xe3328e12c1d792f3;
          }
          local_a8 = 0xf9c9f8a5bdce5b22;
        }
      }
      if (uVar1 != 0x2a23947bfaae4756) break;
      local_48 = *(longlong *)(local_58 + -8);
      local_a0 = 0xaca6dd6acbc270d3;
      if ((local_58 - local_48) - 8U < 0x20) {
        local_a0 = 0xd95496e21424b38b;
      }
      local_a8 = 0x5ba77c8051d6725e;
    }
    if (uVar1 == 0x1afb76b77c19c9d1) break;
    if (uVar1 == 0xf701a1ea9a14028d) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_88);
    }
  }
  return;
}



void FUN_18011d550(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;

  local_50 = 0xd3937d7cabf6dd33;
  local_58 = 0x79214360928f78a6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x2e9b150b35500b85;
        if (uVar1 != 0xaab23e1c3979a595) break;
        local_48 = (undefined8 *)*param_1;
        local_50 = 0x98778fa0c46b3a1d;
        if (local_48 == (undefined8 *)0x0) {
          local_50 = 0x5819f1505756cd;
        }
        local_58 = 0xee2f02d454dfcc80;
      }
      if (uVar1 != 0x76588d7490b4f69d) break;
      *local_48 = &PTR_FUN_180217de0;
      FUN_18011a170(local_48 + 0xe);
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0xd0);
      local_50 = 0x7d9a73b8dfdc9bbd;
      local_58 = 0x93ed689ddb5401f0;
    }
    local_50 = local_50 ^ 0x2e9b150b35500b85;
  } while (uVar1 != 0xee771b2504889a4d);
  return;
}



void FUN_18011d690(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x3f7b024f7f1f6491;
  local_58 = 0xe0b2594a3496c5a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x81427a8072c77e81;
        if (uVar1 != 0x1e6a2a71b732dd0) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0x70);
        local_50 = 0x2d377dcaaca25ce0;
        local_58 = 0x60c39e04a830d1c;
      }
      if (uVar1 != 0x317027dbdc5608cb) break;
      local_48 = *param_1;
      local_50 = 0xfbe5e63ab5e3b186;
      if (local_48 == 0) {
        local_50 = 0xd13800b748b1cdaa;
      }
      local_58 = 0xfa03449dae909c56;
    }
    local_50 = local_50 ^ 0x81427a8072c77e81;
  } while (uVar1 != 0x2b3b442ae62151fc);
  return;
}



void FUN_18011d7c0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xd94952af5e760ab5;
  local_58 = 0x881683d0e589439b;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x7ffece3b65d53ccb;
        if (uVar1 != 0x2399d40f6830ceff) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0x90);
        local_50 = 0xb380fe5d8c8bb664;
        local_58 = 0x74a157ce9a59f034;
      }
      if (uVar1 != 0x515fd17fbbff492e) break;
      local_48 = *param_1;
      local_50 = 0xb5071d786ef19f25;
      if (local_48 == 0) {
        local_50 = 0x51bf60e41013178a;
      }
      local_58 = 0x969ec97706c151da;
    }
    local_50 = local_50 ^ 0x7ffece3b65d53ccb;
  } while (uVar1 != 0xc721a99316d24650);
  return;
}



void FUN_18011d8f0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xb6fb3994fdbfe6b1;
  local_58 = 0x660a4300ab4b05ce;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x6e6538c2e88ede2d;
        if (uVar1 != 0xd0f17a9456f4e37f) break;
        local_48 = *param_1;
        local_50 = 0x32be4431825bc144;
        if (local_48 == 0) {
          local_50 = 0x7ccea7b0d52beff1;
        }
        local_58 = 0x5cc1cb5c6a81f992;
      }
      if (uVar1 != 0x6e7f8f6de8da38d6) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x80);
      local_50 = 0xec557bc5e17c18a6;
      local_58 = 0xcc5a17295ed60ec5;
    }
    local_50 = local_50 ^ 0x6e6538c2e88ede2d;
  } while (uVar1 != 0x200f6cecbfaa1663);
  return;
}



void FUN_18011da20(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x419aa8ded450813b;
  local_58 = 0x904962ae7a8b2bee;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x339bf3a97fd3f4ee;
        if (uVar1 != 0xd1d3ca70aedbaad5) break;
        local_48 = *param_1;
        local_50 = 0x996f23e124acdbe1;
        if (local_48 == 0) {
          local_50 = 0xa0535463e9925d13;
        }
        local_58 = 0xef033f46fb35de92;
      }
      if (uVar1 != 0x766c1ca7df990573) break;
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,0x70);
      local_50 = 0x55c6ac3289da3d83;
      local_58 = 0x1a96c7179b7dbe02;
    }
    local_50 = local_50 ^ 0x339bf3a97fd3f4ee;
  } while (uVar1 != 0x4f506b2512a78381);
  return;
}



void FUN_18011db50(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xa74e63ba627c607d;
  local_58 = 0x924e1b3f922238f2;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x6c871ecfbc632be3;
        if (uVar1 != 0xaf69c7924660a660) break;
        FUN_180106c90(local_48);
        thunk_FUN_1801f42e0(local_48,0x78);
        local_50 = 0x8f76490b37322363;
        local_58 = 0xad172a8e88ca322d;
      }
      if (uVar1 != 0x35007885f05e588f) break;
      local_48 = *param_1;
      local_50 = 0x34fe5e3d193a0800;
      if (local_48 == 0) {
        local_50 = 0xb9f6fa2ae0a2bf2e;
      }
      local_58 = 0x9b9799af5f5aae60;
    }
    local_50 = local_50 ^ 0x6c871ecfbc632be3;
  } while (uVar1 != 0x22616385bff8114e);
  return;
}



void FUN_18011dc80(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xf2432eac186a12e7;
  local_58 = 0x28e8d4c27f2e40ef;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x363150d09f64d9fe;
        if (uVar1 != 0xdaabfa6e67445208) break;
        local_48 = *param_1;
        local_50 = 0x581f38a6ab81c938;
        if (local_48 == 0) {
          local_50 = 0x4a29325740a44ea4;
        }
        local_58 = 0x288dbd9717be82f4;
      }
      if (uVar1 != 0x70928531bc3f4bcc) break;
      FUN_18011a170(local_48 + 0x130);
      FUN_18011a170(local_48 + 0xd0);
      FUN_18011a170(local_48 + 0x70);
      FUN_180106c90(local_48);
      thunk_FUN_1801f42e0(local_48,400);
      local_50 = 0x16a508933cea7314;
      local_58 = 0x740187536bf0bf44;
    }
    local_50 = local_50 ^ 0x363150d09f64d9fe;
  } while (uVar1 != 0x62a48fc0571acc50);
  return;
}



void FUN_18011dde0(longlong param_1)

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



void Unwind_18011df20(void)

{
  Unwind_1801dd394();
}



void FUN_18011df50(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_b8;
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

  local_b0 = 0x3350082cf9b9fda8;
  local_b8 = 0x5c34deeb0bc467a3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_b0 ^ 0x499ce66a5e03f9c9;
            uVar1 = local_b0 ^ local_b8;
            local_b8 = local_b8 ^ 0x499ce66a5e03f9c9;
            local_b0 = uVar2;
            if (0x1a370aff1c64fcf1 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x136e6b999766b61d) {
              if (uVar1 == 0x945465c0a2b9287e) {
                local_a0 = local_70 + 0x27;
                local_b0 = 0x7d16bdac23b5b8fd;
                local_b8 = 0xb61ae36be6d921ed;
                local_98 = local_80;
              }
              else if (uVar1 == 0xcb0c5ec7c56c9910) {
                thunk_FUN_1801f42e0(local_98,local_a0);
                DAT_1802a46e8 = 0;
                DAT_1802a46f0 = 0;
                DAT_1802a46f8 = 0;
                local_b0 = 0xeb7009634ca91859;
                local_b8 = 0xc34aecc43e49dfd7;
              }
            }
            else if (uVar1 == 0xec919466689949e3) {
              local_68 = DAT_1802a46f0;
              local_b0 = 0xd167a34edc50626f;
              if (local_88 == DAT_1802a46f0) {
                local_b0 = 0x24750d70b1d52f5c;
              }
              local_b8 = 0x3e42078fadb1d3ae;
              local_a8 = local_88;
              local_90 = local_88;
            }
            else if (uVar1 == 0xef25a4c171e1b1c1) {
              FUN_18011f290(local_90);
              local_90 = local_90 + 0x40;
              local_b0 = 0x6b8eab9219dd836e;
              if (local_90 == local_68) {
                local_b0 = 0xac8f3383307a6c02;
              }
              local_b8 = 0x84ab0f53683c32af;
            }
            else if (uVar1 == 0xc5272b2d9948608) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          if (0x283ae5a772e0c78d < (longlong)uVar1) break;
          if (uVar1 == 0x1a370aff1c64fcf2) {
            local_98 = local_a8;
            local_a0 = DAT_1802a46f8 - local_a8;
            local_b0 = 0x43e90b9dfb02bba7;
            if (0xfff < local_a0) {
              local_b0 = 0xf21a11f2a85d28cb;
            }
            local_b8 = 0x88e5555a3e6e22b7;
            local_78 = local_98;
            local_70 = local_a0;
            local_60 = local_98;
          }
          else if (uVar1 == 0x28243cd058465ead) {
            local_a8 = DAT_1802a46e8;
            local_b0 = 0x706bdb9328fca9ae;
            local_b8 = 0x6a5cd16c3498555c;
          }
        }
        if (uVar1 != 0x6f64d6c7f27d9a0b) break;
        local_88 = DAT_1802a46e8;
        local_b0 = 0xf33e6105ee3b9fc2;
        if (DAT_1802a46e8 == 0) {
          local_b0 = 0x379510c4f44211af;
        }
        local_b8 = 0x1faff56386a2d621;
      }
      if (uVar1 != 0x7aff44a896330a7c) break;
      local_80 = *(longlong *)(local_60 + -8);
      local_b0 = 0x930464f6b59777d1;
      if ((local_78 - local_80) - 8U < 0x20) {
        local_b0 = 0xb027384cebad9a7;
      }
      local_b8 = 0x9f5616446c03f1d9;
    }
  } while (uVar1 != 0x283ae5a772e0c78e);
  return;
}



undefined8 FUN_18011e3d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_28 = 0x24;
  local_20 = 0x2f;
  local_38 = puVar6;
  FUN_1801223d8(&DAT_1802a4804,&DAT_18027ed11,0x1f,0x25,&DAT_1802a482c);
  puVar6[8] = DAT_1802a4824;
  uVar4 = uRam00000001802a481c;
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a4814;
  *(undefined8 *)(puVar6 + 6) = uVar4;
  uVar3 = uRam00000001802a4810;
  uVar2 = uRam00000001802a480c;
  uVar1 = uRam00000001802a4808;
  *puVar6 = _DAT_1802a4804;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  *(undefined1 *)(puVar6 + 9) = 0;
  FUN_18011f8b0(&PTR_PTR_18027e998,&local_38,lVar5 + 0x399980,FUN_18011fc90);
  return 1;
}



undefined8 * FUN_18011e4d0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_1b8;
  undefined8 *local_1b0;
  code *local_1a8;
  undefined ***local_180;
  undefined4 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined3 uStack_b4;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_70 = 0x3f;
  local_58 = 0;
  local_68 = 0x40;
  local_4c = 0;
  local_31 = 0;
  local_48 = 0xf;
  local_60 = 5;
  local_170 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x50);
  local_168 = 0x47;
  local_160 = 0x4f;
  local_178 = puVar3;
  FUN_1801223d8(&DAT_1802a4710,&DAT_18027eb19,0x16,0x48,&DAT_1802a4758);
  *(ulonglong *)((longlong)puVar3 + 0x3f) = CONCAT71(DAT_1802a474f._1_7_,(undefined1)DAT_1802a474f);
  uVar4 = CONCAT17((undefined1)DAT_1802a474f,uRam00000001802a4748);
  *(undefined8 *)(puVar3 + 0xc) = _DAT_1802a4740;
  *(undefined8 *)(puVar3 + 0xe) = uVar4;
  uVar4 = uRam00000001802a4738;
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a4730;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a4728;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a4720;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a471c;
  uVar1 = uRam00000001802a4718;
  uVar5 = uRam00000001802a4714;
  *puVar3 = _DAT_1802a4710;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x47) = local_31;
  local_b0 = local_58;
  local_a8 = 7;
  local_a0 = local_48;
  uVar5 = 1;
  FUN_1801223d8(&DAT_1802a4702,&DAT_18027eae7,0x11,8,&DAT_1802a470c);
  uStack_b4 = uRam00000001802a4706;
  local_b8 = DAT_1802a4702;
  local_b1 = local_31;
  FUN_1801063a0(param_1,&local_b8,&local_178,2,CONCAT44(uVar5,local_4c));
  *param_1 = &PTR_FUN_180218490;
  uStack_130 = 0;
  local_128 = 4;
  local_120 = local_48;
  local_138 = 0x646e6573;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = local_60;
  local_80 = local_48;
  local_40 = param_1;
  FUN_1801223d8(&DAT_1802a475c,&DAT_18027eb92,0x18,6,&DAT_1802a4764);
  local_98 = CONCAT44(CONCAT31(local_98._5_3_,DAT_1802a4760),DAT_1802a475c);
  local_118 = (undefined4 *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_68);
  local_108 = 0x34;
  uStack_100 = local_70;
  local_118 = puVar3;
  FUN_1801223d8(&DAT_1802a4768,&DAT_18027ebcf,0x16,0x35,&DAT_1802a47a0);
  puVar3[0xc] = DAT_1802a4798;
  uVar4 = uRam00000001802a4790;
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a4788;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a4780;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a4778;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a4774;
  uVar1 = uRam00000001802a4770;
  uVar5 = uRam00000001802a476c;
  *puVar3 = _DAT_1802a4768;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 0xd) = local_31;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = local_60;
  local_e0 = local_48;
  FUN_1801223d8(&DAT_1802a47a4,&DAT_18027ec34,0x1b,6,&DAT_1802a47ac);
  local_f8 = CONCAT44(CONCAT31(local_f8._5_3_,DAT_1802a47a8),DAT_1802a47a4);
  uVar4 = FUN_180108d40(local_40,&local_f8,&local_118,&local_98,&local_138);
  local_40[0xe] = uVar4;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_68);
  local_c8 = 0x3c;
  uStack_c0 = local_70;
  local_d8 = puVar3;
  FUN_1801223d8(&DAT_1802a47b0,&DAT_18027ec6c,0x17,0x3d,&DAT_1802a47f0);
  uVar4 = uRam00000001802a47e4;
  *(ulonglong *)(puVar3 + 0xb) = CONCAT44(uRam00000001802a47e0,_DAT_1802a47dc);
  *(undefined8 *)(puVar3 + 0xd) = uVar4;
  uVar4 = CONCAT44(_DAT_1802a47dc,uRam00000001802a47d8);
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a47d0;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a47c8;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a47c0;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a47bc;
  uVar1 = uRam00000001802a47b8;
  uVar5 = uRam00000001802a47b4;
  *puVar3 = _DAT_1802a47b0;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 0xf) = local_31;
  local_150 = local_58;
  local_148 = 10;
  local_140 = local_48;
  FUN_1801223d8(&DAT_1802a47f4,&DAT_18027ecda,0x15,0xb,&DAT_1802a4800);
  local_150 = CONCAT62(local_150._2_6_,DAT_1802a47fc);
  local_158 = DAT_1802a47f4;
  uVar4 = FUN_180107b80(local_40,&local_158,&local_d8,1);
  local_40[0xf] = uVar4;
  uVar4 = FUN_1800ba260();
  local_1b8 = &PTR_LAB_180218600;
  local_1b0 = local_40;
  local_1a8 = FUN_18011eaf0;
  local_180 = &local_1b8;
  FUN_180121610(uVar4,local_40,local_180,local_4c);
  return local_40;
}



void Unwind_18011ea70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x150);
  FUN_180001ef0(param_2 + 0xb0);
  return;
}



void Unwind_18011eab0(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x1a8));
  return;
}



void FUN_18011eaf0(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  size_t _Size;
  char *pcVar6;
  size_t sVar7;
  undefined8 *_Buf2;
  char *pcVar8;
  longlong lVar9;
  size_t sVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  bool bVar14;
  char *local_b8;
  size_t local_b0;
  char *local_a8;
  size_t local_a0;
  longlong local_98;
  longlong local_90;
  size_t local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  ulonglong local_70;
  int local_64;
  longlong local_60;
  size_t local_58;
  char local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_80 = 6;
  local_60 = -1;
  local_7c = 0x7ffffffe;
  local_78 = 5;
  local_58 = 0;
  local_64 = 0;
  local_49 = '/';
  local_74 = 0x7fffffff;
  local_70 = 0xf;
  DAT_18027ea28 = *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x90);
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = FUN_1801da264(&DAT_18027e9d8);
  if (iVar5 != local_64) {
LAB_18011f0e3:
    FUN_1801da68c(local_78);
  }
  local_98 = param_1;
  if (DAT_18027ea24 != local_74) {
    local_88 = DAT_1802a46f0 - DAT_1802a46e8 >> 6;
    pcVar13 = *(char **)(lVar11 + 0x90);
    pcVar3 = *(char **)(lVar11 + 0x98);
    if ((ulonglong)((longlong)pcVar3 - (longlong)pcVar13) < (ulonglong)(DAT_1802a46f0 - DAT_1802a46e8)) {
LAB_18011ec22:
      FUN_1801da26c(&DAT_18027e9d8);
    }
    else {
      sVar7 = local_58;
      if (pcVar13 != pcVar3) {
        local_90 = DAT_1802a46e8;
        lVar11 = DAT_1802a46e8;
LAB_18011ec9d:
        pcVar8 = pcVar13;
        if (local_70 < *(ulonglong *)(pcVar13 + 0x18)) {
          pcVar8 = *(char **)pcVar13;
        }
        sVar10 = *(size_t *)(pcVar13 + 0x10);
        _Size = local_58;
        if (sVar10 == local_58) goto LAB_18011ed40;
        pcVar6 = pcVar8 + sVar10;
        do {
          cVar1 = *pcVar8;
          if (cVar1 < ' ') {
            if (cVar1 != '\t') goto LAB_18011ed14;
          }
          else if (cVar1 != ' ') goto LAB_18011ed14;
          sVar10 = sVar10 + local_60;
          pcVar8 = pcVar8 + 1;
        } while (sVar10 != local_58);
        sVar10 = *(size_t *)(pcVar13 + 0x30);
        goto joined_r0x00018011ed48;
      }
LAB_18011ee56:
      FUN_1801da26c(&DAT_18027e9d8);
      if (sVar7 == local_88) {
        return;
      }
    }
    lVar11 = *(longlong *)(local_98 + 0x70);
    iVar5 = FUN_1801da264(&DAT_18027e9d8);
    lVar4 = DAT_1802a46f0;
    if (iVar5 != local_64) goto LAB_18011f0e3;
    if (DAT_18027ea24 != local_74) {
      lVar9 = DAT_1802a46e8;
      if (DAT_1802a46e8 != DAT_1802a46f0) {
        do {
          FUN_18011f290(lVar9);
          lVar9 = lVar9 + 0x40;
        } while (lVar9 != lVar4);
        DAT_1802a46f0 = DAT_1802a46e8;
      }
      pcVar13 = *(char **)(lVar11 + 0x90);
      pcVar3 = *(char **)(lVar11 + 0x98);
      if (pcVar13 == pcVar3) {
LAB_18011f0c2:
        FUN_1801da26c(&DAT_18027e9d8);
        return;
      }
LAB_18011ef1d:
      local_b8 = pcVar13;
      if (local_70 < *(ulonglong *)(pcVar13 + 0x18)) {
        local_b8 = *(char **)pcVar13;
      }
      sVar7 = *(size_t *)(pcVar13 + 0x10);
      local_b0 = local_58;
      if (sVar7 != local_58) {
        pcVar8 = local_b8 + sVar7;
        pcVar6 = local_b8;
        do {
          cVar1 = *pcVar6;
          if (cVar1 < ' ') {
            if (cVar1 != '\t') goto LAB_18011efa4;
          }
          else if (cVar1 != ' ') goto LAB_18011efa4;
          sVar7 = sVar7 + local_60;
          pcVar6 = pcVar6 + 1;
          local_b8 = pcVar8;
        } while (sVar7 != local_58);
      }
      goto LAB_18011efd0;
    }
  }
  DAT_18027ea24 = local_7c;
  FUN_1801da68c(local_80);
LAB_18011ed14:
  do {
    cVar2 = pcVar8[sVar10 - 1];
    if (cVar2 < ' ') {
      if (cVar2 != '\t') goto LAB_18011ed22;
    }
    else if (cVar2 != ' ') {
LAB_18011ed22:
      _Size = sVar10;
      if (cVar1 == local_49) {
        pcVar8 = pcVar8 + 1;
        _Size = sVar10 + local_60;
      }
      break;
    }
    sVar10 = sVar10 + local_60;
  } while (sVar10 != local_58);
LAB_18011ed40:
  sVar10 = *(size_t *)(pcVar13 + 0x30);
  pcVar6 = pcVar8;
joined_r0x00018011ed48:
  if (sVar10 != local_58) {
    if (local_70 < *(ulonglong *)(pcVar13 + 0x38)) {
      pcVar8 = *(char **)(pcVar13 + 0x20);
    }
    else {
      pcVar8 = pcVar13 + 0x20;
    }
    do {
      cVar1 = *pcVar8;
      if (cVar1 < ' ') {
        if (cVar1 != '\t') goto LAB_18011eda3;
      }
      else if (cVar1 != ' ') goto LAB_18011eda3;
      pcVar8 = pcVar8 + 1;
      sVar10 = sVar10 + local_60;
    } while (sVar10 != local_58);
  }
LAB_18011ec90:
  pcVar13 = pcVar13 + 0x40;
  if (pcVar13 == pcVar3) goto LAB_18011ee56;
  goto LAB_18011ec9d;
LAB_18011eda3:
  do {
    cVar2 = pcVar8[sVar10 - 1];
    if (cVar2 < ' ') {
      if (cVar2 != '\t') goto LAB_18011edaf;
    }
    else if (cVar2 != ' ') {
LAB_18011edaf:
      bVar14 = cVar1 == local_49;
      if (_Size != local_58) {
        sVar10 = sVar10 - bVar14;
        if (sVar10 != local_58) {
          if ((local_88 <= sVar7) || (_Size != *(size_t *)(lVar11 + 0x10 + sVar7 * 0x40))) goto LAB_18011ec22;
          puVar12 = (undefined8 *)(sVar7 * 0x40 + lVar11);
          _Buf2 = puVar12;
          if (local_70 < (ulonglong)puVar12[3]) {
            _Buf2 = (undefined8 *)*puVar12;
          }
          iVar5 = memcmp(pcVar6,_Buf2,_Size);
          if ((iVar5 != local_64) || (sVar10 != puVar12[6])) goto LAB_18011ec22;
          if (local_70 < (ulonglong)puVar12[7]) {
            puVar12 = (undefined8 *)puVar12[4];
          }
          else {
            puVar12 = puVar12 + 4;
          }
          iVar5 = memcmp(pcVar8 + bVar14,puVar12,sVar10);
          if (iVar5 != local_64) goto LAB_18011ec22;
          sVar7 = sVar7 + 1;
          lVar11 = local_90;
        }
      }
      break;
    }
    sVar10 = sVar10 + local_60;
  } while (sVar10 != local_58);
  goto LAB_18011ec90;
LAB_18011efa4:
  do {
    cVar2 = pcVar6[sVar7 - 1];
    local_b8 = pcVar6;
    if (cVar2 < ' ') {
      if (cVar2 != '\t') goto LAB_18011efb2;
    }
    else if (cVar2 != ' ') {
LAB_18011efb2:
      local_b0 = sVar7;
      if (cVar1 == local_49) {
        local_b0 = sVar7 + local_60;
        local_b8 = pcVar6 + 1;
      }
      break;
    }
    sVar7 = sVar7 + local_60;
  } while (sVar7 != local_58);
LAB_18011efd0:
  sVar7 = *(size_t *)(pcVar13 + 0x30);
  if (sVar7 != local_58) {
    if (local_70 < *(ulonglong *)(pcVar13 + 0x38)) {
      pcVar8 = *(char **)(pcVar13 + 0x20);
    }
    else {
      pcVar8 = pcVar13 + 0x20;
    }
    do {
      cVar1 = *pcVar8;
      if (cVar1 < ' ') {
        if (cVar1 != '\t') goto LAB_18011f054;
      }
      else if (cVar1 != ' ') goto LAB_18011f054;
      pcVar8 = pcVar8 + 1;
      sVar7 = sVar7 + local_60;
    } while (sVar7 != local_58);
  }
LAB_18011ef10:
  pcVar13 = pcVar13 + 0x40;
  if (pcVar13 == pcVar3) goto LAB_18011f0c2;
  goto LAB_18011ef1d;
LAB_18011f054:
  do {
    cVar2 = pcVar8[sVar7 - 1];
    if (cVar2 < ' ') {
      if (cVar2 != '\t') goto LAB_18011f062;
    }
    else if (cVar2 != ' ') {
LAB_18011f062:
      local_a0 = sVar7 - (cVar1 == local_49);
      local_a8 = pcVar8 + (cVar1 == local_49);
      if ((local_b0 != local_58) && (local_a0 != local_58)) {
        if (DAT_1802a46f0 == DAT_1802a46f8) {
          FUN_180120a30(&DAT_1802a46e8,DAT_1802a46f0,&local_b8,&local_a8);
        }
        else {
          FUN_180120f30(DAT_1802a46f0,&local_b8,&local_a8);
          DAT_1802a46f0 = DAT_1802a46f0 + 0x40;
        }
      }
      break;
    }
    sVar7 = sVar7 + local_60;
  } while (sVar7 != local_58);
  goto LAB_18011ef10;
}



void Unwind_18011f100(void)

{
  FUN_1801da26c(&DAT_18027e9d8);
  return;
}



undefined1 FUN_18011f160(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x933a371f85cc1518;
  local_68 = 0xbd2ac1be7658202d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x7c56c221cd5ba824;
        if (uVar1 != 0x2e10f6a1f3943535) break;
        local_60 = 0xdddd02dad208609;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x627f6fdb97c80819;
        }
        local_68 = 0x5f47335ab3950eee;
        local_69 = 1;
      }
      if (uVar1 != 0x3d385c81245d06f7) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x13a201490ca44d99;
      local_68 = 0x4138e23e1211c57e;
    }
    local_60 = local_60 ^ 0x7c56c221cd5ba824;
  } while (uVar1 != 0x529ae3771eb588e7);
  return local_69;
}



void FUN_18011f290(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_f9;
  ulonglong local_f8;
  ulonglong local_f0;
  uint local_e4;
  ulonglong local_e0;
  uintptr_t local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
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
  ulonglong *local_58;
  longlong local_50;
  longlong local_48;

  local_f0 = 0x24e8fccb2d626b95;
  local_f8 = 0xfaee82ebc06349c8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_f0 ^ 0xcc70d362b3d73b1d;
            uVar1 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0xcc70d362b3d73b1d;
            local_f0 = uVar2;
            if (-0xd45566ced78ba0c < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x570cd9703b0453f7) {
              if (uVar1 == 0x85c40c453200ea94) {
                thunk_FUN_1801f42e0(local_78,local_80);
                local_f0 = 0xbdd6794cdc188312;
                local_f8 = 0x20cc9818c4a3880e;
              }
              else if (uVar1 == 0x9d1ae15418bb0b1c) {
                param_1[6] = local_d8;
                *local_70 = local_e0;
                *(undefined1 *)local_a8 = local_f9;
                local_58 = (ulonglong *)(param_1 + 3);
                local_98 = param_1[3];
                local_f0 = 0x89e77c4e0dbe37cd;
                if (local_e0 < local_98) {
                  local_f0 = 0xe49ab4ee956a5a1c;
                }
                local_f8 = 0x1ebb79d0370316b;
              }
              else if (uVar1 == 0x880ccbd30ece06a6) {
                param_1[2] = local_d8;
                *local_58 = local_e0;
                *(undefined1 *)param_1 = local_f9;
                return;
              }
            }
            else if ((longlong)uVar1 < -0x21f981df12fedda3) {
              if (uVar1 == 0xa8f3268fc4fbac09) {
                local_90 = local_98 + local_b0;
                local_f0 = 0xc21b673e20b93935;
                local_f8 = 0xae8aa4c78b69ddc6;
                local_88 = local_68;
              }
              else if (uVar1 == 0xb62bc7ccf2b59511) goto LAB_18011f858;
            }
            else if (uVar1 == 0xde067e20ed01225d) {
              local_d8 = 0;
              local_e4 = 0;
              local_b0 = 0x28;
              local_b8 = 1;
              local_c0 = 0xfff;
              local_c8 = 0x20;
              local_f9 = 0;
              local_e0 = 0xf;
              local_d0 = -8;
              local_a8 = param_1 + 4;
              local_70 = (ulonglong *)(param_1 + 7);
              local_a0 = param_1[7];
              local_f0 = 0x40f44afe5fe141d0;
              if (0xf < local_a0) {
                local_f0 = 0x88e86fdf48e884fb;
              }
              local_f8 = 0xddeeabaa475a4acc;
            }
            else if (uVar1 == 0xe5710373961a6b77) {
              local_88 = *param_1;
              local_90 = local_98 + local_b8;
              local_f0 = 0xa87026f832d970d1;
              if (local_c0 < local_90) {
                local_f0 = 0xdfa432e1fdbfbc49;
              }
              local_f8 = 0xc4e1e50199099422;
              local_50 = local_88;
            }
          }
          if ((longlong)uVar1 < 0x3bd75df05127352d) break;
          if (uVar1 == 0x3bd75df05127352d) {
            local_80 = local_a0 + local_b0;
            local_f0 = 0x4be9d7ef4fbb9762;
            local_f8 = 0xce2ddbaa7dbb7df6;
            local_78 = local_60;
          }
          else if (uVar1 == 0x5506c4750fb2ce37) {
            local_78 = *local_a8;
            local_80 = local_a0 + local_b8;
            local_f0 = 0x7c093828bb00833e;
            if (local_c0 < local_80) {
              local_f0 = 0xdf059ee680802652;
            }
            local_f8 = 0xf9cd346d890069aa;
            local_48 = local_78;
          }
          else if (uVar1 == 0x6c91c3f9abd0e4f3) {
            thunk_FUN_1801f42e0(local_88,local_90);
            local_f0 = 0xf4b41e5a6050fad2;
            local_f8 = 0x7cb8d5896e9efc74;
          }
        }
        if (uVar1 != 0x1b45d7e064b6286b) break;
        local_68 = *(longlong *)(local_50 + -8);
        local_f0 = 0x673fd51a33d549f2;
        if ((ulonglong)((local_50 + local_d0) - local_68) < local_c8) {
          local_f0 = 0x3d765a06e5a9a00e;
        }
        local_f8 = 0x95857c8921520c07;
      }
      if (uVar1 != 0x26c8aa8b09804ff8) break;
      local_60 = *(longlong *)(local_48 + -8);
      local_f0 = 0x87c47a40b8d8aa77;
      if ((ulonglong)((local_48 + local_d0) - local_60) < local_c8) {
        local_f0 = 0xa38e07c1b4a0a4b;
      }
      local_f8 = 0x31efbd8c4a6d3f66;
    }
  } while (uVar1 != 0xf2baa993128745f5);
LAB_18011f858:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_e4,local_d8);
}



ulonglong FUN_18011f8b0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_50 = 4;
  local_48 = 0;
  local_90 = 0x28;
  local_4c = 0;
  local_88 = 1;
  local_80 = 0xfff;
  local_78 = 0x20;
  local_39 = 0;
  local_58 = 0xf;
  local_70 = 4;
  local_68 = -8;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_18011fc39;
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
    FUN_1801223d8(&DAT_1802a4830,&DAT_18027ed6e,0x19,0x19,&DAT_1802a484c);
    local_d8 = &DAT_1802a4830;
    local_d0 = 0x18;
    FUN_1801223d8(&DAT_1802a4850,&DAT_18027edba,0x11,5,&DAT_1802a4858);
    local_c8 = &DAT_1802a4850;
    local_c0 = local_70;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_18011fbe7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_18011fc27;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1801223d8(&DAT_1802a485c,&DAT_18027ede2,0x1b,0x22,&DAT_1802a4880);
      local_b8 = &DAT_1802a485c;
      local_b0 = 0x21;
      FUN_1801223d8(&DAT_1802a4850,&DAT_18027edba,0x11,5,&DAT_1802a4858);
      local_a8 = &DAT_1802a4850;
      local_a0 = local_70;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_18011fbe7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_18011fc27;
  }
  lVar10 = *local_60;
  uVar13 = local_88 + uVar9;
  lVar11 = lVar10;
  if (local_80 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_78 <= (ulonglong)((lVar10 + local_68) - lVar11)) {
LAB_18011fc39:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_90;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_18011fc27:
  return uVar12 & 0xffffffff;
}



void Unwind_18011fc60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



ulonglong FUN_18011fc90(undefined8 param_1,char *param_2)

{
  char *_Buf1;
  byte *pbVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  char ****ppppcVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 ***local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
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
  ulonglong local_110;
  undefined8 ***local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 ***local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  char ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  uint local_74;
  longlong local_70;
  ulonglong local_68;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  char local_59;
  ulonglong local_58;
  char local_4a;
  char local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_f8 = 2;
  local_d0 = 6;
  local_c8 = 0xffffffffffffffff;
  local_68 = 0;
  local_5c = 0x20;
  local_e8 = 0x28;
  local_74 = 0;
  local_cc = 0x20;
  local_70 = 1;
  local_e0 = 0xfff;
  local_c0 = 0x20;
  local_49 = '\0';
  local_5b = 0x1a;
  local_100 = 0x10;
  local_4a = '/';
  local_58 = 0xf;
  local_d8 = -8;
  local_5a = 1;
  local_59 = -0x41;
  if ((DAT_1802a4701 & 1) == 0) {
    uVar18 = (*DAT_18027e9c8)(param_1,param_2);
    return uVar18;
  }
  cVar5 = FUN_1801b3c30(param_2,0x20);
  if (cVar5 == '\0') {
LAB_18011ffa9:
    local_98 = (char ***)0x0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = local_58;
LAB_18011ffcc:
    (*DAT_18027e9c8)(param_1,param_2);
  }
  else {
    uVar18 = *(ulonglong *)(param_2 + 0x10);
    uVar23 = local_c8 + uVar18;
    if (*(ulonglong *)(param_2 + 0x18) <= uVar23) goto LAB_18011ffa9;
    pcVar17 = param_2;
    if (local_100 <= *(ulonglong *)(param_2 + 0x18)) {
      pcVar17 = *(char **)param_2;
    }
    cVar5 = FUN_1801b3c30(pcVar17,uVar18);
    uVar11 = local_f8;
    if (cVar5 == '\0') goto LAB_18011ffa9;
    local_98 = (char ***)0x0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = local_58;
    if ((uVar18 < local_f8) || (*pcVar17 != local_4a)) goto LAB_18011ffcc;
    _Buf1 = pcVar17 + 1;
    if (local_70 + uVar18 < local_100) {
      uStack_1f0 = 0;
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
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = (undefined8 ****)0x0;
      local_1f8 = (ulonglong)local_5a;
      uStack_210 = (ulonglong)local_5a << 8;
      uVar15 = 1;
      do {
        uVar11 = uVar15;
        if (*(char *)((longlong)&local_218 + (ulonglong)(byte)pcVar17[uVar15]) != '\0') break;
        lVar14 = uVar15 + 1;
        uVar15 = uVar15 + 1;
        uVar11 = local_c8;
      } while (pcVar17 + lVar14 < pcVar17 + uVar18);
LAB_1801200b6:
      if (uVar11 == local_c8) {
        pcVar17 = (char *)0x0;
        uVar15 = local_68;
      }
      else {
        uVar15 = uVar18 - uVar11;
        if (uVar18 < uVar11) {
          FUN_1801209f0();
          pcVar3 = (code *)swi(3);
          uVar18 = (*pcVar3)();
          return uVar18;
        }
        pcVar17 = pcVar17 + uVar11;
        if (uVar11 + local_c8 <= uVar23) {
          uVar23 = uVar11 + local_c8;
        }
      }
      if (uVar23 == local_68) goto LAB_18011ffcc;
    }
    else {
      FUN_1801223d8(&DAT_1802a4884,&DAT_18027fd17,0x12,3,&DAT_1802a4888);
      uVar15 = FUN_1801d8760(_Buf1,uVar23,&DAT_1802a4884,uVar11);
      uVar11 = local_70 + uVar15;
      if (uVar15 != local_c8) goto LAB_1801200b6;
      pcVar17 = (char *)0x0;
      uVar15 = local_68;
    }
    local_b8 = (undefined8 ****)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = local_58;
    uVar6 = FUN_1801da264(&DAT_18027e9d8);
    if (uVar6 != local_74) {
      FUN_1801da68c(5);
    }
    puVar9 = DAT_1802a46e8;
    if (DAT_18027ea24 == 0x7fffffff) {
      DAT_18027ea24 = 0x7ffffffe;
      FUN_1801da68c(local_d0);
    }
    for (; local_f0 = uVar15, puVar9 != DAT_1802a46f0; puVar9 = puVar9 + 8) {
      puVar16 = puVar9;
      if (local_58 < (ulonglong)puVar9[3]) {
        puVar16 = (undefined8 *)*puVar9;
      }
      uVar18 = local_68;
      if (uVar23 == puVar9[2]) {
        while( true ) {
          bVar19 = local_5c;
          if (local_5b <= (byte)(local_59 + _Buf1[uVar18])) {
            bVar19 = 0;
          }
          bVar21 = local_5c;
          if (local_5b <= (byte)(local_59 + *(byte *)((longlong)puVar16 + uVar18))) {
            bVar21 = 0;
          }
          if ((byte)(_Buf1[uVar18] | bVar19) != (*(byte *)((longlong)puVar16 + uVar18) | bVar21)) break;
          uVar18 = uVar18 + local_70;
          if (uVar18 == uVar23) {
            ppppuVar12 = (undefined8 ****)(puVar9 + 4);
            if (&local_b8 != ppppuVar12) {
              uVar18 = puVar9[6];
              if (local_58 < (ulonglong)puVar9[7]) {
                ppppuVar12 = (undefined8 ****)puVar9[4];
              }
              if (local_58 < uVar18) {
                FUN_18007f460(&local_b8,uVar18);
              }
              else {
                local_a8 = uVar18;
                FUN_1802079d0(&local_b8,ppppuVar12);
                *(char *)((longlong)&local_b8 + uVar18) = local_49;
              }
            }
            goto LAB_180120251;
          }
        }
      }
    }
LAB_180120251:
    FUN_1801da26c(&DAT_18027e9d8);
    if (local_a8 == local_68) {
      if ((DAT_18027ea28 & 1) == 0) {
LAB_18012062f:
        bVar4 = false;
      }
      else {
        local_218 = (undefined8 ****)0x0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_200 = local_58;
        uVar18 = local_68;
        if (local_58 < uVar23) {
          FUN_180002240(&local_218,uVar23);
          local_208 = local_68;
          uVar18 = local_68;
        }
        while (uVar11 = local_f8, uVar15 = uStack_210, ppppuVar12 = (undefined8 ****)local_218, uVar20 = local_208,
              uVar22 = uStack_200, uVar18 < uVar23) {
          bVar19 = _Buf1[uVar18];
          if ((char)bVar19 < '\0') {
            if (((bVar19 & 0xee6a08e0) != 0xc0) || (uVar23 <= local_70 + uVar18)) {
LAB_1801204bb:
              if (local_58 < uStack_200) {
                uVar18 = local_70 + uStack_200;
                if (local_e0 < uVar18) {
                  ppppuVar12 = (undefined8 ****)local_218[-1];
                  if (local_c0 <= (ulonglong)((longlong)local_218 + (local_d8 - (longlong)ppppuVar12)))
                  goto LAB_180120893;
                  uVar18 = uStack_200 + local_e8;
                }
                thunk_FUN_1801f42e0(ppppuVar12,uVar18);
                uVar15 = local_68;
                ppppuVar12 = (undefined8 ****)0x0;
                uVar20 = local_68;
                uVar22 = local_58;
              }
              else {
                uVar15 = local_68;
                ppppuVar12 = (undefined8 ****)0x0;
                uVar20 = local_68;
                uVar22 = local_58;
              }
              break;
            }
            uVar7 = (uint)(_Buf1[local_70 + uVar18] & 0x3f) | (uint)bVar19 << ((byte)local_d0 & 0x1f) & 0x7c0;
            uVar6 = 0;
            if (uVar7 - 0x410 < local_cc) {
              uVar6 = local_cc;
            }
            iVar8 = uVar7 + uVar6;
            uVar6 = iVar8 - 0x430;
            if (iVar8 == 0x401) {
              uVar6 = 0x21;
            }
            if (((0x21 < uVar6) || ((0x2ffffffffU >> ((byte)uVar6 & 0x3f) & 1) == 0)) ||
               ((&PTR_DAT_180218630)[uVar6][4] == local_49)) goto LAB_1801204bb;
            if (local_208 < uStack_200) {
              uVar15 = local_70 + local_208;
              ppppuVar12 = &local_218;
              if (local_58 < uStack_200) {
                ppppuVar12 = (undefined8 ****)local_218;
              }
              pcVar2 = (char *)((longlong)ppppuVar12 + local_208);
              local_208 = uVar15;
              *pcVar2 = (&PTR_DAT_180218630)[uVar6][4];
              *(char *)((longlong)ppppuVar12 + uVar15) = local_49;
              uVar18 = uVar18 + uVar11;
            }
            else {
              FUN_18006a970(&local_218,local_70);
              uVar18 = uVar18 + uVar11;
            }
          }
          else if (local_208 < uStack_200) {
            uVar11 = local_70 + local_208;
            ppppuVar12 = &local_218;
            if (local_58 < uStack_200) {
              ppppuVar12 = (undefined8 ****)local_218;
            }
            pbVar1 = (byte *)((longlong)ppppuVar12 + local_208);
            local_208 = uVar11;
            *pbVar1 = bVar19;
            *(char *)((longlong)ppppuVar12 + uVar11) = local_49;
            uVar18 = uVar18 + local_70;
          }
          else {
            FUN_18006a970(&local_218,local_70);
            uVar18 = uVar18 + local_70;
          }
        }
        if (local_58 < local_a0) {
          uVar18 = local_70 + local_a0;
          ppppuVar13 = (undefined8 ****)local_b8;
          local_110 = uVar15;
          local_108 = ppppuVar12;
          if (local_e0 < uVar18) {
            ppppuVar13 = (undefined8 ****)local_b8[-1];
            if (local_c0 <= (ulonglong)((longlong)local_b8 + (local_d8 - (longlong)ppppuVar13))) goto LAB_180120893;
            uVar18 = local_a0 + local_e8;
          }
          thunk_FUN_1801f42e0(ppppuVar13,uVar18);
          uVar15 = local_110;
          ppppuVar12 = (undefined8 ****)local_108;
        }
        local_b8 = ppppuVar12;
        uStack_b0 = uVar15;
        local_a8 = uVar20;
        local_a0 = uVar22;
        if (uVar20 != local_68) goto LAB_1801205f0;
        bVar4 = false;
      }
    }
    else {
LAB_1801205f0:
      uVar18 = local_f0;
      if (uVar23 == local_a8) {
        ppppuVar12 = (undefined8 ****)local_b8;
        if (local_a0 <= local_58) {
          ppppuVar12 = &local_b8;
        }
        uVar6 = memcmp(_Buf1,ppppuVar12,uVar23);
        if (uVar6 == local_74) goto LAB_18012062f;
      }
      local_88 = local_68;
      ppppcVar10 = (char ****)local_98;
      if (local_80 <= local_58) {
        ppppcVar10 = &local_98;
      }
      *(char *)ppppcVar10 = local_49;
      uVar23 = local_88;
      uVar18 = local_70 + uVar18 + local_a8;
      if (local_80 < uVar18) {
        FUN_180002240(&local_98,uVar18 - local_88);
      }
      if (uVar23 < local_80) {
        uVar18 = local_70 + uVar23;
        ppppcVar10 = (char ****)local_98;
        if (local_80 <= local_58) {
          ppppcVar10 = &local_98;
        }
        local_88 = uVar18;
        *(char *)((longlong)ppppcVar10 + uVar23) = local_4a;
        *(char *)((longlong)ppppcVar10 + uVar18) = local_49;
      }
      else {
        local_88 = uVar23;
        FUN_18006a970(&local_98,local_70);
      }
      ppppuVar12 = (undefined8 ****)local_b8;
      if (local_a0 <= local_58) {
        ppppuVar12 = &local_b8;
      }
      if (local_80 - local_88 < local_a8) {
        FUN_180066dd0(&local_98,local_a8,local_a8,ppppuVar12,local_a8);
      }
      else {
        uVar18 = local_88 + local_a8;
        ppppcVar10 = (char ****)local_98;
        if (local_80 <= local_58) {
          ppppcVar10 = &local_98;
        }
        lVar14 = (longlong)ppppcVar10 + local_88;
        local_88 = uVar18;
        FUN_1802079d0(lVar14,ppppuVar12);
        *(char *)((longlong)ppppcVar10 + uVar18) = local_49;
      }
      if (local_80 - local_88 < local_f0) {
        bVar4 = true;
        FUN_180066dd0(&local_98,local_f0,local_80 - local_88,pcVar17,local_f0);
      }
      else {
        uVar18 = local_88 + local_f0;
        ppppcVar10 = (char ****)local_98;
        if (local_80 <= local_58) {
          ppppcVar10 = &local_98;
        }
        lVar14 = (longlong)ppppcVar10 + local_88;
        local_88 = uVar18;
        FUN_1802079d0(lVar14,pcVar17);
        *(char *)((longlong)ppppcVar10 + uVar18) = local_49;
        bVar4 = true;
      }
    }
    if (local_58 < local_a0) {
      uVar18 = local_70 + local_a0;
      ppppuVar12 = (undefined8 ****)local_b8;
      if (local_e0 < uVar18) {
        ppppuVar12 = (undefined8 ****)local_b8[-1];
        if (local_c0 <= (ulonglong)((longlong)local_b8 + (local_d8 - (longlong)ppppuVar12))) goto LAB_180120893;
        uVar18 = local_a0 + local_e8;
      }
      thunk_FUN_1801f42e0(ppppuVar12,uVar18);
    }
    if (!bVar4) goto LAB_18011ffcc;
    (*DAT_18027e9c8)(param_1,&local_98);
  }
  if (local_58 < local_80) {
    uVar18 = local_70 + local_80;
    ppppcVar10 = (char ****)local_98;
    if (local_e0 < uVar18) {
      ppppcVar10 = (char ****)local_98[-1];
      if (local_c0 <= (ulonglong)((longlong)local_98 + (local_d8 - (longlong)ppppcVar10))) {
LAB_180120893:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_74,local_68);
      }
      uVar18 = local_80 + local_e8;
    }
    thunk_FUN_1801f42e0(ppppcVar10,uVar18);
  }
  return local_58;
}


