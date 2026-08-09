#include "../include/aerialclient_types.h"


void Unwind_180160470(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1a0);
  return;
}



void Unwind_1801604b0(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x1f8));
  return;
}



void FUN_1801604f0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xe2b6ca6df14acb49;
  local_50 = 0x981abedfccd2d725;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb1ab94bd09c07d5e;
        if (0x63d65e05956f22ee < (longlong)uVar1) break;
        if (uVar1 == 0xa032e5cb8c2f678e) {
          DAT_1802a6205 = 0;
          DAT_1802a6206 = 0;
          local_48 = 0xaf846b8cebdbdcea;
          local_50 = 0xcc5235897eb4fe05;
          local_51 = 0;
        }
        else {
          local_48 = local_48 ^ 0xb1ab94bd09c07d5e;
          if (uVar1 == 0x45a267d7747ef1fd) {
            DAT_1802a6205 = *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x90);
            DAT_1802a6206 = *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x90);
            local_51 = *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x90);
            local_48 = 0x55452e887a9c1427;
            local_50 = 0x3693708deff336c8;
          }
        }
      }
      if (uVar1 != 0x7aac74b23d981c6c) break;
      DAT_18028fa40 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90);
      local_48 = 0x89c3e6b5bb8493af;
      if (*(char *)(param_1 + 0x4c) != '\0') {
        local_48 = 0x6c5364a943d505dc;
      }
      local_50 = 0x29f1037e37abf421;
    }
    local_48 = local_48 ^ 0xb1ab94bd09c07d5e;
  } while (uVar1 != 0x63d65e05956f22ef);
  DAT_1802a6207 = local_51;
  return;
}



undefined1 FUN_1801606c0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0xd6df5a87419890ba;
  local_68 = 0xf63dd733b5ab22b0;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xc6a1e47ee800e888;
        if (uVar1 != 0x20e28db4f433b20a) break;
        local_60 = 0xb3748d5b983c6828;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x31605ec85e47c1bf;
        }
        local_68 = 0x17d2e47e2a91ed9d;
        local_69 = 1;
      }
      if (uVar1 != 0x26b2bab674d62c22) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0xb8cdccf07539ada5;
      local_68 = 0x1c6ba5d5c7942810;
    }
    local_60 = local_60 ^ 0xc6a1e47ee800e888;
  } while (uVar1 != 0xa4a66925b2ad85b5);
  return local_69;
}



ulonglong FUN_1801607f0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_50 = 4;
  local_90 = 1;
  local_88 = 0x20;
  local_80 = 0xfff;
  local_78 = 0x28;
  local_39 = 0;
  local_70 = 4;
  local_68 = -8;
  local_48 = 0;
  local_4c = 0;
  local_58 = 0xf;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_180160b79;
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
    FUN_1801611dc(&DAT_1802a6330,&DAT_18028fe0d,0x1b,0x19,&DAT_1802a634c);
    local_d8 = &DAT_1802a6330;
    local_d0 = 0x18;
    FUN_1801611dc(&DAT_1802a6350,&DAT_18028fe51,0x17,5,&DAT_1802a6358);
    local_c8 = &DAT_1802a6350;
    local_c0 = local_70;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_180160b27:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180160b67;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1801611dc(&DAT_1802a635c,&DAT_18028fe85,0x14,0x22,&DAT_1802a6380);
      local_b8 = &DAT_1802a635c;
      local_b0 = 0x21;
      FUN_1801611dc(&DAT_1802a6350,&DAT_18028fe51,0x17,5,&DAT_1802a6358);
      local_a8 = &DAT_1802a6350;
      local_a0 = local_70;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180160b27;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180160b67;
  }
  lVar10 = *local_60;
  uVar13 = local_90 + uVar9;
  lVar11 = lVar10;
  if (local_80 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_68) - lVar11)) {
LAB_180160b79:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_78;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180160b67:
  return uVar12 & 0xffffffff;
}



void Unwind_180160ba0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



float FUN_180160bd0(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  float local_5c;
  ulonglong local_58;
  ulonglong local_50;
  float local_48;
  uint local_44;

  local_50 = 0x6a1fbdfd6cc5c445;
  local_58 = 0xc4dd5d6cd7e1d24c;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x1d3a30f8ee817214;
        if ((longlong)uVar1 < -0x1ac16236c9046e42) break;
        if (uVar1 == 0xe53e9dc936fb91be) {
          local_5c = DAT_18028fa40 * local_48;
          local_50 = 0x85ffcbe987a62748;
          local_58 = 0x38a5d3ce9b5d9912;
        }
        else {
          local_50 = local_50 ^ 0x1d3a30f8ee817214;
          if (uVar1 == 0x33123d0fd9b78bbf) {
            local_50 = 0x18b7a6355493595e;
            if ((*(&PTR_DAT_18021cd90)[local_44] & 1) != 0) {
              local_50 = 0x40d323db7e9376ba;
            }
            local_58 = 0xa5edbe124868e704;
            local_5c = local_48;
          }
        }
      }
      if (uVar1 != 0xaec2e091bb241609) break;
      local_5c = (float)(*DAT_18028fa30)(param_1,param_2);
      local_44 = param_2 - 1;
      local_50 = 0xa524968db4d3de00;
      if (local_44 < 3) {
        local_50 = 0x2b6cb3a5719febe5;
      }
      local_58 = 0x187e8eaaa828605a;
      local_48 = local_5c;
    }
    local_50 = local_50 ^ 0x1d3a30f8ee817214;
  } while (uVar1 != 0xbd5a18271cfbbe5a);
  return local_5c;
}



void FUN_180160dc0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x2a7bf91b399be9b8;
  local_50 = 0x3b095a02bc33877;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x36fb41ff12a225ee;
        if (uVar1 != 0xac314337b7cc864) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0xb3833b1d24328467;
        local_50 = 0xd8ddf2250bc9485b;
      }
      if (uVar1 != 0x29cb6cbb1258d1cf) break;
      local_48 = 0xbe5ccb247e023037;
      if (param_2 != '\0') {
        local_48 = 0xdfc1162f2a85346f;
      }
      local_50 = 0xd502021c51f9fc0b;
    }
    local_48 = local_48 ^ 0x36fb41ff12a225ee;
  } while (uVar1 != 0x6b5ec9382ffbcc3c);
  return;
}



undefined8 FUN_180160ee0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x8714a41e0281fecc;
  local_50 = 0x8c60b0b74b0d0023;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x47dc758a8c676fa3;
        if (uVar1 != 0xf380ae26e3d176ff) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0x1de5d5f6af306543;
        local_50 = 0x41a79e03052e2509;
      }
      if (uVar1 != 0xb7414a9498cfeef) break;
      FUN_18015fa80(param_1);
      local_48 = 0x7e0f2aaf7ffdf155;
      if ((param_2 & 1) == 0) {
        local_48 = 0xd1cdcf7c3632c7e0;
      }
      local_50 = 0x8d8f84899c2c87aa;
    }
    local_48 = local_48 ^ 0x47dc758a8c676fa3;
  } while (uVar1 != 0x5c424bf5aa1e404a);
  return param_1;
}



undefined8 FUN_180161030(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xe2fa211be45fc489;
  local_50 = 0x5ceb8c033288a7d9;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xa775d4521ebd440e;
        if (uVar1 != 0xbe11ad18d6d76350) break;
        FUN_180106c90(param_1);
        local_48 = 0x5f5b9414a2d68a1f;
        if ((param_2 & 1) == 0) {
          local_48 = 0x7b6b948c7bb7d7ac;
        }
        local_50 = 0x2d06e1c34469d04c;
      }
      if (uVar1 != 0x725d75d7e6bf5a53) break;
      thunk_FUN_1801f42e0(param_1,0x90);
      local_48 = 0x357ccfa1bce1e0fc;
      local_50 = 0x6311baee833fe71c;
    }
    local_48 = local_48 ^ 0xa775d4521ebd440e;
  } while (uVar1 != 0x566d754f3fde07e0);
  return param_1;
}



void FUN_180161180(void)

{
  atexit((_func_5014 *)&LAB_18015fbe0);
  FUN_1801611dc(&DAT_1802a6208,&DAT_18028fb25,0x15,0xf,&DAT_1802a6218);
  FUN_1800f0070(&DAT_1802a6204,&DAT_1802a6208,FUN_18015fbf0);
  return;
}



void FUN_1801611dc(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x99a2c3bac1424f7e;
  local_68 = 0x3164ac5410b68b0c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x257a1d980d6e03e9;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x257a1d980d6e03e9;
          local_60 = uVar2;
          if (-0x217c68beec7ae9d4 < (longlong)uVar1) break;
          if (uVar1 == 0xa10c1a1993d89d8e) {
            local_6b = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0x98554b4d44e407d0;
            local_68 = 0x6d7da3d603e28f4f;
          }
          else if (uVar1 == 0xa8c66feed1f4c472) {
            local_60 = 0x3e6cd1d47f53ebd4;
            if (*param_5 == 1) {
              local_60 = 0xad20b483b229fc9c;
            }
            local_68 = 0x73a323c2a1aceab1;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
          else if (uVar1 == 0xdcfe467680c022ab) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xf00f4c35e74d0a;
            local_68 = 0xf5d8e7d772e1c595;
          }
        }
        if ((longlong)uVar1 < -0xad71764b8f97761) break;
        if (uVar1 == 0xf528e89b4706889f) {
          local_6a = local_6b ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6a;
          local_54 = local_4c + 1;
          local_60 = 0x18663bd85060a1d3;
          if (local_54 == param_4) {
            local_60 = 0xb217b2312a4ce69d;
          }
          local_68 = 0x55a9c9ce8e9fa0b6;
        }
        else if (uVar1 == 0x4dcff216deff0165) {
          local_69 = local_6a;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0xc1d05ea2c7cd3449;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xbc2202cdd4d58b6c;
          }
          local_68 = 0x1d2e18d4470d16e2;
        }
      }
      if (uVar1 != 0xe7be7bffa4d3462b) break;
      *param_5 = 1;
      local_60 = 0xa59ad9cd534b78d7;
      local_68 = 0x7b194e8c40ce6efa;
    }
  } while (uVar1 != 0xde8397411385162d);
  return;
}



void FUN_1801614a0(longlong param_1)

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



void Unwind_1801615e0(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_180161620(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x1e;
  local_20 = 0x1f;
  local_38 = puVar6;
  FUN_180163c21(&DAT_1802a6470,&DAT_18029108f,0x10,0x1f,&DAT_1802a6490);
  uVar4 = uRam00000001802a6486;
  *(ulonglong *)((longlong)puVar6 + 0xe) = CONCAT62(uRam00000001802a6480,_DAT_1802a647e);
  *(undefined8 *)((longlong)puVar6 + 0x16) = uVar4;
  uVar3 = uRam00000001802a6478;
  uVar2 = uRam00000001802a6474;
  uVar1 = CONCAT22(_DAT_1802a647e,uRam00000001802a647c);
  *puVar6 = _DAT_1802a6470;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar1;
  *(undefined1 *)((longlong)puVar6 + 0x1e) = 0;
  FUN_1801623d0(&PTR_PTR_180290db0,&local_38,lVar5 + 0x5ace40,FUN_1801627b0);
  return 1;
}



undefined8 * FUN_180161720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined **local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined ***local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_30;
  undefined4 local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_24 = 0;
  local_70 = 0;
  puVar1 = (undefined8 *)FUN_1801d61c8(0x50);
  local_68 = 0x45;
  local_60 = 0x4f;
  local_78 = puVar1;
  FUN_180163c21(&DAT_1802a6404,&DAT_180290ede,0x19,0x46,&DAT_1802a644c);
  *(ulonglong *)((longlong)puVar1 + 0x3d) = CONCAT53(DAT_1802a6441._3_5_,(undefined3)DAT_1802a6441);
  uVar2 = CONCAT35((undefined3)DAT_1802a6441,uRam00000001802a643c);
  puVar1[6] = _DAT_1802a6434;
  puVar1[7] = uVar2;
  uVar2 = uRam00000001802a642c;
  puVar1[4] = _DAT_1802a6424;
  puVar1[5] = uVar2;
  uVar2 = uRam00000001802a641c;
  puVar1[2] = _DAT_1802a6414;
  puVar1[3] = uVar2;
  uVar2 = uRam00000001802a640c;
  *puVar1 = _DAT_1802a6404;
  puVar1[1] = uVar2;
  *(undefined1 *)((longlong)puVar1 + 0x45) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 6;
  local_40 = 0xf;
  uVar3 = 1;
  FUN_180163c21(&DAT_1802a63f7,&DAT_180290ea9,0x1b,7,&DAT_1802a6400);
  local_58 = CONCAT44(CONCAT22(local_58._6_2_,DAT_1802a63fb),DAT_1802a63f7);
  FUN_1801063a0(param_1,&local_58,&local_78,local_24,CONCAT44(uVar3,local_24));
  *param_1 = &PTR_FUN_18021cf90;
  *(undefined4 *)(param_1 + 0xe) = local_24;
  *(undefined4 *)((longlong)param_1 + 0x74) = local_24;
  local_30 = param_1;
  uVar2 = FUN_1800ba260();
  local_b8 = &PTR_LAB_18021d010;
  local_b0 = local_30;
  local_a8 = FUN_180161940;
  local_80 = &local_b8;
  FUN_180130290(uVar2,local_30,local_80,local_24);
  return local_30;
}



void Unwind_180161910(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0xb8));
  return;
}



void FUN_180161940(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;

  local_58 = 0x133b50d37a17eef2;
  local_60 = 0xbecf0ee8ee11a71;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_58 ^ 0xb05fdf6521bab4ab;
          uVar1 = local_58 ^ local_60;
          local_60 = local_60 ^ 0xb05fdf6521bab4ab;
          local_58 = uVar2;
          if (-0xdc388e8dac5281 < (longlong)uVar1) break;
          if (uVar1 == 0xbb94c421d443ea85) {
            local_58 = 0x748076cc4ce716b9;
            if (local_50 % 0x14 == 0) {
              local_58 = 0x685901a3459119c7;
            }
            local_60 = 0x8ba3b1bd3eb4bb39;
          }
          else if (uVar1 == 0xe3fab01e7b25a2fe) {
            FUN_180161be0();
            local_58 = 0x27e88a33e45efd39;
            local_60 = 0xd8cb4d42960d50b9;
          }
          else if (uVar1 == 0xf26144e6c087a0a7) {
            local_50 = DAT_1802a63ec;
            local_58 = 0x6869da7415e1551f;
            if ((int)DAT_1802a63ec < 1) {
              local_58 = 0xb483d16a8a0f284b;
            }
            local_60 = 0xd3fd1e55c1a2bf9a;
          }
        }
        if (0x5d07b214381a9b1c < (longlong)uVar1) break;
        if (uVar1 == 0xff23c7717253ad80) {
          DAT_1802a63ec = local_50 - 1;
          local_58 = 0x73a25a4cd391e61e;
          local_60 = 0x14dc9573983c71cf;
        }
        else if (uVar1 == 0x18d7a03df4f6f483) {
          local_4c = FUN_1800fc620();
          local_48 = (int *)(param_1 + 0x74);
          local_58 = 0xbab51b87c7094ea7;
          if (local_4c == *(int *)(param_1 + 0x74)) {
            local_58 = 0x15d3ed753f94751d;
          }
          local_60 = 0xe7b2a993ff13d5ba;
        }
      }
      if (uVar1 != 0x5d07b214381a9b1d) break;
      *local_48 = local_4c;
      DAT_1802a63ec = 0x50;
      local_58 = 0x8be9b44b49c3b96f;
      local_60 = 0x7988f0ad894419c8;
    }
  } while (uVar1 != 0x677ecf3f4bad97d1);
  return;
}



void FUN_180161be0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte local_40 [2];
  char local_3e;
  longlong local_38;
  ulonglong local_20;
  byte local_11;
  undefined8 local_10;

  local_10 = 0xfffffffffffffffe;
  local_11 = 1;
  FUN_1801bcc30(local_40);
  uVar1 = FUN_180179060();
  FUN_1801799b0(uVar1);
  DAT_1802a63f6 = local_11;
  DAT_1802a63f0 = 1;
  if (local_3e == '\0') {
    DAT_1802a63f6 = local_40[0];
    DAT_1802a63f0 = (uint)local_40[0] << (local_11 & 0x1f);
  }
  DAT_1802a63f5 = local_3e;
  if (7 < local_20) {
    uVar3 = local_20 * 2 + 2;
    lVar2 = local_38;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(local_38 + -8);
      if (0x1f < (local_38 - lVar2) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = local_20 * 2 + 0x29;
    }
    thunk_FUN_1801f42e0(lVar2,uVar3);
  }
  return;
}



void Unwind_180161d40(undefined8 param_1,longlong param_2)

{
  FUN_180163160(param_2 + 0x28);
  return;
}



undefined8 * FUN_180161d60(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_88;
  ulonglong local_80;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;

  local_80 = 0xa2d62d17ef7ebe19;
  local_88 = 0x612eb486b4c561f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_80 ^ 0x7fcaefceb871568c;
            uVar1 = local_80 ^ local_88;
            local_88 = local_88 ^ 0x7fcaefceb871568c;
            local_80 = uVar2;
            if (-0x73d2f7bb8420e5a < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x5b3b39a07bcd17fa) {
              if (uVar1 == 0x821bd64075424a8f) {
                local_80 = 0xd2c3a8beec48bae0;
                if (local_74 == 1) {
                  local_80 = 0x124f82cf59c762c4;
                }
                local_88 = 0x5437aec3880e17e0;
              }
              else if (uVar1 == 0x86f4067d6446ad00) {
                local_80 = 0x7021cfc99baca6fa;
                local_88 = 0x9f01edb54bd3d36a;
              }
            }
            else if (uVar1 == 0xa4c4c65f8432e806) {
              local_68 = 0;
              local_70 = 0xf;
              local_80 = 0x2edf38dc9d4603c7;
              if (*(char *)(param_1 + 0x4c) != '\0') {
                local_80 = 0xde01db960b6e937b;
              }
              local_88 = 0x15a706a05027d54d;
            }
            else if (uVar1 == 0xcba6dd365b494636) {
              local_74 = DAT_1802a63f0;
              local_80 = 0xce2c679307dd7927;
              local_88 = 0xc7e307968188e1b8;
            }
            else if (uVar1 == 0xef20227cd07f7590) {
              param_2[1] = local_68;
              param_2[2] = 0xe;
              param_2[3] = local_70;
              FUN_180163c21(&DAT_1802a645c,&DAT_180290f8a,0x11,0xf,&DAT_1802a646c);
              *(ulonglong *)((longlong)param_2 + 6) = CONCAT62(uRam00000001802a6464,DAT_1802a645c._6_2_);
              *param_2 = CONCAT26(DAT_1802a645c._6_2_,(undefined6)DAT_1802a645c);
              local_80 = 0xd86de9a7500927c2;
              local_88 = 0x20af392317b4d665;
            }
          }
          if ((longlong)uVar1 < 0x46782c0cd1c97524) break;
          if (uVar1 == 0x46782c0cd1c97524) {
            param_2[1] = local_68;
            param_2[2] = 7;
            param_2[3] = local_70;
            FUN_180163c21(&DAT_1802a6450,&DAT_180290f51,0x1c,8,&DAT_1802a6458);
            *(uint *)((longlong)param_2 + 3) = CONCAT31(uRam00000001802a6454,DAT_1802a6450._3_1_);
            *(undefined4 *)param_2 = DAT_1802a6450;
            *(undefined1 *)((longlong)param_2 + 7) = 0;
            local_80 = 0x1b05582da3e36bb6;
            local_88 = 0xe3c788a9e45e9a11;
          }
          else if (uVar1 == 0x4dbed5b41390a8a7) {
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = local_70;
            local_80 = 0x1601a84b547c34b1;
            local_88 = 0xeec378cf13c1c516;
          }
          else if (uVar1 == 0x5a4f380682dde613) {
            local_80 = 0x32927b5204ee0496;
            if (local_74 == 2) {
              local_80 = 0xf9d8a89b73380131;
            }
            local_88 = 0xb4667d2f60a8a996;
          }
        }
        if (uVar1 != 0x9cf60058655989f) break;
        local_80 = 0x6b736db6aa9fa0e1;
        if (local_74 < 2) {
          local_80 = 0xb32783f05d000c7d;
        }
        local_88 = 0x313c55b0284246f2;
      }
      if (uVar1 != 0x3b783e7ccd61d68a) break;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = local_70;
      local_80 = 0xc21d7098a36048cd;
      local_88 = 0x3adfa01ce4ddb96a;
    }
  } while (uVar1 != 0xf8c2d08447bdf1a7);
  return param_2;
}



void FUN_1801621f0(longlong param_1)

{
  undefined4 uVar1;

  DAT_1802a63f4 = 1;
  uVar1 = FUN_1800fc620();
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  FUN_180161be0();
  uVar1 = 0;
  if (DAT_1802a63f0 == 2) {
    uVar1 = 2;
  }
  if (DAT_1802a63f0 == 1) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}



void FUN_180162260(void)

{
  undefined8 uVar1;

  DAT_1802a63f4 = 0;
  DAT_1802a63f5 = 0;
  DAT_1802a63f6 = 0;
  uVar1 = FUN_180179060();
  FUN_1801799b0(uVar1);
  FUN_1801b71a0(&DAT_1802a6388);
  return;
}



undefined1 FUN_1801622a0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x8e1583fa012494f2;
  local_68 = 0x7d35101da8db8edd;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xa19fe0de6b8cc2c5;
        if (uVar1 != 0xf32093e7a9ff1a2f) break;
        local_60 = 0xb4c0fe7f07303fe8;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0x874308297c3db76;
        }
        local_68 = 0x69c0f8296ec4ca82;
        local_69 = 1;
      }
      if (uVar1 != 0x61b4c8abf90711f4) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x91f681897645bbf4;
      local_68 = 0x4cf687df1fb14e9e;
    }
    local_60 = local_60 ^ 0xa19fe0de6b8cc2c5;
  } while (uVar1 != 0xdd00065669f4f56a);
  return local_69;
}



ulonglong FUN_1801623d0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 1;
  local_48 = 0;
  local_88 = 0x20;
  local_80 = -8;
  local_39 = 0;
  local_50 = 4;
  local_4c = 0;
  local_78 = 4;
  local_58 = 0xf;
  local_70 = 0xfff;
  local_68 = 0x28;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_180162759;
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
    FUN_180163c21(&DAT_1802a6494,&DAT_1802910d4,0x11,0x19,&DAT_1802a64b0);
    local_d8 = &DAT_1802a6494;
    local_d0 = 0x18;
    FUN_180163c21(&DAT_1802a64b4,&DAT_180291112,0x18,5,&DAT_1802a64bc);
    local_c8 = &DAT_1802a64b4;
    local_c0 = local_78;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_180162707:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180162747;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_180163c21(&DAT_1802a64c0,&DAT_18029113f,0x1e,0x22,&DAT_1802a64e4);
      local_b8 = &DAT_1802a64c0;
      local_b0 = 0x21;
      FUN_180163c21(&DAT_1802a64b4,&DAT_180291112,0x18,5,&DAT_1802a64bc);
      local_a8 = &DAT_1802a64b4;
      local_a0 = local_78;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180162707;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180162747;
  }
  lVar10 = *local_60;
  uVar13 = local_90 + uVar9;
  lVar11 = lVar10;
  if (local_70 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_88 <= (ulonglong)((lVar10 + local_80) - lVar11)) {
LAB_180162759:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_68;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180162747:
  return uVar12 & 0xffffffff;
}



