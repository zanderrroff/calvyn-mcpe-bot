#include "../include/aerialclient_types.h"


void Unwind_1801c0090(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x410);
  return;
}



void Unwind_1801c0140(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 800);
  return;
}



void Unwind_1801c01e0(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x2f0);
  return;
}



void Unwind_1801c0280(undefined8 param_1,longlong param_2)

{
  FUN_180163160(*(undefined8 *)(param_2 + 0x460));
  return;
}



undefined8 * FUN_1801c0320(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  byte local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 *local_88;
  ulonglong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  ulonglong local_60;

  local_e0 = 0xb6aa36625a0bed02;
  local_e8 = 0x34f7fe308fdb2b74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_e0 ^ 0x51fdd935fdc5c7ae;
            uVar1 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0x51fdd935fdc5c7ae;
            local_e0 = uVar3;
            if ((longlong)uVar1 < -0x2c25eb525c4d2f18) break;
            if ((longlong)uVar1 < 0x26d03d22e9368c11) {
              if (uVar1 == 0x35611df25f2caba) {
                local_e0 = 0xcd5758bf628a7a58;
                if (local_98 < 0x7fffffffffffffec) {
                  local_e0 = 0xd2cea535bd770fb8;
                }
                local_e8 = 0x1e8d4c12c138aab0;
              }
              else if (uVar1 == 0x247947c2e9172719) {
                local_98 = local_c0 | local_d0;
                local_e0 = 0x7964bfb417e3347a;
                if (local_b0 < local_98) {
                  local_e0 = 0x7b048306976c9bba;
                }
                local_e8 = 0xa8de97ab34de4b52;
              }
              else if (uVar1 == 0xd3da14ada3b2d0e8) {
                std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
              }
            }
            else if (uVar1 == 0x26d03d22e9368c11) {
              local_88 = (undefined8 *)FUN_1801d61c8(local_90 + 2);
              local_e0 = 0x5e3bb34affafe106;
              local_e8 = 0xff97f88b9d5e1fa4;
            }
            else if (uVar1 == 0x7ccbb2f291676b11) {
              local_70 = param_2[3];
              local_68 = (undefined8 *)*param_2;
              *param_1 = 0;
              param_1[1] = 0;
              local_c0 = local_a0 + local_a8;
              local_e0 = 0x467848746860bc93;
              if (local_d0 < local_c0) {
                local_e0 = 0xec52764334ebadbe;
              }
              local_e8 = 0xc82b3181ddfc8aa7;
              local_80 = local_d0;
              local_78 = param_1;
            }
          }
          if ((longlong)uVar1 < -0x4a286b158be17c87) break;
          if (uVar1 == 0xcc43e9277c4fa508) {
            lVar2 = FUN_1801d61c8(local_90 + 0x29);
            local_88 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
            local_88[-1] = lVar2;
            local_e0 = 0xa60688afe15f8d1f;
            local_e8 = 0x7aac36e83ae73bd;
          }
          else if (uVar1 == 0xd1ba281f233d7f28) {
            local_60 = 10;
            if (10 < local_98) {
              local_60 = local_98;
            }
            local_90 = local_60 << (local_c8 & 0x3f);
            local_e0 = 0x4e12afc3ac88c93b;
            if (0x7fe < local_98) {
              local_e0 = 0x6b94833e604c8f90;
            }
            local_e8 = 0x68c292e145be452a;
          }
          else if (uVar1 == 0xb5d794ea741e8379) {
            FUN_180002ac0();
          }
        }
        if (uVar1 != 0x825dc852d5d0c676) break;
        local_d0 = 7;
        local_c8 = 1;
        local_b0 = 0x7ffffffffffffffe;
        local_a8 = param_2[2];
        local_a0 = FUN_1801e15b0(param_3);
        local_e0 = 0xa0691ce929e7d830;
        if (0x7ffffffffffffffeU - local_a8 < local_a0) {
          local_e0 = 0x69753af1cc9e3058;
        }
        local_e8 = 0xdca2ae1bb880b321;
      }
      if (uVar1 != 0xa1ac4bc162f1fea2) break;
      local_78 = local_88;
      *param_1 = local_88;
      local_e0 = 0xcbebd2f699fd7967;
      local_e8 = 0x45b8ab032c614f53;
      local_80 = local_60;
    }
  } while (uVar1 != 0x8e5379f5b59c3634);
  local_d8 = param_2;
  if (local_d0 < local_70) {
    local_d8 = local_68;
  }
  param_1[2] = local_c0;
  param_1[3] = local_80;
  FUN_1802079d0(local_78,local_d8,local_a8 << (local_c8 & 0x3f));
  FUN_1802079d0((longlong)local_78 + local_a8 * 2,param_3,local_a0 << (local_c8 & 0x3f));
  *(undefined2 *)((longlong)local_78 + local_c0 * 2) = 0;
  return param_1;
}



void FUN_1801c08c0(undefined8 *param_1,LPCWSTR param_2)

{
  ulonglong uVar1;
  LARGE_INTEGER LVar2;
  uint uVar3;
  HANDLE hFile;
  undefined8 *lpBuffer;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  LARGE_INTEGER local_50;
  undefined8 *local_48;
  undefined4 local_40;
  uint local_3c;
  LARGE_INTEGER local_38;
  uint local_30;
  undefined1 local_29;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_29 = 0;
  local_40 = 3;
  local_38.QuadPart = 0xf;
  local_30 = 0;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(LPCWSTR *)param_2;
  }
  hFile = CreateFileW(param_2,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    ((LARGE_INTEGER *)(param_1 + 3))->QuadPart = (LONGLONG)local_38;
    return;
  }
  local_50.QuadPart = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((LARGE_INTEGER *)(param_1 + 3))->QuadPart = (LONGLONG)local_38;
  uVar3 = GetFileSizeEx(hFile,&local_50);
  LVar2 = local_50;
  if ((uVar3 == local_30) || (0xffffe < local_50.QuadPart - 1U)) goto LAB_1801c0aff;
  local_48 = param_1;
  if ((ulonglong)local_38 < (ulonglong)local_50) {
    FUN_1800682e0(param_1,local_50.QuadPart,local_30,local_50.QuadPart,local_29);
  }
  else {
    ((LARGE_INTEGER *)(param_1 + 2))->QuadPart = (LONGLONG)local_50;
    FUN_180207610(param_1,0,local_50.QuadPart);
    *(undefined1 *)((longlong)param_1 + LVar2.QuadPart) = local_29;
  }
  puVar4 = local_48;
  local_3c = local_30;
  lpBuffer = local_48;
  if ((ulonglong)local_38 < (ulonglong)*(LARGE_INTEGER *)(local_48 + 3)) {
    lpBuffer = (undefined8 *)*local_48;
  }
  uVar3 = ReadFile(hFile,lpBuffer,*(DWORD *)(local_48 + 2),&local_3c,(LPOVERLAPPED)0x0);
  uVar5 = 0;
  if (uVar3 == local_30) {
LAB_1801c0ace:
    puVar4[2] = uVar5;
    if ((ulonglong)local_38 < (ulonglong)*(LARGE_INTEGER *)(puVar4 + 3)) {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  else {
    uVar5 = (ulonglong)local_3c;
    uVar1 = puVar4[2];
    uVar6 = uVar5 - uVar1;
    if (uVar5 < uVar1 || uVar6 == 0) goto LAB_1801c0ace;
    if (((LARGE_INTEGER *)(puVar4 + 3))->QuadPart - uVar1 < uVar6) {
      FUN_1800682e0(puVar4,uVar6,uVar6,uVar6,local_29);
      goto LAB_1801c0aff;
    }
    puVar4[2] = uVar5;
    if ((ulonglong)local_38 < (ulonglong)((LARGE_INTEGER *)(puVar4 + 3))->QuadPart) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_180207610(uVar1 + (longlong)puVar4,0);
  }
  *(undefined1 *)((longlong)puVar4 + uVar5) = local_29;
LAB_1801c0aff:
  CloseHandle(hFile);
  return;
}



void Unwind_1801c0b20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x50));
  return;
}



ulonglong FUN_1801c0b50(undefined8 param_1,undefined8 param_2)

{
  DWORD DVar1;
  WCHAR ****ppppWVar2;
  longlong lVar3;
  LPCWSTR lpFileName;
  ulonglong uVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  WCHAR ****ppppWVar7;
  longlong lVar8;
  longlong lVar9;
  WCHAR ***local_118 [2];
  longlong local_108;
  WCHAR **ppWStack_100;
  WCHAR ***local_f8 [2];
  longlong local_e8;
  WCHAR **ppWStack_e0;
  WCHAR local_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  WCHAR **local_c8;
  WCHAR **ppWStack_c0;
  WCHAR local_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  WCHAR **local_a8;
  WCHAR **ppWStack_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  DWORD local_64;
  ulonglong local_60;
  WCHAR **local_58;
  uint local_4c;
  WCHAR **local_48;
  WCHAR local_3a;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_60 = 4;
  local_48 = (WCHAR **)0x7;
  local_58 = (WCHAR **)0x0;
  local_3a = L'\0';
  local_98 = 0x29;
  local_90 = 1;
  local_64 = 0xffffffff;
  local_88 = 0xfff;
  local_80 = -8;
  local_4c = 0;
  local_78 = 2;
  local_70 = 0x20;
  ppppWVar2 = local_118;
  FUN_1801c0320(ppppWVar2,param_1,param_2);
  uVar5 = local_60;
  lVar9 = local_108;
  if ((ulonglong)((longlong)ppWStack_100 - local_108) < local_60) {
    FUN_1801d221b(&DAT_1802a8be0,&DAT_1802a0174,0xf,5,&DAT_1802a8bec);
    ppppWVar2 = (WCHAR ****)FUN_180061f00(local_118,uVar5);
  }
  else {
    lVar3 = local_60 + local_108;
    local_108 = lVar3;
    ppppWVar7 = ppppWVar2;
    if (local_48 < ppWStack_100) {
      ppppWVar7 = (WCHAR ****)local_118[0];
    }
    *(undefined8 *)((longlong)ppppWVar7 + lVar9 * 2) = 0x67006e0070002e;
    *(WCHAR *)((longlong)ppppWVar7 + lVar3 * 2) = local_3a;
  }
  uStack_b4 = *(undefined4 *)((longlong)ppppWVar2 + 4);
  uStack_b0 = *(undefined4 *)(ppppWVar2 + 1);
  uStack_ac = *(undefined4 *)((longlong)ppppWVar2 + 0xc);
  local_a8 = (WCHAR **)ppppWVar2[2];
  ppWStack_a0 = (WCHAR **)ppppWVar2[3];
  local_b8 = (WCHAR)*(undefined4 *)ppppWVar2;
  uStack_b6 = (undefined2)((uint)*(undefined4 *)ppppWVar2 >> 0x10);
  ppppWVar2[2] = (WCHAR ***)local_58;
  ppppWVar2[3] = (WCHAR ***)local_48;
  *(WCHAR *)ppppWVar2 = local_3a;
  uVar6 = (undefined7)((ulonglong)ppppWVar2 >> 8);
  if (local_48 < ppWStack_a0) {
    DVar1 = GetFileAttributesW((LPCWSTR)CONCAT44(uStack_b4,CONCAT22(uStack_b6,local_b8)));
    uVar5 = CONCAT71(uVar6,1);
    if (DVar1 == local_64) {
LAB_1801c0d7e:
      ppppWVar2 = local_f8;
      FUN_1801c0320(ppppWVar2,param_1,param_2);
      uVar5 = local_60;
      lVar9 = local_e8;
      if ((ulonglong)((longlong)ppWStack_e0 - local_e8) < local_60) {
        FUN_1801d221b(&DAT_1802a8bf0,&DAT_1802a01b2,0xe,5,&DAT_1802a8bfc);
        ppppWVar2 = (WCHAR ****)FUN_180061f00(local_f8,uVar5);
      }
      else {
        lVar3 = local_60 + local_e8;
        local_e8 = lVar3;
        ppppWVar7 = ppppWVar2;
        if (local_48 < ppWStack_e0) {
          ppppWVar7 = (WCHAR ****)local_f8[0];
        }
        *(undefined8 *)((longlong)ppppWVar7 + lVar9 * 2) = 0x6100670074002e;
        *(WCHAR *)((longlong)ppppWVar7 + lVar3 * 2) = local_3a;
      }
      uStack_d4 = *(undefined4 *)((longlong)ppppWVar2 + 4);
      uStack_d0 = *(undefined4 *)(ppppWVar2 + 1);
      uStack_cc = *(undefined4 *)((longlong)ppppWVar2 + 0xc);
      local_c8 = (WCHAR **)ppppWVar2[2];
      ppWStack_c0 = (WCHAR **)ppppWVar2[3];
      local_d8 = (WCHAR)*(undefined4 *)ppppWVar2;
      uStack_d6 = (undefined2)((uint)*(undefined4 *)ppppWVar2 >> 0x10);
      ppppWVar2[2] = (WCHAR ***)local_58;
      ppppWVar2[3] = (WCHAR ***)local_48;
      *(WCHAR *)ppppWVar2 = local_3a;
      if (local_48 < ppWStack_c0) {
        lpFileName = (LPCWSTR)CONCAT44(uStack_d4,CONCAT22(uStack_d6,local_d8));
      }
      else {
        lpFileName = &local_d8;
      }
      DVar1 = GetFileAttributesW(lpFileName);
      uVar5 = CONCAT71((int7)((ulonglong)ppppWVar2 >> 8),DVar1 != local_64);
      if (local_48 < ppWStack_c0) {
        lVar3 = CONCAT44(uStack_d4,CONCAT22(uStack_d6,local_d8));
        lVar8 = (longlong)ppWStack_c0 << ((byte)local_90 & 0x3f);
        uVar4 = local_78 + lVar8;
        lVar9 = lVar3;
        if (local_88 < uVar4) {
          lVar9 = *(longlong *)(lVar3 + -8);
          if (local_70 <= (ulonglong)((lVar3 + local_80) - lVar9)) goto LAB_1801c0ffb;
          uVar4 = lVar8 + local_98;
        }
        thunk_FUN_1801f42e0(lVar9,uVar4);
      }
      local_c8 = local_58;
      ppWStack_c0 = local_48;
      local_d8 = local_3a;
      if (local_48 < ppWStack_e0) {
        lVar9 = (longlong)ppWStack_e0 << ((byte)local_90 & 0x3f);
        uVar4 = local_78 + lVar9;
        ppppWVar2 = (WCHAR ****)local_f8[0];
        if (local_88 < uVar4) {
          ppppWVar2 = (WCHAR ****)local_f8[0][-1];
          if (local_70 <= (ulonglong)((longlong)local_f8[0] + (local_80 - (longlong)ppppWVar2))) goto LAB_1801c0ffb;
          uVar4 = lVar9 + local_98;
        }
        thunk_FUN_1801f42e0(ppppWVar2,uVar4);
      }
    }
  }
  else {
    DVar1 = GetFileAttributesW(&local_b8);
    uVar5 = CONCAT71(uVar6,1);
    if (DVar1 == local_64) goto LAB_1801c0d7e;
  }
  if (local_48 < ppWStack_a0) {
    lVar3 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,local_b8));
    lVar8 = (longlong)ppWStack_a0 << ((byte)local_90 & 0x3f);
    uVar4 = local_78 + lVar8;
    lVar9 = lVar3;
    if (local_88 < uVar4) {
      lVar9 = *(longlong *)(lVar3 + -8);
      if (local_70 <= (ulonglong)((lVar3 + local_80) - lVar9)) goto LAB_1801c0ffb;
      uVar4 = lVar8 + local_98;
    }
    thunk_FUN_1801f42e0(lVar9,uVar4);
  }
  local_a8 = local_58;
  ppWStack_a0 = local_48;
  local_b8 = local_3a;
  if (local_48 < ppWStack_100) {
    lVar9 = (longlong)ppWStack_100 << ((byte)local_90 & 0x3f);
    uVar4 = local_78 + lVar9;
    ppppWVar2 = (WCHAR ****)local_118[0];
    if (local_88 < uVar4) {
      ppppWVar2 = (WCHAR ****)local_118[0][-1];
      if (local_70 <= (ulonglong)((longlong)local_118[0] + (local_80 - (longlong)ppppWVar2))) {
LAB_1801c0ffb:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,(uintptr_t)local_58);
      }
      uVar4 = lVar9 + local_98;
    }
    thunk_FUN_1801f42e0(ppppWVar2,uVar4);
  }
  return uVar5 & 0xffffffff;
}



void Unwind_1801c1020(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x50);
  return;
}



void Unwind_1801c1050(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x90);
  return;
}



void Unwind_1801c1080(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x30);
  return;
}



undefined8 * FUN_1801c10b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  byte local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 *local_88;
  ulonglong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;

  local_d8 = 0x6560f80b47d28cd8;
  local_e0 = 0x40fc85677e45529;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_d8 ^ 0x1cc766d10c0f2d4;
          uVar1 = local_d8 ^ local_e0;
          local_e0 = local_e0 ^ 0x1cc766d10c0f2d4;
          local_d8 = uVar3;
          if (0x3fe5612e3030c6a3 < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x2c9e0c126a3889e8) {
            if (uVar1 == 0x159df359567e755c) {
              local_88 = (undefined8 *)FUN_1801d61c8(local_90 + 2);
              local_d8 = 0xb15aba75956654cd;
              local_e0 = 0x940c4a203342ec97;
            }
            else if (uVar1 == 0x2556f055a624b85a) {
              *param_1 = local_88;
              local_d8 = 0x4fdf8f794ea3d4ae;
              local_e0 = 0x9b126cb4c25de9c;
              local_80 = local_70;
              local_78 = local_88;
            }
            else if (uVar1 == 0x2a4377571ba1353) {
              FUN_180002ac0();
            }
          }
          else if (uVar1 == 0x2c9e0c126a3889e8) {
            local_70 = 10;
            if (10 < local_98) {
              local_70 = local_98;
            }
            local_90 = local_70 << (local_c8 & 0x3f);
            local_d8 = 0x9b0af5b1c6268c99;
            if (0x7fe < local_98) {
              local_d8 = 0xb8ef0af5da5f89cf;
            }
            local_e0 = 0x8e9706e89058f9c5;
          }
          else if (uVar1 == 0x36780c1d4a07700a) {
            local_d8 = 0x5432a08f04577c1;
            if (local_98 < 0x7fffffffffffffec) {
              local_d8 = 0x63d0db4b7c6df2b;
            }
            local_e0 = 0x5d478c1c4ef8431a;
          }
        }
        if ((longlong)uVar1 < 0x5b7a81a8f93e9c31) break;
        if (uVar1 == 0x5b7a81a8f93e9c31) {
          lVar2 = FUN_1801d61c8(local_90 + 0x29);
          local_88 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
          local_88[-1] = lVar2;
          local_d8 = 0x1ed1a23348cfd2f6;
          local_e0 = 0x3b875266eeeb6aac;
        }
        else if (uVar1 == 0x767ccfbaa59dc194) {
          local_98 = local_c0 | local_d0;
          local_d8 = 0xc742088ba0f40b18;
          if (local_b0 < local_98) {
            local_d8 = 0xb3d8a28d7471b62b;
          }
          local_e0 = 0xebdc0499cacc82f0;
        }
        else if (uVar1 == 0x616f305d3036d9f1) {
          local_d0 = 7;
          local_c8 = 1;
          local_b0 = 0x7ffffffffffffffe;
          local_a8 = FUN_1801e15b0(param_2);
          local_a0 = param_3[2];
          local_d8 = 0x37fda294a59f2874;
          if (0x7ffffffffffffffeU - local_a0 < local_a8) {
            local_d8 = 0xabcf4cfe415fd83;
          }
          local_e0 = 0x818c3ba95afeed0;
        }
      }
      if (uVar1 != 0x3fe5612e3030c6a4) break;
      local_68 = param_3[3];
      local_60 = (undefined8 *)*param_3;
      *param_1 = 0;
      param_1[1] = 0;
      local_c0 = local_a0 + local_a8;
      local_80 = local_d0;
      local_d8 = 0xb4a47265c991feaa;
      if (local_d0 < local_c0) {
        local_d8 = 0x84b6146d6e8a350c;
      }
      local_e0 = 0xf2cadbd7cb17f498;
      local_78 = param_1;
    }
    if (uVar1 == 0x466ea9b202860a32) break;
    if (uVar1 == 0x5804a614bebd34db) {
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
  }
  if (local_d0 < local_68) {
    param_3 = local_60;
  }
  param_1[2] = local_c0;
  param_1[3] = local_80;
  FUN_1802079d0(local_78,param_2,local_a8 << (local_c8 & 0x3f));
  FUN_1802079d0((longlong)local_78 + local_a8 * 2,param_3,local_a0 << (local_c8 & 0x3f));
  *(undefined2 *)((longlong)local_78 + local_c0 * 2) = 0;
  return param_1;
}



undefined1 *
FUN_1801c1610(undefined1 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong local_1b0 [7];
  longlong *local_178;
  undefined1 local_168 [160];
  undefined1 local_c8 [56];
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78 [7];
  longlong *local_40;
  undefined1 *local_38;
  longlong *local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_40 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_3[7];
  local_38 = param_1;
  local_30 = param_3;
  if (puVar1 != (undefined8 *)0x0) {
    local_40 = (longlong *)(**(code **)*puVar1)(puVar1,local_78);
  }
  local_88 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_88 = (undefined8 *)*param_2;
  }
  local_80 = param_2[2] + (longlong)local_88;
  local_90 = (longlong *)0x0;
  if (local_40 != (longlong *)0x0) {
    plVar2 = local_40;
    if (local_40 == local_78) {
      local_90 = (longlong *)(**(code **)(*local_40 + 8))(local_40,local_c8);
      if (local_40 == (longlong *)0x0) goto LAB_1801c171a;
      (**(code **)(*local_40 + 0x20))(local_40,local_40 != local_78);
      plVar2 = local_90;
    }
    local_90 = plVar2;
    local_40 = (longlong *)0x0;
  }
LAB_1801c171a:
  FUN_1801c25b0(local_1b0,&local_88,local_c8,param_4,param_5);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x20))(local_40,local_40 != local_78);
  }
  FUN_1801c18d0(local_1b0,1,local_38);
  FUN_1801c27e0(local_168);
  if (local_178 != (longlong *)0x0) {
    (**(code **)(*local_178 + 0x20))(local_178,local_178 != local_1b0);
  }
  plVar2 = (longlong *)local_30[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != local_30);
  }
  return local_38;
}



void Unwind_1801c17c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(param_2 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x160));
    *(undefined8 *)(param_2 + 0x198) = 0;
  }
  return;
}



void Unwind_1801c1810(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(param_2 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x160));
  }
  return;
}



void Unwind_1801c1850(undefined8 param_1,longlong param_2)

{
  FUN_1801c2470(param_2 + 0x28);
  return;
}



void Unwind_1801c1880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  FUN_18005a440(*(undefined8 *)(param_2 + 0x1a0));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x1a8) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x1a8));
  }
  return;
}



void FUN_1801c18d0(longlong param_1,char param_2,exception_vftable *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_R14;
  runtime_error local_2c0;
  char local_210;
  undefined1 local_1f8 [56];
  undefined8 local_1c0;
  runtime_error local_1b8;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  exception_vftable *local_110;
  longlong local_108 [3];
  exception_vftable *peStack_f0;
  char local_e8;
  char local_e7;
  undefined8 local_d0;
  char local_c8;
  undefined7 uStack_c7;
  vfunction2 *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  int local_54;
  ulonglong local_50;
  vfunction2 *local_48;
  uint local_40;
  char local_3b;
  char local_3a;
  char local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_3b = '\x01';
  local_3a = '\0';
  local_84 = 0x65;
  local_54 = 0xf;
  local_d0 = 5;
  local_48 = (vfunction2 *)0x0;
  local_39 = '\t';
  local_80 = 0x28;
  local_50 = 0xf;
  local_78 = 1;
  local_70 = 0xfff;
  local_68 = -8;
  local_40 = 0;
  local_60 = 0x20;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 == (undefined8 *)0x0) {
    local_e7 = *(char *)(param_1 + 0xe0);
    local_108[0] = 0;
    local_108[1] = 0;
    local_108[2] = 0;
    peStack_f0 = (exception_vftable *)0x0;
    local_e8 = '\0';
    local_110 = param_3;
    FUN_1801cf160(param_1,&local_110);
    if (param_2 != '\0') {
      iVar4 = FUN_1801c2de0(param_1 + 0x48);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 != local_54) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = local_d0;
        local_90 = local_50;
        FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934);
        local_a8 = CONCAT44(CONCAT31(local_a8._5_3_,DAT_1802a8930),DAT_1802a892c);
        FUN_1801ce5a0(param_1,&local_c8,local_54,&local_a8);
        local_118 = *(undefined8 *)(param_1 + 0x78);
        local_128 = *(undefined4 *)(param_1 + 0x68);
        uStack_124 = *(undefined4 *)(param_1 + 0x6c);
        uStack_120 = *(undefined4 *)(param_1 + 0x70);
        uStack_11c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1b8,local_84,&local_128,&local_c8,0);
        FUN_1801cef10(param_1 + 0x48,&local_1b8.exception_data.offset_0x68);
        local_e8 = local_3b;
        if (local_e7 == '\x01') {
          std::runtime_error::runtime_error(&local_2c0,(longlong)&local_1b8);
          FUN_1801dd110(&local_2c0,&DAT_180253730);
        }
        if (local_50 < local_130) {
          uVar6 = local_78 + local_130;
          lVar5 = local_1b8.exception_data.offset_0x68;
          if (local_70 < uVar6) {
            lVar5 = *(longlong *)(local_1b8.exception_data.offset_0x68 + -8);
            if (local_60 <= (ulonglong)((local_1b8.exception_data.offset_0x68 + local_68) - lVar5)) goto LAB_1801c20e4;
            uVar6 = local_130 + local_80;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_1b8.vftablePtr = (runtime_error_vftable *)&PTR_exception_18020e910;
        local_1b8.exception_data.offset_0x18 = &std::exception::vftable.vfunction1;
        FUN_1801dd238(&local_1b8.exception_data.offset_0x20);
        local_1b8.vftablePtr = (runtime_error_vftable *)&std::exception::vftable;
        FUN_1801dd238(&local_1b8.exception_data);
        if (local_50 < local_b0) {
          lVar3 = CONCAT71(uStack_c7,local_c8);
          uVar6 = local_78 + local_b0;
          lVar5 = lVar3;
          if (local_70 < uVar6) {
            lVar5 = *(longlong *)(lVar3 + -8);
            if (local_60 <= (ulonglong)((lVar3 + local_68) - lVar5)) goto LAB_1801c20e4;
            uVar6 = local_b0 + local_80;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_b8 = local_48;
        local_b0 = local_50;
        local_c8 = local_3a;
        if (local_50 < local_90) {
          uVar6 = local_78 + local_90;
          lVar5 = local_a8;
          if (local_70 < uVar6) {
            lVar5 = *(longlong *)(local_a8 + -8);
            if (local_60 <= (ulonglong)((local_a8 + local_68) - lVar5)) goto LAB_1801c20e4;
            uVar6 = local_90 + local_80;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
      }
    }
    if (local_e8 == '\x01') {
      local_1b8.exception_data.offset_0x58._0_1_ = *(undefined1 *)&param_3->vfunction1;
      *(char *)&param_3->vfunction1 = local_39;
      local_1b8.exception_data.offset_0x60 = (longlong)param_3->vfunction2;
      param_3->vfunction2 = local_48;
      FUN_18007ff50(&local_1b8.exception_data.offset_0x60);
    }
    if (local_108[0] != 0) {
      uVar6 = local_108[2] - local_108[0];
      lVar5 = local_108[0];
      if (local_70 < uVar6) {
        lVar5 = *(longlong *)(local_108[0] + -8);
        if (local_60 <= (ulonglong)((local_108[0] + local_68) - lVar5)) {
LAB_1801c20e4:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_40,(uintptr_t)local_48);
        }
        uVar6 = uVar6 + 0x27;
      }
      thunk_FUN_1801f42e0(lVar5,uVar6);
    }
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xe0);
    local_1c0 = 0;
    local_1c0 = (**(code **)*puVar2)(puVar2,local_1f8);
    FUN_1800a1310(&local_2c0,param_3,local_1f8,CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar1) & 0xffffffff);
    FUN_1801cc350(param_1,&local_2c0);
    if (param_2 != '\0') {
      iVar4 = FUN_1801c2de0(param_1 + 0x48);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 != local_54) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = local_d0;
        local_90 = local_50;
        FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934);
        local_a8 = CONCAT44(CONCAT31(local_a8._5_3_,DAT_1802a8930),DAT_1802a892c);
        FUN_1801ce5a0(param_1,&local_c8,local_54,&local_a8);
        local_118 = *(undefined8 *)(param_1 + 0x78);
        local_128 = *(undefined4 *)(param_1 + 0x68);
        uStack_124 = *(undefined4 *)(param_1 + 0x6c);
        uStack_120 = *(undefined4 *)(param_1 + 0x70);
        uStack_11c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_110,local_84,&local_128,&local_c8,0);
        FUN_1801cef10(param_1 + 0x48,&local_1b8.exception_data.offset_0x68);
        local_2c0.exception_data.offset_0x60._0_1_ = local_3b;
        if (local_210 == '\x01') {
          std::runtime_error::runtime_error(&local_1b8,(longlong)&local_110);
          FUN_1801dd110(&local_1b8,&DAT_180253730);
        }
        if (local_50 < local_130) {
          uVar6 = local_78 + local_130;
          lVar5 = local_1b8.exception_data.offset_0x68;
          if (local_70 < uVar6) {
            lVar5 = *(longlong *)(local_1b8.exception_data.offset_0x68 + -8);
            if (local_60 <= (ulonglong)((local_1b8.exception_data.offset_0x68 + local_68) - lVar5)) goto LAB_1801c20e4;
            uVar6 = local_130 + local_80;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_110 = (exception_vftable *)&PTR_exception_18020e910;
        peStack_f0 = &std::exception::vftable;
        FUN_1801dd238(&local_e8);
        local_110 = &std::exception::vftable;
        FUN_1801dd238(local_108);
        if (local_50 < local_b0) {
          lVar3 = CONCAT71(uStack_c7,local_c8);
          uVar6 = local_78 + local_b0;
          lVar5 = lVar3;
          if (local_70 < uVar6) {
            lVar5 = *(longlong *)(lVar3 + -8);
            if (local_60 <= (ulonglong)((lVar3 + local_68) - lVar5)) goto LAB_1801c20e4;
            uVar6 = local_b0 + local_80;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
        local_b8 = local_48;
        local_b0 = local_50;
        local_c8 = local_3a;
        if (local_50 < local_90) {
          uVar6 = local_78 + local_90;
          lVar5 = local_a8;
          if (local_70 < uVar6) {
            lVar5 = *(longlong *)(local_a8 + -8);
            if (local_60 <= (ulonglong)((local_a8 + local_68) - lVar5)) goto LAB_1801c20e4;
            uVar6 = local_90 + local_80;
          }
          thunk_FUN_1801f42e0(lVar5,uVar6);
        }
      }
    }
    if ((char)local_2c0.exception_data.offset_0x60 == '\x01') {
      local_1b8.exception_data.offset_0x38._0_1_ = *(undefined1 *)&param_3->vfunction1;
      *(char *)&param_3->vfunction1 = local_39;
      local_1b8.exception_data.offset_0x40 = (longlong)param_3->vfunction2;
      param_3->vfunction2 = local_48;
      FUN_18007ff50(&local_1b8.exception_data.offset_0x40);
    }
    else if (*(char *)&param_3->vfunction1 == local_39) {
      *(char *)&param_3->vfunction1 = local_3a;
      local_1b8.exception_data._72_1_ = local_39;
      local_1b8.exception_data.offset_0x50 = (uintptr_t)param_3->vfunction2;
      param_3->vfunction2 = local_48;
      FUN_18007ff50(&local_1b8.exception_data.offset_0x50,local_39);
    }
    FUN_1800a4bb0(&local_2c0);
  }
  return;
}



