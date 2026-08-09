#include "../include/aerialclient_types.h"


void Unwind_1800d0a60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x120);
  return;
}



void Unwind_1800d0b40(undefined8 param_1,longlong param_2)

{
  FUN_1800c5b80(param_2 + 0x68);
  return;
}



void FUN_1800d0c10(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_191;
  ulonglong local_190;
  ulonglong local_188;
  uintptr_t local_180;
  ulonglong local_178;
  uint local_16c;
  undefined4 *local_168;
  undefined4 *local_160;
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  undefined4 *local_130;
  longlong *local_128;
  undefined4 *local_120;
  longlong *local_118;
  ulonglong local_110;
  undefined8 *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined4 *local_b0;
  longlong local_90;
  longlong local_88;
  undefined4 *local_80;
  longlong local_78;
  ulonglong *local_70;
  undefined4 *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 *local_50;
  undefined4 *local_48;

  local_188 = 0x4618a46b7a52f4fe;
  local_190 = 0x96c85b0674cf51a4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar10 = local_188 ^ 0x80bf058b83df2308;
              uVar9 = local_188 ^ local_190;
              local_190 = local_190 ^ 0x80bf058b83df2308;
              local_188 = uVar10;
              if (-0x119455c3acbc9f1 < (longlong)uVar9) break;
              if ((longlong)uVar9 < -0x4e108d65ee2a67fe) {
                if ((longlong)uVar9 < -0x5ed9c6109c68c210) {
                  if (uVar9 == 0x82899d05857ec538) {
                    thunk_FUN_1801f42e0(local_b8,local_c0);
                    local_188 = 0x237527efb2fcc1a6;
                    local_190 = 0x929a5575a32959a4;
                  }
                  else if (uVar9 == 0x90d2894110a4c019) {
                    local_88 = *(longlong *)(local_78 + -8);
                    local_188 = 0xb9eca80bdc8012ab;
                    if ((ulonglong)((local_78 + local_158) - local_88) < local_150) {
                      local_188 = 0xe62c2b477a23194b;
                    }
                    local_190 = 0x470a12a819b424bb;
                  }
                }
                else if (uVar9 == 0xa12639ef63973df0) {
                  local_c0 = local_110 + local_148;
                  local_b8 = local_88;
                  local_188 = 0x4b7865fd1ccd0de7;
                  local_190 = 0xc9f1f8f899b3c8df;
                }
                else if (uVar9 == 0xafffffc3127eb0c5) {
                  local_168 = local_d0;
                  local_160 = local_d8;
                  uVar1 = *local_d8;
                  uVar2 = local_d8[1];
                  uVar3 = local_d8[2];
                  uVar4 = local_d8[3];
                  uVar6 = *(undefined8 *)(local_d8 + 4);
                  uVar7 = *(undefined8 *)(local_d8 + 6);
                  uVar8 = *(undefined8 *)(local_d8 + 9);
                  *(undefined8 *)(local_d0 + 7) = *(undefined8 *)(local_d8 + 7);
                  *(undefined8 *)(local_d0 + 9) = uVar8;
                  *(undefined8 *)(local_d0 + 4) = uVar6;
                  *(undefined8 *)(local_d0 + 6) = uVar7;
                  *local_d0 = uVar1;
                  local_d0[1] = uVar2;
                  local_d0[2] = uVar3;
                  local_d0[3] = uVar4;
                  local_128 = (longlong *)(local_d0 + 0xc);
                  local_120 = local_d8 + 0xc;
                  local_188 = 0x9d92b6081eaa48cd;
                  if (local_d0 == local_d8) {
                    local_188 = 0xba3f5eb9d66d5b3f;
                  }
                  local_190 = 0xb9cc6770dbc1131b;
                }
                else if (uVar9 == 0xb0e8f0488798d91d) {
                  local_e8 = (undefined4 *)*local_108;
                  local_188 = 0xe3dc0fd1233f9114;
                  local_190 = 0xfbadf4a1f34e1ec2;
                  local_e0 = local_80;
                }
              }
              else if ((longlong)uVar9 < -0x32fd25bbd9a66f33) {
                if (uVar9 == 0xb1ef729a11d59802) {
                  *(uintptr_t *)(local_b0 + 0x10) = local_180;
                  *local_70 = local_178;
                  *(undefined1 *)local_118 = local_191;
                  local_c8 = local_b0 + 0x1e;
                  local_188 = 0x195d5d4ea3369727;
                  if (local_c8 == local_48) {
                    local_188 = 0xdd51f3d472f52bd3;
                  }
                  local_190 = 0xc10863e0968231fe;
                }
                else if (uVar9 == 0xbc906081c31076e6) {
                  thunk_FUN_1801f42e0(local_f0,local_f8);
                  local_188 = 0x10f98729ce5d0ba1;
                  local_190 = 0x470c5509298ff621;
                }
                else if (uVar9 == 0xc754528b1390fd86) {
                  local_90 = *(longlong *)(local_58 + -8);
                  local_188 = 0x997567445affd837;
                  if ((ulonglong)((local_58 + local_158) - local_90) < local_150) {
                    local_188 = 0x3f5c5fbd7a117bb4;
                  }
                  local_190 = 0x5477bd007ca648fa;
                }
              }
              else if (uVar9 == 0xd0d0ff6d0e9da55a) {
                local_191 = 0;
                local_16c = 0;
                local_138 = 0xfff;
                local_140 = 1;
                local_148 = 0x28;
                local_178 = 0xf;
                local_150 = 0x20;
                local_158 = -8;
                local_180 = 0;
                local_188 = 0x7c35eff5a150e5b6;
                if (param_3 == param_4) {
                  local_188 = 0x74b2ad6ba55d1d4d;
                }
                local_190 = 0x40d86b5790d2509e;
                local_130 = param_3;
              }
              else if (uVar9 == 0xd8553eae35b4a6d9) {
                local_b0 = local_c8;
                local_118 = (longlong *)(local_c8 + 0xc);
                local_70 = (ulonglong *)(local_c8 + 0x12);
                local_110 = *(ulonglong *)(local_c8 + 0x12);
                local_188 = 0x79bf10d1461fb94f;
                if (local_178 < local_110) {
                  local_188 = 0xedf8fdddd7aedaa2;
                }
                local_190 = 0xc850624b57ca214d;
              }
              else if (uVar9 == 0xcd02da44265990cd) goto LAB_1800d1682;
            }
            if ((longlong)uVar9 < 0x25a89f968064fbef) break;
            if ((longlong)uVar9 < 0x57f5d220e7d2fd80) {
              if (uVar9 == 0x25a89f968064fbef) {
                local_b8 = *local_118;
                local_c0 = local_110 + local_140;
                local_188 = 0x5b2ec2c07db459db;
                if (local_138 < local_c0) {
                  local_188 = 0x4975d684e86e5cfa;
                }
                local_190 = 0xd9a75fc5f8ca9ce3;
                local_78 = local_b8;
              }
              else if (uVar9 == 0x3ced84a23182b528) {
                local_108 = (undefined8 *)(param_1 + 8);
                local_68 = *(undefined4 **)(param_1 + 8);
                local_188 = 0xa48c9194b8329c71;
                if (local_68 == param_4) {
                  local_188 = 0x130295277a3da362;
                }
                local_190 = 0xb736e57aa4c2cb4;
                local_e0 = local_130;
                local_d0 = local_130;
                local_e8 = param_4;
                local_d8 = param_4;
              }
              else if (uVar9 == 0x346ac63c358f4dd3) {
                *param_2 = local_130;
                return;
              }
            }
            else if (uVar9 == 0x57f5d220e7d2fd80) {
              *(uintptr_t *)(local_168 + 0x10) = local_180;
              *local_60 = local_178;
              *(undefined1 *)local_128 = local_191;
              uVar1 = *local_120;
              uVar2 = local_120[1];
              uVar3 = local_120[2];
              uVar4 = local_120[3];
              lVar5 = *(longlong *)(local_120 + 6);
              local_128[2] = *(longlong *)(local_120 + 4);
              local_128[3] = lVar5;
              *(undefined4 *)local_128 = uVar1;
              *(undefined4 *)((longlong)local_128 + 4) = uVar2;
              *(undefined4 *)(local_128 + 1) = uVar3;
              *(undefined4 *)((longlong)local_128 + 0xc) = uVar4;
              *(uintptr_t *)(local_160 + 0x10) = local_180;
              *(ulonglong *)(local_160 + 0x12) = local_178;
              *(undefined1 *)local_120 = local_191;
              local_188 = 0xd47e5607c3754f0b;
              local_190 = 0xd78d6fceced9072f;
            }
            else if (uVar9 == 0x6b2be2bd06b7334e) {
              local_f8 = local_100 + local_148;
              local_188 = 0xca85c201689678e9;
              local_190 = 0x7615a280ab860e0f;
              local_f0 = local_90;
            }
          }
          if ((longlong)uVar9 < 0x1c599034e4771a2d) break;
          if (uVar9 == 0x1c599034e4771a2d) {
            *local_108 = local_50;
            local_188 = 0xa50dca8a808ca5a8;
            local_190 = 0x91670cb6b503e87b;
          }
          else if (uVar9 == 0x1ce3afb6b191298e) {
            local_f0 = *local_128;
            local_f8 = local_100 + local_140;
            local_188 = 0x8b1b7164f6470bd8;
            if (local_138 < local_f8) {
              local_188 = 0xf0df436e26c780b8;
            }
            local_190 = 0x378b11e535577d3e;
            local_58 = local_f0;
          }
          else if (uVar9 == 0x245ed178c56b5bd6) {
            local_60 = (ulonglong *)(local_168 + 0x12);
            local_100 = *(ulonglong *)(local_168 + 0x12);
            local_188 = 0x82ed56d68d801d45;
            if (local_178 < local_100) {
              local_188 = 0xc9fb2b40dbc3c94b;
            }
            local_190 = 0xd51884f66a52e0c5;
          }
        }
        if (uVar9 != 0x3f339c90dac4824) break;
        *(undefined8 *)(local_168 + 0x1c) = *(undefined8 *)(local_160 + 0x1c);
        uVar1 = local_160[0x14];
        uVar2 = local_160[0x15];
        uVar3 = local_160[0x16];
        uVar4 = local_160[0x17];
        uVar6 = *(undefined8 *)(local_160 + 0x1a);
        *(undefined8 *)(local_168 + 0x18) = *(undefined8 *)(local_160 + 0x18);
        *(undefined8 *)(local_168 + 0x1a) = uVar6;
        local_168[0x14] = uVar1;
        local_168[0x15] = uVar2;
        local_168[0x16] = uVar3;
        local_168[0x17] = uVar4;
        local_d0 = local_168 + 0x1e;
        local_d8 = local_160 + 0x1e;
        local_188 = 0x356a5e5675a3d0dc;
        if (local_d8 == local_68) {
          local_188 = 0x2a7d51dde045b904;
        }
        local_190 = 0x9a95a19567dd6019;
        local_80 = local_d0;
      }
      if (uVar9 != 0x1871fb70d0718fd6) break;
      local_48 = local_e8;
      local_188 = 0x5e1676c803271bb1;
      if (local_e0 == local_e8) {
        local_188 = 0x9a1ad852d2e4a745;
      }
      local_50 = local_e0;
      local_190 = 0x864348663693bd68;
      local_c8 = local_e0;
    }
  } while (uVar9 != 0xfee6baa3c5343610);
LAB_1800d1682:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_16c,local_180);
}



void FUN_1800d16d0(longlong param_1,float *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float local_128;
  float local_124;
  ulonglong local_120;
  ulonglong local_118;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  int local_f4;
  float local_f0;
  float local_ec;
  uint local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  float local_c8 [6];
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;

  local_118 = 0xeddb065709cc78fe;
  local_120 = 0xc928d99a592c9a37;
  local_d8 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_118 ^ 0x5d7ac5c4fea0a17c;
              uVar1 = local_118 ^ local_120;
              local_120 = local_120 ^ 0x5d7ac5c4fea0a17c;
              local_118 = uVar2;
              if ((longlong)uVar1 < 0x2d4f483f38a7d294) break;
              if ((longlong)uVar1 < 0x510c93c349bc61f4) {
                if ((longlong)uVar1 < 0x4462496b32726552) {
                  if (uVar1 == 0x2d4f483f38a7d294) {
                    local_c8[0] = 0.0;
                    local_c8[1] = 0.0;
                    local_c8[2] = 0.0;
                    local_c8[3] = 0.0;
                    local_c8[local_e8 & 3] = local_10c;
                    fVar5 = (float)local_e0 - local_c8[0];
                    local_c8[4] = 0.0;
                    local_c8[5] = 0.0;
                    uStack_b0 = 0x8000000000000000;
                    local_c8[(ulonglong)(local_e8 & 3) + 4] = local_104;
                    local_a8._0_4_ = (float)local_c8._16_8_;
                    local_a8 = CONCAT44(local_100,(float)local_a8);
                    uStack_a0 = uStack_b0;
                    fStack_8c = (float)((ulonglong)uStack_b0 >> 0x20);
                    fStack_90 = local_fc;
                    local_98 = local_a8;
                    *(float *)(local_d0 + 0x90) = fVar5 + (float)local_a8;
                    *(float *)(local_d0 + 0x94) = fVar5 + local_100;
                    *(float *)(local_d0 + 0x98) = fVar5 + local_fc;
                    *(float *)(local_d0 + 0x9c) = ((float)((ulonglong)local_e0 >> 0x20) - local_c8[1]) + fStack_8c;
                    local_118 = 0x707915df86b73c4b;
                    local_120 = 0xf290a4095bcc771d;
                  }
                  else if (uVar1 == 0x3b1fc26e3acf9eb5) {
                    local_118 = 0x2f4be70f95575eb0;
                    if (local_f4 < 2) {
                      local_118 = 0x83bca19c33c85a53;
                    }
                    local_120 = 0x86b038ef2279104a;
                  }
                }
                else if (uVar1 == 0x4462496b32726552) {
                  fVar5 = *(float *)(param_1 + 0x1bc) - *(float *)(param_1 + 0x1b4);
                  uVar3 = -(uint)(local_128 < fVar5);
                  fVar5 = (*param_2 - *(float *)(param_1 + 0x1b4)) /
                          (float)(~uVar3 & (uint)local_128 | (uint)fVar5 & uVar3);
                  *(uint *)(param_1 + 0x1a8) =
                       (uint)local_128 & -(uint)(local_128 < fVar5) |
                       ~-(uint)(local_128 < fVar5) &
                       ((uint)local_124 & -(uint)(fVar5 < local_124) | ~-(uint)(fVar5 < local_124) & (uint)fVar5);
                  fVar5 = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x1b8);
                  uVar3 = -(uint)(local_128 < fVar5);
                  fVar5 = local_128 -
                          (param_2[1] - *(float *)(param_1 + 0x1b8)) /
                          (float)(~uVar3 & (uint)local_128 | (uint)fVar5 & uVar3);
                  *(uint *)(param_1 + 0x1ac) =
                       (uint)local_128 & -(uint)(local_128 < fVar5) |
                       ~-(uint)(local_128 < fVar5) &
                       ((uint)local_124 & -(uint)(fVar5 < local_124) | ~-(uint)(fVar5 < local_124) & (uint)fVar5);
                  local_118 = 0x1d4db1b89947545;
                  local_120 = 0x5f13e493e555978b;
                }
                else if (uVar1 == 0x50c3ebdd107d501c) {
                  local_118 = 0x1a913b6e1a02aef2;
                  if (local_108 < 180.0) {
                    local_118 = 0x122860f1785f0f59;
                  }
                  local_120 = 0x3f6728ce40f8ddcd;
                  local_104 = local_124;
                  local_100 = local_10c;
                  local_fc = local_f0;
                }
              }
              else if ((longlong)uVar1 < 0x5ec73f886cc1e2ce) {
                if (uVar1 == 0x510c93c349bc61f4) {
                  local_fc = local_10c;
                  if (300.0 <= local_108) {
                    local_fc = local_f0;
                  }
                  local_104 = (float)(~-(uint)(local_108 < 300.0) & (uint)local_10c |
                                     (uint)local_f0 & -(uint)(local_108 < 300.0));
                  local_118 = 0x7501b41d8c7d2793;
                  local_120 = 0x584efc22b4daf507;
                  local_100 = local_124;
                }
                else if (uVar1 == 0x56303bfdd252e685) {
                  local_118 = 0x19b7df57804bb1de;
                  if (local_f4 == 3) {
                    local_118 = 0x421457759a9f5039;
                  }
                  local_120 = 0x699f41c5ec8af4f2;
                }
              }
              else if (uVar1 == 0x5ec73f886cc1e2ce) {
                local_d0 = *(longlong *)(param_1 + 0x198);
                local_118 = 0xc43ea34d603429ec;
                if (local_d0 == 0) {
                  local_118 = 0x90d392b5d11bb2ab;
                }
                local_120 = 0x123a23630c60f9fd;
              }
              else if (uVar1 == 0x70289e926cc1452c) {
                local_118 = 0x24ee4aba731781e9;
                local_120 = 0xa607fb6cae6ccabf;
              }
            }
            if ((longlong)uVar1 < 0x50c997311b14a19) break;
            if ((longlong)uVar1 < 0x25f613a05afa733f) {
              if (uVar1 == 0x50c997311b14a19) {
                local_118 = 0x1077311e4015ba40;
                if (local_f4 == 1) {
                  local_118 = 0x243de6e71ea69a3e;
                }
                local_120 = 0x605faf8c2cd4ff6c;
              }
              else if (uVar1 == 0x24f3dfcd50e0e2c9) {
                local_128 = 1.0;
                local_f8 = 360.0;
                local_124 = 0.0;
                local_ec = 60.0;
                local_e8 = 0;
                local_f4 = *(int *)(param_1 + 0x1a0);
                local_118 = 0x8fb96f6ec81967ed;
                local_120 = 0xb4a6ad00f2d6f958;
              }
            }
            else if (uVar1 == 0x25f613a05afa733f) {
              local_118 = 0x503a1efecb055aa7;
              if (local_108 < 240.0) {
                local_118 = 0x2c79c502ba1ee9c7;
              }
              local_120 = 0x1368d3d82b93b53;
              local_104 = local_124;
              local_100 = local_f0;
              local_fc = local_10c;
            }
            else if (uVar1 == 0x2b8b16b07615a4cb) {
              fVar5 = *(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1d4);
              uVar3 = -(uint)(local_128 < fVar5);
              fVar5 = (*param_2 - *(float *)(param_1 + 0x1d4)) / (float)(~uVar3 & (uint)local_128 | (uint)fVar5 & uVar3)
              ;
              *(uint *)(param_1 + 0x1b0) =
                   (uint)local_128 & -(uint)(local_128 < fVar5) |
                   ~-(uint)(local_128 < fVar5) &
                   ((uint)local_124 & -(uint)(fVar5 < local_124) | ~-(uint)(fVar5 < local_124) & (uint)fVar5);
              local_118 = 0xc6c35d6a81cce4b1;
              local_120 = 0x980462e2ed0d067f;
            }
          }
          if ((longlong)uVar1 < -0x29fb7fd193ab2fef) break;
          if (uVar1 == 0xd604802e6c54d011) {
            local_e0 = *(undefined8 *)(param_1 + 0x1ac);
            fVar5 = *(float *)(param_1 + 0x1a8);
            fVar4 = (float)FUN_1801ebe20();
            local_108 = (float)((uint)(local_f8 + fVar4) & -(uint)(fVar4 < local_124) |
                               ~-(uint)(fVar4 < local_124) & (uint)fVar4);
            local_10c = fVar5 * *(float *)((longlong)&local_e0 + (ulonglong)(local_e8 & 1) * 4);
            fVar5 = (float)FUN_1801ebe20(0xbbe4a56,0x40000000,local_108 / local_ec);
            local_100 = (local_128 - ABS(fVar5 + -1.0)) * local_10c;
            local_118 = 0x236de146320fe8c2;
            if (local_108 < local_ec) {
              local_118 = 0xea6fbf1ab5a5aee;
            }
            local_120 = 0x23e9b3ce93fd887a;
            local_fc = local_124;
            param_1 = local_d8;
            local_104 = local_10c;
            local_f0 = local_100;
          }
          else if (uVar1 == 0x845288a1f260b8) {
            local_118 = 0xb2b53201261781c2;
            if (local_108 < 120.0) {
              local_118 = 0xcf3991e30ecd034a;
            }
            local_fc = local_124;
            local_120 = 0xe276d9dc366ad1de;
            local_100 = local_10c;
            local_104 = local_f0;
          }
        }
        if (uVar1 != 0xa9fbdfe0b72e4efa) break;
        local_118 = 0x71b616ac39b2a55e;
        if (local_f4 < 3) {
          local_118 = 0xe612558fddbeefc3;
        }
        local_120 = 0x27862d51ebe043db;
      }
      if (uVar1 != 0xc19478de365eac18) break;
      fVar5 = *(float *)(param_1 + 0x1cc) - *(float *)(param_1 + 0x1c4);
      uVar3 = -(uint)(local_128 < fVar5);
      fVar5 = (*param_2 - *(float *)(param_1 + 0x1c4)) / (float)(~uVar3 & (uint)local_128 | (uint)fVar5 & uVar3);
      *(uint *)(param_1 + 0x1a4) =
           (uint)local_f8 & -(uint)(local_128 < fVar5) |
           ~-(uint)(local_128 < fVar5) &
           (uint)((float)((uint)local_124 & -(uint)(fVar5 < local_124) | ~-(uint)(fVar5 < local_124) & (uint)fVar5) *
                 local_f8);
      local_118 = 0x6ae29e5aafe64cb1;
      local_120 = 0x3425a1d2c327ae7f;
    }
  } while (uVar1 != 0x82e9b1d6dd7b4b56);
  return;
}



void FUN_1800d2180(longlong param_1,undefined8 *param_2,float param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 local_150;
  undefined4 local_144;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 local_130;
  float local_128 [2];
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  float local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;

  local_f0 = DAT_1802a0400 ^ (ulonglong)auStack_178;
  local_138 = 0x344c5f5659f91807;
  local_140 = 0xe5557fd6047cb748;
  local_120 = param_2;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_138 ^ local_140;
        local_140 = local_140 ^ 0x6de7b9cc19ba4d9d;
        if (uVar2 != 0x8ac17b797935bcf0) break;
        local_138 = local_138 ^ 0x6de7b9cc19ba4d9d;
        lVar3 = FUN_1800eb430();
        fVar8 = param_3 * 8.0;
        fVar4 = (float)FUN_180173360(param_1 + 0x1f0,param_3 * 12.0,local_144);
        fVar7 = param_3 * 22.0;
        uVar1 = *local_120;
        local_128[(uint)local_130 & 1] = fVar8 + fVar8 + fVar4;
        auVar5._0_4_ = ((float)uVar1 - local_128[0]) + -4.0;
        auVar5._4_4_ = ((float)((ulonglong)uVar1 >> 0x20) - fVar7) + -4.0;
        auVar5._8_8_ = 0;
        auVar6._4_4_ = param_3 * 18.0 + (float)((ulonglong)*(undefined8 *)(param_1 + 0x214) >> 0x20);
        auVar6._0_4_ = param_3 * 14.0 + (float)*(undefined8 *)(param_1 + 0x214);
        auVar6._8_4_ = param_3 * 0.0 + 0.0;
        auVar6._12_4_ = param_3 * 0.0 + 0.0;
        auVar6 = minps(auVar5,auVar6);
        uStack_f8 = CONCAT44(fVar7 + auVar6._4_4_,local_128[0] + auVar6._0_4_);
        local_100 = auVar6._0_8_;
        local_104 = param_3 * 2.0;
        local_108 = 0;
        local_118 = 0;
        uStack_110 = 0x3f00000000000000;
        local_158 = &local_108;
        local_128[1] = fVar7;
        FUN_180172cc0(&local_100,&local_118);
        local_118 = 0x3da0a0a13d888889;
        uStack_110 = 0x3f7851ec3dd8d8d9;
        FUN_180172640(&local_100,&local_118);
        local_118 = 0x3f8000003f800000;
        uStack_110 = 0x3da3d70a3f800000;
        FUN_1801728e0(&local_100,&local_118);
        local_118 = CONCAT44(local_100._4_4_ + param_3 * 4.0,fVar8 + (float)local_100);
        local_150 = local_144;
        local_158 = (undefined4 *)CONCAT44(local_158._4_4_,local_144);
        FUN_180173000(param_1 + 0x1f0,&local_118,lVar3 + 0x70,param_3 * 12.0);
        local_138 = 0x244f610b3c7ac586;
        local_140 = 0x7b42ee8d861d2e1b;
      }
      if (uVar2 != 0xd11920805d85af4f) break;
      local_144 = 0;
      local_130 = 0;
      local_138 = 0x237ba5471efeab83;
      if (*(longlong *)(param_1 + 0x200) == 0) {
        local_138 = 0xf6b751b8ddacfcee;
      }
      local_140 = 0xa9bade3e67cb1773;
    }
    local_138 = local_138 ^ 0x6de7b9cc19ba4d9d;
  } while (uVar2 != 0x5f0d8f86ba67eb9d);
  if (DAT_1802a0400 == (local_f0 ^ (ulonglong)auStack_178)) {
    return;
  }
}



void FUN_1800d25a0(longlong param_1,float param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_208 [40];
  ulonglong local_1e0;
  ulonglong local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188 [4];
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined8 local_fc;
  float local_f4;
  ulonglong local_f0;

  local_f0 = DAT_1802a0400 ^ (ulonglong)auStack_208;
  local_1d8 = 0x99866e9abca3adc5;
  local_1e0 = 0xb09ef5315a96c959;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_1d8 ^ 0x2e98c5ef05e58178;
        uVar2 = local_1d8 ^ local_1e0;
        local_1e0 = local_1e0 ^ 0x2e98c5ef05e58178;
        local_1d8 = uVar3;
        if ((longlong)uVar2 < -0x515ffd7e63fdbbf) break;
        if (uVar2 == 0xfaea002819c02441) {
          local_128 = 0x3f8000003f800000;
          uStack_120 = 0x3f8000003f800000;
          local_168 = local_1a8 + -0.0;
          fStack_164 = fStack_1a4 + -0.0;
          fStack_160 = fStack_1a0 + 8.0;
          fStack_15c = fStack_19c + 2.0;
          FUN_180172640(&local_168,&local_128,local_1cc);
          local_128 = 0x3f8000003f800000;
          uStack_120 = 0x3f8000003f800000;
          local_168 = local_1a8 + -0.0;
          fStack_164 = fStack_1a4 + -0.0;
          fStack_160 = fStack_1a0 + 2.0;
          fStack_15c = fStack_19c + 8.0;
          FUN_180172640(&local_168,&local_128,local_1cc);
          local_1d8 = 0xf315f5ded3297904;
          local_1e0 = 0x53c40eae3f0b8f30;
        }
        else if (uVar2 == 0x29189babe635649c) {
          local_1cc = 0;
          local_1b8 = 1;
          local_1c0 = 7;
          local_1c8 = 0;
          local_1b0 = *(float *)(param_1 + 0x214);
          fStack_1ac = *(float *)(param_1 + 0x218);
          local_1a8 = local_1b0;
          fStack_1a4 = fStack_1ac;
          fStack_1a0 = local_1b0;
          fStack_19c = fStack_1ac;
          cVar1 = FUN_180172380();
          local_1d8 = 0xe86b547b97461fca;
          if (cVar1 != '\0') {
            local_1d8 = 0xc6b2018084223ab5;
          }
          local_1e0 = 0x128154538e863b8b;
        }
      }
      if (uVar2 != 0xd43355d30aa4013e) break;
      local_198 = CONCAT44(fStack_1ac,local_1b0);
      uStack_190 = 0;
      local_128 = CONCAT44(fStack_1ac,local_1b0);
      fVar5 = param_2 * 15.5 + fStack_1ac;
      fStack_118 = param_2 * 4.2 + local_1b0;
      fStack_114 = param_2 * 11.6 + fStack_1ac;
      fStack_110 = param_2 * 7.0 + local_1b0;
      local_10c = param_2 * 17.4 + fStack_1ac;
      fStack_108 = param_2 * 9.8 + local_1b0;
      fStack_104 = param_2 * 16.0 + fStack_1ac;
      fStack_100 = param_2 * 7.1 + local_1b0;
      uStack_120 = CONCAT44(fVar5,*(undefined4 *)((longlong)&local_198 + (ulonglong)((uint)local_1c8 & 3) * 4));
      local_188[0] = param_2 * 12.0 + local_1b0;
      local_188[1] = param_2 * 10.4 + fStack_1ac;
      local_188[2] = param_2 * 0.0 + 0.0;
      local_188[3] = param_2 * 0.0 + 0.0;
      local_fc = CONCAT44(local_188[0],local_188[1]);
      fVar4 = param_2 * 0.6;
      local_168 = (local_1a8 - local_1a8) * 1.16 + local_1a8 + fVar4;
      fStack_164 = (fStack_1a4 - fStack_1a4) * 1.16 + fStack_1a4 + fVar4;
      fStack_160 = (local_1a8 - fStack_1a0) * 1.16 + fStack_1a0 + fVar4;
      fStack_15c = (fVar5 - fStack_19c) * 1.16 + fStack_19c + fVar4;
      local_158 = (fStack_118 - local_1a8) * 1.16 + local_1a8 + fVar4;
      fStack_154 = (fStack_114 - fStack_1a4) * 1.16 + fStack_1a4 + fVar4;
      fStack_150 = (fStack_110 - fStack_1a0) * 1.16 + fStack_1a0 + fVar4;
      fStack_14c = (local_10c - fStack_19c) * 1.16 + fStack_19c + fVar4;
      local_148 = (fStack_108 - local_1a8) * 1.16 + local_1a8 + fVar4;
      fStack_144 = (fStack_104 - fStack_1a4) * 1.16 + fStack_1a4 + fVar4;
      fStack_140 = (fStack_100 - fStack_1a0) * 1.16 + fStack_1a0 + fVar4;
      fStack_13c = (local_188[1] - fStack_19c) * 1.16 + fStack_19c + fVar4;
      local_f4 = *(float *)((longlong)&local_198 + (ulonglong)((uint)local_1b8 & 3) * 4) + param_2 * 10.2;
      local_188[(uint)local_1b8 & 3] = local_f4;
      local_138 = CONCAT44((local_188[1] - fStack_1ac) * 1.16 + fStack_1ac + fVar4,
                           (local_188[0] - local_1b0) * 1.16 + local_1b0 + fVar4);
      local_178 = 0x3ce0e0e13ca0a0a1;
      uStack_170 = 0x3f4000003d40c0c1;
      FUN_180173d00(&local_168,local_1c0,&local_178);
      local_178 = 0x3f8000003f800000;
      uStack_170 = 0x3f7ae1483f800000;
      FUN_180173d00(&local_128,local_1c0,&local_178);
      local_1d8 = 0xafc10db024a873d0;
      local_1e0 = 0xf10f6c0c88a85e4;
    }
  } while (uVar2 != 0xa0d1fb70ec22f634);
  if (DAT_1802a0400 == (local_f0 ^ (ulonglong)auStack_208)) {
    return;
  }
}



