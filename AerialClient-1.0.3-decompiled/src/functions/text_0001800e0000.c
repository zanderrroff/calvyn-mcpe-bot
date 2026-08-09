#include "../include/aerialclient_types.h"


longlong FUN_1800e0130(longlong param_1)

{
  ulonglong uVar1;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong *local_60;

  local_80 = 0x12f5b612d1d3ea70;
  local_88 = 0x264f89d7f1358e69;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_80 ^ local_88;
        local_88 = local_88 ^ 0xa75c1b1043696eee;
        if ((longlong)uVar1 < -0x961ad1f17676347) break;
        if (uVar1 == 0xf69e52e0e8989cb9) {
          *local_70 = 0;
          local_70[1] = 0;
          local_70[2] = 0;
          local_70[3] = local_78;
          local_70[4] = 0;
          local_70[5] = 0;
          local_70[6] = 0;
          local_70[7] = local_78;
          local_68 = *local_60;
          *local_60 = local_68 + 0x40;
          local_80 = 0x878ca18f9c7023d7;
          local_88 = 0x2a66be266c840e8c;
        }
        else {
          local_80 = local_80 ^ 0xa75c1b1043696eee;
          if (uVar1 == 0x34ba3fc520e66419) {
            local_78 = 0xf;
            local_60 = (longlong *)(param_1 + 8);
            local_70 = *(undefined8 **)(param_1 + 8);
            local_80 = 0x95ce4454bf3de39d;
            if (local_70 == *(undefined8 **)(param_1 + 0x10)) {
              local_80 = 0xd012c31c72ab2029;
            }
            local_88 = 0x635016b457a57f24;
          }
        }
      }
      if (uVar1 != 0xb342d5a8250e5f0d) break;
      local_68 = FUN_1800e8860(param_1,local_70);
      local_80 = 0xa5fdf495f5291617;
      local_88 = 0x817eb3c05dd3b4c;
    }
    local_80 = local_80 ^ 0xa75c1b1043696eee;
  } while (uVar1 != 0xadea1fa9f0f42d5b);
  return local_68;
}



undefined8 * FUN_1800e0310(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  size_t local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 *local_88;
  ulonglong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;

  local_d0 = 0xfb919a1e816b3bab;
  local_d8 = 0x8f35dc82c853b854;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_d0 ^ 0xb9e758d8a7ab1f0c;
          uVar1 = local_d0 ^ local_d8;
          local_d8 = local_d8 ^ 0xb9e758d8a7ab1f0c;
          local_d0 = uVar3;
          if (-0x2f61b7529683d7e < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x2858aa513fc2bfd1) {
            if (uVar1 == 0x95b950c343bc640a) {
              local_68 = param_3[3];
              local_60 = (undefined8 *)*param_3;
              *param_1 = 0;
              param_1[1] = 0;
              local_c0 = local_a0 + local_a8;
              local_90 = local_c8;
              local_d0 = 0xbf55ccd56aca5c15;
              if (local_c8 < local_c0) {
                local_d0 = 0x3b8bfa19e8afc5e4;
              }
              local_d8 = 0xa0b30353c7dea066;
              local_88 = param_1;
            }
            else if (uVar1 == 0x9b38f94a2f716582) {
              local_d0 = 0xa484a1aa8b1843c7;
              if ((longlong)local_c0 < 0) {
                local_d0 = 0xa8b1f035a80fd902;
              }
              local_d8 = 0x7323f4044b2503e8;
              local_98 = local_b0;
            }
          }
          else if (uVar1 == 0xd7a755aec03d402f) {
            uVar1 = local_c0 | local_c8;
            local_98 = 0x16;
            if (0x16 < uVar1) {
              local_98 = uVar1;
            }
            local_d0 = 0xea613fcac3cc50ec;
            if (0xffe < uVar1) {
              local_d0 = 0xcec223ef2d5e7fc2;
            }
            local_d8 = 0x155027dece74a528;
            local_70 = local_98;
          }
          else if (uVar1 == 0xdb920431e32adaea) {
            local_80 = local_98;
            lVar2 = FUN_1801d61c8(local_98 + 0x28);
            local_78 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
            local_78[-1] = lVar2;
            local_d0 = 0xcdff51fea60d1ff9;
            local_d8 = 0xb3accb908c779bec;
          }
        }
        if ((longlong)uVar1 < 0x74a4469c493883ff) break;
        if (uVar1 == 0x7e539a6e2a7a8415) {
          *param_1 = local_78;
          local_d0 = 0x6fa00fdbd9681fbb;
          local_d8 = 0x7046c05d747ce3c8;
          local_90 = local_80;
          local_88 = local_78;
        }
        else if (uVar1 == 0x74a4469c493883ff) {
          local_c8 = 0xf;
          local_b0 = 0x7fffffffffffffff;
          local_a8 = strlen(param_2);
          local_a0 = param_3[2];
          local_d0 = 0x637424718f786d73;
          if (0x7fffffffffffffffU - local_a0 < local_a8) {
            local_d0 = 0xbc490381a53cbfa;
          }
          local_d8 = 0xf6cd74b2ccc40979;
        }
      }
      if (uVar1 != 0xff3118140db8f5c4) break;
      local_78 = (undefined8 *)FUN_1801d61c8(local_70 + 1);
      local_d0 = 0xbbd4e9af5a16ed83;
      local_d8 = 0xc58773c1706c6996;
      local_80 = local_70;
    }
    if (uVar1 == 0x1fe6cf86ad14fc73) break;
    if (uVar1 == 0xfd09e48ad697c283) {
      FUN_180002ac0();
    }
  }
  if (local_c8 < local_68) {
    param_3 = local_60;
  }
  param_1[2] = local_c0;
  param_1[3] = local_90;
  FUN_1802079d0(local_88,param_2,local_a8);
  FUN_1802079d0(local_a8 + (longlong)local_88,param_3,local_a0);
  *(undefined1 *)((longlong)local_88 + local_c0) = 0;
  return param_1;
}



void FUN_1800e07c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  longlong local_88;
  longlong local_80;
  float *local_78;
  float local_6c;
  float *local_68;
  float *local_60;
  undefined8 local_58;
  float local_50;
  undefined1 local_4c [4];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_d8;
  local_b0 = 0x1698fb82463475c7;
  local_b8 = 0x7cfc9bb6662b1bee;
  local_88 = param_2;
  local_80 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_b0 ^ 0xff1100a37f2cd1e3;
            uVar1 = local_b0 ^ local_b8;
            local_b8 = local_b8 ^ 0xff1100a37f2cd1e3;
            local_b0 = uVar3;
            if ((longlong)uVar1 < 0x25489062210e656f) break;
            if ((longlong)uVar1 < 0x606b9de3b34a45ca) {
              if (uVar1 == 0x25489062210e656f) {
                *local_68 = local_8c;
                local_b0 = 0xd3e142b0c420a8f0;
                local_b8 = 0x60a6cf049fd097c6;
              }
              else if (uVar1 == 0x5951da8bb6bda8ac) {
                local_b0 = 0xa3d437d20a5182c5;
                if (local_9c != local_98) {
                  local_b0 = 0x477f1d2e880ba8d4;
                }
                if (NAN(local_9c) || NAN(local_98)) {
                  local_b0 = 0x477f1d2e880ba8d4;
                }
                local_b8 = 0x4e1217e4d5aa78f5;
              }
            }
            else if (uVar1 == 0x606b9de3b34a45ca) {
              local_8c = local_6c + 360.0;
              local_b0 = 0xf75ad1ac9237af1c;
              local_b8 = 0xd21241ceb339ca73;
            }
            else if (uVar1 == 0x60bb97b6aef9ff80) {
              local_94 = (float)FUN_1801ebe20((local_98 - *local_78) / local_a0,0x40c00000);
              local_b0 = 0xdedfdd6a720b9263;
              local_b8 = 0xfe19f50e676db7e0;
            }
            else if (uVar1 == 0x6a646034201f6e29) {
              local_a4 = 0.0;
              *(longlong *)(param_1 + 0x198) = local_88;
              local_68 = (float *)(param_1 + 0x1a4);
              local_60 = (float *)(local_88 + 0x90);
              local_58 = *(undefined8 *)(local_88 + 0x90);
              local_78 = (float *)(local_88 + 0x98);
              local_50 = *(float *)(local_88 + 0x98);
              pfVar2 = (float *)FUN_1801d8830(&local_58,local_4c,0);
              local_9c = *pfVar2;
              local_58 = *(undefined8 *)local_60;
              local_50 = *local_78;
              pfVar2 = (float *)FUN_1801d88a0(&local_58,local_4c);
              local_a0 = local_9c - *pfVar2;
              *(float *)(param_1 + 0x1ac) = local_9c;
              fVar4 = local_a4;
              if (local_a4 < local_9c) {
                fVar4 = local_a0 / local_9c;
              }
              *(float *)(local_80 + 0x1a8) = fVar4;
              local_b0 = 0xf6dbdb522da86d43;
              if (1e-06 < local_a0) {
                local_b0 = 0x3fcd4ffe30488d97;
              }
              local_8c = local_a4;
              local_b8 = 0xd3934b300ca6082c;
            }
          }
          if ((longlong)uVar1 < 0x96d0aca5da1d021) break;
          if (uVar1 == 0x96d0aca5da1d021) {
            local_94 = (local_90 - local_98) / local_a0 + 4.0;
            local_b0 = 0xd589274c0941d9e8;
            local_b8 = 0xf54f0f281c27fc6b;
          }
          else if (uVar1 == 0x20c6286415662583) {
            local_6c = local_94 * 60.0;
            *local_68 = local_6c;
            local_b0 = 0x1f487d5712b4ab1e;
            if (local_6c < local_a4) {
              local_b0 = 0xcc646d00fa0ed1e2;
            }
            local_b8 = 0xac0ff0e349449428;
          }
        }
        if (uVar1 != 0xec5e04ce3cee85bb) break;
        local_90 = *local_60;
        local_98 = *(float *)(local_88 + 0x94);
        local_b0 = 0x28a9432b73f5dd7f;
        if (local_9c == local_90) {
          local_b0 = 0x11430e166bb18a53;
        }
        local_b8 = 0x71f899a0c54875d3;
      }
      if (uVar1 != 0xedc62036dffbfa30) break;
      local_94 = (*local_78 - local_90) / local_a0 + 2.0;
      local_b0 = 0x21d1900491a37b17;
      local_b8 = 0x117b86084c55e94;
    }
  } while (uVar1 != 0xb3478db45bf03f36);
  *(undefined4 *)(local_80 + 0x1b0) = *(undefined4 *)(local_88 + 0x9c);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_d8)) {
  }
  return;
}



void FUN_1800e0d80(undefined8 *param_1,float *param_2,longlong param_3,longlong param_4,byte param_5)

{
  float fVar1;
  undefined4 uVar2;
  uintptr_t uVar3;
  longlong lVar4;
  uintptr_t uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar14;
  float local_108 [4];
  float local_f8 [4];
  undefined8 local_e8;
  float local_e0 [2];
  longlong local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  ulonglong local_b8;
  longlong local_b0;
  uintptr_t local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  uint local_94;
  undefined8 local_90;

  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  local_90 = 0xfffffffffffffffe;
  local_a0 = 0x3f800000;
  local_9c = 0;
  local_98 = 5.0;
  local_94 = 0;
  local_b0 = 1;
  local_a8 = 0;
  local_c4 = (float)0x3e6147ae;
  if (param_5 != 0) {
    local_c4 = (float)0x3eb33333;
  }
  local_d0 = 0.0;
  fStack_cc = 0.0;
  local_c8 = 0.0;
  FUN_180172640(param_2,&local_d0,*(float *)*param_1 * 5.0);
  local_c4 = (float)0x3d8f5c29;
  if (param_5 != 0) {
    local_c4 = (float)0x3e4ccccd;
  }
  local_d0 = 1.0;
  fStack_cc = 1.0;
  local_c8 = (float)local_a0;
  FUN_1801728e0(param_2,&local_d0,*(float *)*param_1,local_98 * *(float *)*param_1);
  uVar5 = local_a8;
  uVar3 = *(uintptr_t *)(param_3 + 0x10);
  bVar10 = uVar3 == local_a8;
  fVar12 = param_2[1];
  fVar13 = *(float *)*param_1 * -14.0 + (param_2[2] - *param_2);
  fVar1 = param_2[3];
  local_d8 = param_3;
  fVar11 = (float)FUN_180173310(*(undefined4 *)param_1[1]);
  if ((param_5 & bVar10) == 0) {
    uVar2 = *(undefined4 *)param_1[1];
    lVar9 = 0x70;
    lVar7 = local_d8;
    if (uVar3 == uVar5) {
      lVar9 = 0x80;
      lVar7 = param_4;
    }
    lVar4 = param_1[2];
    local_108[0] = *param_2;
    local_108[1] = param_2[1];
    local_108[2] = param_2[2];
    local_108[3] = param_2[3];
    uVar6 = (uint)local_b0;
    local_e0[(uint)local_a8 & 1] = *(float *)*param_1;
    local_e0[uVar6 & 1] = (fVar1 - fVar12) - fVar11;
    local_108[(uint)local_b0 & 3] = fVar12;
    local_e8 = CONCAT44(local_e0[1] * 0.5 + local_108[1],local_e0[0] * 7.0 + local_108[0]);
    FUN_180173430(&local_d0,lVar7,fVar13,uVar2,CONCAT44(uVar14,local_94));
    FUN_180173000(&local_d0,&local_e8,lVar9 + lVar4,uVar2,local_94,local_94);
    if (0xf < local_b8) {
      lVar9 = CONCAT44(fStack_cc,local_d0);
      uVar8 = local_b0 + local_b8;
      lVar7 = lVar9;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(lVar9 + -8);
        if (0x1f < (lVar9 - lVar7) - 8U) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_94,local_a8);
        }
        uVar8 = local_b8 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar7,uVar8);
    }
  }
  if (param_5 != 0) {
    FUN_1800eb440();
    fVar12 = (float)FUN_1801ebe20();
    if (fVar12 < 0.55) {
      fVar12 = *(float *)*param_1;
      fVar1 = *param_2;
      fVar11 = (float)FUN_180173360(local_d8);
      if (fVar11 <= fVar13) {
        fVar13 = fVar11;
      }
      fVar13 = fVar13 + fVar12 * 7.0 + fVar1;
      lVar7 = param_1[2];
      fVar12 = *(float *)*param_1;
      local_d0 = fVar13 + fVar12;
      local_f8[0] = param_2[1];
      fVar1 = param_2[3];
      local_f8[1] = local_f8[0];
      local_f8[2] = local_f8[0];
      local_f8[3] = local_f8[0];
      local_f8[(uint)local_b0 & 3] = fVar13;
      fStack_cc = fVar12 * 4.0 + local_f8[0];
      local_c8 = fVar12 * 2.5 + local_f8[1];
      local_c4 = fVar12 * -4.0 + fVar1;
      FUN_180172640(&local_d0,lVar7 + 0x90,local_9c);
    }
  }
  return;
}



void Unwind_1800e1180(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



void FUN_1800e11f0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong *local_48;

  local_80 = 0x57cde6128644af3d;
  local_88 = 0xc07018407511a57;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_80 ^ 0xfd6a8440639dd13;
          uVar1 = local_80 ^ local_88;
          local_88 = local_88 ^ 0xfd6a8440639dd13;
          local_80 = uVar2;
          if (0x65fb6401d6010a4 < (longlong)uVar1) break;
          if (uVar1 == 0x83de08564f3a6f76) {
            *local_48 = local_58;
            *(undefined1 *)((longlong)local_68 + local_58) = 0;
            local_80 = 0x8ee6b8855e72c0c1;
            local_88 = 0xd0042263635e7846;
          }
          else if (uVar1 == 0x8764373b953dead1) {
            local_60 = local_50 - 1;
            local_80 = 0xcc9c5df664a3d4fa;
            if (local_60 == local_78) {
              local_80 = 0x491de3e036f9ab29;
            }
            local_88 = 0xcac3ebb679c3c45f;
            local_58 = local_78;
          }
          else if (uVar1 == 0x9f0e33f0de80177c) {
            local_58 = local_60;
            local_80 = 0x43600192c30b34c5;
            if (local_70 < local_60) {
              local_80 = 0xd0a2f28b68567f81;
            }
            local_88 = 0xc0be09c48c315bb3;
          }
        }
        if (0x5ee29ae63d2cb886 < (longlong)uVar1) break;
        if (uVar1 == 0x65fb6401d6010a5) {
          local_50 = local_60;
          local_80 = 0x738d7cc89f313ebe;
          if (*(char *)((longlong)local_68 + local_60) < -0x40) {
            local_80 = 0x6be77803d48cc313;
          }
          local_88 = 0xec834f3841b129c2;
        }
        else if (uVar1 == 0x5bcae7968115b56a) {
          local_78 = 0;
          local_48 = param_1 + 2;
          local_70 = param_1[2];
          local_80 = 0x7ff41781f8c30600;
          if (local_70 == 0) {
            local_80 = 0x4e8fb4410bff4751;
          }
          local_88 = 0x106d2ea736d3ffd6;
        }
        else if (uVar1 == 0x101cfb4fe4672432) {
          FUN_1800615a0();
          return;
        }
      }
      if (uVar1 != 0x6f993926ce10f9d6) break;
      local_68 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        local_68 = (undefined8 *)*param_1;
      }
      local_80 = 0x181f48495a9c58d1;
      local_88 = 0x9f7b7f72cfa1b200;
      local_50 = local_70;
    }
  } while (uVar1 != 0x5ee29ae63d2cb887);
  return;
}



void FUN_1800e1510(longlong param_1,undefined1 *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 local_f1;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  ulonglong local_98;
  char *local_90;
  undefined8 *local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_e8 = 0xa8e2dbfecfe8bc75;
  local_f0 = 0x28d574925eb9d3d4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_e8 ^ 0xcf0eef7c91d96744;
              uVar2 = local_e8 ^ local_f0;
              local_f0 = local_f0 ^ 0xcf0eef7c91d96744;
              local_e8 = uVar3;
              if ((longlong)uVar2 < -0x20a6ae5ea2440fb) break;
              if ((longlong)uVar2 < 0x643e38666078c0c7) {
                if ((longlong)uVar2 < 0x38b98abccde1a1a6) {
                  if (uVar2 == 0xfdf5951a15dbbf05) {
                    *local_60 = local_98;
                    puVar4 = local_e0;
                    if (local_c8 < local_68) {
                      puVar4 = (undefined8 *)*local_e0;
                    }
                    FUN_1802079d0(local_a0 + (longlong)puVar4,local_a8,local_d8);
                    *(undefined1 *)((longlong)puVar4 + local_98) = local_f1;
                    local_e8 = 0xabaee552fd7a891e;
                    local_f0 = 0xd5de998a46a7e94d;
                  }
                  else if (uVar2 == 0xdeb30f0076cf77) {
                    local_48 = local_b0;
                    local_e0 = (undefined8 *)(local_b8 + param_1);
                    *param_2 = 1;
                    local_e8 = 0x55e8015bf83cd62d;
                    if (*(int *)(param_2 + 4) == 8) {
                      local_e8 = 0x5aacafb443912b69;
                    }
                    local_f0 = 0x960353d8860cede9;
                  }
                }
                else if (uVar2 == 0x38b98abccde1a1a6) {
                  FUN_180066dd0(local_e0,local_d8,0xf8f4ef76daeed1c2,local_a8,local_d8);
                  local_e8 = 0x57ed8c4d6c69ecbe;
                  local_f0 = 0x299df095d7b48ced;
                }
                else if (uVar2 == 0x4ca9a9df787d2bc4) {
                  *local_58 = local_c0;
                  *(undefined1 *)((longlong)local_88 + local_c0) = local_f1;
                  local_e8 = 0x601ca4224dc3f831;
                  local_f0 = 0x1513cad1bc684c95;
                }
                else if (uVar2 == 0x61a2fcf32591dcc6) {
                  local_c0 = local_78 - 1;
                  local_e8 = 0xc1e946ee1ca65273;
                  if (local_c0 == local_d0) {
                    local_e8 = 0x7758b79f9bff21e6;
                  }
                  local_f0 = 0x3bf11e40e3820a22;
                }
              }
              else if ((longlong)uVar2 < 0x750f6ef3f1abb4a4) {
                if (uVar2 == 0x643e38666078c0c7) {
                  local_88 = local_e0;
                  if (local_c8 < (ulonglong)local_e0[3]) {
                    local_88 = (undefined8 *)*local_e0;
                  }
                  local_e8 = 0x38bc5c73a99df8d3;
                  local_f0 = 0x591ea0808c0c2415;
                  local_78 = local_80;
                }
                else if (uVar2 == 0x7146cd7a94a2d0fe) {
                  local_e8 = 0x35ae559920c92ae7;
                  if (*(char *)(param_1 + 0xe4) != '\0') {
                    local_e8 = 0xf22d1bf8088d3310;
                  }
                  local_b8 = 0xe8;
                  local_b0 = 0x20;
                  local_f0 = 0xf2f3a8f708fbfc67;
                }
              }
              else if (uVar2 == 0x750f6ef3f1abb4a4) {
                local_e8 = 0xf523b9dde44bfc8;
                if (*local_90 != '\0') {
                  local_e8 = 0x62518736fa78cbd8;
                }
                local_f0 = 0xbfc3d2485ff29e32;
              }
              else if (uVar2 == 0x7aefd8dfdd164257) {
                local_a8 = local_50;
                if (local_c8 < *(ulonglong *)(param_2 + 0x20)) {
                  local_a8 = (undefined8 *)*local_50;
                }
                local_68 = local_e0[3];
                local_e8 = 0x4f306f75fa8a10fd;
                if (local_68 - local_a0 < local_d8) {
                  local_e8 = 0x8a7c70d322b00e5e;
                }
                local_f0 = 0xb2c5fa6fef51aff8;
              }
              else if (uVar2 == 0x7e707cd8bbdd6053) {
                local_e8 = 0xb962c62e00f2df0a;
                if (*local_90 != '\0') {
                  local_e8 = 0xd4617a8524ceab1a;
                }
                local_f0 = 0x9f32ffb8144fef0;
              }
            }
            if (-0x38a20291d7cd2981 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x4f6e162a7e49de06) {
              if (uVar2 == 0x8037af6c91516fa1) {
                local_f1 = 0;
                local_c8 = 0xf;
                local_d0 = 0;
                local_e8 = 0x5f4752b835aed3a3;
                if (*(char *)(param_1 + 0x210) != '\0') {
                  local_e8 = 0x1722541b6ef6239a;
                }
                local_f0 = 0xefd6bb6db418f259;
              }
              else if (uVar2 == 0x9241a0f368d362b8) {
                local_e8 = 0x76c08789ee734f91;
                if (local_80 < local_c0) {
                  local_e8 = 0xc763718a4b3403aa;
                }
                local_f0 = 0x3a692e56960e6455;
              }
            }
            else if (uVar2 == 0xbc77a3136536f1d8) {
              local_60 = local_e0 + 2;
              local_a0 = local_e0[2];
              local_98 = local_a0 + local_d8;
              local_e8 = 0xe97da4b4df7e70e0;
              if (local_48 < local_98) {
                local_e8 = 0x230395be83de134d;
              }
              local_f0 = 0x93927c6b026832b7;
            }
            else if (uVar2 == 0xc3eb52837e303bc4) {
              local_d8 = *(ulonglong *)(param_2 + 0x18);
              local_e8 = 0xa7e0c49949e3a4ea;
              if (local_d8 == local_d0) {
                local_e8 = 0xab068e5fad6374c8;
              }
              local_f0 = 0x1b97678a2cd55532;
              local_50 = (undefined8 *)(param_2 + 8);
            }
            else if (uVar2 == 0xb091e9d581b621fa) {
              return;
            }
          }
          if (-0x70b108925112e3e < (longlong)uVar2) break;
          if (uVar2 == 0xc75dfd6e2832d680) {
            local_e8 = 0xe364162189889be2;
            if (*(longlong *)(param_1 + 0x168) == 0) {
              local_e8 = 0x532b4cfb0848756f;
            }
            local_b8 = 0x178;
            local_b0 = 0xf0;
            local_f0 = 0xe3baa52e89fe5495;
          }
          else if (uVar2 == 0xccaffc6cc59dc680) {
            local_58 = local_e0 + 2;
            local_80 = local_e0[2];
            local_e8 = 0x174cf81ab0fa5f62;
            if (local_80 == local_d0) {
              local_e8 = 0x67dae8f21292b01;
            }
            local_f0 = 0x7372c07cd0829fa5;
          }
          else if (uVar2 == 0xdd92557ea58a55ea) {
            *(undefined4 *)(param_1 + 0x134) = 0;
            local_e8 = 0xde5fa8d81b690492;
            local_f0 = 0x6ece410d9adf2568;
          }
        }
        if (uVar2 != 0xf8f4ef76daeed1c3) break;
        local_90 = (char *)(param_1 + 0x108);
        local_e8 = 0x75ac7473a5ef85d7;
        if (*(char *)(param_1 + 0x108) != '\0') {
          local_e8 = 0x4340a06313b9a5e;
        }
        local_b8 = 0x110;
        local_b0 = 0x18;
        local_f0 = 0x4eab909314d5529;
      }
      if (uVar2 != 0xfa1858aeff245851) break;
      local_e8 = 0xcf933491abd685f2;
      if (*(char *)((longlong)local_88 + local_c0) < -0x40) {
        local_e8 = 0x3c706891e6943b8c;
      }
      local_f0 = 0x5dd29462c305e74a;
      local_78 = local_c0;
    }
  } while (uVar2 != 0xfd0a5fdcdd3a67ff);
  FUN_1800615a0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 * FUN_1800e1e90(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;

  local_80 = 0x558439ddb9cb431b;
  local_88 = 0x633150d347abf172;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_80 ^ local_88;
        local_88 = local_88 ^ 0xb4a7b1fbb7c3b40f;
        if (0x363210dc671e25d0 < (longlong)uVar1) break;
        if (uVar1 == 0xc3e5d0ca2b832d52) {
          *local_50 = local_60 + local_78;
          puVar2 = param_1;
          if (local_70 < local_48) {
            puVar2 = (undefined8 *)*param_1;
          }
          FUN_1802079d0(local_60 + (longlong)puVar2,local_68,local_78);
          *(undefined1 *)((longlong)puVar2 + local_60 + local_78) = 0;
          local_80 = 0x5378cc95b74ff58a;
          local_88 = 0x654adc49d051d05b;
          local_58 = param_1;
        }
        else {
          local_80 = local_80 ^ 0xb4a7b1fbb7c3b40f;
          if (uVar1 == 0x9c94e738d4d5775) {
            local_58 = (undefined8 *)FUN_180066dd0(param_1);
            local_80 = 0xfe2c975f3ad2ed3b;
            local_88 = 0xc81e87835dccc8ea;
          }
        }
      }
      if (uVar1 != 0x36b5690efe60b269) break;
      local_70 = 0xf;
      local_78 = param_2[2];
      local_68 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        local_68 = (undefined8 *)*param_2;
      }
      local_50 = param_1 + 2;
      local_60 = param_1[2];
      local_48 = param_1[3];
      local_80 = 0x9ae0f94c85e0a14d;
      if (local_48 - local_60 < local_78) {
        local_80 = 0x50cc67f5232edb6a;
      }
      local_88 = 0x59052986ae638c1f;
    }
    local_80 = local_80 ^ 0xb4a7b1fbb7c3b40f;
  } while (uVar1 != 0x363210dc671e25d1);
  return local_58;
}



