#include "../include/aerialclient_types.h"


_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  undefined *puVar1;

  LOCK();
  DAT_1802a0480 = DAT_1802a0480 + 1;
  UNLOCK();
  if (DAT_1802a0480 == 0) {
    puVar1 = &DAT_1802a93c0;
    do {
      FUN_1801dbfc4(puVar1);
      puVar1 = puVar1 + 0x28;
    } while (puVar1 != &DAT_1802a9500);
  }
  return this;
}


