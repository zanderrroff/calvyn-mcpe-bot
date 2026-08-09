#include "../include/aerialclient_types.h"


exception * __thiscall std::exception::exception(exception *this,longlong param_1)

{
  this->vftablePtr = &vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  return this;
}



undefined * __thiscall std::exception::vfunction2(exception *this)

{
  undefined *puVar1;

  puVar1 = (undefined *)(this->exception_data).offset_0x0;
  FUN_18004e1e3(&DAT_1802a17b0,&DAT_1802704a7,0x1f,0x12,&DAT_1802a17c4);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_1802a17b0;
  }
  return puVar1;
}



exception * __thiscall std::exception::vfunction1(exception *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xa2d7b51751efb9c;
  local_50 = 0x2d7e9db67bde0e78;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x525e3d57104f751d;
        if (uVar1 != 0xf539e933aceedc5b) break;
        thunk_FUN_1801f42e0(this,0x18);
        local_48 = 0xc0b644d623410e39;
        local_50 = 0xddfafb797faab8d8;
      }
      if (uVar1 != 0x2753e6e70ec0f5e4) break;
      this->vftablePtr = &vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0x6eb13471ef338715;
      if ((param_1 & 1) == 0) {
        local_48 = 0x86c462ed1f36edaf;
      }
      local_50 = 0x9b88dd4243dd5b4e;
    }
    local_48 = local_48 ^ 0x525e3d57104f751d;
  } while (uVar1 != 0x1d4cbfaf5cebb6e1);
  return this;
}



exception * __thiscall std::exception::exception(exception *this,undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  this->vftablePtr = &vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  local_18 = 1;
  local_20 = param_1;
  FUN_1801dd1b8(&local_20,&this->exception_data);
  this->vftablePtr = (exception_vftable *)&PTR_FUN_180209860;
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return this;
  }
}



exception * __thiscall std::exception::exception(exception *this,longlong param_1)

{
  this->vftablePtr = &vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  this->vftablePtr = (exception_vftable *)&PTR_FUN_180209860;
  return this;
}



