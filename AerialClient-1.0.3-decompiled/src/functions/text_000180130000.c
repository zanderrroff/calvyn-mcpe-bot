#include "../include/aerialclient_types.h"


void FUN_180130030(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_retaddr;
  float local_a4;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;

  local_98 = 0x9da288ad8e34460f;
  local_a0 = 0x1ed8dc4bb875b368;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x1b211ee981bd3966;
          if ((longlong)uVar1 < -0x1d38b7d67b2af938) break;
          if (uVar1 == 0xe2c7482984d506c8) {
            lVar2 = FUN_1801b2b70();
            local_98 = 0x76bd2da2524b6c12;
            if (lVar2 + 0x5ba3f2 == unaff_retaddr) {
              local_98 = 0x388910f40bde602a;
            }
            local_a0 = 0x81f3f96f912fb2bc;
            local_90 = unaff_retaddr;
          }
          else {
            local_98 = local_98 ^ 0x1b211ee981bd3966;
            if (uVar1 == 0xf74ed4cdc364deae) {
              lVar2 = FUN_1801b2b70();
              local_98 = 0x187c560f0b7d2571;
              if (lVar2 + 0x356c61 == local_90) {
                local_98 = 0x2c7fd079282a8b8e;
              }
              local_a0 = 0x950539e2b2db5918;
              local_a4 = param_2;
            }
          }
        }
        if (uVar1 != 0x837a54e63641f567) break;
        local_98 = 0x2b1933b55ec8b1e0;
        if ((DAT_1802a4a25 & 1) != 0) {
          local_98 = 0x44a7147163bbcb41;
        }
        local_a0 = 0xa6605c58e76ecd89;
        local_a4 = param_2;
      }
      if (uVar1 != 0xb97ae99b9af1d296) break;
      local_a4 = DAT_1802803d0 * param_2;
      local_98 = 0xafa64a59269013a9;
      local_a0 = 0x22df25b49f366fc0;
    }
    local_98 = local_98 ^ 0x1b211ee981bd3966;
  } while (uVar1 != 0x8d796fedb9a67c69);
  (*DAT_1802803c0)(param_1,local_a4,param_3,param_4);
  return;
}



void FUN_180130290(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  int local_54;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_54 = 1;
  local_60 = param_3;
  plVar5 = (longlong *)FUN_1801d61c8(0x50);
  plVar1 = local_60;
  *(int *)(plVar5 + 1) = local_54;
  *(int *)((longlong)plVar5 + 0xc) = local_54;
  *plVar5 = (longlong)&PTR_FUN_180219370;
  plVar7 = plVar5 + 2;
  plVar5[9] = 0;
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == local_60) {
      lVar6 = (**(code **)(*plVar4 + 8))(plVar4,plVar7);
      plVar5[9] = lVar6;
      plVar4 = (longlong *)plVar1[7];
      if (plVar4 == (longlong *)0x0) goto LAB_180130356;
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar1);
    }
    else {
      plVar5[9] = (longlong)plVar4;
    }
    plVar1[7] = 0;
  }
LAB_180130356:
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  local_80 = FUN_180130a10;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = FUN_180130a10;
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = plVar7;
  local_b0 = plVar5;
  local_a0 = param_2;
  local_98 = param_4;
  local_78 = plVar7;
  local_70 = plVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3df4)
     && (FUN_1801d62d8(&DAT_1802a3df4), DAT_1802a3df4 == -1)) {
    DAT_1802a3df0 = DAT_1802a3dec;
    DAT_1802a3dec = local_54 + DAT_1802a3dec;
    _Init_thread_footer(&DAT_1802a3df4);
  }
  FUN_1800baf30(param_1,DAT_1802a3df0,&local_c8);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == local_54) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_54) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != local_60);
  }
  return;
}



void Unwind_1801304e0(undefined8 param_1,longlong param_2)

{
  FUN_1800bb120(param_2 + 0x48);
  FUN_180130580(param_2 + 0x70);
  return;
}



void Unwind_180130530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = (longlong *)(*(longlong **)(param_2 + 0x88))[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x88));
  }
  return;
}



void FUN_180130580(longlong param_1)

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

  local_58 = 0x76f05ac2bd489cf6;
  local_60 = 0xd860f976aa22d6a6;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0x44f44c7627d7a020;
          if ((longlong)uVar5 < -0x516f5c4be895b5b0) break;
          if (uVar5 == 0x3b63ef5a63c645b4) {
            LOCK();
            plVar2 = local_48 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            local_58 = 0x6040cbd92ba6ac5a;
            if ((int)lVar4 == local_4c) {
              local_58 = 0x4a2e9de630f0a08f;
            }
            local_60 = 0xc7dc6153bd24219e;
          }
          else {
            local_58 = local_58 ^ 0x44f44c7627d7a020;
            if (uVar5 == 0xae90a3b4176a4a50) {
              local_4c = 1;
              local_48 = *(longlong **)(param_1 + 8);
              local_58 = 0x4983c742335aba4;
              if (local_48 == (longlong *)0x0) {
                local_58 = 0x986779a4d67163d4;
              }
              local_60 = 0x3ffbd32e40f3ee10;
            }
          }
        }
        if (uVar5 != 0x8df2fcb58dd48111) break;
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = 0x1c23fbad8c4f98f9;
        if (iVar3 == local_4c) {
          local_58 = 0x11e3b593e7054d9b;
        }
        local_60 = 0xbbbf51271acd153d;
      }
      if (uVar5 != 0xaa5ce4b4fdc858a6) break;
      (**(code **)(*local_48 + 8))();
      local_58 = 0xb127cebfbbc477cf;
      local_60 = 0x16bb64352d46fa0b;
    }
    local_58 = local_58 ^ 0x44f44c7627d7a020;
  } while (uVar5 != 0xa79caa8a96828dc4);
  return;
}



void FUN_180130760(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_58 = 0x9479bf45b294cf67;
  local_60 = 0x7e45ccb43196ae3;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x5cfc5b30e98b52eb;
        if (uVar1 != 0x939de38ef18da584) break;
        local_50 = (undefined8 *)(param_1 + 0x48);
        local_48 = *(longlong **)(param_1 + 0x48);
        local_58 = 0x4a1646dc458eacd0;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0xe6cd16270c530a9c;
        }
        local_60 = 0x9e08ec2229e8902a;
      }
      if (uVar1 != 0xd41eaafe6c663cfa) break;
      (**(code **)(*local_48 + 0x20))
                (local_48,CONCAT71((int7)((local_58 ^ 0x5cfc5b30e98b52eb) >> 8),local_48 != (longlong *)(param_1 + 0x10)
                                  ));
      *local_50 = 0;
      local_58 = 0x5dd150b166ba2f9c;
      local_60 = 0x2514aab44301b52a;
    }
    local_58 = local_58 ^ 0x5cfc5b30e98b52eb;
  } while (uVar1 != 0x78c5fa0525bb9ab6);
  return;
}



void FUN_1801308a0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



undefined8 FUN_1801308c0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xc154b23efd53fc74;
  local_50 = 0xf214f7e25d91a45c;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x799b8460e6801a47;
        if (uVar1 != 0x334045dca0c25828) break;
        local_48 = 0xcd8fd4f7f6413466;
        if ((param_2 & 1) == 0) {
          local_48 = 0x65905b1bfe206771;
        }
        local_50 = 0x9675269ae0329a21;
      }
      if (uVar1 != 0x5bfaf26d1673ae47) break;
      thunk_FUN_1801f42e0(param_1,0x50);
      local_48 = 0x42791559a13918f2;
      local_50 = 0xb19c68d8bf2be5a2;
    }
    local_48 = local_48 ^ 0x799b8460e6801a47;
  } while (uVar1 != 0xf3e57d811e12fd50);
  return param_1;
}



void FUN_180130a10(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;

  lVar4 = *param_1;
  if (param_1[1] == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
  }
  if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
          return;
        }
      }
    }
    return;
  }
  FUN_1801d7504();
}



void Unwind_180130ac0(undefined8 param_1,longlong param_2)

{
  FUN_180130580(param_2 + 0x20);
  return;
}



void FUN_180130b10(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x7ff245b1f015bb69;
  local_58 = 0xe1da884d84a48d00;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xfe3e0fdbbf8920ae;
        if (uVar1 != 0x9e28cdfc74b13669) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0x683cc5d489e97b9d;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0x6067afd9c460c4d5;
        }
        local_58 = 0xcd87e497bf5b6f;
      }
      if (uVar1 != 0x60aa283d53df9fba) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0x347e26c88f8fc7cf;
      local_58 = 0x5c8f64f891d9e73d;
    }
    local_50 = local_50 ^ 0xfe3e0fdbbf8920ae;
  } while (uVar1 != 0x68f142301e5620f2);
  return;
}



void FUN_180130c40(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x791a6926f2c4cad2;
  local_50 = 0x7f4cd51f4b573cb0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xe8e2d06a107ace92;
        if (uVar1 != 0xc8d8f2fcab602de6) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0xd0ae3134140eea48;
        local_50 = 0xd8d3f35bf99ec616;
      }
      if (uVar1 != 0x656bc39b993f662) break;
      local_48 = 0xb7ee95cec7c5d8e9;
      if (param_2 != '\0') {
        local_48 = 0x774ba55d8135d951;
      }
      local_50 = 0xbf9357a12a55f4b7;
    }
    local_48 = local_48 ^ 0xe8e2d06a107ace92;
  } while (uVar1 != 0x87dc26fed902c5e);
  return;
}



undefined8 FUN_180130d60(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x103b8e412d7542a0;
  local_50 = 0xe63bb3cab7a53d20;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xee263e4eaf93aa62;
        if (uVar1 != 0xaede93c8f973704f) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0x50ffcb0d55fcbeea;
        local_50 = 0xef149abb7f3c0e0a;
      }
      if (uVar1 != 0xf6003d8b9ad07f80) break;
      FUN_18012f590(param_1);
      local_48 = 0xa2dbb9145fee2453;
      if ((param_2 & 1) == 0) {
        local_48 = 0xb3ee7b6a8c5de4fc;
      }
      local_50 = 0xc052adca69d541c;
    }
    local_48 = local_48 ^ 0xee263e4eaf93aa62;
  } while (uVar1 != 0xbfeb51b62ac0b0e0);
  return param_1;
}



undefined8 FUN_180130eb0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x76f8ca3540970a39;
  local_50 = 0x31f2fd9c119a4b1d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x5556485d1e6fda4f;
        if (uVar1 != 0xb82a4f3694b2d84a) break;
        thunk_FUN_1801f42e0(param_1,0x78);
        local_48 = 0x8261cba9ed8f46bb;
        local_50 = 0xec4fe39ee6f4fa81;
      }
      if (uVar1 != 0x470a37a9510d4124) break;
      FUN_180106c90(param_1);
      local_48 = 0x2c97e66c97320c55;
      if ((param_2 & 1) == 0) {
        local_48 = 0xfa93816d08fb6825;
      }
      local_50 = 0x94bda95a0380d41f;
    }
    local_48 = local_48 ^ 0x5556485d1e6fda4f;
  } while (uVar1 != 0x6e2e28370b7bbc3a);
  return param_1;
}



void FUN_180131000(void)

{
  atexit((_func_5014 *)&LAB_18012f6f0);
  FUN_18013105c(&DAT_1802a4a26,&DAT_18028049d,0x1b,0xc,&DAT_1802a4a34);
  FUN_1800f0070(&DAT_1802a4a24,&DAT_1802a4a26,FUN_18012f700);
  return;
}



void FUN_18013105c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xe57963d80e5d39bb;
  local_68 = 0xbcc63d5c27eab4fe;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xb3dd3569cc7be38e;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xb3dd3569cc7be38e;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x33c353bee88baf86) break;
          if (uVar1 == 0x33c353bee88baf86) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xe5651a786d1145d9;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0xc7da4c592d48d03c;
            }
            local_68 = 0x79a8f473e23df4fb;
          }
          else if (uVar1 == 0x7d5ad55ee1cca28d) {
            *param_5 = 1;
            local_60 = 0x779b507c44bef5db;
            local_68 = 0xf31d2e26646997d1;
          }
          else if (uVar1 == 0x59bf5e8429b78d45) {
            local_60 = 0xc9d7caabd70e50a0;
            if (*param_5 == 1) {
              local_60 = 0x7e92e74f1f529d2c;
            }
            local_68 = 0xfa1499153f85ff26;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0x633211f470d34ede) break;
        if (uVar1 == 0x9ccdee0b8f2cb122) {
          local_6b = -(local_6c - local_69 ^ local_6d);
          local_60 = 0xfbd1cabd15b44542;
          local_68 = 0x75d25df35c889db6;
        }
        else if (uVar1 == 0xbe72b82acf7524c7) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x27c83c8f7f507494;
          local_68 = 0xa9cbabc1366cac60;
        }
      }
      if (uVar1 != 0x8e03974e493cd8f4) break;
      local_6a = local_6b ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6a;
      local_54 = local_4c + 1;
      local_60 = 0xe85fd60367a27cea;
      if (local_54 == param_4) {
        local_60 = 0xa6c650e36ee571e1;
      }
      local_68 = 0xdb9c85bd8f29d36c;
    }
  } while (uVar1 != 0x84867e5a20d7620a);
  return;
}



undefined8 * FUN_180131310(undefined8 *param_1)

{
  undefined1 local_110 [96];
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined6 local_90;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_30 = 0;
  local_38 = 0xf;
  local_50 = (undefined4 *)FUN_1801d61c8(7);
  local_48 = (longlong)local_50 + 7;
  *local_50 = 0x909001b0;
  *(undefined1 *)(local_50 + 1) = 0x40;
  *(undefined1 *)((longlong)local_50 + 5) = 0x32;
  *(undefined1 *)((longlong)local_50 + 6) = 0xed;
  local_a8 = local_30;
  local_21 = 1;
  local_40 = local_48;
  local_b0 = (undefined4 *)FUN_1801d61c8(0x20);
  local_a0 = 0x13;
  local_98 = 0x1f;
  *local_b0 = 0x42204630;
  local_b0[1] = 0x31342036;
  local_b0[2] = 0x34203f20;
  local_b0[3] = 0x32332030;
  local_b0[4] = 0x444520;
  local_21 = 0;
  FUN_1801b5d80(local_110,&local_b0,&local_50);
  local_88 = (undefined6)local_30;
  uStack_82 = (undefined2)((ulonglong)local_30 >> 0x30);
  local_80 = 0xe;
  local_78 = local_38;
  FUN_1801319ee(&DAT_1802a4b18,&DAT_180281597,0x1a,0xf,&DAT_1802a4b28);
  local_88 = uRam00000001802a4b20;
  local_90 = (undefined6)DAT_1802a4b18;
  uStack_8a = DAT_1802a4b18._6_2_;
  local_68 = local_30;
  local_60 = 10;
  local_58 = local_38;
  FUN_1801319ee(&DAT_1802a4b2c,&DAT_1802815de,0x1d,0xb,&DAT_1802a4b38);
  local_68 = CONCAT62(local_68._2_6_,DAT_1802a4b34);
  local_70 = DAT_1802a4b2c;
  local_21 = 0;
  FUN_18016c8e0(param_1,&local_70,&local_90,2,local_110);
  *param_1 = &PTR_FUN_180219580;
  return param_1;
}



void Unwind_180131560(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x117) == '\x01') {
    FUN_180131590(param_2 + 0xe8);
  }
  return;
}



void FUN_180131590(longlong *param_1)

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

  local_90 = 0x43ed197387357433;
  local_98 = 0x785873d355dfb324;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x404b719256780e82;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x404b719256780e82;
          local_90 = uVar2;
          if ((longlong)uVar1 < -0x8090025df0c3e0e) break;
          if ((longlong)uVar1 < 0x3bb56aa0d2eac717) {
            if (uVar1 == 0xf7f6ffda20f3c1f2) {
              local_68 = local_88;
              local_80 = param_1[2] - local_88;
              local_90 = 0x32a5074be1ddd7d2;
              if (0xfff < local_80) {
                local_90 = 0x235a426481f32f91;
              }
              local_98 = 0xaca2a5d22aad2095;
              local_78 = local_88;
              local_60 = local_80;
            }
            else if (uVar1 == 0x1a6d88ee0725d863) {
              local_80 = local_60 + 0x27;
              local_90 = 0xc56e34047c97eeab;
              local_98 = 0x5b69969db7e719ec;
              local_78 = local_70;
            }
          }
          else if (uVar1 == 0x3bb56aa0d2eac717) {
            local_88 = *param_1;
            local_90 = 0x30659e273d01969c;
            if (local_88 == 0) {
              local_90 = 0x72bfa5e6e2c7c7cc;
            }
            local_98 = 0xc79361fd1df2576e;
          }
          else if (uVar1 == 0x6b90c94beb112f2f) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        if (uVar1 != 0x8ff8e7b6ab5e0f04) break;
        local_70 = *(longlong *)(local_88 + -8);
        local_90 = 0xf9692d85c50d51d3;
        if ((local_68 - local_70) - 8U < 0x20) {
          local_90 = 0x88946c202939a69f;
        }
        local_98 = 0x92f9e4ce2e1c7efc;
      }
      if (uVar1 != 0x9e07a299cb70f747) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_90 = 0x6dc97fc22a182d4;
      local_98 = 0xb3f053e7dd941276;
    }
  } while (uVar1 != 0xb52cc41bff3590a2);
  return;
}



undefined8 * FUN_180131890(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xd396f56fc3129586;
  local_50 = 0x469e77d19757fb2f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb0acdf48991e75d7;
        if (uVar1 != 0x950882be54456ea9) break;
        *param_1 = &PTR_FUN_180217de0;
        FUN_18011a170(param_1 + 0xe);
        FUN_180106c90(param_1);
        local_48 = 0x2b67157e749a229b;
        if ((param_2 & 1) == 0) {
          local_48 = 0xc5898f08abb8b525;
        }
        local_50 = 0xd5b31442507e2992;
      }
      if (uVar1 != 0xfed4013c24e40b09) break;
      thunk_FUN_1801f42e0(param_1,0xd0);
      local_48 = 0xdd7f18f6908e9efe;
      local_50 = 0xcd4583bc6b480249;
    }
    local_48 = local_48 ^ 0xb0acdf48991e75d7;
  } while (uVar1 != 0x103a9b4afbc69cb7);
  return param_1;
}



void FUN_1801319ee(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x77dc34419ff657f4;
  local_68 = 0x2312a8310405fb24;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xbb7760cb8b88d5b5;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xbb7760cb8b88d5b5;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x4c3a27cfa3bf3dfa) break;
          if (uVar1 == 0x4c3a27cfa3bf3dfa) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x4fb542e5f5767626;
            local_68 = 0xfdc5d1d9d4648792;
          }
          else if (uVar1 == 0x4d45b89ced1f7ff8) {
            *param_5 = 1;
            local_60 = 0x37d77afe116c615b;
            local_68 = 0xbe7518d62d93b7e;
          }
          else if (uVar1 == 0x54ce9c709bf3acd0) {
            local_60 = 0xb92ced6013695bf4;
            if (*param_5 == 1) {
              local_60 = 0x7bea849a16366524;
            }
            local_68 = 0x47daafe965833f01;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if (0x3c302b7373b55a24 < (longlong)uVar1) break;
        if (uVar1 == 0xb270933c2112f1b4) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0xa5b571f3c847a;
          if (local_54 == param_4) {
            local_60 = 0xb3b9a14284c99f77;
          }
          local_68 = 0xfefc19de69d6e08f;
        }
        else if (uVar1 == 0xfef6428976ea64f5) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x3cd779d21a0eadd5;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0x3b36ed970d4e7356;
          }
          local_68 = 0x70ed5e1db9b1902f;
        }
      }
      if (uVar1 != 0x4bdbb38ab4ffe379) break;
      local_6a = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0x4c69553a8324b7ed;
      local_68 = 0xfe19c606a2364659;
    }
  } while (uVar1 != 0x3c302b7373b55a25);
  return;
}



undefined8 * FUN_180131cb0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_268;
  undefined8 *local_260;
  code *local_258;
  undefined ***local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined7 local_1d8;
  undefined4 uStack_1d1;
  undefined5 uStack_1cd;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined6 local_198;
  undefined2 uStack_192;
  undefined6 local_190;
  undefined2 uStack_18a;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined7 local_158;
  undefined1 local_151;
  undefined7 uStack_150;
  undefined1 local_149;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined3 uStack_94;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_4c = 0x3f800000;
  local_60 = 0x1f;
  local_58 = 0x20;
  local_78 = 0x30;
  local_21 = 0;
  local_70 = 0x2f;
  local_3c = 0;
  local_68 = 0x23;
  local_38 = 0xf;
  local_48 = 0;
  local_1f0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x40);
  local_1e8 = 0x35;
  local_1e0 = 0x3f;
  local_1f8 = puVar3;
  FUN_180133e20(&DAT_1802a4b3c,&DAT_180281711,0x13,0x36,&DAT_1802a4b74);
  *(ulonglong *)((longlong)puVar3 + 0x2d) = CONCAT53(DAT_1802a4b69._3_5_,(undefined3)DAT_1802a4b69);
  uVar4 = CONCAT35((undefined3)DAT_1802a4b69,uRam00000001802a4b64);
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a4b5c;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a4b54;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a4b4c;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a4b48;
  uVar1 = uRam00000001802a4b44;
  uVar5 = uRam00000001802a4b40;
  *puVar3 = _DAT_1802a4b3c;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x35) = local_21;
  uStack_1d1._1_3_ = (undefined3)local_48;
  uStack_1cd = (undefined5)((ulonglong)local_48 >> 0x18);
  local_1c8 = 0xb;
  local_1c0 = local_38;
  uVar5 = 1;
  FUN_180133e20(&DAT_1802a4b78,&DAT_180281776,0x1a,0xc,&DAT_1802a4b84);
  local_1d8 = (undefined7)DAT_1802a4b78;
  uStack_1d1 = ram0x0001802a4b7f;
  FUN_1801063a0(param_1,&local_1d8,&local_1f8,local_3c,CONCAT44(uVar5,local_3c));
  *param_1 = &PTR_FUN_180219690;
  local_138 = (undefined4 *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_30 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_78);
  local_128 = local_68;
  uStack_120 = local_70;
  local_138 = puVar3;
  FUN_180133e20(&DAT_1802a4b88,&DAT_1802817b1,0x10,0x24,&DAT_1802a4bac);
  *(undefined4 *)((longlong)puVar3 + 0x1f) = DAT_1802a4ba7;
  uVar4 = CONCAT17((undefined1)DAT_1802a4ba7,uRam00000001802a4ba0);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a4b98;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a4b94;
  uVar1 = uRam00000001802a4b90;
  uVar5 = uRam00000001802a4b8c;
  *puVar3 = _DAT_1802a4b88;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x23) = local_21;
  local_1b0 = local_48;
  local_1a8 = 0xc;
  local_1a0 = local_38;
  uVar5 = 1;
  FUN_180133e20(&DAT_1802a4bb0,&DAT_1802817f7,0x1e,0xd,&DAT_1802a4bc0);
  local_1b0 = CONCAT44(local_1b0._4_4_,DAT_1802a4bb8);
  local_1b8 = DAT_1802a4bb0;
  uVar4 = FUN_180107ed0(local_30,&local_1b8,&local_138,2,CONCAT44(uVar5,1),0x10);
  local_30[0xe] = uVar4;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (undefined4 *)0x0;
  uStack_110 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_78);
  local_108 = local_68;
  uStack_100 = local_70;
  local_118 = puVar3;
  FUN_180133e20(&DAT_1802a4bc4,&DAT_18028183e,0x1a,0x24,&DAT_1802a4be8);
  *(undefined4 *)((longlong)puVar3 + 0x1f) = DAT_1802a4be3;
  uVar4 = CONCAT17((undefined1)DAT_1802a4be3,uRam00000001802a4bdc);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a4bd4;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a4bd0;
  uVar1 = uRam00000001802a4bcc;
  uVar5 = uRam00000001802a4bc8;
  *puVar3 = _DAT_1802a4bc4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x23) = local_21;
  local_190 = (undefined6)local_48;
  uStack_18a = (undefined2)((ulonglong)local_48 >> 0x30);
  local_188 = 0xe;
  local_180 = local_38;
  uVar5 = 1;
  FUN_180133e20(&DAT_1802a4bec,&DAT_180281890,0x1a,0xf,&DAT_1802a4bfc);
  local_190 = uRam00000001802a4bf4;
  local_198 = (undefined6)DAT_1802a4bec;
  uStack_192 = DAT_1802a4bec._6_2_;
  uVar4 = FUN_180108270(local_30,&local_198,&local_118,0x40800000,CONCAT44(uVar5,local_4c),0x42000000,local_4c);
  local_30[0xf] = uVar4;
  local_228 = 0x3f8000003f800000;
  uStack_220 = 0x3f80000000000000;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_58);
  local_e8 = 0x14;
  uStack_e0 = local_60;
  local_f8 = puVar3;
  FUN_180133e20(&DAT_1802a4c00,&DAT_1802818ce,0x18,0x15,&DAT_1802a4c18);
  puVar3[4] = DAT_1802a4c10;
  uVar2 = uRam00000001802a4c0c;
  uVar1 = uRam00000001802a4c08;
  uVar5 = uRam00000001802a4c04;
  *puVar3 = _DAT_1802a4c00;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 5) = local_21;
  local_170 = local_48;
  local_168 = 10;
  local_160 = local_38;
  FUN_180133e20(&DAT_1802a4c1c,&DAT_180281913,0x14,0xb,&DAT_1802a4c28);
  local_170 = CONCAT62(local_170._2_6_,DAT_1802a4c24);
  local_178 = DAT_1802a4c1c;
  uVar4 = FUN_1801089f0(local_30,&local_178,&local_f8,&local_228);
  local_30[0x10] = uVar4;
  local_218 = 0x3f800000;
  uStack_210 = 0x3f80000000000000;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_58);
  local_c8 = 0x1d;
  uStack_c0 = local_60;
  local_d8 = puVar3;
  FUN_180133e20(&DAT_1802a4c2c,&DAT_18028194a,0x1d,0x1e,&DAT_1802a4c4c);
  uVar4 = uRam00000001802a4c41;
  *(ulonglong *)((longlong)puVar3 + 0xd) = CONCAT53(uRam00000001802a4c3c,_DAT_1802a4c39);
  *(undefined8 *)((longlong)puVar3 + 0x15) = uVar4;
  uVar2 = uRam00000001802a4c38;
  uVar1 = uRam00000001802a4c34;
  uVar5 = uRam00000001802a4c30;
  *puVar3 = _DAT_1802a4c2c;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1d) = local_21;
  local_148 = local_38;
  local_140 = local_38;
  FUN_180133e20(&DAT_1802a4c50,&DAT_18028199f,0x1b,0x10,&DAT_1802a4c60);
  uStack_150 = uRam00000001802a4c58;
  local_158 = (undefined7)DAT_1802a4c50;
  local_151 = DAT_1802a4c50._7_1_;
  local_149 = local_21;
  uVar4 = FUN_1801089f0(local_30,&local_158,&local_d8,&local_218);
  local_30[0x11] = uVar4;
  local_208 = 0;
  uStack_200 = 0x3f8000003f800000;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_58);
  local_a8 = 0x17;
  uStack_a0 = local_60;
  local_b8 = puVar3;
  FUN_180133e20(&DAT_1802a4c64,&DAT_1802819db,0x1b,0x18,&DAT_1802a4c7c);
  *(ulonglong *)((longlong)puVar3 + 0xf) = CONCAT71(DAT_1802a4c73._1_7_,(undefined1)DAT_1802a4c73);
  uVar2 = uRam00000001802a4c70;
  uVar1 = uRam00000001802a4c6c;
  uVar5 = uRam00000001802a4c68;
  *puVar3 = _DAT_1802a4c64;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x17) = local_21;
  local_90 = local_48;
  local_88 = 7;
  local_80 = local_38;
  FUN_180133e20(&DAT_1802a4c80,&DAT_180281a28,0x13,8,&DAT_1802a4c88);
  uStack_94 = uRam00000001802a4c84;
  local_98 = DAT_1802a4c80;
  local_91 = local_21;
  uVar4 = FUN_1801089f0(local_30,&local_98,&local_b8,&local_208);
  local_30[0x12] = uVar4;
  uVar4 = FUN_1800ba260();
  local_268 = &PTR_LAB_1802196d0;
  local_260 = local_30;
  local_258 = FUN_180132620;
  local_230 = &local_268;
  FUN_180121610(uVar4,local_30,local_230,local_3c);
  return local_30;
}



