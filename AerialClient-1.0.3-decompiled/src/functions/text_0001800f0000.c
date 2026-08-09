#include "../include/aerialclient_types.h"


undefined8 FUN_1800f0070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  uintptr_t local_b8;
  byte local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_f0 = 0x1559655e6c557a39;
  local_f8 = 0x350b61c0a99913fe;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_f0 ^ 0xfd102e9ba6a6afac;
              uVar1 = local_f0 ^ local_f8;
              local_f8 = local_f8 ^ 0xfd102e9ba6a6afac;
              local_f0 = uVar3;
              if ((longlong)uVar1 < 0x1499a22b7994bb08) break;
              if ((longlong)uVar1 < 0x2f5fa0f5ef60b56d) {
                if ((longlong)uVar1 < 0x1c5792ecb1fbf031) {
                  if (uVar1 == 0x1499a22b7994bb08) {
                    local_48 = *(ulonglong *)(local_90 - 8);
                    local_f0 = 0x6f75e9dd9c9c2855;
                    if (0x1f < (local_70 - local_48) - 8) {
                      local_f0 = 0x3c44023acd0a7db0;
                    }
                    local_f8 = 0x402a492873fc9d38;
                  }
                  else if (uVar1 == 0x17e329f139c08680) {
                    FUN_1802079d0(local_c0);
                    local_f0 = 0x79b7c21da8360c5d;
                    local_f8 = 0x383dd2d68102219e;
                  }
                }
                else if (uVar1 == 0x1c5792ecb1fbf031) {
                  local_98 = local_e0;
                  local_58 = (longlong)local_e0 - DAT_1802a3e58;
                  uVar3 = local_58 >> (local_b0 & 0x3f);
                  local_50 = local_a8 + uVar3;
                  uVar1 = uVar3 >> ((byte)local_a8 & 0x3f);
                  local_e8 = uVar1 + uVar3;
                  if (local_e8 <= local_50) {
                    local_e8 = local_50;
                  }
                  if (local_d8 - uVar1 < uVar3) {
                    local_e8 = local_d8;
                  }
                  local_f0 = 0x3c9c9fefde25ac3d;
                  if (local_e8 <= local_d8) {
                    local_f0 = 0xc461cf6d6cb1f724;
                  }
                  local_f8 = 0xc9f1c5e230e573a8;
                }
                else if (uVar1 == 0x1f69e9c007a33486) {
                  DAT_1802a3e58 = local_c0;
                  DAT_1802a3e60 = (undefined8 *)(local_50 * 0x10 + local_c0);
                  DAT_1802a3e68 = (undefined8 *)(local_e8 * 0x10 + local_c0);
                  local_f0 = 0xe1547628ddf9231d;
                  local_f8 = 0xdf444d652a62ee4f;
                }
                else if (uVar1 == 0x2052049ec5cc69c7) {
                  local_a8 = 1;
                  local_b0 = 4;
                  local_b8 = 0;
                  local_d0 = 0x27;
                  local_d8 = 0xfffffffffffffff;
                  local_f0 = 0xd150ac1e3e3e5b03;
                  if (DAT_1802a3e70 <=
                      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c)) {
                    local_f0 = 0xa27b25b33289d360;
                  }
                  local_f8 = 0x3d0dc333d556781;
                }
              }
              else if ((longlong)uVar1 < 0x41fb938e24547ffb) {
                if (uVar1 == 0x2f5fa0f5ef60b56d) {
                  local_88 = local_68 + local_d0;
                  local_f0 = 0xd4f84c450b880afa;
                  local_f8 = 0x9d461a255be3a464;
                  local_80 = local_48;
                }
                else if (uVar1 == 0x418a10cb29342dc3) {
                  local_90 = DAT_1802a3e58;
                  local_f0 = 0xc1d09e6688941885;
                  if (DAT_1802a3e58 != 0) {
                    local_f0 = 0x9f42e428ab6353f8;
                  }
                  local_f8 = 0xdeb977a68f372c03;
                }
                else if (uVar1 == 0x3e103b4df79bcd52) {
                  return param_1;
                }
              }
              else if ((longlong)uVar1 < 0x5688d3e7917e5b61) {
                if (uVar1 == 0x41fb938e24547ffb) {
                  local_80 = local_90;
                  local_88 = (longlong)DAT_1802a3e68 - local_90;
                  local_f0 = 0xe40b640560279878;
                  if (local_88 < 0x1000) {
                    local_f0 = 0xb92c904e49d88dee;
                  }
                  local_f8 = 0xf092c62e19b32370;
                  local_70 = local_80;
                  local_68 = local_88;
                }
                else if (uVar1 == 0x49be5660506bae9e) {
                  thunk_FUN_1801f42e0(local_80,local_88);
                  local_f0 = 0xdb20650901d8f3ec;
                  local_f8 = 0xc4498cc9067bc76a;
                }
              }
              else if (uVar1 == 0x5688d3e7917e5b61) {
                local_c0 = local_c8;
                local_60 = local_c8 + local_58;
                *(undefined8 *)(local_c8 + local_58) = param_2;
                *(undefined8 *)(local_c8 + 8 + local_58) = param_3;
                local_f0 = 0xacdb38f17746f8b2;
                if (local_e0 != DAT_1802a3e60) {
                  local_f0 = 0x3567a98f125e9765;
                }
                local_f8 = 0xbb3811004e867e32;
              }
              else if (uVar1 == 0x7c6e4b12bef6e088) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b8);
              }
            }
            if (-0x2241cd6e735328d3 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x5e54067ff0234b1f) {
              if (uVar1 == 0x8e5fb88f5cd8e957) {
                FUN_1802079d0(local_c0,DAT_1802a3e58,(longlong)local_98 - DAT_1802a3e58);
                FUN_1802079d0(local_60 + 0x10,local_e0);
                local_f0 = 0xf346c4912afaeb0b;
                local_f8 = 0xb2ccd45a03cec6c8;
              }
              else if (uVar1 == 0x902c716b256e7622) {
                local_c8 = FUN_1801d61c8(local_a0);
                local_f0 = 0x2472a4361d0b5d81;
                local_f8 = 0x72fa77d18c7506e0;
              }
            }
            else if (uVar1 == 0xa1abf9800fdcb4e1) {
              local_e0 = DAT_1802a3e60;
              local_f0 = 0x6b5f7d2b63b597bd;
              if (DAT_1802a3e60 != DAT_1802a3e68) {
                local_f0 = 0xb333f08c3abb6479;
              }
              local_f8 = 0x7708efc7d24e678c;
            }
            else if (uVar1 == 0xc43b1f4be8f503f5) {
              *local_e0 = param_2;
              local_e0[1] = param_3;
              DAT_1802a3e60 = DAT_1802a3e60 + 2;
              local_f0 = 0xc56b98db5ae410c9;
              local_f8 = 0xfb7ba396ad7fdd9b;
            }
            else if (uVar1 == 0xd280702d036b3c82) {
              FUN_1801d62d8(&DAT_1802a3e70);
              local_f0 = 0x50e870e159ba01ed;
              if (DAT_1802a3e70 != -1) {
                local_f0 = 0x2cfdbbf0daca6222;
              }
              local_f8 = 0x8d564270d516d6c3;
            }
          }
          if (-0xe2865d5121f6684 < (longlong)uVar1) break;
          if (uVar1 == 0xddbe32918cacd72e) {
            atexit(FUN_1800f13e0);
            _Init_thread_footer(&DAT_1802a3e70);
            local_f0 = 0x876b3b2dfe5058d7;
            local_f8 = 0x26c0c2adf18cec36;
          }
          else if (uVar1 == 0xe0f6107f6392648b) {
            local_f0 = 0x75a6784f5a60a73c;
            if (local_e8 < 0x100) {
              local_f0 = 0x41210c47b316c81;
            }
            local_f8 = 0x943e61af5e5f1aa3;
          }
          else if (uVar1 == 0xe19819e0043fbd9f) {
            local_f0 = 0x5e1e8b2411097504;
            if (0xffffffffffffffd < local_e8) {
              local_f0 = 0x528b1d1b54559cde;
            }
            local_f8 = 0xafc9110efce9ec79;
          }
        }
        if ((longlong)uVar1 < -0x2bdf3ea57438f59) break;
        if (uVar1 == 0xd900a8f5c54848c) {
          local_a0 = local_e8 << (local_b0 & 0x3f);
          local_f0 = 0x45ca7a442b6df301;
          if (local_e8 != local_b8) {
            local_f0 = 0xf3b4b9dcd981cceb;
          }
          local_f8 = 0x1342a9a3ba13a860;
          local_c8 = 0;
        }
        else if (uVar1 == 0xfd420c15a8bc70a7) goto LAB_1800f0acf;
      }
      if (uVar1 != 0xf1d79a2aede0997d) break;
      lVar2 = FUN_1801d61c8(local_a0 + local_d0);
      local_c8 = local_d0 + lVar2 & 0xffffffffffffffe0;
      *(longlong *)(local_c8 - 8) = lVar2;
      local_f0 = 0xaeca95e776fadfd1;
      local_f8 = 0xf8424600e78484b0;
    }
  } while (uVar1 != 0xf56d5a0deec0df95);
LAB_1800f0acf:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined1 FUN_1800f0ae0(void)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined1 local_b3;
  char local_b2;
  char local_b1;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_e8;
  local_a8 = 0x7bffe5df2e13aa03;
  local_b0 = 0xe558133c991ce235;
LAB_1800f0be0:
  do {
    while( true ) {
      uVar5 = local_a8 ^ 0xb13525e06b7cad1c;
      uVar3 = local_a8 ^ local_b0;
      local_b0 = local_b0 ^ 0xb13525e06b7cad1c;
      local_a8 = uVar5;
      if (0x2fa56901068537b < (longlong)uVar3) break;
      if ((longlong)uVar3 < -0x20174b499e948cbb) {
        if (uVar3 == 0x9ea7f6e3b70f4836) {
          uVar4 = FUN_180181700();
          cVar2 = FUN_180181bb0(uVar4);
          local_a8 = 0x8d5f6cd64ba8adaa;
          if (cVar2 != '\0') {
            local_a8 = 0x14024b4cbcb7f3d3;
          }
          local_b0 = 0xf56fb05e70be2d56;
LAB_1800f10cd:
          local_b3 = 0;
        }
        else if (uVar3 == 0xa0d07458662cd329) {
          local_b1 = local_b2;
          local_a8 = 0x3556e4fe7c159a18;
          local_b0 = 0x5de09c42b610742f;
          local_90 = local_98;
        }
        else if (uVar3 == 0xc07eaadb428ef404) {
          uVar4 = FUN_180181700();
          local_b3 = FUN_180182140(uVar4);
          local_a8 = 0x55875f2175d8b98b;
          local_b0 = 0x2db783a94ece3977;
        }
      }
      else if (uVar3 == 0xdfe8b4b6616b7345) {
        FUN_1800f16e0(DAT_1802a3e58,DAT_1802a3e60,DAT_1802a3e60 - DAT_1802a3e58 >> 4);
        local_80 = DAT_1802a3e58;
        local_a0 = DAT_1802a3e60;
        local_a8 = 0xf92b9f8d3d3fc585;
        if (DAT_1802a3e58 == DAT_1802a3e60) {
          local_a8 = 0x2ae24516c37c1e38;
        }
        local_b0 = 0xea9cefcd81f2ea3c;
      }
      else if (uVar3 == 0xe16dfb12cc09de85) {
        local_a8 = 0xaa974790e6e83557;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
            DAT_1802a3e70) {
          local_a8 = 0x5f77573edf237d24;
        }
        local_b0 = 0x757ff32687834612;
      }
      else if (uVar3 == 0xf2ed991553e3daa3) {
        atexit(FUN_1800f13e0);
        _Init_thread_footer(&DAT_1802a3e70);
        local_a8 = 0x9a3e29987ff77837;
        local_b0 = 0x45d69d2e1e9c0b72;
      }
    }
    if ((longlong)uVar3 < 0x55640331dd2816fc) {
      if (uVar3 == 0x2fa56901068537c) {
        local_90 = local_88 + 0x10;
        local_a8 = 0xf6fad0ddb4706c18;
        if (local_90 == local_a0) {
          local_a8 = 0xcb28ab50a35d94d3;
        }
        local_b0 = 0x9e4ca8617e75822f;
      }
      else if (uVar3 == 0x13b77040bccd2fb9) {
        local_78 = &local_50;
        local_70 = &local_60;
        local_a8 = 0xf1e1b785402440c7;
        local_b0 = 0x5131c3dd260893ee;
        local_b2 = '\x01';
        local_98 = local_80;
      }
      else if (uVar3 == 0x2a08a41858a03b36) {
        FUN_1801d62d8(&DAT_1802a3e70);
        local_a8 = 0xc31a21d220c88ea4;
        if (DAT_1802a3e70 == -1) {
          local_a8 = 0xee1f0c7112402742;
        }
        local_b0 = 0x1cf2956441a3fde1;
      }
      goto LAB_1800f0be0;
    }
    if ((longlong)uVar3 < 0x777436685a654038) {
      if (uVar3 == 0x55640331dd2816fc) {
        local_a8 = 0x5aa9b5c4e1446b8b;
        if (local_b1 != '\0') {
          local_a8 = 0xe2e7c39798dc1f73;
        }
        local_b0 = 0x2299694cda52eb77;
        goto LAB_1800f10cd;
      }
      if (uVar3 == 0x68b678bcca05ee37) {
        local_88 = local_90;
        cVar2 = (**(code **)(local_90 + 8))();
        local_a8 = 0xe86542ef9e4345a2;
        if (cVar2 != '\0') {
          local_a8 = 0x9deb2217d44e56e6;
        }
        local_b0 = 0x9f117487c426059a;
      }
    }
    else if (uVar3 == 0x777436685a654038) {
      local_c8 = &DAT_1802a3e94;
      FUN_1800f3fee(&DAT_1802a3e74,&DAT_180279460,0x15,0x1f);
      local_58 = &DAT_1802a3e74;
      *local_78 = 0x1e;
      local_c8 = &DAT_1802a3ea0;
      FUN_1800f3fee(&DAT_1802a3e98,&DAT_1802794a5,0x1d,6);
      lVar1 = local_88;
      local_68 = &DAT_1802a3e98;
      *local_70 = 5;
      FUN_1800f1130(4,&local_68,&local_58,local_88);
      local_98 = lVar1 + 0x10;
      local_a8 = 0x6fc9bd7df069f823;
      if (local_98 == local_a0) {
        local_a8 = 0xb72915adad53abf6;
      }
      local_b0 = 0xcf19c92596452b0a;
      local_b2 = '\0';
      local_b3 = 0;
    }
    else if (uVar3 == 0x7830dc883b1680fc) {
      if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_e8)) {
      }
      return local_b3;
    }
  } while( true );
}



void FUN_1800f1130(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 ***local_98;
  uintptr_t local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_50;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_88 = 0x20;
  local_80 = 1;
  local_50 = 0;
  local_48 = 0xf;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_b8 = *param_3;
    local_b0 = param_3[1];
    local_a0 = *param_4;
    local_a8 = 0xb000000000000000;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_48;
    if (local_48 < local_88 + local_b0) {
      FUN_180002240(&local_78);
      local_68 = local_50;
    }
    local_c8 = local_80;
    local_c0 = &local_a8;
    FUN_180003080(local_e0,&local_78,&local_b8,&local_c8,local_50);
    local_98 = &local_78;
    if (local_48 < local_60) {
      local_98 = local_78;
    }
    local_90 = local_68;
    local_d8 = *param_2;
    uStack_d4 = param_2[1];
    uStack_d0 = param_2[2];
    uStack_cc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_d8,&local_98);
    if (local_48 < local_60) {
      uVar4 = local_80 + local_60;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (local_88 <= (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_50);
        }
        uVar4 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_1800f1330(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1800f1370(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void FUN_1800f13b0(void)

{
  longlong lVar1;
  undefined8 uVar2;

  lVar1 = FUN_180177800();
  *(undefined1 *)(lVar1 + 0x79) = 0;
  uVar2 = FUN_180181700();
  FUN_180181e80(uVar2);
  return;
}



void FUN_1800f13e0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_90 = 0x45cb393afa510293;
  local_98 = 0xeafcb042d4af523f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xf990bdf1c1a33784;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xf990bdf1c1a33784;
          local_90 = uVar2;
          if (0x116bc8bc4bcb071f < (longlong)uVar1) break;
          if (uVar1 == 0xaf3789782efe50ac) {
            local_88 = DAT_1802a3e58;
            local_90 = 0x6d0f03841c233a8f;
            if (DAT_1802a3e58 == 0) {
              local_90 = 0xd2a9522a7c3bffe9;
            }
            local_98 = 0xdac54f48074ef129;
          }
          else if (uVar1 == 0xb7ca4ccc1b6dcba6) {
            local_70 = local_88;
            local_80 = DAT_1802a3e68 - local_88;
            local_90 = 0x738a2a8828a52191;
            if (0xfff < local_80) {
              local_90 = 0x7df13f630de1e426;
            }
            local_98 = 0x6c9af7df462ae306;
            local_78 = local_88;
            local_68 = local_80;
          }
          else if (uVar1 == 0x86c1d627b750ec0) {
            return;
          }
        }
        if (0x3f9b7892c854e97a < (longlong)uVar1) break;
        if (uVar1 == 0x116bc8bc4bcb0720) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0x52853ad4f2c0d7d7;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0x2abdc489eeb8f84a;
          }
          local_98 = 0x1526bc1b26ec1131;
        }
        else if (uVar1 == 0x1f10dd576e8fc297) {
          thunk_FUN_1801f42e0(local_78,local_80);
          DAT_1802a3e58 = 0;
          DAT_1802a3e60 = 0;
          DAT_1802a3e68 = 0;
          local_90 = 0xbf63094bcd22d383;
          local_98 = 0xb70f1429b657dd43;
        }
      }
      if (uVar1 != 0x3f9b7892c854e97b) break;
      local_80 = local_68 + 0x27;
      local_90 = 0x20d0279b95c28f2d;
      local_98 = 0x3fc0faccfb4d4dba;
      local_78 = local_60;
    }
  } while (uVar1 != 0x47a386cfd42cc6e6);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800f16e0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  size_t sVar12;
  size_t sVar13;
  size_t sVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 auStack_3e8 [32];
  ulonglong local_3c8;
  ulonglong local_3c0;
  int local_3b8;
  char local_3b2;
  char local_3b1;
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  undefined8 *local_398;
  ulonglong local_390;
  undefined8 *local_388;
  char *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  longlong local_348;
  undefined8 local_340;
  ulonglong local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 *local_2a8;
  char *local_2a0;
  char *local_298;
  size_t local_290;
  ulonglong local_288;
  undefined8 local_280;
  undefined8 *local_278;
  char *local_270;
  char *local_268;
  size_t local_260;
  ulonglong local_258;
  char *local_250;
  char *local_248;
  ulonglong local_240;
  ulonglong local_238;
  undefined8 *local_230;
  char *local_228;
  char *local_220;
  size_t local_218;
  ulonglong local_210;
  undefined8 *local_208;
  ulonglong local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  ulonglong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  ulonglong local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  size_t local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  size_t local_a0;
  undefined8 *local_98;
  size_t local_90;
  size_t local_88;
  ulonglong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_3e8;
  local_3c0 = 0x68669e9ef2f1dd22;
  local_3c8 = 0x204816420ea6417e;
  local_e8 = param_1;
  local_e0 = param_2;
  local_d8 = param_3;