void Unwind_1801c2150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(param_2 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xf0));
  }
  return;
}



void Unwind_1801c21a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801c21e0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x1d8));
  return;
}



void Unwind_1801c2220(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x220);
  return;
}



void Unwind_1801c2260(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x240);
  return;
}



void Unwind_1801c22a0(void)

{
  Unwind_1801dd394();
}



void Unwind_1801c22c0(undefined8 param_1,longlong param_2)

{
  FUN_1800a4bb0(param_2 + 0x28);
  return;
}



void Unwind_1801c22f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801c2330(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x130));
  return;
}



void Unwind_1801c2370(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x220);
  return;
}



void Unwind_1801c23b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x240);
  return;
}



void Unwind_1801c23f0(void)

{
  Unwind_1801dd394();
}



void Unwind_1801c2410(undefined8 param_1,longlong param_2)

{
  FUN_1800a7140(param_2 + 0x1d8);
  return;
}



void Unwind_1801c2450(void)

{
  Unwind_1801dd394();
}



void FUN_1801c2470(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;

  local_58 = 0x3f849fa4cf402ed3;
  local_60 = 0x910df99584b30dc0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x62e0070484186180;
        if (uVar1 != 0xae8966314bf32313) break;
        FUN_1801c27e0(param_1 + 9);
        local_50 = param_1 + 7;
        local_48 = (longlong *)param_1[7];
        local_58 = 0x354343a93fb14840;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0x2bc252d542bff3c;
        }
        local_60 = 0x63b001911044d074;
      }
      if (uVar1 != 0x56f342382ff59834) break;
      (**(code **)(*local_48 + 0x20))
                (local_48,CONCAT71((int7)((local_58 ^ 0x62e0070484186180) >> 8),local_48 != param_1));
      *local_50 = 0;
      local_58 = 0xf6251bfa5fbf519d;
      local_60 = 0x97293f461bd07ed5;
    }
    local_58 = local_58 ^ 0x62e0070484186180;
  } while (uVar1 != 0x610c24bc446f2f48);
  return;
}



longlong FUN_1801c25b0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,undefined1 param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;

  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar5 = (undefined8 *)param_3[7];
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar5)(puVar5,param_1);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined1 *)(param_1 + 0x58) = param_5;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0xf;
  *(undefined **)(param_1 + 0xb8) = &DAT_18020c3c0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  puVar5 = (undefined8 *)FUN_1801e13d8();
  iVar2 = 0x2e;
  if ((char *)*puVar5 != (char *)0x0) {
    iVar2 = (int)*(char *)*puVar5;
  }
  *(int *)(param_1 + 0xd8) = iVar2;
  *(undefined1 *)(param_1 + 0xe0) = param_4;
  uVar3 = FUN_1801c2de0(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
  }
  return param_1;
}



void Unwind_1801c2700(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;

  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}



void Unwind_1801c2750(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;

  FUN_1801c27e0(*(undefined8 *)(param_2 + 0x20));
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}



void Unwind_1801c27a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;

  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x28));
  }
  return;
}



void FUN_1801c27e0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f4;
  uintptr_t local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_100 = 0xcc63e698fe6c2911;
  local_108 = 0xf9861055b4036dea;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_100 ^ 0x3796c0a0c36bf938;
            uVar1 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x3796c0a0c36bf938;
            local_100 = uVar2;
            if ((longlong)uVar1 < 0x24775670c2efa91f) break;
            if ((longlong)uVar1 < 0x66812b5741b97a9d) {
              if (uVar1 == 0x35e5f6cd4a6f44fb) {
                local_f0 = 0;
                local_d0 = 0xf;
                local_d8 = 0xfff;
                local_e0 = -8;
                local_f4 = 0;
                local_e8 = 0x20;
                local_c8 = (longlong *)(param_1 + 0x50);
                local_90 = (undefined8 *)(param_1 + 0x68);
                local_c0 = *(ulonglong *)(param_1 + 0x68);
                local_100 = 0xfdb54ab8b83175f6;
                if (local_c0 < 0x10) {
                  local_100 = 0x9143cfed8c6827a6;
                }
                local_108 = 0xf7c2e4bacdd15d3b;
              }
              else if (uVar1 == 0x3b59e91b36dee58b) {
                local_98 = local_b8;
                local_a0 = *(longlong *)(param_1 + 0x48) - local_b8;
                local_100 = 0xa5f7e10b94e70d88;
                if (local_a0 <= local_d8) {
                  local_100 = 0x4c5d112edf26467b;
                }
                local_108 = 0x6ee67c9cc68b6082;
                local_70 = local_98;
                local_68 = local_a0;
              }
              else if (uVar1 == 0x24775670c2efa91f) {
                return;
              }
            }
            else if (uVar1 == 0x66812b5741b97a9d) {
              *(uintptr_t *)(param_1 + 0x60) = local_f0;
              *local_90 = local_d0;
              *(undefined1 *)local_c8 = 0;
              local_88 = (undefined8 *)(param_1 + 0x38);
              local_b8 = *(longlong *)(param_1 + 0x38);
              local_100 = 0xa5f6a1974845819b;
              if (local_b8 != 0) {
                local_100 = 0xbad81efcbc74cd0f;
              }
              local_108 = 0x8181f7e78aaa2884;
            }
            else if (uVar1 == 0x6f5802004d4a8876) {
              local_78 = *(longlong *)(local_60 + -8);
              local_100 = 0x5c2f3135ae94f884;
              if (local_e8 <= (ulonglong)((local_60 + local_e0) - local_78)) {
                local_100 = 0xd102748aa2b83784;
              }
              local_108 = 0x2e95eb65d4ef93d6;
            }
            else if (uVar1 == 0x72bada507a7b6b52) {
              local_b0 = local_c0 + 0x28;
              local_a8 = local_78;
              local_100 = 0x428fcdc4e26192ff;
              local_108 = 0x408f7afba9d88a57;
            }
          }
          if ((longlong)uVar1 < 0x200b73f4bb918a8) break;
          if (uVar1 == 0x200b73f4bb918a8) {
            thunk_FUN_1801f42e0(local_a8,local_b0);
            local_100 = 0x2e325a7a4e8d4948;
            local_108 = 0x48b3712d0f3433d5;
          }
          else if (uVar1 == 0xa77ae0275e028cd) {
            local_a8 = *local_c8;
            local_b0 = local_c0 + 1;
            local_100 = 0x7f673f11a46f4851;
            if (local_b0 <= local_d8) {
              local_100 = 0x123f8a2ea29cd88f;
            }
            local_108 = 0x103f3d11e925c027;
            local_60 = local_a8;
          }
          else if (uVar1 == 0x22bb6db219ad26f9) {
            thunk_FUN_1801f42e0(local_98,local_a0);
            *local_88 = 0;
            local_88[1] = 0;
            local_88[2] = 0;
            local_100 = 0xd6cd70b275d4fee6;
            local_108 = 0xf2ba26c2b73b57f9;
          }
        }
        if (-0x34ee6268ad9392f7 < (longlong)uVar1) break;
        if (uVar1 == 0xb2a24d396e2b798c) {
          local_a0 = local_68 + 0x27;
          local_100 = 0xa7cd99a455350841;
          local_108 = 0x8576f4164c982eb8;
          local_98 = local_80;
        }
      }
      if (uVar1 != 0xcb119d97526c6d0a) break;
      local_80 = *(longlong *)(local_b8 + -8);
      local_100 = 0x4296a367300f0760;
      if (local_e8 <= (ulonglong)((local_70 + local_e0) - local_80)) {
        local_100 = 0x3dee71aca46d872d;
      }
      local_108 = 0xf034ee5e5e247eec;
    }
  } while ((uVar1 != 0xcdda9ff2fa49f9c1) && (uVar1 != 0xff979fef7657a452));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_f0);
}



undefined4 FUN_1801c2de0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  int local_8c;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  char *local_60;
  int *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_80 = 0x1495f70ea52eb26f;
  local_88 = 0x5a53ccf30361fe80;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar3 = local_80 ^ 0x7ece150dc230f79b;
                uVar2 = local_80 ^ local_88;
                local_88 = local_88 ^ 0x7ece150dc230f79b;
                local_80 = uVar3;
                if (-0x5a73f3ff1be41f2 < (longlong)uVar2) break;
                if ((longlong)uVar2 < -0x39c862b65f5d7b1d) {
                  if ((longlong)uVar2 < -0x6219b4c48ea159d8) {
                    if ((longlong)uVar2 < -0x6a11b829d722cc49) {
                      if (uVar2 == 0x81ca28cc3601d27f) {
                        local_80 = 0x5bc29ba4948845d6;
                        if (local_8c < 0x6e) {
                          local_80 = 0x25142ed38104102e;
                        }
                        local_88 = 0x67e92ad6ea62c725;
                      }
                      else if (uVar2 == 0x92d6da59007d4557) {
                        cVar1 = FUN_1801c3d10(param_1);
                        local_80 = 0x61be0b20ff42c97c;
                        if (cVar1 != '\0') {
                          local_80 = 0xa3ef24aa5b154b35;
                        }
                        local_88 = 0x73b21286afb7f98b;
                      }
                    }
                    else if (uVar2 == 0x95ee47d628dd33b7) {
                      local_80 = 0xffc580975ee54275;
                      if (local_8c == 0x66) {
                        local_80 = 0xf755b0487c4b929e;
                      }
                      local_88 = 0x296b8fcc2cb8317a;
                    }
                    else if (uVar2 == 0x97430ac8e934bea5) {
                      local_80 = 0x2adb211f521dfcc;
                      if (local_8c == 0x7b) {
                        local_80 = 0xae5d38368df033ab;
                      }
                      local_88 = 0xd403bd4a877cacc3;
                    }
                    else if (uVar2 == 0x9c4934f8035e00f5) {
                      cVar1 = FUN_1801c5870(param_1);
                      local_80 = 0xc90106d606f2aa1d;
                      if (cVar1 != '\0') {
                        local_80 = 0x3667074b4ac4e4a9;
                      }
                      local_88 = 0xf390c5a3e2260cd2;
                      local_78 = local_74;
                    }
                  }
                  else if ((longlong)uVar2 < -0x50e44b7d6fdf1b00) {
                    if (uVar2 == 0x9de64b3b715ea628) {
                      local_78 = FUN_1801c90a0(param_1);
                      local_80 = 0xe0d36eb3def04835;
                      local_88 = 0xda42adc63a24eefa;
                    }
                    else if (uVar2 == 0x9dea722777f9c54d) {
                      local_80 = 0x3378ca006312454b;
                      if (local_8c < 0x7d) {
                        local_80 = 0xad8ffc37f02d6e80;
                      }
                      local_88 = 0x3accf6ff1919d025;
                    }
                    else if (uVar2 == 0xa82ba70a16a39785) {
                      local_80 = 0x6d6cab320df46c60;
                      if (local_8c < 0x5b) {
                        local_80 = 0xf86405888149195e;
                      }
                      local_88 = 0xeca683fe3bf5be1f;
                    }
                  }
                  else if (uVar2 == 0xaf1bb4829020e500) {
                    local_50 = 0x65757274;
                    local_78 = FUN_1801c75e0(param_1,&local_50,local_68,1);
                    local_80 = 0xe88cccc1bfa791e0;
                    local_88 = 0xd21d0fb45b73372f;
                  }
                  else if (uVar2 == 0xc13af985f9d7618f) {
                    local_80 = 0x56b9ffc1e77d6ed9;
                    if (local_8c < 0x30) {
                      local_80 = 0x3337d8b7eed471ad;
                    }
                    local_88 = 0x442a325e720fef1;
                  }
                  else if (uVar2 == 0xc5f7c2e8a8e2e87b) {
                    FUN_1801c4ff0(param_1);
                    local_6c = *local_58;
                    local_80 = 0x5fa938e1dada2b6d;
                    if (local_6c == local_70) {
                      local_80 = 0xeaccddf12db1e9d5;
                    }
                    if (*local_60 == '\0') {
                      local_80 = 0x5fa938e1dada2b6d;
                    }
                    local_88 = 0x7685e9092eefe920;
                  }
                }
                else if ((longlong)uVar2 < -0x2238cb9186387a61) {
                  if ((longlong)uVar2 < -0x2e2da33002cb77ca) {
                    if (uVar2 == 0xc6379d49a0a284e3) {
                      local_98 = &DAT_1802a7c98;
                      FUN_1801d1f63(&DAT_1802a7c88,&DAT_18029dfcc,0x16,0x10);
                      *(undefined **)(param_1 + 0x70) = &DAT_1802a7c88;
                      local_80 = 0x2c1f1d0694f2064c;
                      local_88 = 0x168ede737026a083;
                      local_78 = local_74;
                    }
                    else if (uVar2 == 0xd05d362cf4a2b2be) {
                      FUN_1801c4ff0(param_1);
                      local_60 = (char *)(param_1 + 0x10);
                      local_58 = (int *)(param_1 + 0x14);
                      local_6c = *(int *)(param_1 + 0x14);
                      local_80 = 0xe2bf9a9ebc9aa27a;
                      if (local_6c == local_70) {
                        local_80 = 0x57da7f8e4bf160c2;
                      }
                      if (*(char *)(param_1 + 0x10) == '\0') {
                        local_80 = 0xe2bf9a9ebc9aa27a;
                      }
                      local_88 = 0xcb934b7648af6037;
                    }
                  }
                  else if (uVar2 == 0xd1d25ccffd348836) {
                    local_80 = 0x671324ec163580d4;
                    if (local_8c < 0x22) {
                      local_80 = 0xa0d536cd5fd6dae0;
                    }
                    local_88 = 0x55e3e211b10f5397;
                  }
                  else if (uVar2 == 0xd6ae0f5b725d730f) {
                    local_80 = 0x6351725927e939d5;
                    local_88 = 0xa566ef10874bbd36;
                  }
                  else if (uVar2 == 0xd932de520367a2b9) {
                    local_80 = 0xe8f7135d7f49aa4c;
                    if (local_8c < 0x74) {
                      local_80 = 0xf21e4e6752b2ac1d;
                    }
                    local_88 = 0xf89c098346fef548;
                  }
                }
                else if ((longlong)uVar2 < -0xeacbc4e96f8ab4b) {
                  if (uVar2 == 0xddc7346e79c7859f) {
                    local_78 = 0xd;
                    local_80 = 0xc580c0d67609daf0;
                    local_88 = 0xff1103a392dd7c3f;
                  }
                  else if (uVar2 == 0xde3e3f8450f3a3e4) {
                    local_4c = 0x65;
                    local_50 = 0x736c6166;
                    local_78 = FUN_1801c75e0(param_1,&local_50,5,2);
                    local_80 = 0x1c3702351e170b93;
                    local_88 = 0x26a6c140fac3ad5c;
                  }
                  else if (uVar2 == 0xef62330994cafd78) {
                    local_78 = 10;
                    local_80 = 0xf7c8f7232f5a4570;
                    local_88 = 0xcd593456cb8ee3bf;
                  }
                }
                else if (uVar2 == 0xf15343b1690754b5) {
                  local_78 = 0xf;
                  local_80 = 0x768a599ad661452c;
                  local_88 = 0x4c1b9aef32b5e3e3;
                }
                else if (uVar2 == 0xf536d4dceed98977) {
                  local_80 = 0x7c8cc2631fc79a2f;
                  if (local_8c + 1U < 2) {
                    local_80 = 0x5b718e89049dbd95;
                  }
                  local_88 = 0xaa22cd386d9ae920;
                }
                else if (uVar2 == 0xf90a61f4f79bb9af) {
                  local_80 = 0x8557598a31cb0a1e;
                  if (local_8c == 0x5b) {
                    local_80 = 0x696895a4a742dfde;
                  }
                  local_88 = 0x53f956d143967911;
                  local_78 = 8;
                }
              }
              if (0x3a91c375e4d4a6ce < (longlong)uVar2) break;
              if ((longlong)uVar2 < 0x120c19a650f530f7) {
                if ((longlong)uVar2 < 0x9b43cff7a0b956e) {
                  if (uVar2 == 0xfa58c0c00e41be0f) {
                    local_80 = 0xa9ab18c192cb7c52;
                    if (local_8c == 0x3a) {
                      local_80 = 0x44ab171af5298a6f;
                    }
                    local_88 = 0x7f05179ae0960f5d;
                  }
                  else if (uVar2 == 0x25c0368f94cdfb5) {
                    local_80 = 0x7dcbe6f77b755091;
                    if (local_8c == 0x22) {
                      local_80 = 0xf35a01ea85fcb17a;
                    }
                    local_88 = 0xab65e9ac0928239e;
                  }
                }
                else if (uVar2 == 0x9b43cff7a0b956e) {
                  local_80 = 0x5c477301fab771c0;
                  if (local_8c == 0x7d) {
                    local_80 = 0xc590ab1ee9204084;
                  }
                  local_88 = 0x8ae97c5a88ea02cf;
                }
                else if (uVar2 == 0xa8247e4144c5955) {
                  local_80 = 0x21bee765b013992e;
                  if (local_8c == 0x6e) {
                    local_80 = 0x9e9caf67bcb340ca;
                  }
                  local_88 = 0xf710e83ec24eea21;
                }
                else if (uVar2 == 0x106b1ade39b75f04) {
                  local_80 = 0x11507511bac49bad;
                  if (local_8c == 0x74) {
                    local_80 = 0x68e5cec858b90da2;
                  }
                  local_88 = 0xc7fe7a4ac899e8a2;
                }
              }
              else if ((longlong)uVar2 < 0x2d9fb63e2e82457a) {
                if (uVar2 == 0x120c19a650f530f7) {
                  local_98 = &DAT_1802a7c84;
                  FUN_1801d1f63(&DAT_1802a7c54,&DAT_18029df75,0x14,0x2d);
                  *(undefined **)(param_1 + 0x70) = &DAT_1802a7c54;
                  local_80 = 0x901781c3422f1aa4;
                  local_88 = 0xaa8642b6a6fbbc6b;
                  local_78 = local_74;
                }
                else if (uVar2 == 0x14c28676babca741) {
                  local_80 = 0x67cc8ff205759507;
                  if (local_8c < 0x2d) {
                    local_80 = 0x77242ab801967cbe;
                  }
                  local_88 = 0xa6f67677fca2f488;
                }
                else if (uVar2 == 0x292cd1e8f435c24d) {
                  local_8c = local_6c;
                  local_80 = 0x7d3aa61d35a44e26;
                  local_88 = 0xd51101172307d9a3;
                }
              }
              else if (uVar2 == 0x2d9fb63e2e82457a) {
                local_80 = 0x2132a9743c31d61f;
                if (local_8c == 0x5d) {
                  local_80 = 0x18fe9526daa65868;
                }
                local_88 = 0xf79ca62f4e6ca510;
              }
              else if (uVar2 == 0x32f0c6fda73ad343) {
                local_80 = 0xb6eb26a3daa5da0f;
                if (local_8c < 0x2c) {
                  local_80 = 0x697011a55a2e8025;
                }
                local_88 = 0x6b2c12cda3625f90;
              }
              else if (uVar2 == 0x37757b9209f48f5c) {
                local_80 = 0xecea88464b42885b;
                if (local_8c == 0x2d) {
                  local_80 = 0xa7a2cc2648415d7c;
                }
                local_88 = 0x3a44871d391ffb54;
              }
            }
            if ((longlong)uVar2 < 0x4f79d74461ca424b) break;
            if ((longlong)uVar2 < 0x583fe8468cd492e4) {
              if (uVar2 == 0x4f79d74461ca424b) {
                local_78 = 0xb;
                local_80 = 0xc6ccfc6fde319c44;
                local_88 = 0xfc5d3f1a3ae53a8b;
              }
              else if (uVar2 == 0x52fb5ce4005d9028) {
                local_80 = 0x9b68d92f73d6e970;
                if (local_8c < 0x3a) {
                  local_80 = 0xfcd652d40cc9f157;
                }
                local_88 = 0x613019ef7d97577f;
              }
            }
            else if (uVar2 == 0x583fe8468cd492e4) {
              local_78 = FUN_1801c7df0(param_1);
              local_80 = 0x997a14045836d1d7;
              local_88 = 0xa3ebd771bce27718;
            }
            else if (uVar2 == 0x698c47597efdaaeb) {
              local_50 = 0x6c6c756e;
              local_78 = FUN_1801c75e0(param_1,&local_50,local_68,3);
              local_80 = 0x1f1955af8bc15b8e;
              local_88 = 0x258896da6f15fd41;
            }
            else if (uVar2 == 0x7a5e857c0a8c9f68) {
              local_78 = 9;
              local_80 = 0x33cb3e207e433e0b;
              local_88 = 0x95afd559a9798c4;
            }
          }
          if ((longlong)uVar2 < 0x42fd04056b66d70b) break;
          if (uVar2 == 0x42fd04056b66d70b) {
            local_80 = 0x46bd2e430f87d67f;
            if (local_8c < 0x5d) {
              local_80 = 0xf322814ebc2e0a66;
            }
            local_88 = 0xa28e0ba4bb5b3c9;
          }
          else if (uVar2 == 0x4c95cef9443265b6) {
            local_80 = 0xbd4e8bf7736d6717;
            if (local_8c < 0x66) {
              local_80 = 0x53f7a1f753211da;
            }
            local_88 = 0x28a0cc215bb054a0;
          }
          else if (uVar2 == 0x4ec63bfda64f4cef) {
            local_68 = 4;
            local_70 = 0x2f;
            local_74 = 0xe;
            local_80 = 0x8eaf724267cc44d9;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              local_80 = 0xcc249e379313b330;
            }
            local_88 = 0x5ef2446e936ef667;
          }
        }
        if (uVar2 != 0x3bae008015bf8532) break;
        local_78 = 0xc;
        local_80 = 0x2b9d166ae7605739;
        local_88 = 0x110cd51f03b4f1f6;
      }
      if (uVar2 != 0x3c2bb1727eea82f3) break;
      local_80 = 0xfeef0d8b611b3a32;
      if (local_8c < 0x7b) {
        local_80 = 0xba37a1fe15855dc6;
      }
      local_88 = 0x63057fac16e2ff7f;
    }
  } while (uVar2 != 0x3a91c375e4d4a6cf);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_b8)) {
  }
  return local_78;
}



undefined1 FUN_1801c3d10(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_161;
  ulonglong local_160;
  ulonglong local_158;
  char local_14c;
  char local_14b;
  byte local_14a;
  byte local_149;
  uint local_148;
  undefined1 local_142;
  byte local_141;
  byte local_140;
  undefined1 local_13f;
  byte local_13e;
  byte local_13d;
  uint local_13c;
  char *local_138;
  uint *local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  longlong local_d8;
  uint local_d0;
  uint local_cc;
  undefined1 *local_c8;
  undefined8 *local_c0;
  byte *local_b8;
  byte *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  longlong local_60;

  local_158 = 0xfc8dff8cf26f9e1e;
  local_160 = 0x4cd24d327648c2e0;
LAB_1801c3df0:
  while( true ) {
    while( true ) {
      uVar2 = local_158 ^ 0xcd946206bd0f48ec;
      uVar1 = local_158 ^ local_160;
      local_160 = local_160 ^ 0xcd946206bd0f48ec;
      local_158 = uVar2;
      if ((longlong)uVar1 < 0x16816f9ac55516c0) break;
      if ((longlong)uVar1 < 0x482e88014a5b2b46) {
        if ((longlong)uVar1 < 0x309897c3b2ce53ad) {
          if ((longlong)uVar1 < 0x1a5ef3f335a915de) {
            if (uVar1 == 0x16816f9ac55516c0) {
              local_161 = local_120 == 0xbf;
              local_158 = 0x704c1a00e4269b41;
              local_160 = 0xc63eb8c0023c2023;
            }
            else if (uVar1 == 0x1920bf9a0804dd73) {
              param_1[6] = local_60 + local_d8;
              local_158 = 0x9b51f67a657b9ae;
              local_160 = 0xfada02553af90d63;
              local_11c = local_d0;
            }
            else if (uVar1 == 0x19f3ff4ee8f45414) {
              local_158 = 0x7ec930675d31d30d;
              if (local_13c == 10) {
                local_158 = 0x9783a0d51956c9a;
              }
              local_160 = 0xde23b5276e365541;
            }
          }
          else if (uVar1 == 0x1a5ef3f335a915de) {
            FUN_18009fb00(param_1 + 7,local_b0,&local_141);
            local_158 = 0x10bbd7edeeba0da3;
            local_160 = 0x58955feca4e126e5;
          }
          else if (uVar1 == 0x1a8c9098b084675e) {
            local_158 = 0x29ceaf5044d079de;
            if (local_124 == 0xbb) {
              local_158 = 0x6aee714bd21d4d32;
            }
            local_160 = 0x6c0a12f68e665948;
          }
          else if (uVar1 == 0x273b1104a92cadd0) {
            local_90 = local_98;
            local_dc = local_e8;
            *local_138 = local_14b;
            *local_108 = local_a0;
            local_158 = 0xf7752dda9c1f85ce;
            if (local_98 == local_110) {
              local_158 = 0x7ebe5099f6580288;
            }
            local_160 = 0x3442d1867b546da2;
          }
        }
        else if ((longlong)uVar1 < 0x3c0acc0b2cb7ee9b) {
          if (uVar1 == 0x309897c3b2ce53ad) {
            *local_130 = local_148;
            local_158 = 0x96a664e113474f00;
            local_160 = 0x80270b7bd61259c0;
            local_120 = local_148;
          }
          else if (uVar1 == 0x381ccd6489037648) {
            local_158 = 0x361a35abe5d17d23;
            if (local_124 == 10) {
              local_158 = 0x954265169f1f4b75;
            }
            local_160 = 0x73de880d2f675db5;
          }
          else if (uVar1 == 0x3b3e6d74dd8a40d6) {
            *local_c8 = local_13f;
            *local_f8 = *local_f8 + 1;
            local_158 = 0x444e887b0c4e9f52;
            local_160 = 0xfdf28e4f81eac621;
          }
        }
        else if (uVar1 == 0x3c0acc0b2cb7ee9b) {
          local_60 = local_a8;
          local_d0 = local_ec;
          local_158 = 0xd5ccefb4b17506e5;
          if (local_a8 == local_110) {
            local_158 = 0x3f834d1c25df6f5b;
          }
          local_160 = 0xccec502eb971db96;
          local_11c = local_ec;
        }
        else {
          if (uVar1 == 0x45c4bda6cab62096) {
            local_158 = 0x8051cc550daf9315;
            local_160 = 0x36236e95ebb52877;
            goto LAB_1801c3de5;
          }
          if (uVar1 == 0x47272160e20cd228) {
            *local_138 = local_14c;
            local_158 = 0xecc45a59f59177e4;
            local_160 = 0xe54ae762c62104e4;
            local_149 = 0xef;
          }
        }
      }
      else if ((longlong)uVar1 < 0x6230a1b419b1fafd) {
        if ((longlong)uVar1 < 0x51bf62b3ffcda2fb) {
          if (uVar1 == 0x482e88014a5b2b46) {
            local_124 = *local_130;
            local_158 = 0x8b75b695d09ec24b;
            local_160 = 0x6546bf56560f0ca9;
          }
          else if (uVar1 == 0x4afc811f8d0c6f2a) {
            local_a8 = param_1[6];
            local_158 = 0x88af1b8780addf47;
            local_160 = 0xb4a5d78cac1a31dc;
            local_ec = local_dc;
          }
          else if (uVar1 == 0x4ba9278b84e9ac5d) {
            local_14a = *local_68;
            *param_1 = local_68 + 1;
            *local_130 = (uint)local_14a;
            local_158 = 0xd32d1948c6838028;
            local_160 = 0x5ff8c1122127736c;
          }
        }
        else if (uVar1 == 0x51bf62b3ffcda2fb) {
          *local_138 = local_14c;
          local_158 = 0x2fb85f47681962a3;
          local_160 = 0xa36d871d8fbd91e7;
          local_14a = 0xbb;
        }
        else if (uVar1 == 0x5dbbb82749fe6afa) {
          local_149 = *local_70;
          *param_1 = local_70 + 1;
          *local_130 = (uint)local_149;
          local_158 = 0x7b7b3408ef29c326;
          local_160 = 0x72f58933dc99b026;
        }
        else if (uVar1 == 0x5deb1c068e49c696) {
          FUN_18009fb00(param_1 + 7,local_b8,&local_140);
          local_158 = 0x976912e7aee13698;
          local_160 = 0x828077bbe8f492c0;
        }
      }
      else if ((longlong)uVar1 < 0x7734e1e2e8ff8a5f) {
        if (uVar1 == 0x6230a1b419b1fafd) {
          local_78 = (byte *)*param_1;
          local_158 = 0x9bc8361fa94c315;
          if (local_78 == (byte *)param_1[1]) {
            local_158 = 0x34099e32763d5367;
          }
          local_160 = 0xfb618946fabaf21d;
          local_e4 = local_148;
        }
        else if (uVar1 == 0x635461d1061cf7c3) {
          local_98 = *local_100;
          local_a0 = *local_108 + local_d8;
          local_158 = 0x73beea0aa36000c4;
          local_160 = 0x5485fb0e0a4cad14;
          local_e8 = local_13c;
        }
        else if (uVar1 == 0x73ae802e895ebd7b) {
          *local_108 = *local_108 + 1;
          local_108[1] = local_108[1] + 1;
          local_158 = 0xedf85669f4cf61e2;
          if (*local_138 != '\0') {
            local_158 = 0x5b4fb09fb0674d5a;
          }
          local_160 = 0x1c6891ff526b9f72;
        }
      }
      else if (uVar1 == 0x7734e1e2e8ff8a5f) {
        FUN_18009fb00(param_1 + 7,local_c8,&local_142);
        local_158 = 0x6b46cc3d852c9636;
        local_160 = 0xd2faca090888cf45;
      }
      else if (uVar1 == 0x774f67bcf381d3b3) {
        local_142 = (undefined1)local_cc;
        local_f8 = param_1 + 8;
        local_c8 = (undefined1 *)param_1[8];
        local_c0 = param_1 + 9;
        local_158 = 0xa35f0e8446457d59;
        if (local_c8 == (undefined1 *)param_1[9]) {
          local_158 = 0xef5582127330b7d0;
        }
        local_160 = 0x986163f09bcf3d8f;
        local_13f = local_142;
      }
      else if (uVar1 == 0x7d106a3c7d02ca4f) {
        param_1[6] = param_1[6] + local_118;
        *local_100 = local_110;
        local_158 = 0x8b6ba378b107df82;
        local_160 = 0x9deacce27452c942;
        local_120 = local_128;
      }
    }
    if (-0x1909f3cd32854591 < (longlong)uVar1) break;
    if ((longlong)uVar1 < -0x3cc803a318b41794) {
      if ((longlong)uVar1 < -0x4fa04d417bd8a302) {
        if (uVar1 == 0x8aa43904ab4d3ae0) {
          *local_130 = local_148;
          local_158 = 0x5995544cf3380413;
          local_160 = 0xefe7f68c1522bf71;
          goto LAB_1801c3de5;
        }
        if (uVar1 == 0x8cd5d85ae7a4f344) {
          local_140 = local_14a;
          local_b8 = (byte *)*local_f8;
          local_158 = 0xb9ea836b7967b854;
          if (local_b8 == (byte *)*local_c0) {
            local_158 = 0x16538dd03b59b163;
          }
          local_160 = 0x4bb891d6b51077f5;
          local_13e = local_140;
        }
        else if (uVar1 == 0xa0ea85403307864c) {
          local_158 = 0x5543cc5c6af00020;
          local_160 = 0x3617ad8d6cecf7e3;
        }
      }
      else if ((longlong)uVar1 < -0x4643f9cb725ba68d) {
        if (uVar1 == 0xb05fb2be84275cfe) {
          local_14b = '\x01';
          local_14c = '\0';
          local_110 = 0;
          local_d8 = -1;
          local_128 = 10;
          local_118 = 1;
          local_148 = 0xffffffff;
          local_108 = param_1 + 4;
          local_88 = param_1[4];
          param_1[4] = local_88 + 1;
          local_100 = param_1 + 5;
          local_80 = param_1[5] + 1;
          param_1[5] = local_80;
          local_138 = (char *)(param_1 + 3);
          local_158 = 0x46f5733c2e417ac7;
          if (*(char *)(param_1 + 3) != '\0') {
            local_158 = 0x2893e677031ac0f8;
          }
          local_160 = 0x24c5d28837f0803a;
        }
        else if (uVar1 == 0xb672a2c0e61abb62) {
          return local_161;
        }
      }
      else if (uVar1 == 0xb9bc06348da45973) {
        local_13c = *local_130;
        local_158 = 0x41a0236c7b609fba;
        local_160 = 0x94b66b542d7681a9;
      }
      else if (uVar1 == 0xbcd99356b5d3a24e) {
        local_158 = 0xb4cad781f0da8101;
        if (local_13c == 0xef) {
          local_158 = 0x678ed2ef4a83ba36;
        }
        local_160 = 0x142052c1c3dd074d;
      }
    }
    else if ((longlong)uVar1 < -0x2ae9b7c7a9e9e1ed) {
      if (uVar1 == 0xc337fc5ce74be86c) {
        *local_100 = local_90 + local_d8;
        local_158 = 0x619647dd947faae1;
        local_160 = 0x92f95aef08d11e2c;
        local_11c = local_dc;
      }
      else if (uVar1 == 0xc828172bb262df9c) {
        local_68 = (byte *)*param_1;
        local_158 = 0x877b5c3eb4fd7c7b;
        if (local_68 == (byte *)param_1[1]) {
          local_158 = 0xfc4aec7682da838b;
        }
        local_160 = 0xccd27bb53014d026;
      }
      else if (uVar1 == 0xcf6817748c87a17a) {
        *(uint *)((longlong)param_1 + 0x14) = local_e4;
        local_158 = 0xd831ac063540ccbb;
        local_160 = 0xddb381e5ee2ef820;
        local_e0 = local_e4;
      }
    }
    else if (uVar1 == 0xd516483856161e13) {
      local_158 = 0x1c53f3c27620f950;
      if ((int)local_13c < 0xef) {
        local_158 = 0xb9799fda2b070f0a;
      }
      local_160 = 0xa08a6094c3f35b1e;
    }
    else if (uVar1 == 0xd75b8f2a3fa339db) {
      local_a8 = param_1[6] + local_118;
      param_1[6] = local_a8;
      *local_100 = local_110;
      *local_138 = local_14b;
      *local_108 = *local_108 + local_d8;
      local_158 = 0xa7b05e5a7c52f5d5;
      local_160 = 0x9bba925150e51b4e;
      local_ec = local_128;
    }
    else if (uVar1 == 0xe69ced1bb07816c0) {
      param_1[6] = param_1[6] + local_118;
      *local_100 = local_110;
      local_158 = 0x859facd2690b9b28;
      local_160 = 0x33ed0e128f11204a;
LAB_1801c3de5:
      local_161 = 0;
    }
  }
  if (0x5822de3db6e349a < (longlong)uVar1) {
    if ((longlong)uVar1 < 0xc5634ff34ea40c2) {
      if (uVar1 == 0x5822de3db6e349b) {
        local_cc = local_e0;
        local_130 = (uint *)((longlong)param_1 + 0x14);
        local_158 = 0xfc73cbb0f4bd5d25;
        if (local_e0 == local_148) {
          local_158 = 0xac07bd08ae102346;
        }
        local_e8 = local_148;
        local_160 = 0x8b3cac0c073c8e96;
        local_a0 = local_88;
        local_98 = local_80;
      }
      else if (uVar1 == 0x6e463bd5c7b147a) {
        *local_108 = *local_108 + 1;
        local_108[1] = local_108[1] + 1;
        local_158 = 0x1b01ea290d9a0556;
        if (*local_138 != '\0') {
          local_158 = 0x82969fb140357831;
        }
        local_160 = 0xd329fd02bff8daca;
      }
      else if (uVar1 == 0x98ebd3b33b07300) {
        local_141 = local_149;
        local_b0 = (byte *)*local_f8;
        local_158 = 0x44065a54bcc9b321;
        if (local_b0 == (byte *)*local_c0) {
          local_158 = 0x4dc0da6c005cc349;
        }
        local_160 = 0x579e299f35f5d697;
        local_13d = local_141;
      }
    }
    else if (uVar1 == 0xc5634ff34ea40c2) {
      *local_138 = local_14c;
      local_e0 = *(uint *)((longlong)param_1 + 0x14);
      local_158 = 0x9eebd0a36e45135d;
      local_160 = 0x9b69fd40b52b27c6;
    }
    else if (uVar1 == 0x139873cb893c65b6) {
      *local_b0 = local_13d;
      *local_f8 = *local_f8 + 1;
      local_158 = 0x8dcaf9b5720bc78a;
      local_160 = 0xc5e471b43850eccc;
    }
    else if (uVar1 == 0x15e9655c4615a458) {
      local_120 = *local_130;
      local_158 = 0xf97f09685e1fac4;
      if (local_120 == local_128) {
        local_158 = 0x6406f5303db6264b;
      }
      local_160 = 0x19169f0c40b4ec04;
    }
    goto LAB_1801c3df0;
  }
  if ((longlong)uVar1 < -0xdaded423388305f) {
    if (uVar1 != 0xe6f60c32cd7aba70) {
      if (uVar1 == 0xee3309c38691cee2) {
        local_158 = 0x6c04ed3209f6019f;
        if ((int)local_124 < 0xbb) {
          local_158 = 0x4e94b0ce30711089;
        }
        local_160 = 0x76887daab97266c1;
      }
      else if (uVar1 == 0xf190c796a6a4fe90) {
        local_70 = (byte *)*param_1;
        local_158 = 0xcfc8acbad6de300e;
        if (local_70 == (byte *)param_1[1]) {
          local_158 = 0x18d72d99346d6014;
        }
        local_160 = 0x9273149d9f205af4;
      }
      goto LAB_1801c3df0;
    }
    param_1[8] = param_1[8] + -1;
    local_158 = 0x77383b72b3305fb2;
    local_160 = 0xc14a99b2552ae4d0;
  }
  else {
    if (uVar1 == 0xf25212bdcc77cfa1) {
      *local_b8 = local_13e;
      *local_f8 = *local_f8 + 1;
      local_158 = 0x8a779fd46f1280b5;
      local_160 = 0x9f9efa88290724ed;
      goto LAB_1801c3df0;
    }
    if (uVar1 == 0xf2dd0a27002e3108) {
      local_e4 = (uint)*local_78;
      *param_1 = local_78 + 1;
      local_158 = 0x5f57c54e476fc966;
      local_160 = 0x903fd23acbe8681c;
      goto LAB_1801c3df0;
    }
    if (uVar1 != 0xf36f1d329caeb4cd) goto LAB_1801c3df0;
    local_158 = 0xfde31e5e3e3bc948;
    if (local_11c == local_148) {
      local_158 = 0xad67b0ac155bc85a;
    }
    local_160 = 0x1b15126cf3417338;
  }
  local_161 = 1;
  goto LAB_1801c3df0;
}