void std::exception::exception_Constructor_or_Destructor(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_158;
  ulonglong local_150;
  undefined2 local_146;
  uint local_144;
  uintptr_t local_140;
  ulonglong local_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong *local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong *local_50;
  ulonglong local_48;

  local_150 = 0xf7acde23102f869f;
  local_158 = 0x9fdc1f154276428;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_150 ^ 0x2a7f79c3142e9fea;
              uVar1 = local_150 ^ local_158;
              local_158 = local_158 ^ 0x2a7f79c3142e9fea;
              local_150 = uVar2;
              if ((longlong)uVar1 < 0x560e311839216f2b) break;
              if ((longlong)uVar1 < 0x70b5d39504eada16) {
                if ((longlong)uVar1 < 0x6f13978b13a5446d) {
                  if (uVar1 == 0x560e311839216f2b) {
                    local_80 = *(longlong *)(local_90 + -8);
                    local_150 = 0x5528e276d953e153;
                    if (local_118 <= (ulonglong)((local_90 + local_128) - local_80)) {
                      local_150 = 0x2033d5e30f9be56;
                    }
                    local_158 = 0x8973dc95b0913920;
                  }
                  else if (uVar1 == 0x66c3fb9cff4da58e) {
                    thunk_FUN_1801f42e0(local_b0,local_b8);
                    local_150 = 0x120b4f6ea69fecda;
                    local_158 = 0x6f8044776f059ba6;
                  }
                }
                else if (uVar1 == 0x6f13978b13a5446d) {
                  local_b0 = *local_e0;
                  local_88 = local_48 << ((byte)local_120 & 0x3f);
                  local_b8 = local_88 + local_110;
                  local_150 = 0x3fe6bdbdc641b9fc;
                  if (local_b8 <= local_130) {
                    local_150 = 0xf2b7739002d7359;
                  }
                  local_158 = 0x69e88ca5ff60d6d7;
                  local_90 = local_b0;
                }
                else if (uVar1 == 0x7073b9b731ee4d47) {
                  local_d0 = *local_e8;
                  local_58 = local_70 << ((byte)local_120 & 0x3f);
                  local_d8 = local_58 + local_110;
                  local_150 = 0xd5c77b50eefd4810;
                  if (local_d8 <= local_130) {
                    local_150 = 0xefe1a0eab35eb9d8;
                  }
                  local_158 = 0x3d8573ac947edfcc;
                  local_60 = local_d0;
                }
              }
              else if ((longlong)uVar1 < 0x7b62d210d1583848) {
                if (uVar1 == 0x70b5d39504eada16) {
                  local_c8 = local_f0 + 0x28;
                  local_150 = 0x4b64eb2f0e542135;
                  local_158 = 0x748867778f3c644c;
                  local_c0 = local_98;
                }
                else if (uVar1 == 0x73f4c69b55f5e05b) {
                  local_c0 = *local_f8;
                  local_c8 = local_f0 + local_120;
                  local_150 = 0xbf97f6cee3bb8d5e;
                  if (local_c8 <= local_130) {
                    local_150 = 0xfb19a886b38bf06f;
                  }
                  local_158 = 0xc4f524de32e3b516;
                  local_68 = local_c0;
                }
              }
              else if (uVar1 == 0x7b62d210d1583848) {
                local_98 = *(longlong *)(local_68 + -8);
                local_150 = 0x470d9971c4fd2c20;
                if (local_118 <= (ulonglong)((local_68 + local_128) - local_98)) {
                  local_150 = 0x26993b7d41fc71a7;
                }
                local_158 = 0x37b84ae4c017f636;
              }
              else if (uVar1 == 0x7d8b0b19c99a777c) {
                param_1[0xb] = local_140;
                *local_50 = local_138;
                *(undefined2 *)local_e0 = local_146;
                local_e8 = param_1 + 5;
                local_78 = param_1 + 8;
                local_70 = param_1[8];
                local_150 = 0x523a56bf744d961a;
                if (local_70 <= local_138) {
                  local_150 = 0x115b3865346aac5c;
                }
                local_158 = 0x2249ef0845a3db5d;
              }
            }
            if (0x9dd2c72dc6a6d48 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x23a4c11c963d278d) {
              if (uVar1 == 0xd264d34627206614) {
                thunk_FUN_1801f42e0(local_d0,local_d8);
                local_150 = 0x23a4076e8c6a507e;
                local_158 = 0x10b6d003fda3277f;
              }
              else if ((uVar1 == 0x8b70e1cb80688776) || (uVar1 == 0xa2735540de82ebd1)) goto LAB_180065c1b;
            }
            else if (uVar1 == 0xdc5b3ee369c2d873) {
              local_b8 = local_88 + local_100;
              local_150 = 0xf755449aa89c1d74;
              local_158 = 0x9196bf0657d1b8fa;
              local_b0 = local_80;
            }
            else if (uVar1 == 0xe84208fc7a8397dc) {
              local_a0 = *(longlong *)(local_60 + -8);
              local_150 = 0xb4cfa0c971c6c28e;
              if (local_118 <= (ulonglong)((local_60 + local_128) - local_a0)) {
                local_150 = 0x1f61d9fb732e4416;
              }
              local_158 = 0xbd128cbbadacafc7;
            }
            else if (uVar1 == 0xfe511fd24408e2b7) {
              local_100 = 0x29;
              local_108 = 0xf;
              local_118 = 0x20;
              local_140 = 0;
              local_120 = 1;
              local_128 = -8;
              local_130 = 0xfff;
              local_144 = 0;
              local_146 = 0;
              local_110 = 2;
              local_138 = 7;
              *param_1 = &PTR_FUN_18020e7b0;
              local_f8 = param_1 + 0xd;
              local_a8 = param_1 + 0x10;
              local_f0 = param_1[0x10];
              local_150 = 0xae89c3112d0c0202;
              if (local_f0 < 0x10) {
                local_150 = 0xc5a0590a9bad5f15;
              }
              local_158 = 0xdd7d058a78f9e259;
            }
          }
          if ((longlong)uVar1 < 0x3312d76d71c97701) break;
          if (uVar1 == 0x3fec8c5881684579) {
            thunk_FUN_1801f42e0(local_c0,local_c8);
            local_150 = 0x3867c4f272111a05;
            local_158 = 0x20ba98729145a749;
          }
          else if (uVar1 == 0x3312d76d71c97701) {
            param_1[7] = local_140;
            *local_78 = local_138;
            *(undefined2 *)local_e8 = local_146;
            *param_1 = &vftable;
            FUN_1801dd238(param_1 + 1);
            return;
          }
        }
        if (uVar1 != 0x9dd2c72dc6a6d49) break;
        local_d8 = local_58 + local_100;
        local_150 = 0xde9c39dd45f4683f;
        local_158 = 0xcf8ea9b62d40e2b;
        local_d0 = local_a0;
      }
      if (uVar1 != 0x18dd5c80e354bd4c) break;
      param_1[0xf] = local_140;
      *local_a8 = local_108;
      *(undefined1 *)local_f8 = 0;
      local_e0 = param_1 + 9;
      local_50 = param_1 + 0xc;
      local_48 = param_1[0xc];
      local_150 = 0x45ac3624afd260d;
      if (local_48 <= local_138) {
        local_150 = 0x16c25ff090c2151c;
      }
      local_158 = 0x6b4954e959586260;
    }
  } while (uVar1 != 0x1121719981eb8791);