LAB_1800f17c0:
  do {
    while( true ) {
      puVar9 = local_1f8;
      uVar17 = local_200;
      puVar20 = local_350;
      puVar1 = local_360;
      uVar16 = local_3c0 ^ 0x6ed109247edb8848;
      uVar11 = local_3c0 ^ local_3c8;
      local_3c8 = local_3c8 ^ 0x6ed109247edb8848;
      local_3c0 = uVar16;
      if (0xb9407a666b16787 < (longlong)uVar11) break;
      if ((longlong)uVar11 < -0x39405d8e33572dfe) {
        bVar15 = (byte)local_340;
        if ((longlong)uVar11 < -0x536afa6d0f64dc69) {
          if ((longlong)uVar11 < -0x634e5a789ddcb794) {
            if (uVar11 == 0x836e9903339991d5) {
              local_58 = *local_368;
              uStack_50 = local_368[1];
              uVar6 = local_328[1];
              *local_368 = *local_328;
              local_368[1] = uVar6;
              *local_328 = local_58;
              local_328[1] = uStack_50;
              local_3c0 = 0x8812a6117d4585bd;
              local_3c8 = 0xc08325344b2acc56;
            }
            else if (uVar11 == 0x8c7a571f3bf5c086) {
              FUN_1802079d0(local_230,local_350,(longlong)local_360 - (longlong)local_60);
              *puVar20 = local_380;
              *local_a8 = local_280;
              local_3c0 = 0xf89740b55c00383d;
              local_3c8 = 0x1ed9d7197bc341c;
            }
            else if (uVar11 == 0x97d855229b313aec) {
              puVar1 = local_1d0 + -2;
              local_58 = local_1d0[-2];
              uStack_50 = local_1d0[-1];
              uVar3 = *(undefined4 *)((longlong)local_3b0 + 4);
              uVar4 = *(undefined4 *)(local_3b0 + 1);
              uVar5 = *(undefined4 *)((longlong)local_3b0 + 0xc);
              *(undefined4 *)(local_1d0 + -2) = *(undefined4 *)local_3b0;
              *(undefined4 *)((longlong)local_1d0 + -0xc) = uVar3;
              *(undefined4 *)(local_1d0 + -1) = uVar4;
              *(undefined4 *)((longlong)local_1d0 + -4) = uVar5;
              lVar18 = (longlong)puVar1 - (longlong)local_2c8;
              FUN_1800f3730(local_3b0,local_348,lVar18 >> (bVar15 & 0x3f),&local_58);
              local_3c0 = 0x6c3652e56eba269f;
              if (0x10 < lVar18) {
                local_3c0 = 0x82afe5c78980c1d0;
              }
              local_3c8 = 0x1577b0e512b1fb3c;
              local_1d0 = puVar1;
            }
          }
          else if (uVar11 == 0x9cb1a5876223486c) {
            uVar11 = local_200 - 1;
            local_58 = local_3b0[uVar11 * 2];
            uStack_50 = (local_3b0 + uVar11 * 2)[1];
            FUN_1800f3730(local_3b0,uVar11,local_80,&local_58);
            local_3c0 = 0x2104c520be67476b;
            if (local_390 < uVar17) {
              local_3c0 = 0x2a6d3585477535eb;
            }
            local_3c8 = 0xb6dc900225567d87;
            local_1d0 = local_3a8;
            local_200 = uVar11;
          }
          else if (uVar11 == 0xa33d4d349458a680) {
            local_388 = local_3b0 + (local_f8 >> ((byte)local_2b8 & 0x3f)) * 2;
            local_2a8 = local_3a8 + -2;
            local_d0 = (longlong)local_2a8 - (longlong)local_2c8 >> (bVar15 & 0x3f);
            local_3c0 = 0x90034798eb3669ab;
            if (0x28 < local_d0) {
              local_3c0 = 0x49bdd297b6ccf93d;
            }
            local_3c8 = 0x6e93e817010b040a;
          }
          else if (uVar11 == 0xa6a3ce3dfa6cc633) {
            local_2c0 = local_150;
            local_3c0 = 0xcbba4fb779c8ada9;
            if (local_3b0 < local_150) {
              local_3c0 = 0x8e06e74d6265070e;
            }
            local_3c8 = 0xa7dde4f9e695b1d0;
          }
        }
        else if ((longlong)uVar11 < -0x4276dad9ab214efe) {
          if (uVar11 == 0xac950592f09b2397) {
            local_80 = local_f8 >> (bVar15 & 0x3f);
            local_3c0 = 0xec4db808a22e9bf2;
            local_3c8 = 0x70fc1d8fc00dd39e;
            local_200 = local_f8 >> ((byte)local_2b8 & 0x3f);
          }
          else if (uVar11 == 0xaf9ca8cb8b37c0df) {
            local_360 = local_1e8;
            local_380 = (char *)*local_1e8;
            local_280 = local_1e0[3];
            pcVar2 = (char *)*local_350;
            sVar12 = strlen(pcVar2);
            pcVar8 = local_380;
            sVar13 = strlen(local_380);
            sVar14 = sVar13;
            if (sVar12 < sVar13) {
              sVar14 = sVar12;
            }
            local_c0 = sVar13;
            iVar10 = memcmp(pcVar8,pcVar2,sVar14);
            bVar7 = iVar10 < local_3b8;
            if (iVar10 == local_3b8) {
              bVar7 = sVar13 < sVar12;
            }
            local_3c0 = 0xf0051d69c1f551fe;
            if (bVar7) {
              local_3c0 = 0x635f7e6972ee4d7d;
            }
            local_3c8 = 0xef252976491b8dfb;
          }
          else if (uVar11 == 0xb5963cb8240571e7) {
            local_78 = local_1a0;
            local_100 = local_1b0;
            local_3c0 = 0x99e7e5e98566e533;
            if (local_198 < local_3a8) {
              local_3c0 = 0x2eaad09f9dcbf13e;
            }
            local_3c8 = 0x246ec0cfd1b85431;
            local_190 = local_198;
            local_188 = local_1a8;
            local_2e0 = local_1a8;
            local_2d8 = local_198;
          }
        }
        else if ((longlong)uVar11 < -0x41bdc2cb18123bbf) {
          if (uVar11 == 0xbd89252654deb102) {
            local_370 = local_2d8;
            local_3a0 = local_2e0;
            local_3c0 = 0x3f78d29ede97c006;
            if (local_3b0 < local_78) {
              local_3c0 = 0x180cb1ce66cf5c38;
            }
            local_3c8 = 0xe0959858741e3e94;
            local_1c8 = local_78;
            local_1c0 = local_100;
            local_2f8 = local_100;
            local_2f0 = local_78;
          }
          else if (uVar11 == 0xbe1c2fdf63e4fbf4) {
            local_58 = *local_208;
            uStack_50 = local_208[1];
            uVar6 = local_278[1];
            *local_208 = *local_278;
            local_208[1] = uVar6;
            *local_278 = local_58;
            local_278[1] = uStack_50;
            local_3c0 = 0x90a4824c669ccb1d;
            local_3c8 = 0x990b6285e85fb771;
            local_320 = local_208;
          }
        }
        else if (uVar11 == 0xbe423d34e7edc441) {
          local_3c0 = 0x206e0c8bd54a2bf2;
          local_3c8 = 0x95f83033f14f5a15;
          local_1b0 = local_318;
          local_1a8 = local_310;
          local_1a0 = local_308;
          local_198 = local_300;
        }
        else if (uVar11 == 0xc13ff1a91a252e18) {
          local_58 = *local_398;
          uStack_50 = local_398[1];
          uVar6 = local_3a0[1];
          *local_398 = *local_3a0;
          local_398[1] = uVar6;
          *local_3a0 = local_58;
          local_3a0[1] = uStack_50;
          local_3c0 = 0x378c5f2b10b30caa;
          local_3c8 = 0x5a3bddd77cac674c;
        }
      }
      else if ((longlong)uVar11 < -0x685223b3443f3df) {
        if ((longlong)uVar11 < -0x2012b5395576016e) {
          if (uVar11 == 0xc6bfa271cca8d202) {
            FUN_1800f16e0(local_3a0,local_3a8,local_338);
            local_3c0 = 0xf81e1971a0366492;
            local_3c8 = 0xf3113facc7e756f1;
            local_130 = local_3b0;
            local_128 = local_b8;
            local_120 = local_3b0;
            local_118 = local_398;
          }
          else if (uVar11 == 0xdb2c82c0cc8fe54e) {
            local_58 = *local_370;
            uStack_50 = local_370[1];
            uVar6 = local_368[1];
            *local_370 = *local_368;
            local_370[1] = uVar6;
            *local_368 = local_58;
            local_368[1] = uStack_50;
            local_300 = local_370 + 2;
            local_3c0 = 0x5c44ee8343007989;
            local_3c8 = 0xe206d3b7a4edbdc8;
            local_318 = local_398;
            local_310 = local_3a0;
            local_308 = local_368;
          }
          else if (uVar11 == 0xdda7d7076f9dd562) {
            local_338 = (local_70 >> 2) + (local_70 >> ((byte)local_390 & 0x3f));
            local_b8 = local_398;
            local_b0 = local_3a0;
            local_3c0 = 0xa182df4ac23c3ae9;
            if ((longlong)local_398 - (longlong)local_2c8 < (longlong)local_68 - (longlong)local_3a0) {
              local_3c0 = 0x31703426e8a98eca;
            }
            local_3c8 = 0x673d7d3b0e94e8eb;
          }
        }
        else if ((longlong)uVar11 < -0x10b269e6daee395f) {
          if (uVar11 == 0xdfed4ac6aa89fe92) {
            local_108 = local_2f0;
            local_3b2 = local_2f0 == local_3b0;
            local_3c0 = 0x6809158e77843b7e;
            if ((bool)local_3b2) {
              local_3c0 = 0x80485b2fe88d89a3;
            }
            local_3b1 = local_370 == local_3a8;
            local_398 = local_2f8;
            if (!(bool)local_3b1) {
              local_3c0 = 0x6809158e77843b7e;
            }
            local_3c8 = 0x5def8c2887105cc1;
          }
          else if (uVar11 == 0xe835fd9c53b63cd0) {
            uVar6 = local_1f8[1];
            *local_1f0 = *local_1f8;
            local_1f0[1] = uVar6;
            pcVar2 = (char *)local_1f8[-2];
            sVar12 = strlen(pcVar2);
            pcVar8 = local_380;
            sVar13 = strlen(local_380);
            sVar14 = sVar13;
            if (sVar12 < sVar13) {
              sVar14 = sVar12;
            }
            iVar10 = memcmp(pcVar8,pcVar2,sVar14);
            bVar7 = iVar10 < local_3b8;
            if (iVar10 == local_3b8) {
              bVar7 = sVar13 < sVar12;
            }
            local_1f8 = puVar9 + -2;
            local_3c0 = 0x62d89c5b79437c8a;
            if (bVar7) {
              local_3c0 = 0x9fd987b322019fae;
            }
            local_3c8 = 0x77ec7a2f71b7a37e;
            local_1f0 = puVar9;
            local_1d8 = puVar9;
          }
        }
        else if (uVar11 == 0xef4d96192511c6a1) {
          iVar10 = memcmp(local_248,local_250,local_90);
          bVar7 = local_240 < local_238;
          if (iVar10 != local_3b8) {
            bVar7 = iVar10 < local_3b8;
          }
          local_3c0 = 0xe18419c74f0d825b;
          if (bVar7) {
            local_3c0 = 0x2b407cb42a3c5811;
          }
          local_3c8 = 0x4727d7fab5614468;
          local_150 = local_98;
        }
        else if (uVar11 == 0xf899299612d162ac) {
          local_2d0 = local_1c0;
          local_110 = local_1c8;
          local_278 = local_1c8 + -2;
          pcVar2 = (char *)local_1c8[-2];
          local_268 = (char *)*local_1c0;
          local_270 = pcVar2;
          sVar14 = strlen(local_268);
          local_260 = sVar14;
          local_258 = strlen(pcVar2);
          local_a0 = sVar14;
          if (local_258 <= sVar14) {
            local_a0 = local_258;
          }
          iVar10 = memcmp(local_270,local_268,local_a0);
          bVar7 = local_258 < local_260;
          if (iVar10 != local_3b8) {
            bVar7 = iVar10 < local_3b8;
          }
          local_3c0 = 0x5f0b35c4473ed011;
          if (bVar7) {
            local_3c0 = 0x2e5c2a4f741986e8;
          }
          local_3c8 = 0x27f3ca86fadafa84;
          local_320 = local_2d0;
        }
      }
      else if ((longlong)uVar11 < 0x160979df8b2735d) {
        if (uVar11 == 0xf97addc4cbbc0c21) {
          local_1e8 = local_360 + 2;
          local_3c0 = 0xe9cc0393dbd69e1;
          if (local_1e8 == local_f0) {
            local_3c0 = 0xd8418af2ca81749d;
          }
          local_3c8 = 0xa10068f2b68aa93e;
          local_1e0 = local_360;
        }
        else if (uVar11 == 0xfb338a08411ad6f5) {
          local_60 = local_138;
          local_f0 = local_140;
          local_350 = local_148;
          local_3c0 = 0x69dfe4174ebde61b;
          if (local_148 == local_140) {
            local_3c0 = 0x726daf4c7e3c4644;
          }
          local_3c8 = 0xb2c4d4c02379be7;
        }
        else if (uVar11 == 0xfe90af8fea3d6da1) {
          FUN_1800f3c80(local_3b0,local_388,local_2a8);
          local_3c0 = 0x4fc1e4c63dda4939;
          local_3c8 = 0x7c6e28af9a907bd7;
        }
      }
      else if ((longlong)uVar11 < 0xac410504c73a50f) {
        if (uVar11 == 0x160979df8b2735d) {
          local_58 = *local_378;
          uStack_50 = local_378[1];
          uVar6 = local_358[1];
          *local_378 = *local_358;
          local_378[1] = uVar6;
          *local_358 = local_58;
          local_358[1] = uStack_50;
          local_3c0 = 0xda124fff7d6883e2;
          local_3c8 = 0xd18648591bd9e46a;
LAB_1800f2d32:
          local_2e8 = local_378 + 2;
        }
        else if (uVar11 == 0x9afe0c98ec37c6c) {
          local_1c0 = local_320;
          local_1c8 = local_278;
          local_3c0 = 0x6b2b71b1e602deea;
          if (local_3b0 < local_278) {
            local_3c0 = 0x4c5f12e15e5a42d4;
          }
          local_3c8 = 0xb4c63b774c8b2078;
          local_2f8 = local_320;
          local_2f0 = local_278;
        }
      }
      else if (uVar11 == 0xac410504c73a50f) {
        local_378 = local_188;
        local_358 = local_190;
        pcVar2 = (char *)*local_100;
        local_220 = (char *)*local_190;
        local_228 = pcVar2;
        sVar14 = strlen(local_220);
        local_218 = sVar14;
        local_210 = strlen(pcVar2);
        local_88 = sVar14;
        if (local_210 <= sVar14) {
          local_88 = local_210;
        }
        iVar10 = memcmp(local_228,local_220,local_88);
        bVar7 = local_210 < local_218;
        if (iVar10 != local_3b8) {
          bVar7 = iVar10 < local_3b8;
        }
        local_3c0 = 0xda53413fc92fe9e9;
        if (bVar7) {
          local_3c0 = 0xbfe5e93ca7e3175f;
        }
        local_3c8 = 0xb471ee9ac15270d7;
        local_2e8 = local_378;
      }
      else if (uVar11 == 0xb0f26dd67d13263) {
        local_180 = (longlong)local_128 - (longlong)local_130;
        local_3c0 = 0x2dc5e1491dd0e087;
        if ((longlong)local_180 < local_2b0) {
          local_3c0 = 0xa1063012bf379024;
        }
        local_3c8 = 0x5a35ba1afe2d46d1;
        local_178 = local_130;
        local_170 = local_128;
        local_168 = local_338;
        local_160 = local_118;
        local_158 = local_120;
        local_148 = local_120;
        local_140 = local_118;
        local_138 = local_130;
      }
    }
    if (0x4cd821345ac80f23 < (longlong)uVar11) {
      if ((longlong)uVar11 < 0x6e22afa5087d993e) {
        if ((longlong)uVar11 < 0x564d491de63d6621) {
          if (uVar11 == 0x4cd821345ac80f24) {
            iVar10 = memcmp(local_298,local_2a0,local_c8);
            bVar7 = local_290 < local_288;
            if (iVar10 != local_3b8) {
              bVar7 = iVar10 < local_3b8;
            }
            local_3c0 = 0xfde33aa45e7c6dfa;
            if (bVar7) {
              local_3c0 = 0xd3b9801a68ec8e4d;
            }
            local_3c8 = 0x811fa956d55ca7e7;
            local_1b8 = local_330;
          }
          else if (uVar11 == 0x518686ee62e1baa7) {
            local_328 = local_398 + -2;
            local_3c0 = 0x48474f6907969625;
            if (local_108 == local_398) {
              local_3c0 = 0x83b8554f02604e1b;
            }
            local_3c8 = 0xcb29d66a340f07f0;
          }
          else if (uVar11 == 0x52a6294cbdb029aa) {
            local_3c0 = 0x4812fda913c7fe28;
            local_3c8 = 0xfd84c11137c28fcf;
            local_1b0 = local_2c0;
            local_1a8 = local_330;
            local_1a0 = local_2c0;
            local_198 = local_330;
          }
        }
        else if ((longlong)uVar11 < 0x6c67ab4e9f5d1c79) {
          if (uVar11 == 0x564d491de63d6621) {
            FUN_1800f16e0(local_3b0,local_398,local_338);
            local_128 = local_3a8;
            local_3c0 = 0xf192c0d979ed9a4a;
            local_3c8 = 0xfa9de6041e3ca829;
            local_130 = local_b0;
            local_120 = local_3a0;
            local_118 = local_128;
          }
          else if (uVar11 == 0x62f3a95b4c8a7dfc) {
            local_230 = local_350 + 2;
            local_3c0 = 0x6f7af1271fcc2cec;
            if (local_230 == local_f0) {
              local_3c0 = 0x3bcce31defd4c94f;
            }
            local_3c8 = 0x428d011d93df14ec;
          }
        }
        else if (uVar11 == 0x6c67ab4e9f5d1c79) {
          local_3c0 = 0x789909df9caf154d;
          local_3c8 = 0x4659a2d178fdf50;
          local_1b8 = local_388;
        }
        else if (uVar11 == 0x6db782fc6c1f6be6) {
          local_310 = local_3a0 + 2;
          local_58 = *local_398;
          uStack_50 = local_398[1];
          uVar6 = local_370[1];
          *local_398 = *local_370;
          local_398[1] = uVar6;
          *local_370 = local_58;
          local_370[1] = uStack_50;
          local_318 = local_398 + 2;
          local_300 = local_370 + 2;
          local_3c0 = 0x51d2062c890c8656;
          local_3c8 = 0xef903b186ee14217;
          local_308 = local_3b0;
        }
      }
      else if ((longlong)uVar11 < 0x78f8ff42bde42a95) {
        if (uVar11 == 0x6e22afa5087d993e) {
          iVar10 = memcmp(local_220,local_228,local_88);
          bVar7 = local_218 < local_210;
          if (iVar10 != local_3b8) {
            bVar7 = iVar10 < local_3b8;
          }
          local_3c0 = 0x6d57e5093775277e;
          if (bVar7) {
            local_3c0 = 0xf4ee9b894fa1aeb8;
          }
          local_3c8 = 0x4967beaf1b7f1fba;
          local_2e0 = local_378;
          local_2d8 = local_358;
        }
        else if (uVar11 == 0x73189539277c4e9e) {
          local_3c0 = 0xfa0ae26310d0692a;
          if (local_3a0 == local_370) {
            local_3c0 = 0x5682913666ea2cd4;
          }
          local_3c8 = 0x3b3513ca0af54732;
        }
        else if (uVar11 == 0x77f05b53e3fda656) {
          local_3b0 = local_158;
          local_3a8 = local_160;
          local_70 = local_168;
          local_68 = local_170;
          local_2c8 = local_178;
          local_f8 = local_180;
          local_3c0 = 0xd23295d97963938b;
          if ((longlong)local_168 < (longlong)local_390) {
            local_3c0 = 0xdd9add7f1da0169c;
          }
          local_3c8 = 0x710fd8eded3b350b;
        }
      }
      else if ((longlong)uVar11 < 0x7cc6efb09829c9ee) {
        if (uVar11 == 0x78f8ff42bde42a95) {
          iVar10 = memcmp(local_268,local_270,local_a0);
          bVar7 = local_260 < local_258;
          if (iVar10 != local_3b8) {
            bVar7 = iVar10 < local_3b8;
          }
          local_3c0 = 0x7bcc1b9663f44013;
          if (bVar7) {
            local_3c0 = 0x8cf51fb4e3c69488;
          }
          local_3c8 = 0x53185572494f6a1a;
          local_2f8 = local_2d0;
          local_2f0 = local_110;
        }
        else if (uVar11 == 0x7941e2007c0bdda3) {
          if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_3e8)) {
          }
          return;
        }
      }
      else if (uVar11 == 0x7cc6efb09829c9ee) {
        local_368 = local_108 + -2;
        local_3c0 = 0x90fe7d8f9757573a;
        if (local_3b1 != '\0') {
          local_3c0 = 0x1a5479a1393908d3;
        }
        local_3c8 = 0x4bd2ff4f5bd8b274;
      }
      else if (uVar11 == 0x7cfc93f28b20ca1d) {
        local_330 = local_1b8 + 2;
        local_3c0 = 0x6f809d9a707201de;
        if (local_330 < local_3a8) {
          local_3c0 = 0x22cc325d66c69d09;
        }
        local_3c8 = 0x3d26b4d6cdc22874;
      }
      goto LAB_1800f17c0;
    }
    if ((longlong)uVar11 < 0x29db03b484f0b6de) {
      if ((longlong)uVar11 < 0x1fea868bab04b57d) {
        if (uVar11 == 0xb9407a666b16788) {
          local_2e0 = local_2e8;
          local_2d8 = local_358 + 2;
          local_3c0 = 0x497a65506437320b;
          if (local_2d8 < local_3a8) {
            local_3c0 = 0xfe3750267c9a2606;
          }
          local_3c8 = 0xf4f3407630e98309;
          local_190 = local_2d8;
          local_188 = local_2e0;
        }
        else if (uVar11 == 0x1534e67408f4dff4) {
          *local_1d8 = local_380;
          local_1d8[1] = local_280;
          local_3c0 = 0xda2b083176537864;
          local_3c8 = 0x2351d5f5bdef7445;
        }
        else if (uVar11 == 0x1f20341f88eedc05) {
          pcVar2 = (char *)local_360[-2];
          sVar14 = strlen(pcVar2);
          uVar17 = local_c0;
          uVar11 = local_c0;
          if (sVar14 < local_c0) {
            uVar11 = sVar14;
          }
          iVar10 = memcmp(local_380,pcVar2,uVar11);
          bVar7 = iVar10 < local_3b8;
          if (iVar10 == local_3b8) {
            bVar7 = uVar17 < sVar14;
          }
          local_1f8 = puVar1 + -2;
          local_3c0 = 0xc97449d8450cfee5;
          if (bVar7) {
            local_3c0 = 0x347552301e4e1dc1;
          }
          local_3c8 = 0xdc40afac4df82111;
          local_1f0 = local_360;
          local_1d8 = local_1f0;
        }
      }
      else if ((longlong)uVar11 < 0x272e3a80b7c7fd37) {
        if (uVar11 == 0x1fea868bab04b57d) {
          pcVar2 = (char *)*local_330;
          local_298 = (char *)*local_2c0;
          local_2a0 = pcVar2;
          sVar14 = strlen(local_298);
          local_290 = sVar14;
          local_288 = strlen(pcVar2);
          local_c8 = sVar14;
          if (local_288 <= sVar14) {
            local_c8 = local_288;
          }
          iVar10 = memcmp(local_2a0,local_298,local_c8);
          bVar7 = local_288 < local_290;
          if (iVar10 != local_3b8) {
            bVar7 = iVar10 < local_3b8;
          }
          local_3c0 = 0x26c7a6e2cc3f78d5;
          if (bVar7) {
            local_3c0 = 0x38b9ae9a2b475e5b;
          }
          local_3c8 = 0x6a1f87d696f777f1;
        }
        else if (uVar11 == 0x24305ba62c0a38c4) {
          local_3c0 = 0xf6c8bc237c2d6ef1;
          if (local_378 == local_358) {
            local_3c0 = 0xd83ecb179a298a3b;
          }
          local_3c8 = 0xf7a82bbe849f1dac;
        }
      }
      else if (uVar11 == 0x272e3a80b7c7fd37) {
        uVar17 = local_d0 + local_390 >> 3;
        lVar18 = uVar17 << ((byte)local_390 & 0x3f);
        puVar1 = local_3b0 + uVar17 * 2;
        FUN_1800f3c80(local_3b0,puVar1,local_3b0 + lVar18 * 2);
        lVar19 = local_348 - uVar17;
        FUN_1800f3c80(local_388 + lVar19 * 2,local_388,local_388 + uVar17 * 2);
        puVar20 = local_2a8 + lVar19 * 2;
        FUN_1800f3c80(local_2a8 + (local_348 - lVar18) * 2,puVar20);
        FUN_1800f3c80(puVar1,local_388,puVar20);
        local_3c0 = 0x250183f723eb4a9b;
        local_3c8 = 0x16ae4f9e84a17875;
      }
      else if (uVar11 == 0x28d44ee42abb2a09) {
        local_320 = local_2d0 + -2;
        local_3c0 = 0x6ff032f768a14186;
        if (local_2d0 == local_110) {
          local_3c0 = 0xd843fde18586c61e;
        }
        local_3c8 = 0xd1ec1d280b45ba72;
        local_208 = local_320;
      }
    }
    else if ((longlong)uVar11 < 0x33afcc69a74a32ee) {
      if (uVar11 == 0x29db03b484f0b6de) {
        local_98 = local_2c0 + -2;
        pcVar2 = (char *)local_2c0[-2];
        local_248 = (char *)*local_2c0;
        local_250 = pcVar2;
        sVar14 = strlen(local_248);
        local_240 = sVar14;
        local_238 = strlen(pcVar2);
        local_90 = sVar14;
        if (local_238 <= sVar14) {
          local_90 = local_238;
        }
        iVar10 = memcmp(local_250,local_248,local_90);
        bVar7 = local_238 < local_240;
        if (iVar10 != local_3b8) {
          bVar7 = iVar10 < local_3b8;
        }
        local_3c0 = 0x457d061b79baf6bd;
        if (bVar7) {
          local_3c0 = 0xc6573b4cc3f62c65;
        }
        local_3c8 = 0xaa3090025cab301c;
      }
      else if (uVar11 == 0x2df7f03a8c133800) {
        local_a8 = local_350 + 1;
        local_3c0 = 0x8e3960652f3d9e31;
        local_3c8 = 0x21a5c8aea40a5eee;
        local_1e8 = local_230;
        local_1e0 = local_350;
      }
      else if (uVar11 == 0x2f96e0a91eb69797) {
        local_3c0 = 0xd382e1f9d03142b3;
        local_3c8 = 0xd816e65fb680253b;
        goto LAB_1800f2d32;
      }
    }
    else if ((longlong)uVar11 < 0x482e88dcfc579c5c) {
      if (uVar11 == 0x33afcc69a74a32ee) {
        local_3c0 = 0x4ac53fc3a121de0d;
        local_3c8 = 0xec66f1fe5b4d183e;
        local_150 = local_388;
      }
      else if (uVar11 == 0x35e699a6f09467bf) {
        local_3c0 = 0x466e0f1b37143bae;
        if (local_3b2 != '\0') {
          local_3c0 = 0x49b075928841bcde;
        }
        local_3c8 = 0x3aa8e0abaf3df240;
      }
    }
    else if (uVar11 == 0x482e88dcfc579c5c) {
      local_390 = 1;
      local_340 = 4;
      local_348 = 0;
      local_2b0 = 0x201;
      local_3b8 = 0;
      local_2b8 = 5;
      local_170 = local_e0;
      local_178 = local_e8;
      local_180 = (longlong)local_e0 - (longlong)local_e8;
      local_3c0 = 0xe83272ca8ba5e586;
      if ((longlong)local_180 < 0x201) {
        local_3c0 = 0x64f1a39129429525;
      }
      local_3c8 = 0x9fc22999685843d0;
      local_168 = local_d8;
      local_160 = local_170;
      local_158 = local_178;
      local_148 = local_178;
      local_140 = local_170;
      local_138 = local_178;
    }
    else if (uVar11 == 0x48918325366f49eb) {
      local_310 = local_3a0 + -2;
      local_58 = *local_328;
      uStack_50 = local_328[1];
      uVar6 = local_3a0[-1];
      *local_328 = local_3a0[-2];
      local_328[1] = uVar6;
      local_3a0[-2] = local_58;
      local_3a0[-1] = uStack_50;
      local_3c0 = 0x89e2635bca8bbc8;
      local_3c8 = 0xb6dc1b015b457f89;
      local_308 = local_368;
      local_318 = local_328;
      local_300 = local_370;
    }
  } while( true );
}



