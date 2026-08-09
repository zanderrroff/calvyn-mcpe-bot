#include "../include/aerialclient_types.h"


logic_error * __thiscall std::logic_error::logic_error(logic_error *this,longlong param_1)

{
  this->vftablePtr = (logic_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8);
  this->vftablePtr = &vftable;
  return this;
}


