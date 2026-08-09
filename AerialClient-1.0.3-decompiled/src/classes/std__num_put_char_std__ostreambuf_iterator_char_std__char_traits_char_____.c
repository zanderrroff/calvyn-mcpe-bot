#include "../include/aerialclient_types.h"


undefined8 __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction4
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined8 param_1,
          undefined4 *param_2,undefined8 param_3,undefined1 param_4,undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [64];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_d8;
  local_b8 = &DAT_1802a7838;
  FUN_1801b23c0(&DAT_1802a7834,&DAT_18029c56d,0x12,3);
  iVar1 = FUN_1801a6dd0(local_88,0x40,&DAT_1802a7834,param_5);
  local_a8 = (longlong)iVar1;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_b8 = (undefined *)CONCAT71(local_b8._1_7_,param_4);
  local_b0 = local_88;
  FUN_1801a6130(this,param_1,&local_98,param_3);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_d8)) {
    return param_1;
  }
}



undefined8 __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction5
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined8 param_1,
          undefined8 *param_2,longlong param_3,undefined1 param_4,double param_5)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_e0;
  int local_d4;
  ulonglong local_d0;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a4;
  undefined1 local_a3 [7];
  undefined4 local_9c;
  undefined8 local_98;
  ulonglong local_90;
  uint local_88;
  undefined1 local_81;
  undefined8 local_80;

  local_80 = 0xfffffffffffffffe;
  local_90 = 0;
  local_98 = 0xf;
  local_9c = 0x3000;
  local_81 = 0;
  local_88 = 0;
  local_d0 = 0x20;
  local_c8 = (undefined8 ****)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  uVar8 = *(uint *)(param_3 + 0x18);
  uVar2 = uVar8 & 0x3000;
  local_e0 = this;
  if (uVar2 == 0x3000) {
    uVar7 = 0x3f;
    dVar1 = ABS(param_5);
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(ulonglong *)(param_3 + 0x20);
    uVar7 = uVar6;
    if (((longlong)uVar6 < 1) && (uVar7 = 6, uVar6 == 0)) {
      uVar7 = (ulonglong)(uVar2 == 0);
    }
    lVar9 = (longlong)(int)uVar7;
    dVar1 = ABS(param_5);
    if ((10000000000.0 < dVar1) && (uVar2 == 0x2000)) {
      FUN_1801ed890(param_5);
      iVar3 = -local_d4;
      if (-local_d4 < 0) {
        iVar3 = local_d4;
      }
      lVar9 = lVar9 + (ulonglong)(uint)(iVar3 * 0x7597) / 100000;
    }
    uVar7 = lVar9 + 0x32;
    if (uVar7 == local_90) {
      local_b8 = local_90;
      local_c8 = (undefined8 ***)CONCAT71(local_c8._1_7_,local_81);
      goto LAB_1801a3bbb;
    }
    if (uVar7 <= local_98) {
      local_b8 = uVar7;
      FUN_180207610(&local_c8,0,uVar7);
      *(undefined1 *)((longlong)&local_98 + lVar9 + 2) = local_81;
      goto LAB_1801a3bbb;
    }
  }
  FUN_1800682e0(&local_c8,uVar7);
  uVar8 = *(uint *)(param_3 + 0x18);
LAB_1801a3bbb:
  uVar2 = 0xffffffff;
  if (dVar1 == INFINITY) {
    uVar2 = 0xffffffef;
  }
  local_a4 = 0x25;
  uVar2 = uVar2 & uVar8;
  if ((uVar2 & 0x20) == local_88) {
    puVar5 = local_a3;
  }
  else {
    puVar5 = local_a3 + 1;
    local_a3[0] = 0x2b;
  }
  if ((uVar2 & 0x10) != local_88) {
    *puVar5 = 0x23;
    puVar5 = puVar5 + 1;
  }
  *puVar5 = 0x2e;
  puVar5[1] = 0x2a;
  puVar5[2] = 0x4c;
  uVar8 = 0x41464547;
  if ((uVar2 & 4) == local_88) {
    uVar8 = 0x61666567;
  }
  puVar5[3] = (char)(uVar8 >> ((byte)(uVar2 >> 9) & 0x18));
  puVar5[4] = local_81;
  ppppuVar4 = &local_c8;
  if (local_98 < local_b0) {
    ppppuVar4 = (undefined8 ****)local_c8;
  }
  iVar3 = FUN_1801a6dd0(ppppuVar4,local_b8,&local_a4,uVar6 & 0xffffffff,param_5);
  ppppuVar4 = &local_c8;
  if (local_98 < local_b0) {
    ppppuVar4 = (undefined8 ****)local_c8;
  }
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  FUN_1801a7740(local_e0,param_1,&local_f8,param_3,param_4,ppppuVar4,(longlong)iVar3,dVar1 != INFINITY);
  if (local_98 < local_b0) {
    uVar6 = local_b0 + 1;
    ppppuVar4 = (undefined8 ****)local_c8;
    if (0xfff < uVar6) {
      ppppuVar4 = (undefined8 ****)local_c8[-1];
      if (local_d0 <= (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar4))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_88,local_90);
      }
      uVar6 = local_b0 + 0x28;
    }
    thunk_FUN_1801f42e0(ppppuVar4,uVar6);
  }
  return param_1;
}



