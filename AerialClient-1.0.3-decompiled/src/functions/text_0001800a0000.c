#include "../include/aerialclient_types.h"


void FUN_1800a0330(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_70 = 0x62f8faa5530ec7ca;
  local_78 = 0x2f9d56e8c9f2f1b0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_70 ^ local_78;
        local_78 = local_78 ^ 0x71dcdde7f7102cc5;
        if (0x1074b583c17f6185 < (longlong)uVar1) break;
        if (uVar1 == 0xb473b876f051e216) {
          *local_50 = local_58 + local_68;
          puVar2 = local_60;
          if (0xf < local_48) {
            puVar2 = (undefined8 *)*local_60;
          }
          *(undefined1 *)((longlong)puVar2 + local_58) = local_79;
          *(undefined1 *)((longlong)puVar2 + local_58 + local_68) = 0;
          local_70 = 0x7b9301c86351da72;
          local_78 = 0x6be7b44ba22ebbf4;
        }
        else {
          local_70 = local_70 ^ 0x71dcdde7f7102cc5;
          if (uVar1 == 0xf769b3b35dd43bbf) {
            FUN_18006a970(local_60,local_68);
            local_70 = 0xd09fde29203fa264;
            local_78 = 0xc0eb6baae140c3e2;
          }
        }
      }
      if (uVar1 != 0x4d65ac4d9afc367a) break;
      local_68 = 1;
      local_60 = (undefined8 *)(param_1 + 0x50);
      local_50 = (longlong *)(param_1 + 0x60);
      local_58 = *(ulonglong *)(param_1 + 0x60);
      local_48 = *(ulonglong *)(param_1 + 0x68);
      local_70 = 0x977a570efe6afe87;
      if (local_58 < local_48) {
        local_70 = 0xd4605ccb53ef272e;
      }
      local_78 = 0x6013e4bda3bec538;
      local_79 = param_2;
    }
    local_70 = local_70 ^ 0x71dcdde7f7102cc5;
  } while (uVar1 != 0x1074b583c17f6186);
  return;
}



int FUN_1800a0530(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_b0;
  ulonglong local_a8;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int *local_58;
  int local_4c;
  int local_48;
  int local_44;

  local_a8 = 0x89d3f6a3e0578dbb;
  local_b0 = 0x5a61161983a15b40;
LAB_1800a05f0:
  while( true ) {
    uVar2 = local_a8 ^ 0x16243da97bf8e974;
    uVar1 = local_a8 ^ local_b0;
    local_b0 = local_b0 ^ 0x16243da97bf8e974;
    local_a8 = uVar2;
    if ((longlong)uVar1 < -0x241c864b35b98bf0) break;
    if ((longlong)uVar1 < 0x4a712fab58cedd5c) {
      if ((longlong)uVar1 < 0x17546735fa2bf2b0) {
        if (uVar1 == 0xdbe379b4ca467410) {
          local_68 = local_6c + local_8c;
          local_a8 = 0x44db684933478f05;
          local_b0 = 0x31abbc9f9a8e8487;
        }
        else if (uVar1 == 0x14da7ce083e04cc5) {
          local_a8 = 0x27bd6c5c39ac7acf;
          if ((uint)(local_74 + local_7c) < local_9c) {
            local_a8 = 0x5a678dbbb3dd974d;
          }
          local_b0 = 0x9bcf199f327cd23d;
        }
      }
      else if (uVar1 == 0x17546735fa2bf2b0) {
        local_5c = local_70 + local_8c;
        local_a8 = 0x2221327bd3b55901;
        local_b0 = 0x839ab4fa988dfd1f;
      }
      else if (uVar1 == 0x26ba897f31d737fc) {
        local_60 = local_78 + local_8c;
        local_a8 = 0x50b326d6d58f4684;
        local_b0 = 0xf110ccb248c93e6b;
      }
      else if (uVar1 == 0x32b6d1ed61c24f87) {
        local_68 = local_6c + local_90;
        local_a8 = 0xccfa0047e8bd127a;
        local_b0 = 0xb98ad491417419f8;
      }
    }
    else if ((longlong)uVar1 < 0x6ed63a170abaaa18) {
      if (uVar1 == 0x4a712fab58cedd5c) {
        local_a8 = 0x8ec5e5bebab9aa9;
        if ((uint)(local_70 + local_94) < local_9c) {
          local_a8 = 0x716e03791b3ac201;
        }
        local_b0 = 0x663a644ce11130b1;
        goto LAB_1800a05e3;
      }
      if (uVar1 == 0x57889a77145fc4fc) {
        local_a8 = 0xca5c265c847957f3;
        if ((uint)(local_6c + local_7c) < local_9c) {
          local_a8 = 0x77fda50c0855f62e;
        }
        local_b0 = 0x454b74e16997b9a9;
      }
      else if (uVar1 == 0x62a3f36148d7bc31) {
        local_60 = local_78 + local_90;
        local_a8 = 0x8a47151bb6207491;
        local_b0 = 0x2be4ff7f2b660c7e;
      }
    }
    else if (uVar1 == 0x7570d4d6a9c90b82) {
      local_4c = local_68 * 0x100 + local_44;
      FUN_18009f4a0(param_1);
      local_74 = *local_58;
      local_64 = local_74 + local_88;
      local_a8 = 0x75f6e3e6eec63c09;
      if (local_64 < local_84) {
        local_a8 = 0xccbd60493521a810;
      }
      local_b0 = 0x612c9f066d2670cc;
    }
    else if (uVar1 == 0x75faca8bed375d9f) {
      local_a8 = 0x529fdf1011a6e597;
      if ((uint)(local_70 + local_7c) < local_9c) {
        local_a8 = 0x9da083b7d7f8a994;
      }
      local_b0 = 0x18eef0bb496838cb;
    }
    else if (uVar1 == 0x6ed63a170abaaa18) {
      return local_98;
    }
  }
  if ((longlong)uVar1 < -0x526e00b0a7f82724) {
    if ((longlong)uVar1 < -0x70e8ad42121111a6) {
      if (uVar1 == 0x854e730c9e90915f) {
        local_5c = local_70 + local_90;
        local_a8 = 0x183d541d33ef70dd;
        local_b0 = 0xb986d29c78d7d4c3;
      }
      else if (uVar1 == 0x887b17b791ff3b4f) {
        local_64 = local_74 + local_8c;
        local_a8 = 0xa7f8151c88a9a023;
        local_b0 = 0xa69ea53d0ae78ff;
      }
      goto LAB_1800a05f0;
    }
    if (uVar1 != 0x8f1752bdedeeee5a) {
      if (uVar1 == 0xa1a3ea649d4678ef) {
        local_44 = local_60 << 0xc;
        FUN_18009f4a0(param_1);
        local_6c = *local_58;
        local_68 = local_6c + local_88;
        local_a8 = 0x6db33da3907e827f;
        if (local_68 < local_84) {
          local_a8 = 0x4f4b73022de84d01;
        }
        local_b0 = 0x3a3ba7d484214683;
      }
      else if (uVar1 == 0xa1bb86814b38a41e) {
        local_98 = local_5c + local_48;
        local_a8 = 0x1665bf47f2412a8f;
        local_b0 = 0x78b38550f8fb8097;
      }
      goto LAB_1800a05f0;
    }
    local_a8 = 0x1f9418421c48da93;
    if ((uint)(local_6c + local_94) < local_9c) {
      local_a8 = 0xaaa15be1dcb4049b;
    }
    local_b0 = 0x7142225516f2708b;
  }
  else if ((longlong)uVar1 < -0x3be562bfb22524a1) {
    if (uVar1 == 0xad91ff4f5807d8dc) {
      local_48 = local_64 * 0x10 + local_4c;
      FUN_18009f4a0(param_1);
      local_70 = *local_58;
      local_5c = local_70 + local_88;
      local_a8 = 0xce56272f404ce0e8;
      if (local_5c < local_84) {
        local_a8 = 0x1a176b25e6431969;
      }
      local_b0 = 0xbbaceda4ad7bbd77;
      goto LAB_1800a05f0;
    }
    if (uVar1 != 0xbc7275c30bd0a8f2) {
      if (uVar1 == 0xc1a8942481a14570) {
        local_64 = local_74 + local_90;
        local_a8 = 0xa99b7f9b69c330c9;
        local_b0 = 0x40a80d431c4e815;
      }
      goto LAB_1800a05f0;
    }
    local_a8 = 0xd889bb95fd277449;
    if ((uint)(local_74 + local_94) < local_9c) {
      local_a8 = 0x3e2496356662e51e;
    }
    local_b0 = 0xb65f8182f79dde51;
  }
  else {
    if (uVar1 != 0xc41a9d404ddadb5f) {
      if (uVar1 == 0xc466015d0df5bc4e) {
        local_a8 = 0xf26c4086aec50a27;
        if ((uint)(local_78 + local_7c) < local_9c) {
          local_a8 = 0x54d52ea7abc86d49;
        }
        local_b0 = 0x3676ddc6e31fd178;
      }
      else if (uVar1 == 0xd3b2e0ba63f6d6fb) {
        local_7c = -0x41;
        local_80 = -1;
        local_9c = 6;
        local_84 = 10;
        local_88 = -0x30;
        local_8c = -0x57;
        local_90 = -0x37;
        local_94 = -0x61;
        local_58 = (int *)(param_1 + 0x14);
        FUN_18009f4a0(param_1);
        local_78 = *(int *)(param_1 + 0x14);
        local_60 = local_78 - 0x30;
        local_a8 = 0xc4ea6b60dd0b9429;
        if (local_60 < 10) {
          local_a8 = 0xa12f80594db85088;
        }
        local_b0 = 0x8c6a3dd0fe2867;
      }
      goto LAB_1800a05f0;
    }
    local_a8 = 0xbd41dfa89b71abda;
    if ((uint)(local_78 + local_94) < local_9c) {
      local_a8 = 0xf52d6cc0a01c363e;
    }
    local_b0 = 0xd397e5bf91cb01c2;
  }
LAB_1800a05e3:
  local_98 = local_80;
  goto LAB_1800a05f0;
}



undefined1 FUN_1800a0d60(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b4;
  longlong local_b0;
  undefined8 *local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  int *local_80;
  int *local_78;
  int *local_68;
  ulonglong *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;

  local_c0 = 0x6e269bb79904c81c;
  local_c8 = 0x9dee4ee407d82e34;
LAB_1800a0e20:
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_c0 ^ 0xfc7352bb3128dd7d;
        uVar1 = local_c0 ^ local_c8;
        local_c8 = local_c8 ^ 0xfc7352bb3128dd7d;
        local_c0 = uVar3;
        if (-0xa303cd456c316b5 < (longlong)uVar1) break;
        if ((longlong)uVar1 < -0x479794b1e160c683) {
          if (uVar1 == 0xa54159248291dc66) {
            *local_a0 = local_90 + local_b0;
            puVar2 = local_a8;
            if (local_98 < local_58) {
              puVar2 = (undefined8 *)*local_a8;
            }
            *(undefined1 *)((longlong)puVar2 + local_90) = local_ca;
            *(undefined1 *)((longlong)puVar2 + local_90 + local_b0) = local_cb;
            local_c0 = 0x1b36c34cb9aeb2a1;
            local_c8 = 0xeef9006710925bed;
          }
          else if (uVar1 == 0xb78e19c52fbc403a) {
            local_c9 = (undefined1)local_b4;
            local_88 = *local_a0;
            local_50 = *local_60;
            local_c0 = 0x42c2dc5e3cbe63fb;
            if (local_88 < local_50) {
              local_c0 = 0x53700d8835084082;
            }
            local_c8 = 0x79509e29c8658347;
          }
          else if (uVar1 == 0xb6fc663e8f593536) {
            return local_cc;
          }
        }
        else if (uVar1 == 0xb8686b4e1e9f397d) {
          FUN_18006a970(local_a8,local_b0);
          local_c0 = 0x9217269f00db0e38;
          local_c8 = 0x67d8e5b4a9e7e774;
        }
        else if (uVar1 == 0xe6967c7462458ca0) {
          FUN_1800b8f52(&DAT_1802a3090,&DAT_180274969,0x12,0x26,&DAT_1802a30b8);
          *(undefined **)(param_1 + 0x70) = &DAT_1802a3090;
          local_c0 = 0x3cb907034104c4a6;
          local_c8 = 0x8a45613dce5df190;
          local_cc = 0;
        }
        else if (uVar1 == 0xf3c8d5539edce628) {
          local_98 = 0xf;
          local_b0 = 1;
          local_cb = 0;
          local_68 = (int *)(param_1 + 0x14);
          local_ca = *(undefined1 *)(param_1 + 0x14);
          local_a8 = (undefined8 *)(param_1 + 0x50);
          local_a0 = (ulonglong *)(param_1 + 0x60);
          local_90 = *(ulonglong *)(param_1 + 0x60);
          local_60 = (ulonglong *)(param_1 + 0x68);
          local_58 = *(ulonglong *)(param_1 + 0x68);
          local_c0 = 0xbdc0cfbb18a1cc8b;
          if (local_90 < local_58) {
            local_c0 = 0xa0e9fdd184af2990;
          }
          local_c8 = 0x5a8a4f5063ef5f6;
        }
      }
      if (0x3b924277f4dbe0bb < (longlong)uVar1) break;
      if (uVar1 == 0xf5cfc32ba93ce94c) {
        local_80 = (int *)*param_2;
        local_48 = param_2 + 1;
        local_c0 = 0xbbfcffd668475fe7;
        if (local_80 == (int *)param_2[1]) {
          local_c0 = 0x122b9b759f27087f;
        }
        local_c8 = 0xa4d7fd4b107e3d49;
LAB_1800a1117:
        local_cc = 1;
      }
      else if (uVar1 == 0x1f2b029d783962ae) {
        local_78 = local_80;
        FUN_18009f4a0(param_1);
        local_b4 = *local_68;
        local_c0 = 0x2c7e18d7dba48893;
        if (local_b4 < *local_80) {
          local_c0 = 0xf4704eebeebfadce;
        }
        local_c8 = 0x12e6329f8cfa216e;
      }
      else if (uVar1 == 0x2a2093a1fd6dc3c5) {
        *local_a0 = local_88 + local_b0;
        puVar2 = local_a8;
        if (local_98 < local_50) {
          puVar2 = (undefined8 *)*local_a8;
        }
        *(undefined1 *)((longlong)puVar2 + local_88) = local_c9;
        *(undefined1 *)((longlong)puVar2 + local_88 + local_b0) = local_cb;
        local_c0 = 0x9f7069f546f33af9;
        local_c8 = 0xc701ae90c564315e;
      }
    }
    if (uVar1 != 0x3b924277f4dbe0bc) {
      if (uVar1 == 0x3e982a48575ea9fd) {
        local_c0 = 0x37e6a42c675ded36;
        if (local_78[1] < local_b4) {
          local_c0 = 0x66fec19d2aa421ac;
        }
        local_c8 = 0x8068bde948e1ad0c;
      }
      else if (uVar1 == 0x5871c76583970ba7) {
        local_80 = local_78 + 2;
        local_c0 = 0xb14e9821fe166a83;
        if (local_80 == (int *)*local_48) {
          local_c0 = 0x1899fc8209763d1b;
        }
        local_c8 = 0xae659abc862f082d;
        goto LAB_1800a1117;
      }
      goto LAB_1800a0e20;
    }
    FUN_18006a970(local_a8,local_b0);
    local_c0 = 0xe50b2c32ca891caf;
    local_c8 = 0xbd7aeb57491e1708;
  } while( true );
}



undefined8 * FUN_1800a1310(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_4c;
  undefined8 *local_48;
  uint local_3c;
  ulonglong local_38;
  undefined1 local_29;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_29 = 9;
  local_90 = 0xe000000000000000;
  local_38 = 0;
  local_88 = 1;
  local_3c = 0xffffffff;
  local_4c = 0x20;
  local_80 = 5;
  local_68 = 0x1f;
  *param_1 = param_2;
  local_a0 = param_1 + 1;
  local_60 = param_1 + 4;
  local_98 = param_1 + 8;
  local_78 = param_1 + 0xe;
  param_1[0x15] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  local_58 = param_3;
  local_48 = param_1;
  if ((undefined8 *)param_3[7] == (undefined8 *)0x0) {
    *(undefined1 *)(param_1 + 0x16) = param_4;
    *(undefined1 *)(param_1 + 0x17) = 9;
    param_1[0x18] = 0;
    uVar4 = 0;
    local_b0 = 0;
    local_a8 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)param_3[7])();
    local_48[0x15] = uVar3;
    local_a8 = local_48[7];
    *(undefined1 *)(local_48 + 0x16) = param_4;
    *(undefined1 *)(local_48 + 0x17) = local_29;
    local_48[0x18] = 0;
    uVar4 = local_90;
    if ((longlong)local_38 <= (longlong)local_a8) {
      uVar4 = local_38;
    }
    local_b0 = local_48[4] + (local_a8 >> ((byte)local_80 & 0x3f)) * 4;
    local_a8 = local_68 & local_a8;
  }
  local_70 = local_48 + 0x17;
  local_b0 = local_b0 + uVar4;
  uVar5 = FUN_1800a7a20(local_60,&local_b0,local_88);
  uVar4 = local_90;
  if ((longlong)local_38 <= (longlong)uVar5) {
    uVar4 = local_38;
  }
  uVar6 = local_68 & uVar5;
  uVar7 = local_88 + uVar6 >> 3 & 4;
  uVar8 = local_88 + uVar6 & local_68;
  if ((uVar6 != uVar8) || (uVar7 != local_38)) {
    puVar9 = (uint *)(*local_60 + (uVar5 >> ((byte)local_80 & 0x3f)) * 4 + uVar4);
    uVar2 = local_3c << ((byte)uVar6 & 0x1f);
    if (uVar7 == local_38) {
      uVar2 = local_3c >> ((char)local_4c - (char)uVar8 & 0x1fU) & uVar2;
    }
    else {
      *puVar9 = *puVar9 | uVar2;
      FUN_180207610(puVar9 + 1,CONCAT71((int7)(uVar6 >> 8),0xff),uVar7 - 4);
      if (uVar8 == local_38) goto LAB_1800a1595;
      puVar9 = (uint *)((longlong)puVar9 + uVar7);
      uVar2 = local_3c >> ((char)local_4c - (char)uVar8 & 0x1fU);
    }
    *puVar9 = *puVar9 | uVar2;
  }
LAB_1800a1595:
  plVar1 = (longlong *)local_58[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_58);
  }
  return local_48;
}



void Unwind_1800a15c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x60));
    *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0xa8) = 0;
  }
  return;
}



void Unwind_1800a1610(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  FUN_18005a440(*(undefined8 *)(param_2 + 0x68));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x60));
    *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0xa8) = 0;
  }
  return;
}



void Unwind_1800a1670(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  FUN_1800a7440(*(undefined8 *)(param_2 + 0x40));
  FUN_1800a7440(*(undefined8 *)(param_2 + 0x78));
  FUN_1800a7730(*(undefined8 *)(param_2 + 0x38));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x80) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x80));
  }
  return;
}



ulonglong FUN_1800a16d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uintptr_t *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  longlong local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  ulonglong uStack_1e0;
  exception local_1d0;
  exception_vftable *local_138;
  undefined1 local_130 [24];
  int local_118;
  undefined4 local_114;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  uintptr_t local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_90;
  ulonglong local_88;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  ulonglong local_70;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_88 = 0xf;
  local_1d0.exception_data._76_4_ = 4;
  local_78 = 0x65;
  local_108 = 0x20;
  local_62 = 1;
  local_100 = 0xe000000000000000;
  local_70 = 0;
  local_118 = 0xc;
  local_90 = 1;
  local_f8 = -8;
  local_1d0.exception_data.offset_0x40 = -1;
  local_110 = 0x28;
  uVar15 = 3;
  uVar16 = 4;
  local_7c = 0xffffffff;
  local_114 = 0x20;
  local_61 = 0;
  uVar17 = 0xfffffffffffffffc;
  local_e0 = 5;
  local_f0 = 0xfff;
  local_74 = 0;
  local_1d0.exception_data.offset_0x38._0_4_ = 0x10;
  local_1d0.exception_data.offset_0x38._4_4_ = 10;
  local_e8 = 0x1f;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  lVar8 = param_1 + 0x48;
