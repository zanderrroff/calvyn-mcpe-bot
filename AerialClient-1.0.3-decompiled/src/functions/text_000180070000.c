#include "../include/aerialclient_types.h"


longlong FUN_1800717d0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_162;
  char local_161;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 *local_130;
  byte local_128;
  undefined8 *local_120;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  undefined4 *local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  undefined8 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 *local_60;

  local_158 = 0x4d9eba0defbab5f3;
  local_160 = 0x3a22d77b3693b302;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar10 = local_158 ^ 0x9b6cef5348b90691;
            uVar8 = local_158 ^ local_160;
            local_160 = local_160 ^ 0x9b6cef5348b90691;
            local_158 = uVar10;
            if (0x2c9a966b73378a0f < (longlong)uVar8) break;
            if ((longlong)uVar8 < -0x434a619672d0c79f) {
              if ((longlong)uVar8 < -0x476ea95c0e8f67b3) {
                if (uVar8 == 0x88266df0ecf5a61a) {
                  local_158 = 0x596b94110ffcd7f8;
                  if (local_148 < 0x80) {
                    local_158 = 0xb139684ed8a12138;
                  }
                  local_160 = 0x9a83eed29d1b975;
                }
                else if (uVar8 == 0xa0d681277ae4cbaf) {
                  local_78 = 0;
                  FUN_180072130(param_1,local_130,local_a0,local_148);
                  FUN_1800728a0(&local_80);
                  return local_100;
                }
              }
              else if (uVar8 == 0xb89156a3f170984d) {
                local_120 = (undefined8 *)FUN_1801d61c8(local_e8);
                local_158 = 0xaf8fbc9c1f389a8d;
                local_160 = 0xaf025130995125a3;
              }
              else if (uVar8 == 0xba7497188eabff2d) {
                local_158 = 0x34dcee81336ac51d;
                if (local_161 == '\0') {
                  local_158 = 0xa4f3e683cd72776c;
                }
                local_160 = 0x184678ea405d4f0d;
                local_d0 = local_90;
                local_c8 = local_f0;
                local_c0 = local_130;
              }
            }
            else if ((longlong)uVar8 < 0x8dedac8669bf2e) {
              if (uVar8 == 0xbcb59e698d2f3861) {
                local_c0[2] = 0;
                local_c0[3] = 0;
                *local_c0 = 0;
                local_c0[1] = 0;
                uVar3 = local_c8[1];
                uVar4 = local_c8[2];
                uVar5 = local_c8[3];
                uVar6 = *(undefined8 *)(local_c8 + 4);
                uVar7 = *(undefined8 *)(local_c8 + 6);
                *(undefined4 *)local_c0 = *local_c8;
                *(undefined4 *)((longlong)local_c0 + 4) = uVar3;
                *(undefined4 *)(local_c0 + 1) = uVar4;
                *(undefined4 *)((longlong)local_c0 + 0xc) = uVar5;
                local_c0[2] = uVar6;
                local_c0[3] = uVar7;
                *(ulonglong *)(local_c8 + 4) = local_150;
                *(undefined8 *)(local_c8 + 6) = local_138;
                *(undefined1 *)local_c8 = local_162;
                local_c8 = local_c8 + 8;
                local_158 = 0x127e42d975463a49;
                if (local_c8 != param_2) {
                  local_158 = 0x7412903f214b9631;
                }
                local_c0 = local_c0 + 4;
                local_160 = 0xc8a70e56ac64ae50;
              }
              else if (uVar8 == 0xdad94c8fd9229419) {
                local_d0 = (undefined4 *)*local_108;
                local_158 = 0xdf963baddf210245;
                local_160 = 0xf30cadc6ac168855;
              }
            }
            else if (uVar8 == 0x8dedac8669bf2e) {
              local_130 = local_120;
              local_100 = (longlong)local_120 + local_a8;
              local_98 = (undefined8 *)((longlong)local_120 + local_a8 + 0x20);
              local_70 = local_148;
              local_f8 = &local_68;
              puVar2 = (undefined8 *)((longlong)local_120 + local_a8 + 0x10);
              *puVar2 = 0;
              puVar2[1] = 0;
              *(undefined8 *)((longlong)local_120 + local_a8) = 0;
              ((undefined8 *)((longlong)local_120 + local_a8))[1] = 0;
              uVar3 = param_3[1];
              uVar4 = param_3[2];
              uVar5 = param_3[3];
              uVar6 = *(undefined8 *)(param_3 + 4);
              uVar7 = *(undefined8 *)(param_3 + 6);
              puVar1 = (undefined4 *)((longlong)local_120 + local_a8);
              *puVar1 = *param_3;
              puVar1[1] = uVar3;
              puVar1[2] = uVar4;
              puVar1[3] = uVar5;
              puVar2 = (undefined8 *)((longlong)local_120 + local_a8 + 0x10);
              *puVar2 = uVar6;
              puVar2[1] = uVar7;
              *(ulonglong *)(param_3 + 4) = local_150;
              *(undefined8 *)(param_3 + 6) = local_138;
              *(undefined1 *)param_3 = local_162;
              local_90 = (undefined4 *)*local_108;
              local_f0 = (undefined4 *)*param_1;
              local_161 = local_f0 == param_2;
              local_158 = 0x254d020582516ffd;
              if (param_2 != local_90) {
                local_158 = 0xf4efe319c5687db3;
              }
              local_160 = 0x4e9b74014bc3829e;
              local_80 = param_1;
              local_60 = local_98;
              local_68 = local_100;
            }
            else if (uVar8 == 0x16288dbb54eac4e8) {
              local_d8[2] = 0;
              local_d8[3] = 0;
              *local_d8 = 0;
              local_d8[1] = 0;
              uVar3 = local_e0[1];
              uVar4 = local_e0[2];
              uVar5 = local_e0[3];
              uVar6 = *(undefined8 *)(local_e0 + 4);
              uVar7 = *(undefined8 *)(local_e0 + 6);
              *(undefined4 *)local_d8 = *local_e0;
              *(undefined4 *)((longlong)local_d8 + 4) = uVar3;
              *(undefined4 *)(local_d8 + 1) = uVar4;
              *(undefined4 *)((longlong)local_d8 + 0xc) = uVar5;
              local_d8[2] = uVar6;
              local_d8[3] = uVar7;
              *(ulonglong *)(local_e0 + 4) = local_150;
              *(undefined8 *)(local_e0 + 6) = local_138;
              *(undefined1 *)local_e0 = local_162;
              local_e0 = local_e0 + 8;
              local_158 = 0xd407a322903b66a1;
              if (local_e0 != local_88) {
                local_158 = 0x62f9afbebe3569e6;
              }
              local_d8 = local_d8 + 4;
              local_160 = 0x74d12205eadfad0e;
            }
          }
          if ((longlong)uVar8 < 0x5b3a9bab826db1ec) break;
          if ((longlong)uVar8 < 0x7472e7a94a6398d1) {
            if (uVar8 == 0x5b3a9bab826db1ec) {
              local_b0[2] = 0;
              local_b0[3] = 0;
              *local_b0 = 0;
              local_b0[1] = 0;
              uVar3 = local_b8[1];
              uVar4 = local_b8[2];
              uVar5 = local_b8[3];
              uVar6 = *(undefined8 *)(local_b8 + 4);
              uVar7 = *(undefined8 *)(local_b8 + 6);
              *(undefined4 *)local_b0 = *local_b8;
              *(undefined4 *)((longlong)local_b0 + 4) = uVar3;
              *(undefined4 *)(local_b0 + 1) = uVar4;
              *(undefined4 *)((longlong)local_b0 + 0xc) = uVar5;
              local_b0[2] = uVar6;
              local_b0[3] = uVar7;
              *(ulonglong *)(local_b8 + 4) = local_150;
              *(undefined8 *)(local_b8 + 6) = local_138;
              *(undefined1 *)local_b8 = local_162;
              local_b8 = local_b8 + 8;
              local_158 = 0xcbe2c22602223789;
              if (local_b8 != param_2) {
                local_158 = 0x300ed8aafaab4dca;
              }
              local_b0 = local_b0 + 4;
              local_160 = 0x6b34430178c6fc26;
            }
            else if (uVar8 == 0x6bd67604c992ed63) {
              local_158 = 0xa199c5cbbf8e61cc;
              if (local_161 == '\0') {
                local_158 = 0x5a75df4747071b8f;
              }
              local_160 = 0x14f44ecc56aaa63;
              local_b8 = local_f0;
              local_b0 = local_130;
            }
            else if (uVar8 == 0x612eef903b1a6fb8) goto LAB_1800720cb;
          }
          else if (uVar8 == 0x7472e7a94a6398d1) {
            local_e8 = local_148 << (local_128 & 0x3f);
            local_158 = 0x84b969a685a200ea;
            if (local_148 != local_150) {
              local_158 = 0xc12e9faef3e19de;
            }
            local_160 = 0x8434840a03cbbfc4;
            local_120 = (undefined8 *)0x0;
          }
          else if (uVar8 == 0x77bc6d76d92906f1) {
            local_138 = 0xf;
            local_110 = 0x27;
            local_150 = 0;
            local_140 = 0x7ffffffffffffff;
            local_162 = 0;
            local_128 = 5;
            local_108 = param_1 + 1;
            lVar9 = *param_1;
            local_a8 = (longlong)param_2 - lVar9;
            local_a0 = (param_1[1] - lVar9 >> 5) + 1;
            uVar8 = param_1[2] - lVar9 >> 5;
            local_148 = (uVar8 >> 1) + uVar8;
            if (local_148 <= local_a0) {
              local_148 = local_a0;
            }
            if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
              local_148 = 0x7ffffffffffffff;
            }
            local_158 = 0x596fdcc83104e576;
            if (local_148 < 0x800000000000000) {
              local_158 = 0x60bb2f90f7af0b0b;
            }
            local_160 = 0x14c9c839bdcc93da;
          }
        }
        if (0x4da614f18cc876ab < (longlong)uVar8) break;
        if (uVar8 == 0x2c9a966b73378a10) {
          local_88 = local_d0;
          *local_f8 = (longlong)local_130;
          local_158 = 0x8e0df5f062fe9e9a;
          if (param_2 != local_d0) {
            local_158 = 0x38f3f96c4cf091dd;
          }
          local_160 = 0x2edb74d7181a5535;
          local_d8 = local_98;
          local_e0 = param_2;
        }
        else if (uVar8 == 0x395256e6315bbad0) {
          lVar9 = FUN_1801d61c8(local_e8 + local_110);
          local_120 = (undefined8 *)(local_110 + lVar9 & 0xffffffffffffffe0);
          local_120[-1] = lVar9;
          local_158 = 0xb15f347e38624b67;
          local_160 = 0xb1d2d9d2be0bf449;
        }
      }
      if (uVar8 != 0x50c3aafc262d6e8d) break;
      local_158 = 0x40925a35c5e4fea2;
      if (local_148 != local_140) {
        local_158 = 0x18eee343cfa52bca;
      }
      local_160 = 0x21bcb5a5fefe911a;
    }
  } while (uVar8 != 0x4da614f18cc876ac);
LAB_1800720cb:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_180072130(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_130;
  ulonglong local_128;
  uint local_11c;
  uintptr_t local_118;
  longlong *local_110;
  ulonglong local_108;
  longlong local_100;
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong *local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;

  local_128 = 0xcd3e8e5317579ac7;
  local_130 = 0xa5f512c993505783;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_128 ^ 0x5c1c7a1fa6d6f1ce;
            uVar1 = local_128 ^ local_130;
            local_130 = local_130 ^ 0x5c1c7a1fa6d6f1ce;
            local_128 = uVar2;
            if ((longlong)uVar1 < -0xe0cb3bf42255fa7) break;
            if ((longlong)uVar1 < 0xacb680309649fb3) {
              if (uVar1 == 0xf1f34c40bddaa059) {
                local_68 = *(longlong *)(local_70 + -8);
                local_128 = 0x9e4e5d4b801b6eb3;
                if (local_f8 <= (undefined1 *)((local_70 + local_100) - local_68)) {
                  local_128 = 0x8614d84e747598e2;
                }
                local_130 = 0x992b405f78b32d7;
              }
              else if (uVar1 == 0xfcce154a14391d46) {
                local_80 = (longlong *)local_48[-1];
                local_128 = 0x911fc1c8d2607323;
                if (local_f8 <= (undefined1 *)((longlong)local_58 + (local_100 - (longlong)local_80))) {
                  local_128 = 0x160b11e77527953f;
                }
                local_130 = 0x9bfe6e8075db98c1;
              }
              else if (uVar1 == 0x5aadf6f576b6494) {
                local_78 = (longlong *)*local_e8;
                local_d0 = local_88;
                local_128 = 0x83fc4cd53ff7cd0;
                if (local_88 != local_78) {
                  local_128 = 0x4359788b6e98e701;
                }
                local_130 = 0xc14cb81052a4f03a;
                local_c8 = local_d0;
              }
            }
            else if ((longlong)uVar1 < 0x639f983bce58477f) {
              if (uVar1 == 0xacb680309649fb3) {
                local_b8 = *local_110;
                local_c0 = local_d8 + 1;
                local_128 = 0x8dcace0a8bc2b359;
                if (local_c0 <= local_108) {
                  local_128 = 0x1fa61a71f840547f;
                }
                local_130 = 0x7c39824a36181300;
                local_70 = local_b8;
              }
              else if (uVar1 == 0xae1af48a7bbebe2) {
                local_b0 = local_50 + 0x27;
                local_a8 = local_80;
                local_128 = 0xd8c58b8b5034c49d;
                local_130 = 0x1a745a1267d6c7d7;
              }
            }
            else if (uVar1 == 0x639f983bce58477f) {
              thunk_FUN_1801f42e0(local_b8,local_c0);
              local_128 = 0x76b0aeafc9d42e16;
              local_130 = 0x9e9c1a3682f7bd09;
            }
            else if (uVar1 == 0x68cb9c9a8407cd44) {
              local_f0 = 0xf;
              local_f8 = (undefined1 *)0x20;
              local_118 = 0;
              local_100 = -8;
              local_108 = 0xfff;
              local_11c = 0;
              local_e8 = param_1 + 1;
              local_e0 = param_1 + 2;
              local_88 = (longlong *)*param_1;
              local_128 = 0x54a4cb93c6f83199;
              if (local_88 != (longlong *)0x0) {
                local_128 = 0xfeea153a4f06c310;
              }
              local_130 = 0xfb40ca55186da784;
            }
          }
          if ((longlong)uVar1 < -0x3d4e2e66c81dfcb6) break;
          if (uVar1 == 0xc2b1d19937e2034a) {
            thunk_FUN_1801f42e0(local_a8,local_b0);
            local_128 = 0xf372f1c2423827d9;
            local_130 = 0x5c96f0049cadb1c4;
          }
          else if (uVar1 == 0xc9737cdd015b8cea) {
            local_58 = local_c8;
            local_b0 = *local_e0 - (longlong)local_c8;
            local_128 = 0x96e494c4993f00e9;
            if (local_b0 <= local_108) {
              local_128 = 0xa89b5017bae41ee5;
            }
            local_130 = 0x6a2a818e8d061daf;
            local_a8 = local_c8;
            local_50 = local_b0;
            local_48 = local_58;
          }
          else if (uVar1 == 0xe82cb4994b23931f) {
            local_110[2] = local_118;
            *local_60 = local_f0;
            *(undefined1 *)local_110 = 0;
            local_d0 = local_110 + 4;
            local_128 = 0x971f61e696a50da0;
            if (local_d0 != local_78) {
              local_128 = 0xa1a9afdefc0be15a;
            }
            local_130 = 0x23bc6f45c037f661;
          }
        }
        if ((longlong)uVar1 < -0x682316b1886fa39c) break;
        if (uVar1 == 0x97dce94e77905c64) {
          local_c0 = local_d8 + 0x28;
          local_128 = 0x4382aea42b7d93c6;
          local_130 = 0x201d369fe525d4b9;
          local_b8 = local_68;
        }
        else if (uVar1 == 0xb4a30ea35692fbc1) {
          local_c8 = (longlong *)*param_1;
          local_128 = 0x2bab0125de63345c;
          local_130 = 0xe2d87df8df38b8b6;
        }
        else if (uVar1 == 0xafe401c6de95961d) {
          *param_1 = param_2;
          *local_e8 = param_3 * 0x20 + param_2;
          *local_e0 = param_4 * 0x20 + param_2;
          return;
        }
      }
      if (uVar1 != 0x8215c09b3c3c173b) break;
      local_110 = local_d0;
      local_60 = (ulonglong *)(local_d0 + 3);
      local_d8 = local_d0[3];
      local_128 = 0xafca195b8931f168;
      if (local_d8 <= local_f0) {
        local_128 = 0x4d2dc5c1cb76fdc4;
      }
      local_130 = 0xa501715880556edb;
    }
  } while ((uVar1 != 0x8df57f6700fc0dfe) && (uVar1 != 0x8f866c4b83feaa35));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_11c,local_118);
}



void FUN_1800728a0(longlong param_1)

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
  longlong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;

  local_100 = 0x3d1cf04b00c0c621;
  local_108 = 0x2bbfbb32c92f2db1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_100 ^ 0x4692d88ebd88e9d7;
            uVar1 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x4692d88ebd88e9d7;
            local_100 = uVar2;
            if (0x16a34b79c9efeb8f < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x4c32d47f41abc780) {
              if ((longlong)uVar1 < -0x5870d85cc370fb91) {
                if (uVar1 == 0x80fc9b5016fd70b8) {
                  local_50 = *(longlong **)(param_1 + 0x20);
                  local_a0 = *(longlong **)(param_1 + 0x18);
                  local_100 = 0x9404bc7b69566525;
                  if (local_a0 != local_50) {
                    local_100 = 0x14387b0291c42321;
                  }
                  local_108 = 0x27c997fbd7025da5;
                  local_a8 = local_80;
                }
                else if (uVar1 == 0xa5d103b99d1f4af4) {
                  local_b0 = *local_e8;
                  local_b8 = local_c0 + 1;
                  local_100 = 0x23004f17f80cd44;
                  if (local_b8 <= local_e0) {
                    local_100 = 0xcce338d096a0e8d7;
                  }
                  local_108 = 0xafac61af124d7407;
                  local_70 = local_b0;
                }
              }
              else if (uVar1 == 0xa78f27a33c8f046f) {
                local_a8 = *local_88;
                local_100 = 0x61ad7d48244dcf68;
                local_108 = 0xd26056c89a19f7e8;
              }
              else if (uVar1 == 0xad9c655e6dcdb943) {
                local_58 = *(longlong *)(local_70 + -8);
                local_100 = 0x734f62c0c0ae9149;
                if (local_d0 <= (ulonglong)((local_70 + local_d8) - local_58)) {
                  local_100 = 0x61efe6ffc264e2ac;
                }
                local_108 = 0x58560198da451850;
              }
            }
            else if ((longlong)uVar1 < -0x23c48f9a05a7d957) {
              if (uVar1 == 0xb3cd2b80be543880) {
                local_90 = local_a8;
                local_98 = *(longlong *)(param_1 + 0x10) << 5;
                local_100 = 0x19a6def549a14ca0;
                if (local_98 <= local_e0) {
                  local_100 = 0x9653884f64caa018;
                }
                local_108 = 0x4a68f82a9e9286b1;
                local_68 = local_98;
                local_48 = local_90;
              }
              else if (uVar1 == 0xc4aee410bd1e008c) goto LAB_180072f8b;
            }
            else if (uVar1 == 0xdc3b7065fa5826a9) {
              thunk_FUN_1801f42e0(local_90,local_98);
              local_100 = 0x7f5fd4774a1b08c;
              local_108 = 0x1ad418512838634e;
            }
            else if (uVar1 == 0x8b890fadd3a8123) {
              local_e8[2] = local_f0;
              *local_60 = local_c8;
              *(undefined1 *)local_e8 = 0;
              local_a0 = local_e8 + 4;
              local_100 = 0x3f92417dffd5b93a;
              if (local_a0 != local_50) {
                local_100 = 0xabec8a27859cc3d1;
              }
              local_108 = 0x981d66dec35abd55;
            }
          }
          if (0x39b9e7671821fafb < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x2b1963581aeb8919) {
            if (uVar1 == 0x16a34b79c9efeb90) {
              local_c8 = 0xf;
              local_d0 = 0x20;
              local_f0 = 0;
              local_d8 = -8;
              local_e0 = 0xfff;
              local_f4 = 0;
              local_88 = (longlong *)(param_1 + 8);
              local_80 = *(longlong *)(param_1 + 8);
              local_100 = 0x3842977b463d13da;
              if (local_80 != 0) {
                local_100 = 0xa59fe93d0c59b0a0;
              }
              local_108 = 0x2563726d1aa4c018;
            }
            else if (uVar1 == 0x1d21e5165c99d3c2) {
              return;
            }
          }
          else if (uVar1 == 0x2b1963581aeb8919) {
            local_b8 = local_c0 + 0x28;
            local_100 = 0xef909274ddd78da8;
            local_108 = 0x8cdfcb0b593a1178;
            local_b0 = local_58;
          }
          else if (uVar1 == 0x33f1ecf946c67e84) {
            local_e8 = local_a0;
            local_60 = (ulonglong *)(local_a0 + 3);
            local_c0 = local_a0[3];
            local_100 = 0xf84d85848bfaa7e;
            if (local_c0 <= local_c8) {
              local_100 = 0xa2ed4b1b089a61a9;
            }
            local_108 = 0xaa55dbe1d5a0e08a;
          }
        }
        if ((longlong)uVar1 < 0x53ce26dfd733ca11) break;
        if (uVar1 == 0x53ce26dfd733ca11) {
          local_78 = *(longlong *)(local_48 + -8);
          local_100 = 0x52f5506e50c44fc7;
          if (local_d0 <= (ulonglong)((local_48 + local_d8) - local_78)) {
            local_100 = 0xdfcc6452036f7bc3;
          }
          local_108 = 0x1b628042be717b4f;
        }
        else if (uVar1 == 0x634f597f84ed9cd0) {
          thunk_FUN_1801f42e0(local_b0,local_b8);
          local_100 = 0x8c6c1b750c897c99;
          local_108 = 0x84d48b8fd1b3fdba;
        }
      }
      if (uVar1 != 0x4997d02ceeb53488) break;
      local_98 = local_68 + 0x27;
      local_100 = 0xdcab5721e4880e9;
      local_108 = 0xd1f1c517e410a640;
      local_90 = local_78;
    }
  } while (uVar1 != 0x39b9e7671821fafc);
LAB_180072f8b:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_f0);
}



undefined8 * FUN_180072fc0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  uVar2 = param_3[1];
  if (uVar2 == 0) {
    return param_1;
  }
  if (0x7fffffff < uVar2) {
    uVar2 = FUN_180067b60(0x16);
LAB_18007317c:
    FUN_180068290(uVar2 & 0xffffffff);
  }
  uVar6 = 0;
  uVar1 = FUN_1801d9178(param_2,*param_3,uVar2,0,0);
  uVar2 = uVar1 >> 0x20;
  if (uVar2 != 0) goto LAB_18007317c;
  uVar5 = (ulonglong)(int)uVar1;
  uVar2 = param_1[2];
  uVar3 = uVar5 - uVar2;
  puVar4 = param_1;
  if (uVar5 < uVar2 || uVar3 == 0) {
    param_1[2] = uVar5;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
  }
  else {
    if (param_1[3] - uVar2 < uVar3) {
      FUN_1800682e0(param_1,uVar3,uVar3,uVar3,uVar6 & 0xffffff00);
      goto LAB_180073124;
    }
    param_1[2] = uVar5;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_180207610(uVar2 + (longlong)puVar4,0);
  }
  *(undefined1 *)((longlong)puVar4 + uVar5) = 0;
LAB_180073124:
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  uVar2 = FUN_1801d9178(param_2,*param_3,*(undefined4 *)(param_3 + 1),puVar4,(int)uVar1);
  if (uVar2 >> 0x20 == 0) {
    return param_1;
  }
  FUN_180068290(uVar2 >> 0x20);
}



void Unwind_180073190(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_1800731c0(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  undefined1 local_110 [136];
  undefined4 local_88 [2];
  undefined **local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  size_t local_68;
  ulonglong local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_38 = 0xf;
  local_50 = 0;
  local_48 = 1;
  local_40 = 0x28;
  local_80 = &PTR_vftable_18020e790;
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_88[0] = param_2;
  sVar1 = strlen(param_1);
  if (local_50 <= (longlong)sVar1) {
    if (sVar1 < 0x10) {
      ppppuVar4 = &local_78;
      uVar5 = local_38;
    }
    else {
      uVar2 = local_38 | sVar1;
      uVar5 = 0x16;
      if (0x16 < uVar2) {
        uVar5 = uVar2;
      }
      if (uVar2 < 0xfff) {
        ppppuVar4 = (undefined8 ****)FUN_1801d61c8(local_48 + uVar5);
        local_78 = ppppuVar4;
      }
      else {
        pppuVar3 = (undefined8 ***)FUN_1801d61c8(local_40 + uVar5);
        ppppuVar4 = (undefined8 ****)((longlong)pppuVar3 + 0x27U & 0xffffffffffffffe0);
        ppppuVar4[-1] = pppuVar3;
        local_78 = ppppuVar4;
      }
    }
    local_68 = sVar1;
    local_60 = uVar5;
    FUN_1802079d0(ppppuVar4,param_1,sVar1);
    *(undefined1 *)((longlong)ppppuVar4 + sVar1) = 0;
    FUN_180073410(local_110,&local_78,local_88);
    FUN_1801dd110(local_110,&DAT_180253588);
  }
  FUN_180002ac0();
}



void Unwind_180073350(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  uVar1 = *(ulonglong *)(param_2 + 0xd8);
  if (*(ulonglong *)(param_2 + 0x100) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0xc0);
    uVar4 = *(longlong *)(param_2 + 0xf0) + uVar1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,*(uintptr_t *)(param_2 + 0xe8));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0xf8);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  return;
}



undefined8 * FUN_180073410(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char *_Str;
  ulonglong uVar7;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_88 = 0xf;
  local_80 = 7;
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  FUN_180066340(local_a8,&local_a8,param_2);
  *param_1 = &PTR_FUN_18020e7b0;
  puVar1 = param_1 + 5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = local_80;
  local_90 = param_1 + 9;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = local_80;
  puVar2 = param_1 + 1;
  _Str = (char *)param_1[1];
  FUN_1800b8f52(&DAT_1802a1f60,&DAT_18027190a,0x1f,0x12,&DAT_1802a1f74);
  if (_Str == (char *)0x0) {
    _Str = &DAT_1802a1f60;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  sVar3 = strlen(_Str);
  if (-1 < (longlong)sVar3) {
    puVar6 = param_1 + 0xd;
    uVar7 = local_88;
    if (0xf < sVar3) {
      uVar4 = local_88 | sVar3;
      uVar7 = 0x16;
      if (0x16 < uVar4) {
        uVar7 = uVar4;
      }
      if (uVar4 < 0xfff) {
        local_78 = puVar1;
        local_70 = puVar2;
        local_68 = param_1;
        puVar6 = (undefined8 *)FUN_1801d61c8(uVar7 + 1);
      }
      else {
        local_78 = puVar1;
        local_70 = puVar2;
        local_68 = param_1;
        lVar5 = FUN_1801d61c8(uVar7 + 0x28);
        puVar6 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        puVar6[-1] = lVar5;
      }
      param_1[0xd] = puVar6;
      param_1 = local_68;
    }
    param_1[0xf] = sVar3;
    param_1[0x10] = uVar7;
    FUN_1802079d0(puVar6,_Str,sVar3);
    *(undefined1 *)((longlong)puVar6 + sVar3) = 0;
    return param_1;
  }
  local_78 = puVar1;
  local_70 = puVar2;
  local_68 = param_1;
  FUN_180002ac0();
}



void Unwind_180073650(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x48));
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x60));
  **(undefined8 **)(param_2 + 0x70) = &std::exception::vftable;
  FUN_1801dd238(*(undefined8 *)(param_2 + 0x68));
  return;
}



