#include "../include/aerialclient_types.h"


undefined * FUN_180001000(void)

{
  return &DAT_1802a1590;
}



void FUN_180001010(int param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,undefined4 *param_5,
                  undefined4 *param_6,undefined4 *param_7)

{
  longlong lVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined1 local_100 [8];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 ***local_98;
  uintptr_t local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_58 = 0;
  local_80 = 0x20;
  local_50 = 0xf;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    local_88 = FUN_180183cf0();
    local_d8 = *param_3;
    local_d0 = param_3[1];
    local_a8 = *param_4;
    local_c8 = 0x2000000000000000;
    local_a4 = *param_5;
    local_c0 = 0x2000000000000004;
    local_a0 = *param_6;
    local_b8 = 0x2000000000000008;
    local_9c = *param_7;
    local_b0 = 0x200000000000000c;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_50;
    if (local_50 < local_80 + local_d0) {
      FUN_180002240(&local_78);
      local_68 = local_58;
    }
    local_e8 = 4;
    local_e0 = &local_c8;
    FUN_180003080(local_100,&local_78,&local_d8,&local_e8,local_58);
    local_98 = &local_78;
    if (local_50 < local_60) {
      local_98 = local_78;
    }
    local_90 = local_68;
    local_f8 = *param_2;
    uStack_f4 = param_2[1];
    uStack_f0 = param_2[2];
    uStack_ec = param_2[3];
    FUN_180184a80(local_88,param_1,&local_f8,&local_98);
    if (local_50 < local_60) {
      uVar3 = local_60 + 1;
      ppppuVar2 = (undefined8 ****)local_78;
      if (0xfff < uVar3) {
        ppppuVar2 = (undefined8 ****)local_78[-1];
        if (local_80 <= (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar2))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_58);
        }
        uVar3 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar2,uVar3);
    }
  }
  return;
}



void Unwind_180001280(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xb0);
  return;
}



void Unwind_1800012c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xb0);
  return;
}



void FUN_180001300(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_348 [32];
  undefined *local_328;
  undefined8 *local_320;
  longlong local_318;
  ulonglong local_310;
  ulonglong local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 *local_2f0;
  short *local_2e8;
  short *local_2e0;
  undefined8 local_2d8;
  short *local_2d0;
  longlong local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined8 local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined8 local_260;
  WCHAR local_258 [264];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_348;
  local_308 = 0x798a2350beb1900;
  local_310 = 0x74e97d561df68b5b;
  local_2f0 = param_1;
  local_2d8 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_308 ^ 0x507e2c1da3f9865b;
            uVar2 = local_308 ^ local_310;
            local_310 = local_310 ^ 0x507e2c1da3f9865b;
            local_308 = uVar4;
            if (0x138acab05e0b93ee < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x4132c632fc025901) {
              if (uVar2 == 0x817830591a2e36b1) {
                local_328 = &DAT_1802a177c;
                FUN_18004e1e3(&DAT_1802a1754,&DAT_1802703d1,0x1c,0x28);
                local_2b0 = &DAT_1802a1754;
                local_2a8 = 0x27;
                local_328 = &DAT_1802a1608;
                FUN_18004e1e3(&DAT_1802a1600,&DAT_1802701ba,0x1f,7);
                local_2c0 = &DAT_1802a1600;
                local_2b8 = local_2f8;
                FUN_180001ad0(local_2fc,&local_2c0,&local_2b0);
                uVar3 = FUN_180100330();
                FUN_1800ffaf0(uVar3);
                FUN_1800f13b0();
                FUN_180174210();
                uVar3 = FUN_180175cb0();
                FUN_180175f60(uVar3);
                uVar3 = FUN_180177800();
                FUN_1801786a0(uVar3);
                uVar3 = FUN_180111340();
                FUN_180113e20(uVar3);
                FUN_18017b9e0();
                uVar3 = FUN_180183cf0();
                FUN_180184820(uVar3);
                local_308 = 0xeb0ed27426c9ee17;
                local_310 = 0xa99171c4c6463495;
              }
              else if (uVar2 == 0x9a1ae12709492135) {
                local_2c8 = (longlong)local_2e0 + (longlong)*(int *)(local_2d0 + 0x1e);
                local_308 = 0x7b1b76f59eb0fad4;
                if (*(int *)((longlong)local_2e0 + (longlong)*(int *)(local_2d0 + 0x1e)) == 0x4550) {
                  local_308 = 0xa8e0ff9445eecb7e;
                }
                local_310 = 0x162dc65946136d81;
              }
            }
            else if (uVar2 == 0xbecd39cd03fda6ff) {
              local_260 = (short *)CONCAT44(*(undefined4 *)(local_2c8 + 0x50),*(undefined4 *)(local_2c8 + 8));
              local_308 = 0xfea607657e86c8a4;
              if (local_260 == (short *)0x1a910005976da7b) {
                local_308 = 0x72c982f8339847f2;
              }
              local_310 = 0x20b902656f7c73d5;
            }
            else if (uVar2 == 0xde1f050011fabb71) {
              local_328 = &DAT_1802a15fc;
              FUN_18004e1e3(&DAT_1802a15b0,&DAT_18027013c,0x1b,0x4a);
              local_270 = &DAT_1802a15b0;
              local_268 = 0x49;
              local_328 = &DAT_1802a1608;
              FUN_18004e1e3(&DAT_1802a1600,&DAT_1802701ba,0x1f,7);
              local_280 = &DAT_1802a1600;
              local_278 = local_2f8;
              local_318 = (longlong)&local_260 + 4;
              local_320 = &local_260;
              local_328 = &DAT_180209850;
              FUN_180001010(local_2fc,&local_280,&local_270,&DAT_180209854);
              local_328 = &DAT_1802a1630;
              FUN_18004e1e3(&DAT_1802a160c,&DAT_1802701fc,0x1e,0x24);
              local_290 = &DAT_1802a160c;
              local_288 = 0x23;
              local_2a0 = &DAT_1802a1600;
              local_298 = local_2f8;
              FUN_180001ad0(local_2fc,&local_2a0,&local_290);
              local_328 = &DAT_1802a1750;
              FUN_18004e494(&DAT_1802a1654,&DAT_18027029e,0xf,0x7e);
              local_328 = &DAT_1802a1650;
              FUN_18004e494(&DAT_1802a1634,&DAT_180270252,10,0xd);
              MessageBoxW((HWND)0x0,(LPCWSTR)&DAT_1802a1654,(LPCWSTR)&DAT_1802a1634,0x10);
              FUN_18017b9e0();
              uVar3 = FUN_180183cf0();
              FUN_180184820(uVar3);
              local_308 = 0x85baa7d0c3be0879;
              local_310 = 0xc72504602331d2fb;
            }
            else if (uVar2 == 0x58df82a5776e250) {
              local_2d0 = local_2e0;
              local_308 = 0xbe3759d3ddae1c2;
              if (*local_2e0 == 0x5a4d) {
                local_308 = 0xfccf2416ec3057a2;
              }
              local_310 = 0x66d5c531e5797697;
            }
          }
          if ((longlong)uVar2 < 0x6d36b0acd8a39755) break;
          if (uVar2 == 0x6d36b0acd8a39755) {
            local_260 = local_2e8;
            local_308 = 0x8e8cccf5aae7bdc8;
            local_310 = 0x5093c9f5bb1d06b9;
          }
          else if (uVar2 == 0x7371df63161d925b) {
            local_2e8 = (short *)0x0;
            local_2f8 = 6;
            local_2fc = 4;
            *local_2f0 = local_2d8;
            uVar3 = FUN_180183cf0();
            FUN_180183d00(uVar3);
            FUN_18017a130();
            FUN_180207610(local_258,0,0x208);
            GetModuleFileNameW((HMODULE)0x0,local_258,0x104);
            local_2e0 = (short *)FUN_1801b2b70();
            local_308 = 0x15a1f34a23757474;
            if (local_2e0 == local_2e8) {
              local_308 = 0x7d1abbccaca00171;
            }
            local_310 = 0x102c0b6074039624;
          }
        }
        if (uVar2 != 0x138acab05e0b93ef) break;
        uVar3 = FUN_18004e770();
        FUN_180054370(uVar3);
        FUN_1801bb0c0();
        LOCK();
        *(undefined1 *)(local_2f0 + 1) = 1;
        UNLOCK();
        local_308 = 0x31065320425be1db;
        local_310 = 0x7399f090a2d43b59;
      }
      if (uVar2 != 0x5270809d5ce43427) break;
      uVar3 = FUN_180111340();
      FUN_180111a00(uVar3);
      cVar1 = FUN_1800f0ae0();
      local_308 = 0x5e29cae455c15869;
      if (cVar1 != '\0') {
        local_308 = 0xccdb300d11e4fd37;
      }
      local_310 = 0xdf51fabd4fef6ed8;
    }
  } while (uVar2 != 0x429fa3b0e08fda82);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_348)) {
    return;
  }
}



void FUN_180001ad0(int param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 ***local_98;
  uintptr_t local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  uintptr_t local_78;
  ulonglong local_70;
  uintptr_t local_60;
  ulonglong local_58;
  undefined8 local_50;

  local_50 = 0xfffffffffffffffe;
  local_60 = 0;
  local_58 = 0xf;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_a8 = *param_3;
    local_a0 = param_3[1];
    local_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = local_58;
    if (local_58 < local_a0) {
      FUN_180002240(&local_88,local_a0);
      local_78 = local_60;
    }
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_180003080(local_d0,&local_88,&local_a8,&local_c8,local_60);
    local_98 = &local_88;
    if (local_58 < local_70) {
      local_98 = local_88;
    }
    local_90 = local_78;
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_b8,&local_98);
    if (local_58 < local_70) {
      uVar4 = local_70 + 1;
      ppppuVar3 = (undefined8 ****)local_88;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_60);
        }
        uVar4 = local_70 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_180001ca0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void Unwind_180001ce0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x70);
  return;
}



void FUN_180001d20(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_38 [4];
  ulonglong local_18;
  undefined8 local_10;

  local_10 = 0xfffffffffffffffe;
  local_18 = 0xf;
  LOCK();
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = 0;
  UNLOCK();
  if ((bVar1 & 1) != 0) {
    uVar3 = FUN_18004e770();
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = local_18;
    FUN_180057820(uVar3,local_38);
    if (local_18 < (ulonglong)local_38[3]) {
      uVar5 = local_38[3] + 1;
      lVar4 = local_38[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar4) - 8U) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar5 = local_38[3] + 0x28;
      }
      thunk_FUN_1801f42e0(lVar4,uVar5);
    }
    cVar2 = FUN_1800eefe0(500);
    if (cVar2 == '\0') {
      uVar3 = FUN_1800c32a0();
      FUN_1800c6100(uVar3);
    }
    uVar3 = FUN_180100330();
    FUN_1800ffaf0(uVar3);
    FUN_1800f13b0();
    FUN_180174210();
    uVar3 = FUN_180175cb0();
    FUN_180175f60(uVar3);
    uVar3 = FUN_180177800();
    FUN_1801786a0(uVar3);
    FUN_1801bb700();
    FUN_1801ba380();
    uVar3 = FUN_180111340();
    FUN_180113e20(uVar3);
    uVar3 = FUN_180179ff0();
    FUN_18017a120(uVar3);
    FUN_18017b9e0();
    uVar3 = FUN_180183cf0();
    FUN_180184820(uVar3);
  }
  return;
}



void Unwind_180001ed0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void FUN_180001ef0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  uintptr_t local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;

  local_88 = 0x6253124dc837cbf3;
  local_90 = 0x88187bbe54a7c52e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_88 ^ 0x35ee164663ff3a5b;
          uVar1 = local_88 ^ local_90;
          local_90 = local_90 ^ 0x35ee164663ff3a5b;
          local_88 = uVar2;
          if (-0x16afe9b876a67023 < (longlong)uVar1) break;
          if (uVar1 == 0xca320048eea05879) {
            local_60 = *param_1;
            local_68 = local_70 + 1;
            local_88 = 0xb67715fdc7e8601f;
            if (0xfff < local_68) {
              local_88 = 0x7e890194237ff22;
            }
            local_90 = 0xe41cbb87e10c4a7e;
            local_50 = local_60;
          }
          else if (uVar1 == 0xe3f42b9ea33bb55c) {
            local_48 = *(longlong *)(local_50 + -8);
            local_88 = 0x6388085e0032326a;
            if ((local_50 - local_48) - 8U < 0x20) {
              local_88 = 0xc4da7a4aa2509f3f;
            }
            local_90 = 0x2d8a6c0d2b0910e1;
          }
          else if (uVar1 == 0xe52713cf69b6f7e9) {
            param_1[2] = local_78;
            *local_58 = local_80;
            *(undefined1 *)param_1 = 0;
            return;
          }
        }
        if (0x4e0264532b3b228a < (longlong)uVar1) break;
        if (uVar1 == 0xe950164789598fde) {
          local_68 = local_70 + 0x28;
          local_88 = 0x2520f63eaf2a6cca;
          local_90 = 0x774b584489ce46ab;
          local_60 = local_48;
        }
        else if (uVar1 == 0xea4b69f39c900edd) {
          local_78 = 0;
          local_80 = 0xf;
          local_58 = param_1 + 3;
          local_70 = param_1[3];
          local_88 = 0x8787edeac917229d;
          if (0xf < local_70) {
            local_88 = 0xa892fe6d4e018d0d;
          }
          local_90 = 0x62a0fe25a0a1d574;
        }
      }
      if (uVar1 != 0x526bae7a26e42a61) break;
      thunk_FUN_1801f42e0(local_60,local_68);
      local_88 = 0xa0c5d1a8bdc7cf88;
      local_90 = 0x45e2c267d4713861;
    }
  } while (uVar1 != 0x4e0264532b3b228b);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_78);
}



ulonglong * FUN_180002240(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  uintptr_t local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_100 = 0x626f662da391f6c3;
  local_108 = 0x2b60fbbfd3711bb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_100 ^ 0xe8b1822acc07ce7a;
          uVar1 = local_100 ^ local_108;
          local_108 = local_108 ^ 0xe8b1822acc07ce7a;
          local_100 = uVar3;
          if (-0x4175d83e90dcb94 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x329c0cbbe90767c5) {
            if ((longlong)uVar1 < -0x4e4c42a8badf5b60) {
              if (uVar1 == 0x96890ffe943dfa9b) {
                local_b8 = FUN_1801d61c8(local_d0);
                local_100 = 0xeb3c996f1a8b5eba;
                local_108 = 0x24199fc7cfc1c7ca;
                local_c0 = local_88;
              }
              else {
                if (uVar1 == 0x9387df29f94977f4) {
                  *param_1 = local_b0;
                  return param_1;
                }
                if (uVar1 == 0xa74e1259d9f41628) {
                  FUN_180002ac0();
                }
              }
            }
            else if (uVar1 == 0xb1b3bd574520a4a0) {
              local_80 = local_f0 + local_a0;
              local_100 = 0xd99a4ddf67576c43;
              local_108 = 0x14f9be9b71aff478;
              local_78 = local_48;
            }
            else if (uVar1 == 0xb690871c1337d6f6) {
              FUN_1802079d0(local_b0,param_1);
              local_100 = 0xaae55b1541399652;
              local_108 = 0x3962843cb870e1a6;
            }
            else if (uVar1 == 0xbfff1064f4069c6d) {
              std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
            }
          }
          else if ((longlong)uVar1 < -0x7273d6340baa4dc) {
            if (uVar1 == 0xcd63f34416f8983b) {
              thunk_FUN_1801f42e0(local_78,local_80);
              local_100 = 0x6c010001f08d4772;
              local_108 = 0xff86df2809c43086;
            }
            else if (uVar1 == 0xcf2506a8d54a9970) {
              local_b0 = local_b8;
              *local_70 = local_68;
              *local_60 = local_c0;
              local_100 = 0xb27ddc02303d999b;
              if (local_98 < local_f0) {
                local_100 = 0x532d1da12269d084;
              }
              local_108 = 0x4ed5b1e230a4f6d;
            }
          }
          else if (uVar1 == 0xf8d8c29cbf455b24) {
            local_48 = *(ulonglong *)(local_90 - 8);
            local_100 = 0x830da068f2ac3829;
            if ((local_90 - local_48) - 8 < 0x20) {
              local_100 = 0x171db18126d4a3ee;
            }
            local_108 = 0xa6ae0cd663f4074e;
          }
          else if (uVar1 == 0xfa3907a4f2bdf0c5) {
            local_100 = 0xd9a815d4a4c0c26b;
            if (local_d0 < 0xffffffffffffffd9) {
              local_100 = 0x190d81c33c72fff2;
            }
            local_108 = 0x665705b050c65e06;
            local_c8 = local_88;
          }
        }
        if ((longlong)uVar1 < 0x5731a8ccac69eae8) break;
        if ((longlong)uVar1 < 0x60d969965ea6e778) {
          if (uVar1 == 0x5731a8ccac69eae8) {
            local_100 = 0x811a5f859a496e0e;
            if (local_a8 < local_d0) {
              local_100 = 0xedaa57dffcc96450;
            }
            local_108 = 0x1793507b0e749495;
          }
          else if (uVar1 == 0x57c046bf01639fe9) {
            local_90 = *param_1;
            FUN_1802079d0(local_b0);
            local_80 = local_f0 + local_f8;
            local_100 = 0x84c8744df244c5b7;
            if (local_a8 < local_80) {
              local_100 = 0xb17345955bf906a8;
            }
            local_108 = 0x49ab8709e4bc5d8c;
            local_78 = local_90;
          }
        }
        else if (uVar1 == 0x7f5a84736cb4a1f4) {
          lVar2 = FUN_1801d61c8(local_a0 + local_c8);
          local_b8 = lVar2 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(local_b8 - 8) = lVar2;
          local_100 = 0x6ac50242efd0282b;
          local_108 = 0xa5e004ea3a9ab15b;
          local_c0 = local_c8;
        }
        else if (uVar1 == 0x60d969965ea6e778) {
          local_f8 = 1;
          local_e0 = 0;
          local_e8 = 0x7fffffffffffffff;
          local_98 = 0xf;
          local_a0 = 0x28;
          local_a8 = 0xfff;
          local_70 = param_1 + 2;
          local_d8 = param_1[2];
          local_100 = 0x22b718b6737b0593;
          if (0x7fffffffffffffff - local_d8 < param_2) {
            local_100 = 0xd736c6fca4b73487;
          }
          local_108 = 0x7078d4a57d4322af;
        }
      }
      if (0x25a3acbe91583f66 < (longlong)uVar1) break;
      if (uVar1 == 0xfbe8a27c16f2346d) {
        local_50 = local_f0 >> ((byte)local_f8 & 0x3f);
        local_100 = 0xa7f43aca353b532d;
        if ((local_50 ^ local_e8) < local_f0) {
          local_100 = 0xf9389153fc71290b;
        }
        local_108 = 0x8662152090c588ff;
LAB_1800028df:
        local_c8 = local_e8;
      }
      else if (uVar1 == 0x21962feaa5fedbd2) {
        local_88 = local_50 + local_f0;
        if (local_50 + local_f0 < local_58) {
          local_88 = local_58;
        }
        local_d0 = local_88 + local_f8;
        local_100 = 0x7ab71f98f99f274a;
        if (local_d0 == local_e0) {
          local_100 = 0xe2a3b1fc80bc54d2;
        }
        local_108 = 0x2d86b75455f6cda2;
        local_c0 = 0xffffffffffffffff;
        local_b8 = 0;
      }
    }
    if (uVar1 == 0x52cfcc130e38273c) {
      local_68 = local_d8 + param_2;
      local_60 = param_1 + 3;
      local_f0 = param_1[3];
      local_58 = local_98 | local_68;
      local_100 = 0xc3c7b675a0b64e5a;
      if ((longlong)local_68 < (longlong)local_e0) {
        local_100 = 0x4775907adaf0dbc3;
      }
      local_108 = 0x382f1409b6447a37;
      goto LAB_1800028df;
    }
    if (uVar1 == 0x25a3acbe91583f67) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e0);
    }
  } while( true );
}



void FUN_180002ac0(void)

{
  FUN_18004e1e3(&DAT_1802a1780,&DAT_180270429,0x17,0x10,&DAT_1802a1790);
  FUN_1801d7524(&DAT_1802a1780);
}



undefined8 *
FUN_180003080(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined **local_1d0;
  undefined1 *local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined ***local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0;
  local_58 = 0xf;
  puVar1 = local_1a8;
  local_1c0 = 0;
  local_1b8 = 0x100;
  local_1d0 = &PTR_FUN_180209858;
  local_80 = *param_4;
  uStack_78 = param_4[1];
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = 0;
  uStack_90 = 0;
  local_88 = &local_1d0;
  local_70 = param_5;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1c8 = puVar1;
  local_1b0 = param_2;
  FUN_180003350(&local_68,&local_a8);
  puVar5 = local_1b0;
  uVar4 = local_1c0;
  local_1c0 = local_50;
  lVar3 = local_1b0[2];
  if ((ulonglong)(local_1b0[3] - lVar3) < uVar4) {
    FUN_1800041c0(local_1b0,uVar4);
  }
  else {
    puVar6 = local_1b0;
    if (local_58 < (ulonglong)local_1b0[3]) {
      puVar6 = (undefined8 *)*local_1b0;
    }
    puVar2 = (undefined1 *)((longlong)puVar6 + lVar3);
    local_1b0[2] = lVar3 + uVar4;
    uVar7 = (longlong)puVar2 - (longlong)puVar1;
    if (puVar2 < puVar1 || (longlong)puVar2 - (longlong)puVar1 == 0) {
      uVar7 = local_50;
    }
    if (puVar2 < puVar1) {
      uVar7 = uVar4;
    }
    if (puVar1 + uVar4 <= puVar2) {
      uVar7 = uVar4;
    }
    puVar2[uVar4] = *(undefined1 *)((longlong)puVar6 + lVar3);
    FUN_1802079d0(puVar2,puVar1,uVar7);
    FUN_1802079d0(puVar2 + uVar7,puVar1 + uVar4 + uVar7,uVar4 - uVar7);
  }
  uVar4 = local_1c0;
  *param_1 = puVar5;
  if (local_1c0 != local_50) {
    local_1c0 = local_50;
    lVar3 = puVar5[2];
    local_1b0 = puVar5;
    if ((ulonglong)(puVar5[3] - lVar3) < uVar4) {
      FUN_1800041c0(puVar5,uVar4);
    }
    else {
      puVar6 = puVar5;
      if (local_58 < (ulonglong)puVar5[3]) {
        puVar6 = (undefined8 *)*puVar5;
      }
      puVar2 = (undefined1 *)((longlong)puVar6 + lVar3);
      puVar5[2] = lVar3 + uVar4;
      uVar7 = (longlong)puVar2 - (longlong)puVar1;
      if (puVar2 < puVar1 || (longlong)puVar2 - (longlong)puVar1 == 0) {
        uVar7 = local_50;
      }
      if (puVar2 < puVar1) {
        uVar7 = uVar4;
      }
      if (puVar1 + uVar4 <= puVar2) {
        uVar7 = uVar4;
      }
      puVar2[uVar4] = *(undefined1 *)((longlong)puVar6 + lVar3);
      FUN_1802079d0(puVar2,puVar1,uVar7);
      FUN_1802079d0(puVar2 + uVar7,puVar1 + uVar4 + uVar7,uVar4 - uVar7);
    }
  }
  return param_1;
}



void Unwind_1800032e0(void)

{
  Unwind_1801dd394();
}



void Unwind_180003310(undefined8 param_1,longlong param_2)

{
  FUN_180003d60(param_2 + 0x38);
  return;
}