LAB_1800a1910:
  puVar7 = &local_1d0.exception_data.offset_0x70;
  lVar11 = param_1 + 0x98;
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 < 6) {
    if (iVar3 < 3) {
      if (iVar3 == 2) {
        local_1d0.exception_data.offset_0x70 = CONCAT71(local_1d0.exception_data.offset_0x70._1_7_,local_61);
        FUN_1800b02a0(param_2,&local_1d0,puVar7,0);
      }
      else {
        if (iVar3 != 1) goto LAB_1800a24ff;
        local_1d0.exception_data.offset_0x70 = CONCAT71(local_1d0.exception_data.offset_0x70._1_7_,local_62);
        FUN_1800b02a0(param_2,&local_1d0,puVar7,0);
      }
    }
    else if (iVar3 == 3) {
      local_1d0.exception_data.offset_0x70 = 0;
      FUN_1800b06e0(param_2,&local_1d0,puVar7,0);
    }
    else if (iVar3 == 5) {
      local_1d0.exception_data.offset_0x70 = *(uintptr_t *)(param_1 + 200);
      FUN_1800b13a0(param_2,&local_1d0,puVar7,0);
    }
    else {
      FUN_1800b0f20(param_2,&local_1d0,lVar11,0);
    }
    goto LAB_1800a1c7b;
  }
  if (iVar3 < 9) {
    if (iVar3 == 6) {
      local_1d0.exception_data.offset_0x70 = *(uintptr_t *)(param_1 + 0xc0);
      FUN_1800b0af0(param_2,&local_1d0,puVar7,0);
    }
    else {
      if (iVar3 == 8) {
        cVar2 = FUN_1800a9d00(param_2,local_1d0.exception_data.offset_0x40);
        if (cVar2 != '\0') {
          iVar3 = FUN_18009ad70(lVar8);
          *(int *)(param_1 + 0x40) = iVar3;
          if (iVar3 == local_1d0.exception_data.offset_0x38._4_4_) {
            cVar2 = FUN_1800aa110(param_2);
LAB_1800a1bcf:
            if (cVar2 != '\0') goto LAB_1800a1c7b;
            goto LAB_1800a2746;
          }
          uVar9 = local_100;
          if ((longlong)local_70 <= (longlong)uStack_1e0) {
            uVar9 = local_70;
          }
          local_1d0.exception_data.offset_0x0 = uStack_1e0 & local_e8;
          local_1d0.vftablePtr = (exception_vftable *)((uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
          uVar6 = FUN_1800a7a20(&local_1f8,&local_1d0,local_90);
          uVar9 = local_100;
          if ((longlong)local_70 <= (longlong)uVar6) {
            uVar9 = local_70;
          }
          uVar10 = local_e8 & uVar6;
          uVar12 = local_90 + uVar10 >> ((byte)uVar15 & 0x3f) & uVar16;
          uVar13 = local_90 + uVar10 & local_e8;
          if ((uVar10 != uVar13) || (uVar12 != local_70)) {
            puVar14 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
            uVar5 = local_7c << ((byte)uVar10 & 0x1f);
            if (uVar12 == local_70) {
              uVar5 = local_7c >> ((char)local_114 - (char)uVar13 & 0x1fU) & uVar5;
            }
            else {
              *puVar14 = *puVar14 | uVar5;
              FUN_180207610(puVar14 + 1,CONCAT71((int7)(uVar10 >> 8),0xff));
              if (uVar13 == local_70) goto LAB_1800a1910;
              puVar14 = (uint *)((longlong)puVar14 + uVar12);
              uVar5 = local_7c >> ((char)local_114 - (char)uVar13 & 0x1fU);
            }
            *puVar14 = *puVar14 | uVar5;
          }
          goto LAB_1800a1910;
        }
        goto LAB_1800a2746;
      }
      if (ABS((double)*(exception_vftable **)(param_1 + 0xd0)) == INFINITY) {
        local_1d0.exception_data.offset_0x50._0_4_ = CONCAT31(local_1d0.exception_data.offset_0x50._1_3_,0x27);
        FUN_1800a4920(lVar8,local_d8);
        FUN_1800b8f52(&DAT_1802a31e4,&DAT_180274c22,0x1b,0x1a,&DAT_1802a3200);
        FUN_1800aa8e0(&local_1d0.exception_data.offset_0x70,&DAT_1802a31e4,local_d8,
                      &local_1d0.exception_data.offset_0x50);
        FUN_1800aa510(&local_1d0,0x196,&local_1d0.exception_data.offset_0x70,0);
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800aa3e0(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1800a216c;
      }
      local_1d0.exception_data.offset_0x70 = (uintptr_t)*(exception_vftable **)(param_1 + 0xd0);
      FUN_1800afe70(param_2,&local_1d0,puVar7,0);
    }
LAB_1800a1c7b:
    while( true ) {
      if (uStack_1e0 == local_70) {
        uVar16 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        goto joined_r0x0001800a21a2;
      }
      uVar9 = local_100;
      if ((longlong)local_70 <= (longlong)uStack_1e0) {
        uVar9 = local_70;
      }
      uVar10 = local_1d0.exception_data.offset_0x40 + (local_e8 & uStack_1e0);
      uVar6 = local_100;
      if ((local_e8 & uStack_1e0) != local_70) {
        uVar6 = local_70;
      }
      if ((1 << ((byte)uVar10 & 0x1f) &
          *(uint *)(uVar6 + (uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9 +
                            (uVar10 >> ((byte)local_e0 & 0x3f)) * 4)) != local_74) {
        iVar3 = FUN_18009ad70(lVar8);
        *(int *)(param_1 + 0x40) = iVar3;
        if (iVar3 < 0xd) {
          if (iVar3 == 10) {
            cVar2 = FUN_1800aa110(param_2);
            goto LAB_1800a1d73;
          }
        }
        else if (iVar3 == 0xd) {
          uVar4 = FUN_18009ad70(lVar8);
          *(undefined4 *)(param_1 + 0x40) = uVar4;
          goto LAB_1800a1910;
        }
        FUN_1800b8f52(&DAT_1802a20b4,&DAT_180271e03,0x1a,6,&DAT_1802a20bc,uVar15,uVar16,uVar17);
        FUN_180057290(local_d8,&DAT_1802a20b4);
        FUN_1800a3fb0(param_1,&local_1d0.exception_data.offset_0x70,local_1d0.exception_data.offset_0x38._4_4_,local_d8)
        ;
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1800a216c;
      }
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (0xc < iVar3) break;
      if (iVar3 != 0xb) goto LAB_1800a1fe8;
      cVar2 = FUN_1800a94d0(param_2);
LAB_1800a1d73:
      if (cVar2 == '\0') goto LAB_1800a2746;
      uVar9 = local_100;
      if ((longlong)local_70 <= (longlong)uStack_1e0) {
        uVar9 = local_70;
      }
      local_1d0.exception_data.offset_0x0 = local_1d0.exception_data.offset_0x40 + (local_e8 & uStack_1e0);
      uVar6 = local_100;
      if ((local_e8 & uStack_1e0) != local_70) {
        uVar6 = local_70;
      }
      local_1d0.vftablePtr =
           (exception_vftable *)
           ((uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9 +
            (local_1d0.exception_data.offset_0x0 >> ((byte)local_e0 & 0x3f)) * 4 + uVar6);
      local_1d0.exception_data.offset_0x0 = local_1d0.exception_data.offset_0x0 & local_e8;
      FUN_1800b17d0(&local_1f8,puVar7);
    }
    if (iVar3 != 0xd) {
LAB_1800a1fe8:
      FUN_1800b8f52(&DAT_1802a20a8,&DAT_180271dce,0x1a,7,&DAT_1802a20b0,uVar15,uVar16,uVar17);
      FUN_180057290(local_d8,&DAT_1802a20a8);
      FUN_1800a3fb0(param_1,&local_1d0.exception_data.offset_0x70,0xb,local_d8);
      local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
      local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
      local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
      local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
      local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0);
      FUN_1800a4920(lVar8,&local_b8);
      uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
LAB_1800a216c:
      FUN_180001ef0(&local_b8);
      std::exception::exception(&local_1d0);
      FUN_180001ef0(&local_1d0.exception_data.offset_0x70);
      puVar7 = local_d8;
LAB_1800a2196:
      uVar16 = (ulonglong)uVar5;
      FUN_180001ef0(puVar7);
joined_r0x0001800a21a2:
      if (local_1f8 != 0) {
        uVar9 = local_1e8 - local_1f8;
        lVar8 = local_1f8;
        if (local_f0 < uVar9) {
          lVar8 = *(longlong *)(local_1f8 + -8);
          if (local_108 <= (ulonglong)((local_1f8 + local_f8) - lVar8)) {
LAB_1800a2b18:
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_74,local_70);
          }
          uVar9 = uVar9 + 0x27;
        }
        thunk_FUN_1801f42e0(lVar8,uVar9);
      }
      return uVar16 & 0xffffffff;
    }
    iVar3 = FUN_18009ad70(lVar8);
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 != local_1d0.exception_data._76_4_) {
      FUN_1800b8f52(&DAT_1802a31bc,&DAT_180274baa,0x15,0xb,&DAT_1802a31c8);
      FUN_180057290(local_d8,&DAT_1802a31bc);
      FUN_1800a3fb0(param_1,&local_1d0.exception_data.offset_0x70,local_1d0.exception_data._76_4_,local_d8);
      local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
      local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
      local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
      local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
      local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0);
      FUN_1800a4920(lVar8,&local_b8);
      uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
      goto LAB_1800a216c;
    }
    cVar2 = FUN_1800a98e0(param_2,lVar11);
    if (cVar2 != '\0') {
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_118) {
        FUN_1800b8f52(&DAT_1802a31cc,&DAT_180274bdf,0x13,0x11,&DAT_1802a31e0);
        FUN_180057290(local_d8,&DAT_1802a31cc);
        FUN_1800a3fb0(param_1,&local_1d0.exception_data.offset_0x70,local_118,local_d8);
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1800a216c;
      }
      uVar4 = FUN_18009ad70(lVar8);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      goto LAB_1800a1910;
    }
  }
  else {
    if (iVar3 < 0xe) {
      if (iVar3 != 9) {
LAB_1800a24ff:
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = local_e0;
        local_a0 = local_88;
        FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c,uVar15,uVar16,uVar17);
        local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a3198),DAT_1802a3194);
        FUN_1800a3fb0(param_1,local_d8,(undefined4)local_1d0.exception_data.offset_0x38,&local_b8);
        local_208 = *(undefined8 *)(param_1 + 0x78);
        local_218 = *(undefined4 *)(param_1 + 0x68);
        uStack_214 = *(undefined4 *)(param_1 + 0x6c);
        uStack_210 = *(undefined4 *)(param_1 + 0x70);
        uStack_20c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0.exception_data.offset_0x70,local_78,&local_218,local_d8,0);
        FUN_1800a4920(lVar8,&local_1d0.exception_data.offset_0x50);
        *(undefined1 *)(param_2 + 0x68) = local_62;
        if (*(char *)(param_2 + 0xb0) == '\x01') {
          std::runtime_error::runtime_error((runtime_error *)&local_1d0,(longlong)&local_1d0.exception_data.offset_0x70)
          ;
          FUN_1801dd110((runtime_error *)&local_1d0,&DAT_180253730);
        }
        goto LAB_1800a25e3;
      }
      cVar2 = FUN_1800a90c0(param_2,local_1d0.exception_data.offset_0x40);
      if (cVar2 == '\0') goto LAB_1800a2746;
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (10 < iVar3) {
        if (iVar3 == 0xb) {
          cVar2 = FUN_1800a94d0(param_2);
          goto LAB_1800a1bcf;
        }
LAB_1800a2319:
        FUN_1800b8f52(&DAT_1802a31bc,&DAT_180274baa,0x15,0xb,&DAT_1802a31c8);
        FUN_180057290(local_d8,&DAT_1802a31bc);
        FUN_1800a3fb0(param_1,&local_1d0.exception_data.offset_0x70,local_1d0.exception_data._76_4_,local_d8);
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1800a216c;
      }
      if (iVar3 != 4) goto LAB_1800a2319;
      cVar2 = FUN_1800a98e0(param_2,lVar11);
      if (cVar2 == '\0') goto LAB_1800a2746;
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_118) {
        FUN_1800b8f52(&DAT_1802a31cc,&DAT_180274bdf,0x13,0x11,&DAT_1802a31e0);
        FUN_180057290(local_d8,&DAT_1802a31cc);
        FUN_1800a3fb0(param_1,&local_1d0.exception_data.offset_0x70,local_118,local_d8);
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1800a216c;
      }
      uVar9 = local_100;
      if ((longlong)local_70 <= (longlong)uStack_1e0) {
        uVar9 = local_70;
      }
      local_1d0.exception_data.offset_0x0 = uStack_1e0 & local_e8;
      local_1d0.vftablePtr = (exception_vftable *)((uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
      uVar6 = FUN_1800a7a20(&local_1f8,&local_1d0,local_90);
      uVar9 = local_100;
      if ((longlong)local_70 <= (longlong)uVar6) {
        uVar9 = local_70;
      }
      uVar10 = local_e8 & uVar6;
      uVar12 = local_90 + uVar10 >> ((byte)uVar15 & 0x3f) & uVar16;
      uVar13 = local_90 + uVar10 & local_e8;
      if ((uVar10 != uVar13) || (uVar12 != local_70)) {
        puVar14 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
        uVar5 = local_7c << ((byte)uVar10 & 0x1f) ^ local_7c;
        if (uVar12 == local_70) {
          uVar5 = local_7c >> ((char)local_114 - (char)uVar13 & 0x1fU) ^ local_7c | uVar5;
        }
        else {
          *puVar14 = *puVar14 & uVar5;
          FUN_180207610(puVar14 + 1,0);
          if (uVar13 == local_70) goto LAB_1800a1f6c;
          puVar14 = (uint *)((longlong)puVar14 + uVar12);
          uVar5 = local_7c >> ((char)local_114 - (char)uVar13 & 0x1fU) ^ local_7c;
        }
        *puVar14 = *puVar14 & uVar5;
      }
LAB_1800a1f6c:
      uVar4 = FUN_18009ad70(lVar8);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      goto LAB_1800a1910;
    }
    if (iVar3 == 0xe) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = local_e0;
      local_a0 = local_88;
      FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c,uVar15,uVar16,uVar17);
      local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a3198),DAT_1802a3194);
      FUN_1800a3fb0(param_1,local_d8,local_74,&local_b8);
      local_208 = *(undefined8 *)(param_1 + 0x78);
      local_218 = *(undefined4 *)(param_1 + 0x68);
      uStack_214 = *(undefined4 *)(param_1 + 0x6c);
      uStack_210 = *(undefined4 *)(param_1 + 0x70);
      uStack_20c = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0.exception_data.offset_0x70,local_78,&local_218,local_d8,0);
      FUN_1800a4920(lVar8,&local_1d0.exception_data.offset_0x50);
      *(undefined1 *)(param_2 + 0x68) = local_62;
      if (*(char *)(param_2 + 0xb0) == '\x01') {
        std::runtime_error::runtime_error((runtime_error *)&local_1d0,(longlong)&local_1d0.exception_data.offset_0x70);
        FUN_1801dd110((runtime_error *)&local_1d0,&DAT_180253730);
      }
    }
    else {
      if (iVar3 != 0xf) goto LAB_1800a24ff;
      plVar1 = (longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == local_90) {
        FUN_1800b8f52(&DAT_1802a3204,&DAT_180274c67,0x1c,0x66,&DAT_1802a326c,uVar15,uVar16,uVar17);
        FUN_180057290(&local_1d0.exception_data.offset_0x70,&DAT_1802a3204);
        local_a8 = *(undefined8 *)(param_1 + 0x78);
        local_b8 = *plVar1;
        uStack_b0 = *(undefined8 *)(param_1 + 0x70);
        FUN_1800a3a60(&local_1d0,local_78,&local_b8,&local_1d0.exception_data.offset_0x70,0);
        FUN_1800a4920(lVar8,local_d8);
        uVar5 = FUN_1800a3920(param_2,*plVar1,local_d8,&local_1d0);
        FUN_180001ef0(local_d8);
        std::exception::exception(&local_1d0);
        puVar7 = &local_1d0.exception_data.offset_0x70;
        goto LAB_1800a2196;
      }
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = local_e0;
      local_a0 = local_88;
      FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c,uVar15,uVar16,uVar17);
      local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a3198),DAT_1802a3194);
      FUN_1800a3fb0(param_1,local_d8,(undefined4)local_1d0.exception_data.offset_0x38,&local_b8);
      local_208 = *(undefined8 *)(param_1 + 0x78);
      local_218 = *(undefined4 *)plVar1;
      uStack_214 = *(undefined4 *)(param_1 + 0x6c);
      uStack_210 = *(undefined4 *)(param_1 + 0x70);
      uStack_20c = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0.exception_data.offset_0x70,local_78,&local_218,local_d8,0);
      FUN_1800a4920(lVar8,&local_1d0.exception_data.offset_0x50);
      *(undefined1 *)(param_2 + 0x68) = local_62;
      if (*(char *)(param_2 + 0xb0) == '\x01') {
        std::runtime_error::runtime_error((runtime_error *)&local_1d0,(longlong)&local_1d0.exception_data.offset_0x70);
        FUN_1801dd110((runtime_error *)&local_1d0,&DAT_180253730);
      }
    }
LAB_1800a25e3:
    if (local_88 < local_1d0.exception_data.offset_0x68) {
      lVar11 = CONCAT44(local_1d0.exception_data.offset_0x50._4_4_,(undefined4)local_1d0.exception_data.offset_0x50);
      uVar16 = local_90 + local_1d0.exception_data.offset_0x68;
      lVar8 = lVar11;
      if (local_f0 < uVar16) {
        lVar8 = *(longlong *)(lVar11 + -8);
        if (local_108 <= (ulonglong)((lVar11 + local_f8) - lVar8)) goto LAB_1800a2b18;
        uVar16 = local_1d0.exception_data.offset_0x68 + local_110;
      }
      thunk_FUN_1801f42e0(lVar8,uVar16);
    }
    local_1d0.exception_data.offset_0x70 = (uintptr_t)&PTR_exception_18020e910;
    local_138 = &std::exception::vftable;
    FUN_1801dd238(local_130);
    local_1d0.exception_data.offset_0x70 = (uintptr_t)&std::exception::vftable;
    FUN_1801dd238(&local_1d0.exception_data.offset_0x78);
    if (local_88 < local_c0) {
      lVar11 = CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]);
      uVar16 = local_90 + local_c0;
      lVar8 = lVar11;
      if (local_f0 < uVar16) {
        lVar8 = *(longlong *)(lVar11 + -8);
        if (local_108 <= (ulonglong)((lVar11 + local_f8) - lVar8)) goto LAB_1800a2b18;
        uVar16 = local_c0 + local_110;
      }
      thunk_FUN_1801f42e0(lVar8,uVar16);
    }
    local_c8 = local_70;
    local_c0 = local_88;
    local_d8[0]._0_1_ = local_61;
    if (local_88 < local_a0) {
      uVar16 = local_90 + local_a0;
      lVar8 = local_b8;
      if (local_f0 < uVar16) {
        lVar8 = *(longlong *)(local_b8 + -8);
        if (local_108 <= (ulonglong)((local_b8 + local_f8) - lVar8)) goto LAB_1800a2b18;
        uVar16 = local_a0 + local_110;
      }
      thunk_FUN_1801f42e0(lVar8,uVar16);
    }
  }
LAB_1800a2746:
  uVar16 = 0;
  goto joined_r0x0001800a21a2;
}