LAB_180065c1b:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_144,local_140);
}



exception * __thiscall std::exception::exception(exception *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x8997c0302926f57c;
  local_50 = 0xeb4756735822701;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x10c13f8d1ad155d1;
        if (uVar1 != 0x8723b5571ca4d27d) break;
        this->vftablePtr = (exception_vftable *)&PTR_exception_18020e910;
        (this->exception_data).offset_0x18 = &vftable.vfunction1;
        FUN_1801dd238(&(this->exception_data).offset_0x20);
        this->vftablePtr = &vftable;
        FUN_1801dd238(&this->exception_data);
        local_48 = 0x477ea13ba3d712a4;
        if ((param_1 & 1) == 0) {
          local_48 = 0xcc4a183c3a2de624;
        }
        local_50 = 0xb52ca0227f0aa92b;
      }
      if (uVar1 != 0xf2520119dcddbb8f) break;
      thunk_FUN_1801f42e0(this,0x38);
      local_48 = 0xe8fda48404195c62;
      local_50 = 0x919b1c9a413e136d;
    }
    local_48 = local_48 ^ 0x10c13f8d1ad155d1;
  } while (uVar1 != 0x7966b81e45274f0f);
  return this;
}



exception * __thiscall std::exception::exception(exception *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xa95e86a6bdba43da;
  local_50 = 0xc37d8a6b841b253b;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x4ed7243b872a4ff1;
        if (uVar1 != 0xb6e7b0648599200d) break;
        thunk_FUN_1801f42e0(this,0x38);
        local_48 = 0x8006d7946014d692;
        local_50 = 0x7080c790475cd2d4;
      }
      if (uVar1 != 0x6a230ccd39a166e1) break;
      this->vftablePtr = (exception_vftable *)&PTR_exception_18020e910;
      (this->exception_data).offset_0x18 = &vftable.vfunction1;
      FUN_1801dd238(&(this->exception_data).offset_0x20);
      this->vftablePtr = &vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0xb9400fe04fcae1d6;
      if ((param_1 & 1) == 0) {
        local_48 = 0xff21af80ed1bc59d;
      }
      local_50 = 0xfa7bf84ca53c1db;
    }
    local_48 = local_48 ^ 0x4ed7243b872a4ff1;
  } while (uVar1 != 0xf086100427480446);
  return this;
}