void FUN_180003350(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char local_17a;
  char local_179;
  ulonglong local_178;
  ulonglong local_170;
  char local_162;
  char local_161;
  char *local_160;
  longlong local_158;
  undefined8 *local_150;
  char *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  ulonglong *local_130;
  ulonglong *local_128;
  char *local_120;
  ulonglong local_118;
  ulonglong local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_90;
  ulonglong local_88;
  ulonglong *local_80;
  longlong *local_78;
  ulonglong local_70;
  ulonglong *local_68;
  longlong *local_60;
  char *local_58;
  char *local_50;
  char *local_48;

  local_170 = 0xf634a757d18b8dfa;
  local_178 = 0xad42632f1d505fce;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_170 ^ 0x7a668727d87007e1;
              uVar2 = local_170 ^ local_178;
              local_178 = local_178 ^ 0x7a668727d87007e1;
              local_170 = uVar3;
              if ((longlong)uVar2 < -0xa9fb4f5b884c39) break;
              if ((longlong)uVar2 < 0x3c05e2d0fd41c67e) {
                if ((longlong)uVar2 < 0x3a9df865ad81bfc) {
                  if (uVar2 == 0xff5604b0a477b3c7) {
                    lVar1 = *local_78;
                    *local_130 = local_f0;
                    *(char *)(lVar1 + local_e8) = local_161;
                    local_170 = 0x34bbc7d425f2a8c5;
                    if (local_48 != local_b8) {
                      local_170 = 0x72c2828f9efb4208;
                    }
                    local_d0 = local_48 + 1;
                    local_178 = 0x716b5d09c42359f4;
                  }
                  else if (uVar2 == 0x2d1e2770dae1f62) {
                    lVar1 = *local_60;
                    *local_128 = local_118;
                    *(char *)(lVar1 + local_110) = local_162;
                    local_108 = local_58 + 1;
                    local_170 = 0xe1ea6a74c026ea81;
                    if (local_108 != local_160) {
                      local_170 = 0xbafc5927bdbca84;
                    }
                    local_178 = 0x9dc0fbcd3d51dd6c;
                  }
                }
                else if (uVar2 == 0x3a9df865ad81bfc) {
                  local_48 = local_d0;
                  local_161 = *local_d0;
                  local_e8 = *local_130;
                  local_f0 = local_158 + local_e8;
                  local_170 = 0xf2f9f3d86f25d8e1;
                  if (local_f0 <= *local_80) {
                    local_170 = 0xc9eb708ba3901265;
                  }
                  local_178 = 0x36bd743b07e7a1a2;
                  local_70 = local_f0;
                }
                else if (uVar2 == 0xd814b110ae7c598) {
                  local_170 = 0x4e608307d21b7373;
                  if (*local_120 != local_17a) {
                    local_170 = 0x1c6cdb80d01e53de;
                  }
                  local_178 = 0xa3bb7a1e66e1f0e0;
                }
                else if (uVar2 == 0x2bca872242fbe90f) {
                  local_160 = (char *)thunk_FUN_1801d7b80(local_b0,local_148,local_179);
                  local_100 = (char *)thunk_FUN_1801d7b80(local_b0,local_160,local_17a);
                  local_170 = 0xfc4b607390e191f3;
                  if (local_100 != local_160) {
                    local_170 = 0x992863bbdfd90587;
                  }
                  local_178 = 0xa52d816b2298c3f9;
                  local_f8 = local_b0;
                  local_e0 = local_f8;
                }
              }
              else if ((longlong)uVar2 < 0x5966e118b279520a) {
                if (uVar2 == 0x3c05e2d0fd41c67e) {
                  local_c0 = local_f8;
                  local_b8 = local_100;
                  local_120 = local_100 + 1;
                  local_170 = 0x9deb2d97c7259afc;
                  if (local_120 != local_160) {
                    local_170 = 0x2fbdc7187b3dfc5a;
                  }
                  local_178 = 0x223c8c0971da39c2;
                }
                else if (uVar2 == 0x45d09adde1d1f131) {
                  *local_150 = local_140;
                  local_f8 = local_b8 + 2;
                  local_100 = (char *)thunk_FUN_1801d7b80(local_f8,local_160,local_17a);
                  local_170 = 0x9c0253e8165e18f7;
                  if (local_100 != local_160) {
                    local_170 = 0xf961502059668c83;
                  }
                  local_178 = 0xc564b2f0a4274afd;
                  local_e0 = local_f8;
                }
              }
              else if (uVar2 == 0x5966e118b279520a) {
                local_50 = local_e0;
                local_138 = (undefined8 *)*local_150;
                local_170 = 0x70b8518a1d10aad9;
                if (local_e0 != local_160) {
                  local_170 = 0x8b4a0c1f60d84da7;
                }
                local_178 = 0xc92c033e0679d34;
              }
              else if (uVar2 == 0x7c2a91b9fd7737ed) {
                *local_150 = local_138;
                local_170 = 0xa31906da9806823f;
                if (local_160 != local_148) {
                  local_170 = 0x82e49d09e92e75a3;
                }
                local_178 = 0x74ae0b2c10023426;
                local_c8 = local_160;
              }
              else if (uVar2 == 0x5b76c478ccdbd234) {
                local_17a = '}';
                local_158 = 1;
                local_179 = '{';
                local_90 = (char *)*param_1;
                local_148 = local_90 + param_1[1];
                local_170 = 0x6837f7cdb39617ff;
                if (param_1[1] != 0) {
                  local_170 = 0x1434eeb1ad586671;
                }
                local_178 = 0xbf80fa3b3b92a1e6;
              }
            }
            if (-0x2848f20977fb49e8 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x544beb7569353869) {
              if (uVar2 == 0x87d8cc2c80bfd093) {
                local_128 = local_138 + 2;
                local_68 = local_138 + 3;
                local_60 = local_138 + 1;
                local_170 = 0x27f5e5f3ce706b70;
                local_178 = 0xb19adbac88fa7c98;
                local_108 = local_50;
              }
              else if (uVar2 == 0x966f3e5f468a17e8) {
                local_58 = local_108;
                local_162 = *local_108;
                local_110 = *local_128;
                local_118 = local_158 + local_110;
                local_170 = 0x4c8a5d004f09d0f2;
                if (local_118 <= *local_68) {
                  local_170 = 0xb5082991eeeae44c;
                }
                local_178 = 0xb7d9cbe6e344fb2e;
                local_88 = local_118;
              }
              else if (uVar2 == 0x9d28a9710fbf3a54) {
                local_b0 = local_d8;
                local_170 = 0x5d1ea07190f0c4b0;
                if (*local_d8 != local_179) {
                  local_170 = 0x809eb1762b276c3a;
                }
                local_178 = 0xab54365469dc8535;
                local_c8 = local_d8;
              }
            }
            else if (uVar2 == 0xabb4148a96cac797) {
              local_170 = 0xa87d4540fb462f9c;
              local_178 = 0x3555ec31f4f915c8;
              local_d8 = local_90;
              local_150 = (undefined8 *)(param_2 + 0x20);
            }
            else if (uVar2 == 0xc44487e368c27943) {
              (**(code **)*local_140)(local_140,local_70);
              local_e8 = *local_130;
              local_f0 = local_158 + local_e8;
              local_170 = 0xe0f1f286d55a5be;
              local_178 = 0xf1591b98c9221679;
            }
            else if (uVar2 == 0xbfd7a19eb6ffa33e) {
              FUN_18004e1e3(&DAT_1802a17c8,&DAT_1802704ef,0x1f,0x20,&DAT_1802a17e8);
              FUN_180004aa0(&DAT_1802a17c8);
            }
          }
          if ((longlong)uVar2 < -0x4d0929834c8525e) break;
          if (uVar2 == 0xfb2f6d67cb37ada2) {
            local_130 = local_140 + 2;
            local_80 = local_140 + 3;
            local_78 = local_140 + 1;
            local_170 = 0xd3a77533cb30ee5f;
            local_178 = 0xd00eaab591e8f5a3;
            local_d0 = local_c0;
          }
          else if (uVar2 == 0xfb5396e6ac4d2bdc) {
            (**(code **)*local_138)(local_138,local_88);
            local_110 = *local_128;
            local_118 = local_158 + local_110;
            local_170 = 0x85b83b39e44c9f7c;
            local_178 = 0x8769d94ee9e2801e;
          }
        }
        if (uVar2 != 0xeddbf919b4fa8393) break;
        local_140 = (undefined8 *)*local_150;
        local_170 = 0x51b3173b954c45bf;
        if (local_c0 != local_120) {
          local_170 = 0xef4ce081bfaa192c;
        }
        local_178 = 0x14638de6749db48e;
      }
      if (uVar2 != 0xf64a9625f92c4185) break;
      local_d8 = (char *)FUN_180004ae0(local_c8,local_148,param_2);
      local_170 = 0x9b61e963802e74d;
      if (local_d8 != local_148) {
        local_170 = 0x4329ba11bfb96b00;
      }
      local_178 = 0xde011360b0065154;
    }
  } while (uVar2 != 0xd7b70df68804b619);
  return;
}



void FUN_180003d60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;

  uVar3 = *(ulonglong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar1 = param_1 + 0x28;
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    lVar5 = puVar4[2];
    if ((ulonglong)(puVar4[3] - lVar5) < uVar3) {
      FUN_1800041c0(puVar4,uVar3,param_3,lVar5,uVar1,uVar3,0,0xfffffffffffffffe);
    }
    else {
      puVar6 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar6 = (undefined8 *)*puVar4;
      }
      uVar2 = (longlong)puVar6 + lVar5;
      puVar4[2] = lVar5 + uVar3;
      uVar7 = uVar2 - uVar1;
      if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
        uVar7 = 0;
      }
      if (uVar2 < uVar1) {
        uVar7 = uVar3;
      }
      if (uVar1 + uVar3 <= uVar2) {
        uVar7 = uVar3;
      }
      *(undefined1 *)(uVar3 + uVar2) = *(undefined1 *)((longlong)puVar6 + lVar5);
      FUN_1802079d0(uVar2,uVar1,uVar7);
      FUN_1802079d0(uVar7 + uVar2,uVar1 + uVar3 + uVar7,uVar3 - uVar7);
    }
    *(undefined8 **)(param_1 + 0x20) = puVar4;
  }
  return;
}



void Unwind_180003e60(void)

{
  Unwind_1801dd394();
}



void FUN_180003e80(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong *local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;

  local_90 = 0x57b65a00f7b3b532;
  local_98 = 0x72a5d98d5ed5f275;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x23d8aad582c9b45e;
          if ((longlong)uVar1 < 0x2e6b3b560e378911) break;
          if (uVar1 == 0x2e6b3b560e378911) {
            *local_60 = local_70;
            local_80 = param_1 + 0x28;
            local_58 = (longlong *)(param_1 + 0x20);
            local_78 = *(undefined8 **)(param_1 + 0x20);
            local_50 = local_78[3];
            local_48 = local_78 + 2;
            local_68 = local_78[2];
            local_90 = 0x950baf3dcedcdd90;
            if (local_88 <= local_50 - local_68) {
              local_90 = 0x5800d6ab9758e9ad;
            }
            local_98 = 0x6224f5ced7c15f22;
          }
          else if (uVar1 == 0x3a2423654099b68f) {
            puVar2 = local_78;
            if (0xf < local_50) {
              puVar2 = (undefined8 *)*local_78;
            }
            uVar1 = (longlong)puVar2 + local_68;
            *local_48 = local_88 + local_68;
            uVar3 = uVar1 - local_80;
            if (uVar1 <= local_80) {
              uVar3 = local_70;
            }
            if (uVar1 < local_80) {
              uVar3 = local_88;
            }
            if (param_1 + 0x128U <= uVar1) {
              uVar3 = local_88;
            }
            *(undefined1 *)((longlong)puVar2 + local_68 + 0x100) = *(undefined1 *)((longlong)puVar2 + local_68);
            FUN_1802079d0(uVar1,local_80,uVar3);
            FUN_1802079d0(uVar3 + uVar1,param_1 + uVar3 + 0x128,local_88 - uVar3);
            local_90 = 0x2de7b4e6dd6038d8;
            local_98 = 0x6d186ec3c5adb1f5;
          }
          else {
            local_90 = local_90 ^ 0x23d8aad582c9b45e;
            if (uVar1 == 0x40ffda2518cd892d) {
              *local_58 = (longlong)local_78;
              local_90 = 0x12fc833c5810243f;
              local_98 = 0xb79d4a4df62de7c4;
            }
          }
        }
        if (uVar1 != 0xf72f5af3191d82b2) break;
        FUN_1800041c0(local_78,local_88,local_80,local_68,local_80,local_88);
        local_90 = 0x1cca15364516d572;
        local_98 = 0x5c35cf135ddb5c5f;
      }
      if (uVar1 != 0x2513838da9664747) break;
      local_88 = 0x100;
      local_70 = 0;
      local_60 = (ulonglong *)(param_1 + 0x10);
      local_90 = 0xb8f94b3712e29697;
      if (*(longlong *)(param_1 + 0x10) != 0x100) {
        local_90 = 0x33f3b910b2e8dc7d;
      }
      local_98 = 0x969270611cd51f86;
    }
    local_90 = local_90 ^ 0x23d8aad582c9b45e;
  } while (uVar1 != 0xa561c971ae3dc3fb);
  return;
}



ulonglong *
FUN_1800041c0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
             longlong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uintptr_t local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;

  local_108 = 0x3543ffebbc33fa26;
  local_110 = 0x5152127d0b85aba8;
LAB_180004270:
  do {
    while( true ) {
      uVar3 = local_108 ^ 0x48f4ef83cf778744;
      uVar1 = local_108 ^ local_110;
      local_110 = local_110 ^ 0x48f4ef83cf778744;
      local_108 = uVar3;
      if ((longlong)uVar1 < -0x4a4a41730aca29a9) break;
      if ((longlong)uVar1 < 0x5e38dad86c29137b) {
        if ((longlong)uVar1 < -0x11e6c9526c51b7b6) {
          if (uVar1 == 0xb5b5be8cf535d657) {
            thunk_FUN_1801f42e0(local_78,local_80);
            local_108 = 0x3b4296c65e465313;
            local_110 = 0x149c58f2c951285d;
          }
          else if (uVar1 == 0xe290572aea38148a) {
            local_c0 = FUN_1801d61c8(local_d8);
            local_108 = 0xb0dad31eff027c42;
            local_110 = 0x163940256f464c03;
            local_c8 = local_88;
          }
        }
        else if ((longlong)uVar1 < 0x1281603e941df777) {
          if (uVar1 == 0xee1936ad93ae484a) {
            lVar2 = FUN_1801d61c8(local_98 + local_b8);
            local_c0 = lVar2 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(local_c0 - 8) = lVar2;
            local_108 = 0x1c2120bb03ab1687;
            local_110 = 0xbac2b38093ef26c6;
            local_c8 = local_b8;
          }
        }
        else {
          if (uVar1 == 0x2fdece3497177b4e) {
            *param_1 = local_b0;
            return param_1;
          }
          if (uVar1 == 0x1281603e941df777) {
            FUN_180002ac0();
          }
          if (uVar1 == 0x4610aedaac55a6c7) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e8);
          }
        }
      }
      else if ((longlong)uVar1 < 0x69269092872d43ea) {
        if (uVar1 == 0x5e38dad86c29137b) {
          local_58 = local_e0 + param_2;
          local_50 = param_1 + 3;
          local_f8 = param_1[3];
          local_48 = local_90 | local_58;
          local_108 = 0x23abee1e914eb874;
          if ((longlong)local_58 < (longlong)local_e8) {
            local_108 = 0x5bc75741ef948874;
          }
          local_110 = 0xb5de61ec7c3ac03e;
LAB_18000481a:
          local_b8 = local_f0;
        }
        else if (uVar1 == 0x6411ed96b7b6518e) {
          local_100 = 1;
          local_e8 = 0;
          local_f0 = 0x7fffffffffffffff;
          local_90 = 0xf;
          local_98 = 0x28;
          local_a0 = 0xfff;
          local_70 = param_1 + 2;
          local_e0 = param_1[2];
          local_108 = 0x5cc89581c4ed5ba3;
          if (0x7fffffffffffffff - local_e0 < param_2) {
            local_108 = 0x10712f673cd9bfaf;
          }
          local_110 = 0x2f04f59a8c448d8;
        }
      }
      else if (uVar1 == 0x69269092872d43ea) {
        local_108 = 0xdab7bf651ccdb569;
        if (local_a0 < local_d8) {
          local_108 = 0x955a710c50b0166a;
        }
        local_110 = 0x3827e84ff6f5a1e3;
      }
      else if (uVar1 == 0x7b0df29b3452e249) {
        local_60 = *(ulonglong *)(local_d0 - 8);
        local_108 = 0x9e51fffa9435df10;
        if ((local_d0 - local_60) - 8 < 0x20) {
          local_108 = 0x6d4401950c5b2a77;
        }
        local_110 = 0xd8415120386079d7;
      }
    }
    if (-0x596bae4fe28c2bb1 < (longlong)uVar1) {
      if ((longlong)uVar1 < -0x528266bc59ba4877) {
        if (uVar1 == 0xa6e3933b90443041) {
          local_b0 = local_c0;
          *local_70 = local_58;
          *local_50 = local_c8;
          local_108 = 0xfee98a6e84035685;
          if (local_90 < local_f8) {
            local_108 = 0xf88c6cb2aa57a87d;
          }
          local_110 = 0x6cc0669243c0c1b4;
        }
        else if (uVar1 == 0xa69451b01d73d450) {
          std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
        }
      }
      else if (uVar1 == 0xad7d9943a645b789) {
        local_108 = 0x84433452c6923b7b;
        if (local_d8 < 0xffffffffffffffd9) {
          local_108 = 0xccce534f484fa761;
        }
        local_110 = 0x22d765e2dbe1ef2b;
        local_b8 = local_88;
      }
      else if (uVar1 == 0xb50550b5343b53a0) {
        local_80 = local_f8 + local_98;
        local_108 = 0x5a6c39f883164a84;
        local_110 = 0xefd9877476239cd3;
        local_78 = local_60;
      }
      goto LAB_180004270;
    }
    if ((longlong)uVar1 < -0x6bb3f5df16689637) {
      if (uVar1 == 0x896e4a90bf102ed2) {
        local_88 = local_68 + local_f8;
        if (local_68 + local_f8 < local_48) {
          local_88 = local_48;
        }
        local_d8 = local_88 + local_100;
        local_108 = 0xe9aef5d16ab1946;
        if (local_d8 == local_e8) {
          local_108 = 0xc15fecf401c26aed;
        }
        local_110 = 0x67bc7fcf91865aac;
        local_c8 = 0xffffffffffffffff;
        local_c0 = 0;
      }
      else if (uVar1 == 0x9229ecfcc7c39731) {
        FUN_1802079d0(local_b0,param_1,param_4);
        FUN_1802079d0(local_b0 + param_4,param_5,param_6);
        FUN_1802079d0(local_b0 + param_4 + param_6,(longlong)param_1 + param_4);
        local_108 = 0xdfa1b292b7b2b360;
        local_110 = 0xf07f7ca620a5c82e;
      }
    }
    else if (uVar1 == 0x944c0a20e99769c9) {
      local_d0 = *param_1;
      FUN_1802079d0(local_b0,local_d0,param_4);
      FUN_1802079d0(local_b0 + param_4,param_5,param_6);
      FUN_1802079d0(local_b0 + param_4 + param_6,local_d0 + param_4);
      local_80 = local_f8 + local_100;
      local_108 = 0x3181a4dd71e12d3d;
      if (local_a0 < local_80) {
        local_108 = 0xff39e8cab0861923;
      }
      local_110 = 0x84341a5184d4fb6a;
      local_78 = local_d0;
    }
    else if (uVar1 == 0x96758ff2ed74784a) {
      local_68 = local_f8 >> ((byte)local_100 & 0x3f);
      local_108 = 0x941ef900c06e0ebe;
      if ((local_68 ^ local_f0) < local_f8) {
        local_108 = 0xf369853decd06826;
      }
      local_110 = 0x1d70b3907f7e206c;
      goto LAB_18000481a;
    }
  } while( true );
}



void FUN_180004aa0(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  std::exception::exception((exception *)&stack0xffffffffffffffd8,param_1);
  FUN_1801dd110((exception *)&stack0xffffffffffffffd8,&DAT_1802518c0);
}



char * FUN_180004ae0(longlong param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_128 [32];
  undefined *local_108;
  char local_f2;
  char local_f1;
  ulonglong local_f0;
  ulonglong local_e8;
  char *local_e0;
  longlong local_d8;
  char *local_d0;
  char *local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  ulonglong *local_b0;
  char *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  char *local_90;
  char *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58 [3];

  local_58[2] = DAT_1802a0400 ^ (ulonglong)auStack_128;
  local_e8 = 0x10c31279f36b0140;
  local_f0 = 0x451318b79a847352;
  local_90 = (char *)(param_1 + 1);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pcVar1 = local_e0;
              uVar4 = local_e8 ^ 0x278b3f317eaa3f1;
              uVar3 = local_e8 ^ local_f0;
              local_f0 = local_f0 ^ 0x278b3f317eaa3f1;
              local_e8 = uVar4;
              if (-0x28bd7defb0135f < (longlong)uVar3) break;
              if ((longlong)uVar3 < -0x3747aa08400321f2) {
                if ((longlong)uVar3 < -0x4bce5e59ef1221a9) {
                  if ((longlong)uVar3 < -0x59b10a4762d4faba) {
                    if (uVar3 == 0x88a81888f41cdbf7) {
                      (**(code **)*local_b8)(local_b8,local_60);
                      local_98 = *local_b0;
                      local_a0 = local_d8 + local_98;
                      local_e8 = 0xc58a6ca21c141b3c;
                      local_f0 = 0xe78b45fcdcedf2ba;
                    }
                    else if (uVar3 == 0x865aaf8c137f4782) {
                      local_108 = &DAT_1802a1824;
                      FUN_18004e1e3(&DAT_1802a1808,&DAT_180270587,0x1c,0x1a);
                      FUN_180004aa0(&DAT_1802a1808);
                    }
                  }
                  else if (uVar3 == 0xa64ef5b89d2b0546) {
                    local_c0 = local_58 + 1;
                    local_58[1] = 0xffffffffffffffff;
                    local_58[0] = param_3;
                    local_d0 = (char *)FUN_180006450(local_e0,param_2,local_58);
                    local_e8 = 0xf000edcc7eb8c812;
                    if (local_d0 != param_2) {
                      local_e8 = 0x605d3af5a13264fe;
                    }
                    local_f0 = 0x92604ce799f90ce3;
                  }
                  else if (uVar3 == 0xafbe6438512b3388) {
                    local_e8 = 0xc93b3402efc1386e;
                    if ('|' < local_f1) {
                      local_e8 = 0x5b3ed3d6addb7795;
                    }
                    local_f0 = 0x18361f5503de660;
                  }
                }
                else if ((longlong)uVar3 < -0x3fea02a91d741dd5) {
                  if (uVar3 == 0xb9815e9955689d8c) {
                    local_80 = (longlong *)(param_3 + 0x18);
                    local_78 = *(longlong *)(param_3 + 0x18);
                    local_e8 = 0xbc0830a5caf2cf72;
                    if (-1 < local_78) {
                      local_e8 = 0x9a6005540e645a12;
                    }
                    local_f0 = 0x7c1dcdf328792d59;
                  }
                  else if (uVar3 == 0xb431a1a610edde57) {
                    if (DAT_1802a0400 != (local_58[2] ^ (ulonglong)auStack_128)) {
                    }
                    return local_c8 + 1;
                  }
                }
                else if (uVar3 == 0xc62726647a31127f) {
                  local_f1 = *local_e0;
                  local_e8 = 0xfa39795493f8feaa;
                  local_f0 = 0x55871d6cc2d3cd22;
                }
                else if (uVar3 == 0xc015fd56e28be22b) {
                  local_108 = &DAT_1802a1a34;
                  FUN_18004e1e3(&DAT_1802a1a00,&DAT_180270990,0x11,0x31);
                  FUN_180004aa0(&DAT_1802a1a00);
                }
              }
              else if ((longlong)uVar3 < -0x10486d3b177abd55) {
                if (uVar3 == 0xc8b855f7bffcde0e) {
                  local_e8 = 0x822eb7937edfd512;
                  if (local_f1 != '{') {
                    local_e8 = 0x8808e0f0a39bed65;
                  }
                  local_f0 = 0xab10363c98c1ad16;
                }
                else if (uVar3 == 0xcdfe8038493945cd) {
                  local_88 = (char *)FUN_180006f10(param_3,*local_c0,local_d0 + 1,param_2);
                  local_e8 = 0xc4a59704e56a54f5;
                  if (local_88 != param_2) {
                    local_e8 = 0xad48aa4c1e9051dc;
                  }
                  local_f0 = 0x42ff3888f6151377;
                }
                else if (uVar3 == 0xe67dc8a7261d774b) {
                  *local_80 = local_d8 + local_78;
                  FUN_1800058d0(param_3,local_78,local_e0);
                  local_e8 = 0x2433884a17ae3363;
                  local_f0 = 0x900229ec0743ed34;
                  local_c8 = pcVar1;
                }
              }
              else if (uVar3 == 0xefb792c4e88542ab) {
                local_e8 = 0x312653c9586d8f3b;
                if (*local_88 != '}') {
                  local_e8 = 0x48abbec75b5d241b;
                }
                local_f0 = 0xcef1114b48226399;
                local_a8 = local_88;
              }
              else if (uVar3 == 0xf23d761238cb681d) {
                local_f2 = *local_d0;
                local_e8 = 0x215377a753a980c0;
                local_f0 = 0x2a1ca2b71a211d6b;
              }
              else if (uVar3 == 0xfd663ca9001ff28a) {
                local_108 = &DAT_1802a1804;
                FUN_18004e1e3(&DAT_1802a17ec,&DAT_180270548,0x12,0x17);
                FUN_180004aa0(&DAT_1802a17ec);
              }
            }
            if (0x289f4f8fa4e12a4c < (longlong)uVar3) break;
            if ((longlong)uVar3 < 0x2201295ec0f9e986) {
              if (uVar3 == 0xffd74282104feca2) {
                local_c8 = local_a8;
                local_e8 = 0x72f0198a4f5cf9a4;
                local_f0 = 0xc6c1b82c5fb127f3;
              }
              else if (uVar3 == 0xb4fd51049889dab) {
                local_e8 = 0x21cec72ffd4c95c9;
                if ('|' < local_f2) {
                  local_e8 = 0xdac88ea23b4ccc6;
                }
                local_f0 = 0x37e53b730ed19ae;
              }
              else if (uVar3 == 0xed2db5d1359d568) {
                local_e8 = 0x75fa468d386615c6;
                if (local_f2 != '}') {
                  local_e8 = 0x2eda15aceb64fa78;
                }
                local_f0 = 0x6455a234f85d035;
              }
            }
            else if (uVar3 == 0x2201295ec0f9e986) {
              lVar2 = *local_68;
              *local_b0 = local_a0;
              *(undefined1 *)(lVar2 + local_98) = 0x7b;
              *local_70 = local_b8;
              local_e8 = 0x68ce1c6ccea566e0;
              local_f0 = 0xdcffbdcade48b8b7;
              local_c8 = local_e0;
            }
            else if (uVar3 == 0x22b09498cda18c67) {
              local_e8 = 0xdfdb4eb9b168667c;
              if (local_f2 != ':') {
                local_e8 = 0x3aba810e5cb009fc;
              }
              local_f0 = 0x1225ce81f85123b1;
            }
            else if (uVar3 == 0x2318d6cc3b5a4073) {
              local_e8 = 0x63006df29f1f95e4;
              local_f0 = 0xc54e984a023490a2;
            }
          }
          if (0x5abdb223fde691f4 < (longlong)uVar3) break;
          if (uVar3 == 0x289f4f8fa4e12a4d) {
            local_e8 = 0xf4ff88b17189b714;
            local_f0 = 0x969f299a96c873e5;
          }
          else if (uVar3 == 0x293e81afe61e7804) {
            local_70 = (undefined8 *)(param_3 + 0x20);
            local_b8 = *(undefined8 **)(param_3 + 0x20);
            local_b0 = local_b8 + 2;
            local_68 = local_b8 + 1;
            local_98 = local_b8[2];
            local_a0 = local_d8 + local_98;
            local_e8 = 0x7e8cf5d2cb8d3013;
            if (local_a0 <= (ulonglong)local_b8[3]) {
              local_e8 = 0xd425c404ff680262;
            }
            local_f0 = 0xf624ed5a3f91ebe4;
            local_60 = local_a0;
          }
          else if (uVar3 == 0x55d00ace69ef7212) {
            local_d8 = 1;
            local_e0 = local_90;
            local_e8 = 0x78ef84516ddb3e35;
            if (local_90 == param_2) {
              local_e8 = 0x43ae9e9c17f5dec0;
            }
            local_f0 = 0xbec8a23517ea2c4a;
          }
        }
        if (uVar3 != 0x5abdb223fde691f5) break;
        local_e8 = 0x6e764149d161bb15;
        if (local_f1 != '}') {
          local_e8 = 0xf4efc91cbf5366ea;
        }
        local_f0 = 0xd7f71fd084092699;
      }
      if (uVar3 != 0x73bf1cae77e3c5f3) break;
      pcVar1 = local_d0;
      FUN_1800058d0(param_3,*local_c0,local_d0);
      local_e8 = 0x50326c9090bc72c6;
      local_f0 = 0xafe52e1280f39e64;
      local_a8 = pcVar1;
    }
  } while (uVar3 != 0x6260a12be741c4f1);
  local_108 = &DAT_1802a1848;
  FUN_18004e1e3(&DAT_1802a1828,&DAT_1802705da,0x1e,0x1e);
  FUN_180004aa0(&DAT_1802a1828);
}



undefined8 * FUN_180005770(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x1d4541d49dddfeb9;
  local_50 = 0x54e51bda8c79a6a5;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xd618d02c6e2f2011;
        if (uVar1 != 0x49a05a0e11a4581c) break;
        *param_1 = &std::exception::vftable;
        FUN_1801dd238(param_1 + 1);
        local_48 = 0x516a64ec464a647b;
        if ((param_2 & 1) == 0) {
          local_48 = 0x971b002016f310c3;
        }
        local_50 = 0x32c072cf814193f2;
      }
      if (uVar1 != 0x63aa1623c70bf789) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xfa3ab5d366b86406;
      local_50 = 0x5fe1c73cf10ae737;
    }
    local_48 = local_48 ^ 0xd618d02c6e2f2011;
  } while (uVar1 != 0xa5db72ef97b28331);
  return param_1;
}