void Unwind_1801325f0(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x278));
  return;
}



void FUN_180132620(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  ulonglong local_328;
  ulonglong local_320;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  uint local_308;
  float local_304;
  float local_300;
  uint local_2fc;
  float local_2f8;
  float local_2f4;
  uint local_2f0;
  float local_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  float local_2d4;
  undefined4 local_2d0 [2];
  undefined8 local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  longlong local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  undefined8 local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178 [5];
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
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
  ulonglong local_b0;

  local_b0 = DAT_1802a0400 ^ (ulonglong)auStack_368;
  local_320 = 0xf1e59106f5b6e103;
  local_328 = 0x2feb5ba50a7abfc6;
  local_2a8 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            fVar10 = local_2ec;
            uVar1 = local_2f0;
            uVar6 = local_320 ^ 0x661d77c6eeb61f9d;
            uVar4 = local_320 ^ local_328;
            local_328 = local_328 ^ 0x661d77c6eeb61f9d;
            fVar9 = (float)((ulonglong)local_2c8 >> 0x20);
            local_320 = uVar6;
            if ((longlong)uVar4 < -0x21f1355c0033a13b) break;
            if ((longlong)uVar4 < 0x9facfae9d7c40cc) {
              if ((longlong)uVar4 < -0x35eb22784101486) {
                if (uVar4 == 0xde0ecaa3ffcc5ec5) {
                  local_304 = 16.0;
                  local_338 = 0.0;
                  local_334 = 256.0;
                  local_314 = -16.0;
                  local_33c = 0x3fc00000;
                  local_300 = 0.0625;
                  local_318 = 32.0;
                  local_2e0 = 1;
                  local_308 = 0;
                  local_2e8 = 0;
                  local_2a0 = (longlong *)FUN_180179ff0();
                  local_298 = *local_2a0;
                  local_320 = 0xcc10949ba54d4001;
                  if (local_298 == 0) {
                    local_320 = 0x8feb432851b41b16;
                  }
                  local_328 = 0x115f3db2b0347112;
                }
                else if (uVar4 == 0xf72de8e0e6f2abf2) {
                  local_290 = (float *)((longlong)&local_138 + 4);
                  local_288 = (float *)&uStack_130;
                  local_280 = &local_140;
                  local_278 = &local_13c;
                  local_188 = local_2b0;
                  uStack_180 = 0;
                  local_310 = *(float *)((longlong)&local_188 + (ulonglong)((uint)local_2e8 & 3) * 4);
                  local_30c = *(float *)((longlong)&local_188 + (ulonglong)((uint)local_2e0 & 3) * 4);
                  local_2ec = local_338;
                  local_320 = 0x75be84b7092c4949;
                  local_328 = 0x7c444b1994500985;
                  local_270 = local_290;
                  local_268 = local_288;
                  local_260 = local_280;
                  local_258 = local_278;
                  local_250 = local_290;
                  local_248 = local_288;
                  local_240 = local_280;
                  local_238 = local_278;
                  local_230 = local_290;
                  local_228 = local_288;
                  local_220 = local_280;
                  local_218 = local_278;
                }
              }
              else if (uVar4 == 0xfca14dd87befeb7a) {
                local_210 = &local_140;
                local_208 = &local_13c;
                local_200 = &local_14c;
                local_1f8 = &local_148;
                local_178[4] = (float)local_2c8 + 16.0;
                fStack_164 = fVar9 + 16.0;
                local_1b0 = CONCAT44(fStack_164,local_178[4]);
                uStack_160 = 0;
                uStack_15c = 0;
                local_2f8 = local_178[(ulonglong)((uint)local_2e8 & 3) + 4];
                local_2f4 = local_178[(ulonglong)((uint)local_2e0 & 3) + 4];
                local_2f0 = local_308;
                local_320 = 0xbf7ad34e467dd35a;
                local_328 = 0xb50032187459efe3;
                local_1f0 = local_210;
                local_1e8 = local_208;
                local_1e0 = local_200;
                local_1d8 = local_1f8;
                local_1d0 = local_210;
                local_1c8 = local_208;
                local_1c0 = local_200;
                local_1b8 = local_1f8;
                local_1a8 = local_210;
                local_1a0 = local_208;
                local_198 = local_200;
                local_190 = local_1f8;
              }
              else if (uVar4 == 0x4e91888f4d513dc) {
                local_320 = 0xd5387f0a5bf24d2a;
                if (*local_2c0 == 0) {
                  local_320 = 0xf8a6359912d3a818;
                }
                local_328 = 0x66124b03f353c21c;
              }
            }
            else if ((longlong)uVar4 < 0x649b03e09c2e954c) {
              if (uVar4 == 0x9facfae9d7c40cc) {
                local_138._0_4_ = local_30c;
                *local_290 = local_2ec;
                *local_288 = local_330;
                local_144 = local_32c;
                *local_280 = local_2ec;
                *local_278 = local_330;
                local_348 = local_33c;
                FUN_180178e90(&local_f8,&local_144,&local_138,&local_108);
                local_138._0_4_ = local_32c;
                *local_270 = fVar10;
                *local_268 = local_310;
                local_144 = local_32c;
                *local_260 = fVar10;
                *local_258 = local_330;
                local_348 = local_33c;
                FUN_180178e90(&local_f8,&local_144,&local_138,&local_108);
                local_138._0_4_ = local_30c;
                *local_250 = fVar10;
                *local_248 = local_310;
                local_144 = local_30c;
                *local_240 = fVar10;
                *local_238 = local_330;
                local_348 = local_33c;
                FUN_180178e90(&local_f8,&local_144,&local_138,&local_108);
                local_138 = CONCAT44(local_138._4_4_,local_30c);
                *local_230 = fVar10;
                *local_228 = local_310;
                local_144 = local_32c;
                *local_220 = fVar10;
                *local_218 = local_310;
                local_348 = local_33c;
                FUN_180178e90(&local_f8,&local_144,&local_138,&local_108);
                local_2ec = fVar10 + local_2d4;
                local_320 = 0x8650e08f3cb9f9b6;
                if (local_334 < local_2ec) {
                  local_320 = 0xeb312cc13deb2c36;
                }
                local_328 = 0x8faa2f21a1c5b97a;
              }
              else if (uVar4 == 0xa7ae15632243cb9) {
                iVar3 = local_2d8 * local_2f0;
                puVar5 = &local_108;
                if (local_2f0 % local_2fc == local_308) {
                  puVar5 = &local_128;
                }
                local_138 = *puVar5;
                uStack_130 = puVar5[1];
                fVar10 = local_32c + (float)iVar3;
                *local_210 = local_334;
                *local_208 = local_330;
                local_144 = fVar10;
                *local_200 = local_338;
                *local_1f8 = local_330;
                local_348 = local_33c;
                local_150 = fVar10;
                FUN_180178e90(&local_f8,&local_150,&local_144,&local_138);
                *local_1f0 = local_334;
                *local_1e8 = local_2f8;
                local_144 = fVar10;
                *local_1e0 = local_338;
                *local_1d8 = local_2f8;
                local_348 = local_33c;
                local_150 = fVar10;
                FUN_180178e90(&local_f8,&local_150,&local_144,&local_138);
                fVar10 = (float)iVar3 + local_330;
                local_144 = local_32c;
                *local_1d0 = local_334;
                *local_1c8 = fVar10;
                local_150 = local_32c;
                *local_1c0 = local_338;
                *local_1b8 = fVar10;
                local_348 = local_33c;
                FUN_180178e90(&local_f8,&local_150,&local_144,&local_138);
                local_144 = local_2f4;
                *local_1a8 = local_334;
                *local_1a0 = fVar10;
                local_150 = local_2f4;
                *local_198 = local_338;
                *local_190 = fVar10;
                local_348 = local_33c;
                FUN_180178e90(&local_f8,&local_150,&local_144,&local_138);
                local_2f0 = uVar1 + 1;
                local_320 = 0x60be469b5819c671;
                if (uVar1 == local_2fc) {
                  local_320 = 0x9de94f2d8ccf513a;
                }
                local_328 = 0x6ac4a7cd6a3dfac8;
                local_2b0 = local_1b0;
              }
            }
            else if (uVar4 == 0x649b03e09c2e954c) {
              fVar10 = local_32c + local_314;
              local_13c = local_330 + local_314;
              local_138 = CONCAT44(local_334,fVar10);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              uStack_130._0_4_ = local_13c;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_13c = local_330 + local_338;
              local_138 = CONCAT44(local_334,fVar10);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              uStack_130._0_4_ = local_13c;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_13c = local_330 + local_304;
              local_138 = CONCAT44(local_334,fVar10);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              uStack_130._0_4_ = local_13c;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_13c = local_330 + local_318;
              local_138 = CONCAT44(local_334,fVar10);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              uStack_130._0_4_ = local_13c;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              fVar11 = local_32c + local_338;
              fVar10 = local_318 + local_330;
              fVar9 = local_330 + local_314;
              local_138 = CONCAT44(local_334,fVar11);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar11;
              local_13c = fVar9;
              uStack_130._0_4_ = fVar9;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_138 = CONCAT44(local_334,fVar11);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar11;
              local_13c = fVar10;
              uStack_130._0_4_ = fVar10;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              fVar11 = local_32c + local_304;
              local_138 = CONCAT44(local_334,fVar11);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar11;
              local_13c = fVar9;
              uStack_130._0_4_ = fVar9;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_138 = CONCAT44(local_334,fVar11);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar11;
              local_13c = fVar10;
              uStack_130._0_4_ = fVar10;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              fVar10 = local_32c + local_318;
              local_13c = local_330 + local_314;
              local_138 = CONCAT44(local_334,fVar10);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              uStack_130._0_4_ = local_13c;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_13c = local_330 + local_338;
              local_138 = CONCAT44(local_334,fVar10);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              uStack_130._0_4_ = local_13c;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_13c = local_330 + local_304;
              local_138 = CONCAT44(local_334,fVar10);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              uStack_130._0_4_ = local_13c;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_13c = local_330 + local_318;
              local_138 = CONCAT44(local_334,fVar10);
              uStack_130 = CONCAT44(uStack_130._4_4_,local_13c);
              local_140 = local_338;
              local_348 = local_33c;
              local_144 = fVar10;
              FUN_180178e90(&local_f8,&local_144,&local_138,&local_118);
              local_320 = 0xaead8e493c697644;
              local_328 = 0x11c43a9bc72d8d41;
            }
            else if (uVar4 == 0x6a1bc680a0c7b716) {
              fVar10 = *(float *)(*local_2c0 + 0x90);
              uVar7 = FUN_1801ec180(*(float *)(*local_2c0 + 0x88) * local_300);
              uVar8 = FUN_1801ec180(fVar10 * local_300);
              local_2d0[(uint)local_2e8 & 1] = uVar8;
              local_2d0[(uint)local_2e0 & 1] = uVar7;
              local_178[0] = local_2d0[0] * 16.0;
              local_178[1] = local_2d0[1] * 16.0;
              local_2c8 = CONCAT44(local_178[1],local_178[0]);
              local_178[2] = 0.0;
              local_178[3] = 0.0;
              local_32c = local_178[(uint)local_2e0 & 3];
              local_330 = local_178[(uint)local_2e8 & 3];
              local_108 = *(undefined8 *)(*(longlong *)(local_2a8 + 0x80) + 0x90);
              uStack_100 = *(undefined8 *)(*(longlong *)(local_2a8 + 0x80) + 0x98);
              local_118 = *(undefined8 *)(*(longlong *)(local_2a8 + 0x88) + 0x90);
              uStack_110 = *(undefined8 *)(*(longlong *)(local_2a8 + 0x88) + 0x98);
              local_128 = *(undefined8 *)(*(longlong *)(local_2a8 + 0x90) + 0x90);
              uStack_120 = *(undefined8 *)(*(longlong *)(local_2a8 + 0x90) + 0x98);
              local_2d8 = *(int *)(*(longlong *)(local_2a8 + 0x70) + 0x90);
              local_2fc = 0x10 / local_2d8;
              local_2d4 = *(float *)(*(longlong *)(local_2a8 + 0x78) + 0x90);
              local_320 = 0x295a12e42a78e9bc;
              if ((int)local_2fc < (int)local_308) {
                local_320 = 0x6fcf9868a786974d;
              }
              local_328 = 0xd5fb5f3c519702c6;
            }
          }
          if ((longlong)uVar4 < -0x4c8fb1c733ba1406) break;
          if ((longlong)uVar4 < -0x40964b2d04bb04fb) {
            if (uVar4 == 0xb3704e38cc45ebfa) {
              local_320 = 0x828f57c5029e01bc;
              if (*(char *)(local_2b8 + 0xb8) == '\0') {
                local_320 = 0x18d231d717cb7864;
              }
              local_328 = 0x86664f4df64b1260;
            }
            else if (uVar4 == 0xba34c754f611958b) {
              local_320 = 0xebb28aed198cb30c;
              local_328 = 0x1c9f620dff7e18fe;
              local_2b0 = CONCAT44(fVar9 + 16.0,(float)local_2c8 + 16.0);
            }
          }
          else if (uVar4 == 0xbf69b4d2fb44fb05) {
            local_320 = 0xf9a84596e0b6af2;
            local_328 = 0x912efac38f8b00f6;
          }
          else if (uVar4 == 0xdd4fa92915793113) {
            local_2c0 = local_2a0 + 1;
            local_320 = 0xc07c57222ca69745;
            if (local_2a0[3] != 0) {
              local_320 = 0xd97c29f81bb5ce9d;
            }
            if (local_2a0[1] == 0) {
              local_320 = 0xc07c57222ca69745;
            }
            local_328 = 0x5ec829b8cd26fd41;
          }
        }
        if (-0x614b81651e7f95fd < (longlong)uVar4) break;
        if (uVar4 == 0x87b40040d69333dc) {
          local_2b8 = *(longlong *)(local_298 + 0x30);
          local_320 = 0xaff472dc3868eeaa;
          if (local_2b8 == 0) {
            local_320 = 0xacf2756c45155ec2;
          }
          local_328 = 0x32460bf6a49534c6;
        }
        else if (uVar4 == 0x9db2792a9cfdda6c) {
          cVar2 = FUN_1801b3c30(local_2b8,0x200);
          local_320 = 0x78c1b778e240afc9;
          if (cVar2 != '\0') {
            local_320 = 0x550587dacf852e37;
          }
          local_328 = 0xe675c9e203c0c5cd;
        }
      }
      if (uVar4 != 0xb32a3409a8a18f36) break;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_c8 = 0x3f8000003f800000;
      uStack_c0 = 0;
      FUN_180172540(&local_138);
      cVar2 = FUN_180178840(&local_f8,&local_138);
      local_320 = 0x67d1f97d107326be;
      if (cVar2 != '\0') {
        local_320 = 0xb2a38b2f4bf06aad;
      }
      local_328 = 0xd8b84dafeb37ddbb;
    }
  } while (uVar4 != 0x9eb47e9ae1806a04);
  if (DAT_1802a0400 == (local_b0 ^ (ulonglong)auStack_368)) {
    return;
  }
}



void FUN_180133a70(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xd0642a3acf7e122a;
  local_58 = 0xde38ecae8e52835;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xc89f392758511111;
        if (uVar1 != 0xc64c0679479bc258) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0x683022d286b3aeaf;
        local_58 = 0x72178367b5e38883;
      }
      if (uVar1 != 0xdd87a4f0279b3a1f) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0xa94669e472f67e73;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x752dce28063d9a07;
      }
      local_58 = 0xb361c85141a6585f;
    }
    local_50 = local_50 ^ 0xc89f392758511111;
  } while (uVar1 != 0x1a27a1b53350262c);
  return;
}



void FUN_180133ba0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x18435a24ddf2ca6c;
  local_50 = 0xca4403210402a2fb;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x5a18d03d1cb98c49;
        if (uVar1 != 0xd2075905d9f06897) break;
        local_48 = 0x85b7ae02d2ee6eea;
        if (param_2 != '\0') {
          local_48 = 0xe59351883e8cc8e3;
        }
        local_50 = 0x3c73a61086a07185;
      }
      if (uVar1 != 0xd9e0f798b82cb966) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xd9e4967c9d24c6be;
      local_50 = 0x60209e6ec96ad9d1;
    }
    local_48 = local_48 ^ 0x5a18d03d1cb98c49;
  } while (uVar1 != 0xb9c40812544e1f6f);
  return;
}



undefined8 FUN_180133cd0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xcfd8799554afac2d;
  local_50 = 0xa1735720e5c34fdf;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc9b0bdc2af248cc3;
        if (uVar1 != 0x59030d23a996dbf1) break;
        thunk_FUN_1801f42e0(param_1,0x98);
        local_48 = 0x6c9301facd15de2b;
        local_50 = 0x7a67e0f3497f8a59;
      }
      if (uVar1 != 0x6eab2eb5b16ce3f2) break;
      FUN_180106c90(param_1);
      local_48 = 0x35561a3785b7fdf7;
      if ((param_2 & 1) == 0) {
        local_48 = 0x7aa1f61da84b7274;
      }
      local_50 = 0x6c5517142c212606;
    }
    local_48 = local_48 ^ 0xc9b0bdc2af248cc3;
  } while (uVar1 != 0x16f4e109846a5472);
  return param_1;
}



void FUN_180133e20(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x538d3ffceaca2576;
  local_68 = 0x291423a9f5896fa3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xc34d2ce9d56e331c;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xc34d2ce9d56e331c;
          local_60 = uVar2;
          if (-0x28089f3b12bc3204 < (longlong)uVar1) break;
          if (uVar1 == 0x87c11783973522c5) {
            local_6b = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xd21802a6b44b1de4;
            local_68 = 0x7f9a8591230b46f;
          }
          else if (uVar1 == 0xb2a4a5542408a841) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xb45e9d3ee322b467;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0xe468ea7999545b5f;
            }
            local_68 = 0x63a9fdfa0e61799a;
          }
          else if (uVar1 == 0xd5e1aaffa67ba98b) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0xefc8335aba855400;
            if (local_54 == param_4) {
              local_60 = 0x721dfaf542d859d1;
            }
            local_68 = 0x5d6c960e9e8dfc41;
          }
        }
        if ((longlong)uVar1 < 0x2f716cfbdc55a590) break;
        if (uVar1 == 0x2f716cfbdc55a590) {
          *param_5 = 1;
          local_60 = 0x8cffdf23ba2b31a2;
          local_68 = 0x5143189c18a507da;
        }
        else if (uVar1 == 0x7a991c551f434ad5) {
          local_60 = 0xb2b554ba45ccea7b;
          if (*param_5 == 1) {
            local_60 = 0xddad3651c34a7442;
          }
          local_68 = 0x11f1ee61c4423a;
          local_54 = 0;
          local_6a = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0xd7f760c4ed43cdfd) break;
      local_6b = -(local_6c - local_69 ^ local_6d);
      local_60 = 0x4c8713bb5e84d580;
      local_68 = 0x9966b944f8ff7c0b;
    }
  } while (uVar1 != 0xddbcc7bfa28e3678);
  return;
}



undefined8 * FUN_1801340e0(undefined8 *param_1)