void FUN_1801c4ff0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  ulonglong local_e8;
  uint local_dc;
  undefined1 local_d5;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint *local_c8;
  uint local_bc;
  char *local_b8;
  longlong *local_b0;
  undefined1 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  byte *local_70;
  undefined1 local_61;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_118;
  local_e8 = 0x7a3cceedbc6d58e5;
  local_f0 = 0x79e67c95f08996e3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_e8 ^ 0x2cb984546b1d02a;
              uVar1 = local_e8 ^ local_f0;
              local_f0 = local_f0 ^ 0x2cb984546b1d02a;
              local_e8 = uVar2;
              if ((longlong)uVar1 < -0xb52330fe5a20435) break;
              if ((longlong)uVar1 < 0x1595bf895a3df792) {
                if ((longlong)uVar1 < 0x696a5dc8e36d0c7) {
                  if (uVar1 == 0xf4adccf01a5dfbcb) {
                    *local_a0 = *local_a0 + 1;
                    local_a0[1] = local_a0[1] + 1;
                    local_e8 = 0xa886cca9e4a50bfe;
                    if (*local_b8 != '\0') {
                      local_e8 = 0x481f0a6bdc38c744;
                    }
                    local_f0 = 0xae1069756a93db39;
                  }
                  else if (uVar1 == 0x3dab2784ce4ce06) {
                    local_d4 = 0xffffffff;
                    local_a0 = param_1 + 4;
                    local_98 = param_1 + 5;
                    local_b8 = (char *)(param_1 + 3);
                    local_c8 = (uint *)((longlong)param_1 + 0x14);
                    local_90 = param_1 + 1;
                    local_b0 = param_1 + 8;
                    local_88 = param_1 + 9;
                    local_80 = param_1 + 7;
                    local_78 = param_1 + 6;
                    local_e8 = 0xef1238342702dd56;
                    local_f0 = 0x1bbff4c43d5f269d;
                  }
                }
                else if (uVar1 == 0x696a5dc8e36d0c7) {
                  local_70 = (byte *)*param_1;
                  local_e8 = 0x515db7a211a4231c;
                  if (local_70 == (byte *)*local_90) {
                    local_e8 = 0x26c2724d6ae89aa8;
                  }
                  local_f0 = 0x339c1afafea521f9;
                  local_d0 = local_d4;
                }
                else if (uVar1 == 0xdc96cdd2bc09cb3) {
                  local_dc = *local_c8;
                  local_e8 = 0x572bb58c4fbfb512;
                  local_f0 = 0xfea6e6b4fc088037;
                }
                else if (uVar1 == 0x155e68b7944dbb51) {
                  *local_c8 = local_d0;
                  local_e8 = 0x718880db4e2d8930;
                  local_f0 = 0xf1b66a10c4630860;
                  local_cc = local_d0;
                }
              }
              else if ((longlong)uVar1 < 0x5ab4f4c382b25adb) {
                if (uVar1 == 0x1595bf895a3df792) {
                  local_e8 = 0xc53a79ad0a5a480c;
                  if ((int)local_dc < 10) {
                    local_e8 = 0x3876789071ae3e0f;
                  }
                  local_f0 = 0x62c28c53f31c64d4;
                }
                else if (uVar1 == 0x217339b74aedaef9) {
                  local_d5 = (undefined1)local_bc;
                  local_a8 = (undefined1 *)*local_b0;
                  local_e8 = 0xb74cbfb000c56a1b;
                  if (local_a8 == (undefined1 *)*local_88) {
                    local_e8 = 0x46cefed91c2d7880;
                  }
                  local_f0 = 0x3be768369b7003cc;
                  local_61 = local_d5;
                }
                else if (uVar1 == 0x3fc510c5d411f69e) {
                  local_e8 = 0x4b5f47576daa2ba5;
                  local_f0 = 0xbbb468a9620885d0;
                }
              }
              else if (uVar1 == 0x5ab4f4c382b25adb) {
                local_e8 = 0x59c83d80e1093464;
                if (local_dc == 9) {
                  local_e8 = 0xcf2d0fdb98e905f2;
                }
                local_f0 = 0x660d2d453518c2fa;
              }
              else if (uVar1 == 0x62c1ad58ef0102e5) {
                local_d0 = (uint)*local_70;
                *param_1 = local_70 + 1;
                local_e8 = 0x49692dc70c5b2c58;
                local_f0 = 0x5c37457098169709;
              }
              else if (uVar1 == 0x7d2996ef875d7b4c) {
                FUN_18009fb00(local_80,local_a8,&local_61);
                local_e8 = 0xff4b5d7c80c604cb;
                local_f0 = 0xf28231a1ab069878;
              }
            }
            if (-0x5672acc74c48cadc < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x6adc8ba71f48f73e) {
              if (uVar1 == 0x803eeacb8a4e8150) {
                local_bc = local_cc;
                local_e8 = 0xda9a5c8a762a233d;
                if (local_cc == local_d4) {
                  local_e8 = 0xb024ac3336523b1;
                }
                local_f0 = 0xfbe9653d3cc78dc4;
              }
              else if (uVar1 == 0x8cabd7869bb569d7) {
                *local_a8 = local_d5;
                *local_b0 = *local_b0 + 1;
                local_e8 = 0x1ec1acf3290d4eb1;
                local_f0 = 0x1308c02e02cdd202;
              }
            }
            else if (uVar1 == 0x95237458e0b708c2) {
              local_e8 = 0x4a0f51ed48400766;
              if (local_dc == 0x20) {
                local_e8 = 0xdcea63b631a036f0;
              }
              local_f0 = 0x75ca41289c51f1f8;
            }
            else if (uVar1 == 0xa7f8f5fef9462cd8) {
              local_e8 = 0xaae24d6fca831f76;
              if (local_dc == 10) {
                local_e8 = 0x5f5117aa66d2272a;
              }
              local_f0 = 0x95275daa1e92e9e8;
            }
            else if (uVar1 == 0xa920229eadf1c708) {
              local_e8 = 0x6b05dbd94de71ccf;
              local_f0 = 0x9fa8172957bae704;
            }
          }
          if (-0x19f09ce14954e384 < (longlong)uVar1) break;
          if (uVar1 == 0xa98d5338b3b73525) {
            local_e8 = 0xf02c88733996b320;
            if ((int)local_dc < 0xd) {
              local_e8 = 0x50003692f4a3f564;
            }
            local_f0 = 0x4595891bae9e02f6;
          }
          else if (uVar1 == 0xb5b901689708b1d6) {
            local_e8 = 0x988cf317c0b14882;
            if ((int)local_dc < 0x20) {
              local_e8 = 0xe78a91233a4ff898;
            }
            local_f0 = 0xdaf874f20064040;
          }
          else if (uVar1 == 0xca764a007840cec2) {
            *local_78 = *local_78 + 1;
            *local_98 = 0;
            local_e8 = 0xa9938e4dba1e35f9;
            local_f0 = 0xb3acd317eff2f1;
          }
        }
        if (uVar1 != 0xe60f631eb6ab1c7d) break;
        *local_b8 = '\0';
        local_cc = *local_c8;
        local_e8 = 0x495e9dc2032838b5;
        local_f0 = 0xc96077098966b9e5;
      }
      if (uVar1 != 0xea25166c1a49b8d8) break;
      local_e8 = 0xd387ab6e24d60ce5;
      if (local_dc == 0xd) {
        local_e8 = 0x456299355d363d73;
      }
      local_f0 = 0xec42bbabf0c7fa7b;
    }
  } while (uVar1 != 0xf0eb2ffe0fa2ae75);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_118)) {
  }
  return;
}



undefined1 FUN_1801c5870(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined1 local_1ad;
  char local_1ac;
  char local_1ab;
  byte local_1aa;
  byte local_1a9;
  uint local_1a8;
  undefined1 local_1a4;
  byte local_1a3;
  undefined1 local_1a2;
  byte local_1a1;
  undefined1 local_1a0;
  undefined1 local_19f;
  byte local_19e;
  byte local_19d;
  uint local_19c;
  uint local_198;
  uint local_194;
  char *local_190;
  uint *local_188;
  uint local_180;
  uint local_17c;
  longlong *local_178;
  longlong *local_170;
  uint local_164;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
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
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  byte *local_f0;
  byte *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  byte *local_a0;
  byte *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  byte *local_80;
  longlong local_78;
  longlong local_70;
  byte *local_68;
  longlong local_60;

  local_1b8 = 0x6538cf5654ccf765;
  local_1c0 = 0x6da1d9ad49d1aba5;
LAB_1801c5940:
  uVar2 = local_1b8 ^ 0x6ba33582426be5af;
  uVar1 = local_1b8 ^ local_1c0;
  local_1c0 = local_1c0 ^ 0x6ba33582426be5af;
  local_1b8 = uVar2;
  if ((longlong)uVar1 < 0x1bf81cb62bc982c) {
    if ((longlong)uVar1 < -0x3c15b9bb57c266c4) {
      if ((longlong)uVar1 < -0x580222e76b404dbf) {
        if ((longlong)uVar1 < -0x74746399d2a4c24f) {
          if ((longlong)uVar1 < -0x768a313d3c802d06) {
            if (uVar1 == 0x813322c14387d2b7) {
              local_1b8 = 0x19260ec79002e0f;
              local_1c0 = 0x8efd0ae5ef183169;
              local_140 = local_17c;
            }
            else if (uVar1 == 0x81ce12fd4c0a42ab) {
              local_a8 = local_b8;
              local_124 = local_138;
              *local_190 = local_1ab;
              *local_150 = local_c0;
              local_1b8 = 0x6f226466444d4028;
              if (local_b8 == local_158) {
                local_1b8 = 0xa546c0f762e9866c;
              }
              local_1c0 = 0xe22a676705f507c4;
            }
          }
          else if (uVar1 == 0x8975cec2c37fd2fa) {
            local_1b8 = 0x306e87830ba1a658;
            if ((int)local_194 < 0x2a) {
              local_1b8 = 0x7733a55466c3ad69;
            }
            local_1c0 = 0x5da9e941e95e02f3;
          }
          else if (uVar1 == 0x8b30a71293df4eb2) {
            local_1b8 = 0xd54054086f3fbe90;
            if (local_194 == 0x2f) {
              local_1b8 = 0xc76d3ca8ef73ae03;
            }
            local_1c0 = 0x794a9d9d60236ec;
          }
        }
        else if ((longlong)uVar1 < -0x709095f669e7e09a) {
          if (uVar1 == 0x8b8b9c662d5b3db1) {
            local_fc = local_130;
            *local_150 = *local_150 + 1;
            local_150[1] = local_150[1] + 1;
            local_1b8 = 0x664bc4b942f8a58b;
            if (*local_190 != '\0') {
              local_1b8 = 0x2b58c88ca5024c43;
            }
            local_1c0 = 0x473bbe39d4ab9e1a;
          }
          else if (uVar1 == 0x8d08030141b847ec) {
            *local_170 = local_a8 + local_120;
            local_1b8 = 0x34ec680039ec5193;
            local_1c0 = 0xee617600ce549069;
            local_164 = local_124;
          }
        }
        else if (uVar1 == 0x8f6f6a0996181f66) {
          local_104 = local_140;
          *local_150 = *local_150 + 1;
          local_150[1] = local_150[1] + 1;
          local_1b8 = 0x825e2d8cdad193a5;
          if (*local_190 != '\0') {
            local_1b8 = 0x3c7e10ff92ef2599;
          }
          local_1c0 = 0x800c5ae5b5bf5669;
        }
        else if (uVar1 == 0x95c691988aa596ab) {
          *local_d0 = local_1a0;
          *local_178 = *local_178 + 1;
          local_1b8 = 0xf04f2f6a56baccfd;
          local_1c0 = 0xea479c04045b3e34;
        }
        else if (uVar1 == 0xa0e14c26ac694bb8) {
          *local_c8 = local_19f;
          *local_178 = *local_178 + 1;
          local_1b8 = 0x26444c1457304e45;
          local_1c0 = 0x6ea9e29864c737da;
        }
      }
      else if ((longlong)uVar1 < -0x4646ebfc1cf54402) {
        if ((longlong)uVar1 < -0x54073849b21b4c5c) {
          if (uVar1 == 0xa7fddd1894bfb241) {
            param_1[6] = param_1[6] + local_160;
            *local_170 = local_158;
            local_1b8 = 0x464ab56538926f2;
            local_1c0 = 0x11cc547fdf1d95a5;
          }
          else if (uVar1 == 0xa93536bd6f6624bb) {
            local_78 = *local_150;
            *local_150 = local_78 + local_160;
            local_70 = *local_170 + local_160;
            *local_170 = local_70;
            local_1b8 = 0x3827dea901a7b2f9;
            if (*local_190 != '\0') {
              local_1b8 = 0xb9e6302b6d9187e5;
            }
            local_1c0 = 0x40a9be2cb4ce888b;
          }
        }
        else if (uVar1 == 0xabf8c7b64de4b3a4) {
          local_1b8 = 0x1e102351eca6115;
          if (local_19c == 0x2a) {
            local_1b8 = 0xfa1b48618cde175e;
          }
          local_1c0 = 0x532e7edce3b833e5;
        }
        else if (uVar1 == 0xb168791a808ecc63) {
          local_1b8 = 0xf1c6033d9390ac40;
          if (local_198 == 10) {
            local_1b8 = 0x6c2658b7d3e3304d;
          }
          local_1c0 = 0x948ecf3ee2f176c1;
        }
        else if (uVar1 == 0xb3ac1a37aca1c2bc) {
          local_b8 = *local_170;
          local_c0 = *local_150 + local_120;
          local_1b8 = 0x7115402d1f106f85;
          local_1c0 = 0xf0db52d0531a2d2e;
          local_138 = local_180;
        }
      }
      else if ((longlong)uVar1 < -0x438db5e5d8af8c10) {
        if (uVar1 == 0xb9b91403e30abbfe) {
          local_1b8 = 0x83db41b9ca92711c;
          local_1c0 = 0x30775b8e6633b3a0;
        }
        else if (uVar1 == 0xba57045ca0a361b2) {
          local_1a9 = *local_a0;
          *param_1 = local_a0 + 1;
          *local_188 = (uint)local_1a9;
          local_1b8 = 0xf4a0eb9d160859d9;
          local_1c0 = 0xf51f6a5674b4c1f5;
        }
      }
      else if (uVar1 == 0xbc724a1a275073f0) {
        *local_190 = local_1ac;
        local_1b8 = 0xed778d2b2c2620c1;
        local_1c0 = 0xe8cfb85483a5b403;
        local_144 = local_104;
      }
      else if (uVar1 == 0xc0f99571397198ef) {
        local_90 = param_1 + 1;
        local_88 = param_1 + 7;
        local_1b8 = 0xc120a29fa638b11c;
        local_1c0 = 0x4aab3ef98b638cad;
        local_130 = 0x2f;
      }
      else if (uVar1 == 0xc10ca571eedfb4c6) {
        local_180 = *local_188;
        local_1b8 = 0x81ab77a74bcb16ae;
        local_1c0 = 0xe22de7c1a18fdf47;
      }
      goto LAB_1801c5940;
    }
    if ((longlong)uVar1 < -0x2192c578bd75a1ee) {
      if ((longlong)uVar1 < -0x2d83b4e52afbd209) {
        if ((longlong)uVar1 < -0x338107a46626c944) {
          if (uVar1 == 0xc3ea4644a83d993c) {
            local_e0 = param_1 + 1;
            local_d8 = param_1 + 7;
            local_118 = param_1 + 6;
            local_140 = 0x2a;
            local_1b8 = 0x24f82917ac84fe7;
            local_1c0 = 0x8d20e898ecd05081;
          }
          else if (uVar1 == 0xcc398f6174c4f8d6) {
            *(uint *)((longlong)param_1 + 0x14) = local_134;
            local_1b8 = 0xc6f3e12d0e560518;
            local_1c0 = 0x922cda9f1c6e6e8f;
            local_128 = local_134;
          }
          else if (uVar1 == 0xc8f13584cfbfec37) {
            return local_1ad;
          }
        }
        else if (uVar1 == 0xcc7ef85b99d936bc) {
          *local_118 = *local_118 + local_160;
          *local_170 = local_158;
          local_1b8 = 0x8ecf3bbcd6b6e125;
          local_1c0 = 0xffc197d95313392;
          local_17c = local_148;
        }
        else if (uVar1 == 0xd090dad92db7bf8e) {
          local_1b8 = 0xd79c694d981173ad;
          if ((int)local_198 < 0xd) {
            local_1b8 = 0x98e2f63db1377b2f;
          }
          local_1c0 = 0x298a8f2731b9b74c;
        }
      }
      else if ((longlong)uVar1 < -0x2572e1ff08473e06) {
        if (uVar1 == 0xd27c4b1ad5042df7) {
          FUN_18009fb00(param_1 + 7,local_c8,&local_1a4);
          local_1b8 = 0x882bc42025d85392;
          local_1c0 = 0xc0c66aac162f2a0d;
        }
        else if (uVar1 == 0xd2d4fdd1b93d887c) {
          local_1b8 = 0x4d0424e09e4d9b36;
          local_1c0 = 0x58acdbc912d92861;
        }
      }
      else if (uVar1 == 0xda8d1e00f7b8c1fa) {
        local_100 = local_164;
        local_1b8 = 0x76a7abb724998292;
        if (local_164 == local_1a8) {
          local_1b8 = 0xba4e79dbe75639a6;
        }
        local_1c0 = 0x3b7d5b1aa4d1eb11;
        local_17c = local_1a8;
      }
      else if (uVar1 == 0xdaa4469b429f4f12) {
        local_134 = (uint)*local_98;
        *param_1 = local_98 + 1;
        local_1b8 = 0x155859945c34965c;
        local_1c0 = 0xd961d6f528f06e8a;
      }
      else if (uVar1 == 0xde6444e646cd23e8) {
        *local_e8 = local_19d;
        *local_178 = *local_178 + 1;
        local_1b8 = 0x9793316468b3a012;
        local_1c0 = 0xc06722d7d4fbaf33;
      }
      goto LAB_1801c5940;
    }
    if ((longlong)uVar1 < -0x7576876ceedb974) {
      if ((longlong)uVar1 < -0x2053814bebb5ac1b) {
        if (uVar1 == 0xde6d3a87428a5e12) {
          local_1a4 = (undefined1)local_f4;
          local_178 = param_1 + 8;
          local_c8 = (undefined1 *)param_1[8];
          local_110 = param_1 + 9;
          local_1b8 = 0xc4bfb5a64aa29858;
          if (local_c8 == (undefined1 *)param_1[9]) {
            local_1b8 = 0xb622b29a33cffe17;
          }
          local_1c0 = 0x645ef980e6cbd3e0;
          local_19f = local_1a4;
        }
        else if (uVar1 == 0xde6e84c37a9f4979) {
          *local_188 = local_1a8;
          local_138 = local_1a8;
          local_1b8 = 0x81c122220dd85d03;
          local_1c0 = 0xf30df41d21fa8;
          local_c0 = local_78;
          local_b8 = local_70;
        }
        goto LAB_1801c5940;
      }
      if (uVar1 == 0xdfac7eb4144a53e5) {
        local_1b8 = 0x8a213989d7f65970;
        if (local_180 == 0x2f) {
          local_1b8 = 0xfb69180efb430eb9;
        }
        local_1c0 = 0x33982d8a34fce28e;
      }
      else {
        if (uVar1 == 0xe2b5a505dd405db5) {
          local_1a1 = local_1aa;
          local_f0 = (byte *)*local_178;
          local_1b8 = 0xf1d1e92b8b26599a;
          if (local_f0 == (byte *)*local_110) {
            local_1b8 = 0xf79c9d34a8572b83;
          }
          local_1c0 = 0x96808710318bf665;
          local_19e = local_1a1;
          goto LAB_1801c5940;
        }
        if (uVar1 != 0xf870ce88158d2e41) goto LAB_1801c5940;
        *local_188 = local_1a8;
        local_1b8 = 0x189c4228a1b7cd07;
        local_1c0 = 0xd06d77ac6e082130;
      }
    }
    else if ((longlong)uVar1 < -0x6b071f826a0f092) {
      if (uVar1 != 0xf8a897893112468c) {
        if (uVar1 == 0xf91ea1514f872f02) {
          *local_190 = local_1ac;
          local_128 = *(uint *)((longlong)param_1 + 0x14);
          local_1b8 = 0xef68fbcee5bb4f5a;
          local_1c0 = 0xbbb7c07cf78324cd;
        }
        goto LAB_1801c5940;
      }
      param_1[6] = param_1[6] + local_160;
      *local_170 = local_158;
      local_1b8 = 0xbc34925339449c7d;
      local_1c0 = 0x74c5a7d7f6fb704a;
    }
    else {
      if (uVar1 == 0xf94f8e07d95f0f6e) {
        *local_190 = local_1ac;
        local_1b8 = 0xe7649d3475839d6;
        local_1c0 = 0xecc3ecd69a186463;
        local_1aa = 0x2a;
        goto LAB_1801c5940;
      }
      if (uVar1 != 0xfe16e66aa9a8c4e1) {
        if (uVar1 == 0xffe50bae45b281d2) {
          local_1b8 = 0xcc651ec97579fefd;
          if (local_19c == 10) {
            local_1b8 = 0x52d49a7b11d29ab1;
          }
          local_1c0 = 0x9eaa6220880bac0d;
        }
        goto LAB_1801c5940;
      }
      local_1b8 = 0x2b02c968e77f6525;
      if (local_198 == 0xd) {
        local_1b8 = 0x86bb30ef59a15393;
      }
      local_1c0 = 0x4e4a056b961ebfa4;
    }
LAB_1801c5933:
    local_1ad = 1;
    goto LAB_1801c5940;
  }
  if (0x48edae8c33f7799e < (longlong)uVar1) {
    if ((longlong)uVar1 < 0x63869066ea44c9e9) {
      if ((longlong)uVar1 < 0x55fbca6b61a10853) {
        if ((longlong)uVar1 < 0x4ddaf0ad80486983) {
          if (uVar1 == 0x48edae8c33f7799f) {
            local_194 = *local_188;
            local_1b8 = 0x638d02a5dd1271b0;
            local_1c0 = 0xeaf8cc671e6da34a;
          }
          else if (uVar1 == 0x4dc2594e966640e9) {
            local_b0 = *local_118 + local_160;
            *local_118 = local_b0;
            *local_170 = local_158;
            *local_190 = local_1ab;
            *local_150 = *local_150 + local_120;
            local_12c = local_148;
            local_1b8 = 0xa7bf1fe32f37de10;
            local_1c0 = 0xd555bff4b0907fb3;
          }
        }
        else if (uVar1 == 0x4ddaf0ad80486983) {
          *local_178 = *local_178 + -1;
          local_1b8 = 0x10039e0f1f21151e;
          local_1c0 = 0x9130bcce5ca6c7a9;
          local_17c = local_100;
        }
        else if (uVar1 == 0x52cf7ce9fd7252f0) {
          local_1b8 = 0xcd71eae800008fdd;
          local_1c0 = 0x4c42c82943875d6a;
          local_17c = local_19c;
        }
        else if (uVar1 == 0x54df3bb212386b97) {
          local_f4 = local_128;
          local_188 = (uint *)((longlong)param_1 + 0x14);
          local_1b8 = 0x247d201327173d06;
          if (local_128 == local_1a8) {
            local_1b8 = 0xefb8e5bde909d043;
          }
          local_1c0 = 0xfa101a94659d6314;
        }
      }
      else if ((longlong)uVar1 < 0x57f413b3bc480f21) {
        if (uVar1 == 0x55fbca6b61a10853) {
          local_98 = (byte *)*param_1;
          local_1b8 = 0xefad69efd6338e29;
          if (local_98 == (byte *)param_1[1]) {
            local_1b8 = 0xf930a015e06839ed;
          }
          local_1c0 = 0x35092f7494acc13b;
          local_134 = local_1a8;
        }
        else if (uVar1 == 0x57e749671b32e422) {
          local_1b8 = 0x7c430d1830b51762;
          if ((int)local_19c < 10) {
            local_1b8 = 0x545a228a139de6af;
          }
          local_1c0 = 0x16f9a955e1cd7caa;
        }
      }
      else if (uVar1 == 0x57f413b3bc480f21) {
        local_198 = *local_188;
        local_1b8 = 0x51a26adf8e1d370c;
        local_1c0 = 0x5787fb1bcad3d7f0;
      }
      else if (uVar1 == 0x5901002808d716ed) {
        local_1aa = *local_68;
        *param_1 = local_68 + 1;
        *local_188 = (uint)local_1aa;
        local_1b8 = 0xde50b5283cc47270;
        local_1c0 = 0x3ce5102de1842fc5;
      }
      else if (uVar1 == 0x611c1a2499dcdde6) {
        FUN_18009fb00(local_d8,local_f0,&local_1a1);
        local_1b8 = 0x5951959750c91c34;
        local_1c0 = 0x985d30e6be16a8f2;
      }
    }
    else if ((longlong)uVar1 < 0x6dc76ec2e2ffa4ab) {
      if ((longlong)uVar1 < 0x67516e3bbaadafff) {
        if (uVar1 == 0x63869066ea44c9e9) {
          local_1b8 = 0x1c6d317a4d9e944e;
          if ((int)local_180 < 0x2f) {
            local_1b8 = 0xd1bbaf5db35a4f30;
          }
          local_1c0 = 0xc3c14fce59d4c7ab;
        }
        else if (uVar1 == 0x6548cc037161da81) {
          local_1b8 = 0x745ea9561d53888f;
          local_1c0 = 0xffd535303008b53e;
          local_130 = local_198;
        }
      }
      else if (uVar1 == 0x67516e3bbaadafff) {
        *local_f0 = local_19e;
        *local_178 = *local_178 + 1;
        local_1b8 = 0x3c550dec0f862de0;
        local_1c0 = 0xfd59a89de1599926;
      }
      else if (uVar1 == 0x6abaa44dd1786bc8) {
        local_1b8 = 0x11d3b9c2c644ce68;
        if ((int)local_19c < 0x2a) {
          local_1b8 = 0x45ce75dace12fc1e;
        }
        local_1c0 = 0xba2b7e748ba07dcc;
      }
      else if (uVar1 == 0x6c6376b571a9d259) {
        *local_190 = local_1ac;
        local_1a9 = (byte)local_fc;
        local_1b8 = 0x521032412afafc3d;
        local_1c0 = 0x53afb38a48466411;
      }
    }
    else if ((longlong)uVar1 < 0x70eed82f3ee7abc1) {
      if (uVar1 == 0x6dc76ec2e2ffa4ab) {
        local_1b8 = 0x5531e324eb990d00;
        if ((int)local_194 < 0x2f) {
          local_1b8 = 0xd3ebfa95a319b671;
        }
        local_1c0 = 0xde014436784643b2;
      }
      else if (uVar1 == 0x6ef3023cb0d25067) {
        FUN_18009fb00(local_88,local_e8,&local_1a3);
        local_1b8 = 0x3ae8d8a1a109a842;
        local_1c0 = 0x6d1ccb121d41a763;
      }
    }
    else if (uVar1 == 0x70eed82f3ee7abc1) {
      *local_118 = local_60 + local_120;
      local_1b8 = 0xba0853a0ed4c9c59;
      local_1c0 = 0x60854da01af45da3;
      local_164 = local_f8;
    }
    else if (uVar1 == 0x72eaa0179fa7a1a3) {
      local_60 = local_b0;
      local_164 = local_12c;
      local_1b8 = 0x40a4e385c6dd0a3c;
      if (local_b0 == local_158) {
        local_1b8 = 0xeac725aa0f826007;
      }
      local_1c0 = 0x304a3baaf83aa1fd;
      local_f8 = local_164;
    }
    else if (uVar1 == 0x788e6085b5693a72) {
      local_68 = (byte *)*param_1;
      local_1b8 = 0x6b54e4194a373524;
      if (local_68 == (byte *)*local_e0) {
        local_1b8 = 0xec3b60f2387f6ab0;
      }
      local_1c0 = 0x3255e43142e023c9;
    }
    goto LAB_1801c5940;
  }
  if ((longlong)uVar1 < 0x1a08b36e52e1f2c9) {
    if ((longlong)uVar1 < 0x89916fb1d1d5cc0) {
      if ((longlong)uVar1 < 0x5b8357faf8394c2) {
        if (uVar1 == 0x1bf81cb62bc982c) {
          local_1a3 = local_1a9;
          local_e8 = (byte *)*local_178;
          local_1b8 = 0x602999b78127f17;
          if (local_e8 == (byte *)*local_110) {
            local_1b8 = 0xb695df418e0d0c98;
          }
          local_1c0 = 0xd866dd7d3edf5cff;
          local_19d = local_1a3;
        }
        else if (uVar1 == 0x25277696f6ec5cc) {
          local_80 = (byte *)*param_1;
          local_1b8 = 0x5fdeb5f08e99a3cf;
          if (local_80 == (byte *)*local_e0) {
            local_1b8 = 0x42b181f94bc5c34f;
          }
          local_1c0 = 0x646ab772a8d4b00b;
          local_13c = local_1a8;
        }
      }
      else if (uVar1 == 0x5b8357faf8394c2) {
        local_108 = local_144;
        local_1b8 = 0x42d51642bb2cd2ae;
        if (local_144 == local_1a8) {
          local_1b8 = 0x289ebf3daf26f407;
        }
        local_1c0 = 0x601a33248f3e6248;
      }
      else if (uVar1 == 0x62591c444cee0fc) {
        local_1b8 = 0x862a8280c0a35df1;
        if ((int)local_198 < 10) {
          local_1b8 = 0x46551f2d2866e723;
        }
        local_1c0 = 0x56ba5859ed14e27f;
      }
      goto LAB_1801c5940;
    }
    if ((longlong)uVar1 < 0x10ef4774c572055c) {
      if (uVar1 == 0x89916fb1d1d5cc0) {
        local_1ab = '\x01';
        local_1ac = '\0';
        local_158 = 0;
        local_120 = -1;
        local_148 = 10;
        local_160 = 1;
        local_1a8 = 0xffffffff;
        local_150 = param_1 + 4;
        local_170 = param_1 + 5;
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        local_190 = (char *)(param_1 + 3);
        local_1b8 = 0x44450d8edd308cc2;
        if (*(char *)(param_1 + 3) != '\0') {
          local_1b8 = 0xe8a066b4f316ab93;
        }
        local_1c0 = 0x11bec7e5bc918491;
      }
      else if (uVar1 == 0xdeabea3db5ff5c3) {
        local_1b8 = 0x744645d2bef79dfe;
        if (local_194 == 0x2a) {
          local_1b8 = 0x6578fe47aff78cbe;
        }
        local_1c0 = 0xa692b80307ca1582;
      }
      goto LAB_1801c5940;
    }
    if (uVar1 == 0x10ef4774c572055c) {
      local_1b8 = 0xe1d9c9844d1be56d;
      if (local_198 + 1 < 2) {
        local_1b8 = 0x4c603003f3c5d3db;
      }
      local_1c0 = 0x849105873c7a3fec;
      goto LAB_1801c5933;
    }
    if (uVar1 == 0x127ae093ea8e889b) {
      local_1b8 = 0x43f029e3b05ca4f4;
      if (local_180 == 10) {
        local_1b8 = 0xb78b64aec5305fe3;
      }
      local_1c0 = 0xfa493de053561f0a;
      goto LAB_1801c5940;
    }
    if (uVar1 != 0x15a8ff298c94b357) goto LAB_1801c5940;
    FUN_1801d1f63(&DAT_1802a7cc8,&DAT_18029e0a1,0x17,0x30,&DAT_1802a7cf8);
    param_1[0xe] = &DAT_1802a7cc8;
    local_1b8 = 0x833a8749a4864f14;
    local_1c0 = 0x4bcbb2cd6b39a323;
  }
  else {
    if ((longlong)uVar1 < 0x3582a6ac5791b295) {
      if ((longlong)uVar1 < 0x22cf25663412b0e6) {
        if (uVar1 == 0x1a08b36e52e1f2c9) {
          local_19c = *local_188;
          local_1b8 = 0x97f1a252df04cebb;
          local_1c0 = 0xc016eb35c4362a99;
        }
        else if (uVar1 == 0x21707a8096533b91) {
          local_a0 = (byte *)*param_1;
          local_1b8 = 0x78d00085c0e99d58;
          if (local_a0 == (byte *)*local_90) {
            local_1b8 = 0x3af7ca5175c7d2ab;
          }
          local_1c0 = 0xc28704d9604afcea;
        }
      }
      else if (uVar1 == 0x22cf25663412b0e6) {
        local_1a2 = (undefined1)local_108;
        local_d0 = (undefined1 *)*local_178;
        local_1b8 = 0x25698a1b307ebf5a;
        if (local_d0 == (undefined1 *)*local_110) {
          local_1b8 = 0x852dbd2fed4a9b64;
        }
        local_1c0 = 0xb0af1b83badb29f1;
        local_1a0 = local_1a2;
      }
      else if (uVar1 == 0x26db368be3117344) {
        local_144 = local_13c;
        *local_188 = local_13c;
        local_1b8 = 0xc3d779241fd0c30c;
        local_1c0 = 0xc66f4c5bb05357ce;
      }
      else if (uVar1 == 0x2a9a4c158f9daf9a) {
        local_1b8 = 0x621e0c1deea68cab;
        if (local_194 == 10) {
          local_1b8 = 0x17372cd4c324b696;
        }
        local_1c0 = 0xb0caf1cc579b04d7;
      }
      goto LAB_1801c5940;
    }
    if ((longlong)uVar1 < 0x42a38bdff2509a05) {
      if (uVar1 == 0x3582a6ac5791b295) {
        FUN_18009fb00(local_d8,local_d0,&local_1a2);
        local_1b8 = 0x4d37df9a1a03f8c1;
        local_1c0 = 0x573f6cf448e20a08;
      }
      else if (uVar1 == 0x3bb40282264d13c4) {
        local_13c = (uint)*local_80;
        *param_1 = local_80 + 1;
        local_1b8 = 0xf74001a1e957c9a;
        local_1c0 = 0x29af3691fd840fde;
      }
      goto LAB_1801c5940;
    }
    if (uVar1 == 0x42a38bdff2509a05) {
      local_1b8 = 0xdd244e69e8d91127;
      if (local_19c + 1 < 2) {
        local_1b8 = 0xc76fbe9935b3d598;
      }
      local_1c0 = 0x8feb328015ab43d7;
      goto LAB_1801c5940;
    }
    if (uVar1 == 0x476ca790671c81a8) {
      local_b0 = *local_118;
      local_1b8 = 0x29669639e65836f;
      local_1c0 = 0x707cc97401c222cc;
      local_12c = local_124;
      goto LAB_1801c5940;
    }
    if (uVar1 != 0x48848c192018964f) goto LAB_1801c5940;
    FUN_1801d1f63(&DAT_1802a7c9c,&DAT_18029e048,0x1c,0x26,&DAT_1802a7cc4);
    param_1[0xe] = &DAT_1802a7c9c;
    local_1b8 = 0x7ff2640f30600f53;
    local_1c0 = 0xb703518bffdfe364;
  }
  local_1ad = 0;
  goto LAB_1801c5940;
}