void FUN_1800058d0(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_108 [32];
  undefined *local_e8;
  byte local_d9;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *local_70;
  byte local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_108;
  local_d0 = 0x5c784c8397ce380d;
  local_d8 = 0xf1e36e01c8e48926;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_d0 ^ 0x60fd141bfbdb2118;
              uVar4 = local_d0 ^ local_d8;
              local_d8 = local_d8 ^ 0x60fd141bfbdb2118;
              uVar2 = local_c8._4_4_;
              local_d0 = uVar3;
              if ((longlong)uVar4 < 0xee2b067d372817a) break;
              if ((longlong)uVar4 < 0x3caef2f26a4b5bb4) {
                if ((longlong)uVar4 < 0x251e9027748f6f96) {
                  if (uVar4 == 0xee2b067d372817a) {
                    local_c8 = *local_c0;
                    local_d0 = 0xbc427df3cfea9a94;
                    local_d8 = 0xbe1c72274951966c;
                  }
                  else if (uVar4 == 0x1b4bb34aa6d694e6) {
                    local_d0 = 0x6395c854d457c1c8;
                    if ((char)local_d9 < '\x06') {
                      local_d0 = 0xa069d37b6787b5bf;
                    }
                    local_d8 = 0xc2234e0a8768c08a;
                  }
                  else if (uVar4 == 0x23f7abdf39036abd) {
                    local_d0 = 0x2447a3693e2e7ae2;
                    if ((char)local_d9 < '\x04') {
                      local_d0 = 0x4d5fbedc559b5453;
                    }
                    local_d8 = 0x6b8830035124f4a7;
                  }
                }
                else if ((longlong)uVar4 < 0x26d78edf04bfa0f4) {
                  if (uVar4 == 0x251e9027748f6f96) {
                    local_d0 = 0xf34529b00b61ce0d;
                    if ((char)local_d9 < '\v') {
                      local_d0 = 0xeec5787dea0c5ce8;
                    }
                    local_d8 = 0xd57d7425640d82f0;
                  }
                  else if (uVar4 == 0x26385d956f6c4cfd) {
                    local_c8 = *local_c0;
                    local_d0 = 0x9155b613f883a84a;
                    local_d8 = 0x930bb9c77e38a4b2;
                  }
                }
                else if (uVar4 == 0x26d78edf04bfa0f4) {
                  local_d0 = 0x9309c6688f639c1b;
                  if ((char)local_d9 < '\x02') {
                    local_d0 = 0x7d759a48b42ca4a1;
                  }
                  local_d8 = 0x96476564b1ed4678;
                }
                else if (uVar4 == 0x3bb80c588e01de18) {
                  local_c8 = *local_c0;
                  local_d0 = 0x7dc8cb74536c448a;
                  local_d8 = 0x7f96c4a0d5d74872;
                }
              }
              else if ((longlong)uVar4 < 0x624a9d71e0ef7535) {
                if ((longlong)uVar4 < 0x47751635624be639) {
                  if (uVar4 == 0x3caef2f26a4b5bb4) {
                    uVar3 = *(ulonglong *)(param_1[6] + param_2 * 8);
                    local_c0 = (undefined8 *)((uVar3 & 0xfffffffffffffff) + param_1[6] + local_98 * 8);
                    local_d9 = (byte)(uVar3 >> 0x3c);
                    local_d0 = 0xb788852c000c848a;
                    local_d8 = 0x46e9908b86e4e3cc;
                  }
                  else if (uVar4 == 0x41749a85a1ddb8ad) {
                    local_c8 = CONCAT44(uVar2,*(undefined4 *)local_c0);
                    local_d0 = 0x9a7f434b83ad2df3;
                    local_d8 = 0x98214c9f0516210b;
                  }
                }
                else if (uVar4 == 0x47751635624be639) {
                  local_c8 = *local_c0;
                  local_d0 = 0x6eb83f06e90fc66;
                  local_d8 = 0x4b58c24e82bf09e;
                }
                else if (uVar4 == 0x4fcf936a6f0a8e45) {
                  local_d0 = 0x834eee5be67bfcbe;
                  if ((char)local_d9 < '\x05') {
                    local_d0 = 0xfc0f4e5ed156df0e;
                  }
                  local_d8 = 0x98055d1140ad6858;
                }
              }
              else if ((longlong)uVar4 < 0x65486d2542b669fb) {
                if (uVar4 == 0x624a9d71e0ef7535) {
                  local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)local_c0);
                  local_d0 = 0xffefc9f84619aa99;
                  local_d8 = 0xfdb1c62cc0a2a661;
                }
                else if (uVar4 == 0x640a134f91fbb756) {
                  local_c8 = *local_c0;
                  local_d0 = 0x4c7751b49b6abc21;
                  local_d8 = 0x4e295e601dd1b0d9;
                }
              }
              else if (uVar4 == 0x65486d2542b669fb) {
                local_d0 = 0x96d2995364712f8d;
                local_d8 = 0x322b8d766daa21a8;
              }
              else if (uVar4 == 0x739b6949f2f53953) {
                local_d0 = 0x1081a1e128a6120e;
                if ((char)local_d9 < '\t') {
                  local_d0 = 0x51722dcf461ee9bc;
                }
                local_d8 = 0x16073bfa24550f85;
              }
            }
            local_b8 = param_2;
            local_a8 = param_3;
            if (-0x2f38145c364d4bfb < (longlong)uVar4) break;
            if ((longlong)uVar4 < -0x5b06ebdaf624f1db) {
              if ((longlong)uVar4 < -0x5e4979a1acc0febe) {
                if (uVar4 == 0x972656b585ffa8aa) {
                  local_d0 = 0x81c02dae345237ea;
                  if ((char)local_d9 < '\n') {
                    local_d0 = 0xa7ca9afc2e18b3d0;
                  }
                  local_d8 = 0x3093537adb676ef3;
                }
                else if (uVar4 == 0x9759c986f57fdd23) {
                  local_d0 = 0xffac1341c99553f0;
                  if ((char)local_d9 < '\b') {
                    local_d0 = 0x535786a21308655f;
                  }
                  local_d8 = 0x8c377a083b606aa3;
                }
              }
              else if (uVar4 == 0xa1b6865e533f0142) {
                local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)local_c0);
                local_d0 = 0x26a274d0e362e6ea;
                local_d8 = 0x24fc7b0465d9ea12;
              }
              else if (uVar4 == 0xa39212235e25b1cc) {
                local_d0 = 0xa7a75976a4ba9dd4;
                if ((char)local_d9 < '\r') {
                  local_d0 = 0xc30d97a72423baec;
                }
                local_d8 = 0x7760b2d56d0829d2;
              }
            }
            else if ((longlong)uVar4 < -0x4eac812b10caa6e7) {
              if (uVar4 == 0xa9d06b6164c55157) {
                local_c8 = *local_c0;
                local_b0 = local_c0[1];
                lVar1 = *param_1;
                *param_1 = param_3;
                param_1[1] = param_1[1] + (lVar1 - param_3);
                local_d0 = 0x431353f68eaa0e6f;
                local_d8 = 0x414d5c2208110297;
              }
              else if (uVar4 == 0xad9b22825f2ab12b) {
                local_a0 = param_1 + 5;
                local_98 = param_1[5];
                local_d0 = 0xaeefc1896ce43d52;
                if (param_2 < local_98) {
                  local_d0 = 0x36b8275e0f7468c3;
                }
                local_d8 = 0xa16d5ac653f3377;
              }
              else if (uVar4 == 0xa4f9142509db0e25) {
                local_e8 = &DAT_1802a1860;
                FUN_18004e1e3(&DAT_1802a184c,&DAT_18027062e,0x18,0x14);
                FUN_180004aa0(&DAT_1802a184c);
              }
            }
            else if (uVar4 == 0xb1537ed4ef355919) {
              local_d0 = 0x68ee85f657e6f22f;
              if ((char)local_d9 < '\f') {
                local_d0 = 0xee6207f27d4c2c75;
              }
              local_d8 = 0xcb7c97d509c343e3;
            }
            else if (uVar4 == 0xb46d2572492b933e) {
              local_c8 = *local_c0;
              local_b0 = local_c0[1];
              local_d0 = 0x21432dc531477fe7;
              local_d8 = 0x231d2211b7fc731f;
            }
          }
          if (-0xe9eea58791798bb < (longlong)uVar4) break;
          if ((longlong)uVar4 < -0x209f0355d797f004) {
            if (uVar4 == 0xd0c7eba3c9b2b406) {
              local_d0 = 0x8f70c2e569002706;
              if (local_d9 == 0xd) {
                local_d0 = 0x43e8c4a14f731faa;
              }
              local_d8 = 0xea38afc02bb64efd;
            }
            else if (uVar4 == 0xd4f1b405a902b066) {
              local_c8 = CONCAT44(uVar2,*(undefined4 *)local_c0);
              local_d0 = 0xb2fe5c7c06b9f338;
              local_d8 = 0xb0a053a88002ffc0;
            }
          }
          else if (uVar4 == 0xdf60fcaa28680ffc) {
            local_c8 = CONCAT44(uVar2,*(undefined4 *)local_c0);
            local_d0 = 0x747c7f425faf60cc;
            local_d8 = 0x76227096d9146c34;
          }
          else if (uVar4 == 0xeb32ff2c05c1e2d9) {
            local_d0 = 0x1e6cfd2b914a3e11;
            if (local_d9 == 1) {
              local_d0 = 0xafd5240b7afee78c;
            }
            local_d8 = 0x7b24900ed3fc57ea;
          }
        }
        if ((longlong)uVar4 < 0x54ea30c3e8eda63) break;
        if (uVar4 == 0x54ea30c3e8eda63) {
          local_d0 = 0x42ff9117ce7f32c1;
          if ((char)local_d9 < '\x03') {
            local_d0 = 0xd69bbf5bcd00b16;
          }
          local_d8 = 0x4c1d21701d0db3bb;
        }
        else if (uVar4 == 0x6869a1b0cf31d8b) {
          local_c8 = *local_c0;
          local_d0 = 0x58e5530426c30cd8;
          local_d8 = 0x5abb5cd0a0780020;
        }
      }
      if (uVar4 != 0xf16115a786e86746) break;
      local_d0 = 0x5ea219ba48850bae;
      if ((char)local_d9 < '\a') {
        local_d0 = 0xea73e4d0f479c9b9;
      }
      local_d8 = 0xc9844f0fcd7aa304;
    }
  } while (uVar4 != 0x25e0fd486bb0cf8);
  local_68[0] = local_d9;
  local_60 = local_c8;
  local_58 = local_b0;
  local_90 = param_1[4];
  local_88 = (undefined4)*local_a0;
  uStack_84 = *(undefined4 *)((longlong)local_a0 + 4);
  uStack_80 = (undefined4)local_a0[1];
  uStack_7c = *(undefined4 *)((longlong)local_a0 + 0xc);
  local_78 = param_1[7];
  local_70 = param_1;
  FUN_180007cd0(local_68,&local_50,&local_90);
  param_1[4] = local_50;
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_108)) {
  }
  return;
}



byte * FUN_180006450(byte *param_1,byte *param_2,longlong *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte local_da;
  byte local_d9;
  ulonglong local_d8;
  ulonglong local_d0;
  char local_c8;
  byte local_c7;
  byte local_c6;
  byte local_c5;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  longlong local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  ulonglong local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined8 *local_50;
  byte *local_48;

  local_d0 = 0xa77d90b1a3e33e93;
  local_d8 = 0xebc8a2d5c2e07ffc;
LAB_180006520:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar4 = local_d0 ^ 0x9e7550a50b44c9fd;
          uVar3 = local_d0 ^ local_d8;
          local_d8 = local_d8 ^ 0x9e7550a50b44c9fd;
          local_d0 = uVar4;
          if ((longlong)uVar3 < 0x906a0de28445bc0) break;
          if ((longlong)uVar3 < 0x4cb532646103416f) {
            if ((longlong)uVar3 < 0x280126280233ff51) {
              if (uVar3 == 0x906a0de28445bc0) {
                local_88 = (ulonglong)local_b4;
                *local_50 = 0xffffffffffffffff;
                local_d0 = 0xb02014ef981d0d63;
                local_d8 = 0x9d8c57b85fff0f40;
                local_80 = local_78;
              }
              else if (uVar3 == 0x198e74ef390c23ad) {
                local_d0 = 0x6ed2cb5aa6595ed2;
                local_d8 = 0xaf0c311f8c386cea;
              }
              else if (uVar3 == 0x26f1539a288a9de9) {
                local_d0 = 0xb544c7f40774428;
                if (local_da == 0x30) {
                  local_d0 = 0xf6a2d5984839d0e4;
                }
                local_d8 = 0x6aedfdd6bbb818f1;
              }
            }
            else if (uVar3 == 0x280126280233ff51) {
              local_c0 = (local_b8 * 10 + (uint)local_c6) - 0x30;
              local_a8 = local_98 + 1;
              local_d0 = 0x4d9e0157c87c6eae;
              if (local_a8 == param_2) {
                local_d0 = 0xf3f4a4ba71fcfaad;
              }
              local_d8 = 0xb18331ec02e6f712;
              local_90 = local_48;
            }
            else if (uVar3 == 0x42779556731a0dbf) {
              local_d0 = 0xc4ad413cab86a10b;
              if ((int)local_c0 < (int)local_c4) {
                local_d0 = 0x8d16e58612cde266;
              }
              local_d8 = 0x657f3d7713bc8ffe;
              local_bc = local_c0;
              local_a0 = local_90;
            }
            else if (uVar3 == 0x2dac4357c7e20223) {
              param_3[1] = local_88;
              return local_80;
            }
          }
          else if ((longlong)uVar3 < 0x61b9b1a9fbcf5cd9) {
            if (uVar3 == 0x4cb532646103416f) {
              local_c7 = 10;
              local_c4 = 0;
              local_b0 = 0;
              local_c8 = -0x30;
              local_da = *param_1;
              local_d0 = 0x80f20d7a3da8aba3;
              local_d8 = 0x48f0f4e44295ef30;
              local_70 = param_1;
              local_68 = param_2;
            }
            else if (uVar3 == 0x552a51f37a3f0044) {
              local_d0 = 0xdf91b99422e9d54e;
              if (local_da == 0x7d) {
                local_d0 = 0xef9eedf38d48b25e;
              }
              local_d8 = 0x16c79610d377069f;
            }
            else if (uVar3 == 0x56bc04ad958c04fa) {
              local_d0 = 0x88638641399440bb;
              if ((byte)(local_da + local_c8) < local_c7) {
                local_d0 = 0x52e3bf28dc0f2570;
              }
              local_d8 = 0x7412ecb2f485b899;
            }
          }
          else if (uVar3 == 0x61b9b1a9fbcf5cd9) {
            local_48 = param_1 + ((longlong)local_68 - (longlong)local_70);
            local_d0 = 0x9fe5d4d7a2288b9f;
            local_d8 = 0xb7e4f2ffa01b74ce;
            local_c6 = local_da;
            local_b8 = local_c4;
            local_98 = param_1;
          }
          else if (uVar3 == 0x65a047d6185fc226) {
            local_d0 = 0xbf4aff4d3683f355;
            if (local_d9 == 0x7d) {
              local_d0 = 0xa67741910c956ca0;
            }
            local_d8 = 0xa6c48ba20f8fd0f8;
          }
          else if (uVar3 == 0x66a5a590f5a55403) {
            local_b8 = local_c0;
            local_d0 = 0x417630aa7320005c;
            if (0xccccccc < local_c0) {
              local_d0 = 0x811ece7370629295;
            }
            local_d8 = 0x697716827113ff0d;
            local_c6 = local_c5;
            local_98 = local_a8;
          }
        }
        if ((longlong)uVar3 < -0x1c97fd57e126f3c5) break;
        if ((longlong)uVar3 < -0x6a6841ca1c04b3f) {
          if ((longlong)uVar3 < -0x9a2585d2eebb805) {
            if (uVar3 == 0xf3604e14a16b58f8) {
              local_88 = local_58;
              *local_60 = local_58 + 1;
              local_d0 = 0xd8d70107149c294a;
              local_d8 = 0xf57b4250d37e2b69;
              local_80 = param_1;
            }
            else {
              if (uVar3 == 0xe36802a81ed90c3b) {
                puVar7 = &DAT_1802a1a34;
                puVar5 = &DAT_1802a1a00;
                puVar2 = &DAT_180270990;
                puVar1 = &DAT_1802a1a00;
                uVar6 = 0x11;
                goto LAB_180006eb7;
              }
              if (uVar3 == 0xe869d8f101716d98) {
                FUN_18004e1e3(&DAT_1802a1a38,&DAT_1802709ee,0x12,0x12,&DAT_1802a1a4c);
                FUN_180004aa0(&DAT_1802a1a38);
              }
            }
          }
          else if (uVar3 == 0xf65da7a2d11447fb) {
            local_d0 = 0x36562afc3270b63e;
            if ((char)local_d9 < '}') {
              local_d0 = 0xa55a3fcbe44fc46f;
            }
            local_d8 = 0x53f66d2a2a2f7418;
          }
          else if (uVar3 == 0xf6ac52e1ce60b077) {
            local_d0 = 0x5182c9164bb1d353;
            if (local_d9 == 0x3a) {
              local_d0 = 0x48bf77ca71a74ca6;
            }
            local_d8 = 0x480cbdf972bdf0fe;
          }
        }
        else if ((longlong)uVar3 < -0x38e950c32ee07de) {
          if (uVar3 == 0xf9597be35e3fb4c1) {
            local_60 = (longlong *)(*param_3 + 0x18);
            local_58 = *(ulonglong *)(*param_3 + 0x18);
            local_d0 = 0xd17ebf06fa0256cd;
            if ((longlong)local_58 < local_b0) {
              local_d0 = 0xc176f3ba45b0020e;
            }
            local_d8 = 0x221ef1125b690e35;
          }
          else if (uVar3 == 0xfc1d30bbca9a99bc) {
            local_90 = local_a8;
            local_c5 = *local_a8;
            local_d0 = 0x8f06be294b2b923c;
            if ((byte)(local_c5 + local_c8) < local_c7) {
              local_d0 = 0xabd48eefcd94cb80;
            }
            local_d8 = 0xcd712b7f38319f83;
          }
        }
        else if (uVar3 == 0xb3ca33031abc58) {
          local_50 = (undefined8 *)(*param_3 + 0x18);
          local_d0 = 0xd968d0872b7f895a;
          if (local_b0 < *(longlong *)(*param_3 + 0x18)) {
            local_d0 = 0x51a215c969485349;
          }
          local_d8 = 0xd06e7059033bd29a;
        }
        else if (uVar3 == 0xfc716af3cd11f822) goto LAB_180006e11;
      }
      if (-0x3e2105bad59ecdc9 < (longlong)uVar3) break;
      if ((longlong)uVar3 < -0x63b0d7b10c7e37eb) {
        if (uVar3 == 0x9077a25fe9865a29) {
          local_d0 = 0x4f0fde71070cafdd;
          if (local_da == 0x3a) {
            local_d0 = 0x7f008a16a8adc8cd;
          }
          local_d8 = 0x8659f1f5f6927c0c;
        }
        else if (uVar3 == 0x81cc65906a7381d3) {
          puVar7 = &DAT_1802a1a84;
          puVar5 = &DAT_1802a1a50;
          puVar2 = &DAT_180270a2c;
          puVar1 = &DAT_1802a1a50;
          uVar6 = 0x1f;
LAB_180006eb7:
          FUN_18004e1e3(puVar1,puVar2,uVar6,0x31,puVar7);
          FUN_180004aa0(puVar5);
        }
      }
      else if (uVar3 == 0x9c4f284ef381c815) {
        local_bc = local_c4;
        local_d0 = 0x929c44477d8b6fa3;
        local_d8 = 0x334e380cc5b14156;
        local_a0 = param_1 + 1;
      }
      else if (uVar3 == 0xa1d27c4bb83a2ef5) {
        local_78 = local_a0;
        local_b4 = local_bc;
        local_d0 = 0xd1a42456702b520c;
        if (local_a0 == param_2) {
          local_d0 = 0xdb25287ae906d532;
        }
        local_d8 = 0x1afbd23fc367e70a;
      }
    }
    if (-0x36a9d07b0e612c30 < (longlong)uVar3) {
      if (uVar3 == 0xc9562f84f19ed3d1) {
        local_d0 = 0x37641d9416e8264;
        local_d8 = 0x55ca4574d4e2869e;
      }
      else if (uVar3 == 0xcb5ff669b34cb506) {
        local_d9 = *local_78;
        local_d0 = 0xd045204e1d100172;
        local_d8 = 0x261887eccc044689;
      }
      goto LAB_180006520;
    }
    if (uVar3 == 0xc802f99e7f3d4493) {
      local_d0 = 0x578472dbb00c4589;
      if ((char)local_da < '}') {
        local_d0 = 0x92d9817723b51fe4;
      }
      local_d8 = 0x2ae2328ca3345cd;
    }
    else if (uVar3 == 0xc1defa452a613238) {
LAB_180006e11:
      FUN_18004e1e3(&DAT_1802a17ec,&DAT_180270548,0x12,0x17,&DAT_1802a1804);
      FUN_180004aa0(&DAT_1802a17ec);
    }
  } while( true );
}