void FUN_1800e20b0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [16];
  longlong local_90;
  ulonglong local_80;
  int local_78;
  int local_74;
  longlong local_70;
  float local_68;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_68 = 0.0;
  local_61 = 0;
  local_78 = 0;
  local_80 = 0xf;
  local_62 = 1;
  local_70 = 0;
  local_74 = 1;
  if (*(char *)(param_1 + 0x210) != '\x01') {
    return;
  }
  if (param_2[8] == '\0') {
    return;
  }
  cVar4 = FUN_180101b40();
  iVar1 = local_78;
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *param_2 = local_62;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < 0xd) {
      if (iVar1 == 8) {
        if (cVar4 != '\0' || *(longlong *)(param_1 + 0x120) == local_70) {
          return;
        }
        FUN_1800e11f0(param_1 + 0x110);
        *(float *)(param_1 + 0x134) = local_68;
        return;
      }
    }
    else if (iVar1 < 0x1b) {
      if (iVar1 == 0xd) {
        *(undefined1 *)(param_1 + 0x108) = local_61;
LAB_1800e27c0:
        lVar6 = FUN_180100330();
        *(undefined1 *)(lVar6 + 0x358) = local_61;
        return;
      }
    }
    else if (iVar1 == 0x1b) {
      *(undefined1 *)(param_1 + 0x108) = local_61;
      *(longlong *)(param_1 + 0x120) = local_70;
      if (local_80 < *(ulonglong *)(param_1 + 0x128)) {
        puVar7 = *(undefined1 **)(param_1 + 0x110);
      }
      else {
        puVar7 = (undefined1 *)(param_1 + 0x110);
      }
      *puVar7 = local_61;
      *(float *)(param_1 + 0x134) = local_68;
      goto LAB_1800e27c0;
    }
    if (cVar4 != '\0') {
      return;
    }
    if (0x17 < *(ulonglong *)(param_1 + 0x120)) {
      return;
    }
    FUN_180101b50(local_a0);
    if (local_90 != local_70) {
      FUN_1800e1e90(param_1 + 0x110,local_a0);
      *(float *)(param_1 + 0x134) = local_68;
    }
  }
  else if (*(char *)(param_1 + 0xe4) == '\x01') {
    *param_2 = local_62;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < 0xd) {
      if (iVar1 == 8) {
        if (cVar4 != '\0' || *(longlong *)(param_1 + 0xf8) == local_70) {
          return;
        }
        param_1 = param_1 + 0xe8;
LAB_1800e2262:
        FUN_1800e11f0(param_1);
        return;
      }
    }
    else if (iVar1 < 0x1b) {
      if (iVar1 == 0xd) {
        uVar5 = FUN_18004e770();
        puVar7 = (undefined1 *)(param_1 + 0xe8);
        cVar4 = FUN_180057640(uVar5,puVar7);
        if (cVar4 == '\0') {
          puVar8 = &DAT_1802a3be0;
          if (*(longlong *)(param_1 + 0xf8) == local_70) {
            puVar8 = &DAT_1802a3bc8;
          }
          FUN_1800eb180(&DAT_1802a3bc8,&DAT_180275db2,0x1d,0x13,&DAT_1802a3bdc);
          FUN_1800eb180(&DAT_1802a3be0,&DAT_180275e01,0x1c,0x13,&DAT_1802a3bf4);
          FUN_180057290(local_e0,puVar8);
          FUN_180156680(local_e0,2);
          return;
        }
        FUN_1800eb180(&DAT_1802a3bb8,&DAT_180275d81,0x10,9,&DAT_1802a3bc4);
        FUN_1800e0310(local_100,&DAT_1802a3bb8,uVar5);
        FUN_180156680(local_100,local_74);
        *(longlong *)(param_1 + 0xf8) = local_70;
        if (local_80 < *(ulonglong *)(param_1 + 0x100)) {
          puVar7 = *(undefined1 **)(param_1 + 0xe8);
        }
        *puVar7 = local_61;
        *(undefined1 *)(param_1 + 0xe4) = local_61;
        goto LAB_1800e27c0;
      }
    }
    else if (iVar1 == 0x1b) {
      *(undefined1 *)(param_1 + 0xe4) = local_61;
      *(longlong *)(param_1 + 0xf8) = local_70;
      if (local_80 < *(ulonglong *)(param_1 + 0x100)) {
        puVar7 = *(undefined1 **)(param_1 + 0xe8);
      }
      else {
        puVar7 = (undefined1 *)(param_1 + 0xe8);
      }
      *puVar7 = local_61;
      goto LAB_1800e27c0;
    }
    if (cVar4 != '\0' || 0x1f < *(ulonglong *)(param_1 + 0xf8)) {
      return;
    }
    FUN_180101b50(local_a0);
    FUN_1800e1e90(param_1 + 0xe8,local_a0);
  }
  else {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      if (*(longlong *)(param_1 + 0x160) == 0) {
        lVar6 = 0x130;
        if (*(int *)(param_1 + 0xe0) == local_74) {
          lVar6 = 0x13c;
        }
        fVar10 = (float)FUN_180172570();
        fVar11 = (float)FUN_180173310(fVar10 * 12.5);
        fVar11 = fVar10 * 16.0 + fVar11;
        if (fVar11 <= fVar10 * 30.0) {
          fVar11 = fVar10 * 30.0;
        }
        iVar1 = *(int *)(param_2 + 4);
        if (iVar1 < 0x22) {
          if (iVar1 == 0x21) {
            fVar10 = *(float *)(param_1 + 4 + lVar6) - fVar11 * 6.0;
            fVar11 = *(float *)(param_1 + 8 + lVar6);
            uVar9 = -(uint)(fVar11 < fVar10);
            *(uint *)(param_1 + 4 + lVar6) =
                 uVar9 & (uint)fVar11 |
                 ~uVar9 & ((uint)local_68 & -(uint)(fVar10 < local_68) | ~-(uint)(fVar10 < local_68) & (uint)fVar10);
          }
          else {
            if (iVar1 != 0x1b) {
              return;
            }
            FUN_1800c6100(param_1);
          }
        }
        else if (iVar1 < 0x24) {
          if (iVar1 != 0x22) {
            return;
          }
          fVar10 = fVar11 * 6.0 + *(float *)(param_1 + 4 + lVar6);
          fVar11 = *(float *)(param_1 + 8 + lVar6);
          uVar9 = -(uint)(fVar11 < fVar10);
          *(uint *)(param_1 + 4 + lVar6) =
               uVar9 & (uint)fVar11 |
               ~uVar9 & ((uint)local_68 & -(uint)(fVar10 < local_68) | ~-(uint)(fVar10 < local_68) & (uint)fVar10);
        }
        else {
          if (iVar1 != 0x24) {
            return;
          }
          *(float *)(param_1 + 4 + lVar6) = local_68;
        }
      }
      else {
        iVar1 = *(int *)(param_2 + 4);
        if (*(int *)(param_2 + 4) == 0x1b) {
          iVar1 = local_78;
        }
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x68) + 0x90) = iVar1;
        *(undefined8 *)(param_1 + 0x160) = 0;
        lVar6 = FUN_180100330();
        *(undefined1 *)(lVar6 + 0x358) = local_61;
      }
      *param_2 = local_62;
      return;
    }
    *param_2 = local_62;
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 < 0xd) {
      if (iVar2 < 9) {
        if (iVar2 == 8) {
          if (cVar4 != '\0') {
            return;
          }
          param_1 = param_1 + 0x178;
          goto LAB_1800e2262;
        }
      }
      else if (iVar2 == 9) {
LAB_1800e24b8:
        lVar6 = *(longlong *)(param_1 + 0x168);
        uVar9 = *(uint *)(param_1 + 0x170);
        iVar2 = *(int *)(lVar6 + 8);
        iVar3 = *(int *)(param_1 + 0x174);
        FUN_1800c63c0(param_1);
        if (iVar2 != 7) {
          return;
        }
        if (iVar3 != iVar1) {
          return;
        }
        if ((int)uVar9 < 0) {
          return;
        }
        if ((int)((ulonglong)(*(longlong *)(lVar6 + 0x98) - *(longlong *)(lVar6 + 0x90)) >> 6) <= (int)uVar9) {
          return;
        }
        FUN_1800d4120(local_c0,*(longlong *)(lVar6 + 0x90) + (ulonglong)uVar9 * 0x40 + 0x20);
        FUN_1800dfcf0(param_1,lVar6,uVar9,local_74,local_c0);
        return;
      }
    }
    else if (iVar2 < 0x1b) {
      if (iVar2 == 0xd) goto LAB_1800e24b8;
    }
    else if (iVar2 == 0x1b) {
      *(undefined8 *)(param_1 + 0x168) = 0;
      goto LAB_1800e27c0;
    }
    if (cVar4 != '\0' || 0xef < *(ulonglong *)(param_1 + 0x188)) {
      return;
    }
    FUN_180101b50(local_a0);
    FUN_1800e1e90(param_1 + 0x178,local_a0);
  }
  FUN_180001ef0(local_a0);
  return;
}



void Unwind_1800e2810(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x88);
  return;
}



void Unwind_1800e2850(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x88);
  return;
}



void Unwind_1800e2890(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x88);
  return;
}



void FUN_1800e28d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 *local_60;

  local_b0 = 0x9c23ad19ba5f05;
  local_b8 = 0xad9b5c10590e112;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar4 = local_b0 ^ 0xaf2dfacbedc8fd94;
          uVar3 = local_b0 ^ local_b8;
          local_b8 = local_b8 ^ 0xaf2dfacbedc8fd94;
          local_b0 = uVar4;
          if ((longlong)uVar3 < 0x1ca2876a2a4830b1) break;
          if ((longlong)uVar3 < 0x765f2307d68a2658) {
            if (uVar3 == 0x1ca2876a2a4830b1) {
              local_90 = local_68 + 0x27;
              local_b0 = 0xcc60af0bd22bd58;
              local_b8 = 0x7a9929f76ba89b00;
              local_88 = local_78;
            }
            else if (uVar3 == 0x6fce674a22d6ce3a) {
              plVar1 = (longlong *)*local_98;
              thunk_FUN_1801f42e0(local_98,local_a8);
              local_b0 = 0x9f2656dd248c5d9f;
              if (plVar1 == (longlong *)0x0) {
                local_b0 = 0x7051ed37fe8952c4;
              }
              local_b8 = 0xf0e83197065a93a5;
              local_98 = plVar1;
            }
            else if (uVar3 == 0x68970b820a94d919) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          else if (uVar3 == 0x765f2307d68a2658) {
            thunk_FUN_1801f42e0(local_88,local_90);
            *local_80 = 0;
            local_80[1] = 0;
            local_80[2] = 0;
            local_b0 = 0x392dd7824e7d763f;
            local_b8 = 0xb6b455fcd886dfd5;
          }
          else if (uVar3 == 0x76b125f2fe2ca2f1) {
            local_70 = local_a0;
            local_90 = *(longlong *)(param_1 + 0x28) - local_a0;
            local_b0 = 0x5c91d56f0d78e331;
            if (0xfff < local_90) {
              local_b0 = 0xd3365468708203a3;
            }
            local_b8 = 0x2acef668dbf2c569;
            local_88 = local_a0;
            local_68 = local_90;
          }
        }
        if ((longlong)uVar3 < -0x6075dff548f3936) break;
        if (uVar3 == 0xf9f8a200ab70c6ca) {
          local_78 = *(longlong *)(local_a0 + -8);
          local_b0 = 0xef6b5f50888a808b;
          if ((local_70 - local_78) - 8U < local_a8) {
            local_b0 = 0x9b5ed3b8a8566923;
          }
          local_b8 = 0x87fc54d2821e5992;
        }
        else if (uVar3 == 0xa45966c1c2abe17) {
          local_a8 = 0x20;
          local_80 = (undefined8 *)(param_1 + 0x18);
          local_a0 = *(longlong *)(param_1 + 0x18);
          local_b0 = 0x2a6108f8e86d5146;
          if (local_a0 == 0) {
            local_b0 = 0xd349af7480ba5a5d;
          }
          local_b8 = 0x5cd02d0a1641f3b7;
        }
      }
      if (uVar3 != 0x8f99827e96fba9ea) break;
      local_60 = (undefined8 *)(param_1 + 8);
      puVar2 = *(undefined8 **)(param_1 + 8);
      *(undefined8 *)puVar2[1] = 0;
      local_98 = (longlong *)*puVar2;
      local_b0 = 0xd1103ce58b519232;
      if (local_98 == (longlong *)0x0) {
        local_b0 = 0x3e67870f51549d69;
      }
      local_b8 = 0xbede5bafa9875c08;
    }
  } while (uVar3 != 0x80b9dca0f8d3c161);
  thunk_FUN_1801f42e0(*local_60,local_a8);
  return;
}



void FUN_1800e2d20(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 *local_60;

  local_b0 = 0x6ba02701d2043971;
  local_b8 = 0xf4fd850031f2de7f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar4 = local_b0 ^ 0x43afc99ae4789db6;
          uVar3 = local_b0 ^ local_b8;
          local_b8 = local_b8 ^ 0x43afc99ae4789db6;
          local_b0 = uVar4;
          if (0xb5656459acbf8e7 < (longlong)uVar3) break;
          if ((longlong)uVar3 < -0x3e125215555b1053) {
            if (uVar3 == 0x9f5da201e3f6e70e) {
              local_a8 = 0x20;
              local_80 = (undefined8 *)(param_1 + 0x18);
              local_a0 = *(longlong *)(param_1 + 0x18);
              local_b0 = 0xcff730c7d375dc99;
              if (local_a0 == 0) {
                local_b0 = 0x6a5e14ca72e8e044;
              }
              local_b8 = 0xe1a9d2d79d13334;
            }
            else if (uVar3 == 0xb514b20a0708f3f8) {
              local_98 = local_68 + 0x27;
              local_b0 = 0x58623d4854e0eb34;
              local_b8 = 0x51541ef5007c0ce0;
              local_90 = local_78;
            }
            else if (uVar3 == 0x91a2443ce358b88a) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          else if (uVar3 == 0xc1edadeaaaa4efad) {
            local_70 = local_a0;
            local_98 = *(longlong *)(param_1 + 0x28) - local_a0;
            local_b0 = 0x6dcba84ba93a7314;
            if (0xfff < local_98) {
              local_b0 = 0x6fabddb3676d6c28;
            }
            local_b8 = 0x64fd8bf6fda694c0;
            local_90 = local_a0;
            local_68 = local_98;
          }
          else if (uVar3 == 0x93623bd549ce7d4) {
            thunk_FUN_1801f42e0(local_90,local_98);
            *local_80 = 0;
            local_80[1] = 0;
            local_80[2] = 0;
            local_b0 = 0x86ab8a48158a973f;
            local_b8 = 0xe2ef03af1eb3444f;
          }
        }
        if ((longlong)uVar3 < 0x47f125194d28a9cd) break;
        if (uVar3 == 0x47f125194d28a9cd) {
          plVar1 = (longlong *)*local_88;
          thunk_FUN_1801f42e0(local_88,local_a8);
          local_b0 = 0x157af8aa1204682;
          if (plVar1 == (longlong *)0x0) {
            local_b0 = 0x5e1f85d302a1f824;
          }
          local_b8 = 0x46a68a93ec08ef4f;
          local_88 = plVar1;
        }
        else if (uVar3 == 0x644489e70b39d370) {
          local_60 = (undefined8 *)(param_1 + 8);
          puVar2 = *(undefined8 **)(param_1 + 8);
          *(undefined8 *)puVar2[1] = 0;
          local_88 = (longlong *)*puVar2;
          local_b0 = 0xc4240ff869c1f66d;
          if (local_88 == (longlong *)0x0) {
            local_b0 = 0x9b6c25a1ca4048cb;
          }
          local_b8 = 0x83d52ae124e95fa0;
        }
      }
      if (uVar3 != 0xb5656459acbf8e8) break;
      local_78 = *(longlong *)(local_a0 + -8);
      local_b0 = 0xd4e83885162d907;
      if ((local_70 - local_78) - 8U < local_a8) {
        local_b0 = 0x29f875beb5329275;
      }
      local_b8 = 0x9cecc7b4b23a618d;
    }
  } while (uVar3 != 0x18b90f40eea9176b);
  thunk_FUN_1801f42e0(*local_60,local_a8);
  return;
}



undefined4 * FUN_1800e3170(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;

  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_1801d61c8(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 2) = lVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  plVar3 = (longlong *)FUN_1801d61c8(0x80);
  lVar1 = *(longlong *)(param_1 + 6);
  uVar5 = *(longlong *)(param_1 + 10) - lVar1;
  if (uVar5 != 0) {
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(longlong **)(param_1 + 6) = plVar3;
  *(longlong **)(param_1 + 8) = plVar3 + 0x10;
  *(longlong **)(param_1 + 10) = plVar3 + 0x10;
  *plVar3 = lVar2;
  plVar3[1] = lVar2;
  plVar3[2] = lVar2;
  plVar3[3] = lVar2;
  plVar3[4] = lVar2;
  plVar3[5] = lVar2;
  plVar3[6] = lVar2;
  plVar3[7] = lVar2;
  plVar3[8] = lVar2;
  plVar3[9] = lVar2;
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar2;
  plVar3[0xe] = lVar2;
  plVar3[0xf] = lVar2;
  return param_1;
}



void Unwind_1800e3330(undefined8 param_1,longlong param_2)

{
  FUN_1800e4070(*(undefined8 *)(param_2 + 0x30));
  FUN_1800e4370(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_1800e3370(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong local_1b0;
  ulonglong local_1a8;
  byte local_1a0;
  uintptr_t local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong local_178;
  longlong local_170;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  undefined8 *local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 *local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  ulonglong *local_88;
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];

  local_1a8 = 0xf85030d6c00c8f9f;
  local_1b0 = 0xa0ede5931a42a8ef;
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_1a8 ^ 0xc18931f1c83a1c00;
              uVar2 = local_1a8 ^ local_1b0;
              local_1b0 = local_1b0 ^ 0xc18931f1c83a1c00;
              local_1a8 = uVar3;
              if ((longlong)uVar2 < 0x1dd45dddfb7c7e67) break;
              if ((longlong)uVar2 < 0x5f8389e8771c3270) {
                if ((longlong)uVar2 < 0x3dacddce92893062) {
                  if (uVar2 == 0x1dd45dddfb7c7e67) {
                    local_a0 = *(ulonglong *)(local_118 - 8);
                    local_1a8 = 0x45d90619122cd6bf;
                    if ((local_80 + local_178) - local_a0 < 0x20) {
                      local_1a8 = 0x7e340df77400eef3;
                    }
                    local_1b0 = 0x8ab561352579454b;
                  }
                  else if (uVar2 == 0x2bd90aef9c497ef5) {
                    lVar4 = local_108 << (local_1a0 & 0x3f);
                    puVar1 = (undefined8 *)((longlong)local_190 + lVar4);
                    *puVar1 = local_78._0_8_;
                    puVar1[1] = local_78._8_8_;
                    puVar1 = (undefined8 *)((longlong)local_190 + lVar4 + 0x10);
                    *puVar1 = local_78._0_8_;
                    puVar1[1] = local_78._8_8_;
                    local_108 = local_108 + local_150;
                    local_1a8 = 0xc91b41e6415d9205;
                    if (local_108 == local_138) {
                      local_1a8 = 0x4b6aed09e63ea562;
                    }
                    local_1b0 = 0xe2c24b09dd14ecf0;
                  }
                  else if (uVar2 == 0x2c2658b13310957a) {
                    local_c8 = (undefined8 *)FUN_1801d61c8(local_188);
                    local_1a8 = 0x8f8ea00ca2a819b6;
                    local_1b0 = 0xda94f0cfb30a056e;
                  }
                }
                else if ((longlong)uVar2 < 0x551a50c311a21cd8) {
                  if (uVar2 == 0x4a4efc6a90a94617) {
                    local_1a8 = 0x8bc38be25e298444;
                    local_1b0 = 0xe01158b957ac5a5;
                    local_d0 = local_e8;
                  }
                  else if (uVar2 == 0x3dacddce92893062) goto LAB_1800e401f;
                }
                else if (uVar2 == 0x551a50c311a21cd8) {
                  local_180 = local_c8;
                  local_88 = param_1 + 2;
                  local_118 = *param_1;
                  local_110 = param_1[2] - local_118;
                  local_1a8 = 0xfc745f064a740371;
                  if (local_110 == local_198) {
                    local_1a8 = 0x278669654c2aaada;
                  }
                  local_1b0 = 0x7805e08d3b3698aa;
                  local_80 = local_118;
                }
                else if (uVar2 == 0x58bdd545da4e2770) {
                  local_148 = 0x3ffffffffffffffc;
                  local_150 = 4;
                  local_170 = 0x27;
                  local_158 = 1;
                  local_160 = 0x18;
                  local_178 = -8;
                  local_1a0 = 3;
                  local_198 = 0;
                  local_c0 = param_1 + 1;
                  local_140 = (undefined8 *)param_1[1];
                  local_190 = (undefined8 *)*param_1;
                  local_1a8 = 0xfa1a2c19937ad2b4;
                  if ((ulonglong)((longlong)local_140 - (longlong)local_190 >> 3) < param_2) {
                    local_1a8 = 0xffdca13fec090500;
                  }
                  local_1b0 = 0x80d2d23696362d0f;
                  local_b8 = local_140;
                  local_b0 = local_190;
                }
              }
              else if ((longlong)uVar2 < 0x6644119502359f34) {
                if (uVar2 == 0x5f8389e8771c3270) {
                  *param_1 = (ulonglong)local_180;
                  local_90 = (undefined8 *)((longlong)local_180 + local_188);
                  *local_c0 = (ulonglong)local_90;
                  *local_88 = (ulonglong)local_90;
                  local_120 = ((ulonglong)(local_188 + local_178) >> (local_1a0 & 0x3f)) + local_158;
                  local_1a8 = 0x5b520793041ef1a4;
                  if ((ulonglong)(local_188 + local_178) < local_160) {
                    local_1a8 = 0xfc411d2fc868d5de;
                  }
                  local_1b0 = 0xe0b97ed513a653d6;
                  local_f0 = local_180;
                }
                else if (uVar2 == 0x640354a763cc7529) {
                  lVar4 = FUN_1801d61c8(local_188 + local_170);
                  local_c8 = (undefined8 *)(local_170 + lVar4 & 0xffffffffffffffe0);
                  local_c8[-1] = lVar4;
                  local_1a8 = 0xa72158d8105feb04;
                  local_1b0 = 0xf23b081b01fdf7dc;
                }
                else if (uVar2 == 0x64072e8ad47f18a4) {
                  local_1a8 = 0xb2731f6b698fb39b;
                  if (local_120 == local_130) {
                    local_1a8 = 0x46f8e47b62e4e561;
                  }
                  local_1b0 = 0xae8b7c91b2413593;
                  local_f0 = local_98;
                }
              }
              else if (uVar2 == 0x6644119502359f34) {
                local_138 = local_128 & local_148;
                local_a8 = (undefined8 *)((local_138 << (local_1a0 & 0x3f)) + (longlong)local_190);
                local_78._8_4_ = (int)param_3;
                local_78._0_8_ = param_3;
                local_78._12_4_ = uVar5;
                local_1a8 = 0xe2c19b2ba589ec4e;
                local_1b0 = 0xc91891c439c092bb;
                local_108 = local_198;
              }
              else if (uVar2 == 0x7ac8fe2f054cffbb) {
                local_1a8 = 0xe418d3002dfd72ec;
                if (local_190 == local_140) {
                  local_1a8 = 0x791f12bef1cd13a;
                }
                local_1b0 = 0xefe269c13fb901c8;
              }
              else if (uVar2 == 0x7f0e73097a3f280f) {
                local_1a8 = 0xf8226070416be93a;
                if (0x1fffffffffffffff < param_2) {
                  local_1a8 = 0x374f936dc7f3944b;
                }
                local_1b0 = 0xae34ea3557aa429;
              }
            }
            if (-0x1ae31c61646a5a35 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x475ca65687e00d67) {
              if (uVar2 == 0x8471bf8b71429bdb) {
                local_1a8 = 0xf84a50570ac91067;
                if (0xfff < local_110) {
                  local_1a8 = 0x16a876cfbb559aed;
                }
                local_1b0 = 0xb7c2b124029e48a;
                local_e0 = local_110;
                local_d8 = local_118;
              }
              else if (uVar2 == 0x85c29e69cb5341e1) {
                *local_d0 = param_3;
                local_d0 = local_d0 + 1;
                local_1a8 = 0x42a54e4451f4fe74;
                if (local_d0 == local_140) {
                  local_1a8 = 0x2f1448c74a026f67;
                }
                local_1b0 = 0xc767d02d9aa7bf95;
              }
              else if (uVar2 == 0xa9a8a6003b2a4992) {
                local_1a8 = 0xcdeed4f822f5cf08;
                if (local_128 == local_138) {
                  local_1a8 = 0x6fd3b07862f959ed;
                }
                local_1b0 = 0x87a02892b25c891f;
                local_e8 = local_a8;
              }
            }
            else if ((longlong)uVar2 < -0x309398d3c8aa6c0c) {
              if (uVar2 == 0xb8a359a9781ff299) {
                *local_100 = param_3;
                local_100 = local_100 + 1;
                local_1a8 = 0xdb4c83276c3be13b;
                if (local_100 == local_90) {
                  local_1a8 = 0x8b9c4264c481c350;
                }
                local_1b0 = 0x63efda8e142413a2;
              }
              else if (uVar2 == 0xbbeb794617b8a272) {
                local_130 = local_120 & local_148;
                local_98 = (undefined8 *)((local_130 << (local_1a0 & 0x3f)) + (longlong)local_180);
                local_68._8_4_ = (int)param_3;
                local_68._0_8_ = param_3;
                local_68._12_4_ = uVar5;
                local_1a8 = 0xb4aa357de98b95de;
                local_1b0 = 0x67f935c815e6d53b;
                local_f8 = local_198;
              }
            }
            else if (uVar2 == 0xd35300b5fc6d40e5) {
              lVar4 = local_f8 << (local_1a0 & 0x3f);
              puVar1 = (undefined8 *)((longlong)local_180 + lVar4);
              *puVar1 = local_68._0_8_;
              puVar1[1] = local_68._8_8_;
              puVar1 = (undefined8 *)((longlong)local_180 + lVar4 + 0x10);
              *puVar1 = local_68._0_8_;
              puVar1[1] = local_68._8_8_;
              local_f8 = local_f8 + local_150;
              local_1a8 = 0x789963b9b8a4ab1e;
              if (local_f8 == local_130) {
                local_1a8 = 0xcfcd4d8690b6f35f;
              }
              local_1b0 = 0xabca630c44c9ebfb;
            }
            else if (uVar2 == 0xcf6c672c375593f4) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_198);
            }
          }
          if (-0xb7e933dae865449 < (longlong)uVar2) break;
          if ((longlong)uVar2 < -0xd3ed12cebeeb2ed) {
            if (uVar2 == 0xe51ce39e9b95a5cc) {
              local_1a8 = 0x1e921bd2ef1954d5;
              if (param_2 < 0x1ffffffffffffffc) {
                local_1a8 = 0x6318995fa191256d;
              }
              local_1b0 = 0x71bcdf8c25d5044;
            }
            else if (uVar2 == 0xe87398ead0a5d0f2) {
              return;
            }
          }
          else if (uVar2 == 0xf2c12ed314114d13) {
            local_188 = param_2 << (local_1a0 & 0x3f);
            local_1a8 = 0xa544c90a3afb9b74;
            if (0x1ff < param_2) {
              local_1a8 = 0x6c7e7225927eabc2;
            }
            local_1b0 = 0x896291bb09eb0e0e;
          }
          else if (uVar2 == 0xf3367b454ae0f4ed) {
            thunk_FUN_1801f42e0(local_d8,local_e0);
            local_1a8 = 0xac2c4ee06b6de3f5;
            local_1b0 = 0xf3afc7081c71d185;
          }
        }
        if (0x1989d62a2d440490 < (longlong)uVar2) break;
        if (uVar2 == 0xf4816cc25179abb8) {
          local_e0 = local_110 + local_170;
          local_d8 = local_a0;
          local_1a8 = 0x2aa5c15b695076ac;
          local_1b0 = 0xd993ba1e23b08241;
        }
        else if (uVar2 == 0xbfabac112447324) {
          uVar2 = (longlong)local_b8 + (local_178 - (longlong)local_b0);
          local_128 = (uVar2 >> (local_1a0 & 0x3f)) + local_158;
          local_1a8 = 0xbb1ae4531997d548;
          if (uVar2 < local_160) {
            local_1a8 = 0x971009ac8b0b0c6b;
          }
          local_1b0 = 0xdd5ef5c61ba24a7c;
          local_e8 = local_190;
        }
      }
      if (uVar2 != 0x1cf863fadbce8608) break;
      local_1a8 = 0x33e03297d02a799;
      local_1b0 = 0xbb9d5a80051d5500;
      local_100 = local_f0;
    }
  } while (uVar2 != 0x1989d62a2d440491);