undefined4 FUN_1801c75e0(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_148 [32];
  undefined *local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined1 local_10d;
  uint local_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  uint *local_e8;
  uint local_dc;
  ulonglong local_d8;
  undefined1 *local_d0;
  char *local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  byte *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 local_61;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_148;
  local_118 = 0x38240d5feb18b73f;
  local_120 = 0x339ae13c1d22cc0e;
  local_100 = param_4;
  local_d8 = param_3;
  local_a8 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar2 = local_118 ^ 0x14c9834dce546e2a;
              uVar1 = local_118 ^ local_120;
              local_120 = local_120 ^ 0x14c9834dce546e2a;
              local_118 = uVar2;
              if (0x2a22d28afe86d04c < (longlong)uVar1) break;
              if ((longlong)uVar1 < 0x5c26d47587530d6) {
                if ((longlong)uVar1 < -0x3e04947cad7391a7) {
                  if (uVar1 == 0xa1fdb24b51de7ebe) {
                    *local_e8 = local_f8;
                    local_118 = 0xd7327556030e32c0;
                    local_120 = 0x16c91ed551825c99;
                    local_f4 = local_f8;
                  }
                  else if (uVar1 == 0xac59fab325464c36) {
                    *local_c8 = '\0';
                    local_f4 = *local_e8;
                    local_118 = 0x930feea4b13c54e8;
                    local_120 = 0x52f48527e3b03ab1;
                  }
                }
                else if (uVar1 == 0xc1fb6b83528c6e59) {
                  local_dc = local_f4;
                  local_118 = 0xc37fac4814c7a988;
                  if (local_f4 == local_10c) {
                    local_118 = 0xe722a64426b1b306;
                  }
                  local_120 = 0xa4a4eb1f7bb97611;
                  local_108 = local_10c;
                }
                else if (uVar1 == 0xdcfe95b47127946a) {
                  local_b8 = local_b0 + local_f0;
                  local_118 = 0xbc919a478d2ca51;
                  if (local_b8 == local_d8) {
                    local_118 = 0x5008f5b57151ceb1;
                  }
                  local_120 = 0x7a2a273f8fd71efc;
                  local_104 = local_100;
                }
              }
              else if ((longlong)uVar1 < 0xe0fe800400ed196) {
                if (uVar1 == 0x5c26d47587530d6) {
                  *local_70 = *local_70 + local_f0;
                  *local_90 = 0;
                  local_118 = 0x234499839deeac5;
                  local_120 = 0x41b204c364d62fd2;
                  local_108 = local_fc;
                }
                else if (uVar1 == 0xbbeec63f63a7b31) {
                  local_fc = 10;
                  local_f0 = 1;
                  local_10c = 0xffffffff;
                  local_118 = 0xde99b49821ceaaf2;
                  if (1 < local_d8) {
                    local_118 = 0xab15c2f3f93ec057;
                  }
                  local_120 = 0xf4bb6612df487abf;
                  local_104 = local_100;
                }
              }
              else if (uVar1 == 0xe0fe800400ed196) {
                local_128 = &DAT_1802a7c98;
                FUN_1801d1f63(&DAT_1802a7c88,&DAT_18029dfcc,0x16,0x10);
                param_1[0xe] = &DAT_1802a7c88;
                local_118 = 0xd9594e8d3fed2995;
                local_120 = 0xf37b9c07c16bf9d8;
                local_104 = 0xe;
              }
              else if (uVar1 == 0x10cf92949eaa8fef) {
                local_a0 = (byte *)*param_1;
                local_118 = 0xb63369a376dbb6a5;
                if (local_a0 == (byte *)*local_88) {
                  local_118 = 0x62004433209984f6;
                }
                local_120 = 0xc3fdf6787147fa48;
                local_f8 = local_10c;
              }
            }
            if ((longlong)uVar1 < 0x67db47576f7edf99) break;
            if ((longlong)uVar1 < 0x71e33e9bf705d4ad) {
              if (uVar1 == 0x67db47576f7edf99) {
                local_10d = (undefined1)local_dc;
                local_d0 = (undefined1 *)*local_c0;
                local_118 = 0x55fcbc2cd7b993bd;
                if (local_d0 == (undefined1 *)*local_80) {
                  local_118 = 0x54da4733812cc28d;
                }
                local_120 = 0x34f074c6636a37a1;
                local_61 = local_10d;
              }
              else if (uVar1 == 0x6fefc742cf1f7f32) {
                local_108 = *local_e8;
                local_118 = 0x1912bde53d2f4ee0;
                if (local_108 == local_fc) {
                  local_118 = 0x5f569df93852bb21;
                }
                local_120 = 0x5a94f0be60278bf7;
              }
            }
            else if (uVar1 == 0x71e33e9bf705d4ad) {
              local_b0 = local_b8;
              *local_98 = *local_98 + 1;
              local_98[1] = local_98[1] + 1;
              local_118 = 0xed181c785c407863;
              if (*local_c8 != '\0') {
                local_118 = 0x518e745fe7acbbba;
              }
              local_120 = 0xfdd78eecc2eaf78c;
            }
            else if (uVar1 == 0x75ce9fdb079c4ced) {
              local_f8 = (uint)*local_a0;
              *param_1 = local_a0 + 1;
              local_118 = 0xabfb13d66e5b64cf;
              local_120 = 0xa06a19d3f851a71;
            }
          }
          if ((longlong)uVar1 < 0x602a33f5e246f52c) break;
          if (uVar1 == 0x602a33f5e246f52c) {
            FUN_18009fb00(local_78,local_d0,&local_61);
            local_118 = 0x578520afed89df12;
            local_120 = 0x386ae7ed2296a020;
          }
          else if (uVar1 == 0x610cc8eab4d3a41c) {
            *local_d0 = local_10d;
            *local_c0 = *local_c0 + 1;
            local_118 = 0xa26e80726c6032e2;
            local_120 = 0xcd814730a37f4dd0;
          }
        }
        if (uVar1 != 0x43864d5b5d08c517) break;
        local_118 = 0xfa45b33b82c0f66a;
        if (*(char *)(local_a8 + local_b0) == (char)local_108) {
          local_118 = 0x28b4ce8fb3e9b396;
        }
        local_120 = 0xf44a5b3bc2ce27fc;
      }
      if (uVar1 != 0x5faea4e12676bae8) break;
      local_98 = param_1 + 4;
      local_90 = param_1 + 5;
      local_c8 = (char *)(param_1 + 3);
      local_88 = param_1 + 1;
      local_e8 = (uint *)((longlong)param_1 + 0x14);
      local_c0 = param_1 + 8;
      local_80 = param_1 + 9;
      local_78 = param_1 + 7;
      local_70 = param_1 + 6;
      local_b8 = local_f0;
      local_118 = 0xf10d0ce5caa8c352;
      local_120 = 0x80ee327e3dad17ff;
    }
  } while (uVar1 != 0x2a22d28afe86d04d);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_148)) {
  }
  return local_104;
}



undefined4 FUN_1801c7df0(undefined8 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 **ppuVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined *puVar18;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  ulonglong *local_128;
  undefined8 *local_120;
  ulonglong *local_118;
  undefined8 *local_110;
  ulonglong *local_108;
  ulonglong local_100;
  uint local_f8;
  uint local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  byte local_a7;
  byte local_a6;
  byte local_a5;
  byte local_a4;
  byte local_a3;
  byte local_a2;
  byte local_a1;
  longlong local_a0;
  byte local_92;
  undefined1 local_91;
  undefined8 local_90;

  local_90 = 0xfffffffffffffffe;
  local_a7 = 0xc;
  local_f4 = 0xfffffc00;
  local_91 = 0;
  local_a5 = 10;
  local_b4 = 0x80;
  local_e8 = 0;
  local_a4 = 0xd;
  local_a3 = 0x2f;
  local_a2 = 9;
  local_f0 = 10;
  local_c0 = 0xf;
  local_a1 = 8;
  local_ec = 0xc;
  local_a0 = 1;
  local_dc = 6;
  local_b0 = 0xffffffff;
  local_b8 = 0x3f;
  local_ac = 0xe;
  local_a6 = 0x22;
  local_92 = 0x5c;
  puVar4 = param_1 + 10;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar4 = (undefined8 *)param_1[10];
  }
  *(undefined1 *)puVar4 = 0;
  puVar1 = (undefined1 *)param_1[7];
  puVar9 = (undefined1 *)param_1[8];
  if (puVar1 != (undefined1 *)param_1[8]) {
    param_1[8] = puVar1;
    puVar9 = puVar1;
  }
  puVar4 = param_1 + 7;
  local_d8 = CONCAT71(local_d8._1_7_,*(undefined1 *)((longlong)param_1 + 0x14));
  if (puVar9 == (undefined1 *)param_1[9]) {
    FUN_18009fb00(puVar4,puVar9,&local_d8);
  }
  else {
    *puVar9 = *(undefined1 *)((longlong)param_1 + 0x14);
    param_1[8] = param_1[8] + 1;
  }
  puVar13 = &DAT_1802a7e84;
LAB_1801c8010:
  do {
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined1 *)(param_1 + 3) = local_91;
      uVar17 = *(uint *)((longlong)param_1 + 0x14);
    }
    else {
      pbVar11 = (byte *)*param_1;
      uVar17 = local_b0;
      if (pbVar11 != (byte *)param_1[1]) {
        uVar17 = (uint)*pbVar11;
        *param_1 = pbVar11 + 1;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar17;
    }
    if (uVar17 == local_b0) {
      puVar13 = &DAT_1802a7cfc;
      goto LAB_1801c8f45;
    }
    local_d8 = CONCAT71(local_d8._1_7_,(char)uVar17);
    puVar1 = (undefined1 *)param_1[8];
    if (puVar1 == (undefined1 *)param_1[9]) {
      FUN_18009fb00(puVar4,puVar1,&local_d8);
      iVar3 = *(int *)((longlong)param_1 + 0x14);
      if (iVar3 != local_f0) goto LAB_1801c80a9;
LAB_1801c890a:
      param_1[6] = param_1[6] + local_a0;
      param_1[5] = local_e8;
      puVar18 = &DAT_1802a81ac;
      puVar13 = &DAT_1802a815c;
      puVar12 = &DAT_18029e7c1;
      uVar15 = 0x1f;
      uVar16 = 0x4e;
LAB_1801c8f40:
      FUN_1801d1f63(puVar13,puVar12,uVar15,uVar16,puVar18);
LAB_1801c8f45:
      param_1[0xe] = puVar13;
      return local_ac;
    }
    *puVar1 = (char)uVar17;
    param_1[8] = param_1[8] + 1;
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    if (iVar3 == local_f0) goto LAB_1801c890a;
LAB_1801c80a9:
    FUN_1801d1f63(&DAT_1802a7e84,&DAT_18029e38c,0x10,0x49,&DAT_1802a7ed0);
    if (iVar3 < 0x16) {
      if (iVar3 < 0xb) {
        if (iVar3 < 4) {
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              if (iVar3 != -1) goto LAB_1801c8eec;
              puVar18 = &DAT_1802a7d24;
              puVar13 = &DAT_1802a7cfc;
              puVar12 = &DAT_18029e0fb;
              uVar15 = 0x18;
              uVar16 = 0x26;
              goto LAB_1801c8f40;
            }
            puVar18 = &DAT_1802a7e80;
            puVar13 = &DAT_1802a7e34;
            puVar12 = &DAT_18029e30e;
            uVar15 = 0x17;
          }
          else {
            if (iVar3 == 1) goto LAB_1801c8f45;
            if (iVar3 == 3) {
              puVar18 = &DAT_1802a7f70;
              puVar13 = &DAT_1802a7f24;
              puVar12 = &DAT_18029e471;
              goto LAB_1801c8bd2;
            }
            puVar18 = &DAT_1802a7f20;
            puVar13 = &DAT_1802a7ed4;
            puVar12 = &DAT_18029e3ff;
LAB_1801c8f31:
            uVar15 = 0x14;
          }
        }
        else if (iVar3 < 7) {
          if (iVar3 == 4) {
            puVar18 = &DAT_1802a7fc0;
            puVar13 = &DAT_1802a7f74;
            puVar12 = &DAT_18029e4dc;
            goto LAB_1801c8afd;
          }
          if (iVar3 == 6) {
            puVar18 = &DAT_1802a8060;
            puVar13 = &DAT_1802a8014;
            puVar12 = &DAT_18029e5d2;
            uVar15 = 0x11;
          }
          else {
            puVar18 = &DAT_1802a8010;
            puVar13 = &DAT_1802a7fc4;
            puVar12 = &DAT_18029e55b;
            uVar15 = 0x15;
          }
        }
        else {
          if (iVar3 != 7) {
            if (iVar3 < 9) {
              puVar18 = &DAT_1802a8104;
              puVar13 = &DAT_1802a80b4;
              puVar12 = &DAT_18029e6ca;
              goto LAB_1801c8d85;
            }
            if (iVar3 != 9) goto LAB_1801c8eec;
            puVar18 = &DAT_1802a8158;
            puVar13 = &DAT_1802a8108;
            puVar12 = &DAT_18029e743;
            uVar15 = 0x1e;
            uVar16 = 0x4e;
            goto LAB_1801c8f40;
          }
          puVar18 = &DAT_1802a80b0;
          puVar13 = &DAT_1802a8064;
          puVar12 = &DAT_18029e64b;
LAB_1801c8dbd:
          uVar15 = 0x1b;
        }
      }
      else {
        if (iVar3 < 0x10) {
          if (iVar3 < 0xd) {
            if (iVar3 == 0xb) {
              puVar18 = &DAT_1802a81f8;
              puVar13 = &DAT_1802a81b0;
              puVar12 = &DAT_18029e842;
LAB_1801c8a8b:
              uVar15 = 0x19;
              uVar16 = 0x48;
            }
            else {
              puVar18 = &DAT_1802a824c;
              puVar13 = &DAT_1802a81fc;
              puVar12 = &DAT_18029e8bb;
              uVar15 = 0x16;
              uVar16 = 0x4e;
            }
          }
          else if (iVar3 == 0xd) {
            puVar18 = &DAT_1802a82a0;
            puVar13 = &DAT_1802a8250;
            puVar12 = &DAT_18029e932;
LAB_1801c8d85:
            uVar15 = 0x12;
            uVar16 = 0x4e;
          }
          else if (iVar3 == 0xf) {
            puVar18 = &DAT_1802a8338;
            puVar13 = &DAT_1802a82f0;
            puVar12 = &DAT_18029ea15;
            uVar15 = 0x1f;
            uVar16 = 0x48;
          }
          else {
            puVar18 = &DAT_1802a82ec;
            puVar13 = &DAT_1802a82a4;
            puVar12 = &DAT_18029e9a6;
            uVar15 = 0x11;
            uVar16 = 0x48;
          }
          goto LAB_1801c8f40;
        }
        if (iVar3 < 0x13) {
          if (iVar3 != 0x10) {
            if (iVar3 != 0x12) {
              puVar18 = &DAT_1802a83d8;
              puVar13 = &DAT_1802a838c;
              puVar12 = &DAT_18029eb05;
              goto LAB_1801c8e83;
            }
            puVar18 = &DAT_1802a8428;
            puVar13 = &DAT_1802a83dc;
            puVar12 = &DAT_18029eb82;
            goto LAB_1801c8d1b;
          }
          puVar18 = &DAT_1802a8388;
          puVar13 = &DAT_1802a833c;
          puVar12 = &DAT_18029ea8d;
LAB_1801c8afd:
          uVar15 = 0x18;
        }
        else {
          if (iVar3 != 0x13) {
            if (iVar3 != 0x15) {
              puVar18 = &DAT_1802a84c8;
              puVar13 = &DAT_1802a847c;
              puVar12 = &DAT_18029ec71;
              goto LAB_1801c8f31;
            }
            puVar18 = &DAT_1802a8518;
            puVar13 = &DAT_1802a84cc;
            puVar12 = &DAT_18029ece1;
            goto LAB_1801c8dbd;
          }
          puVar18 = &DAT_1802a8478;
          puVar13 = &DAT_1802a842c;
          puVar12 = &DAT_18029ec04;
LAB_1801c8bd2:
          uVar15 = 0x12;
        }
      }