void FUN_1800736b0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_158 [40];
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_128 = 0xf94a9b3340e59d5b;
  local_130 = 0x24a0dfff47b99958;
  local_98 = param_2 - param_1;
  local_90 = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            lVar2 = local_a8;
            lVar1 = local_118;
            uVar4 = local_128 ^ 0x6157cceb0a6d1359;
            uVar3 = local_128 ^ local_130;
            local_130 = local_130 ^ 0x6157cceb0a6d1359;
            local_128 = uVar4;
            if (-0x22e45df858d58662 < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x59b8138c45561c41) {
              if (uVar3 == 0x810941c4a658206c) {
                FUN_180073cc0(local_f0,local_e8);
                local_128 = 0x8255113f2239a274;
                local_130 = 0x5f4eb3388513dbeb;
              }
              else if (uVar3 == 0x95f12c60bd335f6d) {
                local_120 = local_b0;
                local_118 = local_b8;
                local_68 = local_c0;
                local_60 = local_c8;
                local_a0 = local_d0;
                local_128 = 0x31b598224404679b;
                if ((longlong)local_c0 < local_100) {
                  local_128 = 0xaaf70af6e9a732be;
                }
                local_130 = 0x193bd11ea3de9398;
              }
            }
            else if (uVar3 == 0xa647ec73baa9e3bf) {
              FUN_1800736b0(local_70,local_118,local_110);
              local_128 = 0x5d7296254026c3f1;
              local_130 = 0x61866debd445f048;
              local_e0 = local_120;
              local_d8 = local_58;
            }
            else if (uVar3 == 0xb12fa324a7feb07c) {
              FUN_180077be0(local_120,local_a8);
              local_a8 = lVar2 + -0x20;
              local_128 = 0xfc58f55a52009067;
              if (0x20 < local_a8 - local_a0) {
                local_128 = 0x906cf47952d45984;
              }
              local_130 = 0x2143575df52ae9f8;
            }
            else if (uVar3 == 0xb3ccdbe84a79a126) {
              FUN_180074e20(local_120,local_118);
              local_128 = 0x4840c7afe781fc4f;
              local_130 = 0xf96f648b407f4c33;
              local_a8 = lVar1;
            }
          }
          if ((longlong)uVar3 < 0x288e493ce7daf403) break;
          if (uVar3 == 0x288e493ce7daf403) {
            FUN_180075030(&local_58,local_120,local_118);
            local_110 = (local_68 >> 2) + (local_68 >> ((byte)local_100 & 0x3f));
            local_78 = local_58;
            local_70 = *local_f8;
            local_128 = 0xcc5373de964a0ce2;
            if (local_58 - local_a0 < local_60 - local_70) {
              local_128 = 0x5706414e097b3920;
            }
            local_130 = 0x6a149fad2ce3ef5d;
          }
          else if (uVar3 == 0x3cf4fbce946333b9) {
            local_e8 = local_d8;
            local_f0 = local_e0;
            local_128 = 0x3d6274bee32fc292;
            if (local_d8 - local_e0 < local_108) {
              local_128 = 0x299a191af844bd93;
            }
            local_130 = 0xa89358de5e1c9dff;
            local_c0 = local_110;
            local_d0 = local_f0;
            local_c8 = local_e8;
            local_b8 = local_e8;
            local_b0 = local_f0;
          }
          else if (uVar3 == 0x3d12dee32598d67d) {
            FUN_1800736b0(local_120,local_78,local_110);
            local_e0 = *local_f8;
            local_128 = 0x5d538d2e59f941aa;
            local_130 = 0x61a776e0cd9a7213;
            local_d8 = local_118;
          }
        }
        if (uVar3 != 0xddea44cc075c0403) break;
        local_100 = 1;
        local_108 = 0x401;
        local_128 = 0xea84ad89e9ba43fb;
        if (local_98 < 0x401) {
          local_128 = 0x6d2a91401cef7e2d;
        }
        local_130 = 0xec23d084bab75e41;
        local_f0 = param_1;
        local_e8 = param_2;
        local_88 = param_2;
        local_80 = param_1;
      }
      if (uVar3 != 0x6a77d0d530d1dba) break;
      local_f8 = &local_50;
      local_128 = 0x773a99ba254f51fc;
      local_130 = 0xe2cbb5da987c0e91;
      local_d0 = local_80;
      local_c8 = local_88;
      local_c0 = local_90;
      local_b8 = param_2;
      local_b0 = param_1;
    }
  } while (uVar3 != 0xdd1ba207a72a799f);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_158)) {
  }
  return;
}



longlong * FUN_180073cc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 local_241;
  ulonglong local_240;
  ulonglong local_238;
  uint local_22c;
  ulonglong local_228;
  uintptr_t local_220;
  longlong *local_218;
  ulonglong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  ulonglong local_1c8;
  undefined8 ***local_1c0;
  ulonglong local_1b8;
  ulonglong *local_1b0;
  longlong *local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong *local_188;
  longlong *local_180;
  ulonglong local_178;
  longlong local_170;
  ulonglong local_168;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  ulonglong local_140;
  longlong local_138;
  ulonglong *local_130;
  uintptr_t *local_128;
  longlong *local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 ***local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong *local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  longlong local_70;
  ulonglong *local_68;
  longlong *local_60;
  longlong *local_58;
  uintptr_t *local_50;
  ulonglong *local_48;

  local_238 = 0xe31c75bd9b6e875e;
  local_240 = 0x11632bfda9c97ee;
LAB_180073dc0:
  do {
    while( true ) {
      uVar7 = local_238 ^ 0x6391755366be01f;
      uVar6 = local_238 ^ local_240;
      local_240 = local_240 ^ 0x6391755366be01f;
      local_238 = uVar7;
      if ((longlong)uVar6 < -0x81a9e7815d4a2f5) break;
      if ((longlong)uVar6 < 0x3d4e7ecc20f4b101) {
        if ((longlong)uVar6 < 0x21db9d9a14553514) {
          if ((longlong)uVar6 < 0x2b7af45c476d640) {
            if (uVar6 == 0xf7e56187ea2b5d0b) {
              local_70 = *(longlong *)(local_a8 + -8);
              local_238 = 0x256de9c53a9857e1;
              if (local_1e8 <= (ulonglong)((local_a8 + local_1f8) - local_70)) {
                local_238 = 0xe26e2b7ffdc1a010;
              }
              local_240 = 0xcb4b9999b04e7d2f;
            }
            else if (uVar6 == 0x890471338a5091) {
              local_60 = local_148;
              local_58 = local_150;
              local_1a8 = local_148 + -4;
              local_1d8 = local_150 + -4;
              local_68 = (ulonglong *)(local_150 + -1);
              local_1a0 = local_150[-1];
              local_238 = 0xe36d9c1bc73d136e;
              if (local_1a0 <= local_228) {
                local_238 = 0xe0325351e7336101;
              }
              local_240 = 0x3a2b014eedb41392;
            }
          }
          else if (uVar6 == 0x2b7af45c476d640) {
            lVar1 = *local_1d0;
            lVar2 = local_1d0[1];
            lVar3 = local_1d0[3];
            local_f0[2] = local_1d0[2];
            local_f0[3] = lVar3;
            *local_f0 = lVar1;
            local_f0[1] = lVar2;
            *local_50 = local_220;
            *local_48 = local_228;
            *(undefined1 *)local_1d0 = local_241;
            local_120 = local_1d0 + -4;
            uVar6 = local_1d0[-2];
            plVar8 = local_120;
            if (local_228 < (ulonglong)local_1d0[-1]) {
              plVar8 = (longlong *)local_1d0[-4];
            }
            uVar7 = local_1c8;
            if (uVar6 < local_1c8) {
              uVar7 = uVar6;
            }
            uVar5 = memcmp(local_1c0,plVar8,uVar7);
            bVar4 = local_1c8 < uVar6;
            if (uVar5 != local_22c) {
              bVar4 = (int)uVar5 < (int)local_22c;
            }
            local_238 = 0x1766466a045fd845;
            if (!bVar4) {
              local_238 = 0xeba921d61b56a5d8;
            }
            local_240 = 0xaffea2dd64ad30cd;
            local_118 = local_1d0;
LAB_180073d65:
            local_128 = (uintptr_t *)(local_118 + -2);
            local_130 = (ulonglong *)(local_118 + -1);
            local_158 = local_118;
          }
          else if (uVar6 == 0x8fc81fce0f946db) {
            local_c0 = param_1 + 4;
            local_238 = 0x3d163a8a208d28cd;
            if (local_c0 == param_2) {
              local_238 = 0x915e038c2fde7ac6;
            }
            local_240 = 0x1b7e967024d2efec;
          }
        }
        else if ((longlong)uVar6 < 0x2925b2e64d8fdd3f) {
          if (uVar6 == 0x21db9d9a14553514) {
            thunk_FUN_1801f42e0(local_108,local_110);
            local_238 = 0x3677f5c47d8a3a7e;
            local_240 = 0x59c09bb4fccc9d7d;
            local_1e0 = local_f8;
          }
          else if (uVar6 == 0x2668acfa045fc721) {
            local_88 = (ulonglong *)(param_1 + 2);
            local_1b0 = (ulonglong *)(param_1 + 3);
            local_80 = &local_d8;
            local_78 = &uStack_d0;
            local_238 = 0x7e144e22c60f145;
            local_240 = 0x97891a815eb6a4c6;
            local_188 = local_c0;
            local_180 = param_1;
          }
        }
        else if (uVar6 == 0x39c0925680f02444) {
          local_160 = *local_f0;
          local_168 = local_198 + local_1f0;
          local_238 = 0x165abaf30b371feb;
          if (local_168 <= local_208) {
            local_238 = 0x7beb1a16cdaa6fba;
          }
          local_240 = 0xe1bfdb74e11c42e0;
          local_a8 = local_160;
        }
        else if (uVar6 == 0x3a68a358766df2f2) {
          local_110 = local_1b8 + local_200;
          local_108 = local_c8;
          local_238 = 0x5030c8926c2b080e;
          local_240 = 0x71eb5508787e3d1a;
        }
        else if (uVar6 == 0x2925b2e64d8fdd3f) goto LAB_180074dfa;
      }
      else if ((longlong)uVar6 < 0x5e2278389135cf7a) {
        if ((longlong)uVar6 < 0x44902280e6697727) {
          if (uVar6 == 0x3d4e7ecc20f4b101) {
            local_190 = *local_1b0;
            local_238 = 0xae47a0271e70017a;
            if (local_190 <= local_228) {
              local_238 = 0x8560ecd7795fd15e;
            }
            local_240 = 0xead782a7f819765d;
            local_1e0 = param_1;
          }
          else if (uVar6 == 0x4457830b7ffb9515) {
            local_f8 = local_158;
            local_1b8 = local_158[3];
            local_238 = 0x7dca44ebdb20f71d;
            if (local_1b8 <= local_228) {
              local_238 = 0xba330d54575539b3;
            }
            local_240 = 0xd5846324d6139eb0;
            local_1e0 = local_158;
          }
        }
        else if (uVar6 == 0x44902280e6697727) {
          local_138 = *param_1;
          local_140 = local_190 + local_1f0;
          local_238 = 0x9ea75adca108f13c;
          if (local_140 <= local_208) {
            local_238 = 0xfbd22040976cc202;
          }
          local_240 = 0x5e20302fc04dc4c0;
          local_b8 = local_138;
        }
        else if (uVar6 == 0x491484f1cf155f16) goto LAB_180074dfa;
      }
      else if ((longlong)uVar6 < 0x6fb76e708146a703) {
        if (uVar6 == 0x5e2278389135cf7a) {
          local_178 = local_1a0 + local_200;
          local_170 = local_90;
          local_238 = 0x463093d748b906ea;
          local_240 = 0x2567785f0769b9f2;
        }
        else if (uVar6 == 0x6357eb884fd0bf18) {
          thunk_FUN_1801f42e0(local_170,local_178);
          local_238 = 0x49645b5a582c46b2;
          local_240 = 0x937d094552ab3421;
        }
      }
      else if (uVar6 == 0x6fb76e708146a703) {
        local_1e0[2] = local_d8;
        local_1e0[3] = uStack_d0;
        *local_1e0 = (longlong)local_e8;
        local_1e0[1] = lStack_e0;
        local_188 = local_218 + 4;
        local_238 = 0x22463d7cd7a13caf;
        if (local_188 != param_2) {
          local_238 = 0x380ef6e3ae7bfc06;
        }
        local_240 = 0xa866a880dcada985;
        local_180 = local_218;
      }
      else if (uVar6 == 0x77070ee1a24d51d8) {
        local_c8 = *(longlong *)(local_a0 + -8);
        local_238 = 0x10954bf1e24a5c3;
        if (local_1e8 <= (ulonglong)((local_a0 + local_1f8) - local_c8)) {
          local_238 = 0x4713f4ab85ce6019;
        }
        local_240 = 0x3b61f7e768495731;
      }
      else if (uVar6 == 0x7c72034ced873728) goto LAB_180074dfa;
    }
    if ((longlong)uVar6 < -0x35011f7ea792e1f4) {
      if ((longlong)uVar6 < -0x5a0def90a8def93e) {
        if ((longlong)uVar6 < -0x6f97a19c8d29aa7d) {
          if (uVar6 == 0x83c5866361cc82f8) {
            local_120 = local_218 + -4;
            uVar6 = local_218[-2];
            plVar8 = local_120;
            if (local_228 < (ulonglong)local_218[-1]) {
              plVar8 = (longlong *)local_218[-4];
            }
            uVar7 = local_1c8;
            if (uVar6 < local_1c8) {
              uVar7 = uVar6;
            }
            uVar5 = memcmp(local_1c0,plVar8,uVar7);
            bVar4 = local_1c8 < uVar6;
            if (uVar5 != local_22c) {
              bVar4 = (int)uVar5 < (int)local_22c;
            }
            local_238 = 0x3be6b3c89731455e;
            if (!bVar4) {
              local_238 = 0xc729d474883838c3;
            }
            local_240 = 0x837e577ff7c3add6;
            local_118 = local_218;
            goto LAB_180073d65;
          }
          if (uVar6 == 0x8a2095fc0b0c952a) {
            return param_2;
          }
        }
        else if (uVar6 == 0x90685e6372d65583) {
          local_100 = local_180;
          local_218 = local_188;
          local_e8 = (undefined8 ***)*local_188;
          lStack_e0 = local_188[1];
          local_d8 = local_188[2];
          uStack_d0 = local_188[3];
          local_180[6] = local_220;
          local_180[7] = local_228;
          *(undefined1 *)local_188 = local_241;
          uVar6 = *local_88;
          plVar8 = param_1;
          if (local_228 < *local_1b0) {
            plVar8 = (longlong *)*param_1;
          }
          local_1c8 = *local_80;
          local_1c0 = &local_e8;
          if (local_228 < *local_78) {
            local_1c0 = local_e8;
          }
          uVar7 = local_1c8;
          if (uVar6 < local_1c8) {
            uVar7 = uVar6;
          }
          uVar5 = memcmp(local_1c0,plVar8,uVar7);
          bVar4 = local_1c8 < uVar6;
          if (uVar5 != local_22c) {
            bVar4 = (int)uVar5 < (int)local_22c;
          }
          local_238 = 0x88222c79e401ed6e;
          if (!bVar4) {
            local_238 = 0xfdfef7e62f5db3cf;
          }
          local_240 = 0x7e3b71854e913137;
        }
        else if (uVar6 == 0x9a54c1622cb62d5a) {
          thunk_FUN_1801f42e0(local_160,local_168);
          local_238 = 0xe00753815c9556b1;
          local_240 = 0xe2b0fcc498e380f1;
        }
      }
      else if ((longlong)uVar6 < -0x47671b489f0d1778) {
        if (uVar6 == 0xa5f2106f572106c2) {
          thunk_FUN_1801f42e0(local_138,local_140);
          local_238 = 0xc20b5724949e2ad2;
          local_240 = 0xadbc395415d88dd1;
          local_1e0 = param_1;
        }
        else if (uVar6 == 0xa84e27cf0d3369ad) {
          local_108 = *local_f8;
          local_110 = local_1b8 + local_1f0;
          local_238 = 0x14e98c035fd61dac;
          if (local_110 <= local_208) {
            local_238 = 0x42351f78e9ce7960;
          }
          local_240 = 0x63ee82e2fd9b4c74;
          local_a0 = local_108;
        }
      }
      else if (uVar6 == 0xb898e4b760f2e888) {
        local_f0 = local_118;
        local_1d0 = local_120;
        local_50 = local_128;
        local_48 = local_130;
        local_198 = local_118[3];
        local_238 = 0xcf039605f694402a;
        if (local_198 <= local_228) {
          local_238 = 0xf474ab16b212b22e;
        }
        local_240 = 0xf6c304537664646e;
      }
      else if (uVar6 == 0xc0876af3614535fc) {
        local_b0 = *(longlong *)(local_b8 + -8);
        local_238 = 0x64dca4d11373e442;
        if (local_1e8 <= (ulonglong)((local_b8 + local_1f8) - local_b0)) {
          local_238 = 0x697d2d44a5b55fc7;
        }
        local_240 = 0x8e3c1dbf015f6ea0;
      }
      goto LAB_180073dc0;
    }
    if ((longlong)uVar6 < -0x18becf045b15ce99) {
      if ((longlong)uVar6 < -0x25e6ade0f5788d6d) {
        if (uVar6 == 0xcafee081586d1e0c) {
          local_90 = *(longlong *)(local_98 + -8);
          local_238 = 0x4948cc24f58c63f2;
          if (local_1e8 <= (ulonglong)((local_98 + local_1f8) - local_90)) {
            local_238 = 0x5e7e30edabacf39e;
          }
          local_240 = 0x176ab41c64b9ac88;
        }
        else if (uVar6 == 0xd9469d552a8900fc) {
          local_170 = *local_1d8;
          local_178 = local_1a0 + local_1f0;
          local_238 = 0x51112133dad068c3;
          if (local_178 <= local_208) {
            local_238 = 0xf8b82a3acd6dc9d7;
          }
          local_240 = 0x9befc1b282bd76cf;
          local_98 = local_170;
        }
      }
      else if (uVar6 == 0xda19521f0a877293) {
        local_58[-2] = local_220;
        *local_68 = local_228;
        *(undefined1 *)local_1d8 = local_241;
        lVar1 = *local_1a8;
        lVar2 = local_1a8[1];
        lVar3 = local_1a8[3];
        local_1d8[2] = local_1a8[2];
        local_1d8[3] = lVar3;
        *local_1d8 = lVar1;
        local_1d8[1] = lVar2;
        local_60[-2] = local_220;
        local_60[-1] = local_228;
        local_148 = local_1a8;
        *(undefined1 *)local_1a8 = local_241;
        local_238 = 0x68a68b89b8e6da4b;
        if (param_1 != local_1a8) {
          local_238 = 0x5561f134ab983bdb;
        }
        local_240 = 0x55e8f54598126b4a;
        local_150 = local_1d8;
      }
      else if (uVar6 == 0xe20a470241f210b0) {
        local_228 = 0xf;
        local_1e8 = 0x20;
        local_220 = 0;
        local_1f0 = 1;
        local_1f8 = -8;
        local_200 = 0x28;
        local_241 = 0;
        local_208 = 0xfff;
        local_22c = 0;
        local_238 = 0x17d18a063bc85cda;
        if (param_1 == param_2) {
          local_238 = 0x950d9e06d03d8f2b;
        }
        local_240 = 0x1f2d0bfadb311a01;
      }
    }
    else if ((longlong)uVar6 < -0x11d98fa37529d532) {
      if (uVar6 == 0xeae0b96e122c8ae2) {
        local_140 = local_190 + local_200;
        local_238 = 0x4e1adb3e5cd23602;
        local_240 = 0xebe8cb510bf330c0;
        local_138 = local_b0;
      }
      else if (uVar6 == 0xe74130fba4ea3167) {
LAB_180074dfa:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_22c,local_220);
      }
    }
    else if (uVar6 == 0xee26705c8ad62ace) {
      local_168 = local_198 + local_200;
      local_238 = 0xbecb473227ee781;
      local_240 = 0x91b875110ec8cadb;
      local_160 = local_70;
    }
    else if (uVar6 == 0xf6195dfcaa90dc59) {
      local_150 = local_100 + 8;
      local_238 = 0x1a4cebb4957b64a0;
      local_240 = 0x1ac5efc5a6f13431;
      local_148 = local_218;
    }
  } while( true );
}



void FUN_180074e20(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  ulonglong local_58;
  uintptr_t local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_60 = 0xf;
  local_50 = 0;
  local_58 = 1;
  uVar7 = param_2 - param_1 >> 6;
  if (0 < (longlong)uVar7) {
    do {
      uVar8 = uVar7 - 1;
      lVar5 = uVar8 * 0x20;
      puVar1 = (undefined4 *)(param_1 + lVar5);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      puVar1 = (undefined4 *)(param_1 + 0x10 + lVar5);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      *(uintptr_t *)(param_1 + 0x10 + lVar5) = local_50;
      *(ulonglong *)(param_1 + 0x18 + lVar5) = local_60;
      *(undefined1 *)(param_1 + lVar5) = 0;
      FUN_180076660(param_1,uVar8,param_2 - param_1 >> 5,&local_88);
      uVar4 = CONCAT44(uStack_6c,uStack_70);
      if (local_60 < uVar4) {
        lVar3 = CONCAT44(uStack_84,local_88);
        uVar6 = local_58 + uVar4;
        lVar5 = lVar3;
        if (0xfff < uVar6) {
          lVar5 = *(longlong *)(lVar3 + -8);
          if (0x1f < (lVar3 - lVar5) - 8U) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_50);
          }
          uVar6 = uVar4 + 0x28;
        }
        thunk_FUN_1801f42e0(lVar5,uVar6);
      }
      bVar2 = local_58 < uVar7;
      uVar7 = uVar8;
    } while (bVar2);
  }
  return;
}



