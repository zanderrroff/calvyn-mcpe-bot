#include "../include/aerialclient_types.h"


void Unwind_180180110(undefined8 param_1,longlong param_2)

{
  FUN_180180150(param_2 + 0x28);
  return;
}



void FUN_180180150(longlong param_1)

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

  local_a8 = 0x4671b0bb6c3510ec;
  local_b0 = 0x15023b7b2e3d81e7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_a8 ^ 0xce56b99100605f2c;
            uVar1 = local_a8 ^ local_b0;
            local_b0 = local_b0 ^ 0xce56b99100605f2c;
            local_a8 = uVar2;
            if ((longlong)uVar1 < 0xbf1a954685304ed) break;
            if ((longlong)uVar1 < 0x4c1d044cff596824) {
              if (uVar1 == 0xbf1a954685304ed) {
                *(uintptr_t *)(local_90 + 0x20) = local_a0;
                *local_58 = local_98;
                *(undefined1 *)local_88 = 0;
                local_50 = *local_68;
                local_a8 = 0x6df9517319d6a7fa;
                if (local_50 != 0) {
                  local_a8 = 0x919b8c4440ce82dd;
                }
                local_b0 = 0xc387ecfdef674452;
              }
              else if (uVar1 == 0x21ca4dc3a903f584) {
                local_88 = (longlong *)(local_90 + 0x10);
                local_58 = (ulonglong *)(local_90 + 0x28);
                local_80 = *(ulonglong *)(local_90 + 0x28);
                local_a8 = 0x64234f2f0ad22613;
                if (local_80 <= local_98) {
                  local_a8 = 0xe4cb4637d6c58069;
                }
                local_b0 = 0xef3aef63be968484;
              }
            }
            else if (uVar1 == 0x521c60b9afa9c68f) {
              thunk_FUN_1801f42e0(local_50,0x38);
              local_a8 = 0x8bfdca9262fe3236;
              local_b0 = 0x2583771c944fd19e;
            }
            else if (uVar1 == 0x53738bc04208910b) {
              local_98 = 0xf;
              local_a0 = 0;
              local_68 = (longlong *)(param_1 + 8);
              local_90 = *(longlong *)(param_1 + 8);
              local_a8 = 0xedd0f4e43f29a6b1;
              if (local_90 != 0) {
                local_a8 = 0x626404a9609bb09d;
              }
              local_b0 = 0x43ae496ac9984519;
            }
            else if (uVar1 == 0x4c1d044cff596824) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a0);
            }
          }
          if ((longlong)uVar1 < -0x208c8f5c31adbaae) break;
          if (uVar1 == 0xdf7370a3ce524552) {
            local_60 = *(longlong *)(local_48 + -8);
            local_a8 = 0xbdbfd7a952e00241;
            if (0x1f < (local_48 - local_60) - 8U) {
              local_a8 = 0x12998c674c12f28c;
            }
            local_b0 = 0x5e84882bb34b9aa8;
          }
          else if (uVar1 == 0xe33b5f82e1ab98e9) {
            local_78 = local_80 + 0x28;
            local_a8 = 0xd9ba5b68f550a9da;
            local_b0 = 0xb1d983275bfa5a0;
            local_70 = local_60;
          }
        }
        if (uVar1 != 0x8b19a04cb444a297) break;
        local_70 = *local_88;
        local_78 = local_80 + 1;
        local_a8 = 0xc13bb8a5ff5509ee;
        if (local_78 < 0x1000) {
          local_a8 = 0xccef0b5cb1e840c6;
        }
        local_b0 = 0x1e48c80631074cbc;
        local_48 = local_70;
      }
      if (uVar1 != 0xd2a7c35a80ef0c7a) break;
      thunk_FUN_1801f42e0(local_70,local_78);
      local_a8 = 0x3866ac7541df01e;
      local_b0 = 0x877c3933c4ef4f3;
    }
  } while (uVar1 != 0xae7ebd8ef6b1e3a8);
  return;
}



void FUN_1801805f0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong local_1a0;
  ulonglong local_198;
  char local_189;
  longlong *local_188;
  ulonglong local_180;
  ulonglong local_178;
  longlong local_170;
  int local_164;
  ulonglong local_160;
  ulonglong local_158;
  longlong *local_150;
  longlong *local_148;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong *local_128;
  ulonglong local_120;
  longlong local_108;
  longlong *local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;

  local_198 = 0x78d94e7a7a742898;
  local_1a0 = 0x9da812ce36781c70;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar9 = local_198 ^ 0x83cc56649a22140e;
              uVar6 = local_198 ^ local_1a0;
              local_1a0 = local_1a0 ^ 0x83cc56649a22140e;
              local_198 = uVar9;
              if (-0x3a49ab29f53c0c11 < (longlong)uVar6) break;
              if ((longlong)uVar6 < -0x673b3556a871d78d) {
                if ((longlong)uVar6 < -0x70e947631cb5c390) {
                  if (uVar6 == 0x8040d557ccd3eb96) {
                    local_188 = local_d0;
                    local_150 = (longlong *)*local_d0;
                    local_178 = local_d0[4];
                    if (local_138 < (ulonglong)local_d0[5]) {
                      local_148 = (longlong *)local_d0[2];
                    }
                    else {
                      local_148 = local_d0 + 2;
                    }
                    local_189 = local_178 == local_180;
                    local_198 = 0x8d1477e96f66d5bf;
                    if ((bool)local_189) {
                      local_198 = 0xf4a880aa7375cb51;
                    }
                    local_1a0 = 0xcaff016a8bc8d0c5;
                    local_120 = local_140;
                  }
                  else if (uVar6 == 0x8aa685fc8c4b184d) {
                    local_d8 = (longlong *)local_a8[1];
                    local_198 = 0x2992441a1914e5bb;
                    if (local_178 == local_d8[4]) {
                      local_198 = 0xbe8c3d48973690d9;
                    }
                    if (local_138 < (ulonglong)local_d8[5]) {
                      local_48 = (longlong *)local_d8[2];
                    }
                    else {
                      local_48 = local_d8 + 2;
                    }
                    local_1a0 = 0x235f0baea2608e2a;
                  }
                  else if (uVar6 == 0x8d87ca91c7b60c66) {
                    iVar5 = memcmp(local_148,local_48,local_178);
                    local_198 = 0xb2cbfaa8b359d22b;
                    if (iVar5 == local_164) {
                      local_198 = 0x7db0e1ca02ee4a4a;
                    }
                    local_1a0 = 0xb806b51c082db9ba;
                  }
                }
                else if (uVar6 == 0x8f16b89ce34a3c70) {
                  local_198 = 0x2e8b7c438962a58f;
                  if (local_189 != '\0') {
                    local_198 = 0xc2944c6b498b219a;
                  }
                  local_1a0 = 0x74432515c079c3a3;
                }
                else if (uVar6 == 0x9397444005ec4820) {
                  local_78 = local_178 & 0xfffffffffffffffc;
                  local_198 = 0x7d1dd3cc2f3e370c;
                  local_1a0 = 0x77442a8632f1c465;
                  local_c0 = local_180;
                  local_b8 = local_140;
                  local_b0 = local_180;
                }
                else if (uVar6 == 0x93c97e00a309c98b) {
                  local_198 = 0xef6757832746d09;
                  if (local_150 == local_128) {
                    local_198 = 0x3f0f8bf5a548c515;
                  }
                  local_1a0 = 0x8eb6a02ffea7869f;
                  local_d0 = local_150;
                }
              }
              else if ((longlong)uVar6 < -0x4e46d425a410bc76) {
                if (uVar6 == 0x98c4caa9578e2873) {
                  local_120 = (*(byte *)((longlong)local_148 + local_a0) ^ local_98) * local_170;
                  local_a0 = local_a0 + local_160;
                  local_90 = local_90 + local_160;
                  local_198 = 0x1f2a098706eda8e;
                  if (local_90 == local_f8) {
                    local_198 = 0xa761ebf1df5de969;
                  }
                  local_1a0 = 0x99366a3127e0f2fd;
                  local_98 = local_120;
                }
                else if (uVar6 == 0x9dd336e635561ef3) {
                  local_198 = 0xeb59eae3984ff7aa;
                  if (local_189 != '\0') {
                    local_198 = 0xa36874a4553a083c;
                  }
                  local_1a0 = 0x66de20725ff9fbcc;
                }
                else if (uVar6 == 0xa5ea41aa4649bfe1) {
                  local_198 = 0x9818facbbe453715;
                  if (local_e8 == local_e0) {
                    local_198 = 0x42ee1ca343e65043;
                  }
                  local_1a0 = 0x12be7f37320e2f58;
                  local_c8 = local_e0;
                  local_a8 = local_e0;
                }
              }
              else if ((longlong)uVar6 < -0x46a65b0a842ff947) {
                if (uVar6 == 0xb6d7697e89f2e239) {
                  local_58 = *local_e0;
                  local_198 = 0x2f5f57dfc86f035;
                  if ((longlong *)local_58 == local_188) {
                    local_198 = 0x6d3167290a8dd211;
                  }
                  local_1a0 = 0xd4fbb2a86193e9f6;
                }
                else if (uVar6 == 0xb1b92bda5bef438a) {
                  return;
                }
              }
              else if (uVar6 == 0xb959a4f57bd006b9) {
                local_e0 = (longlong *)*local_130;
                local_198 = 0x1899a4ca1b09e4c;
                if (local_178 == local_e0[4]) {
                  local_198 = 0x2b75637a04b31ddd;
                }
                if (local_138 < (ulonglong)local_e0[5]) {
                  local_50 = (longlong *)local_e0[2];
                }
                else {
                  local_50 = local_e0 + 2;
                }
                local_1a0 = 0xa463dbe6e7f921ad;
              }
              else if (uVar6 == 0xb9cad5816b1e3be7) {
                *local_130 = local_188;
                local_198 = 0xc8b485ad5aea571b;
                local_1a0 = 0x5b7dfbadf9e39e90;
              }
            }
            if ((longlong)uVar6 < 0xacd4fb4bb746b91) break;
            if ((longlong)uVar6 < 0x5050639471e87f1b) {
              if (uVar6 == 0xacd4fb4bb746b91) {
                local_198 = 0x6b6e6d36ed099915;
                if (local_e8 == local_d8) {
                  local_198 = 0xb1988b5e10aafe43;
                }
                local_1a0 = 0xe1c8e8ca61428158;
                local_c8 = local_d8;
                local_a8 = local_d8;
              }
              else if (uVar6 == 0x3e5781c0f8bd1b94) {
                lVar10 = *local_100;
                lVar7 = (*local_70 & local_120) << ((byte)local_158 & 0x3f);
                local_f0 = (undefined8 *)(lVar10 + lVar7);
                local_130 = (undefined8 *)(lVar10 + lVar7 + 8);
                local_e8 = *(longlong **)(lVar10 + lVar7);
                local_198 = 0xc3529c4f9896f02;
                if (local_e8 == local_128) {
                  local_198 = 0xdb78d2e62d98e8b3;
                }
                local_1a0 = 0xb56c8d31825969bb;
              }
              else if (uVar6 == 0x47eb7683e4ae057a) {
                local_f8 = local_178 & 3;
                local_88 = local_180;
                local_80 = local_140;
                local_198 = 0x1e0412068f3acebb;
                if (local_178 < local_158) {
                  local_198 = 0x7a4f49f84b7d94c4;
                }
                local_1a0 = 0x8d9356468ad6869b;
              }
            }
            else if ((longlong)uVar6 < 0x6e145fd7afc18108) {
              if (uVar6 == 0x5050639471e87f1b) {
                puVar1 = (undefined8 *)local_188[1];
                *puVar1 = local_150;
                puVar2 = (undefined8 *)local_150[1];
                *puVar2 = local_c8;
                puVar3 = (undefined8 *)local_c8[1];
                *puVar3 = local_188;
                local_c8[1] = (longlong)puVar2;
                local_150[1] = (longlong)puVar1;
                local_188[1] = (longlong)puVar3;
                *local_f0 = local_188;
                local_198 = 0x8a714a8c6c29a62b;
                local_1a0 = 0x19b8348ccf206fa0;
              }
              else if (uVar6 == 0x5ac85956491b662c) {
                iVar5 = memcmp(local_148,local_50,local_178);
                local_198 = 0x8d5887efec675a41;
                if (iVar5 == local_164) {
                  local_198 = 0x9e65af3b23dc0799;
                }
                local_1a0 = 0x28b2c645aa2ee5a0;
              }
            }
            else if (uVar6 == 0x6e145fd7afc18108) {
              *local_f0 = local_188;
              *local_130 = local_188;
              local_198 = 0x29afb12aa387bf8d;
              local_1a0 = 0xba66cf2a008e7606;
            }
            else if (uVar6 == 0x6f048bc74e887c9d) {
              uVar6 = local_108 + param_2 | local_160;
              lVar10 = 0x3f;
              if (uVar6 != 0) {
                for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              bVar8 = 0x40 - ((byte)lVar10 ^ 0x3f);
              lVar10 = local_160 << (bVar8 & 0x3f);
              local_128 = *(longlong **)(param_1 + 8);
              FUN_18017e670(local_100,2L << (bVar8 & 0x3f));
              local_70 = (ulonglong *)(param_1 + 0x30);
              *(longlong *)(param_1 + 0x30) = local_108 + lVar10;
              *(longlong *)(param_1 + 0x38) = lVar10;
              local_d0 = (longlong *)**(longlong **)(param_1 + 8);
              local_198 = 0x73557ba8f9b1e505;
              if (local_d0 == local_128) {
                local_198 = 0x42ac85256e8d4d19;
              }
              local_1a0 = 0xf315aeff35620e93;
            }
          }
          if (-0xe686fea5feb69ba < (longlong)uVar6) break;
          if (uVar6 == 0xc5b654d60ac3f3f0) {
            lVar10 = *local_d8;
            puVar1 = (undefined8 *)local_188[1];
            *puVar1 = local_150;
            plVar4 = (longlong *)local_150[1];
            *plVar4 = lVar10;
            puVar2 = *(undefined8 **)(lVar10 + 8);
            *puVar2 = local_188;
            *(longlong **)(lVar10 + 8) = plVar4;
            local_150[1] = (longlong)puVar1;
            local_188[1] = (longlong)puVar2;
            local_198 = 0x502599ccdb4f6ca0;
            local_1a0 = 0xc3ece7cc7846a52b;
          }
          else if (uVar6 == 0xd60e47d59d1519c3) {
            puVar1 = (undefined8 *)local_188[1];
            *puVar1 = local_150;
            plVar4 = (longlong *)local_150[1];
            *plVar4 = local_58;
            puVar2 = *(undefined8 **)(local_58 + 8);
            *puVar2 = local_188;
            *(longlong **)(local_58 + 8) = plVar4;
            local_150[1] = (longlong)puVar1;
            local_188[1] = (longlong)puVar2;
            local_198 = 0x410e01e9f0afb631;
            local_1a0 = 0xf8c4d4689bb18dd6;
          }
          else if (uVar6 == 0xe5715cb44c0c34e8) {
            local_170 = 0x100000001b3;
            local_158 = 4;
            local_108 = -1;
            local_138 = 0xf;
            local_140 = 0xcbf29ce484222325;
            local_180 = 0;
            local_160 = 1;
            local_164 = 0;
            local_100 = (longlong *)(param_1 + 0x18);
            local_198 = 0x2013f50ec29e014a;
            if (0x800000000000000 < param_2) {
              local_198 = 0xbe80eedc2c02eb90;
            }
            local_1a0 = 0x4f177ec98c167dd7;
          }
        }
        if ((longlong)uVar6 < -0x823e0413e54eda1) break;
        if (uVar6 == 0xf7dc1fbec1ab125f) {
          local_98 = local_80;
          local_a0 = local_88;
          local_90 = local_180;
          local_198 = 0x6b46c03b099afdc3;
          local_1a0 = 0xf3820a925e14d5b0;
        }
        else if (uVar6 == 0xa59f94a1dcff369) {
          local_b8 = ((ulonglong)*(byte *)((longlong)local_148 + local_c0 + 3) ^
                     ((ulonglong)*(byte *)((longlong)local_148 + local_c0 + 2) ^
                     ((ulonglong)*(byte *)((longlong)local_148 + local_c0 + 1) ^
                     (*(byte *)((longlong)local_148 + local_c0) ^ local_b8) * local_170) * local_170) * local_170) *
                     local_170;
          local_c0 = local_c0 + local_158;
          local_b0 = local_b0 + local_158;
          local_198 = 0xd83f3ebb0e287908;
          if (local_b0 == local_78) {
            local_198 = 0x2170fb5c95665b07;
          }
          local_1a0 = 0xd266c7f113e78a61;
          local_68 = local_b8;
          local_60 = local_c0;
        }
      }
      if (uVar6 != 0xf3163cad8681d166) break;
      local_198 = 0x9af48c7bc846a611;
      if (local_f8 == local_180) {
        local_198 = 0x537f1205f150afda;
      }
      local_1a0 = 0x6d2893c509edb44e;
      local_120 = local_68;
      local_88 = local_60;
      local_80 = local_68;
    }
  } while (uVar6 != 0xf1979015a0149647);
  FUN_18018143d(&DAT_1802a71e0,&DAT_180298bcd,0x15,0x1a,&DAT_1802a71fc);
  FUN_1801d7524(&DAT_1802a71e0);
}



void FUN_18018143d(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x87cc4dcaa72397b;
  local_68 = 0x3d85701ffea05fad;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x4d0511c62d3d40e3;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x4d0511c62d3d40e3;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x34ab17ca1b1d2431) break;
          if (uVar1 == 0x34ab17ca1b1d2431) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0xa1e9fd6b1c04d7b0;
            if (local_54 == param_4) {
              local_60 = 0x30ad149ea871b855;
            }
            local_68 = 0x759778152b09305a;
          }
          else if (uVar1 == 0x453a6c8b8378880f) {
            *param_5 = 1;
            local_60 = 0x89fcabfbca0d5b6b;
            local_68 = 0x45bbe0dc760c9f65;
          }
          else if (uVar1 == 0x35f9b4c354d266d6) {
            local_60 = 0xdca4744419f40c45;
            if (*param_5 == 1) {
              local_60 = 0xc49dba1d92f82fa1;
            }
            local_68 = 0x8daf13a2ef9ebaf;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0x2b817a81c8f21816) break;
        if (uVar1 == 0xd47e857e370de7ea) {
          local_69 = local_6a;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x941d1cc367a2d097;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0x7ce87b76e2fd5b4d;
          }
          local_68 = 0xb34b760d5356a44d;
        }
        else if (uVar1 == 0x27566ace34f474da) {
          local_6b = -(local_6c - local_69 ^ local_6d);
          local_60 = 0x26d34348648e3f88;
          local_68 = 0x127854827f931bb9;
        }
      }
      if (uVar1 != 0xcfa30d7bb1abff00) break;
      local_6b = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0x1bb93ef265a51c7a;
      local_68 = 0x2f1229387eb8384b;
    }
  } while (uVar1 != 0xcc474b27bc01c40e);
  return;
}



undefined8 * FUN_180181700(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xde78ed224bb3fba3;
  local_50 = 0xee66b3be04cf85cf;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x70f9ff4009d68241;
        if ((longlong)uVar1 < 0x301e5e9c4f7c7e6c) break;
        if (uVar1 == 0x517f2d8181bc5216) {
          atexit(FUN_1801818a0);
          _Init_thread_footer(&DAT_1802a7220);
          local_48 = 0x40ecdc957ac84486;
          local_50 = 0x6632f4fee6386520;
        }
        else {
          local_48 = local_48 ^ 0x70f9ff4009d68241;
          if (uVar1 == 0x301e5e9c4f7c7e6c) {
            local_48 = 0x252258bf7396f396;
            if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
                DAT_1802a7220) {
              local_48 = 0x8b96ffa209844d55;
            }
            local_50 = 0x3fc70d4ef66d230;
          }
        }
      }
      if (uVar1 != 0x886a8f76e6e29f65) break;
      FUN_1801d62d8(&DAT_1802a7220);
      local_48 = 0xc9d71730267028f;
      if (DAT_1802a7220 == -1) {
        local_48 = 0x7b3c74991f2b713f;
      }
      local_50 = 0x2a4359189e972329;
    }
    local_48 = local_48 ^ 0x70f9ff4009d68241;
  } while (uVar1 != 0x26de286b9cf021a6);
  return &DAT_1802a7200;
}



void FUN_1801818a0(void)

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

  local_90 = 0xae3211e3187780db;
  local_98 = 0x6c2b6cc92b837a12;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xe6844bfe594be969;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xe6844bfe594be969;
          local_90 = uVar2;
          if (-0x3de682d5cc0b0538 < (longlong)uVar1) break;
          if (uVar1 == 0x87857e388fff523a) {
            local_70 = *(longlong *)(local_88 + -8);
            local_90 = 0x7fd4c0fa330a8c6d;
            if ((local_68 - local_70) - 8U < 0x20) {
              local_90 = 0xe7901db1554d26dc;
            }
            local_98 = 0x4567f4004e0d128c;
          }
          else if (uVar1 == 0xa2f7e9b11b403450) {
            local_80 = local_60 + 0x27;
            local_90 = 0x451acb0fee6f3fb4;
            local_98 = 0x355efef5c36a8be3;
            local_78 = local_70;
          }
          else if (uVar1 == 0xb00010cdc79ede07) {
            local_68 = local_88;
            local_80 = DAT_1802a7210 - local_88;
            local_90 = 0xa1505468ee209e3b;
            if (0xfff < local_80) {
              local_90 = 0x56911faa4cda7856;
            }
            local_98 = 0xd1146192c3252a6c;
            local_78 = local_88;
            local_60 = local_80;
          }
        }
        if (0x4f8a91820fbc129a < (longlong)uVar1) break;
        if (uVar1 == 0xc2197d2a33f4fac9) {
          local_88 = DAT_1802a7200;
          local_90 = 0xd7ca6e8e35289f0;
          if (DAT_1802a7200 == 0) {
            local_90 = 0xf2f627a72b70456c;
          }
          local_98 = 0xbd7cb62524cc57f7;
        }
        else if (uVar1 == 0x3ab334fa7d079ee1) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0x704435fa2d05b457) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      DAT_1802a7200 = 0;
      uRam00000001802a7208 = 0;
      DAT_1802a7210 = 0;
      local_90 = 0x99ebcb9aa35e158b;
      local_98 = 0xd6615a18ace20710;
    }
  } while (uVar1 != 0x4f8a91820fbc129b);
  return;
}



undefined1 FUN_180181bb0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined1 local_91;
  ulonglong local_90;
  ulonglong local_88;
  uint local_7c;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  local_88 = 0xd30ea170152e7e1c;
  local_90 = 0x6238a7e7bd468613;
LAB_180181d20:
  do {
    while( true ) {
      uVar2 = local_88 ^ 0x3e82c01408bd07a8;
      uVar1 = local_88 ^ local_90;
      local_90 = local_90 ^ 0x3e82c01408bd07a8;
      local_88 = uVar2;
      if ((longlong)uVar1 < 0x2f55009be9f7ee14) break;
      if (uVar1 == 0x2f55009be9f7ee14) {
        local_50 = FUN_1801d4390(local_7c);
        local_a8 = &DAT_1802a7240;
        FUN_180183a32(&DAT_1802a7224,&DAT_180299a68,0x16,0x19);
        local_60 = &DAT_1802a7224;
        local_58 = 0x18;
        local_a8 = &DAT_1802a724c;
        FUN_180183a32(&DAT_1802a7244,&DAT_180299ab1,0x14,5);
        local_70 = &DAT_1802a7244;
        local_68 = 4;
        FUN_180177400(4,&local_70,&local_60,&local_50);
        local_88 = 0xce26281c1b2dac38;
        local_90 = 0xfde9997230449b6f;
        local_91 = 0;
      }
      else if (uVar1 == 0x5e8a00605863e952) {
        local_7c = FUN_1801d33e0();
        local_88 = 0x9d640f8b5e445c68;
        if (local_7c < 2) {
          local_88 = 0xaafba5dbfdf4591a;
        }
        local_90 = 0xb2310f10b7b3b27c;
      }
      else if (uVar1 == 0x33cfb16e2b693757) {
        if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_c8)) {
          return local_91;
        }
      }
    }
    if (uVar1 == 0xb1360697a868f80f) {
      local_78 = (undefined1 *)(param_1 + 0x18);
      local_88 = 0x488d1d2f70e0fd50;
      if (*(char *)(param_1 + 0x18) != '\0') {
        local_88 = 0x25c8ac2103ea2355;
      }
      local_90 = 0x16071d4f28831402;
    }
    else {
      if (uVar1 != 0x18caaacb4a47eb66) goto LAB_180181d20;
      *local_78 = 1;
      local_88 = 0xc7740bd298dfdf0a;
      local_90 = 0xf4bbbabcb3b6e85d;
    }
    local_91 = 1;
  } while( true );
}



void FUN_180181e80(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;

  local_68 = 0x74fea328370a1343;
  local_70 = 0x444e1ac9d87c5492;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_68 ^ 0x4304894ed6ea307e;
          uVar2 = local_68 ^ local_70;
          local_70 = local_70 ^ 0x4304894ed6ea307e;
          local_68 = uVar3;
          if (0x676b262bc461253 < (longlong)uVar2) break;
          if (uVar2 == 0x9fb20c6171df7287) {
            puVar1 = (undefined8 *)(local_50 + -8);
            local_50 = local_50 + -8;
            (**(code **)(*(longlong *)*puVar1 + 8))();
            local_58 = *param_1;
            local_68 = 0x89c5bf4f75ab58f9;
            if (local_50 == local_58) {
              local_68 = 0xed7a00c286571601;
            }
            local_70 = 0x1677b32e04742a7e;
          }
          else if (uVar2 == 0xc9b5a2adb397e082) {
            *local_60 = local_58;
            local_68 = 0x83055f3dba839b31;
            local_70 = 0xb1834b2b8287b43a;
          }
          else if (uVar2 == 0xfb0db3ec82233c7f) {
            local_68 = 0x9c4c830eedf78c2b;
            if (local_58 == *local_60) {
              local_68 = 0x677f35b5666443a2;
            }
            local_70 = 0x55f921a35e606ca9;
          }
        }
        if (0x3286141638042f0a < (longlong)uVar2) break;
        if (uVar2 == 0x676b262bc461254) {
          FUN_1801d4380(0);
          Sleep(0xfa);
          local_60 = param_1 + 1;
          local_50 = param_1[1];
          local_68 = 0x8b59a0468d13b9f3;
          if (local_50 == *param_1) {
            local_68 = 0x266db831c4c8e47f;
          }
          local_70 = 0x14ebac27fccccb74;
        }
        else if (uVar2 == 0x30b0b9e1ef7647d1) {
          local_48 = param_1 + 3;
          local_68 = 0x9edfab4b4919db2f;
          if ((char)param_1[3] != '\0') {
            local_68 = 0xca34b39feb6b4487;
          }
          local_70 = 0xcc4201fd572d56d3;
        }
      }
      if (uVar2 != 0x3286141638042f0b) break;
      FUN_1801d3470();
      *(undefined1 *)local_48 = 0;
      local_68 = 0xe0d7afab86677f58;
      local_70 = 0xb24a051d9853f2a4;
    }
  } while (uVar2 != 0x529daab61e348dfc);
  return;
}



