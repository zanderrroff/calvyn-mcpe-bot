#include "../include/aerialclient_types.h"


undefined8
std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>_Constructor_or_Destructor
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 local_a0 [104];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_38 = 0x18;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_30 = (undefined8 *)FUN_1801d61c8(0x18);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar4 = &DAT_18020c3c0;
    }
    else {
      puVar4 = (undefined *)(lVar1 + 0x30);
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        puVar4 = *(undefined **)(lVar1 + 0x28);
      }
    }
    FUN_180032140(local_a0,puVar4);
    puVar2 = local_30;
    *(undefined4 *)(local_30 + 1) = 0;
    *local_30 = &vftable;
    local_30[2] = 0;
    uVar3 = FUN_1801ef564();
    thunk_FUN_1801f42e0(puVar2[2]);
    puVar2[2] = uVar3;
    *param_1 = (longlong)puVar2;
    FUN_1800322f0(local_a0);
  }
  return 5;
}



undefined4 * __thiscall
std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::vfunction4
          (time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> *this,undefined4 *param_1,
          undefined4 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,char param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined5 uVar8;
  undefined4 *puVar9;
  short sVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined8 *******pppppppuVar14;
  short *psVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 local_108;
  undefined4 local_e0 [2];
  undefined **local_d8;
  int *local_d0;
  longlong local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  int local_ac;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 ******local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  uint local_64;
  ulonglong local_60;
  undefined2 local_52;
  uint local_50;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_52 = 0;
  local_60 = 7;
  local_a8 = 0;
  local_49 = 1;
  local_a0 = 1;
  local_64 = 4;
  local_50 = 0;
  local_c8 = param_3;
  local_b8 = param_1;
  FUN_1801b2671(&DAT_1802a7858,&DAT_18029c62e,0xc,5,&DAT_1802a7864);
  local_90 = DAT_1802a7860;
  local_98 = DAT_1802a7858;
  local_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = local_60;
  if (param_7 != '\0') {
    local_98._0_6_ = (undefined6)DAT_1802a7858;
    local_98 = CONCAT26((short)param_6,(undefined6)local_98);
    param_6 = param_7;
  }
  local_98._0_6_ = CONCAT24((short)param_6,(undefined4)local_98);
  local_c0 = param_2;
  piVar12 = (int *)FUN_1801e6ae4();
  local_ac = *piVar12;
  uVar20 = 0x10;
  local_d0 = piVar12;
  do {
    if (local_70 - local_78 < uVar20) {
      FUN_180063860(&local_88,uVar20);
    }
    else {
      lVar19 = local_78 + uVar20;
      pppppppuVar14 = &local_88;
      if (local_60 < local_70) {
        pppppppuVar14 = (undefined8 *******)local_88;
      }
      lVar1 = lVar19;
      if (uVar20 != local_a8) {
        lVar1 = local_78 * 2;
        local_78 = lVar19;
        FUN_180207610((longlong)pppppppuVar14 + lVar1,0,uVar20 << ((byte)local_a0 & 0x3f));
        lVar1 = local_78;
      }
      local_78 = lVar1;
      *(undefined2 *)((longlong)pppppppuVar14 + lVar19 * 2) = local_52;
      piVar12 = local_d0;
    }
    pppppppuVar14 = &local_88;
    if (local_60 < local_70) {
      pppppppuVar14 = (undefined8 *******)local_88;
    }
    uVar13 = FUN_1801efc3c(pppppppuVar14,local_78,&local_98,param_5,this[1].vftablePtr);
    if (uVar13 != local_a8) {
      *piVar12 = local_ac;
      uVar17 = *(undefined1 *)local_c0;
      plVar3 = *(longlong **)(local_c0 + 2);
      pppppppuVar14 = (undefined8 *******)local_88;
      if (local_70 <= local_60) {
        pppppppuVar14 = &local_88;
      }
      uVar8 = CONCAT14(local_108._7_1_,local_c0[1]);
      local_108 = (failure_vftable *)CONCAT44((int)((uint5)uVar8 >> 8),*(undefined4 *)((longlong)local_c0 + 1));
      uVar18 = uVar17;
      if (((uVar13 & 0x7fffffffffffffff) == 1) || (uVar18 = local_49, plVar3 == (longlong *)0x0)) goto LAB_1801af5f0;
      psVar15 = (short *)((longlong)pppppppuVar14 + 2);
      goto LAB_1801af5b1;
    }
    uVar20 = uVar20 << ((byte)local_a0 & 0x3f);
  } while (*piVar12 != 0x16);
  uVar11 = *(uint *)(local_c8 + 0x10) & 0x13 | local_64;
  *(uint *)(local_c8 + 0x10) = uVar11;
  uVar11 = uVar11 & *(uint *)(local_c8 + 0x14);
  if (uVar11 != local_50) {
    puVar16 = &DAT_1802a778c;
    if ((uVar11 & 2) == local_50) {
      puVar16 = &DAT_1802a77a8;
    }
    if ((*(uint *)(local_c8 + 0x14) & local_64) != local_50) {
      puVar16 = &DAT_1802a7770;
    }
    FUN_1801b23c0(&DAT_1802a77a8,&DAT_18029c305,0x1b,0x15,&DAT_1802a77c0);
    FUN_1801b23c0(&DAT_1802a778c,&DAT_18029c2c0,0x18,0x16,&DAT_1802a77a4);
    FUN_1801b23c0(&DAT_1802a7770,&DAT_18029c279,0x1f,0x15,&DAT_1802a7788);
    local_e0[0] = 1;
    local_d8 = &PTR_vftable_18020e948;
    FUN_18008bba0(&local_108,local_e0,puVar16);
    local_108 = &ios_base::failure::vftable;
    FUN_1801dd110(&local_108,&DAT_1802536a8);
  }
  uVar5 = local_c0[1];
  uVar6 = local_c0[2];
  uVar7 = local_c0[3];
  *local_b8 = *local_c0;
  local_b8[1] = uVar5;
  local_b8[2] = uVar6;
  local_b8[3] = uVar7;
  if (local_70 <= local_60) {
    return local_b8;
  }
  goto LAB_1801af615;
LAB_1801af5b1:
  do {
    sVar10 = *psVar15;
    if (*(longlong *)plVar3[8] == 0) {
LAB_1801af580:
      sVar10 = (**(code **)(*plVar3 + 0x18))(plVar3,sVar10);
    }
    else {
      iVar2 = *(int *)plVar3[0xb];
      if (iVar2 <= (int)local_50) goto LAB_1801af580;
      *(int *)plVar3[0xb] = iVar2 + -1;
      psVar4 = *(short **)plVar3[8];
      *(short **)plVar3[8] = psVar4 + 1;
      *psVar4 = sVar10;
    }
    uVar18 = local_49;
    if (sVar10 != -1) {
      uVar18 = uVar17;
    }
    uVar17 = uVar18;
    psVar15 = psVar15 + 1;
    uVar18 = uVar17;
  } while (psVar15 != (short *)((longlong)pppppppuVar14 + uVar13 * 2));
LAB_1801af5f0:
  *(undefined1 *)local_b8 = uVar18;
  uVar5 = (undefined4)local_108;
  *(undefined4 *)((longlong)local_b8 + 1) = uVar5;
  local_b8[1] = local_108._3_4_;
  *(longlong **)(local_b8 + 2) = plVar3;
  if (local_70 <= local_60) {
    return local_b8;
  }
LAB_1801af615:
  puVar9 = local_b8;
  lVar19 = local_70 << ((byte)local_a0 & 0x3f);
  uVar20 = lVar19 + 2;
  pppppppuVar14 = (undefined8 *******)local_88;
  if (0xfff < uVar20) {
    pppppppuVar14 = (undefined8 *******)local_88[-1];
    if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar14))) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_a8);
    }
    uVar20 = lVar19 + 0x29;
  }
  thunk_FUN_1801f42e0(pppppppuVar14,uVar20);
  return puVar9;
}



time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> * __thiscall
std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::vfunction1
          (time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x851ba8f901a9f18d;
  local_50 = 0x556a6e1223816caf;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x7c335e640ca0f7bd;
        if (uVar1 != 0xd071c6eb22289d22) break;
        this->vftablePtr = &vftable;
        thunk_FUN_1801f42e0(this[1].vftablePtr);
        local_48 = 0xc8a10de075389bfe;
        if ((param_1 & 1) == 0) {
          local_48 = 0xf842e739cfcb28d9;
        }
        local_50 = 0xf12256852d7b5005;
      }
      if (uVar1 != 0x39835b655843cbfb) break;
      thunk_FUN_1801f42e0(this,0x18);
      local_48 = 0x4db4e19dcbfe1f85;
      local_50 = 0x44d45021294e6759;
    }
    local_48 = local_48 ^ 0x7c335e640ca0f7bd;
  } while (uVar1 != 0x960b1bce2b078dc);
  return this;
}


