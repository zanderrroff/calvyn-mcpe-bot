#include "../include/aerialclient_types.h"


bad_function_call * __thiscall std::bad_function_call::bad_function_call(bad_function_call *this,longlong param_1)

{
  this->vftablePtr = (bad_function_call_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8);
  this->vftablePtr = &vftable;
  return this;
}



bad_function_call * __thiscall std::bad_function_call::bad_function_call(bad_function_call *this)

{
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  this->vftablePtr = &vftable;
  return this;
}



bad_function_call * __thiscall std::bad_function_call::vfunction1(bad_function_call *this,ulonglong param_1)

{
  this->vftablePtr = (bad_function_call_vftable *)&exception::vftable;
  FUN_1801dd238(&this->exception_data);
  if ((param_1 & 1) != 0) {
    thunk_FUN_1801f42e0(this,0x18);
  }
  return this;
}



char * __thiscall std::bad_function_call::vfunction2(void)

{
  return "bad function call";
}