undefined1 FUN_180182140(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined1 local_89;
  ulonglong local_88;
  ulonglong local_80;
  int local_74;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_80 = 0xc6460c09739e1710;
  local_88 = 0xd9fb88df153ab0f8;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_80 ^ 0x2410b695a207df9e;
        uVar1 = local_80 ^ local_88;
        local_88 = local_88 ^ 0x2410b695a207df9e;
        local_80 = uVar2;
        if (uVar1 != 0x1fbd84d666a4a7e8) break;
        local_74 = FUN_1801d41b0(0);
        local_89 = local_74 == 0;
        local_80 = 0x9614fed8eac4df6d;
        if ((bool)local_89) {
          local_80 = 0xdbc66b659605619e;
        }
        local_88 = 0xdd05fcd0335b9f7f;
      }
      if (uVar1 != 0x4b110208d99f4012) break;
      local_50 = FUN_1801d4390(local_74);
      local_98 = &DAT_1802a7270;
      FUN_180183a32(&DAT_1802a7250,&DAT_180299ae3,0x14,0x1e);
      local_60 = &DAT_1802a7250;
      local_58 = 0x1d;
      local_98 = &DAT_1802a724c;
      FUN_180183a32(&DAT_1802a7244,&DAT_180299ab1,0x14,5);
      local_70 = &DAT_1802a7244;
      local_68 = 4;
      FUN_180177400(4,&local_70,&local_60,&local_50);
      local_80 = 0xc84928cf796ea01c;
      local_88 = 0xce8abf7adc305efd;
    }
  } while (uVar1 != 0x6c397b5a55efee1);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_b8)) {
    return local_89;
  }
}



void FUN_180182360(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_98;
  local_70 = 0x2fb59f659afed47b;
  local_78 = 0x675139367224e762;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_70 ^ 0x219815d5f99955b3;
          uVar1 = local_70 ^ local_78;
          local_78 = local_78 ^ 0x219815d5f99955b3;
          local_70 = uVar2;
          if (0x2a881481e1dfccd3 < (longlong)uVar1) break;
          if (uVar1 == 0xdc87901ec08070f1) {
            *local_68 = param_2;
            *local_60 = *local_60 + 8;
            local_70 = 0x6eb1e621a4a97e28;
            local_78 = 0x4439f2a04576b2fc;
          }
          else if (uVar1 == 0x1020a417745adb08) {
            FUN_1801831c0(param_1,local_68,&local_50);
            local_70 = 0x81551e16cf26972f;
            local_78 = 0xabdd0a972ef95bfb;
          }
        }
        if (uVar1 != 0x48e4a653e8da3319) break;
        local_60 = param_1 + 1;
        local_50 = param_2;
        local_58 = (undefined8 *)thunk_FUN_1801d7d80(*param_1,param_1[1],param_2);
        local_68 = (undefined8 *)param_1[1];
        local_70 = 0xf36b4f3ccece6fa4;
        if (local_58 == local_68) {
          local_70 = 0xbd96548366eeacdf;
        }
        local_78 = 0xd9e35bbd2f11a370;
      }
      if (uVar1 != 0x64750f3e49ff0faf) break;
      local_70 = 0x7050adeebfc5f30d;
      if (local_58 == (undefined8 *)param_1[2]) {
        local_70 = 0xbcf799e70b1f58f4;
      }
      local_78 = 0xacd73df07f4583fc;
    }
  } while (uVar1 != 0x2a881481e1dfccd4);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
}



void FUN_180182570(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;

  local_78 = 0x1f690fe4f00ccfe8;
  local_80 = 0x6c1b7f6a335cc801;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_78 ^ local_80;
        local_80 = local_80 ^ 0x748680816889afae;
        if (-0x101bcf3b617cd636 < (longlong)uVar2) break;
        if (uVar2 == 0xb600eb172a5d1352) {
          lVar1 = *local_68;
          FUN_1802079d0(local_48,local_70,lVar1 - local_60);
          *local_68 = (lVar1 - local_60) + local_48;
          local_78 = 0xaf42fa00f5b64951;
          local_80 = 0x40a6cac46b35609a;
        }
        else {
          local_78 = local_78 ^ 0x748680816889afae;
          if (uVar2 == 0xbf025a5d873fab69) {
            local_48 = FUN_1801d8910(local_50,local_70,local_58);
            local_78 = 0x5559d4708aa32c98;
            if (local_48 == local_70) {
              local_78 = 0xcbd0fa33e7d1601;
            }
            local_80 = 0xe3593f67a0fe3fca;
          }
        }
      }
      if (uVar2 != 0x7372708ec35007e9) break;
      local_68 = param_1 + 1;
      local_70 = param_1[1];
      local_50 = thunk_FUN_1801d7d80(*param_1,local_70,param_2);
      local_78 = 0x1af8e7dce08507e;
      if (local_50 == local_70) {
        local_78 = 0x5149e4e4d7b4d2dc;
      }
      local_80 = 0xbeadd4204937fb17;
      local_60 = local_70;
      local_58 = param_2;
    }
    local_78 = local_78 ^ 0x748680816889afae;
  } while (uVar2 != 0xefe430c49e8329cb);
  return;
}



undefined1 FUN_180182740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_d9;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_108;
  local_d0 = 0xe57490c6d5a6ad8a;
  local_d8 = 0x67ea25c55b511f26;
  local_b8 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
LAB_180182810:
  do {
    while( true ) {
      uVar2 = local_d0 ^ 0xd5dfcdcd8d9198e6;
      uVar1 = local_d0 ^ local_d8;
      local_d8 = local_d8 ^ 0xd5dfcdcd8d9198e6;
      local_d0 = uVar2;
      if (0x15a86271043079f6 < (longlong)uVar1) break;
      if ((longlong)uVar1 < -0x6d94ccddc8a20c9b) {
        if (uVar1 == 0x829eb5038ef7b2ac) {
          local_c4 = -1;
          local_b0 = 4;
          local_c8 = 4;
          local_78 = local_b8;
          local_d0 = 0xff55a8caaad1be9;
          if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
              DAT_1802a7220) {
            local_d0 = 0x9127783547644791;
          }
          local_d8 = 0x848f1a4443543e66;
        }
        else if (uVar1 == 0x8b7a40c8e9f9258f) {
          local_d0 = 0x7d7a4853513e4b80;
          if (DAT_1802a7218 != '\0') {
            local_d0 = 0x2fae302096b8a315;
          }
          local_d8 = 0x90e872d4e858ece0;
        }
        else if (uVar1 == 0x8c8e72ba1b5b00d8) {
          local_50 = FUN_1801d4390(local_bc);
          local_e8 = (undefined8 *)&DAT_1802a7240;
          FUN_180183a32(&DAT_1802a7224,&DAT_180299a68,0x16,0x19);
          local_60 = &DAT_1802a7224;
          local_58 = 0x18;
          local_e8 = (undefined8 *)&DAT_1802a724c;
          FUN_180183a32(&DAT_1802a7244,&DAT_180299ab1,0x14,5);
          local_70 = &DAT_1802a7244;
          local_68 = local_b0;
          FUN_180177400(local_c8,&local_70,&local_60,&local_50);
          local_d0 = 0xae0e4e97935f94b1;
          local_d8 = 0xc695604ebf5bd613;
LAB_180182ca0:
          local_d9 = 0;
        }
      }
      else if ((longlong)uVar1 < -0x40b9bd0b811fb00b) {
        if (uVar1 == 0x926b3322375df365) {
          local_d0 = 0x8993b97e91d33121;
          if (DAT_1802a7218 != '\0') {
            local_d0 = 0xfe68e01ca9af2449;
          }
          local_d8 = 0xad39e4ffd7ef7ced;
        }
        else if (uVar1 == 0xa07ec8503c759210) {
          atexit(FUN_1801818a0);
          _Init_thread_footer(&DAT_1802a7220);
          local_d0 = 0x7f283c07e5fbe081;
          local_d8 = 0xf4527ccf0c02c50e;
        }
      }
      else if (uVar1 == 0xbf4642f47ee04ff5) {
        local_c0 = FUN_1801d36b0(local_b8,local_a8,local_a0);
        local_d0 = 0xbc35bdb1c37254aa;
        if (local_c0 == 0) {
          local_d0 = 0xa75d81a3fac05929;
        }
        local_d8 = 0xcfc6af7ad6c41b8b;
        local_d9 = 1;
      }
      else if (uVar1 == 0xed923a87b966a760) {
        local_d0 = 0xadd831616d8a9ee;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
            DAT_1802a7220) {
          local_d0 = 0xf8b51744fa0bdc20;
        }
        local_d8 = 0x98b6b03421855a8b;
      }
    }
    if ((longlong)uVar1 < 0x535104e37e4058a4) {
      if ((longlong)uVar1 < 0x27f43c3ddf4db106) {
        if (uVar1 == 0x15a86271043079f7) {
          FUN_1801d62d8(&DAT_1802a7220);
          local_d0 = 0x8442b7fdf06b6657;
          if (DAT_1802a7220 == local_c4) {
            local_d0 = 0xaf463f6525e7d1c8;
          }
          local_d8 = 0xf38f735199243d8;
        }
        else if (uVar1 == 0x24aa5d81463c4dcc) {
          local_bc = FUN_1801d33e0();
          local_d0 = 0x2d5126be20536708;
          if (local_bc < 2) {
            local_d0 = 0x96e948daa1df012b;
          }
          local_d8 = 0xa1df54043b0867d0;
        }
      }
      else if (uVar1 == 0x27f43c3ddf4db106) {
        atexit(FUN_1801818a0);
        _Init_thread_footer(&DAT_1802a7220);
        local_d0 = 0xed58ec363748b87d;
        local_d8 = 0x7f33df1400154b18;
      }
      else if (uVar1 == 0x37361cde9ad766fb) {
        DAT_1802a7218 = '\x01';
        local_d0 = 0x1242eabe46bf1128;
        local_d8 = 0x4113ee5d38ff498c;
      }
      goto LAB_180182810;
    }
    if ((longlong)uVar1 < 0x689b2ed92c0442a2) {
      if (uVar1 == 0x535104e37e4058a4) {
        local_d0 = 0xbaf6f092428cef0a;
        local_d8 = 0x5b0b2663c6ca0ff;
      }
      else if (uVar1 == 0x6003a770db8e86ab) {
        FUN_1801d62d8(&DAT_1802a7220);
        local_d0 = 0x7bfe03662dd71e20;
        if (DAT_1802a7220 == local_c4) {
          local_d0 = 0xce610c79c5c75c43;
        }
        local_d8 = 0xe99530441a8aed45;
      }
    }
    else {
      if (uVar1 == 0x73f312cb15b64f21) {
        local_50 = FUN_1801d4390(local_c0);
        local_e8 = (undefined8 *)&DAT_1802a7294;
        FUN_180183a32(&DAT_1802a7274,&DAT_180299b28,0x1c,0x1d);
        local_88 = &DAT_1802a7274;
        local_80 = 0x1c;
        local_e8 = (undefined8 *)&DAT_1802a724c;
        FUN_180183a32(&DAT_1802a7244,&DAT_180299ab1,0x14,5);
        local_98 = &DAT_1802a7244;
        local_90 = local_b0;
        local_e8 = &local_50;
        FUN_180182ee0(local_c8,&local_98,&local_88,&local_78);
        local_d0 = 0x2447cbf487739a7d;
        local_d8 = 0x4cdce52dab77d8df;
        goto LAB_180182ca0;
      }
      if (uVar1 == 0x689b2ed92c0442a2) {
        if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_108)) {
          return local_d9;
        }
      }
    }
  } while( true );
}



void FUN_180182ee0(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

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
  local_80 = 0x28;
  local_58 = 0;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_a0 = *param_3;
    local_98 = param_3[1];
    local_c0 = *param_4;
    local_d0 = 0xa000000000000000;
    local_b8 = *param_5;
    local_c8 = 0xb000000000000008;
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



void Unwind_180183110(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_180183150(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



bool FUN_180183190(void)

{
  uint uVar1;

  uVar1 = FUN_1801d3940();
  return (uVar1 & 0xfffffffb) == 0;
}



longlong FUN_1801831c0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  byte local_e0;
  longlong local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uintptr_t local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_f8 = 0x89bcb6ad7c350750;
  local_100 = 0xa9326511f7e8d18;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_f8 ^ 0xe674a7f6c9f701b6;
            uVar1 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0xe674a7f6c9f701b6;
            local_f8 = uVar3;
            if (0x55f9fdf3ad26ae2 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x34a4def4cfefc7cb) {
              if ((longlong)uVar1 < -0x4fa531f4d9032e5c) {
                if (uVar1 == 0x832f90fc634b8a48) {
                  local_d0 = 0x27;
                  local_e0 = 3;
                  local_a8 = 0;
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
                  local_f8 = 0xdddbedd50ef8b4d1;
                  if (local_f0 < 0x2000000000000000) {
                    local_f8 = 0x40984bcfa6d57adf;
                  }
                  local_100 = 0xbd4bc964b4fdbb62;
                  local_c0 = param_2;
                }
                else if (uVar1 == 0x8b0f3953663d3351) {
                  local_58 = local_98;
                  local_80 = *local_a0 - local_98;
                  local_f8 = 0x96a53e4e6357692e;
                  if (local_80 < 0x1000) {
                    local_f8 = 0x9f496faf3afbef5b;
                  }
                  local_100 = 0x9a16f070002985b8;
                  local_78 = local_98;
                  local_50 = local_80;
                }
              }
              else if (uVar1 == 0xb05ace0b26fcd1a4) {
                FUN_1802079d0(local_e8,*param_1,local_c0 - *param_1);
                FUN_1802079d0(local_90 + 8,param_2);
                local_f8 = 0xd684d4e0fb3a040e;
                local_100 = 0xc1fa7f1df090cd6e;
              }
              else if (uVar1 == 0xbc84d448c96466db) {
                *param_1 = local_e8;
                *local_c8 = local_e8 + local_60 * 8;
                *local_a0 = local_f0 * 8 + local_e8;
                return local_90;
              }
            }
            else if ((longlong)uVar1 < -0x3e48ef0bfa7d1ff) {
              if (uVar1 == 0xcb5b210b30103835) {
                lVar2 = FUN_1801d61c8(local_88 + local_d0);
                local_b8 = local_d0 + lVar2 & 0xffffffffffffffe0;
                *(longlong *)(local_b8 - 8) = lVar2;
                local_f8 = 0x88b4c0dd540e8961;
                local_100 = 0xe39d974de4ca1a50;
              }
              else if (uVar1 == 0xebaeb20a246deffb) {
                local_b8 = FUN_1801d61c8(local_88);
                local_f8 = 0xa55f6a5b34ebaeb8;
                local_100 = 0xce763dcb842f3d89;
              }
            }
            else if (uVar1 == 0xfc1b710f40582e01) {
              local_f8 = 0x7b6cc9d364d74bd7;
              if (local_f0 < 0x200) {
                local_f8 = 0xe94883fe95208409;
              }
              local_100 = 0x2e631f4b14d6bf2;
            }
            else if (uVar1 == 0xfdd382ab1228c1bd) {
              local_88 = local_f0 << (local_e0 & 0x3f);
              local_f8 = 0x2eb99277a4e792f5;
              if (local_f0 != local_a8) {
                local_f8 = 0xb98bb4e8547b2fc5;
              }
              local_100 = 0x4590c5e7142301c4;
              local_b8 = 0;
            }
          }
          if (0x418cdfbcef757b01 < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x177eabfd0baac960) {
            if (uVar1 == 0x55f9fdf3ad26ae3) {
              thunk_FUN_1801f42e0(local_78,local_80);
              local_f8 = 0x5fa88d34cd76ae59;
              local_100 = 0xe32c597c0412c882;
            }
            else if (uVar1 == 0xcb3ce3e637eec96) {
              local_48 = *(ulonglong *)(local_98 - 8);
              local_f8 = 0xb1b20c184abb7872;
              if (0x1f < (local_58 - local_48) - 8) {
                local_f8 = 0xb6a49f7f8640f791;
              }
              local_100 = 0xf03ed3a4a5ce0370;
            }
          }
          else if (uVar1 == 0x177eabfd0baac960) {
            local_98 = *param_1;
            local_f8 = 0x32929c893184212c;
            if (local_98 != 0) {
              local_f8 = 0x51971929edd74a6;
            }
            local_100 = 0x8e1648c1f8e047f7;
          }
          else if (uVar1 == 0x23eaa52497651f7c) {
            FUN_1802079d0(local_e8);
            local_f8 = 0xeb2b2cc7bb327a8;
            local_100 = 0x19cc19317019eec8;
          }
        }
        if ((longlong)uVar1 < 0x609024b1ba050fb3) break;
        if (uVar1 == 0x6b295790b0c49331) {
          local_e8 = local_b8;
          local_90 = local_b8 + local_68;
          *(undefined8 *)(local_b8 + local_68) = *param_3;
          local_f8 = 0x6c6ecac2daabe248;
          if (param_2 != *local_c8) {
            local_f8 = 0xffdea1ed6b322c90;
          }
          local_100 = 0x4f846fe64dcefd34;
        }
        else if (uVar1 == 0x798af827d59a2025) {
          local_f8 = 0x8de505ec42cec1c1;
          if (0x1ffffffffffffffb < local_f0) {
            local_f8 = 0x1d5414ef22a36296;
          }
          local_100 = 0x46be24e772def9f4;
        }
        else if (uVar1 == 0x609024b1ba050fb3) goto LAB_1801839b5;
      }
      if (uVar1 != 0x418cdfbcef757b02) break;
      local_80 = local_50 + local_d0;
      local_78 = local_48;
      local_f8 = 0x71c4b6666afaf701;
      local_100 = 0x749b29b950289de2;
    }
    if (uVar1 == 0x469a4cdb238ef4e1) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a8);
    }
  } while (uVar1 != 0x5bea3008507d9b62);
LAB_1801839b5:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_180183a32(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xc3ce1cb08d0dc713;
  local_68 = 0x90cc716e210c024e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xd74480c2025d40a2;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xd74480c2025d40a2;
          local_60 = uVar2;
          if (0x426d2b37b133d1e9 < (longlong)uVar1) break;
          if (uVar1 == 0xecc21ac738431359) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x9c55684bb7fce01a;
            local_68 = 0x86036bbe542fd153;
          }
          else if (uVar1 == 0x1a5603f5e3d33149) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0x7369e3bb44d5edf;
            if (local_54 == param_4) {
              local_60 = 0x7578c9bedbb899bc;
            }
            local_68 = 0x26f0089cde7af434;
          }
          else if (uVar1 == 0x21c696a76a37aaeb) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xd46ed9fe2cbc64db;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x7ac1e80ea5cca668;
            }
            local_68 = 0x38acc33914ff7782;
          }
        }
        if (0x5388c12205c26d87 < (longlong)uVar1) break;
        if (uVar1 == 0x426d2b37b133d1ea) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xd9df73aea3ac3f30;
          local_68 = 0xc389705b407f0e79;
        }
        else if (uVar1 == 0x53026ddeac01c55d) {
          local_60 = 0x313acc9475aa821;
          if (*param_5 == 1) {
            local_60 = 0x7dae90fdf15c3c20;
          }
          local_68 = 0x22d53a6e2d6d02ca;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x5388c12205c26d88) break;
      *param_5 = 1;
      local_60 = 0xdf63c354d2273269;
      local_68 = 0x801869c70e160c83;
    }
  } while (uVar1 != 0x5f7baa93dc313eea);
  return;
}



undefined * FUN_180183cf0(void)

{
  return &DAT_18029aa18;
}



void FUN_180183d00(longlong param_1)

{
  FILE *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 ***pppuVar11;
  wchar_t ****ppppwVar12;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  wchar_t ***local_188 [3];
  ulonglong local_170;
  undefined4 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong local_150;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 ***local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined **ppuStack_e0;
  uintptr_t local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  LPVOID local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  uintptr_t local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  uint local_58;
  undefined2 local_52;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_52 = 0;
  local_60 = 7;
  local_80 = 0;
  local_70 = 1;
  local_140 = 0xc;
  local_138 = 0x7ffffffffffffffe;
  local_98 = 0xfff;
  local_c8 = 0xf;
  local_88 = 2;
  local_58 = 0;
  local_90 = -8;
  local_68 = 0x20;
  local_78 = 0x29;
  uVar7 = FUN_1801da264();
  if (uVar7 != local_58) {
    FUN_1801da68c(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
    FUN_1801da68c(6);
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_168 = (undefined4 *)0x0;
    uStack_160 = 0;
    local_130 = param_1;
    puVar9 = (undefined4 *)FUN_1801d61c8(local_68);
    local_158 = 10;
    local_150 = local_c8;
    local_168 = puVar9;
    FUN_1801b2671(&DAT_1802a72d8,&DAT_18029aa96,9,0xb,&DAT_1802a72f0);
    puVar9[4] = DAT_1802a72e8;
    uVar4 = uRam00000001802a72e4;
    uVar3 = uRam00000001802a72e0;
    uVar2 = uRam00000001802a72dc;
    *puVar9 = _DAT_1802a72d8;
    puVar9[1] = uVar2;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
    *(undefined2 *)(puVar9 + 5) = local_52;
    local_c0 = (LPVOID)0x0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = local_60;
    iVar8 = SHGetKnownFolderPath(&DAT_180223ff8,local_58,0,&local_c0);
    if (iVar8 < 0) {
      local_b8 = (undefined4 *)0x0;
      uStack_b0 = 0;
      puVar9 = (undefined4 *)FUN_1801d61c8(local_68);
      local_a8 = local_140;
      local_a0 = local_c8;
      local_b8 = puVar9;
      FUN_1801b2671(&DAT_1802a736c,&DAT_18029ad36,0xe,0xd,&DAT_1802a7388);
      *(undefined8 *)(puVar9 + 4) = DAT_1802a737c;
      uVar4 = uRam00000001802a7378;
      uVar3 = uRam00000001802a7374;
      uVar2 = uRam00000001802a7370;
      *puVar9 = _DAT_1802a736c;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      *(undefined2 *)(puVar9 + 6) = local_52;
      FUN_18004ff50(&local_108);
      FUN_18004f930(&local_e8,&local_108,&local_b8);
      uStack_110 = uStack_d0;
      local_128 = CONCAT44(uStack_e4,local_e8);
      local_d8 = local_80;
      uStack_d0 = local_60;
      local_e8 = CONCAT22(local_e8._2_2_,local_52);
      if (local_60 < local_f0) {
        lVar15 = local_f0 << ((byte)local_70 & 0x3f);
        uVar10 = local_88 + lVar15;
        ppppuVar14 = (undefined8 ****)local_108;
        if (local_98 < uVar10) {
          ppppuVar14 = (undefined8 ****)local_108[-1];
          if (local_68 <= (ulonglong)((longlong)local_108 + (local_90 - (longlong)ppppuVar14))) goto LAB_1801845ec;
          uVar10 = lVar15 + local_78;
        }
        thunk_FUN_1801f42e0(ppppuVar14,uVar10);
      }
      if (local_60 < local_a0) {
        lVar15 = local_a0 << ((byte)local_70 & 0x3f);
        uVar10 = local_88 + lVar15;
        puVar9 = local_b8;
        if (local_98 < uVar10) {
          puVar9 = *(undefined4 **)(local_b8 + -2);
          if (local_68 <= (ulonglong)((longlong)local_b8 + (local_90 - (longlong)puVar9))) goto LAB_1801845ec;
          uVar10 = lVar15 + local_78;
        }
        thunk_FUN_1801f42e0(puVar9,uVar10);
      }
    }
    else {
      local_b8 = (undefined4 *)0x0;
      uStack_b0 = 0;
      puVar9 = (undefined4 *)FUN_1801d61c8(local_68);
      local_a8 = local_140;
      local_a0 = local_c8;
      local_b8 = puVar9;
      FUN_1801b2671(&DAT_1802a736c,&DAT_18029ad36,0xe,0xd,&DAT_1802a7388);
      pvVar5 = local_c0;
      *(undefined8 *)(puVar9 + 4) = DAT_1802a737c;
      uVar4 = uRam00000001802a7378;
      uVar3 = uRam00000001802a7374;
      uVar2 = uRam00000001802a7370;
      *puVar9 = _DAT_1802a736c;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      *(undefined2 *)(puVar9 + 6) = local_52;
      uVar10 = FUN_1801e15b0(local_c0);
      local_108 = (undefined8 ****)0x0;
      uStack_100 = 0;
      if (local_138 < uVar10) {
        FUN_180002ac0();
      }
      if (uVar10 < 8) {
        ppppuVar14 = &local_108;
        uVar17 = local_60;
      }
      else {
        uVar13 = local_60 | uVar10;
        if (local_138 < uVar13) {
LAB_180184612:
          std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
        }
        uVar17 = 10;
        if (10 < uVar13) {
          uVar17 = uVar13;
        }
        lVar15 = uVar17 << ((byte)local_70 & 0x3f);
        if (uVar13 < 0x7ff) {
          ppppuVar14 = (undefined8 ****)FUN_1801d61c8(lVar15 + local_88);
          local_108 = ppppuVar14;
        }
        else {
          if (0x7fffffffffffffeb < uVar13) goto LAB_180184612;
          pppuVar11 = (undefined8 ***)FUN_1801d61c8(lVar15 + local_78);
          ppppuVar14 = (undefined8 ****)((longlong)pppuVar11 + 0x27U & 0xffffffffffffffe0);
          ppppuVar14[-1] = pppuVar11;
          local_108 = ppppuVar14;
        }
      }
      local_f8 = uVar10;
      local_f0 = uVar17;
      FUN_1802079d0(ppppuVar14,pvVar5,uVar10 << ((byte)local_70 & 0x3f));
      *(undefined2 *)((longlong)ppppuVar14 + uVar10 * 2) = local_52;
      FUN_18004f930(&local_e8,&local_108,&local_b8);
      uStack_110 = uStack_d0;
      local_128 = CONCAT44(uStack_e4,local_e8);
      local_d8 = local_80;
      uStack_d0 = local_60;
      local_e8 = CONCAT22(local_e8._2_2_,local_52);
      if (local_60 < local_f0) {
        lVar15 = local_f0 << ((byte)local_70 & 0x3f);
        uVar10 = local_88 + lVar15;
        ppppuVar14 = (undefined8 ****)local_108;
        if (local_98 < uVar10) {
          ppppuVar14 = (undefined8 ****)local_108[-1];
          if (local_68 <= (ulonglong)((longlong)local_108 + (local_90 - (longlong)ppppuVar14))) goto LAB_1801845ec;
          uVar10 = lVar15 + local_78;
        }
        thunk_FUN_1801f42e0(ppppuVar14,uVar10);
      }
      if (local_60 < local_a0) {
        lVar15 = local_a0 << ((byte)local_70 & 0x3f);
        uVar10 = local_88 + lVar15;
        puVar9 = local_b8;
        if (local_98 < uVar10) {
          puVar9 = *(undefined4 **)(local_b8 + -2);
          if (local_68 <= (ulonglong)((longlong)local_b8 + (local_90 - (longlong)puVar9))) goto LAB_1801845ec;
          uVar10 = lVar15 + local_78;
        }
        thunk_FUN_1801f42e0(puVar9,uVar10);
      }
      CoTaskMemFree(local_c0);
    }
    local_e8 = local_58;
    ppuStack_e0 = &PTR_vftable_18020e790;
    FUN_180050190(&local_128,&local_e8);
    FUN_18004f930(local_188,&local_128,&local_168);
    param_1 = local_130;
    if (local_60 < uStack_110) {
      lVar16 = uStack_110 << ((byte)local_70 & 0x3f);
      uVar10 = local_88 + lVar16;
      lVar15 = local_128;
      if (local_98 < uVar10) {
        lVar15 = *(longlong *)(local_128 + -8);
        if (local_68 <= (ulonglong)((local_128 + local_90) - lVar15)) goto LAB_1801845ec;
        uVar10 = lVar16 + local_78;
      }
      thunk_FUN_1801f42e0(lVar15,uVar10);
    }
    if (local_60 < local_150) {
      lVar15 = local_150 << ((byte)local_70 & 0x3f);
      uVar10 = local_88 + lVar15;
      puVar9 = local_168;
      if (local_98 < uVar10) {
        puVar9 = *(undefined4 **)(local_168 + -2);
        if (local_68 <= (ulonglong)((longlong)local_168 + (local_90 - (longlong)puVar9))) goto LAB_1801845ec;
        uVar10 = lVar15 + local_78;
      }
      thunk_FUN_1801f42e0(puVar9,uVar10);
    }
    ppppwVar12 = local_188;
    if (local_60 < local_170) {
      ppppwVar12 = (wchar_t ****)local_188[0];
    }
    FUN_1801b2671(&DAT_1802a72f4,&DAT_18029aad8,0xf,2,&DAT_1802a72f8);
    _wfopen_s((FILE **)(param_1 + 0x50),(wchar_t *)ppppwVar12,(wchar_t *)&DAT_1802a72f4);
    uVar6 = local_70;
    lVar15 = local_78;
    pFVar1 = *(FILE **)(param_1 + 0x50);
    if (pFVar1 != (FILE *)0x0) {
      FUN_1801b23c0(&DAT_1802a72fc,&DAT_18029ab11,0x13,0x2a,&DAT_1802a7328);
      FUN_1801e1ed4(&DAT_1802a72fc,lVar15,uVar6,pFVar1);
    }
    if (local_60 < local_170) {
      lVar15 = local_170 << ((byte)local_70 & 0x3f);
      uVar10 = local_88 + lVar15;
      ppppwVar12 = (wchar_t ****)local_188[0];
      if (local_98 < uVar10) {
        ppppwVar12 = (wchar_t ****)local_188[0][-1];
        if (local_68 <= (ulonglong)((longlong)local_188[0] + (local_90 - (longlong)ppppwVar12))) {
LAB_1801845ec:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_58,local_80);
        }
        uVar10 = lVar15 + local_78;
      }
      thunk_FUN_1801f42e0(ppppwVar12,uVar10);
    }
  }
  FUN_1801da26c(param_1);
  return;
}