undefined8 __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction6
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined8 param_1,
          undefined8 *param_2,longlong param_3,undefined1 param_4,double param_5)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_e0;
  int local_d4;
  ulonglong local_d0;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a4;
  undefined1 local_a3 [7];
  undefined4 local_9c;
  undefined8 local_98;
  ulonglong local_90;
  uint local_88;
  undefined1 local_81;
  undefined8 local_80;

  local_80 = 0xfffffffffffffffe;
  local_90 = 0;
  local_98 = 0xf;
  local_9c = 0x3000;
  local_81 = 0;
  local_88 = 0;
  local_d0 = 0x20;
  local_c8 = (undefined8 ****)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  uVar8 = *(uint *)(param_3 + 0x18);
  uVar2 = uVar8 & 0x3000;
  local_e0 = this;
  if (uVar2 == 0x3000) {
    uVar7 = 0x3f;
    dVar1 = ABS(param_5);
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(ulonglong *)(param_3 + 0x20);
    uVar7 = uVar6;
    if (((longlong)uVar6 < 1) && (uVar7 = 6, uVar6 == 0)) {
      uVar7 = (ulonglong)(uVar2 == 0);
    }
    lVar9 = (longlong)(int)uVar7;
    dVar1 = ABS(param_5);
    if ((10000000000.0 < dVar1) && (uVar2 == 0x2000)) {
      FUN_1801ed890(param_5);
      iVar3 = -local_d4;
      if (-local_d4 < 0) {
        iVar3 = local_d4;
      }
      lVar9 = lVar9 + (ulonglong)(uint)(iVar3 * 0x7597) / 100000;
    }
    uVar7 = lVar9 + 0x32;
    if (uVar7 == local_90) {
      local_b8 = local_90;
      local_c8 = (undefined8 ***)CONCAT71(local_c8._1_7_,local_81);
      goto LAB_1801a407b;
    }
    if (uVar7 <= local_98) {
      local_b8 = uVar7;
      FUN_180207610(&local_c8,0,uVar7);
      *(undefined1 *)((longlong)&local_98 + lVar9 + 2) = local_81;
      goto LAB_1801a407b;
    }
  }
  FUN_1800682e0(&local_c8,uVar7);
  uVar8 = *(uint *)(param_3 + 0x18);
LAB_1801a407b:
  uVar2 = 0xffffffff;
  if (dVar1 == INFINITY) {
    uVar2 = 0xffffffef;
  }
  local_a4 = 0x25;
  uVar2 = uVar2 & uVar8;
  if ((uVar2 & 0x20) == local_88) {
    puVar5 = local_a3;
  }
  else {
    puVar5 = local_a3 + 1;
    local_a3[0] = 0x2b;
  }
  if ((uVar2 & 0x10) != local_88) {
    *puVar5 = 0x23;
    puVar5 = puVar5 + 1;
  }
  *puVar5 = 0x2e;
  puVar5[1] = 0x2a;
  uVar8 = 0x41464547;
  if ((uVar2 & 4) == local_88) {
    uVar8 = 0x61666567;
  }
  puVar5[2] = (char)(uVar8 >> ((byte)(uVar2 >> 9) & 0x18));
  puVar5[3] = local_81;
  ppppuVar4 = &local_c8;
  if (local_98 < local_b0) {
    ppppuVar4 = (undefined8 ****)local_c8;
  }
  iVar3 = FUN_1801a6dd0(ppppuVar4,local_b8,&local_a4,uVar6 & 0xffffffff,param_5);
  ppppuVar4 = &local_c8;
  if (local_98 < local_b0) {
    ppppuVar4 = (undefined8 ****)local_c8;
  }
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  FUN_1801a7740(local_e0,param_1,&local_f8,param_3,param_4,ppppuVar4,(longlong)iVar3,dVar1 != INFINITY);
  if (local_98 < local_b0) {
    uVar6 = local_b0 + 1;
    ppppuVar4 = (undefined8 ****)local_c8;
    if (0xfff < uVar6) {
      ppppuVar4 = (undefined8 ****)local_c8[-1];
      if (local_d0 <= (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar4))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_88,local_90);
      }
      uVar6 = local_b0 + 0x28;
    }
    thunk_FUN_1801f42e0(ppppuVar4,uVar6);
  }
  return param_1;
}