LAB_1800e401f:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_1800e4070(longlong *param_1)

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

  local_90 = 0xb86b5ab1b3309bb8;
  local_98 = 0x61bd4e3227e27b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xc8eddc32645ef7a1;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xc8eddc32645ef7a1;
          local_90 = uVar2;
          if (-0xf5ae1e64b632fb0 < (longlong)uVar1) break;
          if (uVar1 == 0xb80ae7ff811779c3) {
            local_88 = *param_1;
            local_90 = 0x41ceaad4cfab2df0;
            if (local_88 == 0) {
              local_90 = 0x95dfdf327f3197b2;
            }
            local_98 = 0x87cc0724e2ce1f48;
          }
          else if (uVar1 == 0xc5ec6e165b329f9a) {
            local_80 = local_68 + 0x27;
            local_90 = 0xb122ca19e6350ede;
            local_98 = 0x4187d40052a9de8f;
            local_78 = local_60;
          }
          else if (uVar1 == 0xc602adf02d6532b8) {
            local_70 = local_88;
            local_80 = param_1[2] - local_88;
            local_90 = 0xb3fa47caebe119f4;
            if (0xfff < local_80) {
              local_90 = 0x247c6f842859547;
            }
            local_98 = 0x435f59d35f7dc9a5;
            local_78 = local_88;
            local_68 = local_80;
          }
        }
        if ((longlong)uVar1 < 0x2fc9d809a890b088) break;
        if (uVar1 == 0x41189f2b1df85ce2) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0xb54c2d6c0d3873d0;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0x5f699b73fe9a5cc2;
          }
          local_98 = 0x9a85f565a5a8c358;
        }
        else if (uVar1 == 0x2fc9d809a890b088) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0xf0a51e19b49cd051) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_90 = 0x98e9906ed286de3c;
      local_98 = 0x8afa48784f7956c6;
    }
  } while (uVar1 != 0x1213d8169dff88fa);
  return;
}



void FUN_1800e4370(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong *local_48;

  local_58 = 0x8d7e0e0f223dd4b2;
  local_60 = 0xec9075037d6216;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x95fc55ff5af9bba7;
        if (uVar3 != 0x8d929e7a2140b6a4) break;
        local_50 = 0x20;
        puVar2 = (undefined8 *)*param_1;
        *(undefined8 *)puVar2[1] = 0;
        local_48 = (longlong *)*puVar2;
        local_58 = 0xe7a9254f253b999;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0xf5bce6024e53e11a;
        }
        local_60 = 0xf3e33dde6a13878a;
      }
      if (uVar3 != 0xfd99af8a98403e13) break;
      plVar1 = (longlong *)*local_48;
      thunk_FUN_1801f42e0(local_48,local_50);
      local_58 = 0x4afc7191ff08ad21;
      if (plVar1 == (longlong *)0x0) {
        local_58 = 0xb13a05c74308f5a2;
      }
      local_60 = 0xb765de1b67489332;
      local_48 = plVar1;
    }
    local_58 = local_58 ^ 0x95fc55ff5af9bba7;
  } while (uVar3 != 0x65fdbdc24406690);
  thunk_FUN_1801f42e0(*param_1,local_50);
  return;
}



undefined4 * FUN_1800e44d0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;

  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_1801d61c8(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 2) = lVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  plVar3 = (longlong *)FUN_1801d61c8(0x80);
  lVar1 = *(longlong *)(param_1 + 6);
  uVar5 = *(longlong *)(param_1 + 10) - lVar1;
  if (uVar5 != 0) {
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar4) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar4,uVar5);
  }
  *(longlong **)(param_1 + 6) = plVar3;
  *(longlong **)(param_1 + 8) = plVar3 + 0x10;
  *(longlong **)(param_1 + 10) = plVar3 + 0x10;
  *plVar3 = lVar2;
  plVar3[1] = lVar2;
  plVar3[2] = lVar2;
  plVar3[3] = lVar2;
  plVar3[4] = lVar2;
  plVar3[5] = lVar2;
  plVar3[6] = lVar2;
  plVar3[7] = lVar2;
  plVar3[8] = lVar2;
  plVar3[9] = lVar2;
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar2;
  plVar3[0xe] = lVar2;
  plVar3[0xf] = lVar2;
  return param_1;
}



void Unwind_1800e4690(undefined8 param_1,longlong param_2)

{
  FUN_1800e53f0(*(undefined8 *)(param_2 + 0x30));
  FUN_1800e56f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_1800e46d0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong local_1b0;
  ulonglong local_1a8;
  byte local_1a0;
  uintptr_t local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong local_178;
  longlong local_170;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  undefined8 *local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  ulonglong *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];

  local_1a8 = 0xcda035484ba457b7;
  local_1b0 = 0x2a3c09923510a6f1;
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_1a8 ^ 0xa306aca19f233b78;
              uVar2 = local_1a8 ^ local_1b0;
              local_1b0 = local_1b0 ^ 0xa306aca19f233b78;
              local_1a8 = uVar4;
              if (0x387a44336a81963 < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x4a3799c905c92397) {
                if ((longlong)uVar2 < -0x580ed73a1b6afcb4) {
                  if ((longlong)uVar2 < -0x5f03e137a65e5e19) {
                    if (uVar2 == 0x905eb48ff2c9540d) {
                      local_1a8 = 0xd171bfc7c8c86e9a;
                      local_1b0 = 0x755e7c42aa5a927e;
                      local_f8 = local_f0;
                    }
                    else if (uVar2 == 0x802e64539a49cbbe) {
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_198);
                    }
                  }
                  else if (uVar2 == 0xa0fc1ec859a1a1e7) {
                    local_128 = local_120 & local_148;
                    local_90 = (undefined8 *)((local_128 << (local_1a0 & 0x3f)) + (longlong)local_190);
                    local_78._8_4_ = (int)param_3;
                    local_78._0_8_ = param_3;
                    local_78._12_4_ = uVar5;
                    local_1a8 = 0xf967258c629b8cb4;
                    local_1b0 = 0xdf7a3c046069e9ab;
                    local_e8 = local_198;
                  }
                  else if (uVar2 == 0xa42fc3856292fce4) {
                    *local_f8 = param_3;
                    local_f8 = local_f8 + 1;
                    local_1a8 = 0x83cc313774ccdd5f;
                    if (local_f8 == local_140) {
                      local_1a8 = 0x77d276a6e8fdf4e1;
                    }
                    local_1b0 = 0x27e3f2b2165e21bb;
                  }
                }
                else if (uVar2 == 0xa7f128c5e495034c) {
                  lVar3 = local_e0 << (local_1a0 & 0x3f);
                  puVar1 = (undefined8 *)((longlong)local_180 + lVar3);
                  *puVar1 = local_68._0_8_;
                  puVar1[1] = local_68._8_8_;
                  puVar1 = (undefined8 *)((longlong)local_180 + lVar3 + 0x10);
                  *puVar1 = local_68._0_8_;
                  puVar1[1] = local_68._8_8_;
                  local_e0 = local_e0 + local_150;
                  local_1a8 = 0xe9076daea4c45d11;
                  if (local_e0 == local_110) {
                    local_1a8 = 0x9ffcf087a1bed7a0;
                  }
                  local_1b0 = 0x4ef6456b40515e5d;
                }
                else if (uVar2 == 0xa941e8041d09b06d) {
                  local_1a8 = 0x396fa7332b140d7b;
                  if (0x1fffffffffffffff < param_2) {
                    local_1a8 = 0x390da3db7e9df59e;
                  }
                  local_1b0 = 0x3fd4fa5dc831f789;
                }
                else if (uVar2 == 0xb3140e8ac9d394d6) {
                  local_180 = local_108;
                  local_a8 = param_1 + 2;
                  local_138 = *param_1;
                  local_130 = param_1[2] - local_138;
                  local_1a8 = 0xc0949c1f772c0ca2;
                  if (local_130 == local_198) {
                    local_1a8 = 0x4a4349ff94643f5f;
                  }
                  local_1b0 = 0x358f8a16a8ee3625;
                  local_a0 = local_138;
                }
              }
              else if ((longlong)uVar2 < -0x20dc619adb40131c) {
                if ((longlong)uVar2 < -0x3b238786011fe335) {
                  if (uVar2 == 0xbec128c19998a509) {
                    local_1a8 = 0x829a85f4c5f91d74;
                    local_1b0 = 0x86ccffa19e871a0b;
                    local_c8 = local_100;
                  }
                  else if (uVar2 == 0xb5c86636fa36dc69) goto LAB_1800e539d;
                }
                else if (uVar2 == 0xc4dc7879fee01ccb) {
                  local_1a8 = 0xbacec088a7b7ded4;
                  if (param_2 < 0x1ffffffffffffffc) {
                    local_1a8 = 0x356cf4b3304aae6a;
                  }
                  local_1b0 = 0xf06a6be5d8102bd;
                }
                else if (uVar2 == 0xd10ab5ece1ef89fd) {
                  local_1a8 = 0x5a2ab4053ab33db4;
                  if (local_118 == local_110) {
                    local_1a8 = 0xb4da18d05d884de7;
                  }
                  local_1b0 = 0xe4eb9cc4a32b98bd;
                  local_100 = local_80;
                }
              }
              else if (uVar2 == 0xdf239e6524bfece4) {
                local_d8 = local_130 + local_170;
                local_1a8 = 0x9067913ad78ac371;
                local_1b0 = 0xe5789ae0bdc35382;
                local_d0 = local_98;
              }
              else if (uVar2 == 0xe79c3cda7eb4f146) {
                local_148 = 0x3ffffffffffffffc;
                local_150 = 4;
                local_170 = 0x27;
                local_158 = 1;
                local_160 = 0x18;
                local_178 = -8;
                local_1a0 = 3;
                local_198 = 0;
                local_c0 = param_1 + 1;
                local_140 = (undefined8 *)param_1[1];
                local_190 = (undefined8 *)*param_1;
                local_1a8 = 0x1806956ac12d299f;
                if ((ulonglong)((longlong)local_140 - (longlong)local_190 >> 3) < param_2) {
                  local_1a8 = 0x92041eb32ac2c5f8;
                }
                local_1b0 = 0x3b45f6b737cb7595;
                local_b8 = local_140;
                local_b0 = local_190;
              }
              else if (uVar2 == 0xf51b1609dfc23a87) {
                local_d8 = local_130;
                local_1a8 = 0x72a37d8f5bb67d2f;
                if (0xfff < local_130) {
                  local_1a8 = 0x84765f2fea467;
                }
                local_1b0 = 0x7bc765531ffeddc;
                local_d0 = local_138;
              }
            }
            if ((longlong)uVar2 < 0x261d198802f2651f) break;
            if ((longlong)uVar2 < 0x50318414fea3d55a) {
              if (uVar2 == 0x261d198802f2651f) {
                lVar3 = local_e8 << (local_1a0 & 0x3f);
                puVar1 = (undefined8 *)((longlong)local_190 + lVar3);
                *puVar1 = local_78._0_8_;
                puVar1[1] = local_78._8_8_;
                puVar1 = (undefined8 *)((longlong)local_190 + lVar3 + 0x10);
                *puVar1 = local_78._0_8_;
                puVar1[1] = local_78._8_8_;
                local_e8 = local_e8 + local_150;
                local_1a8 = 0xfd12286230cac79f;
                if (local_e8 == local_128) {
                  local_1a8 = 0x89ab83f2b7e4ef64;
                }
                local_1b0 = 0xdb0f31ea3238a280;
              }
              else if (uVar2 == 0x3a6a520d6dcbacd7) {
                lVar3 = FUN_1801d61c8(local_188 + local_170);
                local_108 = (undefined8 *)(local_170 + lVar3 & 0xffffffffffffffe0);
                local_108[-1] = lVar3;
                local_1a8 = 0x48b369cc43cd26df;
                local_1b0 = 0xfba767468a1eb209;
              }
              else if (uVar2 == 0x40d48382af935d6c) {
                uVar2 = (longlong)local_b8 + (local_178 - (longlong)local_b0);
                local_120 = (uVar2 >> (local_1a0 & 0x3f)) + local_158;
                local_1a8 = 0x7bfb1cba7daf775b;
                if (uVar2 < local_160) {
                  local_1a8 = 0x4b59b6fdd6c782b1;
                }
                local_1b0 = 0xdb070272240ed6bc;
                local_f0 = local_190;
              }
            }
            else if ((longlong)uVar2 < 0x751f0bda6a4990f3) {
              if (uVar2 == 0x52a4b21885dc4de4) {
                local_1a8 = 0xec5ac3572b2aa3a8;
                if (local_120 == local_128) {
                  local_1a8 = 0x2c35f3cc274022ff;
                }
                local_1b0 = 0x7c0477d8d9e3f7a5;
                local_f0 = local_90;
              }
              else if (uVar2 == 0x50318414fea3d55a) {
                return;
              }
            }
            else if (uVar2 == 0x751f0bda6a4990f3) {
              thunk_FUN_1801f42e0(local_d0,local_d8);
              local_1a8 = 0x567ef48042783cfc;
              local_1b0 = 0x29b237697ef23586;
            }
            else if (uVar2 == 0x7fccc3e93c8a097a) {
              *param_1 = (ulonglong)local_180;
              local_88 = (undefined8 *)((longlong)local_180 + local_188);
              *local_c0 = (ulonglong)local_88;
              *local_a8 = (ulonglong)local_88;
              local_118 = ((ulonglong)(local_188 + local_178) >> (local_1a0 & 0x3f)) + local_158;
              local_1a8 = 0x6086b8dd3cac909a;
              if ((ulonglong)(local_188 + local_178) < local_160) {
                local_1a8 = 0xddc0345f939c2cf7;
              }
              local_1b0 = 0x63011c9e0a0489fe;
              local_100 = local_180;
            }
          }
          if (0x6d95986b6ac0216 < (longlong)uVar2) break;
          if (uVar2 == 0x387a44336a81964) {
            local_110 = local_118 & local_148;
            local_80 = (undefined8 *)((local_110 << (local_1a0 & 0x3f)) + (longlong)local_180);
            local_68._8_4_ = (int)param_3;
            local_68._0_8_ = param_3;
            local_68._12_4_ = uVar5;
            local_1a8 = 0x57cac289b9bbfaeb;
            local_1b0 = 0xf03bea4c5d2ef9a7;
            local_e0 = local_198;
          }
          else if (uVar2 == 0x4567a555b7e077f) {
            *local_c8 = param_3;
            local_c8 = local_c8 + 1;
            local_1a8 = 0xec74525e042245e1;
            if (local_c8 == local_88) {
              local_1a8 = 0xb813ac1fa1ff97c4;
            }
            local_1b0 = 0xe822280b5f5c429e;
          }
          else if (uVar2 == 0x6bb5d6ee325faf2) {
            local_188 = param_2 << (local_1a0 & 0x3f);
            local_1a8 = 0x74041b58aed9a55e;
            if (0x1ff < param_2) {
              local_1a8 = 0xb7beeba747ddf61d;
            }
            local_1b0 = 0x736293deb93dead6;
          }
        }
        if ((longlong)uVar2 < 0x7b43130c30149bb) break;
        if (uVar2 == 0x7b43130c30149bb) {
          local_98 = *(ulonglong *)(local_138 - 8);
          local_1a8 = 0x2d1ab3d565510feb;
          if ((local_a0 + local_178) - local_98 < 0x20) {
            local_1a8 = 0x721749e3dba728b1;
          }
          local_1b0 = 0xad34d786ff18c455;
        }
        else if (uVar2 == 0x234363ddf6e65c0a) {
          local_1a8 = 0xb0590adb4f19d2f6;
          if (local_190 == local_140) {
            local_1a8 = 0xa0bc0d4d1e295ac0;
          }
          local_1b0 = 0xf08d8959e08a8f9a;
        }
      }
      if (uVar2 != 0x766888617e44f88) break;
      local_108 = (undefined8 *)FUN_1801d61c8(local_188);
      local_1a8 = 0x8dbbcc8d9506a7a4;
      local_1b0 = 0x3eafc2075cd53372;
    }
  } while (uVar2 != 0x6d95986b6ac0217);
LAB_1800e539d:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_1800e53f0(longlong *param_1)

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

  local_90 = 0xea05e2f7cecaf794;
  local_98 = 0x9d45cf6641a74142;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x6818a4941a6e6123;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x6818a4941a6e6123;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x2c1de1e3e209e94b) break;
          if (uVar1 == 0x2c1de1e3e209e94b) {
            local_80 = local_68 + 0x27;
            local_90 = 0xaa3a8b80da8b99b8;
            local_98 = 0x7faaefb1414afd3f;
            local_78 = local_60;
          }
          else if (uVar1 == 0x77402d918f6db6d6) {
            local_88 = *param_1;
            local_90 = 0x151747023a789995;
            if (local_88 == 0) {
              local_90 = 0x94501ee51b604170;
            }
            local_98 = 0xefbd435a31016ea7;
          }
          else if (uVar1 == 0x7bed5dbf2a612fd7) {
            return;
          }
        }
        if ((longlong)uVar1 < -0x12ba2cb746f9f10d) break;
        if (uVar1 == 0xed45d348b9060ef3) {
          local_60 = *(longlong *)(local_88 + -8);
          local_90 = 0xdf56b8b1149a06fc;
          if ((local_70 - local_60) - 8U < 0x20) {
            local_90 = 0x1429d18fe102f7c9;
          }
          local_98 = 0x3834306c030b1e82;
        }
        else if (uVar1 == 0xfaaa04580b79f732) {
          local_70 = local_88;
          local_80 = param_1[2] - local_88;
          local_90 = 0xcbe479365836f53d;
          if (0xfff < local_80) {
            local_90 = 0xf331ce4f7af19f49;
          }
          local_98 = 0x1e741d07c3f791ba;
          local_78 = local_88;
          local_68 = local_80;
        }
      }
      if (uVar1 != 0xd59064319bc16487) break;
      thunk_FUN_1801f42e0(local_78,local_80);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_90 = 0x8bbc7b06ba968b13;
      local_98 = 0xf05126b990f7a4c4;
    }
  } while (uVar1 != 0xe76288dd1791187e);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800e56f0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong *local_48;

  local_58 = 0xc5834ccc43c5c18b;
  local_60 = 0x449b189f78dfd9f8;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_58 ^ local_60;
        local_60 = local_60 ^ 0xc47649871099838b;
        if (uVar3 != 0x811854533b1a1873) break;
        local_50 = 0x20;
        puVar2 = (undefined8 *)*param_1;
        *(undefined8 *)puVar2[1] = 0;
        local_48 = (longlong *)*puVar2;
        local_58 = 0x6a41697a91470c23;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0xe704df4028261b99;
        }
        local_60 = 0x29207952210e6ad;
      }
      if (uVar3 != 0x68d36eefb357ea8e) break;
      plVar1 = (longlong *)*local_48;
      thunk_FUN_1801f42e0(local_48,local_50);
      local_58 = 0xe91197331587178c;
      if (plVar1 == (longlong *)0x0) {
        local_58 = 0x64542109ace60036;
      }
      local_60 = 0x81c2f9dca6d0fd02;
      local_48 = plVar1;
    }
    local_58 = local_58 ^ 0xc47649871099838b;
  } while (uVar3 != 0xe596d8d50a36fd34);
  thunk_FUN_1801f42e0(*param_1,local_50);
  return;
}



void FUN_1800e5850(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_130;
  ulonglong local_128;
  uint local_11c;
  uintptr_t local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  ulonglong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_128 = 0xfee0394bfdb590bf;
  local_130 = 0xc8faa157437a4db4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_128 ^ 0x25995f4f88bedbec;
            uVar1 = local_128 ^ local_130;
            local_130 = local_130 ^ 0x25995f4f88bedbec;
            local_128 = uVar2;
            if (-0xc128b4373990ff3 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x5c5be07e4c3007a2) {
              if (uVar1 == 0x88bf9ce4d78fcd7d) {
                local_80 = *(longlong *)(local_a0 + -8);
                local_128 = 0x72514e144176fec0;
                if (local_108 <= (ulonglong)((local_a0 + local_110) - local_80)) {
                  local_128 = 0x85405085af59fbef;
                }
                local_130 = 0xdd476e2d6873218c;
              }
              else if (uVar1 == 0x95737bde9b15aaf7) {
                local_d8 = *local_f0;
                local_e0 = local_e8 + 1;
                local_128 = 0xbaeeec4fddad88ae;
                if (local_e0 <= local_f8) {
                  local_128 = 0x28ff5c4e429b66e7;
                }
                local_130 = 0x325170ab0a2245d3;
                local_a0 = local_d8;
              }
              else if (uVar1 == 0x9f16c7bb45ae970e) {
                local_c0 = local_68 + 0x27;
                local_b8 = local_98;
                local_128 = 0x956506cd8d44ad26;
                local_130 = 0xdb923842a0b711bb;
              }
            }
            else if ((longlong)uVar1 < -0x4e70fb2310c65d88) {
              if (uVar1 == 0xa3a41f81b3cff85e) {
                local_c8 = *param_1;
                local_128 = 0x3db153914d1b7742;
                local_130 = 0x4d2508c8efcfe04a;
              }
              else if (uVar1 == 0xaf1620392905df4c) {
                local_e0 = local_e8 + 0x28;
                local_d8 = local_80;
                local_128 = 0xab033efe08feef67;
                local_130 = 0xb1ad121b4047cc53;
              }
            }
            else if (uVar1 == 0xb18f04dcef39a278) {
              local_90 = param_1 + 2;
              local_88 = param_1[1];
              local_d0 = local_a8;
              local_128 = 0x40fa2d1dac1e784;
              if (local_a8 != local_88) {
                local_128 = 0xd03fc829a9bd3c5;
              }
              local_130 = 0x749bf9887815708c;
              local_c8 = local_a8;
            }
            else if (uVar1 == 0xd70a861e7580768e) {
              local_98 = *(longlong *)(local_60 + -8);
              local_128 = 0x3f3a4008e96547b3;
              if (local_108 <= (ulonglong)((local_70 + local_110) - local_98)) {
                local_128 = 0xe940a7a65337ebec;
              }
              local_130 = 0xa02c87b3accbd0bd;
            }
          }
          if (0x496c2015fffc3b50 < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x361a981cbecfdd0b) {
            if (uVar1 == 0x1aae2ce548b92334) {
              thunk_FUN_1801f42e0(local_d8,local_e0);
              local_128 = 0x3751fe5d23a74ab5;
              local_130 = 0x750456581d5caeae;
            }
            else if (uVar1 == 0xf3ed74bc8c66f00e) {
              return;
            }
          }
          else if (uVar1 == 0x361a981cbecfdd0b) {
            local_11c = 0;
            local_f8 = 0xfff;
            local_100 = 0xf;
            local_108 = 0x20;
            local_110 = -8;
            local_118 = 0;
            local_a8 = *param_1;
            local_128 = 0x856c79dcef2fa54d;
            if (local_a8 != 0) {
              local_128 = 0xc70e09bc8c70f73b;
            }
            local_130 = 0x76810d6063495543;
          }
          else if (uVar1 == 0x4255a8053efbe41b) {
            *(uintptr_t *)(local_b0 + 0x40) = local_118;
            *local_78 = local_100;
            *(undefined1 *)local_f0 = 0;
            local_d0 = local_b0 + 0x78;
            local_128 = 0x793fb4b92171199b;
            if (local_d0 != local_88) {
              local_128 = 0xa303ae327030428c;
            }
            local_130 = 0xda9bab3892bee1c5;
          }
        }
        if ((longlong)uVar1 < 0x70945b59a2d49708) break;
        if (uVar1 == 0x70945b59a2d49708) {
          local_70 = local_c8;
          local_c0 = *local_90 - local_c8;
          local_128 = 0x66123fa38a217c4f;
          if (local_c0 <= local_f8) {
            local_128 = 0xffef8732d252b65c;
          }
          local_130 = 0xb118b9bdffa10ac1;
          local_b8 = local_c8;
          local_68 = local_c0;
          local_60 = local_70;
        }
        else if (uVar1 == 0x7998050ae28ea349) {
          local_b0 = local_d0;
          local_f0 = (longlong *)(local_d0 + 0x30);
          local_78 = (ulonglong *)(local_d0 + 0x48);
          local_e8 = *(ulonglong *)(local_d0 + 0x48);
          local_128 = 0xf0af09e0d55f4fd;
          if (local_e8 <= local_100) {
            local_128 = 0xd82c2345a8bbba11;
          }
          local_130 = 0x9a798b4096405e0a;
        }
      }
      if (uVar1 != 0x4ef73e8f2df3bc9d) break;
      thunk_FUN_1801f42e0(local_b8,local_c0);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_128 = 0x3ecf7c4cf0ae9947;
      local_130 = 0xcd2208f07cc86949;
    }
  } while ((uVar1 != 0x496c2015fffc3b51) && (uVar1 != 0x58073ea8c72ada63));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_11c,local_118);
}