void Unwind_180184620(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0xb0);
  return;
}



void Unwind_180184660(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x100);
  return;
}



void Unwind_1801846a0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0xb0);
  return;
}



void Unwind_1801846e0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x100);
  return;
}



void Unwind_180184720(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x90);
  return;
}



void Unwind_180184760(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x90);
  return;
}



void Unwind_1801847a0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x50);
  return;
}



void Unwind_1801847e0(undefined8 param_1,longlong param_2)

{
  FUN_1801da26c(*(undefined8 *)(param_2 + 0x88));
  return;
}



void FUN_180184820(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_60 = 0x3c2039b3db9a2812;
  local_68 = 0x2c3dd58d01ea0524;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_60 ^ 0x21f024bedeabc8c3;
          uVar2 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x21f024bedeabc8c3;
          local_60 = uVar3;
          if (-0x337f853877826f37 < (longlong)uVar2) break;
          if (uVar2 == 0xb1b7efa80cd6a7db) {
            FUN_1801e209c(local_50);
            *local_58 = 0;
            local_60 = 0xc72e1e3d4558685;
            local_68 = 0x9d1f6e78e5ff833;
          }
          else if (uVar2 == 0xc0deccac287ff01f) {
            local_58 = (undefined8 *)(param_1 + 0x50);
            local_50 = *(longlong *)(param_1 + 0x50);
            local_60 = 0xf2194a7e71d3c3ec;
            if (local_50 == 0) {
              local_60 = 0x460db2d2270f1a81;
            }
            local_68 = 0x43aea5d67d056437;
          }
        }
        if (0x101dec3eda702d35 < (longlong)uVar2) break;
        if (uVar2 == 0xcc807ac7887d90ca) {
          local_48 = (undefined4 *)(param_1 + 0x4c);
          local_60 = 0xec782b7045a428ab;
          if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
            local_60 = 0x10b8cfd1d53bae76;
          }
          local_68 = 0x2ca6e7dc6ddbd8b4;
        }
        else if (uVar2 == 0x5a317045a0a7eb6) {
          FUN_1801da26c(param_1);
          return;
        }
      }
      if (uVar2 != 0x101dec3eda702d36) break;
      iVar1 = FUN_1801da264(param_1);
      local_60 = 0xf3e2d5a6581d900d;
      if (iVar1 == 0) {
        local_60 = 0x7100ebcd98917523;
      }
      local_68 = 0xbd80910a10ece5e9;
    }
    if (uVar2 == 0x3c1e280db8e076c2) {
      *local_48 = 0x7ffffffe;
      FUN_1801da68c(6);
    }
  } while (uVar2 != 0x4e6244ac48f175e4);
  FUN_1801da68c(5);
}



void FUN_180184a80(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  LPCSTR ****pppppCVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined8 local_168;
  longlong *local_160;
  code *local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_130;
  undefined *local_128;
  ulonglong local_120;
  longlong *local_118;
  longlong *local_110;
  ulonglong local_108;
  undefined *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 ****local_e8;
  undefined8 uStack_e0;
  uintptr_t local_d8;
  ulonglong local_d0;
  LPCSTR ***local_c8;
  undefined8 *puStack_c0;
  uintptr_t local_b8;
  ulonglong local_b0;
  uint local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  LPCSTR **local_70;
  uint local_64;
  uintptr_t local_60;
  uint local_54;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_60 = 0;
  local_64 = 5;
  local_70 = (LPCSTR **)0x1;
  local_98 = 0xfff;
  local_90 = 0x28;
  local_50 = 0xf;
  local_54 = 0;
  local_88 = -8;
  local_108 = 10000;
  local_80 = 0x20;
  local_a0 = param_2;
  plVar6 = (longlong *)FUN_1801853e0();
  AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  lVar10 = *plVar6;
  ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 1));
  uVar7 = FUN_180185280(lVar10 + 8);
  pppppuVar8 = (undefined8 *****)_Xtime_get_ticks();
  local_e8 = pppppuVar8;
  FUN_18018e3b0(uVar7,&local_168,&local_e8,1);
  if (local_50 < local_130) {
    lVar10 = local_148;
    if ((local_98 < (longlong)local_70 + local_130) &&
       (lVar10 = *(longlong *)(local_148 + -8), local_80 <= (ulonglong)((local_148 + local_88) - lVar10)))
    goto LAB_1801850ad;
    thunk_FUN_1801f42e0(lVar10);
  }
  pppppuVar8 = pppppuVar8 + (longlong)local_158 * 0x1312d0;
  if (((ulonglong)pppppuVar8 | local_108) >> 0x20 == 0) {
    uVar9 = ((ulonglong)pppppuVar8 & 0xffffffff) / (local_108 & 0xffffffff);
  }
  else {
    uVar9 = (longlong)pppppuVar8 / (longlong)local_108;
  }
  local_f0 = uVar9 - (local_108 * uVar9 - (longlong)pppppuVar8 != 0 &&
                     (longlong)pppppuVar8 <= (longlong)(local_108 * uVar9));
  local_160 = &local_f0;
  local_158 = FUN_18018e9a0;
  local_168 = 0xd000000000000000;
  local_e8 = (undefined8 *****)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = local_50;
  FUN_180002240(&local_e8,0x13);
  local_d8 = local_60;
  local_c8 = (LPCSTR ***)local_70;
  puStack_c0 = &local_168;
  FUN_1801b23c0(&DAT_1802a732c,&DAT_18029ab6b,0x1d,0xc,&DAT_1802a7338);
  local_100 = &DAT_1802a732c;
  local_f8 = (undefined8 *)0xb;
  FUN_180003080(&local_128,&local_e8,&local_100,&local_c8,local_60);
  uVar5 = FUN_1801da264(param_1);
  uVar4 = local_64;
  if (uVar5 != local_54) {
    FUN_1801da68c(local_64);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
    FUN_1801da68c(6);
  }
  lVar10 = *(longlong *)(param_1 + 0x50);
  local_78 = param_1;
  if (lVar10 != 0) {
    lVar1 = *param_4;
    lVar3 = param_4[1];
    lVar2 = *param_3;
    local_9c = (undefined4)param_3[1];
    puVar12 = &DAT_1802a7458;
    local_118 = param_4;
    local_110 = param_3;
    FUN_1801b23c0(&DAT_1802a7458,&DAT_18029b136,0x15,6,&DAT_1802a7460);
    if (local_a0 < uVar4) {
      uVar9 = (ulonglong)local_a0;
      FUN_1801b2950(&DAT_1802a7868);
      puVar12 = *(undefined **)(&DAT_1802a7868 + uVar9 * 8);
    }
    pppppuVar8 = &local_e8;
    if (local_50 < local_d0) {
      pppppuVar8 = (undefined8 *****)local_e8;
    }
    uVar13 = 1;
    FUN_1801b23c0(&DAT_1802a733c,&DAT_18029aba6,0x13,0x15,&DAT_1802a7354);
    FUN_1801851a0(lVar10,&DAT_1802a733c,pppppuVar8,puVar12,CONCAT44(uVar13,local_9c),lVar2,(int)lVar3,lVar1);
    fflush(*(FILE **)(local_78 + 0x50));
    param_4 = local_118;
    param_3 = local_110;
  }
  local_158 = (code *)*param_3;
  local_150 = param_3[1];
  local_168 = 0xc000000000000000;
  local_148 = *param_4;
  local_140 = param_4[1];
  local_160 = (longlong *)0xc000000000000010;
  local_c8 = (LPCSTR ***)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  local_b0 = local_50;
  if (local_50 < local_150 + local_50 + local_140) {
    FUN_180002240(&local_c8);
    local_b8 = local_60;
  }
  local_100 = (undefined *)0x2;
  local_f8 = &local_168;
  FUN_1801b23c0(&DAT_1802a7358,&DAT_18029abe2,0x14,0x10,&DAT_1802a7368);
  local_128 = &DAT_1802a7358;
  local_120 = local_50;
  FUN_180003080(&local_f0,&local_c8,&local_128,&local_100,local_60);
  pppppCVar11 = &local_c8;
  if (local_50 < local_b0) {
    pppppCVar11 = (LPCSTR ****)local_c8;
  }
  OutputDebugStringA((LPCSTR)pppppCVar11);
  lVar10 = local_78;
  if (local_50 < local_b0) {
    uVar9 = (longlong)local_70 + local_b0;
    pppppCVar11 = (LPCSTR ****)local_c8;
    if (local_98 < uVar9) {
      pppppCVar11 = (LPCSTR ****)local_c8[-1];
      if (local_80 <= (ulonglong)((longlong)local_c8 + (local_88 - (longlong)pppppCVar11))) goto LAB_1801850ad;
      uVar9 = local_b0 + local_90;
    }
    thunk_FUN_1801f42e0(pppppCVar11,uVar9);
  }
  FUN_1801da26c(lVar10);
  if (local_50 < local_d0) {
    uVar9 = (longlong)local_70 + local_d0;
    pppppuVar8 = (undefined8 *****)local_e8;
    if (local_98 < uVar9) {
      pppppuVar8 = (undefined8 *****)local_e8[-1];
      if (local_80 <= (ulonglong)((longlong)local_e8 + (local_88 - (longlong)pppppuVar8))) {
LAB_1801850ad:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_54,local_60);
      }
      uVar9 = local_d0 + local_90;
    }
    thunk_FUN_1801f42e0(pppppuVar8,uVar9);
  }
  return;
}



void Unwind_1801850d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



void Unwind_180185110(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



void Unwind_180185150(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  FUN_1801da26c(*(undefined8 *)(param_2 + 0x130));
  return;
}



void FUN_1801851a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar1 = (undefined8 *)FUN_180097330();
  local_38 = &local_res18;
  FUN_1801e6518(*puVar1,param_1,param_2,0);
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
}



undefined8 FUN_180185280(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 ***local_58;
  undefined8 local_50;
  undefined8 ***local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_28 = 0xf;
  FUN_18018e150(local_48);
  local_58 = local_48;
  if (local_28 < local_30) {
    local_58 = local_48[0];
  }
  local_50 = local_38;
  uVar1 = FUN_18018d5a0(param_1,&local_58);
  if (local_28 < local_30) {
    uVar2 = local_30 + 1;
    if (0xfff < uVar2) {
      if (0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)local_48[0][-1]))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = local_30 + 0x28;
      local_48[0] = (undefined8 ***)local_48[0][-1];
    }
    thunk_FUN_1801f42e0(local_48[0],uVar2);
  }
  return uVar1;
}



void Unwind_1801853b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x40);
  return;
}



undefined8 * FUN_1801853e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;

  puVar3 = DAT_1802a72b0;
  if (DAT_1802a72b0 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)_calloc_base(1,0x10);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_1801b23c0(&DAT_1802a738c,&DAT_18029af06,0x14,0xf,&DAT_1802a739c);
      FUN_1801d756c(&DAT_1802a738c);
    }
    FUN_180185550(puVar3);
    puVar4 = (undefined8 *)0x0;
    LOCK();
    bVar5 = DAT_1802a72b0 != (undefined8 *)0x0;
    puVar1 = puVar3;
    if (bVar5) {
      puVar4 = DAT_1802a72b0;
      puVar1 = DAT_1802a72b0;
    }
    DAT_1802a72b0 = puVar1;
    UNLOCK();
    if (bVar5) {
      puVar1 = (undefined8 *)*puVar3;
      *puVar3 = 0;
      while (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar1;
        FUN_180186820(puVar1 + 1);
        thunk_FUN_1801f42e0(puVar1);
        puVar1 = puVar2;
      }
      thunk_FUN_1801f42e0(puVar3);
      puVar3 = puVar4;
    }
  }
  return puVar3;
}



void Catch_1801854f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x28));
  FUN_1801dd110(0,0);
}



void Catch_180185520(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;

  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x28));
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x38) + 8))();
  FUN_1801d756c(uVar1);
}



undefined8 * FUN_180185550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  char cVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 ***local_1e0 [2];
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 ***local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  uint local_74;
  ulonglong local_70;
  undefined1 local_61;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_f8 = 0x7fffffffffffffff;
  local_80 = 0;
  local_b8 = 0x27;
  local_88 = 1;
  local_a8 = 0xfff;
  local_90 = 0x28;
  local_70 = 0xf;
  local_f0 = 0xffe;
  local_61 = 0;
  local_b0 = 10;
  local_e8 = 0xffffffffffffffe0;
  local_74 = 0;
  local_a0 = -8;
  local_98 = 0x20;
  *param_1 = 0;
  param_1[1] = 0;
  local_e0 = param_1;
  FUN_180185e80(&local_210);
  FUN_180186320(&local_d8,local_80);
  uVar5 = local_d0 - local_d8;
  if (uVar5 >> 0x20 == 0) {
    uVar5 = (uVar5 & 0xffffffff) / 0x18;
  }
  else {
    uVar5 = (longlong)uVar5 / 0x18;
  }
  lVar11 = (longlong)&local_108 + 5;
  uVar14 = 0;
  do {
    if ((uVar5 | local_b0) >> 0x20 == 0) {
      cVar10 = (char)((uVar5 & 0xffffffff) % (local_b0 & 0xffffffff));
    }
    else {
      cVar10 = (char)(uVar5 % local_b0);
    }
    *(char *)(lVar11 + -1) = cVar10 + '0';
    if ((uVar5 | local_b0) >> 0x20 == 0) {
      uVar7 = (uVar5 & 0xffffffff) / (local_b0 & 0xffffffff);
    }
    else {
      uVar7 = uVar5 / local_b0;
    }
    lVar11 = lVar11 + -1;
    uVar14 = uVar14 + 1;
    bVar16 = local_b0 <= uVar5;
    uVar5 = uVar7;
  } while (bVar16);
  local_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  if ((longlong)uVar14 < (longlong)local_80) {
    FUN_180002ac0();
  }
  if (uVar14 < 0x10) {
    puVar15 = &local_1a8;
    uVar5 = local_70;
  }
  else {
    uVar7 = local_70 | uVar14;
    uVar5 = 0x16;
    if (0x16 < uVar7) {
      uVar5 = uVar7;
    }
    if (local_f0 < uVar7) {
      lVar6 = FUN_1801d61c8(local_90 + uVar5);
      puVar15 = (undefined8 *)(local_b8 + lVar6 & local_e8);
      puVar15[-1] = lVar6;
      local_1a8 = puVar15;
    }
    else {
      puVar15 = (undefined8 *)FUN_1801d61c8(local_88 + uVar5);
      local_1a8 = puVar15;
    }
  }
  local_198 = uVar14;
  uStack_190 = uVar5;
  FUN_1802079d0(puVar15,lVar11,uVar14);
  *(undefined1 *)((longlong)puVar15 + uVar14) = local_61;
  if (local_1d0 == local_f8) {
    FUN_180002ac0();
  }
  local_118 = (undefined8 ****)0x0;
  uStack_110 = 0;
  uVar5 = local_88 + local_1d0;
  if (local_70 < uVar5) {
    uVar14 = local_f8;
    if (-2 < (longlong)local_1d0) {
      uVar7 = local_70 | uVar5;
      uVar14 = 0x16;
      if (0x16 < uVar7) {
        uVar14 = uVar7;
      }
      if (uVar7 <= local_f0) {
        ppppuVar12 = (undefined8 ****)FUN_1801d61c8(local_88 + uVar14);
        local_118 = ppppuVar12;
        goto LAB_18018592b;
      }
    }
    pppuVar8 = (undefined8 ***)FUN_1801d61c8(local_90 + uVar14);
    ppppuVar12 = (undefined8 ****)(local_b8 + (longlong)pppuVar8 & local_e8);
    ppppuVar12[-1] = pppuVar8;
    local_118 = ppppuVar12;
  }
  else {
    ppppuVar12 = &local_118;
    uVar14 = local_70;
  }
LAB_18018592b:
  ppppuVar13 = local_1e0;
  if (local_70 < local_1c8) {
    ppppuVar13 = (undefined8 ****)local_1e0[0];
  }
  local_108 = uVar5;
  local_100 = uVar14;
  FUN_1802079d0(ppppuVar12,ppppuVar13,local_1d0);
  *(undefined1 *)((longlong)ppppuVar12 + local_1d0) = 0x2e;
  *(undefined1 *)((longlong)ppppuVar12 + uVar5) = local_61;
  FUN_18018cef0(&local_138);
  if (local_70 < local_100) {
    uVar5 = local_88 + local_100;
    ppppuVar12 = (undefined8 ****)local_118;
    if (local_a8 < uVar5) {
      ppppuVar12 = (undefined8 ****)local_118[-1];
      if (local_98 <= (ulonglong)((longlong)local_118 + (local_a0 - (longlong)ppppuVar12))) goto LAB_180185c87;
      uVar5 = local_100 + local_90;
    }
    thunk_FUN_1801f42e0(ppppuVar12,uVar5);
  }
  if (local_70 < uStack_190) {
    uVar5 = local_88 + uStack_190;
    puVar15 = local_1a8;
    if (local_a8 < uVar5) {
      puVar15 = (undefined8 *)local_1a8[-1];
      if (local_98 <= (ulonglong)((longlong)local_1a8 + (local_a0 - (longlong)puVar15))) goto LAB_180185c87;
      uVar5 = uStack_190 + local_90;
    }
    thunk_FUN_1801f42e0(puVar15,uVar5);
  }
  lVar4 = local_c8;
  lVar6 = local_d0;
  lVar11 = local_d8;
  local_1c0 = uStack_1e8;
  local_1b8 = local_1f0;
  uVar3 = local_200;
  uVar2 = uStack_208;
  uVar1 = local_210;
  local_198._0_4_ = (undefined4)local_128;
  local_198._4_4_ = local_128._4_4_;
  uStack_190._0_4_ = (undefined4)uStack_120;
  uStack_190._4_4_ = uStack_120._4_4_;
  local_1a8 = (undefined8 *)CONCAT44(uStack_134,local_138);
  uStack_1a0 = uStack_130;
  uStack_19c = uStack_12c;
  local_128 = local_80;
  uStack_120 = local_70;
  local_138 = CONCAT31(local_138._1_3_,local_61);
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1b0 = uStack_1f8;
  local_188 = uStack_1f8;
  uStack_180 = local_1b8;
  local_178 = local_1c0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_170 = uVar1;
  uStack_168 = uVar2;
  local_160 = uVar3;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_158 = lVar11;
  lStack_150 = lVar6;
  local_148 = lVar4;
  local_140 = local_c0;
  puVar9 = (undefined8 *)_calloc_base(local_88,0x78);
  puVar15 = local_e0;
  if (puVar9 == (undefined8 *)0x0) {
    FUN_1801d6d1c();
  }
  *(undefined4 *)(puVar9 + 3) = (undefined4)local_198;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = local_198._4_4_;
  *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_190;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_190._4_4_;
  *(undefined4 *)(puVar9 + 1) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)puVar9 + 0xc) = local_1a8._4_4_;
  *(undefined4 *)(puVar9 + 2) = uStack_1a0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_19c;
  local_198 = local_80;
  uStack_190 = local_70;
  local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,local_61);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  puVar9[5] = local_1b0;
  puVar9[6] = local_1b8;
  puVar9[7] = local_1c0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  puVar9[8] = uVar1;
  puVar9[9] = uVar2;
  puVar9[10] = uVar3;
  local_158 = 0;
  lStack_150 = 0;
  local_148 = 0;
  puVar9[0xb] = lVar11;
  puVar9[0xc] = lVar6;
  puVar9[0xd] = lVar4;
  *(undefined1 *)(puVar9 + 0xe) = local_c0;
  *puVar9 = *local_e0;
  *local_e0 = puVar9;
  FUN_180186820(&local_1a8);
  if (local_70 < uStack_120) {
    lVar6 = CONCAT44(uStack_134,local_138);
    uVar5 = local_88 + uStack_120;
    lVar11 = lVar6;
    if (local_a8 < uVar5) {
      lVar11 = *(longlong *)(lVar6 + -8);
      if (local_98 <= (ulonglong)((lVar6 + local_a0) - lVar11)) goto LAB_180185c87;
      uVar5 = uStack_120 + local_90;
    }
    thunk_FUN_1801f42e0(lVar11,uVar5);
  }
  if (local_d8 != 0) {
    uVar5 = local_c8 - local_d8;
    lVar11 = local_d8;
    if (local_a8 < uVar5) {
      lVar11 = *(longlong *)(local_d8 + -8);
      if (local_98 <= (ulonglong)((local_d8 + local_a0) - lVar11)) {
LAB_180185c87:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_74,local_80);
      }
      uVar5 = uVar5 + local_b8;
    }
    thunk_FUN_1801f42e0(lVar11,uVar5);
  }
  FUN_1801874d0(&local_210);
  return puVar15;
}



void Unwind_180185cc0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x120);
  return;
}



void Unwind_180185d10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_180185d50(undefined8 param_1,longlong param_2)

{
  FUN_180186820(param_2 + 0x90);
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_180185da0(undefined8 param_1,longlong param_2)

{
  FUN_1801871d0(param_2 + 0x160);
  return;
}



void Unwind_180185df0(undefined8 param_1,longlong param_2)

{
  FUN_1801874d0(param_2 + 0x28);
  return;
}



void Unwind_180185e30(undefined8 param_1,longlong param_2)

{
  FUN_180187c30(*(undefined8 *)(param_2 + 0x158));
  return;
}



undefined8 FUN_180185e80(undefined8 param_1)

{
  int iVar1;
  char *_Str;
  char *_Str_00;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  size_t sVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uintptr_t uVar10;
  undefined1 uVar11;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char *local_108;
  size_t local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  size_t local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  uintptr_t local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  int *local_68;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_98 = 0;
  local_d0 = 0x27;
  local_90 = 1;
  local_c8 = 0xf;
  local_c0 = param_1;
  piVar4 = (int *)FUN_1801db684();
  local_68 = piVar4;
  if (piVar4 == (int *)0x0) {
    FUN_1801d6d1c();
  }
  iVar1 = *piVar4;
  uVar11 = iVar1 == 2;
  if (iVar1 < 2) {
    uVar11 = iVar1 == 1;
    if (!(bool)uVar11) goto LAB_180185f2c;
    FUN_1801dbc40();
  }
  if ((bool)uVar11) {
    FUN_1801b23c0(&DAT_1802a73a0,&DAT_18029af3d,0x13,0x31,&DAT_1802a73d4);
    FUN_1801d756c(&DAT_1802a73a0);
  }
LAB_180185f2c:
  local_b8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  uVar10 = local_98;
  do {
    if (*(ulonglong *)(piVar4 + 4) <= uVar10) {
      FUN_18018a740(local_c0);
      lVar3 = lStack_80;
      lVar6 = local_88;
      if (local_88 != 0) {
        for (; lVar6 != lVar3; lVar6 = lVar6 + 0x40) {
          FUN_18018a140(lVar6);
        }
        uVar8 = local_78 - local_88;
        lVar6 = local_88;
        if (0xfff < uVar8) {
          lVar6 = *(longlong *)(local_88 + -8);
          if (0x1f < (local_88 - lVar6) - 8U) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_98);
          }
          uVar8 = uVar8 | local_d0;
        }
        thunk_FUN_1801f42e0(lVar6,uVar8);
      }
      FUN_18018adb0(&local_b8);
      FUN_1801dafcc(local_68);
      return local_c0;
    }
    _Str = *(char **)(*(longlong *)(piVar4 + 6) + uVar10 * 8);
    local_f0 = _Str;
    sVar5 = strlen(_Str);
    puVar2 = puStack_b0;
    _Str_00 = *(char **)(*(longlong *)(piVar4 + 8) + uVar10 * 8);
    uStack_e8 = sVar5;
    if (_Str_00 == (char *)0x0) {
      if (puStack_b0 == local_a8) {
        FUN_1801881f0(&local_b8,puStack_b0,&local_108,&local_f0);
      }
      else {
        puStack_b0[2] = 0;
        puStack_b0[3] = 0;
        *puStack_b0 = 0;
        puStack_b0[1] = 0;
        if ((longlong)sVar5 < (longlong)local_98) {
          FUN_180002ac0();
        }
        puVar9 = puStack_b0;
        uVar8 = local_c8;
        if (0xf < sVar5) {
          uVar7 = local_c8 | sVar5;
          uVar8 = 0x16;
          if (0x16 < uVar7) {
            uVar8 = uVar7;
          }
          if (uVar7 < 0xfff) {
            puVar9 = (undefined8 *)FUN_1801d61c8(local_90 + uVar8);
          }
          else {
            lVar6 = FUN_1801d61c8(uVar8 + 0x28);
            puVar9 = (undefined8 *)(local_d0 + lVar6 & 0xffffffffffffffe0);
            puVar9[-1] = lVar6;
          }
          *puVar2 = puVar9;
        }
        puVar2[2] = sVar5;
        puVar2[3] = uVar8;
        FUN_1802079d0(puVar9,_Str,sVar5);
        *(undefined1 *)((longlong)puVar9 + sVar5) = 0;
        puStack_b0 = puStack_b0 + 4;
      }
    }
    else {
      local_e0 = _Str_00;
      local_d8 = strlen(_Str_00);
      if (lStack_80 == local_78) {
        FUN_1801894d0(&local_88,lStack_80,&local_108,&local_f0,&local_e0);
      }
      else {
        local_108 = local_e0;
        local_118 = (undefined4)local_f0;
        uStack_114 = local_f0._4_4_;
        uStack_110 = (undefined4)uStack_e8;
        uStack_10c = uStack_e8._4_4_;
        local_100 = local_d8;
        FUN_180189a60(lStack_80,lStack_80,&local_118,&local_108);
        lStack_80 = lStack_80 + 0x40;
      }
    }
    uVar10 = uVar10 + local_90;
    piVar4 = local_68;
  } while( true );
}



void Unwind_180186270(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    FUN_1801dafcc(*(undefined8 *)(param_2 + 0xe0));
  }
  return;
}



void Unwind_1801862c0(undefined8 param_1,longlong param_2)

{
  FUN_180187d80(param_2 + 0xc0);
  FUN_18018adb0(param_2 + 0x90);
  FUN_1801dafcc(*(undefined8 *)(param_2 + 0xe0));
  return;
}



undefined4 * FUN_180186320(undefined4 *param_1,ulonglong param_2)

