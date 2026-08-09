#include "../include/aerialclient_types.h"


void Unwind_180050130(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x58));
  return;
}



void Unwind_180050160(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x58));
  return;
}



ulonglong FUN_180050190(uint *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  short sVar3;
  uint *puVar4;
  undefined8 ****ppppuVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 ***local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined2 local_4e;
  uint local_4c;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_4c = 0;
  local_4e = 0;
  local_58 = 7;
  if (*(longlong *)(param_1 + 4) == 0) {
    *param_2 = 3;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_18020e790;
    uVar11 = 0;
LAB_1800505da:
    return uVar11 & 0xffffffffffffff01;
  }
  *param_2 = 0;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_18020e790;
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 7;
  uVar11 = *(ulonglong *)(param_1 + 4);
  if (7 < uVar11) {
    FUN_18006a0a0(&local_78);
    uVar11 = *(ulonglong *)(param_1 + 4);
  }
  local_68 = 0;
  if (local_58 < *(ulonglong *)(param_1 + 6)) {
    param_1 = *(uint **)param_1;
  }
  puVar2 = (uint *)((longlong)param_1 + uVar11 * 2);
  puVar4 = (uint *)FUN_180068d00(param_1,puVar2);
  puVar8 = puVar4;
  if (((puVar4 != param_1) && (4 < (longlong)puVar2 - (longlong)puVar4)) && ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a))
  {
    if ((short)puVar4[1] == 0x2f) {
      puVar8 = puVar4 + 1;
    }
    if ((short)puVar4[1] == 0x5c) {
      puVar8 = puVar4 + 1;
    }
  }
  uVar11 = (longlong)puVar8 - (longlong)param_1 >> 1;
  if (local_60 - local_68 < uVar11) {
    FUN_180061f00(&local_78,uVar11,(longlong)puVar8 - (longlong)param_1,param_1,uVar11);
  }
  else {
    lVar12 = uVar11 + local_68;
    ppppuVar5 = (undefined8 ****)local_78;
    if (local_60 <= local_58) {
      ppppuVar5 = &local_78;
    }
    lVar1 = local_68 * 2;
    local_68 = lVar12;
    FUN_1802079d0(lVar1 + (longlong)ppppuVar5,param_1);
    *(undefined2 *)((longlong)ppppuVar5 + lVar12 * 2) = local_4e;
  }
  uVar7 = (ulonglong)local_4c;
  uVar11 = 0;
LAB_1800503a9:
  uVar9 = (uint)uVar7;
  puVar4 = puVar8;
LAB_1800503c0:
  uVar6 = (uint)uVar7;
  puVar8 = puVar4;
  if (puVar4 != puVar2) {
    do {
      sVar3 = (short)*puVar8;
      if (sVar3 < 0x5c) {
        if (sVar3 != 0x2f) break;
      }
      else if (sVar3 != 0x5c) break;
      puVar8 = (uint *)((longlong)puVar8 + 2);
    } while (puVar8 != puVar2);
    do {
      if (puVar8 == puVar2) goto LAB_180050410;
      sVar3 = (short)*puVar8;
      if (sVar3 < 0x5c) {
        if (sVar3 == 0x2f) goto LAB_180050410;
      }
      else if (sVar3 == 0x5c) goto LAB_180050410;
      puVar8 = (uint *)((longlong)puVar8 + 2);
    } while( true );
  }
  if (uVar9 == local_4c) {
    uVar9 = uVar6;
  }
  if (uVar6 == local_4c) {
    uVar9 = uVar6;
  }
  *param_2 = uVar9;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_18020e790;
  if (local_58 < local_60) {
    uVar7 = local_60 * 2 + 2;
    ppppuVar5 = (undefined8 ****)local_78;
    if (0xfff < uVar7) {
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)local_78[-1]))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,0);
      }
      uVar7 = local_60 * 2 + 0x29;
      ppppuVar5 = (undefined8 ****)local_78[-1];
    }
    thunk_FUN_1801f42e0(ppppuVar5,uVar7);
  }
  goto LAB_1800505da;
LAB_180050410:
  uVar11 = (longlong)puVar8 - (longlong)puVar4 >> 1;
  ppppuVar5 = &local_78;
  if (local_60 - local_68 < uVar11) {
    FUN_180061f00(&local_78,uVar11,(longlong)puVar8 - (longlong)puVar4,puVar4,uVar11);
    if (local_60 <= local_58) goto LAB_180050455;
  }
  else {
    lVar12 = uVar11 + local_68;
    ppppuVar10 = &local_78;
    if (local_58 < local_60) {
      ppppuVar10 = (undefined8 ****)local_78;
    }
    lVar1 = local_68 * 2;
    local_68 = lVar12;
    FUN_1802079d0((longlong)ppppuVar10 + lVar1,puVar4);
    *(undefined2 *)((longlong)ppppuVar10 + lVar12 * 2) = local_4e;
    if (local_60 <= local_58) goto LAB_180050455;
  }
  ppppuVar5 = (undefined8 ****)local_78;
LAB_180050455:
  uVar11 = FUN_1801d9390(ppppuVar5);
  uVar7 = uVar11 >> 0x20;
  puVar4 = puVar8;
  if (uVar7 == 0) goto LAB_1800503c0;
  uVar6 = (uint)(uVar11 >> 0x20);
  if (0x3f < (int)uVar6) {
    if ((int)uVar6 < 0x7b) {
      if (uVar7 != 0x40) goto LAB_1800503a9;
    }
    else if ((int)uVar6 < 0x10b) {
      if (uVar7 != 0x7b) goto LAB_1800503a9;
    }
    else if (uVar7 != 0x10b) goto LAB_1800503a9;
    goto LAB_1800503c0;
  }
  if ((int)uVar6 < 0x35) {
    if ((uVar6 & 0xfffffffe) != 2) goto LAB_1800503a9;
    goto LAB_1800503c0;
  }
  if (uVar7 != 0x35) goto LAB_1800503a9;
  goto LAB_1800503c0;
}



void Unwind_180050610(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x40);
  return;
}



undefined8 * FUN_180050650(undefined8 *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *******pppppppuVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  bool bVar14;
  ulonglong local_90;
  undefined8 *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  uint local_5c;
  longlong local_58;
  ulonglong local_50;
  undefined1 local_42;
  char local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_68 = 0;
  local_58 = 1;
  local_90 = 0xffffffffffffffff;
  local_42 = 0;
  local_5c = 0;
  local_41 = ' ';
  local_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  pbVar13 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar13 = *(byte **)param_2;
  }
  pbVar10 = pbVar13 + *(longlong *)(param_2 + 0x10);
  do {
    uVar9 = local_78;
    if (pbVar13 == pbVar10) {
      pppppppuVar8 = local_88;
      if (local_70 <= local_50) {
        pppppppuVar8 = &local_88;
      }
      if (local_78 == local_68) goto LAB_180050896;
      goto LAB_18005081e;
    }
    bVar2 = *pbVar13;
    uVar4 = isalnum((uint)bVar2);
    if (uVar4 == local_5c) {
      if ((char)bVar2 < '-') {
        if (bVar2 == 0x20) goto LAB_1800507a0;
      }
      else {
        bVar14 = bVar2 == 0x5f;
        if ((char)bVar2 < '_') {
          bVar14 = bVar2 == 0x2d;
        }
        if (bVar14) goto LAB_1800507a0;
      }
    }
    else {
LAB_1800507a0:
      if (uVar9 < local_70) {
        uVar5 = local_58 + uVar9;
        local_78 = uVar5;
        pppppppuVar8 = &local_88;
        if (local_50 < local_70) {
          pppppppuVar8 = local_88;
        }
        *(byte *)((longlong)pppppppuVar8 + uVar9) = bVar2;
        *(undefined1 *)((longlong)pppppppuVar8 + uVar5) = local_42;
      }
      else {
        FUN_18006a970(&local_88);
      }
    }
    pbVar13 = pbVar13 + 1;
  } while (local_78 < 0x20);
  pppppppuVar8 = local_88;
  if (local_70 <= local_50) {
    pppppppuVar8 = &local_88;
  }
LAB_18005081e:
  uVar9 = (longlong)pppppppuVar8 + local_78;
  uVar5 = 0;
  do {
    if (*(char *)((longlong)pppppppuVar8 + uVar5) != local_41) {
      cVar3 = *(char *)(uVar9 - 1);
      goto joined_r0x000180050869;
    }
    lVar7 = uVar5 + 1;
    uVar5 = uVar5 + 1;
  } while ((ulonglong)((longlong)pppppppuVar8 + lVar7) < uVar9);
  cVar3 = *(char *)(uVar9 - 1);
  uVar5 = local_90;
joined_r0x000180050869:
  lVar7 = uVar9 - 1;
  if (cVar3 == local_41) {
    lVar7 = uVar9 - 1;
    uVar9 = local_78;
    do {
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_180050890;
      pcVar1 = (char *)(lVar7 + -1);
      lVar7 = lVar7 + -1;
    } while (*pcVar1 == local_41);
  }
  local_90 = lVar7 - (longlong)pppppppuVar8;
LAB_180050890:
  if (uVar5 == 0xffffffffffffffff) {
LAB_180050896:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = local_50;
    if (local_70 <= local_50) {
      return param_1;
    }
LAB_1800509a6:
    uVar9 = local_58 + local_70;
    pppppppuVar8 = local_88;
    if (0xfff < uVar9) {
      pppppppuVar8 = (undefined8 *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar8))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_5c,local_68);
      }
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1801f42e0(pppppppuVar8,uVar9);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_78 < uVar5) {
    FUN_1800615a0();
  }
  else {
    uVar9 = (local_90 - uVar5) + local_58;
    if (local_78 - uVar5 < uVar9) {
      uVar9 = local_78 - uVar5;
    }
    if ((longlong)local_68 <= (longlong)uVar9) {
      uVar11 = local_50;
      puVar12 = param_1;
      if (0xf < uVar9) {
        uVar6 = local_50 | uVar9;
        uVar11 = 0x16;
        if (0x16 < uVar6) {
          uVar11 = uVar6;
        }
        if (uVar6 < 0xfff) {
          puVar12 = (undefined8 *)FUN_1801d61c8(local_58 + uVar11);
        }
        else {
          lVar7 = FUN_1801d61c8(uVar11 + 0x28);
          puVar12 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          puVar12[-1] = lVar7;
        }
        *param_1 = puVar12;
      }
      param_1[2] = uVar9;
      param_1[3] = uVar11;
      FUN_1802079d0(puVar12,(longlong)pppppppuVar8 + uVar5,uVar9);
      *(undefined1 *)((longlong)puVar12 + uVar9) = local_42;
      if (local_70 <= local_50) {
        return param_1;
      }
      goto LAB_1800509a6;
    }
  }
  FUN_180002ac0();
}



void Unwind_180050a40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x40);
  return;
}



undefined8 FUN_180050a80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  undefined2 local_118;
  undefined6 uStack_116;
  uintptr_t local_108;
  ulonglong local_100;
  undefined8 ***local_f8;
  ulonglong local_f0;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  uintptr_t local_68;
  longlong local_60;
  ulonglong local_58;
  uint local_4c;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_58 = 0xf;
  local_a0 = 0x29;
  local_88 = 0x20;
  local_68 = 0;
  local_60 = 1;
  local_80 = -8;
  local_98 = 0x28;
  local_78 = 0xfff;
  local_4c = 0;
  local_90 = 2;
  local_70 = 7;
  lVar8 = param_3[2];
  local_d8 = param_2;
  if (0x7ffffffffffffffa < lVar8) {
    FUN_180002ac0();
  }
  puVar6 = (undefined8 *)*param_3;
  uVar7 = param_3[3];
  local_c8 = (undefined8 ****)0x0;
  uStack_c0 = 0;
  uVar10 = lVar8 + 5;
  uVar11 = 0xf;
  ppppuVar12 = &local_c8;
  if (0xf < uVar10) {
    uVar11 = 0x7fffffffffffffff;
    local_d0 = puVar6;
    if (-6 < lVar8) {
      uVar4 = uVar10 | 0xf;
      uVar11 = 0x16;
      if (0x16 < uVar4) {
        uVar11 = uVar4;
      }
      if (uVar4 < 0xfff) {
        ppppuVar12 = (undefined8 ****)FUN_1801d61c8(uVar11 + 1);
        puVar6 = local_d0;
        local_c8 = ppppuVar12;
        goto LAB_180050c8e;
      }
    }
    pppuVar5 = (undefined8 ***)FUN_1801d61c8(uVar11 + 0x28);
    ppppuVar12 = (undefined8 ****)((longlong)pppuVar5 + 0x27U & 0xffffffffffffffe0);
    ppppuVar12[-1] = pppuVar5;
    puVar6 = local_d0;
    local_c8 = ppppuVar12;
  }
LAB_180050c8e:
  if (local_58 < uVar7) {
    param_3 = puVar6;
  }
  local_b8 = uVar10;
  local_b0 = uVar11;
  FUN_1802079d0(ppppuVar12,param_3,lVar8);
  FUN_1800b8f52(&DAT_1802a1ec4,&DAT_18027162f,0x14,6,&DAT_1802a1ecc);
  *(undefined1 *)((longlong)ppppuVar12 + lVar8 + 4) = DAT_1802a1ec8;
  *(undefined4 *)((longlong)ppppuVar12 + lVar8) = DAT_1802a1ec4;
  *(undefined1 *)((longlong)ppppuVar12 + uVar10) = 0;
  local_f8 = &local_c8;
  if (local_58 < local_b0) {
    local_f8 = local_c8;
  }
  local_f0 = local_b8;
  uVar3 = __std_fs_code_page();
  FUN_18008a470(&local_118,uVar3,&local_f8);
  FUN_18004ec60(&local_f8);
  uVar2 = local_d8;
  FUN_18004f930(local_d8,&local_f8,&local_118);
  if (local_70 < local_e0) {
    lVar8 = local_e0 << ((byte)local_60 & 0x3f);
    uVar7 = local_90 + lVar8;
    ppppuVar12 = (undefined8 ****)local_f8;
    if (local_78 < uVar7) {
      ppppuVar12 = (undefined8 ****)local_f8[-1];
      if (local_88 <= (ulonglong)((longlong)local_f8 + (local_80 - (longlong)ppppuVar12))) goto LAB_180050e52;
      uVar7 = lVar8 + local_a0;
    }
    thunk_FUN_1801f42e0(ppppuVar12,uVar7);
  }
  if (local_70 < local_100) {
    lVar1 = CONCAT62(uStack_116,local_118);
    lVar9 = local_100 << ((byte)local_60 & 0x3f);
    uVar7 = local_90 + lVar9;
    lVar8 = lVar1;
    if (local_78 < uVar7) {
      lVar8 = *(longlong *)(lVar1 + -8);
      if (local_88 <= (ulonglong)((lVar1 + local_80) - lVar8)) goto LAB_180050e52;
      uVar7 = lVar9 + local_a0;
    }
    thunk_FUN_1801f42e0(lVar8,uVar7);
  }
  local_108 = local_68;
  local_100 = local_70;
  local_118 = 0;
  if (local_58 < local_b0) {
    uVar7 = local_60 + local_b0;
    ppppuVar12 = (undefined8 ****)local_c8;
    if (local_78 < uVar7) {
      ppppuVar12 = (undefined8 ****)local_c8[-1];
      if (local_88 <= (ulonglong)((longlong)local_c8 + (local_80 - (longlong)ppppuVar12))) {
LAB_180050e52:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_68);
      }
      uVar7 = local_b0 + local_98;
    }
    thunk_FUN_1801f42e0(ppppuVar12,uVar7);
  }
  return uVar2;
}



void Unwind_180050e70(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x50);
  return;
}



void Unwind_180050eb0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x30);
  return;
}



void Unwind_180050ef0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x80);
  return;
}



bool FUN_180050f30(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  ulonglong local_d0;
  ulonglong local_c8;
  uint local_c0;
  uint local_bc;
  ulonglong local_b0;
  undefined8 ***local_a8;
  ulonglong local_a0;
  undefined8 ***local_98;
  longlong local_90;
  undefined8 ***local_88;
  undefined8 ***local_80 [3];
  ulonglong local_68;
  undefined1 local_60 [32];

  local_c8 = 0x6954d57d508b08b8;
  local_d0 = 0x4525f0f1bc8f2244;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_c8 ^ 0x62667e6b526c5e2c;
          uVar1 = local_c8 ^ local_d0;
          local_d0 = local_d0 ^ 0x62667e6b526c5e2c;
          local_c8 = uVar3;
          if ((longlong)uVar1 < 0x538e6ac921ef99a9) break;
          if (uVar1 == 0x538e6ac921ef99a9) {
            local_b0 = local_90 + 0x29;
            local_a8 = local_88;
            local_c8 = 0x5792508488f1f552;
            local_d0 = 0x2bccecc64cc72dae;
          }
          else if (uVar1 == 0x6f1e9261d8f1bbda) {
            local_88 = (undefined8 ***)local_98[-1];
            local_c8 = 0x4ae21a02b8c2e6b1;
            if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)local_88))) {
              local_c8 = 0xb9d1c8c4064e0359;
            }
            local_d0 = 0x196c70cb992d7f18;
          }
          else if (uVar1 == 0x7c5ebc42c436d8fc) {
            thunk_FUN_1801f42e0(local_a8,local_b0);
            local_c8 = 0x352a616a30e7ecc4;
            local_d0 = 0x91665c694e70611e;
          }
        }
        if ((longlong)uVar1 < 0x2c71258cec042afc) break;
        if (uVar1 == 0x2c71258cec042afc) {
          local_c0 = 0;
          FUN_180050a80(0x8ca6578a53bcaf27,local_80,param_2);
          ppppuVar2 = local_80;
          if (7 < local_68) {
            ppppuVar2 = (undefined8 ****)local_80[0];
          }
          local_bc = FUN_1801d94bc(ppppuVar2,local_60,3,0xffffffff);
          local_a0 = local_68;
          local_c8 = 0x1a2f6af6c4da210d;
          if (local_68 < 8) {
            local_c8 = 0x718e1de2d9a8b17e;
          }
          local_d0 = 0xd5c220e1a73f3ca4;
        }
      }
      if (uVar1 != 0xcfed4a1763e51da9) break;
      local_98 = local_80[0];
      local_90 = local_a0 * 2;
      local_b0 = local_90 + 2;
      local_c8 = 0xfa5b39d43d63930c;
      if (local_b0 < 0x1000) {
        local_c8 = 0xe91b17f721a4f02a;
      }
      local_d0 = 0x9545abb5e59228d6;
      local_a8 = local_80[0];
    }
    if (uVar1 == 0xa44c3d037e978dda) break;
    if (uVar1 == 0xa0bdb80f9f637c41) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_c0,0);
    }
  }
  return local_bc == local_c0;
}



longlong * FUN_1800512c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 ***pppuVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 **local_138;
  undefined8 local_130;
  uintptr_t local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 **local_108;
  uintptr_t local_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  uint uStack_d8;
  uint uStack_d4;
  uintptr_t local_d0;
  ulonglong uStack_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  uintptr_t local_80;
  ulonglong local_78;
  undefined1 local_69;
  uint local_68;
  int local_64;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_e8 = 0x29;
  local_118 = 0xf;
  local_a8 = 0x20;
  local_80 = 0;
  local_a0 = 1;
  local_98 = -8;
  local_64 = 1;
  local_110 = 5;
  local_90 = 0xfff;
  local_68 = 0;
  local_88 = 2;
  local_78 = 7;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_c0 = param_2;
  FUN_18004ec60(&local_e0);
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  FUN_18006b210(&local_b8,&local_e0,local_68);
  if (local_78 < uStack_c8) {
    lVar12 = CONCAT44(local_e0._4_4_,(uint)local_e0);
    lVar11 = uStack_c8 << ((byte)local_a0 & 0x3f);
    uVar10 = local_88 + lVar11;
    lVar14 = lVar12;
    if (local_90 < uVar10) {
      lVar14 = *(longlong *)(lVar12 + -8);
      if (local_a8 <= (ulonglong)((lVar12 + local_98) - lVar14)) {
LAB_1800517de:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_68,local_80);
      }
      uVar10 = lVar11 + local_e8;
    }
    thunk_FUN_1801f42e0(lVar14,uVar10);
  }
  plVar5 = plStack_b0;
  if (plStack_b0 == (longlong *)0x0) {
    plStack_f0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
    local_f8 = local_b8;
    plStack_f0 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
      UNLOCK();
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == local_64) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == local_64) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      goto LAB_1800514e8;
    }
  }
  local_f8 = local_b8;
LAB_1800514e8:
  do {
    plVar5 = plStack_f0;
    lVar14 = local_f8;
    if (local_f8 == 0) {
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_f0 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == local_64) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == local_64) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      plVar5 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == local_64) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == local_64) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      FUN_1800736b0(*local_c0,local_c0[1],local_c0[1] - *local_c0 >> ((byte)local_110 & 0x3f));
      return local_c0;
    }
    FUN_18006d190(local_f8,&local_e0,3);
    if ((uint)local_e0 == local_88) {
      FUN_1800b8f52(&DAT_1802a1ec4,&DAT_18027162f,0x14,6,&DAT_1802a1ecc);
      local_138 = (undefined8 **)&DAT_1802a1ec4;
      local_130 = local_110;
      uVar7 = __std_fs_code_page();
      FUN_18008a470(&local_e0,uVar7,&local_138);
      FUN_180051ab0(lVar14 + 0x20,&local_138);
      local_108 = (undefined8 **)&local_e0;
      if (local_78 < uStack_c8) {
        local_108 = (undefined8 **)CONCAT44(local_e0._4_4_,(uint)local_e0);
      }
      local_100 = local_d0;
      uVar8 = FUN_18006dd30(&local_138,&local_108);
      uVar6 = local_68;
      if (local_78 < local_120) {
        lVar12 = local_120 << ((byte)local_a0 & 0x3f);
        uVar10 = local_88 + lVar12;
        pppuVar9 = (undefined8 ***)local_138;
        if (local_90 < uVar10) {
          pppuVar9 = (undefined8 ***)local_138[-1];
          if (local_a8 <= (ulonglong)((longlong)local_138 + (local_98 - (longlong)pppuVar9))) goto LAB_1800517de;
          uVar10 = lVar12 + local_e8;
        }
        thunk_FUN_1801f42e0(pppuVar9,uVar10);
      }
      if (local_78 < uStack_c8) {
        lVar11 = CONCAT44(local_e0._4_4_,(uint)local_e0);
        lVar13 = uStack_c8 << ((byte)local_a0 & 0x3f);
        uVar10 = local_88 + lVar13;
        lVar12 = lVar11;
        if (local_90 < uVar10) {
          lVar12 = *(longlong *)(lVar11 + -8);
          if (local_a8 <= (ulonglong)((lVar11 + local_98) - lVar12)) goto LAB_1800517de;
          uVar10 = lVar13 + local_e8;
        }
        thunk_FUN_1801f42e0(lVar12,uVar10);
      }
      if (uVar8 == uVar6) {
        FUN_1800524a0(lVar14 + 0x20,&local_138);
        local_108 = &local_138;
        if (local_78 < local_120) {
          local_108 = local_138;
        }
        local_100 = local_128;
        uVar7 = __std_fs_code_page();
        FUN_180072fc0(&local_e0,uVar7,&local_108,&local_69);
        puVar4 = (uint *)local_c0[1];
        if (puVar4 == (uint *)local_c0[2]) {
          FUN_1800717d0(local_c0,puVar4,&local_e0);
          if (local_118 < uStack_c8) {
            lVar12 = CONCAT44(local_e0._4_4_,(uint)local_e0);
            uVar10 = local_a0 + uStack_c8;
            lVar14 = lVar12;
            if (local_90 < uVar10) {
              lVar14 = *(longlong *)(lVar12 + -8);
              if (local_a8 <= (ulonglong)((lVar12 + local_98) - lVar14)) goto LAB_1800517de;
              uVar10 = uStack_c8 + 0x28;
            }
            thunk_FUN_1801f42e0(lVar14,uVar10);
          }
        }
        else {
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[0] = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = (uint)local_e0;
          puVar4[1] = local_e0._4_4_;
          puVar4[2] = uStack_d8;
          puVar4[3] = uStack_d4;
          *(uintptr_t *)(puVar4 + 4) = local_d0;
          *(ulonglong *)(puVar4 + 6) = uStack_c8;
          local_c0[1] = (longlong)(puVar4 + 8);
        }
        local_d0 = local_80;
        uStack_c8 = local_118;
        local_e0._0_4_ = (uint)local_e0 & 0xffffff00;
        if (local_78 < local_120) {
          lVar14 = local_120 << ((byte)local_a0 & 0x3f);
          uVar10 = local_88 + lVar14;
          pppuVar9 = (undefined8 ***)local_138;
          if (local_90 < uVar10) {
            pppuVar9 = (undefined8 ***)local_138[-1];
            if (local_a8 <= (ulonglong)((longlong)local_138 + (local_98 - (longlong)pppuVar9))) goto LAB_1800517de;
            uVar10 = lVar14 + local_e8;
          }
          thunk_FUN_1801f42e0(pppuVar9,uVar10);
        }
      }
    }
    FUN_180052f00(&local_f8);
  } while( true );
}



void Unwind_180051900(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_180051940(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x40);
  return;
}



void Unwind_180051980(undefined8 param_1,longlong param_2)

{
  FUN_1800536d0(param_2 + 0x30);
  FUN_1800536d0(param_2 + 0x80);
  FUN_1800536d0(param_2 + 0xc0);
  return;
}



void Unwind_1800519e0(undefined8 param_1,longlong param_2)

{
  FUN_180078630(*(undefined8 *)(param_2 + 0xb8));
  return;
}



void Unwind_180051a20(undefined8 param_1,longlong param_2)

{
  FUN_18006b6c0(param_2 + 0xc0);
  FUN_18004fbf0(param_2 + 0x98);
  return;
}



void Unwind_180051a70(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x98);
  return;
}



undefined8 * FUN_180051ab0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong local_120;
  ulonglong local_118;
  short local_10c;
  short local_10a;
  short *local_108;
  short *local_100;
  short *local_f8;
  ulonglong local_e8;
  ulonglong local_e0;
  byte local_d8;
  longlong local_d0;
  short *local_c8;
  short *local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  short *local_a0;
  short *local_98;
  short *local_90;
  short *local_88;
  ulonglong local_80;
  short *local_78;
  short *local_70;
  longlong local_68;
  short *local_60;

  local_118 = 0xafc7bf12be5a6bcf;
  local_120 = 0x1d3d18f2d0bba5c3;
LAB_180051b70:
  do {
    while( true ) {
      uVar4 = local_118 ^ 0x70e2010d207a03a2;
      uVar1 = local_118 ^ local_120;
      local_120 = local_120 ^ 0x70e2010d207a03a2;
      local_118 = uVar4;
      if ((longlong)uVar1 < 0x4ccec892ee5e42c5) break;
      if ((longlong)uVar1 < 0x77c8b38736787f7f) {
        if ((longlong)uVar1 < 0x6198b4e778d92376) {
          if (uVar1 == 0x4ccec892ee5e42c5) {
            local_118 = 0xb5b0d0c02dff423e;
            local_120 = 0x1bd34e0fbc3a6ee5;
            local_a0 = local_78;
          }
          else if (uVar1 == 0x5cd687d16b5682af) {
            local_60 = local_108;
            local_68 = (longlong)local_100 - (longlong)local_108;
            local_e0 = local_68 >> (local_d8 & 0x3f);
            *param_2 = 0;
            param_2[1] = 0;
            local_118 = 0x17edf169d8981e12;
            if (0x7ffffffffffffffe < local_e0) {
              local_118 = 0x1646f83778a50d0d;
            }
            local_120 = 0x400773cbf6623f0;
          }
        }
        else if (uVar1 == 0x6198b4e778d92376) {
          local_78 = local_f8 + -1;
          local_10a = local_f8[-1];
          local_118 = 0xe1ced9092f306c06;
          local_120 = 0x830f2a63569c7251;
        }
        else if (uVar1 == 0x62c1f36a79ac1e57) {
          local_118 = 0xd82b52d78ed75ca4;
          if (local_10a < 0x5c) {
            local_118 = 0x337f2b462c9cd9e;
          }
          local_120 = 0x7c95dfd6115aca59;
        }
        else if (uVar1 == 0x650f53e2093ef477) {
          local_108 = (short *)thunk_FUN_1801d7c80(local_f8,local_98,0x3a);
          local_118 = 0xd9479f4a6a2141e7;
          if (local_f8 == local_108) {
            local_118 = 0xfe40c27074e442fe;
          }
          local_120 = 0xa29645a11fb2c051;
          local_100 = local_108;
        }
      }
      else if ((longlong)uVar1 < 0x7e6ccbbdf0e6cca3) {
        if (uVar1 == 0x77c8b38736787f7f) {
          local_88 = local_c0 + -1;
          local_118 = 0x26a00204dfde5efa;
          if (local_f8 == local_88) {
            local_118 = 0x7d4589de9a556add;
          }
          local_120 = 0x21930e0ff103e872;
LAB_180052231:
          local_108 = local_100;
        }
        else if (uVar1 == 0x7bd1daeb759381b6) {
          local_c8 = local_100 + -1;
          local_118 = 0xff27c4f3f6128603;
          if (local_f8 == local_c8) {
            local_118 = 0xdf3d06e710136dbf;
          }
          local_120 = 0x83eb81367b45ef10;
          local_108 = local_100;
        }
        else if (uVar1 == 0x7ccc45c58d576913) {
          local_c0 = local_c8;
          local_118 = 0x4e9810d84edb50d7;
          if (*local_c8 == local_10c) {
            local_118 = 0xf71acfa7711f82fb;
          }
          local_120 = 0x3950a35f78a32fa8;
        }
      }
      else if (uVar1 == 0x7e6ccbbdf0e6cca3) {
        local_b0 = local_a8;
        *param_2 = local_a8;
        local_118 = 0x7d67260020b633e6;
        local_120 = 0xc344b9a96d6b9689;
        local_b8 = local_80;
      }
      else if (uVar1 == 0x7ec6df646b0660e7) {
        lVar2 = FUN_1801d61c8(local_d0 + 0x29);
        local_a8 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
        local_a8[-1] = lVar2;
        local_118 = 0x60e7026a6c7449a0;
        local_120 = 0x1e8bc9d79c928503;
      }
      else if (uVar1 == 0x7fa22d62739307c7) {
        local_118 = 0xcae60f4b1cdb7da7;
        if (local_10a == 0x2f) {
          local_118 = 0xe327943bfbbbcb15;
        }
        local_120 = 0x8628c7d9f2853f62;
      }
    }
    if ((longlong)uVar1 < -0x31b59307f64352ad) {
      if ((longlong)uVar1 < -0x4d05581f911e31f4) {
        if (uVar1 == 0xa4be8d019f8d96fd) {
          local_118 = 0xa8cef3e0cf228d23;
          if (local_10a == 0x5c) {
            local_118 = 0x810f689028423b91;
          }
          local_120 = 0xe4003b72217ccfe6;
        }
        else if (uVar1 == 0xaa56d4de8d8b9ccd) {
          local_a8 = (undefined8 *)FUN_1801d61c8(local_d0 + 2);
          local_118 = 0xb6c6284048e3893c;
          local_120 = 0xc8aae3fdb805459f;
        }
        else if (uVar1 == 0xae639ecf91c52cdb) {
          local_f8 = local_a0;
          local_118 = 0x5be62692e88c64b1;
          if (local_90 == local_a0) {
            local_118 = 0x5f71c197996bb3b0;
          }
          local_120 = 0x3a7e9275905547c7;
        }
      }
      else if (uVar1 == 0xb2faa7e06ee1ce0c) {
        local_d8 = 1;
        local_10c = 0x2e;
        local_e8 = 7;
        puVar3 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar3 = (undefined8 *)*param_1;
        }
        local_a0 = (short *)((longlong)puVar3 + param_1[2] * 2);
        local_90 = (short *)FUN_180068d00(puVar3,local_a0);
        local_118 = 0x74c30cb89baebac5;
        local_120 = 0xdaa092770a6b961e;
        local_98 = local_a0;
      }
      else if (uVar1 == 0xb6bbcffd14a89f58) {
        local_118 = 0x3424cbd83ddc984b;
        local_120 = 0x68f24c09568a1ae4;
        local_108 = local_c8;
      }
      else if (uVar1 == 0xbe239fa94ddda56f) {
        param_2[2] = local_e0;
        param_2[3] = local_b8;
        FUN_1802079d0(local_b0,local_60,local_68);
        *(undefined2 *)((longlong)local_b0 + local_68) = 0;
        return param_2;
      }
      goto LAB_180051b70;
    }
    if ((longlong)uVar1 < 0x12468f0bc7c32efd) {
      if (uVar1 == 0xce4a6cf809bcad53) {
        local_70 = local_100 + -2;
        local_118 = 0x4bcf7d4d0949d42a;
        if (local_f8 == local_70) {
          local_118 = 0xf0adc31036d3f7eb;
        }
        local_120 = 0xfd74b2b01de14b72;
      }
      else if (uVar1 == 0x7330c0b2eddb688) {
        local_118 = 0x167160c0dde682e1;
        if (*local_88 == local_10c) {
          local_118 = 0x3d6f549680c87f31;
        }
        local_120 = 0x61b9d347eb9efd9e;
        local_c0 = local_88;
        local_108 = local_88;
      }
      else if (uVar1 == 0xdd971a02b32bc99) {
        local_118 = 0x3a1e02fab5ddafd4;
        if (*local_70 == local_10c) {
          local_118 = 0xd0734ad6ca23b223;
        }
        local_120 = 0x8ca5cd07a175308c;
        goto LAB_180052231;
      }
    }
    else if (uVar1 == 0x13ed865567fe3de2) {
      local_118 = 0xfa3872070dfb7cdb;
      if (local_e0 < 8) {
        local_118 = 0x75480de83911966d;
      }
      local_120 = 0xcb6b924174cc3302;
      local_b8 = local_e8;
      local_b0 = param_2;
    }
    else if (uVar1 == 0x3153e04679374fd9) {
      uVar1 = local_e0 | local_e8;
      local_80 = 10;
      if (10 < uVar1) {
        local_80 = uVar1;
      }
      local_d0 = local_80 << (local_d8 & 0x3f);
      local_118 = 0xdfb2505965510845;
      if (0x7fe < uVar1) {
        local_118 = 0xb225be383dcf46f;
      }
      local_120 = 0x75e48487e8da9488;
    }
    else if (uVar1 == 0x12468f0bc7c32efd) {
      FUN_180002ac0();
    }
  } while( true );
}



