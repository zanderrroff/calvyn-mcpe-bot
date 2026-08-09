#include "../include/aerialclient_types.h"


void __cdecl std::_Locinfo::_Locinfo_ctor(_Locinfo *param_1,char *param_2)

{
  char *pcVar1;

  pcVar1 = setlocale(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_1801d8a28(param_1 + 0x48,pcVar1);
  pcVar1 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar1 = setlocale(0,param_2);
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "*";
  }
  FUN_1801d8a28(param_1 + 0x58,pcVar1);
  return;
}



void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1)

{
  if (*(char **)(param_1 + 0x48) != (char *)0x0) {
    setlocale(0,*(char **)(param_1 + 0x48));
  }
  return;
}