{
  ushort uVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  longlong local_b0;
  ulonglong local_a0;
  int local_8c;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 local_5c;
  longlong local_58;
  short local_4e;
  ushort local_4c;
  undefined1 local_4a;
  byte local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_4e = 0;
  local_49 = 1;
  local_b0 = 1;
  local_5c = 2;
  local_88 = 0x1b;
  local_4c = 0xff;
  uVar10 = 0;
  if (0x1a < param_2) {
    uVar10 = param_2 - 0x1b;
  }
  lVar6 = FUN_1801db17c(uVar10);
  if (uVar10 < local_a0) {
    if (lVar6 == 0) {
      local_58 = lVar6;
      FUN_1801d6d1c();
    }
  }
  else if (lVar6 != 0 && local_a0 == 0) {
    local_58 = lVar6;
    FUN_1801dbc40();
    goto LAB_180186799;
  }
  uVar10 = local_a0 + local_88;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  local_78 = 0;
  uStack_70 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  bVar14 = local_49;
  if (param_2 < uVar10) {
    local_80 = uVar10;
    local_58 = lVar6;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
LAB_180186799:
      FUN_18018b7f0();
      pcVar3 = (code *)swi(3);
      puVar8 = (undefined4 *)(*pcVar3)();
      return puVar8;
    }
    FUN_18018b830(&local_78);
    if ((ulonglong)((longlong)local_68 - local_78) < 0x288) {
      FUN_18018bea0(&local_78,local_88);
      lVar6 = local_78;
      FUN_1802079d0(local_78,&DAT_18021f8a0,0x288);
      plVar9 = (longlong *)(lVar6 + 0x288);
    }
    else {
      uVar10 = (longlong)uStack_70 - local_78;
      if (uVar10 >> 0x20 == 0) {
        uVar7 = (uVar10 & 0xffffffff) / 0x18;
      }
      else {
        uVar7 = (longlong)uVar10 / 0x18;
      }
      if (uVar7 < local_88) {
        FUN_1802079d0(local_78,&DAT_18021f8a0,uVar10);
        plVar9 = uStack_70;
        lVar6 = local_88 - uVar7;
        FUN_1802079d0(uStack_70,&DAT_18021f8a0 + uVar10,0x288 - uVar10);
        plVar9 = plVar9 + lVar6 * 3;
      }
      else {
        plVar9 = (longlong *)(local_78 + 0x288);
        FUN_1802079d0(local_78,&DAT_18021f8a0,0x288);
      }
    }
    lVar6 = local_58;
    bVar14 = local_49;
    uStack_70 = plVar9;
    for (uVar10 = 0; uVar10 < local_a0; uVar10 = uVar10 + 1) {
      uVar1 = *(ushort *)(lVar6 + 2 + uVar10 * 0xc);
      bVar13 = (byte)uVar1;
      iVar12 = (int)*(short *)(lVar6 + uVar10 * 0xc) - (uint)(bVar13 < 3);
      iVar4 = -99;
      if (-1 < iVar12) {
        iVar4 = 0;
      }
      iVar5 = (iVar4 + iVar12) / 100;
      iVar4 = 9;
      if (2 < bVar13) {
        iVar4 = -3;
      }
      local_8c = (uint)*(ushort *)(lVar6 + 6 + uVar10 * 0xc) +
                 ((iVar5 >> ((byte)local_5c & 0x1f)) +
                  (((uint)(local_4c & *(ushort *)(lVar6 + 4 + uVar10 * 0xc)) +
                   (iVar12 * 0x5b5 >> ((byte)local_5c & 0x1f))) - iVar5) +
                  ((iVar4 + (uint)(local_4c & uVar1)) * 0x3d3 + 0x13 >> 5) + -0xafa6d) * 0x18 + 1;
      local_80 = uStack_70[-1];
      sVar2 = *(short *)(lVar6 + 8 + uVar10 * 0xc);
      local_4a = sVar2 == local_4e;
      if (uStack_70 == local_68) {
        FUN_18018c5b0(&local_78,uStack_70,&local_8c,&local_4a,&local_80);
      }
      else {
        *uStack_70 = (longlong)local_8c * 0xe10;
        *(undefined1 *)(uStack_70 + 1) = local_4a;
        lVar11 = -1;
        if (sVar2 == local_4e) {
          lVar11 = local_b0;
        }
        uStack_70[2] = lVar11 + local_80;
        uStack_70 = uStack_70 + 3;
      }
      bVar14 = bVar14 & *(short *)(local_58 + uVar10 * 0xc + 8) == local_4e;
    }
    lVar6 = local_58;
  }
  *param_1 = (undefined4)local_78;
  param_1[1] = local_78._4_4_;
  param_1[2] = (undefined4)uStack_70;
  param_1[3] = uStack_70._4_4_;
  *(longlong **)(param_1 + 4) = local_68;
  *(byte *)(param_1 + 6) = bVar14;
  if (lVar6 != 0) {
    thunk_FUN_1801f42e0(lVar6);
  }
  return param_1;
}



void Unwind_1801867a0(undefined8 param_1,longlong param_2)

{
  FUN_18018b4f0(param_2 + 0x70);
  return;
}



void Unwind_1801867e0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}



void FUN_180186820(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_168;
  ulonglong local_160;
  uint local_154;
  uintptr_t local_150;
  ulonglong local_148;
  longlong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;

  local_160 = 0xb779f34b7cda24bb;
  local_168 = 0x397246617c0585fe;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_160 ^ 0x7cec702f49d49420;
              uVar1 = local_160 ^ local_168;
              local_168 = local_168 ^ 0x7cec702f49d49420;
              local_160 = uVar2;
              if ((longlong)uVar1 < -0x10f8e1e66aa9df1) break;
              if ((longlong)uVar1 < 0x1ddeb3f561349842) {
                if ((longlong)uVar1 < 0xf57c557b95b4c04) {
                  if (uVar1 == 0xfef071e19955620f) {
                    local_70 = param_1 + 9;
                    local_68 = param_1[8];
                    local_100 = local_b8;
                    local_160 = 0x3e9a948e224d3a6b;
                    if (local_b8 != local_68) {
                      local_160 = 0xfddc60d4124b6555;
                    }
                    local_168 = 0xf28ba583ab102951;
                    local_108 = local_b8;
                  }
                  else if (uVar1 == 0x397297a4cd0bff7) {
                    local_98 = *(longlong *)(local_60 + -8);
                    local_160 = 0x3f79eaf15f25b16b;
                    if (local_148 <= (ulonglong)((local_b0 + local_140) - local_98)) {
                      local_160 = 0x25851b3d8d40fb36;
                    }
                    local_168 = 0xb790f99ba33b5de0;
                  }
                }
                else if (uVar1 == 0xf57c557b95b4c04) {
                  FUN_18018a140(local_100);
                  local_100 = local_100 + 0x40;
                  local_160 = 0x53c1940c9d59ad76;
                  if (local_100 != local_68) {
                    local_160 = 0xf57f7d8cd2475c3;
                  }
                  local_168 = 0x328f747f39c7;
                }
                else if (uVar1 == 0x173dccf2c4122d87) {
                  local_110 = param_1 + 7;
                  local_b8 = param_1[7];
                  local_160 = 0x43ec285648d3f381;
                  if (local_b8 != 0) {
                    local_160 = 0x25a385102b24a97f;
                  }
                  local_168 = 0xdb53f4f1b271cb70;
                }
              }
              else if ((longlong)uVar1 < 0x4ba6caa174646947) {
                if (uVar1 == 0x1ddeb3f561349842) {
                  local_78 = *(longlong *)(local_a0 + -8);
                  local_160 = 0xb53a1e9ec12d1320;
                  if (local_148 <= (ulonglong)((local_a0 + local_140) - local_78)) {
                    local_160 = 0xd672fdd42987545b;
                  }
                  local_168 = 0x7eb91239396a9216;
                }
                else if (uVar1 == 0x2d70104b5d734ae2) {
                  local_80 = *(longlong *)(local_120 + -8);
                  local_160 = 0x5fd288bc15d9eff9;
                  if (local_148 <= (ulonglong)((local_90 + local_140) - local_80)) {
                    local_160 = 0xa75f08e8680312bb;
                  }
                  local_168 = 0x1474421d61bd86be;
                }
              }
              else if (uVar1 == 0x4ba6caa174646947) {
                local_f8 = local_88 + local_128;
                local_160 = 0xbd7e3eb01bbe431;
                local_168 = 0xe9fc726eaa83accf;
                local_f0 = local_80;
              }
              else if (uVar1 == 0x53c1a683e92694b1) {
                local_108 = *local_110;
                local_160 = 0x45da29f8afad7cdb;
                local_168 = 0x89cb18f526f06fe1;
              }
              else if (uVar1 == 0x7bba09adfdf78a16) {
                local_f0 = local_120;
                local_f8 = param_1[0xc] - local_120;
                local_160 = 0x83f9c887b96c9f5a;
                if (local_f8 <= local_138) {
                  local_160 = 0x4ca249494f279d46;
                }
                local_168 = 0xae89d8cce41fd5b8;
                local_90 = local_f0;
                local_88 = local_f8;
              }
            }
            if ((longlong)uVar1 < -0x347cf35807b87eca) break;
            if ((longlong)uVar1 < -0x1dd46e7a54c7b702) {
              if (uVar1 == 0xcb830ca7f8478136) {
                local_d8 = local_118 + 0x28;
                local_160 = 0x9186c27c2539f24b;
                local_168 = 0x571c235225407f5a;
                local_d0 = local_78;
              }
              else if (uVar1 == 0xcc11310d895d133a) {
                local_e0 = local_108;
                local_e8 = *local_70 - local_108;
                local_160 = 0x6dac411a7987537;
                if (local_e8 <= local_138) {
                  local_160 = 0xfb623df3715f7678;
                }
                local_168 = 0x54ded6beb48cac0;
                local_b0 = local_e0;
                local_a8 = local_e8;
                local_60 = local_e0;
              }
            }
            else if (uVar1 == 0xe22b9185ab3848fe) {
              thunk_FUN_1801f42e0(local_f0,local_f8);
              *local_c8 = 0;
              local_c8[1] = 0;
              local_c8[2] = 0;
              local_160 = 0x1c5c1a55f4bd5ec2;
              local_168 = 0xb61d6a730af7345;
            }
            else if (uVar1 == 0xf2e3424c3082a614) {
              local_d0 = *param_1;
              local_d8 = local_118 + 1;
              local_160 = 0xd1fa0345b199c8d2;
              if (local_d8 <= local_138) {
                local_160 = 0xabe519ed0d4dd81;
              }
              local_168 = 0xcc24b0b0d0ad5090;
              local_a0 = local_d0;
            }
            else if (uVar1 == 0xfe2fd0989a17bcb8) {
              thunk_FUN_1801f42e0(local_e0,local_e8);
              *local_110 = 0;
              local_110[1] = 0;
              local_110[2] = 0;
              local_160 = 0x97f46c102cf9ff04;
              local_168 = 0xf4bb0b7d65bc7f5;
            }
          }
          if ((longlong)uVar1 < -0x67402358055dc70f) break;
          if ((longlong)uVar1 < -0x3ddccc34c6b43477) {
            if (uVar1 == 0x98bfdca7faa238f1) {
              FUN_18018adb0(param_1 + 4);
              local_c0 = (ulonglong *)(param_1 + 3);
              local_118 = param_1[3];
              local_160 = 0x313e4ffeb7376945;
              if (local_118 <= local_130) {
                local_160 = 0x1fe3e79befe04d8;
              }
              local_168 = 0xc3dd0db287b5cf51;
            }
            else if ((uVar1 == 0xa8cbefed10edc64d) || (uVar1 == 0xb32b4af509be9405)) goto LAB_18018716e;
          }
          else if (uVar1 == 0xc69ae12e00798d11) {
            thunk_FUN_1801f42e0(local_d0,local_d8);
            local_160 = 0xa70d64383437869a;
            local_168 = 0x652e57f30d7c4d13;
          }
          else if (uVar1 == 0xc22333cb394bcb89) {
            param_1[2] = local_150;
            *local_c0 = local_130;
            *(undefined1 *)param_1 = 0;
            return;
          }
        }
        if (uVar1 != 0x88e9136afc1eec8b) break;
        local_e8 = local_a8 | local_128;
        local_160 = 0x671d778025fead2a;
        local_168 = 0x9932a718bfe91192;
        local_e0 = local_98;
      }
      if (uVar1 != 0x8e0bb52a00dfa145) break;
      local_150 = 0;
      local_128 = 0x27;
      local_138 = 0xfff;
      local_130 = 0xf;
      local_154 = 0;
      local_140 = -8;
      local_148 = 0x20;
      local_c8 = param_1 + 10;
      local_120 = param_1[10];
      local_160 = 0x3beb0f2e134821f6;
      if (local_120 != 0) {
        local_160 = 0x576cca712aad8667;
      }
      local_168 = 0x2cd6c3dcd75a0c71;
    }
  } while (uVar1 != 0x9215e2a62e7ba6d6);
LAB_18018716e:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_154,local_150);
}



void FUN_1801871d0(longlong *param_1)

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

  local_90 = 0x56e12136846dc39b;
  local_98 = 0xde822db310555082;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x1aac0863c2b32c28;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x1aac0863c2b32c28;
          local_90 = uVar2;
          if (-0x1edec7605d59d817 < (longlong)uVar1) break;
          if (uVar1 == 0x88630c8594389319) {
            local_88 = *param_1;
            local_90 = 0xe37608b38f36b4bd;
            if (local_88 == 0) {
              local_90 = 0x9f46b44e5dfefdc0;
            }
            local_98 = 0x7e678cd1ff58da2a;
          }
          else if (uVar1 == 0x9d118462706e6e97) {
            local_68 = local_88;
            local_80 = param_1[2] - local_88;
            local_90 = 0x3c99e302e21a676e;
            if (0xfff < local_80) {
              local_90 = 0x6809ad4f6cbc486d;
            }
            local_98 = 0x8437e45baac1c8df;
            local_78 = local_88;
            local_60 = local_80;
          }
          else if (uVar1 == 0xb8ae075948dbafb1) {
            thunk_FUN_1801f42e0(local_78,local_80);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_90 = 0xbe770ffe9f552807;
            local_98 = 0x5f5637613df30fed;
          }
        }
        if (-0x13c1b6eb39827f4f < (longlong)uVar1) break;
        if (uVar1 == 0xe4be7e45871148c0) {
          local_80 = local_60 + 0x27;
          local_90 = 0x737ee068fc981b71;
          local_98 = 0xcbd0e731b443b4c0;
          local_78 = local_70;
        }
        else if (uVar1 == 0xe121389fa2a627ea) {
          return;
        }
      }
      if (uVar1 != 0xec3e4914c67d80b2) break;
      local_70 = *(longlong *)(local_88 + -8);
      local_90 = 0xd0bdb505671c73a0;
      if ((local_68 - local_70) - 8U < 0x20) {
        local_90 = 0x3515e15f94a43bda;
      }
      local_98 = 0xd1ab9f1a13b5731a;
    }
  } while (uVar1 != 0x1162a1f74a900ba);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1801874d0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_128;
  ulonglong local_120;
  uint local_114;
  uintptr_t local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_120 = 0x87cbc139a730d1b2;
  local_128 = 0xb5d4f7c58d4bfa3a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_120 ^ 0xb4a4a60cab8dbae9;
            uVar1 = local_120 ^ local_128;
            local_128 = local_128 ^ 0xb4a4a60cab8dbae9;
            local_120 = uVar2;
            if (-0x1905492c38c6d5ec < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x391632b6c34c252a) {
              if (uVar1 == 0x949705d6bb885c75) {
                local_70 = local_c0;
                local_d8 = *local_80 - local_c0;
                local_120 = 0x4a111bd648331103;
                if (local_d8 <= local_f0) {
                  local_120 = 0x82859eb1e0049596;
                }
                local_128 = 0xf9f87739ff8beb87;
                local_d0 = local_c0;
                local_68 = local_d8;
                local_60 = local_70;
              }
              else if (uVar1 == 0x9603bfd9f6db0b36) {
                FUN_18018a140(local_c8);
                local_c8 = local_c8 + 0x40;
                local_120 = 0x5038641e5119571b;
                if (local_c8 != local_78) {
                  local_120 = 0xe0694d57e2d1ebfb;
                }
                local_128 = 0x766af28e140ae0cd;
              }
              else if (uVar1 == 0xb3e96cefb7b8fa84) {
                local_a0 = *(longlong *)(local_60 + -8);
                local_120 = 0xc734d05f2f2252;
                if (local_108 <= (ulonglong)((local_70 + local_100) - local_a0)) {
                  local_120 = 0xf6f0ad941fb68e5a;
                }
                local_128 = 0xc9fad21fafcaa821;
              }
            }
            else if ((longlong)uVar1 < -0x311da082af5b8777) {
              if (uVar1 == 0xc93de6cff0e58a73) {
                local_d8 = local_68 + 0x27;
                local_d0 = local_a0;
                local_120 = 0x187e89616effb64e;
                local_128 = 0x630360e97170c85f;
              }
              else if (uVar1 == 0xc6e9cd493cb3dad6) {
                return;
              }
            }
            else if (uVar1 == 0xcee25f7d50a47889) {
              thunk_FUN_1801f42e0(local_b0,local_b8);
              local_120 = 0x38bc5d0801a6978d;
              local_128 = 0x3154cd20f2f1609f;
            }
            else if (uVar1 == 0xe4d8b19dd85d199d) {
              local_90 = *(longlong *)(local_98 + -8);
              local_120 = 0xd57a5aa3f27bfd3d;
              if (local_108 <= (ulonglong)((local_98 + local_100) - local_90)) {
                local_120 = 0xd601be8bd7afc86c;
              }
              local_128 = 0xb6628baccb39a032;
            }
          }
          if (0x3f0a7f8bb07c267a < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x265296904513b7d6) {
            if (uVar1 == 0xe6fab6d3c7392a15) {
              local_80 = param_1 + 2;
              local_78 = param_1[1];
              local_c8 = local_88;
              local_120 = 0xb5870c1b2316a5ef;
              if (local_88 != local_78) {
                local_120 = 0xb713b6146e45f2ac;
              }
              local_128 = 0x211009cd989ef99a;
              local_c0 = local_c8;
            }
            else if (uVar1 == 0x9e89028f357f712) {
              param_1[8] = local_110;
              *local_a8 = local_f8;
              *(undefined1 *)local_e8 = 0;
              FUN_18018adb0(param_1 + 3);
              local_88 = *param_1;
              local_120 = 0xe1a26c7dea69b139;
              if (local_88 != 0) {
                local_120 = 0xc1b117e711e341fa;
              }
              local_128 = 0x274ba134d6da6bef;
            }
          }
          else if (uVar1 == 0x265296904513b7d6) {
            local_c0 = *param_1;
            local_120 = 0xa814d6603ec64eff;
            local_128 = 0x3c83d3b6854e128a;
          }
          else if (uVar1 == 0x321f36fc2a7b2b88) {
            local_110 = 0;
            local_f0 = 0xfff;
            local_f8 = 0xf;
            local_114 = 0;
            local_100 = -8;
            local_108 = 0x20;
            local_e8 = param_1 + 6;
            local_a8 = param_1 + 9;
            local_e0 = param_1[9];
            local_120 = 0x4eda6c13160f89cd;
            if (local_e0 < 0x10) {
              local_120 = 0x218b13bb5d165a83;
            }
            local_128 = 0x28638393ae41ad91;
          }
        }
        if ((longlong)uVar1 < 0x66b9ef80b84e245c) break;
        if (uVar1 == 0x66b9ef80b84e245c) {
          local_b0 = *local_e8;
          local_b8 = local_e0 + 1;
          local_120 = 0xeea0e6d2d59c638c;
          if (local_b8 <= local_f0) {
            local_120 = 0xc49a08325d650298;
          }
          local_128 = 0xa78574f0dc17a11;
          local_98 = local_b0;
        }
        else if (uVar1 == 0x7b7de9881f8f7e11) {
          thunk_FUN_1801f42e0(local_d0,local_d8);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          local_120 = 0xfc1475fc14c8609c;
          local_128 = 0x3afdb8b5287bba4a;
        }
      }
      if (uVar1 != 0x6318d10f39425d0f) break;
      local_b8 = local_e0 + 0x28;
      local_120 = 0x96574cf675f83956;
      local_128 = 0x58b5138b255c41df;
      local_b0 = local_90;
    }
  } while ((uVar1 != 0x3f0a7f8bb07c267b) && (uVar1 != 0x606335271c96685e));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_114,local_110);
}



void FUN_180187c30(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;

  local_50 = 0xe6ef11d7fdf7315f;
  local_58 = 0xa96a3080fb165508;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xb8c8256da1760cbb;
        if (uVar2 != 0xa58c04cd9e0b6c3f) break;
        plVar1 = (longlong *)*local_48;
        FUN_180186820(local_48 + 1);
        thunk_FUN_1801f42e0(local_48);
        local_50 = 0x399fc3d7b3c986df;
        if (plVar1 == (longlong *)0x0) {
          local_50 = 0xd7fc652ab1c2b022;
        }
        local_58 = 0x9c13c71a2dc2eae0;
        local_48 = plVar1;
      }
      if (uVar2 != 0x4f85215706e16457) break;
      local_48 = (longlong *)*param_1;
      local_50 = 0xc0cd6cdf489a8fd5;
      if (local_48 == (longlong *)0x0) {
        local_50 = 0x2eaeca224a91b928;
      }
      *param_1 = 0;
      local_58 = 0x65416812d691e3ea;
    }
    local_50 = local_50 ^ 0xb8c8256da1760cbb;
  } while (uVar2 != 0x4befa2309c005ac2);
  return;
}



void FUN_180187d80(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_b8 = 0x6cbbb370c96e859f;
  local_c0 = 0xbad2424fb0ec171d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_b8 ^ 0xa29f06322ae8bb4a;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0xa29f06322ae8bb4a;
            local_b8 = uVar2;
            if (-0x29960ec0867d6d7f < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x4896c7eb22cfbf12) {
              if (uVar1 == 0x8e4af4abe1b25b41) {
                local_80 = param_1 + 2;
                local_78 = param_1[1];
                local_b8 = 0xe73481282c873b96;
                if (local_90 == local_78) {
                  local_b8 = 0xc06b5638c9b9587;
                }
                local_c0 = 0x41aafaaa5d11c734;
                local_b0 = local_90;
                local_a8 = local_90;
              }
              else if (uVar1 == 0xa69e7b827196fca2) {
                FUN_18018a140(local_b0);
                local_b0 = local_b0 + 0x40;
                local_b8 = 0xa6236ed37628a053;
                if (local_b0 == local_78) {
                  local_b8 = 0xec77ea472bd32316;
                }
                local_c0 = 0xbd155107be5cf1;
              }
            }
            else if (uVar1 == 0xb7693814dd3040ee) {
              thunk_FUN_1801f42e0(local_98,local_a0);
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              local_b8 = 0x9add27168c1d1691;
              local_c0 = 0x46a1611a46d2c0a5;
            }
            else if (uVar1 == 0xd19834c4d5bd0821) {
              local_88 = *(longlong *)(local_60 + -8);
              local_b8 = 0xa0e93321792a244;
              if ((local_70 - local_88) - 8U < 0x20) {
                local_b8 = 0x10d3470d1fd9842d;
              }
              local_c0 = 0x56a53fe38810c69d;
            }
          }
          if ((longlong)uVar1 < 0x467678ee97c942b0) break;
          if (uVar1 == 0x467678ee97c942b0) {
            local_a0 = local_68 + 0x27;
            local_b8 = 0x90df2cb4f4ccadfc;
            local_c0 = 0x27b614a029fced12;
            local_98 = local_88;
          }
          else if (uVar1 == 0x4dac4fc9d18a52b3) {
            local_98 = local_a8;
            local_a0 = *local_80 - local_a8;
            local_b8 = 0x77931d73276deb28;
            if (0xfff < local_a0) {
              local_b8 = 0x116211a32fe0a3e7;
            }
            local_c0 = 0xc0fa2567fa5dabc6;
            local_70 = local_98;
            local_68 = local_a0;
            local_60 = local_98;
          }
          else if (uVar1 == 0x5cabacd19f8264d9) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        if (uVar1 != 0xd669f13f79829282) break;
        local_90 = *param_1;
        local_b8 = 0xc689c250d920cb4;
        if (local_90 == 0) {
          local_b8 = 0x5e5e2e8226ef81c1;
        }
        local_c0 = 0x8222688eec2057f5;
      }
      if (uVar1 != 0xeccaff162c6d7fe7) break;
      local_a8 = *param_1;
      local_b8 = 0xcc7d00d53385489a;
      local_c0 = 0x81d14f1ce20f1a29;
    }
  } while (uVar1 != 0xdc7c460ccacfd634);
  return;
}



ulonglong * FUN_1801881f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  longlong *local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_60 = 0;
  local_80 = 0x27;
  local_78 = 1;
  local_70 = 5;
  local_58 = 0xf;
  local_68 = 0x7ffffffffffffff;
  local_49 = 0;
  local_90 = 0xffffffffffffffe0;
  lVar9 = *param_1;
  uVar12 = (param_1[1] - lVar9 >> 5) + 1;
  uVar5 = param_1[2] - lVar9 >> 5;
  uVar8 = (uVar5 >> 1) + uVar5;
  if (uVar8 <= uVar12) {
    uVar8 = uVar12;
  }
  if (0x7ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar8 = 0x7ffffffffffffff;
  }
  if (0x7ffffffffffffff < uVar8) {
LAB_1801885e3:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  local_a8 = uVar12;
  if (uVar8 == 0) {
    puVar15 = (ulonglong *)0x0;
  }
  else if (uVar8 < 0x80) {
    puVar15 = (ulonglong *)FUN_1801d61c8(uVar8 * 0x20);
  }
  else {
    if (uVar8 == 0x7ffffffffffffff) goto LAB_1801885e3;
    uVar5 = FUN_1801d61c8(uVar8 * 0x20 + 0x27);
    puVar15 = (ulonglong *)(local_80 + uVar5 & local_90);
    puVar15[-1] = uVar5;
  }
  lVar9 = param_2 - lVar9;
  lVar11 = (longlong)puVar15 + lVar9 + 0x20;
  uVar7 = *param_4;
  uVar5 = param_4[1];
  puVar2 = (undefined8 *)((longlong)puVar15 + lVar9 + 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar15 + lVar9) = 0;
  ((undefined8 *)((longlong)puVar15 + lVar9))[1] = 0;
  local_d0 = param_1;
  local_c8 = puVar15;
  local_c0 = uVar8;
  local_b8 = (ulonglong *)lVar11;
  local_b0 = lVar11;
  local_a0 = param_1;
  if ((longlong)uVar5 < local_60) {
    FUN_180002ac0();
  }
  puVar10 = (ulonglong *)(lVar9 + (longlong)puVar15);
  uVar12 = local_58;
  puVar14 = puVar10;
  if (0xf < uVar5) {
    uVar12 = local_58 | uVar5;
    local_98 = 0x16;
    if (0x16 < uVar12) {
      local_98 = uVar12;
    }
    local_88 = uVar7;
    if (uVar12 < 0xfff) {
      puVar14 = (ulonglong *)FUN_1801d61c8(local_78 + local_98);
    }
    else {
      uVar12 = FUN_1801d61c8(local_98 + 0x28);
      puVar14 = (ulonglong *)(local_80 + uVar12 & local_90);
      puVar14[-1] = uVar12;
    }
    *puVar10 = (ulonglong)puVar14;
    uVar12 = local_98;
    uVar7 = local_88;
  }
  puVar10[2] = uVar5;
  puVar10[3] = uVar12;
  FUN_1802079d0(puVar14,uVar7,uVar5);
  *(undefined1 *)((longlong)puVar14 + uVar5) = local_49;
  lVar6 = *local_a0;
  lVar13 = local_a0[1];
  if (param_2 == lVar13) {
    local_b8 = puVar10;
    if (lVar6 != param_2) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar15 + lVar9 + 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)((longlong)puVar15 + lVar9) = 0;
        ((undefined8 *)((longlong)puVar15 + lVar9))[1] = 0;
        uVar7 = ((undefined8 *)(lVar6 + lVar9))[1];
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar9);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        *(undefined8 *)((longlong)puVar15 + lVar9) = *(undefined8 *)(lVar6 + lVar9);
        ((undefined8 *)((longlong)puVar15 + lVar9))[1] = uVar7;
        puVar2 = (undefined8 *)((longlong)puVar15 + lVar9 + 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *(longlong *)(lVar6 + 0x10 + lVar9) = local_60;
        *(ulonglong *)(lVar6 + 0x18 + lVar9) = local_58;
        *(undefined1 *)(lVar6 + lVar9) = local_49;
        lVar11 = lVar6 + lVar9;
        lVar9 = lVar9 + 0x20;
      } while (lVar11 + 0x20 != param_2);
    }
  }
  else {
    if (lVar6 != param_2) {
      lVar13 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar15 + lVar13 + 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)((longlong)puVar15 + lVar13) = 0;
        ((undefined8 *)((longlong)puVar15 + lVar13))[1] = 0;
        uVar7 = ((undefined8 *)(lVar6 + lVar13))[1];
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar13);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        *(undefined8 *)((longlong)puVar15 + lVar13) = *(undefined8 *)(lVar6 + lVar13);
        ((undefined8 *)((longlong)puVar15 + lVar13))[1] = uVar7;
        puVar2 = (undefined8 *)((longlong)puVar15 + lVar13 + 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *(longlong *)(lVar6 + 0x10 + lVar13) = local_60;
        *(ulonglong *)(lVar6 + 0x18 + lVar13) = local_58;
        *(undefined1 *)(lVar6 + lVar13) = local_49;
        lVar1 = lVar6 + lVar13;
        lVar13 = lVar13 + 0x20;
      } while (lVar1 + 0x20 != param_2);
      lVar13 = local_a0[1];
    }
    local_b8 = puVar15;
    if (param_2 != lVar13) {
      lVar6 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar15 + lVar6 + lVar9 + 0x30);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar11 + lVar6) = 0;
        ((undefined8 *)(lVar11 + lVar6))[1] = 0;
        uVar7 = ((undefined8 *)(param_2 + lVar6))[1];
        puVar2 = (undefined8 *)(param_2 + 0x10 + lVar6);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        *(undefined8 *)(lVar11 + lVar6) = *(undefined8 *)(param_2 + lVar6);
        ((undefined8 *)(lVar11 + lVar6))[1] = uVar7;
        puVar2 = (undefined8 *)((longlong)puVar15 + lVar6 + lVar9 + 0x30);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *(longlong *)(param_2 + 0x10 + lVar6) = local_60;
        *(ulonglong *)(param_2 + 0x18 + lVar6) = local_58;
        *(undefined1 *)(param_2 + lVar6) = local_49;
        lVar1 = param_2 + lVar6;
        lVar6 = lVar6 + 0x20;
      } while (lVar1 + 0x20 != lVar13);
    }
  }
  local_c8 = (ulonglong *)0x0;
  FUN_180188630(local_a0,puVar15,local_a8,uVar8);
  FUN_180188db0(&local_d0);
  return puVar10;
}



