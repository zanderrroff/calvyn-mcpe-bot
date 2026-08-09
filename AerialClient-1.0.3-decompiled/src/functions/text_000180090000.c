#include "../include/aerialclient_types.h"


void FUN_180094350(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_94;
  longlong *local_90;
  uintptr_t local_88;
  undefined8 local_80;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;

  local_a0 = 0xf9742b5b8f7e2c8;
  local_a8 = 0x18c28b26d86e5c29;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_a0 ^ 0xc081c6594a8bfd68;
            uVar5 = local_a0 ^ local_a8;
            local_a8 = local_a8 ^ 0xc081c6594a8bfd68;
            local_a0 = uVar6;
            if ((longlong)uVar5 < 0x1755c9936099bee1) break;
            if ((longlong)uVar5 < 0x3960ecef458c67ae) {
              if (uVar5 == 0x1755c9936099bee1) {
                local_80 = 0xf;
                local_88 = 0;
                local_94 = 1;
                local_78 = (longlong *)(param_1 + 0x260);
                local_58 = (undefined8 *)(param_1 + 0x278);
                local_70 = *(ulonglong *)(param_1 + 0x278);
                local_a0 = 0x92675c4f0e117574;
                if (0xf < local_70) {
                  local_a0 = 0x25505d068542597a;
                }
                local_a8 = 0xab07b0a04b9d12da;
              }
              else if (uVar5 == 0x38a1ccb733462040) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar2 = (int *)((longlong)local_90 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                local_a0 = 0x26d0d1e3e947d197;
                if (iVar3 == local_94) {
                  local_a0 = 0x8ff3755a65c58dca;
                }
                local_a8 = 0x6c4c1c918a0ac1c6;
              }
            }
            else if (uVar5 == 0x3960ecef458c67ae) {
              *(uintptr_t *)(param_1 + 0x270) = local_88;
              *local_58 = local_80;
              *(undefined1 *)local_78 = 0;
              local_90 = *(longlong **)(param_1 + 8);
              local_a0 = 0xaa3389798a1cf0d1;
              if (local_90 == (longlong *)0x0) {
                local_a0 = 0xbf44b75358cd7a3c;
              }
              local_a8 = 0xf5d87a213b806a6d;
            }
            else if (uVar5 == 0x5febf358b19c9abc) {
              LOCK();
              plVar1 = local_90 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              local_a0 = 0x203da15475d4be97;
              if ((int)lVar4 == local_94) {
                local_a0 = 0x5200a09125df8e86;
              }
              local_a8 = 0x6aa16c261699aec6;
            }
            else if (uVar5 == 0x4a9ccd72634d1051) {
              return;
            }
          }
          if (-0x1c4096341030b3f5 < (longlong)uVar5) break;
          if (uVar5 == 0x8e57eda6cedf4ba0) {
            local_60 = *local_78;
            local_68 = local_70 + 1;
            local_a0 = 0x61c06ccff1cc0ab4;
            if (0xfff < local_68) {
              local_a0 = 0xa95c7946e0d1231b;
            }
            local_a8 = 0x65037d277fd7663e;
            local_48 = local_60;
          }
          else if (uVar5 == 0xab0bda93d3c9ec33) {
            local_68 = local_70 + 0x28;
            local_60 = local_50;
            local_a0 = 0x3310605cd0e7f1a;
            local_a8 = 0x7f217ed43151390;
          }
          else if (uVar5 == 0xcc5f04619f064525) {
            local_50 = *(longlong *)(local_48 + -8);
            local_a0 = 0xa67a7f5e1af8225f;
            if ((local_48 - local_50) - 8U < 0x20) {
              local_a0 = 0xf43684f7a3d912a7;
            }
            local_a8 = 0x5f3d5e647010fe94;
          }
        }
        if (uVar5 != 0xe3bf69cbefcf4c0c) break;
        (**(code **)(*local_90 + 8))();
        local_a0 = 0xaad7a2013f3a84c6;
        local_a8 = 0xe04b6f735c779497;
      }
      if (uVar5 != 0x4c311e88e1b6c8a) break;
      thunk_FUN_1801f42e0(local_60,local_68);
      local_a0 = 0x8e1353025f70d9d8;
      local_a8 = 0xb773bfed1afcbe76;
    }
  } while (uVar5 != 0xf947213a6ae8dccb);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_88);
}



void FUN_180094870(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10,0);
  return;
}



void FUN_180094890(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



void FUN_1800948b0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 *local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;

  local_70 = 0x914954e48106060d;
  local_78 = 0x7e57384d4c7c7099;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_70 ^ local_78;
        local_78 = local_78 ^ 0x242111405667ddd4;
        if (-0x2d279267cee3001 < (longlong)uVar1) break;
        if (uVar1 == 0xa694afe2fa45782d) {
          FUN_18006a970(local_60,local_68,param_3,param_2);
          local_70 = 0x37884c4e87544053;
          local_78 = 0xcaa5ca9704459053;
        }
        else {
          local_70 = local_70 ^ 0x242111405667ddd4;
          if (uVar1 == 0xef1e6ca9cd7a7694) {
            local_68 = 1;
            local_60 = *(undefined8 **)(param_1 + 8);
            local_50 = local_60 + 2;
            local_58 = local_60[2];
            local_48 = local_60[3];
            local_70 = 0xf4a0dc6592b6e354;
            if (local_58 < local_48) {
              local_70 = 0x1f0310c03dcd42a5;
            }
            local_78 = 0x5234738768f39b79;
          }
        }
      }
      if (uVar1 != 0x4d376347553ed9dc) break;
      *local_50 = local_58 + local_68;
      puVar2 = local_60;
      if (0xf < local_48) {
        puVar2 = (undefined8 *)*local_60;
      }
      *(char *)((longlong)puVar2 + local_58) = (char)param_2;
      *(undefined1 *)((longlong)puVar2 + local_58 + local_68) = 0;
      local_70 = 0xe276b297b7723e26;
      local_78 = 0x1f5b344e3463ee26;
    }
    local_70 = local_70 ^ 0x242111405667ddd4;
  } while (uVar1 != 0xfd2d86d98311d000);
  return;
}



void FUN_180094a90(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;

  local_68 = 0x1008f3fe6ef2036d;
  local_70 = 0x16833d9a4c3170a6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_68 ^ local_70;
        local_70 = local_70 ^ 0x139cb432eb5f3637;
        if ((longlong)uVar1 < -0x31428cfcd799d95a) break;
        if (uVar1 == 0xcebd7303286626a6) {
          *local_50 = local_58 + param_3;
          puVar2 = local_60;
          if (0xf < local_48) {
            puVar2 = (undefined8 *)*local_60;
          }
          FUN_1802079d0(local_58 + (longlong)puVar2,param_2,param_3);
          *(undefined1 *)((longlong)puVar2 + local_58 + param_3) = 0;
          local_68 = 0x28d80feabb3327ef;
          local_70 = 0xa9a3b7f904ae04ba;
        }
        else {
          local_68 = local_68 ^ 0x139cb432eb5f3637;
          if (uVar1 == 0x68bce6422c373cb) {
            local_60 = *(undefined8 **)(param_1 + 8);
            local_50 = local_60 + 2;
            local_58 = local_60[2];
            local_48 = local_60[3];
            local_68 = 0xe2ff537de02bf731;
            if (local_48 - local_58 < param_3) {
              local_68 = 0x9a7875e2235c3252;
            }
            local_70 = 0x2c42207ec84dd197;
          }
        }
      }
      if (uVar1 != 0xb63a559ceb11e3c5) break;
      FUN_180066dd0(local_60,param_3);
      local_68 = 0x237878fe0396382e;
      local_70 = 0xa203c0edbc0b1b7b;
    }
    local_68 = local_68 ^ 0x139cb432eb5f3637;
  } while (uVar1 != 0x817bb813bf9d2355);
  return;
}



undefined8 FUN_180094c70(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x50d1d2124870a312;
  local_50 = 0x6c6c09f1df9e5dea;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xffd8e200accabc91;
        if (uVar1 != 0xa7d9750fd34692d7) break;
        thunk_FUN_1801f42e0(param_1,0x10);
        local_48 = 0xd2ab67e8fe65a234;
        local_50 = 0x5341948e030c3eae;
      }
      if (uVar1 != 0x3cbddbe397eefef8) break;
      local_48 = 0x32e595b83e06ae3a;
      if ((param_2 & 1) == 0) {
        local_48 = 0x14d613d11029a077;
      }
      local_50 = 0x953ce0b7ed403ced;
    }
    local_48 = local_48 ^ 0xffd8e200accabc91;
  } while (uVar1 != 0x81eaf366fd699c9a);
  return param_1;
}



undefined8 FUN_180094db0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x454783cb37d4cd10;
  local_50 = 0x99514f6e24b3df8;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x423ab5f6d680e26c;
        if (uVar1 != 0x939525f6c4cf8a45) break;
        thunk_FUN_1801f42e0(param_1,0x20);
        local_48 = 0x8afa139620e84827;
        local_50 = 0xb0a3eea759ed9d43;
      }
      if (uVar1 != 0x4cd2973dd59ff0e8) break;
      local_48 = 0xe8d04f92e536d45b;
      if ((param_2 & 1) == 0) {
        local_48 = 0x411c975558fc8b7a;
      }
      local_50 = 0x7b456a6421f95e1e;
    }
    local_48 = local_48 ^ 0x423ab5f6d680e26c;
  } while (uVar1 != 0x3a59fd317905d564);
  return param_1;
}



void FUN_180094ef0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  longlong *local_48;

  local_58 = 0xf0e7a3ac80a97cd5;
  local_60 = 0x9ba9e6f2a144bc20;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0x540cdb0244f2f05f;
          if ((longlong)uVar5 < 0x5367451c88dbb111) break;
          if (uVar5 == 0x5367451c88dbb111) {
            LOCK();
            plVar2 = local_48 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            local_58 = 0xf468ac8ca5e5ac39;
            if ((int)lVar4 == local_4c) {
              local_58 = 0xd393f4e56febe337;
            }
            local_60 = 0x12f6b3375cb1e824;
          }
          else {
            local_58 = local_58 ^ 0x540cdb0244f2f05f;
            if (uVar5 == 0x6b4e455e21edc0f5) {
              local_4c = 1;
              local_48 = *(longlong **)(param_1 + 8);
              local_58 = 0xb5a21f3faaba7075;
              if (local_48 == (longlong *)0x0) {
                local_58 = 0x5b4598db358579;
              }
              local_60 = 0xe6c55a232261c164;
            }
          }
        }
        if (uVar5 != 0xc16547d2335a0b13) break;
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = 0x504cbc97a1297a7a;
        if (iVar3 == local_4c) {
          local_58 = 0xb3dc1bc0011b3914;
        }
        local_60 = 0xb6d2a32c587d3e67;
      }
      if (uVar5 != 0x50eb8ec59660773) break;
      (**(code **)(*local_48 + 8))();
      local_58 = 0xbf8f2977ee9777a2;
      local_60 = 0x591136cc17c333bf;
    }
    local_58 = local_58 ^ 0x540cdb0244f2f05f;
  } while (uVar5 != 0xe69e1fbbf954441d);
  return;
}



void FUN_1800950d0(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  char cVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined4 uVar25;
  undefined *puVar24;
  undefined1 local_1a0 [56];
  undefined1 local_168 [56];
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b0;
  ulonglong local_a8;
  undefined *local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined *local_58;
  undefined1 local_4d;
  byte local_4c;
  byte local_4b;
  undefined1 local_4a;
  byte local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_98 = 0xf;
  local_88 = 4;
  local_4a = 0x5c;
  local_b0 = 6;
  local_60 = 0;
  local_78 = 1;
  local_84 = 6;
  local_e8 = 3;
  local_4d = 0x66;
  local_49 = 0;
  local_e0 = -500;
  local_80 = 0x13c;
  local_7c = 0xf;
  local_a8 = 0xd;
  local_4c = 0x3f;
  local_70 = 2;
  if (param_2[2] == 0) {
    return;
  }
  local_58 = (undefined *)((longlong)param_1 + 0x5a);
  lVar10 = 0;
  uVar17 = 0;
  local_68 = 0;
  lVar18 = 0;
  uVar22 = 0;
  uVar23 = 0;
  local_90 = param_2;
  local_4b = param_3;
  do {
    puVar14 = param_2;
    if (local_98 < (ulonglong)param_2[3]) {
      puVar14 = (undefined8 *)*param_2;
    }
    uVar1 = *(uint *)(param_1 + 0x50);
    uVar21 = param_2[2];
    bVar6 = *(byte *)((longlong)puVar14 + uVar23);
    uVar20 = (ulonglong)bVar6;
    if ((byte)uVar17 == local_49) {
      uVar22 = 0xffU >> ((&DAT_18020e998)[uVar20] & 0x1f) & (uint)bVar6;
    }
    else {
      uVar22 = uVar22 << ((byte)local_84 & 0x1f) | (uint)(local_4c & bVar6);
      param_2 = local_90;
    }
    bVar5 = (&UNK_18020ea98)[(ulonglong)(byte)(&DAT_18020e998)[uVar20] + uVar17 * 0x10];
    uVar17 = (ulonglong)bVar5;
    if ((char)bVar5 < '\x01') {
LAB_1800953f0:
      if (bVar5 == 0) {
        lVar18 = local_70;
        if ((int)uVar22 < 0xc) {
          if ((int)uVar22 < 9) {
            if (uVar22 != 8) goto LAB_1800956b9;
            local_58[local_68] = local_4a;
            cVar4 = 'v';
LAB_18009564d:
            local_58[local_68 + 1] = cVar4 + -0x14;
          }
          else if (uVar22 == 9) {
            local_58[local_68] = local_4a;
            local_58[local_68 + 1] = 0x74;
          }
          else {
            if (uVar22 != 10) goto LAB_1800956b9;
            local_58[local_68] = local_4a;
            local_58[local_68 + 1] = 0x6e;
          }
        }
        else if ((int)uVar22 < 0x22) {
          if (uVar22 != 0xc) {
            if (uVar22 == 0xd) {
              local_58[local_68] = local_4a;
              cVar4 = -0x7a;
              goto LAB_18009564d;
            }
            goto LAB_1800956b9;
          }
          local_58[local_68] = local_4a;
          local_58[local_68 + 1] = local_4d;
        }
        else if ((int)uVar22 < 0x5c) {
          if (uVar22 == 0x22) {
            local_58[local_68] = local_4a;
            local_58[local_68 + 1] = 0x22;
          }
          else {
LAB_1800956b9:
            if ((uVar22 < 0x20) || ((0x7e < uVar22 & local_4b) != 0)) {
              if (uVar22 < 0x10000) {
                local_a0 = local_58 + local_68;
                FUN_1800b8f52(&DAT_1802a2414,&DAT_1802734f0,0x17,7,&DAT_1802a241c);
                FUN_180096a50(local_a0,7,&DAT_1802a2414,uVar22);
                lVar18 = local_b0;
              }
              else {
                local_a0 = local_58 + local_68;
                local_f0 = local_a8;
                uVar25 = 1;
                FUN_1800b8f52(&DAT_1802a2420,&DAT_180273524,0x18,0xd,&DAT_1802a2430);
                FUN_180096a50(local_a0,local_f0,&DAT_1802a2420,(uVar22 >> 10) + 0xd7c0 & 0xffff,
                              CONCAT44(uVar25,(uVar22 & 0x3ff) + 0xdc00));
                lVar18 = 0xc;
              }
            }
            else {
              local_58[local_68] = bVar6;
              lVar18 = local_78;
            }
          }
        }
        else {
          if (uVar22 != 0x5c) goto LAB_1800956b9;
          local_58[local_68] = local_4a;
          local_58[local_68 + 1] = local_4a;
        }
        lVar18 = local_68 + lVar18;
        uVar17 = (ulonglong)local_49;
        lVar10 = local_60;
        lVar7 = lVar18;
        if ((ulonglong)(local_e0 + lVar18) < local_a8) {
LAB_18009587e:
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_58);
          uVar17 = (ulonglong)local_49;
          lVar10 = local_60;
          lVar18 = local_60;
          lVar7 = local_60;
        }
      }
      else {
LAB_1800953f2:
        if (local_4b == 0) {
          local_58[local_68] = bVar6;
          local_68 = local_78 + local_68;
        }
        lVar10 = lVar10 + local_78;
        lVar7 = local_68;
      }
    }
    else {
      if (bVar5 != 1) goto LAB_1800953f2;
      if ((int)uVar1 < 1) {
        if (uVar1 != 0) goto LAB_180095399;
LAB_180095ade:
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = local_70;
        local_c0 = local_98;
        bVar6 = (byte)local_88;
        FUN_1800b8f52(&DAT_1802a24a4,&DAT_1802736a5,0x13,0x11,&DAT_1802a24b8);
        local_d8._0_2_ = CONCAT11((&DAT_1802a24a4)[local_7c & (uint)uVar20],(&DAT_1802a24a4)[uVar20 >> (bVar6 & 0x3f)]);
        FUN_180096c70(local_130,uVar23);
        FUN_1800b8f52(&DAT_1802a2440,&DAT_18027359d,0x16,0x1d,&DAT_1802a2460);
        FUN_1800b8f52(&DAT_1802a2434,&DAT_180273564,0x1d,5,&DAT_1802a243c);
        FUN_180096b00(local_110,&DAT_1802a2440,local_130,&DAT_1802a2434,&local_d8);
        FUN_1800839c0(local_1a0,local_80,local_110,0);
        FUN_1801dd110(local_1a0,&DAT_180253620);
      }
      while (2 < uVar1) {
LAB_180095399:
        while( true ) {
          uVar23 = uVar23 + local_78;
          if (uVar21 <= uVar23) goto LAB_1800958da;
          bVar6 = *(byte *)((longlong)puVar14 + uVar23);
          uVar20 = (ulonglong)bVar6;
          uVar22 = uVar22 << ((byte)local_84 & 0x1f) | (uint)(local_4c & bVar6);
          bVar5 = (&DAT_18020eaa8)[(byte)(&DAT_18020e998)[uVar20]];
          uVar17 = (ulonglong)bVar5;
          if ((char)bVar5 < '\x01') goto LAB_1800953f0;
          if (bVar5 != 1) goto LAB_1800953f2;
          if (0 < (int)uVar1) break;
          if (uVar1 == 0) goto LAB_180095ade;
        }
      }
      uVar23 = uVar23 - (lVar10 != local_60);
      uVar17 = (ulonglong)local_49;
      lVar10 = local_60;
      lVar7 = lVar18;
      if (uVar1 == 1) {
        puVar3 = (undefined4 *)(local_58 + lVar18);
        if (local_4b == 0) {
          *(undefined1 *)puVar3 = 0xef;
          *(undefined1 *)((longlong)puVar3 + 1) = 0xbf;
          uVar16 = 0xbd;
          lVar7 = local_70;
          lVar11 = local_e8;
        }
        else {
          *puVar3 = 0x6666755c;
          *(undefined1 *)(puVar3 + 1) = local_4d;
          uVar16 = 100;
          lVar7 = 5;
          lVar11 = local_b0;
        }
        lVar18 = lVar18 + lVar11;
        *(undefined1 *)((longlong)puVar3 + lVar7) = uVar16;
        uVar17 = (ulonglong)local_49;
        lVar7 = lVar18;
        if ((ulonglong)(local_e0 + lVar18) < local_a8) goto LAB_18009587e;
      }
    }
    local_68 = lVar7;
    uVar23 = uVar23 + local_78;
    uVar21 = param_2[2];
  } while (uVar23 < uVar21);
  if ((byte)uVar17 == local_49) {
    lVar18 = local_68;
    if (local_68 == local_60) {
      return;
    }
  }
  else {
LAB_1800958da:
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 < 1) {
      if (iVar2 != 0) {
        return;
      }
      if (local_98 < (ulonglong)param_2[3]) {
        local_90 = (undefined8 *)*local_90;
      }
      bVar6 = *(byte *)((longlong)local_90 + (uVar21 - 1));
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = local_70;
      local_c0 = local_98;
      bVar5 = (byte)local_88;
      FUN_1800b8f52(&DAT_1802a24a4,&DAT_1802736a5,0x13,0x11,&DAT_1802a24b8);
      local_d8._0_2_ = CONCAT11((&DAT_1802a24a4)[local_7c & bVar6],(&DAT_1802a24a4)[bVar6 >> (bVar5 & 0x3f)]);
      FUN_1800b8f52(&DAT_1802a2464,&DAT_1802735e8,0x12,0x27,&DAT_1802a248c);
      FUN_180097190(local_110,&DAT_1802a2464,&local_d8);
      FUN_1800839c0(local_168,local_80,local_110,0);
      FUN_1801dd110(local_168,&DAT_180253620);
    }
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_58);
      plVar9 = (longlong *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar9 + 8);
      if (local_4b == 0) {
        puVar24 = &DAT_1802a24a0;
        puVar13 = &DAT_1802a249c;
        puVar12 = &DAT_180273671;
        puVar8 = &DAT_1802a249c;
        uVar15 = 0x1b;
        uVar19 = 4;
        lVar18 = local_e8;
      }
      else {
        puVar24 = &DAT_1802a2498;
        puVar13 = &DAT_1802a2490;
        puVar12 = &DAT_18027363f;
        puVar8 = &DAT_1802a2490;
        uVar15 = 0x14;
        uVar19 = 7;
        lVar18 = local_b0;
      }
      FUN_1800b8f52(puVar8,puVar12,uVar15,uVar19,puVar24);
      goto LAB_180095ac8;
    }
    if (iVar2 != 2) {
      return;
    }
  }
  plVar9 = (longlong *)*param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar9 + 8);
  puVar13 = local_58;
LAB_180095ac8:
  (*UNRECOVERED_JUMPTABLE)(plVar9,puVar13,lVar18);
  return;
}



void Unwind_180095c10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xb8);
  return;
}



void Unwind_180095c50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xf0);
  return;
}



void Unwind_180095c90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xb8);
  return;
}



void Unwind_180095cd0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_180095d10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xf0);
  return;
}



