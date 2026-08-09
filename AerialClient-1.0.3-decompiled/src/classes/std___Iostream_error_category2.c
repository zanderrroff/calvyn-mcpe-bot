#include "../include/aerialclient_types.h"


undefined * __thiscall std::_Iostream_error_category2::vfunction2(void)

{
  FUN_1800b8f52(&DAT_1802a22e4,&DAT_18027238c,0x1f,9,&DAT_1802a22f0);
  return &DAT_1802a22e4;
}



undefined8 * __thiscall
std::_Iostream_error_category2::vfunction3(_Iostream_error_category2 *this,undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 local_a9;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  char *local_60;

  local_a0 = 0xaf74d4ec3cb5aa4f;
  local_a8 = 0xf824fc96870bf958;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar5 = local_a0 ^ 0x51d128eb11f74a4e;
            uVar2 = local_a0 ^ local_a8;
            local_a8 = local_a8 ^ 0x51d128eb11f74a4e;
            local_a0 = uVar5;
            if (-0x54d040d37cf43ae < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x4f8b52a8f35d229f) {
              if (uVar2 == 0x9bd3807243689c73) {
                param_1[1] = local_88;
                puVar4 = (undefined8 *)FUN_1801d61c8(0x20);
                *param_1 = puVar4;
                param_1[2] = 0x15;
                param_1[3] = 0x1f;
                FUN_1800b8f52(&DAT_1802a2300,&DAT_1802723cc,0x1c,0x16,&DAT_1802a2318);
                *(ulonglong *)((longlong)puVar4 + 0xd) = CONCAT53(DAT_1802a230d._3_5_,(undefined3)DAT_1802a230d);
                uVar1 = CONCAT35((undefined3)DAT_1802a230d,uRam00000001802a2308);
                *puVar4 = _DAT_1802a2300;
                puVar4[1] = uVar1;
                *(undefined1 *)((longlong)puVar4 + 0x15) = local_a9;
                local_a0 = 0x4e3a2d285400b80b;
                local_a8 = 0xf809aa99213cc1a1;
              }
              else if (uVar2 == 0x9f44c4303f473851) {
                uVar2 = local_98 | local_80;
                local_90 = 0x16;
                if (0x16 < uVar2) {
                  local_90 = uVar2;
                }
                local_a0 = 0xe4936add04214097;
                if (0xffe < uVar2) {
                  local_a0 = 0x940280ffbd449830;
                }
                local_a8 = 0x54e7c78a08839df6;
              }
            }
            else if (uVar2 == 0xb074ad570ca2dd61) {
              local_68 = (undefined8 *)FUN_1801d61c8(local_90 + 1);
              local_a0 = 0xf126badf649c5a2;
              local_a8 = 0xc00232788d2ce43;
            }
            else if (uVar2 == 0xc0e54775b5c705c6) {
              lVar3 = FUN_1801d61c8(local_90 + 0x28);
              local_68 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
              local_68[-1] = lVar3;
              local_a0 = 0x1b13529f4f17a7b1;
              local_a8 = 0x18011a15318cac50;
            }
            else if (uVar2 == 0xb63387b1753c79aa) {
              return param_1;
            }
          }
          if (0x47df6ba8eb0e9aed < (longlong)uVar2) break;
          if (uVar2 == 0xfab2fbf2c830bc53) {
            local_60 = (char *)FUN_1801d9d70(param_2);
            *param_1 = 0;
            param_1[1] = 0;
            local_98 = strlen(local_60);
            local_a0 = 0x24d5a1c56acd2f67;
            if ((longlong)local_98 < local_88) {
              local_a0 = 0x62cf8573edb8a84c;
            }
            local_a8 = 0x7dce2744bb83c7e;
          }
          else if (uVar2 == 0x312488a7e9b0be1) {
            *param_1 = local_68;
            local_a0 = 0x4eca21f1d8384052;
            local_a8 = 0x9154a593336dabc;
            local_78 = local_90;
            local_70 = local_68;
          }
          else if (uVar2 == 0x230943b121751319) {
            local_78 = local_80;
            local_a0 = 0x51ddd4ec7c0b2a86;
            if (local_98 < 0x10) {
              local_a0 = 0x89467b74a8428839;
            }
            local_a8 = 0xce9910dc434c12d7;
            local_70 = param_1;
          }
        }
        if (uVar2 != 0x47df6ba8eb0e9aee) break;
        param_1[2] = local_98;
        param_1[3] = local_78;
        FUN_1802079d0(local_70,local_60,local_98);
        *(undefined1 *)((longlong)local_70 + local_98) = local_a9;
        local_a0 = 0x782bbd4519c0ae1a;
        local_a8 = 0xce183af46cfcd7b0;
      }
      if (uVar2 != 0x5750287abbbe5317) break;
      local_80 = 0xf;
      local_88 = 0;
      local_a9 = 0;
      local_a0 = 0x4430e4c1010741dc;
      if (param_2 == 1) {
        local_a0 = 0x25519f418a5f61fc;
      }
      local_a8 = 0xbe821f33c937fd8f;
    }
  } while (uVar2 != 0x65136707a6009432);
  FUN_180002ac0();
}



_Iostream_error_category2 * __thiscall
std::_Iostream_error_category2::vfunction1(_Iostream_error_category2 *this,uint param_1)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xe6e831e5aa3bb788;
  local_50 = 0xbd303120994f7acc;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x4b17a3160c4fee84;
        if (uVar1 != 0xa631215934c45fbb) break;
        thunk_FUN_1801f42e0(this,0x10);
        local_48 = 0x1287d02263160d14;
        local_50 = 0x5b03ce0582babac1;
      }
      if (uVar1 != 0x5bd800c53374cd44) break;
      local_48 = 0x29ace955437ad7e6;
      if ((param_1 & 1) == 0) {
        local_48 = 0xc619d62b96123f88;
      }
      local_50 = 0x8f9dc80c77be885d;
    }
    local_48 = local_48 ^ 0x4b17a3160c4fee84;
  } while (uVar1 != 0x49841e27e1acb7d5);
  return this;
}


