#include "../include/aerialclient_types.h"


undefined8 FUN_180043780(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4,longlong param_5)

{
  ushort uVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  unkbyte10 Var18;
  undefined8 uVar19;
  uint uVar20;
  byte *pbVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  char *******pppppppcVar25;
  char *******pppppppcVar26;
  char *******pppppppcVar27;
  byte *pbVar28;
  ulonglong uVar29;
  byte bVar30;
  longlong lVar31;
  longlong lVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  int iVar36;
  uint uVar37;
  undefined2 *puVar38;
  ulonglong uVar39;
  byte *pbVar40;
  byte *pbVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte *pbVar46;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  char cVar65;
  char cVar73;
  char cVar74;
  char cVar75;
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  byte local_988 [1385];
  byte local_41f [7];
  byte local_418 [4];
  byte bStack_414;
  byte bStack_413;
  byte bStack_412;
  byte bStack_411;
  byte bStack_410;
  byte bStack_40f;
  byte bStack_40e;
  byte bStack_40d;
  byte bStack_40c;
  byte bStack_40b;
  byte bStack_40a;
  byte bStack_409;
  byte local_408 [4];
  byte bStack_404;
  byte bStack_403;
  byte bStack_402;
  byte bStack_401;
  byte bStack_400;
  byte bStack_3ff;
  byte bStack_3fe;
  byte bStack_3fd;
  byte bStack_3fc;
  byte bStack_3fb;
  byte bStack_3fa;
  byte bStack_3f9;
  byte local_3f8 [4];
  byte bStack_3f4;
  byte bStack_3f3;
  byte bStack_3f2;
  byte bStack_3f1;
  byte bStack_3f0;
  byte bStack_3ef;
  byte bStack_3ee;
  byte bStack_3ed;
  byte bStack_3ec;
  byte bStack_3eb;
  byte bStack_3ea;
  byte bStack_3e9;
  byte local_3e8 [4];
  byte bStack_3e4;
  byte bStack_3e3;
  byte bStack_3e2;
  byte bStack_3e1;
  byte bStack_3e0;
  byte bStack_3df;
  byte bStack_3de;
  byte bStack_3dd;
  byte bStack_3dc;
  byte bStack_3db;
  byte bStack_3da;
  byte bStack_3d9;
  byte local_3d8 [4];
  byte bStack_3d4;
  byte bStack_3d3;
  byte bStack_3d2;
  byte bStack_3d1;
  byte bStack_3d0;
  byte bStack_3cf;
  byte bStack_3ce;
  byte bStack_3cd;
  byte bStack_3cc;
  byte bStack_3cb;
  byte bStack_3ca;
  byte bStack_3c9;
  byte local_3c8 [4];
  byte bStack_3c4;
  byte bStack_3c3;
  byte bStack_3c2;
  byte bStack_3c1;
  byte bStack_3c0;
  byte bStack_3bf;
  byte bStack_3be;
  byte bStack_3bd;
  byte bStack_3bc;
  byte bStack_3bb;
  byte bStack_3ba;
  byte bStack_3b9;
  byte local_3b8 [4];
  byte bStack_3b4;
  byte bStack_3b3;
  byte bStack_3b2;
  byte bStack_3b1;
  byte bStack_3b0;
  byte bStack_3af;
  byte bStack_3ae;
  byte bStack_3ad;
  byte bStack_3ac;
  byte bStack_3ab;
  byte bStack_3aa;
  byte bStack_3a9;
  byte local_3a8 [4];
  byte bStack_3a4;
  byte bStack_3a3;
  byte bStack_3a2;
  byte bStack_3a1;
  byte bStack_3a0;
  byte bStack_39f;
  byte bStack_39e;
  byte bStack_39d;
  byte bStack_39c;
  byte bStack_39b;
  byte bStack_39a;
  byte bStack_399;
  byte local_398 [4];
  byte bStack_394;
  byte bStack_393;
  byte bStack_392;
  byte bStack_391;
  byte bStack_390;
  byte bStack_38f;
  byte bStack_38e;
  byte bStack_38d;
  byte bStack_38c;
  byte bStack_38b;
  byte bStack_38a;
  byte bStack_389;
  byte local_388 [4];
  byte bStack_384;
  byte bStack_383;
  byte bStack_382;
  byte bStack_381;
  byte bStack_380;
  byte bStack_37f;
  byte bStack_37e;
  byte bStack_37d;
  byte bStack_37c;
  byte bStack_37b;
  byte bStack_37a;
  byte bStack_379;
  byte local_378 [4];
  byte bStack_374;
  byte bStack_373;
  byte bStack_372;
  byte bStack_371;
  byte bStack_370;
  byte bStack_36f;
  byte bStack_36e;
  byte bStack_36d;
  byte bStack_36c;
  byte bStack_36b;
  byte bStack_36a;
  byte bStack_369;
  byte local_368 [4];
  byte bStack_364;
  byte bStack_363;
  byte bStack_362;
  byte bStack_361;
  byte bStack_360;
  byte bStack_35f;
  byte bStack_35e;
  byte bStack_35d;
  byte bStack_35c;
  byte bStack_35b;
  byte bStack_35a;
  byte bStack_359;
  byte local_358 [4];
  byte bStack_354;
  byte bStack_353;
  byte bStack_352;
  byte bStack_351;
  byte bStack_350;
  byte bStack_34f;
  byte bStack_34e;
  byte bStack_34d;
  byte bStack_34c;
  byte bStack_34b;
  byte bStack_34a;
  byte bStack_349;
  byte local_348 [4];
  byte bStack_344;
  byte bStack_343;
  byte bStack_342;
  byte bStack_341;
  byte bStack_340;
  byte bStack_33f;
  byte bStack_33e;
  byte bStack_33d;
  byte bStack_33c;
  byte bStack_33b;
  byte bStack_33a;
  byte bStack_339;
  byte local_338 [4];
  byte bStack_334;
  byte bStack_333;
  byte bStack_332;
  byte bStack_331;
  byte bStack_330;
  byte bStack_32f;
  byte bStack_32e;
  byte bStack_32d;
  byte bStack_32c;
  byte bStack_32b;
  byte bStack_32a;
  byte bStack_329;
  byte local_328 [4];
  byte bStack_324;
  byte bStack_323;
  byte bStack_322;
  byte bStack_321;
  byte bStack_320;
  byte bStack_31f;
  byte bStack_31e;
  byte bStack_31d;
  byte bStack_31c;
  byte bStack_31b;
  byte bStack_31a;
  byte bStack_319;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  ulonglong local_2d8;
  undefined8 local_2d0;
  byte *local_2c8;
  byte *local_2c0;
  byte local_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2b0;
  byte *local_2a8;
  undefined8 uStack_2a0;
  byte *local_298;
  longlong *local_290;
  byte **local_288;
  byte **local_280;
  char *******local_278;
  uint *local_270;
  byte **local_268;
  undefined1 *local_260;
  byte *local_258;
  byte **local_250;
  uint *local_248;
  double local_238;
  byte *local_230;
  undefined8 local_228;
  ulonglong local_220;
  ulonglong local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  byte *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  byte *local_1c0;
  longlong local_1b8;
  byte *local_1b0;
  byte *local_1a8;
  undefined8 local_1a0;
  byte local_198 [8];
  longlong *local_190;
  undefined1 local_188 [16];
  char *******local_178;
  undefined8 uStack_170;
  byte *local_168;
  int *piStack_160;
  byte *local_158;
  ulonglong local_150;
  ulonglong local_148;
  byte *local_140;
  byte *local_138;
  byte *local_130;
  byte *local_128;
  undefined8 local_120;
  undefined4 local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  byte *local_100;
  byte *local_f8;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  int *local_e0;
  ulonglong local_d8;
  byte *local_d0;
  uint local_c8;
  uint local_c4;
  int local_c0;
  undefined4 local_bc;
  byte *local_b8;
  byte local_aa;
  bool local_a9;
  int local_a8;
  uint local_a4;
  byte *local_a0;
  byte local_92;
  byte local_91;
  byte local_90;
  byte local_8f;
  byte local_8e;
  byte local_8d;
  uint local_8c;
  byte local_85;
  undefined1 local_84;
  byte local_83;
  byte local_82;
  char local_81;
  undefined8 local_80;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined2 uVar76;

  local_80 = 0xfffffffffffffffe;
  local_238 = 0.0;
  local_100 = (byte *)0x4;
  local_8c = 0;
  local_1e0 = (byte *)0x8000000000000;
  local_d8 = 1;
  local_1d8 = 7;
  local_83 = 0;
  local_a0 = (byte *)0x0;
  local_e8 = 10;
  local_230 = (byte *)0x20;
  local_d0 = (byte *)0x3;
  local_158 = (byte *)0x8;
  local_e4 = 6;
  local_228 = 6;
  local_114 = 3;
  local_81 = -0x20;
  local_92 = 0x70;
  local_1d0 = -8;
  local_c8 = 0xffffffff;
  local_1c8 = 0xd;
  local_148 = 0xc;
  local_220 = 0x7ff0000000000000;
  local_218 = 0xfffffffffffff;
  local_140 = (byte *)0x9;
  local_f8 = (byte *)0x2;
  local_210 = 0xe;
  local_e0 = (int *)0xf;
  local_91 = 0x2d;
  local_1c0 = (byte *)0x10;
  local_8d = 1;
  local_a8 = 1;
  local_208 = 10;
  local_8e = 2;
  local_150 = 0xffffffffffffffff;
  local_85 = 0x2e;
  local_200 = 0x28;
  local_1f8 = 5;
  local_84 = 0x65;
  local_90 = 0x30;
  local_1f0 = 0xfff;
  local_1e8 = 0xb;
  local_ec = 0x84;
  local_1b8 = param_5;
  bVar45 = 2;
  if (param_4[10] != 0) {
    bVar45 = param_4[10];
  }
  uVar24 = *(uint *)(param_4 + 4);
  bVar30 = param_4[8];
  local_bc = (undefined4)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)bVar30 < 'a');
  if ((char)bVar30 < 'a') {
    if ((char)bVar30 < 'F') {
      if (bVar30 != 0x45) {
        if (bVar30 != 0x41) goto LAB_180043c81;
        local_a4 = 4;
        bVar15 = true;
        bVar42 = false;
        local_82 = 0x70;
        local_bc = 1;
        goto LAB_180043caa;
      }
LAB_180043bbe:
      if (uVar24 == 0xffffffff) {
        uVar24 = 6;
      }
      local_a4 = 1;
    }
    else if (bVar30 == 0x46) {
LAB_180043be7:
      if (uVar24 == 0xffffffff) {
        uVar24 = 6;
      }
      local_a4 = 2;
    }
    else {
      if (bVar30 != 0x47) goto LAB_180043c81;
LAB_180043c45:
      bVar42 = uVar24 == 0xffffffff;
      uVar24 = uVar24 + (uVar24 == 0);
      if (bVar42) {
        uVar24 = 6;
      }
      local_a4 = 3;
    }
    local_82 = 0x65;
    bVar42 = false;
    bVar15 = false;
  }
  else {
    if ((char)bVar30 < 'f') {
      if (bVar30 == 0x65) goto LAB_180043bbe;
      if (bVar30 != 0x61) goto LAB_180043c81;
      local_a4 = 4;
      bVar15 = true;
      local_82 = 0x70;
      bVar42 = false;
    }
    else {
      if (bVar30 == 0x66) goto LAB_180043be7;
      if (bVar30 == 0x67) goto LAB_180043c45;
LAB_180043c81:
      local_a4 = 3;
      bVar42 = true;
      bVar15 = false;
      local_82 = 0x65;
    }
    local_bc = 0;
  }
LAB_180043caa:
  pbVar33 = local_988 + 1;
  local_104 = 0x432;
  if ((int)uVar24 < 0x432) {
    local_104 = uVar24;
  }
  local_2d8 = 0x432;
  if (0x432 < (int)uVar24) {
    local_2d8 = (ulonglong)uVar24;
  }
  local_2d0 = 0x23e16c40;
  pbVar34 = param_4;
  local_1a0 = param_2;
  local_aa = bVar45;
  local_10c = FUN_1801e13b0();
  pbVar21 = local_a0;
  pbVar40 = local_d0;
  local_108 = local_8c;
  local_a9 = local_10c != local_8c;
  if (NAN((double)param_3) || NAN(local_238)) {
    pbVar34 = (byte *)0x4;
    FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
    pbVar40 = local_988;
    if (local_10c != local_108) {
      pbVar40 = pbVar33;
    }
    pbVar40[2] = DAT_1802a189a;
    *(undefined2 *)pbVar40 = DAT_1802a1898;
    pbVar40 = local_100;
    if (local_10c == local_108) {
      pbVar40 = local_d0;
    }
    local_188._0_8_ = local_988 + (longlong)pbVar40;
  }
  else if (uVar24 == local_c8) {
    pbVar35 = local_41f;
    if (bVar42) {
      FUN_1800136f0(local_188,local_988);
    }
    else {
      local_b8 = param_4;
      if ((longlong)param_3 < (longlong)local_a0) {
        local_988[0] = local_91;
        pbVar41 = local_d0;
        pbVar28 = pbVar33;
        pbVar46 = (byte *)((ulonglong)param_3 & 0x7fffffffffffffff);
      }
      else {
        pbVar28 = local_988;
        pbVar41 = local_f8;
        pbVar46 = param_3;
      }
      pbVar34 = (byte *)(ulonglong)local_a4;
      if ((local_220 & (ulonglong)pbVar46) == local_220) {
        local_2c8 = local_a0;
        pbVar41 = (byte *)(local_218 & (ulonglong)pbVar46);
        puVar38 = (undefined2 *)&DAT_1802a18a0;
        pbVar34 = (byte *)0x4;
        local_2c0 = pbVar46;
        local_130 = pbVar28;
        local_120 = param_1;
        FUN_18004e1e3(&DAT_1802a18a0,&DAT_180270745,0x19,4,&DAT_1802a18a4);
        pbVar28 = local_158;
        pbVar35 = local_1e0;
        if (pbVar41 != pbVar21) {
          puVar38 = (undefined2 *)&DAT_1802a18a8;
          pbVar34 = (byte *)0x9;
          FUN_18004e1e3(&DAT_1802a18a8,&DAT_18027077d,0x1e,9,&DAT_1802a18b4);
          pbVar21 = local_a0;
          if (((longlong)local_2c8 <= (longlong)param_3) || (pbVar40 = pbVar28, pbVar41 != pbVar35)) {
            pbVar35 = (byte *)((ulonglong)local_2c0 & (ulonglong)local_1e0);
            FUN_18004e1e3(&DAT_1802a18b8,&DAT_1802707c3,0x10,10,&DAT_1802a18c4);
            puVar38 = &DAT_1802a1898;
            pbVar34 = (byte *)0x4;
            FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
            pbVar40 = local_d0;
            if (pbVar35 == pbVar21) {
              puVar38 = (undefined2 *)&DAT_1802a18b8;
              pbVar40 = local_140;
            }
          }
        }
        pbVar35 = local_130;
        FUN_1802079d0(local_130,puVar38,pbVar40);
        pbVar35 = pbVar35 + (longlong)pbVar40;
        param_1 = local_120;
        param_4 = local_b8;
        uVar24 = local_8c;
      }
      else if (bVar15) {
        if (local_a0 == pbVar46) {
          pbVar28[0] = 0x30;
          pbVar28[1] = 0x70;
          pbVar28[2] = 0x2b;
          pbVar28[3] = 0x30;
          pbVar35 = pbVar28 + 4;
          pbVar34 = pbVar46;
          uVar24 = local_8c;
        }
        else {
          local_120 = param_1;
          pbVar40 = (byte *)(local_218 & (ulonglong)pbVar46);
          bVar30 = 0x31;
          uVar20 = (uint)((ulonglong)pbVar46 >> 0x34) - 0x3ff;
          pbVar34 = (byte *)(ulonglong)uVar20;
          uVar37 = uVar20;
          if ((byte *)((ulonglong)pbVar46 >> 0x34) == local_a0) {
            bVar30 = local_90;
            uVar37 = 0xfffffc02;
          }
          *pbVar28 = bVar30;
          pbVar28 = pbVar28 + 1;
          if (pbVar40 != local_a0) {
            local_130 = (byte *)CONCAT44(local_130._4_4_,uVar37);
            *pbVar28 = local_85;
            bVar30 = 0x34;
            do {
              uVar29 = local_d8;
              param_1 = local_120;
              param_4 = local_b8;
              uVar24 = local_ec;
              if (pbVar41 == (byte *)0x569) goto LAB_180043fdb;
              bVar30 = bVar30 - 4;
              local_988[(longlong)pbVar41] =
                   "0123456789abcdefghijklmnopqrstuvwxyz"[(ulonglong)pbVar40 >> (bVar30 & 0x3f) & 0xffffffff];
              pbVar41 = pbVar41 + uVar29;
              pbVar40 = (byte *)((ulonglong)pbVar40 & (local_150 << (bVar30 & 0x3f) ^ local_150));
            } while (pbVar40 != local_a0);
            pbVar28 = local_988 + (longlong)pbVar41;
            uVar37 = (uint)local_130;
          }
          param_4 = local_b8;
          param_1 = local_120;
          uVar24 = local_ec;
          if ((longlong)local_f8 <= (longlong)pbVar35 - (longlong)pbVar28) {
            *pbVar28 = local_92;
            if ((int)uVar37 < (int)local_8c) {
              uVar20 = local_8c - uVar37;
            }
            pbVar34 = (byte *)(ulonglong)uVar20;
            bVar30 = 0x2b;
            if ((int)uVar37 < (int)local_8c) {
              bVar30 = local_91;
            }
            pbVar28[1] = bVar30;
            lVar32 = 0;
            do {
              lVar31 = lVar32;
              uVar24 = (uint)pbVar34;
              *(byte *)((longlong)&uStack_2a0 + lVar31 + 7) =
                   (byte)((ulonglong)pbVar34 % (ulonglong)local_e8) | local_90;
              pbVar34 = (byte *)((ulonglong)pbVar34 / (ulonglong)local_e8);
              lVar32 = lVar31 + -1;
            } while (local_e8 <= uVar24);
            pbVar28 = pbVar28 + 2;
            uVar24 = local_ec;
            if (-lVar32 <= (longlong)pbVar35 - (longlong)pbVar28) {
              FUN_1802079d0(pbVar28,(longlong)&uStack_2a0 + lVar31 + 7,-lVar32);
              pbVar35 = pbVar28 + -lVar32;
              uVar24 = local_8c;
            }
          }
        }
      }
      else {
        FUN_180013b70(&local_2b8,pbVar28,pbVar35,pbVar34,local_a4);
        pbVar35 = (byte *)CONCAT71(uStack_2b7,local_2b8);
        param_4 = local_b8;
        uVar24 = (uint)uStack_2b0;
      }
LAB_180043fdb:
      local_188._8_4_ = uVar24;
      local_188._0_8_ = pbVar35;
    }
  }
  else {
    FUN_180046460(&local_2b8,local_988,local_41f);
    local_188._1_7_ = uStack_2b7;
    local_188[0] = local_2b8;
    local_188._8_4_ = (uint)uStack_2b0;
    local_188._12_4_ = uStack_2b0._4_4_;
  }
  bVar30 = local_82;
  uVar19 = local_188._0_8_;
  pbVar40 = local_988;
  iVar36 = local_188._0_4_ - (int)pbVar40;
  local_1b0 = pbVar40;
  local_c0 = iVar36;
  if (local_10c == local_108) {
    if (bVar45 != local_8e) {
      iVar36 = iVar36 + local_a8;
      local_c0 = iVar36;
    }
  }
  else {
    local_1b0 = pbVar33;
    pbVar40 = pbVar33;
  }
  bVar45 = local_82;
  local_1b0 = pbVar40;
  local_c0 = iVar36;
  if ((char)local_bc != '\0') {
    if (pbVar40 != (byte *)local_188._0_8_) {
      pbVar21 = (byte *)(local_188._0_8_ + -(longlong)pbVar40);
      pbVar33 = pbVar40;
      if (local_100 <= pbVar21) {
        pbVar35 = local_a0;
        if (local_1c0 <= pbVar21) {
          pbVar28 = (byte *)(local_148 & (ulonglong)pbVar21);
          pbVar35 = (byte *)((ulonglong)pbVar21 & 0xfffffffffffffff0);
          pbVar33 = local_a0;
          do {
            pbVar34 = pbVar40 + (longlong)pbVar33;
            bVar45 = *pbVar34;
            bVar48 = pbVar34[1];
            bVar50 = pbVar34[2];
            bVar52 = pbVar34[3];
            bVar3 = pbVar34[4];
            bVar4 = pbVar34[5];
            bVar5 = pbVar34[6];
            bVar6 = pbVar34[7];
            bVar7 = pbVar34[8];
            bVar8 = pbVar34[9];
            bVar9 = pbVar34[10];
            bVar10 = pbVar34[0xb];
            bVar11 = pbVar34[0xc];
            bVar12 = pbVar34[0xd];
            bVar13 = pbVar34[0xe];
            bVar14 = pbVar34[0xf];
            bVar44 = bVar45 + DAT_180209800;
            bVar47 = bVar48 + DAT_180209800._1_1_;
            bVar49 = bVar50 + DAT_180209800._2_1_;
            bVar51 = bVar52 + DAT_180209800._3_1_;
            bVar53 = bVar3 + DAT_180209800._4_1_;
            bVar54 = bVar4 + DAT_180209800._5_1_;
            bVar55 = bVar5 + DAT_180209800._6_1_;
            bVar56 = bVar6 + DAT_180209800._7_1_;
            bVar57 = bVar7 + DAT_180209800._8_1_;
            bVar58 = bVar8 + DAT_180209800._9_1_;
            bVar59 = bVar9 + DAT_180209800._10_1_;
            bVar60 = bVar10 + DAT_180209800._11_1_;
            bVar61 = bVar11 + DAT_180209800._12_1_;
            bVar62 = bVar12 + DAT_180209800._13_1_;
            bVar63 = bVar13 + DAT_180209800._14_1_;
            bVar64 = bVar14 + DAT_180209800._15_1_;
            auVar43[0] = -((byte)((0x19 < bVar44) * '\x19' | (0x19 >= bVar44) * bVar44) == bVar44);
            auVar43[1] = -((byte)((0x19 < bVar47) * '\x19' | (0x19 >= bVar47) * bVar47) == bVar47);
            auVar43[2] = -((byte)((0x19 < bVar49) * '\x19' | (0x19 >= bVar49) * bVar49) == bVar49);
            auVar43[3] = -((byte)((0x19 < bVar51) * '\x19' | (0x19 >= bVar51) * bVar51) == bVar51);
            auVar43[4] = -((byte)((0x19 < bVar53) * '\x19' | (0x19 >= bVar53) * bVar53) == bVar53);
            auVar43[5] = -((byte)((0x19 < bVar54) * '\x19' | (0x19 >= bVar54) * bVar54) == bVar54);
            auVar43[6] = -((byte)((0x19 < bVar55) * '\x19' | (0x19 >= bVar55) * bVar55) == bVar55);
            auVar43[7] = -((byte)((0x19 < bVar56) * '\x19' | (0x19 >= bVar56) * bVar56) == bVar56);
            auVar43[8] = -((byte)((0x19 < bVar57) * '\x19' | (0x19 >= bVar57) * bVar57) == bVar57);
            auVar43[9] = -((byte)((0x19 < bVar58) * '\x19' | (0x19 >= bVar58) * bVar58) == bVar58);
            auVar43[10] = -((byte)((0x19 < bVar59) * '\x19' | (0x19 >= bVar59) * bVar59) == bVar59);
            auVar43[0xb] = -((byte)((0x19 < bVar60) * '\x19' | (0x19 >= bVar60) * bVar60) == bVar60);
            auVar43[0xc] = -((byte)((0x19 < bVar61) * '\x19' | (0x19 >= bVar61) * bVar61) == bVar61);
            auVar43[0xd] = -((byte)((0x19 < bVar62) * '\x19' | (0x19 >= bVar62) * bVar62) == bVar62);
            auVar43[0xe] = -((byte)((0x19 < bVar63) * '\x19' | (0x19 >= bVar63) * bVar63) == bVar63);
            auVar43[0xf] = -((byte)((0x19 < bVar64) * '\x19' | (0x19 >= bVar64) * bVar64) == bVar64);
            uVar1 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
            pbVar34 = (byte *)(ulonglong)uVar1;
            if ((uVar1 >> ((uint)local_a0 & 0x1f) & 1) == 0) {
              if ((uVar1 >> ((uint)local_d8 & 0x1f) & 1) != 0) goto LAB_180044361;
LAB_180044138:
              if ((uVar1 >> ((uint)local_f8 & 0x1f) & 1) != 0) goto LAB_180044149;
LAB_18004439a:
              if ((uVar1 >> ((uint)local_d0 & 0x1f) & 1) != 0) goto LAB_1800443ab;
LAB_180044182:
              if ((uVar1 >> ((uint)local_100 & 0x1f) & 1) != 0) goto LAB_180044193;
LAB_1800443e4:
              if ((uVar1 >> ((uint)local_1f8 & 0x1f) & 1) != 0) goto LAB_1800443f5;
LAB_1800441cc:
              if ((uVar1 >> ((uint)local_228 & 0x1f) & 1) != 0) goto LAB_1800441dd;
LAB_18004442e:
              if ((uVar1 >> ((uint)local_1d8 & 0x1f) & 1) != 0) goto LAB_18004443f;
LAB_180044216:
              if ((uVar1 >> ((uint)local_158 & 0x1f) & 1) != 0) goto LAB_180044227;
LAB_180044478:
              if ((uVar1 >> ((uint)local_140 & 0x1f) & 1) != 0) goto LAB_180044489;
LAB_180044260:
              if ((uVar1 >> ((uint)local_208 & 0x1f) & 1) != 0) goto LAB_180044271;
LAB_1800444c2:
              if ((uVar1 >> ((uint)local_1e8 & 0x1f) & 1) != 0) goto LAB_1800444d3;
LAB_1800442aa:
              if ((uVar1 >> ((uint)local_148 & 0x1f) & 1) != 0) goto LAB_1800442bb;
LAB_18004450c:
              if ((uVar1 >> ((uint)local_1c8 & 0x1f) & 1) != 0) goto LAB_18004451d;
LAB_1800442f4:
              if ((uVar1 >> ((uint)local_210 & 0x1f) & 1) != 0) goto LAB_180044305;
LAB_180044556:
              uVar24 = (uint)local_e0;
            }
            else {
              local_418[0] = bVar45;
              local_418[1] = bVar48;
              local_418[2] = bVar50;
              local_418[3] = bVar52;
              bStack_414 = bVar3;
              bStack_413 = bVar4;
              bStack_412 = bVar5;
              bStack_411 = bVar6;
              bStack_410 = bVar7;
              bStack_40f = bVar8;
              bStack_40e = bVar9;
              bStack_40d = bVar10;
              bStack_40c = bVar11;
              bStack_40b = bVar12;
              bStack_40a = bVar13;
              bStack_409 = bVar14;
              pbVar40[(longlong)pbVar33] = local_418[(uint)local_a0 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_d8 & 0x1f) & 1) == 0) goto LAB_180044138;
LAB_180044361:
              local_408[0] = bVar45;
              local_408[1] = bVar48;
              local_408[2] = bVar50;
              local_408[3] = bVar52;
              bStack_404 = bVar3;
              bStack_403 = bVar4;
              bStack_402 = bVar5;
              bStack_401 = bVar6;
              bStack_400 = bVar7;
              bStack_3ff = bVar8;
              bStack_3fe = bVar9;
              bStack_3fd = bVar10;
              bStack_3fc = bVar11;
              bStack_3fb = bVar12;
              bStack_3fa = bVar13;
              bStack_3f9 = bVar14;
              (pbVar40 + 1)[(longlong)pbVar33] = local_408[(uint)local_d8 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_f8 & 0x1f) & 1) == 0) goto LAB_18004439a;
LAB_180044149:
              local_3f8[0] = bVar45;
              local_3f8[1] = bVar48;
              local_3f8[2] = bVar50;
              local_3f8[3] = bVar52;
              bStack_3f4 = bVar3;
              bStack_3f3 = bVar4;
              bStack_3f2 = bVar5;
              bStack_3f1 = bVar6;
              bStack_3f0 = bVar7;
              bStack_3ef = bVar8;
              bStack_3ee = bVar9;
              bStack_3ed = bVar10;
              bStack_3ec = bVar11;
              bStack_3eb = bVar12;
              bStack_3ea = bVar13;
              bStack_3e9 = bVar14;
              (pbVar40 + 2)[(longlong)pbVar33] = local_3f8[(uint)local_f8 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_d0 & 0x1f) & 1) == 0) goto LAB_180044182;
LAB_1800443ab:
              local_3e8[0] = bVar45;
              local_3e8[1] = bVar48;
              local_3e8[2] = bVar50;
              local_3e8[3] = bVar52;
              bStack_3e4 = bVar3;
              bStack_3e3 = bVar4;
              bStack_3e2 = bVar5;
              bStack_3e1 = bVar6;
              bStack_3e0 = bVar7;
              bStack_3df = bVar8;
              bStack_3de = bVar9;
              bStack_3dd = bVar10;
              bStack_3dc = bVar11;
              bStack_3db = bVar12;
              bStack_3da = bVar13;
              bStack_3d9 = bVar14;
              (pbVar40 + 3)[(longlong)pbVar33] = local_3e8[(uint)local_d0 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_100 & 0x1f) & 1) == 0) goto LAB_1800443e4;
LAB_180044193:
              local_3d8[0] = bVar45;
              local_3d8[1] = bVar48;
              local_3d8[2] = bVar50;
              local_3d8[3] = bVar52;
              bStack_3d4 = bVar3;
              bStack_3d3 = bVar4;
              bStack_3d2 = bVar5;
              bStack_3d1 = bVar6;
              bStack_3d0 = bVar7;
              bStack_3cf = bVar8;
              bStack_3ce = bVar9;
              bStack_3cd = bVar10;
              bStack_3cc = bVar11;
              bStack_3cb = bVar12;
              bStack_3ca = bVar13;
              bStack_3c9 = bVar14;
              (pbVar40 + 4)[(longlong)pbVar33] = local_3d8[(uint)local_100 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_1f8 & 0x1f) & 1) == 0) goto LAB_1800441cc;
LAB_1800443f5:
              local_3c8[0] = bVar45;
              local_3c8[1] = bVar48;
              local_3c8[2] = bVar50;
              local_3c8[3] = bVar52;
              bStack_3c4 = bVar3;
              bStack_3c3 = bVar4;
              bStack_3c2 = bVar5;
              bStack_3c1 = bVar6;
              bStack_3c0 = bVar7;
              bStack_3bf = bVar8;
              bStack_3be = bVar9;
              bStack_3bd = bVar10;
              bStack_3bc = bVar11;
              bStack_3bb = bVar12;
              bStack_3ba = bVar13;
              bStack_3b9 = bVar14;
              (pbVar40 + 5)[(longlong)pbVar33] = local_3c8[(uint)local_1f8 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_228 & 0x1f) & 1) == 0) goto LAB_18004442e;
LAB_1800441dd:
              local_3b8[0] = bVar45;
              local_3b8[1] = bVar48;
              local_3b8[2] = bVar50;
              local_3b8[3] = bVar52;
              bStack_3b4 = bVar3;
              bStack_3b3 = bVar4;
              bStack_3b2 = bVar5;
              bStack_3b1 = bVar6;
              bStack_3b0 = bVar7;
              bStack_3af = bVar8;
              bStack_3ae = bVar9;
              bStack_3ad = bVar10;
              bStack_3ac = bVar11;
              bStack_3ab = bVar12;
              bStack_3aa = bVar13;
              bStack_3a9 = bVar14;
              (pbVar40 + 6)[(longlong)pbVar33] = local_3b8[(uint)local_228 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_1d8 & 0x1f) & 1) == 0) goto LAB_180044216;
LAB_18004443f:
              local_3a8[0] = bVar45;
              local_3a8[1] = bVar48;
              local_3a8[2] = bVar50;
              local_3a8[3] = bVar52;
              bStack_3a4 = bVar3;
              bStack_3a3 = bVar4;
              bStack_3a2 = bVar5;
              bStack_3a1 = bVar6;
              bStack_3a0 = bVar7;
              bStack_39f = bVar8;
              bStack_39e = bVar9;
              bStack_39d = bVar10;
              bStack_39c = bVar11;
              bStack_39b = bVar12;
              bStack_39a = bVar13;
              bStack_399 = bVar14;
              (pbVar40 + 7)[(longlong)pbVar33] = local_3a8[(uint)local_1d8 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_158 & 0x1f) & 1) == 0) goto LAB_180044478;
LAB_180044227:
              local_398[0] = bVar45;
              local_398[1] = bVar48;
              local_398[2] = bVar50;
              local_398[3] = bVar52;
              bStack_394 = bVar3;
              bStack_393 = bVar4;
              bStack_392 = bVar5;
              bStack_391 = bVar6;
              bStack_390 = bVar7;
              bStack_38f = bVar8;
              bStack_38e = bVar9;
              bStack_38d = bVar10;
              bStack_38c = bVar11;
              bStack_38b = bVar12;
              bStack_38a = bVar13;
              bStack_389 = bVar14;
              (pbVar40 + 8)[(longlong)pbVar33] = local_398[(uint)local_158 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_140 & 0x1f) & 1) == 0) goto LAB_180044260;
