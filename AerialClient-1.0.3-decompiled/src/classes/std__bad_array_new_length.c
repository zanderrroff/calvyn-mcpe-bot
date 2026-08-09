#include "../include/aerialclient_types.h"


void std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor(void)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  bad_array_new_length_vftable *local_28;
  undefined *local_20;
  undefined8 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  local_18 = 0;
  local_38 = &DAT_1802a17ac;
  FUN_18004e1e3(&DAT_1802a1794,&DAT_18027046e,0x12,0x15);
  local_20 = &DAT_1802a1794;
  local_28 = &vftable;
  FUN_1801dd110(&local_28,&DAT_180251860);
}



bad_array_new_length * __thiscall
std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this,longlong param_1)

{
  this->vftablePtr = (bad_array_new_length_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}



bad_array_new_length * __thiscall std::bad_array_new_length::vfunction1(bad_array_new_length *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x1fe68a651790d025;
  local_50 = 0x75630aca1fa3088f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x23ccfd433308196b;
        if (uVar1 != 0xc47bbde6bd0d389a) break;
        thunk_FUN_1801f42e0(this,0x18);
        local_48 = 0x78fcf311195abe1c;
        local_50 = 0xf827619cda333663;
      }
      if (uVar1 != 0x6a8580af0833d8aa) break;
      this->vftablePtr = (bad_array_new_length_vftable *)&exception::vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0xff341369bf9e2523;
      if ((param_1 & 1) == 0) {
        local_48 = 0xbb943c02c1fa95c6;
      }
      local_50 = 0x3b4fae8f02931db9;
    }
    local_48 = local_48 ^ 0x23ccfd433308196b;
  } while (uVar1 != 0x80db928dc369887f);
  return this;
}



bad_array_new_length * __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (this->exception_data).offset_0x8 = 0;
  (this->exception_data).offset_0x0 = "bad array new length";
  this->vftablePtr = &vftable;
  return this;
}


