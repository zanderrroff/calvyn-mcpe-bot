#include "../include/aerialclient_types.h"


bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;

  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    puVar5 = &DAT_1802a0870;
    if (uVar2 + 2 < 2) {
      puVar4 = &DAT_1802a0870;
    }
    else {
      puVar4 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    if (puVar4[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        puVar5 = (undefined *)((&DAT_1802a9d80)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1801e639c;
    }
    puVar3 = (undefined4 *)FUN_1801e6ae4();
    *puVar3 = 0x16;
    FUN_1801e1344();
    bVar1 = false;
  }
  else {
LAB_1801e639c:
    bVar1 = true;
  }
  return bVar1;
}