undefined8 * FUN_1800524a0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong local_118;
  ulonglong local_110;
  short local_104;
  short local_102;
  short *local_100;
  short *local_f8;
  short *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  byte local_d0;
  short *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  short *local_b0;
  short *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  short *local_90;
  short *local_88;
  short *local_80;
  longlong local_78;
  short *local_70;
  short *local_68;
  ulonglong local_60;

  local_110 = 0x6ed8aad5c82588fc;
  local_118 = 0xb774952323ae2e5f;
LAB_180052590:
  do {
    while( true ) {
      while( true ) {
        uVar4 = local_110 ^ 0x90c3367ae641b5c5;
        uVar1 = local_110 ^ local_118;
        local_118 = local_118 ^ 0x90c3367ae641b5c5;
        local_110 = uVar4;
        if (0xfc06a5b264765e6 < (longlong)uVar1) break;
        if ((longlong)uVar1 < -0x371486e7fe5d5f36) {
          if ((longlong)uVar1 < -0x4bf2ea6e95d2e197) {
            if (uVar1 == 0x8b73fc42f2ab33ad) {
              local_70 = local_e8 + -2;
              local_110 = 0x616943acad4d8b69;
              if (local_100 == local_70) {
                local_110 = 0xca5d73a29e6b2f82;
              }
              local_118 = 0xa9823ab4acef2ba3;
            }
            else if (uVar1 == 0x8daf7bde65805c8b) {
              local_a8 = local_68;
              local_110 = 0xc48441849f40836;
              if (*local_68 == local_104) {
                local_110 = 0x3837450ad97c55ba;
              }
              local_118 = 0x3882e436fb36dd1;
              local_f8 = local_68;
            }
            else if (uVar1 == 0xa37368585d6214e4) {
              FUN_180002ac0();
            }
          }
          else if (uVar1 == 0xb40d15916a2d1e69) {
            local_110 = 0x91d200ef5d568aec;
            if (local_102 == 0x2f) {
              local_110 = 0x9bd2e3c4498f8e5c;
            }
            local_118 = 0x5f27a81c197cff24;
          }
          else if (uVar1 == 0xc06490f3c9fd138e) {
            local_80 = local_100 + -1;
            local_102 = local_100[-1];
            local_110 = 0x6edb07fb41e0cda2;
            local_118 = 0x573d120527440d1c;
          }
          else if (uVar1 == 0xc4f54bd850f37178) {
            local_e8 = (short *)thunk_FUN_1801d7c80(local_100,local_90,0x3a);
            local_110 = 0x3fb85e2f7f38e158;
            if (local_100 == local_e8) {
              local_110 = 0xe3d9d732ac8172f7;
            }
            local_118 = 0xd866bc7b1a4e4a9c;
            local_f8 = local_100;
          }
        }
        else if ((longlong)uVar1 < -0x2653c0091474595d) {
          if (uVar1 == 0xc8eb791801a2a0ca) {
            local_110 = 0xe9408babe837d453;
            local_118 = 0xd2ffe0e25ef8ec38;
            local_f8 = local_c8;
          }
          else if (uVar1 == 0xcb943c026d86e2ca) {
            local_110 = 0x368f70211e5d3146;
            if (local_d8 < 8) {
              local_110 = 0x7ee91b534884b17b;
            }
            local_118 = 0x6999c54710c81388;
            local_a0 = local_e0;
            local_98 = param_2;
          }
          else if (uVar1 == 0xcef5a8f3442a75c8) {
            local_110 = 0x121049b96fca6888;
            local_118 = 0x45d94fb4c3f52a0e;
            local_b0 = local_80;
          }
        }
        else if (uVar1 == 0xd9ac3ff6eb8ba6a3) {
          local_d0 = 1;
          local_104 = 0x2e;
          local_e0 = 7;
          puVar3 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar3 = (undefined8 *)*param_1;
          }
          local_b0 = (short *)((longlong)puVar3 + param_1[2] * 2);
          local_88 = (short *)FUN_180068d00(puVar3,local_b0);
          local_110 = 0xbf551c8077c66903;
          local_118 = 0xe89c1a8ddbf92b85;
          local_90 = local_b0;
        }
        else if (uVar1 == 0xe7dee2546576abc4) {
          local_c8 = local_e8 + -1;
          local_110 = 0x668393f2f83224ae;
          if (local_100 == local_c8) {
            local_110 = 0x649ad8529d02c52a;
          }
          local_118 = 0x5f25b31b2bcdfd41;
          local_f8 = local_e8;
        }
        else if (uVar1 == 0xf035691463d30d91) {
          local_b8 = (undefined8 *)FUN_1801d61c8(local_c0 + 2);
          local_110 = 0x61adc273571f1aea;
          local_118 = 0x4d0ce36f6aa06a9e;
        }
      }
      if ((longlong)uVar1 < 0x3bbf6b49b6cf386b) break;
      if ((longlong)uVar1 < 0x5f16b5660e9522ce) {
        if (uVar1 == 0x3bbf6b49b6cf386b) {
          local_78 = (longlong)local_f8 - (longlong)local_100;
          local_d8 = local_78 >> (local_d0 & 0x3f);
          *param_2 = 0;
          param_2[1] = 0;
          local_110 = 0xf925452064fb8a0f;
          if (0x7ffffffffffffffe < local_d8) {
            local_110 = 0x91c2117a541f7c21;
          }
          local_118 = 0x32b17922097d68c5;
        }
        else if (uVar1 == 0x57c9060dac3f4286) {
          local_100 = local_b0;
          local_110 = 0x4bb431588c360dee;
          if (local_88 == local_b0) {
            local_110 = 0x4f25ea7315386f18;
          }
          local_118 = 0x8bd0a1ab45cb1e60;
        }
      }
      else if (uVar1 == 0x5f16b5660e9522ce) {
        uVar1 = local_d8 | local_e0;
        local_60 = 10;
        if (10 < uVar1) {
          local_60 = uVar1;
        }
        local_c0 = local_60 << (local_d0 & 0x3f);
        local_110 = 0xecc959a142a52a37;
        if (0x7fe < uVar1) {
          local_110 = 0x36c0f045c2d8358c;
        }
        local_118 = 0x1cfc30b5217627a6;
      }
      else if (uVar1 == 0x63df491632840421) {
        local_110 = 0xf9567f4ff038afe7;
        if (*local_70 == local_104) {
          local_110 = 0xa026d1e47553746;
        }
        local_118 = 0x31bd0657f19a0f2d;
LAB_180052dc6:
        local_f8 = local_e8;
      }
      else if (uVar1 == 0x68c9392012c4cac3) {
        local_110 = 0x242b6ef02f065694;
        if (local_102 == 0x5c) {
          local_110 = 0x2e2b8ddb3bdf5224;
        }
        local_118 = 0xeadec6036b2c235c;
      }
    }
    if (0x2ca1211c3dbf7073 < (longlong)uVar1) {
      if (uVar1 == 0x2ca1211c3dbf7074) {
        local_98 = local_b8;
        *param_2 = local_b8;
        local_110 = 0x66d2c111cd250c5;
        local_118 = 0x111df205449ef236;
        local_a0 = local_60;
      }
      else if (uVar1 == 0x39a620e9d3ffd9ef) {
        local_110 = 0x197b914928f543f;
        if (*local_c8 == local_104) {
          local_110 = 0x85242f0d46630275;
        }
        local_118 = 0xe57d34fb4c831d8;
        local_a8 = local_c8;
      }
      else if (uVar1 == 0x39e615fe66a4c0be) {
        local_110 = 0x4bcc600eb6ff4871;
        if (local_102 < 0x5c) {
          local_110 = 0x97084cbfce169cdb;
        }
        local_118 = 0x2305592ea43b82b2;
      }
      goto LAB_180052590;
    }
    if (uVar1 == 0xfc06a5b264765e7) {
      local_68 = local_a8 + -1;
      local_110 = 0xc608664eee820064;
      if (local_100 == local_68) {
        local_110 = 0x701876d93dcd6484;
      }
      local_118 = 0x4ba71d908b025cef;
      goto LAB_180052dc6;
    }
    if (uVar1 == 0x2a3cc0f0e3ae122a) {
      lVar2 = FUN_1801d61c8(local_c0 + 0x29);
      local_b8 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      local_b8[-1] = lVar2;
      local_110 = 0xb9dc164708b39ae2;
      local_118 = 0x957d375b350cea96;
    }
    else if (uVar1 == 0x1770de14584ca2f3) {
      param_2[2] = local_d8;
      param_2[3] = local_a0;
      FUN_1802079d0(local_98,local_100,local_78);
      *(undefined2 *)((longlong)local_98 + local_78) = 0;
      return param_2;
    }
  } while( true );
}



undefined8 FUN_180052e70(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    local_20 = (undefined8 *)*param_1;
  }
  local_18 = param_1[2];
  uVar1 = __std_fs_code_page();
  FUN_180072fc0(param_2,uVar1,&local_20,&local_21);
  if (DAT_1802a0400 == (local_10 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
}



longlong * FUN_180052f00(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_318 [32];
  undefined *local_2f8;
  ulonglong local_2e8;
  ulonglong local_2e0;
  short local_2d2;
  int local_2d0;
  int local_2cc;
  longlong *local_2c8;
  longlong local_2c0;
  undefined8 *local_2b8;
  short *local_2b0;
  short *local_2a8;
  short *local_2a0;
  undefined1 local_298 [44];
  short local_26c;
  short local_26a;
  short local_268 [272];
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_318;
  local_2e0 = 0x95ded54bcbf0cd14;
  local_2e8 = 0xc47ae60f70818837;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              plVar2 = local_2c8;
              uVar6 = local_2e0 ^ 0xb0017f9cf7db1f2b;
              uVar5 = local_2e0 ^ local_2e8;
              local_2e8 = local_2e8 ^ 0xb0017f9cf7db1f2b;
              local_2e0 = uVar6;
              if ((longlong)uVar5 < 0x23ca3e23113bbc53) break;
              if ((longlong)uVar5 < 0x5025fda3358a9f91) {
                if ((longlong)uVar5 < 0x42b181603874d9a0) {
                  if (uVar5 == 0x23ca3e23113bbc53) {
                    local_2e0 = 0xcf3064488bca8aea;
                    if (local_2d0 < 0x12) {
                      local_2e0 = 0x6dc0b7e7168f9c8d;
                    }
                    local_2e8 = 0xb530bae6a4a45fed;
                  }
                  else if (uVar5 == 0x2ddea2308d6a4756) {
                    FUN_18006c8f0(local_2c0,local_298);
                    local_2e0 = 0xc1c724796cd37f48;
                    local_2e8 = 0x8376a51954a7a6e8;
                  }
                }
                else if (uVar5 == 0x46fdb0143da31196) {
                  *param_1 = 0;
                  local_2c8 = (longlong *)param_1[1];
                  param_1[1] = 0;
                  local_2e0 = 0xb79703748fd89cde;
                  if (local_2c8 == (longlong *)0x0) {
                    local_2e0 = 0x206899761f1103ce;
                  }
                  local_2e8 = 0x62d918162765da6e;
                }
                else if (uVar5 == 0x4f021689dc390db2) {
                  local_2e0 = 0xc0867364902acb6b;
                  local_2e8 = 0x67997d3d168b2531;
                }
                else if (uVar5 == 0x42b181603874d9a0) goto LAB_18005368a;
              }
              else if ((longlong)uVar5 < 0x614f44798609f097) {
                if (uVar5 == 0x5025fda3358a9f91) {
                  local_2e0 = 0xb990208b3235fe89;
                  local_2e8 = 0x944e82bbbf5fb9df;
                }
                else if (uVar5 == 0x51a43344bb714523) {
                  local_2cc = 1;
                  local_2c0 = *param_1;
                  local_2b8 = (undefined8 *)(local_2c0 + 0x40);
                  local_2b0 = &local_26c;
                  local_2a8 = &local_26a;
                  local_2a0 = local_268;
                  local_2e0 = 0x440f05488393f646;
                  local_2e8 = 0xe3100b110532181c;
                }
              }
              else if (uVar5 == 0x614f44798609f097) {
                local_2d2 = *local_2a8;
                local_2e0 = 0x88216c4ce1893983;
                local_2e8 = 0x53ad01e0d9a70401;
              }
              else if (uVar5 == 0x6f64cb4d732b60c9) {
                local_2e0 = 0xc53093e5096ac7bb;
                if (*local_2a0 == 0) {
                  local_2e0 = 0xa7ec275c58398d5f;
                }
                local_2e8 = 0xe8ee31d5840080ed;
              }
              else if (uVar5 == 0x7a00deae2f6ed507) {
                local_2e0 = 0xd1ed1bfd3d819fb3;
                if (local_2d0 == 0x12) {
                  local_2e0 = 0x9733afdb868acee9;
                }
                local_2e8 = 0xd1ce1fcfbb29df7f;
              }
            }
            if (-0x24739253c7d1c27f < (longlong)uVar5) break;
            if ((longlong)uVar5 < -0x2ab1e49d5742b950) {
              if (uVar5 == 0x9d961d1ebb4b36c7) {
                local_2e0 = 0xb0374592532024c9;
                if (*local_2b0 == 0x2e) {
                  local_2e0 = 0xfca6a3db58439308;
                }
                local_2e8 = 0x9de9e7a2de4a639f;
              }
              else if (uVar5 == 0xa71f0e5986a1ee5a) {
                local_2d0 = FUN_1801d9404(*local_2b8,local_298);
                local_2e0 = 0x17e4113d9fd8e320;
                local_2e8 = 0x342e2f1e8ee35f73;
              }
            }
            else if (uVar5 == 0xd54e1b62a8bd46b0) {
              LOCK();
              plVar2 = local_2c8 + 1;
              lVar4 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              local_2e0 = 0x4e312c52f364666d;
              if ((int)lVar4 == local_2cc) {
                local_2e0 = 0xd5359e6f5fa2254f;
              }
              local_2e8 = 0xc80ad32cb10bfcd;
            }
            else if (uVar5 == 0xd8f00d01b22bc360) {
              local_2e0 = 0x378890a81dc17713;
              if (local_2d0 == 0) {
                local_2e0 = 0xaa3d898420220118;
              }
              local_2e8 = 0x37ab949a9b6937df;
            }
            else if (uVar5 == 0xd9b5335d94b29a82) {
              (**(code **)*local_2c8)(local_2c8);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              local_2e0 = 0x6a28f88c178b561c;
              if (iVar3 == local_2cc) {
                local_2e0 = 0x3f4d3faf714ebe2d;
              }
              local_2e8 = 0x289979ec2fff8fbc;
            }
          }
          if ((longlong)uVar5 < 0x22030f6f3ac8432) break;
          if (uVar5 == 0x22030f6f3ac8432) {
            local_2e0 = 0x576de1abcd8b4ccb;
            if (local_2d2 == 0x2e) {
              local_2e0 = 0x682cd7458b2ab393;
            }
            local_2e8 = 0x7481c08f801d35a;
          }
          else if (uVar5 == 0xed2acb134acc4a8) {
            local_2e0 = 0x315bd4a21d83b718;
            if (local_2d2 == 0) {
              local_2e0 = 0x2e7c3f88f430253b;
            }
            local_2e8 = 0x617e290128092889;
          }
          else if (uVar5 == 0x17d446435eb13191) {
            (**(code **)(*local_2c8 + 8))();
            local_2e0 = 0xf12f53efa5252d98;
            local_2e8 = 0xb39ed28f9d51f438;
          }
        }
        if (uVar5 != 0xdb8c6dac382e3d82) break;
        local_2e0 = 0x8d8da2480d5c301c;
        if (local_2d2 < 0x2e) {
          local_2e0 = 0x817f3e0fca5c7086;
        }
        local_2e8 = 0x8fad92befef0b42e;
      }
      if (uVar5 != 0x23043286a840cc) break;
      local_2e0 = 0x8a20315a7ad20c3a;
      local_2e8 = 0x620eb5b85312318e;
    }
  } while (uVar5 != 0xe82e84e229c03db4);
  local_2f8 = &DAT_1802a2030;
  param_1 = (longlong *)&DAT_1802a2010;
  FUN_1800b8f52(&DAT_1802a2010,&DAT_180271b91,0x1b,0x1f);
  FUN_1800731c0(&DAT_1802a2010,local_2d0);
LAB_18005368a:
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_318)) {
  }
  return param_1;
}



void FUN_1800536d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  longlong *local_48;

  local_58 = 0x6c91156ec7588609;
  local_60 = 0x11d9566c87d12d10;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0xa8064113a1980693;
          if (0x1b510067acd74ff8 < (longlong)uVar5) break;
          if (uVar5 == 0xa4083d41f94169c8) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_58 = 0xd4ec5c9e35b29654;
            if (iVar3 == local_4c) {
              local_58 = 0xa93da080a1fd34fe;
            }
            local_60 = 0xb26ca0e70d2a7b07;
          }
          else {
            local_58 = local_58 ^ 0xa8064113a1980693;
            if (uVar5 == 0xb7e8517c4d8b7854) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              local_58 = 0x4e03159994e32a94;
              if ((int)lVar4 == local_4c) {
                local_58 = 0x8c8bd4a1553aae0f;
              }
              local_60 = 0x2883e9e0ac7bc7c7;
            }
          }
        }
        if (uVar5 != 0x1b510067acd74ff9) break;
        (**(code **)(*local_48 + 8))();
        local_58 = 0x4e696eff9d49c364;
        local_60 = 0x28e99286a5d12e37;
      }
      if (uVar5 != 0x7d4843024089ab19) break;
      local_4c = 1;
      local_48 = *(longlong **)(param_1 + 8);
      local_58 = 0xd1fde769579991c0;
      if (local_48 == (longlong *)0x0) {
        local_58 = 0x954a6c228a04c7;
      }
      local_60 = 0x6615b6151a12e994;
    }
    local_58 = local_58 ^ 0xa8064113a1980693;
  } while (uVar5 != 0x6680fc793898ed53);
  return;
}



undefined8 FUN_1800538c0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_a8 [3];
  ulonglong local_90;
  undefined *local_88;
  undefined8 local_80;
  ulonglong local_70;
  longlong local_68;
  undefined *local_60;
  uintptr_t local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  uint local_24;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_68 = 0x29;
  local_60 = (undefined *)0x20;
  local_58 = 0;
  local_50 = 1;
  local_48 = -8;
  local_40 = 0xfff;
  local_24 = 0;
  local_38 = 2;
  local_30 = 7;
  FUN_1800b8f52(&DAT_1802a1ed0,&DAT_180271662,0x1a,0xb,&DAT_1802a1edc);
  local_88 = &DAT_1802a1ed0;
  local_80 = 10;
  uVar1 = __std_fs_code_page();
  FUN_18008a470(local_a8,uVar1,&local_88);
  FUN_18004ec60(&local_88);
  FUN_18004f930(param_1,&local_88,local_a8);
  if (local_30 < local_70) {
    lVar4 = local_70 << ((byte)local_50 & 0x3f);
    uVar3 = local_38 + lVar4;
    puVar2 = local_88;
    if (local_40 < uVar3) {
      puVar2 = *(undefined **)(local_88 + -8);
      if (local_60 <= local_88 + (local_48 - (longlong)puVar2)) goto LAB_180053aa2;
      uVar3 = lVar4 + local_68;
    }
    thunk_FUN_1801f42e0(puVar2,uVar3);
  }
  if (local_30 < local_90) {
    lVar5 = local_90 << ((byte)local_50 & 0x3f);
    uVar3 = local_38 + lVar5;
    lVar4 = local_a8[0];
    if (local_40 < uVar3) {
      lVar4 = *(longlong *)(local_a8[0] + -8);
      if (local_60 <= (undefined *)((local_a8[0] + local_48) - lVar4)) {
LAB_180053aa2:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_24,local_58);
      }
      uVar3 = lVar5 + local_68;
    }
    thunk_FUN_1801f42e0(lVar4,uVar3);
  }
  return param_1;
}



void Unwind_180053ac0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x50);
  return;
}



void Unwind_180053af0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x30);
  return;
}



void FUN_180053b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 ****ppppuVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar5;
  int iStack_15c;
  longlong local_158;
  undefined1 local_150 [8];
  uint auStack_148 [38];
  undefined **local_b0 [12];
  undefined8 ***local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  uint local_24;
  undefined8 local_20;

  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  local_20 = 0xfffffffffffffffe;
  local_24 = 0;
  local_30 = 7;
  FUN_1800538c0(local_50);
  ppppuVar2 = local_50;
  if (local_30 < local_38) {
    ppppuVar2 = (undefined8 ****)local_50[0];
  }
  FUN_18008a6a0(&local_158,ppppuVar2,2,0x40,CONCAT44(uVar5,1));
  if (local_30 < local_38) {
    uVar4 = local_38 * 2 + 2;
    ppppuVar2 = (undefined8 ****)local_50[0];
    if (0xfff < uVar4) {
      ppppuVar2 = (undefined8 ****)local_50[0][-1];
      if (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppuVar2))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_24,0);
      }
      uVar4 = local_38 * 2 + 0x29;
    }
    thunk_FUN_1801f42e0(ppppuVar2,uVar4);
  }
  lVar3 = (longlong)*(int *)(local_158 + 4);
  if ((*(uint *)((longlong)auStack_148 + lVar3) & 6) == local_24) {
    puVar1 = param_1 + 2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_18008cbd0(&local_158,param_1,*puVar1);
    lVar3 = (longlong)*(int *)(local_158 + 4);
  }
  *(undefined ***)(local_150 + lVar3 + -8) = &PTR_LAB_18020e7e0;
  *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158 + 4)) = *(int *)(local_158 + 4) + -0xa8;
  FUN_180078d60(local_150);
  local_b0[0] = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor((ios_base *)local_b0);
  return;
}



void Unwind_180053d40(undefined8 param_1,longlong param_2)

{
  FUN_180053dc0(param_2 + 0x30);
  return;
}



void Unwind_180053d70(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x138);
  return;
}



void Unwind_180053da0(void)

{
  Unwind_1801dd394();
}



void FUN_180053dc0(longlong *param_1)

{
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_18020e7e0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4) + -0xa8;
  FUN_180078d60(param_1 + 1);
  param_1[0x15] = (longlong)&PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x15));
  return;
}



void Unwind_180053e40(void)

{
  Unwind_1801dd394();
}



undefined8 FUN_180053e60(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar4;
  longlong local_190 [2];
  uint local_180 [40];
  undefined **local_e0 [12];
  ulonglong local_80;
  ulonglong local_78;
  uintptr_t local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 ***local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined4 local_28;
  uint local_24;
  undefined8 local_20;

  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  local_20 = 0xfffffffffffffffe;
  local_80 = 0xf;
  local_78 = 0x20;
  local_70 = 0;
  local_68 = 1;
  local_60 = -8;
  local_28 = 1;
  local_58 = 0xfff;
  local_24 = 0;
  local_50 = 7;
  FUN_1800538c0(&local_48);
  ppppuVar1 = &local_48;
  if (local_50 < local_30) {
    ppppuVar1 = (undefined8 ****)local_48;
  }
  FUN_18008d6e0(local_190,ppppuVar1,local_28,0x40,CONCAT44(uVar4,local_28));
  if (local_50 < local_30) {
    lVar3 = local_30 << ((byte)local_68 & 0x3f);
    uVar2 = lVar3 + 2;
    ppppuVar1 = (undefined8 ****)local_48;
    if (local_58 < uVar2) {
      ppppuVar1 = (undefined8 ****)local_48[-1];
      if (local_78 <= (ulonglong)((longlong)local_48 + (local_60 - (longlong)ppppuVar1))) goto LAB_180054133;
      uVar2 = lVar3 + 0x29;
    }
    thunk_FUN_1801f42e0(ppppuVar1,uVar2);
  }
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = local_80;
  if ((*(uint *)((longlong)local_180 + (longlong)*(int *)(local_190[0] + 4)) & 6) == local_24) {
    FUN_1800541f0(local_190,&local_48);
  }
  FUN_180050650(param_2,&local_48);
  if (local_80 < local_30) {
    uVar2 = local_68 + local_30;
    ppppuVar1 = (undefined8 ****)local_48;
    if (local_58 < uVar2) {
      ppppuVar1 = (undefined8 ****)local_48[-1];
      if (local_78 <= (ulonglong)((longlong)local_48 + (local_60 - (longlong)ppppuVar1))) {
LAB_180054133:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_24,local_70);
      }
      uVar2 = local_30 + 0x28;
    }
    thunk_FUN_1801f42e0(ppppuVar1,uVar2);
  }
  *(undefined ***)((longlong)local_190 + (longlong)*(int *)(local_190[0] + 4)) = &PTR_LAB_18020e8f0;
  *(int *)((longlong)local_180 + (longlong)*(int *)(local_190[0] + 4) + -0x14) = *(int *)(local_190[0] + 4) + -0xb0;
  FUN_180078d60(local_180);
  local_e0[0] = &PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor((ios_base *)local_e0);
  return param_2;
}



void Unwind_180054160(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x170);
  FUN_1800542d0(param_2 + 0x28);
  return;
}



void Unwind_1800541a0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x170);
  return;
}



void Unwind_1800541d0(void)

{
  Unwind_1801dd394();
}



void FUN_1800541f0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined4 local_2c;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_2c = 1;
  local_38 = *(longlong **)(*(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x40) + 8);
  (**(code **)(*local_38 + 8))();
  plVar2 = (longlong *)FUN_18008bf60(local_40);
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,10);
  if (local_38 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*local_38 + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,local_2c);
    }
  }
  FUN_18008dc20(param_1,param_2,uVar1);
  return;
}



void Unwind_180054290(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x3c));
    }
  }
  return;
}



void FUN_1800542d0(longlong *param_1)

{
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_18020e8f0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4) + -0xb0;
  FUN_180078d60(param_1 + 2);
  param_1[0x16] = (longlong)&PTR_FUN_18020e8e8;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x16));
  return;
}



void Unwind_180054350(void)

{
  Unwind_1801dd394();
}



void FUN_180054370(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_68 [2];
  uintptr_t local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined3 uStack_44;
  undefined1 local_41;
  uintptr_t local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  uintptr_t local_20;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  local_28 = 0xf;
  local_20 = 0;
  FUN_180053e60(param_1,local_68);
  if (local_58 != local_20) {
    cVar1 = FUN_180050f30();
    if (cVar1 != '\0') {
      FUN_180054580(param_1,local_68);
      goto LAB_180054461;
    }
  }
  local_40 = local_20;
  local_38 = 7;
  local_30 = local_28;
  FUN_1800b8f52(&DAT_1802a1ee0,&DAT_18027169d,0x12,8,&DAT_1802a1ee8);
  uStack_44 = uRam00000001802a1ee4;
  local_48 = DAT_1802a1ee0;
  local_41 = 0;
  FUN_180054580(param_1,&local_48);
LAB_180054461:
  if (local_28 < local_50) {
    uVar3 = local_50 + 1;
    lVar2 = local_68[0];
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(local_68[0] + -8);
      if (0x1f < (local_68[0] - lVar2) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_20);
      }
      uVar3 = local_50 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar2,uVar3);
  }
  return;
}



void Unwind_180054520(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  return;
}