void FUN_1800f3730(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  size_t sVar9;
  size_t sVar10;
  ulonglong uVar11;
  size_t sVar12;
  ulonglong local_d0;
  ulonglong local_c8;
  int local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_50;
  undefined8 *local_48;

  local_c8 = 0x6823e49a25b96312;
  local_d0 = 0xb56ef0e7a638dd8f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar11 = local_c8 ^ 0x6a62aff4b161bed4;
          uVar8 = local_c8 ^ local_d0;
          local_d0 = local_d0 ^ 0x6a62aff4b161bed4;
          local_c8 = uVar11;
          if ((longlong)uVar8 < 0x12710ad6a037078b) break;
          if ((longlong)uVar8 < 0x67892a806a9e7838) {
            if (uVar8 == 0x12710ad6a037078b) {
              local_c8 = 0xf7b9d597672ba69;
              if ((local_b8 & param_3) != 0 || local_b0 != local_78) {
                local_c8 = 0x3bab1d013de1685d;
              }
              local_d0 = 0x5c223781577f1065;
              local_70 = local_78;
            }
            else if (uVar8 == 0x5359aad8210daa0c) {
              puVar1 = (undefined8 *)(param_1 + local_90 * 0x10);
              uVar5 = puVar1[1];
              puVar2 = (undefined8 *)(param_1 + local_b0 * 0x10);
              *puVar2 = *puVar1;
              puVar2[1] = uVar5;
              local_c8 = 0x5c3f1e27b3197a8c;
              local_d0 = 0x3bb634a7d98702b4;
              local_70 = local_90;
            }
          }
          else if (uVar8 == 0x67892a806a9e7838) {
            local_c8 = 0xb056dc6c946c5f4;
            if ((longlong)local_70 <= (longlong)param_2) {
              local_c8 = 0xf81fbea272138a5a;
            }
            local_d0 = 0xfda2ec8f681d3b1f;
            local_a8 = local_70;
            local_88 = local_70;
          }
          else if (uVar8 == 0x6f5106401ab00c6c) {
            uVar8 = local_80 << ((byte)local_b8 & 0x3f);
            pcVar3 = *(char **)(param_1 + (uVar8 + 2) * 0x10);
            pcVar4 = *(char **)(param_1 + 0x10 + uVar8 * 0x10);
            sVar9 = strlen(pcVar4);
            sVar10 = strlen(pcVar3);
            sVar12 = sVar10;
            if (sVar9 < sVar10) {
              sVar12 = sVar9;
            }
            iVar7 = memcmp(pcVar3,pcVar4,sVar12);
            bVar6 = iVar7 < local_bc;
            if (iVar7 == local_bc) {
              bVar6 = sVar10 < sVar9;
            }
            local_78 = uVar8 | local_b8;
            if (!bVar6) {
              local_78 = uVar8 + 2;
            }
            puVar1 = (undefined8 *)(param_1 + local_78 * 0x10);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)(param_1 + local_80 * 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            local_c8 = 0xe60b6d91dd61e503;
            if ((longlong)local_b0 <= (longlong)local_78) {
              local_c8 = 0x9b2b610767e6eee4;
            }
            local_d0 = 0x895a6bd1c7d1e96f;
            local_80 = local_78;
          }
        }
        if (-0x9587eb65ea40116 < (longlong)uVar8) break;
        if (uVar8 == 0xc17352f6b51ef92a) {
          uVar5 = local_48[1];
          puVar1 = (undefined8 *)(param_1 + local_68 * 0x10);
          *puVar1 = *local_48;
          puVar1[1] = uVar5;
          local_c8 = 0x138bef9bb057d14f;
          if (local_50 <= param_2) {
            local_c8 = 0xe0913cff0b029ee1;
          }
          local_d0 = 0xe52c6ed2110c2fa4;
          local_a8 = local_50;
          local_88 = local_50;
        }
        else if (uVar8 == 0xdd4d147d8381be9d) {
          local_b8 = 1;
          local_98 = -1;
          local_bc = 0;
          local_90 = param_3 - 1;
          local_b0 = (longlong)local_90 >> 1;
          local_c8 = 0x2ae594483d05465e;
          if ((longlong)local_b0 <= (longlong)param_2) {
            local_c8 = 0x57c598de87824db9;
          }
          local_d0 = 0x45b4920827b54a32;
          local_80 = param_2;
          local_78 = param_2;
        }
      }
      if (uVar8 != 0xf6a78149a15bfeeb) break;
      local_68 = local_88;
      local_50 = local_88 + local_98 >> ((byte)local_b8 & 0x3f);
      local_48 = (undefined8 *)(param_1 + local_50 * 0x10);
      pcVar3 = *(char **)(param_1 + local_50 * 0x10);
      pcVar4 = (char *)*param_4;
      sVar9 = strlen(pcVar4);
      sVar10 = strlen(pcVar3);
      sVar12 = sVar9;
      if (sVar10 <= sVar9) {
        sVar12 = sVar10;
      }
      iVar7 = memcmp(pcVar3,pcVar4,sVar12);
      bVar6 = sVar10 < sVar9;
      if (iVar7 != local_bc) {
        bVar6 = iVar7 < local_bc;
      }
      local_c8 = 0x8978505bb4d4ffe8;
      if (!bVar6) {
        local_c8 = 0x4db650801bc4b787;
      }
      local_d0 = 0x480b02ad01ca06c2;
      local_a8 = local_88;
    }
  } while (uVar8 != 0x5bd522d1a0eb145);
  uVar5 = param_4[1];
  puVar1 = (undefined8 *)(param_1 + local_a8 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar5;
  return;
}



void FUN_1800f3c80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  size_t sVar7;
  size_t sVar8;
  ulonglong uVar9;
  size_t sVar10;
  undefined1 auStack_a8 [44];
  int local_7c;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_a8;
  local_70 = 0x10753b11e03c32db;
  local_78 = 0xd37a894cf514bc00;
  local_68 = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          pcVar2 = local_60;
          uVar9 = local_70 ^ 0xddde25897c3fbf84;
          uVar6 = local_70 ^ local_78;
          local_78 = local_78 ^ 0xddde25897c3fbf84;
          local_70 = uVar9;
          if (0x101b2cb463868368 < (longlong)uVar6) break;
          if (uVar6 == 0xadb9ddec80e58d51) {
            local_58 = *param_2;
            uStack_50 = param_2[1];
            uVar3 = param_1[1];
            *param_2 = *param_1;
            param_2[1] = uVar3;
            *param_1 = local_58;
            param_1[1] = uStack_50;
            local_70 = 0x903b08daebe02f2f;
            local_78 = 0xc0b9a5dcce3618ac;
          }
          else if (uVar6 == 0xc30fb25d15288edb) {
            local_7c = 0;
            pcVar2 = (char *)*param_2;
            pcVar1 = (char *)*param_1;
            sVar7 = strlen(pcVar1);
            sVar8 = strlen(pcVar2);
            sVar10 = sVar8;
            if (sVar7 < sVar8) {
              sVar10 = sVar7;
            }
            iVar5 = memcmp(pcVar2,pcVar1,sVar10);
            bVar4 = iVar5 < local_7c;
            if (iVar5 == local_7c) {
              bVar4 = sVar8 < sVar7;
            }
            local_70 = 0xb5d2963a32c949c9;
            if (!bVar4) {
              local_70 = 0x7bce80b71e8236ef;
            }
            local_78 = 0xa5c9ba8e514fcaa0;
            local_60 = pcVar2;
          }
          else if (uVar6 == 0xde073a394fcdfc4f) {
            pcVar1 = (char *)*local_68;
            sVar7 = strlen(local_60);
            sVar8 = strlen(pcVar1);
            sVar10 = sVar8;
            if (sVar7 < sVar8) {
              sVar10 = sVar7;
            }
            iVar5 = memcmp(pcVar1,pcVar2,sVar10);
            bVar4 = iVar5 < local_7c;
            if (iVar5 == local_7c) {
              bVar4 = sVar8 < sVar7;
            }
            local_70 = 0x2ad4ac1270df4779;
            if (!bVar4) {
              local_70 = 0x3fd9b5272710afb;
            }
            local_78 = 0x537f365457a73d78;
          }
        }
        if (uVar6 != 0x101b2cb463868369) break;
        local_58 = *param_2;
        uStack_50 = param_2[1];
        uVar3 = param_1[1];
        *param_2 = *param_1;
        param_2[1] = uVar3;
        *param_1 = local_58;
        param_1[1] = uStack_50;
        local_60 = (char *)*param_2;
        local_70 = 0xcfd4dcd18289f404;
        local_78 = 0x11d3e6e8cd44084b;
      }
      if (uVar6 != 0x79ab9a4627787a01) break;
      local_58 = *local_68;
      uStack_50 = local_68[1];
      uVar3 = param_2[1];
      *local_68 = *param_2;
      local_68[1] = uVar3;
      *param_2 = local_58;
      param_2[1] = uStack_50;
      pcVar2 = (char *)*param_2;
      pcVar1 = (char *)*param_1;
      sVar7 = strlen(pcVar1);
      sVar8 = strlen(pcVar2);
      sVar10 = sVar8;
      if (sVar7 < sVar8) {
        sVar10 = sVar7;
      }
      iVar5 = memcmp(pcVar2,pcVar1,sVar10);
      bVar4 = iVar5 < local_7c;
      if (iVar5 == local_7c) {
        bVar4 = sVar8 < sVar7;
      }
      local_70 = 0x4b160ed8d2127394;
      if (!bVar4) {
        local_70 = 0xb62d7e327721c946;
      }
      local_78 = 0xe6afd33452f7fec5;
    }
  } while (uVar6 != 0x5082ad0625d63783);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_a8)) {
    return;
  }
}



void FUN_1800f3fee(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_6d;
  char local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0xe58a4b0d79817b6;
  local_68 = 0x2e6252f3f16f23cd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xe2a2e6dcc7e3395e;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xe2a2e6dcc7e3395e;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0xed62853865a513) break;
          if (uVar1 == 0xff129d7ac79a5aed) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xf8aea28fc7e52364;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0xb8db0e0e01659bde;
            }
            local_68 = 0x404381a1b2a82079;
          }
          else if (uVar1 == 0x5ef6ad112baaaf0) {
            *param_5 = 1;
            local_60 = 0xab5796721a7de7b2;
            local_68 = 0x149bce8483e2da59;
          }
          else if (uVar1 == 0x203af64326f7347b) {
            local_60 = 0x6942fa907c999751;
            if (*param_5 == 1) {
              local_60 = 0x299c3f1c229cf057;
            }
            local_68 = 0x965067eabb03cdbc;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0x1110b62f968defd1) break;
        if (uVar1 == 0xeeef49d06972102f) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0xa72ab5ec57882ef2;
          if (local_54 == param_4) {
            local_60 = 0x5dd7424782a8deef;
          }
          local_68 = 0x583828969012741f;
        }
        else if (uVar1 == 0xf8988fafb3cdbba7) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x4889a36d2d1c94ab;
          local_68 = 0xa666eabd446e8484;
        }
      }
      if (uVar1 != 0xb8ed232e754d031d) break;
      local_6a = -(local_6c - local_69 ^ local_6d);
      local_60 = 0xe4ac84bb55f2c6b6;
      local_68 = 0xa43cd6b3c80d699;
    }
  } while (uVar1 != 0xbfcc58f6999f3deb);
  return;
}



void FUN_1800f42d0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800f4410(void)

{
  Unwind_1801dd394();
}



void FUN_1800f4440(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800f4580(void)

{
  Unwind_1801dd394();
}



void FUN_1800f45f0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800f4730(void)

{
  Unwind_1801dd394();
}



void FUN_1800f4760(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800f48a0(void)

{
  Unwind_1801dd394();
}



void FUN_1800f48d0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800f4a10(void)

{
  Unwind_1801dd394();
}



void FUN_1800f4a40(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_80 = 0xe48fe7dfaeb9c3de;
  local_88 = 0x1e7794be4ae47f62;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_80 ^ 0x1643b2e539370a89;
          uVar1 = local_80 ^ local_88;
          local_88 = local_88 ^ 0x1643b2e539370a89;
          local_80 = uVar2;
          if ((longlong)uVar1 < -0xa888571b6f76078) break;
          if (uVar1 == 0xf5777a8e49089f88) {
            local_60 = local_68 + 0x28;
            local_80 = 0xbd2f24255577e6d1;
            local_88 = 0x8e56d87c8c3bed27;
            local_58 = local_50;
          }
          else if (uVar1 == 0x3379fc59d94c0bf6) {
            thunk_FUN_1801f42e0(local_58,local_60);
            local_80 = 0x4dc7293ddead7572;
            local_88 = 0xef1f5697f3159877;
          }
          else if (uVar1 == 0xfaf87361e45dbcbc) {
            local_70 = 0xf;
            local_78 = 0;
            local_68 = DAT_18027a698;
            local_80 = 0x7e11384f21b66acb;
            if (0xf < DAT_18027a698) {
              local_80 = 0x2cdbfcb625dca93b;
            }
            local_88 = 0xdcc947e50c0e87ce;
          }
        }
        if ((longlong)uVar1 < -0xfed44acd62dd10b) break;
        if (uVar1 == 0xf012bb5329d22ef5) {
          local_58 = CONCAT71(DAT_18027a680._1_7_,(undefined1)DAT_18027a680);
          local_60 = local_68 + 1;
          local_80 = 0xfb6af184edb9cbd7;
          if (0xfff < local_60) {
            local_80 = 0x2513d389e5546c13;
          }
          local_88 = 0xc8130ddd34f5c021;
          local_48 = local_58;
        }
      }
      if (uVar1 != 0xed00de54d1a1ac32) break;
      local_50 = *(longlong *)(local_48 + -8);
      local_80 = 0x8a132cda5ce6ffcb;
      if ((local_48 - local_50) - 8U < 0x20) {
        local_80 = 0xd14e1135d22e1818;
      }
      local_88 = 0x24396bbb9b268790;
    }
    if (uVar1 == 0xa2d87faa2db8ed05) break;
    if (uVar1 == 0xae2a4761c7c0785b) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_78);
    }
  }
  DAT_18027a690 = local_78;
  DAT_18027a698 = local_70;
  DAT_18027a680._0_1_ = 0;
  return;
}



undefined8 FUN_1800f4d70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x16;
  local_20 = 0x1f;
  local_38 = puVar6;
  FUN_1800fa020(&DAT_1802a3eec,&DAT_18027a707,0x1a,0x17,&DAT_1802a3f04);
  *(ulonglong *)((longlong)puVar6 + 0xe) = CONCAT62(DAT_1802a3efa._2_6_,(undefined2)DAT_1802a3efa);
  uVar4 = uRam00000001802a3ef4;
  uVar3 = uRam00000001802a3ef0;
  uVar1 = CONCAT22((undefined2)DAT_1802a3efa,uRam00000001802a3ef8);
  *puVar6 = _DAT_1802a3eec;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar1;
  *(undefined1 *)((longlong)puVar6 + 0x16) = 0;
  FUN_1800ef070(&PTR_PTR_18027a3c0,&local_38,lVar5 + 0x443dc0,FUN_1800f6ae0);
  lVar5 = FUN_1801b2b70();
  local_50 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_48 = 0x1a;
  local_40 = 0x1f;
  local_58 = puVar6;
  FUN_1800fa020(&DAT_1802a3f08,&DAT_18027a74d,0x15,0x1b,&DAT_1802a3f24);
  uVar2 = uRam00000001802a3f1a;
  *(ulonglong *)((longlong)puVar6 + 10) = CONCAT26(uRam00000001802a3f18,CONCAT42(uRam00000001802a3f14,_DAT_1802a3f12));
  *(undefined8 *)((longlong)puVar6 + 0x12) = uVar2;
  uVar4 = uRam00000001802a3f14;
  uVar3 = uRam00000001802a3f0c;
  uVar1 = CONCAT22(_DAT_1802a3f12,uRam00000001802a3f10);
  *puVar6 = _DAT_1802a3f08;
  puVar6[1] = uVar3;
  puVar6[2] = uVar1;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x1a) = 0;
  FUN_1800ef070(&PTR_PTR_18027a400,&local_58,lVar5 + 0x3f2470,FUN_1800f6cc0);
  lVar5 = FUN_1801b2b70();
  local_70 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_68 = 0x20;
  local_60 = 0x2f;
  local_78 = puVar6;
  FUN_1800fa020(&DAT_1802a3f28,&DAT_18027a79b,0x15,0x21,&DAT_1802a3f4c);
  uVar2 = uRam00000001802a3f40;
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a3f38;
  *(undefined8 *)(puVar6 + 6) = uVar2;
  uVar4 = uRam00000001802a3f34;
  uVar3 = uRam00000001802a3f30;
  uVar1 = uRam00000001802a3f2c;
  *puVar6 = _DAT_1802a3f28;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)(puVar6 + 8) = 0;
  FUN_1800f6de0(&PTR_PTR_18027a440,&local_78,lVar5 + 0x715c40,FUN_1800f71c0);
  lVar5 = FUN_1801b2b70();
  local_90 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_88 = 0x11;
  local_80 = 0x1f;
  local_98 = puVar6;
  FUN_1800fa020(&DAT_1802a3f50,&DAT_18027a7ec,0x1f,0x12,&DAT_1802a3f64);
  *(undefined1 *)(puVar6 + 4) = DAT_1802a3f60;
  uVar4 = uRam00000001802a3f5c;
  uVar3 = uRam00000001802a3f58;
  uVar1 = uRam00000001802a3f54;
  *puVar6 = _DAT_1802a3f50;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x11) = 0;
  FUN_1800f73a0(&PTR_PTR_18027a480,&local_98,lVar5 + 0x718f40,FUN_1800f7780);
  lVar5 = FUN_1801b2b70();
  local_b0 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_a8 = 0x1f;
  local_a0 = 0x1f;
  local_b8 = puVar6;
  FUN_1800fa020(&DAT_1802a3f68,&DAT_18027a83c,0x17,0x20,&DAT_1802a3f88);
  uVar2 = uRam00000001802a3f7f;
  *(ulonglong *)((longlong)puVar6 + 0xf) = CONCAT71(uRam00000001802a3f78,DAT_1802a3f77);
  *(undefined8 *)((longlong)puVar6 + 0x17) = uVar2;
  uVar4 = uRam00000001802a3f74;
  uVar3 = uRam00000001802a3f70;
  uVar1 = uRam00000001802a3f6c;
  *puVar6 = _DAT_1802a3f68;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x1f) = 0;
  FUN_1800ef070(&PTR_PTR_18027a4c0,&local_b8,lVar5 + 0x11c350,FUN_1800f7940);
  lVar5 = FUN_1801b2b70();
  local_d0 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_c8 = 0x19;
  local_c0 = 0x1f;
  local_d8 = puVar6;
  FUN_1800fa020(&DAT_1802a3f8c,&DAT_18027a888,0x16,0x1a,&DAT_1802a3fa8);
  uVar2 = uRam00000001802a3f9d;
  *(ulonglong *)((longlong)puVar6 + 9) = CONCAT17(uRam00000001802a3f9c,CONCAT43(uRam00000001802a3f98,_DAT_1802a3f95));
  *(undefined8 *)((longlong)puVar6 + 0x11) = uVar2;
  uVar4 = uRam00000001802a3f98;
  uVar3 = uRam00000001802a3f94;
  uVar1 = uRam00000001802a3f90;
  *puVar6 = _DAT_1802a3f8c;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x19) = 0;
  FUN_1800ef070(&PTR_PTR_18027a500,&local_d8,lVar5 + 0x11be90,FUN_1800f7a60);
  lVar5 = FUN_1801b2b70();
  local_f0 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_e8 = 0x1b;
  local_e0 = 0x1f;
  local_f8 = puVar6;
  FUN_1800fa020(&DAT_1802a3fac,&DAT_18027a8c8,0x14,0x1c,&DAT_1802a3fc8);
  uVar2 = uRam00000001802a3fbf;
  *(ulonglong *)((longlong)puVar6 + 0xb) = CONCAT35(uRam00000001802a3fbc,CONCAT41(uRam00000001802a3fb8,DAT_1802a3fb7));
  *(undefined8 *)((longlong)puVar6 + 0x13) = uVar2;
  uVar4 = uRam00000001802a3fb8;
  uVar3 = uRam00000001802a3fb4;
  uVar1 = uRam00000001802a3fb0;
  *puVar6 = _DAT_1802a3fac;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x1b) = 0;
  FUN_1800ef070(&PTR_PTR_18027a540,&local_f8,lVar5 + 0x13d920,&LAB_1800f7ce0);
  lVar5 = FUN_1801b2b70();
  local_110 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_108 = 0x1f;
  local_100 = 0x1f;
  local_118 = puVar6;
  FUN_1800fa020(&DAT_1802a3fcc,&DAT_18027a90e,0x18,0x20,&DAT_1802a3fec);
  uVar2 = uRam00000001802a3fe3;
  *(ulonglong *)((longlong)puVar6 + 0xf) = CONCAT71(uRam00000001802a3fdc,DAT_1802a3fdb);
  *(undefined8 *)((longlong)puVar6 + 0x17) = uVar2;
  uVar4 = uRam00000001802a3fd8;
  uVar3 = uRam00000001802a3fd4;
  uVar1 = uRam00000001802a3fd0;
  *puVar6 = _DAT_1802a3fcc;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x1f) = 0;
  FUN_1800ef070(&PTR_PTR_18027a580,&local_118,lVar5 + 0x207bc0,FUN_1800f7d00);
  lVar5 = FUN_1801b2b70();
  local_130 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_128 = 0x19;
  local_120 = 0x1f;
  local_138 = puVar6;
  FUN_1800fa020(&DAT_1802a3ff0,&DAT_18027a961,0x10,0x1a,&DAT_1802a400c);
  uVar2 = uRam00000001802a4001;
  *(ulonglong *)((longlong)puVar6 + 9) = CONCAT17(uRam00000001802a4000,CONCAT43(uRam00000001802a3ffc,_DAT_1802a3ff9));
  *(undefined8 *)((longlong)puVar6 + 0x11) = uVar2;
  uVar4 = uRam00000001802a3ffc;
  uVar3 = uRam00000001802a3ff8;
  uVar1 = uRam00000001802a3ff4;
  *puVar6 = _DAT_1802a3ff0;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x19) = 0;
  FUN_1800f8130(&PTR_PTR_18027a5c0,&local_138,lVar5 + 0x248f70,FUN_1800f8510);
  lVar5 = FUN_1801b2b70();
  local_150 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x40);
  local_148 = 0x32;
  local_140 = 0x3f;
  local_158 = puVar6;
  FUN_1800fa020(&DAT_1802a4010,&DAT_18027a99d,0x19,0x33,&DAT_1802a4044);
  *(undefined2 *)(puVar6 + 0xc) = DAT_1802a4040;
  uVar2 = uRam00000001802a4038;
  *(undefined8 *)(puVar6 + 8) = _DAT_1802a4030;
  *(undefined8 *)(puVar6 + 10) = uVar2;
  uVar2 = uRam00000001802a4028;
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a4020;
  *(undefined8 *)(puVar6 + 6) = uVar2;
  uVar4 = uRam00000001802a401c;
  uVar3 = uRam00000001802a4018;
  uVar1 = uRam00000001802a4014;
  *puVar6 = _DAT_1802a4010;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x32) = 0;
  FUN_1800f86b0(&PTR_PTR_18027a600,&local_158,lVar5 + 0x20b920,FUN_1800f8a90);
  lVar5 = FUN_1801b2b70();
  local_170 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_168 = 0x2d;
  local_160 = 0x2f;
  local_178 = puVar6;
  FUN_1800fa020(&DAT_1802a4048,&DAT_18027aa01,0x17,0x2e,&DAT_1802a4078);
  uVar2 = uRam00000001802a406d;
  *(ulonglong *)((longlong)puVar6 + 0x1d) = CONCAT53(uRam00000001802a4068,_DAT_1802a4065);
  *(undefined8 *)((longlong)puVar6 + 0x25) = uVar2;
  uVar2 = CONCAT35(_DAT_1802a4065,uRam00000001802a4060);
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a4058;
  *(undefined8 *)(puVar6 + 6) = uVar2;
  uVar4 = uRam00000001802a4054;
  uVar3 = uRam00000001802a4050;
  uVar1 = uRam00000001802a404c;
  *puVar6 = _DAT_1802a4048;
  puVar6[1] = uVar1;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x2d) = 0;
  FUN_1800f8eb0(&PTR_PTR_18027a640,&local_178,lVar5 + 0x20b2e0,FUN_1800f9290);
  return 1;
}



void FUN_1800f56a0(void)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xf5546374c5f92e2c;
  local_58 = 0xeb44d6b7f59888c8;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xc64843f042bf586e;
        if ((longlong)uVar2 < 0x1e10b5c33061a6e4) break;
        if (uVar2 == 0x4c603ef4ee085324) {
          cVar1 = FUN_1801b3c30(local_48,0x80);
          local_50 = 0x71e715c54b705170;
          if (cVar1 != '\0') {
            local_50 = 0x5a45c320f6a15655;
          }
          local_58 = 0x8f6dc221eecd931c;
        }
        else {
          local_50 = local_50 ^ 0xc64843f042bf586e;
          if (uVar2 == 0x1e10b5c33061a6e4) {
            local_59 = 0;
            local_48 = DAT_1802a3ea8;
            local_50 = 0x363098148068c3de;
            if (DAT_1802a3ea8 == 0) {
              local_50 = 0x84da7104cbdd5296;
            }
            local_58 = 0x7a50a6e06e6090fa;
          }
        }
      }
      if (uVar2 != 0xd5280101186cc549) break;
      *(undefined1 *)(local_48 + 0x41) = local_59;
      *(undefined2 *)(local_48 + 0x42) = 0;
      *(undefined1 *)(local_48 + 0x47) = local_59;
      *(undefined4 *)(local_48 + 0x65) = 0;
      *(undefined8 *)(local_48 + 0x6c) = 0;
      local_50 = 0x776b88260a506eaa;
      local_58 = 0x89e15fc2afedacc6;
    }
    local_50 = local_50 ^ 0xc64843f042bf586e;
  } while (uVar2 != 0xfe8ad7e4a5bdc26c);
  return;
}