void FUN_180095d50(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_140;
  ulonglong local_138;
  byte local_12d;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  ulonglong local_118;
  int local_10c;
  int local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined1 *local_48;

  local_138 = 0xc51d802a327c49a2;
  local_140 = 0xda294ed210f48e4b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_138 ^ 0xe579fc48545aa39e;
              uVar1 = local_138 ^ local_140;
              local_140 = local_140 ^ 0xe579fc48545aa39e;
              local_138 = uVar2;
              if (-0xb2007b811a7e75b < (longlong)uVar1) break;
              if ((longlong)uVar1 < -0x2ab13838188a2049) {
                if ((longlong)uVar1 < -0x4e901021136831f7) {
                  if (uVar1 == 0xa0f1c06475f220bf) {
                    local_b0 = (ulonglong)local_128;
                    local_90 = (undefined1 *)(local_b0 + (longlong)local_e0);
                    local_80 = local_118;
                    local_138 = 0x505dce04627e0b1a;
                    if (99 < local_118) {
                      local_138 = 0x15319935e5ff6922;
                    }
                    local_140 = 0x18945c96cc27fb0c;
                    local_98 = local_80;
                    local_88 = local_90;
                  }
                  else if (uVar1 == 0xa891061e01bd846a) {
                    *(undefined2 *)(local_48 + -2) = *(undefined2 *)(&DAT_18020ecb8 + local_50 * 2);
                    local_138 = 0x306ba33a31ef934b;
                    local_140 = 0x81044ce4dd785d42;
                    local_78 = local_b0;
                  }
                  else if (uVar1 == 0xaeacf60805bcb135) {
                    local_d0 = local_a0;
                    local_11c = local_fc;
                    local_138 = 0xd54745205127953a;
                    if (local_a0 < local_f0) {
                      local_138 = 0x232fec05fa906f35;
                    }
                    local_140 = 0x19db19a6ce89ba3f;
                  }
                }
                else if ((longlong)uVar1 < -0x3363a3796051d0fb) {
                  if (uVar1 == 0xb16fefdeec97ce09) {
                    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_e0,local_78);
                    local_138 = 0x9ad49c6f23584525;
                    local_140 = 0xbf5255c43c425338;
                  }
                  else if (uVar1 == 0xb9f3bcad94cf345c) {
                    local_138 = 0x2d9f99eadeab43a1;
                    if (local_d8 < local_f8) {
                      local_138 = 0xad76862a4194fc77;
                    }
                    local_140 = 0xc3985cd0e5cfd6dd;
                  }
                }
                else if (uVar1 == 0xcc9c5c869fae2f05) {
                  local_138 = 0xcc5b440a7bb98fb1;
                  if (local_d0 < local_c8) {
                    local_138 = 0x56610559890a8320;
                  }
                  local_140 = 0x848ed78e87ef3397;
                }
                else if (uVar1 == 0xd2efd2d70ee5b0b7) {
                  local_128 = local_11c + local_108;
                  local_138 = 0xa37d4a420485f4e0;
                  local_140 = 0x38c8a267177d45f;
                  local_118 = param_2;
                }
              }
              else if ((longlong)uVar1 < -0x11f83ac5c49b6a84) {
                if (uVar1 == 0xd54ec7c7e775dfb7) {
                  local_138 = 0x28674866aa97a949;
                  if (local_d8 < local_c8) {
                    local_138 = 0x62e22949edd66efd;
                  }
                  local_140 = 0x9194f4cb3e589d15;
                }
                else if (uVar1 == 0xdc3027d2b9ec6019) {
                  local_d8 = local_a8;
                  local_120 = local_100;
                  local_138 = 0x715e9f9bfa1b9f56;
                  if (local_a8 < local_f0) {
                    local_138 = 0xef4d782d0f6924e6;
                  }
                  local_140 = 0xa410585c1d6e40e1;
                }
                else if (uVar1 == 0xeb86e9546774db31) {
                  local_128 = local_124 + local_12c;
                  local_138 = 0x707f4e53fef3e5d3;
                  local_140 = 0xd08e8e378b01c56c;
                  local_118 = local_58;
                }
              }
              else if ((longlong)uVar1 < -0xc89227d2c710c18) {
                if (uVar1 == 0xee07c53a3b64957c) {
                  if ((local_d8 | local_f8) >> 0x20 == 0) {
                    local_a8 = (local_d8 & 0xffffffff) / (local_f8 & 0xffffffff);
                  }
                  else {
                    local_a8 = local_d8 / local_f8;
                  }
                  local_124 = local_120 + local_104;
                  local_138 = 0xbf31edd073050c4c;
                  if (local_d8 < local_b8) {
                    local_138 = 0x88872356ad9db764;
                  }
                  local_140 = 0x6301ca02cae96c55;
                  local_100 = local_124;
                }
                else if (uVar1 == 0xf01d82639900ffb0) {
                  *(undefined1 *)local_e0 = 0x2d;
                  local_a8 = local_e8 - param_2;
                  local_124 = local_12c;
                  local_100 = local_12c;
                  local_138 = 0x9fc6afd6e9ffbdd7;
                  if (local_a8 < local_c0) {
                    local_138 = 0xa8706150376706ff;
                  }
                  local_140 = 0x43f688045013ddce;
                  local_58 = local_a8;
                }
              }
              else if (uVar1 == 0xf376dd82d38ef3e8) {
                local_124 = local_120 + local_108;
                local_138 = 0xf0b778ca3e0297fc;
                local_140 = 0x1b31919e59764ccd;
              }
              else if (uVar1 == 0xf4a218dbfb12c39b) {
                if ((local_d0 | local_f8) >> 0x20 == 0) {
                  local_a0 = (local_d0 & 0xffffffff) / (local_f8 & 0xffffffff);
                }
                else {
                  local_a0 = local_d0 / local_f8;
                }
                local_128 = local_11c + local_104;
                local_138 = 0x7098d4081c9c4d40;
                if (local_d0 < local_b8) {
                  local_138 = 0x7ec5e2646cd2dcca;
                }
                local_140 = 0xde3422001920fc75;
                local_118 = param_2;
                local_fc = local_128;
              }
            }
            if ((longlong)uVar1 < 0x3af4f5a33419d50a) break;
            if ((longlong)uVar1 < 0x48d59384fc56bc26) {
              if (uVar1 == 0x3af4f5a33419d50a) {
                local_128 = local_11c + local_12c;
                local_138 = 0x86ca17a73463932c;
                local_140 = 0x263bd7c34191b393;
                local_118 = param_2;
              }
              else if (uVar1 == 0x3e150838e3dff838) {
                local_128 = local_11c + local_10c;
                local_138 = 0x9bb1e84a11308d8a;
                local_140 = 0x3b40282e64c2ad35;
                local_118 = param_2;
              }
              else if (uVar1 == 0x48c99292ae59f016) {
                local_70 = local_80;
                local_68 = local_88;
                local_138 = 0xa339ad2ef1e7662f;
                if (9 < local_80) {
                  local_138 = 0x5e418d8b5e32e9b;
                }
                local_140 = 0xad751ec6b45eaaf1;
                local_60 = local_b0;
                local_50 = local_70;
                local_48 = local_68;
              }
            }
            else if ((longlong)uVar1 < 0x5a46947ebb26ea57) {
              if (uVar1 == 0x48d59384fc56bc26) {
                local_138 = 0xc044f1edcb616506;
                if (local_d0 < local_f8) {
                  local_138 = 0xaf3e10ed3ac5ea5;
                }
                local_140 = 0x34e6e9363073a69d;
              }
              else if (uVar1 == 0x4b5d207112076407) {
                local_124 = local_120 + local_12c;
                local_138 = 0xc0fc95bc001d1fa6;
                local_140 = 0x2b7a7ce86769c497;
              }
            }
            else if (uVar1 == 0x5a46947ebb26ea57) {
              local_138 = 0xa62a569e735474d3;
              if (param_2 < local_c0) {
                local_138 = 0xfc5958d198b0dd40;
              }
              local_140 = 0x886a09676e8c5e6;
              local_fc = local_12c;
              local_a0 = param_2;
            }
            else if (uVar1 == 0x6eeedafaa45b2aaa) {
              local_124 = local_120 + local_10c;
              local_138 = 0x2f27572c94fe9d92;
              local_140 = 0xc4a1be78f38a46a3;
            }
          }
          if (0x12737bdd8167e759 < (longlong)uVar1) break;
          if (uVar1 == 0xf4dff847ee5818a6) {
            local_68 = (undefined1 *)((longlong)param_1 + 0x11);
            local_138 = 0xca89b69e735ff740;
            local_140 = 0xc4c5057636e63b9e;
            local_60 = 1;
            local_70 = param_2;
          }
          else if (uVar1 == 0xda5c5a329d8922e) {
            if ((local_98 | local_f0) >> 0x20 == 0) {
              uVar1 = (local_98 & 0xffffffff) % (local_f0 & 0xffffffff);
            }
            else {
              uVar1 = local_98 % local_f0;
            }
            if ((local_98 | local_f0) >> 0x20 == 0) {
              local_80 = (local_98 & 0xffffffff) / (local_f0 & 0xffffffff);
            }
            else {
              local_80 = local_98 / local_f0;
            }
            *(undefined2 *)(local_90 + -2) = *(undefined2 *)(&DAT_18020ecb8 + uVar1 * 2);
            local_90 = local_90 + -2;
            local_138 = 0xfe6b8c85e2d4e612;
            if (9999 < local_98) {
              local_138 = 0xbb07dbb46555842a;
            }
            local_140 = 0xb6a21e174c8d1604;
            local_98 = local_80;
            local_88 = local_90;
          }
          else if (uVar1 == 0xe4cb3e845b9ccde) {
            local_68[-1] = local_12d | (byte)local_70;
            local_138 = 0x5f87c2cd4c05f7c8;
            local_140 = 0xeee82d13a09239c1;
            local_78 = local_60;
          }
        }
        if (0x1f34cef82288c7e8 < (longlong)uVar1) break;
        if (uVar1 == 0x12737bdd8167e75a) {
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,local_12d);
          local_138 = 0xed450e1db010b5a5;
          local_140 = 0xc8c3c7b6af0aa3b8;
        }
        else if (uVar1 == 0x15e87220612e7dc8) {
          local_e0 = param_1 + 2;
          local_138 = 0xdc0e505a4f800ae5;
          if ((longlong)param_2 < local_e8) {
            local_138 = 0x765546476da61f02;
          }
          local_140 = 0x8648c424f4a6e0b2;
        }
      }
      if (uVar1 != 0x1f34cef82288c7e9) break;
      local_104 = 4;
      local_12d = 0x30;
      local_b8 = 100000;
      local_f0 = 100;
      local_e8 = 0;
      local_c0 = 10;
      local_12c = 1;
      local_c8 = 1000;
      local_108 = 2;
      local_10c = 3;
      local_f8 = 10000;
      local_138 = 0xb0997437e5587f1f;
      if (param_2 == 0) {
        local_138 = 0xb7027dca0511e58d;
      }
      local_140 = 0xa5710617847602d7;
    }
  } while (uVar1 != 0x2586c9ab1f1a161d);
  return;
}



int FUN_180096a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;

  local_28 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar3 = (ulonglong *)FUN_180097330();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = FUN_1801e663c(*puVar3 | 2,param_1,param_2,param_3);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_1802a0400 == (local_28 ^ (ulonglong)auStack_68)) {
    return iVar2;
  }
}



undefined8 * FUN_180096b00(undefined8 *param_1,char *param_2,longlong param_3,char *param_4,longlong param_5)

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
  FUN_180097340(param_1,param_3,param_4,param_5);
  return param_1;
}



void Unwind_180096c30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x38));
  return;
}



undefined8 * FUN_180096c70(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined1 *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 *local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  undefined1 *local_80;
  undefined1 local_63 [35];

  local_e0 = 0xfb50e19149f5444c;
  local_e8 = 0xd1676fc4f25b384b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_e0 ^ 0x4d2dd2759f44e1d0;
            uVar1 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0x4d2dd2759f44e1d0;
            local_e0 = uVar4;
            if ((longlong)uVar1 < 0x124fd741d439f0fc) break;
            if ((longlong)uVar1 < 0x31a8e77d3e8a8a85) {
              if (uVar1 == 0x124fd741d439f0fc) {
                local_98 = local_b8;
                local_e0 = 0x870fb3677c616dba;
                if (local_c8 < 0x10) {
                  local_e0 = 0x48dda00ff254a477;
                }
                local_e8 = 0x4f2f4b6982ee775f;
                local_90 = param_1;
              }
              else if (uVar1 == 0x2a378e55bbae7c07) {
                local_b8 = 0xf;
                local_d8 = 10;
                local_b0 = local_63;
                local_e0 = 0x241b0a5be8262795;
                local_e8 = 0x7d347a75a969bd26;
                local_a8 = param_2;
                local_80 = local_b0;
              }
            }
            else if (uVar1 == 0x31a8e77d3e8a8a85) {
              *param_1 = 0;
              param_1[1] = 0;
              local_c8 = (longlong)local_80 - (longlong)local_d0;
              local_e0 = 0xb9a4e5c27f73de34;
              if ((longlong)local_c8 < 0) {
                local_e0 = 0xefcd938063d21ac0;
              }
              local_e8 = 0xabeb3283ab4a2ec8;
            }
            else if (uVar1 == 0x592f702e414f9ab3) {
              if ((local_a8 | local_d8) >> 0x20 == 0) {
                cVar3 = (char)((local_a8 & 0xffffffff) % (local_d8 & 0xffffffff));
              }
              else {
                cVar3 = (char)(local_a8 % local_d8);
              }
              local_d0 = local_b0 + -1;
              local_b0[-1] = cVar3 + '0';
              if ((local_a8 | local_d8) >> 0x20 == 0) {
                uVar1 = (local_a8 & 0xffffffff) / (local_d8 & 0xffffffff);
              }
              else {
                uVar1 = local_a8 / local_d8;
              }
              local_e0 = 0x43b43d86fb5fc542;
              if (local_a8 < local_d8) {
                local_e0 = 0x2b33aad5849ad574;
              }
              local_e8 = 0x1a9b4da8ba105ff1;
              local_b0 = local_d0;
              local_a8 = uVar1;
            }
            else if (uVar1 == 0x4426a103c8983408) {
              FUN_180002ac0();
            }
          }
          if (-0x6a352a44253fd9d < (longlong)uVar1) break;
          if (uVar1 == 0x9fd31311a70fb97a) {
            lVar2 = FUN_1801d61c8(local_c0 + 0x28);
            local_a0 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
            local_a0[-1] = lVar2;
            local_e0 = 0x3137268c5f41ead6;
            local_e8 = 0xc86b8bd7e2ede8b2;
          }
          else if (uVar1 == 0xc820f80efe8f1ae5) {
            uVar1 = local_c8 | local_b8;
            local_c0 = 0x16;
            if (0x16 < uVar1) {
              local_c0 = uVar1;
            }
            local_e0 = 0xdd85461565c89857;
            if (0xffe < uVar1) {
              local_e0 = 0x4b99e16e00eb2c40;
            }
            local_e8 = 0xd44af27fa7e4953a;
          }
        }
        if (uVar1 != 0xf95cad5bbdac0264) break;
        *param_1 = local_a0;
        local_e0 = 0xc49ef008526be253;
        local_e8 = 0xc36c1b6e22d1317b;
        local_98 = local_c0;
        local_90 = local_a0;
      }
      if (uVar1 != 0x9cfb46ac22c0d6d) break;
      local_a0 = (undefined8 *)FUN_1801d61c8(local_c0 + 1);
      local_e0 = 0xa67397c00ea47f4d;
      local_e8 = 0x5f2f3a9bb3087d29;
    }
  } while (uVar1 != 0x7f2eb6670bad328);
  param_1[2] = local_c8;
  param_1[3] = local_98;
  FUN_1802079d0(local_90,local_d0,local_c8);
  *(undefined1 *)((longlong)local_90 + local_c8) = 0;
  return param_1;
}



undefined8 * FUN_180097190(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong uVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar3 = strlen(param_2);
  uVar5 = 0xf;
  if (0xf < sVar3 + param_3[2]) {
    FUN_180002240(param_1,sVar3 + param_3[2]);
    param_1[2] = 0;
    uVar5 = param_1[3];
  }
  sVar3 = strlen(param_2);
  if (uVar5 < sVar3) {
    FUN_180066dd0(param_1,sVar3);
    uVar5 = param_3[2];
    uVar1 = param_3[3];
  }
  else {
    param_1[2] = sVar3;
    puVar4 = param_1;
    if (0xf < uVar5) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(puVar4,param_2,sVar3);
    *(undefined1 *)((longlong)puVar4 + sVar3) = 0;
    uVar5 = param_3[2];
    uVar1 = param_3[3];
  }
  if (0xf < uVar1) {
    param_3 = (undefined8 *)*param_3;
  }
  lVar2 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar2) < uVar5) {
    FUN_180066dd0(param_1,uVar5,uVar5,param_3,uVar5);
  }
  else {
    param_1[2] = lVar2 + uVar5;
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1802079d0(lVar2 + (longlong)puVar4,param_3);
    *(undefined1 *)((longlong)puVar4 + lVar2 + uVar5) = 0;
  }
  return param_1;
}



void Unwind_180097300(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined * FUN_180097330(void)

{
  return &DAT_1802a1e88;
}



void FUN_180097340(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4)

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
  ulonglong local_98;
  size_t local_90;
  undefined8 *local_88;
  longlong local_80;
  ulonglong *local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_b8 = 0x90bc36bf3afba277;
  local_c0 = 0xab2b451be2b72d9f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_b8 ^ 0x899ce654324be966;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0x899ce654324be966;
            local_b8 = uVar2;
            if (-0x14fd20277c380d2f < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x52979e35cbd99338) {
              if (uVar1 == 0x8d5835267413ca65) {
                FUN_180066dd0(param_1);
                local_b8 = 0x5e5c3e7ec52dfbc4;
                local_c0 = 0xb55ee1a646ea0916;
              }
              else if (uVar1 == 0x918b73d6057abb1c) {
                *local_a8 = local_80 + local_a0;
                puVar3 = param_1;
                if (local_b0 < local_58) {
                  puVar3 = (undefined8 *)*param_1;
                }
                FUN_1802079d0(local_80 + (longlong)puVar3,local_88,local_a0);
                *(undefined1 *)((longlong)puVar3 + local_80 + local_a0) = local_c1;
                local_b8 = 0x26a0d977425eb556;
                local_c0 = 0x489bf909f983c511;
              }
            }
            else if (uVar1 == 0xad6861ca34266cc8) {
              *local_a8 = local_60 + local_90;
              puVar3 = param_1;
              if (local_b0 < local_48) {
                puVar3 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_60 + (longlong)puVar3,param_3,local_90);
              *(undefined1 *)((longlong)puVar3 + local_60 + local_90) = local_c1;
              local_b8 = 0x66da64a74b31b5cb;
              local_c0 = 0x8dd8bb7fc8f64719;
            }
            else if (uVar1 == 0xcc5ba6a82660fde1) {
              *local_a8 = local_68 + local_98;
              puVar3 = param_1;
              if (local_b0 < local_50) {
                puVar3 = (undefined8 *)*param_1;
              }
              FUN_1802079d0(local_68 + (longlong)puVar3,local_70,local_98);
              *(undefined1 *)((longlong)puVar3 + local_68 + local_98) = local_c1;
              local_b8 = 0xefc3a4a29b3b5e1c;
              local_c0 = 0xb9632ec2b5132e17;
            }
            else if (uVar1 == 0xd1438fa18aa226b7) {
              FUN_180066dd0(param_1);
              local_b8 = 0x70258afb836b41a4;
              local_c0 = 0x2685009bad4331af;
            }
          }
          if (0x56a08a602e28700a < (longlong)uVar1) break;
          if (uVar1 == 0xeb02dfd883c7f2d2) {
            local_98 = param_4[2];
            local_70 = param_4;
            if (local_b0 < (ulonglong)param_4[3]) {
              local_70 = (undefined8 *)*param_4;
            }
            local_68 = *local_a8;
            local_50 = *local_78;
            local_b8 = 0xef3e522ae04def51;
            if (local_50 - local_68 < local_98) {
              local_b8 = 0xf2267b234c8f3407;
            }
            local_c0 = 0x2365f482c62d12b0;
          }
          else if (uVar1 == 0x3b9773a4d84c8fe8) {
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
            local_b8 = 0x22acc360d5a2ba23;
            if (local_58 - local_80 < local_a0) {
              local_b8 = 0xd13e35f9b756bfed;
            }
            local_c0 = 0xb327b0b6d0d8013f;
          }
        }
        if (uVar1 != 0x6219854f678ebed2) break;
        FUN_180066dd0(param_1);
        local_b8 = 0xcbc324a974516ad2;
        local_c0 = 0xa5f804d7cf8c1a95;
      }
      if (uVar1 != 0x6e3b207ebbdd7047) break;
      local_90 = strlen(param_3);
      local_60 = *local_a8;
      local_48 = *local_78;
      local_b8 = 0x425ce7249cb64b09;
      if (local_48 - local_60 < local_90) {
        local_b8 = 0x626cb3c8dc83eda4;
      }
      local_c0 = 0xef3486eea89027c1;
    }
  } while (uVar1 != 0x56a08a602e28700b);
  return;
}