void Unwind_180162780(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1801627b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong local_108;
  ulonglong local_100;
  byte local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;

  local_100 = 0xb29d668bb5078b94;
  local_108 = 0xe8942d29d8eb51f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar9 = local_100 ^ 0xbb623f3fdeef59a4;
              uVar6 = local_100 ^ local_108;
              local_108 = local_108 ^ 0xbb623f3fdeef59a4;
              local_100 = uVar9;
              if (-0xb9a4a1da27a920e < (longlong)uVar6) break;
              if ((longlong)uVar6 < -0x43ebdba6d776c175) {
                if ((longlong)uVar6 < -0x6f388327310cbbe4) {
                  if (uVar6 == 0x8021ed9918ae0280) {
                    (*DAT_180290de0)(param_1);
                    local_100 = 0x46f131c44b3c071b;
                    local_108 = 0xbfabb51e415706c5;
                  }
                  else if (uVar6 == 0x89dbf5a123c8a548) {
                    cVar5 = FUN_1801b3c30(param_1,local_f0);
                    local_100 = 0x505bc2a4122702d9;
                    if (cVar5 != '\0') {
                      local_100 = 0x1b0d4330f709e397;
                    }
                    local_108 = 0xa901467e184c0307;
                  }
                  else if (uVar6 == 0x8f784d57e9dd77ac) {
                    *(undefined4 *)(param_1 + 0x3c8) = local_a8;
                    *(undefined4 *)(param_1 + 0x3cc) = uStack_a4;
                    *(undefined4 *)(param_1 + 0x3d0) = uStack_a0;
                    *(undefined4 *)(param_1 + 0x3d4) = uStack_9c;
                    local_100 = 0x1e880ae734d2709b;
                    local_108 = 0xf1852f6d612e769d;
                  }
                }
                else if (uVar6 == 0x90c77cd8cef3441c) {
                  cVar5 = FUN_1801798a0(local_e8);
                  local_100 = 0xaedf6646e3676d80;
                  if (cVar5 != '\0') {
                    local_100 = 0x70b372c9332827ab;
                  }
                  local_108 = 0x806ce088cb56e65b;
                }
                else if (uVar6 == 0xb20c054eef45e090) {
                  *(undefined4 *)(param_1 + 0x3c8) = local_b8;
                  *(undefined4 *)(param_1 + 0x3cc) = uStack_b4;
                  *(undefined4 *)(param_1 + 0x3d0) = uStack_b0;
                  *(undefined4 *)(param_1 + 0x3d4) = uStack_ac;
                  local_100 = 0xff40c368a51abe88;
                  local_108 = 0x61a47b2af71bf56;
                }
                else if (uVar6 == 0xb6ee113bedffe6b9) {
                  local_a8 = (undefined4)local_c8;
                  uStack_a4 = local_c8._4_4_;
                  uStack_a0 = (undefined4)uStack_c0;
                  uStack_9c = uStack_c0._4_4_;
                  (*DAT_180290de0)(param_1);
                  cVar5 = FUN_1801b3c30(param_1,local_f0);
                  local_100 = 0x291a5a6f5d7ec1be;
                  if (cVar5 != '\0') {
                    local_100 = 0x496f32b2e15fb014;
                  }
                  local_108 = 0xc6177fe50882c7b8;
                }
              }
              else if ((longlong)uVar6 < -0x10f2da75aa03f9fa) {
                if (uVar6 == 0xbc14245928893e8b) {
                  local_f0 = 0x3d8;
                  local_100 = 0x9a19c451573c4d46;
                  if ((DAT_1802a63f6 & 1) != 0) {
                    local_100 = 0xab773ed166f1a6e6;
                  }
                  local_108 = 0xb95c9cf4cf2a4643;
                }
                else if (uVar6 == 0xdfcc870d5cdb060a) {
                  FUN_180179a50(local_e8,param_1);
                  local_100 = 0xdbdc0deaeafbee9;
                  local_108 = 0x8466357f8d671ba1;
                }
                else if (uVar6 == 0xee5831b4b54fe17a) {
                  uVar1 = 0x3f000000;
                  if (local_f1 != 0) {
                    uVar1 = 0;
                  }
                  local_c8 = *(undefined8 *)(param_1 + 0x3c8);
                  uStack_c0 = *(undefined8 *)(param_1 + 0x3d0);
                  *(undefined4 *)(param_1 + 0x3c8) = uVar1;
                  *(undefined4 *)(param_1 + 0x3cc) = uVar1;
                  *(undefined4 *)(param_1 + 0x3d0) = uVar1;
                  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
                  local_100 = 0xf8114fbba4ffed38;
                  local_108 = 0x4eff5e8049000b81;
                }
              }
              else if (uVar6 == 0xef0d258a55fc0606) {
                lVar7 = FUN_1801b2b70();
                lVar8 = FUN_1801b2b70();
                (*(code *)(lVar7 + 0x5ad330))(param_1);
                (*(code *)(lVar7 + 0x5ad330))(param_1);
                (*(code *)(lVar8 + 0x5ad1d0))(param_1);
                local_100 = 0xc5404d35efd09471;
                if (local_f1 != 0) {
                  local_100 = 0x4bb0d354a71d4a5a;
                }
                local_108 = 0x3c1ac9efe5bb95af;
              }
              else if (uVar6 == 0xefdd59cbfded6352) {
                uVar2 = *local_e0;
                uVar3 = local_e0[1];
                *local_e0 = 0x3f8000003f800000;
                local_e0[1] = 0x3f8000003f800000;
                FUN_180179a50(local_e8,param_1);
                *local_e0 = uVar2;
                local_e0[1] = uVar3;
                local_100 = 0x7efc5e40752a9bd3;
                local_108 = 0xf727abe156e23e9b;
              }
              else if (uVar6 == 0xf0df9241f87ec1f0) {
                local_100 = 0x23fc358a150c52a4;
                if (DAT_1802a63e1 != '\0') {
                  local_100 = 0x9a42aaf0ee6b765d;
                }
                local_108 = 0xd799806848893f57;
              }
            }
            if ((longlong)uVar6 < 0x2eb386ce28318bdb) break;
            if ((longlong)uVar6 < 0x59a98eac05f8961e) {
              if (uVar6 == 0x2eb386ce28318bdb) {
                local_100 = 0xa0a2a92829a25a95;
                if (DAT_1802a63e1 != '\0') {
                  local_100 = 0x350e77a4bb654686;
                }
                local_108 = 0x208344b1310c5815;
              }
              else if (uVar6 == 0x3792327eafa897cc) {
                FUN_1801b71a0(&DAT_1802a6388);
                local_100 = 0x15411790474cd844;
                local_108 = 0x7ee5d5beb0ac0359;
              }
              else if (uVar6 == 0x4ddb2a98a6e2490a) {
                cVar5 = FUN_1801b3c30(param_1,local_f0);
                local_100 = 0x6061a4b073277499;
                if (cVar5 != '\0') {
                  local_100 = 0x38d7843f2b97735a;
                }
                local_108 = 0xd68fb58b9ed89220;
                local_c8 = 0;
                uStack_c0 = 0;
              }
            }
            else if (uVar6 == 0x59a98eac05f8961e) {
              local_b8 = (undefined4)local_d8;
              uStack_b4 = local_d8._4_4_;
              uStack_b0 = (undefined4)uStack_d0;
              uStack_ac = uStack_d0._4_4_;
              lVar7 = FUN_1801b2b70();
              local_e0 = (undefined8 *)(lVar7 + 0x192ae08);
              cVar5 = FUN_1801b3c30(local_e0,0x10);
              local_100 = 0x6ee418ebe031225d;
              if (cVar5 != '\0') {
                local_100 = 0x5ef5c62d41074705;
              }
              local_108 = 0xb1289fe6bcea2457;
            }
            else if (uVar6 == 0x6ba4c22ef7e0db1d) {
              (*DAT_180290de0)(param_1);
              local_100 = 0xa0b178eb9b0363e1;
              local_108 = 0x59ebfc319168623f;
            }
            else if (uVar6 == 0x77aa1abb42a6dff5) {
              cVar5 = FUN_1801b3c30(param_1,local_f0);
              local_100 = 0xea0c356bf69bbc17;
              if (cVar5 != '\0') {
                local_100 = 0x95d2d97fefe40d7a;
              }
              local_108 = 0xb3a5bbc7f3632a09;
              local_d8 = 0;
              uStack_d0 = 0;
            }
          }
          if ((longlong)uVar6 < 0x158d33158a691e93) break;
          if (uVar6 == 0x158d33158a691e93) {
            FUN_1801b71a0(&DAT_1802a6388);
            local_100 = 0xfb4dbb668fa88e0b;
            local_108 = 0x7b6c56ff97068c8b;
          }
          else if (uVar6 == 0x234558a598160b05) {
            local_100 = 0x951d1d885c92620a;
            if (DAT_1802a63e1 != '\0') {
              local_100 = 0xc92bedd804da2edb;
            }
            local_108 = 0xfeb9dfa6ab72b917;
          }
          else if (uVar6 == 0x267762b81c872773) {
            local_d8 = *(undefined8 *)(param_1 + 0x3c8);
            uStack_d0 = *(undefined8 *)(param_1 + 0x3d0);
            *(undefined8 *)(param_1 + 0x3c8) = 0x3f8000003f800000;
            *(undefined8 *)(param_1 + 0x3d0) = 0x3f8000003f800000;
            local_100 = 0x7af7fa5834262a17;
            local_108 = 0x235e74f431debc09;
          }
        }
        if (uVar6 != 0xf465b5e25d856df3) break;
        FUN_1801b6c10(&DAT_1802a6388);
        local_100 = 0xc99eae77c1e37cc4;
        local_108 = 0x844584ef670135ce;
      }
      if (uVar6 != 0x122ba225a9dbe0a5) break;
      bVar4 = DAT_1802a63f5 & 1;
      local_f1 = DAT_1802a63f5 & 1;
      local_e8 = FUN_180179060();
      local_100 = 0x73d5ed39e521dfaa;
      if (bVar4 != 0) {
        local_100 = 0x13cd03a0d3ac5a46;
      }
      local_108 = 0x830a7f781d5f1e5a;
    }
  } while (uVar6 != 0xf95a84da0a6b01de);
  return;
}



void FUN_180163160(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_98 = 0xbb3dd600e4c6a573;
  local_a0 = 0xe9c0b59ab0f9ed11;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ 0xe7fb57b4d07545a2;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0xe7fb57b4d07545a2;
          local_98 = uVar2;
          if (0x347e6d8bb949dfa5 < (longlong)uVar1) break;
          if (uVar1 == 0xb0954f982fca799a) {
            thunk_FUN_1801f42e0(local_70,local_78);
            local_98 = 0x1f3a9b3d476156d5;
            local_a0 = 0x7b98d526ce2de263;
          }
          else if (uVar1 == 0xb73b109414498709) {
            local_48 = *(longlong *)(local_58 + -8);
            local_98 = 0x93cf8428647f6623;
            if (0x1f < (local_58 - local_48) - 8U) {
              local_98 = 0x34dcbad82491c9cd;
            }
            local_a0 = 0x4f47fa765d71e57f;
          }
          else if (uVar1 == 0xdc887e5e390e835c) {
            local_78 = local_50 + 0x29;
            local_70 = local_48;
            local_98 = 0xf67e10db63fb53f3;
            local_a0 = 0x46eb5f434c312a69;
          }
        }
        if (0x52fd639a543f4861 < (longlong)uVar1) break;
        if (uVar1 == 0x347e6d8bb949dfa6) {
          local_70 = *local_80;
          local_50 = local_60 * 2;
          local_78 = local_50 + 2;
          local_98 = 0x7208ff383528ece5;
          if (local_78 < 0x1000) {
            local_98 = 0x75a6a0340eab1276;
          }
          local_a0 = 0xc533efac21616bec;
          local_58 = local_70;
        }
      }
      if (uVar1 != 0x52fd639a543f4862) break;
      local_88 = 0;
      local_90 = 7;
      local_80 = (longlong *)(param_1 + 8);
      local_68 = (undefined8 *)(param_1 + 0x20);
      local_60 = *(ulonglong *)(param_1 + 0x20);
      local_98 = 0x3a3936a51dff6d6b;
      if (local_60 < 8) {
        local_98 = 0x6ae515352dfa067b;
      }
      local_a0 = 0xe475b2ea4b6b2cd;
    }
    if (uVar1 == 0x64a24e1b894cb4b6) break;
    if (uVar1 == 0x7b9b40ae79e02cb2) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_88);
    }
  }
  *(uintptr_t *)(param_1 + 0x18) = local_88;
  *local_68 = local_90;
  *(undefined2 *)local_80 = 0;
  return;
}



void FUN_1801634e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x9ea8722084f3cd0a;
  local_58 = 0xabba194307cc263e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x68dfde324bcd38b7;
        if (uVar1 != 0xcb6cb538c193e6a9) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0xe8c0f3e656ec9a1c;
        local_58 = 0xb45c729291f97cfe;
      }
      if (uVar1 != 0x35126b63833feb34) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0xec870a78ae4871eb;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x7b773e34a8ce71a0;
      }
      local_58 = 0xb01b8b0c695d9709;
    }
    local_50 = local_50 ^ 0x68dfde324bcd38b7;
  } while (uVar1 != 0x5c9c8174c715e6e2);
  return;
}



void FUN_180163610(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x7c417e87a4797a91;
  local_50 = 0x8caf8d6e324d9ee;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x108990f0074a3fc2;
        if (uVar1 != 0x9bcf974010a416b0) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0x9f45a6d54f9605eb;
        local_50 = 0xaab490632dae8d1f;
      }
      if (uVar1 != 0x748b8651475da37f) break;
      local_48 = 0x382ef2aae529262;
      if (param_2 != '\0') {
        local_48 = 0xadbc4edcdcce0c26;
      }
      local_50 = 0x3673d99ccc6a1a96;
    }
    local_48 = local_48 ^ 0x108990f0074a3fc2;
  } while (uVar1 != 0x35f136b6623888f4);
  return;
}



undefined8 FUN_180163730(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xe86c6c210a7938a7;
  local_50 = 0xb874d8ff9f30920d;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x5ad4595f98065a6c;
        if (uVar1 != 0xa0f89794fb7cad0b) break;
        thunk_FUN_1801f42e0(param_1,0x40);
        local_48 = 0xaad6ca73b54b870a;
        local_50 = 0xbeb6e59d45c2e729;
      }
      if (uVar1 != 0x5018b4de9549aaaa) break;
      FUN_1801614a0(param_1);
      local_48 = 0xdfc45c2bea4ee261;
      if ((param_2 & 1) == 0) {
        local_48 = 0x6b5ce451e1bb2f49;
      }
      local_50 = 0x7f3ccbbf11324f6a;
    }
    local_48 = local_48 ^ 0x5ad4595f98065a6c;
  } while (uVar1 != 0x14602feef0896023);
  return param_1;
}



undefined8 FUN_180163880(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xd2bd0b894b720925;
  local_50 = 0xf875aff7d38e2305;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb8f5be171cfc3127;
        if (uVar1 != 0xc0b293476dc9e336) break;
        thunk_FUN_1801f42e0(param_1,0x78);
        local_48 = 0x5a465a8f12702295;
        local_50 = 0x950b86c14a341f2c;
      }
      if (uVar1 != 0x2ac8a47e98fc2a20) break;
      FUN_180106c90(param_1);
      local_48 = 0xa78f1536e723efcd;
      if ((param_2 & 1) == 0) {
        local_48 = 0xa8705a3fd2ae3142;
      }
      local_50 = 0x673d86718aea0cfb;
    }
    local_48 = local_48 ^ 0xb8f5be171cfc3127;
  } while (uVar1 != 0xcf4ddc4e58443db9);
  return param_1;
}



void FUN_1801639d0(void)

{
  undefined8 ***pppuVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_48 = 1;
  local_40 = 0;
  atexit((_func_5014 *)&LAB_180161600);
  local_80 = (undefined4 *)FUN_1801d61c8(6);
  local_78 = (longlong)local_80 + 6;
  *local_80 = 0x90909090;
  *(undefined2 *)(local_80 + 1) = 0x9090;
  local_60 = local_40;
  local_31 = 1;
  local_70 = local_78;
  local_68 = (undefined8 **)FUN_1801d61c8(0x40);
  local_58 = 0x39;
  local_50 = 0x3f;
  *(undefined8 *)((longlong)local_68 + 0x2a) = 0;
  *(undefined8 *)((longlong)local_68 + 0x32) = 0;
  local_68[4] = (undefined8 **)0x0;
  local_68[5] = (undefined8 **)0x0;
  local_68[2] = (undefined8 **)0x0;
  local_68[3] = (undefined8 **)0x0;
  *local_68 = (undefined8 **)0x0;
  local_68[1] = (undefined8 **)0x0;
  lVar2 = local_48;
  lVar4 = local_40;
  do {
    lVar3 = lVar2;
    pppuVar1 = &local_68;
    if (0xf < local_50) {
      pppuVar1 = (undefined8 ***)local_68;
    }
    *(byte *)((longlong)pppuVar1 + lVar4) =
         (char)lVar4 * '\x1f' + 0x5dU ^ (byte)(0xd9adbf47 >> ((byte)((int)lVar4 << 3) & 0x18)) ^ (&DAT_18021cfd0)[lVar4]
    ;
    lVar2 = local_48 + lVar3;
    lVar4 = lVar3;
  } while (lVar2 != 0x3a);
  local_31 = 0;
  FUN_1801b5d80(&DAT_1802a6388,&local_68,&local_80);
  atexit((_func_5014 *)&LAB_180161610);
  FUN_180163c21(&DAT_1802a63f7,&DAT_180290ea9,0x1b,7,&DAT_1802a6400);
  FUN_1800f0070(&DAT_1802a63e8,&DAT_1802a63f7,FUN_180161620);
  return;
}



void Unwind_180163bf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x77) == '\x01') {
    FUN_180131590(param_2 + 0x28);
  }
  return;
}



void FUN_180163c21(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x821261b02f8ca4cd;
  local_68 = 0x8847d6d2c03b2fa3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xa815f814646a110f;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xa815f814646a110f;
          local_60 = uVar2;
          if (-0x397c741befe27053 < (longlong)uVar1) break;
          if (uVar1 == 0x841a1cd4f912df29) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0xbccc21acc6322fe8;
            local_68 = 0x188963dfa4e7c116;
          }
          else if (uVar1 == 0xa445427362d5eefe) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0xf313df4a94218b37;
            if (local_54 == param_4) {
              local_60 = 0x7f3ca9b6ac6cfff;
            }
            local_68 = 0x5de330ede25de675;
          }
          else if (uVar1 == 0xaef0efa7767c6d42) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x5f03cde3781ff967;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0xcb8a6e9733bf1525;
            }
            local_68 = 0xdb19d137810d264e;
          }
        }
        if ((longlong)uVar1 < 0x1093bfa0b2b2336b) break;
        if (uVar1 == 0x1093bfa0b2b2336b) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x3cc3f4ca3cba2c35;
          local_68 = 0x9886b6b95e6fc2cb;
        }
        else if (uVar1 == 0x5a10fa76889b298a) {
          *param_5 = 1;
          local_60 = 0x5f0a180aac23bdba;
          local_68 = 0x998993eebc3e3214;
        }
      }
      if (uVar1 != 0xa55b762efb78b6e) break;
      local_60 = 0x94f16df1214f2a1a;
      if (*param_5 == 1) {
        local_60 = 0xfc8209b2472ec8f6;
      }
      local_68 = 0x3a01825657334758;
      local_54 = 0;
      local_6b = 0;
      local_48 = (int)param_3 + param_2;
    }
  } while (uVar1 != 0xc6838be4101d8fae);
  return;
}



undefined8 FUN_180163ee0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x1c;
  local_20 = 0x1f;
  local_38 = puVar6;
  FUN_180165e5c(&DAT_1802a661c,&DAT_18029231f,0x1d,0x1d,&DAT_1802a663c);
  uVar4 = uRam00000001802a6630;
  *(ulonglong *)(puVar6 + 3) = CONCAT44(uRam00000001802a662c,_DAT_1802a6628);
  *(undefined8 *)(puVar6 + 5) = uVar4;
  uVar3 = _DAT_1802a6628;
  uVar2 = uRam00000001802a6624;
  uVar1 = uRam00000001802a6620;
  *puVar6 = _DAT_1802a661c;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  *(undefined1 *)(puVar6 + 7) = 0;
  FUN_1800fa6c0(&PTR_PTR_180291fb8,&local_38,lVar5 + 0xa20d20,FUN_180165870);
  return 1;
}



undefined8 * FUN_180163fe0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined **local_238;
  undefined8 *local_230;
  code *local_228;
  undefined ***local_200;
  undefined4 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined7 local_1d8;
  undefined1 local_1d1;
  undefined7 uStack_1d0;
  undefined1 local_1c9;
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined4 *local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined4 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 *local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 ***local_f0;
  longlong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_5c = 0x3f800000;
  local_68 = 0;
  local_50 = 0xf;
  local_a8 = 1;
  local_48 = 0;
  local_58 = 0x1f;
  local_a0 = 10;
  local_41 = 0;
  local_98 = 5;
  local_90 = 0x40;
  local_42 = 0x90;
  local_88 = 0x3f;
  local_78 = 0x20;
  local_80 = 0x1e;
  local_1f0 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(0x40);
  local_1e8 = 0x38;
  local_1e0 = local_88;
  local_1f8 = puVar4;
  FUN_180165e5c(&DAT_1802a6530,&DAT_18029210c,0x1c,0x39,&DAT_1802a656c);
  *(undefined8 *)(puVar4 + 0xc) = DAT_1802a6560;
  uVar5 = uRam00000001802a6558;
  *(undefined8 *)(puVar4 + 8) = _DAT_1802a6550;
  *(undefined8 *)(puVar4 + 10) = uVar5;
  uVar5 = uRam00000001802a6548;
  *(undefined8 *)(puVar4 + 4) = _DAT_1802a6540;
  *(undefined8 *)(puVar4 + 6) = uVar5;
  uVar2 = uRam00000001802a653c;
  uVar1 = uRam00000001802a6538;
  uVar10 = uRam00000001802a6534;
  *puVar4 = _DAT_1802a6530;
  puVar4[1] = uVar10;
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  *(undefined1 *)(puVar4 + 0xe) = local_41;
  local_1c8 = local_50;
  local_1c0 = local_50;
  uVar10 = 1;
  FUN_180165e5c(&DAT_1802a6519,&DAT_1802920cd,0x11,0x10,&DAT_1802a652c);
  uStack_1d0 = uRam00000001802a6521;
  local_1d8 = (undefined7)DAT_1802a6519;
  local_1d1 = DAT_1802a6519._7_1_;
  local_1c9 = local_41;
  FUN_1801063a0(param_1,&local_1d8,&local_1f8,local_48,CONCAT44(uVar10,local_48));
  *param_1 = &PTR_FUN_18021d300;
  local_c8 = (undefined8 *)0x0;
  lStack_c0 = 0;
  local_b8 = 0;
  local_70 = param_1;
  local_c8 = (undefined8 *)FUN_1801d61c8(local_a0);
  lStack_c0 = (longlong)local_c8 + 10;
  *local_c8 = 0x10e0bb8341;
  *(undefined1 *)(local_c8 + 1) = local_42;
  *(undefined1 *)((longlong)local_c8 + 9) = local_42;
  local_e8 = local_68;
  local_43 = 1;
  local_b8 = lStack_c0;
  local_f0 = (undefined8 ***)FUN_1801d61c8(local_78);
  local_d0 = local_70 + 0x11;
  local_e0 = 0x1d;
  local_d8 = local_58;
  *(undefined8 *)((longlong)local_f0 + 0xe) = 0;
  *(undefined8 *)((longlong)local_f0 + 0x16) = 0;
  *local_f0 = (undefined8 ***)0x0;
  local_f0[1] = (undefined8 ***)0x0;
  lVar7 = local_68;
  lVar9 = local_a8;
  do {
    ppppuVar6 = &local_f0;
    if (local_50 < local_d8) {
      ppppuVar6 = (undefined8 ****)local_f0;
    }
    *(byte *)((longlong)ppppuVar6 + lVar7) =
         (char)local_58 * (char)lVar7 + 0x5dU ^ (byte)(0xd9adbf47 >> ((byte)((int)lVar7 << 3) & 0x18)) ^
         (&DAT_18021d340)[lVar7];
    lVar8 = local_a8 + lVar9;
    lVar7 = lVar9;
    lVar9 = lVar8;
  } while (lVar8 != local_80);
  local_43 = 0;
  FUN_1801b5d80(local_d0,&local_f0,&local_c8);
  puVar3 = local_70;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = (undefined4 *)0x0;
  uStack_190 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_78);
  local_188 = local_58;
  uStack_180 = local_58;
  local_198 = puVar4;
  FUN_180165e5c(&DAT_1802a6570,&DAT_180292171,0x10,0x20,&DAT_1802a6590);
  uVar5 = uRam00000001802a6587;
  *(ulonglong *)((longlong)puVar4 + 0xf) = CONCAT71(uRam00000001802a6580,DAT_1802a657f);
  *(undefined8 *)((longlong)puVar4 + 0x17) = uVar5;
  uVar2 = uRam00000001802a657c;
  uVar1 = uRam00000001802a6578;
  uVar10 = uRam00000001802a6574;
  *puVar4 = _DAT_1802a6570;
  puVar4[1] = uVar10;
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  *(undefined1 *)((longlong)puVar4 + 0x1f) = local_41;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = local_98;
  local_160 = local_50;
  uVar10 = 1;
  FUN_180165e5c(&DAT_1802a6594,&DAT_1802921b6,0x16,6,&DAT_1802a659c);
  local_178 = CONCAT44(CONCAT31(local_178._5_3_,DAT_1802a6598),DAT_1802a6594);
  uVar5 = FUN_180108270(puVar3,&local_178,&local_198,local_5c,CONCAT44(uVar10,0x3dcccccd),0x40400000,0x3d4ccccd);
  puVar3[0xe] = uVar5;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (undefined4 *)0x0;
  uStack_150 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_90);
  local_148 = 0x36;
  uStack_140 = local_88;
  local_158 = puVar4;
  FUN_180165e5c(&DAT_1802a65a0,&DAT_1802921e6,0x19,0x37,&DAT_1802a65d8);
  *(ulonglong *)((longlong)puVar4 + 0x2e) = CONCAT62(DAT_1802a65ce._2_6_,(undefined2)DAT_1802a65ce);
  uVar5 = CONCAT26((undefined2)DAT_1802a65ce,uRam00000001802a65c8);
  *(undefined8 *)(puVar4 + 8) = _DAT_1802a65c0;
  *(undefined8 *)(puVar4 + 10) = uVar5;
  uVar5 = uRam00000001802a65b8;
  *(undefined8 *)(puVar4 + 4) = _DAT_1802a65b0;
  *(undefined8 *)(puVar4 + 6) = uVar5;
  uVar2 = uRam00000001802a65ac;
  uVar1 = uRam00000001802a65a8;
  uVar10 = uRam00000001802a65a4;
  *puVar4 = _DAT_1802a65a0;
  puVar4[1] = uVar10;
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  *(undefined1 *)((longlong)puVar4 + 0x36) = local_41;
  local_1b0 = local_68;
  local_1a8 = local_a0;
  local_1a0 = local_50;
  FUN_180165e5c(&DAT_1802a65dc,&DAT_18029224b,0x1b,0xb,&DAT_1802a65e8);
  local_1b0 = CONCAT62(local_1b0._2_6_,DAT_1802a65e4);
  local_1b8 = DAT_1802a65dc;
  uVar5 = FUN_180107b80(puVar3,&local_1b8,&local_158,1);
  puVar3[0xf] = uVar5;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = (undefined4 *)0x0;
  uStack_130 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_78);
  local_128 = local_80;
  uStack_120 = local_58;
  local_138 = puVar4;
  FUN_180165e5c(&DAT_1802a65ec,&DAT_180292290,0x17,0x1f,&DAT_1802a660c);
  uVar5 = uRam00000001802a6602;
  *(ulonglong *)((longlong)puVar4 + 0xe) = CONCAT62(uRam00000001802a65fc,_DAT_1802a65fa);
  *(undefined8 *)((longlong)puVar4 + 0x16) = uVar5;
  uVar2 = uRam00000001802a65f4;
  uVar1 = uRam00000001802a65f0;
  uVar10 = CONCAT22(_DAT_1802a65fa,uRam00000001802a65f8);
  *puVar4 = _DAT_1802a65ec;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar10;
  *(undefined1 *)((longlong)puVar4 + 0x1e) = local_41;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = local_98;
  local_100 = local_50;
  uVar10 = 1;
  FUN_180165e5c(&DAT_1802a6610,&DAT_1802922dc,0x1e,6,&DAT_1802a6618);
  local_118 = CONCAT44(CONCAT31(local_118._5_3_,DAT_1802a6614),DAT_1802a6610);
  uVar5 = FUN_180108270(puVar3,&local_118,&local_138,0xc2a00000,CONCAT44(uVar10,0xc3340000),0x42b40000,local_5c);
  puVar3[0x10] = uVar5;
  uVar5 = FUN_1800ba260();
  local_238 = &PTR_LAB_18021d360;
  local_230 = puVar3;
  local_228 = FUN_1801648d0;
  local_200 = &local_238;
  FUN_180121610(uVar5,puVar3,local_200,local_48);
  return puVar3;
}



void Unwind_180164810(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x235) == '\x01') {
    FUN_180131590(param_2 + 0x1b0);
  }
  return;
}



void Unwind_180164850(undefined8 param_1,longlong param_2)

{
  FUN_18011a170(*(undefined8 *)(param_2 + 0x1a8));
  return;
}



void Unwind_180164890(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x208));
  return;
}