undefined8 __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction7
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined8 param_1,
          undefined4 *param_2,longlong param_3,undefined1 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 *local_130;
  longlong local_128;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined4 *local_d0;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e [6];
  undefined1 local_88 [64];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_108 = 0xd19b4692af23dc30;
  local_110 = 0xe28c3ca6803fefd0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_108 ^ 0xca6d3e8c514cb831;
            uVar3 = local_108 ^ local_110;
            local_110 = local_110 ^ 0xca6d3e8c514cb831;
            local_108 = uVar4;
            if ((longlong)uVar3 < -0x9dd4bdd5a5bda96) break;
            if ((longlong)uVar3 < 0x1af7f7dc2384951b) {
              if (uVar3 == 0xf622b422a5a4256a) {
                local_b0 = local_e8;
                local_108 = 0xf066598c1110a737;
                if ((local_f8 & 8) == local_fc) {
                  local_108 = 0xaf3f24109d03f316;
                }
                local_110 = 0xb5c8d3ccbe87660d;
                local_e0 = local_e8;
              }
              else if (uVar3 == 0x3f674d10ca195ac) {
                local_108 = 0x349946118b2a97ea;
                if (local_f4 == 0x400) {
                  local_108 = 0x4bd2b5c17a00cee2;
                }
                local_110 = 0xa6cacc2223939111;
                local_111 = 0x6f;
              }
              else if (uVar3 == 0x16cb25c6fec88615) {
                *local_b8 = 0x2b;
                local_108 = 0x2fbdde6d80f87a0f;
                local_110 = 0xd99f6a4f255c5f65;
                local_e8 = local_8e;
              }
            }
            else if (uVar3 == 0x1af7f7dc2384951b) {
              local_d8 = local_e0;
              local_e0[1] = 0x36;
              local_e0[2] = 0x34;
              *local_e0 = 0x49;
              local_f4 = local_f8 & 0xe00;
              local_108 = 0xa97cc23546dc0684;
              local_110 = 0x1ef2e795b4f34ec4;
            }
            else if (uVar3 == 0x45ae8a40af97c13a) {
              *local_b0 = 0x23;
              local_e0 = local_b0 + 1;
              local_108 = 0xe0f1e44399acd782;
              local_110 = 0xfa06139fba284299;
            }
            else if (uVar3 == 0x33177a342f1c33e0) {
              local_fc = 0;
              local_f8 = *(uint *)(param_3 + 0x18);
              local_e8 = &local_8f;
              local_90 = 0x25;
              local_108 = 0xf2f4bdf87ba941e8;
              if ((local_f8 & 0x20) == 0) {
                local_108 = 0x121d2c1c20c5e297;
              }
              local_110 = 0xe43f983e8561c7fd;
              local_b8 = local_e8;
            }
          }
          if (-0x4871da5f0dd0b7c1 < (longlong)uVar3) break;
          if (uVar3 == 0x8240893ebc364b22) {
            local_108 = 0x813ecd7d42061fa5;
            if (local_f4 == 0x800) {
              local_108 = 0x99b899e5cd73f10e;
            }
            local_110 = 0x136d474eeabf195e;
          }
          else if (uVar3 == 0x8ad5deab27cce850) {
            local_111 = 0x58;
            if ((local_f8 & 4) == local_fc) {
              local_111 = 0x78;
            }
            local_108 = 0x5dfe1e1d99b03e9d;
            local_110 = 0xb0e667fec023616e;
          }
          else if (uVar3 == 0x92538a33a8b906fb) {
            local_108 = 0xc3d79d1f069fb814;
            local_110 = 0x2af8221a7b173c67;
          }
        }
        if (uVar3 != 0xb78e25a0f22f4840) break;
        local_108 = 0x41edfa34be4f742c;
        if ((int)local_f4 < 0x800) {
          local_108 = 0xc05b07db0ed8aaa2;
        }
        local_110 = 0xc3ad730a02793f0e;
      }
      if (uVar3 != 0xe92fbf057d888473) break;
      local_108 = 0xf0facfb3cddd73a1;
      local_110 = 0x1de2b650944e2c52;
      local_111 = 0x75;
    }
  } while (uVar3 != 0xed1879e359935ff3);
  local_d8[3] = local_111;
  local_d8[4] = 0;
  local_f0 = param_3;
  local_d0 = param_2;
  local_c8 = this;
  local_c0 = param_1;
  iVar2 = FUN_1801a6dd0(local_88,0x40,&local_90,param_5);
  uVar1 = local_c0;
  local_128 = (longlong)iVar2;
  local_a8 = *local_d0;
  uStack_a4 = local_d0[1];
  uStack_a0 = local_d0[2];
  uStack_9c = local_d0[3];
  local_138 = param_4;
  local_130 = local_88;
  FUN_1801a6130(local_c8,local_c0,&local_a8,local_f0);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_158)) {
  }
  return uVar1;
}



