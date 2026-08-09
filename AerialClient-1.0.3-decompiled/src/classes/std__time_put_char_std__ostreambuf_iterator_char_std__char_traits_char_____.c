#include "../include/aerialclient_types.h"


undefined8
std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_Constructor_or_Destructor
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
    uVar3 = thunk_FUN_1801ef564();
    thunk_FUN_1801f42e0(puVar2[2]);
    puVar2[2] = uVar3;
    *param_1 = (longlong)puVar2;
    FUN_1800322f0(local_a0);
  }
  return 5;
}



undefined4 * __thiscall
std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction4
          (time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,undefined4 *param_1,
          undefined4 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,char param_6,char param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined5 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uintptr_t uVar12;
  longlong lVar13;
  undefined8 *******pppppppuVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  undefined8 local_f8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  int *local_c0;
  longlong local_b8;
  uintptr_t local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  int local_8c;
  undefined8 *******local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  uint local_68;
  int local_64;
  ulonglong local_60;
  undefined4 local_58;
  undefined1 local_54;
  uint local_50;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_b0 = 0;
  local_4a = 1;
  local_a8 = 1;
  local_64 = -1;
  local_68 = 4;
  local_60 = 0xf;
  local_49 = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0x782521;
  local_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  if (param_7 != '\0') {
    local_58 = CONCAT13(param_6,0x782521);
    param_6 = param_7;
  }
  local_58._0_3_ = CONCAT12(param_6,(undefined2)local_58);
  local_b8 = param_3;
  local_a0 = param_2;
  local_98 = param_1;
  piVar11 = (int *)FUN_1801e6ae4();
  local_8c = *piVar11;
  uVar19 = 0x10;
  local_c0 = piVar11;
  do {
    if (local_70 - local_78 < uVar19) {
      FUN_1800682e0(&local_88,uVar19);
    }
    else {
      lVar1 = local_78 + uVar19;
      pppppppuVar14 = &local_88;
      if (local_60 < local_70) {
        pppppppuVar14 = local_88;
      }
      lVar13 = local_78 + (longlong)pppppppuVar14;
      local_78 = lVar1;
      FUN_180207610(lVar13,0,uVar19);
      *(undefined1 *)((longlong)pppppppuVar14 + lVar1) = local_49;
      piVar11 = local_c0;
    }
    pppppppuVar14 = &local_88;
    if (local_60 < local_70) {
      pppppppuVar14 = local_88;
    }
    uVar12 = FUN_1801f00ac(pppppppuVar14,local_78,&local_58,param_5,this[1].vftablePtr);
    if (uVar12 != local_b0) {
      *piVar11 = local_8c;
      uVar17 = *(undefined1 *)local_a0;
      plVar2 = *(longlong **)(local_a0 + 2);
      pppppppuVar14 = local_88;
      if (local_70 <= local_60) {
        pppppppuVar14 = &local_88;
      }
      uVar7 = CONCAT14(local_f8._7_1_,local_a0[1]);
      local_f8 = (failure_vftable *)CONCAT44((int)((uint5)uVar7 >> 8),*(undefined4 *)((longlong)local_a0 + 1));
      uVar18 = uVar17;
      if ((uVar12 == 1) || (uVar18 = local_4a, plVar2 == (longlong *)0x0)) goto LAB_1801b2077;
      puVar15 = (undefined1 *)((longlong)pppppppuVar14 + 1);
      goto LAB_1801b2030;
    }
    uVar19 = uVar19 << ((byte)local_a8 & 0x3f);
  } while (*piVar11 != 0x16);
  uVar9 = *(uint *)(local_b8 + 0x10) & 0x13 | local_68;
  *(uint *)(local_b8 + 0x10) = uVar9;
  uVar9 = uVar9 & *(uint *)(local_b8 + 0x14);
  if (uVar9 != local_50) {
    puVar16 = &DAT_1802a778c;
    if ((uVar9 & 2) == local_50) {
      puVar16 = &DAT_1802a77a8;
    }
    if ((*(uint *)(local_b8 + 0x14) & local_68) != local_50) {
      puVar16 = &DAT_1802a7770;
    }
    FUN_1801b23c0(&DAT_1802a77a8,&DAT_18029c305,0x1b,0x15,&DAT_1802a77c0);
    FUN_1801b23c0(&DAT_1802a778c,&DAT_18029c2c0,0x18,0x16,&DAT_1802a77a4);
    FUN_1801b23c0(&DAT_1802a7770,&DAT_18029c279,0x1f,0x15,&DAT_1802a7788);
    local_d0[0] = 1;
    local_c8 = &PTR_vftable_18020e948;
    FUN_18008bba0(&local_f8,local_d0,puVar16);
    local_f8 = &ios_base::failure::vftable;
    FUN_1801dd110(&local_f8,&DAT_1802536a8);
  }
  uVar4 = local_a0[1];
  uVar5 = local_a0[2];
  uVar6 = local_a0[3];
  *local_98 = *local_a0;
  local_98[1] = uVar4;
  local_98[2] = uVar5;
  local_98[3] = uVar6;
  if (local_70 <= local_60) {
    return local_98;
  }
  goto LAB_1801b2098;
LAB_1801b2030:
  do {
    uVar18 = *puVar15;
    if (*(longlong *)plVar2[8] == 0) {
LAB_1801b204a:
      iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar18);
      uVar18 = local_4a;
      if (iVar10 != local_64) {
        uVar18 = uVar17;
      }
    }
    else {
      iVar10 = *(int *)plVar2[0xb];
      if (iVar10 <= (int)local_50) goto LAB_1801b204a;
      *(int *)plVar2[0xb] = iVar10 + local_64;
      puVar3 = *(undefined1 **)plVar2[8];
      *(undefined1 **)plVar2[8] = puVar3 + 1;
      *puVar3 = uVar18;
      uVar18 = uVar17;
    }
    uVar17 = uVar18;
    puVar15 = puVar15 + 1;
    uVar18 = uVar17;
  } while (puVar15 != (undefined1 *)(uVar12 + (longlong)pppppppuVar14));