longlong FUN_1800e5fa0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  byte local_e0;
  longlong local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uintptr_t local_b0;
  ulonglong *local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_f8 = 0x6e8c23d5c16c65dc;
  local_100 = 0x5dadc1c72f68c265;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_f8 ^ 0x44ac8da700e9d57e;
            uVar1 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0x44ac8da700e9d57e;
            local_f8 = uVar3;
            if ((longlong)uVar1 < 0x1dbd5c2f4de7a85a) break;
            if ((longlong)uVar1 < 0x3321e212ee04a7b9) {
              if (uVar1 == 0x1dbd5c2f4de7a85a) {
                local_80 = local_48 + local_d0;
                local_f8 = 0xfad2d8000fc9ac29;
                local_100 = 0x6b8ba645925fbd86;
                local_78 = local_58;
              }
              else if (uVar1 == 0x2927694ece22da31) {
                local_58 = *(ulonglong *)(local_88 - 8);
                local_f8 = 0x6c1dcca3f1b473b5;
                if (0x1f < (local_50 - local_58) - 8) {
                  local_f8 = 0xa0b05f084bb84f28;
                }
                local_100 = 0x71a0908cbc53dbef;
              }
              else if (uVar1 == 0x2dbc5c8432d41141) {
                FUN_1802079d0(local_e8,*param_1,local_c0 - *param_1);
                FUN_1802079d0(local_98 + 8,param_2);
                local_f8 = 0x28881ade9cd1f042;
                local_100 = 0x63c6a11ec2f61bdd;
              }
            }
            else if ((longlong)uVar1 < 0x6fafc496b0e6f5fb) {
              if (uVar1 == 0x3321e212ee04a7b9) {
                local_d0 = 0x27;
                local_e0 = 3;
                local_b0 = 0;
                local_c8 = param_1 + 1;
                uVar1 = *param_1;
                local_68 = param_2 - uVar1;
                local_60 = ((longlong)(param_1[1] - uVar1) >> 3) + 1;
                local_a0 = param_1 + 2;
                uVar1 = (longlong)(param_1[2] - uVar1) >> 3;
                local_f0 = (uVar1 >> 1) + uVar1;
                if (local_f0 <= local_60) {
                  local_f0 = local_60;
                }
                if (0x1fffffffffffffff - (uVar1 >> 1) < uVar1) {
                  local_f0 = 0x1fffffffffffffff;
                }
                local_f8 = 0xbbd2569c4d9221c9;
                if (local_f0 < 0x2000000000000000) {
                  local_f8 = 0xab7710efc42433c1;
                }
                local_100 = 0x6e0cde45850c3129;
                local_c0 = param_2;
              }
              else if (uVar1 == 0x4b4ebbc05e27eb9f) {
                local_88 = *param_1;
                local_f8 = 0x91e5a52ff7de9fb0;
                if (local_88 != 0) {
                  local_f8 = 0x8e6e3156b83cd9b6;
                }
                local_100 = 0x396a98e93f028f2f;
              }
            }
            else if (uVar1 == 0x6fafc496b0e6f5fb) {
              local_b8 = FUN_1801d61c8(local_90);
              local_f8 = 0x55967e4543b646f4;
              local_100 = 0x5a49cdc0d72d8fd7;
            }
            else if (uVar1 == 0x7e1b4c81cee963e9) {
              lVar2 = FUN_1801d61c8(local_90 + local_d0);
              local_b8 = local_d0 + lVar2 & 0xffffffffffffffe0;
              *(longlong *)(local_b8 - 8) = lVar2;
              local_f8 = 0x5c691bb75be9e02e;
              local_100 = 0x53b6a832cf72290d;
            }
          }
          if (-0x3a843155bed7fd19 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x48fb564078c1a967) {
            if (uVar1 == 0x91597e459d9611af) {
              thunk_FUN_1801f42e0(local_78,local_80);
              local_f8 = 0xdc86b733557a8509;
              local_100 = 0x74098af59da69596;
            }
            else {
              if (uVar1 == 0xa88f3dc6c8dc109f) {
                *param_1 = local_e8;
                *local_c8 = local_e8 + local_60 * 8;
                *local_a0 = local_f0 * 8 + local_e8;
                return local_98;
              }
              if (uVar1 == 0x9fd340d627d483a2) goto LAB_1800e6770;
            }
          }
          else if (uVar1 == 0xb704a9bf873e5699) {
            local_78 = local_88;
            local_80 = *local_a0 - local_88;
            local_f8 = 0x518d1f7032828e20;
            if (local_80 < 0x1000) {
              local_f8 = 0xe9f3087b613645be;
            }
            local_100 = 0x78aa763efca05411;
            local_50 = local_78;
            local_48 = local_80;
          }
          else if (uVar1 == 0xb7e0c15f4ec705c1) {
            FUN_1802079d0(local_e8);
            local_f8 = 0x130e09a916002d5b;
            local_100 = 0x5840b2694827c6c4;
          }
        }
        if ((longlong)uVar1 < -0x24904968e2fb7a4a) break;
        if (uVar1 == 0xdb6fb6971d0485b6) {
          local_f8 = 0x3f8cb11287be863;
          if (local_f0 < 0x200) {
            local_f8 = 0x7685026a3187b00b;
          }
          local_100 = 0x192ac6fc816145f0;
        }
        else if (uVar1 == 0xfdfb385949bc923) {
          local_e8 = local_b8;
          local_98 = local_b8 + local_68;
          *(undefined8 *)(local_b8 + local_68) = *param_3;
          local_f8 = 0x365ed4cba512d464;
          if (param_2 != *local_c8) {
            local_f8 = 0xac024910d901c0e4;
          }
          local_100 = 0x81be1594ebd5d1a5;
        }
        else if (uVar1 == 0x1ad20deda91aad93) {
          local_f8 = 0x8470c7bf5b6febe7;
          if (0x1ffffffffffffffb < local_f0) {
            local_f8 = 0x65b8cbe8b2520bac;
          }
          local_100 = 0xfa6b8b3e9586880e;
        }
      }
      if (uVar1 != 0xc57bceaa412802e8) break;
      local_90 = local_f0 << (local_e0 & 0x3f);
      local_f8 = 0xa4e6ef1c4a7187a4;
      if (local_f0 != local_b0) {
        local_f8 = 0x7056ea0ec3eecb31;
      }
      local_100 = 0xab395c99deea4e87;
      local_b8 = 0;
    }
    if (uVar1 == 0xd110cf84f7eb94c7) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b0);
    }
  } while (uVar1 != 0xd5de88d9c89e10e0);
LAB_1800e6770:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



longlong FUN_1800e67f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_162;
  char local_161;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  undefined8 local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  undefined8 *local_120;
  longlong local_110;
  longlong *local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 *local_60;

  local_158 = 0xa78d89df543a5a44;
  local_160 = 0x76c1918cb9c22491;
LAB_1800e68b0:
  do {
    while( true ) {
      uVar13 = local_158 ^ 0x8c9717ab3af4990;
      uVar11 = local_158 ^ local_160;
      local_160 = local_160 ^ 0x8c9717ab3af4990;
      local_158 = uVar13;
      if ((longlong)uVar11 < -0x39964a29f907c4e) break;
      if ((longlong)uVar11 < 0x47c9e287edb48441) {
        if ((longlong)uVar11 < 0x144a3aadd4e09634) {
          if (uVar11 == 0xfc669b5d606f83b2) {
            local_88 = local_d8;
            *local_e8 = (longlong)local_130;
            local_158 = 0x9fea11abe4532616;
            if (param_2 != local_d8) {
              local_158 = 0x54c171dbe8fd6e35;
            }
            local_160 = 0x3ae03c4a058df85f;
            local_c8 = local_98;
            local_d0 = param_2;
          }
          else if (uVar11 == 0x834ff5d0a806aad) {
            local_158 = 0x9eb12b4c10060ff2;
            if (local_148 < 0x23) {
              local_158 = 0xb79c3677739aa882;
            }
            local_160 = 0x7f99307aace7632d;
          }
        }
        else if (uVar11 == 0x144a3aadd4e09634) {
          local_f8 = local_128 * local_148;
          local_158 = 0x85bfff6e8309bcf8;
          if (local_148 != local_150) {
            local_158 = 0xeed6a9f970b5976c;
          }
          local_160 = 0xe6e256a47a35fdc1;
          local_120 = (undefined8 *)0x0;
        }
        else if (uVar11 == 0x1cc953f26bbc335b) {
          local_158 = 0x759ddcd8431b58e9;
          if (local_161 == '\0') {
            local_158 = 0xce32a502cec05f1a;
          }
          local_160 = 0x89fb47852374db5b;
          local_c0 = local_e0;
          local_d8 = local_90;
          local_b8 = local_130;
        }
      }
      else if ((longlong)uVar11 < 0x635da9caf93c4139) {
        if (uVar11 == 0x47c9e287edb48441) {
          uVar6 = *local_c0;
          uVar7 = local_c0[1];
          uVar8 = local_c0[2];
          uVar9 = local_c0[3];
          uVar10 = *(undefined8 *)((longlong)local_c0 + 0x24);
          *(undefined8 *)((longlong)local_b8 + 0x1c) = *(undefined8 *)((longlong)local_c0 + 0x1c);
          *(undefined8 *)((longlong)local_b8 + 0x24) = uVar10;
          local_b8[2] = uVar8;
          local_b8[3] = uVar9;
          *local_b8 = uVar6;
          local_b8[1] = uVar7;
          local_b8[8] = 0;
          local_b8[9] = 0;
          local_b8[6] = 0;
          local_b8[7] = 0;
          uVar6 = local_c0[6];
          uVar7 = local_c0[7];
          uVar8 = local_c0[9];
          local_b8[8] = local_c0[8];
          local_b8[9] = uVar8;
          local_b8[6] = uVar6;
          local_b8[7] = uVar7;
          local_c0[8] = local_150;
          local_c0[9] = local_140;
          *(undefined1 *)(local_c0 + 6) = local_162;
          local_b8[0xe] = local_c0[0xe];
          uVar2 = *(undefined4 *)(local_c0 + 10);
          uVar3 = *(undefined4 *)((longlong)local_c0 + 0x54);
          uVar4 = *(undefined4 *)(local_c0 + 0xb);
          uVar5 = *(undefined4 *)((longlong)local_c0 + 0x5c);
          uVar6 = local_c0[0xd];
          local_b8[0xc] = local_c0[0xc];
          local_b8[0xd] = uVar6;
          *(undefined4 *)(local_b8 + 10) = uVar2;
          *(undefined4 *)((longlong)local_b8 + 0x54) = uVar3;
          *(undefined4 *)(local_b8 + 0xb) = uVar4;
          *(undefined4 *)((longlong)local_b8 + 0x5c) = uVar5;
          local_c0 = local_c0 + 0xf;
          local_158 = 0xcd9b7a8be7d66330;
          if (local_c0 != param_2) {
            local_158 = 0x5b2edbaca9f1fe0e;
          }
          local_b8 = local_b8 + 0xf;
          local_160 = 0x1ce7392b44457a4f;
        }
        else if (uVar11 == 0x5f55bd2e4658610d) {
LAB_1800e720c:
          std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
        }
      }
      else if (uVar11 == 0x635da9caf93c4139) {
        local_130 = local_120;
        local_f0 = (longlong)local_120 + local_a0;
        local_98 = (undefined8 *)((longlong)local_120 + local_a0 + 0x78);
        local_70 = local_148;
        local_e8 = &local_68;
        uVar6 = *param_3;
        uVar7 = param_3[1];
        uVar8 = param_3[2];
        uVar9 = param_3[3];
        uVar10 = *(undefined8 *)((longlong)param_3 + 0x24);
        puVar1 = (undefined8 *)((longlong)local_120 + local_a0 + 0x1c);
        *puVar1 = *(undefined8 *)((longlong)param_3 + 0x1c);
        puVar1[1] = uVar10;
        puVar1 = (undefined8 *)((longlong)local_120 + local_a0 + 0x10);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        *(undefined8 *)((longlong)local_120 + local_a0) = uVar6;
        ((undefined8 *)((longlong)local_120 + local_a0))[1] = uVar7;
        puVar1 = (undefined8 *)((longlong)local_120 + local_a0 + 0x40);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)local_120 + local_a0 + 0x30);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar6 = param_3[6];
        uVar7 = param_3[7];
        uVar8 = param_3[9];
        puVar1 = (undefined8 *)((longlong)local_120 + local_a0 + 0x40);
        *puVar1 = param_3[8];
        puVar1[1] = uVar8;
        puVar1 = (undefined8 *)((longlong)local_120 + local_a0 + 0x30);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        param_3[8] = local_150;
        param_3[9] = local_140;
        *(undefined1 *)(param_3 + 6) = local_162;
        *(undefined8 *)(local_f0 + 0x70) = param_3[0xe];
        uVar2 = *(undefined4 *)(param_3 + 10);
        uVar3 = *(undefined4 *)((longlong)param_3 + 0x54);
        uVar4 = *(undefined4 *)(param_3 + 0xb);
        uVar5 = *(undefined4 *)((longlong)param_3 + 0x5c);
        uVar6 = param_3[0xd];
        *(undefined8 *)(local_f0 + 0x60) = param_3[0xc];
        *(undefined8 *)(local_f0 + 0x68) = uVar6;
        *(undefined4 *)(local_f0 + 0x50) = uVar2;
        *(undefined4 *)(local_f0 + 0x54) = uVar3;
        *(undefined4 *)(local_f0 + 0x58) = uVar4;
        *(undefined4 *)(local_f0 + 0x5c) = uVar5;
        local_90 = (undefined8 *)*local_108;
        local_e0 = (undefined8 *)*param_1;
        local_161 = local_e0 == param_2;
        local_158 = 0xbacd5498fb367b56;
        if (param_2 != local_90) {
          local_158 = 0x4b8d7fdbc8ffcff2;
        }
        local_160 = 0x57442c29a343fca9;
        local_80 = param_1;
        local_60 = local_98;
        local_68 = local_f0;
      }
      else if (uVar11 == 0x6e214d91ed70966a) {
        uVar6 = *local_d0;
        uVar7 = local_d0[1];
        uVar8 = local_d0[2];
        uVar9 = local_d0[3];
        uVar10 = *(undefined8 *)((longlong)local_d0 + 0x24);
        *(undefined8 *)((longlong)local_c8 + 0x1c) = *(undefined8 *)((longlong)local_d0 + 0x1c);
        *(undefined8 *)((longlong)local_c8 + 0x24) = uVar10;
        local_c8[2] = uVar8;
        local_c8[3] = uVar9;
        *local_c8 = uVar6;
        local_c8[1] = uVar7;
        local_c8[8] = 0;
        local_c8[9] = 0;
        local_c8[6] = 0;
        local_c8[7] = 0;
        uVar6 = local_d0[6];
        uVar7 = local_d0[7];
        uVar8 = local_d0[9];
        local_c8[8] = local_d0[8];
        local_c8[9] = uVar8;
        local_c8[6] = uVar6;
        local_c8[7] = uVar7;
        local_d0[8] = local_150;
        local_d0[9] = local_140;
        *(undefined1 *)(local_d0 + 6) = local_162;
        local_c8[0xe] = local_d0[0xe];
        uVar2 = *(undefined4 *)(local_d0 + 10);
        uVar3 = *(undefined4 *)((longlong)local_d0 + 0x54);
        uVar4 = *(undefined4 *)(local_d0 + 0xb);
        uVar5 = *(undefined4 *)((longlong)local_d0 + 0x5c);
        uVar6 = local_d0[0xd];
        local_c8[0xc] = local_d0[0xc];
        local_c8[0xd] = uVar6;
        *(undefined4 *)(local_c8 + 10) = uVar2;
        *(undefined4 *)((longlong)local_c8 + 0x54) = uVar3;
        *(undefined4 *)(local_c8 + 0xb) = uVar4;
        *(undefined4 *)((longlong)local_c8 + 0x5c) = uVar5;
        local_d0 = local_d0 + 0xf;
        local_158 = 0x75d3b7a59633967e;
        if (local_d0 != local_88) {
          local_158 = 0xbef8d7d59a9dde5d;
        }
        local_c8 = local_c8 + 0xf;
        local_160 = 0xd0d99a4477ed4837;
      }
    }
    if (-0x2eb3e7ac1207812c < (longlong)uVar11) {
      if ((longlong)uVar11 < -0x1ed7e4c9431e9321) {
        if (uVar11 == 0xd14c1853edf87ed5) {
          local_162 = 0;
          local_138 = 0x222222222222222;
          local_110 = 0x27;
          local_140 = 0xf;
          local_128 = 0x78;
          local_150 = 0;
          local_108 = param_1 + 1;
          lVar12 = *param_1;
          uVar11 = param_1[1] - lVar12;
          if (uVar11 >> 0x20 == 0) {
            uVar11 = (uVar11 & 0xffffffff) / 0x78;
          }
          else {
            uVar11 = (longlong)uVar11 / 0x78;
          }
          local_a0 = (longlong)param_2 - lVar12;
          local_100 = uVar11 + 1;
          uVar11 = param_1[2] - lVar12;
          if (uVar11 >> 0x20 == 0) {
            uVar11 = (uVar11 & 0xffffffff) / 0x78;
          }
          else {
            uVar11 = (longlong)uVar11 / 0x78;
          }
          uVar13 = uVar11 >> 1;
          if (local_100 < uVar13 + uVar11) {
            local_148 = uVar13 + uVar11;
            if (uVar11 <= 0x222222222222222 - uVar13) goto LAB_1800e716e;
LAB_1800e71b2:
            local_148 = 0x222222222222222;
LAB_1800e7184:
            local_158 = 0xc4c754df3144ea54;
          }
          else {
            local_148 = local_100;
            if (0x222222222222222 - uVar13 < uVar11) goto LAB_1800e71b2;
LAB_1800e716e:
            local_158 = 0x1e26d7c71584221c;
            if (local_148 < 0x222222222222223) goto LAB_1800e7184;
          }
          local_160 = 0xd08d6e72e5a47c60;
        }
        else if (uVar11 == 0xd17c43a0a393197f) {
          local_d8 = (undefined8 *)*local_108;
          local_158 = 0xc797b097798a8b77;
          local_160 = 0x3bf12bca19e508c5;
        }
      }
      else if (uVar11 == 0xe1281b36bce16cdf) {
        local_158 = 0x4da176d1d3c209d3;
        if (local_148 != local_138) {
          local_158 = 0xaf4bcb2c50ee57ad;
        }
        local_160 = 0x12f4cbff959a68de;
      }
      else if (uVar11 == 0xed8978b1587587ff) {
        local_158 = 0x90f7037ea31a3f8a;
        if (local_161 == '\0') {
          local_158 = 0xb77903ca2586256b;
        }
        local_160 = 0x35fd2e9f42c4e1c3;
        local_b0 = local_e0;
        local_a8 = local_130;
      }
      goto LAB_1800e68b0;
    }
    if ((longlong)uVar11 < -0x4240ff2c3a8bc08d) {
      if (uVar11 == 0x82842d556742c4a8) {
        uVar6 = *local_b0;
        uVar7 = local_b0[1];
        uVar8 = local_b0[2];
        uVar9 = local_b0[3];
        uVar10 = *(undefined8 *)((longlong)local_b0 + 0x24);
        *(undefined8 *)((longlong)local_a8 + 0x1c) = *(undefined8 *)((longlong)local_b0 + 0x1c);
        *(undefined8 *)((longlong)local_a8 + 0x24) = uVar10;
        local_a8[2] = uVar8;
        local_a8[3] = uVar9;
        *local_a8 = uVar6;
        local_a8[1] = uVar7;
        local_a8[8] = 0;
        local_a8[9] = 0;
        local_a8[6] = 0;
        local_a8[7] = 0;
        uVar6 = local_b0[6];
        uVar7 = local_b0[7];
        uVar8 = local_b0[9];
        local_a8[8] = local_b0[8];
        local_a8[9] = uVar8;
        local_a8[6] = uVar6;
        local_a8[7] = uVar7;
        local_b0[8] = local_150;
        local_b0[9] = local_140;
        *(undefined1 *)(local_b0 + 6) = local_162;
        local_a8[0xe] = local_b0[0xe];
        uVar2 = *(undefined4 *)(local_b0 + 10);
        uVar3 = *(undefined4 *)((longlong)local_b0 + 0x54);
        uVar4 = *(undefined4 *)(local_b0 + 0xb);
        uVar5 = *(undefined4 *)((longlong)local_b0 + 0x5c);
        uVar6 = local_b0[0xd];
        local_a8[0xc] = local_b0[0xc];
        local_a8[0xd] = uVar6;
        *(undefined4 *)(local_a8 + 10) = uVar2;
        *(undefined4 *)((longlong)local_a8 + 0x54) = uVar3;
        *(undefined4 *)(local_a8 + 0xb) = uVar4;
        *(undefined4 *)((longlong)local_a8 + 0x5c) = uVar5;
        local_b0 = local_b0 + 0xf;
        local_158 = 0xbf7090b276a793ab;
        if (local_b0 != param_2) {
          local_158 = 0x98fe9006f03b894a;
        }
        local_a8 = local_a8 + 0xf;
        local_160 = 0x1a7abd5397794de2;
      }
      else if (uVar11 == 0xa50a2de1e1dede49) {
        local_78 = 0;
        FUN_1800e7270(param_1,local_130,local_100,local_148);
        FUN_1800e7a00(&local_80);
        return local_f0;
      }
    }
    else if (uVar11 == 0xbdbf00d3c5743f73) {
      lVar12 = FUN_1801d61c8(local_f8 + local_110);
      local_120 = (undefined8 *)(local_110 + lVar12 & 0xffffffffffffffe0);
      local_120[-1] = lVar12;
      local_158 = 0x66464c8ef58a8d2c;
      local_160 = 0x51be5440cb6cc15;
    }
    else if (uVar11 == 0xc805060ddf7dcbaf) {
      local_120 = (undefined8 *)FUN_1801d61c8(local_f8);
      local_158 = 0xd32f631dd336a5dc;
      local_160 = 0xb072cad72a0ae4e5;
    }
    else if (uVar11 == 0xceabb9b5f0205e7c) goto LAB_1800e720c;
  } while( true );
}



void FUN_1800e7270(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_138;
  ulonglong local_130;
  uint local_124;
  uintptr_t local_120;
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_130 = 0x41d0e6896657bf6;
  local_138 = 0x90a5c02a33f6c196;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_130 ^ 0x613ae62b12d73bff;
            uVar1 = local_130 ^ local_138;
            local_138 = local_138 ^ 0x613ae62b12d73bff;
            local_130 = uVar2;
            if ((longlong)uVar1 < 0x240de375b23c17f9) break;
            if ((longlong)uVar1 < 0x51cb2db479be860b) {
              if ((longlong)uVar1 < 0x3b67a33ec182f7be) {
                if (uVar1 == 0x240de375b23c17f9) {
                  local_d0 = *local_e8;
                  local_d8 = local_e0 + 1;
                  local_130 = 0x9680bb087c93845b;
                  if (local_d8 <= local_100) {
                    local_130 = 0x4e38d6049f0146e9;
                  }
                  local_138 = 0x755f753a5e83b157;
                  local_50 = local_d0;
                }
                else if (uVar1 == 0x365cdd8fc8a5a023) {
                  *param_1 = param_2;
                  *local_f8 = param_3 * 0x78 + param_2;
                  *local_f0 = param_4 * 0x78 + param_2;
                  return;
                }
              }
              else if (uVar1 == 0x3b67a33ec182f7be) {
                thunk_FUN_1801f42e0(local_d0,local_d8);
                local_130 = 0xba58752a448e0dae;
                local_138 = 0xfd08d873a2cc91ea;
              }
              else if (uVar1 == 0x4750ad59e6429c44) {
                *(uintptr_t *)(local_a8 + 0x40) = local_120;
                *local_68 = local_108;
                *(undefined1 *)local_e8 = 0;
                local_b0 = local_a8 + 0x78;
                local_130 = 0x868f675fd93c85c5;
                if (local_b0 != local_70) {
                  local_130 = 0xc912c8f5404a579f;
                }
                local_138 = 0x98d9e54139f4d194;
              }
            }
            else if (uVar1 == 0x51cb2db479be860b) {
              local_a8 = local_b0;
              local_e8 = (longlong *)(local_b0 + 0x30);
              local_68 = (ulonglong *)(local_b0 + 0x48);
              local_e0 = *(ulonglong *)(local_b0 + 0x48);
              local_130 = 0xed2424dde1ef08ea;
              if (local_e0 <= local_108) {
                local_130 = 0x8e796af1b5918357;
              }
              local_138 = 0xc929c7a853d31f13;
            }
            else if (uVar1 == 0x6462b3e173578c0c) {
              local_c8 = local_78 + 0x27;
              local_130 = 0xcc9c02794281064f;
              local_138 = 0xc61533fc63db0ce2;
              local_c0 = local_58;
            }
            else if (uVar1 == 0x727f4d5371f15747) {
              local_c0 = local_b8;
              local_c8 = *local_f0 - local_b8;
              local_130 = 0x3f9fc23068d80ddb;
              if (local_c8 <= local_100) {
                local_130 = 0xd6d4e761ca666bda;
              }
              local_138 = 0xdc5dd6e4eb3c6177;
              local_80 = local_c0;
              local_78 = local_c8;
              local_48 = local_c0;
            }
          }
          if (-0xe9bfe99e7636068 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x1c3deb2b7c1b9354) {
            if (uVar1 == 0x94b8ce42a593ba60) {
              local_124 = 0;
              local_100 = 0xfff;
              local_108 = 0xf;
              local_110 = 0x20;
              local_118 = -8;
              local_120 = 0;
              local_f8 = param_1 + 1;
              local_f0 = param_1 + 2;
              local_88 = *param_1;
              local_130 = 0x515c90afd0536ec;
              if (local_88 != 0) {
                local_130 = 0xe6bab18845b81a19;
              }
              local_138 = 0x3349148535a096cf;
            }
            else if (uVar1 == 0xd5f3a50d70188cd6) {
              local_70 = *local_f8;
              local_b8 = local_88;
              local_130 = 0xeb92915f7829e4d1;
              if (local_88 != local_70) {
                local_130 = 0xc826f1b87066359d;
              }
              local_138 = 0x99eddc0c09d8b396;
              local_b0 = local_b8;
            }
          }
          else if (uVar1 == 0xe3c214d483e46cac) {
            local_58 = *(longlong *)(local_48 + -8);
            local_130 = 0xd529532a1cc110f8;
            if (local_110 <= (ulonglong)((local_80 + local_118) - local_58)) {
              local_130 = 0xadc9b4835f16a2c6;
            }
            local_138 = 0xb14be0cb6f969cf4;
          }
          else if (uVar1 == 0xe3dfce322210350c) {
            local_60 = *(longlong *)(local_50 + -8);
            local_130 = 0x941bec0226c830fe;
            if (local_110 <= (ulonglong)((local_50 + local_118) - local_60)) {
              local_130 = 0x68712bfcd50cd733;
            }
            local_138 = 0x657fed643e54af67;
          }
        }
        if (0xd0ec698eb587853 < (longlong)uVar1) break;
        if (uVar1 == 0xf1640166189c9f99) {
          local_d8 = local_e0 + 0x28;
          local_d0 = local_60;
          local_130 = 0xfc64bf14d60f193;
          local_138 = 0x34a1e8cf8ce2062d;
        }
        else if (uVar1 == 0xa893185215a0aad) {
          thunk_FUN_1801f42e0(local_c0,local_c8);
          local_130 = 0x6331051b0ea952c8;
          local_138 = 0x556dd894c60cf2eb;
        }
      }
      if (uVar1 != 0x1e56821ee0c85451) break;
      local_b8 = *param_1;
      local_130 = 0xe82394761efcec37;
      local_138 = 0x9a5cd9256f0dbb70;
    }
  } while ((uVar1 != 0xd0ec698eb587854) && (uVar1 != 0x1c82544830803e32));
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_124,local_120);
}