void FUN_1800d2aa0(longlong param_1,undefined1 (*param_2) [16],float param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 local_300 [8];
  float local_2f8 [4];
  float local_2e8 [5];
  float fStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  longlong local_2b0;
  float local_2a8 [4];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_280;
  float local_278;
  float local_274;
  undefined8 local_270;
  undefined4 local_268;
  float local_264;
  longlong local_260;
  char *local_258;
  ulonglong local_250;
  float *local_248;
  float *local_240;
  float local_238;
  float local_234;
  longlong local_230;
  float local_228 [12];
  float *local_1f8;
  float *local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined6 local_1c8;
  undefined2 uStack_1c2;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  undefined1 local_1a8 [4];
  float fStack_1a4;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  uint uStack_134;
  undefined4 local_12c;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  float local_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  uint local_b4;
  undefined8 local_b0;

  local_b0 = 0xfffffffffffffffe;
  local_104 = 0x3f800000;
  local_12c = 0x3e3851ec;
  local_128 = 0.5;
  local_124 = 0.55;
  local_120 = 0;
  local_11c = 0x3db851ec;
  local_118 = 0.07;
  local_b4 = 0;
  local_100 = 0xfff;
  local_230 = 0x27;
  local_114 = 0xffffffff;
  local_c0 = 1;
  local_f8 = 0x28;
  local_d0 = 0xf;
  local_f0 = 0x20;
  local_110 = 2;
  local_e8 = -8;
  local_10c = 3;
  local_c8 = 0;
  local_108 = 1;
  lVar7 = FUN_1800eb430();
  fVar22 = local_118;
  uVar17 = local_12c;
  if (((*(float *)(param_1 + 0x214) < *(float *)*param_2) || (*(float *)(*param_2 + 8) < *(float *)(param_1 + 0x214)))
     || (*(float *)(param_1 + 0x218) < *(float *)(*param_2 + 4))) {
    cVar5 = *(char *)(param_1 + 0x108);
  }
  else {
    cVar5 = *(char *)(param_1 + 0x108);
    if (*(float *)(param_1 + 0x218) <= *(float *)(*param_2 + 0xc)) {
      fVar22 = 0.14;
      uVar17 = 0x3e851eb8;
    }
  }
  local_1f0 = (float *)(*param_2 + 4);
  local_1f8 = (float *)(*param_2 + 0xc);
  pcVar15 = (char *)(param_1 + 0x108);
  if (cVar5 != '\0') {
    uVar17 = 0x3eae147b;
  }
  auVar3._4_4_ = uVar17;
  auVar3._0_4_ = local_120;
  auVar3._8_8_ = 0;
  _local_1a8 = auVar3 << 0x40;
  FUN_180172640(param_2,local_1a8);
  local_258 = pcVar15;
  if (*pcVar15 == '\x01') {
    FUN_1800ebfa0(lVar7,&local_1c8,local_b4);
    _local_1a8 = CONCAT26(uStack_1c2,local_1c8);
    fVar22 = local_124;
  }
  else {
    _local_1a8 = 0x3f8000003f800000;
    uStack_1c0 = local_104;
  }
  uStack_1a0._0_4_ = uStack_1c0;
  uStack_1a0._4_4_ = fVar22 * param_4;
  FUN_1801728e0(param_2,local_1a8);
  fVar21 = param_3 * 4.6;
  local_298 = *(undefined8 *)*param_2;
  uStack_290 = *(undefined8 *)(*param_2 + 8);
  fVar22 = *(float *)(*param_2 + 4);
  fVar23 = *(float *)(*param_2 + 0xc);
  local_248 = (float *)(lVar7 + 0x70);
  pfVar10 = (float *)(lVar7 + 0x80);
  pfVar8 = pfVar10;
  if (*(byte *)(param_1 + 0x108) != 0) {
    pfVar8 = local_248;
  }
  local_274 = param_4 * 0.85;
  local_278 = pfVar8[2];
  local_280 = *(undefined8 *)((ulonglong)((*(byte *)(param_1 + 0x108) ^ 1) << 4) + 0x70 + lVar7);
  uVar13 = (ulonglong)(((uint)local_c8 & 1) << 2);
  uVar6 = (uint)local_c0;
  *(float *)((longlong)local_228 + uVar13 + 8) = param_3;
  local_228[(ulonglong)(uVar6 & 1) + 2] = fVar23 - fVar22;
  local_260 = lVar7;
  *(float *)((longlong)&local_298 + (ulonglong)((uint)local_c0 & 3) * 4) = fVar22;
  fVar22 = (float)local_228._8_8_ * 13.0 + (float)local_298;
  fVar23 = SUB84(local_228._8_8_,4) * 0.5 + local_298._4_4_;
  fVar25 = fVar22 + fVar21;
  fVar26 = fVar23 + fVar21;
  fStack_1a4 = fVar23 - fVar21;
  local_1a8 = (undefined1  [4])(fVar22 - fVar21);
  uStack_1a0._0_4_ = fVar25;
  uStack_1a0._4_4_ = fVar26;
  FUN_1801728e0(local_1a8,&local_280,param_3 * 1.4);
  fStack_1a4 = fVar21 * 0.6 + fVar23;
  local_1a8 = (undefined1  [4])(fVar21 * 0.6 + fVar22);
  uStack_1a0._0_4_ = fVar21 * 1.7 + fVar22;
  uStack_1a0._4_4_ = fVar21 * 1.7 + fVar23;
  FUN_180172640(local_1a8,&local_280);
  fVar22 = *(float *)(*param_2 + 4);
  fVar23 = *(float *)(*param_2 + 0xc);
  fVar21 = (float)FUN_180173310();
  uVar6 = (uint)local_c0;
  *(float *)((longlong)local_228 + uVar13) = param_3;
  local_228[uVar6 & 1] = (fVar23 - fVar22) - fVar21;
  local_2a8[0] = fVar25;
  local_2a8[1] = fVar26;
  local_2a8[2] = fVar25;
  local_2a8[3] = fVar26;
  local_2a8[(uint)local_c0 & 3] = fVar22;
  fVar22 = (float)local_228._0_8_ * 8.0 + local_2a8[0];
  fVar23 = SUB84(local_228._0_8_,4) * 0.5 + local_2a8[1];
  fVar21 = local_2a8[2] + 0.0;
  fVar25 = local_2a8[3] + 0.0;
  uVar13 = *(ulonglong *)(param_1 + 0x120);
  local_250 = local_c8;
  local_240 = pfVar10;
  if (uVar13 == local_c8) {
    uStack_1c0 = (undefined4)local_c8;
    uStack_1bc = (undefined2)(local_c8 >> 0x20);
    uStack_1ba = (undefined2)(local_c8 >> 0x30);
    local_1b8 = 0xe;
    uStack_1b0 = local_d0;
    FUN_1800eb180(&DAT_1802a3a18,&DAT_180275884,0x14,0xf,&DAT_1802a3a28);
    uStack_1c0 = (undefined4)uRam00000001802a3a20;
    uStack_1bc = (undefined2)((uint6)uRam00000001802a3a20 >> 0x20);
    local_1c8 = (undefined6)DAT_1802a3a18;
    uStack_1c2 = DAT_1802a3a18._6_2_;
    lVar7 = 0x88;
    lVar9 = 0x84;
    uStack_d8._4_4_ = param_4 * 0.7;
  }
  else {
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1ba = 0;
    puVar16 = (undefined8 *)(param_1 + 0x110);
    if (local_d0 < *(ulonglong *)(param_1 + 0x128)) {
      puVar16 = *(undefined8 **)(param_1 + 0x110);
    }
    if ((longlong)uVar13 < (longlong)local_c8) {
      FUN_180002ac0();
    }
    if (uVar13 < 0x10) {
      local_1b8 = uVar13;
      uStack_1b0 = local_d0;
      uVar1 = puVar16[1];
      local_1c8 = (undefined6)*puVar16;
      uStack_1c2 = (undefined2)((ulonglong)*puVar16 >> 0x30);
      uStack_1c0 = (undefined4)uVar1;
      uStack_1bc = (undefined2)((ulonglong)uVar1 >> 0x20);
      uStack_1ba = (undefined2)((ulonglong)uVar1 >> 0x30);
    }
    else {
      uVar11 = local_d0 | uVar13;
      uVar12 = 0x16;
      if (0x16 < uVar11) {
        uVar12 = uVar11;
      }
      if (uVar11 < 0xfff) {
        uVar11 = FUN_1801d61c8(local_c0 + uVar12);
      }
      else {
        lVar7 = FUN_1801d61c8(local_f8 + uVar12);
        uVar11 = local_230 + lVar7 & 0xffffffffffffffe0;
        *(longlong *)(uVar11 - 8) = lVar7;
      }
      local_1c8 = (undefined6)uVar11;
      uStack_1c2 = (undefined2)(uVar11 >> 0x30);
      local_1b8 = uVar13;
      uStack_1b0 = uVar12;
      FUN_1802079d0(uVar11,puVar16,local_c0 + uVar13);
    }
    lVar7 = 0x78;
    lVar9 = 0x74;
    pfVar10 = local_248;
    uStack_d8._4_4_ = param_4;
  }
  lVar4 = local_260;
  local_e0 = *pfVar10;
  fStack_dc = *(float *)(local_260 + lVar9);
  uStack_d8._0_4_ = *(float *)(local_260 + lVar7);
  local_1e8 = (undefined *)CONCAT44(fVar23,fVar22);
  local_2f8[0] = fVar22;
  local_2f8[1] = fVar23;
  local_2f8[2] = fVar21;
  local_2f8[3] = fVar25;
  fVar26 = local_2f8[(uint)local_c8 & 3];
  FUN_180173430(local_1a8,&local_1c8);
  FUN_180173000(local_1a8,&local_1e8,&local_e0);
  uVar12 = CONCAT44(uStack_18c,uStack_190);
  if (local_d0 < uVar12) {
    uVar11 = local_c0 + uVar12;
    lVar7 = _local_1a8;
    if (local_100 < uVar11) {
      lVar7 = *(longlong *)(_local_1a8 + -8);
      if (local_f0 <= (ulonglong)((_local_1a8 + local_e8) - lVar7)) goto LAB_1800d3d05;
      uVar11 = uVar12 + local_f8;
    }
    thunk_FUN_1801f42e0(lVar7,uVar11);
  }
  if (*local_258 == '\x01') {
    FUN_1800eb440();
    fVar18 = (float)FUN_1801ebe20();
    if (fVar18 < local_124) {
      fVar19 = (float)FUN_180173360((undefined8 *)(param_1 + 0x110));
      uStack_1a0._4_4_ = param_4;
      _local_1a8 = *(undefined1 (*) [12])(lVar4 + 0x90);
      local_e0 = param_3 + fVar26 + fVar19;
      fVar18 = *local_1f8;
      uVar6 = (uint)local_c0;
      local_228[(ulonglong)((uint)local_c8 & 1) + 4] = *local_1f0;
      local_228[(ulonglong)(uVar6 & 1) + 4] = fVar26 + fVar19;
      fStack_dc = param_3 * 6.0 + (float)local_228._16_8_;
      uStack_d8._0_4_ = param_3 * 2.2 + SUB84(local_228._16_8_,4);
      uStack_d8._4_4_ = param_3 * -6.0 + fVar18;
      FUN_180172640(&local_e0,local_1a8);
    }
  }
  uVar1 = *(undefined8 *)*param_2;
  uVar2 = *(undefined8 *)(*param_2 + 8);
  _local_1a8 = *param_2;
  local_198 = CONCAT44(local_198._4_4_,10);
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = local_10c;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = local_d0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = local_114;
  uStack_134 = local_b4;
  puVar16 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar16 == *(undefined8 **)(param_1 + 0xd8)) {
    FUN_1800e67f0(param_1 + 200,puVar16,local_1a8);
    if (local_d0 < uStack_160) {
      uVar12 = local_c0 + uStack_160;
      lVar7 = local_178;
      if (local_100 < uVar12) {
        lVar7 = *(longlong *)(local_178 + -8);
        if (local_f0 <= (ulonglong)((local_178 + local_e8) - lVar7)) goto LAB_1800d3d05;
        uVar12 = uStack_160 + local_f8;
      }
      thunk_FUN_1801f42e0(lVar7,uVar12);
    }
  }
  else {
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0;
    *(ulonglong *)((longlong)puVar16 + 0x24) = (ulonglong)local_10c << 0x20;
    puVar16[2] = local_198;
    puVar16[3] = 0;
    *puVar16 = uVar1;
    puVar16[1] = uVar2;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[9] = local_d0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = CONCAT44(local_b4,local_114);
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 0x78;
  }
  if (uVar13 != local_250) {
    fVar24 = param_3 * 14.0;
    fVar26 = *(float *)(*param_2 + 4);
    fVar18 = *(float *)(*param_2 + 8);
    fVar20 = *(float *)(*param_2 + 0xc) - fVar26;
    fVar19 = (fVar24 + fVar20) * 0.5 + fVar26;
    uVar6 = (uint)local_c0;
    local_228[(ulonglong)((uint)local_c8 & 1) + 8] = fVar20 - fVar24;
    local_228[(ulonglong)(uVar6 & 1) + 8] = param_3;
    uVar6 = (uint)local_c0;
    local_228[(ulonglong)((uint)local_c8 & 1) + 6] = fVar26;
    local_228[(ulonglong)(uVar6 & 1) + 6] = fVar18;
    local_2e8[0] = (float)local_228._32_8_ * 0.5 + (float)local_228._24_8_;
    local_2e8[1] = SUB84(local_228._32_8_,4) * -10.0 + SUB84(local_228._24_8_,4);
    local_2e8[2] = 0.0;
    local_2e8[3] = 0.0;
    local_1d8 = local_2e8[(uint)local_c0 & 3] - fVar24;
    fStack_1d4 = local_2e8[0];
    fStack_1d0 = local_2e8[1];
    fStack_1cc = fVar19;
    if ((*(float *)(param_1 + 0x214) < local_1d8) || (local_2e8[(uint)local_c0 & 3] < *(float *)(param_1 + 0x214))) {
LAB_1800d36f4:
      bVar14 = 0;
      uStack_1a0._4_4_ = local_11c;
    }
    else {
      local_2e8[4] = local_2e8[0];
      fStack_2d4 = local_2e8[1];
      uStack_2d0 = 0;
      uStack_2cc = 0;
      if ((*(float *)(param_1 + 0x218) < local_2e8[(ulonglong)((uint)local_c8 & 3) + 4]) ||
         (fVar19 < *(float *)(param_1 + 0x218))) goto LAB_1800d36f4;
      uStack_1a0._4_4_ = 0x3e23d70a;
      bVar14 = 1;
    }
    uStack_1a0._0_4_ = local_104;
    _local_1a8 = 0x3f8000003f800000;
    FUN_180172640(&local_1d8,local_1a8,local_128 * fVar24);
    fVar18 = fStack_1d4;
    fVar26 = local_1d8;
    pfVar10 = local_240;
    if (bVar14 != 0) {
      pfVar10 = (float *)(lVar4 + 0x90);
    }
    uStack_d8._0_4_ = pfVar10[2];
    uVar1 = *(undefined8 *)(lVar4 + 0x80 + (ulonglong)bVar14 * 0x10);
    local_e0 = (float)uVar1;
    fStack_dc = (float)((ulonglong)uVar1 >> 0x20);
    uStack_d8._4_4_ = param_4;
    fVar19 = (float)FUN_180173310();
    uVar6 = (uint)local_c0;
    local_228[(ulonglong)((uint)local_c8 & 1) + 10] = fVar24;
    local_228[(ulonglong)(uVar6 & 1) + 10] = fVar24 - fVar19;
    local_1e8 = (undefined *)CONCAT44(SUB84(local_228._40_8_,4) * 0.5 + fVar18,(float)local_228._40_8_ * 0.5 + fVar26);
    local_198 = local_c0;
    uStack_190 = (undefined4)local_d0;
    uStack_18c = (undefined4)(local_d0 >> 0x20);
    stack0xfffffffffffffe59 = ZEXT715(0);
    local_1a8[0] = 0x78;
    FUN_180173000(local_1a8,&local_1e8);
    uVar13 = CONCAT44(uStack_18c,uStack_190);
    if (local_d0 < uVar13) {
      uVar12 = local_c0 + uVar13;
      lVar7 = _local_1a8;
      if (local_100 < uVar12) {
        lVar7 = *(longlong *)(_local_1a8 + -8);
        if (local_f0 <= (ulonglong)((_local_1a8 + local_e8) - lVar7)) goto LAB_1800d3d05;
        uVar12 = uVar13 + local_f8;
      }
      thunk_FUN_1801f42e0(lVar7,uVar12);
    }
    uStack_1a0 = CONCAT44(fStack_1cc,fStack_1d0);
    _local_1a8 = CONCAT44(fStack_1d4,local_1d8);
    local_198 = CONCAT44(local_198._4_4_,0xb);
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = local_10c;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = local_d0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = local_114;
    uStack_134 = local_b4;
    puVar16 = *(undefined8 **)(param_1 + 0xd0);
    if (puVar16 == *(undefined8 **)(param_1 + 0xd8)) {
      FUN_1800e67f0(param_1 + 200);
      if (local_d0 < uStack_160) {
        uVar13 = local_c0 + uStack_160;
        lVar7 = local_178;
        if (local_100 < uVar13) {
          lVar7 = *(longlong *)(local_178 + -8);
          if (local_f0 <= (ulonglong)((local_178 + local_e8) - lVar7)) goto LAB_1800d3d05;
          uVar13 = uStack_160 + local_f8;
        }
        thunk_FUN_1801f42e0(lVar7,uVar13);
      }
    }
    else {
      *(undefined8 *)((longlong)puVar16 + 0x1c) = 0;
      *(ulonglong *)((longlong)puVar16 + 0x24) = (ulonglong)local_10c << 0x20;
      puVar16[2] = local_198;
      puVar16[3] = 0;
      *puVar16 = CONCAT44(fStack_1d4,local_1d8);
      puVar16[1] = CONCAT44(fStack_1cc,fStack_1d0);
      puVar16[8] = 0;
      puVar16[9] = 0;
      puVar16[6] = 0;
      puVar16[7] = 0;
      puVar16[8] = 0;
      puVar16[9] = local_d0;
      puVar16[6] = 0;
      puVar16[7] = 0;
      puVar16[10] = 0;
      puVar16[0xb] = 0;
      puVar16[0xc] = 0;
      puVar16[0xd] = 0;
      puVar16[0xe] = CONCAT44(local_b4,local_114);
      *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 0x78;
    }
    FUN_1800c52f0(param_1,local_1a8);
    lVar7 = uStack_1a0 - _local_1a8;
    if (_local_1a8 != 0) {
      uVar13 = local_198 - _local_1a8;
      lVar9 = _local_1a8;
      if (local_100 < uVar13) {
        lVar9 = *(longlong *)(_local_1a8 + -8);
        if (local_f0 <= (ulonglong)((_local_1a8 + local_e8) - lVar9)) goto LAB_1800d3d05;
        uVar13 = uVar13 + local_230;
      }
      thunk_FUN_1801f42e0(lVar9,uVar13);
    }
    local_270 = *(undefined8 *)(lVar4 + 0x80);
    local_268 = *(undefined4 *)(lVar4 + 0x88);
    local_264 = param_4 * 0.75;
    local_238 = param_3 * -6.0 + local_1d8;
    local_e0 = (float)local_c0;
    local_2c8 = fVar22;
    fStack_2c4 = fVar23;
    fStack_2c0 = fVar21;
    fStack_2bc = fVar25;
    local_234 = local_2e8[(ulonglong)((uint)local_e0 & 3) + 8];
    local_2b8 = 0x4000000000000000;
    _local_1a8 = ZEXT416(0);
    local_198 = 0;
    uStack_190 = (undefined4)local_d0;
    uStack_18c = (undefined4)(local_d0 >> 0x20);
    fStack_dc = (float)((ulonglong)local_c0 >> 0x20);
    local_2b0 = lVar7 >> 3;
    uStack_d8 = &local_2b8;
    FUN_1800eb180(&DAT_1802a3a2c,&DAT_1802758b7,0x13,3,&DAT_1802a3a30);
    local_1e8 = &DAT_1802a3a2c;
    local_1e0 = 2;
    FUN_180003080(local_300,local_1a8,&local_1e8,&local_e0,local_c8);
    FUN_180173000(local_1a8,&local_238,&local_270);
    uVar13 = CONCAT44(uStack_18c,uStack_190);
    if (local_d0 < uVar13) {
      uVar12 = local_c0 + uVar13;
      lVar7 = _local_1a8;
      if (local_100 < uVar12) {
        lVar7 = *(longlong *)(_local_1a8 + -8);
        if (local_f0 <= (ulonglong)((_local_1a8 + local_e8) - lVar7)) goto LAB_1800d3d05;
        uVar12 = uVar13 + local_f8;
      }
      thunk_FUN_1801f42e0(lVar7,uVar12);
    }
  }
  if (local_d0 < uStack_1b0) {
    lVar9 = CONCAT26(uStack_1c2,local_1c8);
    uVar13 = local_c0 + uStack_1b0;
    lVar7 = lVar9;
    if (local_100 < uVar13) {
      lVar7 = *(longlong *)(lVar9 + -8);
      if (local_f0 <= (ulonglong)((lVar9 + local_e8) - lVar7)) {
LAB_1800d3d05:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_b4,local_c8);
      }
      uVar13 = uStack_1b0 + local_f8;
    }
    thunk_FUN_1801f42e0(lVar7,uVar13);
  }
  return;
}



void Unwind_1800d3d30(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 400);
  return;
}



void Unwind_1800d3dc0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 400);
  return;
}



void Unwind_1800d3e50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800d3ee0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800d3f70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800d4000(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800d4090(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



ulonglong * FUN_1800d4120(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 *local_68;
  ulonglong local_60;

  local_90 = 0x4025eb0534e6be3a;
  local_98 = 0x1647d1c8dcf9fb9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_90 ^ 0x94fa463c6c090ba5;
            uVar4 = local_90 ^ local_98;
            local_98 = local_98 ^ 0x94fa463c6c090ba5;
            local_90 = uVar6;
            if ((longlong)uVar4 < -0x11d983de0c750a4d) break;
            if ((longlong)uVar4 < -0xb07dcbaa436d0c6) {
              if (uVar4 == 0xee267c21f38af5b3) {
                param_1[2] = local_88;
                param_1[3] = local_80;
                uVar1 = *(undefined4 *)((longlong)local_68 + 4);
                uVar2 = *(undefined4 *)(local_68 + 1);
                uVar3 = *(undefined4 *)((longlong)local_68 + 0xc);
                *(undefined4 *)param_1 = *(undefined4 *)local_68;
                *(undefined4 *)((longlong)param_1 + 4) = uVar1;
                *(undefined4 *)(param_1 + 1) = uVar2;
                *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
                local_90 = 0x53f797940699f211;
                local_98 = 0xb890a6d41c87600b;
              }
              else if (uVar4 == 0xf4e52414086f0995) {
                uVar4 = local_88 | local_80;
                local_78 = 0x16;
                if (0x16 < uVar4) {
                  local_78 = uVar4;
                }
                local_90 = 0x7be7348a20a185bc;
                if (0xffe < uVar4) {
                  local_90 = 0x532186ba863a7ac6;
                }
                local_98 = 0xc4b5a036451d3553;
              }
            }
            else if (uVar4 == 0xf4f823455bc92f3a) {
              local_90 = 0x59cd0e2e918fd6c6;
              if (local_88 < 0x10) {
                local_90 = 0x430e561b6a6a2ae0;
              }
              local_98 = 0xad282a3a99e0df53;
            }
            else if (uVar4 == 0x41419619b9292183) {
              local_70 = 1;
              local_80 = 0xf;
              param_1[2] = 0;
              param_1[3] = 0;
              *param_1 = 0;
              param_1[1] = 0;
              local_88 = param_2[2];
              local_68 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                local_68 = (undefined8 *)*param_2;
              }
              local_90 = 0xd69cdfca5a270b5;
              if ((longlong)local_88 < 0) {
                local_90 = 0x5577528180bc76cd;
              }
              local_98 = 0xf991eeb9fe6b5f8f;
            }
          }
          if ((longlong)uVar4 < -0x38122627bb7d8ce0) break;
          if (uVar4 == 0xc7edd9d844827320) {
            *param_1 = local_60;
            param_1[2] = local_88;
            param_1[3] = local_78;
            FUN_1802079d0(local_60,local_68,local_88 + local_70);
            local_90 = 0x57e473d9d75e77e4;
            local_98 = 0xbc834299cd40e5fe;
          }
          else if (uVar4 == 0xeb6731401a1e921a) {
            return param_1;
          }
        }
        if (uVar4 != 0x9794268cc3274f95) break;
        lVar5 = FUN_1801d61c8(local_78 + 0x28);
        local_60 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(local_60 - 8) = lVar5;
        local_90 = 0x7bb5359b016d7120;
        local_98 = 0xbc58ec4345ef0200;
      }
      if (uVar4 != 0xbf5294bc65bcb0ef) break;
      local_60 = FUN_1801d61c8(local_78 + local_70);
      local_90 = 0xb14f66f04ea6a034;
      local_98 = 0x76a2bf280a24d314;
    }
  } while (uVar4 != 0xace6bc387ed72942);
  FUN_180002ac0();
}



void FUN_1800d4520(longlong param_1)

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

  local_90 = 0xc00f2078dbc086e4;
  local_98 = 0x1473f3d39f19af1c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x369f2179a6431c02;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x369f2179a6431c02;
          local_90 = uVar2;
          if (0xfd243c83a266c45 < (longlong)uVar1) break;
          if (uVar1 == 0xbd7c7c6394bfd400) {
            local_48 = *(longlong *)(local_50 + -8);
            local_90 = 0x6d86d3e6a20b9ac2;
            if ((local_50 - local_48) - 8U < 0x20) {
              local_90 = 0x357a55ba5eac92d1;
            }
            local_98 = 0x442426556f1fa7c1;
          }
          else if (uVar1 == 0xd47cd3ab44d929f8) {
            local_80 = 0xf;
            local_88 = 0;
            local_78 = (longlong *)(param_1 + 0x30);
            local_58 = (undefined8 *)(param_1 + 0x48);
            local_70 = *(ulonglong *)(param_1 + 0x48);
            local_90 = 0xfd7b97fc91c77234;
            if (0xf < local_70) {
              local_90 = 0xf652e8fb71113139;
            }
            local_98 = 0xf980ab334b375d7f;
          }
          else if (uVar1 == 0x4fb3ccfdaf02f4b) {
            *(uintptr_t *)(param_1 + 0x40) = local_88;
            *local_58 = local_80;
            *(undefined1 *)local_78 = 0;
            return;
          }
        }
        if ((longlong)uVar1 < 0x2b34d7e96a4ebc22) break;
        if (uVar1 == 0x2b34d7e96a4ebc22) {
          thunk_FUN_1801f42e0(local_60,local_68);
          local_90 = 0xfe68180884d20f13;
          local_98 = 0xfa9324c75e222058;
        }
        else if (uVar1 == 0x715e73ef31b33510) {
          local_68 = local_70 + 0x28;
          local_60 = local_48;
          local_90 = 0x2add79ad0de9c37a;
          local_98 = 0x1e9ae4467a77f58;
        }
      }
      if (uVar1 != 0xfd243c83a266c46) break;
      local_60 = *local_78;
      local_68 = local_70 + 1;
      local_90 = 0xc51b4a7ee272f8fc;
      if (0xfff < local_68) {
        local_90 = 0x5353e1f41c8390de;
      }
      local_98 = 0xee2f9d97883c44de;
      local_50 = local_60;
    }
  } while (uVar1 != 0x29a2f5b3cd143d03);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_88);
}



void FUN_1800d4880(uint *param_1,longlong *param_2,float *param_3,float param_4,undefined4 param_5)