byte * FUN_180097850(byte *param_1,undefined8 param_2,double param_3)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_138 [36];
  byte local_114;
  byte local_113;
  byte local_112;
  byte local_111;
  ulonglong local_110;
  ulonglong local_108;
  char local_f9;
  uint local_f8;
  uint local_f4;
  byte *local_f0;
  int local_e8;
  int local_e4;
  byte *local_e0;
  uint local_d4;
  byte *local_d0;
  int local_c4;
  byte *local_c0;
  int local_b4;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  double local_98;
  byte *local_90;
  byte *local_88;
  double local_80;
  int local_78;
  int local_74;
  ulonglong local_70;

  local_70 = DAT_1802a0400 ^ (ulonglong)auStack_138;
  local_108 = 0xf6c62344756c55d;
  local_110 = 0xc49220c85f751990;
  local_b0 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pbVar1 = local_f0;
              uVar5 = local_108 ^ 0x3137c25dc0c3212e;
              uVar4 = local_108 ^ local_110;
              local_110 = local_110 ^ 0x3137c25dc0c3212e;
              local_108 = uVar5;
              if ((longlong)uVar4 < 0x18a5699d65ca369a) break;
              if ((longlong)uVar4 < 0x53631781690e6fb1) {
                if ((longlong)uVar4 < 0x25d58bd0b75f9458) {
                  if (uVar4 == 0x18a5699d65ca369a) {
                    *local_f0 = local_114;
                    local_f0[1] = local_113;
                    local_88 = local_f0 + 3;
                    local_f0[2] = local_114;
                    local_108 = 0xb68d78d04a213386;
                    local_110 = 0x3f76fd462ea857cb;
                  }
                  else if (uVar4 == 0x1bd9efc52ecc4a16) {
                    local_108 = 0xa8d17ad6efed06c4;
                    if (local_e4 == local_c4) {
                      local_108 = 0xaaf2118fb28bf2fe;
                    }
                    local_110 = 0xd4f95f851d29b728;
                    local_90 = local_f0;
                  }
                }
                else if (uVar4 == 0x25d58bd0b75f9458) {
                  uVar4 = (ulonglong)(local_e8 - local_f4);
                  lVar7 = (longlong)local_e4;
                  FUN_1802079d0(local_f0 + uVar4 + 2,local_f0,lVar7);
                  *local_f0 = local_114;
                  local_f0[1] = local_113;
                  FUN_180207610(local_f0 + 2,0x30,uVar4);
                  local_d0 = pbVar1 + lVar7 + uVar4 + 2;
                  local_108 = 0xa6ba21f3e20f271f;
                  local_110 = 0xace00f23bc48b8d3;
                }
                else if (uVar4 == 0x344f9b5de7555b64) {
                  local_98 = -param_3;
                  local_a0 = local_b0 + 1;
                  *local_b0 = local_111;
                  local_108 = 0x6fda01dd0222c0ff;
                  local_110 = 0xb3ef5819ae1d6266;
                }
              }
              else if ((longlong)uVar4 < 0x6ddd51632e9d32c9) {
                if (uVar4 == 0x53631781690e6fb1) {
                  uVar4 = (ulonglong)local_f4;
                  lVar7 = (longlong)local_e4;
                  FUN_1802079d0(local_f0 + uVar4 + 1,local_f0 + uVar4,lVar7 - uVar4);
                  pbVar1[uVar4] = local_113;
                  local_d0 = local_f0 + lVar7 + 1;
                  local_108 = 0x1c0484bea1c9a151;
                  local_110 = 0x165eaa6eff8e3e9d;
                }
                else if (uVar4 == 0x6848e28bbed0a78a) {
                  *local_c0 = local_114;
                  local_d0 = local_e0 + 5;
                  local_e0[4] = local_114 | (byte)local_f8;
                  local_108 = 0xe0508df7672161d3;
                  local_110 = 0xea0aa3273966fe1f;
                }
              }
              else if (uVar4 == 0x6ddd51632e9d32c9) {
                lVar7 = (longlong)(int)local_f4;
                FUN_180207610(local_f0 + local_e4,CONCAT71((int7)(uVar5 >> 8),0x30),local_b4);
                local_f0[lVar7] = local_113;
                local_f0[lVar7 + 1] = local_114;
                local_d0 = local_f0 + lVar7 + 2;
                local_108 = 0x1edd443f5ca9e5e5;
                local_110 = 0x14876aef02ee7a29;
              }
              else if (uVar4 == 0x7c282553f2c4b1ec) {
                lVar7 = (longlong)local_e4;
                FUN_1802079d0(local_f0 + 2,local_f0 + 1,lVar7 + -1);
                pbVar1[1] = local_113;
                local_90 = local_f0 + lVar7;
                local_108 = 0x7f33cbd64bcf244;
                local_110 = 0x79f872b7cb1eb792;
              }
              else if (uVar4 == 0x7e0b4e0aafa245d6) {
                local_e0 = local_90;
                local_90[1] = 0x65;
                bVar6 = 0x2b;
                if (local_f9 != '\0') {
                  bVar6 = local_111;
                }
                local_f8 = -(local_f4 - 1);
                if ((int)local_f8 < 0) {
                  local_f8 = local_f4 - 1;
                }
                local_c0 = local_90 + 3;
                local_90[2] = bVar6;
                local_108 = 0xbd7d4bc7077263b;
                if (local_f8 < 10) {
                  local_108 = 0x8e734f7075dbba50;
                }
                local_110 = 0xe63badfbcb0b1dda;
              }
            }
            if ((longlong)uVar4 < -0x314b2c37b3b422ff) break;
            if ((longlong)uVar4 < -0x121386b84483c41f) {
              if (uVar4 == 0xceb4d3c84c4bdd01) {
                *local_c0 = (char)(local_f8 / local_d4) + local_114;
                uVar2 = (ushort)(local_f8 % local_d4) & 0xff;
                *local_a8 = (byte)(uVar2 / local_112) | local_114;
                local_d0 = local_e0 + 6;
                local_e0[5] = (byte)(uVar2 % (ushort)local_112) | local_114;
                local_108 = 0xb3001f1a05514198;
                local_110 = 0xb95a31ca5b16de54;
              }
              else if (uVar4 == 0xdc3559c4ac3fa299) {
                local_80 = local_98;
                local_f0 = local_a0;
                local_108 = 0xd31cdf51663efdb3;
                if (local_98 != 0.0) {
                  local_108 = 0x4512014574067acd;
                }
                if (NAN(local_98)) {
                  local_108 = 0x4512014574067acd;
                }
                local_110 = 0xcbb9b6cc03f4cb29;
              }
            }
            else if (uVar4 == 0xedec7947bb7c3be1) {
              local_a8 = local_e0 + 4;
              local_108 = 0x2901a700c1b2c96d;
              if (local_f8 < local_d4) {
                local_108 = 0x76dd1ecc0c29db33;
              }
              local_110 = 0xe7b574c88df9146c;
            }
            else if (uVar4 == 0xa5a2ed05e479fcc) {
              local_88 = local_d0;
              local_108 = 0x344a6488acc19eab;
              local_110 = 0xbdb1e11ec848fae6;
            }
            else if (uVar4 == 0xd405799a14091c4) {
              local_f9 = (int)local_f4 < local_c4;
              local_108 = 0xe2047a8c35bbd1f3;
              if (local_f4 - 0x10 < 0xfffffff1) {
                local_108 = 0x335dc2456cdab24c;
              }
              local_110 = 0xb1676d0d5cb5be42;
            }
          }
          if ((longlong)uVar4 < -0x6e9795fb7e2f30a1) break;
          if (uVar4 == 0x91686a0481d0cf5f) {
            *local_c0 = (byte)local_f8 / local_112 | local_114;
            local_d0 = local_e0 + 5;
            *local_a8 = (byte)local_f8 % local_112 | local_114;
            local_108 = 0x32a4dfcaae7d2528;
            local_110 = 0x38fef11af03abae4;
          }
          else if (uVar4 == 0xcbfe42fc1823dccd) {
            local_114 = 0x30;
            local_c4 = 1;
            local_111 = 0x2d;
            local_e8 = 0;
            local_113 = 0x2e;
            local_112 = 10;
            local_d4 = 100;
            iVar3 = FUN_1801e13b0(param_3);
            local_108 = 0xcfdfbaf9c2bf29b3;
            if (iVar3 == local_e8) {
              local_108 = 0x27a5786089d5d04e;
            }
            local_110 = 0xfb9021a425ea72d7;
            local_a0 = local_b0;
            local_98 = param_3;
          }
        }
        if (uVar4 != 0x823aaf48306f0c0e) break;
        local_108 = 0x1f92fc33bc548858;
        if (local_f4 + 3 < 4) {
          local_108 = 0x219e982625c75616;
        }
        local_110 = 0x44b13f69298c24e;
      }
      if (uVar4 != 0x8eabb78977f2b1e4) break;
      local_74 = local_e8;
      local_78 = local_e8;
      FUN_180098290(local_f0,&local_74,&local_78,local_80);
      local_b4 = local_78;
      local_e4 = local_74;
      local_f4 = local_74 + local_78;
      local_108 = 0xd54ef1f7010738ee;
      if (0xf < (int)local_f4) {
        local_108 = 0xb5d3f70d8eda9be3;
      }
      if (local_78 < local_e8) {
        local_108 = 0xb5d3f70d8eda9be3;
      }
      local_110 = 0xb893a0942f9a0a27;
    }
  } while (uVar4 != 0x89fb85966489644d);
  if (DAT_1802a0400 != (local_70 ^ (ulonglong)auStack_138)) {
  }
  return local_88;
}



void FUN_180098290(undefined8 param_1,undefined8 param_2,int *param_3,ulonglong param_4)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  int local_19c;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  longlong local_180;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined8 local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_1d8;
  local_188 = 0x8b78695b8245b115;
  local_190 = 0xcdbc84bf9c4acd63;
  do {
    while( true ) {
      while( true ) {
        uVar8 = local_188 ^ 0xa4fed69b33c7c51;
        uVar3 = local_188 ^ local_190;
        local_190 = local_190 ^ 0xa4fed69b33c7c51;
        local_188 = uVar8;
        if ((longlong)uVar3 < 0x24d7d6bc7a3b8a2c) break;
        if (uVar3 == 0x24d7d6bc7a3b8a2c) {
          local_88 = local_110;
          local_110 = local_110 << ((byte)local_180 & 0x3f);
          local_168 = local_168 + local_19c;
          local_188 = 0xe9cea2a8d482a572;
          if (local_158 < (longlong)local_110) {
            local_188 = 0x71c4b60077402a3a;
          }
          local_190 = 0x551360bc0d7ba016;
          local_138 = local_168;
          local_98 = local_110;
        }
        else if (uVar3 == 0x46c4ede41e0f7c76) {
          local_150 = 0x80000000;
          local_1a8 = 0x20;
          local_128 = 0;
          local_180 = 1;
          local_158 = -1;
          local_19c = -1;
          local_174 = 0;
          local_130 = 0x1f;
          local_198 = 0xffffffff;
          local_160 = 0xfffffffe;
          uVar3 = 0x10000000000000;
          local_170 = (uint)(param_4 >> 0x34) - 0x433;
          if (param_4 >> 0x34 == 0) {
            uVar3 = 0;
            local_170 = -0x432;
          }
          local_a8 = param_4 & 0xfffffffffffff;
          local_118 = local_a8 | uVar3;
          local_164 = local_170 + -1;
          local_a0 = local_118 << 1;
          local_108 = local_a0 | 1;
          local_188 = 0xe16201162cb8af4d;
          local_190 = 0x1d667f785fc3ea09;
          local_13c = local_164;
          local_120 = param_4;
        }
      }
      if (uVar3 != 0xfc047e6e737b4544) break;
      local_80 = local_108;
      local_134 = local_164;
      local_108 = local_108 << ((byte)local_180 & 0x3f);
      local_16c = local_164 + local_19c;
      local_188 = 0x698f14656f5e368a;
      if (local_158 < (longlong)local_108) {
        local_188 = 0xb15cbcb7661ef9e2;
      }
      local_190 = 0x4d58c2d91565bca6;
      local_168 = local_170;
      local_110 = local_118;
      local_164 = local_16c;
      local_90 = local_108;
    }
  } while (uVar3 != 0xbcddc214d9f90564);
  uVar3 = local_118 << 2;
  if (0x1fffffffffffff >= local_120 || local_a8 != local_128) {
    uVar3 = local_a0;
  }
  if (0x1fffffffffffff < local_120 && local_a8 == local_128) {
    cVar1 = (char)local_170 + -2;
  }
  else {
    cVar1 = (char)local_13c;
  }
  uVar11 = uVar3 + local_158 << (cVar1 - (char)local_16c & 0x3fU);
  local_c8 = (longlong)
             ((short)((short)(((-0x3c - local_134) * 0x13441) / 0x40000) + (ushort)(local_174 < -0x3c - local_134) +
                     0x133) / 8) * 0x10;
  local_d0 = local_88 >> ((byte)local_130 & 0x3f);
  uVar4 = local_198 & *(ulonglong *)(&DAT_18020ed80 + local_c8);
  bVar2 = (byte)local_1a8;
  local_f0 = *(ulonglong *)(&DAT_18020ed80 + local_c8) >> (bVar2 & 0x3f);
  uVar6 = (local_160 & local_98) * local_f0;
  local_d8 = uVar6 >> (bVar2 & 0x3f);
  uVar3 = local_198 & uVar11;
  uVar11 = uVar11 >> (bVar2 & 0x3f);
  uVar9 = uVar4 * uVar11;
  uVar8 = uVar3 * local_f0;
  local_140 = local_138 + *(int *)(&DAT_18020ed88 + local_c8) + 0x40;
  local_144 = *(int *)(&DAT_18020ed88 + local_c8) + 0x40 + local_16c;
  uVar7 = local_80 >> ((byte)local_130 & 0x3f);
  uVar10 = (local_160 & local_90) * local_f0;
  uVar5 = uVar4 * uVar7;
  local_e0 = local_1a8;
  local_e8 = local_1a8;
  local_f8 = local_1a8;
  local_100 = local_1a8;
  local_68 = ((local_160 & uVar6) + local_150 +
              (local_198 & uVar4 * local_d0) + (uVar4 * (local_160 & local_98) >> (bVar2 & 0x3f)) >> (bVar2 & 0x3f)) +
             (uVar4 * local_d0 >> (bVar2 & 0x3f)) + local_d0 * local_f0 + local_d8;
  local_78 = uVar11 * local_f0 + local_180 + (uVar9 >> (bVar2 & 0x3f)) + (uVar8 >> (bVar2 & 0x3f)) +
             ((local_198 & uVar8) + local_150 + (local_198 & uVar9) + (uVar4 * uVar3 >> (bVar2 & 0x3f)) >>
             (bVar2 & 0x3f));
  local_58 = uVar7 * local_f0 + local_158 + (uVar5 >> (bVar2 & 0x3f)) + (uVar10 >> (bVar2 & 0x3f)) +
             ((local_160 & uVar10) + local_150 +
              (local_198 & uVar5) + (uVar4 * (local_160 & local_90) >> (bVar2 & 0x3f)) >> (bVar2 & 0x3f));
  *param_3 = local_174 - *(int *)(&DAT_18020ed8c + local_c8);
  local_1b0 = &local_58;
  local_1b8 = &local_68;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_3;
  local_70 = local_144;
  local_60 = local_140;
  local_50 = local_144;
  FUN_180098a60(param_1,param_2,param_3,&local_78);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_1d8)) {
  }
  return;
}



void FUN_180098a60(longlong param_1,int *param_2,int *param_3,longlong *param_4,longlong *param_5,ulonglong *param_6)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_168;
  ulonglong local_160;
  char local_156;
  char local_155;
  uint local_154;
  uint local_150;
  uint local_14c;
  char local_145;
  uint local_144;
  uint local_140;
  int local_13c;
  uint local_138;
  uint local_134;
  ulonglong local_130;
  uint local_124;
  uint local_120;
  uint local_11c;
  int local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  int local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  int local_d4;
  uint local_d0;
  uint local_cc;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  char *local_60;
  char *local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_160 = 0x5d88ac5219d06267;
  local_168 = 0xa72f6e58010601f1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_160 ^ 0x68151f9c79352e6c;
              uVar2 = local_160 ^ local_168;
              local_168 = local_168 ^ 0x68151f9c79352e6c;
              local_160 = uVar3;
              if ((longlong)uVar2 < 0xbb2e2c943d150d9) break;
              if ((longlong)uVar2 < 0x47f1a25515cec789) {
                if ((longlong)uVar2 < 0x2fed126147ba566b) {
                  if (uVar2 == 0xbb2e2c943d150d9) {
                    *local_58 = *local_58 + local_156;
                    local_98 = local_c0;
                    local_160 = 0x90d200762a8010bf;
                    if (local_b8 - local_c0 < local_e8) {
                      local_160 = 0xd9babedc65130e15;
                    }
                    if (local_100 <= local_c0) {
                      local_160 = 0xd9babedc65130e15;
                    }
                    local_168 = 0x2025373cb67df3de;
                  }
                  else if (uVar2 == 0x191b4f4584fa8967) {
                    local_160 = 0x176ccaf3c6e7be53;
                    if (local_a8 - local_130 < local_130 - local_48) {
                      local_160 = 0xf02c6f318ab5c722;
                    }
                    local_168 = 0x7250137615d2d1d6;
                    local_134 = local_140;
                  }
                  else if (uVar2 == 0x262407c966840582) {
                    local_150 = 10000;
                    local_14c = 5;
                    local_160 = 0xdda90f39d5a051cc;
                    if (9999 < local_154) {
                      local_160 = 0x598557df82f1b11c;
                    }
                    local_168 = 0x1e74f58a973f7695;
                  }
                }
                else if (uVar2 == 0x2fed126147ba566b) {
                  local_120 = local_d0 % local_140;
                  iVar1 = *param_2;
                  *param_2 = local_144 + iVar1;
                  *(char *)(param_1 + iVar1) = (char)(local_d0 / local_140) + local_155;
                  local_11c = local_cc - 1;
                  local_a0 = ((ulonglong)local_120 << ((byte)local_f0 & 0x3f)) + local_c8;
                  local_145 = local_108 < local_a0;
                  local_160 = 0xf696f98f4bc16849;
                  if (local_108 < local_a0) {
                    local_160 = 0x4372a8eb1b8aa67;
                  }
                  local_168 = 0x3f4bb5702da34f2;
                }
                else if (uVar2 == 0x37e8b75375ab2628) {
                  local_150 = 100000000;
                  local_160 = 0x3f7f380342f80597;
                  if (99999999 < local_154) {
                    local_160 = 0x7c9268fa783a7f4;
                  }
                  local_168 = 0x403884dab24d607d;
                  local_14c = local_124;
                }
                else if (uVar2 == 0x453b260c58fce7af) {
                  *param_3 = *param_3 - local_d4;
                  local_160 = 0x3873f8998faeb379;
                  if (local_b8 - local_e0 < local_e8) {
                    local_160 = 0xcad15957091437d2;
                  }
                  if (local_100 <= local_e0) {
                    local_160 = 0xcad15957091437d2;
                  }
                  local_168 = 0x334ed0b7da7aca19;
                }
              }
              else if ((longlong)uVar2 < 0x653cd985d3356f85) {
                if (uVar2 == 0x47f1a25515cec789) {
                  local_160 = 0x2cce1cfd419aa3b1;
                  local_168 = 0xd135f9b2e9e2a1b8;
                  local_114 = local_150;
                  local_110 = local_14c;
                  local_10c = local_154;
                }
                else if (uVar2 == 0x49b8805f490054f5) {
                  local_150 = 1000000;
                  local_14c = 7;
                  local_160 = 0x46a14da416d73c20;
                  if (999999 < local_154) {
                    local_160 = 0x95bb0656a552b81b;
                  }
                  local_168 = 0xd24aa403b09c7f92;
                }
                else if (uVar2 == 0x4abb236c846d3a34) {
                  local_e0 = local_90 * local_f8 & local_68;
                  iVar1 = *param_2;
                  *param_2 = local_144 + iVar1;
                  *(char *)(param_1 + iVar1) = (char)(local_90 * local_f8 >> ((byte)local_f0 & 0x3f)) + local_155;
                  local_118 = local_118 + local_144;
                  local_b8 = local_80 * local_f8;
                  local_100 = local_88 * local_f8;
                  local_160 = 0x957eaee7d6c7227e;
                  if (local_b8 < local_e0) {
                    local_160 = 0x9afeab870a56ffe5;
                  }
                  local_168 = 0xd04588eb8e3bc5d1;
                  local_d4 = local_118;
                  local_90 = local_e0;
                  local_88 = local_100;
                  local_80 = local_b8;
                }
              }
              else if ((longlong)uVar2 < 0x7ba80a2c37791235) {
                if (uVar2 == 0x653cd985d3356f85) {
                  local_160 = 0x5011053bb0abe66f;
                  if (local_145 != '\0') {
                    local_160 = 0x54756994cbbd19ad;
                  }
                  local_114 = local_134;
                  local_168 = 0xa98e8cdb63c51ba4;
                  local_10c = local_120;
                  local_110 = local_11c;
                }
                else if (uVar2 == 0x7328ce89ec5452c7) {
                  local_60 = (char *)(*param_2 + param_1 + -1);
                  local_160 = 0x40d2563edc78027b;
                  local_168 = 0xe52130122c763115;
                  local_78 = local_a0;
                }
              }
              else if (uVar2 == 0x7ba80a2c37791235) {
                local_160 = 0x23572a05b6e34d0c;
                if (local_c0 - local_100 < local_100 - local_50) {
                  local_160 = 0xd17a412c265ce01e;
                }
                local_168 = 0xdac8a3e5658db0c7;
              }
              else if (uVar2 == 0x7f47bcd9f0b565ea) {
                local_150 = 10000000;
                local_14c = 8;
                local_160 = 0x76c99fdeed2da8d6;
                if (9999999 < local_154) {
                  local_160 = 0x7880bdd4b1e33baa;
                }
                local_168 = 0x3f711f81a42dfc23;
              }
            }
            if (-0x131fa438eab2113f < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x4f08c8b563021c9f) {
              if (uVar2 == 0x827c7c479f6716f4) {
                *local_60 = *local_60 + local_156;
                local_160 = 0x14f02b184cddb7b6;
                if (local_108 - local_a8 < local_b0) {
                  local_160 = 0xd43f94b16fe6eb5d;
                }
                if (local_130 <= local_a8) {
                  local_160 = 0xd43f94b16fe6eb5d;
                }
                local_168 = 0xb1034d34bcd384d8;
                local_134 = local_140;
                local_78 = local_a8;
              }
              else if (uVar2 == 0x94ebe9a7a64b43b2) {
                local_150 = 100000;
                local_14c = 6;
                local_160 = 0x167a47580c8d9651;
                if (99999 < local_154) {
                  local_160 = 0x77afe2c47fc7545a;
                }
                local_168 = 0x305e40916a0993d3;
              }
              else if (uVar2 == 0xa5f3662cf00e336e) {
                local_48 = local_78;
                local_a8 = local_78 + local_b0;
                local_160 = 0xde109c957e23da9f;
                if (local_a8 < local_130) {
                  local_160 = 0x4577af9765be450c;
                }
                local_168 = 0xc70bd3d0fad953f8;
              }
            }
            else if (uVar2 == 0xb0f7374a9cfde361) {
              local_50 = local_98;
              local_c0 = local_98 + local_e8;
              local_160 = 0xf541c5a37189d4bd;
              if (local_c0 < local_100) {
                local_160 = 0x855b2d4605219651;
              }
              local_168 = 0x8ee9cf8f46f0c688;
            }
            else if (uVar2 == 0xb2294ae915eb2a6c) {
              local_150 = local_138;
              if (local_154 <= local_124) {
                local_150 = local_144;
              }
              local_14c = 2;
              if (local_154 <= local_124) {
                local_14c = local_144;
              }
              local_160 = 0xfc5299376af153e9;
              local_168 = 0xbba33b627f3f9460;
            }
            else if (uVar2 == 0xc3ddfab3429f2759) {
              local_150 = 1000;
              local_14c = 4;
              local_160 = 0xc1dc9c4d2198a447;
              if (999 < local_154) {
                local_160 = 0x6acd65df211b8d0c;
              }
              local_168 = 0x2d3cc78a34d54a85;
            }
          }
          if ((longlong)uVar2 < -0x2041ab05787fdf7) break;
          if (uVar2 == 0xfdfbe54fa8780209) {
            local_d0 = local_10c;
            local_cc = local_110;
            local_140 = local_114;
            local_160 = 0x5d18601abd11630f;
            if (local_13c < (int)local_110) {
              local_160 = 0x384e51177ec60f50;
            }
            local_168 = 0x17a34376397c593b;
            local_90 = local_c8;
            local_118 = local_13c;
            local_88 = local_130;
            local_80 = local_108;
          }
          else if (uVar2 == 0x7c391d9b3629e95) {
            local_134 = local_140 / local_138;
            local_160 = 0x533823316876989e;
            local_168 = 0x3604fab4bb43f71b;
          }
          else if (uVar2 == 0xb3d282e55d47960) {
            local_58 = (char *)(*param_2 + param_1 + -1);
            local_160 = 0xd90922317b13babc;
            local_168 = 0x69fe157be7ee59dd;
            local_98 = local_e0;
          }
        }
        if (-0x660761f2c910236 < (longlong)uVar2) break;
        if (uVar2 == 0xece05bc7154deec2) {
          local_150 = 100;
          local_14c = 3;
          local_160 = 0x8a390fe962ad0bc9;
          if (99 < local_154) {
            local_160 = 0x7fe1e7556288e62c;
          }
          local_168 = 0x38104500774621a5;
        }
        else if (uVar2 == 0xf56242d8491b5cbb) {
          *param_3 = *param_3 + local_11c;
          local_b0 = (ulonglong)local_140 << ((byte)local_f0 & 0x3f);
          local_160 = 0x8a3c5cc3248862f2;
          if (local_108 - local_a0 < local_b0) {
            local_160 = 0x8b1baa1bb2cdfe;
          }
          if (local_130 <= local_a0) {
            local_160 = 0x8b1baa1bb2cdfe;
          }
          local_168 = 0xf914924ac8dc3035;
        }
      }
      if (uVar2 != 0xfaa7c20a18d66396) break;
      local_155 = '0';
      local_156 = -1;
      local_124 = 9;
      local_f8 = 10;
      local_144 = 1;
      local_138 = 10;
      local_13c = 0;
      uVar2 = *param_6;
      local_108 = uVar2 - *param_4;
      local_130 = uVar2 - *param_5;
      local_f0 = -(int)param_6[1];
      local_e8 = 1L << ((byte)local_f0 & 0x3f);
      local_154 = (uint)(uVar2 >> ((byte)local_f0 & 0x3f));
      local_68 = local_e8 - 1;
      local_c8 = local_68 & uVar2;
      local_150 = 1000000000;
      local_14c = 10;
      local_160 = 0x263d3031865dcbc8;
      if (999999999 < local_154) {
        local_160 = 0x56242537e6382a69;
      }
      local_168 = 0x11d58762f3f6ede0;
    }
  } while (uVar2 != 0xf99f89e0d36efdcb);
  return;
}



