#include "../include/aerialclient_types.h"


failure * __thiscall std::ios_base::failure::failure(failure *this,undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_18008bba0(this,&local_28,param_1);
  this->vftablePtr = &vftable;
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return this;
  }
}



failure * __thiscall std::ios_base::failure::failure(failure *this,longlong param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;

  this->vftablePtr = (failure_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  this->vftablePtr = (failure_vftable *)&_System_error::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  (this->exception_data).offset_0x10 = (int)uVar1;
  (this->exception_data).offset_0x14 = (int)((ulonglong)uVar1 >> 0x20);
  (this->exception_data).offset_0x18 = ppuVar2;
  this->vftablePtr = &vftable;
  return this;
}



failure * __thiscall std::ios_base::failure::vfunction1(failure *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xf9abc9b76623b37f;
  local_50 = 0xb17e51cfafe514aa;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xe71148d48eb0dd8a;
        if (uVar1 != 0x16f72f1c1bd0abc1) break;
        thunk_FUN_1801f42e0(this,0x28);
        local_48 = 0xf20d1e33915a9e16;
        local_50 = 0xada00a748267f6ee;
      }
      if (uVar1 != 0x48d59878c9c6a7d5) break;
      this->vftablePtr = (failure_vftable *)&exception::vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0xfb43fa48617eb9e1;
      if ((param_1 & 1) == 0) {
        local_48 = 0xb219c11369937ad8;
      }
      local_50 = 0xedb4d5547aae1220;
    }
    local_48 = local_48 ^ 0xe71148d48eb0dd8a;
  } while (uVar1 != 0x5fad1447133d68f8);
  return this;
}