void Unwind_1801885f0(undefined8 param_1,longlong param_2)

{
  FUN_180188db0(param_2 + 0x28);
  return;
}



void FUN_180188630(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_130;
  ulonglong local_128;
  uint local_11c;
  uintptr_t local_118;
  longlong *local_110;
  undefined1 *local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong *local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;

  local_128 = 0x98f4258935fb291f;
  local_130 = 0x85f7f9bba06850b7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_128 ^ 0x4d5f5e4529483b9e;
            uVar1 = local_128 ^ local_130;
            local_130 = local_130 ^ 0x4d5f5e4529483b9e;
            local_128 = uVar2;
            if (0x1e74a70c8cb8ced9 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x3a7f62e6cc1b97c1) {
              if ((longlong)uVar1 < -0x55436474b7250330) {
                if (uVar1 == 0x947d13d0b32a78ba) {
                  local_d0 = local_d8 + 0x28;
                  local_128 = 0x11ed781e9988dc71;
                  local_130 = 0xf99df12153012ab;
                  local_c8 = local_78;
                }
                else if (uVar1 == 0x9f4b982ae9577f20) {
                  thunk_FUN_1801f42e0(local_b8,local_c0);
                  local_128 = 0xbc94a7c7b687185a;
                  local_130 = 0xc3af42d923c6ce18;
                }
              }
              else if (uVar1 == 0xaabc9b8b48dafcd0) {
                local_80 = (longlong *)*local_e8;
                local_b0 = local_88;
                local_128 = 0x67608bb76d2fa0ab;
                if (local_88 != local_80) {
                  local_128 = 0x1f7766c711c0ac89;
                }
                local_130 = 0x396e8bb8b7c9643d;
                local_a8 = local_b0;
              }
              else if (uVar1 == 0xb3ccfa85c5c72a1b) goto LAB_180188d41;
            }
            else if ((longlong)uVar1 < 0x1a5f95127f8c3246) {
              if (uVar1 == 0xc5809d1933e4683f) {
                local_c8 = *local_110;
                local_d0 = local_d8 + 1;
                local_128 = 0x6e4f432579ef1fd2;
                if (local_d0 <= local_f0) {
                  local_128 = 0x6a64713b8adbe34e;
                }
                local_130 = 0x7410d63706632d94;
                local_70 = local_c8;
              }
              else if (uVar1 == 0x30bf7fb36769149) {
                local_c0 = local_50 + 0x27;
                local_b8 = local_68;
                local_128 = 0xb0000540dcf34059;
                local_130 = 0x2f4b9d6a35a43f79;
              }
            }
            else if (uVar1 == 0x1a5f95127f8c3246) {
              local_78 = *(longlong *)(local_70 + -8);
              local_128 = 0xabbe62ce10296937;
              if (local_108 <= (undefined1 *)((local_70 + local_100) - local_78)) {
                local_128 = 0x8c0f8b9b66c43b96;
              }
              local_130 = 0x3fc3711ea303118d;
            }
            else if (uVar1 == 0x1d03dc32959379a8) {
              local_118 = 0;
              local_f0 = 0xfff;
              local_f8 = 0xf;
              local_11c = 0;
              local_100 = -8;
              local_108 = (undefined1 *)0x20;
              local_e8 = param_1 + 1;
              local_e0 = param_1 + 2;
              local_88 = (longlong *)*param_1;
              local_128 = 0xb37fde6d3e79c7af;
              if (local_88 != (longlong *)0x0) {
                local_128 = 0x66f8a0f8e3e2ed3d;
              }
              local_130 = 0xcc443b73ab3811ed;
            }
          }
          if (0x4eb3e6efd37434a9 < (longlong)uVar1) break;
          if (uVar1 == 0x1e74a70c8cb8ceda) {
            thunk_FUN_1801f42e0(local_c8,local_d0);
            local_128 = 0x6512bc48d57d6e2d;
            local_130 = 0xa4d8e9247283df1;
          }
          else if (uVar1 == 0x2619ed7fa609c8b4) {
            local_110 = local_b0;
            local_60 = (ulonglong *)(local_b0 + 3);
            local_d8 = local_b0[3];
            local_128 = 0x73facb67ebbab6b0;
            if (local_d8 <= local_f8) {
              local_128 = 0xd92564a44a0b8d53;
            }
            local_130 = 0xb67a567ed85ede8f;
          }
          else if (uVar1 == 0x37de42d0e1807299) {
            local_a8 = (longlong *)*param_1;
            local_128 = 0x9668c85cc4bcc2cd;
            local_130 = 0xc866c8531e5a065b;
          }
        }
        if (0x6f5f32da925553db < (longlong)uVar1) break;
        if (uVar1 == 0x4eb3e6efd37434aa) {
          local_68 = (longlong *)local_48[-1];
          local_128 = 0x1dc7da635e403ad;
          if (local_108 <= (undefined1 *)((longlong)local_58 + (local_100 - (longlong)local_68))) {
            local_128 = 0x7b836b1e0138649f;
          }
          local_130 = 0x2d78a5d039292e4;
        }
        else if (uVar1 == 0x5e0e000fdae6c496) {
          local_58 = local_a8;
          local_c0 = *local_e0 - (longlong)local_a8;
          local_128 = 0x386078bd064df5ae;
          if (local_c0 <= local_f0) {
            local_128 = 0xe99806783c6ebe24;
          }
          local_130 = 0x76d39e52d539c104;
          local_b8 = local_a8;
          local_50 = local_c0;
          local_48 = local_58;
        }
      }
      if (uVar1 != 0x6f5f32da925553dc) break;
      local_110[2] = local_118;
      *local_60 = local_f8;
      *(undefined1 *)local_110 = 0;
      local_b0 = local_110 + 4;
      local_128 = 0x623661d361032653;
      if (local_b0 != local_80) {
        local_128 = 0x73f1ce7c268a9c7e;
      }
      local_130 = 0x55e82303808354ca;
    }
    if (uVar1 == 0x7f3be51e9541d642) {
      *param_1 = param_2;
      *local_e8 = param_3 * 0x20 + param_2;
      *local_e0 = param_4 * 0x20 + param_2;
      return;
    }
  } while (uVar1 != 0x7954e14302aaf67b);
LAB_180188d41:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_11c,local_118);
}



void FUN_180188db0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f4;
  uintptr_t local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong *local_50;
  longlong local_48;

  local_100 = 0x52ed6a676daad84f;
  local_108 = 0xd966f36fadfd649f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_100 ^ 0x33d04d86289da33e;
            uVar1 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x33d04d86289da33e;
            local_100 = uVar2;
            if (-0x261ecea061f713ca < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x542b2bd7b737d75b) {
              if ((longlong)uVar1 < -0x747466f73fa84330) {
                if (uVar1 == 0x80bb693f2f7114c9) {
                  local_e8 = local_90;
                  local_50 = (ulonglong *)(local_90 + 3);
                  local_c0 = local_90[3];
                  local_100 = 0x431c0ff3ee45252;
                  if (local_c0 <= local_d0) {
                    local_100 = 0xde2acdc37d29301d;
                  }
                  local_108 = 0x3a3f4a5da80cecad;
                }
                else if (uVar1 == 0x816ab3ebb490c0b6) {
                  local_b8 = local_c0 + 0x28;
                  local_b0 = local_70;
                  local_100 = 0xc8fb44c43d002109;
                  local_108 = 0xf6c7fd344d42b147;
                }
              }
              else if (uVar1 == 0x8b8b9908c057bcd0) {
                local_f0 = 0;
                local_c8 = 0xfff;
                local_d0 = 0xf;
                local_f4 = 0;
                local_d8 = -8;
                local_e0 = 0x20;
                local_88 = (longlong *)(param_1 + 8);
                local_80 = *(longlong *)(param_1 + 8);
                local_100 = 0xcd55f77670e8dd2f;
                if (local_80 != 0) {
                  local_100 = 0xfb48ef25c3c9c8f1;
                }
                local_108 = 0x899deea9f82ebcef;
              }
              else if (uVar1 == 0x9321b63002a3b015) {
                local_70 = *(longlong *)(local_60 + -8);
                local_100 = 0x184ca037c7645880;
                if (local_e0 <= (ulonglong)((local_60 + local_d8) - local_70)) {
                  local_100 = 0xd7a065b55bf89dab;
                }
                local_108 = 0x992613dc73f49836;
              }
            }
            else if ((longlong)uVar1 < -0x436680f56cdb1a56) {
              if (uVar1 == 0xabd4d42848c828a5) {
                local_a0 = local_98;
                local_a8 = *(longlong *)(param_1 + 0x10) << 5;
                local_100 = 0x55f95dcdfb852f0b;
                if (local_a8 <= local_c8) {
                  local_100 = 0x2d3a688fe14c3a34;
                }
                local_108 = 0x9cf07f871c15f833;
                local_68 = local_a8;
                local_48 = local_a0;
              }
              else if (uVar1 == 0xb1ca1708fd59c207) {
                thunk_FUN_1801f42e0(local_a0,local_a8);
                local_100 = 0x544fcf3d9b53f406;
                local_108 = 0x1087d6e2139595c6;
              }
            }
            else if (uVar1 == 0xc909224ae790d738) {
              local_78 = *(longlong *)(local_48 + -8);
              local_100 = 0x7213d4459ffd024d;
              if (local_e0 <= (ulonglong)((local_48 + local_d8) - local_78)) {
                local_100 = 0x176b9a1092d10bd0;
              }
              local_108 = 0xabf2e51a01f5ee7a;
            }
            else if (uVar1 == 0xbc997f0a9324e5aa) goto LAB_18018949b;
          }
          if (0x3e0e8aa296e8befe < (longlong)uVar1) break;
          if (uVar1 == 0xd9e1315f9e08ec37) {
            local_a8 = local_68 + 0x27;
            local_100 = 0x41cb660afbefc180;
            local_108 = 0xf001710206b60387;
            local_a0 = local_78;
          }
          else if (uVar1 == 0xe415879ed525dcb0) {
            local_e8[2] = local_f0;
            *local_50 = local_d0;
            *(undefined1 *)local_e8 = 0;
            local_90 = local_e8 + 4;
            local_100 = 0x23a6e842a7157ec4;
            if (local_90 != local_58) {
              local_100 = 0xab48665532455c30;
            }
            local_108 = 0x2bf30f6a1d3448f9;
          }
          else if (uVar1 == 0x855e728ba21363d) {
            local_98 = *local_88;
            local_100 = 0x39c7198fdbdb5410;
            local_108 = 0x9213cda793137cb5;
          }
        }
        if (0x44c819df88c661bf < (longlong)uVar1) break;
        if (uVar1 == 0x3e0e8aa296e8beff) {
          local_b0 = *local_e8;
          local_b8 = local_c0 + 1;
          local_100 = 0xfb886a1544d8fed4;
          if (local_b8 <= local_c8) {
            local_100 = 0x569565d53639de8f;
          }
          local_108 = 0x68a9dc25467b4ec1;
          local_60 = local_b0;
        }
        else if (uVar1 == 0x3e3cb9f07042904e) {
          thunk_FUN_1801f42e0(local_b0,local_b8);
          local_100 = 0x4dfcbf34c8d5a691;
          local_108 = 0xa9e938aa1df07a21;
        }
      }
      if (uVar1 != 0x72d5018c3be7741e) break;
      local_58 = *(longlong **)(param_1 + 0x20);
      local_90 = *(longlong **)(param_1 + 0x18);
      local_100 = 0x16c40b3cb032f319;
      if (local_90 != local_58) {
        local_100 = 0x3dabb62bd78bcf75;
      }
      local_108 = 0xbd10df14f8fadbbc;
      local_98 = local_80;
    }
    if (uVar1 == 0x44c819df88c661c0) {
      return;
    }
  } while (uVar1 != 0x4e867669280c059d);
LAB_18018949b:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_f0);
}



longlong FUN_1801894d0(ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;

  uVar4 = *param_1;
  uVar13 = ((longlong)(param_1[1] - uVar4) >> 6) + 1;
  uVar8 = (longlong)(param_1[2] - uVar4) >> 6;
  uVar14 = (uVar8 >> 1) + uVar8;
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (0x3ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar14 = 0x3ffffffffffffff;
  }
  if (0x3ffffffffffffff < uVar14) {
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  if (uVar14 == 0) {
    uVar8 = 0;
  }
  else if (uVar14 < 0x40) {
    uVar8 = FUN_1801d61c8(uVar14 << 6);
  }
  else {
    lVar12 = FUN_1801d61c8(uVar14 << 6 | 0x27);
    uVar8 = lVar12 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar12;
  }
  lVar12 = (param_2 - uVar4) + uVar8;
  FUN_180189a60();
  uVar15 = *param_1;
  uVar10 = param_1[1];
  if (param_2 == uVar10) {
    if (uVar15 == param_2) goto LAB_1801898da;
    lVar12 = 0;
    do {
      puVar2 = (undefined8 *)(uVar8 + 0x10 + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(uVar8 + lVar12) = 0;
      ((undefined8 *)(uVar8 + lVar12))[1] = 0;
      uVar5 = ((undefined8 *)(uVar15 + lVar12))[1];
      puVar2 = (undefined8 *)(uVar15 + 0x10 + lVar12);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      *(undefined8 *)(uVar8 + lVar12) = *(undefined8 *)(uVar15 + lVar12);
      ((undefined8 *)(uVar8 + lVar12))[1] = uVar5;
      puVar2 = (undefined8 *)(uVar8 + 0x10 + lVar12);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      *(undefined8 *)(uVar15 + 0x10 + lVar12) = 0;
      *(undefined8 *)(uVar15 + 0x18 + lVar12) = 0xf;
      *(undefined1 *)(uVar15 + lVar12) = 0;
      puVar2 = (undefined8 *)(uVar8 + 0x30 + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(uVar8 + 0x20 + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(uVar15 + 0x20 + lVar12);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(uVar15 + 0x30 + lVar12);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      puVar3 = (undefined8 *)(uVar8 + 0x20 + lVar12);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar2 = (undefined8 *)(uVar8 + 0x30 + lVar12);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      *(undefined8 *)(uVar15 + 0x30 + lVar12) = 0;
      *(undefined8 *)(uVar15 + 0x38 + lVar12) = 0xf;
      *(undefined1 *)(uVar15 + 0x20 + lVar12) = 0;
      lVar9 = uVar15 + lVar12;
      lVar12 = lVar12 + 0x40;
    } while (lVar9 + 0x40U != param_2);
  }
  else {
    if (uVar15 != param_2) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)(uVar8 + 0x10 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(uVar8 + lVar9) = 0;
        ((undefined8 *)(uVar8 + lVar9))[1] = 0;
        uVar5 = ((undefined8 *)(uVar15 + lVar9))[1];
        puVar2 = (undefined8 *)(uVar15 + 0x10 + lVar9);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        *(undefined8 *)(uVar8 + lVar9) = *(undefined8 *)(uVar15 + lVar9);
        ((undefined8 *)(uVar8 + lVar9))[1] = uVar5;
        puVar2 = (undefined8 *)(uVar8 + 0x10 + lVar9);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        *(undefined8 *)(uVar15 + 0x10 + lVar9) = 0;
        *(undefined8 *)(uVar15 + 0x18 + lVar9) = 0xf;
        *(undefined1 *)(uVar15 + lVar9) = 0;
        puVar2 = (undefined8 *)(uVar8 + 0x30 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(uVar8 + 0x20 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(uVar15 + 0x20 + lVar9);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(uVar15 + 0x30 + lVar9);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        puVar3 = (undefined8 *)(uVar8 + 0x20 + lVar9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(uVar8 + 0x30 + lVar9);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        *(undefined8 *)(uVar15 + 0x30 + lVar9) = 0;
        *(undefined8 *)(uVar15 + 0x38 + lVar9) = 0xf;
        *(undefined1 *)(uVar15 + 0x20 + lVar9) = 0;
        lVar1 = uVar15 + lVar9;
        lVar9 = lVar9 + 0x40;
      } while (lVar1 + 0x40U != param_2);
      uVar10 = param_1[1];
    }
    if (param_2 != uVar10) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)(lVar12 + 0x50 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar12 + 0x40 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar5 = ((undefined8 *)(param_2 + lVar9))[1];
        puVar2 = (undefined8 *)(param_2 + 0x10 + lVar9);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        puVar2 = (undefined8 *)(lVar12 + 0x40 + lVar9);
        *puVar2 = *(undefined8 *)(param_2 + lVar9);
        puVar2[1] = uVar5;
        puVar2 = (undefined8 *)(lVar12 + 0x50 + lVar9);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        *(undefined8 *)(param_2 + 0x10 + lVar9) = 0;
        *(undefined8 *)(param_2 + 0x18 + lVar9) = 0xf;
        *(undefined1 *)(param_2 + lVar9) = 0;
        puVar2 = (undefined8 *)(lVar12 + 0x70 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar12 + 0x60 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(param_2 + 0x20 + lVar9);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(param_2 + 0x30 + lVar9);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        puVar3 = (undefined8 *)(lVar12 + 0x60 + lVar9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(lVar12 + 0x70 + lVar9);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        *(undefined8 *)(param_2 + 0x30 + lVar9) = 0;
        *(undefined8 *)(param_2 + 0x38 + lVar9) = 0xf;
        *(undefined1 *)(param_2 + 0x20 + lVar9) = 0;
        lVar1 = param_2 + lVar9;
        lVar9 = lVar9 + 0x40;
      } while (lVar1 + 0x40U != uVar10);
    }
  }
  uVar15 = *param_1;
LAB_1801898da:
  if (uVar15 == 0) {
    *param_1 = uVar8;
    param_1[1] = uVar13 * 0x40 + uVar8;
    param_1[2] = uVar14 * 0x40 + uVar8;
  }
  else {
    uVar10 = param_1[1];
    if (uVar15 != uVar10) {
      do {
        FUN_18018a140();
        uVar15 = uVar15 + 0x40;
      } while (uVar15 != uVar10);
      uVar15 = *param_1;
    }
    uVar11 = param_1[2] - uVar15;
    uVar10 = uVar15;
    if (0xfff < uVar11) {
      uVar10 = *(ulonglong *)(uVar15 - 8);
      if (0x1f < (uVar15 - 8) - uVar10) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = uVar11 | 0x27;
    }
    thunk_FUN_1801f42e0(uVar10,uVar11);
    *param_1 = uVar8;
    param_1[1] = uVar13 * 0x40 + uVar8;
    param_1[2] = uVar14 * 0x40 + uVar8;
  }
  return uVar8 + (param_2 - uVar4);
}



void Unwind_180189a20(undefined8 param_1,longlong param_2)

{
  FUN_180189ce0(param_2 + 0x58);
  return;
}



undefined8 * FUN_180189a60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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
  uVar1 = *param_3;
  uVar2 = param_3[1];
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
  uVar1 = *param_4;
  uVar2 = param_4[1];
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



void Unwind_180189ca0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x60));
  return;
}



void FUN_180189ce0(longlong param_1)

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

  local_98 = 0x3759f80ba7505aa5;
  local_a0 = 0x332637748f4769de;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_98 ^ 0x49fd7a546f2a7454;
            uVar1 = local_98 ^ local_a0;
            local_a0 = local_a0 ^ 0x49fd7a546f2a7454;
            local_98 = uVar2;
            if (0xf9b986df18bd6e4 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x18d70d9dd957de5d) {
              if (uVar1 == 0xa699dd8502ec5bd3) {
                thunk_FUN_1801f42e0(local_80,local_88);
                local_98 = 0x344d0b71ff92480c;
                local_a0 = 0xbdef3ef4c6c9c76;
              }
              else if (uVar1 == 0xae173c13c61a14dc) {
                local_58 = *(longlong *)(local_48 + -8);
                local_98 = 0xc4772ed9a087a649;
                if ((local_48 - local_58) - 8U < 0x20) {
                  local_98 = 0x5bc87f4a3b4b022e;
                }
                local_a0 = 0x235fdcbb862f87ea;
              }
            }
            else if (uVar1 == 0xebe6465e5f88b536) {
              FUN_18018a140(local_78);
              local_78 = local_78 + 0x40;
              local_98 = 0x1e2840e18b3cdd10;
              if (local_78 == local_50) {
                local_98 = 0xca37c0ee2ca34f32;
              }
              local_a0 = 0xf5ce06bfd4b46826;
            }
            else if (uVar1 == 0x47fcf7f2817337b) {
              local_70 = (longlong *)(param_1 + 8);
              local_68 = *(longlong *)(param_1 + 8);
              local_98 = 0x49ec2f4f4b4628dc;
              if (local_68 == 0) {
                local_98 = 0x79e44fbc09332a43;
              }
              local_a0 = 0x4677b722bacdfe39;
            }
            else if (uVar1 == 0xe728f26226a821a3) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          if ((longlong)uVar1 < 0x601a7f8f4c210e67) break;
          if (uVar1 == 0x601a7f8f4c210e67) {
            local_48 = local_90;
            local_88 = *(longlong *)(param_1 + 0x10) << 6;
            local_98 = 0x56b0f6c49a415f9d;
            if (0xfff < local_88) {
              local_98 = 0x5e3e17525eb71092;
            }
            local_a0 = 0xf0292b4198ad044e;
            local_80 = local_90;
            local_60 = local_88;
          }
          else if (uVar1 == 0x7897a3f1bd6485c4) {
            local_88 = local_60 + 0x27;
            local_80 = local_58;
            local_98 = 0x38349d143f574775;
            local_a0 = 0x9ead40913dbb1ca6;
          }
        }
        if (uVar1 != 0xf9b986df18bd6e5) break;
        local_50 = *(longlong *)(param_1 + 0x20);
        local_78 = *(longlong *)(param_1 + 0x18);
        local_98 = 0x5a10aa1cbb7879f1;
        if (local_78 == local_50) {
          local_98 = 0xd1ec93cda8d1c2a0;
        }
        local_a0 = 0xb1f6ec42e4f0ccc7;
        local_90 = local_68;
      }
      if (uVar1 != 0x3ff9c651f8172714) break;
      local_90 = *local_70;
      local_98 = 0x44e2e37b693d573a;
      local_a0 = 0x24f89cf4251c595d;
    }
  } while (uVar1 != 0x3f93f89eb3fed47a);
  return;
}



void FUN_18018a140(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_f9;
  ulonglong local_f8;
  ulonglong local_f0;
  uint local_e4;
  ulonglong local_e0;
  uintptr_t local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
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
  longlong local_58;
  ulonglong *local_50;
  longlong local_48;

  local_f0 = 0xe64100c10a682b8e;
  local_f8 = 0x4cf83705f49e9ec1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_f0 ^ 0xb9cca3ddf7c4ea8;
            uVar1 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0xb9cca3ddf7c4ea8;
            local_f0 = uVar2;
            if (-0x35620bb5dc41b37 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x293b5d0e75a763ff) {
              if (uVar1 == 0xaab937c4fef6b54f) {
                local_d8 = 0;
                local_b0 = 1;
                local_b8 = 0xfff;
                local_c0 = 0x28;
                local_e0 = 0xf;
                local_f9 = 0;
                local_e4 = 0;
                local_c8 = -8;
                local_d0 = 0x20;
                local_a8 = param_1 + 4;
                local_70 = (ulonglong *)(param_1 + 7);
                local_a0 = param_1[7];
                local_f0 = 0xd736800b4a5af141;
                if (0xf < local_a0) {
                  local_f0 = 0x2477ebc5ab63018c;
                }
                local_f8 = 0xd8b75294460d95aa;
              }
              else if (uVar1 == 0xb1bf537b5752c6b4) {
                local_58 = *(longlong *)(local_48 + -8);
                local_f0 = 0x68113b52d498ff7a;
                if ((ulonglong)((local_48 + local_c8) - local_58) < local_d0) {
                  local_f0 = 0xe17f9594bb67bb8e;
                }
                local_f8 = 0x94b8e41676a31bb0;
              }
              else if (uVar1 == 0xd3cb14e684947000) {
                local_60 = *(longlong *)(local_68 + -8);
                local_f0 = 0xdf8ead34e346e932;
                if ((ulonglong)((local_68 + local_c8) - local_60) < local_d0) {
                  local_f0 = 0x476ebf0b95deea03;
                }
                local_f8 = 0x91aa1dfa1f867602;
              }
            }
            else if (uVar1 == 0xd6c4a2f18a589c01) {
              local_80 = local_a0 + local_c0;
              local_78 = local_60;
              local_f0 = 0x2b8f0348fdbc4550;
              local_f8 = 0x66a78400287d7a1e;
            }
            else if (uVar1 == 0xeeb7ce11cb81b465) {
              local_88 = *param_1;
              local_90 = local_98 + local_b0;
              local_f0 = 0xd42d8d6d342e148a;
              if (local_b8 < local_90) {
                local_f0 = 0x7b6f6498214205b9;
              }
              local_f8 = 0xcad037e37610c30d;
              local_48 = local_88;
            }
            else if (uVar1 == 0xfc5f32f92d273e88) {
              param_1[2] = local_d8;
              *local_50 = local_e0;
              *(undefined1 *)param_1 = local_f9;
              return;
            }
          }
          if ((longlong)uVar1 < 0x1efdba8e423ed787) break;
          if ((longlong)uVar1 < 0x4e24b0cefcc09f30) {
            if (uVar1 == 0x1efdba8e423ed787) {
              thunk_FUN_1801f42e0(local_88,local_90);
              local_f0 = 0x1a6f6c67b343e20d;
              local_f8 = 0xe6305e9e9e64dc85;
            }
            else if (uVar1 == 0x4d288748d5c13f4e) {
              thunk_FUN_1801f42e0(local_78,local_80);
              local_f0 = 0x6d00662309e96295;
              local_f8 = 0x6281b4bc05be067e;
            }
          }
          else if (uVar1 == 0x75c77182cdc4a03e) {
            local_90 = local_98 + local_c0;
            local_f0 = 0x90529858cf1cb4e4;
            local_f8 = 0x8eaf22d68d226363;
            local_88 = local_58;
          }
          else if (uVar1 == 0x4e24b0cefcc09f30) goto LAB_18018a6f1;
        }
        if (uVar1 != 0xfcc0b951ed6e9426) break;
        local_78 = *local_a8;
        local_80 = local_a0 + local_b0;
        local_f0 = 0x6a595909fab974a8;
        if (local_b8 < local_80) {
          local_f0 = 0xf4bacaa7abec3be6;
        }
        local_f8 = 0x2771de412f784be6;
        local_68 = local_78;
      }
      if (uVar1 != 0xf81d29f0c5764eb) break;
      param_1[6] = local_d8;
      *local_70 = local_e0;
      *(undefined1 *)local_a8 = local_f9;
      local_50 = (ulonglong *)(param_1 + 3);
      local_98 = param_1[3];
      local_f0 = 0x9dcbc962b9cf1296;
      if (local_e0 < local_98) {
        local_f0 = 0x8f23358a5f69987b;
      }
      local_f8 = 0x6194fb9b94e82c1e;
    }
  } while (uVar1 != 0xfca9df44a23be4ca);