LAB_180044489:
              local_388[0] = bVar45;
              local_388[1] = bVar48;
              local_388[2] = bVar50;
              local_388[3] = bVar52;
              bStack_384 = bVar3;
              bStack_383 = bVar4;
              bStack_382 = bVar5;
              bStack_381 = bVar6;
              bStack_380 = bVar7;
              bStack_37f = bVar8;
              bStack_37e = bVar9;
              bStack_37d = bVar10;
              bStack_37c = bVar11;
              bStack_37b = bVar12;
              bStack_37a = bVar13;
              bStack_379 = bVar14;
              (pbVar40 + 9)[(longlong)pbVar33] = local_388[(uint)local_140 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_208 & 0x1f) & 1) == 0) goto LAB_1800444c2;
LAB_180044271:
              local_378[0] = bVar45;
              local_378[1] = bVar48;
              local_378[2] = bVar50;
              local_378[3] = bVar52;
              bStack_374 = bVar3;
              bStack_373 = bVar4;
              bStack_372 = bVar5;
              bStack_371 = bVar6;
              bStack_370 = bVar7;
              bStack_36f = bVar8;
              bStack_36e = bVar9;
              bStack_36d = bVar10;
              bStack_36c = bVar11;
              bStack_36b = bVar12;
              bStack_36a = bVar13;
              bStack_369 = bVar14;
              (pbVar40 + 10)[(longlong)pbVar33] = local_378[(uint)local_208 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_1e8 & 0x1f) & 1) == 0) goto LAB_1800442aa;
LAB_1800444d3:
              local_368[0] = bVar45;
              local_368[1] = bVar48;
              local_368[2] = bVar50;
              local_368[3] = bVar52;
              bStack_364 = bVar3;
              bStack_363 = bVar4;
              bStack_362 = bVar5;
              bStack_361 = bVar6;
              bStack_360 = bVar7;
              bStack_35f = bVar8;
              bStack_35e = bVar9;
              bStack_35d = bVar10;
              bStack_35c = bVar11;
              bStack_35b = bVar12;
              bStack_35a = bVar13;
              bStack_359 = bVar14;
              (pbVar40 + 0xb)[(longlong)pbVar33] = local_368[(uint)local_1e8 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_148 & 0x1f) & 1) == 0) goto LAB_18004450c;
LAB_1800442bb:
              local_358[0] = bVar45;
              local_358[1] = bVar48;
              local_358[2] = bVar50;
              local_358[3] = bVar52;
              bStack_354 = bVar3;
              bStack_353 = bVar4;
              bStack_352 = bVar5;
              bStack_351 = bVar6;
              bStack_350 = bVar7;
              bStack_34f = bVar8;
              bStack_34e = bVar9;
              bStack_34d = bVar10;
              bStack_34c = bVar11;
              bStack_34b = bVar12;
              bStack_34a = bVar13;
              bStack_349 = bVar14;
              (pbVar40 + 0xc)[(longlong)pbVar33] = local_358[(uint)local_148 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_1c8 & 0x1f) & 1) == 0) goto LAB_1800442f4;
LAB_18004451d:
              local_348[0] = bVar45;
              local_348[1] = bVar48;
              local_348[2] = bVar50;
              local_348[3] = bVar52;
              bStack_344 = bVar3;
              bStack_343 = bVar4;
              bStack_342 = bVar5;
              bStack_341 = bVar6;
              bStack_340 = bVar7;
              bStack_33f = bVar8;
              bStack_33e = bVar9;
              bStack_33d = bVar10;
              bStack_33c = bVar11;
              bStack_33b = bVar12;
              bStack_33a = bVar13;
              bStack_339 = bVar14;
              (pbVar40 + 0xd)[(longlong)pbVar33] = local_348[(uint)local_1c8 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_210 & 0x1f) & 1) == 0) goto LAB_180044556;
LAB_180044305:
              local_338[0] = bVar45;
              local_338[1] = bVar48;
              local_338[2] = bVar50;
              local_338[3] = bVar52;
              bStack_334 = bVar3;
              bStack_333 = bVar4;
              bStack_332 = bVar5;
              bStack_331 = bVar6;
              bStack_330 = bVar7;
              bStack_32f = bVar8;
              bStack_32e = bVar9;
              bStack_32d = bVar10;
              bStack_32c = bVar11;
              bStack_32b = bVar12;
              bStack_32a = bVar13;
              bStack_329 = bVar14;
              (pbVar40 + 0xe)[(longlong)pbVar33] = local_338[(uint)local_210 & 0xf] + local_81;
              uVar24 = (uint)local_e0;
            }
            if ((uVar1 >> (uVar24 & 0x1f) & 1) != 0) {
              local_328[0] = bVar45;
              local_328[1] = bVar48;
              local_328[2] = bVar50;
              local_328[3] = bVar52;
              bStack_324 = bVar3;
              bStack_323 = bVar4;
              bStack_322 = bVar5;
              bStack_321 = bVar6;
              bStack_320 = bVar7;
              bStack_31f = bVar8;
              bStack_31e = bVar9;
              bStack_31d = bVar10;
              bStack_31c = bVar11;
              bStack_31b = bVar12;
              bStack_31a = bVar13;
              bStack_319 = bVar14;
              pbVar34 = (byte *)(ulonglong)(byte)(local_328[(uint)local_e0 & 0xf] + local_81);
              (pbVar40 + 0xf)[(longlong)pbVar33] = local_328[(uint)local_e0 & 0xf] + local_81;
            }
            pbVar33 = pbVar33 + (longlong)local_1c0;
          } while (pbVar33 != pbVar35);
          if (pbVar21 == pbVar35) goto LAB_18004473d;
          if (pbVar28 == local_a0) {
            pbVar33 = pbVar35 + (longlong)pbVar40;
            goto LAB_18004509c;
          }
        }
        pbVar28 = (byte *)((ulonglong)pbVar21 & 0xfffffffffffffffc);
        pbVar33 = pbVar40 + (longlong)pbVar28;
        do {
          uVar24 = *(uint *)(pbVar40 + (longlong)pbVar35);
          auVar43 = ZEXT416(uVar24);
          bVar45 = (char)uVar24 + DAT_180209820;
          bVar48 = (char)(uVar24 >> 8) + DAT_180209820._1_1_;
          bVar50 = (char)(uVar24 >> 0x10) + DAT_180209820._2_1_;
          bVar52 = (char)(uVar24 >> 0x18) + DAT_180209820._3_1_;
          cVar65 = -((byte)((bVar45 < 0x1a) * '\x1a' | (bVar45 >= 0x1a) * bVar45) == bVar45);
          cVar73 = -((byte)((bVar48 < 0x1a) * '\x1a' | (bVar48 >= 0x1a) * bVar48) == bVar48);
          cVar74 = -((byte)((bVar50 < 0x1a) * '\x1a' | (bVar50 >= 0x1a) * bVar50) == bVar50);
          cVar75 = -((byte)((bVar52 < 0x1a) * '\x1a' | (bVar52 >= 0x1a) * bVar52) == bVar52);
          auVar67._0_13_ = ZEXT613(0xffffffffffff) << 0x38;
          auVar68[0xd] = 0xff;
          auVar68._0_13_ = auVar67._0_13_;
          auVar68[0xe] = 0xff;
          auVar68[0xf] = 0xff;
          auVar67._14_2_ = auVar68._14_2_;
          auVar67[0xd] = 0xff;
          Var18 = CONCAT91(CONCAT81((longlong)
                                    (CONCAT72((int7)(CONCAT63((int6)(CONCAT54((int5)(CONCAT45((int)(CONCAT36(auVar67.
                                                            _13_3_,0xffffffffffff) >> 0x28),0xffffffffff) >> 0x20),
                                                            0xffffffff) >> 0x18),0xffffff) >> 0x10),0xffff) >> 8),cVar75
                                   ),cVar75);
          auVar17._2_10_ = Var18;
          auVar17[1] = cVar74;
          auVar17[0] = cVar74;
          auVar16._2_12_ = auVar17;
          auVar16[1] = cVar73;
          auVar16[0] = cVar73;
          auVar66._0_2_ = CONCAT11(cVar65,cVar65);
          auVar66._2_14_ = auVar16;
          uVar76 = (undefined2)Var18;
          auVar72._0_12_ = auVar66._0_12_;
          auVar72._12_2_ = uVar76;
          auVar72._14_2_ = uVar76;
          auVar71._12_4_ = auVar72._12_4_;
          auVar71._0_10_ = auVar66._0_10_;
          auVar71._10_2_ = auVar17._0_2_;
          auVar70._10_6_ = auVar71._10_6_;
          auVar70._0_8_ = auVar66._0_8_;
          auVar70._8_2_ = auVar17._0_2_;
          auVar69._8_8_ = auVar70._8_8_;
          auVar69._6_2_ = auVar16._0_2_;
          auVar69._4_2_ = auVar16._0_2_;
          auVar69._2_2_ = auVar66._0_2_;
          auVar69._0_2_ = auVar66._0_2_;
          uVar24 = movmskps((int)pbVar34,auVar69);
          uVar24 = uVar24 ^ 0xf;
          pbVar34 = (byte *)(ulonglong)uVar24;
          if ((uVar24 >> ((uint)local_a0 & 0x1f) & 1) == 0) {
            if ((uVar24 >> ((uint)local_d8 & 0x1f) & 1) != 0) goto LAB_1800446bd;
LAB_18004465f:
            if ((uVar24 >> ((uint)local_f8 & 0x1f) & 1) != 0) goto LAB_180044670;
LAB_1800446f6:
            uVar20 = (uint)local_d0;
          }
          else {
            local_318 = auVar43;
            pbVar40[(longlong)pbVar35] = local_318[(uint)local_a0 & 0xf] + local_81;
            if ((uVar24 >> ((uint)local_d8 & 0x1f) & 1) == 0) goto LAB_18004465f;
LAB_1800446bd:
            local_308 = auVar43;
            (pbVar40 + 1)[(longlong)pbVar35] = local_308[(uint)local_d8 & 0xf] + local_81;
            if ((uVar24 >> ((uint)local_f8 & 0x1f) & 1) == 0) goto LAB_1800446f6;
LAB_180044670:
            local_2f8 = auVar43;
            (pbVar40 + 2)[(longlong)pbVar35] = local_2f8[(uint)local_f8 & 0xf] + local_81;
            uVar20 = (uint)local_d0;
          }
          if ((uVar24 >> (uVar20 & 0x1f) & 1) != 0) {
            local_2e8 = auVar43;
            pbVar34 = (byte *)(ulonglong)(byte)(local_2e8[(uint)local_d0 & 0xf] + local_81);
            (pbVar40 + 3)[(longlong)pbVar35] = local_2e8[(uint)local_d0 & 0xf] + local_81;
          }
          pbVar35 = pbVar35 + (longlong)local_100;
        } while (pbVar35 != pbVar28);
        if (pbVar21 == pbVar28) goto LAB_18004473d;
      }
LAB_18004509c:
      do {
        if ((byte)(*pbVar33 + 0x9f) < 0x1a) {
          *pbVar33 = *pbVar33 + local_81;
        }
        pbVar33 = pbVar33 + 1;
      } while (pbVar33 != (byte *)uVar19);
    }
LAB_18004473d:
    bVar45 = bVar30 + local_81;
  }
  dVar2 = ABS((double)param_3);
  local_8f = local_83;
  local_128 = (byte *)uVar19;
  local_138 = (byte *)uVar19;
  local_1a8 = (byte *)uVar19;
  local_c4 = local_8c;
  local_110 = local_8c;
  local_178 = (char *******)0x0;
  uStack_170 = 0;
  local_168 = (byte *)0x0;
  piStack_160 = local_e0;
  uVar24 = local_8c;
  if (dVar2 != INFINITY) {
    local_b8 = param_4;
    pbVar33 = (byte *)uVar19;
    bVar30 = local_83;
    if (((param_4[0xb] | param_4[0xc]) & 1) != 0) {
      pbVar34 = (byte *)uVar19;
      if (pbVar40 < (ulonglong)uVar19) {
        pbVar21 = pbVar40;
        if ((byte *)(uVar19 - (longlong)pbVar40 & local_d8) != local_a0) {
          local_138 = pbVar40;
          if ((*pbVar40 != local_85) && (local_138 = (byte *)uVar19, *pbVar40 == bVar45)) {
            local_128 = pbVar40;
          }
          pbVar21 = pbVar40 + 1;
        }
        pbVar33 = local_128;
        pbVar34 = local_138;
        if ((byte *)(uVar19 + local_150) != pbVar40) {
          pbVar21 = pbVar21 + 1;
          do {
            pbVar35 = pbVar21 + -1;
            if (pbVar21[-1] == local_85) {
              bVar30 = *pbVar21;
              pbVar28 = pbVar35;
            }
            else {
              if (pbVar21[-1] == bVar45) {
                pbVar33 = pbVar35;
                local_128 = pbVar35;
              }
              bVar30 = *pbVar21;
              pbVar35 = local_138;
              pbVar28 = pbVar34;
            }
            local_138 = pbVar21;
            pbVar34 = pbVar21;
            if ((bVar30 != local_85) && (local_138 = pbVar35, pbVar34 = pbVar28, bVar30 == bVar45)) {
              local_128 = pbVar21;
              pbVar33 = pbVar21;
            }
            pbVar35 = pbVar21 + 1;
            pbVar21 = pbVar21 + 2;
          } while (pbVar35 != (byte *)uVar19);
        }
      }
      local_82 = bVar45;
      pbVar21 = pbVar34;
      if (pbVar33 < pbVar34) {
        pbVar21 = pbVar33;
      }
      local_1a8 = pbVar21;
      if ((param_4[0xb] != 0) && (pbVar34 == (byte *)uVar19)) {
        iVar36 = iVar36 + local_a8;
        local_c0 = iVar36;
        local_8f = local_8d;
      }
      bVar30 = local_8f;
      bVar45 = local_82;
      if (param_4[0xc] == 1) {
        if (local_1b8 == 0) {
          local_190 = (longlong *)FUN_1801d8b48(1);
        }
        else {
          local_190 = *(longlong **)(local_1b8 + 8);
          (**(code **)(*local_190 + 8))();
        }
        plVar22 = (longlong *)FUN_180029a60(local_198);
        (**(code **)(*plVar22 + 0x28))(plVar22,&local_2b8);
        if (local_e0 < piStack_160) {
          uVar29 = local_d8 + (longlong)piStack_160;
          pppppppcVar25 = local_178;
          if (local_1f0 < uVar29) {
            pppppppcVar25 = (char *******)local_178[-1];
            if (local_230 <= (byte *)((longlong)local_178 + (local_1d0 - (longlong)pppppppcVar25))) goto LAB_18004513b;
            uVar29 = (longlong)piStack_160 + local_200;
          }
          thunk_FUN_1801f42e0(pppppppcVar25,uVar29);
        }
        local_178 = (char *******)CONCAT71(uStack_2b7,local_2b8);
        uStack_170 = CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0);
        local_168 = local_2a8;
        piStack_160 = uStack_2a0;
        local_2a8 = local_a0;
        uStack_2a0 = local_e0;
        local_2b8 = local_83;
        if ((local_190 != (longlong *)0x0) &&
           (puVar23 = (undefined8 *)(**(code **)(*local_190 + 0x10))(), puVar23 != (undefined8 *)0x0)) {
          (**(code **)*puVar23)(puVar23,local_a8);
        }
        pppppppcVar25 = local_178;
        if (piStack_160 <= local_e0) {
          pppppppcVar25 = (char *******)&local_178;
        }
        local_110 = local_8c;
        if (local_168 != local_a0) {
          uVar39 = (longlong)pbVar21 - (longlong)pbVar40;
          uVar29 = (ulonglong)(char)*(byte *)pppppppcVar25;
          if (uVar29 < uVar39) {
            pppppppcVar26 = pppppppcVar25;
            do {
              uVar39 = uVar39 - uVar29;
              local_110 = local_110 + local_a8;
              pppppppcVar27 = (char *******)((longlong)pppppppcVar26 + 1);
              if ((char *******)((longlong)pppppppcVar26 + 1) == (char *******)(local_168 + (longlong)pppppppcVar25)) {
                pppppppcVar27 = pppppppcVar26;
              }
              uVar29 = (ulonglong)(char)*(byte *)pppppppcVar27;
              pppppppcVar26 = pppppppcVar27;
            } while (uVar29 < uVar39);
          }
        }
        iVar36 = iVar36 + local_110;
        local_c0 = iVar36;
        bVar45 = local_82;
      }
    }
    uVar20 = (int)local_2d8 + (int)local_2d0 + 0xdc1e8f8e;
    param_4 = local_b8;
    uVar24 = uVar20;
    if ((int)local_a4 < 3) {
      local_c4 = uVar20;
      if (local_a4 != 2) {
LAB_180044b8d:
        local_c4 = uVar20;
        if (((uVar20 != local_8c) && (local_b8[0xb] == 0)) && (local_b8[0xc] == 0)) {
          do {
            pbVar33 = pbVar33 + -1;
            local_128 = pbVar33;
          } while (*pbVar33 != bVar45);
        }
      }
    }
    else {
      if (local_a4 != 3) goto LAB_180044b8d;
      uVar24 = local_8c;
      if (local_b8[0xb] != 1) goto LAB_180044bc8;
      bVar45 = local_b8[8];
      if ((char)bVar45 < 'g') {
        if (bVar45 != 0x47) {
LAB_180044b86:
          uVar24 = 0;
          goto LAB_180044bc8;
        }
      }
      else if (bVar45 != 0x67) goto LAB_180044b86;
      uVar24 = uVar20 + local_104 + ((int)pbVar40 - (int)pbVar33) + (uint)(bVar30 ^ local_8d);
      local_c4 = uVar24;
      if ((pbVar33 == (byte *)uVar19) && (pbVar40 < (ulonglong)uVar19 && ((double)param_3 != local_238 && dVar2 < 1.0)))
      {
        do {
          while( true ) {
            bVar45 = *pbVar40;
            if ('/' < (char)bVar45) break;
            if ((bVar45 != 0x2e) || (pbVar40 = pbVar40 + 1, pbVar40 == (byte *)uVar19)) goto LAB_180044bc8;
          }
          if (bVar45 != 0x30) break;
          uVar24 = uVar24 + local_a8;
          pbVar40 = pbVar40 + 1;
          local_c4 = uVar24;
        } while (pbVar40 != (byte *)uVar19);
      }
    }
  }
LAB_180044bc8:
  local_c0 = iVar36 + uVar24;
  local_2b8 = (byte)&local_aa;
  uStack_2b7 = (undefined7)((ulonglong)&local_aa >> 8);
  uStack_2b0 = &local_a9;
  local_2a8 = local_198;
  uStack_2a0 = &local_c0;
  local_290 = &local_1b8;
  local_288 = &local_1b0;
  local_280 = &local_1a8;
  local_278 = (char *******)&local_178;
  local_270 = &local_110;
  local_268 = &local_138;
  local_260 = local_188;
  local_258 = &local_8f;
  local_250 = &local_128;
  local_248 = &local_c4;
  local_198[0] = param_4[9] == local_83 & param_4[0xd] & dVar2 != INFINITY;
  local_298 = param_4;
  if (local_198[0] == 0) {
    FUN_1800457c0(param_1,local_1a0,local_c0,param_4,local_8e,&local_2b8);
  }
  else {
    FUN_1800452c0(&local_2b8,param_1,local_1a0);
  }
  if (local_e0 < piStack_160) {
    uVar29 = local_d8 + (longlong)piStack_160;
    pppppppcVar25 = local_178;
    if (local_1f0 < uVar29) {
      pppppppcVar25 = (char *******)local_178[-1];
      if (local_230 <= (byte *)((longlong)local_178 + (local_1d0 - (longlong)pppppppcVar25))) {
LAB_18004513b:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_8c,(uintptr_t)local_a0);
      }
      uVar29 = (longlong)piStack_160 + local_200;
    }
    thunk_FUN_1801f42e0(pppppppcVar25,uVar29);
  }
  return param_1;
}



void Unwind_180045160(void)

{
  Unwind_1801dd394();
}



void Unwind_1800451a0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800451e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x828) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x828) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x910));
    }
  }
  return;
}



void Unwind_180045260(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x840);
  return;
}



undefined8 * FUN_1800452c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_58 = 0;
  local_50 = 1;
  local_54 = 1;
  local_41 = 0x30;
  if (*(char *)param_1[1] == '\x01') {
    lVar9 = param_3[2];
    uVar11 = lVar9 + 1;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    lVar10 = param_3[1];
    param_3[2] = uVar11;
    uVar6 = 0x2d;
  }
  else {
    cVar1 = *(char *)*param_1;
    if (cVar1 < '\x03') {
      if (cVar1 != '\x01') goto LAB_18004536d;
      lVar9 = param_3[2];
      uVar11 = lVar9 + 1;
      if ((ulonglong)param_3[3] < uVar11) {
        (**(code **)*param_3)(param_3);
        lVar9 = param_3[2];
        uVar11 = local_50 + lVar9;
      }
      lVar10 = param_3[1];
      param_3[2] = uVar11;
      uVar6 = 0x2b;
    }
    else {
      if (cVar1 != '\x03') goto LAB_18004536d;
      lVar9 = param_3[2];
      uVar11 = lVar9 + 1;
      if ((ulonglong)param_3[3] < uVar11) {
        (**(code **)*param_3)(param_3);
        lVar9 = param_3[2];
        uVar11 = local_50 + lVar9;
      }
      lVar10 = param_3[1];
      param_3[2] = uVar11;
      uVar6 = 0x20;
    }
  }
  *(undefined1 *)(lVar10 + lVar9) = uVar6;
LAB_18004536d:
  if ((*(char *)param_1[2] == '\x01') &&
     (uVar13 = *(int *)param_1[4] - *(int *)param_1[3], uVar11 = (ulonglong)uVar13,
     uVar13 != 0 && *(int *)param_1[3] <= *(int *)param_1[4])) {
    do {
      lVar9 = param_3[2];
      uVar12 = local_50 + lVar9;
      if ((ulonglong)param_3[3] < uVar12) {
        (**(code **)*param_3)(param_3);
        lVar9 = param_3[2];
        uVar12 = local_50 + lVar9;
      }
      param_3[2] = uVar12;
      *(undefined1 *)(param_3[1] + lVar9) = local_41;
      bVar5 = local_50 < (longlong)uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar5);
  }
  if (*(char *)(param_1[4] + 0xc) == '\x01') {
    if (*(longlong *)param_1[5] == 0) {
      local_60 = (longlong *)FUN_1801d8b48(1);
    }
    else {
      local_60 = *(longlong **)(*(longlong *)param_1[5] + 8);
      (**(code **)(*local_60 + 8))();
    }
    plVar7 = (longlong *)FUN_180029a60(&local_68);
    if ((local_60 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*local_60 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8,local_54);
    }
    uVar2 = *(undefined4 *)param_1[9];
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
    plVar3 = (longlong *)param_1[8];
    local_78 = (longlong)plVar3;
    if (0xf < (ulonglong)plVar3[3]) {
      local_78 = *plVar3;
    }
    local_70 = plVar3[2];
    FUN_18002d990(&local_68,*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],&local_78,uVar6,uVar2,param_3);
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] == '\x01')) {
      uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar9 = local_68[2];
      uVar11 = local_50 + lVar9;
      if ((ulonglong)local_68[3] < uVar11) {
        (**(code **)*local_68)(local_68);
        lVar9 = local_68[2];
        uVar11 = local_50 + lVar9;
      }
      local_68[2] = uVar11;
      *(undefined1 *)(local_68[1] + lVar9) = uVar6;
      *(undefined1 *)param_1[0xc] = 0;
    }
    *(undefined8 *)param_1[6] = *(undefined8 *)param_1[7];
    param_3 = local_68;
    if (*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) {
      *(longlong *)param_1[6] = *(longlong *)param_1[6] + 1;
    }
  }
  puVar4 = *(undefined1 **)param_1[0xd];
  for (puVar14 = *(undefined1 **)param_1[6]; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    uVar6 = *puVar14;
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = uVar6;
  }
  if ((*(char *)(param_1[4] + 0xb) == '\x01') && (*(char *)param_1[0xc] == '\x01')) {
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = 0x2e;
  }
  while (local_58 < *(int *)param_1[0xe]) {
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = local_41;
    *(int *)param_1[0xe] = *(int *)param_1[0xe] + -1;
  }
  puVar4 = *(undefined1 **)param_1[0xb];
  for (puVar14 = *(undefined1 **)param_1[0xd]; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    uVar6 = *puVar14;
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = uVar6;
  }
  *param_2 = param_3;
  return param_2;
}



void Unwind_180045750(void)

{
  Unwind_1801dd394();
}



void Unwind_180045770(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x58) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x58) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 100));
    }
  }
  return;
}



void FUN_1800457c0(undefined8 *param_1,undefined8 *param_2,int param_3,int *param_4,byte param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_1b8 [37];
  byte local_193;
  byte local_192;
  byte local_191;
  ulonglong local_190;
  ulonglong local_188;
  byte local_17c;
  undefined1 local_17b;
  undefined1 local_17a;
  byte local_179;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  longlong local_148;
  ulonglong local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  ulonglong *local_128;
  undefined8 *local_120;
  ulonglong *local_118;
  int local_10c;
  int local_108;
  int local_104;
  undefined8 *local_100;
  undefined8 *local_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined1 *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  ulonglong *local_98;
  longlong *local_90;
  undefined1 *local_88;
  ulonglong *local_80;
  longlong *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  ulonglong local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_1b8;
  local_188 = 0x272ba50202c24993;
  local_190 = 0x5e06d6a1710fb1d9;
  local_100 = param_2;
  local_b8 = param_1;
LAB_1800458a0:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_188 ^ 0x33a6fccb34cadf91;
            uVar2 = local_188 ^ local_190;
            local_190 = local_190 ^ 0x33a6fccb34cadf91;
            local_188 = uVar3;
            if (0x2ab9904ef06a0b80 < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x4f86bc56073c2207) {
              if ((longlong)uVar2 < -0x50dc0c5896a88dac) {
                if ((longlong)uVar2 < -0x6e62e204ac24afdd) {
                  if (uVar2 == 0x814763902a0ad0df) {
                    local_16c = local_170 - param_3;
                    local_188 = 0x1b71420c1cb253e0;
                    local_190 = 0xab3469e950f0b5a9;
                  }
                  else if (uVar2 == 0x86ff1960c838c888) {
                    local_160 = local_164 + local_10c;
                    local_188 = 0x8ac4525399068357;
                    if (local_168 < local_10c) {
                      local_188 = 0x6c054a18f0126286;
                    }
                    local_190 = 0x1b594fa8caddd374;
                  }
                }
                else if (uVar2 == 0xa0ac0cc2c31a40ab) {
                  (**(code **)*local_f8)(local_f8,local_a8);
                  local_c0 = *local_128;
                  local_c8 = local_148 + local_c0;
                  local_188 = 0x73113c253bce11b9;
                  local_190 = 0x39716759fac5ac3c;
                }
                else if (uVar2 == 0x919d1dfb53db5023) {
                  *local_b8 = local_120;
                  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_1b8)) {
                  }
                  return;
                }
              }
              else if (uVar2 == 0xaf23f3a769577254) {
                local_188 = 0xad8859f3a91b3b5e;
                if ((char)local_192 < '\x03') {
                  local_188 = 0x42ed78de4f2b03e1;
                }
                local_190 = 0xfc7f00d68a103ec5;
              }
              else if (uVar2 == 0xaf6dc37fa1a00faa) {
                (**(code **)*local_120)(local_120,local_b0);
                local_d8 = *local_118;
                local_e0 = local_148 + local_d8;
                local_188 = 0x6a288a2914296660;
                local_190 = 0xda51c980eceabb99;
              }
              else if (uVar2 == 0xb0452be54c42e649) {
                local_138 = (undefined1 *)((longlong)param_4 + 0xf);
                local_191 = *(byte *)((longlong)param_4 + 0xe);
                local_140 = (ulonglong)local_191;
                local_188 = 0x1178b9737a38a59b;
                local_190 = 0xdb18fe0a0003dc4;
                local_174 = local_16c;
              }
            }
            else if ((longlong)uVar2 < -0x3edee6de585711ce) {
              if (uVar2 == 0xb07943a9f8c3ddf9) {
                lVar1 = *local_78;
                *local_118 = local_e0;
                *(undefined1 *)(lVar1 + local_d8) = local_17b;
                local_e8 = local_70 + 1;
                local_188 = 0xc0781ff6dca2526e;
                if (local_e8 == local_88) {
                  local_188 = 0x6e925f39ca2b85;
                }
                local_190 = 0x86918b3ff1f2e30d;
              }
              else if (uVar2 == 0xb6ff1211fa509e95) {
                local_104 = local_154;
                local_188 = 0xd8c23a62154186fe;
                local_190 = 0xe9f574c2fb932055;
                local_d0 = local_130;
              }
              else if (uVar2 == 0xbe927808c53b3d24) {
                local_158 = local_170 - param_3;
                local_188 = 0xa77eda5d0b2a1b5f;
                local_190 = 0x73d75f35258e5014;
                local_15c = local_178;
              }
            }
            else if (uVar2 == 0xc1211921a7a8ee32) {
              local_188 = 0x7b914d41f2fe6ec6;
              local_190 = 0xcbd466a4bebc888f;
              local_16c = 0;
            }
            else if (uVar2 == 0xd4a985682ea44b4b) {
              local_108 = local_158;
              local_150 = local_15c;
              local_138 = (undefined1 *)((longlong)param_4 + 0xf);
              local_191 = *(byte *)((longlong)param_4 + 0xe);
              local_140 = (ulonglong)local_191;
              local_188 = 0xc87b399db71658e0;
              if (local_178 < local_158) {
                local_188 = 0x89b1ee89261e4a8f;
              }
              local_190 = 0xd4b20f0e6d2ec0bf;
              local_174 = local_15c;
              local_17c = local_191;
              local_130 = local_138;
              local_f0 = local_140;
            }
            else if (uVar2 == 0x1cc93693da38985f) {
              local_14c = local_174;
              local_60 = local_138;
              local_179 = local_191;
              local_58 = local_140;
              FUN_1800452c0(param_6,&local_50,local_100);
              local_120 = local_50;
              local_188 = 0x351d7b8f6b7fafa4;
              if (local_178 < local_14c) {
                local_188 = 0xe052847d985df55a;
              }
              local_190 = 0xa480667438a4ff87;
            }
          }
          if (0x4c08110fc38e2837 < (longlong)uVar2) break;
          if ((longlong)uVar2 < 0x44d2e209a0f90add) {
            if (uVar2 == 0x2ab9904ef06a0b81) {
              local_158 = (local_170 - param_3) / 2;
              local_15c = (local_170 - param_3) - local_158;
              local_188 = 0x96847f06f2caf963;
              local_190 = 0x422dfa6edc6eb228;
            }
            else if (uVar2 == 0x31374ea0eed2a6ab) {
              local_68 = local_d0;
              local_17a = *local_d0;
              local_c0 = *local_128;
              local_c8 = local_148 + local_c0;
              local_188 = 0x9b01be6caff0e339;
              if (*local_98 < local_c8) {
                local_188 = 0x71cde9d2ade11e17;
              }
              local_190 = 0xd161e5106efb5ebc;
              local_a8 = local_c8;
            }
            else if (uVar2 == 0x3571982bf0225e54) {
              local_188 = 0x7d147549790b2e85;
              if (local_192 == 1) {
                local_188 = 0x3d720ff8f4a91068;
              }
              local_190 = 0xbc356c68dea3c0b7;
            }
          }
          else if (uVar2 == 0x44d2e209a0f90add) {
            local_88 = (undefined1 *)((longlong)param_4 + local_58 + 0xf);
            local_118 = local_120 + 2;
            local_80 = local_120 + 3;
            local_78 = local_120 + 1;
            local_188 = 0x6a50739e8e660eb9;
            if (local_179 == local_193) {
              local_188 = 0x8c916bd5e772ef68;
            }
            local_190 = 0x1d0c762eb4a9bf4b;
            local_160 = local_14c;
          }
          else if (uVar2 == 0x46e994c92d50b163) {
            local_70 = local_e8;
            local_17b = *local_e8;
            local_d8 = *local_118;
            local_e0 = local_148 + local_d8;
            local_188 = 0xe382e384df27218e;
            if (*local_80 < local_e0) {
              local_188 = 0xfc9663528644f3dd;
            }
            local_190 = 0x53fba02d27e4fc77;
            local_b0 = local_e0;
          }
          else if (uVar2 == 0x4a605b7cc10bbd85) {
            lVar1 = *local_90;
            *local_128 = local_c8;
            *(undefined1 *)(lVar1 + local_c0) = local_17a;
            local_d0 = local_68 + 1;
            local_188 = 0x4a2bdd084291e7e6;
            if (local_d0 == local_a0) {
              local_188 = 0x371482a76fcd6975;
            }
            local_190 = 0x7b1c93a8ac43414d;
          }
        }
        if ((longlong)uVar2 < 0x60b92474945b9a52) break;
        if ((longlong)uVar2 < 0x775c05b03acfb1f2) {
          if (uVar2 == 0x60b92474945b9a52) {
            local_192 = param_5;
            if (*(byte *)((longlong)param_4 + 9) != local_193) {
              local_192 = *(byte *)((longlong)param_4 + 9);
            }
            local_188 = 0xe82c4b6742a6b966;
            local_190 = 0x9b46cf6586e0023b;
          }
          else if (uVar2 == 0x736a8402c446bb5d) {
            local_188 = 0xe312fc34db713696;
            if ((char)local_192 < '\x02') {
              local_188 = 0x794097b842041a96;
            }
            local_190 = 0x4c310f93b22644c2;
          }
        }
        else if (uVar2 == 0x775c05b03acfb1f2) {
          local_10c = local_160;
          local_188 = 0xf6dd9757c862d427;
          local_190 = 0xb034039ee5326544;
          local_e8 = local_60;
        }
        else if (uVar2 == 0x792d73a373cdf84a) {
          local_178 = 0;
          local_148 = 1;
          local_193 = 0;
          local_164 = -1;
          local_168 = 1;
          local_f8 = local_100;
          local_170 = *param_4;
          local_188 = 0xbce0d38d5ff65164;
          if (param_3 < local_170) {
            local_188 = 0x6c1cdc1c87ef2d7f;
          }
          local_16c = 0;
          local_190 = 0xca5f86813b4b72d;
        }
      }
      if (uVar2 != 0x4c08110fc38e2838) break;
      local_154 = local_164 + local_104;
      local_188 = 0xac82c3747748809b;
      if (local_168 < local_104) {
        local_188 = 0x6b4e7f657208651;
      }
      local_190 = 0xb04bf5e7ad7018c4;
      local_140 = local_f0;
      local_191 = 1;
