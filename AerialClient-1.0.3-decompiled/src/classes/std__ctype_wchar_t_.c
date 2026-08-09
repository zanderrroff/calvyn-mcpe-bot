#include "../include/aerialclient_types.h"


undefined8 std::ctype<wchar_t>::ctype<wchar_t>_Constructor_or_Destructor(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 local_c8 [108];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_30 = 0x60;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_28 = (undefined8 *)FUN_1801d61c8(0x60);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar3 = &DAT_18020c3c0;
    }
    else {
      puVar3 = (undefined *)(lVar1 + 0x30);
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        puVar3 = *(undefined **)(lVar1 + 0x28);
      }
    }
    FUN_180032140(local_c8,puVar3);
    puVar2 = local_28;
    *(undefined4 *)(local_28 + 1) = 0;
    *local_28 = &vftable;
    FUN_1801d9e70(local_28 + 2);
    FUN_1801d8f14(&local_5c);
    *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_40;
    *(undefined4 *)(puVar2 + 10) = uStack_3c;
    *(undefined4 *)((longlong)puVar2 + 0x54) = uStack_38;
    *(undefined4 *)(puVar2 + 0xb) = uStack_34;
    *(undefined4 *)(puVar2 + 8) = local_4c;
    *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_48;
    *(undefined4 *)(puVar2 + 9) = uStack_44;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_40;
    *(undefined4 *)(puVar2 + 6) = local_5c;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_58;
    *(undefined4 *)(puVar2 + 7) = uStack_54;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_50;
    *param_1 = (longlong)puVar2;
    FUN_1800322f0(local_c8);
  }
  return 2;
}



void __thiscall
std::ctype<wchar_t>::vfunction4(ctype<wchar_t> *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1801dbcc8(param_1,param_2,param_3,this + 1);
  return;
}



undefined4 __thiscall std::ctype<wchar_t>::vfunction5(ctype<wchar_t> *this,uint param_1,wchar_t param_2)

{
  short sVar1;
  uint uVar2;
  undefined6 extraout_var;

  sVar1 = _Getwctype(param_2,(_Ctypevec *)(this + 1));
  uVar2 = (uint)CONCAT62(extraout_var,sVar1) & param_1;
  return CONCAT31((int3)(uVar2 >> 8),(short)uVar2 != 0);
}



undefined2 * __thiscall
std::ctype<wchar_t>::vfunction6(ctype<wchar_t> *this,uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong local_68;
  ulonglong local_60;
  wchar_t *local_58;
  wchar_t *local_50;
  wchar_t *local_48;

  local_60 = 0x216baeea1acd9da8;
  local_68 = 0x1ab09e56f9af8db1;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x4456504871c20f5;
        if ((longlong)uVar2 < 0x3a3341cd09765e81) break;
        if (uVar2 == 0x3a3341cd09765e81) {
          local_48 = local_50;
          uVar1 = (*this->vftablePtr->vfunction5)(this,param_1,*local_50);
          local_60 = 0x4189d7dd04cec3c0;
          if ((char)uVar1 != '\0') {
            local_60 = 0x62706d281d751166;
          }
          local_68 = 0xd294a251f583ae30;
          local_58 = local_50;
        }
        else {
          local_60 = local_60 ^ 0x4456504871c20f5;
          if (uVar2 == 0x3bdb30bce3621019) {
            local_60 = 0x343e97a533f86500;
            if (param_2 == param_3) {
              local_60 = 0xbee91911d27884d7;
            }
            local_68 = 0xe0dd6683a8e3b81;
            local_58 = param_2;
            local_50 = param_2;
          }
        }
      }
      if (uVar2 != 0x931d758cf14d6df0) break;
      local_58 = local_48 + 1;
      local_60 = 0xda46ba5fb2599071;
      if (local_58 == param_3) {
        local_60 = 0x509134eb53d971a6;
      }
      local_68 = 0xe075fb92bb2fcef0;
      local_50 = local_58;
    }
    local_60 = local_60 ^ 0x4456504871c20f5;
  } while (uVar2 != 0xb0e4cf79e8f6bf56);
  return local_58;
}