LAB_18018a6f1:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_e4,local_d8);
}



undefined8 *
FUN_18018a740(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  char *_Str;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;

  uVar1 = param_5[2];
  param_5[2] = 0;
  uVar2 = *param_5;
  uVar3 = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  uVar1 = param_4[2];
  param_4[2] = 0;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  _Str = (char *)*param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  sVar4 = strlen(_Str);
  if (-1 < (longlong)sVar4) {
    uVar8 = 0xf;
    puVar7 = param_1 + 6;
    if (0xf < sVar4) {
      uVar5 = sVar4 | 0xf;
      uVar8 = 0x16;
      if (0x16 < uVar5) {
        uVar8 = uVar5;
      }
      if (uVar5 < 0xfff) {
        puVar7 = (undefined8 *)FUN_1801d61c8(uVar8 + 1);
      }
      else {
        lVar6 = FUN_1801d61c8(uVar8 + 0x28);
        puVar7 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = lVar6;
      }
      param_1[6] = puVar7;
    }
    param_1[8] = sVar4;
    param_1[9] = uVar8;
    FUN_1802079d0(puVar7,_Str,sVar4);
    *(undefined1 *)((longlong)puVar7 + sVar4) = 0;
    return param_1;
  }
  FUN_180002ac0();
}



void Unwind_18018a8f0(undefined8 param_1,longlong param_2)

{
  FUN_18018a920(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_18018a920(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;

  local_b8 = 0x60941253bd7049d4;
  local_c0 = 0x35738f6fecdafd91;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_b8 ^ 0xacac74a08bb76d78;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0xacac74a08bb76d78;
            local_b8 = uVar2;
            if (0x22daa28846aeb0fb < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x49176f57ad7b77dc) {
              if (uVar1 == 0x8addf070b44c1e23) {
                local_a0 = local_78 + 0x27;
                local_b8 = 0xe1b525964c2b18a2;
                local_c0 = 0x506ead6fedcdd70e;
                local_98 = local_88;
              }
              else if (uVar1 == 0xb1db88f9a1e6cfac) {
                thunk_FUN_1801f42e0(local_98,local_a0);
                *param_1 = 0;
                param_1[1] = 0;
                param_1[2] = 0;
                local_b8 = 0x564f53732d8f4213;
                local_c0 = 0x7495f1fb6b21f2ef;
              }
            }
            else if (uVar1 == 0xb6e890a852848824) {
              local_70 = param_1 + 2;
              local_68 = param_1[1];
              local_b8 = 0xd58890c8d7f67975;
              if (local_90 == local_68) {
                local_b8 = 0xd20007e61cd8a997;
              }
              local_c0 = 0x868a459b1be83fac;
              local_b0 = local_90;
              local_a8 = local_90;
            }
            else if (uVar1 == 0x194c8d88ad286b8f) {
              local_88 = *(longlong *)(local_60 + -8);
              local_b8 = 0xb432c6a64138bd32;
              if ((local_80 - local_88) - 8U < 0x20) {
                local_b8 = 0x384f47d633f4bf12;
              }
              local_c0 = 0xb292b7a687b8a131;
            }
            else if (uVar1 == 0x6a07100c6801c03) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          if ((longlong)uVar1 < 0x55e79d3c51aab445) break;
          if (uVar1 == 0x5e5bf8ec3e51690a) {
            local_b0 = *param_1;
            local_b8 = 0x66723ab98d85f70f;
            local_c0 = 0x32f878c48ab56134;
          }
          else if (uVar1 == 0x55e79d3c51aab445) {
            FUN_18018adb0(param_1 + 3);
            local_90 = *param_1;
            local_b8 = 0x36a3d102e6ad35d0;
            if (local_90 == 0) {
              local_b8 = 0xa291e322f2870d08;
            }
            local_c0 = 0x804b41aab429bdf4;
          }
        }
        if (uVar1 != 0x5302d553cc1e46d9) break;
        FUN_18018a140(local_a8);
        local_a8 = local_a8 + 0x40;
        local_b8 = 0x664acbc6297ec656;
        if (local_a8 == local_68) {
          local_b8 = 0x6b13e679db31e985;
        }
        local_c0 = 0x35481e95e560808f;
      }
      if (uVar1 != 0x548a427d0730963b) break;
      local_98 = local_b0;
      local_a0 = *local_70 - local_b0;
      local_b8 = 0xf24f35d784b39aae;
      if (0xfff < local_a0) {
        local_b8 = 0x5ad830a6887d3e8d;
      }
      local_c0 = 0x4394bd2e25555502;
      local_80 = local_98;
      local_78 = local_a0;
      local_60 = local_98;
    }
  } while (uVar1 != 0x22daa28846aeb0fc);
  return;
}



void FUN_18018adb0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_128;
  ulonglong local_120;
  uint local_114;
  uintptr_t local_110;
  longlong *local_108;
  undefined1 *local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong *local_70;
  longlong local_68;
  longlong *local_60;

  local_120 = 0x2f35665719d1e7c2;
  local_128 = 0x1e2726460f4b7489;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_120 ^ 0x7e8b629c031523ab;
            uVar1 = local_120 ^ local_128;
            local_128 = local_128 ^ 0x7e8b629c031523ab;
            local_120 = uVar2;
            if ((longlong)uVar1 < 0x265ece82e90c29a7) break;
            if ((longlong)uVar1 < 0x462d8e7dfdc2c429) {
              if (uVar1 == 0x265ece82e90c29a7) {
                thunk_FUN_1801f42e0(local_b0,local_b8);
                local_120 = 0x4cf9ce61aa84bc09;
                local_128 = 0x994f83c368058ade;
              }
              else if (uVar1 == 0x31124011169a934b) {
                local_110 = 0;
                local_e8 = 0xfff;
                local_f0 = 0xf;
                local_114 = 0;
                local_f8 = -8;
                local_100 = (undefined1 *)0x20;
                local_a8 = (longlong *)*param_1;
                local_120 = 0xc4f95a17d69e34f6;
                if (local_a8 != (longlong *)0x0) {
                  local_120 = 0xa25aea62ab38005;
                }
                local_128 = 0xa6ba860ccf364e5a;
              }
              else if (uVar1 == 0x35a73f43c1ad3a2e) {
                local_a0 = local_d8;
                local_d0 = *local_88 - (longlong)local_d8;
                local_120 = 0x71827c699fe3962c;
                if (local_d0 <= local_e8) {
                  local_120 = 0xeb604216bedb1b9e;
                }
                local_128 = 0xe9f0579ccd109d83;
                local_c8 = local_d8;
                local_98 = local_d0;
                local_60 = local_a0;
              }
            }
            else if ((longlong)uVar1 < 0x6243dc1b19a87aac) {
              if (uVar1 == 0x462d8e7dfdc2c429) {
                local_108 = local_c0;
                local_70 = (ulonglong *)(local_c0 + 3);
                local_e0 = local_c0[3];
                local_120 = 0x747df86d7c78d90b;
                if (local_e0 <= local_f0) {
                  local_120 = 0x57f0dd393b098dcd;
                }
                local_128 = 0x8246909bf988bb1a;
              }
              else if (uVar1 == 0x5f6f522a1d137122) {
                local_d0 = local_98 + 0x27;
                local_c8 = local_78;
                local_120 = 0x2ab85c885bba5882;
                local_128 = 0x282849022871de9f;
              }
              else if (uVar1 == 0x46aef84ea7d3ba54) goto LAB_18018b4ab;
            }
            else if (uVar1 == 0x6a4e9247b94cbac8) {
              local_d8 = (longlong *)*param_1;
              local_120 = 0xa3e6d609659a3cfa;
              local_128 = 0x9641e94aa43706d4;
            }
            else if (uVar1 == 0x6243dc1b19a87aac) {
              return;
            }
          }
          if ((longlong)uVar1 < -0x9c497097a0f9def) break;
          if ((longlong)uVar1 < -0xfa8f76fe59935a) {
            if (uVar1 == 0xf63b68f685f06211) {
              local_b0 = *local_108;
              local_b8 = local_e0 + 1;
              local_120 = 0x1490ca0c03f36dce;
              if (local_b8 <= local_e8) {
                local_120 = 0xcdcb7407eb5928cf;
              }
              local_128 = 0xeb95ba8502550168;
              local_68 = local_b0;
            }
            else if (uVar1 == 0xf6aa3a1ebf4ba27d) {
              local_b8 = local_e0 + 0x28;
              local_b0 = local_90;
              local_120 = 0x9e07ef3bbde07256;
              local_128 = 0xb85921b954ec5bf1;
            }
          }
          else if (uVar1 == 0xff05708901a66ca6) {
            local_90 = *(longlong *)(local_68 + -8);
            local_120 = 0x86d9a596399fc20d;
            if (local_100 <= (undefined1 *)((local_68 + local_f8) - local_90)) {
              local_120 = 0xaad0509c936f07f4;
            }
            local_128 = 0x70739f8886d46070;
          }
          else if (uVar1 == 0x290158a73cb861d) {
            thunk_FUN_1801f42e0(local_c8,local_d0);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_120 = 0x712630be81e541a;
            local_128 = 0x6551bf10f1b62eb6;
          }
        }
        if (-0x2a49b25d3d7ec92a < (longlong)uVar1) break;
        if (uVar1 == 0x98722bf552f30baf) {
          local_78 = (longlong *)local_60[-1];
          local_120 = 0xaf3459868ab97aaf;
          if (local_100 <= (undefined1 *)((longlong)local_a0 + (local_f8 - (longlong)local_78))) {
            local_120 = 0xb6f5f3e23079b1d9;
          }
          local_128 = 0xf05b0bac97aa0b8d;
        }
        else if (uVar1 == 0xac9f28aae585ce5f) {
          local_88 = param_1 + 2;
          local_80 = (longlong *)param_1[1];
          local_d8 = local_a8;
          local_120 = 0xba0ba82dc555fc70;
          if (local_a8 != local_80) {
            local_120 = 0xc9811913f93a0277;
          }
          local_128 = 0x8fac976e04f8c65e;
          local_c0 = local_d8;
        }
      }
      if (uVar1 != 0xd5b64da2c28136d7) break;
      local_108[2] = local_110;
      *local_70 = local_f0;
      *(undefined1 *)local_108 = 0;
      local_c0 = local_108 + 4;
      local_120 = 0xa0a216245fbf8c64;
      if (local_c0 != local_80) {
        local_120 = 0x8cc10a1e1b31f285;
      }
      local_128 = 0xcaec8463e6f336ac;
    }
  } while (uVar1 != 0xdaa3cf1415bb6784);
LAB_18018b4ab:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_114,local_110);
}



void FUN_18018b4f0(longlong *param_1)

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

  local_90 = 0xe7da40dc21380d8c;
  local_98 = 0x40ac281605740fc7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x4826e4527743af3a;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x4826e4527743af3a;
          local_90 = uVar2;
          if ((longlong)uVar1 < -0x357c3147955743da) break;
          if (uVar1 == 0xddcfe380406d8a71) {
            local_80 = local_60 + 0x27;
            local_90 = 0x7772673562a59986;
            local_98 = 0xc1d8fe3184726491;
            local_78 = local_70;
          }
          else if (uVar1 == 0x1c6514c7da41b204) {
            local_68 = local_88;
            local_80 = param_1[2] - local_88;
            local_90 = 0x25ee4663baadeb9a;
            if (0xfff < local_80) {
              local_90 = 0x33c5e42d9f4d9050;
            }
            local_98 = 0x9344df675c7a168d;
            local_78 = local_88;
            local_60 = local_80;
          }
          else if (uVar1 == 0xca83ceb86aa8bc26) {
            return;
          }
        }
        if (-0x4b8e02edfb901c16 < (longlong)uVar1) break;
        if (uVar1 == 0xa0813b4ac33786dd) {
          local_70 = *(longlong *)(local_88 + -8);
          local_90 = 0x43e465ed528b0ac0;
          if ((local_68 - local_70) - 8U < 0x20) {
            local_90 = 0x2a5a7b7f1689635a;
          }
          local_98 = 0xf79598ff56e4e92b;
        }
        else if (uVar1 == 0xa77668ca244c024b) {
          local_88 = *param_1;
          local_90 = 0x8a48c16739bab986;
          if (local_88 == 0) {
            local_90 = 0x5cae1b188953b7a4;
          }
          local_98 = 0x962dd5a0e3fb0b82;
        }
      }
      if (uVar1 != 0xb6aa9904e6d7fd17) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_90 = 0xbe42da7da4c6935a;
      local_98 = 0x74c114c5ce6e2f7c;
    }
  } while (uVar1 != 0xb471fd12046fe3eb);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_18018b7f0(void)

{
  FUN_1801b23c0(&DAT_1802a73d8,&DAT_18029af9a,0x16,0x10,&DAT_1802a73e8);
  FUN_1801d7524(&DAT_1802a73d8);
}



void FUN_18018b830(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uintptr_t local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  ulonglong *local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_d8 = 0x360df29421eea1eb;
  local_e0 = 0x9b4453cfc078c7d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_d8 ^ 0xc254bd4f0dee8909;
            uVar1 = local_d8 ^ local_e0;
            local_e0 = local_e0 ^ 0xc254bd4f0dee8909;
            local_d8 = uVar3;
            if (0x2b524a019f09575b < (longlong)uVar1) break;
            if ((longlong)uVar1 < 0xbce4cf8d50de5b7) {
              if ((longlong)uVar1 < -0x60e92a9395d68efa) {
                if (uVar1 == 0x99e6e815ddd47fa9) {
                  local_a0 = local_c8 * 0x18;
                  local_d8 = 0x8fcb59c66a535204;
                  if (local_c8 == local_b0) {
                    local_d8 = 0xde9db41a03ed1b6a;
                  }
                  local_e0 = 0xb0dd4995e52008f4;
                  local_c0 = 0;
                }
                else if (uVar1 == 0x9aaf4aef2b84c4b7) {
                  local_50 = *(ulonglong *)(local_90 - 8);
                  local_d8 = 0x6a52417940d07918;
                  if ((local_60 - local_50) - 8 < 0x20) {
                    local_d8 = 0xde16de14b5f05f42;
                  }
                  local_e0 = 0xf54494152af9081e;
                }
              }
              else if (uVar1 == 0xef13611b158c06e1) {
                local_d8 = 0x67cd070322707db9;
                if (local_c8 == local_b8) {
                  local_d8 = 0x29cdc2d057fd825a;
                }
                local_e0 = 0x223cdc271eec3203;
              }
              else if (uVar1 == 0x9f16d56c6a297106) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b0);
              }
            }
            else if ((longlong)uVar1 < 0x2503e77af65d32ca) {
              if (uVar1 == 0x10f500298f35b15f) {
                thunk_FUN_1801f42e0(local_80,local_88);
                local_d8 = 0xb50b18c199ecb40b;
                local_e0 = 0xbec554394ce151bc;
              }
              else {
                if (uVar1 == 0xbce4cf8d50de5b7) {
                  *param_1 = local_78;
                  *local_a8 = (local_70 - local_68) + local_78;
                  *local_98 = local_78 + local_48 * 0x18;
                  return;
                }
                if (uVar1 == 0xbf11ef74911b059) goto LAB_18018be15;
              }
            }
            else if (uVar1 == 0x2503e77af65d32ca) {
              local_60 = local_90;
              local_88 = *local_98 - local_90;
              local_d8 = 0xb293c2affb0ef4e3;
              if (0xfff < local_88) {
                local_d8 = 0x38c988695fbf810b;
              }
              local_e0 = 0xa266c286743b45bc;
              local_80 = local_90;
              local_58 = local_88;
            }
          }
          if (0x45f1db243c9c4fb9 < (longlong)uVar1) break;
          if (uVar1 == 0x2b524a019f09575c) {
            local_88 = local_58 + local_d0;
            local_d8 = 0xd2b8756800128f9d;
            local_e0 = 0xc24d75418f273ec2;
            local_80 = local_50;
          }
          else if (uVar1 == 0x3f1610538f735af0) {
            local_d8 = 0xf6be4d0e3a2ef94a;
            if (0xaa < local_c8) {
              local_d8 = 0x5f8ba5c4343ced7f;
            }
            local_e0 = 0xb098c4df21b0eb9e;
          }
          else if (uVar1 == 0x3fb9b7a8dde92d96) {
            local_b0 = 0;
            local_d0 = 0x27;
            local_b8 = 0xaaaaaaaaaaaaaaa;
            local_a8 = param_1 + 1;
            local_70 = param_1[1];
            local_68 = *param_1;
            local_c8 = *param_2;
            local_d8 = 0x4ffc00300673730c;
            if (0xaaaaaaaaaaaaaaa < local_c8) {
              local_d8 = 0xa920c0b5df72471e;
            }
            local_e0 = 0xd61ae825dba70ca5;
          }
        }
        if (0x6e40fd8fe6cd139d < (longlong)uVar1) break;
        if (uVar1 == 0x45f1db243c9c4fba) {
          lVar2 = FUN_1801d61c8(local_a0 + local_d0);
          local_c0 = local_d0 + lVar2 & 0xffffffffffffffe0;
          *(longlong *)(local_c0 - 8) = lVar2;
          local_d8 = 0x4ecbd6a97c05fd1f;
          local_e0 = 0x208b2b269ac8ee81;
        }
        else if (uVar1 == 0x462689d11b9e12d4) {
          local_c0 = FUN_1801d61c8(local_a0);
          local_d8 = 0xee5969fc66b2014f;
          local_e0 = 0x80199473807f12d1;
        }
      }
      if (uVar1 != 0x6e40fd8fe6cd139e) break;
      local_78 = local_c0;
      FUN_1802079d0();
      local_48 = *param_2;
      local_98 = param_1 + 2;
      local_90 = *param_1;
      local_d8 = 0x5426cd03ce30a172;
      if (local_90 == 0) {
        local_d8 = 0x7aeb6681ed60760f;
      }
      local_e0 = 0x71252a79386d93b8;
    }
  } while (uVar1 != 0x7f3a289004d54bbb);
LAB_18018be15:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_18018bea0(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  uintptr_t local_98;
  ulonglong *local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;

  local_d0 = 0xa673946439019fd4;
  local_d8 = 0x8b717ce893d1e4f3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_d0 ^ 0x6e7f72da31670d1c;
            uVar2 = local_d0 ^ local_d8;
            local_d8 = local_d8 ^ 0x6e7f72da31670d1c;
            local_d0 = uVar4;
            if (-0x14e69f7a8ed147d2 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x57f9e495e8dde7df) {
              if ((longlong)uVar2 < -0x6513ce00660cc5d5) {
                if (uVar2 == 0x88bf29523090f181) {
                  local_b0 = *param_1;
                  local_80 = *local_90 - local_b0;
                  if ((local_80 | local_a0) >> 0x20 == 0) {
                    uVar2 = (local_80 & 0xffffffff) / (local_a0 & 0xffffffff);
                  }
                  else {
                    uVar2 = (longlong)local_80 / (longlong)local_a0;
                  }
                  local_c0 = (uVar2 >> 1) + uVar2;
                  if (local_c0 <= param_2) {
                    local_c0 = param_2;
                  }
                  if (local_c8 - (uVar2 >> 1) < uVar2) {
                    local_c0 = local_c8;
                  }
                  local_d0 = 0xa82c1767bcaf4876;
                  if (local_b0 == 0) {
                    local_d0 = 0xa09a25ba1abd2ac2;
                  }
                  local_d8 = 0x89c3ed00d9f32e3;
                  local_60 = local_b0;
                }
                else if (uVar2 == 0x88c2928f793e0661) {
                  local_78 = local_80 + local_b8;
                  local_70 = local_68;
                  local_d0 = 0x6b0c69a81c647caf;
                  local_d8 = 0xa82c1a9dd133ff08;
                }
              }
              else if (uVar2 == 0xa0b029b7b1307a95) {
                local_d0 = 0xf5539240e3fbccd2;
                if (0xfff < local_80) {
                  local_d0 = 0xdd6a81f05f82f75a;
                }
                local_d8 = 0x3673e1752eac4f75;
                local_78 = local_80;
                local_70 = local_b0;
              }
              else if (uVar2 == 0x9aec31ff99f33a2b) {
                FUN_18018b7f0();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            else if (uVar2 == 0xa8061b6a17221821) {
              local_d0 = 0x67e0cc0f9ee25d22;
              if (local_c8 < local_c0) {
                local_d0 = 0xb257a68f69133f3f;
              }
              local_d8 = 0xda2f7f65d9fed8f6;
            }
            else if (uVar2 == 0xbdcfb36a471c85d4) {
              local_88 = local_a0 * local_c0;
              local_d0 = 0x8bbc35bbbf0ae6cf;
              if (local_c0 == local_98) {
                local_d0 = 0x5c717c54bfd9dada;
              }
              local_d8 = 0x763285099e5d9b81;
              local_a8 = 0;
            }
            else if (uVar2 == 0xc3207335cd5783a7) {
              thunk_FUN_1801f42e0(local_70,local_78);
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              local_d0 = 0xb1ea0fcd8a692133;
              local_d8 = 0x19ec14a79d4b3912;
            }
          }
          if (0x141a81e62f5292ec < (longlong)uVar2) break;
          if (uVar2 == 0xeb196085712eb82f) {
            local_68 = *(ulonglong *)(local_b0 - 8);
            local_d0 = 0xbe2c7eea159ebcd8;
            if ((local_60 - local_68) - 8 < 0x20) {
              local_d0 = 0x75ad36f87f3ccaff;
            }
            local_d8 = 0xfd6fa4770602cc9e;
          }
          else if (uVar2 == 0xfd8eb0b221577d4e) {
            local_d0 = 0xbc2a1c87e9df998f;
            if (0xaa < local_c0) {
              local_d0 = 0xf243a0c9af0f9d21;
            }
            local_d8 = 0xaeb006607449e5e2;
          }
          else if (uVar2 == 0x129a1ae79d967c6d) {
            local_a8 = FUN_1801d61c8(local_88);
            local_d0 = 0x73dbb372c6ab0e7b;
            local_d8 = 0x59984a2fe72f4f20;
          }
        }
        if ((longlong)uVar2 < 0x2d02e88caad07b27) break;
        if ((longlong)uVar2 < 0x5cf3a6a9db4678c3) {
          if (uVar2 == 0x2d02e88caad07b27) {
            local_98 = 0;
            local_b8 = 0x27;
            local_c8 = 0xaaaaaaaaaaaaaaa;
            local_a0 = 0x18;
            local_90 = param_1 + 2;
            local_d0 = 0xaada8852f604c116;
            if (0xaaaaaaaaaaaaaaa < param_2) {
              local_d0 = 0xb88990ff5f670abc;
            }
            local_d8 = 0x2265a100c6943097;
          }
          else if (uVar2 == 0x4343da9d139c7046) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_98);
          }
        }
        else if (uVar2 == 0x5cf3a6a9db4678c3) {
          local_d0 = 0x6c547d7ebe9a67ea;
          if (local_c0 == local_c8) {
            local_d0 = 0x5bd5c1b1a66c320a;
          }
          local_d8 = 0x784efc9891c8f507;
        }
        else if (uVar2 == 0x6878d9eab0ede7c9) goto LAB_18018c53c;
      }
      if (uVar2 != 0x141a81e62f5292ed) break;
      lVar3 = FUN_1801d61c8(local_88 + local_b8);
      local_a8 = local_b8 + lVar3 & 0xffffffffffffffe0;
      *(longlong *)(local_a8 - 8) = lVar3;
      local_d0 = 0xde8700e0ad3cb413;
      local_d8 = 0xf4c4f9bd8cb8f548;
    }
    if (uVar2 == 0x2a43f95d2184415b) {
      *param_1 = local_a8;
      param_1[1] = local_a8;
      *local_90 = local_a8 + local_c0 * 0x18;
      return;
    }
  } while (uVar2 != 0x239b3d2937a4c70d);
LAB_18018c53c:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



longlong FUN_18018c5b0(ulonglong *param_1,ulonglong param_2,int *param_3,char *param_4,longlong *param_5)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  uintptr_t local_a8;
  ulonglong local_a0;
  ulonglong *local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_100 = 0xbb28c3713cff3e06;
  local_108 = 0x1f64b1c7ac51ffa2;