void FUN_1800e7a00(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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

  local_108 = 0x9ccdfb97eecfd29a;
  local_110 = 0xf81200020ae905ab;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_108 ^ 0xb7c0b40cbc61a152;
            uVar1 = local_108 ^ local_110;
            local_110 = local_110 ^ 0xb7c0b40cbc61a152;
            local_108 = uVar2;
            if ((longlong)uVar1 < 0x3c276060381f7d62) break;
            if ((longlong)uVar1 < 0x64dffb95e426d731) {
              if ((longlong)uVar1 < 0x5c0fcee1390bc248) {
                if (uVar1 == 0x3c276060381f7d62) {
                  local_c0 = local_c8 + 0x28;
                  local_b8 = local_70;
                  local_108 = 0x6cae8815bae874de;
                  local_110 = 0xda89ef1b255c595d;
                }
                else if (uVar1 == 0x4f594157001d6b75) {
                  local_60 = *(longlong *)(local_48 + -8);
                  local_108 = 0x423ca5a0658b56c0;
                  if (local_e8 <= (ulonglong)((local_48 + local_f0) - local_60)) {
                    local_108 = 0xdce3646a8a50db58;
                  }
                  local_110 = 0x1e336b415c809488;
                }
              }
              else if (uVar1 == 0x5c0fcee1390bc248) {
                local_b0 = local_58 + 0x27;
                local_a8 = local_60;
                local_108 = 0xb5e4cbe8b1a5632c;
                local_110 = 0x839a980d4b916a10;
              }
              else if (uVar1 == 0x6318ac3ebe653ad7) {
                local_78 = *(longlong *)(param_1 + 0x20);
                local_98 = *(longlong *)(param_1 + 0x18);
                local_108 = 0x58acae0c56b79284;
                if (local_98 != local_78) {
                  local_108 = 0x2c9acf1ca9bf1499;
                }
                local_110 = 0x9f220a93d96aae39;
                local_a0 = local_80;
              }
            }
            else if ((longlong)uVar1 < 0x73a8a8ed68c773e3) {
              if (uVar1 == 0x64dffb95e426d731) {
                local_fc = 0;
                local_d8 = 0xfff;
                local_e0 = 0xf;
                local_e8 = 0x20;
                local_f0 = -8;
                local_f8 = 0;
                local_88 = (longlong *)(param_1 + 8);
                local_80 = *(longlong *)(param_1 + 8);
                local_108 = 0xea2fb54848752c6d;
                if (local_80 != 0) {
                  local_108 = 0x3fbceffd3d2fa493;
                }
                local_110 = 0x5ca443c3834a9e44;
              }
              else if (uVar1 == 0x688cc2870d2d8c82) goto LAB_1800e8108;
            }
            else if (uVar1 == 0x73a8a8ed68c773e3) {
              local_70 = *(longlong *)(local_68 + -8);
              local_108 = 0x6fa1350047f3b053;
              if (local_e8 <= (ulonglong)((local_68 + local_f0) - local_70)) {
                local_108 = 0x3b0a97e772c141b3;
              }
              local_110 = 0x538655607feccd31;
            }
            else if (uVar1 == 0x7cf8ce3e7f5c7b9a) {
              local_b8 = *local_d0;
              local_c0 = local_c8 + 1;
              local_108 = 0xf1a9091aa2c00eb0;
              if (local_c0 <= local_d8) {
                local_108 = 0x3426c6f955b350d0;
              }
              local_110 = 0x8201a1f7ca077d53;
              local_68 = local_b8;
            }
          }
          if (-0x3d2ff0d4292fb031 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x4974097434c04dd7) {
            if (uVar1 == 0xb3b8c58f70d5baa0) {
              local_90 = local_98;
              local_d0 = (longlong *)(local_98 + 0x30);
              local_50 = (ulonglong *)(local_98 + 0x48);
              local_c8 = *(ulonglong *)(local_98 + 0x48);
              local_108 = 0xa7652a555648f696;
              if (local_c8 <= local_e0) {
                local_108 = 0x6d338ffd4992ac7f;
              }
              local_110 = 0xdb9de46b29148d0c;
            }
            else if (uVar1 == 0xb627670e9fb42d83) {
              thunk_FUN_1801f42e0(local_b8,local_c0);
              local_108 = 0x60c6aeb81f2dfd;
              local_110 = 0xb6cead38d8990c8e;
            }
          }
          else if (uVar1 == 0xb6ae6b9660862173) {
            *(uintptr_t *)(local_90 + 0x40) = local_f8;
            *local_50 = local_e0;
            *(undefined1 *)local_d0 = 0;
            local_98 = local_90 + 0x78;
            local_108 = 0x2cc7c589f6fb2754;
            if (local_98 != local_78) {
              local_108 = 0x5752f519ab16f1f2;
            }
            local_110 = 0xe4ea3096dbc34b52;
          }
          else if (uVar1 == 0xb68bf68bcb3fb229) {
            return;
          }
        }
        if ((longlong)uVar1 < -0x37d20ae0d2c793fa) break;
        if (uVar1 == 0xc82df51f2d386c06) {
          local_a0 = *local_88;
          local_108 = 0x8336391913d13b9b;
          local_110 = 0x44b89d869c0c0726;
        }
        else if (uVar1 == 0x367e53e5fa34093c) {
          thunk_FUN_1801f42e0(local_a8,local_b0);
          local_108 = 0x9dd7c7686539fe5d;
          local_110 = 0x2b5c31e3ae064c74;
        }
      }
      if (uVar1 != 0xc78ea49f8fdd3cbd) break;
      local_48 = local_a0;
      local_b0 = *(longlong *)(param_1 + 0x10) * 0x78;
      local_108 = 0xbcc2524af431b450;
      if (local_b0 < local_d8 || local_b0 - local_d8 == 0) {
        local_108 = 0xc5e540f80e18d619;
      }
      local_110 = 0xf39b131df42cdf25;
      local_a8 = local_a0;
      local_58 = local_b0;
    }
  } while (uVar1 != 0xc2d00f2bd6d04fd0);
LAB_1800e8108:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_fc,local_f8);
}



longlong * FUN_1800e8140(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_101;
  ulonglong local_100;
  ulonglong local_f8;
  uintptr_t local_f0;
  ulonglong local_e8;
  uint local_dc;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong *local_68;
  longlong local_60;
  longlong local_58;
  ulonglong *local_50;
  longlong local_48;

  local_f8 = 0xf0c3a70c680ae5c0;
  local_100 = 0xdc59920cbf0b4fd1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar7 = local_f8 ^ 0xbc1c6d1ba6b65d83;
            uVar6 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0xbc1c6d1ba6b65d83;
            local_f8 = uVar7;
            if (0x235c15985fc96753 < (longlong)uVar6) break;
            if ((longlong)uVar6 < -0x32ec1ffc71e3d33a) {
              if ((longlong)uVar6 < -0x539aaa17530c546c) {
                if (uVar6 == 0x9ba728699b02c7c3) {
                  local_88 = *local_b0;
                  local_90 = local_a0 + local_c0;
                  local_f8 = 0xce4023edc7303a7a;
                  if (local_b8 < local_90) {
                    local_f8 = 0x9014eef73f0ef5bf;
                  }
                  local_100 = 0x25667057cb85b00d;
                  local_70 = local_88;
                }
                else if (uVar6 == 0x8cc4368d695e5826) goto LAB_1800e882e;
              }
              else if (uVar6 == 0xac6555e8acf3ab94) {
                local_78 = *param_1;
                local_80 = local_98 + local_c0;
                local_f8 = 0xaf8eb03c905b8bd7;
                if (local_b8 < local_80) {
                  local_f8 = 0x65fefb101c62841f;
                }
                local_100 = 0x46a2ee8843abe34b;
                local_58 = local_78;
              }
              else if (uVar6 == 0xb5729ea0f48b45b2) {
                local_60 = *(longlong *)(local_70 + -8);
                local_f8 = 0x5b6d116365ae7c93;
                if ((ulonglong)((local_70 + local_d8) - local_60) < local_d0) {
                  local_f8 = 0x1abac7ed82ec0873;
                }
                local_100 = 0xd7a927ee0cf024b5;
              }
            }
            else if ((longlong)uVar6 < -0x16d3a14b2c0f9764) {
              if (uVar6 == 0xcd13e0038e1c2cc6) {
                local_90 = local_a0 + local_c8;
                local_88 = local_60;
                local_f8 = 0x46f3d8779e7bac54;
                local_100 = 0xadd58bcd92ce2623;
              }
              else if (uVar6 == 0xe5b088144620b86b) {
                return param_1;
              }
            }
            else if (uVar6 == 0xe92c5eb4d3f0689c) {
              thunk_FUN_1801f42e0(local_78,local_80);
              local_f8 = 0xe4d90b369bfbe713;
              local_100 = 0xa73e5cece5adf49d;
            }
            else if (uVar6 == 0xeb2653ba0cb58a77) {
              thunk_FUN_1801f42e0(local_88,local_90);
              local_f8 = 0x1db8c2701d376df4;
              local_100 = 0x78a0a6fe553fac3d;
            }
          }
          if ((longlong)uVar6 < 0x5d9d2d59a0f88fb4) break;
          if (uVar6 == 0x5d9d2d59a0f88fb4) {
            local_50 = (ulonglong *)(param_1 + 3);
            local_98 = param_1[3];
            local_f8 = 0x4fb1393774d80df2;
            if (local_e8 < local_98) {
              local_f8 = 0xa0333b05a67db5e8;
            }
            local_100 = 0xc566eed0a8e1e7c;
          }
          else if (uVar6 == 0x6518648e4808c1c9) {
            param_1[6] = local_f0;
            *local_68 = local_e8;
            *(undefined1 *)local_b0 = local_101;
            lVar4 = *local_a8;
            uVar1 = *(undefined4 *)((longlong)local_a8 + 4);
            lVar5 = local_a8[1];
            uVar2 = *(undefined4 *)((longlong)local_a8 + 0xc);
            lVar3 = local_a8[3];
            local_b0[2] = local_a8[2];
            local_b0[3] = lVar3;
            *(int *)local_b0 = (int)lVar4;
            *(undefined4 *)((longlong)local_b0 + 4) = uVar1;
            *(int *)(local_b0 + 1) = (int)lVar5;
            *(undefined4 *)((longlong)local_b0 + 0xc) = uVar2;
            param_2[6] = local_f0;
            param_2[7] = local_e8;
            *(undefined1 *)local_a8 = local_101;
            local_f8 = 0x58561dfa30ba1fa;
            local_100 = 0xe035e9cbe52b1991;
          }
          else if (uVar6 == 0x6e95acc9cd35ffbd) {
            local_80 = local_98 + local_c8;
            local_f8 = 0xc46f9e029c3d8df;
            local_100 = 0xe56aa754fa33b043;
            local_78 = local_48;
          }
        }
        if (0x304eb68f6bc1e457 < (longlong)uVar6) break;
        if (uVar6 == 0x235c15985fc96754) {
          local_48 = *(longlong *)(local_58 + -8);
          local_f8 = 0x25703a7c9d68b176;
          if ((ulonglong)((local_58 + local_d8) - local_48) < local_d0) {
            local_f8 = 0x7bab203a3b9caa93;
          }
          local_100 = 0x153e8cf3f6a9552e;
        }
        else if (uVar6 == 0x2c9a3500d701aa11) {
          local_dc = 0;
          local_101 = 0;
          local_b8 = 0xfff;
          local_c0 = 1;
          local_c8 = 0x28;
          local_e8 = 0xf;
          local_d0 = 0x20;
          local_d8 = -8;
          local_f0 = 0;
          local_f8 = 0x194731817a7c6960;
          if (param_1 == param_2) {
            local_f8 = 0xa16a94cc9ca45ebf;
          }
          local_100 = 0x44da1cd8da84e6d4;
        }
      }
      if (uVar6 != 0x43e757da7e56138e) break;
      param_1[2] = local_f0;
      *local_50 = local_e8;
      *(undefined1 *)param_1 = local_101;
      lVar4 = *param_2;
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      lVar5 = param_2[1];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      lVar3 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar3;
      *(int *)param_1 = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 4) = uVar1;
      *(int *)(param_1 + 1) = (int)lVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      param_2[2] = local_f0;
      param_2[3] = local_e8;
      *(undefined1 *)param_2 = local_101;
      local_b0 = param_1 + 4;
      local_a8 = param_2 + 4;
      local_68 = (ulonglong *)(param_1 + 7);
      local_a0 = param_1[7];
      local_f8 = 0xe67a7e51e24c8795;
      if (local_e8 < local_a0) {
        local_f8 = 0x18c532b63146819f;
      }
      local_100 = 0x83621adfaa44465c;
    }
  } while (uVar6 != 0x304eb68f6bc1e458);
LAB_1800e882e:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_dc,local_f0);
}



longlong FUN_1800e8860(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_191;
  ulonglong local_190;
  ulonglong local_188;
  char local_179;
  uintptr_t local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 *local_160;
  byte local_158;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_128;
  ulonglong local_120;
  longlong local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;

  local_188 = 0x7deff1b8648ed7a2;
  local_190 = 0xa7fbbfe0da0066ed;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar10 = local_188 ^ 0xfb7e652a196dec62;
              uVar8 = local_188 ^ local_190;
              local_190 = local_190 ^ 0xfb7e652a196dec62;
              local_188 = uVar10;
              if (-0x1e611de85b957904 < (longlong)uVar8) break;
              if ((longlong)uVar8 < -0x4e9003ccef304a62) {
                if ((longlong)uVar8 < -0x56feb403ea21b66e) {
                  if (uVar8 == 0x8222fdc9d4e771d4) {
                    local_d0 = (undefined8 *)*param_1;
                    local_188 = 0x68013cfb17fc4538;
                    local_190 = 0x34e28e4c5d6acf39;
                  }
                  else if (uVar8 == 0x9900e35ff5e297c0) {
                    local_188 = 0x3cd01e3455c81272;
                    if (local_179 == '\0') {
                      local_188 = 0xb0778e70b2b242e7;
                    }
                    local_190 = 0x1976c58ca76c0b75;
                    local_108 = local_78;
                    local_b8 = local_110;
                    local_b0 = local_160;
                  }
                }
                else if (uVar8 == 0xa9014bfc15de4992) {
                  local_b0[2] = 0;
                  local_b0[3] = 0;
                  *local_b0 = 0;
                  local_b0[1] = 0;
                  uVar5 = local_b8[1];
                  uVar6 = local_b8[2];
                  uVar7 = local_b8[3];
                  *local_b0 = *local_b8;
                  local_b0[1] = uVar5;
                  local_b0[2] = uVar6;
                  local_b0[3] = uVar7;
                  local_b8[2] = local_178;
                  local_b8[3] = local_170;
                  *(undefined1 *)local_b8 = local_191;
                  local_b0[6] = 0;
                  local_b0[7] = 0;
                  local_b0[4] = 0;
                  local_b0[5] = 0;
                  uVar2 = *(undefined4 *)((longlong)local_b8 + 0x24);
                  uVar3 = *(undefined4 *)(local_b8 + 5);
                  uVar4 = *(undefined4 *)((longlong)local_b8 + 0x2c);
                  uVar5 = local_b8[6];
                  uVar6 = local_b8[7];
                  *(undefined4 *)(local_b0 + 4) = *(undefined4 *)(local_b8 + 4);
                  *(undefined4 *)((longlong)local_b0 + 0x24) = uVar2;
                  *(undefined4 *)(local_b0 + 5) = uVar3;
                  *(undefined4 *)((longlong)local_b0 + 0x2c) = uVar4;
                  local_b0[6] = uVar5;
                  local_b0[7] = uVar6;
                  local_b8[6] = local_178;
                  local_b8[7] = local_170;
                  *(undefined1 *)(local_b8 + 4) = local_191;
                  local_b8 = local_b8 + 8;
                  local_188 = 0x4721f49042b74dc3;
                  if (local_b8 != param_2) {
                    local_188 = 0x2355f8dfabd95c79;
                  }
                  local_b0 = local_b0 + 8;
                  local_190 = 0x8a54b323be0715eb;
                }
                else if (uVar8 == 0xaa09c396517baee1) {
                  local_88 = (undefined8 *)local_68[-1];
                  local_188 = 0x3d4234e0425b0453;
                  if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)local_88))) {
                    local_188 = 0x5973e2528f46bf15;
                  }
                  local_190 = 0x1a777ccf6d65f347;
                }
                else if (uVar8 == 0xaa4506aa39235151) {
                  local_f8[2] = 0;
                  local_f8[3] = 0;
                  *local_f8 = 0;
                  local_f8[1] = 0;
                  uVar5 = local_100[1];
                  uVar6 = local_100[2];
                  uVar7 = local_100[3];
                  *local_f8 = *local_100;
                  local_f8[1] = uVar5;
                  local_f8[2] = uVar6;
                  local_f8[3] = uVar7;
                  local_100[2] = local_178;
                  local_100[3] = local_170;
                  *(undefined1 *)local_100 = local_191;
                  local_f8[6] = 0;
                  local_f8[7] = 0;
                  local_f8[4] = 0;
                  local_f8[5] = 0;
                  uVar2 = *(undefined4 *)((longlong)local_100 + 0x24);
                  uVar3 = *(undefined4 *)(local_100 + 5);
                  uVar4 = *(undefined4 *)((longlong)local_100 + 0x2c);
                  uVar5 = local_100[6];
                  uVar6 = local_100[7];
                  *(undefined4 *)(local_f8 + 4) = *(undefined4 *)(local_100 + 4);
                  *(undefined4 *)((longlong)local_f8 + 0x24) = uVar2;
                  *(undefined4 *)(local_f8 + 5) = uVar3;
                  *(undefined4 *)((longlong)local_f8 + 0x2c) = uVar4;
                  local_f8[6] = uVar5;
                  local_f8[7] = uVar6;
                  local_100[6] = local_178;
                  local_100[7] = local_170;
                  *(undefined1 *)(local_100 + 4) = local_191;
                  local_100 = local_100 + 8;
                  local_188 = 0x8236682b2c94b52b;
                  if (local_100 != param_2) {
                    local_188 = 0xaa519348c15095ae;
                  }
                  local_f8 = local_f8 + 8;
                  local_190 = 0x1495e2f873c4ff;
                }
              }
              else if ((longlong)uVar8 < -0x328ab84c034fa7d8) {
                if (uVar8 == 0xb16ffc3310cfb59e) {
                  local_188 = 0x6f9032640e735b17;
                  if (local_179 == '\0') {
                    local_188 = 0x993686797dc68047;
                  }
                  local_190 = 0x337380d344e5d116;
                  local_100 = local_110;
                  local_f8 = local_160;
                  local_d0 = local_100;
                }
                else if (uVar8 == 0xb1af1f35dd280d6a) {
                  local_98 = local_f0;
                  local_e0 = *local_128 - (longlong)local_f0;
                  local_188 = 0x426f32c81a4f89b7;
                  if (local_e0 < 0x1000) {
                    local_188 = 0x32046b0181c6d5df;
                  }
                  local_190 = 0xe866f15e4b342756;
                  local_d8 = local_f0;
                  local_90 = local_e0;
                  local_68 = local_98;
                }
                else if (uVar8 == 0xbd2effe0a7c1f687) {
                  local_160 = local_138;
                  local_118 = (longlong)local_138 + local_a8;
                  *(undefined8 *)((longlong)local_138 + local_a8) = 0;
                  ((undefined8 *)((longlong)local_138 + local_a8))[1] = 0;
                  *(undefined8 *)((longlong)local_138 + local_a8 + 0x10) = 0;
                  *(undefined8 *)((longlong)local_138 + local_a8 + 0x18) = local_170;
                  puVar1 = (undefined8 *)((longlong)local_138 + local_a8 + 0x20);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)((longlong)local_138 + local_a8 + 0x30) = 0;
                  *(undefined8 *)((longlong)local_138 + local_a8 + 0x38) = local_170;
                  local_78 = (undefined8 *)*local_168;
                  local_110 = (undefined8 *)*param_1;
                  local_179 = local_110 == param_2;
                  local_188 = 0xa681bf3b209ab373;
                  if (param_2 != local_78) {
                    local_188 = 0x8eeea057c5b7912d;
                  }
                  local_190 = 0x17ee4308305506ed;
                }
              }
              else if (uVar8 == 0xcd7547b3fcb05828) {
                local_108 = (undefined8 *)*local_168;
                local_188 = 0x5ec2e2487982dd30;
                local_190 = 0x7b6439f08b26c437;
              }
              else if (uVar8 == 0xda144e58be8eb14f) {
                local_191 = 0;
                local_148 = 0x27;
                local_170 = 0xf;
                local_158 = 6;
                local_178 = 0;
                local_168 = param_1 + 1;
                lVar9 = *param_1;
                local_a8 = (longlong)param_2 - lVar9;
                local_a0 = (param_1[1] - lVar9 >> 6) + 1;
                local_128 = param_1 + 2;
                uVar8 = param_1[2] - lVar9 >> 6;
                local_140 = (uVar8 >> 1) + uVar8;
                if (local_140 <= local_a0) {
                  local_140 = local_a0;
                }
                if (0x3ffffffffffffff - (uVar8 >> 1) < uVar8) {
                  local_140 = 0x3ffffffffffffff;
                }
                local_188 = 0x92f255d7ad847a78;
                if (local_140 < 0x400000000000000) {
                  local_188 = 0xe2ef4301694da256;
                }
                local_190 = 0xac0f0cbb87036ce3;
              }
              else if (uVar8 == 0xda629a5fcaf2f289) {
                thunk_FUN_1801f42e0(local_d8,local_e0);
                local_188 = 0xf588233e2265b927;
                local_190 = 0xe9f8324f0b4ac46;
              }
            }
            if ((longlong)uVar8 < 0x4ee04fbaee4eceb5) break;
            if ((longlong)uVar8 < 0x6dbd14b3fea6c326) {
              if (uVar8 == 0x4ee04fbaee4eceb5) {
                local_120 = local_140 << (local_158 & 0x3f);
                local_188 = 0xfbc39bfa6399a80e;
                if (local_140 != local_178) {
                  local_188 = 0x3e5aef0bea94a339;
                }
                local_190 = 0x46ed641ac4585e89;
                local_138 = (undefined8 *)0x0;
              }
              else if (uVar8 == 0x5b10e69a4ae0059e) {
                local_f0 = (undefined8 *)*param_1;
                local_188 = 0xcafe3520893917c8;
                local_190 = 0x7b512a1554111aa2;
              }
              else if (uVar8 == 0x5ce3b2b74a968a01) {
                local_60 = local_d0;
                local_188 = 0x5bae38242cec24b6;
                if (local_d0 != (undefined8 *)0x0) {
                  local_188 = 0xcd048c8d009bf2f1;
                }
                local_190 = 0xa0b9983efe3d31d7;
              }
            }
            else if (uVar8 == 0x6dbd14b3fea6c326) {
              local_80 = (undefined8 *)*local_168;
              local_e8 = local_60;
              local_188 = 0xadb542571518ae31;
              if (local_60 != local_80) {
                local_188 = 0xfd84bf756c5a25a6;
              }
              local_190 = 0x1c1a5d62c830a35b;
              local_f0 = local_60;
            }
            else if (uVar8 == 0x76b6bc006429ba8b) {
              *(undefined8 *)(local_c0 + 0x50) = 0;
              *(undefined8 *)(local_c0 + 0x58) = 0;
              *(undefined8 *)(local_c0 + 0x40) = 0;
              *(undefined8 *)(local_c0 + 0x48) = 0;
              uVar5 = local_c8[1];
              uVar6 = local_c8[2];
              uVar7 = local_c8[3];
              *(undefined8 *)(local_c0 + 0x40) = *local_c8;
              *(undefined8 *)(local_c0 + 0x48) = uVar5;
              *(undefined8 *)(local_c0 + 0x50) = uVar6;
              *(undefined8 *)(local_c0 + 0x58) = uVar7;
              local_c8[2] = local_178;
              local_c8[3] = local_170;
              *(undefined1 *)local_c8 = local_191;
              *(undefined8 *)(local_c0 + 0x70) = 0;
              *(undefined8 *)(local_c0 + 0x78) = 0;
              *(undefined8 *)(local_c0 + 0x60) = 0;
              *(undefined8 *)(local_c0 + 0x68) = 0;
              uVar2 = *(undefined4 *)((longlong)local_c8 + 0x24);
              uVar3 = *(undefined4 *)(local_c8 + 5);
              uVar4 = *(undefined4 *)((longlong)local_c8 + 0x2c);
              uVar5 = local_c8[6];
              uVar6 = local_c8[7];
              *(undefined4 *)(local_c0 + 0x60) = *(undefined4 *)(local_c8 + 4);
              *(undefined4 *)(local_c0 + 100) = uVar2;
              *(undefined4 *)(local_c0 + 0x68) = uVar3;
              *(undefined4 *)(local_c0 + 0x6c) = uVar4;
              *(undefined8 *)(local_c0 + 0x70) = uVar5;
              *(undefined8 *)(local_c0 + 0x78) = uVar6;
              local_c8[6] = local_178;
              local_c8[7] = local_170;
              *(undefined1 *)(local_c8 + 4) = local_191;
              local_c8 = local_c8 + 8;
              local_188 = 0x3ddf44d208c3594b;
              if (local_c8 != local_70) {
                local_188 = 0xc94b051bb80d9214;
              }
              local_c0 = local_c0 + 0x40;
              local_190 = 0xbffdb91bdc24289f;
            }
            else if (uVar8 == 0x78b78b112eccfdb0) {
              local_188 = 0x22bf2832496577ea;
              if (local_140 < 0x40) {
                local_188 = 0x3139213f19a2183b;
              }
              local_190 = 0x26d3e0866028d896;
            }
          }
          if (0x17eac1b9798ac0ac < (longlong)uVar8) break;
          if (uVar8 == 0xe19ee217a46a86fd) {
            FUN_1800880c0(local_e8);
            local_e8 = local_e8 + 8;
            local_188 = 0x6b96dde0d4f094ea;
            if (local_e8 != local_80) {
              local_188 = 0xd118d96d3a7a1789;
            }
            local_190 = 0x30863b7a9e109174;
          }
          else if (uVar8 == 0x46cc8b4294daf7c) {
            lVar9 = FUN_1801d61c8(local_120 | local_148);
            local_138 = (undefined8 *)(local_148 + lVar9 & 0xffffffffffffffe0);
            local_138[-1] = lVar9;
            local_188 = 0x1b44ba96fa94b504;
            local_190 = 0xa66a45765d554383;
          }
          else if (uVar8 == 0xfb17a01ad2d11561) {
            *param_1 = (longlong)local_160;
            *local_168 = (longlong)(local_160 + local_a0 * 8);
            *local_128 = (longlong)(local_160 + local_140 * 8);
            return local_118;
          }
        }
        if (0x2735482f2f3ef713 < (longlong)uVar8) break;
        if (uVar8 == 0x17eac1b9798ac0ad) {
          local_138 = (undefined8 *)FUN_1801d61c8(local_120);
          local_188 = 0xe0652d034fee0d12;
          local_190 = 0x5d4bd2e3e82ffb95;
        }
        else if (uVar8 == 0x25a6dbb8f2a41907) {
          local_70 = local_108;
          local_188 = 0xbc9d66e0e7369055;
          if (param_2 != local_108) {
            local_188 = 0x4809272957f85b0a;
          }
          local_190 = 0x3ebf9b2933d1e181;
          local_c0 = local_118;
          local_c8 = param_2;
        }
      }
      if (uVar8 != 0x2735482f2f3ef714) break;
      local_e0 = local_90 | local_148;
      local_d8 = local_88;
      local_188 = 0xaa5f56733f81b5b9;
      local_190 = 0x703dcc2cf5734730;
    }
    if (uVar8 == 0x3efd596c2a87169b) break;
    if (uVar8 == 0x43049e9de2234c52) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_178);
    }
  }
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_1800e95e0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;

  local_f0 = 0xf885e0fdae1ea345;
  local_f8 = 0xaaba16d22c4bdaa8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar8 = local_f0 ^ 0x9918d0820dbbe07d;
            uVar5 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0x9918d0820dbbe07d;
            local_f0 = uVar8;
            if (0x15049c1301383565 < (longlong)uVar5) break;
            if ((longlong)uVar5 < -0x33f3b199135dd177) {
              if (uVar5 == 0x9708eb41ee499115) {
                local_e8 = local_88;
                local_d8 = (longlong *)*local_88;
                local_58 = local_88 + 2;
                lVar9 = *local_a0;
                lVar6 = (((ulonglong)*(byte *)((longlong)local_88 + 0x17) ^
                         ((ulonglong)*(byte *)((longlong)local_88 + 0x16) ^
                         ((ulonglong)*(byte *)((longlong)local_88 + 0x15) ^
                         ((ulonglong)*(byte *)((longlong)local_88 + 0x14) ^
                         ((ulonglong)*(byte *)((longlong)local_88 + 0x13) ^
                         ((ulonglong)*(byte *)((longlong)local_88 + 0x12) ^
                         ((ulonglong)*(byte *)((longlong)local_88 + 0x11) ^
                         ((ulonglong)*(byte *)(local_88 + 2) ^ 0xcbf29ce484222325) * local_e0) * local_e0) * local_e0) *
                         local_e0) * local_e0) * local_e0) * local_e0) * local_e0 & *local_70) * 0x10;
                local_98 = (undefined8 *)(lVar9 + lVar6);
                local_c8 = (undefined8 *)(lVar9 + lVar6 + 8);
                local_50 = *(longlong **)(lVar9 + lVar6);
                local_f0 = 0x7c4fbe78c2fb217c;
                if (local_50 == local_d0) {
                  local_f0 = 0xe3357b54e6d1c07a;
                }
                local_f8 = 0x9bee76fa0cd3d2af;
              }
              else if (uVar5 == 0xa7336c84d5033193) {
                local_f0 = 0xcf02c50d15c0a4c4;
                if (local_d8 == local_d0) {
                  local_f0 = 0x8381c4eacfdd01aa;
                }
                local_f8 = 0x580a2e4cfb8935d1;
                local_88 = local_d8;
              }
              else if (uVar5 == 0xbd07cf7909ced4de) {
                lVar9 = *local_48;
                puVar1 = (undefined8 *)local_e8[1];
                *puVar1 = local_d8;
                plVar4 = (longlong *)local_d8[1];
                *plVar4 = lVar9;
                puVar2 = *(undefined8 **)(lVar9 + 8);
                *puVar2 = local_e8;
                *(longlong **)(lVar9 + 8) = plVar4;
                local_d8[1] = (longlong)puVar1;
                local_e8[1] = (longlong)puVar2;
                local_f0 = 0x20f3c5d1753ae5eb;
                local_f8 = 0x87c0a955a039d478;
              }
            }
            else if ((longlong)uVar5 < -0x185e377d31d70c2d) {
              if (uVar5 == 0xcc0c4e66eca22e89) {
                local_78 = (longlong *)*local_68;
                local_f0 = 0xba66f72ae63e81c0;
                if (local_78 == local_e8) {
                  local_f0 = 0xd8f825b2d20b25a3;
                }
                local_f8 = 0xe42e148c9da3a2d3;
              }
              else if (uVar5 == 0xdb8beaa63454347b) {
                return;
              }
            }
            else if (uVar5 == 0xe7a1c882ce28f3d3) {
              local_90 = (longlong *)*local_c8;
              local_60 = *local_58;
              local_f0 = 0xcf6811d9282a647b;
              if (local_60 == local_90[2]) {
                local_f0 = 0x4932e7baf88c9945;
              }
              local_f8 = 0x853ea9dc142eb7cc;
              local_68 = local_90;
            }
            else if (uVar5 == 0xf5c7dbd807a9c40b) {
              local_90 = (longlong *)local_80[1];
              local_f0 = 0x348a7c9f6fbc22a6;
              if (local_60 == local_90[2]) {
                local_f0 = 0xc3db0be35a7625cf;
              }
              local_f8 = 0x7edcc49a53b8f111;
              local_48 = local_90;
            }
          }
          if ((longlong)uVar5 < 0x523ff62f825579ed) break;
          if ((longlong)uVar5 < 0x78db0daeea0212d5) {
            if (uVar5 == 0x523ff62f825579ed) {
              local_e0 = 0x100000001b3;
              local_a8 = 1;
              local_b0 = -1;
              local_a0 = (longlong *)(param_1 + 0x18);
              local_f0 = 0xe5c5e05e970e4c4e;
              if (0x800000000000000 < param_2) {
                local_f0 = 0x802e0f56f3bf30bf;
              }
              local_f8 = 0x9f59cacae62d19e7;
            }
            else if (uVar5 == 0x5e48e3a67b9d2313) {
              puVar1 = (undefined8 *)local_e8[1];
              *puVar1 = local_d8;
              puVar2 = (undefined8 *)local_d8[1];
              *puVar2 = local_78;
              puVar3 = (undefined8 *)local_78[1];
              *puVar3 = local_e8;
              local_78[1] = (longlong)puVar2;
              local_d8[1] = (longlong)puVar1;
              local_e8[1] = (longlong)puVar3;
              local_f0 = 0x9bd30d94aa6432ff;
              local_f8 = 0xa7053caae5ccb58f;
            }
          }
          else if (uVar5 == 0x78db0daeea0212d5) {
            *local_98 = local_e8;
            *local_c8 = local_e8;
            local_f0 = 0x7cf9a6b7cd2e3179;
            local_f8 = 0xdbcaca33182d00ea;
          }
          else if (uVar5 == 0x7a9c2a94712355a9) {
            uVar5 = local_b0 + param_2 | local_a8;
            lVar9 = 0x3f;
            if (uVar5 != 0) {
              for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            bVar7 = 0x40 - ((byte)lVar9 ^ 0x3f);
            lVar9 = local_a8 << (bVar7 & 0x3f);
            local_d0 = *(longlong **)(param_1 + 8);
            FUN_1800e46d0(local_a0,2L << (bVar7 & 0x3f));
            local_70 = (ulonglong *)(param_1 + 0x30);
            *(longlong *)(param_1 + 0x30) = local_b0 + lVar9;
            *(longlong *)(param_1 + 0x38) = lVar9;
            local_88 = (longlong *)**(undefined8 **)(param_1 + 8);
            local_f0 = 0x23e8cd6aa458b298;
            if (local_88 == local_d0) {
              local_f0 = 0x6f6bcc8d7e4517f6;
            }
            local_f8 = 0xb4e0262b4a11238d;
          }
        }
        if ((longlong)uVar5 < 0x3cd6313e4fa88770) break;
        if (uVar5 == 0x3cd6313e4fa88770) {
          *local_c8 = local_e8;
          local_f0 = 0x3d1cb2c68dcad93e;
          local_f8 = 0x9a2fde4258c9e8ad;
        }
        else if (uVar5 == 0x4a56b8053c04d3b7) {
          local_80 = local_90;
          local_f0 = 0xc41b36be0c982ee4;
          if (local_50 == local_90) {
            local_f0 = 0x24d871750a09df89;
          }
          local_f8 = 0x31dced660b31eaef;
        }
      }
      if (uVar5 != 0x15049c1301383566) break;
      puVar1 = (undefined8 *)local_e8[1];
      *puVar1 = local_d8;
      puVar2 = (undefined8 *)local_d8[1];
      *puVar2 = local_80;
      puVar3 = (undefined8 *)local_80[1];
      *puVar3 = local_e8;
      local_80[1] = (longlong)puVar2;
      local_d8[1] = (longlong)puVar1;
      local_e8[1] = (longlong)puVar3;
      *local_98 = local_e8;
      local_f0 = 0x8ed66bab09bd0540;
      local_f8 = 0x29e5072fdcbe34d3;
    }
  } while (uVar5 != 0x1f77c59c15922958);
  FUN_1800eb180(&DAT_1802a3c8c,&DAT_180276f2d,0x11,0x1a,&DAT_1802a3ca8);
  FUN_1801d7524(&DAT_1802a3c8c);
}