undefined8 __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction8
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined8 param_1,
          undefined4 *param_2,longlong param_3,undefined1 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 *local_130;
  longlong local_128;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined4 *local_d0;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e [6];
  undefined1 local_88 [64];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_108 = 0xfdbd0fb68bfc9813;
  local_110 = 0x2ba0c4afe3d3c868;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_108 ^ 0x86af622ff42d7e58;
            uVar3 = local_108 ^ local_110;
            local_110 = local_110 ^ 0x86af622ff42d7e58;
            local_108 = uVar4;
            if ((longlong)uVar3 < -0x29e234e697d0af85) break;
            if ((longlong)uVar3 < 0x703bef5210904f8e) {
              if (uVar3 == 0xd61dcb19682f507b) {
                local_fc = 0;
                local_f8 = *(uint *)(param_3 + 0x18);
                local_e0 = &local_8f;
                local_90 = 0x25;
                local_108 = 0x2a988c8bf2bec363;
                if ((local_f8 & 0x20) == 0) {
                  local_108 = 0xe594c21f1c6abf53;
                }
                local_110 = 0xbf17035409d8b1b0;
                local_b8 = local_e0;
              }
              else if (uVar3 == 0x4f3ad1c78a7f4c11) {
                local_108 = 0xe9df5f4f33799960;
                if (local_f4 == 0x800) {
                  local_108 = 0xded1b153f3055e7b;
                }
                local_110 = 0x7dc2b37a25d24410;
              }
              else if (uVar3 == 0x5a83c14b15b20ee3) {
                local_b0 = local_e0;
                local_108 = 0xca0909b412b8a86f;
                if ((local_f8 & 8) == local_fc) {
                  local_108 = 0x3f3d0d1a590ad1a5;
                }
                local_110 = 0xba32e6e60228e7e1;
                local_e8 = local_e0;
              }
            }
            else if (uVar3 == 0x703bef5210904f8e) {
              *local_b0 = 0x23;
              local_e8 = local_b0 + 1;
              local_108 = 0xe6a1ab050f1f0e45;
              local_110 = 0x63ae40f9543d3801;
            }
            else if (uVar3 == 0x78f6695a97ed4a38) {
              local_108 = 0x2770993af8cf8ab2;
              if (local_f4 == 0x400) {
                local_108 = 0x74cec602050c795b;
              }
              local_110 = 0xb36d750fee6457c2;
              local_111 = 0x6f;
            }
            else if (uVar3 == 0x7a33538b7af15d88) {
              local_108 = 0xcf041205a04bcb1f;
              local_110 = 0x8a7a1084b23e586;
              local_111 = 100;
            }
          }
          if (-0x5cecfdd62928e596 < (longlong)uVar3) break;
          if (uVar3 == 0x850febfc5b223644) {
            local_d8 = local_e8;
            local_e8[1] = 0x36;
            local_e8[2] = 0x34;
            *local_e8 = 0x49;
            local_f4 = local_f8 & 0xe00;
            local_108 = 0x7832490c8a633a64;
            local_110 = 0xb43946cdac732008;
          }
          else if (uVar3 == 0x941dec3516abdd70) {
            local_108 = 0x9abc70fa91b456ba;
            local_110 = 0xe08f2371eb450b32;
          }
          else if (uVar3 == 0x958f8fdffb6672d3) {
            *local_b8 = 0x2b;
            local_108 = 0x852bb1a8c804eb46;
            local_110 = 0xdfa870e3ddb6e5a5;
            local_e0 = local_8e;
          }
        }
        if (uVar3 != 0xa3130229d6d71a6b) break;
        local_111 = 0x58;
        if ((local_f8 & 4) == local_fc) {
          local_111 = 0x78;
        }
        local_108 = 0x41569b2dfc0bd356;
        local_110 = 0x86f528201763fdcf;
      }
      if (uVar3 != 0xcc0b0fc126101a6c) break;
      local_108 = 0xe5093536287bd4f9;
      if ((int)local_f4 < 0x800) {
        local_108 = 0xd2c58dab35e9d2d0;
      }
      local_110 = 0xaa33e4f1a20498e8;
    }
  } while (uVar3 != 0xc7a3b30deb682e99);
  local_d8[3] = local_111;
  local_d8[4] = 0;
  local_f0 = param_3;
  local_d0 = param_2;
  local_c8 = this;
  local_c0 = param_1;
  iVar2 = FUN_1801a6dd0(local_88,0x40,&local_90,param_5);
  uVar1 = local_c0;
  local_128 = (longlong)iVar2;
  local_a8 = *local_d0;
  uStack_a4 = local_d0[1];
  uStack_a0 = local_d0[2];
  uStack_9c = local_d0[3];
  local_138 = param_4;
  local_130 = local_88;
  FUN_1801a6130(local_c8,local_c0,&local_a8,local_f0);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_158)) {
  }
  return uVar1;
}