void Unwind_180054550(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



ulonglong FUN_180054580(undefined8 *******param_1)

{
  int iVar1;
  size_t sVar2;
  undefined1 (*pauVar3) [16];
  size_t _Size;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  longlong lVar15;
  undefined8 *****pppppuVar16;
  char *pcVar17;
  undefined8 ******ppppppuVar18;
  ulonglong uVar19;
  void *_Buf1;
  char *pcVar20;
  undefined8 ******ppppppuVar21;
  void *_Buf1_00;
  longlong lVar22;
  undefined8 *******pppppppuVar23;
  char *pcVar24;
  undefined8 ******ppppppuVar25;
  bool bVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined8 in_stack_fffffffffffff918;
  undefined4 uVar32;
  undefined1 local_6e0 [52];
  int iStack_6ac;
  longlong local_6a8 [2];
  uint local_698 [14];
  undefined8 auStack_660 [13];
  undefined **local_5f8 [12];
  undefined1 local_598 [56];
  undefined8 local_560;
  longlong *local_558;
  undefined8 local_550;
  undefined1 local_520 [32];
  undefined1 local_500 [32];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [32];
  undefined1 local_480 [56];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 ******local_438;
  undefined8 ******ppppppuStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 ******local_418;
  undefined8 ******ppppppuStack_410;
  undefined8 *******local_3e8 [3];
  ulonglong local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 ******local_388;
  undefined8 ******ppppppuStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 ******local_368;
  undefined8 ******ppppppuStack_360;
  undefined1 local_350 [168];
  undefined8 *******local_2a8 [2];
  undefined8 ******local_298;
  undefined8 ******local_290;
  char *local_288;
  longlong local_280;
  longlong lStack_278;
  undefined8 ******local_270;
  undefined8 *******local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 ******ppppppuStack_250;
  undefined8 *******local_248;
  undefined8 uStack_240;
  undefined8 ******local_238;
  undefined8 ******local_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 ******local_210;
  size_t local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  int local_1c4;
  char *local_1c0;
  longlong *local_1b8;
  longlong lStack_1b0;
  undefined8 ******local_1a8;
  undefined8 *******local_1a0;
  undefined8 *******local_198;
  ulonglong local_190;
  undefined4 local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  uint local_174;
  float local_170;
  uint local_16c;
  longlong *local_168;
  char *local_160;
  char *local_158;
  undefined1 local_150 [36];
  undefined4 local_12c;
  char *local_128;
  longlong local_120;
  char *local_118;
  char local_110 [8];
  undefined8 *local_108;
  char *local_100;
  undefined4 local_f4;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  char *local_d0;
  float local_c4;
  undefined8 ******local_c0;
  undefined4 local_b4;
  undefined8 ******local_b0;
  undefined8 ******local_a8;
  undefined8 ******local_a0;
  uint local_98;
  char local_92;
  char local_91;
  undefined8 local_90;

  uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffff918 >> 0x20);
  local_90 = 0xfffffffffffffffe;
  local_c4 = 0.0;
  local_a0 = (undefined8 ******)0xf;
  local_c0 = (undefined8 ******)0x8000000000000000;
  local_e8 = 0x20;
  local_92 = '\x02';
  local_a8 = (undefined8 ******)0x0;
  local_b0 = (undefined8 ******)0x1;
  local_e0 = -8;
  local_f0 = 0x28;
  local_1e8 = 8;
  local_188 = 1;
  local_b4 = 0xd6;
  local_12c = 0x131;
  local_91 = '\0';
  local_d8 = 0xfff;
  local_98 = 0;
  local_f4 = 0xd4;
  local_190 = 7;
  local_1a0 = param_1;
  uVar27 = FUN_180050650(local_2a8);
  if (local_298 == local_a8) {
    pcVar10 = (char *)0x0;
  }
  else {
    local_198 = local_2a8;
    FUN_180050a80(uVar27,local_3e8);
    pppppppuVar14 = local_3e8;
    if (local_190 < local_3d0) {
      pppppppuVar14 = local_3e8[0];
    }
    uVar19 = CONCAT44(uVar32,local_188);
    FUN_18008d6e0(local_6a8,pppppppuVar14,local_188,0x40,uVar19);
    lVar7 = (longlong)*(int *)(local_6a8[0] + 4);
    if ((*(uint *)((longlong)local_698 + lVar7) & 6) == local_98) {
      local_110[0] = local_91;
      local_108 = (undefined8 *)0x0;
      local_560 = 0;
      local_558 = local_6a8;
      local_550 = *(undefined8 *)((longlong)auStack_660 + (longlong)*(int *)(local_6a8[0] + 4));
      FUN_180099850(&local_398,&local_558,local_598,1,uVar19 & 0xffffffffffffff00);
      FUN_180099a90(&local_398,0,local_110);
      FUN_18009aad0(local_350);
      if (ppppppuStack_360 != (undefined8 ******)0x0) {
        (*(code *)(*ppppppuStack_360)[4])(ppppppuStack_360,ppppppuStack_360 != (undefined8 ******)&local_398);
      }
      local_398 = (undefined8 *****)CONCAT44(local_398._4_4_,local_98);
      FUN_1800b8f52(&DAT_1802a1eec,&DAT_1802716d4,0x17,8,&DAT_1802a1ef4);
      local_1d8 = FUN_18005b0a0(local_110,&DAT_1802a1eec,&local_398);
      puVar8 = local_108;
      if ((int)local_1d8 - 4U < 0xfffffffd) {
LAB_1800548f5:
        local_d0 = (char *)0x0;
      }
      else if (local_110[0] < '\x02') {
        if (local_110[0] != '\x01') {
LAB_1800549ab:
          bVar26 = true;
          local_118 = (char *)0x0;
          if (local_110[0] < '\x02') goto LAB_1800549bc;
LAB_180054974:
          if (local_110[0] == '\x02') {
            local_d0 = (char *)0x0;
            goto LAB_180054992;
          }
LAB_1800549e3:
          local_d0 = (char *)0x0;
          if (bVar26) goto LAB_1800560cc;
          goto LAB_1800549f6;
        }
        FUN_1800b8f52(&DAT_1802a1f14,&DAT_180271781,0x1f,8,&DAT_1802a1f1c);
        local_118 = (char *)FUN_1800b82e0(puVar8,&DAT_1802a1f14);
        bVar26 = false;
        if ('\x01' < local_110[0]) goto LAB_180054974;
LAB_1800549bc:
        if (local_110[0] != '\x01') goto LAB_1800549e3;
        local_d0 = (char *)0x0;
        if (local_118 != (char *)*local_108) goto LAB_1800549f6;
      }
      else {
        if (local_110[0] != '\x02') goto LAB_1800549ab;
        local_d0 = (char *)local_108[1];
        local_118 = (char *)0x0;
LAB_180054992:
        if (local_d0 == (char *)local_108[1]) goto LAB_1800548f5;
LAB_1800549f6:
        puVar8 = (undefined8 *)FUN_180111340();
        plVar9 = (longlong *)*puVar8;
        local_3a0 = (longlong *)puVar8[1];
        local_118 = local_118 + 0x40;
        local_1c4 = 3;
        pcVar10 = local_d0;
LAB_180054a3b:
        if (plVar9 != local_3a0) {
          local_168 = plVar9;
          if (local_110[0] < '\x02') {
            pcVar20 = local_118;
            if (local_110[0] != '\x01') {
LAB_180056499:
              FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
              FUN_180057290(local_150,&DAT_1802a2258);
              FUN_1800ac3e0(&local_398,local_b4,local_150,local_110);
              FUN_1801dd110(&local_398,&DAT_180253660);
            }
          }
          else {
            pcVar20 = pcVar10;
            if (local_110[0] != '\x02') goto LAB_180056499;
          }
          cVar5 = *pcVar20;
          local_100 = pcVar20;
          if (cVar5 < '\x02') {
            if (cVar5 == '\x01') {
              local_120 = FUN_1800b86f0(*(undefined8 *)(pcVar20 + 8),*plVar9 + 8);
              ppppppuVar18 = local_c0;
              pcVar10 = local_d0;
            }
            else {
LAB_180054b00:
              local_120 = 0;
              ppppppuVar18 = (undefined8 ******)0x1;
            }
            pcVar20 = (char *)0x0;
            pcVar17 = pcVar10;
            if (local_110[0] < '\x02') goto LAB_180054b17;
LAB_180054af1:
            pcVar10 = pcVar17;
            if (local_110[0] != '\x02') goto LAB_18005650d;
          }
          else {
            if (cVar5 != '\x02') goto LAB_180054b00;
            pcVar20 = *(char **)(*(longlong *)(pcVar20 + 8) + 8);
            local_120 = 0;
            ppppppuVar18 = local_c0;
            pcVar17 = pcVar10;
            if ('\x01' < local_110[0]) goto LAB_180054af1;
LAB_180054b17:
            pcVar17 = local_118;
            if (local_110[0] != '\x01') {
LAB_18005650d:
              FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
              FUN_180057290(local_150,&DAT_1802a2258);
              FUN_1800ac3e0(&local_398,local_b4,local_150,local_110);
              FUN_1801dd110(&local_398,&DAT_180253660);
            }
          }
          ppppppuVar21 = local_c0;
          cVar5 = *pcVar17;
          ppppppuVar25 = local_c0;
          if (cVar5 < '\x02') {
            if (cVar5 == '\x01') {
              lVar7 = **(longlong **)(pcVar17 + 8);
            }
            else {
LAB_180054b70:
              ppppppuVar25 = (undefined8 ******)0x1;
              lVar7 = 0;
            }
            pcVar24 = (char *)0x0;
          }
          else {
            if (cVar5 != '\x02') goto LAB_180054b70;
            pcVar24 = *(char **)(*(longlong *)(pcVar17 + 8) + 8);
            lVar7 = 0;
          }
          if (local_100 != pcVar17) {
            FUN_1800b8f52(&DAT_1802a2208,&DAT_1802721b7,0x10,0x31,&DAT_1802a223c);
            FUN_180057290(local_150,&DAT_1802a2208);
            FUN_1800ac3e0(&local_398,local_f4,local_150,local_100);
            FUN_1801dd110(&local_398,&DAT_180253660);
          }
          cVar5 = *local_100;
          if (cVar5 < '\x02') {
            if (cVar5 == '\x01') {
              if (local_120 == lVar7) goto LAB_180054a30;
            }
            else {
LAB_180054bc0:
              if (ppppppuVar18 == ppppppuVar25) goto LAB_180054a30;
            }
LAB_180054bc9:
            cVar5 = *local_100;
            if (cVar5 < '\x02') {
              if (cVar5 != '\x01') {
LAB_1800565f5:
                FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
                FUN_180057290(local_150,&DAT_1802a2258);
                FUN_1800ac3e0(&local_398,local_b4,local_150,local_100);
                FUN_1801dd110(&local_398,&DAT_180253660);
              }
              pcVar10 = (char *)(local_120 + 0x40);
            }
            else {
              pcVar10 = pcVar20;
              if (cVar5 != '\x02') goto LAB_1800565f5;
            }
            cVar5 = *pcVar10;
            local_1d0 = pcVar20;
            local_160 = pcVar10;
            if (cVar5 < '\x02') {
              if (cVar5 == '\x01') {
                uVar13 = *(undefined8 *)(pcVar10 + 8);
                FUN_1800b8f52(&DAT_1802a1f04,&DAT_180271740,0x1d,9,&DAT_1802a1f10);
                local_128 = (char *)FUN_1800b8b40(uVar13,&DAT_1802a1f04);
                cVar5 = *local_100;
              }
              else {
LAB_180054ce0:
                ppppppuVar21 = (undefined8 ******)0x1;
                local_128 = (char *)0x0;
                cVar5 = *local_100;
              }
              local_158 = (char *)0x0;
              if (cVar5 < '\x02') goto LAB_180054d02;
LAB_180054caa:
              if (cVar5 != '\x02') goto LAB_180056581;
              cVar5 = *local_1d0;
              pcVar10 = local_1d0;
              if (cVar5 < '\x02') goto LAB_180054cbf;
LAB_180054d1d:
              if (cVar5 != '\x02') {
LAB_180054d40:
                pcVar20 = (char *)0x0;
                ppppppuVar18 = (undefined8 ******)0x1;
                goto LAB_180054d48;
              }
              pcVar17 = *(char **)(*(longlong *)(pcVar10 + 8) + 8);
              pcVar20 = (char *)0x0;
              ppppppuVar18 = local_c0;
            }
            else {
              if (cVar5 != '\x02') goto LAB_180054ce0;
              local_158 = *(char **)(*(longlong *)(pcVar10 + 8) + 8);
              local_128 = (char *)0x0;
              cVar5 = *local_100;
              if ('\x01' < cVar5) goto LAB_180054caa;
LAB_180054d02:
              if (cVar5 != '\x01') {
LAB_180056581:
                FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
                FUN_180057290(local_150,&DAT_1802a2258);
                FUN_1800ac3e0(&local_398,local_b4,local_150,local_100);
                FUN_1801dd110(&local_398,&DAT_180253660);
              }
              pcVar10 = (char *)(local_120 + 0x40);
              cVar5 = *pcVar10;
              if ('\x01' < cVar5) goto LAB_180054d1d;
LAB_180054cbf:
              if (cVar5 != '\x01') goto LAB_180054d40;
              pcVar20 = (char *)**(undefined8 **)(pcVar10 + 8);
              ppppppuVar18 = local_c0;
LAB_180054d48:
              pcVar17 = (char *)0x0;
            }
            if (local_160 != pcVar10) {
              FUN_1800b8f52(&DAT_1802a2208,&DAT_1802721b7,0x10,0x31,&DAT_1802a223c);
              FUN_180057290(local_150,&DAT_1802a2208);
              FUN_1800ac3e0(&local_398,local_f4,local_150,local_160);
              FUN_1801dd110(&local_398,&DAT_180253660);
            }
            cVar5 = *local_160;
            plVar9 = (longlong *)*local_168;
            if (cVar5 < '\x02') {
              if (cVar5 == '\x01') {
                if (local_128 == pcVar20) goto LAB_180055f7a;
              }
              else {
LAB_180054d90:
                if (ppppppuVar21 == ppppppuVar18) goto LAB_180055f7a;
              }
LAB_180054d99:
              plVar11 = (longlong *)plVar9[10];
              local_3a8 = (longlong *)plVar9[0xb];
              local_128 = local_128 + 0x40;
LAB_180054ddb:
              _Size = local_1e8;
              if (plVar11 == local_3a8) goto LAB_180055f70;
              lVar7 = *plVar11;
              lVar22 = *local_168;
              _Buf1_00 = (void *)(lVar7 + 0x10);
              if (local_a0 < *(undefined8 *******)(lVar7 + 0x28)) {
                _Buf1_00 = *(void **)(lVar7 + 0x10);
              }
              local_1e0 = plVar11;
              if (((int)local_1d8 == local_1c4) || (*(size_t *)(lVar22 + 0x18) != local_1e8)) {
LAB_180054f10:
                cVar5 = *local_160;
                if (cVar5 < '\x02') {
                  pcVar10 = local_128;
                  if (cVar5 != '\x01') {
LAB_1800563b1:
                    FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
                    FUN_180057290(local_150,&DAT_1802a2258);
                    FUN_1800ac3e0(&local_398,local_b4,local_150,local_160);
                    FUN_1801dd110(&local_398,&DAT_180253660);
                  }
                }
                else {
                  pcVar10 = local_158;
                  if (cVar5 != '\x02') goto LAB_1800563b1;
                }
                local_280 = 0;
                lStack_278 = 0;
                local_270 = local_c0;
                cVar5 = *pcVar10;
                local_288 = pcVar10;
                if (cVar5 < '\x02') {
                  if (cVar5 == '\x01') {
                    local_280 = FUN_1800b86f0(*(undefined8 *)(pcVar10 + 8),(void *)(lVar7 + 0x10));
                    cVar5 = *local_160;
                  }
                  else {
LAB_180054fd0:
                    cVar5 = *local_160;
                    local_270 = local_b0;
                  }
                  if (cVar5 < '\x02') goto LAB_180054fe8;
LAB_180054fbb:
                  pcVar10 = local_158;
                  if (cVar5 != '\x02') goto LAB_180056425;
                }
                else {
                  if (cVar5 != '\x02') goto LAB_180054fd0;
                  lStack_278 = *(longlong *)(*(longlong *)(pcVar10 + 8) + 8);
                  cVar5 = *local_160;
                  if ('\x01' < cVar5) goto LAB_180054fbb;
LAB_180054fe8:
                  pcVar10 = local_128;
                  if (cVar5 != '\x01') {
LAB_180056425:
                    FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
                    FUN_180057290(local_150,&DAT_1802a2258);
                    FUN_1800ac3e0(&local_398,local_b4,local_150,local_160);
                    FUN_1801dd110(&local_398,&DAT_180253660);
                  }
                }
                pcVar20 = local_288;
                cVar5 = *pcVar10;
                ppppppuVar18 = local_c0;
                if (cVar5 < '\x02') {
                  if (cVar5 == '\x01') {
                    lVar7 = **(longlong **)(pcVar10 + 8);
                  }
                  else {
LAB_180055040:
                    ppppppuVar18 = (undefined8 ******)0x1;
                    lVar7 = 0;
                  }
                  lVar22 = 0;
                }
                else {
                  if (cVar5 != '\x02') goto LAB_180055040;
                  lVar22 = *(longlong *)(*(longlong *)(pcVar10 + 8) + 8);
                  lVar7 = 0;
                }
                if (local_288 != pcVar10) {
                  FUN_1800b8f52(&DAT_1802a2208,&DAT_1802721b7,0x10,0x31,&DAT_1802a223c);
                  FUN_180057290(local_150,&DAT_1802a2208);
                  FUN_1800ac3e0(&local_398,local_f4,local_150,pcVar20);
                  FUN_1801dd110(&local_398,&DAT_180253660);
                }
                cVar5 = *local_288;
                if (cVar5 < '\x02') {
                  if (cVar5 == '\x01') {
                    if (local_280 == lVar7) goto LAB_180054dd0;
                  }
                  else {
LAB_180055090:
                    if (local_270 == ppppppuVar18) goto LAB_180054dd0;
                  }
LAB_18005509d:
                  pcVar10 = (char *)FUN_18005b290(&local_288);
                  lVar7 = *local_1e0;
                  iVar1 = *(int *)(lVar7 + 8);
                  if (iVar1 < 4) {
                    if (iVar1 < 2) {
                      if (iVar1 == 1) {
                        local_16c = local_98;
                        FUN_180087d30(&DAT_18020e920,pcVar10,&local_16c);
                        uVar6 = *(uint *)(lVar7 + 0x98);
                        if ((int)*(uint *)(lVar7 + 0x98) < (int)local_16c) {
                          uVar6 = local_16c;
                        }
                        if ((int)*(uint *)(lVar7 + 0x9c) < (int)local_16c) {
                          uVar6 = *(uint *)(lVar7 + 0x9c);
                        }
                        *(uint *)(lVar7 + 0x90) = uVar6;
                      }
                      else if (iVar1 == 0) {
                        if (*pcVar10 != '\x04') {
                          local_3b0 = FUN_180081b20(pcVar10);
                          FUN_1800b8f52(&DAT_1802a219c,&DAT_1802720d6,0x16,0x1e,&DAT_1802a21bc);
                          FUN_180087b90(local_4a0,&DAT_1802a219c,&local_3b0);
                          FUN_180083d90(local_6e0,0x12e,local_4a0,pcVar10);
                          FUN_1801dd110(local_6e0,&DAT_180253620);
                        }
                        *(char *)(lVar7 + 0x90) = pcVar10[8];
                      }
                      goto LAB_180054dd0;
                    }
                    if (iVar1 != 3) {
                      local_170 = local_c4;
                      FUN_180087e30(&DAT_18020e920,pcVar10,&local_170);
                      fVar29 = *(float *)(lVar7 + 0xa0);
                      if (fVar29 <= local_c4) {
                        fVar31 = *(float *)(lVar7 + 0x98);
                        fVar29 = local_170;
                      }
                      else {
                        fVar31 = *(float *)(lVar7 + 0x98);
                        fVar28 = (float)FUN_1801e1b20((local_170 - fVar31) / fVar29);
                        fVar29 = fVar28 * fVar29 + fVar31;
                      }
                      if (fVar31 <= fVar29) {
                        fVar31 = fVar29;
                      }
                      uVar6 = -(uint)(*(float *)(lVar7 + 0x9c) < fVar29);
                      *(uint *)(lVar7 + 0x90) = uVar6 & (uint)*(float *)(lVar7 + 0x9c) | ~uVar6 & (uint)fVar31;
                      goto LAB_180054dd0;
                    }
                    local_248 = (undefined8 *******)0x0;
                    uStack_240 = 0;
                    local_238 = (undefined8 ******)0x0;
                    local_230 = local_a0;
                    FUN_180087f60(pcVar10,&local_248);
                    ppppppuVar21 = local_230;
                    ppppppuVar18 = local_238;
                    lVar22 = *(longlong *)(lVar7 + 0x98);
                    ppppppuVar25 = (undefined8 ******)(*(longlong *)(lVar7 + 0xa0) - lVar22 >> 5);
                    if (*(longlong *)(lVar7 + 0xa0) != lVar22) {
                      pppppppuVar14 = &local_248;
                      if (local_a0 < local_230) {
                        pppppppuVar14 = local_248;
                      }
                      ppppppuVar12 = local_a8;
                      if (local_238 == local_a8) {
                        do {
                          if (*(undefined8 *******)(lVar22 + 0x10 + (longlong)ppppppuVar12 * 0x20) == local_a8) {
                            *(int *)(lVar7 + 0x90) = (int)ppppppuVar12;
                            break;
                          }
                          ppppppuVar12 = (undefined8 ******)((longlong)ppppppuVar12 + (longlong)local_b0);
                        } while (ppppppuVar12 != ppppppuVar25);
                      }
                      else {
                        do {
                          if (*(undefined8 *******)(lVar22 + 0x10 + (longlong)ppppppuVar12 * 0x20) == ppppppuVar18) {
                            puVar8 = (undefined8 *)((longlong)ppppppuVar12 * 0x20 + lVar22);
                            if (local_a0 < (undefined8 ******)puVar8[3]) {
                              puVar8 = (undefined8 *)*puVar8;
                            }
                            uVar6 = memcmp(puVar8,pppppppuVar14,(size_t)ppppppuVar18);
                            if (uVar6 == local_98) {
                              *(int *)(lVar7 + 0x90) = (int)ppppppuVar12;
                              break;
                            }
                          }
                          ppppppuVar12 = (undefined8 ******)((longlong)ppppppuVar12 + (longlong)local_b0);
                        } while (ppppppuVar12 != ppppppuVar25);
                      }
                    }
                    if (ppppppuVar21 <= local_a0) goto LAB_180054dd0;
                    uVar19 = (longlong)local_b0 + (longlong)ppppppuVar21;
                    pppppppuVar14 = local_248;
                    if (local_d8 < uVar19) {
                      if (local_e8 <= (ulonglong)((longlong)local_248 + (local_e0 - (longlong)local_248[-1])))
                      goto LAB_180056392;
                      uVar19 = (longlong)ppppppuVar21 + local_f0;
                      pppppppuVar14 = (undefined8 *******)local_248[-1];
                    }
                  }
                  else {
                    if (iVar1 < 6) {
                      if (iVar1 == 4) {
                        if ((*pcVar10 == local_92) &&
                           (lVar22 = **(longlong **)(pcVar10 + 8), (*(longlong **)(pcVar10 + 8))[1] - lVar22 == 0x40)) {
                          local_178 = local_c4;
                          FUN_180087e30(&DAT_18020e920,lVar22,&local_178);
                          fVar29 = local_178;
                          if (*pcVar10 != local_92) {
                            local_3b8 = FUN_180081b20();
                            FUN_1800b8f52(&DAT_1802a2130,&DAT_180271fac,0x1f,0x34,&DAT_1802a2164);
                            FUN_180084160(local_4e0,&DAT_1802a2130,&local_3b8);
                            FUN_180083d90(&local_558,local_12c,local_4e0,pcVar10);
                            FUN_1801dd110(&local_558,&DAT_180253620);
                          }
                          local_17c = local_c4;
                          FUN_180087e30(&DAT_18020e920,**(longlong **)(pcVar10 + 8) + 0x10,&local_17c);
                          fVar31 = local_17c;
                          if (*pcVar10 != local_92) {
                            local_3c0 = FUN_180081b20();
                            FUN_1800b8f52(&DAT_1802a2130,&DAT_180271fac,0x1f,0x34,&DAT_1802a2164);
                            FUN_180084160(local_500,&DAT_1802a2130,&local_3c0);
                            FUN_180083d90(local_480,local_12c,local_500,pcVar10);
                            FUN_1801dd110(local_480,&DAT_180253620);
                          }
                          local_180 = local_c4;
                          FUN_180087e30(&DAT_18020e920,**(longlong **)(pcVar10 + 8) + 0x20,&local_180);
                          fVar28 = local_180;
                          if (*pcVar10 != local_92) {
                            local_3c8 = FUN_180081b20();
                            FUN_1800b8f52(&DAT_1802a2130,&DAT_180271fac,0x1f,0x34,&DAT_1802a2164);
                            FUN_180084160(local_520,&DAT_1802a2130,&local_3c8);
                            FUN_180083d90(local_598,local_12c,local_520,pcVar10);
                            FUN_1801dd110(local_598,&DAT_180253620);
                          }
                          local_184 = local_c4;
                          FUN_180087e30(&DAT_18020e920,**(longlong **)(pcVar10 + 8) + 0x30,&local_184);
                          *(float *)(lVar7 + 0x90) = fVar29;
                          *(float *)(lVar7 + 0x94) = fVar31;
                          *(float *)(lVar7 + 0x98) = fVar28;
                          *(float *)(lVar7 + 0x9c) = local_184;
                        }
                      }
                      else {
                        local_174 = local_98;
                        FUN_180087d30(&DAT_18020e920,pcVar10,&local_174);
                        *(uint *)(lVar7 + 0x90) = local_174;
                      }
                      goto LAB_180054dd0;
                    }
                    if (iVar1 != 6) {
                      if (iVar1 == 7) {
                        lVar22 = *(longlong *)(lVar7 + 0x90);
                        lVar15 = *(longlong *)(lVar7 + 0x98);
                        if (lVar22 != lVar15) {
                          do {
                            FUN_1800880c0(lVar22);
                            lVar22 = lVar22 + 0x40;
                          } while (lVar22 != lVar15);
                          *(undefined8 *)(lVar7 + 0x98) = *(undefined8 *)(lVar7 + 0x90);
                        }
                        local_1b8 = (longlong *)0x0;
                        lStack_1b0 = 0;
                        local_1a8 = local_c0;
                        cVar5 = *pcVar10;
                        local_1c0 = pcVar10;
                        if (cVar5 < '\x01') {
                          local_1a8 = local_b0;
                          if (cVar5 != '\0') {
LAB_180055707:
                            local_1a8 = local_a8;
                          }
                          lVar22 = 0;
                          ppppppuVar18 = local_b0;
                        }
                        else {
                          ppppppuVar18 = local_c0;
                          if (cVar5 == '\x01') {
                            local_1b8 = *(longlong **)**(undefined8 **)(pcVar10 + 8);
                            plVar9 = (longlong *)**(undefined8 **)(pcVar10 + 8);
                            lVar22 = 0;
                            goto LAB_18005573e;
                          }
                          if (cVar5 != '\x02') goto LAB_180055707;
                          lStack_1b0 = **(longlong **)(pcVar10 + 8);
                          lVar22 = (*(longlong **)(pcVar10 + 8))[1];
                        }
                        plVar9 = (longlong *)0x0;
LAB_18005573e:
                        pcVar20 = local_1c0;
                        if (local_1c0 != pcVar10) {
                          FUN_1800b8f52(&DAT_1802a2208,&DAT_1802721b7,0x10,0x31,&DAT_1802a223c);
                          FUN_180057290(local_4c0,&DAT_1802a2208);
                          FUN_1800886d0(&local_228,local_f4,local_4c0,pcVar20);
                          FUN_1801dd110(&local_228,&DAT_180253660);
                        }
                        cVar5 = *local_1c0;
                        if (cVar5 < '\x02') {
                          if (cVar5 == '\x01') {
                            if (local_1b8 == plVar9) goto LAB_180054dd0;
                          }
                          else {
LAB_180055770:
                            if (local_1a8 == ppppppuVar18) goto LAB_180054dd0;
                          }
                        }
                        else {
                          if (cVar5 != '\x02') goto LAB_180055770;
                          if (lStack_1b0 == lVar22) goto LAB_180054dd0;
                        }
                        uVar13 = FUN_180086ee0(&local_1c0);
                        local_398 = (undefined8 *****)0x0;
                        uStack_390 = 0;
                        local_388 = (undefined8 ******)0x0;
                        ppppppuStack_380 = local_a0;
                        local_378 = 0;
                        uStack_370 = 0;
                        local_368 = (undefined8 ******)0x0;
                        ppppppuStack_360 = local_a0;
                        local_228 = 0;
                        uStack_220 = 0;
                        local_218 = 0;
                        local_210 = local_a0;
                        FUN_1800b8f52(&DAT_1802a2034,&DAT_180271c52,0x15,5,&DAT_1802a203c);
                        FUN_180087090(uVar13,&local_448,&DAT_1802a2034,&local_228);
                        if (local_a0 < ppppppuStack_380) {
                          uVar19 = (longlong)local_b0 + (longlong)ppppppuStack_380;
                          pppppuVar16 = local_398;
                          if (local_d8 < uVar19) {
                            pppppuVar16 = (undefined8 *****)local_398[-1];
                            if (local_e8 <= (ulonglong)((longlong)local_398 + (local_e0 - (longlong)pppppuVar16)))
                            goto LAB_180056392;
                            uVar19 = (longlong)ppppppuStack_380 + local_f0;
                          }
                          thunk_FUN_1801f42e0(pppppuVar16,uVar19);
                        }
                        local_388 = local_438;
                        ppppppuStack_380 = ppppppuStack_430;
                        local_398 = (undefined8 *****)CONCAT44(uStack_444,local_448);
                        uStack_390 = CONCAT44(uStack_43c,uStack_440);
                        local_438 = local_a8;
                        ppppppuStack_430 = local_a0;
                        local_448 = CONCAT31(local_448._1_3_,local_91);
                        if (local_a0 < local_210) {
                          uVar19 = (longlong)local_b0 + (longlong)local_210;
                          lVar15 = local_228;
                          if (local_d8 < uVar19) {
                            lVar15 = *(longlong *)(local_228 + -8);
                            if (local_e8 <= (ulonglong)((local_228 + local_e0) - lVar15)) goto LAB_180056392;
                            uVar19 = (longlong)local_210 + local_f0;
                          }
                          thunk_FUN_1801f42e0(lVar15,uVar19);
                        }
                        local_228 = 0;
                        uStack_220 = 0;
                        local_218 = 0;
                        local_210 = local_a0;
                        FUN_1800b8f52(&DAT_1802a2040,&DAT_180271c81,0x19,3,&DAT_1802a2044);
                        FUN_180087300(uVar13,&local_428,&DAT_1802a2040);
                        if (local_a0 < ppppppuStack_360) {
                          uVar19 = (longlong)local_b0 + (longlong)ppppppuStack_360;
                          lVar15 = local_378;
                          if (local_d8 < uVar19) {
                            lVar15 = *(longlong *)(local_378 + -8);
                            if (local_e8 <= (ulonglong)((local_378 + local_e0) - lVar15)) goto LAB_180056392;
                            uVar19 = (longlong)ppppppuStack_360 + local_f0;
                          }
                          thunk_FUN_1801f42e0(lVar15,uVar19);
                        }
                        local_368 = local_418;
                        ppppppuStack_360 = ppppppuStack_410;
                        local_378 = CONCAT44(uStack_424,local_428);
                        uStack_370 = CONCAT44(uStack_41c,uStack_420);
                        local_418 = local_a8;
                        ppppppuStack_410 = local_a0;
                        local_428 = CONCAT31(local_428._1_3_,local_91);
                        if (local_a0 < local_210) {
                          uVar19 = (longlong)local_b0 + (longlong)local_210;
                          lVar15 = local_228;
                          if (local_d8 < uVar19) {
                            lVar15 = *(longlong *)(local_228 + -8);
                            if (local_e8 <= (ulonglong)((local_228 + local_e0) - lVar15)) goto LAB_180056392;
                            uVar19 = (longlong)local_210 + local_f0;
                          }
                          thunk_FUN_1801f42e0(lVar15,uVar19);
                        }
                        if ((local_388 == local_a8) && (local_368 == local_a8)) {
LAB_180055b46:
                          if (local_a0 < ppppppuStack_360) {
                            uVar19 = (longlong)local_b0 + (longlong)ppppppuStack_360;
                            lVar15 = local_378;
                            if (local_d8 < uVar19) {
                              lVar15 = *(longlong *)(local_378 + -8);
                              if (local_e8 <= (ulonglong)((local_378 + local_e0) - lVar15)) goto LAB_180056392;
                              uVar19 = (longlong)ppppppuStack_360 + local_f0;
                            }
                            thunk_FUN_1801f42e0(lVar15,uVar19);
                          }
                        }
                        else {
                          pauVar3 = *(undefined1 (**) [16])(lVar7 + 0x98);
                          if (pauVar3 == *(undefined1 (**) [16])(lVar7 + 0xa0)) {
                            FUN_180089690(lVar7 + 0x90,pauVar3,&local_398);
                            goto LAB_180055b46;
                          }
                          auVar30 = ZEXT816(0);
                          pauVar3[1] = auVar30;
                          *pauVar3 = auVar30;
                          *(undefined8 *******)pauVar3[1] = local_388;
                          *(undefined8 *******)(pauVar3[1] + 8) = ppppppuStack_380;
                          *(undefined8 ******)*pauVar3 = local_398;
                          *(undefined8 *)(*pauVar3 + 8) = uStack_390;
                          local_388 = local_a8;
                          ppppppuStack_380 = local_a0;
                          local_398 = (undefined8 *****)CONCAT71(local_398._1_7_,local_91);
                          pauVar3[3] = auVar30;
                          pauVar3[2] = auVar30;
                          *(undefined4 *)pauVar3[2] = (undefined4)local_378;
                          *(undefined4 *)(pauVar3[2] + 4) = local_378._4_4_;
                          *(undefined4 *)(pauVar3[2] + 8) = (undefined4)uStack_370;
                          *(undefined4 *)(pauVar3[2] + 0xc) = uStack_370._4_4_;
                          *(undefined8 *******)pauVar3[3] = local_368;
                          *(undefined8 *******)(pauVar3[3] + 8) = ppppppuStack_360;
                          *(longlong *)(lVar7 + 0x98) = *(longlong *)(lVar7 + 0x98) + 0x40;
                        }
                        local_368 = local_a8;
                        ppppppuStack_360 = local_a0;
                        local_378 = CONCAT71(local_378._1_7_,local_91);
                        if (local_a0 < ppppppuStack_380) {
                          uVar19 = (longlong)local_b0 + (longlong)ppppppuStack_380;
                          pppppuVar16 = local_398;
                          if (local_d8 < uVar19) {
                            pppppuVar16 = (undefined8 *****)local_398[-1];
                            if (local_e8 <= (ulonglong)((longlong)local_398 + (local_e0 - (longlong)pppppuVar16)))
                            goto LAB_180056392;
                            uVar19 = (longlong)ppppppuStack_380 + local_f0;
                          }
                          thunk_FUN_1801f42e0(pppppuVar16,uVar19);
                        }
                        cVar5 = *local_1c0;
                        if (cVar5 < '\x02') {
                          if (cVar5 == '\x01') {
                            plVar11 = local_1b8;
                            plVar4 = (longlong *)local_1b8[2];
                            if (*(char *)(local_1b8[2] + 0x19) == local_91) {
                              do {
                                local_1b8 = plVar4;
                                plVar4 = (longlong *)*local_1b8;
                              } while (*(char *)(*local_1b8 + 0x19) == local_91);
                            }
                            else {
                              do {
                                local_1b8 = (longlong *)plVar11[1];
                                if (*(char *)((longlong)local_1b8 + 0x19) != local_91) break;
                                bVar26 = plVar11 == (longlong *)local_1b8[2];
                                plVar11 = local_1b8;
                              } while (bVar26);
                            }
                          }
                          else {
LAB_180055730:
                            local_1a8 = (undefined8 ******)((longlong)local_1a8 + (longlong)local_b0);
                          }
                        }
                        else {
                          if (cVar5 != '\x02') goto LAB_180055730;
                          lStack_1b0 = lStack_1b0 + 0x10;
                        }
                        goto LAB_18005573e;
                      }
                      goto LAB_180054dd0;
                    }
                    local_268 = (undefined8 *******)0x0;
                    uStack_260 = 0;
                    local_258 = 0;
                    ppppppuStack_250 = local_a0;
                    FUN_180087f60(pcVar10,&local_268);
                    pppppppuVar14 = (undefined8 *******)(lVar7 + 0x90);
                    if ((undefined8 ********)pppppppuVar14 != &local_268) {
                      ppppppuVar18 = *(undefined8 *******)(lVar7 + 0xa8);
                      if (local_a0 < ppppppuVar18) {
                        ppppppuVar21 = *pppppppuVar14;
                        uVar19 = (longlong)local_b0 + (longlong)ppppppuVar18;
                        ppppppuVar25 = ppppppuVar21;
                        if (local_d8 < uVar19) {
                          ppppppuVar25 = (undefined8 ******)ppppppuVar21[-1];
                          if (local_e8 <= (ulonglong)((longlong)ppppppuVar21 + (local_e0 - (longlong)ppppppuVar25)))
                          goto LAB_180056392;
                          uVar19 = (longlong)ppppppuVar18 + local_f0;
                        }
                        thunk_FUN_1801f42e0(ppppppuVar25,uVar19);
                      }
                      *(undefined8 *)(lVar7 + 0xa0) = local_258;
                      *(undefined8 *******)(lVar7 + 0xa8) = ppppppuStack_250;
                      *pppppppuVar14 = local_268;
                      *(undefined8 *)(lVar7 + 0x98) = uStack_260;
                      goto LAB_180054dd0;
                    }
                    if (ppppppuStack_250 <= local_a0) goto LAB_180054dd0;
                    uVar19 = (longlong)local_b0 + (longlong)ppppppuStack_250;
                    pppppppuVar14 = local_268;
                    if (local_d8 < uVar19) {
                      pppppppuVar14 = (undefined8 *******)local_268[-1];
                      if ((ulonglong)((longlong)local_268 + (local_e0 - (longlong)pppppppuVar14)) < local_e8) {
                        uVar19 = (longlong)ppppppuStack_250 + local_f0;
                        goto LAB_180054dbf;
                      }
                      goto LAB_180056392;
                    }
                  }
LAB_180054dbf:
                  thunk_FUN_1801f42e0(pppppppuVar14,uVar19);
                }
                else {
                  if (cVar5 != '\x02') goto LAB_180055090;
                  if (lStack_278 != lVar22) goto LAB_18005509d;
                }
              }
              else {
                sVar2 = *(size_t *)(lVar7 + 0x20);
                if (local_a0 < *(undefined8 *******)(lVar22 + 0x20)) {
                  _Buf1 = *(void **)(lVar22 + 8);
                }
                else {
                  _Buf1 = (void *)(lVar22 + 8);
                }
                FUN_1800b8f52(&DAT_1802a2180,&DAT_180272055,0x1e,9,&DAT_1802a218c);
                uVar6 = memcmp(_Buf1,&DAT_1802a2180,_Size);
                uVar19 = local_190;
                if ((uVar6 != local_98) || (sVar2 != local_190)) goto LAB_180054f10;
                FUN_1800b8f52(&DAT_1802a2190,&DAT_180272094,0x1b,8,&DAT_1802a2198);
                uVar6 = memcmp(_Buf1_00,&DAT_1802a2190,uVar19);
                if (uVar6 != local_98) goto LAB_180054f10;
              }
LAB_180054dd0:
              plVar11 = local_1e0 + 1;
              goto LAB_180054ddb;
            }
            if (cVar5 != '\x02') goto LAB_180054d90;
            if (local_158 != pcVar17) goto LAB_180054d99;
            goto LAB_180055f7a;
          }
          if (cVar5 != '\x02') goto LAB_180054bc0;
          if (pcVar20 != pcVar24) goto LAB_180054bc9;
          goto LAB_180054a30;
        }
        pppppppuVar14 = local_2a8;
        if (local_1a0 != pppppppuVar14) {
          if (local_a0 < local_290) {
            local_198 = local_2a8[0];
          }
          if (local_1a0[3] < local_298) {
            pppppppuVar14 = (undefined8 *******)FUN_18007f460(local_1a0,local_298);
          }
          else {
            pppppppuVar23 = local_1a0;
            if (local_a0 < local_1a0[3]) {
              pppppppuVar23 = (undefined8 *******)*local_1a0;
            }
            local_1a0[2] = local_298;
            FUN_1802079d0(pppppppuVar23,local_198,local_298);
            pppppppuVar14 = (undefined8 *******)0x0;
            *(char *)((longlong)pppppppuVar23 + (longlong)local_298) = local_91;
          }
        }
        local_d0 = (char *)CONCAT71((int7)((ulonglong)pppppppuVar14 >> 8),1);
        FUN_180053b20(local_1a0);
      }
LAB_1800560cc:
      FUN_18007ff50(&local_108,local_110[0]);
      lVar7 = (longlong)*(int *)(local_6a8[0] + 4);
      pcVar10 = local_d0;
    }
    else {
      pcVar10 = (char *)0x0;
    }
    *(undefined ***)((longlong)local_6a8 + lVar7) = &PTR_LAB_18020e8f0;
    *(int *)((longlong)&iStack_6ac + (longlong)*(int *)(local_6a8[0] + 4)) = *(int *)(local_6a8[0] + 4) + -0xb0;
    FUN_180078d60(local_698);
    local_5f8[0] = &PTR_FUN_18020e8e8;
    std::ios_base::_Ios_base_dtor((ios_base *)local_5f8);
    if (local_190 < local_3d0) {
      lVar7 = local_3d0 << ((byte)local_b0 & 0x3f);
      uVar19 = lVar7 + 2;
      pppppppuVar14 = local_3e8[0];
      if (local_d8 < uVar19) {
        pppppppuVar14 = (undefined8 *******)local_3e8[0][-1];
        if (local_e8 <= (ulonglong)((longlong)local_3e8[0] + (local_e0 - (longlong)pppppppuVar14))) goto LAB_180056392;
        uVar19 = lVar7 + 0x29;
      }
      thunk_FUN_1801f42e0(pppppppuVar14,uVar19);
    }
  }
  if (local_a0 < local_290) {
    uVar19 = (longlong)local_b0 + (longlong)local_290;
    pppppppuVar14 = local_2a8[0];
    if (local_d8 < uVar19) {
      pppppppuVar14 = (undefined8 *******)local_2a8[0][-1];
      if (local_e8 <= (ulonglong)((longlong)local_2a8[0] + (local_e0 - (longlong)pppppppuVar14))) {
LAB_180056392:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_98,(uintptr_t)local_a8);
      }
      uVar19 = (longlong)local_290 + local_f0;
    }
    thunk_FUN_1801f42e0(pppppppuVar14,uVar19);
  }
  return (ulonglong)pcVar10 & 0xffffffff;
