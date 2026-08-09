#include "../include/aerialclient_types.h"


system_error * __thiscall std::system_error::system_error(system_error *this,longlong param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;

  this->vftablePtr = (system_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  this->vftablePtr = (system_error_vftable *)&_System_error::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  (this->exception_data).offset_0x10 = (int)uVar1;
  (this->exception_data).offset_0x14 = (int)((ulonglong)uVar1 >> 0x20);
  (this->exception_data).offset_0x18 = ppuVar2;
  this->vftablePtr = &vftable;
  return this;
}



system_error * __thiscall std::system_error::vfunction1(system_error *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x874089791d086eb7;
  local_50 = 0x883bfbce091fdeec;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x992cfbf4b189cdf3;
        if (uVar1 != 0xf7b72b71417b05b) break;
        this->vftablePtr = (system_error_vftable *)&exception::vftable;
        FUN_1801dd238(&this->exception_data);
        local_48 = 0x8be6134229ea936c;
        if ((param_1 & 1) == 0) {
          local_48 = 0xc5b14d424b4d0d30;
        }
        local_50 = 0xd1b2874f9d18b7de;
      }
      if (uVar1 != 0x5a54940db4f224b2) break;
      thunk_FUN_1801f42e0(this,0x28);
      local_48 = 0x834b2b46835c8173;
      local_50 = 0x9748e14b55093b9d;
    }
    local_48 = local_48 ^ 0x992cfbf4b189cdf3;
  } while (uVar1 != 0x1403ca0dd655baee);
  return this;
}



system_error * __thiscall std::system_error::system_error(system_error *this,undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  uStack_20 = param_1[1];
  _System_error::_System_error((_System_error *)this,&local_28);
  this->vftablePtr = &vftable;
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return this;
  }
}