void Unwind_1800a2b60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a2bb0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a2c00(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a2c50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a2ca0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a2cf0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a2d40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a2d90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a2de0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a2e30(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a2e80(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a2ed0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a2f20(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a2f70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a2fc0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a3010(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a3060(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a30b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a3100(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a3150(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1800a31a0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x100));
  return;
}



void Unwind_1800a31f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1800a3240(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a3290(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a32e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a3330(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x100));
  return;
}



void Unwind_1800a3380(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a33d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1800a3420(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a3470(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a34c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a3510(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x100));
  return;
}



void Unwind_1800a3560(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a35b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a3600(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a3650(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a36a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1800a36f0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a3740(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a3790(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a37e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800a3830(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a3880(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800a38d0(undefined8 param_1,longlong param_2)

{
  FUN_1800a7440(param_2 + 0x60);
  return;
}



undefined8 FUN_1800a3920(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_a8;
  local_78 = 0x186f8e4ef1b4bb74;
  local_80 = 0xc2e02fd96d4de6b9;
  while( true ) {
    while( true ) {
      uVar2 = local_78 ^ 0x1aa8d1ba705f56f2;
      uVar1 = local_78 ^ local_80;
      local_80 = local_80 ^ 0x1aa8d1ba705f56f2;
      if (uVar1 != 0xda8fa1979cf95dcd) break;
      *(undefined1 *)(param_1 + 0x68) = 1;
      local_78 = 0x1fb7d7a26c67fe1;
      if (*(char *)(param_1 + 0xb0) != '\0') {
        local_78 = 0x9ba0872b77854aaa;
      }
      local_80 = 0x1643e32a6d7905a7;
    }
    if (uVar1 == 0x17b89e504bbf7a46) break;
    local_78 = uVar2;
    if (uVar1 == 0x8de364011afc4f0d) {
      std::runtime_error::runtime_error((runtime_error *)&stack0xffffffffffffff90,param_4);
      FUN_1801dd110((runtime_error *)&stack0xffffffffffffff90,&DAT_180253730);
    }
  }
  if (DAT_1802a0400 == (local_30 ^ (ulonglong)auStack_a8)) {
    return 0;
  }
}



void * __thiscall FUN_1800a3a60(void *this,undefined4 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  ulonglong uVar5;
  longlong local_128 [2];
  longlong local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  uintptr_t local_f8;
  ulonglong local_f0;
  undefined7 local_e8;
  undefined4 uStack_e1;
  undefined5 uStack_dd;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  uintptr_t local_b8;
  ulonglong local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uintptr_t local_58;
  uint local_4c;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_80 = 0x20;
  local_58 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_60 = 0xfff;
  local_4c = 0;
  local_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0xf;
  FUN_1800b3200(local_128,param_3);
  uStack_e1._1_3_ = (undefined3)local_58;
  uStack_dd = (undefined5)(local_58 >> 0x18);
  local_d8 = 0xb;
  local_d0 = local_48;
  FUN_1800b8f52(&DAT_1802a3330,&DAT_180274ee9,0x1f,0xc,&DAT_1802a333c);
  local_e8 = (undefined7)DAT_1802a3330;
  uStack_e1 = ram0x0001802a3337;
  FUN_180081f20(&local_108,&local_e8,param_2);
  local_c8 = (undefined8 ***)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = local_48;
  if (local_48 < *(longlong *)(param_4 + 0x10) + local_f8 + 0xd + local_118 + local_98) {
    FUN_180002240(&local_c8);
    local_b8 = local_58;
  }
  FUN_1800b8f52(&DAT_1802a3320,&DAT_180274eb1,0x17,0xc,&DAT_1802a332c);
  FUN_1800b8f52(&DAT_1802a1fd8,&DAT_180271a87,0x1b,3,&DAT_1802a1fdc);
  FUN_1800b3720(&local_c8,&local_108,&DAT_1802a3320,local_128,&DAT_1802a1fd8,&local_a8,param_4);
  if (local_48 < local_f0) {
    lVar2 = CONCAT71(uStack_107,local_108);
    uVar5 = local_78 + local_f0;
    lVar3 = lVar2;
    if (local_60 < uVar5) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (local_80 <= (ulonglong)((lVar2 + local_70) - lVar3)) goto LAB_1800a3ecc;
      uVar5 = local_f0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar3,uVar5);
  }
  local_f8 = local_58;
  local_f0 = local_48;
  local_108 = 0;
  if (local_48 < local_d0) {
    lVar2 = CONCAT17((undefined1)uStack_e1,local_e8);
    uVar5 = local_78 + local_d0;
    lVar3 = lVar2;
    if (local_60 < uVar5) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (local_80 <= (ulonglong)((lVar2 + local_70) - lVar3)) goto LAB_1800a3ecc;
      uVar5 = local_d0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar3,uVar5);
  }
  if (local_48 < local_110) {
    uVar5 = local_78 + local_110;
    lVar3 = local_128[0];
    if (local_60 < uVar5) {
      lVar3 = *(longlong *)(local_128[0] + -8);
      if (local_80 <= (ulonglong)((local_128[0] + local_70) - lVar3)) goto LAB_1800a3ecc;
      uVar5 = local_110 + local_68;
    }
    thunk_FUN_1801f42e0(lVar3,uVar5);
  }
  if (local_48 < local_90) {
    uVar5 = local_78 + local_90;
    pppuVar4 = (undefined8 ***)local_a8;
    if (local_60 < uVar5) {
      pppuVar4 = (undefined8 ***)local_a8[-1];
      if (local_80 <= (ulonglong)((longlong)local_a8 + (local_70 - (longlong)pppuVar4))) goto LAB_1800a3ecc;
      uVar5 = local_90 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar4,uVar5);
  }
  uVar1 = *param_3;
  local_a8 = &local_c8;
  if (local_48 < local_b0) {
    local_a8 = local_c8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
  FUN_1801dd1b8(&local_a8,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020f2d0;
  *(undefined8 *)((longlong)this + 0x38) = uVar1;
  if (local_48 < local_b0) {
    uVar5 = local_78 + local_b0;
    pppuVar4 = (undefined8 ***)local_c8;
    if (local_60 < uVar5) {
      pppuVar4 = (undefined8 ***)local_c8[-1];
      if (local_80 <= (ulonglong)((longlong)local_c8 + (local_70 - (longlong)pppuVar4))) {
LAB_1800a3ecc:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_58);
      }
      uVar5 = local_b0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar4,uVar5);
  }
  return this;
}



void Unwind_1800a3ef0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  FUN_180001ef0(param_2 + 0x40);
  return;
}



void Unwind_1800a3f30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xc0);
  return;
}



void Unwind_1800a3f70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  FUN_180001ef0(param_2 + 0x60);
  return;
}



undefined8 * FUN_1800a3fb0(longlong param_1,undefined8 *param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 ******ppppppuVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined8 local_f0;
  undefined8 *****local_e8 [3];
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  uint local_b4;
  undefined *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 *****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  uint local_58;
  undefined1 local_51;
  ulonglong local_50;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_b0 = (undefined *)0x20;
  local_68 = 0;
  local_a8 = 1;
  local_a0 = -8;
  local_98 = 0x28;
  local_b4 = 0x11;
  local_41 = 0;
  local_90 = 0xfff;
  local_58 = 0;
  local_c8 = 0xd;
  local_c0 = 2;
  param_2[1] = 0;
  param_2[2] = 0xd;
  param_2[3] = 0xf;
  FUN_1800b8f52(&DAT_1802a3360,&DAT_180274fa4,0x18,0xe,&DAT_1802a3370);
  *(ulonglong *)((longlong)param_2 + 5) = CONCAT53(uRam00000001802a3368,DAT_1802a3360._5_3_);
  *param_2 = CONCAT35(DAT_1802a3360._5_3_,(undefined5)DAT_1802a3360);
  lVar5 = local_c8;
  uVar7 = local_50;
  local_60 = param_2;
  if (*(ulonglong *)(param_4 + 0x10) != local_68) {
    local_e8[0] = (undefined8 *****)CONCAT71(local_e8[0]._1_7_,0x20);
    local_88 = (undefined8 ******)0x0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = local_50;
    if (local_50 < *(ulonglong *)(param_4 + 0x10) + local_50) {
      FUN_180002240(&local_88);
      local_78 = local_68;
    }
    FUN_1800b8f52(&DAT_1802a3374,&DAT_180274fe1,0x1a,0xf,&DAT_1802a3384);
    FUN_1800b4b50(&local_88,&DAT_1802a3374,param_4,local_e8);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      param_2 = local_60;
      if (local_50 < local_70) {
LAB_1800a423d:
        param_2 = local_60;
        uVar7 = local_a8 + local_70;
        ppppppuVar9 = (undefined8 ******)local_88;
        if (local_90 < uVar7) {
          ppppppuVar9 = (undefined8 ******)local_88[-1];
          if (local_b0 <= (undefined *)((longlong)local_88 + (local_a0 - (longlong)ppppppuVar9))) goto LAB_1800a473a;
          uVar7 = local_70 + local_98;
        }
        thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      param_2 = local_60;
      if (local_50 < local_70) goto LAB_1800a423d;
    }
    lVar5 = param_2[2];
    uVar7 = param_2[3];
  }
  uVar3 = local_c0;
  if (uVar7 - lVar5 < local_c0) {
    FUN_1800b8f52(&DAT_1802a3388,&DAT_18027501b,0x1b,3,&DAT_1802a338c);
    FUN_180066dd0(param_2,uVar3);
  }
  else {
    param_2[2] = local_c0 + lVar5;
    if (local_50 < uVar7) {
      param_2 = (undefined8 *)*param_2;
    }
    *(undefined2 *)((longlong)param_2 + lVar5) = 0x202d;
    *(undefined1 *)((longlong)param_2 + local_c0 + lVar5) = local_41;
  }
  uVar4 = local_b4;
  uVar2 = *(uint *)(param_1 + 0x40);
  if (uVar2 == 0xe) {
    local_51 = 0x27;
    FUN_1800a4920(param_1 + 0x48,local_e8);
    local_f0 = *(undefined8 *)(param_1 + 0xb8);
    FUN_1800b8f52(&DAT_1802a3390,&DAT_18027504b,0x1f,0xf,&DAT_1802a33a0);
    FUN_1800b4840(&local_88,&local_f0,&DAT_1802a3390,local_e8,&local_51);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      if (local_50 < local_70) {
LAB_1800a4544:
        uVar7 = local_a8 + local_70;
        ppppppuVar9 = (undefined8 ******)local_88;
        if (local_90 < uVar7) {
          ppppppuVar9 = (undefined8 ******)local_88[-1];
          if (local_b0 <= (undefined *)((longlong)local_88 + (local_a0 - (longlong)ppppppuVar9))) goto LAB_1800a473a;
          uVar7 = local_70 + local_98;
        }
        thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      if (local_50 < local_70) goto LAB_1800a4544;
    }
    local_78 = local_68;
    local_70 = local_50;
    local_88 = (undefined8 *****)CONCAT71(local_88._1_7_,local_41);
    if (local_50 < local_d0) {
      uVar7 = local_a8 + local_d0;
      ppppppuVar6 = (undefined8 ******)local_e8[0];
      ppppppuVar9 = (undefined8 ******)local_e8[0];
      if (local_90 < uVar7) {
LAB_1800a45ab:
        ppppppuVar9 = (undefined8 ******)ppppppuVar6[-1];
        if (local_b0 <= (undefined *)((longlong)ppppppuVar6 + (local_a0 - (longlong)ppppppuVar9))) goto LAB_1800a473a;
        uVar7 = local_d0 + local_98;
      }
LAB_1800a45ca:
      thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
    }
  }
  else {
    ppppppuVar9 = (undefined8 ******)&DAT_1802a34b0;
    FUN_1800b8f52(&DAT_1802a34b0,&DAT_18027544e,0x12,0xe,&DAT_1802a34c0);
    if (uVar2 < uVar4) {
      FUN_1800b9a10(&DAT_1802a3580);
      ppppppuVar9 = *(undefined8 *******)(&DAT_1802a3580 + (ulonglong)uVar2 * 8);
    }
    local_e8[0] = ppppppuVar9;
    FUN_1800b8f52(&DAT_1802a33a4,&DAT_180275093,0x18,0xc,&DAT_1802a33b0);
    FUN_1800b49b0(&local_88,&DAT_1802a33a4,local_e8);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      if (local_50 < local_70) {
LAB_1800a44f9:
        uVar7 = local_a8 + local_70;
        local_d0 = local_70;
        ppppppuVar6 = (undefined8 ******)local_88;
        ppppppuVar9 = (undefined8 ******)local_88;
        if (local_90 < uVar7) goto LAB_1800a45ab;
        goto LAB_1800a45ca;
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      if (local_50 < local_70) goto LAB_1800a44f9;
    }
  }
  uVar2 = local_b4;
  if (param_3 != local_58) {
    ppppppuVar9 = (undefined8 ******)&DAT_1802a34b0;
    FUN_1800b8f52(&DAT_1802a34b0,&DAT_18027544e,0x12,0xe,&DAT_1802a34c0);
    if (param_3 < uVar2) {
      FUN_1800b9e50(&DAT_1802a3610);
      ppppppuVar9 = *(undefined8 *******)(&DAT_1802a3610 + (ulonglong)(param_3 - 1) * 8);
    }
    local_e8[0] = ppppppuVar9;
    FUN_1800b8f52(&DAT_1802a33b4,&DAT_1802750d0,0x13,0xc,&DAT_1802a33c0);
    FUN_1800b49b0(&local_88,&DAT_1802a33b4,local_e8);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      if (local_70 <= local_50) {
        return local_60;
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      if (local_70 <= local_50) {
        return local_60;
      }
    }
    uVar7 = local_a8 + local_70;
    ppppppuVar9 = (undefined8 ******)local_88;
    if (local_90 < uVar7) {
      ppppppuVar9 = (undefined8 ******)local_88[-1];
      if (local_b0 <= (undefined *)((longlong)local_88 + (local_a0 - (longlong)ppppppuVar9))) {
LAB_1800a473a:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_58,local_68);
      }
      uVar7 = local_70 + local_98;
    }
    thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
  }
  return local_60;
}



void Unwind_1800a4760(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1800a47a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_1800a47e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xb8));
  return;
}



void Unwind_1800a4820(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1800a4860(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1800a48a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1800a48e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



undefined8 * FUN_1800a4920(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char local_78 [16];
  longlong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_60 = 0xf;
  local_68 = 1;
  local_49 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  pbVar7 = *(byte **)(param_1 + 0x38);
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar7 != pbVar2) {
    local_58 = param_2;
    do {
      bVar1 = *pbVar7;
      if (bVar1 < 0x20) {
        local_78[8] = 0;
        local_78[0] = '\0';
        local_78[1] = '\0';
        local_78[2] = '\0';
        local_78[3] = '\0';
        local_78[4] = '\0';
        local_78[5] = '\0';
        local_78[6] = '\0';
        local_78[7] = '\0';
        FUN_1800b8f52(&DAT_1802a34c4,&DAT_18027548b,0x1d,9,&DAT_1802a34d0);
        FUN_180096a50(local_78,9,&DAT_1802a34c4,bVar1);
        sVar4 = strlen(local_78);
        lVar3 = local_58[2];
        uVar6 = local_58[3] - lVar3;
        if (uVar6 < sVar4) {
          FUN_180066dd0(local_58,sVar4,uVar6,local_78,sVar4);
        }
        else {
          local_58[2] = sVar4 + lVar3;
          puVar5 = local_58;
          if (local_60 < (ulonglong)local_58[3]) {
            puVar5 = (undefined8 *)*local_58;
          }
          FUN_1802079d0(lVar3 + (longlong)puVar5,local_78,sVar4);
          *(undefined1 *)((longlong)puVar5 + sVar4 + lVar3) = local_49;
        }
      }
      else {
        uVar6 = local_58[2];
        if (uVar6 < (ulonglong)local_58[3]) {
          local_58[2] = local_68 + uVar6;
          puVar5 = local_58;
          if (local_60 < (ulonglong)local_58[3]) {
            puVar5 = (undefined8 *)*local_58;
          }
          *(byte *)((longlong)puVar5 + uVar6) = bVar1;
          *(undefined1 *)((longlong)puVar5 + local_68 + uVar6) = local_49;
        }
        else {
          FUN_18006a970(local_58,local_68);
        }
      }
      pbVar7 = pbVar7 + 1;
      param_2 = local_58;
    } while (pbVar7 != pbVar2);
  }
  return param_2;
}



void Unwind_1800a4b30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x50));
  return;
}



void FUN_1800a4bb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  FUN_18007ff50(param_1 + 0xc0,*(undefined1 *)(param_1 + 0xb8));
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar4 = *(longlong *)(param_1 + 0x50) - lVar2;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar3)) goto LAB_1800a4d54;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar4 = *(longlong *)(param_1 + 0x30) - lVar2;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar3)) goto LAB_1800a4d54;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar4 = *(longlong *)(param_1 + 0x18) - lVar2;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar3)) {
LAB_1800a4d54:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



void Unwind_1800a4d70(void)

{
  Unwind_1801dd394();
}



ulonglong FUN_1800a4d90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  undefined4 local_1c8;
  int local_1c4;
  exception local_1c0;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulonglong local_120;
  int local_118;
  undefined4 local_114;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  ulonglong local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_90;
  ulonglong local_88;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  ulonglong local_70;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_88 = 0xf;
  local_1c0.exception_data.offset_0x78._4_4_ = 4;
  local_78 = 0x65;
  local_108 = 0x20;
  local_61 = 1;
  local_100 = 0xe000000000000000;
  local_70 = 0;
  local_118 = 0xc;
  local_7c = 0xffffffff;
  local_1f0 = -1;
  local_f8 = -8;
  local_90 = 1;
  local_110 = 0x28;
  uVar14 = 4;
  uVar15 = 3;
  local_114 = 0x20;
  local_62 = 0;
  uVar16 = 0xfffffffffffffffc;
  local_e0 = 5;
  local_f0 = 0xfff;
  local_74 = 0;
  local_1c8 = 0x10;
  local_1c4 = 10;
  local_e8 = 0x1f;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  lVar8 = param_1 + 0x48;
LAB_1800a4fd0:
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 < 6) {
    if (iVar3 < 3) {
      if (iVar3 == 2) {
        local_1c0.vftablePtr = (exception_vftable *)CONCAT71(local_1c0.vftablePtr._1_7_,local_62);
        FUN_1800b6990(param_2,&local_1c0);
      }
      else {
        if (iVar3 != 1) goto LAB_1800a5be3;
        local_1c0.vftablePtr = (exception_vftable *)CONCAT71(local_1c0.vftablePtr._1_7_,local_61);
        FUN_1800b6990(param_2,&local_1c0);
      }
    }
    else if (iVar3 == 3) {
      local_1c0.vftablePtr = (exception_vftable *)0x0;
      FUN_1800b6e70(param_2,&local_1c0);
    }
    else if (iVar3 == 5) {
      local_1c0.vftablePtr = *(exception_vftable **)(param_1 + 200);
      FUN_1800b7e00(param_2,&local_1c0);
    }
    else {
      FUN_1800b77f0(param_2,param_1 + 0x98);
    }
  }
  else {
    if (8 < iVar3) {
      if (0xd < iVar3) {
        if (iVar3 == 0xe) {
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = local_e0;
          local_a0 = local_88;
          FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c,uVar14,uVar15,uVar16);
          local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a3198),DAT_1802a3194);
          FUN_1800a3fb0(param_1,local_d8,local_74,&local_b8);
          local_1f8 = *(undefined8 *)(param_1 + 0x78);
          local_208 = *(undefined4 *)(param_1 + 0x68);
          uStack_204 = *(undefined4 *)(param_1 + 0x6c);
          uStack_200 = *(undefined4 *)(param_1 + 0x70);
          uStack_1fc = *(undefined4 *)(param_1 + 0x74);
          FUN_1800a3a60(&local_1c0.exception_data.offset_0x38,local_78,&local_208,local_d8,0);
          FUN_1800a4920(lVar8,&local_138);
          *(undefined1 *)(param_2 + 0x28) = local_61;
          if (*(char *)(param_2 + 0x29) == '\x01') {
            std::runtime_error::runtime_error
                      ((runtime_error *)&local_1c0,(longlong)&local_1c0.exception_data.offset_0x38);
            FUN_1801dd110((runtime_error *)&local_1c0,&DAT_180253730);
          }
        }
        else {
          if (iVar3 != 0xf) goto LAB_1800a5be3;
          plVar1 = (longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == local_90) {
            FUN_1800b8f52(&DAT_1802a3204,&DAT_180274c67,0x1c,0x66,&DAT_1802a326c,uVar14,uVar15,uVar16);
            FUN_180057290(&local_1c0.exception_data.offset_0x38,&DAT_1802a3204);
            local_a8 = *(undefined8 *)(param_1 + 0x78);
            local_b8 = *plVar1;
            uStack_b0 = *(undefined8 *)(param_1 + 0x70);
            FUN_1800a3a60(&local_1c0,local_78,&local_b8,&local_1c0.exception_data.offset_0x38,0);
            FUN_1800a4920(lVar8,local_d8);
            uVar5 = FUN_1800a7000(param_2,*plVar1,local_d8,&local_1c0);
            FUN_180001ef0(local_d8);
            std::exception::exception(&local_1c0);
            puVar7 = &local_1c0.exception_data.offset_0x38;
            goto LAB_1800a5880;
          }
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = local_e0;
          local_a0 = local_88;
          FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c,uVar14,uVar15,uVar16);
          local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a3198),DAT_1802a3194);
          FUN_1800a3fb0(param_1,local_d8,local_1c8,&local_b8);
          local_1f8 = *(undefined8 *)(param_1 + 0x78);
          local_208 = *(undefined4 *)plVar1;
          uStack_204 = *(undefined4 *)(param_1 + 0x6c);
          uStack_200 = *(undefined4 *)(param_1 + 0x70);
          uStack_1fc = *(undefined4 *)(param_1 + 0x74);
          FUN_1800a3a60(&local_1c0.exception_data.offset_0x38,local_78,&local_208,local_d8,0);
          FUN_1800a4920(lVar8,&local_138);
          *(undefined1 *)(param_2 + 0x28) = local_61;
          if (*(char *)(param_2 + 0x29) == '\x01') {
            std::runtime_error::runtime_error
                      ((runtime_error *)&local_1c0,(longlong)&local_1c0.exception_data.offset_0x38);
            FUN_1801dd110((runtime_error *)&local_1c0,&DAT_180253730);
          }
        }
LAB_1800a5cc4:
        if (local_88 < local_120) {
          lVar2 = CONCAT44(uStack_134,local_138);
          uVar14 = local_90 + local_120;
          lVar8 = lVar2;
          if (local_f0 < uVar14) {
            lVar8 = *(longlong *)(lVar2 + -8);
            if (local_108 <= (ulonglong)((lVar2 + local_f8) - lVar8)) goto LAB_1800a61f3;
            uVar14 = local_120 + local_110;
          }
          thunk_FUN_1801f42e0(lVar8,uVar14);
        }
        local_1c0.exception_data.offset_0x38 = (ulonglong)&PTR_exception_18020e910;
        local_1c0.exception_data.offset_0x58 = (ulonglong)&std::exception::vftable;
        FUN_1801dd238(&local_1c0.exception_data.offset_0x60);
        local_1c0.exception_data.offset_0x38 = (ulonglong)&std::exception::vftable;
        FUN_1801dd238(&local_1c0.exception_data.offset_0x40);
        if (local_88 < local_c0) {
          lVar2 = CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]);
          uVar14 = local_90 + local_c0;
          lVar8 = lVar2;
          if (local_f0 < uVar14) {
            lVar8 = *(longlong *)(lVar2 + -8);
            if (local_108 <= (ulonglong)((lVar2 + local_f8) - lVar8)) goto LAB_1800a61f3;
            uVar14 = local_c0 + local_110;
          }
          thunk_FUN_1801f42e0(lVar8,uVar14);
        }
        local_c8 = local_70;
        local_c0 = local_88;
        local_d8[0]._0_1_ = local_62;
        if (local_88 < local_a0) {
          uVar14 = local_90 + local_a0;
          lVar8 = local_b8;
          if (local_f0 < uVar14) {
            lVar8 = *(longlong *)(local_b8 + -8);
            if (local_108 <= (ulonglong)((local_b8 + local_f8) - lVar8)) goto LAB_1800a61f3;
            uVar14 = local_a0 + local_110;
          }
          thunk_FUN_1801f42e0(lVar8,uVar14);
        }
        uVar14 = 0;
        goto joined_r0x0001800a5e27;
      }
      if (iVar3 != 9) {
LAB_1800a5be3:
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = local_e0;
        local_a0 = local_88;
        FUN_1800b8f52(&DAT_1802a3194,&DAT_180274b34,0x13,6,&DAT_1802a319c,uVar14,uVar15,uVar16);
        local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a3198),DAT_1802a3194);
        FUN_1800a3fb0(param_1,local_d8,local_1c8,&local_b8);
        local_1f8 = *(undefined8 *)(param_1 + 0x78);
        local_208 = *(undefined4 *)(param_1 + 0x68);
        uStack_204 = *(undefined4 *)(param_1 + 0x6c);
        uStack_200 = *(undefined4 *)(param_1 + 0x70);
        uStack_1fc = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1c0.exception_data.offset_0x38,local_78,&local_208,local_d8,0);
        FUN_1800a4920(lVar8,&local_138);
        *(undefined1 *)(param_2 + 0x28) = local_61;
        if (*(char *)(param_2 + 0x29) == '\x01') {
          std::runtime_error::runtime_error((runtime_error *)&local_1c0,(longlong)&local_1c0.exception_data.offset_0x38)
          ;
          FUN_1801dd110((runtime_error *)&local_1c0,&DAT_180253730);
        }
        goto LAB_1800a5cc4;
      }
      local_1c0.exception_data.offset_0x38 = CONCAT71(local_1c0.exception_data.offset_0x38._1_7_,local_61);
      local_1c0.vftablePtr = (exception_vftable *)FUN_1800b56c0(param_2,&local_1c0.exception_data.offset_0x38);
      if (*(double **)(param_2 + 0x10) == *(double **)(param_2 + 0x18)) {
        FUN_1800b5810(param_2 + 8);
      }
      else {
        **(double **)(param_2 + 0x10) = (double)local_1c0.vftablePtr;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 8;
      }
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (10 < iVar3) {
        if (iVar3 == 0xb) goto LAB_1800a536f;
LAB_1800a59fd:
        FUN_1800b8f52(&DAT_1802a31bc,&DAT_180274baa,0x15,0xb,&DAT_1802a31c8);
        FUN_180057290(local_d8,&DAT_1802a31bc);
        FUN_1800a3fb0(param_1,&local_1c0.exception_data.offset_0x38,local_1c0.exception_data.offset_0x78._4_4_,local_d8)
        ;
        local_128 = *(undefined8 *)(param_1 + 0x78);
        local_138 = *(undefined4 *)(param_1 + 0x68);
        uStack_134 = *(undefined4 *)(param_1 + 0x6c);
        uStack_130 = *(undefined4 *)(param_1 + 0x70);
        uStack_12c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
        goto LAB_1800a5859;
      }
      if (iVar3 != 4) goto LAB_1800a59fd;
      FUN_1800aeef0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),&local_1c0,param_1 + 0x98);
      *(exception_vftable **)(param_2 + 0x20) = local_1c0.vftablePtr + 4;
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_118) {
        FUN_1800b8f52(&DAT_1802a31cc,&DAT_180274bdf,0x13,0x11,&DAT_1802a31e0);
        FUN_180057290(local_d8,&DAT_1802a31cc);
        FUN_1800a3fb0(param_1,&local_1c0.exception_data.offset_0x38,local_118,local_d8);
        local_128 = *(undefined8 *)(param_1 + 0x78);
        local_138 = *(undefined4 *)(param_1 + 0x68);
        uStack_134 = *(undefined4 *)(param_1 + 0x6c);
        uStack_130 = *(undefined4 *)(param_1 + 0x70);
        uStack_12c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
        goto LAB_1800a5859;
      }
      uVar9 = local_100;
      if ((longlong)local_70 <= (longlong)uStack_1d0) {
        uVar9 = local_70;
      }
      local_1c0.exception_data.offset_0x0 = uStack_1d0 & local_e8;
      local_1c0.vftablePtr = (exception_vftable *)((uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
      uVar6 = FUN_1800a7a20(&local_1e8,&local_1c0,local_90);
      uVar9 = local_100;
      if ((longlong)local_70 <= (longlong)uVar6) {
        uVar9 = local_70;
      }
      uVar10 = local_e8 & uVar6;
      uVar11 = local_90 + uVar10 >> ((byte)uVar15 & 0x3f) & uVar14;
      uVar12 = local_90 + uVar10 & local_e8;
      if ((uVar10 != uVar12) || (uVar11 != local_70)) {
        puVar13 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
        uVar5 = local_7c << ((byte)uVar10 & 0x1f) ^ local_7c;
        if (uVar11 == local_70) {
          uVar5 = local_7c >> ((char)local_114 - (char)uVar12 & 0x1fU) ^ local_7c | uVar5;
        }
        else {
          *puVar13 = *puVar13 & uVar5;
          FUN_180207610(puVar13 + 1,0);
          if (uVar12 == local_70) goto LAB_1800a5332;
          puVar13 = (uint *)((longlong)puVar13 + uVar11);
          uVar5 = local_7c >> ((char)local_114 - (char)uVar12 & 0x1fU) ^ local_7c;
        }
        *puVar13 = *puVar13 & uVar5;
      }
LAB_1800a5332:
      uVar4 = FUN_18009ad70(lVar8);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      goto LAB_1800a4fd0;
    }
    if (iVar3 == 6) {
      local_1c0.vftablePtr = *(exception_vftable **)(param_1 + 0xc0);
      FUN_1800b7310(param_2,&local_1c0);
    }
    else {
      if (iVar3 != 8) {
        if (ABS((double)*(exception_vftable **)(param_1 + 0xd0)) != INFINITY) {
          local_1c0.vftablePtr = *(exception_vftable **)(param_1 + 0xd0);
          FUN_1800b64b0(param_2,&local_1c0);
          goto LAB_1800a53bc;
        }
        local_138 = CONCAT31(local_138._1_3_,0x27);
        FUN_1800a4920(lVar8,local_d8);
        FUN_1800b8f52(&DAT_1802a31e4,&DAT_180274c22,0x1b,0x1a,&DAT_1802a3200);
        FUN_1800aa8e0(&local_1c0.exception_data.offset_0x38,&DAT_1802a31e4,local_d8,&local_138);
        FUN_1800aa510(&local_1c0,0x196,&local_1c0.exception_data.offset_0x38,0);
        FUN_1800a4920(lVar8,&local_b8);
        uVar5 = FUN_1800b55a0(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
        goto LAB_1800a5859;
      }
      local_1c0.exception_data.offset_0x38 = CONCAT71(local_1c0.exception_data.offset_0x38._1_7_,2);
      local_1c0.vftablePtr = (exception_vftable *)FUN_1800b56c0(param_2,&local_1c0.exception_data.offset_0x38);
      if (*(double **)(param_2 + 0x10) == *(double **)(param_2 + 0x18)) {
        FUN_1800b5810(param_2 + 8);
      }
      else {
        **(double **)(param_2 + 0x10) = (double)local_1c0.vftablePtr;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 8;
      }
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_1c4) {
        uVar9 = local_100;
        if ((longlong)local_70 <= (longlong)uStack_1d0) {
          uVar9 = local_70;
        }
        local_1c0.exception_data.offset_0x0 = uStack_1d0 & local_e8;
        local_1c0.vftablePtr = (exception_vftable *)((uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
        uVar6 = FUN_1800a7a20(&local_1e8,&local_1c0,local_90);
        uVar9 = local_100;
        if ((longlong)local_70 <= (longlong)uVar6) {
          uVar9 = local_70;
        }
        uVar10 = local_e8 & uVar6;
        uVar11 = local_90 + uVar10 >> ((byte)uVar15 & 0x3f) & uVar14;
        uVar12 = local_90 + uVar10 & local_e8;
        if ((uVar10 != uVar12) || (uVar11 != local_70)) {
          puVar13 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
          uVar5 = local_7c << ((byte)uVar10 & 0x1f);
          if (uVar11 == local_70) {
            uVar5 = local_7c >> ((char)local_114 - (char)uVar12 & 0x1fU) & uVar5;
          }
          else {
            *puVar13 = *puVar13 | uVar5;
            FUN_180207610(puVar13 + 1,CONCAT71((int7)(uVar10 >> 8),0xff));
            if (uVar12 == local_70) goto LAB_1800a4fd0;
            puVar13 = (uint *)((longlong)puVar13 + uVar11);
            uVar5 = local_7c >> ((char)local_114 - (char)uVar12 & 0x1fU);
          }
          *puVar13 = *puVar13 | uVar5;
        }
        goto LAB_1800a4fd0;
      }
LAB_1800a536f:
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
    }
  }
LAB_1800a53bc:
  while( true ) {
    if (uStack_1d0 == local_70) {
      uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto joined_r0x0001800a5e27;
    }
    uVar9 = local_100;
    if ((longlong)local_70 <= (longlong)uStack_1d0) {
      uVar9 = local_70;
    }
    uVar10 = local_1f0 + (local_e8 & uStack_1d0);
    uVar6 = local_100;
    if ((local_e8 & uStack_1d0) != local_70) {
      uVar6 = local_70;
    }
    if ((1 << ((byte)uVar10 & 0x1f) &
        *(uint *)(uVar6 + (uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9 +
                          (uVar10 >> ((byte)local_e0 & 0x3f)) * 4)) != local_74) {
      iVar3 = FUN_18009ad70(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 < 0xd) {
        if (iVar3 == 10) goto LAB_1800a54ae;
      }
      else if (iVar3 == 0xd) {
        uVar4 = FUN_18009ad70(lVar8);
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        goto LAB_1800a4fd0;
      }
      FUN_1800b8f52(&DAT_1802a20b4,&DAT_180271e03,0x1a,6,&DAT_1802a20bc,uVar14,uVar15,uVar16);
      FUN_180057290(local_d8,&DAT_1802a20b4);
      FUN_1800a3fb0(param_1,&local_1c0.exception_data.offset_0x38,local_1c4,local_d8);
      local_128 = *(undefined8 *)(param_1 + 0x78);
      local_138 = *(undefined4 *)(param_1 + 0x68);
      uStack_134 = *(undefined4 *)(param_1 + 0x6c);
      uStack_130 = *(undefined4 *)(param_1 + 0x70);
      uStack_12c = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
      FUN_1800a4920(lVar8,&local_b8);
      uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
      goto LAB_1800a5859;
    }
    iVar3 = FUN_18009ad70(lVar8);
    *(int *)(param_1 + 0x40) = iVar3;
    if (0xc < iVar3) break;
    if (iVar3 != 0xb) goto LAB_1800a5792;
LAB_1800a54ae:
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
    uVar9 = local_100;
    if ((longlong)local_70 <= (longlong)uStack_1d0) {
      uVar9 = local_70;
    }
    local_1c0.exception_data.offset_0x0 = local_1f0 + (local_e8 & uStack_1d0);
    uVar6 = local_100;
    if ((local_e8 & uStack_1d0) != local_70) {
      uVar6 = local_70;
    }
    local_1c0.vftablePtr =
         (exception_vftable *)
         ((uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9 +
          (local_1c0.exception_data.offset_0x0 >> ((byte)local_e0 & 0x3f)) * 4 + uVar6);
    local_1c0.exception_data.offset_0x0 = local_1c0.exception_data.offset_0x0 & local_e8;
    FUN_1800b17d0(&local_1e8,&local_1c0.exception_data.offset_0x38);
  }
  if (iVar3 != 0xd) {
LAB_1800a5792:
    FUN_1800b8f52(&DAT_1802a20a8,&DAT_180271dce,0x1a,7,&DAT_1802a20b0,uVar14,uVar15,uVar16);
    FUN_180057290(local_d8,&DAT_1802a20a8);
    FUN_1800a3fb0(param_1,&local_1c0.exception_data.offset_0x38,0xb,local_d8);
    local_128 = *(undefined8 *)(param_1 + 0x78);
    local_138 = *(undefined4 *)(param_1 + 0x68);
    uStack_134 = *(undefined4 *)(param_1 + 0x6c);
    uStack_130 = *(undefined4 *)(param_1 + 0x70);
    uStack_12c = *(undefined4 *)(param_1 + 0x74);
    FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
    FUN_1800a4920(lVar8,&local_b8);
    uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
LAB_1800a5859:
    FUN_180001ef0(&local_b8);
    std::exception::exception(&local_1c0);
    FUN_180001ef0(&local_1c0.exception_data.offset_0x38);
    puVar7 = local_d8;
LAB_1800a5880:
    uVar14 = (ulonglong)uVar5;
    FUN_180001ef0(puVar7);
joined_r0x0001800a5e27:
    if (local_1e8 != 0) {
      uVar9 = local_1d8 - local_1e8;
      lVar8 = local_1e8;
      if (local_f0 < uVar9) {
        lVar8 = *(longlong *)(local_1e8 + -8);
        if (local_108 <= (ulonglong)((local_1e8 + local_f8) - lVar8)) {
LAB_1800a61f3:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_74,local_70);
        }
        uVar9 = uVar9 + 0x27;
      }
      thunk_FUN_1801f42e0(lVar8,uVar9);
    }
    return uVar14 & 0xffffffff;
  }
  iVar3 = FUN_18009ad70(lVar8);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 != local_1c0.exception_data.offset_0x78._4_4_) {
    FUN_1800b8f52(&DAT_1802a31bc,&DAT_180274baa,0x15,0xb,&DAT_1802a31c8);
    FUN_180057290(local_d8,&DAT_1802a31bc);
    FUN_1800a3fb0(param_1,&local_1c0.exception_data.offset_0x38,local_1c0.exception_data.offset_0x78._4_4_,local_d8);
    local_128 = *(undefined8 *)(param_1 + 0x78);
    local_138 = *(undefined4 *)(param_1 + 0x68);
    uStack_134 = *(undefined4 *)(param_1 + 0x6c);
    uStack_130 = *(undefined4 *)(param_1 + 0x70);
    uStack_12c = *(undefined4 *)(param_1 + 0x74);
    FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
    FUN_1800a4920(lVar8,&local_b8);
    uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
    goto LAB_1800a5859;
  }
  FUN_1800aeef0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),&local_1c0);
  *(exception_vftable **)(param_2 + 0x20) = local_1c0.vftablePtr + 4;
  iVar3 = FUN_18009ad70(lVar8);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 != local_118) {
    FUN_1800b8f52(&DAT_1802a31cc,&DAT_180274bdf,0x13,0x11,&DAT_1802a31e0);
    FUN_180057290(local_d8,&DAT_1802a31cc);
    FUN_1800a3fb0(param_1,&local_1c0.exception_data.offset_0x38,local_118,local_d8);
    local_128 = *(undefined8 *)(param_1 + 0x78);
    local_138 = *(undefined4 *)(param_1 + 0x68);
    uStack_134 = *(undefined4 *)(param_1 + 0x6c);
    uStack_130 = *(undefined4 *)(param_1 + 0x70);
    uStack_12c = *(undefined4 *)(param_1 + 0x74);
    FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
    FUN_1800a4920(lVar8,&local_b8);
    uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
    goto LAB_1800a5859;
  }
  uVar4 = FUN_18009ad70(lVar8);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  goto LAB_1800a4fd0;
}