{
  undefined ***pppuVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined **local_228;
  undefined8 *local_220;
  undefined ***local_1f0;
  undefined4 *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  uintptr_t local_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  uintptr_t local_1a0;
  undefined8 local_198;
  ulonglong local_190;
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
  undefined8 local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 *puStack_f0;
  code *local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined5 uStack_d5;
  undefined3 uStack_d0;
  undefined5 uStack_cd;
  uintptr_t local_c8;
  undefined ***local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uintptr_t local_a8;
  ulonglong local_a0;
  undefined1 local_98 [4];
  uint local_94;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_41 = 0;
  local_50 = 0xf;
  local_90 = 0xfff;
  local_88 = 0x28;
  local_80 = 1;
  local_6c = 200;
  local_60 = 0x20;
  local_120 = 0x1e;
  local_94 = 0;
  local_78 = -8;
  local_58 = 0;
  local_100 = 0x1f;
  local_1e0 = 0;
  local_68 = param_1;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_1d8 = 0x1c;
  local_1d0 = local_100;
  uVar12 = 1;
  local_1e8 = puVar6;
  FUN_180136a70(&DAT_1802a4c8c,&DAT_180281dcb,0x12,0x1d,&DAT_1802a4cac);
  uVar7 = uRam00000001802a4ca0;
  *(ulonglong *)(puVar6 + 3) = CONCAT44(uRam00000001802a4c9c,_DAT_1802a4c98);
  *(undefined8 *)(puVar6 + 5) = uVar7;
  uVar4 = _DAT_1802a4c98;
  uVar3 = uRam00000001802a4c94;
  uVar13 = uRam00000001802a4c90;
  *puVar6 = _DAT_1802a4c8c;
  puVar6[1] = uVar13;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)(puVar6 + 7) = local_41;
  local_1c0 = local_58;
  local_1b8 = 8;
  local_1b0 = local_50;
  local_1c8 = 0x6975476b63696c43;
  FUN_1801063a0(param_1,&local_1c8,&local_1e8,3,CONCAT44(uVar12,0x2d));
  *param_1 = &PTR_FUN_180219820;
  puStack_f0 = (undefined8 *)0x0;
  local_e8 = (code *)0x4;
  local_e0 = local_50;
  local_f8 = (undefined **)0x656e6f4e;
  local_c8 = 3;
  local_c0 = (undefined ***)local_50;
  uStack_d5 = 0;
  uStack_d0 = 0;
  uStack_cd = 0;
  FUN_180136a70(&DAT_1802a4cbc,&DAT_180281e47,0x10,4,&DAT_1802a4cc0);
  uStack_d6 = DAT_1802a4cbe;
  local_d8 = (undefined1)DAT_1802a4cbc;
  uStack_d7 = (undefined1)((ushort)DAT_1802a4cbc >> 8);
  local_a8 = 5;
  local_a0 = local_50;
  uStack_b4._1_3_ = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_180136a70(&DAT_1802a4cc4,&DAT_180281e6e,0x1d,6,&DAT_1802a4ccc);
  uStack_b4 = CONCAT31(uStack_b4._1_3_,DAT_1802a4cc8);
  local_b8 = DAT_1802a4cc4;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = 0;
  local_118 = FUN_1801d61c8(0x60);
  local_108 = local_118 + 0x60;
  lStack_110 = local_118;
  lStack_110 = FUN_180124c70(&local_f8,local_98,local_118,&local_118);
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(local_60);
  local_178 = local_120;
  uStack_170 = local_100;
  local_188 = puVar6;
  FUN_180136a70(&DAT_1802a4cd0,&DAT_180281eaa,0x11,0x1f,&DAT_1802a4cf0);
  uVar7 = uRam00000001802a4ce6;
  *(ulonglong *)((longlong)puVar6 + 0xe) = CONCAT62(uRam00000001802a4ce0,_DAT_1802a4cde);
  *(undefined8 *)((longlong)puVar6 + 0x16) = uVar7;
  uVar4 = uRam00000001802a4cd8;
  uVar3 = uRam00000001802a4cd4;
  uVar13 = CONCAT22(_DAT_1802a4cde,uRam00000001802a4cdc);
  *puVar6 = _DAT_1802a4cd0;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar13;
  *(undefined1 *)((longlong)puVar6 + 0x1e) = local_41;
  local_1a0 = local_58;
  local_198 = 9;
  local_190 = local_50;
  uVar13 = 1;
  FUN_180136a70(&DAT_1802a4cf4,&DAT_180281ef9,0x10,10,&DAT_1802a4d00);
  puVar5 = local_68;
  local_1a0 = CONCAT71(local_1a0._1_7_,DAT_1802a4cfc);
  local_1a8 = DAT_1802a4cf4;
  uVar7 = FUN_180108620(local_68,&local_1a8,&local_188,&local_118,CONCAT44(uVar13,1));
  puVar5[0xe] = uVar7;
  if (local_50 < local_a0) {
    lVar2 = CONCAT44(uStack_b4,local_b8);
    uVar9 = local_80 + local_a0;
    lVar8 = lVar2;
    if (local_90 < uVar9) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (local_60 <= (ulonglong)((lVar2 + local_78) - lVar8)) goto LAB_180134a8d;
      uVar9 = local_a0 + local_88;
    }
    thunk_FUN_1801f42e0(lVar8,uVar9);
  }
  local_a8 = local_58;
  local_a0 = local_50;
  local_b8 = CONCAT31(local_b8._1_3_,local_41);
  if (local_50 < local_c0) {
    lVar2 = CONCAT53(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,local_d8)));
    uVar9 = local_80 + (longlong)local_c0;
    lVar8 = lVar2;
    if (local_90 < uVar9) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (local_60 <= (ulonglong)((lVar2 + local_78) - lVar8)) goto LAB_180134a8d;
      uVar9 = (longlong)local_c0 + local_88;
    }
    thunk_FUN_1801f42e0(lVar8,uVar9);
  }
  local_c8 = local_58;
  local_c0 = (undefined ***)local_50;
  local_d8 = local_41;
  if (local_50 < local_e0) {
    uVar9 = local_80 + local_e0;
    ppuVar11 = local_f8;
    if (local_90 < uVar9) {
      ppuVar11 = (undefined **)local_f8[-1];
      if (local_60 <= (ulonglong)((longlong)local_f8 + (local_78 - (longlong)ppuVar11))) {
LAB_180134a8d:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_94,local_58);
      }
      uVar9 = local_e0 + local_88;
    }
    thunk_FUN_1801f42e0(ppuVar11,uVar9);
  }
  local_148 = (undefined4 *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(local_60);
  local_138 = local_120;
  uStack_130 = local_100;
  local_148 = puVar6;
  FUN_180136a70(&DAT_1802a4d04,&DAT_180281f2c,0x12,0x1f,&DAT_1802a4d24);
  uVar7 = uRam00000001802a4d1a;
  *(ulonglong *)((longlong)puVar6 + 0xe) = CONCAT62(uRam00000001802a4d14,_DAT_1802a4d12);
  *(undefined8 *)((longlong)puVar6 + 0x16) = uVar7;
  uVar4 = uRam00000001802a4d0c;
  uVar3 = uRam00000001802a4d08;
  uVar13 = CONCAT22(_DAT_1802a4d12,uRam00000001802a4d10);
  *puVar6 = _DAT_1802a4d04;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar13;
  *(undefined1 *)((longlong)puVar6 + 0x1e) = local_41;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(local_60);
  local_158 = 0x11;
  uStack_150 = local_100;
  uVar12 = 1;
  local_168 = puVar6;
  FUN_180136a70(&DAT_1802a4d28,&DAT_180281f74,0x13,0x12,&DAT_1802a4d3c);
  *(undefined1 *)(puVar6 + 4) = DAT_1802a4d38;
  uVar4 = uRam00000001802a4d34;
  uVar3 = uRam00000001802a4d30;
  uVar13 = uRam00000001802a4d2c;
  *puVar6 = _DAT_1802a4d28;
  puVar6[1] = uVar13;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x11) = local_41;
  lVar8 = FUN_180108270(local_68,&local_168,&local_148,0x3ecccccd,CONCAT44(uVar12,0x3dcccccd),0x3f800000,0x3d4ccccd);
  local_68[0xf] = lVar8;
  ppuVar11 = &PTR_FUN_180219860;
  local_228 = &PTR_FUN_180219860;
  local_220 = local_68;
  local_1f0 = &local_228;
  pppuVar10 = (undefined ***)(lVar8 + 0x50);
  if (pppuVar10 == local_1f0) goto LAB_18013494b;
  pppuVar1 = *(undefined ****)(lVar8 + 0x88);
  if (pppuVar1 != (undefined ***)0x0) {
    (*(code *)(*pppuVar1)[4])(pppuVar1,pppuVar1 != pppuVar10);
    *(undefined8 *)(lVar8 + 0x88) = 0;
    if (local_1f0 == (undefined ***)0x0) goto LAB_18013494b;
    if (local_1f0 != &local_228) {
      *(undefined ****)(lVar8 + 0x88) = local_1f0;
      goto LAB_18013494b;
    }
    ppuVar11 = *local_1f0;
  }
  uVar7 = (*(code *)ppuVar11[1])(local_1f0,pppuVar10);
  *(undefined8 *)(lVar8 + 0x88) = uVar7;
  if (local_1f0 != (undefined ***)0x0) {
    (*(code *)(*local_1f0)[4])(local_1f0,local_1f0 != &local_228);
  }
LAB_18013494b:
  uVar7 = FUN_1800ba260();
  local_f8 = &PTR_LAB_180219890;
  puStack_f0 = local_68;
  local_e8 = FUN_180134d80;
  local_c0 = &local_f8;
  FUN_180121610(uVar7,local_68,&local_f8,local_6c);
  uVar7 = FUN_1800ba260();
  local_f8 = &PTR_LAB_1802198e0;
  puStack_f0 = local_68;
  local_e8 = FUN_180134f00;
  local_c0 = &local_f8;
  FUN_180135430(uVar7,local_68,&local_f8,local_6c);
  uVar7 = FUN_1800ba260();
  local_f8 = &PTR_LAB_180219910;
  puStack_f0 = local_68;
  local_e8 = FUN_180134f20;
  local_c0 = &local_f8;
  FUN_1800faca0(uVar7,local_68,&local_f8,local_6c);
  uVar7 = FUN_1800ba260();
  local_f8 = &PTR_LAB_180219960;
  puStack_f0 = local_68;
  local_e8 = FUN_180134f40;
  local_c0 = &local_f8;
  FUN_180135f50(uVar7,local_68,&local_f8,local_6c);
  return local_68;
}



void Unwind_180134ab0(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0x150);
  return;
}



void Unwind_180134af0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  uVar1 = *(ulonglong *)(param_2 + 0x1c8);
  if (*(ulonglong *)(param_2 + 0x218) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x1b0);
    uVar4 = *(longlong *)(param_2 + 0x1e8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x1d8) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x208) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x1f0)) - lVar3))
      goto LAB_180134c93;
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x1e0);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_2 + 0x218);
  *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_2 + 0x227);
  uVar1 = *(ulonglong *)(param_2 + 0x1a8);
  if (*(ulonglong *)(param_2 + 0x218) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 400);
    uVar4 = *(longlong *)(param_2 + 0x1e8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x1d8) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x208) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x1f0)) - lVar3))
      goto LAB_180134c93;
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x1e0);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_2 + 0x218);
  *(undefined1 *)(param_2 + 400) = *(undefined1 *)(param_2 + 0x227);
  uVar1 = *(ulonglong *)(param_2 + 0x188);
  if (*(ulonglong *)(param_2 + 0x218) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x170);
    uVar4 = *(longlong *)(param_2 + 0x1e8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x1d8) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x208) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x1f0)) - lVar3)) {
LAB_180134c93:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,*(uint *)(param_2 + 0x1d4),
                       *(uintptr_t *)(param_2 + 0x210));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x1e0);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_2 + 0x188) = *(undefined8 *)(param_2 + 0x218);
  *(undefined1 *)(param_2 + 0x170) = *(undefined1 *)(param_2 + 0x227);
  return;
}



void Unwind_180134cc0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x120);
  return;
}



void Unwind_180134d00(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x200));
  return;
}



void Unwind_180134d40(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0x150);
  return;
}



void FUN_180134d80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50;

  local_50 = 0xdf5dc2682db31d5a;
  local_58 = 0x2434caa42aae2693;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xdc7a55f92f537915;
        if ((longlong)uVar2 < -0x496f733f8e2c437) break;
        if (uVar2 == 0x43939b7a11120b67) {
          lVar1 = FUN_1800c32a0();
          local_50 = 0xacd31d7a5de29e76;
          if (*(char *)(lVar1 + 0x210) != '\0') {
            local_50 = 0xd00b289c300db212;
          }
          local_58 = 0x29d67e1428fb27c5;
        }
        else {
          local_50 = local_50 ^ 0xdc7a55f92f537915;
          if (uVar2 == 0xfb6908cc071d3bc9) {
            local_50 = 0xabeabce09b15d6f8;
            if (*(char *)(param_1 + 0x4c) != '\0') {
              local_50 = 0x11a4711292f14848;
            }
            local_58 = 0x5237ea6883e3432f;
          }
        }
      }
      if (uVar2 != 0x8505636e7519b9b3) break;
      FUN_180107400(param_1,0);
      local_50 = 0xd6b739ba8cc342ab;
      local_58 = 0x2f6a6f329435d77c;
    }
    local_50 = local_50 ^ 0xdc7a55f92f537915;
  } while (uVar2 != 0xf9dd568818f695d7);
  uVar3 = FUN_1800c32a0();
  FUN_1800c71f0(uVar3,param_2);
  return;
}



void FUN_180134f00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;

  uVar1 = FUN_1800c32a0();
  FUN_1800dc360(uVar1,param_2);
  return;
}



void FUN_180134f20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;

  uVar1 = FUN_1800c32a0();
  FUN_1800e20b0(uVar1,param_2);
  return;
}



void FUN_180134f40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;

  uVar1 = FUN_1800c32a0();
  FUN_1800e1510(uVar1,param_2);
  return;
}



void FUN_180134f60(void)

{
  undefined8 uVar1;

  uVar1 = FUN_1800c32a0();
  FUN_1800c5e80(uVar1);
  return;
}



void FUN_180134f80(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_180219860;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



undefined1 FUN_180134fa0(longlong param_1)

{
  undefined8 **_Buf2;
  longlong lVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 local_61;
  ulonglong local_60;
  ulonglong local_58;
  size_t local_50;
  undefined8 **local_48;

  local_58 = 0xde85bcd7a7a8380;
  local_60 = 0x8e54db22e4c00340;
  do {
    while( true ) {
      while( true ) {
        uVar4 = local_58 ^ local_60;
        local_60 = local_60 ^ 0xd18daaa7af7b8afd;
        if (uVar4 != 0x83bc80ef9eba80c0) break;
        local_50 = 4;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
        lVar1 = *(longlong *)(lVar5 + 0x98);
        lVar5 = (longlong)*(int *)(lVar5 + 0x90) * 0x20;
        local_48 = (undefined8 ***)(lVar1 + lVar5);
        local_58 = 0xb0c3454ae3579712;
        if (*(longlong *)(lVar1 + 0x10 + lVar5) == 4) {
          local_58 = 0x9b365ba606c7c23b;
        }
        local_60 = 0x9cc9d74d97af8eab;
        local_61 = 1;
      }
      if (uVar4 != 0x7ff8ceb91684c90) break;
      pppuVar3 = (undefined8 ***)local_48;
      if (local_48[3] < (undefined8 **)0x10) {
        pppuVar3 = &local_48;
      }
      _Buf2 = *pppuVar3;
      FUN_180136a70(&DAT_1802a4cb0,&DAT_180281e14,0x19,5,&DAT_1802a4cb8);
      iVar2 = memcmp(&DAT_1802a4cb0,_Buf2,local_50);
      local_61 = iVar2 != 0;
      local_58 = 0x17d482da19048b44;
      local_60 = 0x3bde10dd6dfc92fd;
    }
    local_58 = local_58 ^ 0xd18daaa7af7b8afd;
  } while (uVar4 != 0x2c0a920774f819b9);
  return local_61;
}



void FUN_180135190(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xa88940d10c8c0b94;
  local_50 = 0xa9c802a53527d130;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x970925003f902c8;
        if (uVar1 != 0x141427439abdaa4) break;
        local_48 = 0xf8d1b923ca59f3ea;
        if (param_2 != '\0') {
          local_48 = 0xfa241f4b84079e69;
        }
        local_50 = 0xb738c0163d194572;
      }
      if (uVar1 != 0x4d1cdf5db91edb1b) break;
      thunk_FUN_1801f42e0(param_1,0x10);
      local_48 = 0xefe060dac832ec9c;
      local_50 = 0xa00919ef3f725a04;
    }
    local_48 = local_48 ^ 0x970925003f902c8;
  } while (uVar1 != 0x4fe97935f740b698);
  return;
}



void FUN_180135300(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xa5c40dec4370e3c7;
  local_50 = 0x24ce9e0c5671ab38;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x9a93c9ddc84ae5df;
        if (uVar1 != 0x810a93e0150148ff) break;
        local_48 = 0x4a728c229ef81d;
        if (param_2 != '\0') {
          local_48 = 0xc8c6c9850633095e;
        }
        local_50 = 0xb7bf7a24b5b1b75;
      }
      if (uVar1 != 0xc3bd3e274d68122b) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xe703a88957dc051;
      local_50 = 0x541bfa6fcb82339;
    }
    local_48 = local_48 ^ 0x9a93c9ddc84ae5df;
  } while (uVar1 != 0xb31852e69c5e368);
  return;
}



void FUN_180135430(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  int local_54;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_54 = 1;
  local_60 = param_3;
  plVar5 = (longlong *)FUN_1801d61c8(0x50);
  plVar1 = local_60;
  *(int *)(plVar5 + 1) = local_54;
  *(int *)((longlong)plVar5 + 0xc) = local_54;
  *plVar5 = (longlong)&PTR_FUN_1802198c0;
  plVar7 = plVar5 + 2;
  plVar5[9] = 0;
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == local_60) {
      lVar6 = (**(code **)(*plVar4 + 8))(plVar4,plVar7);
      plVar5[9] = lVar6;
      plVar4 = (longlong *)plVar1[7];
      if (plVar4 == (longlong *)0x0) goto LAB_1801354f6;
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar1);
    }
    else {
      plVar5[9] = (longlong)plVar4;
    }
    plVar1[7] = 0;
  }
LAB_1801354f6:
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  local_80 = FUN_180135bc0;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = FUN_180135bc0;
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = plVar7;
  local_b0 = plVar5;
  local_a0 = param_2;
  local_98 = param_4;
  local_78 = plVar7;
  local_70 = plVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a4364)
     && (FUN_1801d62d8(&DAT_1802a4364), DAT_1802a4364 == -1)) {
    DAT_1802a4360 = DAT_1802a3dec;
    DAT_1802a3dec = local_54 + DAT_1802a3dec;
    _Init_thread_footer(&DAT_1802a4364);
  }
  FUN_1800baf30(param_1,DAT_1802a4360,&local_c8);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == local_54) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_54) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != local_60);
  }
  return;
}



void Unwind_180135680(undefined8 param_1,longlong param_2)

{
  FUN_1800bb120(param_2 + 0x48);
  FUN_180135720(param_2 + 0x70);
  return;
}



void Unwind_1801356d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = (longlong *)(*(longlong **)(param_2 + 0x88))[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x88));
  }
  return;
}



void FUN_180135720(longlong param_1)

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

  local_58 = 0x78f8fdff5f4c8822;
  local_60 = 0xacb92cd3697b99ab;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0x5a9ce1fcb9e5c6ef;
          if (-0x2dbe1fe5ff238999 < (longlong)uVar5) break;
          if (uVar5 == 0x9ad57eb0fa5cda5e) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_58 = 0x761aa92b5c58bc7f;
            if (iVar3 == local_4c) {
              local_58 = 0x407bbd9a460a9240;
            }
            local_60 = 0x923a5d8046d6e428;
          }
          else {
            local_58 = local_58 ^ 0x5a9ce1fcb9e5c6ef;
            if (uVar5 == 0xc319edf0315ddb3e) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              local_58 = 0xfa004b2cd843b5be;
              if ((int)lVar4 == local_4c) {
                local_58 = 0x84f5c137389137b7;
              }
              local_60 = 0x1e20bf87c2cdede9;
            }
          }
        }
        if (uVar5 != 0xd241e01a00dc7668) break;
        (**(code **)(*local_48 + 8))();
        local_58 = 0x9a9fc9f6c2fec4e1;
        local_60 = 0x7ebf3d5dd8709cb6;
      }
      if (uVar5 != 0xd441d12c36371189) break;
      local_4c = 1;
      local_48 = *(longlong **)(param_1 + 8);
      local_58 = 0x31b3bc290de963f;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0x24222299bb0d1556;
      }
      local_60 = 0xc002d632a1834d01;
    }
    local_58 = local_58 ^ 0x5a9ce1fcb9e5c6ef;
  } while (uVar5 != 0xe420f4ab1a8e5857);
  return;
}



void FUN_180135910(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_58 = 0xc72e81d309171cca;
  local_60 = 0xf86c115dee5a5a7a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_58 ^ local_60;
        local_60 = local_60 ^ 0xaeb668b7820acd49;
        if (uVar1 != 0xc92454983e81395d) break;
        (**(code **)(*local_48 + 0x20))
                  (local_48,CONCAT71((int7)((local_58 ^ 0xaeb668b7820acd49) >> 8),
                                     local_48 != (longlong *)(param_1 + 0x10)));
        *local_50 = 0;
        local_58 = 0xf51d299833642a18;
        local_60 = 0xd1d928acbe7809f1;
      }
      if (uVar1 != 0x3f42908ee74d46b0) break;
      local_50 = (undefined8 *)(param_1 + 0x48);
      local_48 = *(longlong **)(param_1 + 0x48);
      local_58 = 0x1bc474d2ae296df1;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0xf624217e1db47745;
      }
      local_60 = 0xd2e0204a90a854ac;
    }
    local_58 = local_58 ^ 0xaeb668b7820acd49;
  } while (uVar1 != 0x24c401348d1c23e9);
  return;
}



void FUN_180135a50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



undefined8 FUN_180135a70(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x58e770de9ea0360d;
  local_50 = 0x921c45b6604e6a5e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xddf16deb39886d83;
        if (uVar1 != 0xcafb3568feee5c53) break;
        local_48 = 0x32af72868d8da7d4;
        if ((param_2 & 1) == 0) {
          local_48 = 0xbddd78a27851afac;
        }
        local_50 = 0x7dfdefd505bf0e7a;
      }
      if (uVar1 != 0x4f529d538832a9ae) break;
      thunk_FUN_1801f42e0(param_1,0x50);
      local_48 = 0x24180d833f54ad85;
      local_50 = 0xe4389af442ba0c53;
    }
    local_48 = local_48 ^ 0xddf16deb39886d83;
  } while (uVar1 != 0xc02097777deea1d6);
  return param_1;
}



void FUN_180135bc0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;

  lVar4 = *param_1;
  if (param_1[1] == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
  }
  if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
          return;
        }
      }
    }
    return;
  }
  FUN_1801d7504();
}



void Unwind_180135c70(undefined8 param_1,longlong param_2)

{
  FUN_180135720(param_2 + 0x20);
  return;
}



void FUN_180135cd0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xea59ba50429d2545;
  local_50 = 0xc573b8b9ff4fdb8c;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x4cf37138368520dc;
        if (uVar1 != 0xd58f50dca08452dc) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0xf87c14dbd3fdfadd;
        local_50 = 0x8294b4fcd942a28a;
      }
      if (uVar1 != 0x2f2a02e9bdd2fec9) break;
      local_48 = 0x297f53ea7413d79d;
      if (param_2 != '\0') {
        local_48 = 0x8618a311de28dd16;
      }
      local_50 = 0x5397f3cd7eac8fca;
    }
    local_48 = local_48 ^ 0x4cf37138368520dc;
  } while (uVar1 != 0x7ae8a0270abf5857);
  return;
}



void FUN_180135e20(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x86dcda0c9759be44;
  local_50 = 0xc2682a365e5913c9;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x7a8147d934a42216;
        if (uVar1 != 0x44b4f03ac900ad8d) break;
        local_48 = 0x440b4fbd70892313;
        if (param_2 != '\0') {
          local_48 = 0x2eaa5788c92bc546;
        }
        local_50 = 0x680e2173aec0caca;
      }
      if (uVar1 != 0x46a476fb67eb0f8c) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0x9cfefe1d15bb007f;
      local_50 = 0xb0fb90d3cbf2e9a6;
    }
    local_48 = local_48 ^ 0x7a8147d934a42216;
  } while (uVar1 != 0x2c056ecede49e9d9);
  return;
}



void FUN_180135f50(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  int local_54;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_54 = 1;
  local_60 = param_3;
  plVar5 = (longlong *)FUN_1801d61c8(0x50);
  plVar1 = local_60;
  *(int *)(plVar5 + 1) = local_54;
  *(int *)((longlong)plVar5 + 0xc) = local_54;
  *plVar5 = (longlong)&PTR_FUN_180219940;
  plVar7 = plVar5 + 2;
  plVar5[9] = 0;
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == local_60) {
      lVar6 = (**(code **)(*plVar4 + 8))(plVar4,plVar7);
      plVar5[9] = lVar6;
      plVar4 = (longlong *)plVar1[7];
      if (plVar4 == (longlong *)0x0) goto LAB_180136016;
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar1);
    }
    else {
      plVar5[9] = (longlong)plVar4;
    }
    plVar1[7] = 0;
  }
LAB_180136016:
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  local_80 = FUN_1801366e0;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = FUN_1801366e0;
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = plVar7;
  local_b0 = plVar5;
  local_a0 = param_2;
  local_98 = param_4;
  local_78 = plVar7;
  local_70 = plVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a436c)
     && (FUN_1801d62d8(&DAT_1802a436c), DAT_1802a436c == -1)) {
    DAT_1802a4368 = DAT_1802a3dec;
    DAT_1802a3dec = local_54 + DAT_1802a3dec;
    _Init_thread_footer(&DAT_1802a436c);
  }
  FUN_1800baf30(param_1,DAT_1802a4368,&local_c8);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == local_54) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_54) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != local_60);
  }
  return;
}



void Unwind_1801361a0(undefined8 param_1,longlong param_2)

{
  FUN_1800bb120(param_2 + 0x48);
  FUN_180136240(param_2 + 0x70);
  return;
}



void Unwind_1801361f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = (longlong *)(*(longlong **)(param_2 + 0x88))[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x88));
  }
  return;
}