void Unwind_180074ff0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void FUN_180075030(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_2c8 [32];
  ulonglong local_2a8;
  ulonglong local_2a0;
  int local_298;
  char local_292;
  char local_291;
  undefined8 *local_290;
  undefined8 *local_288;
  ulonglong local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  size_t local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  size_t local_f8;
  ulonglong *local_f0;
  ulonglong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  size_t local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  size_t local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_2c8;
  local_2a0 = 0x3ef6285b50d0eac6;
  local_2a8 = 0xe12f02499cc955fb;
  local_130 = param_1;
LAB_1800750fa:
  while( true ) {
    uVar7 = local_2a0 ^ 0x906d688a7c9329b9;
    uVar6 = local_2a0 ^ local_2a8;
    local_2a8 = local_2a8 ^ 0x906d688a7c9329b9;
    local_2a0 = uVar7;
    if (0x368afa36ff8fc0a < (longlong)uVar6) break;
    if ((longlong)uVar6 < -0x4ecc8eff08e41db8) {
      if ((longlong)uVar6 < -0x5ee17334ca7266f1) {
        if ((longlong)uVar6 < -0x743d7df55e2fbcf6) {
          if (uVar6 == 0x83ffaae7ff242fbb) {
            iVar5 = memcmp(local_108,local_100,local_f8);
            bVar4 = local_1d0 < local_1c8;
            if (iVar5 != local_298) {
              bVar4 = iVar5 < local_298;
            }
            local_2a0 = 0x32a52d67ac2a13dd;
            if (!bVar4) {
              local_2a0 = 0x32f278b08a3f24f5;
            }
            local_2a8 = 0x62d88db421b39f97;
            local_208 = local_268;
            local_200 = local_238;
          }
          else if (uVar6 == 0x85a040adc9ee523d) {
            local_68 = *local_278;
            uStack_60 = local_278[1];
            local_58 = local_278[2];
            uStack_50 = local_278[3];
            uVar1 = *local_260;
            uVar2 = local_260[1];
            uVar3 = local_260[3];
            local_278[2] = local_260[2];
            local_278[3] = uVar3;
            *local_278 = uVar1;
            local_278[1] = uVar2;
            local_260[2] = local_58;
            local_260[3] = uStack_50;
            *local_260 = local_68;
            local_260[1] = uStack_60;
            local_2a0 = 0x7dae85016079d000;
            local_2a8 = 0x2cbe36b51ed21b44;
          }
        }
        else if (uVar6 == 0x8bc2820aa1d0430a) {
          local_278 = local_140 + -4;
          local_2a0 = 0x29a0ad35cc00d21d;
          if (local_291 == '\0') {
            local_2a0 = 0xc17ed2f93de270f8;
          }
          local_2a8 = 0x9b8a41a588b693f9;
        }
        else if (uVar6 == 0x8d1bb68b3c65e3be) {
          local_230 = local_160;
          local_2a0 = 0xeb33fca2ef68de30;
          if (local_160 <= param_2) {
            local_2a0 = 0x2f7dba2434ebdffc;
          }
          local_2a8 = 0x5a008da218733c78;
        }
        else if (uVar6 == 0x96abd892c135a5a9) {
          *local_130 = local_288;
          local_130[1] = local_270;
          if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_2c8)) {
          }
          return;
        }
      }
      else if ((longlong)uVar6 < -0x5b827101134d925d) {
        if (uVar6 == 0xa11e8ccb358d990f) {
          local_2a0 = 0x6aaaa629acf1c0bb;
          local_2a8 = 0xb75ffdd8c241a1e;
          local_190 = local_230;
          local_188 = local_228;
          local_180 = local_230;
          local_178 = local_228;
        }
        else if (uVar6 == 0xa3cd4d9e9baedec7) {
          local_68 = *local_198;
          uStack_60 = local_198[1];
          local_58 = local_198[2];
          uStack_50 = local_198[3];
          uVar1 = *local_1b0;
          uVar2 = local_1b0[1];
          uVar3 = local_1b0[3];
          local_198[2] = local_1b0[2];
          local_198[3] = uVar3;
          *local_198 = uVar1;
          local_198[1] = uVar2;
          local_1b0[2] = local_58;
          local_1b0[3] = uStack_50;
          *local_1b0 = local_68;
          local_1b0[1] = uStack_60;
          local_2a0 = 0x954602db2b60ec16;
          local_2a8 = 0x290966f4a2be54d6;
          local_1f8 = local_198;
        }
      }
      else {
        if (uVar6 == 0xa47d8efeecb26da3) {
          local_68 = *local_268;
          uStack_60 = local_268[1];
          local_58 = local_268[2];
          uStack_50 = local_268[3];
          uVar1 = *local_238;
          uVar2 = local_238[1];
          uVar3 = local_238[3];
          local_268[2] = local_238[2];
          local_268[3] = uVar3;
          *local_268 = uVar1;
          local_268[1] = uVar2;
          local_238[2] = local_58;
          local_238[3] = uStack_50;
          *local_238 = local_68;
          local_238[1] = uStack_60;
          local_2a0 = 0x7d6d81c9213d113f;
          local_2a8 = 0x25ff33dca50cc562;
          goto LAB_180075e7c;
        }
        if (uVar6 == 0xaa613949dcc9bfde) {
          local_98 = local_1f0 + 2;
          local_90 = local_1f0 + 3;
          local_2a0 = 0xdb4345bd25f29cc4;
          local_2a8 = 0x21540621fb9bd9cb;
          local_170 = local_88;
          local_168 = local_78;
        }
        else if (uVar6 == 0xab06ea28dd5c41ab) {
          local_68 = *local_290;
          uStack_60 = local_290[1];
          local_58 = local_290[2];
          uStack_50 = local_290[3];
          uVar1 = *local_278;
          uVar2 = local_278[1];
          uVar3 = local_278[3];
          local_290[2] = local_278[2];
          local_290[3] = uVar3;
          *local_290 = uVar1;
          local_290[1] = uVar2;
          local_278[2] = local_58;
          local_278[3] = uStack_50;
          *local_278 = local_68;
          local_278[1] = uStack_60;
          local_2a0 = 0xf7bb7b1a8c66a1b4;
          local_2a8 = 0xf7febe19b6d78cc9;
        }
      }
    }
    else if ((longlong)uVar6 < -0x41d8fb9816e9f734) {
      if ((longlong)uVar6 < -0x4b093f8a934e3b11) {
        if (uVar6 == 0xb1337100f71be248) {
          local_e0 = local_230 + -4;
          local_1c0 = local_230[2];
          local_d8 = local_230;
          if (local_280 < (ulonglong)local_230[3]) {
            local_d8 = (undefined8 *)*local_230;
          }
          local_1b8 = local_230[-2];
          local_d0 = local_e0;
          if (local_280 < (ulonglong)local_230[-1]) {
            local_d0 = (undefined8 *)local_230[-4];
          }
          local_c8 = local_1b8;
          if (local_1c0 < local_1b8) {
            local_c8 = local_1c0;
          }
          iVar5 = memcmp(local_d0,local_d8,local_c8);
          bVar4 = local_1b8 < local_1c0;
          if (iVar5 != local_298) {
            bVar4 = iVar5 < local_298;
          }
          local_2a0 = 0x86fc8fa657d85579;
          if (!bVar4) {
            local_2a0 = 0xabd429c96519318a;
          }
          local_2a8 = 0xf381b8207b40b6fd;
        }
        else if (uVar6 == 0xb22aec9044b641e4) {
          local_260 = local_288 + -4;
          local_2a0 = 0xd178557e631141b8;
          if (local_140 != local_288) {
            local_2a0 = 0x5c8a667d454d8c1;
          }
          local_2a8 = 0x8068e6ca1dba8afc;
        }
      }
      else if (uVar6 == 0xb4f6c0756cb1c4ef) {
        local_1e0 = *local_f0;
        local_120 = local_230;
        if (local_280 < *local_e8) {
          local_120 = (undefined8 *)*local_230;
        }
        local_1d8 = local_70[6];
        local_118 = local_228;
        if (local_280 < (ulonglong)local_70[7]) {
          local_118 = (undefined8 *)*local_228;
        }
        local_110 = local_1d8;
        if (local_1e0 < local_1d8) {
          local_110 = local_1e0;
        }
        iVar5 = memcmp(local_118,local_120,local_110);
        bVar4 = local_1d8 < local_1e0;
        if (iVar5 != local_298) {
          bVar4 = iVar5 < local_298;
        }
        local_2a0 = 0x8c01d25f5c8eeddd;
        if (!bVar4) {
          local_2a0 = 0x21e06dae51f6f9b5;
        }
        local_2a8 = 0x2d1f5e94690374d2;
      }
      else if (uVar6 == 0xb8bdff6c0e7c0930) {
        local_2a0 = 0xda0adfd8dde90a86;
        local_2a8 = 0x82986dcd59d8dedb;
LAB_180075e7c:
        local_210 = local_268 + 4;
      }
      else if (uVar6 == 0xbc4f642f89deb8c0) {
        local_2a0 = 0x3302ba9868be3352;
        if (local_1b0 <= param_2) {
          local_2a0 = 0x103335cb7ce8fb69;
        }
        local_2a8 = 0x306a153b0746cf59;
        local_220 = local_1f8;
        local_218 = local_1b0;
        local_158 = local_1b0;
        local_150 = local_1f8;
      }
    }
    else if ((longlong)uVar6 < -0xf2d50442e9b403a) {
      if (uVar6 == 0xbe270467e91608cc) {
        local_258 = local_288 + 4;
        local_240 = local_290 + 4;
        local_2a0 = 0x4364f3adfbbd2c73;
        local_2a8 = 0x7d5d36c263ac6008;
        local_250 = local_a0;
        local_248 = param_2;
      }
      else if (uVar6 == 0xdfd92a12cc19bf3d) {
        local_280 = 0xf;
        local_298 = 0;
        puVar8 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 6) * 4;
        local_128 = puVar8;
        FUN_180077dc0(param_2,puVar8,param_3 + -4);
        local_2a0 = 0xe431ea310409c14d;
        local_2a8 = 0x692a5cba386c22f3;
        local_160 = puVar8;
      }
    }
    else if (uVar6 == 0xf0d2afbbd164bfc6) {
      local_68 = *local_288;
      uStack_60 = local_288[1];
      local_58 = local_288[2];
      uStack_50 = local_288[3];
      uVar1 = *local_270;
      uVar2 = local_270[1];
      uVar3 = local_270[3];
      local_288[2] = local_270[2];
      local_288[3] = uVar3;
      *local_288 = uVar1;
      local_288[1] = uVar2;
      local_270[2] = local_58;
      local_270[3] = uStack_50;
      *local_270 = local_68;
      local_270[1] = uStack_60;
      local_2a0 = 0x886516f95e11ab25;
      local_2a8 = 0xba3b3ddce220868c;
    }
    else if (uVar6 == 0xfa17439cde69450f) {
      local_268 = local_168;
      local_238 = local_170;
      local_1d0 = local_170[2];
      local_108 = local_170;
      if (local_280 < (ulonglong)local_170[3]) {
        local_108 = (undefined8 *)*local_170;
      }
      local_1c8 = *local_98;
      local_100 = local_1f0;
      if (local_280 < *local_90) {
        local_100 = (undefined8 *)*local_1f0;
      }
      local_f8 = local_1c8;
      if (local_1d0 < local_1c8) {
        local_f8 = local_1d0;
      }
      iVar5 = memcmp(local_100,local_108,local_f8);
      bVar4 = local_1c8 < local_1d0;
      if (iVar5 != local_298) {
        bVar4 = iVar5 < local_298;
      }
      local_2a0 = 0x688a7cfdd9aeefa9;
      if (!bVar4) {
        local_2a0 = 0xb3e7640fa2bb144f;
      }
      local_2a8 = 0x3018cee85d9f3bf4;
      local_210 = local_268;
    }
    else if (uVar6 == 0x45c5033ab12d7d) {
      local_240 = local_290 + 4;
      local_2a0 = 0x981df0d1c585e8fe;
      local_2a8 = 0xa62435be5d94a485;
      local_248 = local_278;
      local_258 = local_288;
      local_250 = local_270;
    }
  }
  if ((longlong)uVar6 < 0x46757a9fdd6b89ad) {
    if ((longlong)uVar6 < 0x325e2b25bc312da9) {
      if ((longlong)uVar6 < 0xcff333a38f58d67) {
        if (uVar6 == 0x368afa36ff8fc0b) {
          local_1e8 = local_150;
          local_138 = local_158;
          local_1b0 = local_158 + -4;
          local_1a8 = local_150[2];
          local_c0 = local_150;
          if (local_280 < (ulonglong)local_150[3]) {
            local_c0 = (undefined8 *)*local_150;
          }
          local_1a0 = local_158[-2];
          local_b8 = local_1b0;
          if (local_280 < (ulonglong)local_158[-1]) {
            local_b8 = (undefined8 *)local_158[-4];
          }
          local_b0 = local_1a0;
          if (local_1a8 < local_1a0) {
            local_b0 = local_1a8;
          }
          iVar5 = memcmp(local_b8,local_c0,local_b0);
          bVar4 = local_1a0 < local_1a8;
          if (iVar5 != local_298) {
            bVar4 = iVar5 < local_298;
          }
          local_2a0 = 0x58c01a9c0c3fe23a;
          if (!bVar4) {
            local_2a0 = 0xecaa27a1d414390d;
          }
          local_2a8 = 0xe48f7eb385e15afa;
          local_1f8 = local_1e8;
        }
        else if (uVar6 == 0x825591251f563f7) {
          iVar5 = memcmp(local_c0,local_b8,local_b0);
          bVar4 = local_1a8 < local_1a0;
          if (iVar5 != local_298) {
            bVar4 = iVar5 < local_298;
          }
          local_2a0 = 0xc5a1bb5808f79e27;
          if (!bVar4) {
            local_2a0 = 0xd89ab6d7a3b05cc2;
          }
          local_2a8 = 0xe5f89ba87359aa17;
          local_220 = local_1e8;
          local_218 = local_138;
        }
      }
      else if (uVar6 == 0xcff333a38f58d67) {
        iVar5 = memcmp(local_120,local_118,local_110);
        bVar4 = local_1e0 < local_1d8;
        if (iVar5 != local_298) {
          bVar4 = iVar5 < local_298;
        }
        local_2a0 = 0xfae39c4f16d0171c;
        if (!bVar4) {
          local_2a0 = 0x1d886a1bfe3607be;
        }
        local_2a8 = 0x5bfd1084235d8e13;
        local_148 = local_228;
      }
      else if (uVar6 == 0x18c9a876b4ea19cd) {
        local_68 = *local_288;
        uStack_60 = local_288[1];
        local_58 = local_288[2];
        uStack_50 = local_288[3];
        uVar1 = *local_290;
        uVar2 = local_290[1];
        uVar3 = local_290[3];
        local_288[2] = local_290[2];
        local_288[3] = uVar3;
        *local_288 = uVar1;
        local_288[1] = uVar2;
        local_290[2] = local_58;
        local_290[3] = uStack_50;
        *local_290 = local_68;
        local_290[1] = uStack_60;
        local_2a0 = 0xa16ea55fa2240d8c;
        local_2a8 = 0x1f49a1384b320540;
      }
      else if (uVar6 == 0x205920f07bae3430) {
        local_140 = local_218;
        local_288 = local_220;
        local_2a0 = 0xfecc4ee23b82bc;
        local_292 = local_218 == param_2;
        if (!(bool)local_292) {
          local_2a0 = 0xc40dbdd600e02b3d;
        }
        local_291 = local_290 == param_3;
        if (!(bool)local_291) {
          local_2a0 = 0xc40dbdd600e02b3d;
        }
        local_2a8 = 0x965514dc230e2715;
      }
      goto LAB_1800750fa;
    }
    if ((longlong)uVar6 < 0x394e274574a1ecb4) {
      if (uVar6 == 0x325e2b25bc312da9) {
        local_a0 = local_270 + 4;
        local_2a0 = 0x3bdf658928d677b4;
        if (local_288 != local_290) {
          local_2a0 = 0x9d31c998752a66b5;
        }
        local_2a8 = 0x85f861eec1c07f78;
      }
      else if (uVar6 == 0x326746dfb8c7b7d5) {
        uVar6 = 0xebe768b0542ee9f6;
        if (local_288 != local_270) {
          uVar6 = 0x296bec2e397b7b99;
        }
        local_2a0 = 0xebe768b0542ee9f6;
        if (local_270 != local_290) {
          local_2a0 = uVar6;
        }
        local_2a8 = 0xd9b94395e81fc45f;
      }
      goto LAB_1800750fa;
    }
    if (uVar6 != 0x394e274574a1ecb4) {
      if (uVar6 == 0x3d622d7fd0e9f6d5) {
        local_1f8 = local_1e8 + -4;
        local_2a0 = 0x4a6d644a3e7a790b;
        if (local_1e8 != local_138) {
          local_2a0 = 0x55ef4dfb2c0a1f0c;
        }
        local_2a8 = 0xf6220065b7a4c1cb;
        local_198 = local_1f8;
      }
      else if (uVar6 == 0x3e39c56f98114c7b) {
        local_2a0 = 0xecc3c3a08580444e;
        local_2a8 = 0x8d1c9a54a5559eeb;
        local_190 = local_258;
        local_188 = local_250;
        local_180 = local_248;
        local_178 = local_240;
      }
      goto LAB_1800750fa;
    }
    local_68 = *local_260;
    uStack_60 = local_260[1];
    local_58 = local_260[2];
    uStack_50 = local_260[3];
    uVar1 = *local_a8;
    uVar2 = local_a8[1];
    uVar3 = local_a8[3];
    local_260[2] = local_a8[2];
    local_260[3] = uVar3;
    *local_260 = uVar1;
    local_260[1] = uVar2;
    local_a8[2] = local_58;
    local_a8[3] = uStack_50;
    *local_a8 = local_68;
    local_a8[1] = uStack_60;
    local_2a0 = 0xb8f8ef7418ce17e1;
    local_2a8 = 0x86c12a1b80df5b9a;
  }
  else {
    if (0x585591e91e598776 < (longlong)uVar6) {
      if ((longlong)uVar6 < 0x5af4935cb554e301) {
        if (uVar6 == 0x585591e91e598777) {
          iVar5 = memcmp(local_d8,local_d0,local_c8);
          bVar4 = local_1c0 < local_1b8;
          if (iVar5 != local_298) {
            bVar4 = iVar5 < local_298;
          }
          local_2a0 = 0xe2f06a10d19711c4;
          if (!bVar4) {
            local_2a0 = 0x1a96eb1dc16a11fe;
          }
          local_2a8 = 0x978d5d96fd0ff240;
          local_160 = local_e0;
        }
        else if (uVar6 == 0x5892b2158431d45d) {
          local_200 = local_238 + 4;
          local_2a0 = 0x7912217eb76fc721;
          if (param_3 <= local_200) {
            local_2a0 = 0xd378c231e49f0e64;
          }
          local_168 = local_210;
          local_2a8 = 0x830562e26906822e;
          local_208 = local_210;
          local_170 = local_200;
        }
      }
      else if (uVar6 == 0x5af4935cb554e301) {
        local_2a0 = 0x7e5bbb1156c2c747;
        if (local_290 != local_278) {
          local_2a0 = 0xd518943ab12fab91;
        }
        local_2a8 = 0x7e1e7e126c73ea3a;
      }
      else if (uVar6 == 0x61df59f420d5daa5) {
        local_200 = local_178;
        local_80 = local_180;
        local_208 = local_188;
        local_1f0 = local_190;
        local_2a0 = 0xd005b3eeb6b6da77;
        if (param_3 <= local_178) {
          local_2a0 = 0x2a192a74e7e6e9e3;
        }
        local_2a8 = 0x7a648aa76a7f65a9;
        local_88 = local_200;
        local_78 = local_208;
      }
      else if (uVar6 == 0x757d37862c98e384) {
        local_f0 = local_230 + 2;
        local_e8 = local_230 + 3;
        local_2a0 = 0xb5a3b3a17c665365;
        local_2a8 = 0xf3d6c93ea10ddac8;
        local_148 = local_128;
      }
      goto LAB_1800750fa;
    }
    if ((longlong)uVar6 < 0x507da0d38d998c4a) {
      if (uVar6 == 0x46757a9fdd6b89ad) {
        local_70 = local_148;
        local_228 = local_148 + 4;
        local_2a0 = 0xd6655f21a074d875;
        if (param_3 <= local_228) {
          local_2a0 = 0xc38d139ff9488595;
        }
        local_2a8 = 0x62939f54ccc51c9a;
      }
      else if (uVar6 == 0x502af504ab8cbb62) {
        local_2a0 = 0x2f01fa7180845318;
        if (local_268 != local_238) {
          local_2a0 = 0x33c18be3624a378b;
        }
        local_2a8 = 0x97bc051d8ef85a28;
      }
      goto LAB_1800750fa;
    }
    if (uVar6 == 0x507da0d38d998c4a) {
      local_290 = local_200;
      local_270 = local_208;
      local_218 = local_80;
      local_2a0 = 0x8836de8ae8f0f333;
      if (local_80 <= param_2) {
        local_2a0 = 0xab0751d9fca63b08;
      }
      local_2a8 = 0x8b5e712987080f38;
      local_220 = local_1f0;
      local_158 = local_218;
      local_150 = local_220;
      goto LAB_1800750fa;
    }
    if (uVar6 != 0x5110b3b47eabcb44) {
      if (uVar6 == 0x5258a90a23ee0c28) {
        local_2a0 = 0x9419c86268760793;
        if (local_292 == '\0') {
          local_2a0 = 0x2dbc0cb77161f34c;
        }
        local_2a8 = 0xa67e8ebdd0b1b046;
      }
      goto LAB_1800750fa;
    }
    local_a8 = local_270 + -4;
    local_2a0 = 0x390baa47eae0b3d1;
    if (local_288 != local_270) {
      local_2a0 = 0x3e7c486d0650131e;
    }
    local_2a8 = 0x7326f2872f1ffaa;
  }
  local_248 = local_278;
  local_258 = local_260;
  local_240 = local_290;
  local_250 = local_a8;
  goto LAB_1800750fa;
}



void FUN_180076660(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Buf1;
  ulonglong uVar8;
  void *_Buf2;
  ulonglong _Size;
  undefined1 local_159;
  ulonglong local_158;
  ulonglong local_150;
  uint local_144;
  ulonglong local_140;
  uintptr_t local_138;
  ulonglong local_130;
  longlong *local_128;
  longlong *local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_150 = 0xcf49f3e4f868a686;
  local_158 = 0x76b8c6d36a4a8252;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar8 = local_150 ^ 0xfc143074a2e98624;
              uVar6 = local_150 ^ local_158;
              local_158 = local_158 ^ 0xfc143074a2e98624;
              local_150 = uVar8;
              if ((longlong)uVar6 < 0x22a1f367ce673894) break;
              if ((longlong)uVar6 < 0x4ae93a9ffd5b8801) {
                if ((longlong)uVar6 < 0x418d6fddb5ee05bb) {
                  if (uVar6 == 0x22a1f367ce673894) {
                    local_128[2] = local_138;
                    *local_60 = local_140;
                    *(undefined1 *)local_128 = local_159;
                    lVar7 = *local_d8;
                    lVar2 = local_d8[1];
                    lVar3 = local_d8[3];
                    local_128[2] = local_d8[2];
                    local_128[3] = lVar3;
                    *local_128 = lVar7;
                    local_128[1] = lVar2;
                    local_d8[2] = local_138;
                    local_d8[3] = local_140;
                    *(undefined1 *)local_d8 = local_159;
                    local_150 = 0xc614d5cd42e5ad02;
                    local_158 = 0x8cfdef52bfbe2503;
                    local_110 = local_e8;
                  }
                  else if (uVar6 == 0x3688a712984bc55f) {
                    local_70 = (ulonglong *)(local_120 + 3);
                    local_e0 = local_120[3];
                    local_150 = 0x212da26781d1fc88;
                    if (local_e0 <= local_140) {
                      local_150 = 0xebcf940210f4ed8d;
                    }
                    local_158 = 0xad1130101a68437f;
                  }
                }
                else if (uVar6 == 0x418d6fddb5ee05bb) {
                  local_150 = 0x58155efb93755afd;
                  if ((longlong)local_118 <= (longlong)local_68) {
                    local_150 = 0xdf651e74409db6a3;
                  }
                  local_158 = 0x8b9634f77d827ff8;
                  local_b0 = local_68;
                  local_a8 = local_68;
                }
                else if (uVar6 == 0x46dea4120a9caef2) {
                  local_120[2] = local_138;
                  *local_70 = local_140;
                  *(undefined1 *)local_120 = local_159;
                  lVar7 = *local_d0;
                  lVar2 = local_d0[1];
                  lVar3 = local_d0[3];
                  local_120[2] = local_d0[2];
                  local_120[3] = lVar3;
                  *local_120 = lVar7;
                  local_120[1] = lVar2;
                  local_d0[2] = local_138;
                  local_d0[3] = local_140;
                  *(undefined1 *)local_d0 = local_159;
                  local_150 = 0xfef996d7c91bf49b;
                  local_158 = 0xbf74f90a7cf5f120;
                }
                else if (uVar6 == 0x4a44ef413722312b) goto LAB_1800770d3;
              }
              else if ((longlong)uVar6 < 0x5aeabd03b098b89b) {
                if (uVar6 == 0x51e54fe742d529e9) {
                  local_58 = *(longlong *)(local_78 + -8);
                  local_150 = 0xe9aec20cfc1d5faa;
                  if (local_f0 <= (ulonglong)((local_78 + local_f8) - local_58)) {
                    local_150 = 0xf900904e7ba7d61a;
                  }
                  local_158 = 0xb3447f0f4c85e731;
                }
                else if (uVar6 == 0x54f32a833d1fc95b) {
                  local_150 = 0xd160cce3ec27a48b;
                  if ((local_130 & param_3) != local_138 || local_118 != local_a8) {
                    local_150 = 0x6109635e3509ea4f;
                  }
                  local_158 = 0x2be059c1c852624e;
                  local_110 = local_a8;
                }
                else if (uVar6 == 0x4ae93a9ffd5b8801) {
                  FUN_180077120(param_1,local_110,param_2,param_4);
                  return;
                }
              }
              else if (uVar6 == 0x5aeabd03b098b89b) {
                local_a0 = local_c8 + local_100;
                local_150 = 0x704f63556a7c8861;
                local_158 = 0x670218799f30ad3c;
                local_98 = local_58;
              }
              else if (uVar6 == 0x7c5fabcd8c3e1026) {
                thunk_FUN_1801f42e0(local_b8,local_c0);
                local_150 = 0x569337eeca2fc8cc;
                local_158 = 0x104d93fcc0b3663e;
              }
            }
            if ((longlong)uVar6 < -0x2c7c95f31108dafb) break;
            if ((longlong)uVar6 < -0x57f6adddb8a393b) {
              if (uVar6 == 0xd3836a0ceef72505) {
                uVar8 = local_b0 << ((byte)local_130 & 0x3f);
                lVar7 = uVar8 * 0x20;
                uVar6 = *(ulonglong *)(param_1 + 0x30 + lVar7);
                if (local_140 < *(ulonglong *)(param_1 + 0x38 + lVar7)) {
                  _Buf2 = *(void **)(param_1 + 0x20 + lVar7);
                }
                else {
                  _Buf2 = (void *)(lVar7 + param_1 + 0x20);
                }
                lVar7 = (uVar8 + 2) * 0x20;
                uVar1 = *(ulonglong *)(param_1 + 0x10 + lVar7);
                if (local_140 < *(ulonglong *)(param_1 + 0x18 + lVar7)) {
                  _Buf1 = *(void **)(param_1 + lVar7);
                }
                else {
                  _Buf1 = (void *)(lVar7 + param_1);
                }
                _Size = uVar1;
                if (uVar6 < uVar1) {
                  _Size = uVar6;
                }
                uVar5 = memcmp(_Buf1,_Buf2,_Size);
                bVar4 = uVar1 < uVar6;
                if (uVar5 != local_144) {
                  bVar4 = (int)uVar5 < (int)local_144;
                }
                local_68 = uVar8 | local_130;
                if (!bVar4) {
                  local_68 = uVar8 + 2;
                }
                local_d0 = (longlong *)(local_68 * 0x20 + param_1);
                local_120 = (longlong *)(local_b0 * 0x20 + param_1);
                local_150 = 0x97f7a73227d7e14e;
                if (local_b0 != local_68) {
                  local_150 = 0xe0f26ffd0a7221aa;
                }
                local_158 = 0xd67ac8ef9239e4f5;
              }
              else if (uVar6 == 0xf16850d7efa6583b) {
                local_98 = *local_128;
                local_a0 = local_c8 + local_130;
                local_150 = 0xdfdf3fcfc7dafbc9;
                if (local_a0 <= local_108) {
                  local_150 = 0x99770b047043f77d;
                }
                local_158 = 0x8e3a7028850fd220;
                local_78 = local_98;
              }
            }
            else if (uVar6 == 0xfa8095222475c6c5) {
              local_d8 = (longlong *)(local_e8 * 0x20 + param_1);
              local_128 = (longlong *)(local_118 * 0x20 + param_1);
              local_150 = 0x5ae173750c5e3a09;
              if (local_118 != local_e8) {
                local_150 = 0xc43b91a647d8ca;
              }
              local_158 = 0x100849eaf105b208;
              local_110 = local_e8;
            }
            else if (uVar6 == 0x10cc727b57426ac2) {
              local_60 = (ulonglong *)(local_128 + 3);
              local_c8 = local_128[3];
              local_150 = 0x24109c8fa269a2ff;
              if (local_c8 <= local_140) {
                local_150 = 0xf7d93f3f83a8c250;
              }
              local_158 = 0xd578cc584dcffac4;
            }
            else if (uVar6 == 0x174d7b2cf54c255d) {
              thunk_FUN_1801f42e0(local_98,local_a0);
              local_150 = 0x9e5e7c8444769b7a;
              local_158 = 0xbcff8fe38a11a3ee;
            }
          }
          if (-0x62c07fdd78cb70b3 < (longlong)uVar6) break;
          if (uVar6 == 0x8c3c92779bb9bff7) {
            local_b8 = *local_120;
            local_c0 = local_e0 + local_130;
            local_150 = 0xd9a38a9ef90744ed;
            if (local_c0 <= local_108) {
              local_150 = 0x6901c80d3890a2ca;
            }
            local_158 = 0x155e63c0b4aeb2ec;
            local_50 = local_b8;
          }
          else if (uVar6 == 0x940ca3d91b90d9b4) {
            local_c0 = local_e0 + local_100;
            local_b8 = local_48;
            local_150 = 0x70354b137ba928b4;
            local_158 = 0xc6ae0def7973892;
          }
        }
        if (uVar6 != 0xb9f13537922224d4) break;
        local_140 = 0xf;
        local_f0 = 0x20;
        local_138 = 0;
        local_130 = 1;
        local_f8 = -8;
        local_100 = 0x28;
        local_159 = 0;
        local_108 = 0xfff;
        local_144 = 0;
        local_e8 = param_3 - 1;
        local_118 = (longlong)local_e8 >> 1;
        local_150 = 0xfd45289970f2c0ed;
        if ((longlong)local_118 <= (longlong)param_2) {
          local_150 = 0x7a356816a31a2cb3;
        }
        local_158 = 0x2ec642959e05e5e8;
        local_b0 = param_2;
        local_a8 = param_2;
      }
      if (uVar6 != 0xccfde95e4da9f601) break;
      local_48 = *(longlong *)(local_50 + -8);
      local_150 = 0x864a3f8d7808b70f;
      if (local_f0 <= (ulonglong)((local_50 + local_f8) - local_48)) {
        local_150 = 0x8f791c76e4ace1f5;
      }
      local_158 = 0x12469c5463986ebb;
    }
  } while (uVar6 != 0x9d3f802287348f4e);