LAB_180055f70:
  plVar9 = (longlong *)*local_168;
LAB_180055f7a:
  cVar5 = (**(code **)(*plVar9 + 0x20))();
  pcVar10 = local_d0;
  if (cVar5 != '\0') {
    lVar7 = *local_168;
    cVar5 = *local_100;
    if (cVar5 < '\x02') {
      if (cVar5 != '\x01') {
LAB_180056669:
        FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
        FUN_180057290(local_150,&DAT_1802a2258);
        FUN_1800ac3e0(&local_398,local_b4,local_150,local_100);
        FUN_1801dd110(&local_398,&DAT_180253660);
      }
      pcVar10 = (char *)(local_120 + 0x40);
    }
    else {
      pcVar10 = local_1d0;
      if (cVar5 != '\x02') goto LAB_180056669;
    }
    local_398 = (undefined8 *****)CONCAT71(local_398._1_7_,local_91);
    FUN_1800b8f52(&DAT_1802a1ef8,&DAT_180271709,0x1e,8,&DAT_1802a1f00);
    uVar27 = FUN_18005b440(pcVar10,&DAT_1802a1ef8,&local_398);
    FUN_180107400(lVar7,uVar27);
    pcVar10 = local_d0;
  }
LAB_180054a30:
  plVar9 = local_168 + 1;
  goto LAB_180054a3b;
}



void Unwind_1800566e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x4a0);
  return;
}



void Unwind_180056740(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x4c0);
  return;
}



void Unwind_1800567a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x4e0);
  return;
}



void Unwind_180056800(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x4e0);
  return;
}



void Unwind_180056860(undefined8 param_1,longlong param_2)

{
  FUN_180087570(param_2 + 0x370);
  return;
}



void Unwind_1800568c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x1e8);
  return;
}



void Unwind_180056920(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x208);
  return;
}



void Unwind_180056980(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x228);
  return;
}



void Unwind_1800569e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x268);
  return;
}



void Unwind_180056a40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x248);
  return;
}



undefined8 Catch_180056aa0(void)

{
  return 0x180054dd0;
}



void Unwind_180056b00(void)

{
  Unwind_1801dd394();
}



void Unwind_180056b40(undefined8 param_1,longlong param_2)

{
  FUN_18009a630(param_2 + 0x370);
  return;
}



void Unwind_180056ba0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



undefined8 Catch_180056c00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;

  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x680) + 8))();
  *(undefined8 *)(param_2 + 0x4e0) = uVar1;
  FUN_180052e70(param_2 + 800,param_2 + 0x288);
  FUN_1800b8f52(&DAT_1802a1f40,&DAT_180271836,0x1c,0x19,&DAT_1802a1f5c);
  *(undefined **)(param_2 + 0x300) = &DAT_1802a1f40;
  *(undefined8 *)(param_2 + 0x308) = 0x18;
  FUN_1800b8f52(&DAT_1802a1f34,&DAT_180271808,0x10,7,&DAT_1802a1f3c);
  *(undefined **)(param_2 + 0x310) = &DAT_1802a1f34;
  *(undefined8 *)(param_2 + 0x318) = 6;
  FUN_18005add0(4,param_2 + 0x310,param_2 + 0x300,param_2 + 0x288,param_2 + 0x4e0);
  FUN_180001ef0(param_2 + 0x288);
  *(undefined8 *)(param_2 + 0x638) = 0;
  return 0x1800560cc;
}



void Unwind_180056d60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x288);
  return;
}



void Unwind_180056dc0(void)

{
  Unwind_1801dd394();
}



void Unwind_180056e00(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180056e60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180056ec0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180056f20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180056f80(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180056fe0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180057040(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_1800570a0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180057100(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x5b8);
  return;
}



void Unwind_180057160(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x5f8);
  FUN_1800542d0(param_2 + 0x60);
  return;
}



void Unwind_1800571d0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 800);
  return;
}



void Unwind_180057230(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x460);
  return;
}



undefined8 * FUN_180057290(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;

  local_90 = 0x33b78c792dcf7ffc;
  local_98 = 0xa4d6a2d11475e42a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_90 ^ 0xd5c95602b9cba182;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xd5c95602b9cba182;
          local_90 = uVar3;
          if ((longlong)uVar1 < 0x55e315e3847059e4) break;
          if ((longlong)uVar1 < 0x5d62724a7fc790dc) {
            if (uVar1 == 0x55e315e3847059e4) {
              local_70 = (undefined8 *)FUN_1801d61c8(local_80 + 1);
              local_90 = 0xb88501ac9446fa4;
              local_98 = 0xf02f2ed703757e57;
            }
            else if (uVar1 == 0x566406b3b8f792a4) {
              local_90 = 0x59ef88aa735598df;
              if (local_88 < 0x10) {
                local_90 = 0x24e08df3af06588f;
              }
              local_98 = 0x75c197d11d1fdb4a;
              local_68 = local_78;
              local_60 = param_1;
            }
          }
          else if (uVar1 == 0x74aa4820a9b43f81) {
            lVar2 = FUN_1801d61c8(local_80 + 0x28);
            local_70 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
            local_70[-1] = lVar2;
            local_90 = 0xdc8a111c7997734e;
            local_98 = 0x272d6fd1b3a662bd;
          }
          else if (uVar1 == 0x5d62724a7fc790dc) {
            FUN_180002ac0();
          }
        }
        if (0x2c2e1f7b6e4a4394 < (longlong)uVar1) break;
        if (uVar1 == 0x97612ea839ba9bd6) {
          local_78 = 0xf;
          param_1[2] = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          local_88 = strlen(param_2);
          local_90 = 0xad884b713922ec22;
          if ((longlong)local_88 < 0) {
            local_90 = 0xa68e3f88fe12ee5a;
          }
          local_98 = 0xfbec4dc281d57e86;
        }
        else if (uVar1 == 0xfba77ecdca3111f3) {
          local_60 = local_70;
          *param_1 = local_70;
          local_90 = 0xa21589382fd5163d;
          local_98 = 0xf334931a9dcc95f8;
          local_68 = local_80;
        }
      }
      if (uVar1 != 0x2c2e1f7b6e4a4395) break;
      uVar1 = local_88 | local_78;
      local_80 = 0x16;
      if (0x16 < uVar1) {
        local_80 = uVar1;
      }
      local_90 = 0x16460137f0a3e343;
      if (0xffe < uVar1) {
        local_90 = 0x370f5cf4dd678526;
      }
      local_98 = 0x43a514d474d3baa7;
    }
  } while (uVar1 != 0x51211a22b21983c5);
  param_1[2] = local_88;
  param_1[3] = local_68;
  FUN_1802079d0(local_60,param_2,local_88);
  *(undefined1 *)((longlong)local_60 + local_88) = 0;
  return param_1;
}



undefined4 FUN_180057640(undefined8 *******param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ******local_60 [2];
  undefined8 *****local_50;
  undefined8 *****local_48;
  undefined8 *****local_40;
  undefined8 *****local_38;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_38 = (undefined8 ******)0xf;
  local_40 = (undefined8 ******)0x0;
  FUN_180050650(local_60);
  if (local_50 != local_40) {
    cVar1 = FUN_180050f30();
    if (cVar1 == '\0') {
      if (param_1 != local_60) {
        pppppppuVar3 = local_60;
        if (local_38 < local_48) {
          pppppppuVar3 = (undefined8 *******)local_60[0];
        }
        if (param_1[3] < local_50) {
          FUN_18007f460(param_1,local_50);
        }
        else {
          pppppppuVar5 = param_1;
          if (local_38 < param_1[3]) {
            pppppppuVar5 = (undefined8 *******)*param_1;
          }
          param_1[2] = (undefined8 ******)local_50;
          FUN_1802079d0(pppppppuVar5,pppppppuVar3,local_50);
          *(undefined1 *)((longlong)pppppppuVar5 + (longlong)local_50) = 0;
        }
      }
      FUN_180053b20(param_1);
      uVar2 = FUN_180057820(param_1,local_60);
      if (local_48 <= local_38) {
        return uVar2;
      }
      goto LAB_180057733;
    }
  }
  uVar2 = 0;
  if (local_48 <= local_38) {
    return 0;
  }
LAB_180057733:
  ppppppuVar4 = (undefined8 ******)((longlong)local_48 + 1);
  pppppppuVar3 = (undefined8 *******)local_60[0];
  if ((undefined8 ******)0xfff < ppppppuVar4) {
    pppppppuVar3 = (undefined8 *******)local_60[0][-1];
    if (0x1f < (ulonglong)((longlong)local_60[0] + (-8 - (longlong)pppppppuVar3))) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,(uintptr_t)local_40);
    }
    ppppppuVar4 = (undefined8 ******)(local_48 + 5);
  }
  thunk_FUN_1801f42e0(pppppppuVar3,ppppppuVar4);
  return uVar2;
}



void Unwind_1800577f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x28);
  return;
}