LAB_1801c8f3a:
      uVar16 = 0x49;
      goto LAB_1801c8f40;
    }
    if (iVar3 < 0x22) {
      if (iVar3 < 0x1b) {
        if (iVar3 < 0x18) {
          if (iVar3 == 0x16) {
            puVar18 = &DAT_1802a8568;
            puVar13 = &DAT_1802a851c;
            puVar12 = &DAT_18029ed5f;
            uVar15 = 0x1c;
          }
          else {
            puVar18 = &DAT_1802a85b8;
            puVar13 = &DAT_1802a856c;
            puVar12 = &DAT_18029edda;
            uVar15 = 0x13;
          }
        }
        else if (iVar3 == 0x18) {
          puVar18 = &DAT_1802a8608;
          puVar13 = &DAT_1802a85bc;
          puVar12 = &DAT_18029ee51;
LAB_1801c8d1b:
          uVar15 = 0x1a;
        }
        else {
          if (iVar3 != 0x1a) {
            puVar18 = &DAT_1802a8654;
            puVar13 = &DAT_1802a860c;
            puVar12 = &DAT_18029eece;
            goto LAB_1801c8a5d;
          }
          puVar18 = &DAT_1802a86a4;
          puVar13 = &DAT_1802a8658;
          puVar12 = &DAT_18029ef42;
LAB_1801c8e83:
          uVar15 = 0x19;
        }
      }
      else {
        if (0x1d < iVar3) {
          if (iVar3 != 0x1e) {
            if (iVar3 < 0x20) {
              puVar18 = &DAT_1802a8824;
              puVar13 = &DAT_1802a87dc;
              puVar12 = &DAT_18029f18e;
              goto LAB_1801c8a8b;
            }
            goto LAB_1801c80f9;
          }
          puVar18 = &DAT_1802a87d8;
          puVar13 = &DAT_1802a8790;
          puVar12 = &DAT_18029f11e;
LAB_1801c8a5d:
          uVar15 = 0x12;
          uVar16 = 0x48;
          goto LAB_1801c8f40;
        }
        if (iVar3 != 0x1b) {
          if (iVar3 == 0x1d) {
            puVar18 = &DAT_1802a878c;
            puVar13 = &DAT_1802a8744;
            puVar12 = &DAT_18029f0ac;
            uVar15 = 0x10;
            uVar16 = 0x48;
          }
          else {
            puVar18 = &DAT_1802a8740;
            puVar13 = &DAT_1802a86f8;
            puVar12 = &DAT_18029f03a;
            uVar15 = 0x16;
            uVar16 = 0x48;
          }
          goto LAB_1801c8f40;
        }
        puVar18 = &DAT_1802a86f4;
        puVar13 = &DAT_1802a86a8;
        puVar12 = &DAT_18029efc2;
        uVar15 = 0x10;
      }
      goto LAB_1801c8f3a;
    }
    if (iVar3 < 0xe1) {
      if (iVar3 < 0x5d) {
        if (iVar3 == 0x22) {
          return 4;
        }
        if (iVar3 != 0x5c) goto LAB_1801c80f9;
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if (*(char *)(param_1 + 3) == '\x01') {
          *(undefined1 *)(param_1 + 3) = local_91;
          local_d8 = CONCAT71(local_d8._1_7_,local_92);
          pbVar11 = (byte *)param_1[8];
          bVar7 = local_92;
          if (pbVar11 != (byte *)param_1[9]) goto LAB_1801c81a1;
LAB_1801c83a1:
          FUN_18009fb00(puVar4,pbVar11,&local_d8);
          iVar3 = *(int *)((longlong)param_1 + 0x14);
          if (0x65 < iVar3) goto LAB_1801c83b8;
LAB_1801c81b3:
          if (iVar3 < 0x2f) {
            if (iVar3 < 0x22) {
              if (iVar3 == 10) {
                param_1[6] = param_1[6] + local_a0;
                param_1[5] = local_e8;
              }
            }
            else if (iVar3 == 0x22) {
              uVar5 = param_1[0xc];
              if ((ulonglong)param_1[0xd] <= uVar5) goto LAB_1801c8669;
              lVar6 = local_a0 + uVar5;
              param_1[0xc] = lVar6;
              puVar14 = param_1 + 10;
              bVar7 = local_a6;
              if (local_c0 < (ulonglong)param_1[0xd]) {
                puVar14 = (undefined8 *)param_1[10];
              }
              goto LAB_1801c857e;
            }
          }
          else if (iVar3 < 0x5c) {
            if (iVar3 == 0x2f) {
              uVar5 = param_1[0xc];
              if ((ulonglong)param_1[0xd] <= uVar5) goto LAB_1801c8669;
              lVar6 = local_a0 + uVar5;
              param_1[0xc] = lVar6;
              puVar14 = param_1 + 10;
              bVar7 = local_a3;
              if (local_c0 < (ulonglong)param_1[0xd]) {
                puVar14 = (undefined8 *)param_1[10];
              }
              goto LAB_1801c857e;
            }
          }
          else if (iVar3 < 0x62) {
            if (iVar3 == 0x5c) {
              uVar5 = param_1[0xc];
              if (uVar5 < (ulonglong)param_1[0xd]) {
                lVar6 = local_a0 + uVar5;
                param_1[0xc] = lVar6;
                puVar14 = param_1 + 10;
                bVar7 = local_92;
                if (local_c0 < (ulonglong)param_1[0xd]) {
                  puVar14 = (undefined8 *)param_1[10];
                }
LAB_1801c857e:
                *(byte *)((longlong)puVar14 + uVar5) = bVar7;
                goto LAB_1801c8127;
              }
LAB_1801c8669:
              FUN_18006a970(param_1 + 10,local_a0);
              goto LAB_1801c8010;
            }
          }
          else if (iVar3 == 0x62) {
            uVar5 = param_1[0xc];
            if ((ulonglong)param_1[0xd] <= uVar5) goto LAB_1801c8669;
            lVar6 = local_a0 + uVar5;
            param_1[0xc] = lVar6;
            puVar14 = param_1 + 10;
            bVar7 = local_a1;
            if (local_c0 < (ulonglong)param_1[0xd]) {
              puVar14 = (undefined8 *)param_1[10];
            }
            goto LAB_1801c857e;
          }
LAB_1801c8fa0:
          puVar13 = &DAT_1802a7dfc;
          goto LAB_1801c8f45;
        }
        pbVar11 = (byte *)*param_1;
        if (pbVar11 == (byte *)param_1[1]) {
          *(uint *)((longlong)param_1 + 0x14) = local_b0;
          puVar18 = &DAT_1802a7e30;
          puVar13 = &DAT_1802a7dfc;
          puVar12 = &DAT_18029e2a6;
          uVar15 = 0x16;
          uVar16 = 0x34;
          goto LAB_1801c8f40;
        }
        bVar7 = *pbVar11;
        *param_1 = pbVar11 + 1;
        *(uint *)((longlong)param_1 + 0x14) = (uint)bVar7;
        local_d8 = CONCAT71(local_d8._1_7_,bVar7);
        pbVar11 = (byte *)param_1[8];
        if (pbVar11 == (byte *)param_1[9]) goto LAB_1801c83a1;
LAB_1801c81a1:
        *pbVar11 = bVar7;
        param_1[8] = param_1[8] + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x14);
        if (iVar3 < 0x66) goto LAB_1801c81b3;
LAB_1801c83b8:
        if (iVar3 < 0x72) {
          if (iVar3 < 0x6e) {
            if (iVar3 != 0x66) goto LAB_1801c8fa0;
            uVar5 = param_1[0xc];
            if (uVar5 < (ulonglong)param_1[0xd]) {
              lVar6 = local_a0 + uVar5;
              param_1[0xc] = lVar6;
              puVar14 = param_1 + 10;
              bVar7 = local_a7;
              if (local_c0 < (ulonglong)param_1[0xd]) {
                puVar14 = (undefined8 *)param_1[10];
              }
              goto LAB_1801c857e;
            }
            goto LAB_1801c8669;
          }
          if (iVar3 == 0x6e) {
            uVar5 = param_1[0xc];
            if ((ulonglong)param_1[0xd] <= uVar5) goto LAB_1801c8669;
            lVar6 = local_a0 + uVar5;
            param_1[0xc] = lVar6;
            puVar14 = param_1 + 10;
            bVar7 = local_a5;
            if (local_c0 < (ulonglong)param_1[0xd]) {
              puVar14 = (undefined8 *)param_1[10];
            }
            goto LAB_1801c857e;
          }
          goto LAB_1801c8fa0;
        }
        if (iVar3 < 0x74) {
          if (iVar3 != 0x72) goto LAB_1801c8fa0;
          uVar5 = param_1[0xc];
          if ((ulonglong)param_1[0xd] <= uVar5) goto LAB_1801c8669;
          lVar6 = local_a0 + uVar5;
          param_1[0xc] = lVar6;
          puVar14 = param_1 + 10;
          bVar7 = local_a4;
          if (local_c0 < (ulonglong)param_1[0xd]) {
            puVar14 = (undefined8 *)param_1[10];
          }
          goto LAB_1801c857e;
        }
        if (iVar3 == 0x74) {
          uVar5 = param_1[0xc];
          if ((ulonglong)param_1[0xd] <= uVar5) goto LAB_1801c8669;
          lVar6 = local_a0 + uVar5;
          param_1[0xc] = lVar6;
          puVar14 = param_1 + 10;
          bVar7 = local_a2;
          if (local_c0 < (ulonglong)param_1[0xd]) {
            puVar14 = (undefined8 *)param_1[10];
          }
          goto LAB_1801c857e;
        }
        if (iVar3 != 0x75) goto LAB_1801c8fa0;
        local_100 = FUN_1801c9f00(param_1);
        if ((uint)local_100 == local_b0) {
LAB_1801c9017:
          puVar13 = &DAT_1802a7d28;
          goto LAB_1801c8f45;
        }
        uVar17 = local_f4 & (uint)local_100;
        FUN_1801d1f63(&DAT_1802a7db4,&DAT_18029e234,0x1e,0x44,&DAT_1802a7df8);
        if ((int)uVar17 < 0xdc00) {
          if (uVar17 != 0xd800) goto LAB_1801c867d;
          param_1[4] = param_1[4] + 1;
          param_1[5] = param_1[5] + 1;
          if (*(char *)(param_1 + 3) == '\x01') {
            *(undefined1 *)(param_1 + 3) = local_91;
            uVar17 = *(uint *)((longlong)param_1 + 0x14);
          }
          else {
            pbVar11 = (byte *)*param_1;
            uVar17 = local_b0;
            if (pbVar11 != (byte *)param_1[1]) {
              uVar17 = (uint)*pbVar11;
              *param_1 = pbVar11 + 1;
            }
            *(uint *)((longlong)param_1 + 0x14) = uVar17;
          }
          if (uVar17 == local_b0) {
LAB_1801c8fd7:
            puVar13 = &DAT_1802a7d64;
            goto LAB_1801c8f45;
          }
          local_d8 = CONCAT71(local_d8._1_7_,(char)uVar17);
          puVar1 = (undefined1 *)param_1[8];
          if (puVar1 == (undefined1 *)param_1[9]) {
            FUN_18009fb00(puVar4,puVar1,&local_d8);
          }
          else {
            *puVar1 = (char)uVar17;
            param_1[8] = param_1[8] + 1;
          }
          iVar3 = *(int *)((longlong)param_1 + 0x14);
          if (iVar3 < 0x5c) {
LAB_1801c8fb2:
            if (iVar3 == 10) {
              param_1[6] = param_1[6] + local_a0;
              param_1[5] = local_e8;
              puVar13 = &DAT_1802a7d64;
              goto LAB_1801c8f45;
            }
            goto LAB_1801c8fd7;
          }
          if (iVar3 != 0x5c) goto LAB_1801c8fd7;
          param_1[4] = param_1[4] + 1;
          param_1[5] = param_1[5] + 1;
          if (*(char *)(param_1 + 3) == '\x01') {
            *(undefined1 *)(param_1 + 3) = local_91;
            bVar7 = local_92;
          }
          else {
            pbVar11 = (byte *)*param_1;
            if (pbVar11 == (byte *)param_1[1]) {
              *(uint *)((longlong)param_1 + 0x14) = local_b0;
              puVar18 = &DAT_1802a7db0;
              puVar13 = &DAT_1802a7d64;
              puVar12 = &DAT_18029e1b7;
              uVar15 = 0x18;
              uVar16 = 0x4c;
              goto LAB_1801c8f40;
            }
            bVar7 = *pbVar11;
            *param_1 = pbVar11 + 1;
            *(uint *)((longlong)param_1 + 0x14) = (uint)bVar7;
          }
          local_d8 = CONCAT71(local_d8._1_7_,bVar7);
          pbVar11 = (byte *)param_1[8];
          if (pbVar11 == (byte *)param_1[9]) {
            FUN_18009fb00(puVar4,pbVar11,&local_d8);
          }
          else {
            *pbVar11 = bVar7;
            param_1[8] = param_1[8] + 1;
          }
          iVar3 = *(int *)((longlong)param_1 + 0x14);
          if (iVar3 < 0x75) goto LAB_1801c8fb2;
          if (iVar3 != 0x75) goto LAB_1801c8fd7;
          uVar17 = FUN_1801c9f00(param_1);
          local_f8 = local_b0;
          FUN_1801d1f63(&DAT_1802a7d28,&DAT_18029e14e,0x1f,0x36,&DAT_1802a7d60);
          if (uVar17 == local_f8) goto LAB_1801c9017;
          if ((local_f4 & uVar17) != 0xdc00) goto LAB_1801c8fd7;
          uVar5 = (ulonglong)(((int)local_100 << ((byte)local_f0 & 0x1f)) + uVar17 + 0xfca02400);
LAB_1801c889e:
          uVar17 = (uint)uVar5;
          FUN_1801c9d00(param_1,uVar17 >> 0x12 | 0xf0);
          FUN_1801c9d00(param_1,uVar17 >> ((byte)local_ec & 0x1f) & local_b8 | local_b4);
          FUN_1801c9d00(param_1,uVar17 >> ((byte)local_dc & 0x1f) & local_b8 | local_b4);
          FUN_1801c9d00(param_1,uVar17 & local_b8 | local_b4);
          goto LAB_1801c8010;
        }
        if (uVar17 == 0xdc00) {
          puVar13 = &DAT_1802a7db4;
          goto LAB_1801c8f45;
        }
LAB_1801c867d:
        uVar17 = (uint)local_100;
        if ((int)local_b4 <= (int)uVar17) {
          if (uVar17 < 0x800) {
            uVar8 = (uVar17 >> ((byte)local_dc & 0x1f)) + 0xc0;
          }
          else {
            uVar5 = local_100;
            if (0xffff < uVar17) goto LAB_1801c889e;
            FUN_1801c9d00(param_1,(uVar17 >> ((byte)local_ec & 0x1f)) + 0xe0);
            uVar8 = uVar17 >> ((byte)local_dc & 0x1f) & local_b8 | local_b4;
          }
          FUN_1801c9d00(param_1,uVar8);
          FUN_1801c9d00(param_1,local_b8 & uVar17 | local_b4);
          goto LAB_1801c8010;
        }
        uVar5 = param_1[0xc];
        if ((ulonglong)param_1[0xd] <= uVar5) {
          FUN_18006a970(param_1 + 10,local_a0);
          goto LAB_1801c8010;
        }
        lVar6 = local_a0 + uVar5;
        param_1[0xc] = lVar6;
        puVar14 = param_1 + 10;
        if (local_c0 < (ulonglong)param_1[0xd]) {
          puVar14 = (undefined8 *)param_1[10];
        }
        *(char *)((longlong)puVar14 + uVar5) = (char)local_100;
      }
      else {
        if (0xc1 < iVar3) {
          if (iVar3 == 0xe0) {
            local_d8 = 0xbf000000a0;
            uStack_d0 = 0xbf00000080;
            local_158 = &local_c8;
            ppuVar10 = &local_160;
            local_160 = &local_d8;
          }
          else {
            local_d8 = CONCAT44(0xbf,local_b4);
            local_168 = &uStack_d0;
            ppuVar10 = &local_170;
            local_170 = &local_d8;
          }
          goto LAB_1801c8360;
        }
        if (0x22 < iVar3 - 0x5dU) {
LAB_1801c8eec:
          puVar18 = &DAT_1802a8850;
          puVar13 = &DAT_1802a8828;
          puVar12 = &DAT_18029f203;
          uVar15 = 0x11;
          uVar16 = 0x26;
          goto LAB_1801c8f40;
        }
LAB_1801c80f9:
        uVar5 = param_1[0xc];
        if ((ulonglong)param_1[0xd] <= uVar5) {
          FUN_18006a970(param_1 + 10,local_a0);
          goto LAB_1801c8010;
        }
        lVar6 = local_a0 + uVar5;
        param_1[0xc] = lVar6;
        puVar14 = param_1 + 10;
        if (local_c0 < (ulonglong)param_1[0xd]) {
          puVar14 = (undefined8 *)param_1[10];
        }
        *(char *)((longlong)puVar14 + uVar5) = (char)iVar3;
      }
LAB_1801c8127:
      *(undefined1 *)((longlong)puVar14 + lVar6) = local_91;
      goto LAB_1801c8010;
    }
    if (iVar3 < 0xf0) {
      if (iVar3 == 0xed) {
        local_d8 = 0x9f00000080;
        uStack_d0 = 0xbf00000080;
        local_138 = &local_c8;
        ppuVar10 = &local_140;
        local_140 = &local_d8;
      }
      else {
        local_d8 = 0xbf00000080;
        uStack_d0 = 0xbf00000080;
        local_148 = &local_c8;
        ppuVar10 = &local_150;
        local_150 = &local_d8;
      }
    }
    else if (iVar3 == 0xf0) {
      local_d8 = 0xbf00000090;
      uStack_d0 = 0xbf00000080;
      local_c8 = 0xbf00000080;
      local_128 = &local_c0;
      ppuVar10 = &local_130;
      local_130 = &local_d8;
    }
    else if (iVar3 < 0xf4) {
      local_d8 = 0xbf00000080;
      uStack_d0 = 0xbf00000080;
      local_c8 = 0xbf00000080;
      local_118 = &local_c0;
      ppuVar10 = &local_120;
      local_120 = &local_d8;
    }
    else {
      if (iVar3 != 0xf4) goto LAB_1801c8eec;
      local_d8 = 0x8f00000080;
      uStack_d0 = 0xbf00000080;
      local_c8 = 0xbf00000080;
      local_108 = &local_c0;
      ppuVar10 = &local_110;
      local_110 = &local_d8;
    }
LAB_1801c8360:
    cVar2 = FUN_1801cb810(param_1,ppuVar10);
    if (cVar2 == '\0') {
      return local_ac;
    }
  } while( true );
}



void Unwind_1801c9060(void)

{
  Unwind_1801dd394();
}



undefined4 FUN_1801c90a0(undefined8 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined *puVar19;
  undefined4 local_70;
  uint local_6c;
  uint local_5c;
  undefined8 local_50;
  undefined1 local_46;
  undefined1 local_45;
  uint local_44;
  longlong local_40;
  uint local_38;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_31 = 0;
  local_6c = 5;
  local_5c = 7;
  local_44 = 10;
  local_46 = 0x2d;
  local_40 = 1;
  local_45 = 0x30;
  local_38 = 0xffffffff;
  local_70 = 0xe;
  puVar13 = param_1 + 10;
  param_1[0xc] = 0;
  puVar6 = puVar13;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar6 = (undefined8 *)param_1[10];
  }
  *(undefined1 *)puVar6 = 0;
  puVar2 = (undefined1 *)param_1[7];
  puVar10 = (undefined1 *)param_1[8];
  if (puVar2 != (undefined1 *)param_1[8]) {
    param_1[8] = puVar2;
    puVar10 = puVar2;
  }
  puVar6 = param_1 + 7;
  local_50 = CONCAT71(local_50._1_7_,*(undefined1 *)((longlong)param_1 + 0x14));
  if (puVar10 == (undefined1 *)param_1[9]) {
    FUN_18009fb00(puVar6,puVar10,&local_50);
  }
  else {
    *puVar10 = *(undefined1 *)((longlong)param_1 + 0x14);
    param_1[8] = param_1[8] + 1;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  if (iVar1 < 0x30) {
    if (iVar1 == 0x2d) {
      uVar3 = param_1[0xc];
      if (uVar3 < (ulonglong)param_1[0xd]) {
        param_1[0xc] = local_40 + uVar3;
        puVar15 = puVar13;
        if (0xf < (ulonglong)param_1[0xd]) {
          puVar15 = (undefined8 *)param_1[10];
        }
        *(undefined1 *)((longlong)puVar15 + uVar3) = local_46;
        *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
      }
      else {
        FUN_18006a970(puVar13,local_40);
      }
    }
LAB_1801c92eb:
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined1 *)(param_1 + 3) = local_31;
      uVar5 = *(uint *)((longlong)param_1 + 0x14);
    }
    else {
      pbVar4 = (byte *)*param_1;
      uVar5 = local_38;
      if (pbVar4 != (byte *)param_1[1]) {
        uVar5 = (uint)*pbVar4;
        *param_1 = pbVar4 + 1;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar5;
    }
    if (uVar5 != local_38) {
      local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
      puVar2 = (undefined1 *)param_1[8];
      if (puVar2 == (undefined1 *)param_1[9]) {
        FUN_18009fb00(puVar6,puVar2,&local_50);
        iVar1 = *(int *)((longlong)param_1 + 0x14);
      }
      else {
        *puVar2 = (char)uVar5;
        param_1[8] = param_1[8] + 1;
        iVar1 = *(int *)((longlong)param_1 + 0x14);
      }
      if (iVar1 < 0x30) {
        if (iVar1 == 10) {
          param_1[6] = param_1[6] + local_40;
          param_1[5] = 0;
        }
      }
      else {
        if (iVar1 == 0x30) {
          FUN_1801c9d00(param_1,0x30);
          local_6c = 6;
          goto LAB_1801c9437;
        }
        if (iVar1 - 0x31U < 9) {
          uVar3 = param_1[0xc];
          if (uVar3 < (ulonglong)param_1[0xd]) {
            param_1[0xc] = local_40 + uVar3;
            puVar15 = puVar13;
            if (0xf < (ulonglong)param_1[0xd]) {
              puVar15 = (undefined8 *)param_1[10];
            }
            *(char *)((longlong)puVar15 + uVar3) = (char)iVar1;
            *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
            local_6c = 6;
          }
          else {
            FUN_18006a970(puVar13,local_40);
            local_6c = 6;
          }
          goto LAB_1801c952c;
        }
      }
    }
    puVar19 = &DAT_1802a8880;
    puVar12 = &DAT_1802a8854;
    puVar11 = &DAT_18029f24d;
    uVar14 = 0x1d;
LAB_1801c940b:
    uVar17 = 0x29;
LAB_1801c9411:
    FUN_1801d1f63(puVar12,puVar11,uVar14,uVar17,puVar19);
    param_1[0xe] = puVar12;
  }
  else {
    if (iVar1 == 0x30) {
      uVar3 = param_1[0xc];
      if (uVar3 < (ulonglong)param_1[0xd]) {
        param_1[0xc] = local_40 + uVar3;
        puVar15 = puVar13;
        if (0xf < (ulonglong)param_1[0xd]) {
          puVar15 = (undefined8 *)param_1[10];
        }
        *(undefined1 *)((longlong)puVar15 + uVar3) = local_45;
        *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
      }
      else {
        FUN_18006a970(puVar13,local_40);
      }
LAB_1801c9437:
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\x01') {
        *(undefined1 *)(param_1 + 3) = local_31;
        uVar5 = *(uint *)((longlong)param_1 + 0x14);
      }
      else {
        pbVar4 = (byte *)*param_1;
        uVar5 = local_38;
        if (pbVar4 != (byte *)param_1[1]) {
          uVar5 = (uint)*pbVar4;
          *param_1 = pbVar4 + 1;
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar5;
      }
      uVar16 = local_38;
      if (uVar5 != local_38) {
        local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
        puVar2 = (undefined1 *)param_1[8];
        if (puVar2 == (undefined1 *)param_1[9]) {
          FUN_18009fb00(puVar6,puVar2,&local_50);
          uVar16 = *(uint *)((longlong)param_1 + 0x14);
        }
        else {
          *puVar2 = (char)uVar5;
          param_1[8] = param_1[8] + 1;
          uVar16 = *(uint *)((longlong)param_1 + 0x14);
        }
        if ((int)uVar16 < 0x45) {
joined_r0x0001801c94c1:
          if ((int)uVar16 < 0x2e) {
            if (uVar16 == 10) {
              param_1[6] = param_1[6] + local_40;
              param_1[5] = 0;
              uVar16 = local_44;
            }
          }
          else if (uVar16 == 0x2e) {
            uVar3 = param_1[0xc];
            if (uVar3 < (ulonglong)param_1[0xd]) {
              param_1[0xc] = local_40 + uVar3;
              puVar15 = puVar13;
              if (0xf < (ulonglong)param_1[0xd]) {
                puVar15 = (undefined8 *)param_1[10];
              }
              *(undefined1 *)((longlong)puVar15 + uVar3) = *(undefined1 *)(param_1 + 0x12);
              *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
            }
            else {
              FUN_18006a970(puVar13,local_40);
            }
            param_1[4] = param_1[4] + 1;
            param_1[5] = param_1[5] + 1;
            if (*(char *)(param_1 + 3) == '\x01') {
              *(undefined1 *)(param_1 + 3) = local_31;
              uVar5 = *(uint *)((longlong)param_1 + 0x14);
            }
            else {
              pbVar4 = (byte *)*param_1;
              uVar5 = local_38;
              if (pbVar4 != (byte *)param_1[1]) {
                uVar5 = (uint)*pbVar4;
                *param_1 = pbVar4 + 1;
              }
              *(uint *)((longlong)param_1 + 0x14) = uVar5;
            }
            if (uVar5 != local_38) {
              local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
              puVar2 = (undefined1 *)param_1[8];
              if (puVar2 == (undefined1 *)param_1[9]) {
                FUN_18009fb00(puVar6,puVar2,&local_50);
                uVar5 = *(uint *)((longlong)param_1 + 0x14);
                if (uVar5 != local_44) goto LAB_1801c9701;
              }
              else {
                *puVar2 = (char)uVar5;
                param_1[8] = param_1[8] + 1;
                uVar5 = *(uint *)((longlong)param_1 + 0x14);
                if (uVar5 != local_44) {
LAB_1801c9701:
                  if (uVar5 - 0x30 < local_44) {
                    uVar3 = param_1[0xc];
                    if ((ulonglong)param_1[0xd] <= uVar3) goto LAB_1801c99de;
                    lVar9 = local_40 + uVar3;
                    param_1[0xc] = lVar9;
                    puVar15 = puVar13;
                    if (0xf < (ulonglong)param_1[0xd]) {
                      puVar15 = (undefined8 *)param_1[10];
                    }
                    *(char *)((longlong)puVar15 + uVar3) = (char)uVar5;
                    do {
                      *(undefined1 *)((longlong)puVar15 + lVar9) = local_31;
                      while( true ) {
                        param_1[4] = param_1[4] + 1;
                        param_1[5] = param_1[5] + 1;
                        if (*(char *)(param_1 + 3) == '\x01') {
                          *(undefined1 *)(param_1 + 3) = local_31;
                          uVar5 = *(uint *)((longlong)param_1 + 0x14);
                        }
                        else {
                          pbVar4 = (byte *)*param_1;
                          uVar5 = local_38;
                          if (pbVar4 != (byte *)param_1[1]) {
                            uVar5 = (uint)*pbVar4;
                            *param_1 = pbVar4 + 1;
                          }
                          *(uint *)((longlong)param_1 + 0x14) = uVar5;
                        }
                        local_6c = local_5c;
                        uVar16 = local_38;
                        if (uVar5 == local_38) goto LAB_1801c9af3;
                        local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
                        puVar2 = (undefined1 *)param_1[8];
                        if (puVar2 == (undefined1 *)param_1[9]) {
                          FUN_18009fb00(puVar6,puVar2,&local_50);
                          uVar16 = *(uint *)((longlong)param_1 + 0x14);
                        }
                        else {
                          *puVar2 = (char)uVar5;
                          param_1[8] = param_1[8] + 1;
                          uVar16 = *(uint *)((longlong)param_1 + 0x14);
                        }
                        if (0x44 < (int)uVar16) {
                          local_6c = 7;
                          goto joined_r0x0001801c9ab6;
                        }
                        if ((int)uVar16 < 0x30) {
                          local_6c = 7;
                          if (uVar16 == 10) goto LAB_1801c9ad7;
                          goto LAB_1801c9af3;
                        }
                        if (9 < uVar16 - 0x30) {
                          local_6c = 7;
                          goto LAB_1801c9af3;
                        }
                        uVar3 = param_1[0xc];
                        if (uVar3 < (ulonglong)param_1[0xd]) break;
LAB_1801c99de:
                        FUN_18006a970(puVar13,local_40);
                      }
                      lVar9 = local_40 + uVar3;
                      param_1[0xc] = lVar9;
                      puVar15 = puVar13;
                      if (0xf < (ulonglong)param_1[0xd]) {
                        puVar15 = (undefined8 *)param_1[10];
                      }
                      *(char *)((longlong)puVar15 + uVar3) = (char)uVar16;
                    } while( true );
                  }
                  goto LAB_1801c973a;
                }
              }
              param_1[6] = param_1[6] + local_40;
              param_1[5] = 0;
            }
LAB_1801c973a:
            puVar19 = &DAT_1802a88b0;
            puVar12 = &DAT_1802a8884;
            puVar11 = &DAT_18029f2ad;
            uVar14 = 0x12;
            goto LAB_1801c940b;
          }
        }
        else {
joined_r0x0001801c9ab6:
          if ((int)uVar16 < 0x65) {
            if (uVar16 == 0x45) {
              uVar16 = 0x45;
LAB_1801c9774:
              uVar3 = param_1[0xc];
              if (uVar3 < (ulonglong)param_1[0xd]) {
                param_1[0xc] = local_40 + uVar3;
                puVar15 = puVar13;
                if (0xf < (ulonglong)param_1[0xd]) {
                  puVar15 = (undefined8 *)param_1[10];
                }
                *(char *)((longlong)puVar15 + uVar3) = (char)uVar16;
                *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
              }
              else {
                FUN_18006a970(puVar13,local_40);
              }
              param_1[4] = param_1[4] + 1;
              param_1[5] = param_1[5] + 1;
              if (*(char *)(param_1 + 3) == '\x01') {
                *(undefined1 *)(param_1 + 3) = local_31;
                uVar5 = *(uint *)((longlong)param_1 + 0x14);
              }
              else {
                pbVar4 = (byte *)*param_1;
                uVar5 = local_38;
                if (pbVar4 != (byte *)param_1[1]) {
                  uVar5 = (uint)*pbVar4;
                  *param_1 = pbVar4 + 1;
                }
                *(uint *)((longlong)param_1 + 0x14) = uVar5;
              }
              if (uVar5 != local_38) {
                local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
                puVar2 = (undefined1 *)param_1[8];
                if (puVar2 == (undefined1 *)param_1[9]) {
                  FUN_18009fb00(puVar6,puVar2,&local_50);
                  uVar16 = *(uint *)((longlong)param_1 + 0x14);
                  if (0x2c < (int)uVar16) goto LAB_1801c984d;
LAB_1801c9815:
                  bVar18 = uVar16 == 0x2b;
                  if ((int)uVar16 < 0x2b) {
                    if (uVar16 == 10) {
                      param_1[6] = param_1[6] + local_40;
                      param_1[5] = 0;
                    }
                    goto LAB_1801c9899;
                  }
                }
                else {
                  *puVar2 = (char)uVar5;
                  param_1[8] = param_1[8] + 1;
                  uVar16 = *(uint *)((longlong)param_1 + 0x14);
                  if ((int)uVar16 < 0x2d) goto LAB_1801c9815;
LAB_1801c984d:
                  if (0x2f < (int)uVar16) {
                    if (uVar16 - 0x30 < 10) goto LAB_1801c9bfd;
                    goto LAB_1801c9899;
                  }
                  bVar18 = uVar16 == 0x2d;
                }
                if (bVar18) {
                  uVar3 = param_1[0xc];
                  if (uVar3 < (ulonglong)param_1[0xd]) {
                    param_1[0xc] = local_40 + uVar3;
                    puVar15 = puVar13;
                    if (0xf < (ulonglong)param_1[0xd]) {
                      puVar15 = (undefined8 *)param_1[10];
                    }
                    *(char *)((longlong)puVar15 + uVar3) = (char)uVar16;
                    *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
                  }
                  else {
                    FUN_18006a970(puVar13,local_40);
                  }
                  param_1[4] = param_1[4] + 1;
                  param_1[5] = param_1[5] + 1;
                  if (*(char *)(param_1 + 3) == '\x01') {
                    *(undefined1 *)(param_1 + 3) = local_31;
                    uVar5 = *(uint *)((longlong)param_1 + 0x14);
                  }
                  else {
                    pbVar4 = (byte *)*param_1;
                    uVar5 = local_38;
                    if (pbVar4 != (byte *)param_1[1]) {
                      uVar5 = (uint)*pbVar4;
                      *param_1 = pbVar4 + 1;
                    }
                    *(uint *)((longlong)param_1 + 0x14) = uVar5;
                  }
                  if (uVar5 != local_38) {
                    local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
                    puVar2 = (undefined1 *)param_1[8];
                    if (puVar2 == (undefined1 *)param_1[9]) {
                      FUN_18009fb00(puVar6,puVar2,&local_50);
                      uVar5 = *(uint *)((longlong)param_1 + 0x14);
                      if (uVar5 != local_44) goto LAB_1801c9961;
                    }
                    else {
                      *puVar2 = (char)uVar5;
                      param_1[8] = param_1[8] + 1;
                      uVar5 = *(uint *)((longlong)param_1 + 0x14);
                      if (uVar5 != local_44) {
LAB_1801c9961:
                        if (uVar5 - 0x30 < local_44) {
                          uVar3 = param_1[0xc];
                          if ((ulonglong)param_1[0xd] <= uVar3) goto LAB_1801c9c37;
                          lVar9 = local_40 + uVar3;
                          param_1[0xc] = lVar9;
                          puVar15 = puVar13;
                          if (0xf < (ulonglong)param_1[0xd]) {
                            puVar15 = (undefined8 *)param_1[10];
                          }
                          *(char *)((longlong)puVar15 + uVar3) = (char)uVar5;
                          do {
                            *(undefined1 *)((longlong)puVar15 + lVar9) = local_31;
                            while( true ) {
                              param_1[4] = param_1[4] + 1;
                              param_1[5] = param_1[5] + 1;
                              if (*(char *)(param_1 + 3) == '\x01') {
                                *(undefined1 *)(param_1 + 3) = local_31;
                                uVar5 = *(uint *)((longlong)param_1 + 0x14);
                              }
                              else {
                                pbVar4 = (byte *)*param_1;
                                uVar5 = local_38;
                                if (pbVar4 != (byte *)param_1[1]) {
                                  uVar5 = (uint)*pbVar4;
                                  *param_1 = pbVar4 + 1;
                                }
                                *(uint *)((longlong)param_1 + 0x14) = uVar5;
                              }
                              local_6c = local_5c;
                              uVar16 = local_38;
                              if (uVar5 == local_38) goto LAB_1801c9af3;
                              local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
                              puVar2 = (undefined1 *)param_1[8];
                              if (puVar2 == (undefined1 *)param_1[9]) {
                                FUN_18009fb00(puVar6,puVar2,&local_50);
                                uVar16 = *(uint *)((longlong)param_1 + 0x14);
                                if (uVar16 == local_44) goto LAB_1801c9ad7;
                              }
                              else {
                                *puVar2 = (char)uVar5;
                                param_1[8] = param_1[8] + 1;
                                uVar16 = *(uint *)((longlong)param_1 + 0x14);
                                if (uVar16 == local_44) goto LAB_1801c9ad7;
                              }
                              local_6c = 7;
                              if (local_44 <= uVar16 - 0x30) goto LAB_1801c9af3;
LAB_1801c9bfd:
                              uVar3 = param_1[0xc];
                              if (uVar3 < (ulonglong)param_1[0xd]) break;
LAB_1801c9c37:
                              FUN_18006a970(puVar13,local_40);
                            }
                            lVar9 = local_40 + uVar3;
                            param_1[0xc] = lVar9;
                            puVar15 = puVar13;
                            if (0xf < (ulonglong)param_1[0xd]) {
                              puVar15 = (undefined8 *)param_1[10];
                            }
                            *(char *)((longlong)puVar15 + uVar3) = (char)uVar16;
                          } while( true );
                        }
                        goto LAB_1801c999a;
                      }
                    }
                    param_1[6] = param_1[6] + local_40;
                    param_1[5] = 0;
                  }
LAB_1801c999a:
                  puVar19 = &DAT_1802a8928;
                  puVar12 = &DAT_1802a88f4;
                  puVar11 = &DAT_18029f362;
                  uVar14 = 0x12;
                  uVar17 = 0x33;
                  goto LAB_1801c9411;
                }
              }
LAB_1801c9899:
              puVar19 = &DAT_1802a88f0;
              puVar12 = &DAT_1802a88b4;
              puVar11 = &DAT_18029f302;
              uVar14 = 0x12;
              uVar17 = 0x3b;
              goto LAB_1801c9411;
            }
          }
          else if (uVar16 == 0x65) goto LAB_1801c9774;
        }
      }
    }
    else {
      if (8 < iVar1 - 0x31U) goto LAB_1801c92eb;
      uVar3 = param_1[0xc];
      if (uVar3 < (ulonglong)param_1[0xd]) {
        param_1[0xc] = local_40 + uVar3;
        puVar15 = puVar13;
        if (0xf < (ulonglong)param_1[0xd]) {
          puVar15 = (undefined8 *)param_1[10];
        }
        *(char *)((longlong)puVar15 + uVar3) = (char)iVar1;
        *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
      }
      else {
        FUN_18006a970(puVar13,local_40);
      }
LAB_1801c952c:
      while( true ) {
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if (*(char *)(param_1 + 3) == '\x01') {
          *(undefined1 *)(param_1 + 3) = local_31;
          uVar5 = *(uint *)((longlong)param_1 + 0x14);
        }
        else {
          pbVar4 = (byte *)*param_1;
          uVar5 = local_38;
          if (pbVar4 != (byte *)param_1[1]) {
            uVar5 = (uint)*pbVar4;
            *param_1 = pbVar4 + 1;
          }
          *(uint *)((longlong)param_1 + 0x14) = uVar5;
        }
        uVar16 = local_38;
        if (uVar5 == local_38) break;
        local_50 = CONCAT71(local_50._1_7_,(char)uVar5);
        puVar2 = (undefined1 *)param_1[8];
        if (puVar2 == (undefined1 *)param_1[9]) {
          FUN_18009fb00(puVar6,puVar2,&local_50);
          uVar16 = *(uint *)((longlong)param_1 + 0x14);
        }
        else {
          *puVar2 = (char)uVar5;
          param_1[8] = param_1[8] + 1;
          uVar16 = *(uint *)((longlong)param_1 + 0x14);
        }
        if ((int)uVar16 < 0x30) goto joined_r0x0001801c94c1;
        if (0x44 < (int)uVar16) goto joined_r0x0001801c9ab6;
        if (9 < uVar16 - 0x30) break;
        uVar3 = param_1[0xc];
        if (uVar3 < (ulonglong)param_1[0xd]) {
          param_1[0xc] = local_40 + uVar3;
          puVar15 = puVar13;
          if (0xf < (ulonglong)param_1[0xd]) {
            puVar15 = (undefined8 *)param_1[10];
          }
          *(char *)((longlong)puVar15 + uVar3) = (char)uVar16;
          *(undefined1 *)((longlong)puVar15 + local_40 + uVar3) = local_31;
        }
        else {
          FUN_18006a970(puVar13,local_40);
        }
      }
    }
LAB_1801c9af3:
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[4] = param_1[4] + -1;
    if (param_1[5] == 0) {
      if (param_1[6] != 0) {
        param_1[6] = param_1[6] + -1;
      }
    }
    else {
      param_1[5] = param_1[5] + -1;
    }
    if (uVar16 != local_38) {
      param_1[8] = param_1[8] + -1;
    }
    local_50 = 0;
    puVar7 = (undefined4 *)FUN_1801e6ae4();
    *puVar7 = 0;
    if (local_6c < 6) {
      if (local_6c == 5) {
        puVar6 = puVar13;
        if (0xf < (ulonglong)param_1[0xd]) {
          puVar6 = (undefined8 *)param_1[10];
        }
        uVar14 = FUN_1801e76e4(puVar6,&local_50,local_44);
        piVar8 = (int *)FUN_1801e6ae4();
        if (*piVar8 == 0) {
          param_1[0x10] = uVar14;
          return 5;
        }
      }
    }
    else if (local_6c == 6) {
      puVar6 = puVar13;
      if (0xf < (ulonglong)param_1[0xd]) {
        puVar6 = (undefined8 *)param_1[10];
      }
      uVar14 = FUN_1801e7630(puVar6,&local_50,local_44);
      piVar8 = (int *)FUN_1801e6ae4();
      if (*piVar8 == 0) {
        param_1[0xf] = uVar14;
        return 6;
      }
    }
    if (0xf < (ulonglong)param_1[0xd]) {
      puVar13 = (undefined8 *)param_1[10];
    }
    uVar14 = FUN_1801eace4(puVar13,&local_50);
    param_1[0x11] = uVar14;
    local_70 = 7;
  }
  return local_70;