LAB_1800770d3:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_144,local_138);
}



void FUN_180077120(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *_Buf1;
  ulonglong uVar7;
  longlong *_Buf2;
  ulonglong _Size;
  undefined1 local_159;
  ulonglong local_158;
  ulonglong local_150;
  uint local_144;
  ulonglong local_140;
  uintptr_t local_138;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  longlong local_70;
  ulonglong *local_68;
  longlong local_60;
  uintptr_t *local_58;
  ulonglong *local_50;
  ulonglong *local_48;

  local_150 = 0xab7b534fc65ffad9;
  local_158 = 0x1230b8053045785d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar7 = local_150 ^ 0x41fdc79bbfc576fa;
              uVar5 = local_150 ^ local_158;
              local_158 = local_158 ^ 0x41fdc79bbfc576fa;
              local_150 = uVar7;
              if (-0x2ede6195ebf3cefb < (longlong)uVar5) break;
              if ((longlong)uVar5 < -0x4d550b2e6f5c0d79) {
                if ((longlong)uVar5 < -0x631500d10d9c9abd) {
                  if (uVar5 == 0x887729fe645ef3a1) {
                    thunk_FUN_1801f42e0(local_b8,local_c0);
                    local_150 = 0xd26caa6af5291a7f;
                    local_158 = 0x34d3400e1252b79;
                  }
                  else if (uVar5 == 0x9ca67e062dd2ef58) {
                    thunk_FUN_1801f42e0(local_a8,local_b0);
                    local_150 = 0xc8c6f55527aaaf62;
                    local_158 = 0x29a1d6ca42caeabc;
                  }
                }
                else if (uVar5 == 0x9ceaff2ef2636543) {
                  local_120 = (longlong *)(local_108 * 0x20 + param_1);
                  local_150 = 0x491aeb59b21f2358;
                  if (local_120 != param_4) {
                    local_150 = 0x92f97b51b47fa9ce;
                  }
                  local_158 = 0x24e36fa09f2ab205;
                }
                else if (uVar5 == 0xafc1a58432f12227) {
                  local_150 = 0x9eee6a5b76188c6d;
                  if (local_d8 <= param_3) {
                    local_150 = 0xbb2b8f03efce04af;
                  }
                  local_158 = 0x27c1702d1dad61ec;
                  local_108 = local_d8;
                  local_a0 = local_d8;
                }
              }
              else if ((longlong)uVar5 < -0x49e5eb0ed4aae435) {
                if (uVar5 == 0xb2aaf4d190a3f287) {
                  local_b0 = local_c8 + local_f8;
                  local_150 = 0x4161de2a28df5ac5;
                  local_158 = 0xddc7a02c050db59d;
                  local_a8 = local_88;
                }
                else if (uVar5 == 0xb5eb973038a7c8e0) {
                  local_b8 = *local_118;
                  local_c0 = local_e0 + local_110;
                  local_150 = 0xb152dab50c0430a3;
                  if (local_c0 <= local_100) {
                    local_150 = 0x3e65cf66c926da4;
                  }
                  local_158 = 0x8b91750808cc9e05;
                  local_70 = local_b8;
                }
              }
              else if (uVar5 == 0xb61a14f12b551bcb) {
                local_48 = (ulonglong *)(local_120 + 3);
                local_c8 = local_120[3];
                local_150 = 0xd9b394ba48188b;
                if (local_c8 <= local_140) {
                  local_150 = 0xc986501357ecf757;
                }
                local_158 = 0x28e1738c328cb289;
              }
              else if (uVar5 == 0xb92f1a766bb5ed81) {
                local_98 = local_a0;
                local_d8 = local_a0 + -1 >> ((byte)local_110 & 0x3f);
                lVar6 = local_d8 * 0x20;
                local_d0 = (longlong *)(param_1 + lVar6);
                uVar5 = *local_80;
                _Buf2 = param_4;
                if (local_140 < *local_78) {
                  _Buf2 = (longlong *)*param_4;
                }
                local_58 = (uintptr_t *)(param_1 + lVar6 + 0x10);
                uVar7 = *(ulonglong *)(param_1 + 0x10 + lVar6);
                local_50 = (ulonglong *)(param_1 + lVar6 + 0x18);
                _Buf1 = local_d0;
                if (local_140 < *(ulonglong *)(param_1 + 0x18 + lVar6)) {
                  _Buf1 = *(longlong **)(param_1 + lVar6);
                }
                _Size = uVar7;
                if (uVar5 < uVar7) {
                  _Size = uVar5;
                }
                uVar4 = memcmp(_Buf1,_Buf2,_Size);
                bVar3 = uVar7 < uVar5;
                if (uVar4 != local_144) {
                  bVar3 = (int)uVar4 < (int)local_144;
                }
                local_150 = 0xd8ab8e18524cd021;
                if (!bVar3) {
                  local_150 = 0x9192cf2ce92743e5;
                }
                local_158 = 0xd7830021b4426a6;
                local_108 = local_a0;
              }
              else if (uVar5 == 0xb94beb4af61a8284) {
                local_140 = 0xf;
                local_e8 = 0x20;
                local_138 = 0;
                local_110 = 1;
                local_f0 = -8;
                local_f8 = 0x28;
                local_159 = 0;
                local_100 = 0xfff;
                local_150 = 0xd6b5fd0e1275eadf;
                if (param_3 < param_2) {
                  local_150 = 0x42f31b8cb88524cc;
                }
                local_144 = 0;
                local_158 = 0x4a5f0220e0168f9c;
                local_108 = param_2;
              }
            }
            if ((longlong)uVar5 < 0x2838c01888c4aa02) break;
            if ((longlong)uVar5 < 0x6c64c303cda20aaa) {
              if (uVar5 == 0x2838c01888c4aa02) {
                local_a8 = *local_120;
                local_b0 = local_c8 + local_110;
                local_150 = 0x10ad0f5c2914d836;
                if (local_b0 <= local_100) {
                  local_150 = 0xe06fb259c9643dc4;
                }
                local_158 = 0x7cc9cc5fe4b6d29c;
                local_60 = local_a8;
              }
              else if (uVar5 == 0x3ac3afbd04c8aea6) {
                local_90 = *(longlong *)(local_70 + -8);
                local_150 = 0xbbf5895d963246b;
                if (local_e8 <= (ulonglong)((local_70 + local_f0) - local_90)) {
                  local_150 = 0xeae8105e80da2182;
                }
                local_158 = 0x4c104bc00aa14c9;
              }
              else if (uVar5 == 0x56436e4d369cdda5) goto LAB_180077bc1;
            }
            else if (uVar5 == 0x6c64c303cda20aaa) {
              local_88 = *(longlong *)(local_60 + -8);
              local_150 = 0x29406ce7a61380aa;
              if (local_e8 <= (ulonglong)((local_60 + local_f0) - local_88)) {
                local_150 = 0xcda9f67b002caf88;
              }
              local_158 = 0x9bea983636b0722d;
            }
            else if (uVar5 == 0x7faeba45cf82faae) {
              local_68 = (ulonglong *)(local_118 + 3);
              local_e0 = local_118[3];
              local_150 = 0x12d3cc58f0a5fa26;
              if (local_e0 <= local_140) {
                local_150 = 0x7619c502dc0e03c0;
              }
              local_158 = 0xa7385b68c80232c6;
            }
            else if (uVar5 == 0x6df984f92d35915d) {
              return;
            }
          }
          if (-0x11d6eb1d7f8fcab6 < (longlong)uVar5) break;
          if (uVar5 == 0xd1219e6a140c3106) {
            local_118[2] = local_138;
            *local_68 = local_140;
            *(undefined1 *)local_118 = local_159;
            lVar6 = *local_d0;
            lVar1 = local_d0[1];
            lVar2 = local_d0[3];
            local_118[2] = local_d0[2];
            local_118[3] = lVar2;
            *local_118 = lVar6;
            local_118[1] = lVar1;
            *local_58 = local_138;
            *local_50 = local_140;
            *(undefined1 *)local_d0 = local_159;
            local_150 = 0x48a4dcd96f00aad2;
            local_158 = 0xe765795d5df188f5;
          }
          else if (uVar5 == 0xd5d3be1a4908f687) {
            local_118 = (longlong *)(local_98 * 0x20 + param_1);
            local_150 = 0x617e53d9117e6db2;
            if (local_98 != local_d8) {
              local_150 = 0xb1114c18ec0db53b;
            }
            local_158 = 0xcebff65d238f4f95;
          }
          else if (uVar5 == 0xe167239f656045de) {
            local_120[2] = local_138;
            *local_48 = local_140;
            *(undefined1 *)local_120 = local_159;
            lVar6 = *param_4;
            lVar1 = param_4[1];
            lVar2 = param_4[3];
            local_120[2] = param_4[2];
            local_120[3] = lVar2;
            *local_120 = lVar6;
            local_120[1] = lVar1;
            param_4[2] = local_138;
            param_4[3] = local_140;
            *(undefined1 *)param_4 = local_159;
            local_150 = 0x7728005852c768f3;
            local_158 = 0x1ad184a17ff2f9ae;
          }
        }
        if (uVar5 != 0x8ac19ac5893ab50) break;
        local_80 = (ulonglong *)(param_4 + 2);
        local_78 = (ulonglong *)(param_4 + 3);
        local_150 = 0x14be173f6c368ae9;
        local_158 = 0xad910d4907836768;
        local_a0 = param_2;
      }
      if (uVar5 != 0xf7e5c29d9c930a2) break;
      local_c0 = local_e0 + local_f8;
      local_b8 = local_90;
      local_150 = 0xfb518354358c9ea;
      local_158 = 0x87c231cb27063a4b;
    }
  } while (uVar5 != 0xee2914e28070354b);
LAB_180077bc1:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_144,local_138);
}



void FUN_180077be0(undefined4 *param_1,longlong param_2)

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
  ulonglong uVar10;
  longlong lVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  ulonglong local_28;
  uintptr_t local_20;
  undefined1 local_11;
  undefined8 local_10;

  local_10 = 0xfffffffffffffffe;
  local_28 = 0xf;
  local_30 = 0x20;
  local_20 = 0;
  local_11 = 0;
  if (0x20 < param_2 - (longlong)param_1) {
    local_58 = *(undefined4 *)(param_2 + -0x20);
    uStack_54 = *(undefined4 *)(param_2 + -0x1c);
    uStack_50 = *(undefined4 *)(param_2 + -0x18);
    uStack_4c = *(undefined4 *)(param_2 + -0x14);
    local_48 = *(undefined4 *)(param_2 + -0x10);
    uStack_44 = *(undefined4 *)(param_2 + -0xc);
    uStack_40 = *(undefined4 *)(param_2 + -8);
    uStack_3c = *(undefined4 *)(param_2 + -4);
    *(undefined8 *)(param_2 + -0x10) = 0;
    *(undefined8 *)(param_2 + -8) = 0xf;
    *(undefined1 *)(param_2 + -0x20) = 0;
    lVar11 = (param_2 + -0x20) - (longlong)param_1;
    if (lVar11 != 0) {
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(undefined8 *)(param_2 + -8) = 0xf;
      *(undefined1 *)(param_2 + -0x20) = 0;
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      *(undefined4 *)(param_2 + -0x10) = param_1[4];
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    FUN_180076660(param_1,0,lVar11 >> 5,&local_58);
    uVar9 = CONCAT44(uStack_3c,uStack_40);
    if (local_28 < uVar9) {
      lVar8 = CONCAT44(uStack_54,local_58);
      uVar10 = uVar9 + 1;
      lVar11 = lVar8;
      if (0xfff < uVar10) {
        lVar11 = *(longlong *)(lVar8 + -8);
        if (local_30 <= (lVar8 - lVar11) - 8U) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_20);
        }
        uVar10 = uVar9 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar11,uVar10);
    }
  }
  return;
}



void Unwind_180077d90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void FUN_180077dc0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;

  local_70 = 0x55dfca4e985d56fa;
  local_78 = 0xd773825e33514490;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_70 ^ local_78;
        local_78 = local_78 ^ 0xcb2def07f1536b05;
        if (0x74f0fb158619ab8c < (longlong)uVar2) break;
        if (uVar2 == 0x82ac4810ab0c126a) {
          local_58 = 0;
          local_60 = 1;
          local_48 = param_3 - param_1 >> 5;
          local_70 = 0x91d37e861bfe0a94;
          if (0x28 < local_48) {
            local_70 = 0x125559ad4aed13ad;
          }
          local_78 = 0x692bc705f210a52b;
        }
        else {
          local_70 = local_70 ^ 0xcb2def07f1536b05;
          if (uVar2 == 0xf8f8b983e9eeafbf) {
            FUN_180078040(param_1,param_2,param_3);
            local_70 = 0xffc9768f6df07f77;
            local_78 = 0x8b398d9aebe9d4fa;
          }
        }
      }
      if (uVar2 != 0x7b7e9ea8b8fdb686) break;
      uVar2 = (ulonglong)(local_48 + local_60) >> 3;
      lVar3 = uVar2 << ((byte)local_60 & 0x3f);
      lVar1 = param_1 + uVar2 * 0x20;
      FUN_180078040(param_1,lVar1,lVar3 * 0x20 + param_1);
      lVar4 = (local_58 - uVar2) * 0x20;
      FUN_180078040(param_2 + lVar4,param_2,uVar2 * 0x20 + param_2);
      lVar4 = lVar4 + param_3;
      FUN_180078040((local_58 - lVar3) * 0x20 + param_3,lVar4,param_3);
      FUN_180078040(lVar1,param_2,lVar4);
      local_70 = 0x2f3655065b07784a;
      local_78 = 0x5bc6ae13dd1ed3c7;
    }
    local_70 = local_70 ^ 0xcb2def07f1536b05;
  } while (uVar2 != 0x74f0fb158619ab8d);
  return;
}



void FUN_180078040(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *_Buf1;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_128 [47];
  char local_f9;
  ulonglong local_f8;
  ulonglong local_f0;
  int local_e4;
  ulonglong local_e0;
  int local_d4;
  ulonglong *local_d0;
  ulonglong *local_c8;
  undefined8 *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong *local_90;
  ulonglong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  local_f0 = 0x29cf0f878bf7a033;
  local_f8 = 0x7df5a36aaf35fc1e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_98;
          uVar2 = local_b0;
          uVar10 = local_f0 ^ 0x1a299194594030fe;
          uVar8 = local_f0 ^ local_f8;
          local_f8 = local_f8 ^ 0x1a299194594030fe;
          local_f0 = uVar10;
          if (0x543aaced24c25c2c < (longlong)uVar8) break;
          if ((longlong)uVar8 < 0x29464af9e8abf66c) {
            if (uVar8 == 0xc3ba9c53727d7d6f) {
              local_80 = local_98;
              local_78 = local_a0;
              local_70 = local_a8;
              puVar11 = local_a8;
              if (local_a0 <= local_e0) {
                puVar11 = param_2;
              }
              uVar2 = param_3[2];
              puVar9 = param_3;
              if (local_e0 < (ulonglong)param_3[3]) {
                puVar9 = (undefined8 *)*param_3;
              }
              uVar8 = uVar2;
              if (local_98 < uVar2) {
                uVar8 = local_98;
              }
              iVar7 = memcmp(puVar9,puVar11,uVar8);
              bVar6 = uVar2 < uVar1;
              if (iVar7 != local_e4) {
                bVar6 = iVar7 < local_e4;
              }
              local_f0 = 0xfca62fe2576022a0;
              if (!bVar6) {
                local_f0 = 0xbd90154d7d63d51d;
              }
              local_f8 = 0xc884e7be38d8355e;
            }
            else if (uVar8 == 0x8ced7225c1b632e) {
              uVar1 = *local_90;
              puVar11 = param_1;
              if (local_e0 < *local_88) {
                puVar11 = (undefined8 *)*param_1;
              }
              puVar9 = param_2;
              if (local_e0 < local_b8) {
                puVar9 = local_c0;
              }
              uVar8 = local_b0;
              if (uVar1 < local_b0) {
                uVar8 = uVar1;
              }
              iVar7 = memcmp(puVar9,puVar11,uVar8);
              bVar6 = uVar1 <= uVar2;
              if (iVar7 != local_e4) {
                bVar6 = local_d4 < iVar7;
              }
              local_f0 = 0x50eb46c702e74775;
              if (!bVar6) {
                local_f0 = 0xcb9fecdaff7515a;
              }
              if (local_f9 != '\0') {
                local_f0 = 0x50eb46c702e74775;
              }
              local_f8 = 0x25ffb434475ca736;
            }
          }
          else if (uVar8 == 0x29464af9e8abf66c) {
            local_68 = *param_2;
            uStack_60 = param_2[1];
            local_58 = param_2[2];
            uStack_50 = param_2[3];
            uVar3 = *param_1;
            uVar4 = param_1[1];
            uVar5 = param_1[3];
            param_2[2] = param_1[2];
            param_2[3] = uVar5;
            *param_2 = uVar3;
            param_2[1] = uVar4;
            param_1[2] = local_58;
            param_1[3] = uStack_50;
            *param_1 = local_68;
            param_1[1] = uStack_60;
            local_f0 = 0xabf44431aa527f9a;
            local_f8 = 0xdee0b6c2efe99fd9;
          }
          else if (uVar8 == 0x3422c85c6fb817fe) {
            local_f0 = 0x639528feff12a3ba;
            if (param_3 == param_2) {
              local_f0 = 0x3632341dae1eb2f0;
            }
            local_f8 = 0x3efce33ff205d1de;
            local_c0 = local_70;
            local_b8 = local_78;
            local_b0 = local_80;
          }
        }
        if (0x6c23bd50826943b7 < (longlong)uVar8) break;
        if (uVar8 == 0x543aaced24c25c2d) {
          local_e0 = 0xf;
          local_d4 = -1;
          local_e4 = 0;
          local_90 = param_1 + 2;
          uVar2 = param_1[2];
          local_88 = param_1 + 3;
          puVar11 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar11 = (undefined8 *)*param_1;
          }
          local_d0 = param_2 + 2;
          uVar1 = param_2[2];
          local_c8 = param_2 + 3;
          uVar8 = param_2[3];
          puVar9 = (undefined8 *)*param_2;
          _Buf1 = puVar9;
          if (uVar8 < 0x10) {
            _Buf1 = param_2;
          }
          uVar10 = uVar1;
          if (uVar2 < uVar1) {
            uVar10 = uVar2;
          }
          iVar7 = memcmp(_Buf1,puVar11,uVar10);
          bVar6 = uVar2 <= uVar1;
          if (iVar7 != local_e4) {
            bVar6 = local_d4 < iVar7;
          }
          local_f0 = 0x7e99e5eb353ce75e;
          if (!bVar6) {
            local_f0 = 0xd100c4e8c528d989;
          }
          local_f9 = param_2 == param_1;
          if ((bool)local_f9) {
            local_f0 = 0x7e99e5eb353ce75e;
          }
          local_f8 = 0xbd2379b847419a31;
          local_a8 = puVar9;
          local_a0 = uVar8;
          local_98 = uVar1;
        }
        else if (uVar8 == 0x5d69cbc10d177264) {
          local_68 = *param_3;
          uStack_60 = param_3[1];
          local_58 = param_3[2];
          uStack_50 = param_3[3];
          uVar3 = *param_2;
          uVar4 = param_2[1];
          uVar5 = param_2[3];
          param_3[2] = param_2[2];
          param_3[3] = uVar5;
          *param_3 = uVar3;
          param_3[1] = uVar4;
          param_2[2] = local_58;
          param_2[3] = uStack_50;
          *param_2 = local_68;
          param_2[1] = uStack_60;
          local_b0 = *local_d0;
          local_b8 = *local_c8;
          local_c0 = (undefined8 *)*param_2;
          local_f0 = 0x4dfe4a34c8691ce0;
          local_f8 = 0x45309d1694727fce;
        }
      }
      if (uVar8 != 0x6c23bd50826943b8) break;
      local_68 = *param_2;
      uStack_60 = param_2[1];
      local_58 = param_2[2];
      uStack_50 = param_2[3];
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar5;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      param_1[2] = local_58;
      param_1[3] = uStack_50;
      *param_1 = local_68;
      param_1[1] = uStack_60;
      local_f0 = 0x46241e57210443;
      local_f8 = 0xc3fcb84d255c792c;
      local_a8 = (undefined8 *)*param_2;
      local_a0 = *local_c8;
      local_98 = *local_d0;
    }
  } while (uVar8 != 0x7514f2f345bbe043);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_128)) {
  }
  return;
}



void FUN_180078630(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_128;
  ulonglong local_120;
  uint local_114;
  uintptr_t local_110;
  longlong *local_108;
  ulonglong local_100;
  longlong local_f8;
  undefined1 *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  ulonglong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;

  local_120 = 0xbbd354240c589945;
  local_128 = 0x8cd563da54e05076;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_120 ^ 0xd7e1019fbed5f20d;
            uVar1 = local_120 ^ local_128;
            local_128 = local_128 ^ 0xd7e1019fbed5f20d;
            local_120 = uVar2;
            if ((longlong)uVar1 < 0xca9be59db2f7482) break;
            if ((longlong)uVar1 < 0x4ae9c4e19336cf8c) {
              if (uVar1 == 0xca9be59db2f7482) {
                local_c0 = *local_108;
                local_c8 = local_e0 + 1;
                local_120 = 0xff361814067c22d5;
                if (local_c8 <= local_100) {
                  local_120 = 0x52b6fe7aeb7b8bac;
                }
                local_128 = 0xfb06212a7c523e3b;
                local_78 = local_c0;
              }
              else if (uVar1 == 0x2e9130f10a039f76) {
                local_70 = param_1 + 2;
                local_68 = (longlong *)param_1[1];
                local_120 = 0x7a79cc84b37ab820;
                if (local_a8 != local_68) {
                  local_120 = 0x2042e4b975fa7f4e;
                }
                local_128 = 0x79bbbb0e3ee7febf;
                local_d8 = local_a8;
                local_d0 = local_a8;
              }
              else if (uVar1 == 0x370637fe58b8c933) {
                local_e8 = 0xf;
                local_f0 = (undefined1 *)0x20;
                local_110 = 0;
                local_f8 = -8;
                local_100 = 0xfff;
                local_114 = 0;
                local_a8 = (longlong *)*param_1;
                local_120 = 0x3f8b5b64269639f5;
                if (local_a8 != (longlong *)0x0) {
                  local_120 = 0x7003d04a8b98f10a;
                }
                local_128 = 0x5e92e0bb819b6e7c;
              }
            }
            else if ((longlong)uVar1 < 0x6119bbdfa70d5789) {
              if (uVar1 == 0x4ae9c4e19336cf8c) {
                thunk_FUN_1801f42e0(local_b0,local_b8);
                *param_1 = 0;
                param_1[1] = 0;
                param_1[2] = 0;
                local_120 = 0x794d96ec8dd0037a;
                local_128 = 0x18542d332add54f3;
              }
              else if (uVar1 == 0x59f95fb74b1d81f1) {
                local_108 = local_d0;
                local_90 = (ulonglong *)(local_d0 + 3);
                local_e0 = local_d0[3];
                local_120 = 0xdaf9463ca9fc8a0b;
                if (local_e0 <= local_e8) {
                  local_120 = 0xc6b565d35bb10c8;
                }
                local_128 = 0xd650f86572d3fe89;
              }
            }
            else if (uVar1 == 0x6373a684a8e4448f) {
              local_c8 = local_e0 + 0x28;
              local_c0 = local_88;
              local_120 = 0xd0b8626e3d496d31;
              local_128 = 0x7908bd3eaa60d8a6;
            }
            else if (uVar1 == 0x6119bbdfa70d5789) {
              return;
            }
          }
          if ((longlong)uVar1 < -0x20a16ae6880890b0) break;
          if ((longlong)uVar1 < 0x430393e7a2e1cee) {
            if (uVar1 == 0xdf5e951977f76f50) {
              local_80 = (longlong *)local_60[-1];
              local_120 = 0x77be3e3875727c33;
              if (local_f0 <= (undefined1 *)((longlong)local_a0 + (local_f8 - (longlong)local_80))) {
                local_120 = 0xfbb896595b5f154e;
              }
              local_128 = 0x7e9234d0ae257c9d;
            }
            else if (uVar1 == 0x3c2778a8d9d469f) {
              local_b0 = local_d8;
              local_b8 = *local_70 - (longlong)local_d8;
              local_120 = 0x829bf31d598ef440;
              if (local_b8 <= local_100) {
                local_120 = 0x172ca2e5bd4f549c;
              }
              local_128 = 0x5dc566042e799b10;
              local_a0 = local_b0;
              local_98 = local_b8;
              local_60 = local_b0;
            }
          }
          else if (uVar1 == 0x430393e7a2e1cee) {
            local_88 = *(longlong *)(local_78 + -8);
            local_120 = 0x604fdbda54abb787;
            if (local_f0 <= (undefined1 *)((local_78 + local_f8) - local_88)) {
              local_120 = 0xdf6ff985344b7418;
            }
            local_128 = 0x33c7d5efc4ff308;
          }
          else if (uVar1 == 0x92c0ae8db5700ae) {
            local_b8 = local_98 + 0x27;
            local_120 = 0xb6e91d55c7b1e6b7;
            local_128 = 0xfc00d9b45487293b;
            local_b0 = local_80;
          }
        }
        if ((longlong)uVar1 < -0x3ca1cc7d3d84aa1d) break;
        if (uVar1 == 0xc35e3382c27b55e3) {
          local_d8 = (longlong *)*param_1;
          local_120 = 0xab6f9e1972115b26;
          local_128 = 0xa8ade993ff8c1db9;
        }
        else if (uVar1 == 0xda3bae384768ee41) {
          local_108[2] = local_110;
          *local_90 = local_e8;
          *(undefined1 *)local_108 = 0;
          local_d0 = local_108 + 4;
          local_120 = 0xa03cee9c09c393a2;
          if (local_d0 != local_68) {
            local_120 = 0x3a9b82a980a547b0;
          }
          local_128 = 0x6362dd1ecbb8c641;
        }
        else if (uVar1 == 0xdc5384dbc8048710) goto LAB_180078d1b;
      }
      if (uVar1 != 0xa9b0df509729b597) break;
      thunk_FUN_1801f42e0(local_c0,local_c8);
      local_120 = 0x28d4566c975015c4;
      local_128 = 0xf2eff854d038fb85;
    }
  } while (uVar1 != 0x852aa289f57a69d3);
LAB_180078d1b:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_114,local_110);
}



void FUN_180078d60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;

  uVar5 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_18020e7f0;
  if ((param_1[0x10] == 0) || (*(undefined8 **)param_1[3] != param_1 + 0xe)) {
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x12);
    lVar3 = param_1[0x11];
    *(longlong *)param_1[3] = lVar3;
    *(longlong *)param_1[7] = lVar3;
    *(int *)param_1[10] = iVar2 - (int)lVar3;
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
  }
  if (cVar1 == '\x01') {
    FUN_180078e80(param_1);
  }
  *param_1 = &PTR_FUN_18020e870;
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    if ((*(longlong **)(lVar3 + 8) != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(**(longlong **)(lVar3 + 8) + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1,(undefined8 *)*puVar4,param_4,uVar5);
    }
    thunk_FUN_1801f42e0(lVar3,0x10);
    return;
  }
  return;
}