LAB_1800463db:
      local_138 = local_130;
      local_174 = local_150;
    }
    if (uVar2 != 0x51f75925230b059b) {
      if (uVar2 == 0x5d03e1874b308a30) {
        local_a0 = local_130 + local_f0;
        local_128 = local_f8 + 2;
        local_98 = local_f8 + 3;
        local_90 = local_f8 + 1;
        local_188 = 0x94a3c51d9322be14;
        if (local_17c == local_193) {
          local_188 = 0x3e95e19fb34ab8de;
        }
        local_190 = 0x225cd70c69722081;
        local_154 = local_108;
        local_140 = 0;
        local_191 = local_193;
        goto LAB_1800463db;
      }
      goto LAB_1800458a0;
    }
    local_188 = 0x4bf4faf75c325918;
    if (local_192 == 3) {
      local_188 = 0xa06c73980bf0bcab;
    }
    local_190 = 0x8ad5e3d6fb9ab72a;
  } while( true );
}



undefined8 *
FUN_180046460(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,int param_5,uint param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined8 in_R9;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0;
  local_80 = 0x8000000000000;
  local_60 = 0;
  local_78 = 3;
  local_58 = 6;
  local_70 = 0x7ff0000000000000;
  local_54 = 1000000000;
  local_4c = 0x84;
  local_90 = param_2;
  uVar6 = param_4;
  if ((longlong)param_4 < 0) {
    if (param_2 != param_3) {
      *param_2 = 0x2d;
      local_90 = param_2 + 1;
      uVar6 = param_4 & (ulonglong)DAT_1802097f0;
      goto joined_r0x00018004659c;
    }
  }
  else {
joined_r0x00018004659c:
    if ((uVar6 & 0x7ff0000000000000) == 0x7ff0000000000000) {
      puVar5 = (undefined2 *)&DAT_1802a18a0;
      local_88 = param_3;
      local_68 = param_1;
      FUN_18004e1e3(&DAT_1802a18a0,&DAT_180270745,0x19,4,&DAT_1802a18a4);
      uVar2 = local_80;
      lVar7 = 3;
      if ((uVar6 & 0xfffffffffffff) != 0) {
        puVar5 = (undefined2 *)&DAT_1802a18a8;
        FUN_18004e1e3(&DAT_1802a18a8,&DAT_18027077d,0x1e,9,&DAT_1802a18b4);
        uVar3 = local_60;
        if ((-1 < (longlong)param_4) || (lVar7 = 8, (uVar6 & 0xfffffffffffff) != uVar2)) {
          uVar6 = uVar6 & local_80;
          puVar5 = (undefined2 *)&DAT_1802a18b8;
          FUN_18004e1e3(&DAT_1802a18b8,&DAT_1802707c3,0x10,10,&DAT_1802a18c4);
          FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
          lVar7 = 9;
          if (uVar6 != uVar3) {
            puVar5 = &DAT_1802a1898;
            lVar7 = local_78;
          }
        }
      }
      puVar1 = local_90;
      if (lVar7 <= (longlong)local_88 - (longlong)local_90) {
        FUN_1802079d0(local_90,puVar5,lVar7);
        *local_68 = puVar1 + lVar7;
        *(undefined4 *)(local_68 + 1) = local_50;
        return local_68;
      }
      *local_68 = local_88;
      param_1 = local_68;
      goto LAB_18004671c;
    }
    if (param_5 < 2) {
      if (param_5 != 1) {
LAB_18004675a:
        FUN_180046c90(param_1,local_90,param_3,in_R9,param_6);
        return param_1;
      }
      uVar4 = 6;
      if (((int)param_6 < 0) || (uVar4 = param_6, param_6 < 1000000000)) {
        FUN_18003e700(param_1,local_90,param_3,in_R9,uVar4);
        return param_1;
      }
    }
    else {
      if (param_5 != 2) {
        if (param_5 == 3) {
          FUN_1800467e0(param_1,local_90,param_3,in_R9,param_6);
          return param_1;
        }
        goto LAB_18004675a;
      }
      uVar4 = 6;
      if (((int)param_6 < 0) || (uVar4 = param_6, param_6 < 1000000000)) {
        FUN_180014460(&local_a0,local_90,param_3,in_R9,uVar4);
        *param_1 = local_a0;
        *(undefined4 *)(param_1 + 1) = local_98;
        return param_1;
      }
    }
  }
  *param_1 = param_3;
LAB_18004671c:
  *(undefined4 *)(param_1 + 1) = local_4c;
  return param_1;
}



void Unwind_180046780(void)

{
  Unwind_1801dd394();
}



void Unwind_1800467b0(void)

{
  Unwind_1801dd394();
}



undefined8 * FUN_1800467e0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,uint param_5)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  ulonglong uVar19;
  char *pcVar20;
  undefined1 local_388 [773];
  undefined1 local_83 [3];
  char *local_80 [2];
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_4c = 0;
  local_60 = 1000000;
  local_68 = (char *)0x0;
  local_70 = 3;
  local_5c = 6;
  local_58 = 0xfffffffb;
  local_54 = 1;
  local_50 = 0x84;
  if (param_4 == 0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      iVar5 = 0x84;
    }
    else {
      *param_2 = 0x30;
      *param_1 = param_2 + 1;
      iVar5 = 0;
    }
    goto LAB_180046bd5;
  }
  uVar3 = 6;
  if (((int)param_5 < 0) || (uVar3 = 1, param_5 == 0)) {
LAB_180046903:
    pwVar13 = (wchar_t *)(&DAT_180242830 + ((uVar3 + 10) * (uVar3 + 0xffff) >> 1 & 0x7fff));
    pwVar17 = pwVar13 + ((ulonglong)uVar3 + 5) * 4;
    pwVar14 = pwVar17;
    pwVar12 = pwVar13;
joined_r0x000180046959:
    for (; (pwVar15 = pwVar14, pwVar13 != pwVar14 &&
           (pwVar17 = pwVar12, pwVar15 = pwVar13, *(ulonglong *)pwVar13 < param_4)); pwVar13 = pwVar13 + 4) {
    }
  }
  else {
    pwVar17 = L"kernel32.dll";
    uVar3 = 1000000;
    if (param_5 < 1000000) {
      uVar3 = param_5;
      if (param_5 < 0x10) goto LAB_180046903;
      if (param_5 < 0x136) {
        pwVar13 = (wchar_t *)&DAT_180242e50;
        pwVar17 = (wchar_t *)(&UNK_180242e78 + (ulonglong)param_5 * 8);
        pwVar14 = pwVar17;
        pwVar12 = pwVar13;
        if (param_5 < 0x9c) goto joined_r0x000180046959;
      }
    }
    uVar16 = (longlong)(pwVar17 + -0xc0121728) >> 3;
    if ((longlong)uVar16 < 1) {
      pwVar17 = (wchar_t *)&DAT_180242e50;
      pwVar15 = (wchar_t *)&DAT_180242e50;
    }
    else {
      pwVar17 = (wchar_t *)&DAT_180242e50;
      pwVar15 = (wchar_t *)&DAT_180242e50;
      do {
        uVar19 = uVar16 >> 1;
        uVar16 = (uVar19 ^ 0xffffffffffffffff) + uVar16;
        pwVar13 = pwVar15 + (uVar19 + 1) * 4;
        if (param_4 <= *(ulonglong *)(pwVar15 + uVar19 * 4)) {
          uVar16 = uVar19;
          pwVar13 = pwVar15;
        }
        pwVar15 = pwVar13;
      } while (0 < (longlong)uVar16);
    }
  }
  uVar16 = (ulonglong)((longlong)pwVar15 - (longlong)pwVar17) >> 3;
  iVar7 = (int)uVar16 + -5;
  if (iVar7 < -4 || (int)uVar3 <= iVar7) {
    uVar9 = 0x2ff;
    if ((int)uVar3 < 0x2ff) {
      uVar9 = uVar3;
    }
    FUN_18003e700(local_80,local_388,local_83,uVar16,uVar9 - 1);
    pcVar6 = (char *)thunk_FUN_1801d7b80(local_388,local_80[0],0x65);
    pcVar10 = pcVar6;
    pcVar20 = local_80[0];
    if (local_4c < (int)(uVar9 - 1)) goto LAB_180046b50;
  }
  else {
    iVar4 = (uVar3 - (int)uVar16) + 4;
    iVar5 = 0x42;
    if (iVar4 < 0x42) {
      iVar5 = iVar4;
    }
    iVar8 = iVar5;
    if (iVar4 < 0) {
      iVar8 = 6;
    }
    FUN_180014460(local_80,local_388,local_83,uVar16,iVar8);
    pcVar6 = (char *)0x0;
    pcVar10 = local_80[0];
    pcVar20 = local_68;
    local_80[0] = local_68;
    if (local_4c < iVar5) {
LAB_180046b50:
      do {
        pcVar2 = pcVar10;
        pcVar10 = pcVar2 + -1;
        cVar1 = *pcVar10;
        pcVar20 = local_80[0];
        if (cVar1 < '0') {
          if (cVar1 == '.') goto LAB_180046b6c;
          break;
        }
      } while (cVar1 == '0');
      pcVar10 = pcVar2;
    }
  }
LAB_180046b6c:
  lVar18 = (longlong)pcVar10 - (longlong)local_388;
  puVar11 = param_3;
  iVar5 = local_50;
  if (lVar18 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1802079d0(param_2,local_388,lVar18);
    param_2 = param_2 + lVar18;
    puVar11 = param_2;
    iVar5 = local_4c;
    if ((iVar7 < -4 || (int)uVar3 <= iVar7) &&
       (lVar18 = (longlong)pcVar20 - (longlong)pcVar6, puVar11 = param_3, iVar5 = local_50,
       lVar18 <= (longlong)param_3 - (longlong)param_2)) {
      FUN_1802079d0(param_2,pcVar6,lVar18);
      puVar11 = param_2 + lVar18;
      iVar5 = local_4c;
    }
  }
  *param_1 = puVar11;
LAB_180046bd5:
  *(int *)(param_1 + 1) = iVar5;
  return param_1;
}



void Unwind_180046c30(void)

{
  Unwind_1801dd394();
}



void Unwind_180046c60(void)

{
  Unwind_1801dd394();
}



undefined8 * FUN_180046c90(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint local_240;
  byte local_239;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  byte local_219;
  ulonglong local_218;
  byte *local_210;
  byte local_206;
  char local_205;
  uint local_204;
  ulonglong local_200;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  longlong local_1c8;
  byte local_1c0;
  longlong local_1b8;
  undefined1 *local_1b0;
  longlong local_1a8;
  uint local_19c;
  byte local_198;
  byte local_190;
  byte local_188;
  byte local_180;
  byte local_178;
  byte local_170;
  longlong local_168;
  byte local_160;
  byte local_158;
  byte local_150;
  byte local_140;
  byte local_138;
  byte *local_130;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  byte *local_f0;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  undefined1 *local_c8;
  byte *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined1 *local_a8;
  byte *local_a0;
  longlong local_98;
  byte *local_90;
  longlong local_88;
  byte *local_80;
  undefined1 local_58 [24];

  local_230 = 0x57df85cb12648935;
  local_238 = 0xf1682d606fb0bab4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar5 = local_230 ^ 0x1cb41a9c4cb6bf9d;
              uVar3 = local_230 ^ local_238;
              local_238 = local_238 ^ 0x1cb41a9c4cb6bf9d;
              local_230 = uVar5;
              if ((longlong)uVar3 < -0x2fb595018a4f90) break;
              if ((longlong)uVar3 < 0x49bd2833f27e01dd) {
                if ((longlong)uVar3 < 0x1cc29879d56d4ea6) {
                  if (uVar3 == 0xffd04a6afe75b070) {
                    local_a0 = local_80 + 2;
                    local_98 = (longlong)local_a8 - (longlong)local_1b0;
                    local_230 = 0xe5b35ff534be76f4;
                    if ((longlong)local_c0 - (longlong)local_a0 < local_98) {
                      local_230 = 0x9b2b2c2d0dc4df56;
                    }
                    local_238 = 0xc9ac4c113e1f1294;
                    local_1e0 = local_1f0;
                    local_d0 = param_3;
                  }
                  else if (uVar3 == 0xfacecfd5f584db9) {
                    *param_2 = (byte)(local_218 >> (local_1c0 & 0x3f)) | local_239;
                    param_2[1] = local_219;
                    param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_170 & 0x3f) & local_228];
                    param_2[3] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_188 & 0x3f) & local_228];
                    param_2[4] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_198 & 0x3f) & local_228];
                    param_2[5] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_138 & 0x3f) & local_228];
                    param_2[6] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_158 & 0x3f) & local_228];
                    param_2[7] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_190 & 0x3f) & local_228];
                    param_2[8] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_140 & 0x3f) & local_228];
                    param_2[9] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_150 & 0x3f) & local_228];
                    param_2[10] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_180 & 0x3f) & local_228];
                    param_2[0xb] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_178 & 0x3f) & local_228];
                    param_2[0xc] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 >> (local_160 & 0x3f) & local_228];
                    param_2[0xd] = "0123456789abcdefghijklmnopqrstuvwxyz"
                                   [local_218 >> ((byte)local_1c8 & 0x3f) & local_228];
                    local_210 = param_2 + 0xf;
                    param_2[0xe] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_218 & local_228];
                    local_19c = local_240 - 0xd;
                    local_230 = 0x86677e3d523101be;
                    if (local_19c == local_204) {
                      local_230 = 0xb3c8fd0127decda6;
                    }
                    local_238 = 0x510b2b0dce79d0aa;
                    local_130 = local_210;
                  }
                  else if (uVar3 == 0x1b3d216e4927030d) {
                    local_1b0 = local_c8 + -1;
                    local_c8[-1] = (byte)(local_1dc % local_1f4) | local_239;
                    local_230 = 0x13543e0c1bf878df;
                    if (local_1dc < local_1f4) {
                      local_230 = 0xf7b95508acaacba2;
                    }
                    local_238 = 0x8691f6252df7bd2;
                    local_1dc = local_1dc / local_1f4;
                    local_c8 = local_1b0;
                  }
                }
                else if ((longlong)uVar3 < 0x2804d86d28c30cd4) {
                  if (uVar3 == 0x1cc29879d56d4ea6) {
                    local_230 = 0x2ea1cdf1430284e6;
                    if (local_240 < local_1e8) {
                      local_230 = 0x53941b11213532d8;
                    }
                    local_238 = 0x210d210c1c5ac95f;
                  }
                  else if (uVar3 == 0x1effc1110f296d32) {
                    local_210 = param_2 + 4;
                    *local_d8 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_188 & 0x3f) & local_228];
                    local_230 = 0xbcb757c8236125fc;
                    if (local_240 == local_1e4) {
                      local_230 = 0x821b43325a1d40a0;
                    }
                    local_238 = 0x60d8953eb3ba5dac;
                    local_f0 = local_210;
                  }
                }
                else if (uVar3 == 0x2804d86d28c30cd4) {
                  local_210 = param_2 + 0xc;
                  *local_118 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_178 & 0x3f) & local_228];
                  local_230 = 0x708261b2af9f6446;
                  if (local_240 == local_1f4) {
                    local_230 = 0xf9c5402e0a43c890;
                  }
                  local_238 = 0x1b069622e3e4d59c;
                  local_100 = local_210;
                }
                else if (uVar3 == 0x2c1f13e40aa16460) {
                  FUN_1802079d0(local_a0,local_1b0,local_98);
                  local_d0 = local_a0 + local_98;
                  local_1e0 = local_204;
                  local_230 = 0x4bf690151cf8286a;
                  local_238 = 0x1971f0292f23e5a8;
                }
              }
              else if ((longlong)uVar3 < 0x5287603c33dbcdc2) {
                if (uVar3 == 0x49bd2833f27e01dd) {
                  local_1a8 = local_168;
                  if (999 < local_1ec) {
                    local_1a8 = local_1c8;
                  }
                  local_230 = 0x4191410ba14d5895;
                  local_238 = 0x823423513584295b;
                }
                else if (uVar3 == 0x4a91732a66ec2e94) {
                  local_210 = param_2 + 0xe;
                  *local_128 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> ((byte)local_1c8 & 0x3f) & local_228]
                  ;
                  local_230 = 0x95e00b6e137cd145;
                  local_238 = 0x7723dd62fadbcc49;
                }
                else if (uVar3 == 0x4e93a997b228ff3a) {
                  *local_90 = local_219;
                  local_210 = param_2 + 3;
                  param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_170 & 0x3f) & local_228];
                  local_230 = 0x636f6ad3e9947c0f;
                  if (local_240 == 1) {
                    local_230 = 0x9f537dce0f1a0c31;
                  }
                  local_238 = 0x7d90abc2e6bd113d;
                  local_d8 = local_210;
                }
              }
              else if ((longlong)uVar3 < 0x72993a1d3d6ffb87) {
                if (uVar3 == 0x5287603c33dbcdc2) {
                  *param_1 = local_d0;
                  *(uint *)(param_1 + 1) = local_1e0;
                  local_230 = 0xad818a874bdf53e0;
                  local_238 = 0x40ca0b8ace7f273e;
                }
                else if (uVar3 == 0x6b84f7904c7bb1da) {
                  local_210 = param_2 + 0xd;
                  *local_100 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_160 & 0x3f) & local_228];
                  local_230 = 0x6c6e939f99057912;
                  if (local_240 == 0xb) {
                    local_230 = 0xc43c36b9164e4a8a;
                  }
                  local_238 = 0x26ffe0b5ffe95786;
                  local_128 = local_210;
                }
              }
              else if (uVar3 == 0x72993a1d3d6ffb87) {
                uVar3 = local_218 << ((byte)local_1b8 & 0x3f);
                local_200 = (local_1b8 << (0x34U - (char)(local_240 << ((byte)local_1e4 & 0x1f)) & 0x3f) &
                             (uVar3 + 0x1fffffffffffff | local_218) & uVar3) + local_218;
                local_210 = param_2 + 1;
                *param_2 = (char)(local_200 >> (local_1c0 & 0x3f)) + local_239;
                local_230 = 0xecba3b73c4b2353e;
                if (local_205 != '\0') {
                  local_230 = 0x40ea44e89f3dd708;
                }
                local_238 = 0xa22992e4769aca04;
                local_90 = local_210;
              }
              else if (uVar3 == 0x7c592982db12bbaa) {
                local_210 = param_2 + 8;
                *local_e8 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_190 & 0x3f) & local_228];
                local_230 = 0x6d423891632ce388;
                if (local_240 == 6) {
                  local_230 = 0x59f5f6ed82049441;
                }
                local_238 = 0xbb3620e16ba3894d;
                local_108 = local_210;
              }
            }
            if (-0x2893aacf63b72eed < (longlong)uVar3) break;
            if ((longlong)uVar3 < -0x59485754822bcc7f) {
              if (uVar3 == 0x8ae4889e86291193) {
                local_210 = param_2 + 6;
                *local_f8 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_138 & 0x3f) & local_228];
                local_230 = 0x56961c10919f0d9b;
                if (local_240 == 4) {
                  local_230 = 0x6a9db90429c49258;
                }
                local_238 = 0x885e6f08c0638f54;
                local_e0 = local_210;
              }
              else if (uVar3 == 0x95604ddf80471dc5) {
                *param_1 = param_3;
                *(uint *)(param_1 + 1) = local_1f0;
                local_230 = 0x9f9fec4650d727c1;
                local_238 = 0x72d46d4bd577531f;
              }
              else if (uVar3 == 0xa3faf4ee689f2c62) {
                local_210 = param_2 + 10;
                *local_120 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_150 & 0x3f) & local_228];
                local_230 = 0x5b34ed8778ba34e8;
                if (local_240 == 8) {
                  local_230 = 0x543a99d7b0cf14b1;
                }
                local_238 = 0xb6f94fdb596809bd;
                local_110 = local_210;
              }
            }
            else if ((longlong)uVar3 < -0x3c5a9da56b368e32) {
              if (uVar3 == 0xa6b7a8ab7dd43381) {
                local_138 = 0x24;
                local_1c8 = 4;
                local_204 = 0;
                local_1b8 = 1;
                local_1f4 = 10;
                local_140 = 0x18;
                local_150 = 0x14;
                local_158 = 0x20;
                local_168 = 3;
                local_160 = 8;
                local_170 = 0x30;
                local_178 = 0xc;
                local_228 = 0xf;
                local_180 = 0x10;
                local_188 = 0x2c;
                local_190 = 0x1c;
                local_219 = 0x2e;
                local_198 = 0x28;
                local_239 = 0x30;
                local_1e4 = 2;
                local_1e8 = 0xd;
                local_1c0 = 0x34;
                local_1f0 = 0x84;
                local_240 = param_5;
                if ((int)param_5 < 0) {
                  local_240 = 0xd;
                }
                uVar1 = 0xfffffc02;
                if ((param_4 & 0xfffffffffffff) == 0) {
                  uVar1 = 0;
                }
                uVar3 = 0x10000000000000;
                uVar2 = (uint)(param_4 >> 0x34) - 0x3ff;
                if (param_4 >> 0x34 == 0) {
                  uVar3 = 0;
                  uVar2 = uVar1;
                }
                local_206 = 0x2b;
                if ((int)uVar2 < 0) {
                  local_206 = 0x2d;
                }
                local_218 = uVar3 | param_4 & 0xfffffffffffff;
                local_1ec = -uVar2;
                if ((int)-uVar2 < 0) {
                  local_1ec = uVar2;
                }
                local_230 = 0x2ad229e2de1379aa;
                if (local_1ec < 10) {
                  local_230 = 0x4e4ab61ce044e1ba;
                }
                local_238 = 0x8defd446748d9074;
                local_1a8 = 1;
              }
              else if (uVar3 == 0xa73dfda4aa9ee9de) {
                local_230 = 0x21364915590a4ded;
                if (local_1ec < 100) {
                  local_230 = 0xab2e037c3fbd3dfe;
                }
                local_238 = 0x688b6126ab744c30;
                local_1a8 = 2;
              }
            }
            else if (uVar3 == 0xc3a5625a94c971ce) {
              local_88 = local_1a8;
              local_b8 = (longlong)param_3 - (longlong)param_2;
              local_b0 = (ulonglong)local_240;
              local_230 = 0x970dc95221ebd750;
              if (local_b8 < (longlong)local_b0) {
                local_230 = 0xa7ab860532dee78a;
              }
              local_238 = 0x4da6a9f59c58f60e;
              local_c0 = param_3;
            }
            else if (uVar3 == 0xd6741870088f6ac5) {
              local_210 = param_2 + 9;
              *local_108 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_140 & 0x3f) & local_228];
              local_230 = 0x29e00444bd108099;
              if (local_240 == 7) {
                local_230 = 0x68d926a63c28b1f7;
              }
              local_238 = 0x8a1af0aad58facfb;
              local_120 = local_210;
            }
          }
          if (-0x1d3c29f31658e2f5 < (longlong)uVar3) break;
          if ((longlong)uVar3 < -0x23903d096f2487b0) {
            if (uVar3 == 0xd76c55309c48d114) {
              FUN_180207610(local_130,CONCAT71((int7)(uVar5 >> 8),0x30),(ulonglong)local_19c);
              local_210 = local_130 + local_19c;
              local_230 = 0x508ce77835fa98ee;
              local_238 = 0xb24f3174dc5d85e2;
            }
            else if (uVar3 == 0xdaab60a7bdb3215e) {
              local_205 = local_240 == local_204;
              lVar4 = local_168;
              if (!(bool)local_205) {
                lVar4 = local_1c8;
              }
              local_230 = 0x13fb965425990650;
              if ((longlong)(local_b8 - local_b0) < lVar4 + local_88) {
                local_230 = 0x9a5943f270b35533;
              }
              local_238 = 0xf390e2df0f448f6;
            }
          }
          else if (uVar3 == 0xdc6fc2f690db7850) {
            local_210 = param_2 + 5;
            *local_f0 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_198 & 0x3f) & local_228];
            local_230 = 0xa6cb4b028f92ff44;
            if (local_240 == 3) {
              local_230 = 0xceec1590e01cf3db;
            }
            local_238 = 0x2c2fc39c09bbeed7;
            local_f8 = local_210;
          }
          else if (uVar3 == 0xdec8731851fc82cf) {
            local_210 = param_2 + 7;
            *local_e0 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_158 & 0x3f) & local_228];
            local_230 = 0xf3517c925e9072ca;
            if (local_240 == 5) {
              local_230 = 0x6dcb831c6c25d46c;
            }
            local_238 = 0x8f0855108582c960;
            local_e8 = local_210;
          }
        }
        if (-0x12b47ef27a5f8b23 < (longlong)uVar3) break;
        if (uVar3 == 0xe2c3d60ce9a71d0c) {
          local_80 = local_210;
          *local_210 = 0x70;
          local_210[1] = local_206;
          local_c8 = local_58;
          local_230 = 0x2f1d26b534153c6d;
          local_238 = 0x342007db7d323f60;
          local_1dc = local_1ec;
          local_a8 = local_c8;
        }
        else if (uVar3 == 0xea0d2ff0ae861184) {
          *param_1 = param_3;
          *(uint *)(param_1 + 1) = local_1f0;
          local_230 = 0x94e8ef0ac1f40b01;
          local_238 = 0x79a36e0744547fdf;
        }
      }
      if (uVar3 != 0xedcda25c21d23d55) break;
      local_210 = param_2 + 0xb;
      *local_110 = "0123456789abcdefghijklmnopqrstuvwxyz"[local_200 >> (local_180 & 0x3f) & local_228];
      local_230 = 0xc2100f67bca072a0;
      if (local_240 == 9) {
        local_230 = 0x8d701067dc46378;
      }
      local_238 = 0xea14d70a94637e74;
      local_118 = local_210;
    }
  } while (uVar3 != 0xed4b810d85a074de);
  return param_1;
}



undefined8 FUN_180048100(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4,longlong param_5)