undefined8 __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction9
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined8 param_1,
          undefined4 *param_2,longlong param_3,undefined1 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 *local_130;
  longlong local_128;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined4 *local_d8;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c [4];
  undefined1 local_88 [64];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_108 = 0x6a09fec85de599b5;
  local_110 = 0xe4595183b19e2566;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_108 ^ 0xf137410a821b3437;
            uVar3 = local_108 ^ local_110;
            local_110 = local_110 ^ 0xf137410a821b3437;
            local_108 = uVar4;
            if (0x2c05a87c1c810e5 < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x3fb419da5f67b19f) {
              if (uVar3 == 0x8e50af4bec7bbcd3) {
                local_fc = 0;
                local_f8 = *(uint *)(param_3 + 0x18);
                local_e8 = &local_8d;
                local_8e = 0x25;
                local_108 = 0x1326a2c0ed46fd63;
                if ((local_f8 & 0x20) == 0) {
                  local_108 = 0x3cccdecb5d37854b;
                }
                local_110 = 0x122dcc0601c3f8f3;
                local_c0 = local_e8;
              }
              else if (uVar3 == 0x9bc374238a1043d8) {
                local_108 = 0xee44af1aab8eb72c;
                if ((int)local_f4 < 0x800) {
                  local_108 = 0x5fda93e1c288c43f;
                }
                local_110 = 0xbe9369490ea1d209;
              }
              else if (uVar3 == 0x9e3d8fdb3f5963ac) {
                local_111 = 0x58;
                if ((local_f8 & 4) == local_fc) {
                  local_111 = 0x78;
                }
                local_108 = 0xa807954261a7cdcd;
                local_110 = 0x80a885135aa91408;
              }
            }
            else if (uVar3 == 0xc04be625a0984e61) {
              local_108 = 0x775b3fb12a433d2;
              local_110 = 0x5b5e97cd36c2334;
            }
            else if (uVar3 == 0xe149faa8cc291636) {
              local_108 = 0x204071bcb2ec7bcc;
              if (local_f4 == 0x400) {
                local_108 = 0xc8a487c8297aec68;
              }
              local_110 = 0xe00b9799127435ad;
              local_111 = 0x6f;
            }
            else if (uVar3 == 0x10b6ec6ec850590) {
              *local_c0 = 0x2b;
              local_108 = 0x2ad0ee2498225212;
              local_110 = 0x431fce9c4d62faa;
              local_e8 = local_8c;
            }
          }
          if ((longlong)uVar3 < 0x4aa88331d605ce46) break;
          if (uVar3 == 0x4aa88331d605ce46) {
            local_b0 = local_e0;
            *local_e0 = 0x6c;
            local_f4 = local_f8 & 0xe00;
            local_108 = 0x2b31708c30d7a1d4;
            local_110 = 0xb0f204afbac7e20c;
          }
          else if (uVar3 == 0x50d7c653a52f6525) {
            local_108 = 0x509eed44d88a06a0;
            if (local_f4 == 0x800) {
              local_108 = 0xee884ba474b2b6d;
            }
            local_110 = 0x90d50b61781248c1;
          }
          else if (uVar3 == 0x70c8820219639b45) {
            *local_b8 = 0x23;
            local_e0 = local_b8 + 1;
            local_108 = 0xcdb2843d7ea12cb0;
            local_110 = 0x871a070ca8a4e2f6;
          }
        }
        if (uVar3 != 0x2c05a87c1c810e6) break;
        local_108 = 0x9444d96c73dea393;
        local_110 = 0xbcebc93d48d07a56;
        local_111 = 0x75;
      }
      if (uVar3 != 0x2ee112cd5cf47db8) break;
      local_b8 = local_e8;
      local_108 = 0x28fa31fdbabe3b07;
      if ((local_f8 & 8) == local_fc) {
        local_108 = 0x129a30ce75d86e04;
      }
      local_110 = 0x5832b3ffa3dda042;
      local_e0 = local_e8;
    }
  } while (uVar3 != 0x28af10513b0ed9c5);
  local_b0[1] = local_111;
  local_b0[2] = 0;
  local_f0 = param_3;
  local_d8 = param_2;
  local_d0 = this;
  local_c8 = param_1;
  iVar2 = FUN_1801a6dd0(local_88,0x40,&local_8e,param_5);
  uVar1 = local_c8;
  local_128 = (longlong)iVar2;
  local_a8 = *local_d8;
  uStack_a4 = local_d8[1];
  uStack_a0 = local_d8[2];
  uStack_9c = local_d8[3];
  local_138 = param_4;
  local_130 = local_88;
  FUN_1801a6130(local_d0,local_c8,&local_a8,local_f0);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_158)) {
  }
  return uVar1;
}