void Unwind_1800a6240(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6290(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a62e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a6330(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a6380(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a63d0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a6420(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a6470(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a64c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a6510(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a6560(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a65b0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a6600(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a6650(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a66a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a66f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a6740(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6790(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a67e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6830(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x110);
  return;
}



void Unwind_1800a6880(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 200));
  return;
}



void Unwind_1800a68d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x110);
  return;
}



void Unwind_1800a6920(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6970(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a69c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a6a10(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 200));
  return;
}



void Unwind_1800a6a60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6ab0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x110);
  return;
}



void Unwind_1800a6b00(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a6b50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a6ba0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a6bf0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 200));
  return;
}



void Unwind_1800a6c40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6c90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6ce0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a6d30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a6d80(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 400);
  return;
}



void Unwind_1800a6dd0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a6e20(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1800a6e70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a6ec0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 200);
  return;
}



void Unwind_1800a6f10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6f60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  return;
}



void Unwind_1800a6fb0(undefined8 param_1,longlong param_2)

{
  FUN_1800a7440(param_2 + 0x60);
  return;
}



undefined8 FUN_1800a7000(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_a8;
  local_78 = 0xc5c57d6052b32fda;
  local_80 = 0x4adaaa722ba54c7;
  while( true ) {
    while( true ) {
      uVar2 = local_78 ^ 0xf25e596b141e247b;
      uVar1 = local_78 ^ local_80;
      local_80 = local_80 ^ 0xf25e596b141e247b;
      if (uVar1 != 0xc168d7c770097b1d) break;
      *(undefined1 *)(param_1 + 0x28) = 1;
      local_78 = 0x7e265e3aedbd561c;
      if (*(char *)(param_1 + 0x29) != '\0') {
        local_78 = 0xfe53eeeb77f25133;
      }
      local_80 = 0x118f08dbfd6e9918;
    }
    if (uVar1 == 0x6fa956e110d3cf04) break;
    local_78 = uVar2;
    if (uVar1 == 0xefdce6308a9cc82b) {
      std::runtime_error::runtime_error((runtime_error *)&stack0xffffffffffffff90,param_4);
      FUN_1801dd110((runtime_error *)&stack0xffffffffffffff90,&DAT_180253730);
    }
  }
  if (DAT_1802a0400 == (local_30 ^ (ulonglong)auStack_a8)) {
    return 0;
  }
}



void FUN_1800a7140(longlong param_1)

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

  local_98 = 0xb3fe116fd33d7d77;
  local_a0 = 0xccbeaf204d6f2b1a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ 0x2d8dda45255c9bd6;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x2d8dda45255c9bd6;
          local_98 = uVar2;
          if ((longlong)uVar1 < 0x1b298260a7b54a4d) break;
          if (uVar1 == 0x1b298260a7b54a4d) {
            local_88 = local_68 + 0x27;
            local_98 = 0x44f2e366a6e06afd;
            local_a0 = 0x38db13e3149dc0d8;
            local_80 = local_60;
          }
          else if (uVar1 == 0x7c29f085b27daa25) {
            thunk_FUN_1801f42e0(local_80,local_88);
            *local_78 = 0;
            local_78[1] = 0;
            local_78[2] = 0;
            local_98 = 0xab67a9dc16978ca5;
            local_a0 = 0x5c65502769e7bfbf;
          }
          else if (uVar1 == 0x7f40be4f9e52566d) {
            local_78 = (undefined8 *)(param_1 + 8);
            local_90 = *(longlong *)(param_1 + 8);
            local_98 = 0xe7c1cce1db09438d;
            if (local_90 == 0) {
              local_98 = 0xa466ffe05e485d3e;
            }
            local_a0 = 0x5364061b21386e24;
          }
        }
        if (0xacaddb9548b783c < (longlong)uVar1) break;
        if (uVar1 == 0xb4a5cafafa312da9) {
          local_70 = local_90;
          local_88 = *(longlong *)(param_1 + 0x18) - local_90;
          local_98 = 0x803539d30b50c063;
          if (0xfff < local_88) {
            local_98 = 0xeb05ff1ad58c6dc0;
          }
          local_a0 = 0xfc1cc956b92d6a46;
          local_80 = local_90;
          local_68 = local_88;
        }
        else if (uVar1 == 0xf702f9fb7f70331a) {
          return;
        }
      }
      if (uVar1 != 0x1719364c6ca10786) break;
      local_60 = *(longlong *)(local_90 + -8);
      local_98 = 0x7094d9c656ab9c32;
      if ((local_70 - local_60) - 8U < 0x20) {
        local_98 = 0x6177861fa595ae42;
      }
      local_a0 = 0x7a5e047f0220e40f;
    }
  } while (uVar1 != 0xacaddb9548b783d);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800a7440(longlong *param_1)

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

  local_90 = 0x57fe9399967823c8;
  local_98 = 0x6af92d3d3e807d54;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x8a39eb07b819573c;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x8a39eb07b819573c;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x3d07bea4a8f85e9c) break;
          if (uVar1 == 0x3d07bea4a8f85e9c) {
            local_88 = *param_1;
            local_90 = 0x8c5b8a57d7dec7c8;
            if (local_88 == 0) {
              local_90 = 0xe9261c9c134c5869;
            }
            local_98 = 0x8295ac1b8e0303be;
          }
          else if (uVar1 == 0x6ccf4ca307e11f1a) {
            local_80 = local_68 + 0x27;
            local_90 = 0xd14f9be163cf25fc;
            local_98 = 0x1a130f5b3ec4f79;
            local_78 = local_60;
          }
          else if (uVar1 == 0x6bb3b0879d4f5bd7) {
            return;
          }
        }
        if (-0xd0d2252bb1daea6 < (longlong)uVar1) break;
        if (uVar1 == 0xa1376d727f73a74c) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0x7dff73d7e77f12ae;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0xe3c2e2d9a47c5cef;
          }
          local_98 = 0x8f0dae7aa39d43f5;
        }
        else if (uVar1 == 0xd0eeab14d0236a85) {
          thunk_FUN_1801f42e0(local_78,local_80);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          local_90 = 0x2d18f308e4851f4e;
          local_98 = 0x46ab438f79ca4499;
        }
      }
      if (uVar1 != 0xece264c59ddc476) break;
      local_70 = local_88;
      local_80 = param_1[2] - local_88;
      local_90 = 0x357076b0afd38009;
      if (0xfff < local_80) {
        local_90 = 0x44a9b0d600834dc0;
      }
      local_98 = 0xe59edda47ff0ea8c;
      local_78 = local_88;
      local_68 = local_80;
    }
  } while (uVar1 != 0xf2f2ddad44e2515b);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800a7730(longlong *param_1)

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

  local_90 = 0xa2a4b8b3599e7ec0;
  local_98 = 0xf3eac35c6df7c6a5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x678b3b2c144164b0;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x678b3b2c144164b0;
          local_90 = uVar2;
          if (0x303c90eb2206c2f0 < (longlong)uVar1) break;
          if (uVar1 == 0xa87dbe8c7e38c17e) {
            thunk_FUN_1801f42e0(local_78,local_80);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_90 = 0xb0f8dde12ff965e2;
            local_98 = 0xa42bbb834c8b6a47;
          }
          else if (uVar1 == 0x2555f4c79e4b4be0) {
            local_80 = local_60 + 0x27;
            local_90 = 0x6cb1e37415a77d8f;
            local_98 = 0xc4cc5df86b9fbcf1;
            local_78 = local_70;
          }
          else if (uVar1 == 0x14d3666263720fa5) {
            return;
          }
        }
        if (0x514e7bef3469b864 < (longlong)uVar1) break;
        if (uVar1 == 0x303c90eb2206c2f1) {
          local_68 = local_88;
          local_80 = param_1[2] - local_88;
          local_90 = 0xe408fddc5d79a27f;
          if (0xfff < local_80) {
            local_90 = 0xfeb7ac9019b6933;
          }
          local_98 = 0x4c75435023416301;
          local_78 = local_88;
          local_60 = local_80;
        }
        else if (uVar1 == 0x439e399922da0a32) {
          local_70 = *(longlong *)(local_88 + -8);
          local_90 = 0x45600aa7028be5de;
          if ((local_68 - local_70) - 8U < 0x20) {
            local_90 = 0xf72461e8ce762b4;
          }
          local_98 = 0x2a27b2d912ac2954;
        }
      }
      if (uVar1 != 0x514e7bef3469b865) break;
      local_88 = *param_1;
      local_90 = 0x9a376f4de28f741a;
      if (local_88 == 0) {
        local_90 = 0xbed899c4a3fbb94e;
      }
      local_98 = 0xaa0bffa6c089b6eb;
    }
  } while (uVar1 != 0x6f47b87e1027cc8a);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



ulonglong FUN_1800a7a20(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  uint local_158;
  int local_154;
  uint local_150;
  uint local_14c;
  uint *local_148;
  byte local_140;
  byte local_138;
  ulonglong local_130;
  ulonglong *local_128;
  uint local_11c;
  ulonglong local_118;
  undefined8 local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;

  local_178 = 0xa95d71c6136d7578;
  local_180 = 0xbc0af0bfb116a6fd;
  local_a0 = param_1 + 1;
  local_98 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              lVar2 = local_48;
              uVar4 = local_178 ^ 0xdbe5366a384e0238;
              uVar3 = local_178 ^ local_180;
              local_180 = local_180 ^ 0xdbe5366a384e0238;
              local_178 = uVar4;
              if ((longlong)uVar3 < 0x2d6066411253b624) break;
              if ((longlong)uVar3 < 0x536904aa91c4d86d) {
                if ((longlong)uVar3 < 0x2fca562bab8a8da0) {
                  if (uVar3 == 0x2d6066411253b624) {
                    local_e8 = *param_1;
                    uVar3 = local_130;
                    if ((longlong)local_170 <= (longlong)local_70) {
                      uVar3 = local_170;
                    }
                    local_e0 = local_70 >> (local_138 & 0x3f) & local_118 | uVar3;
                    local_d8 = local_168 & local_70;
                    local_60 = local_70 + param_3;
                    *local_128 = local_60;
                    uVar3 = local_130;
                    if ((longlong)local_170 <= (longlong)local_f0) {
                      uVar3 = local_170;
                    }
                    uVar3 = local_f0 >> (local_138 & 0x3f) & local_118 | uVar3;
                    local_58 = local_e8 + uVar3;
                    local_50 = local_f0 & local_168;
                    local_178 = 0x4665555e289511b2;
                    if (local_50 == local_d8 && uVar3 == local_e0) {
                      local_178 = 0x59742ab2eca12fdb;
                    }
                    local_180 = 0x176c4f93267d8249;
                  }
                  else if (uVar3 == 0x2d8789ca50a06598) {
                    local_14c = (local_150 ^ 0xffffffff) & *local_148;
                    local_178 = 0x821d788f4420b870;
                    local_180 = 0xa2701b9af13a6468;
                  }
                }
                else if (uVar3 == 0x2fca562bab8a8da0) {
                  *local_128 = param_3;
                  local_178 = 0xd2d9412466aba4a6;
                  local_180 = 0x9cc12405ac770934;
                }
                else if (uVar3 == 0x51091acd0ee893fb) {
                  local_c0 = local_e0 + local_e8;
                  local_b0 = local_168 & local_60;
                  uVar3 = local_130;
                  if ((longlong)local_170 <= (longlong)local_60) {
                    uVar3 = local_170;
                  }
                  local_b8 = (uint *)(local_e8 + (local_60 >> ((byte)local_110 & 0x3f)) * 4 + uVar3);
                  local_178 = 0xb72f87f9edfda4b1;
                  local_180 = 0xdb404da7dacf96cb;
                  local_a8 = local_d8;
                }
                else if (uVar3 == 0x4e186521cadcad92) {
                  return local_f0;
                }
              }
              else if ((longlong)uVar3 < 0x6c6fca5e3732327a) {
                if (uVar3 == 0x536904aa91c4d86d) {
                  local_128 = (ulonglong *)(param_1 + 3);
                  local_68 = param_1[3];
                  local_178 = 0xa9581d8fae793030;
                  if (0x7fffffffffffffffU - local_68 < param_3) {
                    local_178 = 0xddc1ff8c9570726d;
                  }
                  local_180 = 0x64462fd5737056fb;
                }
                else if (uVar3 == 0x66af20733ddff4cf) {
                  *local_d0 = local_160 * 4 + local_90;
                  local_178 = 0xe87838ea6c42dbc9;
                  local_180 = 0x62d7bd007088a585;
                }
              }
              else if (uVar3 == 0x6c6fca5e3732327a) {
                local_80 = local_100 + local_a8;
                uVar3 = local_170;
                if (local_a8 == local_170) {
                  local_80 = local_168;
                  uVar3 = local_108;
                }
                local_78 = local_100 + local_b0;
                uVar4 = local_170;
                if (local_b0 == local_170) {
                  local_78 = local_168;
                  uVar4 = local_108;
                }
                local_88 = local_c0 + uVar3;
                local_148 = (uint *)(uVar4 + (longlong)local_b8);
                local_178 = 0x92657f443477561d;
                if ((local_154 << ((byte)local_80 & 0x1f) & *(uint *)(local_c0 + uVar3)) == local_158) {
                  local_178 = 0xb5d4eb49a4cb881c;
                }
                local_150 = local_154 << ((byte)local_78 & 0x1f);
                local_180 = 0x98536283f46bed84;
              }
              else if (uVar3 == 0x7938ff6b454a1953) {
                lVar5 = local_160 - local_c8;
                FUN_180207610(local_48,0,lVar5 << (local_140 & 0x3f));
                *local_d0 = lVar2 + lVar5 * 4;
                local_178 = 0xf0ff99dd8e2341ca;
                local_180 = 0x7a501c3792e93f86;
              }
            }
            if ((longlong)uVar3 < 0xa361dc7c01cbb99) break;
            if ((longlong)uVar3 < 0x167a94821d6c746c) {
              if (uVar3 == 0xa361dc7c01cbb99) {
                local_14c = *local_148 | local_150;
                local_178 = 0x25007168f82f2f86;
                local_180 = 0x56d127d4d35f39e;
              }
              else if (uVar3 == 0x15578179a27bd385) {
                local_130 = 0xe000000000000000;
                local_170 = 0;
                local_100 = -1;
                local_138 = 3;
                local_154 = 1;
                local_108 = 0xfffffffffffffffc;
                local_110 = 5;
                local_158 = 0;
                local_168 = 0x1f;
                local_118 = 0x1ffffffffffffffc;
                local_140 = 2;
                local_f8 = *param_1;
                local_f0 = (*local_98 - local_f8) * 8 + local_98[1];
                local_178 = 0x8cb8273df4c4bb27;
                if (param_3 == 0) {
                  local_178 = 0x91c946b6afdcced8;
                }
                local_180 = 0xdfd123976500634a;
                local_90 = local_f8;
              }
            }
            else if (uVar3 == 0x167a94821d6c746c) {
              local_178 = 0x3e116d9b87fadcef;
              if ((ulonglong)(param_1[2] - local_f8 >> (local_140 & 0x3f)) < local_160) {
                local_178 = 0x8f3553c1b5d8f6cc;
              }
              local_180 = 0x472992f0c2b0c5bc;
            }
            else if (uVar3 == 0x206d6315b51adc18) {
              *local_148 = local_14c;
              local_c0 = local_88;
              local_a8 = local_80;
              local_178 = 0xcdbcae066aca5c66;
              if (local_80 == local_50 && local_58 == local_88) {
                local_178 = 0xefcb01799724c38e;
              }
              local_180 = 0xa1d364585df86e1c;
              local_b8 = local_148;
              local_b0 = local_78;
            }
          }
          if ((longlong)uVar3 < -0x32e1cda522f69935) break;
          if (uVar3 == 0xcd1e325add0966cb) {
            local_11c = local_158;
            local_160 = local_168 + param_3 + local_68 >> ((byte)local_110 & 0x3f);
            local_d0 = local_a0;
            local_48 = param_1[1];
            local_c8 = local_48 - local_f8 >> (local_140 & 0x3f);
            local_178 = 0x519db034dcd33f7;
            if (local_160 < local_c8) {
              local_178 = 0x9b50dc5fd46e980c;
            }
            local_180 = 0xfdfffc2ce9b16cc3;
          }
          else if (uVar3 == 0xf8e6272fa47c5f34) {
            local_178 = 0x27ec8257b3228822;
            if (local_c8 < local_160) {
              local_178 = 0xbb39933fb2848202;
            }
            local_180 = 0xad4307bdafe8f66e;
          }
        }
        if (uVar3 != 0x8aaf85ea1cca7e4c) break;
        local_70 = *local_128;
        local_178 = 0xc0bda47130c3d34c;
        if (local_70 == local_170) {
          local_178 = 0xc217941b891ae8c8;
        }
        local_180 = 0xedddc23022906568;
      }
      if (uVar3 != 0xc81cc13177683370) break;
      FUN_1800a8520(param_1,local_160,&local_11c);
      local_178 = 0x3dc1eef6103c52eb;
      local_180 = 0xb76e6b1c0cf62ca7;
    }
  } while (uVar3 != 0xb987d059e6002496);
  FUN_1800a84e0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void FUN_1800a84e0(void)

{
  FUN_1800b8f52(&DAT_1802a31a0,&DAT_180274b64,0x11,0x16,&DAT_1802a31b8);
  FUN_1801d7524(&DAT_1802a31a0);
}



void FUN_1800a8520(ulonglong *param_1,ulonglong param_2,uint *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong local_168;
  ulonglong local_160;
  byte local_158;
  uintptr_t local_150;
  ulonglong local_148;
  uint local_140;
  uint local_13c;
  ulonglong local_138;
  uint *local_130;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  uint *local_a8;
  ulonglong local_a0;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  uint *local_70;
  longlong local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;

  local_160 = 0x8c1fc52acce9a3ab;
  local_168 = 0x31741d63320bf3a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_160 ^ 0x4fa19a41943237c7;
              uVar2 = local_160 ^ local_168;
              local_168 = local_168 ^ 0x4fa19a41943237c7;
              local_160 = uVar3;
              if (-0x16706be2eb7fdb2a < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x3ecaf8981d607cbe) {
                if ((longlong)uVar2 < -0x70f77b030036e36f) {
                  if (uVar2 == 0x8582661061054aac) {
                    local_d0 = local_80 + local_120;
                    local_160 = 0xb4651cdb735de66a;
                    local_168 = 0x6710a3fda2192ffa;
                    local_c8 = local_90;
                  }
                  else if (uVar2 == 0x89fddc513d59ad7d) {
                    lVar4 = FUN_1801d61c8(local_100 + local_120);
                    local_118 = local_120 + lVar4 & 0xffffffffffffffe0;
                    *(longlong *)(local_118 - 8) = lVar4;
                    local_160 = 0x4fc55ddfa0f67d83;
                    local_168 = 0x8e814c05e066fa84;
                  }
                  else if (uVar2 == 0x83d929676798c29f) {
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_140,local_150);
                  }
                }
                else if (uVar2 == 0x8f0884fcffc91c91) {
                  local_120 = 0x27;
                  local_150 = 0;
                  local_108 = 0xfffffffffffffff8;
                  local_110 = 8;
                  local_138 = 0x3fffffffffffffff;
                  local_140 = 0;
                  local_158 = 2;
                  local_160 = 0x9367f559929f1a8d;
                  if (0x3fffffffffffffff < param_2) {
                    local_160 = 0x74c161b1e8aa608c;
                  }
                  local_168 = 0x7ae86144861f3e5a;
                }
                else if (uVar2 == 0x9a4295d2407805b4) {
                  local_160 = 0x8c8b805bb4f66363;
                  if (local_148 == local_f0) {
                    local_160 = 0x82a7957be6a855f8;
                  }
                  local_168 = 0x87fc748bc0dcda2c;
                  local_c0 = local_78;
                  local_b8 = local_70;
                }
                else if (uVar2 == 0xbb0c940960c9271f) {
                  lVar4 = local_d8 << (local_158 & 0x3f);
                  puVar1 = (undefined8 *)((longlong)local_130 + lVar4);
                  *puVar1 = CONCAT44(uStack_54,local_58);
                  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
                  puVar1 = (undefined8 *)((longlong)local_130 + lVar4 + 0x10);
                  *puVar1 = CONCAT44(uStack_54,local_58);
                  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
                  local_d8 = local_d8 + local_110;
                  local_160 = 0xb1a04a4b17f07c2a;
                  if (local_d8 == local_f0) {
                    local_160 = 0x90ee4b9037415e81;
                  }
                  local_168 = 0xaacde4277395b35;
                }
              }
              else if ((longlong)uVar2 < -0x2c8a40d92ebb3670) {
                if ((longlong)uVar2 < -0x3c70e92eea1db7c2) {
                  if (uVar2 == 0xc1350767e29f8342) {
                    *local_a8 = local_13c;
                    local_a8 = local_a8 + 1;
                    local_b0 = local_b0 - 1;
                    local_160 = 0xe1fef9ff579dfb7a;
                    if (local_b0 == local_150) {
                      local_160 = 0x25901f689376f7ec;
                    }
                    local_168 = 0x20cbfe98b5027838;
                  }
                  else if (uVar2 == 0xc14411da40908707) {
                    local_a0 = local_118;
                    local_130 = (uint *)(local_118 + local_68);
                    local_148 = param_2 - local_60;
                    local_13c = *param_3;
                    local_160 = 0x9cb1ac2426566328;
                    if (local_13c == local_140) {
                      local_160 = 0x48de165de43ff913;
                    }
                    local_168 = 0x4b745f7008eedfbd;
                  }
                }
                else if (uVar2 == 0xc6ae400d0557a60a) {
                  local_118 = FUN_1801d61c8(local_100);
                  local_160 = 0xa23a86e1c96af1d3;
                  local_168 = 0x637e973b89fa76d4;
                }
                else if (uVar2 == 0xc38f16d115e2483e) goto LAB_1800a9094;
              }
              else if (uVar2 == 0xd375bf26d144c990) {
                thunk_FUN_1801f42e0(local_c8,local_d0);
                local_160 = 0xcfc14ce0ca64e05a;
                local_168 = 0x8a76f53690d92356;
              }
              else if (uVar2 == 0xd5f8b512bae48e75) {
                local_160 = 0x8a8a353143c67dc0;
                if (local_148 < local_110) {
                  local_160 = 0x8677e3d309bc8852;
                }
                local_168 = 0x8d0017037d96311d;
                local_c0 = local_148;
                local_b8 = local_130;
              }
              else if (uVar2 == 0xd7c5f3542eb8bc95) {
                local_160 = 0xc0cc811cfe63954f;
                if (local_148 == local_150) {
                  local_160 = 0x106fd5fe62f394ee;
                }
                local_168 = 0x1534340e44871b3a;
              }
            }
            if (0x78a22323e504cdc < (longlong)uVar2) break;
            if ((longlong)uVar2 < 0x275a85d49694701) {
              if (uVar2 == 0xe98f941d148024d7) {
                local_e8 = param_1 + 1;
                local_68 = param_1[1] - *param_1;
                local_60 = local_68 >> (local_158 & 0x3f);
                local_e0 = param_1 + 2;
                uVar2 = (longlong)(param_1[2] - *param_1) >> (local_158 & 0x3f);
                local_128 = (uVar2 >> 1) + uVar2;
                if (local_128 <= param_2) {
                  local_128 = param_2;
                }
                if (local_138 - (uVar2 >> 1) < uVar2) {
                  local_128 = local_138;
                }
                local_160 = 0xf4917338787361a4;
                if (local_138 < local_128) {
                  local_160 = 0xca1378c72151ab9a;
                }
                local_168 = 0x99c6e1634b3e3a4;
              }
              else if (uVar2 == 0xfd0d1d2e4cc08200) {
                local_100 = local_128 << (local_158 & 0x3f);
                local_160 = 0xc829c6ead03744c9;
                if (local_128 == local_150) {
                  local_160 = 0x437951ed2aaf8c5e;
                }
                local_168 = 0x823d40376a3f0b59;
                local_118 = 0;
              }
            }
            else if (uVar2 == 0x275a85d49694701) {
              local_88 = local_f8;
              local_d0 = *local_e0 - local_f8;
              local_160 = 0xb5760e378480038;
              if (0xfff < local_d0) {
                local_160 = 0xfd945141c7248b2a;
              }
              local_168 = 0xd822dfc5a90cc9a8;
              local_c8 = local_f8;
              local_80 = local_d0;
            }
            else if (uVar2 == 0x3aa492decd126ae) {
              FUN_180207610(local_130,0);
              local_160 = 0xfabb2a9b2ee51891;
              local_168 = 0xffe0cb6b08919745;
            }
            else if (uVar2 == 0x55be1f026748fd4) {
              FUN_1802079d0(local_a0);
              local_f8 = *param_1;
              local_160 = 0x6770877ce470643e;
              if (local_f8 == 0) {
                local_160 = 0x20b296f7f7a4e033;
              }
              local_168 = 0x65052f21ad19233f;
            }
          }
          if (0x3dc9d1287fcca2a9 < (longlong)uVar2) break;
          if ((longlong)uVar2 < 0xe2900f56eb55ed6) {
            if (uVar2 == 0x78a22323e504cdd) {
              local_f0 = local_108 & local_148;
              local_78 = local_148 & 7;
              local_70 = (uint *)((local_f0 << (local_158 & 0x3f)) + (longlong)local_130);
              local_58 = local_13c;
              uStack_54 = local_13c;
              uStack_50 = local_13c;
              uStack_4c = local_13c;
              local_160 = 0x23df0907df0fc9b3;
              local_168 = 0x98d39d0ebfc6eeac;
              local_d8 = local_150;
            }
            else if (uVar2 == 0xb77f4d0742ab94f) {
              local_160 = 0x8ae0a968559907e2;
              local_168 = 0x4bd5ae0fb70684a0;
              local_b0 = local_c0;
              local_a8 = local_b8;
            }
          }
          else if (uVar2 == 0x25b68e846e284282) {
            local_90 = *(ulonglong *)(local_f8 - 8);
            local_160 = 0xda73c03200d83724;
            if ((local_88 + local_108) - local_90 < 0x20) {
              local_160 = 0xdc288f450645bf17;
            }
            local_168 = 0x59aae9556740f5bb;
          }
          else if (uVar2 == 0xe2900f56eb55ed6) {
            FUN_1800807e0();
          }
        }
        if (0x4a1486ddba084f8f < (longlong)uVar2) break;
        if (uVar2 == 0x3dc9d1287fcca2aa) {
          local_160 = 0x665c5f018ffefe01;
          if (local_128 < 0x3ffffffffffffff7) {
            local_160 = 0x8b129e50bb9d0349;
          }
          local_168 = 0x2ef420186c4ae34;
        }
        else if (uVar2 == 0x45b7b9d65abdc30c) {
          *param_1 = local_a0;
          *local_e8 = local_a0 + param_2 * 4;
          *local_e0 = local_a0 + local_128 * 4;
          return;
        }
      }
      if (uVar2 != 0x4a1486ddba084f90) break;
      local_160 = 0x5e7f1668c1b39a0e;
      if (0x3ff < local_128) {
        local_160 = 0xa518874dbb289eae;
      }
      local_168 = 0x98d15665c4e43c04;
    }
  } while (uVar2 != 0x64b31d00093a5035);