LAB_1801c9ad7:
  param_1[6] = param_1[6] + local_40;
  param_1[5] = 0;
  local_6c = 7;
  uVar16 = local_44;
  goto LAB_1801c9af3;
}



void Unwind_1801c9ce0(void)

{
  Unwind_1801dd394();
}



void FUN_1801c9d00(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_70 = 0x450b2c16f1d584a5;
  local_78 = 0xd2d49d493796c936;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_70 ^ local_78;
        local_78 = local_78 ^ 0x59b9b35b1169a556;
        if (0x6ab716ecfe37e3fd < (longlong)uVar1) break;
        if (uVar1 == 0x97dfb15fc6434d93) {
          local_68 = 1;
          local_60 = (undefined8 *)(param_1 + 0x50);
          local_50 = (longlong *)(param_1 + 0x60);
          local_58 = *(ulonglong *)(param_1 + 0x60);
          local_48 = *(ulonglong *)(param_1 + 0x68);
          local_70 = 0x8463af2c897f9fe;
          if (local_58 < local_48) {
            local_70 = 0x8cca24475c5cd476;
          }
          local_78 = 0xe2767817844eacbc;
          local_79 = param_2;
        }
        else {
          local_70 = local_70 ^ 0x59b9b35b1169a556;
          if (uVar1 == 0xea3042e54cd95542) {
            FUN_18006a970(local_60,local_68);
            local_70 = 0xf22eb8de63324d6c;
            local_78 = 0x9899ae329d05ae92;
          }
        }
      }
      if (uVar1 != 0x6ebc5c50d81278ca) break;
      *local_50 = local_58 + local_68;
      puVar2 = local_60;
      if (0xf < local_48) {
        puVar2 = (undefined8 *)*local_60;
      }
      *(undefined1 *)((longlong)puVar2 + local_58) = local_79;
      *(undefined1 *)((longlong)puVar2 + local_58 + local_68) = 0;
      local_70 = 0x62cb2d41c25c9564;
      local_78 = 0x87c3bad3c6b769a;
    }
    local_70 = local_70 ^ 0x59b9b35b1169a556;
  } while (uVar1 != 0x6ab716ecfe37e3fe);
  return;
}



uint FUN_1801c9f00(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  ulonglong local_170;
  char local_165;
  uint local_164;
  uint local_160;
  byte local_15b;
  byte local_15a;
  byte local_159;
  uint local_158;
  uint local_154;
  byte local_150;
  byte local_14f;
  byte local_14e;
  byte local_14d;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint *local_140;
  uint local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  char *local_120;
  longlong *local_118;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte local_61;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_198;
  local_170 = 0x4d57b71fb60f107b;
  local_178 = 0x75a06d75de626144;
LAB_1801ca020:
  uVar2 = local_170 ^ 0x170eb3c3e8f1ded8;
  uVar1 = local_170 ^ local_178;
  local_178 = local_178 ^ 0x170eb3c3e8f1ded8;
  local_170 = uVar2;
  if ((longlong)uVar1 < -0xe91320cf54fdd40) {
    if ((longlong)uVar1 < -0x475dd3de3e770457) {
      if ((longlong)uVar1 < -0x60ef1c1749fe85bd) {
        if ((longlong)uVar1 < -0x6e51f04b9f25ccc6) {
          if ((longlong)uVar1 < -0x71b250c028681113) {
            if (uVar1 == 0x8339665143359370) {
              local_b4 = local_10c * 0x100 + local_b0;
              *local_c0 = *local_c0 + 1;
              local_c0[1] = local_c0[1] + 1;
              local_170 = 0x9e224761dd59ebb;
              if (*local_120 != '\0') {
                local_170 = 0x225e85dedeace5ad;
              }
              local_178 = 0x60f50fa32bfb8919;
            }
            else if (uVar1 == 0x887ba4c2337d93d8) {
              local_108 = local_138 + local_130;
              local_170 = 0x893ccd18c9f58586;
              local_178 = 0xc66b182ce01cbcad;
            }
          }
          else if (uVar1 == 0x8e4daf3fd797eeed) {
            *local_140 = local_fc;
            local_170 = 0x4ded38187d2b0883;
            local_178 = 0x809c65a400e260f9;
            local_100 = local_fc;
          }
          else if (uVar1 == 0x8f65a972cc7239ef) {
            local_14d = local_159;
            local_90 = (byte *)*local_118;
            local_170 = 0x247b00eb156785c0;
            if (local_90 == (byte *)*local_d8) {
              local_170 = 0xbf06b789f1acd93e;
            }
            local_178 = 0x2a80f101b26283a;
            local_61 = local_14d;
          }
        }
        else if ((longlong)uVar1 < -0x63c8922aced81b2f) {
          if (uVar1 == 0x91ae0fb460da333a) {
            local_14c = *local_140;
            local_170 = 0xddeaaea86cb61718;
            if (local_14c == local_154) {
              local_170 = 0xd8aa5f45c2b86e8d;
            }
            local_178 = 0xd3f35d21d3152e9b;
          }
          else if (uVar1 == 0x972ac5e27d99f897) {
            local_104 = local_144 + local_124;
            local_170 = 0xdf7e7ec30e7c0f03;
            if (local_104 < local_154) {
              local_170 = 0x9b9993e383f61d73;
            }
            local_178 = 0x3706b70ac3630cf7;
          }
        }
        else if (uVar1 == 0x9c376dd53127e4d1) {
          local_b8 = local_110 * 0x10 + local_b4;
          *local_c0 = *local_c0 + 1;
          local_c0[1] = local_c0[1] + 1;
          local_170 = 0x97330b91c8347f98;
          if (*local_120 != '\0') {
            local_170 = 0x570436cdad484ee;
          }
          local_178 = 0xabb4765879d24444;
        }
        else if (uVar1 == 0x9ca606149eab5719) {
          *local_140 = local_164;
          local_170 = 0x22b9e3eb22e1ba34;
          local_178 = 0xfe15d045f20869d6;
          local_160 = local_164;
        }
      }
      else if ((longlong)uVar1 < -0x56706fafafc80a14) {
        if ((longlong)uVar1 < -0x5a548b44d1d0cd20) {
          if (uVar1 == 0x9f10e3e8b6017a43) {
            local_159 = *local_80;
            *param_1 = local_80 + 1;
            *local_140 = (uint)local_159;
            local_170 = 0x992824b2bd3366c4;
            local_178 = 0x164d8dc071415f2b;
          }
          else if (uVar1 == 0xa1d756c75c3c7c01) {
            local_110 = local_148 + local_124;
            local_170 = 0xb70ba75bcecbc03b;
            if (local_110 < local_154) {
              local_170 = 0xff8ae6f02278ee43;
            }
            local_178 = 0x63bd8b25135f0a92;
          }
        }
        else if (uVar1 == 0xa5ab74bb2e2f32e0) {
          local_fc = (uint)*local_88;
          *param_1 = local_88 + 1;
          local_170 = 0x18bb9546520590ad;
          local_178 = 0x96f63a7985927e40;
        }
        else if (uVar1 == 0xa8194407749fa6d7) {
          *local_120 = local_165;
          local_170 = 0x9c3b2dacfde76a05;
          local_178 = 0x135e84de319553ea;
          local_159 = (byte)local_144;
        }
      }
      else if ((longlong)uVar1 < -0x5360db16bf6aee7c) {
        if (uVar1 == 0xa98f90505037f5ec) {
          local_148 = *local_140;
          local_170 = 0xf422fd32320783f9;
          if (local_148 == local_154) {
            local_170 = 0x97dfe66f1d66c1da;
          }
          local_178 = 0x55f5abf56e3bfff8;
        }
        else if (uVar1 == 0xab9b2c38d2200879) {
          local_108 = local_138 + local_124;
          local_170 = 0xd3d0c0d7d4249a1c;
          if (local_108 < local_154) {
            local_170 = 0x4e1d5a65237e2c84;
          }
          local_178 = 0x14a8f510a9715af;
        }
      }
      else if (uVar1 == 0xac9f24e940951184) {
        local_b0 = local_104 << 0xc;
        *local_c0 = *local_c0 + 1;
        local_c0[1] = local_c0[1] + 1;
        local_170 = 0xc1e2d33e18a5a22d;
        if (*local_120 != '\0') {
          local_170 = 0xad1287b5be0a6092;
        }
        local_178 = 0x50bc3b2ca95c645;
      }
      else if (uVar1 == 0xaec43534a306c0aa) {
        *local_120 = local_165;
        local_15b = (byte)local_148;
        local_170 = 0xf284ea28d50bb86e;
        local_178 = 0x3ea27dbdfbb9aae;
      }
      goto LAB_1801ca020;
    }
    if (-0x2b49d381226b3558 < (longlong)uVar1) {
      if ((longlong)uVar1 < -0x2353cc512f162c1e) {
        if ((longlong)uVar1 < -0x275bb7c64c0a5bea) {
          if (uVar1 == 0xd4b62c7edd94caa9) {
            local_170 = 0x2cded4200ccb5d1;
            if (local_148 + local_128 < local_158) {
              local_170 = 0xfa58e9781477bf0b;
            }
            local_178 = 0xc1c6299b2fc05b08;
          }
          else if (uVar1 == 0xd898e5dc613779d0) {
            local_10c = local_14c + local_134;
            local_170 = 0xeef148acea53ef06;
            local_178 = 0x6dc82efda9667c76;
          }
        }
        else {
          if (uVar1 == 0xd8a44839b3f5a416) {
            local_170 = 0x7871929d9217ac97;
            if (local_14c + local_12c < local_158) {
              local_170 = 0xa88a957ff763bef7;
            }
            local_178 = 0xa4dda13342fe7f75;
            goto LAB_1801cb7a5;
          }
          if (uVar1 == 0xdc56b19a29776b6c) {
            FUN_18009fb00(local_d0,local_a8,&local_61);
            local_170 = 0x5617507d42287e74;
            local_178 = 0x2990add75e0c445b;
          }
        }
      }
      else if ((longlong)uVar1 < -0x112fd8139c51c5ac) {
        if (uVar1 == 0xe878c9c9cd1f03f4) {
          local_170 = 0xce7bfcc52d724c83;
          if (local_144 + local_128 < local_158) {
            local_170 = 0xc8a66dc4dbed51b1;
          }
          local_178 = 0xa607e0f538ecf264;
        }
        else if (uVar1 == 0xdcac33aed0e9d3e2) {
          if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_198)) {
          }
          return local_160;
        }
      }
      else if (uVar1 == 0xeed027ec63ae3a54) {
        local_104 = local_144 + local_130;
        local_170 = 0x63ce4f892d213780;
        local_178 = 0xcf516b606db42604;
      }
      else if (uVar1 == 0xeefd5a5c0c7510fa) {
        local_150 = (byte)local_ac;
        local_61 = (byte)local_ac;
        local_a0 = (byte *)*local_118;
        local_170 = 0xc77479f1f678b67e;
        if (local_a0 == (byte *)*local_d8) {
          local_170 = 0xd28ae6690dd32d0f;
        }
        local_178 = 0x85447ddf2c05b12f;
      }
      goto LAB_1801ca020;
    }
    if ((longlong)uVar1 < -0x3b16ef732dcf9b98) {
      if ((longlong)uVar1 < -0x3dd5b2658ca2c1de) {
        if (uVar1 == 0xb8a22c21c188fba9) {
          local_144 = *local_140;
          local_170 = 0x277aaf64674c7b3c;
          if (local_144 == local_154) {
            local_170 = 0xe7090507513144b1;
          }
          local_178 = 0xb0506a861ad583ab;
        }
        else if (uVar1 == 0xbdaeb899ea8af104) {
          FUN_18009fb00(local_d0,local_90,&local_61);
          local_170 = 0xf4c02fe29c22be8e;
          local_178 = 0x656e2056fcf88db4;
        }
        goto LAB_1801ca020;
      }
      if (uVar1 == 0xc22a4d9a735d3e22) {
        *local_c8 = *local_c8 + local_f8;
        *local_e8 = local_f0;
        local_170 = 0x625c1f950b46de2e;
        local_178 = 0xbef02c3bdbaf0dcc;
        local_160 = local_164;
        goto LAB_1801ca020;
      }
      if (uVar1 != 0xc30bc4d92f0ceed9) goto LAB_1801ca020;
      local_170 = 0x9756905c6e8d3bbe;
      if (local_148 + local_12c < local_158) {
        local_170 = 0x558706131773b3a5;
      }
      local_178 = 0x4bfaa3f2be64e85c;
    }
    else {
      if ((longlong)uVar1 < -0x328ea24382369786) {
        if (uVar1 == 0xc4e9108cd2306468) {
          local_80 = (byte *)*param_1;
          local_170 = 0x146a2a318c3a4582;
          if (local_80 == (byte *)*local_e0) {
            local_170 = 0xfdac27ab19d7ee91;
          }
          local_178 = 0x8b7ac9d93a3b3fc1;
        }
        else if (uVar1 == 0xc73969455af38b0e) {
          *local_98 = local_14e;
          *local_118 = *local_118 + 1;
          local_170 = 0xf0f90da4621c1b9a;
          local_178 = 0x59769df4322bee76;
        }
        goto LAB_1801ca020;
      }
      if (uVar1 != 0xcd715dbc7dc9687a) {
        if (uVar1 == 0xd29a4f86deb38fb3) {
          local_170 = 0xa09e705a22e90874;
          if (local_138 + local_128 < local_158) {
            local_170 = 0x103a05f5e00e840b;
          }
          local_178 = 0x528f6dfbd1fe8201;
        }
        goto LAB_1801ca020;
      }
      local_ac = local_100;
      local_170 = 0xdf4f88be42c9ed94;
      if (local_100 == local_164) {
        local_170 = 0xed1ee14c9e552e8c;
      }
      local_178 = 0x31b2d2e24ebcfd6e;
    }
  }
  else {
    if (0x3f6342dc8e16f064 < (longlong)uVar1) {
      if ((longlong)uVar1 < 0x57ce9bb621d69c20) {
        if ((longlong)uVar1 < 0x42b5680e31f0060a) {
          if ((longlong)uVar1 < 0x4230042eda7d0751) {
            if (uVar1 == 0x3f6342dc8e16f065) {
              *local_120 = local_165;
              local_100 = *local_140;
              local_170 = 0xa230da2735a36159;
              local_178 = 0x6f41879b486a0923;
            }
            else if (uVar1 == 0x3f716ea7e68cf3b1) {
              local_170 = 0xb4c147a2ed7f56d7;
              if (local_14c + local_128 < local_158) {
                local_170 = 0xb4fdea473fbd8b11;
              }
              local_178 = 0x6c650f9b5e8af2c1;
            }
          }
          else if (uVar1 == 0x4230042eda7d0751) {
            *local_a0 = local_150;
            *local_118 = *local_118 + 1;
            local_170 = 0x7f97194fbf73bc7;
            local_178 = 0xbf5b5db53a7fc06e;
          }
          else if (uVar1 == 0x42ab8a7df5576cb4) {
            *local_120 = local_165;
            local_15a = (byte)local_14c;
            local_170 = 0xe3cee4c68a1c7635;
            local_178 = 0xdddedf818608f6d7;
          }
        }
        else if ((longlong)uVar1 < 0x4f57d53429e9392b) {
          if (uVar1 == 0x42b5680e31f0060a) {
            local_108 = local_138 + local_134;
            local_170 = 0x6fe5cb0aa979ba6;
            local_178 = 0x49a98984837ea28d;
          }
          else if (uVar1 == 0x4a2f017385204de6) {
            *local_c8 = *local_c8 + local_f8;
            *local_e8 = local_f0;
            local_170 = 0x7c0053164caa5543;
            local_178 = 0xa0ac60b89c4386a1;
            local_160 = local_164;
          }
        }
        else if (uVar1 == 0x4f57d53429e9392b) {
          local_160 = local_108 + local_b8;
          local_170 = 0x18476d8723b2bb9c;
          local_178 = 0xc4eb5e29f35b687e;
        }
        else if (uVar1 == 0x57596f814be4c71a) {
          *local_c8 = *local_c8 + local_f8;
          *local_e8 = local_f0;
          local_170 = 0x9fd9fb76be7963f5;
          local_178 = 0x4375c8d86e90b017;
          local_160 = local_164;
        }
      }
      else if ((longlong)uVar1 < 0x69172bd5362e17a2) {
        if ((longlong)uVar1 < 0x6850866bf50e8ad7) {
          if (uVar1 == 0x57ce9bb621d69c20) {
            FUN_18009fb00(local_d0,local_a0,&local_61);
            local_170 = 0xba19e582dd999992;
            local_178 = 0x2bbc9a31c11623b;
          }
          else if (uVar1 == 0x61c3919e2e8a0802) {
            local_88 = (byte *)*param_1;
            local_170 = 0xa887243b257075cd;
            if (local_88 == (byte *)*local_e0) {
              local_170 = 0x8361ffbfdcc8a9c0;
            }
            local_178 = 0xd2c50800b5f472d;
            local_fc = local_164;
          }
        }
        else if (uVar1 == 0x6850866bf50e8ad7) {
          local_15b = *local_70;
          *param_1 = local_70 + 1;
          *local_140 = (uint)local_15b;
          local_170 = 0x3a6edcd93f821cb7;
          local_178 = 0xcb00112a35323e77;
        }
        else if (uVar1 == 0x687c1c30159ebee7) {
          local_170 = 0xc142b6c121642a20;
          if (local_144 + local_12c < local_158) {
            local_170 = 0xf33ea2839223c396;
          }
          local_178 = 0x1dee856ff18df9c2;
          goto LAB_1801cb7a5;
        }
      }
      else if ((longlong)uVar1 < 0x76d6ee7223ecd150) {
        if (uVar1 == 0x69172bd5362e17a2) {
          local_78 = (byte *)*param_1;
          local_170 = 0x355a4d85ecaa314a;
          if (local_78 == (byte *)*local_e0) {
            local_170 = 0xb1dbfbd30bb39ef7;
          }
          local_178 = 0x2d7dfdc79518c9ee;
        }
        else if (uVar1 == 0x6ea18d31e301a3d5) {
          local_104 = local_144 + local_134;
          local_170 = 0x5bc2d17e9bb21957;
          local_178 = 0xf75df597db2708d3;
        }
      }
      else if (uVar1 == 0x76d6ee7223ecd150) {
        *local_140 = local_164;
        local_170 = 0x6edeb308eabbe016;
        local_178 = 0xb27280a63a5233f4;
        local_160 = local_164;
      }
      else if (uVar1 == 0x7f87fdaa1c243a2f) {
        local_138 = *local_140;
        local_170 = 0xa4e11dda592dfd7a;
        if (local_138 == local_154) {
          local_170 = 0x455530910e2db8e5;
        }
        local_178 = 0xf7a31e28b0df503;
      }
      goto LAB_1801ca020;
    }
    if (0x21bf41a589fd704a < (longlong)uVar1) {
      if ((longlong)uVar1 < 0x38f7da6a686d713f) {
        if ((longlong)uVar1 < 0x241d9458401b9a43) {
          if (uVar1 == 0x21bf41a589fd704b) {
            *local_a8 = local_14f;
            *local_118 = *local_118 + 1;
            local_170 = 0xcffbc4803dc273bf;
            local_178 = 0xb07c392a21e64990;
          }
          else if (uVar1 == 0x2417621cac71ca81) {
            *local_140 = local_164;
            local_170 = 0xbfcbce4120bf6b2e;
            local_178 = 0x6367fdeff056b8cc;
            local_160 = local_164;
          }
        }
        else if (uVar1 == 0x241d9458401b9a43) {
          FUN_18009fb00(local_d0,local_98,&local_61);
          local_170 = 0xec14539d48165887;
          local_178 = 0x459bc3cd1821ad6b;
        }
        else if (uVar1 == 0x26d30ffb0e41adfa) {
          *local_90 = local_14d;
          *local_118 = *local_118 + 1;
          local_170 = 0x34577026b4e8ae00;
          local_178 = 0xa5f97f92d4329d3a;
        }
      }
      else if ((longlong)uVar1 < 0x3c877dc9b1e63bdc) {
        if (uVar1 == 0x38f7da6a686d713f) {
          local_165 = '\0';
          local_124 = -0x30;
          local_128 = -0x41;
          local_f0 = 0;
          local_154 = 10;
          local_12c = -0x61;
          local_130 = -0x57;
          local_f8 = 1;
          local_158 = 6;
          local_164 = 0xffffffff;
          local_134 = -0x37;
          local_c0 = param_1 + 4;
          local_e8 = param_1 + 5;
          local_120 = (char *)(param_1 + 3);
          local_e0 = param_1 + 1;
          local_140 = (uint *)((longlong)param_1 + 0x14);
          local_118 = param_1 + 8;
          local_d8 = param_1 + 9;
          local_d0 = param_1 + 7;
          local_c8 = param_1 + 6;
          param_1[4] = param_1[4] + 1;
          param_1[5] = param_1[5] + 1;
          local_170 = 0xd5413389fce11af8;
          if (*local_120 != '\0') {
            local_170 = 0x8be1e0cb5c7de29f;
          }
          local_178 = 0xb482a217d26b12fa;
        }
        else if (uVar1 == 0x3b9ec0e33bb7e403) {
          local_110 = local_148 + local_134;
          local_170 = 0x884ee04015a9ec6f;
          local_178 = 0x14798d95248e08be;
        }
      }
      else if (uVar1 == 0x3c877dc9b1e63bdc) {
        local_70 = (byte *)*param_1;
        local_170 = 0xd334c91c28aef125;
        if (local_70 == (byte *)*local_e0) {
          local_170 = 0x9f732d6b71d1b173;
        }
        local_178 = 0xbb644f77dda07bf2;
      }
      else if (uVar1 == 0x3e103b470c1480e2) {
        local_14e = local_15a;
        local_61 = local_15a;
        local_98 = (byte *)*local_118;
        local_170 = 0xeb7a4356ea3771f2;
        if (local_98 == (byte *)*local_d8) {
          local_170 = 0x85ebe4bf0df60bf;
        }
        local_178 = 0x2c432a13b0c4fafc;
      }
      goto LAB_1801ca020;
    }
    if (0xc57344cb59dc181 < (longlong)uVar1) {
      if ((longlong)uVar1 < 0x1827b04279b2f8a4) {
        if (uVar1 == 0xc57344cb59dc182) {
          local_10c = local_14c + local_130;
          local_170 = 0x9dcf193074c12354;
          local_178 = 0x1ef67f6137f4b024;
        }
        else if (uVar1 == 0xe19f389bfa33983) {
          local_10c = local_14c + local_124;
          local_170 = 0x6a3272df091f7abc;
          if (local_10c < local_154) {
            local_170 = 0xd67a7a29aca61a7d;
          }
          local_178 = 0x55431c78ef93890d;
        }
      }
      else if (uVar1 == 0x1827b04279b2f8a4) {
        local_15a = *local_78;
        *param_1 = local_78 + 1;
        *local_140 = (uint)local_15a;
        local_170 = 0xcc776bfc19e45fda;
        local_178 = 0xf26750bb15f0df38;
      }
      else if (uVar1 == 0x1e7da5e1a9175bf9) {
        local_110 = local_148 + local_130;
        local_170 = 0xf27c328da998a88a;
        local_178 = 0x6e4b5f5898bf4c5b;
      }
      goto LAB_1801ca020;
    }
    if (uVar1 == 0xf16ecdf30ab022c0) {
      local_14f = local_15b;
      local_61 = local_15b;
      local_a8 = (byte *)*local_118;
      local_170 = 0x4e09c2076d05ad10;
      if (local_a8 == (byte *)*local_d8) {
        local_170 = 0xb3e03238cd8fb637;
      }
      local_178 = 0x6fb683a2e4f8dd5b;
      goto LAB_1801ca020;
    }
    if (uVar1 != 0xf2111da1f3178a75) {
      if (uVar1 == 0xb59026411ad4016) {
        *local_c8 = *local_c8 + local_f8;
        *local_e8 = local_f0;
        local_170 = 0x3d6a75897fae0b39;
        local_178 = 0xe1c64627af47d8db;
        local_160 = local_164;
      }
      goto LAB_1801ca020;
    }
    local_170 = 0x6a78d647b1f58399;
    if (local_138 + local_12c < local_158) {
      local_170 = 0x3eaf412b5261c3a3;
    }
    local_178 = 0xb6d4e5e9611c507b;
  }
LAB_1801cb7a5:
  local_160 = local_164;
  goto LAB_1801ca020;
}