LAB_18018c650:
  do {
    while( true ) {
      while( true ) {
        uVar4 = local_100 ^ 0x5ace306262d288a6;
        uVar2 = local_100 ^ local_108;
        local_108 = local_108 ^ 0x5ace306262d288a6;
        local_100 = uVar4;
        if ((longlong)uVar2 < -0x26cf9ea27b7eb4f) break;
        if ((longlong)uVar2 < 0x411e35d9c89fa7e4) {
          if ((longlong)uVar2 < 0x244f2b7ff6f25a19) {
            if (uVar2 == 0xfd930615d84814b1) {
              lVar3 = FUN_1801d61c8(local_88 + local_d0);
              local_b0 = local_d0 + lVar3 & 0xffffffffffffffe0;
              *(longlong *)(local_b0 - 8) = lVar3;
              local_100 = 0x943ea346ccd60cd4;
              local_108 = 0xb07188393a2456cd;
            }
            else if (uVar2 == 0x17b7e703d576659e) {
              local_80 = local_50 + local_d0;
              local_100 = 0xe3798e1b65516101;
              local_108 = 0x4b861ff7dfc8ce67;
              local_78 = local_48;
            }
          }
          else if (uVar2 == 0x244f2b7ff6f25a19) {
            local_e8 = local_b0;
            local_b8 = local_b0 + local_60;
            cVar1 = *param_4;
            *(longlong *)(local_b0 + local_60) = (longlong)*param_3 * 0xe10;
            *(char *)(local_b0 + 8 + local_60) = cVar1;
            lVar3 = -1;
            if (cVar1 != '\0') {
              lVar3 = local_d8;
            }
            *(longlong *)(local_b8 + 0x10) = lVar3 + *param_5;
            local_100 = 0x891696617ac3cdc5;
            if (param_2 != *local_c8) {
              local_100 = 0xc486efd5165bef62;
            }
            local_108 = 0xb9d5cc7a6cd890dc;
          }
          else if (uVar2 == 0x30c35a1b161b5d19) {
            FUN_1802079d0(local_e8);
            local_100 = 0x37aa05cf80e13a5f;
            local_108 = 0x76b43016487e9dbb;
          }
        }
        else if ((longlong)uVar2 < 0x746e1dce77a71d36) {
          if (uVar2 == 0x411e35d9c89fa7e4) {
            local_90 = *param_1;
            local_100 = 0xa2dcf60862020465;
            if (local_90 != 0) {
              local_100 = 0xbfedefd79b9641c2;
            }
            local_108 = 0xb768ce7e05ca963;
          }
          else if (uVar2 == 0x527649ca011ec86a) goto LAB_18018ce66;
        }
        else if (uVar2 == 0x746e1dce77a71d36) {
          local_88 = local_e0 * local_f0;
          local_100 = 0xf8e17a01f9b02e23;
          if (local_f0 != local_a8) {
            local_100 = 0x735f80029f929097;
          }
          local_108 = 0xdcae517e0f42743a;
          local_b0 = 0;
        }
        else if (uVar2 == 0x7d5323af7a837fbe) {
          FUN_1802079d0(local_e8,*param_1,local_c0 - *param_1);
          FUN_1802079d0(local_b8 + 0x18,param_2);
          local_100 = 0xfa9248db2de58287;
          local_108 = 0xbb8c7d02e57a2563;
        }
      }
      if (-0x500e2e836f2f1b54 < (longlong)uVar2) break;
      if ((longlong)uVar2 < -0x57006e134566509a) {
        if (uVar2 == 0xa1fbd7c311559706) {
          local_100 = 0xd226e646e70b9cca;
          if (local_f0 != local_f8) {
            local_100 = 0x9a186c26cf941e67;
          }
          local_108 = 0x678b6a3317dc0ad6;
        }
        else if (uVar2 == 0xa44c72b690aec1a4) {
          local_a8 = 0;
          local_d0 = 0x27;
          local_d8 = 1;
          local_f8 = 0xaaaaaaaaaaaaaaa;
          local_e0 = 0x18;
          local_c8 = param_1 + 1;
          uVar2 = *param_1;
          uVar4 = param_1[1] - uVar2;
          if (uVar4 >> 0x20 == 0) {
            uVar4 = (uVar4 & 0xffffffff) / 0x18;
          }
          else {
            uVar4 = (longlong)uVar4 / 0x18;
          }
          local_60 = param_2 - uVar2;
          local_a0 = uVar4 + 1;
          local_98 = param_1 + 2;
          uVar2 = param_1[2] - uVar2;
          if (uVar2 >> 0x20 == 0) {
            uVar2 = (uVar2 & 0xffffffff) / 0x18;
          }
          else {
            uVar2 = (longlong)uVar2 / 0x18;
          }
          uVar4 = uVar2 >> 1;
          if (local_a0 < uVar4 + uVar2) {
            local_f0 = uVar4 + uVar2;
            if (uVar2 <= 0xaaaaaaaaaaaaaaa - uVar4) goto LAB_18018cdc2;
LAB_18018cde9:
            local_f0 = 0xaaaaaaaaaaaaaaa;
LAB_18018ce08:
            local_100 = 0xfbabfb01e52f3cb9;
          }
          else {
            local_f0 = local_a0;
            if (0xaaaaaaaaaaaaaaa - uVar4 < uVar2) goto LAB_18018cde9;
LAB_18018cdc2:
            local_100 = 0xddb3af059396e9e5;
            if (local_f0 < 0xaaaaaaaaaaaaaab) goto LAB_18018ce08;
          }
          local_108 = 0x8fc5e6cf9288218f;
          local_c0 = param_2;
        }
      }
      else if (uVar2 == 0xa8ff91ecba99af66) {
        thunk_FUN_1801f42e0(local_78,local_80);
        local_100 = 0x443570062227180d;
        local_108 = 0xed9f0ae9a079b50b;
      }
      else {
        if (uVar2 == 0xa9aa7aef825ead06) {
          *param_1 = local_e8;
          *local_c8 = local_e8 + local_a0 * 0x18;
          *local_98 = local_f0 * 0x18 + local_e8;
          return local_b8;
        }
        if (uVar2 == 0xab48228c771a8c92) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a8);
        }
      }
    }
    if ((longlong)uVar2 < -0x4a52738a0f2869e4) {
      if (uVar2 == 0xaff1d17c90d0e4ad) {
        local_100 = 0xd212b1940b550d46;
        if (local_f0 < 0xab) {
          local_100 = 0xa66f63756c719491;
        }
        local_108 = 0x73e966571a009a40;
      }
      else if (uVar2 == 0xb49b63307bcae8a1) {
        local_78 = local_90;
        local_80 = *local_98 - local_90;
        local_100 = 0xf4672d04060b4e45;
        if (local_80 < 0x1000) {
          local_100 = 0x9fb6b9ffee4b5bc5;
        }
        local_108 = 0x3749281354d2f4a3;
        local_58 = local_78;
        local_50 = local_80;
      }
      goto LAB_18018c650;
    }
    if (uVar2 == 0xc32e051752d9bae6) {
      local_48 = *(ulonglong *)(local_90 - 8);
      local_100 = 0x190295fd772588;
      if (0x1f < (local_58 - local_48) - 8) {
        local_100 = 0xbce6c71a5f1bcc84;
      }
      local_108 = 0x17aee59628014016;
    }
    else if (uVar2 == 0xd586052276710ed1) {
      local_b0 = FUN_1801d61c8(local_88);
      local_100 = 0xead0ddc9f33026ec;
      local_108 = 0xce9ff6b605c27cf5;
    }
    else if (uVar2 == 0xb5ad8c75f0d7961c) {
LAB_18018ce66:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
  } while( true );
}



ulonglong * FUN_18018cef0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 local_e9;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong *local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  ulonglong local_60;

  local_e0 = 0xf8fb3a5d53b09d18;
  local_e8 = 0x33dc3b2c8bfc93ae;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar11 = local_e0 ^ 0xd95263fddcc4f18e;
            uVar9 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0xd95263fddcc4f18e;
            local_e0 = uVar11;
            if ((longlong)uVar9 < 0x30441562f145c8b1) break;
            if ((longlong)uVar9 < 0x7390acc4889bcf64) {
              if (uVar9 == 0x4db5f41f30e3d0cb) {
                lVar8 = FUN_1801d61c8(local_80 + 0x28);
                local_88 = lVar8 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(local_88 - 8) = lVar8;
                local_e0 = 0x347a5122776057e4;
                local_e8 = 0x4a925409219e9682;
                local_90 = local_80;
              }
              else if (uVar9 == 0x6549f895443be109) {
                uVar9 = local_c0 | local_d8;
                local_80 = 0x16;
                if (0x16 < uVar9) {
                  local_80 = uVar9;
                }
                local_e0 = 0xff98be7e24b38042;
                if (0xffe < uVar9) {
                  local_e0 = 0x6c236fca5d582c93;
                }
                local_e8 = 0x21969bd56dbbfc58;
                local_60 = local_80;
              }
              else if (uVar9 == 0x30441562f145c8b1) {
                FUN_180002ac0();
              }
            }
            else if (uVar9 == 0x7390acc4889bcf64) {
              uVar1 = *(undefined4 *)param_4;
              uVar2 = *(undefined4 *)((longlong)param_4 + 4);
              uVar3 = *(undefined4 *)(param_4 + 1);
              uVar4 = *(undefined4 *)((longlong)param_4 + 0xc);
              uVar5 = *(undefined4 *)((longlong)param_4 + 0x14);
              uVar6 = *(undefined4 *)(param_4 + 3);
              uVar7 = *(undefined4 *)((longlong)param_4 + 0x1c);
              *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
              *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
              *(undefined4 *)(param_1 + 3) = uVar6;
              *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
              *(undefined4 *)param_1 = uVar1;
              *(undefined4 *)((longlong)param_1 + 4) = uVar2;
              *(undefined4 *)(param_1 + 1) = uVar3;
              *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
              *local_70 = local_b0;
              *local_a0 = local_d8;
              *(undefined1 *)param_4 = local_e9;
              uVar9 = *param_1;
              FUN_1802079d0(local_d0 + uVar9,uVar9,local_c8 + local_b8);
              puVar12 = param_3;
              if (local_d8 < *local_a8) {
                puVar12 = (undefined8 *)*param_3;
              }
              FUN_1802079d0(uVar9,puVar12,local_d0);
              param_1[2] = local_c0;
              local_e0 = 0x5fc63ecef410cf0a;
              local_e8 = 0xde8c492cb6b163bb;
            }
            else if (uVar9 == 0x7d72ae7fe6d77e4c) {
              local_e0 = 0x936ae1ed63720f3a;
              if (local_98 - local_d0 < local_c8) {
                local_e0 = 0x6f421d1d4183ff1b;
              }
              local_e8 = 0x5f06087fb0c637aa;
            }
            else if (uVar9 == 0x7ee8052b56fec166) {
              *param_1 = local_88;
              param_1[2] = local_c0;
              param_1[3] = local_90;
              puVar12 = param_3;
              if (local_d8 < *local_a8) {
                puVar12 = (undefined8 *)*param_3;
              }
              FUN_1802079d0(local_88,puVar12,local_d0);
              puVar12 = param_4;
              if (local_d8 < *local_a0) {
                puVar12 = (undefined8 *)*param_4;
              }
              FUN_1802079d0(local_88 + local_d0,puVar12,local_c8 + local_b8);
              local_e0 = 0x575629a8d1086e00;
              local_e8 = 0xd61c5e4a93a9c2b1;
            }
          }
          if ((longlong)uVar9 < -0x21f1da54b6f783e6) break;
          if (uVar9 == 0xde0e25ab49087c1a) {
            local_90 = local_60;
            local_88 = FUN_1801d61c8(local_b8 + local_60);
            local_e0 = 0xcc4d8baf42954d6f;
            local_e8 = 0xb2a58e84146b8c09;
          }
          else if (uVar9 == 0xf6976b0abdd1e540) {
            local_e0 = 0x564d7ad5e172637b;
            if (local_68 - local_c8 < local_d0) {
              local_e0 = 0x58af786e8f3ed253;
            }
            local_e8 = 0x25ddd61169e9ac1f;
          }
          else if (uVar9 == 0x7c92d36811ff928) {
            uVar1 = *(undefined4 *)param_3;
            uVar2 = *(undefined4 *)((longlong)param_3 + 4);
            uVar3 = *(undefined4 *)(param_3 + 1);
            uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
            uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
            uVar6 = *(undefined4 *)(param_3 + 3);
            uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
            *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
            *(undefined4 *)(param_1 + 3) = uVar6;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
            *(undefined4 *)param_1 = uVar1;
            *(undefined4 *)((longlong)param_1 + 4) = uVar2;
            *(undefined4 *)(param_1 + 1) = uVar3;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
            *local_78 = local_b0;
            *local_a8 = local_d8;
            *(undefined1 *)param_3 = local_e9;
            puVar10 = param_1;
            if (local_d8 < param_1[3]) {
              puVar10 = (ulonglong *)*param_1;
            }
            puVar12 = param_4;
            if (local_d8 < *local_a0) {
              puVar12 = (undefined8 *)*param_4;
            }
            FUN_1802079d0((longlong)puVar10 + local_d0,puVar12,local_c8 + local_b8);
            param_1[2] = local_c0;
            local_e0 = 0x264b152dbd0f926;
            local_e8 = 0x832ec6b099715597;
          }
        }
        if (uVar9 != 0xcb270171d84c0eb6) break;
        local_98 = 0x7fffffffffffffff;
        local_b0 = 0;
        local_b8 = 1;
        local_d8 = 0xf;
        local_e9 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        local_78 = param_3 + 2;
        local_d0 = param_3[2];
        local_70 = param_4 + 2;
        local_c8 = param_4[2];
        local_a8 = param_3 + 3;
        local_a0 = param_4 + 3;
        local_68 = param_4[3];
        local_e0 = 0x1ec5dc83ebf405d0;
        if ((ulonglong)param_3[3] < local_68) {
          local_e0 = 0xef9b9abfd73a19b8;
        }
        if (param_3[3] - local_d0 < local_c8) {
          local_e0 = 0xef9b9abfd73a19b8;
        }
        local_c0 = local_d0 + local_c8;
        local_e8 = 0x190cf1b56aebfcf8;
      }
      if (uVar9 != 0xcc6ce992d3b43890) break;
      local_e0 = 0xe0705617b5fe2f81;
      if ((longlong)local_c0 < local_b0) {
        local_e0 = 0xc88c5a9dc1261e43;
      }
      local_e8 = 0x8539ae82f1c5ce88;
      local_80 = local_98;
    }
  } while (uVar9 != 0x814a77e242a1acb1);
  return param_1;
}



undefined8 * FUN_18018d5a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong local_138;
  ulonglong local_130;
  char local_125;
  int local_124;
  size_t local_120;
  size_t local_118;
  undefined8 *local_110;
  ulonglong local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  void *local_c0;
  size_t local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;

  local_130 = 0x1a3a054261b1db25;
  local_138 = 0xdc58caf92de292e9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_130 ^ 0xce112c93f4ab8a79;
              uVar2 = local_130 ^ local_138;
              local_138 = local_138 ^ 0xce112c93f4ab8a79;
              local_130 = uVar4;
              if ((longlong)uVar2 < 0x78404f5cbb58a6a) break;
              if ((longlong)uVar2 < 0x37cdaba55c8b4746) {
                if ((longlong)uVar2 < 0x150492f42829bd74) {
                  if (uVar2 == 0x78404f5cbb58a6a) {
                    local_58 = local_a8;
                    local_130 = 0x5e2863bc8f83d40d;
                    if (local_a8[2] == local_120) {
                      local_130 = 0x87c0d68621e38bf;
                    }
                    local_138 = 0x45f879044fac5b54;
                    local_e0 = local_a8;
                  }
                  else if (uVar2 == 0xb11f26cf84c9299) {
                    if (local_108 < (ulonglong)local_78[7]) {
                      local_68 = (undefined8 *)local_78[4];
                    }
                    else {
                      local_68 = local_78 + 4;
                    }
                    local_130 = 0x7d3c73d3b8d31dd3;
                    if (local_125 != '\0') {
                      local_130 = 0xd7406aa1ca136424;
                    }
                    local_138 = 0xab964472924599d9;
                    local_f0 = local_100;
                  }
                  else if (uVar2 == 0x1227812f899a922b) {
                    local_98 = local_d0 + 4;
                    local_130 = 0x119107468309b969;
                    if (local_98 == local_110) {
                      local_130 = 0x10647f174baed191;
                    }
                    local_138 = 0xba8811c6fef98c2;
                  }
                }
                else if ((longlong)uVar2 < 0x1bccfe0b24414953) {
                  if (uVar2 == 0x1a39865aece621ab) {
                    local_d0 = local_98;
                    local_130 = 0x2da3d76f99544871;
                    if (local_98[2] == local_118) {
                      local_130 = 0xbc5e2a22dc34455e;
                    }
                    local_138 = 0x3f84564010ceda5a;
                  }
                  else if (uVar2 == 0x150492f42829bd74) {
                    return local_b0;
                  }
                }
                else if (uVar2 == 0x1bccfe0b24414953) {
                  local_f8 = *(undefined8 **)(param_1 + 0x40);
                  local_e0 = *(undefined8 **)(param_1 + 0x38);
                  local_130 = 0x13653829e89597e0;
                  if (local_e0 == local_f8) {
                    local_130 = 0x3af4d9b9d67b5106;
                  }
                  local_138 = 0x7770add5fbc932ed;
                  local_60 = local_e0;
                }
                else if (uVar2 == 0x1bd01ab8c02f8f59) {
                  local_a8 = local_58 + 8;
                  local_130 = 0x2b02e268d3f68c40;
                  if (local_a8 == local_f8) {
                    local_130 = 0xe664821a0b0be6a7;
                  }
                  local_138 = 0x2c86e69d1843062a;
                }
              }
              else if ((longlong)uVar2 < 0x50f6e39a70ae4ef8) {
                if (uVar2 == 0x37cdaba55c8b4746) {
                  local_d8 = local_a0;
                  local_130 = 0xc6c4edf55add515;
                  if (local_a0[2] == local_b8) {
                    local_130 = 0xd4e96e78d13fbf1f;
                  }
                  local_138 = 0x841f8de2a191f1e7;
                }
                else if (uVar2 == 0x4d84746c2db263eb) {
                  local_78 = local_e0;
                  local_130 = 0x3f0b68d84edf5b67;
                  if (local_e0 == (undefined8 *)0x0) {
                    local_130 = 0xfef8fe33a5db2973;
                  }
                  if (local_e0 == local_f8) {
                    local_130 = 0xfef8fe33a5db2973;
                  }
                  local_138 = 0x341a9ab4b693c9fe;
                }
                else if (uVar2 == 0x50d56d58018ac7ad) {
                  local_130 = 0xe3ae8d88b050715d;
                  if (local_e8 == (undefined8 *)0x0) {
                    local_130 = 0xed66e177bc38857a;
                  }
                  if (local_e8 == local_110) {
                    local_130 = 0xed66e177bc38857a;
                  }
                  local_138 = 0xf6aa1f7c9879cc29;
                  local_b0 = local_e8;
                }
              }
              else if (uVar2 == 0x50f6e39a70ae4ef8) {
                puVar3 = local_d8;
                if (local_108 < (ulonglong)local_d8[3]) {
                  puVar3 = (undefined8 *)*local_d8;
                }
                iVar1 = memcmp(puVar3,local_68,local_b8);
                local_130 = 0xd2a61bb4bcee4350;
                if (iVar1 == local_124) {
                  local_130 = 0x2603f65a10849a5f;
                }
                local_138 = 0x5ad5d88948d267a2;
                local_f0 = local_d8;
              }
              else if (uVar2 == 0x641595fc135ca50d) {
                local_130 = 0x9bb8efc1d1edd773;
                if (local_118 == local_120) {
                  local_130 = 0x49e65d4c27ceda84;
                }
                local_138 = 0x4e6259b9ec7b50ee;
                local_90 = local_60;
                local_a8 = local_60;
              }
              else if (uVar2 == 0x7cd62ed35856fdfd) {
                local_130 = 0x1850c718e0c49a77;
                if (local_f0 == (undefined8 *)0x0) {
                  local_130 = 0xc7b6316bdba5c78e;
                }
                if (local_f0 == local_110) {
                  local_130 = 0xc7b6316bdba5c78e;
                }
                local_138 = 0xd5455ecc8ed2703;
                local_b0 = local_f0;
              }
            }
            if ((longlong)uVar2 < -0x2ec454449172f86c) break;
            if ((longlong)uVar2 < -0x21133bfda75fbe7b) {
              if (uVar2 == 0xd13babbb6e8d0794) {
                puVar3 = local_c8;
                if (local_108 < (ulonglong)local_c8[3]) {
                  puVar3 = (undefined8 *)*local_c8;
                }
                iVar1 = memcmp(puVar3,local_c0,local_118);
                local_130 = 0x18134e6d17496eae;
                if (iVar1 == local_124) {
                  local_130 = 0x9cb7710edaa17568;
                }
                local_138 = 0xd1330562f7131683;
                local_e0 = local_c8;
              }
              else if (uVar2 == 0xd5dab6783d96879d) {
                local_c8 = local_90;
                local_130 = 0xcbb4d04e9661e5c1;
                if (local_90[2] == local_118) {
                  local_130 = 0xd3af30fa18b69a78;
                }
                local_138 = 0x2949b41763b9dec;
              }
              else if (uVar2 == 0xd6aa37a12a96840a) {
                local_b8 = local_78[6];
                local_130 = 0x20d591a21fdb0285;
                if (local_b8 == local_120) {
                  local_130 = 0xf2b42678215d644c;
                }
                local_138 = 0x17183a07435045c3;
                local_80 = local_100;
                local_a0 = local_100;
              }
            }
            else if (uVar2 == 0xdeecc40258a04185) {
              local_80 = local_48 + 4;
              local_130 = 0xadb357b79163b5d7;
              if (local_80 == local_110) {
                local_130 = 0x82fd2f4fe02674d5;
              }
              local_138 = 0x481f4bc8f36e9458;
            }
            else if (uVar2 == 0xe5ac1c7f620d218f) {
              local_48 = local_80;
              local_130 = 0x5531f43c7f34702f;
              if (local_80[2] == local_120) {
                local_130 = 0xf70b1eed7fc2cc57;
              }
              local_138 = 0x8bdd303e279431aa;
              local_f0 = local_80;
            }
            else if (uVar2 == 0xf178af3f886fd3bd) {
              local_50 = local_88;
              local_130 = 0x3e3609bb0b92fe9c;
              if (local_88[2] == local_120) {
                local_130 = 0xa5aa4cf9a6b93163;
              }
              local_138 = 0xf57f21a1a733f6ce;
              local_e8 = local_88;
            }
          }
          if (-0x399d3044b3acb635 < (longlong)uVar2) break;
          if (uVar2 == 0x8092291184e24407) {
            local_130 = 0x8b77b6071838949d;
            if (local_118 == local_120) {
              local_130 = 0x60369f627cb1668b;
            }
            local_138 = 0x914e305df4deb536;
            local_98 = local_100;
            local_88 = local_100;
          }
          else if (uVar2 == 0x83da7c62ccfa9f04) {
            puVar3 = local_d0;
            if (local_108 < (ulonglong)local_d0[3]) {
              puVar3 = (undefined8 *)*local_d0;
            }
            iVar1 = memcmp(puVar3,local_c0,local_118);
            local_130 = 0x99a8393d58499933;
            if (iVar1 == local_124) {
              local_130 = 0xdb5ad54ad059ccb5;
            }
            local_138 = 0x8b8fb812d1d30b18;
            local_e8 = local_d0;
          }
          else if (uVar2 == 0x8873c33df43c24f2) {
            local_a0 = local_d8 + 4;
            local_130 = 0xc2826fa740622cd5;
            if (local_a0 == local_110) {
              local_130 = 0x3fada0850fa18b1e;
            }
            local_138 = 0xf54fc4021ce96b93;
          }
        }
        if (-0x351d9b78ecb71f74 < (longlong)uVar2) break;
        if (uVar2 == 0xc662cfbb4c5349cc) {
          local_120 = 0;
          local_108 = 0xf;
          local_124 = 0;
          local_c0 = (void *)*param_2;
          local_118 = param_2[1];
          local_110 = *(undefined8 **)(param_1 + 0x28);
          local_100 = *(undefined8 **)(param_1 + 0x20);
          local_125 = local_100 == local_110;
          local_130 = 0xa48f032ed45b1a05;
          if ((bool)local_125) {
            local_130 = 0x74c84767513399af;
          }
          local_138 = 0x241d2a3f50b95e02;
          local_e8 = local_100;
        }
        else if (uVar2 == 0xc9204b0fe05a782d) {
          local_90 = local_c8 + 8;
          local_130 = 0xfe8d72ecfbfe3548;
          if (local_90 == local_f8) {
            local_130 = 0xe1b5a013d5205258;
          }
          local_138 = 0x2b57c494c668b2d5;
        }
      }
      if (uVar2 != 0xcb49281aaca10852) break;
      local_88 = local_50 + 4;
      local_130 = 0x8e6cc9d8adc1fd08;
      if (local_88 == local_110) {
        local_130 = 0x64d898ec01ef67e6;
      }
      local_138 = 0x7f1466e725ae2eb5;
    }
  } while (uVar2 != 0xcae264871348e08d);
  FUN_1801b23c0(&DAT_1802a73ec,&DAT_18029afda,0x1e,0x2b,&DAT_1802a7418);
  FUN_1801d756c(&DAT_1802a73ec);
}



undefined8 * FUN_18018e150(undefined8 *param_1)

{
  int iVar1;
  char *_Str;
  int *piVar2;
  size_t sVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;

  uVar9 = 0xfffffffffffffffe;
  uVar8 = 0xf;
  piVar2 = (int *)FUN_1801db068();
  if (piVar2 == (int *)0x0) {
    FUN_1801d6d1c();
  }
  iVar1 = *piVar2;
  uVar7 = iVar1 == 2;
  if (iVar1 < 2) {
    uVar7 = iVar1 == 1;
    if (!(bool)uVar7) goto LAB_18018e1b2;
    FUN_1801dbc40();
  }
  if ((bool)uVar7) {
    FUN_1801b23c0(&DAT_1802a73a0,&DAT_18029af3d,0x13,0x31,&DAT_1802a73d4,uVar8,piVar2,uVar9);
    FUN_1801d756c(&DAT_1802a73a0);
  }
LAB_18018e1b2:
  _Str = *(char **)(piVar2 + 2);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  sVar3 = strlen(_Str);
  if (-1 < (longlong)sVar3) {
    puVar6 = param_1;
    if (0xf < sVar3) {
      uVar4 = uVar8 | sVar3;
      uVar8 = 0x16;
      if (0x16 < uVar4) {
        uVar8 = uVar4;
      }
      if (uVar4 < 0xfff) {
        puVar6 = (undefined8 *)FUN_1801d61c8(uVar8 + 1);
      }
      else {
        lVar5 = FUN_1801d61c8(uVar8 + 0x28);
        puVar6 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        puVar6[-1] = lVar5;
      }
      *param_1 = puVar6;
    }
    param_1[2] = sVar3;
    param_1[3] = uVar8;
    FUN_1802079d0(puVar6,_Str,sVar3);
    *(undefined1 *)((longlong)puVar6 + sVar3) = 0;
    FUN_1801daf6c(piVar2);
    return param_1;
  }
  FUN_180002ac0();
}



