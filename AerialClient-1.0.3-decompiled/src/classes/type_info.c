#include "../include/aerialclient_types.h"


type_info * __thiscall type_info::vfunction1(type_info *this,ulonglong param_1)

{
  this->vftablePtr = &vftable;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1801f42e0(this,0x18);
  }
  return this;
}