undefined8 * FUN_1800e9e00(float *param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;

  uVar8 = ((ulonglong)param_3[7] ^
          ((ulonglong)param_3[6] ^
          ((ulonglong)param_3[5] ^
          ((ulonglong)param_3[4] ^
          ((ulonglong)param_3[3] ^
          ((ulonglong)param_3[2] ^
          ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
  lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != *(undefined8 **)(param_1 + 2)) {
    lVar9 = puVar1[2];
    while (uVar5 = 0, *(longlong *)param_3 != lVar9) {
      puVar10 = puVar1;
      if (puVar1 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800e9f5c;
      puVar1 = (undefined8 *)puVar1[1];
      lVar9 = puVar1[2];
    }
    goto LAB_1800ea135;
  }
LAB_1800e9f5c:
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_1800eb180(&DAT_1802a3c6c,&DAT_180276eed,0x10,0x1b,&DAT_1802a3c88);
    FUN_1801d7524(&DAT_1802a3c6c);
  }
  puVar1 = (undefined8 *)FUN_1801d61c8(0x20);
  puVar1[2] = *(undefined8 *)param_3;
  *(undefined1 *)(puVar1 + 3) = 0;
  uVar3 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar3 < 0) {
    fVar11 = (float)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar3) goto LAB_1800e9ff4;
LAB_1800e9faa:
    if (fVar12 < fVar11 / (float)uVar3) {
LAB_1800ea009:
      fVar12 = (float)FUN_1801eacf0(fVar11 / fVar12);
      uVar4 = (longlong)(fVar12 - 9.223372e+18) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
      uVar2 = 8;
      if (8 < uVar4) {
        uVar2 = uVar4;
      }
      uVar4 = uVar3;
      if (uVar3 < uVar2) {
        uVar4 = uVar3 << 3;
        if (uVar3 << 3 <= uVar2) {
          uVar4 = uVar2;
        }
        if (0x1ff < uVar3) {
          uVar4 = uVar2;
        }
      }
      FUN_1800ea1c0(param_1,uVar4);
      lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
      puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
      puVar10 = *(undefined8 **)(param_1 + 2);
      if (puVar7 != *(undefined8 **)(param_1 + 2)) {
        if (puVar1[2] != puVar7[2]) {
          do {
            puVar10 = puVar7;
            if (puVar7 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800ea0d7;
            puVar7 = (undefined8 *)puVar7[1];
          } while (puVar1[2] != puVar7[2]);
        }
        puVar10 = (undefined8 *)*puVar7;
      }
    }
  }
  else {
    fVar11 = (float)(longlong)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar3 < 0) goto LAB_1800e9faa;
LAB_1800e9ff4:
    if (fVar12 < fVar11 / (float)(longlong)uVar3) goto LAB_1800ea009;
  }
LAB_1800ea0d7:
  puVar7 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar1 = puVar10;
  puVar1[1] = puVar7;
  *puVar7 = puVar1;
  puVar10[1] = puVar1;
  lVar6 = *(longlong *)(param_1 + 6);
  lVar9 = (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar6 + lVar9) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + lVar9) = puVar1;
LAB_1800ea125:
    *(undefined8 **)(lVar6 + 8 + lVar9) = puVar1;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar9) != puVar10) {
      uVar5 = 1;
      if (*(undefined8 **)(lVar6 + 8 + lVar9) != puVar7) goto LAB_1800ea135;
      goto LAB_1800ea125;
    }
    *(undefined8 **)(lVar6 + lVar9) = puVar1;
  }
  uVar5 = 1;
LAB_1800ea135:
  *param_2 = puVar1;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}



void Unwind_1800ea190(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38));
  return;
}



void FUN_1800ea1c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;

  local_f0 = 0xf7364ba3f91324d6;
  local_f8 = 0x361641c278d471dc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar9 = local_f0 ^ 0x4305e0d876a8e142;
            uVar5 = local_f0 ^ local_f8;
            local_f8 = local_f8 ^ 0x4305e0d876a8e142;
            local_f0 = uVar9;
            if ((longlong)uVar5 < 0x5fa95bab4fb84e1) break;
            if ((longlong)uVar5 < 0x34db191f3e0dca02) {
              if ((longlong)uVar5 < 0x1d922f16f73f8ed9) {
                if (uVar5 == 0x5fa95bab4fb84e1) {
                  local_78 = (longlong *)*local_60;
                  local_f0 = 0xcb70b68989bbcff1;
                  if (local_78 == local_e8) {
                    local_f0 = 0x59b42202e9b91614;
                  }
                  local_f8 = 0x44260d141e8698cd;
                }
                else if (uVar5 == 0x9d3b37e99fff564) {
                  local_e8 = local_88;
                  local_d8 = (longlong *)*local_88;
                  local_50 = local_88 + 2;
                  lVar8 = *local_a0;
                  lVar6 = (((ulonglong)*(byte *)((longlong)local_88 + 0x17) ^
                           ((ulonglong)*(byte *)((longlong)local_88 + 0x16) ^
                           ((ulonglong)*(byte *)((longlong)local_88 + 0x15) ^
                           ((ulonglong)*(byte *)((longlong)local_88 + 0x14) ^
                           ((ulonglong)*(byte *)((longlong)local_88 + 0x13) ^
                           ((ulonglong)*(byte *)((longlong)local_88 + 0x12) ^
                           ((ulonglong)*(byte *)((longlong)local_88 + 0x11) ^
                           ((ulonglong)*(byte *)(local_88 + 2) ^ 0xcbf29ce484222325) * local_e0) * local_e0) * local_e0)
                           * local_e0) * local_e0) * local_e0) * local_e0) * local_e0 & *local_70) * 0x10;
                  local_98 = (undefined8 *)(lVar8 + lVar6);
                  local_c8 = (undefined8 *)(lVar8 + lVar6 + 8);
                  local_48 = *(longlong **)(lVar8 + lVar6);
                  local_f0 = 0x5503a4d45119dd1a;
                  if (local_48 == local_d0) {
                    local_f0 = 0x76acabbc87beec86;
                  }
                  local_f8 = 0xb2d495261202ef3b;
                }
              }
              else if (uVar5 == 0x1d922f16f73f8ed9) {
                *local_c8 = local_e8;
                local_f0 = 0x437aad7838506966;
                local_f8 = 0x729707011652dd84;
              }
              else if (uVar5 == 0x31edaa792e02b4e2) {
                local_f0 = 0x52b57b17e2697c46;
                if (local_d8 == local_d0) {
                  local_f0 = 0xca23ebb5e3f19bca;
                }
                local_f8 = 0x5b66c8697b968922;
                local_88 = local_d8;
              }
            }
            else if ((longlong)uVar5 < 0x59a4b21ab8c97948) {
              if (uVar5 == 0x42042b33a714f45b) {
                local_80 = local_90;
                local_f0 = 0x4e25a1f5be0adcd;
                if (local_48 == local_90) {
                  local_f0 = 0x80e34f80875658d1;
                }
                local_f8 = 0x7ff92f4ad7031492;
              }
              else if (uVar5 == 0x34db191f3e0dca02) {
                FUN_1800eb180(&DAT_1802a3c8c,&DAT_180276f2d,0x11,0x1a,&DAT_1802a3ca8);
                FUN_1801d7524(&DAT_1802a3c8c);
              }
            }
            else if (uVar5 == 0x59a4b21ab8c97948) {
              uVar5 = local_b0 + param_2 | local_a8;
              lVar8 = 0x3f;
              if (uVar5 != 0) {
                for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              bVar7 = 0x40 - ((byte)lVar8 ^ 0x3f);
              lVar8 = local_a8 << (bVar7 & 0x3f);
              local_d0 = *(longlong **)(param_1 + 8);
              FUN_1800e3370(local_a0,2L << (bVar7 & 0x3f));
              local_70 = (ulonglong *)(param_1 + 0x30);
              *(longlong *)(param_1 + 0x30) = local_b0 + lVar8;
              *(longlong *)(param_1 + 0x38) = lVar8;
              local_88 = (longlong *)**(undefined8 **)(param_1 + 8);
              local_f0 = 0x4a97bad01f9d6352;
              if (local_88 == local_d0) {
                local_f0 = 0xd2012a721e0584de;
              }
              local_f8 = 0x434409ae86629636;
            }
            else if (uVar5 == 0x7b1b75558ce3b95f) {
              local_90 = (longlong *)local_80[1];
              local_f0 = 0xa1c23426fea6a715;
              if (local_58 == local_90[2]) {
                local_f0 = 0x6062772486ba29f5;
              }
              local_f8 = 0xe3c61f1559b2534e;
              local_68 = local_90;
            }
          }
          if ((longlong)uVar5 < -0x3b87c1656a43fc43) break;
          if (uVar5 == 0xc4783e9a95bc03bd) {
            *local_98 = local_e8;
            *local_c8 = local_e8;
            local_f0 = 0x92e5e76522443032;
            local_f8 = 0xa3084d1c0c4684d0;
          }
          else if (uVar5 == 0xe7d731f2431b3221) {
            local_90 = (longlong *)*local_c8;
            local_58 = *local_50;
            local_f0 = 0x5f64255943a1eac2;
            if (local_58 == local_90[2]) {
              local_f0 = 0x189a9bd0504e9a78;
            }
            local_f8 = 0x1d600e6ae4b51e99;
            local_60 = local_90;
          }
          else if (uVar5 == 0xff1a60ca50554c43) {
            puVar2 = (undefined8 *)local_e8[1];
            *puVar2 = local_d8;
            puVar3 = (undefined8 *)local_d8[1];
            *puVar3 = local_80;
            puVar4 = (undefined8 *)local_80[1];
            *puVar4 = local_e8;
            local_80[1] = (longlong)puVar3;
            local_d8[1] = (longlong)puVar2;
            local_e8[1] = (longlong)puVar4;
            *local_98 = local_e8;
            local_f0 = 0x24eeeea039be9a36;
            local_f8 = 0x150344d917bc2ed4;
          }
        }
        if (-0x6ebadc236798ed19 < (longlong)uVar5) break;
        if (uVar5 == 0x83a46831df087abb) {
          lVar8 = *local_68;
          puVar2 = (undefined8 *)local_e8[1];
          *puVar2 = local_d8;
          plVar1 = (longlong *)local_d8[1];
          *plVar1 = lVar8;
          puVar3 = *(undefined8 **)(lVar8 + 8);
          *puVar3 = local_e8;
          *(longlong **)(lVar8 + 8) = plVar1;
          local_d8[1] = (longlong)puVar2;
          local_e8[1] = (longlong)puVar3;
          local_f0 = 0x7d77115f2f6fedb6;
          local_f8 = 0x4c9abb26016d5954;
        }
        else if (uVar5 == 0x8f56bb9d973d573c) {
          puVar2 = (undefined8 *)local_e8[1];
          *puVar2 = local_d8;
          puVar3 = (undefined8 *)local_d8[1];
          *puVar3 = local_78;
          puVar4 = (undefined8 *)local_78[1];
          *puVar4 = local_e8;
          local_78[1] = (longlong)puVar3;
          local_d8[1] = (longlong)puVar2;
          local_e8[1] = (longlong)puVar4;
          local_f0 = 0xf4204fdc03de8ebf;
          local_f8 = 0xe9b260caf4e10066;
        }
      }
      if (uVar5 != 0xc1200a6181c7550a) break;
      local_e0 = 0x100000001b3;
      local_a8 = 1;
      local_b0 = -1;
      local_a0 = (longlong *)(param_1 + 0x18);
      local_f0 = 0xdefead964dd0450f;
      if (0x800000000000000 < param_2) {
        local_f0 = 0xb3810693cb14f645;
      }
      local_f8 = 0x875a1f8cf5193c47;
    }
  } while (uVar5 != 0x914523dc986712e8);
  return;
}



undefined8 * FUN_1800ea9e0(float *param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;

  uVar9 = ((ulonglong)param_3[7] ^
          ((ulonglong)param_3[6] ^
          ((ulonglong)param_3[5] ^
          ((ulonglong)param_3[4] ^
          ((ulonglong)param_3[3] ^
          ((ulonglong)param_3[2] ^
          ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
  lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
  puVar8 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != *(undefined8 **)(param_1 + 2)) {
    lVar10 = puVar1[2];
    while (uVar5 = 0, *(longlong *)param_3 != lVar10) {
      puVar8 = puVar1;
      if (puVar1 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800eab4c;
      puVar1 = (undefined8 *)puVar1[1];
      lVar10 = puVar1[2];
    }
    goto LAB_1800ead27;
  }
LAB_1800eab4c:
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_1800eb180(&DAT_1802a3c6c,&DAT_180276eed,0x10,0x1b,&DAT_1802a3c88);
    FUN_1801d7524(&DAT_1802a3c6c);
  }
  puVar1 = (undefined8 *)FUN_1801d61c8(0x20);
  puVar1[2] = *(undefined8 *)param_3;
  puVar1[3] = *param_4;
  uVar3 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar3 < 0) {
    fVar11 = (float)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar3) goto LAB_1800eabe4;
LAB_1800eab9a:
    if (fVar12 < fVar11 / (float)uVar3) {
LAB_1800eabf9:
      fVar12 = (float)FUN_1801eacf0(fVar11 / fVar12);
      uVar4 = (longlong)(fVar12 - 9.223372e+18) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
      uVar2 = 8;
      if (8 < uVar4) {
        uVar2 = uVar4;
      }
      uVar4 = uVar3;
      if (uVar3 < uVar2) {
        uVar4 = uVar3 << 3;
        if (uVar3 << 3 <= uVar2) {
          uVar4 = uVar2;
        }
        if (0x1ff < uVar3) {
          uVar4 = uVar2;
        }
      }
      FUN_1800e95e0(param_1,uVar4);
      lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10;
      puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
      puVar8 = *(undefined8 **)(param_1 + 2);
      if (puVar7 != *(undefined8 **)(param_1 + 2)) {
        if (puVar1[2] != puVar7[2]) {
          do {
            puVar8 = puVar7;
            if (puVar7 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800eacc7;
            puVar7 = (undefined8 *)puVar7[1];
          } while (puVar1[2] != puVar7[2]);
        }
        puVar8 = (undefined8 *)*puVar7;
      }
    }
  }
  else {
    fVar11 = (float)(longlong)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar3 < 0) goto LAB_1800eab9a;
LAB_1800eabe4:
    if (fVar12 < fVar11 / (float)(longlong)uVar3) goto LAB_1800eabf9;
  }
LAB_1800eacc7:
  puVar7 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar1 = puVar8;
  puVar1[1] = puVar7;
  *puVar7 = puVar1;
  puVar8[1] = puVar1;
  lVar6 = *(longlong *)(param_1 + 6);
  lVar10 = (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar6 + lVar10) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + lVar10) = puVar1;
LAB_1800ead17:
    *(undefined8 **)(lVar6 + 8 + lVar10) = puVar1;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar10) != puVar8) {
      uVar5 = 1;
      if (*(undefined8 **)(lVar6 + 8 + lVar10) != puVar7) goto LAB_1800ead27;
      goto LAB_1800ead17;
    }
    *(undefined8 **)(lVar6 + lVar10) = puVar1;
  }
  uVar5 = 1;
LAB_1800ead27:
  *param_2 = puVar1;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}



void Unwind_1800ead80(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30));
  return;
}



undefined8 * FUN_1800eadc0(float *param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;

  uVar8 = ((ulonglong)param_3[7] ^
          ((ulonglong)param_3[6] ^
          ((ulonglong)param_3[5] ^
          ((ulonglong)param_3[4] ^
          ((ulonglong)param_3[3] ^
          ((ulonglong)param_3[2] ^
          ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
  lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != *(undefined8 **)(param_1 + 2)) {
    lVar9 = puVar1[2];
    while (uVar5 = 0, *(longlong *)param_3 != lVar9) {
      puVar10 = puVar1;
      if (puVar1 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800eaf1c;
      puVar1 = (undefined8 *)puVar1[1];
      lVar9 = puVar1[2];
    }
    goto LAB_1800eb0f5;
  }
LAB_1800eaf1c:
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_1800eb180(&DAT_1802a3c6c,&DAT_180276eed,0x10,0x1b,&DAT_1802a3c88);
    FUN_1801d7524(&DAT_1802a3c6c);
  }
  puVar1 = (undefined8 *)FUN_1801d61c8(0x20);
  puVar1[2] = *(undefined8 *)param_3;
  *(undefined1 *)(puVar1 + 3) = 0;
  uVar3 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar3 < 0) {
    fVar11 = (float)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar3) goto LAB_1800eafb4;
LAB_1800eaf6a:
    if (fVar12 < fVar11 / (float)uVar3) {
LAB_1800eafc9:
      fVar12 = (float)FUN_1801eacf0(fVar11 / fVar12);
      uVar4 = (longlong)(fVar12 - 9.223372e+18) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
      uVar2 = 8;
      if (8 < uVar4) {
        uVar2 = uVar4;
      }
      uVar4 = uVar3;
      if (uVar3 < uVar2) {
        uVar4 = uVar3 << 3;
        if (uVar3 << 3 <= uVar2) {
          uVar4 = uVar2;
        }
        if (0x1ff < uVar3) {
          uVar4 = uVar2;
        }
      }
      FUN_1800ea1c0(param_1,uVar4);
      lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10;
      puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
      puVar10 = *(undefined8 **)(param_1 + 2);
      if (puVar7 != *(undefined8 **)(param_1 + 2)) {
        if (puVar1[2] != puVar7[2]) {
          do {
            puVar10 = puVar7;
            if (puVar7 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800eb097;
            puVar7 = (undefined8 *)puVar7[1];
          } while (puVar1[2] != puVar7[2]);
        }
        puVar10 = (undefined8 *)*puVar7;
      }
    }
  }
  else {
    fVar11 = (float)(longlong)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar3 < 0) goto LAB_1800eaf6a;
LAB_1800eafb4:
    if (fVar12 < fVar11 / (float)(longlong)uVar3) goto LAB_1800eafc9;
  }
LAB_1800eb097:
  puVar7 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar1 = puVar10;
  puVar1[1] = puVar7;
  *puVar7 = puVar1;
  puVar10[1] = puVar1;
  lVar6 = *(longlong *)(param_1 + 6);
  lVar9 = (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar6 + lVar9) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + lVar9) = puVar1;
LAB_1800eb0e5:
    *(undefined8 **)(lVar6 + 8 + lVar9) = puVar1;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar9) != puVar10) {
      uVar5 = 1;
      if (*(undefined8 **)(lVar6 + 8 + lVar9) != puVar7) goto LAB_1800eb0f5;
      goto LAB_1800eb0e5;
    }
    *(undefined8 **)(lVar6 + lVar9) = puVar1;
  }
  uVar5 = 1;
LAB_1800eb0f5:
  *param_2 = puVar1;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}



void Unwind_1800eb150(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38));
  return;
}



void FUN_1800eb180(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x153d2fea74d0b7e1;
  local_68 = 0xe528ef071c147949;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xc16e5bb900548a55;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xc16e5bb900548a55;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0xfea3f12973b3158) break;
          if (uVar1 == 0x7976bac79bcab0f9) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x18f8517734780a1a;
            local_68 = 0x9459fb633e0065c9;
          }
          else if (uVar1 == 0x1f59d5b3178c2da1) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xfe0072e2ba245121;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x47d0bb0c83c8c368;
            }
            local_68 = 0x8776c82521eee1d8;
          }
          else if (uVar1 == 0xf015c0ed68c4cea8) {
            local_60 = 0x631b9ba7c1df2399;
            if (*param_5 == 1) {
              local_60 = 0xee9f4c0ebe9f6484;
            }
            local_68 = 0x7c424e14d6530e38;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < -0x3f598cd65dd9dd50) break;
        if (uVar1 == 0xc0a67329a22622b0) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x402a3437b7202ee0;
          local_68 = 0xcc8b9e23bd584133;
        }
        else if (uVar1 == 0xd2ea619686207bf1) {
          *param_5 = 1;
          local_60 = 0x28406f144ade8b03;
          local_68 = 0xba9d6d0e2212e1bf;
        }
      }
      if (uVar1 != 0x8ca1aa140a786fd3) break;
      local_6a = local_6b ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6a;
      local_54 = local_4c + 1;
      local_60 = 0xeeb1e2c11d47f9d0;
      if (local_54 == param_4) {
        local_60 = 0x230256e48cebaf80;
      }
      local_68 = 0xf1e837720acbd471;
    }
  } while (uVar1 != 0x92dd021a68cc6abc);
  return;
}



undefined * FUN_1800eb430(void)

{
  return &DAT_180276f58;
}



