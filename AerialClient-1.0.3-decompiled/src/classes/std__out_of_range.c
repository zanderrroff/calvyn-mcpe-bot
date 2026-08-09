#include "../include/aerialclient_types.h"


out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,longlong param_1)

{
  this->vftablePtr = (out_of_range_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8);
  this->vftablePtr = &vftable;
  return this;
}



out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,undefined8 param_1)

{
  undefined8 local_18;
  undefined1 local_10;

  local_10 = 1;
  this->vftablePtr = (out_of_range_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  local_18 = param_1;
  FUN_1801dd1b8(&local_18);
  this->vftablePtr = &vftable;
  return this;
}


