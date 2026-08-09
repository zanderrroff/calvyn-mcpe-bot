#include "../include/aerialclient_types.h"


bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this,longlong param_1)

{
  this->vftablePtr = (bad_exception_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8);
  this->vftablePtr = &vftable;
  return this;
}



bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this)

{
  (this->exception_data).offset_0x8 = 0;
  (this->exception_data).offset_0x0 = "bad exception";
  this->vftablePtr = &vftable;
  return this;
}