ulonglong FUN_180057820(ulonglong *****param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong ***pppuVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong ****ppppuVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong ****ppppuVar11;
  undefined8 *****pppppuVar12;
  ulonglong *****pppppuVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong ****ppppuVar16;
  ulonglong uVar17;
  undefined *puVar18;
  byte bVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  ulonglong *****pppppuVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 ****local_448;
  undefined8 ****local_440;
  undefined *local_438;
  ulonglong ***local_430;
  undefined *local_428;
  undefined8 local_420;
  undefined1 local_418 [32];
  undefined *local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  ulonglong ***pppuStack_3d0;
  undefined8 ****local_3c8;
  ulonglong ***pppuStack_3c0;
  double local_3b8;
  undefined8 local_3b0;
  ulonglong uStack_3a8;
  double local_3a0;
  undefined8 local_398;
  ulonglong uStack_390;
  double local_388;
  undefined8 local_380;
  undefined1 local_378 [72];
  undefined **local_330 [13];
  ulonglong local_2c8;
  ulonglong uStack_2c0;
  ulonglong local_2b8;
  ulonglong ***pppuStack_2b0;
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  ulonglong ***pppuStack_290;
  undefined8 ****local_270;
  undefined8 ****local_268;
  longlong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 ****local_238;
  undefined8 *puStack_230;
  undefined8 local_228;
  ulonglong uStack_220;
  ulonglong *local_218;
  undefined8 local_210;
  ulonglong *local_208;
  undefined8 ****local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  ulonglong ****local_1c8;
  ulonglong ***pppuStack_1c0;
  ulonglong ***local_1b8;
  ulonglong ***pppuStack_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  ulonglong ***local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulonglong ****local_170;
  undefined8 ****local_168;
  undefined1 *local_160;
  undefined8 *local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 ****local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  ulonglong ***pppuStack_120;
  ulonglong *local_118;
  undefined8 local_110;
  ulonglong *local_108;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong ***local_d8;
  ulonglong local_d0;
  ulonglong *local_c8;
  undefined8 ****local_c0;
  longlong local_b8;
  ulonglong local_b0;
  uint local_a4;
  longlong local_a0;
  undefined8 ****local_98;
  undefined8 *apuStack_90 [2];
  ulonglong ***local_80;
  undefined1 local_71;
  ulonglong ***local_70;
  undefined1 local_65;
  byte local_64;
  undefined1 local_63;
  byte local_62;
  undefined1 local_61;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_70 = (ulonglong ***)0xf;
  local_f8 = 0x27;
  local_b0 = 0x20;
  local_63 = 2;
  local_80 = (ulonglong ***)0x0;
  local_a0 = 1;
  local_f0 = -8;
  local_270 = (undefined8 *****)0x4;
  local_b8 = 0x28;
  local_61 = 0;
  local_64 = 7;
  local_fc = 2;
  local_268 = (undefined8 *****)0x5;
  local_62 = 3;
  local_a4 = 0;
  local_e8 = 0xffffffffffffffe0;
  local_e0 = 0xfff;
  local_d8 = (ulonglong ***)0xffe;
  local_d0 = 0x10;
  local_260 = 2;
  local_c0 = (undefined8 *****)0x7;
  local_170 = (ulonglong ****)param_1;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_1b8 = (ulonglong ***)0x0;
    pppuStack_1b0 = (ulonglong ***)0x0;
    local_1c8 = (ulonglong ****)0x0;
    pppuStack_1c0 = (ulonglong ***)0x0;
    ppppuVar16 = param_1[2];
    if ((ulonglong ****)0xf < param_1[3]) {
      param_1 = (ulonglong *****)*param_1;
    }
    if ((longlong)ppppuVar16 < 0) {
      FUN_180002ac0();
    }
    if (ppppuVar16 < (ulonglong ****)0x10) {
      pppuStack_1b0 = (ulonglong ***)0xf;
      local_1c8 = *param_1;
      pppuStack_1c0 = (ulonglong ***)param_1[1];
      local_1b8 = (ulonglong ***)ppppuVar16;
      if (ppppuVar16 == (ulonglong ****)0x0) goto LAB_180057ab9;
    }
    else {
      ppppuVar7 = (ulonglong ****)((ulonglong)ppppuVar16 | 0xf);
      ppppuVar11 = (ulonglong ****)0x16;
      if ((ulonglong ****)0x16 < ppppuVar7) {
        ppppuVar11 = ppppuVar7;
      }
      if (ppppuVar7 < (ulonglong ****)0xfff) {
        local_1c8 = (ulonglong ****)FUN_1801d61c8((longlong)ppppuVar11 + 1);
      }
      else {
        ppppuVar7 = (ulonglong ****)FUN_1801d61c8(ppppuVar11 + 5);
        local_1c8 = (ulonglong ****)(local_f8 + (longlong)ppppuVar7 & local_e8);
        local_1c8[-1] = (ulonglong ***)ppppuVar7;
      }
      local_1b8 = (ulonglong ***)ppppuVar16;
      pppuStack_1b0 = (ulonglong ***)ppppuVar11;
      FUN_1802079d0(local_1c8,param_1,(longlong)ppppuVar16 + local_a0);
    }
LAB_180057b3f:
    local_1e8[0] = local_61;
    local_1e0 = 0;
    local_1a0._1_7_ = (undefined7)((ulonglong)local_80 >> 8);
    local_1a0._0_1_ = 5;
    local_198 = 3;
    local_3c8 = local_c0;
    pppuStack_3c0 = local_70;
    pppuStack_3d0 = local_80;
    uVar28 = 1;
    FUN_1800b8f52(&DAT_1802a1eec,&DAT_1802716d4,0x17,8,&DAT_1802a1ef4);
    local_3d8 = (undefined8 *****)CONCAT17(local_61,CONCAT34(uRam00000001802a1ef0,DAT_1802a1eec));
    puVar8 = (undefined1 *)FUN_18005a490(local_1e8,&local_3d8);
    uVar1 = *puVar8;
    *puVar8 = (undefined1)local_1a0;
    local_1a0 = CONCAT71(local_1a0._1_7_,uVar1);
    uVar10 = *(undefined8 *)(puVar8 + 8);
    *(undefined8 *)(puVar8 + 8) = local_198;
    local_198 = uVar10;
    FUN_18007ff50(&local_198);
    plVar9 = (longlong *)FUN_180111340();
    plVar24 = (longlong *)*plVar9;
    local_3e0 = (longlong *)plVar9[1];
    uVar27 = extraout_XMM0_Da;
    if (plVar24 != local_3e0) {
      do {
        local_180 = CONCAT31(local_180._1_3_,local_61);
        uStack_178 = 0;
        cVar6 = (**(code **)(*(longlong *)*plVar24 + 0x20))();
        local_188 = local_80;
        if (cVar6 != '\0') {
          local_188 = (ulonglong ***)(ulonglong)*(byte *)(*plVar24 + 0x4c);
        }
        local_190._1_7_ = (undefined7)((ulonglong)local_80 >> 8);
        local_190._0_1_ = 4;
        local_3c8 = local_c0;
        pppuStack_3c0 = local_70;
        pppuStack_3d0 = local_80;
        FUN_1800b8f52(&DAT_1802a1ef8,&DAT_180271709,0x1e,8,&DAT_1802a1f00);
        local_3d8 = (undefined8 *****)CONCAT17(local_61,CONCAT34(uRam00000001802a1efc,DAT_1802a1ef8));
        puVar8 = (undefined1 *)FUN_18005a490(&local_180,&local_3d8);
        uVar1 = *puVar8;
        *puVar8 = (undefined1)local_190;
        local_190 = CONCAT71(local_190._1_7_,uVar1);
        pppuVar3 = *(ulonglong ****)(puVar8 + 8);
        *(ulonglong ****)(puVar8 + 8) = local_188;
        local_188 = pppuVar3;
        FUN_18007ff50(&local_188);
        local_3d8 = (undefined8 *****)0x0;
        pppuStack_3d0 = (ulonglong ***)0x0;
        FUN_18007fb00(&local_1d8,&local_3d8,0,1);
        plVar9 = *(longlong **)(*plVar24 + 0x50);
        local_3f0 = *(longlong **)(*plVar24 + 0x58);
        local_3e8 = plVar24;
        if (plVar9 != local_3f0) {
          do {
            lVar20 = *plVar9;
            iVar2 = *(int *)(lVar20 + 8);
            if (iVar2 < 4) {
              if (iVar2 < 2) {
                if (iVar2 == 1) {
LAB_180057fa0:
                  local_98 = local_268;
                  apuStack_90[0] = (undefined8 *)(longlong)*(int *)(lVar20 + 0x90);
                }
                else if (iVar2 == 0) {
                  local_98 = local_270;
                  apuStack_90[0] = (undefined8 *)(ulonglong)*(byte *)(lVar20 + 0x90);
                }
                else {
LAB_180058559:
                  local_98 = (undefined8 ****)CONCAT71(local_98._1_7_,local_61);
                  apuStack_90[0] = (undefined8 *)0x0;
                }
              }
              else if (iVar2 == 3) {
                apuStack_90[0] = (undefined8 *)0x0;
                local_98 = (undefined8 ****)(ulonglong)local_62;
                apuStack_90[0] =
                     (undefined8 *)
                     FUN_1800813f0((longlong)*(int *)(lVar20 + 0x90) * 0x20 + *(longlong *)(lVar20 + 0x98));
              }
              else {
                local_98 = local_c0;
                apuStack_90[0] = (undefined8 *)(double)*(float *)(lVar20 + 0x90);
              }
            }
            else if (iVar2 < 6) {
              if (iVar2 != 4) goto LAB_180057fa0;
              local_3d8 = (undefined8 *****)local_c0;
              pppuStack_3d0 = (ulonglong ***)(double)*(float *)(lVar20 + 0x90);
              local_3c8 = (undefined8 *****)0x0;
              local_3b8 = (double)*(float *)(lVar20 + 0x94);
              pppuStack_3c0 = (ulonglong ***)(ulonglong)local_64;
              local_3b0 = 0;
              local_3a0 = (double)*(float *)(lVar20 + 0x98);
              uStack_3a8 = (ulonglong)local_64;
              local_398 = 0;
              local_388 = (double)*(float *)(lVar20 + 0x9c);
              uStack_390 = (ulonglong)local_64;
              local_380 = 0;
              local_160 = local_378;
              local_168 = (undefined8 ****)&local_3d8;
              FUN_18007fb00(&local_98,&local_168,0,local_63);
              FUN_18007ff50(&local_388,uStack_390 & 0xff);
              FUN_18007ff50(&local_3a0,uStack_3a8 & 0xff);
              FUN_18007ff50(&local_3b8,(ulonglong)pppuStack_3c0 & 0xff);
              FUN_18007ff50(&pppuStack_3d0,(ulonglong)local_3d8 & 0xff);
            }
            else if (iVar2 == 6) {
              apuStack_90[0] = (undefined8 *)0x0;
              local_98 = (undefined8 ****)(ulonglong)local_62;
              apuStack_90[0] = (undefined8 *)FUN_1800813f0(lVar20 + 0x90);
            }
            else {
              if (iVar2 != 7) goto LAB_180058559;
              local_3d8 = (undefined8 *****)0x0;
              pppuStack_3d0 = (ulonglong ***)0x0;
              FUN_18007fb00(&local_98,&local_3d8,0,local_63);
              puVar4 = *(undefined8 **)(lVar20 + 0x98);
              for (puVar25 = *(undefined8 **)(lVar20 + 0x90); puVar25 != puVar4; puVar25 = puVar25 + 8) {
                puStack_130 = (undefined8 *)0x0;
                local_138 = (undefined8 ****)(ulonglong)local_62;
                puStack_130 = (undefined8 *)FUN_1801d61c8(local_b0);
                *puStack_130 = 0;
                puStack_130[1] = 0;
                puStack_130[2] = local_270;
                puStack_130[3] = local_70;
                *(undefined4 *)puStack_130 = 0x6d6f7266;
                local_128 = 0;
                local_118 = (ulonglong *)0x0;
                pppuStack_120 = (ulonglong ***)(ulonglong)local_62;
                puVar22 = (ulonglong *)FUN_1801d61c8(local_b0);
                puVar22[2] = 0;
                puVar22[3] = 0;
                *puVar22 = 0;
                puVar22[1] = 0;
                uVar17 = puVar25[2];
                puVar21 = puVar25;
                if (local_70 < (ulonglong ****)puVar25[3]) {
                  puVar21 = (undefined8 *)*puVar25;
                }
                if ((longlong)uVar17 < (longlong)local_80) {
                  local_c8 = puVar22;
                  FUN_180002ac0();
                }
                if (uVar17 < local_d0) {
                  puVar22[2] = uVar17;
                  puVar22[3] = (ulonglong)local_70;
                  uVar27 = *(undefined4 *)((longlong)puVar21 + 4);
                  uVar28 = *(undefined4 *)(puVar21 + 1);
                  uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
                  *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
                  *(undefined4 *)((longlong)puVar22 + 4) = uVar27;
                  *(undefined4 *)(puVar22 + 1) = uVar28;
                  *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
                }
                else {
                  ppppuVar11 = (ulonglong ****)((ulonglong)local_70 | uVar17);
                  ppppuVar16 = (ulonglong ****)0x16;
                  if ((ulonglong ****)0x16 < ppppuVar11) {
                    ppppuVar16 = ppppuVar11;
                  }
                  if (local_d8 < ppppuVar11) {
                    local_c8 = puVar22;
                    lVar20 = FUN_1801d61c8(local_b8 + (longlong)ppppuVar16);
                    uVar15 = local_f8 + lVar20 & local_e8;
                    *(longlong *)(uVar15 - 8) = lVar20;
                  }
                  else {
                    local_c8 = puVar22;
                    uVar15 = FUN_1801d61c8(local_a0 + (longlong)ppppuVar16);
                  }
                  puVar22 = local_c8;
                  *local_c8 = uVar15;
                  local_c8[2] = uVar17;
                  local_c8[3] = (ulonglong)ppppuVar16;
                  FUN_1802079d0(uVar15,puVar21,uVar17 + local_a0);
                }
                local_110 = 0;
                local_3d8 = &local_138;
                pppuStack_3d0 = (ulonglong ***)&local_108;
                local_200 = &local_168;
                local_65 = 1;
                local_118 = puVar22;
                FUN_18007fb00(local_200,&local_3d8,1,local_63);
                local_158 = (undefined8 *)0x0;
                puStack_230 = (undefined8 *)0x0;
                local_238 = (undefined8 ****)(ulonglong)local_62;
                puStack_230 = (undefined8 *)FUN_1801d61c8(local_b0);
                *puStack_230 = 0;
                puStack_230[1] = 0;
                puStack_230[2] = local_260;
                puStack_230[3] = local_70;
                *(undefined2 *)puStack_230 = 0x6f74;
                local_228 = 0;
                local_218 = (ulonglong *)0x0;
                uStack_220 = (ulonglong)local_62;
                puVar22 = (ulonglong *)FUN_1801d61c8(local_b0);
                puVar22[2] = 0;
                puVar22[3] = 0;
                *puVar22 = 0;
                puVar22[1] = 0;
                uVar17 = puVar25[6];
                if (local_70 < (ulonglong ****)puVar25[7]) {
                  puVar21 = (undefined8 *)puVar25[4];
                }
                else {
                  puVar21 = puVar25 + 4;
                }
                if ((longlong)uVar17 < (longlong)local_80) {
                  local_c8 = puVar22;
                  FUN_180002ac0();
                }
                if (uVar17 < local_d0) {
                  puVar22[2] = uVar17;
                  puVar22[3] = (ulonglong)local_70;
                  uVar27 = *(undefined4 *)((longlong)puVar21 + 4);
                  uVar28 = *(undefined4 *)(puVar21 + 1);
                  uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
                  *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
                  *(undefined4 *)((longlong)puVar22 + 4) = uVar27;
                  *(undefined4 *)(puVar22 + 1) = uVar28;
                  *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
                }
                else {
                  ppppuVar11 = (ulonglong ****)((ulonglong)local_70 | uVar17);
                  ppppuVar16 = (ulonglong ****)0x16;
                  if ((ulonglong ****)0x16 < ppppuVar11) {
                    ppppuVar16 = ppppuVar11;
                  }
                  if (local_d8 < ppppuVar11) {
                    local_c8 = puVar22;
                    lVar20 = FUN_1801d61c8(local_b8 + (longlong)ppppuVar16);
                    uVar15 = local_f8 + lVar20 & local_e8;
                    *(longlong *)(uVar15 - 8) = lVar20;
                  }
                  else {
                    local_c8 = puVar22;
                    uVar15 = FUN_1801d61c8(local_a0 + (longlong)ppppuVar16);
                  }
                  puVar22 = local_c8;
                  *local_c8 = uVar15;
                  local_c8[2] = uVar17;
                  local_c8[3] = (ulonglong)ppppuVar16;
                  FUN_1802079d0(uVar15,puVar21,uVar17 + local_a0);
                }
                local_210 = 0;
                local_3d8 = &local_238;
                pppuStack_3d0 = (ulonglong ***)&local_208;
                local_71 = 1;
                local_218 = puVar22;
                FUN_18007fb00(&local_150,&local_3d8,1,local_63);
                local_140 = 0;
                local_448 = &local_168;
                local_440 = &local_138;
                FUN_18007fb00(&local_1f8,&local_448,1,local_63);
                if ((char)local_98 < '\x02') {
                  if ((char)local_98 != '\0') {
LAB_180058e27:
                    bVar19 = (char)local_98 - 1;
                    puVar18 = &DAT_1802a20f4;
                    FUN_1800b8f52(&DAT_1802a20f4,&DAT_180271f17,0x1b,7,&DAT_1802a20fc);
                    if (bVar19 < 9) {
                      FUN_1800b97b0(&DAT_1802a3530);
                      puVar18 = *(undefined **)(&DAT_1802a3530 + (ulonglong)bVar19 * 8);
                    }
                    local_3f8 = puVar18;
                    FUN_1800b8f52(&DAT_1802a2048,&DAT_180271cb2,0x1e,0x1d,&DAT_1802a2068);
                    FUN_180081980(local_418,&DAT_1802a2048,&local_3f8);
                    FUN_1800815b0(&local_3d8,0x134,local_418,&local_98);
                    FUN_1801dd110(&local_3d8,&DAT_180253620);
                  }
                  local_98 = (undefined8 ****)CONCAT71(local_98._1_7_,local_63);
                  apuStack_90[0] = (undefined8 *)FUN_1801d61c8(0x18);
                  *apuStack_90[0] = 0;
                  apuStack_90[0][1] = 0;
                  apuStack_90[0][2] = 0;
                  puVar14 = (undefined4 *)apuStack_90[0][1];
                  if (puVar14 == (undefined4 *)apuStack_90[0][2]) goto LAB_18005845a;
LAB_180058497:
                  *puVar14 = local_1f8;
                  puVar14[1] = uStack_1f4;
                  puVar14[2] = (undefined4)uStack_1f0;
                  puVar14[3] = uStack_1f0._4_4_;
                  local_1f8 = CONCAT31(local_1f8._1_3_,local_61);
                  uStack_1f0 = 0;
                  apuStack_90[0][1] = apuStack_90[0][1] + 0x10;
                  uVar1 = local_61;
                }
                else {
                  if ((char)local_98 != '\x02') goto LAB_180058e27;
                  puVar14 = (undefined4 *)apuStack_90[0][1];
                  if (puVar14 != (undefined4 *)apuStack_90[0][2]) goto LAB_180058497;
LAB_18005845a:
                  FUN_180080af0(apuStack_90[0],puVar14,&local_1f8);
                  uVar1 = (undefined1)local_1f8;
                }
                FUN_18007ff50(&uStack_1f0,uVar1);
                FUN_18007ff50(local_148,local_150);
                FUN_18007ff50(&local_160,(ulonglong)local_168 & 0xff);
                FUN_18007ff50(&local_218,uStack_220 & 0xff);
                FUN_18007ff50(&puStack_230,(ulonglong)local_238 & 0xff);
                FUN_18007ff50(&local_118,(ulonglong)pppuStack_120 & 0xff);
                FUN_18007ff50(&puStack_130,(ulonglong)local_138 & 0xff);
              }
            }
            lVar20 = *plVar9;
            local_2b8 = 0;
            pppuStack_2b0 = (ulonglong ***)0x0;
            local_2c8 = 0;
            uStack_2c0 = 0;
            uVar17 = *(ulonglong *)(lVar20 + 0x20);
            if (local_70 < *(ulonglong *****)(lVar20 + 0x28)) {
              puVar22 = *(ulonglong **)(lVar20 + 0x10);
            }
            else {
              puVar22 = (ulonglong *)(lVar20 + 0x10);
            }
            if ((longlong)uVar17 < (longlong)local_80) {
              FUN_180002ac0();
            }
            if (uVar17 < local_d0) {
              pppuStack_2b0 = local_70;
              local_2c8 = *puVar22;
              uStack_2c0 = puVar22[1];
              local_2b8 = uVar17;
            }
            else {
              ppppuVar11 = (ulonglong ****)((ulonglong)local_70 | uVar17);
              ppppuVar16 = (ulonglong ****)0x16;
              if ((ulonglong ****)0x16 < ppppuVar11) {
                ppppuVar16 = ppppuVar11;
              }
              if (local_d8 < ppppuVar11) {
                lVar20 = FUN_1801d61c8(local_b8 + (longlong)ppppuVar16);
                local_2c8 = local_f8 + lVar20 & local_e8;
                *(longlong *)(local_2c8 - 8) = lVar20;
              }
              else {
                local_2c8 = FUN_1801d61c8(local_a0 + (longlong)ppppuVar16);
              }
              local_2b8 = uVar17;
              pppuStack_2b0 = (ulonglong ***)ppppuVar16;
              FUN_1802079d0(local_2c8,puVar22,uVar17 + local_a0);
            }
            puVar8 = (undefined1 *)FUN_18005a490(&local_1d8,&local_2c8);
            uVar1 = *puVar8;
            *puVar8 = (char)local_98;
            local_98 = (undefined8 ****)CONCAT71(local_98._1_7_,uVar1);
            puVar25 = *(undefined8 **)(puVar8 + 8);
            *(undefined8 **)(puVar8 + 8) = apuStack_90[0];
            apuStack_90[0] = puVar25;
            FUN_18007ff50(apuStack_90);
            plVar9 = plVar9 + 1;
          } while (plVar9 != local_3f0);
        }
        local_258 = local_1d8;
        uStack_254 = uStack_1d4;
        uStack_250 = uStack_1d0;
        local_1d8 = CONCAT31(local_1d8._1_3_,local_61);
        uStack_1d0 = 0;
        pppuStack_3d0 = local_80;
        local_3c8 = (undefined8 ****)0x8;
        pppuStack_3c0 = local_70;
        local_3d8 = (undefined8 *****)0x73676e6974746573;
        puVar8 = (undefined1 *)FUN_18005a490(&local_180,&local_3d8);
        uVar1 = *puVar8;
        *puVar8 = (undefined1)local_258;
        local_258 = CONCAT31(local_258._1_3_,uVar1);
        uVar10 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uStack_250;
        uStack_250 = uVar10;
        FUN_18007ff50(&uStack_250);
        plVar24 = local_3e8;
        local_248 = local_180;
        uStack_244 = uStack_17c;
        uStack_240 = uStack_178;
        local_180 = CONCAT31(local_180._1_3_,local_61);
        uStack_178 = 0;
        local_3c8 = local_c0;
        pppuStack_3c0 = local_70;
        pppuStack_3d0 = local_80;
        uVar28 = 1;
        FUN_1800b8f52(&DAT_1802a1f14,&DAT_180271781,0x1f,8,&DAT_1802a1f1c);
        local_3d8 = (undefined8 *****)CONCAT17(local_61,CONCAT34(uRam00000001802a1f18,DAT_1802a1f14));
        uVar10 = FUN_18005a490(local_1e8,&local_3d8);
        lVar20 = *plVar24;
        local_298 = 0;
        pppuStack_290 = (ulonglong ***)0x0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        uVar17 = *(ulonglong *)(lVar20 + 0x18);
        if (local_70 < *(ulonglong *****)(lVar20 + 0x20)) {
          puVar22 = *(ulonglong **)(lVar20 + 8);
        }
        else {
          puVar22 = (ulonglong *)(lVar20 + 8);
        }
        if ((longlong)uVar17 < (longlong)local_80) {
          FUN_180002ac0();
        }
        if (uVar17 < local_d0) {
          pppuStack_290 = local_70;
          local_2a8 = *puVar22;
          uStack_2a0 = puVar22[1];
          local_298 = uVar17;
        }
        else {
          ppppuVar11 = (ulonglong ****)((ulonglong)local_70 | uVar17);
          ppppuVar16 = (ulonglong ****)0x16;
          if ((ulonglong ****)0x16 < ppppuVar11) {
            ppppuVar16 = ppppuVar11;
          }
          if (local_d8 < ppppuVar11) {
            lVar20 = FUN_1801d61c8(local_b8 + (longlong)ppppuVar16);
            local_2a8 = local_f8 + lVar20 & local_e8;
            *(longlong *)(local_2a8 - 8) = lVar20;
          }
          else {
            local_2a8 = FUN_1801d61c8(local_a0 + (longlong)ppppuVar16);
          }
          local_298 = uVar17;
          pppuStack_290 = (ulonglong ***)ppppuVar16;
          FUN_1802079d0(local_2a8,puVar22,uVar17 + local_a0);
        }
        puVar8 = (undefined1 *)FUN_18005a490(uVar10,&local_2a8);
        uVar1 = *puVar8;
        *puVar8 = (undefined1)local_248;
        local_248 = CONCAT31(local_248._1_3_,uVar1);
        uVar10 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uStack_240;
        uStack_240 = uVar10;
        FUN_18007ff50(&uStack_240);
        FUN_18007ff50(&uStack_1d0,(undefined1)local_1d8);
        uVar27 = FUN_18007ff50(&uStack_178,(undefined1)local_180);
        plVar24 = plVar24 + 1;
      } while (plVar24 != local_3e0);
    }
    FUN_180050a80(uVar27,&local_168,&local_1c8);
    pppppuVar12 = &local_168;
    if (local_c0 < (undefined8 *****)CONCAT71(uStack_14f,local_150)) {
      pppppuVar12 = (undefined8 *****)local_168;
    }
    uVar15 = CONCAT44(uVar28,1);
    FUN_18008a6a0(&local_3d8,pppppuVar12,local_fc,0x40,uVar15);
    bVar26 = (*(uint *)((longlong)&local_3c8 + (longlong)*(int *)((longlong)local_3d8 + 4)) & 6) == local_a4;
    uVar17 = CONCAT71((int7)((ulonglong)pppppuVar12 >> 8),bVar26);
    if (bVar26) {
      FUN_18005a9f0(local_1e8,&local_138,local_fc,0x20,uVar15 & 0xffffffffffffff00,local_a4);
      pppppuVar12 = &local_138;
      if (local_70 < pppuStack_120) {
        pppppuVar12 = (undefined8 *****)local_138;
      }
      FUN_18008cbd0(&local_3d8,pppppuVar12,local_128);
      if (local_70 < pppuStack_120) {
        uVar15 = local_a0 + (longlong)pppuStack_120;
        pppppuVar12 = (undefined8 *****)local_138;
        if (local_e0 < uVar15) {
          pppppuVar12 = (undefined8 *****)local_138[-1];
          if (local_b0 <= (ulonglong)((longlong)local_138 + (local_f0 - (longlong)pppppuVar12))) goto LAB_180058f13;
          uVar15 = (longlong)pppuStack_120 + local_b8;
        }
        thunk_FUN_1801f42e0(pppppuVar12,uVar15);
      }
      pppuVar3 = local_1b8;
      if ((ulonglong *****)local_170 != &local_1c8) {
        pppppuVar13 = &local_1c8;
        if (local_70 < pppuStack_1b0) {
          pppppuVar13 = (ulonglong *****)local_1c8;
        }
        if (local_170[3] < local_1b8) {
          FUN_18007f460(local_170,local_1b8);
        }
        else {
          pppppuVar23 = (ulonglong *****)local_170;
          if (local_70 < local_170[3]) {
            pppppuVar23 = (ulonglong *****)*local_170;
          }
          local_170[2] = local_1b8;
          FUN_1802079d0(pppppuVar23,pppppuVar13,local_1b8);
          *(undefined1 *)((longlong)pppppuVar23 + (longlong)pppuVar3) = local_61;
        }
      }
      FUN_180053b20(local_170);
    }
    else {
      local_238 = local_168;
      if ((undefined8 *****)CONCAT71(uStack_14f,local_150) <= local_c0) {
        local_238 = &local_168;
      }
      puStack_230 = local_158;
      uVar27 = __std_fs_code_page();
      FUN_180072fc0(&local_138,uVar27,&local_238,local_418);
      FUN_1800b8f52(&DAT_1802a1f20,&DAT_1802717c4,0x1e,0x10,&DAT_1802a1f30);
      local_438 = &DAT_1802a1f20;
      local_430 = local_70;
      FUN_1800b8f52(&DAT_1802a1f34,&DAT_180271808,0x10,7,&DAT_1802a1f3c);
      local_428 = &DAT_1802a1f34;
      local_420 = 6;
      FUN_18005a760(4,&local_428,&local_438,&local_138);
      if (local_70 < pppuStack_120) {
        uVar15 = local_a0 + (longlong)pppuStack_120;
        pppppuVar12 = (undefined8 *****)local_138;
        if (local_e0 < uVar15) {
          pppppuVar12 = (undefined8 *****)local_138[-1];
          if (local_b0 <= (ulonglong)((longlong)local_138 + (local_f0 - (longlong)pppppuVar12))) goto LAB_180058f13;
          uVar15 = (longlong)pppuStack_120 + local_b8;
        }
        thunk_FUN_1801f42e0(pppppuVar12,uVar15);
      }
    }
    *(undefined ***)((longlong)&local_3d8 + (longlong)*(int *)((longlong)local_3d8 + 4)) = &PTR_LAB_18020e7e0;
    *(int *)((longlong)&local_3e0 + (longlong)*(int *)((longlong)local_3d8 + 4) + 4) =
         *(int *)((longlong)local_3d8 + 4) + -0xa8;
    FUN_180078d60(&pppuStack_3d0);
    local_330[0] = &PTR_FUN_18020e8e8;
    std::ios_base::_Ios_base_dtor((ios_base *)local_330);
    if (local_c0 < (undefined8 *****)CONCAT71(uStack_14f,local_150)) {
      lVar20 = (longlong)CONCAT71(uStack_14f,local_150) << ((byte)local_a0 & 0x3f);
      uVar15 = local_260 + lVar20;
      pppppuVar12 = (undefined8 *****)local_168;
      if (local_e0 < uVar15) {
        pppppuVar12 = (undefined8 *****)local_168[-1];
        if (local_b0 <= (ulonglong)((longlong)local_168 + (local_f0 - (longlong)pppppuVar12))) goto LAB_180058f13;
        uVar15 = lVar20 + 0x29;
      }
      thunk_FUN_1801f42e0(pppppuVar12,uVar15);
    }
    FUN_18007ff50(&local_1e0,local_1e8[0]);
  }
  else {
    FUN_180050650(&local_1c8);
    if (local_1b8 != local_80) goto LAB_180057b3f;
LAB_180057ab9:
    uVar17 = 0;
  }
  if (local_70 < pppuStack_1b0) {
    uVar15 = local_a0 + (longlong)pppuStack_1b0;
    pppppuVar13 = (ulonglong *****)local_1c8;
    if (local_e0 < uVar15) {
      pppppuVar13 = (ulonglong *****)local_1c8[-1];
      if (local_b0 <= (ulonglong)((longlong)local_1c8 + (local_f0 - (longlong)pppppuVar13))) {
LAB_180058f13:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_a4,(uintptr_t)local_80);
      }
      uVar15 = (longlong)pppuStack_1b0 + local_b8;
    }
    thunk_FUN_1801f42e0(pppppuVar13,uVar15);
  }
  return uVar17 & 0xffffffff;
}



void Unwind_180058f40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x340);
  return;
}



void Unwind_180058f90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x340);
  return;
}



void Unwind_180058fe0(void)

{
  Unwind_1801dd394();
}



void Unwind_180059010(void)

{
  Unwind_1801dd394();
}



void Unwind_180059040(void)

{
  Unwind_1801dd394();
}



void Unwind_180059070(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x2d8);
  return;
}



void Unwind_1800590c0(undefined8 param_1,longlong param_2)

{
  FUN_180053dc0(param_2 + 0xa0);
  return;
}



void Unwind_180059100(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x310);
  return;
}



void Unwind_180059150(void)

{
  Unwind_1801dd394();
}



void Unwind_180059180(void)

{
  Unwind_1801dd394();
}



void Unwind_1800591b0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800591e0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x220);
  return;
}



void Unwind_180059230(void)

{
  Unwind_1801dd394();
}



void Unwind_180059260(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x2e8);
  return;
}



void Unwind_1800592b0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800592e0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x230);
  return;
}



void Unwind_180059330(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x3e0);
  return;
}



void Unwind_180059380(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x3e0);
  return;
}



void Unwind_1800593d0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0xe8);
  FUN_18005a440(param_2 + 0xd0);
  FUN_18005a440(param_2 + 0xb8);
  FUN_18005a440(param_2 + 0xa0);
  return;
}



void Unwind_180059430(void)

{
  Unwind_1801dd394();
}



void Unwind_180059460(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  uVar1 = *(ulonglong *)(param_2 + 0x78);
  if (*(ulonglong *)(param_2 + 0x408) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x60);
    uVar4 = *(longlong *)(param_2 + 0x3d8) + uVar1;
    lVar3 = lVar2;
    if (*(ulonglong *)(param_2 + 0x398) < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (*(ulonglong *)(param_2 + 0x3c8) <= (ulonglong)((lVar2 + *(longlong *)(param_2 + 0x388)) - lVar3)) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,*(uint *)(param_2 + 0x3d4),
                       *(uintptr_t *)(param_2 + 0x3f8));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0x3c0);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x3f8);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x408);
  *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_2 + 0x417);
  return;
}



void Unwind_180059530(void)

{
  Unwind_1801dd394();
}



void Unwind_180059560(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x240);
  *(longlong *)(param_2 + 0x1f8) = param_2 + 0x240;
  return;
}



void Unwind_1800595b0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800595e0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x340);
  *(longlong *)(param_2 + 0x200) = param_2 + 0x340;
  return;
}



void Unwind_180059630(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x3e0);
  return;
}



void Unwind_180059680(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x3b0),*(undefined8 *)(param_2 + 0x3c8));
  return;
}



void Unwind_1800596d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x3b0),*(undefined8 *)(param_2 + 0x3c8));
  return;
}



void Unwind_180059720(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x280);
  return;
}



void Unwind_180059770(void)

{
  Unwind_1801dd394();
}



void Unwind_1800597a0(void)

{
  Unwind_1801dd394();
}



void Unwind_1800597d0(void)

{
  Unwind_1801dd394();
}



void Unwind_180059800(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x358);
  *(longlong *)(param_2 + 0x200) = param_2 + 0x358;
  return;
}



void Unwind_180059850(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 600);
  *(longlong *)(param_2 + 0x1f8) = param_2 + 600;
  return;
}



void Unwind_1800598a0(undefined8 param_1,longlong param_2)

{
  FUN_18007ff50(param_2 + 0x330,*(undefined1 *)(param_2 + 0x328));
  FUN_18007ff50(param_2 + 0x318,*(undefined1 *)(param_2 + 0x310));
  *(undefined1 *)(param_2 + 0x407) = 0;
  return;
}



void Unwind_180059910(undefined8 param_1,longlong param_2)

{
  longlong lVar1;

  for (lVar1 = *(longlong *)(param_2 + 0x1f8); param_2 + 0x240 != lVar1; lVar1 = lVar1 + -0x18) {
    FUN_18007ff50(lVar1 + -0x10,*(undefined1 *)(lVar1 + -0x18));
  }
  *(longlong *)(param_2 + 0x278) = param_2 + 0x328;
  *(undefined1 *)(param_2 + 0x413) = 1;
  return;
}



void Unwind_1800599a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;

  for (lVar1 = *(longlong *)(param_2 + 0x200); param_2 + 0x340 != lVar1; lVar1 = lVar1 + -0x18) {
    FUN_18007ff50(lVar1 + -0x10,*(undefined1 *)(lVar1 + -0x18));
  }
  *(longlong *)(param_2 + 0x1f0) = param_2 + 0x310;
  *(undefined1 *)(param_2 + 0x406) = 1;
  return;
}



void Unwind_180059a30(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;

  uVar1 = *(undefined1 *)(param_2 + 0x407);
  FUN_18007ff50(param_2 + 0x260,*(undefined1 *)(param_2 + 600));
  FUN_18007ff50(param_2 + 0x248,*(undefined1 *)(param_2 + 0x240));
  *(longlong *)(param_2 + 0x278) = param_2 + 0x328;
  *(undefined1 *)(param_2 + 0x413) = uVar1;
  return;
}



void Unwind_180059ab0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;

  uVar1 = *(undefined1 *)(param_2 + 0x413);
  uVar2 = *(undefined8 *)(param_2 + 0x278);
  FUN_18007ff50(param_2 + 0x360,*(undefined1 *)(param_2 + 0x358));
  FUN_18007ff50(param_2 + 0x348,*(undefined1 *)(param_2 + 0x340));
  *(undefined8 *)(param_2 + 0x1f0) = uVar2;
  *(undefined1 *)(param_2 + 0x406) = uVar1;
  return;
}



void Unwind_180059b30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;

  lVar2 = *(longlong *)(param_2 + 0x1f0);
  if ((param_2 + 0x310 != *(longlong *)(param_2 + 0x1f0) & *(byte *)(param_2 + 0x406)) == 1) {
    do {
      lVar1 = lVar2 + -0x18;
      FUN_18007ff50(lVar2 + -0x10,*(undefined1 *)(lVar2 + -0x18));
      lVar2 = lVar1;
    } while (lVar1 != param_2 + 0x310);
  }
  FUN_18005a440(param_2 + 0x3e0);
  return;
}



void Unwind_180059bb0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x2a0);
  return;
}



void Unwind_180059c00(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x2f8);
  return;
}



void Unwind_180059c50(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x290);
  FUN_180001ef0(param_2 + 0x2b0);
  return;
}



byte FUN_180059ca0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  byte local_f1;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  uint local_d4;
  uintptr_t local_c8;
  ulonglong local_c0;
  size_t local_b8;
  undefined8 *local_b0;
  ulonglong local_a8;
  undefined8 ***local_a0;
  ulonglong local_98;
  undefined8 ***local_90;
  longlong local_88;
  undefined8 ***local_80;
  undefined8 *local_78;
  ulonglong *local_70;
  ulonglong local_68;
  undefined8 ***local_60 [3];
  ulonglong local_48;

  local_e8 = 0x16882c38d0a108a2;
  local_f0 = 0xb9e2db493ddebbd7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_e8 ^ 0xbfdce488d904e7f9;
            uVar3 = local_e8 ^ local_f0;
            local_f0 = local_f0 ^ 0xbfdce488d904e7f9;
            local_e8 = uVar4;
            if ((longlong)uVar3 < -0x31c322dd5996f300) break;
            if ((longlong)uVar3 < 0x7f759f3d3988836) {
              if (uVar3 == 0xce3cdd22a6690d00) {
                local_e8 = 0xcc4c8c0b1398b9e3;
                if (local_b8 != local_c8) {
                  local_e8 = 0xa5f433c212e345d0;
                }
                local_f0 = 0xb88b1af729395c36;
              }
              else if (uVar3 == 0xd7e6f0dc474d8132) {
                local_80 = (undefined8 ***)local_90[-1];
                local_e8 = 0xf5186c9ba6430e2d;
                if (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)local_80))) {
                  local_e8 = 0xc6a7937aa5542298;
                }
                local_f0 = 0x42976244320d08be;
              }
              else if (uVar3 == 0xf5f23fcb81d17e43) {
                local_a0 = local_60[0];
                local_88 = local_98 * 2;
                local_a8 = local_88 + 2;
                local_e8 = 0xb0b173023ae11976;
                if (local_a8 < 0x1000) {
                  local_e8 = 0xa2ad510724b2dde3;
                }
                local_f0 = 0x675783de7dac9844;
                local_90 = local_a0;
              }
            }
            else if ((longlong)uVar3 < 0x72f84cd63c6a2dc5) {
              if (uVar3 == 0x7f759f3d3988836) {
                local_e8 = 0x424f0074ac5973ef;
                if (local_f1 == 0) {
                  local_e8 = 0x39d647222b2ae2a9;
                }
                local_f0 = 0xfb3a2b6f699ba5c4;
              }
              else if (uVar3 == 0x1d7f29353bda19e6) {
                uVar2 = memcmp(local_b0,local_78,local_b8);
                local_e8 = 0x5a407306c5b3d249;
                if (uVar2 != local_d4) {
                  local_e8 = 0xec6b89b7bda370f1;
                }
                local_f0 = 0x2e87e5faff12379c;
              }
            }
            else if (uVar3 == 0x72f84cd63c6a2dc5) {
              FUN_1800b8f52(&DAT_1802a1ee0,&DAT_18027169d,0x12,8,&DAT_1802a1ee8);
              FUN_18007f460(param_1,local_e0);
              local_e8 = 0xaf9419d689ca843b;
              local_f0 = 0x1c14d898de003820;
            }
            else if (uVar3 == 0x74c796fc3aa1e5d5) {
              local_e8 = 0xbd3c64cdb12eb6a0;
              if (local_e0 <= local_68) {
                local_e8 = 0xda6ee752635efd4;
              }
              local_f0 = 0xcfc4281b8d449b65;
            }
          }
          if (-0x468ad4e43a3d29d6 < (longlong)uVar3) break;
          if ((longlong)uVar3 < -0x4c7f3eb1a83543e5) {
            if (uVar3 == 0xaf6af771ed7fb375) {
              local_c0 = 0xf;
              local_c8 = 0;
              local_d4 = 0;
              local_e0 = 7;
              FUN_180050a80(0x112b3c3994d0daec,local_60);
              ppppuVar5 = local_60;
              if (7 < local_48) {
                ppppuVar5 = (undefined8 ****)local_60[0];
              }
              bVar1 = FUN_1801d98ec(ppppuVar5);
              local_f1 = bVar1 & 1;
              local_98 = local_48;
              local_e8 = 0x5f91daeb83dae7f8;
              if (local_48 < 8) {
                local_e8 = 0xad94bcd3d193118d;
              }
              local_f0 = 0xaa63e520020b99bb;
            }
            else if (uVar3 == 0x8430f13e97592a26) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_d4,local_c8);
            }
          }
          else if (uVar3 == 0xb380c14e57cabc1b) {
            FUN_180053b20(param_1);
            local_e8 = 0x53361081bc2f0a94;
            local_f0 = 0x91da7cccfe9e4df9;
          }
          else if (uVar3 == 0xb78f0edf944e0693) {
            local_a8 = local_88 + 0x29;
            local_e8 = 0xc4009d6104bd5a2e;
            local_f0 = 0x1fa4fb85da31f89;
            local_a0 = local_80;
          }
        }
        if (-0x3d1393b2bd4eb894 < (longlong)uVar3) break;
        if (uVar3 == 0xb9752b1bc5c2d62b) {
          local_b8 = param_2[2];
          local_78 = param_2;
          if (local_c0 < (ulonglong)param_2[3]) {
            local_78 = (undefined8 *)*param_2;
          }
          local_70 = param_1 + 2;
          local_68 = param_1[3];
          local_b0 = param_1;
          if (local_c0 < local_68) {
            local_b0 = (undefined8 *)*param_1;
          }
          local_e8 = 0xbc8f97869a1eeeea;
          if (param_1[2] != local_b8) {
            local_e8 = 0xb05f26e97ec6a487;
          }
          local_f0 = 0x72b34aa43c77e3ea;
        }
        else if (uVar3 == 0xc262c66eab7174b1) {
          *local_70 = local_e0;
          FUN_1800b8f52(&DAT_1802a1ee0,&DAT_18027169d,0x12,8,&DAT_1802a1ee8);
          *(uint *)((longlong)local_b0 + 3) = CONCAT31(uRam00000001802a1ee4,DAT_1802a1ee0._3_1_);
          *(undefined4 *)local_b0 = DAT_1802a1ee0;
          *(undefined1 *)((longlong)local_b0 + 7) = 0;
          local_e8 = 0x6d439a5d11ac7285;
          local_f0 = 0xdec35b134666ce9e;
        }
      }
      if (uVar3 != 0xc5fad2d9591e45a7) break;
      thunk_FUN_1801f42e0(local_a0,local_a8);
      local_e8 = 0xd3a881726a2f6569;
      local_f0 = 0xd45fd881b9b7ed5f;
    }
  } while (uVar3 != 0xc2ec6c4d42b1476d);
  return local_f1;
}