void FUN_180136240(longlong param_1)

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

  local_58 = 0x782928b445cecb30;
  local_60 = 0x2033bdae1ad05fb4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0xa52da8c95eec973a;
          if (0x56e54c15b99b0a67 < (longlong)uVar5) break;
          if (uVar5 == 0xefb3ff12cc3c0f7) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_58 = 0x8d6d5d0410044;
            if (iVar3 == local_4c) {
              local_58 = 0x353f84cbdbae2284;
            }
            local_60 = 0x63dac8de623528ec;
          }
          else {
            local_58 = local_58 ^ 0xa52da8c95eec973a;
            if (uVar5 == 0x38d0118f77780473) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              local_58 = 0x4b4636c07f1f5d53;
              if ((int)lVar4 == local_4c) {
                local_58 = 0x266f173ae1a8b50c;
              }
              local_60 = 0x289428cbcd6b75fb;
            }
          }
        }
        if (uVar5 != 0x56e54c15b99b0a68) break;
        (**(code **)(*local_48 + 8))();
        local_58 = 0xcb25024e1332ac18;
        local_60 = 0xa8f71c45a14684b0;
      }
      if (uVar5 != 0x581a951a5f1e9484) break;
      local_4c = 1;
      local_48 = *(longlong **)(param_1 + 8);
      local_58 = 0x3a02203c4ed5de7f;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0x61002fb88bd9f2a4;
      }
      local_60 = 0x2d231b339adda0c;
    }
    local_58 = local_58 ^ 0xa52da8c95eec973a;
  } while (uVar5 != 0x63d21e0bb27428a8);
  return;
}



void FUN_180136430(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_58 = 0x8f40a3904b0765c1;
  local_60 = 0x859e662ed3dd2e12;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x92af601cc9b640e8;
        if (uVar1 != 0x811e078a8d6ba29a) break;
        (**(code **)(*local_48 + 0x20))
                  (local_48,CONCAT71((int7)((local_58 ^ 0x92af601cc9b640e8) >> 8),
                                     local_48 != (longlong *)(param_1 + 0x10)));
        *local_50 = 0;
        local_58 = 0x5034b66cb21749ef;
        local_60 = 0xe9a74926f64ade34;
      }
      if (uVar1 != 0xadec5be98da4bd3) break;
      local_50 = (undefined8 *)(param_1 + 0x48);
      local_48 = *(longlong **)(param_1 + 0x48);
      local_58 = 0x7aac1628d5daf45c;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0x4221eee81cecc11d;
      }
      local_60 = 0xfbb211a258b156c6;
    }
    local_58 = local_58 ^ 0x92af601cc9b640e8;
  } while (uVar1 != 0xb993ff4a445d97db);
  return;
}



void FUN_180136570(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



undefined8 FUN_180136590(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xce166be8b0e23c7a;
  local_50 = 0xdd2dd657a7bea004;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xbdc0160b6969e06b;
        if (uVar1 != 0x133bbdbf175c9c7e) break;
        local_48 = 0x467c320906c8ba0b;
        if ((param_2 & 1) == 0) {
          local_48 = 0x91d5a10194cecc7;
        }
        local_50 = 0x686b49728195b039;
      }
      if (uVar1 != 0x2e177b7b875d0a32) break;
      thunk_FUN_1801f42e0(param_1,0x50);
      local_48 = 0xe8d71f7e51bda59;
      local_50 = 0x6ffb62957dc286a7;
    }
    local_48 = local_48 ^ 0xbdc0160b6969e06b;
  } while (uVar1 != 0x6176136298d95cfe);
  return param_1;
}



void FUN_1801366e0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;

  lVar4 = *param_1;
  if (param_1[1] == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
  }
  if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
          return;
        }
      }
    }
    return;
  }
  FUN_1801d7504();
}



void Unwind_180136790(undefined8 param_1,longlong param_2)

{
  FUN_180136240(param_2 + 0x20);
  return;
}



void FUN_1801367f0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x4fa0ec6dc7f115e7;
  local_50 = 0xe7f072c62471dd1e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x880bf111dddcec2c;
        if (uVar1 != 0xa8509eabe380c8f9) break;
        local_48 = 0x86c2a482463a1248;
        if (param_2 != '\0') {
          local_48 = 0x54de76f6f1ea30c5;
        }
        local_50 = 0x335ed0840a6b633a;
      }
      if (uVar1 != 0x6780a672fb8153ff) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0x57d85580db227b06;
      local_50 = 0xe244218697730a74;
    }
    local_48 = local_48 ^ 0x880bf111dddcec2c;
  } while (uVar1 != 0xb59c74064c517172);
  return;
}



undefined8 FUN_180136920(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x82c758dc78cfc9d5;
  local_50 = 0xf299affb948406d7;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x32466c41325422c3;
        if (uVar1 != 0xe04e138cad65a1d9) break;
        thunk_FUN_1801f42e0(param_1,0x80);
        local_48 = 0x7ca0d845ae61c086;
        local_50 = 0x9bf19f816fa3b3c9;
      }
      if (uVar1 != 0x705ef727ec4bcf02) break;
      FUN_180106c90(param_1);
      local_48 = 0x2d0061fd5d3af419;
      if ((param_2 & 1) == 0) {
        local_48 = 0x2a1f35b5319d268f;
      }
      local_50 = 0xcd4e7271f05f55c0;
    }
    local_48 = local_48 ^ 0x32466c41325422c3;
  } while (uVar1 != 0xe75147c4c1c2734f);
  return param_1;
}



void FUN_180136a70(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x47713225307e8742;
  local_68 = 0xf614af3799d8367a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x99e8508f3fbaddc8;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x99e8508f3fbaddc8;
          local_60 = uVar2;
          if (-0x611ae44105dccab < (longlong)uVar1) break;
          if (uVar1 == 0xa31f649782913549) {
            local_6b = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0x7a30b8d42ac1a392;
            local_68 = 0x2e21007910642e2b;
          }
          else if (uVar1 == 0xb1659d12a9a6b138) {
            local_60 = 0x583e59a0e7567c2b;
            if (*param_5 == 1) {
              local_60 = 0xcfeb1e35af671022;
            }
            local_68 = 0x36054f8e40c52374;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
          else if (uVar1 == 0xdc6d4a31f0aa3e33) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xe3b6b1bdeac61ba2;
            local_68 = 0xb7a70910d063961b;
          }
        }
        if ((longlong)uVar1 < 0x5411b8ad3aa58db9) break;
        if (uVar1 == 0x5411b8ad3aa58db9) {
          local_6a = local_6b ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6a;
          local_54 = local_4c + 1;
          local_60 = 0x8644c272d1f4933a;
          if (local_54 == param_4) {
            local_60 = 0xa9bc6d10ef2f44b3;
          }
          local_68 = 0xe87fd45c7667cc65;
        }
        else if (uVar1 == 0x6e3b162ea7935f5f) {
          local_69 = local_6a;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0xc0a89323bf5096df;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xbfdabd85cd6b9da5;
          }
          local_68 = 0x1cc5d9124ffaa8ec;
        }
      }
      if (uVar1 != 0x41c3b94c994888d6) break;
      *param_5 = 1;
      local_60 = 0x9e07d677aa04998e;
      local_68 = 0x67e987cc45a6aad8;
    }
  } while (uVar1 != 0xf9ee51bbefa23356);
  return;
}



undefined8 * FUN_180136d30(undefined8 *param_1)

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
  undefined1 local_138 [96];
  undefined6 local_d8;
  undefined2 uStack_d2;
  undefined6 local_d0;
  undefined2 uStack_ca;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined8 **local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_29;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_58 = 0x2f;
  local_50 = 0xf;
  local_48 = 0x30;
  local_40 = 1;
  local_38 = 0;
  local_90 = (undefined4 *)FUN_1801d61c8(0x10);
  local_88 = local_90 + 4;
  *local_90 = 0x100f41f2;
  local_90[1] = 0xff3084e;
  local_90[2] = 0x580fc116;
  local_90[3] = 0xf8280fc0;
  local_70 = local_38;
  local_29 = 1;
  local_80 = local_88;
  local_78 = (undefined8 **)FUN_1801d61c8(local_48);
  local_68 = local_58;
  local_60 = local_58;
  local_78[4] = (undefined8 **)0x0;
  local_78[5] = (undefined8 **)0x0;
  local_78[2] = (undefined8 **)0x0;
  local_78[3] = (undefined8 **)0x0;
  *local_78 = (undefined8 **)0x0;
  local_78[1] = (undefined8 **)0x0;
  lVar6 = local_40;
  lVar9 = local_38;
  do {
    lVar7 = lVar6;
    pppuVar8 = &local_78;
    if (local_50 < local_60) {
      pppuVar8 = (undefined8 ***)local_78;
    }
    *(byte *)((longlong)pppuVar8 + lVar9) =
         (char)lVar9 * '\x1f' + 0x5dU ^ (byte)(0xda89f9d1 >> ((byte)((int)lVar9 << 3) & 0x18)) ^ (&DAT_180219b70)[lVar9]
    ;
    lVar6 = local_40 + lVar7;
    lVar9 = lVar7;
  } while (lVar6 != local_48);
  local_29 = 0;
  FUN_1801b5d80(local_138,&local_78,&local_90);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x40);
  local_a8 = 0x37;
  uStack_a0 = 0x3f;
  local_b8 = puVar5;
  FUN_18013722e(&DAT_1802a4d40,&DAT_18028202d,0x17,0x38,&DAT_1802a4d78);
  *(ulonglong *)((longlong)puVar5 + 0x2f) = CONCAT71(DAT_1802a4d6f._1_7_,(undefined1)DAT_1802a4d6f);
  uVar1 = CONCAT17((undefined1)DAT_1802a4d6f,uRam00000001802a4d68);
  *(undefined8 *)(puVar5 + 8) = _DAT_1802a4d60;
  *(undefined8 *)(puVar5 + 10) = uVar1;
  uVar1 = uRam00000001802a4d58;
  *(undefined8 *)(puVar5 + 4) = _DAT_1802a4d50;
  *(undefined8 *)(puVar5 + 6) = uVar1;
  uVar4 = uRam00000001802a4d4c;
  uVar3 = uRam00000001802a4d48;
  uVar2 = uRam00000001802a4d44;
  *puVar5 = _DAT_1802a4d40;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)((longlong)puVar5 + 0x37) = 0;
  local_d0 = (undefined6)local_38;
  uStack_ca = (undefined2)((ulonglong)local_38 >> 0x30);
  local_c8 = 0xe;
  local_c0 = local_50;
  FUN_18013722e(&DAT_1802a4d7c,&DAT_18028208e,0x1c,0xf,&DAT_1802a4d8c);
  local_d0 = uRam00000001802a4d84;
  local_d8 = (undefined6)DAT_1802a4d7c;
  uStack_d2 = DAT_1802a4d7c._6_2_;
  local_29 = 0;
  FUN_18016c8e0(param_1,&local_d8,&local_b8,2,local_138);
  *param_1 = &PTR_FUN_180219b30;
  return param_1;
}



void Unwind_180137070(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(param_2 + 0x30);
  *(undefined1 *)(param_2 + 0x13f) = 0;
  return;
}



void Unwind_1801370a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x13f) == '\x01') {
    FUN_180131590(param_2 + 0xd8);
  }
  return;
}



undefined8 * FUN_1801370d0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x4f232170b78b9e64;
  local_50 = 0xb19a5b1d64148d7c;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x2802d7fb5bf194a9;
        if (uVar1 != 0xfeb97a6dd39f1318) break;
        *param_1 = &PTR_FUN_180217de0;
        FUN_18011a170(param_1 + 0xe);
        FUN_180106c90(param_1);
        local_48 = 0xafbc7a616131836b;
        if ((param_2 & 1) == 0) {
          local_48 = 0x8a9efbbc56623169;
        }
        local_50 = 0xd7c088486a9f9bc1;
      }
      if (uVar1 != 0x787cf2290bae18aa) break;
      thunk_FUN_1801f42e0(param_1,0xd0);
      local_48 = 0xe0c23aea222eb8ce;
      local_50 = 0xbd9c491e1ed31266;
    }
    local_48 = local_48 ^ 0x2802d7fb5bf194a9;
  } while (uVar1 != 0x5d5e73f43cfdaaa8);
  return param_1;
}



void FUN_18013722e(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x6d6ac3c3dba98b7a;
  local_68 = 0xb9eb97d91e8249dc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x7f441a7beee04e03;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x7f441a7beee04e03;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0x28f8f60f3a318ace) break;
          if (uVar1 == 0xd70709f0c5ce7532) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0xce7bbc58f9482cf1;
            if (local_54 == param_4) {
              local_60 = 0xaf99d397265c6b76;
            }
            local_68 = 0xee1d4a25e32da7e5;
          }
          else if (uVar1 == 0x2066f67d1a658b14) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x27f1f6e544dc7308;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x24a2206eedb2b7a8;
            }
            local_68 = 0xb27f12506d99b4fd;
          }
          else if (uVar1 == 0x418499b2c571cc93) {
            *param_5 = 1;
            local_60 = 0xd2dda56e775ed93e;
            local_68 = 0x79eed0ccf742484a;
          }
        }
        if (-0x54cc8a5d7fe36e8d < (longlong)uVar1) break;
        if (uVar1 == 0x958ee4b52945c7f5) {
          local_6b = -(local_6c - local_69 ^ local_6d);
          local_60 = 0x966dd5001c1d7190;
          local_68 = 0x416adcf0d9d304a2;
        }
        else if (uVar1 == 0x96dd323e802b0355) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x330748e5ea1bfe59;
          local_68 = 0xe40041152fd58b6b;
        }
      }
      if (uVar1 != 0xd481541ac52bc2a6) break;
      local_60 = 0x776baea84a857f3d;
      if (*param_5 == 1) {
        local_60 = 0xfc3e2d77d0fc655d;
      }
      local_68 = 0x570d58d550e0f429;
      local_54 = 0;
      local_6a = 0;
      local_48 = (int)param_3 + param_2;
    }
  } while (uVar1 != 0xab3375a2801c9174);
  return;
}



void FUN_1801374f0(longlong param_1)

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



void Unwind_180137630(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_180137660(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_28 = 0x29;
  local_20 = 0x2f;
  local_38 = puVar6;
  FUN_1801380dc(&DAT_1802a4da4,&DAT_18028228d,0x16,0x2a,&DAT_1802a4dd0);
  uVar1 = uRam00000001802a4dc5;
  *(ulonglong *)((longlong)puVar6 + 0x19) = CONCAT17(uRam00000001802a4dc4,_DAT_1802a4dbd);
  *(undefined8 *)((longlong)puVar6 + 0x21) = uVar1;
  uVar1 = CONCAT71(_DAT_1802a4dbd,uRam00000001802a4dbc);
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a4db4;
  *(undefined8 *)(puVar6 + 6) = uVar1;
  uVar4 = uRam00000001802a4db0;
  uVar3 = uRam00000001802a4dac;
  uVar2 = uRam00000001802a4da8;
  *puVar6 = _DAT_1802a4da4;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x29) = 0;
  FUN_180137890(&PTR_PTR_1802820f8,&local_38,lVar5 + 0x20b500,FUN_180137c70);
  return 1;
}



undefined1 FUN_180137760(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0xbb7e7cd25f89f1bb;
  local_68 = 0x3bf1409d7ae7475d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x1e597b0dfb027bf4;
        if (uVar1 != 0x808f3c4f256eb6e6) break;
        local_60 = 0xe2898e4f07f419e1;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x85ba6ac13fc25901;
        }
        local_68 = 0x454a94043d35997a;
        local_69 = 1;
      }
      if (uVar1 != 0xc0f0fec502f7c07b) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x7fefddf42b07ea7c;
      local_68 = 0xd82cc7bf11c66ae7;
    }
    local_60 = local_60 ^ 0x1e597b0dfb027bf4;
  } while (uVar1 != 0xa7c31a4b3ac1809b);
  return local_69;
}



ulonglong FUN_180137890(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 0xfff;
  local_58 = 0xf;
  local_88 = -8;
  local_50 = 4;
  local_80 = 0x20;
  local_78 = 1;
  local_39 = 0;
  local_70 = 0x28;
  local_48 = 0;
  local_4c = 0;
  local_68 = 4;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_180137c19;
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
    FUN_1801380dc(&DAT_1802a4dd4,&DAT_1802822dd,0x11,0x19,&DAT_1802a4df0);
    local_d8 = &DAT_1802a4dd4;
    local_d0 = 0x18;
    FUN_1801380dc(&DAT_1802a4df4,&DAT_18028231b,0x10,5,&DAT_1802a4dfc);
    local_c8 = &DAT_1802a4df4;
    local_c0 = local_68;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_180137bc7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180137c07;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1801380dc(&DAT_1802a4e00,&DAT_18028234b,0x1f,0x22,&DAT_1802a4e24);
      local_b8 = &DAT_1802a4e00;
      local_b0 = 0x21;
      FUN_1801380dc(&DAT_1802a4df4,&DAT_18028231b,0x10,5,&DAT_1802a4dfc);
      local_a8 = &DAT_1802a4df4;
      local_a0 = local_68;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180137bc7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180137c07;
  }
  lVar10 = *local_60;
  uVar13 = local_78 + uVar9;
  lVar11 = lVar10;
  if (local_90 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_80 <= (ulonglong)((lVar10 + local_88) - lVar11)) {
LAB_180137c19:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_70;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180137c07:
  return uVar12 & 0xffffffff;
}



void Unwind_180137c40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



undefined8 FUN_180137c70(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  char cVar2;
  SHORT SVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_48;

  local_60 = 0xd34fe5e4b7250c86;
  local_68 = 0xd49cb14642b5d395;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar4 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x78cfde70c85bb2b0;
          if (-0x1e4615c69f5cc61c < (longlong)uVar4) break;
          if (uVar4 == 0x83e6500a339cf36d) {
            local_60 = 0x75e7f33f4e8b57a2;
            if ((DAT_180282138 & 1) != 0) {
              local_60 = 0xbc45ea2999a21047;
            }
            local_68 = 0xfeea20e21fbd803d;
          }
          else if (uVar4 == 0x8765eface8c4c743) {
            uVar1 = *(undefined2 *)(param_1 + 0x48c);
            lVar5 = FUN_1801b2b70();
            (*(code *)(lVar5 + 0x207f10))(param_1,uVar1,param_1 + 0x500,param_3);
            local_60 = 0xbc7152d3d42d4159;
            local_68 = 0x5dc8b8eab48e78bc;
          }
          else {
            local_60 = local_60 ^ 0x78cfde70c85bb2b0;
            if (uVar4 == 0x8b0dd3dd5136d79f) {
              cVar2 = FUN_1801b3c30(param_1,0x528);
              local_60 = 0xab4ef7c6c4777e77;
              if (cVar2 != '\0') {
                local_60 = 0xcd92f2534c1080d1;
              }
              local_68 = 0x4af71dffa4d44792;
            }
          }
        }
        if (uVar4 != 0x7d354a2f590df13) break;
        local_48 = (*DAT_180282128)(param_1,param_2,param_3,param_4);
        local_60 = 0x4c5664fe8651047c;
        if ((DAT_1802a4d91 & 1) != 0) {
          local_60 = 0x2e09decdd56ecef4;
        }
        if (param_1 == 0) {
          local_60 = 0x4c5664fe8651047c;
        }
        if (param_3 == -1) {
          local_60 = 0x4c5664fe8651047c;
        }
        local_68 = 0xadef8ec7e6f23d99;
      }
      if (uVar4 != 0x42afcacb861f907a) break;
      SVar3 = GetAsyncKeyState(0x10);
      local_60 = 0xe99b3d0dc87a6d74;
      if (SVar3 < 0) {
        local_60 = 0x832f04e9f9ef830e;
      }
      local_68 = 0x822d734a8d95491;
    }
    local_60 = local_60 ^ 0x78cfde70c85bb2b0;
  } while (uVar4 != 0xe1b9ea3960a339e5);
  return local_48;
}



undefined8 FUN_180137f30(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x4974376dd8e58edf;
  local_50 = 0xd78fe1b170165165;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x7a074f1ff01a549f;
        if (uVar1 != 0x9efbd6dca8f3dfba) break;
        FUN_1801374f0(param_1);
        local_48 = 0xe4014b4fd186f988;
        if ((param_2 & 1) == 0) {
          local_48 = 0x4fc3b1917913e2a3;
        }
        local_50 = 0x5f6f16de42194890;
      }
      if (uVar1 != 0xbb6e5d91939fb118) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0x7c42948a063b4aee;
      local_50 = 0x6cee33c53d31e0dd;
    }
    local_48 = local_48 ^ 0x7a074f1ff01a549f;
  } while (uVar1 != 0x10aca74f3b0aaa33);
  return param_1;
}



void FUN_180138080(void)

{
  atexit((_func_5014 *)&LAB_180137650);
  FUN_1801380dc(&DAT_1802a4d92,&DAT_180282156,0x17,0xb,&DAT_1802a4da0);
  FUN_1800f0070(&DAT_1802a4d90,&DAT_1802a4d92,FUN_180137660);
  return;
}



void FUN_1801380dc(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x7e9a0a5a66e44c9b;
  local_68 = 0x5e2dfaa0af130f35;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x16bfb1d68b7810cd;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x16bfb1d68b7810cd;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x20b7f0fac9f743ae) break;
          if (uVar1 == 0x4cfdb8e7d050f67f) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x10f295ea934093c0;
            local_68 = 0x25efe2b33c65174d;
          }
          else if (uVar1 == 0x351d7759af25848d) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0x9b449d927beffd1f;
            if (local_54 == param_4) {
              local_60 = 0x8e8717fe3a8ef4de;
            }
            local_68 = 0x799fcec752b28476;
          }
          else if (uVar1 == 0x20b7f0fac9f743ae) {
            local_60 = 0x4b610df01ebeba81;
            if (*param_5 == 1) {
              local_60 = 0x6235407cdc51cb76;
            }
            local_68 = 0xa9ba5ea537e3c3e8;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0xddbe22e9f6d4f61) break;
        if (uVar1 == 0xf2241dd16092b09f) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x47f841dd37684039;
          local_68 = 0x72e53684984dc4b4;
        }
        else if (uVar1 == 0xf718d939683c70a8) {
          *param_5 = 1;
          local_60 = 0x855f8f83bbbb2d2e;
          local_68 = 0x4ed0915a500925b0;
        }
      }
      if (uVar1 != 0xe2db5355295d7969) break;
      local_69 = local_6a;
      local_4c = local_54;
      local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
      local_6c = *(char *)(local_48 + (int)local_54);
      local_60 = 0x74d2fbc267501b4a;
      if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
        local_60 = 0xca0b5ef4d7925daa;
      }
      local_68 = 0x382f4325b700ed35;
    }
  } while (uVar1 != 0xcb8f1ed9ebb2089e);
  return;
}



void FUN_180138390(longlong param_1)

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



void Unwind_1801384d0(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_180138500(void)

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
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x1d;
  local_20 = 0x1f;
  local_38 = puVar6;
  FUN_18013b53c(&DAT_1802a4f18,&DAT_1802836d1,0x1c,0x1e,&DAT_1802a4f38);
  uVar4 = uRam00000001802a4f2d;
  *(ulonglong *)((longlong)puVar6 + 0xd) = CONCAT53(uRam00000001802a4f28,_DAT_1802a4f25);
  *(undefined8 *)((longlong)puVar6 + 0x15) = uVar4;
  uVar3 = uRam00000001802a4f24;
  uVar2 = uRam00000001802a4f20;
  uVar1 = uRam00000001802a4f1c;
  *puVar6 = _DAT_1802a4f18;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  *(undefined1 *)((longlong)puVar6 + 0x1d) = 0;
  FUN_180139a10(&PTR_PTR_180283240,&local_38,lVar5 + 0x5afe00,FUN_180139df0);
  return 1;
}