void Unwind_180078e40(void)

{
  Unwind_1801dd394();
}



longlong * FUN_180078e80(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  char local_c9;
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  char *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_f8;
  local_c0 = 0xbf6b23f3221914be;
  local_c8 = 0xcc2282e8b6a690cf;
LAB_180078f50:
  while( true ) {
    plVar6 = local_a8;
    uVar4 = local_c0 ^ 0xb84039ac6e7c3ded;
    uVar2 = local_c0 ^ local_c8;
    local_c8 = local_c8 ^ 0xb84039ac6e7c3ded;
    local_c0 = uVar4;
    if ((longlong)uVar2 < -0x1e6846f17478e8e5) break;
    if ((longlong)uVar2 < 0x4e3a8ceb17fb7142) {
      if ((longlong)uVar2 < 0x220ccde3ac4e1406) {
        if (uVar2 == 0xe197b90e8b87171b) {
          local_d8 = &local_70;
          local_b4 = (**(code **)(*(longlong *)*local_80 + 0x40))
                               ((longlong *)*local_80,(longlong)param_1 + 0x74,local_68,&local_48);
          local_c0 = 0x46f86a49feb2e96b;
          local_c8 = 0xffc115a7a3266ed5;
        }
        else if (uVar2 == 0xecea98a926117020) {
          local_c0 = 0x64ac47cddb24e457;
          if (local_b4 == 1) {
            local_c0 = 0x1583bc7d38621f6e;
          }
          local_c8 = 0x4f6855ed772cd8b5;
        }
      }
      else if (uVar2 == 0x220ccde3ac4e1406) {
        local_c0 = 0x1344950f5237059e;
        if (local_b4 == 3) {
          local_c0 = 0xb8d79e0619bd0ddc;
        }
        local_c8 = 0x3880872ffe3f397c;
      }
      else if (uVar2 == 0x2bc41220ac083ce2) {
        local_c0 = 0x6b9a2da36ee556a3;
        local_c8 = 0xdd3c9663a3f01104;
      }
      else if (uVar2 == 0x3add6c004d0bded4) {
        local_80 = param_1 + 0xd;
        local_c0 = 0x2ce57ae297618350;
        if (param_1[0xd] == 0) {
          local_c0 = 0x2935a1622650b7df;
        }
        local_c8 = 0xaf5ee689210a9c70;
      }
    }
    else if ((longlong)uVar2 < 0x5ef3de22954d4c6b) {
      if (uVar2 == 0x4e3a8ceb17fb7142) {
        lVar5 = param_1[0x12];
        lVar3 = param_1[0x11];
        *local_88 = lVar3;
        *(longlong *)param_1[7] = lVar3;
        *(int *)param_1[10] = (int)lVar5 - (int)lVar3;
        local_c0 = 0xa0dbb7c7f34c05ee;
        local_c8 = 0x9a06dbc7be47db3a;
      }
      else if (uVar2 == 0x54360862c86f0c4e) {
        lVar5 = (longlong)local_78 - (longlong)local_68;
        lVar3 = FUN_1801e1ed4(local_68,1,lVar5,*local_a0);
        local_c0 = 0x64b51739b75b16fd;
        if (lVar5 == lVar3) {
          local_c0 = 0x4415cb7125a204ad;
        }
        local_c8 = 0xd213acf97a4e515a;
      }
      else if (uVar2 == 0x5aebe9904f4ec7db) {
        local_78 = local_70;
        local_c0 = 0xf50351d3b21d0332;
        if (local_70 == local_68) {
          local_c0 = 0x37333e39259e5a8b;
        }
        local_c8 = 0xa13559b17a720f7c;
      }
    }
    else if (uVar2 == 0x7349a11b94bf8471) {
      local_ac = -1;
      local_c9 = '\0';
      local_b0 = 0;
      local_a0 = param_1 + 0x10;
      local_c0 = 0xb90e7d7235d16ba4;
      if (param_1[0x10] == 0) {
        local_c0 = 0x2ab5c7347065c185;
      }
      local_c8 = 0x74461916e5288dee;
      local_90 = (longlong *)0x0;
    }
    else {
      if (uVar2 == 0x7f81d9e72c9e0b3a) {
        iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_ac);
        local_c0 = 0x38c557f179fd04fe;
        if (iVar1 == local_ac) {
          local_c0 = 0x7f31edf74d13a296;
        }
        local_c8 = 0xd952eefff27a13e5;
        goto LAB_180078f3d;
      }
      if (uVar2 == 0x5ef3de22954d4c6b) {
        *(char *)((longlong)param_1 + 0x7c) = local_c9;
        *(char *)((longlong)param_1 + 0x71) = local_c9;
        param_1[3] = (longlong)(param_1 + 1);
        param_1[4] = (longlong)(param_1 + 2);
        param_1[7] = (longlong)(param_1 + 5);
        param_1[8] = (longlong)(param_1 + 6);
        param_1[10] = (longlong)(param_1 + 9);
        param_1[0xb] = (longlong)param_1 + 0x4c;
        *(int *)((longlong)param_1 + 0x4c) = local_b0;
        *(int *)(param_1 + 9) = local_b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *local_a0 = 0;
        *(undefined8 *)((longlong)param_1 + 0x74) = DAT_1802a1e70;
        param_1[0xd] = 0;
        if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_f8)) {
          return local_90;
        }
      }
    }
  }
  if ((longlong)uVar2 < -0x599cfcf740964e8d) {
    if ((longlong)uVar2 < -0x7994b814f8a5d451) {
      if (uVar2 == 0x80571929e78234a0) {
        *local_98 = local_c9;
        local_c0 = 0x2950c9cf627b977a;
        local_c8 = 0xaf3b8e246521bcd5;
      }
      else if (uVar2 == 0x83bb9c6bb66b1f20) {
        local_98 = (char *)((longlong)param_1 + 0x71);
        local_c0 = 0x260b78692b64f370;
        if (*(char *)((longlong)param_1 + 0x71) != '\0') {
          local_c0 = 0xdfe1e66500a0d3e5;
        }
        local_c8 = 0xa0603f822c3ed8df;
      }
      goto LAB_180078f50;
    }
    if (uVar2 == 0x866b47eb075a2baf) {
      local_c0 = 0x4424f0d683ccd3f;
      local_c8 = 0xa2214c05d7557c4c;
      local_a8 = param_1;
      goto LAB_180078f50;
    }
    if (uVar2 != 0x960667885fec55f7) {
      if (uVar2 == 0x9ac1a339bc429f54) {
        local_c0 = 0xad18828e7a3bd062;
        if (local_b4 < 3) {
          local_c0 = 0x63fed7c4f064b444;
        }
        local_c8 = 0x8f144f6dd675c464;
      }
      goto LAB_180078f50;
    }
    local_c0 = 0xbffcf0dea9d9db69;
    if (*local_98 != '\0') {
      local_c0 = 0x9ff4b43d11ea41b5;
    }
    local_c8 = 0x3997b735ae83f0c6;
  }
  else {
    if (-0x32b79b9b2f0619b7 < (longlong)uVar2) {
      if (uVar2 == 0xcd486464d0f9e64a) {
        local_88 = (longlong *)param_1[3];
        local_c0 = 0xf2b7c2e8ab7bb633;
        if ((longlong *)*local_88 == param_1 + 0xe) {
          local_c0 = 0x86502203f18b19a5;
        }
        local_c8 = 0xc86aaee8e67068e7;
      }
      else if (uVar2 == 0xd5a989a3894143c5) {
        local_c0 = 0xf7de4ea2c2508ab3;
        if (local_b4 == 0) {
          local_c0 = 0xbb3d9abacc2b128;
        }
        local_c8 = 0xdc1a5c826e58b651;
      }
      else if (uVar2 == 0xd7a98529c29a0779) {
        *local_98 = local_c9;
        local_c0 = 0x23762077df60b003;
        local_c8 = 0x799dc9e7902e77d8;
      }
      goto LAB_180078f50;
    }
    if (uVar2 == 0xa6630308bf69b173) {
      iVar1 = FUN_1801e209c(*local_a0);
      if (iVar1 != local_b0) {
        plVar6 = (longlong *)0x0;
      }
      local_c0 = 0x1e43589a127f4fc9;
      local_c8 = 0x40b086b8873203a2;
      local_90 = plVar6;
      goto LAB_180078f50;
    }
    if (uVar2 != 0xb6a6bbc0cd1547a7) {
      if (uVar2 == 0xb9397fee5d9487be) {
        local_c0 = 0x87e1868bdc30bf85;
        if (local_b4 < 1) {
          local_c0 = 0xc889ac11e9336314;
        }
        local_c8 = 0x1d2025b2607220d1;
      }
      goto LAB_180078f50;
    }
    local_c0 = 0xaf1cecddd5619ca7;
    local_c8 = 0x97fefd56a082dd4;
  }
LAB_180078f3d:
  local_a8 = (longlong *)0x0;
  goto LAB_180078f50;
}



void FUN_180079730(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x894afd13742bc7a4;
  local_58 = 0xccaf24e1be6c2325;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x85bb18cad5d79578;
        if (uVar1 != 0x937c2ebed9cc77e9) break;
        FUN_1801e230c(local_48);
        local_50 = 0x877bf81070410a06;
        local_58 = 0xffb9d751aa9b8b14;
      }
      if (uVar1 != 0x45e5d9f2ca47e481) break;
      local_48 = *(longlong *)(param_1 + 0x80);
      local_50 = 0xcdc4fcb20a3fb3de;
      if (local_48 == 0) {
        local_50 = 0x267afd4d09294525;
      }
      local_58 = 0x5eb8d20cd3f3c437;
    }
    local_50 = local_50 ^ 0x85bb18cad5d79578;
  } while (uVar1 != 0x78c22f41dada8112);
  return;
}



void FUN_180079850(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xb6b0e2eb2df64014;
  local_58 = 0x32e9eeefde188bb5;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xf4e9519739ee34b0;
        if (uVar1 != 0x84590c04f3eecba1) break;
        local_48 = *(longlong *)(param_1 + 0x80);
        local_50 = 0xdc4d5d0db26c382d;
        if (local_48 == 0) {
          local_50 = 0xe1924c52b8cafd8a;
        }
        local_58 = 0xcafa1c56b57ff1e7;
      }
      if (uVar1 != 0x16b7415b0713c9ca) break;
      FUN_1801e2318(local_48);
      local_50 = 0x517dfe873898419c;
      local_58 = 0x7a15ae83352d4df1;
    }
    local_50 = local_50 ^ 0xf4e9519739ee34b0;
  } while (uVar1 != 0x2b6850040db50c6d);
  return;
}



int FUN_180079970(longlong param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  char **local_108;
  undefined1 *local_100;
  ulonglong *local_f8;
  undefined1 **local_f0;
  ulonglong local_e0;
  ulonglong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined8 *local_b8;
  int local_ac;
  undefined1 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  int *local_90;
  longlong *local_88;
  undefined1 *local_80;
  char *local_78;
  char local_69;
  undefined1 local_68 [32];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  local_d8 = 0x2ab11d50c8d9cb9f;
  local_e0 = 0x85171b60db46a903;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_d8 ^ 0x1a9697fb22ff162b;
              uVar3 = local_d8 ^ local_e0;
              local_e0 = local_e0 ^ 0x1a9697fb22ff162b;
              local_d8 = uVar5;
              if ((longlong)uVar3 < -0x128fc42570c13b53) break;
              if ((longlong)uVar3 < 0x19f830afd49a1d5b) {
                if ((longlong)uVar3 < 0x40f6f3f43623737) {
                  if (uVar3 == 0xed703bda8f3ec4ad) {
                    local_b8 = (undefined8 *)(param_1 + 0x80);
                    local_d8 = 0xb82fd8bb8b3c1b80;
                    if (*(longlong *)(param_1 + 0x80) == 0) {
                      local_d8 = 0xd6bfbaa6585d3fbc;
                    }
                    local_e0 = 0x33d0a3d1fad62c34;
                    local_cc = local_d0;
                  }
                  else if (uVar3 == 0xf83a077dafb2a8c1) {
                    *(undefined1 *)(param_1 + 0x71) = 1;
                    local_c8 = param_2;
                    if (local_78 == &local_69) {
                      local_c8 = local_d0;
                    }
                    local_d8 = 0x5be3a59fb9178cb6;
                    local_e0 = 0x5feccaa0fa75bb81;
                  }
                }
                else if (uVar3 == 0x40f6f3f43623737) {
                  local_cc = local_c8;
                  local_d8 = 0x39b2f76602922a5d;
                  local_e0 = 0xdcddee11a01939d5;
                }
                else if (uVar3 == 0xc76a84e366fced3) {
                  iVar2 = *(int *)(param_1 + 0x90);
                  lVar4 = *(longlong *)(param_1 + 0x88);
                  *local_88 = lVar4;
                  **(longlong **)(param_1 + 0x38) = lVar4;
                  **(int **)(param_1 + 0x50) = iVar2 - (int)lVar4;
                  local_d8 = 0x6a4d8416e21f53f2;
                  local_e0 = 0x73f3a6dfbe328e9d;
                }
                else if (uVar3 == 0x19be22c95c2ddd6f) {
                  local_a0 = *(longlong **)(param_1 + 0x68);
                  local_d8 = 0x3b4ac6194f4a5a5;
                  if (local_a0 == (longlong *)0x0) {
                    local_d8 = 0x796e520dde9d02ba;
                  }
                  local_e0 = 0xe8470b93eca3fd8e;
                }
              }
              else if ((longlong)uVar3 < 0x3330a12453fba037) {
                if (uVar3 == 0x19f830afd49a1d5b) {
                  iVar2 = FUN_1801e24a0((int)local_69,*local_b8);
                  local_c8 = param_2;
                  if (iVar2 == local_d0) {
                    local_c8 = local_d0;
                  }
                  local_d8 = 0x7c902a009bb62222;
                  local_e0 = 0x789f453fd8d41515;
                }
                else if (uVar3 == 0x270e021e2513c5d5) {
                  local_a8 = local_80;
                  local_d8 = 0x2322e4cb24f5c02e;
                  if (local_80 == local_68) {
                    local_d8 = 0x4a23ae2b3a629fda;
                  }
                  local_e0 = 0xb219a95695d0371b;
                }
              }
              else if (uVar3 == 0x3330a12453fba037) {
                local_d8 = 0xd07612cce6a9ce47;
                if ((int)local_c4 < 3) {
                  local_d8 = 0x2da65e03683dbc3;
                }
                local_e0 = 0x9f8929e075f5f536;
              }
              else if (uVar3 == 0x37f98438fc9d4fa2) {
                *local_90 = local_ac + local_d0;
                pcVar1 = *(char **)*local_98;
                *(char **)*local_98 = pcVar1 + 1;
                *pcVar1 = (char)param_2;
                local_d8 = 0xed46dc482e628d14;
                local_e0 = 0x829c53f8ce99e9c;
                local_cc = param_2;
              }
              else if (uVar3 == 0x4fff3b2c935c3b71) {
                local_d8 = 0x908d81ccd8aa7bec;
                if (local_c4 == 3) {
                  local_d8 = 0x638299962a4d5f38;
                }
                local_e0 = 0x7a7aa939fed74263;
              }
            }
            if (-0x5059f9cfec609d65 < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x6ed6a661cdc100cc) {
              if (uVar3 == 0x8bff7b6a71ea37b4) {
                local_88 = *(longlong **)(param_1 + 0x18);
                local_d8 = 0xec941fd676621693;
                if (*local_88 == param_1 + 0x70) {
                  local_d8 = 0xf95c95511c20052f;
                }
                local_e0 = 0xf52a3d1f2a4fcbfc;
              }
              else if (uVar3 == 0x8f3c0e673accef35) {
                local_90 = *(int **)(param_1 + 0x58);
                local_ac = *local_90;
                local_d8 = 0xb1b5d7f2a2e5e7d7;
                if (local_bc < local_ac) {
                  local_d8 = 0x6b3c6810d1466cd8;
                }
                local_e0 = 0x5cc5ec282ddb237a;
              }
            }
            else if (uVar3 == 0x9129599e323eff34) {
              iVar2 = FUN_1801e24a0((param_2 << ((byte)local_c0 & 0x1f)) >> ((byte)local_c0 & 0x1f),*local_b8);
              local_cc = param_2;
              if (iVar2 == local_d0) {
                local_cc = local_d0;
              }
              local_d8 = 0x84100d4d48425f9c;
              local_e0 = 0x617f143aeac94c14;
            }
            else if (uVar3 == 0x913b4d9db125f735) {
              lVar6 = (longlong)local_a8 - (longlong)local_68;
              lVar4 = FUN_1801e1ed4(local_68,1,lVar6,*local_b8);
              local_d8 = 0xf6d7bbbd4804603;
              if (lVar6 == lVar4) {
                local_d8 = 0xf35813f93850d9f5;
              }
              local_e0 = 0xb62148497e27134;
              local_c8 = local_d0;
            }
            else if (uVar3 == 0x9d534c0043762ef5) {
              local_d8 = 0xe1d49bdcfb9cefad;
              if (local_c4 < 2) {
                local_d8 = 0x2c2db137f8f213f7;
              }
              local_e0 = 0xb23b329dde1d622;
            }
          }
          if (-0x1a90e6885d74ec79 < (longlong)uVar3) break;
          if (uVar3 == 0xafa60630139f629c) {
            local_d0 = -1;
            local_bc = 0;
            local_c0 = 0x18;
            local_d8 = 0xc124ea905987f112;
            if (param_2 == -1) {
              local_d8 = 0xf1b2ad91c5f78df2;
            }
            local_cc = 0;
            local_e0 = 0x14ddb4e6677c9e7a;
          }
          else if (uVar3 == 0xd5f95e763efb6f68) {
            local_98 = (undefined8 *)(param_1 + 0x40);
            local_d8 = 0xa5665b454fba511a;
            if (**(longlong **)(param_1 + 0x40) == 0) {
              local_d8 = 0xc72a6ef8fa487a82;
            }
            local_e0 = 0x2a5a55227576be2f;
          }
        }
        if (uVar3 != 0xeaf728f5267d398f) break;
        local_d8 = 0xde836d4aa1e375c7;
        local_e0 = 0xda8c0275e28142f0;
        local_c8 = -1;
      }
      if (uVar3 != 0xebf3a7f27857582b) break;
      local_f0 = &local_80;
      local_f8 = &local_48;
      local_100 = local_68;
      local_108 = &local_78;
      local_69 = (char)param_2;
      local_c4 = (**(code **)(*local_a0 + 0x38))(local_a0,param_1 + 0x74,&local_69,local_68);
      local_d8 = 0x4b5834a54666710e;
      local_e0 = 0x78689581159dd139;
    }
  } while (uVar3 != 0xe56f1977a28b1388);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_128)) {
  }
  return local_cc;
}



uint FUN_18007a220(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_b8;
  ulonglong local_b0;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  longlong *local_78;
  longlong *local_68;
  FILE *local_60;
  longlong *local_58;
  undefined1 *local_50;
  longlong *local_48;

  local_b0 = 0xe2960cfcfce77835;
  local_b8 = 0xb1e6d8dcf75866f5;
LAB_18007a300:
  while( true ) {
    while( true ) {
      while( true ) {
        uVar3 = local_b0 ^ 0xda974ec8f09542ef;
        uVar2 = local_b0 ^ local_b8;
        local_b8 = local_b8 ^ 0xda974ec8f09542ef;
        local_b0 = uVar3;
        if ((longlong)uVar2 < -0x13bd7cc09df307d2) break;
        if ((longlong)uVar2 < 0x5370d4200bbf1ec0) {
          if ((longlong)uVar2 < 0x239e39b3351fd61f) {
            if (uVar2 == 0x10d2c32363c163bd) {
              *local_58 = (longlong)local_88;
              *(undefined1 **)*local_98 = local_88;
              **(int **)(param_1 + 0x50) = local_a0;
              local_b0 = 0x991967df3bfce12e;
              local_b8 = 0x755be4e059f01900;
              local_a4 = param_2;
            }
            else if (uVar2 == 0xec42833f620cf82e) {
              return local_a4;
            }
          }
          else if (uVar2 == 0x239e39b3351fd61f) {
            local_b0 = 0xdf44a5eb7119bc94;
            if ((undefined1 *)**(ulonglong **)(param_1 + 0x18) < local_90) {
              local_b0 = 0x569c2c0d2eb9dd04;
            }
            local_b8 = 0xce839c2ecaa08d7;
          }
          else if (uVar2 == 0x381eec2427e03b96) {
            local_b0 = 0x8198120927f14039;
            if (*(longlong *)(param_1 + 0x68) == 0) {
              local_b0 = 0xaf022ea51290d1a7;
            }
            local_b8 = 0x2fc55965d1a5c0bf;
            local_80 = local_90;
            local_78 = local_68;
          }
        }
        else if (uVar2 == 0x71510c82533d2646) {
          **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + local_a0;
          *(longlong *)*local_98 = *(longlong *)*local_98 + -1;
          local_b0 = 0x4b9292a2c81751bd;
          local_b8 = 0xa7d0119daa1ba993;
          local_a4 = local_9c;
        }
        else if (uVar2 == 0x5a7415cfc213d5d3) {
          local_b0 = 0x3fde326b67b2e79;
          if (param_2 == local_a8) {
            local_b0 = 0xebcfca100f591ba5;
          }
          local_b8 = 0x9a9ec6925c643de3;
          local_9c = 0;
        }
        else if (uVar2 == 0x5370d4200bbf1ec0) {
          local_a8 = 0xffffffff;
          local_a0 = 1;
          local_98 = (undefined8 *)(param_1 + 0x38);
          local_68 = *(longlong **)(param_1 + 0x38);
          local_90 = (undefined1 *)*local_68;
          local_b0 = 0xa69b4e60662ae83;
          if (local_90 == (undefined1 *)0x0) {
            local_b0 = 0xfa5b117caececcdf;
          }
          local_b8 = 0x29f78d55337d789c;
        }
      }
      if (-0x599cb2b39b019b1f < (longlong)uVar2) break;
      if (uVar2 == 0x80c777c0c3351118) {
        uVar1 = ungetc(param_2 & 0xff,local_60);
        local_b0 = 0xdc0edf1477763754;
        if (uVar1 == local_a8) {
          local_b0 = 0xa9597d07e4f65675;
        }
        local_b8 = 0x304c5c2b157acf7a;
        local_a4 = param_2;
      }
      else if (uVar2 == 0x9915212cf18c990f) {
        local_78 = (longlong *)*local_98;
        local_80 = (undefined1 *)*local_78;
        local_b0 = 0x3e68cc8d3f88741f;
        local_b8 = 0x903587e1c9dcf499;
      }
      else if (uVar2 == 0x996325b4ea1f139a) {
        local_b0 = 0x263255385240f8c9;
        if (param_2 == (byte)local_90[-1]) {
          local_b0 = 0x84cfc5939cce6acc;
        }
        local_b8 = 0xf59ec911cff34c8a;
        local_9c = param_2;
      }
    }
    if (-0x51a2b49309ab7f7b < (longlong)uVar2) break;
    if (uVar2 == 0xa6634d4c64fe64e2) {
      *(undefined1 **)(param_1 + 0x88) = local_50;
      *(longlong *)(param_1 + 0x90) = (longlong)**(int **)(param_1 + 0x50) + *local_48;
      local_b0 = 0x15695148634c15ab;
      local_b8 = 0x5bb926b008d7616;
    }
    else if (uVar2 == 0xa9ee6d176142a0c6) {
      *local_88 = (char)param_2;
      local_58 = *(longlong **)(param_1 + 0x18);
      local_50 = (undefined1 *)*local_58;
      local_b0 = 0x8c416e2786020709;
      if (local_50 == local_88) {
        local_b0 = 0x3af0e048813d0056;
      }
      local_b8 = 0x2a22236be2fc63eb;
    }
  }
  if (uVar2 != 0xae5d4b6cf6548086) goto code_r0x00018007a54e;
  local_48 = local_78;
  local_b0 = 0x50451cb47f6e1ce6;
  if (local_80 == (undefined1 *)(param_1 + 0x70)) {
    local_b0 = 0x15e9f29c7c20440e;
  }
  local_b8 = 0xf9ab71a31e2cbc20;
  local_88 = (undefined1 *)(param_1 + 0x70);
  goto LAB_18007a6d5;
code_r0x00018007a54e:
  if (uVar2 == 0xd3ac9c299db3b443) {
    local_60 = *(FILE **)(param_1 + 0x80);
    local_b0 = 0x3f4fbf167f2c42f1;
    if (local_60 == (FILE *)0x0) {
      local_b0 = 0xeb13d00d3ac08149;
    }
    if (param_2 == local_a8) {
      local_b0 = 0xeb13d00d3ac08149;
    }
    local_b8 = 0x751533258cc7967;
LAB_18007a6d5:
    local_a4 = local_a8;
  }
  goto LAB_18007a300;
}



uint FUN_18007a860(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  byte *local_48;

  local_60 = 0x9cd1853baa13ec81;
  local_68 = 0x2c56194f228355d8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x7d485c4a7891030;
          if (-0xa6e8cd7b38e4b28 < (longlong)uVar1) break;
          if (uVar1 == 0x87b1f700d42b1ca8) {
            local_60 = 0x1cdf8859d75c5d0d;
            local_68 = 0xe94efb719b2de9d4;
            local_54 = (uint)*local_48;
          }
          else if (uVar1 == 0xb0879c748890b959) {
            local_50 = 0xffffffff;
            local_48 = *(byte **)param_1[7];
            local_60 = 0xc586c5dd4371c4ce;
            if (local_48 == (byte *)0x0) {
              local_60 = 0xcd5309d1594463cf;
            }
            local_68 = 0x35e411b6d94e1574;
          }
          else {
            local_60 = local_60 ^ 0x7d485c4a7891030;
            if (uVar1 == 0xf062d46b9a3fd1ba) {
              local_60 = 0x5adc8524a42f0bfe;
              if (0 < *(int *)param_1[10]) {
                local_60 = 0x25da6a43f00e61ed;
              }
              local_68 = 0xa26b9d4324257d45;
            }
          }
        }
        if (uVar1 != 0xf8b71867800a76bb) break;
        local_4c = (**(code **)(*param_1 + 0x38))(param_1);
        local_60 = 0x1ddeabe7368e1a10;
        if (local_4c == local_50) {
          local_60 = 0xe9a9a250fb85f577;
        }
        local_68 = 0x1c38d178b7f441ae;
        local_54 = local_50;
      }
      if (uVar1 != 0x1e67a9f817a5bbe) break;
      (**(code **)(*param_1 + 0x20))(param_1,local_4c);
      local_60 = 0xeef8e5a7976d83af;
      local_68 = 0x1b69968fdb1c3776;
      local_54 = local_4c;
    }
    local_60 = local_60 ^ 0x7d485c4a7891030;
  } while (uVar1 != 0xf59173284c71b4d9);
  return local_54;
}