undefined1 FUN_1801cb810(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_1a8 [32];
  undefined *local_188;
  char local_172;
  undefined1 local_171;
  ulonglong local_170;
  ulonglong local_168;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  uint local_158;
  uint local_154;
  undefined8 *local_150;
  longlong local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  undefined8 *local_130;
  uint *local_128;
  ulonglong *local_120;
  int *local_118;
  uint local_10c;
  ulonglong local_108;
  ulonglong local_100;
  char *local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  int *local_d8;
  undefined8 *local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  ulonglong local_88;
  int *local_80;
  undefined8 *local_78;
  byte *local_70;
  undefined1 local_61;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_1a8;
  local_168 = 0xe34b2d2748e75ec8;
  local_170 = 0xd415bc4b1be3017;
  local_150 = param_1;
  local_d0 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_168 ^ 0x9bbb6c55a59c9c0f;
              uVar1 = local_168 ^ local_170;
              local_170 = local_170 ^ 0x9bbb6c55a59c9c0f;
              local_168 = uVar3;
              if (0x8fef102c21c2cc2 < (longlong)uVar1) break;
              if ((longlong)uVar1 < -0x16a71983f491bd39) {
                if ((longlong)uVar1 < -0x3bd21fd732e50606) {
                  if (uVar1 == 0x88317a1b7f11f700) {
                    FUN_18006a970(local_130,local_148);
                    local_168 = 0xe48d7e0ebf9fc588;
                    local_170 = 0xe2451abf3adce15d;
                  }
                  else if (uVar1 == 0x9ff44fb38118defc) {
                    *local_e8 = local_159;
                    *local_f0 = *local_f0 + 1;
                    local_168 = 0x3ce0f23634bb46fe;
                    local_170 = 0x2e6c02485c6fd12f;
                  }
                  else if (uVar1 == 0xbad594fdb353c56f) {
                    FUN_18006a970(local_130,local_148);
                    local_168 = 0x594dd8470361d652;
                    local_170 = 0x1ad67fee987680dd;
                  }
                }
                else if (uVar1 == 0xc42de028cd1af9fa) {
                  local_15a = (undefined1)local_134;
                  local_e0 = *local_120;
                  local_88 = *local_c8;
                  local_168 = 0x6644c29310438d06;
                  if (local_e0 < local_88) {
                    local_168 = 0x3336cfec280bfbd;
                  }
                  local_170 = 0xdc91566ea3104869;
                }
                else if (uVar1 == 0xc7ce9116389137ed) {
                  local_70 = (byte *)*local_150;
                  local_168 = 0x7428e1a871965078;
                  if (local_70 == (byte *)*local_a8) {
                    local_168 = 0xe0bf539792877acf;
                  }
                  local_170 = 0xf730b2d170c66a0;
                  local_13c = local_158;
                }
                else if (uVar1 == 0xdfa23a906190f7d4) {
                  *local_120 = local_e0 + local_148;
                  puVar2 = local_130;
                  if (local_108 < local_88) {
                    puVar2 = (undefined8 *)*local_130;
                  }
                  *(undefined1 *)((longlong)puVar2 + local_e0) = local_15a;
                  *(char *)((longlong)puVar2 + local_e0 + local_148) = local_172;
                  local_168 = 0xbdddf3cdb273096c;
                  local_170 = 0xfe46546429645fe3;
                }
              }
              else if ((longlong)uVar1 < -0x1033a7457a74e391) {
                if (uVar1 == 0xe958e67c0b6e42c7) {
                  FUN_18009fb00(local_98,local_e8,&local_61);
                  local_168 = 0x2350a07de60a3ccb;
                  local_170 = 0x31dc50038edeab1a;
                }
                else if (uVar1 == 0xeb7c42a6a4663507) {
                  local_118 = local_d8;
                  *local_b8 = *local_b8 + 1;
                  local_b8[1] = local_b8[1] + 1;
                  local_168 = 0x876755a417af4304;
                  if (*local_f8 != '\0') {
                    local_168 = 0x8957dbcedf4b113;
                  }
                  local_170 = 0x40a9c4b22f3e74e9;
                }
                else if (uVar1 == 0xee0a76e3f9596edf) {
                  local_172 = '\0';
                  local_140 = 10;
                  local_108 = 0xf;
                  local_148 = 1;
                  local_158 = 0xffffffff;
                  local_128 = (uint *)((longlong)local_150 + 0x14);
                  local_15b = *(undefined1 *)((longlong)local_150 + 0x14);
                  local_130 = local_150 + 10;
                  local_120 = local_150 + 0xc;
                  local_100 = local_150[0xc];
                  local_c8 = local_150 + 0xd;
                  local_c0 = local_150[0xd];
                  local_168 = 0x36af767183a3a95e;
                  if (local_100 < local_c0) {
                    local_168 = 0x99d775f990b62589;
                  }
                  local_170 = 0xbe9e0c6afcb25e5e;
                }
              }
              else if (uVar1 == 0xefcc58ba858b1c6f) {
                *local_128 = local_13c;
                local_168 = 0xd20d5af17c345d2d;
                local_170 = 0x89b84fbbeda78403;
                local_138 = local_13c;
              }
              else if (uVar1 == 0xf0b0858b903f94d5) {
                local_b8 = local_150 + 4;
                local_b0 = local_150 + 5;
                local_f8 = (char *)(local_150 + 3);
                local_a8 = local_150 + 1;
                local_f0 = local_150 + 8;
                local_a0 = local_150 + 9;
                local_98 = local_150 + 7;
                local_90 = local_150 + 6;
                local_168 = 0x8fb6b5ba01c71e0f;
                local_170 = 0x64caf71ca5a12b08;
                local_d8 = local_80;
              }
              else if (uVar1 == 0x6c864b1854324d5) {
                local_80 = (int *)*local_d0;
                local_78 = local_d0 + 1;
                local_168 = 0xf426272a15550b2a;
                if (local_80 == (int *)local_d0[1]) {
                  local_168 = 0x5ca9114d51785049;
                }
                local_170 = 0x496a2a1856a9fff;
                local_171 = 1;
              }
            }
            if (0x483cb90ec2cac5f9 < (longlong)uVar1) break;
            if ((longlong)uVar1 < 0x17b5da95b939900f) {
              if (uVar1 == 0x8fef102c21c2cc3) {
                local_168 = 0x5d294f2e7aa22ef1;
                if (local_118[1] < (int)local_134) {
                  local_168 = 0x8eb175930e814704;
                }
                local_170 = 0x9904af06b7b8d70b;
              }
              else if (uVar1 == 0xbaea918bd838279) {
                local_159 = (undefined1)local_10c;
                local_e8 = (undefined1 *)*local_f0;
                local_168 = 0xaf85bf6bc812ae42;
                if (local_e8 == (undefined1 *)*local_a0) {
                  local_168 = 0xd92916a442643279;
                }
                local_170 = 0x3071f0d8490a70be;
                local_61 = local_159;
              }
              else if (uVar1 == 0x128cf07e68d497d1) {
                local_154 = *local_128;
                local_168 = 0x42f2dfdca4d45ee1;
                if (local_154 == local_140) {
                  local_168 = 0x4b6dccf3c52e113f;
                }
                local_170 = 0x38b5c4d3c44be2c9;
              }
            }
            else if (uVar1 == 0x17b5da95b939900f) {
              local_188 = &DAT_1802a8850;
              FUN_1801d1f63(&DAT_1802a8828,&DAT_18029f203,0x11,0x26);
              local_150[0xe] = &DAT_1802a8828;
              local_168 = 0x828f9338a25674dd;
              local_170 = 0xdab020d47644bb6b;
              local_171 = 0;
            }
            else if (uVar1 == 0x274979936c047bd7) {
              *local_120 = local_100 + local_148;
              puVar2 = local_130;
              if (local_108 < local_c0) {
                puVar2 = (undefined8 *)*local_130;
              }
              *(undefined1 *)((longlong)puVar2 + local_100) = local_15b;
              *(char *)((longlong)puVar2 + local_100 + local_148) = local_172;
              local_168 = 0x72a66a12e8ffa553;
              local_170 = 0x746e0ea36dbc8186;
            }
            else if (uVar1 == 0x439ba7a99b17568f) {
              local_d8 = local_118 + 2;
              local_168 = 0x16619361116da1d6;
              if (local_d8 == (int *)*local_78) {
                local_168 = 0xa522622b61195b67;
              }
              local_170 = 0xfd1dd1c7b50b94d1;
              local_171 = 1;
            }
          }
          if ((longlong)uVar1 < 0x73d808200165f3f6) break;
          if (uVar1 == 0x73d808200165f3f6) {
            *local_90 = *local_90 + local_148;
            *local_b0 = 0;
            local_168 = 0x12c4ee2c157fdd7a;
            local_170 = 0x6883f52375e06152;
            local_154 = local_140;
          }
          else if (uVar1 == 0x7a471b0f609fbc28) {
            local_134 = local_154;
            local_168 = 0xdc107b21a77adc7e;
            if ((int)local_154 < *local_118) {
              local_168 = 0xc35b50b6dc5f60b2;
            }
            local_170 = 0xd4ee8a236566f0bd;
          }
          else if (uVar1 == 0x7b5bea85669a36d8) {
            local_13c = (uint)*local_70;
            *local_150 = local_70 + 1;
            local_168 = 0xa36c98f37f4a8a6b;
            local_170 = 0x4ca0c049fac19604;
          }
        }
        if (uVar1 != 0x483cb90ec2cac5fa) break;
        *local_f8 = local_172;
        local_138 = *local_128;
        local_168 = 0xc4eed55a9493faa6;
        local_170 = 0x9f5bc01005002388;
      }
      if (uVar1 != 0x5bb5154a9193d92e) break;
      local_10c = local_138;
      local_168 = 0x5e8a34c15154f1a9;
      if (local_138 == local_158) {
        local_168 = 0x2f6386d68c48cff8;
      }
      local_170 = 0x55249dd9ecd773d0;
      local_154 = local_158;
    }
  } while (uVar1 != 0x583fb3ecd412cfb6);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_1a8)) {
  }
  return local_171;
}



ulonglong FUN_1801cc350(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uintptr_t *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  longlong local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  ulonglong uStack_1e0;
  exception local_1d0;
  exception_vftable *local_138;
  undefined1 local_130 [24];
  undefined4 local_118;
  int local_114;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  uintptr_t local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_90;
  ulonglong local_88;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  ulonglong local_70;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_62 = 1;
  local_1d0.exception_data.offset_0x38._0_4_ = 0x10;
  uVar15 = 4;
  local_61 = 0;
  local_78 = 0x65;
  local_1d0.exception_data._76_4_ = 4;
  local_118 = 0x20;
  local_e0 = 5;
  local_70 = 0;
  uVar16 = 0xfffffffffffffffc;
  local_1d0.exception_data.offset_0x40 = -1;
  local_e8 = 0x1f;
  local_1d0.exception_data.offset_0x38._4_4_ = 10;
  local_108 = 0xe000000000000000;
  local_110 = 0x28;
  local_88 = 0xf;
  local_90 = 1;
  local_114 = 0xc;
  local_7c = 0xffffffff;
  local_100 = 0xfff;
  local_f8 = -8;
  local_74 = 0;
  local_f0 = 0x20;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  lVar8 = param_1 + 0x48;
LAB_1801cc590:
  puVar7 = &local_1d0.exception_data.offset_0x70;
  lVar11 = param_1 + 0x98;
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 < 6) {
    if (iVar3 < 3) {
      if (iVar3 == 2) {
        local_1d0.exception_data.offset_0x70 = CONCAT71(local_1d0.exception_data.offset_0x70._1_7_,local_61);
        FUN_1800b02a0(param_2,&local_1d0,puVar7,0);
      }
      else {
        if (iVar3 != 1) goto LAB_1801cd17f;
        local_1d0.exception_data.offset_0x70 = CONCAT71(local_1d0.exception_data.offset_0x70._1_7_,local_62);
        FUN_1800b02a0(param_2,&local_1d0,puVar7,0);
      }
    }
    else if (iVar3 == 3) {
      local_1d0.exception_data.offset_0x70 = 0;
      FUN_1800b06e0(param_2,&local_1d0,puVar7,0);
    }
    else if (iVar3 == 5) {
      local_1d0.exception_data.offset_0x70 = *(uintptr_t *)(param_1 + 200);
      FUN_1800b13a0(param_2,&local_1d0,puVar7,0);
    }
    else {
      FUN_1800b0f20(param_2,&local_1d0,lVar11,0);
    }
    goto LAB_1801cc8fb;
  }
  if (iVar3 < 9) {
    if (iVar3 == 6) {
      local_1d0.exception_data.offset_0x70 = *(uintptr_t *)(param_1 + 0xc0);
      FUN_1800b0af0(param_2,&local_1d0,puVar7,0);
    }
    else {
      if (iVar3 == 8) {
        cVar2 = FUN_1800a9d00(param_2,local_1d0.exception_data.offset_0x40);
        if (cVar2 != '\0') {
          iVar3 = FUN_1801c2de0(lVar8);
          *(int *)(param_1 + 0x40) = iVar3;
          if (iVar3 == local_1d0.exception_data.offset_0x38._4_4_) {
            cVar2 = FUN_1800aa110(param_2);
LAB_1801cc84f:
            if (cVar2 != '\0') goto LAB_1801cc8fb;
            goto LAB_1801cd3c6;
          }
          uVar9 = local_108;
          if ((longlong)local_70 <= (longlong)uStack_1e0) {
            uVar9 = local_70;
          }
          local_1d0.exception_data.offset_0x0 = uStack_1e0 & local_e8;
          local_1d0.vftablePtr = (exception_vftable *)((uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
          uVar6 = FUN_1800a7a20(&local_1f8,&local_1d0,local_90);
          uVar9 = local_108;
          if ((longlong)local_70 <= (longlong)uVar6) {
            uVar9 = local_70;
          }
          uVar10 = local_e8 & uVar6;
          uVar12 = local_90 + uVar10 >> 3 & uVar15;
          uVar13 = local_90 + uVar10 & local_e8;
          if ((uVar10 != uVar13) || (uVar12 != local_70)) {
            puVar14 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
            uVar5 = local_7c << ((byte)uVar10 & 0x1f);
            if (uVar12 == local_70) {
              uVar5 = local_7c >> ((char)local_118 - (char)uVar13 & 0x1fU) & uVar5;
            }
            else {
              *puVar14 = *puVar14 | uVar5;
              FUN_180207610(puVar14 + 1,CONCAT71((int7)(uVar10 >> 8),0xff));
              if (uVar13 == local_70) goto LAB_1801cc590;
              puVar14 = (uint *)((longlong)puVar14 + uVar12);
              uVar5 = local_7c >> ((char)local_118 - (char)uVar13 & 0x1fU);
            }
            *puVar14 = *puVar14 | uVar5;
          }
          goto LAB_1801cc590;
        }
        goto LAB_1801cd3c6;
      }
      if (ABS((double)*(exception_vftable **)(param_1 + 0xd0)) == INFINITY) {
        local_1d0.exception_data.offset_0x50._0_4_ = CONCAT31(local_1d0.exception_data.offset_0x50._1_3_,0x27);
        FUN_1801cef10(lVar8,local_d8);
        FUN_1801d1f63(&DAT_1802a8960,&DAT_18029f4c1,0x1f,0x1a,&DAT_1802a897c);
        FUN_1800aa8e0(&local_1d0.exception_data.offset_0x70,&DAT_1802a8960,local_d8,
                      &local_1d0.exception_data.offset_0x50);
        FUN_1800aa510(&local_1d0,0x196,&local_1d0.exception_data.offset_0x70,0);
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800aa3e0(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1801ccdec;
      }
      local_1d0.exception_data.offset_0x70 = (uintptr_t)*(exception_vftable **)(param_1 + 0xd0);
      FUN_1800afe70(param_2,&local_1d0,puVar7,0);
    }
LAB_1801cc8fb:
    while( true ) {
      if (uStack_1e0 == local_70) {
        uVar15 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        goto joined_r0x0001801cce22;
      }
      uVar9 = local_108;
      if ((longlong)local_70 <= (longlong)uStack_1e0) {
        uVar9 = local_70;
      }
      uVar10 = local_1d0.exception_data.offset_0x40 + (local_e8 & uStack_1e0);
      uVar6 = local_108;
      if ((local_e8 & uStack_1e0) != local_70) {
        uVar6 = local_70;
      }
      if ((1 << ((byte)uVar10 & 0x1f) &
          *(uint *)(uVar6 + (uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9 +
                            (uVar10 >> ((byte)local_e0 & 0x3f)) * 4)) != local_74) {
        iVar3 = FUN_1801c2de0(lVar8);
        *(int *)(param_1 + 0x40) = iVar3;
        if (iVar3 < 0xd) {
          if (iVar3 == 10) {
            cVar2 = FUN_1800aa110(param_2);
            goto LAB_1801cc9f3;
          }
        }
        else if (iVar3 == 0xd) {
          uVar4 = FUN_1801c2de0(lVar8);
          *(undefined4 *)(param_1 + 0x40) = uVar4;
          goto LAB_1801cc590;
        }
        FUN_1801d1f63(&DAT_1802a89ec,&DAT_18029f59e,0x1c,6,&DAT_1802a89f4,uVar15,uVar16);
        FUN_180057290(local_d8,&DAT_1802a89ec);
        FUN_1801ce5a0(param_1,&local_1d0.exception_data.offset_0x70,local_1d0.exception_data.offset_0x38._4_4_,local_d8)
        ;
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1801ccdec;
      }
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (0xc < iVar3) break;
      if (iVar3 != 0xb) goto LAB_1801ccc68;
      cVar2 = FUN_1800a94d0(param_2);
LAB_1801cc9f3:
      if (cVar2 == '\0') goto LAB_1801cd3c6;
      uVar9 = local_108;
      if ((longlong)local_70 <= (longlong)uStack_1e0) {
        uVar9 = local_70;
      }
      local_1d0.exception_data.offset_0x0 = local_1d0.exception_data.offset_0x40 + (local_e8 & uStack_1e0);
      uVar6 = local_108;
      if ((local_e8 & uStack_1e0) != local_70) {
        uVar6 = local_70;
      }
      local_1d0.vftablePtr =
           (exception_vftable *)
           ((uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9 +
            (local_1d0.exception_data.offset_0x0 >> ((byte)local_e0 & 0x3f)) * 4 + uVar6);
      local_1d0.exception_data.offset_0x0 = local_1d0.exception_data.offset_0x0 & local_e8;
      FUN_1800b17d0(&local_1f8,puVar7);
    }
    if (iVar3 != 0xd) {
LAB_1801ccc68:
      FUN_1801d1f63(&DAT_1802a89f8,&DAT_18029f5d4,0x13,7,&DAT_1802a8a00,uVar15,uVar16);
      FUN_180057290(local_d8,&DAT_1802a89f8);
      FUN_1801ce5a0(param_1,&local_1d0.exception_data.offset_0x70,0xb,local_d8);
      local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
      local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
      local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
      local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
      local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0);
      FUN_1801cef10(lVar8,&local_b8);
      uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
LAB_1801ccdec:
      FUN_180001ef0(&local_b8);
      std::exception::exception(&local_1d0);
      FUN_180001ef0(&local_1d0.exception_data.offset_0x70);
      puVar7 = local_d8;
LAB_1801cce16:
      uVar15 = (ulonglong)uVar5;
      FUN_180001ef0(puVar7);
joined_r0x0001801cce22:
      if (local_1f8 != 0) {
        uVar9 = local_1e8 - local_1f8;
        lVar8 = local_1f8;
        if (local_100 < uVar9) {
          lVar8 = *(longlong *)(local_1f8 + -8);
          if (local_f0 <= (ulonglong)((local_1f8 + local_f8) - lVar8)) {
LAB_1801cd798:
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_74,local_70);
          }
          uVar9 = uVar9 + 0x27;
        }
        thunk_FUN_1801f42e0(lVar8,uVar9);
      }
      return uVar15 & 0xffffffff;
    }
    iVar3 = FUN_1801c2de0(lVar8);
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 != local_1d0.exception_data._76_4_) {
      FUN_1801d1f63(&DAT_1802a8938,&DAT_18029f441,0x19,0xb,&DAT_1802a8944);
      FUN_180057290(local_d8,&DAT_1802a8938);
      FUN_1801ce5a0(param_1,&local_1d0.exception_data.offset_0x70,local_1d0.exception_data._76_4_,local_d8);
      local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
      local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
      local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
      local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
      local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0);
      FUN_1801cef10(lVar8,&local_b8);
      uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
      goto LAB_1801ccdec;
    }
    cVar2 = FUN_1800a98e0(param_2,lVar11);
    if (cVar2 != '\0') {
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_114) {
        FUN_1801d1f63(&DAT_1802a8948,&DAT_18029f477,0x1a,0x11,&DAT_1802a895c);
        FUN_180057290(local_d8,&DAT_1802a8948);
        FUN_1801ce5a0(param_1,&local_1d0.exception_data.offset_0x70,local_114,local_d8);
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1801ccdec;
      }
      uVar4 = FUN_1801c2de0(lVar8);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      goto LAB_1801cc590;
    }
  }
  else {
    if (iVar3 < 0xe) {
      if (iVar3 != 9) {
LAB_1801cd17f:
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = local_e0;
        local_a0 = local_88;
        FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934,uVar15,uVar16);
        local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a8930),DAT_1802a892c);
        FUN_1801ce5a0(param_1,local_d8,(undefined4)local_1d0.exception_data.offset_0x38,&local_b8);
        local_208 = *(undefined8 *)(param_1 + 0x78);
        local_218 = *(undefined4 *)(param_1 + 0x68);
        uStack_214 = *(undefined4 *)(param_1 + 0x6c);
        uStack_210 = *(undefined4 *)(param_1 + 0x70);
        uStack_20c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0.exception_data.offset_0x70,local_78,&local_218,local_d8,0);
        FUN_1801cef10(lVar8,&local_1d0.exception_data.offset_0x50);
        *(undefined1 *)(param_2 + 0x68) = local_62;
        if (*(char *)(param_2 + 0xb0) == '\x01') {
          std::runtime_error::runtime_error((runtime_error *)&local_1d0,(longlong)&local_1d0.exception_data.offset_0x70)
          ;
          FUN_1801dd110((runtime_error *)&local_1d0,&DAT_180253730);
        }
        goto LAB_1801cd263;
      }
      cVar2 = FUN_1800a90c0(param_2,local_1d0.exception_data.offset_0x40);
      if (cVar2 == '\0') goto LAB_1801cd3c6;
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (10 < iVar3) {
        if (iVar3 == 0xb) {
          cVar2 = FUN_1800a94d0(param_2);
          goto LAB_1801cc84f;
        }
LAB_1801ccf99:
        FUN_1801d1f63(&DAT_1802a8938,&DAT_18029f441,0x19,0xb,&DAT_1802a8944);
        FUN_180057290(local_d8,&DAT_1802a8938);
        FUN_1801ce5a0(param_1,&local_1d0.exception_data.offset_0x70,local_1d0.exception_data._76_4_,local_d8);
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1801ccdec;
      }
      if (iVar3 != 4) goto LAB_1801ccf99;
      cVar2 = FUN_1800a98e0(param_2,lVar11);
      if (cVar2 == '\0') goto LAB_1801cd3c6;
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_114) {
        FUN_1801d1f63(&DAT_1802a8948,&DAT_18029f477,0x1a,0x11,&DAT_1802a895c);
        FUN_180057290(local_d8,&DAT_1802a8948);
        FUN_1801ce5a0(param_1,&local_1d0.exception_data.offset_0x70,local_114,local_d8);
        local_1d0.exception_data.offset_0x60 = *(longlong *)(param_1 + 0x78);
        local_1d0.exception_data.offset_0x50._0_4_ = *(undefined4 *)(param_1 + 0x68);
        local_1d0.exception_data.offset_0x50._4_4_ = *(undefined4 *)(param_1 + 0x6c);
        local_1d0.exception_data.offset_0x58._0_4_ = *(undefined4 *)(param_1 + 0x70);
        local_1d0.exception_data.offset_0x58._4_4_ = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1d0,local_78,&local_1d0.exception_data.offset_0x50,&local_1d0.exception_data.offset_0x70,0)
        ;
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800a3920(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1d0);
        goto LAB_1801ccdec;
      }
      uVar9 = local_108;
      if ((longlong)local_70 <= (longlong)uStack_1e0) {
        uVar9 = local_70;
      }
      local_1d0.exception_data.offset_0x0 = uStack_1e0 & local_e8;
      local_1d0.vftablePtr = (exception_vftable *)((uStack_1e0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
      uVar6 = FUN_1800a7a20(&local_1f8,&local_1d0,local_90);
      uVar9 = local_108;
      if ((longlong)local_70 <= (longlong)uVar6) {
        uVar9 = local_70;
      }
      uVar10 = local_e8 & uVar6;
      uVar12 = local_90 + uVar10 >> 3 & uVar15;
      uVar13 = local_90 + uVar10 & local_e8;
      if ((uVar10 != uVar13) || (uVar12 != local_70)) {
        puVar14 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1f8 + uVar9);
        uVar5 = local_7c << ((byte)uVar10 & 0x1f) ^ local_7c;
        if (uVar12 == local_70) {
          uVar5 = local_7c >> ((char)local_118 - (char)uVar13 & 0x1fU) ^ local_7c | uVar5;
        }
        else {
          *puVar14 = *puVar14 & uVar5;
          FUN_180207610(puVar14 + 1,0);
          if (uVar13 == local_70) goto LAB_1801ccbec;
          puVar14 = (uint *)((longlong)puVar14 + uVar12);
          uVar5 = local_7c >> ((char)local_118 - (char)uVar13 & 0x1fU) ^ local_7c;
        }
        *puVar14 = *puVar14 & uVar5;
      }
LAB_1801ccbec:
      uVar4 = FUN_1801c2de0(lVar8);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      goto LAB_1801cc590;
    }
    if (iVar3 == 0xe) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = local_e0;
      local_a0 = local_88;
      FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934,uVar15,uVar16);
      local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a8930),DAT_1802a892c);
      FUN_1801ce5a0(param_1,local_d8,local_74,&local_b8);
      local_208 = *(undefined8 *)(param_1 + 0x78);
      local_218 = *(undefined4 *)(param_1 + 0x68);
      uStack_214 = *(undefined4 *)(param_1 + 0x6c);
      uStack_210 = *(undefined4 *)(param_1 + 0x70);
      uStack_20c = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0.exception_data.offset_0x70,local_78,&local_218,local_d8,0);
      FUN_1801cef10(lVar8,&local_1d0.exception_data.offset_0x50);
      *(undefined1 *)(param_2 + 0x68) = local_62;
      if (*(char *)(param_2 + 0xb0) == '\x01') {
        std::runtime_error::runtime_error((runtime_error *)&local_1d0,(longlong)&local_1d0.exception_data.offset_0x70);
        FUN_1801dd110((runtime_error *)&local_1d0,&DAT_180253730);
      }
    }
    else {
      if (iVar3 != 0xf) goto LAB_1801cd17f;
      plVar1 = (longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == local_90) {
        FUN_1801d1f63(&DAT_1802a8980,&DAT_18029f518,0x10,0x66,&DAT_1802a89e8,uVar15,uVar16);
        FUN_180057290(&local_1d0.exception_data.offset_0x70,&DAT_1802a8980);
        local_a8 = *(undefined8 *)(param_1 + 0x78);
        local_b8 = *plVar1;
        uStack_b0 = *(undefined8 *)(param_1 + 0x70);
        FUN_1800a3a60(&local_1d0,local_78,&local_b8,&local_1d0.exception_data.offset_0x70,0);
        FUN_1801cef10(lVar8,local_d8);
        uVar5 = FUN_1800a3920(param_2,*plVar1,local_d8,&local_1d0);
        FUN_180001ef0(local_d8);
        std::exception::exception(&local_1d0);
        puVar7 = &local_1d0.exception_data.offset_0x70;
        goto LAB_1801cce16;
      }
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = local_e0;
      local_a0 = local_88;
      FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934,uVar15,uVar16);
      local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a8930),DAT_1802a892c);
      FUN_1801ce5a0(param_1,local_d8,(undefined4)local_1d0.exception_data.offset_0x38,&local_b8);
      local_208 = *(undefined8 *)(param_1 + 0x78);
      local_218 = *(undefined4 *)plVar1;
      uStack_214 = *(undefined4 *)(param_1 + 0x6c);
      uStack_210 = *(undefined4 *)(param_1 + 0x70);
      uStack_20c = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1d0.exception_data.offset_0x70,local_78,&local_218,local_d8,0);
      FUN_1801cef10(lVar8,&local_1d0.exception_data.offset_0x50);
      *(undefined1 *)(param_2 + 0x68) = local_62;
      if (*(char *)(param_2 + 0xb0) == '\x01') {
        std::runtime_error::runtime_error((runtime_error *)&local_1d0,(longlong)&local_1d0.exception_data.offset_0x70);
        FUN_1801dd110((runtime_error *)&local_1d0,&DAT_180253730);
      }
    }
LAB_1801cd263:
    if (local_88 < local_1d0.exception_data.offset_0x68) {
      lVar11 = CONCAT44(local_1d0.exception_data.offset_0x50._4_4_,(undefined4)local_1d0.exception_data.offset_0x50);
      uVar15 = local_90 + local_1d0.exception_data.offset_0x68;
      lVar8 = lVar11;
      if (local_100 < uVar15) {
        lVar8 = *(longlong *)(lVar11 + -8);
        if (local_f0 <= (ulonglong)((lVar11 + local_f8) - lVar8)) goto LAB_1801cd798;
        uVar15 = local_1d0.exception_data.offset_0x68 + local_110;
      }
      thunk_FUN_1801f42e0(lVar8,uVar15);
    }
    local_1d0.exception_data.offset_0x70 = (uintptr_t)&PTR_exception_18020e910;
    local_138 = &std::exception::vftable;
    FUN_1801dd238(local_130);
    local_1d0.exception_data.offset_0x70 = (uintptr_t)&std::exception::vftable;
    FUN_1801dd238(&local_1d0.exception_data.offset_0x78);
    if (local_88 < local_c0) {
      lVar11 = CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]);
      uVar15 = local_90 + local_c0;
      lVar8 = lVar11;
      if (local_100 < uVar15) {
        lVar8 = *(longlong *)(lVar11 + -8);
        if (local_f0 <= (ulonglong)((lVar11 + local_f8) - lVar8)) goto LAB_1801cd798;
        uVar15 = local_c0 + local_110;
      }
      thunk_FUN_1801f42e0(lVar8,uVar15);
    }
    local_c8 = local_70;
    local_c0 = local_88;
    local_d8[0]._0_1_ = local_61;
    if (local_88 < local_a0) {
      uVar15 = local_90 + local_a0;
      lVar8 = local_b8;
      if (local_100 < uVar15) {
        lVar8 = *(longlong *)(local_b8 + -8);
        if (local_f0 <= (ulonglong)((local_b8 + local_f8) - lVar8)) goto LAB_1801cd798;
        uVar15 = local_a0 + local_110;
      }
      thunk_FUN_1801f42e0(lVar8,uVar15);
    }
  }
LAB_1801cd3c6:
  uVar15 = 0;
  goto joined_r0x0001801cce22;
}