undefined8 __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction10
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined8 param_1,
          undefined4 *param_2,longlong param_3,undefined1 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 *local_130;
  longlong local_128;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined4 *local_d8;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c [4];
  undefined1 local_88 [64];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_108 = 0x670f5149e3784258;
  local_110 = 0xa08a50d1f329440;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_108 ^ 0x8e0993e59c6162a4;
            uVar3 = local_108 ^ local_110;
            local_110 = local_110 ^ 0x8e0993e59c6162a4;
            local_108 = uVar4;
            if (-0x1f0f8e663d835d5b < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x4332b14062fbe6ff) {
              if (uVar3 == 0x9101bc372a0e024e) {
                *local_c0 = 0x2b;
                local_108 = 0x7c359738c7404b74;
                local_110 = 0x9cc5e6a1053ce9d2;
                local_e8 = local_8c;
              }
              else if (uVar3 == 0x9c1af1a30bbdf8f8) {
                local_108 = 0x6ea75b2b8ce8b9a7;
                if (local_f4 == 0x800) {
                  local_108 = 0xfe5547acf4513057;
                }
                local_110 = 0xb153fccc10f3fc33;
              }
              else if (uVar3 == 0xbc4554bf3ad60ff8) {
                local_b0 = local_e0;
                *local_e0 = 0x6c;
                local_f4 = local_f8 & 0xe00;
                local_108 = 0xb907b726d78cb6d7;
                local_110 = 0xa2d3d0c98586a809;
              }
            }
            else if (uVar3 == 0xbccd4ebf9d041901) {
              *local_b8 = 0x23;
              local_e0 = local_b8 + 1;
              local_108 = 0x89c8da16b332e53d;
              local_110 = 0x358d8ea989e4eac5;
            }
            else if (uVar3 == 0xbef0999cb9a96bdd) {
              local_108 = 0x956933dc405b16d8;
              if (local_f4 == 0x400) {
                local_108 = 0xb8c80b7fea19764b;
              }
              local_110 = 0x4a9d943bdc40534c;
              local_111 = 0x6f;
            }
            else if (uVar3 == 0xdff4a7e79c1b4594) {
              local_108 = 0xce169ee6e0c0c603;
              local_110 = 0x22c878c49666c36f;
            }
          }
          if ((longlong)uVar3 < 0x1bd467ef520a1ede) break;
          if (uVar3 == 0x1bd467ef520a1ede) {
            local_108 = 0xaf208f6d2549390a;
            if ((int)local_f4 < 0x800) {
              local_108 = 0x8dcae752975daa2f;
            }
            local_110 = 0x333a7ece2ef4c1f2;
          }
          else if (uVar3 == 0x4f06bb60e4a2cc64) {
            local_111 = 0x58;
            if ((local_f8 & 4) == local_fc) {
              local_111 = 0x78;
            }
            local_108 = 0x79d498e7c87e5bc3;
            local_110 = 0x8b8107a3fe277ec4;
          }
          else if (uVar3 == 0x6d07f444fc4ad618) {
            local_fc = 0;
            local_f8 = *(uint *)(param_3 + 0x18);
            local_e8 = &local_8d;
            local_8e = 0x25;
            local_108 = 0xfd09b5af327e65bc;
            if ((local_f8 & 0x20) == 0) {
              local_108 = 0x8cf87801da0cc554;
            }
            local_110 = 0x6c080998187067f2;
            local_c0 = local_e8;
          }
        }
        if (uVar3 != 0xe0f07199c27ca2a6) break;
        local_b8 = local_e8;
        local_108 = 0x91e25235742d91f2;
        if ((local_f8 & 8) == local_fc) {
          local_108 = 0x916a4835d3ff870b;
        }
        local_110 = 0x2d2f1c8ae92988f3;
        local_e0 = local_e8;
      }
      if (uVar3 != 0xecdee62276a6056c) break;
      local_108 = 0x30f9e8df476274ea;
      local_110 = 0xc2ac779b713b51ed;
      local_111 = 100;
    }
  } while (uVar3 != 0xf2559f4436592507);
  local_b0[1] = local_111;
  local_b0[2] = 0;
  local_f0 = param_3;
  local_d8 = param_2;
  local_d0 = this;
  local_c8 = param_1;
  iVar2 = FUN_1801a6dd0(local_88,0x40,&local_8e,param_5);
  uVar1 = local_c8;
  local_128 = (longlong)iVar2;
  local_a8 = *local_d8;
  uStack_a4 = local_d8[1];
  uStack_a0 = local_d8[2];
  uStack_9c = local_d8[3];
  local_138 = param_4;
  local_130 = local_88;
  FUN_1801a6130(local_d0,local_c8,&local_a8,local_f0);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_158)) {
  }
  return uVar1;
}