{
  ushort uVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  unkbyte10 Var18;
  undefined8 uVar19;
  uint uVar20;
  byte *pbVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  char *******pppppppcVar25;
  char *******pppppppcVar26;
  char *******pppppppcVar27;
  byte *pbVar28;
  ulonglong uVar29;
  byte *pbVar30;
  longlong lVar31;
  longlong lVar32;
  byte *pbVar33;
  uint uVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  int iVar38;
  undefined2 *puVar39;
  byte *pbVar40;
  ulonglong uVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  char cVar64;
  char cVar72;
  char cVar73;
  char cVar74;
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  byte local_988 [1385];
  byte local_41f [7];
  byte local_418 [4];
  byte bStack_414;
  byte bStack_413;
  byte bStack_412;
  byte bStack_411;
  byte bStack_410;
  byte bStack_40f;
  byte bStack_40e;
  byte bStack_40d;
  byte bStack_40c;
  byte bStack_40b;
  byte bStack_40a;
  byte bStack_409;
  byte local_408 [4];
  byte bStack_404;
  byte bStack_403;
  byte bStack_402;
  byte bStack_401;
  byte bStack_400;
  byte bStack_3ff;
  byte bStack_3fe;
  byte bStack_3fd;
  byte bStack_3fc;
  byte bStack_3fb;
  byte bStack_3fa;
  byte bStack_3f9;
  byte local_3f8 [4];
  byte bStack_3f4;
  byte bStack_3f3;
  byte bStack_3f2;
  byte bStack_3f1;
  byte bStack_3f0;
  byte bStack_3ef;
  byte bStack_3ee;
  byte bStack_3ed;
  byte bStack_3ec;
  byte bStack_3eb;
  byte bStack_3ea;
  byte bStack_3e9;
  byte local_3e8 [4];
  byte bStack_3e4;
  byte bStack_3e3;
  byte bStack_3e2;
  byte bStack_3e1;
  byte bStack_3e0;
  byte bStack_3df;
  byte bStack_3de;
  byte bStack_3dd;
  byte bStack_3dc;
  byte bStack_3db;
  byte bStack_3da;
  byte bStack_3d9;
  byte local_3d8 [4];
  byte bStack_3d4;
  byte bStack_3d3;
  byte bStack_3d2;
  byte bStack_3d1;
  byte bStack_3d0;
  byte bStack_3cf;
  byte bStack_3ce;
  byte bStack_3cd;
  byte bStack_3cc;
  byte bStack_3cb;
  byte bStack_3ca;
  byte bStack_3c9;
  byte local_3c8 [4];
  byte bStack_3c4;
  byte bStack_3c3;
  byte bStack_3c2;
  byte bStack_3c1;
  byte bStack_3c0;
  byte bStack_3bf;
  byte bStack_3be;
  byte bStack_3bd;
  byte bStack_3bc;
  byte bStack_3bb;
  byte bStack_3ba;
  byte bStack_3b9;
  byte local_3b8 [4];
  byte bStack_3b4;
  byte bStack_3b3;
  byte bStack_3b2;
  byte bStack_3b1;
  byte bStack_3b0;
  byte bStack_3af;
  byte bStack_3ae;
  byte bStack_3ad;
  byte bStack_3ac;
  byte bStack_3ab;
  byte bStack_3aa;
  byte bStack_3a9;
  byte local_3a8 [4];
  byte bStack_3a4;
  byte bStack_3a3;
  byte bStack_3a2;
  byte bStack_3a1;
  byte bStack_3a0;
  byte bStack_39f;
  byte bStack_39e;
  byte bStack_39d;
  byte bStack_39c;
  byte bStack_39b;
  byte bStack_39a;
  byte bStack_399;
  byte local_398 [4];
  byte bStack_394;
  byte bStack_393;
  byte bStack_392;
  byte bStack_391;
  byte bStack_390;
  byte bStack_38f;
  byte bStack_38e;
  byte bStack_38d;
  byte bStack_38c;
  byte bStack_38b;
  byte bStack_38a;
  byte bStack_389;
  byte local_388 [4];
  byte bStack_384;
  byte bStack_383;
  byte bStack_382;
  byte bStack_381;
  byte bStack_380;
  byte bStack_37f;
  byte bStack_37e;
  byte bStack_37d;
  byte bStack_37c;
  byte bStack_37b;
  byte bStack_37a;
  byte bStack_379;
  byte local_378 [4];
  byte bStack_374;
  byte bStack_373;
  byte bStack_372;
  byte bStack_371;
  byte bStack_370;
  byte bStack_36f;
  byte bStack_36e;
  byte bStack_36d;
  byte bStack_36c;
  byte bStack_36b;
  byte bStack_36a;
  byte bStack_369;
  byte local_368 [4];
  byte bStack_364;
  byte bStack_363;
  byte bStack_362;
  byte bStack_361;
  byte bStack_360;
  byte bStack_35f;
  byte bStack_35e;
  byte bStack_35d;
  byte bStack_35c;
  byte bStack_35b;
  byte bStack_35a;
  byte bStack_359;
  byte local_358 [4];
  byte bStack_354;
  byte bStack_353;
  byte bStack_352;
  byte bStack_351;
  byte bStack_350;
  byte bStack_34f;
  byte bStack_34e;
  byte bStack_34d;
  byte bStack_34c;
  byte bStack_34b;
  byte bStack_34a;
  byte bStack_349;
  byte local_348 [4];
  byte bStack_344;
  byte bStack_343;
  byte bStack_342;
  byte bStack_341;
  byte bStack_340;
  byte bStack_33f;
  byte bStack_33e;
  byte bStack_33d;
  byte bStack_33c;
  byte bStack_33b;
  byte bStack_33a;
  byte bStack_339;
  byte local_338 [4];
  byte bStack_334;
  byte bStack_333;
  byte bStack_332;
  byte bStack_331;
  byte bStack_330;
  byte bStack_32f;
  byte bStack_32e;
  byte bStack_32d;
  byte bStack_32c;
  byte bStack_32b;
  byte bStack_32a;
  byte bStack_329;
  byte local_328 [4];
  byte bStack_324;
  byte bStack_323;
  byte bStack_322;
  byte bStack_321;
  byte bStack_320;
  byte bStack_31f;
  byte bStack_31e;
  byte bStack_31d;
  byte bStack_31c;
  byte bStack_31b;
  byte bStack_31a;
  byte bStack_319;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  ulonglong local_2d8;
  undefined8 local_2d0;
  byte *local_2c8;
  byte *local_2c0;
  byte local_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2b0;
  byte *local_2a8;
  undefined8 uStack_2a0;
  byte *local_298;
  longlong *local_290;
  byte **local_288;
  byte **local_280;
  char *******local_278;
  uint *local_270;
  byte **local_268;
  undefined1 *local_260;
  byte *local_258;
  byte **local_250;
  uint *local_248;
  double local_240;
  byte *local_238;
  undefined8 local_230;
  ulonglong local_228;
  ulonglong local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  byte *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  byte *local_1c8;
  longlong local_1c0;
  byte *local_1b8;
  byte *local_1b0;
  byte local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [16];
  char *******local_188;
  undefined8 uStack_180;
  byte *local_178;
  int *piStack_170;
  byte *local_160;
  ulonglong local_158;
  ulonglong local_150;
  byte *local_148;
  byte *local_140;
  byte *local_138;
  byte *local_130;
  undefined4 local_124;
  uint local_120;
  uint local_11c;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  uint local_fc;
  uint local_f8;
  undefined4 local_f4;
  int *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  byte *local_d8;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  undefined8 local_b8;
  byte local_ae;
  bool local_ad;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  byte *local_a0;
  byte local_92;
  byte local_91;
  byte local_90;
  byte local_8f;
  byte local_8e;
  byte local_8d;
  uint local_8c;
  byte local_85;
  undefined1 local_84;
  byte local_83;
  byte local_82;
  char local_81;
  undefined8 local_80;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined2 uVar75;

  local_80 = 0xfffffffffffffffe;
  local_240 = 0.0;
  local_118 = (byte *)0x4;
  local_8c = 0;
  local_1e8 = (byte *)0x8000000000000;
  local_e0 = 1;
  local_1e0 = 7;
  local_83 = 0;
  local_a0 = (byte *)0x0;
  local_f8 = 10;
  local_238 = (byte *)0x20;
  local_d8 = (byte *)0x3;
  local_160 = (byte *)0x8;
  local_f4 = 6;
  local_230 = 6;
  local_124 = 3;
  local_81 = -0x20;
  local_92 = 0x70;
  local_1d8 = -8;
  local_cc = 0xffffffff;
  local_1d0 = 0xd;
  local_150 = 0xc;
  local_228 = 0x7ff0000000000000;
  local_220 = 0xfffffffffffff;
  local_148 = (byte *)0x9;
  local_108 = (byte *)0x2;
  local_218 = 0xe;
  local_f0 = (int *)0xf;
  local_91 = 0x2d;
  local_1c8 = (byte *)0x10;
  local_8d = 1;
  local_ac = 1;
  local_210 = 10;
  local_8e = 2;
  local_158 = 0xffffffffffffffff;
  local_85 = 0x2e;
  local_208 = 0x28;
  local_200 = 5;
  local_84 = 0x65;
  local_90 = 0x30;
  local_1f8 = 0xfff;
  local_1f0 = 0xb;
  local_fc = 0x84;
  local_1c0 = param_5;
  bVar45 = 2;
  if (param_4[10] != 0) {
    bVar45 = param_4[10];
  }
  uVar24 = *(uint *)(param_4 + 4);
  bVar47 = param_4[8];
  local_a4 = (undefined4)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)bVar47 < 'a');
  if ((char)bVar47 < 'a') {
    if ((char)bVar47 < 'F') {
      if (bVar47 != 0x45) {
        if (bVar47 != 0x41) goto LAB_180048617;
        local_82 = 0x70;
        local_a8 = 4;
        bVar15 = true;
        bVar42 = false;
        local_a4 = 1;
        goto LAB_180048640;
      }
LAB_18004853e:
      if (uVar24 == 0xffffffff) {
        uVar24 = 6;
      }
      local_a8 = 1;
    }
    else if (bVar47 == 0x46) {
LAB_180048580:
      if (uVar24 == 0xffffffff) {
        uVar24 = 6;
      }
      local_a8 = 2;
    }
    else {
      if (bVar47 != 0x47) goto LAB_180048617;
LAB_1800485d8:
      bVar42 = uVar24 == 0xffffffff;
      uVar24 = uVar24 + (uVar24 == 0);
      if (bVar42) {
        uVar24 = 6;
      }
      local_a8 = 3;
    }
    local_82 = 0x65;
    bVar42 = false;
    bVar15 = false;
  }
  else {
    if ((char)bVar47 < 'f') {
      if (bVar47 == 0x65) goto LAB_18004853e;
      if (bVar47 != 0x61) goto LAB_180048617;
      local_a8 = 4;
      bVar15 = true;
      local_82 = 0x70;
      bVar42 = false;
    }
    else {
      if (bVar47 == 0x66) goto LAB_180048580;
      if (bVar47 == 0x67) goto LAB_1800485d8;
LAB_180048617:
      local_82 = 0x65;
      bVar42 = true;
      bVar15 = false;
      local_a8 = 3;
    }
    local_a4 = 0;
  }
LAB_180048640:
  pbVar33 = local_988 + 1;
  local_11c = 0x432;
  if ((int)uVar24 < 0x432) {
    local_11c = uVar24;
  }
  local_2d8 = 0x432;
  if (0x432 < (int)uVar24) {
    local_2d8 = (ulonglong)uVar24;
  }
  local_2d0 = 0xacd388b8;
  pbVar36 = param_4;
  local_b8 = param_2;
  local_ae = bVar45;
  local_c4 = FUN_1801e13b0();
  pbVar21 = local_a0;
  pbVar40 = local_d8;
  local_c0 = local_8c;
  local_ad = local_c4 != local_8c;
  if (NAN((double)param_3) || NAN(local_240)) {
    pbVar36 = (byte *)0x4;
    FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
    pbVar40 = local_988;
    if (local_c4 != local_c0) {
      pbVar40 = pbVar33;
    }
    pbVar40[2] = DAT_1802a189a;
    *(undefined2 *)pbVar40 = DAT_1802a1898;
    pbVar40 = local_118;
    if (local_c4 == local_c0) {
      pbVar40 = local_d8;
    }
    local_198._0_8_ = local_988 + (longlong)pbVar40;
    cVar64 = (char)local_a4;
  }
  else {
    if (uVar24 == local_cc) {
      pbVar37 = local_41f;
      if (bVar42) {
        FUN_1800136f0(local_198,local_988);
      }
      else {
        local_110 = param_4;
        if ((longlong)param_3 < (longlong)local_a0) {
          local_988[0] = local_91;
          pbVar35 = (byte *)((ulonglong)param_3 & 0x7fffffffffffffff);
          pbVar30 = local_d8;
          pbVar28 = pbVar33;
          pbVar36 = pbVar35;
          if ((local_228 & (ulonglong)pbVar35) != local_228) goto LAB_180048786;
LAB_1800487ef:
          local_2c8 = local_a0;
          pbVar30 = (byte *)(local_220 & (ulonglong)pbVar35);
          puVar39 = (undefined2 *)&DAT_1802a18a0;
          pbVar36 = (byte *)0x4;
          local_2c0 = pbVar35;
          local_138 = pbVar28;
          local_e8 = param_1;
          FUN_18004e1e3(&DAT_1802a18a0,&DAT_180270745,0x19,4,&DAT_1802a18a4);
          pbVar28 = local_160;
          pbVar37 = local_1e8;
          if (pbVar30 != pbVar21) {
            puVar39 = (undefined2 *)&DAT_1802a18a8;
            pbVar36 = (byte *)0x9;
            FUN_18004e1e3(&DAT_1802a18a8,&DAT_18027077d,0x1e,9,&DAT_1802a18b4);
            pbVar21 = local_a0;
            if (((longlong)local_2c8 <= (longlong)param_3) || (pbVar40 = pbVar28, pbVar30 != pbVar37)) {
              pbVar37 = (byte *)((ulonglong)local_2c0 & (ulonglong)local_1e8);
              FUN_18004e1e3(&DAT_1802a18b8,&DAT_1802707c3,0x10,10,&DAT_1802a18c4);
              puVar39 = &DAT_1802a1898;
              pbVar36 = (byte *)0x4;
              FUN_18004e1e3(&DAT_1802a1898,&DAT_180270713,0x12,4,&DAT_1802a189c);
              pbVar40 = local_d8;
              if (pbVar37 == pbVar21) {
                puVar39 = (undefined2 *)&DAT_1802a18b8;
                pbVar40 = local_148;
              }
            }
          }
          pbVar37 = local_138;
          FUN_1802079d0(local_138,puVar39,pbVar40);
          pbVar37 = pbVar37 + (longlong)pbVar40;
          param_4 = local_110;
          param_1 = local_e8;
          uVar24 = local_8c;
        }
        else {
          pbVar28 = local_988;
          pbVar30 = local_108;
          pbVar35 = param_3;
          pbVar36 = param_3;
          if ((local_228 & (ulonglong)param_3) == local_228) goto LAB_1800487ef;
LAB_180048786:
          if (bVar15) {
            if (local_a0 == pbVar36) {
              pbVar28[0] = 0x30;
              pbVar28[1] = 0x70;
              pbVar28[2] = 0x2b;
              pbVar28[3] = 0x30;
              pbVar37 = pbVar28 + 4;
              uVar24 = local_8c;
            }
            else {
              pbVar40 = (byte *)(local_220 & (ulonglong)pbVar36);
              bVar42 = (byte *)((ulonglong)pbVar36 >> 0x34) != local_a0;
              uVar34 = (uint)((ulonglong)pbVar36 >> 0x34) - 0x3ff;
              pbVar36 = (byte *)(ulonglong)uVar34;
              uVar20 = 0xfffffc02;
              if (bVar42) {
                uVar20 = uVar34;
              }
              bVar47 = 0x31;
              if (!bVar42) {
                bVar47 = local_90;
              }
              *pbVar28 = bVar47;
              pbVar28 = pbVar28 + 1;
              if (pbVar40 != local_a0) {
                local_138 = (byte *)CONCAT44(local_138._4_4_,uVar20);
                local_e8 = param_1;
                *pbVar28 = local_85;
                bVar47 = 0x34;
                do {
                  uVar29 = local_e0;
                  param_4 = local_110;
                  param_1 = local_e8;
                  uVar24 = local_fc;
                  if (pbVar30 == (byte *)0x569) goto LAB_180048987;
                  bVar47 = bVar47 - 4;
                  local_988[(longlong)pbVar30] =
                       "0123456789abcdefghijklmnopqrstuvwxyz"[(ulonglong)pbVar40 >> (bVar47 & 0x3f) & 0xffffffff];
                  pbVar30 = pbVar30 + uVar29;
                  pbVar40 = (byte *)((ulonglong)pbVar40 & (local_158 << (bVar47 & 0x3f) ^ local_158));
                } while (pbVar40 != local_a0);
                pbVar28 = local_988 + (longlong)pbVar30;
                param_1 = local_e8;
                uVar20 = (uint)local_138;
              }
              param_4 = local_110;
              uVar24 = local_fc;
              if ((longlong)local_108 <= (longlong)pbVar37 - (longlong)pbVar28) {
                *pbVar28 = local_92;
                if ((int)uVar20 < (int)local_8c) {
                  uVar34 = local_8c - uVar20;
                }
                pbVar36 = (byte *)(ulonglong)uVar34;
                bVar47 = 0x2b;
                if ((int)uVar20 < (int)local_8c) {
                  bVar47 = local_91;
                }
                pbVar28[1] = bVar47;
                lVar32 = 0;
                do {
                  lVar31 = lVar32;
                  uVar24 = (uint)pbVar36;
                  *(byte *)((longlong)&uStack_2a0 + lVar31 + 7) =
                       (byte)((ulonglong)pbVar36 % (ulonglong)local_f8) | local_90;
                  pbVar36 = (byte *)((ulonglong)pbVar36 / (ulonglong)local_f8);
                  lVar32 = lVar31 + -1;
                } while (local_f8 <= uVar24);
                pbVar28 = pbVar28 + 2;
                uVar24 = local_fc;
                if (-lVar32 <= (longlong)pbVar37 - (longlong)pbVar28) {
                  FUN_1802079d0(pbVar28,(longlong)&uStack_2a0 + lVar31 + 7,-lVar32);
                  pbVar37 = pbVar28 + -lVar32;
                  uVar24 = local_8c;
                }
              }
            }
          }
          else {
            FUN_180013b70(&local_2b8);
            pbVar37 = (byte *)CONCAT71(uStack_2b7,local_2b8);
            param_4 = local_110;
            uVar24 = (uint)uStack_2b0;
          }
        }
LAB_180048987:
        local_198._8_4_ = uVar24;
        local_198._0_8_ = pbVar37;
      }
    }
    else {
      FUN_180046460(&local_2b8,local_988,local_41f);
      local_198._1_7_ = uStack_2b7;
      local_198[0] = local_2b8;
      local_198._8_4_ = (uint)uStack_2b0;
      local_198._12_4_ = uStack_2b0._4_4_;
    }
    cVar64 = (char)local_a4;
  }
  uVar19 = local_198._0_8_;
  pbVar40 = local_988;
  iVar38 = local_198._0_4_ - (int)pbVar40;
  local_1b8 = pbVar40;
  local_bc = iVar38;
  if (local_c4 == local_c0) {
    if (bVar45 != local_8e) {
      iVar38 = iVar38 + local_ac;
      local_bc = iVar38;
    }
  }
  else {
    local_1b8 = pbVar33;
    pbVar40 = pbVar33;
  }
  local_1b8 = pbVar40;
  local_bc = iVar38;
  if (cVar64 != '\0') {
    if (pbVar40 != (byte *)local_198._0_8_) {
      pbVar21 = (byte *)(local_198._0_8_ + -(longlong)pbVar40);
      pbVar33 = pbVar40;
      if (local_118 <= pbVar21) {
        pbVar37 = local_a0;
        if (local_1c8 <= pbVar21) {
          pbVar28 = (byte *)(local_150 & (ulonglong)pbVar21);
          pbVar37 = (byte *)((ulonglong)pbVar21 & 0xfffffffffffffff0);
          pbVar33 = local_a0;
          do {
            pbVar36 = pbVar40 + (longlong)pbVar33;
            bVar45 = *pbVar36;
            bVar47 = pbVar36[1];
            bVar49 = pbVar36[2];
            bVar51 = pbVar36[3];
            bVar3 = pbVar36[4];
            bVar4 = pbVar36[5];
            bVar5 = pbVar36[6];
            bVar6 = pbVar36[7];
            bVar7 = pbVar36[8];
            bVar8 = pbVar36[9];
            bVar9 = pbVar36[10];
            bVar10 = pbVar36[0xb];
            bVar11 = pbVar36[0xc];
            bVar12 = pbVar36[0xd];
            bVar13 = pbVar36[0xe];
            bVar14 = pbVar36[0xf];
            bVar44 = bVar45 + DAT_180209800;
            bVar46 = bVar47 + DAT_180209800._1_1_;
            bVar48 = bVar49 + DAT_180209800._2_1_;
            bVar50 = bVar51 + DAT_180209800._3_1_;
            bVar52 = bVar3 + DAT_180209800._4_1_;
            bVar53 = bVar4 + DAT_180209800._5_1_;
            bVar54 = bVar5 + DAT_180209800._6_1_;
            bVar55 = bVar6 + DAT_180209800._7_1_;
            bVar56 = bVar7 + DAT_180209800._8_1_;
            bVar57 = bVar8 + DAT_180209800._9_1_;
            bVar58 = bVar9 + DAT_180209800._10_1_;
            bVar59 = bVar10 + DAT_180209800._11_1_;
            bVar60 = bVar11 + DAT_180209800._12_1_;
            bVar61 = bVar12 + DAT_180209800._13_1_;
            bVar62 = bVar13 + DAT_180209800._14_1_;
            bVar63 = bVar14 + DAT_180209800._15_1_;
            auVar43[0] = -((byte)((0x19 < bVar44) * '\x19' | (0x19 >= bVar44) * bVar44) == bVar44);
            auVar43[1] = -((byte)((0x19 < bVar46) * '\x19' | (0x19 >= bVar46) * bVar46) == bVar46);
            auVar43[2] = -((byte)((0x19 < bVar48) * '\x19' | (0x19 >= bVar48) * bVar48) == bVar48);
            auVar43[3] = -((byte)((0x19 < bVar50) * '\x19' | (0x19 >= bVar50) * bVar50) == bVar50);
            auVar43[4] = -((byte)((0x19 < bVar52) * '\x19' | (0x19 >= bVar52) * bVar52) == bVar52);
            auVar43[5] = -((byte)((0x19 < bVar53) * '\x19' | (0x19 >= bVar53) * bVar53) == bVar53);
            auVar43[6] = -((byte)((0x19 < bVar54) * '\x19' | (0x19 >= bVar54) * bVar54) == bVar54);
            auVar43[7] = -((byte)((0x19 < bVar55) * '\x19' | (0x19 >= bVar55) * bVar55) == bVar55);
            auVar43[8] = -((byte)((0x19 < bVar56) * '\x19' | (0x19 >= bVar56) * bVar56) == bVar56);
            auVar43[9] = -((byte)((0x19 < bVar57) * '\x19' | (0x19 >= bVar57) * bVar57) == bVar57);
            auVar43[10] = -((byte)((0x19 < bVar58) * '\x19' | (0x19 >= bVar58) * bVar58) == bVar58);
            auVar43[0xb] = -((byte)((0x19 < bVar59) * '\x19' | (0x19 >= bVar59) * bVar59) == bVar59);
            auVar43[0xc] = -((byte)((0x19 < bVar60) * '\x19' | (0x19 >= bVar60) * bVar60) == bVar60);
            auVar43[0xd] = -((byte)((0x19 < bVar61) * '\x19' | (0x19 >= bVar61) * bVar61) == bVar61);
            auVar43[0xe] = -((byte)((0x19 < bVar62) * '\x19' | (0x19 >= bVar62) * bVar62) == bVar62);
            auVar43[0xf] = -((byte)((0x19 < bVar63) * '\x19' | (0x19 >= bVar63) * bVar63) == bVar63);
            uVar1 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
            pbVar36 = (byte *)(ulonglong)uVar1;
            if ((uVar1 >> ((uint)local_a0 & 0x1f) & 1) == 0) {
              if ((uVar1 >> ((uint)local_e0 & 0x1f) & 1) != 0) goto LAB_180048d11;
LAB_180048ae8:
              if ((uVar1 >> ((uint)local_108 & 0x1f) & 1) != 0) goto LAB_180048af9;
LAB_180048d4a:
              if ((uVar1 >> ((uint)local_d8 & 0x1f) & 1) != 0) goto LAB_180048d5b;
LAB_180048b32:
              if ((uVar1 >> ((uint)local_118 & 0x1f) & 1) != 0) goto LAB_180048b43;
LAB_180048d94:
              if ((uVar1 >> ((uint)local_200 & 0x1f) & 1) != 0) goto LAB_180048da5;
LAB_180048b7c:
              if ((uVar1 >> ((uint)local_230 & 0x1f) & 1) != 0) goto LAB_180048b8d;
LAB_180048dde:
              if ((uVar1 >> ((uint)local_1e0 & 0x1f) & 1) != 0) goto LAB_180048def;
LAB_180048bc6:
              if ((uVar1 >> ((uint)local_160 & 0x1f) & 1) != 0) goto LAB_180048bd7;
LAB_180048e28:
              if ((uVar1 >> ((uint)local_148 & 0x1f) & 1) != 0) goto LAB_180048e39;
LAB_180048c10:
              if ((uVar1 >> ((uint)local_210 & 0x1f) & 1) != 0) goto LAB_180048c21;
LAB_180048e72:
              if ((uVar1 >> ((uint)local_1f0 & 0x1f) & 1) != 0) goto LAB_180048e83;
LAB_180048c5a:
              if ((uVar1 >> ((uint)local_150 & 0x1f) & 1) != 0) goto LAB_180048c6b;
LAB_180048ebc:
              if ((uVar1 >> ((uint)local_1d0 & 0x1f) & 1) != 0) goto LAB_180048ecd;
LAB_180048ca4:
              if ((uVar1 >> ((uint)local_218 & 0x1f) & 1) != 0) goto LAB_180048cb5;
LAB_180048f06:
              uVar24 = (uint)local_f0;
            }
            else {
              local_418[0] = bVar45;
              local_418[1] = bVar47;
              local_418[2] = bVar49;
              local_418[3] = bVar51;
              bStack_414 = bVar3;
              bStack_413 = bVar4;
              bStack_412 = bVar5;
              bStack_411 = bVar6;
              bStack_410 = bVar7;
              bStack_40f = bVar8;
              bStack_40e = bVar9;
              bStack_40d = bVar10;
              bStack_40c = bVar11;
              bStack_40b = bVar12;
              bStack_40a = bVar13;
              bStack_409 = bVar14;
              pbVar40[(longlong)pbVar33] = local_418[(uint)local_a0 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_e0 & 0x1f) & 1) == 0) goto LAB_180048ae8;
LAB_180048d11:
              local_408[0] = bVar45;
              local_408[1] = bVar47;
              local_408[2] = bVar49;
              local_408[3] = bVar51;
              bStack_404 = bVar3;
              bStack_403 = bVar4;
              bStack_402 = bVar5;
              bStack_401 = bVar6;
              bStack_400 = bVar7;
              bStack_3ff = bVar8;
              bStack_3fe = bVar9;
              bStack_3fd = bVar10;
              bStack_3fc = bVar11;
              bStack_3fb = bVar12;
              bStack_3fa = bVar13;
              bStack_3f9 = bVar14;
              (pbVar40 + 1)[(longlong)pbVar33] = local_408[(uint)local_e0 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_108 & 0x1f) & 1) == 0) goto LAB_180048d4a;
LAB_180048af9:
              local_3f8[0] = bVar45;
              local_3f8[1] = bVar47;
              local_3f8[2] = bVar49;
              local_3f8[3] = bVar51;
              bStack_3f4 = bVar3;
              bStack_3f3 = bVar4;
              bStack_3f2 = bVar5;
              bStack_3f1 = bVar6;
              bStack_3f0 = bVar7;
              bStack_3ef = bVar8;
              bStack_3ee = bVar9;
              bStack_3ed = bVar10;
              bStack_3ec = bVar11;
              bStack_3eb = bVar12;
              bStack_3ea = bVar13;
              bStack_3e9 = bVar14;
              (pbVar40 + 2)[(longlong)pbVar33] = local_3f8[(uint)local_108 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_d8 & 0x1f) & 1) == 0) goto LAB_180048b32;
LAB_180048d5b:
              local_3e8[0] = bVar45;
              local_3e8[1] = bVar47;
              local_3e8[2] = bVar49;
              local_3e8[3] = bVar51;
              bStack_3e4 = bVar3;
              bStack_3e3 = bVar4;
              bStack_3e2 = bVar5;
              bStack_3e1 = bVar6;
              bStack_3e0 = bVar7;
              bStack_3df = bVar8;
              bStack_3de = bVar9;
              bStack_3dd = bVar10;
              bStack_3dc = bVar11;
              bStack_3db = bVar12;
              bStack_3da = bVar13;
              bStack_3d9 = bVar14;
              (pbVar40 + 3)[(longlong)pbVar33] = local_3e8[(uint)local_d8 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_118 & 0x1f) & 1) == 0) goto LAB_180048d94;
LAB_180048b43:
              local_3d8[0] = bVar45;
              local_3d8[1] = bVar47;
              local_3d8[2] = bVar49;
              local_3d8[3] = bVar51;
              bStack_3d4 = bVar3;
              bStack_3d3 = bVar4;
              bStack_3d2 = bVar5;
              bStack_3d1 = bVar6;
              bStack_3d0 = bVar7;
              bStack_3cf = bVar8;
              bStack_3ce = bVar9;
              bStack_3cd = bVar10;
              bStack_3cc = bVar11;
              bStack_3cb = bVar12;
              bStack_3ca = bVar13;
              bStack_3c9 = bVar14;
              (pbVar40 + 4)[(longlong)pbVar33] = local_3d8[(uint)local_118 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_200 & 0x1f) & 1) == 0) goto LAB_180048b7c;
LAB_180048da5:
              local_3c8[0] = bVar45;
              local_3c8[1] = bVar47;
              local_3c8[2] = bVar49;
              local_3c8[3] = bVar51;
              bStack_3c4 = bVar3;
              bStack_3c3 = bVar4;
              bStack_3c2 = bVar5;
              bStack_3c1 = bVar6;
              bStack_3c0 = bVar7;
              bStack_3bf = bVar8;
              bStack_3be = bVar9;
              bStack_3bd = bVar10;
              bStack_3bc = bVar11;
              bStack_3bb = bVar12;
              bStack_3ba = bVar13;
              bStack_3b9 = bVar14;
              (pbVar40 + 5)[(longlong)pbVar33] = local_3c8[(uint)local_200 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_230 & 0x1f) & 1) == 0) goto LAB_180048dde;
LAB_180048b8d:
              local_3b8[0] = bVar45;
              local_3b8[1] = bVar47;
              local_3b8[2] = bVar49;
              local_3b8[3] = bVar51;
              bStack_3b4 = bVar3;
              bStack_3b3 = bVar4;
              bStack_3b2 = bVar5;
              bStack_3b1 = bVar6;
              bStack_3b0 = bVar7;
              bStack_3af = bVar8;
              bStack_3ae = bVar9;
              bStack_3ad = bVar10;
              bStack_3ac = bVar11;
              bStack_3ab = bVar12;
              bStack_3aa = bVar13;
              bStack_3a9 = bVar14;
              (pbVar40 + 6)[(longlong)pbVar33] = local_3b8[(uint)local_230 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_1e0 & 0x1f) & 1) == 0) goto LAB_180048bc6;
LAB_180048def:
              local_3a8[0] = bVar45;
              local_3a8[1] = bVar47;
              local_3a8[2] = bVar49;
              local_3a8[3] = bVar51;
              bStack_3a4 = bVar3;
              bStack_3a3 = bVar4;
              bStack_3a2 = bVar5;
              bStack_3a1 = bVar6;
              bStack_3a0 = bVar7;
              bStack_39f = bVar8;
              bStack_39e = bVar9;
              bStack_39d = bVar10;
              bStack_39c = bVar11;
              bStack_39b = bVar12;
              bStack_39a = bVar13;
              bStack_399 = bVar14;
              (pbVar40 + 7)[(longlong)pbVar33] = local_3a8[(uint)local_1e0 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_160 & 0x1f) & 1) == 0) goto LAB_180048e28;
LAB_180048bd7:
              local_398[0] = bVar45;
              local_398[1] = bVar47;
              local_398[2] = bVar49;
              local_398[3] = bVar51;
              bStack_394 = bVar3;
              bStack_393 = bVar4;
              bStack_392 = bVar5;
              bStack_391 = bVar6;
              bStack_390 = bVar7;
              bStack_38f = bVar8;
              bStack_38e = bVar9;
              bStack_38d = bVar10;
              bStack_38c = bVar11;
              bStack_38b = bVar12;
              bStack_38a = bVar13;
              bStack_389 = bVar14;
              (pbVar40 + 8)[(longlong)pbVar33] = local_398[(uint)local_160 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_148 & 0x1f) & 1) == 0) goto LAB_180048c10;
LAB_180048e39:
              local_388[0] = bVar45;
              local_388[1] = bVar47;
              local_388[2] = bVar49;
              local_388[3] = bVar51;
              bStack_384 = bVar3;
              bStack_383 = bVar4;
              bStack_382 = bVar5;
              bStack_381 = bVar6;
              bStack_380 = bVar7;
              bStack_37f = bVar8;
              bStack_37e = bVar9;
              bStack_37d = bVar10;
              bStack_37c = bVar11;
              bStack_37b = bVar12;
              bStack_37a = bVar13;
              bStack_379 = bVar14;
              (pbVar40 + 9)[(longlong)pbVar33] = local_388[(uint)local_148 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_210 & 0x1f) & 1) == 0) goto LAB_180048e72;
LAB_180048c21:
              local_378[0] = bVar45;
              local_378[1] = bVar47;
              local_378[2] = bVar49;
              local_378[3] = bVar51;
              bStack_374 = bVar3;
              bStack_373 = bVar4;
              bStack_372 = bVar5;
              bStack_371 = bVar6;
              bStack_370 = bVar7;
              bStack_36f = bVar8;
              bStack_36e = bVar9;
              bStack_36d = bVar10;
              bStack_36c = bVar11;
              bStack_36b = bVar12;
              bStack_36a = bVar13;
              bStack_369 = bVar14;
              (pbVar40 + 10)[(longlong)pbVar33] = local_378[(uint)local_210 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_1f0 & 0x1f) & 1) == 0) goto LAB_180048c5a;
LAB_180048e83:
              local_368[0] = bVar45;
              local_368[1] = bVar47;
              local_368[2] = bVar49;
              local_368[3] = bVar51;
              bStack_364 = bVar3;
              bStack_363 = bVar4;
              bStack_362 = bVar5;
              bStack_361 = bVar6;
              bStack_360 = bVar7;
              bStack_35f = bVar8;
              bStack_35e = bVar9;
              bStack_35d = bVar10;
              bStack_35c = bVar11;
              bStack_35b = bVar12;
              bStack_35a = bVar13;
              bStack_359 = bVar14;
              (pbVar40 + 0xb)[(longlong)pbVar33] = local_368[(uint)local_1f0 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_150 & 0x1f) & 1) == 0) goto LAB_180048ebc;
LAB_180048c6b:
              local_358[0] = bVar45;
              local_358[1] = bVar47;
              local_358[2] = bVar49;
              local_358[3] = bVar51;
              bStack_354 = bVar3;
              bStack_353 = bVar4;
              bStack_352 = bVar5;
              bStack_351 = bVar6;
              bStack_350 = bVar7;
              bStack_34f = bVar8;
              bStack_34e = bVar9;
              bStack_34d = bVar10;
              bStack_34c = bVar11;
              bStack_34b = bVar12;
              bStack_34a = bVar13;
              bStack_349 = bVar14;
              (pbVar40 + 0xc)[(longlong)pbVar33] = local_358[(uint)local_150 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_1d0 & 0x1f) & 1) == 0) goto LAB_180048ca4;
LAB_180048ecd:
              local_348[0] = bVar45;
              local_348[1] = bVar47;
              local_348[2] = bVar49;
              local_348[3] = bVar51;
              bStack_344 = bVar3;
              bStack_343 = bVar4;
              bStack_342 = bVar5;
              bStack_341 = bVar6;
              bStack_340 = bVar7;
              bStack_33f = bVar8;
              bStack_33e = bVar9;
              bStack_33d = bVar10;
              bStack_33c = bVar11;
              bStack_33b = bVar12;
              bStack_33a = bVar13;
              bStack_339 = bVar14;
              (pbVar40 + 0xd)[(longlong)pbVar33] = local_348[(uint)local_1d0 & 0xf] + local_81;
              if ((uVar1 >> ((uint)local_218 & 0x1f) & 1) == 0) goto LAB_180048f06;