void Unwind_1801cd7e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801cd830(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801cd880(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801cd8d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801cd920(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801cd970(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801cd9c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801cda10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801cda60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801cdab0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801cdb00(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801cdb50(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801cdba0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801cdbf0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801cdc40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801cdc90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801cdce0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801cdd30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801cdd80(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801cddd0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801cde20(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x100));
  return;
}



void Unwind_1801cde70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801cdec0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801cdf10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801cdf60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801cdfb0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x100));
  return;
}



void Unwind_1801ce000(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801ce050(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xe0);
  return;
}



void Unwind_1801ce0a0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801ce0f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801ce140(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801ce190(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x100));
  return;
}



void Unwind_1801ce1e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801ce230(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801ce280(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801ce2d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801ce320(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801ce370(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801ce3c0(undefined8 param_1,longlong param_2)

{
  std::exception::exception((exception *)(param_2 + 0x88));
  return;
}



void Unwind_1801ce410(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801ce460(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x100);
  return;
}



void Unwind_1801ce4b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801ce500(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1801ce550(undefined8 param_1,longlong param_2)

{
  FUN_1800a7440(param_2 + 0x60);
  return;
}



undefined8 * FUN_1801ce5a0(longlong param_1,undefined8 *param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 ******ppppppuVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined8 local_f0;
  undefined8 *****local_e8 [3];
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined *local_90;
  undefined8 *****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  uint local_58;
  undefined1 local_51;
  ulonglong local_50;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_b4 = 0x11;
  local_41 = 0;
  local_68 = 0;
  local_c8 = 0xd;
  local_b0 = 0x28;
  local_50 = 0xf;
  local_a8 = 1;
  local_a0 = 0xfff;
  local_98 = -8;
  local_58 = 0;
  local_c0 = 2;
  local_90 = (undefined *)0x20;
  param_2[1] = 0;
  param_2[2] = 0xd;
  param_2[3] = 0xf;
  FUN_1801d1f63(&DAT_1802a8a54,&DAT_18029fb64,0x11,0xe,&DAT_1802a8a64);
  *(ulonglong *)((longlong)param_2 + 5) = CONCAT53(uRam00000001802a8a5c,DAT_1802a8a54._5_3_);
  *param_2 = CONCAT35(DAT_1802a8a54._5_3_,(undefined5)DAT_1802a8a54);
  lVar5 = local_c8;
  uVar7 = local_50;
  local_60 = param_2;
  if (*(ulonglong *)(param_4 + 0x10) != local_68) {
    local_e8[0] = (undefined8 *****)CONCAT71(local_e8[0]._1_7_,0x20);
    local_88 = (undefined8 ******)0x0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = local_50;
    if (local_50 < *(ulonglong *)(param_4 + 0x10) + local_50) {
      FUN_180002240(&local_88);
      local_78 = local_68;
    }
    FUN_1801d1f63(&DAT_1802a8a68,&DAT_18029fba1,0x1b,0xf,&DAT_1802a8a78);
    FUN_1800b4b50(&local_88,&DAT_1802a8a68,param_4,local_e8);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      param_2 = local_60;
      if (local_50 < local_70) {
LAB_1801ce82d:
        param_2 = local_60;
        uVar7 = local_a8 + local_70;
        ppppppuVar9 = (undefined8 ******)local_88;
        if (local_a0 < uVar7) {
          ppppppuVar9 = (undefined8 ******)local_88[-1];
          if (local_90 <= (undefined *)((longlong)local_88 + (local_98 - (longlong)ppppppuVar9))) goto LAB_1801ced2a;
          uVar7 = local_70 + local_b0;
        }
        thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      param_2 = local_60;
      if (local_50 < local_70) goto LAB_1801ce82d;
    }
    lVar5 = param_2[2];
    uVar7 = param_2[3];
  }
  uVar3 = local_c0;
  if (uVar7 - lVar5 < local_c0) {
    FUN_1801d1f63(&DAT_1802a8a7c,&DAT_18029fbe3,0x17,3,&DAT_1802a8a80);
    FUN_180066dd0(param_2,uVar3);
  }
  else {
    param_2[2] = local_c0 + lVar5;
    if (local_50 < uVar7) {
      param_2 = (undefined8 *)*param_2;
    }
    *(undefined2 *)((longlong)param_2 + lVar5) = 0x202d;
    *(undefined1 *)((longlong)param_2 + local_c0 + lVar5) = local_41;
  }
  uVar4 = local_b4;
  uVar2 = *(uint *)(param_1 + 0x40);
  if (uVar2 == 0xe) {
    local_51 = 0x27;
    FUN_1801cef10(param_1 + 0x48,local_e8);
    local_f0 = *(undefined8 *)(param_1 + 0xb8);
    FUN_1801d1f63(&DAT_1802a8a84,&DAT_18029fc15,0x14,0xf,&DAT_1802a8a94);
    FUN_1800b4840(&local_88,&local_f0,&DAT_1802a8a84,local_e8,&local_51);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      if (local_50 < local_70) {
LAB_1801ceb34:
        uVar7 = local_a8 + local_70;
        ppppppuVar9 = (undefined8 ******)local_88;
        if (local_a0 < uVar7) {
          ppppppuVar9 = (undefined8 ******)local_88[-1];
          if (local_90 <= (undefined *)((longlong)local_88 + (local_98 - (longlong)ppppppuVar9))) goto LAB_1801ced2a;
          uVar7 = local_70 + local_b0;
        }
        thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      if (local_50 < local_70) goto LAB_1801ceb34;
    }
    local_78 = local_68;
    local_70 = local_50;
    local_88 = (undefined8 *****)CONCAT71(local_88._1_7_,local_41);
    if (local_50 < local_d0) {
      uVar7 = local_a8 + local_d0;
      ppppppuVar6 = (undefined8 ******)local_e8[0];
      ppppppuVar9 = (undefined8 ******)local_e8[0];
      if (local_a0 < uVar7) {
LAB_1801ceb9b:
        ppppppuVar9 = (undefined8 ******)ppppppuVar6[-1];
        if (local_90 <= (undefined *)((longlong)ppppppuVar6 + (local_98 - (longlong)ppppppuVar9))) goto LAB_1801ced2a;
        uVar7 = local_d0 + local_b0;
      }
LAB_1801cebba:
      thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
    }
  }
  else {
    ppppppuVar9 = (undefined8 ******)&DAT_1802a8ba4;
    FUN_1801d1f63(&DAT_1802a8ba4,&DAT_1802a0043,0x16,0xe,&DAT_1802a8bb4);
    if (uVar2 < uVar4) {
      FUN_1801d24f0(&DAT_1802a8c00);
      ppppppuVar9 = *(undefined8 *******)(&DAT_1802a8c00 + (ulonglong)uVar2 * 8);
    }
    local_e8[0] = ppppppuVar9;
    FUN_1801d1f63(&DAT_1802a8a98,&DAT_18029fc51,0x11,0xc,&DAT_1802a8aa4);
    FUN_1800b49b0(&local_88,&DAT_1802a8a98,local_e8);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      if (local_50 < local_70) {
LAB_1801ceae9:
        uVar7 = local_a8 + local_70;
        local_d0 = local_70;
        ppppppuVar6 = (undefined8 ******)local_88;
        ppppppuVar9 = (undefined8 ******)local_88;
        if (local_a0 < uVar7) goto LAB_1801ceb9b;
        goto LAB_1801cebba;
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      if (local_50 < local_70) goto LAB_1801ceae9;
    }
  }
  uVar2 = local_b4;
  if (param_3 != local_58) {
    ppppppuVar9 = (undefined8 ******)&DAT_1802a8ba4;
    FUN_1801d1f63(&DAT_1802a8ba4,&DAT_1802a0043,0x16,0xe,&DAT_1802a8bb4);
    if (param_3 < uVar2) {
      FUN_1801d2930(&DAT_1802a8c90);
      ppppppuVar9 = *(undefined8 *******)(&DAT_1802a8c90 + (ulonglong)(param_3 - 1) * 8);
    }
    local_e8[0] = ppppppuVar9;
    FUN_1801d1f63(&DAT_1802a8aa8,&DAT_18029fc86,0x1a,0xc,&DAT_1802a8ab4);
    FUN_1800b49b0(&local_88,&DAT_1802a8aa8,local_e8);
    ppppppuVar9 = &local_88;
    if (local_50 < local_70) {
      ppppppuVar9 = (undefined8 ******)local_88;
    }
    lVar5 = local_60[2];
    if ((ulonglong)(local_60[3] - lVar5) < local_78) {
      FUN_180066dd0(local_60,local_78,local_78,ppppppuVar9,local_78);
      if (local_70 <= local_50) {
        return local_60;
      }
    }
    else {
      lVar1 = lVar5 + local_78;
      local_60[2] = lVar1;
      puVar8 = local_60;
      if (local_50 < (ulonglong)local_60[3]) {
        puVar8 = (undefined8 *)*local_60;
      }
      FUN_1802079d0(lVar5 + (longlong)puVar8,ppppppuVar9);
      *(undefined1 *)((longlong)puVar8 + lVar1) = local_41;
      if (local_70 <= local_50) {
        return local_60;
      }
    }
    uVar7 = local_a8 + local_70;
    ppppppuVar9 = (undefined8 ******)local_88;
    if (local_a0 < uVar7) {
      ppppppuVar9 = (undefined8 ******)local_88[-1];
      if (local_90 <= (undefined *)((longlong)local_88 + (local_98 - (longlong)ppppppuVar9))) {
LAB_1801ced2a:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_58,local_68);
      }
      uVar7 = local_70 + local_b0;
    }
    thunk_FUN_1801f42e0(ppppppuVar9,uVar7);
  }
  return local_60;
}



void Unwind_1801ced50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1801ced90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_1801cedd0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xb8));
  return;
}



void Unwind_1801cee10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1801cee50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1801cee90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1801ceed0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



undefined8 * FUN_1801cef10(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char local_78 [16];
  longlong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_49 = 0;
  local_60 = 0xf;
  local_68 = 1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  pbVar7 = *(byte **)(param_1 + 0x38);
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar7 != pbVar2) {
    local_58 = param_2;
    do {
      bVar1 = *pbVar7;
      if (bVar1 < 0x20) {
        local_78[8] = 0;
        local_78[0] = '\0';
        local_78[1] = '\0';
        local_78[2] = '\0';
        local_78[3] = '\0';
        local_78[4] = '\0';
        local_78[5] = '\0';
        local_78[6] = '\0';
        local_78[7] = '\0';
        FUN_1801d1f63(&DAT_1802a8bb8,&DAT_1802a0086,0x18,9,&DAT_1802a8bc4);
        FUN_180096a50(local_78,9,&DAT_1802a8bb8,bVar1);
        sVar4 = strlen(local_78);
        lVar3 = local_58[2];
        uVar6 = local_58[3] - lVar3;
        if (uVar6 < sVar4) {
          FUN_180066dd0(local_58,sVar4,uVar6,local_78,sVar4);
        }
        else {
          local_58[2] = sVar4 + lVar3;
          puVar5 = local_58;
          if (local_60 < (ulonglong)local_58[3]) {
            puVar5 = (undefined8 *)*local_58;
          }
          FUN_1802079d0(lVar3 + (longlong)puVar5,local_78,sVar4);
          *(undefined1 *)((longlong)puVar5 + sVar4 + lVar3) = local_49;
        }
      }
      else {
        uVar6 = local_58[2];
        if (uVar6 < (ulonglong)local_58[3]) {
          local_58[2] = local_68 + uVar6;
          puVar5 = local_58;
          if (local_60 < (ulonglong)local_58[3]) {
            puVar5 = (undefined8 *)*local_58;
          }
          *(byte *)((longlong)puVar5 + uVar6) = bVar1;
          *(undefined1 *)((longlong)puVar5 + local_68 + uVar6) = local_49;
        }
        else {
          FUN_18006a970(local_58,local_68);
        }
      }
      pbVar7 = pbVar7 + 1;
      param_2 = local_58;
    } while (pbVar7 != pbVar2);
  }
  return param_2;
}



void Unwind_1801cf120(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x50));
  return;
}



ulonglong FUN_1801cf160(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  undefined4 local_1c8;
  int local_1c4;
  exception local_1c0;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulonglong local_120;
  undefined4 local_118;
  int local_114;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  ulonglong local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_90;
  ulonglong local_88;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  ulonglong local_70;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_61 = 1;
  local_1c8 = 0x10;
  uVar14 = 4;
  local_62 = 0;
  local_78 = 0x65;
  local_1c0.exception_data.offset_0x78._4_4_ = 4;
  local_118 = 0x20;
  local_e0 = 5;
  local_70 = 0;
  uVar15 = 0xfffffffffffffffc;
  local_1f0 = -1;
  local_e8 = 0x1f;
  local_1c4 = 10;
  local_108 = 0xe000000000000000;
  local_110 = 0x28;
  local_88 = 0xf;
  local_90 = 1;
  local_114 = 0xc;
  local_7c = 0xffffffff;
  local_100 = 0xfff;
  local_f8 = -8;
  local_74 = 0;
  local_f0 = 0x20;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  lVar8 = param_1 + 0x48;
LAB_1801cf3a0:
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 < 6) {
    if (iVar3 < 3) {
      if (iVar3 == 2) {
        local_1c0.vftablePtr = (exception_vftable *)CONCAT71(local_1c0.vftablePtr._1_7_,local_62);
        FUN_1800b6990(param_2,&local_1c0);
      }
      else {
        if (iVar3 != 1) goto LAB_1801cffb3;
        local_1c0.vftablePtr = (exception_vftable *)CONCAT71(local_1c0.vftablePtr._1_7_,local_61);
        FUN_1800b6990(param_2,&local_1c0);
      }
    }
    else if (iVar3 == 3) {
      local_1c0.vftablePtr = (exception_vftable *)0x0;
      FUN_1800b6e70(param_2,&local_1c0);
    }
    else if (iVar3 == 5) {
      local_1c0.vftablePtr = *(exception_vftable **)(param_1 + 200);
      FUN_1800b7e00(param_2,&local_1c0);
    }
    else {
      FUN_1800b77f0(param_2,param_1 + 0x98);
    }
  }
  else {
    if (8 < iVar3) {
      if (0xd < iVar3) {
        if (iVar3 == 0xe) {
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = local_e0;
          local_a0 = local_88;
          FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934,uVar14,uVar15);
          local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a8930),DAT_1802a892c);
          FUN_1801ce5a0(param_1,local_d8,local_74,&local_b8);
          local_1f8 = *(undefined8 *)(param_1 + 0x78);
          local_208 = *(undefined4 *)(param_1 + 0x68);
          uStack_204 = *(undefined4 *)(param_1 + 0x6c);
          uStack_200 = *(undefined4 *)(param_1 + 0x70);
          uStack_1fc = *(undefined4 *)(param_1 + 0x74);
          FUN_1800a3a60(&local_1c0.exception_data.offset_0x38,local_78,&local_208,local_d8,0);
          FUN_1801cef10(lVar8,&local_138);
          *(undefined1 *)(param_2 + 0x28) = local_61;
          if (*(char *)(param_2 + 0x29) == '\x01') {
            std::runtime_error::runtime_error
                      ((runtime_error *)&local_1c0,(longlong)&local_1c0.exception_data.offset_0x38);
            FUN_1801dd110((runtime_error *)&local_1c0,&DAT_180253730);
          }
        }
        else {
          if (iVar3 != 0xf) goto LAB_1801cffb3;
          plVar1 = (longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == local_90) {
            FUN_1801d1f63(&DAT_1802a8980,&DAT_18029f518,0x10,0x66,&DAT_1802a89e8,uVar14,uVar15);
            FUN_180057290(&local_1c0.exception_data.offset_0x38,&DAT_1802a8980);
            local_a8 = *(undefined8 *)(param_1 + 0x78);
            local_b8 = *plVar1;
            uStack_b0 = *(undefined8 *)(param_1 + 0x70);
            FUN_1800a3a60(&local_1c0,local_78,&local_b8,&local_1c0.exception_data.offset_0x38,0);
            FUN_1801cef10(lVar8,local_d8);
            uVar5 = FUN_1800a7000(param_2,*plVar1,local_d8,&local_1c0);
            FUN_180001ef0(local_d8);
            std::exception::exception(&local_1c0);
            puVar7 = &local_1c0.exception_data.offset_0x38;
            goto LAB_1801cfc50;
          }
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = local_e0;
          local_a0 = local_88;
          FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934,uVar14,uVar15);
          local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a8930),DAT_1802a892c);
          FUN_1801ce5a0(param_1,local_d8,local_1c8,&local_b8);
          local_1f8 = *(undefined8 *)(param_1 + 0x78);
          local_208 = *(undefined4 *)plVar1;
          uStack_204 = *(undefined4 *)(param_1 + 0x6c);
          uStack_200 = *(undefined4 *)(param_1 + 0x70);
          uStack_1fc = *(undefined4 *)(param_1 + 0x74);
          FUN_1800a3a60(&local_1c0.exception_data.offset_0x38,local_78,&local_208,local_d8,0);
          FUN_1801cef10(lVar8,&local_138);
          *(undefined1 *)(param_2 + 0x28) = local_61;
          if (*(char *)(param_2 + 0x29) == '\x01') {
            std::runtime_error::runtime_error
                      ((runtime_error *)&local_1c0,(longlong)&local_1c0.exception_data.offset_0x38);
            FUN_1801dd110((runtime_error *)&local_1c0,&DAT_180253730);
          }
        }
LAB_1801d0094:
        if (local_88 < local_120) {
          lVar2 = CONCAT44(uStack_134,local_138);
          uVar14 = local_90 + local_120;
          lVar8 = lVar2;
          if (local_100 < uVar14) {
            lVar8 = *(longlong *)(lVar2 + -8);
            if (local_f0 <= (ulonglong)((lVar2 + local_f8) - lVar8)) goto LAB_1801d05c3;
            uVar14 = local_120 + local_110;
          }
          thunk_FUN_1801f42e0(lVar8,uVar14);
        }
        local_1c0.exception_data.offset_0x38 = (ulonglong)&PTR_exception_18020e910;
        local_1c0.exception_data.offset_0x58 = (ulonglong)&std::exception::vftable;
        FUN_1801dd238(&local_1c0.exception_data.offset_0x60);
        local_1c0.exception_data.offset_0x38 = (ulonglong)&std::exception::vftable;
        FUN_1801dd238(&local_1c0.exception_data.offset_0x40);
        if (local_88 < local_c0) {
          lVar2 = CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]);
          uVar14 = local_90 + local_c0;
          lVar8 = lVar2;
          if (local_100 < uVar14) {
            lVar8 = *(longlong *)(lVar2 + -8);
            if (local_f0 <= (ulonglong)((lVar2 + local_f8) - lVar8)) goto LAB_1801d05c3;
            uVar14 = local_c0 + local_110;
          }
          thunk_FUN_1801f42e0(lVar8,uVar14);
        }
        local_c8 = local_70;
        local_c0 = local_88;
        local_d8[0]._0_1_ = local_62;
        if (local_88 < local_a0) {
          uVar14 = local_90 + local_a0;
          lVar8 = local_b8;
          if (local_100 < uVar14) {
            lVar8 = *(longlong *)(local_b8 + -8);
            if (local_f0 <= (ulonglong)((local_b8 + local_f8) - lVar8)) goto LAB_1801d05c3;
            uVar14 = local_a0 + local_110;
          }
          thunk_FUN_1801f42e0(lVar8,uVar14);
        }
        uVar14 = 0;
        goto joined_r0x0001801d01f7;
      }
      if (iVar3 != 9) {
LAB_1801cffb3:
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = local_e0;
        local_a0 = local_88;
        FUN_1801d1f63(&DAT_1802a892c,&DAT_18029f3be,0x1e,6,&DAT_1802a8934,uVar14,uVar15);
        local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,DAT_1802a8930),DAT_1802a892c);
        FUN_1801ce5a0(param_1,local_d8,local_1c8,&local_b8);
        local_1f8 = *(undefined8 *)(param_1 + 0x78);
        local_208 = *(undefined4 *)(param_1 + 0x68);
        uStack_204 = *(undefined4 *)(param_1 + 0x6c);
        uStack_200 = *(undefined4 *)(param_1 + 0x70);
        uStack_1fc = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1c0.exception_data.offset_0x38,local_78,&local_208,local_d8,0);
        FUN_1801cef10(lVar8,&local_138);
        *(undefined1 *)(param_2 + 0x28) = local_61;
        if (*(char *)(param_2 + 0x29) == '\x01') {
          std::runtime_error::runtime_error((runtime_error *)&local_1c0,(longlong)&local_1c0.exception_data.offset_0x38)
          ;
          FUN_1801dd110((runtime_error *)&local_1c0,&DAT_180253730);
        }
        goto LAB_1801d0094;
      }
      local_1c0.exception_data.offset_0x38 = CONCAT71(local_1c0.exception_data.offset_0x38._1_7_,local_61);
      local_1c0.vftablePtr = (exception_vftable *)FUN_1800b56c0(param_2,&local_1c0.exception_data.offset_0x38);
      if (*(double **)(param_2 + 0x10) == *(double **)(param_2 + 0x18)) {
        FUN_1800b5810(param_2 + 8);
      }
      else {
        **(double **)(param_2 + 0x10) = (double)local_1c0.vftablePtr;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 8;
      }
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (10 < iVar3) {
        if (iVar3 == 0xb) goto LAB_1801cf73f;
LAB_1801cfdcd:
        FUN_1801d1f63(&DAT_1802a8938,&DAT_18029f441,0x19,0xb,&DAT_1802a8944);
        FUN_180057290(local_d8,&DAT_1802a8938);
        FUN_1801ce5a0(param_1,&local_1c0.exception_data.offset_0x38,local_1c0.exception_data.offset_0x78._4_4_,local_d8)
        ;
        local_128 = *(undefined8 *)(param_1 + 0x78);
        local_138 = *(undefined4 *)(param_1 + 0x68);
        uStack_134 = *(undefined4 *)(param_1 + 0x6c);
        uStack_130 = *(undefined4 *)(param_1 + 0x70);
        uStack_12c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
        goto LAB_1801cfc29;
      }
      if (iVar3 != 4) goto LAB_1801cfdcd;
      FUN_1800aeef0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),&local_1c0,param_1 + 0x98);
      *(exception_vftable **)(param_2 + 0x20) = local_1c0.vftablePtr + 4;
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_114) {
        FUN_1801d1f63(&DAT_1802a8948,&DAT_18029f477,0x1a,0x11,&DAT_1802a895c);
        FUN_180057290(local_d8,&DAT_1802a8948);
        FUN_1801ce5a0(param_1,&local_1c0.exception_data.offset_0x38,local_114,local_d8);
        local_128 = *(undefined8 *)(param_1 + 0x78);
        local_138 = *(undefined4 *)(param_1 + 0x68);
        uStack_134 = *(undefined4 *)(param_1 + 0x6c);
        uStack_130 = *(undefined4 *)(param_1 + 0x70);
        uStack_12c = *(undefined4 *)(param_1 + 0x74);
        FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
        goto LAB_1801cfc29;
      }
      uVar9 = local_108;
      if ((longlong)local_70 <= (longlong)uStack_1d0) {
        uVar9 = local_70;
      }
      local_1c0.exception_data.offset_0x0 = uStack_1d0 & local_e8;
      local_1c0.vftablePtr = (exception_vftable *)((uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
      uVar6 = FUN_1800a7a20(&local_1e8,&local_1c0,local_90);
      uVar9 = local_108;
      if ((longlong)local_70 <= (longlong)uVar6) {
        uVar9 = local_70;
      }
      uVar10 = local_e8 & uVar6;
      uVar11 = local_90 + uVar10 >> 3 & uVar14;
      uVar12 = local_90 + uVar10 & local_e8;
      if ((uVar10 != uVar12) || (uVar11 != local_70)) {
        puVar13 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
        uVar5 = local_7c << ((byte)uVar10 & 0x1f) ^ local_7c;
        if (uVar11 == local_70) {
          uVar5 = local_7c >> ((char)local_118 - (char)uVar12 & 0x1fU) ^ local_7c | uVar5;
        }
        else {
          *puVar13 = *puVar13 & uVar5;
          FUN_180207610(puVar13 + 1,0);
          if (uVar12 == local_70) goto LAB_1801cf702;
          puVar13 = (uint *)((longlong)puVar13 + uVar11);
          uVar5 = local_7c >> ((char)local_118 - (char)uVar12 & 0x1fU) ^ local_7c;
        }
        *puVar13 = *puVar13 & uVar5;
      }
LAB_1801cf702:
      uVar4 = FUN_1801c2de0(lVar8);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      goto LAB_1801cf3a0;
    }
    if (iVar3 == 6) {
      local_1c0.vftablePtr = *(exception_vftable **)(param_1 + 0xc0);
      FUN_1800b7310(param_2,&local_1c0);
    }
    else {
      if (iVar3 != 8) {
        if (ABS((double)*(exception_vftable **)(param_1 + 0xd0)) != INFINITY) {
          local_1c0.vftablePtr = *(exception_vftable **)(param_1 + 0xd0);
          FUN_1800b64b0(param_2,&local_1c0);
          goto LAB_1801cf78c;
        }
        local_138 = CONCAT31(local_138._1_3_,0x27);
        FUN_1801cef10(lVar8,local_d8);
        FUN_1801d1f63(&DAT_1802a8960,&DAT_18029f4c1,0x1f,0x1a,&DAT_1802a897c);
        FUN_1800aa8e0(&local_1c0.exception_data.offset_0x38,&DAT_1802a8960,local_d8,&local_138);
        FUN_1800aa510(&local_1c0,0x196,&local_1c0.exception_data.offset_0x38,0);
        FUN_1801cef10(lVar8,&local_b8);
        uVar5 = FUN_1800b55a0(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
        goto LAB_1801cfc29;
      }
      local_1c0.exception_data.offset_0x38 = CONCAT71(local_1c0.exception_data.offset_0x38._1_7_,2);
      local_1c0.vftablePtr = (exception_vftable *)FUN_1800b56c0(param_2,&local_1c0.exception_data.offset_0x38);
      if (*(double **)(param_2 + 0x10) == *(double **)(param_2 + 0x18)) {
        FUN_1800b5810(param_2 + 8);
      }
      else {
        **(double **)(param_2 + 0x10) = (double)local_1c0.vftablePtr;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 8;
      }
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != local_1c4) {
        uVar9 = local_108;
        if ((longlong)local_70 <= (longlong)uStack_1d0) {
          uVar9 = local_70;
        }
        local_1c0.exception_data.offset_0x0 = uStack_1d0 & local_e8;
        local_1c0.vftablePtr = (exception_vftable *)((uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
        uVar6 = FUN_1800a7a20(&local_1e8,&local_1c0,local_90);
        uVar9 = local_108;
        if ((longlong)local_70 <= (longlong)uVar6) {
          uVar9 = local_70;
        }
        uVar10 = local_e8 & uVar6;
        uVar11 = local_90 + uVar10 >> 3 & uVar14;
        uVar12 = local_90 + uVar10 & local_e8;
        if ((uVar10 != uVar12) || (uVar11 != local_70)) {
          puVar13 = (uint *)((uVar6 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9);
          uVar5 = local_7c << ((byte)uVar10 & 0x1f);
          if (uVar11 == local_70) {
            uVar5 = local_7c >> ((char)local_118 - (char)uVar12 & 0x1fU) & uVar5;
          }
          else {
            *puVar13 = *puVar13 | uVar5;
            FUN_180207610(puVar13 + 1,CONCAT71((int7)(uVar10 >> 8),0xff));
            if (uVar12 == local_70) goto LAB_1801cf3a0;
            puVar13 = (uint *)((longlong)puVar13 + uVar11);
            uVar5 = local_7c >> ((char)local_118 - (char)uVar12 & 0x1fU);
          }
          *puVar13 = *puVar13 | uVar5;
        }
        goto LAB_1801cf3a0;
      }
LAB_1801cf73f:
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
    }
  }
LAB_1801cf78c:
  while( true ) {
    if (uStack_1d0 == local_70) {
      uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto joined_r0x0001801d01f7;
    }
    uVar9 = local_108;
    if ((longlong)local_70 <= (longlong)uStack_1d0) {
      uVar9 = local_70;
    }
    uVar10 = local_1f0 + (local_e8 & uStack_1d0);
    uVar6 = local_108;
    if ((local_e8 & uStack_1d0) != local_70) {
      uVar6 = local_70;
    }
    if ((1 << ((byte)uVar10 & 0x1f) &
        *(uint *)(uVar6 + (uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9 +
                          (uVar10 >> ((byte)local_e0 & 0x3f)) * 4)) != local_74) {
      iVar3 = FUN_1801c2de0(lVar8);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 < 0xd) {
        if (iVar3 == 10) goto LAB_1801cf87e;
      }
      else if (iVar3 == 0xd) {
        uVar4 = FUN_1801c2de0(lVar8);
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        goto LAB_1801cf3a0;
      }
      FUN_1801d1f63(&DAT_1802a89ec,&DAT_18029f59e,0x1c,6,&DAT_1802a89f4,uVar14,uVar15);
      FUN_180057290(local_d8,&DAT_1802a89ec);
      FUN_1801ce5a0(param_1,&local_1c0.exception_data.offset_0x38,local_1c4,local_d8);
      local_128 = *(undefined8 *)(param_1 + 0x78);
      local_138 = *(undefined4 *)(param_1 + 0x68);
      uStack_134 = *(undefined4 *)(param_1 + 0x6c);
      uStack_130 = *(undefined4 *)(param_1 + 0x70);
      uStack_12c = *(undefined4 *)(param_1 + 0x74);
      FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
      FUN_1801cef10(lVar8,&local_b8);
      uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
      goto LAB_1801cfc29;
    }
    iVar3 = FUN_1801c2de0(lVar8);
    *(int *)(param_1 + 0x40) = iVar3;
    if (0xc < iVar3) break;
    if (iVar3 != 0xb) goto LAB_1801cfb62;
LAB_1801cf87e:
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -8;
    uVar9 = local_108;
    if ((longlong)local_70 <= (longlong)uStack_1d0) {
      uVar9 = local_70;
    }
    local_1c0.exception_data.offset_0x0 = local_1f0 + (local_e8 & uStack_1d0);
    uVar6 = local_108;
    if ((local_e8 & uStack_1d0) != local_70) {
      uVar6 = local_70;
    }
    local_1c0.vftablePtr =
         (exception_vftable *)
         ((uStack_1d0 >> ((byte)local_e0 & 0x3f)) * 4 + local_1e8 + uVar9 +
          (local_1c0.exception_data.offset_0x0 >> ((byte)local_e0 & 0x3f)) * 4 + uVar6);
    local_1c0.exception_data.offset_0x0 = local_1c0.exception_data.offset_0x0 & local_e8;
    FUN_1800b17d0(&local_1e8,&local_1c0.exception_data.offset_0x38);
  }
  if (iVar3 != 0xd) {
LAB_1801cfb62:
    FUN_1801d1f63(&DAT_1802a89f8,&DAT_18029f5d4,0x13,7,&DAT_1802a8a00,uVar14,uVar15);
    FUN_180057290(local_d8,&DAT_1802a89f8);
    FUN_1801ce5a0(param_1,&local_1c0.exception_data.offset_0x38,0xb,local_d8);
    local_128 = *(undefined8 *)(param_1 + 0x78);
    local_138 = *(undefined4 *)(param_1 + 0x68);
    uStack_134 = *(undefined4 *)(param_1 + 0x6c);
    uStack_130 = *(undefined4 *)(param_1 + 0x70);
    uStack_12c = *(undefined4 *)(param_1 + 0x74);
    FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
    FUN_1801cef10(lVar8,&local_b8);
    uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
LAB_1801cfc29:
    FUN_180001ef0(&local_b8);
    std::exception::exception(&local_1c0);
    FUN_180001ef0(&local_1c0.exception_data.offset_0x38);
    puVar7 = local_d8;
LAB_1801cfc50:
    uVar14 = (ulonglong)uVar5;
    FUN_180001ef0(puVar7);
joined_r0x0001801d01f7:
    if (local_1e8 != 0) {
      uVar9 = local_1d8 - local_1e8;
      lVar8 = local_1e8;
      if (local_100 < uVar9) {
        lVar8 = *(longlong *)(local_1e8 + -8);
        if (local_f0 <= (ulonglong)((local_1e8 + local_f8) - lVar8)) {
LAB_1801d05c3:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_74,local_70);
        }
        uVar9 = uVar9 + 0x27;
      }
      thunk_FUN_1801f42e0(lVar8,uVar9);
    }
    return uVar14 & 0xffffffff;
  }
  iVar3 = FUN_1801c2de0(lVar8);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 != local_1c0.exception_data.offset_0x78._4_4_) {
    FUN_1801d1f63(&DAT_1802a8938,&DAT_18029f441,0x19,0xb,&DAT_1802a8944);
    FUN_180057290(local_d8,&DAT_1802a8938);
    FUN_1801ce5a0(param_1,&local_1c0.exception_data.offset_0x38,local_1c0.exception_data.offset_0x78._4_4_,local_d8);
    local_128 = *(undefined8 *)(param_1 + 0x78);
    local_138 = *(undefined4 *)(param_1 + 0x68);
    uStack_134 = *(undefined4 *)(param_1 + 0x6c);
    uStack_130 = *(undefined4 *)(param_1 + 0x70);
    uStack_12c = *(undefined4 *)(param_1 + 0x74);
    FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
    FUN_1801cef10(lVar8,&local_b8);
    uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
    goto LAB_1801cfc29;
  }
  FUN_1800aeef0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + -8) + 8),&local_1c0);
  *(exception_vftable **)(param_2 + 0x20) = local_1c0.vftablePtr + 4;
  iVar3 = FUN_1801c2de0(lVar8);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 != local_114) {
    FUN_1801d1f63(&DAT_1802a8948,&DAT_18029f477,0x1a,0x11,&DAT_1802a895c);
    FUN_180057290(local_d8,&DAT_1802a8948);
    FUN_1801ce5a0(param_1,&local_1c0.exception_data.offset_0x38,local_114,local_d8);
    local_128 = *(undefined8 *)(param_1 + 0x78);
    local_138 = *(undefined4 *)(param_1 + 0x68);
    uStack_134 = *(undefined4 *)(param_1 + 0x6c);
    uStack_130 = *(undefined4 *)(param_1 + 0x70);
    uStack_12c = *(undefined4 *)(param_1 + 0x74);
    FUN_1800a3a60(&local_1c0,local_78,&local_138,&local_1c0.exception_data.offset_0x38,0);
    FUN_1801cef10(lVar8,&local_b8);
    uVar5 = FUN_1800a7000(param_2,*(undefined8 *)(param_1 + 0x68),&local_b8,&local_1c0);
    goto LAB_1801cfc29;
  }
  uVar4 = FUN_1801c2de0(lVar8);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  goto LAB_1801cf3a0;
}