float FUN_1800eb440(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;

  local_70 = 0x71097d14776ba569;
  local_78 = 0x11af65f2df145e7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_70 ^ 0xd3e7650bc0bd9283;
            uVar1 = local_70 ^ local_78;
            local_78 = local_78 ^ 0xd3e7650bc0bd9283;
            local_70 = uVar2;
            if (-0x2e2a7b5dc02b8856 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x578ccbe28b8427a5) {
              if (uVar1 == 0x965803a6852947f8) {
                local_70 = 0xaa4800f5df9311d;
                local_78 = 0x16034c80002decc5;
              }
              else if (uVar1 == 0x987f56a2cdb5ce8e) {
                local_48 = local_50 * 100;
                local_70 = 0x9baae218ad4f546b;
                local_78 = 0x4a7f66ba929b23c0;
              }
              else if (uVar1 == 0xa06167ce0501bb36) {
                FUN_1801d62d8(&DAT_1802a3cb8);
                local_70 = 0x48367f69d7b2f0a5;
                if (DAT_1802a3cb8 == -1) {
                  local_70 = 0x62bf1cb6ea68273c;
                }
                local_78 = 0x822a4f00e1c4551d;
              }
            }
            else if (uVar1 == 0xa873341d747bd85b) {
              local_70 = 0x3208bd0fd4cb0037;
              if ((longlong)local_68 < 24000000) {
                local_70 = 0xc73680cd6b48c8bd;
              }
              local_78 = 0x335c82b135ef5ece;
            }
            else if (uVar1 == 0xbdf61c48d771bb10) {
              if ((local_50 | local_58) >> 0x20 == 0) {
                uVar1 = (local_50 & 0xffffffff) / (local_58 & 0xffffffff);
              }
              else {
                uVar1 = (longlong)local_50 / (longlong)local_58;
              }
              if ((local_50 | local_58) >> 0x20 == 0) {
                uVar2 = (local_50 & 0xffffffff) % (local_58 & 0xffffffff);
              }
              else {
                uVar2 = (longlong)local_50 % (longlong)local_58;
              }
              uVar2 = uVar2 * local_60;
              if ((uVar2 | local_58) >> 0x20 == 0) {
                uVar2 = (uVar2 & 0xffffffff) / (local_58 & 0xffffffff);
              }
              else {
                uVar2 = (longlong)uVar2 / (longlong)local_58;
              }
              local_48 = uVar2 + uVar1 * local_60;
              local_70 = 0xa05dfa1a6f81cb03;
              local_78 = 0x71887eb85055bca8;
            }
            else if (uVar1 == 0xca1c30693676a5b8) {
              local_68 = FUN_1801da1cc();
              local_50 = FUN_1801da1b0();
              local_70 = 0x69ca6c7712fe79f2;
              local_78 = 0xc1b9586a6685a1a9;
            }
          }
          if ((longlong)uVar1 < 0x1543fbee1245ef9) break;
          if (uVar1 == 0x1543fbee1245ef9) {
            local_70 = 0x4384e8a53a41981f;
            if (local_68 == 24000000) {
              local_70 = 0x682af74b681964f7;
            }
            local_78 = 0xd5dceb03bf68dfe7;
          }
          else if (uVar1 == 0x1ca7cc8f5dd4ddd8) {
            if ((local_50 | local_68) >> 0x20 == 0) {
              uVar1 = (local_50 & 0xffffffff) / (local_68 & 0xffffffff);
              uVar2 = (local_50 & 0xffffffff) % (local_68 & 0xffffffff);
            }
            else {
              uVar1 = (longlong)local_50 / (longlong)local_68;
              uVar2 = (longlong)local_50 % (longlong)local_68;
            }
            uVar2 = uVar2 * local_60;
            if ((uVar2 | local_68) >> 0x20 == 0) {
              uVar2 = (uVar2 & 0xffffffff) / (local_68 & 0xffffffff);
            }
            else {
              uVar2 = (longlong)uVar2 / (longlong)local_68;
            }
            local_48 = uVar2 + uVar1 * local_60;
            local_70 = 0xe8574a4afeba7dfa;
            local_78 = 0x3982cee8c16e0a51;
          }
          else if (uVar1 == 0x70138b4b5a9ae08e) {
            local_58 = 24000000;
            local_60 = 1000000000;
            local_70 = 0xddd826225078347d;
            if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
                DAT_1802a3cb8) {
              local_70 = 0xb7a57185630f2af3;
            }
            local_78 = 0x17c4164b660e91c5;
          }
        }
        if (uVar1 != 0xe09553b60bac7221) break;
        FUN_1800eb960(&DAT_1802a3cb0);
        _Init_thread_footer(&DAT_1802a3cb8);
        local_70 = 0x7b8e5fef71607d02;
        local_78 = 0xb1926f864716d8ba;
      }
      if (uVar1 != 0xf46a027c5ea79673) break;
      local_70 = 0x5f04d5110ed420bc;
      if (local_68 == 10000000) {
        local_70 = 0x512380154648a9ca;
      }
      local_78 = 0xc95cd6b78bfd6744;
    }
  } while (uVar1 != 0xd1d584a23fd477ab);
  return (float)(local_48 - _DAT_1802a3cb0) / 1e+09;
}



void FUN_1800eb960(longlong *param_1)

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

  local_78 = 0xd14c259483fc761b;
  local_80 = 0x8b8f5dfd40599217;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_78 ^ 0x595728a8c95a1b01;
            uVar1 = local_78 ^ local_80;
            local_80 = local_80 ^ 0x595728a8c95a1b01;
            local_78 = uVar2;
            if ((longlong)uVar1 < 0x5ac37869c3a5e40c) break;
            if ((longlong)uVar1 < 0x6548372043fe5be8) {
              if (uVar1 == 0x5ac37869c3a5e40c) {
                local_60 = 24000000;
                local_68 = 1000000000;
                local_70 = FUN_1801da1cc();
                local_58 = FUN_1801da1b0();
                local_78 = 0x26043242542bc16b;
                local_80 = 0x434c056217d59a83;
              }
              else if (uVar1 == 0x5fe58dc608b990cd) {
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
                local_78 = 0x8c34cd50fdbf8cd7;
                local_80 = 0x108b47799d8ca3c1;
              }
            }
            else if (uVar1 == 0x6548372043fe5be8) {
              local_78 = 0xea4dd46f28a08d60;
              if ((longlong)local_70 < 24000000) {
                local_78 = 0xbef4fc33562d37f8;
              }
              local_80 = 0x72a2626a8fec2859;
            }
            else if (uVar1 == 0x7544f9270c7209ee) {
              local_78 = 0xbd2d9958ea667ce3;
              local_80 = 0xecbc275f95da2339;
            }
          }
          if ((longlong)uVar1 < 0x15ea4d20faf403df) break;
          if (uVar1 == 0x15ea4d20faf403df) {
            local_50 = local_58 * 100;
            local_78 = 0xb5945ae882dd845b;
            local_80 = 0x292bd0c1e2eeab4d;
          }
          else if (uVar1 == 0x5191be077fbc5fda) {
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
            local_78 = 0x9b6c3619004c24e5;
            local_80 = 0x7d3bc30607f0bf3;
          }
        }
        if (uVar1 != 0x98efb605a74ca539) break;
        local_78 = 0xfa9c22050f3172e9;
        if (local_70 == 24000000) {
          local_78 = 0xd03d56e40bfaebca;
        }
        local_80 = 0x8fd8db2203437b07;
      }
      if (uVar1 != 0xcc569e59d9c11fa1) break;
      local_78 = 0x6f5c3b787166f135;
      if (local_70 == 10000000) {
        local_78 = 0xff28f7f87e0fb04;
      }
      local_80 = 0x1a18c25f7d14f8db;
    }
  } while (uVar1 != 0x9cbf8a2960332f16);
  *param_1 = local_50;
  return;
}



void FUN_1800ebd70(void)

{
  ulonglong uVar1;
  float fVar2;
  ulonglong local_58;
  ulonglong local_50;
  float local_48;
  float local_44;

  local_50 = 0x729474dc8ec6490;
  local_58 = 0xca858f7c3254f140;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xa44198e79c5f43ed;
        if (-0xa4f4f3593e752ea < (longlong)uVar1) break;
        if (uVar1 == 0xcdacc831fab895d0) {
          local_44 = 0.001;
          local_48 = 0.06666667;
          local_50 = 0xa27c10b274921ae9;
          if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
              DAT_1802a3cc0) {
            local_50 = 0x4a7a430967ae492;
          }
          local_58 = 0xf11714fafa624985;
        }
        else {
          local_50 = local_50 ^ 0xa44198e79c5f43ed;
          if (uVar1 == 0xf51cbd363df1caa9) {
            _DAT_1802a3cbc = (float)FUN_1800eb440();
            _Init_thread_footer(&DAT_1802a3cc0);
            local_50 = 0x305100bc4bed12d7;
            local_58 = 0x633a04f4c51d41bb;
          }
        }
      }
      if (uVar1 != 0xf5b0b0ca6c18ad17) break;
      FUN_1801d62d8(&DAT_1802a3cc0);
      local_50 = 0xeb56e5ec2f359eab;
      if (DAT_1802a3cc0 == -1) {
        local_50 = 0x4d215c929c34076e;
      }
      local_58 = 0xb83de1a4a1c5cdc7;
    }
    local_50 = local_50 ^ 0xa44198e79c5f43ed;
  } while (uVar1 != 0x536b04488ef0536c);
  fVar2 = (float)FUN_1800eb440();
  _DAT_1802a3cbc = fVar2 - _DAT_1802a3cbc;
  DAT_180277004 =
       (uint)local_48 & -(uint)(local_48 < _DAT_1802a3cbc) |
       ~-(uint)(local_48 < _DAT_1802a3cbc) &
       ((uint)local_44 & -(uint)(_DAT_1802a3cbc < local_44) | ~-(uint)(_DAT_1802a3cbc < local_44) & (uint)_DAT_1802a3cbc
       );
  _DAT_1802a3cbc = fVar2;
  return;
}



undefined4 FUN_1800ebf90(void)

{
  return DAT_180277004;
}



void FUN_1800ebfa0(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  float local_7c;
  ulonglong local_78;
  ulonglong local_70;

  local_70 = 0x9317c3a043578b3f;
  local_78 = 0xdb7cdacfcc50f025;
  do {
    while( true ) {
      while( true ) {
        uVar7 = local_70 ^ local_78;
        local_78 = local_78 ^ 0x20bc8aa5c17c2791;
        if (uVar7 != 0x486b196f8f077b1a) break;
        local_70 = 0x3821302357903e78;
        if (param_3 < 1) {
          local_70 = 0xa8470a17beddc637;
        }
        local_78 = 0x4e89f4edf6e0a41b;
        local_7c = 0.0;
      }
      if (uVar7 != 0x76a8c4cea1709a63) break;
      local_7c = (float)FUN_1801ebe20((float)param_3 * 0.17,0x3f19999a);
      local_70 = 0xb05000ba92337650;
      local_78 = 0x569efe40da0e147c;
    }
    local_70 = local_70 ^ 0x20bc8aa5c17c2791;
  } while (uVar7 != 0xe6cefefa483d622c);
  fVar1 = *(float *)(param_1 + 0x54);
  fVar2 = *(float *)(param_1 + 0x58);
  fVar3 = *(float *)(param_1 + 0x5c);
  fVar4 = *(float *)(param_1 + 100);
  fVar5 = *(float *)(param_1 + 0x68);
  fVar6 = *(float *)(param_1 + 0x6c);
  *param_2 = local_7c * (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x50)) + *(float *)(param_1 + 0x50);
  param_2[1] = local_7c * (fVar4 - fVar1) + fVar1;
  param_2[2] = local_7c * (fVar5 - fVar2) + fVar2;
  param_2[3] = local_7c * (fVar6 - fVar3) + fVar3;
  return;
}



void FUN_1800ec140(longlong param_1,undefined8 *param_2,int param_3,float param_4)

{
  ulonglong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  ulonglong local_98;
  ulonglong local_90;
  undefined4 local_7c;
  undefined8 extraout_XMM0_Qb;

  local_90 = 0x3bd7877daaa80722;
  local_98 = 0xd5f73fecf9598bb5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x3705f559a2c70c38;
          if ((longlong)uVar1 < 0x202e47d3050040c8) break;
          if (uVar1 == 0x202e47d3050040c8) {
            local_90 = 0x441d2c1bccde3a40;
            if (local_ac < 240.0) {
              local_90 = 0xa068abba7737555;
            }
            local_98 = 0x6431f1dd0b0b506;
            local_a8 = local_b0;
            local_a4 = local_9c;
            local_a0 = local_b4;
          }
          else if (uVar1 == 0x2482108dd211eccc) {
            local_90 = 0xa2ef4353a9cda94d;
            if (local_ac < 120.0) {
              local_90 = 0x292d4efef2cd2081;
            }
            local_98 = 0x2568db58850ee0d2;
            local_a8 = local_9c;
            local_a4 = local_b4;
            local_a0 = local_b0;
          }
          else {
            local_90 = local_90 ^ 0x3705f559a2c70c38;
            if (uVar1 == 0x425e33061c6e8f46) {
              local_a0 = local_b4;
              if (300.0 <= local_ac) {
                local_a0 = local_9c;
              }
              local_a8 = (float)(~-(uint)(local_ac < 300.0) & (uint)local_b4 |
                                (uint)local_9c & -(uint)(local_ac < 300.0));
              local_90 = 0xbbc3c278b9731187;
              local_98 = 0xb78657deceb0d1d4;
              local_a4 = local_b0;
            }
          }
        }
        if (uVar1 != 0x8787980b2cc3499f) break;
        local_90 = 0x2b5f0ab668cf3134;
        if (local_ac < 180.0) {
          local_90 = 0x734d8c31a0cb1af;
        }
        local_98 = 0xb714d656dcf71fc;
        local_a8 = local_b0;
        local_a4 = local_b4;
        local_a0 = local_9c;
      }
      if (uVar1 != 0xee20b89153f18c97) break;
      local_b0 = 0.0;
      local_b4 = 0.55;
      auVar3._0_8_ = FUN_1800eb440();
      auVar3._8_8_ = extraout_XMM0_Qb;
      auVar4._4_12_ = auVar3._4_12_;
      auVar4._0_4_ = (float)auVar3._0_8_ * *(float *)(param_1 + 0xa8) + (float)param_3 * param_4;
      local_7c = *(undefined4 *)(param_1 + 0x5c);
      fVar2 = (float)FUN_1801ebe20(auVar4._0_8_);
      local_ac = (float)((uint)(fVar2 + 360.0) & -(uint)(fVar2 < 0.0) | ~-(uint)(fVar2 < 0.0) & (uint)fVar2);
      fVar2 = (float)FUN_1801ebe20(0x2e36a1ba,0x40000000,local_ac / 60.0);
      local_a4 = (1.0 - ABS(fVar2 + -1.0)) * 0.55;
      local_a8 = 0.55;
      local_a0 = 0.0;
      local_90 = 0xb37db42380f4b64e;
      if (local_ac < 60.0) {
        local_90 = 0x9bba310825269ad1;
      }
      local_98 = 0x97ffa4ae52e55a82;
      local_9c = local_a4;
    }
    local_90 = local_90 ^ 0x3705f559a2c70c38;
  } while (uVar1 != 0xc4595a677c3c053);
  *param_2 = CONCAT44(local_a4 + 0.45,local_a8 + 0.45);
  *(float *)(param_2 + 1) = local_a0 + 0.45;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_7c;
  return;
}



void FUN_1800ec5c0(longlong param_1)

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



void Unwind_1800ec700(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800ec730(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;

  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x30);
  local_28 = 0x27;
  local_20 = 0x2f;
  local_38 = puVar6;
  FUN_1800ed85c(&DAT_1802a3cd0,&DAT_18027708b,0x17,0x28,&DAT_1802a3cf8);
  *(ulonglong *)((longlong)puVar6 + 0x1f) = CONCAT71(DAT_1802a3cef._1_7_,(undefined1)DAT_1802a3cef);
  uVar1 = CONCAT17((undefined1)DAT_1802a3cef,uRam00000001802a3ce8);
  *(undefined8 *)(puVar6 + 4) = _DAT_1802a3ce0;
  *(undefined8 *)(puVar6 + 6) = uVar1;
  uVar4 = uRam00000001802a3cdc;
  uVar3 = uRam00000001802a3cd8;
  uVar2 = uRam00000001802a3cd4;
  *puVar6 = _DAT_1802a3cd0;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined1 *)((longlong)puVar6 + 0x27) = 0;
  FUN_1800ec970(&PTR_PTR_180277008,&local_38,lVar5 + 0x35e6b0,FUN_1800ecd50);
  return 1;
}



undefined1 FUN_1800ec830(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x4dbe1ef35f8fd064;
  local_68 = 0x64bf97cd573be209;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x63b6812954d7eed0;
        if (uVar1 != 0x2901893e08b4326d) break;
        local_60 = 0x95bbc4bec7d98420;
        if (*(char *)(param_1 + 0x38) != '\0') {
          local_60 = 0xf24c87055b3afca8;
        }
        local_68 = 0xd810400c981a416c;
        local_69 = 1;
      }
      if (uVar1 != 0x2a5cc709c320bdc4) break;
      local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      local_60 = 0x9871c93da17f1ba0;
      local_68 = 0xd5da4d8ffebcdeec;
    }
    local_60 = local_60 ^ 0x63b6812954d7eed0;
  } while (uVar1 != 0x4dab84b25fc3c54c);
  return local_69;
}



ulonglong FUN_1800ec970(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 local_4c;
  uintptr_t local_48;
  undefined1 local_39;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_90 = 0x28;
  local_50 = 0;
  local_88 = 4;
  local_39 = 0;
  local_4c = 4;
  local_80 = 0x20;
  local_78 = 0xfff;
  local_70 = 1;
  local_48 = 0;
  local_58 = 0xf;
  local_68 = -8;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800eccf9;
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
    FUN_1800ed85c(&DAT_1802a3cfc,&DAT_1802770de,0x1b,0x19,&DAT_1802a3d18);
    local_d8 = &DAT_1802a3cfc;
    local_d0 = 0x18;
    FUN_1800ed85c(&DAT_1802a3d1c,&DAT_18027712f,0x11,5,&DAT_1802a3d24);
    local_c8 = &DAT_1802a3d1c;
    local_c0 = local_88;
    FUN_1800ed150(local_4c,&local_c8,&local_d8,plVar1);
LAB_1800ecca7:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800ecce7;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800ed85c(&DAT_1802a3d28,&DAT_18027715e,0x1e,0x22,&DAT_1802a3d4c);
      local_b8 = &DAT_1802a3d28;
      local_b0 = 0x21;
      FUN_1800ed85c(&DAT_1802a3d1c,&DAT_18027712f,0x11,5,&DAT_1802a3d24);
      local_a8 = &DAT_1802a3d1c;
      local_a0 = local_88;
      FUN_1800ed3e0(local_4c,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800ecca7;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800ecce7;
  }
  lVar10 = *local_60;
  uVar13 = local_70 + uVar9;
  lVar11 = lVar10;
  if (local_78 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_80 <= (ulonglong)((lVar10 + local_68) - lVar11)) {
LAB_1800eccf9:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_48);
    }
    uVar13 = uVar9 + local_90;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800ecce7:
  return uVar12 & 0xffffffff;
}



void Unwind_1800ecd20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800ecd50(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  ulonglong local_58;
  longlong local_50;
  undefined8 *local_48;

  local_98 = 0xf60dee4ef3fd1798;
  local_a0 = 0xcbc7c4f9b30ef760;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_98 ^ 0x7ea6ff708be2081d;
          uVar2 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x7ea6ff708be2081d;
          local_98 = uVar3;
          if (0x4891a1bf69f18bda < (longlong)uVar2) break;
          if ((longlong)uVar2 < 0x6e7a1f373688453) {
            if (uVar2 == 0xc6aef8fc76ef23cd) {
              local_80 = local_50 + 1;
              local_98 = 0x8b0757ec69c838bb;
              if (local_80 == local_88) {
                local_98 = 0x2b73f2aaf1a712ea;
              }
              local_a0 = 0x63e2531598569931;
              local_90 = param_2;
            }
            else if (uVar2 == 0xe8e504f9f19ea18a) {
              local_50 = local_80;
              local_98 = 0x94c3bfac4031a2ae;
              if (*(char *)((longlong)local_48 + local_80) < '\0') {
                local_98 = 0x1afce6ef5f2f0ab8;
              }
              local_a0 = 0x526d475036de8163;
              local_90 = (undefined8 *)&DAT_180215d18;
            }
          }
          else if (uVar2 == 0x6e7a1f373688453) {
            local_88 = param_2[2];
            local_58 = param_2[3];
            local_98 = 0xe76049d8d5a6a290;
            if (local_88 - 1U < local_58) {
              local_98 = 0xf22fc9417e02bebf;
            }
            local_a0 = 0xaff1e867bc57294b;
            local_90 = param_2;
          }
          else if (uVar2 == 0x3dca2ab740f3e0f8) {
            cVar1 = FUN_1801b3c30(param_2,0x20);
            local_98 = 0xbd347522ab1ad04f;
            if (cVar1 != '\0') {
              local_98 = 0xf342756eb183dfc7;
            }
            local_a0 = 0xf5a5d49dc2eb5b94;
            local_90 = param_2;
          }
        }
        if ((longlong)uVar2 < 0x5dde2126c25597f4) break;
        if (uVar2 == 0x5dde2126c25597f4) {
          local_98 = 0x9b32546bd54f675d;
          if (local_58 < 0x10) {
            local_98 = 0xb3fb8ff169f82339;
          }
          local_a0 = 0xeb8aab51aec940b8;
          local_78 = param_2;
        }
        else if (uVar2 == 0x70b8ff3a7b8627e5) {
          local_78 = (undefined8 *)*param_2;
          local_98 = 0x559e21b95a7d5bc3;
          local_a0 = 0xdef05199d4c3842;
        }
      }
      if (uVar2 != 0x587124a0c7316381) break;
      local_48 = local_78;
      cVar1 = FUN_1801b3c30(local_78,local_88);
      local_98 = 0xe29b2f9a37419f3b;
      if (cVar1 != '\0') {
        local_98 = 0x42ef8adcaf2eb56a;
      }
      if (local_78 == (undefined8 *)0x0) {
        local_98 = 0xe29b2f9a37419f3b;
      }
      local_a0 = 0xaa0a8e255eb014e0;
      local_80 = 0;
      local_90 = param_2;
    }
  } while (uVar2 != 0x4891a1bf69f18bdb);
  (*DAT_180277038)(param_1,local_90,param_3);
  return;
}



void FUN_1800ed150(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  local_80 = 1;
  local_50 = 0;
  local_48 = 0xf;
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



void Unwind_1800ed360(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1800ed3a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void FUN_1800ed3e0(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 local_f0 [8];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 ***local_88;
  uintptr_t local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_58 = 0;
  local_50 = 0xf;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_98 = *param_3;
    local_90 = param_3[1];
    local_c0 = param_4;
    if (local_50 < (ulonglong)param_4[3]) {
      local_c0 = (undefined8 *)*param_4;
    }
    local_b8 = param_4[2];
    local_d0 = 0xc000000000000000;
    local_b0 = *param_5;
    local_c8 = 0x4000000000000010;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_50;
    if (local_50 < (ulonglong)(local_b8 + local_90 + 8)) {
      FUN_180002240(&local_78);
      local_68 = local_58;
    }
    local_a8 = 2;
    local_a0 = &local_d0;
    FUN_180003080(local_f0,&local_78,&local_98,&local_a8,local_58);
    local_88 = &local_78;
    if (local_50 < local_60) {
      local_88 = local_78;
    }
    local_80 = local_68;
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_e8,&local_88);
    if (local_50 < local_60) {
      uVar4 = local_60 + 1;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_58);
        }
        uVar4 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_1800ed630(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_1800ed670(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



undefined8 FUN_1800ed6b0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xf85fdc1678aa5fd4;
  local_50 = 0x4789bc635119812e;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x8423727345c84ef5;
        if (uVar1 != 0xbfd6607529b3defa) break;
        FUN_1800ec5c0(param_1);
        local_48 = 0xd2b3283c8d76955;
        if ((param_2 & 1) == 0) {
          local_48 = 0x6046cf4012b1202d;
        }
        local_50 = 0x5a37b7c1f9f0e923;
      }
      if (uVar1 != 0x571c854231278076) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0xf0f0c6a43effb3b9;
      local_50 = 0xca81be25d5be7ab7;
    }
    local_48 = local_48 ^ 0x8423727345c84ef5;
  } while (uVar1 != 0x3a717881eb41c90e);
  return param_1;
}



void FUN_1800ed800(void)

{
  atexit((_func_5014 *)&LAB_1800ec720);
  FUN_1800ed85c(&DAT_1802a3cc5,&DAT_180277063,0x13,5,&DAT_1802a3ccc);
  FUN_1800f0070(&DAT_1802a3cc4,&DAT_1802a3cc5,FUN_1800ec730);
  return;
}



void FUN_1800ed85c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x3f1121fc6e204234;
  local_68 = 0x6c024e1d86cdfa47;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x23284587a541ddfe;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x23284587a541ddfe;
          local_60 = uVar2;
          if (0x31b8cce2574dfbd6 < (longlong)uVar1) break;
          if (uVar1 == 0xcf2d129d7f9a74f4) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x5fab3fd907827411;
            local_68 = 0x1cf8836cd82215b7;
          }
          else if (uVar1 == 0xdb87d362e28f88cf) {
            local_6a = ~(local_6c + local_69 ^ local_6d);
            local_60 = 0x588242532f719ef4;
            local_68 = 0x1bd1fee6f0d1ff52;
          }
          else if (uVar1 == 0xf4f89779e9104d4b) {
            *param_5 = 1;
            local_60 = 0x9144faaa8c378952;
            local_68 = 0xa0fc3648db7a7285;
          }
        }
        if ((longlong)uVar1 < 0x53136fe1e8edb873) break;
        if (uVar1 == 0x76edb980c2166752) {
          local_69 = local_6b;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x3d98645d933d5b1b;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0x2932a5a20e28a720;
          }
          local_68 = 0xf2b576c0eca72fef;
        }
        else if (uVar1 == 0x53136fe1e8edb873) {
          local_60 = 0x53e78fcf7c97211f;
          if (*param_5 == 1) {
            local_60 = 0x14b2faade9ccbd9a;
          }
          local_68 = 0x250a364fbe81464d;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x4353bcb5dfa061a6) break;
      local_6b = local_6a ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6b;
      local_54 = local_4c + 1;
      local_60 = 0x6ea3137a9ac5bded;
      if (local_54 == param_4) {
        local_60 = 0xecb63d83b1c397f4;
      }
      local_68 = 0x184eaafa58d3dabf;
    }
  } while (uVar1 != 0x31b8cce2574dfbd7);
  return;
}



void FUN_1800edb10(longlong param_1)

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



void Unwind_1800edc50(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800edc80(void)

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

  DAT_1802a3d54 = 0x3f800000;
  _DAT_1802a3d58 = 0x3f800000;
  lVar5 = FUN_1801b2b70();
  local_30 = 0;
  puVar6 = (undefined4 *)FUN_1801d61c8(0x20);
  local_28 = 0x1b;
  local_20 = 0x1f;
  local_38 = puVar6;
  FUN_1800ee68c(&DAT_1802a3d6c,&DAT_180278130,0x17,0x1c,&DAT_1802a3d88);
  uVar4 = uRam00000001802a3d7f;
  *(ulonglong *)((longlong)puVar6 + 0xb) = CONCAT35(uRam00000001802a3d7c,CONCAT41(uRam00000001802a3d78,DAT_1802a3d77));
  *(undefined8 *)((longlong)puVar6 + 0x13) = uVar4;
  uVar3 = uRam00000001802a3d78;
  uVar2 = uRam00000001802a3d74;
  uVar1 = uRam00000001802a3d70;
  *puVar6 = _DAT_1802a3d6c;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  *(undefined1 *)((longlong)puVar6 + 0x1b) = 0;
  FUN_1800edf00(&PTR_PTR_180278090,&local_38,lVar5 + 0x5b6830,FUN_1800ee2e0);
  return 1;
}



void FUN_1800edd90(int param_1,undefined4 param_2)

{
  (&DAT_1802a3d54)[param_1] = param_2;
  return;
}



void FUN_1800edda0(undefined4 param_1)

{
  DAT_1802a3d5c = param_1;
  return;
}



undefined4 FUN_1800eddb0(void)

{
  return DAT_1802780d0;
}



undefined4 FUN_1800eddc0(void)

{
  return DAT_1802a3d60;
}



undefined1 FUN_1800eddd0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;

  local_60 = 0x369ca19009e5f07;
  local_68 = 0x268c0fde2ce1915f;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0xe8f6365a63e3c888;
        if (uVar1 != 0x1a0a10e868e9a933) break;
        local_69 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        local_60 = 0xeadc7d814269f326;
        local_68 = 0x244df599215dde81;
      }
      if (uVar1 != 0x25e5c5c72c7fce58) break;
      local_60 = 0x58fd3e4bbd99c970;
      if (*(char *)(param_1 + 0x38) != '\0') {
        local_60 = 0x8c66a6bbb6444de4;
      }
      local_68 = 0x966cb653deade4d7;
      local_69 = 1;
    }
    local_60 = local_60 ^ 0xe8f6365a63e3c888;
  } while (uVar1 != 0xce91881863342da7);
  return local_69;
}



