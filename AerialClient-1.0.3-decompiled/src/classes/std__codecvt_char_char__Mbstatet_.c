#include "../include/aerialclient_types.h"


undefined1 __thiscall std::codecvt<char,char,_Mbstatet>::vfunction4(void)

{
  return 1;
}



undefined8 __thiscall std::codecvt<char,char,_Mbstatet>::vfunction5(void)

{
  return 1;
}



undefined8 __thiscall std::codecvt<char,char,_Mbstatet>::vfunction6(void)

{
  return 1;
}



undefined8 __thiscall
std::codecvt<char,char,_Mbstatet>::vfunction7
          (codecvt<char,char,_Mbstatet> *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 *param_4,undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}



undefined8 __thiscall
std::codecvt<char,char,_Mbstatet>::vfunction8
          (codecvt<char,char,_Mbstatet> *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 *param_4,undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}



undefined8 __thiscall
std::codecvt<char,char,_Mbstatet>::vfunction9
          (codecvt<char,char,_Mbstatet> *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 *param_4)

{
  *param_4 = param_2;
  return 3;
}



ulonglong __thiscall
std::codecvt<char,char,_Mbstatet>::vfunction10
          (codecvt<char,char,_Mbstatet> *this,undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;

  uVar1 = 0x7fffffff;
  if (param_3 - param_2 < 0x7fffffff) {
    uVar1 = param_3 - param_2;
  }
  if (param_4 <= uVar1) {
    uVar1 = param_4;
  }
  return uVar1;
}



codecvt<char,char,_Mbstatet> * __thiscall
std::codecvt<char,char,_Mbstatet>::vfunction1(codecvt<char,char,_Mbstatet> *this,uint param_1)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x3be0b40e7d75c2cf;
  local_50 = 0xb60b6282eb066155;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x9bf450ed2a895e7d;
        if (uVar1 != 0x8debd68c9673a39a) break;
        local_48 = 0x62f34a69f346bd01;
        if ((param_1 & 1) == 0) {
          local_48 = 0x46babbee425a0520;
        }
        local_50 = 0x34e6209ca8527bd7;
      }
      if (uVar1 != 0x56156af55b14c6d6) break;
      thunk_FUN_1801f42e0(this,0x10);
      local_48 = 0x854a54628294e1d5;
      local_50 = 0xf716cf10689c9f22;
    }
    local_48 = local_48 ^ 0x9bf450ed2a895e7d;
  } while (uVar1 != 0x725c9b72ea087ef7);
  return this;
}


