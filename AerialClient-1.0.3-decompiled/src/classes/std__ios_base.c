#include "../include/aerialclient_types.h"


void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;

  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || ((&DAT_1802a9560)[lVar1] = (&DAT_1802a9560)[lVar1] + -1, (char)(&DAT_1802a9560)[lVar1] < '\x01'))
  {
    FUN_1801d9c08(param_1);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
      if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
        puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      thunk_FUN_1801f42e0(lVar1,0x10);
    }
  }
  return;
}