LAB_1801b2077:
  *(undefined1 *)local_98 = uVar18;
  uVar4 = (undefined4)local_f8;
  *(undefined4 *)((longlong)local_98 + 1) = uVar4;
  local_98[1] = local_f8._3_4_;
  *(longlong **)(local_98 + 2) = plVar2;
  if (local_70 <= local_60) {
    return local_98;
  }
LAB_1801b2098:
  puVar8 = local_98;
  uVar19 = local_a8 + local_70;
  pppppppuVar14 = local_88;
  if (0xfff < uVar19) {
    pppppppuVar14 = (undefined8 *******)local_88[-1];
    if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar14))) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_50,local_b0);
    }
    uVar19 = local_70 + 0x28;
  }
  thunk_FUN_1801f42e0(pppppppuVar14,uVar19);
  return puVar8;
}



time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> * __thiscall
std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vfunction1
          (time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xb2744c2630a13db3;
  local_50 = 0xf1db0a8ee0508acf;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xd189e8aaf97ca54e;
        if (uVar1 != 0xcce6904a196d4f27) break;
        thunk_FUN_1801f42e0(this,0x18);
        local_48 = 0x8ea968833ce51b54;
        local_50 = 0xf1a5cb4746a4d288;
      }
      if (uVar1 != 0x43af46a8d0f1b77c) break;
      this->vftablePtr = &vftable;
      thunk_FUN_1801f42e0(this[1].vftablePtr);
      local_48 = 0x1c0aaca0323c672b;
      if ((param_1 & 1) == 0) {
        local_48 = 0xafe09f2e5110e1d0;
      }
      local_50 = 0xd0ec3cea2b51280c;
    }
    local_48 = local_48 ^ 0xd189e8aaf97ca54e;
  } while (uVar1 != 0x7f0ca3c47a41c9dc);
  return this;
}


