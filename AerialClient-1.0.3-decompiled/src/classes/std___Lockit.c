#include "../include/aerialclient_types.h"


_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 == 0) {
    _lock_locales();
  }
  else if (param_1 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1802a93c0 + (longlong)param_1 * 0x28));
  }
  return this;
}



void __thiscall std::_Lockit::~_Lockit(_Lockit *this)

{
  int iVar1;

  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    FUN_1801f1a20();
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1802a93c0 + (longlong)iVar1 * 0x28));
  }
  return;
}