uint FUN_18007aaa0(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  char *******pppppppcVar7;
  char *pcVar8;
  char *pcVar9;
  byte *local_a0;
  uintptr_t local_98;
  longlong local_90;
  uint local_84;
  char *local_80;
  char *******local_78;
  undefined8 uStack_70;
  char *local_68;
  char *local_60;
  char *local_58;
  uint local_50;
  byte local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_58 = (char *)0xf;
  local_98 = 0;
  local_50 = 0xffffffff;
  local_80 = (char *)0x1;
  local_84 = 0;
  if (**(longlong **)(param_1 + 0x38) != 0) {
    iVar1 = **(int **)(param_1 + 0x50);
    if (0 < iVar1) {
      **(int **)(param_1 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar2 + 1);
      return (uint)*pbVar2;
    }
  }
  uVar6 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      iVar1 = *(int *)(param_1 + 0x90);
      lVar3 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar3;
      **(longlong **)(param_1 + 0x38) = lVar3;
      **(int **)(param_1 + 0x50) = iVar1 - (int)lVar3;
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    if (lVar3 == 0) {
      uVar5 = FUN_1801e26f4(*(undefined8 *)(param_1 + 0x80));
      uVar6 = local_50;
      if (uVar5 != local_50) {
        uVar6 = uVar5 & 0xff;
      }
    }
    else {
      local_78 = (char *******)0x0;
      uStack_70 = 0;
      local_68 = (char *)0x0;
      local_60 = (char *)0xf;
      uVar5 = FUN_1801e26f4(*(undefined8 *)(param_1 + 0x80));
      uVar6 = local_50;
      if (uVar5 != local_50) {
LAB_18007ac0b:
        if (local_68 < local_60) {
          pcVar8 = local_80 + (longlong)local_68;
          pppppppcVar7 = (char *******)&local_78;
          if (local_58 < local_60) {
            pppppppcVar7 = local_78;
          }
          pcVar9 = (char *)((longlong)pppppppcVar7 + (longlong)local_68);
          local_68 = pcVar8;
          *pcVar9 = (char)uVar5;
          *(char *)((longlong)pppppppcVar7 + (longlong)pcVar8) = '\0';
        }
        else {
          FUN_18006a970(&local_78,local_80);
        }
        pppppppcVar7 = (char *******)&local_78;
        if (local_58 < local_60) {
          pppppppcVar7 = local_78;
        }
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,pppppppcVar7,
                           (char *)((longlong)pppppppcVar7 + (longlong)local_68),&local_90,&local_49,&local_48,&local_a0
                          );
        if ((int)uVar5 < 3) {
          if (1 < uVar5) {
            uVar6 = 0xffffffff;
            goto joined_r0x00018007ad73;
          }
          if (local_a0 == &local_49) goto code_r0x00018007acba;
          pppppppcVar7 = local_78;
          if (local_60 <= local_58) {
            pppppppcVar7 = (char *******)&local_78;
          }
          pcVar8 = (char *)((longlong)pppppppcVar7 + ((longlong)local_68 - local_90));
          if ((longlong)local_98 < (longlong)pcVar8) {
            do {
              ungetc((int)(pcVar8 + -1)[local_90],*(FILE **)(param_1 + 0x80));
              bVar4 = local_80 < pcVar8;
              pcVar8 = pcVar8 + -1;
            } while (bVar4);
          }
          uVar6 = (uint)local_49;
          goto LAB_18007adde;
        }
        uVar6 = 0xffffffff;
        if (uVar5 == 3) {
          if (local_58 < local_60) {
            uVar6 = (uint)*(char *)local_78;
          }
          else {
            uVar6 = (uint)(char)local_78;
          }
joined_r0x00018007ad73:
          if (local_60 <= local_58) {
            return uVar6;
          }
          goto LAB_18007ade8;
        }
      }
LAB_18007adde:
      if (local_58 < local_60) {
LAB_18007ade8:
        pcVar8 = local_80 + (longlong)local_60;
        pppppppcVar7 = local_78;
        if ((char *)0xfff < pcVar8) {
          if ((char *)0x1f < (char *)((longlong)local_78 + (-8 - (longlong)local_78[-1]))) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_84,local_98);
          }
          pcVar8 = local_60 + 0x28;
          pppppppcVar7 = (char *******)local_78[-1];
        }
        thunk_FUN_1801f42e0(pppppppcVar7,pcVar8);
      }
    }
  }
  return uVar6;
code_r0x00018007acba:
  pppppppcVar7 = (char *******)&local_78;
  if (local_58 < local_60) {
    pppppppcVar7 = local_78;
  }
  pcVar8 = (char *)(local_90 - (longlong)pppppppcVar7);
  if (local_68 < (char *)(local_90 - (longlong)pppppppcVar7)) {
    pcVar8 = local_68;
  }
  pcVar9 = local_68 + -(longlong)pcVar8;
  FUN_1802079d0(pppppppcVar7,(char *)((longlong)pppppppcVar7 + (longlong)pcVar8),local_80 + (longlong)pcVar9);
  local_68 = pcVar9;
  uVar5 = FUN_1801e26f4(*(undefined8 *)(param_1 + 0x80));
  uVar6 = local_50;
  if (uVar5 == local_50) goto LAB_18007adde;
  goto LAB_18007ac0b;
}



void Unwind_18007aeb0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  return;
}



longlong FUN_18007aef0(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong local_150;
  ulonglong local_148;
  longlong *local_140;
  int local_134;
  ulonglong local_130;
  longlong local_128;
  size_t local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined1 *local_108;
  size_t local_100;
  ulonglong local_f8;
  int local_ec;
  uint local_e8;
  int local_e4;
  size_t local_e0;
  byte local_d8;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 *local_98;
  ulonglong local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 *local_50;
  ulonglong local_48;

  local_148 = 0x2918fc8ab4d4b81;
  local_150 = 0xb233f88251b7a70e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_148 ^ 0x6aa9df0b308e3808;
              uVar3 = local_148 ^ local_150;
              local_150 = local_150 ^ 0x6aa9df0b308e3808;
              local_148 = uVar5;
              if (0x39a071b10d5b0e34 < (longlong)uVar3) break;
              if ((longlong)uVar3 < -0x3e3fd6abc7d2c59b) {
                if ((longlong)uVar3 < -0x5b7d2fb2134353c5) {
                  if (uVar3 == 0x86d02cc16fae276d) {
                    local_128 = param_3 - local_90;
                    local_148 = 0x85a538e50386cb0b;
                    local_150 = 0xc448cae9525334e1;
                  }
                  else if (uVar3 == 0x8cb7f2f8471b324e) {
                    uVar3 = (ulonglong)local_e8;
                    if (local_f8 < local_e8) {
                      uVar3 = local_f8;
                    }
                    FUN_1802079d0(local_80,local_60,uVar3);
                    local_b0 = local_80 + uVar3;
                    local_a8 = local_f8 - uVar3;
                    *(int *)*local_d0 = *(int *)*local_d0 - (int)uVar3;
                    *(longlong *)*local_140 = *(longlong *)*local_140 + uVar3;
                    local_148 = 0xcf15c641f784e240;
                    local_150 = 0x9e1471631cc04c;
                  }
                  else if (uVar3 == 0x9b93d6d3364bb7d0) {
                    local_68 = *(longlong *)*local_140;
                    local_148 = 0xa0e8d0f3332c37da;
                    if (local_68 == 0) {
                      local_148 = 0xb26c1f74acccdf29;
                    }
                    local_150 = 0x6128f9a70b010dbf;
                    local_110 = param_3;
                    local_108 = param_2;
                  }
                }
                else if (uVar3 == 0xa482d04decbcac3b) {
                  local_148 = 0x5eab279823f84b61;
                  if (local_100 == local_130) {
                    local_148 = 0x29a32e081bceae7a;
                  }
                  local_118 = local_130;
                  local_150 = 0x63e943ee78ca7cea;
                }
                else if (uVar3 == 0xb0a2774afafaec8f) {
                  local_d8 = 0x20;
                  local_130 = 0;
                  local_120 = 1;
                  local_e0 = 0xfff;
                  local_134 = 0;
                  local_148 = 0x679ac7c1d276b26c;
                  if ((longlong)param_3 < 1) {
                    local_148 = 0xdd9fc039ea36aa05;
                  }
                  local_150 = 0x9c723235bbe355ef;
                  local_128 = 0;
                }
                else if (uVar3 == 0xc1b7324756f3104f) {
                  local_58 = (longlong *)param_1[3];
                  local_148 = 0xd02435a92e881478;
                  if ((longlong *)*local_58 == param_1 + 0xe) {
                    local_148 = 0x94641e2b7852aeda;
                  }
                  local_150 = 0xe984441823d31a4d;
                }
              }
              else if ((longlong)uVar3 < -0x4170a0b966a187d) {
                if (uVar3 == 0xc1c02954382d3a65) {
                  local_70 = param_1 + 10;
                  local_e4 = *(int *)param_1[10];
                  local_148 = 0xac241cd4cc048139;
                  if (local_e4 == local_134) {
                    local_148 = 0x24b2fa956a69132b;
                  }
                  local_150 = 0xf7f61c46cda4c1bd;
                  local_110 = param_3;
                  local_108 = param_2;
                }
                else if (uVar3 == 0xcf8bd2309498220c) {
                  local_a0 = local_a8;
                  local_98 = local_b0;
                  local_148 = 0x169230c1514c63a9;
                  if ((longlong)local_130 < (longlong)local_a8) {
                    local_148 = 0xefa718f614881a63;
                  }
                  local_150 = 0x90421c003ee244c4;
                  local_90 = local_a0;
                }
                else if (uVar3 == 0xd344e6d3a7cdd296) {
                  local_50 = local_108;
                  local_48 = local_110;
                  local_c8 = param_1 + 0x10;
                  local_148 = 0x236f8d6711c2fe8b;
                  if (param_1[0x10] == 0) {
                    local_148 = 0xa892d2c624353c54;
                  }
                  local_150 = 0xe2d8bf204731eec4;
                  local_118 = local_110;
                }
              }
              else if (uVar3 == 0xfbe8f5f46995e783) {
                local_140 = param_1 + 7;
                local_148 = 0x4960fb300c984806;
                if (param_1[0xd] == 0) {
                  local_148 = 0xc9995eeb7bee65de;
                }
                local_150 = 0x520a88384da5d20e;
              }
              else if (uVar3 == 0xea00b999dc20e8f) {
                local_ec = (**(code **)(*param_1 + 0x38))(param_1);
                local_148 = 0x67bad2e0f10b6f5e;
                if (local_ec == -1) {
                  local_148 = 0xa0c6d84d7a93954e;
                }
                local_150 = 0x2616f48c153db223;
                local_90 = local_f8;
              }
              else if (uVar3 == 0x1b6a7308413d9a08) {
                local_d0 = param_1 + 10;
                local_148 = 0x2e88f242bf9a9eb5;
                local_150 = 0x516df6b495f0c012;
                local_a0 = param_3;
                local_98 = param_2;
              }
            }
            if ((longlong)uVar3 < 0x5bd2009201a04084) break;
            if ((longlong)uVar3 < 0x6803a828568e0eac) {
              if (uVar3 == 0x5bd2009201a04084) {
                uVar3 = (longlong)local_e4;
                if (param_3 < (ulonglong)(longlong)local_e4) {
                  uVar3 = param_3;
                }
                FUN_1802079d0(param_2,local_68,uVar3);
                local_108 = param_2 + uVar3;
                local_110 = param_3 - uVar3;
                *(int *)*local_70 = *(int *)*local_70 - (int)uVar3;
                *(longlong *)*local_140 =
                     ((longlong)(uVar3 << (local_d8 & 0x3f)) >> (local_d8 & 0x3f)) + *(longlong *)*local_140;
                local_148 = 0x361aa2893e1c5b77;
                local_150 = 0xe55e445a99d189e1;
              }
              else if (uVar3 == 0x5cc230d527661b7c) {
                local_128 = param_3 - local_78;
                local_148 = 0x8e464f8beaf7d774;
                local_150 = 0xcfabbd87bb22289e;
              }
              else if (uVar3 == 0x674b56467bf571f8) {
                local_e8 = *(uint *)*local_d0;
                local_148 = 0x7efa32d30f8879d1;
                if (local_134 < (int)local_e8) {
                  local_148 = 0xfcedcbb2d5514510;
                }
                local_150 = 0x705a394a924a775e;
              }
            }
            else if (uVar3 == 0x6803a828568e0eac) {
              sVar4 = fread(local_88,local_120,local_e0,(FILE *)*local_c8);
              local_b8 = local_88 + sVar4;
              local_c0 = local_100 - sVar4;
              local_148 = 0x976fff007675e55c;
              if (sVar4 == local_e0) {
                local_148 = 0x9d144ebb42f0f0a4;
              }
              local_150 = 0xcbadcfd55113fe20;
              local_78 = local_c0;
            }
            else if (uVar3 == 0x7de05a335b81b497) {
              lVar2 = param_1[0x12];
              lVar1 = param_1[0x11];
              *local_58 = lVar1;
              *(longlong *)*local_140 = lVar1;
              *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
              local_148 = 0x2a157aaeed343cdc;
              local_150 = 0x13b50b1fe06f32e9;
            }
            else if (uVar3 == 0x7fe504f62a6a5ea7) {
              local_80 = local_98;
              local_f8 = local_a0;
              local_60 = *(longlong *)*local_140;
              local_148 = 0x7028d442abe27fea;
              if (local_60 == 0) {
                local_148 = 0x19c3899d4dd5009d;
              }
              local_150 = 0x17638204d0170e12;
            }
          }
          if (0x41edf20c51d5ffe9 < (longlong)uVar3) break;
          if (uVar3 == 0x39a071b10d5b0e35) {
            local_148 = 0x86588f3dac29f470;
            local_150 = 0xd0e10e53bfcafaf4;
            local_c0 = local_48;
            local_b8 = local_50;
          }
          else if (uVar3 == 0x3d4264765b32378b) {
            sVar4 = fread(local_88,local_120,local_100,(FILE *)*local_c8);
            local_118 = local_100 - sVar4;
            local_148 = 0x17525f0e2bc4f1e1;
            local_150 = 0x5d1832e848c02371;
          }
          else if (uVar3 == 0x41ac266ce436dd7d) {
            *local_80 = (undefined1)local_ec;
            local_b0 = local_80 + 1;
            local_a8 = local_f8 - 1;
            local_148 = 0xb9c7ffd1e6fbf442;
            local_150 = 0x764c2de17263d64e;
          }
        }
        if (uVar3 != 0x4a4a6de66304d290) break;
        local_128 = param_3 - local_118;
        local_148 = 0x98b3893ba294afbc;
        local_150 = 0xd95e7b37f3415056;
      }
      if (uVar3 != 0x56b9816e13e30e84) break;
      local_88 = local_b8;
      local_100 = local_c0;
      local_148 = 0x622a3a1f595201d4;
      if (local_c0 < 0x1000) {
        local_148 = 0xaeab427ae360a343;
      }
      local_150 = 0xa2992370fdc0f78;
    }
  } while (uVar3 != 0x41edf20c51d5ffea);
  return local_128;
}



longlong FUN_18007ba30(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  int local_ec;
  longlong local_e8;
  undefined1 *local_e0;
  ulonglong local_d8;
  undefined1 *local_d0;
  ulonglong local_c8;
  uint local_c0;
  uint local_bc;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 *local_80;
  ulonglong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  undefined1 *local_48;

  local_100 = 0x645ed65efc91c5ba;
  local_108 = 0xe61127bede71fb46;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_100 ^ 0x2f7b36c7532b3844;
            uVar2 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x2f7b36c7532b3844;
            local_100 = uVar4;
            if ((longlong)uVar2 < -0x24cf8751bc20e306) break;
            if ((longlong)uVar2 < 0xe5b76dec9d736b) {
              if ((longlong)uVar2 < -0x399a110c0fdba92) {
                if (uVar2 == 0xdb3078ae43df1cfa) {
                  local_98 = local_d0 + 1;
                  local_90 = local_c8 - 1;
                  local_100 = 0x38f90ff882eab5bc;
                  local_108 = 0x13fc8dc5bb9ca4f7;
                }
                else if (uVar2 == 0xde8a0b56b5fecf1e) {
                  uVar2 = (ulonglong)local_bc;
                  if (param_3 < local_bc) {
                    uVar2 = param_3;
                  }
                  FUN_1802079d0(local_58,param_2,uVar2);
                  local_e0 = param_2 + uVar2;
                  local_d8 = param_3 - uVar2;
                  *(int *)*local_68 = *(int *)*local_68 - (int)uVar2;
                  *(longlong *)*local_60 = *(longlong *)*local_60 + uVar2;
                  local_100 = 0xf5d9220b5acb82de;
                  local_108 = 0x9bf7ce465c9c7b0;
                }
              }
              else if (uVar2 == 0xfc665eef3f02456e) {
                local_f8 = local_d8;
                local_48 = local_e0;
                local_100 = 0x4fa9b364abfaa656;
                if (local_e8 < (longlong)local_d8) {
                  local_100 = 0x837cfd5db7dedc59;
                }
                local_108 = 0x83994a305b43af32;
                local_78 = local_f8;
              }
              else if (uVar2 == 0xfee1b32c1e0abd56) {
                local_d0 = local_80;
                local_c8 = local_88;
                local_50 = *(longlong *)*local_a8;
                local_100 = 0xbeccb5d2ab53d3f9;
                if (local_50 == 0) {
                  local_100 = 0xfa88e50c0ffca9a1;
                }
                local_108 = 0x33b1ec484da481fe;
              }
            }
            else if ((longlong)uVar2 < 0x71ee0f0d0a04f63a) {
              if (uVar2 == 0xe5b76dec9d736b) {
                local_70 = param_1[0x10];
                local_100 = 0x3da928df7fc8ba13;
                if (local_70 == 0) {
                  local_100 = 0x84df2de9071b010e;
                }
                local_108 = 0x48efd4bdf7a2086a;
                local_f8 = local_78;
              }
              else if (uVar2 == 0x2b05823d3976114b) {
                local_88 = local_90;
                local_80 = local_98;
                local_100 = 0x77f044ddc701e43f;
                if (local_e8 < (longlong)local_90) {
                  local_100 = 0x45210ea529b2500d;
                }
                local_108 = 0xbbc0bd8937b8ed5b;
                local_f8 = local_90;
              }
            }
            else if (uVar2 == 0x71ee0f0d0a04f63a) {
              local_58 = *(longlong *)param_1[8];
              local_100 = 0x68a037a0aaadf90f;
              if (local_58 == 0) {
                local_100 = 0x97acc9e7a10d3d5;
              }
              local_108 = 0xf51c9271451296bb;
              local_e0 = param_2;
              local_d8 = param_3;
              local_60 = param_1 + 8;
            }
            else if (uVar2 == 0x7546fc62886ab279) {
              lVar3 = FUN_1801e1ed4(local_48,1,local_78,local_70);
              local_f8 = local_78 - lVar3;
              local_100 = 0x86c2d707defb88f1;
              local_108 = 0x4af22e532e428195;
            }
          }
          if (-0x62435a2e1040904d < (longlong)uVar2) break;
          if ((longlong)uVar2 < -0x7282a6651908adf9) {
            if (uVar2 == 0x824ff1e022e03efc) {
              local_e8 = 0;
              local_ec = 0;
              local_100 = 0x43caa913c4866235;
              if (param_1[0xd] == 0) {
                local_100 = 0xfe6315caa56aeb4b;
              }
              local_108 = 0x8f8d1ac7af6e1d71;
            }
            else if (uVar2 == 0x87def8369d4ee03c) {
              uVar2 = (ulonglong)local_c0;
              if (local_c8 < local_c0) {
                uVar2 = local_c8;
              }
              FUN_1802079d0(local_50,local_d0,uVar2);
              local_98 = local_d0 + uVar2;
              local_90 = local_c8 - uVar2;
              *(int *)*local_a0 = *(int *)*local_a0 - (int)uVar2;
              *(longlong *)*local_a8 = *(longlong *)*local_a8 + uVar2;
              local_100 = 0x2830c55bb30c6f2a;
              local_108 = 0x33547668a7a7e61;
            }
          }
          else if (uVar2 == 0x8d7d599ae6f75207) {
            local_c0 = *(uint *)*local_a0;
            local_100 = 0x741b70a1a9bc86db;
            if (local_ec < (int)local_c0) {
              local_100 = 0x3afc81d376aa4eb8;
            }
            local_108 = 0xbd2279e5ebe4ae84;
          }
          else if (uVar2 == 0x97f33b25b4ccf4bb) {
            local_100 = 0xd7dc86ce6febfd90;
            local_108 = 0x293d35e271e140c6;
            local_a8 = param_1 + 8;
            local_a0 = param_1 + 0xb;
            local_88 = param_3;
            local_80 = param_2;
          }
        }
        if (-0x33cf06ab0f46f69d < (longlong)uVar2) break;
        if (uVar2 == 0x9dbca5d1efbf6fb4) {
          local_bc = *(uint *)param_1[0xb];
          local_100 = 0xf8a6130978e8d303;
          if (local_ec < (int)local_bc) {
            local_100 = 0xda4a46b0f2145973;
          }
          if ((longlong)param_3 <= local_e8) {
            local_100 = 0xf8a6130978e8d303;
          }
          local_108 = 0x4c04de647ea966d;
          local_e0 = param_2;
          local_d8 = param_3;
          local_68 = param_1 + 0xb;
        }
        else if (uVar2 == 0xc93909444258285f) {
          iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*local_d0);
          local_100 = 0xdd83069ae733c600;
          if (iVar1 == -1) {
            local_100 = 0xca8387605455d39e;
          }
          local_108 = 0x6b37e34a4ecdafa;
          local_f8 = local_c8;
        }
      }
      if (uVar2 != 0xcc47b3d46be87f44) break;
      local_100 = 0x83f23b7234f1a0df;
      if (local_e8 < (longlong)param_3) {
        local_100 = 0xd831f90370845d00;
      }
      local_108 = 0x4fc2c226c448a9bb;
      local_f8 = param_3;
    }
  } while (uVar2 != 0xcc30f954f0b90964);
  return param_3 - local_f8;
}



fpos_t * FUN_18007c240(longlong *param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  fpos_t fVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  ulonglong local_120;
  ulonglong local_118;
  char local_10a;
  char local_109;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  longlong *local_f8;
  char *local_f0;
  longlong local_e8;
  longlong local_e0;
  FILE *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  FILE *local_b0;
  undefined1 *local_a8;
  longlong *local_a0;
  fpos_t local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [8];
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_148;
  local_118 = 0xd6d6b6d07b18b39f;
  local_120 = 0xfa98cfe8dbf86016;
  local_d0 = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_118 ^ 0x165246d84368962c;
              uVar3 = local_118 ^ local_120;
              local_120 = local_120 ^ 0x165246d84368962c;
              local_118 = uVar5;
              if ((longlong)uVar3 < 0x6003d4b050bcfcc) break;
              if ((longlong)uVar3 < 0x2c7dd2dd303c9e85) {
                if ((longlong)uVar3 < 0x1f2a6068018367a7) {
                  if (uVar3 == 0x6003d4b050bcfcc) {
                    local_118 = 0x3cdfc1901207d26f;
                    if (local_109 != '\0') {
                      local_118 = 0x4be900e658d5d5c2;
                    }
                    local_120 = 0xc7750c0f9b8ed14d;
                  }
                  else if (uVar3 == 0xe0570ecf12a46c5) {
                    fVar1 = *(fpos_t *)((longlong)param_1 + 0x74);
                    *param_2 = local_98;
                    param_2[1] = local_e8;
                    param_2[2] = fVar1;
                    local_118 = 0xfde368612cc74879;
                    local_120 = 0xff3e4414693ff62c;
                  }
                  else if (uVar3 == 0x10770113219663a6) {
                    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_fc);
                    local_118 = 0x7de7641d7fbce6dc;
                    if (iVar2 == local_fc) {
                      local_118 = 0x2dcca3b158152464;
                    }
                    local_120 = 0xa5e7c4bffdac3946;
                  }
                }
                else if (uVar3 == 0x1f2a6068018367a7) {
                  local_118 = 0x65c6fb9890824a9;
                  if (local_108 == 1) {
                    local_118 = 0x97df90dcba66411;
                  }
                  local_120 = 0x71df24039d57b50e;
                }
                else if (uVar3 == 0x23eb166a00ecb1fe) {
                  iVar2 = FUN_1801e2e0c(local_b0,local_e0,param_4);
                  local_118 = 0xd28e843f27d70007;
                  if (iVar2 == local_104) {
                    local_118 = 0x76d831ecb25283a0;
                  }
                  local_120 = 0x5aa5e331826e1d25;
                }
                else if (uVar3 == 0x2c4e7938a0e0d389) {
                  local_e8 = 0;
                  local_fc = -1;
                  local_100 = 1;
                  local_10a = '\0';
                  local_104 = 0;
                  local_c8 = param_1 + 7;
                  local_c0 = param_1 + 0xe;
                  local_b8 = param_1 + 0xd;
                  local_109 = param_1[0xd] == 0;
                  local_e0 = local_d0 -
                             (ulonglong)(((bool)local_109 && param_4 == 1) && *(longlong **)param_1[7] == local_c0);
                  local_f8 = param_1 + 0x10;
                  local_118 = 0x4f26441871f876f0;
                  if (param_1[0x10] == 0) {
                    local_118 = 0xc10d1e5dd14aa41e;
                  }
                  local_120 = 0x4926795374f3b93c;
                }
              }
              else if ((longlong)uVar3 < 0x54d21199f21772fa) {
                if (uVar3 == 0x2c7dd2dd303c9e85) {
                  local_d8 = (FILE *)*local_f8;
                  local_118 = 0xcc0c2caef1b6b4b5;
                  local_120 = 0x2267bb5d4a9487aa;
                }
                else if (uVar3 == 0x381751784bdd3f1d) {
                  local_118 = 0x68fdcd6922cfdb27;
                  if (local_108 == 3) {
                    local_118 = 0xef82d6c389d13032;
                  }
                  local_120 = 0x1f7e86d336904a80;
                }
                else if (uVar3 == 0x4a9cf964064596f6) {
                  local_118 = 0xb12d47b3ed4a5c1b;
                  if (local_108 == 0) {
                    local_118 = 0x73c8b0e51fda253c;
                  }
                  local_120 = 0xc6ae0c09f915cdbc;
                }
              }
              else if ((longlong)uVar3 < 0x77834bba145f91a7) {
                if (uVar3 == 0x54d21199f21772fa) {
                  local_118 = 0x6d85701de8c7ace4;
                  if (*local_f0 != '\0') {
                    local_118 = 0x69321bfa8e25b549;
                  }
                  local_120 = 0xe1197cf42b9ca86b;
                }
                else if (uVar3 == 0x5e0e969e794df86f) {
                  local_118 = 0x402ad001ac3685db;
                  if (local_108 < 1) {
                    local_118 = 0xb91f35ddf6b884e3;
                  }
                  local_120 = 0xf383ccb9f0fd1215;
                }
              }
              else if (uVar3 == 0x77834bba145f91a7) {
                local_118 = 0x72460868187cc453;
                local_120 = 0xfb25e6728fb9db7a;
              }
              else if (uVar3 == 0x78a2dd0e56f1d11f) {
                local_a8 = local_90;
                local_118 = 0xd86407d06f6da017;
                if (local_90 == local_88) {
                  local_118 = 0x2ba98af6f13cdf0e;
                }
                local_120 = 0x7f7b9b6f032badf4;
              }
            }
            if (-0x27ff5f5d7def2067 < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x58e0634093b9f21d) {
              if (uVar3 == 0x882b670ea5b91d22) {
                *param_2 = -1;
                param_2[1] = 0;
                param_2[2] = 0;
                local_118 = 0x7a5d9022d23ab363;
                local_120 = 0x7880bc5797c20d36;
              }
              else if (uVar3 == 0x8963ee1a97c51f29) {
                local_118 = 0x9148afdbcc8fe45f;
                local_120 = 0x1963c8d56936f97d;
              }
              else if (uVar3 == 0x8c9c0ce9c35b048f) {
                local_118 = 0xa277ab18f1143736;
                if (local_e0 != local_e8) {
                  local_118 = 0x6ff72a814adab5d7;
                }
                local_d8 = (FILE *)*local_f8;
                if (param_4 != local_100) {
                  local_118 = 0x6ff72a814adab5d7;
                }
                local_120 = 0x4c1c3ceb4a360429;
                local_b0 = local_d8;
              }
            }
            else if (uVar3 == 0xa71f9cbf6c460de3) {
              lVar6 = (longlong)local_a8 - (longlong)local_88;
              lVar4 = FUN_1801e1ed4(local_88,1,lVar6,*local_f8);
              local_118 = 0x447cbbaffd81b9df;
              if (lVar6 == lVar4) {
                local_118 = 0x99cd442c9853d40c;
              }
              local_120 = 0xcd1f55b56a44a6f6;
            }
            else if (uVar3 == 0xb3a91cb85ccb97ce) {
              local_118 = 0x2caa720bf3618d50;
              if (local_108 < 3) {
                local_118 = 0xb97431bb93fd5ea;
              }
              local_120 = 0x14bd2373b8bcb24d;
            }
            else if (uVar3 == 0xb566bcece6cfe880) {
              *local_f0 = local_10a;
              local_118 = 0x6b2dedd943b28eb0;
              local_120 = 0x138f30d715435faf;
            }
          }
          if (-0xf03afef40be854f < (longlong)uVar3) break;
          if (uVar3 == 0xd800a0a28210df9a) {
            local_128 = &local_90;
            local_108 = (**(code **)(*(longlong *)*local_b8 + 0x40))
                                  ((longlong *)*local_b8,(longlong)param_1 + 0x74,local_88,local_68);
            local_118 = 0x308ef2f4d5955a14;
            local_120 = 0x6e80646aacd8a27b;
          }
          else if (uVar3 == 0xec001c8af62bc11e) {
            local_a0 = (longlong *)param_1[3];
            local_118 = 0xc6b4d25e07b20f71;
            if ((longlong *)*local_a0 == local_c0) {
              local_118 = 0x33fdfce46ed7b559;
            }
            local_120 = 0xc8b1a2b2f69849b4;
          }
          else if (uVar3 == 0xee6b97f3bb22331f) {
            iVar2 = fgetpos(local_d8,&local_98);
            local_118 = 0x40d22ec5a5eddb46;
            if (iVar2 == local_104) {
              local_118 = 0x24f95541f67f077a;
            }
            local_120 = 0xc8f949cb0054c664;
          }
        }
        if (-0x45532607676fcdf < (longlong)uVar3) break;
        if (uVar3 == 0xf0fc5010bf417ab2) {
          *local_f0 = local_10a;
          local_118 = 0x6f07a8c8a18627a9;
          local_120 = 0xe39ba42162dd2326;
        }
        else if (uVar3 == 0xfb4c5e56984ffced) {
          lVar6 = param_1[0x12];
          lVar4 = param_1[0x11];
          *local_a0 = lVar4;
          *(longlong *)*local_c8 = lVar4;
          *(int *)param_1[10] = (int)lVar6 - (int)lVar4;
          local_118 = 0xb2ef3bb00ecf90ec;
          local_120 = 0xbcea4b5cffe5d629;
        }
      }
      if (uVar3 != 0xfbaacd9f89890322) break;
      local_f0 = (char *)((longlong)param_1 + 0x71);
      local_118 = 0x6ed4ba0ea7a7395c;
      if (*(char *)((longlong)param_1 + 0x71) != '\0') {
        local_118 = 0xf23fb7f4456a5e75;
      }
      local_120 = 0xe248b6e764fc3dd3;
    }
  } while (uVar3 != 0x2dd2c7545f8be55);
  if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_148)) {
    return param_2;
  }
}