undefined8 FUN_180099850(undefined8 param_1,longlong *param_2,longlong *param_3,ulonglong param_4,undefined1 param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  failure_vftable *local_c8 [5];
  undefined1 local_a0 [56];
  longlong *local_68;
  uint local_60 [2];
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_40 = 1;
  local_3c = 0;
  local_68 = (longlong *)0x0;
  plVar2 = (longlong *)param_3[7];
  uVar7 = param_4;
  if (plVar2 != (longlong *)0x0) {
    if (plVar2 == param_3) {
      local_68 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_a0);
      uVar7 = param_4 & 0xffffffff;
      plVar2 = (longlong *)param_3[7];
      if (plVar2 == (longlong *)0x0) goto LAB_1800998eb;
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
      param_4 = param_4 & 0xffffffff;
      plVar2 = local_68;
    }
    local_68 = plVar2;
    param_3[7] = 0;
    uVar7 = param_4;
  }
LAB_1800998eb:
  local_50 = param_2;
  local_48 = param_3;
  FUN_18009a760(param_1,param_2,local_a0,uVar7,param_5);
  plVar2 = (longlong *)*local_50;
  if (plVar2 != (longlong *)0x0) {
    lVar6 = (longlong)*(int *)(*plVar2 + 4);
    uVar3 = 4;
    if (*(longlong *)((longlong)plVar2 + lVar6 + 0x48) != 0) {
      uVar3 = local_3c;
    }
    uVar4 = *(uint *)((longlong)plVar2 + lVar6 + 0x10) & local_40 | uVar3;
    *(uint *)((longlong)plVar2 + lVar6 + 0x10) = uVar4;
    uVar1 = *(uint *)((longlong)plVar2 + lVar6 + 0x14);
    if ((uVar4 & uVar1) != local_3c) {
      puVar5 = &DAT_1802a2290;
      if ((uVar1 & uVar3) == local_3c) {
        puVar5 = &DAT_1802a22c8;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_60[0] = local_40;
      local_58 = &PTR_vftable_18020e948;
      FUN_18008bba0(local_c8,local_60,puVar5);
      local_c8[0] = &std::ios_base::failure::vftable;
      FUN_1801dd110(local_c8,&DAT_1802536a8);
    }
  }
  plVar2 = (longlong *)local_48[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != local_48);
  }
  return param_1;
}



void Unwind_180099a20(void)

{
  Unwind_1801dd394();
}



void Unwind_180099a40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  FUN_18009a990(*(undefined8 *)(param_2 + 0xa8));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xb0));
  }
  return;
}



void FUN_180099a90(longlong param_1,char param_2,exception_vftable *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_R14;
  runtime_error local_2c0;
  char local_210;
  undefined1 local_1f8 [56];
  undefined8 local_1c0;
  runtime_error local_1b8;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  exception_vftable *local_110;
  longlong local_108 [3];
  exception_vftable *peStack_f0;
  char local_e8;
  char local_e7;
  undefined8 local_d0;
  char local_c8;
  undefined7 uStack_c7;
  vfunction2 *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  int local_54;
  ulonglong local_50;
  vfunction2 *local_48;
  uint local_40;
  char local_3b;
  char local_3a;
  char local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_39 = '\t';
  local_84 = 0x65;
  local_70 = 0x20;
  local_3b = '\x01';
  local_48 = (vfunction2 *)0x0;
  local_80 = 1;
  local_68 = -8;
  local_78 = 0x28;
  local_3a = '\0';
  local_d0 = 5;
  local_60 = 0xfff;
  local_40 = 0;
  local_54 = 0xf;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 == (undefined8 *)0x0) {
    local_e7 = *(char *)(param_1 + 0xe0);
    local_108[0] = 0;
    local_108[1] = 0;
    local_108[2] = 0;
    peStack_f0 = (exception_vftable *)0x0;
    local_e8 = '\0';
    local_110 = param_3;
    FUN_1800a4d90(param_1,&local_110);
    if (param_2 != '\0') {
      iVar4 = FUN_18009ad70(param_1 + 0x48);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 != local_54) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = local_d0;
        local_90 = local_50;
        FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c);
        local_a8 = CONCAT44(CONCAT31(local_a8._5_3_,DAT_1802a3198),DAT_1802a3194);
        FUN_1800a3fb0(param_1,&local_c8,local_54,&local_a8);
        local_118 = *(undefined8 *)(param_1 + 0x78);
        local_128 = *(undefined4 *)(param_1 + 0x68);
        uStack_124 = *(undefined4 *)(param_1 + 0x6c);
        uStack_120 = *(undefined4 *)(param_1 + 0x70);
        uStack_11c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1b8,local_84,&local_128,&local_c8,0);
        FUN_1800a4920(param_1 + 0x48,&local_1b8.exception_data.offset_0x68);
        local_e8 = local_3b;
        if (local_e7 == '\x01') {
          std::runtime_error::runtime_error(&local_2c0,(longlong)&local_1b8);
          FUN_1801dd110(&local_2c0,&DAT_180253730);
        }
        if (local_50 < local_130) {
          uVar6 = local_80 + local_130;
          lVar5 = local_1b8.exception_data.offset_0x68;
          if (local_60 < uVar6) {
            lVar5 = *(longlong *)(local_1b8.exception_data.offset_0x68 + -8);
            if (local_70 <= (ulonglong)((local_1b8.exception_data.offset_0x68 + local_68) - lVar5)) goto LAB_18009a2a4;
            uVar6 = local_130 + local_78;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_1b8.vftablePtr = (runtime_error_vftable *)&PTR_exception_18020e910;
        local_1b8.exception_data.offset_0x18 = &std::exception::vftable.vfunction1;
        FUN_1801dd238(&local_1b8.exception_data.offset_0x20);
        local_1b8.vftablePtr = (runtime_error_vftable *)&std::exception::vftable;
        FUN_1801dd238(&local_1b8.exception_data);
        if (local_50 < local_b0) {
          lVar3 = CONCAT71(uStack_c7,local_c8);
          uVar6 = local_80 + local_b0;
          lVar5 = lVar3;
          if (local_60 < uVar6) {
            lVar5 = *(longlong *)(lVar3 + -8);
            if (local_70 <= (ulonglong)((lVar3 + local_68) - lVar5)) goto LAB_18009a2a4;
            uVar6 = local_b0 + local_78;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_b8 = local_48;
        local_b0 = local_50;
        local_c8 = local_3a;
        if (local_50 < local_90) {
          uVar6 = local_80 + local_90;
          lVar5 = local_a8;
          if (local_60 < uVar6) {
            lVar5 = *(longlong *)(local_a8 + -8);
            if (local_70 <= (ulonglong)((local_a8 + local_68) - lVar5)) goto LAB_18009a2a4;
            uVar6 = local_90 + local_78;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
      }
    }
    if (local_e8 == '\x01') {
      local_1b8.exception_data.offset_0x58._0_1_ = *(undefined1 *)&param_3->vfunction1;
      *(char *)&param_3->vfunction1 = local_39;
      local_1b8.exception_data.offset_0x60 = (longlong)param_3->vfunction2;
      param_3->vfunction2 = local_48;
      FUN_18007ff50(&local_1b8.exception_data.offset_0x60);
    }
    if (local_108[0] != 0) {
      uVar6 = local_108[2] - local_108[0];
      lVar5 = local_108[0];
      if (local_60 < uVar6) {
        lVar5 = *(longlong *)(local_108[0] + -8);
        if (local_70 <= (ulonglong)((local_108[0] + local_68) - lVar5)) {
LAB_18009a2a4:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_40,(uintptr_t)local_48);
        }
        uVar6 = uVar6 + 0x27;
      }
      thunk_FUN_1801f42e0(lVar5,uVar6);
    }
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xe0);
    local_1c0 = 0;
    local_1c0 = (**(code **)*puVar2)(puVar2,local_1f8);
    FUN_1800a1310(&local_2c0,param_3,local_1f8,CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar1) & 0xffffffff);
    FUN_1800a16d0(param_1,&local_2c0);
    if (param_2 != '\0') {
      iVar4 = FUN_18009ad70(param_1 + 0x48);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 != local_54) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = local_d0;
        local_90 = local_50;
        FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c);
        local_a8 = CONCAT44(CONCAT31(local_a8._5_3_,DAT_1802a3198),DAT_1802a3194);
        FUN_1800a3fb0(param_1,&local_c8,local_54,&local_a8);
        local_118 = *(undefined8 *)(param_1 + 0x78);
        local_128 = *(undefined4 *)(param_1 + 0x68);
        uStack_124 = *(undefined4 *)(param_1 + 0x6c);
        uStack_120 = *(undefined4 *)(param_1 + 0x70);
        uStack_11c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_110,local_84,&local_128,&local_c8,0);
        FUN_1800a4920(param_1 + 0x48,&local_1b8.exception_data.offset_0x68);
        local_2c0.exception_data.offset_0x60._0_1_ = local_3b;
        if (local_210 == '\x01') {
          std::runtime_error::runtime_error(&local_1b8,(longlong)&local_110);
          FUN_1801dd110(&local_1b8,&DAT_180253730);
        }
        if (local_50 < local_130) {
          uVar6 = local_80 + local_130;
          lVar5 = local_1b8.exception_data.offset_0x68;
          if (local_60 < uVar6) {
            lVar5 = *(longlong *)(local_1b8.exception_data.offset_0x68 + -8);
            if (local_70 <= (ulonglong)((local_1b8.exception_data.offset_0x68 + local_68) - lVar5)) goto LAB_18009a2a4;
            uVar6 = local_130 + local_78;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_110 = (exception_vftable *)&PTR_exception_18020e910;
        peStack_f0 = &std::exception::vftable;
        FUN_1801dd238(&local_e8);
        local_110 = &std::exception::vftable;
        FUN_1801dd238(local_108);
        if (local_50 < local_b0) {
          lVar3 = CONCAT71(uStack_c7,local_c8);
          uVar6 = local_80 + local_b0;
          lVar5 = lVar3;
          if (local_60 < uVar6) {
            lVar5 = *(longlong *)(lVar3 + -8);
            if (local_70 <= (ulonglong)((lVar3 + local_68) - lVar5)) goto LAB_18009a2a4;
            uVar6 = local_b0 + local_78;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_b8 = local_48;
        local_b0 = local_50;
        local_c8 = local_3a;
        if (local_50 < local_90) {
          uVar6 = local_80 + local_90;
          lVar5 = local_a8;
          if (local_60 < uVar6) {
            lVar5 = *(longlong *)(local_a8 + -8);
            if (local_70 <= (ulonglong)((local_a8 + local_68) - lVar5)) goto LAB_18009a2a4;
            uVar6 = local_90 + local_78;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
      }
    }
    if ((char)local_2c0.exception_data.offset_0x60 == '\x01') {
      local_1b8.exception_data.offset_0x38._0_1_ = *(undefined1 *)&param_3->vfunction1;
      *(char *)&param_3->vfunction1 = local_39;
      local_1b8.exception_data.offset_0x40 = (longlong)param_3->vfunction2;
      param_3->vfunction2 = local_48;
      FUN_18007ff50(&local_1b8.exception_data.offset_0x40);
    }
    else if (*(char *)&param_3->vfunction1 == local_39) {
      *(char *)&param_3->vfunction1 = local_3a;
      local_1b8.exception_data._72_1_ = local_39;
      local_1b8.exception_data.offset_0x50 = (uintptr_t)param_3->vfunction2;
      param_3->vfunction2 = local_48;
      FUN_18007ff50(&local_1b8.exception_data.offset_0x50,local_39);
    }
    FUN_1800a4bb0(&local_2c0);
  }
  return;
}



void Unwind_18009a310(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(param_2 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xf0));
  }
  return;
}



void Unwind_18009a360(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_18009a3a0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x1d8));
  return;
}



void Unwind_18009a3e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x220);
  return;
}



void Unwind_18009a420(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x240);
  return;
}



void Unwind_18009a460(void)

{
  Unwind_1801dd394();
}



void Unwind_18009a480(undefined8 param_1,longlong param_2)

{
  FUN_1800a4bb0(param_2 + 0x28);
  return;
}



void Unwind_18009a4b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_18009a4f0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x130));
  return;
}



void Unwind_18009a530(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x220);
  return;
}



void Unwind_18009a570(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x240);
  return;
}



void Unwind_18009a5b0(void)

{
  Unwind_1801dd394();
}



void Unwind_18009a5d0(undefined8 param_1,longlong param_2)

{
  FUN_1800a7140(param_2 + 0x1d8);
  return;
}



void Unwind_18009a610(void)

{
  Unwind_1801dd394();
}



void FUN_18009a630(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;

  local_58 = 0x4602add387a47899;
  local_60 = 0x93ccba4b079d9a31;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x8fd58d1ed4ffa91c;
        if (uVar1 != 0x8279375f7a247266) break;
        (**(code **)(*local_48 + 0x20))
                  (local_48,CONCAT71((int7)((local_58 ^ 0x8fd58d1ed4ffa91c) >> 8),local_48 != param_1));
        *local_50 = 0;
        local_58 = 0x7990a10687aea2cd;
        local_60 = 0x3e9538412478072d;
      }
      if (uVar1 != 0xd5ce17988039e2a8) break;
      FUN_18009aad0(param_1 + 9);
      local_50 = param_1 + 7;
      local_48 = (longlong *)param_1[7];
      local_58 = 0xff7c9e64375cf3fe;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0x3a00307ceeae2478;
      }
      local_60 = 0x7d05a93b4d788198;
    }
    local_58 = local_58 ^ 0x8fd58d1ed4ffa91c;
  } while (uVar1 != 0x47059947a3d6a5e0);
  return;
}



longlong FUN_18009a760(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,undefined1 param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;

  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar5 = (undefined8 *)param_3[7];
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar5)(puVar5,param_1);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 0x58) = param_5;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0xf;
  *(undefined **)(param_1 + 0xb8) = &DAT_18020c3c0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  puVar5 = (undefined8 *)FUN_1801e13d8();
  iVar2 = 0x2e;
  if ((char *)*puVar5 != (char *)0x0) {
    iVar2 = (int)*(char *)*puVar5;
  }
  *(int *)(param_1 + 0xd8) = iVar2;
  *(undefined1 *)(param_1 + 0xe0) = param_4;
  uVar3 = FUN_18009ad70(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
  }
  return param_1;
}



void Unwind_18009a8b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;

  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}



void Unwind_18009a900(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;

  FUN_18009aad0(*(undefined8 *)(param_2 + 0x20));
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}



void Unwind_18009a950(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x28));
  }
  return;
}



void FUN_18009a990(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  failure_vftable *local_60 [5];
  undefined4 local_38 [2];
  undefined **local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_28 = 1;
  local_24 = 0;
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    lVar5 = (longlong)*(int *)(*param_1 + 4);
    uVar2 = 4;
    if (*(longlong *)((longlong)param_1 + lVar5 + 0x48) != 0) {
      uVar2 = 0;
    }
    uVar3 = *(uint *)((longlong)param_1 + lVar5 + 0x10) & 1 | uVar2;
    *(uint *)((longlong)param_1 + lVar5 + 0x10) = uVar3;
    uVar1 = *(uint *)((longlong)param_1 + lVar5 + 0x14);
    if ((uVar3 & uVar1) != 0) {
      puVar4 = &DAT_1802a2290;
      if ((uVar1 & uVar2) == 0) {
        puVar4 = &DAT_1802a22c8;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_38[0] = local_28;
      local_30 = &PTR_vftable_18020e948;
      FUN_18008bba0(local_60,local_38,puVar4);
      local_60[0] = &std::ios_base::failure::vftable;
      FUN_1801dd110(local_60,&DAT_1802536a8);
    }
  }
  return;
}



void Unwind_18009aab0(void)

{
  Unwind_1801dd394();
}



void FUN_18009aad0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong lVar8;
  failure_vftable *local_88 [5];
  uint local_60 [2];
  undefined **local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  uintptr_t local_30;
  uint local_28;
  uint local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_48 = 0x20;
  local_30 = 0;
  local_40 = -8;
  local_28 = 1;
  local_38 = 0xfff;
  local_24 = 0;
  uVar6 = param_1[0xd];
  if (0xf < uVar6) {
    lVar8 = param_1[10];
    uVar5 = uVar6 + 1;
    lVar3 = lVar8;
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(lVar8 + -8);
      if (0x1f < (ulonglong)((lVar8 + -8) - lVar3)) goto LAB_18009ad31;
      uVar5 = uVar6 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar3,uVar5);
  }
  param_1[0xc] = local_30;
  param_1[0xd] = local_50;
  *(undefined1 *)(param_1 + 10) = 0;
  lVar8 = param_1[7];
  if (lVar8 != 0) {
    uVar6 = param_1[9] - lVar8;
    lVar3 = lVar8;
    if (local_38 < uVar6) {
      lVar3 = *(longlong *)(lVar8 + -8);
      if (local_48 <= (ulonglong)((lVar8 + local_40) - lVar3)) {
LAB_18009ad31:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_24,local_30);
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar6);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    lVar8 = (longlong)*(int *)(*param_1 + 4);
    uVar2 = 4;
    if (*(longlong *)((longlong)param_1 + lVar8 + 0x48) != 0) {
      uVar2 = local_24;
    }
    uVar4 = *(uint *)((longlong)param_1 + lVar8 + 0x10) & local_28 | uVar2;
    *(uint *)((longlong)param_1 + lVar8 + 0x10) = uVar4;
    uVar1 = *(uint *)((longlong)param_1 + lVar8 + 0x14);
    if ((uVar4 & uVar1) != local_24) {
      puVar7 = &DAT_1802a2290;
      if ((uVar1 & uVar2) == local_24) {
        puVar7 = &DAT_1802a22c8;
      }
      FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
      FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
      local_60[0] = local_28;
      local_58 = &PTR_vftable_18020e948;
      FUN_18008bba0(local_88,local_60,puVar7);
      local_88[0] = &std::ios_base::failure::vftable;
      FUN_1801dd110(local_88,&DAT_1802536a8);
    }
  }
  return;
}



void Unwind_18009ad50(void)

{
  Unwind_1801dd394();
}