char * FUN_180006f10(longlong *param_1,ulonglong param_2,longlong param_3,char *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_158 [32];
  undefined *local_138;
  byte local_121;
  ulonglong local_120;
  ulonglong local_118;
  undefined1 local_109;
  undefined8 *local_108;
  undefined8 local_100;
  longlong *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  byte local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 *local_80;
  longlong *local_78;
  longlong *local_70;
  byte local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_118 = 0x29e6c93afe5a37f7;
  local_120 = 0xa20281d757cfcf36;
  local_f0 = param_2;
  local_e8 = param_3;
  local_d0 = param_4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                pcVar4 = local_d0;
                plVar3 = local_f8;
                uVar6 = local_118 ^ 0xbab8e551a7d65f32;
                uVar5 = local_118 ^ local_120;
                local_120 = local_120 ^ 0xbab8e551a7d65f32;
                uVar2 = local_100._4_4_;
                local_118 = uVar6;
                if (0x142714ce787112e9 < (longlong)uVar5) break;
                if ((longlong)uVar5 < -0x2350a736056b6fee) {
                  if ((longlong)uVar5 < -0x6fc064c146b80fdd) {
                    if ((longlong)uVar5 < -0x74210e8edc6de3af) {
                      if (uVar5 == 0x844ed0e57cdb3a0f) {
                        local_100 = *local_108;
                        local_c0 = local_108[1];
                        local_118 = 0xfd8ed96b914afe51;
                        local_120 = 0x410837c5df8eff6e;
                      }
                      else if (uVar5 == 0x861077fd332b80c5) {
                        local_118 = 0x15b8a1badc68d00;
                        if ((char)local_121 < '\v') {
                          local_118 = 0x24f002b4e619ad38;
                        }
                        local_120 = 0xaf2ef3c5c58bb169;
                      }
                    }
                    else if (uVar5 == 0x8bdef17123921c51) {
                      local_100 = *local_108;
                      local_118 = 0xdf03236a682a1bc8;
                      local_120 = 0x6385cdc426ee1af7;
                    }
                    else if (uVar5 == 0x8be448eda995f8c1) {
                      local_109 = 0;
                      lVar1 = *param_1;
                      *param_1 = local_e8;
                      param_1[1] = param_1[1] + (lVar1 - local_e8);
                      local_f8 = param_1 + 4;
                      local_c8 = param_1[5];
                      local_118 = 0x977aa5ce1628d8f1;
                      if (local_f0 < local_c8) {
                        local_118 = 0xef4c48060bd1941b;
                      }
                      local_120 = 0xa58a7aa9a8f07238;
                    }
                  }
                  else if ((longlong)uVar5 < -0x43791151b13bfec1) {
                    if (uVar5 == 0xa9b199a34860cdb4) {
                      local_118 = 0xd50ab2fdedefe0dc;
                      if ((char)local_121 < '\b') {
                        local_118 = 0xe4fbd708484863e1;
                      }
                      local_120 = 0x802c835bd49a1f90;
                    }
                    else if (uVar5 == 0xae7579de684d3c69) {
                      local_100 = *local_108;
                      local_118 = 0x882197233c28874d;
                      local_120 = 0x34a7798d72ec8672;
                    }
                    else if (uVar5 == 0x903f9b3eb947f023) {
                      if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_158)) {
                        return local_d8;
                      }
                    }
                  }
                  else if (uVar5 == 0xbc86eeae4ec4013f) {
                    local_b8 = local_c0;
                    local_5c = 0;
                    local_58 = 0xffffffff;
                    local_54 = 0;
                    local_50 = 0;
                    local_4e = 1;
                    local_4d = 0x20;
                    local_4c = 0;
                    local_4a = 0;
                    local_80 = &local_5c;
                    local_70 = local_f8;
                    local_68 = local_121;
                    local_67 = local_109;
                    local_66 = local_109;
                    local_78 = param_1;
                    local_e0 = (char *)FUN_18001c690(local_e8,local_d0,&local_80);
                    local_118 = 0xe278e15d13bc538f;
                    if (local_e0 == pcVar4) {
                      local_118 = 0x83fddd420c41828e;
                    }
                    local_120 = 0xa2e3fcca3b3a1c1e;
                  }
                  else if (uVar5 == 0xc6f45634bd7ea401) {
                    local_118 = 0x3f07a0d53a06a061;
                    if ((char)local_121 < '\x03') {
                      local_118 = 0xeba8bfd3e2452827;
                    }
                    local_120 = 0x352ae2d296b3cdf0;
                  }
                }
                else if ((longlong)uVar5 < -0x156a46a9210800cc) {
                  if ((longlong)uVar5 < -0x22d60c97602ad691) {
                    if (uVar5 == 0xdcaf58c9fa949012) {
                      local_118 = 0x1b4903bf9ff1cee0;
                      if (local_121 == 0xd) {
                        local_118 = 0xa281b1fe50757c6c;
                      }
                      local_120 = 0x7e6068074a92773a;
                    }
                    else if (uVar5 == 0xdce1d9f91ae70b56) {
                      (*(code *)local_108[1])(param_1,local_f8,*local_108);
                      local_d8 = (char *)*param_1;
                      local_118 = 0x6538c7bdb9e17444;
                      local_120 = 0xf5075c8300a68467;
                    }
                  }
                  else if (uVar5 == 0xdd29f3689fd5296f) {
                    local_100 = CONCAT71(local_100._1_7_,*(undefined1 *)local_108);
                    local_118 = 0x51700a6fe5878f8f;
                    local_120 = 0xedf6e4c1ab438eb0;
                  }
                  else if (uVar5 == 0xde825d0174f6e5d7) {
                    local_100 = CONCAT44(uVar2,*(undefined4 *)local_108);
                    local_118 = 0x79642d55c226a061;
                    local_120 = 0xc5e2c3fb8ce2a15e;
                  }
                }
                else if ((longlong)uVar5 < -0x725788152e360c7) {
                  if (uVar5 == 0xea95b956def7ff34) {
                    local_100 = CONCAT71(local_100._1_7_,*(undefined1 *)local_108);
                    local_118 = 0x21581a3bed214f8f;
                    local_120 = 0x9ddef495a3e54eb0;
                  }
                  else if (uVar5 == 0xedf877cf3153ae80) {
                    local_100 = *local_108;
                    local_118 = 0x78db243a7e93af9c;
                    local_120 = 0xc45dca943057aea3;
                  }
                }
                else if (uVar5 == 0xf8da877ead1c9f39) {
                  local_100 = CONCAT44(uVar2,*(undefined4 *)local_108);
                  local_118 = 0x7ecf3c5d6cc3b0e4;
                  local_120 = 0xc249d2f32207b1db;
                }
                else if (uVar5 == 0xa2d4207acb56d91) {
                  local_100 = *local_108;
                  local_118 = 0xd0436dfdfa647d5c;
                  local_120 = 0x6cc58353b4a07c63;
                }
              }
              if ((longlong)uVar5 < 0x4ce77bbad60c0b4e) break;
              if ((longlong)uVar5 < 0x63f93441abd71a6b) {
                if ((longlong)uVar5 < 0x552631a63975ff4c) {
                  if (uVar5 == 0x4ce77bbad60c0b4e) {
                    local_118 = 0x7a88451a7657ee80;
                    if ((char)local_121 < '\x04') {
                      local_118 = 0x70097f52bd0cb67d;
                    }
                    local_120 = 0x1f04a87d88f5907;
                  }
                  else if (uVar5 == 0x4e5b02f2b596eb68) {
                    local_100 = *local_108;
                    local_118 = 0x6d472039549f28ab;
                    local_120 = 0xd1c1ce971a5b2994;
                  }
                }
                else if (uVar5 == 0x552631a63975ff4c) {
                  local_118 = 0xf290549c5d6cfbe2;
                  if ((char)local_121 < '\t') {
                    local_118 = 0x513321a1d9a9be0a;
                  }
                  local_120 = 0x1f6823536c3f5562;
                }
                else if (uVar5 == 0x565938669dbd8027) {
                  local_118 = 0xe29e77be0d01f65e;
                  if ((char)local_121 < '\x06') {
                    local_118 = 0xd5223d804c232005;
                  }
                  local_120 = 0x80bcee8d3f6096a;
                }
              }
              else if ((longlong)uVar5 < 0x65296bb8d563b9da) {
                if (uVar5 == 0x63f93441abd71a6b) {
                  local_118 = 0x9aa9c686aafd27c5;
                  if ((char)local_121 < '\r') {
                    local_118 = 0xc2484eaa2cb28dd8;
                  }
                  local_120 = 0x46069e4f5069b7d7;
                }
                else if (uVar5 == 0x64d754539cd27c71) {
                  local_100 = CONCAT44(local_100._4_4_,*(undefined4 *)local_108);
                  local_118 = 0xc6b7518d4a29aaf1;
                  local_120 = 0x7a31bf2304edabce;
                }
              }
              else if (uVar5 == 0x65296bb8d563b9da) {
                local_118 = 0xdf0a6dc3cedb4292;
                local_120 = 0xedfab2a47003e85b;
              }
              else if (uVar5 == 0x71f935d56583ef7a) {
                local_118 = 0x4c13d5542e3d8dd7;
                if ((char)local_121 < '\x02') {
                  local_118 = 0x91afe143abed5cd0;
                }
                local_120 = 0x8ae78360934329d6;
              }
              else if (uVar5 == 0x7b780f9daed8b787) {
                local_118 = 0x37bb166f05abac45;
                if ((char)local_121 < '\x05') {
                  local_118 = 0x58968be796ecddcc;
                }
                local_120 = 0x61e22e0998162c62;
              }
            }
            if ((longlong)uVar5 < 0x39040c9327a47e20) break;
            if ((longlong)uVar5 < 0x409b1d9728864f91) {
              if (uVar5 == 0x39040c9327a47e20) {
                local_118 = 0x22956fbeae55f283;
                if ((char)local_121 < '\f') {
                  local_118 = 0xc77c2c0236a9682d;
                }
                local_120 = 0x416c5bff0582e8e8;
              }
              else if (uVar5 == 0x3974a5ee0efaf1ae) {
                local_100 = *local_108;
                local_118 = 0x20b695024c8084a2;
                local_120 = 0x9c307bac0244859d;
              }
            }
            else if (uVar5 == 0x409b1d9728864f91) {
              local_118 = 0x1df4fcd2488d698b;
              if (*local_e0 == '}') {
                local_118 = 0xa8df56bdad1cb94;
              }
              local_120 = 0x3ceadd5a7ff6f71b;
            }
            else if (uVar5 == 0x4ac632afa321e623) {
              uVar5 = *(ulonglong *)(param_1[6] + local_f0 * 8);
              local_108 = (undefined8 *)((uVar5 & 0xfffffffffffffff) + param_1[6] + local_c8 * 8);
              local_121 = (byte)(uVar5 >> 0x3c);
              local_118 = 0xa8442b5ea180a69e;
              local_120 = 0x8be59947bbc8a722;
            }
          }
          if ((longlong)uVar5 < 0x23a1b2191a4801bc) break;
          if (uVar5 == 0x23a1b2191a4801bc) {
            local_118 = 0xcf07cd26e8b38999;
            if ((char)local_121 < '\a') {
              local_118 = 0x97c7a25246ce903d;
            }
            local_120 = 0xdb20d9e890c29b73;
          }
          else if (uVar5 == 0x36672831a5273c8f) {
            local_a0[0] = local_121;
            local_98 = local_100;
            local_90 = local_b8;
            local_b0 = local_f8;
            local_a8 = &local_5c;
            FUN_180027230(local_a0,&local_88,&local_b0);
            *plVar3 = local_88;
            local_118 = 0xdf8e402ffb8c8812;
            local_120 = 0x4fb1db1142cb7831;
            local_d8 = local_e0;
          }
          else if (uVar5 == 0x32f0df67bed8aac9) {
            local_138 = &DAT_1802a1860;
            FUN_18004e1e3(&DAT_1802a184c,&DAT_18027062e,0x18,0x14);
            FUN_180004aa0(&DAT_1802a184c);
          }
        }
        if (uVar5 != 0x142714ce787112ea) break;
        local_118 = 0xa5e74f575ca05946;
        if ((char)local_121 < '\n') {
          local_118 = 0x3552da673364ead2;
        }
        local_120 = 0x9ce343c47b042766;
      }
      if (uVar5 != 0x1b48622338ae7506) break;
      local_118 = 0x96b092fd368759ad;
      if (local_121 == 1) {
        local_118 = 0xb437e3b4ef87f4e;
      }
      local_120 = 0xf399f945e3e4e077;
    }
  } while (uVar5 != 0x211e2188377b9e90);
  local_138 = &DAT_1802a1848;
  FUN_18004e1e3(&DAT_1802a1828,&DAT_1802705da,0x1e,0x1e);
  FUN_180004aa0(&DAT_1802a1828);
}