LAB_180048cb5:
              local_338[0] = bVar45;
              local_338[1] = bVar47;
              local_338[2] = bVar49;
              local_338[3] = bVar51;
              bStack_334 = bVar3;
              bStack_333 = bVar4;
              bStack_332 = bVar5;
              bStack_331 = bVar6;
              bStack_330 = bVar7;
              bStack_32f = bVar8;
              bStack_32e = bVar9;
              bStack_32d = bVar10;
              bStack_32c = bVar11;
              bStack_32b = bVar12;
              bStack_32a = bVar13;
              bStack_329 = bVar14;
              (pbVar40 + 0xe)[(longlong)pbVar33] = local_338[(uint)local_218 & 0xf] + local_81;
              uVar24 = (uint)local_f0;
            }
            if ((uVar1 >> (uVar24 & 0x1f) & 1) != 0) {
              local_328[0] = bVar45;
              local_328[1] = bVar47;
              local_328[2] = bVar49;
              local_328[3] = bVar51;
              bStack_324 = bVar3;
              bStack_323 = bVar4;
              bStack_322 = bVar5;
              bStack_321 = bVar6;
              bStack_320 = bVar7;
              bStack_31f = bVar8;
              bStack_31e = bVar9;
              bStack_31d = bVar10;
              bStack_31c = bVar11;
              bStack_31b = bVar12;
              bStack_31a = bVar13;
              bStack_319 = bVar14;
              pbVar36 = (byte *)(ulonglong)(byte)(local_328[(uint)local_f0 & 0xf] + local_81);
              (pbVar40 + 0xf)[(longlong)pbVar33] = local_328[(uint)local_f0 & 0xf] + local_81;
            }
            pbVar33 = pbVar33 + (longlong)local_1c8;
          } while (pbVar33 != pbVar37);
          if (pbVar21 == pbVar37) goto LAB_1800490ed;
          if (pbVar28 == local_a0) {
            pbVar33 = pbVar37 + (longlong)pbVar40;
            goto LAB_180049a6c;
          }
        }
        pbVar28 = (byte *)((ulonglong)pbVar21 & 0xfffffffffffffffc);
        pbVar33 = pbVar40 + (longlong)pbVar28;
        do {
          uVar24 = *(uint *)(pbVar40 + (longlong)pbVar37);
          auVar43 = ZEXT416(uVar24);
          bVar45 = (char)uVar24 + DAT_180209820;
          bVar47 = (char)(uVar24 >> 8) + DAT_180209820._1_1_;
          bVar49 = (char)(uVar24 >> 0x10) + DAT_180209820._2_1_;
          bVar51 = (char)(uVar24 >> 0x18) + DAT_180209820._3_1_;
          cVar64 = -((byte)((bVar45 < 0x1a) * '\x1a' | (bVar45 >= 0x1a) * bVar45) == bVar45);
          cVar72 = -((byte)((bVar47 < 0x1a) * '\x1a' | (bVar47 >= 0x1a) * bVar47) == bVar47);
          cVar73 = -((byte)((bVar49 < 0x1a) * '\x1a' | (bVar49 >= 0x1a) * bVar49) == bVar49);
          cVar74 = -((byte)((bVar51 < 0x1a) * '\x1a' | (bVar51 >= 0x1a) * bVar51) == bVar51);
          auVar66._0_13_ = ZEXT613(0xffffffffffff) << 0x38;
          auVar67[0xd] = 0xff;
          auVar67._0_13_ = auVar66._0_13_;
          auVar67[0xe] = 0xff;
          auVar67[0xf] = 0xff;
          auVar66._14_2_ = auVar67._14_2_;
          auVar66[0xd] = 0xff;
          Var18 = CONCAT91(CONCAT81((longlong)
                                    (CONCAT72((int7)(CONCAT63((int6)(CONCAT54((int5)(CONCAT45((int)(CONCAT36(auVar66.
                                                            _13_3_,0xffffffffffff) >> 0x28),0xffffffffff) >> 0x20),
                                                            0xffffffff) >> 0x18),0xffffff) >> 0x10),0xffff) >> 8),cVar74
                                   ),cVar74);
          auVar17._2_10_ = Var18;
          auVar17[1] = cVar73;
          auVar17[0] = cVar73;
          auVar16._2_12_ = auVar17;
          auVar16[1] = cVar72;
          auVar16[0] = cVar72;
          auVar65._0_2_ = CONCAT11(cVar64,cVar64);
          auVar65._2_14_ = auVar16;
          uVar75 = (undefined2)Var18;
          auVar71._0_12_ = auVar65._0_12_;
          auVar71._12_2_ = uVar75;
          auVar71._14_2_ = uVar75;
          auVar70._12_4_ = auVar71._12_4_;
          auVar70._0_10_ = auVar65._0_10_;
          auVar70._10_2_ = auVar17._0_2_;
          auVar69._10_6_ = auVar70._10_6_;
          auVar69._0_8_ = auVar65._0_8_;
          auVar69._8_2_ = auVar17._0_2_;
          auVar68._8_8_ = auVar69._8_8_;
          auVar68._6_2_ = auVar16._0_2_;
          auVar68._4_2_ = auVar16._0_2_;
          auVar68._2_2_ = auVar65._0_2_;
          auVar68._0_2_ = auVar65._0_2_;
          uVar24 = movmskps((int)pbVar36,auVar68);
          uVar24 = uVar24 ^ 0xf;
          pbVar36 = (byte *)(ulonglong)uVar24;
          if ((uVar24 >> ((uint)local_a0 & 0x1f) & 1) == 0) {
            if ((uVar24 >> ((uint)local_e0 & 0x1f) & 1) != 0) goto LAB_18004906d;
LAB_18004900f:
            if ((uVar24 >> ((uint)local_108 & 0x1f) & 1) != 0) goto LAB_180049020;
LAB_1800490a6:
            uVar20 = (uint)local_d8;
          }
          else {
            local_318 = auVar43;
            pbVar40[(longlong)pbVar37] = local_318[(uint)local_a0 & 0xf] + local_81;
            if ((uVar24 >> ((uint)local_e0 & 0x1f) & 1) == 0) goto LAB_18004900f;
LAB_18004906d:
            local_308 = auVar43;
            (pbVar40 + 1)[(longlong)pbVar37] = local_308[(uint)local_e0 & 0xf] + local_81;
            if ((uVar24 >> ((uint)local_108 & 0x1f) & 1) == 0) goto LAB_1800490a6;
LAB_180049020:
            local_2f8 = auVar43;
            (pbVar40 + 2)[(longlong)pbVar37] = local_2f8[(uint)local_108 & 0xf] + local_81;
            uVar20 = (uint)local_d8;
          }
          if ((uVar24 >> (uVar20 & 0x1f) & 1) != 0) {
            local_2e8 = auVar43;
            pbVar36 = (byte *)(ulonglong)(byte)(local_2e8[(uint)local_d8 & 0xf] + local_81);
            (pbVar40 + 3)[(longlong)pbVar37] = local_2e8[(uint)local_d8 & 0xf] + local_81;
          }
          pbVar37 = pbVar37 + (longlong)local_118;
        } while (pbVar37 != pbVar28);
        if (pbVar21 == pbVar28) goto LAB_1800490ed;
      }
LAB_180049a6c:
      do {
        if ((byte)(*pbVar33 + 0x9f) < 0x1a) {
          *pbVar33 = *pbVar33 + local_81;
        }
        pbVar33 = pbVar33 + 1;
      } while (pbVar33 != (byte *)uVar19);
    }
LAB_1800490ed:
    local_82 = local_82 + local_81;
  }
  dVar2 = ABS((double)param_3);
  local_8f = local_83;
  local_130 = (byte *)uVar19;
  local_140 = (byte *)uVar19;
  local_1b0 = (byte *)uVar19;
  local_c8 = local_8c;
  local_120 = local_8c;
  local_188 = (char *******)0x0;
  uStack_180 = 0;
  local_178 = (byte *)0x0;
  piStack_170 = local_f0;
  uVar24 = local_8c;
  if (dVar2 != INFINITY) {
    pbVar33 = (byte *)uVar19;
    bVar45 = local_83;
    if (((param_4[0xb] | param_4[0xc]) & 1) != 0) {
      pbVar36 = (byte *)uVar19;
      if (pbVar40 < (ulonglong)uVar19) {
        pbVar21 = pbVar40;
        if ((byte *)(uVar19 - (longlong)pbVar40 & local_e0) != local_a0) {
          local_140 = pbVar40;
          if ((*pbVar40 != local_85) && (local_140 = (byte *)uVar19, *pbVar40 == local_82)) {
            local_130 = pbVar40;
          }
          pbVar21 = pbVar40 + 1;
        }
        pbVar33 = local_130;
        pbVar36 = local_140;
        if ((byte *)(uVar19 + local_158) != pbVar40) {
          pbVar21 = pbVar21 + 1;
          do {
            pbVar37 = pbVar21 + -1;
            if (pbVar21[-1] == local_85) {
              bVar45 = *pbVar21;
              pbVar28 = pbVar37;
            }
            else {
              if (pbVar21[-1] == local_82) {
                pbVar33 = pbVar37;
                local_130 = pbVar37;
              }
              bVar45 = *pbVar21;
              pbVar37 = local_140;
              pbVar28 = pbVar36;
            }
            local_140 = pbVar21;
            pbVar36 = pbVar21;
            if ((bVar45 != local_85) && (local_140 = pbVar37, pbVar36 = pbVar28, bVar45 == local_82)) {
              local_130 = pbVar21;
              pbVar33 = pbVar21;
            }
            pbVar37 = pbVar21 + 1;
            pbVar21 = pbVar21 + 2;
          } while (pbVar37 != (byte *)uVar19);
        }
      }
      local_e8 = param_1;
      pbVar21 = pbVar36;
      if (pbVar33 < pbVar36) {
        pbVar21 = pbVar33;
      }
      local_1b0 = pbVar21;
      if ((param_4[0xb] != 0) && (pbVar36 == (byte *)uVar19)) {
        iVar38 = iVar38 + local_ac;
        local_bc = iVar38;
        local_8f = local_8d;
      }
      bVar45 = local_8f;
      param_1 = local_e8;
      if (param_4[0xc] == 1) {
        if (local_1c0 == 0) {
          local_1a0 = (longlong *)FUN_1801d8b48(1);
        }
        else {
          local_1a0 = *(longlong **)(local_1c0 + 8);
          (**(code **)(*local_1a0 + 8))();
        }
        plVar22 = (longlong *)FUN_180029a60(local_1a8);
        (**(code **)(*plVar22 + 0x28))(plVar22,&local_2b8);
        if (local_f0 < piStack_170) {
          uVar29 = local_e0 + (longlong)piStack_170;
          pppppppcVar25 = local_188;
          if (local_1f8 < uVar29) {
            pppppppcVar25 = (char *******)local_188[-1];
            if (local_238 <= (byte *)((longlong)local_188 + (local_1d8 - (longlong)pppppppcVar25))) goto LAB_180049b15;
            uVar29 = (longlong)piStack_170 + local_208;
          }
          thunk_FUN_1801f42e0(pppppppcVar25,uVar29);
        }
        local_188 = (char *******)CONCAT71(uStack_2b7,local_2b8);
        uStack_180 = CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0);
        local_178 = local_2a8;
        piStack_170 = uStack_2a0;
        local_2a8 = local_a0;
        uStack_2a0 = local_f0;
        local_2b8 = local_83;
        if ((local_1a0 != (longlong *)0x0) &&
           (puVar23 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(), puVar23 != (undefined8 *)0x0)) {
          (**(code **)*puVar23)(puVar23,local_ac);
        }
        pppppppcVar25 = local_188;
        if (piStack_170 <= local_f0) {
          pppppppcVar25 = (char *******)&local_188;
        }
        local_120 = local_8c;
        if (local_178 != local_a0) {
          uVar41 = (longlong)pbVar21 - (longlong)pbVar40;
          uVar29 = (ulonglong)(char)*(byte *)pppppppcVar25;
          if (uVar29 < uVar41) {
            pppppppcVar26 = pppppppcVar25;
            do {
              uVar41 = uVar41 - uVar29;
              local_120 = local_120 + local_ac;
              pppppppcVar27 = (char *******)((longlong)pppppppcVar26 + 1);
              if ((char *******)((longlong)pppppppcVar26 + 1) == (char *******)(local_178 + (longlong)pppppppcVar25)) {
                pppppppcVar27 = pppppppcVar26;
              }
              uVar29 = (ulonglong)(char)*(byte *)pppppppcVar27;
              pppppppcVar26 = pppppppcVar27;
            } while (uVar29 < uVar41);
          }
        }
        iVar38 = iVar38 + local_120;
        local_bc = iVar38;
        param_1 = local_e8;
      }
    }
    uVar20 = (int)local_2d8 + (int)local_2d0 + 0x532c7316;
    uVar24 = uVar20;
    if (local_a8 < 3) {
      local_c8 = uVar20;
      if (local_a8 != 2) {
LAB_180049540:
        local_c8 = uVar20;
        if (((uVar20 != local_8c) && (param_4[0xb] == 0)) && (param_4[0xc] == 0)) {
          do {
            pbVar33 = pbVar33 + -1;
            local_130 = pbVar33;
          } while (*pbVar33 != local_82);
        }
      }
    }
    else {
      if (local_a8 != 3) goto LAB_180049540;
      uVar24 = local_8c;
      if (param_4[0xb] != 1) goto LAB_18004985e;
      bVar47 = param_4[8];
      if ((char)bVar47 < 'g') {
        if (bVar47 != 0x47) {
LAB_180049539:
          uVar24 = 0;
          goto LAB_18004985e;
        }
      }
      else if (bVar47 != 0x67) goto LAB_180049539;
      uVar24 = uVar20 + local_11c + ((int)pbVar40 - (int)pbVar33) + (uint)(bVar45 ^ local_8d);
      local_c8 = uVar24;
      if ((pbVar33 == (byte *)uVar19) &&
         (local_c8 = uVar24, pbVar40 < (ulonglong)uVar19 && ((double)param_3 != local_240 && dVar2 < 1.0))) {
        do {
          while( true ) {
            bVar45 = *pbVar40;
            if ('/' < (char)bVar45) break;
            if ((bVar45 != 0x2e) || (pbVar40 = pbVar40 + 1, pbVar40 == (byte *)uVar19)) goto LAB_18004985e;
          }
          if (bVar45 != 0x30) break;
          uVar24 = uVar24 + local_ac;
          pbVar40 = pbVar40 + 1;
          local_c8 = uVar24;
        } while (pbVar40 != (byte *)uVar19);
      }
    }
  }
LAB_18004985e:
  local_bc = iVar38 + uVar24;
  local_2b8 = (byte)&local_ae;
  uStack_2b7 = (undefined7)((ulonglong)&local_ae >> 8);
  uStack_2b0 = &local_ad;
  local_2a8 = local_1a8;
  uStack_2a0 = &local_bc;
  local_290 = &local_1c0;
  local_288 = &local_1b8;
  local_280 = &local_1b0;
  local_278 = (char *******)&local_188;
  local_270 = &local_120;
  local_268 = &local_140;
  local_260 = local_198;
  local_258 = &local_8f;
  local_250 = &local_130;
  local_248 = &local_c8;
  local_1a8[0] = param_4[9] == local_83 & param_4[0xd] & dVar2 != INFINITY;
  local_298 = param_4;
  if (local_1a8[0] == 0) {
    FUN_18004a1a0(param_1,local_b8,local_bc,param_4,local_8e,&local_2b8);
  }
  else {
    FUN_180049ca0(&local_2b8,param_1);
  }
  if (local_f0 < piStack_170) {
    uVar29 = local_e0 + (longlong)piStack_170;
    pppppppcVar25 = local_188;
    if (local_1f8 < uVar29) {
      pppppppcVar25 = (char *******)local_188[-1];
      if (local_238 <= (byte *)((longlong)local_188 + (local_1d8 - (longlong)pppppppcVar25))) {
LAB_180049b15:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_8c,(uintptr_t)local_a0);
      }
      uVar29 = (longlong)piStack_170 + local_208;
    }
    thunk_FUN_1801f42e0(pppppppcVar25,uVar29);
  }
  return param_1;
}



void Unwind_180049b40(void)

{
  Unwind_1801dd394();
}



void Unwind_180049b80(void)

{
  Unwind_1801dd394();
}



void Unwind_180049bc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x818) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x818) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x90c));
    }
  }
  return;
}



void Unwind_180049c40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x830);
  return;
}



undefined8 * FUN_180049ca0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_58 = 0;
  local_50 = 1;
  local_54 = 1;
  local_41 = 0x30;
  if (*(char *)param_1[1] == '\x01') {
    lVar9 = param_3[2];
    uVar11 = lVar9 + 1;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    lVar10 = param_3[1];
    param_3[2] = uVar11;
    uVar6 = 0x2d;
  }
  else {
    cVar1 = *(char *)*param_1;
    if (cVar1 < '\x03') {
      if (cVar1 != '\x01') goto LAB_180049d4d;
      lVar9 = param_3[2];
      uVar11 = lVar9 + 1;
      if ((ulonglong)param_3[3] < uVar11) {
        (**(code **)*param_3)(param_3);
        lVar9 = param_3[2];
        uVar11 = local_50 + lVar9;
      }
      lVar10 = param_3[1];
      param_3[2] = uVar11;
      uVar6 = 0x2b;
    }
    else {
      if (cVar1 != '\x03') goto LAB_180049d4d;
      lVar9 = param_3[2];
      uVar11 = lVar9 + 1;
      if ((ulonglong)param_3[3] < uVar11) {
        (**(code **)*param_3)(param_3);
        lVar9 = param_3[2];
        uVar11 = local_50 + lVar9;
      }
      lVar10 = param_3[1];
      param_3[2] = uVar11;
      uVar6 = 0x20;
    }
  }
  *(undefined1 *)(lVar10 + lVar9) = uVar6;
LAB_180049d4d:
  if ((*(char *)param_1[2] == '\x01') &&
     (uVar13 = *(int *)param_1[4] - *(int *)param_1[3], uVar11 = (ulonglong)uVar13,
     uVar13 != 0 && *(int *)param_1[3] <= *(int *)param_1[4])) {
    do {
      lVar9 = param_3[2];
      uVar12 = local_50 + lVar9;
      if ((ulonglong)param_3[3] < uVar12) {
        (**(code **)*param_3)(param_3);
        lVar9 = param_3[2];
        uVar12 = local_50 + lVar9;
      }
      param_3[2] = uVar12;
      *(undefined1 *)(param_3[1] + lVar9) = local_41;
      bVar5 = local_50 < (longlong)uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar5);
  }
  if (*(char *)(param_1[4] + 0xc) == '\x01') {
    if (*(longlong *)param_1[5] == 0) {
      local_60 = (longlong *)FUN_1801d8b48(1);
    }
    else {
      local_60 = *(longlong **)(*(longlong *)param_1[5] + 8);
      (**(code **)(*local_60 + 8))();
    }
    plVar7 = (longlong *)FUN_180029a60(&local_68);
    if ((local_60 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*local_60 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8,local_54);
    }
    uVar2 = *(undefined4 *)param_1[9];
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
    plVar3 = (longlong *)param_1[8];
    local_78 = (longlong)plVar3;
    if (0xf < (ulonglong)plVar3[3]) {
      local_78 = *plVar3;
    }
    local_70 = plVar3[2];
    FUN_18002d990(&local_68,*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],&local_78,uVar6,uVar2,param_3);
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] == '\x01')) {
      uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar9 = local_68[2];
      uVar11 = local_50 + lVar9;
      if ((ulonglong)local_68[3] < uVar11) {
        (**(code **)*local_68)(local_68);
        lVar9 = local_68[2];
        uVar11 = local_50 + lVar9;
      }
      local_68[2] = uVar11;
      *(undefined1 *)(local_68[1] + lVar9) = uVar6;
      *(undefined1 *)param_1[0xc] = 0;
    }
    *(undefined8 *)param_1[6] = *(undefined8 *)param_1[7];
    param_3 = local_68;
    if (*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) {
      *(longlong *)param_1[6] = *(longlong *)param_1[6] + 1;
    }
  }
  puVar4 = *(undefined1 **)param_1[0xd];
  for (puVar14 = *(undefined1 **)param_1[6]; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    uVar6 = *puVar14;
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = uVar6;
  }
  if ((*(char *)(param_1[4] + 0xb) == '\x01') && (*(char *)param_1[0xc] == '\x01')) {
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = 0x2e;
  }
  while (local_58 < *(int *)param_1[0xe]) {
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = local_41;
    *(int *)param_1[0xe] = *(int *)param_1[0xe] + -1;
  }
  puVar4 = *(undefined1 **)param_1[0xb];
  for (puVar14 = *(undefined1 **)param_1[0xd]; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    uVar6 = *puVar14;
    lVar9 = param_3[2];
    uVar11 = local_50 + lVar9;
    if ((ulonglong)param_3[3] < uVar11) {
      (**(code **)*param_3)(param_3);
      lVar9 = param_3[2];
      uVar11 = local_50 + lVar9;
    }
    param_3[2] = uVar11;
    *(undefined1 *)(param_3[1] + lVar9) = uVar6;
  }
  *param_2 = param_3;
  return param_2;
}



void Unwind_18004a130(void)

{
  Unwind_1801dd394();
}



void Unwind_18004a150(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x58) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x58) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 100));
    }
  }
  return;
}



void FUN_18004a1a0(undefined8 *param_1,undefined8 *param_2,int param_3,int *param_4,byte param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_1b8 [37];
  byte local_193;
  byte local_192;
  byte local_191;
  ulonglong local_190;
  ulonglong local_188;
  undefined1 local_17c;
  byte local_17b;
  undefined1 local_17a;
  byte local_179;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  longlong local_148;
  ulonglong local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  int local_10c;
  int local_108;
  int local_104;
  undefined8 *local_100;
  undefined8 *local_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  undefined1 *local_a8;
  ulonglong *local_a0;
  longlong *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  longlong *local_80;
  ulonglong local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_1b8;
  local_188 = 0xf49f71034602841a;
  local_190 = 0xced866b2e0edfbdd;
  local_100 = param_2;
  local_b8 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_188 ^ 0x887765dba33c8af;
              uVar2 = local_188 ^ local_190;
              local_190 = local_190 ^ 0x887765dba33c8af;
              local_188 = uVar3;
              if (-0xfa1001c99a86363 < (longlong)uVar2) break;
              if ((longlong)uVar2 < -0x1d7d6e1239d3ec5e) {
                if ((longlong)uVar2 < -0x4d9443ad114e24da) {
                  if (uVar2 == 0x821620885984ecc3) {
                    local_158 = local_164 + local_108;
                    local_188 = 0x9340d6be212c07d2;
                    if (local_168 < local_108) {
                      local_188 = 0x846f750137530627;
                    }
                    local_190 = 0x631e295d477b9b4c;
                  }
                  else if (uVar2 == 0x85f06fc29571ce8c) {
                    local_16c = local_170 - param_3;
                    local_188 = 0xebdb22551a927e30;
                    local_190 = 0xf8353d91b02e51b1;
                  }
                  else if (uVar2 == 0xa97441a29207ac51) {
                    (**(code **)*local_128)(local_128,local_78);
                    local_d8 = *local_120;
                    local_e0 = local_148 + local_d8;
                    local_188 = 0x5f050c70cc34d41b;
                    local_190 = 0xbb785a8e16c3ba78;
                  }
                }
                else if (uVar2 == 0xb26bbc52eeb1db26) {
                  local_188 = 0x71feec9c13ff341d;
                  local_190 = 0x6210f358b9431b9c;
                  local_16c = 0;
                }
                else if (uVar2 == 0xb73bcd97eb51ed15) {
                  local_154 = local_164 + local_104;
                  local_188 = 0xb312fb1a96165155;
                  if (local_168 < local_104) {
                    local_188 = 0x76584558a7c69279;
                  }
                  local_190 = 0x50aefa4d0c2b48c4;
                  local_140 = local_f0;
                  local_191 = 1;
                  local_138 = local_130;
                  local_174 = local_150;
                }
                else if (uVar2 == 0xd7264385f6257357) {
                  local_58 = local_c0;
                  local_17a = *local_c0;
                  local_d8 = *local_120;
                  local_e0 = local_148 + local_d8;
                  local_188 = 0xa8f2b5833ed33a83;
                  if (*local_a0 < local_e0) {
                    local_188 = 0xe5fba2df7623f8b1;
                  }
                  local_190 = 0x4c8fe37de42454e0;
                  local_78 = local_e0;
                }
              }
              else if ((longlong)uVar2 < -0x1950739d2dbe0014) {
                if (uVar2 == 0xe28291edc62c13a2) {
                  (**(code **)*local_f8)(local_f8,local_b0);
                  local_c8 = *local_118;
                  local_d0 = local_148 + local_c8;
                  local_188 = 0xc8b076350cc52f2a;
                  local_190 = 0xc0f8f657e92fd2d1;
                }
                else if (uVar2 == 0xe3bc01579a3d1991) {
                  local_14c = local_174;
                  local_68 = local_138;
                  local_179 = local_191;
                  local_60 = local_140;
                  FUN_180049ca0(param_6,&local_50,local_100);
                  local_128 = local_50;
                  local_188 = 0x84b42ae2fffe7e8;
                  if (local_178 < local_14c) {
                    local_188 = 0xbe66eca55596f7f2;
                  }
                  local_190 = 0xf815bd4d49a87b76;
                }
                else if (uVar2 == 0xe47d56fedaf76e63) {
                  lVar1 = *local_98;
                  *local_120 = local_e0;
                  *(undefined1 *)(lVar1 + local_d8) = local_17a;
                  local_c0 = local_58 + 1;
                  local_188 = 0xea5bfba58e09f446;
                  if (local_c0 == local_a8) {
                    local_188 = 0xbf6b98a821a86bd2;
                  }
                  local_190 = 0x3d7db820782c8711;
                }
              }
              else if ((longlong)uVar2 < -0x1876134e1e7e6905) {
                if (uVar2 == 0xe6af8c62d241ffec) {
                  local_10c = local_15c;
                  local_174 = local_160;
                  local_138 = (undefined1 *)((longlong)param_4 + 0xf);
                  local_191 = *(byte *)((longlong)param_4 + 0xe);
                  local_140 = (ulonglong)local_191;
                  local_188 = 0x14ea2bc263b3711a;
                  if (local_178 < local_15c) {
                    local_188 = 0x1aa437adb5c06973;
                  }
                  local_190 = 0xf7562a95f98e688b;
                  local_17b = local_191;
                  local_150 = local_174;
                  local_130 = local_138;
                  local_f0 = local_140;
                }
                else if (uVar2 == 0xe7715c5c70289d6b) {
                  local_108 = local_158;
                  local_188 = 0x1f3c79b8b273567b;
                  local_190 = 0xc81a3a3d4456252c;
                  local_c0 = local_68;
                }
              }
              else if (uVar2 == 0xe789ecb1e18196fb) {
                local_188 = 0x37103e18b8ce7810;
                if (local_192 == 1) {
                  local_188 = 0x8bed88c30e6dba;
                }
                local_190 = 0x857b824a567fa336;
              }
              else if (uVar2 == 0xedf21d384c4e01f8) {
                local_90 = local_130 + local_f0;
                local_118 = local_f8 + 2;
                local_88 = local_f8 + 3;
                local_80 = local_f8 + 1;
                local_188 = 0x331291e731a1d13b;
                if (local_17b == local_193) {
                  local_188 = 0xf6582fa500711217;
                }
                local_190 = 0x15e42ef29a4c0b86;
                local_140 = 0;
                local_191 = local_193;
                local_138 = local_130;
                local_174 = local_150;
                local_154 = local_10c;
              }
            }
            if ((longlong)uVar2 < 0x467351e81c3e8c84) break;
            if ((longlong)uVar2 < 0x61fd1201fa7380d0) {
              if (uVar2 == 0x467351e81c3e8c84) {
                local_a8 = (undefined1 *)((longlong)param_4 + local_60 + 0xf);
                local_120 = local_128 + 2;
                local_a0 = local_128 + 3;
                local_98 = local_128 + 1;
                local_188 = 0xb75e31d405a685f8;
                if (local_179 == local_193) {
                  local_188 = 0xa071926b13d9840d;
                }
                local_190 = 0x502f6d88758e1893;
                local_158 = local_14c;
              }
              else if (uVar2 == 0x565a4b2335881760) {
                local_15c = (local_170 - param_3) / 2;
                local_160 = (local_170 - param_3) - local_15c;
                local_188 = 0xa3ea9642e01d15e6;
                local_190 = 0x45451a20325cea0a;
              }
              else if (uVar2 == 0x60df7305c9731936) {
                local_192 = param_5;
                if (*(byte *)((longlong)param_4 + 9) != local_193) {
                  local_192 = *(byte *)((longlong)param_4 + 9);
                }
                local_188 = 0x53ec5b56151c7bd2;
                local_190 = 0x32114957ef6ffb02;
              }
            }
            else if (uVar2 == 0x61fd1201fa7380d0) {
              local_188 = 0x82f17e330c620f1d;
              if ((char)local_192 < '\x02') {
                local_188 = 0xbe740cf0bd97079;
              }
              local_190 = 0xec6eac7eea58e682;
            }
            else if (uVar2 == 0x6e9fd24de63ae99f) {
              local_188 = 0xb350c74f70b45860;
              if ((char)local_192 < '\x03') {
                local_188 = 0x3cf4bad402ef2403;
              }
              local_190 = 0x46d0f8e7d224ec09;
            }
            else if (uVar2 == 0x7a244233d0cbc80a) {
              local_15c = local_170 - param_3;
              local_188 = 0x404816447fb58b0f;
              local_190 = 0xa6e79a26adf474e3;
              local_160 = local_178;
            }
          }
          if ((longlong)uVar2 < 0x26f6bf15abeddabd) break;
          if (uVar2 == 0x26f6bf15abeddabd) {
            local_104 = local_154;
            local_188 = 0x51e1083fa03597bb;
            local_190 = 0x7c63df45f5651b1d;
            local_e8 = local_130;
          }
          else if (uVar2 == 0x2d82d77a55508ca6) {
            local_70 = local_e8;
            local_17c = *local_e8;
            local_c8 = *local_118;
            local_d0 = local_148 + local_c8;
            local_188 = 0x67f0749d6b808885;
            if (*local_88 < local_d0) {
              local_188 = 0x8d3a6512484666dc;
            }
            local_190 = 0x6fb8f4ff8e6a757e;
            local_b0 = local_d0;
          }
          else if (uVar2 == 0x3a4717b1a6ef7fc7) {
            local_178 = 0;
            local_148 = 1;
            local_193 = 0;
            local_164 = -1;
            local_168 = 1;
            local_f8 = local_100;
            local_170 = *param_4;
            local_188 = 0x9304bcd4f3e2b000;
            if (param_3 < local_170) {
              local_188 = 0xe035d015902d86b7;
            }
            local_190 = 0x80eaa310595e9f81;
            local_16c = 0;
          }
        }
        if ((longlong)uVar2 < 0x8488062e5eafdfb) break;
        if (uVar2 == 0x8488062e5eafdfb) {
          lVar1 = *local_80;
          *local_118 = local_d0;
          *(undefined1 *)(lVar1 + local_c8) = local_17c;
          local_e8 = local_70 + 1;
          local_188 = 0xdf593e9319c38b02;
          if (local_e8 == local_90) {
            local_188 = 0x45e0247ea7c2eab1;
          }
          local_190 = 0xf2dbe9e94c9307a4;
        }
        else if (uVar2 == 0x13ee1fc4aabc2f81) {
          local_138 = (undefined1 *)((longlong)param_4 + 0xf);
          local_191 = *(byte *)((longlong)param_4 + 0xe);
          local_140 = (ulonglong)local_191;
          local_188 = 0xe3f8f5718867f2ce;
          local_190 = 0x44f426125aeb5f;
          local_174 = local_16c;
        }
      }
      if (uVar2 != 0xf5803fa8a290b469) break;
      local_188 = 0x762e5fc7b36ceb6a;
      if (local_192 == 3) {
        local_188 = 0x921fa8b66855272c;
      }
      local_190 = 0xc445e3955ddd304c;
    }
  } while (uVar2 != 0xf05effe366579c9e);
  *local_b8 = local_128;
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_1b8)) {
  }
  return;
}