undefined2 * __thiscall
std::ctype<wchar_t>::vfunction7(ctype<wchar_t> *this,uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong local_68;
  ulonglong local_60;
  wchar_t *local_58;
  wchar_t *local_50;
  wchar_t *local_48;

  local_60 = 0x62803443ebce1f0;
  local_68 = 0xb7b9ee7f0bf7e0d8;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x7de734e0c4ae2caf;
        if (-0x2bce5f6f93c2c8a6 < (longlong)uVar2) break;
        if (uVar2 == 0xa53d64b6fff63592) {
          local_58 = local_48 + 1;
          local_60 = 0x1180b505b8ff54c5;
          if (local_58 == param_3) {
            local_60 = 0xd08c03657e2ba6b9;
          }
          local_68 = 0xc5b11595d4c2639e;
          local_50 = local_58;
        }
        else {
          local_60 = local_60 ^ 0x7de734e0c4ae2caf;
          if (uVar2 == 0xb191ed3b354b0128) {
            local_60 = 0xddcfb158836ea971;
            if (param_2 == param_3) {
              local_60 = 0x1cc3073845ba5b0d;
            }
            local_68 = 0x9fe11c8ef539e2a;
            local_58 = param_2;
            local_50 = param_2;
          }
        }
      }
      if (uVar2 != 0xd431a0906c3d375b) break;
      local_48 = local_50;
      uVar1 = (*this->vftablePtr->vfunction5)(this,param_1,*local_50);
      local_60 = 0x2073969066c12c9d;
      if ((char)uVar1 != '\0') {
        local_60 = 0x9073e4d633dedc28;
      }
      local_68 = 0x354e8060cc28e9ba;
      local_58 = local_50;
    }
    local_60 = local_60 ^ 0x7de734e0c4ae2caf;
  } while (uVar2 != 0x153d16f0aae9c527);
  return local_58;
}



undefined2 * __thiscall std::ctype<wchar_t>::vfunction8(ctype<wchar_t> *this,undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  ulonglong local_68;
  ulonglong local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  ctype<wchar_t> *local_48;

  local_60 = 0x1e0ca04a6554ae99;
  local_68 = 0x1d73b53f191c5be4;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xd0fd896a581bae59;
        if ((longlong)uVar2 < 0x37f15757c48f57d) break;
        if (uVar2 == 0x197d62fec0378991) {
          local_60 = 0x7c5d2571efe6772a;
          local_68 = 0x7ecc53089e5b9900;
          local_50 = param_1;
          local_48 = this + 1;
        }
        else {
          local_60 = local_60 ^ 0xd0fd896a581bae59;
          if (uVar2 == 0x37f15757c48f57d) {
            local_60 = 0x8bd7c15ccaf8f3f9;
            if (param_1 == param_2) {
              local_60 = 0xe00831082fd4716;
            }
            local_68 = 0x92aaa3a20acf7a68;
            local_58 = param_1;
          }
        }
      }
      if (uVar2 != 0x291767971bdee2a) break;
      uVar1 = FUN_1801dbcf4(*local_50,local_48);
      *local_50 = uVar1;
      local_58 = local_50 + 1;
      local_60 = 0x216a5ab770025767;
      if (local_58 == param_2) {
        local_60 = 0xbf510c7c898d8433;
      }
      local_68 = 0x23fb2cce01bfb94d;
      local_50 = local_58;
    }
    local_60 = local_60 ^ 0xd0fd896a581bae59;
  } while (uVar2 != 0x9caa20b288323d7e);
  return local_58;
}



void __thiscall std::ctype<wchar_t>::vfunction9(ctype<wchar_t> *this,undefined4 param_1)

{
  FUN_1801dbcf4(param_1,this + 1);
  return;
}