undefined1 * __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction11
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined1 *param_1,
          undefined4 *param_2,longlong param_3,undefined1 param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f0;
  undefined4 uStack_ec;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 *local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  longlong local_90;
  ulonglong local_88;
  undefined8 *local_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined4 local_70;
  undefined3 uStack_6c;
  undefined4 uStack_68;
  undefined3 uStack_64;
  undefined4 local_60;
  uint local_5c;
  ulonglong local_58;
  int local_50;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_58 = 0;
  local_49 = 1;
  local_60 = 1;
  local_50 = -1;
  local_90 = -1;
  local_88 = 0xf;
  local_5c = 0;
  if ((*(uint *)(param_3 + 0x18) & 0x4000) == 0) {
    local_108 = *(undefined8 *)param_2;
    uStack_100 = *(undefined8 *)(param_2 + 2);
    (*this->vftablePtr->vfunction10)(this,param_1,(undefined4 *)&local_108,param_3,param_4,(uint)(byte)param_5);
  }
  else {
    plStack_b0 = *(longlong **)(*(longlong *)(param_3 + 0x40) + 8);
    local_d0 = param_1;
    (**(code **)(*plStack_b0 + 8))();
    plVar4 = (longlong *)FUN_180029a60(&local_b8);
    if ((plStack_b0 != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(*plStack_b0 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,local_60);
    }
    local_b8 = (undefined8 *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_a8 = 0;
    uStack_a0 = local_88;
    local_c8 = param_3;
    if (param_5 == '\0') {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_f0);
    }
    else {
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_f0);
    }
    local_a8 = local_e0;
    uStack_a0 = uStack_d8;
    local_b8 = (undefined8 *)CONCAT44(uStack_ec,local_f0);
    uVar6 = *(ulonglong *)(local_c8 + 0x28);
    uVar8 = 0;
    if (local_e0 <= uVar6) {
      uVar8 = uVar6 - local_e0;
    }
    uVar9 = uVar8;
    if ((longlong)uVar6 <= (longlong)local_58) {
      uVar9 = local_58;
    }
    uVar2 = *(undefined1 *)param_2;
    if ((*(uint *)(local_c8 + 0x18) & 0x1c0) == 0x40) {
      plVar4 = *(longlong **)(param_2 + 2);
    }
    else {
      uStack_74 = (undefined3)((uint)param_2[1] >> 8);
      uStack_78 = *(undefined4 *)((longlong)param_2 + 1);
      plVar4 = *(longlong **)(param_2 + 2);
      uVar7 = uVar2;
      if ((uVar9 != local_58) && (uVar7 = local_49, plVar4 != (longlong *)0x0)) {
LAB_1801a5cb7:
        do {
          if (*(longlong *)plVar4[8] != 0) {
            iVar3 = *(int *)plVar4[0xb];
            if ((int)local_5c < iVar3) {
              *(int *)plVar4[0xb] = iVar3 + local_50;
              puVar1 = *(undefined1 **)plVar4[8];
              *(undefined1 **)plVar4[8] = puVar1 + 1;
              *puVar1 = param_4;
              uVar8 = uVar8 + local_90;
              uVar7 = uVar2;
              if (uVar8 == local_58) break;
              goto LAB_1801a5cb7;
            }
          }
          iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,param_4);
          uVar7 = local_49;
          if (iVar3 != local_50) {
            uVar7 = uVar2;
          }
          uVar2 = uVar7;
          uVar8 = uVar8 + local_90;
          uVar7 = uVar2;
        } while (uVar8 != local_58);
      }
      uVar2 = uVar7;
      *(undefined1 *)param_2 = uVar2;
      param_2[1] = CONCAT31(uStack_74,uStack_78._3_1_);
      *(undefined4 *)((longlong)param_2 + 1) = uStack_78;
      *(longlong **)(param_2 + 2) = plVar4;
      uVar9 = local_58;
    }
    local_80 = local_b8;
    local_c0 = uStack_a0;
    local_70._0_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 1);
    local_70._3_1_ = (undefined1)param_2[1];
    uStack_6c = (undefined3)((uint)param_2[1] >> 8);
    uVar7 = uVar2;
    if ((local_e0 != local_58) && (uVar7 = local_49, plVar4 != (longlong *)0x0)) {
      uVar6 = local_e0;
      puVar5 = &local_b8;
      if (local_88 < uStack_a0) {
        puVar5 = local_b8;
      }
LAB_1801a5d83:
      do {
        uVar7 = *(undefined1 *)puVar5;
        if (*(longlong *)plVar4[8] != 0) {
          iVar3 = *(int *)plVar4[0xb];
          if ((int)local_5c < iVar3) {
            *(int *)plVar4[0xb] = iVar3 + local_50;
            puVar1 = *(undefined1 **)plVar4[8];
            *(undefined1 **)plVar4[8] = puVar1 + 1;
            *puVar1 = uVar7;
            uVar6 = uVar6 + local_90;
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            uVar7 = uVar2;
            if (uVar6 == local_58) break;
            goto LAB_1801a5d83;
          }
        }
        iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar7);
        uVar7 = local_49;
        if (iVar3 != local_50) {
          uVar7 = uVar2;
        }
        uVar2 = uVar7;
        uVar6 = uVar6 + local_90;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
        uVar7 = uVar2;
      } while (uVar6 != local_58);
    }
    *(undefined1 *)param_2 = uVar7;
    param_2[1] = CONCAT31(uStack_6c,local_70._3_1_);
    *(undefined4 *)((longlong)param_2 + 1) = local_70;
    *(longlong **)(param_2 + 2) = plVar4;
    *(ulonglong *)(local_c8 + 0x28) = local_58;
    uVar2 = *(undefined1 *)param_2;
    uStack_68 = *(undefined4 *)((longlong)param_2 + 1);
    uStack_64 = (undefined3)((uint)param_2[1] >> 8);
    plVar4 = *(longlong **)(param_2 + 2);
    uVar7 = uVar2;
    if ((uVar9 != local_58) && (uVar7 = local_49, plVar4 != (longlong *)0x0)) {
LAB_1801a5e46:
      do {
        if (*(longlong *)plVar4[8] != 0) {
          iVar3 = *(int *)plVar4[0xb];
          if ((int)local_5c < iVar3) {
            *(int *)plVar4[0xb] = iVar3 + local_50;
            puVar1 = *(undefined1 **)plVar4[8];
            *(undefined1 **)plVar4[8] = puVar1 + 1;
            *puVar1 = param_4;
            uVar9 = uVar9 + local_90;
            uVar7 = uVar2;
            if (uVar9 == local_58) break;
            goto LAB_1801a5e46;
          }
        }
        iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,param_4);
        uVar7 = local_49;
        if (iVar3 != local_50) {
          uVar7 = uVar2;
        }
        uVar2 = uVar7;
        uVar9 = uVar9 + local_90;
        uVar7 = uVar2;
      } while (uVar9 != local_58);
    }
    param_1 = local_d0;
    *local_d0 = uVar7;
    *(undefined4 *)(local_d0 + 1) = uStack_68;
    *(uint *)(local_d0 + 4) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(longlong **)(local_d0 + 8) = plVar4;
    if (local_88 < local_c0) {
      uVar6 = local_c0 + 1;
      puVar5 = local_80;
      if (0xfff < uVar6) {
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_80 + (-8 - (longlong)local_80[-1]))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_5c,local_58);
        }
        uVar6 = local_c0 + 0x28;
        puVar5 = (undefined8 *)local_80[-1];
      }
      thunk_FUN_1801f42e0(puVar5,uVar6);
    }
  }
  return param_1;
}



num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> * __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction1
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,uint param_1)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xd24f81807dac22c9;
  local_50 = 0xda062bee54e5705f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x8aa5bd566ce95874;
        if (uVar1 != 0xeb960915f12f13d4) break;
        thunk_FUN_1801f42e0(this,0x10);
        local_48 = 0xb06f43624f980c60;
        local_50 = 0x9aa5cba99c1de6a6;
      }
      if (uVar1 != 0x849aa6e29495296) break;
      local_48 = 0x4eb2d930cd6f72ab;
      if ((param_1 & 1) == 0) {
        local_48 = 0x8fee58eeefc58bb9;
      }
      local_50 = 0xa524d0253c40617f;
    }
    local_48 = local_48 ^ 0x8aa5bd566ce95874;
  } while (uVar1 != 0x2aca88cbd385eac6);
  return this;
}


