#include "../include/aerialclient_types.h"


undefined * __thiscall std::_System_error_category::vfunction2(void)

{
  FUN_1800b8f52(&DAT_1802a1fac,&DAT_1802719d7,0x16,7,&DAT_1802a1fb4);
  return &DAT_1802a1fac;
}



undefined8 * __thiscall
std::_System_error_category::vfunction3(_System_error_category *this,undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  HLOCAL hMem;
  undefined8 *puVar4;
  ulonglong uVar5;
  HLOCAL local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_40 = 0;
  local_58 = (HLOCAL)0x0;
  uVar1 = FUN_1801d9c90(param_2,&local_58);
  hMem = local_58;
  local_50 = uVar1;
  if ((local_58 == (HLOCAL)0x0) || (uVar1 == local_40)) {
    param_1[1] = local_40;
    param_1[2] = 0xd;
    param_1[3] = local_48;
    FUN_1800b8f52(&DAT_1802a1fb8,&DAT_180271a0c,0x11,0xe,&DAT_1802a1fc8);
    *(ulonglong *)((longlong)param_1 + 5) = CONCAT53(uRam00000001802a1fc0,DAT_1802a1fb8._5_3_);
    *param_1 = CONCAT35(DAT_1802a1fb8._5_3_,(undefined5)DAT_1802a1fb8);
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if ((longlong)uVar1 < (longlong)local_40) {
      FUN_180002ac0();
    }
    puVar4 = param_1;
    uVar5 = local_48;
    if (0xf < uVar1) {
      uVar2 = local_48 | uVar1;
      uVar5 = 0x16;
      if (0x16 < uVar2) {
        uVar5 = uVar2;
      }
      if (uVar2 < 0xfff) {
        puVar4 = (undefined8 *)FUN_1801d61c8(uVar5 + 1);
      }
      else {
        lVar3 = FUN_1801d61c8(uVar5 + 0x28);
        puVar4 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        puVar4[-1] = lVar3;
      }
      *param_1 = puVar4;
    }
    param_1[2] = uVar1;
    param_1[3] = uVar5;
    FUN_1802079d0(puVar4,hMem,uVar1);
    *(undefined1 *)((longlong)puVar4 + uVar1) = 0;
    hMem = local_58;
  }
  LocalFree(hMem);
  return param_1;
}



int * __thiscall std::_System_error_category::vfunction4(_System_error_category *this,int *param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;

  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_1801d9d98(param_2);
    if (iVar1 == 0) {
      *param_1 = param_2;
      ppuVar2 = &PTR_vftable_18020e790;
      goto LAB_1800630e5;
    }
  }
  *param_1 = iVar1;
  ppuVar2 = &PTR_vftable_18020e7a0;
LAB_1800630e5:
  *(undefined ***)(param_1 + 2) = ppuVar2;
  return param_1;
}



_System_error_category * __thiscall std::_System_error_category::vfunction1(_System_error_category *this,uint param_1)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x61c82bc54f892c93;
  local_50 = 0xb90663c271579d3;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc6da4c2636e6f49;
        if (uVar1 != 0x6a584df9689c5540) break;
        local_48 = 0x7c8012eb2f2908a9;
        if ((param_1 & 1) == 0) {
          local_48 = 0x704529c742344c1f;
        }
        local_50 = 0x5f95004798091ae;
      }
      if (uVar1 != 0x797942ef56a99907) break;
      thunk_FUN_1801f42e0(this,0x10);
      local_48 = 0x1ab37d1d38592b40;
      local_50 = 0x6f0f04de03edf6f1;
    }
    local_48 = local_48 ^ 0xc6da4c2636e6f49;
  } while (uVar1 != 0x75bc79c33bb4ddb1);
  return this;
}