longlong * FUN_18007cd00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  ulonglong local_100;
  ulonglong local_f8;
  char local_e9;
  int local_e8;
  int local_e4;
  char *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [8];
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  local_f8 = 0x5d6ad4359ef8d327;
  local_100 = 0xb4ed12a876ab079b;
  local_c0 = param_1 + 0xd;
  local_c8 = param_1 + 0x10;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_f8 ^ 0xcc8b3e0018f00af7;
              uVar2 = local_f8 ^ local_100;
              local_100 = local_100 ^ 0xcc8b3e0018f00af7;
              local_f8 = uVar4;
              if (0x30a6d8816d220a12 < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0xe7c083fedeb10a4) {
                if ((longlong)uVar2 < -0x64966c185b8ede82) {
                  if (uVar2 == 0x838603db5a020e1f) {
                    local_f8 = 0xebdae781b6209ed5;
                    if (local_e8 < 3) {
                      local_f8 = 0xc94a8c3a7cb372ef;
                    }
                    local_100 = 0xefc2e595e22c2639;
                  }
                  else if (uVar2 == 0x8c858913b1728b9b) {
                    local_b8 = local_90;
                    local_f8 = 0xf3ade88e06ed2bfa;
                    if (local_90 == local_88) {
                      local_f8 = 0x9ff75b48dcbbec5a;
                    }
                    local_100 = 0xa45cff83d4c08fb1;
                  }
                }
                else if (uVar2 == 0x9b6993e7a471217e) {
                  *local_e0 = local_e9;
                  local_f8 = 0x395aa7d3a0b6008c;
                  local_100 = 0xb5df2ec011c48b17;
                }
                else if (uVar2 == 0xb8cf752bed472bd0) {
                  local_a0 = local_c0;
                  local_f8 = 0xda1ccdd2bf7a3418;
                  if (param_1[0xd] == 0) {
                    local_f8 = 0x90844c0cb0a938a2;
                  }
                  local_100 = 0xd88736483f2359ad;
                }
                else if (uVar2 == 0xe987c69de853d4bc) {
                  local_e4 = -1;
                  local_e9 = '\0';
                  local_98 = param_3[1] + *param_3;
                  local_d8 = local_c8;
                  local_f8 = 0x8681b4e45d5b7f8f;
                  if (param_1[0x10] == 0) {
                    local_f8 = 0x653dc2f7742ae201;
                  }
                  local_100 = 0x3e4ec1cfb01c545f;
                }
              }
              else if ((longlong)uVar2 < 0x8c38586f6427b4d) {
                if (uVar2 == 0xf183f7c01214ef5c) {
                  local_f8 = 0x18b08bb63a85c16d;
                  if (local_e8 == 0) {
                    local_f8 = 0x97900b5db7fbf177;
                  }
                  local_100 = 0xcf998ba138ad009;
                }
                else if (uVar2 == 0x29bfb9a80596db5) {
                  local_e0 = (char *)((longlong)param_1 + 0x71);
                  local_f8 = 0x586acd158edbc32a;
                  if (*(char *)((longlong)param_1 + 0x71) != '\0') {
                    local_f8 = 0x68ad4a9df9764cab;
                  }
                  local_100 = 0x1069b7510151a225;
                }
                else if (uVar2 == 0x4180214540cb8ec) {
                  local_f8 = 0x6c529a53992b08f4;
                  if (local_e8 == 3) {
                    local_f8 = 0x48bd51dedd061383;
                  }
                  local_100 = 0x781b895fb0241990;
                }
              }
              else if (uVar2 == 0x8c38586f6427b4d) {
                local_d0 = param_3[2];
                local_b0 = (longlong *)((longlong)param_1 + 0x74);
                *(longlong *)((longlong)param_1 + 0x74) = local_d0;
                local_a8 = (longlong *)param_1[3];
                local_f8 = 0xbc09b46b22c4c8ae;
                if ((longlong *)*local_a8 == param_1 + 0xe) {
                  local_f8 = 0xb90910439bf5d1e1;
                }
                local_100 = 0xd01463a79a8d50a8;
              }
              else if (uVar2 == 0x1449130c290f1164) {
                local_f8 = 0xe6d484e5481d2ae4;
                local_100 = 0xa4f21b2eb77bb4aa;
              }
              else if (uVar2 == 0x268869af9e9f54d6) {
                local_f8 = 0x21f02cd2199768e;
                if (local_e8 == 1) {
                  local_f8 = 0x9ad398d2b9e4ec71;
                }
                local_100 = 0x165611c1089667ea;
              }
            }
            if (0x5b730338c436b65d < (longlong)uVar2) break;
            if ((longlong)uVar2 < 0x42269fcbff669e4e) {
              if (uVar2 == 0x30a6d8816d220a13) {
                *local_e0 = local_e9;
                local_f8 = 0xa373ddddbedada02;
                local_100 = 0xeb70a7993150bb0d;
              }
              else if (uVar2 == 0x39b60795a44ee732) {
                local_108 = &local_90;
                local_e8 = (**(code **)(*(longlong *)*local_a0 + 0x40))
                                     ((longlong *)*local_a0,(longlong)param_1 + 0x74,local_88,local_68);
                local_f8 = 0x68644710f6df2196;
                local_100 = 0x15978948b5f17135;
              }
              else if (uVar2 == 0x3baba4cb087b63eb) {
                local_f8 = 0x3def37b9923a272b;
                if (*local_e0 != '\0') {
                  local_f8 = 0x2e9f4ec5d986f07a;
                }
                local_100 = 0x75ec4dfd1db04624;
              }
            }
            else if (uVar2 == 0x42269fcbff669e4e) {
              local_f8 = 0xf1b621f3a381e3a2;
              local_100 = 0xaac522cb67b755fc;
            }
            else if (uVar2 == 0x48037a448f8a610f) {
              iVar1 = fsetpos((FILE *)*local_d8,&local_98);
              local_f8 = 0xb38857d05d44c633;
              if (iVar1 == 0) {
                local_f8 = 0xe038d16e6f300b20;
              }
              local_100 = 0xe8fb54e89972706d;
            }
            else if (uVar2 == 0x57f1170dd22da44b) {
              lVar5 = (longlong)local_b8 - (longlong)local_88;
              lVar3 = FUN_1801e1ed4(local_88,1,lVar5,*local_d8);
              local_f8 = 0x45abaf5460d82dc2;
              if (lVar5 == lVar3) {
                local_f8 = 0x3c26945497c5d067;
              }
              local_100 = 0x78d309f9fbeb38c;
            }
          }
          if (0x70f7f786240b2336 < (longlong)uVar2) break;
          if (uVar2 == 0x5b730338c436b65e) {
            *param_2 = -1;
            param_2[1] = 0;
            param_2[2] = 0;
            local_f8 = 0x59721c9d17fbbe46;
            local_100 = 0x2985eb1b33f09d71;
          }
          else if (uVar2 == 0x691d73e401788149) {
            lVar5 = param_1[0x12];
            lVar3 = param_1[0x11];
            *local_a8 = lVar3;
            *(longlong *)param_1[7] = lVar3;
            *(int *)param_1[10] = (int)lVar5 - (int)lVar3;
            local_d0 = *local_b0;
            local_f8 = 0x452603a377b10b78;
            local_100 = 0x293bd46fcff8937e;
          }
          else if (uVar2 == 0x6c1dd7ccb8499806) {
            *param_2 = local_98;
            param_2[1] = 0;
            param_2[2] = local_d0;
            local_f8 = 0x960d6621852215a3;
            local_100 = 0xe6fa91a7a1293694;
          }
        }
        if (uVar2 != 0x78c4fdccf827ee8e) break;
        iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_e4);
        local_f8 = 0xbabaf4f744ba243f;
        if (iVar1 == local_e4) {
          local_f8 = 0xd87ff05a24c27553;
        }
        local_100 = 0x830cf362e0f4c30d;
      }
      if (uVar2 != 0x7df3ce58432e50a3) break;
      local_f8 = 0x5e6fd742468e8149;
      if (local_e8 < 1) {
        local_f8 = 0x2c6a23590e98600a;
      }
      local_100 = 0xdde9d4991c8c8f56;
    }
  } while (uVar2 != 0x70f7f786240b2337);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_128)) {
  }
  return param_2;
}



longlong FUN_18007d650(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_108 [44];
  int local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_108;
  local_d0 = 0x2de1e5185bf00b77;
  local_d8 = 0xa95fefbb1f3c28db;
LAB_18007d720:
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_d0 ^ 0x7a86df12d8d84ef5;
        uVar2 = local_d0 ^ local_d8;
        local_d8 = local_d8 ^ 0x7a86df12d8d84ef5;
        local_d0 = uVar3;
        if ((longlong)uVar2 < -0x48e553ebd54a0e8a) break;
        if (uVar2 == 0xb71aac142ab5f176) {
          local_68 = 0;
          local_70 = 0;
          local_78 = 0;
          _get_stream_buffer_pointers(local_c8,&local_68,&local_70,&local_78);
          *local_a8 = local_68;
          *local_a0 = local_68;
          *local_98 = local_70;
          *local_90 = local_70;
          *local_88 = local_78;
          *local_80 = local_78;
          local_d0 = 0x71cf7309eedabed;
          local_d8 = 0xa17b3f681ec26555;
        }
        else if (uVar2 == 0xce1c19954797b7f2) {
          local_c8 = *local_b8;
          *(undefined1 *)(param_1 + 0x7c) = 1;
          *(undefined1 *)(param_1 + 0x71) = 0;
          local_a8 = (undefined8 *)(param_1 + 0x18);
          *(longlong *)(param_1 + 0x18) = param_1 + 8;
          local_a0 = (undefined8 *)(param_1 + 0x20);
          *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
          local_98 = (undefined8 *)(param_1 + 0x38);
          *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
          local_90 = (undefined8 *)(param_1 + 0x40);
          *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
          local_88 = (undefined8 *)(param_1 + 0x50);
          *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
          local_80 = (undefined8 *)(param_1 + 0x58);
          *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
          *(int *)(param_1 + 0x4c) = local_dc;
          *(int *)(param_1 + 0x48) = local_dc;
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
          local_d0 = 0x50f92d5fe3a4d615;
          if (local_c8 == 0) {
            local_d0 = 0x41844913493ee9db;
          }
          local_d8 = 0xe7e3814bc9112763;
        }
        else if (uVar2 == 0xba9ef5d4a74a452b) {
          if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_108)) {
            return local_c0;
          }
        }
      }
      if (uVar2 != 0x84be0aa344cc23ac) break;
      local_dc = 0;
      local_b8 = (longlong *)(param_1 + 0x80);
      local_b0 = *(longlong *)(param_1 + 0x80);
      local_d0 = 0xa1049b829c6cbd42;
      if (local_b0 == 0) {
        local_d0 = 0xb15febfc6880dbb9;
      }
      local_d8 = 0xbc11e28cfca9e92;
LAB_18007d92d:
      local_c0 = 0;
    }
    if (uVar2 != 0xa667c858802fceb8) {
      if (uVar2 == 0xaac585aa53a623d0) {
        iVar1 = 4;
        if (param_3 != 0 || param_2 != 0) {
          iVar1 = local_dc;
        }
        iVar1 = FUN_1801e30a0(local_b0,param_2,iVar1,param_3);
        local_d0 = 0x20c491672b8c10fd;
        if (iVar1 == local_dc) {
          local_d0 = 0x54467d26cb51e224;
        }
        local_d8 = 0x9a5a64b38cc655d6;
        goto LAB_18007d92d;
      }
      goto LAB_18007d720;
    }
    *local_b8 = local_c8;
    *(undefined8 *)(param_1 + 0x74) = DAT_1802a1e70;
    *(undefined8 *)(param_1 + 0x68) = 0;
    local_d0 = 0xe366f7dd93d9997;
    local_d8 = 0xb4a89aa97e77dcbc;
    local_c0 = param_1;
  } while( true );
}



int FUN_18007da60(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int local_64;
  ulonglong local_60;
  ulonglong local_58;
  int local_50;
  int local_4c;
  longlong *local_48;

  local_58 = 0x993a89b4e2c62a5c;
  local_60 = 0xfebe0e1d6fa13c7b;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x2b8c5757b1c7e942;
        if ((longlong)uVar2 < 0x678487a98d671627) break;
        if (uVar2 == 0x79ed026015ddc833) {
          iVar1 = fflush((FILE *)*local_48);
          local_64 = iVar1 >> 0x1f;
          local_58 = 0x805d49fa5c08927;
          local_60 = 0xb157997e8256eac;
        }
        else {
          local_58 = local_58 ^ 0x2b8c5757b1c7e942;
          if (uVar2 == 0x678487a98d671627) {
            local_4c = -1;
            local_50 = 0;
            local_48 = param_1 + 0x10;
            local_58 = 0xa13ce67d1a55e9bb;
            if (param_1[0x10] == 0) {
              local_58 = 0x8d55a4fc9e6e2a5b;
            }
            local_64 = 0;
            local_60 = 0x8e4509f4d38bcdd0;
          }
        }
      }
      if (uVar2 != 0x2f79ef89c9de246b) break;
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_4c);
      local_58 = 0x973c9325d9db8dfb;
      if (iVar1 == local_4c) {
        local_58 = 0xedc13c4d81e3a243;
      }
      local_60 = 0xeed19145cc0645c8;
      local_64 = local_50;
    }
    local_58 = local_58 ^ 0x2b8c5757b1c7e942;
  } while (uVar2 != 0x310ad084de5e78b);
  return local_64;
}



void FUN_18007dc30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;

  local_70 = 0x9b01e378b81410e7;
  local_78 = 0x6d690a4be7ee833d;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_70 ^ local_78;
        local_78 = local_78 ^ 0x4e493e044e195e0;
        if (uVar2 != 0xf668e9335ffa93da) break;
        local_7c = 0;
        local_60 = (longlong *)FUN_18007eda0(param_2);
        cVar1 = (**(code **)(*local_60 + 0x18))(local_60);
        local_70 = 0x639f591e733dfb6f;
        if (cVar1 != '\0') {
          local_70 = 0x9feff3cf555073ff;
        }
        local_78 = 0x295dcb9a904662a6;
        local_68 = (longlong *)0x0;
      }
      if (uVar2 != 0x4ac29284e37b99c9) break;
      *(longlong *)(param_1 + 0x18) = param_1 + 8;
      *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
      *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
      *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
      *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
      *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
      *(undefined4 *)(param_1 + 0x4c) = local_7c;
      *(undefined4 *)(param_1 + 0x48) = local_7c;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      local_70 = 0xb3b587e8746012ea;
      local_78 = 0x507bfbdb17603b3;
      local_68 = local_60;
    }
    local_70 = local_70 ^ 0x4e493e044e195e0;
  } while (uVar2 != 0xb6b23855c5161159);
  *(longlong **)(param_1 + 0x68) = local_68;
  return;
}



void FUN_18007ddd0(void)

{
  return;
}



uint FUN_18007de10(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  int local_58;
  uint local_54;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x129a9f778bdb9f7d;
  local_50 = 0x6d46a71c5ce7d0ee;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x9dfe849345bb45b;
        if (uVar3 != 0xc88bc542cb943fcf) break;
        *(int *)param_1[10] = *(int *)param_1[10] + local_58;
        pbVar1 = *(byte **)param_1[7];
        *(byte **)param_1[7] = pbVar1 + 1;
        local_48 = 0x350402225d9d2d89;
        local_50 = 0x798c9a233e5328f8;
        local_54 = (uint)*pbVar1;
      }
      if (uVar3 != 0x7fdc386bd73c4f93) break;
      local_58 = -1;
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
      local_48 = 0xa4145105d84a4a;
      if (iVar2 == -1) {
        local_48 = 0x84a74912ad8270f4;
      }
      local_50 = 0xc82fd113ce4c7585;
      local_54 = 0xffffffff;
    }
    local_48 = local_48 ^ 0x9dfe849345bb45b;
  } while (uVar3 != 0x4c88980163ce0571);
  return local_54;
}



longlong FUN_18007df60(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_b0;
  int local_ac;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong local_78;
  undefined1 *local_70;
  longlong local_48;

  local_d0 = 0xc4b193c275c54db9;
  local_d8 = 0x45174e08f3dd3741;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_d0 ^ 0x65029092e5ea63fd;
            uVar1 = local_d0 ^ local_d8;
            local_d8 = local_d8 ^ 0x65029092e5ea63fd;
            local_d0 = uVar2;
            if (0x92d0273c412a4bd < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x40a65a1446a3617b) {
              if (uVar1 == 0x81a6ddca86187af8) {
                local_a8 = 0;
                local_d0 = 0x3c6f7d7a05630e0c;
                if (0 < (longlong)param_3) {
                  local_d0 = 0x97d8e7f6a73cab4a;
                }
                local_d8 = 0x2881421d1e6035cf;
                local_c0 = param_3;
              }
              else if (uVar1 == 0xa5e3d7599c6681cd) {
                local_70 = local_88;
                local_b8 = local_90;
                local_48 = *(longlong *)*local_a0;
                local_d0 = 0x454d69b361fa51cb;
                if (local_48 == 0) {
                  local_d0 = 0xd3cd33dd100f347;
                }
                local_d8 = 0x411d14e151257f9;
              }
            }
            else if (uVar1 == 0xbf59a5ebb95c9e85) {
              local_d0 = 0x93319a025b5e6517;
              local_d8 = 0x36d24d5bc738e4da;
              local_a0 = param_1 + 7;
              local_98 = param_1 + 10;
              local_90 = param_3;
              local_88 = param_2;
            }
            else if (uVar1 == 0xcbc8c283a410fb80) {
              local_90 = local_78;
              local_88 = local_80;
              local_d0 = 0xd6023227407d7ceb;
              if (local_a8 < (longlong)local_78) {
                local_d0 = 0x670fda19c718c6e5;
              }
              local_d8 = 0xc2ec0d405b7e4728;
              local_c0 = local_78;
            }
          }
          if ((longlong)uVar1 < 0x415cb8fd74e80632) break;
          if (uVar1 == 0x415cb8fd74e80632) {
            local_b0 = *(uint *)*local_98;
            local_d0 = 0x752fe58763c73cd0;
            if (0 < (int)local_b0) {
              local_d0 = 0x6b3c44a4adcbbc61;
            }
            local_d8 = 0x7c02e7f4a7d5986e;
          }
          else if (uVar1 == 0x5b3cd97cc26fcbde) {
            *local_70 = (undefined1)local_ac;
            local_80 = local_70 + 1;
            local_78 = local_b8 - 1;
            local_d0 = 0x81173f62424d7cd8;
            local_d8 = 0x4adffde1e65d8758;
          }
        }
        if (uVar1 != 0x92d0273c412a4be) break;
        local_ac = (**(code **)(*param_1 + 0x38))();
        local_d0 = 0xe3114de7d98833dd;
        if (local_ac == -1) {
          local_d0 = 0xacc3abfc00e4c3c0;
        }
        local_d8 = 0xb82d949b1be7f803;
        local_c0 = local_b8;
      }
      if (uVar1 != 0x173ea3500a1e240f) break;
      uVar1 = (ulonglong)local_b0;
      if (local_b8 < local_b0) {
        uVar1 = local_b8;
      }
      FUN_1802079d0(local_70,local_48,uVar1);
      local_80 = local_70 + uVar1;
      local_78 = local_b8 - uVar1;
      *(int *)*local_98 = *(int *)*local_98 - (int)uVar1;
      *(longlong *)*local_a0 = *(longlong *)*local_a0 + uVar1;
      local_d0 = 0xf419ccdd4a2f55fa;
      local_d8 = 0x3fd10e5eee3fae7a;
    }
  } while (uVar1 != 0x14ee3f671b033bc3);
  return param_3 - local_c0;
}



longlong FUN_18007e420(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  uint local_a4;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  ulonglong local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong local_70;
  longlong local_48;

  local_d0 = 0x6f8f76a62cf5d9b7;
  local_d8 = 0xe2b016bc971310a0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_d0 ^ 0xd261da9bd153bedd;
            uVar2 = local_d0 ^ local_d8;
            local_d8 = local_d8 ^ 0xd261da9bd153bedd;
            local_d0 = uVar3;
            if ((longlong)uVar2 < -0x5b0feedb78db2a97) break;
            if ((longlong)uVar2 < -0x4c6e177b758f9ed7) {
              if (uVar2 == 0xa4f011248724d569) {
                iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*local_b8);
                local_d0 = 0xac489e0c566b71d;
                if (iVar1 == -1) {
                  local_d0 = 0x95151484b70aed0;
                }
                local_d8 = 0x80b1396fdb49201c;
                local_c0 = local_b0;
              }
              else if (uVar2 == 0xa5288e57b44a72c9) {
                local_b8 = local_80;
                local_b0 = local_88;
                local_48 = *(longlong *)*local_98;
                local_d0 = 0x6a34b4595181b6da;
                if (local_48 == 0) {
                  local_d0 = 0x77aced02faadb298;
                }
                local_d8 = 0xd35cfc267d8967f1;
              }
            }
            else if (uVar2 == 0xb391e8848a706129) {
              local_d0 = 0x1ec890d7229a0710;
              if (local_a0 < (longlong)local_70) {
                local_d0 = 0x320076a706e9fb15;
              }
              local_d8 = 0x9728f8f0b2a389dc;
              local_88 = local_70;
              local_80 = local_78;
              local_c0 = local_70;
            }
            else if (uVar2 == 0xb968487f2c08d12b) {
              local_a4 = *(uint *)*local_90;
              local_d0 = 0xcced3cc2612f011c;
              if (0 < (int)local_a4) {
                local_d0 = 0xfbe75ea6e16a4e1a;
              }
              local_d8 = 0x681d2de6e60bd475;
            }
          }
          if ((longlong)uVar2 < -0x72c09fe5441936e9) break;
          if (uVar2 == 0x8d3f601abbe6c917) {
            local_a0 = 0;
            local_d0 = 0x1a9113823ab8b900;
            if (0 < (longlong)param_3) {
              local_d0 = 0x10f847c7ada1c70b;
            }
            local_d8 = 0x93717ba5aa8137cc;
            local_c0 = param_3;
          }
          else if (uVar2 == 0x93fa734007619a6f) {
            uVar2 = (ulonglong)local_a4;
            if (local_b0 < local_a4) {
              uVar2 = local_b0;
            }
            FUN_1802079d0(local_48,local_b8,uVar2);
            local_78 = local_b8 + uVar2;
            local_70 = local_b0 - uVar2;
            *(int *)*local_90 = *(int *)*local_90 - (int)uVar2;
            *(longlong *)*local_98 = *(longlong *)*local_98 + uVar2;
            local_d0 = 0x81dfddd29936800e;
            local_d8 = 0x324e35561346e127;
          }
        }
        if (uVar2 != 0x83893c620720f0c7) break;
        local_d0 = 0xb1f40e87c55db990;
        local_d8 = 0x14dc80d07117cb59;
        local_98 = param_1 + 8;
        local_90 = param_1 + 0xb;
        local_88 = param_3;
        local_80 = param_2;
      }
      if (uVar2 != 0x8a75b08f1e2f9701) break;
      local_78 = local_b8 + 1;
      local_70 = local_b0 - 1;
      local_d0 = 0x62904c393286a761;
      local_d8 = 0xd101a4bdb8f6c648;
    }
  } while (uVar2 != 0x89e0682790398ecc);
  return param_3 - local_c0;
}