void FUN_1801648d0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  ulonglong local_188;
  ulonglong local_180;
  char local_171;
  SIZE_T local_170;
  DWORD local_164;
  int local_160;
  DWORD local_15c;
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  ulonglong local_128;
  undefined4 *local_120;
  undefined4 *local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  ulonglong local_e8;
  char *local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  int local_ac;
  undefined *local_a8;
  undefined8 local_a0;
  _SYSTEM_INFO local_98;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_1b8;
  local_180 = 0x87208d25612231d;
  local_188 = 0x4905d8e37536af59;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_180 ^ 0xc0617e390a576a10;
              uVar2 = local_180 ^ local_188;
              local_188 = local_188 ^ 0xc0617e390a576a10;
              local_180 = uVar3;
              if (0x2c5079ffa322bf9 < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x24bc43c5eb2ed655) {
                if ((longlong)uVar2 < -0x4d9adfc73ee2020b) {
                  if (uVar2 == 0x866573d8f6773758) {
                    DAT_1802a6500 = local_120;
                    DAT_1802a6510 = '\x01';
                    local_180 = 0x3f644753b8e8facd;
                    local_188 = 0xf401136fc071c270;
                  }
                  else if (uVar2 == 0x9c65ffc1297777d9) {
                    DAT_1802a64f8 = local_118;
                    local_120 = (undefined4 *)(local_148 + local_d0);
                    local_c8 = (longlong)DAT_1802a64f0 - local_d0;
                    local_180 = 0x6db85a67f5fb25c4;
                    if ((ulonglong)(local_c8 + local_140) < local_150) {
                      local_180 = 0x7eb79673806a0341;
                    }
                    local_188 = 0xb5d2c24ff8f33bfc;
                  }
                  else if (uVar2 == 0x9c78b272a268d744) {
                    FUN_1801b3ef0(DAT_1802a64f8,&DAT_1802a6508,local_170);
                    FUN_1801b3ef0(DAT_1802a6500,&DAT_1802a650c,local_170);
                    DAT_1802a6510 = '\0';
                    local_180 = 0xe3acd43dae9e3fce;
                    local_188 = 0xc8e8ad208c02dcd8;
                  }
                }
                else if ((longlong)uVar2 < -0x349aabc38766c743) {
                  if (uVar2 == 0xb2652038c11dfdf5) {
                    local_180 = 0xdf01e97fd4a67932;
                    if (DAT_1802a64f0 == (undefined4 *)0x0) {
                      local_180 = 0x846f6d4a3c15e710;
                    }
                    local_188 = 0xa71cedb880e14ba9;
                    local_f8 = DAT_1802a64f0;
                  }
                  else if (uVar2 == 0xc6940c3daf9e6a1a) {
                    local_100 = local_108;
                    local_128 = local_158 - local_108;
                    local_180 = 0x4eae49add9b689a6;
                    local_188 = 0xa19f830d6eeff175;
                  }
                }
                else if (uVar2 == 0xcb65543c789938bd) {
                  local_180 = 0x156dc5b592e50b41;
                  local_188 = 0xce2e798f863422ea;
                }
                else if (uVar2 == 0xd86a98280d081e38) {
                  _DAT_1802a650c = *local_120;
                  local_ac = local_160 + (int)local_c8;
                  cVar1 = FUN_1801b3ef0(local_120,&local_ac,local_170);
                  local_180 = 0x11356fde82d417eb;
                  if (cVar1 != '\0') {
                    local_180 = 0x8563f77b8a4a6951;
                  }
                  local_188 = 0x30684a37c3d5e09;
                }
              }
              else if ((longlong)uVar2 < -0x10ce355f48a6872d) {
                if ((longlong)uVar2 < -0x1c71235430b01d40) {
                  if (uVar2 == 0xdb43bc3a14d129ab) {
                    local_b8 = DAT_1802a64f0;
                    local_180 = 0xb2db5481bca83980;
                    if (DAT_1802a64f0 == (undefined4 *)0x0) {
                      local_180 = 0x6fe2a99a2d1f89f0;
                    }
                    local_188 = 0x44a6d0870f836ae6;
                  }
                  else if (uVar2 == 0xdd62636c75009629) {
                    local_180 = 0x9fdd3689df55c397;
                    if (local_171 != '\0') {
                      local_180 = 0x28e1fde65fa1f7c5;
                    }
                    local_188 = 0xb4994f94fdc92081;
                  }
                }
                else if (uVar2 == 0xe38edcabcf4fe2c0) {
                  local_180 = 0xd615914d133bf699;
                  if (*(char *)(param_1 + 0xe1) != '\0') {
                    local_180 = 0xb89c9f5c600913b1;
                  }
                  local_188 = 0xaca6318ab3de2294;
                }
                else if (uVar2 == 0xee2c2f59b38553a4) {
                  FUN_1801b6c10(param_1 + 0x88);
                  local_180 = 0x69bce39b122c9769;
                  local_188 = 0x130f435cb2c94364;
                }
              }
              else if ((longlong)uVar2 < -0xbce0cccfbca533b) {
                if (uVar2 == 0xef31caa0b75978d3) {
                  local_e8 = local_100;
                  local_f0 = VirtualAlloc((LPVOID)(local_110 - local_100 & local_128),local_170,local_15c,local_164);
                  local_180 = 0x2440fb67ca80bc9c;
                  if (local_f0 == (undefined4 *)0x0) {
                    local_180 = 0xa81a30d34ed141c9;
                  }
                  local_188 = 0x5c2bc3e04ae4ed0c;
                }
                else if (uVar2 == 0xf1a54ea2871f74cc) {
                  local_d8 = &local_a0;
                  local_198 = &DAT_1802a665c;
                  FUN_180165e5c(&DAT_1802a6640,&DAT_1802932fc,0x1e,0x1b);
                  local_a8 = &DAT_1802a6640;
                  local_a0 = local_138;
                  local_130 = FUN_1801b2eb0(&local_a8);
                  local_180 = 0x60ca3dc4d0f994bf;
                  if (local_130 == local_158) {
                    local_180 = 0x9043f751a5272c45;
                  }
                  local_188 = 0x5b26a36dddbe14f8;
                }
              }
              else if (uVar2 == 0xf431f3330435acc5) {
                local_f0 = VirtualAlloc((LPVOID)(local_e8 + local_110 & local_128),local_170,local_15c,local_164);
                local_180 = 0x2a1b749410f5587a;
                if (local_f0 == (undefined4 *)0x0) {
                  local_180 = 0x2cef22c72aafa4e4;
                }
                local_188 = 0x52704c13909109ea;
              }
              else if (uVar2 == 0xf67d8406b32b5366) {
                *local_b8 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x90);
                local_180 = 0x4318d0402910361d;
                local_188 = 0x685ca95d0b8cd50b;
              }
            }
            if ((longlong)uVar2 < 0x4177d03123248c44) break;
            if ((longlong)uVar2 < 0x781d04c75447329b) {
              if (uVar2 == 0x4177d03123248c44) {
                local_158 = 0;
                local_138 = 0x1a;
                local_15c = 0x3000;
                local_140 = -0x80000009;
                local_160 = -9;
                local_170 = 4;
                local_148 = 5;
                local_164 = 4;
                local_150 = 0xffffffff00000000;
                DAT_180291ff8 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90);
                local_e0 = (char *)(param_1 + 0x4c);
                DAT_1802a6518 = *(char *)(param_1 + 0x4c);
                local_180 = 0xa881beebed49ba07;
                if (DAT_1802a6518 != '\0') {
                  local_180 = 0x1dc8b24da9eaa4ca;
                }
                local_188 = 0x4b0f6240220658c7;
              }
              else if (uVar2 == 0x54231e244965b712) {
                DAT_1802a64f0 = (undefined4 *)0x0;
                local_180 = 0x5ab83dbfc3468d23;
                local_188 = 0x91dd6983bbdfb59e;
              }
              else if (uVar2 == 0x56c7d00d8becfc0d) {
                local_180 = 0x3bca18c9cde4fbae;
                if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x90) != '\0') {
                  local_180 = 0xce2b09e4afa3d84d;
                }
                local_188 = 0xd844c46202ab196e;
              }
            }
            else if ((longlong)uVar2 < 0x7ab3a0c7a0e5d40d) {
              if (uVar2 == 0x781d04c75447329b) {
                local_118 = (undefined4 *)(local_148 + local_130);
                local_c0 = (longlong)local_f8 - local_130;
                local_180 = 0xf5e3aa77b0ff70c3;
                if ((ulonglong)(local_c0 + local_140) < local_150) {
                  local_180 = 0x31376d0c37a120f2;
                }
                local_188 = 0xfa5239304f38184f;
              }
              else if (uVar2 == 0x786b388780645190) {
                DAT_1802a64f0 = local_f0;
                *local_f0 = 0xc2a00000;
                local_180 = 0xd86bb5c5fb7210fc;
                local_188 = 0xa076b102af352267;
                local_f8 = DAT_1802a64f0;
              }
            }
            else if (uVar2 == 0x7ab3a0c7a0e5d40d) {
              local_171 = DAT_1802a6510;
              local_180 = 0xe6ca9f5c38d6b637;
              if (*local_e0 != '\0') {
                local_180 = 0x396dfbafb7e40be4;
              }
              local_188 = 0x3ba8fc304dd6201e;
            }
            else if (uVar2 == 0x7e9f6ed4ba3ead0e) {
              local_100 = local_e8 + local_108;
              local_180 = 0xc8dd559bd6dd005c;
              if (0x6fffffff < local_100) {
                local_180 = 0x73cf811f28e1cf9d;
              }
              local_188 = 0x27ec9f3b6184788f;
            }
          }
          if (0x166fcd86ad08c122 < (longlong)uVar2) break;
          if ((longlong)uVar2 < 0x1233eb7dfee949e2) {
            if (uVar2 == 0x2c5079ffa322bfa) {
              local_180 = 0x62a97b698d507952;
              if (local_171 != '\0') {
                local_180 = 0x484f89f11e9e2435;
              }
              local_188 = 0x930c35cb0a4f0d9e;
            }
            else if (uVar2 == 0xfb19347ffc7688c) {
              _DAT_1802a6508 = *local_118;
              local_ac = local_160 + (int)local_c0;
              cVar1 = FUN_1801b3ef0(local_118,&local_ac,local_170);
              local_180 = 0x4863661e473a0690;
              if (cVar1 != '\0') {
                local_180 = 0xc63572a290a438ab;
              }
              local_188 = 0x5a508d63b9d34f72;
            }
          }
          else if (uVar2 == 0x1233eb7dfee949e2) {
            local_180 = 0x227908dfee2cb37f;
            local_188 = 0xe91c5ce396b58bc2;
          }
          else if (uVar2 == 0x143aaed6d3d73125) {
            FUN_1801b71a0(param_1 + 0x88);
            local_180 = 0x6a3b9b11018f7942;
            local_188 = 0x10883bd6a16aad4f;
          }
        }
        if (0x2b44791d229ce315 < (longlong)uVar2) break;
        if (uVar2 == 0x166fcd86ad08c123) {
          local_180 = 0x4de603fab699c5aa;
          if (*(char *)(param_1 + 0xe1) != '\0') {
            local_180 = 0xd9798c64a5f94203;
          }
          local_188 = 0xa3ca2ca3051c960e;
        }
        else if (uVar2 == 0x237380f2bcf4acb9) {
          local_110 = local_130 + 9;
          local_98.dwNumberOfProcessors = 0;
          local_98.dwProcessorType = 0;
          local_98.dwAllocationGranularity = 0;
          local_98.wProcessorLevel = 0;
          local_98.wProcessorRevision = 0;
          local_98.lpMaximumApplicationAddress = (LPVOID)0x0;
          local_98.dwActiveProcessorMask = 0;
          local_98.u = (_union_552)0x0;
          local_98.dwPageSize = 0;
          local_98.lpMinimumApplicationAddress = (LPVOID)0x0;
          GetSystemInfo(&local_98);
          local_108 = local_98._40_8_ & 0xffffffff;
          local_180 = 0x4bd26952bd102074;
          if (0x6fffffff < local_98.dwAllocationGranularity) {
            local_180 = 0xd9657b4b5bebfd7c;
          }
          local_188 = 0x8d46656f128e4a6e;
        }
      }
      if (uVar2 != 0x3bec9ea90d478047) break;
      local_198 = &DAT_1802a667c;
      FUN_180165e5c(&DAT_1802a6660,&DAT_180293351,0x1d,0x1b);
      local_a8 = &DAT_1802a6660;
      *local_d8 = local_138;
      local_d0 = FUN_1801b2eb0(&local_a8);
      local_180 = 0x179c1efdb3e59acf;
      if (local_d0 == local_158) {
        local_180 = 0x6e9c6af90a615f87;
      }
      local_188 = 0xa5f93ec572f8673a;
    }
  } while (uVar2 != 0x2b44791d229ce316);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_1b8)) {
  }
  return;
}



void FUN_1801656f0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_50 = 0x785308840588711f;
  local_58 = 0x24e8b1ddfc54701f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x52f60a90f42d6a1a;
        if (uVar1 != 0x3ca6ee27bd01bd8f) break;
        FUN_1801b3ef0(DAT_1802a64f8,&DAT_1802a6508,local_48);
        FUN_1801b3ef0(DAT_1802a6500,&DAT_1802a650c,local_48);
        DAT_1802a6510 = '\0';
        local_50 = 0x33fe83fdbcd1cfd2;
        local_58 = 0x3e5fc6e232120ed0;
      }
      if (uVar1 != 0x5cbbb959f9dc0100) break;
      local_48 = 4;
      DAT_1802a6518 = 0;
      FUN_1801b71a0(param_1 + 0x88);
      local_50 = 0x9d99892ae31c2593;
      if (DAT_1802a6510 != '\0') {
        local_50 = 0xac9e2212d0de591e;
      }
      local_58 = 0x9038cc356ddfe491;
    }
    local_50 = local_50 ^ 0x52f60a90f42d6a1a;
  } while (uVar1 != 0xda1451f8ec3c102);
  return;
}



int FUN_180165870(undefined8 param_1)

{
  ulonglong uVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;

  local_50 = 0xf397b902c25d2341;
  local_58 = 0x200f4692fa8ec78d;
  do {
    while( true ) {
      uVar1 = local_50 ^ local_58;
      local_58 = local_58 ^ 0xb8932f659a6e343c;
      if (0x12e512bf269fecb2 < (longlong)uVar1) break;
      if (uVar1 == 0x85cdbe458b8e0ed3) {
        local_5c = FUN_1801eaef0((float)local_60 / local_44);
        if (local_5c < 2) {
          local_5c = 1;
        }
        local_50 = 0xe1663ac997e0f3f5;
        local_58 = 0xf3832876b17f1f46;
      }
      else {
        local_50 = local_50 ^ 0xb8932f659a6e343c;
        if (uVar1 == 0xd398ff9038d3e4cc) {
          local_60 = (*DAT_180291fe8)(param_1);
          local_50 = 0x844e3390bb5db9a0;
          if ((DAT_1802a6518 & 1) != 0) {
            local_50 = 0x8dac6a374248d0f0;
          }
          local_58 = 0x96ab212f9dc25513;
LAB_1801659f2:
          local_5c = local_60;
        }
      }
    }
    if (uVar1 == 0x1b074b18df8a85e3) {
      local_44 = DAT_180291ff8;
      local_50 = 0xd1b5b44ab0381b64;
      if (0.0 < DAT_180291ff8) {
        local_50 = 0x469d18b01d29f904;
      }
      local_58 = 0xc350a6f596a7f7d7;
      goto LAB_1801659f2;
    }
    local_50 = local_50 ^ 0xb8932f659a6e343c;
    if (uVar1 == 0x12e512bf269fecb3) {
      return local_5c;
    }
  } while( true );
}



void FUN_180165a50(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0xcdc17e8268f0d266;
  local_58 = 0xfebc0d52274c3659;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xba02d5ad1cc8763b;
        if (uVar1 != 0xf1179b173600cfed) break;
        (**(code **)(param_1 + 0x10))(local_48,param_2);
        local_50 = 0x5ef8d4530d020243;
        local_58 = 0x8202303ad6f141e8;
      }
      if (uVar1 != 0x337d73d04fbce43f) break;
      local_48 = *(longlong *)(param_1 + 8);
      local_50 = 0x5976022805b4b720;
      if (*(char *)(local_48 + 0x4c) != '\0') {
        local_50 = 0x749b7d56e8473b66;
      }
      local_58 = 0x858ce641de47f48b;
    }
    local_50 = local_50 ^ 0xba02d5ad1cc8763b;
  } while (uVar1 != 0xdcfae469dbf343ab);
  return;
}



void FUN_180165b80(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xd6497156b041c907;
  local_50 = 0x2d3d9aeaad374b1a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb5e0c9985978e307;
        if (uVar1 != 0xd64bb114484c2a0e) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0x1b8671f3e9061498;
        local_50 = 0x12c67bf26ffaf835;
      }
      if (uVar1 != 0xfb74ebbc1d76821d) break;
      local_48 = 0x2fe37ba3ea36d821;
      if (param_2 != '\0') {
        local_48 = 0xf0e8c0b624861e82;
      }
      local_50 = 0x26a371a26cca348c;
    }
    local_48 = local_48 ^ 0xb5e0c9985978e307;
  } while (uVar1 != 0x9400a0186fcecad);
  return;
}



longlong FUN_180165ca0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xca3a6c0c1ef1bf29;
  local_50 = 0xe9917ead2677e88f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x5ac536780d752fa5;
        if (uVar1 != 0x23ab12a1388657a6) break;
        FUN_18011a170(param_1 + 0x88);
        FUN_180106c90(param_1);
        local_48 = 0xad45ed9a1a94ddbb;
        if ((param_2 & 1) == 0) {
          local_48 = 0x149ac9ef8020c1c0;
        }
        local_50 = 0xef8b1c182a6d7e28;
      }
      if (uVar1 != 0x42cef18230f9a393) break;
      thunk_FUN_1801f42e0(param_1,0xe8);
      local_48 = 0xa3a5964cedd09ed9;
      local_50 = 0x58b443bb479d2131;
    }
    local_48 = local_48 ^ 0x5ac536780d752fa5;
  } while (uVar1 != 0xfb11d5f7aa4dbfe8);
  return param_1;
}



void FUN_180165e00(void)

{
  atexit((_func_5014 *)&LAB_180163ed0);
  FUN_180165e5c(&DAT_1802a6519,&DAT_1802920cd,0x11,0x10,&DAT_1802a652c);
  FUN_1800f0070(&DAT_1802a64e8,&DAT_1802a6519,FUN_180163ee0);
  return;
}



void FUN_180165e5c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x2037193899212832;
  local_68 = 0x2f9d945c59070918;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x1b41de092cb99031;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x1b41de092cb99031;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x18eb11e8bc2c2c30) break;
          if (uVar1 == 0x18eb11e8bc2c2c30) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x7e4834fc4f997bab;
            local_68 = 0x3df5b18cf297df11;
          }
          else if (uVar1 == 0x43bd8570bd0ea4ba) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0xf2612819f464a14c;
            if (local_54 == param_4) {
              local_60 = 0x9e5004515d4f1c5b;
            }
            local_68 = 0x26f361b33bfdf1cc;
          }
          else if (uVar1 == 0x5ce1b9012718ed07) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0x47b7073fae51529e;
            local_68 = 0x40a824f135ff624;
          }
        }
        if (0x1217ba0e475b105 < (longlong)uVar1) break;
        if (uVar1 == 0xb8a365e266b2ed97) {
          *param_5 = 1;
          local_60 = 0x9cb48bb67a116174;
          local_68 = 0x9d95f0169e64d072;
        }
        else if (uVar1 == 0xd49249aacf995080) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0xd26fdf7186ae8ec4;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0x966577981d9a4ff3;
          }
          local_68 = 0xca84ce993a82a2f4;
        }
      }
      if (uVar1 != 0xfaa8d64c026212a) break;
      local_60 = 0x1addd21629902e57;
      if (*param_5 == 1) {
        local_60 = 0xcf6ee01c027ccfd1;
      }
      local_68 = 0xce4f9bbce6097ed7;
      local_54 = 0;
      local_6b = 0;
      local_48 = (int)param_3 + param_2;
    }
  } while (uVar1 != 0x1217ba0e475b106);
  return;
}



void FUN_180166120(longlong param_1)

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



void Unwind_180166260(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_180166290(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x1a;
  local_20 = 0x1f;
  local_38 = puVar6;
  FUN_180168b8c(&DAT_1802a68cc,&DAT_180293a0a,0x19,0x1b,&DAT_1802a68e8);
  uVar4 = uRam00000001802a68de;
  *(ulonglong *)((longlong)puVar6 + 10) = CONCAT26(uRam00000001802a68dc,CONCAT42(uRam00000001802a68d8,_DAT_1802a68d6));
  *(undefined8 *)((longlong)puVar6 + 0x12) = uVar4;
  uVar3 = uRam00000001802a68d8;
  uVar2 = uRam00000001802a68d0;
  uVar1 = CONCAT22(_DAT_1802a68d6,uRam00000001802a68d4);
  *puVar6 = _DAT_1802a68cc;
  puVar6[1] = uVar2;
  puVar6[2] = uVar1;
  puVar6[3] = uVar3;
  *(undefined1 *)((longlong)puVar6 + 0x1a) = 0;
  FUN_1801679e0(&PTR_PTR_180293390,&local_38,lVar5 + 0x5a11f0,FUN_180167dc0);
  return 1;
}



undefined8 * FUN_180166390(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined **local_3a8;
  undefined8 *local_3a0;
  code *local_398;
  undefined ***local_370;
  undefined4 *local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined3 uStack_104;
  undefined1 local_101;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined3 uStack_e4;
  undefined1 local_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined3 uStack_c4;
  undefined1 local_c1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 *local_30;
  undefined1 local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_7c = 0x43340000;
  local_78 = 0xc3340000;
  local_3c = 0;
  local_74 = 0x40800000;
  local_38 = 0x3c23d70a;
  local_70 = 0x40400000;
  local_34 = 0x3f800000;
  local_6c = 0xc0800000;
  local_68 = 0xc0400000;
  local_a8 = 7;
  local_48 = 0;
  local_60 = 0x20;
  local_58 = 0x1f;
  local_50 = 0xf;
  local_a0 = 0x1d;
  local_98 = 0x30;
  local_21 = 0;
  local_88 = 10;
  local_90 = 0x2f;
  local_64 = 0;
  local_360 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(0x30);
  local_358 = 0x26;
  local_350 = local_90;
  local_368 = puVar3;
  FUN_180168b8c(&DAT_1802a66ac,&DAT_1802934d5,0x1f,0x27,&DAT_1802a66d4);
  *(ulonglong *)((longlong)puVar3 + 0x1e) = CONCAT62(DAT_1802a66ca._2_6_,(undefined2)DAT_1802a66ca);
  uVar5 = CONCAT26((undefined2)DAT_1802a66ca,uRam00000001802a66c4);
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a66bc;
  *(undefined8 *)(puVar3 + 6) = uVar5;
  uVar2 = uRam00000001802a66b8;
  uVar1 = uRam00000001802a66b4;
  uVar6 = uRam00000001802a66b0;
  *puVar3 = _DAT_1802a66ac;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x26) = local_21;
  local_320 = local_48;
  local_318 = 9;
  local_310 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a669c,&DAT_180293494,0x1f,10,&DAT_1802a66a8);
  local_320 = CONCAT71(local_320._1_7_,DAT_1802a66a4);
  local_328 = DAT_1802a669c;
  FUN_1801063a0(param_1,&local_328,&local_368,local_64,CONCAT44(uVar6,local_64));
  *param_1 = &PTR_FUN_18021d530;
  local_248 = (undefined8 *)0x0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_30 = param_1;
  puVar4 = (undefined8 *)FUN_1801d61c8(local_98);
  local_238 = 0x2a;
  uStack_230 = local_90;
  uVar6 = 1;
  local_248 = puVar4;
  FUN_180168b8c(&DAT_1802a66d8,&DAT_180293533,0x12,0x2b,&DAT_1802a6704);
  uVar5 = uRam00000001802a66fa;
  *(ulonglong *)((longlong)puVar4 + 0x1a) = CONCAT26(uRam00000001802a66f8,_DAT_1802a66f2);
  *(undefined8 *)((longlong)puVar4 + 0x22) = uVar5;
  uVar5 = CONCAT62(_DAT_1802a66f2,uRam00000001802a66f0);
  puVar4[2] = _DAT_1802a66e8;
  puVar4[3] = uVar5;
  uVar5 = uRam00000001802a66e0;
  *puVar4 = _DAT_1802a66d8;
  puVar4[1] = uVar5;
  *(undefined1 *)((longlong)puVar4 + 0x2a) = local_21;
  local_340 = local_48;
  local_338 = 8;
  local_330 = local_50;
  local_348 = 0x564f46206d657449;
  uVar5 = FUN_180108270(local_30,&local_348,&local_248,0x428c0000,CONCAT44(uVar6,local_34),0x43330000,local_34);
  local_30[0xe] = uVar5;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = (undefined4 *)0x0;
  uStack_220 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_218 = 0x19;
  uStack_210 = local_58;
  local_228 = puVar3;
  FUN_180168b8c(&DAT_1802a6708,&DAT_18029358f,0x19,0x1a,&DAT_1802a6724);
  uVar5 = uRam00000001802a6719;
  *(ulonglong *)((longlong)puVar3 + 9) = CONCAT17(uRam00000001802a6718,CONCAT43(uRam00000001802a6714,_DAT_1802a6711));
  *(undefined8 *)((longlong)puVar3 + 0x11) = uVar5;
  uVar2 = uRam00000001802a6714;
  uVar1 = uRam00000001802a6710;
  uVar6 = uRam00000001802a670c;
  *puVar3 = _DAT_1802a6708;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x19) = local_21;
  local_300 = local_48;
  local_2f8 = local_88;
  local_2f0 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a6728,&DAT_1802935d9,0x13,0xb,&DAT_1802a6734);
  local_300 = CONCAT62(local_300._2_6_,DAT_1802a6730);
  local_308 = DAT_1802a6728;
  uVar5 = FUN_180108270(local_30,&local_308,&local_228,local_3c,CONCAT44(uVar6,local_6c),local_74,local_38);
  local_30[0xf] = uVar5;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = (undefined4 *)0x0;
  uStack_200 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_1f8 = 0x16;
  uStack_1f0 = local_58;
  local_208 = puVar3;
  FUN_180168b8c(&DAT_1802a6738,&DAT_180293609,0x14,0x17,&DAT_1802a6750);
  *(ulonglong *)((longlong)puVar3 + 0xe) = CONCAT62(DAT_1802a6746._2_6_,(undefined2)DAT_1802a6746);
  uVar2 = uRam00000001802a6740;
  uVar1 = uRam00000001802a673c;
  uVar6 = CONCAT22((undefined2)DAT_1802a6746,uRam00000001802a6744);
  *puVar3 = _DAT_1802a6738;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  puVar3[3] = uVar6;
  *(undefined1 *)((longlong)puVar3 + 0x16) = local_21;
  local_2e0 = local_48;
  local_2d8 = local_88;
  local_2d0 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a6754,&DAT_18029364b,0x1e,0xb,&DAT_1802a6760);
  local_2e0 = CONCAT62(local_2e0._2_6_,DAT_1802a675c);
  local_2e8 = DAT_1802a6754;
  uVar5 = FUN_180108270(local_30,&local_2e8,&local_208,local_3c,CONCAT44(uVar6,local_6c),local_74,local_38);
  local_30[0x10] = uVar5;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = (undefined4 *)0x0;
  uStack_1e0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_1d8 = local_58;
  uStack_1d0 = local_58;
  local_1e8 = puVar3;
  FUN_180168b8c(&DAT_1802a6764,&DAT_180293686,0x1c,0x20,&DAT_1802a6784);
  uVar5 = uRam00000001802a677b;
  *(ulonglong *)((longlong)puVar3 + 0xf) = CONCAT71(uRam00000001802a6774,DAT_1802a6773);
  *(undefined8 *)((longlong)puVar3 + 0x17) = uVar5;
  uVar2 = uRam00000001802a6770;
  uVar1 = uRam00000001802a676c;
  uVar6 = uRam00000001802a6768;
  *puVar3 = _DAT_1802a6764;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1f) = local_21;
  local_2c0 = local_48;
  local_2b8 = local_88;
  local_2b0 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a6788,&DAT_1802936d5,0x1a,0xb,&DAT_1802a6794);
  local_2c0 = CONCAT62(local_2c0._2_6_,DAT_1802a6790);
  local_2c8 = DAT_1802a6788;
  uVar5 = FUN_180108270(local_30,&local_2c8,&local_1e8,local_3c,CONCAT44(uVar6,local_6c),local_74,local_38);
  local_30[0x11] = uVar5;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = (undefined4 *)0x0;
  uStack_1c0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_98);
  local_1b8 = 0x21;
  uStack_1b0 = local_90;
  local_1c8 = puVar3;
  FUN_180168b8c(&DAT_1802a6798,&DAT_18029370b,0x10,0x22,&DAT_1802a67bc);
  *(undefined1 *)(puVar3 + 8) = DAT_1802a67b8;
  uVar5 = uRam00000001802a67b0;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a67a8;
  *(undefined8 *)(puVar3 + 6) = uVar5;
  uVar2 = uRam00000001802a67a4;
  uVar1 = uRam00000001802a67a0;
  uVar6 = uRam00000001802a679c;
  *puVar3 = _DAT_1802a6798;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x21) = local_21;
  local_2a0 = local_48;
  local_298 = local_88;
  local_290 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a67c0,&DAT_180293752,0x18,0xb,&DAT_1802a67cc);
  local_2a0 = CONCAT62(local_2a0._2_6_,DAT_1802a67c8);
  local_2a8 = DAT_1802a67c0;
  uVar5 = FUN_180108270(local_30,&local_2a8,&local_1c8,local_3c,CONCAT44(uVar6,local_78),local_7c,local_34);
  local_30[0x12] = uVar5;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_198 = local_58;
  uStack_190 = local_58;
  local_1a8 = puVar3;
  FUN_180168b8c(&DAT_1802a67d0,&DAT_18029378a,0x12,0x20,&DAT_1802a67f0);
  uVar5 = uRam00000001802a67e7;
  *(ulonglong *)((longlong)puVar3 + 0xf) = CONCAT71(uRam00000001802a67e0,DAT_1802a67df);
  *(undefined8 *)((longlong)puVar3 + 0x17) = uVar5;
  uVar2 = uRam00000001802a67dc;
  uVar1 = uRam00000001802a67d8;
  uVar6 = uRam00000001802a67d4;
  *puVar3 = _DAT_1802a67d0;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1f) = local_21;
  local_280 = local_48;
  local_278 = local_88;
  local_270 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a67f4,&DAT_1802937d6,0x11,0xb,&DAT_1802a6800);
  local_280 = CONCAT62(local_280._2_6_,DAT_1802a67fc);
  local_288 = DAT_1802a67f4;
  uVar5 = FUN_180108270(local_30,&local_288,&local_1a8,local_3c,CONCAT44(uVar6,local_78),local_7c,local_34);
  local_30[0x13] = uVar5;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_98);
  local_178 = local_60;
  uStack_170 = local_90;
  local_188 = puVar3;
  FUN_180168b8c(&DAT_1802a6804,&DAT_180293802,0x10,0x21,&DAT_1802a6828);
  uVar5 = uRam00000001802a681c;
  *(undefined8 *)(puVar3 + 4) = _DAT_1802a6814;
  *(undefined8 *)(puVar3 + 6) = uVar5;
  uVar2 = uRam00000001802a6810;
  uVar1 = uRam00000001802a680c;
  uVar6 = uRam00000001802a6808;
  *puVar3 = _DAT_1802a6804;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)(puVar3 + 8) = local_21;
  local_260 = local_48;
  local_258 = local_88;
  local_250 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a682c,&DAT_180293843,0x10,0xb,&DAT_1802a6838);
  local_260 = CONCAT62(local_260._2_6_,DAT_1802a6834);
  local_268 = DAT_1802a682c;
  uVar5 = FUN_180108270(local_30,&local_268,&local_188,local_3c,CONCAT44(uVar6,local_78),local_7c,local_34);
  local_30[0x14] = uVar5;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_158 = local_a0;
  uStack_150 = local_58;
  local_168 = puVar3;
  FUN_180168b8c(&DAT_1802a683c,&DAT_180293874,0x14,0x1e,&DAT_1802a685c);
  uVar5 = uRam00000001802a6851;
  *(ulonglong *)((longlong)puVar3 + 0xd) = CONCAT53(uRam00000001802a684c,_DAT_1802a6849);
  *(undefined8 *)((longlong)puVar3 + 0x15) = uVar5;
  uVar2 = uRam00000001802a6848;
  uVar1 = uRam00000001802a6844;
  uVar6 = uRam00000001802a6840;
  *puVar3 = _DAT_1802a683c;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1d) = local_21;
  local_100 = local_48;
  local_f8 = local_a8;
  local_f0 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a6860,&DAT_1802938b8,0x19,8,&DAT_1802a6868);
  uStack_104 = uRam00000001802a6864;
  local_108 = DAT_1802a6860;
  local_101 = local_21;
  uVar5 = FUN_180108270(local_30,&local_108,&local_168,local_34,CONCAT44(uVar6,local_68),local_70,local_38);
  local_30[0x15] = uVar5;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (undefined4 *)0x0;
  uStack_140 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_138 = local_a0;
  uStack_130 = local_58;
  local_148 = puVar3;
  FUN_180168b8c(&DAT_1802a686c,&DAT_1802938f0,0x18,0x1e,&DAT_1802a688c);
  uVar5 = uRam00000001802a6881;
  *(ulonglong *)((longlong)puVar3 + 0xd) = CONCAT53(uRam00000001802a687c,_DAT_1802a6879);
  *(undefined8 *)((longlong)puVar3 + 0x15) = uVar5;
  uVar2 = uRam00000001802a6878;
  uVar1 = uRam00000001802a6874;
  uVar6 = uRam00000001802a6870;
  *puVar3 = _DAT_1802a686c;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1d) = local_21;
  local_e0 = local_48;
  local_d8 = local_a8;
  local_d0 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a6890,&DAT_18029393f,0x1e,8,&DAT_1802a6898);
  uStack_e4 = uRam00000001802a6894;
  local_e8 = DAT_1802a6890;
  local_e1 = local_21;
  uVar5 = FUN_180108270(local_30,&local_e8,&local_148,local_34,CONCAT44(uVar6,local_68),local_70,local_38);
  local_30[0x16] = uVar5;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (undefined4 *)0x0;
  uStack_120 = 0;
  puVar3 = (undefined4 *)FUN_1801d61c8(local_60);
  local_118 = local_a0;
  uStack_110 = local_58;
  local_128 = puVar3;
  FUN_180168b8c(&DAT_1802a689c,&DAT_180293981,0x1f,0x1e,&DAT_1802a68bc);
  uVar5 = uRam00000001802a68b1;
  *(ulonglong *)((longlong)puVar3 + 0xd) = CONCAT53(uRam00000001802a68ac,_DAT_1802a68a9);
  *(undefined8 *)((longlong)puVar3 + 0x15) = uVar5;
  uVar2 = uRam00000001802a68a8;
  uVar1 = uRam00000001802a68a4;
  uVar6 = uRam00000001802a68a0;
  *puVar3 = _DAT_1802a689c;
  puVar3[1] = uVar6;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1d) = local_21;
  local_c0 = local_48;
  local_b8 = local_a8;
  local_b0 = local_50;
  uVar6 = 1;
  FUN_180168b8c(&DAT_1802a68c0,&DAT_1802939d4,0x1e,8,&DAT_1802a68c8);
  uStack_c4 = uRam00000001802a68c4;
  local_c8 = DAT_1802a68c0;
  local_c1 = local_21;
  uVar5 = FUN_180108270(local_30,&local_c8,&local_128,local_34,CONCAT44(uVar6,local_68),local_70,local_38);
  local_30[0x17] = uVar5;
  uVar5 = FUN_1800ba260();
  local_3a8 = &PTR_LAB_18021d570;
  local_3a0 = local_30;
  local_398 = FUN_180167490;
  local_370 = &local_3a8;
  FUN_180130290(uVar5,local_30,local_370,local_64);
  return local_30;
}