undefined8 FUN_1800f5870(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;

  local_78 = 0xdf9a1e226368f7cd;
  local_80 = 0xc6b11d3eff3040cb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_78 ^ 0x47ebc64b2e765eea;
            uVar1 = local_78 ^ local_80;
            local_80 = local_80 ^ 0x47ebc64b2e765eea;
            local_78 = uVar3;
            if (-0x311163ab9c39943f < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x5237f625b265ce24) {
              if (uVar1 == 0x96b5e423c72cf35f) {
                if ((local_58 | local_70) >> 0x20 == 0) {
                  uVar1 = (local_58 & 0xffffffff) / (local_70 & 0xffffffff);
                  uVar3 = (local_58 & 0xffffffff) % (local_70 & 0xffffffff);
                }
                else {
                  uVar1 = (longlong)local_58 / (longlong)local_70;
                  uVar3 = (longlong)local_58 % (longlong)local_70;
                }
                uVar3 = uVar3 * local_68;
                if ((uVar3 | local_70) >> 0x20 == 0) {
                  uVar3 = (uVar3 & 0xffffffff) / (local_70 & 0xffffffff);
                }
                else {
                  uVar3 = (longlong)uVar3 / (longlong)local_70;
                }
                local_50 = uVar3 + uVar1 * local_68;
                local_78 = 0xa767dcc26b4b3044;
                local_80 = 0x916dc1bec4a3da7e;
              }
              else if (uVar1 == 0xa4a8698f715f1999) {
                if ((local_58 | local_60) >> 0x20 == 0) {
                  uVar1 = (local_58 & 0xffffffff) / (local_60 & 0xffffffff);
                }
                else {
                  uVar1 = (longlong)local_58 / (longlong)local_60;
                }
                if ((local_58 | local_60) >> 0x20 == 0) {
                  uVar3 = (local_58 & 0xffffffff) % (local_60 & 0xffffffff);
                }
                else {
                  uVar3 = (longlong)local_58 % (longlong)local_60;
                }
                uVar3 = uVar3 * local_68;
                if ((uVar3 | local_60) >> 0x20 == 0) {
                  uVar3 = (uVar3 & 0xffffffff) / (local_60 & 0xffffffff);
                }
                else {
                  uVar3 = (longlong)uVar3 / (longlong)local_60;
                }
                local_50 = uVar3 + uVar1 * local_68;
                local_78 = 0x557ec7a0fd7a78bc;
                local_80 = 0x6374dadc52929286;
              }
            }
            else if (uVar1 == 0xadc809da4d9a31dc) {
              local_78 = 0xc854ab0c9ca56e36;
              local_80 = 0x5ee14f2f5b899d69;
            }
            else if (uVar1 == 0xb66d37f9422c5795) {
              local_78 = 0x7871952b75255709;
              if ((longlong)local_70 < 24000000) {
                local_78 = 0xf40a30a962b58601;
              }
              local_80 = 0xb69f097f16e33ccb;
            }
          }
          if (0x1dbb1df837f2b528 < (longlong)uVar1) break;
          if (uVar1 == 0xceee9c5463c66bc2) {
            local_78 = 0x24dee4898621b98e;
            if (local_70 == 24000000) {
              local_78 = 0x2dbe84dcbae491cb;
            }
            local_80 = 0x8916ed53cbbb8852;
          }
          else if (uVar1 == 0x192b031c9c58b706) {
            local_60 = 24000000;
            local_68 = 1000000000;
            local_48 = DAT_1802a3ec8;
            local_70 = FUN_1801da1cc();
            local_58 = FUN_1801da1b0();
            local_78 = 0xb69fe7fe39af2a6;
            local_80 = 0xbd04c986a1b6a533;
          }
        }
        if (uVar1 != 0x1dbb1df837f2b529) break;
        local_50 = local_58 * 100;
        local_78 = 0x4bccb23d9d09553a;
        local_80 = 0x7dc6af4132e1bf00;
      }
      if (uVar1 != 0x429539d67456baca) break;
      local_78 = 0xdabf3775755b9f99;
      if (local_70 == 10000000) {
        local_78 = 0x6acc23570f331b6c;
      }
      local_80 = 0x77773eaf38c1ae45;
    }
  } while (uVar1 != 0x360a1d7cafe8ea3a);
  uVar2 = DAT_1802a3eb0;
  if (500000000 < local_50 - local_48) {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_1800f5ca0(void)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x6557d14b29fe401a;
  local_58 = 0xee2d46cb5baae04c;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x3a82604ff7eb3ac8;
        if ((longlong)uVar2 < -0x40537d9d799e011b) break;
        if (uVar2 == 0xbfac82628661fee5) {
          cVar1 = FUN_1801b3c30(local_48,0x44c);
          local_50 = 0x5ba091fd1a93428b;
          if (cVar1 != '\0') {
            local_50 = 0x2b5bf9d418f894c;
          }
          local_58 = 0xe3b168bee069525c;
        }
        else {
          local_50 = local_50 ^ 0x3a82604ff7eb3ac8;
          if (uVar2 == 0xe104d723a1e6db10) {
            *(undefined4 *)(local_48 + 0x448) = 0;
            local_50 = 0x1db7b38690d363a0;
            local_58 = 0xa5a64ac56a297377;
          }
        }
      }
      if (uVar2 != 0x8b7a97807254a056) break;
      local_48 = DAT_1802a3ed8;
      local_50 = 0x756acae6c2c7b3fb;
      if (DAT_1802a3ed8 == 0) {
        local_50 = 0x72d7b1c7be5c5dc9;
      }
      local_58 = 0xcac6488444a64d1e;
    }
    local_50 = local_50 ^ 0x3a82604ff7eb3ac8;
  } while (uVar2 != 0xb811f943fafa10d7);
  return;
}



undefined4 FUN_1800f5e40(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_68 = 0xf458c0e2141debb8;
  local_70 = 0x17ba7d6af172c4b3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_68 ^ local_70;
          local_70 = local_70 ^ 0xa6abe62a0f1a5023;
          if (-0x1c1d42771a90d0f6 < (longlong)uVar1) break;
          if (uVar1 == 0x8e1a4862ea91753d) {
            puVar2 = param_1;
            if (local_60 < local_48) {
              puVar2 = (undefined8 *)*param_1;
            }
            param_1[2] = local_58;
            FUN_1802079d0(puVar2,local_50,local_58);
            *(undefined1 *)((longlong)puVar2 + local_58) = 0;
            local_68 = 0x90ae70ee6b888861;
            local_70 = 0xc608966da4f6a741;
          }
          else {
            local_68 = local_68 ^ 0xa6abe62a0f1a5023;
            if (uVar1 == 0xb74a0502ca36ee11) {
              FUN_18007f460(param_1,local_58);
              local_68 = 0xfa22d3ae4495e6ea;
              local_70 = 0xac84352d8bebc9ca;
            }
          }
        }
        if (uVar1 != 0xe3e2bd88e56f2f0b) break;
        local_60 = 0xf;
        local_68 = 0x952835be78575a58;
        if ((undefined8 **)param_1 == &DAT_18027a680) {
          local_68 = 0xa067a17a1b545dc5;
        }
        local_70 = 0xf6c147f9d42a72e5;
      }
      if (uVar1 != 0x63e97247ac7d28bd) break;
      local_58 = DAT_18027a690;
      local_50 = &DAT_18027a680;
      if (local_60 < DAT_18027a698) {
        local_50 = DAT_18027a680;
      }
      local_48 = param_1[3];
      local_68 = 0x8fb6fd7f439be88f;
      if (local_48 < DAT_18027a690) {
        local_68 = 0xb6e6b01f633c73a3;
      }
      local_70 = 0x1acb51da90a9db2;
    }
    local_68 = local_68 ^ 0xa6abe62a0f1a5023;
  } while (uVar1 != 0x56a6e683cf7e2f20);
  return DAT_18027a6a0;
}



void FUN_1800f6080(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float local_28;

  local_28 = 0.0;
  plVar5 = (longlong *)FUN_180179ff0();
  lVar1 = *plVar5;
  fVar3 = local_28;
  if ((((lVar1 != 0) && (cVar4 = FUN_1801b8b10(), fVar3 = local_28, cVar4 == '\0')) &&
      (lVar2 = *(longlong *)(lVar1 + 0x30), fVar3 = local_28, lVar2 != 0)) &&
     ((cVar4 = FUN_1801b3c30(lVar2,0x200), fVar3 = local_28, cVar4 != '\0' &&
      (fVar3 = local_28, *(char *)(lVar2 + 0xb8) != '\0')))) {
    fVar7 = (float)FUN_1800eb440();
    if (((DAT_1802a3eb8 != 0.0) || (fVar3 = fVar7, NAN(DAT_1802a3eb8))) &&
       (fVar3 = DAT_1802a3eb8, 0.35 <= fVar7 - DAT_1802a3eb8)) {
      DAT_1802a3eb8 = 0.0;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      *(undefined1 *)(lVar2 + 9) = 1;
      lVar1 = *(longlong *)(lVar1 + 0x30);
      if ((lVar1 != 0) && (cVar4 = FUN_1801b3c30(lVar1,0x200), cVar4 != '\0')) {
        lVar6 = FUN_1801b2b70();
        (*(code *)(lVar6 + 0x13d920))(lVar1);
      }
      *(undefined1 *)(lVar2 + 9) = 0;
      fVar3 = DAT_1802a3eb8;
    }
  }
  DAT_1802a3eb8 = fVar3;
  return;
}



void Unwind_1800f61d0(undefined8 param_1,longlong param_2)

{
  **(undefined1 **)(param_2 + 0x28) = *(undefined1 *)(param_2 + 0x37);
  return;
}



void FUN_1800f6200(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;

  lVar3 = FUN_1800c32a0();
  if (*(char *)(lVar3 + 0x210) == '\x01') {
    plVar4 = (longlong *)FUN_180179ff0();
    lVar3 = *plVar4;
    if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x30), lVar1 != 0)) {
      cVar2 = FUN_1801b3c30(lVar1,0x200);
      if ((cVar2 != '\0') && (*(char *)(lVar1 + 0xb8) != '\0')) {
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        *(undefined1 *)(lVar1 + 9) = 1;
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 != 0) {
          cVar2 = FUN_1801b3c30(lVar3,0x200);
          if (cVar2 != '\0') {
            lVar5 = FUN_1801b2b70();
            (*(code *)(lVar5 + 0x13d920))(lVar3);
          }
        }
        *(undefined1 *)(lVar1 + 9) = 0;
      }
    }
  }
  return;
}



void Unwind_1800f6300(undefined8 param_1,longlong param_2)

{
  **(undefined1 **)(param_2 + 0x28) = *(undefined1 *)(param_2 + 0x37);
  return;
}



void FUN_1800f6330(void)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xbf9240901d1d950;
  local_50 = 0xa9af8d14db97c875;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          lVar2 = DAT_1802a3ec0;
          uVar3 = local_48 ^ local_50;
          local_50 = local_50 ^ 0xd0260a0b1d22ee44;
          if (-0x3d05d08d4335979c < (longlong)uVar3) break;
          if (uVar3 == 0xa256a91dda461125) {
            local_48 = 0x8ed690d2f883e9cc;
            if (DAT_1802a3ec0 == 0) {
              local_48 = 0x752ebff21188d687;
            }
            local_50 = 0x4e49520340d1127b;
          }
          else {
            local_48 = local_48 ^ 0xd0260a0b1d22ee44;
            if (uVar3 == 0xc09fc2d1b852fbb7) {
              cVar1 = FUN_1801b8b10();
              local_48 = 0x4a41b2c1df39c9af;
              if (cVar1 != '\0') {
                local_48 = 0xb3dc704232aa6536;
              }
              local_50 = 0x71265f308e600d53;
            }
          }
        }
        if (uVar3 != 0xc2fa2f72bcca6865) break;
        lVar2 = FUN_1800c32a0();
        local_48 = 0x3712d4a572fb2379;
        if (*(char *)(lVar2 + 0x210) != '\0') {
          local_48 = 0x6e3a16e10c8f3740;
        }
        local_50 = 0x555dfb105dd6f3bc;
      }
      if (uVar3 != 0x624f2fb52f2dd0c5) break;
      DAT_1802a3ec0 = 0;
      (*DAT_18027a530)(lVar2);
      local_48 = 0xf7c00493b6963e5;
      local_50 = 0x341bedb86a30a719;
    }
    local_48 = local_48 ^ 0xd0260a0b1d22ee44;
  } while (uVar3 != 0x3b67edf15159c4fc);
  return;
}



undefined1 FUN_1800f64f0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x6ffe3e8f5c4be371;
  local_68 = 0x73628f7f1b77b6b4;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x878e747198e7b81;
        if (uVar1 != 0x1c9cb1f0473c55c5) break;
        local_60 = 0x6a5a36a9f899d021;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x38981547b59a36f9;
        }
        local_68 = 0xc41128bd27881e3;
        local_69 = 1;
      }
      if (uVar1 != 0x34d907cc67e2b71a) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x9ab38dacfd06765c;
      local_68 = 0xfca8a98ed7e7279e;
    }
    local_60 = local_60 ^ 0x878e747198e7b81;
  } while (uVar1 != 0x661b24222ae151c2);
  return local_69;
}



undefined1 FUN_1800f6620(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0xca816bedad267350;
  local_68 = 0x37cb0bf5f304e488;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xc7329fff72fecfaf;
        if (uVar1 != 0xfd4a60185e2297d8) break;
        local_60 = 0x602281288f0691af;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xbc9343d2c020dbd1;
        }
        local_68 = 0xd34008cffc90f1ef;
        local_69 = 1;
      }
      if (uVar1 != 0x6fd34b1d3cb02a3e) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xd8bac373a4b1a89;
      local_68 = 0xbee925d049dd7ac9;
    }
    local_60 = local_60 ^ 0xc7329fff72fecfaf;
  } while (uVar1 != 0xb36289e773966040);
  return local_69;
}



undefined1 FUN_1800f6750(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0xf3506b961e2ac1fa;
  local_68 = 0x7c0edd854afdd9d0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x8715e2e5680dcbf2;
        if (uVar1 != 0x8f5eb61354d7182a) break;
        local_60 = 0x14bab66fc5514477;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xc18afcc6a315c6ec;
        }
        local_68 = 0xcbebe22ffa3576e3;
        local_69 = 1;
      }
      if (uVar1 != 0xa611ee95920b00f) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xc4fac5a3818945cd;
      local_68 = 0x1bab91e3beed7759;
    }
    local_60 = local_60 ^ 0x8715e2e5680dcbf2;
  } while (uVar1 != 0xdf5154403f643294);
  return local_69;
}



undefined1 FUN_1800f6880(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x4ee58964e3bc591b;
  local_68 = 0x7a9a81e6b969d25d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xe50a13704fd126a3;
        if (uVar1 != 0xa87707b43887ef5a) break;
        local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        local_60 = 0x94a4c62b6a85c3f9;
        local_68 = 0xf15b2bb4ed6acd44;
      }
      if (uVar1 != 0x347f08825ad58b46) break;
      local_60 = 0xdeb9d5094b836878;
      if (*(char *)(param_1 + 0x38) != '\0') {
        local_60 = 0x13313f22f4eb899f;
      }
      local_68 = 0xbb463896cc6c66c5;
      local_69 = 1;
    }
    local_60 = local_60 ^ 0xe50a13704fd126a3;
  } while (uVar1 != 0x65ffed9f87ef0ebd);
  return local_69;
}



undefined1 FUN_1800f69b0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x74063ffa7e0c342a;
  local_68 = 0x23620435c347c2d0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x4ad60ce6058e52ea;
        if (uVar1 != 0x57643bcfbd4bf6fa) break;
        local_60 = 0x22c7b817d2e098fb;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x404778fa3ddbd4c5;
        }
        local_68 = 0x388dad0a88e9866c;
        local_69 = 1;
      }
      if (uVar1 != 0x78cad5f0b53252a9) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xa29286c77671b2f0;
      local_68 = 0xb8d893da2c78ac67;
    }
    local_60 = local_60 ^ 0x4ad60ce6058e52ea;
  } while (uVar1 != 0x1a4a151d5a091e97);
  return local_69;
}



void FUN_1800f6ae0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xcd0ee469270e791c;
  local_50 = 0xa1c1f2f9b9f00408;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc4c2b14773cdd042;
        if (0x6ccf16909efe7d13 < (longlong)uVar2) break;
        if (uVar2 == 0x99a00714590c937a) {
          *(undefined1 *)(param_1 + 0x41) = local_51;
          *(undefined2 *)(param_1 + 0x42) = 0;
          *(undefined1 *)(param_1 + 0x47) = local_51;
          *(undefined4 *)(param_1 + 0x65) = 0;
          *(undefined8 *)(param_1 + 0x6c) = 0;
          local_48 = 0xc50a6cb3c8e8bfad;
          local_50 = 0xbc9d127d3d808b8c;
        }
        else {
          local_48 = local_48 ^ 0xc4c2b14773cdd042;
          if (uVar2 == 0x22ad74770a84959b) {
            cVar1 = FUN_1801b3c30(param_1,0x80);
            local_48 = 0xc527973aac99b25;
            if (cVar1 == '\0') {
              local_48 = 0xec6500a906ad3c7e;
            }
            local_50 = 0x95f27e67f3c5085f;
          }
        }
      }
      if (uVar2 != 0x6ccf16909efe7d14) break;
      local_51 = 0;
      DAT_1802a3ea8 = param_1;
      (*DAT_18027a3f0)(param_1,param_2);
      lVar3 = FUN_1800c32a0();
      local_48 = 0x42b02eab2037c981;
      if (*(char *)(lVar3 + 0x210) == '\0') {
        local_48 = 0x198a2412dfdb683b;
      }
      if (param_1 == 0) {
        local_48 = 0x198a2412dfdb683b;
      }
      local_50 = 0x601d5adc2ab35c1a;
    }
    local_48 = local_48 ^ 0xc4c2b14773cdd042;
  } while (uVar2 != 0x79977ecef5683421);
  return;
}



void FUN_1800f6cc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x1e3adae03543fb14;
  local_50 = 0x4f1047241e0dd1f8;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x60b9ae0ce7900a2f;
        if (uVar2 != 0xb9d1373363061782) break;
        (*DAT_18027a430)(param_1,param_2);
        local_48 = 0x483c7694b5cf0ddd;
        local_50 = 0x85dfb0b1d05cfe28;
      }
      if (uVar2 != 0x512a9dc42b4e2aec) break;
      lVar1 = FUN_1800c32a0();
      local_48 = 0xb57a2ada2ada99fb;
      if (*(char *)(lVar1 + 0x210) != '\0') {
        local_48 = 0xc148dbcc2c4f7d8c;
      }
      local_50 = 0xcab1de949dc8e79;
    }
    local_48 = local_48 ^ 0x60b9ae0ce7900a2f;
  } while (uVar2 != 0xcde3c6256593f3f5);
  return;
}



ulonglong FUN_1800f6de0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 4;
  local_88 = 0x20;
  local_50 = 0;
  local_4c = 4;
  local_80 = 1;
  local_78 = -8;
  local_58 = 0xf;
  local_48 = 0;
  local_70 = 0x28;
  local_39 = 0;
  local_68 = 0xfff;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800f7169;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_1800fa020(&DAT_1802a407c,&DAT_18027aa5c,0x10,0x19,&DAT_1802a4098);
    local_d8 = &DAT_1802a407c;
    local_d0 = 0x18;
    FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
    local_c8 = &DAT_1802a409c;
    local_c0 = local_90;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_1800f7117:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f7157;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800fa020(&DAT_1802a40a8,&DAT_18027aad4,0x13,0x22,&DAT_1802a40cc);
      local_b8 = &DAT_1802a40a8;
      local_b0 = 0x21;
      FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
      local_a8 = &DAT_1802a409c;
      local_a0 = local_90;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800f7117;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f7157;
  }
  lVar10 = *local_60;
  uVar13 = local_80 + uVar9;
  lVar11 = lVar10;
  if (local_68 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_78) - lVar11)) {
LAB_1800f7169:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_70;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800f7157:
  return uVar12 & 0xffffffff;
}



void Unwind_1800f7190(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800f71c0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xfd4a0f01a571fc40;
  local_50 = 0x6023e6e7c3fdcbdb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_48 ^ local_50;
          local_50 = local_50 ^ 0xf825734a498fa175;
          if (-0x2dc6f23b26da11cd < (longlong)uVar2) break;
          if (uVar2 == 0x9d69e9e6668c379b) {
            lVar3 = FUN_1800c32a0();
            local_48 = 0x38ac004eb49f1901;
            if (*(char *)(lVar3 + 0x210) != '\0') {
              local_48 = 0xf2d14817c0cf8f97;
            }
            local_50 = 0x99d4ebc9c82bf8f3;
          }
          else {
            local_48 = local_48 ^ 0xf825734a498fa175;
            if (uVar2 == 0xa178eb877cb4e1f2) {
              (*DAT_18027a470)(param_1,param_2,param_3,param_4);
              local_48 = 0xcbaab4e15949370c;
              local_50 = 0x1993b925806cd938;
            }
          }
        }
        if (uVar2 != 0x61d1bad422a30694) break;
        local_48 = 0x7c9367bd29737999;
        if (*(char *)(param_2 + 2) == '\x01') {
          local_48 = 0xfd281fe8ce2765f;
        }
        local_50 = 0xddeb8c3a55c7986b;
      }
      if (uVar2 != 0x6b05a3de08e47764) break;
      cVar1 = FUN_1801b3c30(param_2,3);
      local_48 = 0xc92090c536f6dd26;
      if (cVar1 != '\0') {
        local_48 = 0x989c19668e13a40;
      }
      local_50 = 0x68587b424a423cd4;
    }
    local_48 = local_48 ^ 0xf825734a498fa175;
  } while (uVar2 != 0xd2390dc4d925ee34);
  return;
}



ulonglong FUN_1800f73a0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 4;
  local_88 = 0x20;
  local_50 = 0;
  local_4c = 4;
  local_80 = 1;
  local_78 = -8;
  local_58 = 0xf;
  local_48 = 0;
  local_70 = 0x28;
  local_39 = 0;
  local_68 = 0xfff;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800f7729;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_1800fa020(&DAT_1802a407c,&DAT_18027aa5c,0x10,0x19,&DAT_1802a4098);
    local_d8 = &DAT_1802a407c;
    local_d0 = 0x18;
    FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
    local_c8 = &DAT_1802a409c;
    local_c0 = local_90;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_1800f76d7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f7717;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800fa020(&DAT_1802a40a8,&DAT_18027aad4,0x13,0x22,&DAT_1802a40cc);
      local_b8 = &DAT_1802a40a8;
      local_b0 = 0x21;
      FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
      local_a8 = &DAT_1802a409c;
      local_a0 = local_90;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800f76d7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f7717;
  }
  lVar10 = *local_60;
  uVar13 = local_80 + uVar9;
  lVar11 = lVar10;
  if (local_68 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_78) - lVar11)) {
LAB_1800f7729:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_70;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800f7717:
  return uVar12 & 0xffffffff;
}



void Unwind_1800f7750(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800f7780(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x467df72547f1fede;
  local_50 = 0x1c4b6b7ad9e843f2;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x1c756fb8dcdb0a3e;
        if ((longlong)uVar3 < 0x5a543e9642e92ba6) break;
        if (uVar3 == 0x5a543e9642e92ba6) {
          uVar1 = FUN_180100330();
          FUN_180100220(uVar1,(int)(char)param_3);
          lVar2 = FUN_1800c32a0();
          local_48 = 0xf76d85f83f3c7acb;
          if (*(char *)(lVar2 + 0x210) != '\0') {
            local_48 = 0x20375f9d69eeb756;
          }
          local_50 = 0x906cb4072827b37f;
        }
        else {
          local_48 = local_48 ^ 0x1c756fb8dcdb0a3e;
          if (uVar3 == 0x670131ff171bc9b4) {
            (*DAT_18027a4b0)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            local_48 = 0x77557036afbad8d9;
            local_50 = 0xc70e9bacee73dcf0;
          }
        }
      }
      if (uVar3 != 0x5a369c5f9e19bd2c) break;
      local_48 = 0x719dcab435c86529;
      if ((char)param_2 == '\x04') {
        local_48 = 0x4cc8c5dd603a873b;
      }
      local_50 = 0x169cfb4b22d3ac9d;
    }
    local_48 = local_48 ^ 0x1c756fb8dcdb0a3e;
  } while (uVar3 != 0xb05beb9a41c90429);
  return;
}



void FUN_1800f7940(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xfb9842cd09424200;
  local_50 = 0x5c5fee524611752c;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x2fd6e7b766710336;
        if (uVar1 != 0xa7c7ac9f4f53372c) break;
        lVar2 = FUN_1800c32a0();
        local_48 = 0x42e349cadbbe2514;
        if (*(char *)(lVar2 + 0x210) != '\0') {
          local_48 = 0x1a304ff7569d4f13;
        }
        local_50 = 0x805a804dd8e7d15a;
      }
      if (uVar1 != 0xc2b9c9870359f44e) break;
      (*DAT_18027a4f0)(param_1);
      local_48 = 0x26e04c5c5158917c;
      local_50 = 0xbc8a83e6df220f35;
    }
    local_48 = local_48 ^ 0x2fd6e7b766710336;
  } while (uVar1 != 0x9a6acfba8e7a9e49);
  return;
}



void FUN_1800f7a60(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xb9d5f0acc469371c;
  local_58 = 0x2297f0975565e45b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_50 ^ 0xb72e33f7846aaba1;
          uVar1 = local_50 ^ local_58;
          local_58 = local_58 ^ 0xb72e33f7846aaba1;
          local_50 = uVar3;
          if ((longlong)uVar1 < 0x15442bcf7fdf4507) break;
          if (uVar1 == 0x15442bcf7fdf4507) {
            lVar2 = FUN_1800c32a0();
            local_50 = 0x1b7bad53068dacac;
            if (*(char *)(lVar2 + 0x210) != '\0') {
              local_50 = 0xcd0b06814894c648;
            }
            local_58 = 0xcea041747fabecee;
          }
          else if (uVar1 == 0x2479f4db715e0277) {
            DAT_1802a3ec0 = 0;
            (*DAT_18027a530)(param_1);
            local_50 = 0xc6ead00734d1059c;
            local_58 = 0x512c45fe212aa8f4;
          }
          else if (uVar1 == 0x2d48fceb689bd4ed) {
            local_50 = 0x4a8146acb25a4629;
            local_58 = 0xdd47d355a7a1eb41;
            DAT_1802a3ec0 = param_1;
          }
        }
        if ((longlong)uVar1 < -0x2a2413d886d9bfbe) break;
        if (uVar1 == 0xd5dbec2779264042) {
          local_50 = 0x7cefdda65c847f91;
          if ((*local_48 & 1) != 0) {
            local_50 = 0x75ded5964541a90b;
          }
          if (local_59 != '\0') {
            local_50 = 0x75ded5964541a90b;
          }
          local_58 = 0x51a7214d341fab7c;
        }
        else if (uVar1 == 0x3ab47f5373f2aa6) {
          local_50 = 0x9753b70cbc512f3d;
          local_58 = 0x9522f5a9aa8255;
          DAT_1802a3ec0 = param_1;
        }
      }
      if (uVar1 != 0x9b42003b910cd347) break;
      local_59 = FUN_1801b8b10();
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_48 = (byte *)(lVar2 + 9);
      local_50 = 0x41490249e6921155;
      if (*(char *)(lVar2 + 9) != '\0') {
        local_50 = 0x7074dd5de8135625;
      }
      local_58 = 0x540d2986994d5452;
    }
  } while (uVar1 != 0x97c695f915fbad68);
  return;
}