LAB_1800a9094:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined8 FUN_1800a90c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 local_108 [56];
  undefined1 local_d0 [32];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_50;
  uint local_44;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_80 = 0xe000000000000000;
  local_50 = 0;
  local_44 = 0xffffffff;
  local_68 = 1;
  local_78 = 3;
  local_58 = 0x20;
  local_70 = 5;
  local_54 = 0;
  local_60 = 0x1f;
  local_d0[0] = 0;
  local_a0 = CONCAT44(local_a0._4_4_,(int)((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3)
                     );
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    FUN_1801d7504();
  }
  cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_a0,local_d0,param_1 + 0xb8);
  uVar10 = *(ulonglong *)(param_1 + 0x38);
  uVar7 = local_80;
  if ((longlong)local_50 <= (longlong)uVar10) {
    uVar7 = local_50;
  }
  local_98 = uVar10 & local_60;
  local_a0 = *(longlong *)(param_1 + 0x20) + (uVar10 >> ((byte)local_70 & 0x3f)) * 4 + uVar7;
  uVar7 = FUN_1800a7a20(param_1 + 0x20,&local_a0,local_68);
  uVar10 = local_80;
  if ((longlong)local_50 <= (longlong)uVar7) {
    uVar10 = local_50;
  }
  uVar8 = uVar7 & local_60;
  uVar12 = local_68 + uVar8 >> ((byte)local_78 & 0x3f) & 4;
  uVar14 = local_68 + uVar8 & local_60;
  if ((uVar8 != uVar14) || (uVar12 != local_50)) {
    uVar11 = local_44 << ((byte)uVar8 & 0x1f);
    puVar13 = (uint *)(*(longlong *)(param_1 + 0x20) + (uVar7 >> ((byte)local_70 & 0x3f)) * 4 + uVar10);
    if (uVar12 == local_50) {
      uVar5 = local_44 >> ((char)local_58 - (char)uVar14 & 0x1fU);
      uVar6 = uVar5 & uVar11;
      uVar11 = (local_44 ^ uVar5 | local_44 ^ uVar11) & *puVar13;
    }
    else {
      uVar6 = uVar11;
      if (cVar4 == '\0') {
        uVar6 = local_54;
      }
      *puVar13 = (local_44 ^ uVar11) & *puVar13 | uVar6;
      FUN_180207610(puVar13 + 1,-cVar4,uVar12 - 4);
      if (uVar14 == local_50) goto LAB_1800a92f9;
      uVar6 = local_44 >> ((char)local_58 - (char)uVar14 & 0x1fU);
      puVar13 = (uint *)((longlong)puVar13 + uVar12);
      uVar11 = (local_44 ^ uVar6) & *puVar13;
    }
    if (cVar4 == '\0') {
      uVar6 = local_54;
    }
    *puVar13 = uVar11 | uVar6;
  }
LAB_1800a92f9:
  local_a0 = CONCAT71(local_a0._1_7_,1);
  FUN_1800aa9d0(param_1,local_b0,&local_a0,1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
    FUN_1800ab3f0(param_1 + 8,puVar2,&local_a8);
    lVar9 = *(longlong *)(param_1 + 0x10);
  }
  else {
    *puVar2 = local_a8;
    lVar9 = *(longlong *)(param_1 + 0x10) + 8;
    *(longlong *)(param_1 + 0x10) = lVar9;
  }
  pbVar3 = *(byte **)(lVar9 + -8);
  uVar10 = 0xffffffffffffffff;
  if ((param_2 != 0xffffffffffffffff) && (pbVar3 != (byte *)0x0)) {
    uVar10 = (ulonglong)*pbVar3;
    uVar7 = local_68;
    if (*pbVar3 < 3) {
      uVar7 = *(ulonglong *)(&DAT_18020f2e0 + uVar10 * 8);
    }
    if (uVar7 < param_2) {
      FUN_180096c70(local_d0,param_2);
      FUN_1800b8f52(&DAT_1802a3270,&DAT_180274cff,0x19,0x18,&DAT_1802a3288);
      FUN_1800ab1d0(&local_a0,&DAT_1802a3270,local_d0);
      FUN_1800aae00(local_108,0x198,&local_a0,pbVar3);
      FUN_1801dd110(local_108,&DAT_1802536f0);
    }
  }
  return CONCAT71((int7)(uVar10 >> 8),1);
}



void Unwind_1800a9450(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_1800a9490(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



undefined8 FUN_1800a94d0(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  bool bVar13;
  longlong local_e0;
  ulonglong local_d8;
  undefined1 local_a8 [32];
  char *local_88;
  char *local_80;
  char *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  char local_2a;
  char local_29;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_2a = '\x01';
  local_68 = 0xe000000000000000;
  local_38 = 0;
  local_60 = 1;
  local_29 = '\0';
  local_58 = 5;
  local_50 = 0x1f;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0) {
    local_a8[0] = 1;
    local_e0 = CONCAT44(local_e0._4_4_,
                        (int)((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3) + -1);
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar8 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_e0,local_a8);
    if (cVar8 == '\0') {
      FUN_180084300(local_48,param_1 + 0xb8);
      puVar3 = *(undefined1 **)(*(longlong *)(param_1 + 0x10) + -8);
      uVar1 = *puVar3;
      *puVar3 = local_48[0];
      uVar4 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = local_40;
      local_48[0] = uVar1;
      local_40 = uVar4;
      FUN_18007ff50(&local_40);
    }
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  uVar11 = local_68;
  if ((longlong)local_38 <= (longlong)uVar5) {
    uVar11 = local_38;
  }
  uVar10 = local_68;
  if ((local_50 & uVar5) != local_38) {
    uVar10 = local_38;
  }
  local_d8 = (local_50 & uVar5) - 1;
  local_e0 = *(longlong *)(param_1 + 0x20) + (uVar5 >> ((byte)local_58 & 0x3f)) * 4 + uVar11 +
             (local_d8 >> ((byte)local_58 & 0x3f)) * 4 + uVar10;
  local_d8 = local_d8 & local_50;
  FUN_1800b17d0(param_1 + 0x20,local_a8,&local_e0);
  if (((*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) &&
      (pcVar6 = *(char **)(*(longlong *)(param_1 + 0x10) + -8), pcVar6 != (char *)0x0)) &&
     (cVar8 = *pcVar6, (byte)(cVar8 - 1U) < 2)) {
    pcVar7 = (char *)**(undefined8 **)(pcVar6 + 8);
    if (cVar8 == local_2a) {
      local_80 = *(char **)pcVar7;
      local_78 = (char *)0x0;
    }
    else {
      local_80 = (char *)0x0;
      local_78 = pcVar7;
    }
    local_70 = 0x8000000000000000;
LAB_1800a9707:
    if (cVar8 < '\x02') {
      if (cVar8 == '\x01') {
        if (local_80 == pcVar7) {
          return 1;
        }
        pcVar9 = local_80 + 0x40;
      }
      else {
LAB_1800a9750:
        if (local_70 == local_60) {
          return 1;
        }
        pcVar9 = pcVar6;
        if (local_70 != local_38) {
          FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
          FUN_180057290(local_a8,&DAT_1802a2258);
          FUN_1800ac3e0(&local_e0,0xd6,local_a8,pcVar6);
          FUN_1801dd110(&local_e0,&DAT_180253660);
        }
      }
    }
    else {
      if (cVar8 != '\x02') goto LAB_1800a9750;
      pcVar9 = local_78;
      if (local_78 == (char *)(*(undefined8 **)(pcVar6 + 8))[1]) {
        return 1;
      }
    }
    if (*pcVar9 != '\t') {
      if (cVar8 < '\x02') {
        if (cVar8 == '\x01') {
          pcVar9 = *(char **)(local_80 + 0x10);
          pcVar12 = local_80;
          if ((*(char **)(local_80 + 0x10))[0x19] == local_29) {
            do {
              local_80 = pcVar9;
              pcVar9 = *(char **)local_80;
            } while ((*(char **)local_80)[0x19] == local_29);
          }
          else {
            do {
              local_80 = *(char **)(pcVar12 + 8);
              if (local_80[0x19] != local_29) break;
              bVar13 = pcVar12 == *(char **)(local_80 + 0x10);
              pcVar12 = local_80;
            } while (bVar13);
          }
        }
        else {
LAB_1800a9700:
          local_70 = local_70 + local_60;
        }
      }
      else {
        if (cVar8 != '\x02') goto LAB_1800a9700;
        local_78 = local_78 + 0x10;
      }
      goto LAB_1800a9707;
    }
    local_88 = pcVar6;
    FUN_1800abdc0(pcVar6,&local_e0,&local_88);
  }
  return 1;
}



void Unwind_1800a9890(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x60);
  return;
}



void Unwind_1800a98c0(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800a98e0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong local_90;
  ulonglong local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_50;
  uint local_48;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_58 = 0x20;
  local_54 = 0;
  local_70 = 0x1f;
  uStack_60 = 0;
  local_68 = 3;
  uStack_60 = FUN_1800813f0(param_2);
  local_41 = 4;
  local_90 = CONCAT44(local_90._4_4_,(int)((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3)
                     );
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801d7504();
  }
  cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_90,&local_41,&local_68);
  uVar10 = *(ulonglong *)(param_1 + 0x58);
  uVar8 = 0xe000000000000000;
  if ((longlong)local_50 <= (longlong)uVar10) {
    uVar8 = local_50;
  }
  local_88 = uVar10 & local_70;
  local_90 = *(longlong *)(param_1 + 0x40) + (uVar10 >> 5) * 4 + uVar8;
  uVar8 = FUN_1800a7a20((longlong *)(param_1 + 0x40),&local_90,1);
  uVar10 = 0xe000000000000000;
  if ((longlong)local_50 <= (longlong)uVar8) {
    uVar10 = local_50;
  }
  uVar9 = local_70 & uVar8;
  uVar12 = uVar9 + 1 >> 3 & 4;
  uVar14 = uVar9 + 1 & local_70;
  if ((uVar9 != uVar14) || (uVar12 != local_50)) {
    uVar11 = local_48 << ((byte)uVar9 & 0x1f);
    puVar13 = (uint *)(*(longlong *)(param_1 + 0x40) + (uVar8 >> 5) * 4 + uVar10);
    if (uVar12 == local_50) {
      uVar6 = local_48 >> ((char)local_58 - (char)uVar14 & 0x1fU);
      uVar7 = uVar6 & uVar11;
      uVar11 = (local_48 ^ uVar6 | local_48 ^ uVar11) & *puVar13;
    }
    else {
      uVar7 = uVar11;
      if (cVar5 == '\0') {
        uVar7 = local_54;
      }
      *puVar13 = (local_48 ^ uVar11) & *puVar13 | uVar7;
      FUN_180207610(puVar13 + 1,-cVar5,uVar12 - 4);
      if (uVar14 == local_50) goto LAB_1800a9b3a;
      uVar7 = local_48 >> ((char)local_58 - (char)uVar14 & 0x1fU);
      puVar13 = (uint *)((longlong)puVar13 + uVar12);
      uVar11 = (local_48 ^ uVar7) & *puVar13;
    }
    if (cVar5 == '\0') {
      uVar7 = local_54;
    }
    *puVar13 = uVar11 | uVar7;
  }
LAB_1800a9b3a:
  if ((cVar5 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
    FUN_180084300(local_80,param_1 + 0xb8);
    FUN_1800aeef0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) + 8),&local_90,param_2);
    lVar4 = local_90;
    uVar1 = *(undefined1 *)(local_90 + 0x40);
    *(undefined1 *)(local_90 + 0x40) = local_80[0];
    uVar3 = *(undefined8 *)(local_90 + 0x48);
    *(undefined8 *)(local_90 + 0x48) = local_78;
    local_80[0] = uVar1;
    local_78 = uVar3;
    FUN_18007ff50(&local_78);
    *(longlong *)(param_1 + 0x60) = lVar4 + 0x40;
  }
  FUN_18007ff50(&uStack_60,local_68 & 0xff);
  return 1;
}



void Unwind_1800a9c00(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x70);
  return;
}



void Unwind_1800a9c40(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x70);
  return;
}



void Unwind_1800a9c80(void)

{
  Unwind_1801dd394();
}



void Unwind_1800a9ca0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x58);
  return;
}



void Unwind_1800a9ce0(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800a9d00(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 local_108 [56];
  undefined1 local_d0 [32];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_50;
  uint local_48;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_41 = 2;
  local_80 = 0xe000000000000000;
  local_50 = 0;
  local_68 = 1;
  local_48 = 0xffffffff;
  local_78 = 3;
  local_58 = 0x20;
  local_70 = 5;
  local_54 = 0;
  local_60 = 0x1f;
  local_d0[0] = 2;
  local_a0 = CONCAT44(local_a0._4_4_,(int)((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3)
                     );
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    FUN_1801d7504();
  }
  cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_a0,local_d0,param_1 + 0xb8);
  uVar10 = *(ulonglong *)(param_1 + 0x38);
  uVar7 = local_80;
  if ((longlong)local_50 <= (longlong)uVar10) {
    uVar7 = local_50;
  }
  local_98 = uVar10 & local_60;
  local_a0 = *(longlong *)(param_1 + 0x20) + (uVar10 >> ((byte)local_70 & 0x3f)) * 4 + uVar7;
  uVar7 = FUN_1800a7a20(param_1 + 0x20,&local_a0,local_68);
  uVar10 = local_80;
  if ((longlong)local_50 <= (longlong)uVar7) {
    uVar10 = local_50;
  }
  uVar8 = uVar7 & local_60;
  uVar12 = local_68 + uVar8 >> ((byte)local_78 & 0x3f) & 4;
  uVar14 = local_68 + uVar8 & local_60;
  if ((uVar8 != uVar14) || (uVar12 != local_50)) {
    uVar11 = local_48 << ((byte)uVar8 & 0x1f);
    puVar13 = (uint *)(*(longlong *)(param_1 + 0x20) + (uVar7 >> ((byte)local_70 & 0x3f)) * 4 + uVar10);
    if (uVar12 == local_50) {
      uVar5 = local_48 >> ((char)local_58 - (char)uVar14 & 0x1fU);
      uVar6 = uVar5 & uVar11;
      uVar11 = (local_48 ^ uVar5 | local_48 ^ uVar11) & *puVar13;
    }
    else {
      uVar6 = uVar11;
      if (cVar4 == '\0') {
        uVar6 = local_54;
      }
      *puVar13 = (local_48 ^ uVar11) & *puVar13 | uVar6;
      FUN_180207610(puVar13 + 1,-cVar4,uVar12 - 4);
      if (uVar14 == local_50) goto LAB_1800a9f3f;
      uVar6 = local_48 >> ((char)local_58 - (char)uVar14 & 0x1fU);
      puVar13 = (uint *)((longlong)puVar13 + uVar12);
      uVar11 = (local_48 ^ uVar6) & *puVar13;
    }
    if (cVar4 == '\0') {
      uVar6 = local_54;
    }
    *puVar13 = uVar11 | uVar6;
  }
LAB_1800a9f3f:
  local_a0 = CONCAT71(local_a0._1_7_,local_41);
  FUN_1800aa9d0(param_1,local_b0,&local_a0,1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
    FUN_1800ab3f0(param_1 + 8,puVar2,&local_a8);
    lVar9 = *(longlong *)(param_1 + 0x10);
  }
  else {
    *puVar2 = local_a8;
    lVar9 = *(longlong *)(param_1 + 0x10) + 8;
    *(longlong *)(param_1 + 0x10) = lVar9;
  }
  pbVar3 = *(byte **)(lVar9 + -8);
  uVar10 = 0xffffffffffffffff;
  if ((param_2 != 0xffffffffffffffff) && (pbVar3 != (byte *)0x0)) {
    uVar10 = (ulonglong)*pbVar3;
    uVar7 = local_68;
    if (*pbVar3 < 3) {
      uVar7 = *(ulonglong *)(&DAT_18020f2e0 + uVar10 * 8);
    }
    if (uVar7 < param_2) {
      FUN_180096c70(local_d0,param_2);
      FUN_1800b8f52(&DAT_1802a3304,&DAT_180274e5d,0x1f,0x17,&DAT_1802a331c);
      FUN_1800af7a0(&local_a0,&DAT_1802a3304,local_d0);
      FUN_1800aae00(local_108,0x198,&local_a0,pbVar3);
      FUN_1801dd110(local_108,&DAT_1802536f0);
    }
  }
  return CONCAT71((int7)(uVar10 >> 8),1);
}



void Unwind_1800aa090(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_1800aa0d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



undefined8 FUN_1800aa110(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_50 = 0xe000000000000000;
  local_38 = 0;
  local_78 = -1;
  local_48 = 5;
  local_40 = 0x1f;
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar9 + -8) == 0) {
    *(longlong *)(param_1 + 0x10) = lVar9 + -8;
    uVar5 = *(ulonglong *)(param_1 + 0x38);
    lVar9 = -0x2000000000000000;
    if (-1 < (longlong)uVar5) {
      lVar9 = 0;
    }
    local_58 = (uVar5 & 0x1f) - 1;
    lVar11 = -0x2000000000000000;
    if ((uVar5 & 0x1f) != 0) {
      lVar11 = 0;
    }
    local_60 = *(longlong *)(param_1 + 0x20) + (uVar5 >> 5) * 4 + lVar9 + (local_58 >> 5) * 4 + lVar11;
    local_58 = local_58 & 0x1f;
    FUN_1800b17d0(param_1 + 0x20,local_88,&local_60);
  }
  else {
    local_88[0] = 3;
    local_60 = CONCAT44(local_60._4_4_,(int)((ulonglong)(lVar9 - *(longlong *)(param_1 + 8)) >> 3) + -1);
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar7 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_60,local_88);
    if (cVar7 == '\0') {
      FUN_180084300(local_70,param_1 + 0xb8);
      puVar3 = *(undefined1 **)(*(longlong *)(param_1 + 0x10) + -8);
      uVar1 = *puVar3;
      *puVar3 = local_70[0];
      uVar4 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = local_68;
      local_70[0] = uVar1;
      local_68 = uVar4;
      FUN_18007ff50(&local_68);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
    uVar5 = *(ulonglong *)(param_1 + 0x38);
    uVar10 = local_50;
    if ((longlong)local_38 <= (longlong)uVar5) {
      uVar10 = local_38;
    }
    local_58 = local_78 + (local_40 & uVar5);
    uVar8 = local_50;
    if ((local_40 & uVar5) != local_38) {
      uVar8 = local_38;
    }
    local_60 = *(longlong *)(param_1 + 0x20) + (uVar5 >> ((byte)local_48 & 0x3f)) * 4 + uVar10 +
               (local_58 >> ((byte)local_48 & 0x3f)) * 4 + uVar8;
    local_58 = local_58 & local_40;
    FUN_1800b17d0(param_1 + 0x20,local_88,&local_60);
    if (((cVar7 == '\0') && (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10))) &&
       (pcVar6 = *(char **)(*(longlong *)(param_1 + 0x10) + -8), *pcVar6 == '\x02')) {
      lVar9 = *(longlong *)(pcVar6 + 8);
      lVar11 = *(longlong *)(lVar9 + 8);
      FUN_18007ff50(lVar11 + -8,*(undefined1 *)(lVar11 + -0x10));
      plVar2 = (longlong *)(lVar9 + 8);
      *plVar2 = *plVar2 + -0x10;
    }
  }
  return 1;
}



void Unwind_1800aa3a0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800aa3c0(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800aa3e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_30;

  local_30 = DAT_1802a0400 ^ (ulonglong)auStack_98;
  local_70 = 0x96993fda5008bd95;
  local_78 = 0xaa0c2c070c317195;
  while( true ) {
    while( true ) {
      uVar2 = local_70 ^ 0x7501cd252aefa91d;
      uVar1 = local_70 ^ local_78;
      local_78 = local_78 ^ 0x7501cd252aefa91d;
      if (uVar1 != 0x3c9513dd5c39cc00) break;
      *(undefined1 *)(param_1 + 0x68) = 1;
      local_70 = 0x29c53b8693b72b79;
      if (*(char *)(param_1 + 0xb0) != '\0') {
        local_70 = 0x972f378a167c93c9;
      }
      local_78 = 0xab0d92b3aa3d90fa;
    }
    if (uVar1 == 0x82c8a935398abb83) break;
    local_70 = uVar2;
    if (uVar1 == 0x3c22a539bc410333) {
      std::runtime_error::runtime_error((runtime_error *)&stack0xffffffffffffff98,param_4);
      FUN_1801dd110((runtime_error *)&stack0xffffffffffffff98,&DAT_1802536f0);
    }
  }
  if (DAT_1802a0400 == (local_30 ^ (ulonglong)auStack_98)) {
    return 0;
  }
}