undefined4 FUN_18009ad70(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_c0;
  ulonglong local_b8;
  int local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  char *local_50;
  int *local_48;

  local_b8 = 0x4b8e218205354231;
  local_c0 = 0x1665f153457eea3f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar5 = local_b8 ^ 0x1dc57a86aad08d42;
                uVar4 = local_b8 ^ local_c0;
                local_c0 = local_c0 ^ 0x1dc57a86aad08d42;
                local_b8 = uVar5;
                if (0x13df7f2a756b93 < (longlong)uVar4) break;
                if ((longlong)uVar4 < -0x31bd31f1d7bca4bf) {
                  if ((longlong)uVar4 < -0x5cce686b9b9ea2e1) {
                    if ((longlong)uVar4 < -0x6c5c53dab130cc69) {
                      if (uVar4 == 0x8a09ee636cff56a9) {
                        *local_70 = local_68 + local_88;
                        local_b8 = 0xbf72d7618a238d1;
                        local_c0 = 0x448dcf7496bf989a;
                      }
                      else if (uVar4 == 0x8d89c674f6fd0ca6) {
                        uVar3 = FUN_18009f4a0(param_1);
                        local_b8 = 0xcd2d61a5f7dda52e;
                        if ((uVar3 & local_a4) == local_9c) {
                          local_b8 = 0x9c759798ea8feb8d;
                        }
                        local_c0 = 0xe1b7e2b35b29e295;
                      }
                      else if (uVar4 == 0x8f06dc24263eb154) {
                        uVar3 = FUN_18009f4a0(param_1);
                        local_b8 = 0x52f8a3553a2e073a;
                        if ((uVar3 & local_a4) == local_90) {
                          local_b8 = 0x685602fd46ba2bc9;
                        }
                        local_a8 = 2;
                        local_c0 = 0x7e62204396da4081;
                      }
                    }
                    else if ((longlong)uVar4 < -0x65bb072257df58a6) {
                      if (uVar4 == 0x93a3ac254ecf3397) {
                        local_ac = local_8c;
                        local_b8 = 0x7bb625cb1b442431;
                        local_c0 = 0x98e5beada9615ec5;
                      }
                      else if (uVar4 == 0x97e317af20ab6cc7) {
                        FUN_18009c450(param_1);
                        local_50 = (char *)(param_1 + 0x10);
                        local_48 = (int *)(param_1 + 0x14);
                        local_8c = *(int *)(param_1 + 0x14);
                        local_b8 = 0x9b368ef59b51446e;
                        if (local_8c == local_98) {
                          local_b8 = 0xad559fb43aa29757;
                        }
                        if (*(char *)(param_1 + 0x10) == '\0') {
                          local_b8 = 0x9b368ef59b51446e;
                        }
                        local_c0 = 0x89522d0d59e77f9;
                      }
                    }
                    else if (uVar4 == 0x9a44f8dda820a75a) {
                      local_a8 = 0xb;
                      local_b8 = 0x686a1826806cde5c;
                      local_c0 = 0x7e5e3a98500cb514;
                    }
                    else if (uVar4 == 0x9cd01a2eaf3dcddd) {
                      local_b8 = 0xd2a2be714d1722b4;
                      if (local_ac == 0x2d) {
                        local_b8 = 0x243f77a48a1983ba;
                      }
                      local_c0 = 0xd2b1610e67624920;
                    }
                  }
                  else if ((longlong)uVar4 < -0x4a8ec450794557c0) {
                    if ((longlong)uVar4 < -0x5113297cc0fcb08b) {
                      if (uVar4 == 0xa331979464615d1f) {
                        local_b8 = 0x6ddaf67607fbe26f;
                        if (local_ac < 0x5d) {
                          local_b8 = 0x8622ff629decc22a;
                        }
                        local_c0 = 0xa2c3eb8977d5ba72;
                      }
                      else if (uVar4 == 0xa5c0bd64ef3ce0ae) {
                        cVar1 = FUN_18009cfc0(param_1);
                        local_b8 = 0xd87556612b982b38;
                        if (cVar1 != '\0') {
                          local_b8 = 0xa72de6d7abf976e1;
                        }
                        local_c0 = 0xce4174dffbf84070;
                        local_a8 = local_a0;
                      }
                    }
                    else if (uVar4 == 0xaeecd6833f034f75) {
                      local_b8 = 0xe33b7277d4791fd1;
                      if (local_ac == 0x74) {
                        local_b8 = 0xdbcb02913ae9f23;
                      }
                      local_c0 = 0xe328ad08fe0c7445;
                    }
                    else if (uVar4 == 0xb104274a8eb82c64) {
                      local_b8 = 0xc75dedd53c2f394;
                      if (local_ac < 0x2d) {
                        local_b8 = 0xa8d637b9c9ba0960;
                      }
                      local_c0 = 0x58021bfd6e6bce44;
                    }
                  }
                  else if ((longlong)uVar4 < -0x38df727a083aad63) {
                    if (uVar4 == 0xb5713baf86baa840) {
                      FUN_1800b8f52(&DAT_1802a24f0,&DAT_180273745,0x19,0x10,&DAT_1802a2500);
                      *(undefined **)(param_1 + 0x70) = &DAT_1802a24f0;
                      local_b8 = 0xdcfd29152f76f8bf;
                      local_c0 = 0xcac90babff1693f7;
                      local_a8 = local_a0;
                    }
                    else if (uVar4 == 0xb7548d58dbe2749d) {
                      uVar3 = FUN_18009f4a0(param_1);
                      local_b8 = 0xd0352746be5197e5;
                      if ((uVar3 & local_a4) == local_94) {
                        local_b8 = 0xa264916ccf2e6d38;
                      }
                      local_c0 = 0x65441ce938eb3fa5;
                    }
                  }
                  else if (uVar4 == 0xc7208d85f7c5529d) {
                    uVar3 = FUN_18009f4a0(param_1);
                    local_b8 = 0x6dc2b2dc4741956f;
                    if ((uVar3 & local_a4) == local_9c) {
                      local_b8 = 0xc073e22648dc189f;
                    }
                    local_c0 = 0xd8b38973c1fb3d2f;
                  }
                  else if (uVar4 == 0xcc225a77ad9bb81d) {
                    local_b8 = 0x92f962215bfe9653;
                    if (local_ac < 0x7b) {
                      local_b8 = 0xd2d9ec8a03c9139e;
                    }
                    local_c0 = 0x875cb5940357a5d1;
                  }
                }
                else if ((longlong)uVar4 < -0x116be2de125d149a) {
                  if ((longlong)uVar4 < -0x21ea066cde8a1557) {
                    if ((longlong)uVar4 < -0x2e260c94fdd56ea2) {
                      if (uVar4 == 0xce42ce0e28435b41) {
                        local_b8 = 0x4cc36b377c8f17d7;
                        if (local_ac < 0x2c) {
                          local_b8 = 0x1184de3c41287e1e;
                        }
                        local_c0 = 0x33a7fee7c76741c4;
                      }
                      else if (uVar4 == 0xcf191dff702e581d) {
                        local_b8 = 0xd836dd6d070a3f2a;
                        if (local_ac < 0x66) {
                          local_b8 = 0xe8d85dd80ddaaad2;
                        }
                        local_c0 = 0xa31aaca2c5c798dd;
                      }
                    }
                    else if (uVar4 == 0xd1d9f36b022a915e) {
                      local_b8 = 0xc5dae7313714b0c5;
                      if (local_ac == 0x7d) {
                        local_b8 = 0x5f8dc093b5417c0b;
                      }
                      local_c0 = 0xc5c9384e1d61db51;
                    }
                    else if (uVar4 == 0xddcb0b31fff3945e) {
                      local_a8 = FUN_18009d7f0(param_1);
                      local_b8 = 0x2fae16ff22a90c63;
                      local_c0 = 0x399a3441f2c9672b;
                    }
                  }
                  else if ((longlong)uVar4 < -0x1cac64994dda850c) {
                    if (uVar4 == 0xde15f9932175eaa9) {
                      local_a8 = 9;
                      local_b8 = 0x6a58d9085ea9a43c;
                      local_c0 = 0x7c6cfbb68ec9cf74;
                    }
                    else if (uVar4 == 0xde7635ddf69d468b) {
                      FUN_1800b8f52(&DAT_1802a24f0,&DAT_180273745,0x19,0x10,&DAT_1802a2500);
                      *(undefined **)(param_1 + 0x70) = &DAT_1802a24f0;
                      local_b8 = 0xbe254e3ee9004f5e;
                      local_c0 = 0xa8116c8039602416;
                      local_a8 = local_a0;
                    }
                  }
                  else if (uVar4 == 0xe3539b66b2257af4) {
                    local_b8 = 0x1924351bcc2157fc;
                    if (local_ac < 0x5b) {
                      local_b8 = 0xcc6e0f3dc4cec536;
                    }
                    local_c0 = 0x7d6a28774a76e952;
                  }
                  else if (uVar4 == 0xe453a524187c0672) {
                    iVar2 = FUN_18009f4a0(param_1);
                    local_b8 = 0x6e7a2c5ec20097bc;
                    if (iVar2 == 0xef) {
                      local_b8 = 0x8633f9dbecc923d4;
                    }
                    local_c0 = 0x7403f3f6fbe69389;
                  }
                }
                else if ((longlong)uVar4 < -0x971e95512843566) {
                  if ((longlong)uVar4 < -0xdcff5d2e8d04fa3) {
                    if (uVar4 == 0xee941d21eda2eb66) {
                      uVar3 = FUN_18009f4a0(param_1);
                      local_b8 = 0x282374914b387706;
                      if ((uVar3 & local_a4) == 0x72) {
                        local_b8 = 0x9af760449f9242ac;
                      }
                      local_c0 = 0xf655414cbda5318d;
                    }
                    else if (uVar4 == 0xf0d42c44a7d1c724) {
                      local_b8 = 0x5c6b2a63b29552b;
                      if (local_ac < 0x22) {
                        local_b8 = 0x8c5063b136342b48;
                      }
                      local_c0 = 0xcb847ca8136a0e6a;
                    }
                  }
                  else if (uVar4 == 0xf2300a2d172fb05d) {
                    iVar2 = FUN_18009f4a0(param_1);
                    local_b8 = 0x4ebb1a48108da4c3;
                    if (iVar2 == 0xbb) {
                      local_b8 = 0xf9bb502b87b1c7;
                    }
                    local_c0 = 0x670c3437d420b6ae;
                  }
                  else if (uVar4 == 0xf24f433fbddad05d) {
                    uVar3 = FUN_18009f4a0(param_1);
                    local_b8 = 0x93314ac2e6352e9;
                    if ((uVar3 & local_a4) == 0x61) {
                      local_b8 = 0xa82051ce746a19f4;
                    }
                    local_c0 = 0x25a997ba82971552;
                  }
                }
                else if ((longlong)uVar4 < -0x47095b513a24f10) {
                  if (uVar4 == 0xf68e16aaed7bca9a) {
                    local_a8 = FUN_18009eb90(param_1);
                    local_b8 = 0x60a9c4dd91412e01;
                    local_c0 = 0x769de66341214549;
                  }
                  else if (uVar4 == 0xf8c0d62b7b3c3025) {
                    *local_60 = local_58 + local_88;
                    local_b8 = 0x6b13160a7b1b7739;
                    local_c0 = 0x2469f408f506d772;
                  }
                }
                else if (uVar4 == 0xfb8f6a4aec5db0f0) {
                  local_a8 = 10;
                  local_b8 = 0x2f65c8d986301e93;
                  local_c0 = 0x3951ea67565075db;
                }
                else if (uVar4 == 0xfba2b7ebd75f6d14) {
                  local_b8 = 0x241d27262746842b;
                  if (local_ac == 0x3a) {
                    local_b8 = 0x612429a008e8d164;
                  }
                  local_c0 = 0x240ef8590d33efbf;
                }
              }
              if ((longlong)uVar4 < 0x5477c5203da93dd0) break;
              if ((longlong)uVar4 < 0x6ca2210822377321) {
                if ((longlong)uVar4 < 0x5debd0d1404ba80e) {
                  if (uVar4 == 0x5477c5203da93dd0) {
                    local_b8 = 0xf0ca2d08ad1985cc;
                    if (local_ac < 0x30) {
                      local_b8 = 0x31163a09cd93c317;
                    }
                    local_c0 = 0xadc6202762ae0eca;
                  }
                  else if (uVar4 == 0x5585591e009eb64f) {
                    local_b8 = 0xaab42440552d272a;
                    if (local_ac < 0x74) {
                      local_b8 = 0x4220437c8e8b6212;
                    }
                    local_c0 = 0x458f2c36a2e685f;
                  }
                  else if (uVar4 == 0x5d0c0d2fcfb78b06) {
                    local_b8 = 0xa5168f638964b95f;
                    if (local_ac < 0x3a) {
                      local_b8 = 0xa83a2e22b3401ed1;
                    }
                    local_c0 = 0x5eb438885e3bd44b;
                  }
                }
                else if ((longlong)uVar4 < 0x67f58f67ffa70769) {
                  if (uVar4 == 0x5debd0d1404ba80e) {
                    local_90 = 0x65;
                    local_80 = 0;
                    local_88 = -1;
                    local_94 = 0x75;
                    local_98 = 0x2f;
                    local_a4 = 0xff;
                    local_a0 = 0xe;
                    local_9c = 0x6c;
                    local_78 = (longlong *)(param_1 + 0x20);
                    local_b8 = 0x3879df5aded29b9d;
                    if (*(longlong *)(param_1 + 0x20) == 0) {
                      local_b8 = 0x4bc96dd1e605f128;
                    }
                    local_c0 = 0xaf9ac8f5fe79f75a;
                  }
                  else if (uVar4 == 0x644e1d6c8657beae) {
                    local_b8 = 0x39d4ffc4612646f6;
                    if (local_ac < 0x6e) {
                      local_b8 = 0x56c73227a8dca3f4;
                    }
                    local_c0 = 0xf5f6a5b3ccbdfeeb;
                  }
                }
                else if (uVar4 == 0x67f58f67ffa70769) {
                  iVar2 = FUN_18009f4a0(param_1);
                  local_b8 = 0x34925ac246ffa844;
                  if (iVar2 == 0xbf) {
                    local_b8 = 0x8ac66312a2f9d6ee;
                  }
                  local_c0 = 0x1d2574bd8252ba29;
                }
                else if (uVar4 == 0x696c920850013691) {
                  FUN_18009c450(param_1);
                  local_8c = *local_48;
                  local_b8 = 0xb30c985ddae508ad;
                  if (local_8c == local_98) {
                    local_b8 = 0x856f891c7b16db94;
                  }
                  if (*local_50 == '\0') {
                    local_b8 = 0xb30c985ddae508ad;
                  }
                  local_c0 = 0x20af3478942a3b3a;
                }
              }
              else if ((longlong)uVar4 < 0x7b2c71cfc2cda7f7) {
                if ((longlong)uVar4 < 0x777d5528e350faa1) {
                  if (uVar4 == 0x6ca2210822377321) {
                    uVar3 = FUN_18009f4a0(param_1);
                    local_b8 = 0xeef636291ccd00db;
                    if ((uVar3 & local_a4) == local_94) {
                      local_b8 = 0x47fd56dc0900bcf1;
                    }
                    local_c0 = 0x308003f4ea504650;
                  }
                  else if (uVar4 == 0x70e82588fa401e31) {
                    local_b8 = 0xeca4e5ef2e8a6c79;
                    if (local_ac == 0x7b) {
                      local_b8 = 0x32a2c303258aed44;
                    }
                    local_c0 = 0xecb73a9004ff07ed;
                  }
                }
                else if (uVar4 == 0x777d5528e350faa1) {
                  uVar3 = FUN_18009f4a0(param_1);
                  local_b8 = 0x6693a812f9930e21;
                  if ((uVar3 & local_a4) == local_90) {
                    local_b8 = 0xaed1bf71df6e23e2;
                  }
                  local_a8 = 1;
                  local_c0 = 0xb8e59dcf0f0e48aa;
                }
                else if (uVar4 == 0x7a3cb280a58cab5d) {
                  local_a8 = 0xf;
                  local_b8 = 0x13c1f535038a40c7;
                  local_c0 = 0x5f5d78bd3ea2b8f;
                }
              }
              else if ((longlong)uVar4 < 0x7dc2752bb1a60918) {
                if (uVar4 == 0x7b2c71cfc2cda7f7) {
                  local_b8 = 0xfdfc4a4978b240c;
                  if (local_ac == 0x66) {
                    local_b8 = 0xfd8358e400249fc5;
                  }
                  local_c0 = 0xfcc1bdbbdfe4f98;
                }
                else if (uVar4 == 0x7d856e334c3ce500) {
                  FUN_1800b8f52(&DAT_1802a24f0,&DAT_180273745,0x19,0x10,&DAT_1802a2500);
                  *(undefined **)(param_1 + 0x70) = &DAT_1802a24f0;
                  local_b8 = 0x791357ddd6fb8e1;
                  local_c0 = 0x11a517c30d0fd3a9;
                  local_a8 = local_a0;
                }
              }
              else if (uVar4 == 0x7dc2752bb1a60918) {
                uVar3 = FUN_18009f4a0(param_1);
                local_b8 = 0x50f58db4f4d521da;
                if ((uVar3 & local_a4) == 0x73) {
                  local_b8 = 0xf369d2867e1fd735;
                }
                local_c0 = 0x7c6f0ea258216661;
              }
              else if (uVar4 == 0x7f6495d0bbe85613) {
                local_a8 = 0xd;
                local_b8 = 0x6c1e54a6a68707e3;
                local_c0 = 0x7a2a761876e76cab;
              }
            }
            if ((longlong)uVar4 < 0x2c9a8316acf447bb) break;
            if ((longlong)uVar4 < 0x4678b1bfe4a50a4d) {
              if ((longlong)uVar4 < 0x39daadedd26b1ce2) {
                if (uVar4 == 0x2c9a8316acf447bb) {
                  FUN_1800b8f52(&DAT_1802a24f0,&DAT_180273745,0x19,0x10,&DAT_1802a2500);
                  *(undefined **)(param_1 + 0x70) = &DAT_1802a24f0;
                  local_b8 = 0x961ff68163b181d0;
                  local_c0 = 0x802bd43fb3d1ea98;
                  local_a8 = local_a0;
                }
                else if (uVar4 == 0x31dd880fad35e37c) {
                  local_70 = (longlong *)(param_1 + 0x30);
                  local_68 = *(longlong *)(param_1 + 0x30);
                  local_b8 = 0x123530a0bc77c33b;
                  if (local_68 == local_80) {
                    local_b8 = 0xd7463cc15e9535d9;
                  }
                  local_c0 = 0x983cdec3d0889592;
                }
              }
              else if (uVar4 == 0x39daadedd26b1ce2) {
                *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
                local_b8 = 0x9e69f8813a4db6d8;
                local_c0 = 0x98aef2e1ae6da1f;
              }
              else if (uVar4 == 0x452ad1f905db3edb) {
                local_a8 = 0xc;
                local_b8 = 0x45c428514d66af22;
                local_c0 = 0x53f00aef9d06c46a;
              }
            }
            else if ((longlong)uVar4 < 0x4bc2f17ac81d320f) {
              if (uVar4 == 0x4678b1bfe4a50a4d) {
                local_b8 = 0x20dc0a0c88a0e6a2;
                if (local_ac == 0x6e) {
                  local_b8 = 0x979b582b7937f9ab;
                }
                local_c0 = 0x20cfd573a2d58d36;
              }
              else if (uVar4 == 0x47d41f19255e2522) {
                local_b8 = 0xf5006b65d0301c0b;
                if (local_ac + 1U < 2) {
                  local_b8 = 0x8f2f069a5fc9dcc2;
                }
                local_c0 = 0xf513b41afa45779f;
              }
            }
            else if (uVar4 == 0x4bc2f17ac81d320f) {
              local_b8 = 0xf4405a50243b6f6d;
              if (local_ac == 0x5d) {
                local_b8 = 0xfdcef65e213b409;
              }
              local_c0 = 0xf453852f0e4e04f9;
            }
            else if (uVar4 == 0x4f7ae2028e1da04b) {
              local_b8 = 0x363ef0200ab0f02a;
              if (*(int *)(param_1 + 0x14) == -1) {
                local_b8 = 0x98074a62f870800f;
              }
              local_c0 = 0xfe45dcdd8dbecc8;
            }
          }
          if ((longlong)uVar4 < 0x1a79dfa839e60435) break;
          if ((longlong)uVar4 < 0x24e114ebea397858) {
            if (uVar4 == 0x1a79dfa839e60435) {
              *(undefined1 *)(param_1 + 0x18) = 1;
              *local_78 = *local_78 + local_88;
              local_60 = (longlong *)(param_1 + 0x28);
              local_58 = *(longlong *)(param_1 + 0x28);
              local_b8 = 0x6bc43de421addab8;
              if (local_58 == local_80) {
                local_b8 = 0xa2d963c0f7a409e1;
              }
              local_c0 = 0x9304ebcf5a91ea9d;
            }
            else if (uVar4 == 0x222320db864f3fda) {
              local_b8 = 0xa72b65e307639fd1;
              if (local_ac == 0x22) {
                local_b8 = 0x7af3b1add2e5601b;
              }
              local_c0 = 0xa738ba9c2d16f445;
            }
          }
          else if (uVar4 == 0x24e114ebea397858) {
            local_b8 = 0xcd271fbfe07b23bb;
            if (local_ac == 0x5b) {
              local_b8 = 0xdb00e27e1a6e2367;
            }
            local_c0 = 0xcd34c0c0ca0e482f;
            local_a8 = 8;
          }
          else if (uVar4 == 0x29b72e7fc4ad126d) {
            FUN_1800b8f52(&DAT_1802a24bc,&DAT_1802736e1,0x1b,0x2d,&DAT_1802a24ec);
            *(undefined **)(param_1 + 0x70) = &DAT_1802a24bc;
            local_b8 = 0x368fe037a44b1f25;
            local_c0 = 0x20bbc289742b746d;
            local_a8 = local_a0;
          }
        }
        if (0x163422bed0606b47 < (longlong)uVar4) break;
        if (uVar4 == 0x13df7f2a756b94) {
          local_b8 = 0xa0f1501636e41798;
          local_c0 = 0xdd743e257ad8f298;
        }
        else if (uVar4 == 0x15a5d7b558a93382) {
          local_b8 = 0x1dbd7375a21dcc2f;
          if (local_ac < 0x7d) {
            local_b8 = 0xbc8ca5965a774340;
          }
          local_c0 = 0xcc64801ea0375d71;
        }
      }
      if (uVar4 != 0x18c06b55892725b0) break;
      uVar3 = FUN_18009f4a0(param_1);
      local_b8 = 0x22a7587993fa8897;
      if ((uVar3 & local_a4) == local_9c) {
        local_b8 = 0x81e24168c5204b9f;
      }
      local_a8 = 3;
      local_c0 = 0x97d663d6154020d7;
    }
  } while (uVar4 != 0x163422bed0606b48);
  return local_a8;
}



