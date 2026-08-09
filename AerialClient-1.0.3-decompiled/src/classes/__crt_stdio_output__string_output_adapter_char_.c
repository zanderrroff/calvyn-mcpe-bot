#include "../include/aerialclient_types.h"


void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,__crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;

  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = uVar4;
      if (uVar2 < uVar4) {
        uVar3 = uVar2;
      }
      FUN_1802079d0(*puVar1,param_1,uVar3);
      **(longlong **)this = **(longlong **)this + uVar3;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar3;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar3 == uVar4) {
          *param_3 = *param_3 + (int)uVar3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}