void * __thiscall FUN_1800aa510(void *this,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined1 local_108;
  undefined7 uStack_107;
  uintptr_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  uintptr_t local_98;
  ulonglong local_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uintptr_t local_58;
  uint local_4c;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_80 = 0x20;
  local_58 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_60 = 0xfff;
  local_4c = 0;
  local_c8 = (undefined8 ***)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  local_e0 = 0;
  local_d8 = 0xc;
  local_d0 = 0xf;
  FUN_1800b8f52(&DAT_1802a328c,&DAT_180274d4f,0x12,0xd,&DAT_1802a329c);
  local_e0 = CONCAT44(local_e0._4_4_,DAT_1802a3294);
  local_e8 = DAT_1802a328c;
  FUN_180081f20(&local_108,&local_e8,param_2);
  local_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = local_48;
  if (local_48 < local_f8 + *(longlong *)(param_3 + 0x10)) {
    FUN_180002240(&local_a8);
    local_98 = local_58;
  }
  FUN_1800820e0(&local_a8,&local_108,&local_c8,param_3);
  if (local_48 < local_f0) {
    lVar1 = CONCAT71(uStack_107,local_108);
    uVar4 = local_78 + local_f0;
    lVar2 = lVar1;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (local_80 <= (ulonglong)((lVar1 + local_70) - lVar2)) goto LAB_1800aa844;
      uVar4 = local_f0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  local_f8 = local_58;
  local_f0 = local_48;
  local_108 = 0;
  if (local_48 < local_d0) {
    uVar4 = local_78 + local_d0;
    lVar2 = local_e8;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(local_e8 + -8);
      if (local_80 <= (ulonglong)((local_e8 + local_70) - lVar2)) goto LAB_1800aa844;
      uVar4 = local_d0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  if (local_48 < local_b0) {
    uVar4 = local_78 + local_b0;
    pppuVar3 = (undefined8 ***)local_c8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_c8[-1];
      if (local_80 <= (ulonglong)((longlong)local_c8 + (local_70 - (longlong)pppuVar3))) goto LAB_1800aa844;
      uVar4 = local_b0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  local_c8 = &local_a8;
  if (local_48 < local_90) {
    local_c8 = local_a8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  FUN_1801dd1b8(&local_c8,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020f2b8;
  if (local_48 < local_90) {
    uVar4 = local_78 + local_90;
    pppuVar3 = (undefined8 ***)local_a8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_a8[-1];
      if (local_80 <= (ulonglong)((longlong)local_a8 + (local_70 - (longlong)pppuVar3))) {
LAB_1800aa844:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_58);
      }
      uVar4 = local_90 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  return this;
}



void Unwind_1800aa860(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_1800aa8a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  FUN_180001ef0(param_2 + 0x30);
  return;
}



undefined8 * FUN_1800aa8e0(undefined8 *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  size_t sVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar1 = strlen(param_2);
  if (0xf < *(longlong *)(param_3 + 0x10) + sVar1 + 1) {
    FUN_180002240(param_1);
    param_1[2] = 0;
  }
  FUN_1800af940(param_1,param_2,param_3,param_4);
  return param_1;
}



void Unwind_1800aa9a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x30));
  return;
}



undefined1 * FUN_1800aa9d0(longlong *param_1,undefined1 *param_2,undefined1 *param_3,char param_4)

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
  undefined8 uVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
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
  undefined4 local_60;
  undefined4 uStack_5c;
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
  uVar15 = (uVar3 & 0x1f) - 1;
  lVar14 = -0x2000000000000000;
  if ((uVar3 & 0x1f) != 0) {
    lVar14 = 0;
  }
  if ((1 << ((byte)uVar15 & 0x1f) & *(uint *)(lVar14 + param_1[4] + (uVar3 >> 5) * 4 + lVar13 + (uVar15 >> 5) * 4)) == 0
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    return param_2;
  }
  local_60 = CONCAT31(local_60._1_3_,*param_3);
  FUN_180081d80(&uStack_58);
  if (param_4 == '\0') {
    local_d0[0] = 5;
    local_c0 = CONCAT44(local_c0._4_4_,(int)((ulonglong)(param_1[2] - param_1[1]) >> 3));
    plVar4 = (longlong *)param_1[0x15];
    if (plVar4 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_c0,local_d0,&local_60);
    if (cVar11 != '\0') goto LAB_1800aab80;
LAB_1800aacac:
    *param_2 = local_41;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
LAB_1800aab80:
    uVar10 = uStack_58;
    uVar9 = local_60;
    uVar8 = local_64;
    if (param_1[1] == param_1[2]) {
      uStack_a4 = uStack_5c;
      local_60 = CONCAT31(local_60._1_3_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)*param_1;
      uVar1 = *puVar7;
      local_a8 = (undefined1)uVar9;
      *puVar7 = local_a8;
      _local_a8 = CONCAT31(local_60._1_3_,uVar1);
      uStack_a0 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar10;
      FUN_18007ff50(&uStack_a0);
      lVar13 = *param_1;
LAB_1800aad27:
      *param_2 = local_42;
    }
    else {
      pcVar5 = *(char **)(param_1[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_1800aacac;
      if (*pcVar5 == '\x02') {
        lVar13 = *(longlong *)(pcVar5 + 8);
        puVar6 = *(undefined4 **)(lVar13 + 8);
        if (puVar6 == *(undefined4 **)(lVar13 + 0x10)) {
          FUN_180080af0(lVar13,puVar6,&local_60);
        }
        else {
          *puVar6 = local_60;
          puVar6[1] = uStack_5c;
          puVar6[2] = (undefined4)uStack_58;
          puVar6[3] = uStack_58._4_4_;
          local_60 = CONCAT31(local_60._1_3_,local_41);
          uStack_58 = 0;
          *(longlong *)(lVar13 + 8) = *(longlong *)(lVar13 + 8) + 0x10;
        }
        lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800aad27;
      }
      uVar3 = param_1[0xb];
      uVar15 = local_78;
      if ((longlong)local_50 <= (longlong)uVar3) {
        uVar15 = local_50;
      }
      uVar12 = local_b0 + (local_80 & uVar3);
      uVar17 = local_78;
      if ((local_80 & uVar3) != local_50) {
        uVar17 = local_50;
      }
      local_b8 = uVar12 & local_80;
      uVar16 = local_68 << ((byte)local_b8 & 0x1f);
      local_c0 = param_1[8] + (uVar3 >> ((byte)local_70 & 0x3f)) * 4 + uVar15 + (uVar12 >> ((byte)local_70 & 0x3f)) * 4;
      uVar2 = *(uint *)(uVar17 + local_c0);
      local_c0 = local_c0 + uVar17;
      FUN_1800b17d0(param_1 + 8,local_d0,&local_c0);
      uVar10 = uStack_58;
      uVar9 = local_60;
      if ((uVar16 & uVar2) == uVar8) goto LAB_1800aacac;
      uStack_94 = uStack_5c;
      local_60 = CONCAT31(local_60._1_3_,local_41);
      uStack_58 = 0;
      puVar7 = (undefined1 *)param_1[0xc];
      uVar1 = *puVar7;
      local_98 = (undefined1)uVar9;
      *puVar7 = local_98;
      _local_98 = CONCAT31(local_60._1_3_,uVar1);
      auStack_90[0] = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar10;
      FUN_18007ff50(auStack_90);
      *param_2 = local_42;
      lVar13 = param_1[0xc];
    }
    *(longlong *)(param_2 + 8) = lVar13;
  }
  FUN_18007ff50(&uStack_58,(undefined1)local_60);
  return param_2;
}



void Unwind_1800aad60(void)

{
  Unwind_1801dd394();
}



void Unwind_1800aad80(void)

{
  Unwind_1801dd394();
}



void Unwind_1800aada0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800aadc0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x98);
  return;
}



void * __thiscall FUN_1800aae00(void *this,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined1 local_108;
  undefined7 uStack_107;
  uintptr_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  uintptr_t local_98;
  ulonglong local_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uintptr_t local_58;
  uint local_4c;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_80 = 0x20;
  local_58 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_60 = 0xfff;
  local_4c = 0;
  local_c8 = (undefined8 ***)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  local_e0 = 0;
  local_d8 = 0xc;
  local_d0 = 0xf;
  FUN_1800b8f52(&DAT_1802a328c,&DAT_180274d4f,0x12,0xd,&DAT_1802a329c);
  local_e0 = CONCAT44(local_e0._4_4_,DAT_1802a3294);
  local_e8 = DAT_1802a328c;
  FUN_180081f20(&local_108,&local_e8,param_2);
  local_a8 = (undefined8 ***)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = local_48;
  if (local_48 < local_f8 + *(longlong *)(param_3 + 0x10)) {
    FUN_180002240(&local_a8);
    local_98 = local_58;
  }
  FUN_1800820e0(&local_a8,&local_108,&local_c8,param_3);
  if (local_48 < local_f0) {
    lVar1 = CONCAT71(uStack_107,local_108);
    uVar4 = local_78 + local_f0;
    lVar2 = lVar1;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (local_80 <= (ulonglong)((lVar1 + local_70) - lVar2)) goto LAB_1800ab134;
      uVar4 = local_f0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  local_f8 = local_58;
  local_f0 = local_48;
  local_108 = 0;
  if (local_48 < local_d0) {
    uVar4 = local_78 + local_d0;
    lVar2 = local_e8;
    if (local_60 < uVar4) {
      lVar2 = *(longlong *)(local_e8 + -8);
      if (local_80 <= (ulonglong)((local_e8 + local_70) - lVar2)) goto LAB_1800ab134;
      uVar4 = local_d0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar2,uVar4);
  }
  if (local_48 < local_b0) {
    uVar4 = local_78 + local_b0;
    pppuVar3 = (undefined8 ***)local_c8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_c8[-1];
      if (local_80 <= (ulonglong)((longlong)local_c8 + (local_70 - (longlong)pppuVar3))) goto LAB_1800ab134;
      uVar4 = local_b0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  local_c8 = &local_a8;
  if (local_48 < local_90) {
    local_c8 = local_a8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  FUN_1801dd1b8(&local_c8,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020f2b8;
  if (local_48 < local_90) {
    uVar4 = local_78 + local_90;
    pppuVar3 = (undefined8 ***)local_a8;
    if (local_60 < uVar4) {
      pppuVar3 = (undefined8 ***)local_a8[-1];
      if (local_80 <= (ulonglong)((longlong)local_a8 + (local_70 - (longlong)pppuVar3))) {
LAB_1800ab134:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_58);
      }
      uVar4 = local_90 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar3,uVar4);
  }
  return this;
}



void Unwind_1800ab150(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_1800ab190(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  FUN_180001ef0(param_2 + 0x30);
  return;
}



undefined8 * FUN_1800ab1d0(undefined8 *param_1,char *param_2,undefined8 *param_3)

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



void Unwind_1800ab340(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



longlong FUN_1800ab3f0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  byte local_d8;
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

  local_f8 = 0x1630dae399cb7a24;
  local_100 = 0x8e66f4f737bcd53c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_f8 ^ 0xac2f32040b9ea23f;
              uVar1 = local_f8 ^ local_100;
              local_100 = local_100 ^ 0xac2f32040b9ea23f;
              local_f8 = uVar3;
              if ((longlong)uVar1 < 0x46635f5adfc8564) break;
              if ((longlong)uVar1 < 0x428fc079a66323d2) {
                if ((longlong)uVar1 < 0x1fa76e9a932319e1) {
                  if (uVar1 == 0x46635f5adfc8564) {
                    local_b8 = FUN_1801d61c8(local_90);
                    local_f8 = 0x40f6526a91a22a9e;
                    local_100 = 0x10669a0c13eab6ec;
                  }
                  else if (uVar1 == 0x10715d2560f67c16) {
                    FUN_1802079d0(local_e8);
                    local_f8 = 0x5465e5f45490738d;
                    local_100 = 0x67d04d94e8dcfe95;
                  }
                }
                else if (uVar1 == 0x1fa76e9a932319e1) {
                  local_80 = local_50 + local_d0;
                  local_78 = local_48;
                  local_f8 = 0x2e5c7ce99abeb725;
                  local_100 = 0xe03fae8b96ba1884;
                }
                else if (uVar1 == 0x33b5a860bc4c8d18) {
                  local_98 = *param_1;
                  local_f8 = 0x1623aec0bf66801d;
                  if (local_98 != 0) {
                    local_f8 = 0xb03066aa48eecf9b;
                  }
                  local_100 = 0x54ac6eb91905a3cf;
                }
              }
              else if ((longlong)uVar1 < 0x66ca7cf29c0e03de) {
                if (uVar1 == 0x5090c86682489c72) {
                  local_e8 = local_b8;
                  local_88 = local_b8 + local_68;
                  *(undefined8 *)(local_b8 + local_68) = *param_3;
                  local_f8 = 0xbb1ad16e130256f7;
                  if (param_2 != *local_c8) {
                    local_f8 = 0x6ea0b8ab2e57e6d2;
                  }
                  local_100 = 0xab6b8c4b73f42ae1;
                }
                else if (uVar1 == 0x428fc079a66323d2) {
                  *param_1 = local_e8;
                  *local_c8 = local_e8 + local_60 * 8;
                  *local_a0 = local_f0 * 8 + local_e8;
                  return local_88;
                }
              }
              else if (uVar1 == 0x66ca7cf29c0e03de) {
                local_f8 = 0x359e1308230fa39a;
                if (0x1ffffffffffffffb < local_f0) {
                  local_f8 = 0x7667b9f6632d9207;
                }
                local_100 = 0x80535cdcb3adf315;
              }
              else if (uVar1 == 0x68ab20452792ab18) {
                local_90 = local_f0 << (local_d8 & 0x3f);
                local_f8 = 0x6c33e49c32ee7b1;
                if (local_f0 != local_a8) {
                  local_f8 = 0x8199d41abc5cb692;
                }
                local_100 = 0x5653f62f41667bc3;
                local_b8 = 0;
              }
            }
            if ((longlong)uVar1 < -0x319c2d9df3fb505f) break;
            if ((longlong)uVar1 < -0x2835ddca02c532af) {
              if (uVar1 == 0xce63d2620c04afa1) {
                thunk_FUN_1801f42e0(local_78,local_80);
                local_f8 = 0xdb1336012229bd81;
                local_100 = 0x999cf678844a9e53;
              }
              else if (uVar1 == 0xcef99e84b0abc2bb) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_a8);
              }
            }
            else if (uVar1 == 0xd7ca2235fd3acd51) {
              local_f8 = 0xa198454d361ec4c9;
              if (local_f0 < 0x200) {
                local_f8 = 0xc3340c4a07ec4273;
              }
              local_100 = 0xc75239bfaa10c717;
            }
            else if (uVar1 == 0xe49c081351eb6c54) {
              local_58 = local_98;
              local_80 = *local_a0 - local_98;
              local_f8 = 0xacbc5f411aa6e431;
              if (local_80 < 0x1000) {
                local_f8 = 0xa888c3ed78d93fa8;
              }
              local_100 = 0x66eb118f74dd9009;
              local_78 = local_98;
              local_50 = local_80;
            }
            else if (uVar1 == 0xf634e52ad0806112) goto LAB_1800abbde;
          }
          if ((longlong)uVar1 < -0x3a34cb1fa25c33cd) break;
          if (uVar1 == 0xc5cb34e05da3cc33) {
            FUN_1802079d0(local_e8,*param_1,local_c0 - *param_1);
            FUN_1802079d0(local_88 + 8,param_2);
            local_f8 = 0x88de8eba2254583;
            local_100 = 0x3b38408b1e69c89b;
          }
          else if (uVar1 == 0xca574ece6e7b7438) {
            local_48 = *(ulonglong *)(local_98 - 8);
            local_f8 = 0xe323477b91901e98;
            if (0x1f < (local_58 - local_48) - 8) {
              local_f8 = 0x327db765b218c5c2;
            }
            local_100 = 0xfc8429e102b30779;
          }
        }
        if (uVar1 != 0x98562e14ae77af18) break;
        local_d0 = 0x27;
        local_a8 = 0;
        local_d8 = 3;
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
        local_f8 = 0x48a9d5e03fd732d2;
        if (local_f0 < 0x2000000000000000) {
          local_f8 = 0xbe25130f82239cc3;
        }
        local_100 = 0xd68e334aa5b137db;
        local_c0 = param_2;
      }
      if (uVar1 != 0xb5cd4fd490a2508f) break;
      lVar2 = FUN_1801d61c8(local_90 + local_d0);
      local_b8 = local_d0 + lVar2 & 0xffffffffffffffe0;
      *(longlong *)(local_b8 - 8) = lVar2;
      local_f8 = 0x105a51d694fc236d;
      local_100 = 0x40ca99b016b4bf1f;
    }
  } while (uVar1 != 0x9e27e6aa9a660509);
LAB_1800abbde:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined8 * FUN_1800abdc0(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined1 local_150 [56];
  undefined1 local_118 [56];
  undefined1 local_e0 [56];
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char local_78;
  undefined3 uStack_77;
  undefined4 uStack_74;
  undefined8 auStack_70 [3];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  char local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_a0 = 0xf;
  local_58 = 0x20;
  local_50 = 0;
  local_90 = 1;
  local_98 = 0xfffffffffffffff8;
  local_88 = 0x28;
  local_41 = '\0';
  local_80 = 0xfff;
  local_48 = 0;
  if (param_1 != (char *)*param_3) {
    FUN_1800b8f52(&DAT_1802a32a0,&DAT_180274d82,0x1e,0x24,&DAT_1802a32c4);
    FUN_180057290(&local_78,&DAT_1802a32a0);
    FUN_1800ac3e0(local_150,0xca,&local_78,param_1);
    FUN_1801dd110(local_150,&DAT_180253660);
  }
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  cVar1 = *param_1;
  if (cVar1 < '\x02') {
    if (cVar1 == '\x01') {
      uVar10 = *(undefined8 *)(param_1 + 8);
      plVar7 = (longlong *)param_3[1];
      plVar4 = (longlong *)plVar7[2];
      if (*(char *)(plVar7[2] + 0x19) == '\0') {
        do {
          plVar13 = plVar4;
          plVar4 = (longlong *)*plVar13;
        } while (*(char *)(*plVar13 + 0x19) == '\0');
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar13 = (longlong *)plVar7[1];
        while ((cVar1 == '\0' && (plVar7 == (longlong *)plVar13[2]))) {
          cVar1 = *(char *)(plVar13[1] + 0x19);
          plVar7 = plVar13;
          plVar13 = (longlong *)plVar13[1];
        }
      }
      uVar5 = FUN_1800ac7f0(uVar10);
      FUN_180081170(uVar10,uVar5);
      param_2[1] = plVar13;
      return param_2;
    }
  }
  else if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(param_1 + 8);
    pcVar11 = *(char **)(lVar2 + 8);
    lVar6 = param_3[2];
    pcVar12 = (char *)(lVar6 + 0x10);
    if (pcVar12 != pcVar11) {
      do {
        uVar3 = *(undefined4 *)pcVar12;
        uStack_74 = *(undefined4 *)(pcVar12 + 4);
        uVar10 = *(undefined8 *)(pcVar12 + 8);
        *pcVar12 = local_41;
        pcVar12[8] = '\0';
        pcVar12[9] = '\0';
        pcVar12[10] = '\0';
        pcVar12[0xb] = '\0';
        pcVar12[0xc] = '\0';
        pcVar12[0xd] = '\0';
        pcVar12[0xe] = '\0';
        pcVar12[0xf] = '\0';
        cVar1 = pcVar12[-0x10];
        local_78 = (char)uVar3;
        pcVar12[-0x10] = local_78;
        _local_78 = CONCAT31((int3)((uint)uVar3 >> 8),cVar1);
        auStack_70[0] = *(undefined8 *)(pcVar12 + -8);
        *(undefined8 *)(pcVar12 + -8) = uVar10;
        FUN_18007ff50(auStack_70);
        pcVar12 = pcVar12 + 0x10;
      } while (pcVar12 != pcVar11);
      pcVar11 = *(char **)(lVar2 + 8);
    }
    FUN_18007ff50(pcVar11 + -8,pcVar11[-0x10]);
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + -0x10;
    param_2[2] = lVar6;
    return param_2;
  }
  param_2[3] = 1;
  if (5 < (byte)(cVar1 - 3U)) {
    local_a8 = FUN_180081b20(param_1);
    FUN_1800b8f52(&DAT_1802a32e4,&DAT_180274e17,0x16,0x19,&DAT_1802a3300);
    FUN_180088cc0(&local_78,&DAT_1802a32e4,&local_a8);
    FUN_1800815b0(local_e0,0x133,&local_78,param_1);
    FUN_1801dd110(local_e0,&DAT_180253620);
  }
  if (param_3[3] != 0) {
    FUN_1800b8f52(&DAT_1802a32c8,&DAT_180274ddd,0x14,0x16,&DAT_1802a32e0);
    FUN_180057290(&local_78,&DAT_1802a32c8);
    FUN_1800ac3e0(local_118,0xcd,&local_78,param_1);
    FUN_1801dd110(local_118,&DAT_180253660);
  }
  if (cVar1 < '\b') {
    if (cVar1 != '\x03') goto LAB_1800ac0eb;
    plVar7 = *(longlong **)(param_1 + 8);
    uVar9 = plVar7[3];
    if (0xf < uVar9) {
      lVar2 = *plVar7;
      uVar8 = uVar9 + 1;
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar6)) {
LAB_1800ac2b8:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar8 = uVar9 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar6,uVar8);
    }
    plVar7[2] = local_50;
    plVar7[3] = local_a0;
    *(char *)plVar7 = local_41;
    plVar7 = *(longlong **)(param_1 + 8);
    uVar10 = local_58;
  }
  else {
    if (cVar1 != '\b') goto LAB_1800ac0eb;
    plVar7 = *(longlong **)(param_1 + 8);
    lVar2 = *plVar7;
    uVar10 = local_88;
    if (lVar2 != 0) {
      uVar9 = plVar7[2] - lVar2;
      lVar6 = lVar2;
      if (0xfff < uVar9) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar6)) goto LAB_1800ac2b8;
        uVar9 = uVar9 + 0x27;
      }
      thunk_FUN_1801f42e0(lVar6,uVar9);
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7 = *(longlong **)(param_1 + 8);
      uVar10 = local_88;
    }
  }
  thunk_FUN_1801f42e0(plVar7,uVar10);
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
LAB_1800ac0eb:
  *param_1 = local_41;
  return param_2;
}



void Unwind_1800ac2e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800ac320(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1800ac360(void)

{
  Unwind_1801dd394();
}



void Unwind_1800ac380(void)

{
  Unwind_1801dd394();
}



void Unwind_1800ac3a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void * __thiscall FUN_1800ac3e0(void *this,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  ulonglong uVar8;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  uintptr_t local_c8;
  ulonglong local_c0;
  undefined8 **local_b8;
  undefined8 uStack_b0;
  uintptr_t local_a8;
  ulonglong local_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  uintptr_t local_50;
  uint local_44;
  ulonglong local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_40 = 0xf;
  local_58 = 0x20;
  local_50 = 0;
  local_78 = 1;
  local_70 = -8;
  local_68 = 0x28;
  local_31 = 0;
  local_60 = 0xfff;
  local_44 = 0;
  local_98 = (undefined8 ***)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_f0 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x20);
  local_e8 = 0x10;
  local_e0 = 0x1f;
  local_f8 = puVar5;
  FUN_1800b8f52(&DAT_1802a2240,&DAT_180272211,0x16,0x11,&DAT_1802a2254);
  uVar4 = uRam00000001802a224c;
  uVar3 = uRam00000001802a2248;
  uVar2 = uRam00000001802a2244;
  *puVar5 = _DAT_1802a2240;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)(puVar5 + 4) = local_31;
  FUN_180081f20(&local_d8,&local_f8,param_2);
  local_b8 = (undefined8 ***)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = local_40;
  if (local_40 < local_88 + local_c8 + *(longlong *)(param_3 + 0x10)) {
    FUN_180002240(&local_b8);
    local_a8 = local_50;
  }
  FUN_1800820e0(&local_b8,&local_d8,&local_98,param_3);
  if (local_40 < local_c0) {
    lVar1 = CONCAT71(uStack_d7,local_d8);
    uVar8 = local_78 + local_c0;
    lVar6 = lVar1;
    if (local_60 < uVar8) {
      lVar6 = *(longlong *)(lVar1 + -8);
      if (local_58 <= (ulonglong)((lVar1 + local_70) - lVar6)) goto LAB_1800ac72f;
      uVar8 = local_c0 + local_68;
    }
    thunk_FUN_1801f42e0(lVar6,uVar8);
  }
  local_c8 = local_50;
  local_c0 = local_40;
  local_d8 = local_31;
  if (local_40 < local_e0) {
    uVar8 = local_78 + local_e0;
    puVar5 = local_f8;
    if (local_60 < uVar8) {
      puVar5 = *(undefined4 **)(local_f8 + -2);
      if (local_58 <= (ulonglong)((longlong)local_f8 + (local_70 - (longlong)puVar5))) goto LAB_1800ac72f;
      uVar8 = local_e0 + local_68;
    }
    thunk_FUN_1801f42e0(puVar5,uVar8);
  }
  if (local_40 < local_80) {
    uVar8 = local_78 + local_80;
    pppuVar7 = (undefined8 ***)local_98;
    if (local_60 < uVar8) {
      pppuVar7 = (undefined8 ***)local_98[-1];
      if (local_58 <= (ulonglong)((longlong)local_98 + (local_70 - (longlong)pppuVar7))) goto LAB_1800ac72f;
      uVar8 = local_80 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar7,uVar8);
  }
  local_98 = &local_b8;
  if (local_40 < local_a0) {
    local_98 = local_b8;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined ***)this = &PTR_exception_18020e910;
  *(undefined4 *)((longlong)this + 0x18) = param_2;
  *(exception_vftable **)((longlong)this + 0x20) = &std::exception::vftable;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  uStack_90 = CONCAT71(uStack_90._1_7_,1);
  FUN_1801dd1b8(&local_98,(longlong)this + 0x28);
  *(runtime_error_vftable **)((longlong)this + 0x20) = &std::runtime_error::vftable;
  *(undefined ***)this = &PTR_exception_18020e928;
  if (local_40 < local_a0) {
    uVar8 = local_78 + local_a0;
    pppuVar7 = (undefined8 ***)local_b8;
    if (local_60 < uVar8) {
      pppuVar7 = (undefined8 ***)local_b8[-1];
      if (local_58 <= (ulonglong)((longlong)local_b8 + (local_70 - (longlong)pppuVar7))) {
LAB_1800ac72f:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_44,local_50);
      }
      uVar8 = local_a0 + local_68;
    }
    thunk_FUN_1801f42e0(pppuVar7,uVar8);
  }
  return this;
}