ulonglong FUN_1800edf00(longlong param_1,longlong *param_2,uintptr_t param_3,undefined8 param_4)

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
  ulonglong local_90;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
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
  local_90 = 0xfff;
  local_88 = 4;
  local_48 = 0;
  local_80 = 0x20;
  local_39 = 0;
  local_50 = 4;
  local_78 = -8;
  local_70 = 0x28;
  local_4c = 0;
  local_68 = 1;
  local_58 = 0xf;
  plVar1 = (longlong *)(param_1 + 8);
  local_98 = param_3;
  if (plVar1 != param_2) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar9) {
      lVar10 = *plVar1;
      uVar12 = uVar9 + 1;
      if (0xfff < uVar12) {
        if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) goto LAB_1800ee289;
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
    FUN_1800ee68c(&DAT_1802a3d8c,&DAT_180278178,0x1d,0x19,&DAT_1802a3da8);
    local_d8 = &DAT_1802a3d8c;
    local_d0 = 0x18;
    FUN_1800ee68c(&DAT_1802a3dac,&DAT_1802781c8,0x1c,5,&DAT_1802a3db4);
    local_c8 = &DAT_1802a3dac;
    local_c0 = local_88;
    FUN_1800ed150(local_50,&local_c8,&local_d8,plVar1);
LAB_1800ee237:
    uVar12 = 0;
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800ee277;
  }
  else {
    *(uintptr_t *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 == '\0') {
      FUN_1800ee68c(&DAT_1802a3db8,&DAT_180278200,0x15,0x22,&DAT_1802a3ddc);
      local_b8 = &DAT_1802a3db8;
      local_b0 = 0x21;
      FUN_1800ee68c(&DAT_1802a3dac,&DAT_1802781c8,0x1c,5,&DAT_1802a3db4);
      local_a8 = &DAT_1802a3dac;
      local_a0 = local_88;
      FUN_1800ed3e0(local_50,&local_a8,&local_b8,plVar1,&local_98);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_1800ee237;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar8 = FUN_180181700();
    uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_180182360(uVar8,param_1);
    uVar9 = local_60[3];
    if (uVar9 <= local_58) goto LAB_1800ee277;
  }
  lVar10 = *local_60;
  uVar13 = local_68 + uVar9;
  lVar11 = lVar10;
  if (local_90 < uVar13) {
    lVar11 = *(longlong *)(lVar10 + -8);
    if (local_80 <= (ulonglong)((lVar10 + local_78) - lVar11)) {
LAB_1800ee289:
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_48);
    }
    uVar13 = uVar9 + local_70;
  }
  thunk_FUN_1801f42e0(lVar11,uVar13);
LAB_1800ee277:
  return uVar12 & 0xffffffff;
}



void Unwind_1800ee2b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



void FUN_1800ee2e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;

  local_68 = 0x281b5fac99d1c550;
  local_70 = 0x3d68f7ff5f0da7ce;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_68 ^ 0x313cb7dd5c086090;
        uVar1 = local_68 ^ local_70;
        local_70 = local_70 ^ 0x313cb7dd5c086090;
        local_68 = uVar2;
        if ((longlong)uVar1 < 0x58f7408debe87ddb) break;
        if (uVar1 == 0x58f7408debe87ddb) {
          DAT_1802780d0 = DAT_1802a3d54 * _DAT_1802a3d58 * local_60;
          local_68 = 0x2338f0d12c012d96;
          local_70 = 0x666e5e8dfc1673be;
          DAT_1802a3d60 = param_2;
        }
        else if (uVar1 == 0x6a6f7d4a954845a5) {
          local_68 = 0x3688223814acbb68;
          if (DAT_1802a3d5c <= 0.0) {
            local_68 = 0x2b29cce92f53989b;
          }
          if (local_60 <= 69.0) {
            local_68 = 0x2b29cce92f53989b;
          }
          if (71.0 <= local_60) {
            local_68 = 0x2b29cce92f53989b;
          }
          local_70 = 0x73de8c64c4bbe540;
        }
      }
      if (uVar1 != 0x1573a853c6dc629e) break;
      local_60 = (float)(*DAT_1802780c0)(param_1,uVar2,param_3);
      local_68 = 0xf2e1e58645b69f9c;
      if ((char)param_3 != '\0') {
        local_68 = 0xc079d8413b16a7e2;
      }
      local_70 = 0x988e98ccd0feda39;
    }
  } while (uVar1 != 0x4556ae5cd0175e28);
  return;
}



undefined8 FUN_1800ee4e0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x2c4d635e75e0fa51;
  local_50 = 0xad94db700e88eaf4;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x1b9e1a5931d14c66;
        if (uVar1 != 0x81d9b82e7b6810a5) break;
        FUN_1800edb10(param_1);
        local_48 = 0x1fbf573ea1a16a4e;
        if ((param_2 & 1) == 0) {
          local_48 = 0x7f481e5f9bff496f;
        }
        local_50 = 0x3feed89f0845d4a2;
      }
      if (uVar1 != 0x20518fa1a9e4beec) break;
      thunk_FUN_1801f42e0(param_1,0x40);
      local_48 = 0x297712c6b5752c9e;
      local_50 = 0x69d1d40626cfb153;
    }
    local_48 = local_48 ^ 0x1b9e1a5931d14c66;
  } while (uVar1 != 0x40a6c6c093ba9dcd);
  return param_1;
}



void FUN_1800ee630(void)

{
  atexit((_func_5014 *)&LAB_1800edc70);
  FUN_1800ee68c(&DAT_1802a3d64,&DAT_1802780f7,0x1b,4,&DAT_1802a3d68);
  FUN_1800f0070(&DAT_1802a3d50,&DAT_1802a3d64,FUN_1800edc80);
  return;
}



void FUN_1800ee68c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xc98ff412e7f77e5d;
  local_68 = 0x312dbe4a92ba472c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x683c2a677d9e4783;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x683c2a677d9e4783;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x283ed0c272919297) break;
          if (uVar1 == 0x283ed0c272919297) {
            local_6b = local_6a ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6b;
            local_54 = local_4c + 1;
            local_60 = 0x17a3999101690fb7;
            if (local_54 == param_4) {
              local_60 = 0xe65882df89533d7c;
            }
            local_68 = 0x2ede1e944a65fa6a;
          }
          else if (uVar1 == 0x397d87054b0cf5dd) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x3e06aa151231d6c9;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0xcc7ada48ff2ac74b;
            }
            local_68 = 0x7018926413bb10c1;
          }
          else if (uVar1 == 0x4e1e3871018ac608) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x44fad2f399b2c7bc;
            local_68 = 0x6cc40231eb23552b;
          }
        }
        if ((longlong)uVar1 < -0x377963b43cc938ea) break;
        if (uVar1 == 0xc8869c4bc336c716) {
          *param_5 = 1;
          local_60 = 0xa72d7a5a96a8cb17;
          local_68 = 0x63313ad752a555b1;
        }
        else if (uVar1 == 0xf8a24a58754d3971) {
          local_60 = 0x7ac4b9b9b5c92b1e;
          if (*param_5 == 1) {
            local_60 = 0x87a57e313ac84065;
          }
          local_68 = 0x43b93ebcfec5dec3;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0xbc62482cec91d78a) break;
      local_6a = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0xd5b65ff96ac49510;
      local_68 = 0xfd888f3b18550787;
    }
  } while (uVar1 != 0xc41c408dc40d9ea6);
  return;
}



void FUN_1800ee940(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;

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
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar5,uVar4);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void Unwind_1800eea00(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_1800eeac0(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 local_188;
  undefined4 uStack_181;
  undefined5 uStack_17d;
  undefined8 local_178;
  undefined8 local_170;
  undefined6 local_168;
  undefined2 uStack_162;
  undefined6 local_160;
  undefined2 uStack_15a;
  undefined8 local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48 [7];
  undefined ***local_10;

  lVar2 = FUN_1801b2b70();
  local_60 = 0;
  local_68 = (char *)FUN_1801d61c8(0x20);
  local_58 = 0x15;
  local_50 = 0x1f;
  builtin_strncpy(local_68,"MinecraftGame::update",0x16);
  cVar1 = FUN_1800ef070(&PTR_PTR_180279178,&local_68,lVar2 + 0x1312f0,FUN_1800ef2b0);
  if (cVar1 != '\0') {
    lVar2 = FUN_1801b2b70();
    local_80 = 0;
    local_88 = (char *)FUN_1801d61c8(0x20);
    local_78 = 0x17;
    local_70 = 0x1f;
    builtin_strncpy(local_88,"LocalPlayer::normalTick",0x18);
    cVar1 = FUN_1800ef070(&PTR_PTR_1802791f8,&local_88,lVar2 + 0x4aa600,FUN_1800ef3e0);
    if (cVar1 != '\0') {
      lVar2 = FUN_1801b2b70();
      local_a0 = 0;
      local_a8 = (char *)FUN_1801d61c8(0x20);
      local_98 = 0x18;
      local_90 = 0x1f;
      builtin_strncpy(local_a8,"InGamePlayScreen::render",0x19);
      cVar1 = FUN_1800ef070(&PTR_PTR_1802792b8,&local_a8,lVar2 + 0x3528c0,FUN_1800ef4e0);
      if (cVar1 != '\0') {
        lVar2 = FUN_1801b2b70();
        local_c0 = 0;
        local_c8 = (char *)FUN_1801d61c8(0x20);
        local_b8 = 0x16;
        local_b0 = 0x1f;
        builtin_strncpy(local_c8,"ClientInstance::onTick",0x17);
        FUN_1800ef070(&PTR_PTR_1802791b8,&local_c8,lVar2 + 0x11b2d0,FUN_1800ef540);
        lVar2 = FUN_1801b2b70();
        uStack_15a = 0;
        local_158 = 0xe;
        local_150 = 0xf;
        local_168 = 0x6f4d656d6147;
        uStack_162 = 0x6564;
        local_160 = 0x6b6369743a3a;
        FUN_1800ef070(&PTR_PTR_180279238,&local_168,lVar2 + 0xa5b930,FUN_1800ef580);
        lVar2 = FUN_1801b2b70();
        uStack_17d = 0;
        local_178 = 0xb;
        local_170 = 0xf;
        local_188 = 0x3a3a6c6576654c;
        uStack_181 = 0x6b636974;
        FUN_1800ef070(&PTR_PTR_180279278,&local_188,lVar2 + 0xb9f660,FUN_1800ef600);
        lVar2 = FUN_1801b2b70();
        local_e0 = 0;
        local_e8 = (char *)FUN_1801d61c8(0x20);
        local_d8 = 0x10;
        local_d0 = 0x1f;
        builtin_strncpy(local_e8,"GameMode::attack",0x11);
        FUN_1800ef070(&PTR_PTR_180279338,&local_e8,lVar2 + 0xa59e20,FUN_1800ef620);
        lVar2 = FUN_1801b2b70();
        local_100 = 0;
        local_108 = (char *)FUN_1801d61c8(0x20);
        local_f8 = 0x1a;
        local_f0 = 0x1f;
        builtin_strncpy(local_108,"LoopbackPacketSender::send",0x1b);
        FUN_1800ef070(&PTR_PTR_180279378,&local_108,lVar2 + 0x77abc0,FUN_1800ef6d0);
        lVar2 = FUN_1801b2b70();
        local_120 = 0;
        local_128 = (char *)FUN_1801d61c8(0x20);
        local_118 = 0x19;
        local_110 = 0x1f;
        builtin_strncpy(local_128,"ClientInstance::leaveGame",0x1a);
        FUN_1800ef070(&PTR_PTR_1802793b8,&local_128,lVar2 + 0x119c80,FUN_1800ef770);
        lVar2 = FUN_1801b2b70();
        local_140 = 0;
        local_148 = (char *)FUN_1801d61c8(0x20);
        local_138 = 0x1d;
        local_130 = 0x1f;
        builtin_strncpy(local_148,"MinecraftGame::updateGraphics",0x1e);
        FUN_1800ef070(&PTR_PTR_1802792f8,&local_148,lVar2 + 0x131d00,FUN_1800ef850);
        uVar3 = FUN_180177800();
        local_48[0] = &PTR_LAB_180216200;
        local_10 = local_48;
        FUN_1801778f0(uVar3);
        FUN_180177970(uVar3);
        return 1;
      }
    }
  }
  return 0;
}



undefined8 FUN_1800eefa0(void)

{
  return DAT_1802a3e30;
}



undefined8 FUN_1800eefb0(void)

{
  return DAT_1802a3e38;
}



undefined8 FUN_1800eefc0(void)

{
  return DAT_1802a3e40;
}



undefined8 FUN_1800eefd0(void)

{
  return DAT_1802a3e48;
}



undefined8 FUN_1800eefe0(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;

  DAT_1802a3e50 = 1;
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      if ((DAT_1802a3e51 & 1) != 0) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      Sleep(5);
      uVar1 = (int)uVar2 + 5;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_1);
  }
  return 0;
}



undefined8 FUN_1800ef030(longlong param_1)

{
  undefined8 uVar1;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar1 = FUN_180183190(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    return uVar1;
  }
  return 1;
}



ulonglong FUN_1800ef070(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  char *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 8);
  local_48 = param_3;
  if (plVar1 != param_2) {
    uVar13 = *(ulonglong *)(param_1 + 0x20);
    if (0xf < uVar13) {
      lVar11 = *plVar1;
      uVar8 = uVar13 + 1;
      if (0xfff < uVar8) {
        if (0x1f < (ulonglong)((lVar11 + -8) - *(longlong *)(lVar11 + -8))) goto LAB_1800ef25f;
        uVar8 = uVar13 + 0x28;
        lVar11 = *(longlong *)(lVar11 + -8);
      }
      thunk_FUN_1801f42e0(lVar11,uVar8);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    *(undefined1 *)(param_1 + 8) = 0;
    lVar11 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar12 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x18) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = (int)lVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(int *)plVar1 = (int)lVar11;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)lVar12;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  local_40 = param_2;
  if (param_3 == 0) {
    local_88 = "{}: null target, skipped";
    local_80 = 0x18;
    local_78 = &DAT_180216118;
    local_70 = 4;
    FUN_1800ed150(4,&local_78,&local_88);
    uVar13 = 0;
LAB_1800ef1ad:
    uVar8 = local_40[3];
  }
  else {
    *(longlong *)(param_1 + 0x28) = param_3;
    cVar7 = FUN_180182740(param_3,param_4,param_1 + 0x30);
    if (cVar7 != '\0') {
      *(undefined1 *)(param_1 + 0x38) = 1;
      uVar9 = FUN_180181700();
      uVar13 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      FUN_180182360(uVar9,param_1);
      goto LAB_1800ef1ad;
    }
    local_68 = "{}: MinHook rejected target {:#x}";
    local_60 = 0x21;
    local_58 = &DAT_180216118;
    local_50 = 4;
    FUN_1800ed3e0(4,&local_58,&local_68,plVar1,&local_48);
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar13 = 0;
    uVar8 = local_40[3];
  }
  if (0xf < uVar8) {
    lVar11 = *local_40;
    uVar10 = uVar8 + 1;
    lVar12 = lVar11;
    if (0xfff < uVar10) {
      lVar12 = *(longlong *)(lVar11 + -8);
      if (0x1f < (ulonglong)((lVar11 + -8) - lVar12)) {
LAB_1800ef25f:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = uVar8 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar12,uVar10);
  }
  return uVar13 & 0xffffffff;
}



void Unwind_1800ef280(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x78));
  return;
}



void FUN_1800ef2b0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [35];
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_38;
  LOCK();
  lVar1 = DAT_1802a3e40 + 1;
  UNLOCK();
  if ((DAT_1802a3de1 == '\0') && (899 < DAT_1802a3e40 + 1U)) {
    DAT_1802a3de1 = '\x01';
    DAT_1802a3e40 = lVar1;
    uVar2 = FUN_180177800();
    FUN_180178490(uVar2);
    lVar1 = DAT_1802a3e40;
  }
  DAT_1802a3e40 = lVar1;
  if (((DAT_1802a3e50 & 1) != 0) && ((DAT_1802a3e51 & 1) == 0)) {
    FUN_18017d590("teardown",FUN_1800ef980,&local_15);
    DAT_1802a3e51 = 1;
  }
  if ((DAT_1802a3e51 & 1) == 0) {
    FUN_1801723b0();
    FUN_18017d590("input poll",FUN_1800ef9a0,&local_14);
    FUN_18017d590("deferred grab",&LAB_1800ef9c0,&local_13);
    FUN_18017d590("menu cursor",&LAB_1800ef9d0,&local_12);
    FUN_18017d590("cursor heal",&LAB_1800ef9e0,&local_11);
  }
  (*DAT_1802791a8)(param_1);
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
}



void FUN_1800ef3e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_58;
  LOCK();
  DAT_1802a3e38 = DAT_1802a3e38 + 1;
  UNLOCK();
  plVar2 = (longlong *)FUN_180179ff0();
  local_28 = param_1;
  lVar3 = FUN_1800c32a0();
  if (*(char *)(lVar3 + 0x210) == '\x01') {
    FUN_1800f56a0();
    lVar3 = plVar2[1];
    plVar2[1] = param_1;
    lVar1 = *plVar2;
  }
  else {
    lVar3 = plVar2[1];
    plVar2[1] = param_1;
    lVar1 = *plVar2;
  }
  if (lVar1 == 0) {
    *plVar2 = *(longlong *)(param_1 + 0x15f0);
  }
  if ((lVar3 != param_1) && (plVar2[3] != 0)) {
    local_38 = &local_28;
    local_30 = plVar2;
    FUN_18017d590("WorldJoinEvent",FUN_1800ef9f0,&local_38);
  }
  local_20 = &local_28;
  FUN_18017d590("TickEvent",FUN_1800efaa0,&local_20);
  (*DAT_180279228)(param_1);
  if (DAT_1802a0400 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
}



void FUN_1800ef4e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;

  LOCK();
  DAT_1802a3e30 = DAT_1802a3e30 + 1;
  UNLOCK();
  plVar2 = (longlong *)FUN_180179ff0();
  plVar2[4] = param_2;
  if (*plVar2 == 0) {
    cVar1 = FUN_1801b3c30(param_1,0x38);
    if (cVar1 != '\0') {
      *plVar2 = *(longlong *)(param_1 + 0x30);
    }
  }
  (*DAT_1802792e8)(param_1,param_2);
  return;
}



void FUN_1800ef540(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;

  plVar1 = (longlong *)FUN_180179ff0();
  if (*plVar1 != param_1) {
    *plVar1 = param_1;
  }
  (*DAT_1802791e8)(param_1,param_2,param_3);
  return;
}



void FUN_1800ef580(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_38;
  lVar1 = FUN_180179ff0();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  if (*(longlong *)(lVar1 + 8) != 0) {
    local_18 = lVar1;
    FUN_18017d590("GameTickEvent",FUN_1800efb70,&local_18);
  }
  (*DAT_180279268)(param_1);
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
}



void FUN_1800ef600(undefined8 param_1)

{
  longlong lVar1;

  lVar1 = FUN_180179ff0();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  (*_DAT_1802792a8)(param_1);
  return;
}



void FUN_1800ef620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  char local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  ulonglong local_20;

  local_20 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  lVar1 = FUN_180179ff0();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  lVar1 = FUN_1800c32a0();
  if (*(char *)(lVar1 + 0x210) == '\0') {
    local_40[0] = '\0';
    local_28 = local_40;
    local_38 = param_2;
    local_30 = param_3;
    FUN_18017d590("AttackEvent",FUN_1800efc40,&local_28);
    if (local_40[0] == '\0') {
      (*DAT_180279368)(param_1,param_2,local_30);
    }
  }
  if (DAT_1802a0400 == (local_20 ^ (ulonglong)auStack_68)) {
    return;
  }
}



void FUN_1800ef6d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  char *local_38;
  char local_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  local_30[0] = '\0';
  local_20 = 0;
  local_40 = &local_18;
  local_38 = local_30;
  local_28 = param_2;
  local_18 = param_2;
  FUN_18017d590("PacketSendEvent",FUN_1800efcd0,&local_40);
  if (local_30[0] == '\0') {
    (*DAT_1802793a8)(param_1,local_18);
  }
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_68)) {
    return;
  }
}



void FUN_1800ef770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;

  local_18 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  local_19 = 0;
  uVar1 = FUN_1800ba260();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3e14) {
    FUN_1801d62d8(&DAT_1802a3e14);
    if (DAT_1802a3e14 == -1) {
      DAT_1802a3e10 = DAT_1802a3dec;
      DAT_1802a3dec = DAT_1802a3dec + 1;
      _Init_thread_footer(&DAT_1802a3e14);
    }
  }
  FUN_1800bc160(uVar1,DAT_1802a3e10,&local_19);
  uVar1 = FUN_180179ff0();
  FUN_18017a120(uVar1);
  (*DAT_1802793e8)(param_1);
  if (DAT_1802a0400 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
}



void FUN_1800ef850(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_38;
  (*DAT_180279328)();
  uVar3 = DAT_1802a3e40;
  cVar4 = FUN_180172380();
  if (cVar4 == '\0') {
    DAT_1802a3e18 = uVar3;
  }
  else {
    if (uVar3 <= DAT_1802a3e18 + 0x78) goto LAB_1800ef954;
    uVar5 = FUN_180177800();
    FUN_180178470(uVar5,"Present intercepted but no frames came out of it");
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(char *)(lVar2 + 8) == '\0') && ((DAT_1802a3e51 & 1) == 0)) {
    puVar1 = (undefined1 *)(lVar2 + 8);
    *puVar1 = 1;
    LOCK();
    DAT_1802a3e48 = DAT_1802a3e48 + 1;
    UNLOCK();
    FUN_1800ebd70();
    fVar6 = (float)FUN_1800eb440();
    LOCK();
    UNLOCK();
    if ((0.0 <= DAT_1802793f8) && (0.5 < fVar6 - DAT_1802793f8)) {
      DAT_1802a3e20 = 3;
    }
    DAT_1802793f8 = fVar6;
    if (DAT_1802a3e20 < 1) {
      FUN_1801723b0();
      FUN_18017d590("Render2DEvent",FUN_1800efd90,&local_11);
    }
    else {
      DAT_1802a3e20 = DAT_1802a3e20 + -1;
    }
    *puVar1 = 0;
  }
LAB_1800ef954:
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
}



void FUN_1800ef980(void)

{
  undefined8 uVar1;

  uVar1 = FUN_1800c32a0();
  FUN_1800c6100(uVar1);
  return;
}



void FUN_1800ef9a0(void)

{
  undefined8 uVar1;

  uVar1 = FUN_180100330();
  FUN_180100b10(uVar1);
  return;
}



void FUN_1800ef9f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined8 local_10;

  local_18 = *(undefined8 *)*param_1;
  local_10 = *(undefined8 *)(param_1[1] + 0x18);
  local_20[0] = 0;
  uVar1 = FUN_1800ba260();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3de8) {
    FUN_1801d62d8(&DAT_1802a3de8);
    if (DAT_1802a3de8 == -1) {
      DAT_1802a3de4 = DAT_1802a3dec;
      DAT_1802a3dec = DAT_1802a3dec + 1;
      _Init_thread_footer(&DAT_1802a3de8);
    }
  }
  FUN_1800bc160(uVar1,DAT_1802a3de4,local_20);
  return;
}



void FUN_1800efaa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)*param_1;
  local_20[0] = 0;
  uVar1 = FUN_1800ba260();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3df4) {
    FUN_1801d62d8(&DAT_1802a3df4);
    if (DAT_1802a3df4 == -1) {
      DAT_1802a3df0 = DAT_1802a3dec;
      DAT_1802a3dec = DAT_1802a3dec + 1;
      _Init_thread_footer(&DAT_1802a3df4);
    }
  }
  FUN_1800bc160(uVar1,DAT_1802a3df0,local_20);
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
}



void FUN_1800efb70(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  auVar1 = *(undefined1 (*) [16])(*param_1 + 8);
  local_28[0] = 0;
  local_20._0_8_ = auVar1._8_8_;
  local_20._8_4_ = auVar1._0_4_;
  local_20._12_4_ = auVar1._4_4_;
  uVar2 = FUN_1800ba260();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3dfc) {
    FUN_1801d62d8(&DAT_1802a3dfc);
    if (DAT_1802a3dfc == -1) {
      DAT_1802a3df8 = DAT_1802a3dec;
      DAT_1802a3dec = DAT_1802a3dec + 1;
      _Init_thread_footer(&DAT_1802a3dfc);
    }
  }
  FUN_1800bc160(uVar2,DAT_1802a3df8,local_28);
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
}



void FUN_1800efc40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;

  uVar2 = FUN_1800ba260();
  uVar1 = *param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3e04) {
    FUN_1801d62d8(&DAT_1802a3e04);
    if (DAT_1802a3e04 == -1) {
      DAT_1802a3e00 = DAT_1802a3dec;
      DAT_1802a3dec = DAT_1802a3dec + 1;
      _Init_thread_footer(&DAT_1802a3e04);
    }
  }
  FUN_1800bc160(uVar2,DAT_1802a3e00,uVar1);
  return;
}



void FUN_1800efcd0(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;

  if (*(longlong *)*param_1 != 0) {
    cVar2 = FUN_1801b3c30(*(longlong *)*param_1,8);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(**(longlong **)*param_1 + 8))();
      *(undefined4 *)(param_1[1] + 0x10) = uVar3;
    }
  }
  uVar4 = FUN_1800ba260();
  uVar1 = param_1[1];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3e0c) {
    FUN_1801d62d8(&DAT_1802a3e0c);
    if (DAT_1802a3e0c == -1) {
      DAT_1802a3e08 = DAT_1802a3dec;
      DAT_1802a3dec = DAT_1802a3dec + 1;
      _Init_thread_footer(&DAT_1802a3e0c);
    }
  }
  FUN_1800bc160(uVar4,DAT_1802a3e08,uVar1);
  return;
}



void FUN_1800efd90(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_18 = 0;
  lVar1 = FUN_180179ff0();
  local_20 = *(undefined8 *)(lVar1 + 0x20);
  FUN_180172540(&local_18);
  uVar2 = FUN_1800ba260();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3e28) {
    FUN_1801d62d8(&DAT_1802a3e28);
    if (DAT_1802a3e28 == -1) {
      DAT_1802a3e24 = DAT_1802a3dec;
      DAT_1802a3dec = DAT_1802a3dec + 1;
      _Init_thread_footer(&DAT_1802a3e28);
    }
  }
  FUN_1800bc160(uVar2,DAT_1802a3e24,local_28);
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
}



void FUN_1800efe80(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_38;
  DAT_1802a3e18 = DAT_1802a3e40;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(char *)(lVar2 + 8) == '\0') && ((DAT_1802a3e51 & 1) == 0)) {
    puVar1 = (undefined1 *)(lVar2 + 8);
    *puVar1 = 1;
    LOCK();
    DAT_1802a3e48 = DAT_1802a3e48 + 1;
    UNLOCK();
    FUN_1800ebd70();
    fVar3 = (float)FUN_1800eb440();
    LOCK();
    UNLOCK();
    if ((0.0 <= DAT_1802793f8) && (0.5 < fVar3 - DAT_1802793f8)) {
      DAT_1802a3e20 = 3;
    }
    DAT_1802793f8 = fVar3;
    if (DAT_1802a3e20 < 1) {
      FUN_1801723b0();
      FUN_18017d590("Render2DEvent",FUN_1800efd90,&local_11);
    }
    else {
      DAT_1802a3e20 = DAT_1802a3e20 + -1;
    }
    *puVar1 = 0;
  }
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
}



undefined8 FUN_1800effa0(undefined8 param_1,ulonglong param_2)

{
  FUN_1800ee940();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1801f42e0(param_1,0x40);
  }
  return param_1;
}



void FUN_1800effd0(void)

{
  atexit((_func_5014 *)&LAB_1800eea20);
  atexit((_func_5014 *)&LAB_1800eea30);
  atexit((_func_5014 *)&LAB_1800eea40);
  atexit((_func_5014 *)&LAB_1800eea50);
  atexit((_func_5014 *)&LAB_1800eea60);
  atexit((_func_5014 *)&LAB_1800eea70);
  atexit((_func_5014 *)&LAB_1800eea80);
  atexit((_func_5014 *)&LAB_1800eea90);
  atexit((_func_5014 *)&LAB_1800eeaa0);
  atexit((_func_5014 *)&LAB_1800eeab0);
  FUN_1800f0070(&DAT_1802a3de0,&DAT_180216038,FUN_1800eeac0);
  return;
}