longlong * FUN_180007cd0(char *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  char *pcVar9;
  char local_681;
  ulonglong local_680;
  ulonglong local_678;
  byte local_66d;
  undefined1 local_66c;
  char local_66b;
  char local_66a;
  char local_669;
  longlong local_668;
  uint local_65c;
  char local_658;
  undefined1 local_657;
  undefined1 local_656;
  undefined1 local_655;
  undefined1 local_654;
  undefined1 local_653;
  char local_652;
  undefined1 local_651;
  undefined1 local_650;
  char local_64f;
  char local_64e;
  char local_64d;
  uint local_64c;
  ulonglong local_648;
  uint local_63c;
  uint local_638;
  uint local_634;
  uintptr_t local_630;
  undefined8 *local_620;
  undefined1 *local_618;
  undefined8 *local_610;
  undefined1 *local_608;
  ulonglong *local_600;
  undefined8 *local_5f8;
  undefined8 *local_5f0;
  undefined8 *local_5e8;
  ulonglong *local_5e0;
  undefined8 *local_5d8;
  undefined1 *local_5d0;
  ulonglong *local_5c8;
  undefined8 *local_5c0;
  ulonglong *local_5b8;
  ulonglong *local_5b0;
  ulonglong *local_5a8;
  ulonglong *local_5a0;
  ulonglong *local_598;
  undefined8 *local_590;
  undefined8 *local_588;
  ulonglong *local_580;
  undefined1 *local_578;
  uint local_56c;
  longlong local_560;
  double local_558;
  undefined8 *local_550;
  ulonglong *local_548;
  double local_540;
  undefined1 *local_538;
  ulonglong *local_530;
  char *local_528;
  double local_520;
  ulonglong local_518;
  ulonglong local_510;
  undefined1 *local_508;
  undefined1 *local_500;
  undefined1 *local_4f8;
  ulonglong local_4f0;
  ulonglong local_4e8;
  undefined1 *local_4e0;
  undefined1 *local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  ulonglong local_4c0;
  ulonglong local_4b8;
  ulonglong local_4b0;
  undefined1 *local_4a8;
  ulonglong local_4a0;
  ulonglong *local_498;
  ulonglong local_490;
  ulonglong local_488;
  undefined1 *local_480;
  char *local_478;
  undefined1 *local_470;
  undefined2 *local_468;
  undefined1 *local_460;
  ulonglong local_458;
  ulonglong local_450;
  ulonglong local_448;
  undefined2 *local_440;
  undefined1 *local_438;
  undefined1 *local_430;
  undefined1 *local_428;
  undefined1 *local_420;
  ulonglong local_418;
  ulonglong local_410;
  ulonglong *local_408;
  undefined1 *local_400;
  ulonglong local_3f8;
  ulonglong local_3f0;
  undefined1 *local_3e8;
  char *local_3e0;
  undefined1 *local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  ulonglong local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  undefined1 local_398 [24];
  undefined1 local_380 [8];
  undefined1 local_378 [24];
  undefined1 local_360 [8];
  undefined1 *local_358;
  longlong local_350;
  longlong lStack_348;
  longlong local_340;
  undefined1 local_338;
  undefined1 local_337 [23];
  undefined1 local_320 [8];
  undefined8 local_318;
  ulonglong local_300;
  undefined1 *local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  ulonglong *local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  ulonglong local_2c0;
  undefined1 *local_2b8;
  ulonglong local_2b0;
  ulonglong *local_2a8;
  longlong *local_2a0;
  ulonglong local_298;
  char *local_290;
  ulonglong local_288;
  undefined1 *local_280;
  ulonglong *local_278;
  longlong *local_270;
  undefined1 *local_268;
  ulonglong local_260;
  ulonglong *local_258;
  longlong *local_250;
  ulonglong *local_248;
  longlong *local_240;
  longlong local_238;
  ulonglong local_230;
  ulonglong *local_228;
  longlong *local_220;
  ulonglong *local_218;
  longlong *local_210;
  ulonglong *local_208;
  longlong *local_200;
  char *local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char *local_1d0;
  ulonglong *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  ulonglong *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  ulonglong *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148 [24];
  undefined1 local_130 [8];
  undefined1 local_128 [24];
  undefined1 local_110 [40];
  undefined1 local_e8 [32];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  undefined1 local_48 [8];

  local_678 = 0x7b4c00870f24624d;
  local_680 = 0x638fe89c79bcd509;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  lVar4 = local_1b8;
                  lVar3 = local_238;
                  lVar2 = local_2c8;
                  lVar1 = local_2e8;
                  uVar8 = local_678 ^ 0x34955c65e3eacebe;
                  uVar6 = local_678 ^ local_680;
                  local_680 = local_680 ^ 0x34955c65e3eacebe;
                  local_678 = uVar8;
                  if (-0x13720549db3d4964 < (longlong)uVar6) break;
                  if ((longlong)uVar6 < -0x469647f6d32be347) {
                    if ((longlong)uVar6 < -0x58cc4275ad8ba9d4) {
                      if ((longlong)uVar6 < -0x6ab2718d2c60795b) {
                        if ((longlong)uVar6 < -0x7330bdc5e5564814) {
                          if (uVar6 == 0x8247721f220b2213) {
                            FUN_1800136f0(&local_358,local_398,local_380,local_540,local_65c,local_65c);
                            local_508 = local_358;
                            local_678 = 0xe104ff295689333e;
                            local_680 = 0x103bfba8efa1b8d7;
                          }
                          else if (uVar6 == 0x842ba72da85cf64e) {
                            local_678 = 0x6b662212412af156;
                            local_680 = 0x1ab0b28cfc2a224d;
                            local_408 = local_530;
                          }
                          else if (uVar6 == 0x847e7cbc2a2d6f3f) {
                            local_678 = 0x316dc87ef3290807;
                            if (local_681 < '\x05') {
                              local_678 = 0x5ffdffdb7f95b546;
                            }
                            local_680 = 0x8ef56d8979c03fc4;
                          }
                        }
                        else if ((longlong)uVar6 < -0x701203bd742541a8) {
                          if (uVar6 == 0x8ccf423a1aa9b7ec) {
                            (**(code **)*local_5c0)(local_5c0,local_230);
                            local_3b8 = *local_5e0;
                            local_3c0 = local_668 + local_3b8;
                            local_678 = 0xdb363163e51dbcd9;
                            local_680 = 0x149b549f4029d929;
                          }
                          else if (uVar6 == 0x8ebe8b695e383074) {
                            local_180 = local_438;
                            local_5c8 = local_5f8 + 2;
                            local_278 = local_5f8 + 3;
                            local_270 = local_5f8 + 1;
                            local_678 = 0x29ed316eeff7e7b0;
                            local_680 = 0x8110552cd7f6464f;
                            local_3d8 = &local_338;
                          }
                        }
                        else if (uVar6 == 0x8fedfc428bdabe58) {
                          FUN_1802079d0(local_3a8,local_608);
                          local_408 = (ulonglong *)(local_3a8 + lVar4);
                          local_678 = 0x1fafee1c2aaf7798;
                          if (&local_318 == local_408) {
                            local_678 = 0xa6be9a35dcd60738;
                          }
                          local_680 = 0x6e797e8297afa483;
                        }
                        else if (uVar6 == 0x926877a6a20bba07) {
                          FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
                          *(undefined1 *)(local_468 + 1) = DAT_1802a189a;
                          *local_468 = DAT_1802a1898;
                          local_470 = (undefined1 *)((longlong)local_468 + 3);
                          local_678 = 0x985a6a8a572d8ad7;
                          if (local_470 == local_378) {
                            local_678 = 0xe24483c313da78e0;
                          }
                          local_680 = 0x394596f605bb12c4;
                        }
                      }
                      else if ((longlong)uVar6 < -0x6158a57140e7ccf2) {
                        if (uVar6 == 0x954d8e72d39f86a5) {
                          local_678 = 0x5e4d54b412df7665;
                          if (local_681 < '\a') {
                            local_678 = 0xfb1f4740763b562c;
                          }
                          local_680 = 0x45f5289daa79f93a;
                        }
                        else if (uVar6 == 0x97d11154b9ffeb16) {
                          local_158 = local_3e8;
                          local_598 = local_5d8 + 2;
                          local_208 = local_5d8 + 3;
                          local_200 = local_5d8 + 1;
                          local_678 = 0x254b38e5c4e5862c;
                          local_680 = 0xffa5b0c4bf1217ab;
                          local_428 = local_128;
                        }
                        else if (uVar6 == 0x9c2b67efae82d47d) {
                          local_160 = local_400;
                          local_651 = *local_400;
                          local_3b8 = *local_5e0;
                          local_3c0 = local_668 + local_3b8;
                          local_678 = 0xd98b1eaeaa586916;
                          if (*local_2a8 < local_3c0) {
                            local_678 = 0x9ae9396815c5bb0a;
                          }
                          local_680 = 0x16267b520f6c0ce6;
                          local_230 = local_3c0;
                        }
                      }
                      else if ((longlong)uVar6 < -0x5df8ebd3aaf43e70) {
                        if (uVar6 == 0x9ea75a8ebf18330e) {
                          *param_2 = (longlong)local_5d8;
                          local_678 = 0x8d7daea065ad2e03;
                          local_680 = 0x7e81511405ee3702;
                        }
                        else if (uVar6 == 0xa11ffc7c52969813) {
                          local_188 = local_470;
                          local_678 = 0xa204a5fbe1cf0e5c;
                          if (local_378 == local_470) {
                            local_678 = 0xdb9abd9f7662001;
                          }
                          local_680 = 0x7ca9047dad77e4ba;
                        }
                      }
                      else if (uVar6 == 0xa207142c550bc190) {
                        lVar1 = *local_250;
                        *local_5b8 = local_4f0;
                        *(undefined1 *)(lVar1 + local_4e8) = local_657;
                        local_4f8 = local_1a8 + 1;
                        local_678 = 0xbea6d2e6c0844cfb;
                        if (local_4f8 == local_170) {
                          local_678 = 0xc9b85cf5a41a5ad;
                        }
                        local_680 = 0x11ac4979b92b1042;
                      }
                      else if (uVar6 == 0xa391a66d97538dc0) {
                        FUN_1802079d0(local_128,local_5d0);
                        local_3e8 = local_128 + lVar2;
                        local_678 = 0x67342fe337392335;
                        local_680 = 0xf0e53eb78ec6c823;
                      }
                    }
                    else if ((longlong)uVar6 < -0x50f564608650a347) {
                      if ((longlong)uVar6 < -0x54c4385b52c1e87b) {
                        if (uVar6 == 0xa733bd8a5274562c) {
                          local_580 = local_590 + 2;
                          local_1c8 = local_590 + 3;
                          local_1c0 = local_590 + 1;
                          local_678 = 0xeb10041e5e855e4b;
                          local_680 = 0x56851d0269d595ee;
                          local_480 = local_1e0;
                        }
                        else if (uVar6 == 0xa8fd64423801a1ff) {
                          local_150 = local_3d8;
                          local_650 = *local_3d8;
                          local_4c0 = *local_5c8;
                          local_4c8 = local_668 + local_4c0;
                          local_678 = 0x6adcc6ed5e69f335;
                          if (*local_278 < local_4c8) {
                            local_678 = 0xa5578faec0cd8cab;
                          }
                          local_680 = 0x86513c5b7aab45a8;
                          local_1e8 = local_4c8;
                        }
                        else if (uVar6 == 0xab0b8db92e84e6e9) {
                          local_678 = 0xb03b89f00bc01820;
                          if (local_681 == '\r') {
                            local_678 = 0x660f83fcf473e834;
                          }
                          local_680 = 0x84bad720478010be;
                        }
                      }
                      else if ((longlong)uVar6 < -0x53a3b824b7b5f132) {
                        if (uVar6 == 0xab3bc7a4ad3e1785) {
                          local_5d8 = (undefined8 *)*param_3;
                          local_460 = local_48;
                          local_678 = 0xbd8106ae4a6bb8a7;
                          local_680 = 0xb16df001ef59e77e;
                          local_458 = *(ulonglong *)(param_1 + 8);
                          local_280 = local_460;
                        }
                        else if (uVar6 == 0xab7fb9745b1c8b69) {
                          FUN_18000e5f0(param_2,*param_3,*(undefined4 *)(param_1 + 8));
                          local_678 = 0x6f82ac861687c741;
                          local_680 = 0x9c7e533276c4de40;
                        }
                      }
                      else if (uVar6 == 0xac5c47db484a0ece) {
                        local_1a0 = local_4e0;
                        local_656 = *local_4e0;
                        local_510 = *local_5a8;
                        local_518 = local_668 + local_510;
                        local_678 = 0x2c46e3043b802ee0;
                        if (*local_228 < local_518) {
                          local_678 = 0x113b25c7d7fd5451;
                        }
                        local_680 = 0x63d18eb6e154757f;
                        local_2e0 = local_518;
                      }
                      else if (uVar6 == 0xae2fef87c8727edc) {
                        (**(code **)*local_5e8)(local_5e8,local_288);
                        local_410 = *local_5a0;
                        local_418 = local_668 + local_410;
                        local_678 = 0x5964f2b216b59a8e;
                        local_680 = 0x9e5c94aa893086a6;
                      }
                    }
                    else if ((longlong)uVar6 < -0x4dd087991f855870) {
                      if (uVar6 == 0xaf0a9b9f79af5cb9) {
                        local_1a8 = local_4f8;
                        local_657 = *local_4f8;
                        local_4e8 = *local_5b8;
                        local_4f0 = local_668 + local_4e8;
                        local_678 = 0x35dc5f598686526;
                        if (*local_258 < local_4f0) {
                          local_678 = 0xc3e708331058a51b;
                        }
                        local_680 = 0xa15ad1d9cd63a4b6;
                        local_2f0 = local_4f0;
                      }
                      else if (uVar6 == 0xaf27d83198514f97) {
                        lVar1 = *local_1c0;
                        *local_580 = local_3d0;
                        *(undefined1 *)(lVar1 + local_3c8) = local_654;
                        local_480 = local_190 + 1;
                        local_678 = 0xd884acde03df857c;
                        if (local_480 == local_1d8) {
                          local_678 = 0xc09b4c6b8955251;
                        }
                        local_680 = 0x6511b5c2348f4ed9;
                      }
                      else if (uVar6 == 0xb2269238cafbecf6) {
                        FUN_1802079d0(local_148,local_618);
                        local_420 = local_148 + lVar1;
                        local_678 = 0x84c3f8c1f080aa55;
                        local_680 = 0x833454cdc0f7481f;
                      }
                    }
                    else if ((longlong)uVar6 < -0x4bb8a20c7b9c579d) {
                      if (uVar6 == 0xb22f7866e07aa790) {
                        lVar1 = local_550[1];
                        *local_548 = local_3f8;
                        *(char *)(lVar1 + local_3f0) = local_658;
                        *param_2 = (longlong)local_550;
                        local_678 = 0xa0d76b1f5149e26;
                        local_680 = 0xf9f1890595578727;
                      }
                      else if (uVar6 == 0xb40e10265d3136d6) {
                        local_540 = *(double *)(param_1 + 8);
                        local_610 = (undefined8 *)*param_3;
                        local_678 = 0x76bb30c1648330a1;
                        if (NAN(local_540) || NAN(local_558)) {
                          local_678 = 0x3397f77300e72a2b;
                        }
                        local_680 = 0xf4fc42de468812b2;
                      }
                    }
                    else if (uVar6 == 0xb4475df38463a863) {
                      local_678 = 0xb056d2f57b60c221;
                      if (local_681 < '\t') {
                        local_678 = 0xd4d5dd3fdfb7485;
                      }
                      local_680 = 0xb9434df5a0ca4253;
                    }
                    else if (uVar6 == 0xb8b898030e3c100e) {
                      local_4a0 = *(ulonglong *)(param_1 + 8);
                      local_5f0 = (undefined8 *)*param_3;
                      local_530 = &local_300;
                      local_678 = 0xcb8ad09a8a37e010;
                      if ((longlong)local_4a0 < (longlong)local_630) {
                        local_678 = 0x510f0b66e98d9f48;
                      }
                      local_680 = 0xd47730ee7d2730a;
                      local_4a8 = (undefined1 *)&local_318;
                      local_2c0 = local_4a0;
                    }
                  }
                  else if ((longlong)uVar6 < -0x345578dc2326dab1) {
                    if ((longlong)uVar6 < -0x3ca21bec6ac15abd) {
                      if ((longlong)uVar6 < -0x426ae6e3c8af345b) {
                        if (uVar6 == 0xb969b8092cd41cb9) {
                          local_528 = *(char **)(param_1 + 8);
                          local_5e8 = (undefined8 *)*param_3;
                          local_678 = 0xf27d8710d8fb4a0;
                          if (local_528 == (char *)0x0) {
                            local_678 = 0xceaf050781ee2120;
                          }
                          local_680 = 0x75ff7ef945f560e;
                        }
                        else if (uVar6 == 0xba8edda76e714a66) {
                          FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
                          *(undefined1 *)(local_440 + 1) = DAT_1802a189a;
                          *local_440 = DAT_1802a1898;
                          local_508 = (undefined1 *)((longlong)local_440 + 3);
                          local_678 = 0xb4fb91ee94ef2af4;
                          if (local_508 == local_398) {
                            local_678 = 0xc783e7700fcc830e;
                          }
                          local_680 = 0x45c4956f2dc7a11d;
                        }
                        else if (uVar6 == 0xbc079eed40a8c50b) {
                          (**(code **)*local_588)(local_588,local_1f0);
                          local_488 = *local_600;
                          local_490 = local_668 + local_488;
                          local_678 = 0x8121ffffbaae2068;
                          local_680 = 0xfeabd11f1b75facd;
                        }
                      }
                      else if ((longlong)uVar6 < -0x406d84b6c1492bf6) {
                        if (uVar6 == 0xbd95191c3750cba5) {
                          local_190 = local_480;
                          local_654 = *local_480;
                          local_3c8 = *local_580;
                          local_3d0 = local_668 + local_3c8;
                          local_678 = 0xcaa4bd2f1c74d83e;
                          if (*local_1c8 < local_3d0) {
                            local_678 = 0x5b50a27cfb31343c;
                          }
                          local_680 = 0x6583651e842597a9;
                          local_298 = local_3d0;
                        }
                        else if (uVar6 == 0xbeea6fdddc42af16) {
                          local_678 = 0x8b2e568ebad68a0a;
                          if (local_681 < '\x03') {
                            local_678 = 0xd692dc21d91eced;
                          }
                          local_680 = 0xf502a3290fbe535;
                        }
                      }
                      else if (uVar6 == 0xbf927b493eb6d40a) {
                        local_578 = local_3b0 + -1;
                        local_3b0[-1] = (byte)(local_634 % local_64c) | local_66d;
                        local_678 = 0x1fb329195c5c26d4;
                        if (local_634 < local_64c) {
                          local_678 = 0xc506642a3c48fa1f;
                        }
                        local_680 = 0xa021525062eaf2de;
                        local_634 = local_634 / local_64c;
                        local_3b0 = local_578;
                      }
                      else if (uVar6 == 0xbf98a5f78ae937c3) {
                        local_678 = 0x7f8e69259cca2e62;
                        if (local_681 < '\x06') {
                          local_678 = 0x5a4ba6c413383e9e;
                        }
                        local_680 = 0x998102d88ab50273;
                      }
                    }
                    else if ((longlong)uVar6 < -0x38c799e7607ae3d8) {
                      if (uVar6 == 0xc35de413953ea543) {
                        *param_2 = (longlong)local_588;
                        local_678 = 0xbdfae27adac11686;
                        local_680 = 0x4e061dceba820f87;
                      }
                      else if (uVar6 == 0xc3caa41c998d3ced) {
                        local_588 = (undefined8 *)*param_3;
                        pcVar9 = (char *)&DAT_1802a1870;
                        if (param_1[8] != '\0') {
                          pcVar9 = (char *)&DAT_1802a1864;
                        }
                        FUN_18004e1e3(&DAT_1802a1864,&DAT_18027066a,0x19,5,&DAT_1802a186c);
                        FUN_18004e1e3(&DAT_1802a1870,&DAT_180270698,0x11,6,&DAT_1802a1878);
                        local_64f = *pcVar9;
                        local_678 = 0x8e4aaa44b10134bd;
                        if (local_64f == local_66b) {
                          local_678 = 0x79367a73a730a334;
                        }
                        local_680 = 0xba6b9e60320e0677;
                        local_1d0 = pcVar9;
                      }
                      else if (uVar6 == 0xc6cda3946de5931a) {
                        local_3a8 = local_4a8;
                        local_4d8 = local_88;
                        local_678 = 0xdacccb0e4884f7c;
                        local_680 = 0x4642d6f686d0dc90;
                        local_4d0 = local_4a0;
                        local_2b8 = local_4d8;
                      }
                    }
                    else if ((longlong)uVar6 < -0x37381b48b4865c45) {
                      if (uVar6 == 0xc73866189f851c28) {
                        lVar1 = *local_210;
                        *local_5a0 = local_418;
                        *(char *)(lVar1 + local_410) = local_64e;
                        local_66a = *local_290;
                        local_678 = 0x105f097d96c7aa84;
                        if (local_66a == local_66b) {
                          local_678 = 0x251560559750cb9f;
                        }
                        local_680 = 0x1b8c80d1eb50b392;
                        local_478 = local_290;
                      }
                      else if (uVar6 == 0xc76bb5ad466f3899) {
                        uVar5 = FUN_1801e13b0(local_540);
                        local_678 = 0x3865785d63950ddc;
                        if (uVar5 == local_65c) {
                          local_678 = 0x94dcfd28306c1f4d;
                        }
                        local_680 = 0x2e52208f5e1d552b;
                        local_440 = (undefined2 *)local_398;
                      }
                    }
                    else if (uVar6 == 0xc8c7e4b74b79a3bb) {
                      *param_2 = (longlong)local_5f0;
                      local_678 = 0x79c759bf3938e2d5;
                      local_680 = 0x8a3ba60b597bfbd4;
                    }
                    else if (uVar6 == 0xc9f0f2e815b1772e) {
                      FUN_18004e1e3(&DAT_1802a187c,&DAT_1802706c7,0x1c,0x18,&DAT_1802a1894);
                      FUN_180004aa0(&DAT_1802a187c);
                    }
                  }
                  else if ((longlong)uVar6 < -0x1d4aab234c0c0776) {
                    if ((longlong)uVar6 < -0x251177de84086e79) {
                      if (uVar6 == 0xcbaa8723dcd9254f) {
                        local_618 = local_500 + -1;
                        local_500[-1] = (byte)(local_63c % local_64c) | local_66d;
                        local_678 = 0x44c612bdb1ecddf1;
                        if (local_63c < local_64c) {
                          local_678 = 0x6f0f5dae9e321264;
                        }
                        local_680 = 0x8f6c959e6d35f8be;
                        local_63c = local_63c / local_64c;
                        local_500 = local_618;
                      }
                      else if (uVar6 == 0xcfad65fca53465f0) {
                        lVar1 = *local_2a0;
                        *local_5e0 = local_3c0;
                        *(undefined1 *)(lVar1 + local_3b8) = local_651;
                        local_400 = local_160 + 1;
                        local_678 = 0x63f8d1265b1a3581;
                        if (local_400 == local_188) {
                          local_678 = 0x8ec3196daf892547;
                        }
                        local_680 = 0xffd3b6c9f598e1fc;
                      }
                      else if (uVar6 == 0xd108925206558a82) {
                        local_678 = 0x798b7c92ec2a443a;
                        if (local_681 < '\x04') {
                          local_678 = 0x6a0823354f2843b1;
                        }
                        local_680 = 0xd2b0bb36411453bf;
                      }
                    }
                    else if ((longlong)uVar6 < -0x21525e79b347151a) {
                      if (uVar6 == 0xdaee88217bf79187) {
                        local_178 = local_428;
                        local_653 = *local_428;
                        local_4b0 = *local_598;
                        local_4b8 = local_668 + local_4b0;
                        local_678 = 0x55353d3f9a9ddd6e;
                        if (*local_208 < local_4b8) {
                          local_678 = 0xd5ce8064974b2e44;
                        }
                        local_680 = 0x320391bd58b7c6b2;
                        local_260 = local_4b8;
                      }
                      else if (uVar6 == 0xdb01153516616a24) {
                        FUN_1800136f0(&local_358,local_378,local_360,local_520,local_65c,local_65c);
                        local_678 = 0xbed4f7447c60d62f;
                        local_680 = 0x1fcb0b382ef64e3c;
                        local_470 = local_358;
                      }
                    }
                    else if (uVar6 == 0xdeada1864cb8eae6) {
                      local_5e0 = local_5c0 + 2;
                      local_2a8 = local_5c0 + 3;
                      local_2a0 = local_5c0 + 1;
                      local_678 = 0xf6a645455202850f;
                      local_680 = 0x6a8d22aafc805172;
                      local_400 = local_378;
                    }
                    else if (uVar6 == 0xe063c830f307eada) {
                      local_2e8 = (longlong)local_2f8 - (longlong)local_618;
                      local_678 = 0x6032e9ea6ecb2f8;
                      if (local_560 < local_2e8) {
                        local_678 = 0xe4b1bcfc1a28d054;
                      }
                      local_680 = 0xb425bca66c175e0e;
                    }
                  }
                  else if ((longlong)uVar6 < -0x1a8cf205b0931cf6) {
                    if (uVar6 == 0xe2b554dcb3f3f88a) {
                      local_350 = param_3[1];
                      lStack_348 = param_3[2];
                      local_358 = (undefined1 *)*param_3;
                      local_340 = param_3[3];
                      (**(code **)(param_1 + 0x10))(param_3[4],&local_358);
                      *param_2 = (longlong)local_358;
                      local_678 = 0x6946ff62748e962a;
                      local_680 = 0x9aba00d614cd8f2b;
                    }
                    else if (uVar6 == 0xe311e6072670bf63) {
                      local_678 = 0xdd66043f7e3a6274;
                      if (local_681 < '\x02') {
                        local_678 = 0x93dc21e864b80b63;
                      }
                      local_680 = 0x8f96f70e5fed96d7;
                    }
                    else if (uVar6 == 0xe4ed86ef40c2c465) {
                      FUN_18001bf60(param_2,*param_3);
                      local_678 = 0xaeda45ee87c466ba;
                      local_680 = 0x5d26ba5ae7877fbb;
                    }
                  }
                  else if ((longlong)uVar6 < -0x1832ee263003170a) {
                    if (uVar6 == 0xe5730dfa4f6ce30a) {
                      local_2c8 = (longlong)local_280 - (longlong)local_5d0;
                      local_678 = 0x2eab3bf535ae3824;
                      if (local_560 < local_2c8) {
                        local_678 = 0xb25168eea8bda9dd;
                      }
                      local_680 = 0x8d3a9d98a2fdb5e4;
                    }
                    else if (uVar6 == 0xe60f6bfd167f2c11) {
                      local_658 = param_1[8];
                      local_550 = (undefined8 *)*param_3;
                      local_548 = local_550 + 2;
                      local_3f0 = local_550[2];
                      local_3f8 = local_668 + local_3f0;
                      local_678 = 0xac0195f2968dc93c;
                      if ((ulonglong)local_550[3] < local_3f8) {
                        local_678 = 0x3429aba25c532fe2;
                      }
                      local_680 = 0x1e2eed9476f76eac;
                      local_300 = local_3f8;
                    }
                  }
                  else if (uVar6 == 0xe7cd11d9cffce8f6) {
                    (**(code **)*local_5d8)(local_5d8,local_260);
                    local_4b0 = *local_598;
                    local_4b8 = local_668 + local_4b0;
                    local_678 = 0x783d0dfbcc466027;
                    local_680 = 0x1f0ba1790e6c7bfb;
                  }
                  else if (uVar6 == 0xeb81da8371f70300) {
                    uVar5 = FUN_1801e13b0(local_520);
                    local_678 = 0xfdb834fdd8cedc32;
                    if (uVar5 == local_65c) {
                      local_678 = 0x5eee0c6ca3a63a07;
                    }
                    local_680 = 0xcc867bca01ad8000;
                    local_468 = (undefined2 *)local_378;
                  }
                }
                if ((longlong)uVar6 < 0x3ced3d8b5178c72c) break;
                if ((longlong)uVar6 < 0x5c937e7f0faa87c7) {
                  if ((longlong)uVar6 < 0x4bee1a46625893ec) {
                    if ((longlong)uVar6 < 0x3f6bf5760a401c39) {
                      if (uVar6 == 0x3ced3d8b5178c72c) {
                        local_338 = local_66c;
                        local_638 = local_65c - local_56c;
                        local_678 = 0x67d065dfc43b64f5;
                        local_680 = 0x9c5991f921e24aa8;
                        local_430 = local_337;
                      }
                      else if (uVar6 == 0x3e99e0847c00780d) {
                        *param_2 = (longlong)local_5e8;
                        local_678 = 0x8af0e099ef4dd0b0;
                        local_680 = 0x790c1f2d8f0ec9b1;
                      }
                      else if (uVar6 == 0x3ed3c7627f14a395) {
                        (**(code **)*local_590)(local_590,local_298);
                        local_3c8 = *local_580;
                        local_3d0 = local_668 + local_3c8;
                        local_678 = 0xeacf5d60474dbf60;
                        local_680 = 0x45e88551df1cf0f7;
                      }
                    }
                    else if ((longlong)uVar6 < 0x4553a87fb9ae6747) {
                      if (uVar6 == 0x3f6bf5760a401c39) {
                        local_678 = 0xf14d9460ca02a44d;
                        local_680 = 0x669c853473fd4f5b;
                        local_3e8 = local_110;
                      }
                      else if (uVar6 == 0x434b2e77de2d5856) {
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_65c,local_630);
                      }
                    }
                    else if (uVar6 == 0x4553a87fb9ae6747) {
                      *param_2 = (longlong)local_5f8;
                      local_678 = 0x193e5a0caa4dd7ff;
                      local_680 = 0xeac2a5b8ca0ecefe;
                    }
                    else if (uVar6 == 0x4a920d9cbc58ff16) {
                      local_64d = local_669;
                      local_1f8 = local_3e0 + 1;
                      local_488 = *local_600;
                      local_490 = local_668 + local_488;
                      local_678 = 0x318a1c9e86856a7b;
                      if (*local_2d8 < local_490) {
                        local_678 = 0xf207ac9367f675d5;
                      }
                      local_680 = 0x4e00327e275eb0de;
                      local_1f0 = local_490;
                    }
                  }
                  else if ((longlong)uVar6 < 0x5094005a763f8e5a) {
                    if (uVar6 == 0x4bee1a46625893ec) {
                      if ((local_4d0 | local_648) >> 0x20 == 0) {
                        bVar7 = (byte)((local_4d0 & 0xffffffff) % (local_648 & 0xffffffff));
                      }
                      else {
                        bVar7 = (byte)(local_4d0 % local_648);
                      }
                      local_608 = local_4d8 + -1;
                      local_4d8[-1] = bVar7 | local_66d;
                      if ((local_4d0 | local_648) >> 0x20 == 0) {
                        uVar6 = (local_4d0 & 0xffffffff) / (local_648 & 0xffffffff);
                      }
                      else {
                        uVar6 = local_4d0 / local_648;
                      }
                      local_678 = 0x580015417852bd0d;
                      if (local_4d0 < local_648) {
                        local_678 = 0x4578c9a89a1f7ce8;
                      }
                      local_680 = 0x13ee0f071a0a2ee1;
                      local_4d8 = local_608;
                      local_4d0 = uVar6;
                    }
                    else if (uVar6 == 0x4cc9199cd9599628) {
                      (**(code **)*local_5f0)(local_5f0,local_2b0);
                      local_448 = *local_5b0;
                      local_450 = local_668 + local_448;
                      local_678 = 0xad6ea4daf014853;
                      local_680 = 0x6366f7ef0fa4e288;
                    }
                    else if (uVar6 == 0x4f976db2dad45b9f) {
                      lVar1 = *local_220;
                      *local_5a8 = local_518;
                      *(undefined1 *)(lVar1 + local_510) = local_656;
                      local_4e0 = local_1a0 + 1;
                      local_678 = 0x9f005aeb34530eea;
                      if (local_4e0 == local_1b0) {
                        local_678 = 0x379e84833bec82b;
                      }
                      local_680 = 0x335c1d307c190024;
                    }
                  }
                  else if ((longlong)uVar6 < 0x5696c6af80155209) {
                    if (uVar6 == 0x5094005a763f8e5a) {
                      local_678 = 0x25366db68b5b637d;
                      local_680 = 0x22c1c1babb2c8137;
                      local_420 = local_130;
                    }
                    else if (uVar6 == 0x52f0f33121d7f4a3) {
                      local_63c = *(uint *)(param_1 + 8);
                      local_620 = (undefined8 *)*param_3;
                      local_500 = local_c8;
                      local_678 = 0x5e7c5ddddb712f99;
                      local_680 = 0x95d6dafe07a80ad6;
                      local_2f8 = local_500;
                    }
                  }
                  else if (uVar6 == 0x5696c6af80155209) {
                    local_1b8 = (longlong)local_2b8 - (longlong)local_608;
                    local_678 = 0x31527f3cb27f47fc;
                    if ((longlong)local_530 - (longlong)local_3a8 < local_1b8) {
                      local_678 = 0x3a94245391f90fea;
                    }
                    local_680 = 0xbebf837e39a5f9a4;
                  }
                  else if (uVar6 == 0x5c4878680e5fec42) {
                    local_318._0_1_ = local_66c;
                    local_4a0 = local_630 - local_2c0;
                    local_678 = 0x4f732a89f38f0d13;
                    local_680 = 0x89be891d9e6a9e09;
                    local_4a8 = (undefined1 *)((longlong)&local_318 + 1);
                  }
                }
                else if ((longlong)uVar6 < 0x691801048c1a1c88) {
                  if ((longlong)uVar6 < 0x62bdd9eadd3b01ad) {
                    if (uVar6 == 0x5c937e7f0faa87c7) {
                      local_678 = 0x44eb133f15924964;
                      if (local_681 < '\v') {
                        local_678 = 0x196f2dd9798491b8;
                      }
                      local_680 = 0xfd82ab36394655dd;
                    }
                    else if (uVar6 == 0x612357cb6f936680) {
                      local_5a8 = local_610 + 2;
                      local_228 = local_610 + 3;
                      local_220 = local_610 + 1;
                      local_678 = 0xad95c5cac25db0b6;
                      local_680 = 0x1c982118a17be78;
                      local_4e0 = local_398;
                    }
                    else if (uVar6 == 0x6160e3362238a14b) {
                      local_5a0 = local_5e8 + 2;
                      local_218 = local_5e8 + 3;
                      local_210 = local_5e8 + 1;
                      local_678 = 0x23eeef0d7b0bc8a7;
                      local_680 = 0x283d66a1069cd1b1;
                      local_66a = local_652;
                      local_478 = local_528;
                    }
                  }
                  else if ((longlong)uVar6 < 0x6736ac82c22a1bdc) {
                    if (uVar6 == 0x62bdd9eadd3b01ad) {
                      (**(code **)*local_620)(local_620,local_2f0);
                      local_4e8 = *local_5b8;
                      local_4f0 = local_668 + local_4e8;
                      local_678 = 0xa9db28de8dee4bdf;
                      local_680 = 0xbdc3cf2d8e58a4f;
                    }
                    else if (uVar6 == 0x6527367a5ea208c1) {
                      local_238 = (longlong)local_268 - (longlong)local_578;
                      local_678 = 0xf22910a430aab49a;
                      if ((longlong)local_538 - (longlong)local_3a0 < local_238) {
                        local_678 = 0xcc5a3f4c3e26611e;
                      }
                      local_680 = 0xe09cad4f30ea0f39;
                    }
                  }
                  else if (uVar6 == 0x6736ac82c22a1bdc) {
                    lVar1 = *local_200;
                    *local_598 = local_4b8;
                    *(undefined1 *)(lVar1 + local_4b0) = local_653;
                    local_428 = local_178 + 1;
                    local_678 = 0xed65f8677b99f134;
                    if (local_428 == local_158) {
                      local_678 = 0xa92c2ac8bf7653bd;
                    }
                    local_680 = 0x378b7046006e60b3;
                  }
                  else if (uVar6 == 0x6800b11e3ae5d90c) {
                    local_678 = 0x4086792bab2a0617;
                    if (local_681 < '\f') {
                      local_678 = 0x303896ae6c4fe240;
                    }
                    local_680 = 0x6cabe8d163e56587;
                  }
                }
                else if ((longlong)uVar6 < 0x71d6909ebd00d31b) {
                  if (uVar6 == 0x691801048c1a1c88) {
                    *param_2 = (longlong)local_590;
                    local_678 = 0x3b9b05d446c308aa;
                    local_680 = 0xc867fa60268011ab;
                  }
                  else if (uVar6 == 0x69b01da2a0a5aadb) {
                    lVar1 = *local_240;
                    *local_5b0 = local_450;
                    *(undefined1 *)(lVar1 + local_448) = local_655;
                    local_498 = (ulonglong *)((longlong)local_198 + 1);
                    local_678 = 0x1d4508777994cde3;
                    if (local_498 == local_168) {
                      local_678 = 0xd45d873357f63922;
                    }
                    local_680 = 0x1c9a63841c8f9a99;
                  }
                  else if (uVar6 == 0x7110afa45a11c4bb) {
                    *param_2 = (longlong)local_5c0;
                    local_678 = 0xf341fbb7dbc2f688;
                    local_680 = 0xbd0403bb81ef89;
                  }
                }
                else if ((longlong)uVar6 < 0x74b3fb59a81b26c7) {
                  if (uVar6 == 0x71d6909ebd00d31b) {
                    local_168 = local_408;
                    local_5b0 = local_5f0 + 2;
                    local_248 = local_5f0 + 3;
                    local_240 = local_5f0 + 1;
                    local_678 = 0x398a123ba8cb798b;
                    local_680 = 0x385579c8cdd02ef1;
                    local_498 = &local_318;
                  }
                  else if (uVar6 == 0x72eaab7136a9212e) {
                    (**(code **)*local_610)(local_610,local_2e0);
                    local_510 = *local_5a8;
                    local_518 = local_668 + local_510;
                    local_678 = 0x2a8e5106dab75127;
                    local_680 = 0x65193cb400630ab8;
                  }
                }
                else if (uVar6 == 0x74b3fb59a81b26c7) {
                  local_678 = 0x91069e511bfbce41;
                  if (local_681 < '\b') {
                    local_678 = 0x8e3e7ad6c484ed4b;
                  }
                  local_680 = 0x2541c3a29f986622;
                }
                else if (uVar6 == 0x7f8a2ee0a1dbdaa5) {
                  lVar1 = *local_2d0;
                  *local_600 = local_490;
                  *(char *)(lVar1 + local_488) = local_64d;
                  local_669 = *local_1f8;
                  local_678 = 0xc75a4555a369ccfd;
                  if (local_669 == local_66b) {
                    local_678 = 0x4e95acda8a0f96a8;
                  }
                  local_680 = 0x8dc848c91f3133eb;
                  local_3e0 = local_1f8;
                }
              }
              if ((longlong)uVar6 < 0x163758d23d8858f7) break;
              if ((longlong)uVar6 < 0x2a0746362aa4414e) {
                if ((longlong)uVar6 < 0x1c4ad6e63b559db4) {
                  if (uVar6 == 0x163758d23d8858f7) {
                    local_398[0] = local_66c;
                    local_678 = 0xb70f8200420b0c5c;
                    local_680 = 0xd815fa72c7a463a;
                    local_440 = (undefined2 *)(local_398 + 1);
                  }
                  else if (uVar6 == 0x18c3e81b7698b744) {
                    local_558 = 0.0;
                    local_64c = 10;
                    local_65c = 0;
                    local_668 = 1;
                    local_66b = '\0';
                    local_630 = 0;
                    local_560 = 0x18;
                    local_66c = 0x2d;
                    local_648 = 10;
                    local_66d = 0x30;
                    local_681 = *param_1;
                    local_678 = 0xa4bd8a77d4272460;
                    local_680 = 0x31f0040507b8a2c5;
                  }
                  else if (uVar6 == 0x1bb87c29b8a68f5f) {
                    local_678 = 0xafc24620f7580b89;
                    if (local_681 < '\n') {
                      local_678 = 0xb3710c6765a6f442;
                    }
                    local_680 = 0xc7c2f73ecdbdd285;
                  }
                }
                else if ((longlong)uVar6 < 0x2022b0736f58e1c4) {
                  if (uVar6 == 0x1c4ad6e63b559db4) {
                    local_638 = *(uint *)(param_1 + 8);
                    local_5f8 = (undefined8 *)*param_3;
                    local_538 = local_320;
                    local_678 = 0x5bec7b50f16fbe04;
                    if ((int)local_638 < (int)local_65c) {
                      local_678 = 0x9c88b2fd45ce5775;
                    }
                    local_680 = 0xa0658f7614b69059;
                    local_430 = &local_338;
                    local_56c = local_638;
                  }
                  else if (uVar6 == 0x1d37ccb6e36ab5ef) {
                    *param_2 = (longlong)local_620;
                    local_678 = 0xa356cc1b47d6392e;
                    local_680 = 0x50aa33af2795202f;
                  }
                }
                else if (uVar6 == 0x2022b0736f58e1c4) {
                  local_678 = 0x45099dd73e8bcdab;
                  if (local_681 == '\0') {
                    local_678 = 0x8160d32df8a60cb2;
                  }
                  local_680 = 0x7188c30772cbc535;
                }
                else if (uVar6 == 0x2306b3f5ba66c903) {
                  (**(code **)*local_5f8)(local_5f8,local_1e8);
                  local_4c0 = *local_5c8;
                  local_4c8 = local_668 + local_4c0;
                  local_678 = 0xce49ee85cdea251;
                  local_680 = 0xe069645e781c14cc;
                }
              }
              else if ((longlong)uVar6 < 0x3025f5784fa7c80f) {
                if (uVar6 == 0x2a0746362aa4414e) {
                  (**(code **)*local_550)(local_550,local_300);
                  local_3f0 = *local_548;
                  local_3f8 = local_668 + local_3f0;
                  local_678 = 0xcf1708c6e92ca68a;
                  local_680 = 0x7d3870a00956011a;
                }
                else if (uVar6 == 0x2c2d91fac8cf6390) {
                  local_678 = 0xbc5efae2dc87ac38;
                  if (local_681 < '\r') {
                    local_678 = 0x129a70798865db9c;
                  }
                  local_680 = 0x1755775bf2034ad1;
                }
                else if (uVar6 == 0x2cc692030ecc6e27) {
                  local_678 = 0xf27cd46fced7a8de;
                  local_680 = 0x7cc25f0690ef98aa;
                  local_438 = local_538;
                }
              }
              else if ((longlong)uVar6 < 0x34213424830f32ca) {
                if (uVar6 == 0x3025f5784fa7c80f) {
                  *param_2 = (longlong)local_610;
                  local_678 = 0xdf048c214b1b18b2;
                  local_680 = 0x2cf873952b5801b3;
                }
                else if (uVar6 == 0x313e4f37d9635c32) {
                  local_378[0] = local_66c;
                  local_678 = 0x2d920d7d45c0c6f6;
                  local_680 = 0xbffa7adbe7cb7cf1;
                  local_468 = (undefined2 *)(local_378 + 1);
                }
              }
              else if (uVar6 == 0x34213424830f32ca) {
                local_600 = local_588 + 2;
                local_2d8 = local_588 + 3;
                local_2d0 = local_588 + 1;
                local_678 = 0xcada17ee6c4488ac;
                local_680 = 0x80481a72d01c77ba;
                local_669 = local_64f;
                local_3e0 = local_1d0;
              }
              else if (uVar6 == 0x34815ed04c40089e) {
                local_678 = 0xd4136e127cf9fa51;
                local_680 = 0x97584065a2d4a207;
              }
            }
            if ((longlong)uVar6 < 0x5cf07227a66914d) break;
            if ((longlong)uVar6 < 0x9159f00dbaa8072) {
              if (uVar6 == 0x5cf07227a66914d) {
                local_1e0 = *(undefined1 **)(param_1 + 8);
                local_590 = (undefined8 *)*param_3;
                local_1d8 = local_1e0 + *(uintptr_t *)(param_1 + 0x10);
                local_678 = 0x59e290ea6fc4cc39;
                if (*(uintptr_t *)(param_1 + 0x10) == local_630) {
                  local_678 = 0x97c92c64b1aa869d;
                }
                local_680 = 0xfed12d603db09a15;
              }
              else if (uVar6 == 0x7f7ac0c3077e24a) {
                local_170 = local_420;
                local_5b8 = local_620 + 2;
                local_258 = local_620 + 3;
                local_250 = local_620 + 1;
                local_678 = 0xf658673d7223cc98;
                local_680 = 0x5952fca20b8c9021;
                local_4f8 = local_148;
              }
              else if (uVar6 == 0x8782f9e99d0e2ae) {
                local_652 = *local_528;
                local_678 = 0xacf1476bfc2ce6f;
                if (local_652 == local_66b) {
                  local_678 = 0x553617c4e1fa1729;
                }
                local_680 = 0x6baff7409dfa6f24;
              }
            }
            else if ((longlong)uVar6 < 0xcecf6afa5325fd9) {
              if (uVar6 == 0x9159f00dbaa8072) {
                local_520 = *(double *)(param_1 + 8);
                local_5c0 = (undefined8 *)*param_3;
                local_678 = 0xff2153cdee35eb15;
                if (NAN(local_520) || NAN(local_558)) {
                  local_678 = 0xcfa19c7b89a38231;
                }
                local_680 = 0x242046f8f8548131;
              }
              else if (uVar6 == 0xbd389ac7d971916) {
                local_64e = local_66a;
                local_290 = local_478 + 1;
                local_410 = *local_5a0;
                local_418 = local_668 + local_410;
                local_678 = 0x2c9057e26254ceb5;
                if (*local_218 < local_418) {
                  local_678 = 0x4587de7d35a3ac41;
                }
                local_680 = 0xeba831fafdd1d29d;
                local_288 = local_418;
              }
            }
            else if (uVar6 == 0xcecf6afa5325fd9) {
              if ((local_458 | local_648) >> 0x20 == 0) {
                bVar7 = (byte)((local_458 & 0xffffffff) % (local_648 & 0xffffffff));
              }
              else {
                bVar7 = (byte)(local_458 % local_648);
              }
              local_5d0 = local_460 + -1;
              local_460[-1] = bVar7 | local_66d;
              if ((local_458 | local_648) >> 0x20 == 0) {
                uVar6 = (local_458 & 0xffffffff) / (local_648 & 0xffffffff);
              }
              else {
                uVar6 = local_458 / local_648;
              }
              local_678 = 0x24fe754bf431cc0b;
              if (local_458 < local_648) {
                local_678 = 0xcd618e1e1e6f70d8;
              }
              local_680 = 0x281283e4510393d2;
              local_460 = local_5d0;
              local_458 = uVar6;
            }
            else if (uVar6 == 0x12b5bdeb0040bba3) {
              FUN_1802079d0(local_3a0,local_578);
              local_438 = local_3a0 + lVar3;
              local_678 = 0x980301e28a01344b;
              if (&local_338 == local_438) {
                local_678 = 0x53ee22f46d976378;
              }
              local_680 = 0x16bd8a8bd439043f;
            }
          }
          if (-0xc03004b9fbce700 < (longlong)uVar6) break;
          if (uVar6 == 0xec8dfab624c2b69d) {
            lVar1 = *local_270;
            *local_5c8 = local_4c8;
            *(undefined1 *)(lVar1 + local_4c0) = local_650;
            local_3d8 = local_150 + 1;
            local_678 = 0xa289d2af9678e4ce;
            if (local_3d8 == local_180) {
              local_678 = 0x4f271e9217d72276;
            }
            local_680 = 0xa74b6edae794531;
          }
          else if (uVar6 == 0xf0e8102a8a6dc987) {
            *param_2 = *param_3;
            local_678 = 0x6ffbf5a82129cb64;
            local_680 = 0x9c070a1c416ad265;
          }
          else if (uVar6 == 0xf13f0481b9288be9) {
            local_1b0 = local_508;
            local_678 = 0xffcd3a37dad5b787;
            if (local_398 == local_508) {
              local_678 = 0xaecb9884fae11908;
            }
            local_680 = 0x9eee6dfcb546d107;
          }
        }
        if ((longlong)uVar6 < 0x1df6bf3651b577a) break;
        if (uVar6 == 0x1df6bf3651b577a) {
          local_198 = local_498;
          local_655 = (undefined1)*local_498;
          local_448 = *local_5b0;
          local_450 = local_668 + local_448;
          local_678 = 0x1c0b0edf26727bb6;
          if (*local_248 < local_450) {
            local_678 = 0x39720ae15f8e4745;
          }
          local_680 = 0x75bb137d86d7d16d;
          local_2b0 = local_450;
        }
        else if (uVar6 == 0x23907f08d6a09d8) {
          local_678 = 0x3b2834fdf08ec86e;
          if (local_681 < '\x01') {
            local_678 = 0xf81b6289b9a696c9;
          }
          local_680 = 0xd839d2fad6fe770d;
        }
      }
      if (uVar6 != 0xfb89f426e5d92e5d) break;
      local_3a0 = local_430;
      local_3b0 = local_e8;
      local_678 = 0x8e0307e739ede2c0;
      local_680 = 0x31917cae075b36ca;
      local_634 = local_638;
      local_268 = local_3b0;
    }
  } while (uVar6 != 0xf3fcffb460431901);
  return param_2;
}