void Unwind_180167460(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x3b8));
  return;
}



void FUN_180167490(longlong param_1)

{
  ulonglong uVar1;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x3c9c6d0455d48631;
  local_50 = 0x6942a37a93cadaaf;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xf7c7a72806ed6de;
        if (uVar1 != 0xd5531f168684770f) break;
        local_54 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90);
        local_48 = 0xb70ba9c5fa63f481;
        local_50 = 0xe47e3ca72368906b;
      }
      if (uVar1 != 0x55dece7ec61e5c9e) break;
      DAT_1802a6681 = *(char *)(param_1 + 0x4c);
      DAT_1802a6684 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90);
      DAT_1802a6688 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x90);
      DAT_1802a668c = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x90);
      DAT_1802a6690 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x90);
      DAT_1802a6694 = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x90);
      DAT_1802a6698 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x90);
      DAT_1802933d0 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x90);
      DAT_1802933d4 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x90);
      DAT_1802933d8 = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x90);
      local_48 = 0x532e999f44a0a357;
      if (DAT_1802a6681 != '\0') {
        local_48 = 0xd50813eb1b2fb0b2;
      }
      local_50 = 0x5b0cfd9dabc7bd;
      local_54 = 0;
    }
    local_48 = local_48 ^ 0xf7c7a72806ed6de;
  } while (uVar1 != 0x53759562d90b64ea);
  FUN_1800edda0(local_54);
  return;
}



void FUN_180167690(longlong param_1)

{
  ulonglong uVar1;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x7c81de981cf1049;
  local_50 = 0xf49eba321af51eff;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xb8ec39e2081d67d4;
        if (uVar1 != 0xeb4ee13c568db2d7) break;
        local_54 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90);
        local_48 = 0x28ab0e382d1f7f1a;
        local_50 = 0xf7518cfa13479848;
      }
      if (uVar1 != 0xf356a7db9b3a0eb6) break;
      DAT_1802a6681 = *(char *)(param_1 + 0x4c);
      DAT_1802a6684 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x90);
      DAT_1802a6688 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x90);
      DAT_1802a668c = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x90);
      DAT_1802a6690 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x90);
      DAT_1802a6694 = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x90);
      DAT_1802a6698 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x90);
      DAT_1802933d0 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x90);
      DAT_1802933d4 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x90);
      DAT_1802933d8 = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x90);
      local_48 = 0x2b2dd0c029bffc5c;
      if (DAT_1802a6681 != '\0') {
        local_48 = 0x1f99b33e416aa9d9;
      }
      local_50 = 0xf4d7520217e71b0e;
      local_54 = 0;
    }
    local_48 = local_48 ^ 0xb8ec39e2081d67d4;
  } while (uVar1 != 0xdffa82c23e58e752);
  FUN_1800edda0(local_54);
  return;
}



undefined1 FUN_1801678b0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x8cf7f55ce9c8fb8b;
  local_68 = 0x6a89c7232490f76a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x570d9e998a472c14;
        if (uVar1 != 0xe67e327fcd580ce1) break;
        local_60 = 0x2752abb842681f11;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xa9d3b4fbacf3a81;
        }
        local_68 = 0x10d54a80e01e9e42;
        local_69 = 1;
      }
      if (uVar1 != 0x1a4871cf5ad1a4c3) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x2d8431852ef52a86;
      local_68 = 0x1a03d0bd8c83abd5;
    }
    local_60 = local_60 ^ 0x570d9e998a472c14;
  } while (uVar1 != 0x3787e138a2768153);
  return local_69;
}



ulonglong FUN_1801679e0(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined4 local_50;
  uint local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 0x28;
  local_88 = 0xfff;
  local_48 = 0;
  local_80 = 0x20;
  local_78 = 4;
  local_58 = 0xf;
  local_39 = 0;
  local_70 = -8;
  local_50 = 4;
  local_4c = 0;
  local_68 = 1;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_180167d69;
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
    FUN_180168b8c(&DAT_1802a68ec,&DAT_180293a53,0x11,0x19,&DAT_1802a6908);
    local_d8 = &DAT_1802a68ec;
    local_d0 = 0x18;
    FUN_180168b8c(&DAT_1802a690c,&DAT_180293a98,0x14,5,&DAT_1802a6914);
    local_c8 = &DAT_1802a690c;
    local_c0 = local_78;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_180167d17:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180167d57;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_180168b8c(&DAT_1802a6918,&DAT_180293acb,0x15,0x22,&DAT_1802a693c);
      local_b8 = &DAT_1802a6918;
      local_b0 = 0x21;
      FUN_180168b8c(&DAT_1802a690c,&DAT_180293a98,0x14,5,&DAT_1802a6914);
      local_a8 = &DAT_1802a690c;
      local_a0 = local_78;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_180167d17;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_180167d57;
  }
  lVar10 = *local_60;
  uVar13 = local_68 + uVar9;
  lVar11 = lVar10;
  if (local_88 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_80 <= (ulonglong)((lVar10 + local_70) - lVar11)) {
LAB_180167d69:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_90;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_180167d57:
  return uVar12 & 0xffffffff;
}



void Unwind_180167d90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_180167dc0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auStack_158 [32];
  float local_138;
  float local_12c;
  ulonglong local_128;
  ulonglong local_120;
  float local_114;
  undefined1 (*local_110) [16];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  code *local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 (*local_d0) [16];
  undefined1 (*local_c8) [16];
  longlong local_c0;
  code *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_158;
  local_120 = 0x9ffbf89f1c0d6467;
  local_128 = 0x5236c8edda7ba992;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_120 ^ 0x6ea6537814f7a7b1;
              uVar3 = local_120 ^ local_128;
              local_128 = local_128 ^ 0x6ea6537814f7a7b1;
              local_120 = uVar5;
              if ((longlong)uVar3 < -0x2c1d22469f81d7f8) break;
              if ((longlong)uVar3 < 0x387ad037b41f890) {
                if ((longlong)uVar3 < -0x2aeaa71105d7c667) {
                  if (uVar3 == 0xd3e2ddb9607e2808) {
                    (*DAT_1802933c0)(param_1,param_2,param_3);
                    local_120 = 0xbeb6c2263981a01a;
                    local_128 = 0xe9403bd49bac9ee;
                  }
                  else if (uVar3 == 0xd454cd221d97d7e9) {
                    local_a8 = *(undefined8 *)*local_110;
                    uStack_a0 = *(undefined8 *)(*local_110 + 8);
                    local_98 = *(undefined4 *)local_110[1];
                    uStack_94 = *(undefined4 *)(local_110[1] + 4);
                    uStack_90 = *(undefined4 *)(local_110[1] + 8);
                    uStack_8c = *(undefined4 *)(local_110[1] + 0xc);
                    local_88 = *(undefined4 *)local_110[2];
                    uStack_84 = *(undefined4 *)(local_110[2] + 4);
                    uStack_80 = *(undefined4 *)(local_110[2] + 8);
                    uStack_7c = *(undefined4 *)(local_110[2] + 0xc);
                    local_78 = *(undefined4 *)local_110[3];
                    uStack_74 = *(undefined4 *)(local_110[3] + 4);
                    uStack_70 = *(undefined4 *)(local_110[3] + 8);
                    uStack_6c = *(undefined4 *)(local_110[3] + 0xc);
                    local_c0 = FUN_1801b2b70();
                    lVar4 = FUN_1801b2b70();
                    local_e8 = (code *)(lVar4 + 0x180010);
                    lVar4 = FUN_1801b2b70();
                    local_b8 = (code *)(lVar4 + 0x15d560);
                    local_f4 = DAT_1802a6684;
                    local_f0 = DAT_1802a6688;
                    local_ec = DAT_1802a668c;
                    local_120 = 0x71bd57ca928c7aae;
                    if (DAT_1802a668c != local_12c) {
                      local_120 = 0x50c3a529396e0193;
                    }
                    if (DAT_1802a6688 != local_12c) {
                      local_120 = 0x50c3a529396e0193;
                    }
                    if (NAN(DAT_1802a6688) || NAN(local_12c)) {
                      local_120 = 0x50c3a529396e0193;
                    }
                    if (DAT_1802a6684 != local_12c) {
                      local_120 = 0x50c3a529396e0193;
                    }
                    if (NAN(DAT_1802a6684) || NAN(local_12c)) {
                      local_120 = 0x50c3a529396e0193;
                    }
                    local_128 = 0xbb7b8e6189667888;
                  }
                }
                else if (uVar3 == 0xd51558eefa283999) {
                  local_c8 = (undefined1 (*) [16])*local_b0;
                  local_120 = 0xb496605ae25bd24e;
                  if (local_c8 == local_d0) {
                    local_120 = 0xa4310df94da59102;
                  }
                  local_128 = 0x77d3d0402ddbb90a;
                }
                else if (uVar3 == 0xebb82b48b008791b) {
                  (*(code *)(local_c0 + 0x15d390))(local_110,local_f4,local_f0,local_ec);
                  local_120 = 0x241f457eb5c9bab4;
                  local_128 = 0xeed99cd5ae23b892;
                }
              }
              else if ((longlong)uVar3 < 0x3fffabc48be643ee) {
                if (uVar3 == 0x387ad037b41f890) {
                  local_138 = local_12c;
                  (*local_e8)(local_110,local_d4 * local_104,local_12c,local_114);
                  local_120 = 0x50bc26f963c4e233;
                  local_128 = 0x621182c5847ffa22;
                }
                else if (uVar3 == 0x32ada43ce7bb1811) {
                  local_dc = DAT_1802a6698;
                  local_120 = 0x60dc52b15b5a28a2;
                  if (DAT_1802a6698 != local_12c) {
                    local_120 = 0x868255b0db47ae6d;
                  }
                  if (NAN(DAT_1802a6698) || NAN(local_12c)) {
                    local_120 = 0x868255b0db47ae6d;
                  }
                  local_128 = 0x316134f535863ad9;
                }
              }
              else if (uVar3 == 0x3fffabc48be643ee) {
                lVar4 = FUN_1801b2b70();
                local_b0 = (longlong *)(lVar4 + 0x192aed8);
                cVar2 = FUN_1801b3c30(local_b0,8);
                local_120 = 0x3852878750dc9467;
                if (cVar2 != '\0') {
                  local_120 = 0x3ea502d0ca8a85f6;
                }
                local_128 = 0xebb05a3e30a2bc6f;
              }
              else if (uVar3 == 0x51bd66446edc127b) {
                local_100 = DAT_1802933d0;
                local_fc = DAT_1802933d4;
                local_f8 = DAT_1802933d8;
                local_120 = 0x504d723fab69d6ed;
                if (DAT_1802933d8 != local_114) {
                  local_120 = 0x2fe7dbd589440df9;
                }
                if (DAT_1802933d4 != local_114) {
                  local_120 = 0x2fe7dbd589440df9;
                }
                if (NAN(DAT_1802933d4) || NAN(local_114)) {
                  local_120 = 0x2fe7dbd589440df9;
                }
                if (DAT_1802933d0 != local_114) {
                  local_120 = 0x2fe7dbd589440df9;
                }
                if (NAN(DAT_1802933d0) || NAN(local_114)) {
                  local_120 = 0x2fe7dbd589440df9;
                }
                local_128 = 0xef348220730127b1;
              }
              else if (uVar3 == 0x707ba770499b8d12) {
                local_d4 = DAT_1802a6694;
                local_120 = 0x269b1e7caa84413f;
                if (DAT_1802a6694 != local_12c) {
                  local_120 = 0x17b11743367ea1be;
                }
                local_128 = 0x1436ba404d3f592e;
              }
            }
            if ((longlong)uVar3 < -0x3cba4fe5307f94bc) break;
            if ((longlong)uVar3 < -0x3232cf8d3989320b) {
              if (uVar3 == 0xc345b01acf806b44) {
                pauVar6 = local_c8 + -4;
                local_110 = pauVar6;
                cVar2 = FUN_1801b3c30(pauVar6,0x40);
                local_120 = 0xcf38fef0f2a36b9d;
                if (cVar2 != '\0') {
                  local_120 = 0xc88eee6b8f4a947c;
                }
                if (pauVar6 == local_d0) {
                  local_120 = 0xcf38fef0f2a36b9d;
                }
                local_128 = 0x1cda234992dd4395;
              }
              else if (uVar3 == 0xcac6d9ab1bea0226) {
                local_d8 = DAT_1802a6690;
                local_120 = 0x26b8dfdea9ac787b;
                if (DAT_1802a6690 != local_12c) {
                  local_120 = 0x85e9198a52e763ad;
                }
                if (NAN(DAT_1802a6690) || NAN(local_12c)) {
                  local_120 = 0x85e9198a52e763ad;
                }
                local_128 = 0x56c378aee037f569;
              }
            }
            else if (uVar3 == 0xcdcd3072c676cdf5) {
              local_12c = 0.0;
              local_104 = 0.017453292;
              local_114 = 1.0;
              local_d0 = (undefined1 (*) [16])0x0;
              local_120 = 0x4b96c54a92a1f3a6;
              if ((DAT_1802a6681 & 1) != 0) {
                local_120 = 0xf83be4b16f79c4d0;
              }
              local_128 = 0xc7c44f75e49f873e;
            }
            else if (uVar3 == 0xd32a6124b2d096c4) {
              local_138 = local_12c;
              (*local_e8)(local_110,local_d8 * local_104,local_114,local_12c);
              local_120 = 0x920d0095e968cb62;
              local_128 = 0xe276a7e5a0f34670;
            }
          }
          if ((longlong)uVar3 < -0x40860fe027970ea4) break;
          if (uVar3 == 0xbf79f01fd868f15c) {
            (*DAT_1802933c0)(param_1,param_2,param_3);
            auVar1._8_8_ = uStack_a0;
            auVar1._0_8_ = local_a8;
            *(ulonglong *)local_110[3] = CONCAT44(uStack_74,local_78);
            *(ulonglong *)(local_110[3] + 8) = CONCAT44(uStack_6c,uStack_70);
            *(ulonglong *)local_110[2] = CONCAT44(uStack_84,local_88);
            *(ulonglong *)(local_110[2] + 8) = CONCAT44(uStack_7c,uStack_80);
            *(ulonglong *)local_110[1] = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(local_110[1] + 8) = CONCAT44(uStack_8c,uStack_90);
            *local_110 = auVar1;
            local_120 = 0xb0312d89250e1665;
            local_128 = 0x13ec1255357f91;
          }
          else if (uVar3 == 0xc0d359f5fa452a48) {
            (*local_b8)(local_110,local_100,local_fc,local_f8);
            local_120 = 0xa373e220496e5fd8;
            local_128 = 0x1c0a123f9106ae84;
          }
        }
        if (uVar3 != 0x8c528a3f763e7498) break;
        (*DAT_1802933c0)(param_1,param_2,param_3);
        local_120 = 0x6b5b3f0e34d47cf4;
        local_128 = 0xdb79fe9544ef1500;
      }
      if (uVar3 != 0xb7e36145eec194b4) break;
      local_138 = local_114;
      (*local_e8)(local_110,local_dc * local_104,local_12c,local_12c);
      local_120 = 0x40f6744a56d3f1fb;
      local_128 = 0x114b120e380fe380;
    }
  } while (uVar3 != 0xb022c19b703b69f4);
  if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_158)) {
    return;
  }
}



void FUN_180168770(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x6e346122d2e0fd0d;
  local_50 = 0x417c2bb94d374ba7;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x185b5e83fbd18233;
        if (uVar1 != 0xee48bff7baee7912) break;
        thunk_FUN_1801f42e0(param_1,0x18);
        local_48 = 0xc7103bd8b94f6000;
        local_50 = 0xa60271e2a6c03799;
      }
      if (uVar1 != 0x2f484a9b9fd7b6aa) break;
      local_48 = 0x61b35293d9d5d0fc;
      if (param_2 != '\0') {
        local_48 = 0xeee9a75e7cb4fe77;
      }
      local_50 = 0xa118a9c65a8765;
    }
    local_48 = local_48 ^ 0x185b5e83fbd18233;
  } while (uVar1 != 0x61124a3a1f8f5799);
  return;
}



undefined8 FUN_180168890(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xd2950ed94f9ff254;
  local_50 = 0x7f0244e4cc485de2;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xf8ef9084bcc07bf2;
        if (uVar1 != 0xad974a3d83d7afb6) break;
        FUN_180166120(param_1);
        local_48 = 0x661129452efc4d33;
        if ((param_2 & 1) == 0) {
          local_48 = 0x5f3fb92b42f72e3f;
        }
        local_50 = 0x850dc72220135d17;
      }
      if (uVar1 != 0xe31cee670eef1024) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0x2d941fe2ba937a3b;
      local_50 = 0xf7a661ebd8770913;
    }
    local_48 = local_48 ^ 0xf8ef9084bcc07bf2;
  } while (uVar1 != 0xda327e0962e47328);
  return param_1;
}



undefined8 FUN_1801689e0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x44b65d8163b45ae8;
  local_50 = 0xcb751990ca5d317e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x8d7c515987a4ef53;
        if (uVar1 != 0x8fc34411a9e96b96) break;
        FUN_180106c90(param_1);
        local_48 = 0x2517a4a47d764ad7;
        if ((param_2 & 1) == 0) {
          local_48 = 0x13ad5eb433d78c0e;
        }
        local_50 = 0x3d2b5e7d213f1fd9;
      }
      if (uVar1 != 0x183cfad95c49550e) break;
      thunk_FUN_1801f42e0(param_1,0xc0);
      local_48 = 0x6a1c7e20fa4887c8;
      local_50 = 0x449a7ee9e8a0141f;
    }
    local_48 = local_48 ^ 0x8d7c515987a4ef53;
  } while (uVar1 != 0x2e8600c912e893d7);
  return param_1;
}



void FUN_180168b30(void)

{
  atexit((_func_5014 *)&LAB_180166280);
  FUN_180168b8c(&DAT_1802a669c,&DAT_180293494,0x1f,10,&DAT_1802a66a8);
  FUN_1800f0070(&DAT_1802a6680,&DAT_1802a669c,FUN_180166290);
  return;
}



void FUN_180168b8c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x9a06ed1a3924a993;
  local_68 = 0x7d98e1ff95cc01df;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x8f63791bc417c486;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x8f63791bc417c486;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0x2dd5dbe05685ae8) break;
          if (uVar1 == 0xfd22a241fa97a518) {
            *param_5 = 1;
            local_60 = 0x1b47c7629083b10b;
            local_68 = 0x90c72f1cae0515eb;
          }
          else if (uVar1 == 0x27bfea7df7e616c9) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x5a4a24ea2dd953ea;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x56338d482293b8a4;
            }
            local_68 = 0xbf71a1158562f12b;
          }
          else if (uVar1 == 0x76411919619849c0) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0x11efa422894c8441;
            if (local_54 == param_4) {
              local_60 = 0xcb72ec1e843d3790;
            }
            local_68 = 0x36504e5f7eaa9288;
          }
        }
        if ((longlong)uVar1 < -0x1861f31a531757b4) break;
        if (uVar1 == 0xe79e0ce5ace8a84c) {
          local_60 = 0x31cfad8a011bbec3;
          if (*param_5 == 1) {
            local_60 = 0x9df0af89c87b0cea;
          }
          local_68 = 0x167047f7f6fda80a;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
        else if (uVar1 == 0xe9422c5da7f1498f) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xa5cefee14a5e72df;
          local_68 = 0xd38fe7f82bc63b1f;
        }
      }
      if (uVar1 != 0xe53b85ffa8bba2c1) break;
      local_6a = -(local_6c - local_69 ^ local_6d);
      local_60 = 0x6e1800c18c2fe51f;
      local_68 = 0x185919d8edb7acdf;
    }
  } while (uVar1 != 0x8b80e87e3e86a4e0);
  return;
}



undefined8 * FUN_180168e40(undefined8 *param_1)

