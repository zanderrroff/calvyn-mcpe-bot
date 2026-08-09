#include "../include/aerialclient_types.h"


undefined8 __thiscall std::_Generic_error_category::vfunction5(_Generic_error_category *this,int *param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 2) >> 8),
                  *param_1 == param_2 &&
                  this[1].vftablePtr == *(_Generic_error_category_vftable **)(*(longlong *)(param_1 + 2) + 8));
}



undefined8 __thiscall
std::_Generic_error_category::vfunction6(_Generic_error_category *this,undefined4 param_1,int *param_2)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  longlong local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  (*this->vftablePtr->vfunction4)(this,local_20,param_1);
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(local_18 + 8) >> 8),
                    *(longlong *)(local_18 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8) &&
                    local_20[0] == *param_2);
  }
}



undefined * __thiscall std::_Generic_error_category::vfunction2(void)

{
  FUN_1800b8f52(&DAT_1802a1fcc,&DAT_180271a4a,0x17,8,&DAT_1802a1fd4);
  return &DAT_1802a1fcc;
}



undefined8 * __thiscall
std::_Generic_error_category::vfunction3(_Generic_error_category *this,undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  char *local_60;

  local_98 = 0x2a934494ee269717;
  local_a0 = 0x5f473657779679ed;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_98 ^ 0xf666fdc0e3b22483;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0xf666fdc0e3b22483;
          local_98 = uVar3;
          if ((longlong)uVar1 < 0x73b28c8f68563c9) break;
          if ((longlong)uVar1 < 0x4d0a75e100fdf8e9) {
            if (uVar1 == 0x73b28c8f68563c9) {
              *param_1 = local_68;
              local_98 = 0x398dd56e8ef9864c;
              local_a0 = 0xa00a3e20aa57755d;
              local_78 = local_88;
              local_70 = local_68;
            }
            else if (uVar1 == 0x10fd65026e5af702) {
              FUN_180002ac0();
            }
          }
          else if (uVar1 == 0x4d0a75e100fdf8e9) {
            local_78 = local_80;
            local_98 = 0x547a4f7a6162db16;
            if (local_90 < 0x10) {
              local_98 = 0x4d293d50c61abab1;
            }
            local_a0 = 0xd4aed61ee2b449a0;
            local_70 = param_1;
          }
          else if (uVar1 == 0x75d472c399b0eefa) {
            local_80 = 0xf;
            local_60 = (char *)FUN_1801d9d70(param_2);
            *param_1 = 0;
            param_1[1] = 0;
            local_90 = strlen(local_60);
            local_98 = 0xcc154c1766e2fe33;
            if ((longlong)local_90 < 0) {
              local_98 = 0x91e25cf40845f1d8;
            }
            local_a0 = 0x811f39f6661f06da;
          }
        }
        if (-0x667814b1db510cf0 < (longlong)uVar1) break;
        if (uVar1 == 0x80d4996483d692b6) {
          uVar1 = local_90 | local_80;
          local_88 = 0x16;
          if (0x16 < uVar1) {
            local_88 = uVar1;
          }
          local_98 = 0xb4a999fc36fc4868;
          if (0xffe < uVar1) {
            local_98 = 0x86a483429f05c916;
          }
          local_a0 = 0x274e7da71af3b84b;
        }
        else if (uVar1 == 0x93e7e45b2c0ff023) {
          local_68 = (undefined8 *)FUN_1801d61c8(local_88 + 1);
          local_98 = 0xa741a35343c69ae3;
          local_a0 = 0xa07a8b9bb543f92a;
        }
      }
      if (uVar1 != 0xa1eafee585f6715d) break;
      lVar2 = FUN_1801d61c8(local_88 + 0x28);
      local_68 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      local_68[-1] = lVar2;
      local_98 = 0x7457aeaa7e33c4ab;
      local_a0 = 0x736c866288b6a762;
    }
  } while (uVar1 != 0x9987eb4e24aef311);
  param_1[2] = local_90;
  param_1[3] = local_78;
  FUN_1802079d0(local_70,local_60,local_90);
  *(undefined1 *)((longlong)local_70 + local_90) = 0;
  return param_1;
}



undefined4 * __thiscall
std::_Generic_error_category::vfunction4(_Generic_error_category *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(_Generic_error_category **)(param_1 + 2) = this;
  return param_1;
}



_Generic_error_category * __thiscall
std::_Generic_error_category::vfunction1(_Generic_error_category *this,uint param_1)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x8fb1c347a4497175;
  local_50 = 0x954239948ddcc5d5;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x24cde43b5433b0a6;
        if (uVar1 != 0x1af3fad32995b4a0) break;
        local_48 = 0x1a478ae9cb02ade0;
        if ((param_1 & 1) == 0) {
          local_48 = 0xaf310ddf96a04282;
        }
        local_50 = 0x6d71811032b3018;
      }
      if (uVar1 != 0x1c9092f8c8299df8) break;
      thunk_FUN_1801f42e0(this,0x10);
      local_48 = 0xa70887162cbb4ac3;
      local_50 = 0xeee92d8b9303859;
    }
    local_48 = local_48 ^ 0x24cde43b5433b0a6;
  } while (uVar1 != 0xa9e615ce958b729a);
  return this;
}