undefined8 * FUN_18000afa0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_129;
  ulonglong local_128;
  ulonglong local_120;
  uint local_118;
  uint local_114;
  undefined1 *local_110;
  undefined1 *local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined1 local_48 [8];

  local_120 = 0x603bf608a3655a4;
  local_128 = 0x6aaf2540c9acc9a2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_120 ^ 0x5a8ec49df4931f2a;
              uVar1 = local_120 ^ local_128;
              local_128 = local_128 ^ 0x5a8ec49df4931f2a;
              local_120 = uVar2;
              if ((longlong)uVar1 < 0x19725fb8349f5ab6) break;
              if ((longlong)uVar1 < 0x47915bddeb74c5d6) {
                if ((longlong)uVar1 < 0x3bd61404a09cc080) {
                  if (uVar1 == 0x19725fb8349f5ab6) {
                    local_120 = 0x457c4b12114a3346;
                    local_128 = 0x2ed10cffa3ef690;
                    local_c8 = local_110;
                    local_f4 = local_114;
                  }
                  else if (uVar1 == 0x1eac466e55f6575d) {
                    local_120 = 0x615fb8277aaf7094;
                    if (param_5 == 0x20) {
                      local_120 = 0x63385201f132bdc1;
                    }
                    local_128 = 0xeedd7ad4b42ecf8e;
                    local_a0 = local_110;
                    local_e0 = local_114;
                  }
                  else if (uVar1 == 0x22e0e7486c505c91) {
                    local_a8 = param_2 + 1;
                    *param_2 = 0x2d;
                    local_e4 = local_118 - param_4;
                    local_120 = 0x9fba6eab01b40b8e;
                    local_128 = 0xa01440ce3a3468b3;
                  }
                }
                else if ((longlong)uVar1 < 0x3fae2e653b80633d) {
                  if (uVar1 == 0x3bd61404a09cc080) {
                    local_120 = 0x3339575536e3a8e9;
                    if ((int)param_5 < 9) {
                      local_120 = 0x6bc590e4483f8bd7;
                    }
                    local_128 = 0x2a4b08ed027cf25f;
                    local_90 = local_110;
                    local_d8 = local_114;
                  }
                  else if (uVar1 == 0x3e02dfd8c934275f) {
                    local_120 = 0xb2ed709058e5d35e;
                    if ((int)param_5 < 3) {
                      local_120 = 0xdf5176e0671c8f7;
                    }
                    local_128 = 0xab9f2f286c7a89e8;
                  }
                }
                else if (uVar1 == 0x3fae2e653b80633d) {
                  local_114 = local_e4;
                  local_80 = local_a8;
                  local_110 = local_48;
                  local_120 = 0x69c9b36f1fc43ebc;
                  local_128 = 0xf93df8d8b15071af;
                }
                else if (uVar1 == 0x418e98094a437988) {
                  local_90[-1] = (byte)local_d8 & 7 | local_129;
                  local_d8 = local_d8 >> 3;
                  local_108 = local_90 + -1;
                  local_120 = 0x397a7a391c880a4;
                  if (local_d8 == local_118) {
                    local_120 = 0x9b8ed4b42f0127d0;
                  }
                  local_128 = 0x42193faadb8bf92c;
                  local_90 = local_108;
                }
              }
              else if ((longlong)uVar1 < 0x6c1bbfdc1fcfa25a) {
                if ((longlong)uVar1 < 0x55fa6e18219e5b70) {
                  if (uVar1 == 0x47915bddeb74c5d6) {
                    local_c8[-1] = (char)(local_f4 % param_5) + local_129;
                    local_108 = local_c8 + -1;
                    local_120 = 0xd7056609e89cb8c4;
                    if (local_f4 < param_5) {
                      local_120 = 0x4903d6caf762a3ee;
                    }
                    local_128 = 0x90943dd403e87d12;
                    local_f4 = local_f4 / param_5;
                    local_c8 = local_108;
                  }
                  else if (uVar1 == 0x4a6e735231108268) {
                    FUN_1802079d0(local_80,local_70,local_78);
                    local_b8 = local_80 + local_78;
                    local_120 = 0x2b1ee32e5985999;
                    local_128 = 0x574b802ac40602e9;
                    local_ec = local_118;
                  }
                }
                else if (uVar1 == 0x55fa6e18219e5b70) {
                  *param_1 = local_b8;
                  *(uint *)(param_1 + 1) = local_ec;
                  local_120 = 0x7b60ae8ea8982930;
                  local_128 = 0xcf32d7bbe445ee1f;
                }
                else if (uVar1 == 0x58aa8bbfffe71d6f) {
                  local_120 = 0x9c17f514a24d8fee;
                  if ((int)param_5 < 0x20) {
                    local_120 = 0xecfb914e9de07cdc;
                  }
                  local_128 = 0x82bbb37af7bbd8b3;
                }
              }
              else if ((longlong)uVar1 < 0x6e4022346a5ba46f) {
                if (uVar1 == 0x6c1bbfdc1fcfa25a) {
                  local_120 = 0x7f60e7f0e6ef721c;
                  if (param_2 == param_3) {
                    local_120 = 0xd3b24272fc00e91a;
                  }
                  local_128 = 0x5d8000b88abf2e8d;
                }
                else if (uVar1 == 0x6cac9a20439a9c06) {
                  local_100 = 10;
                  local_118 = 0;
                  local_129 = 0x30;
                  local_fc = 0x84;
                  local_120 = 0xc6b3f614f9923d3;
                  if ((int)param_4 < 0) {
                    local_120 = 0x5fdeaed86bd6e2b4;
                  }
                  local_128 = 0x33c51104741940ee;
                  local_e4 = param_4;
                  local_a8 = param_2;
                }
              }
              else if (uVar1 == 0x6e4022346a5ba46f) {
                local_120 = 0x9987f4cc1e5ca90c;
                if (param_5 == 0x10) {
                  local_120 = 0x9710d552fe609e01;
                }
                local_128 = 0x1605363fd0dd1616;
                local_c0 = local_110;
                local_f0 = local_114;
              }
              else if (uVar1 == 0x7a985c197422676d) {
                local_b0[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[(ulonglong)local_e8 % (ulonglong)param_5];
                local_108 = local_b0 + -1;
                local_120 = 0x740da400f7f1b432;
                if (local_e8 < param_5) {
                  local_120 = 0xd702130777590da3;
                }
                local_128 = 0xe95f81983d3d35f;
                local_e8 = local_e8 / param_5;
                local_b0 = local_108;
              }
            }
            if (-0x5995c7b995f4bee2 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x70d18f33d2868c9b) {
              if ((longlong)uVar1 < -0x721ad72abae38db1) {
                if (uVar1 == 0x8115e36d2ebd8817) {
                  local_c0[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_f0 & 0xf];
                  local_f0 = local_f0 >> 4;
                  local_108 = local_c0 + -1;
                  local_120 = 0xbd78573d57acb56f;
                  if (local_f0 == local_118) {
                    local_120 = 0xe5fa5f4e8d9be384;
                  }
                  local_128 = 0x3c6db45079113d78;
                  local_c0 = local_108;
                }
                else if (uVar1 == 0x85535559ec3e39db) {
                  local_120 = 0xfd8a619212ff1464;
                  if ((int)param_5 < 10) {
                    local_120 = 0xa2c5a76c2c31a23;
                  }
                  local_128 = 0x31fa4e72625fdaa3;
                }
              }
              else if (uVar1 == 0x8de528d5451c724f) {
                local_a0[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_e0 & 0x1f];
                local_e0 = local_e0 >> 5;
                local_108 = local_a0 + -1;
                local_120 = 0x2d037eba70fb170d;
                if (local_e0 == local_118) {
                  local_120 = 0x7971bd71c16dbbbe;
                }
                local_128 = 0xa0e6566f35e76542;
                local_a0 = local_108;
              }
              else if (uVar1 == 0x8e3242ca76bfc797) {
                *param_1 = param_3;
                *(uint *)(param_1 + 1) = local_fc;
                local_120 = 0xd8c2a199ab837def;
                local_128 = 0x6c90d8ace75ebac0;
              }
            }
            else if ((longlong)uVar1 < -0x6f0bb448516bb0ed) {
              if (uVar1 == 0x8f2e70cc2d797365) {
                local_88[-1] = (byte)local_d4 & 3 | local_129;
                local_d4 = local_d4 >> 2;
                local_108 = local_88 + -1;
                local_120 = 0xae4a05dd7967f4e5;
                if (local_d4 == local_118) {
                  local_120 = 0xf8f39e0fa094597c;
                }
                local_128 = 0x21647511541e8780;
                local_88 = local_108;
              }
              else if (uVar1 == 0x8f82c2f3ce81bf1a) {
                local_120 = 0x35e1951c92f20982;
                local_128 = 0x4f79c905e6d06eef;
                local_b0 = local_110;
                local_e8 = local_114;
              }
            }
            else if (uVar1 == 0x90f44bb7ae944f13) {
              local_120 = 0x248a994f4615e8ad;
              if ((int)param_5 < 8) {
                local_120 = 0xb1cb01fd8e4d484f;
              }
              local_128 = 0xa1d9cc16aa2bd176;
            }
            else if (uVar1 == 0xa2418e9c6783e954) {
              local_98[-1] = (byte)local_dc & 1 | local_129;
              local_dc = local_dc >> 1;
              local_108 = local_98 + -1;
              local_120 = 0x896e3b12a1041506;
              if (local_dc == local_118) {
                local_120 = 0xf2b85e90320d22ae;
              }
              local_128 = 0x2b2fb58ec687fc52;
              local_98 = local_108;
            }
          }
          if ((longlong)uVar1 < -0x20d54fe06d293de5) break;
          if ((longlong)uVar1 < 0x33bf38ab7a2251) {
            if (uVar1 == 0xdf2ab01f92d6c21b) {
              local_d0[-1] = (byte)(local_f8 % local_100) | local_129;
              local_108 = local_d0 + -1;
              local_120 = 0x7e24506c48798fba;
              if (local_f8 < local_100) {
                local_120 = 0x78990b6d2e25935d;
              }
              local_128 = 0xa10ee073daaf4da1;
              local_f8 = local_f8 / local_100;
              local_d0 = local_108;
            }
            else if (uVar1 == 0xf684112597e3980d) {
              local_120 = 0xa31f1b044fed6bc8;
              if ((int)param_5 < 5) {
                local_120 = 0x35433470560b421b;
              }
              local_128 = 0xba6d44bc7b72317e;
              local_88 = local_110;
              local_d4 = local_114;
            }
          }
          else if (uVar1 == 0x33bf38ab7a2251) {
            local_120 = 0x629c39b089458416;
            if (param_5 == 10) {
              local_120 = 0x32344b5cd512f917;
            }
            local_128 = 0xed1efb4347c43b0c;
            local_d0 = local_110;
            local_f8 = local_114;
          }
          else if (uVar1 == 0x1012cdeb24669939) {
            local_120 = 0xd8652703ca2e1641;
            if ((int)param_5 < 4) {
              local_120 = 0x10e3e9fe94f9a913;
            }
            local_128 = 0x2ee136265dcd8e4c;
          }
        }
        if ((longlong)uVar1 < -0x338fd01f8f5f3139) break;
        if (uVar1 == 0xcc702fe070a0cec7) {
          local_120 = 0xa1e4083efe2e965a;
          if ((int)param_5 < 0x10) {
            local_120 = 0xf97d3cb9aab3a964;
          }
          local_128 = 0xf94e838101c98b35;
        }
        else if (uVar1 == 0xd997eb1ef48adefc) {
          local_70 = local_108;
          local_78 = (longlong)local_110 - (longlong)local_108;
          local_ec = local_fc;
          local_120 = 0xfdc90f18507824fe;
          if ((longlong)param_3 - (longlong)local_80 < local_78) {
            local_120 = 0xe25d125240f6fde6;
          }
          local_128 = 0xb7a77c4a6168a696;
          local_b8 = param_3;
        }
      }
      if (uVar1 != 0xa66a38466a0b411f) break;
      local_120 = 0x916e5490c861446a;
      if (param_5 == 2) {
        local_120 = 0xbcad18ff61631224;
      }
      local_128 = 0x1eec966306e0fb70;
      local_98 = local_110;
      local_dc = local_114;
    }
  } while (uVar1 != 0xb45279354cddc72f);
  return param_1;
}



void FUN_18000bd50(longlong *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_121;
  ulonglong local_120;
  ulonglong local_118;
  uint local_10c;
  undefined1 *local_108;
  undefined1 *local_100;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  longlong local_78;
  undefined1 *local_70;
  undefined1 local_48 [8];

  local_118 = 0x2ed1f30e75d2a609;
  local_120 = 0x4e17981681b47285;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_118 ^ 0xac835c667e67e44e;
              uVar1 = local_118 ^ local_120;
              local_120 = local_120 ^ 0xac835c667e67e44e;
              local_118 = uVar2;
              if ((longlong)uVar1 < 0x1fa3026b0dc3274c) break;
              if ((longlong)uVar1 < 0x60c66b18f466d48c) {
                if ((longlong)uVar1 < 0x40555a1293a6545d) {
                  if (uVar1 == 0x1fa3026b0dc3274c) {
                    local_118 = 0x6a7a6dd6e35c3c9d;
                    if ((int)param_5 < 10) {
                      local_118 = 0xc5ef1d73131105fd;
                    }
                    local_120 = 0x7cf4afa84764baf;
                  }
                  else if (uVar1 == 0x22cd34fa58a7b521) {
                    local_118 = 0xa95d9ccc78836029;
                    if ((int)param_5 < 4) {
                      local_118 = 0x4073784c5c3a68bc;
                    }
                    local_120 = 0xe908c6deeb253474;
                  }
                  else if (uVar1 == 0x3124b9d747bf6af6) {
                    local_70 = local_100;
                    local_78 = (longlong)local_108 - (longlong)local_100;
                    local_118 = 0x4556c3f417d5ef4;
                    if (param_3 - param_2 < local_78) {
                      local_118 = 0x7801ddaf2a5d5ba3;
                    }
                    local_120 = 0xc7cbd8ebc9a2d8b6;
                    local_e4 = 0x84;
                    local_b0 = param_3;
                  }
                }
                else if (uVar1 == 0x40555a1293a6545d) {
                  local_118 = 0x681c84b2c666406a;
                  if ((int)param_5 < 5) {
                    local_118 = 0x463cea8e769218fe;
                  }
                  local_120 = 0x1c9e733a9b6c20ec;
                  local_b8 = local_108;
                  local_e8 = param_4;
                }
                else if (uVar1 == 0x5aa299b4edfe3812) {
                  local_b8[-1] = (byte)local_e8 & 3 | local_121;
                  local_e8 = local_e8 >> 2;
                  local_100 = local_b8 + -1;
                  local_118 = 0x62bd0d8377aa2cc8;
                  if (local_e8 == local_10c) {
                    local_118 = 0x93b2de0ddeb7e2c;
                  }
                  local_120 = 0x381f94379a5414da;
                  local_b8 = local_100;
                }
                else if (uVar1 == 0x5e54fc21b6af3cb8) {
                  local_118 = 0x845e17347387f77b;
                  if ((int)param_5 < 8) {
                    local_118 = 0xb93021a526e36516;
                  }
                  local_120 = 0x9bfd155f7e44d037;
                }
              }
              else if ((longlong)uVar1 < 0x6d8f5163f798886e) {
                if (uVar1 == 0x60c66b18f466d48c) {
                  local_f8 = 10;
                  local_10c = 0;
                  local_121 = 0x30;
                  local_108 = local_48;
                  local_118 = 0xc2b029354d488ba4;
                  local_120 = 0x9ce4d514fbe7b71c;
                }
                else if (uVar1 == 0x619996071c6a1eb2) {
                  local_d0[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_f4 & 0x1f];
                  local_f4 = local_f4 >> 5;
                  local_100 = local_d0 + -1;
                  local_118 = 0x846fca1f63fc011f;
                  if (local_f4 == local_10c) {
                    local_118 = 0xd4d2e5cf3829755b;
                  }
                  local_120 = 0xe5f65c187f961fad;
                  local_d0 = local_100;
                }
                else if (uVar1 == 0x6658e50833f37146) {
                  local_a0[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_dc & 0xf];
                  local_dc = local_dc >> 4;
                  local_100 = local_a0 + -1;
                  local_118 = 0x3bf26cac33cf777;
                  if (local_dc == local_10c) {
                    local_118 = 0x54c37a15b770ecc7;
                  }
                  local_120 = 0x65e7c3c2f0cf8631;
                  local_a0 = local_100;
                }
              }
              else if ((longlong)uVar1 < 0x7482f7885d0a6086) {
                if (uVar1 == 0x6d8f5163f798886e) {
                  local_c0[-1] = (byte)(local_ec % local_f8) | local_121;
                  local_100 = local_c0 + -1;
                  local_118 = 0x25350035c89166aa;
                  if (local_ec < local_f8) {
                    local_118 = 0x799ee88178b68432;
                  }
                  local_120 = 0x48ba51563f09eec4;
                  local_ec = local_ec / local_f8;
                  local_c0 = local_100;
                }
                else if (uVar1 == 0x6db5272c672a7732) {
                  local_118 = 0x1a148df871f93667;
                  if ((int)param_5 < 0x10) {
                    local_118 = 0x332ee68e603b37d2;
                  }
                  local_120 = 0xb13e43f6cdae0b5a;
                }
              }
              else if (uVar1 == 0x7482f7885d0a6086) {
                local_118 = 0x7a79298299268bcc;
                local_120 = 0xd9ff4d4e4c44e3b6;
                local_90 = local_108;
                local_d4 = param_4;
              }
              else if (uVar1 == 0x7623e6fb02c5bf11) {
                local_c8[-1] = (byte)local_f0 & 7 | local_121;
                local_f0 = local_f0 >> 3;
                local_100 = local_c8 + -1;
                local_118 = 0xc7e3872963c9d64d;
                if (local_f0 == local_10c) {
                  local_118 = 0x80e4d80526b303aa;
                }
                local_120 = 0xb1c061d2610c695c;
                local_c8 = local_100;
              }
            }
            if (-0x40d1d5cc50bb6a29 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x5c799b332a9d9786) {
              if (uVar1 == 0x8210a578ad953c88) {
                local_118 = 0xcde256f8a8921ec4;
                if (param_5 == 10) {
                  local_118 = 0x7d35ec76d5855b16;
                }
                local_120 = 0x10babd15221dd378;
                local_c0 = local_108;
                local_ec = param_4;
              }
              else if (uVar1 == 0x83072b28c3ffb68a) {
                local_118 = 0x4a697c3501bcf4e9;
                if (param_5 == 0x10) {
                  local_118 = 0xf16972d0b8c04813;
                }
                local_120 = 0x973197d88b333955;
                local_a0 = local_108;
                local_dc = param_4;
              }
              else if (uVar1 == 0x9646aa7fa941ec42) {
                local_118 = 0x3a350f4d462a5fe8;
                if (param_5 == 0x20) {
                  local_118 = 0x86f472a7d0cf8ce6;
                }
                local_120 = 0xe76de4a0cca59254;
                local_d0 = local_108;
                local_f4 = param_4;
              }
            }
            else if (uVar1 == 0xa38664ccd562687a) {
              local_90[-1] = (char)(local_d4 % param_5) + local_121;
              local_100 = local_90 + -1;
              local_118 = 0x440e6781a3d35670;
              if (local_d4 < param_5) {
                local_118 = 0xd6acba9a310e54fc;
              }
              local_120 = 0xe788034d76b13e0a;
              local_d4 = local_d4 / param_5;
              local_90 = local_100;
            }
            else if (uVar1 == 0xa97bbe92b71f5cc8) {
              local_118 = 0xe2d60c5baef86280;
              if ((int)param_5 < 3) {
                local_118 = 0x869dc1c04caaba07;
              }
              local_120 = 0x9654fbd3f3f20206;
            }
            else if (uVar1 == 0xab2ace0ebc573d3d) {
              local_118 = 0x9ba9fb6547d1813e;
              if ((int)param_5 < 0x20) {
                local_118 = 0x8ee87a322d6fdbf6;
              }
              local_120 = 0xdef511aee906d7c;
            }
          }
          if ((longlong)uVar1 < -0x26a14255aa283329) break;
          if (uVar1 == 0xd95ebdaa55d7ccd7) {
            local_98[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[(ulonglong)local_d8 % (ulonglong)param_5];
            local_100 = local_98 + -1;
            local_118 = 0x486f513d8500bf8b;
            if (local_d8 < param_5) {
              local_118 = 0xa0155540976819aa;
            }
            local_120 = 0x9131ec97d0d7735c;
            local_d8 = local_d8 / param_5;
            local_98 = local_100;
          }
          else if (uVar1 == 0xdd58ebed8a8fcdbc) {
            local_118 = 0xf676e7bc6be33f40;
            local_120 = 0x2f285a163e34f397;
            local_98 = local_108;
            local_d8 = param_4;
          }
          else if (uVar1 == 0x10c93a13bf58b801) {
            local_118 = 0x6920680afa880657;
            if (param_5 == 2) {
              local_118 = 0xb56a9d4df435e33;
            }
            local_120 = 0xb47883e77007cbeb;
            local_a8 = local_108;
            local_e0 = param_4;
          }
        }
        if ((longlong)uVar1 < -0x3ddfa8766898b1ae) break;
        if (uVar1 == 0xc220578997674e52) {
          local_118 = 0xd3325ecc8538e754;
          if ((int)param_5 < 9) {
            local_118 = 0xd1934fbfdaf738c3;
          }
          local_120 = 0xa7b0a944d83287d2;
          local_c8 = local_108;
          local_f0 = param_4;
        }
        else if (uVar1 == 0xc39eb4d488df8642) {
          FUN_1802079d0(param_2,local_70,local_78);
          local_b0 = local_78 + param_2;
          local_e4 = local_10c;
          local_118 = 0x4cf4d5654a7f75e2;
          local_120 = 0xf33ed021a980f6f7;
        }
      }
      if (uVar1 != 0xbf2e2a33af4495d8) break;
      local_a8[-1] = (byte)local_e0 & 1 | local_121;
      local_e0 = local_e0 >> 1;
      local_100 = local_a8 + -1;
      local_118 = 0x58165917d576752f;
      if (local_e0 == local_10c) {
        local_118 = 0xd61ccaf33d8d8a01;
      }
      local_120 = 0xe73873247a32e0f7;
      local_a8 = local_100;
    }
  } while (uVar1 != 0xbfca0544e3ff8315);
  *param_1 = local_b0;
  *(uint *)(param_1 + 1) = local_e4;
  return;
}