void FUN_18005a440(undefined1 *param_1)

{
  FUN_18007ff50(param_1 + 8,*param_1);
  return;
}



void Unwind_18005a470(void)

{
  Unwind_1801dd394();
}



longlong FUN_18005a490(char *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_a0 [56];
  longlong local_68 [4];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  char local_21;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_21 = '\x01';
  local_48 = 0x10;
  cVar2 = *param_1;
  local_30 = param_2;
  if (cVar2 == '\0') {
    *param_1 = '\x01';
    local_40 = (longlong *)FUN_1801d61c8(0x10,param_2,param_2);
    *local_40 = 0;
    local_40[1] = 0;
    lVar3 = FUN_1801d61c8(0x50);
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(lVar3 + 8) = lVar3;
    *(longlong *)(lVar3 + 0x10) = lVar3;
    *(char *)(lVar3 + 0x18) = local_21;
    *(char *)(lVar3 + 0x19) = local_21;
    *local_40 = lVar3;
    *(longlong **)(param_1 + 8) = local_40;
    cVar2 = *param_1;
  }
  if (cVar2 == local_21) {
    local_38 = 0;
    FUN_18008e730(*(undefined8 *)(param_1 + 8),local_68,local_30,&local_38);
    uVar1 = local_30[3];
    if (0xf < uVar1) {
      lVar3 = *local_30;
      uVar5 = uVar1 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar4) - 8U) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar5 = uVar1 + 0x28;
      }
      thunk_FUN_1801f42e0(lVar4,uVar5);
    }
    return local_68[0] + 0x40;
  }
  local_38 = FUN_180081b20(param_1);
  FUN_1800b8f52(&DAT_1802a231c,&DAT_18027241c,0x19,0x33,&DAT_1802a2350);
  FUN_18008e590(local_68,&DAT_1802a231c,&local_38);
  FUN_1800815b0(local_a0,0x131,local_68,param_1);
  FUN_1801dd110(local_a0,&DAT_180253620);
}



void Unwind_18005a6d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x60);
  return;
}



void Unwind_18005a700(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x98));
  return;
}



void Unwind_18005a730(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x80));
  return;
}



void FUN_18005a760(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  local_48 = 0xf;
  local_50 = 0;
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



void Unwind_18005a970(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_18005a9b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



undefined8 *
FUN_18005a9f0(undefined8 param_1,undefined8 *param_2,int param_3,undefined1 param_4,undefined1 param_5,
             undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined8 in_stack_fffffffffffffcd8;
  undefined4 uVar9;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined1 local_b0;
  undefined7 uStack_af;
  uintptr_t local_a0;
  ulonglong local_98;
  longlong *local_88;
  longlong *plStack_80;
  ulonglong local_78;
  uintptr_t local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined8 *local_50;
  uint local_48;
  int local_44;
  undefined8 local_40;

  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20);
  local_40 = 0xfffffffffffffffe;
  local_58 = 0xf;
  local_78 = 0x20;
  local_70 = 0;
  local_44 = 1;
  local_48 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  local_50 = param_2;
  plVar6 = (longlong *)FUN_1801d61c8(0x20);
  *(int *)(plVar6 + 1) = local_44;
  *(int *)((longlong)plVar6 + 0xc) = local_44;
  *plVar6 = (longlong)&PTR_FUN_18020e960;
  local_88 = plVar6 + 2;
  plVar6[2] = (longlong)&PTR_FUN_18020e980;
  plVar6[3] = (longlong)local_50;
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  plStack_80 = plVar6;
  local_68 = local_88;
  local_60 = plVar6;
  FUN_18008ed90(local_310,&local_88,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff,param_6);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == local_44) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_44) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (param_3 < 0) {
    FUN_18008f150(local_310,param_1,0,param_5,CONCAT44(uVar9,local_48),local_48);
  }
  else {
    FUN_18008f150(local_310,param_1,1,param_5,CONCAT44(uVar9,param_3),local_48);
  }
  puVar5 = local_50;
  if (local_58 < local_98) {
    lVar4 = CONCAT71(uStack_af,local_b0);
    uVar8 = local_98 + 1;
    lVar7 = lVar4;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar4 + -8);
      if (local_78 <= (lVar4 - lVar7) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_48,local_70);
      }
      uVar8 = local_98 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar7,uVar8);
  }
  local_a0 = local_70;
  local_98 = local_58;
  local_b0 = 0;
  if (local_308 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_308 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == local_44) {
      (**(code **)*local_308)(local_308);
      LOCK();
      piVar2 = (int *)((longlong)local_308 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == local_44) {
        (**(code **)(*local_308 + 8))(local_308);
      }
    }
  }
  return puVar5;
}



void Unwind_18005ad10(undefined8 param_1,longlong param_2)

{
  FUN_18008ef60(param_2 + 0x2e0);
  return;
}



void Unwind_18005ad50(undefined8 param_1,longlong param_2)

{
  FUN_180094350(param_2 + 0x38);
  return;
}



void Unwind_18005ad90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x2f8));
  return;
}



void FUN_18005add0(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

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
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 ***local_90;
  uintptr_t local_88;
  ulonglong local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  uintptr_t local_68;
  ulonglong local_60;
  uintptr_t local_58;
  ulonglong local_50;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_50 = 0xf;
  local_80 = 0x20;
  local_58 = 0;
  lVar1 = FUN_180183cf0();
  if (*(int *)(lVar1 + 0x58) <= param_1) {
    uVar2 = FUN_180183cf0();
    local_a0 = *param_3;
    local_98 = param_3[1];
    local_c8 = param_4;
    if (local_50 < (ulonglong)param_4[3]) {
      local_c8 = (undefined8 *)*param_4;
    }
    local_c0 = param_4[2];
    local_d8 = 0xc000000000000000;
    local_b8 = *param_5;
    local_d0 = 0xb000000000000010;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_50;
    if (local_50 < local_80 + local_98 + local_c0) {
      FUN_180002240(&local_78);
      local_68 = local_58;
    }
    local_b0 = 2;
    local_a8 = &local_d8;
    FUN_180003080(local_f0,&local_78,&local_a0,&local_b0,local_58);
    local_90 = &local_78;
    if (local_50 < local_60) {
      local_90 = local_78;
    }
    local_88 = local_68;
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    FUN_180184a80(uVar2,param_1,&local_e8,&local_90);
    if (local_50 < local_60) {
      uVar4 = local_60 + 1;
      ppppuVar3 = (undefined8 ****)local_78;
      if (0xfff < uVar4) {
        ppppuVar3 = (undefined8 ****)local_78[-1];
        if (local_80 <= (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar3))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_58);
        }
        uVar4 = local_60 + 0x28;
      }
      thunk_FUN_1801f42e0(ppppuVar3,uVar4);
    }
  }
  return;
}