{
  undefined ***pppuVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  undefined **local_278;
  undefined8 *local_270;
  undefined ***local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  uintptr_t local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined5 local_1e8;
  undefined3 uStack_1e3;
  undefined5 local_1e0;
  undefined3 uStack_1db;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined4 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined7 local_163;
  undefined4 uStack_15c;
  undefined8 local_158;
  ulonglong local_150;
  undefined2 local_148;
  undefined1 local_146;
  undefined5 local_145;
  undefined3 uStack_140;
  undefined5 uStack_13d;
  undefined8 local_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined3 uStack_124;
  undefined1 local_121;
  uintptr_t local_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined8 local_102;
  undefined2 local_fa;
  uintptr_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  uintptr_t local_c8;
  undefined4 local_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  code *local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 local_92;
  uintptr_t local_90;
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  uintptr_t local_50;
  undefined8 *local_48;
  uint local_3c;
  ulonglong local_38;
  undefined1 local_29;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_80 = 0x1f;
  local_78 = 0x28;
  local_3c = 0;
  local_58 = 0x20;
  local_70 = -8;
  local_38 = 0xf;
  local_c8 = 6;
  local_68 = 0xfff;
  local_60 = 1;
  local_50 = 0;
  local_29 = 0;
  local_220 = 0;
  local_48 = param_1;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_218 = 0x19;
  local_210 = local_80;
  local_228 = puVar6;
  FUN_18016ac3b(&DAT_1802a694c,&DAT_180294af5,0x11,0x1a,&DAT_1802a6968);
  uVar7 = uRam00000001802a695d;
  *(ulonglong *)((longlong)puVar6 + 9) = CONCAT17(uRam00000001802a695c,CONCAT43(uRam00000001802a6958,_DAT_1802a6955));
  *(undefined8 *)((longlong)puVar6 + 0x11) = uVar7;
  uVar4 = uRam00000001802a6958;
  uVar3 = uRam00000001802a6954;
  uVar12 = uRam00000001802a6950;
  *puVar6 = _DAT_1802a694c;
  puVar6[1] = uVar12;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x19) = local_29;
  local_200 = local_50;
  local_1f8 = 9;
  local_1f0 = local_38;
  uVar12 = 1;
  FUN_18016ac3b(&DAT_1802a696c,&DAT_180294b38,0x17,10,&DAT_1802a6978);
  local_200 = CONCAT71(local_200._1_7_,DAT_1802a6974);
  local_208 = DAT_1802a696c;
  FUN_1801063a0(param_1,&local_208,&local_228,1,CONCAT44(uVar12,local_3c));
  *param_1 = &PTR_FUN_18021d800;
  local_b0 = (code *)local_c8;
  local_a8 = local_38;
  uStack_ba = 0;
  uStack_b8 = 0;
  uStack_b2 = 0;
  FUN_18016ac3b(&DAT_1802a697c,&DAT_180294b6c,0x14,7,&DAT_1802a6984);
  uStack_bc = DAT_1802a6980;
  local_c0 = DAT_1802a697c;
  local_90 = local_c8;
  local_88 = (undefined4 *)local_38;
  uStack_9a = 0;
  uStack_98 = 0;
  local_92 = 0;
  FUN_18016ac3b(&DAT_1802a6988,&DAT_180294b9d,0x19,7,&DAT_1802a6990);
  uStack_9c = DAT_1802a698c;
  local_a0 = DAT_1802a6988;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  local_e8 = FUN_1801d61c8(0x40);
  local_d8 = local_e8 + 0x40;
  lStack_e0 = local_e8;
  lStack_e0 = FUN_180124c70(&local_c0,&local_80,local_e8,&local_e8);
  local_1c8 = (undefined4 *)0x0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(local_58);
  local_1b8 = 0x14;
  uStack_1b0 = local_80;
  local_1c8 = puVar6;
  FUN_18016ac3b(&DAT_1802a6994,&DAT_180294bd4,0x1d,0x15,&DAT_1802a69ac);
  puVar6[4] = DAT_1802a69a4;
  uVar4 = uRam00000001802a69a0;
  uVar3 = uRam00000001802a699c;
  uVar12 = uRam00000001802a6998;
  *puVar6 = _DAT_1802a6994;
  puVar6[1] = uVar12;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)(puVar6 + 5) = local_29;
  local_158 = 5;
  local_150 = local_38;
  local_163 = 0;
  uStack_15c = 0;
  uVar12 = 1;
  FUN_18016ac3b(&DAT_1802a69b0,&DAT_180294c19,0x19,6,&DAT_1802a69b8);
  puVar5 = local_48;
  local_164 = DAT_1802a69b4;
  local_168 = DAT_1802a69b0;
  uVar7 = FUN_180108620(local_48,&local_168,&local_1c8,&local_e8,CONCAT44(uVar12,local_3c));
  puVar5[0xe] = uVar7;
  if (local_38 < local_88) {
    lVar2 = CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    uVar9 = local_60 + (longlong)local_88;
    lVar8 = lVar2;
    if (local_68 < uVar9) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (local_58 <= (ulonglong)((lVar2 + local_70) - lVar8)) goto LAB_180169886;
      uVar9 = (longlong)local_88 + local_78;
    }
    thunk_FUN_1801f42e0(lVar8,uVar9);
  }
  local_90 = local_50;
  local_88 = (undefined4 *)local_38;
  local_a0 = CONCAT31(local_a0._1_3_,local_29);
  if (local_38 < local_a8) {
    lVar2 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    uVar9 = local_60 + local_a8;
    lVar8 = lVar2;
    if (local_68 < uVar9) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (local_58 <= (ulonglong)((lVar2 + local_70) - lVar8)) {
LAB_180169886:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_3c,local_50);
      }
      uVar9 = local_a8 + local_78;
    }
    thunk_FUN_1801f42e0(lVar8,uVar9);
  }
  local_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(local_58);
  local_198 = 0x15;
  uStack_190 = local_80;
  local_1a8 = puVar6;
  FUN_18016ac3b(&DAT_1802a69bc,&DAT_180294c55,0x1b,0x16,&DAT_1802a69d4);
  *(ulonglong *)((longlong)puVar6 + 0xd) = CONCAT53(DAT_1802a69c9._3_5_,(undefined3)DAT_1802a69c9);
  uVar4 = uRam00000001802a69c8;
  uVar3 = uRam00000001802a69c4;
  uVar12 = uRam00000001802a69c0;
  *puVar6 = _DAT_1802a69bc;
  puVar6[1] = uVar12;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x15) = local_29;
  local_138 = 3;
  local_130 = local_38;
  local_145 = 0;
  uStack_140 = 0;
  uStack_13d = 0;
  FUN_18016ac3b(&DAT_1802a69d8,&DAT_180294c96,0x1f,4,&DAT_1802a69dc);
  local_146 = DAT_1802a69da;
  local_148 = DAT_1802a69d8;
  uVar7 = FUN_180107b80(local_48,&local_148,&local_1a8,1);
  local_48[0xf] = uVar7;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(local_58);
  local_178 = 0x17;
  uStack_170 = local_80;
  local_188 = puVar6;
  FUN_18016ac3b(&DAT_1802a69e0,&DAT_180294cd2,0x1e,0x18,&DAT_1802a69f8);
  *(ulonglong *)((longlong)puVar6 + 0xf) = CONCAT71(DAT_1802a69ef._1_7_,(undefined1)DAT_1802a69ef);
  uVar4 = uRam00000001802a69ec;
  uVar3 = uRam00000001802a69e8;
  uVar12 = uRam00000001802a69e4;
  *puVar6 = _DAT_1802a69e0;
  puVar6[1] = uVar12;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x17) = local_29;
  local_120 = local_50;
  local_118 = 7;
  local_110 = local_38;
  FUN_18016ac3b(&DAT_1802a69fc,&DAT_180294d20,0x14,8,&DAT_1802a6a04);
  uStack_124 = uRam00000001802a6a00;
  local_128 = DAT_1802a69fc;
  local_121 = local_29;
  uVar7 = FUN_180107b80(local_48,&local_128,&local_188,0);
  puVar5 = local_48;
  local_48[0x10] = uVar7;
  local_238 = 0x3ed8d8d9;
  uStack_234 = 0x3f0c8c8d;
  uStack_230 = 0x3f800000;
  uStack_22c = 0x3f800000;
  local_1e0 = (undefined5)local_50;
  uStack_1db = (undefined3)(local_50 >> 0x28);
  local_1d8 = 0xd;
  local_1d0 = local_38;
  FUN_18016ac3b(&DAT_1802a6a08,&DAT_180294d56,0x14,0xe,&DAT_1802a6a18);
  local_1e0 = uRam00000001802a6a10;
  local_1e8 = (undefined5)DAT_1802a6a08;
  uStack_1e3 = DAT_1802a6a08._5_3_;
  local_f8 = local_c8;
  local_f0 = local_38;
  local_102 = 0;
  local_fa = 0;
  FUN_18016ac3b(&DAT_1802a6a1c,&DAT_180294d91,0x10,7,&DAT_1802a6a24);
  local_104 = DAT_1802a6a20;
  local_108 = DAT_1802a6a1c;
  lVar8 = FUN_1801089f0(puVar5,&local_108,&local_1e8,&local_238);
  local_48[0x11] = lVar8;
  ppuVar11 = &PTR_FUN_18021d840;
  local_278 = &PTR_FUN_18021d840;
  local_270 = local_48;
  local_240 = &local_278;
  pppuVar10 = (undefined ***)(lVar8 + 0x50);
  if (pppuVar10 == local_240) goto LAB_18016981a;
  pppuVar1 = *(undefined ****)(lVar8 + 0x88);
  if (pppuVar1 != (undefined ***)0x0) {
    (*(code *)(*pppuVar1)[4])(pppuVar1,pppuVar1 != pppuVar10);
    *(undefined8 *)(lVar8 + 0x88) = 0;
    if (local_240 == (undefined ***)0x0) goto LAB_18016981a;
    if (local_240 != &local_278) {
      *(undefined ****)(lVar8 + 0x88) = local_240;
      goto LAB_18016981a;
    }
    ppuVar11 = *local_240;
  }
  uVar7 = (*(code *)ppuVar11[1])(local_240,pppuVar10);
  *(undefined8 *)(lVar8 + 0x88) = uVar7;
  if (local_240 != (undefined ***)0x0) {
    (*(code *)(*local_240)[4])(local_240,local_240 != &local_278);
  }
LAB_18016981a:
  uVar7 = FUN_1800ba260();
  local_c0 = 0x8021d870;
  uStack_bc = 1;
  uStack_ba = 0;
  uStack_b8 = SUB86(local_48,0);
  uStack_b2 = (undefined2)((ulonglong)local_48 >> 0x30);
  local_b0 = FUN_180169a80;
  local_88 = &local_c0;
  FUN_180121610(uVar7,local_48,&local_c0,local_3c);
  FUN_180107400(local_48,1);
  return local_48;
}



void Unwind_1801698b0(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0x1c0);
  return;
}



void Unwind_1801698e0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  uVar1 = *(ulonglong *)(param_2 + 0x220);
  if (*(ulonglong *)(param_2 + 0x270) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x208);
    uVar4 = *(longlong *)(param_2 + 0x248) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x240) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x250) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x238)) - lVar3))
      goto LAB_1801699f9;
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x230);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x270);
  *(undefined1 *)(param_2 + 0x208) = *(undefined1 *)(param_2 + 0x27f);
  uVar1 = *(ulonglong *)(param_2 + 0x200);
  if (*(ulonglong *)(param_2 + 0x270) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x1e8);
    uVar4 = *(longlong *)(param_2 + 0x248) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x240) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x250) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x238)) - lVar3)) {
LAB_1801699f9:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,*(uint *)(param_2 + 0x26c),
                       *(uintptr_t *)(param_2 + 600));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x230);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_2 + 0x270);
  *(undefined1 *)(param_2 + 0x1e8) = *(undefined1 *)(param_2 + 0x27f);
  return;
}



void Unwind_180169a20(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 0x260));
  return;
}



void Unwind_180169a50(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0x1c0);
  return;
}



void FUN_180169a80(longlong param_1)

{
  size_t _Size;
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 local_200 [8];
  undefined8 local_1f8;
  int local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  size_t local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  float local_188 [4];
  ulonglong local_178;
  size_t local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  ulonglong local_150;
  longlong local_140;
  undefined8 local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  float local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  uint local_d4;
  undefined8 local_d0;

  local_d0 = 0xfffffffffffffffe;
  local_108 = 0.0;
  local_104 = 1.0;
  local_ec = 12.0;
  local_1b8 = 0x28;
  local_100 = 1;
  local_d4 = 0;
  local_140 = 1000000000;
  local_178 = 24000000;
  local_1b0 = 0x20;
  local_1a8 = -8;
  local_e0 = 0xf;
  local_170 = 6;
  local_1a0 = 0xfff;
  local_fc = 2;
  local_f8 = 1;
  local_e8 = 0;
  lVar2 = FUN_1800eb430();
  fVar10 = (float)FUN_180172570();
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x90) == '\x01') {
    FUN_1800ec140(lVar2,&local_1e8,local_d4,local_ec);
  }
  else {
    local_1e8 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x90);
    uStack_1e0 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x98);
  }
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = local_170;
  local_1c0 = local_e0;
  FUN_18016ac3b(&DAT_1802a6a28,&DAT_180294dba,0x1f,7,&DAT_1802a6a30);
  local_1d8 = CONCAT44(CONCAT22(local_1d8._6_2_,DAT_1802a6a2c),DAT_1802a6a28);
  local_168 = (undefined8 *)0x0;
  uStack_160 = 0;
  local_158 = 5;
  local_150 = local_e0;
  uVar16 = 1;
  FUN_18016ac3b(&DAT_1802a6a34,&DAT_180294df0,0x16,6,&DAT_1802a6a3c);
  local_168 = (undefined8 *)CONCAT44(CONCAT31(local_168._5_3_,DAT_1802a6a38),DAT_1802a6a34);
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x90) == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a6948
        ) && (FUN_1801d62d8(&DAT_1802a6948), DAT_1802a6948 == -1)) {
      FUN_1800eb960(&DAT_1802a6940);
      _Init_thread_footer(&DAT_1802a6948);
    }
    uVar3 = FUN_1801da1cc();
    uVar4 = FUN_1801da1b0();
    if ((longlong)uVar3 < 24000000) {
      if (uVar3 != 10000000) {
LAB_180169dc4:
        if ((uVar4 | uVar3) >> 0x20 == 0) {
          uVar6 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
          uVar4 = (uVar4 & 0xffffffff) % (uVar3 & 0xffffffff);
        }
        else {
          uVar6 = (longlong)uVar4 / (longlong)uVar3;
          uVar4 = (longlong)uVar4 % (longlong)uVar3;
        }
        lVar5 = uVar6 * local_140;
        uVar4 = uVar4 * local_140;
        if ((uVar4 | uVar3) >> 0x20 == 0) {
          uVar4 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
        }
        else {
          uVar4 = (longlong)uVar4 / (longlong)uVar3;
        }
        goto LAB_180169e58;
      }
      lVar5 = uVar4 * 100;
    }
    else {
      if (uVar3 != 24000000) goto LAB_180169dc4;
      if ((uVar4 | local_178) >> 0x20 == 0) {
        uVar3 = (uVar4 & 0xffffffff) / (local_178 & 0xffffffff);
      }
      else {
        uVar3 = (longlong)uVar4 / (longlong)local_178;
      }
      lVar5 = uVar3 * local_140;
      if ((uVar4 | local_178) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) % (local_178 & 0xffffffff);
      }
      else {
        uVar4 = (longlong)uVar4 % (longlong)local_178;
      }
      uVar4 = uVar4 * local_140;
      if ((uVar4 | local_178) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) / (local_178 & 0xffffffff);
      }
      else {
        uVar4 = (longlong)uVar4 / (longlong)local_178;
      }
LAB_180169e58:
      lVar5 = uVar4 + lVar5;
    }
    fVar13 = (float)(lVar5 - _DAT_1802a6940) / 1e+09;
    if ((local_108 < fVar13) && (fVar13 < local_104)) {
      DAT_1802949dc = DAT_1802949dc + (local_104 / fVar13 - DAT_1802949dc) * 0.08;
    }
    local_1f0 = (int)DAT_1802949dc;
    local_1f8 = 0x1000000000000000;
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = local_e0;
    _DAT_1802a6940 = lVar5;
    FUN_180002240(&local_128,0x10);
    local_118 = local_e8;
    local_138 = local_f8;
    puStack_130 = &local_1f8;
    FUN_18016ac3b(&DAT_1802a6a40,&DAT_180294e21,0x14,9,&DAT_1802a6a4c);
    local_198 = &DAT_1802a6a40;
    local_190 = 8;
    uVar4 = local_e8;
    FUN_180003080(local_200,&local_128,&local_198,&local_138,local_e8);
    uVar16 = (undefined4)(uVar4 >> 0x20);
    puVar8 = &local_128;
    if (local_e0 < local_110) {
      puVar8 = local_128;
    }
    if (local_150 - local_158 < local_118) {
      uVar4 = local_118;
      FUN_180066dd0(&local_168,local_118,local_118,puVar8,local_118);
      uVar16 = (undefined4)(uVar4 >> 0x20);
      if (local_e0 < local_110) {
LAB_18016a057:
        uVar4 = local_f8 + local_110;
        puVar8 = local_128;
        if (local_1a0 < uVar4) {
          puVar8 = (undefined8 *)local_128[-1];
          if (local_1b0 <= (ulonglong)((longlong)local_128 + (local_1a8 - (longlong)puVar8))) goto LAB_18016a4a5;
          uVar4 = local_110 + local_1b8;
        }
        thunk_FUN_1801f42e0(puVar8,uVar4);
      }
    }
    else {
      lVar5 = local_158 + local_118;
      puVar9 = local_168;
      if (local_150 <= local_e0) {
        puVar9 = &local_168;
      }
      lVar7 = local_158 + (longlong)puVar9;
      local_158 = lVar5;
      FUN_1802079d0(lVar7,puVar8);
      *(undefined1 *)((longlong)puVar9 + lVar5) = 0;
      if (local_e0 < local_110) goto LAB_18016a057;
    }
  }
  fVar11 = (float)FUN_180173360(&local_1d8);
  fVar14 = local_ec * fVar10;
  fVar12 = (float)FUN_180173360(&local_168);
  fVar15 = fVar10 * 11.0;
  fVar13 = fVar10 * 10.0;
  local_128 = (undefined8 *)CONCAT44(fVar13,fVar13);
  uVar1 = (uint)local_f8;
  local_188[(uint)local_e8 & 1] = fVar10 * 10.0 + fVar15 * 2.0 + fVar11 + fVar12;
  local_188[uVar1 & 1] = fVar10 * 28.0;
  _Size = local_170;
  uStack_120 = CONCAT44(fVar10 * 10.0 + SUB84(local_188._0_8_,4),fVar10 * 9.0 + (float)local_188._0_8_);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x98);
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x90) * 0x20;
  if (*(size_t *)(lVar5 + 0x10 + lVar7) == local_170) {
    puVar8 = (undefined8 *)(lVar5 + lVar7);
    if (local_e0 < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    uVar16 = 1;
    FUN_18016ac3b(&DAT_1802a697c,&DAT_180294b6c,0x14,7,&DAT_1802a6984);
    uVar1 = memcmp(&DAT_1802a697c,puVar8,_Size);
    if (uVar1 == local_d4) {
      local_198 = (undefined *)CONCAT44(fVar10 * 3.0,local_108);
      fVar12 = fVar10 * 8.0;
      local_138 = 0;
      puStack_130 = (undefined8 *)0x3ee6666600000000;
      puVar8 = &local_198;
      FUN_180172cc0(&local_128,&local_138,fVar13,fVar12,puVar8);
      uVar16 = (undefined4)((ulonglong)puVar8 >> 0x20);
      FUN_180172f40(&local_128);
      FUN_180172640(&local_128,lVar2 + 0x10,fVar12);
      FUN_1801728e0(&local_128,lVar2 + 0x40,fVar10,fVar12);
      fVar13 = local_128._4_4_;
    }
  }
  fVar12 = (float)FUN_180173310();
  fVar13 = (fVar10 * 28.0 - fVar12) * 0.5 + fVar13;
  local_138 = CONCAT44(fVar13,(float)local_128 + fVar15);
  FUN_180173000(&local_1d8,&local_138,&local_1e8,fVar10 * 15.0,CONCAT44(uVar16,local_fc),local_d4);
  uVar1 = (uint)local_f8;
  local_188[(ulonglong)((uint)local_e8 & 1) + 2] = fVar11 + fVar15 + (float)local_128;
  local_188[(ulonglong)(uVar1 & 1) + 2] = fVar13;
  local_138 = CONCAT44(fVar10 * 1.5 + SUB84(local_188._8_8_,4),fVar10 * 9.0 + (float)local_188._8_8_);
  FUN_180173000(&local_168,&local_138,lVar2 + 0x80,fVar14,local_100,local_d4);
  if (local_e0 < local_150) {
    uVar4 = local_f8 + local_150;
    puVar8 = local_168;
    if (local_1a0 < uVar4) {
      puVar8 = (undefined8 *)local_168[-1];
      if (local_1b0 <= (ulonglong)((longlong)local_168 + (local_1a8 - (longlong)puVar8))) {
LAB_18016a4a5:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_d4,local_e8);
      }
      uVar4 = local_150 + local_1b8;
    }
    thunk_FUN_1801f42e0(puVar8,uVar4);
  }
  return;
}



void Unwind_18016a4d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x110);
  return;
}



void Unwind_18016a590(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x110);
  return;
}



void Unwind_18016a650(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xd0);
  return;
}



void FUN_18016a710(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_18021d840;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



void FUN_18016a740(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x37eede060d33ff99;
  local_50 = 0xa44f24ae08a9a6c7;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x600276bfa560b862;
        if (uVar1 != 0x93a1faa8059a595e) break;
        local_48 = 0xc79e77ade4465d37;
        if (param_2 != '\0') {
          local_48 = 0x911bb5d6ef5d6a18;
        }
        local_50 = 0x860e7dedb604180e;
      }
      if (uVar1 != 0x1715c83b59597216) break;
      thunk_FUN_1801f42e0(param_1,0x10);
      local_48 = 0xe37d9d42860cf7e1;
      local_50 = 0xa2ed9702d44eb2d8;
    }
    local_48 = local_48 ^ 0x600276bfa560b862;
  } while (uVar1 != 0x41900a4052424539);
  return;
}



void FUN_18016a890(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x7ce090126735ddbd;
  local_58 = 0xace38f5e76ede001;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x6088398987be74ae;
        if (uVar1 != 0xd0031f4c11d83dbc) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0x1ff1e4e47847ccd4;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0x3a9f3c591a4cdae9;
        }
        local_58 = 0xc2801167ee82b590;
      }
      if (uVar1 != 0xf81f2d3ef4ce6f79) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0xa782cb77e45a2f90;
      local_58 = 0x7af33ef4729f56d4;
    }
    local_50 = local_50 ^ 0x6088398987be74ae;
  } while (uVar1 != 0xdd71f58396c57944);
  return;
}



void FUN_18016a9c0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x45a55b80d8773d4c;
  local_50 = 0x9e77fd8995bedbbc;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc72548ebd68d7491;
        if (uVar1 != 0xdbd2a6094dc9e6f0) break;
        local_48 = 0xef49de6a1593b4b5;
        if (param_2 != '\0') {
          local_48 = 0x4dc5e3ac820b6d94;
        }
        local_50 = 0xba25cc25767921ca;
      }
      if (uVar1 != 0xf7e02f89f4724c5e) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xa7342ab08033d027;
      local_50 = 0xf25838ffe3d94558;
    }
    local_48 = local_48 ^ 0xc72548ebd68d7491;
  } while (uVar1 != 0x556c124f63ea957f);
  return;
}



undefined8 FUN_18016aaf0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xebb037366b79c97f;
  local_50 = 0x7c967b2194ec6c40;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x2512f5acb8f7eafc;
        if (uVar1 != 0x97264c17ff95a53f) break;
        FUN_180106c90(param_1);
        local_48 = 0xd7c5b2e4e5ca9538;
        if ((param_2 & 1) == 0) {
          local_48 = 0x4d97978ed6a0a431;
        }
        local_50 = 0x6a774d41810a1dab;
      }
      if (uVar1 != 0xbdb2ffa564c08893) break;
      thunk_FUN_1801f42e0(param_1,0x90);
      local_48 = 0x85338edd4c8589d7;
      local_50 = 0xa2d354121b2f304d;
    }
    local_48 = local_48 ^ 0x2512f5acb8f7eafc;
  } while (uVar1 != 0x27e0dacf57aab99a);
  return param_1;
}



void FUN_18016ac3b(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xa8ce1554fc8321c6;
  local_68 = 0x32383d9710deb929;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xbff6ee55cb0e9b50;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xbff6ee55cb0e9b50;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0xdb8e758e778eeec) break;
          if (uVar1 == 0xdb8e758e778eeec) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0x7fac78dec7af78fc;
            if (local_54 == param_4) {
              local_60 = 0xd72b1e0651d0aae2;
            }
            local_68 = 0xe91d035c7d16bc40;
          }
          else if (uVar1 == 0x278f0bec35a7be61) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xfbd10573a0c6540e;
            local_68 = 0xf669e22b47bebae2;
          }
          else if (uVar1 == 0x3e361d5a2cc616a2) {
            *param_5 = 1;
            local_60 = 0xcde52afc900d7b74;
            local_68 = 0x1da910fcd438951d;
          }
        }
        if (-0x2fb3c5ffbbca1198 < (longlong)uVar1) break;
        if (uVar1 == 0x96b17b82bab9c4bc) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x41ba49ce9e5dab23;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xbe92af3f2f142c24;
          }
          local_68 = 0x991da4d31ab39245;
        }
        else if (uVar1 == 0x9af628c3ec5d98ef) {
          local_60 = 0x7ac4e37a85f756a5;
          if (*param_5 == 1) {
            local_60 = 0x3c39a2f87b7b7c70;
          }
          local_68 = 0xec7598f83f4e9219;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0xd8a7ed1d84ee3966) break;
      local_6a = -(local_6c - local_69 ^ local_6d);
      local_60 = 0x4a940fa3f01dafac;
      local_68 = 0x472ce8fb17654140;
    }
  } while (uVar1 != 0xd04c3a004435ee69);
  return;
}



undefined8 * FUN_18016aef0(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined **local_258;
  undefined8 *local_250;
  code *local_248;
  undefined ***local_220;
  undefined **local_218;
  undefined8 *local_210;
  undefined ***local_1e0;
  undefined4 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined8 local_ea;
  undefined2 local_e2;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_ca;
  undefined2 local_c2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined7 local_ab;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_54 = 0x3f800000;
  local_50 = 0x3d4ccccd;
  local_90 = 4;
  local_4c = 0;
  local_31 = 0;
  local_88 = 0x30;
  local_80 = 0x3f;
  local_78 = 0x20;
  local_70 = 0x1f;
  local_48 = 0xf;
  local_68 = 6;
  local_60 = 0x40;
  local_1d0 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(0x40);
  local_1c8 = local_88;
  local_1c0 = local_80;
  uVar9 = 1;
  local_1d8 = puVar4;
  FUN_18016c62b(&DAT_1802a6a50,&DAT_180295e16,0x18,0x31,&DAT_1802a6a84);
  uVar5 = uRam00000001802a6a78;
  *(undefined8 *)(puVar4 + 8) = _DAT_1802a6a70;
  *(undefined8 *)(puVar4 + 10) = uVar5;
  uVar5 = uRam00000001802a6a68;
  *(undefined8 *)(puVar4 + 4) = _DAT_1802a6a60;
  *(undefined8 *)(puVar4 + 6) = uVar5;
  uVar3 = uRam00000001802a6a5c;
  uVar2 = uRam00000001802a6a58;
  uVar10 = uRam00000001802a6a54;
  *puVar4 = _DAT_1802a6a50;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)(puVar4 + 0xc) = local_31;
  uStack_1b0 = 0;
  local_1a8 = local_90;
  local_1a0 = local_48;
  local_1b8 = 0x6d6f6f5a;
  FUN_1801063a0(param_1,&local_1b8,&local_1d8,local_4c,CONCAT44(uVar9,0x43));
  *param_1 = &PTR_FUN_18021da30;
  *(undefined4 *)(param_1 + 0x12) = local_54;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = (undefined4 *)0x0;
  uStack_170 = 0;
  local_40 = param_1;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_78);
  local_168 = 0x12;
  uStack_160 = local_70;
  local_178 = puVar4;
  FUN_18016c62b(&DAT_1802a6a88,&DAT_180295e75,0x1e,0x13,&DAT_1802a6a9c);
  *(undefined2 *)(puVar4 + 4) = DAT_1802a6a98;
  uVar3 = uRam00000001802a6a94;
  uVar2 = uRam00000001802a6a90;
  uVar10 = uRam00000001802a6a8c;
  *puVar4 = _DAT_1802a6a88;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)((longlong)puVar4 + 0x12) = local_31;
  local_e0 = local_68;
  local_d8 = local_48;
  local_ea = 0;
  local_e2 = 0;
  uVar10 = 1;
  FUN_18016c62b(&DAT_1802a6aa0,&DAT_180295eb7,0x19,7,&DAT_1802a6aa8);
  local_ec = DAT_1802a6aa4;
  local_f0 = DAT_1802a6aa0;
  uVar5 = FUN_180108270(local_40,&local_f0,&local_178,0x40800000,CONCAT44(uVar10,0x3fc00000),0x41400000,0x3f000000);
  local_40[0xe] = uVar5;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (undefined4 *)0x0;
  uStack_150 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_60);
  local_148 = 0x3a;
  uStack_140 = local_80;
  local_158 = puVar4;
  FUN_18016c62b(&DAT_1802a6aac,&DAT_180295eec,0x19,0x3b,&DAT_1802a6ae8);
  uVar5 = uRam00000001802a6ade;
  *(ulonglong *)((longlong)puVar4 + 0x2a) = CONCAT26(uRam00000001802a6adc,_DAT_1802a6ad6);
  *(undefined8 *)((longlong)puVar4 + 0x32) = uVar5;
  uVar5 = CONCAT62(_DAT_1802a6ad6,uRam00000001802a6ad4);
  *(undefined8 *)(puVar4 + 8) = _DAT_1802a6acc;
  *(undefined8 *)(puVar4 + 10) = uVar5;
  uVar5 = uRam00000001802a6ac4;
  *(undefined8 *)(puVar4 + 4) = _DAT_1802a6abc;
  *(undefined8 *)(puVar4 + 6) = uVar5;
  uVar3 = uRam00000001802a6ab8;
  uVar2 = uRam00000001802a6ab4;
  uVar10 = uRam00000001802a6ab0;
  *puVar4 = _DAT_1802a6aac;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)((longlong)puVar4 + 0x3a) = local_31;
  uStack_190 = 0;
  local_188 = local_90;
  local_180 = local_48;
  local_198 = 0x646c6f48;
  uVar5 = FUN_180107b80(local_40,&local_198,&local_158,1);
  local_40[0xf] = uVar5;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = (undefined4 *)0x0;
  uStack_130 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_88);
  local_128 = 0x23;
  uStack_120 = 0x2f;
  local_138 = puVar4;
  FUN_18016c62b(&DAT_1802a6aec,&DAT_180295f5b,0x1e,0x24,&DAT_1802a6b10);
  *(undefined4 *)((longlong)puVar4 + 0x1f) = DAT_1802a6b0b;
  uVar5 = CONCAT17((undefined1)DAT_1802a6b0b,uRam00000001802a6b04);
  *(undefined8 *)(puVar4 + 4) = _DAT_1802a6afc;
  *(undefined8 *)(puVar4 + 6) = uVar5;
  uVar3 = uRam00000001802a6af8;
  uVar2 = uRam00000001802a6af4;
  uVar10 = uRam00000001802a6af0;
  *puVar4 = _DAT_1802a6aec;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)((longlong)puVar4 + 0x23) = local_31;
  local_c0 = local_68;
  local_b8 = local_48;
  local_ca = 0;
  local_c2 = 0;
  FUN_18016c62b(&DAT_1802a6b14,&DAT_180295fb5,0x10,7,&DAT_1802a6b1c);
  local_cc = DAT_1802a6b18;
  local_d0 = DAT_1802a6b14;
  uVar5 = FUN_180107b80(local_40,&local_d0,&local_138,1);
  local_40[0x10] = uVar5;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (undefined4 *)0x0;
  uStack_110 = 0;
  puVar4 = (undefined4 *)FUN_1801d61c8(local_78);
  local_108 = 0x14;
  uStack_100 = local_70;
  local_118 = puVar4;
  FUN_18016c62b(&DAT_1802a6b20,&DAT_180295feb,0x1e,0x15,&DAT_1802a6b38);
  puVar4[4] = DAT_1802a6b30;
  uVar3 = uRam00000001802a6b2c;
  uVar2 = uRam00000001802a6b28;
  uVar10 = uRam00000001802a6b24;
  *puVar4 = _DAT_1802a6b20;
  puVar4[1] = uVar10;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined1 *)(puVar4 + 5) = local_31;
  local_a0 = 5;
  local_98 = local_48;
  local_ab = 0;
  uStack_a4 = 0;
  uVar10 = 1;
  FUN_18016c62b(&DAT_1802a6b3c,&DAT_18029603a,0x16,6,&DAT_1802a6b44);
  local_ac = DAT_1802a6b40;
  local_b0 = DAT_1802a6b3c;
  lVar6 = FUN_180108270(local_40,&local_b0,&local_118,0x3eb33333,CONCAT44(uVar10,local_50),local_54,local_50);
  local_40[0x11] = lVar6;
  ppuVar8 = &PTR_FUN_18021da70;
  local_218 = &PTR_FUN_18021da70;
  local_210 = local_40;
  pppuVar7 = (undefined ***)(lVar6 + 0x50);
  local_1e0 = &local_218;
  if (pppuVar7 == &local_218) goto LAB_18016b6e5;
  pppuVar1 = *(undefined ****)(lVar6 + 0x88);
  if (pppuVar1 != (undefined ***)0x0) {
    (*(code *)(*pppuVar1)[4])(pppuVar1,pppuVar1 != pppuVar7);
    *(undefined8 *)(lVar6 + 0x88) = 0;
    if (local_1e0 == (undefined ***)0x0) goto LAB_18016b6e5;
    if (local_1e0 != &local_218) {
      *(undefined ****)(lVar6 + 0x88) = local_1e0;
      goto LAB_18016b6e5;
    }
    ppuVar8 = *local_1e0;
  }
  uVar5 = (*(code *)ppuVar8[1])(local_1e0,pppuVar7);
  *(undefined8 *)(lVar6 + 0x88) = uVar5;
  if (local_1e0 != (undefined ***)0x0) {
    (*(code *)(*local_1e0)[4])(local_1e0,local_1e0 != &local_218);
  }
