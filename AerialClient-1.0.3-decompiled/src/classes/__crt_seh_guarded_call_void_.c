#include "../include/aerialclient_types.h"


void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,<lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  longlong lVar1;
  longlong *plVar2;

  __acrt_lock(*(undefined4 *)param_1);
  for (plVar2 = &DAT_1802a9ca8; plVar2 != &DAT_1802a9cb0; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_1802a0700) {
      lVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_1802a0700);
      *plVar2 = lVar1;
    }
  }
  __acrt_unlock(*(undefined4 *)param_3);
  return;
}



void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
          (__crt_seh_guarded_call<void> *this,<lambda_7f2adfce497ff2baa965cd4f576ecfd1> *param_1,
          <lambda_2a444430fde8c29194d880d93eed5e8f> *param_2,<lambda_8dff2cf36a5417162780cd64fa2883ef> *param_3)

{
  <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(param_2);
  *(uint *)(**(longlong **)param_3 + 0x3a8) = *(uint *)(**(longlong **)param_3 + 0x3a8) & 0xffffffef;
  return;
}