void Unwind_1800ac750(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_1800ac780(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1800ac7b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  FUN_180001ef0(param_2 + 0x50);
  return;
}



longlong * FUN_1800ac7f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char local_30a;
  char local_309;
  ulonglong local_308;
  ulonglong local_300;
  longlong *local_2f8;
  char local_2ea;
  char local_2e9;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  undefined8 *local_270;
  longlong *local_268;
  longlong *local_260;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  char *local_208;
  undefined8 *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;

  local_300 = 0x2268977181ee9c19;
  local_308 = 0xfc112be08b866629;
  plVar2 = local_1e0;
LAB_1800ac8c0:
  while( true ) {
    local_1e0 = plVar2;
    uVar4 = local_300 ^ 0xad29d7d64f420b88;
    uVar3 = local_300 ^ local_308;
    local_308 = local_308 ^ 0xad29d7d64f420b88;
    local_300 = uVar4;
    plVar2 = local_1e0;
    if ((longlong)uVar3 < -0xa5e5bfc86b13f07) break;
    if ((longlong)uVar3 < 0x34819fdc603f8244) {
      if ((longlong)uVar3 < 0x12251b273b203905) {
        if ((longlong)uVar3 < 0x1fb09f6749afad) {
          if ((longlong)uVar3 < -0x20021b4957f7fed) {
            if (uVar3 == 0xf5a1a403794ec0f9) {
              *(char *)(local_60 + 0x18) = local_309;
              *(char *)(local_2e0 + 3) = local_30a;
              local_2a0 = *local_2e0;
              local_f0 = (undefined8 *)(local_2a0 + 0x10);
              local_e8 = *(longlong *)(local_2a0 + 0x10);
              *local_2e0 = local_e8;
              local_300 = 0x96cd80d5e5ca70;
              if (*(char *)(local_e8 + 0x19) == local_30a) {
                local_300 = 0x66e31f22caea1c9e;
              }
              local_308 = 0xecef504d8f3bf2ae;
            }
            else if (uVar3 == 0xfa59241c38f88699) {
              *local_260 = (longlong)local_2b0;
              local_300 = 0x85322038d5358306;
              local_308 = 0x97173b1fee15ba03;
            }
            else if (uVar3 == 0xfba8ca7f97477f5d) {
              local_148 = local_d8 + 3;
              local_300 = 0x902667cbcfcde12e;
              if ((char)local_d8[3] == local_30a) {
                local_300 = 0x79bc2f17bbbbbe52;
              }
              local_308 = 0x6e81c33e3c08772a;
              local_1d8 = local_d8;
            }
          }
          else if (uVar3 == 0xfdffde4b6a808013) {
            local_2e0 = local_1b0;
            local_300 = 0x7e97bf7deebcb091;
            if (*(char *)((longlong)local_1b0 + 0x19) == local_30a) {
              local_300 = 0xea3ab0f0c88b4330;
            }
            local_308 = 0xb751241a62f84abf;
          }
          else if (uVar3 == 0xfe47d047452bda35) {
            *(longlong **)(local_e0 + 8) = local_2d0;
            *local_2d0 = *local_2e8;
            local_300 = 0x99e9ccb6bce414ea;
            if (local_2d0 == (longlong *)*local_220) {
              local_300 = 0xc1ff596fe4601cc8;
            }
            local_308 = 0x48186be8a9123c61;
            local_1a8 = local_2d0;
          }
          else if (uVar3 == 0xfea7a4f5f3c59604) {
            local_2d8 = local_1d8;
            local_300 = 0x4d7c990bdb4d7e48;
            if (*(char *)((longlong)local_1d8 + 0x19) == local_30a) {
              local_300 = 0xd50a49dd7c7ec540;
            }
            local_308 = 0x84ba026c57098466;
          }
        }
        else if ((longlong)uVar3 < 0xd04842afe39d1ba) {
          if (uVar3 == 0x1fb09f6749afad) {
            *local_130 = local_298;
            local_300 = 0xef037559a0bf2ded;
            local_308 = 0x363724d82878a098;
          }
          else if (uVar3 == 0xaa0aed88f0b40e4) {
            local_248 = (longlong *)*local_2e8;
            if (*(char *)(*local_2e8 + 0x19) != local_30a) {
              local_248 = local_218;
            }
            local_300 = 0x3e759e1f4b2b41fc;
            local_308 = 0x8a72e0214c862486;
          }
          else if (uVar3 == 0xbbf9fa49ac1b209) {
            *local_210 = local_298;
            local_300 = 0x9909a58af08e2b22;
            local_308 = 0x403df40b7849a657;
          }
        }
        else if (uVar3 == 0xd04842afe39d1ba) {
          *local_98 = local_2b0;
          local_300 = 0xc390f80d8a145f;
          local_308 = 0x12e68bdf36aa2d5a;
        }
        else if (uVar3 == 0xd127959106c8bd7) {
          *local_108 = local_2a0;
          local_300 = 0xa81d91f6883aa75e;
          local_308 = 0xd912093766cb3ea9;
        }
        else if (uVar3 == 0xf6e847ab65d98c4) {
          local_180 = local_2d0 + 2;
          local_280 = (longlong *)local_2d0[2];
          local_300 = 0x27475b7efe934f26;
          if (local_2d0 == local_2e8) {
            local_300 = 0x6d07f507bc15f069;
          }
          local_308 = 0xd9008b39bbb89513;
          local_248 = local_280;
        }
      }
      else if ((longlong)uVar3 < 0x17ad1964fc9016b5) {
        if ((longlong)uVar3 < 0x14ba05201efbab5c) {
          if (uVar3 == 0x12251b273b203905) {
            *local_2b0 = (longlong)local_2d8;
            *local_a0 = (longlong)local_2b0;
            local_230 = (longlong *)*local_2f8;
            local_300 = 0x9bc24cbc26b2e3aa;
            local_308 = 0x8895ae73c5814e85;
          }
          else if (uVar3 == 0x1341a7fbc601c91c) {
            local_278 = local_2f8 + 2;
            local_1b0 = (longlong *)local_2f8[2];
            local_f8 = local_1b0 + 3;
            local_300 = 0xb9e14ab0ac17999c;
            if ((char)local_1b0[3] == local_30a) {
              local_300 = 0x50a491dbd86cb2d3;
            }
            local_308 = 0x441e94fbc697198f;
          }
          else if (uVar3 == 0x1357e2cfe333ad2f) {
            *(char *)(local_230 + 3) = (char)local_2f8[3];
            *(char *)(local_2f8 + 3) = local_309;
            *(char *)(*local_230 + 0x18) = local_309;
            local_298 = *local_2f8;
            local_c8 = (undefined8 *)(local_298 + 0x10);
            local_c0 = *(longlong *)(local_298 + 0x10);
            *local_2f8 = local_c0;
            local_300 = 0x59ce9b7251bef3e1;
            if (*(char *)(local_c0 + 0x19) == local_30a) {
              local_300 = 0xe980d6796d39b678;
            }
            local_308 = 0xbc702fb17f96f30b;
          }
        }
        else if (uVar3 == 0x14ba05201efbab5c) {
          *(char *)local_f8 = local_309;
          *(char *)(local_2f8 + 3) = local_30a;
          local_290 = (longlong *)*local_278;
          local_68 = *local_290;
          *local_278 = local_68;
          local_300 = 0xa6797d4870345c64;
          if (*(char *)(local_68 + 0x19) == local_30a) {
            local_300 = 0xcb83ad6db4353de7;
          }
          local_308 = 0x7818cf9e55ec94e4;
        }
        else if (uVar3 == 0x16dde5d57108743a) {
          local_228 = local_1c8;
          local_2f8 = local_1d0;
          local_300 = 0x7a759983bab0f901;
          if ((char)local_1c8[3] == local_309) {
            local_300 = 0xb834530b28a9c95c;
          }
          local_308 = 0xe4afaec90d56e9ba;
          local_288 = local_1c8;
        }
        else if (uVar3 == 0x173dec2987b3c978) {
          *(char *)local_148 = local_309;
          *(char *)(local_2f8 + 3) = local_30a;
          local_2b8 = *local_2f8;
          local_168 = (undefined8 *)(local_2b8 + 0x10);
          local_160 = *(longlong *)(local_2b8 + 0x10);
          *local_2f8 = local_160;
          local_300 = 0x9612d10cc00a1188;
          if (*(char *)(local_160 + 0x19) == local_30a) {
            local_300 = 0x584d79541dda0557;
          }
          local_308 = 0x7b224609043b51fc;
        }
      }
      else if ((longlong)uVar3 < 0x236f3f5d19e154ab) {
        if (uVar3 == 0x17ad1964fc9016b5) {
          *local_d0 = local_2d0;
          local_300 = 0x9980c1407a0c8fb9;
          local_308 = 0xc79b1cff9ae90ae3;
        }
        else if (uVar3 == 0x1953c55a13d91ec4) {
          *local_1f8 = local_2a0;
          local_300 = 0xd135a563dfc86c6;
          local_308 = 0x7c1cc297d30d1f31;
        }
        else if (uVar3 == 0x1f231f61a40fb652) {
          local_158 = param_1 + 1;
          local_150 = param_1[1];
          local_300 = 0x540397016071a814;
          if (local_150 == 0) {
            local_300 = 0xec963e8a48106a44;
          }
          local_308 = 0xc370fe82f39110d3;
        }
      }
      else if ((longlong)uVar3 < 0x2fe6c008bb817a97) {
        if (uVar3 == 0x236f3f5d19e154ab) {
          *(longlong **)(local_160 + 8) = local_2f8;
          local_300 = 0x8d8435057e66cc4;
          local_308 = 0xe5e8d45593d72cb0;
        }
        else if (uVar3 == 0x26ec0a0ebc31888f) {
          local_300 = 0x6b5effc9fb12cc66;
          if (*(char *)(local_1e0[2] + 0x19) == local_30a) {
            local_300 = 0xf8d3bc067a9a079f;
          }
          local_308 = 0xde3fb608c6ab8f10;
          plVar2 = (longlong *)local_1e0[2];
          local_1b8 = local_1e0;
        }
      }
      else if (uVar3 == 0x3429dc34c2147711) {
        *local_200 = local_2d0;
        local_300 = 0xbce9277696b7cc9f;
        local_308 = 0xe2f2fac9765249c5;
      }
      else if (uVar3 == 0x2fe6c008bb817a97) {
        return local_2e8;
      }
    }
    else if ((longlong)uVar3 < 0x5e1bddbfe0e5855a) {
      if ((longlong)uVar3 < 0x54a0f7dab4927c54) {
        if ((longlong)uVar3 < 0x4f5cc0cdaf3237b6) {
          if (uVar3 == 0x34819fdc603f8244) {
            *local_2a8 = (longlong)local_2f8;
            *local_90 = (longlong)local_2a8;
            local_300 = 0xf959a75fff5e9729;
            local_308 = 0x6783901548b88792;
LAB_1800ae511:
            local_288 = local_228;
          }
          else if (uVar3 == 0x3d1e7e1982c82f0c) {
            local_300 = 0x8a6d22a0b4712f7;
            if ((longlong *)*local_2c8 == local_2e8) {
              local_300 = 0x280b75cb539cd10a;
            }
            local_308 = 0x6757b506fcaee6bc;
          }
          else if (uVar3 == 0x41b18db3daeef9fc) {
            local_258[2] = (longlong)local_2a8;
            local_300 = 0x7db9d1bde34a8d40;
            local_308 = 0x49384e6183750f04;
          }
        }
        else if (uVar3 == 0x4f5cc0cdaf3237b6) {
          *local_2c8 = (longlong)local_2c0;
          local_300 = 0x1e3ed0ec0dc50308;
          local_308 = 0xa71c898a2b82ce62;
        }
        else if (uVar3 == 0x51b04bb12b774126) {
          local_80 = local_2d8[2];
          local_300 = 0x12a4ccfb6b95a542;
          if (*(char *)(local_80 + 0x18) == local_309) {
            local_300 = 0xb5064570be715647;
          }
          local_2ea = *(char *)(*local_2d8 + 0x18) == local_309;
          local_308 = 0x7620615118f1d8ef;
        }
        else if (uVar3 == 0x5484e25031922092) {
          *local_290 = (longlong)local_2f8;
          *local_120 = (longlong)local_290;
          local_1b0 = (longlong *)*local_278;
          local_300 = 0xc4bc2f4117d5b3ad;
          local_308 = 0x3943f10a7d5533be;
        }
      }
      else if ((longlong)uVar3 < 0x5c9bfdc225ff20e6) {
        if (uVar3 == 0x54a0f7dab4927c54) {
          *(char *)(local_80 + 0x18) = local_309;
          *(char *)(local_2d8 + 3) = local_30a;
          local_2b0 = (longlong *)local_2d8[2];
          local_128 = *local_2b0;
          local_2d8[2] = local_128;
          local_300 = 0x5e750a1dd965b950;
          if (*(char *)(local_128 + 0x19) == local_30a) {
            local_300 = 0x2f9abf599d82ee57;
          }
          local_308 = 0xdf27b6f28ada310b;
        }
        else if (uVar3 == 0x55f0f9c812af4573) {
          *(longlong **)(local_c0 + 8) = local_2f8;
          local_300 = 0x1a69a645bafc13ab;
          local_308 = 0xffd7128694d41341;
        }
        else if (uVar3 == 0x5889ee15eee5951f) {
          local_140 = local_1f0 + 2;
          local_300 = 0x7c718bcd80550e6;
          if (local_2f8 == (longlong *)local_1f0[2]) {
            local_300 = 0xb6b0f4fa18adff10;
          }
          local_308 = 0x594ee133aca44411;
        }
      }
      else if (uVar3 == 0x5c9bfdc225ff20e6) {
        local_d8 = (longlong *)*local_2f8;
        local_300 = 0xf28d6a8797497729;
        if (local_228 == local_d8) {
          local_300 = 0x1a640703c60fc168;
        }
        local_308 = 0x925a0f8000e0874;
      }
      else if (uVar3 == 0x5d6b94eaaa73098f) {
        local_60 = *local_2e0;
        local_300 = 0xd3ddf92942788b33;
        if (*(char *)(local_60 + 0x18) == local_309) {
          local_300 = 0x7628b4f306f03bb6;
        }
        local_2e9 = *(char *)(local_2e0[2] + 0x18) == local_309;
        local_308 = 0x1b8d291a33369cb4;
      }
      else if (uVar3 == 0x5e0aaff51e6d643e) {
        local_90 = local_2f8 + 1;
        local_258 = (longlong *)local_2f8[1];
        local_2a8[1] = (longlong)local_258;
        local_88 = (undefined8 *)(*param_1 + 8);
        local_300 = 0x253fa19ec30613c1;
        if (local_2f8 == *(longlong **)(*param_1 + 8)) {
          local_300 = 0x8834c8508f251a9e;
        }
        local_308 = 0x46b1ea6aa2ec8f5e;
      }
    }
    else if ((longlong)uVar3 < 0x6da59de935c6a702) {
      if ((longlong)uVar3 < 0x6484adaa73647dad) {
        if (uVar3 == 0x5e1bddbfe0e5855a) {
          local_2d0[1] = local_2e8[1];
          lVar1 = local_2d0[3];
          *(char *)(local_2d0 + 3) = (char)local_2e8[3];
          *(char *)(local_2e8 + 3) = (char)lVar1;
          local_300 = 0xa2bbf50db5f3c975;
          local_308 = 0x305db176d541ea9b;
          local_240 = local_280;
          local_238 = local_58;
        }
        else if (uVar3 == 0x5e89f98f74a114f7) {
          *local_1f0 = local_2b8;
          local_300 = 0x23ebe579492de6e9;
          local_308 = 0xd0076d1b4a02ebb5;
        }
        else if (uVar3 == 0x638e4bf461ea9c9f) {
          local_300 = 0x68479d4c04a46be5;
          if (local_2f8 == (longlong *)*local_258) {
            local_300 = 0xf212ccb014074de4;
          }
          local_308 = 0x29f610ffde4a9219;
        }
      }
      else if (uVar3 == 0x6484adaa73647dad) {
        local_300 = 0x7612465beb193e0d;
        if (local_2ea != '\0') {
          local_300 = 0x31e5534ebcb8ef76;
        }
        local_308 = 0x6545a494082a9322;
        local_230 = local_2d8;
      }
      else if (uVar3 == 0x662b5b1c1b2ce2ec) {
        local_300 = 0xf830e4824589e175;
        if (local_48 == *(longlong **)(*param_1 + 8)) {
          local_300 = 0x7037361d836785f4;
        }
        local_308 = 0xeeed01573481954f;
        local_1d0 = local_50;
        local_1c8 = local_48;
        local_288 = local_48;
      }
      else if (uVar3 == 0x6a5d95b28fa3e164) {
        local_300 = 0xd29327448eca1535;
        if (*(char *)(*local_1e8 + 0x19) == local_30a) {
          local_300 = 0x3c20ddabf37fa647;
        }
        local_308 = 0x567d48197cdc4723;
        local_1a0 = local_1e8;
        local_1e8 = (longlong *)*local_1e8;
      }
    }
    else if ((longlong)uVar3 < 0x710f98c1eef199f7) {
      if (uVar3 == 0x6da59de935c6a702) {
        local_300 = 0x2f630b251e73addd;
        if (local_2e9 != '\0') {
          local_300 = 0xeb8417842d1604a;
        }
        local_308 = 0x9bbd61ed85f64f9d;
        local_250 = local_2e0;
        local_198 = local_2e0;
      }
      else if (uVar3 == 0x6e7d6ab0dd61de3d) {
        local_108 = local_1f8 + 2;
        local_300 = 0xe7c5a4162ff7c26c;
        if (local_2e0 == (longlong *)local_1f8[2]) {
          local_300 = 0xf38418152c42577f;
        }
        local_308 = 0xfe96614c3c2edca8;
      }
      else if (uVar3 == 0x6ff1672cf7e9f44b) {
        local_2c8[2] = (longlong)local_2c0;
        local_300 = 0x3aebf2e468f0bcc0;
        local_308 = 0x83c9ab824eb771aa;
      }
    }
    else if (uVar3 == 0x710f98c1eef199f7) {
      *local_f0 = local_2e0;
      *local_b0 = local_2a0;
      local_250 = (longlong *)*local_278;
      local_300 = 0xef7bc82e33e7e50c;
      local_308 = 0x5ba5a2e6a862074c;
    }
    else if (uVar3 == 0x73c8b9fec575f484) {
      *local_178 = local_2c0;
      local_300 = 0x90df82ed5aea024;
      local_308 = 0xb02fa148f3e96d4e;
    }
    else if (uVar3 == 0x784cb615e7adfb84) {
      local_2c0[1] = (longlong)local_2c8;
      local_300 = 0x7d483e5cb7433fe3;
      local_308 = 0xbe15a504cc9e88f6;
    }
  }
  if ((longlong)uVar3 < -0x46dda699d9b83296) {
    if ((longlong)uVar3 < -0x643d57def82ed3b4) {
      if ((longlong)uVar3 < -0x75f3b090ba2e11d0) {
        if ((longlong)uVar3 < -0x7b1190a20de9adea) {
          if (uVar3 == 0x80b64317f8cfb23f) {
            *local_b8 = local_298;
            local_300 = 0x58dabe83de55cd0f;
            local_308 = 0x81eeef025692407a;
          }
          else if (uVar3 == 0x8152bcef53bf885b) {
            local_a0 = local_2d8 + 1;
            local_260 = (longlong *)local_2d8[1];
            local_2b0[1] = (longlong)local_260;
            local_98 = (undefined8 *)(*param_1 + 8);
            local_300 = 0x5c2d04ff1898a949;
            if (local_2d8 == *(longlong **)(*param_1 + 8)) {
              local_300 = 0xd20eeb9f22fa8a6d;
            }
            local_308 = 0xdf0a6fb5dcc35bd7;
          }
          else if (uVar3 == 0x83276b4ac45bf29e) {
            local_300 = 0x6c4268bc5dde1288;
            if (local_2d8 == (longlong *)*local_260) {
              local_300 = 0x43922b7c7d9133ee;
            }
            local_308 = 0xb9cb0f604569b577;
          }
        }
        else if (uVar3 == 0x84ee6f5df2165216) {
          *local_170 = local_1a0;
          local_1c0 = (undefined8 *)*param_1;
          local_300 = 0xdf77eeba54d9bca6;
          local_308 = 0x17720cec2774e147;
        }
        else if (uVar3 == 0x85927916f9b5bd13) {
          *local_a8 = local_2a0;
          local_300 = 0xc1977560a977d87a;
          local_308 = 0xb098eda14786418d;
        }
        else if (uVar3 == 0x89e732874d7220a9) {
          local_58 = local_1a8;
          local_d0 = (undefined8 *)(*param_1 + 8);
          local_300 = 0xf2058e227c9b4378;
          if (*(longlong **)(*param_1 + 8) == local_2e8) {
            local_300 = 0x474185c1dad38b51;
          }
          local_308 = 0x50ec9ca526439de4;
        }
      }
      else if ((longlong)uVar3 < -0x6b06b260a45243cc) {
        if (uVar3 == 0x8a0c4f6f45d1ee30) {
          *(longlong **)(local_e8 + 8) = local_2e0;
          local_300 = 0x5501c54517807cba;
          local_308 = 0xb97858884d5e4464;
        }
        else if (uVar3 == 0x8cef9b178535c2c7) {
          local_2d0 = local_190;
          local_190 = (longlong *)*local_190;
          local_300 = 0x96ee20c00d2c2608;
          if (*(char *)((longlong)local_190 + 0x19) == local_30a) {
            local_300 = 0xd1dbbec69f8a91c1;
          }
          local_308 = 0x5d3425d11abf5306;
        }
        else if (uVar3 == 0x92e6447b60b223ee) {
          local_50 = local_238;
          local_48 = local_240;
          local_300 = 0x397c78de89b15e9;
          if ((char)local_2e8[3] == local_309) {
            local_300 = 0x7a9f83f057b84157;
          }
          local_308 = 0x1cb4d8ec4c94a3bb;
        }
      }
      else if (uVar3 == 0x94f94d9f5badbc34) {
        local_270[2] = local_290;
        local_300 = 0xac71aa938bdb1524;
        local_308 = 0xf8f548c3ba4935b6;
      }
      else if (uVar3 == 0x95052095c7272fd7) {
        *(char *)(local_198 + 3) = local_30a;
        local_300 = 0x59b1d4c7326a03b5;
        local_308 = 0x90774fa0be2ef99b;
      }
      else if (uVar3 == 0x9773698393e0b8c7) {
        *local_158 = local_150 + -1;
        local_300 = 0x9bd0b71a3649525;
        local_308 = 0x265bcb7918e5efb2;
      }
      goto LAB_1800ac8c0;
    }
    if ((longlong)uVar3 < -0x4c649d0c1e2656fd) {
      if ((longlong)uVar3 < -0x5d16ed78a5272164) {
        if (uVar3 == 0x9bc2a82107d12c4c) {
          local_300 = 0x754ea227a57f5415;
          if (local_2f8 == (longlong *)*local_270) {
            local_300 = 0x4f33d7c4ec838f21;
          }
          local_308 = 0xe1b7efb8fed2e821;
        }
        else if (uVar3 == 0x9eda374ab7e610bb) {
          *(char *)(local_288 + 3) = local_309;
          local_300 = 0x7f474d0c77cec527;
          local_308 = 0x6064526dd3c17375;
        }
        else if (uVar3 == 0xa07eda3bff91798c) {
          local_b8 = local_210 + 2;
          local_300 = 0xc4bfefea779ab759;
          if (local_2f8 == (longlong *)local_210[2]) {
            local_300 = 0x4fb633591594b76f;
          }
          local_308 = 0xcf00704eed5b0550;
        }
      }
      else if (uVar3 == 0xa2e912875ad8de9c) {
        local_200 = (undefined8 *)local_2e8[1];
        local_300 = 0x75b54b7c6ad30738;
        if ((longlong *)*local_200 == local_2e8) {
          local_300 = 0x97382e9a8684253f;
        }
        local_308 = 0xa311f2ae4490522e;
      }
      else if (uVar3 == 0xab570367a859bd1c) {
        local_280[1] = (longlong)local_268;
        local_300 = 0x72709c730328cba4;
        local_308 = 0xca525f2dfad9daba;
      }
      else if (uVar3 == 0xae84387c12516700) {
        *local_270 = local_290;
        local_300 = 0x9b8a177a11cdfa85;
        local_308 = 0xcf0ef52a205fda17;
      }
      goto LAB_1800ac8c0;
    }
    if ((longlong)uVar3 < -0x4af861e02a339596) {
      if (uVar3 == 0xb39b62f3e1d9a903) {
        *(longlong **)(local_68 + 8) = local_2f8;
        local_300 = 0xfd3b6761567b1e03;
        local_308 = 0x235ad5b773a3d683;
      }
      else if (uVar3 == 0xb4077e3e07ad657a) {
        local_2c0 = local_248;
        local_2c8 = (longlong *)local_2e8[1];
        local_208 = (char *)((longlong)local_248 + 0x19);
        local_300 = 0xc962427b72a12098;
        if (*(char *)((longlong)local_248 + 0x19) == local_30a) {
          local_300 = 0x72736f36eed16c09;
        }
        local_308 = 0xa3fd923097c978d;
      }
      else if (uVar3 == 0xb4de6ac89b85e240) {
        *(char *)(local_250 + 3) = (char)local_2f8[3];
        *(char *)(local_2f8 + 3) = local_309;
        *(char *)(local_250[2] + 0x18) = local_309;
        local_2a8 = (longlong *)*local_278;
        local_100 = *local_2a8;
        *local_278 = local_100;
        local_300 = 0xc1bf8cd8ca4f08e6;
        if (*(char *)(local_100 + 0x19) == local_30a) {
          local_300 = 0x456ec6eaab0b5a88;
        }
        local_308 = 0x9fb5232dd4226cd8;
      }
      goto LAB_1800ac8c0;
    }
    if (uVar3 == 0xb5079e1fd5cc6a6a) {
      local_300 = 0xc50c3a83234773f7;
      if (*local_208 == local_30a) {
        local_300 = 0x2bbfc06c5ef2c085;
      }
      local_308 = 0x41e255ded15121e1;
      local_1a0 = local_2c8;
      local_1e8 = local_2c0;
      goto LAB_1800ac8c0;
    }
    if (uVar3 != 0xb56149c13db94376) {
      if (uVar3 == 0xb822c35ef9f1111e) {
        *local_268 = (longlong)local_280;
        lVar1 = *local_220;
        *local_180 = lVar1;
        *(longlong **)(lVar1 + 8) = local_2d0;
        local_300 = 0x376ca8b91acc58b1;
        local_308 = 0xbe8b9a3e57be7818;
        local_1a8 = local_268;
      }
      goto LAB_1800ac8c0;
    }
    *local_110 = local_1b8;
    local_300 = 0x74b36518f87e84fb;
    local_308 = 0xe655216398cca715;
  }
  else {
    if (-0x295b462dd1bcaaeb < (longlong)uVar3) {
      if ((longlong)uVar3 < -0x1a414b3cd1d7ff16) {
        if ((longlong)uVar3 < -0x241b23b035b22003) {
          if (uVar3 == 0xd6a4b9d22e435516) {
            local_200[2] = local_2d0;
            local_300 = 0x3ab0fc0bdb92c363;
            local_308 = 0x64ab21b43b774639;
          }
          else {
            if (uVar3 == 0xd934518188c78d75) {
              *local_c8 = local_2f8;
              *local_138 = local_298;
              local_300 = 0x236d97fe9025dcbd;
              local_308 = 0xbdb7a0b427c3cc06;
              goto LAB_1800ae511;
            }
            if (uVar3 == 0xdadbe5c77f293650) {
              *(longlong **)(local_100 + 8) = local_2f8;
              local_300 = 0x66c00ba7f7aa2926;
              local_308 = 0x38caa452e9c74d18;
            }
          }
        }
        else if (uVar3 == 0xdbe4dc4fca4ddffd) {
          *local_258 = (longlong)local_2a8;
          local_300 = 0xb2c9c287490ace8c;
          local_308 = 0x86485d5b29354cc8;
        }
        else if (uVar3 == 0xde61b2d625d8c880) {
          local_120 = local_2f8 + 1;
          local_270 = (undefined8 *)local_2f8[1];
          local_290[1] = (longlong)local_270;
          local_118 = (undefined8 *)(*param_1 + 8);
          local_300 = 0xbe5b17b65cd66549;
          if (local_2f8 == *(longlong **)(*param_1 + 8)) {
            local_300 = 0xd1c435b6b54574ad;
          }
          local_308 = 0x2599bf975b074905;
        }
        else if (uVar3 == 0xde79bc910a68fa30) {
          local_309 = '\x01';
          local_30a = '\0';
          local_220 = param_2 + 2;
          local_218 = (longlong *)param_2[2];
          local_300 = 0xfe92123b4bb32623;
          if (*(char *)((longlong)local_218 + 0x19) == '\0') {
            local_300 = 0x78dd27f4418da400;
          }
          local_308 = 0xf432bce3c4b866c7;
          local_2e8 = param_2;
          local_190 = local_218;
        }
      }
      else if ((longlong)uVar3 < -0x1001ea364bf644ff) {
        if (uVar3 == 0xe5beb4c32e2800ea) {
          local_138 = local_2f8 + 1;
          local_210 = (longlong *)local_2f8[1];
          *(longlong **)(local_298 + 8) = local_210;
          local_130 = (longlong *)(*param_1 + 8);
          local_300 = 0xc4822fe8e6aa3596;
          if (local_2f8 == *(longlong **)(*param_1 + 8)) {
            local_300 = 0x64e3454c7e72e3b7;
          }
          local_308 = 0x64fcf5d3193b4c1a;
        }
        else if (uVar3 == 0xec799dcd5ade38de) {
          local_b0 = local_2e0 + 1;
          local_1f8 = (longlong *)local_2e0[1];
          *(longlong **)(local_2a0 + 8) = local_1f8;
          local_a8 = (longlong *)(*param_1 + 8);
          local_300 = 0x459f6aefde0bee88;
          if (local_2e0 == *(longlong **)(*param_1 + 8)) {
            local_300 = 0xae707949fadf8da6;
          }
          local_308 = 0x2be2005f036a30b5;
        }
        else if (uVar3 == 0xed309705c4314074) {
          local_78 = local_2f8 + 1;
          local_1f0 = (longlong *)local_2f8[1];
          *(longlong **)(local_2b8 + 8) = local_1f0;
          local_70 = (longlong *)(*param_1 + 8);
          local_300 = 0xa190b8da902de437;
          if (local_2f8 == *(longlong **)(*param_1 + 8)) {
            local_300 = 0x2c05b659d028b167;
          }
          local_308 = 0xf91956cf7ec87128;
        }
      }
      else if ((longlong)uVar3 < -0xc13779dfcd0f2a4) {
        if (uVar3 == 0xeffe15c9b409bb01) {
          *local_140 = local_2b8;
          local_300 = 0x574f5081c53fc026;
          local_308 = 0xa4a3d8e3c610cd7a;
        }
        else if (uVar3 == 0xf0bd09ab1758df5c) {
          *(longlong **)(local_128 + 8) = local_2d8;
          local_300 = 0x3073e5404313a0b3;
          local_308 = 0xb12159af10ac28e8;
        }
      }
      else if (uVar3 == 0xf3ec8862032f0d5c) {
        *local_168 = local_2f8;
        *local_78 = local_2b8;
        local_1d8 = (longlong *)*local_2f8;
        local_300 = 0x3b061b8bf7f17d1d;
        local_308 = 0xc5a1bf7e0434eb19;
      }
      else if (uVar3 == 0xf45d8a21ee423da8) {
        *local_118 = local_290;
        local_300 = 0x6d9b11e2c76bbfb3;
        local_308 = 0x391ff3b2f6f99f21;
      }
      goto LAB_1800ac8c0;
    }
    if (-0x3639649873bb05d3 < (longlong)uVar3) {
      if ((longlong)uVar3 < -0x2e0e58a1ea09d775) {
        if (uVar3 == 0xc9c69b678c44fa2e) {
          local_1c8 = local_2f8;
          local_1d0 = (longlong *)local_2f8[1];
          local_300 = 0x5078f8204b29702c;
          if (local_2f8 == *(longlong **)(*param_1 + 8)) {
            local_300 = 0xd87f2abf8dc714ad;
          }
          local_308 = 0x46a51df53a210416;
          local_288 = local_2f8;
        }
        else if (uVar3 == 0xcbda05111793750e) {
          local_e0 = *local_2e8;
          local_300 = 0xbf19ee40c391b097;
          if (*(char *)(local_e0 + 0x19) == local_30a) {
            local_300 = 0x470140472614d29;
          }
          local_308 = 0xb1e907ec43cd5ed;
          local_248 = local_218;
        }
        else if (uVar3 == 0xce85223a2dc995c0) {
          *local_88 = local_2a8;
          local_300 = 0xa1d14e3bd91df21b;
          local_308 = 0x9550d1e7b922705f;
        }
      }
      else if (uVar3 == 0xd1f1a75e15f6288b) {
        local_268 = (longlong *)local_2d0[1];
        local_300 = 0x9a05d1545f753395;
        if (*(char *)((longlong)local_280 + 0x19) == local_30a) {
          local_300 = 0x8970116d0edd9f97;
        }
        local_308 = 0x2227120aa684228b;
      }
      else if (uVar3 == 0xd51ce096aee0c04f) {
        *local_70 = local_2b8;
        local_300 = 0x693fd47b02e2f6d6;
        local_308 = 0x9ad35c1901cdfb8a;
      }
      else if (uVar3 == 0xd58967dc18b7a7ff) {
        local_260[2] = (longlong)local_2b0;
        local_300 = 0x9f8761125e54d487;
        local_308 = 0x8da27a356574ed82;
      }
      goto LAB_1800ac8c0;
    }
    if ((longlong)uVar3 < -0x3ca264a7842248eb) {
      if (uVar3 == 0xb92259662647cd6a) {
        local_1c0 = (undefined8 *)*param_1;
        local_300 = 0x9035b2b7cef6919;
        if ((longlong *)*local_1c0 == local_2e8) {
          local_300 = 0x74012762da8e5e92;
        }
        local_308 = 0xc106b97d0f4234f8;
        local_170 = local_1c0;
      }
      else if (uVar3 == 0xc0c6c34468c56f6c) {
        local_300 = 0xa9318d9f874cc2ac;
        if (*local_208 == local_30a) {
          local_300 = 0x3abcce5006c40955;
        }
        local_308 = 0x1c50c45ebaf581da;
        plVar2 = local_2c0;
        local_1b8 = local_2c8;
      }
      else if (uVar3 == 0xc3262421a6808ea8) {
        local_300 = 0x1279b72e8d47368b;
        if (local_2ea != '\0') {
          local_300 = 0x942b7574a953b473;
        }
        local_308 = 0x12e55e16e749ba4;
        local_230 = local_2d8;
        local_198 = local_230;
      }
      goto LAB_1800ac8c0;
    }
    if (uVar3 == 0xc35d9b587bddb715) {
      local_178 = (undefined8 *)(*param_1 + 8);
      local_300 = 0xa03da0f060e185e9;
      if (*(longlong **)(*param_1 + 8) == local_2e8) {
        local_300 = 0xeeeb6717275c5e61;
      }
      local_308 = 0x9d23dee9e229aae5;
      goto LAB_1800ac8c0;
    }
    if (uVar3 != 0xc805e25673ad5de1) {
      if (uVar3 == 0xc850d033714e1787) {
        local_300 = 0x7b538d8287747cfd;
        if (local_2e9 != '\0') {
          local_300 = 0x3a2c434965bf5e44;
        }
        local_308 = 0xcf8de74a1cf19ebd;
        local_250 = local_2e0;
      }
      goto LAB_1800ac8c0;
    }
    local_110 = local_1c0 + 2;
    local_300 = 0x767463452a35eee9;
    if ((longlong *)local_1c0[2] == local_2e8) {
      local_300 = 0x2454e47a2242a26b;
    }
    local_308 = 0xe492273e4a87cd07;
  }
  local_238 = local_2c8;
  local_240 = local_2c0;
  goto LAB_1800ac8c0;
}



