#include "../include/aerialclient_types.h"


void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)

{
  longlong lVar1;
  code *pcVar2;

  while (DAT_1802a04e0 < 10) {
    lVar1 = DAT_1802a04e0 * 8;
    DAT_1802a04e0 = DAT_1802a04e0 + 1;
    pcVar2 = DecodePointer(*(PVOID *)(&DAT_1802a9650 + lVar1));
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}