undefined2 * __thiscall std::ctype<wchar_t>::vfunction10(ctype<wchar_t> *this,undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  ulonglong local_68;
  ulonglong local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  ctype<wchar_t> *local_48;

  local_60 = 0x3eb8a333d7ef348c;
  local_68 = 0x7cbe9510de4fa651;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x85a79223ecf66919;
        if ((longlong)uVar2 < 0x153d9252d27cdec8) break;
        if (uVar2 == 0x153d9252d27cdec8) {
          local_60 = 0x53c8e93dda3202c5;
          local_68 = 0xda1643a9e662d3b8;
          local_58 = param_1;
          local_48 = this + 1;
        }
        else {
          local_60 = local_60 ^ 0x85a79223ecf66919;
          if (uVar2 == 0x4206362309a092dd) {
            local_60 = 0xc9fe9aaca3110114;
            if (param_1 == param_2) {
              local_60 = 0xbf2d2527634aaa8;
            }
            local_68 = 0xdcc308fe716ddfdc;
            local_50 = param_1;
          }
        }
      }
      if (uVar2 != 0x89deaa943c50d17d) break;
      uVar1 = FUN_1801dbd68(*local_58,local_48);
      *local_58 = uVar1;
      local_58 = local_58 + 1;
      local_60 = 0x6991c8b795bacc8d;
      if (local_58 == param_2) {
        local_60 = 0x377eb88faeb36884;
      }
      local_68 = 0xe04f6223a9ea1df0;
      local_50 = local_58;
    }
    local_60 = local_60 ^ 0x85a79223ecf66919;
  } while (uVar2 != 0xd731daac07597574);
  return local_50;
}



void __thiscall std::ctype<wchar_t>::vfunction11(ctype<wchar_t> *this,undefined4 param_1)

{
  FUN_1801dbd68(param_1,this + 1);
  return;
}



char * __thiscall std::ctype<wchar_t>::vfunction12(ctype<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  int iVar1;
  ulonglong uVar2;
  wchar_t wVar3;
  undefined1 auStackY_c8 [32];
  ulonglong local_98;
  ulonglong local_90;
  char *local_88;
  wchar_t *local_80;
  char *local_78;
  _Cvtvec *local_68;
  wchar_t local_5a;
  mbstate_t local_58 [3];
  char local_49;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStackY_c8;
  local_90 = 0x606afef2702bdf67;
  local_98 = 0xc5bfe26f447e5c5c;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_90 ^ local_98;
        local_98 = local_98 ^ 0xfe46411bd15a990c;
        if ((longlong)uVar2 < -0x535e8cb81dcc089c) break;
        if (uVar2 == 0xaca17347e233f764) {
          local_49 = *local_78;
          local_58[0] = 0;
          local_58[1] = 0;
          iVar1 = _Mbrtowc(&local_5a,&local_49,1,local_58,local_68);
          wVar3 = local_5a;
          if (iVar1 < 0) {
            wVar3 = L'\xffff';
          }
          *local_80 = wVar3;
          local_88 = local_78 + 1;
          local_80 = local_80 + 1;
          local_90 = 0xea134f215ff6d7f3;
          if (local_88 == param_2) {
            local_90 = 0xe7997adfc75be94d;
          }
          local_98 = 0x46b23c66bdc52097;
          local_78 = local_88;
        }
        else {
          local_90 = local_90 ^ 0xfe46411bd15a990c;
          if (uVar2 == 0x1c9aded4e52bf77f) {
            local_90 = 0x52d34dd482a926ba;
            local_98 = 0xfe723e93609ad1de;
            local_80 = param_3;
            local_78 = param_1;
            local_68 = (_Cvtvec *)(this + 3);
          }
        }
      }
      if (uVar2 != 0xa5d51c9d3455833b) break;
      local_90 = 0x7f8d81eca9e77ab2;
      if (param_1 == param_2) {
        local_90 = 0xc23c198136524417;
      }
      local_98 = 0x63175f384ccc8dcd;
      local_88 = param_1;
    }
    local_90 = local_90 ^ 0xfe46411bd15a990c;
  } while (uVar2 != 0xa12b46b97a9ec9da);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStackY_c8)) {
  }
  return local_88;
}



ulonglong __thiscall std::ctype<wchar_t>::vfunction13(ctype<wchar_t> *this,char param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStackY_48 [32];
  wchar_t local_1a;
  mbstate_t local_18 [3];
  char local_9;
  ulonglong local_8;

  local_8 = DAT_1802a0400 ^ (ulonglong)auStackY_48;
  local_18[0] = 0;
  local_18[1] = 0;
  local_9 = param_1;
  iVar1 = _Mbrtowc(&local_1a,&local_9,1,local_18,(_Cvtvec *)(this + 3));
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (ulonglong)(ushort)local_1a;
  }
  if (DAT_1802a0400 == (local_8 ^ (ulonglong)auStackY_48)) {
    return uVar2;
  }
}



