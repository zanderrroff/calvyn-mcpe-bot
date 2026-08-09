#include "../include/aerialclient_types.h"


_System_error * __thiscall std::_System_error::_System_error(_System_error *this,longlong param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;

  this->vftablePtr = (_System_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8);
  this->vftablePtr = &vftable;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  (this->exception_data).offset_0x10 = *(undefined4 *)(param_1 + 0x18);
  (this->exception_data).offset_0x14 = uVar2;
  *(undefined4 *)&(this->exception_data).offset_0x18 = uVar3;
  *(undefined4 *)((longlong)&(this->exception_data).offset_0x18 + 4) = uVar4;
  this->vftablePtr = (_System_error_vftable *)&PTR_FUN_18020e7b0;
  FUN_18005f8b0(&(this->exception_data).offset_0x20,param_1 + 0x28);
  FUN_18005f8b0(&(this->exception_data).offset_0x40,param_1 + 0x48);
  (this->exception_data).offset_0x70 = 0;
  (this->exception_data).offset_0x78 = 0;
  (this->exception_data).offset_0x60 = 0;
  (this->exception_data).offset_0x68 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x80) < 0x10) {
    plVar8 = (longlong *)(param_1 + 0x68);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x68);
  }
  if (-1 < (longlong)uVar1) {
    if (uVar1 < 0x10) {
      (this->exception_data).offset_0x70 = uVar1;
      (this->exception_data).offset_0x78 = 0xf;
      lVar6 = plVar8[1];
      (this->exception_data).offset_0x60 = *plVar8;
      (this->exception_data).offset_0x68 = lVar6;
    }
    else {
      uVar5 = uVar1 | 0xf;
      uVar7 = 0x16;
      if (0x16 < uVar5) {
        uVar7 = uVar5;
      }
      if (uVar5 < 0xfff) {
        uVar5 = FUN_1801d61c8(uVar7 + 1);
      }
      else {
        lVar6 = FUN_1801d61c8(uVar7 + 0x28);
        uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar6;
      }
      (this->exception_data).offset_0x60 = uVar5;
      (this->exception_data).offset_0x70 = uVar1;
      (this->exception_data).offset_0x78 = uVar7;
      FUN_1802079d0(uVar5,plVar8,uVar1 + 1);
    }
    return this;
  }
  FUN_180002ac0();
}



_System_error * __thiscall std::_System_error::_System_error(_System_error *this,longlong param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;

  this->vftablePtr = (_System_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  FUN_1801dd1b8(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  (this->exception_data).offset_0x10 = (int)uVar1;
  (this->exception_data).offset_0x14 = (int)((ulonglong)uVar1 >> 0x20);
  (this->exception_data).offset_0x18 = ppuVar2;
  return this;
}



_System_error * __thiscall std::_System_error::vfunction1(_System_error *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xb136639afb695a7b;
  local_50 = 0x687a4982d25216a6;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x7012a82cea81c56c;
        if (uVar1 != 0xd94c2a18293b4cdd) break;
        this->vftablePtr = (_System_error_vftable *)&exception::vftable;
        FUN_1801dd238(&this->exception_data);
        local_48 = 0x2702bfcbe849515c;
        if ((param_1 & 1) == 0) {
          local_48 = 0x875e607ad5bd810f;
        }
        local_50 = 0x6ac8d60c22650603;
      }
      if (uVar1 != 0x4dca69c7ca2c575f) break;
      thunk_FUN_1801f42e0(this,0x28);
      local_48 = 0x50987a165d5eb1a5;
      local_50 = 0xbd0ecc60aa8636a9;
    }
    local_48 = local_48 ^ 0x7012a82cea81c56c;
  } while (uVar1 != 0xed96b676f7d8870c);
  return this;
}



_System_error * __thiscall std::_System_error::_System_error(_System_error *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 ***local_90;
  undefined8 ***local_88;
  undefined1 local_80;
  undefined8 ***local_78 [3];
  ulonglong local_60;

  local_c0 = 0xb4bb5f60f17de2a6;
  local_c8 = 0x49ea180b470c7b95;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar4 = local_c0 ^ 0x54b90c3e4f9591c5;
          uVar3 = local_c0 ^ local_c8;
          local_c8 = local_c8 ^ 0x54b90c3e4f9591c5;
          local_c0 = uVar4;
          if (-0x294a1b978670b1e6 < (longlong)uVar3) break;
          if (uVar3 == 0x9e1738cc5f5a8c38) {
            thunk_FUN_1801f42e0(local_a0,local_a8);
            local_c0 = 0xd5d2929bf45f3dff;
            local_c8 = 0x2bb37bc2882c2923;
          }
          else if (uVar3 == 0x9fa098ef6a71b396) {
            local_a0 = local_78[0];
            local_a8 = local_b0 + 1;
            local_c0 = 0xf91bf5890ab55d93;
            if (0xfff < local_a8) {
              local_c0 = 0xa1424f6170921df4;
            }
            local_c8 = 0x670ccd4555efd1ab;
            local_98 = local_a0;
          }
          else if (uVar3 == 0xc64e8224257dcc5f) {
            local_90 = (undefined8 ***)local_98[-1];
            local_c0 = 0x5e119d86b0b47df5;
            if ((ulonglong)((longlong)local_98 + (-8 - (longlong)local_90)) < 0x20) {
              local_c0 = 0x6fd06cfdfaf02795;
            }
            local_c8 = 0xb9658895837f698e;
          }
        }
        if (-0x2aeb894498e66ce < (longlong)uVar3) break;
        if (uVar3 == 0xd6b5e468798f4e1b) {
          local_a8 = local_b0 + 0x28;
          local_c0 = 0xa511e2a9d52cf782;
          local_c8 = 0x3b06da658a767bba;
          local_a0 = local_90;
        }
        else if (uVar3 == 0xe774151333cb147b) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar3 != 0xfd51476bb6719933) break;
      (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],local_78);
      local_88 = local_78;
      if (0xf < local_60) {
        local_88 = local_78[0];
      }
      this->vftablePtr = (_System_error_vftable *)&exception::vftable;
      (this->exception_data).offset_0x0 = 0;
      (this->exception_data).offset_0x8 = 0;
      local_80 = 1;
      FUN_1801dd1b8(&local_88,&this->exception_data);
      this->vftablePtr = (_System_error_vftable *)&runtime_error::vftable;
      local_b0 = local_60;
      local_c0 = 0xc216572774b1a8f7;
      if (0xf < local_60) {
        local_c0 = 0xa3d7269162b30fbd;
      }
      local_c8 = 0x3c77be7e08c2bc2b;
    }
  } while (uVar3 != 0xfe61e9597c7314dc);
  this->vftablePtr = &vftable;
  uVar1 = *param_1;
  ppuVar2 = (undefined **)param_1[1];
  (this->exception_data).offset_0x10 = (int)uVar1;
  (this->exception_data).offset_0x14 = (int)((ulonglong)uVar1 >> 0x20);
  (this->exception_data).offset_0x18 = ppuVar2;
  return this;
}