undefined8 FUN_18004ae00(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  undefined1 auVar1 [14];
  undefined1 auVar2 [12];
  unkbyte10 Var3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined1 uVar13;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  byte bVar59;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  char cVar60;
  char cVar70;
  char cVar71;
  char cVar72;
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char local_373;
  ushort local_372;
  ulonglong local_370;
  ulonglong local_368;
  byte local_35b;
  byte local_35a;
  char local_359;
  char local_358 [7];
  char cStack_351;
  char cStack_350;
  char cStack_34f;
  char cStack_34e;
  char cStack_34d;
  char cStack_34c;
  char cStack_34b;
  char cStack_34a;
  char cStack_349;
  char local_348 [10];
  undefined2 local_33e;
  undefined4 local_33c;
  char local_338 [4];
  char cStack_334;
  char cStack_333;
  char cStack_332;
  char cStack_331;
  char cStack_330;
  char cStack_32f;
  char cStack_32e;
  char cStack_32d;
  char cStack_32c;
  char cStack_32b;
  char cStack_32a;
  char cStack_329;
  ulonglong local_320;
  ulonglong local_318;
  ulonglong local_310;
  undefined4 local_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  undefined1 *local_2d8;
  char *local_2d0;
  int local_2c8;
  int local_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  undefined1 *local_258;
  ulonglong local_250;
  ulonglong local_248;
  char *local_240;
  char *local_238;
  ulonglong local_230;
  char *local_228;
  char *local_220;
  ulonglong local_218;
  undefined1 *local_210;
  ulonglong local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  ulonglong local_160;
  char *local_158;
  undefined4 local_150;
  undefined2 *local_148;
  byte *local_140;
  int *local_138;
  longlong local_130;
  char *local_128;
  char **local_120;
  undefined1 local_118 [16];
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined1 local_98 [88];
  uint uVar8;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar61 [13];
  undefined1 auVar63 [16];
  undefined1 auVar69 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined2 uVar73;

  auVar4 = _DAT_180209840;
  local_218 = param_3;
  local_368 = 0xaa534badee9a4a26;
  local_370 = 0x4c7bffe03606484c;
LAB_18004afb0:
  do {
    while( true ) {
      uVar5 = local_268;
      uVar11 = local_368 ^ 0xa3b38fe260bafbe0;
      uVar10 = local_368 ^ local_370;
      local_370 = local_370 ^ 0xa3b38fe260bafbe0;
      cVar60 = auVar4[0];
      cVar70 = auVar4[1];
      cVar71 = auVar4[2];
      cVar72 = auVar4[3];
      cVar74 = auVar4[4];
      cVar75 = auVar4[5];
      cVar76 = auVar4[6];
      cVar77 = auVar4[7];
      cVar78 = auVar4[8];
      cVar79 = auVar4[9];
      cVar80 = auVar4[10];
      cVar81 = auVar4[0xb];
      cVar82 = auVar4[0xc];
      cVar83 = auVar4[0xd];
      cVar84 = auVar4[0xe];
      cVar85 = auVar4[0xf];
      uVar7 = (uint)local_320;
      uVar13 = (undefined1)local_372;
      uVar45 = (undefined1)(local_372 >> 8);
      uVar6 = (uint)local_2f8;
      uVar8 = (uint)local_2f0;
      local_368 = uVar11;
      if (0xd9c7dd475b54de0 < (longlong)uVar10) break;
      if ((longlong)uVar10 < -0x2dfd769560a7ed91) {
        if ((longlong)uVar10 < -0x46ebb5fc63c1ff95) {
          if ((longlong)uVar10 < -0x66a48ce0ba28eb72) {
            if (uVar10 == 0x8e9efb42a60e7463) {
              auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                         CONCAT11(uVar13,uVar13)));
              auVar30 = pshuflw(auVar30,auVar30,0x50);
              auVar41._0_4_ = auVar30._0_4_;
              auVar41._4_4_ = auVar41._0_4_;
              auVar41._8_4_ = auVar30._4_4_;
              auVar41._12_4_ = auVar30._4_4_;
              auVar41 = auVar41 & auVar4;
              auVar42[0] = -(auVar41[0] == cVar60);
              auVar42[1] = -(auVar41[1] == cVar70);
              auVar42[2] = -(auVar41[2] == cVar71);
              auVar42[3] = -(auVar41[3] == cVar72);
              auVar42[4] = -(auVar41[4] == cVar74);
              auVar42[5] = -(auVar41[5] == cVar75);
              auVar42[6] = -(auVar41[6] == cVar76);
              auVar42[7] = -(auVar41[7] == cVar77);
              auVar42[8] = -(auVar41[8] == cVar78);
              auVar42[9] = -(auVar41[9] == cVar79);
              auVar42[10] = -(auVar41[10] == cVar80);
              auVar42[0xb] = -(auVar41[0xb] == cVar81);
              auVar42[0xc] = -(auVar41[0xc] == cVar82);
              auVar42[0xd] = -(auVar41[0xd] == cVar83);
              auVar42[0xe] = -(auVar41[0xe] == cVar84);
              auVar42[0xf] = -(auVar41[0xf] == cVar85);
              local_368 = 0xdbdf818d66b518a3;
              if (((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3
                            | (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6
                            | (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9
                            | (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf) >>
                   (uVar6 & 0x1f) & 1) != 0) {
                local_368 = 0x1ed25e0dae9b8ef5;
              }
              local_370 = 0x1e4ea03d8c98528e;
            }
            else if (uVar10 == 0x90135ee2b79951c7) {
              *local_200 = local_338[uVar8 & 0xf] + local_373;
              local_368 = 0x7ec443496b27214f;
              local_370 = 0x1ea7f979e7f8989b;
            }
            else if (uVar10 == 0x95729476d9c52956) {
              local_33e = CONCAT11(0x58,(undefined1)local_33e);
              local_368 = 0x358a205bb7d9c817;
              if (local_358 == local_220) {
                local_368 = 0xe500019d00277ffd;
              }
              local_370 = 0xdb032eabeb72bf21;
            }
          }
          else if ((longlong)uVar10 < -0x567b4576c755c859) {
            if (uVar10 == 0x995b731f45d7148e) {
              auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                         CONCAT11(uVar13,uVar13)));
              auVar30 = pshuflw(auVar30,auVar30,0x50);
              auVar28._0_4_ = auVar30._0_4_;
              auVar28._4_4_ = auVar28._0_4_;
              auVar28._8_4_ = auVar30._4_4_;
              auVar28._12_4_ = auVar30._4_4_;
              auVar28 = auVar28 & auVar4;
              auVar29[0] = -(auVar28[0] == cVar60);
              auVar29[1] = -(auVar28[1] == cVar70);
              auVar29[2] = -(auVar28[2] == cVar71);
              auVar29[3] = -(auVar28[3] == cVar72);
              auVar29[4] = -(auVar28[4] == cVar74);
              auVar29[5] = -(auVar28[5] == cVar75);
              auVar29[6] = -(auVar28[6] == cVar76);
              auVar29[7] = -(auVar28[7] == cVar77);
              auVar29[8] = -(auVar28[8] == cVar78);
              auVar29[9] = -(auVar28[9] == cVar79);
              auVar29[10] = -(auVar28[10] == cVar80);
              auVar29[0xb] = -(auVar28[0xb] == cVar81);
              auVar29[0xc] = -(auVar28[0xc] == cVar82);
              auVar29[0xd] = -(auVar28[0xd] == cVar83);
              auVar29[0xe] = -(auVar28[0xe] == cVar84);
              auVar29[0xf] = -(auVar28[0xf] == cVar85);
              local_368 = 0xb337a1936cca913a;
              if (((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3
                            | (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6
                            | (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9
                            | (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf) >>
                   (uVar8 & 0x1f) & 1) != 0) {
                local_368 = 0x43474541578c7929;
              }
              local_370 = 0xd3541ba3e01528ee;
            }
            else if (uVar10 == 0xa785139f47085452) {
              *local_190 = local_338[(uint)local_2e8 & 0xf] + local_373;
              local_368 = 0xde0b611e32e04dfb;
              local_370 = 0xf96bed3255b0946c;
            }
          }
          else if (uVar10 == 0xa984ba8938aa37a7) {
            *local_228 = local_359 + local_373;
            local_368 = 0xf5b892c6235fae9a;
            local_370 = 0xdd49701fcee6b8c0;
          }
          else if (uVar10 == 0xb73b450cac007f68) {
            local_260 = local_310 & 0xfffffffffffffffc;
            local_168 = local_358 + (local_310 & 0xfffffffffffffffc);
            local_368 = 0xda53fde0274b6dc5;
            local_370 = 0xfabb2f01c8d74269;
            local_248 = local_230;
LAB_18004c5ec:
          }
        }
        else if ((longlong)uVar10 < -0x3ca86892b4bbbe95) {
          if ((longlong)uVar10 < -0x41d43ae38aa06107) {
            if (uVar10 == 0xb9144a039c3e006b) {
              auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                         CONCAT11(uVar13,uVar13)));
              auVar30 = pshuflw(auVar30,auVar30,0x50);
              auVar35._0_4_ = auVar30._0_4_;
              auVar35._4_4_ = auVar35._0_4_;
              auVar35._8_4_ = auVar30._4_4_;
              auVar35._12_4_ = auVar30._4_4_;
              auVar35 = auVar35 & auVar4;
              auVar36[0] = -(auVar35[0] == cVar60);
              auVar36[1] = -(auVar35[1] == cVar70);
              auVar36[2] = -(auVar35[2] == cVar71);
              auVar36[3] = -(auVar35[3] == cVar72);
              auVar36[4] = -(auVar35[4] == cVar74);
              auVar36[5] = -(auVar35[5] == cVar75);
              auVar36[6] = -(auVar35[6] == cVar76);
              auVar36[7] = -(auVar35[7] == cVar77);
              auVar36[8] = -(auVar35[8] == cVar78);
              auVar36[9] = -(auVar35[9] == cVar79);
              auVar36[10] = -(auVar35[10] == cVar80);
              auVar36[0xb] = -(auVar35[0xb] == cVar81);
              auVar36[0xc] = -(auVar35[0xc] == cVar82);
              auVar36[0xd] = -(auVar35[0xd] == cVar83);
              auVar36[0xe] = -(auVar35[0xe] == cVar84);
              auVar36[0xf] = -(auVar35[0xf] == cVar85);
              local_368 = 0xea384e7daada8fcb;
              if (((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3
                            | (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6
                            | (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9
                            | (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf) >>
                   ((uint)local_2c0 & 0x1f) & 1) != 0) {
                local_368 = 0xe87a4ec037d7adca;
              }
              local_370 = 0x2b2dd9ad7c93eca1;
            }
            else if (uVar10 == 0xbde11b0cbcab9959) {
              *local_1e0 = local_338[(uint)local_2b8 & 0xf] + local_373;
              local_368 = 0xde0462c36916fb30;
              local_370 = 0x899498783c46a9f8;
            }
          }
          else if (uVar10 == 0xbe2bc51c755f9ef9) {
            auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                       CONCAT11(uVar13,uVar13)));
            auVar30 = pshuflw(auVar30,auVar30,0x50);
            auVar37._0_4_ = auVar30._0_4_;
            auVar37._4_4_ = auVar37._0_4_;
            auVar37._8_4_ = auVar30._4_4_;
            auVar37._12_4_ = auVar30._4_4_;
            auVar37 = auVar37 & auVar4;
            auVar38[0] = -(auVar37[0] == cVar60);
            auVar38[1] = -(auVar37[1] == cVar70);
            auVar38[2] = -(auVar37[2] == cVar71);
            auVar38[3] = -(auVar37[3] == cVar72);
            auVar38[4] = -(auVar37[4] == cVar74);
            auVar38[5] = -(auVar37[5] == cVar75);
            auVar38[6] = -(auVar37[6] == cVar76);
            auVar38[7] = -(auVar37[7] == cVar77);
            auVar38[8] = -(auVar37[8] == cVar78);
            auVar38[9] = -(auVar37[9] == cVar79);
            auVar38[10] = -(auVar37[10] == cVar80);
            auVar38[0xb] = -(auVar37[0xb] == cVar81);
            auVar38[0xc] = -(auVar37[0xc] == cVar82);
            auVar38[0xd] = -(auVar37[0xd] == cVar83);
            auVar38[0xe] = -(auVar37[0xe] == cVar84);
            auVar38[0xf] = -(auVar37[0xf] == cVar85);
            local_368 = 0x9e050c85842535ff;
            if (((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb
                          | (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf) >>
                 ((uint)local_290 & 0x1f) & 1) != 0) {
              local_368 = 0xfba718b468d06327;
            }
            local_370 = 0x865ca7c3d9ab4029;
          }
          else if (uVar10 == 0xc11597d0d649636a) {
            auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                       CONCAT11(uVar13,uVar13)));
            auVar30 = pshuflw(auVar30,auVar30,0x50);
            auVar26._0_4_ = auVar30._0_4_;
            auVar26._4_4_ = auVar26._0_4_;
            auVar26._8_4_ = auVar30._4_4_;
            auVar26._12_4_ = auVar30._4_4_;
            auVar26 = auVar26 & auVar4;
            auVar27[0] = -(auVar26[0] == cVar60);
            auVar27[1] = -(auVar26[1] == cVar70);
            auVar27[2] = -(auVar26[2] == cVar71);
            auVar27[3] = -(auVar26[3] == cVar72);
            auVar27[4] = -(auVar26[4] == cVar74);
            auVar27[5] = -(auVar26[5] == cVar75);
            auVar27[6] = -(auVar26[6] == cVar76);
            auVar27[7] = -(auVar26[7] == cVar77);
            auVar27[8] = -(auVar26[8] == cVar78);
            auVar27[9] = -(auVar26[9] == cVar79);
            auVar27[10] = -(auVar26[10] == cVar80);
            auVar27[0xb] = -(auVar26[0xb] == cVar81);
            auVar27[0xc] = -(auVar26[0xc] == cVar82);
            auVar27[0xd] = -(auVar26[0xd] == cVar83);
            auVar27[0xe] = -(auVar26[0xe] == cVar84);
            auVar27[0xf] = -(auVar26[0xf] == cVar85);
            local_368 = 0xd90a98aba9e4535f;
            if (((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb
                          | (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf) >>
                 ((uint)local_2e0 & 0x1f) & 1) != 0) {
              local_368 = 0x86ac52e77c687d89;
            }
            local_370 = 0x67215db7dcbbcda6;
          }
        }
        else if ((longlong)uVar10 < -0x367889a4156adb10) {
          if (uVar10 == 0xc357976d4b44416b) {
            *local_1b0 = local_338[(uint)local_2c0 & 0xf] + local_373;
            local_368 = 0x6e66a3b623d7c965;
            local_370 = 0xaf733466f59eaa0f;
          }
          else if (uVar10 == 0xc59121b0ea2d4a2d) {
            auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                       CONCAT11(uVar13,uVar13)));
            auVar30 = pshuflw(auVar30,auVar30,0x50);
            auVar20._0_4_ = auVar30._0_4_;
            auVar20._4_4_ = auVar20._0_4_;
            auVar20._8_4_ = auVar30._4_4_;
            auVar20._12_4_ = auVar30._4_4_;
            auVar20 = auVar20 & auVar4;
            auVar21[0] = -(auVar20[0] == cVar60);
            auVar21[1] = -(auVar20[1] == cVar70);
            auVar21[2] = -(auVar20[2] == cVar71);
            auVar21[3] = -(auVar20[3] == cVar72);
            auVar21[4] = -(auVar20[4] == cVar74);
            auVar21[5] = -(auVar20[5] == cVar75);
            auVar21[6] = -(auVar20[6] == cVar76);
            auVar21[7] = -(auVar20[7] == cVar77);
            auVar21[8] = -(auVar20[8] == cVar78);
            auVar21[9] = -(auVar20[9] == cVar79);
            auVar21[10] = -(auVar20[10] == cVar80);
            auVar21[0xb] = -(auVar20[0xb] == cVar81);
            auVar21[0xc] = -(auVar20[0xc] == cVar82);
            auVar21[0xd] = -(auVar20[0xd] == cVar83);
            auVar21[0xe] = -(auVar20[0xe] == cVar84);
            auVar21[0xf] = -(auVar20[0xf] == cVar85);
            local_368 = 0xc07981791854bfd5;
            if (((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb
                          | (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf) >>
                 ((uint)local_318 & 0x1f) & 1) != 0) {
              local_368 = 0x3bc1f5d089502c4c;
            }
            local_370 = 0xcdbdeb381fde6042;
          }
        }
        else if (uVar10 == 0xc987765bea9524f0) {
          *local_180 = local_338[(ulonglong)(uVar8 & 3) - 4] + local_373;
          local_368 = 0xf6a2a167246af80e;
          local_370 = 0x8b6c442a86d6df2f;
        }
        else if (uVar10 == 0xd073a31f7bcac2fe) {
          local_2d8 = local_258 + -1;
          local_258[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_2e8 & local_250];
          local_250 = local_250 >> ((byte)local_318 & 0x3f);
          local_368 = 0x4a7c9bc5a242e97c;
          if (local_250 == local_320) {
            local_368 = 0xa4c79a5963d95ad3;
          }
          local_370 = 0x9a0f38dad9882b82;
          local_258 = local_258 + -1;
        }
      }
      else if ((longlong)uVar10 < -0x1176f10fa35488ca) {
        if ((longlong)uVar10 < -0x234580be4b4543e4) {
          if (uVar10 == 0xd202896a9f58126f) {
            *local_1c0 = local_338[(uint)local_298 & 0xf] + local_373;
            local_368 = 0xda37874d7a505954;
            local_370 = 0x293782d3af34a;
          }
          else if (uVar10 == 0xd3b60cb887f63606) {
            auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                       CONCAT11(uVar13,uVar13)));
            auVar30 = pshuflw(auVar30,auVar30,0x50);
            auVar43._0_4_ = auVar30._0_4_;
            auVar43._4_4_ = auVar43._0_4_;
            auVar43._8_4_ = auVar30._4_4_;
            auVar43._12_4_ = auVar30._4_4_;
            auVar43 = auVar43 & auVar4;
            auVar30[0] = -(auVar43[0] == cVar60);
            auVar30[1] = -(auVar43[1] == cVar70);
            auVar30[2] = -(auVar43[2] == cVar71);
            auVar30[3] = -(auVar43[3] == cVar72);
            auVar30[4] = -(auVar43[4] == cVar74);
            auVar30[5] = -(auVar43[5] == cVar75);
            auVar30[6] = -(auVar43[6] == cVar76);
            auVar30[7] = -(auVar43[7] == cVar77);
            auVar30[8] = -(auVar43[8] == cVar78);
            auVar30[9] = -(auVar43[9] == cVar79);
            auVar30[10] = -(auVar43[10] == cVar80);
            auVar30[0xb] = -(auVar43[0xb] == cVar81);
            auVar30[0xc] = -(auVar43[0xc] == cVar82);
            auVar30[0xd] = -(auVar43[0xd] == cVar83);
            auVar30[0xe] = -(auVar43[0xe] == cVar84);
            auVar30[0xf] = -(auVar43[0xf] == cVar85);
            local_368 = 0xb16ce8c03d28493d;
            if (((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb
                          | (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf) >>
                 ((uint)local_280 & 0x1f) & 1) != 0) {
              local_368 = 0xf67be2f0ce9f502f;
            }
            local_370 = 0x95b19a046d5f64cb;
          }
          else if (uVar10 == 0xda351435576aaa1e) {
            auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                       CONCAT11(uVar13,uVar13)));
            auVar30 = pshuflw(auVar30,auVar30,0x50);
            auVar24._0_4_ = auVar30._0_4_;
            auVar24._4_4_ = auVar24._0_4_;
            auVar24._8_4_ = auVar30._4_4_;
            auVar24._12_4_ = auVar30._4_4_;
            auVar24 = auVar24 & auVar4;
            auVar25[0] = -(auVar24[0] == cVar60);
            auVar25[1] = -(auVar24[1] == cVar70);
            auVar25[2] = -(auVar24[2] == cVar71);
            auVar25[3] = -(auVar24[3] == cVar72);
            auVar25[4] = -(auVar24[4] == cVar74);
            auVar25[5] = -(auVar24[5] == cVar75);
            auVar25[6] = -(auVar24[6] == cVar76);
            auVar25[7] = -(auVar24[7] == cVar77);
            auVar25[8] = -(auVar24[8] == cVar78);
            auVar25[9] = -(auVar24[9] == cVar79);
            auVar25[10] = -(auVar24[10] == cVar80);
            auVar25[0xb] = -(auVar24[0xb] == cVar81);
            auVar25[0xc] = -(auVar24[0xc] == cVar82);
            auVar25[0xd] = -(auVar24[0xd] == cVar83);
            auVar25[0xe] = -(auVar24[0xe] == cVar84);
            auVar25[0xf] = -(auVar24[0xf] == cVar85);
            local_368 = 0x2a9dbb7021861a21;
            if (((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb
                          | (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf) >>
                 ((uint)local_2b0 & 0x1f) & 1) != 0) {
              local_368 = 0xfa206aad4aec325a;
            }
            local_370 = 0x9389f173bdb81a4a;
          }
        }
        else if ((longlong)uVar10 < -0x19d74bb22763fd96) {
          if (uVar10 == 0xdcba7f41b4babc1c) {
            *local_1d8 = local_338[(uint)local_288 & 0xf] + local_373;
            local_368 = 0x86c654265cdf50f;
            local_370 = 0x20084365598b3ae6;
          }
          else if (uVar10 == 0xe18d0f50a0d3b02f) {
            *local_1a8 = local_338[(uint)local_2e0 & 0xf] + local_373;
            local_368 = 0xa678cdbc25562497;
            local_370 = 0x185308a05009ba6e;
          }
        }
        else if (uVar10 == 0xe628b44dd89c026a) {
          local_318 = 4;
          local_278 = 7;
          local_2f0 = 1;
          local_320 = 0;
          local_2f8 = 3;
          local_280 = 8;
          local_288 = 6;
          local_373 = -0x20;
          local_290 = 0xd;
          local_2e0 = 0xc;
          local_298 = 9;
          local_2e8 = 0xf;
          local_300 = 2;
          local_2a0 = 0xe;
          local_2a8 = 0x10;
          local_2b0 = 10;
          local_2b8 = 5;
          local_2c0 = 0xb;
          local_210 = local_98;
          local_368 = 0x108c0b732073ad5e;
          local_370 = 0xc0ffa86c5bb96fa0;
          local_258 = local_98;
          local_250 = local_218;
        }
        else if (uVar10 == 0xea5afe9eec3f6d6a) {
          local_368 = 0x85ced7542da13f46;
          if (local_208 == local_320) {
            local_368 = 0x2a147194d5a96fe9;
          }
          local_370 = 0x32f5925881a1402e;
          local_2d0 = local_358 + local_270;
          local_230 = local_270;
        }
      }
      else if ((longlong)uVar10 < 0x67368614c3b5fb) {
        if ((longlong)uVar10 < -0xaf1589f2ef2d4c8) {
          if (uVar10 == 0xee890ef05cab7736) {
            local_310 = local_268;
            if (0xf < (longlong)local_268) {
              local_310 = 0x10;
            }
            local_368 = 0xba38da5a23c0446c;
            if (local_310 < local_318) {
              local_368 = 0x5162ed321630f52e;
            }
            local_370 = 0x49830efe4238dae9;
            local_2d0 = local_358;
          }
          else if (uVar10 == 0xf3bbd4a461f89e85) {
            local_368 = 0xba9ca8ed0a579dc3;
            if (local_310 < local_2a8) {
              local_368 = 0x737416a8fc1331ee;
            }
            local_370 = 0xc44f53a450134e86;
            local_230 = local_320;
          }
        }
        else if (uVar10 == 0xf50ea760d10d2b38) {
          *local_1d0 = local_338[(uint)local_278 & 0xf] + local_373;
          local_368 = 0x9eb8dfdd9799e363;
          local_370 = 0x4d0ed365106fd565;
        }
        else if (uVar10 == 0xf67c1ee8968e4c0e) {
          *local_1e8 = local_338[(uint)local_318 & 0xf] + local_373;
          local_368 = 0x631b53ff3b5753dd;
          local_370 = 0x6edf39be3cdd8c4a;
        }
      }
      else if ((longlong)uVar10 < 0x1be323b67eec0de) {
        if (uVar10 == 0x67368614c3b5fb) {
          local_368 = 0x120d7fa61d955478;
          if (local_310 == local_260) {
            local_368 = 0x34efb35ca2c8bb63;
          }
          local_370 = 0xaec9c6a499d7bbf;
          local_2d0 = local_168;
        }
        else if (uVar10 == 0x9cfe302203dc7b) {
          *local_1f0 = local_338[uVar6 & 0xf] + local_373;
          local_368 = 0xcb495ac56c52057b;
          local_370 = 0xed87b75867f4f56;
        }
      }
      else if (uVar10 == 0x1be323b67eec0de) {
        *local_188 = local_338[(ulonglong)(uVar7 & 3) - 4] + local_373;
        local_368 = 0x8fc380df61014b0f;
        local_370 = 0xdf2dc680bb1eb732;
      }
      else if (uVar10 == 0x98245d0bbc54330) {
        FUN_1802079d0(local_358,local_2d8,local_268);
        local_238 = local_358 + uVar5;
        local_304 = 0;
        local_368 = 0x22019639c38ad957;
        local_370 = 0x1ddfb7ae93d439ba;
LAB_18004c0c8:
      }
    }
    if ((longlong)uVar10 < 0x4648fd63dfd2bc8a) {
      if ((longlong)uVar10 < 0x24dd72c450772df6) {
        if ((longlong)uVar10 < 0x1b216b6f754a0d7d) {
          if ((longlong)uVar10 < 0x1859ab465d8e75d6) {
            if (uVar10 == 0xd9c7dd475b54de1) {
              *local_198 = local_338[(uint)local_2a0 & 0xf] + local_373;
              local_368 = 0x814ba7d3e3a94ca;
              local_370 = 0x29ab003c7ca8a7e9;
            }
            else if (uVar10 == 0xdc46a41078adf97) {
              auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                         CONCAT11(uVar13,uVar13)));
              auVar30 = pshuflw(auVar30,auVar30,0x50);
              auVar16._0_4_ = auVar30._0_4_;
              auVar16._4_4_ = auVar16._0_4_;
              auVar16._8_4_ = auVar30._4_4_;
              auVar16._12_4_ = auVar30._4_4_;
              auVar16 = auVar16 & auVar4;
              auVar17[0] = -(auVar16[0] == cVar60);
              auVar17[1] = -(auVar16[1] == cVar70);
              auVar17[2] = -(auVar16[2] == cVar71);
              auVar17[3] = -(auVar16[3] == cVar72);
              auVar17[4] = -(auVar16[4] == cVar74);
              auVar17[5] = -(auVar16[5] == cVar75);
              auVar17[6] = -(auVar16[6] == cVar76);
              auVar17[7] = -(auVar16[7] == cVar77);
              auVar17[8] = -(auVar16[8] == cVar78);
              auVar17[9] = -(auVar16[9] == cVar79);
              auVar17[10] = -(auVar16[10] == cVar80);
              auVar17[0xb] = -(auVar16[0xb] == cVar81);
              auVar17[0xc] = -(auVar16[0xc] == cVar82);
              auVar17[0xd] = -(auVar16[0xd] == cVar83);
              auVar17[0xe] = -(auVar16[0xe] == cVar84);
              auVar17[0xf] = -(auVar16[0xf] == cVar85);
              local_368 = 0x79ed49cf7bcc1d30;
              if (((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3
                            | (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6
                            | (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9
                            | (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf) >>
                   ((uint)local_2b8 & 0x1f) & 1) != 0) {
                local_368 = 0x939ca8789237d6a1;
              }
              local_370 = 0x2e7db3742e9c4ff8;
            }
          }
          else if (uVar10 == 0x1859ab465d8e75d6) {
            auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                       CONCAT11(uVar13,uVar13)));
            auVar30 = pshuflw(auVar30,auVar30,0x50);
            auVar39._0_4_ = auVar30._0_4_;
            auVar39._4_4_ = auVar39._0_4_;
            auVar39._8_4_ = auVar30._4_4_;
            auVar39._12_4_ = auVar30._4_4_;
            auVar39 = auVar39 & auVar4;
            auVar40[0] = -(auVar39[0] == cVar60);
            auVar40[1] = -(auVar39[1] == cVar70);
            auVar40[2] = -(auVar39[2] == cVar71);
            auVar40[3] = -(auVar39[3] == cVar72);
            auVar40[4] = -(auVar39[4] == cVar74);
            auVar40[5] = -(auVar39[5] == cVar75);
            auVar40[6] = -(auVar39[6] == cVar76);
            auVar40[7] = -(auVar39[7] == cVar77);
            auVar40[8] = -(auVar39[8] == cVar78);
            auVar40[9] = -(auVar39[9] == cVar79);
            auVar40[10] = -(auVar39[10] == cVar80);
            auVar40[0xb] = -(auVar39[0xb] == cVar81);
            auVar40[0xc] = -(auVar39[0xc] == cVar82);
            auVar40[0xd] = -(auVar39[0xd] == cVar83);
            auVar40[0xe] = -(auVar39[0xe] == cVar84);
            auVar40[0xf] = -(auVar39[0xf] == cVar85);
            local_368 = 0xd72a5b99f685f9a0;
            if (((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb
                          | (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf) >>
                 ((uint)local_2a0 & 0x1f) & 1) != 0) {
              local_368 = 0xfb099c0cc1a28762;
            }
            local_370 = 0xf695e1d8b417ca83;
          }
          else if (uVar10 == 0x18e1e3cc54082fc7) {
            local_368 = 0xb6c747f2f77ee7c5;
            local_370 = 0xf3f138be8fecd1cd;
            local_240 = local_2d0;
            goto LAB_18004c123;
          }
        }
        else if ((longlong)uVar10 < 0x20e8d2e1ef9c2fac) {
          if (uVar10 == 0x1b216b6f754a0d7d) {
            FUN_18004d550(param_1,param_2,local_2c4,param_4,2,&local_148);
            local_368 = 0x720851abfc474c7;
            local_370 = 0x1bd48c3f88c445ba;
          }
          else if (uVar10 == 0x1cf409253700317d) {
            return param_1;
          }
        }
        else if (uVar10 == 0x20e8d2e1ef9c2fac) {
          local_160 = local_248;
          local_188 = local_358 + local_248;
          local_180 = local_358 + local_248 + 1;
          local_178 = local_358 + local_248 + 2;
          local_170 = local_358 + local_248 + 3;
          local_33c = *(undefined4 *)(local_358 + local_248);
          bVar12 = (char)local_33c + 0x9f;
          bVar44 = (char)((uint)local_33c >> 8) + 0x9f;
          bVar46 = (char)((uint)local_33c >> 0x10) + 0x9f;
          bVar47 = (char)((uint)local_33c >> 0x18) + 0x9f;
          cVar60 = -((byte)((bVar12 < 0x1a) * '\x1a' | (bVar12 >= 0x1a) * bVar12) == bVar12);
          cVar70 = -((byte)((bVar44 < 0x1a) * '\x1a' | (bVar44 >= 0x1a) * bVar44) == bVar44);
          cVar71 = -((byte)((bVar46 < 0x1a) * '\x1a' | (bVar46 >= 0x1a) * bVar46) == bVar46);
          cVar72 = -((byte)((bVar47 < 0x1a) * '\x1a' | (bVar47 >= 0x1a) * bVar47) == bVar47);
          auVar61._0_12_ = ZEXT512(0xffffffffff) << 0x38;
          auVar61[0xc] = 0xff;
          auVar65[0xd] = 0xff;
          auVar65._0_13_ = auVar61;
          auVar65[0xe] = 0xff;
          auVar65[0xf] = 0xff;
          auVar64._14_2_ = auVar65._14_2_;
          auVar64[0xd] = 0xff;
          auVar64._0_13_ = auVar61;
          auVar63._13_3_ = auVar64._13_3_;
          auVar63[0xc] = 0xff;
          auVar63._0_12_ = auVar61._0_12_;
          Var3 = CONCAT91(CONCAT81((longlong)
                                   (CONCAT72((int7)(CONCAT63((int6)(CONCAT54((int5)(CONCAT45(auVar63._12_4_,0xffffffffff
                                                                                            ) >> 0x20),0xffffffff) >>
                                                                   0x18),0xffffff) >> 0x10),0xffff) >> 8),cVar72),cVar72
                         );
          auVar2._2_10_ = Var3;
          auVar2[1] = cVar71;
          auVar2[0] = cVar71;
          auVar1._2_12_ = auVar2;
          auVar1[1] = cVar70;
          auVar1[0] = cVar70;
          auVar62._0_2_ = CONCAT11(cVar60,cVar60);
          auVar62._2_14_ = auVar1;
          uVar73 = (undefined2)Var3;
          auVar69._0_12_ = auVar62._0_12_;
          auVar69._12_2_ = uVar73;
          auVar69._14_2_ = uVar73;
          auVar68._12_4_ = auVar69._12_4_;
          auVar68._0_10_ = auVar62._0_10_;
          auVar68._10_2_ = auVar2._0_2_;
          auVar67._10_6_ = auVar68._10_6_;
          auVar67._0_8_ = auVar62._0_8_;
          auVar67._8_2_ = auVar2._0_2_;
          auVar66._8_8_ = auVar67._8_8_;
          auVar66._6_2_ = auVar1._0_2_;
          auVar66._4_2_ = auVar1._0_2_;
          auVar66._2_2_ = auVar62._0_2_;
          auVar66._0_2_ = auVar62._0_2_;
          uVar6 = movmskps(local_33c,auVar66);
          local_35b = (byte)(uVar6 ^ 0xf);
          local_368 = 0xc943e430b8d7567;
          if (((uVar6 ^ 0xf) >> (uVar7 & 0x1f) & 1) != 0) {
            local_368 = 0x5dc44a27b67c4984;
          }
          local_370 = 0x5c7a781cd192895a;
        }
        else if (uVar10 == 0x21bfba4142923323) {
          auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                     CONCAT11(uVar13,uVar13)));
          auVar30 = pshuflw(auVar30,auVar30,0x50);
          auVar22._0_4_ = auVar30._0_4_;
          auVar22._4_4_ = auVar22._0_4_;
          auVar22._8_4_ = auVar30._4_4_;
          auVar22._12_4_ = auVar30._4_4_;
          auVar22 = auVar22 & auVar4;
          auVar23[0] = -(auVar22[0] == cVar60);
          auVar23[1] = -(auVar22[1] == cVar70);
          auVar23[2] = -(auVar22[2] == cVar71);
          auVar23[3] = -(auVar22[3] == cVar72);
          auVar23[4] = -(auVar22[4] == cVar74);
          auVar23[5] = -(auVar22[5] == cVar75);
          auVar23[6] = -(auVar22[6] == cVar76);
          auVar23[7] = -(auVar22[7] == cVar77);
          auVar23[8] = -(auVar22[8] == cVar78);
          auVar23[9] = -(auVar22[9] == cVar79);
          auVar23[10] = -(auVar22[10] == cVar80);
          auVar23[0xb] = -(auVar22[0xb] == cVar81);
          auVar23[0xc] = -(auVar22[0xc] == cVar82);
          auVar23[0xd] = -(auVar22[0xd] == cVar83);
          auVar23[0xe] = -(auVar22[0xe] == cVar84);
          auVar23[0xf] = -(auVar22[0xf] == cVar85);
          local_368 = 0xa53a4584e8095cbc;
          if (((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd
                        | (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf) >>
               ((uint)local_2e8 & 0x1f) & 1) != 0) {
            local_368 = 0x25dfda37c851d179;
          }
          local_370 = 0x825ac9a88f59852b;
        }
      }
      else if ((longlong)uVar10 < 0x3e032f36eb55c0dc) {
        if ((longlong)uVar10 < 0x286426273c46cfe9) {
          if (uVar10 == 0x24dd72c450772df6) {
            auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                       CONCAT11(uVar13,uVar13)));
            auVar30 = pshuflw(auVar30,auVar30,0x50);
            auVar31._0_4_ = auVar30._0_4_;
            auVar31._4_4_ = auVar31._0_4_;
            auVar31._8_4_ = auVar30._4_4_;
            auVar31._12_4_ = auVar30._4_4_;
            auVar31 = auVar31 & auVar4;
            auVar32[0] = -(auVar31[0] == cVar60);
            auVar32[1] = -(auVar31[1] == cVar70);
            auVar32[2] = -(auVar31[2] == cVar71);
            auVar32[3] = -(auVar31[3] == cVar72);
            auVar32[4] = -(auVar31[4] == cVar74);
            auVar32[5] = -(auVar31[5] == cVar75);
            auVar32[6] = -(auVar31[6] == cVar76);
            auVar32[7] = -(auVar31[7] == cVar77);
            auVar32[8] = -(auVar31[8] == cVar78);
            auVar32[9] = -(auVar31[9] == cVar79);
            auVar32[10] = -(auVar31[10] == cVar80);
            auVar32[0xb] = -(auVar31[0xb] == cVar81);
            auVar32[0xc] = -(auVar31[0xc] == cVar82);
            auVar32[0xd] = -(auVar31[0xd] == cVar83);
            auVar32[0xe] = -(auVar31[0xe] == cVar84);
            auVar32[0xf] = -(auVar31[0xf] == cVar85);
            local_368 = 0xf45fe2ab488b6ab8;
            if (((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb
                          | (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf) >>
                 ((uint)local_298 & 0x1f) & 1) != 0) {
              local_368 = 0xfc687ff480b9d2c9;
            }
            local_370 = 0x2e6af69e1fe1c0a6;
          }
          else if (uVar10 == 0x27608c2c6750d997) {
            local_368 = 0x4cb7a528c2081af2;
            if (local_310 == local_270) {
              local_368 = 0x98ee7480c562b744;
            }
            local_370 = 0xa6ed5bb62e377798;
          }
        }
        else if (uVar10 == 0x286426273c46cfe9) {
          auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                     CONCAT11(uVar13,uVar13)));
          auVar30 = pshuflw(auVar30,auVar30,0x50);
          auVar33._0_4_ = auVar30._0_4_;
          auVar33._4_4_ = auVar33._0_4_;
          auVar33._8_4_ = auVar30._4_4_;
          auVar33._12_4_ = auVar30._4_4_;
          auVar33 = auVar33 & auVar4;
          auVar34[0] = -(auVar33[0] == cVar60);
          auVar34[1] = -(auVar33[1] == cVar70);
          auVar34[2] = -(auVar33[2] == cVar71);
          auVar34[3] = -(auVar33[3] == cVar72);
          auVar34[4] = -(auVar33[4] == cVar74);
          auVar34[5] = -(auVar33[5] == cVar75);
          auVar34[6] = -(auVar33[6] == cVar76);
          auVar34[7] = -(auVar33[7] == cVar77);
          auVar34[8] = -(auVar33[8] == cVar78);
          auVar34[9] = -(auVar33[9] == cVar79);
          auVar34[10] = -(auVar33[10] == cVar80);
          auVar34[0xb] = -(auVar33[0xb] == cVar81);
          auVar34[0xc] = -(auVar33[0xc] == cVar82);
          auVar34[0xd] = -(auVar33[0xd] == cVar83);
          auVar34[0xe] = -(auVar33[0xe] == cVar84);
          auVar34[0xf] = -(auVar33[0xf] == cVar85);
          local_368 = 0xd5114672a3ee3a96;
          if (((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd
                        | (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf) >>
               ((uint)local_278 & 0x1f) & 1) != 0) {
            local_368 = 0xf3a9edaaf51527a8;
          }
          local_370 = 0x6a74aca24180c90;
        }
        else if (uVar10 == 0x28f1e2d9edb9165a) {
          local_368 = 0xef20c86ae0ac0745;
          if (local_228 + 1 == local_220) {
            local_368 = 0x94159810736bf191;
          }
          local_370 = 0xaa16b726983e314d;
          local_240 = local_228 + 1;
LAB_18004c123:
        }
      }
      else if ((longlong)uVar10 < 0x3fde2197505ee0ed) {
        if (uVar10 == 0x3e032f36eb55c0dc) {
          local_35a = *(char *)(param_4 + 9) == '\0' & *(byte *)(param_4 + 0xd);
          local_148 = &local_33e;
          local_140 = &local_35a;
          local_138 = &local_2c8;
          local_130 = param_4;
          local_128 = local_358;
          local_120 = &local_158;
          local_368 = 0x114091b8cfccc0e3;
          if (local_35a != 0) {
            local_368 = 0x554984ebeab63c3c;
          }
          local_370 = 0xa61fad7ba86cd9e;
        }
        else if (uVar10 == 0x3ec8a283ba517151) {
          local_268 = (longlong)local_210 - (longlong)local_2d8;
          local_368 = 0xbb52d38ed7d5dd8b;
          if ((longlong)local_2a8 < (longlong)local_210 - (longlong)local_2d8) {
            local_368 = 0x8d0eb7c93c4e7e56;
          }
          local_304 = 0x84;
          local_370 = 0xb2d0965e6c109ebb;
          local_238 = local_348;
          goto LAB_18004c0c8;
        }
      }
      else if (uVar10 == 0x3fde2197505ee0ed) {
        local_220 = local_238;
        local_158 = local_238;
        local_150 = local_304;
        local_2c4 = ((int)local_238 - (int)local_358) + 2;
        local_2c8 = local_2c4;
        local_33e = 0x7830;
        local_368 = 0x53c3dd6ddc4076e7;
        if (*(char *)(param_4 + 8) == 'P') {
          local_368 = 0xf8b2662deed09f6d;
        }
        local_370 = 0x6dc0f25b3715b63b;
      }
      else if (uVar10 == 0x45367f4c78923608) {
        local_228 = local_240;
        local_359 = *local_240;
        local_368 = 0x73b62354a3688b2;
        if ((byte)(local_359 + 0x9fU) < 0x1a) {
          local_368 = 0x864e3a659f25a94f;
        }
        local_370 = 0x2fca80eca78f9ee8;
      }
      goto LAB_18004afb0;
    }
    uVar9 = (uint)local_300;
    if ((longlong)uVar10 < 0x5f287e3c5030f1a2) {
      if ((longlong)uVar10 < 0x5754352ce43f4170) {
        if (uVar10 == 0x4648fd63dfd2bc8a) {
          local_358[0] = local_338[uVar7 & 0xf] + local_373;
          local_368 = 0xbf3c440e5878d6bd;
          local_370 = 0x266737111dafc233;
        }
        else if (uVar10 == 0x4cd40dd23474bd45) {
          local_108 = (ulonglong)(local_35b & 1) | (ulonglong)(local_35b >> 1 & 1) << 0x20;
          uStack_100 = (ulonglong)(local_35b >> 2 & 1) | (ulonglong)(local_35b >> 3) << 0x20;
          local_368 = 0x52075050c24c4a4b;
          if (*(char *)((longlong)&local_108 + (ulonglong)(uVar6 & 3) * 4) != '\0') {
            local_368 = 0x72120a1f448d5e05;
          }
          local_370 = 0x28e18b0d3e6aff85;
        }
        else if (uVar10 == 0x50ee465fda1ffc3d) {
          local_f8 = (ulonglong)(local_35b & 1) | (ulonglong)(local_35b >> 1 & 1) << 0x20;
          uStack_f0 = (ulonglong)(local_35b >> 2 & 1) | (ulonglong)(local_35b >> 3) << 0x20;
          local_368 = 0xf087cf2add88b75a;
          if (*(char *)((longlong)&local_f8 + (ulonglong)(uVar8 & 3) * 4) != '\0') {
            local_368 = 0x44ce5c3c95a1b48b;
          }
          local_370 = 0x8d492a677f34907b;
        }
      }
      else if ((longlong)uVar10 < 0x5af381127ae7a180) {
        if (uVar10 == 0x5754352ce43f4170) {
          *local_1f8 = local_338[uVar9 & 0xf] + local_373;
          local_368 = 0xdfcd2f8c56cb871a;
          local_370 = 0x5153d4cef0c5f379;
        }
        else if (uVar10 == 0x5790fabb555052c8) {
          auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                     CONCAT11(uVar13,uVar13)));
          auVar30 = pshuflw(auVar30,auVar30,0x50);
          auVar18._0_4_ = auVar30._0_4_;
          auVar18._4_4_ = auVar18._0_4_;
          auVar18._8_4_ = auVar30._4_4_;
          auVar18._12_4_ = auVar30._4_4_;
          auVar18 = auVar18 & auVar4;
          auVar19[0] = -(auVar18[0] == cVar60);
          auVar19[1] = -(auVar18[1] == cVar70);
          auVar19[2] = -(auVar18[2] == cVar71);
          auVar19[3] = -(auVar18[3] == cVar72);
          auVar19[4] = -(auVar18[4] == cVar74);
          auVar19[5] = -(auVar18[5] == cVar75);
          auVar19[6] = -(auVar18[6] == cVar76);
          auVar19[7] = -(auVar18[7] == cVar77);
          auVar19[8] = -(auVar18[8] == cVar78);
          auVar19[9] = -(auVar18[9] == cVar79);
          auVar19[10] = -(auVar18[10] == cVar80);
          auVar19[0xb] = -(auVar18[0xb] == cVar81);
          auVar19[0xc] = -(auVar18[0xc] == cVar82);
          auVar19[0xd] = -(auVar18[0xd] == cVar83);
          auVar19[0xe] = -(auVar18[0xe] == cVar84);
          auVar19[0xf] = -(auVar18[0xf] == cVar85);
          local_368 = 0x8231584187df1f46;
          if (((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd
                        | (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf) >>
               ((uint)local_288 & 0x1f) & 1) != 0) {
            local_368 = 0x76ef01270f236cb3;
          }
          local_370 = 0xaa557e66bb99d0af;
        }
      }
      else if (uVar10 == 0x5af381127ae7a180) {
        *local_170 = local_338[(ulonglong)(uVar6 & 3) - 4] + local_373;
        local_368 = 0x3b5d8a66118fd0ee;
        local_370 = 0x41bb513beda96520;
      }
      else if (uVar10 == 0x5c79b0deec81803d) {
        *local_178 = local_338[(ulonglong)(uVar9 & 3) - 4] + local_373;
        local_368 = 0xa7aebd14e4b1e8cf;
        local_370 = 0xeb7ab0c6d0c5558a;
      }
    }
    else if ((longlong)uVar10 < 0x7ae6db5dfc26b5ce) {
      if ((longlong)uVar10 < 0x63ca78f4a3c034e4) {
        if (uVar10 == 0x5f287e3c5030f1a2) {
          FUN_18004cdf0(&local_148,param_1,param_2);
          local_368 = 0xb521d754f63a6b1;
          local_370 = 0x17a61450786397cc;
        }
        else if (uVar10 == 0x6063ba308cdfb9d4) {
          auVar30 = ZEXT416(CONCAT22((short)(CONCAT13(uVar45,CONCAT12(uVar45,local_372)) >> 0x10),
                                     CONCAT11(uVar13,uVar13)));
          auVar30 = pshuflw(auVar30,auVar30,0x50);
          auVar14._0_4_ = auVar30._0_4_;
          auVar14._4_4_ = auVar14._0_4_;
          auVar14._8_4_ = auVar30._4_4_;
          auVar14._12_4_ = auVar30._4_4_;
          auVar14 = auVar14 & auVar4;
          auVar15[0] = -(auVar14[0] == cVar60);
          auVar15[1] = -(auVar14[1] == cVar70);
          auVar15[2] = -(auVar14[2] == cVar71);
          auVar15[3] = -(auVar14[3] == cVar72);
          auVar15[4] = -(auVar14[4] == cVar74);
          auVar15[5] = -(auVar14[5] == cVar75);
          auVar15[6] = -(auVar14[6] == cVar76);
          auVar15[7] = -(auVar14[7] == cVar77);
          auVar15[8] = -(auVar14[8] == cVar78);
          auVar15[9] = -(auVar14[9] == cVar79);
          auVar15[10] = -(auVar14[10] == cVar80);
          auVar15[0xb] = -(auVar14[0xb] == cVar81);
          auVar15[0xc] = -(auVar14[0xc] == cVar82);
          auVar15[0xd] = -(auVar14[0xd] == cVar83);
          auVar15[0xe] = -(auVar14[0xe] == cVar84);
          auVar15[0xf] = -(auVar14[0xf] == cVar85);
          local_368 = 0xc867ddef24b1004a;
          if (((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd
                        | (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf) >>
               (uVar9 & 0x1f) & 1) != 0) {
            local_368 = 0x11ad138166803559;
          }
          local_370 = 0x46f926ad82bf7429;
        }
      }
      else if (uVar10 == 0x63ca78f4a3c034e4) {
        *local_1c8 = local_338[(uint)local_280 & 0xf] + local_373;
        local_368 = 0xa79e77380a318eeb;
        local_370 = 0x834305fc5a46a31d;
      }
      else if (uVar10 == 0x69a99bdef7542810) {
        *local_1b8 = local_338[(uint)local_2b0 & 0xf] + local_373;
        local_368 = 0x832410f4568b285f;
        local_370 = 0x3a305af7cab52834;
      }
    }
    else if ((longlong)uVar10 < 0x7dfbbf77b17b230e) {
      if (uVar10 == 0x7ae6db5dfc26b5ce) {
        local_368 = 0x284505b526a90c7e;
        if (local_160 + local_318 == local_260) {
          local_368 = 0x8cae1d2ddf69629;
        }
        local_370 = 0x8add754c93523d2;
        local_248 = local_160 + local_318;
        goto LAB_18004c5ec;
      }
      if (uVar10 == 0x7dcee54da2bc2721) {
        local_e8 = (ulonglong)(local_35b & 1) | (ulonglong)(local_35b >> 1 & 1) << 0x20;
        uStack_e0 = (ulonglong)(local_35b >> 2 & 1) | (ulonglong)(local_35b >> 3) << 0x20;
        local_368 = 0x93bfc4295cc477fd;
        if (*(char *)((longlong)&local_e8 + (ulonglong)(uVar9 & 3) * 4) != '\0') {
          local_368 = 0x8312792584314a85;
        }
        local_370 = 0xdf6bc9fb68b0cab8;
      }
    }
    else if (uVar10 == 0x7dfbbf77b17b230e) {
      *local_1a0 = local_338[(uint)local_290 & 0xf] + local_373;
      local_368 = 0xce3e7c54ce7dcd21;
      local_370 = 0xd667d71293f3b8f7;
    }
    else if (uVar10 == 0x7ed3fb495a44d345) {
      local_208 = local_2e0 & local_310;
      local_270 = local_310 & 0xfffffffffffffff0;
      local_200 = local_358 + 1;
      local_1f8 = local_358 + 2;
      local_1f0 = local_358 + 3;
      local_1e8 = local_358 + 4;
      local_1e0 = local_358 + 5;
      local_1d8 = local_358 + 6;
      local_1d0 = &cStack_351;
      local_1c8 = &cStack_350;
      local_1c0 = &cStack_34f;
      local_1b8 = &cStack_34e;
      local_1b0 = &cStack_34d;
      local_1a8 = &cStack_34c;
      local_1a0 = &cStack_34b;
      local_198 = &cStack_34a;
      local_190 = &cStack_349;
      local_338[0] = local_358[0];
      local_338[1] = local_358[1];
      local_338[2] = local_358[2];
      local_338[3] = local_358[3];
      cStack_334 = local_358[4];
      cStack_333 = local_358[5];
      cStack_332 = local_358[6];
      cStack_331 = cStack_351;
      cStack_330 = cStack_350;
      cStack_32f = cStack_34f;
      cStack_32e = cStack_34e;
      cStack_32d = cStack_34d;
      cStack_32c = cStack_34c;
      cStack_32b = cStack_34b;
      cStack_32a = cStack_34a;
      cStack_329 = cStack_349;
      bVar12 = local_358[0] + 0x9f;
      bVar44 = local_358[1] + 0x9f;
      bVar46 = local_358[2] + 0x9f;
      bVar47 = local_358[3] + 0x9f;
      bVar48 = local_358[4] + 0x9f;
      bVar49 = local_358[5] + 0x9f;
      bVar50 = local_358[6] + 0x9f;
      bVar51 = cStack_351 + 0x9f;
      bVar52 = cStack_350 + 0x9f;
      bVar53 = cStack_34f + 0x9f;
      bVar54 = cStack_34e + 0x9f;
      bVar55 = cStack_34d + 0x9f;
      bVar56 = cStack_34c + 0x9f;
      bVar57 = cStack_34b + 0x9f;
      bVar58 = cStack_34a + 0x9f;
      bVar59 = cStack_349 + 0x9f;
      local_118[0] = -((byte)((0x19 < bVar12) * '\x19' | (0x19 >= bVar12) * bVar12) == bVar12);
      local_118[1] = -((byte)((0x19 < bVar44) * '\x19' | (0x19 >= bVar44) * bVar44) == bVar44);
      local_118[2] = -((byte)((0x19 < bVar46) * '\x19' | (0x19 >= bVar46) * bVar46) == bVar46);
      local_118[3] = -((byte)((0x19 < bVar47) * '\x19' | (0x19 >= bVar47) * bVar47) == bVar47);
      local_118[4] = -((byte)((0x19 < bVar48) * '\x19' | (0x19 >= bVar48) * bVar48) == bVar48);
      local_118[5] = -((byte)((0x19 < bVar49) * '\x19' | (0x19 >= bVar49) * bVar49) == bVar49);
      local_118[6] = -((byte)((0x19 < bVar50) * '\x19' | (0x19 >= bVar50) * bVar50) == bVar50);
      local_118[7] = -((byte)((0x19 < bVar51) * '\x19' | (0x19 >= bVar51) * bVar51) == bVar51);
      local_118[8] = -((byte)((0x19 < bVar52) * '\x19' | (0x19 >= bVar52) * bVar52) == bVar52);
      local_118[9] = -((byte)((0x19 < bVar53) * '\x19' | (0x19 >= bVar53) * bVar53) == bVar53);
      local_118[10] = -((byte)((0x19 < bVar54) * '\x19' | (0x19 >= bVar54) * bVar54) == bVar54);
      local_118[0xb] = -((byte)((0x19 < bVar55) * '\x19' | (0x19 >= bVar55) * bVar55) == bVar55);
      local_118[0xc] = -((byte)((0x19 < bVar56) * '\x19' | (0x19 >= bVar56) * bVar56) == bVar56);
      local_118[0xd] = -((byte)((0x19 < bVar57) * '\x19' | (0x19 >= bVar57) * bVar57) == bVar57);
      local_118[0xe] = -((byte)((0x19 < bVar58) * '\x19' | (0x19 >= bVar58) * bVar58) == bVar58);
      local_118[0xf] = -((byte)((0x19 < bVar59) * '\x19' | (0x19 >= bVar59) * bVar59) == bVar59);
      local_372 = (ushort)(SUB161(local_118 >> 7,0) & 1) | (ushort)(SUB161(local_118 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(local_118 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(local_118 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(local_118 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(local_118 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(local_118 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(local_118 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(local_118 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(local_118 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(local_118 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(local_118 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(local_118 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(local_118 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(local_118 >> 0x77,0) & 1) << 0xe | (ushort)(local_118[0xf] >> 7) << 0xf;
      local_368 = 0x650b1eda685cd358;
      if ((local_118[uVar7 & 0xf] & 1) != 0) {
        local_368 = 0xba1890a6f2597b5c;
      }
      local_370 = 0xfc506dc52d8bc7d6;
    }
  } while( true );
}



void FUN_18004cdf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_120;
  ulonglong local_118;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  ulonglong *local_108;
  longlong local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  ulonglong *local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 *local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined1 *local_58;
  ulonglong local_50;
  undefined1 *local_48;

  local_118 = 0x340ed4356256ec49;
  local_120 = 0xf63899d28f49befe;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_118 ^ 0xd3cdc8295d6dc6d4;
            uVar2 = local_118 ^ local_120;
            local_120 = local_120 ^ 0xd3cdc8295d6dc6d4;
            local_118 = uVar3;
            if (-0x3dc9b21812e0ad4a < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x6efe4d34762012c1) {
              if (uVar2 == 0x87e8040f2db28f86) {
                local_50 = local_b8;
                local_a8 = *local_108;
                local_b0 = local_100 + local_a8;
                local_118 = 0xc9684f5b5a03eb63;
                if (local_b0 <= *local_e8) {
                  local_118 = 0xa4e32faa1c954c63;
                }
                local_120 = 0x8a784ae3dbad8507;
                local_68 = local_b0;
              }
              else if (uVar2 == 0x889f870ac0464f9a) {
                local_58 = *(undefined1 **)param_1[5];
                local_a0 = (undefined1 *)param_1[4];
                local_118 = 0xaebfe98ba8f75bb5;
                if (local_a0 != local_58) {
                  local_118 = 0x67df3c2654b9dd34;
                }
                local_120 = 0xbeee963c2d09260f;
              }
              else if (uVar2 == 0x8a96dff7a301e6b1) {
                local_e0 = *(int *)param_1[2];
                local_dc = *(int *)param_1[3];
                local_118 = 0x5a9382fa9c56e014;
                if (local_dc <= local_e0) {
                  local_118 = 0xdb61752aa4b7cb38;
                }
                local_120 = 0x53fef22064f184a2;
              }
            }
            else if ((longlong)uVar2 < -0x58ca3a511724ac32) {
              if (uVar2 == 0x9101b2cb89dfed3f) {
                lVar1 = *local_f0;
                *local_108 = local_98;
                *(undefined1 *)(lVar1 + local_90) = local_109;
                local_a0 = local_48 + 1;
                local_118 = 0x92d789c56c6221c2;
                if (local_a0 != local_58) {
                  local_118 = 0x5bb75c68902ca743;
                }
                local_120 = 0x8286f672e99c5c78;
              }
              else if (uVar2 == 0x9c23605e94d5feba) {
                (**(code **)*local_f8)(local_f8,local_78);
                local_c0 = *local_108;
                local_c8 = local_100 + local_c0;
                local_118 = 0x4fde4ab1cae828b6;
                local_120 = 0xa2052d13882f0104;
              }
            }
            else if (uVar2 == 0xa735c5aee8db53ce) {
              (**(code **)*local_f8)(local_f8,local_70);
              local_d0 = *local_108;
              local_d8 = local_100 + local_d0;
              local_118 = 0xe088cf6840c4216f;
              local_120 = 0xbb25c9bcadafb801;
            }
            else if (uVar2 == 0xb9c78fdf7982543a) {
              (**(code **)*local_f8)(local_f8,local_60);
              local_90 = *local_108;
              local_98 = local_100 + local_90;
              local_118 = 0xd72e38276610f427;
              local_120 = 0x462f8aecefcf1918;
            }
          }
          if (0x10517fb785fe7db9 < (longlong)uVar2) break;
          if ((longlong)uVar2 < -0x1224985dbd38d64e) {
            if (uVar2 == 0xc2364de7ed1f52b7) {
              local_100 = 1;
              local_80 = (undefined1 *)*param_1;
              local_108 = param_3 + 2;
              local_e8 = param_3 + 3;
              local_f0 = param_3 + 1;
              local_10b = *local_80;
              local_c0 = param_3[2];
              local_c8 = local_c0 + 1;
              local_118 = 0x7fe9a114173064c3;
              if (local_c8 <= (ulonglong)param_3[3]) {
                local_118 = 0xe11a6e8c122b3cb;
              }
              local_120 = 0xe3cac14a83e59a79;
              local_f8 = param_3;
              local_78 = local_c8;
            }
            else if (uVar2 == 0xd931aa1a79b0fb3b) {
              local_48 = local_a0;
              local_109 = *local_a0;
              local_90 = *local_108;
              local_98 = local_100 + local_90;
              local_118 = 0xc601eadd7c7daae;
              if (local_98 <= *local_e8) {
                local_118 = 0x24a623b9279a63ab;
              }
              local_120 = 0xb5a79172ae458e94;
              local_60 = local_98;
            }
          }
          else if (uVar2 == 0xeddb67a242c729b2) {
            lVar1 = *local_f0;
            *local_108 = local_c8;
            *(undefined1 *)(lVar1 + local_c0) = local_10b;
            local_10a = local_80[1];
            local_d0 = *local_108;
            local_d8 = local_100 + local_d0;
            local_118 = 0xdd71f59a5db0c63f;
            if (local_d8 <= *local_e8) {
              local_118 = 0x21e936e058000c9f;
            }
            local_120 = 0x7a443034b56b95f1;
            local_70 = local_d8;
          }
          else if (uVar2 == 0x96d70daf8a764b6) {
            local_b8 = (ulonglong)(uint)(local_dc - local_e0);
            local_118 = 0xbfcc4c2907401e0e;
            local_120 = 0x382448262af29188;
          }
        }
        if ((longlong)uVar2 < 0x431005b881ae6e64) break;
        if (uVar2 == 0x431005b881ae6e64) {
          (**(code **)*local_f8)(local_f8,local_68);
          local_a8 = *local_108;
          local_b0 = local_100 + local_a8;
          local_118 = 0x341318712c97b11;
          local_120 = 0x2dda54ced5f1b275;
        }
        else if (uVar2 == 0x5bad06d4ed6b996e) {
          lVar1 = *local_f0;
          *local_108 = local_d8;
          *(undefined1 *)(lVar1 + local_d0) = local_10a;
          local_118 = 0xc747f88630fa0a02;
          if (*(char *)param_1[1] == '\0') {
            local_118 = 0xc54ea07b53bda329;
          }
          local_120 = 0x4dd1277193fbecb3;
        }
      }
      if (uVar2 != 0x2e9b6549c738c964) break;
      lVar1 = *local_f0;
      *local_108 = local_b0;
      *(undefined1 *)(lVar1 + local_a8) = 0x30;
      local_118 = 0x7cf332d50c322b2a;
      if ((longlong)local_50 <= local_100) {
        local_118 = 0x7384b1d0e1c6eb36;
      }
      local_b8 = local_50 - 1;
      local_120 = 0xfb1b36da2180a4ac;
    }
  } while (uVar2 != 0x10517fb785fe7dba);
  *param_2 = param_3;
  return;
}



void FUN_18004d550(undefined8 *param_1,undefined8 *param_2,int param_3,int *param_4,byte param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_1b8 [37];
  byte local_193;
  byte local_192;
  byte local_191;
  ulonglong local_190;
  ulonglong local_188;
  undefined1 local_17c;
  undefined1 local_17b;
  byte local_17a;
  byte local_179;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  longlong local_148;
  ulonglong local_140;
  undefined1 *local_138;
  ulonglong *local_130;
  undefined8 *local_128;
  ulonglong *local_120;
  undefined1 *local_118;
  int local_10c;
  int local_108;
  int local_104;
  undefined8 *local_100;
  undefined8 *local_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined1 *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  ulonglong *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 *local_88;
  ulonglong *local_80;
  longlong *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_1b8;
  local_188 = 0x30d604f1b5fcd95c;
  local_190 = 0xed776e1168d440cb;
  local_100 = param_2;
  local_b8 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar3 = local_188 ^ 0x85b31d7cb059a284;
              uVar2 = local_188 ^ local_190;
              local_190 = local_190 ^ 0x85b31d7cb059a284;
              local_188 = uVar3;
              if ((longlong)uVar2 < 0x1bebe88e58e6c794) break;
              if ((longlong)uVar2 < 0x633832a521f82acc) {
                if ((longlong)uVar2 < 0x469ee5b012960eb6) {
                  if (uVar2 == 0x1bebe88e58e6c794) {
                    local_10c = local_160;
                    local_188 = 0x9286a5a1aaea040a;
                    local_190 = 0x99f5e7e95b51bf3e;
                    local_d0 = local_68;
                  }
                  else if (uVar2 == 0x3b2a8ab74db0669d) {
                    local_15c = local_164 + local_108;
                    local_188 = 0x6640e7ba40f50700;
                    if (local_168 < local_108) {
                      local_188 = 0x5c89c9e63dfee1e;
                    }
                    local_190 = 0x10e42b2843026252;
                    local_140 = local_f0;
                    local_191 = 1;
                    local_138 = local_118;
                    local_174 = local_14c;
                  }
                  else if (uVar2 == 0x3da7cf48bcd27407) {
                    local_174 = local_16c;
                    local_191 = *(byte *)((longlong)param_4 + 0xe);
                    local_140 = (ulonglong)local_191;
                    local_188 = 0x56f29d4f24921e94;
                    local_190 = 0x205651dd27657bc6;
                    local_138 = (undefined1 *)((longlong)param_4 + 0xf);
                  }
                }
                else if (uVar2 == 0x469ee5b012960eb6) {
                  local_188 = 0x1d45cd00ed1eaaeb;
                  if ((char)local_192 < '\x02') {
                    local_188 = 0x75184f0b3a442d50;
                  }
                  local_190 = 0x1b8a1f32b84a871d;
                }
                else if (uVar2 == 0x4b3e50385396e6b2) {
                  local_88 = local_118 + local_f0;
                  local_120 = local_f8 + 2;
                  local_80 = local_f8 + 3;
                  local_78 = local_f8 + 1;
                  local_188 = 0x697e6e29669b981;
                  if (local_17a == local_193) {
                    local_188 = 0x651f9dc6b543509f;
                  }
                  local_190 = 0x13bb5154b6b435cd;
                  local_140 = 0;
                  local_191 = local_193;
                  local_138 = local_118;
                  local_174 = local_14c;
                  local_15c = local_104;
                }
                else if (uVar2 == 0x56e6c2cf27628888) {
                  lVar1 = *local_a0;
                  *local_130 = local_c8;
                  *(undefined1 *)(lVar1 + local_c0) = local_17b;
                  local_d0 = local_58 + 1;
                  local_188 = 0x745258cfdbdb0baa;
                  if (local_d0 == local_b0) {
                    local_188 = 0x15f810da50d6ef66;
                  }
                  local_190 = 0x7f211a872a60b09e;
                }
              }
              else if ((longlong)uVar2 < 0x6ad90a5d7ab65ff8) {
                if (uVar2 == 0x633832a521f82acc) {
                  local_192 = param_5;
                  if (*(byte *)((longlong)param_4 + 9) != local_193) {
                    local_192 = *(byte *)((longlong)param_4 + 9);
                  }
                  local_188 = 0xb8be644b0a55bfa4;
                  local_190 = 0xfe2081fb18c3b112;
                }
                else if (uVar2 == 0x63eaa7c3fa6426d6) {
                  local_188 = 0x669ad145d3573865;
                  local_190 = 0x5b3d1e0d6f854c62;
                  local_16c = 0;
                }
                else if (uVar2 == 0x65ac4b63c6df169f) {
                  (**(code **)*local_128)(local_128,local_90);
                  local_c0 = *local_130;
                  local_c8 = local_148 + local_c0;
                  local_188 = 0xb5cd1b33a52ea9c1;
                  local_190 = 0xe32bd9fc824c2149;
                }
              }
              else if ((longlong)uVar2 < 0x76a4cc9203f76552) {
                if (uVar2 == 0x6ad90a5d7ab65ff8) {
                  local_160 = local_164 + local_10c;
                  local_188 = 0xaa9f22a660549ef0;
                  if (local_168 < local_10c) {
                    local_188 = 0x6f433ec9cfd4f30;
                  }
                  local_190 = 0x1d1fdb62c41b88a4;
                }
                else if (uVar2 == 0x6e925039820eaa4d) {
                  local_188 = 0x906f17fc5b9145d5;
                  if (local_192 == 1) {
                    local_188 = 0xf995afe7c91c3470;
                  }
                  local_190 = 0xf385b03fa1f56303;
                }
              }
              else if (uVar2 == 0x76a4cc9203f76552) {
                local_150 = local_174;
                local_68 = local_138;
                local_179 = local_191;
                local_60 = local_140;
                FUN_18004cdf0(param_6,&local_50,local_100);
                local_128 = local_50;
                local_188 = 0x72c2f86d6e674e0f;
                if (local_178 < local_150) {
                  local_188 = 0xd60f45df35c41dde;
                }
                local_190 = 0xc54201a9ca28585b;
              }
              else if (uVar2 == 0x785e2fac6e71b4bd) {
                local_154 = local_170 - param_3;
                local_188 = 0x4f0a65f77794d125;
                local_190 = 0x8908f1cf8c6e7328;
                local_158 = local_178;
              }
            }
            if ((longlong)uVar2 < 0x1662c6d6addf5c0) break;
            if ((longlong)uVar2 < 0xb734248f1bbbb34) {
              if (uVar2 == 0x1662c6d6addf5c0) {
                (**(code **)*local_f8)(local_f8,local_98);
                local_d8 = *local_120;
                local_e0 = local_148 + local_d8;
                local_188 = 0x8bf5f23d6314ee5e;
                local_190 = 0x712f92d24de93459;
              }
              else if (uVar2 == 0x6cfd23255542df6) {
                local_188 = 0x35ed9eea1a126a29;
                if ((char)local_192 < '\x03') {
                  local_188 = 0xb7724691d786be88;
                }
                local_190 = 0xcf2c693db9f70a35;
              }
              else if (uVar2 == 0xa101fd868e95773) {
                local_16c = local_170 - param_3;
                local_188 = 0x59b76109241a64b0;
                local_190 = 0x6410ae4198c810b7;
              }
            }
            else if (uVar2 == 0xb734248f1bbbb34) {
              local_58 = local_d0;
              local_17b = *local_d0;
              local_c0 = *local_130;
              local_c8 = local_148 + local_c0;
              local_188 = 0xc8336fb8f9fa2f64;
              if (*local_a8 < local_c8) {
                local_188 = 0xfb79e6141847b173;
              }
              local_190 = 0x9ed5ad77de98a7ec;
              local_90 = local_c8;
            }
            else if (uVar2 == 0x134d4476ffec4585) {
              local_b0 = (undefined1 *)((longlong)param_4 + local_60 + 0xf);
              local_130 = local_128 + 2;
              local_a8 = local_128 + 3;
              local_a0 = local_128 + 1;
              local_188 = 0xc58a168b58331857;
              if (local_179 == local_193) {
                local_188 = 0x69e107c1a49ac997;
              }
              local_190 = 0xde61fe0500d5dfc3;
              local_160 = local_150;
            }
            else if (uVar2 == 0x152cb7b620dd8c4c) {
              local_108 = local_15c;
              local_188 = 0x4ac738478a5b588a;
              local_190 = 0xde6183e91d6321e3;
              local_e8 = local_118;
            }
          }
          if ((longlong)uVar2 < -0x225e951f22d76669) break;
          if (uVar2 == 0xdda16ae0dd289997) {
            local_178 = 0;
            local_148 = 1;
            local_193 = 0;
            local_164 = -1;
            local_168 = 1;
            local_f8 = local_100;
            local_170 = *param_4;
            local_188 = 0x807ce1602910b3c5;
            if (param_3 < local_170) {
              local_188 = 0xdee31c8db43aed0e;
            }
            local_16c = 0;
            local_190 = 0xbddb2e2895c2c7c2;
          }
          else if (uVar2 == 0xfac1f7d7a3e5601c) {
            local_188 = 0x8dc455a5c46f9490;
            if (local_192 == 3) {
              local_188 = 0x7f820ddd77b01cec;
            }
            local_190 = 0xee2ef2663e0bb246;
          }
          else if (uVar2 == 0xfada60ef2efdda07) {
            lVar1 = *local_78;
            *local_120 = local_e0;
            *(undefined1 *)(lVar1 + local_d8) = local_17c;
            local_e8 = local_70 + 1;
            local_188 = 0xa7faafae45119e83;
            if (local_e8 == local_88) {
              local_188 = 0x8769eb79f998177;
            }
            local_190 = 0x335c1400d229e7ea;
          }
        }
        if (-0x487f063b5bb0e9ad < (longlong)uVar2) break;
        if (uVar2 == 0x91acffbb49bbaeaa) {
          local_154 = (local_170 - param_3) / 2;
          local_158 = (local_170 - param_3) - local_154;
          local_188 = 0xc7454ed3c43757d4;
          local_190 = 0x147daeb3fcdf5d9;
        }
        else if (uVar2 == 0x94a6bbae97387969) {
          local_70 = local_e8;
          local_17c = *local_e8;
          local_d8 = *local_120;
          local_e0 = local_148 + local_d8;
          local_188 = 0x261ad50d29fd2fff;
          if (*local_80 < local_e0) {
            local_188 = 0xdda6998f6ddd0038;
          }
          local_190 = 0xdcc0b5e20700f5f8;
          local_98 = local_e0;
        }
      }
      if (uVar2 != 0xc6029438fbfaa20d) break;
      local_104 = local_154;
      local_14c = local_158;
      local_138 = (undefined1 *)((longlong)param_4 + 0xf);
      local_191 = *(byte *)((longlong)param_4 + 0xe);
      local_140 = (ulonglong)local_191;
      local_188 = 0x5bf70b7b802575d4;
      if (local_178 < local_154) {
        local_188 = 0x666d97d1d044f634;
      }
      local_190 = 0x2d53c7e983d21086;
      local_174 = local_158;
      local_17a = local_191;
      local_118 = local_138;
      local_f0 = local_140;
    }
  } while (uVar2 != 0xb780f9c4a44f1654);
  *local_b8 = local_128;
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_1b8)) {
  }
  return;
}



