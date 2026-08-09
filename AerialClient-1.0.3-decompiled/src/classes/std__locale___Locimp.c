#include "../include/aerialclient_types.h"


void __thiscall std::locale::_Locimp::vfunction2(_Locimp *this)

{
  LOCK();
  *(int *)&this->_Crt_new_delete = *(int *)&this->_Crt_new_delete + 1;
  UNLOCK();
  return;
}



_Locimp * __thiscall std::locale::_Locimp::vfunction3(_Locimp *this)

{
  _Crt_new_delete *p_Var1;
  int iVar2;
  _Locimp *p_Var3;

  LOCK();
  p_Var1 = &this->_Crt_new_delete;
  iVar2 = *(int *)p_Var1;
  *(int *)p_Var1 = *(int *)p_Var1 + -1;
  UNLOCK();
  p_Var3 = (_Locimp *)0x0;
  if (iVar2 == 1) {
    p_Var3 = this;
  }
  return p_Var3;
}



_Locimp * __thiscall std::locale::_Locimp::vfunction1(_Locimp *this,ulonglong param_1)

{
  this->vftablePtr = &vftable;
  FUN_1801d8be4();
  if (this[2]._Crt_new_delete != (_Crt_new_delete)0x0) {
    thunk_FUN_1801f42e0();
  }
  this[2]._Crt_new_delete = (_Crt_new_delete)0x0;
  this->vftablePtr = (_Locimp_vftable *)&_Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1801f42e0(this,0x38);
  }
  return this;
}



_Locimp * __cdecl std::locale::_Locimp::_New_Locimp(bool param_1)

{
  _Locimp *p_Var1;
  _Locimp *p_Var2;

  p_Var1 = (_Locimp *)FUN_1801d61c8(0x38);
  p_Var2 = (_Locimp *)0x0;
  if (p_Var1 != (_Locimp *)0x0) {
    *(undefined4 *)(p_Var1 + 8) = 1;
    *(undefined8 *)(p_Var1 + 0x10) = 0;
    *(undefined8 *)(p_Var1 + 0x18) = 0;
    *(undefined4 *)(p_Var1 + 0x20) = 0;
    *(_Locimp_vftable **)p_Var1 = &vftable;
    p_Var1[0x24] = (_Locimp)param_1;
    *(undefined8 *)(p_Var1 + 0x28) = 0;
    p_Var1[0x30] = (_Locimp)0x0;
    FUN_1801d8a28(p_Var1 + 0x28,&DAT_180242678);
    p_Var2 = p_Var1;
  }
  return p_Var2;
}