undefined8 * FUN_180138600(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined **local_318;
  undefined8 *local_310;
  code *local_308;
  undefined ***local_2e0;
  undefined **local_2d8;
  undefined8 *local_2d0;
  undefined ***local_2a0;
  undefined **local_298;
  undefined8 *local_290;
  undefined ***local_260;
  undefined **local_258;
  undefined8 *local_250;
  undefined ***local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
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
  undefined4 local_128;
  undefined2 local_124;
  undefined8 local_122;
  undefined2 local_11a;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined8 local_102;
  undefined2 local_fa;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined3 uStack_e4;
  undefined1 local_e1;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined7 local_c3;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_5c = 0x40a00000;
  local_78 = 0x1f;
  local_a8 = 6;
  local_58 = 0xf;
  local_70 = 0;
  local_39 = 0;
  local_68 = 0x20;
  local_4c = 0;
  local_a0 = 0x19;
  local_200 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(0x20);
  local_1f8 = local_a0;
  local_1f0 = local_78;
  uVar9 = 1;
  local_208 = puVar4;
  FUN_18013b53c(&DAT_1802a4e38,&DAT_180283475,0x14,0x1a,&DAT_1802a4e54);
  uVar5 = uRam00000001802a4e49;
  *(ulonglong *)((longlong)puVar4 + 9) = CONCAT17(uRam00000001802a4e48,CONCAT43(uRam00000001802a4e44,_DAT_1802a4e41));
  *(undefined8 *)((longlong)puVar4 + 0x11) = uVar5;
  uVar3 = uRam00000001802a4e44;
  uVar2 = uRam00000001802a4e40;
  uVar10 = uRam00000001802a4e3c;
  *puVar4 = _DAT_1802a4e38;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)((longlong)puVar4 + 0x19) = local_39;
  local_1e0 = local_70;
  local_1d8 = 8;
  local_1d0 = local_58;
  local_1e8 = 0x726f6c6f43676f46;
  FUN_1801063a0(param_1,&local_1e8,&local_208,local_4c,CONCAT44(uVar9,local_4c));
  *param_1 = &PTR_FUN_180219e20;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_48 = param_1;
  local_1b8 = local_88;
  for (lVar6 = local_70; lVar6 != 0xc0; lVar6 = lVar6 + 0x18) {
    local_88 = local_1b8;
    FUN_18013b7f0(&DAT_1802a4ff0);
    FUN_180139fc0(&local_98,&DAT_1802a4ff0 + lVar6);
    local_1b8 = local_88;
  }
  local_88 = 0;
  local_1c8 = (undefined4)local_98;
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_1c4 = local_98._4_4_;
  uStack_1c0 = (undefined4)uStack_90;
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_1bc = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(0x30);
  local_198 = 0x2a;
  uStack_190 = 0x2f;
  local_1a8 = puVar4;
  FUN_18013b53c(&DAT_1802a4e58,&DAT_1802834b3,0x10,0x2b,&DAT_1802a4e84);
  uVar5 = uRam00000001802a4e7a;
  *(ulonglong *)((longlong)puVar4 + 0x1a) = CONCAT26(uRam00000001802a4e78,_DAT_1802a4e72);
  *(undefined8 *)((longlong)puVar4 + 0x22) = uVar5;
  uVar5 = CONCAT62(_DAT_1802a4e72,uRam00000001802a4e70);
  *(undefined8 *)(puVar4 + 4) = _DAT_1802a4e68;
  *(undefined8 *)(puVar4 + 6) = uVar5;
  uVar3 = uRam00000001802a4e64;
  uVar2 = uRam00000001802a4e60;
  uVar10 = uRam00000001802a4e5c;
  *puVar4 = _DAT_1802a4e58;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)((longlong)puVar4 + 0x2a) = local_39;
  local_118 = local_a8;
  local_110 = local_58;
  local_122 = 0;
  local_11a = 0;
  uVar10 = 1;
  FUN_18013b53c(&DAT_1802a4e88,&DAT_1802834ff,0x14,7,&DAT_1802a4e90);
  local_124 = DAT_1802a4e8c;
  local_128 = DAT_1802a4e88;
  uVar5 = FUN_180108620(local_48,&local_128,&local_1a8,&local_1c8,CONCAT44(uVar10,1));
  local_48[0xe] = uVar5;
  local_218 = 0x3e947ae13ef5c28f;
  uStack_210 = 0x3f8000003f59999a;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_68);
  local_178 = 0x11;
  uStack_170 = local_78;
  local_188 = puVar4;
  FUN_18013b53c(&DAT_1802a4e94,&DAT_180283532,0x12,0x12,&DAT_1802a4ea8);
  *(undefined1 *)(puVar4 + 4) = DAT_1802a4ea4;
  uVar3 = uRam00000001802a4ea0;
  uVar2 = uRam00000001802a4e9c;
  uVar10 = uRam00000001802a4e98;
  *puVar4 = _DAT_1802a4e94;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)((longlong)puVar4 + 0x11) = local_39;
  local_f8 = local_a8;
  local_f0 = local_58;
  local_102 = 0;
  local_fa = 0;
  FUN_18013b53c(&DAT_1802a4eac,&DAT_18028356a,0x16,7,&DAT_1802a4eb4);
  local_104 = DAT_1802a4eb0;
  local_108 = DAT_1802a4eac;
  lVar6 = FUN_1801089f0(local_48,&local_108,&local_188,&local_218);
  local_48[0xf] = lVar6;
  ppuVar8 = &PTR_FUN_180219e60;
  local_2d8 = &PTR_FUN_180219e60;
  local_2d0 = local_48;
  pppuVar7 = (undefined ***)(lVar6 + 0x50);
  local_2a0 = &local_2d8;
  if (pppuVar7 != &local_2d8) {
    pppuVar1 = *(undefined ****)(lVar6 + 0x88);
    if (pppuVar1 == (undefined ***)0x0) {
LAB_180138bc4:
      uVar5 = (*(code *)ppuVar8[1])(local_2a0,pppuVar7);
      *(undefined8 *)(lVar6 + 0x88) = uVar5;
      if (local_2a0 != (undefined ***)0x0) {
        (*(code *)(*local_2a0)[4])(local_2a0,local_2a0 != &local_2d8);
      }
    }
    else {
      (*(code *)(*pppuVar1)[4])(pppuVar1,pppuVar1 != pppuVar7);
      *(undefined8 *)(lVar6 + 0x88) = 0;
      if (local_2a0 != (undefined ***)0x0) {
        if (local_2a0 == &local_2d8) {
          ppuVar8 = *local_2a0;
          goto LAB_180138bc4;
        }
        *(undefined ****)(lVar6 + 0x88) = local_2a0;
      }
    }
  }
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_68);
  local_158 = 0x16;
  uStack_150 = local_78;
  local_168 = puVar4;
  FUN_18013b53c(&DAT_1802a4eb8,&DAT_1802835a4,0x12,0x17,&DAT_1802a4ed0);
  *(ulonglong *)((longlong)puVar4 + 0xe) = CONCAT62(DAT_1802a4ec6._2_6_,(undefined2)DAT_1802a4ec6);
  uVar3 = uRam00000001802a4ec0;
  uVar2 = uRam00000001802a4ebc;
  uVar10 = CONCAT22((undefined2)DAT_1802a4ec6,uRam00000001802a4ec4);
  *puVar4 = _DAT_1802a4eb8;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[3] = uVar10;
  *(undefined1 *)((longlong)puVar4 + 0x16) = local_39;
  local_e0 = local_70;
  local_d8 = 7;
  local_d0 = local_58;
  FUN_18013b53c(&DAT_1802a4ed4,&DAT_1802835e5,0x1c,8,&DAT_1802a4edc);
  uStack_e4 = uRam00000001802a4ed8;
  local_e8 = DAT_1802a4ed4;
  local_e1 = local_39;
  uVar5 = FUN_180107b80(local_48,&local_e8,&local_168,0);
  local_48[0x10] = uVar5;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (undefined4 *)0x0;
  uStack_140 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_68);
  local_138 = local_a0;
  uStack_130 = local_78;
  local_148 = puVar4;
  FUN_18013b53c(&DAT_1802a4ee0,&DAT_180283625,0x17,0x1a,&DAT_1802a4efc);
  uVar5 = uRam00000001802a4ef1;
  *(ulonglong *)((longlong)puVar4 + 9) = CONCAT17(uRam00000001802a4ef0,CONCAT43(uRam00000001802a4eec,_DAT_1802a4ee9));
  *(undefined8 *)((longlong)puVar4 + 0x11) = uVar5;
  uVar3 = uRam00000001802a4eec;
  uVar2 = uRam00000001802a4ee8;
  uVar10 = uRam00000001802a4ee4;
  *puVar4 = _DAT_1802a4ee0;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)((longlong)puVar4 + 0x19) = local_39;
  local_b8 = 5;
  local_b0 = local_58;
  local_c3 = 0;
  uStack_bc = 0;
  uVar10 = 1;
  FUN_18013b53c(&DAT_1802a4f00,&DAT_18028366b,0x17,6,&DAT_1802a4f08);
  local_c4 = DAT_1802a4f04;
  local_c8 = DAT_1802a4f00;
  lVar6 = FUN_180108270(local_48,&local_c8,&local_148,0x41f00000,CONCAT44(uVar10,local_5c),0x43340000,local_5c);
  local_48[0x11] = lVar6;
  ppuVar8 = &PTR_FUN_180219e90;
  local_298 = &PTR_FUN_180219e90;
  local_290 = local_48;
  local_260 = &local_298;
  pppuVar7 = (undefined ***)(lVar6 + 0x50);
  if (pppuVar7 != local_260) {
    pppuVar1 = *(undefined ****)(lVar6 + 0x88);
    if (pppuVar1 == (undefined ***)0x0) {
LAB_180138f0d:
      uVar5 = (*(code *)ppuVar8[1])(local_260,pppuVar7);
      *(undefined8 *)(lVar6 + 0x88) = uVar5;
      if (local_260 != (undefined ***)0x0) {
        (*(code *)(*local_260)[4])(local_260,local_260 != &local_298);
      }
    }
    else {
      (*(code *)(*pppuVar1)[4])(pppuVar1,pppuVar1 != pppuVar7);
      *(undefined8 *)(lVar6 + 0x88) = 0;
      if (local_260 != (undefined ***)0x0) {
        if (local_260 == &local_298) {
          ppuVar8 = *local_260;
          goto LAB_180138f0d;
        }
        *(undefined ****)(lVar6 + 0x88) = local_260;
      }
    }
  }
  lVar6 = local_48[0xe];
  ppuVar8 = &PTR_FUN_180219ec0;
  local_258 = &PTR_FUN_180219ec0;
  local_250 = local_48;
  local_220 = &local_258;
  pppuVar7 = (undefined ***)(lVar6 + 0x50);
  if (pppuVar7 == local_220) goto LAB_180138fe4;
  pppuVar1 = *(undefined ****)(lVar6 + 0x88);
  if (pppuVar1 != (undefined ***)0x0) {
    (*(code *)(*pppuVar1)[4])(pppuVar1,pppuVar1 != pppuVar7);
    *(undefined8 *)(lVar6 + 0x88) = 0;
    if (local_220 == (undefined ***)0x0) goto LAB_180138fe4;
    if (local_220 != &local_258) {
      *(undefined ****)(lVar6 + 0x88) = local_220;
      goto LAB_180138fe4;
    }
    ppuVar8 = *local_220;
  }
  uVar5 = (*(code *)ppuVar8[1])(local_220,pppuVar7);
  *(undefined8 *)(lVar6 + 0x88) = uVar5;
  if (local_220 != (undefined ***)0x0) {
    (*(code *)(*local_220)[4])(local_220,local_220 != &local_258);
  }
LAB_180138fe4:
  uVar5 = FUN_1800ba260();
  local_318 = &PTR_LAB_180219ef0;
  local_310 = local_48;
  local_308 = FUN_1801390d0;
  local_2e0 = &local_318;
  FUN_180121610(uVar5,local_48,local_2e0,local_4c);
  FUN_180078630(&local_98);
  return local_48;
}



void Unwind_180139050(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 400);
  return;
}



void Unwind_180139090(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0x2c0);
  FUN_180106c90(*(undefined8 *)(param_2 + 0x310));
  return;
}



void FUN_1801390d0(longlong param_1)

{
  undefined8 ***_Buf2;
  longlong lVar1;
  size_t _Size;
  int iVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8 [6];
  size_t local_90;
  undefined8 ***local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 extraout_XMM0_Qb;

  local_e0 = 0x9aeb11655ef2502;
  local_e8 = 0x5913d6e42d287ff4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            _Size = local_90;
            uVar7 = local_e0 ^ 0xb271682daf523218;
            uVar3 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0xb271682daf523218;
            local_e0 = uVar7;
            if ((longlong)uVar3 < 0x1224f6bc9f3fbb1a) break;
            if ((longlong)uVar3 < 0x50bd67f278c75af6) {
              if (uVar3 == 0x1224f6bc9f3fbb1a) {
                auVar9._0_8_ = FUN_1800eb440();
                auVar9._8_8_ = extraout_XMM0_Qb;
                auVar10._4_12_ = auVar9._4_12_;
                auVar10._0_4_ = (float)auVar9._0_8_ * *(float *)(*(longlong *)(param_1 + 0x88) + 0x90);
                FUN_1801ebe20(auVar10._0_8_);
                fVar8 = (float)FUN_1801ebe20();
                local_d0 = (float)((uint)(local_bc + fVar8) & -(uint)(fVar8 < local_d4) |
                                  ~-(uint)(fVar8 < local_d4) & (uint)fVar8);
                fVar8 = (float)FUN_1801ebe20(0x7dc10c59,0x40000000,local_d0 / local_b4);
                local_c8 = (1.0 - ABS(fVar8 + -1.0)) * local_ec;
                local_e0 = 0x12a193f2e2e01858;
                if (local_d0 < local_b4) {
                  local_e0 = 0xfcd26e4606d3768e;
                }
                local_e8 = 0x4802dac56e12a000;
                local_cc = local_ec;
                local_c4 = local_d4;
                local_c0 = local_c8;
              }
              else if (uVar3 == 0x4a1774e0f5348a21) {
                local_80 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x90);
                lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x98);
                lVar6 = local_80 * 0x20;
                local_88 = (undefined8 ****)(lVar1 + lVar6);
                local_e0 = 0xdc0911bc56dfba36;
                if (*(size_t *)(lVar1 + 0x10 + lVar6) == local_90) {
                  local_e0 = 0xb8ef5f67a6271bb7;
                }
                local_e8 = 0x56f6b5fbdb8df2a6;
              }
              else if (uVar3 == 0x50b512b95a539b04) {
                local_e0 = 0x28fe82b722cd9321;
                if (local_d0 < 180.0) {
                  local_e0 = 0xefd8212d7b7b747b;
                }
                local_cc = local_d4;
                local_c8 = local_ec;
                local_e8 = 0x5b0895ae13baa2f5;
                local_c4 = local_c0;
              }
            }
            else if (uVar3 == 0x73f61719317731d4) {
              local_e0 = 0xd3cfb4ba30c0dbbf;
              if (local_d0 < 240.0) {
                local_e0 = 0x6dd2f64f667c724d;
              }
              local_e8 = 0xd90242cc0ebda4c3;
              local_cc = local_d4;
              local_c8 = local_c0;
              local_c4 = local_ec;
            }
            else if (uVar3 == 0x5aa349378cf2b858) {
              local_e0 = 0xfc08fc07f3a8f9c3;
              if (local_d0 < 120.0) {
                local_e0 = 0x186d5a3dc13ab449;
              }
              local_e8 = 0xacbdeebea9fb62c7;
              local_cc = local_c0;
              local_c8 = local_ec;
              local_c4 = local_d4;
            }
            else if (uVar3 == 0x50bd67f278c75af6) {
              local_ec = 0.5525;
              local_d4 = 0.0;
              local_bc = 360.0;
              local_b4 = 60.0;
              local_90 = 6;
              local_a8[4] = 0.0;
              local_a8[5] = 0.0;
              local_a8[2] = 1.4013e-45;
              local_a8[3] = 0.0;
              local_e0 = 0x2bdd613a64a92faa;
              if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x90) != '\0') {
                local_e0 = 0x73eee3660ea21e91;
              }
              local_e8 = 0x61ca15da919da58b;
            }
          }
          uVar5 = (uint)local_a8._8_8_;
          if (-0x11e61563825516f0 < (longlong)uVar3) break;
          if (uVar3 == 0x8affa4478d524890) {
            FUN_18013b7f0(&DAT_1802a4ff0);
            local_b8 = *(float *)(&DAT_1802a4ff8 + local_80 * 0x18);
            local_b0 = *(undefined8 *)(&DAT_1802a4ffc + local_80 * 0x18);
            local_e0 = 0x6e087e4908d0924d;
            local_e8 = 0x9c9da165c7843fa0;
          }
          else if (uVar3 == 0xb4d0b48368c1d68e) {
            local_b8 = local_cc + 0.2975;
            local_a8[(uint)local_a8._16_8_ & 1] = local_c8;
            local_a8[uVar5 & 1] = local_c4;
            local_e0 = 0xcec20c64dcbb1824;
            local_e8 = 0x3c57d34813efb5c9;
            local_b0 = CONCAT44(SUB84(local_a8._0_8_,4) + 0.2975,(float)local_a8._0_8_ + 0.2975);
          }
          else if (uVar3 == 0xbe51d7fa0368a2b4) {
            local_b8 = *(float *)(*(longlong *)(param_1 + 0x78) + 0x90);
            local_b0 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x94);
            local_e0 = 0x5b2c4cfa4fdb3c9c;
            local_e8 = 0xa9b993d6808f9171;
          }
        }
        if (uVar3 != 0xee19ea9c7daae911) break;
        ppppuVar4 = (undefined8 ****)local_88;
        if (local_88[3] < (undefined8 ***)0x10) {
          ppppuVar4 = &local_88;
        }
        _Buf2 = *ppppuVar4;
        FUN_18013b53c(&DAT_1802a4f0c,&DAT_1802836a4,0x14,7,&DAT_1802a4f14);
        iVar2 = memcmp(&DAT_1802a4f0c,_Buf2,_Size);
        local_e0 = 0x5717705d65a96470;
        if (iVar2 == 0) {
          local_e0 = 0x63b903e0eb938e54;
        }
        local_e8 = 0xdde8d41ae8fb2ce0;
      }
      if (uVar3 != 0xacdf6763e7d7f7c) break;
      local_c4 = local_ec;
      if (300.0 <= local_d0) {
        local_c4 = local_c0;
      }
      local_cc = (float)(~-(uint)(local_d0 < 300.0) & (uint)local_ec | (uint)local_c0 & -(uint)(local_d0 < 300.0));
      local_e0 = 0x9c34f939bcb9c144;
      local_e8 = 0x28e44dbad47817ca;
      local_c8 = local_d4;
    }
  } while (uVar3 != 0xf295df2ccf54aded);
  DAT_180283280 = local_b8;
  local_78 = local_b0;
  uStack_70 = 0;
  DAT_180283284 = *(undefined4 *)((longlong)&local_78 + (ulonglong)((uint)local_a8._16_8_ & 3) * 4);
  DAT_180283288 = *(undefined4 *)((longlong)&local_78 + (ulonglong)(uVar5 & 3) * 4);
  DAT_1802a4e29 = 1;
  return;
}



undefined1 FUN_1801398e0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0xb74dfefe0ec3f225;
  local_68 = 0x14763dee496d805f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xfa79115185d948d9;
        if (uVar1 != 0x802084bf1343e661) break;
        local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        local_60 = 0x5a7d77772aa06e22;
        local_68 = 0x95285b659ac2d1a1;
      }
      if (uVar1 != 0xa33bc31047ae727a) break;
      local_60 = 0x48c531a43dcd99b4;
      if (*(char *)(param_1 + 0x38) != '\0') {
        local_60 = 0x7b099099eecc056;
      }
      local_68 = 0x87901db68daf2637;
      local_69 = 1;
    }
    local_60 = local_60 ^ 0xfa79115185d948d9;
  } while (uVar1 != 0xcf552c12b062bf83);
  return local_69;
}



ulonglong FUN_180139a10(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
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
  local_58 = 0xf;
  local_48 = 0;
  local_39 = 0;
  local_90 = 0x20;
  local_88 = 0xfff;
  local_80 = -8;
  local_50 = 0;
  local_78 = 4;
  local_70 = 1;
  local_68 = 0x28;
  local_4c = 4;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_180139d99;
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
    FUN_18013b53c(&DAT_1802a4f3c,&DAT_18028371b,0x15,0x19,&DAT_1802a4f58);
    local_d8 = &DAT_1802a4f3c;
    local_d0 = 0x18;
    FUN_18013b53c(&DAT_1802a4f5c,&DAT_18028375c,0x10,5,&DAT_1802a4f64);
    local_c8 = &DAT_1802a4f5c;
    local_c0 = local_78;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_180139d47:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180139d87;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_18013b53c(&DAT_1802a4f68,&DAT_180283785,0x19,0x22,&DAT_1802a4f8c);
      local_b8 = &DAT_1802a4f68;
      local_b0 = 0x21;
      FUN_18013b53c(&DAT_1802a4f5c,&DAT_18028375c,0x10,5,&DAT_1802a4f64);
      local_a8 = &DAT_1802a4f5c;
      local_a0 = local_78;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180139d47;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180139d87;
  }
  lVar10 = *local_60;
  uVar13 = local_70 + uVar9;
  lVar11 = lVar10;
  if (local_88 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_90 <= (ulonglong)((lVar10 + local_80) - lVar11)) {
LAB_180139d99:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_68;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180139d87:
  return uVar12 & 0xffffffff;
}



void Unwind_180139dc0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



undefined8 FUN_180139df0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x506980b6a795e813;
  local_58 = 0x35ceff12790beaed;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x3807e68d48a50302;
        if ((longlong)uVar2 < 0x65a77fa4de9e02fe) break;
        if (uVar2 == 0x75463bd1312e9ee1) {
          cVar1 = FUN_1801b3c30(param_1,0x3d8);
          local_50 = 0x3540157d26c85447;
          if (cVar1 != '\0') {
            local_50 = 0x92e73a8f033ed8a8;
          }
          local_58 = 0xf7c37c5bfc06c39b;
        }
        else {
          local_50 = local_50 ^ 0x3807e68d48a50302;
          if (uVar2 == 0x65a77fa4de9e02fe) {
            local_48 = (*DAT_180283270)(param_1,param_2,param_3,param_4);
            local_50 = 0xe63a3bf75576275f;
            if ((DAT_1802a4e29 & 1) != 0) {
              local_50 = 0x51ff6900be962e62;
            }
            local_58 = 0x24b952d18fb8b083;
          }
        }
      }
      if (uVar2 != 0x652446d4ff381b33) break;
      *(undefined4 *)(param_1 + 0x3c8) = DAT_180283280;
      *(undefined4 *)(param_1 + 0x3cc) = DAT_180283284;
      *(undefined4 *)(param_1 + 0x3d0) = DAT_180283288;
      local_50 = 0xc3e0f8645c612a8;
      local_58 = 0xcebd66a09f088574;
    }
    local_50 = local_50 ^ 0x3807e68d48a50302;
  } while (uVar2 != 0xc2836926dace97dc);
  return local_48;
}



longlong FUN_180139fc0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 *local_90;
  ulonglong local_88;
  undefined8 *local_80;
  longlong *local_68;
  char *local_60;

  local_c0 = 0x6ae5a0bcd4a7e5cb;
  local_c8 = 0x878f185ccf394465;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_c0 ^ 0xa0cf4dda6803ce42;
          uVar1 = local_c0 ^ local_c8;
          local_c8 = local_c8 ^ 0xa0cf4dda6803ce42;
          local_c0 = uVar3;
          if (0x1c6811fc9cf59edb < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x1295471fe4615e52) {
            if (uVar1 == 0xc9baaf7d1b2b834d) {
              *local_b8 = local_90;
              local_c0 = 0x2ca3014dbbf3683;
              local_c8 = 0x7353a6909b0e7f37;
              local_88 = local_b0;
              local_80 = local_90;
            }
            else if (uVar1 == 0xcb6437fd20abd8f6) {
              uVar1 = local_a8 | local_a0;
              local_b0 = 0x16;
              if (0x16 < uVar1) {
                local_b0 = uVar1;
              }
              local_c0 = 0x893757a5d5bb0e30;
              if (0xffe < uVar1) {
                local_c0 = 0x15a43b034ba0a65d;
              }
              local_c8 = 0x7e644f2005079a68;
            }
          }
          else if (uVar1 == 0xed6ab8e01b9ea1ae) {
            local_a0 = 0xf;
            local_b8 = *(undefined8 **)(param_1 + 8);
            local_c0 = 0xc94f3ff5a80603a7;
            if (local_b8 == *(undefined8 **)(param_1 + 0x10)) {
              local_c0 = 0x5e8f881b7e8f0205;
            }
            local_c8 = 0x263cdecd7c8bef2b;
            local_68 = (longlong *)(param_1 + 8);
          }
          else if (uVar1 == 0xef73e138d48dec8c) {
            local_60 = (char *)*param_2;
            local_b8[2] = 0;
            local_b8[3] = 0;
            *local_b8 = 0;
            local_b8[1] = 0;
            local_a8 = strlen(local_60);
            local_c0 = 0xc4cfa63b7230b48b;
            if ((longlong)local_a8 < 0) {
              local_c0 = 0xe742eb29ba6bbaff;
            }
            local_c8 = 0xfb2afad5269e2423;
          }
          else if (uVar1 == 0xf7531885d0bc9458) {
            local_90 = (undefined8 *)FUN_1801d61c8(local_b0 + 1);
            local_c0 = 0xcdffacdbb8622600;
            local_c8 = 0x44503a6a349a54d;
          }
        }
        if ((longlong)uVar1 < 0x6bc074234ea73c35) break;
        if (uVar1 == 0x6bc074234ea73c35) {
          lVar2 = FUN_1801d61c8(local_b0 + 0x28);
          local_90 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
          local_90[-1] = lVar2;
          local_c0 = 0x3aa916bfa85c5ea5;
          local_c8 = 0xf313b9c2b377dde8;
        }
        else if (uVar1 == 0x7199968440b149b4) {
          local_b8[2] = local_a8;
          local_b8[3] = local_88;
          FUN_1802079d0(local_80,local_60,local_a8);
          *(undefined1 *)((longlong)local_80 + local_a8) = 0;
          local_98 = *local_68;
          *local_68 = local_98 + 0x20;
          local_c0 = 0xcc0bfb5c5aea6f5c;
          local_c8 = 0xaa4bd30ef4acd0d7;
        }
        else if (uVar1 == 0x78b356d60204ed2e) {
          local_98 = FUN_18013a4e0(param_1,local_b8,param_2);
          local_c0 = 0x26eda4dc43fd0163;
          local_c8 = 0x40ad8c8eedbbbee8;
        }
      }
      if (uVar1 != 0x3fe55cee54ae90a8) break;
      local_88 = local_a0;
      local_c0 = 0xcc3c2e9a4cf07629;
      if (local_a8 < 0x10) {
        local_c0 = 0x76c18fe32ceae76b;
      }
      local_c8 = 0x75819676c5baedf;
      local_80 = local_b8;
    }
    if (uVar1 == 0x66402852ae46bf8b) break;
    if (uVar1 == 0x1c6811fc9cf59edc) {
      FUN_180002ac0();
    }
  }
  return local_98;
}