{
  char cVar1;
  ulonglong *puVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 in_stack_fffffffffffffd08;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined1 local_2e0 [8];
  float local_2d8 [4];
  longlong local_2c8 [2];
  float local_2b8 [4];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298 [4];
  undefined8 local_288;
  undefined8 local_280;
  float local_278 [5];
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  uint *local_250;
  longlong local_248;
  float local_240;
  float local_23c;
  ulonglong local_230;
  ulonglong local_228;
  float local_220 [14];
  longlong *local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  float fStack_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1bc;
  ulonglong local_1b8;
  ulonglong local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint uStack_114;
  float local_108;
  float local_104;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  float local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  uint local_a4;
  undefined8 local_a0;

  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
  local_a0 = 0xfffffffffffffffe;
  local_dc = 1.0;
  local_c8 = 0.0;
  local_190 = 12.0;
  local_a4 = 0;
  local_100 = 0xfff;
  local_18c = 0xffffffff;
  local_b8 = 1;
  local_f8 = 0x28;
  local_c0 = 0xf;
  local_f0 = 0x20;
  local_e8 = -8;
  local_b0 = 0;
  local_228 = 8;
  local_c4 = 1;
  lVar9 = FUN_1800eb430();
  bVar3 = true;
  if (((*param_3 <= (float)param_1[0x85]) && ((float)param_1[0x85] <= param_3[2])) &&
     (param_3[1] <= (float)param_1[0x86])) {
    bVar3 = param_3[3] < (float)param_1[0x86];
  }
  cVar1 = *(char *)((longlong)param_2 + 0x4c);
  pfVar10 = (float *)FUN_1800c4a90(param_1,param_2);
  fVar24 = local_dc;
  if (cVar1 == '\0') {
    fVar24 = local_c8;
  }
  pfVar10[1] = fVar24;
  fVar20 = *(float *)(lVar9 + 0xa4);
  if (local_dc <= fVar20) {
LAB_1800d4b1d:
    fVar26 = fVar24;
    *pfVar10 = fVar26;
  }
  else {
    fVar26 = *pfVar10;
    if (local_c8 < fVar20) {
      fVar19 = (float)FUN_1800ebf90();
      fVar20 = (float)FUN_1801eaf60(local_dc - fVar20,fVar19 * 60.0);
      fVar26 = (local_dc - fVar20) * (fVar24 - fVar26) + *pfVar10;
      *pfVar10 = fVar26;
      fVar24 = pfVar10[1];
    }
    if (ABS(fVar24 - fVar26) < 0.001) goto LAB_1800d4b1d;
  }
  FUN_1800ebfa0(lVar9,&local_1a8,param_5);
  if (0.01 < fVar26) {
    uStack_180 = (undefined8 *)CONCAT44(local_c8,fStack_1a0);
    local_1c0 = fStack_1a0;
    local_1bc = fVar26 * 0.16;
    local_2c8[0] = *(longlong *)param_3;
    local_2c8[1] = 0;
    fVar24 = *(float *)((longlong)local_2c8 + (ulonglong)((uint)local_b0 & 3) * 4);
    local_248 = *(longlong *)param_3;
    local_240 = (param_3[2] - fVar24) * 0.55 + fVar24;
    local_23c = param_3[3];
    local_2d8[0] = param_4 * 9.0;
    local_2d8[1] = param_4 * 1.0;
    local_2d8[2] = param_4 * 0.0;
    local_2d8[3] = param_4 * 0.0;
    fVar24 = local_2d8[(uint)local_b0 & 3];
    uVar27 = CONCAT44(uVar28,fVar24);
    FUN_180172a80(&local_248,&local_1c8,&local_188,0,uVar27);
    uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
    local_188 = CONCAT44(fStack_1a4,local_1a8);
    uStack_180 = (undefined8 *)CONCAT44(fVar26,fStack_1a0);
    fStack_1c4 = param_4 * 9.0 * 0.6 + (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_1c0 = param_4 * 1.0 * 3.0 + (float)*(undefined8 *)param_3;
    local_1c8 = *param_3;
    local_1bc = param_3[3] - fVar24 * 0.6;
    FUN_180172640(&local_1c8,&local_188);
  }
  fVar19 = param_4 * 14.0 + *param_3;
  fVar24 = param_3[2];
  fVar20 = local_c8;
  if (local_228 < (ulonglong)(param_2[0xb] - param_2[10])) {
    fVar20 = param_4 * 40.0;
  }
  (**(code **)(*param_2 + 0x10))(param_2,&local_1c8);
  fVar21 = local_c8;
  if (local_1b8 != local_b0) {
    fVar21 = (float)FUN_180173360(&local_1c8,local_190 * param_4,local_c4);
    fVar21 = param_4 * 7.0 + fVar21;
  }
  fVar24 = ((param_4 * -62.0 + fVar24) - fVar20) - fVar19;
  local_104 = param_4 * 8.0 + param_3[1];
  if (fVar24 <= param_4 * 20.0) {
    fVar24 = param_4 * 20.0;
  }
  fVar20 = param_4 * 15.0;
  uVar27 = CONCAT44(uVar28,local_c4);
  local_108 = fVar19;
  FUN_180173430(&local_248,param_2 + 1,fVar24 - fVar21,fVar20,uVar27);
  lVar16 = lVar9 + 0x90;
  if (cVar1 == '\0') {
    lVar16 = lVar9 + 0x70;
  }
  uVar27 = CONCAT44((int)((ulonglong)uVar27 >> 0x20),local_c4);
  FUN_180173000(&local_248,&local_108,lVar16,fVar20,uVar27,local_a4);
  uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
  if (local_1b8 != local_b0) {
    fVar19 = (float)FUN_180173360(&local_248);
    fVar24 = local_104;
    fVar21 = local_190 * param_4;
    local_188 = CONCAT44(fStack_1a4,local_1a8);
    uStack_180 = (undefined8 *)CONCAT44(0x3f666666,fStack_1a0);
    uVar8 = (uint)local_b8;
    local_220[(uint)local_b0 & 1] = fVar19 + local_108;
    local_220[uVar8 & 1] = fVar24;
    local_d8 = CONCAT44(param_4 * 2.0 + SUB84(local_220._0_8_,4),param_4 * 7.0 + (float)local_220._0_8_);
    uVar27 = CONCAT44(uVar28,local_c4);
    FUN_180173000(&local_1c8,&local_d8,&local_188,fVar21,uVar27,local_a4);
    uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
  }
  fVar24 = local_104;
  fVar19 = (float)FUN_180173310();
  local_d8 = CONCAT44(param_4 + param_4 + fVar24 + fVar19,local_108);
  FUN_180173430(&local_188,param_2 + 5);
  uVar27 = CONCAT44(uVar28,local_a4);
  FUN_180173000(&local_188,&local_d8,lVar9 + 0x80,param_4 * 11.5,uVar27,local_a4);
  uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
  uVar15 = CONCAT44(uStack_16c,uStack_170);
  if (local_c0 < uVar15) {
    uVar13 = local_b8 + uVar15;
    uVar12 = local_188;
    if (local_100 < uVar13) {
      uVar12 = *(ulonglong *)(local_188 - 8);
      if (local_f0 <= (local_188 + local_e8) - uVar12) goto LAB_1800d5b9d;
      uVar13 = uVar15 + local_f8;
    }
    thunk_FUN_1801f42e0(uVar12,uVar13);
  }
  fVar25 = param_4 * 18.0;
  local_2a8 = *(undefined8 *)(param_3 + 1);
  uVar8 = (uint)local_b0;
  uStack_2a0 = 0;
  fVar24 = *(float *)((longlong)&local_2a8 + (ulonglong)(uVar8 & 3) * 4);
  fVar19 = param_3[3] - fVar24;
  local_220[(ulonglong)((uint)local_b8 & 1) + 2] = param_4;
  local_220[(ulonglong)(uVar8 & 1) + 2] = fVar19 - fVar25;
  local_1d4 = (float)local_220._8_8_ * 0.5 + (float)local_2a8;
  fStack_1d0 = SUB84(local_220._8_8_,4) * -16.0 + (float)((ulonglong)local_2a8 >> 0x20);
  local_2b8[0] = local_1d4;
  local_2b8[1] = fStack_1d0;
  local_2b8[2] = 0.0;
  local_2b8[3] = 0.0;
  local_1d8 = local_2b8[(uint)local_b8 & 3] - param_4 * 34.0;
  local_1cc = (fVar19 + fVar25) * 0.5 + fVar24;
  local_188 = CONCAT44(fVar26 * (fStack_1a4 + -0.1882353) + 0.1882353,fVar26 * (local_1a8 + -0.16470589) + 0.16470589);
  uStack_180 = (undefined8 *)
               CONCAT44(fVar26 * (fStack_19c + -1.0) + 1.0,fVar26 * (fStack_1a0 + -0.23529412) + 0.23529412);
  FUN_180172640(&local_1d8,&local_188,fVar25 * 0.5);
  fVar24 = local_1d4;
  local_188 = 0x3f8000003f800000;
  uStack_180 = (undefined8 *)0x3f7333333f800000;
  fVar19 = fVar25 * 0.5 + param_4 * -2.5;
  fVar21 = local_1d8 + fVar19;
  uVar8 = (uint)local_b8;
  local_220[(ulonglong)((uint)local_b0 & 1) + 6] = param_4 * -5.0 + ((fStack_1d0 - local_1d8) - (fVar19 + fVar19));
  local_220[(ulonglong)(uVar8 & 1) + 6] = fVar25;
  local_278[0] = 0.0;
  local_278[1] = 0.5;
  local_278[2] = 0.0;
  local_278[3] = 0.0;
  local_278[(uint)local_b0 & 3] = fVar26;
  uVar8 = (uint)local_b8;
  local_220[(ulonglong)((uint)local_b0 & 1) + 4] = param_4 * 2.5 + fVar21;
  local_220[(ulonglong)(uVar8 & 1) + 4] = fVar24;
  fVar24 = (float)local_220._24_8_ * local_278[0] + (float)local_220._16_8_;
  fVar26 = SUB84(local_220._24_8_,4) * local_278[1] + SUB84(local_220._16_8_,4);
  auVar22._4_4_ = fVar19;
  auVar22._0_4_ = fVar19;
  auVar22._8_4_ = fVar19;
  auVar22._12_4_ = fVar19;
  auVar4._4_8_ = auVar22._8_8_;
  auVar4._0_4_ = fVar19 + SUB84(local_220._16_8_,4);
  auVar23._0_8_ = auVar4._0_8_ << 0x20;
  auVar23._8_4_ = fVar19 + fVar24;
  auVar23._12_4_ = fVar19 + fVar26;
  uStack_d0 = auVar23._8_8_;
  local_d8 = CONCAT44(fVar26 - fVar19,fVar24 - fVar19);
  FUN_180172640(&local_d8,&local_188);
  uVar8 = uStack_16c;
  uVar5 = uStack_170;
  fVar24 = local_1d8;
  uStack_170 = SUB84(param_2,0);
  uVar6 = uStack_170;
  uStack_16c = (uint)((ulonglong)param_2 >> 0x20);
  uVar7 = uStack_16c;
  uStack_170 = uVar5;
  uStack_16c = uVar8;
  if (local_228 < (ulonglong)(param_2[0xb] - param_2[10])) {
    fVar19 = param_4 * 22.0;
    fVar26 = (param_3[3] - param_3[1]) * 0.5 + param_3[1];
    local_278[4] = param_4;
    fStack_264 = param_4;
    fStack_260 = param_4;
    fStack_25c = param_4;
    local_278[(ulonglong)((uint)local_b0 & 3) + 4] = -fVar19;
    uVar8 = (uint)local_b8;
    local_220[(ulonglong)((uint)local_b0 & 1) + 8] = fVar26;
    local_220[(ulonglong)(uVar8 & 1) + 8] = fVar24;
    local_298[0] = local_278[4] * 0.5 + (float)local_220._32_8_;
    local_298[1] = fStack_264 * -16.0 + SUB84(local_220._32_8_,4);
    local_298[2] = fStack_260 * 0.0 + 0.0;
    local_298[3] = fStack_25c * 0.0 + 0.0;
    local_d8 = CONCAT44(local_298[0],local_298[(uint)local_b8 & 3] - fVar19);
    uStack_d0 = (undefined8 *)CONCAT44(fVar19 * 0.5 + fVar26,local_298[1]);
    local_1e8 = param_2;
    FUN_1800eadc0(param_1 + 2,&local_188,&local_1e8);
    cVar1 = *(char *)(local_188 + 0x18);
    fVar24 = (float)local_d8;
    if (((float)local_d8 <= (float)param_1[0x85]) && ((float)param_1[0x85] <= (float)uStack_d0)) {
      if ((local_d8._4_4_ <= (float)param_1[0x86]) && ((float)param_1[0x86] <= uStack_d0._4_4_)) {
        local_188 = 0x3f8000003f800000;
        uStack_180 = (undefined8 *)0x3d8f5c293f800000;
        FUN_180172640(&local_d8,&local_188);
        fVar24 = (float)local_d8;
      }
    }
    fVar21 = (float)FUN_180173310();
    local_178 = local_b8;
    uVar15 = local_c0;
    uVar8 = (uint)local_b0;
    uVar17 = (uint)local_b8;
    bVar18 = cVar1 != '\0';
    lVar16 = lVar9 + 0x80;
    if (bVar18) {
      lVar16 = lVar9 + 0x70;
    }
    local_220[(ulonglong)(uVar8 & 1) + 0xc] = fVar19;
    local_220[(ulonglong)(uVar17 & 1) + 0xc] = -fVar21;
    local_220[(ulonglong)(uVar8 & 1) + 10] = fVar24;
    local_220[(ulonglong)(uVar17 & 1) + 10] = fVar26;
    local_1e8 = (longlong *)
                CONCAT44(SUB84(local_220._48_8_,4) * 0.5 + SUB84(local_220._40_8_,4),
                         (float)local_220._48_8_ * 0.5 + (float)local_220._40_8_);
    uStack_180 = (undefined8 *)0x0;
    uStack_170 = (undefined4)uVar15;
    uStack_16c = (uint)(uVar15 >> 0x20);
    bVar11 = 0x2b;
    if (bVar18) {
      bVar11 = 0x2d;
    }
    local_188 = (ulonglong)bVar11;
    local_250 = param_1;
    FUN_180173000(&local_188,&local_1e8,lVar16,fVar20,CONCAT44(uVar28,2),local_c4);
    param_1 = local_250;
    uVar15 = CONCAT44(uStack_16c,uStack_170);
    if (local_c0 < uVar15) {
      uVar13 = local_b8 + uVar15;
      uVar12 = local_188;
      if (local_100 < uVar13) {
        uVar12 = *(ulonglong *)(local_188 - 8);
        if (local_f0 <= (local_188 + local_e8) - uVar12) goto LAB_1800d5b9d;
        uVar13 = uVar15 + local_f8;
      }
      thunk_FUN_1801f42e0(uVar12,uVar13);
    }
    local_188 = local_d8;
    uStack_180 = uStack_d0;
    local_178 = CONCAT44(local_178._4_4_,3);
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = *param_1;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = local_c0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_118 = local_18c;
    uStack_114 = local_a4;
    puVar2 = *(ulonglong **)(param_1 + 0x34);
    if (puVar2 == *(ulonglong **)(param_1 + 0x36)) {
      uStack_170 = uVar6;
      uStack_16c = uVar7;
      FUN_1800e67f0(param_1 + 0x32,puVar2,&local_188);
      if (local_c0 < uStack_140) {
        uVar15 = local_b8 + uStack_140;
        lVar9 = local_158;
        if (local_100 < uVar15) {
          lVar9 = *(longlong *)(local_158 + -8);
          if (local_f0 <= (ulonglong)((local_158 + local_e8) - lVar9)) goto LAB_1800d5b9d;
          uVar15 = uStack_140 + local_f8;
        }
        thunk_FUN_1801f42e0(lVar9,uVar15);
      }
    }
    else {
      *(ulonglong *)((longlong)puVar2 + 0x1c) = (ulonglong)uVar7;
      *(ulonglong *)((longlong)puVar2 + 0x24) = (ulonglong)uStack_160 << 0x20;
      puVar2[2] = local_178;
      puVar2[3] = (ulonglong)param_2;
      *puVar2 = local_d8;
      puVar2[1] = (ulonglong)uStack_d0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = local_c0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = CONCAT44(local_a4,local_18c);
      *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
      uStack_170 = uVar6;
      uStack_16c = uVar7;
    }
  }
  if (!(bool)(bVar3 | *(longlong **)(param_1 + 0x58) == param_2)) {
    if (*(uint *)(param_2[0xd] + 0x90) == local_a4) {
      uStack_180 = (undefined8 *)local_b0;
      local_178 = 10;
      uStack_170 = (undefined4)local_c0;
      uStack_16c = (uint)(local_c0 >> 0x20);
      FUN_1800eb180(&DAT_1802a3a9c,&DAT_180275a18,0x1e,0xb,&DAT_1802a3aa8);
      uStack_180 = (undefined8 *)CONCAT62(uStack_180._2_6_,DAT_1802a3aa4);
      local_188 = DAT_1802a3a9c;
    }
    else {
      local_280 = FUN_1801026e0();
      local_288 = 0xb000000000000000;
      local_188 = 0;
      uStack_180 = (undefined8 *)0x0;
      local_178 = 0;
      uStack_170 = (undefined4)local_c0;
      uStack_16c = (uint)(local_c0 >> 0x20);
      FUN_180002240(&local_188,0x2b);
      local_178 = local_b0;
      local_d8 = local_b8;
      uStack_d0 = &local_288;
      FUN_1800eb180(&DAT_1802a3a8c,&DAT_1802759dd,0x14,0xc,&DAT_1802a3a98);
      local_1e8 = (longlong *)&DAT_1802a3a8c;
      local_1e0 = 0xb;
      FUN_180003080(local_2e0,&local_188,&local_1e8,&local_d8,local_b0);
    }
    puVar2 = (ulonglong *)(param_1 + 0x7c);
    if (puVar2 == &local_188) {
      uVar15 = CONCAT44(uStack_16c,uStack_170);
      if (local_c0 < uVar15) {
        uVar13 = local_b8 + uVar15;
        uVar12 = local_188;
        if (local_100 < uVar13) {
          uVar12 = *(ulonglong *)(local_188 - 8);
          if (local_f0 <= (local_188 + local_e8) - uVar12) goto LAB_1800d5b9d;
          uVar13 = uVar15 + local_f8;
        }
        thunk_FUN_1801f42e0(uVar12,uVar13);
      }
    }
    else {
      uVar15 = *(ulonglong *)(param_1 + 0x82);
      if (local_c0 < uVar15) {
        uVar12 = *puVar2;
        uVar14 = local_b8 + uVar15;
        uVar13 = uVar12;
        if (local_100 < uVar14) {
          uVar13 = *(ulonglong *)(uVar12 - 8);
          if (local_f0 <= (uVar12 + local_e8) - uVar13) goto LAB_1800d5b9d;
          uVar14 = uVar15 + local_f8;
        }
        thunk_FUN_1801f42e0(uVar13,uVar14);
      }
      *(ulonglong *)(param_1 + 0x80) = local_178;
      *(ulonglong *)(param_1 + 0x82) = CONCAT44(uStack_16c,uStack_170);
      *puVar2 = local_188;
      *(undefined8 **)(param_1 + 0x7e) = uStack_180;
    }
  }
  local_188 = *(ulonglong *)param_3;
  uStack_180 = *(undefined8 **)(param_3 + 2);
  local_178 = CONCAT44(local_178._4_4_,local_a4);
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = *param_1;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = local_c0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = local_18c;
  uStack_114 = local_a4;
  puVar2 = *(ulonglong **)(param_1 + 0x34);
  if (puVar2 == *(ulonglong **)(param_1 + 0x36)) {
    uStack_170 = uVar6;
    uStack_16c = uVar7;
    FUN_1800e67f0(param_1 + 0x32,puVar2,&local_188);
    if (local_c0 < uStack_140) {
      uVar15 = local_b8 + uStack_140;
      lVar9 = local_158;
      if (local_100 < uVar15) {
        lVar9 = *(longlong *)(local_158 + -8);
        if (local_f0 <= (ulonglong)((local_158 + local_e8) - lVar9)) goto LAB_1800d5b9d;
        uVar15 = uStack_140 + local_f8;
      }
      thunk_FUN_1801f42e0(lVar9,uVar15);
    }
  }
  else {
    *(ulonglong *)((longlong)puVar2 + 0x1c) = (ulonglong)uVar7;
    *(ulonglong *)((longlong)puVar2 + 0x24) = (ulonglong)uStack_160 << 0x20;
    puVar2[2] = local_178;
    puVar2[3] = (ulonglong)param_2;
    *puVar2 = local_188;
    puVar2[1] = (ulonglong)uStack_180;
    puVar2[8] = 0;
    puVar2[9] = local_c0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = CONCAT44(local_a4,local_18c);
    *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
    uStack_170 = uVar6;
    uStack_16c = uVar7;
  }
  if (local_c0 < local_230) {
    uVar15 = local_b8 + local_230;
    lVar9 = local_248;
    if (local_100 < uVar15) {
      lVar9 = *(longlong *)(local_248 + -8);
      if (local_f0 <= (ulonglong)((local_248 + local_e8) - lVar9)) goto LAB_1800d5b9d;
      uVar15 = local_230 + local_f8;
    }
    thunk_FUN_1801f42e0(lVar9,uVar15);
  }
  if (local_c0 < local_1b0) {
    lVar16 = CONCAT44(fStack_1c4,local_1c8);
    uVar15 = local_b8 + local_1b0;
    lVar9 = lVar16;
    if (local_100 < uVar15) {
      lVar9 = *(longlong *)(lVar16 + -8);
      if (local_f0 <= (ulonglong)((lVar16 + local_e8) - lVar9)) {
LAB_1800d5b9d:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_a4,local_b0);
      }
      uVar15 = local_1b0 + local_f8;
    }
    thunk_FUN_1801f42e0(lVar9,uVar15);
  }
  return;
}



void Unwind_1800d5bc0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800d5c40(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 400);
  return;
}



void Unwind_1800d5cc0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800d5d40(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 400);
  return;
}



void Unwind_1800d5dc0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xd0);
  return;
}



void Unwind_1800d5e40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x150);
  return;
}



void Unwind_1800d5ec0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