exception * __thiscall std::exception::exception(exception *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xda6ab03678ad708a;
  local_50 = 0xab3b43f47d17f7c2;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xcacefbeb6d1685ab;
        if (uVar1 != 0x412121e7e48216c2) break;
        thunk_FUN_1801f42e0(this,0x38);
        local_48 = 0xfc01dd3ec2047326;
        local_50 = 0xcca2670e1d09c650;
      }
      if (uVar1 != 0x7151f3c205ba8748) break;
      this->vftablePtr = (exception_vftable *)&PTR_exception_18020e910;
      (this->exception_data).offset_0x18 = &vftable.vfunction1;
      FUN_1801dd238(&(this->exception_data).offset_0x20);
      this->vftablePtr = &vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0x54b73853330819f8;
      if ((param_1 & 1) == 0) {
        local_48 = 0x2535a3840887ba4c;
      }
      local_50 = 0x159619b4d78a0f3a;
    }
    local_48 = local_48 ^ 0xcacefbeb6d1685ab;
  } while (uVar1 != 0x30a3ba30df0db576);
  return this;
}



void __thiscall std::exception::exception(exception *this)

{
  this->vftablePtr = (exception_vftable *)&PTR_exception_18020e910;
  (this->exception_data).offset_0x18 = &vftable.vfunction1;
  FUN_1801dd238(&(this->exception_data).offset_0x20);
  this->vftablePtr = &vftable;
  FUN_1801dd238(&this->exception_data);
  return;
}



exception * __thiscall std::exception::exception(exception *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xf46828d608771922;
  local_50 = 0xe14049e75686136d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x3ff6850b56fce7d0;
        if (uVar1 != 0x9826c9200f9e1c7f) break;
        thunk_FUN_1801f42e0(this,0x38);
        local_48 = 0x343fbb66750768b9;
        local_50 = 0x8f20c41c71953246;
      }
      if (uVar1 != 0x152861315ef10a4f) break;
      this->vftablePtr = (exception_vftable *)&PTR_exception_18020e910;
      (this->exception_data).offset_0x18 = &vftable.vfunction1;
      FUN_1801dd238(&(this->exception_data).offset_0x20);
      this->vftablePtr = &vftable;
      FUN_1801dd238(&this->exception_data);
      local_48 = 0xaaf453922fb78642;
      if ((param_1 & 1) == 0) {
        local_48 = 0x89cde5c824bbc0c2;
      }
      local_50 = 0x32d29ab220299a3d;
    }
    local_48 = local_48 ^ 0x3ff6850b56fce7d0;
  } while (uVar1 != 0xbb1f7f7a04925aff);
  return this;
}



exception * __thiscall std::exception::exception(exception *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xde621f3a2410c7c;
  local_50 = 0xc117482fdd78da44;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x5c9f0ad0b85a2de0;
        if (uVar1 != 0xccf169dc7f39d638) break;
        this->vftablePtr = (exception_vftable *)&PTR_exception_18020e910;
        (this->exception_data).offset_0x18 = &vftable.vfunction1;
        FUN_1801dd238(&(this->exception_data).offset_0x20);
        this->vftablePtr = &vftable;
        FUN_1801dd238(&this->exception_data);
        local_48 = 0xea101e486aca1e12;
        if ((param_1 & 1) == 0) {
          local_48 = 0xf52ebe42972e134f;
        }
        local_50 = 0x306e25f7fef5a59c;
      }
      if (uVar1 != 0xda7e3bbf943fbb8e) break;
      thunk_FUN_1801f42e0(this,0x40);
      local_48 = 0x6700aef585d74e07;
      local_50 = 0xa2403540ec0cf8d4;
    }
    local_48 = local_48 ^ 0x5c9f0ad0b85a2de0;
  } while (uVar1 != 0xc5409bb569dbb6d3);
  return this;
}