ulonglong * FUN_18013a4e0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  size_t sVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong *local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  char *local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_68 = 0x7ffffffffffffff;
  local_80 = 5;
  local_60 = 0xf;
  local_58 = 0;
  local_78 = 0x27;
  local_49 = 0;
  local_88 = 0xffffffffffffffe0;
  local_70 = 1;
  lVar14 = *param_1;
  uVar12 = (param_1[1] - lVar14 >> 5) + 1;
  uVar6 = param_1[2] - lVar14 >> 5;
  uVar9 = (uVar6 >> 1) + uVar6;
  if (uVar9 <= uVar12) {
    uVar9 = uVar12;
  }
  if (0x7ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar9 = 0x7ffffffffffffff;
  }
  if (0x7ffffffffffffff < uVar9) {
LAB_18013a8e3:
    std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
  }
  local_a8 = uVar12;
  if (uVar9 == 0) {
    puVar16 = (ulonglong *)0x0;
  }
  else if (uVar9 < 0x80) {
    puVar16 = (ulonglong *)FUN_1801d61c8(uVar9 * 0x20);
  }
  else {
    if (uVar9 == 0x7ffffffffffffff) goto LAB_18013a8e3;
    uVar6 = FUN_1801d61c8(uVar9 * 0x20 + 0x27);
    puVar16 = (ulonglong *)(local_78 + uVar6 & local_88);
    puVar16[-1] = uVar6;
  }
  lVar14 = param_2 - lVar14;
  lVar10 = (longlong)puVar16 + lVar14 + 0x20;
  local_98 = (char *)*param_3;
  puVar2 = (undefined8 *)((longlong)puVar16 + lVar14 + 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar16 + lVar14) = 0;
  ((undefined8 *)((longlong)puVar16 + lVar14))[1] = 0;
  local_d0 = param_1;
  local_c8 = puVar16;
  local_c0 = uVar9;
  local_b8 = (ulonglong *)lVar10;
  local_b0 = lVar10;
  local_a0 = param_1;
  sVar7 = strlen(local_98);
  if ((longlong)sVar7 < local_58) {
    FUN_180002ac0();
  }
  puVar15 = (ulonglong *)(lVar14 + (longlong)puVar16);
  uVar6 = local_60;
  puVar13 = puVar15;
  if (0xf < sVar7) {
    uVar6 = local_60 | sVar7;
    local_90 = 0x16;
    if (0x16 < uVar6) {
      local_90 = uVar6;
    }
    if (uVar6 < 0xfff) {
      puVar13 = (ulonglong *)FUN_1801d61c8(local_70 + local_90);
    }
    else {
      uVar6 = FUN_1801d61c8(local_90 + 0x28);
      puVar13 = (ulonglong *)(local_78 + uVar6 & local_88);
      puVar13[-1] = uVar6;
    }
    *puVar15 = (ulonglong)puVar13;
    uVar6 = local_90;
  }
  puVar15[2] = sVar7;
  puVar15[3] = uVar6;
  FUN_1802079d0(puVar13,local_98,sVar7);
  *(undefined1 *)((longlong)puVar13 + sVar7) = local_49;
  lVar8 = *local_a0;
  lVar11 = local_a0[1];
  if (param_2 == lVar11) {
    local_b8 = puVar15;
    if (lVar8 != param_2) {
      lVar14 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar16 + lVar14 + 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)((longlong)puVar16 + lVar14) = 0;
        ((undefined8 *)((longlong)puVar16 + lVar14))[1] = 0;
        uVar3 = ((undefined8 *)(lVar8 + lVar14))[1];
        puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar14);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        *(undefined8 *)((longlong)puVar16 + lVar14) = *(undefined8 *)(lVar8 + lVar14);
        ((undefined8 *)((longlong)puVar16 + lVar14))[1] = uVar3;
        puVar2 = (undefined8 *)((longlong)puVar16 + lVar14 + 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        *(longlong *)(lVar8 + 0x10 + lVar14) = local_58;
        *(ulonglong *)(lVar8 + 0x18 + lVar14) = local_60;
        *(undefined1 *)(lVar8 + lVar14) = local_49;
        lVar10 = lVar8 + lVar14;
        lVar14 = lVar14 + 0x20;
      } while (lVar10 + 0x20 != param_2);
    }
  }
  else {
    if (lVar8 != param_2) {
      lVar11 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar16 + lVar11 + 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)((longlong)puVar16 + lVar11) = 0;
        ((undefined8 *)((longlong)puVar16 + lVar11))[1] = 0;
        uVar3 = ((undefined8 *)(lVar8 + lVar11))[1];
        puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar11);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        *(undefined8 *)((longlong)puVar16 + lVar11) = *(undefined8 *)(lVar8 + lVar11);
        ((undefined8 *)((longlong)puVar16 + lVar11))[1] = uVar3;
        puVar2 = (undefined8 *)((longlong)puVar16 + lVar11 + 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        *(longlong *)(lVar8 + 0x10 + lVar11) = local_58;
        *(ulonglong *)(lVar8 + 0x18 + lVar11) = local_60;
        *(undefined1 *)(lVar8 + lVar11) = local_49;
        lVar1 = lVar8 + lVar11;
        lVar11 = lVar11 + 0x20;
      } while (lVar1 + 0x20 != param_2);
      lVar11 = local_a0[1];
    }
    local_b8 = puVar16;
    if (param_2 != lVar11) {
      lVar8 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar16 + lVar8 + lVar14 + 0x30);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar10 + lVar8) = 0;
        ((undefined8 *)(lVar10 + lVar8))[1] = 0;
        uVar3 = ((undefined8 *)(param_2 + lVar8))[1];
        puVar2 = (undefined8 *)(param_2 + 0x10 + lVar8);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        *(undefined8 *)(lVar10 + lVar8) = *(undefined8 *)(param_2 + lVar8);
        ((undefined8 *)(lVar10 + lVar8))[1] = uVar3;
        puVar2 = (undefined8 *)((longlong)puVar16 + lVar8 + lVar14 + 0x30);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        *(longlong *)(param_2 + 0x10 + lVar8) = local_58;
        *(ulonglong *)(param_2 + 0x18 + lVar8) = local_60;
        *(undefined1 *)(param_2 + lVar8) = local_49;
        lVar1 = param_2 + lVar8;
        lVar8 = lVar8 + 0x20;
      } while (lVar1 + 0x20 != lVar11);
    }
  }
  local_c8 = (ulonglong *)0x0;
  FUN_180072130(local_a0,puVar16,local_a8,uVar9);
  FUN_1800728a0(&local_d0);
  return puVar15;
}



void Unwind_18013a8f0(undefined8 param_1,longlong param_2)

{
  FUN_1800728a0(param_2 + 0x28);
  return;
}



void FUN_18013a930(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_180219e60;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



byte FUN_18013a950(longlong param_1)

{
  undefined8 **_Buf2;
  longlong lVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  size_t local_58;
  undefined8 **local_50;
  longlong local_48;

  local_60 = 0x3c2ba7bb610ee40f;
  local_68 = 0x7ad727e3afab632b;
  do {
    while( true ) {
      uVar4 = local_60 ^ local_68;
      local_68 = local_68 ^ 0xb21052ff44930e4c;
      if (0x46fc8058cea58723 < (longlong)uVar4) break;
      if (uVar4 == 0xeb7cc62c0939d920) {
        pppuVar3 = (undefined8 ***)local_50;
        if (local_50[3] < (undefined8 **)0x10) {
          pppuVar3 = &local_50;
        }
        _Buf2 = *pppuVar3;
        FUN_18013b53c(&DAT_1802a4f0c,&DAT_1802836a4,0x14,7,&DAT_1802a4f14);
        iVar2 = memcmp(&DAT_1802a4f0c,_Buf2,local_58);
        local_60 = 0x66d5b015d32a7210;
        if (iVar2 == 0) {
          local_60 = 0x4e879cddb32e0383;
        }
        local_68 = 0xf003059149be80b;
LAB_18013aa59:
        local_69 = 0;
      }
      else {
        local_60 = local_60 ^ 0xb21052ff44930e4c;
        if (uVar4 == 0x4187ac84a7b5eb88) {
          local_60 = 0x83f76f5ab743a396;
          local_68 = 0xea22ef1670f2398d;
          local_69 = *(byte *)(*(longlong *)(local_48 + 0x80) + 0x90) ^ 1;
        }
      }
    }
    if (uVar4 == 0x46fc8058cea58724) {
      local_58 = 6;
      local_48 = *(longlong *)(param_1 + 8);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
      lVar1 = *(longlong *)(lVar5 + 0x98);
      lVar5 = (longlong)*(int *)(lVar5 + 0x90) * 0x20;
      local_50 = (undefined8 ***)(lVar1 + lVar5);
      local_60 = 0x68ab681e1958c537;
      if (*(longlong *)(lVar1 + 0x10 + lVar5) == 6) {
        local_60 = 0xea022e7ed7d0860c;
      }
      local_68 = 0x17ee852dee95f2c;
      goto LAB_18013aa59;
    }
    local_60 = local_60 ^ 0xb21052ff44930e4c;
    if (uVar4 == 0x69d5804cc7b19a1b) {
      return local_69;
    }
  } while( true );
}



void FUN_18013aba0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x1d9886ee2446d978;
  local_50 = 0xe20e4be25a4e1ef0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xcb3291ea755d6416;
        if (uVar1 != 0x85e5ea0dbb1d6a5e) break;
        thunk_FUN_1801f42e0(param_1,0x10);
        local_48 = 0xd058ccd0fe7dc76e;
        local_50 = 0x9e31a3c194013270;
      }
      if (uVar1 != 0xff96cd0c7e08c788) break;
      local_48 = 0x3c5395c572835b3d;
      if (param_2 != '\0') {
        local_48 = 0xf7df10d9a3e2c47d;
      }
      local_50 = 0x723afad418ffae23;
    }
    local_48 = local_48 ^ 0xcb3291ea755d6416;
  } while (uVar1 != 0x4e696f116a7cf51e);
  return;
}



void FUN_18013acc0(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_180219e90;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



void FUN_18013ad10(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x4a2d6a651e835a2e;
  local_50 = 0xcbc7b2a617637f35;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xdcdc686bcd87c3a1;
        if (uVar1 != 0x81ead8c309e0251b) break;
        local_48 = 0x53799911cebf5302;
        if (param_2 != '\0') {
          local_48 = 0xed6ef3a57db74a34;
        }
        local_50 = 0x2257f094987c33cc;
      }
      if (uVar1 != 0xcf390331e5cb79f8) break;
      thunk_FUN_1801f42e0(param_1,0x10);
      local_48 = 0xe6a948248c709f50;
      local_50 = 0x978721a1dab3ff9e;
    }
    local_48 = local_48 ^ 0xdcdc686bcd87c3a1;
  } while (uVar1 != 0x712e698556c360ce);
  return;
}



void FUN_18013ae40(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_180219ec0;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



void FUN_18013ae90(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xcf71097d61529552;
  local_50 = 0x5a18f4dedc92848;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc68a852c2222a17;
        if (uVar1 != 0xcad086308c9bbd1a) break;
        local_48 = 0xd0f758e981aa52fd;
        if (param_2 != '\0') {
          local_48 = 0xc8dec724d56883cf;
        }
        local_50 = 0x28386e3ff1a79108;
      }
      if (uVar1 != 0xe0e6a91b24cf12c7) break;
      thunk_FUN_1801f42e0(param_1,0x10);
      local_48 = 0x10b8fa367374243b;
      local_50 = 0xe877cce00379e7ce;
    }
    local_48 = local_48 ^ 0xc68a852c2222a17;
  } while (uVar1 != 0xf8cf36d6700dc3f5);
  return;
}



void FUN_18013afe0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x8c7a378ad93088ea;
  local_58 = 0xde41ed12af8cc6b4;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xa48dbafcc8825670;
        if (uVar1 != 0xf41a100292c4a663) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0x43d3f2ae7c0f1dac;
        local_58 = 0x75e390ea181fff9f;
      }
      if (uVar1 != 0x523bda9876bc4e5e) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0x86de75a779729da3;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x44f407e18fa6d9f3;
      }
      local_58 = 0xb0ee17e31d627f90;
    }
    local_50 = local_50 ^ 0xa48dbafcc8825670;
  } while (uVar1 != 0x363062446410e233);
  return;
}



void FUN_18013b110(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x74e1e39c889d6cf3;
  local_50 = 0xed40ec4d6b7a674f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xa9fd423aa8a9b89f;
        if (uVar1 != 0x99a10fd1e3e70bbc) break;
        local_48 = 0x34abf31d91f0349;
        if (param_2 != '\0') {
          local_48 = 0x9df44631894cabe7;
        }
        local_50 = 0x2574e7a99a168421;
      }
      if (uVar1 != 0xb880a198135a2fc6) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0x6c8b56adc1e7c237;
      local_50 = 0x4ab50e3582ee455f;
    }
    local_48 = local_48 ^ 0xa9fd423aa8a9b89f;
  } while (uVar1 != 0x263e589843098768);
  return;
}



undefined8 FUN_18013b240(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xf79acc0a4a2e3b5;
  local_50 = 0xc038183e8b2913fa;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xbed5038fa5026f3c;
        if (uVar1 != 0xcf41b4fe2f8bf04f) break;
        FUN_180138390(param_1);
        local_48 = 0x6473185cb850703d;
        if ((param_2 & 1) == 0) {
          local_48 = 0xfb097d8cacbb0e55;
        }
        local_50 = 0x22d83778921597b5;
      }
      if (uVar1 != 0x46ab2f242a45e788) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0xc6183c65457d7bec;
      local_50 = 0x1fc976917bd3e20c;
    }
    local_48 = local_48 ^ 0xbed5038fa5026f3c;
  } while (uVar1 != 0xd9d14af43eae99e0);
  return param_1;
}



undefined8 FUN_18013b390(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x6ee332370c497f86;
  local_50 = 0xe816c385a02ea0b6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x6cde915552814d74;
        if (uVar1 != 0x86f5f1b2ac67df30) break;
        FUN_180106c90(param_1);
        local_48 = 0xe72f4c1ee16bf6f9;
        if ((param_2 & 1) == 0) {
          local_48 = 0xc031eb3e345d93f8;
        }
        local_50 = 0x16471e50c53c9b3d;
      }
      if (uVar1 != 0xf168524e24576dc4) break;
      thunk_FUN_1801f42e0(param_1,0x90);
      local_48 = 0x6073c4e14638a03f;
      local_50 = 0xb605318fb759a8fa;
    }
    local_48 = local_48 ^ 0x6cde915552814d74;
  } while (uVar1 != 0xd676f56ef16108c5);
  return param_1;
}



void FUN_18013b4e0(void)

{
  atexit((_func_5014 *)&LAB_1801384f0);
  FUN_18013b53c(&DAT_1802a4e2a,&DAT_180283431,0x1d,9,&DAT_1802a4e34);
  FUN_1800f0070(&DAT_1802a4e28,&DAT_1802a4e2a,FUN_180138500);
  return;
}



void FUN_18013b53c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x70575c13e1c5ce1b;
  local_68 = 0x4826de7d2597d55e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xe44734887bea2dce;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xe44734887bea2dce;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x2e65a8984078fccb) break;
          if (uVar1 == 0x2e65a8984078fccb) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xba6e7bb30fe06111;
            local_68 = 0xdec98f738335d8e2;
          }
          else if (uVar1 == 0x64a7f4c08cd5b9f3) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0xf9d3ce5a0e8f11a;
            if (local_54 == param_4) {
              local_60 = 0x1dd3723af8834640;
            }
            local_68 = 0x8c26ebcfdf03cd9c;
          }
          else if (uVar1 == 0x3871826ec4521b45) {
            local_60 = 0x1e9265e392a56e1a;
            if (*param_5 == 1) {
              local_60 = 0x438ecdb28bf4b0a5;
            }
            local_68 = 0x9d29b2c9ed4e529c;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if (-0x2158808499451dc8 < (longlong)uVar1) break;
        if (uVar1 == 0x83bbd72a7feb3c86) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0xd347fa874c9d5455;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xeadfde6bc7f1737d;
          }
          local_68 = 0xc4ba76f387898fb6;
        }
        else if (uVar1 == 0x91f599f527808bdc) {
          *param_5 = 1;
          local_60 = 0xc5cc61544ed19c51;
          local_68 = 0x1b6b1e2f286b7e68;
        }
      }
      if (uVar1 != 0x17fd8c74cb14dbe3) break;
      local_6a = -(local_6c - local_69 ^ local_6d);
      local_60 = 0xa810fb29d6c80a3b;
      local_68 = 0xccb70fe95a1db3c8;
    }
  } while (uVar1 != 0xdea77f7b66bae239);
  return;
}



void FUN_18013b7f0(void)

{
  ulonglong uVar1;
  ulonglong local_d8;
  ulonglong local_d0;

  local_d0 = 0xadef25c8d16b73db;
  local_d8 = 0x287214582168a84d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_d0 ^ local_d8;
        local_d8 = local_d8 ^ 0xc8306a869a4c6ac8;
        if (uVar1 != 0x859d3190f003db96) break;
        local_d0 = 0x44c2d5e1ec19e593;
        if (DAT_1802a50b0 == 1) {
          local_d0 = 0xd593a7caa4e4d030;
        }
        local_d8 = 0xaa0e05a0a61dcc13;
      }
      if (uVar1 != 0xeeccd0414a042980) break;
      FUN_18013b53c(&DAT_1802a4f0c,&DAT_1802836a4,0x14,7,&DAT_1802a4f14);
      _DAT_1802a4ff0 = &DAT_1802a4f0c;
      _DAT_1802a4ff8 = 0x3f0c8c8d3ed8d8d9;
      uRam00000001802a5000 = 0x3f8000003f800000;
      FUN_18013b53c(&DAT_1802a4f90,&DAT_1802846e4,0x19,7,&DAT_1802a4f98);
      _DAT_1802a5008 = &DAT_1802a4f90;
      _DAT_1802a5010 = 0x3e9696973ef6f6f7;
      uRam00000001802a5018 = 0x3f8000003f58d8d9;
      FUN_18013b53c(&DAT_1802a4f9c,&DAT_18028471c,0x14,6,&DAT_1802a4fa4);
      _DAT_1802a5020 = &DAT_1802a4f9c;
      _DAT_1802a5028 = 0x3dd8d8d93f0c8c8d;
      uRam00000001802a5030 = 0x3f8000003dd8d8d9;
      FUN_18013b53c(&DAT_1802a4fa8,&DAT_180284752,0x17,6,&DAT_1802a4fb0);
      _DAT_1802a5038 = &DAT_1802a4fa8;
      _DAT_1802a5040 = 0x3ed6d6d73dd8d8d9;
      uRam00000001802a5048 = 0x3f8000003f0c8c8d;
      FUN_18013b53c(&DAT_1802a4fb4,&DAT_180284781,0x19,5,&DAT_1802a4fbc);
      _DAT_1802a5050 = &DAT_1802a4fb4;
      _DAT_1802a5058 = 0x3d20a0a13d20a0a1;
      uRam00000001802a5060 = 0x3f8000003d909091;
      FUN_18013b53c(&DAT_1802a4fc0,&DAT_1802847b3,0x11,7,&DAT_1802a4fc8);
      _DAT_1802a5068 = &DAT_1802a4fc0;
      _DAT_1802a5070 = 0x3ee6e6e73f60e0e1;
      uRam00000001802a5078 = 0x3f8000003e68e8e9;
      FUN_18013b53c(&DAT_1802a4fcc,&DAT_1802847e8,0x1a,6,&DAT_1802a4fd4);
      _DAT_1802a5080 = &DAT_1802a4fcc;
      _DAT_1802a5088 = 0x3f58d8d93e969697;
      uRam00000001802a5090 = 0x3f8000003e969697;
      FUN_18013b53c(&DAT_1802a4fd8,&DAT_180284823,0x1d,6,&DAT_1802a4fe0);
      _DAT_1802a5098 = &DAT_1802a4fd8;
      _DAT_1802a50a0 = 0x3f6ceced3f68e8e9;
      uRam00000001802a50a8 = 0x3f8000003f75f5f6;
      DAT_1802a50b0 = 1;
      local_d0 = 0xacec267d1f32f928;
      local_d8 = 0xd37184171dcbe50b;
    }
    local_d0 = local_d0 ^ 0xc8306a869a4c6ac8;
  } while (uVar1 != 0x7f9da26a02f91c23);
  return;
}



void FUN_18013bbc0(longlong param_1)

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



void Unwind_18013bd00(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_18013bd30(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_50 = 0;
  local_48 = 0xc;
  local_40 = 0xf;
  FUN_18013e618(&DAT_1802a51e0,&DAT_180284bcd,0x17,0xd,&DAT_1802a51f0);
  local_50 = CONCAT44(local_50._4_4_,DAT_1802a51e8);
  local_58 = DAT_1802a51e0;
  FUN_1800ef070(&PTR_PTR_180284848,&local_58,lVar5 + 0x9c2020,FUN_18013d8a0);
  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_28 = 0x27;
  local_20 = 0x2f;
  local_38 = puVar6;
  FUN_18013e618(&DAT_1802a51f4,&DAT_180284c0a,0x12,0x28,&DAT_1802a521c);
  *(ulonglong *)((longlong)puVar6 + 0x1f) = CONCAT71(DAT_1802a5213._1_7_,(undefined1)DAT_1802a5213);
  uVar1 = CONCAT17((undefined1)DAT_1802a5213,uRam00000001802a520c);
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a5204;
  *(undefined8 *)(puVar6 + 6) = uVar1;
  uVar4 = uRam00000001802a5200;
  uVar3 = uRam00000001802a51fc;
  uVar2 = uRam00000001802a51f8;
  *puVar6 = _DAT_1802a51f4;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x27) = 0;
  FUN_18013dac0(&PTR_PTR_180284888,&local_38,lVar5 + 0x5ba7e0,FUN_18013dea0);
  return 1;
}