void FUN_18004e1e3(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x79d3aca9283b7ce1;
  local_68 = 0x2b35f4f082d8a038;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xf83cf778f99abf2e;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xf83cf778f99abf2e;
          local_60 = uVar2;
          if (0x35e1b21a3bb884cd < (longlong)uVar1) break;
          if (uVar1 == 0xacf5a25dd176d65f) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x59cd95dd10ed7ba3;
            local_68 = 0x6c2c27c72b55ff6d;
          }
          else if (uVar1 == 0xdd573e5e78cec853) {
            *param_5 = 1;
            local_60 = 0x3603f0a15d4dd67a;
            local_68 = 0xa4907b78027a23c;
          }
          else if (uVar1 == 0xec43031fc71ef492) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xc3ca7f80ac696e23;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x13738a91574602fe;
            }
            local_68 = 0x6f3fdddd7d1fb87c;
          }
        }
        if ((longlong)uVar1 < 0x52e65859aae3dcd9) break;
        if (uVar1 == 0x7c4c574c2a59ba82) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0x205f658a42f3ffeb;
          local_68 = 0x15bed790794b7b25;
        }
        else if (uVar1 == 0x52e65859aae3dcd9) {
          local_60 = 0x9c37fb5b72cd4ceb;
          if (*param_5 == 1) {
            local_60 = 0x4c3e0f5268b9cc3f;
          }
          local_68 = 0x7074f844b5d3b879;
          local_54 = 0;
          local_6a = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x35e1b21a3bb884ce) break;
      local_6a = local_6b ^ local_6d;
      *(byte *)(param_1 + (int)local_4c) = local_6a;
      local_54 = local_4c + 1;
      local_60 = 0xffede5d55d80628a;
      if (local_54 == param_4) {
        local_60 = 0xcef9d894e2505e4b;
      }
      local_68 = 0x13aee6ca9a9e9618;
    }
  } while (uVar1 != 0x3c4af716dd6a7446);
  return;
}