void FUN_18009c450(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined1 auStack_178 [32];
  undefined *local_158;
  ulonglong local_148;
  ulonglong local_140;
  uint local_138;
  undefined1 local_131;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint *local_118;
  int local_10c;
  uint local_108;
  uint local_104;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  int *local_b0;
  longlong *local_a8;
  undefined1 local_99;
  uint local_98 [2];
  undefined **local_90;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_178;
  local_140 = 0xeb336f83212ad2f5;
  local_148 = 0xdb83850791adc005;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_140 ^ 0x8aea18386fabc553;
              uVar3 = local_140 ^ local_148;
              local_148 = local_148 ^ 0x8aea18386fabc553;
              local_140 = uVar5;
              if (0x920851458cea50d < (longlong)uVar3) break;
              if ((longlong)uVar3 < -0x38e351ef50c3b70a) {
                if ((longlong)uVar3 < -0x5f1dca740dabc7fc) {
                  if (uVar3 == 0x88fd42f32a99bbfd) {
                    local_128 = (**(code **)(*local_f0 + 0x38))();
                    local_140 = 0xf58933bb0f5a7690;
                    if (local_128 == local_12c) {
                      local_140 = 0x3ce41c4d2718237d;
                    }
                    local_148 = 0x2dec416b03990c2d;
                  }
                  else if (uVar3 == 0x8d8d523c97b10eae) {
                    *local_e8 = local_131;
                    *local_f8 = *local_f8 + 1;
                    local_140 = 0x1552fbd27e721848;
                    local_148 = 0x152e3fca6627b1ea;
                  }
                  else if (uVar3 == 0x958b55642485436a) {
                    local_140 = 0x4ebee6912c451fc8;
                    if (local_138 == 0x20) {
                      local_140 = 0x6951c54705638bd4;
                    }
                    local_148 = 0xbfa8c0767ff0ffd;
                  }
                }
                else if (uVar3 == 0xa0e2358bf2543804) {
                  local_b0 = (int *)local_f0[10];
                  local_10c = *local_b0;
                  local_140 = 0x7ed9e15e2fdb3e35;
                  if ((int)local_130 < local_10c) {
                    local_140 = 0xd2a2091f4fc98d5d;
                  }
                  local_148 = 0xf624a3ad054285c8;
                }
                else if (uVar3 == 0xad991f27823f719f) {
                  local_f0 = (longlong *)*local_d0;
                  local_a8 = local_f0 + 7;
                  local_140 = 0xf53d50fd3e78bb1e;
                  if (*(longlong *)local_f0[7] == 0) {
                    local_140 = 0xdd222785e6b538e7;
                  }
                  local_148 = 0x55df6576cc2c831a;
                }
                else if (uVar3 == 0xb75d4f130bdedf60) {
                  local_140 = 0xd0b27f34ae6042a4;
                  local_148 = 0x8d70de4a2a33819;
                  local_128 = local_12c;
                }
              }
              else if ((longlong)uVar3 < -0x10f2d1ee691c63cd) {
                if (uVar3 == 0xc71cae10af3c48f6) {
                  local_131 = (undefined1)local_104;
                  local_e8 = (undefined1 *)*local_f8;
                  local_140 = 0xdd5769fbac699c2;
                  if (local_e8 == (undefined1 *)*local_c8) {
                    local_140 = 0xc1ddc0f36c89b021;
                  }
                  local_148 = 0x805824a32d77976c;
                  local_99 = local_131;
                }
                else if (uVar3 == 0xd86572d00cc37abd) {
                  *local_118 = local_128;
                  local_140 = 0x5134df76d2b7fc6c;
                  local_148 = 0x40ca0421b6ef13ae;
                  local_11c = local_128;
                }
                else if (uVar3 == 0xea610be8d3eb483b) {
                  *local_b8 = *local_b8 + 1;
                  *local_d8 = 0;
                  local_140 = 0xdd7b6d6e42e0a983;
                  local_148 = 0xbfd0242e207c2daa;
                }
              }
              else if ((longlong)uVar3 < 0x7cc4181855a9a2) {
                if (uVar3 == 0xef0d2e1196e39c33) {
                  *(char *)local_100 = '\0';
                  local_11c = *local_118;
                  local_140 = 0xb85f46094501c3c5;
                  local_148 = 0xa9a19d5e21592c07;
                }
                else if (uVar3 == 0xf62b52befffa9e52) {
                  *local_e0 = *local_e0 + 1;
                  local_e0[1] = local_e0[1] + 1;
                  local_140 = 0x5ec11c22f0a2f6f6;
                  if ((char)*local_100 != '\0') {
                    local_140 = 0x1c552d14e47e1b5a;
                  }
                  local_148 = 0xf3580305729d8769;
                }
              }
              else if (uVar3 == 0x7cc4181855a9a2) {
                local_138 = *local_118;
                local_140 = 0x8344480f8aa6b17;
                local_148 = 0x7f933240e0daacee;
              }
              else if (uVar3 == 0x66498fe224d1024) {
                if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_178)) {
                }
                return;
              }
            }
            if (0x45446a964bba1034 < (longlong)uVar3) break;
            if ((longlong)uVar3 < 0x13794959bf0f26ed) {
              if (uVar3 == 0x920851458cea50e) {
                local_140 = 0x5b7bcc144453b9c9;
                if ((int)local_138 < 10) {
                  local_140 = 0x27f64aa4779d20a1;
                }
                local_148 = 0x348f03fdc892064c;
              }
              else if (uVar3 == 0x11085d2624812f50) {
                plVar2 = (longlong *)*param_1;
                lVar6 = (longlong)*(int *)(*plVar2 + 4);
                uVar4 = local_120;
                if (*(longlong *)((longlong)plVar2 + lVar6 + 0x48) != 0) {
                  uVar4 = local_130;
                }
                uVar4 = *(uint *)((longlong)plVar2 + lVar6 + 0x10) & 0x16 | uVar4 | local_124;
                *(uint *)((longlong)plVar2 + lVar6 + 0x10) = uVar4;
                local_108 = uVar4 & *(uint *)((longlong)plVar2 + lVar6 + 0x14);
                local_140 = 0xe8cc1b6b76c4b328;
                if (local_108 == local_130) {
                  local_140 = 0x3bafdd110ae3362e;
                }
                local_148 = 0x8cf29202013de94e;
              }
              else if (uVar3 == 0x11fedb576458efc2) {
                local_104 = local_11c;
                local_140 = 0x463cde05700b9d79;
                if (local_11c == local_12c) {
                  local_140 = 0x8744e8ebfd7ac5ab;
                }
                local_148 = 0x81207015df37d58f;
              }
            }
            else if ((longlong)uVar3 < 0x30b0ea84b08712f0) {
              if (uVar3 == 0x13794959bf0f26ed) {
                local_140 = 0x9dd2c2228a057096;
                if (local_138 == 9) {
                  local_140 = 0xba3de1f4a323e48a;
                }
                local_148 = 0xd896a8b4c1bf60a3;
              }
              else if (uVar3 == 0x2486aab24a8b0895) {
                *local_b0 = local_10c + local_12c;
                pbVar1 = *(byte **)*local_a8;
                *(byte **)*local_a8 = pbVar1 + 1;
                local_128 = (uint)*pbVar1;
                local_140 = 0x9b7e09d61002f919;
                local_148 = 0x431b7b061cc183a4;
              }
            }
            else if (uVar3 == 0x30b0ea84b08712f0) {
              local_120 = 4;
              local_12c = 0xffffffff;
              local_124 = 1;
              local_130 = 0;
              local_e0 = param_1 + 4;
              local_d8 = param_1 + 5;
              local_100 = param_1 + 3;
              local_d0 = param_1 + 1;
              local_118 = (uint *)((longlong)param_1 + 0x14);
              local_f8 = param_1 + 8;
              local_c8 = param_1 + 9;
              local_c0 = param_1 + 7;
              local_b8 = param_1 + 6;
              local_140 = 0xc4bb2a81920abd50;
              local_148 = 0x3290783f6df02302;
            }
            else if (uVar3 == 0x4185e45041fe274d) {
              FUN_18009fb00(local_c0,local_e8,&local_99);
              local_140 = 0x5fea5fa5f76e89d6;
              local_148 = 0x5f969bbdef3b2074;
            }
          }
          if (0x643e896977f95a65 < (longlong)uVar3) break;
          if (uVar3 == 0x45446a964bba1035) {
            local_140 = 0x28ca6786e24ebdc6;
            local_148 = 0x2eaeff78c003ade2;
          }
          else if (uVar3 == 0x4b00ead8a5c81f2e) {
            local_140 = 0xe592fac61ad48cee;
            if ((int)local_138 < 0x20) {
              local_140 = 0x1e1ea5c7993aae46;
            }
            local_148 = 0x7019afa23e51cf84;
          }
          else if (uVar3 == 0x62ab4940629c8429) {
            local_140 = 0x21858d7a0fba059b;
            local_148 = 0xd7aedfc4f0409bc9;
          }
        }
        if ((longlong)uVar3 < 0x6ff4cfe98cc1bf85) break;
        if (uVar3 == 0x6ff4cfe98cc1bf85) {
          local_140 = 0xafb57585b40d63a6;
          if (local_138 == 10) {
            local_140 = 0x9014fb2c5c3ba8;
          }
          local_148 = 0xeaf11f13ffb77393;
        }
        else if (uVar3 == 0x77a776c01870c7f9) {
          local_140 = 0xf18f04952c9678fc;
          if ((int)local_138 < 0xd) {
            local_140 = 0xb3af6b59d190c2dc;
          }
          local_148 = 0xba8fee4d895e67d2;
        }
      }
      if (uVar3 != 0x6e070a65a76b61c2) break;
      local_140 = 0x8f8ff379055ff248;
      if (local_138 == 0xd) {
        local_140 = 0xa860d0af2c796654;
      }
      local_148 = 0xcacb99ef4ee5e27d;
    }
  } while (uVar3 != 0x643e896977f95a66);
  puVar7 = &DAT_1802a22ac;
  if ((local_108 & 2) == local_130) {
    puVar7 = &DAT_1802a22c8;
  }
  if ((local_120 & local_108) != local_130) {
    puVar7 = &DAT_1802a2290;
  }
  local_158 = &DAT_1802a22e0;
  FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15);
  local_158 = &DAT_1802a22c4;
  FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16);
  local_158 = &DAT_1802a22a8;
  FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15);
  local_98[0] = local_124;
  local_90 = &PTR_vftable_18020e948;
  std::ios_base::failure::failure((failure *)&stack0xffffffffffffff78,puVar7,local_98);
  FUN_1801dd110((failure *)&stack0xffffffffffffff78,&DAT_1802536a8);
}



undefined1 FUN_18009cfc0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_b1;
  ulonglong local_b0;
  ulonglong local_a8;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined *local_78;
  undefined1 *local_70;
  longlong *local_68;
  int *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;

  local_a8 = 0xf44c4a4eeccdf839;
  local_b0 = 0x128f5bbc19cd4a2e;
LAB_18009d070:
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_a8 ^ 0x474dfb2704e87d53;
        uVar2 = local_a8 ^ local_b0;
        local_b0 = local_b0 ^ 0x474dfb2704e87d53;
        local_a8 = uVar3;
        if (-0xc3cb09860a257fd < (longlong)uVar2) break;
        if ((longlong)uVar2 < -0x44cea7f107bacb55) {
          if ((longlong)uVar2 < -0x51903d964f0a134f) {
            if (uVar2 == 0x8f4f8643ed133d93) {
              local_48 = *local_80;
              local_a8 = 0xc0db267010c5b71d;
              if (local_48 != local_90) {
                local_a8 = 0x31cd2aa24c188462;
              }
              local_b0 = 0xdc1dd1fed2d09c20;
            }
            else if (uVar2 == 0x9df6085c86885155) {
              local_a8 = 0xb9492cfbc7a8a98b;
              local_b0 = 0xd459e3ddf8b0e480;
            }
          }
          else if (uVar2 == 0xae6fc269b0f5ecb1) {
            local_a8 = 0x5f41f7bf006926a5;
            local_b0 = 0xc2b7ffe386e177f0;
          }
          else if (uVar2 == 0xb056efcb2bbd3d8d) {
            *(undefined **)(param_1 + 0x70) = local_78;
            local_a8 = 0xad75a15603a2a1e5;
            local_b0 = 0xffc5ec3eda166ff2;
            local_b1 = 0;
          }
          else if (uVar2 == 0xb6d833bee824689c) {
            *local_70 = 1;
            *local_68 = *local_68 + local_98;
            local_50 = *local_88;
            local_a8 = 0x4f38adda6c3f9d9e;
            if (local_50 != local_90) {
              local_a8 = 0x92e78090f818c548;
            }
            local_b0 = 0xc0772b99812ca00d;
          }
        }
        else if ((longlong)uVar2 < -0x1f1fbb763d490c56) {
          if (uVar2 == 0xbb31580ef84534ab) {
            local_a8 = 0x4101af2876be6e19;
            if (local_a0 != 0x2a) {
              local_a8 = 0xc23bfe7eda74ac68;
            }
            local_b0 = 0xb2c2e04fe9e3c61d;
          }
          else if (uVar2 == 0xc093430df81d2030) {
            local_a8 = 0xaf22322b594ff2d6;
            if (local_9c != 0x2a) {
              local_a8 = 0x3acf015474cad33;
            }
            local_b0 = 0xadc3327cf7b94182;
          }
          else if (uVar2 == 0xcd1a0affdb64286d) {
            local_a8 = 0x3d32d34c9676893f;
            if (0x2e < local_a0) {
              local_a8 = 0x7b79bf6a3fb8cd5b;
            }
            local_b0 = 0x86038b426e33bd94;
          }
        }
        else if (uVar2 == 0xe0e04489c2b6f3aa) {
          *local_58 = *local_58 + -1;
          local_a8 = 0x3736599b90de0ac2;
          local_b0 = 0xaac051c716565b97;
        }
        else if (uVar2 == 0xe6c311f2f500b217) {
          local_90 = 0;
          local_98 = -1;
          local_a0 = FUN_18009f4a0(param_1);
          FUN_1800b8f52(&DAT_1802a2530,&DAT_1802737df,0x1d,0x30,&DAT_1802a2560);
          local_a8 = 0x8bcf48993ea263a3;
          local_b0 = 0x46d54266e5c64bce;
        }
        else if (uVar2 == 0xedd0fb5c9ec81842) {
          *local_80 = local_48 + local_98;
          local_a8 = 0xee2e321e0907105;
          local_b0 = 0x122414af22855a38;
        }
      }
      if (0x5290ab0979346544 < (longlong)uVar2) break;
      if ((longlong)uVar2 < 0x10a6ff0a0ad993c) {
        if (uVar2 == 0xf3c34f679f5da804) {
          local_70 = (undefined1 *)(param_1 + 0x18);
          local_68 = (longlong *)(param_1 + 0x20);
          local_88 = (longlong *)(param_1 + 0x28);
          local_80 = (longlong *)(param_1 + 0x30);
          local_60 = (int *)(param_1 + 0x14);
          local_58 = (longlong *)(param_1 + 0x40);
          local_a8 = 0x8e718205c633e0c8;
          local_b0 = 0xe3614d23f92badc3;
        }
        else if (uVar2 == 0xfd7a3428518b70cf) {
          local_a8 = 0xe5042502f863709b;
          if (local_a0 != 0x2f) {
            local_a8 = 0xf2f13f51e11ec213;
          }
          local_b0 = 0x82082160d289a866;
        }
      }
      else if (uVar2 == 0x10a6ff0a0ad993c) {
        local_a8 = 0x93e0a0bde9f5ecb1;
        if (0x29 < local_9c) {
          local_a8 = 0x2e77433984110c6d;
        }
        local_b0 = 0xeee400347c0c2c5d;
      }
      else if (uVar2 == 0x2e10057aef6b354) {
        iVar1 = FUN_18009f4a0(param_1);
        local_a8 = 0x211a20eeedfeb33e;
        if (iVar1 != 0x2f) {
          local_a8 = 0xc5725e38dc6e15b5;
        }
        local_b0 = 0x73aa6d86344a7d29;
LAB_18009d4d3:
        local_b1 = 1;
      }
      else if (uVar2 == 0x1cc6f78ec2152b3d) {
        local_a8 = 0x5f2e98e593937f7b;
        if (*local_60 != -1) {
          local_a8 = 0x2238d430d7addd84;
        }
        local_b0 = 0xc2d890b9151b2e2e;
      }
    }
    if (0x6d10cf263f184d0a < (longlong)uVar2) {
      if (uVar2 == 0x6d10cf263f184d0b) {
        local_9c = FUN_18009f4a0(param_1);
        FUN_1800b8f52(&DAT_1802a2504,&DAT_180273785,0x16,0x26,&DAT_1802a252c);
        local_a8 = 0xec9e37843aa91050;
        local_b0 = 0xed9458749a04896c;
      }
      else if (uVar2 == 0x70f91e3133976a75) {
        local_a8 = 0xfe91fa96e8791c3;
        local_b0 = 0xbfbff062453aac4e;
        local_78 = &DAT_1802a2530;
      }
      else if (uVar2 == 0x7d04a08995f9c0ec) {
        local_a8 = 0x6a6ca43c94b00af1;
        if (1 < local_9c + 1U) {
          local_a8 = 0x7455899e0ff8dbcd;
        }
        local_b0 = 0xda3a4bf7bf0d377c;
        local_78 = &DAT_1802a2504;
      }
      goto LAB_18009d070;
    }
    if (uVar2 == 0x5290ab0979346545) {
      *local_88 = local_50 + local_98;
      local_a8 = 0xf3459ecdd356fa3f;
      local_b0 = 0xef8369431143d102;
    }
    else {
      if (uVar2 == 0x670c04622aead8fd) {
        iVar1 = FUN_18009f4a0(param_1);
        local_a8 = 0x652184fd6db8358b;
        if ((0x4803U >> ((byte)(iVar1 + 1U) & 0x1f) & 1) == 0) {
          local_a8 = 0x509dcdf79ee62361;
        }
        if (0xe < iVar1 + 1U) {
          local_a8 = 0x509dcdf79ee62361;
        }
        local_b0 = 0x3791c995b40cfb9c;
        goto LAB_18009d4d3;
      }
      if (uVar2 == 0x52b04d68d9b4ce17) {
        return local_b1;
      }
    }
  } while( true );
}



undefined4 FUN_18009d7f0(longlong *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  failure **ppfVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined *puVar18;
  uint local_1a0 [2];
  undefined **local_198;
  failure *local_190;
  exception_data *local_188;
  failure *local_180;
  undefined8 *local_178;
  failure *local_170;
  undefined8 *local_168;
  failure *local_160;
  undefined8 *local_158;
  failure *local_150;
  undefined4 *local_148;
  failure *local_140;
  undefined4 *local_138;
  failure *local_130;
  undefined4 *local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  failure local_108;

  local_108.exception_data.offset_0x70 = 0xfffffffffffffffe;
  local_108.exception_data.offset_0x40 = 0xf;
  local_108.exception_data.offset_0x20._0_4_ = 4;
  local_108.exception_data.offset_0x60._7_1_ = 9;
  local_108.exception_data.offset_0x68._0_1_ = 0x5c;
  local_120 = 0;
  local_108.exception_data._72_4_ = 0x3f;
  local_108.exception_data._76_4_ = 0xffffffff;
  local_108.exception_data.offset_0x58 = 1;
  local_108.exception_data.offset_0x30._4_4_ = 6;
  local_108.exception_data.offset_0x20._4_4_ = 0xc;
  local_108.exception_data.offset_0x68._1_1_ = 0xc;
  local_108.exception_data.offset_0x68._2_1_ = 0x2f;
  local_108.exception_data.offset_0x28._0_4_ = 1;
  local_108.exception_data.offset_0x68._7_1_ = 0;
  local_108.exception_data.offset_0x28._4_4_ = 10;
  local_108.exception_data.offset_0x30._0_4_ = 0xfffffc00;
  local_108.exception_data.offset_0x38._4_4_ = 0;
  local_108.exception_data.offset_0x50._0_4_ = 0x80;
  local_108.exception_data.offset_0x50._4_4_ = 0xe;
  local_108.exception_data.offset_0x68._3_1_ = 10;
  local_108.exception_data.offset_0x68._4_1_ = 8;
  local_108.exception_data.offset_0x68._5_1_ = 0x22;
  local_108.exception_data.offset_0x68._6_1_ = 0xd;
  plVar6 = param_1 + 10;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    plVar6 = (longlong *)param_1[10];
  }
  *(undefined1 *)plVar6 = 0;
  puVar1 = (undefined1 *)param_1[7];
  puVar11 = (undefined1 *)param_1[8];
  if (puVar1 != (undefined1 *)param_1[8]) {
    param_1[8] = (longlong)puVar1;
    puVar11 = puVar1;
  }
  local_108.vftablePtr =
       (failure_vftable *)CONCAT71(local_108.vftablePtr._1_7_,*(undefined1 *)((longlong)param_1 + 0x14));
  if (puVar11 == (undefined1 *)param_1[9]) {
    FUN_18009fb00(param_1 + 7,puVar11,&local_108);
  }
  else {
    *puVar11 = *(undefined1 *)((longlong)param_1 + 0x14);
    param_1[8] = param_1[8] + 1;
  }
  puVar14 = &DAT_1802a26ec;