undefined8 * FUN_18013bef0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  uintptr_t local_190;
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined7 local_158;
  undefined4 uStack_151;
  undefined5 uStack_14d;
  undefined8 local_148;
  ulonglong local_140;
  undefined4 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *local_d8;
  undefined ***local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined **local_b8;
  undefined8 *local_b0;
  code *local_a8;
  ulonglong local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  uintptr_t local_88;
  undefined ***pppuStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 *local_50;
  uintptr_t local_48;
  ulonglong local_40;
  uint local_38;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_78 = 1;
  local_70 = 0x28;
  local_38 = 0;
  local_58 = 0x20;
  local_68 = -8;
  local_31 = 0;
  local_c8 = 0x3f;
  local_c0 = 0x1f;
  local_40 = 0xf;
  local_48 = 0;
  local_60 = 0xfff;
  local_1b0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x50);
  local_1a8 = 0x44;
  local_1a0 = 0x4f;
  uVar7 = 1;
  local_1b8 = puVar3;
  FUN_18013e618(&DAT_1802a50e4,&DAT_1802849b2,0x1c,0x45,&DAT_1802a512c);
  puVar3[0x10] = DAT_1802a5124;
  uVar4 = uRam00000001802a511c;
  *(undefined8 *)(puVar3 + 0xc) = _DAT_1802a5114;
  *(undefined8 *)(puVar3 + 0xe) = uVar4;
  uVar4 = uRam00000001802a510c;
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a5104;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a50fc;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a50f4;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a50f0;
  uVar1 = uRam00000001802a50ec;
  uVar8 = uRam00000001802a50e8;
  *puVar3 = _DAT_1802a50e4;
  puVar3[1] = uVar8;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 0x11) = local_31;
  local_190 = local_48;
  local_188 = 8;
  local_180 = local_40;
  local_198 = 0x6b6f6f4c65657246;
  FUN_1801063a0(param_1,&local_198,&local_1b8,local_38,CONCAT44(uVar7,local_38));
  *param_1 = &PTR_FUN_18021a240;
  local_138 = (undefined4 *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_50 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x40);
  local_128 = local_c8;
  uStack_120 = local_c8;
  local_138 = puVar3;
  FUN_18013e618(&DAT_1802a5130,&DAT_180284a23,0x1c,0x40,&DAT_1802a5170);
  uVar4 = uRam00000001802a5167;
  *(ulonglong *)((longlong)puVar3 + 0x2f) = CONCAT71(uRam00000001802a5160,DAT_1802a515f);
  *(undefined8 *)((longlong)puVar3 + 0x37) = uVar4;
  uVar4 = CONCAT17(DAT_1802a515f,uRam00000001802a5158);
  *(undefined8 *)(puVar3 + 8) = _DAT_1802a5150;
  *(undefined8 *)(puVar3 + 10) = uVar4;
  uVar4 = uRam00000001802a5148;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a5140;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  uVar2 = uRam00000001802a513c;
  uVar1 = uRam00000001802a5138;
  uVar8 = uRam00000001802a5134;
  *puVar3 = _DAT_1802a5130;
  puVar3[1] = uVar8;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x3f) = local_31;
  uStack_170 = 0;
  local_168 = 4;
  local_160 = local_40;
  local_178 = 0x646c6f48;
  uVar4 = FUN_180107b80(local_50,&local_178,&local_138,1);
  local_50[0xe] = uVar4;
  local_b0 = (undefined8 *)local_48;
  local_a8 = (code *)0xc;
  local_a0 = local_40;
  FUN_18013e618(&DAT_1802a5174,&DAT_180284a92,0x18,0xd,&DAT_1802a5184);
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,DAT_1802a517c);
  local_b8 = DAT_1802a5174;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  pppuStack_80 = (undefined ***)0x0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_58);
  local_88 = 0x14;
  pppuStack_80 = (undefined ***)local_c0;
  local_98 = puVar3;
  FUN_18013e618(&DAT_1802a5188,&DAT_180284ac8,0x18,0x15,&DAT_1802a51a0);
  puVar3[4] = DAT_1802a5198;
  uVar2 = uRam00000001802a5194;
  uVar1 = uRam00000001802a5190;
  uVar8 = uRam00000001802a518c;
  *puVar3 = _DAT_1802a5188;
  puVar3[1] = uVar8;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 5) = local_31;
  local_d8 = &local_78;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_d0 = &local_b8;
  FUN_180124b20(&local_f8,2,&local_d0,&local_d8);
  local_118 = (undefined4 *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_58);
  local_108 = 0x19;
  uStack_100 = local_c0;
  local_118 = puVar3;
  FUN_18013e618(&DAT_1802a51a4,&DAT_180284b0d,0x19,0x1a,&DAT_1802a51c0);
  uVar4 = uRam00000001802a51b5;
  *(ulonglong *)((longlong)puVar3 + 9) = CONCAT17(uRam00000001802a51b4,CONCAT43(uRam00000001802a51b0,_DAT_1802a51ad));
  *(undefined8 *)((longlong)puVar3 + 0x11) = uVar4;
  uVar2 = uRam00000001802a51b0;
  uVar1 = uRam00000001802a51ac;
  uVar8 = uRam00000001802a51a8;
  *puVar3 = _DAT_1802a51a4;
  puVar3[1] = uVar8;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x19) = local_31;
  uStack_151._1_3_ = (undefined3)local_48;
  uStack_14d = (undefined5)(local_48 >> 0x18);
  local_148 = 0xb;
  local_140 = local_40;
  uVar8 = 1;
  FUN_18013e618(&DAT_1802a51c4,&DAT_180284b5f,0x10,0xc,&DAT_1802a51d0);
  local_158 = (undefined7)DAT_1802a51c4;
  uStack_151 = ram0x0001802a51cb;
  uVar4 = FUN_180108620(local_50,&local_158,&local_118,&local_f8,CONCAT44(uVar8,local_38));
  local_50[0xf] = uVar4;
  if (local_40 < pppuStack_80) {
    uVar6 = local_78 + (longlong)pppuStack_80;
    puVar3 = local_98;
    if (local_60 < uVar6) {
      puVar3 = *(undefined4 **)(local_98 + -2);
      if (local_58 <= (ulonglong)((longlong)local_98 + (local_68 - (longlong)puVar3))) goto LAB_18013c5e8;
      uVar6 = (longlong)pppuStack_80 + local_70;
    }
    thunk_FUN_1801f42e0(puVar3,uVar6);
  }
  local_88 = local_48;
  pppuStack_80 = (undefined ***)local_40;
  local_98 = (undefined4 *)CONCAT71(local_98._1_7_,local_31);
  if (local_40 < local_a0) {
    uVar6 = local_78 + local_a0;
    ppuVar5 = local_b8;
    if (local_60 < uVar6) {
      ppuVar5 = (undefined **)local_b8[-1];
      if (local_58 <= (ulonglong)((longlong)local_b8 + (local_68 - (longlong)ppuVar5))) {
LAB_18013c5e8:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_38,local_48);
      }
      uVar6 = local_a0 + local_70;
    }
    thunk_FUN_1801f42e0(ppuVar5,uVar6);
  }
  uVar4 = FUN_1800ba260();
  local_b8 = &PTR_LAB_18021a290;
  local_b0 = local_50;
  local_a8 = FUN_18013c820;
  pppuStack_80 = &local_b8;
  FUN_180121610(uVar4,local_50,&local_b8,local_38);
  return local_50;
}



void Unwind_18013c610(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_2 + 0x130) = *(undefined1 *)(param_2 + 0x1b7);
  return;
}



void Unwind_18013c660(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0xf0);
  return;
}



void Unwind_18013c690(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;

  uVar1 = *(ulonglong *)(param_2 + 0x168);
  if (*(ulonglong *)(param_2 + 0x1a8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x150);
    uVar4 = *(longlong *)(param_2 + 0x170) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x188) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 400) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x180)) - lVar3))
      goto LAB_18013c7b1;
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x178);
      param_3 = lVar3;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4,param_3,param_4,CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da));
  }
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_2 + 0x150) = *(undefined1 *)(param_2 + 0x1b7);
  uVar1 = *(ulonglong *)(param_2 + 0x148);
  if (*(ulonglong *)(param_2 + 0x1a8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x130);
    uVar4 = *(longlong *)(param_2 + 0x170) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x188) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 400) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x180)) - lVar3)) {
LAB_18013c7b1:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,*(uint *)(param_2 + 0x1b0),
                       *(uintptr_t *)(param_2 + 0x1a0));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x178);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_2 + 0x130) = *(undefined1 *)(param_2 + 0x1b7);
  return;
}



void Unwind_18013c7e0(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x198));
  return;
}



void FUN_18013c820(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_c8 = 0x9522e1f6a7c5c7ca;
  local_d0 = 0x8367019c53cac760;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = DAT_1802a50d0;
              bVar1 = DAT_1802a50b5;
              uVar8 = local_c8 ^ 0xf0392565dfbe34d4;
              uVar4 = local_c8 ^ local_d0;
              local_d0 = local_d0 ^ 0xf0392565dfbe34d4;
              local_c8 = uVar8;
              if (0x317ab03e2fa8621c < (longlong)uVar4) break;
              if ((longlong)uVar4 < -0x2945528feae3438d) {
                if ((longlong)uVar4 < -0x3e533fa2b97c44f7) {
                  if (uVar4 == 0x8ce216ef90cc3d3f) {
                    local_c8 = 0x8c573301e13144e6;
                    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x90) != '\0') {
                      local_c8 = 0xe8318faf4fb14c8e;
                    }
                    local_d0 = 0xb05c3c111a331b12;
                  }
                  else if (uVar4 == 0x8dfa9c8e964dabe8) {
                    cVar3 = FUN_1801b3c30(local_90,local_b0);
                    local_c8 = 0x88d4e70803da1791;
                    if (cVar3 != '\0') {
                      local_c8 = 0x441861a6cb86b753;
                    }
                    local_d0 = 0xbdf395166ef2c1c8;
                  }
                }
                else if (uVar4 == 0xc1acc05d4683bb09) {
                  LOCK();
                  DAT_1802a50b5 = 0;
                  UNLOCK();
                  local_c8 = 0xbd28159af9338679;
                  if ((bVar1 & 1) != 0) {
                    local_c8 = 0xffd92ececaa5c2c2;
                  }
                  local_d0 = 0x880f6784941b5020;
                }
                else if (uVar4 == 0xcf6cd4721d2332d3) {
                  lVar6 = FUN_1801b2b70();
                  local_a0 = (*(code *)(lVar6 + local_98))(local_78);
                  local_c8 = 0x896af4aa0d4c6fb1;
                  if (local_a0 == 0) {
                    local_c8 = 0x8d37368a4fccdbf5;
                  }
                  local_d0 = 0xb810449422e40dac;
                }
                else if (uVar4 == 0xd3ff78520730f808) {
                  local_88 = *(longlong *)(local_68 + 0x30);
                  local_c8 = 0x3a31a85b5529f7a5;
                  if (local_88 == 0) {
                    local_c8 = 0xca3f1e6e5ee612b3;
                  }
                  local_d0 = 0xb93de331865a9ba;
                }
              }
              else if ((longlong)uVar4 < 0x1645e06af40f00aa) {
                if (uVar4 == 0xd6baad70151cbc73) {
                  DAT_1802a50b8 = *(undefined4 *)(local_a8 + 0xb8);
                  DAT_1802a50bc = *(undefined4 *)(local_a8 + 0xbc);
                  DAT_1802a50c8 = local_a8;
                  DAT_1802a50c0 = DAT_1802a50b8;
                  DAT_1802a50c4 = DAT_1802a50bc;
                  lVar6 = FUN_1801b2b70();
                  DAT_1802a50d0 = (*(code *)(lVar6 + 0x488420))(local_a0);
                  lVar6 = FUN_1801b2b70();
                  (*(code *)(lVar6 + local_b8))(local_a0,local_bc);
                  DAT_1802a50b5 = 1;
                  local_c8 = 0x97ba77333d52653a;
                  local_d0 = 0xa29d052d507ab363;
                }
                else if (uVar4 == 0xf9ebf4b0a574769b) {
                  lVar6 = FUN_1801b2b70();
                  local_48 = (*(code *)(lVar6 + local_98))(local_90);
                  local_c8 = 0x888855bf7b39642e;
                  if (local_48 == 0) {
                    local_c8 = 0xe9717e17bd72993f;
                  }
                  local_d0 = 0xdc560c09d05a4f66;
                }
                else if (uVar4 == 0x1380dfc4b55a4af7) {
                  local_90 = *(longlong *)(local_50 + 0x30);
                  local_c8 = 0x313135b40ad483f0;
                  if (local_90 == 0) {
                    local_c8 = 0x89ecdb24f1b1fe41;
                  }
                  local_d0 = 0xbccba93a9c992818;
                }
              }
              else if (uVar4 == 0x1645e06af40f00aa) {
                local_98 = 0x137bd0;
                local_b0 = 0x200;
                local_b8 = 0x4883a0;
                local_70 = (longlong *)FUN_180179ff0();
                local_68 = *local_70;
                local_c8 = 0x32b3124ca3fdfb7a;
                if (local_68 == 0) {
                  local_c8 = 0xb6c4a3575ab2a77c;
                }
                local_d0 = 0x7768630a1c311c75;
              }
              else if (uVar4 == 0x26891486bc6867e8) {
                local_78 = *(longlong *)(local_58 + 0x30);
                local_c8 = 0xb019ef3c50b21467;
                if (local_78 == 0) {
                  local_c8 = 0xc7467ff41c96ae37;
                }
                local_d0 = 0xf2610dea71be786e;
              }
              else if (uVar4 == 0x2c87596a03ddfc52) {
                local_c8 = 0x10a2e5e6ed24f9e7;
                if (*(char *)(local_88 + 0xb8) == '\0') {
                  local_c8 = 0xa95c1edc0fc963cc;
                }
                local_d0 = 0x68f0de81494ad8c5;
              }
            }
            if ((longlong)uVar4 < 0x4edf1e49c6d5e513) break;
            if ((longlong)uVar4 < 0x77d6494a5ebe92e2) {
              if (uVar4 == 0x4edf1e49c6d5e513) {
                DAT_1802a50c8 = local_a8;
                lVar6 = FUN_1801b2b70();
                (*(code *)(lVar6 + local_b8))(local_a0,local_bc);
                local_c8 = 0x495a6d91c7135369;
                local_d0 = 0x7c7d1f8faa3b8530;
              }
              else if (uVar4 == 0x54de59b6ab632b48) {
                lVar6 = FUN_1801b2b70();
                (*(code *)(lVar6 + local_b8))(local_48,uVar2);
                local_c8 = 0x7c46c3c8d380465b;
                local_d0 = 0x4961b1d6bea89002;
              }
              else if (uVar4 == 0x586db3be5582579c) {
                local_60 = (longlong *)(param_1 + 0x68);
                local_c8 = 0x73b55ab1d60397f2;
                if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x90) == 0) {
                  local_c8 = 0xce19ba75daa9d58b;
                }
                local_d0 = 0xfb57a289c2a6e82;
              }
            }
            else if (uVar4 == 0x77d6494a5ebe92e2) {
              plVar7 = (longlong *)FUN_180179ff0();
              local_50 = *plVar7;
              local_c8 = 0x2e52a1cf593cbe4b;
              if (local_50 == 0) {
                local_c8 = 0x8f50c15814e22e5;
              }
              local_d0 = 0x3dd27e0bec66f4bc;
            }
            else if (uVar4 == 0x78523b67a46e2122) {
              local_c8 = 0x4f92006704d20234;
              if (*local_80 == 0) {
                local_c8 = 0x2dcd6d5d29d8402;
              }
              local_d0 = 0xc3701688941e3f0b;
            }
            else if (uVar4 == 0x7c0020994a29f970) {
              uVar5 = FUN_180100330();
              cVar3 = FUN_180101a00(uVar5,*(undefined4 *)(*local_60 + 0x90));
              local_c8 = 0x29e5361fa3472407;
              if (cVar3 != '\0') {
                local_c8 = 0xd442f9521ec6c0fa;
              }
              local_d0 = 0xe849f642e5c49f0e;
            }
          }
          if ((longlong)uVar4 < 0x3c0b0f10fb025ff4) break;
          if (uVar4 == 0x3c0b0f10fb025ff4) {
            plVar7 = (longlong *)FUN_180179ff0();
            local_58 = *plVar7;
            local_c8 = 0x97e58cff9535489d;
            if (local_58 == 0) {
              local_c8 = 0x844bea674475f92c;
            }
            local_d0 = 0xb16c9879295d2f75;
          }
          else if (uVar4 == 0x4278e2d6210c6c09) {
            cVar3 = FUN_1801b3c30(local_78,local_b0);
            local_c8 = 0xc65c61cd380b5d1e;
            if (cVar3 != '\0') {
              local_c8 = 0x3c17c7a14800b994;
            }
            local_d0 = 0xf37b13d355238b47;
          }
          else if (uVar4 == 0x45db7146bfcce70f) {
            local_80 = local_70 + 1;
            local_c8 = 0xd5e9ba36c8d83f06;
            if (local_70[3] != 0) {
              local_c8 = 0xc7ba0239896b7c07;
            }
            if (local_70[1] == 0) {
              local_c8 = 0xd5e9ba36c8d83f06;
            }
            local_d0 = 0x14457a6b8e5b840f;
          }
        }
        if (uVar4 != 0x317ab03e2fa8621d) break;
        local_bc = *(undefined4 *)(&DAT_18021a280 + (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x90) * 4);
        local_a8 = *local_80;
        local_c8 = 0xd9f8c4a574c2ec87;
        if ((DAT_1802a50b5 & 1) != 0) {
          local_c8 = 0x419d779ca70bb5e7;
        }
        local_d0 = 0xf4269d561de50f4;
      }
      if (uVar4 != 0x31a276684d4c5e1f) break;
      cVar3 = FUN_1801b3c30(local_88,local_b0);
      local_c8 = 0xf1c9c81256e65fc;
      if (cVar3 != '\0') {
        local_c8 = 0xe23705b6603022a7;
      }
      local_d0 = 0xceb05cdc63eddef5;
    }
  } while (uVar4 != 0x3527721e6d28d659);
  return;
}



undefined8 * FUN_18013d1f0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;

  local_68 = 0x5ece7ec39ab91d0;
  local_70 = 0xf86b7c36c2f263a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_68 ^ local_70;
          local_70 = local_70 ^ 0x3057fece9358df73;
          if (0x42d80fdf1d2f9917 < (longlong)uVar1) break;
          if (uVar1 == 0xb6d0adf3d8bd2dd5) {
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = local_60;
            local_68 = 0xaac1ebd646301cd1;
            local_70 = 0xf64f049b7c48540c;
          }
          else if (uVar1 == 0xfd574301673bde40) {
            param_2[1] = 0;
            param_2[2] = 7;
            param_2[3] = local_60;
            FUN_18013e618(&DAT_1802a51d4,&DAT_180284b92,0x15,8,&DAT_1802a51dc);
            *(uint *)((longlong)param_2 + 3) = CONCAT31(uRam00000001802a51d8,DAT_1802a51d4._3_1_);
            *(undefined4 *)param_2 = DAT_1802a51d4;
            *(undefined1 *)((longlong)param_2 + 7) = 0;
            local_68 = 0x345860bc36aec087;
            local_70 = 0x68d68ff10cd6885a;
          }
          else {
            local_68 = local_68 ^ 0x3057fece9358df73;
            if (uVar1 == 0xfd879bdafb59f271) {
              local_60 = 0xf;
              local_68 = 0x64ce3f3f394c5d25;
              if (*(char *)(param_1 + 0x4c) != '\0') {
                local_68 = 0x90c69d13fcdee9e8;
              }
              local_70 = 0xd21e92cce1f170f0;
            }
          }
        }
        if (uVar1 != 0x42d80fdf1d2f9918) break;
        local_68 = 0xeab2c0e486151bca;
        if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x90) != '\0') {
          local_68 = 0x13e0d80ade680047;
        }
        local_70 = 0x5c626d175ea8361f;
      }
      if (uVar1 != 0x4f82b51d80c03658) break;
      local_68 = 0xca9896453e817b0;
      if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x90) == 0) {
        local_68 = 0x472e6796ec6ee425;
      }
      local_70 = 0xba7924978b553a65;
    }
    local_68 = local_68 ^ 0x3057fece9358df73;
  } while (uVar1 != 0x5c8eef4d3a7848dd);
  return param_2;
}



void FUN_18013d4a0(void)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_60 = 0xac05b6bfb8dd68ac;
  local_68 = 0x5f295559902e21e5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = DAT_1802a50d0;
          bVar1 = DAT_1802a50b5;
          uVar7 = local_60 ^ 0xe85619599303d7ea;
          uVar4 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xe85619599303d7ea;
          local_60 = uVar7;
          if (0x1bc1083b0f466c69 < (longlong)uVar4) break;
          if (uVar4 == 0xa4e1f65e73494ef2) {
            plVar6 = (longlong *)FUN_180179ff0();
            local_50 = *plVar6;
            local_60 = 0x708462b1e1962fca;
            if (local_50 == 0) {
              local_60 = 0x3f65739043b685b;
            }
            local_68 = 0x6b456a8aeed043a0;
          }
          else if (uVar4 == 0xed4411fe13d2d75f) {
            lVar5 = FUN_1801b2b70();
            local_48 = (*(code *)(lVar5 + 0x137bd0))(local_58);
            local_60 = 0x243db4c3e7afef2c;
            if (local_48 == 0) {
              local_60 = 0x725d250210de2e9c;
            }
            local_68 = 0x1aee18b1fa350567;
          }
          else if (uVar4 == 0xf32ce3e628f34949) {
            LOCK();
            DAT_1802a50b5 = 0;
            UNLOCK();
            local_60 = 0x1630c74ff5c6bdf3;
            if ((bVar1 & 1) != 0) {
              local_60 = 0xda620ca26c64d8fa;
            }
            local_68 = 0x7e83fafc1f2d9608;
          }
        }
        if (0x68b33db3eaeb2bfa < (longlong)uVar4) break;
        if (uVar4 == 0x1bc1083b0f466c6a) {
          local_58 = *(longlong *)(local_50 + 0x30);
          local_60 = 0xc04d10c3d82d1694;
          if (local_58 == 0) {
            local_60 = 0xd7b930243ca23b75;
          }
          local_68 = 0xbf0a0d97d649108e;
        }
        else if (uVar4 == 0x3ed3ac721d9aea4b) {
          lVar5 = FUN_1801b2b70();
          (*(code *)(lVar5 + 0x4883a0))(local_48,uVar2);
          local_60 = 0x7135142a0e6da52;
          local_68 = 0x6fa06cf14a0df1a9;
        }
      }
      if (uVar4 != 0x7f471d540e64061a) break;
      cVar3 = FUN_1801b3c30(local_58,0x200);
      local_60 = 0xdbd6d31a1de0de06;
      if (cVar3 != '\0') {
        local_60 = 0x5e21ff57e4d922a2;
      }
      local_68 = 0xb365eea9f70bf5fd;
    }
  } while (uVar4 != 0x68b33db3eaeb2bfb);
  return;
}



undefined1 FUN_18013d770(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x64f57517966b3586;
  local_68 = 0xc32a4a6019863ccd;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xc9c2d79bb9319ed9;
        if (uVar1 != 0xa7df3f778fed094b) break;
        local_60 = 0x80b4d9d72240e9f7;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xa910dd1af631ace1;
        }
        local_68 = 0x6f0ec209652d98d6;
        local_69 = 1;
      }
      if (uVar1 != 0xc61e1f13931c3437) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x59bb96e1fc3a36af;
      local_68 = 0xb6018d3fbb57478e;
    }
    local_60 = local_60 ^ 0xc9c2d79bb9319ed9;
  } while (uVar1 != 0xefba1bde476d7121);
  return local_69;
}



void FUN_18013d8a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x7e7aba004e2c3ef;
  local_50 = 0x5eb61b6f91a2dd48;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = DAT_1802a50c0;
          uVar2 = local_48 ^ local_50;
          local_50 = local_50 ^ 0xab8c59a6fd1d2da;
          if (0x1d03c93e5fdbf354 < (longlong)uVar2) break;
          if (uVar2 == 0x943ab5f1c929322c) {
            (*DAT_180284878)(param_1,param_2,param_3);
            local_48 = 0x3fd22347f750e67d;
            local_50 = 0x22d1ea79a88b1528;
          }
          else {
            local_48 = local_48 ^ 0xab8c59a6fd1d2da;
            if (uVar2 == 0x170648eeddadad82) {
              local_48 = 0xa66006d12ff26b1f;
              if (param_1 == DAT_1802a50c8) {
                local_48 = 0x9fcea5e719c244f;
              }
              local_50 = 0x325ab320e6db5933;
            }
          }
        }
        if (uVar2 != 0x3ba6597e97477d7c) break;
        *(undefined4 *)(param_1 + 0xc0) = DAT_1802a50c0;
        *(undefined4 *)(param_1 + 0xb8) = uVar1;
        uVar1 = DAT_1802a50c4;
        *(undefined4 *)(param_1 + 0xc4) = DAT_1802a50c4;
        *(undefined4 *)(param_1 + 0xbc) = uVar1;
        (*DAT_180284878)(param_1,param_2,param_3);
        uVar1 = DAT_1802a50b8;
        DAT_1802a50c0 = *(undefined4 *)(param_1 + 0xb8);
        DAT_1802a50c4 = *(undefined4 *)(param_1 + 0xbc);
        *(undefined4 *)(param_1 + 0xc0) = DAT_1802a50b8;
        *(undefined4 *)(param_1 + 0xb8) = uVar1;
        uVar1 = DAT_1802a50bc;
        *(undefined4 *)(param_1 + 0xc4) = DAT_1802a50bc;
        *(undefined4 *)(param_1 + 0xbc) = uVar1;
        local_48 = 0x48f80dab03eac9f1;
        local_50 = 0x55fbc4955c313aa4;
      }
      if (uVar2 != 0x5951b0cf95401ea7) break;
      local_48 = 0xdc170021f16a8194;
      if ((DAT_1802a50b5 & 1) != 0) {
        local_48 = 0x5f2bfd3ee5ee1e3a;
      }
      local_50 = 0x482db5d03843b3b8;
    }
    local_48 = local_48 ^ 0xab8c59a6fd1d2da;
  } while (uVar2 != 0x1d03c93e5fdbf355);
  return;
}