undefined8 * FUN_18000c8e0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  byte local_1a1;
  ulonglong local_1a0;
  ulonglong local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined4 local_170;
  undefined4 local_16c;
  ulonglong local_160;
  ulonglong local_150;
  ulonglong local_148;
  undefined1 *local_140;
  ulonglong local_138;
  undefined1 *local_130;
  ulonglong local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  ulonglong local_110;
  undefined1 *local_108;
  ulonglong local_100;
  undefined1 *local_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  undefined1 *local_d8;
  ulonglong local_d0;
  undefined1 *local_c8;
  ulonglong local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 *local_a8;
  longlong local_98;
  undefined1 *local_90;
  undefined1 local_48 [8];

  local_198 = 0xb9c428b2bda5963;
  local_1a0 = 0x906aaed25de7d02e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_198 ^ 0xc8389f1723ce1c67;
              uVar1 = local_198 ^ local_1a0;
              local_1a0 = local_1a0 ^ 0xc8389f1723ce1c67;
              local_198 = uVar4;
              if (0x20e2597a45b277cb < (longlong)uVar1) break;
              if ((longlong)uVar1 < -0x3306653bb564e063) {
                if ((longlong)uVar1 < -0x644c88828352880b) {
                  if ((longlong)uVar1 < -0x70be965a25a99b64) {
                    if (uVar1 == 0x82a6b1df18924c56) {
                      local_198 = 0x125e92edd7657a02;
                      if (param_2 == param_3) {
                        local_198 = 0x7fd817a634cd94ad;
                      }
                      local_1a0 = 0x4f8587ce66940b52;
                    }
                    else if (uVar1 == 0x8be121062c8d7fdf) {
                      local_198 = 0x1f5c192d78756a92;
                      local_1a0 = 0xfb4122faffbb550f;
                    }
                  }
                  else if (uVar1 == 0x8f4169a5da56649c) {
                    local_198 = 0x402377e6ba1e2926;
                    if (param_5 == 0x10) {
                      local_198 = 0xfbfdd498f89878c8;
                    }
                    local_1a0 = 0xcbc256e0969356f9;
                    local_118 = local_190;
                    local_110 = local_180;
                  }
                  else if (uVar1 == 0x95073d037e4a00e3) {
                    local_b8[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_b0 & 0x1f];
                    local_b0 = local_b0 >> 5;
                    local_188 = local_b8 + -1;
                    local_198 = 0xa7fcc8de778d86d6;
                    if (local_b0 == local_178) {
                      local_198 = 0xac87ece98d87184;
                    }
                    local_1a0 = 0x32fbf5dd09c78635;
                    local_b8 = local_188;
                  }
                }
                else if ((longlong)uVar1 < -0x4726f6f80ce82719) {
                  if (uVar1 == 0x9bb3777d7cad77f5) {
                    local_198 = 0x67d10456b1b7378;
                    if ((int)param_5 < 4) {
                      local_198 = 0xf328abc46ecd8512;
                    }
                    local_1a0 = 0xe56f8214ea37faa8;
                  }
                  else if (uVar1 == 0x9bf6ec59763d894d) {
                    local_178 = 0;
                    local_160 = 10;
                    local_1a1 = 0x30;
                    local_170 = 0x84;
                    local_198 = 0xbf9be025c7a6bcaa;
                    if ((longlong)param_4 < 0) {
                      local_198 = 0x69e20006e289c0b4;
                    }
                    local_1a0 = 0xeb44b1d9fa1b8ce2;
                    local_108 = param_2;
                    local_100 = param_4;
                  }
                }
                else if (uVar1 == 0xb8d90907f317d8e7) {
                  local_f8[-1] = (byte)local_f0 & 1 | local_1a1;
                  local_f0 = local_f0 >> 1;
                  local_188 = local_f8 + -1;
                  local_198 = 0x64ec32955e16d6d1;
                  if (local_f0 == local_178) {
                    local_198 = 0xe406b0813c1ef987;
                  }
                  local_1a0 = 0xdc353b92ad010e36;
                  local_f8 = local_188;
                }
                else if (uVar1 == 0xca3bce9847575f3c) {
                  local_198 = 0xe68cb95fd588f9;
                  if (param_5 == 0x20) {
                    local_198 = 0x1e0090bc0d12f7c5;
                  }
                  local_1a0 = 0x8b07adbf7358f726;
                  local_b8 = local_190;
                  local_b0 = local_180;
                }
              }
              else if ((longlong)uVar1 < -0x45a3cb0be0cdcec) {
                if ((longlong)uVar1 < -0x1ced6dae7ed37630) {
                  if (uVar1 == 0xccf99ac44a9b1f9d) {
                    local_198 = 0x14eb7d8bee63058c;
                    if (param_5 == 2) {
                      local_198 = 0x27d3558a31f9a2b4;
                    }
                    local_1a0 = 0x9f0a5c8dc2ee7a53;
                    local_f8 = local_190;
                    local_f0 = local_180;
                  }
                  else if (uVar1 == 0xd8d146d69a0ef9ab) {
                    if ((local_138 | local_160) >> 0x20 == 0) {
                      bVar2 = (byte)((local_138 & 0xffffffff) % (local_160 & 0xffffffff));
                    }
                    else {
                      bVar2 = (byte)(local_138 % local_160);
                    }
                    local_140[-1] = bVar2 | local_1a1;
                    if ((local_138 | local_160) >> 0x20 == 0) {
                      uVar1 = (local_138 & 0xffffffff) / (local_160 & 0xffffffff);
                    }
                    else {
                      uVar1 = local_138 / local_160;
                    }
                    local_188 = local_140 + -1;
                    local_198 = 0x378808eac29a1443;
                    if (local_138 < local_160) {
                      local_198 = 0xd76ac52fc98b1a59;
                    }
                    local_1a0 = 0xef594e3c5894ede8;
                    local_140 = local_188;
                    local_138 = uVar1;
                  }
                }
                else if (uVar1 == 0xe3129251812c89d0) {
                  local_198 = 0x4eb8246ebcbf8038;
                  if ((int)param_5 < 5) {
                    local_198 = 0x70d36298bb3ddfd8;
                  }
                  local_1a0 = 0x21f133a1d42206e7;
                  local_130 = local_190;
                  local_128 = local_180;
                }
                else if (uVar1 == 0xe41d3bd787ce3f9d) {
                  local_148 = (ulonglong)(int)param_5;
                  local_198 = 0xc547b1d62b1734dc;
                  local_1a0 = 0xfc56696a7bdf393c;
                  local_c8 = local_190;
                  local_c0 = local_180;
                }
              }
              else if ((longlong)uVar1 < 0x4d62380f3c79a98) {
                if (uVar1 == 0xfba5c34f41f32314) {
                  local_198 = 0x79b96f4737f93407;
                  if (param_5 == 10) {
                    local_198 = 0x2a890897817ab273;
                  }
                  local_1a0 = 0xf2584e411b744bd8;
                  local_140 = local_190;
                  local_138 = local_180;
                }
                else if (uVar1 == 0x277b1dd86fe6bb7) {
                  local_198 = 0x11eca8f0b5664cd4;
                  if ((int)param_5 < 0x10) {
                    local_198 = 0xcecd3faa4df1557a;
                  }
                  local_1a0 = 0x3568fce50c02766e;
                }
              }
              else if (uVar1 == 0x4d62380f3c79a98) {
                FUN_1802079d0(local_a8,local_90,local_98);
                local_120 = local_a8 + local_98;
                local_198 = 0xb72d78b4eb8462c9;
                local_1a0 = 0x9a7387339e2b02d6;
                local_16c = 0;
              }
              else if (uVar1 == 0x164729d084fa7fba) {
                local_198 = 0xa269c289b00280c1;
                if ((int)param_5 < 3) {
                  local_198 = 0x1d94f8292041983;
                }
                local_1a0 = 0xcd20d546d89f061e;
              }
            }
            if ((longlong)uVar1 < 0x3911d8bc50c80de0) break;
            if ((longlong)uVar1 < 0x5408b3b40eb6c209) {
              if ((longlong)uVar1 < 0x512251396f1fd93f) {
                if (uVar1 == 0x3911d8bc50c80de0) {
                  if ((local_c0 | local_148) >> 0x20 == 0) {
                    uVar1 = (local_c0 & 0xffffffff) / (local_148 & 0xffffffff);
                    uVar4 = (local_c0 & 0xffffffff) % (local_148 & 0xffffffff);
                  }
                  else {
                    uVar1 = local_c0 / local_148;
                    uVar4 = local_c0 % local_148;
                  }
                  local_c8[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar4];
                  local_188 = local_c8 + -1;
                  local_198 = 0xb39e90209b1e9da3;
                  if (local_c0 < local_148) {
                    local_198 = 0xb2bcc38f5ac967f2;
                  }
                  local_1a0 = 0x8a8f489ccbd69043;
                  local_c8 = local_188;
                  local_c0 = uVar1;
                }
                else if (uVar1 == 0x44d0b16ba933be22) {
                  local_198 = 0xad8f5dee554ab330;
                  if ((int)param_5 < 8) {
                    local_198 = 0x12dab980a4ecb028;
                  }
                  local_1a0 = 0x8969cefdd841c7dd;
                }
              }
              else if (uVar1 == 0x512251396f1fd93f) {
                local_130[-1] = (byte)local_128 & 3 | local_1a1;
                local_128 = local_128 >> 2;
                local_188 = local_130 + -1;
                local_198 = 0xefe9dfe27a7276a2;
                if (local_128 == local_178) {
                  local_198 = 0x86f805c88472582c;
                }
                local_1a0 = 0xbecb8edb156daf9d;
                local_130 = local_188;
              }
              else if (uVar1 == 0x516208c9f0cfe949) {
                local_e8[-1] = (byte)local_e0 & 7 | local_1a1;
                local_e0 = local_e0 >> 3;
                local_188 = local_e8 + -1;
                local_198 = 0xd0adddcab04d32e4;
                if (local_e0 == local_178) {
                  local_198 = 0xb9fc5e10d19d2c1c;
                }
                local_1a0 = 0x81cfd5034082dbad;
                local_e8 = local_188;
              }
            }
            else if ((longlong)uVar1 < 0x5ddb1523b1f17150) {
              if (uVar1 == 0x5408b3b40eb6c209) {
                local_198 = 0x67873029137ab54b;
                if ((int)param_5 < 9) {
                  local_198 = 0x59ac2f2f8b28dadd;
                }
                local_1a0 = 0x8ce27e67be73394;
                local_e8 = local_190;
                local_e0 = local_180;
              }
              else if (uVar1 == 0x54df51fc3dbd3048) {
                local_180 = local_100;
                local_a8 = local_108;
                local_190 = local_48;
                local_198 = 0x1afb9e1b6ca37384;
                local_1a0 = 0x5e2b2f70c590cda6;
              }
            }
            else if (uVar1 == 0x5ddb1523b1f17150) {
              local_108 = param_2 + 1;
              *param_2 = 0x2d;
              local_100 = local_178 - param_4;
              local_198 = 0x1b0eab0db978806;
              local_1a0 = 0x556fbb4ce62ab84e;
            }
            else if (uVar1 == 0x6f4917cf689d86df) {
              local_150 = (ulonglong)param_5;
              local_198 = 0x53b258e770a90a15;
              local_1a0 = 0x7350019d351b7dd9;
              local_d8 = local_190;
              local_d0 = local_180;
            }
          }
          if (0x303f82786e0b2e30 < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x24e693138d0b74ed) {
            if (uVar1 == 0x20e2597a45b277cc) {
              if ((local_d0 | local_150) >> 0x20 == 0) {
                cVar3 = (char)((local_d0 & 0xffffffff) % (local_150 & 0xffffffff));
              }
              else {
                cVar3 = (char)(local_d0 % local_150);
              }
              local_d8[-1] = cVar3 + local_1a1;
              if ((local_d0 | local_150) >> 0x20 == 0) {
                uVar1 = (local_d0 & 0xffffffff) / (local_150 & 0xffffffff);
              }
              else {
                uVar1 = local_d0 / local_150;
              }
              local_188 = local_d8 + -1;
              local_198 = 0x4f05f172bf7112c3;
              if (local_d0 < local_150) {
                local_198 = 0x57d4231b6bdc92be;
              }
              local_1a0 = 0x6fe7a808fac3650f;
              local_d8 = local_188;
              local_d0 = uVar1;
            }
            else if (uVar1 == 0x24845415b9643aba) {
              local_198 = 0x60f6b65566261c23;
              if ((int)param_5 < 0x20) {
                local_198 = 0x258c1168fb272783;
              }
              local_1a0 = 0xaacd78cd2171431f;
            }
          }
          else if (uVar1 == 0x24e693138d0b74ed) {
            local_198 = 0x2176962e0a19eb04;
            if ((int)param_5 < 10) {
              local_198 = 0x77099447825142ba;
            }
            local_1a0 = 0x230127f38ce780b3;
          }
          else if (uVar1 == 0x2d5eff8775af601f) {
            *param_1 = local_120;
            *(undefined4 *)(param_1 + 1) = local_16c;
            local_198 = 0x980b83cf1224d8c0;
            local_1a0 = 0xa9a14b74546185b2;
          }
        }
        if (0x31aac8bb46455d71 < (longlong)uVar1) break;
        if (uVar1 == 0x303f82786e0b2e31) {
          local_118[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_110 & 0xf];
          local_110 = local_110 >> 4;
          local_188 = local_118 + -1;
          local_198 = 0xcf621758d550872e;
          if (local_110 == local_178) {
            local_198 = 0xc76e1e332a445eae;
          }
          local_1a0 = 0xff5d9520bb5ba91f;
          local_118 = local_188;
        }
        else if (uVar1 == 0x305d906852599fff) {
          *param_1 = param_3;
          *(undefined4 *)(param_1 + 1) = local_170;
          local_198 = 0xba1fcb483ea30326;
          local_1a0 = 0x8bb503f378e65e54;
        }
      }
      if (uVar1 != 0x38338b13911ff7b1) break;
      local_90 = local_188;
      local_98 = (longlong)local_190 - (longlong)local_188;
      local_16c = local_170;
      local_198 = 0x8f70dbe5a670a2d2;
      if ((longlong)param_3 - (longlong)local_a8 < local_98) {
        local_198 = 0xa6f807e220185855;
      }
      local_1a0 = 0x8ba6f86555b7384a;
      local_120 = param_3;
    }
  } while (uVar1 != 0x31aac8bb46455d72);
  return param_1;
}



void FUN_18000d890(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  byte local_191;
  ulonglong local_190;
  ulonglong local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  ulonglong local_170;
  undefined4 local_164;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined1 *local_148;
  ulonglong local_140;
  undefined1 *local_138;
  ulonglong local_130;
  undefined1 *local_128;
  ulonglong local_120;
  undefined1 *local_118;
  ulonglong local_110;
  undefined1 *local_108;
  ulonglong local_100;
  undefined1 *local_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  ulonglong local_c8;
  longlong local_98;
  undefined1 *local_90;
  undefined1 local_48 [8];

  local_188 = 0x924c57d6107a7ee8;
  local_190 = 0x902ceecb7016c1f3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_188 ^ 0xe9106d7bc31b5290;
              uVar1 = local_188 ^ local_190;
              local_190 = local_190 ^ 0xe9106d7bc31b5290;
              local_188 = uVar4;
              if (0xbab3350fcf2ae6b < (longlong)uVar1) break;
              if ((longlong)uVar1 < -0x5279105e10d1d26e) {
                if ((longlong)uVar1 < -0x6d691ab743cbc414) {
                  if (uVar1 == 0x808766a415cbc537) {
                    local_148[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_140 & 0x1f];
                    local_140 = local_140 >> 5;
                    local_178 = local_148 + -1;
                    local_188 = 0xedf7e55c18805458;
                    if (local_140 == local_170) {
                      local_188 = 0xf956919aa0df2144;
                    }
                    local_190 = 0x6d7083f80d4b916f;
                    local_148 = local_178;
                  }
                  else if (uVar1 == 0x91d75bcdcfe0ad76) {
                    local_188 = 0xb330599d15de3b65;
                    local_190 = 0x1eb6b63cfaf016f7;
                  }
                  else if (uVar1 == 0x925ff5261da7a30e) {
                    local_118[-1] = (byte)local_110 & 7 | local_191;
                    local_110 = local_110 >> 3;
                    local_178 = local_118 + -1;
                    local_188 = 0x2e14ad260512e4fc;
                    if (local_110 == local_170) {
                      local_188 = 0x286d4a62b521f7d9;
                    }
                    local_190 = 0xbc4b580018b547f2;
                    local_118 = local_178;
                  }
                }
                else if (uVar1 == 0x9296e548bc343bec) {
                  local_188 = 0x77ee23a2a3d92c52;
                  local_190 = 0x7df56940c41d3ce8;
                  local_e8 = local_180;
                  local_150 = (ulonglong)param_5;
                  local_e0 = param_4;
                }
                else if (uVar1 == 0x94261262ad94b02b) {
                  local_90 = local_178;
                  local_98 = (longlong)local_180 - (longlong)local_178;
                  local_188 = 0x28c6486c29319b2b;
                  if (param_3 - param_2 < local_98) {
                    local_188 = 0x570c2cf68ad6867b;
                  }
                  local_190 = 0x23fef41946df37e4;
                  local_164 = 0x84;
                  local_d8 = param_3;
                }
                else if (uVar1 == 0xa58a1c6771270617) {
                  local_138[-1] = (byte)local_130 & 1 | local_191;
                  local_130 = local_130 >> 1;
                  local_178 = local_138 + -1;
                  local_188 = 0xa4704fda98315b;
                  if (local_130 == local_170) {
                    local_188 = 0x31087e4a062b8767;
                  }
                  local_190 = 0xa52e6c28abbf374c;
                  local_138 = local_178;
                }
              }
              else if ((longlong)uVar1 < 0x260b91d606cbf1b) {
                if (uVar1 == 0xad86efa1ef2e2d92) {
                  local_158 = (ulonglong)(int)param_5;
                  local_188 = 0xa78a1e7fbdc605a8;
                  local_190 = 0x978fdbadd83f7209;
                  local_108 = local_180;
                  local_100 = param_4;
                }
                else if (uVar1 == 0xb2465fe8984cff80) {
                  local_188 = 0xd81320c584b3a811;
                  if ((int)param_5 < 0x10) {
                    local_188 = 0x9aaefe13b0179cd6;
                  }
                  local_190 = 0xdd437d0899010ca6;
                }
                else if (uVar1 == 0xe5ad7d167d8662e6) {
                  local_188 = 0x5769d935832b965b;
                  if (param_5 == 0x20) {
                    local_188 = 0x4639e45c5900fe1a;
                  }
                  local_190 = 0xc6be82f84ccb3b2d;
                  local_148 = local_180;
                  local_140 = param_4;
                }
              }
              else if ((longlong)uVar1 < 0xa1b4ae267c410ba) {
                if (uVar1 == 0x260b91d606cbf1b) {
                  local_170 = 0;
                  local_160 = 10;
                  local_191 = 0x30;
                  local_180 = local_48;
                  local_188 = 0x73bb6751baa89860;
                  local_190 = 0x1eb2f03d1b38a083;
                }
                else if (uVar1 == 0x5505dcd1db2a4b7) {
                  local_188 = 0xcf51858f77fbde6;
                  if ((int)param_5 < 0x20) {
                    local_188 = 0xb38a4c5f3b139c2c;
                  }
                  local_190 = 0xe958654e8af9df00;
                }
              }
              else if (uVar1 == 0xa1b4ae267c410ba) {
                if ((local_e0 | local_150) >> 0x20 == 0) {
                  cVar3 = (char)((local_e0 & 0xffffffff) % (local_150 & 0xffffffff));
                }
                else {
                  cVar3 = (char)(local_e0 % local_150);
                }
                local_e8[-1] = cVar3 + local_191;
                if ((local_e0 | local_150) >> 0x20 == 0) {
                  uVar1 = (local_e0 & 0xffffffff) / (local_150 & 0xffffffff);
                }
                else {
                  uVar1 = local_e0 / local_150;
                }
                local_178 = local_e8 + -1;
                local_188 = 0xd276fc1485d7c8ad;
                if (local_e0 < local_150) {
                  local_188 = 0x4c4ba4944f87683c;
                }
                local_190 = 0xd86db6f6e213d817;
                local_e8 = local_178;
                local_e0 = uVar1;
              }
              else if (uVar1 == 0xb38bc756feeaccf) {
                FUN_1802079d0(param_2,local_90,local_98);
                local_d8 = local_98 + param_2;
                local_188 = 0xa0dc97ff45e54a7d;
                local_190 = 0xd42e4f1089ecfbe2;
                local_164 = 0;
              }
            }
            if (0x5ad22911b1ea432b < (longlong)uVar1) break;
            if ((longlong)uVar1 < 0x3005c5d265f977a1) {
              if (uVar1 == 0xbab3350fcf2ae6c) {
                local_188 = 0xdae1a98bcef29432;
                if ((int)param_5 < 5) {
                  local_188 = 0x2721d1c2676756a5;
                }
                local_190 = 0x48774cc372c6afde;
                local_d0 = local_180;
                local_c8 = param_4;
              }
              else if (uVar1 == 0x23a2bc51f2f43afe) {
                local_188 = 0x9158cf5c3c485093;
                if ((int)param_5 < 4) {
                  local_188 = 0xc0210910c912e251;
                }
                local_190 = 0x9af3fc0cc0bafeff;
              }
              else if (uVar1 == 0x249b0a8ad6b7d589) {
                local_188 = 0x684b2b6c9283f7dd;
                if ((int)param_5 < 10) {
                  local_188 = 0xa91a454ca9031ee5;
                }
                local_190 = 0xda0d74840acf085d;
              }
            }
            else if ((longlong)uVar1 < 0x3e5d256c90121d52) {
              if (uVar1 == 0x3005c5d265f977a1) {
                if ((local_100 | local_158) >> 0x20 == 0) {
                  uVar1 = (local_100 & 0xffffffff) / (local_158 & 0xffffffff);
                  uVar4 = (local_100 & 0xffffffff) % (local_158 & 0xffffffff);
                }
                else {
                  uVar1 = local_100 / local_158;
                  uVar4 = local_100 % local_158;
                }
                local_108[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar4];
                local_178 = local_108 + -1;
                local_188 = 0xbbbbb464fafc9c29;
                if (local_100 < local_158) {
                  local_188 = 0x1f9863d432915ba3;
                }
                local_190 = 0x8bbe71b69f05eb88;
                local_108 = local_178;
                local_100 = uVar1;
              }
              else if (uVar1 == 0x3235222aecfb28a4) {
                local_128[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_120 & 0xf];
                local_120 = local_120 >> 4;
                local_178 = local_128 + -1;
                local_188 = 0x2804da5db17cd287;
                if (local_120 == local_170) {
                  local_188 = 0x8e17ea15f0134a08;
                }
                local_190 = 0x1a31f8775d87fa23;
                local_128 = local_178;
              }
            }
            else if (uVar1 == 0x3e5d256c90121d52) {
              if ((local_f0 | local_160) >> 0x20 == 0) {
                bVar2 = (byte)((local_f0 & 0xffffffff) % (local_160 & 0xffffffff));
              }
              else {
                bVar2 = (byte)(local_f0 % local_160);
              }
              local_f8[-1] = bVar2 | local_191;
              if ((local_f0 | local_160) >> 0x20 == 0) {
                uVar1 = (local_f0 & 0xffffffff) / (local_160 & 0xffffffff);
              }
              else {
                uVar1 = local_f0 / local_160;
              }
              local_178 = local_f8 + -1;
              local_188 = 0x5547c47490da62d4;
              if (local_f0 < local_160) {
                local_188 = 0xff3cf37aad5ccfad;
              }
              local_190 = 0x6b1ae11800c87f86;
              local_f8 = local_178;
              local_f0 = uVar1;
            }
            else if (uVar1 == 0x47ed831b29169070) {
              local_188 = 0x7a45bc188995e726;
              if (param_5 == 10) {
                local_188 = 0xd5cfc2b9d6675702;
              }
              local_190 = 0xeb92e7d546754a50;
              local_f8 = local_180;
              local_f0 = param_4;
            }
          }
          if (0x6d09976ca19038e2 < (longlong)uVar1) break;
          if (uVar1 == 0x5ad22911b1ea432c) {
            local_188 = 0x1ac128e1b1767e5b;
            if (param_5 == 0x10) {
              local_188 = 0xb9235106926dfb89;
            }
            local_190 = 0x8b16732c7e96d32d;
            local_128 = local_180;
            local_120 = param_4;
          }
          else if (uVar1 == 0x5ad2f51c09a81cae) {
            local_188 = 0xeef98427815eaf0c;
            if ((int)param_5 < 3) {
              local_188 = 0x14bb18720500ce63;
            }
            local_190 = 0x7c6f616f3d6a94e0;
          }
          else if (uVar1 == 0x68d4791d386a5a83) {
            local_188 = 0x52832dcd10150734;
            if (param_5 == 2) {
              local_188 = 0x66de6a67aed2ac55;
            }
            local_190 = 0xc3547600dff5aa42;
            local_138 = local_180;
            local_130 = param_4;
          }
        }
        if (0x731731c8a3cc16b7 < (longlong)uVar1) break;
        if (uVar1 == 0x6d09976ca19038e3) {
          local_188 = 0xdcc9caad7eed826b;
          if ((int)param_5 < 8) {
            local_188 = 0xdbf07c765aae6d1c;
          }
          local_190 = 0xf852c027a85a57e2;
        }
        else if (uVar1 == 0x6f569d0115a1f97b) {
          local_d0[-1] = (byte)local_c8 & 3 | local_191;
          local_c8 = local_c8 >> 2;
          local_178 = local_d0 + -1;
          local_188 = 0x8554dffd8b6cc461;
          if (local_c8 == local_170) {
            local_188 = 0x7e24509e33598d31;
          }
          local_190 = 0xea0242fc9ecd3d1a;
          local_d0 = local_178;
        }
      }
      if (uVar1 != 0x731731c8a3cc16b8) break;
      local_188 = 0xdcd1c65ea0084e22;
      if ((int)param_5 < 9) {
        local_188 = 0xdc18d630019bd6c0;
      }
      local_190 = 0x4e4723161c3c75ce;
      local_118 = local_180;
      local_110 = param_4;
    }
  } while (uVar1 != 0x74f2d8efcc09b19f);
  *param_1 = local_d8;
  *(undefined4 *)(param_1 + 1) = local_164;
  return;
}



void FUN_18000e5f0(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  float fVar11;
  undefined2 *puVar12;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar13;
  undefined2 *local_d8 [2];
  undefined8 *local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [24];
  undefined2 local_90 [6];
  float local_84;
  undefined2 *local_80;
  float local_74;
  uint local_70;
  uint local_6c;
  float local_68;
  undefined1 local_61;
  undefined8 local_60;

  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_68 = 0.0;
  local_b8 = 1;
  local_b0 = 3;
  local_74 = 5.877472e-39;
  local_61 = 0x2d;
  local_70 = 0x7f800000;
  local_6c = 0x7fffff;
  local_c8 = param_1;
  if (NAN(param_3)) {
    fVar3 = (float)FUN_1801e13c0();
    puVar6 = (undefined2 *)local_a8;
    if (fVar3 != local_68) {
      puVar6 = (undefined2 *)(local_a8 + 1);
      local_a8[0] = local_61;
    }
    uVar13 = 1;
    FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
    *(undefined1 *)(puVar6 + 1) = DAT_1802a189a;
    *puVar6 = DAT_1802a1898;
    puVar6 = (undefined2 *)((longlong)puVar6 + 3);
    if (puVar6 == (undefined2 *)local_a8) goto LAB_18000e6a4;
LAB_18000e89a:
    if ((undefined2 *)local_a8 == puVar6) goto LAB_18000e8ee;
  }
  else {
LAB_18000e6a4:
    fVar3 = local_68;
    lVar9 = local_b0;
    if ((int)param_3 < (int)local_68) {
      puVar10 = local_a8 + 1;
      local_a8[0] = local_61;
      fVar7 = (float)((uint)param_3 & (uint)DAT_1802097e0);
    }
    else {
      puVar10 = local_a8;
      fVar7 = param_3;
    }
    puVar6 = local_90;
    if ((local_70 & (uint)fVar7) != local_70) {
      if (local_68 == fVar7) {
        *puVar10 = 0x30;
        puVar6 = (undefined2 *)(puVar10 + 1);
      }
      else {
        uVar8 = local_6c & (uint)fVar7;
        uVar4 = FUN_180010430(uVar8,(uint)fVar7 >> 0x17);
        FUN_180011bb0(local_d8,puVar10,puVar6,uVar4,CONCAT44(uVar13,local_68),uVar8,(uint)fVar7 >> 0x17);
        puVar6 = local_d8[0];
      }
      goto LAB_18000e89a;
    }
    local_84 = local_68;
    fVar11 = (float)(local_6c & (uint)fVar7);
    local_80 = (undefined2 *)&DAT_1802a18a0;
    local_c0 = puVar10;
    FUN_18004e1e3(&DAT_1802a18a0,&DAT_180270745,0x19,4,&DAT_1802a18a4);
    fVar2 = local_74;
    if (fVar11 != fVar3) {
      lVar9 = 8;
      local_80 = (undefined2 *)&DAT_1802a18a8;
      FUN_18004e1e3(&DAT_1802a18a8,&DAT_18027077d,0x1e,9,&DAT_1802a18b4);
      fVar3 = local_68;
      if (((int)local_84 <= (int)param_3) || (fVar11 != fVar2)) {
        fVar7 = (float)((uint)fVar7 & (uint)local_74);
        puVar12 = (undefined2 *)&DAT_1802a18b8;
        FUN_18004e1e3(&DAT_1802a18b8,&DAT_1802707c3,0x10,10,&DAT_1802a18c4);
        FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
        lVar9 = 9;
        if (fVar7 != fVar3) {
          puVar12 = &DAT_1802a1898;
          lVar9 = local_b0;
        }
        local_80 = puVar12;
      }
    }
    puVar10 = local_c0;
    if (lVar9 <= (longlong)puVar6 - (longlong)local_c0) {
      FUN_1802079d0(local_c0,local_80,lVar9);
      puVar6 = (undefined2 *)(puVar10 + lVar9);
      goto LAB_18000e89a;
    }
  }
  puVar12 = (undefined2 *)local_a8;
  do {
    uVar1 = *(undefined1 *)puVar12;
    lVar9 = param_2[2];
    uVar5 = local_b8 + lVar9;
    if ((ulonglong)param_2[3] < uVar5) {
      (**(code **)*param_2)(param_2);
      lVar9 = param_2[2];
      uVar5 = local_b8 + lVar9;
    }
    param_2[2] = uVar5;
    *(undefined1 *)(param_2[1] + lVar9) = uVar1;
    puVar12 = (undefined2 *)((longlong)puVar12 + 1);
  } while (puVar12 != puVar6);
LAB_18000e8ee:
  *local_c8 = param_2;
  return;
}