undefined8 FUN_1800d5f40(undefined4 *param_1,longlong param_2,longlong param_3,float *param_4,float param_5)

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  size_t sVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  char *_Str;
  float *pfVar24;
  bool bVar25;
  uint uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 in_stack_fffffffffffffb58;
  undefined8 local_498;
  undefined8 uStack_490;
  float local_488 [5];
  float fStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  float local_468;
  float fStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  float local_438 [4];
  undefined1 local_428 [16];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  float fStack_400;
  float fStack_3fc;
  float local_3f8 [4];
  float local_3e8 [4];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [16];
  float local_388 [8];
  undefined8 local_368;
  undefined8 uStack_360;
  float local_358 [4];
  float local_348 [4];
  float local_338 [4];
  undefined1 local_328 [8];
  float local_320;
  undefined4 local_31c;
  longlong local_318;
  undefined8 local_310;
  undefined8 local_308;
  ulonglong local_300;
  longlong local_2f8;
  ulonglong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  ulonglong local_2d8;
  undefined8 local_2d0;
  float local_2c8 [24];
  ulonglong local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined4 local_250;
  longlong local_248;
  longlong local_240;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  float local_224;
  undefined4 local_220;
  int local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  size_t local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_178;
  uint uStack_174;
  longlong local_168;
  longlong local_160;
  float local_158;
  float fStack_154;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_120;
  undefined4 local_11c;
  ulonglong local_118;
  float local_110;
  uint local_10c;
  longlong local_108;
  size_t local_100;
  undefined1 local_f5;
  float local_f4;
  undefined8 local_f0;
  undefined1 auVar43 [16];

  uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffb58 >> 0x20);
  local_f0 = 0xfffffffffffffffe;
  local_110 = 1.0;
  local_238 = 21.0;
  local_234 = 38.0;
  local_120 = 0.5;
  local_f4 = 0.0;
  local_230 = 0.001;
  local_22c = 0x40a00000;
  local_228 = 0.2;
  local_224 = 60.0;
  local_220 = 0x3e6147ae;
  local_10c = 0;
  local_f5 = 0;
  local_208 = 0xfff;
  local_318 = 0x27;
  local_310 = 2;
  local_108 = 1;
  local_168 = 0x28;
  local_118 = 0xf;
  local_268 = 0xb;
  local_308 = 0x7000000000000000;
  local_200 = 0x20;
  local_300 = 0xffffffffffffffe0;
  local_2f8 = 0x70;
  local_2f0 = 0xffe;
  local_21c = 2;
  local_2e8 = 6;
  local_1f8 = -8;
  local_2e0 = 3;
  local_100 = 0;
  local_260 = 0x25;
  local_2d8 = 0x10;
  local_11c = 1;
  lVar11 = FUN_1800eb430();
  fVar41 = *param_4;
  uVar9 = 0;
  if ((fVar41 <= (float)param_1[0x85]) && (fVar29 = param_4[2], (float)param_1[0x85] <= fVar29)) {
    uVar9 = 0;
    if ((param_4[1] <= (float)param_1[0x86]) && (fVar27 = param_4[3], (float)param_1[0x86] <= fVar27)) {
      local_1e8 = 1.0;
      fStack_1e4 = 1.0;
      fStack_1e0 = 1.0;
      fStack_1dc = 0.045;
      fVar46 = param_5 * 3.0;
      local_438[0] = fVar41;
      local_438[1] = fVar41;
      local_438[2] = fVar41;
      local_438[3] = fVar41;
      local_438[(uint)local_108 & 3] = param_4[1];
      local_448 = CONCAT44(local_438[1],local_438[0]);
      uStack_440 = CONCAT44(local_438[3],local_438[2]);
      *(float *)((longlong)&local_448 + (ulonglong)((uint)local_310 & 3) * 4) = fVar29;
      local_458 = local_448;
      uStack_450 = uStack_440;
      *(float *)((longlong)&local_458 + (ulonglong)((uint)local_2e0 & 3) * 4) = fVar27;
      local_158 = (float)local_458 + fVar46;
      fStack_154 = (float)((ulonglong)local_458 >> 0x20) + fVar46;
      uStack_150._0_4_ = (float)uStack_450 - fVar46;
      uStack_150._4_4_ = (float)((ulonglong)uStack_450 >> 0x20) - fVar46;
      uVar12 = FUN_180172640(&local_158,&local_1e8,param_5 * 6.0);
      puVar22 = (undefined4 *)(param_2 + 0x30);
      puVar20 = param_1 + 0x7c;
      uVar9 = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      if (puVar20 != puVar22) {
        uVar19 = *(ulonglong *)(param_2 + 0x40);
        if (local_118 < *(ulonglong *)(param_2 + 0x48)) {
          puVar22 = *(undefined4 **)(param_2 + 0x30);
        }
        if (*(ulonglong *)(param_1 + 0x82) < uVar19) {
          uVar12 = FUN_18007f460(puVar20,uVar19);
        }
        else {
          if (local_118 < *(ulonglong *)(param_1 + 0x82)) {
            puVar20 = *(undefined4 **)(param_1 + 0x7c);
          }
          *(ulonglong *)(param_1 + 0x80) = uVar19;
          FUN_1802079d0(puVar20,puVar22,uVar19);
          uVar12 = 0;
          *(undefined1 *)((longlong)puVar20 + uVar19) = local_f5;
        }
        uVar9 = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      }
    }
  }
  local_240 = CONCAT44(local_240._4_4_,uVar9);
  fVar41 = param_4[3];
  fVar46 = param_5 * 12.5;
  uVar12 = *(undefined8 *)param_4;
  fVar29 = param_4[1];
  fVar27 = (float)FUN_180173310();
  uVar26 = (uint)local_108;
  local_2c8[(uint)local_100 & 1] = param_5;
  local_2c8[uVar26 & 1] = (fVar41 - fVar29) - fVar27;
  local_2d0 = CONCAT44(SUB84(local_2c8._0_8_,4) * 0.5 + (float)((ulonglong)uVar12 >> 0x20),
                       (float)local_2c8._0_8_ * 14.0 + (float)uVar12);
  fVar41 = (param_4[2] - *param_4) * 0.45;
  auVar43 = ZEXT416((uint)fVar41);
  uVar12 = CONCAT44(uVar31,local_10c);
  pfVar14 = &local_1e8;
  FUN_180173430(pfVar14,param_2 + 0x10,fVar41,fVar46,uVar12);
  uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),local_10c);
  FUN_180173000(pfVar14,&local_2d0,lVar11 + 0x80,fVar46,uVar12,local_10c);
  uVar9 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar19 = CONCAT44(uStack_1cc,uStack_1d0);
  if (local_118 < uVar19) {
    lVar15 = CONCAT44(fStack_1e4,local_1e8);
    uVar18 = local_108 + uVar19;
    lVar17 = lVar15;
    if (local_208 < uVar18) {
      lVar17 = *(longlong *)(lVar15 + -8);
      if (local_200 <= (ulonglong)((lVar15 + local_1f8) - lVar17)) goto LAB_1800d82aa;
      uVar18 = uVar19 + local_168;
    }
    thunk_FUN_1801f42e0(lVar17,uVar18);
  }
  uVar31 = local_220;
  auVar47._4_4_ = param_5;
  auVar47._0_4_ = param_5;
  auVar47._8_4_ = param_5;
  auVar47._12_4_ = param_5;
  local_218 = 0;
  uStack_210 = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar26 = (uint)local_100;
  uVar23 = (uint)local_108;
  if (iVar1 < 4) {
    fVar30 = local_f4;
    if (iVar1 < 2) {
      if (iVar1 != 1) {
        fVar29 = 0.0;
        fVar41 = 0.0;
        fVar27 = 0.0;
        fVar45 = 0.0;
        uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
        if (iVar1 != 0) goto LAB_1800d8087;
        pfVar14 = (float *)FUN_1800c4a90(param_1,param_2);
        fVar41 = local_110;
        if (*(char *)(param_2 + 0x90) == '\0') {
          fVar41 = local_f4;
        }
        pfVar14[1] = fVar41;
        fVar29 = *(float *)(lVar11 + 0xa4);
        if (local_110 <= fVar29) {
LAB_1800d6c61:
          fVar27 = fVar41;
          *pfVar14 = fVar27;
        }
        else {
          fVar27 = *pfVar14;
          if (local_f4 < fVar29) {
            uVar12 = FUN_1800ebf90();
            auVar35._8_4_ = (int)extraout_XMM0_Qb;
            auVar35._0_8_ = uVar12;
            auVar35._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
            auVar36._4_12_ = auVar35._4_12_;
            auVar36._0_4_ = (float)uVar12 * local_224;
            fVar29 = (float)FUN_1801eaf60(local_110 - fVar29,auVar36._0_8_);
            fVar27 = (local_110 - fVar29) * (fVar41 - fVar27) + *pfVar14;
            *pfVar14 = fVar27;
            fVar41 = pfVar14[1];
          }
          if (ABS(fVar41 - fVar27) < local_230) goto LAB_1800d6c61;
        }
        fVar45 = param_5 * 14.0;
        fVar41 = param_4[2];
        fVar29 = (param_4[3] - param_4[1]) * 0.5 + param_4[1];
        uVar26 = (uint)local_108;
        local_2c8[(ulonglong)((uint)local_100 & 1) + 0x12] = -fVar45;
        local_2c8[(ulonglong)(uVar26 & 1) + 0x12] = param_5;
        uVar26 = (uint)local_108;
        local_2c8[(ulonglong)((uint)local_100 & 1) + 0x10] = fVar29;
        local_2c8[(ulonglong)(uVar26 & 1) + 0x10] = fVar41;
        fStack_1e4 = (float)local_2c8._72_8_ * 0.5 + (float)local_2c8._64_8_;
        fStack_1e0 = SUB84(local_2c8._72_8_,4) * -14.0 + SUB84(local_2c8._64_8_,4);
        local_488[0] = fStack_1e4;
        local_488[1] = fStack_1e0;
        local_488[2] = 0.0;
        local_488[3] = 0.0;
        local_1e8 = local_488[(uint)local_108 & 3] - param_5 * 26.0;
        fStack_1dc = fVar45 * 0.5 + fVar29;
        FUN_1800ebfa0(lVar11,&local_138,local_10c);
        local_158 = fVar27 * ((float)local_138 + -0.16470589) + 0.16470589;
        fStack_154 = fVar27 * (local_138._4_4_ + -0.1882353) + 0.1882353;
        uStack_150._0_4_ = fVar27 * ((float)uStack_130 + -0.23529412) + 0.23529412;
        uStack_150._4_4_ = fVar27 * (uStack_130._4_4_ + -1.0) + 1.0;
        FUN_180172640(&local_1e8,&local_158);
        fVar41 = fStack_1e4;
        fVar29 = param_5 * -2.0 + fVar45 * 0.5;
        fVar46 = fVar29 + local_1e8;
        local_158 = 1.0;
        fStack_154 = 1.0;
        uStack_150._0_4_ = 1.0;
        uStack_150._4_4_ = 0.95;
        uVar26 = (uint)local_108;
        local_2c8[(ulonglong)((uint)local_100 & 1) + 0xe] =
             param_5 * -4.0 + ((fStack_1e0 - local_1e8) - (fVar29 + fVar29));
        local_2c8[(ulonglong)(uVar26 & 1) + 0xe] = fVar45;
        local_388[4] = 0.0;
        local_388[5] = 0.5;
        local_388[6] = 0.0;
        local_388[7] = 0.0;
        local_388[(ulonglong)((uint)local_100 & 3) + 4] = fVar27;
        uVar26 = (uint)local_108;
        local_2c8[(ulonglong)((uint)local_100 & 1) + 0xc] = param_5 + param_5 + fVar46;
        local_2c8[(ulonglong)(uVar26 & 1) + 0xc] = fVar41;
        fVar41 = (float)local_2c8._56_8_ * local_388[4] + (float)local_2c8._48_8_;
        fVar27 = SUB84(local_2c8._56_8_,4) * local_388[5] + SUB84(local_2c8._48_8_,4);
        auVar37._4_4_ = fVar29;
        auVar37._0_4_ = fVar29;
        auVar37._8_4_ = fVar29;
        auVar37._12_4_ = fVar29;
        auVar3._4_8_ = auVar37._8_8_;
        auVar3._0_4_ = fVar29 + SUB84(local_2c8._48_8_,4);
        auVar38._0_8_ = auVar3._0_8_ << 0x20;
        auVar38._8_4_ = fVar29 + fVar41;
        auVar38._12_4_ = fVar29 + fVar27;
        uStack_130 = auVar38._8_8_;
        local_138 = (undefined *)CONCAT44(fVar27 - fVar29,fVar41 - fVar29);
        pfVar14 = (float *)&local_138;
        pfVar24 = &local_158;
LAB_1800d805e:
        FUN_180172640(pfVar14,pfVar24);
LAB_1800d8063:
        fVar29 = local_f4;
        fVar41 = local_f4;
        fVar27 = local_f4;
        fVar45 = local_f4;
        goto LAB_1800d8087;
      }
      iVar1 = *(int *)(param_2 + 0x98);
      iVar10 = *(int *)(param_2 + 0x9c) - iVar1;
      if (iVar10 != 0 && iVar1 <= *(int *)(param_2 + 0x9c)) {
        fVar30 = (float)(*(int *)(param_2 + 0x90) - iVar1) / (float)iVar10;
      }
    }
    else {
      if (iVar1 == 3) {
        fVar41 = (float)FUN_180173360((longlong)*(int *)(param_2 + 0x90) * 0x20 + *(longlong *)(param_2 + 0x98));
        fVar41 = param_5 * 18.0 + fVar41;
        if (fVar41 <= local_234 * param_5) {
          fVar41 = local_234 * param_5;
        }
        fVar29 = param_4[2];
        fVar27 = (param_4[3] - param_4[1]) * 0.5 + param_4[1];
        fVar45 = local_238 * param_5 * 0.5 + fVar27;
        uVar26 = (uint)local_108;
        local_2c8[(ulonglong)((uint)local_100 & 1) + 10] = -(local_238 * param_5);
        local_2c8[(ulonglong)(uVar26 & 1) + 10] = param_5;
        uVar26 = (uint)local_108;
        local_2c8[(ulonglong)((uint)local_100 & 1) + 8] = fVar27;
        local_2c8[(ulonglong)(uVar26 & 1) + 8] = fVar29;
        local_388[0] = (float)local_2c8._40_8_ * 0.5 + (float)local_2c8._32_8_;
        local_388[1] = SUB84(local_2c8._40_8_,4) * -14.0 + SUB84(local_2c8._32_8_,4);
        local_388[2] = 0.0;
        local_388[3] = 0.0;
        local_1e8 = local_388[(uint)local_108 & 3] - fVar41;
        fStack_1e4 = local_388[0];
        fStack_1e0 = local_388[1];
        fStack_1dc = fVar45;
        local_158 = 1.0;
        fStack_154 = 1.0;
        uStack_150._0_4_ = 1.0;
        uStack_150._4_4_ = 0.1;
        FUN_180172640(pfVar14,&local_158,(fVar45 - local_388[(uint)local_100 & 3]) * local_120);
        local_158 = 1.0;
        fStack_154 = 1.0;
        uStack_150._0_4_ = 1.0;
        uStack_150._4_4_ = 0.08;
        FUN_1801728e0(pfVar14,&local_158);
        fVar45 = fStack_1dc;
        fVar27 = fStack_1e0;
        fVar29 = fStack_1e4;
        fVar41 = local_1e8;
        auVar6._4_4_ = fStack_1e4;
        auVar6._0_4_ = local_1e8;
        auVar6._8_4_ = fStack_1e0;
        auVar6._12_4_ = fStack_1dc;
        uVar12 = CONCAT44(fStack_1e4,local_1e8);
        fVar30 = fStack_1dc - fStack_1e4;
        uVar28 = FUN_180173310();
        local_398._8_4_ = fVar27;
        local_398._0_8_ = auVar6._8_8_;
        local_398._12_4_ = fVar45;
        *(float *)(local_398 + (ulonglong)((uint)local_108 & 3) * 4) = fVar30;
        uVar31 = local_398._0_4_;
        uVar7 = local_398._4_4_;
        uStack_3a0 = 0;
        local_3a8 = uVar12;
        *(undefined4 *)((longlong)&local_3a8 + (ulonglong)((uint)local_108 & 3) * 4) = uVar28;
        local_158 = ((float)uVar31 - (float)local_3a8) * 0.5 + fVar41;
        fStack_154 = ((float)uVar7 - local_3a8._4_4_) * 0.5 + fVar29;
        FUN_180173000((longlong)*(int *)(param_2 + 0x90) * 0x20 + *(longlong *)(param_2 + 0x98),&local_158,lVar11 + 0x50
                      ,fVar46,CONCAT44(uVar9,local_11c),local_11c);
        goto LAB_1800d8063;
      }
      fVar41 = *(float *)(param_2 + 0x98);
      if (fVar41 < *(float *)(param_2 + 0x9c)) {
        fVar30 = (*(float *)(param_2 + 0x90) - fVar41) / (*(float *)(param_2 + 0x9c) - fVar41);
      }
    }
    fVar41 = param_4[1];
    fVar29 = param_4[3];
    fVar45 = (fVar29 - fVar41) * 0.5 + fVar41;
    fVar27 = param_4[2];
    fVar42 = param_5 * 4.0 * 0.5 + fVar45;
    local_2c8[(ulonglong)(uVar26 & 1) + 0x16] = -(param_5 * 4.0);
    local_2c8[(ulonglong)(uVar23 & 1) + 0x16] = param_5;
    uVar26 = (uint)local_108;
    local_2c8[(ulonglong)((uint)local_100 & 1) + 0x14] = fVar45;
    local_2c8[(ulonglong)(uVar26 & 1) + 0x14] = fVar27;
    local_488[4] = (float)local_2c8._88_8_ * 0.5 + (float)local_2c8._80_8_;
    fStack_474 = SUB84(local_2c8._88_8_,4) * -14.0 + SUB84(local_2c8._80_8_,4);
    uStack_470 = 0;
    uStack_46c = 0;
    fVar27 = param_5 * 9.0 + local_488[(ulonglong)((uint)local_108 & 3) + 4];
    fVar45 = local_488[(ulonglong)((uint)local_108 & 3) + 4] - param_5 * 108.0;
    local_218 = CONCAT44(local_488[4],fVar45);
    uStack_210 = CONCAT44(fVar42,fStack_474);
    fVar45 = param_5 * -9.0 + fVar45;
    lVar17 = *(longlong *)(param_1 + 0x52);
    fVar48 = local_f4;
    if (((fVar45 <= (float)param_1[0x85]) && ((float)param_1[0x85] <= fVar27)) && (fVar41 <= (float)param_1[0x86])) {
      uVar26 = -(uint)((float)param_1[0x86] <= fVar29);
      fVar48 = (float)(~uVar26 & (uint)local_f4 | (uint)local_120 & uVar26);
    }
    local_468 = local_488[4];
    fStack_464 = fStack_474;
    uStack_460 = 0;
    uStack_45c = 0;
    local_1e8 = 0.16470589;
    fStack_1e4 = 0.1882353;
    fStack_1e0 = 0.23529412;
    fStack_1dc = 1.0;
    FUN_180172640(&local_218,&local_1e8,(fVar42 - local_488[(ulonglong)((uint)local_100 & 3) + 8]) * local_120);
    local_368 = local_218;
    uStack_360 = 0;
    fVar42 = *(float *)((longlong)&local_368 + (ulonglong)((uint)local_100 & 3) * 4);
    fVar42 = ((float)uStack_210 - fVar42) * fVar30 + fVar42;
    local_1e8 = (float)local_218;
    fStack_1e4 = (float)((ulonglong)local_218 >> 0x20);
    fStack_1dc = uStack_210._4_4_;
    fStack_1e0 = fVar42;
    FUN_180172640(&local_1e8,lVar11 + 0x50,
                  (uStack_210._4_4_ - *(float *)((longlong)&local_368 + (ulonglong)((uint)local_108 & 3) * 4)) *
                  local_120);
    pfVar14 = (float *)FUN_1800c4a90(param_1,param_2);
    if (lVar17 == param_2) {
      fVar48 = local_110;
    }
    pfVar14[1] = fVar48;
    fVar30 = *(float *)(lVar11 + 0xa4);
    if (local_110 <= fVar30) {
LAB_1800d7309:
      *pfVar14 = fVar48;
      fVar34 = fVar48;
    }
    else {
      fVar34 = *pfVar14;
      if (local_f4 < fVar30) {
        uVar12 = FUN_1800ebf90();
        auVar39._8_4_ = (int)extraout_XMM0_Qb_00;
        auVar39._0_8_ = uVar12;
        auVar39._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        auVar40._4_12_ = auVar39._4_12_;
        auVar40._0_4_ = (float)uVar12 * local_224;
        fVar30 = (float)FUN_1801eaf60(local_110 - fVar30,auVar40._0_8_);
        fVar34 = (local_110 - fVar30) * (fVar48 - fVar34) + *pfVar14;
        *pfVar14 = fVar34;
        fVar48 = pfVar14[1];
      }
      if (ABS(fVar48 - fVar34) < local_230) goto LAB_1800d7309;
    }
    fVar30 = (fVar34 * 2.2 + 6.0) * param_5;
    fStack_154 = (uStack_210._4_4_ - local_218._4_4_) * 0.5 + local_218._4_4_;
    if (fVar34 <= 0.01) {
      local_158 = fVar42 - fVar30;
      uStack_150._0_4_ = fVar42 + fVar30;
      uStack_150._4_4_ = fVar30 + fStack_154;
      fStack_154 = fStack_154 - fVar30;
      local_160 = param_3;
    }
    else {
      fStack_1dc = fVar34 * local_228;
      fStack_1e0 = *(float *)(lVar11 + 0x58);
      local_1e8 = (float)*(undefined8 *)(lVar11 + 0x50);
      fStack_1e4 = (float)((ulonglong)*(undefined8 *)(lVar11 + 0x50) >> 0x20);
      local_338[0] = fVar42;
      local_338[1] = fVar42;
      local_338[2] = fVar42;
      local_338[3] = fVar42;
      local_160 = param_3;
      local_338[(uint)local_108 & 3] = fStack_154;
      fVar50 = local_338[0] - fVar30;
      fVar51 = local_338[1] - fVar30;
      fVar52 = local_338[0] - fVar30;
      fVar53 = local_338[1] - fVar30;
      fVar48 = fVar30 + local_338[0];
      fVar42 = fVar30 + local_338[1];
      fVar34 = fVar30 + local_338[0];
      fVar49 = fVar30 + local_338[1];
      local_158 = param_5 * -3.5 + fVar50;
      fStack_154 = param_5 * -3.5 + fVar51;
      uStack_150._0_4_ = param_5 * 3.5 + fVar34;
      uStack_150._4_4_ = param_5 * 3.5 + fVar49;
      FUN_180172640(&local_158,&local_1e8,param_5 * 3.5 + fVar30);
      local_348[0] = fVar50;
      local_348[1] = fVar51;
      local_348[2] = fVar52;
      local_348[3] = fVar53;
      local_158 = local_348[(uint)local_100 & 3];
      fStack_154 = local_348[(uint)local_108 & 3];
      local_358[0] = fVar48;
      local_358[1] = fVar42;
      local_358[2] = fVar34;
      local_358[3] = fVar49;
      uStack_150._0_4_ = local_358[(uint)local_310 & 3];
      uStack_150._4_4_ = local_358[(uint)local_2e0 & 3];
    }
    local_1e8 = 1.0;
    fStack_1e4 = 1.0;
    fStack_1e0 = 1.0;
    fStack_1dc = 0.96;
    FUN_180172640(&local_158,&local_1e8);
    lVar15 = 0x90;
    if (lVar17 != param_2) {
      lVar15 = local_2f8;
    }
    local_320 = param_5 * -12.0 + (float)local_218;
    local_31c = local_2d0._4_4_;
    if (*(int *)(param_2 + 8) == local_21c) {
      uStack_1d0 = (undefined4)local_118;
      uStack_1cc = (undefined4)(local_118 >> 0x20);
      local_158 = (float)local_108;
      fStack_154 = (float)((ulonglong)local_108 >> 0x20);
      if (local_110 <= *(float *)(param_2 + 0xa0)) {
        local_250 = *(undefined4 *)(param_2 + 0x90);
        local_258 = local_308;
        local_1e8 = 0.0;
        fStack_1e4 = 0.0;
        fStack_1e0 = 0.0;
        fStack_1dc = 0.0;
        local_1d8 = 0;
        uStack_150 = &local_258;
        FUN_1800eb180(&DAT_1802a3c54,&DAT_180276068,0x1e,7,&DAT_1802a3c5c);
        local_138 = &DAT_1802a3c54;
        uStack_130 = local_2e8;
        sVar13 = local_100;
        FUN_180003080(local_328,&local_1e8,&local_138,&local_158,local_100);
        uVar9 = (undefined4)(sVar13 >> 0x20);
      }
      else {
        local_250 = *(undefined4 *)(param_2 + 0x90);
        local_258 = local_308;
        local_1e8 = 0.0;
        fStack_1e4 = 0.0;
        fStack_1e0 = 0.0;
        fStack_1dc = 0.0;
        local_1d8 = 0;
        uStack_150 = &local_258;
        FUN_1800eb180(&DAT_1802a3c60,&DAT_1802760a3,0x1b,7,&DAT_1802a3c68);
        local_138 = &DAT_1802a3c60;
        uStack_130 = local_2e8;
        sVar13 = local_100;
        FUN_180003080(local_328,&local_1e8,&local_138,&local_158,local_100);
        uVar9 = (undefined4)(sVar13 >> 0x20);
      }
    }
    else {
      FUN_180082d10(&local_1e8,*(undefined4 *)(param_2 + 0x90));
    }
    FUN_180173000(&local_1e8,&local_320,lVar11 + lVar15,fVar46,CONCAT44(uVar9,local_11c),local_21c);
    param_3 = local_160;
    uVar19 = CONCAT44(uStack_1cc,uStack_1d0);
    if (local_118 < uVar19) {
      lVar15 = CONCAT44(fStack_1e4,local_1e8);
      uVar18 = local_108 + uVar19;
      lVar11 = lVar15;
      if (local_208 < uVar18) {
        lVar11 = *(longlong *)(lVar15 + -8);
        if (local_200 <= (ulonglong)((lVar15 + local_1f8) - lVar11)) goto LAB_1800d82aa;
        uVar18 = uVar19 + local_168;
      }
      thunk_FUN_1801f42e0(lVar11,uVar18);
    }
    uVar19 = local_268;
    if (((byte)local_240 & lVar17 != param_2) == 1) {
      puVar21 = (undefined8 *)(param_1 + 0x7c);
      if (*(ulonglong *)(param_1 + 0x82) < local_268) {
        FUN_1800eb180(&DAT_1802a3aac,&DAT_180275a59,0x13,0xc,&DAT_1802a3ab8);
        FUN_18007f460(puVar21,uVar19);
      }
      else {
        if (local_118 < *(ulonglong *)(param_1 + 0x82)) {
          puVar21 = *(undefined8 **)(param_1 + 0x7c);
        }
        *(ulonglong *)(param_1 + 0x80) = local_268;
        FUN_1800eb180(&DAT_1802a3aac,&DAT_180275a59,0x13,0xc,&DAT_1802a3ab8);
        *(undefined4 *)((longlong)puVar21 + 7) = ram0x0001802a3ab3;
        *puVar21 = CONCAT17(DAT_1802a3aac._7_1_,(undefined7)DAT_1802a3aac);
        *(undefined1 *)((longlong)puVar21 + 0xb) = local_f5;
      }
    }
  }
  else {
    if (iVar1 < 6) {
      if (iVar1 == 4) {
        local_498 = *(undefined8 *)(param_4 + 1);
        uStack_490 = 0;
        local_2c8[(ulonglong)(uVar26 & 1) + 6] =
             param_4[3] - *(float *)((longlong)&local_498 + (ulonglong)(uVar26 & 3) * 4);
        local_2c8[(ulonglong)(uVar23 & 1) + 6] = param_5;
        fVar41 = SUB84(local_2c8._24_8_,4);
        fVar29 = (float)local_2c8._24_8_ * 0.5 + (float)local_498;
        fVar27 = fVar41 * -14.0 + (float)((ulonglong)local_498 >> 0x20);
        local_3b8 = CONCAT44(fVar27,fVar29);
        uStack_3b0 = 0;
        fStack_1dc = param_5 * 8.0 + *(float *)((longlong)&local_3b8 + (ulonglong)((uint)local_100 & 3) * 4);
        local_1e8 = fVar41 * -26.0 + fVar27;
        fStack_1e4 = fVar41 * -8.0 + fVar29;
        fStack_1e0 = *(float *)((longlong)&local_3b8 + (ulonglong)((uint)local_108 & 3) * 4);
        FUN_180172640(pfVar14,param_2 + 0x90);
        local_158 = 1.0;
        fStack_154 = 1.0;
        uStack_150._0_4_ = 1.0;
        uStack_150._4_4_ = 0.15;
        FUN_1801728e0(pfVar14,&local_158);
        goto LAB_1800d8063;
      }
      lVar17 = *(longlong *)(param_1 + 0x58);
      uVar9 = 1;
      _Str = &DAT_1802a3abc;
      local_1f0 = lVar11;
      FUN_1800eb180(&DAT_1802a3abc,&DAT_180275a95,0x1a,0xc,&DAT_1802a3ac8);
      local_248 = lVar17;
      if (lVar17 != param_3) {
        _Str = (char *)FUN_1801026e0(*(undefined4 *)(param_2 + 0x90));
      }
      local_1e8 = 0.0;
      fStack_1e4 = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      local_160 = param_3;
      sVar13 = strlen(_Str);
      if ((longlong)sVar13 < (longlong)local_100) {
LAB_1800d82c9:
        FUN_180002ac0();
      }
      uVar19 = local_118;
      if (local_2d8 <= sVar13) {
        uVar18 = local_118 | sVar13;
        uVar19 = 0x16;
        if (0x16 < uVar18) {
          uVar19 = uVar18;
        }
        if (local_2f0 < uVar18) {
          lVar11 = FUN_1801d61c8(local_168 + uVar19);
          pfVar14 = (float *)(local_318 + lVar11 & local_300);
          *(longlong *)(pfVar14 + -2) = lVar11;
        }
        else {
          pfVar14 = (float *)FUN_1801d61c8(local_108 + uVar19);
        }
        local_1e8 = SUB84(pfVar14,0);
        fStack_1e4 = (float)((ulonglong)pfVar14 >> 0x20);
      }
      uStack_1d0 = (undefined4)uVar19;
      uStack_1cc = (undefined4)(uVar19 >> 0x20);
      local_1d8 = sVar13;
      FUN_1802079d0(pfVar14,_Str,sVar13);
      *(undefined1 *)((longlong)pfVar14 + sVar13) = local_f5;
      fVar29 = (float)FUN_180173360(&local_1e8);
      param_3 = local_160;
      lVar17 = local_1f0;
      lVar11 = local_248;
      fVar41 = param_4[2];
      uVar26 = (uint)local_100;
      uVar23 = (uint)local_108;
      bVar25 = local_248 == local_160;
      fVar29 = param_5 * 18.0 + fVar29;
      if (fVar29 <= local_234 * param_5) {
        fVar29 = local_234 * param_5;
      }
      fVar27 = (param_4[3] - param_4[1]) * 0.5 + param_4[1];
      fVar45 = local_238 * param_5 * 0.5 + fVar27;
      local_2c8[(ulonglong)(uVar26 & 1) + 4] = -(local_238 * param_5);
      local_2c8[(ulonglong)(uVar23 & 1) + 4] = param_5;
      local_2c8[(ulonglong)(uVar26 & 1) + 2] = fVar27;
      local_2c8[(ulonglong)(uVar23 & 1) + 2] = fVar41;
      local_3e8[0] = (float)local_2c8._16_8_ * 0.5 + (float)local_2c8._8_8_;
      local_3e8[1] = SUB84(local_2c8._16_8_,4) * -14.0 + SUB84(local_2c8._8_8_,4);
      local_3e8[2] = 0.0;
      local_3e8[3] = 0.0;
      local_158 = local_3e8[uVar23 & 3] - fVar29;
      fStack_154 = local_3e8[0];
      uStack_150._0_4_ = local_3e8[1];
      uStack_150._4_4_ = fVar45;
      uVar31 = 0x3dcccccd;
      if (bVar25) {
        uVar31 = 0x3e23d70a;
      }
      local_138 = (undefined *)0x3f8000003f800000;
      uStack_130 = CONCAT44(uVar31,local_110);
      FUN_180172640(&local_158,&local_138,(fVar45 - local_3e8[uVar26 & 3]) * local_120);
      uVar31 = local_220;
      if (lVar11 != param_3) {
        uVar31 = 0x3da3d70a;
      }
      local_138 = (undefined *)0x3f8000003f800000;
      uStack_130 = CONCAT44(uVar31,local_110);
      FUN_1801728e0(&local_158,&local_138);
      fVar27 = uStack_150._4_4_;
      fVar29 = fStack_154;
      fVar41 = local_158;
      auVar4._4_8_ = auVar47._8_8_;
      auVar4._0_4_ = fStack_154;
      auVar43._0_8_ = auVar4._0_8_ << 0x20;
      auVar43._8_4_ = (float)uStack_150;
      auVar43._12_4_ = uStack_150._4_4_;
      uVar12 = CONCAT44(fStack_154,local_158);
      uVar31 = FUN_180173310();
      local_3c8 = auVar43._8_8_;
      lVar15 = 0x50;
      if (lVar11 != param_3) {
        lVar15 = local_2f8;
      }
      uStack_3c0 = local_3c8;
      *(float *)((longlong)&local_3c8 + (ulonglong)((uint)local_108 & 3) * 4) = fVar27 - fVar29;
      fVar27 = (float)local_3c8;
      fVar45 = local_3c8._4_4_;
      uStack_3d0 = 0;
      local_3d8 = uVar12;
      *(undefined4 *)((longlong)&local_3d8 + (ulonglong)((uint)local_108 & 3) * 4) = uVar31;
      local_138 = (undefined *)
                  CONCAT44((fVar45 - local_3d8._4_4_) * 0.5 + fVar29,(fVar27 - (float)local_3d8) * 0.5 + fVar41);
      FUN_180173000(&local_1e8,&local_138,lVar17 + lVar15,fVar46,CONCAT44(uVar9,local_11c),local_11c);
      uVar19 = local_260;
      if ((char)local_240 == '\0') {
LAB_1800d7cc0:
        uVar19 = CONCAT44(uStack_1cc,uStack_1d0);
        if (uVar19 <= local_118) goto LAB_1800d8063;
      }
      else {
        if (*(ulonglong *)(param_1 + 0x82) < local_260) {
          FUN_1800eb180(&DAT_1802a3acc,&DAT_180275acb,0x1d,0x26,&DAT_1802a3af4);
          param_3 = local_160;
          FUN_18007f460(param_1 + 0x7c,uVar19);
          goto LAB_1800d7cc0;
        }
        puVar21 = *(undefined8 **)(param_1 + 0x7c);
        *(ulonglong *)(param_1 + 0x80) = local_260;
        FUN_1800eb180(&DAT_1802a3acc,&DAT_180275acb,0x1d,0x26,&DAT_1802a3af4);
        *(ulonglong *)((longlong)puVar21 + 0x1d) = CONCAT53(DAT_1802a3ae9._3_5_,(undefined3)DAT_1802a3ae9);
        uVar12 = CONCAT35((undefined3)DAT_1802a3ae9,uRam00000001802a3ae4);
        puVar21[2] = _DAT_1802a3adc;
        puVar21[3] = uVar12;
        uVar12 = uRam00000001802a3ad4;
        *puVar21 = _DAT_1802a3acc;
        puVar21[1] = uVar12;
        *(undefined1 *)((longlong)puVar21 + 0x25) = local_f5;
        uVar19 = CONCAT44(uStack_1cc,uStack_1d0);
        if (uVar19 <= local_118) goto LAB_1800d8063;
      }
      lVar17 = CONCAT44(fStack_1e4,local_1e8);
      uVar18 = local_108 + uVar19;
      lVar11 = lVar17;
      if (local_208 < uVar18) {
        lVar11 = *(longlong *)(lVar17 + -8);
        if (local_200 <= (ulonglong)((lVar17 + local_1f8) - lVar11)) goto LAB_1800d82aa;
        uVar18 = uVar19 + local_168;
      }
      thunk_FUN_1801f42e0(lVar11,uVar18);
      goto LAB_1800d8063;
    }
    if (iVar1 == 6) {
      lVar17 = *(longlong *)(param_1 + 0x5a);
      fVar41 = *param_4;
      fVar29 = param_4[1];
      fVar27 = param_4[2];
      fVar46 = param_4[3];
      auVar2._4_8_ = auVar43._8_8_;
      auVar2._0_4_ = fVar29;
      auVar44._0_8_ = auVar2._0_8_ << 0x20;
      auVar44._8_4_ = fVar27;
      auVar44._12_4_ = fVar46;
      local_408 = auVar44._8_8_;
      fStack_400 = fVar27;
      fStack_3fc = fVar46;
      local_1f0 = lVar11;
      local_160 = param_3;
      *(float *)((longlong)&local_408 + (ulonglong)(uVar23 & 3) * 4) = param_5;
      local_138 = (undefined *)
                  CONCAT44((local_408._4_4_ - 0.0) * 5.0 + fVar29,((float)local_408 - fVar41) * 0.4 + fVar41);
      uStack_130 = CONCAT44((local_408._4_4_ - 0.0) * -5.0 + fVar46,(local_408._4_4_ - 0.0) * -14.0 + fVar27);
      fStack_1dc = (float)uVar31;
      if (lVar17 == param_2) {
        fStack_1dc = (float)0x3eb33333;
      }
      local_1e8 = 0.0;
      fStack_1e4 = 0.0;
      fStack_1e0 = local_f4;
      puVar21 = (undefined8 *)(param_2 + 0x90);
      if (lVar17 == param_2) {
        puVar21 = (undefined8 *)(param_1 + 0x5e);
      }
      FUN_180172640(&local_138,&local_1e8);
      fStack_1dc = local_228;
      if (lVar17 != param_2) {
        fStack_1dc = 0.07;
      }
      local_1e8 = 1.0;
      fStack_1e4 = 1.0;
      fStack_1e0 = local_110;
      local_248 = lVar17;
      FUN_1801728e0(&local_138,&local_1e8);
      bVar25 = puVar21[2] != local_100;
      fVar41 = local_138._4_4_;
      fVar29 = (float)uStack_130 - (float)local_138;
      local_240 = local_1f0 + 0x70;
      if (!bVar25) {
        local_240 = lVar11 + 0x80;
      }
      fVar46 = uStack_130._4_4_ - local_138._4_4_;
      fVar27 = (float)FUN_180173310();
      uVar12 = uStack_130;
      puVar8 = local_138;
      local_428 = auVar47;
      *(float *)(local_428 + (ulonglong)((uint)local_108 & 3) * 4) = fVar46 - fVar27;
      local_418 = puVar8;
      uStack_410 = uVar12;
      *(float *)((longlong)&local_418 + (ulonglong)((uint)local_108 & 3) * 4) = fVar41;
      lVar11 = local_1f0;
      local_258 = CONCAT44((float)local_428._4_4_ * 0.5 + local_418._4_4_,
                           (float)local_428._0_4_ * 7.0 + (float)local_418);
      if (lVar17 == param_2 || bVar25) {
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0.0;
        fStack_154 = 0.0;
        uStack_150._0_4_ = 0.0;
        uStack_150._4_4_ = 0.0;
        uVar19 = puVar21[2];
        if (local_118 < (ulonglong)puVar21[3]) {
          puVar21 = (undefined8 *)*puVar21;
        }
        if ((longlong)uVar19 < (longlong)local_100) goto LAB_1800d82c9;
        if (uVar19 < local_2d8) {
          uStack_140 = local_118;
          local_158 = (float)*puVar21;
          fStack_154 = (float)((ulonglong)*puVar21 >> 0x20);
          uStack_150._0_4_ = (float)puVar21[1];
          uStack_150._4_4_ = (float)((ulonglong)puVar21[1] >> 0x20);
          local_148 = uVar19;
        }
        else {
          uVar16 = local_118 | uVar19;
          uVar18 = 0x16;
          if (0x16 < uVar16) {
            uVar18 = uVar16;
          }
          if (local_2f0 < uVar16) {
            lVar17 = FUN_1801d61c8(local_168 + uVar18);
            uVar16 = local_318 + lVar17 & local_300;
            *(longlong *)(uVar16 - 8) = lVar17;
          }
          else {
            uVar16 = FUN_1801d61c8(local_108 + uVar18);
          }
          local_158 = (float)uVar16;
          fStack_154 = (float)(uVar16 >> 0x20);
          local_148 = uVar19;
          uStack_140 = uVar18;
          FUN_1802079d0(uVar16,puVar21,uVar19 + local_108);
        }
      }
      else {
        uStack_150._0_4_ = (float)local_100;
        uStack_150._4_4_ = (float)(local_100 >> 0x20);
        local_148 = 0xd;
        uStack_140 = local_118;
        uVar9 = 1;
        FUN_1800eb180(&DAT_1802a3af8,&DAT_180275b21,0x1d,0xe,&DAT_1802a3b08);
        uStack_150._0_4_ = (float)uRam00000001802a3b00;
        uStack_150._4_1_ = (undefined1)((uint5)uRam00000001802a3b00 >> 0x20);
        local_158 = (float)(undefined5)DAT_1802a3af8;
        fStack_154 = (float)(CONCAT35(DAT_1802a3af8._5_3_,(undefined5)DAT_1802a3af8) >> 0x20);
        lVar11 = local_1f0;
      }
      param_3 = local_160;
      fVar29 = param_5 * -14.0 + fVar29;
      FUN_180173430(&local_1e8,&local_158);
      FUN_180173000(&local_1e8,&local_258,local_240,param_5 * 12.0,CONCAT44(uVar9,local_10c),local_10c);
      uVar19 = CONCAT44(uStack_1cc,uStack_1d0);
      if (local_118 < uVar19) {
        lVar15 = CONCAT44(fStack_1e4,local_1e8);
        uVar18 = local_108 + uVar19;
        lVar17 = lVar15;
        if (local_208 < uVar18) {
          lVar17 = *(longlong *)(lVar15 + -8);
          if (local_200 <= (ulonglong)((lVar15 + local_1f8) - lVar17)) goto LAB_1800d82aa;
          uVar18 = uVar19 + local_168;
        }
        thunk_FUN_1801f42e0(lVar17,uVar18);
      }
      local_1d8 = local_100;
      uStack_1d0 = (undefined4)local_118;
      uStack_1cc = (undefined4)(local_118 >> 0x20);
      local_1e8 = (float)CONCAT31(local_1e8._1_3_,local_f5);
      if (local_118 < uStack_140) {
        lVar15 = CONCAT44(fStack_154,local_158);
        uVar19 = local_108 + uStack_140;
        lVar17 = lVar15;
        if (local_208 < uVar19) {
          lVar17 = *(longlong *)(lVar15 + -8);
          if (local_200 <= (ulonglong)((lVar15 + local_1f8) - lVar17)) goto LAB_1800d82aa;
          uVar19 = uStack_140 + local_168;
        }
        thunk_FUN_1801f42e0(lVar17,uVar19);
      }
      if (local_248 == param_2) {
        FUN_1800eb440();
        fVar41 = (float)FUN_1801ebe20();
        if (fVar41 < 0.55) {
          fVar27 = param_5 * 7.0 + (float)local_138;
          fVar41 = (float)FUN_180173360(param_1 + 0x5e);
          if (fVar41 <= fVar29) {
            fVar29 = fVar41;
          }
          fVar29 = fVar29 + fVar27;
          local_1e8 = param_5 + fVar29;
          fVar41 = param_5 * -4.0 + uStack_130._4_4_;
          local_3f8[0] = local_138._4_4_;
          local_3f8[1] = local_138._4_4_;
          local_3f8[2] = local_138._4_4_;
          local_3f8[3] = local_138._4_4_;
          local_3f8[(uint)local_108 & 3] = fVar29;
          fStack_1e4 = param_5 * 4.0 + local_3f8[0];
          fStack_1e0 = param_5 * 2.5 + local_3f8[1];
          pfVar24 = (float *)(lVar11 + 0x90);
          pfVar14 = &local_1e8;
          fStack_1dc = fVar41;
          goto LAB_1800d805e;
        }
      }
      goto LAB_1800d8063;
    }
    fVar29 = 0.0;
    fVar27 = 0.0;
    fVar41 = 0.0;
    fVar45 = 0.0;
    if (iVar1 == 7) {
      uVar12 = FUN_1800d8fe0(param_1,param_2,param_3,param_4,CONCAT44(uVar9,param_5));
      return uVar12;
    }
  }