void Unwind_18005b020(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_18005b060(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



undefined4 FUN_18005b0a0(char *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_b8 [56];
  undefined4 local_80 [14];
  undefined8 local_48 [4];
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  if (*param_1 != '\x01') {
    local_48[0] = FUN_180081b20(param_1);
    FUN_1800b8f52(&DAT_1802a2270,&DAT_180272281,0x16,0x19,&DAT_1802a228c);
    FUN_180088cc0(local_80,&DAT_1802a2270,local_48);
    FUN_180083d90(local_b8,0x132,local_80,param_1);
    FUN_1801dd110(local_b8,&DAT_180253620);
  }
  lVar2 = FUN_1800b82e0(*(undefined8 *)(param_1 + 8));
  cVar1 = *param_1;
  if (cVar1 < '\x02') {
    if (cVar1 != '\x01') {
LAB_18005b1b7:
      FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
      FUN_180057290(local_48,&DAT_1802a2258);
      FUN_1800886d0(local_80,0xd6,local_48,param_1);
      FUN_1801dd110(local_80,&DAT_180253660);
    }
    if (lVar2 != **(longlong **)(param_1 + 8)) {
      local_80[0] = 0;
      FUN_180087d30(&DAT_18020e920,lVar2 + 0x40,local_80);
      return local_80[0];
    }
  }
  else if ((cVar1 != '\x02') || (*(longlong *)(*(longlong *)(param_1 + 8) + 8) != 0)) goto LAB_18005b1b7;
  return *param_3;
}



void Unwind_18005b230(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void Unwind_18005b260(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



char * FUN_18005b290(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_c0 [56];
  undefined1 local_88 [56];
  undefined1 local_50 [36];
  undefined4 local_2c;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_2c = 0xd6;
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 < '\x01') {
    if (cVar1 == '\0') {
      FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
      FUN_180057290(local_50,&DAT_1802a2258);
      FUN_1800ac3e0(local_c0,local_2c,local_50,pcVar2);
      FUN_1801dd110(local_c0,&DAT_180253660);
    }
  }
  else {
    if (cVar1 == '\x01') {
      return (char *)(param_1[1] + 0x40);
    }
    if (cVar1 == '\x02') {
      return (char *)param_1[2];
    }
  }
  if (param_1[3] == 0) {
    return pcVar2;
  }
  FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
  FUN_180057290(local_50,&DAT_1802a2258);
  FUN_1800ac3e0(local_88,local_2c,local_50,pcVar2);
  FUN_1801dd110(local_88,&DAT_180253660);
}



void Unwind_18005b3e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_18005b410(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



char FUN_18005b440(char *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 local_c0 [56];
  undefined1 local_88 [56];
  undefined8 local_50 [4];
  undefined8 local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  if (*param_1 != '\x01') {
    local_50[0] = FUN_180081b20(param_1);
    FUN_1800b8f52(&DAT_1802a2270,&DAT_180272281,0x16,0x19,&DAT_1802a228c);
    FUN_180088cc0(local_88,&DAT_1802a2270,local_50);
    FUN_180083d90(local_c0,0x132,local_88,param_1);
    FUN_1801dd110(local_c0,&DAT_180253620);
  }
  lVar2 = FUN_1800b82e0(*(undefined8 *)(param_1 + 8));
  cVar1 = *param_1;
  if (cVar1 < '\x02') {
    if (cVar1 != '\x01') {
LAB_18005b5c6:
      FUN_1800b8f52(&DAT_1802a2258,&DAT_18027224a,0x16,0x11,&DAT_1802a226c);
      FUN_180057290(local_50,&DAT_1802a2258);
      FUN_1800886d0(local_88,0xd6,local_50,param_1);
      FUN_1801dd110(local_88,&DAT_180253660);
    }
    if (lVar2 == **(longlong **)(param_1 + 8)) {
LAB_18005b4c2:
      return *param_3;
    }
    pcVar3 = (char *)(lVar2 + 0x40);
  }
  else {
    if (cVar1 != '\x02') goto LAB_18005b5c6;
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 8) == 0) goto LAB_18005b4c2;
    pcVar3 = (char *)0x0;
  }
  if (*pcVar3 == '\x04') {
    return pcVar3[8];
  }
  local_30 = FUN_180081b20(pcVar3);
  FUN_1800b8f52(&DAT_1802a219c,&DAT_1802720d6,0x16,0x1e,&DAT_1802a21bc);
  FUN_180087b90(local_50,&DAT_1802a219c,&local_30);
  FUN_180083d90(local_88,0x12e,local_50,pcVar3);
  FUN_1801dd110(local_88,&DAT_180253620);
}



void Unwind_18005b630(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_18005b660(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x98);
  return;
}



void Unwind_18005b690(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x60);
  return;
}



uint * FUN_18005b6e0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  uint **ppuVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong local_298;
  ulonglong local_290;
  ushort local_286;
  short local_284;
  short local_282;
  uint *local_280;
  uint *local_278;
  undefined2 local_26e;
  short local_26c;
  short local_26a;
  uint *local_268;
  short local_260;
  short local_25e;
  short local_25c;
  short local_25a;
  short local_258;
  short local_256;
  short local_254;
  short local_252;
  short local_250;
  short local_24e;
  short local_24c;
  short local_24a;
  longlong local_248;
  short local_23e;
  short local_23c;
  short local_23a;
  ulonglong local_238;
  uint *local_230;
  ulonglong local_228;
  ulonglong *local_220;
  uint *local_218;
  uint *local_210;
  ulonglong local_208;
  uint *local_200;
  int local_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  uint *local_1c0;
  uint *local_1b8;
  ulonglong local_1b0;
  uint *local_1a8;
  ulonglong local_1a0;
  uint *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  ulonglong local_158;
  uint *local_150;
  ulonglong local_148;
  ulonglong local_140;
  uint *local_138;
  ulonglong local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118;
  ulonglong local_110;
  uint *local_108;
  uint *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uint *local_e8;
  ulonglong local_e0;
  uint *local_d8;
  uint *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint *local_b0;
  uint *local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uint *local_58;
  uint *local_50;
  uint *local_48;

  local_290 = 0x5ef3d5a5504c83cc;
  local_298 = 0x33ccd6b091b5b141;
  local_210 = param_1;
  local_1b8 = param_2;
LAB_18005b7c0:
  uVar2 = local_158;
  uVar8 = local_228;
  puVar1 = local_280;
  uVar7 = local_290 ^ 0x143056b76dc78904;
  uVar4 = local_290 ^ local_298;
  local_298 = local_298 ^ 0x143056b76dc78904;
  bVar6 = (byte)local_248;
  local_290 = uVar7;
  if ((longlong)uVar4 < -0x3a59e187f589d3b) {
    if ((longlong)uVar4 < -0x36343ab98c23e4b9) {
      if (-0x5c9a252771290c75 < (longlong)uVar4) {
        if ((longlong)uVar4 < -0x481285adaea99a26) {
          if ((longlong)uVar4 < -0x4ff63526b1562a58) {
            if ((longlong)uVar4 < -0x586cbc806b543429) {
              if (uVar4 == 0xa365dad88ed6f38c) {
                local_290 = 0x5b99280b9d9e2a3e;
                if (local_24e == 0x2f) {
                  local_290 = 0x50c07854ab7fc143;
                }
                local_298 = 0x55d6f22d23689301;
              }
              else if (uVar4 == 0xa5c995ed8a95c511) {
                local_290 = 0x93fbaf1b405b7d0b;
                local_298 = 0x97ba0b81768178e0;
                local_218 = local_278 + 1;
              }
            }
            else if (uVar4 == 0xa793437f94abcbd7) {
              local_290 = 0x7608636246a02c9f;
              if (local_282 < 0x5c) {
                local_290 = 0xa8ba186441c8e66c;
              }
              local_298 = 0x7f63fea65818b35a;
            }
            else if (uVar4 == 0xaf847b0e1260c5b9) {
              local_290 = 0x9ccc08e8a39590fb;
              if (local_26c < 0x3f) {
                local_290 = 0x90b9daba6ebc40af;
              }
              local_298 = 0x47c44436179e8b5e;
            }
            goto LAB_18005b7c0;
          }
          if ((longlong)uVar4 < -0x4e333d5f69d05bc0) {
            if (uVar4 == 0xb009cad94ea9d5a8) {
              local_290 = 0x543c6500a5349b56;
              if (local_25a < 0x5c) {
                local_290 = 0x3882e5d94682823d;
              }
              local_298 = 0xd9b7cfd6c396a54f;
            }
            else if (uVar4 == 0xb0874341fa8f5369) {
              local_290 = 0x9c7a67f0dfb455c9;
              local_298 = 0x7fe31ba7f27ad21b;
            }
            goto LAB_18005b7c0;
          }
          if (uVar4 == 0xb1ccc2a0962fa440) {
            local_178 = local_128;
            local_258 = (short)*local_128;
            local_290 = 0xa2dccf257c871bd1;
            local_298 = 0xfeed1dfe24ad3a94;
            goto LAB_18005b7c0;
          }
          if (uVar4 != 0xb2731e543d523357) {
            if (uVar4 == 0xb665760b4ff8cf16) {
              FUN_180061f00(param_1,local_148,0x5bfe6bc61162c514,local_1c0,local_148);
              local_290 = 0x7f130f5cd43aa62b;
              local_298 = 0x4c5494970e75faf9;
            }
            goto LAB_18005b7c0;
          }
          local_290 = 0xf8f5e1916b9da1b5;
          if (local_228 == local_1e0) {
            local_290 = 0xe9c2b77179879741;
          }
          local_298 = 0xfde36be8e38af3f7;
        }
        else {
          if ((longlong)uVar4 < -0x4163c62174d333c7) {
            if ((longlong)uVar4 < -0x45bc1c6291dba694) {
              if (uVar4 == 0xb7ed7a52515665da) {
                auVar10._0_2_ = -(ushort)((short)*local_a8 == (short)*local_b0);
                auVar10._2_2_ = -(ushort)(*(short *)((longlong)local_a8 + 2) == *(short *)((longlong)local_b0 + 2));
                auVar10._4_2_ = -(ushort)((short)local_a8[1] == (short)local_b0[1]);
                auVar10._6_2_ = -(ushort)(*(short *)((longlong)local_a8 + 6) == *(short *)((longlong)local_b0 + 6));
                auVar10._8_2_ = -(ushort)((short)local_a8[2] == (short)local_b0[2]);
                auVar10._10_2_ = -(ushort)(*(short *)((longlong)local_a8 + 10) == *(short *)((longlong)local_b0 + 10));
                auVar10._12_2_ = -(ushort)((short)local_a8[3] == (short)local_b0[3]);
                auVar10._14_2_ = -(ushort)(*(short *)((longlong)local_a8 + 0xe) == *(short *)((longlong)local_b0 + 0xe))
                ;
                local_290 = 0x18591ff1ddd3dfed;
                if (local_286 ==
                    (ushort)~((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                              (ushort)((byte)(auVar10._14_2_ >> 7) & 1) << 0xe | auVar10._14_2_ & 0x8000)) {
                  local_290 = 0xb866d53af070b349;
                }
                local_298 = 0x38e5b25e9dae3487;
                local_108 = local_a8;
                local_100 = local_b0;
                local_f8 = local_a0;
              }
              else if (uVar4 == 0xb94b1b7a942f37ec) {
                local_290 = 0xb539b0accb2667f8;
                if (local_284 == 0x2f) {
                  local_290 = 0xa6e7cd33e99d3cce;
                }
                local_298 = 0x41e0917d71ed651b;
              }
            }
            else {
              if (uVar4 == 0xba43e39d6e24596c) {
                local_290 = 0xfab55742d2b4cf26;
                if (local_26a == 0x2e) {
                  local_290 = 0xa391a890287e4ff8;
                }
                local_298 = 0xa0b01eb85c37f190;
                goto LAB_18005ee5a;
              }
              if (uVar4 == 0xbcf45eb73f610c8b) {
                local_190 = (uint *)((longlong)local_278 + 6);
                local_252 = *(short *)((longlong)local_278 + 6);
                local_290 = 0x3993740876b844a7;
                local_298 = 0xa75ce03acde09537;
              }
              else if (uVar4 == 0xbe776a3581b49b01) {
                local_290 = 0xbe64adb87512e9cd;
                if (local_256 == 0x2f) {
                  local_290 = 0x79b128168b93569f;
                }
                local_298 = 0x50be3ef8a91e05b5;
              }
            }
            goto LAB_18005b7c0;
          }
          if ((longlong)uVar4 < -0x3fdecc29789a5fbb) {
            if (uVar4 == 0xbe9c39de8b2ccc39) {
              local_24c = (short)*local_1c0;
              local_290 = 0x6050efad202ad6f2;
              local_298 = 0x48e3912e3ef5c1ed;
              goto LAB_18005b7c0;
            }
            if (uVar4 != 0xbf28d37b11e12ba2) goto LAB_18005b7c0;
            local_290 = 0x97b8ba663121e3b9;
            if (local_250 == 0x5c) {
              local_290 = 0xd8670d39ba4e421a;
            }
            local_298 = 0xcc46d1a0204326ac;
          }
          else {
            if (uVar4 == 0xc02133d68765a045) {
              local_290 = 0x1b4647cc86f06b28;
              if (local_24c == 0x5c) {
                local_290 = 0xc2b1852a83773d93;
              }
              local_298 = 0x1738aaba4be63d8a;
              goto LAB_18005b7c0;
            }
            if (uVar4 == 0xc24ae95460883d4f) {
              local_290 = 0x280c9356fe22382e;
              if (local_284 < 0x5c) {
                local_290 = 0x15c7d9f35515e88e;
              }
              local_298 = 0x8a6123b6df76c5b;
              goto LAB_18005b7c0;
            }
            if (uVar4 != 0xc98a3b2e5a712318) goto LAB_18005b7c0;
            local_290 = 0xdf02eda87afce981;
            if (local_250 == 0x2f) {
              local_290 = 0x90dd5af7f1934822;
            }
            local_298 = 0x84fc866e6b9e2c94;
          }
        }
        goto LAB_18005ec71;
      }
      if (-0x6a8a83c3378eb1cd < (longlong)uVar4) {
        if ((longlong)uVar4 < -0x6707d4cde38c62d8) {
          if ((longlong)uVar4 < -0x68af3f467f692821) {
            if (uVar4 == 0x95757c3cc8714e34) {
              local_290 = 0x5e0f9b0c2002cb1c;
              if (local_258 == 0x5c) {
                local_290 = 0xbf115d3a778f9a2e;
              }
              local_298 = 0x534d47c78f03cc69;
LAB_18005ef1e:
              local_188 = local_178;
            }
            else if (uVar4 == 0x96706df3fe23cf62) {
              local_260 = (short)local_160;
              local_290 = 0xb63774639ae5ccc;
              local_298 = 0x9ad2cd217f2a0e28;
            }
          }
          else if (uVar4 == 0x9750c0b98096d7df) {
            local_290 = 0x6d6418fde7474941;
            if (local_25e == 0x2f) {
              local_290 = 0x692d86252b97452c;
            }
            local_298 = 0xeaff5350a67d6464;
          }
          else if (uVar4 == 0x987982198c03b0e4) {
            FUN_1800615e0(param_1,local_248,0x5bfe6bc61162c514,local_26e);
            local_290 = 0xe2ac04f26b464aca;
            local_298 = 0x617ed187e6ac6b82;
          }
        }
        else if ((longlong)uVar4 < -0x61306bcd44a72e70) {
          if (uVar4 == 0x98f82b321c739d28) {
            if (local_208 < local_e0) {
              param_1 = *(uint **)param_1;
            }
            *(ulonglong *)(local_210 + 4) = local_158;
            FUN_1802079d0(param_1,local_150,local_158 << (bVar6 & 0x3f));
            *(ushort *)((longlong)param_1 + uVar2 * 2) = local_286;
            local_290 = 0x51af9b244a27a6f;
            local_298 = 0x365d62799eed26bd;
            param_2 = local_1b8;
            param_1 = local_210;
          }
          else if (uVar4 == 0x9e5f09501505100f) {
            local_290 = 0xc47cd82ec183bbd6;
            if (local_24a < 0x5c) {
              local_290 = 0x75698f4f61f31600;
            }
            local_298 = 0xbae8d38c04a9a41a;
          }
        }
        else if (uVar4 == 0x9ecf9432bb58d190) {
          local_290 = 0x9dba09cd15084fc4;
          if (local_252 < 0x5c) {
            local_290 = 0x8faee28c6b06b4b7;
          }
          local_298 = 0x73f4836beba1d672;
        }
        else if (uVar4 == 0x9f5e3fd51dd55cca) {
          local_e8 = (uint *)((longlong)local_170 + 2);
          local_290 = 0xc1de99818a9bbeba;
          if (local_e8 == local_200) {
            local_290 = 0x1e313148c4e25758;
          }
          local_298 = 0x1d108760b0abe930;
          local_268 = local_200;
        }
        else if (uVar4 == 0xa058138d1a350153) {
          local_290 = 0xd467da41604253e9;
          local_298 = 0x267b2d4d6ea04561;
        }
        goto LAB_18005b7c0;
      }
      if ((longlong)uVar4 < -0x7864b452bec5d2db) {
        if ((longlong)uVar4 < -0x7c2d2a8a7215deb8) {
          if (uVar4 == 0x808367646dde87ce) {
            local_110 = local_f8;
            local_118 = local_100 + 4;
            local_120 = local_108 + 4;
            local_a0 = local_1b0 + local_f8;
            local_290 = 0xa0705eee83ec8908;
            if (local_1c8 < local_a0) {
              local_290 = 0x3bdeceeffe459d3c;
            }
            local_298 = 0x179d24bcd2baecd2;
            local_b0 = local_118;
            local_a8 = local_120;
          }
          else if (uVar4 == 0x8205b47d85bd9baf) {
            *local_220 = local_238 + local_248;
            *(undefined2 *)local_200 = local_26e;
            *(ushort *)((longlong)local_280 + (local_238 + local_248) * 2) = local_286;
            local_290 = 0x3eddca3acbbe1154;
            local_298 = 0xbd0f1f4f4654301c;
          }
        }
        else if (uVar4 == 0x83d2d5758dea2148) {
          local_98 = (longlong)local_d8 - (longlong)local_1c0;
          local_148 = local_98 >> (bVar6 & 0x3f);
          local_140 = *local_220;
          local_90 = *local_78;
          local_290 = 0xd616142ebe293c21;
          if (local_90 - local_140 < local_148) {
            local_290 = 0x7b5996546f6130bd;
          }
          local_298 = 0xcd3ce05f2099ffab;
        }
        else if (uVar4 == 0x854f20067aba8cd5) {
          local_290 = 0xcf3daed6deff4237;
          if (local_238 == local_1d0) {
            local_290 = 0x6e2d61cd8a8e4fec;
          }
          local_298 = 0xbc4318ead4e07c5e;
        }
        goto LAB_18005b7c0;
      }
      if ((longlong)uVar4 < -0x72745529995dc1e7) {
        if (uVar4 == 0x879b4bad413a2d25) {
          local_290 = 0x3aab9cb00838ea9;
          local_298 = 0xdfbb9176d8b86293;
        }
        else if (uVar4 == 0x8c272ab9e937e2f0) {
          local_290 = 0xc2fe501a81ff085f;
          if (local_b8 == local_c0) {
            local_290 = 0xf663212c5b8f8783;
          }
          local_298 = 0xe242fdb5c182e335;
          local_230 = local_48;
        }
        goto LAB_18005b7c0;
      }
      if (uVar4 != 0x8d8baad666a23e19) {
        if (uVar4 == 0x913101f03d0c2b05) {
          local_290 = 0x7d6da2f24979ecfc;
          local_298 = 0x47dad61c3ba851ab;
        }
        else if (uVar4 == 0x91b1ba67468452e4) {
          local_290 = 0x775d86516309d0e0;
          if (local_260 < 0x5c) {
            local_290 = 0xca3c0c10e631e14c;
          }
          local_298 = 0x81509003a0601d1a;
        }
        goto LAB_18005b7c0;
      }
      local_290 = 0xe94cb53ffd38c39b;
      if (local_25a == 0x5c) {
        local_290 = 0x37446a1211e9549a;
      }
      local_298 = 0x3465dc3a65a0eaf2;
    }
    else {
      if ((longlong)uVar4 < -0x22701d9f96d129bb) {
        if ((longlong)uVar4 < -0x2a76d06f376effe7) {
          if ((longlong)uVar4 < -0x307ea33c9aa54de6) {
            if ((longlong)uVar4 < -0x3415eaac3da3538f) {
              if (uVar4 == 0xc9cbc54673dc1b47) {
                local_290 = 0xda2e59030ad2b6b6;
                if (local_254 == 0x2f) {
                  local_290 = 0x36be025239256301;
                }
                local_298 = 0x86394113c3aa3068;
              }
              else if (uVar4 == 0xcb17c4f43c6930df) {
                local_290 = 0x8e8ac5b616a57b14;
                if (*(longlong *)local_58 == *(longlong *)local_50) {
                  local_290 = 0xe88468e191334d50;
                }
                local_298 = 0xae36681956d8907e;
                local_f0 = local_c8;
              }
            }
            else if (uVar4 == 0xcbea1553c25cac71) {
              *local_220 = local_238 + local_248;
              *(undefined2 *)local_200 = local_26e;
              *(ushort *)((longlong)local_280 + (local_238 + local_248) * 2) = local_286;
              local_290 = 0x91a4d2d582060f12;
              local_298 = 0x127607a00fec2e5a;
            }
            else if (uVar4 == 0xcc3cd590adf062cd) {
              local_78 = (ulonglong *)(param_1 + 6);
              local_1a0 = *(ulonglong *)(param_1 + 6);
              local_138 = param_1;
              if (local_208 < *(ulonglong *)(param_1 + 6)) {
                local_138 = *(uint **)param_1;
              }
              local_280 = local_138;
              local_220 = (ulonglong *)(param_1 + 4);
              local_238 = *(ulonglong *)(param_1 + 4);
              local_70 = local_238 << (bVar6 & 0x3f);
              local_200 = (uint *)(local_70 + (longlong)local_138);
              local_278 = param_2;
              if (local_208 < *(ulonglong *)(param_2 + 6)) {
                local_278 = *(uint **)param_2;
              }
              local_228 = *(ulonglong *)(param_2 + 4);
              local_68 = *(ulonglong *)(param_2 + 4) << (bVar6 & 0x3f);
              local_198 = (uint *)(local_68 + (longlong)local_278);
              local_290 = 0x1271af87ee52d101;
              if ((longlong)local_238 < (longlong)local_1e0) {
                local_290 = 0x24f15958a0f075db;
              }
              local_298 = 0x27d0ef70d4b9cbb3;
              local_268 = local_138;
            }
          }
          else if ((longlong)uVar4 < -0x2c082fda4dd1db8d) {
            if (uVar4 == 0xcf815cc3655ab21a) {
              local_290 = 0xe68a60c23743ab2a;
              if (local_24a == 0x2f) {
                local_290 = 0xfb77b08beb7ba813;
              }
              local_298 = 0xf85606a39f32167b;
              local_268 = local_170;
            }
            else if (uVar4 == 0xd26e79275e6e33b2) {
              local_290 = 0x1c9fa1caa5e0e49d;
              local_298 = 0x5bc6881b6b4f5953;
            }
          }
          else if (uVar4 == 0xd3f7d025b22e2473) {
            local_290 = 0xbcbd5362fdb12868;
            if (local_254 == 0x5c) {
              local_290 = 0x502d0833ce46fddf;
            }
            local_298 = 0xe0aa4b7234c9aeb6;
          }
          else if (uVar4 == 0xd4b9d5ec2bd8341f) {
            local_130 = local_60 + local_248;
            local_290 = 0xdc27da78f9b941ba;
            if (local_130 == local_1c8) {
              local_290 = 0x4cf4db22107ba9d6;
            }
            local_298 = 0xc0d3f19bf94c4b26;
          }
          else if (uVar4 == 0xd579e3642708aebb) {
            local_290 = 0x65b01b5a2e151751;
            if (local_180 == local_200) {
              local_290 = 0x619e581fab8f529a;
            }
            local_298 = 0x403284c085f51d7e;
          }
          goto LAB_18005b7c0;
        }
        if ((longlong)uVar4 < -0x24f7b3214bf4e45b) {
          if ((longlong)uVar4 < -0x2882617386dd340f) {
            if (uVar4 == 0xd5892f90c8910019) {
              local_88 = (longlong)local_180 - (longlong)local_138;
              local_80 = local_88 >> (bVar6 & 0x3f);
              local_290 = 0xc86c0b4b5bda820f;
              if (local_238 < local_80) {
                local_290 = 0xd107c3137e8ad45a;
              }
              local_298 = 0xbc7a9a158d38922d;
            }
            else if (uVar4 == 0xd5f16b1d967546df) {
              ppuVar5 = &local_280;
              if (local_23c == local_23e) {
                ppuVar5 = &local_1a8;
              }
              local_290 = 0x255857ce8de5334d;
              local_298 = 0x2679e1e6f9ac8d25;
              local_268 = *ppuVar5;
            }
            goto LAB_18005b7c0;
          }
          if (uVar4 != 0xd77d9e8c7922cbf1) {
            if (uVar4 == 0xd7d9e6c219d05536) {
              local_290 = 0x812bb5e472ca6521;
              if (local_282 == 0x3f) {
                local_290 = 0x5e1a295a834018c3;
              }
              local_298 = 0x637b3d01b4d2447c;
            }
            else if (uVar4 == 0xda150de14830c0f5) {
              local_290 = 0xcb6c2b257fbec3d5;
              if (local_25c == 0x2f) {
                local_290 = 0x6b708cf7465055a7;
              }
              local_298 = 0xee3facf13cead972;
            }
            goto LAB_18005b7c0;
          }
          local_290 = 0xb4248bbf1b9fa751;
          if (local_26c == 0x2e) {
            local_290 = 0x103d3ca83770a3e9;
          }
          local_298 = 0x147c983201aaa602;
        }
        else {
          if (-0x237d62c7e819c247 < (longlong)uVar4) {
            if (uVar4 == 0xdc829d3817e63dba) {
              local_290 = 0xcc2e86ce2d335f4d;
              if (local_26a == 0x3f) {
                local_290 = 0x950a791cd7f9df93;
              }
              local_298 = 0x962bcf34a3b061fb;
LAB_18005ee5a:
              local_268 = local_1a8;
            }
            else if (uVar4 == 0xdcce1ee13a30578a) {
              local_170 = local_e8;
              local_24a = (short)*local_e8;
              local_290 = 0x8fc0b549b1fb2f0b;
              local_298 = 0x119fbc19a4fe3f04;
            }
            else if (uVar4 == 0xdd29690598982969) {
              local_290 = 0x2691f5ff1f06b9c4;
              local_298 = 0x19be572b0b6e31bd;
            }
            goto LAB_18005b7c0;
          }
          if (uVar4 != 0xdb084cdeb40b1ba5) {
            if (uVar4 == 0xdc1128bdd83bec3a) {
              local_290 = 0x30c7d83d33bc58f8;
              if (local_238 < local_1a0) {
                local_290 = 0x2abbee593a0273b3;
              }
              local_298 = 0xa8be5a24bfbfe81c;
            }
            goto LAB_18005b7c0;
          }
          local_290 = 0x77ac78c96250d697;
          if (local_26c == 0x3f) {
            local_290 = 0xd3b5cfde4ebfd22f;
          }
          local_298 = 0xd7f46b447865d7c4;
        }
        local_218 = local_190;
        goto LAB_18005b7c0;
      }
      if (-0x14d2fa28384ffd48 < (longlong)uVar4) {
        if ((longlong)uVar4 < -0xb26de2e4534fd1d) {
          if ((longlong)uVar4 < -0x11b175590156664a) {
            if (uVar4 == 0xeb2d05d7c7b002b9) {
              local_290 = 0xbc811ca3e88a60f1;
              if (local_254 < 0x5c) {
                local_290 = 0xa6bd09c029785fc5;
              }
              local_298 = 0x6f76cc865aa44482;
            }
            else if (uVar4 == 0xec5c1afdf88c5647) {
              local_290 = 0x7446818119811694;
              if (local_278 == local_188) {
                local_290 = 0x6426f982b55677c9;
              }
              local_298 = 0x7007251b2f5b137f;
              local_218 = local_188;
              local_230 = local_188;
            }
          }
          else if (uVar4 == 0xee4e8aa6fea999b6) {
            local_290 = 0x7b4f940b6f5c0485;
            if (local_252 == 0x5c) {
              local_290 = 0x57d1d6a451848031;
            }
            local_298 = 0x47225630c93175d0;
          }
          else {
            if (uVar4 == 0xeeda9340dc0cec78) {
              local_290 = 0x1bd32f962289f73;
              local_298 = 0x159cee60f825fbc5;
              goto LAB_18005ec71;
            }
            if (uVar4 == 0xf21cf70c0ee21688) {
              local_290 = 0xe3aea6e45adf69ea;
              if (local_164 == local_1e4) {
                local_290 = 0xe17ed87dc40c85cc;
              }
              local_298 = 0xe6b82c9dd2c83ba8;
              local_23a = local_26c;
            }
          }
          goto LAB_18005b7c0;
        }
        if (-0x9886c603433ea5d < (longlong)uVar4) {
          if (uVar4 == 0xf677939fcbcc15a4) {
            local_290 = 0x822f879ca22bd8c3;
            if (local_24e == 0x5c) {
              local_290 = 0x8976d7c394ca33be;
            }
            local_298 = 0x8c605dba1cdd61fc;
          }
          else if (uVar4 == 0xf911387f651e6d9e) {
            auVar9._0_2_ = -(ushort)((short)*local_278 == (short)*local_280);
            auVar9._2_2_ = -(ushort)(*(short *)((longlong)local_278 + 2) == *(short *)((longlong)local_280 + 2));
            auVar9._4_2_ = -(ushort)((short)local_278[1] == (short)local_280[1]);
            auVar9._6_2_ = -(ushort)(*(short *)((longlong)local_278 + 6) == *(short *)((longlong)local_280 + 6));
            auVar9._8_2_ = -(ushort)((short)local_278[2] == (short)local_280[2]);
            auVar9._10_2_ = -(ushort)(*(short *)((longlong)local_278 + 10) == *(short *)((longlong)local_280 + 10));
            auVar9._12_2_ = -(ushort)((short)local_278[3] == (short)local_280[3]);
            auVar9._14_2_ = -(ushort)(*(short *)((longlong)local_278 + 0xe) == *(short *)((longlong)local_280 + 0xe));
            local_290 = 0x69db11339b3290d1;
            if (local_286 ==
                (ushort)~((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd
                          | (ushort)((byte)(auVar9._14_2_ >> 7) & 1) << 0xe | auVar9._14_2_ & 0x8000)) {
              local_290 = 0xc9e4dbf8b691fc75;
            }
            local_298 = 0x4967bc9cdb4f7bbb;
            local_108 = local_278;
            local_100 = local_280;
            local_f8 = local_1b0;
          }
          else if (uVar4 == 0xfad9de9cbdbf1286) {
            local_290 = 0x2c04ae5b709ca222;
            if (local_284 < 0x5c) {
              local_290 = 0xb88e2435f1b95f46;
            }
            local_298 = 0x1c53f4f659668aa;
          }
          goto LAB_18005b7c0;
        }
        if (uVar4 != 0xf4d921d1bacb02e3) {
          if (uVar4 == 0xf60d1652c369cdfa) {
            local_290 = 0xacbe65dbf38d0cbd;
            if (local_260 == 0x5c) {
              local_290 = 0xfd0188ada8ed39ab;
            }
            local_298 = 0x9e189a06f83a5614;
          }
          goto LAB_18005b7c0;
        }
        local_290 = 0x75fde6ca40e61eb4;
        local_298 = 0x61dc3a53daeb7a02;
LAB_18005ec71:
        local_230 = local_278;
        goto LAB_18005b7c0;
      }
      if ((longlong)uVar4 < -0x1daf771a39e7dea3) {
        if ((longlong)uVar4 < -0x1f083e7333184629) {
          if (uVar4 == 0xdd8fe260692ed645) {
            local_290 = 0x2034e3df73f8d666;
            if (local_256 == 0x5c) {
              local_290 = 0xe7e166718d796934;
            }
            local_298 = 0xceee709faff43a1e;
          }
          else if (uVar4 == 0xde2d0c5f2edf9430) {
            local_290 = 0xc2a999e02a804cf6;
            if (local_25c == 0x5c) {
              local_290 = 0x62b53e32136eda84;
            }
            local_298 = 0xe7fa1e3469d45651;
          }
          goto LAB_18005b7c0;
        }
        if (uVar4 == 0xe0f7c18ccce7b9d7) {
          local_290 = 0x930cd79af637f3e;
          if (local_282 == 0x5c) {
            local_290 = 0x2cf55c26f7b7e9b4;
          }
          local_298 = 0x644eaf948447c1cc;
          goto LAB_18005b7c0;
        }
        if (uVar4 != 0xe1352a0f85142772) goto LAB_18005b7c0;
        local_290 = 0x83ccf2aee4fc26d0;
        if (local_25a == 0x2f) {
          local_290 = 0x5dc42d83082db1d1;
        }
        local_298 = 0x5ee59bab7c640fb9;
      }
      else {
        if (-0x1c6683a8d231782f < (longlong)uVar4) {
          if (uVar4 == 0xe3997c572dce87d2) {
            local_290 = 0x6dab4f3de58e4675;
            if (local_282 < 0x5c) {
              local_290 = 0xb44e24777597988c;
            }
            local_298 = 0x8d5c8eb12969ffa2;
          }
          else if (uVar4 == 0xe4c8e1845fb52989) {
            local_1a8 = (uint *)((longlong)local_280 + 6);
            local_25c = *(short *)((longlong)local_280 + 6);
            local_290 = 0x34e45f2a850048e5;
            local_298 = 0x6022f4dc3627ff21;
          }
          else if (uVar4 == 0xe7075c4e987059d5) {
            local_250 = (short)local_278[1];
            local_290 = 0x83820445d0039ba4;
            local_298 = 0xc77236a557f7a4df;
          }
          goto LAB_18005b7c0;
        }
        if (uVar4 != 0xe25088e5c618215d) {
          if (uVar4 == 0xe355f9a783644413) {
            local_128 = (uint *)((longlong)local_178 + 2);
            local_290 = 0x657293911db7d05c;
            if (local_128 == local_198) {
              local_290 = 0xd0fff5abbd4271f7;
            }
            local_298 = 0xd4be51318b98741c;
            local_218 = local_198;
          }
          goto LAB_18005b7c0;
        }
        local_290 = 0xd634c792080a38d8;
        local_298 = 0xd51571ba7c4386b0;
      }
    }
  }
  else {
    if (0x3912aac65cfe672d < (longlong)uVar4) {
      if ((longlong)uVar4 < 0x5bfe6bc61162c515) {
        if ((longlong)uVar4 < 0x46b200f8c7ebdd2e) {
          if ((longlong)uVar4 < 0x3cd93f65dce3252c) {
            if ((longlong)uVar4 < 0x3ab774ee72d1bd57) {
              if (uVar4 == 0x3912aac65cfe672e) {
                local_290 = 0x539689e44dce2b2d;
                if (local_282 == 0x2f) {
                  local_290 = 0x765318bb151abda7;
                }
                local_298 = 0x3ee8eb0966ea95df;
              }
              else if (uVar4 == 0x3a1272ea8889525d) {
                local_290 = 0xb057028c05a5a652;
                if (local_24e < 0x5c) {
                  local_290 = 0xe5454bcb40bf407a;
                }
                local_298 = 0x46209113ce69b3f6;
              }
            }
            else if (uVar4 == 0x3ab774ee72d1bd57) {
              local_290 = 0x24f5c1d5ea3fc4da;
              if (local_284 < 0x3f) {
                local_290 = 0xf3839f92a00342f3;
              }
              local_298 = 0xe6bf28818ab7f995;
            }
            else if (uVar4 == 0x3c6dc23ba66d7155) {
              local_290 = 0xde12846f1b994feb;
              local_298 = 0xdb040e16938e1da9;
            }
          }
          else if ((longlong)uVar4 < 0x3f2fa2d414688879) {
            if (uVar4 == 0x3cd93f65dce3252c) {
              local_26c = (short)local_278[1];
              local_290 = 0x97dced85108a82c2;
              local_298 = 0x3858968b02ea477b;
            }
            else if (uVar4 == 0x3d61145b37925cbf) {
              local_290 = 0xd3aa6c3b18d10fa4;
              local_298 = 0x65b07268ea4497b;
              local_23c = (short)local_280[1];
            }
          }
          else if (uVar4 == 0x3f2fa2d414688879) {
            local_e8 = (uint *)((longlong)local_280 + 6);
            local_290 = 0xbca1f97b2e7a94f1;
            if (local_238 == local_1d8) {
              local_290 = 0x634e51b260037d13;
            }
            local_298 = 0x606fe79a144ac37b;
            local_268 = local_e8;
          }
          else if (uVar4 == 0x44f032e087f43f7b) {
            local_290 = 0xe12b432616aef091;
            if (local_250 < 0x5c) {
              local_290 = 0x9789ab735d3ef82b;
            }
            local_298 = 0x5e03905d074fdb33;
          }
          else if (uVar4 == 0x461171a52db10dcd) {
            local_290 = 0x240848d0c8013aea;
            if (local_25e < 0x5c) {
              local_290 = 0x9094b1e84c1c6944;
            }
            local_298 = 0x7c47151cc8abe9b;
          }
        }
        else if ((longlong)uVar4 < 0x5079fde336b05a57) {
          if ((longlong)uVar4 < 0x48bbf3b273f02878) {
            if (uVar4 == 0x46b200f8c7ebdd2e) {
              local_290 = 0x5b7042ffee6039bb;
              if (local_f0 < local_1c8) {
                local_290 = 0xcba343a507a2d1d7;
              }
              local_298 = 0xd75768460757db4b;
              local_130 = local_f0;
            }
            else if (uVar4 == 0x475929d1ceafbdce) {
              local_290 = 0x33a1ad01c5fe49eb;
              if (local_282 < 0x3f) {
                local_290 = 0x9d3d9e0f65ab320b;
              }
              local_298 = 0x9432ee7e5155823c;
            }
          }
          else if (uVar4 == 0x48bbf3b273f02878) {
            local_25a = (short)local_280[1];
            local_290 = 0xdaf82fb8e3477522;
            local_298 = 0x6af1e561adeea08a;
          }
          else if (uVar4 == 0x4b6c9c134651fc56) {
            local_290 = 0x430041b3d4fcffd2;
            if (local_260 == 0x2f) {
              local_290 = 0x12bfacc58f9ccac4;
            }
            local_298 = 0x71a6be6edf4ba57b;
          }
          else if (uVar4 == 0x4c51223ddcc77d67) {
            FUN_180060d40(param_1,local_228,0x5bfe6bc61162c514,local_278);
            local_290 = 0x3289e0a3e5c766b1;
            local_298 = 0x1ce7b683f883a63;
          }
        }
        else if ((longlong)uVar4 < 0x54c6abf6b327b7c4) {
          if (uVar4 == 0x5079fde336b05a57) {
            local_290 = 0xd0c249dbc4f36994;
            if (local_258 == 0x2f) {
              local_290 = 0x31dc8fed937e38a6;
            }
            local_298 = 0xdd8095106bf26ee1;
            goto LAB_18005ef1e;
          }
          if (uVar4 == 0x5149282ae7c4c435) {
            local_290 = 0x6d2a9993e89abfd5;
            local_298 = 0x790b450a7297db63;
            goto LAB_18005ec71;
          }
        }
        else if (uVar4 == 0x54c6abf6b327b7c4) {
          local_290 = 0x56298f1e77cdbb95;
          if (local_25c < 0x5c) {
            local_290 = 0x52118ea01122ef50;
          }
          local_298 = 0x8804834159122fa5;
        }
        else if (uVar4 == 0x5a0549fa8e833eb6) {
          local_290 = 0x5afd4d99ead1d318;
          local_298 = 0x5f889379be17746d;
        }
        else if (uVar4 == 0x5b01986a8ce5bd35) {
          local_290 = 0xd9cd7c4f86bdcadc;
          local_298 = 0xdaecca67f2f474b4;
          local_268 = local_280 + 1;
        }
      }
      else if ((longlong)uVar4 < 0x72e976e4d105b16d) {
        if ((longlong)uVar4 < 0x6a8c830f64f05611) {
          if ((longlong)uVar4 < 0x5c31d2db582a2145) {
            if (uVar4 == 0x5bfe6bc61162c515) {
              local_290 = 0xa3fa9a51eb14c9bf;
              local_298 = 0xd4d203dc7543213a;
            }
            else if (uVar4 == 0x5c171810c97886de) {
              local_290 = 0x9ad4ef14084dbcad;
              local_298 = 0x48ba963356238f1f;
            }
          }
          else if (uVar4 == 0x5c31d2db582a2145) {
            local_290 = 0x7a91e3ec737bd11a;
            if (local_258 < 0x5c) {
              local_290 = 0xbf9d62338dbac579;
            }
            local_298 = 0xefe49fd0bb0a9f2e;
          }
          else if (uVar4 == 0x5e05094210a00731) {
            *local_220 = local_228;
            FUN_1802079d0(local_280,local_278,local_68);
            *(ushort *)((longlong)puVar1 + uVar8 * 2) = local_286;
            local_290 = 0x5cedb1b7f1b78bd5;
            local_298 = 0x6faa2a7c2bf8d707;
            param_2 = local_1b8;
            param_1 = local_210;
          }
          else if (uVar4 == 0x631912ab50d76fbf) {
            local_290 = 0x660c3011d7298cb8;
            if (local_1d8 < local_238) {
              local_290 = 0xa0e94679b55be3d7;
            }
            local_298 = 0x4421a7fdeaeeca5e;
          }
        }
        else if ((longlong)uVar4 < 0x6d7d5906f3b24677) {
          if (uVar4 == 0x6a8c830f64f05611) {
            local_256 = (short)local_168;
            local_290 = 0xf0d1ad5305c25d6f;
            local_298 = 0x8df32c9cde4a2545;
          }
          else if (uVar4 == 0x6d3f0315c1f9328d) {
            local_1e4 = 0x3f;
            local_248 = 1;
            local_1d0 = 4;
            local_1d8 = 3;
            local_1b0 = 8;
            local_1e8 = 0x1a;
            local_1ec = 0xffffffdf;
            local_23e = 0x3f;
            local_1f0 = 0x10;
            local_1f4 = -0x3a0041;
            local_26e = 0x5c;
            local_286 = 0;
            local_1e0 = 2;
            local_208 = 7;
            cVar3 = FUN_18005fdd0(param_2);
            local_290 = 0x14c398575738e0d6;
            if (cVar3 != '\0') {
              local_290 = 0xd7abc14cba5eacf2;
            }
            local_298 = 0xd8ff4dc7fac8821b;
          }
        }
        else {
          if (uVar4 == 0x6d7e62ed2b24bef2) {
            local_290 = 0xa51194ee7f7ddc43;
            local_298 = 0xa63022c60b34622b;
            goto LAB_18005b7a6;
          }
          if (uVar4 == 0x6da3df648e2f4128) {
            local_290 = 0xf1e20e0a9afd8fe8;
            if (local_26a < 0x3f) {
              local_290 = 0x972370afe33feb3e;
            }
            local_298 = 0x2d6093328d1bb252;
          }
          else if (uVar4 == 0x6d7d5906f3b24677) {
            FUN_1800615a0();
            return param_1;
          }
        }
      }
      else if ((longlong)uVar4 < 0x7728998d9e57e885) {
        if ((longlong)uVar4 < 0x7416915ed6e21022) {
          if (uVar4 == 0x72e976e4d105b16d) {
            local_168 = *local_278;
            local_290 = 0x385d681f79250cce;
            if ((local_1ec & local_168) + local_1f4 < local_1e8) {
              local_290 = 0xf7187efd97409fce;
            }
            local_164 = local_168 >> ((byte)local_1f0 & 0x1f);
            local_284 = (short)local_164;
            local_298 = 0x52d1eb101dd55adf;
          }
          else if (uVar4 == 0x737eb63c0a1f3e69) {
            local_254 = (short)local_280[2];
            local_290 = 0x8b43ea8a641a9ee5;
            local_298 = 0x606eef5da3aa9c5c;
          }
        }
        else if (uVar4 == 0x7416915ed6e21022) {
          *local_220 = local_80;
          *(ushort *)((longlong)local_280 + local_88) = local_286;
          local_290 = 0xd3b6a9a458a802e4;
          local_298 = 0x50647cd1d54223ac;
        }
        else if (uVar4 == 0x74f4422250ab17db) {
          FUN_1800615e0(param_1,local_248,0x5bfe6bc61162c514,local_26e);
          local_290 = 0xcd1e60714bef84cc;
          local_298 = 0x4eccb504c605a584;
        }
        else if (uVar4 == 0x764e7f4d3eb22a6d) {
          local_26a = (short)local_280[1];
          local_290 = 0xf91b78a57a0fb278;
          local_298 = 0x94b8a7c1f420f350;
        }
      }
      else if ((longlong)uVar4 < 0x7d2281cfdb88782a) {
        if (uVar4 == 0x7728998d9e57e885) {
          local_128 = (uint *)((longlong)local_278 + 6);
          local_290 = 0xc851031ccaa21c6;
          if (local_228 == local_1d8) {
            local_290 = 0xb908760b6c5f806d;
          }
          local_298 = 0xbd49d2915a858586;
          local_218 = local_128;
        }
        else if (uVar4 == 0x7ba563a66826b82d) {
          local_290 = 0xd8d0581e566a7e50;
          local_298 = 0xdf16acfe40aec034;
          local_23a = (short)local_278[1];
        }
      }
      else if (uVar4 == 0x7d2281cfdb88782a) {
        local_290 = 0xe7e26ff106be46f3;
        if (local_256 < 0x5c) {
          local_290 = 0x841ae7a4ee240bb7;
        }
        local_298 = 0x3a6d8d916f9090b6;
      }
      else if (uVar4 == 0x7d8d65e1125a099b) {
        FUN_180060d40(param_1,local_158,0x5bfe6bc61162c514,local_150);
        local_290 = 0x4e8fe74b78030c42;
        local_298 = 0x7dc87c80a24c5090;
      }
      else if (uVar4 == 0x7e940ba2c52a1fcc) {
        local_290 = 0xc0822e466a4150ca;
        if (local_24a == 0x5c) {
          local_290 = 0xdd7ffe0fb67953f3;
        }
        local_298 = 0xde5e4827c230ed9b;
        local_268 = local_170;
      }
      goto LAB_18005b7c0;
    }
    if ((longlong)uVar4 < 0x1b2af4719eb0c38a) {
      if ((longlong)uVar4 < 0x90f707134feb037) {
        if ((longlong)uVar4 < 0x441a49a36da05eb) {
          if ((longlong)uVar4 < -0x1c5352d7c8b23b9) {
            if (uVar4 == 0xfc5a61e780a762c5) {
              local_290 = 0xafdf8b4ecd541e03;
              if (local_252 == 0x2f) {
                local_290 = 0x8341c9e1f38c9ab7;
              }
              local_298 = 0x93b249756b396f56;
            }
            else if (uVar4 == 0xfcfceaa91c730887) {
              local_290 = 0x327117f8664e6ad3;
              if (local_238 < local_1a0) {
                local_290 = 0x8d6f4089f4b9d179;
              }
              local_298 = 0x468555da36e57d08;
            }
          }
          else if (uVar4 == 0xfe3acad28374dc47) {
            local_290 = 0x3a62e7645b867eec;
            if (local_24c == 0x2f) {
              local_290 = 0xe39525825e012857;
            }
            local_298 = 0x361c0a129690284e;
          }
          else if (uVar4 == 0x321b6287449be68) {
            local_180 = local_268;
            local_d8 = local_198;
            local_d0 = local_278;
            local_290 = 0x5ef321b2e11a7ffb;
            if ((longlong)local_228 < (longlong)local_1e0) {
              local_290 = 0x383b8bcfaa12aa20;
            }
            local_298 = 0x2c1a5756301fce96;
            local_230 = local_278;
          }
        }
        else if ((longlong)uVar4 < 0x575dee054c6a775) {
          if (uVar4 == 0x441a49a36da05eb) {
            local_48 = local_218;
            local_c0 = (longlong)local_218 - (longlong)local_d0 >> (bVar6 & 0x3f);
            local_b8 = (longlong)local_180 - (longlong)local_138 >> (bVar6 & 0x3f);
            local_1c8 = local_b8;
            if (local_c0 < local_b8) {
              local_1c8 = local_c0;
            }
            local_290 = 0xe7e7d4ef91fec51e;
            if (local_1c8 < local_1b0) {
              local_290 = 0x32b506c3d81fd96e;
            }
            local_298 = 0x1ef6ec90f4e0a880;
            local_118 = local_280;
            local_120 = local_278;
            local_110 = 0;
          }
          else if (uVar4 == 0x5168a7988175242) {
            local_290 = 0x7fcc271534b993f;
            local_298 = 0xfd251cedeef48bb9;
          }
        }
        else if (uVar4 == 0x575dee054c6a775) {
          local_290 = 0x3cf76ead17763f2e;
          if (local_15c == local_1e4) {
            local_290 = 0x598146f17b8c2a98;
          }
          local_298 = 0x8c702decedf96c47;
          local_23c = local_26a;
        }
        else if (uVar4 == 0x73aa96d1086f504) {
          local_24e = (short)local_278[2];
          local_290 = 0x40114375f51cbdb1;
          local_298 = 0x7a03319f7d95efec;
        }
        else if (uVar4 == 0x7c6f4e016c4be64) {
          ppuVar5 = &local_278;
          if (local_23a == local_23e) {
            ppuVar5 = &local_190;
          }
          local_188 = *ppuVar5;
          local_290 = 0xb2aa92db424eefa9;
          local_298 = 0x5ef68826bac2b9ee;
        }
      }
      else if ((longlong)uVar4 < 0xe9f81bd53aff2dc) {
        if ((longlong)uVar4 < 0xc7eed76cd1656a2) {
          if (uVar4 == 0x90f707134feb037) {
            local_290 = 0x5ccd931616b2bb0e;
            if (local_282 == 0x2f) {
              local_290 = 0xc8d364beee18b03e;
            }
            local_298 = 0xbe9d1bf3d0aa9a53;
          }
          else if (uVar4 == 0x96b9dc41eb89fc5) {
            local_290 = 0xa8531cf678cd1c51;
            if (local_282 == 0x5c) {
              local_290 = 0x3c4deb5e80671761;
            }
            local_298 = 0x4a039413bed53d0c;
          }
        }
        else if (uVar4 == 0xc7eed76cd1656a2) {
          local_290 = 0xcd22feb1181b9b45;
          local_298 = 0x185b1dd53f1335fe;
        }
        else if (uVar4 == 0xd42dccbaf010775) {
          local_290 = 0xf492c5a38b6a4879;
          local_298 = 0x17c73c04080e0c6a;
        }
        else if (uVar4 == 0xe4fda26bef6b93f) {
          local_290 = 0x342f0bf7d6b68a66;
          local_298 = 0xa51e0a07ebbaa163;
        }
      }
      else if ((longlong)uVar4 < 0x10f3809498b5f5e1) {
        if (uVar4 == 0xe9f81bd53aff2dc) {
          local_158 = *(ulonglong *)(param_2 + 4);
          local_150 = param_2;
          if (local_208 < *(ulonglong *)(param_2 + 6)) {
            local_150 = *(uint **)param_2;
          }
          local_e0 = *(ulonglong *)(param_1 + 6);
          local_290 = 0x5a51cc601b00cfca;
          if (local_e0 < local_158) {
            local_290 = 0xbf2482b315295b79;
          }
          local_298 = 0xc2a9e752077352e2;
        }
        else if (uVar4 == 0xf548c8b40962ee9) {
          local_290 = 0xe684de93550fe3c3;
          if (param_1 == param_2) {
            local_290 = 0xdb5cc4e5dcef4dcd;
          }
          local_298 = 0xe81b5f2e06a0111f;
        }
      }
      else if (uVar4 == 0x10f3809498b5f5e1) {
        local_290 = 0xe66574d129f588d8;
        if (local_228 == local_1d0) {
          local_290 = 0x706edc4c047f56d9;
        }
        local_298 = 0xe15fddbc39737ddc;
      }
      else if (uVar4 == 0x1421dc999a0d64b6) {
        local_1c0 = local_230;
        local_290 = 0x8b78183469ac3e85;
        if (local_230 == local_198) {
          local_290 = 0xe09dc28ec5885c07;
        }
        local_298 = 0x35e421eae280f2bc;
      }
      else if (uVar4 == 0x153cb7132ab4bb66) {
        local_290 = 0x26c7d0bd4a4e564;
        if (local_284 == 0x2f) {
          local_290 = 0x6ffc6a44ef83047d;
        }
        local_298 = 0x5325552133602151;
      }
      goto LAB_18005b7c0;
    }
    if (0x23cc3981048b8470 < (longlong)uVar4) {
      if ((longlong)uVar4 < 0x2c43ea532cff71ee) {
        if ((longlong)uVar4 < 0x25829f9aabe00a2f) {
          if (uVar4 == 0x23cc3981048b8471) {
            local_290 = 0x26629a9b66caadb2;
            if (local_25e == 0x5c) {
              local_290 = 0x222b0443aa1aa1df;
            }
            local_298 = 0xa1f9d13627f08097;
          }
          else if (uVar4 == 0x255387d443541aa7) {
            local_290 = 0xbcd19c79cfdde562;
            local_298 = 0xc56df383552b60b;
          }
        }
        else if (uVar4 == 0x25829f9aabe00a2f) {
          local_25e = *(short *)((longlong)local_200 + -2);
          local_290 = 0x85430dd4282beb2f;
          local_298 = 0xc3527c71059ae6e2;
        }
        else if (uVar4 == 0x28b37e831edf171f) {
          local_290 = 0x1438296c0b59d2ce;
          if (local_24c < 0x5c) {
            local_290 = 0x2a23d0680f48aecc;
          }
          local_298 = 0xd4191aba8c3c728b;
        }
        else if (uVar4 == 0x290f16ee228d532a) {
          local_290 = 0xda95212ad52beee0;
          if (local_1d8 < local_228) {
            local_290 = 0xd41261c9d718d13c;
          }
          local_298 = 0x68e63f7ee879ddb7;
        }
      }
      else if ((longlong)uVar4 < 0x32a6ffdd0bb75aa9) {
        if (uVar4 == 0x2c43ea532cff71ee) {
          local_f0 = local_110;
          local_58 = local_118;
          local_50 = local_120;
          local_c8 = local_1d0 | local_110;
          local_290 = 0x52f067aac37eab1a;
          if (local_1c8 < local_c8) {
            local_290 = 0xdf55a3a638fc46eb;
          }
          local_298 = 0x99e7a35eff179bc5;
        }
        else if (uVar4 == 0x2dc19114150aca88) {
          local_290 = 0x7fe6501b9ad02329;
          if (local_284 == 0x5c) {
            local_290 = 0x6c382d84b86b781f;
          }
          local_298 = 0x8b3f71ca201b21ca;
        }
      }
      else {
        if (uVar4 == 0x32a6ffdd0bb75aa9) {
          local_290 = 0x45247bd0822dd747;
          local_298 = 0x4605cdf8f664692f;
          goto LAB_18005b7a6;
        }
        if (uVar4 == 0x35a140f73aeb1ab2) {
          local_160 = *local_280;
          local_290 = 0xa9a5cfa7bc23b2a4;
          if ((local_1ec & local_160) + local_1f4 < local_1e8) {
            local_290 = 0x64d43a3ecee5c0f3;
          }
          local_15c = local_160 >> ((byte)local_1f0 & 0x1f);
          local_282 = (short)local_15c;
          local_298 = 0x3fd5a25442007dc6;
        }
        else if (uVar4 == 0x33479bcbda4f5cd2) {
          return param_1;
        }
      }
      goto LAB_18005b7c0;
    }
    if ((longlong)uVar4 < 0x2012e55e849e7c8a) {
      if ((longlong)uVar4 < 0x1d61cbc838e284d5) {
        if (uVar4 == 0x1b2af4719eb0c38a) {
          uVar8 = local_140 + local_148;
          *local_220 = uVar8;
          if (local_208 < local_90) {
            param_1 = *(uint **)local_210;
          }
          FUN_1802079d0((undefined2 *)(local_140 * 2 + (longlong)param_1),local_1c0,local_98);
          *(ushort *)((longlong)param_1 + uVar8 * 2) = local_286;
          local_290 = 0x6287d55f7dea087a;
          local_298 = 0x51c04e94a7a554a8;
          param_2 = local_1b8;
          param_1 = local_210;
        }
        else if (uVar4 == 0x1cf42be300f50a9c) {
          local_60 = local_130;
          local_290 = 0xb7c3e95e5f0e9d2a;
          if (*(short *)((longlong)local_280 + local_130 * 2) == *(short *)((longlong)local_278 + local_130 * 2)) {
            local_290 = 0x43c6911d34ab425f;
          }
          local_298 = 0x977f44f11f737640;
        }
      }
      else if (uVar4 == 0x1d61cbc838e284d5) {
        local_290 = 0xabd158914b88a265;
        if (local_284 == 0x3f) {
          local_290 = 0x813d131dc46ade7d;
        }
        local_298 = 0xfa9870bbac4c6650;
      }
      else if (uVar4 == 0x1edc6661a871bd51) {
        local_290 = 0x5fbd83a38542edc1;
        local_298 = 0xc0e3bc769897b10b;
      }
      goto LAB_18005b7c0;
    }
    if ((longlong)uVar4 < 0x20bcadaf407deb6a) {
      if (uVar4 == 0x2012e55e849e7c8a) {
        local_290 = 0x60c205242b3b3786;
        if (local_1a0 < local_228) {
          local_290 = 0x72962e5be75c4dd0;
        }
        local_298 = 0x3ec70c663b9b30b7;
      }
      else if (uVar4 == 0x20aa816d93d55475) {
        local_290 = 0x21d0673cecca5f87;
        if (local_284 == 0x5c) {
          local_290 = 0x4c407073d7edbe9e;
        }
        local_298 = 0x70994f160b0e9bb2;
      }
      goto LAB_18005b7c0;
    }
    if (uVar4 == 0x20bcadaf407deb6a) {
      local_290 = 0x2ea4435ac7a87c19;
      if (param_1 == param_2) {
        local_290 = 0x3df13dcf99795c41;
      }
      local_298 = 0xeb6a60443360093;
      goto LAB_18005b7c0;
    }
    if (uVar4 == 0x21acdcdf2e7a4fe4) {
      local_290 = 0x1c00480c6bb3e6b4;
      if ((longlong)local_1d0 < local_70) {
        local_290 = 0x632e77d0fa2acf7b;
      }
      local_298 = 0x9fd29d79e659c7fc;
      goto LAB_18005b7c0;
    }
    if (uVar4 != 0x222d97ec3dc746e6) goto LAB_18005b7c0;
    local_290 = 0xbe8aaa2e501eb916;
    if (local_238 == local_1e0) {
      local_290 = 0xd2c5f47ded85417;
    }
    local_298 = 0xe0de96faa91ea7f;
  }
LAB_18005b7a6:
  local_268 = local_280;
  goto LAB_18005b7c0;
}



ulonglong * FUN_18005eff0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  uintptr_t local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong *local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;

  local_108 = 0x4341abdca4e25690;
  local_110 = 0x492450ff5722ea68;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_108 ^ 0xa9cbe7f0d4725e72;
              uVar1 = local_108 ^ local_110;
              local_110 = local_110 ^ 0xa9cbe7f0d4725e72;
              bVar3 = (byte)local_100;
              local_108 = uVar4;
              if ((longlong)uVar1 < -0x6e97f05ed247ac) break;
              if ((longlong)uVar1 < 0x2bbdc503b391c81f) {
                if ((longlong)uVar1 < 0xa65fb23f3c0bcf8) {
                  if (uVar1 == 0xff91680fa12db854) {
                    local_98 = local_d0 << (bVar3 & 0x3f);
                    local_108 = 0x8e72dcfabc07c72a;
                    if (local_d0 != local_e8) {
                      local_108 = 0x558e50dc30d72348;
                    }
                    local_110 = 0x1824d1944d3aa11b;
                    local_c8 = 0;
                  }
                  else if (uVar1 == 0x30462ad2e802938) {
                    local_68 = local_78 + local_f8;
                    if (local_78 + local_f8 < local_48) {
                      local_68 = local_48;
                    }
                    local_d0 = local_68 + local_100;
                    local_108 = 0xba80aaa1fe924ba2;
                    if ((longlong)local_e8 <= (longlong)local_d0) {
                      local_108 = 0xeafb076084cb6f0a;
                    }
                    local_110 = 0x156a6f6f25e6d75e;
                  }
                }
                else if (uVar1 == 0xa65fb23f3c0bcf8) {
                  local_a8 = 0x27;
                  local_e0 = 0x7ffffffffffffffe;
                  local_e8 = 0;
                  local_100 = 1;
                  local_f0 = 2;
                  local_b0 = 7;
                  local_80 = param_1 + 2;
                  local_d8 = param_1[2];
                  local_108 = 0xb4c1c82cd6dd186e;
                  if (param_2 <= 0x7ffffffffffffffe - local_d8) {
                    local_108 = 0x767de2b89190815c;
                  }
                  local_110 = 0xf38f37671bb24bc5;
                }
                else if (uVar1 == 0x1c61618df3d6e640) {
                  local_90 = local_70 + 0x29;
                  local_108 = 0x638fcdfe2a1d21a5;
                  local_110 = 0x3037f43f34cde434;
                  local_88 = local_60;
                }
              }
              else if ((longlong)uVar1 < 0x53b839c11ed0c591) {
                if (uVar1 == 0x2bbdc503b391c81f) {
                  lVar2 = FUN_1801d61c8(local_98 + local_a8);
                  local_c8 = local_a8 + lVar2 & 0xffffffffffffffe0;
                  *(longlong *)(local_c8 - 8) = lVar2;
                  local_108 = 0x558aff7a9c127ec4;
                  local_110 = 0xc3dcf2146d2f18f5;
                }
                else if (uVar1 == 0x4daa81487ded8253) {
                  local_108 = 0xcb6cd2369da929af;
                  if (local_d0 < 0x800) {
                    local_108 = 0x935d5d462810d99e;
                  }
                  local_110 = 0x29ae1c56447c5b03;
                }
                else if (uVar1 == 0x474eff4bcd6f53ab) {
                  FUN_180002ac0();
                }
              }
              else if (uVar1 == 0x53b839c11ed0c591) {
                thunk_FUN_1801f42e0(local_88,local_90);
                local_108 = 0x3f51ae0747532cbf;
                local_110 = 0x4d4c03e94089a6d7;
              }
              else if (uVar1 == 0x721dadee07da8a68) {
                *param_1 = local_c0;
                return param_1;
              }
            }
            if ((longlong)uVar1 < -0x450cbeef93937d63) break;
            if ((longlong)uVar1 < -0xd203e01518cec77) {
              if (uVar1 == 0xbaf341106c6c829d) {
                local_c8 = FUN_1801d61c8(local_98);
                local_108 = 0x4bd9c99e85965f35;
                local_110 = 0xdd8fc4f074ab3904;
              }
              else if (uVar1 == 0xe2c2ce60d9d572ac) {
                local_108 = 0xd8518b66e960d9de;
                if (0x7fffffffffffffec < local_d0) {
                  local_108 = 0x466234109ff1a3e9;
                }
                local_110 = 0xf3ec4e655af111c1;
              }
            }
            else if (uVar1 == 0xf2dfc1feae731389) {
              local_60 = *(ulonglong *)(local_a0 - 8);
              local_108 = 0xf417ebf844b6b5c6;
              if (0x1f < (local_a0 - local_60) - 8) {
                local_108 = 0x6bb5be308613e3bd;
              }
              local_110 = 0xe8768a75b7605386;
            }
            else if (uVar1 == 0xf7ba443342070535) {
              FUN_1802079d0(local_c0,param_1);
              local_108 = 0xc525cfa5648e7d7c;
              local_110 = 0xb738624b6354f714;
            }
          }
          if (-0x5c508c4f1bf2fe3c < (longlong)uVar1) break;
          if (uVar1 == 0x85f2d5df8a22ca99) {
            local_58 = local_d8 + param_2;
            local_50 = param_1 + 3;
            local_f8 = param_1[3];
            local_48 = local_58 | local_b0;
            local_108 = 0x11b7eebbad338688;
            if (local_48 <= local_e0) {
              local_108 = 0x1c1fd712d491da9d;
            }
            local_110 = 0xa43994ce683334a0;
          }
          else if (uVar1 == 0x96560d6ef13d6631) {
            local_c0 = local_c8;
            *local_80 = local_58;
            *local_50 = local_68;
            local_108 = 0x720a2c5c738c80e;
            if (local_f8 <= local_b0) {
              local_108 = 0x533595466132ccfe;
            }
            local_110 = 0xa48fd1752335c9cb;
          }
          else if (uVar1 == 0x83c334453173b03b) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e8);
          }
        }
        if (-0x4a71858a3aff4dd9 < (longlong)uVar1) break;
        if (uVar1 == 0xa3af73b0e40d01c5) {
          local_a0 = *param_1;
          FUN_1802079d0(local_c0);
          local_70 = local_f8 << (bVar3 & 0x3f);
          local_90 = local_70 + local_f0;
          local_108 = 0x3bf1f4eb8bc2ba8b;
          if (local_90 < 0x1000) {
            local_108 = 0x9a960cd43b616c93;
          }
          local_110 = 0xc92e351525b1a902;
          local_88 = local_a0;
        }
        else if (uVar1 == 0xafeac5cedb749cfc) goto LAB_18005f85b;
      }
      if (uVar1 != 0xb82643dcbca2ee3d) break;
      local_78 = local_f8 >> (bVar3 & 0x3f);
      local_108 = 0xd044162c4b6a97ac;
      if (local_f8 <= local_e0 - local_78) {
        local_108 = 0x66ce0ef4a0ea0cbc;
      }
      local_110 = 0x65ca6c598e6a2584;
    }
  } while (uVar1 != 0xb58e7a75c500b228);