LAB_18009da63:
  do {
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if ((char)param_1[3] == '\x01') {
      *(undefined1 *)(param_1 + 3) = local_108.exception_data.offset_0x68._7_1_;
      uVar17 = *(uint *)((longlong)param_1 + 0x14);
    }
    else {
      plVar6 = (longlong *)param_1[1];
      if (*(longlong *)plVar6[7] == 0) {
LAB_18009dad0:
        uVar17 = (**(code **)(*plVar6 + 0x38))();
        if (uVar17 == local_108.exception_data._76_4_) {
          plVar6 = (longlong *)*param_1;
          lVar8 = (longlong)*(int *)(*plVar6 + 4);
          uVar17 = (uint)local_108.exception_data.offset_0x20;
          if (*(longlong *)((longlong)plVar6 + lVar8 + 0x48) != 0) {
            uVar17 = local_108.exception_data.offset_0x38._4_4_;
          }
          uVar10 = *(uint *)((longlong)plVar6 + lVar8 + 0x10) & 0x16 | uVar17 |
                   (uint)local_108.exception_data.offset_0x28;
          *(uint *)((longlong)plVar6 + lVar8 + 0x10) = uVar10;
          uVar10 = uVar10 & *(uint *)((longlong)plVar6 + lVar8 + 0x14);
          uVar17 = local_108.exception_data._76_4_;
          if (uVar10 != local_108.exception_data.offset_0x38._4_4_) {
            puVar14 = &DAT_1802a22ac;
            if ((uVar10 & 2) == local_108.exception_data.offset_0x38._4_4_) {
              puVar14 = &DAT_1802a22c8;
            }
            if (((uint)local_108.exception_data.offset_0x20 & uVar10) != local_108.exception_data.offset_0x38._4_4_) {
              puVar14 = &DAT_1802a2290;
            }
            FUN_1800b8f52(&DAT_1802a22c8,&DAT_18027233f,0x1c,0x15,&DAT_1802a22e0);
            FUN_1800b8f52(&DAT_1802a22ac,&DAT_180272305,0x13,0x16,&DAT_1802a22c4);
            FUN_1800b8f52(&DAT_1802a2290,&DAT_1802722c1,0x1b,0x15,&DAT_1802a22a8);
            local_1a0[0] = (uint)local_108.exception_data.offset_0x28;
            local_198 = &PTR_vftable_18020e948;
            std::ios_base::failure::failure(&local_108,puVar14,local_1a0);
            FUN_1801dd110(&local_108,&DAT_1802536a8);
          }
        }
      }
      else {
        iVar5 = *(int *)plVar6[10];
        if (iVar5 <= (int)local_108.exception_data.offset_0x38._4_4_) goto LAB_18009dad0;
        *(int *)plVar6[10] = iVar5 + local_108.exception_data._76_4_;
        pbVar2 = *(byte **)plVar6[7];
        *(byte **)plVar6[7] = pbVar2 + 1;
        uVar17 = (uint)*pbVar2;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar17;
    }
    if (uVar17 == local_108.exception_data._76_4_) {
      puVar14 = &DAT_1802a2564;
      goto LAB_18009e7c6;
    }
    local_108.vftablePtr = (failure_vftable *)CONCAT71(local_108.vftablePtr._1_7_,(char)uVar17);
    puVar1 = (undefined1 *)param_1[8];
    if (puVar1 == (undefined1 *)param_1[9]) {
      FUN_18009fb00(param_1 + 7,puVar1,&local_108);
      uVar17 = *(uint *)((longlong)param_1 + 0x14);
      if (uVar17 != local_108.exception_data.offset_0x28._4_4_) goto LAB_18009db39;
LAB_18009e39b:
      param_1[6] = param_1[6] + local_108.exception_data.offset_0x58;
      param_1[5] = local_120;
      puVar18 = &DAT_1802a2a14;
      puVar14 = &DAT_1802a29c4;
      puVar13 = &DAT_180273f06;
      uVar15 = 0x15;
      uVar16 = 0x4e;
LAB_18009e7c1:
      FUN_1800b8f52(puVar14,puVar13,uVar15,uVar16,puVar18);
LAB_18009e7c6:
      param_1[0xe] = (longlong)puVar14;
      return local_108.exception_data.offset_0x50._4_4_;
    }
    *puVar1 = (char)uVar17;
    param_1[8] = param_1[8] + 1;
    uVar17 = *(uint *)((longlong)param_1 + 0x14);
    if (uVar17 == local_108.exception_data.offset_0x28._4_4_) goto LAB_18009e39b;
LAB_18009db39:
    uVar7 = (ulonglong)uVar17;
    FUN_1800b8f52(&DAT_1802a26ec,&DAT_180273ab9,0x17,0x49,&DAT_1802a2738);
    if ((int)uVar17 < 0x16) {
      if ((int)uVar17 < 0xb) {
        if ((int)uVar17 < 4) {
          if ((int)uVar17 < 1) {
            if ((int)uVar17 < 0) {
              if (uVar17 != 0xffffffff) goto LAB_18009e9e0;
              puVar18 = &DAT_1802a258c;
              puVar14 = &DAT_1802a2564;
              puVar13 = &DAT_180273840;
              uVar15 = 0x11;
              uVar16 = 0x26;
              goto LAB_18009e7c1;
            }
            puVar18 = &DAT_1802a26e8;
            puVar14 = &DAT_1802a269c;
            puVar13 = &DAT_180273a42;
            uVar15 = 0x11;
          }
          else {
            if (uVar17 == 1) goto LAB_18009e7c6;
            if (uVar17 == 3) {
              puVar18 = &DAT_1802a27d8;
              puVar14 = &DAT_1802a278c;
              puVar13 = &DAT_180273b9c;
              goto LAB_18009e641;
            }
            puVar18 = &DAT_1802a2788;
            puVar14 = &DAT_1802a273c;
            puVar13 = &DAT_180273b2a;
            uVar15 = 0x14;
          }
        }
        else if ((int)uVar17 < 7) {
          if (uVar17 == 4) {
            puVar18 = &DAT_1802a2828;
            puVar14 = &DAT_1802a27dc;
            puVar13 = &DAT_180273c13;
            goto LAB_18009e698;
          }
          if (uVar17 == 6) {
            puVar18 = &DAT_1802a28c8;
            puVar14 = &DAT_1802a287c;
            puVar13 = &DAT_180273d03;
            uVar15 = 0x1e;
          }
          else {
            puVar18 = &DAT_1802a2878;
            puVar14 = &DAT_1802a282c;
            puVar13 = &DAT_180273c8c;
LAB_18009e94c:
            uVar15 = 0x16;
          }
        }
        else {
          if (uVar17 != 7) {
            if ((int)uVar17 < 9) {
              puVar18 = &DAT_1802a296c;
              puVar14 = &DAT_1802a291c;
              puVar13 = &DAT_180273df5;
              goto LAB_18009e85b;
            }
            if (uVar17 != 9) goto LAB_18009e9e0;
            puVar18 = &DAT_1802a29c0;
            puVar14 = &DAT_1802a2970;
            puVar13 = &DAT_180273e7c;
            uVar15 = 0x1d;
            uVar16 = 0x4e;
            goto LAB_18009e7c1;
          }
          puVar18 = &DAT_1802a2918;
          puVar14 = &DAT_1802a28cc;
          puVar13 = &DAT_180273d82;
LAB_18009e641:
          uVar15 = 0x1a;
        }
      }
      else {
        if ((int)uVar17 < 0x10) {
          if ((int)uVar17 < 0xd) {
            if (uVar17 == 0xb) {
              puVar18 = &DAT_1802a2a60;
              puVar14 = &DAT_1802a2a18;
              puVar13 = &DAT_180273f7a;
              uVar15 = 0x16;
              uVar16 = 0x48;
            }
            else {
              puVar18 = &DAT_1802a2ab4;
              puVar14 = &DAT_1802a2a64;
              puVar13 = &DAT_180273fe9;
              uVar15 = 0x1f;
              uVar16 = 0x4e;
            }
          }
          else if (uVar17 == 0xd) {
            puVar18 = &DAT_1802a2b08;
            puVar14 = &DAT_1802a2ab8;
            puVar13 = &DAT_18027406e;
LAB_18009e85b:
            uVar15 = 0x1b;
            uVar16 = 0x4e;
          }
          else if (uVar17 == 0xf) {
            puVar18 = &DAT_1802a2ba0;
            puVar14 = &DAT_1802a2b58;
            puVar13 = &DAT_180274164;
            uVar15 = 0x19;
            uVar16 = 0x48;
          }
          else {
            puVar18 = &DAT_1802a2b54;
            puVar14 = &DAT_1802a2b0c;
            puVar13 = &DAT_1802740f0;
            uVar15 = 0x10;
            uVar16 = 0x48;
          }
          goto LAB_18009e7c1;
        }
        if ((int)uVar17 < 0x13) {
          if (uVar17 == 0x10) {
            puVar18 = &DAT_1802a2bf0;
            puVar14 = &DAT_1802a2ba4;
            puVar13 = &DAT_1802741e4;
            goto LAB_18009e591;
          }
          if (uVar17 == 0x12) {
            puVar18 = &DAT_1802a2c90;
            puVar14 = &DAT_1802a2c44;
            puVar13 = &DAT_1802742dd;
            goto LAB_18009e7b2;
          }
          puVar18 = &DAT_1802a2c40;
          puVar14 = &DAT_1802a2bf4;
          puVar13 = &DAT_180274268;
          uVar15 = 0x15;
        }
        else if (uVar17 == 0x13) {
          puVar18 = &DAT_1802a2ce0;
          puVar14 = &DAT_1802a2c94;
          puVar13 = &DAT_180274350;
LAB_18009e7b2:
          uVar15 = 0x13;
        }
        else {
          if (uVar17 == 0x15) {
            puVar18 = &DAT_1802a2d80;
            puVar14 = &DAT_1802a2d34;
            puVar13 = &DAT_18027443f;
            goto LAB_18009e94c;
          }
          puVar18 = &DAT_1802a2d30;
          puVar14 = &DAT_1802a2ce4;
          puVar13 = &DAT_1802743bd;
          uVar15 = 0x1b;
        }
      }
LAB_18009e7bb:
      uVar16 = 0x49;
      goto LAB_18009e7c1;
    }
    if ((int)uVar17 < 0x22) {
      if ((int)uVar17 < 0x1b) {
        if ((int)uVar17 < 0x18) {
          if (uVar17 == 0x16) {
            puVar18 = &DAT_1802a2dd0;
            puVar14 = &DAT_1802a2d84;
            puVar13 = &DAT_1802744bb;
LAB_18009e591:
            uVar15 = 0x1d;
          }
          else {
            puVar18 = &DAT_1802a2e20;
            puVar14 = &DAT_1802a2dd4;
            puVar13 = &DAT_18027453f;
LAB_18009e698:
            uVar15 = 0x18;
          }
          goto LAB_18009e7bb;
        }
        if (uVar17 == 0x18) {
          puVar18 = &DAT_1802a2e70;
          puVar14 = &DAT_1802a2e24;
          puVar13 = &DAT_1802745ba;
          goto LAB_18009e7b2;
        }
        if (uVar17 == 0x1a) {
          puVar18 = &DAT_1802a2f0c;
          puVar14 = &DAT_1802a2ec0;
          puVar13 = &DAT_18027469f;
          uVar15 = 0x19;
          goto LAB_18009e7bb;
        }
        puVar18 = &DAT_1802a2ebc;
        puVar14 = &DAT_1802a2e74;
        puVar13 = &DAT_180274627;
        uVar15 = 0x12;
        uVar16 = 0x48;
      }
      else if ((int)uVar17 < 0x1e) {
        if (uVar17 == 0x1b) {
          puVar18 = &DAT_1802a2f5c;
          puVar14 = &DAT_1802a2f10;
          puVar13 = &DAT_180274711;
          goto LAB_18009e7b2;
        }
        if (uVar17 == 0x1d) {
          puVar18 = &DAT_1802a2ff4;
          puVar14 = &DAT_1802a2fac;
          puVar13 = &DAT_1802747f9;
          uVar15 = 0x1a;
          uVar16 = 0x48;
        }
        else {
          puVar18 = &DAT_1802a2fa8;
          puVar14 = &DAT_1802a2f60;
          puVar13 = &DAT_180274789;
          uVar15 = 0x15;
          uVar16 = 0x48;
        }
      }
      else if (uVar17 == 0x1e) {
        puVar18 = &DAT_1802a3040;
        puVar14 = &DAT_1802a2ff8;
        puVar13 = &DAT_180274878;
        uVar15 = 0x1e;
        uVar16 = 0x48;
      }
      else {
        if (0x1f < (int)uVar17) goto LAB_18009db89;
        puVar18 = &DAT_1802a308c;
        puVar14 = &DAT_1802a3044;
        puVar13 = &DAT_1802748fa;
        uVar15 = 0x14;
        uVar16 = 0x48;
      }
      goto LAB_18009e7c1;
    }
    if ((int)uVar17 < 0xe1) {
      if ((int)uVar17 < 0x5d) {
        if (uVar17 == 0x22) {
          return 4;
        }
        if (uVar17 == 0x5c) {
          iVar5 = FUN_18009f4a0(param_1);
          FUN_1800b8f52(&DAT_1802a2664,&DAT_1802739e1,0x12,0x34,&DAT_1802a2698);
          if (iVar5 < 0x66) {
            if (iVar5 < 0x5c) {
              if (iVar5 < 0x2f) {
                if (iVar5 != 0x22) {
LAB_18009e8c6:
                  puVar14 = &DAT_1802a2664;
                  goto LAB_18009e7c6;
                }
                uVar7 = param_1[0xc];
                if ((ulonglong)param_1[0xd] <= uVar7) {
LAB_18009e20e:
                  FUN_18006a970(param_1 + 10,local_108.exception_data.offset_0x58);
                  goto LAB_18009da63;
                }
                lVar8 = local_108.exception_data.offset_0x58 + uVar7;
                param_1[0xc] = lVar8;
                plVar6 = param_1 + 10;
                uVar9 = local_108.exception_data.offset_0x68._5_1_;
                if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
                  plVar6 = (longlong *)param_1[10];
                }
              }
              else {
                if (iVar5 != 0x2f) goto LAB_18009e8c6;
                uVar7 = param_1[0xc];
                if ((ulonglong)param_1[0xd] <= uVar7) goto LAB_18009e20e;
                lVar8 = local_108.exception_data.offset_0x58 + uVar7;
                param_1[0xc] = lVar8;
                plVar6 = param_1 + 10;
                uVar9 = local_108.exception_data.offset_0x68._2_1_;
                if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
                  plVar6 = (longlong *)param_1[10];
                }
              }
            }
            else if (iVar5 < 0x62) {
              if (iVar5 != 0x5c) goto LAB_18009e8c6;
              uVar7 = param_1[0xc];
              if ((ulonglong)param_1[0xd] <= uVar7) goto LAB_18009e20e;
              lVar8 = local_108.exception_data.offset_0x58 + uVar7;
              param_1[0xc] = lVar8;
              plVar6 = param_1 + 10;
              uVar9 = (undefined1)local_108.exception_data.offset_0x68;
              if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
                plVar6 = (longlong *)param_1[10];
              }
            }
            else {
              if (iVar5 != 0x62) goto LAB_18009e8c6;
              uVar7 = param_1[0xc];
              if ((ulonglong)param_1[0xd] <= uVar7) goto LAB_18009e20e;
              lVar8 = local_108.exception_data.offset_0x58 + uVar7;
              param_1[0xc] = lVar8;
              plVar6 = param_1 + 10;
              uVar9 = local_108.exception_data.offset_0x68._4_1_;
              if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
                plVar6 = (longlong *)param_1[10];
              }
            }
          }
          else if (iVar5 < 0x72) {
            if (iVar5 < 0x6e) {
              if (iVar5 != 0x66) goto LAB_18009e8c6;
              uVar7 = param_1[0xc];
              if ((ulonglong)param_1[0xd] <= uVar7) goto LAB_18009e20e;
              lVar8 = local_108.exception_data.offset_0x58 + uVar7;
              param_1[0xc] = lVar8;
              plVar6 = param_1 + 10;
              uVar9 = local_108.exception_data.offset_0x68._1_1_;
              if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
                plVar6 = (longlong *)param_1[10];
              }
            }
            else {
              if (iVar5 != 0x6e) goto LAB_18009e8c6;
              uVar7 = param_1[0xc];
              if ((ulonglong)param_1[0xd] <= uVar7) goto LAB_18009e20e;
              lVar8 = local_108.exception_data.offset_0x58 + uVar7;
              param_1[0xc] = lVar8;
              plVar6 = param_1 + 10;
              uVar9 = local_108.exception_data.offset_0x68._3_1_;
              if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
                plVar6 = (longlong *)param_1[10];
              }
            }
          }
          else if (iVar5 < 0x74) {
            if (iVar5 != 0x72) goto LAB_18009e8c6;
            uVar7 = param_1[0xc];
            if ((ulonglong)param_1[0xd] <= uVar7) goto LAB_18009e20e;
            lVar8 = local_108.exception_data.offset_0x58 + uVar7;
            param_1[0xc] = lVar8;
            plVar6 = param_1 + 10;
            uVar9 = local_108.exception_data.offset_0x68._6_1_;
            if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
              plVar6 = (longlong *)param_1[10];
            }
          }
          else {
            if (iVar5 != 0x74) {
              if (iVar5 != 0x75) goto LAB_18009e8c6;
              local_118 = FUN_1800a0530(param_1);
              if ((uint)local_118 == local_108.exception_data._76_4_) {
LAB_18009ea4e:
                puVar14 = &DAT_1802a2590;
                goto LAB_18009e7c6;
              }
              uVar17 = (uint)local_108.exception_data.offset_0x30 & (uint)local_118;
              FUN_1800b8f52(&DAT_1802a261c,&DAT_180273972,0x15,0x44,&DAT_1802a2660);
              if ((int)uVar17 < 0xdc00) {
                if (uVar17 != 0xd800) goto LAB_18009e222;
                iVar5 = FUN_18009f4a0(param_1);
                if ((iVar5 != 0x5c) || (iVar5 = FUN_18009f4a0(param_1), iVar5 != 0x75)) {
LAB_18009ea5a:
                  puVar14 = &DAT_1802a25cc;
                  goto LAB_18009e7c6;
                }
                uVar17 = FUN_1800a0530(param_1);
                local_108.exception_data.offset_0x38._0_4_ = local_108.exception_data._76_4_;
                FUN_1800b8f52(&DAT_1802a2590,&DAT_18027388f,0x1e,0x36,&DAT_1802a25c8);
                if (uVar17 == (uint)local_108.exception_data.offset_0x38) goto LAB_18009ea4e;
                local_108.exception_data.offset_0x38._0_4_ = (uint)local_108.exception_data.offset_0x30 & uVar17;
                local_110 = (ulonglong)uVar17;
                FUN_1800b8f52(&DAT_1802a25cc,&DAT_1802738fe,0x15,0x4c,&DAT_1802a2618);
                if ((uint)local_108.exception_data.offset_0x38 != 0xdc00) goto LAB_18009ea5a;
                uVar17 = ((int)local_118 << ((byte)local_108.exception_data.offset_0x28._4_4_ & 0x1f)) + (int)local_110
                         + 0xfca02400;
LAB_18009e2c7:
                FUN_1800a0330(param_1,uVar17 >> 0x12 | 0xf0);
                FUN_1800a0330(param_1,uVar17 >> ((byte)local_108.exception_data.offset_0x20._4_4_ & 0x1f) &
                                      local_108.exception_data._72_4_ | (uint)local_108.exception_data.offset_0x50);
                FUN_1800a0330(param_1,uVar17 >> ((byte)local_108.exception_data.offset_0x30._4_4_ & 0x1f) &
                                      local_108.exception_data._72_4_ | (uint)local_108.exception_data.offset_0x50);
                FUN_1800a0330(param_1,uVar17 & local_108.exception_data._72_4_ |
                                      (uint)local_108.exception_data.offset_0x50);
              }
              else {
                if (uVar17 == 0xdc00) {
                  puVar14 = &DAT_1802a261c;
                  goto LAB_18009e7c6;
                }
LAB_18009e222:
                uVar17 = (uint)local_118;
                uVar7 = local_118;
                if ((int)uVar17 < (int)(uint)local_108.exception_data.offset_0x50) goto LAB_18009db89;
                if (uVar17 < 0x800) {
                  uVar10 = (uVar17 >> ((byte)local_108.exception_data.offset_0x30._4_4_ & 0x1f)) + 0xc0;
                }
                else {
                  if (0xffff < uVar17) goto LAB_18009e2c7;
                  FUN_1800a0330(param_1,(uVar17 >> ((byte)local_108.exception_data.offset_0x20._4_4_ & 0x1f)) + 0xe0);
                  uVar10 = uVar17 >> ((byte)local_108.exception_data.offset_0x30._4_4_ & 0x1f) &
                           local_108.exception_data._72_4_ | (uint)local_108.exception_data.offset_0x50;
                }
                FUN_1800a0330(param_1,uVar10);
                FUN_1800a0330(param_1,local_108.exception_data._72_4_ & uVar17 |
                                      (uint)local_108.exception_data.offset_0x50);
              }
              goto LAB_18009da63;
            }
            uVar7 = param_1[0xc];
            if ((ulonglong)param_1[0xd] <= uVar7) goto LAB_18009e20e;
            lVar8 = local_108.exception_data.offset_0x58 + uVar7;
            param_1[0xc] = lVar8;
            plVar6 = param_1 + 10;
            uVar9 = local_108.exception_data.offset_0x60._7_1_;
            if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
              plVar6 = (longlong *)param_1[10];
            }
          }
          *(undefined1 *)((longlong)plVar6 + uVar7) = uVar9;
        }
        else {
LAB_18009db89:
          uVar3 = param_1[0xc];
          if ((ulonglong)param_1[0xd] <= uVar3) {
            FUN_18006a970(param_1 + 10,local_108.exception_data.offset_0x58);
            goto LAB_18009da63;
          }
          lVar8 = local_108.exception_data.offset_0x58 + uVar3;
          param_1[0xc] = lVar8;
          plVar6 = param_1 + 10;
          if ((ulonglong)local_108.exception_data.offset_0x40 < (ulonglong)param_1[0xd]) {
            plVar6 = (longlong *)param_1[10];
          }
          *(char *)((longlong)plVar6 + uVar3) = (char)uVar7;
        }
        *(undefined1 *)((longlong)plVar6 + lVar8) = local_108.exception_data.offset_0x68._7_1_;
        goto LAB_18009da63;
      }
      if ((int)uVar17 < 0xc2) {
        if (0x22 < uVar17 - 0x5d) {
LAB_18009e9e0:
          puVar18 = &DAT_1802a30b8;
          puVar14 = &DAT_1802a3090;
          puVar13 = &DAT_180274969;
          uVar15 = 0x12;
          uVar16 = 0x26;
          goto LAB_18009e7c1;
        }
        goto LAB_18009db89;
      }
      if (uVar17 == 0xe0) {
        local_108.vftablePtr = (failure_vftable *)0xbf000000a0;
        local_108.exception_data.offset_0x0 = 0xbf00000080;
        local_178 = &local_108.exception_data.offset_0x8;
        ppfVar12 = &local_180;
        local_180 = &local_108;
      }
      else {
        local_108.vftablePtr = (failure_vftable *)CONCAT44(0xbf,(uint)local_108.exception_data.offset_0x50);
        local_188 = &local_108.exception_data;
        ppfVar12 = &local_190;
        local_190 = &local_108;
      }
    }
    else if ((int)uVar17 < 0xf0) {
      if (uVar17 == 0xed) {
        local_108.vftablePtr = (failure_vftable *)0x9f00000080;
        local_108.exception_data.offset_0x0 = 0xbf00000080;
        local_158 = &local_108.exception_data.offset_0x8;
        ppfVar12 = &local_160;
        local_160 = &local_108;
      }
      else {
        local_108.vftablePtr = (failure_vftable *)0xbf00000080;
        local_108.exception_data.offset_0x0 = 0xbf00000080;
        local_168 = &local_108.exception_data.offset_0x8;
        ppfVar12 = &local_170;
        local_170 = &local_108;
      }
    }
    else if (uVar17 == 0xf0) {
      local_108.vftablePtr = (failure_vftable *)0xbf00000090;
      local_108.exception_data.offset_0x0 = 0xbf00000080;
      local_108.exception_data.offset_0x8 = 0xbf00000080;
      local_148 = &local_108.exception_data.offset_0x10;
      ppfVar12 = &local_150;
      local_150 = &local_108;
    }
    else if ((int)uVar17 < 0xf4) {
      local_108.vftablePtr = (failure_vftable *)0xbf00000080;
      local_108.exception_data.offset_0x0 = 0xbf00000080;
      local_108.exception_data.offset_0x8 = 0xbf00000080;
      local_138 = &local_108.exception_data.offset_0x10;
      ppfVar12 = &local_140;
      local_140 = &local_108;
    }
    else {
      if (uVar17 != 0xf4) goto LAB_18009e9e0;
      local_108.vftablePtr = (failure_vftable *)0x8f00000080;
      local_108.exception_data.offset_0x0 = 0xbf00000080;
      local_108.exception_data.offset_0x8 = 0xbf00000080;
      local_128 = &local_108.exception_data.offset_0x10;
      ppfVar12 = &local_130;
      local_130 = &local_108;
    }
    cVar4 = FUN_1800a0d60(param_1,ppfVar12);
    if (cVar4 == '\0') {
      return local_108.exception_data.offset_0x50._4_4_;
    }
  } while( true );
}



void Unwind_18009eb50(void)

{
  Unwind_1801dd394();
}