LAB_1800d8087:
  auVar32 = ZEXT416((uint)local_f4);
  if ((*(int *)(param_2 + 8) == 4) && (param_2 == *(longlong *)(param_1 + 0x66))) {
    auVar32._0_8_ = FUN_1800da8e0(param_1,param_2,param_4,param_5);
    auVar32._8_8_ = extraout_XMM0_Qb_01;
  }
  uVar12 = *(undefined8 *)param_4;
  uVar5 = *(undefined8 *)(param_4 + 2);
  local_1e8 = (float)uVar12;
  fStack_1e4 = (float)((ulonglong)uVar12 >> 0x20);
  fStack_1e0 = (float)uVar5;
  fStack_1dc = (float)((ulonglong)uVar5 >> 0x20);
  local_1d8 = CONCAT44(local_1d8._4_4_,local_11c);
  uStack_1d0 = (undefined4)param_3;
  uStack_1cc = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack_1c8 = (undefined4)param_2;
  uStack_1c4 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_1c0 = *param_1;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = local_118;
  local_198 = local_218;
  uStack_190 = uStack_210;
  local_178 = 0xffffffff;
  uStack_174 = local_10c;
  puVar21 = *(undefined8 **)(param_1 + 0x34);
  if (puVar21 == *(undefined8 **)(param_1 + 0x36)) {
    local_188 = fVar45;
    fStack_184 = fVar41;
    fStack_180 = fVar27;
    fStack_17c = fVar29;
    FUN_1800e67f0(param_1 + 0x32,puVar21,&local_1e8);
    if (local_118 < uStack_1a0) {
      uVar19 = local_108 + uStack_1a0;
      lVar11 = local_1b8;
      if (local_208 < uVar19) {
        lVar11 = *(longlong *)(local_1b8 + -8);
        if (local_200 <= (ulonglong)((local_1b8 + local_1f8) - lVar11)) {
LAB_1800d82aa:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_10c,local_100);
        }
        uVar19 = uStack_1a0 + local_168;
      }
      thunk_FUN_1801f42e0(lVar11,uVar19);
    }
  }
  else {
    *(ulonglong *)((longlong)puVar21 + 0x1c) = CONCAT44(uStack_1c8,uStack_1cc);
    *(ulonglong *)((longlong)puVar21 + 0x24) = CONCAT44(uStack_1c0,uStack_1c4);
    puVar21[2] = local_1d8;
    puVar21[3] = param_3;
    *puVar21 = uVar12;
    puVar21[1] = uVar5;
    puVar21[8] = 0;
    puVar21[9] = local_118;
    puVar21[6] = 0;
    puVar21[7] = 0;
    puVar21[0xc] = CONCAT44(fVar41,fVar45);
    puVar21[0xd] = CONCAT44(fVar29,fVar27);
    puVar21[10] = local_218;
    puVar21[0xb] = uStack_210;
    puVar21[0xe] = CONCAT44(local_10c,0xffffffff);
    *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
  }
  auVar33._4_12_ = auVar32._4_12_;
  auVar33._0_4_ = auVar32._0_4_ + (param_4[3] - param_4[1]);
  return auVar33._0_8_;
}



void Unwind_1800d82d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2e0);
  return;
}



void Unwind_1800d83b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2e0);
  return;
}



void Unwind_1800d8490(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2e0);
  return;
}



void Unwind_1800d8570(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x370);
  return;
}



void Unwind_1800d8650(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2e0);
  return;
}



void Unwind_1800d8730(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x2e0);
  return;
}



void Unwind_1800d8810(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2e0);
  return;
}



void Unwind_1800d88f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2e0);
  return;
}



void FUN_1800d89d0(undefined8 param_1,longlong param_2,undefined4 *param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_1e8 [44];
  float local_1bc;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  float local_190;
  float local_18c;
  ulonglong local_188;
  ulonglong local_180;
  undefined4 *local_178;
  float *local_170;
  float *local_168;
  float *local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138 [4];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  ulonglong local_f0;

  local_f0 = DAT_1802a0400 ^ (ulonglong)auStack_1e8;
  local_1b0 = 0xa278062b6b86ba74;
  local_1b8 = 0x5695c5047e95ff9d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar9 = local_1b0 ^ 0x9f37db6167aa1036;
          uVar5 = local_1b0 ^ local_1b8;
          local_1b8 = local_1b8 ^ 0x9f37db6167aa1036;
          local_1b0 = uVar9;
          if (-0xb123cd0eaecba18 < (longlong)uVar5) break;
          if (uVar5 == 0xa4d935fbbe365ba6) {
            local_18c = param_5 * 3.0;
            fVar15 = param_5 * 6.0;
            local_170 = (float *)(param_2 + 4);
            local_fc = *(float *)(param_2 + 4) + fVar15;
            local_168 = &local_fc;
            local_160 = &local_f8;
            local_138[0] = (float)*(undefined8 *)(param_2 + 8) - fVar15;
            local_138[1] = (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20) - fVar15;
            local_138[2] = 0.0 - fVar15;
            local_138[3] = 0.0 - fVar15;
            local_100 = local_138[(uint)local_1a8 & 3] - local_18c;
            local_f8 = local_138[0];
            fStack_f4 = local_138[1];
            local_1b0 = 0xdb77a47760ace805;
            if (local_1bc < local_138[(uint)local_1a0 & 3] - local_fc) {
              local_1b0 = 0x365b13728c005a5f;
            }
            local_1b8 = 0xf851da565c208917;
          }
          else if (uVar5 == 0xce0ac924d020d348) {
            local_158 = 0x3f8000003f800000;
            _uStack_150 = CONCAT44(param_6,0x3f800000);
            local_118 = 0x3f800000;
            uStack_114 = 0x3f800000;
            uStack_110 = 0x3f800000;
            fStack_10c = param_6 * 0.05;
            FUN_180172640(&local_100,&local_118);
            fVar14 = fStack_f4;
            fVar15 = *(float *)(param_2 + 0xc);
            fVar1 = *local_170;
            fVar2 = *local_168;
            uVar3 = *local_178;
            uVar6 = (uint)local_1a8;
            uVar8 = (uint)local_1a0;
            *(undefined4 *)((longlong)&local_188 + (ulonglong)(uVar6 & 1) * 4) = *param_3;
            *(float *)((longlong)&local_188 + (ulonglong)(uVar8 & 1) * 4) = fVar15 - fVar1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = local_188;
            *(undefined4 *)((longlong)&local_180 + (ulonglong)(uVar6 & 1) * 4) = uVar3;
            *(float *)((longlong)&local_180 + (ulonglong)(uVar8 & 1) * 4) = param_4;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = local_180;
            local_148 = divps(auVar16,auVar17);
            uVar10 = -(uint)(*(float *)(local_148 + (ulonglong)(uVar8 & 3) * 4) < local_1bc);
            iVar11 = -(uint)(1.0 < local_148._0_4_);
            iVar13 = -(uint)(1.0 < local_148._4_4_);
            uVar12 = -(uint)(*(float *)(local_148 + (ulonglong)(uVar6 & 3) * 4) < local_1bc);
            auVar4._4_4_ = iVar11;
            auVar4._0_4_ = iVar11;
            auVar4._8_4_ = iVar13;
            auVar4._12_4_ = iVar13;
            uVar7 = movmskpd(uVar6 & 3,auVar4);
            local_11c = local_190;
            if ((uVar7 >> (uVar8 & 0x1f) & 1) == 0) {
              local_11c = (float)(~uVar10 & (uint)*(float *)(local_148 + (ulonglong)(uVar8 & 3) * 4) |
                                 (uint)local_1bc & uVar10);
            }
            fVar15 = local_190;
            if ((uVar7 >> (uVar6 & 0x1f) & 1) == 0) {
              fVar15 = (float)(~uVar12 & (uint)*(float *)(local_148 + (ulonglong)(uVar6 & 3) * 4) |
                              (uint)local_1bc & uVar12);
            }
            fVar14 = fVar14 - fVar2;
            local_11c = local_11c * fVar14;
            if (local_11c <= param_5 * 26.0) {
              local_11c = param_5 * 26.0;
            }
            local_124 = (fVar14 - local_11c) * fVar15 + fVar2;
            local_118 = 0x3f800000;
            uStack_114 = 0x3f800000;
            uStack_110 = 0x3f800000;
            fStack_10c = param_6 * 0.22;
            local_120 = *local_160;
            local_11c = local_11c + local_124;
            local_128 = local_100;
            FUN_180172640(&local_128,&local_118);
            local_1b0 = 0xbe801ee122c11752;
            local_1b8 = 0x9da660c01e4d7640;
          }
        }
        if (uVar5 != 0xf4edc32f151345e9) break;
        local_190 = 1.0;
        local_194 = 0x3f000000;
        local_1bc = 0.0;
        local_1a0 = 1;
        local_1a8 = 0;
        local_178 = param_3 + 2;
        local_1b0 = 0x5c4188b28c9317ea;
        if ((float)param_3[2] <= 0.5) {
          local_1b0 = 0x72f270bc846a7;
        }
        if (param_4 <= 0.0) {
          local_1b0 = 0x72f270bc846a7;
        }
        local_1b8 = 0xf898bd4932a54c4c;
      }
      if (uVar5 != 0x23267e213c8c6112) break;
      local_1b0 = 0x3a307e49e55352b5;
      local_1b8 = 0xc2afec27dc3e585e;
    }
  } while (uVar5 != 0xf89f926e396d0aeb);
  if (DAT_1802a0400 == (local_f0 ^ (ulonglong)auStack_1e8)) {
    return;
  }
}



float FUN_1800d8fe0(undefined4 *param_1,longlong param_2,longlong param_3,float *param_4,float param_5)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 in_stack_fffffffffffffc78;
  uint7 uVar32;
  undefined8 uVar31;
  float local_378 [4];
  float local_368 [4];
  float local_358 [4];
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338 [4];
  float local_328 [4];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [24];
  undefined4 *local_2b0;
  float *local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  undefined4 *local_278;
  longlong local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248 [6];
  undefined4 *local_230;
  float local_228;
  float local_224;
  undefined4 *local_220;
  float *local_218;
  longlong local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined4 local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  float local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  int local_168;
  uint uStack_164;
  undefined4 local_158;
  float local_154;
  ulonglong local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  float local_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint local_114;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  uint local_f4;
  undefined8 local_f0;

  fVar23 = param_5;
  local_f0 = 0xfffffffffffffffe;
  local_158 = 0x3f800000;
  local_1f0 = 0x3e0f5c29;
  local_154 = 0.5;
  local_1ec = 5.0;
  local_1e8 = 0x3f400000;
  local_1e4 = 0x3d4ccccd;
  local_f4 = 0;
  local_1e0 = 0xc;
  local_150 = 0xfff;
  local_100 = 1;
  local_148 = 0x28;
  local_110 = 0xf;
  local_140 = 0x20;
  local_138 = -8;
  local_108 = 0;
  local_114 = 1;
  lVar9 = FUN_1800eb430();
  local_1dc = (float)FUN_180173310(fVar23 * 12.5);
  uVar22 = uStack_1b4;
  uVar8 = uStack_1b8;
  local_1dc = fVar23 * 16.0 + local_1dc;
  local_12c = fVar23 * 12.0;
  local_2b0 = &param_5;
  local_2a8 = &local_12c;
  local_2a0 = lVar9;
  fVar25 = fVar23 * 24.0 + *param_4;
  local_218 = param_4;
  fVar27 = param_4[3];
  if (local_1dc <= fVar23 * 30.0) {
    local_1dc = fVar23 * 30.0;
  }
  lVar10 = *(longlong *)(param_2 + 0x90);
  uStack_1b8 = (undefined4)param_2;
  uVar5 = uStack_1b8;
  uStack_1b4 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = uStack_1b4;
  uStack_1b8 = uVar8;
  uStack_1b4 = uVar22;
  if (*(longlong *)(param_2 + 0x98) != lVar10) {
    fVar28 = fVar23 * 17.0;
    fVar29 = fVar23 * 16.0;
    local_210 = param_2 + 0xa8;
    local_230 = param_1 + 0x5e;
    local_270 = lVar9;
    local_290 = lVar9 + 0x80;
    local_224 = local_154 * fVar28;
    local_220 = param_1 + 0x32;
    local_288 = param_2 + 200;
    local_348 = fVar29;
    fStack_344 = fVar29;
    fStack_340 = fVar29;
    fStack_33c = fVar29;
    local_228 = fVar28 * 0.5;
    local_280 = param_3;
    local_278 = param_1;
    uVar16 = local_108;
    fVar26 = fVar27;
    do {
      fVar27 = local_1dc + fVar26;
      uVar18 = (uint)local_100;
      local_248[(ulonglong)((uint)local_108 & 1) + 2] = fVar26;
      local_248[(ulonglong)(uVar18 & 1) + 2] = fVar27;
      local_338[0] = param_5 * 4.0 + (float)local_248._8_8_;
      local_338[1] = param_5 * -4.0 + SUB84(local_248._8_8_,4);
      local_338[2] = param_5 * 0.0 + 0.0;
      local_338[3] = param_5 * 0.0 + 0.0;
      fVar23 = local_338[(uint)local_100 & 3];
      fVar26 = local_338[(uint)local_108 & 3];
      fVar21 = (fVar26 + fVar23) * local_154;
      fVar24 = local_218[2];
      local_328[0] = -fVar28;
      local_328[1] = -fVar28;
      local_328[2] = -fVar28;
      local_328[3] = -fVar28;
      local_328[(uint)local_100 & 3] = param_5;
      uVar18 = (uint)local_100;
      local_248[(uint)local_108 & 1] = fVar21;
      local_248[uVar18 & 1] = fVar24;
      fStack_124 = local_328[0] * 0.5 + (float)local_248._0_8_;
      fStack_120 = local_328[1] * -14.0 + SUB84(local_248._0_8_,4);
      local_378[0] = fStack_124;
      local_378[1] = fStack_120;
      local_378[2] = local_328[2] * 0.0 + 0.0;
      local_378[3] = local_328[3] * 0.0 + 0.0;
      local_128 = local_378[(uint)local_100 & 3] - fVar28;
      fStack_11c = local_228 + fVar21;
      fStack_250 = param_5 * -7.0 + local_128;
      fStack_200 = ((fStack_250 - fVar25) - fVar29) * local_154 + fVar25;
      local_258 = fStack_200 + fVar29;
      puVar13 = (undefined4 *)(uVar16 * 0x40 + lVar10);
      iVar15 = (int)uVar16;
      uVar32 = (uint7)((ulonglong)in_stack_fffffffffffffc78 >> 8);
      fStack_254 = fVar26;
      fStack_24c = fVar23;
      local_208 = fVar25;
      fStack_204 = fVar26;
      fStack_1fc = fVar23;
      if ((*(longlong *)(param_1 + 0x5a) == param_2) && (param_1[0x5c] == iVar15)) {
        if (param_1[0x5d] == local_f4) {
          lVar9 = CONCAT71(uVar32,1);
          puVar14 = local_230;
          goto LAB_1800d95e6;
        }
        bVar17 = param_1[0x5d] == local_114;
        puVar14 = puVar13 + 8;
        if (bVar17) {
          puVar14 = local_230;
        }
        lVar9 = (ulonglong)uVar32 << 8;
        FUN_1800e0d80(&local_2b0,&local_208,puVar13,local_210,lVar9);
        param_1 = local_278;
      }
      else {
        lVar9 = (ulonglong)uVar32 << 8;
        puVar14 = puVar13;
LAB_1800d95e6:
        FUN_1800e0d80(&local_2b0,&local_208,puVar14,local_210,lVar9);
        puVar14 = puVar13 + 8;
        bVar17 = false;
      }
      uVar31 = CONCAT71((int7)((ulonglong)lVar9 >> 8),bVar17);
      FUN_1800e0d80(&local_2b0,&local_258,puVar14,local_288,uVar31);
      fVar24 = local_12c;
      fVar26 = fStack_1fc;
      fVar23 = fStack_200;
      uVar8 = (undefined4)((ulonglong)uVar31 >> 0x20);
      auVar2._4_4_ = fStack_204;
      auVar2._0_4_ = local_208;
      auVar2._8_4_ = fStack_200;
      auVar2._12_4_ = fStack_1fc;
      uVar18 = FUN_180173310();
      local_318 = CONCAT44(fStack_344,local_348);
      uStack_310 = CONCAT44(fStack_33c,fStack_340);
      *(uint *)((longlong)&local_318 + (ulonglong)((uint)local_100 & 3) * 4) = uVar18 ^ 0x80000000;
      local_308._8_4_ = fVar23;
      local_308._0_8_ = auVar2._8_8_;
      local_308._12_4_ = fVar26;
      *(float *)(local_308 + (ulonglong)((uint)local_100 & 3) * 4) = fVar21;
      local_268 = CONCAT44(local_318._4_4_ * 0.5 + (float)local_308._4_4_,
                           (float)local_318 * 0.5 + (float)local_308._0_4_);
      uStack_1d0 = 0;
      local_1c8 = 2;
      uStack_1c0 = (undefined4)local_110;
      uStack_1bc = (undefined4)(local_110 >> 0x20);
      local_1d8 = 0x3e2d;
      uVar31 = CONCAT44(uVar8,local_f4);
      FUN_180173000(&local_1d8,&local_268,local_290,fVar24,uVar31,local_114);
      param_3 = local_280;
      uVar8 = (undefined4)((ulonglong)uVar31 >> 0x20);
      uVar12 = CONCAT44(uStack_1bc,uStack_1c0);
      if (local_110 < uVar12) {
        uVar11 = local_100 + uVar12;
        lVar9 = local_1d8;
        if (local_150 < uVar11) {
          lVar9 = *(longlong *)(local_1d8 + -8);
          if (local_140 <= (ulonglong)((local_1d8 + local_138) - lVar9)) goto LAB_1800da29d;
          uVar11 = uVar12 + local_148;
        }
        thunk_FUN_1801f42e0(lVar9,uVar11);
      }
      uVar22 = local_1e8;
      uVar20 = local_1f0;
      if ((((local_128 <= (float)param_1[0x85]) && ((float)param_1[0x85] <= fStack_120)) &&
          (fStack_124 <= (float)param_1[0x86])) && ((float)param_1[0x86] <= fStack_11c)) {
        uVar22 = local_158;
        uVar20 = 0x3e99999a;
      }
      local_1d8 = 0x3eb4b4b53f60e0e1;
      uStack_1d0 = CONCAT44(uVar20,0x3eb4b4b5);
      FUN_180172640(&local_128,&local_1d8,local_224);
      fVar7 = fStack_11c;
      fVar21 = fStack_120;
      fVar24 = fStack_124;
      fVar26 = local_128;
      fVar23 = local_12c;
      local_268 = 0x3f34b4b53f800000;
      local_260 = 0x3f34b4b5;
      auVar3._4_4_ = fStack_124;
      auVar3._0_4_ = local_128;
      auVar3._8_4_ = fStack_120;
      auVar3._12_4_ = fStack_11c;
      uVar31 = CONCAT44(fStack_124,local_128);
      fVar30 = fStack_11c - fStack_124;
      local_25c = uVar22;
      uVar19 = FUN_180173310();
      local_2e8._8_4_ = fVar21;
      local_2e8._0_8_ = auVar3._8_8_;
      local_2e8._12_4_ = fVar7;
      *(float *)(local_2e8 + (ulonglong)((uint)local_100 & 3) * 4) = fVar30;
      uVar22 = local_2e8._0_4_;
      uVar20 = local_2e8._4_4_;
      uStack_2f0 = 0;
      local_2f8 = uVar31;
      *(undefined4 *)((longlong)&local_2f8 + (ulonglong)((uint)local_100 & 3) * 4) = uVar19;
      local_298 = CONCAT44(((float)uVar20 - local_2f8._4_4_) * 0.5 + fVar24,
                           ((float)uVar22 - (float)local_2f8) * 0.5 + fVar26);
      uStack_1d0 = 0;
      local_1c8 = local_100;
      uStack_1c0 = (undefined4)local_110;
      uStack_1bc = (undefined4)(local_110 >> 0x20);
      local_1d8 = 0x78;
      in_stack_fffffffffffffc78 = CONCAT44(uVar8,2);
      FUN_180173000(&local_1d8,&local_298,&local_268,fVar23,in_stack_fffffffffffffc78,local_114);
      uVar12 = CONCAT44(uStack_1bc,uStack_1c0);
      if (local_110 < uVar12) {
        uVar11 = local_100 + uVar12;
        lVar9 = local_1d8;
        if (local_150 < uVar11) {
          lVar9 = *(longlong *)(local_1d8 + -8);
          if (local_140 <= (ulonglong)((local_1d8 + local_138) - lVar9)) goto LAB_1800da29d;
          uVar11 = uVar12 + local_148;
        }
        thunk_FUN_1801f42e0(lVar9,uVar11);
      }
      local_1d8 = CONCAT44(fStack_204,local_208);
      uStack_1d0 = CONCAT44(fStack_1fc,fStack_200);
      local_1c8 = CONCAT44(local_1c8._4_4_,local_1e0);
      uStack_1c0 = (undefined4)param_3;
      uVar8 = uStack_1c0;
      uStack_1bc = (undefined4)((ulonglong)param_3 >> 0x20);
      uVar22 = uStack_1bc;
      uStack_1b0 = *param_1;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = local_110;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uStack_164 = local_f4;
      plVar1 = *(longlong **)(param_1 + 0x34);
      if (plVar1 == *(longlong **)(param_1 + 0x36)) {
        uStack_1b8 = uVar5;
        uStack_1b4 = uVar6;
        local_168 = iVar15;
        FUN_1800e67f0(local_220,plVar1,&local_1d8);
        if (local_110 < uStack_190) {
          uVar12 = local_100 + uStack_190;
          lVar9 = local_1a8;
          if (local_150 < uVar12) {
            lVar9 = *(longlong *)(local_1a8 + -8);
            if (local_140 <= (ulonglong)((local_1a8 + local_138) - lVar9)) goto LAB_1800da29d;
            uVar12 = uStack_190 + local_148;
          }
          thunk_FUN_1801f42e0(lVar9,uVar12);
        }
      }
      else {
        *(ulonglong *)((longlong)plVar1 + 0x1c) = CONCAT44(uVar5,uStack_1bc);
        *(ulonglong *)((longlong)plVar1 + 0x24) = CONCAT44(uStack_1b0,uVar6);
        plVar1[2] = local_1c8;
        plVar1[3] = param_3;
        *plVar1 = local_1d8;
        plVar1[1] = uStack_1d0;
        plVar1[8] = 0;
        plVar1[9] = 0;
        plVar1[6] = 0;
        plVar1[7] = 0;
        plVar1[8] = 0;
        plVar1[9] = local_110;
        plVar1[6] = 0;
        plVar1[7] = 0;
        plVar1[10] = 0;
        plVar1[0xb] = 0;
        plVar1[0xc] = 0;
        plVar1[0xd] = 0;
        plVar1[0xe] = CONCAT44(local_f4,iVar15);
        *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
      }
      local_1d8 = CONCAT44(fStack_254,local_258);
      uStack_1d0 = CONCAT44(fStack_24c,fStack_250);
      local_1c8 = CONCAT44(local_1c8._4_4_,local_1e0);
      uStack_1b0 = *param_1;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = local_110;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uStack_164 = local_114;
      plVar1 = *(longlong **)(param_1 + 0x34);
      if (plVar1 == *(longlong **)(param_1 + 0x36)) {
        uStack_1c0 = uVar8;
        uStack_1bc = uVar22;
        uStack_1b8 = uVar5;
        uStack_1b4 = uVar6;
        local_168 = iVar15;
        FUN_1800e67f0(local_220,plVar1,&local_1d8);
        if (local_110 < uStack_190) {
          uVar12 = local_100 + uStack_190;
          lVar9 = local_1a8;
          if (local_150 < uVar12) {
            lVar9 = *(longlong *)(local_1a8 + -8);
            if (local_140 <= (ulonglong)((local_1a8 + local_138) - lVar9)) goto LAB_1800da29d;
            uVar12 = uStack_190 + local_148;
          }
          thunk_FUN_1801f42e0(lVar9,uVar12);
        }
      }
      else {
        *(ulonglong *)((longlong)plVar1 + 0x1c) = CONCAT44(uVar5,uVar22);
        *(ulonglong *)((longlong)plVar1 + 0x24) = CONCAT44(uStack_1b0,uVar6);
        plVar1[2] = local_1c8;
        plVar1[3] = param_3;
        *plVar1 = local_1d8;
        plVar1[1] = uStack_1d0;
        plVar1[8] = 0;
        plVar1[9] = 0;
        plVar1[6] = 0;
        plVar1[7] = 0;
        plVar1[8] = 0;
        plVar1[9] = local_110;
        plVar1[6] = 0;
        plVar1[7] = 0;
        plVar1[10] = 0;
        plVar1[0xb] = 0;
        plVar1[0xc] = 0;
        plVar1[0xd] = 0;
        plVar1[0xe] = CONCAT44(local_114,iVar15);
        *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
      }
      local_1d8 = CONCAT44(fStack_124,local_128);
      uStack_1d0 = CONCAT44(fStack_11c,fStack_120);
      local_1c8 = CONCAT44(local_1c8._4_4_,0xd);
      uStack_1b0 = *param_1;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = local_110;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_168 = iVar15;
      uStack_164 = local_f4;
      plVar1 = *(longlong **)(param_1 + 0x34);
      if (plVar1 == *(longlong **)(param_1 + 0x36)) {
        uStack_1c0 = uVar8;
        uStack_1bc = uVar22;
        uStack_1b8 = uVar5;
        uStack_1b4 = uVar6;
        FUN_1800e67f0(local_220,plVar1,&local_1d8);
        if (local_110 < uStack_190) {
          uVar12 = local_100 + uStack_190;
          lVar9 = local_1a8;
          if (local_150 < uVar12) {
            lVar9 = *(longlong *)(local_1a8 + -8);
            if (local_140 <= (ulonglong)((local_1a8 + local_138) - lVar9)) goto LAB_1800da29d;
            uVar12 = uStack_190 + local_148;
          }
          thunk_FUN_1801f42e0(lVar9,uVar12);
        }
      }
      else {
        *(ulonglong *)((longlong)plVar1 + 0x1c) = CONCAT44(uVar5,uVar22);
        *(ulonglong *)((longlong)plVar1 + 0x24) = CONCAT44(uStack_1b0,uVar6);
        plVar1[2] = local_1c8;
        plVar1[3] = param_3;
        *plVar1 = CONCAT44(fStack_124,local_128);
        plVar1[1] = CONCAT44(fStack_11c,fStack_120);
        plVar1[8] = 0;
        plVar1[9] = 0;
        plVar1[6] = 0;
        plVar1[7] = 0;
        plVar1[8] = 0;
        plVar1[9] = local_110;
        plVar1[6] = 0;
        plVar1[7] = 0;
        plVar1[10] = 0;
        plVar1[0xb] = 0;
        plVar1[0xc] = 0;
        plVar1[0xd] = 0;
        plVar1[0xe] = CONCAT44(local_f4,iVar15);
        *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
        uStack_1c0 = uVar8;
        uStack_1bc = uVar22;
        uStack_1b8 = uVar5;
        uStack_1b4 = uVar6;
      }
      uVar16 = uVar16 + local_100;
      lVar10 = *(longlong *)(param_2 + 0x90);
      lVar9 = local_270;
      fVar23 = param_5;
      fVar26 = fVar27;
    } while (uVar16 < (ulonglong)(*(longlong *)(param_2 + 0x98) - lVar10 >> 6));
  }
  fVar26 = local_218[2];
  fVar29 = local_1dc + fVar27;
  fVar28 = fVar23 * -4.0 + fVar29;
  local_128 = fVar25;
  uVar18 = (uint)local_100;
  local_248[(ulonglong)((uint)local_108 & 1) + 4] = fVar27;
  local_248[(ulonglong)(uVar18 & 1) + 4] = fVar26;
  fStack_124 = fVar23 * 4.0 + (float)local_248._16_8_;
  fStack_120 = fVar23 * -14.0 + SUB84(local_248._16_8_,4);
  local_368[2] = fVar23 * 0.0 + 0.0;
  local_368[3] = fVar23 * 0.0 + 0.0;
  fStack_11c = fVar28;
  local_368[0] = fStack_124;
  local_368[1] = fStack_120;
  if (((float)param_1[0x85] < fVar25) || (local_368[(uint)local_100 & 3] < (float)param_1[0x85])) {
LAB_1800d9e5e:
    bVar17 = false;
    uVar8 = local_1e4;
  }
  else {
    local_358[0] = fStack_124;
    local_358[1] = fStack_120;
    local_358[2] = local_368[2];
    local_358[3] = local_368[3];
    if (((float)param_1[0x86] < local_358[(uint)local_108 & 3]) || (fVar28 < (float)param_1[0x86])) goto LAB_1800d9e5e;
    uVar8 = 0x3dcccccd;
    bVar17 = true;
  }
  local_1d8 = 0x3f8000003f800000;
  uStack_1d0 = CONCAT44(uVar8,local_158);
  FUN_180172640(&local_128,&local_1d8,fVar23 * local_1ec);
  uVar8 = 0x3d8f5c29;
  if (bVar17) {
    uVar8 = 0x3e23d70a;
  }
  local_1d8 = 0x3f8000003f800000;
  uStack_1d0 = CONCAT44(uVar8,local_158);
  FUN_1801728e0(&local_128,&local_1d8,param_5,local_1ec * param_5);
  fVar28 = fStack_11c;
  fVar26 = fStack_120;
  fVar25 = fStack_124;
  fVar23 = local_128;
  fVar27 = local_12c;
  lVar10 = 0x80;
  if (bVar17) {
    lVar10 = 0x70;
  }
  auVar4._4_4_ = fStack_124;
  auVar4._0_4_ = local_128;
  auVar4._8_4_ = fStack_120;
  auVar4._12_4_ = fStack_11c;
  uVar31 = CONCAT44(fStack_124,local_128);
  fVar24 = fStack_11c - fStack_124;
  uVar20 = FUN_180173310();
  local_2c8._8_4_ = fVar26;
  local_2c8._0_8_ = auVar4._8_8_;
  local_2c8._12_4_ = fVar28;
  *(float *)(local_2c8 + (ulonglong)((uint)local_100 & 3) * 4) = fVar24;
  uVar8 = local_2c8._0_4_;
  uVar22 = local_2c8._4_4_;
  uStack_2d0 = 0;
  local_2d8 = uVar31;
  *(undefined4 *)((longlong)&local_2d8 + (ulonglong)((uint)local_100 & 3) * 4) = uVar20;
  local_208 = ((float)uVar8 - (float)local_2d8) * 0.5 + fVar23;
  fStack_204 = ((float)uVar22 - local_2d8._4_4_) * 0.5 + fVar25;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 5;
  uStack_1c0 = (undefined4)local_110;
  uStack_1bc = (undefined4)(local_110 >> 0x20);
  uVar8 = 1;
  FUN_1800eb180(&DAT_1802a3c48,&DAT_180275f77,0x10,6,&DAT_1802a3c50);
  local_1d8 = CONCAT44(CONCAT31(local_1d8._5_3_,DAT_1802a3c4c),DAT_1802a3c48);
  FUN_180173000(&local_1d8,&local_208,lVar9 + lVar10,fVar27,CONCAT44(uVar8,local_114),local_114);
  uVar16 = CONCAT44(uStack_1bc,uStack_1c0);
  if (local_110 < uVar16) {
    uVar12 = local_100 + uVar16;
    lVar9 = local_1d8;
    if (local_150 < uVar12) {
      lVar9 = *(longlong *)(local_1d8 + -8);
      if (local_140 <= (ulonglong)((local_1d8 + local_138) - lVar9)) goto LAB_1800da29d;
      uVar12 = uVar16 + local_148;
    }
    thunk_FUN_1801f42e0(lVar9,uVar12);
  }
  local_1d8 = CONCAT44(fStack_124,local_128);
  uStack_1d0 = CONCAT44(fStack_11c,fStack_120);
  local_1c8 = CONCAT44(local_1c8._4_4_,0xe);
  uStack_1c0 = (undefined4)param_3;
  uStack_1bc = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack_1b0 = *param_1;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = local_110;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_168 = -1;
  uStack_164 = local_f4;
  plVar1 = *(longlong **)(param_1 + 0x34);
  if (plVar1 == *(longlong **)(param_1 + 0x36)) {
    uStack_1b8 = uVar5;
    uStack_1b4 = uVar6;
    FUN_1800e67f0(param_1 + 0x32,plVar1,&local_1d8);
    if (local_110 < uStack_190) {
      uVar16 = local_100 + uStack_190;
      lVar9 = local_1a8;
      if (local_150 < uVar16) {
        lVar9 = *(longlong *)(local_1a8 + -8);
        if (local_140 <= (ulonglong)((local_1a8 + local_138) - lVar9)) {
LAB_1800da29d:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_108);
        }
        uVar16 = uStack_190 + local_148;
      }
      thunk_FUN_1801f42e0(lVar9,uVar16);
    }
  }
  else {
    *(ulonglong *)((longlong)plVar1 + 0x1c) = CONCAT44(uVar5,uStack_1bc);
    *(ulonglong *)((longlong)plVar1 + 0x24) = CONCAT44(uStack_1b0,uVar6);
    plVar1[2] = local_1c8;
    plVar1[3] = param_3;
    *plVar1 = local_1d8;
    plVar1[1] = uStack_1d0;
    plVar1[8] = 0;
    plVar1[9] = local_110;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[0xe] = CONCAT44(local_f4,0xffffffff);
    *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
  }
  return fVar29 - local_218[1];
}