void Unwind_18000e990(void)

{
  Unwind_1801dd394();
}



undefined8 * FUN_18000e9c0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined *in_stack_ffffffffffffff68;
  undefined4 uVar4;
  ulonglong local_80;
  ulonglong local_78;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;

  local_78 = 0xaef158ffb09fdc11;
  local_80 = 0xcc4d045e5eb601ff;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
            uVar3 = local_78 ^ 0x2dcea03b5aca409f;
            uVar1 = local_78 ^ local_80;
            local_80 = local_80 ^ 0x2dcea03b5aca409f;
            local_78 = uVar3;
            if (0x3090ad5dfbafd8f8 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x2bcf8644a677c2fb) {
              if (uVar1 == 0x8374ac6f05bcffaf) {
                local_78 = 0x53a5dca2051cad99;
                if (param_2 == param_3) {
                  local_78 = 0x3894d379e13b64b8;
                }
                local_80 = 0x548fdb8768db3496;
              }
              else if (uVar1 == 0xad7fa58325f41018) {
                in_stack_ffffffffffffff68 = (undefined *)CONCAT44(uVar4,local_68 - 0x96);
                FUN_18000efe0(param_1,param_2,param_3,local_6c + 0x800000,in_stack_ffffffffffffff68);
                local_78 = 0x118ad8a74806c66a;
                local_80 = 0x211a75fab3a91e93;
              }
              else if (uVar1 == 0xbb18cd1c6c890fca) {
                local_78 = 0x7e6a0fe9778c3e51;
                if (local_5c < 0x4b800000) {
                  local_78 = 0x9139a715bc8c9f7c;
                }
                local_80 = 0xd315aa6a52782e49;
              }
            }
            else if ((longlong)uVar1 < 0x72a07256dc7990f) {
              if (uVar1 == 0xd43079bb59883d05) {
                *param_1 = param_3;
                *(undefined4 *)(param_1 + 1) = local_64;
                local_78 = 0xb49b76e2036153a0;
                local_80 = 0x840bdbbff8ce8b59;
              }
              else if (uVar1 == 0xe0caec5934921912) {
                uVar2 = FUN_180010430(local_6c,local_68);
                in_stack_ffffffffffffff68 = (undefined *)CONCAT44(uVar4,param_5);
                FUN_180011bb0(param_1,param_2,param_3,uVar2,in_stack_ffffffffffffff68,local_6c,local_68);
                local_78 = 0xb7623285ef21216a;
                local_80 = 0x87f29fd8148ef993;
              }
            }
            else if (uVar1 == 0x72a07256dc7990f) {
              *(undefined1 *)param_2 = 0x30;
              *param_1 = (undefined1 *)((longlong)param_2 + 1);
              *(undefined4 *)(param_1 + 1) = local_70;
              local_78 = 0xc44bd5a96d6cd960;
              local_80 = 0xf4db78f496c30199;
            }
            else if (uVar1 == 0xa99bdd22ae7ed54) {
              local_6c = local_5c & 0x7fffff;
              local_68 = local_5c >> 0x17;
              local_78 = 0xd54cd46c80e8f3f7;
              if (param_5 == local_60) {
                local_78 = 0x8e9ef529d8f3e52f;
              }
              local_80 = 0x35863835b47aeae5;
            }
          }
          if ((longlong)uVar1 < 0x6c1b08fe89e0502e) break;
          if (uVar1 == 0x6c1b08fe89e0502e) {
            *param_1 = param_3;
            *(undefined4 *)(param_1 + 1) = local_64;
            local_78 = 0xc8e08f15a301de6;
            local_80 = 0x3c1ea5aca19fc51f;
          }
          else if (uVar1 == 0x6e9aca4f027c4955) {
            local_78 = 0x760c015cdfaa449b;
            if (param_5 == 1) {
              local_78 = 0xb1d306c68c2c6019;
            }
            local_80 = 0xf578ad33da16bb34;
          }
          else if (uVar1 == 0x7b1d1b151149967a) {
            in_stack_ffffffffffffff68 = &DAT_1802a18d0;
            FUN_18004e1e3(&DAT_1802a18c8,&DAT_1802707f1,0x1b,6,&DAT_1802a18d0);
            *(undefined1 *)(param_2 + 1) = DAT_1802a18cc;
            *param_2 = DAT_1802a18c8;
            *param_1 = (undefined1 *)((longlong)param_2 + 5);
            *(undefined4 *)(param_1 + 1) = local_70;
            local_78 = 0xb999ad27d87460ad;
            local_80 = 0x8909007a23dbb854;
          }
        }
        if ((longlong)uVar1 < 0x44ababf5563adb2d) break;
        if (uVar1 == 0x44ababf5563adb2d) {
          local_78 = 0xecb014b7305b8519;
          if ((longlong)param_3 - (longlong)param_2 < 5) {
            local_78 = 0x439d7619789a2e66;
          }
          local_80 = 0x97ad0fa221121363;
        }
        else if (uVar1 == 0x62bc5ca1ee29ddee) {
          local_70 = 0;
          local_60 = 2;
          local_64 = 0x84;
          local_78 = 0x404f10e6e7e5b86;
          if (param_4 == 0) {
            local_78 = 0x6007869346e5ff87;
          }
          local_80 = 0xe9d4cdc4499b6d2;
          local_5c = param_4;
        }
      }
      if (uVar1 != 0x422c0d7feef4b135) break;
      uVar2 = FUN_180010430(local_6c,local_68);
      in_stack_ffffffffffffff68 = (undefined *)CONCAT44(uVar4,local_60);
      FUN_180011bb0(param_1,param_2,param_3,uVar2,in_stack_ffffffffffffff68,local_6c,local_68);
      local_78 = 0x2461f1d4fde51a78;
      local_80 = 0x14f15c89064ac281;
    }
  } while (uVar1 != 0x3090ad5dfbafd8f9);
  return param_1;
}



void FUN_18000efe0(undefined8 *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  ulonglong local_1e0;
  uint local_1d4;
  byte local_1cd;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  ushort local_1b6;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  byte *local_190;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  int local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  longlong local_118;
  ulonglong local_110;
  byte local_108;
  byte *local_100;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  byte *local_b0;
  byte *local_98;
  longlong local_90;
  byte *local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  uint auStack_68 [4];
  uint local_58 [4];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_208;
  local_1e0 = 0xad68b2866a2bb495;
  local_1e8 = 0x533b6ad52b4e84;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar4 = local_1e0 ^ 0x6a1564236aaef17d;
                uVar2 = local_1e0 ^ local_1e8;
                local_1e8 = local_1e8 ^ 0x6a1564236aaef17d;
                bVar3 = (byte)local_1cc;
                local_1e0 = uVar4;
                if (0x16ee28a59e29f525 < (longlong)uVar2) break;
                if ((longlong)uVar2 < -0x32e6f0c6d4b38f35) {
                  if ((longlong)uVar2 < -0x5b1eb44cb1993ce0) {
                    if ((longlong)uVar2 < -0x79ff737dbd3729b8) {
                      if (uVar2 == 0x82f0fd3d00e29fb8) {
                        local_58[local_f4 + local_164] = local_e8;
                        local_148 = param_4 >> (-(char)local_ec & 0x1fU);
                        local_1e0 = 0xa5025958d450805b;
                        local_1e8 = 0x9f712dd65d83d3cf;
                      }
                      else if (uVar2 == 0x85c316700892407e) {
                        local_19c = local_13c;
                        local_1c8 = local_58[0];
                        local_1e0 = 0x1c01683d30050c5c;
                        if (local_160 < local_58[0]) {
                          local_1e0 = 0x9ec285bcf4c04baf;
                        }
                        local_1c4 = 10;
                        local_1e8 = 0x5e7ac69fa7e9224b;
                      }
                    }
                    else if (uVar2 == 0x86008c8242c8d648) {
                      local_1e0 = 0xe400b7006645f2cc;
                      if (local_184 < local_1c8) {
                        local_1e0 = 0x5d133001778f67f6;
                      }
                      local_1c4 = 3;
                      local_1e8 = 0x9dab732224a60e12;
                    }
                    else if (uVar2 == 0x8d745ea78b50a0ba) {
                      local_100 = local_190 + 9;
                      local_1e0 = 0xae3e16911eb8f7fc;
                      if (local_d0 < local_70) {
                        local_1e0 = 0x34b81fa76cb007fe;
                      }
                      local_1a4 = local_1d4;
                      local_1e8 = 0xc6d905e03c98165d;
                      local_b8 = local_80;
                      local_b0 = local_100;
                    }
                  }
                  else if ((longlong)uVar2 < -0x52c4761340ff05ef) {
                    if (uVar2 == 0xa4e14bb34e66c320) {
                      local_1c4 = 7;
                      local_1e0 = 0xa235d7f4fd71e754;
                      if (999999 < local_1c8) {
                        local_1e0 = 0x4d3d57b5053c4021;
                      }
                      local_1e8 = 0x8d851496561529c5;
                    }
                    else if (uVar2 == 0xaa523330be61d06d) {
                      local_98 = param_2 + local_1b0;
                      local_12c = local_1d4;
                      local_1e0 = 0xb0c64c3eeee07aea;
                      local_1e8 = 0xa628649b70c98fcc;
                      local_130 = local_1c8;
                    }
                  }
                  else if (uVar2 == 0xad3b89ecbf00fa11) {
                    local_160 = 999999999;
                    local_1d4 = 0;
                    local_d0 = 1;
                    local_1a8 = -10000;
                    local_118 = 0;
                    local_1c0 = 100;
                    local_108 = 0x20;
                    local_164 = -2;
                    local_168 = 9999;
                    local_1bc = 9;
                    local_110 = 1000000000;
                    local_1b4 = -1;
                    local_16c = 99999999;
                    local_170 = 10000;
                    local_1cc = 1;
                    local_174 = 5;
                    local_184 = 99;
                    local_1cd = 0x30;
                    local_178 = 4;
                    local_1ac = -1000000000;
                    local_1b6 = 100;
                    local_17c = 2;
                    local_180 = 1000000000;
                    local_58[0] = 0;
                    local_58[1] = 0;
                    local_58[2] = 0;
                    local_58[3] = 0;
                    local_f4 = param_5 + 0x37 >> 5;
                    local_f0 = local_f4 - 1;
                    local_ec = param_5 & 0x1f;
                    local_148 = param_4 << (sbyte)local_ec;
                    local_1e0 = 0x39598df2b91ee146;
                    if (local_ec < 9) {
                      local_1e0 = 0x81da0441302f2d6a;
                    }
                    local_1e8 = 0xbba970cfb9fc7efe;
                    local_e8 = local_148;
                  }
                  else if (uVar2 == 0xc0b84323532969e4) {
                    local_1b0 = local_1c4;
                    local_1e0 = 0xc6d49e44210eacd3;
                    if ((longlong)param_3 - (longlong)param_2 < (longlong)(ulonglong)(local_19c * local_1bc + local_1c4)
                       ) {
                      local_1e0 = 0xa226ab1b3696d800;
                    }
                    local_1e8 = 0xcac1b86a14b639a1;
                    local_1a4 = 0x84;
                    local_100 = param_3;
                  }
                }
                else if ((longlong)uVar2 < 0x71d667c93806cbb) {
                  if ((longlong)uVar2 < -0xd9ee5b8afd7ee5d) {
                    if (uVar2 == 0xcd190f392b4c70cb) {
                      local_1e0 = 0xb17346f654de57e8;
                      if (999 < local_1c8) {
                        local_1e0 = 0xf7cb8957453fe844;
                      }
                      local_1e8 = 0x3773ca74161681a0;
                      local_1c4 = local_178;
                    }
                    else if (uVar2 == 0xd1edc21f2e64f5e9) {
                      local_1c4 = 8;
                      local_1e0 = 0x8faba697ce1d1eb5;
                      if (9999999 < local_1c8) {
                        local_1e0 = 0xebf2ae07d352b471;
                      }
                      local_1e8 = 0x2b4aed24807bdd95;
                    }
                  }
                  else if (uVar2 == 0xf2611a47502811a3) {
                    local_190 = local_b0;
                    local_70 = local_b8;
                    local_80 = local_b8 - 1;
                    local_15c = auStack_68[local_80];
                    local_1e0 = 0xb157d229de660b6b;
                    if (local_15c == local_1d4) {
                      local_1e0 = 0xce605cd7a8d042cb;
                    }
                    local_1e8 = 0xc6c7fb636ad5376c;
                  }
                  else if (uVar2 == 0x412244b21497779) {
                    uVar2 = (ulonglong)local_150 << (local_108 & 0x3f);
                    uVar5 = local_58[local_1b4 + local_154];
                    if ((uVar2 | local_110) >> 0x20 == 0) {
                      uVar1 = (uint)((uVar2 & 0xffffffff | (ulonglong)uVar5) / (local_110 & 0xffffffff));
                    }
                    else {
                      uVar1 = (uint)((uVar2 | uVar5) / local_110);
                    }
                    local_58[local_1b4 + local_154] = uVar1;
                    local_154 = local_154 + local_164;
                    uVar2 = (ulonglong)(local_1ac * uVar1 + uVar5) << (local_108 & 0x3f);
                    uVar5 = local_58[local_154];
                    if ((uVar2 | local_110) >> 0x20 == 0) {
                      uVar1 = (uint)((uVar2 & 0xffffffff | (ulonglong)uVar5) / (local_110 & 0xffffffff));
                    }
                    else {
                      uVar1 = (uint)((uVar2 | uVar5) / local_110);
                    }
                    local_150 = local_1ac * uVar1 + uVar5;
                    local_58[local_154] = uVar1;
                    local_1e0 = 0xd1d704e25746db0a;
                    if (local_154 == local_1d4) {
                      local_1e0 = 0xf5959d173f347bbc;
                    }
                    local_1e8 = 0xd5c520a9760fac73;
                    local_14c = local_150;
                  }
                }
                else if ((longlong)uVar2 < 0x9d53571d4f77b0c) {
                  if (uVar2 == 0x71d667c93806cbb) {
                    local_c0 = (ulonglong)local_1b0;
                    *(undefined2 *)(param_2 + (local_118 - (ulonglong)local_d8) + -2 + local_c0) =
                         *(undefined2 *)(&DAT_1802098a0 + ((ulonglong)local_120 << (bVar3 & 0x3f)));
                    local_1e0 = 0x849d3ce3c46e9a30;
                    local_1e8 = 0xae2a8c2ab6be78fb;
                  }
                  else if (uVar2 == 0x8a7a7b4c20575a7) {
                    local_190[0] = 0x30;
                    local_190[1] = 0x30;
                    local_190[2] = 0x30;
                    local_190[3] = 0x30;
                    local_190[4] = 0x30;
                    local_190[5] = 0x30;
                    local_190[6] = 0x30;
                    local_190[7] = 0x30;
                    local_190[8] = 0x30;
                    local_1e0 = 0x9337626a138a7a23;
                    local_1e8 = 0x1e433ccd98dada99;
                  }
                }
                else if (uVar2 == 0x9d53571d4f77b0c) {
                  local_13c = (uint)local_90;
                  local_1e0 = 0x61d60f68dd1a11c0;
                  local_1e8 = 0xe4151918d58851be;
                }
                else if (uVar2 == 0xa65e7453bcf6370) {
                  local_120 = local_134;
                  local_d8 = local_138;
                  local_1e0 = 0xa32e95ed4d1d90b7;
                  if (local_1bc < local_134) {
                    local_1e0 = 0x80f5ec8f88429b15;
                  }
                  local_1e8 = 0x87e88af31bc2f7ae;
                }
                else if (uVar2 == 0xc15262e35b89572) {
                  local_124 = local_1c8;
                  local_128 = local_1d4;
                  local_1e0 = 0x8aa0b8ee674d1a0;
                  if (local_168 < local_1c8) {
                    local_1e0 = 0xd826ffdf884dcaa2;
                  }
                  local_1e8 = 0x7274ccef362c1acf;
                }
              }
              if (0x2fb0c362ab64ce90 < (longlong)uVar2) break;
              if ((longlong)uVar2 < 0x24c61f1e56df6719) {
                if ((longlong)uVar2 < 0x1d34b309eec63ca6) {
                  if (uVar2 == 0x16ee28a59e29f526) {
                    local_124 = local_130 / local_170;
                    uVar5 = local_1a8 * local_124 + local_130;
                    *(undefined2 *)(local_98 + (local_118 - (ulonglong)local_12c) + -2) =
                         *(undefined2 *)(&DAT_1802098a0 + ((ulonglong)uVar5 % (ulonglong)local_1c0 << (bVar3 & 0x3f)));
                    *(undefined2 *)(local_98 + (local_118 - (ulonglong)local_12c) + -4) =
                         *(undefined2 *)(&DAT_1802098a0 + ((ulonglong)uVar5 / (ulonglong)local_1c0 << (bVar3 & 0x3f)));
                    local_12c = local_178 + local_12c;
                    local_1e0 = 0x2de1932495037100;
                    if (local_16c < local_130) {
                      local_1e0 = 0x41d17ce0db724f49;
                    }
                    local_1e8 = 0x573f5445455bba6f;
                    local_130 = local_124;
                    local_128 = local_12c;
                  }
                  else if (uVar2 == 0x1a8ad38e2d601f13) {
                    local_144 = local_1a0 + local_1b4;
                    uVar2 = (ulonglong)local_e0 << (local_108 & 0x3f);
                    uVar5 = local_58[local_144];
                    if ((uVar2 | local_110) >> 0x20 == 0) {
                      uVar1 = (uint)((uVar2 & 0xffffffff | (ulonglong)uVar5) / (local_110 & 0xffffffff));
                    }
                    else {
                      uVar1 = (uint)((uVar2 | uVar5) / local_110);
                    }
                    local_140 = local_1ac * uVar1 + uVar5;
                    local_58[local_144] = uVar1;
                    local_1e0 = 0x426b48554402e01;
                    local_1e8 = 0x7b6d3aaa7523c7f7;
                    local_dc = local_140;
                  }
                }
                else if (uVar2 == 0x1d34b309eec63ca6) {
                  local_1e0 = 0x6b51c96c3c8f6db2;
                  if (local_168 < local_1c8) {
                    local_1e0 = 0x66f0857644ea749d;
                  }
                  local_1e8 = 0xa648c65517c31d79;
                  local_1c4 = local_174;
                }
                else if (uVar2 == 0x2050bdbe493bd7cf) {
                  local_c8 = local_d0 + local_78;
                  local_1e0 = 0xbcc1215b2a7a3af5;
                  if (local_1b4 + local_1a0 != local_1d4) {
                    local_1e0 = 0x9384f5f2d76341a5;
                  }
                  local_158 = local_1b4 + local_1a0;
                  if (local_160 < local_e4) {
                    local_158 = local_1a0;
                  }
                  auStack_68[local_78] = local_14c;
                  if (local_160 < local_e4) {
                    local_1e0 = 0x9384f5f2d76341a5;
                  }
                  local_1e8 = 0xb514142afe8d41f9;
                  local_90 = local_c8;
                }
              }
              else if ((longlong)uVar2 < 0x284d913a903e7152) {
                if (uVar2 == 0x24c61f1e56df6719) {
                  *param_2 = local_1cd | (byte)local_120;
                  local_c0 = (ulonglong)local_1b0;
                  local_1e0 = 0xca13831a31bce332;
                  local_1e8 = 0xe0a433d3436c01f9;
                }
                else if (uVar2 == 0x2690e1d829ee005c) {
                  local_1a0 = local_158;
                  local_78 = local_c8;
                  local_e4 = local_58[local_158];
                  local_140 = local_e4 % local_180;
                  local_58[local_158] = local_e4 / local_180;
                  local_1e0 = 0x1c0a86ba39a897aa;
                  if ((local_1cc & local_158) == local_1d4) {
                    local_1e0 = 0x79cbdb1b35ab614f;
                  }
                  local_1e8 = 0x680553414c888b9;
                  local_144 = local_158;
                  local_e0 = local_140;
                }
              }
              else if (uVar2 == 0x284d913a903e7152) {
                local_134 = (uint)((ushort)local_d4 / local_1b6);
                *(undefined2 *)(param_2 + (local_118 - (ulonglong)local_11c) + -2 + (ulonglong)local_1b0) =
                     *(undefined2 *)(&DAT_1802098a0 + (((local_d4 & 0xffff) % (uint)local_1b6 & 0x7fff) << 1));
                local_138 = local_11c | local_17c;
                local_1e0 = 0xa31a7c6bf2b40003;
                local_1e8 = 0xa97f9b2ec97b6373;
              }
              else if (uVar2 == 0x2ab7b0c972d0e2cb) {
                local_100 = param_2 + local_c0;
                local_1e0 = 0x70719ea2517ddee0;
                if ((int)local_1d4 < (int)local_19c) {
                  local_1e0 = 0x474ecdb154981c48;
                }
                local_1e8 = 0x18968dd3735d3f41;
                local_1a4 = local_1d4;
                local_88 = local_100;
              }
            }
            if (0x68e713712220e1a0 < (longlong)uVar2) break;
            if ((longlong)uVar2 < 0x427baea297ec2e17) {
              if (uVar2 == 0x2fb0c362ab64ce91) {
                local_1c4 = 6;
                local_1e0 = 0x38ca32c495f7b908;
                if (99999 < local_1c8) {
                  local_1e0 = 0xe546c2ee2818ec4a;
                }
                local_1e8 = 0x25fe81cd7b3185ae;
              }
              else if (uVar2 == 0x3a73748e89d35394) {
                local_158 = local_f0;
                local_58[local_f0] = local_148;
                local_c8 = local_118;
                local_1e0 = 0xd2e72ec659b7c355;
                if (local_f0 == local_1d4) {
                  local_1e0 = 0x71b4d96e78cb8377;
                }
                local_1e8 = 0xf477cf1e7059c309;
                local_13c = local_1d4;
              }
            }
            else if (uVar2 == 0x427baea297ec2e17) {
              local_1e0 = 0xdb3ccb350eee434;
              if (local_16c < local_1c8) {
                local_1e0 = 0x1ce64d8f2da37839;
              }
              local_1e8 = 0xdc5e0eac7e8a11dd;
              local_1c4 = local_1bc;
            }
            else if (uVar2 == 0x5fd8406227c52309) {
              local_b8 = (ulonglong)local_19c;
              local_1e0 = 0x2bfda463abfcdeca;
              local_1e8 = 0xd99cbe24fbd4cf69;
              local_b0 = local_88;
            }
          }
          if ((longlong)uVar2 < 0x7adec761d058cb6f) break;
          if (uVar2 == 0x7adec761d058cb6f) {
            local_d4 = local_124;
            local_11c = local_128;
            local_1e0 = 0xe781b6fd91c5b3c5;
            if (local_184 < local_124) {
              local_1e0 = 0xc5a9c0823a34a1e7;
            }
            local_1e8 = 0xede451b8aa0ad0b5;
            local_138 = local_128;
            local_134 = local_124;
          }
          else if (uVar2 == 0x7f4b8e2f2163e9f6) {
            local_1e0 = 0xd826f36d6d911ad1;
            if (local_1a0 == local_1cc) {
              local_1e0 = 0xfc646a9805e3ba67;
            }
            local_1e8 = 0xdc34d7264cd86da8;
            local_154 = local_144;
            local_150 = local_140;
            local_14c = local_dc;
          }
        }
        if (uVar2 != 0x7790294ab4b33c07) break;
        uVar5 = local_1a8 * (local_15c / local_170) + local_15c;
        *(undefined2 *)(local_190 + 7) =
             *(undefined2 *)(&DAT_1802098a0 + ((ulonglong)uVar5 % (ulonglong)local_1c0 << (bVar3 & 0x3f)));
        *(undefined2 *)(local_190 + 5) =
             *(undefined2 *)(&DAT_1802098a0 + ((ulonglong)uVar5 / (ulonglong)local_1c0 << (bVar3 & 0x3f)));
        uVar5 = local_1a8 * (int)((ulonglong)local_15c / 100000000) + local_15c / local_170;
        *(undefined2 *)(local_190 + 3) =
             *(undefined2 *)(&DAT_1802098a0 + ((ulonglong)uVar5 % (ulonglong)local_1c0 << (bVar3 & 0x3f)));
        *(undefined2 *)(local_190 + 1) =
             *(undefined2 *)(&DAT_1802098a0 + ((ulonglong)uVar5 / (ulonglong)local_1c0 << (bVar3 & 0x3f)));
        *local_190 = (char)((ulonglong)local_15c / 100000000) + local_1cd;
        local_1e0 = 0x947a3c618c011107;
        local_1e8 = 0x190e62c60751b1bd;
      }
      if (uVar2 != 0x79abc42242e3fcde) break;
      local_1c4 = local_17c;
      if (local_1c8 <= local_1bc) {
        local_1c4 = local_1cc;
      }
      local_1e0 = 0x7ddd75cecf661976;
      local_1e8 = 0xbd6536ed9c4f7092;
    }
  } while (uVar2 != 0x68e713712220e1a1);
  *param_1 = local_100;
  *(uint *)(param_1 + 1) = local_1a4;
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_208)) {
  }
  return;
}