LAB_18005f85b:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



ulonglong * FUN_18005f8b0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  byte local_90;
  ulonglong local_88;
  undefined8 *local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;

  local_b0 = 0xc145595602a3df5b;
  local_b8 = 0x2ec15571ccbe3489;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_b0 ^ 0x9f50a998a99030b8;
            uVar4 = local_b0 ^ local_b8;
            local_b8 = local_b8 ^ 0x9f50a998a99030b8;
            local_b0 = uVar6;
            if ((longlong)uVar4 < -0x107bf3d831e2142e) break;
            if ((longlong)uVar4 < 0x6c28ace285f916a1) {
              if (uVar4 == 0xef840c27ce1debd2) {
                local_88 = 0x7ffffffffffffffe;
                local_90 = 1;
                local_98 = 2;
                local_a0 = 7;
                param_1[2] = 0;
                param_1[3] = 0;
                *param_1 = 0;
                param_1[1] = 0;
                local_a8 = param_2[2];
                local_80 = param_2;
                if (7 < (ulonglong)param_2[3]) {
                  local_80 = (undefined8 *)*param_2;
                }
                local_b0 = 0xd365e5af73dba215;
                if (0x7ffffffffffffffe < local_a8) {
                  local_b0 = 0xdaa7440f9bb90f51;
                }
                local_b8 = 0x54ed73b5b731cb5a;
              }
              else if (uVar4 == 0x2c9984d952d688) {
                local_78 = local_a8 | local_a0;
                local_b0 = 0x18b1c1a9237e5e1b;
                if (local_88 < local_78) {
                  local_b0 = 0x6dc37aa80ec32c0d;
                }
                local_b8 = 0xc1f576375ca67cc9;
              }
            }
            else if (uVar4 == 0x77f46060c58b8797) {
              lVar5 = FUN_1801d61c8(local_70 + 0x29);
              local_68 = lVar5 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(local_68 - 8) = lVar5;
              local_b0 = 0xdd8ff2953d9463bc;
              local_b8 = 0x79f566aa5618e654;
            }
            else if (uVar4 == 0x7cc0b53c4e9df0ab) {
              local_68 = FUN_1801d61c8(local_70 + local_98);
              local_b0 = 0x332ed2f737fdf82a;
              local_b8 = 0x975446c85c717dc2;
            }
            else if (uVar4 == 0x6c28ace285f916a1) {
              return param_1;
            }
          }
          if (-0x5b856bc094737a19 < (longlong)uVar4) break;
          if (uVar4 == 0x8788961ac4ea694f) {
            local_b0 = 0xd6ee3ec3519ad69c;
            if (local_a8 < 8) {
              local_b0 = 0x155fc754706b3885;
            }
            local_b8 = 0xd6c2a74788c80014;
          }
          else if (uVar4 == 0x8eec7053ce47b5a7) {
            local_b0 = 0x45d2411839e69830;
            if (local_78 < 0x7fffffffffffffec) {
              local_b0 = 0x9e102de7ae084f63;
            }
            local_b8 = 0xe9e44d876b83c8f4;
          }
          else if (uVar4 == 0x8e4a37ba2c88c40b) {
            FUN_180002ac0();
          }
        }
        if ((longlong)uVar4 < -0x3c629fec075cc76f) break;
        if (uVar4 == 0xc39d6013f8a33891) {
          param_1[2] = local_a8;
          param_1[3] = local_a0;
          uVar1 = *(undefined4 *)((longlong)local_80 + 4);
          uVar2 = *(undefined4 *)(local_80 + 1);
          uVar3 = *(undefined4 *)((longlong)local_80 + 0xc);
          *(undefined4 *)param_1 = *(undefined4 *)local_80;
          *(undefined4 *)((longlong)param_1 + 4) = uVar1;
          *(undefined4 *)(param_1 + 1) = uVar2;
          *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          local_b0 = 0x6a9b215f0727b6b;
          local_b8 = 0x6a811ef7758b6dca;
        }
        else if (uVar4 == 0xd944b79e7fd822d2) {
          local_60 = 10;
          if (10 < local_78) {
            local_60 = local_78;
          }
          local_70 = local_60 << (local_90 & 0x3f);
          local_b0 = 0x6f273511072969a3;
          if (0x7fe < local_78) {
            local_b0 = 0x9d0bf07e87f32caf;
          }
          local_b8 = 0x13e7802d49b49908;
        }
      }
      if (uVar4 != 0xa47a943f6b8c85e8) break;
      *param_1 = local_68;
      param_1[2] = local_a8;
      param_1[3] = local_60;
      FUN_1802079d0(local_68,local_80,(local_a8 << (local_90 & 0x3f)) + local_98);
      local_b0 = 0x347c8cef3305518c;
      local_b8 = 0x5854200db6fc472d;
    }
  } while (uVar4 != 0xac360c9f526550c4);
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined1 FUN_18005fdd0(uint *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_91;
  ulonglong local_90;
  ulonglong local_88;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  uint *local_70;
  ulonglong local_68;
  int local_5c;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  uint local_48;
  uint local_44;

  local_88 = 0xd3e838686d0806e2;
  local_90 = 0x8b3a2da8432a0d91;
LAB_18005feb0:
  uVar1 = local_88 ^ 0xe0c038f805d0d1c4;
  uVar2 = local_88 ^ local_90;
  local_90 = local_90 ^ 0xe0c038f805d0d1c4;
  local_88 = uVar1;
  if ((longlong)uVar2 < 0x12dfe259d1d36e39) {
    if (-0x37cb7af75d7d7321 < (longlong)uVar2) {
      if ((longlong)uVar2 < -0x1a5fd114c148a6d0) {
        if ((longlong)uVar2 < -0x2b8c3a693b1eb05e) {
          if (uVar2 == 0xc8348508a2828ce0) {
            local_88 = 0x79f20a3add8b3a99;
            local_90 = 0xadb2c50895598668;
            goto LAB_18005fea2;
          }
          if (uVar2 == 0xd30521931f23e858) {
            local_88 = 0x27bb10b219b4fb0;
            if (local_7c == 0x2f) {
              local_88 = 0x7153aa36a08d9074;
            }
            local_90 = 0x7864feafaf45da5f;
          }
          else if (uVar2 == 0xd440cf3248d2bcf1) {
            return local_91;
          }
        }
        else if (uVar2 == 0xd473c596c4e14fa2) {
          local_88 = 0xb3524dfc88787179;
          if (local_78 < 0x5c) {
            local_88 = 0xb5afbcc13820b545;
          }
          local_90 = 0xd529370f5f72153c;
        }
        else {
          if (uVar2 == 0xdc6f87412c4f11b1) {
            local_88 = 0xb0060e967e7ae679;
            local_90 = 0x6446c1a436a85a88;
            goto LAB_18005fea2;
          }
          if (uVar2 == 0xdd28ee5e8c8d878e) {
            local_88 = 0xf773743b51eb6586;
            if (local_7a == 0x5c) {
              local_88 = 0x804722f03af3c877;
            }
            local_90 = 0x9298c0a9eb20a64e;
          }
        }
      }
      else if ((longlong)uVar2 < 0x8abccaf43a24ef8) {
        if (uVar2 == 0xe5a02eeb3eb75930) {
          local_7a = (short)local_70[2];
          local_88 = 0x22c89321f480aefc;
          local_90 = 0x8395990c19647d18;
        }
        else if (uVar2 == 0xf00d51f409fd84f4) {
          local_72 = (short)local_70[1];
          local_88 = 0x8af3b33660696507;
          local_90 = 0xf78f6ba0ff5da00e;
        }
        else if (uVar2 == 0xfe1084f9c42a9160) {
          local_88 = 0xb8eecfd6c2348196;
          local_90 = 0xaa312d8f13e7efaf;
        }
      }
      else if (uVar2 == 0x8abccaf43a24ef8) {
        local_91 = (short)local_70[1] == local_74 || (short)local_70[1] == local_76;
        local_88 = 0x497750ef5622d05;
        local_90 = 0xd0d7ba3cbdb091f4;
      }
      else if (uVar2 == 0x93754990fc84a2b) {
        local_88 = 0x133f16f27ade5fb1;
        if (3 < local_68) {
          local_88 = 0x16f4499b44b4975d;
        }
        local_90 = 0x2b7b432623085204;
      }
      else if (uVar2 == 0xb79aa41637bed80) {
        local_88 = 0x76da53f8197cea84;
        if (local_80 < 0x3f) {
          local_88 = 0xe12b4b830f9bb408;
        }
        local_90 = 0xdedaf701ba0bd842;
      }
      goto LAB_18005feb0;
    }
    if ((longlong)uVar2 < -0x5d27c1a119fbaa8e) {
      if ((longlong)uVar2 < -0x6eeb66c11fb832b2) {
        if (uVar2 == 0x86bd113f21bb3ab0) {
          local_88 = 0x1727b420ff4bafd9;
          if (local_80 == 0x2f) {
            local_88 = 0x9146dcd8ddd2342f;
          }
          local_90 = 0xcb483361d304be68;
        }
        else if (uVar2 == 0x90c2d08903e7d319) {
          local_88 = 0x7799cbd5ebbeb987;
          if (local_80 == 0x3f) {
            local_88 = 0x4fa01f2940c1b193;
          }
          local_90 = 0xbfad4edd493c3567;
        }
      }
      else {
        if (uVar2 == 0x9114993ee047cd4e) {
          local_48 = *local_70;
          local_88 = 0x279d0089e1ca6f4f;
          if ((local_58 & local_48) + local_5c < local_54) {
            local_88 = 0x5105f1e54f1c86cc;
          }
          local_44 = local_48 >> 0x10;
          local_80 = (short)(local_48 >> 0x10);
          local_90 = 0x85453ed707ce3a3d;
          goto LAB_180060b4c;
        }
        if (uVar2 == 0x97349f430486284c) {
          local_88 = 0x45219623fceb579b;
          if ((longlong)local_68 < (longlong)local_50) {
            local_88 = 0x75c02f547e2624;
          }
          local_90 = 0xd4350f1d1cac9ad5;
          goto LAB_18005fea2;
        }
        if (uVar2 == 0xa15d0a2dede4d3e4) {
          local_88 = 0x234bab5e85b8cde;
          if (local_7a < 0x5c) {
            local_88 = 0x9116f2edf0b42ec3;
          }
          local_90 = 0xdf1c54eb64d60b50;
        }
      }
      goto LAB_18005feb0;
    }
    if ((longlong)uVar2 < -0x50c3afb74604c9c7) {
      if (uVar2 == 0xa2d83e5ee6045572) {
        local_7c = (short)local_48;
        local_88 = 0x68e6ea17687735c1;
        local_90 = 0xc7f5219941e1a85;
      }
      else if (uVar2 == 0xa800a4f9a37732c6) {
        local_88 = 0x77cef6fabfe26ac;
        if (local_80 < 0x5c) {
          local_88 = 0xc75398af90e231cf;
        }
        local_90 = 0x579148269305e2d6;
      }
      else if (uVar2 == 0xa820dda19bce545f) {
        local_88 = 0xe9af7b0b7406aa33;
        if (local_44 == 0x3f) {
          local_88 = 0x860c41c43ae10103;
        }
        local_90 = 0xfb709952a5d5c40a;
        local_72 = local_7e;
      }
      goto LAB_18005feb0;
    }
    if (uVar2 != 0xaf3c5048b9fb3639) {
      if (uVar2 == 0xb5a2db897e45780d) {
        local_88 = 0xa662bbb7d887bfda;
        local_90 = 0xe4266164349eb85;
      }
      else if (uVar2 == 0xb9ee8e3223ddd5af) {
        local_88 = 0xf9c162f554b18ba7;
        if (local_7c == 0x5c) {
          local_88 = 0x8ae979c8d5a75463;
        }
        local_90 = 0x83de2d51da6f1e48;
      }
      goto LAB_18005feb0;
    }
    local_88 = 0xb1fb8d699bfc4c6d;
    if ((longlong)local_50 < (longlong)local_68) {
      local_88 = 0x6d108ef4908cbe64;
    }
    local_90 = 0x65bb425bd32ef09c;
  }
  else {
    if ((longlong)uVar2 < 0x4f6c63ba9e1fdef7) {
      if ((longlong)uVar2 < 0x3ae5ad2c5472b738) {
        if (0x282b7c458edcc701 < (longlong)uVar2) {
          if (uVar2 == 0x282b7c458edcc702) {
            local_88 = 0x20fcd8270d42526d;
            if (local_80 < 0x5c) {
              local_88 = 0x884d46aa7d305527;
            }
            local_90 = 0xef057955c8b6f97;
          }
          else if (uVar2 == 0x2e0c8fb251c93dfa) {
            local_88 = 0x360588a626bd8ae4;
            if (local_80 == 0x5c) {
              local_88 = 0xb064e05e04241112;
            }
            local_90 = 0xea6a0fe70af29b55;
          }
          else if (uVar2 == 0x384455d459d60db5) {
            local_88 = 0x8f6208796dbfe425;
            if (local_68 == local_50) {
              local_88 = 0x49fd2512f4be36ed;
            }
            local_90 = 0x9dbdea20bc6c8a1c;
            goto LAB_18005fea2;
          }
          goto LAB_18005feb0;
        }
        if (uVar2 == 0x12dfe259d1d36e39) {
          local_88 = 0x4a57746b6a955a27;
          local_90 = 0x627c082ee4499d25;
          goto LAB_18005feb0;
        }
        if (uVar2 != 0x27fb32113de9f344) goto LAB_18005feb0;
        local_88 = 0xdbd792c2a146afdc;
        if (local_7e == 0x2e) {
          local_88 = 0xba35867997d16b20;
        }
        local_90 = 0x6e75494bdf03d7d1;
      }
      else {
        if (0x444b25cd144dff76 < (longlong)uVar2) {
          if (uVar2 == 0x444b25cd144dff77) {
            local_88 = 0xa214125a413276e4;
            if (local_7e < 0x3f) {
              local_88 = 0xbf0a8d6728a93298;
            }
            local_90 = 0x98f1bf761540c1dc;
          }
          else if (uVar2 == 0x4c5624af19448c31) {
            local_88 = 0x1a7d0a3fbc3a9fc3;
            if ((*local_70 & local_58) + local_5c < local_54) {
              local_88 = 0x2275c534014781b6;
            }
            local_90 = 0x8d49957cb8bcb78f;
          }
          else if (uVar2 == 0x4e0aa60694622593) {
            local_88 = 0x751b45da4f2d44b4;
            if (local_7a == 0x2f) {
              local_88 = 0x22f13112435e945;
            }
            local_90 = 0x10f0f148f5e6877c;
          }
          goto LAB_18005feb0;
        }
        if (uVar2 != 0x3ae5ad2c5472b738) {
          if (uVar2 == 0x3d8f0abd67bcc559) {
            local_78 = *(short *)((longlong)local_70 + 6);
            local_88 = 0x998866dd24731be6;
            local_90 = 0x4dfba34be0925444;
          }
          else if (uVar2 == 0x3ff1bc82b5906c4a) {
            local_88 = 0xf87ee53dcf9726a6;
            if (local_80 == 0x2f) {
              local_88 = 0x7f26038ff30a74b1;
            }
            local_90 = 0x304a60356d15aa46;
          }
          goto LAB_18005feb0;
        }
        local_88 = 0x55e279c11ea6d1f;
        if (local_7e == 0x3f) {
          local_88 = 0x64bc3327277da9e3;
        }
        local_90 = 0xb0fcfc156faf1512;
      }
LAB_180060b4c:
      local_91 = 1;
      goto LAB_18005feb0;
    }
    if ((longlong)uVar2 < 0x60868bce6752a079) {
      if ((longlong)uVar2 < 0x58d215c02e220b73) {
        if (uVar2 == 0x4f6c63ba9e1fdef7) {
          local_7e = (short)local_70[1];
          local_88 = 0x3f1b1f937b709a95;
          local_90 = 0x7b503a5e6f3d65e2;
        }
        else if (uVar2 == 0x50eda74938fbc47a) {
          local_88 = 0x7fb2969f9710b6c4;
          if (local_80 == 0x5c) {
            local_88 = 0xf8ea702dab8de4d3;
          }
          local_90 = 0xb786139735923a24;
        }
        else if (uVar2 == 0x561a1cff1bea7840) {
          local_88 = 0xc4abe91b200539f7;
          local_90 = 0xcfd2435a437ed477;
        }
        goto LAB_18005feb0;
      }
      if (uVar2 != 0x58d215c02e220b73) {
        if (uVar2 == 0x5a0eefb90ed68a47) {
          local_91 = (short)local_70[1] != local_74 && (short)local_70[1] != local_76;
          local_88 = 0xd2c5d3a11da81ba;
          local_90 = 0xd96c920859083d4b;
        }
        else if (uVar2 == 0x5c5cde672f3c1039) {
          local_88 = 0xc5e3efbf4815f1d4;
          if (local_68 == 4) {
            local_88 = 0x7659ddab6d48d0a4;
          }
          local_90 = 0x2043c15476a2a8e4;
        }
        goto LAB_18005feb0;
      }
      local_74 = 0x2f;
      local_54 = 0x1a;
      local_58 = 0xffffffdf;
      local_5c = -0x3a0041;
      local_76 = 0x5c;
      local_50 = 2;
      local_70 = param_1;
      if (7 < *(ulonglong *)(param_1 + 6)) {
        local_70 = *(uint **)param_1;
      }
      local_68 = *(ulonglong *)(param_1 + 4);
      local_88 = 0xb86456df480f3e8d;
      if (1 < local_68) {
        local_88 = 0x2072bd4219990e4d;
      }
      local_90 = 0x6c2499ed00dd827c;
    }
    else {
      if ((longlong)uVar2 < 0x667b7af3d70a6445) {
        if (uVar2 == 0x60868bce6752a079) {
          local_88 = 0x33987b8d37144bce;
          if (local_78 == 0x2f) {
            local_88 = 0x91d42113dc02ca97;
          }
          local_90 = 0xcd88ff74f33edaae;
        }
        else if (uVar2 == 0x6499b80efc692f44) {
          local_88 = 0xcc9339b975307290;
          if (local_7c < 0x5c) {
            local_88 = 0xa678961849ce4f67;
          }
          local_90 = 0x757db78b56eda73f;
        }
        else if (uVar2 == 0x65ebb492bacbc3c8) {
          local_88 = 0x9ba8cefbc76caeb3;
          local_90 = 0xcdb2d204dc86d6f3;
        }
        goto LAB_18005feb0;
      }
      if (uVar2 == 0x667b7af3d70a6445) {
        local_88 = 0x8fce55b6e1b0b954;
        if (local_78 == 0x5c) {
          local_88 = 0x2d820f280aa6380d;
        }
        local_90 = 0x71ded14f259a2834;
        goto LAB_18005feb0;
      }
      if (uVar2 != 0x7a1f4fa48ede95ef) {
        if (uVar2 == 0x7d7cd8969f34c509) {
          local_91 = local_72 == 0x3f;
          local_88 = 0x3f28b91e7bdd35b8;
          local_90 = 0xeb68762c330f8949;
        }
        goto LAB_18005feb0;
      }
      local_88 = 0x6ea1257adeabec17;
      local_90 = 0xbae1ea48967950e6;
    }
  }
LAB_18005fea2:
  local_91 = 0;
  goto LAB_18005feb0;
}