void Unwind_1800da2c0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x1d0);
  return;
}



void Unwind_1800da3a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1d0);
  return;
}



void Unwind_1800da480(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x1d0);
  return;
}



void Unwind_1800da560(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x1d0);
  return;
}



void Unwind_1800da640(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x1d0);
  return;
}



void Unwind_1800da720(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1d0);
  return;
}



void Unwind_1800da800(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1d0);
  return;
}



void FUN_1800da8e0(undefined4 *param_1,longlong param_2,undefined8 *param_3,float param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [12];
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 in_stack_fffffffffffffd38;
  undefined4 uVar19;
  undefined8 uVar18;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278 [4];
  float local_268 [4];
  float local_258 [4];
  float local_248 [4];
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  undefined8 local_228;
  float local_220 [2];
  ulonglong local_218;
  longlong local_210;
  ulonglong local_208;
  longlong local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  uint uStack_174;
  ulonglong local_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  longlong local_108;
  uintptr_t local_100;
  uint local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;

  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
  local_e0 = 0xfffffffffffffffe;
  local_e8 = 1.0;
  local_120 = 240.0;
  local_f0 = 360.0;
  local_150 = 0.5;
  local_11c = 0x40000000;
  local_e4 = 0.0;
  local_118 = 300.0;
  local_114 = 180.0;
  local_ec = 60.0;
  local_110 = -1.0;
  local_10c = 120.0;
  local_f4 = 0;
  local_218 = 0xfff;
  local_14c = 0xffffffff;
  local_108 = 1;
  local_210 = 0x28;
  local_168 = 0xf;
  local_208 = 0x20;
  local_200 = -8;
  local_228 = 3;
  local_100 = 0;
  fStack_1f4 = param_4 * 4.0 + *(float *)((longlong)param_3 + 0xc);
  local_298 = *param_3;
  fStack_158 = *(float *)(param_3 + 1) - param_4 * 14.0;
  fStack_1ec = param_4 * 96.0 + fStack_1f4;
  fStack_1f0 = fStack_158;
  local_298._4_4_ = fStack_1ec;
  local_298._0_4_ = (float)local_298;
  local_298._4_4_ = SUB84(local_298,4);
  local_160 = param_4 * 14.0 + (float)local_298;
  fStack_144 = param_4 * 6.0 + local_298._4_4_;
  local_1f8 = local_160;
  fStack_13c = fStack_144 + param_4 * 12.0;
  local_148 = local_160;
  fStack_140 = fStack_158;
  fStack_15c = fStack_13c + param_4 * 6.0;
  fStack_154 = param_4 * 12.0 + fStack_15c;
  *(ulonglong *)(param_1 + 0x6d) = CONCAT44(fStack_1f4,local_160);
  *(ulonglong *)(param_1 + 0x6f) = CONCAT44(fStack_1ec,fStack_158);
  *(ulonglong *)(param_1 + 0x71) = CONCAT44(fStack_144,local_160);
  *(ulonglong *)(param_1 + 0x73) = CONCAT44(fStack_13c,fStack_158);
  *(ulonglong *)(param_1 + 0x75) = CONCAT44(fStack_15c,local_160);
  *(ulonglong *)(param_1 + 0x77) = CONCAT44(fStack_154,fStack_158);
  fVar11 = (float)FUN_1801ebe20();
  fVar11 = (float)((uint)(local_f0 + fVar11) & -(uint)(fVar11 < local_e4) | ~-(uint)(fVar11 < local_e4) & (uint)fVar11);
  fVar12 = (float)FUN_1801ebe20(fVar11 / local_ec);
  fVar13 = local_e8 - ABS(fVar12 + local_110);
  fVar17 = fVar13;
  fVar14 = local_e4;
  fVar12 = local_e8;
  if ((((local_ec <= fVar11) && (fVar17 = local_e8, fVar14 = local_e4, fVar12 = fVar13, local_10c <= fVar11)) &&
      (fVar17 = local_e8, fVar14 = fVar13, fVar12 = local_e4, local_114 <= fVar11)) &&
     ((fVar17 = fVar13, fVar14 = local_e8, local_120 <= fVar11 &&
      (fVar12 = (float)(~-(uint)(fVar11 < local_118) & (uint)local_e8 | -(uint)(fVar11 < local_118) & (uint)fVar13),
      fVar17 = local_e4, local_118 <= fVar11)))) {
    fVar14 = fVar13;
  }
  local_1e8 = CONCAT44(fVar17,fVar12);
  uStack_1e0 = CONCAT44(local_e8,fVar14);
  FUN_180172640(&local_1f8,&local_1e8);
  local_1e8 = 0x3f8000003f800000;
  uStack_1e0 = 0x3f800000;
  local_138 = 0x3f8000003f800000;
  uStack_130 = 0x3f8000003f800000;
  uVar18 = CONCAT44(uVar19,param_4 * 5.0);
  FUN_180172a80(&local_1f8,&local_138,&local_1e8,0,uVar18);
  local_1e8 = 0;
  uStack_1e0 = 0x3f80000000000000;
  local_138 = 0;
  uStack_130 = 0;
  uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),param_4 * 5.0);
  FUN_180172a80(&local_1f8,&local_138,&local_1e8,1,uVar18);
  local_1e8 = 0x3f8000003f800000;
  uStack_1e0 = 0x3e19999a3f800000;
  FUN_1801728e0(&local_1f8,&local_1e8);
  fVar17 = param_4 * 4.0;
  local_1e8 = 0x3f8000003f800000;
  uStack_1e0 = 0x3f7333333f800000;
  local_288 = *(undefined8 *)(param_1 + 0x6a);
  uStack_280 = 0;
  fVar11 = *(float *)((longlong)&local_288 + (ulonglong)((uint)local_100 & 3) * 4);
  uVar8 = -(uint)(fVar11 < local_e4);
  uVar5 = (uint)local_108;
  fVar12 = *(float *)((longlong)&local_288 + (ulonglong)(uVar5 & 3) * 4);
  uVar9 = -(uint)(1.0 < (float)local_288);
  uVar10 = -(uint)(fVar12 < local_e4);
  fVar12 = local_e8 - (float)(~uVar10 & (uint)fVar12 | (uint)local_e4 & uVar10);
  local_220[(uint)local_100 & 1] = (float)(~uVar8 & (uint)fVar11 | (uint)local_e4 & uVar8);
  local_220[uVar5 & 1] = fVar12;
  fVar11 = (fStack_1f0 - local_1f8) * (float)(~uVar9 & local_220[0] | uVar9 & 0x3f800000) + local_1f8;
  fVar12 = (fStack_1ec - fStack_1f4) * (float)(~-(uint)(1.0 < (float)((ulonglong)local_288 >> 0x20)) & local_220[1]) +
           fStack_1f4;
  auVar15._4_4_ = fVar17;
  auVar15._0_4_ = fVar17;
  auVar15._8_4_ = fVar17;
  auVar15._12_4_ = fVar17;
  local_138._0_4_ = fVar11 - fVar17;
  local_138._4_4_ = fVar12 - fVar17;
  auVar3._4_8_ = auVar15._8_8_;
  auVar3._0_4_ = fVar17 + fStack_1f4;
  auVar16._0_8_ = auVar3._0_8_ << 0x20;
  auVar16._8_4_ = fVar17 + fVar11;
  auVar16._12_4_ = fVar17 + fVar12;
  uStack_130 = auVar16._8_8_;
  FUN_1801728e0(&local_138,&local_1e8);
  fVar11 = (fStack_140 - local_148) / 6.0;
  uVar5 = local_f4;
  do {
    uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
    fVar12 = (float)(int)uVar5;
    uVar5 = uVar5 + 1;
    local_1e8 = CONCAT44(fStack_144,fVar11 * fVar12 + local_148);
    uStack_1e0 = CONCAT44(fStack_13c,fVar11 * (float)(int)uVar5 + local_148);
    fVar12 = (float)FUN_1801ebe20((float)(int)uVar5 * local_ec);
    fVar12 = (float)((uint)(local_f0 + fVar12) & -(uint)(fVar12 < local_e4) | ~-(uint)(fVar12 < local_e4) & (uint)fVar12
                    );
    fVar17 = (float)FUN_1801ebe20(fVar12 / local_ec);
    fVar14 = local_e8 - ABS(fVar17 + local_110);
    fVar17 = local_e4;
    local_138._0_4_ = local_e8;
    local_138._4_4_ = fVar14;
    if (((local_ec <= fVar12) && (local_138._0_4_ = fVar14, local_138._4_4_ = local_e8, local_10c <= fVar12)) &&
       ((fVar17 = fVar14, local_138._0_4_ = local_e4, local_138._4_4_ = local_e8, local_114 <= fVar12 &&
        (fVar17 = local_e8, local_138._4_4_ = fVar14, local_120 <= fVar12)))) {
      if (local_118 <= fVar12) {
        fVar17 = fVar14;
      }
      local_138._0_4_ =
           (float)(~-(uint)(fVar12 < local_118) & (uint)local_e8 | (uint)fVar14 & -(uint)(fVar12 < local_118));
      local_138._4_4_ = local_e4;
    }
    uStack_130 = CONCAT44(local_e8,fVar17);
    fVar12 = (float)FUN_1801ebe20();
    fVar12 = (float)((uint)(local_f0 + fVar12) & -(uint)(fVar12 < local_e4) | ~-(uint)(fVar12 < local_e4) & (uint)fVar12
                    );
    fVar17 = (float)FUN_1801ebe20(fVar12 / local_ec);
    fVar17 = local_e8 - ABS(fVar17 + local_110);
    local_230 = local_e4;
    local_234 = fVar17;
    local_238 = local_e8;
    if ((((local_ec <= fVar12) && (local_234 = local_e8, local_238 = fVar17, local_10c <= fVar12)) &&
        (local_230 = fVar17, local_238 = local_e4, local_114 <= fVar12)) &&
       (local_230 = local_e8, local_234 = fVar17, local_238 = local_e4, local_120 <= fVar12)) {
      local_230 = local_e8;
      if (local_118 <= fVar12) {
        local_230 = fVar17;
      }
      local_234 = local_e4;
      local_238 = (float)(~-(uint)(fVar12 < local_118) & (uint)local_e8 | (uint)fVar17 & -(uint)(fVar12 < local_118));
    }
    local_22c = local_e8;
    uVar18 = CONCAT44(uVar19,local_e4);
    FUN_180172a80(&local_1e8,&local_238,&local_138,0,uVar18);
    uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
  } while (uVar5 != 6);
  local_1e8 = 0x3f8000003f800000;
  uStack_1e0 = 0x3e19999a3f800000;
  FUN_1801728e0(&local_148,&local_1e8);
  fVar11 = fStack_13c;
  local_268[0] = (fStack_140 - local_148) * ((float)param_1[0x69] / local_f0) + local_148;
  local_1e8 = 0x3f8000003f800000;
  uStack_1e0 = 0x3f7333333f800000;
  local_268[1] = local_268[0];
  local_268[2] = local_268[0];
  local_268[3] = local_268[0];
  local_268[(uint)local_108 & 3] = fStack_144;
  local_278[0] = local_268[0];
  local_278[1] = local_268[1];
  local_278[2] = local_268[2];
  local_278[3] = local_268[3];
  local_278[(uint)local_228 & 3] = fVar11;
  local_138._0_4_ = local_278[0] + param_4 * -1.5;
  local_138._4_4_ = local_278[1] + param_4 * -2.0;
  uStack_130._0_4_ = local_278[0] + param_4 * 1.5;
  uStack_130._4_4_ = local_278[3] + param_4 * 2.0;
  FUN_180172640(&local_138,&local_1e8);
  fVar11 = (float)param_1[0x6b];
  fVar14 = (float)param_1[0x6a] * fVar11;
  fVar12 = (float)FUN_1801ebe20();
  fVar12 = (float)((uint)(local_f0 + fVar12) & -(uint)(fVar12 < local_e4) | ~-(uint)(fVar12 < local_e4) & (uint)fVar12);
  fVar17 = (float)FUN_1801ebe20(fVar12 / local_ec);
  fVar17 = (local_e8 - ABS(fVar17 + local_110)) * fVar14;
  uStack_130._0_4_ = local_e4;
  local_138._0_4_ = fVar14;
  local_138._4_4_ = fVar17;
  if (((local_ec <= fVar12) && (local_138._0_4_ = fVar17, local_138._4_4_ = fVar14, local_10c <= fVar12)) &&
     ((uStack_130._0_4_ = fVar17, local_138._0_4_ = local_e4, local_114 <= fVar12 &&
      ((uStack_130._0_4_ = fVar14, local_138._4_4_ = fVar17, local_120 <= fVar12 &&
       (local_138._0_4_ =
             (float)(~-(uint)(fVar12 < local_118) & (uint)fVar14 | -(uint)(fVar12 < local_118) & (uint)fVar17),
       local_138._4_4_ = local_e4, local_118 <= fVar12)))))) {
    uStack_130._0_4_ = fVar17;
  }
  fVar11 = fVar11 - fVar14;
  local_138._0_4_ = (float)local_138 + fVar11;
  local_138._4_4_ = local_138._4_4_ + fVar11;
  uStack_130._0_4_ = fVar11 + (float)uStack_130;
  local_1e8 = CONCAT44(local_138._4_4_,(float)local_138);
  uStack_1e0 = CONCAT44(local_e8,(float)uStack_130);
  uStack_130._4_4_ = local_e4;
  FUN_180172a80(&local_160,&local_138,&local_1e8,0,CONCAT44(uVar19,(fStack_154 - fStack_15c) * local_150));
  local_1e8 = 0x3f8000003f800000;
  uStack_1e0 = 0x3e19999a3f800000;
  FUN_1801728e0(&local_160,&local_1e8);
  fVar12 = fStack_154;
  fVar11 = (float)param_1[0x6c];
  local_248[0] = (fStack_158 - local_160) *
                 (float)((uint)local_e8 & -(uint)(local_e8 < fVar11) |
                        ~-(uint)(local_e8 < fVar11) &
                        ((uint)local_e4 & -(uint)(fVar11 < local_e4) | ~-(uint)(fVar11 < local_e4) & (uint)fVar11)) +
                 local_160;
  local_1e8 = 0x3f8000003f800000;
  uStack_1e0 = 0x3f7333333f800000;
  local_248[1] = local_248[0];
  local_248[2] = local_248[0];
  local_248[3] = local_248[0];
  local_248[(uint)local_108 & 3] = fStack_15c;
  local_258[0] = local_248[0];
  local_258[1] = local_248[1];
  local_258[2] = local_248[2];
  local_258[3] = local_248[3];
  local_258[(uint)local_228 & 3] = fVar12;
  local_138 = CONCAT44(param_4 * -2.0 + local_258[1],param_4 * -1.5 + local_258[0]);
  uStack_130 = CONCAT44(param_4 * 2.0 + local_258[3],param_4 * 1.5 + local_258[0]);
  FUN_180172640(&local_138,&local_1e8);
  local_1e8 = CONCAT44(fStack_1f4,local_1f8);
  uStack_1e0 = CONCAT44(fStack_1ec,fStack_1f0);
  puVar1 = param_1 + 0x32;
  local_1d8 = 0xf;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = (undefined4)param_2;
  uVar19 = uStack_1c8;
  uStack_1c4 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = uStack_1c4;
  uStack_1c0 = *param_1;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = local_168;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_178 = local_14c;
  uStack_174 = local_f4;
  puVar2 = *(undefined8 **)(param_1 + 0x34);
  if (puVar2 == *(undefined8 **)(param_1 + 0x36)) {
    FUN_1800e67f0(puVar1,puVar2,&local_1e8);
    if (local_168 < uStack_1a0) {
      uVar7 = local_108 + uStack_1a0;
      lVar6 = local_1b8;
      if (local_218 < uVar7) {
        lVar6 = *(longlong *)(local_1b8 + -8);
        if (local_208 <= (ulonglong)((local_1b8 + local_200) - lVar6)) goto LAB_1800dbb4c;
        uVar7 = uStack_1a0 + local_210;
      }
      thunk_FUN_1801f42e0(lVar6,uVar7);
    }
  }
  else {
    *(longlong *)((longlong)puVar2 + 0x1c) = param_2 << 0x20;
    *(ulonglong *)((longlong)puVar2 + 0x24) = CONCAT44(uStack_1c0,uStack_1c4);
    puVar2[2] = CONCAT44(uStack_1d4,0xf);
    puVar2[3] = 0;
    *puVar2 = local_1e8;
    puVar2[1] = uStack_1e0;
    puVar2[8] = 0;
    puVar2[9] = local_168;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = CONCAT44(local_f4,local_14c);
    *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
  }
  local_1e8 = CONCAT44(fStack_144,local_148);
  uStack_1e0 = CONCAT44(fStack_13c,fStack_140);
  local_1d8 = 0x10;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c0 = *param_1;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = local_168;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_178 = local_14c;
  uStack_174 = local_f4;
  puVar2 = *(undefined8 **)(param_1 + 0x34);
  if (puVar2 == *(undefined8 **)(param_1 + 0x36)) {
    uStack_1c8 = uVar19;
    uStack_1c4 = uVar4;
    FUN_1800e67f0(puVar1,puVar2,&local_1e8);
    if (local_168 < uStack_1a0) {
      uVar7 = local_108 + uStack_1a0;
      lVar6 = local_1b8;
      if (local_218 < uVar7) {
        lVar6 = *(longlong *)(local_1b8 + -8);
        if (local_208 <= (ulonglong)((local_1b8 + local_200) - lVar6)) goto LAB_1800dbb4c;
        uVar7 = uStack_1a0 + local_210;
      }
      thunk_FUN_1801f42e0(lVar6,uVar7);
    }
  }
  else {
    *(longlong *)((longlong)puVar2 + 0x1c) = param_2 << 0x20;
    *(ulonglong *)((longlong)puVar2 + 0x24) = CONCAT44(uStack_1c0,uVar4);
    puVar2[2] = CONCAT44(uStack_1d4,0x10);
    puVar2[3] = 0;
    *puVar2 = local_1e8;
    puVar2[1] = uStack_1e0;
    puVar2[8] = 0;
    puVar2[9] = local_168;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = CONCAT44(local_f4,local_14c);
    *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
  }
  local_1e8 = CONCAT44(fStack_15c,local_160);
  uStack_1e0 = CONCAT44(fStack_154,fStack_158);
  local_1d8 = 0x11;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c0 = *param_1;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = local_168;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_178 = local_14c;
  uStack_174 = local_f4;
  puVar2 = *(undefined8 **)(param_1 + 0x34);
  if (puVar2 == *(undefined8 **)(param_1 + 0x36)) {
    uStack_1c8 = uVar19;
    uStack_1c4 = uVar4;
    FUN_1800e67f0(puVar1,puVar2,&local_1e8);
    if (local_168 < uStack_1a0) {
      uVar7 = local_108 + uStack_1a0;
      lVar6 = local_1b8;
      if (local_218 < uVar7) {
        lVar6 = *(longlong *)(local_1b8 + -8);
        if (local_208 <= (ulonglong)((local_1b8 + local_200) - lVar6)) {
LAB_1800dbb4c:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_100);
        }
        uVar7 = uStack_1a0 + local_210;
      }
      thunk_FUN_1801f42e0(lVar6,uVar7);
    }
  }
  else {
    *(longlong *)((longlong)puVar2 + 0x1c) = param_2 << 0x20;
    *(ulonglong *)((longlong)puVar2 + 0x24) = CONCAT44(uStack_1c0,uVar4);
    puVar2[2] = CONCAT44(uStack_1d4,0x11);
    puVar2[3] = 0;
    *puVar2 = local_1e8;
    puVar2[1] = uStack_1e0;
    puVar2[8] = 0;
    puVar2[9] = local_168;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = CONCAT44(local_f4,local_14c);
    *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
  }
  return;
}



void Unwind_1800dbb70(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x100);
  return;
}



void Unwind_1800dbc30(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x100);
  return;
}



void Unwind_1800dbcf0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x100);
  return;
}



char FUN_1800dbdb0(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4,undefined8 *param_5
                  )

{
  float fVar1;
  undefined1 auVar2 [16];
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  char local_151;
  ulonglong local_150;
  ulonglong local_148;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  undefined8 local_128;
  float *local_120;
  float *local_118;
  float local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  float *local_f8;
  float *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  ulonglong local_a0;

  local_a0 = DAT_1802a0400 ^ (ulonglong)auStack_188;
  local_148 = 0x830be2afef1678fd;
  local_150 = 0xb697728eed0fea57;
LAB_1800dbeb0:
  do {
    while( true ) {
      pfVar5 = local_118;
      pfVar4 = local_120;
      cVar3 = local_151;
      uVar8 = local_148 ^ 0xcd1a4cdcce4a608b;
      uVar9 = local_148 ^ local_150;
      local_150 = local_150 ^ 0xcd1a4cdcce4a608b;
      local_148 = uVar8;
      if ((longlong)uVar9 < 0x4adcf0a239b2bce2) break;
      if (uVar9 == 0x4adcf0a239b2bce2) {
        local_108 = *(float *)(param_1 + 0x218);
        local_12c = *(float *)(*param_2 + 4);
        local_148 = 0xf17d725e624b7d21;
        if (local_108 < local_12c) {
          local_148 = 0xb1a992ea43e2bb82;
        }
        local_150 = 0xcddc8d76b63fe9eb;
        local_104 = local_12c;
        local_f8 = (float *)(*param_2 + 4);
      }
      else if (uVar9 == 0x4b89ee9416a750b1) {
        local_148 = 0xb43057371843620f;
        local_150 = 0x88178d591d45bdc6;
        local_13c = local_10c;
        local_120 = local_f8;
        local_118 = local_f0;
        local_151 = '\x01';
        local_138 = local_134;
      }
      else if (uVar9 == 0x7c751f9cf5dd5269) {
        local_13c = *(float *)(*param_2 + 0xc) - local_12c;
        local_148 = 0x4f158a03a6b7506e;
        local_150 = 0x7332506da3b18fa7;
        local_120 = (float *)(*param_2 + 4);
LAB_1800dc05d:
        local_138 = local_130;
        local_151 = '\0';
        local_118 = (float *)(*param_2 + 0xc);
      }
    }
    if ((longlong)uVar9 < 0x3c27da6e0506dfc9) {
      if (uVar9 == 0x8e721adc98dc10f1) {
        local_12c = *(float *)(*param_2 + 4);
        local_148 = 0x773b9c65bf5e2bc5;
        local_150 = 0xb4e83f94a8379ac;
      }
      else if (uVar9 == 0x359c9021021992aa) {
        local_130 = 0x3e23d70a;
        local_134 = 0x3e8f5c29;
        local_128 = 1;
        local_148 = 0xe46d5709019cbbd3;
        if (*(float *)(param_1 + 0x214) < *(float *)*param_2 || *(float *)(*param_2 + 8) < *(float *)(param_1 + 0x214))
        {
          local_148 = 0x20c3bd77a0f217c0;
        }
        local_150 = 0xaeb1a7ab382e0731;
      }
      goto LAB_1800dbeb0;
    }
    if (uVar9 == 0x3ca1ff28d47494ca) {
      local_13c = *(float *)(*param_2 + 0xc) - local_104;
      local_148 = 0xb131435af2f234c7;
      if (local_108 <= *(float *)(*param_2 + 0xc)) {
        local_148 = 0xc69f77a0e153bbbf;
      }
      local_150 = 0x8d169934f7f4eb0e;
      local_120 = local_f8;
      local_10c = local_13c;
      local_f0 = (float *)(*param_2 + 0xc);
      goto LAB_1800dc05d;
    }
    if (uVar9 == 0x3c27da6e0506dfc9) {
      fVar11 = local_13c * 0.5;
      local_a8 = *(undefined4 *)(param_5 + 1);
      local_b0 = *param_5;
      local_a4 = local_138;
      local_100 = param_3;
      FUN_180172640(param_2,&local_b0,fVar11);
      uVar6 = local_100;
      local_a4 = local_134;
      if (cVar3 != '\0') {
        local_a4 = 0x3f0ccccd;
      }
      local_a8 = *(undefined4 *)(param_5 + 1);
      local_b0 = *param_5;
      FUN_1801728e0(param_2,&local_b0,param_4,fVar11);
      auVar2 = *param_2;
      fVar11 = *pfVar4;
      fVar1 = *pfVar5;
      uVar10 = FUN_180173310();
      uVar7 = (uint)local_128;
      local_e8._8_4_ = auVar2._8_4_;
      local_e8._0_8_ = auVar2._8_8_;
      local_e8._12_4_ = auVar2._12_4_;
      *(float *)(local_e8 + (ulonglong)(uVar7 & 3) * 4) = fVar1 - fVar11;
      local_d8 = auVar2;
      *(undefined4 *)(local_d8 + (ulonglong)(uVar7 & 3) * 4) = uVar10;
      local_c8._0_16_ = auVar2;
      *(float *)(local_c8 + (ulonglong)(uVar7 & 3) * 4) = fVar11;
      local_b0 = CONCAT44(((float)local_e8._4_4_ - (float)local_d8._4_4_) * 0.5 + (float)local_c8._4_4_,
                          ((float)local_e8._0_4_ - (float)local_d8._0_4_) * 0.5 + (float)local_c8._0_4_);
      local_160 = 1;
      local_168 = 2;
      FUN_180173000(uVar6,&local_b0,param_5,(float)param_4 * 12.0);
      if (DAT_1802a0400 == (local_a0 ^ (ulonglong)auStack_188)) {
        return cVar3;
      }
    }
  } while( true );
}