void FUN_1800f7d00(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;

  local_78 = 0xd04c931ff26434c5;
  local_80 = 0x67bae304c334f2fa;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_78 ^ 0xcb5301f175a7e025;
            uVar1 = local_78 ^ local_80;
            local_80 = local_80 ^ 0xcb5301f175a7e025;
            local_78 = uVar2;
            if (-0x28978d328268af53 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x48098fe4ceaf39c1) {
              if (uVar1 == 0x9f64f3fdf8ff9a99) {
                local_78 = 0x565276f6c83d6899;
                if (local_70 == 10000000) {
                  local_78 = 0x5df37860dd12d871;
                }
                local_80 = 0x23b6409b92d7748f;
              }
              else if (uVar1 == 0xa7610e7aa7b98bd6) {
                if ((local_58 | local_70) >> 0x20 == 0) {
                  uVar1 = (local_58 & 0xffffffff) / (local_70 & 0xffffffff);
                  uVar2 = (local_58 & 0xffffffff) % (local_70 & 0xffffffff);
                }
                else {
                  uVar1 = (longlong)local_58 / (longlong)local_70;
                  uVar2 = (longlong)local_58 % (longlong)local_70;
                }
                uVar2 = uVar2 * local_68;
                if ((uVar2 | local_70) >> 0x20 == 0) {
                  uVar2 = (uVar2 & 0xffffffff) / (local_70 & 0xffffffff);
                }
                else {
                  uVar2 = (longlong)uVar2 / (longlong)local_70;
                }
                local_50 = uVar2 + uVar1 * local_68;
                local_78 = 0x43da87daeb6f8947;
                local_80 = 0x6e911c6102ab738e;
              }
            }
            else if (uVar1 == 0xb7f6701b3150c63f) {
              local_60 = 24000000;
              local_68 = 1000000000;
              DAT_1802a3eb0 = param_1;
              local_70 = FUN_1801da1cc();
              local_58 = FUN_1801da1b0();
              local_78 = 0xbe655f7d54a243d;
              local_80 = 0xdc8e273aa8dd7493;
            }
            else if (uVar1 == 0xb805d1c11f70494a) {
              local_78 = 0x2720aae167ec7986;
              if (local_70 == 24000000) {
                local_78 = 0xb77f4901a9fb3010;
              }
              local_80 = 0x52c49c8c3d066590;
            }
          }
          if (0x2d4b9bbbe9c4fac8 < (longlong)uVar1) break;
          if (uVar1 == 0xd76872cd7d9750ae) {
            local_78 = 0xd7f4d97b356afb;
            if ((longlong)local_70 < 24000000) {
              local_78 = 0x27b6d6e59cbab928;
            }
            local_80 = 0xb8d22518644523b1;
          }
          else if (uVar1 == 0xe5bbd58d94fd5580) {
            if ((local_58 | local_60) >> 0x20 == 0) {
              uVar1 = (local_58 & 0xffffffff) / (local_60 & 0xffffffff);
            }
            else {
              uVar1 = (longlong)local_58 / (longlong)local_60;
            }
            if ((local_58 | local_60) >> 0x20 == 0) {
              uVar2 = (local_58 & 0xffffffff) % (local_60 & 0xffffffff);
            }
            else {
              uVar2 = (longlong)local_58 % (longlong)local_60;
            }
            uVar2 = uVar2 * local_68;
            if ((uVar2 | local_60) >> 0x20 == 0) {
              uVar2 = (uVar2 & 0xffffffff) / (local_60 & 0xffffffff);
            }
            else {
              uVar2 = (longlong)uVar2 / (longlong)local_60;
            }
            local_50 = uVar2 + uVar1 * local_68;
            local_78 = 0x3473c3d158c0d742;
            local_80 = 0x1938586ab1042d8b;
          }
        }
        if (uVar1 != 0x75e4366d5aea1c16) break;
        local_78 = 0xc9f9bf7b269d483;
        local_80 = 0xabfe958d15d05f55;
      }
      if (uVar1 != 0x7e4538fb4fc5acfe) break;
      local_50 = local_58 * 100;
      local_78 = 0x52008cc0d4da6844;
      local_80 = 0x7f4b177b3d1e928d;
    }
  } while (uVar1 != 0x2d4b9bbbe9c4fac9);
  DAT_1802a3ec8 = local_50;
  (*_DAT_18027a5b0)(param_1);
  return;
}



ulonglong FUN_1800f8130(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 4;
  local_88 = 0x20;
  local_50 = 0;
  local_4c = 4;
  local_80 = 1;
  local_78 = -8;
  local_58 = 0xf;
  local_48 = 0;
  local_70 = 0x28;
  local_39 = 0;
  local_68 = 0xfff;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800f84b9;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_1800fa020(&DAT_1802a407c,&DAT_18027aa5c,0x10,0x19,&DAT_1802a4098);
    local_d8 = &DAT_1802a407c;
    local_d0 = 0x18;
    FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
    local_c8 = &DAT_1802a409c;
    local_c0 = local_90;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_1800f8467:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f84a7;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800fa020(&DAT_1802a40a8,&DAT_18027aad4,0x13,0x22,&DAT_1802a40cc);
      local_b8 = &DAT_1802a40a8;
      local_b0 = 0x21;
      FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
      local_a8 = &DAT_1802a409c;
      local_a0 = local_90;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800f8467;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f84a7;
  }
  lVar10 = *local_60;
  uVar13 = local_80 + uVar9;
  lVar11 = lVar10;
  if (local_68 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_78) - lVar11)) {
LAB_1800f84b9:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_70;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800f84a7:
  return uVar12 & 0xffffffff;
}



void Unwind_1800f84e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800f8510(longlong param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x3bc807c3d664e843;
  local_50 = 0x58cb521e52682086;
  do {
    while( true ) {
      while( true ) {
        bVar1 = DAT_1802a3ed0;
        uVar3 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x37ff7d1875acfedf;
        if (0x58122ddd68bb7ff5 < (longlong)uVar3) break;
        if (uVar3 == 0x9680cde5a6ebfa8e) {
          *(undefined4 *)(param_1 + 0x448) = 0;
          local_48 = 0xa800f1f34cc5185c;
          local_50 = 0xf012dc2e247e67aa;
        }
        else {
          local_48 = local_48 ^ 0x37ff7d1875acfedf;
          if (uVar3 == 0xf241d7a29f8a64a8) {
            cVar2 = FUN_1801b3c30(param_1,0x44c);
            local_48 = 0x539b9c3648d01027;
            if (cVar2 != '\0') {
              local_48 = 0x9d097c0e8680955f;
            }
            local_50 = 0xb89b1eb206b6fd1;
          }
        }
      }
      if (uVar3 != 0x630355dd840cc8c5) break;
      LOCK();
      DAT_1802a3ed0 = 0;
      UNLOCK();
      local_48 = 0xd77c8ade124127ad;
      if ((bVar1 & 1) != 0) {
        local_48 = 0x7d2f70a1e5703cf3;
      }
      if (param_1 == 0) {
        local_48 = 0xd77c8ade124127ad;
      }
      local_50 = 0x8f6ea7037afa585b;
      DAT_1802a3ed8 = param_1;
    }
    local_48 = local_48 ^ 0x37ff7d1875acfedf;
  } while (uVar3 != 0x58122ddd68bb7ff6);
  (*_DAT_18027a5f0)(param_1);
  return;
}



ulonglong FUN_1800f86b0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 4;
  local_88 = 0x20;
  local_50 = 0;
  local_4c = 4;
  local_80 = 1;
  local_78 = -8;
  local_58 = 0xf;
  local_48 = 0;
  local_70 = 0x28;
  local_39 = 0;
  local_68 = 0xfff;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800f8a39;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_1800fa020(&DAT_1802a407c,&DAT_18027aa5c,0x10,0x19,&DAT_1802a4098);
    local_d8 = &DAT_1802a407c;
    local_d0 = 0x18;
    FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
    local_c8 = &DAT_1802a409c;
    local_c0 = local_90;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_1800f89e7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f8a27;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800fa020(&DAT_1802a40a8,&DAT_18027aad4,0x13,0x22,&DAT_1802a40cc);
      local_b8 = &DAT_1802a40a8;
      local_b0 = 0x21;
      FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
      local_a8 = &DAT_1802a409c;
      local_a0 = local_90;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800f89e7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f8a27;
  }
  lVar10 = *local_60;
  uVar13 = local_80 + uVar9;
  lVar11 = lVar10;
  if (local_68 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_78) - lVar11)) {
LAB_1800f8a39:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_70;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800f8a27:
  return uVar12 & 0xffffffff;
}



void Unwind_1800f8a60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800f8a90(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  ulonglong local_48;

  local_78 = 0xea09ba43a2a82d98;
  local_80 = 0xd1db19584bda3d4b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_78 ^ 0xbde137bbf84ce9e6;
            uVar2 = local_78 ^ local_80;
            local_80 = local_80 ^ 0xbde137bbf84ce9e6;
            local_78 = uVar3;
            if ((longlong)uVar2 < 0x485169e3967116eb) break;
            if ((longlong)uVar2 < 0x78cccf097bd9bfc5) {
              if (uVar2 == 0x485169e3967116eb) {
                puVar4 = &DAT_18027a680;
                if (local_60 < local_48) {
                  puVar4 = DAT_18027a680;
                }
                DAT_18027a690 = local_68;
                FUN_1802079d0(puVar4,local_58,local_68);
                *(undefined1 *)((longlong)puVar4 + local_68) = 0;
                local_78 = 0x7a11a51c63342313;
                local_80 = 0x744c6f17cded9151;
              }
              else if (uVar2 == 0x495afd8359d0b506) {
                local_78 = 0xd36a76f8c3f9c55b;
                if ((undefined8 **)param_2 == &DAT_18027a680) {
                  local_78 = 0xa5fb73fa16f9c8dc;
                }
                local_80 = 0xaba6b9f1b8207a9e;
              }
            }
            else if (uVar2 == 0x78cccf097bd9bfc5) {
              local_58 = param_2;
              if (local_60 < (ulonglong)param_2[3]) {
                local_58 = (undefined8 *)*param_2;
              }
              local_48 = DAT_18027a698;
              local_78 = 0xba8e58c67ecd0e48;
              if (DAT_18027a698 < local_68) {
                local_78 = 0xc19c118e6eb40837;
              }
              local_80 = 0xf2df3125e8bc18a3;
            }
            else if (uVar2 == 0x7aa3e36025f5af54) {
              local_68 = param_2[2];
              local_78 = 0xf847a1d14ad99b76;
              if (local_68 < 0x40) {
                local_78 = 0x9cda7523f784dc0f;
              }
              local_80 = 0xd58088a0ae546909;
            }
          }
          if (0x2dc72971e48df27e < (longlong)uVar2) break;
          if (uVar2 == 0xc8e9bcb887f8d04f) {
            cVar1 = FUN_1801b3c30(param_2,0x20);
            local_78 = 0x819c693d99ee43f2;
            if (cVar1 != '\0') {
              local_78 = 0xd6f8a32c58961ed9;
            }
            local_80 = 0xac5b404c7d63b18d;
          }
          else if (uVar2 == 0xe5dca0baed9b242) {
            local_78 = 0x13ab61cd4cc32f57;
            local_80 = 0x3e6c48bca84edd28;
            DAT_18027a6a0 = param_3;
          }
        }
        if (uVar2 != 0x334320ab86081094) break;
        FUN_18007f460(&DAT_18027a680,local_68);
        local_78 = 0xa0f7b735300ad3d9;
        local_80 = 0xaeaa7d3e9ed3619b;
      }
      if (uVar2 != 0x3bd2a31be97210d3) break;
      local_60 = 0xf;
      local_78 = 0x7c8b862d9ff455b4;
      if (param_2 == (undefined8 *)0x0) {
        local_78 = 0x99a513e4fc817784;
      }
      local_80 = 0xb4623a95180c85fb;
    }
  } while (uVar2 != 0x2dc72971e48df27f);
  (*DAT_18027a630)(param_1,param_2,param_3);
  return;
}



ulonglong FUN_1800f8eb0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 4;
  local_88 = 0x20;
  local_50 = 0;
  local_4c = 4;
  local_80 = 1;
  local_78 = -8;
  local_58 = 0xf;
  local_48 = 0;
  local_70 = 0x28;
  local_39 = 0;
  local_68 = 0xfff;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800f9239;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_1800fa020(&DAT_1802a407c,&DAT_18027aa5c,0x10,0x19,&DAT_1802a4098);
    local_d8 = &DAT_1802a407c;
    local_d0 = 0x18;
    FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
    local_c8 = &DAT_1802a409c;
    local_c0 = local_90;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_1800f91e7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f9227;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800fa020(&DAT_1802a40a8,&DAT_18027aad4,0x13,0x22,&DAT_1802a40cc);
      local_b8 = &DAT_1802a40a8;
      local_b0 = 0x21;
      FUN_1800fa020(&DAT_1802a409c,&DAT_18027aaa1,0x18,5,&DAT_1802a40a4);
      local_a8 = &DAT_1802a409c;
      local_a0 = local_90;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800f91e7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800f9227;
  }
  lVar10 = *local_60;
  uVar13 = local_80 + uVar9;
  lVar11 = lVar10;
  if (local_68 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_78) - lVar11)) {
LAB_1800f9239:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_70;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800f9227:
  return uVar12 & 0xffffffff;
}



void Unwind_1800f9260(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



int FUN_1800f9290(undefined8 param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_78;
  ulonglong local_70;
  int local_64;
  longlong *local_58;
  longlong local_50;

  local_70 = 0x64e37f392f3e105a;
  local_78 = 0x49294ad3ffd49e4a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_70 ^ 0xfd8302631135c47f;
            uVar2 = local_70 ^ local_78;
            local_78 = local_78 ^ 0xfd8302631135c47f;
            local_70 = uVar4;
            if (0x411d3552de8075a0 < (longlong)uVar2) break;
            if ((longlong)uVar2 < 0x2cd29332188dac90) {
              if (uVar2 == 0xbd5c768475df66ce) {
                local_70 = 0xea78492abf5dfdee;
                if ((char)local_58[1] == '\x04') {
                  local_70 = 0xd70bb4e2a21ea073;
                }
                local_78 = 0x9ed0248b9bdf5427;
              }
              else if (uVar2 == 0xce85f78310bf8c31) {
                cVar1 = FUN_1801b3c30(local_58,9);
                local_70 = 0x6bc7eeeb5a3fbcd5;
                if (cVar1 != '\0') {
                  local_70 = 0xa233f5ce0b6273d2;
                }
                local_78 = 0x1f6f834a7ebd151c;
              }
            }
            else if (uVar2 == 0x2cd29332188dac90) {
              lVar3 = FUN_1801b2b70();
              FUN_1800fa020(&DAT_1802a40d0,&DAT_18027ba01,0x12,0x11,&DAT_1802a40e4);
              local_58 = (longlong *)(*(code *)(lVar3 + 0xc9e3d0))(param_2 + 8,&DAT_1802a40d0);
              local_70 = 0xb459fa443651abdf;
              if (local_58 == (longlong *)0x0) {
                local_70 = 0xe746066026c8e27;
              }
              local_78 = 0x7adc0dc726ee27ee;
            }
            else if (uVar2 == 0x2dca35ead0ea8e10) {
              local_64 = (*DAT_18027a670)(param_1,param_2);
              local_70 = 0xe6fc083fcd48d04a;
              if (-1 < local_64) {
                local_70 = 0xeff18a451d45f520;
              }
              if (param_2 == 0) {
                local_70 = 0xe6fc083fcd48d04a;
              }
              local_78 = 0x9254659ee9ca7983;
            }
          }
          if (0x609618cdcd582d35 < (longlong)uVar2) break;
          if (uVar2 == 0x411d3552de8075a1) {
            FUN_1800f96e0(&DAT_18027a680,local_50);
            DAT_18027a6a0 = local_64;
            local_70 = 0x93e1f6588ec95fa7;
            local_78 = 0xe7499bf9aa4bf66e;
          }
          else if (uVar2 == 0x49db906939c1f454) {
            local_50 = *local_58;
            local_70 = 0x38dc59d98f6a968b;
            if (local_50 == 0) {
              local_70 = 0x2ce22cb566b01274;
            }
            local_78 = 0x584a41144232bbbd;
          }
        }
        if (uVar2 != 0x609618cdcd582d36) break;
        cVar1 = FUN_1801b3c30(local_50,1);
        local_70 = 0xa16e2ec026e881b7;
        if (cVar1 != '\0') {
          local_70 = 0x94db7633dcea5ddf;
        }
        local_78 = 0xd5c64361026a287e;
      }
      if (uVar2 != 0x7da5efdbf48f8ca3) break;
      cVar1 = FUN_1801b3c30(param_2,0x18);
      local_70 = 0xc314bba6b4149fb3;
      if (cVar1 != '\0') {
        local_70 = 0x9b6e4535881b9aea;
      }
      local_78 = 0xb7bcd6079096367a;
    }
  } while (uVar2 != 0x74a86da12482a9c9);
  return local_64;
}



undefined8 * FUN_1800f96e0(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong local_68;
  ulonglong local_60;
  size_t local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_60 = 0x1ddd610b3d384790;
  local_68 = 0x35cb2eb3abfb6123;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x2458bb2b02d36f17;
        if (0x28164fb896c326b2 < (longlong)uVar1) break;
        if (uVar1 == 0x91c1bd7776897a84) {
          puVar2 = param_1;
          if (0xf < local_48) {
            puVar2 = (undefined8 *)*param_1;
          }
          param_1[2] = local_58;
          FUN_1802079d0(puVar2,param_2,local_58);
          *(undefined1 *)((longlong)puVar2 + local_58) = 0;
          local_60 = 0x986953c7845d8c56;
          local_68 = 0xc8357a0a6d0b4abb;
          local_50 = param_1;
        }
        else {
          local_60 = local_60 ^ 0x2458bb2b02d36f17;
          if (uVar1 == 0xcb356a2a6bb6dfd8) {
            local_50 = (undefined8 *)FUN_18007f460(param_1,local_58);
            local_60 = 0xcb0626d2c7d4b441;
            local_68 = 0x9b5a0f1f2e8272ac;
          }
        }
      }
      if (uVar1 != 0x28164fb896c326b3) break;
      local_58 = strlen(param_2);
      local_48 = param_1[3];
      local_60 = 0x6bec78c03896eedd;
      if (local_48 < local_58) {
        local_60 = 0x3118af9d25a94b81;
      }
      local_68 = 0xfa2dc5b74e1f9459;
    }
    local_60 = local_60 ^ 0x2458bb2b02d36f17;
  } while (uVar1 != 0x505c29cde956c6ed);
  return local_50;
}



undefined8 FUN_1800f98b0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x48a5f8631607b1dd;
  local_50 = 0xce9539f74f6789eb;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x3afc72cde8c5c2ea;
        if (uVar1 != 0x8630c19459603836) break;
        FUN_1800f42d0(param_1);
        local_48 = 0x65678d6d012559ac;
        if ((param_2 & 1) == 0) {
          local_48 = 0x9e3c63cc8bc0639b;
        }
        local_50 = 0x5b56ed9211908c1c;
      }
      if (uVar1 != 0x3e3160ff10b5d5b0) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0xed66e78ec2ac7c95;
      local_50 = 0x280c69d058fc9312;
    }
    local_48 = local_48 ^ 0x3afc72cde8c5c2ea;
  } while (uVar1 != 0xc56a8e5e9a50ef87);
  return param_1;
}



undefined8 FUN_1800f9a00(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x61bfa6c24da5c3bc;
  local_50 = 0xe350b559352f1951;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xdc42ba06927cf530;
        if (uVar1 != 0x82ef139b788adaed) break;
        FUN_1800f4440(param_1);
        local_48 = 0x77ac2129710c2259;
        if ((param_2 & 1) == 0) {
          local_48 = 0xbc9d09bca2d866e6;
        }
        local_50 = 0xb38ad77a862b9826;
      }
      if (uVar1 != 0xc426f653f727ba7f) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0xccf450d76acae400;
      local_50 = 0xc3e38e114e391ac0;
    }
    local_48 = local_48 ^ 0xdc42ba06927cf530;
  } while (uVar1 != 0xf17dec624f3fec0);
  return param_1;
}



undefined8 FUN_1800f9b50(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x4896a1081f7caf61;
  local_50 = 0x7e35b34d819cdbf8;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x887caae6a127255b;
        if (uVar1 != 0x36a312459ee07499) break;
        FUN_1800f45f0(param_1);
        local_48 = 0xa1ec9d952b1681a3;
        if ((param_2 & 1) == 0) {
          local_48 = 0x745a6afd4f63eb28;
        }
        local_50 = 0xfe55e5cf587ece63;
      }
      if (uVar1 != 0x5fb9785a73684fc0) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0xe6838135387b92fd;
      local_50 = 0x6c8c0e072f66b7b6;
    }
    local_48 = local_48 ^ 0x887caae6a127255b;
  } while (uVar1 != 0x8a0f8f32171d254b);
  return param_1;
}



undefined8 FUN_1800f9ca0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xdc116535418bc8f6;
  local_50 = 0x2b129cc2871f5d3a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xe6179e5c332c99d0;
        if (uVar1 != 0xf703f9f7c69495cc) break;
        FUN_1800f4760(param_1);
        local_48 = 0xcc356a57f06874bf;
        if ((param_2 & 1) == 0) {
          local_48 = 0xac48115d602f1e36;
        }
        local_50 = 0x83bd97a6d3c0e870;
      }
      if (uVar1 != 0x4f88fdf123a89ccf) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0xd762af2b550f6cd5;
      local_50 = 0xf89729d0e6e09a93;
    }
    local_48 = local_48 ^ 0xe6179e5c332c99d0;
  } while (uVar1 != 0x2ff586fbb3eff646);
  return param_1;
}



undefined8 FUN_1800f9df0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x29fe58997299eba3;
  local_50 = 0xbc573c46d3633c27;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x1feeea19d17f211b;
        if (uVar1 != 0x95a964dfa1fad784) break;
        FUN_1800f48d0(param_1);
        local_48 = 0xcd85c299ff758d6c;
        if ((param_2 & 1) == 0) {
          local_48 = 0xdf22dd1b1a22c3f1;
        }
        local_50 = 0xb6bdc7e7087cd0e9;
      }
      if (uVar1 != 0x7b38057ef7095d85) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0x335d3646d37cf3;
      local_50 = 0x69ac47ca548d6feb;
    }
    local_48 = local_48 ^ 0x1feeea19d17f211b;
  } while (uVar1 != 0x699f1afc125e1318);
  return param_1;
}



void FUN_1800f9f40(void)

{
  atexit((_func_5014 *)&LAB_1800f42b0);
  atexit((_func_5014 *)&LAB_1800f42c0);
  atexit((_func_5014 *)&LAB_1800f4430);
  atexit((_func_5014 *)&LAB_1800f45a0);
  atexit((_func_5014 *)&LAB_1800f45b0);
  atexit((_func_5014 *)&LAB_1800f45c0);
  atexit((_func_5014 *)&LAB_1800f45d0);
  atexit((_func_5014 *)&LAB_1800f45e0);
  atexit((_func_5014 *)&LAB_1800f4750);
  atexit((_func_5014 *)&LAB_1800f48c0);
  atexit((_func_5014 *)&LAB_1800f4a30);
  atexit(FUN_1800f4a40);
  FUN_1800fa020(&DAT_1802a3ee0,&DAT_18027a6c9,0x1d,6,&DAT_1802a3ee8);
  FUN_1800f0070(&DAT_1802a3ea4,&DAT_1802a3ee0,FUN_1800f4d70);
  return;
}



void FUN_1800fa020(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_6d;
  char local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0x542ef510cc3dcc28;
  local_68 = 0x5a13eb35984fbf5e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x52ec01dcdee6e1d2;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x52ec01dcdee6e1d2;
          local_60 = uVar2;
          if (-0x21bec50a31740e38 < (longlong)uVar1) break;
          if (uVar1 == 0x95eceacc5d7496d6) {
            *param_5 = 1;
            local_60 = 0x2791892a8ffe1710;
            local_68 = 0xf9d0b3df4175e6d9;
          }
          else if (uVar1 == 0xab219b8d31e3f33f) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0x1b7a6e24819181a2;
            if (local_54 == param_4) {
              local_60 = 0xc2543b9a0f0951d8;
            }
            local_68 = 0x57b8d156527dc70e;
          }
          else if (uVar1 == 0xb9e039484db0ae4f) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x31af37470decd902;
            local_68 = 0x9a8eacca3c0f2a3d;
          }
        }
        if ((longlong)uVar1 < 0x1375cd1777839e4b) break;
        if (uVar1 == 0x1375cd1777839e4b) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xcf000e9a81f41b43;
          local_68 = 0x64219517b017e87c;
        }
        else if (uVar1 == 0x4cc2bf72d3ec46ac) {
          local_69 = local_6a;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x62565bfbdc459407;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xc8c3afa4e676a403;
          }
          local_68 = 0xdbb662b391f53a48;
        }
      }
      if (uVar1 != 0xe3d1e2554727376) break;
      local_60 = 0x4a1d754655d4c658;
      if (*param_5 == 1) {
        local_60 = 0xd89ef0c148b3713d;
      }
      local_68 = 0x6dfca34863880f4;
      local_54 = 0;
      local_6a = 0;
      local_48 = (int)param_3 + param_2;
    }
  } while (uVar1 != 0xde413af5ce8bf1c9);
  return;
}



