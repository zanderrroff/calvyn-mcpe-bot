#include "../include/aerialclient_types.h"


undefined8 std::numpunct<char>::numpunct<char>_Constructor_or_Destructor(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 local_98 [104];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_30 = 0x30;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_28 = (undefined8 *)FUN_1801d61c8(0x30);
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
    FUN_180032140(local_98,puVar3);
    puVar2 = local_28;
    *(undefined4 *)(local_28 + 1) = 0;
    *local_28 = &vftable;
    FUN_1800323c0(local_28,local_98,1);
    *param_1 = (longlong)puVar2;
    FUN_1800322f0(local_98);
  }
  return 4;
}



undefined1 __thiscall std::numpunct<char>::vfunction4(numpunct<char> *this)

{
  return *(undefined1 *)&this[1]._Crt_new_delete;
}



undefined1 __thiscall std::numpunct<char>::vfunction5(numpunct<char> *this)

{
  return this[1]._Crt_new_delete.field_0x1;
}



undefined8 * __thiscall std::numpunct<char>::vfunction6(numpunct<char> *this,undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  numpunct<char>_vftable *local_60;

  local_98 = 0xad6de5bfdc03fbd4;
  local_a0 = 0x2f524efdaa96d67b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_98 ^ 0x7c14feb4c6ebf41;
            uVar1 = local_98 ^ local_a0;
            local_a0 = local_a0 ^ 0x7c14feb4c6ebf41;
            local_98 = uVar3;
            if ((longlong)uVar1 < 0x1aa6a91be9f597d8) break;
            if (uVar1 == 0x1aa6a91be9f597d8) {
              local_78 = (undefined8 *)FUN_1801d61c8(local_88 + 1);
              local_98 = 0x3d0e1318d7733e55;
              local_a0 = 0xdfbbfcb51ffe1d14;
            }
            else if (uVar1 == 0x31a27c24c57ff7d5) {
              uVar1 = local_90 | local_80;
              local_88 = 0x16;
              if (0x16 < uVar1) {
                local_88 = uVar1;
              }
              local_98 = 0x34ac989cbab22f22;
              if (0xffe < uVar1) {
                local_98 = 0x5f83a155fb376939;
              }
              local_a0 = 0x2e0a31875347b8fa;
            }
            else if (uVar1 == 0x718990d2a870d1c3) {
              lVar2 = FUN_1801d61c8(local_88 + 0x28);
              local_78 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
              local_78[-1] = lVar2;
              local_98 = 0x946fc8e98268311f;
              local_a0 = 0x76da27444ae5125e;
            }
          }
          if (-0x1d4a10523772dcc0 < (longlong)uVar1) break;
          if (uVar1 == 0x823fab4276952daf) {
            local_80 = 0xf;
            local_60 = this[1].vftablePtr;
            *param_1 = 0;
            param_1[1] = 0;
            local_90 = strlen((char *)local_60);
            local_98 = 0x463e44801fd3538;
            if ((longlong)local_90 < 0) {
              local_98 = 0xf6ecf94f9c7aef42;
            }
            local_a0 = 0x13bc38a81e8a1ea9;
          }
          else if (uVar1 == 0x902de2d83443d99a) {
            param_1[2] = local_90;
            param_1[3] = local_70;
            FUN_1802079d0(local_68,local_60,local_90);
            *(undefined1 *)((longlong)local_68 + local_90) = 0;
            return param_1;
          }
        }
        if (uVar1 != 0xe2b5efadc88d2341) break;
        *param_1 = local_78;
        local_98 = 0x138d0b3b2634033b;
        local_a0 = 0x83a0e9e31277daa1;
        local_70 = local_88;
        local_68 = local_78;
      }
      if (uVar1 != 0x17dfdce01f772b91) break;
      local_70 = local_80;
      local_98 = 0x1ec8f2aaa85b3c38;
      if (local_90 < 0x10) {
        local_98 = 0xbf476c5659671277;
      }
      local_a0 = 0x2f6a8e8e6d24cbed;
      local_68 = param_1;
    }
  } while (uVar1 != 0xe550c1e782f0f1eb);
  FUN_180002ac0();
}



undefined8 * __thiscall std::numpunct<char>::vfunction7(numpunct<char> *this,undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  numpunct<char>_vftable *local_60;

  local_98 = 0x7248dd5e48fad852;
  local_a0 = 0x8d517c5a9823d8de;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_98 ^ 0x9dd6d74a29d39829;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x9dd6d74a29d39829;
          local_98 = uVar3;
          if ((longlong)uVar1 < 0x13d5c6647ff8a591) break;
          if ((longlong)uVar1 < 0x5bb9cbeea4fc78c6) {
            if (uVar1 == 0x13d5c6647ff8a591) {
              lVar2 = FUN_1801d61c8(local_88 + 0x28);
              local_68 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
              local_68[-1] = lVar2;
              local_98 = 0x56e97fcb6d28aa40;
              local_a0 = 0xb0990eaef7e247ba;
            }
            else if (uVar1 == 0x42bc2bad3ef6c6f5) {
              local_68 = (undefined8 *)FUN_1801d61c8(local_88 + 1);
              local_98 = 0x345c9131d5242861;
              local_a0 = 0xd22ce0544feec59b;
            }
          }
          else if (uVar1 == 0x5bb9cbeea4fc78c6) {
            local_78 = local_80;
            local_98 = 0xa52d577b1bb216c5;
            if (local_90 < 0x10) {
              local_98 = 0xa8d8c3b37d53d74a;
            }
            local_a0 = 0x2dd545fc99db6f41;
            local_70 = param_1;
          }
          else if (uVar1 == 0x67182ec1eabe9358) {
            FUN_180002ac0();
          }
        }
        if ((longlong)uVar1 < -0x198f8e9a65351206) break;
        if (uVar1 == 0xe67071659acaedfa) {
          *param_1 = local_68;
          local_98 = 0xa04e97c35281193b;
          local_a0 = 0x2543118cb609a130;
          local_78 = local_88;
          local_70 = local_68;
        }
        else if (uVar1 == 0xff19a104d0d9008c) {
          local_80 = 0xf;
          local_60 = this[2].vftablePtr;
          *param_1 = 0;
          param_1[1] = 0;
          local_90 = strlen((char *)local_60);
          local_98 = 0x8d545ae022f0b142;
          if ((longlong)local_90 < 0) {
            local_98 = 0xb1f5bfcf6cb25adc;
          }
          local_a0 = 0xd6ed910e860cc984;
        }
      }
      if (uVar1 != 0x88f8128782697984) break;
      uVar1 = local_90 | local_80;
      local_88 = 0x16;
      if (0x16 < uVar1) {
        local_88 = uVar1;
      }
      local_98 = 0x2cf3f13beadb2d7a;
      if (0xffe < uVar1) {
        local_98 = 0x7d9a1cf2abd54e1e;
      }
      local_a0 = 0x6e4fda96d42deb8f;
    }
  } while (uVar1 != 0x850d864fe488b80b);
  param_1[2] = local_90;
  param_1[3] = local_78;
  FUN_1802079d0(local_70,local_60,local_90);
  *(undefined1 *)((longlong)local_70 + local_90) = 0;
  return param_1;
}