void FUN_1800dc360(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  char local_a1;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_8c;
  uint local_88;
  float local_84;
  float local_80;
  float local_7c;

  local_98 = 0x448141603a172557;
  local_a0 = 0xbce6588bd90673ca;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_98 ^ 0xacebbeebc2a4b12e;
            uVar2 = local_98 ^ local_a0;
            local_a0 = local_a0 ^ 0xacebbeebc2a4b12e;
            local_98 = uVar4;
            if (-0x18007d5122b94ed < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x287f57266c32db7c) {
              if (uVar2 == 0x8649cc6d4e6a6616) {
                local_98 = 0xba9ca4ef32bcd3b6;
                if (local_8c == 0) {
                  local_98 = 0x4a3bb27fdf4e8049;
                }
                local_a0 = 0x6d1c0c36a171f732;
              }
              else if (uVar2 == 0xbd5bbe677fddcf9a) {
                *(undefined8 *)(param_1 + 0x148) = 0;
                *(undefined4 *)(param_1 + 0x1a0) = 0;
                local_98 = 0x316ab7d45970c50;
                local_a0 = 0xfd695357a8436744;
              }
              else if (uVar2 == 0xc9835d6f4536b810) {
                local_98 = 0xfde3afd59951241f;
                if (local_8c - 3 < 2) {
                  local_98 = 0x10c8c4727a4781b8;
                }
                local_a0 = 0x2a63070c0a9c009b;
              }
            }
            else if (uVar2 == 0xd780a8d993cd2484) {
              local_98 = 0xa396d4573fd7b7cb;
              local_a0 = 0xebfeac45760252bd;
            }
            else if (uVar2 == 0xecf90d263ad33a97) {
              FUN_1800dc920(param_1,param_2 + 0xc,local_8c == local_88);
              local_98 = 0xbacad811d485913;
              local_a0 = 0xf5d355abf09c3207;
            }
            else if (uVar2 == 0xf86719ebe311569d) {
              local_7c = 3.0;
              local_80 = -3.0;
              local_84 = 0.0;
              local_88 = 1;
              local_98 = 0x4b277429b38245d3;
              if (*(char *)(param_1 + 0x210) != '\0') {
                local_98 = 0xc4b230a42d94051a;
              }
              local_a0 = 0xb5588c035e562ec7;
            }
          }
          if ((longlong)uVar2 < 0x471087f7bb223c6f) break;
          if (uVar2 == 0x471087f7bb223c6f) {
            local_98 = 0x4f6723b5770727c8;
            if (local_a1 != '\0') {
              local_98 = 0x5de1d6b9a000764b;
            }
            if (1 < local_8c) {
              local_98 = 0x4f6723b5770727c8;
            }
            local_a0 = 0xb118db9f9ad34cdc;
          }
          else if (uVar2 == 0x4868781249d5e576) {
            local_a1 = param_2[8];
            local_98 = 0xa345ee4f493a3075;
            local_a0 = 0xe45569b8f2180c1a;
          }
          else if (uVar2 == 0x71eabca773c22bdd) {
            *param_2 = 1;
            local_8c = *(uint *)(param_2 + 4);
            local_98 = 0x3fcd331f9b0440ed;
            local_a0 = 0x6b53b5219b4ddbd;
          }
        }
        if ((longlong)uVar2 < 0x3978084d82b09d50) break;
        if (uVar2 == 0x3978084d82b09d50) {
          local_98 = 0xd1a363fed4fd4e57;
          if ((int)local_8c < 3) {
            local_98 = 0x9e69f2fcdfa19051;
          }
          local_a0 = 0x18203e9191cbf647;
        }
        else if (uVar2 == 0x3aabc37e70db8123) {
          fVar6 = (float)FUN_180172570();
          fVar7 = (float)FUN_180173310(fVar6 * 12.5);
          fVar1 = *(float *)(param_2 + 0x14);
          fVar7 = fVar6 * 16.0 + fVar7;
          lVar3 = 0x130;
          if (*(uint *)(param_1 + 0xe0) == local_88) {
            lVar3 = 0x13c;
          }
          if (fVar7 <= fVar6 * 30.0) {
            fVar7 = fVar6 * 30.0;
          }
          fVar7 = (float)((uint)local_80 & -(uint)(local_7c < fVar1) |
                         ~-(uint)(local_7c < fVar1) &
                         ((uint)local_7c & -(uint)(fVar1 < local_80) | ~-(uint)(fVar1 < local_80) & (uint)-fVar1)) *
                  fVar7 + *(float *)(param_1 + 4 + lVar3);
          fVar1 = *(float *)(param_1 + 8 + lVar3);
          uVar5 = -(uint)(fVar1 < fVar7);
          *(uint *)(param_1 + 4 + lVar3) =
               uVar5 & (uint)fVar1 |
               ~uVar5 & ((uint)local_84 & -(uint)(fVar7 < local_84) | ~-(uint)(fVar7 < local_84) & (uint)fVar7);
          local_98 = 0x8d442d5ca87d1123;
          local_a0 = 0x733bd57645a97a37;
        }
      }
      if (uVar2 != 0x2727be497e3f777b) break;
      local_98 = 0x54eecb1dc26d5bf7;
      if (param_2[8] != '\0') {
        local_98 = 0xaea5f28d0692a802;
      }
      local_a0 = 0xe9b5757abdb0946d;
      local_a1 = '\x01';
    }
  } while (uVar2 != 0xfe7ff82aedd46b14);
  return;
}



void FUN_1800dc920(undefined4 *param_1,float *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined *puVar12;
  byte local_29a;
  undefined1 local_299;
  ulonglong local_298;
  ulonglong local_290;
  byte local_281;
  int local_280;
  byte local_27a;
  byte local_279;
  longlong local_278;
  int local_270;
  undefined4 local_26c;
  longlong local_268;
  undefined4 local_260;
  undefined4 local_25c;
  ulonglong local_258;
  undefined8 local_248;
  undefined4 local_240;
  int local_23c;
  uint local_238;
  float local_234;
  int local_230;
  int local_22c;
  byte local_228;
  float local_21c;
  longlong local_218 [2];
  longlong local_208;
  int *local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  undefined8 *local_190;
  longlong *local_188;
  undefined4 *local_180;
  int *local_178;
  longlong local_170;
  longlong local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [56];

  local_290 = 0x3fbf19b2b1c44682;
  local_298 = 0xda0c2dfb6986debe;
LAB_1800dca6a:
  uVar11 = local_290 ^ 0x94f51a68ffb29c7b;
  uVar5 = local_290 ^ local_298;
  local_298 = local_298 ^ 0x94f51a68ffb29c7b;
  local_290 = uVar11;
  if ((longlong)uVar5 < -0x826ea97bdc4f33c) {
    if ((longlong)uVar5 < -0x382ed7078285f302) {
      if ((longlong)uVar5 < -0x6876676204c72ae4) {
        if ((longlong)uVar5 < -0x7636e4520dd23ce0) {
          if ((longlong)uVar5 < -0x7bc35756f01bbf7c) {
            if (uVar5 != 0x822199f6190015d2) {
              if (uVar5 == 0x82368dc5acfae6fb) {
                *(undefined1 *)local_158 = local_299;
                local_290 = 0x3d361436af26d7da;
                local_298 = 0x5b739c0b30a2d285;
              }
              goto LAB_1800dca6a;
            }
            local_1d0 = *(longlong *)(local_278 + -0x58);
            local_290 = 0x650c6126f9575c44;
            if (local_1d0 == 0) {
              local_290 = 0xeb710881fb741fb9;
            }
            local_298 = 0x20e3d4ed1dd02ff0;
          }
          else {
            if (uVar5 == 0x843ca8a90fe44084) {
              local_290 = 0xbccd486315d49e40;
              if (local_280 < 0xb) {
                local_290 = 0x36e97d3810ebacb4;
              }
              local_298 = 0xa160e5a5ebd379a8;
              goto LAB_1800dca6a;
            }
            if (uVar5 != 0x882e502f3f6e3282) goto LAB_1800dca6a;
            local_290 = 0x65ce8fed5816598e;
            local_298 = 0xae5c5381beb269c7;
          }
        }
        else {
          if ((longlong)uVar5 < -0x74c5bf491cfd5b4f) {
            if (uVar5 == 0x89c91badf22dc320) {
              local_290 = 0x9ca45d47e6ab1322;
              if (local_280 < 0xf) {
                local_290 = 0x5a90c17d7f31fa57;
              }
              local_298 = 0xad49d4153d0af693;
            }
            else if (uVar5 == 0x8b160100b1725d07) {
              local_290 = 0x9873eaf76bca5370;
              if (local_280 < 8) {
                local_290 = 0xeb50cbe3a7509423;
              }
              local_298 = 0xd293c0ae39597b29;
            }
            goto LAB_1800dca6a;
          }
          if (uVar5 == 0x8b3a40b6e302a4b1) {
            param_1[0x38] = local_270;
            *(longlong *)(param_1 + 0x48) = local_268;
            if (local_258 < *(ulonglong *)(param_1 + 0x4a)) {
              puVar10 = *(undefined4 **)(param_1 + 0x44);
            }
            else {
              puVar10 = param_1 + 0x44;
            }
            *(undefined1 *)puVar10 = local_299;
            *(undefined1 *)(param_1 + 0x42) = local_299;
            *param_1 = *(undefined4 *)(local_278 + -0x50);
            param_1[0x4d] = local_25c;
            local_290 = 0x3848d1dc3f83dda7;
            local_298 = 0xf3da0db0d927edee;
          }
          else {
            if (uVar5 != 0x92e38dd88aa568eb) {
              if (uVar5 == 0x969c098deb982484) {
                local_290 = 0x89c1548cf9043c42;
                local_298 = 0x425388e01fa00c0b;
                local_29a = param_3 ^ 1;
              }
              goto LAB_1800dca6a;
            }
            puVar12 = &DAT_1802a3be0;
            if (*(longlong *)(param_1 + 0x3e) == local_268) {
              puVar12 = &DAT_1802a3bc8;
            }
            FUN_1800eb180(&DAT_1802a3bc8,&DAT_180275db2,0x1d,0x13,&DAT_1802a3bdc);
            FUN_1800eb180(&DAT_1802a3be0,&DAT_180275e01,0x1c,0x13,&DAT_1802a3bf4);
            FUN_180057290(local_b8,puVar12);
            FUN_180156680(local_b8,local_240);
            local_290 = 0xf6dac5ab4384a6fc;
            local_298 = 0x3d4819c7a52096b5;
          }
        }
      }
      else {
        if (-0x5a3181f90561fad7 < (longlong)uVar5) {
          if ((longlong)uVar5 < -0x4de68678c739f8e2) {
            if (uVar5 == 0xa5ce7e06fa9e052a) {
              local_290 = 0xcd4e87bbda841bb4;
              if (*(float *)(local_278 + -0x6c) < local_234) {
                local_290 = 0x167373f4a9506b1b;
              }
              local_298 = 0x390d3b5beb79532c;
            }
            else if (uVar5 == 0xafd36eacc9bc7c50) {
              local_278 = local_1b8;
              local_1f0 = local_1b8 + -0x78;
              local_290 = 0x86c9a5636cd04ed5;
              if (local_21c < *(float *)(local_1b8 + -0x78) || *(float *)(local_1b8 + -0x70) < local_21c) {
                local_290 = 0x36e179fcfa473b0e;
              }
              local_298 = 0x199f3153b86e0339;
            }
            goto LAB_1800dca6a;
          }
          if (uVar5 == 0xb219798738c6071e) {
            FUN_1800e9e00(param_1 + 2,local_218,local_1e8);
            bVar1 = *(byte *)(local_218[0] + 0x18);
            FUN_1800e9e00(param_1 + 2,local_218,local_1e8);
            *(byte *)(local_218[0] + 0x18) = bVar1 ^ local_281;
            local_290 = 0x56a0b309e2b00c80;
            local_298 = 0x9d326f6504143cc9;
          }
          else {
            if (uVar5 != 0xb5e0dfc5f91b12d3) {
              if (uVar5 == 0xc31ad58480241bf3) {
                local_1e0 = (longlong *)(local_1d0 + 0x90);
                local_168 = *(longlong *)(local_1d0 + 0x90);
                local_290 = 0xa064af37881e046;
                if (local_230 < (int)((ulonglong)(*(longlong *)(local_1d0 + 0x98) - local_168) >> (local_228 & 0x3f))) {
                  local_290 = 0x89f97e33bcfe604e;
                }
                local_298 = 0xc194969f9e25d00f;
                goto LAB_1800dca60;
              }
              goto LAB_1800dca6a;
            }
            cVar4 = FUN_180057820(local_248,local_278 + -0x48);
            uVar3 = local_26c;
            if (cVar4 == '\0') {
              uVar3 = local_260;
            }
            puVar12 = &DAT_1802a3c24;
            if (cVar4 != '\0') {
              puVar12 = &DAT_1802a3c18;
            }
            FUN_1800eb180(&DAT_1802a3c18,&DAT_180275eb6,0x19,7,&DAT_1802a3c20);
            FUN_1800eb180(&DAT_1802a3c24,&DAT_180275ef3,0x18,0x10,&DAT_1802a3c34);
            FUN_1800e0310(local_f8,puVar12,local_278 + -0x48);
            FUN_180156680(local_f8,uVar3);
            local_290 = 0x690a535762e1d343;
            local_298 = 0xa2988f3b8445e30a;
          }
          local_29a = 0;
          goto LAB_1800dca6a;
        }
        if ((longlong)uVar5 < -0x62abff11cae7c8c5) {
          if (uVar5 == 0x9789989dfb38d51c) {
            local_290 = 0x51a7d8a5aba7c93a;
            if (local_280 < 10) {
              local_290 = 0x8e85c9857f34e4c3;
            }
            local_298 = 0x4954e17d024ee83d;
          }
          else if (uVar5 == 0x9ad833e1806b27fc) {
            local_290 = 0x762eabc21503871a;
            if (local_280 == 0x11) {
              local_290 = 0x33e245ecafd74cc5;
            }
            local_298 = 0xfe00fbed2a6db598;
          }
          goto LAB_1800dca6a;
        }
        if (uVar5 == 0x9d5400ee3518373b) {
          local_290 = 0x3eab07040f35525c;
          if (local_280 < 4) {
            local_290 = 0x334a3f8c49cb4131;
          }
          local_298 = 0x58ef6fce0bb696d0;
          goto LAB_1800dca6a;
        }
        if (uVar5 == 0x9f569430d4be4dec) {
          local_290 = 0x5564036d02454178;
          if (local_234 < *(float *)(local_278 + -0x74)) {
            local_290 = 0xdfd435c4baf27c65;
          }
          local_298 = 0xf0aa7d6bf8db4452;
          goto LAB_1800dca6a;
        }
        if (uVar5 != 0xa2dd031f87d80597) goto LAB_1800dca6a;
        local_290 = 0x4a55dc4b20d3bd6d;
        if (*(longlong *)(local_278 + -0x60) == 0) {
          local_290 = 0x903870776db00a89;
        }
        local_298 = 0x5baaac1b8b143ac0;
      }
    }
    else if ((longlong)uVar5 < -0x1d6fd6d80e1c7d3a) {
      if ((longlong)uVar5 < -0x2f92b084b0f3031b) {
        if ((longlong)uVar5 < -0x346d2393195bcfb7) {
          if (uVar5 == 0xc7d128f87d7a0cfe) {
            local_188 = (longlong *)(param_1 + 0x3a);
            cVar4 = FUN_180057640(local_248);
            local_290 = 0x1b824b829d397f73;
            if (cVar4 != '\0') {
              local_290 = 0xfecedddb130c7b8a;
            }
            local_298 = 0x8961c65a179c1798;
            goto LAB_1800dca6a;
          }
          if (uVar5 != 0xc855da86ae1153f8) goto LAB_1800dca6a;
          FUN_1800dff40(local_1e0,local_218,(longlong)local_22c * 0x40 + local_1c0);
          local_290 = 0x2de573c68a3d8e1f;
          local_298 = 0xe677afaa6c99be56;
        }
        else {
          if (uVar5 == 0xcb92dc6ce6a43049) {
            local_279 = local_29a;
            local_158 = param_1 + 0x39;
            local_290 = 0xdfc55886a4737e5b;
            if (*(char *)(param_1 + 0x39) != '\0') {
              local_290 = 0x3bb65d7e970d9dff;
            }
            local_298 = 0xb980d0bb3bf77b04;
            goto LAB_1800dca6a;
          }
          if (uVar5 != 0xcde2be0185baf95d) goto LAB_1800dca6a;
          param_1[0x68] = local_260;
          FUN_1800d16d0(param_1,param_2);
          local_290 = 0xd9a57b82c2add0f6;
          local_298 = 0x1237a7ee2409e0bf;
        }
      }
      else {
        if (-0x25ee4f0bf3345735 < (longlong)uVar5) {
          if (uVar5 == 0xda11b0f40ccba8cc) {
            local_290 = 0x8d112dd091457895;
            if (param_3 != 0) {
              local_290 = 0xb7b319ee6eb9ef57;
            }
            local_298 = 0xb8b73b7df407238e;
          }
          else if (uVar5 == 0xda4c56f079b24425) {
            local_21c = *param_2;
            local_234 = param_2[1];
            local_290 = 0x6a0a68c6c9cdb60f;
            local_298 = 0xc5d9066a0071ca5f;
            local_1b8 = local_1b0;
          }
          else if (uVar5 == 0xe1aafa03af663f43) {
            FUN_1800c63c0(param_1);
            lVar7 = local_1d8;
            FUN_1800e0130(local_1d8 + 0x90);
            local_138 = 0;
            uStack_130 = 0;
            local_128 = 0;
            local_120 = local_258;
            FUN_1800dfcf0(param_1,local_1d8,
                          (int)((ulonglong)(*(longlong *)(local_1d8 + 0x98) - *(longlong *)(lVar7 + 0x90)) >>
                               (local_228 & 0x3f)) + local_23c,local_270,&local_138);
            local_290 = 0x72938e4dd2ae7436;
            local_298 = 0xb9015221340a447f;
            local_29a = 1;
          }
          goto LAB_1800dca6a;
        }
        if (uVar5 == 0xd06d4f7b4f0cfce5) {
          param_1[0x68] = local_26c;
          FUN_1800d16d0(param_1,param_2);
          local_290 = 0x1b20e8cfff97ae22;
          local_298 = 0xd0b234a319339e6b;
        }
        else {
          if (uVar5 != 0xd53ad3b9aff85fca) goto LAB_1800dca6a;
          local_1c8 = local_278 + -0x60;
          local_148 = *(longlong *)(local_278 + -0x60);
          local_290 = 0xf0938a584100e8d0;
          if (local_148 == 0) {
            local_290 = 0x3f33265b0a44606;
          }
          local_298 = 0xc861ee095600764f;
        }
      }
    }
    else if ((longlong)uVar5 < -0x1223894fdeecc55a) {
      if ((longlong)uVar5 < -0x1a4ccbb627bd67c4) {
        if (uVar5 == 0xe2902927f1e382c6) {
          local_290 = 0xcc6c5b52a0415604;
          if (local_280 < 0x11) {
            local_290 = 0x3cab09cde078dda2;
          }
          local_298 = 0x56b468b3202a71f8;
        }
        else if (uVar5 == 0xe34f9d5f05ccf7b4) {
          local_290 = 0x7d3d60dfb76fdb1d;
          if (local_280 < 3) {
            local_290 = 0xebfc097ed4fdc4f0;
          }
          local_298 = 0x60c649c837ff6041;
        }
        goto LAB_1800dca6a;
      }
      if (uVar5 != 0xe5b33449d842983c) {
        if (uVar5 == 0xed61dc5db508ac46) {
          *(undefined1 *)local_160 = local_299;
          local_290 = 0x598e7fac0ac09f3a;
          local_298 = 0x4bf1ea430dd3a38e;
        }
        else if (uVar5 == 0xeda503c45a1947bd) {
          *(undefined1 *)local_180 = local_299;
          local_290 = 0xa400fd96ec38b6df;
          local_298 = 0xb67f6879eb2b8a6b;
        }
        goto LAB_1800dca6a;
      }
      local_25c = 0;
      local_270 = 0;
      local_299 = 0;
      local_23c = -1;
      local_258 = 0xf;
      local_281 = 1;
      local_208 = 0x20;
      local_240 = 2;
      local_228 = 6;
      local_260 = 3;
      local_268 = 0;
      local_26c = 1;
      local_1b0 = *(longlong *)(param_1 + 0x34);
      local_1a8 = *(longlong *)(param_1 + 0x32);
      local_290 = 0xfa90493f4647c23b;
      if (local_1b0 == local_1a8) {
        local_290 = 0xeb4ec3a3d951b657;
      }
      local_298 = 0x20dc1fcf3ff5861e;
    }
    else {
      if ((longlong)uVar5 < -0xd8bd4ec3ff9271e) {
        if (uVar5 == 0xeddc76b021133aa6) {
          local_290 = 0x3921f1ba3da8456c;
          if (local_280 < 0xd) {
            local_290 = 0x34d442bec061c6c8;
          }
          local_298 = 0xb0e8ea17cf85864c;
        }
        else if (uVar5 == 0xf2085acc66340746) {
          local_290 = 0xfa036338bb12fd42;
          if (*(longlong *)(param_1 + 0x5a) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
            local_290 = 0xfc7d52c02b3aa138;
          }
          if (local_27a == 0) {
            local_290 = 0xfa036338bb12fd42;
          }
          local_298 = 0xd03d25ca7055ee4c;
        }
        goto LAB_1800dca6a;
      }
      if (uVar5 == 0xf2742b13c006d8e2) {
        local_1f8 = *(longlong *)(local_278 + -0x58);
        local_290 = 0x11e8d9e18eacbfd3;
        if (local_1f8 == 0) {
          local_290 = 0xcd047456b8865293;
        }
        local_298 = 0x696a83a5e2262da;
      }
      else {
        if (uVar5 == 0xf443bce031fd4898) {
          local_248 = FUN_18004e770();
          local_280 = *(int *)(local_278 + -0x68);
          local_290 = 0x9dd670ee59ce39f6;
          local_298 = 0xff9323174e7c0d2a;
          goto LAB_1800dca6a;
        }
        if (uVar5 != 0xf5e22039ad3ecaba) goto LAB_1800dca6a;
        *(longlong *)(param_1 + 0x48) = local_268;
        if (local_258 < *(ulonglong *)(param_1 + 0x4a)) {
          puVar10 = *(undefined4 **)(param_1 + 0x44);
        }
        else {
          puVar10 = param_1 + 0x44;
        }
        *(undefined1 *)puVar10 = local_299;
        param_1[0x4d] = local_25c;
        local_290 = 0x5951c243adbb5387;
        local_298 = 0x92c31e2f4b1f63ce;
      }
    }
  }
  else if ((longlong)uVar5 < 0x31ed8952dba1e5b1) {
    if ((longlong)uVar5 < 0x17194f7a8189764c) {
      if (0xe48bc7498f1239d < (longlong)uVar5) {
        if ((longlong)uVar5 < 0x11ff7050abc787ad) {
          if (uVar5 == 0xe48bc7498f1239e) {
            local_290 = 0xd2f82dd11a97753b;
            if (local_280 < 5) {
              local_290 = 0x24f1b33dca158bc5;
            }
            local_298 = 0xd8a07376ad9698e9;
          }
          else if (uVar5 == 0xf0422939abeccd9) {
            FUN_1800c63c0(param_1);
            lVar6 = (longlong)*local_200 * 0x40 + *local_1a0;
            lVar7 = local_268;
            if (*(int *)(local_278 + -4) != local_270) {
              lVar7 = local_208;
            }
            *(longlong *)(lVar7 + 0x10 + lVar6) = local_268;
            if (local_258 < *(ulonglong *)(lVar7 + 0x18 + lVar6)) {
              puVar9 = *(undefined1 **)(lVar7 + lVar6);
            }
            else {
              puVar9 = (undefined1 *)(lVar6 + lVar7);
            }
            *puVar9 = local_299;
            local_290 = 0x1c869531788e8267;
            local_298 = 0x8a1a9cbc9316a6e3;
          }
        }
        else if (uVar5 == 0x11ff7050abc787ad) {
          iVar2 = *(int *)(local_170 + 8);
          FUN_1800deaf0(param_1,local_1f0,param_2,param_3);
          local_29a = iVar2 == 6;
          local_290 = 0x84d79d65983441f8;
          local_298 = 0x4f4541097e9071b1;
        }
        else if (uVar5 == 0x127f95ef07133cb4) {
          FUN_1800c63c0(param_1);
          local_290 = 0x34eea561168d6079;
          local_298 = 0xc6e6ffad70b9673f;
          local_27a = ~(*(byte *)(param_1 + 0x42) | *(byte *)(param_1 + 0x39)) & 1;
        }
        else if (uVar5 == 0x134f99707434e0ba) {
          local_290 = 0xc6a44dd5abbacca8;
          if (local_280 < 1) {
            local_290 = 0x90daca49f12d7278;
          }
          local_298 = 0xb1d8ef943fb2eb1a;
        }
        goto LAB_1800dca6a;
      }
      if ((longlong)uVar5 < 0x51a889c2db5fffa) {
        if (uVar5 == 0xf7d91568423b0cc4) {
          local_290 = 0x5760b3a17246b019;
          if (local_280 < 0xe) {
            local_290 = 0xd05ba2cb46f35a31;
          }
          local_298 = 0x527a3b3d5ff34fe3;
          goto LAB_1800dca6a;
        }
        if (uVar5 != 0xfc51c04b6783132c) goto LAB_1800dca6a;
        param_1[0x38] = local_26c;
        param_1[0x50] = local_25c;
        local_290 = 0x2500e87c85604bdb;
        local_298 = 0xee92341063c47b92;
      }
      else if (uVar5 == 0x51a889c2db5fffa) {
        local_1d8 = *(longlong *)(local_278 + -0x58);
        local_290 = 0x86cc0ecc0b413e85;
        if (local_1d8 == 0) {
          local_290 = 0xacf428a34283318f;
        }
        local_298 = 0x6766f4cfa42701c6;
      }
      else {
        if (uVar5 != 0xa585ea7b701edd2) {
          if (uVar5 == 0xbeb0e12e9768655) {
            FUN_1800e9e00(param_1 + 2,local_218,local_1c8);
            bVar1 = *(byte *)(local_218[0] + 0x18);
            FUN_1800e9e00(param_1 + 2,local_218,local_1c8);
            *(byte *)(local_218[0] + 0x18) = bVar1 ^ local_281;
            local_290 = 0x81a43db71827a7a5;
            local_298 = 0x4a36e1dbfe8397ec;
            goto LAB_1800dca60;
          }
          goto LAB_1800dca6a;
        }
        cVar4 = FUN_180054580(local_248,local_278 + -0x48);
        uVar3 = local_26c;
        if (cVar4 == '\0') {
          uVar3 = local_260;
        }
        puVar12 = &DAT_1802a3c04;
        if (cVar4 != '\0') {
          puVar12 = &DAT_1802a3bf8;
        }
        FUN_1800eb180(&DAT_1802a3bf8,&DAT_180275e40,0x1a,8,&DAT_1802a3c00);
        FUN_1800eb180(&DAT_1802a3c04,&DAT_180275e7d,0x11,0x10,&DAT_1802a3c14);
        FUN_1800e0310(local_d8,puVar12,local_278 + -0x48);
        FUN_180156680(local_d8,uVar3);
        local_290 = 0x2d15d5e00b76cfb1;
        local_298 = 0xe687098cedd2fff8;
      }
    }
    else {
      if (0x210225ddce9f9961 < (longlong)uVar5) {
        if ((longlong)uVar5 < 0x2c40770a5b6f4f74) {
          if (uVar5 == 0x210225ddce9f9962) {
            local_290 = 0x7611f0ea8b7038bd;
            if (local_280 == 0) {
              local_290 = 0x2b05737c1be655f5;
            }
            local_298 = 0xfe3fa0c5b41e0a3f;
          }
          else {
            if (uVar5 == 0x2c23573c4196774f) {
              local_290 = 0xb553da6a19166745;
              if (local_279 != 0) {
                local_290 = 0x5524154978315cb7;
              }
              local_298 = 0xa72c4f851e055bf1;
              goto LAB_1800de090;
            }
            if (uVar5 == 0x2a3e46f2cb47130e) {
              return;
            }
          }
        }
        else if (uVar5 == 0x2c40770a5b6f4f74) {
          lVar7 = FUN_180100330();
          *(undefined1 *)(lVar7 + 0x358) = local_299;
          local_290 = 0x840ab74a44c3361a;
          local_298 = 0xae34f1b88f842514;
        }
        else if (uVar5 == 0x2f7e48af42293837) {
          local_1b8 = local_1f0;
          local_290 = 0x55a193c0f3a77175;
          if (local_1f0 == local_1a8) {
            local_290 = 0x31e02100dcbf3d6c;
          }
          local_298 = 0xfa72fd6c3a1b0d25;
          local_29a = 0;
        }
        goto LAB_1800dca6a;
      }
      if (0x18f339d8a9e92106 < (longlong)uVar5) {
        if (uVar5 == 0x18f339d8a9e92107) {
          param_1[0x38] = local_270;
          *(byte *)(param_1 + 0x42) = local_281;
          lVar7 = FUN_180100330();
          *(byte *)(lVar7 + 0x358) = local_281;
          local_160 = param_1 + 0x39;
          local_290 = 0x8435cd6da06f6d64;
          if (*(char *)(param_1 + 0x39) != '\0') {
            local_290 = 0x7b2b84df1274fd96;
          }
          local_298 = 0x964a5882a77c51d0;
        }
        else if (uVar5 == 0x1dadadc6fe07e7e8) {
          local_290 = 0x2adb747e2d990bda;
          if (local_280 < 0xc) {
            local_290 = 0x2d4d7f5440a11982;
          }
          local_298 = 0xd8af5f6ded9fd338;
        }
        else if (uVar5 == 0x1dfb29178090bb5c) {
          local_1e8 = local_278 + -0x60;
          local_290 = 0x8b635210018b7ee1;
          if (*(longlong *)(local_278 + -0x60) == 0) {
            local_290 = 0xf2e8f7fbdfe949b6;
          }
          local_298 = 0x397a2b97394d79ff;
          goto LAB_1800dca60;
        }
        goto LAB_1800dca6a;
      }
      if (uVar5 == 0x17194f7a8189764c) {
        *(undefined1 *)local_150 = local_299;
        local_290 = 0x5e6185685e41762b;
        if (local_279 != 0) {
          local_290 = 0xbe164a4b3f664dd9;
        }
        local_298 = 0x4c1e108759524a9f;
LAB_1800de090:
        local_27a = 1;
        goto LAB_1800dca6a;
      }
      if (uVar5 != 0x177e71dbd08edd09) goto LAB_1800dca6a;
      local_200 = (int *)(local_278 + -8);
      local_238 = *(uint *)(local_278 + -8);
      local_290 = 0xc054a3d5892f1067;
      if ((int)local_238 < local_270) {
        local_290 = 0x39f3edb30aa4281e;
      }
      local_298 = 0xf26131dfec001857;
    }
  }
  else if ((longlong)uVar5 < 0x4ae02a5952932859) {
    if ((longlong)uVar5 < 0x38f2645117009e9f) {
      if ((longlong)uVar5 < 0x32f01870ed32e118) {
        if (uVar5 == 0x31ed8952dba1e5b1) {
          local_290 = 0x5141f6f94341fee5;
          if (local_280 < 0x10) {
            local_290 = 0x63bc90a5fdae80c6;
          }
          local_298 = 0xb3d1dfdeb2a27c23;
        }
        else if (uVar5 == 0x3235920a652f0830) {
          local_1a0 = (longlong *)(local_1f8 + 0x90);
          local_198 = *(longlong *)(local_1f8 + 0x90);
          local_290 = 0xcae770e81e2c37c5;
          if ((int)local_238 < (int)((ulonglong)(*(longlong *)(local_1f8 + 0x98) - local_198) >> (local_228 & 0x3f))) {
            local_290 = 0xdb641c70f443af40;
          }
          local_298 = 0x175ac84f888078c;
          goto LAB_1800dca60;
        }
      }
      else if (uVar5 == 0x32f01870ed32e118) {
        local_290 = 0x2c4a7fe2befb5309;
        if (local_280 < 7) {
          local_290 = 0x12bca127f6921cdd;
        }
        local_298 = 0xa75c7ee20f890e0e;
      }
      else if (uVar5 == 0x35a616ad65425b1b) {
        lVar7 = local_268;
        if (*(int *)(local_278 + -4) != local_270) {
          lVar7 = local_208;
        }
        FUN_1800d4120(local_78,(ulonglong)local_238 * 0x40 + local_198 + lVar7);
        FUN_1800dfcf0(param_1,local_1f8,*local_200,*(undefined4 *)(local_278 + -4),local_78);
        local_290 = 0x549243a6d9d3cef2;
        local_298 = 0xc20e4a2b324bea76;
      }
      goto LAB_1800dca6a;
    }
    if ((longlong)uVar5 < 0x3d9d3b379c525eee) {
      if (uVar5 == 0x38f2645117009e9f) {
        local_290 = 0xf7fe91afabfb243;
        if (param_3 != 0) {
          local_290 = 0x7ba2f27f78b3d4be;
        }
        local_298 = 0x7049fc6d91c552eb;
        goto LAB_1800dca6a;
      }
      if (uVar5 != 0x39c30b4d9e09ef0a) goto LAB_1800dca6a;
      local_140 = local_278 + -0x48;
      cVar4 = FUN_180059ca0(local_248);
      local_290 = 0x266a97ece7cd9515;
      if (cVar4 != '\0') {
        local_290 = 0xd06570b79d3bfbb2;
      }
      local_298 = 0xedf84b800169a55c;
    }
    else if (uVar5 == 0x3d9d3b379c525eee) {
      FUN_1800eb180(&DAT_1802a3c38,&DAT_180275f37,0x1b,9,&DAT_1802a3c44);
      FUN_1800e0310(local_118,&DAT_1802a3c38,local_140);
      FUN_180156680(local_118,local_270);
      local_290 = 0xd19a952b5a330fe8;
      local_298 = 0x1a084947bc973fa1;
    }
    else {
      if (uVar5 != 0x45efb5cbe48773b4) {
        if (uVar5 == 0x486de8ac22dbb041) {
          local_190 = (undefined8 *)(param_1 + 0x5a);
          local_290 = 0xf67f7542e097c542;
          if (*(longlong *)(param_1 + 0x5a) == local_1d0) {
            local_290 = 0x4d47e7520fd1076e;
          }
          local_298 = 0x3e2aafc44e8696ba;
          local_22c = local_230;
          local_1c0 = local_168;
        }
        goto LAB_1800dca6a;
      }
      local_178 = (int *)(local_278 + -8);
      local_230 = *(int *)(local_278 + -8);
      local_290 = 0xa71a95c934a83cd4;
      if (local_230 < local_270) {
        local_290 = 0xaf929c215228176e;
      }
      local_298 = 0x6400404db48c2727;
    }
  }
  else if ((longlong)uVar5 < 0x6ba55042427dd7e1) {
    if ((longlong)uVar5 < 0x664468ca0483c48c) {
      if (uVar5 == 0x4ae02a5952932859) {
        *(byte *)(param_1 + 0x39) = local_281;
        lVar7 = FUN_180100330();
        *(byte *)(lVar7 + 0x358) = local_281;
        local_180 = param_1 + 0x42;
        local_290 = 0x97f41705ed3e4082;
        if (*(char *)(param_1 + 0x42) != '\0') {
          local_290 = 0x682e812eb0343b8b;
        }
        local_298 = 0x858b82eaea2d7c36;
      }
      else if (uVar5 == 0x624553f917b234dc) {
        local_290 = 0x4bf6405377b69280;
        if (local_280 < 9) {
          local_290 = 0x3b7e360d63bd9f1d;
        }
        local_298 = 0xa62a36e356a5a826;
      }
      goto LAB_1800dca6a;
    }
    if (uVar5 == 0x664468ca0483c48c) {
      local_290 = 0xccca72f4d95fe4b7;
      if (local_280 < 6) {
        local_290 = 0xf072d6f0ac9c2631;
      }
      local_298 = 0xfe3a6a84346d05af;
      goto LAB_1800dca6a;
    }
    if (uVar5 == 0x6645883d9f84055f) {
      local_150 = param_1 + 0x42;
      local_290 = 0x40414a5fd25b40c9;
      if (*(char *)(param_1 + 0x42) != '\0') {
        local_290 = 0x7b7b5219124441ca;
      }
      local_298 = 0x6c621d6393cd3786;
      goto LAB_1800dca6a;
    }
    if (uVar5 != 0x6a1f617ec052ac5a) goto LAB_1800dca6a;
    param_1[0x68] = local_240;
    FUN_1800d16d0(param_1,param_2);
    local_290 = 0xf5503d24d6522bd5;
    local_298 = 0x3ec2e14830f61b9c;
  }
  else {
    if ((longlong)uVar5 < 0x777ca241940827b2) {
      if (uVar5 == 0x6ba55042427dd7e1) {
        local_290 = 0x2054b877eb044ae6;
        if (local_280 < 2) {
          local_290 = 0xd054bc589afc5de8;
        }
        local_298 = 0xc31b2528eec8bd52;
      }
      else if (uVar5 == 0x736d4896415791d4) {
        *local_190 = 0;
        param_1[0x5c] = local_23c;
        *(longlong *)(param_1 + 0x62) = local_268;
        if (local_258 < *(ulonglong *)(param_1 + 100)) {
          puVar10 = *(undefined4 **)(param_1 + 0x5e);
        }
        else {
          puVar10 = param_1 + 0x5e;
        }
        *(undefined1 *)puVar10 = local_299;
        lVar7 = FUN_180100330();
        *(undefined1 *)(lVar7 + 0x358) = local_299;
        local_1c0 = *local_1e0;
        local_22c = *local_178;
        local_290 = 0xcce4daaeb9d50523;
        local_298 = 0x4b1002817c456db;
      }
      goto LAB_1800dca6a;
    }
    if (uVar5 == 0x777ca241940827b2) {
      local_170 = *(longlong *)(local_278 + -0x58);
      local_290 = 0x7181180210beec9;
      if (local_170 == 0) {
        local_290 = 0x6e57cef34077db17;
      }
      local_298 = 0xa5c5129fa6d3eb5e;
    }
    else if (uVar5 == 0x77af1b8104906c12) {
      FUN_1800eb180(&DAT_1802a3bb8,&DAT_180275d81,0x10,9,&DAT_1802a3bc4);
      FUN_1800e0310(local_98,&DAT_1802a3bb8,local_248);
      FUN_180156680(local_98,local_26c);
      *(longlong *)(param_1 + 0x3e) = local_268;
      plVar8 = local_188;
      if (local_258 < *(ulonglong *)(param_1 + 0x40)) {
        plVar8 = (longlong *)*local_188;
      }
      *(undefined1 *)plVar8 = local_299;
      local_290 = 0xf03fcf60f6846061;
      local_298 = 0x3bad130c10205028;
    }
    else {
      if (uVar5 != 0x7f3615776b7ae0a8) goto LAB_1800dca6a;
      FUN_180107400(local_148,*(byte *)(local_148 + 0x4c) ^ 1);
      local_290 = 0xe79069c147a8c70d;
      local_298 = 0x2c02b5ada10cf744;
    }
  }
LAB_1800dca60:
  local_29a = 0;
  goto LAB_1800dca6a;
}