ulonglong FUN_18013dac0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_50 = 4;
  local_90 = 1;
  local_88 = 0x28;
  local_80 = 0x20;
  local_4c = 0;
  local_78 = -8;
  local_39 = 0;
  local_58 = 0xf;
  local_48 = 0;
  local_70 = 0xfff;
  local_68 = 4;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_18013de49;
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
    FUN_18013e618(&DAT_1802a5220,&DAT_180284c60,0x1b,0x19,&DAT_1802a523c);
    local_d8 = &DAT_1802a5220;
    local_d0 = 0x18;
    FUN_18013e618(&DAT_1802a5240,&DAT_180284ca7,0x14,5,&DAT_1802a5248);
    local_c8 = &DAT_1802a5240;
    local_c0 = local_68;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_18013ddf7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_18013de37;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_18013e618(&DAT_1802a524c,&DAT_180284cd2,0x19,0x22,&DAT_1802a5270);
      local_b8 = &DAT_1802a524c;
      local_b0 = 0x21;
      FUN_18013e618(&DAT_1802a5240,&DAT_180284ca7,0x14,5,&DAT_1802a5248);
      local_a8 = &DAT_1802a5240;
      local_a0 = local_68;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_18013ddf7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_18013de37;
  }
  lVar10 = *local_60;
  uVar13 = local_90 + uVar9;
  lVar11 = lVar10;
  if (local_70 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_80 <= (ulonglong)((lVar10 + local_78) - lVar11)) {
LAB_18013de49:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_88;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_18013de37:
  return uVar12 & 0xffffffff;
}



void Unwind_18013de70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_18013dea0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;

  local_88 = 0xe642fea9633daf55;
  local_90 = 0xd1621a8cca0ea9bf;
  do {
    while( true ) {
      while( true ) {
        uVar3 = DAT_1802a50c0;
        uVar4 = local_88 ^ local_90;
        local_90 = local_90 ^ 0xbbbaa917019d6b05;
        if (0x3720e425a93306e9 < (longlong)uVar4) break;
        if (uVar4 == 0xb083d6b5e6918851) {
          uVar1 = *(undefined8 *)(local_80 + 0xb8);
          uVar2 = *(undefined8 *)(local_80 + 0xc0);
          *(undefined4 *)(local_80 + 0xc0) = DAT_1802a50c0;
          *(undefined4 *)(local_80 + 0xb8) = uVar3;
          uVar3 = DAT_1802a50c4;
          *(undefined4 *)(local_80 + 0xc4) = DAT_1802a50c4;
          *(undefined4 *)(local_80 + 0xbc) = uVar3;
          (*DAT_1802848b8)(param_1,param_2,param_3,param_4);
          *(undefined8 *)(local_80 + 0xb8) = uVar1;
          *(undefined8 *)(local_80 + 0xc0) = uVar2;
          local_88 = 0x1284407366b8903a;
          local_90 = 0x2b898bc65216b763;
        }
        else {
          local_88 = local_88 ^ 0xbbbaa917019d6b05;
          if (uVar4 == 0xc06b7859383a2918) {
            (*DAT_1802848b8)(param_1,param_2,param_3,param_4);
            local_88 = 0xd40fc849847d5eb7;
            local_90 = 0xed0203fcb0d379ee;
          }
        }
      }
      if (uVar4 != 0x3720e425a93306ea) break;
      local_80 = DAT_1802a50c8;
      local_88 = 0xeea0c305546b5b1;
      if ((DAT_1802a50b5 & 1) != 0) {
        local_88 = 0x7e02a2dc8bed14f8;
      }
      if (DAT_1802a50c8 == 0) {
        local_88 = 0xeea0c305546b5b1;
      }
      local_90 = 0xce8174696d7c9ca9;
    }
    local_88 = local_88 ^ 0xbbbaa917019d6b05;
  } while (uVar4 != 0x390dcbb534ae2759);
  return;
}



void FUN_18013e0c0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xdfeef3cfc2c37dc9;
  local_58 = 0x2d341d68ad947c48;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xbcbd744a972ab5d;
        if (uVar1 != 0xced3933b312bd68d) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0x1fc1bdc991a8878c;
        local_58 = 0x2b7fa2478741b630;
      }
      if (uVar1 != 0xf2daeea76f570181) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0xec53e0713567718c;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x163e6cc412a596bd;
      }
      local_58 = 0xd8edffff238e4030;
    }
    local_50 = local_50 ^ 0xbcbd744a972ab5d;
  } while (uVar1 != 0x34be1f8e16e931bc);
  return;
}



void FUN_18013e1f0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xfd09578bd66a636f;
  local_50 = 0xa295916d40b783c3;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xf1651bfcc88fc5c7;
        if (uVar1 != 0x865f66fdfc91279) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0x1f901afc64d86be9;
        local_50 = 0x1dd0299bb7e2462a;
      }
      if (uVar1 != 0x5f9cc6e696dde0ac) break;
      local_48 = 0xfc12f8aadcabd96d;
      if (param_2 != '\0') {
        local_48 = 0xf6373da2d058e6d7;
      }
      local_50 = 0xfe52cbcd0f91f4ae;
    }
    local_48 = local_48 ^ 0xf1651bfcc88fc5c7;
  } while (uVar1 != 0x2403367d33a2dc3);
  return;
}



undefined8 FUN_18013e310(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x7ebadee9b3976562;
  local_50 = 0xfa75b977790370fb;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x3d68466beb70064;
        if (uVar1 != 0x84cf679eca941599) break;
        FUN_18013bbc0(param_1);
        local_48 = 0xa65d640cda51a13a;
        if ((param_2 & 1) == 0) {
          local_48 = 0xb37d01d7b8717534;
        }
        local_50 = 0x334ddaca89c4000c;
      }
      if (uVar1 != 0x9510bec65395a136) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0xcbe3c9149cd4a26c;
      local_50 = 0x4bd31209ad61d754;
    }
    local_48 = local_48 ^ 0x3d68466beb70064;
  } while (uVar1 != 0x8030db1d31b57538);
  return param_1;
}



undefined8 FUN_18013e460(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x948ac57fb65803ae;
  local_50 = 0x5290303085c3a37;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xd45beccdaa20e8a;
        if (uVar1 != 0x91a3c67cbe043999) break;
        FUN_180106c90(param_1);
        local_48 = 0xe9f14f35e1a34758;
        if ((param_2 & 1) == 0) {
          local_48 = 0xb0e944c6ca43da20;
        }
        local_50 = 0x25794e6161b6638e;
      }
      if (uVar1 != 0xcc880154801524d6) break;
      thunk_FUN_1801f42e0(param_1,0x80);
      local_48 = 0x1dd1a45a28875a4;
      local_50 = 0x944d10e2097dcc0a;
    }
    local_48 = local_48 ^ 0xd45beccdaa20e8a;
  } while (uVar1 != 0x95900aa7abf5b9ae);
  return param_1;
}



void FUN_18013e5b0(void)

{
  atexit((_func_5014 *)&LAB_18013bbb0);
  atexit((_func_5014 *)&LAB_18013bd20);
  FUN_18013e618(&DAT_1802a50d4,&DAT_180284986,0x10,9,&DAT_1802a50e0);
  FUN_1800f0070(&DAT_1802a50b4,&DAT_1802a50d4,FUN_18013bd30);
  return;
}



void FUN_18013e618(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xf1808fd670aa31e0;
  local_68 = 0xcc76847ba114cb46;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xa344759cf7683f89;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xa344759cf7683f89;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x3df60badd1befaa6) break;
          if (uVar1 == 0x57dc1c8e65f5c875) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x5bbb4e604654451;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x8a94a595f005c392;
            }
            local_68 = 0x91cac5e4e1b35ffd;
          }
          else if (uVar1 == 0x55ea9ed8b7b2ff0a) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0x666207a487f17041;
            if (local_54 == param_4) {
              local_60 = 0xd6d80610f69cef25;
            }
            local_68 = 0x31be1b2ae204b834;
          }
          else if (uVar1 == 0x3df60badd1befaa6) {
            local_60 = 0x78dffa517c4d3888;
            if (*param_5 == 1) {
              local_60 = 0x8e08831e475f9014;
            }
            local_68 = 0x2f03e6df19b8f0fd;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0x1899e2c5eb67a8ef) break;
        if (uVar1 == 0xe7661d3a14985711) {
          *param_5 = 1;
          local_60 = 0xaf14e7e54b83cbee;
          local_68 = 0xe1f82241564ab07;
        }
        else if (uVar1 == 0x1b5e607111b69c6f) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x5910349fd17d6f91;
          local_68 = 0xcfaaa4766cf909b;
        }
      }
      if (uVar1 != 0x94717102e5d61bac) break;
      local_6b = -(local_6c - local_69 ^ local_6d);
      local_60 = 0x325b2f845fdc2ee6;
      local_68 = 0x67b1b15ce86ed1ec;
    }
  } while (uVar1 != 0xa10b65c15ee760e9);
  return;
}



void FUN_18013e8d0(longlong param_1)

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



void Unwind_18013ea10(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_18013ea40(void)

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
  local_28 = 0x11;
  local_20 = 0x1f;
  local_38 = puVar5;
  FUN_18013fabc(&DAT_1802a52dc,&DAT_180285eae,0x15,0x12,&DAT_1802a52f0);
  *(undefined1 *)(puVar5 + 4) = DAT_1802a52ec;
  uVar3 = uRam00000001802a52e8;
  uVar2 = uRam00000001802a52e4;
  uVar1 = uRam00000001802a52e0;
  *puVar5 = _DAT_1802a52dc;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x11) = 0;
  FUN_18013f040(&PTR_PTR_180285c88,&local_38,lVar4 + 0x4885c0,FUN_18013f420);
  return 1;
}



undefined8 * FUN_18013eb40(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined ***local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_38 = 0;
  local_58 = 0xf;
  local_21 = 0;
  local_28 = 0;
  local_50 = 0x20;
  local_48 = 0x1f;
  local_40 = 10;
  local_d0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x20);
  local_c8 = 0x19;
  local_c0 = local_48;
  local_d8 = puVar3;
  FUN_18013fabc(&DAT_1802a5288,&DAT_180285dce,0x1e,0x1a,&DAT_1802a52a4);
  uVar4 = uRam00000001802a5299;
  *(ulonglong *)((longlong)puVar3 + 9) = CONCAT17(uRam00000001802a5298,CONCAT43(uRam00000001802a5294,_DAT_1802a5291));
  *(undefined8 *)((longlong)puVar3 + 0x11) = uVar4;
  uVar2 = uRam00000001802a5294;
  uVar1 = uRam00000001802a5290;
  uVar5 = uRam00000001802a528c;
  *puVar3 = _DAT_1802a5288;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x19) = local_21;
  local_b0 = local_38;
  local_a8 = local_40;
  local_a0 = local_58;
  uVar5 = 1;
  FUN_18013fabc(&DAT_1802a5276,&DAT_180285d95,0x1c,0xb,&DAT_1802a5284);
  local_b0 = CONCAT62(local_b0._2_6_,DAT_1802a527e);
  local_b8 = DAT_1802a5276;
  FUN_1801063a0(param_1,&local_b8,&local_d8,local_28,CONCAT44(uVar5,local_28));
  *param_1 = &PTR_FUN_18021a540;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_30 = param_1;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_50);
  local_68 = 0x1d;
  uStack_60 = local_48;
  local_78 = puVar3;
  FUN_18013fabc(&DAT_1802a52a8,&DAT_180285e1c,0x19,0x1e,&DAT_1802a52c8);
  uVar4 = uRam00000001802a52bd;
  *(ulonglong *)((longlong)puVar3 + 0xd) = CONCAT53(uRam00000001802a52b8,_DAT_1802a52b5);
  *(undefined8 *)((longlong)puVar3 + 0x15) = uVar4;
  uVar2 = uRam00000001802a52b4;
  uVar1 = uRam00000001802a52b0;
  uVar5 = uRam00000001802a52ac;
  *puVar3 = _DAT_1802a52a8;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1d) = local_21;
  local_90 = local_38;
  local_88 = local_40;
  local_80 = local_58;
  uVar5 = 1;
  FUN_18013fabc(&DAT_1802a52cc,&DAT_180285e6b,0x1e,0xb,&DAT_1802a52d8);
  local_90 = CONCAT62(local_90._2_6_,DAT_1802a52d4);
  local_98 = DAT_1802a52cc;
  uVar4 = FUN_180108270(local_30,&local_98,&local_78,0x3f800000,CONCAT44(uVar5,0x3f000000),0x40a00000,0x3dcccccd);
  local_30[0xe] = uVar4;
  uVar4 = FUN_1800ba260();
  local_118 = &PTR_LAB_18021a580;
  local_110 = local_30;
  local_108 = &LAB_18013eee0;
  local_e0 = &local_118;
  FUN_180121610(uVar4,local_30,local_e0,local_28);
  return local_30;
}



void Unwind_18013eeb0(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x128));
  return;
}



undefined1 FUN_18013ef10(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x57f1a16e39579b93;
  local_68 = 0x94a3ff4023ae89e6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x5b1313aaf9cc9f2c;
        if (uVar1 != 0xc3525e2e1af91275) break;
        local_60 = 0x1242fbd44af018fe;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xa7a94bb80b84635f;
        }
        local_68 = 0xa02a597cc5790acb;
        local_69 = 1;
      }
      if (uVar1 != 0x78312c4cefd6994) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x5b530f2c4f77c252;
      local_68 = 0xe93bad84c0fed067;
    }
    local_60 = local_60 ^ 0x5b1313aaf9cc9f2c;
  } while (uVar1 != 0xb268a2a88f891235);
  return local_69;
}



ulonglong FUN_18013f040(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_48 = 0;
  local_50 = 4;
  local_58 = 0xf;
  local_90 = 0xfff;
  local_39 = 0;
  local_88 = 4;
  local_80 = -8;
  local_4c = 0;
  local_78 = 0x28;
  local_70 = 0x20;
  local_68 = 1;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_18013f3c9;
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
    FUN_18013fabc(&DAT_1802a52f4,&DAT_180285ef3,0x1c,0x19,&DAT_1802a5310);
    local_d8 = &DAT_1802a52f4;
    local_d0 = 0x18;
    FUN_18013fabc(&DAT_1802a5314,&DAT_180285f42,0x10,5,&DAT_1802a531c);
    local_c8 = &DAT_1802a5314;
    local_c0 = local_88;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_18013f377:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_18013f3b7;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_18013fabc(&DAT_1802a5320,&DAT_180285f67,0x11,0x22,&DAT_1802a5344);
      local_b8 = &DAT_1802a5320;
      local_b0 = 0x21;
      FUN_18013fabc(&DAT_1802a5314,&DAT_180285f42,0x10,5,&DAT_1802a531c);
      local_a8 = &DAT_1802a5314;
      local_a0 = local_88;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_18013f377;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_18013f3b7;
  }
  lVar10 = *local_60;
  uVar13 = local_68 + uVar9;
  lVar11 = lVar10;
  if (local_90 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_70 <= (ulonglong)((lVar10 + local_80) - lVar11)) {
LAB_18013f3c9:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_78;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_18013f3b7:
  return uVar12 & 0xffffffff;
}



void Unwind_18013f3f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



undefined4 FUN_18013f420(undefined8 param_1)

{
  ulonglong uVar1;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xe9c069f60755d2c5;
  local_50 = 0xb92f85b417b49651;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xcfb2e0b692599659;
        if (uVar1 != 0xa8ffa4cf8f4e3c98) break;
        local_48 = 0x7403c191e164421e;
        local_50 = 0x534c84483b8bc409;
        local_54 = DAT_180285cc8;
      }
      if (uVar1 != 0x50efec4210e14494) break;
      local_54 = (*DAT_180285cb8)(param_1);
      local_48 = 0xac732ee979de294;
      if ((DAT_1802a5275 & 1) != 0) {
        local_48 = 0x8577d3f8c23c581b;
      }
      local_50 = 0x2d8877374d726483;
    }
    local_48 = local_48 ^ 0xcfb2e0b692599659;
  } while (uVar1 != 0x274f45d9daef8617);
  return local_54;
}



void FUN_18013f570(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x211d64250053dab6;
  local_58 = 0xe0cb8fd7310b0262;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x6baa7481e94576cc;
        if (uVar1 != 0xc1d6ebf23158d8d4) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0xc29ba878ea814ac3;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0x399d5349fb03ad80;
        }
        local_58 = 0xf57bdcec60f1a69c;
      }
      if (uVar1 != 0xcce68fa59bf20b1c) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0xf7bf707bdafe9670;
      local_58 = 0xc05f04ef508e7a2f;
    }
    local_50 = local_50 ^ 0x6baa7481e94576cc;
  } while (uVar1 != 0x37e074948a70ec5f);
  return;
}



void FUN_18013f6a0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x1358540c37b50907;
  local_50 = 0x6f9d17c0fa1293bd;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x47d4626ca0151993;
        if (uVar1 != 0x75e70787072c5f2f) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0x75817a53a1248902;
        local_50 = 0x8b4c8b80d678d2b7;
      }
      if (uVar1 != 0x7cc543cccda79aba) break;
      local_48 = 0xd418dbf6b2292320;
      if (param_2 != '\0') {
        local_48 = 0x5f322da2c25927ba;
      }
      local_50 = 0x2ad52a25c5757895;
    }
    local_48 = local_48 ^ 0x47d4626ca0151993;
  } while (uVar1 != 0xfecdf1d3775c5bb5);
  return;
}



undefined8 FUN_18013f7c0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x324d11b8e5a1931;
  local_50 = 0xdf88e2802359e2f6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xbfaa36c2064b27d4;
        if (uVar1 != 0xdcac339bad03fbc7) break;
        FUN_18013e8d0(param_1);
        local_48 = 0xe0195487bd92b5c5;
        if ((param_2 & 1) == 0) {
          local_48 = 0x309221c9a95a3d21;
        }
        local_50 = 0xca472bf7fe1a542c;
      }
      if (uVar1 != 0x2a5e7f704388e1e9) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0x2872969fe4602d1c;
      local_50 = 0xd2a79ca1b3204411;
    }
    local_48 = local_48 ^ 0xbfaa36c2064b27d4;
  } while (uVar1 != 0xfad50a3e5740690d);
  return param_1;
}



undefined8 FUN_18013f910(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xf70bc38c2cb6c62f;
  local_50 = 0x304261bc1a2f6004;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x8b5a755cddcde8f4;
        if (uVar1 != 0x800588031eedced8) break;
        thunk_FUN_1801f42e0(param_1,0x78);
        local_48 = 0x1bfdcd0f7be9489c;
        local_50 = 0xa9d59503e77630e0;
      }
      if (uVar1 != 0xc749a2303699a62b) break;
      FUN_180106c90(param_1);
      local_48 = 0x7d95d857121c0ebd;
      if ((param_2 & 1) == 0) {
        local_48 = 0x4fb80858906eb819;
      }
      local_50 = 0xfd9050540cf1c065;
    }
    local_48 = local_48 ^ 0x8b5a755cddcde8f4;
  } while (uVar1 != 0xb228580c9c9f787c);
  return param_1;
}



void FUN_18013fa60(void)

{
  atexit((_func_5014 *)&LAB_18013ea30);
  FUN_18013fabc(&DAT_1802a5276,&DAT_180285d95,0x1c,0xb,&DAT_1802a5284);
  FUN_1800f0070(&DAT_1802a5274,&DAT_1802a5276,FUN_18013ea40);
  return;
}



void FUN_18013fabc(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xe6b85bd3d1fca046;
  local_68 = 0xec8340d434f34939;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xa8c8e59aad35656d;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xa8c8e59aad35656d;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0xd0a314deccb6f70) break;
          if (uVar1 == 0xd0a314deccb6f70) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xd49c629208f45aba;
            local_68 = 0x4bea47f3ba6f415a;
          }
          else if (uVar1 == 0x7501768fa70a649b) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xde12dc54801dfa21;
            local_68 = 0x4164f9353286e1c1;
          }
          else if (uVar1 == 0x7f32f784d45e1d4d) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x2b212a51ec496453;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x532a6d93a7886fb8;
            }
            local_68 = 0x262b1b1c00820b23;
          }
        }
        if ((longlong)uVar1 < -0x1bb88943305a97e) break;
        if (uVar1 == 0xfe44776bccfa5682) {
          *param_5 = 1;
          local_60 = 0x5467768b93c10ed1;
          local_68 = 0xc419c20b43c866d2;
        }
        else if (uVar1 == 0xa3b1b07e50fe97f) {
          local_60 = 0x2c92af00cc9022f4;
          if (*param_5 == 1) {
            local_60 = 0xc3deec04c8c757ba;
          }
          local_68 = 0x53a0588418ce3fb9;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x9f762561b29b1be0) break;
      local_6b = local_6a ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6b;
      local_54 = local_4c + 1;
      local_60 = 0xe59bf3939bdb24ce;
      if (local_54 == param_4) {
        local_60 = 0x64ed737c837f6f01;
      }
      local_68 = 0x9aa904174f853983;
    }
  } while (uVar1 != 0x907eb480d0096803);
  return;
}



void FUN_18013fd70(longlong param_1)

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



void Unwind_18013feb0(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_18013fee0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uintptr_t uVar11;
  uintptr_t local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  uintptr_t local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_21 = 0;
  local_60 = 4;
  local_30 = 0;
  local_28 = 4;
  local_58 = 0xf;
  lVar7 = FUN_1801b2b70();
  uVar11 = lVar7 + 0x5ca640;
  uStack_78 = local_30;
  puVar8 = (undefined4 *)FUN_1801d61c8(0x30);
  local_70 = 0x24;
  uStack_68 = 0x2f;
  local_80 = puVar8;
  FUN_18014103c(&DAT_1802a53c8,&DAT_18028707a,0x1a,0x25,&DAT_1802a53f0);
  puVar8[8] = DAT_1802a53e8;
  uVar9 = uRam00000001802a53e0;
  *(undefined8 *)(puVar8 + 4) = _DAT_1802a53d8;
  *(undefined8 *)(puVar8 + 6) = uVar9;
  uVar5 = uRam00000001802a53d4;
  uVar4 = uRam00000001802a53d0;
  uVar3 = uRam00000001802a53cc;
  *puVar8 = _DAT_1802a53c8;
  puVar8[1] = uVar3;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  *(undefined1 *)(puVar8 + 9) = local_21;
  uVar2 = CONCAT44(DAT_180286e48._4_4_,(undefined4)DAT_180286e48);
  local_88 = uVar11;
  if (local_58 < uVar2) {
    lVar1 = CONCAT44(DAT_180286e30._4_4_,(undefined4)DAT_180286e30);
    uVar10 = uVar2 + 1;
    lVar7 = lVar1;
    if (0xfff < uVar10) {
      lVar7 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar7) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_30);
      }
      uVar10 = uVar2 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar7,uVar10);
  }
  _DAT_180286e40 = (undefined4)local_70;
  uRam0000000180286e44 = local_70._4_4_;
  DAT_180286e48._0_4_ = (undefined4)uStack_68;
  DAT_180286e48._4_4_ = uStack_68._4_4_;
  DAT_180286e30._0_4_ = (undefined4)local_80;
  DAT_180286e30._4_4_ = local_80._4_4_;
  uRam0000000180286e38 = (undefined4)uStack_78;
  uRam0000000180286e3c = uStack_78._4_4_;
  local_70 = local_30;
  uStack_68 = local_58;
  local_80 = (undefined4 *)CONCAT71(local_80._1_7_,local_21);
  if (uVar11 == local_30) {
    FUN_18014103c(&DAT_1802a53f4,&DAT_1802870cc,0x18,0x19,&DAT_1802a5410);
    local_50 = &DAT_1802a53f4;
    local_48 = 0x18;
    FUN_18014103c(&DAT_1802a5414,&DAT_180287117,0x1f,5,&DAT_1802a541c);
    local_40 = &DAT_1802a5414;
    local_38 = local_60;
    FUN_1800ed150(local_28,&local_40,&local_50,&DAT_180286e30);
  }
  else {
    _DAT_180286e50 = uVar11;
    cVar6 = FUN_180182740(uVar11,FUN_180140810,&DAT_180286e58);
    if (cVar6 == '\0') {
      FUN_18014103c(&DAT_1802a5420,&DAT_180287156,0x11,0x22,&DAT_1802a5444);
      local_50 = &DAT_1802a5420;
      local_48 = 0x21;
      FUN_18014103c(&DAT_1802a5414,&DAT_180287117,0x1f,5,&DAT_1802a541c);
      local_40 = &DAT_1802a5414;
      local_38 = local_60;
      FUN_1800ed3e0(local_28,&local_40,&local_50,&DAT_180286e30,&local_88);
      _DAT_180286e50 = 0;
    }
    else {
      DAT_180286e60 = 1;
      uVar9 = FUN_180181700();
      FUN_180182360(uVar9,&PTR_PTR_180286e28);
    }
  }
  return 1;
}