void FUN_1800fa2e0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800fa420(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800fa450(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58 [7];
  undefined ***local_20;

  lVar4 = FUN_1801b2b70();
  local_70 = 0;
  puVar5 = (undefined4 *)FUN_1801d61c8(0x20);
  local_68 = 0x1b;
  local_60 = 0x1f;
  local_78 = puVar5;
  FUN_1800fbf1c(&DAT_1802a4110,&DAT_18027bb0a,0x1d,0x1c,&DAT_1802a412c);
  uVar6 = uRam00000001802a4123;
  *(ulonglong *)((longlong)puVar5 + 0xb) = CONCAT35(uRam00000001802a4120,CONCAT41(uRam00000001802a411c,DAT_1802a411b));
  *(undefined8 *)((longlong)puVar5 + 0x13) = uVar6;
  uVar3 = uRam00000001802a411c;
  uVar2 = uRam00000001802a4118;
  uVar1 = uRam00000001802a4114;
  *puVar5 = _DAT_1802a4110;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((longlong)puVar5 + 0x1b) = 0;
  FUN_1800fa6c0(&PTR_PTR_18027ba28,&local_78,lVar4 + 0x6ebf00,FUN_1800faaa0);
  uVar6 = FUN_1800ba260();
  local_58[0] = &PTR_LAB_180216ac0;
  local_20 = local_58;
  FUN_1800faca0(uVar6,&DAT_1802a40ec,local_20,0);
  return 1;
}



undefined1 FUN_1800fa590(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x380e23e90bbb6f2;
  local_68 = 0x2ead77f6fbcb2582;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xe31ebeaa1e8139ff;
        if (uVar1 != 0x2d2d95c86b709370) break;
        local_60 = 0x36bd17ce29d7254a;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xc4e43d0273565dcb;
        }
        local_68 = 0x9d08782a7a12413d;
        local_69 = 1;
      }
      if (uVar1 != 0x59ec452809441cf6) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x9fff6f9d809aa1d0;
      local_68 = 0x344a0079d35fc5a7;
    }
    local_60 = local_60 ^ 0xe31ebeaa1e8139ff;
  } while (uVar1 != 0xabb56fe453c56477);
  return local_69;
}



ulonglong FUN_1800fa6c0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_58 = 0xf;
  local_90 = -8;
  local_88 = 0x20;
  local_80 = 4;
  local_78 = 0x28;
  local_39 = 0;
  local_70 = 1;
  local_50 = 4;
  local_48 = 0;
  local_4c = 0;
  local_68 = 0xfff;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800faa49;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_1800fbf1c(&DAT_1802a4130,&DAT_18027bb5c,0x10,0x19,&DAT_1802a414c);
    local_d8 = &DAT_1802a4130;
    local_d0 = 0x18;
    FUN_1800fbf1c(&DAT_1802a4150,&DAT_18027bba0,0x16,5,&DAT_1802a4158);
    local_c8 = &DAT_1802a4150;
    local_c0 = local_80;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_1800fa9f7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800faa37;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800fbf1c(&DAT_1802a415c,&DAT_18027bbd5,0x1c,0x22,&DAT_1802a4180);
      local_b8 = &DAT_1802a415c;
      local_b0 = 0x21;
      FUN_1800fbf1c(&DAT_1802a4150,&DAT_18027bba0,0x16,5,&DAT_1802a4158);
      local_a8 = &DAT_1802a4150;
      local_a0 = local_80;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800fa9f7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800faa37;
  }
  lVar10 = *local_60;
  uVar13 = local_70 + uVar9;
  lVar11 = lVar10;
  if (local_68 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_90) - lVar11)) {
LAB_1800faa49:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_78;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800faa37:
  return uVar12 & 0xffffffff;
}



void Unwind_1800faa70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800faaa0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xca07abced0e544a7;
  local_50 = 0xe5f521da52531324;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_48 ^ local_50;
          local_50 = local_50 ^ 0x632c4d683ff99ee8;
          if (0x2ff28a1482b65782 < (longlong)uVar3) break;
          if (uVar3 == 0xb479861c8e02d792) {
            local_48 = 0xcc3b808a684ba483;
            local_50 = 0xaae9b44d61ccce48;
            DAT_1802a40f0 = param_1;
          }
          else {
            local_48 = local_48 ^ 0x632c4d683ff99ee8;
            if (uVar3 == 0x2b35f2ae4ebe99b8) {
              cVar2 = FUN_1801b3c30(param_1,8);
              local_48 = 0x98ed1b1a7a858862;
              if (cVar2 != '\0') {
                local_48 = 0xca89dd00fcf97d8d;
              }
              local_50 = 0xfe3f2fdd7302e2a9;
            }
          }
        }
        if (uVar3 != 0x2ff28a1482b65783) break;
        local_48 = 0x13d5e3aa358a6a59;
        if (DAT_1802a40f0 != (longlong *)0x0) {
          local_48 = 0x5e3225c372b3992a;
        }
        if (param_1 == (longlong *)0x0) {
          local_48 = 0x5e3225c372b3992a;
        }
        local_50 = 0x38e011047b34f3e1;
      }
      if (uVar3 != 0x34b6f2dd8ffb9f24) break;
      lVar1 = *param_1;
      lVar4 = FUN_1801b2b70();
      local_48 = 0x968d4a58bbbe9b20;
      if (lVar1 == lVar4 + 0x1731da8) {
        local_48 = 0x4426f8833c3b2679;
      }
      local_50 = 0xf05f7e9fb239f1eb;
    }
    local_48 = local_48 ^ 0x632c4d683ff99ee8;
  } while (uVar3 != 0x66d234c709876acb);
  (*_DAT_18027ba58)(param_1);
  return;
}



void FUN_1800faca0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  int local_54;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_54 = 1;
  local_60 = param_3;
  plVar5 = (longlong *)FUN_1801d61c8(0x50);
  plVar1 = local_60;
  *(int *)(plVar5 + 1) = local_54;
  *(int *)((longlong)plVar5 + 0xc) = local_54;
  *plVar5 = (longlong)&PTR_FUN_180216aa0;
  plVar7 = plVar5 + 2;
  plVar5[9] = 0;
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == local_60) {
      lVar6 = (**(code **)(*plVar4 + 8))(plVar4,plVar7);
      plVar5[9] = lVar6;
      plVar4 = (longlong *)plVar1[7];
      if (plVar4 == (longlong *)0x0) goto LAB_1800fad66;
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar1);
    }
    else {
      plVar5[9] = (longlong)plVar4;
    }
    plVar1[7] = 0;
  }
LAB_1800fad66:
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  local_80 = FUN_1800fb430;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = FUN_1800fb430;
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = plVar7;
  local_b0 = plVar5;
  local_a0 = param_2;
  local_98 = param_4;
  local_78 = plVar7;
  local_70 = plVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a40fc)
     && (FUN_1801d62d8(&DAT_1802a40fc), DAT_1802a40fc == -1)) {
    DAT_1802a40f8 = DAT_1802a3dec;
    DAT_1802a3dec = local_54 + DAT_1802a3dec;
    _Init_thread_footer(&DAT_1802a40fc);
  }
  FUN_1800baf30(param_1,DAT_1802a40f8,&local_c8);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == local_54) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_54) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)local_60[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != local_60);
  }
  return;
}



void Unwind_1800faef0(undefined8 param_1,longlong param_2)

{
  FUN_1800bb120(param_2 + 0x48);
  FUN_1800faf90(param_2 + 0x70);
  return;
}



void Unwind_1800faf40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = (longlong *)(*(longlong **)(param_2 + 0x88))[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x88));
  }
  return;
}



void FUN_1800faf90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  longlong *local_48;

  local_58 = 0x4b3df236fdfc33ff;
  local_60 = 0xe07d177237f589c4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0xb1d97cbe18e2d92b;
          if ((longlong)uVar5 < -0x19d0d0e263ecb078) break;
          if (uVar5 == 0xe62f2f1d9c134f88) {
            (**(code **)(*local_48 + 8))();
            local_58 = 0x2c9a16e8e5857c8;
            local_60 = 0x95eca91b3015ebb0;
          }
          else {
            local_58 = local_58 ^ 0xb1d97cbe18e2d92b;
            if (uVar5 == 0x38fc3cce26362308) {
              LOCK();
              plVar2 = local_48 + 1;
              lVar4 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              local_58 = 0x1353a349a9c3588f;
              if ((int)lVar4 == local_4c) {
                local_58 = 0x123458e101018521;
              }
              local_60 = 0x8476ab3c178ee4f7;
            }
          }
        }
        if (uVar5 != 0x9642f3dd168f61d6) break;
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = 0x1f8a3a47155229df;
        if (iVar3 == local_4c) {
          local_58 = 0x6e801d2f370cda2f;
        }
        local_60 = 0x88af3232ab1f95a7;
      }
      if (uVar5 != 0xab40e544ca09ba3b) break;
      local_4c = 1;
      local_48 = *(longlong **)(param_1 + 8);
      local_58 = 0x6487806810df4acb;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0xcb5eb4d388a4d5bb;
      }
      local_60 = 0x5c7bbca636e969c3;
    }
    local_58 = local_58 ^ 0xb1d97cbe18e2d92b;
  } while (uVar5 != 0x97250875be4dbc78);
  return;
}



void FUN_1800fb180(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_58 = 0x412f81494318d8ad;
  local_60 = 0xab8491bb8883862e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x4e40a6b5dd6d7a;
        if (uVar1 != 0xeaab10f2cb9b5e83) break;
        local_50 = (undefined8 *)(param_1 + 0x48);
        local_48 = *(longlong **)(param_1 + 0x48);
        local_58 = 0x58c6f45ac312ec4e;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0x72a81ed5fe81dd93;
        }
        local_60 = 0x1d4858c57bd79d59;
      }
      if (uVar1 != 0x458eac9fb8c57117) break;
      (**(code **)(*local_48 + 0x20))
                (local_48,CONCAT71((int7)((local_58 ^ 0x4e40a6b5dd6d7a) >> 8),local_48 != (longlong *)(param_1 + 0x10)))
      ;
      *local_50 = 0;
      local_58 = 0xe600219a630d3503;
      local_60 = 0x89e0678ae65b75c9;
    }
    local_58 = local_58 ^ 0x4e40a6b5dd6d7a;
  } while (uVar1 != 0x6fe04610855640ca);
  return;
}



void FUN_1800fb2c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



undefined8 FUN_1800fb2e0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x140dcddb8480c026;
  local_50 = 0x921393e4dcf82eed;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x27e27779be747f5a;
        if (uVar1 != 0x861e5e3f5878eecb) break;
        local_48 = 0x44b1be05ec4d7471;
        if ((param_2 & 1) == 0) {
          local_48 = 0xfb206eb0b3627ab9;
        }
        local_50 = 0xfdfa477fcfdc188a;
      }
      if (uVar1 != 0xb94bf97a23916cfb) break;
      thunk_FUN_1801f42e0(param_1,0x50);
      local_48 = 0xb5af392caee60a41;
      local_50 = 0xb37510e3d2586872;
    }
    local_48 = local_48 ^ 0x27e27779be747f5a;
  } while (uVar1 != 0x6da29cf7cbe6233);
  return param_1;
}



void FUN_1800fb430(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;

  lVar4 = *param_1;
  if (param_1[1] == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
  }
  if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
          return;
        }
      }
    }
    return;
  }
  FUN_1801d7504();
}



void Unwind_1800fb4e0(undefined8 param_1,longlong param_2)

{
  FUN_1800faf90(param_2 + 0x20);
  return;
}



void FUN_1800fb520(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  LONG LVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  ulonglong local_c8;
  uint local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  HWND local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  tagRECT local_78;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_f8;
  local_c8 = 0xb07ca03e7f249513;
  local_d0 = 0x8d2a10dd96bf0346;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar1 = local_b4;
              uVar9 = local_c8 ^ 0x9dc4a42a3330f509;
              uVar6 = local_c8 ^ local_d0;
              local_d0 = local_d0 ^ 0x9dc4a42a3330f509;
              local_c8 = uVar9;
              if (0x1b61a1e8794f8853 < (longlong)uVar6) break;
              if ((longlong)uVar6 < -0x415d86b94f879192) {
                if ((longlong)uVar6 < -0x5c3b6d78b412d478) {
                  if (uVar6 == 0x83109701dfe50e80) {
                    LVar2 = local_78.bottom;
                    iVar4 = GetSystemMetrics(local_c0);
                    local_bc = (uint)(LVar2 < iVar4);
                    local_c8 = 0xbb0baad7cdc6633d;
                    local_d0 = 0x22945a136ab67bf7;
                  }
                  else if (uVar6 == 0x999ff0c4a77018ca) {
                    local_b4 = local_bc;
                    local_c8 = 0x9d995d13dc8c59c6;
                    local_d0 = 0x78ff6cf48dd4e3a8;
                  }
                }
                else if (uVar6 == 0xa3c492874bed2b88) {
                  DAT_1802a40f0 = local_b0;
                  local_c8 = 0x1cd6d9335f63eb69;
                  local_d0 = 0xc8f950522aed28f4;
                  local_a0 = local_b0;
                }
                else if (uVar6 == 0xa4af4c2e737ec127) {
                  *param_2 = 1;
                  local_88 = DAT_1802a40f0;
                  local_c8 = 0xc8b785d8b6ab35a6;
                  if (DAT_1802a40f0 == (longlong *)0x0) {
                    local_c8 = 0xa70468f0d1e507a2;
                  }
                  local_d0 = 0xd3d62430cfe4bdf2;
                }
              }
              else if ((longlong)uVar6 < -0x1a99ce18aea74592) {
                if (uVar6 == 0xbea27946b0786e6e) {
                  local_78.left = 0;
                  local_78.top = 0;
                  local_78.right = 0;
                  local_78.bottom = 0;
                  BVar5 = GetClientRect(local_98,&local_78);
                  local_c8 = 0xf92280a4a4092ad3;
                  if (BVar5 == local_b8) {
                    local_c8 = 0xe34bd906229ddbf;
                  }
                  local_d0 = 0x97ab4d54c559c575;
                  local_bc = local_c0;
                }
                else if (uVar6 == 0xd42f8961758ec39d) {
                  local_80 = local_a0;
                  local_98 = (HWND)FUN_1801b7720();
                  local_c8 = 0x3fa094e4743c6156;
                  if (local_98 == (HWND)0x0) {
                    local_c8 = 0x6464dc45951cb556;
                  }
                  local_d0 = 0x8102eda2c4440f38;
                  local_b4 = local_c0;
                }
              }
              else if (uVar6 == 0xe56631e75158ba6e) {
                lVar7 = FUN_1801b2b70();
                (*(code *)(lVar7 + 0x6ed390))(local_80,uVar1);
                local_c8 = 0x9130f8929500db9d;
                local_d0 = 0xb622d9160acfbc65;
              }
              else if (uVar6 == 0xfd0f3e2e44ade342) {
                cVar3 = FUN_1801b3c30(local_b0,local_a8);
                local_c8 = 0x9fcabd3a47a9102f;
                if (cVar3 != '\0') {
                  local_c8 = 0xc5d68ce5592849e3;
                }
                local_d0 = 0xb8d89cbed86677d7;
              }
            }
            if ((longlong)uVar6 < 0x5a581422153b714f) break;
            if ((longlong)uVar6 < 0x74d24cc01e01ba50) {
              if (uVar6 == 0x5a581422153b714f) {
                lVar7 = FUN_1800c32a0();
                local_c8 = 0x6d134857cab801c0;
                if (*(char *)(lVar7 + 0x210) != '\0') {
                  local_c8 = 0x133d4e7891cee791;
                }
                local_d0 = 0x342f6ffc0e018069;
              }
              else if (uVar6 == 0x6e89cdf06150efa6) {
                LVar2 = local_78.right;
                iVar4 = GetSystemMetrics(local_b8);
                local_c8 = 0x1794d9d12393c0ac;
                if (LVar2 < iVar4) {
                  local_c8 = 0xd1bbe145b06d6e6;
                }
                local_d0 = 0x94844ed0fc76ce2c;
                local_bc = local_c0;
              }
            }
            else if (uVar6 == 0x74d24cc01e01ba50) {
              lVar7 = FUN_1801b2b70();
              local_90 = (longlong *)(lVar7 + 0x194bc68);
              cVar3 = FUN_1801b3c30(local_90,local_a8);
              local_c8 = 0xec6e969518a85b03;
              if (cVar3 != '\0') {
                local_c8 = 0xf8dd50f087f2a1be;
              }
              local_d0 = 0xcb7cb71187673cfb;
            }
            else if (uVar6 == 0x7d0e105b814e3e34) {
              lVar7 = *local_b0;
              lVar8 = FUN_1801b2b70();
              local_c8 = 0x7edbe9c1a92848dd;
              if (lVar7 == lVar8 + 0x1731da8) {
                local_c8 = 0xfa0d5ac27d0a04ad;
              }
              local_d0 = 0x59c9c84536e72f25;
            }
          }
          if ((longlong)uVar6 < 0x3d56b0e3e99b9655) break;
          if (uVar6 == 0x3d56b0e3e99b9655) {
            local_c0 = 1;
            local_a8 = 8;
            local_b8 = 0;
            local_c8 = 0xd2e9c7b476f1264e;
            if (*(int *)(param_2 + 4) == 0x7a) {
              local_c8 = 0xafa3f212fc0530f9;
            }
            if (param_2[8] == '\0') {
              local_c8 = 0xd2e9c7b476f1264e;
            }
            local_d0 = 0xf5fbe630e93e41b6;
          }
          else if (uVar6 == 0x593c27abc4b981a9) {
            lVar7 = FUN_180100330();
            local_c8 = 0xe472bca3ea3abf53;
            if (*(char *)(lVar7 + 0x358) != '\0') {
              local_c8 = 0x67cfd109068b198c;
            }
            local_d0 = 0x40ddf08d99447e74;
          }
        }
        if (uVar6 != 0x1b61a1e8794f8854) break;
        local_a0 = local_88;
        local_c8 = 0xcd22476a8430824b;
        local_d0 = 0x190dce0bf1be41d6;
      }
      if (uVar6 != 0x33a1e7e100959d45) break;
      local_b0 = (longlong *)*local_90;
      local_c8 = 0xed16c741ad010124;
      if (local_b0 == (longlong *)0x0) {
        local_c8 = 0x370bd8eb7663859e;
      }
      local_d0 = 0x1019f96fe9ace266;
    }
  } while (uVar6 != 0x271221849fcf67f8);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_f8)) {
  }
  return;
}



void FUN_1800fbc50(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x1985e22da5042ba0;
  local_50 = 0x1c469f106183ae94;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xfee77c08f73249df;
        if (uVar1 != 0xc0da50587ea85a3c) break;
        thunk_FUN_1801f42e0(param_1,0x10);
        local_48 = 0xfbc4b44eec5efa58;
        local_50 = 0x1f04db6e94659fcf;
      }
      if (uVar1 != 0x5c37d3dc4878534) break;
      local_48 = 0xe166c806c37fa877;
      if (param_2 != '\0') {
        local_48 = 0xc57cf77ec5ec97dc;
      }
      local_50 = 0x5a6a726bb44cde0;
    }
    local_48 = local_48 ^ 0xfee77c08f73249df;
  } while (uVar1 != 0xe4c06f20783b6597);
  return;
}



undefined8 FUN_1800fbd70(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x3c10a37fda04b9f5;
  local_50 = 0x346a66b238444ebd;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x1e9dd98cf538157e;
        if (uVar1 != 0xd6cd400261d2cf25) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0xfcb0a206e2612396;
        local_50 = 0x40b4cc0e03d456d2;
      }
      if (uVar1 != 0x87ac5cde240f748) break;
      FUN_1800fa2e0(param_1);
      local_48 = 0x94b7e1f441c6e866;
      if ((param_2 & 1) == 0) {
        local_48 = 0xfe7ecffec1a15207;
      }
      local_50 = 0x427aa1f620142743;
    }
    local_48 = local_48 ^ 0x1e9dd98cf538157e;
  } while (uVar1 != 0xbc046e08e1b57544);
  return param_1;
}



void FUN_1800fbec0(void)

{
  atexit((_func_5014 *)&LAB_1800fa440);
  FUN_1800fbf1c(&DAT_1802a4100,&DAT_18027bad7,0x15,9,&DAT_1802a410c);
  FUN_1800f0070(&DAT_1802a40e8,&DAT_1802a4100,FUN_1800fa450);
  return;
}



void FUN_1800fbf1c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_6d;
  char local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0x1052187cc8b68e6e;
  local_68 = 0xb606818a7d029841;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xf31e51d0af15e52c;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xf31e51d0af15e52c;
          local_60 = uVar2;
          if (-0x2de6086bc7769452 < (longlong)uVar1) break;
          if (uVar1 == 0xa65499f6b5b4162f) {
            local_60 = 0x4ad686955093f241;
            if (*param_5 == 1) {
              local_60 = 0x75fb5e6af38768c4;
            }
            local_68 = 0x8c4ee2647f5c1a78;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
          else if (uVar1 == 0xc69864f12fcfe839) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x65c87e484e5c6c41;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x48bb271419206a62;
            }
            local_68 = 0xb4a5098b76800dd4;
          }
          else if (uVar1 == 0xd16d77c338dc6195) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x701b290f68d4e6c1;
            local_68 = 0xa202de9b505d8d6e;
          }
        }
        if (-0x64a43f173248d45 < (longlong)uVar1) break;
        if (uVar1 == 0xd219f79438896baf) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0x2ddec7026ad83c58;
          if (local_54 == param_4) {
            local_60 = 0x19f6c6182741330d;
          }
          local_68 = 0xeb46a3f34517d461;
        }
        else if (uVar1 == 0xf2b065eb6256e76c) {
          *param_5 = 1;
          local_60 = 0x49b938724c4676d1;
          local_68 = 0xb00c847cc09d046d;
        }
      }
      if (uVar1 != 0xfc1e2e9f6fa067b6) break;
      local_6a = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0xf50afb01b5cd8644;
      local_68 = 0x27130c958d44edeb;
    }
  } while (uVar1 != 0xf9b5bc0e8cdb72bc);
  return;
}



void FUN_1800fc1f0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_180181700();
  FUN_180182570(uVar3,param_1);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800fc330(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800fc360(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_28 = 0x2c;
  local_20 = 0x2f;
  local_38 = puVar6;
  FUN_1800fdc84(&DAT_1802a41b0,&DAT_18027cbf7,0x1b,0x2d,&DAT_1802a41e0);
  uVar1 = uRam00000001802a41d4;
  *(ulonglong *)(puVar6 + 7) = CONCAT44(uRam00000001802a41d0,_DAT_1802a41cc);
  *(undefined8 *)(puVar6 + 9) = uVar1;
  uVar1 = CONCAT44(_DAT_1802a41cc,uRam00000001802a41c8);
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a41c0;
  *(undefined8 *)(puVar6 + 6) = uVar1;
  uVar4 = uRam00000001802a41bc;
  uVar3 = uRam00000001802a41b8;
  uVar2 = uRam00000001802a41b4;
  *puVar6 = _DAT_1802a41b0;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  FUN_1800f6de0(&PTR_PTR_18027cae8,&local_38,lVar5 + 0x1403d0,FUN_1800fc760);
  lVar5 = FUN_1801b2b70();
  local_50 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_48 = 0x23;
  local_40 = 0x2f;
  local_58 = puVar6;
  FUN_1800fdc84(&DAT_1802a41e4,&DAT_18027cc52,0x13,0x24,&DAT_1802a4208);
  *(undefined4 *)((longlong)puVar6 + 0x1f) = DAT_1802a4203;
  uVar1 = CONCAT17((undefined1)DAT_1802a4203,uRam00000001802a41fc);
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a41f4;
  *(undefined8 *)(puVar6 + 6) = uVar1;
  uVar4 = uRam00000001802a41f0;
  uVar3 = uRam00000001802a41ec;
  uVar2 = uRam00000001802a41e8;
  *puVar6 = _DAT_1802a41e4;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x23) = 0;
  FUN_1800ef070(&PTR_PTR_18027cb28,&local_58,lVar5 + 0x5ac970,FUN_1800fcbb0);
  lVar5 = FUN_1801b2b70();
  local_70 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_68 = 0x20;
  local_60 = 0x2f;
  local_78 = puVar6;
  FUN_1800fdc84(&DAT_1802a420c,&DAT_18027cca7,0x16,0x21,&DAT_1802a4230);
  uVar1 = uRam00000001802a4224;
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a421c;
  *(undefined8 *)(puVar6 + 6) = uVar1;
  uVar4 = uRam00000001802a4218;
  uVar3 = uRam00000001802a4214;
  uVar2 = uRam00000001802a4210;
  *puVar6 = _DAT_1802a420c;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)(puVar6 + 8) = 0;
  FUN_1800fd210(&PTR_PTR_18027cb68,&local_78,lVar5 + 0x7373f0,FUN_1800fd5f0);
  return 1;
}



undefined4 FUN_1800fc620(void)

{
  return DAT_1802a419c;
}



undefined1 FUN_1800fc630(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x6f226c5870d9d603;
  local_68 = 0x9c2a60a15fc172bc;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x3133662a4467ea20;
        if (uVar1 != 0xf3080cf92f18a4bf) break;
        local_60 = 0xbe317a7f89289efc;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x6eba00a97a23726f;
        }
        local_68 = 0x14d0029f9f76a46;
        local_69 = 1;
      }
      if (uVar1 != 0x6ff7008083d41829) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xa94526a49bb4c20e;
      local_68 = 0x16395cf2eb6b36b4;
    }
    local_60 = local_60 ^ 0x3133662a4467ea20;
  } while (uVar1 != 0xbf7c7a5670dff4ba);
  return local_69;
}