void FUN_1800deaf0(longlong param_1,longlong param_2,float *param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  ulonglong local_150;
  ulonglong local_148;
  byte local_13a;
  undefined1 local_139;
  longlong local_138;
  int local_12c;
  float local_128;
  float local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  float local_10c;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  longlong local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  int *local_90;
  undefined8 *local_88;
  undefined8 *local_80;

  local_148 = 0xa6b57c57a70e57a2;
  local_150 = 0x13c20aa7da99de6d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar7 = local_148 ^ 0xf11dd51bf3b17a85;
                uVar3 = local_148 ^ local_150;
                local_150 = local_150 ^ 0xf11dd51bf3b17a85;
                local_148 = uVar7;
                if ((longlong)uVar3 < 0x176d744530693d1) break;
                if ((longlong)uVar3 < 0x405c9de3d49c77b8) {
                  if ((longlong)uVar3 < 0x27a0c07ce6651fb5) {
                    if ((longlong)uVar3 < 0xdfa58b20a535c48) {
                      if (uVar3 == 0x176d744530693d1) {
                        local_b8 = local_c0;
                        local_a8 = local_100;
                        uStack_a0 = local_f8;
                        FUN_1802079d0(local_c0,local_c8,local_100 + local_d8);
                        local_148 = 0x2a6f24f1734f59d4;
                        local_150 = 0xb1f7e7832bd3e51c;
                      }
                      else if (uVar3 == 0x1fb64487752d94b) {
                        local_148 = 0x3379f7ba007691e1;
                        local_150 = 0x92c2f89062684bd2;
                      }
                    }
                    else if (uVar3 == 0xdfa58b20a535c48) {
                      local_148 = 0x9772a4619c21a552;
                      if (*param_3 < *(float *)(param_2 + 0x60) || *(float *)(param_2 + 0x68) < *param_3) {
                        local_148 = 0x2942701a913c31cf;
                      }
                      local_150 = 0x88f97f30f322ebfc;
                    }
                    else if (uVar3 == 0x1a4f7b4579e29ead) {
                      lVar5 = FUN_1801d61c8(local_f8 + 0x28);
                      local_c0 = lVar5 + 0x27U & 0xffffffffffffffe0;
                      *(longlong *)(local_c0 - 8) = lVar5;
                      local_148 = 0x7da6485587c5c523;
                      local_150 = 0x7cd09f11d4c356f2;
                    }
                    else if (uVar3 == 0x1f8bdb516f034eae) {
                      local_148 = 0x7d29bdce55fed0b9;
                      if (*(float *)(param_2 + 100) <= param_3[1] && param_3[1] <= *(float *)(param_2 + 0x6c)) {
                        local_148 = 0xa7430caa9821f4a1;
                      }
                      local_150 = 0xdc92b2e437e00a8a;
                    }
                  }
                  else if ((longlong)uVar3 < 0x2df53fb6daca96ed) {
                    if (uVar3 == 0x27a0c07ce6651fb5) {
                      local_148 = 0x8a22b09aab7ec0d1;
                      if (local_12c == 0) {
                        local_148 = 0xfd63fb93d981d45b;
                      }
                      local_150 = 0x37474202cb7d9848;
                    }
                    else if (uVar3 == 0x2a5fa644e744407e) {
                      fVar9 = local_110;
                      if (local_110 <= local_10c) {
                        fVar9 = local_10c;
                      }
                      *(uint *)(local_138 + 0x90) =
                           -(uint)(local_ec < local_10c) & (uint)local_ec | ~-(uint)(local_ec < local_10c) & (uint)fVar9
                      ;
                      local_148 = 0xcd7b4b6d60ae8ad7;
                      local_150 = 0x6cc0444702b050e4;
                    }
                  }
                  else if (uVar3 == 0x2df53fb6daca96ed) {
                    local_148 = 0xb6bef6944d572050;
                    if (local_12c < 4) {
                      local_148 = 0xc274805feec9cb87;
                    }
                    local_150 = 0x83a3f63b81a99e69;
                  }
                  else if (uVar3 == 0x351d00afccfebe39) {
                    local_148 = 0xd048f8715e54f641;
                    if (local_12c < 5) {
                      local_148 = 0xe36c8a6cc76b53c4;
                    }
                    local_150 = 0x5a10fbd16c918350;
                  }
                  else if (uVar3 == 0x37ef8e622747017d) {
                    local_d0 = (ulonglong *)(local_138 + 0x90);
                    local_148 = 0xa15387728cccbe66;
                    if (param_4 != '\0') {
                      local_148 = 0x9157472c17a87a25;
                    }
                    local_150 = 0xd4a40cf91ed65357;
                  }
                }
                else if ((longlong)uVar3 < 0x7290bf2a0eaadf53) {
                  if ((longlong)uVar3 < 0x45f34bd5097e2972) {
                    if (uVar3 == 0x405c9de3d49c77b8) {
                      local_148 = 0x3c599fc873375015;
                      if (local_12c == 6) {
                        local_148 = 0xb6d3e332347309f1;
                      }
                      local_150 = 0x813c6d501334088c;
                    }
                    else if (uVar3 == 0x41d776646f6055ee) {
                      local_148 = 0xa0e58510009310b7;
                      if (local_12c < 1) {
                        local_148 = 0xfd113dd4d254294b;
                      }
                      local_150 = 0xdab1fda8343136fe;
                    }
                  }
                  else if (uVar3 == 0x45f34bd5097e2972) {
                    *(longlong *)(local_138 + 0xa0) = local_e0;
                    puVar4 = local_d0;
                    if (local_108 < *(ulonglong *)(local_138 + 0xa8)) {
                      puVar4 = (ulonglong *)*local_d0;
                    }
                    *(undefined1 *)puVar4 = local_139;
                    local_80 = (undefined8 *)(param_1 + 0x168);
                    local_148 = 0xd0639702f3a51167;
                    if (*(longlong *)(param_1 + 0x168) == local_138) {
                      local_148 = 0xb72ab9b8184994bb;
                    }
                    local_150 = 0x71d8982891bbcb54;
                  }
                  else if (uVar3 == 0x5b8fef2d5587dfd0) {
                    *(undefined8 *)(param_1 + 0x160) = local_98;
                    lVar5 = FUN_180100330();
                    *(byte *)(lVar5 + 0x358) = local_13a;
                    local_148 = 0xe0e40237b92c289a;
                    local_150 = 0x415f0d1ddb32f2a9;
                  }
                  else if (uVar3 == 0x64087c97abc11c9d) {
                    iVar6 = 1;
                    if (param_4 != '\0') {
                      iVar6 = local_11c;
                    }
                    iVar2 = (int)((ulonglong)(*(longlong *)(local_138 + 0xa0) - *(longlong *)(local_138 + 0x98)) >> 5);
                    *(int *)(local_138 + 0x90) = ((iVar6 + *(int *)(local_138 + 0x90)) % iVar2 + iVar2) % iVar2;
                    local_148 = 0xa7f0ad7db66cc1de;
                    local_150 = 0x64ba257d4721bed;
                  }
                }
                else if ((longlong)uVar3 < 0x75f78b8b921aed31) {
                  if (uVar3 == 0x7290bf2a0eaadf53) {
                    local_a8 = local_100;
                    uStack_a0 = local_108;
                    local_b8 = *local_c8;
                    uStack_b0 = local_c8[1];
                    local_148 = 0xc64943d1c4ef31e4;
                    local_150 = 0x5dd180a39c738d2c;
                  }
                  else if (uVar3 == 0x744fbd6987c83864) {
                    fVar9 = (float)FUN_1801e1b20((local_e8 - local_110) / local_e4);
                    local_10c = fVar9 * local_e4 + local_110;
                    local_148 = 0xe07608f66e9f9080;
                    local_150 = 0xca29aeb289dbd0fe;
                  }
                }
                else if (uVar3 == 0x75f78b8b921aed31) {
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_100 = *(ulonglong *)(local_138 + 0xa0);
                  local_c8 = local_d0;
                  if (local_108 < *(ulonglong *)(local_138 + 0xa8)) {
                    local_c8 = (ulonglong *)*local_d0;
                  }
                  local_148 = 0x6cbfca8f33d5f4e3;
                  if ((longlong)local_100 < local_e0) {
                    local_148 = 0x79537ce99995410a;
                  }
                  local_150 = 0xf67d000157f81f2b;
                }
                else if (uVar3 == 0x7a5478b834a22649) {
                  local_148 = 0xaefe83fd54b1d249;
                  if (local_12c < 3) {
                    local_148 = 0xc70ca7d8f523929c;
                  }
                  local_150 = 0xcaf6ff6aff70ced4;
                }
                else if (uVar3 == 0x7bd1be4eafc1fe2b) {
                  *(longlong *)(param_1 + 0x148) = local_138;
                  uVar1 = *(undefined8 *)(param_2 + 0x58);
                  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x50);
                  *(undefined8 *)(param_1 + 0x158) = uVar1;
                  fVar9 = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x150);
                  uVar8 = -(uint)(local_128 < fVar9);
                  fVar9 = (*param_3 - *(float *)(param_1 + 0x150)) /
                          (float)(~uVar8 & (uint)local_128 | (uint)fVar9 & uVar8);
                  local_114 = (float)((uint)local_128 & -(uint)(local_128 < fVar9) |
                                     ~-(uint)(local_128 < fVar9) &
                                     ((uint)local_124 & -(uint)(fVar9 < local_124) |
                                     ~-(uint)(fVar9 < local_124) & (uint)fVar9));
                  local_120 = *local_90;
                  local_148 = 0x37aec059028b2d5a;
                  local_150 = 0x909a5859d15a3e70;
                }
              }
              if ((longlong)uVar3 < -0x413514e7a46233a4) break;
              if ((longlong)uVar3 < -0x35db466eed03b3ed) {
                if ((longlong)uVar3 < -0x3b470fa90547fcf2) {
                  if (uVar3 == 0xbecaeb185b9dcc5c) {
                    local_148 = 0x8151ac60a2790f43;
                    if (local_120 == 2) {
                      local_148 = 0x79c0418c52d75831;
                    }
                    local_150 = 0x80aac828d52bd608;
                  }
                  else if (uVar3 == 0xbf38c35b6d77014d) {
                    *(undefined4 *)(local_138 + 0x90) = local_118;
                    *(undefined8 *)(param_1 + 0x160) = 0;
                    lVar5 = FUN_180100330();
                    *(undefined1 *)(lVar5 + 0x358) = local_139;
                    local_148 = 0x86af6a9dc20c4d84;
                    local_150 = 0x271465b7a01297b7;
                  }
                }
                else if (uVar3 == 0xc4b8f056fab8030e) {
                  *local_88 = 0;
                  local_148 = 0x63178ad878fca065;
                  local_150 = 0xc2ac85f21ae27a56;
                }
                else if (uVar3 == 0xc6f2219089f25fef) {
                  *local_80 = 0;
                  local_148 = 0x60063997d5a2fa0a;
                  local_150 = 0xc1bd36bdb7bc2039;
                }
                else if (uVar3 == 0xc993d19d26194ac6) {
                  FUN_1800e07c0(param_1,local_138);
                  local_148 = 0x2b68d2ddc2d77c7b;
                  local_150 = 0x8ad3ddf7a0c9a648;
                }
              }
              else if ((longlong)uVar3 < -0xa8ea854bfcb56d9) {
                if (uVar3 == 0xca24b99112fc4c13) {
                  *(byte *)(local_138 + 0x90) = *(byte *)(local_138 + 0x90) ^ local_13a;
                  local_148 = 0xa164c056157bdcec;
                  local_150 = 0xdfcf7c776506df;
                }
                else if (uVar3 == 0xe40c4c8fb278e861) {
                  local_148 = 0x8b886a03b2d241c0;
                  if (local_120 == 1) {
                    local_148 = 0x7f0259e085b431ac;
                  }
                  local_150 = 0x8a730e4bc580988b;
                }
              }
              else if (uVar3 == 0xf57157ab4034a927) {
                iVar6 = *(int *)(local_138 + 0x98);
                iVar2 = FUN_1801eaef0((float)(*(int *)(local_138 + 0x9c) - iVar6) * local_114);
                iVar2 = iVar2 + iVar6;
                iVar6 = *(int *)(local_138 + 0x98);
                if (*(int *)(local_138 + 0x98) < iVar2) {
                  iVar6 = iVar2;
                }
                if (*(int *)(local_138 + 0x9c) < iVar2) {
                  iVar6 = *(int *)(local_138 + 0x9c);
                }
                *(int *)(local_138 + 0x90) = iVar6;
                local_148 = 0xa4145eb2fb5d0b76;
                local_150 = 0x5af51989943d145;
              }
              else if (uVar3 == 0xf96a89a487fc8e39) {
                local_110 = *(float *)(local_138 + 0x98);
                local_ec = *(float *)(local_138 + 0x9c);
                local_10c = (local_ec - local_110) * local_114 + local_110;
                local_e4 = *(float *)(local_138 + 0xa0);
                local_148 = 0xbcca6c125573a3ff;
                if (local_124 < local_e4) {
                  local_148 = 0xe2da773f35ffdbe5;
                }
                local_150 = 0x9695ca56b237e381;
                local_e8 = local_10c;
              }
              else if (uVar3 == 0xf9fa63abd9ff890a) {
                local_c0 = FUN_1801d61c8(local_f8 + local_d8);
                local_148 = 0xc975c084dd2867c4;
                local_150 = 0xc80317c08e2ef415;
              }
            }
            if ((longlong)uVar3 < -0x58cb67ff2c2eecd6) break;
            if ((longlong)uVar3 < -0x46c75e1e8266bde9) {
              if (uVar3 == 0xa7349800d3d1132a) {
                local_148 = 0x6ee1ebf82b1bbcce;
                if (local_120 < 2) {
                  local_148 = 0x34274c6fc2fe98f3;
                }
                local_150 = 0xd02b00e070867092;
              }
              else if (uVar3 == 0xb57776f07d9789cf) {
                local_128 = 1.0;
                local_124 = 0.0;
                local_118 = 0;
                local_139 = 0;
                local_11c = -1;
                local_d8 = 1;
                local_108 = 0xf;
                local_13a = 1;
                local_e0 = 0;
                local_138 = *(longlong *)(param_2 + 0x20);
                local_98 = *(undefined8 *)(param_2 + 0x18);
                local_90 = (int *)(local_138 + 8);
                local_12c = *(int *)(local_138 + 8);
                local_148 = 0x3fdc9d3d9704309a;
                local_150 = 0x1229a28b4dcea677;
              }
            }
            else if (uVar3 == 0xb938a1e17d994217) {
              uVar3 = local_100 | local_108;
              local_f8 = 0x16;
              if (0x16 < uVar3) {
                local_f8 = uVar3;
              }
              local_148 = 0xebe9f27c23c6e95e;
              if (0xffe < uVar3) {
                local_148 = 0x85cea9283dbfef9;
              }
              local_150 = 0x121391d7fa396054;
            }
            else if (uVar3 == 0xb97c71bdabfad094) {
              local_88 = (undefined8 *)(param_1 + 0x198);
              local_148 = 0x5bb143a30a1c268c;
              if (*(longlong *)(param_1 + 0x198) == local_138) {
                local_148 = 0x569a6268d6bd6f44;
              }
              local_150 = 0x9222923e2c056c4a;
            }
            else if (uVar3 == 0xbd65f29860035899) {
              local_148 = 0x4c443087dae96cf;
              local_150 = 0xa57f4c221fb04cfc;
            }
          }
          if (-0x64673c8da7634339 < (longlong)uVar3) break;
          if (uVar3 == 0x8a5803a032c57511) {
            local_148 = 0xff78a5263ba11cda;
            if (local_12c < 6) {
              local_148 = 0x1a39c519dc1414c1;
            }
            local_150 = 0xbf2438c5ef3d6b62;
          }
          else if (uVar3 == 0x9ac2ca8e642debc8) {
            local_148 = 0x1cd361c763f214bb;
            if (local_100 < 0x10) {
              local_148 = 0xd77b7f0c10c189ff;
            }
            local_150 = 0xa5ebc0261e6b56ac;
          }
          else if (uVar3 == 0x8f2e7ce8ce6d5e21) {
            FUN_180002ac0();
          }
        }
        if (uVar3 != 0x9b98c372589cbcc8) break;
        FUN_1800dfcf0(param_1,local_138,local_11c,local_118,&local_b8);
        local_148 = 0xa4e885585ae2b79f;
        local_150 = 0x5538a7238fc6dac;
      }
      if (uVar3 != 0xa51dfddc33297fa3) break;
      local_148 = 0xddede020ae9bcf50;
      if (param_4 != '\0') {
        local_148 = 0x395acc56966b11cd;
      }
      local_150 = 0x86620f0dfb1c1080;
    }
  } while (uVar3 != 0xa1bb0f2a621eda33);
  return;
}



void FUN_1800dfcf0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,longlong *param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;

  FUN_1800c63c0();
  *(undefined8 *)(param_1 + 0x168) = param_2;
  *(undefined4 *)(param_1 + 0x170) = param_3;
  *(undefined4 *)(param_1 + 0x174) = param_4;
  plVar1 = (longlong *)(param_1 + 0x178);
  if (plVar1 != param_5) {
    uVar2 = *(ulonglong *)(param_1 + 400);
    if (0xf < uVar2) {
      lVar6 = *plVar1;
      uVar8 = uVar2 + 1;
      lVar7 = lVar6;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(lVar6 + -8);
        if (0x1f < (ulonglong)((lVar6 + -8) - lVar7)) goto LAB_1800dfeef;
        uVar8 = uVar2 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar7,uVar8);
    }
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0xf;
    *(undefined1 *)(param_1 + 0x178) = 0;
    lVar7 = *param_5;
    uVar3 = *(undefined4 *)((longlong)param_5 + 4);
    lVar5 = param_5[1];
    uVar4 = *(undefined4 *)((longlong)param_5 + 0xc);
    lVar6 = param_5[3];
    *(longlong *)(param_1 + 0x188) = param_5[2];
    *(longlong *)(param_1 + 400) = lVar6;
    *(int *)plVar1 = (int)lVar7;
    *(undefined4 *)(param_1 + 0x17c) = uVar3;
    *(int *)(param_1 + 0x180) = (int)lVar5;
    *(undefined4 *)(param_1 + 0x184) = uVar4;
    param_5[2] = 0;
    param_5[3] = 0xf;
    *(undefined1 *)param_5 = 0;
  }
  lVar6 = FUN_180100330();
  *(undefined1 *)(lVar6 + 0x358) = 1;
  uVar2 = param_5[3];
  if (uVar2 < 0x10) {
    return;
  }
  lVar6 = *param_5;
  uVar8 = uVar2 + 1;
  lVar7 = lVar6;
  if (0xfff < uVar8) {
    lVar7 = *(longlong *)(lVar6 + -8);
    if (0x1f < (ulonglong)((lVar6 + -8) - lVar7)) {
LAB_1800dfeef:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar8 = uVar2 + 0x28;
  }
  thunk_FUN_1801f42e0(lVar7,uVar8);
  return;
}



void Unwind_1800dff10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x58));
  return;
}



void FUN_1800dff40(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;

  local_80 = 0x435a4366a99e6d51;
  local_88 = 0x95948a099261d6d1;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_80 ^ local_88;
        local_88 = local_88 ^ 0x6297fd52a63f6a08;
        if ((longlong)uVar1 < -0xe9f65b20d3baeb1) break;
        if (uVar1 == 0xf1609a4df2c4514f) {
          local_70 = *local_78;
          local_80 = 0x5dc7c2ce90a8dfff;
          local_88 = 0xd645906f806dd0d0;
        }
        else {
          local_80 = local_80 ^ 0x6297fd52a63f6a08;
          if (uVar1 == 0x445c340c3c1a6a81) {
            FUN_1800e8140(local_60,local_68);
            local_60 = local_60 + 0x40;
            local_80 = 0x11bb5b95f0a8d638;
            if (local_68 + 0x40 == local_48) {
              local_80 = 0xa487f5d43e76edf6;
            }
            local_88 = 0x55e76f99ccb2bcb9;
            local_68 = local_68 + 0x40;
          }
        }
      }
      if (uVar1 != 0xd6cec96f3bffbb80) break;
      local_78 = (longlong *)(param_1 + 8);
      local_70 = *(longlong *)(param_1 + 8);
      local_80 = 0x494be9128e870d72;
      if (param_3 + 0x40 == local_70) {
        local_80 = 0x86958fbfa25868dc;
      }
      local_88 = 0xd17dd1eb29d67f3;
      local_68 = param_3 + 0x40;
      local_60 = param_3;
      local_50 = param_3;
      local_48 = local_70;
    }
    local_80 = local_80 ^ 0x6297fd52a63f6a08;
  } while (uVar1 != 0x8b8252a110c50f2f);
  FUN_1800880c0(local_70 + -0x40);
  *local_78 = *local_78 + -0x40;
  *param_2 = local_50;
  return;
}