LAB_18016b6e5:
  uVar5 = FUN_1800ba260();
  local_258 = &PTR_LAB_18021daa0;
  local_250 = local_40;
  local_248 = FUN_18016b780;
  local_220 = &local_258;
  FUN_180121610(uVar5,local_40,local_220,local_4c);
  return local_40;
}



void Unwind_18016b740(undefined8 param_1,longlong param_2)

{
  FUN_180106c90(*(undefined8 *)(param_2 + 600));
  return;
}



void FUN_18016b780(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  float local_a0;
  float local_9c;
  ulonglong local_98;
  ulonglong local_90;
  float local_84;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  float *local_60;

  local_90 = 0x4502baa7ea114dc0;
  local_98 = 0x81cdb0ea1c5fe480;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_90 ^ 0xa405c9e2d21d8c71;
            uVar2 = local_90 ^ local_98;
            local_98 = local_98 ^ 0xa405c9e2d21d8c71;
            local_90 = uVar4;
            if (0xe71fe76e2064776 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x1c483334aae2d12d) {
              if (uVar2 == 0x80f97d72dfd35dea) {
                *local_60 = local_84;
                local_90 = 0xf197f30fe170216d;
                local_98 = 0xd177302003ea6f80;
              }
              else if (uVar2 == 0xa46f624fa49e487d) {
                local_84 = local_9c;
                local_90 = 0x71cff3e6e71412a4;
                if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x90) != '\0') {
                  local_90 = 0x5341aee3c94ce2ac;
                }
                local_98 = 0x73aef8ff69dca3a0;
              }
              else if (uVar2 == 0xc4cf0a4df64ea940) {
                local_a0 = 1.0;
                local_78 = (longlong *)FUN_180179ff0();
                local_70 = *local_78;
                local_90 = 0x6e181e8ef1874e0d;
                if (local_70 == 0) {
                  local_90 = 0x9caf35e7950a75a5;
                }
                local_9c = 1.0;
                local_98 = 0x38c057a831943dd8;
              }
            }
            else if ((longlong)uVar2 < 0x2610b198ec8b104) {
              if (uVar2 == 0xe3b7cccb551d2ed3) {
                local_80 = *(longlong *)(local_70 + 0x30);
                local_90 = 0x1208680d564faed9;
                if (local_80 == 0) {
                  local_90 = 0x808c220311fc5606;
                }
                local_98 = 0x24e3404cb5621e7b;
                local_9c = local_a0;
              }
              else if (uVar2 == 0xe628aa1238133cd0) {
                local_90 = 0xba879cbbaac0ff04;
                if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x90) != '\0') {
                  local_90 = 0xd294e4e76369321f;
                }
                local_98 = 0xdce51a91816f7568;
              }
            }
            else if (uVar2 == 0x2610b198ec8b104) {
              *(float *)(param_1 + 0x90) = local_84;
              local_90 = 0x240364b17bdc9440;
              local_98 = 0x4e3a79e9946daad;
            }
            else if (uVar2 == 0xd487131d722a6a6) {
              local_90 = 0x3d0714215d2bc547;
              if (*(char *)(local_80 + 0xb8) == '\0') {
                local_90 = 0x7f40dc7cc1a6b1ea;
              }
              local_98 = 0xdb2fbe336538f997;
              local_9c = local_a0;
            }
          }
          if ((longlong)uVar2 < 0x36eb2841e32db0a2) break;
          if (uVar2 == 0x36eb2841e32db0a2) {
            cVar1 = FUN_1801b3c30(local_80,0x200);
            local_90 = 0xaff5e8777ff29442;
            if (cVar1 != '\0') {
              local_90 = 0x6d2fb090c4e7a99;
            }
            local_98 = 0xb9a8a38db6cdc3f;
            local_9c = local_a0;
          }
          else if (uVar2 == 0x56d84926c01373d5) {
            local_90 = 0x4636eef4a940dc17;
            if (local_78[3] != 0) {
              local_90 = 0x1ee407058c3bab9;
            }
            if (local_78[1] == 0) {
              local_90 = 0x4636eef4a940dc17;
            }
            local_98 = 0xe2598cbb0dde946a;
            local_9c = local_a0;
          }
          else if (uVar2 == 0x6662862a2baf8a6c) {
            local_9c = local_a0 / *(float *)(*(longlong *)(param_1 + 0x70) + 0x90);
            local_90 = 0x4b4e98a0f64b0b17;
            local_98 = 0xef21faef52d5436a;
          }
        }
        if (0x20e0c32fe29a4eec < (longlong)uVar2) break;
        if (uVar2 == 0xe71fe76e2064777) {
          local_68 = (longlong *)(param_1 + 0x68);
          local_90 = 0x4e6e36a0582fbb74;
          if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x90) == 0) {
            local_90 = 0xf92c4079a6c7396b;
          }
          local_98 = 0x5d43223602597116;
          local_9c = local_a0;
        }
        else if (uVar2 == 0x132d14965a76ca62) {
          uVar3 = FUN_180100330();
          cVar1 = FUN_180101a00(uVar3,*(undefined4 *)(*local_68 + 0x90));
          local_90 = 0x5bb1e1f6f3116bb5;
          if (cVar1 != '\0') {
            local_90 = 0x99bc05937c20a9a4;
          }
          local_98 = 0xffde83b9578f23c8;
          local_9c = local_a0;
        }
      }
      if (uVar2 != 0x20ef561ca090410c) break;
      fVar5 = (float)FUN_1800ebf90();
      fVar5 = (float)FUN_1801eaf60(local_a0 - *(float *)(*(longlong *)(param_1 + 0x88) + 0x90),fVar5 * 60.0);
      local_60 = (float *)(param_1 + 0x90);
      fVar5 = (local_84 - *(float *)(param_1 + 0x90)) * (local_a0 - fVar5) + *(float *)(param_1 + 0x90);
      *(float *)(param_1 + 0x90) = fVar5;
      local_90 = 0x8398fd7d6114b724;
      if (ABS(local_84 - fVar5) < 0.0005) {
        local_90 = 0x238143205c5da423;
      }
      local_98 = 0xa3783e52838ef9c9;
    }
  } while (uVar2 != 0x20e0c32fe29a4eed);
  FUN_1800edd90(1);
  return;
}



undefined8 * FUN_18016bda0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;

  local_68 = 0x58fd3bf7aff30fec;
  local_70 = 0xf3c0ac7f12bd2d4b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_68 ^ 0x74e65a2e5a4579d;
          uVar1 = local_68 ^ local_70;
          local_70 = local_70 ^ 0x74e65a2e5a4579d;
          local_68 = uVar2;
          if (-0x86a2f16827d22be < (longlong)uVar1) break;
          if (uVar1 == 0xab3d9788bd4e22a7) {
            local_60 = 0xf;
            local_68 = 0xe4c7d1656b9b1c35;
            if (*(char *)(param_1 + 0x4c) != '\0') {
              local_68 = 0xd010361746803b8f;
            }
            local_70 = 0x2785e6fe3b02e6cc;
          }
          else if (uVar1 == 0xc342379b5099faf9) {
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = local_60;
            local_68 = 0x1aa8c0fd4bd3fd46;
            local_70 = 0x9b010a64bd0f17a;
          }
          else if (uVar1 == 0xf14610d7923ebbf5) {
            param_2[1] = 0;
            param_2[2] = 7;
            param_2[3] = local_60;
            FUN_18016c62b(&DAT_1802a6b48,&DAT_18029606b,0x11,8,&DAT_1802a6b50);
            *(uint *)((longlong)param_2 + 3) = CONCAT31(uRam00000001802a6b4c,DAT_1802a6b48._3_1_);
            *(undefined4 *)param_2 = DAT_1802a6b48;
            *(undefined1 *)((longlong)param_2 + 7) = 0;
            local_68 = 0xc348f0e36bce22ff;
            local_70 = 0xd05020b86bcd2ec3;
          }
        }
        if (0x1318d05b00030c3b < (longlong)uVar1) break;
        if (uVar1 == 0xf795d0e97d82dd43) {
          local_68 = 0xa51e286aa345d8f0;
          if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x90) != '\0') {
            local_68 = 0x48ffa71bc8cc9528;
          }
          local_70 = 0x5d4c454203384f6a;
        }
        else if (uVar1 == 0xf8526d28a07d979a) {
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[3] = local_60;
          local_68 = 0x87764de82c18737a;
          local_70 = 0x946e9db32c1b7f46;
        }
      }
      if (uVar1 != 0x15b3e259cbf4da42) break;
      local_68 = 0x6649a82ba90e449a;
      if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x90) == 0) {
        local_68 = 0x6f5dd5d49b4d68f5;
      }
      local_70 = 0x9e1bc5030973d300;
    }
  } while (uVar1 != 0x1318d05b00030c3c);
  return param_2;
}



void FUN_18016c0c0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  FUN_1800edd90(1,0x3f800000);
  return;
}



void FUN_18016c100(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_18021da70;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



void FUN_18016c130(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x948efe8c5dd39391;
  local_50 = 0x800b642e7e9d60db;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x47588d23ed718b1a;
        if (uVar1 != 0x14859aa2234ef34a) break;
        local_48 = 0xdd5521f3b5479cfb;
        if (param_2 != '\0') {
          local_48 = 0x946865ca55fb2ea2;
        }
        local_50 = 0xf35f97146007d6a5;
      }
      if (uVar1 != 0x6737f2de35fcf807) break;
      thunk_FUN_1801f42e0(param_1,0x10);
      local_48 = 0x38f76d20bcd2894f;
      local_50 = 0x16fddbc76992c311;
    }
    local_48 = local_48 ^ 0x47588d23ed718b1a;
  } while (uVar1 != 0x2e0ab6e7d5404a5e);
  return;
}



void FUN_18016c280(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x6077af3ef7516feb;
  local_58 = 0x4df54c99aac52489;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xdebc08028a7a214b;
        if (uVar1 != 0x2d82e3a75d944b62) break;
        local_48 = *(longlong *)(param_1 + 8);
        local_50 = 0x451e5ea3cd0536be;
        if (*(char *)(local_48 + 0x4c) != '\0') {
          local_50 = 0x25c675ec5e04670a;
        }
        local_58 = 0x18dad9c427efabf2;
      }
      if (uVar1 != 0x3d1cac2879ebccf8) break;
      (**(code **)(param_1 + 0x10))(local_48,param_2);
      local_50 = 0x513d2e3fa31a3848;
      local_58 = 0xcf9a95849f0a504;
    }
    local_50 = local_50 ^ 0xdebc08028a7a214b;
  } while (uVar1 != 0x5dc48767eaea9d4c);
  return;
}



void FUN_18016c3b0(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x405c7e7d9fb1c02d;
  local_50 = 0x680837918a0e558a;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xcbe543cbabd64114;
        if (uVar1 != 0x285449ec15bf95a7) break;
        local_48 = 0x62ab6eb4f5d5a90d;
        if (param_2 != '\0') {
          local_48 = 0x60dc9e51bab5a0ff;
        }
        local_50 = 0x2f0d406b3171f207;
      }
      if (uVar1 != 0x4fd1de3a8bc452f8) break;
      thunk_FUN_1801f42e0(param_1,0x18);
      local_48 = 0xe612820c6cec1a96;
      local_50 = 0xabb4acd3a848419c;
    }
    local_48 = local_48 ^ 0xcbe543cbabd64114;
  } while (uVar1 != 0x4da62edfc4a45b0a);
  return;
}



undefined8 FUN_18016c4e0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xf49b7a3ae7fcba28;
  local_50 = 0x9fcf17bfc2f344;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xcc6efb434897d534;
        if (uVar1 != 0xf404b52d583e496c) break;
        FUN_180106c90(param_1);
        local_48 = 0xa39b1fda70a6b9b5;
        if ((param_2 & 1) == 0) {
          local_48 = 0xd1c8b5e45e49f6cf;
        }
        local_50 = 0xfa87dd8aa39d2655;
      }
      if (uVar1 != 0x591cc250d33b9fe0) break;
      thunk_FUN_1801f42e0(param_1,0x98);
      local_48 = 0xa84258854b132fc0;
      local_50 = 0x830d30ebb6c7ff5a;
    }
    local_48 = local_48 ^ 0xcc6efb434897d534;
  } while (uVar1 != 0x2b4f686efdd4d09a);
  return param_1;
}



void FUN_18016c62b(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x6f3f3b08ae9e4b04;
  local_68 = 0xe8c5bf8f941217bd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x6d0fefbc18d673e7;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x6d0fefbc18d673e7;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0xdded526dc5a64f) break;
          if (uVar1 == 0xdded526dc5a64f) {
            *param_5 = 1;
            local_60 = 0xde437b455b10dce5;
            local_68 = 0x8d3083e71fdd86f;
          }
          else if (uVar1 == 0x26474a13e82b0d7e) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x2f02a20ed861da9f;
            local_68 = 0xf5a3998dfaefd3b0;
          }
          else if (uVar1 == 0x41312414cfb0c3fe) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x6db243e7552024ba;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0xd0871a013a9ba1d7;
            }
            local_68 = 0x4bf509f4bd0b29c4;
          }
        }
        if (-0x296f8c84d512fb77 < (longlong)uVar1) break;
        if (uVar1 == 0x87fa84873a8c5cb9) {
          local_60 = 0x7db2b98caaf69232;
          if (*param_5 == 1) {
            local_60 = 0xea13eee34fab5546;
          }
          local_68 = 0x3c839d98654651cc;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
        else if (uVar1 == 0x9b7213f587908813) {
          local_6a = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x8203ab64368f5979;
          local_68 = 0x58a290e714015056;
        }
      }
      if (uVar1 != 0xdaa13b83228e092f) break;
      local_6b = local_6a ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6b;
      local_54 = local_4c + 1;
      local_60 = 0xcd25902b85f5debd;
      if (local_54 == param_4) {
        local_60 = 0x8cc9596d2780bb0c;
      }
      local_68 = 0x8c14b43f4a451d43;
    }
  } while (uVar1 != 0xd690737b2aed048a);
  return;
}



undefined8 *
FUN_18016c8e0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffff28;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  uint local_4c;
  uintptr_t local_48;
  ulonglong local_40;
  undefined1 local_31;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_48 = 0;
  local_88 = 0x28;
  local_31 = 0;
  local_80 = 0xfff;
  local_40 = 0xf;
  local_4c = 0;
  local_78 = 1;
  local_70 = 0x20;
  local_68 = -8;
  local_c8 = *param_3;
  lStack_c0 = param_3[1];
  local_b8 = param_3[2];
  lStack_b0 = param_3[3];
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  local_a8 = (undefined4)*param_2;
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_a0 = (undefined4)param_2[1];
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_98 = (undefined4)param_2[2];
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_90 = (undefined4)param_2[3];
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_60 = param_3;
  local_58 = param_2;
  FUN_1801063a0(local_a8,&local_a8,&local_c8,param_4,in_stack_ffffffffffffff28 & 0xffffffff00000000);
  plVar11 = local_58;
  plVar10 = local_60;
  *param_1 = &PTR_FUN_180217de0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = param_5[1];
  param_1[0xe] = *param_5;
  param_1[0xf] = uVar1;
  uVar1 = param_5[3];
  param_1[0x10] = param_5[2];
  param_1[0x11] = uVar1;
  param_5[2] = local_48;
  param_5[3] = local_40;
  *(undefined1 *)param_5 = local_31;
  uVar1 = param_5[6];
  param_5[6] = 0;
  uVar8 = param_5[4];
  uVar9 = param_5[5];
  param_5[4] = 0;
  param_5[5] = 0;
  param_1[0x12] = uVar8;
  param_1[0x13] = uVar9;
  param_1[0x14] = uVar1;
  uVar1 = param_5[9];
  param_5[9] = 0;
  uVar4 = *(undefined4 *)(param_5 + 7);
  uVar5 = *(undefined4 *)((longlong)param_5 + 0x3c);
  uVar6 = *(undefined4 *)(param_5 + 8);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x44);
  param_5[7] = 0;
  param_5[8] = 0;
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
  *(undefined4 *)(param_1 + 0x16) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar7;
  param_1[0x17] = uVar1;
  param_1[0x18] = param_5[10];
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_5 + 0xb);
  uVar2 = local_58[3];
  if (local_40 < uVar2) {
    lVar3 = *local_58;
    uVar13 = local_78 + uVar2;
    lVar12 = lVar3;
    if (local_80 < uVar13) {
      lVar12 = *(longlong *)(lVar3 + -8);
      if (local_70 <= (ulonglong)((lVar3 + local_68) - lVar12)) goto LAB_18016cb7e;
      uVar13 = uVar2 + local_88;
    }
    thunk_FUN_1801f42e0(lVar12,uVar13);
  }
  plVar11[2] = local_48;
  plVar11[3] = local_40;
  *(undefined1 *)plVar11 = local_31;
  uVar2 = plVar10[3];
  if (local_40 < uVar2) {
    lVar3 = *plVar10;
    uVar13 = local_78 + uVar2;
    lVar12 = lVar3;
    if (local_80 < uVar13) {
      lVar12 = *(longlong *)(lVar3 + -8);
      if (local_70 <= (ulonglong)((lVar3 + local_68) - lVar12)) {
LAB_18016cb7e:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
      }
      uVar13 = uVar2 + local_88;
    }
    thunk_FUN_1801f42e0(lVar12,uVar13);
  }
  plVar10[2] = local_48;
  plVar10[3] = local_40;
  *(undefined1 *)plVar10 = local_31;
  FUN_18011a170(param_5);
  return param_1;
}



void Unwind_18016cba0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa0));
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x98));
  FUN_18011a170(*(undefined8 *)(param_2 + 0x120));
  return;
}



undefined8 * FUN_18016cbe0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong local_68;
  ulonglong local_60;

  local_60 = 0xb483507a9908ad2c;
  local_68 = 0x3bd7fc21aa907931;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xb5677447d7df9994;
        if (0xeaf617d7f80284a < (longlong)uVar1) break;
        if (uVar1 == 0x8f54ac5b3398d41d) {
          local_60 = 0x4328dfdc4666a54;
          if ((*(byte *)(param_1 + 0xc9) & 1) == 0) {
            local_60 = 0xd8c336663093231c;
          }
          if (*(char *)(param_1 + 0x4c) == '\0') {
            local_60 = 0x4328dfdc4666a54;
          }
          local_68 = 0xd66c571b4f130b57;
        }
        else {
          local_60 = local_60 ^ 0xb5677447d7df9994;
          if (uVar1 == 0xd25edae68b756103) {
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            local_60 = 0x3225891789d8e949;
            local_68 = 0x44d5336cb2f004c7;
          }
        }
      }
      if (uVar1 != 0xeaf617d7f80284b) break;
      param_2[1] = 0;
      param_2[2] = 0xb;
      FUN_18016d269(&DAT_1802a6b54,&DAT_1802960e8,0x1e,0xc,&DAT_1802a6b60);
      *(undefined4 *)((longlong)param_2 + 7) = ram0x0001802a6b5b;
      *param_2 = CONCAT17(DAT_1802a6b54._7_1_,(undefined7)DAT_1802a6b54);
      local_60 = 0x1acae24dc59f5bc5;
      local_68 = 0x6c3a5836feb7b64b;
    }
    local_60 = local_60 ^ 0xb5677447d7df9994;
  } while (uVar1 != 0x76f0ba7b3b28ed8e);
  param_2[3] = 0xf;
  return param_2;
}



void FUN_18016cde0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  ulonglong local_78;
  ulonglong local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_a8;
  local_70 = 0xa5e13524fa72a88b;
  local_78 = 0xed9be3ffae955a3d;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_70 ^ 0x9a808d2e4e26bdb4;
        uVar2 = local_70 ^ local_78;
        local_78 = local_78 ^ 0x9a808d2e4e26bdb4;
        local_70 = uVar3;
        if (uVar2 != 0x13377c0dfabfb53c) break;
        local_88 = &DAT_1802a6b7c;
        FUN_18016d269(&DAT_1802a6b64,&DAT_18029612e,0x14,0x18);
        local_58 = &DAT_1802a6b64;
        local_50 = 0x17;
        local_88 = &DAT_1802a6b88;
        FUN_18016d269(&DAT_1802a6b80,&DAT_18029616f,0x1e,6);
        local_68 = &DAT_1802a6b80;
        local_60 = 5;
        FUN_18016cfd0(4,&local_68,&local_58,param_1 + 8);
        local_70 = 0xc8b67e262003d2cc;
        local_78 = 0x671bfbbd9f52b781;
      }
      if (uVar2 != 0x487ad6db54e7f2b6) break;
      cVar1 = FUN_1801b6c10(param_1 + 0x70);
      local_70 = 0x9c05e13dd75316be;
      if (cVar1 != '\0') {
        local_70 = 0x209f18ab92bdc6cf;
      }
      local_78 = 0x8f329d302deca382;
    }
  } while (uVar2 != 0xafad859bbf51654d);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_a8)) {
    return;
  }
}



void FUN_18016cfd0(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined8 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 ***local_90;
  uintptr_t local_88;
  longlong local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_50;
  ulonglong local_48;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_50 = 0;
  local_48 = 0xf;
  local_80 = 1;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_a0 = *param_3;
    local_98 = param_3[1];
    local_c0 = param_4;
    if (local_48 < (ulonglong)param_4[3]) {
      local_c0 = (undefined8 *)*param_4;
    }
    local_b8 = param_4[2];
    local_c8 = 0xc000000000000000;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_48;
    if (local_48 < (ulonglong)(local_b8 + local_98)) {
      FUN_180002240(&local_78);
      local_68 = local_50;
    }
    local_b0 = local_80;
    local_a8 = &local_c8;
    FUN_180003080(local_e0,&local_78,&local_a0,&local_b0,local_50);
    local_90 = &local_78;
    if (local_48 < local_60) {
      local_90 = local_78;
    }
    local_88 = local_68;
    local_d8 = *param_2;
    uStack_d4 = param_2[1];
    uStack_d0 = param_2[2];
    uStack_cc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_d8,&local_90);
    if (local_48 < local_60) {
      uVar4 = local_80 + local_60;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_50);
        }
        uVar4 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_18016d1e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_18016d220(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void FUN_18016d269(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x7b25a4de8d440f2c;
  local_68 = 0x1c95388ffb3835b5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x48be4477970a3b6e;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x48be4477970a3b6e;
          local_60 = uVar2;
          if (0x38e9bd66c8cd488b < (longlong)uVar1) break;
          if (uVar1 == 0x852d0ee01ffe790b) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0xc54bd791b0648e9;
            if (local_54 == param_4) {
              local_60 = 0x6c33ce69225b9a4e;
            }
            local_68 = 0x54da730fea96d2c2;
          }
          else if (uVar1 == 0xf9160da50a579e5d) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0xf3664824db124fcb;
            local_68 = 0x764b46c4c4ec36c0;
          }
          else if (uVar1 == 0x1a545998d0566df8) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x34358ae8213c3d5e;
            local_68 = 0xb11884083ec24455;
          }
        }
        if (0x5f27e9bd0bf4f9db < (longlong)uVar1) break;
        if (uVar1 == 0x38e9bd66c8cd488c) {
          *param_5 = 1;
          local_60 = 0x9df3595badd19d83;
          local_68 = 0xc2d4b0e6a625645f;
        }
        else if (uVar1 == 0x588ece76f1909a2b) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x3958901e75b9b1c2;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xda1ac423afb84267;
          }
          local_68 = 0x230cc986a5efdc3a;
        }
      }
      if (uVar1 != 0x67b09c51767c3a99) break;
      local_60 = 0xa1fc6ea26842f97f;
      if (*param_5 == 1) {
        local_60 = 0xa655496992269a88;
      }
      local_68 = 0xf972a0d499d26354;
      local_54 = 0;
      local_6b = 0;
      local_48 = (int)param_3 + param_2;
    }
  } while (uVar1 != 0x5f27e9bd0bf4f9dc);
  return;
}



void FUN_18016d530(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;

  if (DAT_1802a6c10 != 0) {
    uVar4 = DAT_1802a6c20 - DAT_1802a6c10;
    lVar3 = DAT_1802a6c10;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(DAT_1802a6c10 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6c10 + -8) - lVar3)) goto LAB_18016d67b;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
    DAT_1802a6c10 = 0;
    DAT_1802a6c18 = 0;
    DAT_1802a6c20 = 0;
  }
  puVar2 = DAT_1802a6c00;
  *(undefined8 *)DAT_1802a6c00[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1801f42e0(puVar2,0x40);
    puVar2 = puVar1;
  }
  thunk_FUN_1801f42e0(DAT_1802a6c00,0x40);
  if (DAT_1802a6bb0 != 0) {
    uVar4 = DAT_1802a6bc0 - DAT_1802a6bb0;
    lVar3 = DAT_1802a6bb0;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(DAT_1802a6bb0 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6bb0 + -8) - lVar3)) {
LAB_18016d67b:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
    DAT_1802a6bb0 = 0;
    uRam00000001802a6bb8 = 0;
    DAT_1802a6bc0 = 0;
  }
  puVar2 = DAT_1802a6ba0;
  *(undefined8 *)DAT_1802a6ba0[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1801f42e0(puVar2,0x20);
    puVar2 = puVar1;
  }
  thunk_FUN_1801f42e0(DAT_1802a6ba0,0x20);
  return;
}



void FUN_18016d6a0(void)

{
  longlong lVar1;
  ulonglong uVar2;

  if (DAT_1802a6c38 != 0) {
    uVar2 = DAT_1802a6c48 - DAT_1802a6c38;
    lVar1 = DAT_1802a6c38;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(DAT_1802a6c38 + -8);
      if (0x1f < (ulonglong)((DAT_1802a6c38 + -8) - lVar1)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar1,uVar2);
    DAT_1802a6c38 = 0;
    DAT_1802a6c40 = 0;
    DAT_1802a6c48 = 0;
  }
  return;
}



undefined * FUN_18016d720(void)

{
  return &DAT_1802a6c50;
}