void FUN_1800fc760(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;

  local_88 = 0x8d7915e2d4654422;
  local_90 = 0x3acff904c6c415b4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_88 ^ 0x552a54f5a9aaf835;
            uVar1 = local_88 ^ local_90;
            local_90 = local_90 ^ 0x552a54f5a9aaf835;
            local_88 = uVar3;
            if ((longlong)uVar1 < 0xaf436a64238dba6) break;
            if ((longlong)uVar1 < 0x5af66e1d509e6ee9) {
              if (uVar1 == 0xaf436a64238dba6) {
                local_88 = 0x8b275a2695119816;
                local_90 = 0xffb8037039e2d826;
              }
              else if (uVar1 == 0x36e197db4c257b8d) {
                local_88 = 0x70563129284ca045;
                if ((longlong)local_80 < 24000000) {
                  local_88 = 0xe4c33c19133a22e5;
                }
                local_90 = 0x2aa05f3478d2ceac;
              }
            }
            else if (uVar1 == 0x5af66e1d509e6ee9) {
              local_88 = 0x671f8780e3afc14b;
              if (local_80 == 24000000) {
                local_88 = 0xf755393ebd8e36d8;
              }
              local_90 = 0x6debb126a1971aed;
            }
            else if (uVar1 == 0x749f5956acf34030) {
              if ((local_68 | local_80) >> 0x20 == 0) {
                uVar1 = (local_68 & 0xffffffff) / (local_80 & 0xffffffff);
                uVar3 = (local_68 & 0xffffffff) % (local_80 & 0xffffffff);
              }
              else {
                uVar1 = (longlong)local_68 / (longlong)local_80;
                uVar3 = (longlong)local_68 % (longlong)local_80;
              }
              uVar3 = uVar3 * local_78;
              if ((uVar3 | local_80) >> 0x20 == 0) {
                uVar3 = (uVar3 & 0xffffffff) / (local_80 & 0xffffffff);
              }
              else {
                uVar3 = (longlong)uVar3 / (longlong)local_80;
              }
              local_60 = uVar3 + uVar1 * local_78;
              local_88 = 0x1249a3b0e209536b;
              local_90 = 0x86c1db048cb4a939;
            }
          }
          if ((longlong)uVar1 < -0x3604ecc8afdb3851) break;
          if (uVar1 == 0xc9fb13375024c7af) {
            local_60 = local_68 * 100;
            local_88 = 0xa1b8e12ff85f5982;
            local_90 = 0x3530999b96e2a3d0;
          }
          else if (uVar1 == 0xce63632d6be8ec49) {
            local_88 = 0x7a423b4990824c5f;
            if (local_80 == 10000000) {
              local_88 = 0xb94d1ed8829e5056;
            }
            local_90 = 0x70b60defd2ba97f9;
          }
        }
        if (uVar1 != 0x9abe88181c192c35) break;
        if ((local_68 | local_70) >> 0x20 == 0) {
          uVar1 = (local_68 & 0xffffffff) / (local_70 & 0xffffffff);
        }
        else {
          uVar1 = (longlong)local_68 / (longlong)local_70;
        }
        if ((local_68 | local_70) >> 0x20 == 0) {
          uVar3 = (local_68 & 0xffffffff) % (local_70 & 0xffffffff);
        }
        else {
          uVar3 = (longlong)local_68 % (longlong)local_70;
        }
        uVar3 = uVar3 * local_78;
        if ((uVar3 | local_70) >> 0x20 == 0) {
          uVar3 = (uVar3 & 0xffffffff) / (local_70 & 0xffffffff);
        }
        else {
          uVar3 = (longlong)uVar3 / (longlong)local_70;
        }
        local_60 = uVar3 + uVar1 * local_78;
        local_88 = 0xfa357215c14c9e61;
        local_90 = 0x6ebd0aa1aff16433;
      }
      if (uVar1 != 0xb7b6ece612a15196) break;
      local_70 = 24000000;
      local_78 = 1000000000;
      (*DAT_18027cb18)(param_1,param_2,param_3,param_4);
      uVar2 = FUN_180179060();
      FUN_1801799b0(uVar2);
      LOCK();
      DAT_1802a419c = DAT_1802a419c + 1;
      UNLOCK();
      local_80 = FUN_1801da1cc();
      local_68 = FUN_1801da1b0();
      local_88 = 0x2beeb83fca898b40;
      local_90 = 0x1d0f2fe486acf0cd;
    }
  } while (uVar1 != 0x948878b46ebdfa52);
  DAT_1802a4188 = local_60;
  DAT_1802a4190 = local_60;
  DAT_1802a4198 = 1;
  return;
}



void FUN_1800fcbb0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_48;

  local_88 = 0xbc477eacc156b912;
  local_90 = 0xda633a1c167d7473;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_88 ^ 0xe3855fe52de781c1;
            uVar1 = local_88 ^ local_90;
            local_90 = local_90 ^ 0xe3855fe52de781c1;
            local_88 = uVar2;
            if (-0x4fc3492f1b9f2cc < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x321b21e61c32c8bc) {
              if (uVar1 == 0x8400d73d0f8e3adf) {
                local_88 = 0x60784e757cb1adc1;
                if (local_80 == 24000000) {
                  local_88 = 0x86dcce83818c0c7b;
                }
                local_90 = 0x6aaa9e5bf644c2cc;
              }
              else if (uVar1 == 0x89deb0fb1bcc6f16) {
                local_88 = 0x81c7681db837ffe4;
                if (local_48 < 500000000) {
                  local_88 = 0x2f15786bb8213f79;
                }
                local_90 = 0x4f16b91c4763a135;
              }
              else if (uVar1 == 0x8c1ab82b149e97fb) {
                local_88 = 0xa7ed17a7a2aa4fde;
                if (local_80 == 10000000) {
                  local_88 = 0x60db1990cb921797;
                }
                local_90 = 0xad3fc789285f20d3;
              }
            }
            else if ((longlong)uVar1 < -0x218bced7cdf5268e) {
              if (uVar1 == 0xcde4de19e3cd3744) {
                local_60 = local_68 * 100;
                local_88 = 0x1ed7719e3c90c684;
                local_90 = 0x48b6082bb4a5620c;
              }
              else if (uVar1 == 0xced1d101ff545ed1) {
                local_88 = 0xd0d959f0b5d7e11a;
                if (local_58 - DAT_1802a4190 < 750000000) {
                  local_88 = 0xf56884fb9f5b4fd7;
                }
                local_90 = 0x956b458c6019d19b;
              }
            }
            else if (uVar1 == 0xde743128320ad972) {
              local_88 = 0x6d0e8d712b3dc710;
              if ((longlong)local_80 < 24000000) {
                local_88 = 0x6514e267302d6a34;
              }
              local_90 = 0xe90e5a4c24b3fdcf;
            }
            else if (uVar1 == 0xec7650d877c8ceb7) {
              if ((local_68 | local_70) >> 0x20 == 0) {
                uVar1 = (local_68 & 0xffffffff) / (local_70 & 0xffffffff);
              }
              else {
                uVar1 = (longlong)local_68 / (longlong)local_70;
              }
              if ((local_68 | local_70) >> 0x20 == 0) {
                uVar2 = (local_68 & 0xffffffff) % (local_70 & 0xffffffff);
              }
              else {
                uVar2 = (longlong)local_68 % (longlong)local_70;
              }
              uVar2 = uVar2 * local_78;
              if ((uVar2 | local_70) >> 0x20 == 0) {
                uVar2 = (uVar2 & 0xffffffff) / (local_70 & 0xffffffff);
              }
              else {
                uVar2 = (longlong)uVar2 / (longlong)local_70;
              }
              local_60 = uVar2 + uVar1 * local_78;
              local_88 = 0xc66d54d5053cf07c;
              local_90 = 0x900c2d608d0954f4;
            }
          }
          if (0x6003c177ff429e4b < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x45b21c7cd5ce3081) {
            if (uVar1 == 0xfb03cb6d0e460d35) {
              if ((local_68 | local_80) >> 0x20 == 0) {
                uVar1 = (local_68 & 0xffffffff) / (local_80 & 0xffffffff);
                uVar2 = (local_68 & 0xffffffff) % (local_80 & 0xffffffff);
              }
              else {
                uVar1 = (longlong)local_68 / (longlong)local_80;
                uVar2 = (longlong)local_68 % (longlong)local_80;
              }
              uVar2 = uVar2 * local_78;
              if ((uVar2 | local_80) >> 0x20 == 0) {
                uVar2 = (uVar2 & 0xffffffff) / (local_80 & 0xffffffff);
              }
              else {
                uVar2 = (longlong)uVar2 / (longlong)local_80;
              }
              local_60 = uVar2 + uVar1 * local_78;
              local_88 = 0x5b1bc31f0e011de2;
              local_90 = 0xd7abaaa8634b96a;
            }
            else if (uVar1 == 0xad2d02e8af56f0d) {
              local_88 = 0xbeb4e454166005b9;
              local_90 = 0x45b72f391826088c;
            }
          }
          else if (uVar1 == 0x45b21c7cd5ce3081) {
            DAT_1802a4198 = 0;
            *(undefined4 *)(param_1 + 0x420) = 0xffffffff;
            local_88 = 0x3f1ddb2ae5161dfe;
            local_90 = 0x5f1e1a5d1a5483b2;
          }
          else if (uVar1 == 0x566179b58835a488) {
            local_58 = local_60;
            local_48 = local_60 - DAT_1802a4188;
            local_88 = 0x796057262b2682e1;
            if (30000000000 < local_48) {
              local_88 = 0x967bcd2dae08f372;
            }
            local_90 = 0xf0bee7dd30eaedf7;
          }
        }
        if ((longlong)uVar1 < 0x66c52af09ee21e85) break;
        if (uVar1 == 0x66c52af09ee21e85) {
          DAT_1802a4198 = 0;
          local_88 = 0xfa15a4ef808b12d6;
          local_90 = 0x9a1665987fc98c9a;
        }
        else if (uVar1 == 0x6f325dcc00cad4d7) {
          local_80 = FUN_1801da1cc();
          local_68 = FUN_1801da1b0();
          local_88 = 0x444fa9edebbba2cd;
          local_90 = 0x9a3b98c5d9b17bbf;
        }
      }
      if (uVar1 != 0x662444b0d72bcd61) break;
      local_70 = 24000000;
      local_78 = 1000000000;
      (*DAT_18027cb58)(param_1,param_2);
      local_88 = 0xfa72451626c07cc4;
      if ((DAT_1802a4198 & 1) != 0) {
        local_88 = 0xf543d9add948365f;
      }
      local_90 = 0x9a718461d982e288;
    }
  } while (uVar1 != 0x6003c177ff429e4c);
  return;
}



ulonglong FUN_1800fd210(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  uintptr_t local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_58 = 0xf;
  local_50 = 0;
  local_90 = 0x28;
  local_39 = 0;
  local_88 = 0xfff;
  local_80 = 1;
  local_78 = 4;
  local_4c = 4;
  local_48 = 0;
  local_70 = -8;
  local_68 = 0x20;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800fd599;
        uVar12 = uVar9 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_1801f42e0(lVar10,uVar12);
    }
    *(uintptr_t *)(param_1 + 0x18) = local_48;
    *(ulonglong *)(param_1 + 0x20) = local_58;
    *(undefined1 *)(param_1 + 8) = local_39;
    lVar10 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar11 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar11;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = local_48;
    param_2[3] = local_58;
    *(undefined1 *)param_2 = local_39;
  }
  local_60 = param_2;
  if (param_3 == local_48) {
    FUN_1800fdc84(&DAT_1802a4234,&DAT_18027ccf9,0x15,0x19,&DAT_1802a4250);
    local_d8 = &DAT_1802a4234;
    local_d0 = 0x18;
    FUN_1800fdc84(&DAT_1802a4254,&DAT_18027cd41,0x10,5,&DAT_1802a425c);
    local_c8 = &DAT_1802a4254;
    local_c0 = local_78;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_1800fd547:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800fd587;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800fdc84(&DAT_1802a4260,&DAT_18027cd67,0x10,0x22,&DAT_1802a4284);
      local_b8 = &DAT_1802a4260;
      local_b0 = 0x21;
      FUN_1800fdc84(&DAT_1802a4254,&DAT_18027cd41,0x10,5,&DAT_1802a425c);
      local_a8 = &DAT_1802a4254;
      local_a0 = local_78;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800fd547;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800fd587;
  }
  lVar10 = *local_60;
  uVar13 = local_80 + uVar9;
  lVar11 = lVar10;
  if (local_88 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_68 <= (ulonglong)((lVar10 + local_70) - lVar11)) {
LAB_1800fd599:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_90;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800fd587:
  return uVar12 & 0xffffffff;
}



void Unwind_1800fd5c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800fd5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5,
                  undefined1 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;

  local_90 = 0x1e5cd1123d112783;
  local_98 = 0xa7718faf4831a287;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_90 ^ 0x8ddee4920ac6ffc2;
            uVar1 = local_90 ^ local_98;
            local_98 = local_98 ^ 0x8ddee4920ac6ffc2;
            local_90 = uVar2;
            if (-0x46d2a1428adf7afd < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x6e4976274defd0f3) {
              if (uVar1 == 0x8826eac2a2b5be12) {
                if ((local_70 | local_78) >> 0x20 == 0) {
                  uVar1 = (local_70 & 0xffffffff) / (local_78 & 0xffffffff);
                }
                else {
                  uVar1 = (longlong)local_70 / (longlong)local_78;
                }
                if ((local_70 | local_78) >> 0x20 == 0) {
                  uVar2 = (local_70 & 0xffffffff) % (local_78 & 0xffffffff);
                }
                else {
                  uVar2 = (longlong)local_70 % (longlong)local_78;
                }
                uVar2 = uVar2 * local_80;
                if ((uVar2 | local_78) >> 0x20 == 0) {
                  uVar2 = (uVar2 & 0xffffffff) / (local_78 & 0xffffffff);
                }
                else {
                  uVar2 = (longlong)uVar2 / (longlong)local_78;
                }
                local_68 = uVar2 + uVar1 * local_80;
                local_90 = 0x1eaf70c84daf6e69;
                local_98 = 0xdae7e71a9b080bb1;
              }
              else if (uVar1 == 0x8b0c55d186c59dca) {
                local_88 = FUN_1801da1cc();
                local_70 = FUN_1801da1b0();
                local_90 = 0x2fa3b63f6f6bb66c;
                local_98 = 0xb5a6ca0f2060d8aa;
              }
            }
            else if (uVar1 == 0x91b689d8b2102f0d) {
              local_90 = 0xf56d48b9e7079b3;
              if (local_88 == 24000000) {
                local_90 = 0x90c4385e285881d8;
              }
              local_98 = 0x18e2d29c8aed3fca;
            }
            else if (uVar1 == 0x9a057c304f0b6ec6) {
              local_90 = 0x5ff5fb0798f994a8;
              if ((longlong)local_88 < 24000000) {
                local_90 = 0x180c96b6b39bbc1a;
              }
              local_98 = 0xce4372df2ae9bba5;
            }
            else if (uVar1 == 0xa455ad36485b70ec) {
              if ((local_70 | local_88) >> 0x20 == 0) {
                uVar1 = (local_70 & 0xffffffff) / (local_88 & 0xffffffff);
                uVar2 = (local_70 & 0xffffffff) % (local_88 & 0xffffffff);
              }
              else {
                uVar1 = (longlong)local_70 / (longlong)local_88;
                uVar2 = (longlong)local_70 % (longlong)local_88;
              }
              uVar2 = uVar2 * local_80;
              if ((uVar2 | local_88) >> 0x20 == 0) {
                uVar2 = (uVar2 & 0xffffffff) / (local_88 & 0xffffffff);
              }
              else {
                uVar2 = (longlong)uVar2 / (longlong)local_88;
              }
              local_68 = uVar2 + uVar1 * local_80;
              local_90 = 0x4df1a4fc55ec3e50;
              local_98 = 0x89b9332e834b5b88;
            }
          }
          if ((longlong)uVar1 < -0x29b01b96668df841) break;
          if (uVar1 == 0xd64fe469997207bf) {
            local_90 = 0xa908f3cbce3c2c30;
            if (local_88 == 10000000) {
              local_90 = 0xd2b5bdd85f4a1f99;
            }
            local_98 = 0xbebcf5dcdaa16a49;
          }
          else if (uVar1 == 0x17b40617149d4679) {
            local_90 = 0x7332223c214aec6a;
            local_98 = 0xd7678f0a69119c86;
          }
          else if (uVar1 == 0x6c09480485eb75d0) {
            local_68 = local_70 * 100;
            local_90 = 0x29350d88831282cc;
            local_98 = 0xed7d9a5a55b5e714;
          }
        }
        if (uVar1 != 0xb92d5ebd75208504) break;
        local_78 = 24000000;
        local_80 = 1000000000;
        (*DAT_18027cb98)(param_1,param_2,param_3,param_4,param_5,param_6);
        local_90 = 0x2f2316cf435148e3;
        if ((DAT_1802a4198 & 1) != 0) {
          local_90 = 0x6e50be5e12272ffc;
        }
        local_98 = 0xe55ceb8f94e2b236;
      }
      if (uVar1 != 0xc44897d2d6a765d8) break;
      DAT_1802a4190 = local_68;
      local_90 = 0x90f5b736412f98a6;
      local_98 = 0x5a8a4a76969c6273;
    }
  } while (uVar1 != 0xca7ffd40d7b3fad5);
  return;
}



undefined8 FUN_1800fdac0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x53bcf2c5d98fbab3;
  local_50 = 0x739b4fc6e77bad36;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xa3e95a7fee0999cf;
        if (uVar1 != 0x8d25f84e9598429f) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0x154c1faf1f8d6699;
        local_50 = 0xc1ce918c1d96bdb2;
      }
      if (uVar1 != 0x2027bd033ef41785) break;
      FUN_1800fc1f0(param_1);
      local_48 = 0x7180f312c3eccbda;
      if ((param_2 & 1) == 0) {
        local_48 = 0x2827857f546f526e;
      }
      local_50 = 0xfca50b5c56748945;
    }
    local_48 = local_48 ^ 0xa3e95a7fee0999cf;
  } while (uVar1 != 0xd4828e23021bdb2b);
  return param_1;
}



void FUN_1800fdc10(void)

{
  atexit((_func_5014 *)&LAB_1800fc1d0);
  atexit((_func_5014 *)&LAB_1800fc1e0);
  atexit((_func_5014 *)&LAB_1800fc350);
  FUN_1800fdc84(&DAT_1802a41a0,&DAT_18027cbc1,0x19,10,&DAT_1802a41ac);
  FUN_1800f0070(&DAT_1802a4184,&DAT_1802a41a0,FUN_1800fc360);
  return;
}



void FUN_1800fdc84(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_6d;
  char local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0xb239790b2ae80bea;
  local_68 = 0x305b8e55f8de0f2a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x1a4451f0fa479639;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x1a4451f0fa479639;
          local_60 = uVar2;
          if (0xa1aee506501213b < (longlong)uVar1) break;
          if (uVar1 == 0x8262f75ed23604c0) {
            local_60 = 0xed5f720883404d36;
            if (*param_5 == 1) {
              local_60 = 0x3aae3968fc0d93ce;
            }
            local_68 = 0x6e85ba1f92ff8a2e;
            local_54 = 0;
            local_6b = 0;
            local_48 = (int)param_3 + param_2;
          }
          else if (uVar1 == 0x83dac81711bfc718) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xb7221e60da764d3b;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x5dfd18210ebbb6de;
            }
            local_68 = 0x6751e8aa5d8ebaeb;
          }
          else if (uVar1 == 0xd073f6ca87f8f7d0) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xb1653633e50a48ed;
            local_68 = 0xbb7fd863800b69d1;
          }
        }
        if (0x53c13eb857a589dd < (longlong)uVar1) break;
        if (uVar1 == 0xa1aee506501213c) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0x4f8d8473b30f6b58;
          if (local_54 == param_4) {
            local_60 = 0x9f9672dcf515259e;
          }
          local_68 = 0xcc574c64a2b0ac40;
        }
        else if (uVar1 == 0x3aacf08b53350c35) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xe24f99dd24f9762d;
          local_68 = 0xe855778d41f85711;
        }
      }
      if (uVar1 != 0x53c13eb857a589de) break;
      *param_5 = 1;
      local_60 = 0x9bacecebc5cb9af9;
      local_68 = 0xcf876f9cab398319;
    }
  } while (uVar1 != 0x542b83776ef219e0);
  return;
}



undefined1 FUN_1800fdf50(void)

{
  longlong lVar1;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;

  lVar1 = FUN_1801b2b70();
  local_20 = 0;
  local_28 = (char *)FUN_1801d61c8(0x20);
  local_18 = 0x1d;
  local_10 = 0x1f;
  builtin_strncpy(local_28,"TextRunBuilder::appendElement",0x1e);
  FUN_1800ef070(&PTR_PTR_18027dc68,&local_28,lVar1 + 0x3709c0,FUN_1800fdfd0);
  return 1;
}



void FUN_1800fdfd0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_9;

  local_20 = param_2;
  local_18 = param_1;
  local_9 = param_3;
  FUN_1800fe020(&PTR_PTR_18027dc68,&local_18,&local_20,&local_9);
  return;
}



void FUN_1800fe020(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  (**(code **)(param_1 + 0x30))(*param_2,*param_3,*param_4);
  return;
}



void FUN_1800fe040(void)

{
  atexit((_func_5014 *)&LAB_1800fdf40);
  FUN_1800f0070(&DAT_1802a4288,"Stability",FUN_1800fdf50);
  return;
}



void FUN_1800fe070(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_90 = 0x8a68b04c655b5c9d;
  local_98 = 0xd980e1490b6dd0ad;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xccf4ddf646df5396;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xccf4ddf646df5396;
          local_90 = uVar2;
          if (-0x2a50a49e532e84d3 < (longlong)uVar1) break;
          if (uVar1 == 0x8f9655a3ca3120a9) {
            local_70 = *(longlong *)(local_88 + -8);
            local_90 = 0xd5715a71634086f7;
            if ((local_68 - local_70) - 8U < 0x20) {
              local_90 = 0x8db1ff81c565f9de;
            }
            local_98 = 0x3bcea53104fef1e2;
          }
          else if (uVar1 == 0xb67f5ab0c19b083c) {
            local_80 = local_60 + 0x27;
            local_90 = 0xc78f3c9ee37f76fe;
            local_98 = 0x122067ff4fae0dd0;
            local_78 = local_70;
          }
          else if (uVar1 == 0xc14f57cad9f23d07) {
            local_68 = local_88;
            local_80 = param_1[2] - local_88;
            local_90 = 0xbf01a8a88286bd9c;
            if (0xfff < local_80) {
              local_90 = 0xe538a66ae466e61b;
            }
            local_98 = 0x6aaef3c92e57c6b2;
            local_78 = local_88;
            local_60 = local_80;
          }
        }
        if ((longlong)uVar1 < -0x114000bf984188eb) break;
        if (uVar1 == 0x53e851056e368c30) {
          local_88 = *param_1;
          local_90 = 0x558a53dd01c14b5d;
          if (local_88 == 0) {
            local_90 = 0x7f53d0d7908a213c;
          }
          local_98 = 0x94c50417d833765a;
        }
        else if (uVar1 == 0xeebfff4067be7715) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0xd5af5b61acd17b2e) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_90 = 0x77e9fee055d0c423;
      local_98 = 0x9c7f2a201d699345;
    }
  } while (uVar1 != 0xeb96d4c048b95766);
  return;
}