void FUN_1800aeef0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  char local_10b;
  char local_10a;
  byte local_109;
  ulonglong local_108;
  ulonglong local_100;
  int local_f4;
  undefined1 local_ed;
  uint local_ec;
  ulonglong local_e8;
  uint local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  uint local_58;
  undefined1 local_50 [8];
  undefined8 local_48;

  local_100 = 0xbb0548afa9fabba0;
  local_108 = 0xd52c92e06b5dfd91;
  local_98 = param_2;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_80;
          lVar4 = local_d0;
          uVar10 = local_100 ^ 0x5fcbf13e1bf3d65a;
          uVar7 = local_100 ^ local_108;
          local_108 = local_108 ^ 0x5fcbf13e1bf3d65a;
          local_100 = uVar10;
          if ((longlong)uVar7 < 0x2f2fb4ff422c7568) break;
          if ((longlong)uVar7 < 0x5facd4cce0dd71cf) {
            if (uVar7 == 0x2f2fb4ff422c7568) {
              uVar1 = *(ulonglong *)(local_a0 + 0x30);
              if (local_e8 < *(ulonglong *)(local_a0 + 0x38)) {
                pvVar8 = *(void **)(local_a0 + 0x20);
              }
              else {
                pvVar8 = (void *)(local_a0 + 0x20);
              }
              uVar7 = param_3[2];
              _Buf1 = param_3;
              if (local_e8 < (ulonglong)param_3[3]) {
                _Buf1 = (undefined8 *)*param_3;
              }
              uVar10 = uVar7;
              if (uVar1 < uVar7) {
                uVar10 = uVar1;
              }
              iVar6 = memcmp(_Buf1,pvVar8,uVar10);
              bVar3 = uVar1 <= uVar7;
              if (iVar6 != local_f4) {
                bVar3 = -1 < iVar6;
              }
              local_10a = local_10b;
              local_100 = 0x776c8618e816d956;
              if (!bVar3) {
                local_100 = 0xa1532c948cdf4bb;
              }
              local_108 = 0xe7a769604bb96e2c;
              local_c0 = local_a0;
            }
            else if (uVar7 == 0x3bcb7170f8268d49) {
              local_90 = param_3;
              FUN_1800af520(local_50,param_1,local_d8,&DAT_18020f2c8,&local_90,&local_ed);
              uVar5 = local_48;
              local_48 = 0;
              FUN_180085660(local_50);
              local_60 = local_68;
              local_58 = local_dc;
              local_c0 = FUN_1800857e0(param_1,&local_60,uVar5);
              local_100 = 0xf25406b0383dc26;
              local_108 = 0x9feeaf13a02c6b5c;
              local_10a = '\x01';
            }
          }
          else if (uVar7 == 0x5facd4cce0dd71cf) {
            local_a0 = local_b0;
            local_dc = local_ec;
            local_68 = local_b8;
            local_100 = 0xcae849eb48c8d210;
            if (*(char *)(local_b0 + 0x19) != local_10b) {
              local_100 = 0x875a6bd09903def;
            }
            local_108 = 0xe5c7fd140ae4a778;
          }
          else if (uVar7 == 0x6e29da4fc2a74631) {
            local_e8 = 0xf;
            local_10b = '\0';
            local_f4 = 0;
            local_d8 = *param_1;
            local_b8 = *(longlong *)(local_d8 + 8);
            local_100 = 0x2a5791130bc07894;
            if (*(char *)(local_b8 + 0x19) != '\0') {
              local_100 = 0x5f182e8f9e7f303a;
            }
            local_108 = 0xb4fa437ea241f5;
            local_ec = 0;
            local_b0 = local_d8;
            local_88 = local_b8;
          }
        }
        if ((longlong)uVar7 < 0x385cbe43da201fe) break;
        if (uVar7 == 0x385cbe43da201fe) {
          local_ec = local_109 ^ 1;
          local_100 = 0x7ba7fbc5f7f319dc;
          local_108 = 0x240b2f09172e6813;
          local_b0 = local_70;
          local_b8 = local_a8;
        }
        else if (uVar7 == 0x1604ba456a1ec097) {
          local_a8 = local_c8;
          uVar7 = *(ulonglong *)(local_c8 + 0x30);
          if (local_e8 < *(ulonglong *)(local_c8 + 0x38)) {
            pvVar8 = *(void **)(local_c8 + 0x20);
          }
          else {
            pvVar8 = (void *)(local_c8 + 0x20);
          }
          uVar10 = uVar7;
          if (local_80 < uVar7) {
            uVar10 = local_80;
          }
          iVar6 = memcmp(pvVar8,local_78,uVar10);
          local_109 = uVar7 < uVar1;
          if (iVar6 != local_f4) {
            local_109 = iVar6 < local_f4;
          }
          lVar9 = 0;
          local_d0 = local_a8;
          if ((bool)local_109 != false) {
            lVar9 = 0x10;
            local_d0 = lVar4;
          }
          local_c8 = *(longlong *)(local_a8 + lVar9);
          local_100 = 0x8a9423310bcc905c;
          if (*(char *)(local_c8 + 0x19) != local_10b) {
            local_100 = 0x9f1552905c705135;
          }
          local_108 = 0x9c90997461d250cb;
          local_70 = local_d0;
        }
        else if (uVar7 == 0x2ae36b5075623961) {
          local_80 = param_3[2];
          local_78 = param_3;
          if (local_e8 < (ulonglong)param_3[3]) {
            local_78 = (undefined8 *)*param_3;
          }
          local_100 = 0x5eb252d6c425e5d0;
          local_108 = 0x48b6e893ae3b2547;
          local_d0 = local_d8;
          local_c8 = local_88;
        }
      }
      if (uVar7 != 0xedb25ba903749a97) break;
      local_100 = 0xd0c04211b6be933a;
      if (param_1[1] != 0x333333333333333) {
        local_100 = 0x799d4e73937b0d07;
      }
      local_108 = 0x42563f036b5d804e;
    }
    if (uVar7 == 0x90cbef78a3afb77a) break;
    if (uVar7 == 0x92967d12dde31374) {
      FUN_180086cc0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *local_98 = local_c0;
  *(char *)(local_98 + 1) = local_10a;
  return;
}



void FUN_1800af520(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,longlong *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;

  *param_1 = param_2;
  param_1[1] = 0;
  puVar3 = (undefined8 *)FUN_1801d61c8(0x50);
  param_1[1] = puVar3;
  puVar6 = (undefined8 *)*param_5;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  uVar1 = puVar6[2];
  if (0xf < (ulonglong)puVar6[3]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  if (-1 < (longlong)uVar1) {
    if (uVar1 < 0x10) {
      puVar3[6] = uVar1;
      puVar3[7] = 0xf;
      uVar2 = puVar6[1];
      puVar3[4] = *puVar6;
      puVar3[5] = uVar2;
      puVar6 = puVar3;
    }
    else {
      uVar4 = uVar1 | 0xf;
      uVar7 = 0x16;
      if (0x16 < uVar4) {
        uVar7 = uVar4;
      }
      if (uVar4 < 0xfff) {
        uVar4 = FUN_1801d61c8(uVar7 + 1);
      }
      else {
        lVar5 = FUN_1801d61c8(uVar7 + 0x28);
        uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar5;
      }
      puVar3[4] = uVar4;
      puVar3[6] = uVar1;
      puVar3[7] = uVar7;
      FUN_1802079d0(uVar4,puVar6,uVar1 + 1);
      puVar6 = (undefined8 *)param_1[1];
    }
    *(undefined1 *)(puVar3 + 8) = 0;
    puVar3[9] = 0;
    *puVar6 = param_3;
    *(undefined8 *)(param_1[1] + 8) = param_3;
    *(undefined8 *)(param_1[1] + 0x10) = param_3;
    *(undefined1 *)(param_1[1] + 0x18) = 0;
    *(undefined1 *)(param_1[1] + 0x19) = 0;
    return;
  }
  FUN_180002ac0();
}



void Unwind_1800af720(undefined8 param_1,longlong param_2)

{
  longlong lVar1;

  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801f42e0(lVar1,*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



void Unwind_1800af760(undefined8 param_1,longlong param_2)

{
  longlong lVar1;

  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801f42e0(lVar1,*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



undefined8 * FUN_1800af7a0(undefined8 *param_1,char *param_2,undefined8 *param_3)

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



void Unwind_1800af910(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_1800af940(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

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

  local_b8 = 0x53a3d2109b4d5c57;
  local_c0 = 0xcd66898f8bf0bcf2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_b8 ^ 0xa4c5e48728c08d4e;
            uVar1 = local_b8 ^ local_c0;
            local_c0 = local_c0 ^ 0xa4c5e48728c08d4e;
            local_b8 = uVar3;
            if (0x5e99a8d90bc049e2 < (longlong)uVar1) break;
            if ((longlong)uVar1 < 0x274470172c3432a3) {
              if (uVar1 == 0x9ec55b9f10bde0a5) {
                local_a8 = 0xf;
                local_90 = 1;
                local_c2 = 0;
                local_a0 = strlen(param_2);
                local_b0 = param_1 + 2;
                local_88 = param_1[2];
                local_80 = param_1 + 3;
                local_58 = param_1[3];
                local_b8 = 0x8622282bddb4d2ab;
                if (local_58 - local_88 < local_a0) {
                  local_b8 = 0xc00af1966e669430;
                }
                local_c0 = 0xf0eb31b87feb7fce;
              }
              else if (uVar1 == 0x841421ff10142f5) {
                FUN_18006a970(param_1,local_90);
                local_b8 = 0x1f7d7a1b6375b78e;
                local_c0 = 0x41e4d2c268b5fe6d;
              }
            }
            else if (uVar1 == 0x274470172c3432a3) {
              local_98 = param_3[2];
              local_70 = param_3;
              if (local_a8 < (ulonglong)param_3[3]) {
                local_70 = (undefined8 *)*param_3;
              }
              local_68 = *local_b0;
              local_48 = *local_80;
              local_b8 = 0x4551110b0451a2bc;
              if (local_48 - local_68 < local_98) {
                local_b8 = 0x7e7588a7ab487a4c;
              }
              local_c0 = 0x355d83ee60896c61;
            }
            else if (uVar1 == 0x30e1c02e118debfe) {
              FUN_180066dd0(param_1);
              local_b8 = 0xb37a92b6f6b7ad2e;
              local_c0 = 0x943ee2a1da839f8d;
            }
            else if (uVar1 == 0x4b280b49cbc1162d) {
              FUN_180066dd0(param_1);
              local_b8 = 0xf8b6a8cba4051627;
              local_c0 = 0xa77d7fd07da63ca7;
            }
          }
          if ((longlong)uVar1 < 0x76c91993a25fad65) break;
          if (uVar1 == 0x76c91993a25fad65) {
            *local_b0 = local_88 + local_a0;
            puVar2 = param_1;
            if (local_a8 < local_58) {
              puVar2 = (undefined8 *)*param_1;
            }
            FUN_1802079d0(local_88 + (longlong)puVar2,param_2,local_a0);
            *(undefined1 *)((longlong)puVar2 + local_88 + local_a0) = local_c2;
            local_b8 = 0x5031e8432d53e78d;
            local_c0 = 0x777598540167d52e;
          }
          else if (uVar1 == 0x7b63b94d0204fea0) {
            *local_b0 = local_78 + local_90;
            puVar2 = param_1;
            if (local_a8 < local_50) {
              puVar2 = (undefined8 *)*param_1;
            }
            *(undefined1 *)((longlong)puVar2 + local_78) = local_c1;
            *(undefined1 *)((longlong)puVar2 + local_78 + local_90) = local_c2;
            local_b8 = 0x984335033fbf01c5;
            local_c0 = 0xc6da9dda347f4826;
          }
        }
        if (uVar1 != 0x5fcbd71bd9a32a80) break;
        local_c1 = *param_4;
        local_78 = *local_b0;
        local_50 = *local_80;
        local_b8 = 0xc15185343ea11ba8;
        if (local_78 < local_50) {
          local_b8 = 0xb2737e66cda4a7fd;
        }
        local_c0 = 0xc910c72bcfa0595d;
      }
      if (uVar1 != 0x700c92e564d8cedd) break;
      *local_b0 = local_68 + local_98;
      puVar2 = param_1;
      if (local_a8 < local_48) {
        puVar2 = (undefined8 *)*param_1;
      }
      FUN_1802079d0(local_68 + (longlong)puVar2,local_70,local_98);
      *(undefined1 *)((longlong)puVar2 + local_68 + local_98) = local_c2;
      local_b8 = 0xd7384dc5a087c8b5;
      local_c0 = 0x88f39ade7924e235;
    }
  } while (uVar1 != 0x5e99a8d90bc049e3);
  return;
}



undefined1 * FUN_1800afe70(longlong *param_1,undefined1 *param_2,undefined8 *param_3,char param_4)

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
  local_60 = 7;
  if (param_4 == '\0') {
    local_d0[0] = 5;
    local_c0 = CONCAT44(local_c0._4_4_,(int)((ulonglong)(param_1[2] - param_1[1]) >> 3));
    plVar4 = (longlong *)param_1[0x15];
    if (plVar4 == (longlong *)0x0) {
      FUN_1801d7504();
    }
    cVar12 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_c0,local_d0,&local_60);
    if (cVar12 != '\0') goto LAB_1800b0026;
LAB_1800b0151:
    *param_2 = local_41;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
LAB_1800b0026:
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
LAB_1800b01cc:
      *param_2 = local_42;
    }
    else {
      pcVar5 = *(char **)(param_1[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_1800b0151;
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
        goto LAB_1800b01cc;
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
      if ((uVar18 & uVar2) == uVar8) goto LAB_1800b0151;
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