undefined2 * __thiscall
std::ctype<wchar_t>::vfunction14
          (ctype<wchar_t> *this,undefined2 *param_1,undefined2 *param_2,byte param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  uint local_7c;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined2 *local_68;
  ctype<wchar_t> *local_60;
  undefined8 local_58;
  undefined1 local_4d [5];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_88 = 0x43f510e3acc059ae;
  local_90 = 0x36b0d2d36c499de9;
  local_7c = (uint)param_3;
  do {
    while( true ) {
      while( true ) {
        puVar2 = local_68;
        puVar1 = local_70;
        uVar6 = local_88 ^ 0x9b26138498839dd3;
        uVar5 = local_88 ^ local_90;
        local_90 = local_90 ^ 0x9b26138498839dd3;
        local_88 = uVar6;
        if ((longlong)uVar5 < 0x643286ccf5da7bd5) break;
        if (uVar5 == 0x643286ccf5da7bd5) {
          local_58 = 0;
          iVar4 = FUN_1801d8fbc(local_4d,*local_68,&local_58,local_60);
          uVar3 = local_4d[0];
          if (iVar4 != 1) {
            uVar3 = (char)local_7c;
          }
          *puVar1 = uVar3;
          local_78 = puVar2 + 1;
          local_88 = 0x8b0f56a4ca1a8071;
          if (local_78 != param_2) {
            local_88 = 0x54b75d20d712dbba;
          }
          local_70 = puVar1 + 1;
          local_90 = 0x3085dbec22c8a06f;
          local_68 = local_78;
        }
        else if (uVar5 == 0x7545c230c089c447) {
          local_88 = 0x730c527772fb4225;
          if (param_1 == param_2) {
            local_88 = 0x80504c797f3e501;
          }
          local_90 = 0xb38f898f7f21c51f;
          local_78 = param_1;
        }
      }
      if (uVar5 != 0xc083dbf80dda873a) break;
      local_88 = 0xe88f526cde9b0c58;
      local_90 = 0x8cbdd4a02b41778d;
      local_70 = param_4;
      local_68 = param_1;
      local_60 = this + 3;
    }
  } while (uVar5 != 0xbb8a8d48e8d2201e);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_b8)) {
  }
  return local_78;
}



undefined1 __thiscall std::ctype<wchar_t>::vfunction15(ctype<wchar_t> *this,undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_15 [5];
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  local_20 = 0;
  iVar1 = FUN_1801d8fbc(local_15,param_1,&local_20,this + 3);
  if (iVar1 != 1) {
    local_15[0] = param_2;
  }
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return local_15[0];
  }
}



ctype<wchar_t> * __thiscall std::ctype<wchar_t>::vfunction1(ctype<wchar_t> *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  uint local_44;

  local_50 = 0x28a8ec9ee5606f63;
  local_58 = 0xc723883caa148787;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_50 ^ local_58;
          local_58 = local_58 ^ 0x9e0fd21b665582fd;
          if (-0x10749b5db08b171d < (longlong)uVar1) break;
          if (uVar1 == 0xc05d6cacb40dfe1d) {
            thunk_FUN_1801f42e0(this[1]._Crt_new_delete);
            local_50 = 0x86f7bb3fe58df448;
            local_58 = 0x7b6ceaa79d29a7ad;
          }
          else {
            local_50 = local_50 ^ 0x9e0fd21b665582fd;
            if (uVar1 == 0xc9b9354bbdd2e364) {
              thunk_FUN_1801f42e0(this,0x60);
              local_50 = 0x86c27f5734b21793;
              local_58 = 0xe5fda5ab3fbfe174;
            }
          }
        }
        if (uVar1 != 0xef8b64a24f74e8e4) break;
        local_44 = 0;
        this->vftablePtr = &vftable;
        local_50 = 0x8f576cb877e8f518;
        if (*(int *)&this[2].vftablePtr == 0) {
          local_50 = 0xb291518cbb4158e0;
        }
        local_58 = 0x4f0a0014c3e50b05;
      }
      if (uVar1 != 0xfd9b519878a453e5) break;
      thunk_FUN_1801f42e0(this[2]._Crt_new_delete);
      local_50 = 0xd4e745c3caa2f73e;
      if ((param_1 & 1) == local_44) {
        local_50 = 0x7e61aa747c7de2bd;
      }
      local_58 = 0x1d5e70887770145a;
    }
    local_50 = local_50 ^ 0x9e0fd21b665582fd;
  } while (uVar1 != 0x633fdafc0b0df6e7);
  return this;
}