undefined8 * FUN_18007e920(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 *local_48;

  local_68 = 0x6e1c8a352f21b5c1;
  local_70 = 0x842e57d41a0c2886;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_68 ^ 0xf77fab6093af5f09;
          uVar1 = local_68 ^ local_70;
          local_70 = local_70 ^ 0xf77fab6093af5f09;
          local_68 = uVar2;
          if (-0x15cd221ecad262ba < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x4db6272556cc8ee0) {
            if (uVar1 == 0x9243d1fd034126e4) {
              thunk_FUN_1801f42e0(local_58,0x10);
              local_68 = 0xf6e26b86c897b211;
              local_70 = 0x3d505b406e5f7222;
            }
            else if (uVar1 == 0xaa3a403a7f129036) {
              local_48 = (undefined8 *)(**(code **)(*local_50 + 0x10))();
              local_68 = 0x17e7bde65f6e51fa;
              if (local_48 == (undefined8 *)0x0) {
                local_68 = 0xee438d4e4bff1cc2;
              }
              local_70 = 0x7c005cb348be3a26;
            }
          }
          else if (uVar1 == 0xb249d8daa9337120) {
            thunk_FUN_1801f42e0(param_1,0x68);
            local_68 = 0x42c427efd408c4b2;
            local_70 = 0x2211336acbc90df5;
          }
          else if (uVar1 == 0xcbb230c6a6c8c033) {
            local_68 = 0xe3a9e88857853c3b;
            if ((local_60 & param_2) == 0) {
              local_68 = 0x313524d7e177845c;
            }
            local_70 = 0x51e03052feb64d1b;
          }
        }
        if ((longlong)uVar1 < 0x6be7e15517d06bdc) break;
        if (uVar1 == 0x6be7e15517d06bdc) {
          (**(code **)*local_48)(local_48,local_60);
          local_68 = 0x98c5f1d5b0162210;
          local_70 = 0xa862028b35704f4;
        }
        else if (uVar1 == 0x7ca8bab521ac8982) {
          local_50 = *(longlong **)(local_58 + 8);
          local_68 = 0xce15e9e699d57ff7;
          if (local_50 == (longlong *)0x0) {
            local_68 = 0xf66c7821e586c925;
          }
          local_70 = 0x642fa9dce6c7efc1;
        }
      }
      if (uVar1 != 0xea32dde1352d9d47) break;
      local_60 = 1;
      *param_1 = &PTR_FUN_18020e870;
      local_58 = param_1[0xc];
      local_68 = 0x6f20e6c7c406e951;
      if (local_58 == 0) {
        local_68 = 0xd83a6cb44362a0e0;
      }
      local_70 = 0x13885c72e5aa60d3;
    }
  } while (uVar1 != 0x60d514851fc1c947);
  return param_1;
}



undefined8 FUN_18007ec50(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x9e1201893a437eb0;
  local_50 = 0x71a456a6ae902056;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc3217620f86066d2;
        if (uVar1 != 0x8014a4f3f6db059f) break;
        thunk_FUN_1801f42e0(param_1,0x98);
        local_48 = 0xfb9fbde3868448e3;
        local_50 = 0xe7c99457121c4298;
      }
      if (uVar1 != 0xefb6572f94d35ee6) break;
      FUN_180078d60(param_1);
      local_48 = 0x3ead7c67daedfaa6;
      if ((param_2 & 1) == 0) {
        local_48 = 0xa2eff120b8aef542;
      }
      local_50 = 0xbeb9d8942c36ff39;
    }
    local_48 = local_48 ^ 0xc3217620f86066d2;
  } while (uVar1 != 0x1c5629b494980a7b);
  return param_1;
}



longlong * FUN_18007eda0(longlong param_1)

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
  local_34 = 0;
  local_50 = 0x10;
  std::_Lockit::_Lockit(local_38,0);
  plVar2 = DAT_1802a1e78;
  if (DAT_1802a1e68 == local_58) {
    std::_Lockit::_Lockit(local_c0,local_34);
    if (DAT_1802a1e68 == local_58) {
      DAT_1802a1e68 = (longlong)local_3c + (longlong)DAT_1802a9348;
      DAT_1802a9348 = (int)DAT_1802a1e68;
    }
    std::_Lockit::~_Lockit(local_c0);
  }
  uVar1 = DAT_1802a1e68;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((((*(ulonglong *)(lVar3 + 0x18) <= DAT_1802a1e68) ||
       (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + DAT_1802a1e68 * 8), plVar5 == (longlong *)0x0)) &&
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
    *local_48 = (longlong)&std::codecvt<char,char,_Mbstatet>::vftable;
    FUN_1800322f0(local_c0);
    FUN_1801d8b04(plVar2);
    plVar5 = local_48;
    (**(code **)(*local_48 + 8))(local_48);
    DAT_1802a1e78 = plVar5;
  }
  std::_Lockit::~_Lockit(local_38);
  return plVar5;
}



void Unwind_18007ef40(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0xb0));
  return;
}



void Unwind_18007ef70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x98));
  return;
}



void Unwind_18007efa0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0xa0))(*(undefined8 **)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xac));
  return;
}



ios_base * FUN_18007f1f0(ios_base *param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xa8) = &PTR_LAB_18020e7e0;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xac) =
       *(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xa8;
  FUN_180078d60(param_1 + -0xa0);
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1 + -0xa8,0x108);
  }
  return param_1 + -0xa8;
}



void Unwind_18007f2b0(void)

{
  Unwind_1801dd394();
}



ios_base * FUN_18007f2d0(ios_base *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1,0x48);
  }
  return param_1;
}



void Unwind_18007f340(void)

{
  Unwind_1801dd394();
}



ios_base * FUN_18007f380(ios_base *param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0) = &PTR_LAB_18020e8f0;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb4) =
       *(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0;
  FUN_180078d60(param_1 + -0xa0);
  *(undefined ***)param_1 = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1 + -0xb0,0x110);
  }
  return param_1 + -0xb0;
}



void Unwind_18007f440(void)

{
  Unwind_1801dd394();
}



ulonglong * FUN_18007f460(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  uintptr_t local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_60;
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_d8 = 0xb58f722cfb491823;
  local_e0 = 0x1a8f27f3212dd77b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_d8 ^ 0x485418f38bb58f0;
            uVar1 = local_d8 ^ local_e0;
            local_e0 = local_e0 ^ 0x485418f38bb58f0;
            local_d8 = uVar3;
            if (0x13a89ca3861841cd < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x30636305865264eb) {
              if (uVar1 == 0x9573017ffdda1445) {
                local_90 = *param_1;
                local_98 = local_d0 + local_c8;
                local_d8 = 0xe616a84ba425accf;
                if (0xfff < local_98) {
                  local_d8 = 0x482391c23abede80;
                }
                local_e0 = 0x215d30da8ff6da3d;
                local_60 = local_90;
              }
              else if (uVar1 == 0xaf0055dfda64cf58) {
                local_a8 = 0xf;
                local_b0 = 0;
                local_c8 = 1;
                local_b8 = 0x28;
                local_c0 = 0x7fffffffffffffff;
                local_d8 = 0x409e8ded1316869f;
                if ((longlong)param_2 < 0) {
                  local_d8 = 0xe3deabf9fbac5c5d;
                }
                local_e0 = 0x8f0211176abb1d8a;
              }
              else if (uVar1 == 0xc74b98912bd376f2) {
                thunk_FUN_1801f42e0(local_90,local_98);
                local_d8 = 0xc7e4124757007f40;
                local_e0 = 0x98f0053e8da75b84;
              }
            }
            else if (uVar1 == 0xcf9c9cfa79ad9b15) {
              local_58 = param_1 + 3;
              local_d0 = param_1[3];
              local_50 = local_d0 >> ((byte)local_c8 & 0x3f);
              local_d8 = 0x1478568b4182efc8;
              if ((local_50 ^ local_c0) < local_d0) {
                local_d8 = 0x5c37b0a9ad3e688b;
              }
              local_e0 = 0x2e120ada6344e203;
              local_78 = local_c0;
            }
            else if (uVar1 == 0xd571902b8c1d536e) {
              local_88 = local_a0;
              local_80 = FUN_1801d61c8(local_c8 + local_a0);
              local_d8 = 0x1ecf42b1deaa633c;
              local_e0 = 0xf57a1960a4a0ef2b;
            }
            else if (uVar1 == 0xebb55bd17a0a8c17) {
              local_70 = local_80;
              param_1[2] = param_2;
              *local_58 = local_88;
              FUN_1802079d0(local_80,param_4);
              *(undefined1 *)(local_80 + param_2) = 0;
              local_d8 = 0xe595473ba4395852;
              if (local_a8 < local_d0) {
                local_d8 = 0x2ff2513d834468d3;
              }
              local_e0 = 0xba8150427e9e7c96;
            }
          }
          if ((longlong)uVar1 < 0x5fc237194b7bccbe) break;
          if ((longlong)uVar1 < 0x6cdcbaee911741d7) {
            if (uVar1 == 0x5fc237194b7bccbe) {
              local_98 = local_d0 + local_b8;
              local_d8 = 0x6f9554dec5d7d10f;
              local_e0 = 0xa8decc4fee04a7fd;
              local_90 = local_48;
            }
            else if (uVar1 == 0x697ea118b54804bd) {
              local_48 = *(ulonglong *)(local_60 - 8);
              local_d8 = 0x27019873d12066ab;
              if ((local_60 - local_48) - 8 < 0x20) {
                local_d8 = 0x1ac4ffe13b3395b;
              }
              local_e0 = 0x5e6e78e758c8f5e5;
            }
          }
          else if (uVar1 == 0x7225ba73ce7a8a88) {
            lVar2 = FUN_1801d61c8(local_b8 + local_78);
            local_80 = lVar2 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(local_80 - 8) = lVar2;
            local_d8 = 0x74e29725fa1ecdba;
            local_e0 = 0x9f57ccf4801441ad;
            local_88 = local_78;
          }
          else {
            if (uVar1 == 0x6cdcbaee911741d7) {
              FUN_180002ac0();
            }
            if (uVar1 == 0x796fe09489e8934e) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b0);
            }
          }
        }
        if (0x3a6a5c5122c60dca < (longlong)uVar1) break;
        if (uVar1 == 0x13a89ca3861841ce) {
          local_d8 = 0x5826c6d1f3e3f340;
          if (local_a0 < 0xffffffffffffffd8) {
            local_d8 = 0x69da5c54dc93637f;
          }
          local_e0 = 0x1bffe62712e9e9f7;
          local_78 = local_a0;
        }
      }
      if (uVar1 != 0x3a6a5c5122c60dcb) break;
      local_a0 = local_50 + local_d0;
      if (local_50 + local_d0 < (local_a8 | param_2)) {
        local_a0 = local_a8 | param_2;
      }
      local_d8 = 0x8964c0a1c5963432;
      if (0xffe < local_a0) {
        local_d8 = 0x4fbdcc29cf932692;
      }
      local_e0 = 0x5c15508a498b675c;
    }
    if (uVar1 == 0x5f141779daa724c4) {
      *param_1 = local_70;
      return param_1;
    }
  } while (uVar1 != 0x43d920f6e10a1ab7);
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined8 * FUN_18007fb00(undefined8 *param_1,longlong *param_2,char param_3,char param_4)

{
  char *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong *puVar10;
  undefined1 local_d0 [56];
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_50;
  undefined8 *local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_39 = 1;
  local_3b = 2;
  local_3a = 0;
  local_70 = 0x18;
  local_78 = 0x10;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar6 = (char *)*param_2;
  bVar5 = true;
  if (pcVar6 != (char *)param_2[1]) {
    while( true ) {
      pcVar9 = *(char **)(pcVar6 + 0x10);
      if (*(char **)(pcVar6 + 0x10) == (char *)0x0) {
        pcVar9 = pcVar6;
      }
      bVar5 = false;
      if (*pcVar9 != '\x02') break;
      pcVar1 = (char *)**(undefined8 **)(pcVar9 + 8);
      bVar5 = false;
      if (((*(undefined8 **)(pcVar9 + 8))[1] - (longlong)pcVar1 != 0x20) || (bVar5 = false, *pcVar1 != '\x03')) break;
      pcVar6 = pcVar6 + 0x18;
      bVar5 = true;
      if (pcVar6 == (char *)param_2[1]) break;
    }
  }
  bVar4 = bVar5;
  local_48 = param_1;
  if (param_3 == '\0') {
    bVar4 = false;
    if (param_4 != '\x02') {
      bVar4 = bVar5;
    }
    if ((param_4 == '\x01') && (!bVar4)) {
      FUN_1800b8f52(&DAT_1802a2100,&DAT_180271f58,0x10,0x2b,&DAT_1802a212c);
      FUN_180057290(local_98,&DAT_1802a2100);
      FUN_1800839c0(local_d0,0x12d,local_98,0);
      FUN_1801dd110(local_d0,&DAT_180253620);
    }
  }
  if (bVar4) {
    *(undefined1 *)param_1 = 1;
    local_50 = (longlong *)FUN_1801d61c8(0x10);
    *local_50 = 0;
    local_50[1] = 0;
    lVar7 = FUN_1801d61c8(0x50);
    *(longlong *)lVar7 = lVar7;
    *(longlong *)(lVar7 + 8) = lVar7;
    *(longlong *)(lVar7 + 0x10) = lVar7;
    *(undefined1 *)(lVar7 + 0x18) = local_39;
    *(undefined1 *)(lVar7 + 0x19) = local_39;
    *local_50 = lVar7;
    local_48[1] = local_50;
    puVar2 = (ulonglong *)param_2[1];
    for (puVar10 = (ulonglong *)*param_2; puVar10 != puVar2; puVar10 = puVar10 + 3) {
      if (puVar10[2] == 0) {
        local_68 = *puVar10;
        uStack_60 = (undefined4)puVar10[1];
        uStack_5c = *(undefined4 *)((longlong)puVar10 + 0xc);
        *(undefined1 *)puVar10 = local_3a;
        puVar10[1] = 0;
      }
      else {
        FUN_180084300(&local_68);
      }
      FUN_180084ff0(local_48[1],local_98,*(undefined8 *)(*(longlong *)CONCAT44(uStack_5c,uStack_60) + 8),
                    *(longlong *)CONCAT44(uStack_5c,uStack_60) + 0x10);
      FUN_18007ff50(&uStack_60,local_68 & 0xff);
    }
  }
  else {
    *(undefined1 *)param_1 = 2;
    lVar7 = *param_2;
    uVar3 = param_2[1];
    local_50 = (longlong *)FUN_1801d61c8(0x18);
    *local_50 = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    uVar8 = uVar3 - lVar7;
    if ((uVar8 | local_70) >> 0x20 == 0) {
      uVar8 = (uVar8 & 0xffffffff) / (local_70 & 0xffffffff);
    }
    else {
      uVar8 = (longlong)uVar8 / (longlong)local_70;
    }
    local_98[0] = lVar7;
    local_68 = uVar3;
    FUN_180086d00(local_50,uVar8,local_98,&local_68);
    local_48[1] = local_50;
  }
  return local_48;
}



void Unwind_18007fe20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x60);
  return;
}



void Unwind_18007fe50(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x90);
  return;
}



void Unwind_18007fe80(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(*(undefined8 *)(param_2 + 0xb0));
  return;
}



void Unwind_18007feb0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x80));
  return;
}



void Unwind_18007fef0(void)

{
  Unwind_1801dd394();
}



void Unwind_18007ff10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x88));
  return;
}



void FUN_18007ff50(longlong *param_1,byte param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  char *pcVar17;
  bool bVar18;
  undefined8 local_b8;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uintptr_t local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  uint local_50;
  undefined1 local_4a;
  char local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_4a = 2;
  local_70 = 0;
  local_b8 = 0x28;
  local_49 = '\0';
  local_50 = 0;
  plVar7 = (longlong *)*param_1;
  if (param_2 == 1 && plVar7 == (longlong *)0x0) {
    return;
  }
  if ((param_2 == 8 || (param_2 & 0xfe) == 2) && plVar7 == (longlong *)0x0) {
    return;
  }
  if ((byte)(param_2 - 1) < 2) {
    local_68 = (undefined4 *)0x0;
    puStack_60 = (undefined4 *)0x0;
    local_58 = (undefined4 *)0x0;
    if (param_2 == 2) {
      pcVar17 = (char *)plVar7[1];
      local_88 = (longlong)pcVar17 - *plVar7 >> 4;
      if (pcVar17 != (char *)*plVar7) {
        if (0xfffffffffffffff < local_88) {
          FUN_1800807e0();
        }
        FUN_180080820(&local_68,&local_88);
        plVar7 = (longlong *)*param_1;
        pcVar17 = (char *)plVar7[1];
      }
      for (pcVar15 = (char *)*plVar7; pcVar15 != pcVar17; pcVar15 = pcVar15 + 0x10) {
        if (puStack_60 == local_58) {
          FUN_180080af0(&local_68);
        }
        else {
          uVar3 = *(undefined4 *)(pcVar15 + 4);
          uVar4 = *(undefined4 *)(pcVar15 + 8);
          uVar5 = *(undefined4 *)(pcVar15 + 0xc);
          *puStack_60 = *(undefined4 *)pcVar15;
          puStack_60[1] = uVar3;
          puStack_60[2] = uVar4;
          puStack_60[3] = uVar5;
          *pcVar15 = local_49;
          pcVar15[8] = '\0';
          pcVar15[9] = '\0';
          pcVar15[10] = '\0';
          pcVar15[0xb] = '\0';
          pcVar15[0xc] = '\0';
          pcVar15[0xd] = '\0';
          pcVar15[0xe] = '\0';
          pcVar15[0xf] = '\0';
          puStack_60 = puStack_60 + 4;
        }
      }
    }
    else {
      local_88 = plVar7[1];
      if (local_88 != 0) {
        if (0xfffffffffffffff < local_88) {
          FUN_1800807e0();
        }
        FUN_180080820(&local_68,&local_88);
        plVar7 = (longlong *)*param_1;
      }
      puVar1 = (undefined8 *)*plVar7;
      puVar8 = (undefined8 *)*puVar1;
LAB_1800801a0:
      if (puVar8 != puVar1) {
        if (puStack_60 == local_58) {
          FUN_180080af0(&local_68);
        }
        else {
          uVar3 = *(undefined4 *)((longlong)puVar8 + 0x44);
          uVar4 = *(undefined4 *)(puVar8 + 9);
          uVar5 = *(undefined4 *)((longlong)puVar8 + 0x4c);
          *puStack_60 = *(undefined4 *)(puVar8 + 8);
          puStack_60[1] = uVar3;
          puStack_60[2] = uVar4;
          puStack_60[3] = uVar5;
          *(char *)(puVar8 + 8) = local_49;
          puVar8[9] = 0;
          puStack_60 = puStack_60 + 4;
        }
        puVar6 = (undefined8 *)puVar8[2];
        puVar16 = puVar8;
        if (*(char *)((longlong)puVar8[2] + 0x19) == local_49) {
          do {
            puVar8 = puVar6;
            puVar6 = (undefined8 *)*puVar8;
          } while (*(char *)((longlong)*puVar8 + 0x19) == local_49);
        }
        else {
          do {
            puVar8 = (undefined8 *)puVar16[1];
            if (*(char *)((longlong)puVar8 + 0x19) != local_49) break;
            bVar18 = puVar16 == (undefined8 *)puVar8[2];
            puVar16 = puVar8;
          } while (bVar18);
        }
        goto LAB_1800801a0;
      }
    }
    if (local_68 != puStack_60) {
      do {
        local_88 = *(ulonglong *)(puStack_60 + -4);
        uStack_80 = puStack_60[-2];
        uStack_7c = puStack_60[-1];
        *(char *)(puStack_60 + -4) = local_49;
        *(undefined8 *)(puStack_60 + -2) = 0;
        FUN_18007ff50(puStack_60 + -2,*(undefined1 *)(puStack_60 + -4));
        puStack_60 = puStack_60 + -4;
        if ((char)local_88 < '\x02') {
          if ((char)local_88 == '\x01') {
            puVar1 = *(undefined8 **)CONCAT44(uStack_7c,uStack_80);
            puVar8 = (undefined8 *)*puVar1;
LAB_1800802b0:
            if (puVar8 != puVar1) {
              if (puStack_60 == local_58) {
                FUN_180080af0(&local_68);
              }
              else {
                uVar3 = *(undefined4 *)((longlong)puVar8 + 0x44);
                uVar4 = *(undefined4 *)(puVar8 + 9);
                uVar5 = *(undefined4 *)((longlong)puVar8 + 0x4c);
                *puStack_60 = *(undefined4 *)(puVar8 + 8);
                puStack_60[1] = uVar3;
                puStack_60[2] = uVar4;
                puStack_60[3] = uVar5;
                *(char *)(puVar8 + 8) = local_49;
                puVar8[9] = 0;
                puStack_60 = puStack_60 + 4;
              }
              puVar6 = (undefined8 *)puVar8[2];
              puVar16 = puVar8;
              if (*(char *)((longlong)puVar8[2] + 0x19) == local_49) {
                do {
                  puVar8 = puVar6;
                  puVar6 = (undefined8 *)*puVar8;
                } while (*(char *)((longlong)*puVar8 + 0x19) == local_49);
              }
              else {
                do {
                  puVar8 = (undefined8 *)puVar16[1];
                  if (*(char *)((longlong)puVar8 + 0x19) != local_49) break;
                  bVar18 = puVar16 == (undefined8 *)puVar8[2];
                  puVar16 = puVar8;
                } while (bVar18);
              }
              goto LAB_1800802b0;
            }
            plVar7 = (longlong *)CONCAT44(uStack_7c,uStack_80);
            lVar2 = *plVar7;
            FUN_180080fa0(plVar7,plVar7);
            *(longlong *)(lVar2 + 8) = lVar2;
            *(longlong *)lVar2 = lVar2;
            *(longlong *)(lVar2 + 0x10) = lVar2;
            plVar7[1] = local_70;
          }
        }
        else if ((char)local_88 == '\x02') {
          pcVar15 = (char *)((undefined8 *)CONCAT44(uStack_7c,uStack_80))[1];
          for (pcVar17 = *(char **)CONCAT44(uStack_7c,uStack_80); pcVar17 != pcVar15; pcVar17 = pcVar17 + 0x10) {
            while (puStack_60 == local_58) {
              FUN_180080af0(&local_68);
              pcVar17 = pcVar17 + 0x10;
              if (pcVar17 == pcVar15) goto LAB_1800803c3;
            }
            uVar3 = *(undefined4 *)(pcVar17 + 4);
            uVar4 = *(undefined4 *)(pcVar17 + 8);
            uVar5 = *(undefined4 *)(pcVar17 + 0xc);
            *puStack_60 = *(undefined4 *)pcVar17;
            puStack_60[1] = uVar3;
            puStack_60[2] = uVar4;
            puStack_60[3] = uVar5;
            *pcVar17 = local_49;
            pcVar17[8] = '\0';
            pcVar17[9] = '\0';
            pcVar17[10] = '\0';
            pcVar17[0xb] = '\0';
            pcVar17[0xc] = '\0';
            pcVar17[0xd] = '\0';
            pcVar17[0xe] = '\0';
            pcVar17[0xf] = '\0';
            puStack_60 = puStack_60 + 4;
          }
LAB_1800803c3:
          puVar1 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
          puVar13 = (undefined1 *)*puVar1;
          puVar14 = (undefined1 *)puVar1[1];
          if (puVar13 != puVar14) {
            do {
              FUN_18007ff50(puVar13 + 8,*puVar13);
              puVar13 = puVar13 + 0x10;
            } while (puVar13 != puVar14);
            puVar1[1] = *puVar1;
          }
        }
        FUN_18007ff50(&uStack_80,local_88 & 0xff);
      } while (local_68 != puStack_60);
    }
    if (local_68 != (undefined4 *)0x0) {
      uVar11 = (longlong)local_58 - (longlong)local_68;
      puVar9 = local_68;
      if (0xfff < uVar11) {
        puVar9 = *(undefined4 **)(local_68 + -2);
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)puVar9))) goto LAB_18008066f;
        uVar11 = uVar11 + 0x27;
      }
      thunk_FUN_1801f42e0(puVar9,uVar11);
    }
  }
  if ((char)param_2 < '\x03') {
    if (param_2 == 2) {
      plVar7 = (longlong *)*param_1;
      puVar13 = (undefined1 *)*plVar7;
      if (puVar13 != (undefined1 *)0x0) {
        puVar14 = (undefined1 *)plVar7[1];
        if (puVar13 != puVar14) {
          do {
            FUN_18007ff50(puVar13 + 8,*puVar13);
            puVar13 = puVar13 + 0x10;
          } while (puVar13 != puVar14);
          puVar13 = (undefined1 *)*plVar7;
        }
        uVar11 = plVar7[2] - (longlong)puVar13;
        puVar14 = puVar13;
        if (0xfff < uVar11) {
          puVar14 = *(undefined1 **)(puVar13 + -8);
          if ((undefined1 *)0x1f < puVar13 + (-8 - (longlong)puVar14)) goto LAB_18008066f;
          uVar11 = uVar11 + 0x27;
        }
        thunk_FUN_1801f42e0(puVar14,uVar11);
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7[2] = 0;
        plVar7 = (longlong *)*param_1;
      }
      local_b8 = 0x18;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      plVar7 = (longlong *)*param_1;
      FUN_180080fa0(plVar7,plVar7,*(undefined8 *)(*plVar7 + 8));
      thunk_FUN_1801f42e0(*plVar7,0x50);
      plVar7 = (longlong *)*param_1;
      local_b8 = 0x10;
    }
  }
  else if ((char)param_2 < '\b') {
    if (param_2 != 3) {
      return;
    }
    plVar7 = (longlong *)*param_1;
    uVar11 = plVar7[3];
    if (0xf < uVar11) {
      lVar2 = *plVar7;
      uVar12 = uVar11 + 1;
      lVar10 = lVar2;
      if (0xfff < uVar12) {
        lVar10 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar10)) {
LAB_18008066f:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_70);
        }
        uVar12 = uVar11 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    plVar7[2] = local_70;
    plVar7[3] = 0xf;
    *(char *)plVar7 = local_49;
    plVar7 = (longlong *)*param_1;
    local_b8 = 0x20;
  }
  else {
    if (param_2 != 8) {
      return;
    }
    plVar7 = (longlong *)*param_1;
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      uVar11 = plVar7[2] - lVar2;
      lVar10 = lVar2;
      if (0xfff < uVar11) {
        lVar10 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar10)) goto LAB_18008066f;
        uVar11 = uVar11 + 0x27;
      }
      thunk_FUN_1801f42e0(lVar10,uVar11);
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7 = (longlong *)*param_1;
    }
  }
  thunk_FUN_1801f42e0(plVar7,local_b8);
  return;
}