ulonglong FUN_18016d730(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined8 *local_270;
  undefined4 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_240 [16];
  undefined4 local_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158;
  char *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_40;
  longlong *plVar8;

  local_40 = DAT_1802a0400 ^ (ulonglong)auStack_298;
  if ((DAT_1802a6c60 == param_2) && (uVar3 = CONCAT71((int7)(local_40 >> 8),1), DAT_1802a6c70 != 0)) goto LAB_18016dd65;
  FUN_18016ddb0();
  DAT_1802a6c60 = param_2;
  (**(code **)(*param_2 + 0x140))(param_2,&DAT_1802a6c68);
  local_198 = (longlong *)0x0;
  local_1a0 = (longlong *)0x0;
  local_1a8 = (longlong *)0x0;
  local_1b0 = (longlong *)0x0;
  cVar1 = FUN_18016dfd0("vs_main","vs_4_0",&local_198);
  if ((cVar1 == '\0') || (cVar1 = FUN_18016dfd0("ps_main","ps_4_0",&local_1a0), cVar1 == '\0')) {
LAB_18016da11:
    bVar9 = false;
  }
  else {
    cVar1 = FUN_18016dfd0("gvs_main","vs_4_0",&local_1a8);
    if (cVar1 != '\0') {
      cVar1 = FUN_18016dfd0("gps_main","ps_4_0",&local_1b0);
      if (cVar1 == '\0') goto LAB_18016da11;
      uVar4 = (**(code **)(*local_198 + 0x20))();
      uVar5 = (**(code **)(*local_198 + 0x18))();
      local_278 = &DAT_1802a6c70;
      iVar2 = (**(code **)(*param_2 + 0x60))(param_2,uVar5,uVar4,0);
      if (-1 < iVar2) {
        uVar4 = (**(code **)(*local_1a0 + 0x20))();
        uVar5 = (**(code **)(*local_1a0 + 0x18))();
        local_278 = &DAT_1802a6c78;
        iVar2 = (**(code **)(*param_2 + 0x78))(param_2,uVar5,uVar4,0);
        if (-1 < iVar2) {
          uVar4 = (**(code **)(*local_1a8 + 0x20))();
          uVar5 = (**(code **)(*local_1a8 + 0x18))();
          local_278 = &DAT_1802a6c80;
          iVar2 = (**(code **)(*param_2 + 0x60))(param_2,uVar5,uVar4,0);
          if (-1 < iVar2) {
            uVar4 = (**(code **)(*local_1b0 + 0x20))();
            uVar5 = (**(code **)(*local_1b0 + 0x18))();
            local_278 = &DAT_1802a6c88;
            iVar2 = (**(code **)(*param_2 + 0x78))(param_2,uVar5,uVar4,0);
            if (-1 < iVar2) {
              local_118 = 0x800000000;
              uStack_110 = 0;
              local_128 = "COLOR";
              uStack_120 = 0x200000000;
              local_138 = 0;
              uStack_130 = 0;
              local_148 = "POSITION";
              uStack_140 = 0x1000000000;
              puVar6 = (undefined8 *)(**(code **)(*local_1a8 + 0x20))();
              uVar4 = (**(code **)(*local_1a8 + 0x18))();
              local_270 = &DAT_1802a6c90;
              local_278 = puVar6;
              iVar2 = (**(code **)(*param_2 + 0x58))(param_2,&local_148,2,uVar4);
              bVar9 = -1 < iVar2;
              goto joined_r0x00018016da1f;
            }
          }
        }
      }
    }
    bVar9 = false;
  }
joined_r0x00018016da1f:
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x10))();
    local_198 = (longlong *)0x0;
  }
  if (local_1a0 != (longlong *)0x0) {
    (**(code **)(*local_1a0 + 0x10))();
    local_1a0 = (longlong *)0x0;
  }
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x10))();
    local_1a8 = (longlong *)0x0;
  }
  if (local_1b0 != (longlong *)0x0) {
    (**(code **)(*local_1b0 + 0x10))();
    local_1b0 = (longlong *)0x0;
  }
  if (bVar9) {
    local_1b8 = 0;
    local_1c8 = 0x200000060;
    uStack_1c0 = 0x1000000000004;
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&local_1c8,0,&DAT_1802a6c98);
    if (-1 < iVar2) {
      FUN_180207610(&local_148,0,0x108);
      uStack_140 = 0x500000001;
      local_138 = 0x100000006;
      uStack_130 = 0x600000002;
      local_128 = (char *)CONCAT35(local_128._5_3_,0xf00000001);
      (**(code **)(*param_2 + 0xa0))(param_2,&local_148,&DAT_1802a6cb0);
      local_168 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_188 = 0x300000015;
      uStack_180 = 0x300000003;
      local_158 = 0x7f7fffff;
      (**(code **)(*param_2 + 0xb8))(param_2,&local_188,&DAT_1802a6cb8);
      local_1e8 = (undefined1  [16])0x0;
      local_1f0 = 0x100000003;
      local_1d8 = ZEXT816(0x100000000);
      (**(code **)(*param_2 + 0xb0))(param_2,&local_1f0,&DAT_1802a6cc0);
      local_208 = (undefined1  [16])0x0;
      local_218 = (undefined1  [16])0x0;
      local_228 = (undefined1  [16])0x0;
      local_1f8 = 0;
      (**(code **)(*param_2 + 0xa8))(param_2,local_228,&DAT_1802a6cc8);
      local_18c = 0xffffffff;
      local_230 = 0;
      local_258 = 0x100000001;
      uStack_250 = 0x100000001;
      local_248 = 0x10000001c;
      local_240._0_12_ = ZEXT812(0x800000001) << 0x20;
      local_240._12_4_ = 0;
      local_268 = &local_18c;
      local_260 = 4;
      plVar8 = param_2;
      iVar2 = (**(code **)(*param_2 + 0x28))(param_2,&local_258,&local_268,&DAT_1802a6cd0);
      uVar7 = SUB84(plVar8,0);
      if (-1 < iVar2) {
        plVar8 = param_2;
        (**(code **)(*param_2 + 0x38))(param_2,DAT_1802a6cd0,0,&DAT_1802a6cd8);
        uVar7 = SUB84(plVar8,0);
      }
      bVar9 = DAT_1802a6cd8 != 0;
      auVar10._0_4_ = -(uint)(DAT_1802a6cb0._4_4_ == 0 && (int)DAT_1802a6cb0 == 0);
      auVar10._4_4_ = -(uint)((int)DAT_1802a6cb8 == 0 && DAT_1802a6cb8._4_4_ == 0);
      auVar10._8_4_ = -(uint)(DAT_1802a6cc0._4_4_ == 0 && (int)DAT_1802a6cc0 == 0);
      auVar10._12_4_ = -(uint)((int)DAT_1802a6cc8 == 0 && DAT_1802a6cc8._4_4_ == 0);
      iVar2 = movmskps(uVar7,auVar10);
      if (iVar2 == 0 && bVar9) {
        if (DAT_1802a6be0 != (longlong *)0x0) {
          (**(code **)(*DAT_1802a6be0 + 0x10))();
          DAT_1802a6be0 = (longlong *)0x0;
        }
        if (DAT_1802a6bd8 != (longlong *)0x0) {
          (**(code **)(*DAT_1802a6bd8 + 0x10))();
          DAT_1802a6bd8 = (longlong *)0x0;
        }
        FUN_180171020(&DAT_1802a6bf8);
        _DAT_1802a6be8 = 0x100000001;
        DAT_1802a6bf0 = 0;
      }
      else {
        FUN_18016ddb0(param_1);
      }
      uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),iVar2 == 0 && bVar9) & 0xffffffff;
      goto LAB_18016dd65;
    }
  }
  FUN_18016ddb0(param_1);
  uVar3 = 0;
LAB_18016dd65:
  if (DAT_1802a0400 == (local_40 ^ (ulonglong)auStack_298)) {
    return uVar3;
  }
}



void FUN_18016ddb0(undefined1 *param_1)

{
  if (DAT_1802a6be0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6be0 + 0x10))();
    DAT_1802a6be0 = (longlong *)0x0;
  }
  if (DAT_1802a6bd8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6bd8 + 0x10))();
    DAT_1802a6bd8 = (longlong *)0x0;
  }
  FUN_180171020(&DAT_1802a6bf8);
  _DAT_1802a6be8 = 0x100000001;
  DAT_1802a6bf0 = 0;
  if (DAT_1802a6c70 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c70 + 0x10))();
    DAT_1802a6c70 = (longlong *)0x0;
  }
  if (DAT_1802a6c78 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c78 + 0x10))();
    DAT_1802a6c78 = (longlong *)0x0;
  }
  if (DAT_1802a6c80 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c80 + 0x10))();
    DAT_1802a6c80 = (longlong *)0x0;
  }
  if (DAT_1802a6c88 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c88 + 0x10))();
    DAT_1802a6c88 = (longlong *)0x0;
  }
  if (DAT_1802a6c90 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c90 + 0x10))();
    DAT_1802a6c90 = (longlong *)0x0;
  }
  if (DAT_1802a6c98 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c98 + 0x10))();
    DAT_1802a6c98 = (longlong *)0x0;
  }
  if (DAT_1802a6ca0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6ca0 + 0x10))();
    DAT_1802a6ca0 = (longlong *)0x0;
  }
  DAT_1802a6ca8 = 0;
  if (DAT_1802a6cb0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6cb0 + 0x10))();
    DAT_1802a6cb0 = (longlong *)0x0;
  }
  if (DAT_1802a6cb8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6cb8 + 0x10))();
    DAT_1802a6cb8 = (longlong *)0x0;
  }
  if (DAT_1802a6cc0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6cc0 + 0x10))();
    DAT_1802a6cc0 = (longlong *)0x0;
  }
  if (DAT_1802a6cc8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6cc8 + 0x10))();
    DAT_1802a6cc8 = (longlong *)0x0;
  }
  if (DAT_1802a6cd8 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6cd8 + 0x10))();
    DAT_1802a6cd8 = (longlong *)0x0;
  }
  if (DAT_1802a6cd0 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6cd0 + 0x10))();
    DAT_1802a6cd0 = (longlong *)0x0;
  }
  if (DAT_1802a6c68 != (longlong *)0x0) {
    (**(code **)(*DAT_1802a6c68 + 0x10))();
    DAT_1802a6c68 = (longlong *)0x0;
  }
  DAT_1802a6c60 = 0;
  *param_1 = 0;
  return;
}



bool FUN_18016dfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong **local_58;
  undefined *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined *local_28;
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_a8;
  local_20 = (longlong *)0x0;
  local_58 = &local_20;
  local_68 = 0;
  local_70 = 0;
  local_88 = (undefined **)0x0;
  local_80 = param_1;
  local_78 = param_2;
  local_60 = param_3;
  local_18 = param_1;
  iVar1 = D3DCompile("\ncbuffer Params : register(b0) {\n    float4 uScreen;\n    float4 uRect;\n    float4 uColorA;\n    float4 uColorB;\n    float4 uP;    // radius, thickness, mode, gradient\n    float4 uP2;   // aa\n};\n\nTexture2D    tex : register(t0);\nSamplerState smp : register(s0);\n\nstruct VSOut { float4 pos : SV_POSITION; float2 px : TEXCOORD0; float2 uv : TEXCOORD1; };\n\nVSOut vs_main(uint id : SV_VertexID) {\n    float2 c  = float2(id & 1, (id >> 1) & 1);\n    float2 mn = uRect.xy;\n    float2 mx = uRect.zw;\n    float expand = (uP.z < 0.5) ? uP2.x : 0.0;\n    float2 p = lerp(mn - expand, mx + expand, c);\n    VSOut o;\n    o.px  = p;\n    o.uv  = c;\n    o.pos = float4(p / uScreen.xy * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return o;\n}\n\nfloat sdRound(float2 p, float2 h, float r) {\n    float2 q = abs(p) - h + r;\n    return min(max(q.x, q.y), 0.0) + length(max(q, 0.0)) - r;\n}\n\nfloat4 ps_main(VSOut i) : SV_TARGET {\n    float mode = uP.z;\n    if (mode > 1.5) {\n        float2 auv = lerp(uColorB.xy, uColorB.zw, i.uv);\n        float cov = tex.Sample(smp, auv).r;\n        return float4(uColorA.rgb, uColorA.a * cov);\n    }\n    if (mode > 0.5) {\n        float4 t = tex.Sample(smp, i.uv);\n        return t * uColorA;\n    }\n    float2 mn = uRect.xy;\n    float2 mx = uRect.zw;\n    float2 center = (mn + mx) * 0.5;\n    float2 half = (mx - mn) * 0.5;\n    float r = min(uP.x, min(half.x, half.y));\n    float d = sdRound(i.px - center, half, r);\n    float aa = max(uP2.x, 0.001);\n    float cov;\n    if (uP.y > 0.0)\n        cov = 1.0 - smoothstep(0.0, aa, abs(d) - uP.y * 0.5);\n    else\n        cov = 1.0 - smoothstep(-aa, 0.0, d);\n    float4 col = uColorA;\n    if (uP.w > 0.5) {\n        float t = (uP.w < 1.5) ? saturate((i.px.y - mn.y) / max(mx.y - mn.y, 0.001))\n                               : saturate((i.px.x - mn.x) / max(mx.x - mn.x, 0.001));\n        col = lerp(uColorA, uColorB, t);\n    }\n    return float4(col.rgb, col.a * cov);\n}\n\nstruct GVSIn  { float2 pos : POSITION; float4 col : COLOR; };\nstruct GVSOut { float4 pos : SV_POSITION; float4 col : COLO..."
                     ,0x8e6,0,0);
  if (iVar1 < 0) {
    if (local_20 == (longlong *)0x0) {
      local_28 = &DAT_18021e707;
    }
    else {
      local_28 = (undefined *)(**(code **)(*local_20 + 0x18))();
    }
    local_38 = "{} failed: {}";
    local_30 = 0xd;
    local_48 = &DAT_18021e717;
    local_40 = 3;
    local_88 = &local_28;
    FUN_180170e10(4,&local_48,&local_38,&local_18);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
  }
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_a8)) {
    return -1 < iVar1;
  }
}



undefined8
FUN_18016e110(undefined1 *param_1,longlong param_2,longlong *param_3,longlong param_4,float param_5,float param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined8 local_68;
  longlong local_60 [4];
  ulonglong local_40;

  local_40 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  if (param_4 != 0 && (param_3 != (longlong *)0x0 && param_2 != 0)) {
    local_60[0] = param_4;
    cVar1 = FUN_18016d730(param_1);
    if (cVar1 != '\0') {
      *(float *)(param_1 + 4) = param_5;
      *(float *)(param_1 + 8) = param_6;
      if (DAT_1802a6c38 != DAT_1802a6c40) {
        DAT_1802a6c40 = DAT_1802a6c38;
      }
      (**(code **)(*param_3 + 0x2c8))(param_3,8,&DAT_1802970b0,&DAT_1802970f0);
      (**(code **)(*param_3 + 0x2d8))(param_3,&DAT_1802970f8,&DAT_180297100,&DAT_180297110);
      (**(code **)(*param_3 + 0x2e0))(param_3,&DAT_180297118,&DAT_180297120);
      (**(code **)(*param_3 + 0x2f0))(param_3,&DAT_180297128);
      DAT_180297130 = 0x10;
      (**(code **)(*param_3 + 0x2f8))(param_3,&DAT_180297130,&DAT_180297134);
      DAT_1802972b4 = 0x10;
      (**(code **)(*param_3 + 0x300))(param_3,&DAT_1802972b4,&DAT_1802972b8);
      (**(code **)(*param_3 + 0x260))(param_3,&DAT_1802973b8,0,0);
      (**(code **)(*param_3 + 0x250))(param_3,&DAT_1802973c0,0,0);
      (**(code **)(*param_3 + 0x290))(param_3,&DAT_1802973c8,0,0);
      (**(code **)(*param_3 + 0x310))(param_3,&DAT_1802973d0,0,0);
      (**(code **)(*param_3 + 0x330))(param_3,&DAT_1802973d8,0,0);
      (**(code **)(*param_3 + 0x240))(param_3,0,1,&DAT_1802973e0);
      (**(code **)(*param_3 + 0x268))(param_3,0,1,&DAT_1802973e8);
      (**(code **)(*param_3 + 0x248))(param_3,0,1,&DAT_1802973f0);
      (**(code **)(*param_3 + 600))(param_3,0,1,&DAT_1802973f8);
      (**(code **)(*param_3 + 0x270))(param_3,&DAT_180297400);
      (**(code **)(*param_3 + 0x298))(param_3,&DAT_180297408);
      local_90 = &DAT_18029741c;
      local_98 = &DAT_180297418;
      (**(code **)(*param_3 + 0x278))(param_3,0,1,&DAT_180297410);
      local_78 = 0;
      local_70 = param_5;
      local_6c = param_6;
      local_68 = 0x3f80000000000000;
      local_88 = 0;
      local_80 = CONCAT44((int)param_6,(int)param_5);
      local_60[1] = 0;
      local_60[2] = 0;
      (**(code **)(*param_3 + 0x108))(param_3,1,local_60,0);
      (**(code **)(*param_3 + 0x118))(param_3,DAT_1802a6cb0,local_60 + 1,0xffffffff);
      (**(code **)(*param_3 + 0x120))(param_3,DAT_1802a6cc8,0);
      (**(code **)(*param_3 + 0x158))(param_3,DAT_1802a6cc0);
      (**(code **)(*param_3 + 0x160))(param_3,1,&local_78);
      (**(code **)(*param_3 + 0x168))(param_3,1,&local_88);
      (**(code **)(*param_3 + 0xb8))(param_3,0,0,0);
      (**(code **)(*param_3 + 0x1e0))(param_3,0,0,0);
      (**(code **)(*param_3 + 0x200))(param_3,0,0,0);
      (**(code **)(*param_3 + 0x38))(param_3,0,1,&DAT_1802a6c98);
      (**(code **)(*param_3 + 0x80))(param_3,0,1,&DAT_1802a6c98);
      (**(code **)(*param_3 + 0x50))(param_3,0,1,&DAT_1802a6cb8);
      *param_1 = 1;
      uVar2 = 1;
      goto LAB_18016e4f5;
    }
  }
  uVar2 = 0;
LAB_18016e4f5:
  if (DAT_1802a0400 == (local_40 ^ (ulonglong)auStack_b8)) {
    return uVar2;
  }
}



void FUN_18016e540(char *param_1)

{
  longlong *plVar1;

  plVar1 = DAT_1802a6c68;
  if (*param_1 == '\x01') {
    (**(code **)(*DAT_1802a6c68 + 0x108))(DAT_1802a6c68,8,&DAT_1802970b0,DAT_1802970f0);
    (**(code **)(*plVar1 + 0x118))(plVar1,DAT_1802970f8,&DAT_180297100,DAT_180297110);
    (**(code **)(*plVar1 + 0x120))(plVar1,DAT_180297118,DAT_180297120);
    (**(code **)(*plVar1 + 0x158))(plVar1,DAT_180297128);
    if (DAT_180297130 != 0) {
      (**(code **)(*plVar1 + 0x160))(plVar1,DAT_180297130,&DAT_180297134);
    }
    if (DAT_1802972b4 != 0) {
      (**(code **)(*plVar1 + 0x168))(plVar1,DAT_1802972b4,&DAT_1802972b8);
    }
    (**(code **)(*plVar1 + 0x58))(plVar1,DAT_1802973b8,0,0);
    (**(code **)(*plVar1 + 0x48))(plVar1,DAT_1802973c0,0,0);
    (**(code **)(*plVar1 + 0xb8))(plVar1,DAT_1802973c8,0,0);
    (**(code **)(*plVar1 + 0x1e0))(plVar1,DAT_1802973d0,0,0);
    (**(code **)(*plVar1 + 0x200))(plVar1,DAT_1802973d8,0,0);
    (**(code **)(*plVar1 + 0x38))(plVar1,0,1,&DAT_1802973e0);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_1802973e8);
    (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&DAT_1802973f0);
    (**(code **)(*plVar1 + 0x50))(plVar1,0,1,&DAT_1802973f8);
    (**(code **)(*plVar1 + 0x88))(plVar1,DAT_180297400);
    (**(code **)(*plVar1 + 0xc0))(plVar1,DAT_180297408);
    (**(code **)(*plVar1 + 0x90))(plVar1,0,1,&DAT_180297410,&DAT_180297418,&DAT_18029741c);
    if (DAT_1802970b0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970b0 + 0x10))();
      DAT_1802970b0 = (longlong *)0x0;
    }
    if (DAT_1802970b8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970b8 + 0x10))();
      DAT_1802970b8 = (longlong *)0x0;
    }
    if (DAT_1802970c0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970c0 + 0x10))();
      DAT_1802970c0 = (longlong *)0x0;
    }
    if (DAT_1802970c8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970c8 + 0x10))();
      DAT_1802970c8 = (longlong *)0x0;
    }
    if (DAT_1802970d0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970d0 + 0x10))();
      DAT_1802970d0 = (longlong *)0x0;
    }
    if (DAT_1802970d8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970d8 + 0x10))();
      DAT_1802970d8 = (longlong *)0x0;
    }
    if (DAT_1802970e0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970e0 + 0x10))();
      DAT_1802970e0 = (longlong *)0x0;
    }
    if (DAT_1802970e8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970e8 + 0x10))();
      DAT_1802970e8 = (longlong *)0x0;
    }
    if (DAT_1802970f0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970f0 + 0x10))();
      DAT_1802970f0 = (longlong *)0x0;
    }
    if (DAT_1802970f8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802970f8 + 0x10))();
      DAT_1802970f8 = (longlong *)0x0;
    }
    if (DAT_180297118 != (longlong *)0x0) {
      (**(code **)(*DAT_180297118 + 0x10))();
      DAT_180297118 = (longlong *)0x0;
    }
    if (DAT_180297128 != (longlong *)0x0) {
      (**(code **)(*DAT_180297128 + 0x10))();
      DAT_180297128 = (longlong *)0x0;
    }
    if (DAT_1802973b8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973b8 + 0x10))();
      DAT_1802973b8 = (longlong *)0x0;
    }
    if (DAT_1802973c0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973c0 + 0x10))();
      DAT_1802973c0 = (longlong *)0x0;
    }
    if (DAT_1802973c8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973c8 + 0x10))();
      DAT_1802973c8 = (longlong *)0x0;
    }
    if (DAT_1802973d0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973d0 + 0x10))();
      DAT_1802973d0 = (longlong *)0x0;
    }
    if (DAT_1802973d8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973d8 + 0x10))();
      DAT_1802973d8 = (longlong *)0x0;
    }
    if (DAT_1802973e0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973e0 + 0x10))();
      DAT_1802973e0 = (longlong *)0x0;
    }
    if (DAT_1802973e8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973e8 + 0x10))();
      DAT_1802973e8 = (longlong *)0x0;
    }
    if (DAT_1802973f0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973f0 + 0x10))();
      DAT_1802973f0 = (longlong *)0x0;
    }
    if (DAT_1802973f8 != (longlong *)0x0) {
      (**(code **)(*DAT_1802973f8 + 0x10))();
      DAT_1802973f8 = (longlong *)0x0;
    }
    if (DAT_180297400 != (longlong *)0x0) {
      (**(code **)(*DAT_180297400 + 0x10))();
      DAT_180297400 = (longlong *)0x0;
    }
    if (DAT_180297410 != (longlong *)0x0) {
      (**(code **)(*DAT_180297410 + 0x10))();
      DAT_180297410 = (longlong *)0x0;
    }
    *param_1 = '\0';
  }
  return;
}



void FUN_18016e9e0(char *param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  if ((((*param_1 == '\x01') && (0.001 < *(float *)(param_3 + 0xc))) && (0.0 < param_2[2] - *param_2)) &&
     (0.0 < param_2[3] - param_2[1])) {
    FUN_18016ea50(param_2,param_3,param_3,param_4,0,0,0,0);
  }
  return;
}



void FUN_18016ea50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined8 **local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  ulonglong local_70;

  uVar7 = DAT_1802a6c54;
  local_70 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = *param_3;
  uVar6 = param_3[1];
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_a0 = &local_88;
  local_a8 = (undefined4 *)((ulonglong)local_a8 & 0xffffffff00000000);
  iVar9 = (**(code **)(*DAT_1802a6c68 + 0x70))(DAT_1802a6c68,DAT_1802a6c98,0,4);
  if (-1 < iVar9) {
    *local_88 = uVar7;
    local_88[1] = 0;
    local_88[2] = uVar1;
    local_88[3] = uVar2;
    local_88[4] = uVar3;
    local_88[5] = uVar4;
    local_88[6] = uVar5;
    local_88[7] = uVar6;
    *(undefined4 *)(local_88 + 8) = param_4;
    *(undefined4 *)((longlong)local_88 + 0x44) = param_5;
    *(undefined4 *)(local_88 + 9) = param_6;
    *(undefined4 *)((longlong)local_88 + 0x4c) = param_7;
    *(undefined4 *)(local_88 + 10) = 0x3f800000;
    *(undefined8 *)((longlong)local_88 + 0x54) = 0;
    *(undefined4 *)((longlong)local_88 + 0x5c) = 0;
    (**(code **)(*DAT_1802a6c68 + 0x78))(DAT_1802a6c68,DAT_1802a6c98,0);
  }
  plVar8 = DAT_1802a6c68;
  if (param_8 == (undefined8 *)0x0) {
    param_8 = DAT_1802a6cd8;
  }
  local_88 = param_8;
  (**(code **)(*DAT_1802a6c68 + 0x58))(DAT_1802a6c68,DAT_1802a6c70,0,0);
  (**(code **)(*plVar8 + 0x48))(plVar8,DAT_1802a6c78,0,0);
  (**(code **)(*plVar8 + 0x40))(plVar8,0,1,&local_88);
  (**(code **)(*plVar8 + 0x88))(plVar8,0);
  (**(code **)(*plVar8 + 0xc0))(plVar8,5);
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_a0 = (undefined8 **)&local_98;
  local_a8 = &local_94;
  (**(code **)(*plVar8 + 0x90))(plVar8,0,1,&local_90);
  (**(code **)(*plVar8 + 0x68))(plVar8,4,0);
  if (DAT_1802a0400 == (local_70 ^ (ulonglong)auStack_c8)) {
    return;
  }
}



void FUN_18016ec90(char *param_1,undefined8 param_2,longlong param_3,float param_4,undefined4 param_5)

{
  if (((*param_1 == '\x01') && (0.0 < param_4)) && (0.001 < *(float *)(param_3 + 0xc))) {
    FUN_18016ea50(param_2,param_3,param_3,param_5,param_4,0,0,0);
  }
  return;
}



void FUN_18016ecf0(char *param_1,float *param_2,undefined8 param_3,undefined8 param_4,char param_5,undefined4 param_6)

{
  undefined4 uVar1;

  if (((*param_1 == '\x01') && (0.0 < param_2[2] - *param_2)) && (0.0 < param_2[3] - param_2[1])) {
    if (param_5 == '\0') {
      uVar1 = 0x40000000;
    }
    else {
      uVar1 = 0x3f800000;
    }
    FUN_18016ea50(param_2,param_3,param_4,param_6,0,0,uVar1,0);
  }
  return;
}



