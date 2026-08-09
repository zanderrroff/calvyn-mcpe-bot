#include "../include/aerialclient_types.h"


void std::bad_cast::bad_cast_Constructor_or_Destructor(void)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  bad_cast_vftable *local_28;
  undefined *local_20;
  undefined8 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  local_18 = 0;
  local_38 = &DAT_1802a1e5c;
  FUN_18004e1e3(&DAT_1802a1e50,&DAT_1802712dd,0x1c,9);
  local_20 = &DAT_1802a1e50;
  local_28 = &vftable;
  FUN_1801dd110(&local_28,&DAT_180251900);
}



bad_cast * __thiscall std::bad_cast::bad_cast(bad_cast *this,longlong param_1)

{
  this->vftablePtr = (bad_cast_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}



bad_cast * __thiscall std::bad_cast::vfunction1(bad_cast *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x5ccbb14da8e2d13b;
  local_50 = 0x579f93f8b47614dc;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xdafdee4abdcd17e3;
        if (uVar1 != 0xaacd023abd4fdb7e) break;
        thunk_FUN_1801f42e0(this,0x18);
        local_48 = 0x9cdbe04b2832d7dd;
        local_50 = 0x5adc1521a2b45fa4;
      }
      if (uVar1 != 0xb5422b51c94c5e7) break;
      this->vftablePtr = (bad_cast_vftable *)&exception::vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0x7c1baf661aedace4;
      if ((param_1 & 1) == 0) {
        local_48 = 0x10d158362d24ffe3;
      }
      local_50 = 0xd6d6ad5ca7a2779a;
    }
    local_48 = local_48 ^ 0xdafdee4abdcd17e3;
  } while (uVar1 != 0xc607f56a8a868879);
  return this;
}