void Unwind_18018e340(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1801daf6c(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



void Unwind_18018e380(undefined8 param_1,longlong param_2)

{
  FUN_1801daf6c(*(undefined8 *)(param_2 + 0x30));
  return;
}



ulonglong * FUN_18018e3b0(undefined8 *param_1,ulonglong *param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 ***pppuVar8;
  int *piVar9;
  size_t sVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  char *_Str;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  undefined1 uVar16;
  undefined1 auVar17 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong *local_f8;
  ulonglong local_f0;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  uintptr_t local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  int *local_80;
  undefined1 local_71;
  undefined8 local_70;

  local_70 = 0xfffffffffffffffe;
  local_c0 = 0x7fffffffffffffff;
  local_a0 = 0;
  local_90 = 1;
  local_b8 = 0x27;
  local_98 = 0x28;
  local_88 = 0xf;
  local_b0 = 0xffe;
  local_71 = 0;
  local_a8 = 0xffffffffffffffe0;
  lVar2 = *param_3;
  lVar3 = param_1[2];
  local_f8 = param_2;
  if (lVar3 == 0x7fffffffffffffff) {
    FUN_180002ac0();
  }
  local_80 = (int *)CONCAT71(local_80._1_7_,param_4);
  puVar14 = (undefined8 *)*param_1;
  uVar7 = param_1[3];
  local_e8 = (undefined8 ****)0x0;
  uStack_e0 = 0;
  uVar13 = lVar3 + 1;
  uVar11 = 0xf;
  ppppuVar15 = &local_e8;
  if (0xf < uVar13) {
    uVar11 = 0x7fffffffffffffff;
    local_f0 = uVar7;
    if (-2 < lVar3) {
      uVar7 = uVar13 | 0xf;
      uVar11 = 0x16;
      if (0x16 < uVar7) {
        uVar11 = uVar7;
      }
      if (uVar7 < 0xfff) {
        ppppuVar15 = (undefined8 ****)FUN_1801d61c8(uVar11 + 1);
        uVar7 = local_f0;
        local_e8 = ppppuVar15;
        goto LAB_18018e55a;
      }
    }
    pppuVar8 = (undefined8 ***)FUN_1801d61c8(uVar11 + 0x28);
    ppppuVar15 = (undefined8 ****)(local_b8 + (longlong)pppuVar8 & local_a8);
    ppppuVar15[-1] = pppuVar8;
    uVar7 = local_f0;
    local_e8 = ppppuVar15;
  }
LAB_18018e55a:
  if (uVar7 <= local_88) {
    puVar14 = param_1;
  }
  local_d8 = uVar13;
  local_d0 = uVar11;
  FUN_1802079d0(ppppuVar15,puVar14,lVar3);
  *(undefined1 *)((longlong)ppppuVar15 + lVar3) = local_80._0_1_;
  *(undefined1 *)((longlong)ppppuVar15 + uVar13) = local_71;
  ppppuVar15 = &local_e8;
  if (local_88 < local_d0) {
    ppppuVar15 = (undefined8 ****)local_e8;
  }
  piVar9 = (int *)FUN_1801db2c4(ppppuVar15,param_1[2],(double)lVar2 / 10000.0);
  puVar6 = local_f8;
  if (piVar9 == (int *)0x0) {
    local_80 = piVar9;
    FUN_1801d6d1c();
  }
  iVar1 = *piVar9;
  uVar16 = iVar1 == 2;
  if (iVar1 < 2) {
    uVar16 = iVar1 == 1;
    if (!(bool)uVar16) goto LAB_18018e5da;
    local_80 = piVar9;
    FUN_1801dbc40();
  }
  if ((bool)uVar16) {
    local_80 = piVar9;
    FUN_1801b23c0(&DAT_1802a73a0,&DAT_18029af3d,0x13,0x31,&DAT_1802a73d4);
    FUN_1801d756c(&DAT_1802a73a0);
  }
LAB_18018e5da:
  auVar17 = *(undefined1 (*) [16])(piVar9 + 2);
  local_108 = auVar17;
  *(undefined8 *)(local_108 + (ulonglong)((uint)local_90 & 1) * 8) = 0x430b9f6ffcf9a0c0;
  uVar4 = local_108._0_8_;
  uVar5 = local_108._8_8_;
  local_118 = auVar17;
  *(undefined8 *)(local_118 + (ulonglong)((uint)local_a0 & 1) * 8) = 0xc30f27dc06838000;
  auVar17 = divpd(auVar17,_DAT_18021f870);
  *puVar6 = ~-(ulonglong)((double)local_118._0_8_ < (double)uVar4) & 0xffffff00c5c25a00 |
            (longlong)auVar17._0_8_ & -(ulonglong)((double)local_118._0_8_ < (double)uVar4);
  puVar6[1] = ~-(ulonglong)((double)local_118._8_8_ < (double)uVar5) & 0xe2493732ff |
              (longlong)auVar17._8_8_ & -(ulonglong)((double)local_118._8_8_ < (double)uVar5);
  puVar6[2] = (longlong)((double)piVar9[6] / 1000.0);
  *(int *)(puVar6 + 3) = (int)((double)piVar9[7] / 60000.0);
  _Str = "";
  if (*(char **)(piVar9 + 8) != (char *)0x0) {
    _Str = *(char **)(piVar9 + 8);
  }
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  sVar10 = strlen(_Str);
  if ((longlong)sVar10 < (longlong)local_a0) {
    local_80 = piVar9;
    FUN_180002ac0();
  }
  uVar7 = local_88;
  puVar12 = puVar6 + 4;
  if (0xf < sVar10) {
    uVar11 = local_88 | sVar10;
    uVar7 = 0x16;
    if (0x16 < uVar11) {
      uVar7 = uVar11;
    }
    if (local_b0 < uVar11) {
      local_80 = piVar9;
      uVar11 = FUN_1801d61c8(local_98 + uVar7);
      puVar12 = (ulonglong *)(local_b8 + uVar11 & local_a8);
      puVar12[-1] = uVar11;
    }
    else {
      local_80 = piVar9;
      puVar12 = (ulonglong *)FUN_1801d61c8(local_90 + uVar7);
    }
    puVar6[4] = (ulonglong)puVar12;
    piVar9 = local_80;
  }
  puVar6[6] = sVar10;
  puVar6[7] = uVar7;
  FUN_1802079d0(puVar12,_Str,sVar10);
  *(undefined1 *)((longlong)puVar12 + sVar10) = local_71;
  FUN_1801dafa0(piVar9);
  if (local_88 < local_d0) {
    uVar7 = local_90 + local_d0;
    ppppuVar15 = (undefined8 ****)local_e8;
    if (0xfff < uVar7) {
      ppppuVar15 = (undefined8 ****)local_e8[-1];
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppuVar15))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a0);
      }
      uVar7 = local_d0 + local_98;
    }
    thunk_FUN_1801f42e0(ppppuVar15,uVar7);
  }
  return puVar6;
}



void Unwind_18018e8a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 200) != 0) {
    FUN_1801dafa0(*(undefined8 *)(param_2 + 200));
  }
  return;
}



void Unwind_18018e900(undefined8 param_1,longlong param_2)

{
  FUN_1801dafa0(*(undefined8 *)(param_2 + 200));
  return;
}



void Unwind_18018e950(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x60);
  return;
}



void FUN_18018e9a0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_78 = 0xffffffff00000000;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0x20000100;
  local_64 = 0;
  local_62 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_18018f1e0(&local_78,&local_38,param_1);
  lVar1 = *param_1;
  *param_1 = local_38;
  param_1[1] = param_1[1] + (lVar1 - local_38);
  FUN_18018eb10(&local_78,&local_30,param_3,param_2);
  *param_2 = local_30;
  if (local_60 != 0) {
    uVar2 = local_50 - local_60;
    lVar1 = local_60;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(local_60 + -8);
      if (0x1f < (local_60 - lVar1) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
  }
  return;
}



void Unwind_18018eae0(undefined8 param_1,longlong param_2)

{
  FUN_18018eed0(param_2 + 0x30);
  return;
}



undefined8 FUN_18018eb10(undefined8 param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_4c;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_8c = 3;
  local_7c = 0x23ab1;
  local_90 = 2;
  local_80 = 0x166db;
  local_78 = 86400000;
  local_88 = 0x20;
  uVar4 = *param_3;
  if (uVar4 >> 0x20 == 0) {
    iVar6 = (int)((uVar4 & 0xffffffff) / 86400000);
  }
  else {
    iVar6 = (int)((longlong)uVar4 / 86400000);
  }
  iVar6 = iVar6 - (uint)((longlong)iVar6 * 86400000 - uVar4 != 0 && (longlong)uVar4 <= (longlong)iVar6 * 86400000);
  uVar5 = (iVar6 + 0xafa6c) * 4;
  uVar1 = uVar5 - 0x23aad;
  if (-0xafa6d < iVar6) {
    uVar1 = uVar5 | 3;
  }
  iVar8 = (iVar6 + 0xafa6c) - (((int)uVar1 / 0x23ab1) * 0x23ab1 >> 2);
  uVar9 = iVar8 * 0x166db + 0x166dbU >> 0x19;
  iVar8 = iVar8 - (uVar9 * 0x5b5 >> 2);
  uVar5 = iVar8 * 0x217 + 0x14d;
  uVar10 = uVar5 >> 0xe;
  iVar2 = -9;
  if (uVar5 < 0x28000) {
    iVar2 = 3;
  }
  uVar5 = iVar2 + uVar10;
  local_4c = (((int)uVar1 / 0x23ab1) * 100 + uVar9 + (uint)(uVar5 < 3) & 0xffff) +
             (uVar5 * 0x10000 & 0xff0000) + (iVar8 - (uVar10 * 0x3d3 + 0x13 >> 5)) * 0x1000000 + 0x1000000;
  uVar4 = (longlong)iVar6 * -86400000 + uVar4;
  uVar7 = -uVar4;
  if ((longlong)uVar7 < 0) {
    uVar7 = uVar4;
  }
  uVar4 = uVar7;
  if (uVar7 >> 0x20 == 0) {
    uVar4 = uVar7 & 0xffffffff;
  }
  iVar6 = (int)(uVar4 / 3600000);
  uVar7 = (longlong)iVar6 * -3600000 + uVar7;
  if (uVar7 >> 0x20 == 0) {
    iVar2 = (int)((uVar7 & 0xffffffff) / 60000);
  }
  else {
    iVar2 = (int)((longlong)uVar7 / 60000);
  }
  uVar7 = (longlong)iVar2 * -60000 + uVar7;
  if (uVar7 >> 0x20 == 0) {
    uVar3 = (undefined4)((uVar7 & 0xffffffff) / 1000);
  }
  else {
    uVar3 = (undefined4)((longlong)uVar7 / 1000);
  }
  FUN_1801a8990(&local_70,&local_4c);
  local_98 = &local_70;
  local_70 = uVar3;
  local_6c = iVar2;
  local_68 = iVar6;
  FUN_180196af0(param_1,param_2,param_4,param_3);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_b8)) {
  }
  return param_2;
}



void FUN_18018eed0(longlong param_1)

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
  ulonglong local_68;
  longlong local_60;

  local_98 = 0x52be4b774d5c5296;
  local_a0 = 0x6532f91ab6250f12;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ 0xaf91c8435cf0fc;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0xaf91c8435cf0fc;
          local_98 = uVar2;
          if (0x20fd1a7a28100566 < (longlong)uVar1) break;
          if (uVar1 == 0x22e38cdd6d1d597) {
            local_88 = local_68 + 0x27;
            local_98 = 0xa4c7a2aab7d0f0de;
            local_a0 = 0xabe3de23f49cb2bb;
            local_80 = local_60;
          }
          else if (uVar1 == 0xf247c89434c4265) {
            thunk_FUN_1801f42e0(local_80,local_88);
            *local_78 = 0;
            local_78[1] = 0;
            local_78[2] = 0;
            local_98 = 0x7bcf001b93c02dff;
            local_a0 = 0xb2e75b08f40a4a60;
          }
          else if (uVar1 == 0xc9285b1367ca679f) {
            return;
          }
        }
        if ((longlong)uVar1 < 0x378cb26dfb795d84) break;
        if (uVar1 == 0x61f5aa6f427281d4) {
          local_60 = *(longlong *)(local_90 + -8);
          local_98 = 0x9823279689525703;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_98 = 0xb0b6b0722e8822e9;
          }
          local_a0 = 0xb29888bff859f77e;
        }
        else if (uVar1 == 0x378cb26dfb795d84) {
          local_78 = (undefined8 *)(param_1 + 0x18);
          local_90 = *(longlong *)(param_1 + 0x18);
          local_98 = 0x54d7255779169541;
          if (local_90 == 0) {
            local_98 = 0xbd02643e36ccf7b9;
          }
          local_a0 = 0x742a3f2d51069026;
        }
      }
      if (uVar1 != 0x20fd1a7a28100567) break;
      local_70 = local_90;
      local_88 = *(longlong *)(param_1 + 0x28) - local_90;
      local_98 = 0x32d3544ac610d67e;
      if (0xfff < local_88) {
        local_98 = 0x5c0282acc72e15cf;
      }
      local_a0 = 0x3df728c3855c941b;
      local_80 = local_90;
      local_68 = local_88;
    }
  } while (uVar1 != 0x2abbaf29710ba07d);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_18018f1e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  byte local_a1;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  char *local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_d8;
  local_98 = 0xe8644db2d389e24a;
  local_a0 = 0x679fc0f09d2b0438;
  local_90 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                lVar2 = local_60;
                plVar1 = local_70;
                uVar4 = local_98 ^ 0x51b5dc12adcb293d;
                uVar3 = local_98 ^ local_a0;
                local_a0 = local_a0 ^ 0x51b5dc12adcb293d;
                local_98 = uVar4;
                if ((longlong)uVar3 < -0x504e4f288e2d515) break;
                if ((longlong)uVar3 < 0x4ae5d125ca19bd6a) {
                  if ((longlong)uVar3 < 0x264a0125bd95fe48) {
                    if ((longlong)uVar3 < 0xd82d1981d69d0e9) {
                      if (uVar3 == 0xfafb1b0d771d2aeb) {
                        local_98 = 0x83e9b5d87dab5b02;
                        if (local_a1 == 0) {
                          local_98 = 0xd4405c1249b2ce80;
                        }
                        local_a0 = 0x65300eb384e2b87d;
                      }
                      else if (uVar3 == 0x5fc2abade9db6d9) {
                        local_98 = 0xae86feec659e25d3;
                        if ((char)local_a1 < 'H') {
                          local_98 = 0xe7f7562a7ecdb72;
                        }
                        local_a0 = 0x5d86e5ef3249cc6;
                      }
                      else if (uVar3 == 0xba71b3c54c847b4) {
                        local_98 = 0x4595b5d3a93565b9;
                        if (local_a1 == 0x41) {
                          local_98 = 0x6d1076b3a15aa471;
                        }
                        local_a0 = 0xdc6024126c0ad28c;
                      }
                    }
                    else if (uVar3 == 0xd82d1981d69d0e9) {
                      local_98 = 0x346b4da463d4deb;
                      if (local_a1 == 0x6d) {
                        local_98 = 0x54ef5d107224d869;
                      }
                      local_a0 = 0xe59f0fb1bf74ae94;
                    }
                    else if (uVar3 == 0x11c53fd154d69545) {
                      local_98 = 0x3fe13432f6b4cf45;
                      if (local_a1 == 0x4d) {
                        local_98 = 0x1764f752fedb0e8d;
                      }
                      local_a0 = 0xa614a5f3338b7870;
                    }
                    else if (uVar3 == 0x22372da81ef766e9) {
                      local_98 = 0xdf065176e608d27a;
                      if ((char)local_a1 < 'F') {
                        local_98 = 0x2c296685276a9100;
                      }
                      local_a0 = 0x8dc5027445a7c945;
                    }
                  }
                  else if ((longlong)uVar3 < 0x39b2ab741e03eed1) {
                    if ((longlong)uVar3 < 0x2b23562bd83b3446) {
                      if (uVar3 == 0x264a0125bd95fe48) {
                        local_98 = 0x7049542146ddc431;
                        if (local_a1 == 0x72) {
                          local_98 = 0x58cc97414eb205f9;
                        }
                        local_a0 = 0xe9bcc5e083e27304;
                      }
                      else if (uVar3 == 0x29dd7b88bf25162f) {
                        local_98 = 0xe110389593fd55;
                        if ((char)local_a1 < 'M') {
                          local_98 = 0x98c886b40ba54fed;
                        }
                        local_a0 = 0x9d34ac0ed538f934;
                      }
                    }
                    else if (uVar3 == 0x3214180fd5971055) {
                      local_98 = 0xade769ce54011555;
                      if ((char)local_a1 < 'x') {
                        local_98 = 0xfb4e25ea63653377;
                      }
                      local_a0 = 0xf6ccf4727e0ce39e;
                    }
                    else if (uVar3 == 0x2b23562bd83b3446) {
                      *local_78 = local_88;
                      if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_d8)) {
                      }
                      return;
                    }
                  }
                  else if (uVar3 == 0x39b2ab741e03eed1) {
                    local_98 = 0x9bf161605908f87b;
                    if ((char)local_a1 < 'u') {
                      local_98 = 0x62bdaa35cfad4090;
                    }
                    local_a0 = 0x44f7ab107238bed8;
                  }
                  else if (uVar3 == 0x43f4eb6d558d6565) {
                    local_98 = 0x136da481a4338ec5;
                    if ((char)local_a1 < 'j') {
                      local_98 = 0x8613f8040a250e2;
                    }
                    local_a0 = 0x801f664d49d8b092;
                  }
                  else if (uVar3 == 0x46adfd8c94371222) {
                    local_98 = 0x52d0528b7ab1e37c;
                    if (*local_88 == '}') {
                      local_98 = 0x4e76b6c896c693d6;
                    }
                    local_a0 = 0xab762247a12a093d;
                  }
                }
                else if ((longlong)uVar3 < 0x5b2b9dbc2a0df6cb) {
                  if ((longlong)uVar3 < 0x4fbe3d098effc1a2) {
                    if (uVar3 == 0x4ae5d125ca19bd6a) {
                      local_80 = *(longlong *)(local_90 + 0x18);
                      local_68 = *(longlong *)(local_90 + 0x20);
                      local_98 = 0xc1dbdabcceadbf2f;
                      if (local_80 == local_68) {
                        local_98 = 0x71ba55fcfc5fb8cc;
                      }
                      local_a0 = 0x5a9903d724648c8a;
                    }
                    else if (uVar3 == 0x4c2758f53cc5334c) {
                      local_98 = 0x2c8b21780a47bc4a;
                      if ((local_a1 & 0xfe) == 0x62) {
                        local_98 = 0x7b22c8b23e5e29c8;
                      }
                      local_a0 = 0xca529a13f30e5f35;
                    }
                    else if (uVar3 == 0x4d30d856c4c76abd) {
                      local_98 = 0xa3318a4494a6c781;
                      if ((local_a1 & 0xfe) == 100) {
                        local_98 = 0x62803b64c3d6ade1;
                      }
                      local_a0 = 0xd3f069c50e86db1c;
                    }
                  }
                  else if (uVar3 == 0x4fbe3d098effc1a2) {
                    local_98 = 0x21fd616c8ab18e2f;
                    if (local_a1 == 0x58) {
                      local_98 = 0x978a20c82de4fe7;
                    }
                    local_a0 = 0xb808f0ad4f8e391a;
                  }
                  else if (uVar3 == 0x52c35302a3af1b3f) {
                    local_98 = 0xce69d13acc032dad;
                    if ((char)local_a1 < 'U') {
                      local_98 = 0xe9dc3e20f6a9659b;
                    }
                    local_a0 = 0xba68f829bd66c8ab;
                  }
                  else if (uVar3 == 0x53b4c6094bcfad30) {
                    local_98 = 0x9c99963bc2068f2d;
                    if ((local_a1 & 0xfe) == 0x46) {
                      local_98 = 0xcb307ff1f61f1aaf;
                    }
                    local_a0 = 0x7a402d503b4f6c52;
                  }
                }
                else if ((longlong)uVar3 < 0x740129137165e506) {
                  if (uVar3 == 0x5b2b9dbc2a0df6cb) {
                    local_98 = 0xd114774db8ab59ee;
                    if ((local_a1 & 0xfe) == 0x78) {
                      local_98 = 0x86bd9e878cb2cc6c;
                    }
                    local_a0 = 0x37cdcc2641e2ba91;
                  }
                  else if (uVar3 == 0x70c1e3819a201c9d) {
                    local_98 = 0x79d88d86d2b3c165;
                    local_a0 = 0x7ece57207b6bf17;
                  }
                  else if (uVar3 == 0x70d65e9257972a44) {
                    local_98 = 0x2fa106cdd8e34578;
                    if (local_a1 == 0x59) {
                      local_98 = 0x7808ef07ecfad0fa;
                    }
                    local_a0 = 0xc978bda621aaa607;
                  }
                }
                else if (uVar3 == 0x740129137165e506) {
                  local_98 = 0xda70250711d6bece;
                  if ((char)local_a1 < 'Y') {
                    local_98 = 0x22375251543493dd;
                  }
                  local_a0 = 0xaaa67b954641948a;
                }
                else if (uVar3 == 0x7d4fd67e86d40c39) {
                  local_98 = 0x7726832f205f3f14;
                  if (local_a1 == 0x6a) {
                    local_98 = 0x208f6ae51446aa96;
                  }
                  local_a0 = 0x91ff3844d916dc6b;
                }
                else if (uVar3 == 0x7e3468f4d5057e72) {
                  local_98 = 0x8a8205b1e1dbace8;
                  if ((char)local_a1 < 'a') {
                    local_98 = 0x48b4433e2af57a2c;
                  }
                  local_a0 = 0x616938b695d06c03;
                }
              }
              if (-0x58503d5630dca303 < (longlong)uVar3) break;
              if ((longlong)uVar3 < -0x6699e316f393ef75) {
                if ((longlong)uVar3 < -0x6c8d3d331214c1a9) {
                  if (uVar3 == 0x887e59cd097ae070) {
                    local_98 = 0x84832445e768b9c;
                    if ((char)local_a1 < 'g') {
                      local_98 = 0xeed0d01d6de10b35;
                    }
                    local_a0 = 0xa2f788e851243879;
                  }
                  else if (uVar3 == 0x889129c412750757) {
                    local_98 = 0x2a20953d49e736e7;
                    if ((byte)(local_a1 + 0xab) < 3) {
                      local_98 = 0x7d897cf77dfea365;
                    }
                    local_a0 = 0xccf92e56b0aed598;
                  }
                  else if (uVar3 == 0x8ffb8d424ea2e672) {
                    local_58 = local_90;
                    local_50 = local_70;
                    local_88 = (char *)FUN_1801903e0(*local_70,local_70[1] + *local_70,&local_58);
                    local_98 = 0xbb61843dfa4f6195;
                    if (local_88 == (char *)(*plVar1 + plVar1[1])) {
                      local_98 = 0x18cced3e5994e95c;
                    }
                    local_a0 = 0xfdcc79b16e7873b7;
                  }
                }
                else if (uVar3 == 0x9372c2ccedeb3e57) {
                  local_98 = 0xf1dd7ad954be5112;
                  if ((char)local_a1 < 'm') {
                    local_98 = 0xbe86b4a807fd4d7e;
                  }
                  local_a0 = 0xc3c962d681294147;
                }
                else if (uVar3 == 0x93a506d18aea6f09) {
                  local_98 = 0xe03c711877a36160;
                  if ((byte)(local_a1 + 0xbe) < 3) {
                    local_98 = 0xb79598d243baf4e2;
                  }
                  local_a0 = 0x6e5ca738eea821f;
                }
                else if (uVar3 == 0x9760cc4e31c7e1b5) {
                  local_98 = 0x7ac23d87a631f904;
                  if ((char)local_a1 < 'p') {
                    local_98 = 0x7519a4859601db64;
                  }
                  local_a0 = 0xb81264b31b591429;
                }
              }
              else if ((longlong)uVar3 < -0x5edabdf99fef75e7) {
                if ((longlong)uVar3 < -0x64bd26941536cc5b) {
                  if (uVar3 == 0x99f591c1c53fb735) {
                    local_98 = 0xad244bab7509f354;
                    local_a0 = 0x344257427965e3df;
                  }
                  else if (uVar3 == 0x99661ce90c6c108b) {
                    local_b8 = &DAT_1802a7638;
                    FUN_1801b23c0(&DAT_1802a7628,&DAT_18029c022,0x1c,0xe);
                    FUN_180004aa0(&DAT_1802a7628);
                  }
                }
                else if (uVar3 == 0x9b42d96beac933a5) {
                  local_60 = local_80;
                  local_a1 = *(byte *)(local_80 + 2);
                  local_98 = 0x88d260dc71027690;
                  local_a0 = 0x4e340dc6d1472e7a;
                }
                else if (uVar3 == 0x9dd5bc3640ab0461) {
                  local_98 = 0xc86847020983f5d7;
                  if ((char)local_a1 < 'R') {
                    local_98 = 0x7f95196cb3e7e0bf;
                  }
                  local_a0 = 0x6e5026bde73175fa;
                }
              }
              else if (uVar3 == 0xa125420660108a19) {
                local_98 = 0xc4cb802800d95ca7;
                if ((byte)(local_a1 + 0xae) < 3) {
                  local_98 = 0xec4e434808b69d6f;
                }
                local_a0 = 0x5d3e11e9c5e6eb92;
              }
              else if (uVar3 == 0xa1ec64f162cd5845) {
                local_98 = 0x984df456b0b8c548;
                if ((char)local_a1 < 'B') {
                  local_98 = 0xf113e98a4d4f80aa;
                }
                local_a0 = 0xbe8f2873a52aa41;
              }
              else if (uVar3 == 0xa63861bfeeb2802d) {
                local_98 = 0x362d84379028ce83;
                if ((char)local_a1 < 'X') {
                  local_98 = 0xd8b6fb387ec78538;
                }
                local_a0 = 0x7993b93e1ed70f21;
              }
            }
            if (-0x32f43fc972a730b4 < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x4e8fad5e32af8903) {
              if (uVar3 == 0xa7afc2a9cf235cfe) {
                local_98 = 0x4590f7f098b3d5e0;
                if (local_a1 == 0x77) {
                  local_98 = 0x6d15349090dc1428;
                }
                local_a0 = 0xdc6566315d8c62d5;
              }
              else if (uVar3 == 0xaabfbaac0f52b3e5) {
                local_98 = 0x3b4a65cdc1e8e8e7;
                if ((byte)(local_a1 + 0x99) < 2) {
                  local_98 = 0x6ce38c07f5f17d65;
                }
                local_a0 = 0xdd93dea638a10b98;
              }
              else if (uVar3 == 0xab5e90b296bab915) {
                local_98 = 0xb012dc3ab830abad;
                if ((local_a1 & 0xfe) == 0x48) {
                  local_98 = 0x98971f5ab05f6a65;
                }
                local_a0 = 0x29e74dfb7d0f1c98;
              }
            }
            else if (uVar3 == 0xb17052a1cd5076fd) {
              FUN_180191d60(local_a1,*(undefined1 *)(local_60 + 1));
              local_80 = lVar2 + 3;
              local_98 = 0xfd4845d0e660340f;
              if (local_80 == local_68) {
                local_98 = 0x4d29ca90d49233ec;
              }
              local_a0 = 0x660a9cbb0ca907aa;
            }
            else if (uVar3 == 0xc2d05934bd68ed2d) {
              local_98 = 0x97db50b878f7761c;
              if (local_a1 == 0x70) {
                local_98 = 0xbf5e93d87098b7d4;
              }
              local_a0 = 0xe2ec179bdc8c129;
            }
            else if (uVar3 == 0xc6e66d1aa04558ea) {
              local_98 = 0x18ddbc2a4fc7140b;
              if ((char)local_a1 < 'b') {
                local_98 = 0x791e7aef04bd1787;
              }
              local_a0 = 0x5b2957471a4a716e;
            }
          }
          if ((longlong)uVar3 < -0x1926449406b61c81) break;
          if ((longlong)uVar3 < -0x1414c2f88bf43f15) {
            if (uVar3 == 0xe6d9bb6bf949e37f) {
              local_98 = 0x3521a41b75194177;
              local_a0 = 0x78117c4db1de2bca;
            }
            else if (uVar3 == 0xea8d84ad6d83a082) {
              local_98 = 0xe209ccf84b2f7fbc;
              if (local_a1 == 0x75) {
                local_98 = 0xca8c0f984340be74;
              }
              local_a0 = 0x7bfc5d398e10c889;
            }
          }
          else if (uVar3 == 0xebeb3d07740bc0eb) {
            local_98 = 0x829de38990119bf1;
            if ((char)local_a1 < 'r') {
              local_98 = 0x2c4f84b3bfd59495;
            }
            local_a0 = 0xbb2f48fd8e127520;
          }
          else if (uVar3 == 0xf9a670ccdb9bea41) {
            local_b8 = &DAT_1802a74a0;
            FUN_1801b23c0(&DAT_1802a7480,&DAT_18029b24b,0x18,0x1e);
            FUN_180004aa0(&DAT_1802a7480);
          }
        }
        if ((longlong)uVar3 < -0x20f9358fd4cfb95d) break;
        if (uVar3 == 0xdf06ca702b3046a3) {
          local_98 = 0x18f993f32fc611a2;
          if ((char)local_a1 < 'w') {
            local_98 = 0x55dbd5f78d66edde;
          }
          local_a0 = 0xbf56515ae0e54d5c;
        }
        else if (uVar3 == 0xe500948f37ec9aeb) {
          local_98 = 0x5f36e27cc4dfb3ad;
          if (*(int *)(local_90 + 4) == -1) {
            local_98 = 0xdb476aaa4570a81d;
          }
          local_a0 = 0x91a2bb8f8f691577;
        }
      }
      if (uVar3 != 0xcd0bc0368d58cf4d) break;
      local_98 = 0xe6e08baa4de41495;
      if (local_a1 == 0x61) {
        local_98 = 0xce6548ca458bd55d;
      }
      local_a0 = 0x7f151a6b88dba3a0;
    }
  } while (uVar3 != 0xce9459f34bb6a6da);
  local_b8 = &DAT_1802a7624;
  FUN_1801b23c0(&DAT_1802a75c8,&DAT_18029bf98,0x13,0x5a);
  FUN_180004aa0(&DAT_1802a75c8);
}


