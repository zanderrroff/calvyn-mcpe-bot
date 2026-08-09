#include "../include/aerialclient_types.h"


bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,longlong param_1)

{
  this->vftablePtr = (bad_alloc_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}



bad_alloc * __thiscall std::bad_alloc::vfunction1(bad_alloc *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x2e4f23dc44056b07;
  local_50 = 0xc3463513e8e36184;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xbc3200053673ad55;
        if (uVar1 != 0x8547375fc393aa03) break;
        thunk_FUN_1801f42e0(this,0x18);
        local_48 = 0x7c5ead5eecda1c90;
        local_50 = 0x69bb6e51f2b653a9;
      }
      if (uVar1 != 0xed0916cface60a83) break;
      this->vftablePtr = (bad_alloc_vftable *)&exception::vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0xfaf75e558367563c;
      if ((param_1 & 1) == 0) {
        local_48 = 0x6a55aa055e98b306;
      }
      local_50 = 0x7fb0690a40f4fc3f;
    }
    local_48 = local_48 ^ 0xbc3200053673ad55;
  } while (uVar1 != 0x15e5c30f1e6c4f39);
  return this;
}



bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (this->exception_data).offset_0x8 = 0;
  (this->exception_data).offset_0x0 = "bad allocation";
  this->vftablePtr = &vftable;
  return this;
}