undefined8 * __thiscall std::numpunct<char>::vfunction8(numpunct<char> *this,undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  _Crt_new_delete local_60;

  local_98 = 0x30ec84e453af922;
  local_a0 = 0xcdbc355dd8ee5801;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_98 ^ 0x505f5c3f3c04d1cf;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x505f5c3f3c04d1cf;
          local_98 = uVar3;
          if (-0x19e9a7195b210e46 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x35e5d9cc876ad022) {
            if (uVar1 == 0xc5f4b9588e3ac5c7) {
              uVar1 = local_90 | local_80;
              local_88 = 0x16;
              if (0x16 < uVar1) {
                local_88 = uVar1;
              }
              local_98 = 0xc9bcbd24c1cddd71;
              if (0xffe < uVar1) {
                local_98 = 0x6b862054f206fd68;
              }
              local_a0 = 0x2faae5c265132cca;
            }
            else if (uVar1 == 0xa1e8c1656b437a1f) {
              FUN_180002ac0();
            }
          }
          else if (uVar1 == 0xca1a263378952fde) {
            *param_1 = local_78;
            local_98 = 0x1a4a055302c28339;
            local_a0 = 0xeefe2edb90264c4a;
            local_70 = local_88;
            local_68 = local_78;
          }
          else if (uVar1 == 0xceb2fd139dd4a123) {
            local_80 = 0xf;
            local_60 = this[2]._Crt_new_delete;
            *param_1 = 0;
            param_1[1] = 0;
            local_90 = strlen((char *)local_60);
            local_98 = 0xf29547887bb534c7;
            if ((longlong)local_90 < 0) {
              local_98 = 0xbf5f56d552c25f80;
            }
            local_a0 = 0x1eb797b03981259f;
          }
        }
        if (-0xb4bd4776d1b308e < (longlong)uVar1) break;
        if (uVar1 == 0xe61658e6a4def1bb) {
          local_78 = (undefined8 *)FUN_1801d61c8(local_88 + 1);
          local_98 = 0xe0d41f188cb3fa03;
          local_a0 = 0x2ace392bf426d5dd;
        }
        else if (uVar1 == 0xec22d03842341158) {
          local_70 = local_80;
          local_98 = 0x4b9beedd76b91c72;
          if (local_90 < 0x10) {
            local_98 = 0x7adb7c0d6a6716c6;
          }
          local_a0 = 0x8e6f5785f883d9b5;
          local_68 = param_1;
        }
      }
      if (uVar1 != 0x442cc5969715d1a2) break;
      lVar2 = FUN_1801d61c8(local_88 + 0x28);
      local_78 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      local_78[-1] = lVar2;
      local_98 = 0x9e3d2c04c1feaad9;
      local_a0 = 0x54270a37b96b8507;
    }
  } while (uVar1 != 0xf4b42b8892e4cf73);
  param_1[2] = local_90;
  param_1[3] = local_70;
  FUN_1802079d0(local_68,local_60,local_90);
  *(undefined1 *)((longlong)local_68 + local_90) = 0;
  return param_1;
}



numpunct<char> * __thiscall std::numpunct<char>::vfunction1(numpunct<char> *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x91018d3e2e24bc1f;
  local_50 = 0x4bedea9f1a7a9caf;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb785c268b35714e6;
        if (uVar1 != 0xdaec67a1345e20b0) break;
        this->vftablePtr = &vftable;
        thunk_FUN_1801f42e0(this[1].vftablePtr);
        thunk_FUN_1801f42e0(this[2].vftablePtr);
        thunk_FUN_1801f42e0(this[2]._Crt_new_delete);
        local_48 = 0xe314d92418113f63;
        if ((param_1 & 1) == 0) {
          local_48 = 0x6304f5ad7fb6ee0e;
        }
        local_50 = 0xa4c72f69693833d3;
      }
      if (uVar1 != 0x47d3f64d71290cb0) break;
      thunk_FUN_1801f42e0(this,0x30);
      local_48 = 0xd8f24e1d1f9d2021;
      local_50 = 0x1f3194d90913fdfc;
    }
    local_48 = local_48 ^ 0xb785c268b35714e6;
  } while (uVar1 != 0xc7c3dac4168edddd);
  return this;
}