int FUN_18009eb90(longlong *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  int local_7c;
  undefined8 local_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  undefined1 local_42;
  undefined1 local_41;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_42 = 0x30;
  local_5c = 5;
  local_40 = 1;
  local_6c = 6;
  local_58 = 0xffffffff;
  local_41 = 0x2d;
  local_31 = 0;
  local_7c = 7;
  local_54 = 10;
  local_68 = 0;
  local_64 = -0x30;
  local_60 = 0xe;
  plVar13 = param_1 + 10;
  param_1[0xc] = 0;
  plVar7 = plVar13;
  if (0xf < (ulonglong)param_1[0xd]) {
    plVar7 = (longlong *)param_1[10];
  }
  *(undefined1 *)plVar7 = 0;
  puVar1 = (undefined1 *)param_1[7];
  puVar10 = (undefined1 *)param_1[8];
  if (puVar1 != (undefined1 *)param_1[8]) {
    param_1[8] = (longlong)puVar1;
    puVar10 = puVar1;
  }
  local_78 = CONCAT71(local_78._1_7_,*(undefined1 *)((longlong)param_1 + 0x14));
  if (puVar10 == (undefined1 *)param_1[9]) {
    FUN_18009fb00(param_1 + 7,puVar10,&local_78);
  }
  else {
    *puVar10 = *(undefined1 *)((longlong)param_1 + 0x14);
    param_1[8] = param_1[8] + 1;
  }
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  plVar7 = plVar13;
  if (iVar4 < 0x30) {
    if (iVar4 == 0x2d) {
      uVar2 = param_1[0xc];
      if (uVar2 < (ulonglong)param_1[0xd]) {
        param_1[0xc] = local_40 + uVar2;
        plVar14 = plVar13;
        if (local_50 < (ulonglong)param_1[0xd]) {
          plVar14 = (longlong *)param_1[10];
        }
        *(undefined1 *)((longlong)plVar14 + uVar2) = local_41;
        *(undefined1 *)((longlong)plVar14 + local_40 + uVar2) = local_31;
      }
      else {
        FUN_18006a970(plVar13,local_40);
      }
    }
LAB_18009eddb:
    iVar4 = FUN_18009f4a0(param_1);
    if (iVar4 < 0x31) {
      if (iVar4 == 0x30) {
        FUN_1800a0330(param_1,*(undefined4 *)((longlong)param_1 + 0x14));
        iVar4 = local_6c;
        iVar5 = FUN_18009f4a0(param_1);
        if (iVar5 < 0x45) goto LAB_18009eed3;
joined_r0x00018009f1c8:
        if (iVar5 < 0x65) {
          if (iVar5 != 0x45) goto LAB_18009f368;
        }
        else if (iVar5 != 0x65) goto LAB_18009f368;
        uVar2 = param_1[0xc];
        if (uVar2 < (ulonglong)param_1[0xd]) {
          lVar9 = local_40 + uVar2;
          param_1[0xc] = lVar9;
          if (local_50 < (ulonglong)param_1[0xd]) {
            plVar7 = (longlong *)param_1[10];
          }
          *(undefined1 *)((longlong)plVar7 + uVar2) = *(undefined1 *)((longlong)param_1 + 0x14);
LAB_18009f202:
          *(undefined1 *)((longlong)plVar7 + lVar9) = local_31;
          iVar4 = FUN_18009f4a0(param_1);
          if (0x2c < iVar4) goto LAB_18009f217;
LAB_18009f253:
          if (iVar4 == 0x2b) goto LAB_18009f258;
        }
        else {
LAB_18009f241:
          FUN_18006a970(plVar13,local_40);
          iVar4 = FUN_18009f4a0(param_1);
          if (iVar4 < 0x2d) goto LAB_18009f253;
LAB_18009f217:
          if (iVar4 < 0x30) {
            if (iVar4 == 0x2d) {
LAB_18009f258:
              uVar2 = param_1[0xc];
              if (uVar2 < (ulonglong)param_1[0xd]) {
                param_1[0xc] = local_40 + uVar2;
                plVar7 = plVar13;
                if (local_50 < (ulonglong)param_1[0xd]) {
                  plVar7 = (longlong *)param_1[10];
                }
                *(undefined1 *)((longlong)plVar7 + uVar2) = *(undefined1 *)((longlong)param_1 + 0x14);
                *(undefined1 *)((longlong)plVar7 + local_40 + uVar2) = local_31;
              }
              else {
                FUN_18006a970(plVar13,local_40);
              }
              iVar4 = FUN_18009f4a0(param_1);
              if (local_54 <= (uint)(iVar4 + local_64)) {
                puVar17 = &DAT_1802a3190;
                puVar12 = &DAT_1802a315c;
                puVar11 = &DAT_180274acd;
                uVar15 = 0x1c;
                uVar16 = 0x33;
                goto LAB_18009ee9c;
              }
LAB_18009f330:
              do {
                uVar2 = param_1[0xc];
                if (uVar2 < (ulonglong)param_1[0xd]) {
                  param_1[0xc] = local_40 + uVar2;
                  plVar7 = plVar13;
                  if (local_50 < (ulonglong)param_1[0xd]) {
                    plVar7 = (longlong *)param_1[10];
                  }
                  *(undefined1 *)((longlong)plVar7 + uVar2) = *(undefined1 *)((longlong)param_1 + 0x14);
                  *(undefined1 *)((longlong)plVar7 + local_40 + uVar2) = local_31;
                }
                else {
                  FUN_18006a970(plVar13,local_40);
                }
                iVar5 = FUN_18009f4a0(param_1);
                iVar4 = local_7c;
              } while ((uint)(iVar5 + local_64) < local_54);
LAB_18009f368:
              *(undefined1 *)(param_1 + 3) = 1;
              param_1[4] = param_1[4] + -1;
              if (param_1[5] == 0) {
                if (param_1[6] != 0) {
                  param_1[6] = param_1[6] + -1;
                }
              }
              else {
                param_1[5] = param_1[5] + -1;
              }
              if (*(uint *)((longlong)param_1 + 0x14) != local_58) {
                param_1[8] = param_1[8] + -1;
              }
              local_78 = 0;
              piVar8 = (int *)FUN_1801e6ae4();
              *piVar8 = local_68;
              if (iVar4 < 6) {
                if (iVar4 == 5) {
                  plVar7 = plVar13;
                  if (local_50 < (ulonglong)param_1[0xd]) {
                    plVar7 = (longlong *)param_1[10];
                  }
                  lVar9 = FUN_1801e76e4(plVar7,&local_78,local_54);
                  piVar8 = (int *)FUN_1801e6ae4();
                  if (*piVar8 == local_68) {
                    param_1[0x10] = lVar9;
                    return local_5c;
                  }
                }
              }
              else if (iVar4 == 6) {
                plVar7 = plVar13;
                if (local_50 < (ulonglong)param_1[0xd]) {
                  plVar7 = (longlong *)param_1[10];
                }
                lVar9 = FUN_1801e7630(plVar7,&local_78,local_54);
                piVar8 = (int *)FUN_1801e6ae4();
                if (*piVar8 == local_68) {
                  param_1[0xf] = lVar9;
                  return local_6c;
                }
              }
              if (local_50 < (ulonglong)param_1[0xd]) {
                plVar13 = (longlong *)param_1[10];
              }
              lVar9 = FUN_1801eace4(plVar13,&local_78);
              param_1[0x11] = lVar9;
              return 7;
            }
          }
          else if (iVar4 - 0x30U < 10) goto LAB_18009f330;
        }
        puVar17 = &DAT_1802a3158;
        puVar12 = &DAT_1802a311c;
        puVar11 = &DAT_180274a67;
        uVar15 = 0x17;
        uVar16 = 0x3b;
        goto LAB_18009ee9c;
      }
    }
    else if (iVar4 - 0x31U < 9) {
      uVar2 = param_1[0xc];
      if (uVar2 < (ulonglong)param_1[0xd]) {
        param_1[0xc] = local_40 + uVar2;
        plVar14 = plVar13;
        if (local_50 < (ulonglong)param_1[0xd]) {
          plVar14 = (longlong *)param_1[10];
        }
        *(undefined1 *)((longlong)plVar14 + uVar2) = *(undefined1 *)((longlong)param_1 + 0x14);
        *(undefined1 *)((longlong)plVar14 + local_40 + uVar2) = local_31;
        iVar4 = local_6c;
      }
      else {
        FUN_18006a970(plVar13,local_40);
        iVar4 = local_6c;
      }
LAB_18009f00c:
      do {
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if ((char)param_1[3] == '\x01') {
          *(undefined1 *)(param_1 + 3) = local_31;
          uVar6 = *(uint *)((longlong)param_1 + 0x14);
        }
        else {
          plVar14 = (longlong *)param_1[1];
          if (*(longlong *)plVar14[7] == 0) {
LAB_18009f070:
            uVar6 = (**(code **)(*plVar14 + 0x38))();
            if (uVar6 == local_58) {
              plVar14 = (longlong *)*param_1;
              FUN_18008c8f0((longlong)plVar14 + (longlong)*(int *)(*plVar14 + 4),
                            *(uint *)((longlong)plVar14 + (longlong)*(int *)(*plVar14 + 4) + 0x10) | 1,0);
              uVar6 = local_58;
            }
          }
          else {
            iVar5 = *(int *)plVar14[10];
            if (iVar5 <= local_68) goto LAB_18009f070;
            *(int *)plVar14[10] = iVar5 + local_58;
            pbVar3 = *(byte **)plVar14[7];
            *(byte **)plVar14[7] = pbVar3 + 1;
            uVar6 = (uint)*pbVar3;
          }
          *(uint *)((longlong)param_1 + 0x14) = uVar6;
        }
        if (uVar6 == local_58) goto LAB_18009f368;
        local_78 = CONCAT71(local_78._1_7_,(char)uVar6);
        puVar1 = (undefined1 *)param_1[8];
        if (puVar1 == (undefined1 *)param_1[9]) {
          FUN_18009fb00(param_1 + 7,puVar1,&local_78);
          iVar5 = *(int *)((longlong)param_1 + 0x14);
        }
        else {
          *puVar1 = (char)uVar6;
          param_1[8] = param_1[8] + 1;
          iVar5 = *(int *)((longlong)param_1 + 0x14);
        }
        if (iVar5 < 0x30) {
          if (iVar5 < 0x2e) {
            if (iVar5 == 10) {
              param_1[6] = param_1[6] + local_40;
              param_1[5] = 0;
            }
          }
          else if (iVar5 == 0x2e) goto LAB_18009eedc;
          goto LAB_18009f368;
        }
        if (0x44 < iVar5) {
          if (iVar5 < 0x65) {
            if (iVar5 != 0x45) goto LAB_18009f368;
          }
          else if (iVar5 != 0x65) goto LAB_18009f368;
          uVar2 = param_1[0xc];
          if ((ulonglong)param_1[0xd] <= uVar2) goto LAB_18009f241;
          lVar9 = local_40 + uVar2;
          param_1[0xc] = lVar9;
          if (local_50 < (ulonglong)param_1[0xd]) {
            plVar7 = (longlong *)param_1[10];
          }
          *(char *)((longlong)plVar7 + uVar2) = (char)iVar5;
          goto LAB_18009f202;
        }
        if (9 < iVar5 - 0x30U) goto LAB_18009f368;
        uVar2 = param_1[0xc];
        if (uVar2 < (ulonglong)param_1[0xd]) {
          param_1[0xc] = local_40 + uVar2;
          plVar14 = plVar13;
          if (local_50 < (ulonglong)param_1[0xd]) {
            plVar14 = (longlong *)param_1[10];
          }
          *(char *)((longlong)plVar14 + uVar2) = (char)iVar5;
          *(undefined1 *)((longlong)plVar14 + local_40 + uVar2) = local_31;
        }
        else {
          FUN_18006a970(plVar13,local_40);
        }
      } while( true );
    }
    puVar17 = &DAT_1802a30e8;
    puVar12 = &DAT_1802a30bc;
    puVar11 = &DAT_1802749b3;
    uVar15 = 0x13;
  }
  else {
    if (iVar4 != 0x30) {
      if (iVar4 - 0x31U < 9) {
        uVar2 = param_1[0xc];
        if (uVar2 < (ulonglong)param_1[0xd]) {
          param_1[0xc] = local_40 + uVar2;
          plVar14 = plVar13;
          if (local_50 < (ulonglong)param_1[0xd]) {
            plVar14 = (longlong *)param_1[10];
          }
          *(char *)((longlong)plVar14 + uVar2) = (char)iVar4;
          *(undefined1 *)((longlong)plVar14 + local_40 + uVar2) = local_31;
          iVar4 = local_5c;
        }
        else {
          FUN_18006a970(plVar13,local_40);
          iVar4 = local_5c;
        }
        goto LAB_18009f00c;
      }
      goto LAB_18009eddb;
    }
    uVar2 = param_1[0xc];
    if (uVar2 < (ulonglong)param_1[0xd]) {
      param_1[0xc] = local_40 + uVar2;
      plVar14 = plVar13;
      if (local_50 < (ulonglong)param_1[0xd]) {
        plVar14 = (longlong *)param_1[10];
      }
      *(undefined1 *)((longlong)plVar14 + uVar2) = local_42;
      *(undefined1 *)((longlong)plVar14 + local_40 + uVar2) = local_31;
    }
    else {
      FUN_18006a970(plVar13,local_40);
    }
    iVar4 = local_5c;
    iVar5 = FUN_18009f4a0(param_1);
    if (0x44 < iVar5) goto joined_r0x00018009f1c8;
LAB_18009eed3:
    if (iVar5 != 0x2e) goto LAB_18009f368;
LAB_18009eedc:
    uVar2 = param_1[0xc];
    if (uVar2 < (ulonglong)param_1[0xd]) {
      param_1[0xc] = local_40 + uVar2;
      plVar14 = plVar13;
      if (local_50 < (ulonglong)param_1[0xd]) {
        plVar14 = (longlong *)param_1[10];
      }
      *(char *)((longlong)plVar14 + uVar2) = (char)param_1[0x12];
      *(undefined1 *)((longlong)plVar14 + local_40 + uVar2) = local_31;
    }
    else {
      FUN_18006a970(plVar13,local_40);
    }
    iVar4 = FUN_18009f4a0(param_1);
    if ((uint)(iVar4 + local_64) < local_54) {
      do {
        uVar2 = param_1[0xc];
        if (uVar2 < (ulonglong)param_1[0xd]) {
          param_1[0xc] = local_40 + uVar2;
          plVar14 = plVar13;
          if (local_50 < (ulonglong)param_1[0xd]) {
            plVar14 = (longlong *)param_1[10];
          }
          *(undefined1 *)((longlong)plVar14 + uVar2) = *(undefined1 *)((longlong)param_1 + 0x14);
          *(undefined1 *)((longlong)plVar14 + local_40 + uVar2) = local_31;
        }
        else {
          FUN_18006a970(plVar13,local_40);
        }
        iVar5 = FUN_18009f4a0(param_1);
        if (0x44 < iVar5) {
          iVar4 = 7;
          goto joined_r0x00018009f1c8;
        }
      } while (iVar5 - 0x30U < 10);
      iVar4 = 7;
      goto LAB_18009f368;
    }
    puVar17 = &DAT_1802a3118;
    puVar12 = &DAT_1802a30ec;
    puVar11 = &DAT_180274a09;
    uVar15 = 0x1b;
  }
  uVar16 = 0x29;
LAB_18009ee9c:
  FUN_1800b8f52(puVar12,puVar11,uVar15,uVar16,puVar17);
  param_1[0xe] = (longlong)puVar12;
  return local_60;
}



void Unwind_18009f480(void)

{
  Unwind_1801dd394();
}



uint FUN_18009f4a0(longlong *param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  ulonglong local_d0;
  undefined1 local_c5;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_ac;
  undefined1 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  uint *local_88;
  int *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_61;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_f8;
  local_d0 = 0x257ae360d01b26ab;
  local_d8 = 0x1556ad4efc51944d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_d0 ^ 0x296dafb8475ae869;
            uVar3 = local_d0 ^ local_d8;
            local_d8 = local_d8 ^ 0x296dafb8475ae869;
            local_d0 = uVar4;
            if ((longlong)uVar3 < -0x104d263fd6332908) break;
            if ((longlong)uVar3 < 0x6c6b9505c5fd9662) {
              if (uVar3 == 0xefb2d9c029ccd6f8) {
                local_c5 = (undefined1)local_ac;
                local_78 = param_1 + 8;
                local_a8 = (undefined1 *)param_1[8];
                local_d0 = 0x63ca7b91a27be925;
                if (local_a8 == (undefined1 *)param_1[9]) {
                  local_d0 = 0x7981ebbe642b53ac;
                }
                local_d8 = 0x15ea7ebba1d6c5ce;
                local_61 = local_c5;
              }
              else if (uVar3 == 0x302c4e2e2c4ab2e6) {
                local_c4 = 0xffffffff;
                local_b8 = 10;
                local_98 = param_1 + 5;
                param_1[4] = param_1[4] + 1;
                param_1[5] = param_1[5] + 1;
                local_90 = param_1 + 3;
                local_d0 = 0x8483e89ba994d146;
                if ((char)param_1[3] != '\0') {
                  local_d0 = 0x4bc5da6f0288ca86;
                }
                local_d8 = 0xff2766c6ef680410;
              }
              else if (uVar3 == 0x62dd8085660aa268) {
                local_ac = local_b4;
                local_88 = (uint *)((longlong)param_1 + 0x14);
                local_d0 = 0x41fb29cc1f1c5c5a;
                if (local_b4 == local_c4) {
                  local_d0 = 0x14f63bcb5b480eb;
                }
                local_d8 = 0xae49f00c36d08aa2;
                local_c0 = local_c4;
              }
            }
            else if ((longlong)uVar3 < 0x7620052a03ad2ceb) {
              if (uVar3 == 0x6c6b9505c5fd9662) {
                FUN_18009fb00(param_1 + 7,local_a8,&local_61);
                local_d0 = 0x16274e6aa8e32df3;
                local_d8 = 0x62842e5ebeddabef;
              }
              else if (uVar3 == 0x74a36034163e861c) {
                local_c0 = *local_88;
                local_d0 = 0x917fcc9d9edb7186;
                if (local_c0 == local_b8) {
                  local_d0 = 0xa1f5f502d30e0908;
                }
                local_d8 = 0x3e795f2d1dbf7bcf;
              }
            }
            else if (uVar3 == 0x7620052a03ad2ceb) {
              *local_a8 = local_c5;
              *local_78 = *local_78 + 1;
              local_d0 = 0xd45c160e57c08919;
              local_d8 = 0xa0ff763a41fe0f05;
            }
            else if (uVar3 == 0x7ba48e5d46fcd556) {
              local_a0 = (longlong *)param_1[1];
              local_70 = local_a0 + 7;
              local_d0 = 0x1405b02b3a5518b2;
              if (*(longlong *)local_a0[7] == 0) {
                local_d0 = 0xe4d98e781d10f10;
              }
              local_d8 = 0x97c7d97e67cd502f;
            }
          }
          if (-0x607355d0314e8d3a < (longlong)uVar3) break;
          if ((longlong)uVar3 < -0x6e53130c4a734e12) {
            if (uVar3 == 0x83c269555d98489d) {
              local_80 = (int *)local_a0[10];
              local_b0 = *local_80;
              local_d0 = 0x4f83d861ada67a6e;
              if (0 < local_b0) {
                local_d0 = 0x3aaa67dcf8117757;
              }
              local_d8 = 0xd60999f84bba2551;
            }
            else if (uVar3 == 0x8442819bd4ebf703) {
              *(uint *)((longlong)param_1 + 0x14) = local_bc;
              local_d0 = 0xf80622c97f0c73a1;
              local_d8 = 0x9adba24c1906d1c9;
              local_b4 = local_bc;
            }
          }
          else if (uVar3 == 0x91acecf3b58cb1ee) {
            plVar1 = (longlong *)*param_1;
            FUN_18008c8f0((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4),
                          *(uint *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) | 1,0);
            local_d0 = 0x3045c1bb599600d;
            local_d8 = 0x8746dd806172970e;
            local_bc = local_c4;
          }
          else if (uVar3 == 0x998a4199e61c5f3f) {
            local_bc = (**(code **)(*local_a0 + 0x38))();
            local_d0 = 0x71ae6aeecf343868;
            if (local_bc == local_c4) {
              local_d0 = 0x64400786ae537e85;
            }
            local_d8 = 0xf5eceb751bdfcf6b;
          }
        }
        if ((longlong)uVar3 < -0x4b1d4356121f316a) break;
        if (uVar3 == 0xb4e2bca9ede0ce96) {
          *(undefined1 *)local_90 = 0;
          local_b4 = *(uint *)((longlong)param_1 + 0x14);
          local_d0 = 0xd80297aa63d4cb21;
          local_d8 = 0xbadf172f05de6949;
        }
        else if (uVar3 == 0xeca3fe24b3ab5206) {
          *local_80 = local_b0 + local_c4;
          pbVar2 = *(byte **)*local_70;
          *(byte **)*local_70 = pbVar2 + 1;
          local_bc = (uint)*pbVar2;
          local_d0 = 0x1fbdcda0a8fb36ee;
          local_d8 = 0x9bff4c3b7c10c1ed;
        }
      }
      if (uVar3 != 0x9f8caa2fceb172c7) break;
      param_1[6] = param_1[6] + 1;
      *local_98 = 0;
      local_d0 = 0x962da822c33c3a7f;
      local_d8 = 0x392b3b9240583036;
      local_c0 = local_b8;
    }
  } while (uVar3 != 0xaf0693b083640a49);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_f8)) {
  }
  return local_c0;
}



longlong FUN_18009fb00(ulonglong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  uintptr_t local_b0;
  longlong local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_100 = 0xcf145b10c1f1cb31;
  local_108 = 0x11f568dab6871c7c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_100 ^ 0x488f5062203a3833;
            uVar1 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x488f5062203a3833;
            local_100 = uVar3;
            if (-0xd0875bbe4095b39 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x4f7d1b47898b13ec) {
              if ((longlong)uVar1 < -0x65260b71a44af21b) {
                if (uVar1 == 0x8275dac09942affc) {
                  local_100 = 0x6fa013ed0a79f743;
                  if (local_c0 < local_f8) {
                    local_100 = 0xcff8404120449bbd;
                  }
                  local_108 = 0x6bf47eb179c4a470;
                }
                else if (uVar1 == 0x8ebff19bd765c89a) {
                  FUN_1802079d0(local_f0);
                  local_100 = 0xe482acc58c2955c4;
                  local_108 = 0x7e5b584bd79c5821;
                }
              }
              else if (uVar1 == 0x9ad9f48e5bb50de5) {
                local_98 = *param_1;
                local_100 = 0x7db939320dbf0284;
                if (local_98 == 0) {
                  local_100 = 0xeb59c211b81a5e99;
                }
                local_108 = 0x3311df7b2f45f7ce;
              }
              else if (uVar1 == 0xa40c3ef059803fcd) {
                local_100 = 0x509c9fcf9a17c6e3;
                if (local_f8 < 0xffffffffffffffd9) {
                  local_100 = 0x569d5ec31f0d87a6;
                }
                local_108 = 0x10e2552e36dd0710;
              }
            }
            else if ((longlong)uVar1 < -0x27b7e29568a056a9) {
              if (uVar1 == 0xb082e4b87674ec14) {
                local_68 = *(ulonglong *)(local_98 - 8);
                local_100 = 0x8bb667b8cc325cbb;
                if ((local_50 - local_68) - 8 < 0x20) {
                  local_100 = 0x97850267ba8b00be;
                }
                local_108 = 0x9b1392dd6fa16e04;
              }
              else if (uVar1 == 0xb3578abcc54f47c2) {
                local_60 = param_2 - local_78;
                local_58 = local_70 + local_b8;
                local_a0 = param_1 + 2;
                uVar3 = param_1[2] - local_78;
                uVar1 = uVar3 >> ((byte)local_b8 & 0x3f);
                local_f8 = uVar1 + uVar3;
                if (local_f8 <= local_58) {
                  local_f8 = local_58;
                }
                if ((local_e8 ^ uVar1) < uVar3) {
                  local_f8 = local_e8;
                }
                local_100 = 0xd461c260dff25b08;
                if (local_f8 == local_b0) {
                  local_100 = 0xa4e392e45d46503c;
                }
                local_108 = 0x561418a046b0f4f4;
                local_c8 = 0;
                local_d0 = param_2;
              }
            }
            else if (uVar1 == 0xdee133ca7776d74d) {
              local_e0 = 0x27;
              local_b0 = 0;
              local_b8 = 1;
              local_c0 = 0xfff;
              local_e8 = 0x7fffffffffffffff;
              local_d8 = param_1 + 1;
              local_78 = *param_1;
              local_70 = param_1[1] - local_78;
              local_100 = 0x78ed335922b9a7f2;
              if (local_70 == 0x7fffffffffffffff) {
                local_100 = 0xfbbada26527e00a5;
              }
              local_108 = 0xcbbab9e5e7f6e030;
            }
            else if (uVar1 == 0xd8481d6a975fa957) {
              *param_1 = local_f0;
              *local_d8 = local_f0 + local_58;
              *local_a0 = local_f0 + local_f8;
              return local_a8;
            }
          }
          if (0x300063c3b588e094 < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0xc9690bad52a6eba) {
            if (uVar1 == 0xf2f78a441bf6a4c8) {
              local_f0 = local_c8;
              local_a8 = local_c8 + local_60;
              *(undefined1 *)(local_c8 + local_60) = *param_3;
              local_100 = 0xaf174ecb9b13f67b;
              if (param_2 == *local_d8) {
                local_100 = 0xb794ac7f359b388;
              }
              local_108 = 0x85c6bb5c243c7b12;
            }
            else if (uVar1 == 0x4546d5c73bd5333) {
              local_c8 = FUN_1801d61c8(local_f8);
              local_100 = 0x5a4808c7bf0fe6a9;
              local_108 = 0xa8bf8283a4f94261;
            }
          }
          else if (uVar1 == 0xc9690bad52a6eba) {
            local_90 = local_48 + local_e0;
            local_100 = 0x3588771b9466ce31;
            local_108 = 0x5a28214426e6e397;
            local_88 = local_68;
          }
          else if (uVar1 == 0x2ad1f597bf2f8d69) {
            FUN_1802079d0(local_f0,*param_1,local_d0 - *param_1);
            FUN_1802079d0(local_a8 + 1,param_2);
            local_100 = 0xcddb56a8a23de473;
            local_108 = 0x5702a226f988e996;
          }
          else if (uVar1 == 0x10a5f565a39332bf) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b0);
          }
        }
        if ((longlong)uVar1 < 0x4ea8e64922faf54a) break;
        if (uVar1 == 0x4ea8e64922faf54a) {
          local_50 = local_98;
          local_90 = *local_a0 - local_98;
          local_100 = 0x7543b769057ec23;
          if (local_c0 < local_90) {
            local_100 = 0xd876899154a32d91;
          }
          local_108 = 0x68f46d2922d7c185;
          local_88 = local_98;
          local_48 = local_90;
        }
        else if (uVar1 == 0x6fa0565fb2802da6) {
          thunk_FUN_1801f42e0(local_88,local_90);
          local_100 = 0xb2840c96f929cb38;
          local_108 = 0x6acc11fc6e76626f;
        }
      }
      if (uVar1 != 0x467f0bed29d080b6) break;
      lVar2 = FUN_1801d61c8(local_f8 + local_e0);
      local_c8 = local_e0 + lVar2 & 0xffffffffffffffe0;
      *(longlong *)(local_c8 - 8) = lVar2;
      local_100 = 0xf6ca0309f7b461f0;
      local_108 = 0x43d894dec42c538;
    }
    if (uVar1 == 0x300063c3b588e095) {
      FUN_1800807e0();
    }
  } while (uVar1 != 0x407ecae1accac1f3);
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}