void FUN_1800fe370(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_90 = 0x6653ed82d18e79a5;
  local_98 = 0x1c3bb028f0a00f53;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x7b82f274499d644d;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x7b82f274499d644d;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x27f453ba9ddac820) break;
          if (uVar1 == 0x27f453ba9ddac820) {
            local_80 = local_68 + 0x27;
            local_90 = 0xa5dfa642275b34cb;
            local_98 = 0x14880f6ad6496e32;
            local_78 = local_60;
          }
          else if (uVar1 == 0x7a685daa212e76f6) {
            local_88 = DAT_1802a4290;
            local_90 = 0x30f51cfa356dd142;
            if (DAT_1802a4290 == 0) {
              local_90 = 0x66642fd61643db6c;
            }
            local_98 = 0x3967261ff12363ab;
          }
          else if (uVar1 == 0x5f0309c9e760b8c7) {
            return;
          }
        }
        if ((longlong)uVar1 < 0x9923ae5c44eb2e9) break;
        if (uVar1 == 0x9923ae5c44eb2e9) {
          local_70 = local_88;
          local_80 = DAT_1802a42a0 - local_88;
          local_90 = 0xd5433278b8311eef;
          if (0xfff < local_80) {
            local_90 = 0x44b155152fda1b50;
          }
          local_98 = 0x64149b5049234416;
          local_78 = local_88;
          local_68 = local_80;
        }
        else if (uVar1 == 0x20a5ce4566f95f46) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0x85ffcc4bdd981ad5;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0x16549a026501258f;
          }
          local_98 = 0x31a0c9b8f8dbedaf;
        }
      }
      if (uVar1 != 0xb157a928f1125af9) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      DAT_1802a4290 = 0;
      DAT_1802a4298 = 0;
      DAT_1802a42a0 = 0;
      local_90 = 0xb08187eff4284bb9;
      local_98 = 0xef828e261348f37e;
    }
  } while (uVar1 != 0xb45f05f32543f77a);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800fe680(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;

  local_a0 = 0x502870ac6dc6f9c3;
  local_a8 = 0x5f00aec13cf00a05;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            plVar1 = DAT_1802a42b0;
            uVar3 = local_a0 ^ 0x8d63c013ff57d319;
            uVar2 = local_a0 ^ local_a8;
            local_a8 = local_a8 ^ 0x8d63c013ff57d319;
            local_a0 = uVar3;
            if (-0xdc7d92fe0e6875c < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x3a4f2bc666901b94) {
              if (uVar2 == 0x9a804bbb8cf902a5) {
                thunk_FUN_1801f42e0(local_80,local_88);
                DAT_1802a42c0 = 0;
                DAT_1802a42c8 = 0;
                DAT_1802a42d0 = 0;
                local_a0 = 0xfbe823f35eb18a48;
                local_a8 = 0xe0c8e7e71177dc22;
              }
              else if (uVar2 == 0xbd02f6e3270c9fe0) {
                local_88 = local_60 + 0x27;
                local_a0 = 0xb90cac5490558288;
                local_a8 = 0x238ce7ef1cac802d;
                local_80 = local_70;
              }
            }
            else if (uVar2 == 0xd2951bb6750950f3) {
              local_70 = *(longlong *)(local_90 + -8);
              local_a0 = 0xf1a3486b3e3ccff7;
              if ((local_68 - local_70) - 8U < local_98) {
                local_a0 = 0x50ccfbc0414f3636;
              }
              local_a8 = 0xedce0d236643a9d6;
            }
            else if (uVar2 == 0xc5b0d439996fe46c) {
              thunk_FUN_1801f42e0(DAT_1802a42b0,local_98);
              return;
            }
          }
          if (0x1b20c4144fc65669 < (longlong)uVar2) break;
          if (uVar2 == 0xf23826d01f1978a5) {
            plVar1 = (longlong *)*local_78;
            thunk_FUN_1801f42e0(local_78,local_98);
            local_a0 = 0x73116b52fcc4d756;
            if (plVar1 == (longlong *)0x0) {
              local_a0 = 0x449999bb7ab24b9f;
            }
            local_a8 = 0x81294d82e3ddaff3;
            local_78 = plVar1;
          }
          else if (uVar2 == 0xf28de6d5136f3c6) {
            local_98 = 0x20;
            local_90 = DAT_1802a42c0;
            local_a0 = 0xfae1d481abe1a682;
            if (DAT_1802a42c0 == 0) {
              local_a0 = 0xbb6daf1d8b20f2d3;
            }
            local_a8 = 0xa04d6b09c4e6a4b9;
          }
        }
        if (uVar2 != 0x1b20c4144fc6566a) break;
        *(undefined8 *)DAT_1802a42b0[1] = 0;
        local_a0 = 0xf7088e53b8731bc3;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          local_a0 = 0xc0807cba3e05870a;
        }
        local_a8 = 0x530a883a76a6366;
        local_78 = (longlong *)*plVar1;
      }
      if (uVar2 != 0x5aacbf886f07023b) break;
      local_68 = local_90;
      local_88 = DAT_1802a42d0 - local_90;
      local_a0 = 0x905309bb52a291a7;
      if (0xfff < local_88) {
        local_a0 = 0xd84659b6ab52c3f1;
      }
      local_a8 = 0xad34200de5b9302;
      local_80 = local_90;
      local_60 = local_88;
    }
  } while (uVar2 != 0x1c6d4548587f6621);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800fea80(void)

{
  DWORD *pDVar1;
  DWORD DVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  DWORD local_124;
  longlong local_120;
  DWORD *local_118;
  HANDLE local_110;
  DWORD local_104;
  DWORD local_100;
  DWORD local_fc;
  ULONGLONG local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  DWORD *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  longlong *local_a0;
  undefined1 local_98 [16];
  HHOOK local_88;
  undefined4 local_7c;
  undefined8 local_78;
  DWORD aDStack_70 [4];
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_130 = 0xe82d8c81eba1dee9;
  local_138 = 0xfa0e933c65cb9e30;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pDVar1 = local_118;
              uVar5 = local_130 ^ 0x215341361bed5db5;
              uVar3 = local_130 ^ local_138;
              local_138 = local_138 ^ 0x215341361bed5db5;
              local_130 = uVar5;
              if ((longlong)uVar3 < 0x1b5157eb087c7f58) break;
              if ((longlong)uVar3 < 0x5ec6a79cb3fc1b8e) {
                if ((longlong)uVar3 < 0x36a190653518852d) {
                  if (uVar3 == 0x1b5157eb087c7f58) {
                    CloseHandle(local_110);
                    local_130 = 0xde9c8c05124c3f89;
                    if (DAT_1802a42b8 == 0) {
                      local_130 = 0x7639512bcab2a151;
                    }
                    if (DAT_1802a42e8 != (HHOOK)0x0) {
                      local_130 = 0x7639512bcab2a151;
                    }
                    local_138 = 0xae32861302750c5a;
                  }
                  else if (uVar3 == 0x29b59b2602ea4d56) {
                    FUN_1800ff750(&DAT_1802a42a8,local_98,local_118,&local_88);
                    local_130 = 0x39db7d6bab3a4c5f;
                    if (*pDVar1 == local_104) {
                      local_130 = 0xf755b6c743d6daa1;
                    }
                    local_138 = 0xf9337e82bff9be8d;
                  }
                }
                else if (uVar3 == 0x36a190653518852d) {
                  local_f8 = GetTickCount64();
                  local_130 = 0x7c7c1f2e24e63650;
                  if (DAT_1802a42e8 == (HHOOK)0x0) {
                    local_130 = 0x9f27629fd0fa544a;
                  }
                  local_138 = 0x1a912cd64b34006a;
                }
                else if (uVar3 == 0x5564d156307951a4) {
                  local_f0 = (longlong *)local_a0[1];
                  local_130 = 0x6529317b2700c2d5;
                  if (local_fc == *(DWORD *)(local_f0 + 2)) {
                    local_130 = 0x9a26b1b94e4afe08;
                  }
                  local_138 = 0xef8354a3a35f9e54;
                  local_e8 = local_f0;
                }
                else if (uVar3 == 0x58f50b3879d15076) {
                  local_130 = 0xd7281822e327304a;
                  if (*local_c0 == local_100) {
                    local_130 = 0x7387ebb71ad437df;
                  }
                  local_138 = 0xc352e6ef50ec19d8;
                }
              }
              else if ((longlong)uVar3 < 0x70ae0a16103933d3) {
                if (uVar3 == 0x5ec6a79cb3fc1b8e) {
                  local_88 = SetWindowsHookExW(3,FUN_1800ff450,(HINSTANCE)0x0,*local_118);
                  local_130 = 0x5c8a537da4e96461;
                  if (local_88 == (HHOOK)0x0) {
                    local_130 = 0xb5d7cbb2b2c0dbe5;
                  }
                  local_138 = 0x753fc85ba6032937;
                }
                else if (uVar3 == 0x66ed33f86fd2363a) {
                  local_130 = 0x93ee3bca3e17b23c;
                  if (local_f8 - _DAT_1802a42f0 < 3000) {
                    local_130 = 0x91354a96fd5c7c3d;
                  }
                  local_138 = 0x16587583a5d9e61c;
                }
              }
              else if (uVar3 == 0x70ae0a16103933d3) {
                DAT_1802a42e8 = *(HHOOK *)(*DAT_1802a42b0 + 0x18);
                local_130 = 0xa15463b33c48993c;
                local_138 = 0x795fb48bf48f3437;
              }
              else if (uVar3 == 0x7506b71357d4f650) {
                local_e0 = (longlong *)*local_d8;
                local_fc = *local_118;
                local_130 = 0x58344b1f7003ee61;
                if (local_fc == *(DWORD *)(local_d0 + 2)) {
                  local_130 = 0xc6e4d00a47979b72;
                }
                local_138 = 0xd29e2ec7f45cb2e0;
                local_f0 = local_d0;
              }
              else if (uVar3 == 0x75a5e51aed15605c) {
                local_130 = 0xeb5dc13b332fa240;
                if (local_e8 == local_c8) {
                  local_130 = 0xa1e1986a3318905c;
                }
                local_138 = 0xff273ff680e48bd2;
              }
            }
            if ((longlong)uVar3 < -0x27f428c7373852f5) break;
            if ((longlong)uVar3 < 0x12231fbd8e6a40d9) {
              if (uVar3 == 0xd80bd738c8c7ad0b) {
                local_130 = 0x5ca20bbc9bc6c359;
                local_138 = 0xdbcf34a9c3435978;
              }
              else if (uVar3 == 0xe66c845fc2f642c) {
                DAT_1802a42e8 = local_88;
                local_130 = 0xd524c35fcf2db809;
                local_138 = 0x15ccc0b6dbee4adb;
              }
            }
            else if (uVar3 == 0x12231fbd8e6a40d9) {
              local_124 = 0;
              local_120 = 0x100000001b3;
              local_104 = FUN_1801b9df0();
              local_130 = 0xa5891cd38551ab40;
              if (local_104 == local_124) {
                local_130 = 0x1445b3a3e8ccb44c;
              }
              local_138 = 0x93288cb6b0492e6d;
            }
            else if (uVar3 == 0x147afecdb3cb2992) {
              DVar2 = Thread32Next(local_110,&local_7c);
              local_130 = 0x4f91a63cb042b6df;
              if (DVar2 == local_124) {
                local_130 = 0xc35faefc1ef99f1;
              }
              local_138 = 0x1764ad04c993e6a9;
            }
            else if (uVar3 == 0x18d5cfcadfdbedc2) {
              local_100 = GetCurrentProcessId();
              local_78 = 0;
              aDStack_70[0] = 0;
              aDStack_70[1] = 0;
              aDStack_70[2] = 0;
              aDStack_70[3] = 0;
              local_7c = 0x1c;
              DVar2 = Thread32First(local_110,&local_7c);
              local_130 = 0xa040b6874822b7a8;
              if (DVar2 == local_124) {
                local_130 = 0x1186f3221a0a760f;
              }
              local_138 = 0xad7a4c912760957;
            }
          }
          if ((longlong)uVar3 < -0x5568edb1a5ab4101) break;
          if (uVar3 == 0xaa97124e5a54beff) {
            local_c0 = aDStack_70;
            local_118 = (DWORD *)((longlong)&local_78 + 4);
            local_b8 = (byte *)((longlong)&local_78 + 5);
            local_b0 = (byte *)((longlong)&local_78 + 6);
            local_a8 = (byte *)((longlong)&local_78 + 7);
            local_130 = 0x3d7cace9136279ce;
            local_138 = 0x6589a7d16ab329b8;
          }
          else if (uVar3 == 0xb0d50d584a382e07) {
            lVar4 = (((ulonglong)*local_a8 ^
                     ((ulonglong)*local_b0 ^
                     ((ulonglong)*local_b8 ^ ((ulonglong)(byte)*local_118 ^ 0xcbf29ce484222325) * local_120) * local_120
                     ) * local_120) * local_120 & _DAT_1802a42d8) * 0x10;
            local_d8 = (undefined8 *)(DAT_1802a42c0 + lVar4);
            local_d0 = *(longlong **)(DAT_1802a42c0 + 8 + lVar4);
            local_c8 = DAT_1802a42b0;
            local_130 = 0x5c533240a1b85268;
            if (local_d0 == DAT_1802a42b0) {
              local_130 = 0x779322cf4590bfb6;
            }
            local_138 = 0x29558553f66ca438;
          }
          else if (uVar3 == 0xc0e803e914c3f2d2) {
            local_130 = 0x4d698be07fa26bde;
            local_138 = 0x5913752dcc69424c;
          }
        }
        if (uVar3 != 0x85b64e499bce5420) break;
        _DAT_1802a42f0 = local_f8;
        local_110 = (HANDLE)CreateToolhelp32Snapshot(4,local_124);
        local_130 = 0x536ba4c806b5fd24;
        if (local_110 == (HANDLE)0xffffffffffffffff) {
          local_130 = 0xccd3541781eb8ac7;
        }
        local_138 = 0x4bbe6b02d96e10e6;
      }
      if (uVar3 != 0x8aaa65d8845f5c81) break;
      local_a0 = local_f0;
      local_130 = 0x444fd0d6f4ffa891;
      if (local_f0 == local_e0) {
        local_130 = 0x4feda61c777ae2bb;
      }
      local_138 = 0x112b0180c486f935;
    }
  } while (uVar3 != 0x876d3f1558859a21);
  if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_158)) {
    return;
  }
}



void FUN_1800ff450(int param_1,WPARAM param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_38;
  undefined2 local_32;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_32 = 0;
  if (((param_2 == 1) && (param_1 == 0)) && (param_3 != 0)) {
    LOCK();
    DAT_1802a4350 = DAT_1802a4350 + 1;
    UNLOCK();
    iVar4 = *(int *)(param_3 + 8);
    iVar2 = iVar4;
    if (((0x10 < iVar4 - 0x240U) && (iVar4 != 0xff)) && (0xe < iVar4 - 0x200U)) {
      iVar2 = DAT_1802a4358;
    }
    DAT_1802a4358 = iVar2;
    if (iVar4 == 0x102) {
      DAT_1802a435c = 1;
      uVar3 = (uint)*(undefined8 *)(param_3 + 0x10);
      uVar5 = uVar3 & 0xffff;
      uVar1 = (ushort)*(undefined8 *)(param_3 + 0x10);
      if ((short)(uVar1 & 0xfc00) < -0x2400) {
        DAT_1802a4340 = uVar1;
        if ((uVar3 & 0xfc00) == 0xd800) goto LAB_1800ff6c7;
      }
      else if ((uVar3 & 0xfc00) == 0xdc00) {
        if (DAT_1802a4340 == 0) goto LAB_1800ff6c7;
        uVar5 = uVar5 + (uint)DAT_1802a4340 * 0x400 + 0xfca02400;
      }
      local_38 = uVar5;
      if ((uVar5 == 8) || ((DAT_1802a4340 = 0, 0x1f < uVar5 && (uVar5 != 0x7f)))) {
        DAT_1802a4340 = 0;
        iVar4 = FUN_1801da264(&DAT_18027e040);
        if (iVar4 != 0) {
          FUN_1801da68c(5);
        }
        if (DAT_18027e08c == 0x7fffffff) {
          DAT_18027e08c = 0x7ffffffe;
          FUN_1801da68c(6);
        }
        if ((ulonglong)((longlong)DAT_1802a4298 - DAT_1802a4290) < 0x400) {
          if (DAT_1802a4298 == DAT_1802a42a0) {
            FUN_180103210(&DAT_1802a4290,DAT_1802a4298,&local_38);
          }
          else {
            *DAT_1802a4298 = uVar5;
            DAT_1802a4298 = DAT_1802a4298 + 1;
          }
        }
        FUN_1801da26c(&DAT_18027e040);
      }
    }
  }
LAB_1800ff6c7:
  CallNextHookEx((HHOOK)0x0,param_1,param_2,param_3);
  return;
}



void Unwind_1800ff720(void)

{
  FUN_1801da26c(&DAT_18027e040);
  return;
}



undefined8 * FUN_1800ff750(float *param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;

  uVar10 = ((ulonglong)param_3[3] ^
           ((ulonglong)param_3[2] ^
           ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3;
  lVar7 = (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar7);
  puVar9 = *(undefined8 **)(param_1 + 2);
  if (puVar2 != *(undefined8 **)(param_1 + 2)) {
    iVar1 = *(int *)(puVar2 + 2);
    while (uVar6 = 0, *(int *)param_3 != iVar1) {
      puVar9 = puVar2;
      if (puVar2 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar7)) goto LAB_1800ff87b;
      puVar2 = (undefined8 *)puVar2[1];
      iVar1 = *(int *)(puVar2 + 2);
    }
    goto LAB_1800ffa57;
  }
LAB_1800ff87b:
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_180105a77(&DAT_1802a4474,&DAT_18027e5d7,0x1b,0x1b,&DAT_1802a4490);
    FUN_1801d7524(&DAT_1802a4474);
  }
  puVar2 = (undefined8 *)FUN_1801d61c8(0x20);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)param_3;
  puVar2[3] = *param_4;
  uVar4 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar4 < 0) {
    fVar12 = (float)uVar4;
    fVar13 = *param_1;
    uVar4 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar4) goto LAB_1800ff912;
LAB_1800ff8c8:
    if (fVar13 < fVar12 / (float)uVar4) {
LAB_1800ff927:
      fVar13 = (float)FUN_1801eacf0(fVar12 / fVar13);
      uVar5 = (longlong)(fVar13 - 9.223372e+18) & (longlong)fVar13 >> 0x3f | (longlong)fVar13;
      uVar3 = 8;
      if (8 < uVar5) {
        uVar3 = uVar5;
      }
      uVar5 = uVar4;
      if (uVar4 < uVar3) {
        uVar5 = uVar4 << 3;
        if (uVar4 << 3 <= uVar3) {
          uVar5 = uVar3;
        }
        if (0x1ff < uVar4) {
          uVar5 = uVar3;
        }
      }
      FUN_180104980(param_1,uVar5);
      lVar7 = (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10;
      puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar7);
      puVar9 = *(undefined8 **)(param_1 + 2);
      if (puVar8 != *(undefined8 **)(param_1 + 2)) {
        if (*(int *)(puVar2 + 2) != *(int *)(puVar8 + 2)) {
          do {
            puVar9 = puVar8;
            if (puVar8 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar7)) goto LAB_1800ff9f7;
            puVar8 = (undefined8 *)puVar8[1];
          } while (*(int *)(puVar2 + 2) != *(int *)(puVar8 + 2));
        }
        puVar9 = (undefined8 *)*puVar8;
      }
    }
  }
  else {
    fVar12 = (float)(longlong)uVar4;
    fVar13 = *param_1;
    uVar4 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar4 < 0) goto LAB_1800ff8c8;
LAB_1800ff912:
    if (fVar13 < fVar12 / (float)(longlong)uVar4) goto LAB_1800ff927;
  }
LAB_1800ff9f7:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar2 = puVar9;
  puVar2[1] = puVar8;
  *puVar8 = puVar2;
  puVar9[1] = puVar2;
  lVar7 = *(longlong *)(param_1 + 6);
  lVar11 = (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar7 + lVar11) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar7 + lVar11) = puVar2;
LAB_1800ffa47:
    *(undefined8 **)(lVar7 + 8 + lVar11) = puVar2;
  }
  else {
    if (*(undefined8 **)(lVar7 + lVar11) != puVar9) {
      uVar6 = 1;
      if (*(undefined8 **)(lVar7 + 8 + lVar11) != puVar8) goto LAB_1800ffa57;
      goto LAB_1800ffa47;
    }
    *(undefined8 **)(lVar7 + lVar11) = puVar2;
  }
  uVar6 = 1;
LAB_1800ffa57:
  *param_2 = puVar2;
  *(undefined1 *)(param_2 + 1) = uVar6;
  return param_2;
}



void Unwind_1800ffab0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_1800ffaf0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  byte local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;

  local_e0 = 0xbe0c84b949720817;
  local_e8 = 0x8cd38469f81da6c6;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            plVar2 = DAT_1802a42b0;
            uVar4 = local_e0 ^ 0xca5b77b1a3efd7ce;
            uVar3 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0xca5b77b1a3efd7ce;
            local_e0 = uVar4;
            if ((longlong)uVar3 < 0x14c79aefe671af73) break;
            if ((longlong)uVar3 < 0x38d5f8f21230eeeb) {
              if (uVar3 == 0x14c79aefe671af73) {
                local_e0 = 0xb23e96791818f922;
                if (local_a0 == local_c0) {
                  local_e0 = 0x4c3e19e153714b68;
                }
                local_e8 = 0xe6d71e4779b10b4e;
                local_80 = local_68;
              }
              else if (uVar3 == 0x1567ce051a3c3b7f) {
                local_c0 = local_a0 & 0x3ffffffffffffffc;
                local_68 = (undefined8 *)((local_c0 << (local_d0 & 0x3f)) + (longlong)local_c8);
                local_58 = (undefined4)local_a8;
                uStack_54 = local_a8._4_4_;
                uStack_50 = (undefined4)local_a8;
                uStack_4c = local_a8._4_4_;
                local_e0 = 0x78f1083f35c10f87;
                local_e8 = 0x4024f0cd27f1e16c;
                local_90 = local_d8;
              }
              else if (uVar3 == 0x32df00d0b16faed1) {
                local_d8 = 0;
                local_d0 = 3;
                local_70 = DAT_1802a42b0;
                local_88 = (longlong *)*DAT_1802a42b0;
                local_e0 = 0x885d4ee72bb4c422;
                if (local_88 == DAT_1802a42b0) {
                  local_e0 = 0x9e2c4158d9067b20;
                }
                local_e8 = 0x5608d4a13da51833;
              }
            }
            else if ((longlong)uVar3 < 0x5055c617dd66dc5f) {
              if (uVar3 == 0x38d5f8f21230eeeb) {
                lVar5 = local_90 << (local_d0 & 0x3f);
                puVar1 = (undefined8 *)((longlong)local_c8 + lVar5);
                *puVar1 = CONCAT44(uStack_54,local_58);
                puVar1[1] = CONCAT44(uStack_4c,uStack_50);
                puVar1 = (undefined8 *)((longlong)local_c8 + lVar5 + 0x10);
                *puVar1 = CONCAT44(uStack_54,local_58);
                puVar1[1] = CONCAT44(uStack_4c,uStack_50);
                local_90 = local_90 + 4;
                local_e0 = 0x23cf85b53850deb0;
                if (local_90 == local_c0) {
                  local_e0 = 0xfdde7a8cc119f28;
                }
                local_e8 = 0x1b1a7d472a60305b;
              }
              else if (uVar3 == 0x44155396cfe2bbd8) {
                *(undefined8 *)local_b8[1] = 0;
                local_78 = (longlong *)*local_b8;
                local_e0 = 0xc68a420bf1517264;
                if (local_78 == (longlong *)0x0) {
                  local_e0 = 0xf04a04f45808c30b;
                }
                local_e8 = 0x4433ffca0838e9b8;
              }
            }
            else if (uVar3 == 0x5055c617dd66dc5f) {
              *local_98 = local_a8;
              local_98 = local_98 + 1;
              local_e0 = 0xc3df372a64e64779;
              if (local_98 == local_b0) {
                local_e0 = 0x3963f69b9340db00;
              }
              local_e8 = 0x938af13db9809b26;
            }
            else if (uVar3 == 0x54e9883e61a9f26c) {
              local_e0 = 0xb7673540e7ffc4af;
              local_e8 = 0xe732f3573a9918f0;
              local_98 = local_80;
            }
          }
          if ((longlong)uVar3 < -0x37db6a061b5c9ced) break;
          if ((longlong)uVar3 < -0x18a9820ccc9e9f00) {
            if (uVar3 == 0xc82495f9e4a36313) {
              local_60 = DAT_1802a42b8;
              local_e0 = 0x6159671cee40615;
              if (DAT_1802a42b8 == local_d8) {
                local_e0 = 0x4baaec24d7452733;
              }
              local_e8 = 0xe143eb82fd856715;
            }
            else if (uVar3 == 0xde559a461611dc11) {
              UnhookWindowsHookEx((HHOOK)local_88[3]);
              local_88 = (longlong *)*local_88;
              local_e0 = 0xa308a463c6050874;
              if (local_88 == local_70) {
                local_e0 = 0xb579abdc34b7b776;
              }
              local_e8 = 0x7d5d3e25d014d465;
            }
          }
          else if (uVar3 == 0xe7567df333616100) {
            local_e0 = 0xe1d4952ad291f922;
            if (local_60 < DAT_1802a42e0 >> (local_d0 & 0x3f)) {
              local_e0 = 0x59069def6a0e4590;
            }
            local_b8 = DAT_1802a42b0;
            local_e8 = 0xa5c1c6bc1d7342fa;
          }
          else if (uVar3 == 0xfcc75b53777d076a) {
            FUN_180105160(&DAT_1802a42a8,*local_b8);
            local_e0 = 0x3275939f7e697f70;
            local_e8 = 0x989c943954a93f56;
          }
        }
        if (-0x5516f859d53fbfdb < (longlong)uVar3) break;
        if (uVar3 == 0x82b9bdc1f9699bdc) {
          plVar2 = (longlong *)*local_78;
          thunk_FUN_1801f42e0(local_78,0x20);
          local_e0 = 0x140f8e2dd2d6be50;
          if (plVar2 == (longlong *)0x0) {
            local_e0 = 0x22cfc8d27b8f0f3f;
          }
          local_e8 = 0x96b633ec2bbf258c;
          local_78 = plVar2;
        }
        else if (uVar3 == 0x9a3e0550fc560e01) {
          local_80 = local_c8;
          local_a8 = DAT_1802a42b0;
          uVar3 = (longlong)local_b0 + (-8 - (longlong)local_c8);
          local_a0 = (uVar3 >> (local_d0 & 0x3f)) + 1;
          local_e0 = 0xe636b8ff2c44e1a3;
          if (uVar3 < 0x18) {
            local_e0 = 0xa7b8fec457d128b0;
          }
          local_e8 = 0xf35176fa3678dadc;
        }
      }
      if (uVar3 != 0xb479fb3e50302ab3) break;
      *DAT_1802a42b0 = (longlong)DAT_1802a42b0;
      plVar2[1] = (longlong)plVar2;
      DAT_1802a42b8 = local_d8;
      local_b0 = DAT_1802a42c8;
      local_c8 = DAT_1802a42c0;
      local_e0 = 0x8188d098ba06ae34;
      if (DAT_1802a42c0 == DAT_1802a42c8) {
        local_e0 = 0xb15fd26e6c90e013;
      }
      local_e8 = 0x1bb6d5c84650a035;
    }
  } while (uVar3 != 0xaae907a62ac04026);
  DAT_1802a42e8 = 0;
  _DAT_1802a42f0 = local_d8;
  return;
}