void FUN_18004e494(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort local_72;
  short local_70;
  ushort local_6e;
  ushort local_6c;
  ushort local_6a;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint local_4c;
  longlong local_48;

  local_60 = 0xb6390211ac6da53d;
  local_68 = 0xc03f8a52701d19da;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x5d060cff0e3d15fa;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x5d060cff0e3d15fa;
          local_60 = uVar2;
          if (0x587317a5c0a7e78d < (longlong)uVar1) break;
          if (uVar1 == 0x193484848b5733b5) {
            local_6c = -(local_70 - local_6a ^ local_72);
            local_60 = 0x454714d95f4a1d66;
            local_68 = 0x28f4ff803ef788d5;
          }
          else if (uVar1 == 0x36adb4c50a44ee25) {
            local_6a = local_6e;
            local_4c = local_54;
            local_72 = *(ushort *)(param_2 + (longlong)(int)(local_54 % param_3) * 2);
            local_70 = *(short *)(local_48 + (int)(local_54 * 2));
            local_60 = 0x960b0d879c786335;
            if (((local_54 % param_3) * (uint)local_72 & 1) == 0) {
              local_60 = 0xcd76f6254c299b25;
            }
            local_68 = 0x8f3f8903172f5080;
          }
          else if (uVar1 == 0x42497f265b06cba5) {
            local_6c = ~(local_70 + local_6a ^ local_72);
            local_60 = 0xdac036db57728a7;
            local_68 = 0x601fe834d4cabd14;
          }
        }
        if ((longlong)uVar1 < 0x6db3eb5961bd95b3) break;
        if (uVar1 == 0x6db3eb5961bd95b3) {
          local_6e = local_6c ^ local_72;
          *(ushort *)(param_1 + (longlong)(int)local_4c * 2) = local_6e;
          local_54 = local_4c + 1;
          local_60 = 0x711f7e9314a90c3d;
          if (local_54 == param_4) {
            local_60 = 0x1fc1ddf3de4a0596;
          }
          local_68 = 0x47b2ca561eede218;
        }
        else if (uVar1 == 0x76068843dc70bce7) {
          local_60 = 0xc180efd8c66d0c7b;
          if (*param_5 == 1) {
            local_60 = 0x9f634f6b14ffd982;
          }
          local_68 = 0xf72d5b1dcc29e25e;
          local_54 = 0;
          local_6e = 0;
          local_48 = (int)(param_3 * 2) + param_2;
        }
      }
      if (uVar1 != 0x587317a5c0a7e78e) break;
      *param_5 = 1;
      local_60 = 0x594b2bca15a8229f;
      local_68 = 0x31053fbccd7e1943;
    }
  } while (uVar1 != 0x684e1476d8d63bdc);
  return;
}



char * FUN_18004e770(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x5ac9d1f72625d30b;
  local_50 = 0x66c9d13a642ad197;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xdb2d070e8175d68d;
        if (0x3c52cd366ea285bf < (longlong)uVar1) break;
        if (uVar1 == 0x16c55c1d126da243) {
          FUN_1801d62d8(&DAT_1802a1e60);
          local_48 = 0xec45fbdece49e695;
          if (DAT_1802a1e60 == -1) {
            local_48 = 0xb67bd15a187d4b7a;
          }
          local_50 = 0x8a291c6c76dfceba;
        }
        else {
          local_48 = local_48 ^ 0xdb2d070e8175d68d;
          if (uVar1 == 0x3c0000cd420f029c) {
            local_48 = 0x890cf3ecdcb11db4;
            if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
                DAT_1802a1e60) {
              local_48 = 0xf9a54843764a97d8;
            }
            local_50 = 0xef60145e6427359b;
          }
        }
      }
      if (uVar1 != 0x3c52cd366ea285c0) break;
      atexit(FUN_18004e920);
      _Init_thread_footer(&DAT_1802a1e60);
      local_48 = 0x9175b2338536c8f0;
      local_50 = 0xf71955813da0e0df;
    }
    local_48 = local_48 ^ 0xdb2d070e8175d68d;
  } while (uVar1 != 0x666ce7b2b896282f);
  return s_default_180271308;
}



void FUN_18004e920(void)

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

  local_80 = 0x580d432d3a587cc9;
  local_88 = 0xf15372401318d3ed;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_80 ^ 0x1ae64e805e981d9c;
          uVar1 = local_80 ^ local_88;
          local_88 = local_88 ^ 0x1ae64e805e981d9c;
          local_80 = uVar2;
          if (0x79abf86ae8da28 < (longlong)uVar1) break;
          if (uVar1 == 0x8e4354396594b992) {
            local_48 = *(longlong *)(local_50 + -8);
            local_80 = 0xaf28f4bb1d6657d4;
            if ((local_50 - local_48) - 8U < 0x20) {
              local_80 = 0xa6b371c3db39d3a6;
            }
            local_88 = 0xaf515f43778e8dfd;
          }
          else if (uVar1 == 0xa95e316d2940af24) {
            local_70 = 0xf;
            local_78 = 0;
            local_68 = DAT_180271320;
            local_80 = 0x4a4303fb4616b7de;
            if (0xf < DAT_180271320) {
              local_80 = 0xbb4154b71c70953c;
            }
            local_88 = 0x4b7d6493ad772523;
          }
          else if (uVar1 == 0xf03c3024b107b01f) {
            local_58 = CONCAT71(s_default_180271308._1_7_,s_default_180271308[0]);
            local_60 = local_68 + 1;
            local_80 = 0x293e4349e48a3c18;
            if (0xfff < local_60) {
              local_80 = 0xcd7e80357e93d904;
            }
            local_88 = 0x433dd40c1b076096;
            local_50 = local_58;
          }
        }
        if ((longlong)uVar1 < 0x6a039745ff8d5c8e) break;
        if (uVar1 == 0x6a039745ff8d5c8e) {
          thunk_FUN_1801f42e0(local_58,local_60);
          local_80 = 0xfa7ad7d5170c27de;
          local_88 = 0xfb44b0bdfc6db523;
        }
      }
      if (uVar1 != 0x9e22e80acb75e5b) break;
      local_60 = local_68 + 0x28;
      local_80 = 0xe97207c3bea8f575;
      local_88 = 0x837190864125a9fb;
      local_58 = local_48;
    }
    if (uVar1 == 0x13e6768eb6192fd) break;
    if (uVar1 == 0x79abf86ae8da29) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_78);
    }
  }
  _DAT_180271318 = local_78;
  DAT_180271320 = local_70;
  s_default_180271308[0] = '\0';
  return;
}



longlong * FUN_18004ec60(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 ***pppuVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 **local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong local_130;
  LPVOID local_120;
  undefined2 local_118;
  undefined6 uStack_116;
  uintptr_t local_108;
  ulonglong local_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined6 local_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined2 local_c2;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uintptr_t local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  uintptr_t local_58;
  ulonglong local_50;
  uint local_48;
  undefined2 local_42;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_78 = 0x29;
  local_68 = 0x20;
  local_58 = 0;
  local_60 = 1;
  local_88 = -8;
  local_80 = 0xfff;
  local_48 = 0;
  local_42 = 0;
  local_70 = 2;
  local_50 = 7;
  local_120 = (LPVOID)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  local_b0 = param_1;
  iVar5 = SHGetKnownFolderPath(&DAT_180223ff8,0,0,&local_120);
  if (iVar5 < 0) {
    local_c0 = local_50;
    local_b8 = local_50;
    FUN_1800b9206(&DAT_1802a1e90,&DAT_1802715ae,0xf,8,&DAT_1802a1ea0);
    uStack_c8 = uRam00000001802a1e98;
    local_d0 = (undefined6)DAT_1802a1e90;
    uStack_ca = DAT_1802a1e90._6_2_;
    local_c2 = local_42;
    local_f8 = (undefined4 *)0x0;
    uStack_f0 = 0;
    puVar6 = (undefined4 *)FUN_1801d61c8(local_68);
    local_e8 = 0xc;
    local_e0 = 0xf;
    local_f8 = puVar6;
    FUN_1800b9206(&DAT_1802a1ea4,&DAT_1802715f0,10,0xd,0x1802a1ec0);
    *(undefined8 *)(puVar6 + 4) = DAT_1802a1eb4;
    uVar3 = uRam00000001802a1eb0;
    uVar2 = uRam00000001802a1eac;
    uVar1 = uRam00000001802a1ea8;
    *puVar6 = _DAT_1802a1ea4;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    *(undefined2 *)(puVar6 + 6) = local_42;
    FUN_18004ff50(&local_148);
    FUN_18004f930(&local_118,&local_148,&local_f8);
    FUN_18004f930(&local_a8,&local_118,&local_d0);
    plVar12 = local_b0;
    if (local_b0 == (longlong *)&local_a8) {
      if (local_50 < uStack_90) {
        lVar9 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
        lVar13 = uStack_90 << ((byte)local_60 & 0x3f);
        uVar7 = local_70 + lVar13;
        lVar14 = lVar9;
        if (local_80 < uVar7) {
          lVar14 = *(longlong *)(lVar9 + -8);
          if (local_68 <= (ulonglong)((lVar9 + local_88) - lVar14)) goto LAB_18004f6ba;
          uVar7 = lVar13 + local_78;
        }
        thunk_FUN_1801f42e0(lVar14,uVar7);
      }
    }
    else {
      if (local_50 < (ulonglong)local_b0[3]) {
        lVar14 = *local_b0;
        lVar13 = local_b0[3] << ((byte)local_60 & 0x3f);
        uVar7 = local_70 + lVar13;
        lVar9 = lVar14;
        if (local_80 < uVar7) {
          lVar9 = *(longlong *)(lVar14 + -8);
          if (local_68 <= (ulonglong)((lVar14 + local_88) - lVar9)) goto LAB_18004f6ba;
          uVar7 = lVar13 + local_78;
        }
        thunk_FUN_1801f42e0(lVar9,uVar7);
      }
      plVar12[2] = local_98;
      plVar12[3] = uStack_90;
      *(uint *)plVar12 = CONCAT22(uStack_a6,local_a8);
      *(undefined4 *)((longlong)plVar12 + 4) = uStack_a4;
      *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_a0._4_4_;
    }
    local_98 = local_58;
    uStack_90 = local_50;
    local_a8 = local_42;
    if (local_50 < local_100) {
      lVar9 = CONCAT62(uStack_116,local_118);
      lVar13 = local_100 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar13;
      lVar14 = lVar9;
      if (local_80 < uVar7) {
        lVar14 = *(longlong *)(lVar9 + -8);
        if (local_68 <= (ulonglong)((lVar9 + local_88) - lVar14)) goto LAB_18004f6ba;
        uVar7 = lVar13 + local_78;
      }
      thunk_FUN_1801f42e0(lVar14,uVar7);
    }
    local_108 = local_58;
    local_100 = local_50;
    local_118 = local_42;
    if (local_50 < local_130) {
      lVar14 = local_130 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar14;
      pppuVar11 = (undefined8 ***)local_148;
      if (local_80 < uVar7) {
        pppuVar11 = (undefined8 ***)local_148[-1];
        if (local_68 <= (ulonglong)((longlong)local_148 + (local_88 - (longlong)pppuVar11))) goto LAB_18004f6ba;
        uVar7 = lVar14 + local_78;
      }
      thunk_FUN_1801f42e0(pppuVar11,uVar7);
    }
    if (local_50 < local_e0) {
      lVar14 = local_e0 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar14;
      puVar6 = local_f8;
      if (local_80 < uVar7) {
        puVar6 = *(undefined4 **)(local_f8 + -2);
        if (local_68 <= (ulonglong)((longlong)local_f8 + (local_88 - (longlong)puVar6))) goto LAB_18004f6ba;
        uVar7 = lVar14 + local_78;
      }
      thunk_FUN_1801f42e0(puVar6,uVar7);
    }
    if (local_50 < local_b8) {
      lVar9 = CONCAT26(uStack_ca,local_d0);
      lVar13 = local_b8 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar13;
      lVar14 = lVar9;
      if (local_80 < uVar7) {
        lVar14 = *(longlong *)(lVar9 + -8);
        if (local_68 <= (ulonglong)((lVar9 + local_88) - lVar14)) goto LAB_18004f6ba;
        uVar7 = lVar13 + local_78;
      }
      thunk_FUN_1801f42e0(lVar14,uVar7);
    }
  }
  else {
    local_c0 = local_50;
    local_b8 = local_50;
    FUN_1800b9206(&DAT_1802a1e90,&DAT_1802715ae,0xf,8,&DAT_1802a1ea0);
    uStack_c8 = uRam00000001802a1e98;
    local_d0 = (undefined6)DAT_1802a1e90;
    uStack_ca = DAT_1802a1e90._6_2_;
    local_c2 = local_42;
    local_f8 = (undefined4 *)0x0;
    uStack_f0 = 0;
    puVar6 = (undefined4 *)FUN_1801d61c8(local_68);
    local_e8 = 0xc;
    local_e0 = 0xf;
    local_f8 = puVar6;
    FUN_1800b9206(&DAT_1802a1ea4,&DAT_1802715f0,10,0xd,0x1802a1ec0);
    pvVar4 = local_120;
    *(undefined8 *)(puVar6 + 4) = DAT_1802a1eb4;
    uVar3 = uRam00000001802a1eb0;
    uVar2 = uRam00000001802a1eac;
    uVar1 = uRam00000001802a1ea8;
    *puVar6 = _DAT_1802a1ea4;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    *(undefined2 *)(puVar6 + 6) = local_42;
    uVar7 = FUN_1801e15b0(local_120);
    local_148 = (undefined8 ***)0x0;
    uStack_140 = 0;
    if (0x7ffffffffffffffe < uVar7) {
      FUN_180002ac0();
    }
    if (uVar7 < 8) {
      pppuVar11 = &local_148;
      uVar15 = local_50;
    }
    else {
      uVar10 = local_50 | uVar7;
      if (0x7ffffffffffffffe < uVar10) {
LAB_18004f6e0:
        std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
      }
      uVar15 = 10;
      if (10 < uVar10) {
        uVar15 = uVar10;
      }
      lVar14 = uVar15 << ((byte)local_60 & 0x3f);
      if (uVar10 < 0x7ff) {
        pppuVar11 = (undefined8 ***)FUN_1801d61c8(lVar14 + local_70);
        local_148 = pppuVar11;
      }
      else {
        if (0x7fffffffffffffeb < uVar10) goto LAB_18004f6e0;
        ppuVar8 = (undefined8 **)FUN_1801d61c8(lVar14 + local_78);
        pppuVar11 = (undefined8 ***)((longlong)ppuVar8 + 0x27U & 0xffffffffffffffe0);
        pppuVar11[-1] = ppuVar8;
        local_148 = pppuVar11;
      }
    }
    local_138 = uVar7;
    local_130 = uVar15;
    FUN_1802079d0(pppuVar11,pvVar4,uVar7 << ((byte)local_60 & 0x3f));
    *(undefined2 *)((longlong)pppuVar11 + uVar7 * 2) = local_42;
    FUN_18004f930(&local_118,&local_148,&local_f8);
    FUN_18004f930(&local_a8,&local_118,&local_d0);
    plVar12 = local_b0;
    if (local_b0 == (longlong *)&local_a8) {
      if (local_50 < uStack_90) {
        lVar9 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
        lVar13 = uStack_90 << ((byte)local_60 & 0x3f);
        uVar7 = local_70 + lVar13;
        lVar14 = lVar9;
        if (local_80 < uVar7) {
          lVar14 = *(longlong *)(lVar9 + -8);
          if (local_68 <= (ulonglong)((lVar9 + local_88) - lVar14)) goto LAB_18004f6ba;
          uVar7 = lVar13 + local_78;
        }
        thunk_FUN_1801f42e0(lVar14,uVar7);
      }
    }
    else {
      if (local_50 < (ulonglong)local_b0[3]) {
        lVar14 = *local_b0;
        lVar13 = local_b0[3] << ((byte)local_60 & 0x3f);
        uVar7 = local_70 + lVar13;
        lVar9 = lVar14;
        if (local_80 < uVar7) {
          lVar9 = *(longlong *)(lVar14 + -8);
          if (local_68 <= (ulonglong)((lVar14 + local_88) - lVar9)) goto LAB_18004f6ba;
          uVar7 = lVar13 + local_78;
        }
        thunk_FUN_1801f42e0(lVar9,uVar7);
      }
      plVar12[2] = local_98;
      plVar12[3] = uStack_90;
      *(uint *)plVar12 = CONCAT22(uStack_a6,local_a8);
      *(undefined4 *)((longlong)plVar12 + 4) = uStack_a4;
      *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_a0._4_4_;
    }
    local_98 = local_58;
    uStack_90 = local_50;
    local_a8 = local_42;
    if (local_50 < local_100) {
      lVar9 = CONCAT62(uStack_116,local_118);
      lVar13 = local_100 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar13;
      lVar14 = lVar9;
      if (local_80 < uVar7) {
        lVar14 = *(longlong *)(lVar9 + -8);
        if (local_68 <= (ulonglong)((lVar9 + local_88) - lVar14)) goto LAB_18004f6ba;
        uVar7 = lVar13 + local_78;
      }
      thunk_FUN_1801f42e0(lVar14,uVar7);
    }
    local_108 = local_58;
    local_100 = local_50;
    local_118 = local_42;
    if (local_50 < local_130) {
      lVar14 = local_130 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar14;
      pppuVar11 = (undefined8 ***)local_148;
      if (local_80 < uVar7) {
        pppuVar11 = (undefined8 ***)local_148[-1];
        if (local_68 <= (ulonglong)((longlong)local_148 + (local_88 - (longlong)pppuVar11))) goto LAB_18004f6ba;
        uVar7 = lVar14 + local_78;
      }
      thunk_FUN_1801f42e0(pppuVar11,uVar7);
    }
    if (local_50 < local_e0) {
      lVar14 = local_e0 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar14;
      puVar6 = local_f8;
      if (local_80 < uVar7) {
        puVar6 = *(undefined4 **)(local_f8 + -2);
        if (local_68 <= (ulonglong)((longlong)local_f8 + (local_88 - (longlong)puVar6))) goto LAB_18004f6ba;
        uVar7 = lVar14 + local_78;
      }
      thunk_FUN_1801f42e0(puVar6,uVar7);
    }
    if (local_50 < local_b8) {
      lVar9 = CONCAT26(uStack_ca,local_d0);
      lVar13 = local_b8 << ((byte)local_60 & 0x3f);
      uVar7 = local_70 + lVar13;
      lVar14 = lVar9;
      if (local_80 < uVar7) {
        lVar14 = *(longlong *)(lVar9 + -8);
        if (local_68 <= (ulonglong)((lVar9 + local_88) - lVar14)) {
LAB_18004f6ba:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_48,local_58);
        }
        uVar7 = lVar13 + local_78;
      }
      thunk_FUN_1801f42e0(lVar14,uVar7);
    }
    CoTaskMemFree(local_120);
  }
  local_a8 = (undefined2)local_48;
  uStack_a6 = (undefined2)(local_48 >> 0x10);
  uStack_a0 = &PTR_vftable_18020e790;
  FUN_180050190(plVar12,&local_a8);
  return local_b0;
}



void Unwind_18004f6f0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x70);
  return;
}



void Unwind_18004f730(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x40);
  return;
}



void Unwind_18004f770(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x90);
  return;
}



void Unwind_18004f7b0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0xb8);
  return;
}



void Unwind_18004f7f0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x70);
  return;
}



void Unwind_18004f830(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x40);
  return;
}



void Unwind_18004f870(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x90);
  return;
}



void Unwind_18004f8b0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0xb8);
  return;
}



void Unwind_18004f8f0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0xd8));
  return;
}



undefined8 * FUN_18004f930(undefined8 *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  bool bVar8;
  ulonglong uVar9;
  bool bVar10;

  lVar1 = *(longlong *)(param_3 + 4);
  puVar7 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    puVar7 = *(uint **)param_3;
  }
  if (lVar1 < 1) {
    if (lVar1 != 0) goto LAB_18004f9e4;
LAB_18004fa38:
    FUN_18005f8b0(param_1,param_2);
    FUN_18005b6e0(param_1,param_3);
  }
  else {
    if (lVar1 == 1) {
      uVar4 = (uint)(ushort)*puVar7;
    }
    else {
LAB_18004f9e4:
      uVar4 = *puVar7;
      if ((uVar4 & 0xffffffdf) - 0x3a0041 < 0x1a) goto LAB_18004fa38;
    }
    sVar3 = (short)uVar4;
    if (sVar3 < 0x5c) {
      if (sVar3 == 0x2f) goto LAB_18004fa38;
    }
    else if (sVar3 == 0x5c) goto LAB_18004fa38;
    lVar2 = *(longlong *)(param_2 + 4);
    if (7 < *(ulonglong *)(param_2 + 6)) {
      param_2 = *(uint **)param_2;
    }
    if (lVar2 == 2) {
      bVar10 = (*param_2 & 0xffffffdf) - 0x3a0041 < 0x1a;
    }
    else {
      bVar10 = false;
    }
    bVar8 = false;
    if ((lVar2 != 0) && (bVar8 = false, !bVar10)) {
      sVar3 = *(short *)((longlong)param_2 + lVar2 * 2 + -2);
      bVar8 = sVar3 != 0x2f && sVar3 != 0x5c;
    }
    uVar9 = (ulonglong)bVar8 + lVar2 + lVar1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    puVar6 = param_1;
    if (uVar9 < 8) {
      param_1[2] = uVar9;
    }
    else {
      FUN_18005eff0(param_1,uVar9);
      if (7 < (ulonglong)param_1[3]) {
        puVar6 = (undefined8 *)*param_1;
      }
    }
    FUN_1802079d0(puVar6,param_2,lVar2 << 1);
    puVar5 = (undefined2 *)((longlong)puVar6 + lVar2 * 2);
    if (bVar8 != false) {
      *puVar5 = 0x5c;
      puVar5 = puVar5 + 1;
    }
    FUN_1802079d0(puVar5,puVar7,lVar1 << 1);
    param_1[2] = uVar9;
    puVar6 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar6 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)puVar6 + uVar9 * 2) = 0;
  }
  return param_1;
}



void Unwind_18004fb70(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x40));
  return;
}



void Unwind_18004fbb0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x40));
  return;
}



void FUN_18004fbf0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  uintptr_t local_80;
  ulonglong local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_90 = 0x62f061ec2bc852d5;
  local_98 = 0x2182180af6d1a66c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xcc201fe1502de00c;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xcc201fe1502de00c;
          local_90 = uVar2;
          if (0x437279e6dd19f4b8 < (longlong)uVar1) break;
          if (uVar1 == 0xcdbbb9ae69ee28bc) {
            local_48 = *(longlong *)(local_58 + -8);
            local_90 = 0x7d0ad1f1266fe7e;
            if (0x1f < (local_58 - local_48) - 8U) {
              local_90 = 0xa7b24fd64a1dc171;
            }
            local_98 = 0xe874a3c6d5c5e3f4;
          }
          else if (uVar1 == 0xefa40ed9c7a31d8a) {
            local_78 = local_50 + 0x29;
            local_70 = local_48;
            local_90 = 0x13c2ee7b8e8931a3;
            local_98 = 0x36f3ca60ab06aece;
          }
          else if (uVar1 == 0x2531241b258f9f6d) {
            thunk_FUN_1801f42e0(local_70,local_78);
            local_90 = 0xd643ca3fda1b00ef;
            local_98 = 0xab0df51a93b8bf8a;
          }
        }
        if (0x6902e0f8617b27ae < (longlong)uVar1) break;
        if (uVar1 == 0x437279e6dd19f4b9) {
          local_80 = 0;
          local_88 = 7;
          local_68 = param_1 + 3;
          local_60 = param_1[3];
          local_90 = 0x89a9568a726664c3;
          if (local_60 < 8) {
            local_90 = 0x9de589575abefc09;
          }
          local_98 = 0xe0abb672131d436c;
        }
        else if (uVar1 == 0x4fc6ec109fd82285) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_80);
        }
      }
      if (uVar1 != 0x6902e0f8617b27af) break;
      local_70 = *param_1;
      local_50 = local_60 * 2;
      local_78 = local_50 + 2;
      local_90 = 0xd3e5ab9fec53a9e;
      if (local_78 < 0x1000) {
        local_90 = 0xe5b4c70cb2a48d4f;
      }
      local_98 = 0xc085e317972b1222;
      local_58 = local_70;
    }
  } while (uVar1 != 0x7d4e3f2549a3bf65);
  param_1[2] = local_80;
  *local_68 = local_88;
  *(undefined2 *)param_1 = 0;
  return;
}



undefined8 * FUN_18004ff50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff88;
  int local_68 [2];
  undefined **local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined2 local_32;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_58 = 0x105;
  local_50 = 0xffffffff;
  local_32 = 0;
  local_48 = 7;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  local_40 = param_1;
  FUN_180063860(0,0x105,param_3,0x105,in_stack_ffffffffffffff88 & 0xffffffffffff0000);
  puVar5 = local_40;
  puVar4 = local_40;
  if (local_48 < (ulonglong)local_40[3]) {
    puVar4 = (undefined8 *)*local_40;
  }
  uVar3 = FUN_1801d97ec(puVar4);
  uVar6 = local_50 & uVar3;
  uVar1 = puVar5[2];
  uVar7 = uVar6 - uVar1;
  if (uVar6 < uVar1 || uVar7 == 0) {
    puVar5[2] = uVar6;
    if (local_48 < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  else {
    if (puVar5[3] - uVar1 < uVar7) {
      FUN_180063860(puVar5,uVar7,uVar7,uVar7,local_32);
      goto LAB_180050088;
    }
    puVar5[2] = uVar6;
    if (local_48 < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_180207610((longlong)puVar5 + uVar1 * 2,0,uVar7 * 2);
  }
  *(undefined2 *)((longlong)puVar5 + uVar6 * 2) = local_32;
LAB_180050088:
  local_60 = &PTR_vftable_18020e790;
  if (uVar3 >> 0x20 == local_50) {
    local_60 = &PTR_vftable_18020e7a0;
  }
  local_68[0] = (int)(uVar3 >> 0x20);
  if (uVar3 >> 0x20 == local_50) {
    local_68[0] = 0x14;
  }
  if (local_68[0] == 0) {
    return local_40;
  }
  FUN_1800b8f52(&DAT_1802a1f94,&DAT_18027199c,0x10,0x14,&DAT_1802a1fa8);
  FUN_180062bd0(&DAT_1802a1f94,local_68,local_40);
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar2)();
  return puVar4;
}