void FUN_18016ed70(char *param_1,longlong param_2,undefined8 param_3,float param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  float local_c;
  ulonglong local_8;

  local_8 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  if (((0.001 < param_4) && (param_2 != 0)) && (*param_1 != '\0')) {
    local_18 = 0x3f8000003f800000;
    local_10 = 0x3f800000;
    local_28 = 0;
    local_30 = 0x3f800000;
    local_38 = 0;
    local_20 = param_2;
    local_c = param_4;
    FUN_18016ea50(param_3,&local_18,&local_18,0);
  }
  if (DAT_1802a0400 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
}



void FUN_18016ee10(char *param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  ulonglong in_stack_ffffffffffffff08;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  char *local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  undefined4 *puStack_b0;
  undefined4 *local_a8;
  undefined4 local_9c;
  undefined4 local_98 [4];
  undefined8 uStack_88;
  undefined8 local_80;

  local_80 = 0xfffffffffffffffe;
  if (param_3 < 3) {
    return;
  }
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  if (*(float *)((longlong)param_4 + 0xc) <= 0.001) {
    return;
  }
  local_b8 = (undefined4 *)0x0;
  puStack_b0 = (undefined4 *)0x0;
  local_a8 = (undefined4 *)0x0;
  uVar15 = param_3 * 3 - 6;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_2;
  if (uVar15 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar15) {
      FUN_180171350();
LAB_18016f38b:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    if (uVar15 < 0xab) {
      puStack_b0 = (undefined4 *)FUN_1801d61c8(uVar15 * 0x18);
    }
    else {
      if (uVar15 == 0xaaaaaaaaaaaaaaa) goto LAB_18016f38b;
      lVar9 = FUN_1801d61c8(uVar15 * 0x18 + 0x27);
      puStack_b0 = (undefined4 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puStack_b0 + -2) = lVar9;
    }
    local_a8 = puStack_b0 + uVar15 * 6;
  }
  uVar15 = 1;
  puVar17 = puStack_b0;
  puVar14 = local_a8;
  local_b8 = puStack_b0;
LAB_18016ef34:
  if (uVar15 + 1 < local_c8) {
    local_98[0] = (undefined4)*local_c0;
    local_98[1] = (undefined4)((ulonglong)*local_c0 >> 0x20);
    puVar6 = local_c0 + uVar15;
    local_98[2] = *(undefined4 *)puVar6;
    local_98[3] = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_88 = puVar6[1];
    lVar9 = 0;
    puVar13 = puVar17;
    local_d8 = uVar15 + 1;
    do {
      while( true ) {
        uVar5 = *(undefined4 *)((longlong)local_98 + lVar9);
        uVar1 = *(undefined4 *)((longlong)local_98 + lVar9 + 4);
        uVar3 = *param_4;
        uVar19 = (undefined4)uVar3;
        uVar4 = param_4[1];
        if (puStack_b0 != puVar14) break;
        uVar16 = (longlong)puVar14 - (longlong)puVar13;
        uVar10 = ((longlong)uVar16 >> 3) * -0x5555555555555555;
        uVar15 = uVar10 + 1;
        uVar12 = 0xaaaaaaaaaaaaaaa - (uVar10 >> 1);
        uVar18 = (uVar10 >> 1) + uVar10;
        if (uVar18 <= uVar15) {
          uVar18 = uVar15;
        }
        if (uVar12 <= uVar10 && uVar10 - uVar12 != 0) {
          uVar18 = 0xaaaaaaaaaaaaaaa;
        }
        if (0xaaaaaaaaaaaaaaa < uVar18) {
          std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
        }
        if (uVar18 == 0) {
          puVar17 = (undefined4 *)0x0;
        }
        else if (uVar18 < 0xab) {
          puVar17 = (undefined4 *)FUN_1801d61c8(uVar18 * 0x18);
        }
        else {
          if (uVar18 == 0xaaaaaaaaaaaaaaa) {
            std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
          }
          lVar11 = FUN_1801d61c8(uVar18 * 0x18 + 0x27);
          puVar17 = (undefined4 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar17 + -2) = lVar11;
        }
        puVar14 = (undefined4 *)((longlong)puVar17 + uVar16);
        *puVar14 = uVar5;
        puVar14[1] = uVar1;
        puVar14[2] = uVar19;
        puVar14[3] = (int)((ulonglong)uVar3 >> 0x20);
        *(undefined8 *)((longlong)puVar17 + uVar16 + 0x10) = uVar4;
        FUN_1802079d0();
        if (puVar13 != (undefined4 *)0x0) {
          puVar14 = puVar13;
          if (0xfff < uVar16) {
            puVar14 = *(undefined4 **)(puVar13 + -2);
            if (0x1f < (ulonglong)((longlong)puVar13 + (-8 - (longlong)puVar14))) goto LAB_18016f366;
            uVar16 = uVar16 + 0x27;
          }
          thunk_FUN_1801f42e0(puVar14,uVar16);
        }
        puStack_b0 = puVar17 + uVar15 * 6;
        puVar14 = puVar17 + uVar18 * 6;
        lVar9 = lVar9 + 8;
        uVar15 = local_d8;
        puVar13 = puVar17;
        local_b8 = puVar17;
        local_a8 = puVar14;
        if (lVar9 == 0x18) goto LAB_18016ef34;
      }
      uVar1 = *(undefined4 *)((longlong)param_4 + 4);
      uVar2 = *(undefined4 *)((longlong)local_98 + lVar9 + 4);
      *puStack_b0 = uVar5;
      puStack_b0[1] = uVar2;
      puStack_b0[2] = uVar19;
      puStack_b0[3] = uVar1;
      *(undefined8 *)(puStack_b0 + 4) = uVar4;
      puStack_b0 = puStack_b0 + 6;
      lVar9 = lVar9 + 8;
      uVar15 = local_d8;
      puVar17 = puVar13;
    } while (lVar9 != 0x18);
    goto LAB_18016ef34;
  }
  lVar9 = (longlong)puStack_b0 - (longlong)puVar17;
  uVar18 = (lVar9 >> 3) * -0x5555555555555555;
  uVar15 = DAT_1802a6ca8;
  if (DAT_1802a6ca8 < uVar18) {
    if (DAT_1802a6ca0 != (longlong *)0x0) {
      (**(code **)(*DAT_1802a6ca0 + 0x10))();
      DAT_1802a6ca0 = (longlong *)0x0;
    }
    uStack_88 = 0;
    local_98[0] = (undefined4)lVar9;
    local_98[1] = 2;
    local_98[2] = 1;
    local_98[3] = 0x10000;
    iVar8 = (**(code **)(*DAT_1802a6c60 + 0x18))();
    uVar15 = uVar18;
    if (iVar8 < 0) goto LAB_18016f30b;
  }
  DAT_1802a6ca8 = uVar15;
  plVar7 = DAT_1802a6c68;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar15 = in_stack_ffffffffffffff08 & 0xffffffff00000000;
  iVar8 = (**(code **)(*DAT_1802a6c68 + 0x70))(DAT_1802a6c68,DAT_1802a6ca0,0,4,uVar15,&local_e8);
  if (-1 < iVar8) {
    FUN_1802079d0(local_e8,puVar17,lVar9);
    (**(code **)(*plVar7 + 0x78))(plVar7,DAT_1802a6ca0,0);
    uVar3 = *(undefined8 *)(local_d0 + 4);
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    iVar8 = (**(code **)(*DAT_1802a6c68 + 0x70))(DAT_1802a6c68,DAT_1802a6c98,0,4,uVar15 & 0xffffffff00000000,local_98);
    if (-1 < iVar8) {
      puVar6 = (undefined8 *)CONCAT44(local_98[1],local_98[0]);
      *puVar6 = uVar3;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      (**(code **)(*DAT_1802a6c68 + 0x78))(DAT_1802a6c68,DAT_1802a6c98,0);
    }
    local_98[0] = 0x18;
    local_9c = 0;
    (**(code **)(*plVar7 + 0x58))(plVar7,DAT_1802a6c80,0,0);
    (**(code **)(*plVar7 + 0x48))(plVar7,DAT_1802a6c88,0,0);
    (**(code **)(*plVar7 + 0x88))(plVar7,DAT_1802a6c90);
    (**(code **)(*plVar7 + 0xc0))(plVar7,4);
    (**(code **)(*plVar7 + 0x90))(plVar7,0,1,&DAT_1802a6ca0,local_98,&local_9c);
    (**(code **)(*plVar7 + 0x68))();
  }
LAB_18016f30b:
  if (puVar17 != (undefined4 *)0x0) {
    uVar15 = (longlong)puVar14 - (longlong)puVar17;
    puVar14 = puVar17;
    if (0xfff < uVar15) {
      puVar14 = *(undefined4 **)(puVar17 + -2);
      if (0x1f < (ulonglong)((longlong)puVar17 + (-8 - (longlong)puVar14))) {
LAB_18016f366:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar15 = uVar15 + 0x27;
    }
    thunk_FUN_1801f42e0(puVar14,uVar15);
  }
  return;
}



void Unwind_18016f3a0(undefined8 param_1,longlong param_2)

{
  FUN_18016f400(param_2 + 0x60);
  return;
}



void FUN_18016f400(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;

  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_18016f470(char *param_1,undefined8 *param_2,float param_3,float param_4,longlong param_5,float param_6,
                  undefined4 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ushort local_b8;
  ushort uStack_b6;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  ulonglong local_a0;

  local_a0 = DAT_1802a0400 ^ (ulonglong)auStack_108;
  if (((*param_1 == '\x01') && (param_2[2] != 0)) && (0.001 < *(float *)(param_5 + 0xc))) {
    plVar6 = (longlong *)FUN_180171370(param_7);
    fVar16 = param_6;
    if (plVar6 != (longlong *)0x0) {
      local_b8 = 0;
      uStack_b6 = 0;
      fStack_b4 = 0.0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      local_a8 = 0;
      (**(code **)(*plVar6 + 0x40))(plVar6);
      fVar16 = ((float)uStack_b6 * param_6) / (float)local_b8;
    }
    uVar14 = param_2[2];
    if (uVar14 != 0) {
      fVar16 = (float)FUN_1801e1b20(param_4 + fVar16);
      uVar7 = 0;
      do {
        puVar9 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar9 = (undefined8 *)*param_2;
        }
        bVar4 = *(byte *)((longlong)puVar9 + uVar7);
        uVar12 = (uint)bVar4;
        if ((char)bVar4 < '\0') {
          uVar13 = (uint)bVar4;
          if ((bVar4 & 0xe0) == 0xc0) {
            uVar13 = 0x1f;
LAB_18016f6b0:
            bVar10 = 0;
            uVar13 = uVar13 & uVar12;
          }
          else {
            if ((uVar13 & 0xfffffff0) == 0xe0) {
              uVar13 = 0xf;
              goto LAB_18016f6b0;
            }
            uVar12 = 0xfffd;
            if ((uVar13 & 0xfffffff8) != 0xf0) goto LAB_18016f5b3;
            bVar10 = 1;
            uVar13 = uVar13 & 7;
          }
          if (uVar7 + 1 < uVar14) {
            bVar5 = *(byte *)((longlong)puVar9 + uVar7 + 1);
            uVar11 = 0xfffd;
            uVar1 = uVar7 + 1;
            uVar12 = uVar11;
            if ((bVar5 & 0xc0) == 0x80) {
              uVar13 = bVar5 & 0x3f | uVar13 << 6;
              uVar1 = uVar7 + 2;
              uVar12 = uVar13;
              if ((((bVar4 & 0xe0) != 0xc0) && (uVar1 < uVar14)) &&
                 (uVar12 = uVar11, (*(byte *)((longlong)puVar9 + uVar1) & 0xffffffc0) == 0x80)) {
                uVar13 = *(byte *)((longlong)puVar9 + uVar1) & 0x3f | uVar13 << 6;
                uVar2 = uVar7 + 3;
                uVar1 = uVar2;
                uVar12 = uVar13;
                if (((bool)(bVar10 & uVar2 < uVar14)) &&
                   (uVar12 = uVar11, (*(byte *)((longlong)puVar9 + uVar2) & 0xffffffc0) == 0x80)) {
                  uVar1 = uVar7 + 4;
                  uVar12 = *(byte *)((longlong)puVar9 + uVar2) & 0x3f | uVar13 << 6;
                }
              }
            }
          }
          else {
            uVar1 = uVar7 + 1;
            uVar12 = uVar13;
          }
        }
        else {
LAB_18016f5b3:
          uVar1 = uVar7 + 1;
        }
        uVar7 = uVar1;
        local_e8 = param_7;
        puVar8 = (undefined4 *)FUN_18016f810(DAT_1802a6c60,DAT_1802a6c68,uVar12,param_6);
        if (puVar8 != (undefined4 *)0x0) {
          if ((*(char *)(puVar8 + 9) == '\0') && (fVar3 = (float)puVar8[4], 0.0 < fVar3)) {
            fVar15 = (float)FUN_1801e1b20((float)puVar8[6] + param_3);
            fStack_b4 = (float)puVar8[7] + fVar16;
            fStack_b0 = fVar15 + fVar3;
            fStack_ac = (float)puVar8[5] + fStack_b4;
            local_b8 = SUB42(fVar15,0);
            uStack_b6 = (ushort)((uint)fVar15 >> 0x10);
            local_c8 = *puVar8;
            uStack_c4 = puVar8[1];
            uStack_c0 = puVar8[2];
            uStack_bc = puVar8[3];
            local_d0 = DAT_1802a6be0;
            local_d8 = 0;
            local_e0 = 0x40000000;
            local_e8 = 0;
            FUN_18016ea50(&local_b8,param_5,&local_c8,0);
          }
          param_3 = param_3 + (float)puVar8[8];
        }
        uVar14 = param_2[2];
      } while (uVar7 < uVar14);
    }
  }
  if (DAT_1802a0400 == (local_a0 ^ (ulonglong)auStack_108)) {
    return;
  }
}



longlong FUN_18016f810(longlong *param_1,longlong *param_2,uint param_3,float param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 (*pauVar18) [16];
  float *pfVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  uint uVar31;
  undefined1 auVar30 [16];
  float fVar32;
  undefined8 in_stack_fffffffffffffe48;
  undefined4 uVar34;
  undefined8 uVar33;
  ulonglong local_188;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  undefined1 local_128 [16];
  longlong local_118;
  int local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined2 *local_e8;
  uint *local_e0;
  undefined8 *puStack_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b0 [2];
  longlong *local_a8;
  undefined2 local_9a;
  ulonglong local_98;
  undefined8 local_90;
  ulonglong uVar17;

  uVar31 = (uint)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  local_90 = 0xfffffffffffffffe;
  uVar13 = (longlong)param_5 << 0x14 | (ulonglong)param_3 << 0x18;
  uVar24 = (uint)(param_4 * 4.0);
  local_98 = uVar24 & 0xfffff | uVar13;
  lVar26 = (((ulonglong)(longlong)param_5 >> 0x38 ^
            (uVar13 >> 0x30 & 0xff ^
            (uVar13 >> 0x28 & 0xff ^
            (uVar13 >> 0x20 & 0xff ^
            (uVar13 >> 0x18 & 0xff ^
            (((ulonglong)(uVar24 & 0xfffff) | uVar13 & 0xffffffff) >> 0x10 & 0xff ^
            ((ulonglong)(uVar24 >> 8 & 0xff) ^ ((ulonglong)(uVar24 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
            0x100000001b3 & DAT_1802a6c28) * 0x10;
  lVar16 = *(longlong *)(DAT_1802a6c10 + 8 + lVar26);
  if (lVar16 != DAT_1802a6c00) {
    if (local_98 != *(ulonglong *)(lVar16 + 0x10)) {
      do {
        if (lVar16 == *(longlong *)(DAT_1802a6c10 + lVar26)) goto LAB_18016f97d;
        lVar16 = *(longlong *)(lVar16 + 8);
      } while (local_98 != *(ulonglong *)(lVar16 + 0x10));
    }
    if (lVar16 != DAT_1802a6c00) {
      return lVar16 + 0x18;
    }
  }
LAB_18016f97d:
  local_b0[0] = param_3;
  if (DAT_1802a6bd8 == (longlong *)0x0) {
    local_e0 = (uint *)0x0;
    local_d0 = local_d0 & 0xffffffff00000000;
    local_f8 = (longlong *)0x40000000400;
    uStack_f0 = 0x100000001;
    local_e8 = (undefined2 *)0x10000003d;
    puStack_d8 = (undefined8 *)0x8;
    iVar10 = (**(code **)(*param_1 + 0x28))(param_1,&local_f8,0,&DAT_1802a6bd8);
    if (iVar10 < 0) {
      return 0;
    }
    iVar10 = (**(code **)(*param_1 + 0x38))(param_1,DAT_1802a6bd8,0,&DAT_1802a6be0);
    if (iVar10 < 0) {
      if (DAT_1802a6bd8 == (longlong *)0x0) {
        return 0;
      }
      (**(code **)(*DAT_1802a6bd8 + 0x10))();
      DAT_1802a6bd8 = (longlong *)0x0;
      return 0;
    }
    _DAT_1802a6be8 = 0x100000001;
    DAT_1802a6bf0 = 0;
    plVar14 = (longlong *)FUN_180171370(param_5);
  }
  else {
    plVar14 = (longlong *)FUN_180171370(param_5);
  }
  if (plVar14 == (longlong *)0x0) {
    return 0;
  }
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  (**(code **)(*plVar14 + 0x40))(plVar14,&local_168);
  uVar24 = (uint)(ushort)local_168;
  local_9a = 0;
  (**(code **)(*plVar14 + 0x58))(plVar14,local_b0,1,&local_9a);
  uStack_178 = 0;
  uStack_174 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_17c = 0;
  lVar16 = (ulonglong)uVar31 << 0x20;
  (**(code **)(*plVar14 + 0x50))(plVar14,&local_9a,1,&local_188,lVar16);
  uVar34 = (undefined4)((ulonglong)lVar16 >> 0x20);
  uVar13 = local_188 >> 0x20;
  local_b0[1] = 0;
  local_150 = 0;
  local_d0 = 0;
  uStack_f0 = CONCAT44(1,param_4);
  local_e0 = local_b0 + 1;
  puStack_d8 = &local_150;
  local_a8 = (longlong *)0x0;
  local_f8 = plVar14;
  local_e8 = &local_9a;
  if (DAT_1802a6b90 == (longlong *)0x0) {
    DWriteCreateFactory(0,&DAT_18021e740,&DAT_1802a6b90);
  }
  fVar32 = (param_4 / (float)uVar24) * (float)uVar13;
  uVar33 = CONCAT44(uVar34,5);
  iVar10 = (**(code **)(*DAT_1802a6b90 + 0xb8))(DAT_1802a6b90,&local_f8,0x3f800000,0,uVar33,0,0,0,&local_a8);
  uVar34 = (undefined4)((ulonglong)uVar33 >> 0x20);
  if (iVar10 < 0) {
    puVar15 = (undefined8 *)FUN_180171a10(&local_98);
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    *(float *)(puVar15 + 4) = fVar32;
    *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
LAB_18016fc46:
    lVar16 = FUN_180171a10(&local_98);
    return lVar16;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  uVar11 = (**(code **)(*local_a8 + 0x18))(local_a8,1,&local_c8);
  auVar30._0_4_ = (int)uStack_c0 - (int)local_c8;
  uVar31 = (int)((ulonglong)uStack_c0 >> 0x20) - (int)((ulonglong)local_c8 >> 0x20);
  auVar29._0_4_ = -(uint)(0 < (int)auVar30._0_4_);
  auVar29._4_4_ = -(uint)(0 < (int)auVar30._0_4_);
  auVar29._8_4_ = -(uint)(0 < (int)uVar31);
  auVar29._12_4_ = -(uint)(0 < (int)uVar31);
  iVar10 = movmskpd(uVar11,auVar29);
  if (iVar10 != 3) {
    (**(code **)(*local_a8 + 0x10))();
    puVar15 = (undefined8 *)FUN_180171a10(&local_98);
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    *(float *)(puVar15 + 4) = fVar32;
    *(undefined1 *)((longlong)puVar15 + 0x24) = 1;
    goto LAB_18016fc46;
  }
  local_130 = (ulonglong)uVar31;
  uVar13 = local_130 * auVar30._0_4_;
  lVar16 = uVar13 * 3;
  if (lVar16 < 0) {
    FUN_1800807e0();
  }
  if (uVar13 < 0x556) {
    uVar28 = FUN_1801d61c8(lVar16);
  }
  else {
    lVar26 = FUN_1801d61c8(lVar16 + 0x27);
    uVar28 = lVar26 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar28 - 8) = lVar26;
  }
  local_148 = uVar28;
  local_138 = uVar28 + lVar16;
  FUN_180207610(uVar28,0,lVar16);
  local_140 = uVar28 + lVar16;
  iVar10 = (**(code **)(*local_a8 + 0x20))(local_a8,1,&local_c8,uVar28,CONCAT44(uVar34,(int)lVar16));
  if (iVar10 < 0) {
    (**(code **)(*local_a8 + 0x10))();
    pauVar18 = (undefined1 (*) [16])FUN_180171a10(&local_98);
    pauVar18[1] = (undefined1  [16])0x0;
    *pauVar18 = (undefined1  [16])0x0;
    *(float *)pauVar18[2] = fVar32;
    pauVar18[2][4] = 0;
    lVar16 = FUN_180171a10(&local_98);
  }
  else {
    (**(code **)(*local_a8 + 0x10))();
    local_128 = (undefined1  [16])0x0;
    local_118 = 0;
    if (uVar13 < 0x1000) {
      uVar25 = FUN_1801d61c8(uVar13);
    }
    else {
      lVar16 = FUN_1801d61c8(uVar13 + 0x27);
      uVar25 = lVar16 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar25 - 8) = lVar16;
    }
    local_128._0_8_ = uVar25;
    uVar27 = 0;
    local_118 = uVar25 + uVar13;
    FUN_180207610(uVar25,0);
    local_128._8_8_ = uVar25 + uVar13;
    uVar24 = (uint)local_130;
    uVar12 = uVar24 * auVar30._0_4_;
    uVar17 = (ulonglong)uVar12;
    if (4 < uVar12) {
      if ((uVar25 < (uVar17 * 3 + uVar28) - 1) && (uVar28 + 1 < uVar25 + uVar17)) {
        uVar27 = 0;
      }
      else {
        if (uVar12 < 0x11) {
          uVar21 = 0;
        }
        else {
          uVar22 = 0x10;
          if ((uVar12 & 0xf) != 0) {
            uVar22 = (ulonglong)(uVar12 & 0xf);
          }
          uVar27 = uVar17 - uVar22;
          puVar23 = (undefined1 *)(uVar28 + 0x2e);
          uVar21 = 0;
          do {
            uVar1 = *puVar23;
            uVar2 = puVar23[-3];
            uVar3 = puVar23[-6];
            uVar4 = puVar23[-9];
            uVar5 = puVar23[-0xc];
            uVar6 = puVar23[-0xf];
            uVar7 = puVar23[-0x12];
            uVar8 = puVar23[-0x15];
            *(undefined8 *)(uVar25 + uVar21) =
                 CONCAT44(CONCAT22(CONCAT11(puVar23[-0x18],puVar23[-0x1b]),CONCAT11(puVar23[-0x1e],puVar23[-0x21])),
                          CONCAT22(CONCAT11(puVar23[-0x24],puVar23[-0x27]),CONCAT11(puVar23[-0x2a],puVar23[-0x2d])));
            ((undefined8 *)(uVar25 + uVar21))[1] =
                 CONCAT44(CONCAT22(CONCAT11(uVar1,uVar2),CONCAT11(uVar3,uVar4)),
                          CONCAT22(CONCAT11(uVar5,uVar6),CONCAT11(uVar7,uVar8)));
            uVar21 = uVar21 + 0x10;
            puVar23 = puVar23 + 0x30;
          } while (uVar27 != uVar21);
          uVar21 = uVar27;
          if ((uint)uVar22 < 5) goto LAB_18016ff99;
        }
        uVar27 = 4;
        if ((uVar12 & 3) != 0) {
          uVar27 = (ulonglong)(uVar12 & 3);
        }
        uVar27 = uVar17 - uVar27;
        puVar23 = (undefined1 *)(uVar21 * 3 + uVar28 + 10);
        do {
          *(uint *)(uVar25 + uVar21) = CONCAT13(*puVar23,CONCAT12(puVar23[-3],CONCAT11(puVar23[-6],puVar23[-9])));
          uVar21 = uVar21 + 4;
          puVar23 = puVar23 + 0xc;
        } while (uVar27 != uVar21);
      }
    }
LAB_18016ff99:
    uVar12 = uVar12 - (int)uVar27 & 3;
    uVar22 = uVar27;
    if (uVar12 != 0) {
      lVar16 = 0;
      do {
        *(undefined1 *)(uVar25 + uVar22) = *(undefined1 *)(uVar28 + uVar27 * 3 + 1 + lVar16);
        uVar22 = uVar22 + 1;
        lVar16 = lVar16 + 3;
      } while ((ulonglong)uVar12 * 3 != lVar16);
    }
    if (uVar27 - uVar17 < 0xfffffffffffffffd) {
      puVar23 = (undefined1 *)(uVar22 * 3 + uVar28 + 10);
      do {
        *(undefined1 *)(uVar25 + uVar22) = puVar23[-9];
        *(undefined1 *)(uVar25 + 1 + uVar22) = puVar23[-6];
        *(undefined1 *)(uVar25 + 2 + uVar22) = puVar23[-3];
        *(undefined1 *)(uVar25 + 3 + uVar22) = *puVar23;
        uVar22 = uVar22 + 4;
        puVar23 = puVar23 + 0xc;
      } while (uVar17 != uVar22);
    }
    iVar10 = DAT_1802a6bec;
    iVar20 = DAT_1802a6be8;
    if ((auVar30._0_4_ + DAT_1802a6be8) - 0x400 < 0xfffffbff) {
      iVar10 = DAT_1802a6bec + DAT_1802a6bf0 + 1;
      _DAT_1802a6be8 = CONCAT44(iVar10,1);
      DAT_1802a6bf0 = 0;
      iVar20 = 1;
    }
    if ((iVar10 + uVar24) - 0x400 < 0xfffffbff) {
      pauVar18 = (undefined1 (*) [16])FUN_180171a10(&local_98);
      pauVar18[1] = (undefined1  [16])0x0;
      *pauVar18 = (undefined1  [16])0x0;
      *(float *)pauVar18[2] = fVar32;
      pauVar18[2][4] = 1;
      lVar16 = FUN_180171a10(&local_98);
    }
    else {
      local_100 = iVar10 + uVar24;
      local_108 = 0;
      local_104 = iVar20 + auVar30._0_4_;
      local_fc = 1;
      local_110 = iVar20;
      local_10c = iVar10;
      (**(code **)(*param_2 + 0x180))(param_2,DAT_1802a6bd8,0,&local_110,uVar25,auVar30._0_4_,0);
      uVar12 = DAT_1802a6be8;
      uVar9 = DAT_1802a6bec;
      iVar10 = (int)local_c8;
      uVar28 = (ulonglong)local_c8 >> 0x20;
      _DAT_1802a6be8 = CONCAT44(DAT_1802a6bec,DAT_1802a6be8 + auVar30._0_4_ + 1);
      if (uVar24 < DAT_1802a6bf0) {
        uVar24 = DAT_1802a6bf0;
      }
      DAT_1802a6bf0 = uVar24;
      pfVar19 = (float *)FUN_180171a10(&local_98);
      *pfVar19 = (((float)(uVar12 >> 0x10 | 0x53000000) - 5.497642e+11) + (float)(uVar12 & 0xffff | 0x4b000000)) *
                 0.0009765625;
      pfVar19[1] = (((float)(uVar9 >> 0x10 | 0x53000000) - 5.497642e+11) + (float)(uVar9 & 0xffff | 0x4b000000)) *
                   0.0009765625;
      pfVar19[2] = (((float)(uVar12 + auVar30._0_4_ >> 0x10 | 0x53000000) - 5.497642e+11) +
                   (float)(uVar12 + auVar30._0_4_ & 0xffff | 0x4b000000)) * 0.0009765625;
      pfVar19[3] = (((float)(uVar9 + uVar31 >> 0x10 | 0x53000000) - 5.497642e+11) +
                   (float)(uVar9 + uVar31 & 0xffff | 0x4b000000)) * 0.0009765625;
      auVar30._4_4_ = 0;
      auVar30._8_4_ = uVar31;
      auVar30._12_4_ = 0;
      *(ulonglong *)(pfVar19 + 4) =
           CONCAT44((float)(SUB168(auVar30 | _DAT_18021dd80,8) - DAT_18021dd80._8_8_),
                    (float)(SUB168(auVar30 | _DAT_18021dd80,0) - (double)DAT_18021dd80));
      *(ulonglong *)(pfVar19 + 6) = CONCAT44((float)(int)uVar28,(float)iVar10);
      pfVar19[8] = fVar32;
      *(undefined1 *)(pfVar19 + 9) = 0;
      lVar16 = FUN_180171a10(&local_98);
    }
    if (0xfff < uVar13) {
      if (0x1f < (uVar25 - 8) - *(ulonglong *)(uVar25 - 8)) goto LAB_180170267;
      uVar13 = uVar13 + 0x27;
      uVar25 = *(ulonglong *)(uVar25 - 8);
    }
    thunk_FUN_1801f42e0(uVar25,uVar13);
    uVar28 = local_148;
    if (local_148 == 0) {
      return lVar16;
    }
  }
  uVar13 = local_138 - uVar28;
  if (0xfff < uVar13) {
    if (0x1f < (uVar28 - 8) - *(ulonglong *)(uVar28 - 8)) {
LAB_180170267:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar13 = uVar13 + 0x27;
    uVar28 = *(ulonglong *)(uVar28 - 8);
  }
  thunk_FUN_1801f42e0(uVar28,uVar13);
  return lVar16;
}


