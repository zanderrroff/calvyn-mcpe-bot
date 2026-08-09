#include "../include/aerialclient_types.h"


void FUN_1801b11b0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  failure_vftable *local_70 [5];
  undefined4 local_48 [2];
  undefined **local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;

  local_28 = 0xfffffffffffffffe;
  local_34 = 4;
  local_30 = 2;
  local_2c = 0;
  lVar4 = (longlong)*(int *)(*param_1 + 4);
  if ((*(int *)((longlong)param_1 + lVar4 + 0x10) == 0) && ((*(uint *)((longlong)param_1 + lVar4 + 0x18) & 2) != 0)) {
    iVar2 = (**(code **)(**(longlong **)((longlong)param_1 + lVar4 + 0x48) + 0x68))();
    if (iVar2 == -1) {
      lVar4 = (longlong)*(int *)(*param_1 + 4);
      uVar3 = *(uint *)((longlong)param_1 + lVar4 + 0x10) & 0x13 | local_34;
      *(uint *)((longlong)param_1 + lVar4 + 0x10) = uVar3;
      uVar1 = *(uint *)((longlong)param_1 + lVar4 + 0x14);
      uVar3 = uVar3 & uVar1;
      if (uVar3 != local_2c) {
        puVar5 = &DAT_1802a778c;
        if ((uVar3 & local_30) == local_2c) {
          puVar5 = &DAT_1802a77a8;
        }
        if ((uVar1 & local_34) != local_2c) {
          puVar5 = &DAT_1802a7770;
        }
        FUN_1801b23c0(&DAT_1802a77a8,&DAT_18029c305,0x1b,0x15,&DAT_1802a77c0);
        FUN_1801b23c0(&DAT_1802a778c,&DAT_18029c2c0,0x18,0x16,&DAT_1802a77a4);
        FUN_1801b23c0(&DAT_1802a7770,&DAT_18029c279,0x1f,0x15,&DAT_1802a7788);
        local_48[0] = 1;
        local_40 = &PTR_vftable_18020e948;
        FUN_18008bba0(local_70,local_48,puVar5);
        local_70[0] = &std::ios_base::failure::vftable;
        FUN_1801dd110(local_70,&DAT_1802536a8);
      }
    }
  }
  return;
}



undefined8 Catch_All_1801b1350(void)

{
  return 0x1801b1251;
}



void Unwind_1801b1380(void)

{
  Unwind_1801dd394();
}



longlong * FUN_1801b13a0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  _Lockit local_54 [4];
  longlong *local_50;
  longlong *local_48;
  int local_3c;
  int local_38;
  _Lockit local_34 [4];
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_3c = 1;
  local_38 = 0;
  std::_Lockit::_Lockit(local_34,0);
  plVar2 = DAT_1802a72d0;
  local_50 = DAT_1802a72d0;
  if (DAT_1802a72a8 == 0) {
    std::_Lockit::_Lockit(local_54,local_38);
    if (DAT_1802a72a8 == 0) {
      DAT_1802a72a8 = (longlong)local_3c + (longlong)DAT_1802a9348;
      DAT_1802a9348 = (int)DAT_1802a72a8;
    }
    std::_Lockit::~_Lockit(local_54);
  }
  uVar1 = DAT_1802a72a8;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((*(ulonglong *)(lVar3 + 0x18) <= DAT_1802a72a8) ||
     (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + DAT_1802a72a8 * 8), plVar4 == (longlong *)0x0)) {
    if (*(char *)(lVar3 + 0x24) == '\x01') {
      lVar3 = FUN_1801d8b40();
      if ((uVar1 < *(ulonglong *)(lVar3 + 0x18)) &&
         (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + uVar1 * 8), plVar4 != (longlong *)0x0))
      goto LAB_1801b14d7;
    }
    plVar4 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      lVar3 = std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
              time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_Constructor_or_Destructor
                        ((longlong *)&local_50,param_1);
      if (lVar3 == -1) {
        std::bad_cast::bad_cast_Constructor_or_Destructor();
      }
      local_48 = local_50;
      FUN_1801d8b04();
      (**(code **)(*local_48 + 8))();
      DAT_1802a72d0 = local_50;
      plVar4 = local_50;
    }
  }
LAB_1801b14d7:
  std::_Lockit::~_Lockit(local_34);
  return plVar4;
}



void Unwind_1801b1500(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x40))(*(undefined8 **)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x4c));
  }
  return;
}



void Unwind_1801b1540(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x54));
  return;
}



void FUN_1801b1570(longlong *param_1,undefined1 *param_2,undefined4 *param_3,longlong param_4,undefined1 param_5,
                  undefined8 param_6,undefined1 *param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined1 *puVar15;
  bool bVar16;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 local_5c;
  int local_58;
  undefined1 local_51;
  int local_50;
  undefined1 local_49;
  undefined8 local_48;
  uint uVar14;

  local_48 = 0xfffffffffffffffe;
  local_49 = 1;
  local_5c = 1;
  local_50 = -1;
  local_51 = 0;
  local_58 = 0;
  uStack_68 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_88 = param_4;
  local_80 = param_1;
  (**(code **)(*uStack_68 + 8))();
  plVar11 = (longlong *)FUN_18008bf60(&local_70);
  local_78 = param_2;
  if ((uStack_68 != (longlong *)0x0) &&
     (puVar12 = (undefined8 *)(**(code **)(*uStack_68 + 0x10))(), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)(puVar12,local_5c);
  }
LAB_1801b1649:
  if (param_7 == param_8) {
LAB_1801b1bc0:
    *local_78 = *(undefined1 *)param_3;
    *(undefined8 *)(local_78 + 1) = *(undefined8 *)((longlong)param_3 + 1);
    *(undefined4 *)(local_78 + 9) = *(undefined4 *)((longlong)param_3 + 9);
    *(undefined2 *)(local_78 + 0xd) = *(undefined2 *)((longlong)param_3 + 0xd);
    local_78[0xf] = *(undefined1 *)((longlong)param_3 + 0xf);
    return;
  }
  cVar6 = (**(code **)(*plVar11 + 0x50))(plVar11,*param_7,local_51);
  if (cVar6 != '%') {
    plVar2 = *(longlong **)(param_3 + 2);
    if (plVar2 == (longlong *)0x0) goto LAB_1801b1640;
    uVar1 = *param_7;
    if (*(longlong *)plVar2[8] == 0) {
LAB_1801b1730:
      iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
      puVar15 = param_7;
      if (iVar10 == local_50) goto LAB_1801b1640;
      goto LAB_1801b1646;
    }
    iVar10 = *(int *)plVar2[0xb];
    if (iVar10 <= local_58) goto LAB_1801b1730;
    *(int *)plVar2[0xb] = iVar10 + local_50;
    puVar15 = *(undefined1 **)plVar2[8];
    *(undefined1 **)plVar2[8] = puVar15 + 1;
    *puVar15 = uVar1;
    param_7 = param_7 + 1;
    goto LAB_1801b1649;
  }
  puVar15 = param_7 + 1;
  if (puVar15 == param_8) {
    plVar11 = *(longlong **)(param_3 + 2);
    if (plVar11 != (longlong *)0x0) {
      uVar1 = *param_7;
      if (*(longlong *)plVar11[8] != 0) {
        iVar10 = *(int *)plVar11[0xb];
        if (local_58 < iVar10) {
          *(int *)plVar11[0xb] = iVar10 + local_50;
          puVar15 = *(undefined1 **)plVar11[8];
          *(undefined1 **)plVar11[8] = puVar15 + 1;
          *puVar15 = uVar1;
          goto LAB_1801b1bc0;
        }
      }
      iVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,uVar1);
      if (iVar10 != local_50) goto LAB_1801b1bc0;
    }
LAB_1801b1bba:
    *(undefined1 *)param_3 = local_49;
    goto LAB_1801b1bc0;
  }
  uVar8 = (**(code **)(*plVar11 + 0x50))(plVar11,param_7[1],local_51);
  uVar1 = *param_7;
  cVar6 = (char)uVar8;
  if (cVar6 < 'E') {
    if (cVar6 < '%') {
      if (cVar6 == '#') goto LAB_1801b17e7;
    }
    else if (cVar6 == '%') {
      plVar2 = *(longlong **)(param_3 + 2);
      if (plVar2 != (longlong *)0x0) {
        if (*(longlong *)plVar2[8] != 0) {
          iVar10 = *(int *)plVar2[0xb];
          if (local_58 < iVar10) {
            *(int *)plVar2[0xb] = iVar10 + local_50;
            puVar15 = *(undefined1 **)plVar2[8];
            *(undefined1 **)plVar2[8] = puVar15 + 1;
            *puVar15 = uVar1;
            param_7 = param_7 + 2;
            goto LAB_1801b1649;
          }
        }
        iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
        if (iVar10 != local_50) {
          param_7 = param_7 + 2;
          goto LAB_1801b1649;
        }
      }
      *(undefined1 *)param_3 = local_49;
      param_7 = param_7 + 2;
      goto LAB_1801b1649;
    }
LAB_1801b17a0:
    bVar5 = true;
    uVar14 = 0;
    uVar9 = uVar8;
    if ('i' < cVar6) goto LAB_1801b181b;
LAB_1801b17af:
    uVar13 = (undefined1)uVar14;
    cVar6 = (char)uVar9;
    if (cVar6 < 'R') {
      if (cVar6 < 'F') {
        bVar7 = cVar6 + 0xbf;
joined_r0x0001801b1913:
        if (bVar7 < 4) goto LAB_1801b184b;
        goto LAB_1801b1962;
      }
      bVar16 = cVar6 == 'M';
      if (cVar6 < 'M') {
        bVar7 = cVar6 + 0xba;
        goto joined_r0x0001801b1913;
      }
LAB_1801b195c:
      uVar13 = (undefined1)uVar14;
      if (!bVar16) goto LAB_1801b1962;
    }
    else {
      if (cVar6 < 'a') {
        if ((byte)(cVar6 + 0xaeU) < 9) goto LAB_1801b184b;
        goto LAB_1801b1962;
      }
      if ('f' < cVar6) {
        bVar7 = cVar6 + 0x99;
        goto joined_r0x0001801b1a8a;
      }
      if (4 < (byte)(cVar6 + 0x9fU)) goto LAB_1801b1962;
    }
  }
  else {
    if (cVar6 < 'O') {
      if (cVar6 == 'E') goto LAB_1801b17e7;
      goto LAB_1801b17a0;
    }
    if (cVar6 < 'Q') {
      if (cVar6 != 'O') goto LAB_1801b17a0;
    }
    else if (cVar6 != 'Q') goto LAB_1801b17a0;
LAB_1801b17e7:
    puVar15 = param_7 + 2;
    if (puVar15 == param_8) {
      plVar11 = *(longlong **)(param_3 + 2);
      if (plVar11 == (longlong *)0x0) {
LAB_1801b1b6f:
        *(undefined1 *)param_3 = local_49;
      }
      else if (*(longlong *)plVar11[8] == 0) {
LAB_1801b1b61:
        iVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,uVar1);
        if (iVar10 == local_50) goto LAB_1801b1b6f;
      }
      else {
        iVar10 = *(int *)plVar11[0xb];
        if (iVar10 <= local_58) goto LAB_1801b1b61;
        *(int *)plVar11[0xb] = iVar10 + local_50;
        puVar15 = *(undefined1 **)plVar11[8];
        *(undefined1 **)plVar11[8] = puVar15 + 1;
        *puVar15 = uVar1;
      }
      plVar11 = *(longlong **)(param_3 + 2);
      if (plVar11 == (longlong *)0x0) goto LAB_1801b1bba;
      if (*(longlong *)plVar11[8] != 0) {
        iVar10 = *(int *)plVar11[0xb];
        if (local_58 < iVar10) {
          *(int *)plVar11[0xb] = iVar10 + local_50;
          pcVar4 = *(char **)plVar11[8];
          *(char **)plVar11[8] = pcVar4 + 1;
          *pcVar4 = cVar6;
          goto LAB_1801b1bc0;
        }
      }
      iVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,uVar8 & 0xff);
      if (iVar10 != local_50) goto LAB_1801b1bc0;
      goto LAB_1801b1bba;
    }
    uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,*puVar15,local_51);
    bVar5 = false;
    uVar14 = uVar8;
    if ((char)uVar9 < 'j') goto LAB_1801b17af;
LAB_1801b181b:
    uVar13 = (undefined1)uVar14;
    bVar7 = (byte)uVar9;
    if ((char)bVar7 < 'r') {
      if ((char)bVar7 < 'm') {
        if (bVar7 != 0x6a) goto LAB_1801b1962;
      }
      else {
        bVar16 = bVar7 == 0x70;
        if ('o' < (char)bVar7) goto LAB_1801b195c;
        bVar7 = bVar7 + 0x93;
joined_r0x0001801b1a8a:
        if (1 < bVar7) goto LAB_1801b1962;
      }
    }
    else if ((char)bVar7 < 't') {
      if (bVar7 != 0x72) goto LAB_1801b1962;
    }
    else if ((char)bVar7 < 'w') {
      if ((bVar7 & 0x7e) != 0x74) {
LAB_1801b1962:
        plVar2 = *(longlong **)(param_3 + 2);
        if (plVar2 == (longlong *)0x0) {
LAB_1801b19ac:
          *(undefined1 *)param_3 = local_49;
        }
        else if (*(longlong *)plVar2[8] == 0) {
LAB_1801b1998:
          iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
          if (iVar10 == local_50) goto LAB_1801b19ac;
        }
        else {
          iVar10 = *(int *)plVar2[0xb];
          if (iVar10 <= local_58) goto LAB_1801b1998;
          *(int *)plVar2[0xb] = iVar10 + local_50;
          puVar3 = *(undefined1 **)plVar2[8];
          *(undefined1 **)plVar2[8] = puVar3 + 1;
          *puVar3 = uVar1;
        }
        if (!bVar5) {
          plVar2 = *(longlong **)(param_3 + 2);
          if (plVar2 != (longlong *)0x0) {
            if (*(longlong *)plVar2[8] != 0) {
              iVar10 = *(int *)plVar2[0xb];
              if (local_58 < iVar10) {
                *(int *)plVar2[0xb] = iVar10 + local_50;
                puVar3 = *(undefined1 **)plVar2[8];
                *(undefined1 **)plVar2[8] = puVar3 + 1;
                *puVar3 = (char)uVar14;
                goto LAB_1801b1a2c;
              }
            }
            iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar14 & 0xff);
            if (iVar10 != local_50) goto LAB_1801b1a2c;
          }
          *(undefined1 *)param_3 = local_49;
        }
LAB_1801b1a2c:
        plVar2 = *(longlong **)(param_3 + 2);
        param_7 = puVar15;
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)plVar2[8] != 0) {
            iVar10 = *(int *)plVar2[0xb];
            if (local_58 < iVar10) {
              *(int *)plVar2[0xb] = iVar10 + local_50;
              puVar3 = *(undefined1 **)plVar2[8];
              *(undefined1 **)plVar2[8] = puVar3 + 1;
              *puVar3 = (char)uVar9;
              param_7 = puVar15 + 1;
              goto LAB_1801b1649;
            }
          }
          iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar9 & 0xff);
          if (iVar10 != local_50) goto LAB_1801b1646;
        }
        goto LAB_1801b1640;
      }
    }
    else if (3 < (byte)(bVar7 + 0x89)) goto LAB_1801b1962;
  }
LAB_1801b184b:
  cVar6 = FUN_1801af970(uVar9,param_6);
  if (cVar6 != '\0') {
    local_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90 = param_3[2];
    uStack_8c = param_3[3];
    (**(code **)(*local_80 + 0x18))(local_80,&local_70,&local_98,local_88,param_5,param_6,(char)uVar9,uVar13);
    *param_3 = local_70;
    param_3[1] = uStack_6c;
    param_3[2] = (undefined4)uStack_68;
    param_3[3] = uStack_68._4_4_;
    param_7 = puVar15 + 1;
    goto LAB_1801b1649;
  }
  plVar2 = *(longlong **)(param_3 + 2);
  param_7 = puVar15;
  if (plVar2 != (longlong *)0x0) {
    if (*(longlong *)plVar2[8] != 0) {
      iVar10 = *(int *)plVar2[0xb];
      if (local_58 < iVar10) {
        *(int *)plVar2[0xb] = iVar10 + local_50;
        puVar3 = *(undefined1 **)plVar2[8];
        *(undefined1 **)plVar2[8] = puVar3 + 1;
        *puVar3 = 0x3f;
        param_7 = puVar15 + 1;
        goto LAB_1801b1649;
      }
    }
    iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2,0x3f);
    if (iVar10 != local_50) goto LAB_1801b1646;
  }
LAB_1801b1640:
  *(undefined1 *)param_3 = local_49;
  puVar15 = param_7;
LAB_1801b1646:
  param_7 = puVar15 + 1;
  goto LAB_1801b1649;
}



void Unwind_1801b1c00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  if (*(longlong **)(param_2 + 0x70) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_2 + 0x7c));
    }
  }
  return;
}



void Unwind_1801b1d40(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x90));
  return;
}



void Unwind_1801b2230(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0xa0);
  return;
}



void FUN_1801b23c0(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xdd767f9b7bff9c65;
  local_68 = 0xebda258b0b09c985;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x252aaeba9f03d4aa;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x252aaeba9f03d4aa;
          local_60 = uVar2;
          if (0x240188fb51bb6b60 < (longlong)uVar1) break;
          if (uVar1 == 0xacec1e00d23b7a81) {
            local_69 = local_6b;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0x45852ae0ce19b702;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0xb8a3b0283a3073c1;
            }
            local_68 = 0x84135facbed7cc74;
          }
          else if (uVar1 == 0xb13d4c90300b7409) {
            *param_5 = 1;
            local_60 = 0xbe865dfe02e28cbd;
            local_68 = 0xe49283650a56abbb;
          }
          else if (uVar1 == 0xc196754c70ce7b76) {
            local_6a = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x9f52e7aa6024fb4a;
            local_68 = 0xbb536f51319f902b;
          }
        }
        if (0x3cb0ef8484e7bfb4 < (longlong)uVar1) break;
        if (uVar1 == 0x240188fb51bb6b61) {
          local_6b = local_6a ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6b;
          local_54 = local_4c + 1;
          local_60 = 0x6fa30385cc0344c3;
          if (local_54 == param_4) {
            local_60 = 0x727251152e334a4b;
          }
          local_68 = 0xc34f1d851e383e42;
        }
        else if (uVar1 == 0x36ac5a1070f655e0) {
          local_60 = 0x665b66fd69c604b6;
          if (*param_5 == 1) {
            local_60 = 0x90a3a666b3495931;
          }
          local_68 = 0xcab778fdbbfd7e37;
          local_54 = 0;
          local_6b = 0;
          local_48 = (int)param_3 + param_2;
        }
      }
      if (uVar1 != 0x3cb0ef8484e7bfb5) break;
      local_6a = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0xe8f97eb6dcddc9dc;
      local_68 = 0xccf8f64d8d66a2bd;
    }
  } while (uVar1 != 0x5a14de9b08b42706);
  return;
}



void FUN_1801b2671(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xd472ae8e81d218f;
  local_68 = 0xb9712050e1921379;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xb5e34abd584c71f9;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xb5e34abd584c71f9;
          local_60 = uVar2;
          if ((longlong)uVar1 < -0x1618e098cc7e9751) break;
          if (uVar1 == 0xe9e71f67338168af) {
            local_6c = local_6e ^ local_72;
            *(ushort *)(param_1 + (longlong)(int)local_4c * 2) = local_6c;
            local_54 = local_4c + 1;
            local_60 = 0xd29a21a8f83a73bf;
            if (local_54 == param_4) {
              local_60 = 0xa80cc8225091388;
            }
            local_68 = 0xff5699c7b076ee17;
          }
          else if (uVar1 == 0xf5d65545957ffd9f) {
            *param_5 = 1;
            local_60 = 0x276cf070671b66f4;
            local_68 = 0x858d48ae1d1a1e23;
          }
          else if (uVar1 == 0x2dccb86f484c9da8) {
            local_6a = local_6c;
            local_4c = local_54;
            local_72 = *(ushort *)(param_2 + (longlong)(int)(local_54 % param_3) * 2);
            local_70 = *(short *)(local_48 + (int)(local_54 * 2));
            local_60 = 0xb0a8abf1a80c55f5;
            if (((local_54 % param_3) * (uint)local_72 & 1) == 0) {
              local_60 = 0xcf2ee2a79c683e5c;
            }
            local_68 = 0x70e4a206d4dbe3a2;
          }
        }
        if ((longlong)uVar1 < -0x4035bf5eb74c2202) break;
        if (uVar1 == 0xbfca40a148b3ddfe) {
          local_6e = ~(local_70 + local_6a ^ local_72);
          local_60 = 0xa0c95c71d76dd8b3;
          local_68 = 0x492e4316e4ecb01c;
        }
        else if (uVar1 == 0xc04c09f77cd7b657) {
          local_6e = -(local_70 - local_6a ^ local_72);
          local_60 = 0x9bfcec3007a4b05b;
          local_68 = 0x721bf3573425d8f4;
        }
      }
      if (uVar1 != 0xb4360ab8098f32f6) break;
      local_60 = 0x176d0eccb8789ecf;
      if (*param_5 == 1) {
        local_60 = 0x98400e7d8a357bb0;
      }
      local_68 = 0x3aa1b6a3f0340367;
      local_54 = 0;
      local_6c = 0;
      local_48 = (int)(param_3 * 2) + param_2;
    }
  } while (uVar1 != 0xa2e1b8de7a0178d7);
  return;
}



void FUN_1801b2950(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x91c424cb5af1b907;
  local_50 = 0x86b07616b4ecf946;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0xc8aec150d14cc46f;
        if (uVar1 != 0x177452ddee1d4041) break;
        local_48 = 0xdfbf7c4544d90a51;
        if (DAT_1802a7890 == 1) {
          local_48 = 0x3325cef862730692;
        }
        local_50 = 0xf8d00cdf7fb70290;
      }
      if (uVar1 != 0x276f709a3b6e08c1) break;
      FUN_1801b23c0(&DAT_1802a741c,&DAT_18029b038,0x1d,6,&DAT_1802a7424);
      _DAT_1802a7868 = &DAT_1802a741c;
      FUN_1801b23c0(&DAT_1802a7428,&DAT_18029b06b,0x17,6,&DAT_1802a7430);
      _DAT_1802a7870 = &DAT_1802a7428;
      FUN_1801b23c0(&DAT_1802a7434,&DAT_18029b09c,0x13,6,&DAT_1802a743c);
      _DAT_1802a7878 = &DAT_1802a7434;
      FUN_1801b23c0(&DAT_1802a7440,&DAT_18029b0d2,0x1b,6,&DAT_1802a7448);
      _DAT_1802a7880 = &DAT_1802a7440;
      FUN_1801b23c0(&DAT_1802a744c,&DAT_18029b104,0x13,6,&DAT_1802a7454);
      _DAT_1802a7888 = &DAT_1802a744c;
      DAT_1802a7890 = 1;
      local_48 = 0x33e908673faf2335;
      local_50 = 0xf81cca40226b2737;
    }
    local_48 = local_48 ^ 0xc8aec150d14cc46f;
  } while (uVar1 != 0xcbf5c2271dc40402);
  return;
}



undefined8 FUN_1801b2b70(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0xf3835d42eea63758;
  local_50 = 0x86ccd48d8eb3b792;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x374faa52a53f6969;
        if ((longlong)uVar1 < 0x7125ea96763737dc) break;
        if (uVar1 == 0x7125ea96763737dc) {
          FUN_1801d62d8(&DAT_1802a78a8);
          local_48 = 0x9e1329bd5dacba6f;
          if (DAT_1802a78a8 == -1) {
            local_48 = 0x34442890db0c912a;
          }
          local_50 = 0x6b7c201691e6ad01;
        }
        else {
          local_48 = local_48 ^ 0x374faa52a53f6969;
          if (uVar1 == 0x754f89cf601580ca) {
            local_48 = 0x8fcf3cafe18af763;
            if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
                DAT_1802a78a8) {
              local_48 = 0xb85df925bf7d7d1;
            }
            local_50 = 0x7aa035042dc0e00d;
          }
        }
      }
      if (uVar1 != 0x5f3808864aea3c2b) break;
      FUN_1801b40c0();
      _Init_thread_footer(&DAT_1802a78a8);
      local_48 = 0x245e5843667ca828;
      local_50 = 0xd13151e8aa36bf46;
    }
    local_48 = local_48 ^ 0x374faa52a53f6969;
  } while (uVar1 != 0xf56f09abcc4a176e);
  return DAT_1802a7898;
}



undefined8 FUN_1801b2d10(void)

{
  ulonglong uVar1;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = 0x586f7334ced593f6;
  local_50 = 0x1e695600aa686fea;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x204ea057a80ccf18;
        if (0x2cd72233900d5096 < (longlong)uVar1) break;
        if (uVar1 == 0xe6958eae3a3d611c) {
          FUN_1801d62d8(&DAT_1802a78a8);
          local_48 = 0x18483484f6ad86b4;
          if (DAT_1802a78a8 == -1) {
            local_48 = 0x3c402c6bd3805152;
          }
          local_50 = 0x349f16b766a0d623;
        }
        else {
          local_48 = local_48 ^ 0x204ea057a80ccf18;
          if (uVar1 == 0x8df3adcb5208771) {
            FUN_1801b40c0();
            _Init_thread_footer(&DAT_1802a78a8);
            local_48 = 0xff1265e41fa4d112;
            local_50 = 0xd3c547d78fa98185;
          }
        }
      }
      if (uVar1 != 0x4606253464bdfc1c) break;
      local_48 = 0x5ff5fa2c29085791;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
          DAT_1802a78a8) {
        local_48 = 0x95b756b18338661a;
      }
      local_50 = 0x7322d81fb9050706;
    }
    local_48 = local_48 ^ 0x204ea057a80ccf18;
  } while (uVar1 != 0x2cd72233900d5097);
  return DAT_1802a78a0;
}



ulonglong FUN_1801b2eb0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  byte *local_c8;
  byte *pbStack_c0;
  byte *local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  ulonglong local_80;
  uint local_78;
  undefined4 local_74;
  longlong local_70;
  uint local_64;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  char local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulonglong local_58;
  byte local_49;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_60 = -0x37;
  local_5f = -0x61;
  local_78 = 0;
  local_90 = 0xe000000000000000;
  local_64 = 0xffffffff;
  local_5e = -0x41;
  local_5d = -0x57;
  local_80 = 0x1f;
  local_58 = 0;
  local_5c = -0x30;
  local_49 = 6;
  local_88 = 5;
  local_5b = 10;
  local_5a = 0;
  local_70 = 1;
  local_74 = 0x20;
  lVar8 = *param_1;
  uVar3 = param_1[1];
  local_a8 = 0;
  lStack_a0 = 0;
  local_b8 = (byte *)0x0;
  lStack_b0 = 0;
  local_c8 = (byte *)0x0;
  pbStack_c0 = (byte *)0x0;
  local_98 = 0;
  if (uVar3 != 0) {
    uVar14 = 0;
    do {
      cVar1 = *(char *)(lVar8 + uVar14);
      if (cVar1 < '?') {
        if (cVar1 != ' ') {
LAB_1801b32a0:
          if (uVar14 < uVar3) {
            bVar4 = local_5c + cVar1;
            if (local_5b <= bVar4) {
              cVar2 = local_5d;
              if ((local_49 <= (byte)(local_5f + cVar1)) && (cVar2 = local_60, local_49 <= (byte)(local_5e + cVar1)))
              goto LAB_1801b3260;
              bVar4 = cVar1 + cVar2;
            }
            uVar15 = local_70 + uVar14;
            if (uVar15 < uVar3) {
              cVar1 = *(char *)(lVar8 + uVar15);
              bVar13 = local_5c + cVar1;
              if (local_5b <= bVar13) {
                cVar2 = local_5d;
                if ((local_49 <= (byte)(local_5f + cVar1)) && (cVar2 = local_60, local_49 <= (byte)(local_5e + cVar1)))
                goto LAB_1801b3494;
                bVar13 = cVar1 + cVar2;
              }
              bVar4 = bVar4 << 4 | bVar13;
              uVar15 = uVar14 + 2;
              local_59 = bVar4;
              if (pbStack_c0 != local_b8) goto LAB_1801b34a1;
LAB_1801b3485:
              FUN_1801b4b00(&local_c8,pbStack_c0,&local_59);
              uVar14 = uVar15;
            }
            else {
LAB_1801b3494:
              local_59 = bVar4;
              if (pbStack_c0 == local_b8) goto LAB_1801b3485;
LAB_1801b34a1:
              *pbStack_c0 = bVar4;
              pbStack_c0 = pbStack_c0 + 1;
              uVar14 = uVar15;
              local_59 = bVar4;
            }
            uVar15 = local_90;
            if ((longlong)local_58 <= (longlong)local_98) {
              uVar15 = local_58;
            }
            local_d8 = local_98 & local_80;
            local_e0 = (local_98 >> ((byte)local_88 & 0x3f)) * 4 + lStack_b0 + uVar15;
            uVar7 = FUN_1800a7a20(&lStack_b0,&local_e0,local_70);
            uVar15 = local_90;
            if ((longlong)local_58 <= (longlong)uVar7) {
              uVar15 = local_58;
            }
            uVar10 = local_80 & uVar7;
            uVar11 = local_70 + uVar10 >> 3 & 4;
            uVar12 = local_70 + uVar10 & local_80;
            if ((uVar10 != uVar12) || (uVar11 != local_58)) {
              puVar16 = (uint *)((uVar7 >> ((byte)local_88 & 0x3f)) * 4 + lStack_b0 + uVar15);
              uVar5 = local_64 << ((byte)uVar10 & 0x1f);
              if (uVar11 == local_58) {
                *puVar16 = *puVar16 | local_64 >> ((char)local_74 - (char)uVar12 & 0x1fU) & uVar5;
              }
              else {
                *puVar16 = *puVar16 | uVar5;
                FUN_180207610(puVar16 + 1,CONCAT71((int7)(uVar10 >> 8),0xff));
                if (uVar12 != local_58) {
                  *(uint *)((longlong)puVar16 + uVar11) =
                       *(uint *)((longlong)puVar16 + uVar11) | local_64 >> ((char)local_74 - (char)uVar12 & 0x1fU);
                }
              }
            }
            goto LAB_1801b3264;
          }
        }
LAB_1801b3260:
        uVar14 = uVar14 + local_70;
      }
      else {
        if (cVar1 != '?') goto LAB_1801b32a0;
        local_e0 = CONCAT71(local_e0._1_7_,local_5a);
        if (pbStack_c0 == local_b8) {
          FUN_1801b42c0(&local_c8,pbStack_c0,&local_e0);
        }
        else {
          *pbStack_c0 = local_5a;
          pbStack_c0 = pbStack_c0 + 1;
        }
        uVar15 = local_90;
        if ((longlong)local_58 <= (longlong)local_98) {
          uVar15 = local_58;
        }
        local_d8 = local_98 & local_80;
        local_e0 = (local_98 >> ((byte)local_88 & 0x3f)) * 4 + lStack_b0 + uVar15;
        uVar7 = FUN_1800a7a20(&lStack_b0,&local_e0,local_70);
        uVar15 = local_90;
        if ((longlong)local_58 <= (longlong)uVar7) {
          uVar15 = local_58;
        }
        uVar10 = local_80 & uVar7;
        uVar11 = local_70 + uVar10 >> 3 & 4;
        uVar12 = local_70 + uVar10 & local_80;
        if ((uVar10 != uVar12) || (uVar11 != local_58)) {
          puVar16 = (uint *)((uVar7 >> ((byte)local_88 & 0x3f)) * 4 + lStack_b0 + uVar15);
          uVar5 = local_64 << ((byte)uVar10 & 0x1f) ^ local_64;
          if (uVar11 == local_58) {
            uVar5 = local_64 >> ((char)local_74 - (char)uVar12 & 0x1fU) ^ local_64 | uVar5;
          }
          else {
            *puVar16 = *puVar16 & uVar5;
            FUN_180207610(puVar16 + 1,0);
            if (uVar12 == local_58) goto LAB_1801b3411;
            puVar16 = (uint *)((longlong)puVar16 + uVar11);
            uVar5 = local_64 >> ((char)local_74 - (char)uVar12 & 0x1fU) ^ local_64;
          }
          *puVar16 = *puVar16 & uVar5;
        }
LAB_1801b3411:
        if (uVar14 < uVar3) {
          while (*(char *)(lVar8 + uVar14) == '?') {
            uVar14 = uVar14 + local_70;
            if (uVar14 == uVar3) goto LAB_1801b3084;
          }
        }
      }
LAB_1801b3264:
    } while (uVar14 < uVar3);
  }
LAB_1801b3084:
  uVar3 = local_58;
  if (local_c8 != pbStack_c0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
         (int)DAT_1802a78c8) && (FUN_1801d62d8(&DAT_1802a78c8), DAT_1802a78c8 == local_64)) {
      FUN_1801b5350();
      atexit(FUN_1801b5a90);
      _Init_thread_footer(&DAT_1802a78c8);
    }
    uVar3 = local_58;
    if (DAT_1802a78b0 != DAT_1802a78b8) {
      uVar14 = (longlong)pbStack_c0 - (longlong)local_c8;
      if (uVar14 == 0) {
        uVar3 = *DAT_1802a78b0 + local_58;
      }
      else {
        plVar6 = DAT_1802a78b0;
        do {
          if (uVar14 <= (ulonglong)plVar6[1]) {
            uVar15 = local_58;
            do {
              local_d0 = uVar15;
              uVar15 = local_58;
              while (((1 << ((byte)uVar15 & 0x1f) & *(uint *)(lStack_b0 + (uVar15 >> ((byte)local_88 & 0x3f)) * 4)) ==
                      local_78 || (*(byte *)(*plVar6 + local_d0 + uVar15) == local_c8[uVar15]))) {
                uVar15 = uVar15 + local_70;
                if (uVar15 == uVar14 + (uVar14 == 0)) {
                  uVar3 = *plVar6 + local_d0;
                  goto joined_r0x0001801b35a5;
                }
              }
              uVar15 = local_d0 + local_70;
            } while (local_d0 + local_70 <= plVar6[1] - uVar14);
          }
          plVar6 = plVar6 + 2;
        } while (plVar6 != DAT_1802a78b8);
      }
    }
  }
joined_r0x0001801b35a5:
  if (lStack_b0 != 0) {
    uVar14 = lStack_a0 - lStack_b0;
    lVar8 = lStack_b0;
    if (0xfff < uVar14) {
      lVar8 = *(longlong *)(lStack_b0 + -8);
      if (0x1f < (ulonglong)((lStack_b0 + -8) - lVar8)) goto LAB_1801b360a;
      uVar14 = uVar14 + 0x27;
    }
    thunk_FUN_1801f42e0(lVar8,uVar14);
    lStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
  }
  if (local_c8 != (byte *)0x0) {
    uVar14 = (longlong)local_b8 - (longlong)local_c8;
    pbVar9 = local_c8;
    if (0xfff < uVar14) {
      pbVar9 = *(byte **)(local_c8 + -8);
      if ((byte *)0x1f < local_c8 + (-8 - (longlong)pbVar9)) {
LAB_1801b360a:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_78,local_58);
      }
      uVar14 = uVar14 + 0x27;
    }
    thunk_FUN_1801f42e0(pbVar9,uVar14);
  }
  return uVar3;
}



void Unwind_1801b3630(undefined8 param_1,longlong param_2)

{
  FUN_1801d6230(&DAT_1802a78c8);
  FUN_1801b36c0(param_2 + 0x80);
  return;
}



void Unwind_1801b3680(undefined8 param_1,longlong param_2)

{
  FUN_1801b36c0(param_2 + 0x80);
  return;
}



void FUN_1801b36c0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_100;
  ulonglong local_f8;
  uint local_ec;
  longlong local_e8;
  ulonglong local_e0;
  uintptr_t local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_f8 = 0x40f12bbb131566d6;
  local_100 = 0x926ebabd13482c34;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar2 = local_f8 ^ 0xb169d3e6e512917a;
            uVar1 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0xb169d3e6e512917a;
            local_f8 = uVar2;
            if ((longlong)uVar1 < 0x5f9d147835400ce) break;
            if ((longlong)uVar1 < 0x6d1ed1d41217b137) {
              if (uVar1 == 0x5f9d147835400ce) {
                local_b0 = local_68 + local_d0;
                local_f8 = 0xa861116a1ea74729;
                local_100 = 0x515278ac9a75c08f;
                local_a8 = local_78;
              }
              else if (uVar1 == 0x314cce7d322c9934) {
                local_78 = *(longlong *)(local_b8 + -8);
                local_f8 = 0xfd0d1a7e018aec6;
                if ((ulonglong)((local_70 + local_e8) - local_78) < local_e0) {
                  local_f8 = 0xdbb011e2ddd5bb59;
                }
                local_100 = 0xde49c0a55e81bb97;
              }
              else if (uVar1 == 0x59ed13311899fc1c) {
                local_b8 = *param_1;
                local_f8 = 0x70165473bf4411de;
                if (local_b8 == 0) {
                  local_f8 = 0x7360a8ee411fb486;
                }
                local_100 = 0x1e7e793a530805b1;
              }
            }
            else if (uVar1 == 0x6e682d49ec4c146f) {
              local_70 = local_b8;
              local_b0 = param_1[2] - local_b8;
              local_f8 = 0xdaebfe778fe14760;
              if (local_c8 < local_b0) {
                local_f8 = 0x129459cc391f59f2;
              }
              local_100 = 0x23d897b10b33c0c6;
              local_a8 = local_b8;
              local_68 = local_b0;
            }
            else if (uVar1 == 0x7b1028d2991b450a) {
              thunk_FUN_1801f42e0(local_98,local_a0);
              *local_90 = 0;
              local_90[1] = 0;
              local_90[2] = 0;
              local_f8 = 0xcb2641dfebae3c58;
              local_100 = 0x92cb52eef337c044;
            }
            else if (uVar1 == 0x6d1ed1d41217b137) {
              return;
            }
          }
          if ((longlong)uVar1 < -0x2667aaf29ea8e608) break;
          if (uVar1 == 0xd998550d615719f8) {
            local_60 = *(longlong *)(local_c0 + -8);
            local_f8 = 0xa8593a1b1f1740e3;
            if ((ulonglong)((local_88 + local_e8) - local_60) < local_e0) {
              local_f8 = 0xebb118c8ed6c69a5;
            }
            local_100 = 0x684c8ab8efa5b119;
          }
          else if (uVar1 == 0xe0e22cd76b670fc5) {
            local_88 = local_c0;
            local_a0 = param_1[5] - local_c0;
            local_f8 = 0xd67b4a5fdbb6c84b;
            if (local_c8 < local_a0) {
              local_f8 = 0x74f3378023fa94b9;
            }
            local_100 = 0xad6b628d42ad8d41;
            local_98 = local_c0;
            local_80 = local_a0;
          }
          else if (uVar1 == 0xf93369c684d287a6) {
            thunk_FUN_1801f42e0(local_a8,local_b0);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_f8 = 0xe9f59a3ca154da57;
            local_100 = 0x84eb4be8b3436b60;
          }
        }
        if (-0x2e66eefd4166eab0 < (longlong)uVar1) break;
        if (uVar1 == 0x83fd927002c9d8bc) {
          local_a0 = local_80 + local_d0;
          local_f8 = 0x29d6846719049c23;
          local_100 = 0x52c6acb5801fd929;
          local_98 = local_60;
        }
        else if (uVar1 == 0xc015b0a3f0b2f1fa) goto LAB_1801b3bf4;
      }
      if (uVar1 != 0xd29f9106005d4ae2) break;
      local_ec = 0;
      local_c8 = 0xfff;
      local_d0 = 0x27;
      local_d8 = 0;
      local_e0 = 0x20;
      local_e8 = -8;
      local_90 = param_1 + 3;
      local_c0 = param_1[3];
      local_f8 = 0xb14bd5e574c0b8;
      if (local_c0 == 0) {
        local_f8 = 0xb9be7433968a3361;
      }
      local_100 = 0xe05367028e13cf7d;
    }
  } while (uVar1 != 0xd1991102be991551);
LAB_1801b3bf4:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_ec,local_d8);
}



undefined1 FUN_1801b3c30(LPCVOID param_1,longlong param_2)

{
  ulonglong uVar1;
  SIZE_T SVar2;
  ulonglong uVar3;
  undefined1 auStack_d8 [46];
  undefined1 local_aa;
  undefined1 local_a9;
  ulonglong local_a8;
  ulonglong local_a0;
  _MEMORY_BASIC_INFORMATION local_98;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_d8;
  local_a0 = 0x6b68e0e917b88eb9;
  local_a8 = 0xedf36b7d8df1e563;
LAB_1801b3d00:
  do {
    while( true ) {
      uVar3 = local_a0 ^ 0x5f7051e91edbd65c;
      uVar1 = local_a0 ^ local_a8;
      local_a8 = local_a8 ^ 0x5f7051e91edbd65c;
      local_a0 = uVar3;
      if (-0x4ccf6d3dd678278 < (longlong)uVar1) break;
      if (uVar1 == 0x869b8b949a496bda) {
        local_a0 = 0x758e1390bf05f516;
        if (param_1 == (LPCVOID)0x0) {
          local_a0 = 0x5c57e596261e9367;
        }
        local_a8 = 0x3957e04772df103;
        local_a9 = 0;
      }
      else if (uVar1 == 0xafa49e240ab0112d) {
        local_a0 = 0xa67548b60cd9238c;
        if ((local_98._32_8_ & 0x10100000000) == 0) {
          local_a0 = 0xa9f66eb61e6e81d0;
        }
        local_a8 = 0x52c5679a3cf6fc59;
LAB_1801b3e51:
        local_aa = 0;
      }
      else if (uVar1 == 0xf4b02f2c302fdfd5) {
        local_a9 = local_aa;
        local_a0 = 0xd9d2240039e0dc53;
        local_a8 = 0x8610bf9268d3be37;
      }
    }
    if (uVar1 == 0xfb33092c22987d89) {
      local_a0 = 0xb58e5b045d83c212;
      local_a8 = 0x413e74286dac1dc7;
      local_aa = (ulonglong)(param_2 + (longlong)param_1) <= local_98.RegionSize + (longlong)local_98.BaseAddress;
      goto LAB_1801b3d00;
    }
    if (uVar1 == 0x761b6d94c8280415) {
      local_98.State = 0;
      local_98.Protect = 0;
      local_98.Type = 0;
      local_98._44_4_ = 0;
      local_98.AllocationProtect = 0;
      local_98._20_4_ = 0;
      local_98.RegionSize = 0;
      local_98.BaseAddress = (PVOID)0x0;
      local_98.AllocationBase = (PVOID)0x0;
      SVar2 = VirtualQuery(param_1,&local_98,0x30);
      local_a0 = 0x32e840f94b43d264;
      if (local_98.State == 0x1000) {
        local_a0 = 0x69fcf1f171dc1c9c;
      }
      if (SVar2 == 0) {
        local_a0 = 0x32e840f94b43d264;
      }
      local_a8 = 0xc6586fd57b6c0db1;
      goto LAB_1801b3e51;
    }
    if (uVar1 == 0x5fc29b9251336264) {
      if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_d8)) {
        return local_a9;
      }
    }
  } while( true );
}



undefined1 FUN_1801b3ef0(LPVOID param_1,undefined8 param_2,SIZE_T param_3)

{
  LPVOID lpAddress;
  BOOL BVar1;
  ulonglong uVar2;
  HANDLE hProcess;
  ulonglong uVar3;
  undefined1 auStack_98 [35];
  undefined1 local_75;
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  LPVOID local_58;
  DWORD local_4c;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_98;
  local_68 = 0xcd6bf2cc4c247928;
  local_70 = 0xe39570bd06de56e7;
  local_60 = param_2;
  do {
    while( true ) {
      while( true ) {
        lpAddress = local_58;
        uVar3 = local_68 ^ 0xdca57608813d32a1;
        uVar2 = local_68 ^ local_70;
        local_70 = local_70 ^ 0xdca57608813d32a1;
        local_68 = uVar3;
        if (uVar2 != 0x88ad80995e45a125) break;
        FUN_1802079d0(local_58,local_60,param_3);
        VirtualProtect(lpAddress,param_3,local_4c,&local_4c);
        hProcess = GetCurrentProcess();
        FlushInstructionCache(hProcess,lpAddress,param_3);
        local_68 = 0x17212127a95c272d;
        local_70 = 0x1e9cc6c6fd8b659;
      }
      if (uVar2 != 0x2efe82714afa2fcf) break;
      local_74 = 0;
      local_4c = 0;
      local_58 = param_1;
      BVar1 = VirtualProtect(param_1,param_3,0x40,&local_4c);
      local_75 = BVar1 != local_74;
      local_68 = 0x2d7e48816003b9fa;
      if ((bool)local_75) {
        local_68 = 0xb31b2553f8c289ab;
      }
      local_70 = 0x3bb6a5caa687288e;
    }
  } while (uVar2 != 0x16c8ed4bc6849174);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_98)) {
    return local_75;
  }
}



void FUN_1801b40c0(void)

{
  int iVar1;
  ulonglong uVar2;
  HANDLE pvVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  HMODULE local_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_88 = 0xb535d6f166c784a2;
  local_90 = 0xfe6121840d7cf43;
  do {
    while( true ) {
      while( true ) {
        uVar4 = local_88 ^ 0x7bb4b992b33c01f6;
        uVar2 = local_88 ^ local_90;
        local_90 = local_90 ^ 0x7bb4b992b33c01f6;
        local_88 = uVar4;
        if ((longlong)uVar2 < -0x452c3b16d9efb41f) break;
        if (uVar2 == 0xd229ba79f2804c18) {
          DAT_1802a7898 = local_78;
          DAT_1802a78a0 = uStack_70 & 0xffffffff;
          local_88 = 0x65311ca9c23306ac;
          local_90 = 0xf458fa5ea6e89e69;
        }
        else if (uVar2 == 0xbad3c4e926104be1) {
          DAT_1802a7898 = 0;
          DAT_1802a78a0 = 0;
          local_80 = GetModuleHandleW((LPCWSTR)0x0);
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_88 = 0xf7fddbfc57c69abc;
          if (local_80 == (HMODULE)0x0) {
            local_88 = 0xf7b9e09e32febf37;
          }
          local_90 = 0x66d00669562527f2;
        }
      }
      if (uVar2 != 0x912ddd9501e3bd4e) break;
      pvVar3 = GetCurrentProcess();
      iVar1 = K32GetModuleInformation(pvVar3,local_80,&local_78,0x18);
      local_88 = 0x88450b82e87c024a;
      if (iVar1 == 0) {
        local_88 = 0xcb05570c7e27d697;
      }
      local_90 = 0x5a6cb1fb1afc4e52;
    }
  } while (uVar2 != 0x9169e6f764db98c5);
  if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_b8)) {
    return;
  }
}



longlong FUN_1801b42c0(ulonglong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  uintptr_t local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong *local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;

  local_100 = 0xb8a6a42d8dc60f77;
  local_108 = 0xff69ebdd49c1a5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_100 ^ 0x5deb70434e4126dc;
            uVar1 = local_100 ^ local_108;
            local_108 = local_108 ^ 0x5deb70434e4126dc;
            local_100 = uVar3;
            if (-0x1af8ae73586b1b < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x2a589956e047f9e6) {
              if ((longlong)uVar1 < -0x676fd52266ad3035) {
                if (uVar1 == 0x8d997fcf1963c857) {
                  local_f0 = local_c8;
                  local_a8 = local_c8 + local_50;
                  *(undefined1 *)(local_c8 + local_50) = *param_3;
                  local_100 = 0x82315f45ddbdedf2;
                  if (param_2 == *local_d8) {
                    local_100 = 0xbed56de6a2fbba29;
                  }
                  local_108 = 0xfa570d85701007f9;
                }
                else if (uVar1 == 0x947384c87a8faf9f) {
                  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
                }
              }
              else if (uVar1 == 0x98902add9952cfcb) {
                local_58 = *(ulonglong *)(local_a0 - 8);
                local_100 = 0x33d44b413b9ef8d8;
                if ((local_68 - local_58) - 8 < 0x20) {
                  local_100 = 0x172b885986f3aa63;
                }
                local_108 = 0x825c37dc150b12a;
              }
              else if (uVar1 == 0xb859cdc6508fced2) {
                local_b0 = 0xfff;
                local_e0 = 0x27;
                local_b8 = 0;
                local_e8 = 0x7fffffffffffffff;
                local_c0 = 1;
                local_d8 = param_1 + 1;
                local_78 = *param_1;
                local_70 = param_1[1] - local_78;
                local_100 = 0x21f90ae1fd21a07c;
                if (local_70 == 0x7fffffffffffffff) {
                  local_100 = 0xf99a9aea0983f097;
                }
                local_108 = 0xffb4ffe312b75a8c;
              }
            }
            else if ((longlong)uVar1 < -0x1dc64da302997aae) {
              if (uVar1 == 0xd5a766a91fb8061a) {
                thunk_FUN_1801f42e0(local_88,local_90);
                local_100 = 0xec0a629ed206e760;
                local_108 = 0xeb81952aa2dcfb8e;
              }
              else if (uVar1 == 0xde4df502ef96faf0) {
                local_50 = param_2 - local_78;
                local_48 = local_70 + local_c0;
                local_98 = param_1 + 2;
                uVar3 = param_1[2] - local_78;
                uVar1 = uVar3 >> ((byte)local_c0 & 0x3f);
                local_f8 = uVar1 + uVar3;
                if (local_f8 <= local_48) {
                  local_f8 = local_48;
                }
                if ((local_e8 ^ uVar1) < uVar3) {
                  local_f8 = local_e8;
                }
                local_100 = 0xa8dffc3558b0899e;
                if (local_f8 == local_b8) {
                  local_100 = 0xdaa384abcd74d52f;
                }
                local_108 = 0x573afb64d4171d78;
                local_c8 = 0;
                local_d0 = param_2;
              }
            }
            else if (uVar1 == 0xe239b25cfd668552) {
              local_100 = 0x35a38a0777605633;
              if (local_f8 < 0xffffffffffffffd9) {
                local_100 = 0xfda7c02bc1b2c173;
              }
              local_108 = 0xa1d00ecf0deff9ac;
            }
            else if (uVar1 == 0xfee4e5dacb660441) {
              local_68 = local_a0;
              local_90 = *local_98 - local_a0;
              local_100 = 0x40b57ce678234d5a;
              if (local_b0 < local_90) {
                local_100 = 0xd823092fec9848b;
              }
              local_108 = 0x95121a4f679b4b40;
              local_88 = local_a0;
              local_60 = local_90;
            }
          }
          if ((longlong)uVar1 < 0x44826063d2ebbdd0) break;
          if ((longlong)uVar1 < 0x786652c0adadea0b) {
            if (uVar1 == 0x44826063d2ebbdd0) {
              FUN_1802079d0(local_f0);
              local_100 = 0xb964d862f3574a6d;
              local_108 = 0x94c7c657a5be9287;
            }
            else if (uVar1 == 0x5c77cee4cc5d38df) {
              lVar2 = FUN_1801d61c8(local_f8 + local_e0);
              local_c8 = local_e0 + lVar2 & 0xffffffffffffffe0;
              *(longlong *)(local_c8 - 8) = lVar2;
              local_100 = 0xace292dfcc78c1e8;
              local_108 = 0x217bed10d51b09bf;
            }
          }
          else if (uVar1 == 0x786652c0adadea0b) {
            FUN_1802079d0(local_f0,*param_1,local_d0 - *param_1);
            FUN_1802079d0(local_a8 + 1,param_2);
            local_100 = 0x5a749fcddb753390;
            local_108 = 0x77d781f88d9ceb7a;
          }
          else if (uVar1 == 0x790bd7d2357f66bf) {
            local_c8 = FUN_1801d61c8(local_f8);
            local_100 = 0xade6a5cfff0e0ccb;
            local_108 = 0x207fda00e66dc49c;
          }
        }
        if ((longlong)uVar1 < 0x1f0e4b2447a31b49) break;
        if (uVar1 == 0x1f0e4b2447a31b49) {
          local_90 = local_60 + local_e0;
          local_100 = 0x2e9e1b0d09269b55;
          local_108 = 0xfb397da4169e9d4f;
          local_88 = local_58;
        }
        else if (uVar1 == 0x2da31e3556e9d8ea) {
          local_a0 = *param_1;
          local_100 = 0x647c442ddd83238a;
          if (local_a0 == 0) {
            local_100 = 0x9d135643663f3b25;
          }
          local_108 = 0x9a98a1f716e527cb;
        }
        else if (uVar1 == 0x3bf1883cface49f2) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b8);
        }
      }
      if (uVar1 != 0xffe507518ca794e6) break;
      local_100 = 0x470d8c31c05728c9;
      if (local_b0 < local_f8) {
        local_100 = 0xdc3fe9bf084ecb24;
      }
      local_108 = 0x3e065be3f5284e76;
    }
    if (uVar1 == 0x78bf7b470da1cee) {
      *param_1 = local_f0;
      *local_d8 = local_f0 + local_48;
      *local_98 = local_f0 + local_f8;
      return local_a8;
    }
  } while (uVar1 != 0x62e65091b34aa1b);
  FUN_1800807e0();
}



longlong FUN_1801b4b00(ulonglong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  uintptr_t local_c0;
  ulonglong local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_108 = 0xb77ab15a38e3faad;
  local_110 = 0x2db100a303d68629;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_108 ^ 0xc9bbe14e57758ea3;
            uVar1 = local_108 ^ local_110;
            local_110 = local_110 ^ 0xc9bbe14e57758ea3;
            local_108 = uVar3;
            if (-0x21fc5ad1579a00da < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x65344e06c4ca837c) {
              if ((longlong)uVar1 < -0x7067472992a5e9cc) {
                if (uVar1 == 0x820f4e025e90dc7e) {
                  local_98 = local_48 + local_e8;
                  local_108 = 0x6b416add9070a9a7;
                  local_110 = 0x5bdff86f603e0ea;
                  local_90 = local_58;
                }
                else if (uVar1 == 0x83285d2e920e522a) {
                  FUN_1802079d0(local_f8,*param_1,local_d8 - *param_1);
                  FUN_1802079d0(local_a8 + 1,param_2);
                  local_108 = 0xdbd2e27879ce2c73;
                  local_110 = 0xd7a7eb29705cd666;
                }
              }
              else if (uVar1 == 0x8f98b8d66d5a1634) {
                lVar2 = FUN_1801d61c8(local_100 + local_e8);
                local_d0 = local_e8 + lVar2 & 0xffffffffffffffe0;
                *(longlong *)(local_d0 - 8) = lVar2;
                local_108 = 0x350f42e691695a82;
                local_110 = 0xa78c0a3195f33de6;
              }
              else if (uVar1 == 0x928348d7049a6764) {
                local_f8 = local_d0;
                local_a8 = local_d0 + local_68;
                *(undefined1 *)(local_d0 + local_68) = *param_3;
                local_108 = 0x4ab9b28b7f900f85;
                if (param_2 == *local_e0) {
                  local_108 = 0x9596d7dc25e69387;
                }
                local_110 = 0xc991efa5ed9e5daf;
              }
            }
            else if ((longlong)uVar1 < -0x43587faea7b63948) {
              if (uVar1 == 0x9acbb1f93b357c84) {
                local_b8 = 0xfff;
                local_e8 = 0x27;
                local_c0 = 0;
                local_f0 = 0x7fffffffffffffff;
                local_c8 = 1;
                local_78 = *param_1;
                local_70 = param_1[1] - local_78;
                local_108 = 0xeee58668568c69ad;
                if (local_70 == 0x7fffffffffffffff) {
                  local_108 = 0x80c519483b3bd92;
                }
                local_110 = 0x4bb47bed08764758;
                local_e0 = param_1 + 1;
              }
              else if (uVar1 == 0xa551fd855efa2ef5) {
                local_68 = param_2 - local_78;
                local_60 = local_70 + local_c8;
                local_b0 = param_1 + 2;
                uVar3 = param_1[2] - local_78;
                uVar1 = uVar3 >> ((byte)local_c8 & 0x3f);
                local_100 = uVar1 + uVar3;
                if (local_100 <= local_60) {
                  local_100 = local_60;
                }
                if ((local_f0 ^ uVar1) < uVar3) {
                  local_100 = local_f0;
                }
                local_108 = 0x1606234e7c5c07d5;
                if (local_100 == local_c0) {
                  local_108 = 0x3822ebc8208fa609;
                }
                local_110 = 0xaaa1a31f2415c16d;
                local_d0 = 0;
                local_d8 = param_2;
              }
            }
            else if (uVar1 == 0xbca780515849c6b8) {
              local_108 = 0xb2e583c0f7e61762;
              if (local_b8 < local_100) {
                local_108 = 0x834bdd6ff0673a87;
              }
              local_110 = 0x6ce626ee5f83e845;
            }
            else if (uVar1 == 0xd9a8c66f54fd87d4) {
              *param_1 = local_f8;
              *local_e0 = local_f8 + local_60;
              *local_b0 = local_f8 + local_100;
              return local_a8;
            }
          }
          if (0xc7509510992fa14 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x1052047e501b2d3e) {
            if (uVar1 == 0xde03a52ea865ff27) {
              local_d0 = FUN_1801d61c8(local_100);
              local_108 = 0xfb9212c422dd63e4;
              local_110 = 0x69115a1326470480;
            }
            else if (uVar1 == 0xed3d3de20e18795f) {
              local_50 = local_a0;
              local_98 = *local_b0 - local_a0;
              local_108 = 0xddf5be2410c9ef6f;
              if (local_b8 < local_98) {
                local_108 = 0x5ce7acc5a3a48e81;
              }
              local_110 = 0xb3092b7f76baa622;
              local_90 = local_a0;
              local_48 = local_98;
            }
          }
          else if (uVar1 == 0xefadfb81afe4d2c2) {
            local_108 = 0xc70eb6cc35bfbf3b;
            if (local_100 < 0xffffffffffffffd9) {
              local_108 = 0x60d21bf57b58b623;
            }
            local_110 = 0xef4aa3231602a017;
          }
          else if (uVar1 == 0xefee87bad51e28a3) {
            local_58 = *(ulonglong *)(local_a0 - 8);
            local_108 = 0x47d6f8ef66d75bfe;
            if ((local_50 - local_58) - 8 < 0x20) {
              local_108 = 0x88e43f688f73501c;
            }
            local_110 = 0xaeb716ad1e38c62;
          }
        }
        if ((longlong)uVar1 < 0x4d3d8985b734d79c) break;
        if (uVar1 == 0x5c073879c878ce28) {
          FUN_1802079d0(local_f8);
          local_108 = 0x885b1e7602ff9d6b;
          local_110 = 0x842e17270b6d677e;
        }
        else if (uVar1 == 0x6efc955b6673494d) {
          thunk_FUN_1801f42e0(local_90,local_98);
          local_108 = 0x4cbf05d9ec002861;
          local_110 = 0x9517c3b6b8fdafb5;
        }
        else if (uVar1 == 0x4d3d8985b734d79c) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_c0);
        }
      }
      if (uVar1 != 0xc7509510992fa15) break;
      local_a0 = *param_1;
      local_108 = 0x411e5bdbd37a6c06;
      if (local_a0 == 0) {
        local_108 = 0x758ba056899f928d;
      }
      local_110 = 0xac236639dd621559;
    }
    if (uVar1 == 0x284415ef23bd1f2c) {
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
  } while (uVar1 != 0x43b82a798bc5faca);
  FUN_1800807e0();
}



void FUN_1801b5350(void)

{
  uint uVar1;
  short *psVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong local_68;

  local_68 = 0xfffffffffffffff;
  DAT_1802a78b0 = 0;
  DAT_1802a78b8 = (longlong *)0x0;
  DAT_1802a78c0 = (longlong *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a78a8)
     && (FUN_1801d62d8(&DAT_1802a78a8), DAT_1802a78a8 == -1)) {
    FUN_1801b40c0();
    _Init_thread_footer(&DAT_1802a78a8);
  }
  psVar2 = DAT_1802a7898;
  if (((DAT_1802a7898 != (short *)0x0) && (*DAT_1802a7898 == 0x5a4d)) &&
     (lVar4 = (longlong)*(int *)(DAT_1802a7898 + 0x1e), *(int *)((longlong)DAT_1802a7898 + lVar4) == 0x4550)) {
    lVar14 = (longlong)DAT_1802a7898 + (ulonglong)*(ushort *)((longlong)DAT_1802a7898 + lVar4 + 0x14) + lVar4 + 0x18;
    for (uVar11 = 0; plVar3 = DAT_1802a78b8, uVar11 < *(ushort *)((longlong)psVar2 + lVar4 + 6); uVar11 = uVar11 + 1) {
      if ((*(uint *)(lVar14 + 0x24) & 0x20000000) != 0) {
        lVar12 = (ulonglong)*(uint *)(lVar14 + 0xc) + (longlong)DAT_1802a7898;
        uVar1 = *(uint *)(lVar14 + 8);
        if (DAT_1802a78b8 == DAT_1802a78c0) {
          lVar10 = (longlong)DAT_1802a78b8 - DAT_1802a78b0;
          uVar5 = lVar10 >> 4;
          uVar8 = uVar5 + 1;
          uVar13 = (uVar5 >> 1) + uVar5;
          if (uVar13 <= uVar8) {
            uVar13 = uVar8;
          }
          if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
            uVar13 = local_68;
          }
          if (0xfffffffffffffff < uVar13) {
            std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
          }
          if (uVar13 == 0) {
            uVar5 = 0;
          }
          else if (uVar13 < 0x100) {
            uVar5 = FUN_1801d61c8(uVar13 * 0x10);
          }
          else {
            if (0xffffffffffffffd < uVar13) {
              std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
            }
            lVar6 = FUN_1801d61c8(uVar13 * 0x10 + 0x27);
            uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar5 - 8) = lVar6;
          }
          *(longlong *)(uVar5 + lVar10) = lVar12;
          *(ulonglong *)(uVar5 + 8 + lVar10) = (ulonglong)uVar1;
          if (plVar3 == DAT_1802a78b8) {
            FUN_1802079d0(uVar5,DAT_1802a78b0,(longlong)plVar3 - DAT_1802a78b0);
          }
          else {
            FUN_1802079d0(uVar5,DAT_1802a78b0,(longlong)plVar3 - DAT_1802a78b0);
            FUN_1802079d0(lVar10 + uVar5 + 0x10,plVar3,(longlong)DAT_1802a78b8 - (longlong)plVar3);
          }
          if (DAT_1802a78b0 != 0) {
            uVar9 = (longlong)DAT_1802a78c0 - DAT_1802a78b0;
            uVar7 = DAT_1802a78b0;
            if (0xfff < uVar9) {
              uVar7 = *(ulonglong *)(DAT_1802a78b0 - 8);
              if (0x1f < (DAT_1802a78b0 - uVar7) - 8) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
              uVar9 = uVar9 + 0x27;
            }
            thunk_FUN_1801f42e0(uVar7,uVar9);
          }
          DAT_1802a78b8 = (longlong *)(uVar8 * 0x10 + uVar5);
          DAT_1802a78c0 = (longlong *)(uVar13 * 0x10 + uVar5);
          DAT_1802a78b0 = uVar5;
        }
        else {
          *DAT_1802a78b8 = lVar12;
          plVar3[1] = (ulonglong)uVar1;
          DAT_1802a78b8 = DAT_1802a78b8 + 2;
        }
      }
      lVar14 = lVar14 + 0x28;
    }
  }
  return;
}



void Unwind_1801b5760(void)

{
  FUN_1801b5790();
  return;
}



void FUN_1801b5790(void)

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

  local_90 = 0x6b67d14db04e983f;
  local_98 = 0xd951e44e57ce2cee;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x51ed7d85d51e7259;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x51ed7d85d51e7259;
          local_90 = uVar2;
          if (0x437361bdf0ae127e < (longlong)uVar1) break;
          if (uVar1 == 0xaabdd50e711636c5) {
            thunk_FUN_1801f42e0(local_78,local_80);
            DAT_1802a78b0 = 0;
            DAT_1802a78b8 = 0;
            DAT_1802a78c0 = 0;
            local_90 = 0xd340158c8f5c1a06;
            local_98 = 0x95ec503019215f46;
          }
          else if (uVar1 == 0xb2363503e780b4d1) {
            local_88 = DAT_1802a78b0;
            local_90 = 0xdc18e8862da4fdaa;
            if (DAT_1802a78b0 == 0) {
              local_90 = 0xda75fe00515b2da2;
            }
            local_98 = 0x9cd9bbbcc72668e2;
          }
          else if (uVar1 == 0x40c1533aea829548) {
            local_68 = local_88;
            local_80 = DAT_1802a78c0 - local_88;
            local_90 = 0xa7caf79589e7c61;
            if (0xfff < local_80) {
              local_90 = 0xf35e66818d3765aa;
            }
            local_98 = 0xa0c17a7729884aa4;
            local_78 = local_88;
            local_60 = local_80;
          }
        }
        if (0x539f1cf6a4bf2f0d < (longlong)uVar1) break;
        if (uVar1 == 0x437361bdf0ae127f) {
          local_80 = local_60 + 0x27;
          local_90 = 0x4ca6a1b0fa5e5475;
          local_98 = 0xe61b74be8b4862b0;
          local_78 = local_70;
        }
        else if (uVar1 == 0x46ac45bc967d4540) {
          return;
        }
      }
      if (uVar1 != 0x539f1cf6a4bf2f0e) break;
      local_70 = *(longlong *)(local_88 + -8);
      local_90 = 0x7931110ca4d6e001;
      if ((local_68 - local_70) - 8U < 0x20) {
        local_90 = 0x54f56aa8a2940d3d;
      }
      local_98 = 0x17860b15523a1f42;
    }
  } while (uVar1 != 0x6eb71a19f6ecff43);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1801b5a90(void)

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

  local_90 = 0xb44df7d1934eb71f;
  local_98 = 0x37943c8982456caa;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xeb5a85028f3e6529;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xeb5a85028f3e6529;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0xa787cabdde938c1) break;
          if (uVar1 == 0xa787cabdde938c1) {
            local_60 = *(longlong *)(local_88 + -8);
            local_90 = 0x3fd8c437187acb8f;
            if ((local_70 - local_60) - 8U < 0x20) {
              local_90 = 0xf44cf75870fac724;
            }
            local_98 = 0xddd84127af5efcc7;
          }
          else if (uVar1 == 0x2994b67fdfa43be3) {
            local_80 = local_68 + 0x27;
            local_90 = 0xaea089dfa8503ef1;
            local_98 = 0xc73545bb00864aec;
            local_78 = local_60;
          }
          else if (uVar1 == 0x6995cc64a8d6741d) {
            thunk_FUN_1801f42e0(local_78,local_80);
            DAT_1802a78b0 = 0;
            DAT_1802a78b8 = 0;
            DAT_1802a78c0 = 0;
            local_90 = 0x2dc86fc4a16a3cc7;
            local_98 = 0x88323f44e037b58b;
          }
        }
        if (-0x1dff7aef48dbc8b9 < (longlong)uVar1) break;
        if (uVar1 == 0x83d9cb58110bdbb5) {
          local_88 = DAT_1802a78b0;
          local_90 = 0xf6ac5bbec70b633c;
          if (DAT_1802a78b0 == 0) {
            local_90 = 0x54657896276c6765;
          }
          local_98 = 0xf19f28166631ee29;
        }
        else if (uVar1 == 0xa5fa5080415d894c) {
          return;
        }
      }
      if (uVar1 != 0x73373a8a13a8d15) break;
      local_70 = local_88;
      local_80 = DAT_1802a78c0 - local_88;
      local_90 = 0x78d3b758f95b6122;
      if (0xfff < local_80) {
        local_90 = 0x1b3e07978c642dfe;
      }
      local_98 = 0x11467b3c518d153f;
      local_78 = local_88;
      local_68 = local_80;
    }
  } while (uVar1 != 0xe2008510b7243748);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



longlong * FUN_1801b5d80(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_109;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f4;
  uintptr_t local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  uintptr_t *local_90;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;

  local_100 = 0x7d345709d653cec1;
  local_108 = 0x21d094a799e3ab25;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar7 = local_100 ^ 0xf06e5f0301d64d41;
            uVar6 = local_100 ^ local_108;
            local_108 = local_108 ^ 0xf06e5f0301d64d41;
            local_100 = uVar7;
            if ((longlong)uVar6 < 0x59a6d6b8910a7a57) break;
            if ((longlong)uVar6 < 0x5c00d9d4d3c1d4b0) {
              if (uVar6 == 0x59a6d6b8910a7a57) {
                *local_90 = local_f0;
                *local_c8 = local_e8;
                *(undefined1 *)param_2 = local_109;
                local_b8 = *param_3;
                local_100 = 0xfad2795ba67ac7e6;
                if (local_b8 != 0) {
                  local_100 = 0x81a9252edefbf042;
                }
                local_108 = 0x1505d6aaf47b1ca5;
              }
              else if (uVar6 == 0x59c7d458c3189ee6) {
                thunk_FUN_1801f42e0(local_98,local_a0);
                local_100 = 0x7b19e0f5956e8c0a;
                local_108 = 0x94ce4f04c76f5749;
              }
            }
            else if (uVar6 == 0x5c00d9d4d3c1d4b0) {
              local_a8 = *param_2;
              local_b0 = local_c0 + 1;
              local_100 = 0x7bfeccf3a3c51f49;
              if (local_b0 <= local_e0) {
                local_100 = 0x3d87c8867f3b6e7;
              }
              local_108 = 0x15e194fadd4d41f5;
              local_68 = local_a8;
            }
            else if (uVar6 == 0x6e1f58097e885ebc) {
              local_60 = *(longlong *)(local_68 + -8);
              local_100 = 0xea329f25e9a9e50a;
              if (local_d0 <= (ulonglong)((local_68 + local_d8) - local_60)) {
                local_100 = 0x4570caeb30863b7f;
              }
              local_108 = 0x4a0f1ba9fb6fa1cd;
            }
            else if (uVar6 == 0x5ce4c3ae4fb065e4) {
              local_e8 = 0xf;
              local_d0 = 0x20;
              local_109 = 0;
              local_f0 = 0;
              local_d8 = -8;
              local_e0 = 0xfff;
              local_f4 = 0;
              param_1[2] = 0;
              param_1[3] = 0;
              *param_1 = 0;
              param_1[1] = 0;
              lVar1 = param_2[1];
              lVar4 = param_2[2];
              lVar5 = param_2[3];
              *param_1 = *param_2;
              param_1[1] = lVar1;
              param_1[2] = lVar4;
              param_1[3] = lVar5;
              local_90 = (uintptr_t *)(param_2 + 2);
              param_2[2] = 0;
              local_c8 = (ulonglong *)(param_2 + 3);
              param_2[3] = 0xf;
              *(undefined1 *)param_2 = 0;
              local_88 = param_3 + 2;
              lVar1 = param_3[2];
              param_3[2] = 0;
              lVar4 = *param_3;
              uVar2 = *(undefined4 *)((longlong)param_3 + 4);
              lVar5 = param_3[1];
              uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
              *param_3 = 0;
              param_3[1] = 0;
              *(int *)(param_1 + 4) = (int)lVar4;
              *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
              *(int *)(param_1 + 5) = (int)lVar5;
              *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
              param_1[6] = lVar1;
              param_1[7] = 0;
              param_1[8] = 0;
              param_1[9] = 0;
              param_1[10] = 0;
              *(undefined2 *)(param_1 + 0xb) = 0;
              local_c0 = *local_c8;
              local_100 = 0x4c9ce79bcad9a7c4;
              if (local_c0 < 0x10) {
                local_100 = 0x493ae8f788120923;
              }
              local_108 = 0x109c3e4f19187374;
            }
          }
          if (-0x48d14cf00d28709e < (longlong)uVar6) break;
          if (uVar6 == 0x94acf3842a80ece7) {
            local_98 = local_b8;
            local_a0 = *local_88 - local_b8;
            local_100 = 0xcde13e81c7392b47;
            if (local_a0 <= local_e0) {
              local_100 = 0x3c87569f37f8c9b4;
            }
            local_108 = 0x654082c7f4e05752;
            local_80 = local_98;
            local_78 = local_a0;
          }
          else if (uVar6 == 0xa03d848c12c644c7) {
            local_b0 = local_c0 + 0x28;
            local_a8 = local_60;
            local_100 = 0x2bda5f75c24e8f31;
            local_108 = 0x3de3b70778f07823;
          }
          else if (uVar6 == 0xa8a1bc4633d97c15) {
            local_70 = *(longlong *)(local_b8 + -8);
            local_100 = 0xfbadabff87c1ea81;
            if (local_d0 <= (ulonglong)((local_80 + local_d8) - local_70)) {
              local_100 = 0xf2a4b3035d3eb225;
            }
            local_108 = 0x4c8318f0751665e2;
          }
        }
        if (-0x1028500eadfe24be < (longlong)uVar6) break;
        if (uVar6 == 0xb72eb30ff2d78f63) {
          local_a0 = local_78 + 0x27;
          local_100 = 0x7cb12e32433dc63;
          local_108 = 0x5e0cc6bbe72b4285;
          local_98 = local_70;
        }
        else if (uVar6 == 0xbe27abf32828d7c7) goto LAB_1801b6386;
      }
      if (uVar6 != 0x1639e872babef712) break;
      thunk_FUN_1801f42e0(local_a8,local_b0);
      local_100 = 0xe88d72557ee6c35a;
      local_108 = 0xb12ba4edefecb90d;
    }
    if (uVar6 == 0xefd7aff15201db43) {
      return param_1;
    }
  } while (uVar6 != 0xf7fd142cbe99ab2);
LAB_1801b6386:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_f0);
}



undefined8 FUN_1801b63c0(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  longlong *local_30;
  uintptr_t local_28;
  undefined8 local_20;

  local_20 = 0xfffffffffffffffe;
  local_48 = 0xf;
  local_28 = 0;
  local_40 = 0xfff;
  local_38 = 0x27;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  if (param_3 != 0) {
    local_30 = param_2;
    if ((longlong)param_3 < 0) {
      FUN_1800807e0();
    }
    if (param_3 < 0x1000) {
      local_68 = FUN_1801d61c8(param_3);
    }
    else {
      lVar2 = FUN_1801d61c8(param_3 + 0x27);
      local_68 = local_38 + lVar2 & 0xffffffffffffffe0;
      *(longlong *)(local_68 - 8) = lVar2;
    }
    lVar2 = param_3 + local_68;
    local_58 = lVar2;
    FUN_180207610(local_68,0x90,param_3);
    param_2 = local_30;
    lStack_60 = lVar2;
  }
  local_88 = (undefined4)*param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = (undefined4)param_2[1];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_78 = (undefined4)param_2[2];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_70 = (undefined4)param_2[3];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = local_28;
  param_2[3] = local_48;
  *(undefined1 *)param_2 = 0;
  FUN_1801b5d80(param_1,&local_88,&local_68);
  uVar1 = param_2[3];
  if (local_48 < uVar1) {
    lVar2 = *param_2;
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (local_40 < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_28);
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  return param_1;
}



void Unwind_1801b65b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x88));
  return;
}



undefined1 FUN_1801b65e0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  undefined1 local_e9;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_118;
  local_e0 = 0xbdedb6a7a149d34f;
  local_e8 = 0x9045242227d07014;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_e0 ^ 0xb13f2efe58e0a678;
            uVar1 = local_e0 ^ local_e8;
            local_e8 = local_e8 ^ 0xb13f2efe58e0a678;
            local_e0 = uVar3;
            if ((longlong)uVar1 < -0x1922a5dc2fd705f6) break;
            if ((longlong)uVar1 < 0x2bb7a8acf2b2ec4d) {
              if (uVar1 == 0xe6dd5a23d028fa0a) {
                FUN_1802079d0(*local_b8,*local_88,local_d0 - *local_b8);
                local_e0 = 0x9f02ee3db2c07fb3;
                local_e8 = 0x51338bbcd2c4a36a;
                local_e9 = 1;
              }
              else if (uVar1 == 0xeccf6e55d13e55c9) {
                local_d0 = local_98 + local_d8;
                *local_c8 = local_d0;
                local_e0 = 0xc77ea922e03b6a29;
                local_e8 = 0x21a3f30130139023;
              }
              else if (uVar1 == 0xf5ce4d82f06a5cae) {
                local_b8 = param_1 + 7;
                local_d8 = param_1[5] - param_1[4];
                local_c8 = param_1 + 8;
                local_b0 = param_1[8];
                local_98 = param_1[7];
                local_a8 = local_b0 - local_98;
                local_e0 = 0x567b402504b1f691;
                if (local_d8 < local_a8) {
                  local_e0 = 0xd26896d42e694030;
                }
                local_e8 = 0x3ea7f881ff5715f9;
                local_90 = local_98;
              }
            }
            else if (uVar1 == 0x2bb7a8acf2b2ec4d) {
              local_e9 = param_1[10] != local_c0;
              local_e0 = 0x11ab59eb47088bbb;
              local_e8 = 0xdf9a3c6a270c5762;
            }
            else if (uVar1 == 0x68dcb8a4fbe6e368) {
              local_e0 = 0xb85ebb736e5b1231;
              if (local_a8 < local_d8) {
                local_e0 = 0xc5fa1b41e34593af;
              }
              local_e8 = 0x5e83e150be73e83b;
              local_d0 = local_b0;
            }
            else if (uVar1 == 0x2da892858699a35b) {
              local_c0 = 0;
              local_a0 = param_1 + 0xb;
              local_e0 = 0xbfca68c6017f01fd;
              if (*(char *)(param_1 + 0xb) != '\0') {
                local_e0 = 0x29cf5fbf826db4d1;
              }
              local_e8 = 0x278f71370df589c;
            }
          }
          if (-0x36fd03f8636dee90 < (longlong)uVar1) break;
          if (uVar1 == 0x90cb820a8987e801) {
            FUN_180175810(local_b8,local_d8,&local_49);
            local_d0 = *local_c8;
            local_e0 = 0xf1905d273fd11dc4;
            local_e8 = 0x174d0704eff9e7ce;
          }
          else if (uVar1 == 0x9b79fa115d367b94) {
            local_e0 = 0xeba47bdfcc766627;
            if ((ulonglong)(param_1[9] - local_90) < local_d8) {
              local_e0 = 0xb1318e0667e27c6d;
            }
            local_e8 = 0x21fa0c0cee65946c;
          }
          else if (uVar1 == 0xbdb29fd571a05961) {
            *(undefined1 *)local_a0 = 1;
            local_60 = param_1;
            if (0xf < (ulonglong)param_1[3]) {
              local_60 = (undefined8 *)*param_1;
            }
            local_58 = param_1[2];
            lVar2 = FUN_1801b2eb0(&local_60);
            local_88 = param_1 + 10;
            param_1[10] = lVar2;
            local_e0 = 0x8a46065b0f6c01a;
            if (lVar2 == local_c0) {
              local_e0 = 0x3468d1e0dc0e8dc5;
            }
            local_e8 = 0xfd6a2de7409c9cb4;
          }
        }
        if (uVar1 != 0xc902fc079c921171) break;
        local_f8 = &DAT_1802a78e4;
        FUN_1801b7460(&DAT_1802a78cc,&DAT_18029c666,0x1b,0x18);
        local_70 = &DAT_1802a78cc;
        local_68 = 0x17;
        local_f8 = &DAT_1802a78f0;
        FUN_1801b7460(&DAT_1802a78e8,&DAT_18029c6aa,0x1a,6);
        local_80 = &DAT_1802a78e8;
        local_78 = 5;
        FUN_1800ed150(4,&local_80,&local_70,param_1);
        local_e0 = 0x96131a3c6a788a76;
        local_e8 = 0x58227fbd0a7c56af;
        local_e9 = 0;
      }
      if (uVar1 != 0xca5e77d32213f24b) break;
      lVar2 = local_b0 + (local_d8 - local_a8);
      FUN_180207610(local_b0,0);
      *local_c8 = lVar2;
      local_e0 = 0xe1d19d6938c937f0;
      local_e8 = 0x70cc74ae8e1cdfa;
      local_d0 = lVar2;
    }
  } while (uVar1 != 0xce3165816004dcd9);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_118)) {
  }
  return local_e9;
}



undefined1 FUN_1801b6c10(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined1 local_89;
  ulonglong local_88;
  ulonglong local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_80 = 0xf04cdd1e94f3e643;
  local_88 = 0xad80382ca2b2f53;
  do {
    while( true ) {
      uVar3 = local_80 ^ 0xbfd53c3c0192ca52;
      uVar2 = local_80 ^ local_88;
      local_88 = local_88 ^ 0xbfd53c3c0192ca52;
      local_80 = uVar3;
      if ((longlong)uVar2 < 0x29e880df54ed816f) break;
      if (uVar2 == 0x29e880df54ed816f) {
        *local_78 = 1;
        local_80 = 0x6a4d00df292857ac;
        local_88 = 0xa70aafa423d63d4a;
LAB_1801b6e7b:
        local_89 = 1;
      }
      else if (uVar2 == 0x400e0861c6167a2b) {
        local_98 = &DAT_1802a7910;
        FUN_1801b7460(&DAT_1802a78f4,&DAT_18029c6db,0x1e,0x19);
        local_58 = &DAT_1802a78f4;
        local_50 = 0x18;
        local_98 = &DAT_1802a78f0;
        FUN_1801b7460(&DAT_1802a78e8,&DAT_18029c6aa,0x1a,6);
        local_68 = &DAT_1802a78e8;
        local_60 = 5;
        FUN_1801b6f10(4,&local_68,&local_58,local_70);
        local_80 = 0x273ecf6631d3ac22;
        local_88 = 0xea79601d3b2dc6c4;
LAB_1801b6d59:
        local_89 = 0;
      }
      else if (uVar2 == 0x6cb8385a462e15d9) {
        local_70 = param_1 + 0x50;
        cVar1 = FUN_1801b3ef0(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x20),
                              *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20));
        local_80 = 0x8d0aefff9a41fec3;
        if (cVar1 != '\0') {
          local_80 = 0xe4ec674108ba0587;
        }
        local_88 = 0xcd04e79e5c5784e8;
      }
    }
    if (uVar2 == 0xf315f7c6e8cd2da9) {
      cVar1 = FUN_1801b65e0(param_1);
      local_80 = 0x54ece701e99fe6c2;
      if (cVar1 != '\0') {
        local_80 = 0xf5137020a54f99fd;
      }
      local_88 = 0x99ab487ae3618c24;
      goto LAB_1801b6d59;
    }
    if (uVar2 == 0xfa94de9c5ed8c910) {
      local_78 = (undefined1 *)(param_1 + 0x59);
      local_80 = 0x7ada3649237704d5;
      if (*(char *)(param_1 + 0x59) != '\0') {
        local_80 = 0x44886ef4c144439a;
      }
      local_88 = 0x89cfc18fcbba297c;
      goto LAB_1801b6e7b;
    }
    if (uVar2 == 0xcd47af7b0afe6ae6) {
      if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_b8)) {
        return local_89;
      }
    }
  } while( true );
}



void FUN_1801b6f10(int param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
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
    local_b0 = *param_3;
    local_a8 = param_3[1];
    local_98 = *param_4;
    local_a0 = 0x4000000000000000;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_48;
    if (local_48 < local_a8 + 8U) {
      FUN_180002240(&local_78);
      local_68 = local_50;
    }
    local_c0 = local_80;
    local_b8 = &local_a0;
    FUN_180003080(local_e0,&local_78,&local_b0,&local_c0,local_50);
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



void Unwind_1801b7120(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



void Unwind_1801b7160(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x90);
  return;
}



char FUN_1801b71a0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  char local_8a;
  char local_89;
  ulonglong local_88;
  ulonglong local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_b8;
  local_80 = 0xb43144dc4931cd56;
  local_88 = 0x458288949c242c41;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_80 ^ 0x5102725f9719a4a5;
          uVar1 = local_80 ^ local_88;
          local_88 = local_88 ^ 0x5102725f9719a4a5;
          local_80 = uVar2;
          if ((longlong)uVar1 < -0x11f7b6f3d9939408) break;
          if (uVar1 == 0xee08490c266c6bf8) {
            local_70 = param_1 + 0x50;
            local_89 = FUN_1801b3ef0(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x38),
                                     *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38));
            local_80 = 0xe61a5e2a779da2aa;
            if (local_89 != '\0') {
              local_80 = 0xcac0dc707fd01d83;
            }
            local_88 = 0x284e54cc8db06e7c;
          }
          else if (uVar1 == 0xf1b3cc48d515e117) {
            local_78 = (undefined1 *)(param_1 + 0x59);
            local_80 = 0xb8599c07f9e37f28;
            if (*(char *)(param_1 + 0x59) != '\0') {
              local_80 = 0x9e00fb94501d43fd;
            }
            local_88 = 0x7008b29876712805;
            local_8a = '\x01';
          }
        }
        if (uVar1 != 0xce540ae6fa2dccd6) break;
        local_98 = &DAT_1802a7930;
        FUN_1801b7460(&DAT_1802a7914,&DAT_18029c72f,0x10,0x1b);
        local_58 = &DAT_1802a7914;
        local_50 = 0x1a;
        local_98 = &DAT_1802a78f0;
        FUN_1801b7460(&DAT_1802a78e8,&DAT_18029c6aa,0x1a,6);
        local_68 = &DAT_1802a78e8;
        local_60 = 5;
        FUN_1801b6f10(4,&local_68,&local_58,local_70);
        local_80 = 0x7f4153f341f16439;
        local_88 = 0x9dcfdb4fb39117c6;
      }
      if (uVar1 != 0xe28e88bcf26073ff) break;
      *local_78 = 0;
      local_80 = 0xfa9e2a900357815d;
      local_88 = 0x32cf040f8cc5d670;
      local_8a = local_89;
    }
  } while (uVar1 != 0xc8512e9f8f92572d);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_b8)) {
    return local_8a;
  }
}



void FUN_1801b7460(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x749daffed25cf280;
  local_68 = 0x9de3feba2b8028f9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x90e43053d3728846;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x90e43053d3728846;
          local_60 = uVar2;
          if (-0xbefa509a21fe739 < (longlong)uVar1) break;
          if (uVar1 == 0x8384b3e19d0c6bc2) {
            *param_5 = 1;
            local_60 = 0x428097389b891833;
            local_68 = 0x512b52ba40b7dd80;
          }
          else if (uVar1 == 0x89aa468d1db8384e) {
            local_6b = -(local_6c - local_69 ^ local_6d);
            local_60 = 0x808a887f4be8ebf1;
            local_68 = 0xf0ae0a0e9fc4d41d;
          }
          else if (uVar1 == 0xe97e5144f9dcda79) {
            local_60 = 0xde3bc4de8ec8ca73;
            if (*param_5 == 1) {
              local_60 = 0xa40ca85014feb9d1;
            }
            local_68 = 0xb7a76dd2cfc07c62;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < 0x699ca90c4108b611) break;
        if (uVar1 == 0x699ca90c4108b611) {
          local_69 = local_6a;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x6d105a4cf0d1d218;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0x10aa4637b089f29e;
          }
          local_68 = 0xe4ba1cc1ed69ea56;
        }
        else if (uVar1 == 0x70248271d42c3fec) {
          local_6a = local_6b ^ local_6d;
          *(byte *)(param_1 + (int)local_4c) = local_6a;
          local_54 = local_4c + 1;
          local_60 = 0x2e90b67752eb1cf5;
          if (local_54 == param_4) {
            local_60 = 0xc488ac9a8eefc126;
          }
          local_68 = 0x470c1f7b13e3aae4;
        }
      }
      if (uVar1 != 0xf4105af65de018c8) break;
      local_6b = ~(local_6c + local_69 ^ local_6d);
      local_60 = 0x7fc0557437976551;
      local_68 = 0xfe4d705e3bb5abd;
    }
  } while (uVar1 != 0x13abc582db3ec5b3);
  return;
}



HWND FUN_1801b7720(void)

{
  DWORD DVar1;
  uint uVar2;
  LPCWSTR ***ppppWVar3;
  ulonglong uVar4;
  LPSTR ***ppppCVar5;
  ulonglong uVar6;
  LPCWSTR ****pppppWVar7;
  LPSTR ****pppppCVar8;
  HWND pHVar9;
  longlong lVar10;
  LPSTR ***local_1f8;
  undefined8 uStack_1f0;
  HWND local_1e8;
  ulonglong uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  tagRECT local_f8;
  HWND local_e8;
  HWND pHStack_e0;
  undefined4 local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  LPCWSTR ***local_88;
  undefined8 uStack_80;
  HWND local_78;
  ulonglong local_70;
  uintptr_t local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  DWORD local_44;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_c8 = 0x29;
  local_60 = 7;
  local_c0 = 0x27;
  local_50 = 1;
  local_b8 = 2;
  local_b0 = 0x20;
  local_44 = 0;
  local_a8 = 0x28;
  local_a0 = 0xffffffffffffffe0;
  local_98 = -8;
  local_68 = 0;
  local_90 = 0xfff;
  local_58 = 0xf;
  DVar1 = FUN_1801da264(&DAT_18029d668);
  if (DVar1 != local_44) {
    FUN_1801da68c(5);
  }
  if (DAT_18029d6b4 == 0x7fffffff) {
    DAT_18029d6b4 = 0x7ffffffe;
    FUN_1801da68c(6);
  }
  if ((DAT_1802a7938 == (HWND)0x0) || (DVar1 = IsWindow(DAT_1802a7938), pHVar9 = DAT_1802a7938, DVar1 == local_44)) {
    local_e8 = (HWND)0x0;
    pHStack_e0 = (HWND)0x0;
    local_d8 = 0;
    EnumWindows(FUN_1801b7d50,(LPARAM)&local_e8);
    DAT_1802a7938 = local_e8;
    if (local_e8 == (HWND)0x0) {
      DAT_1802a7938 = pHStack_e0;
    }
    pHVar9 = (HWND)0x0;
    if (DAT_1802a7938 == (HWND)0x0) goto LAB_1801b7c50;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = (HWND)0x0;
    uStack_1e0 = 0;
    local_1f8 = (LPSTR ***)0x0;
    uStack_1f0 = 0;
    uVar2 = GetClassNameW(DAT_1802a7938,(LPWSTR)&local_1f8,0x7f);
    if (0 < (int)uVar2) {
      pHVar9 = (HWND)(ulonglong)uVar2;
    }
    local_88 = (LPCWSTR ***)0x0;
    uStack_80 = 0;
    if ((int)uVar2 < 8) {
      pppppWVar7 = &local_88;
      uVar6 = local_60;
    }
    else {
      uVar4 = local_60 | (ulonglong)pHVar9;
      uVar6 = 10;
      if (10 < uVar4) {
        uVar6 = uVar4;
      }
      lVar10 = uVar6 << ((byte)local_50 & 0x3f);
      if (uVar4 < 0x7ff) {
        pppppWVar7 = (LPCWSTR ****)FUN_1801d61c8(lVar10 + local_b8);
        local_88 = (LPCWSTR ***)pppppWVar7;
      }
      else {
        ppppWVar3 = (LPCWSTR ***)FUN_1801d61c8(lVar10 + local_c8);
        pppppWVar7 = (LPCWSTR ****)(local_c0 + (longlong)ppppWVar3 & local_a0);
        pppppWVar7[-1] = ppppWVar3;
        local_88 = (LPCWSTR ***)pppppWVar7;
      }
    }
    local_78 = pHVar9;
    local_70 = uVar6;
    FUN_1802079d0(pppppWVar7,&local_1f8,(longlong)pHVar9 << ((byte)local_50 & 0x3f));
    *(undefined2 *)((longlong)pppppWVar7 + (longlong)pHVar9 * 2) = 0;
    pHVar9 = local_78;
    local_1f8 = (LPSTR ***)0x0;
    uStack_1f0 = 0;
    if ((longlong)local_78 < (longlong)local_68) {
      FUN_180002ac0();
    }
    pppppCVar8 = &local_1f8;
    uVar6 = local_58;
    if ((HWND)0xf < local_78) {
      uVar4 = local_58 | (ulonglong)local_78;
      uVar6 = 0x16;
      if (0x16 < uVar4) {
        uVar6 = uVar4;
      }
      if (uVar4 < 0xfff) {
        pppppCVar8 = (LPSTR ****)FUN_1801d61c8(local_50 + uVar6);
        local_1f8 = (LPSTR ***)pppppCVar8;
      }
      else {
        ppppCVar5 = (LPSTR ***)FUN_1801d61c8(local_a8 + uVar6);
        pppppCVar8 = (LPSTR ****)((longlong)ppppCVar5 + local_c0 & local_a0);
        pppppCVar8[-1] = ppppCVar5;
        local_1f8 = (LPSTR ***)pppppCVar8;
      }
    }
    local_1e8 = pHVar9;
    uStack_1e0 = uVar6;
    FUN_180207610(pppppCVar8,0,pHVar9);
    *(undefined1 *)((longlong)pppppCVar8 + (longlong)pHVar9) = 0;
    pppppCVar8 = &local_1f8;
    if (local_58 < uStack_1e0) {
      pppppCVar8 = (LPSTR ****)local_1f8;
    }
    pppppWVar7 = (LPCWSTR ****)local_88;
    if (local_70 <= local_60) {
      pppppWVar7 = &local_88;
    }
    WideCharToMultiByte(0xfde9,local_44,(LPCWSTR)pppppWVar7,(int)local_78,(LPSTR)pppppCVar8,(int)local_1e8,(LPCSTR)0x0,
                        (LPBOOL)0x0);
    local_f8.left = 0;
    local_f8.top = 0;
    local_f8.right = 0;
    local_f8.bottom = 0;
    GetClientRect(DAT_1802a7938,&local_f8);
    if (local_58 < uStack_1e0) {
      uVar6 = local_50 + uStack_1e0;
      pppppCVar8 = (LPSTR ****)local_1f8;
      if (local_90 < uVar6) {
        pppppCVar8 = (LPSTR ****)local_1f8[-1];
        if (local_b0 <= (ulonglong)((longlong)local_1f8 + (local_98 - (longlong)pppppCVar8))) goto LAB_1801b7cac;
        uVar6 = uStack_1e0 + local_a8;
      }
      thunk_FUN_1801f42e0(pppppCVar8,uVar6);
    }
    pHVar9 = DAT_1802a7938;
    if (local_60 < local_70) {
      lVar10 = local_70 << ((byte)local_50 & 0x3f);
      uVar6 = local_b8 + lVar10;
      pppppWVar7 = (LPCWSTR ****)local_88;
      if (local_90 < uVar6) {
        pppppWVar7 = (LPCWSTR ****)local_88[-1];
        if (local_b0 <= (ulonglong)((longlong)local_88 + (local_98 - (longlong)pppppWVar7))) {
LAB_1801b7cac:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_44,local_68);
        }
        uVar6 = lVar10 + local_c8;
      }
      thunk_FUN_1801f42e0(pppppWVar7,uVar6);
      pHVar9 = DAT_1802a7938;
    }
  }
LAB_1801b7c50:
  FUN_1801da26c(&DAT_18029d668);
  return pHVar9;
}



void Unwind_1801b7cd0(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x1b0);
  return;
}



void Unwind_1801b7d10(void)

{
  FUN_1801da26c(&DAT_18029d668);
  return;
}



uint FUN_1801b7d50(HWND param_1,longlong *param_2)

{
  DWORD DVar1;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  short ****ppppsVar5;
  ulonglong uVar6;
  short ***pppsVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char local_28a;
  char local_289;
  ulonglong local_288;
  ulonglong local_280;
  ushort local_278;
  char local_275;
  uint local_274;
  short ***local_270;
  DWORD local_268;
  uint local_264;
  longlong *local_260;
  undefined8 local_258;
  ulonglong local_250;
  short **local_248;
  int local_23c;
  tagRECT local_238;
  short ***local_228;
  undefined8 uStack_220;
  short **local_218;
  ulonglong local_210;
  longlong *plStack_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  short ***local_1e0;
  ulonglong local_1d8;
  short ***local_1d0;
  ulonglong local_1c8;
  short ***local_1c0;
  short ***local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  short ***local_198;
  ulonglong local_190;
  WCHAR local_188 [164];

  plStack_200 = param_2;
  local_280 = 0x874ed59661bc24e7;
  local_288 = 0x4bd9cabd75c08e4c;
LAB_1801b7e60:
  while( true ) {
    pppsVar7 = local_1c0;
    uVar8 = local_280 ^ 0xaf22b57e859bad95;
    uVar6 = local_280 ^ local_288;
    local_288 = local_288 ^ 0xaf22b57e859bad95;
    local_280 = uVar8;
    if (0x1f6df55292191d07 < (longlong)uVar6) break;
    if ((longlong)uVar6 < -0x3368e0d4eb835555) {
      if ((longlong)uVar6 < -0x6096b305f07dc38c) {
        if (uVar6 == 0x87944f11673570f2) {
          ppppsVar5 = &local_228;
          if (local_28a != '\0') {
            ppppsVar5 = (short ****)local_270;
          }
          local_289 = *(short *)((longlong)ppppsVar5 + 0x32) == 0x77;
          local_280 = 0x3a047370dfeebd9c;
          local_288 = 0xe304e003ab930f1d;
        }
        else if (uVar6 == 0x9a30cd42704f228f) {
          local_1a8 = local_190 << ((byte)local_258 & 0x3f);
          local_1d8 = local_1a8 + local_1f8;
          local_280 = 0xab2a87402a876e20;
          if (0xfff < local_1d8) {
            local_280 = 0x90e64ad06abf97da;
          }
          local_288 = 0xc1eed410e7d5fd26;
          local_1d0 = local_270;
LAB_1801b89d2:
        }
        else if (uVar6 == 0x9b1b953e9a82a03b) {
          local_228 = local_1b8;
          local_280 = 0x7f63731fd0c86faa;
          local_288 = 0x1e37ac16be721d9c;
          local_1c8 = local_1a0;
          local_1c0 = local_1b8;
        }
      }
      else if ((longlong)uVar6 < -0x3d15ca5226946192) {
        if (uVar6 == 0x9f694cfa0f823c74) {
          local_280 = 0xdfafb2736644d5bc;
          local_288 = 0xc0c24721f45dc8b4;
        }
        else if (uVar6 == 0xa5f4ff3e019d3b86) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_274,0);
        }
      }
      else if (uVar6 == 0xc2ea35add96b9e6e) {
        local_280 = 0xd1aa913670b4b089;
        if (local_275 != '\0') {
          local_280 = 0xf9eda96a26f5eaf6;
        }
        local_288 = 0xdf475452214007e7;
      }
      else if (uVar6 == 0xc42cefa8e6cf5578) {
        ppppsVar5 = &local_228;
        if (local_28a != '\0') {
          ppppsVar5 = (short ****)local_270;
        }
        local_280 = 0x2e579514358c0793;
        if (*(short *)(ppppsVar5 + 6) == 0x6f) {
          local_280 = 0x70c3497626c4c5e0;
        }
        local_288 = 0xf757066741f1b512;
        goto LAB_1801b7e51;
      }
    }
    else if ((longlong)uVar6 < -0x86b21b2e903e5b1) {
      if (uVar6 == 0xcc971f2b147caaab) {
        local_1f0 = 0x29;
        local_278 = 0;
        local_250 = 7;
        local_258 = 1;
        local_1f8 = 2;
        local_274 = 0;
        local_260 = plStack_200;
        local_268 = 0;
        GetWindowThreadProcessId(param_1,&local_268);
        DVar1 = local_268;
        DVar4 = GetCurrentProcessId();
        local_280 = 0x5d516f923b9df2b4;
        if (DVar1 == DVar4) {
          local_280 = 0x65438ea9e0f65b2e;
        }
        local_288 = 0x423c9ac0a984efbc;
      }
      else if (uVar6 == 0xd9009373747db281) {
        local_275 = local_289;
        local_280 = 0x30235dd20dfe54b;
        if (local_28a != '\0') {
          local_280 = 0x5bd8cd3289fb59aa;
        }
        local_288 = 0xc1e80070f9b47b25;
      }
      else if (uVar6 == 0xf4d62e6c66380fd4) {
        uVar6 = (ulonglong)local_248 | local_250;
        local_1a0 = 10;
        if (10 < uVar6) {
          local_1a0 = uVar6;
        }
        local_1e8 = local_1a0 << ((byte)local_258 & 0x3f);
        local_280 = 0xccc17459a9918ac1;
        if (0x7fe < uVar6) {
          local_280 = 0x2208abb2a57dc5d;
        }
        local_288 = 0x37ed1a2147959ca9;
      }
    }
    else if ((longlong)uVar6 < 0x8834af15fcea52e) {
      if (uVar6 == 0xf794de4d16fc1a4f) {
        cVar2 = FUN_1801b8d50(param_1);
        local_280 = 0x84d0a16a59c3fd78;
        if (cVar2 != '\0') {
          local_280 = 0xad853358a92cd84a;
        }
        local_288 = 0xb2e8c60a3b35c542;
      }
      else if (uVar6 == 0xfb2c6e78ee041668) {
        local_1b8 = (short ***)FUN_1801d61c8(local_1e8 + local_1f8);
        local_280 = 0x504a2d08d97480c1;
        local_288 = 0xcb51b83643f620fa;
      }
    }
    else {
      if (uVar6 == 0x8834af15fcea52e) {
        ppppsVar5 = (short ****)local_1e0;
        if (local_28a != '\0') {
          ppppsVar5 = (short ****)(local_270 + 2);
        }
        auVar11._0_2_ = -(ushort)(*(short *)ppppsVar5 == 0x55);
        auVar11._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 2) == 0x49);
        auVar11._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 4) == 0x2e);
        auVar11._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 6) == 0x43);
        auVar11._8_2_ = -(ushort)(*(short *)(ppppsVar5 + 1) == 0x6f);
        auVar11._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 10) == 0x72);
        auVar11._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0xc) == 0x65);
        auVar11._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0xe) == 0x2e);
        local_280 = 0x57a5a79856e8b129;
        if (local_278 ==
            (ushort)~((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                      (ushort)((byte)(auVar11._14_2_ >> 7) & 1) << 0xe | auVar11._14_2_ & 0x8000)) {
          local_280 = 0xa9fc3f484d53b856;
        }
        local_288 = 0x8ea534eb229503a8;
        goto LAB_1801b7e51;
      }
      if (uVar6 == 0xeedc56451f4b76e) {
        uVar3 = IsWindowVisible(param_1);
        local_280 = 0x3d79dbaec679ae39;
        if (uVar3 == local_274) {
          local_280 = 0xd580f0b1429ca97e;
        }
        local_288 = 0xcaed05e3d085b476;
      }
    }
  }
  if ((longlong)uVar6 < 0x46f33d79db761b41) {
    if (0x277f14694972b491 < (longlong)uVar6) {
      if (uVar6 == 0x277f14694972b492) {
        local_188[0x78] = L'\0';
        local_188[0x79] = L'\0';
        local_188[0x7a] = L'\0';
        local_188[0x7b] = L'\0';
        local_188[0x7c] = L'\0';
        local_188[0x7d] = L'\0';
        local_188[0x7e] = L'\0';
        local_188[0x7f] = L'\0';
        local_188[0x70] = L'\0';
        local_188[0x71] = L'\0';
        local_188[0x72] = L'\0';
        local_188[0x73] = L'\0';
        local_188[0x74] = L'\0';
        local_188[0x75] = L'\0';
        local_188[0x76] = L'\0';
        local_188[0x77] = L'\0';
        local_188[0x68] = L'\0';
        local_188[0x69] = L'\0';
        local_188[0x6a] = L'\0';
        local_188[0x6b] = L'\0';
        local_188[0x6c] = L'\0';
        local_188[0x6d] = L'\0';
        local_188[0x6e] = L'\0';
        local_188[0x6f] = L'\0';
        local_188[0x60] = L'\0';
        local_188[0x61] = L'\0';
        local_188[0x62] = L'\0';
        local_188[99] = L'\0';
        local_188[100] = L'\0';
        local_188[0x65] = L'\0';
        local_188[0x66] = L'\0';
        local_188[0x67] = L'\0';
        local_188[0x58] = L'\0';
        local_188[0x59] = L'\0';
        local_188[0x5a] = L'\0';
        local_188[0x5b] = L'\0';
        local_188[0x5c] = L'\0';
        local_188[0x5d] = L'\0';
        local_188[0x5e] = L'\0';
        local_188[0x5f] = L'\0';
        local_188[0x50] = L'\0';
        local_188[0x51] = L'\0';
        local_188[0x52] = L'\0';
        local_188[0x53] = L'\0';
        local_188[0x54] = L'\0';
        local_188[0x55] = L'\0';
        local_188[0x56] = L'\0';
        local_188[0x57] = L'\0';
        local_188[0x48] = L'\0';
        local_188[0x49] = L'\0';
        local_188[0x4a] = L'\0';
        local_188[0x4b] = L'\0';
        local_188[0x4c] = L'\0';
        local_188[0x4d] = L'\0';
        local_188[0x4e] = L'\0';
        local_188[0x4f] = L'\0';
        local_188[0x40] = L'\0';
        local_188[0x41] = L'\0';
        local_188[0x42] = L'\0';
        local_188[0x43] = L'\0';
        local_188[0x44] = L'\0';
        local_188[0x45] = L'\0';
        local_188[0x46] = L'\0';
        local_188[0x47] = L'\0';
        local_188[0x38] = L'\0';
        local_188[0x39] = L'\0';
        local_188[0x3a] = L'\0';
        local_188[0x3b] = L'\0';
        local_188[0x3c] = L'\0';
        local_188[0x3d] = L'\0';
        local_188[0x3e] = L'\0';
        local_188[0x3f] = L'\0';
        local_188[0x30] = L'\0';
        local_188[0x31] = L'\0';
        local_188[0x32] = L'\0';
        local_188[0x33] = L'\0';
        local_188[0x34] = L'\0';
        local_188[0x35] = L'\0';
        local_188[0x36] = L'\0';
        local_188[0x37] = L'\0';
        local_188[0x28] = L'\0';
        local_188[0x29] = L'\0';
        local_188[0x2a] = L'\0';
        local_188[0x2b] = L'\0';
        local_188[0x2c] = L'\0';
        local_188[0x2d] = L'\0';
        local_188[0x2e] = L'\0';
        local_188[0x2f] = L'\0';
        local_188[0x20] = L'\0';
        local_188[0x21] = L'\0';
        local_188[0x22] = L'\0';
        local_188[0x23] = L'\0';
        local_188[0x24] = L'\0';
        local_188[0x25] = L'\0';
        local_188[0x26] = L'\0';
        local_188[0x27] = L'\0';
        local_188[0x18] = L'\0';
        local_188[0x19] = L'\0';
        local_188[0x1a] = L'\0';
        local_188[0x1b] = L'\0';
        local_188[0x1c] = L'\0';
        local_188[0x1d] = L'\0';
        local_188[0x1e] = L'\0';
        local_188[0x1f] = L'\0';
        local_188[0x10] = L'\0';
        local_188[0x11] = L'\0';
        local_188[0x12] = L'\0';
        local_188[0x13] = L'\0';
        local_188[0x14] = L'\0';
        local_188[0x15] = L'\0';
        local_188[0x16] = L'\0';
        local_188[0x17] = L'\0';
        local_188[8] = L'\0';
        local_188[9] = L'\0';
        local_188[10] = L'\0';
        local_188[0xb] = L'\0';
        local_188[0xc] = L'\0';
        local_188[0xd] = L'\0';
        local_188[0xe] = L'\0';
        local_188[0xf] = L'\0';
        local_188[0] = L'\0';
        local_188[1] = L'\0';
        local_188[2] = L'\0';
        local_188[3] = L'\0';
        local_188[4] = L'\0';
        local_188[5] = L'\0';
        local_188[6] = L'\0';
        local_188[7] = L'\0';
        uVar3 = GetClassNameW(param_1,local_188,0x7f);
        local_248 = (short **)0x0;
        if (0 < (int)uVar3) {
          local_248 = (short **)(ulonglong)uVar3;
        }
        local_228 = (short ***)0x0;
        uStack_220 = 0;
        local_280 = 0x5c31fc7d70ee0c6f;
        if ((int)uVar3 < 8) {
          local_280 = 0xc9b30d18786c718d;
        }
        local_288 = 0xa8e7d21116d603bb;
        local_1c8 = local_250;
        local_1c0 = (short ***)&local_228;
      }
      else if (uVar6 == 0x35cd909a6dc240f4) {
        pppsVar7 = (short ***)FUN_1801d61c8(local_1e8 + local_1f0);
        local_1b8 = (short ***)((longlong)pppsVar7 + 0x27U & 0xffffffffffffffe0);
        local_1b8[-1] = (short **)pppsVar7;
        local_280 = 0x55d5c34bd61840d1;
        local_288 = 0xcece56754c9ae0ea;
      }
      else if (uVar6 == 0x3638676062f6383a) {
        local_238.left = 0;
        local_238.top = 0;
        local_238.right = 0;
        local_238.bottom = 0;
        GetClientRect(param_1,&local_238);
        local_23c = (local_238.bottom - local_238.top) * (local_238.right - local_238.left);
        local_1b0 = local_260 + 2;
        local_280 = 0xf1939020985f0a7e;
        if ((int)local_260[2] < local_23c) {
          local_280 = 0x8c7bad0ed26c556;
        }
        local_288 = 0x6efadcda97dd360a;
      }
      goto LAB_1801b7e60;
    }
    if (uVar6 == 0x1f6df55292191d08) {
      EnumChildWindows(param_1,FUN_1801bb980,(LPARAM)plStack_200);
      local_280 = 0xaaf8a95ccff5e10d;
      local_288 = 0xec0b94251483fa4c;
      local_264 = (uint)(*local_260 == 0);
      goto LAB_1801b7e60;
    }
    if (uVar6 == 0x26aafd3807b5ed11) {
      *local_260 = (longlong)param_1;
      local_264 = local_274;
      local_280 = 0xb28ac71544df5046;
      local_288 = 0xf479fa6c9fa94b07;
      goto LAB_1801b7e60;
    }
    if (uVar6 != 0x27590ba36fc6bbfe) goto LAB_1801b7e60;
    ppppsVar5 = &local_228;
    if (local_28a != '\0') {
      ppppsVar5 = (short ****)local_270;
    }
    auVar9._0_2_ = -(ushort)(*(short *)(ppppsVar5 + 4) == 0x43);
    auVar9._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0x22) == 0x6f);
    auVar9._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0x24) == 0x72);
    auVar9._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0x26) == 0x65);
    auVar9._8_2_ = -(ushort)(*(short *)(ppppsVar5 + 5) == 0x57);
    auVar9._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0x2a) == 0x69);
    auVar9._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0x2c) == 0x6e);
    auVar9._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0x2e) == 100);
    local_280 = 0x158ed1e098ec86b5;
    if (local_278 ==
        (ushort)~((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                  (ushort)((byte)(auVar9._14_2_ >> 7) & 1) << 0xe | auVar9._14_2_ & 0x8000)) {
      local_280 = 0x8a2ad3b0a5e614c;
    }
    local_288 = 0xcc8e4293ec913434;
  }
  else if ((longlong)uVar6 < 0x6154df096eba7236) {
    if ((longlong)uVar6 < 0x51089ec08d6a6afc) {
      if (uVar6 == 0x4e20dddff68a1307) {
        local_1d8 = local_1a8 + local_1f0;
        local_280 = 0x663e448088d0f3cb;
        local_288 = 0xcfa17d0458260cd;
        local_1d0 = local_198;
        goto LAB_1801b89d2;
      }
      if (uVar6 == 0x46f33d79db761b41) {
        return local_264;
      }
      goto LAB_1801b7e60;
    }
    if (uVar6 == 0x51089ec08d6a6afc) {
      local_198 = (short ***)local_270[-1];
      local_280 = 0xe4a85c1ecf377a40;
      if ((ulonglong)((longlong)local_270 + (-8 - (longlong)local_270[-1])) < 0x20) {
        local_280 = 0xf7c7eff382052c1;
      }
      local_288 = 0x415ca320ceaa41c6;
      goto LAB_1801b7e60;
    }
    if (uVar6 != 0x5156396c94c80b18) goto LAB_1801b7e60;
    ppppsVar5 = &local_228;
    if (local_28a != '\0') {
      ppppsVar5 = (short ****)local_270;
    }
    auVar10._0_2_ = -(ushort)(*(short *)ppppsVar5 == 0x57);
    auVar10._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 2) == 0x69);
    auVar10._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 4) == 0x6e);
    auVar10._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 6) == 100);
    auVar10._8_2_ = -(ushort)(*(short *)(ppppsVar5 + 1) == 0x6f);
    auVar10._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 10) == 0x77);
    auVar10._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0xc) == 0x73);
    auVar10._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar5 + 0xe) == 0x2e);
    local_280 = 0xc1537ced527e0a54;
    if (local_278 ==
        (ushort)~((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                  (ushort)((byte)(auVar10._14_2_ >> 7) & 1) << 0xe | auVar10._14_2_ & 0x8000)) {
      local_280 = 0x10d0a56f79cd1dfb;
    }
    local_288 = 0x1853ef9e2603b8d5;
  }
  else {
    if (uVar6 != 0x6154df096eba7236) {
      if (uVar6 == 0x663d660a7afbf35c) {
        *(int *)local_1b0 = local_23c;
        local_260[1] = (longlong)param_1;
        local_280 = 0x285d778848cdd56a;
        local_288 = 0xb7343b72474fe91e;
      }
      else if (uVar6 == 0x6ac45350cd529306) {
        thunk_FUN_1801f42e0(local_1d0,local_1d8);
        local_280 = 0x7a13f128e7d3423d;
        local_288 = 0xb8f9c4853eb8dc53;
      }
      goto LAB_1801b7e60;
    }
    local_1e0 = &local_218;
    local_218 = local_248;
    local_210 = local_1c8;
    FUN_1802079d0(local_1c0,local_188);
    *(ushort *)((longlong)pppsVar7 + (longlong)local_248 * 2) = local_278;
    local_270 = local_228;
    local_190 = local_210;
    local_28a = local_250 < local_210;
    local_280 = 0x721c67d46aee0a4e;
    if ((short ***)*local_1e0 == (short ***)0x1a) {
      local_280 = 0xfa4acdcb8a5bb3d7;
    }
    local_288 = 0xab1cf4a71e93b8cf;
  }
LAB_1801b7e51:
  local_289 = '\0';
  goto LAB_1801b7e60;
}



byte FUN_1801b8b10(void)

{
  DWORD DVar1;
  byte bVar2;
  DWORD DVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [47];
  byte local_69;
  ulonglong local_68;
  ulonglong local_60;
  HWND local_58;
  DWORD local_4c;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_98;
  local_60 = 0xe8b478749e57b9c0;
  local_68 = 0xf5bc3e902067b971;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_60 ^ 0xa7d1163e812b5209;
          uVar4 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xa7d1163e812b5209;
          local_60 = uVar5;
          if (0x30e5214576e918bc < (longlong)uVar4) break;
          if (uVar4 == 0x979d1c605c031af3) {
            local_4c = local_4c & 0xffffff00;
            EnumChildWindows(local_58,FUN_1801bc510,(LPARAM)&local_4c);
            local_60 = 0xd6482af4055197b7;
            local_68 = 0xe6ad0bb173b88f0a;
            local_69 = (byte)local_4c;
          }
          else if (uVar4 == 0x1d0846e4be3000b1) {
            local_58 = GetForegroundWindow();
            local_60 = 0x6afd7d74e5620bbb;
            if (local_58 == (HWND)0x0) {
              local_60 = 0x6839a0e949df047;
            }
            local_68 = 0x3666bb4be274e8fa;
            local_69 = 0;
          }
        }
        if (uVar4 != 0x5c9bc63f0716e341) break;
        local_4c = 0;
        GetWindowThreadProcessId(local_58,&local_4c);
        DVar1 = local_4c;
        DVar3 = GetCurrentProcessId();
        local_60 = 0x702c4ca2f784ec82;
        if (DVar1 == DVar3) {
          local_60 = 0x9ecb4bf2af683d1b;
        }
        local_68 = 0xe7b150c2ab87f671;
      }
      if (uVar4 != 0x797a1b3004efcb6a) break;
      bVar2 = FUN_1801b8d50(local_58);
      local_60 = 0xc63587ff6ba694e;
      local_68 = 0x3c86793a805371f3;
      local_69 = bVar2 ^ 1;
    }
  } while (uVar4 != 0x30e5214576e918bd);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_98)) {
    return local_69;
  }
}



undefined1 FUN_1801b8d50(HWND param_1)

{
  uint uVar1;
  ulonglong uVar2;
  short ***pppsVar3;
  short ****ppppsVar4;
  short ****ppppsVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_2b4;
  char local_2b3;
  ushort local_2b2;
  ulonglong local_2b0;
  ulonglong local_2a8;
  undefined1 local_299;
  short ***local_298;
  short local_28a;
  short **local_288;
  short ***local_280;
  byte local_278;
  ulonglong local_270;
  short **local_268;
  short ***local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  short ***local_240;
  ulonglong local_238;
  short ***local_230;
  ulonglong local_228;
  short ***local_220;
  short ***local_218;
  undefined8 uStack_210;
  short **local_208;
  ulonglong local_200;
  HWND local_1f8;
  short ***pppsStack_1f0;
  longlong local_1e8;
  short ***local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  WCHAR local_1c8 [196];

  local_1f8 = param_1;
  local_2a8 = 0xf7916d45b16adb9f;
  local_2b0 = 0xa1578f3e684a631f;
LAB_1801b8e9a:
  uVar6 = local_2a8 ^ 0x919d2e0ab5fa783b;
  uVar2 = local_2a8 ^ local_2b0;
  local_2b0 = local_2b0 ^ 0x919d2e0ab5fa783b;
  local_2a8 = uVar6;
  if ((longlong)uVar2 < 0xa508de5b38539be) {
    if (-0x30f31abb80e39182 < (longlong)uVar2) {
      if ((longlong)uVar2 < -0xc4e300373f1d3f7) {
        if ((longlong)uVar2 < -0x1ce9e07f68bbd491) {
          if (uVar2 == 0xd1c1793c482cfa3a) {
            local_2a8 = 0x39472366b3d84dc;
            if ((short ***)local_288 == (short ***)0x12) {
              local_2a8 = 0x7831e3adfcdb6765;
            }
            local_2b0 = 0x8afe6e7511e57edf;
          }
          else if (uVar2 == 0xcf0ce5447f1c6e7f) {
            return local_299;
          }
        }
        else if (uVar2 == 0xe3161f8097442b6f) {
          local_2a8 = 0xe19744e877a3ebe7;
          if ((longlong)local_288 < 0x13) {
            local_2a8 = 0x7989b52073b4edda;
          }
          local_2b0 = 0xa848cc1c3b9817e0;
        }
        else if (uVar2 == 0xf2cf8dd8ed3e19ba) {
          auVar8._0_2_ = -(ushort)(*(short *)local_260 == 0x43);
          auVar8._2_2_ = -(ushort)(*(short *)((longlong)local_260 + 2) == 0x6f);
          auVar8._4_2_ = -(ushort)(*(short *)((longlong)local_260 + 4) == 0x6e);
          auVar8._6_2_ = -(ushort)(*(short *)((longlong)local_260 + 6) == 0x73);
          auVar8._8_2_ = -(ushort)(*(short *)(local_260 + 1) == 0x6f);
          auVar8._10_2_ = -(ushort)(*(short *)((longlong)local_260 + 10) == 0x6c);
          auVar8._12_2_ = -(ushort)(*(short *)((longlong)local_260 + 0xc) == 0x65);
          auVar8._14_2_ = -(ushort)(*(short *)((longlong)local_260 + 0xe) == 0x57);
          local_2a8 = 0xd881836ddf059d48;
          if (local_2b2 ==
              (ushort)~((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                        (ushort)((byte)(auVar8._14_2_ >> 7) & 1) << 0xe | auVar8._14_2_ & 0x8000)) {
            local_2a8 = 0x47c92486f27d41dc;
          }
          local_2b0 = 0x2fe318a2dc577948;
          goto LAB_1801b8e90;
        }
      }
      else if ((longlong)uVar2 < -0x641bd46473dd5c3) {
        if (uVar2 == 0xf3b1cffc8c0e2c09) {
          ppppsVar4 = (short ****)local_280;
          if (local_2b3 != '\0') {
            ppppsVar4 = (short ****)(local_298 + 2);
          }
          auVar11._0_2_ = -(ushort)(*(short *)ppppsVar4 == 0x6e);
          auVar11._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 2) == 0x73);
          auVar11._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 4) == 0x6f);
          auVar11._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 6) == 0x6c);
          auVar11._8_2_ = -(ushort)(*(short *)(ppppsVar4 + 1) == 0x65);
          auVar11._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 10) == 0x57);
          auVar11._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0xc) == 0x69);
          auVar11._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0xe) == 0x6e);
          local_2a8 = 0xfb10383bfbee6eb9;
          if (local_2b2 ==
              (ushort)~((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd
                        | (ushort)((byte)(auVar11._14_2_ >> 7) & 1) << 0xe | auVar11._14_2_ & 0x8000)) {
            local_2a8 = 0x313569e9b1d93876;
          }
          local_2b0 = 0xc72a3f4f8bc8ab9;
          goto LAB_1801b8e90;
        }
        if (uVar2 == 0xf7629bcf0352e400) {
          local_299 = local_2b4;
          local_2a8 = 0x15bce84f450bb7a5;
          if (local_2b3 != '\0') {
            local_2a8 = 0x8f903a7dde9cc9ee;
          }
          local_2b0 = 0xdab00d0b3a17d9da;
        }
      }
      else if (uVar2 == 0xf9be42b9b8c22a3d) {
        uVar2 = (ulonglong)local_268 | local_270;
        local_1d8 = 10;
        if (10 < uVar2) {
          local_1d8 = uVar2;
        }
        local_248 = local_1d8 << (local_278 & 0x3f);
        local_2a8 = 0xf536f378dc5d3998;
        if (0x7fe < uVar2) {
          local_2a8 = 0xe7d62a446fe2d3e1;
        }
        local_2b0 = 0x47e99b80e2ea30fb;
      }
      else if (uVar2 == 0x55358774ff3da) {
        thunk_FUN_1801f42e0(local_230,local_238);
        local_2a8 = 0xf9f30f14ed298e36;
        local_2b0 = 0x36ffea509235e049;
      }
      goto LAB_1801b8e9a;
    }
    if (-0x4e97bd065422897a < (longlong)uVar2) {
      if ((longlong)uVar2 < -0x4c257a9ecb2d90b3) {
        if (uVar2 == 0xb16842f9abdd7687) {
          local_238 = local_1e8 + local_250;
          local_2a8 = 0x20de668b01ebc519;
          local_2b0 = 0x20db35d376a436c3;
          local_230 = pppsStack_1f0;
        }
        else if (uVar2 == 0xb2df68f83eb70963) {
          local_240 = (short ***)FUN_1801d61c8(local_248 + local_258);
          local_2a8 = 0x72d125a0b83f90a9;
          local_2b0 = 0x107b166393e9513b;
        }
      }
      else if (uVar2 == 0xbce9ef946f552048) {
        ppppsVar4 = &local_218;
        if (local_2b3 != '\0') {
          ppppsVar4 = (short ****)local_298;
        }
        local_2b4 = *(short *)((longlong)ppppsVar4 + 0x22) == local_28a;
        local_2a8 = 0x4f345c3008f2a22e;
        local_2b0 = 0xb856c7ff0ba0462e;
      }
      else if (uVar2 == 0xbe9506f21af0e667) {
        local_280 = &local_208;
        local_208 = local_268;
        local_200 = local_228;
        FUN_1802079d0(local_220,local_1c8,(longlong)local_268 << (local_278 & 0x3f));
        *(ushort *)((longlong)local_220 + (longlong)local_268 * 2) = local_2b2;
        local_288 = local_208;
        local_298 = local_218;
        local_1d0 = local_200;
        local_2b3 = local_270 < local_200;
        local_260 = local_218;
        if (local_200 <= local_270) {
          local_260 = (short ***)&local_218;
        }
        local_2a8 = 0x165ec7b17bd61750;
        local_2b0 = 0xf548d831ec923c3f;
      }
      else if (uVar2 == 0xb3da856134d26f4d) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1801b8e9a;
    }
    if ((longlong)uVar2 < -0x565c3ee06ea0a2a3) {
      if (uVar2 != 0x896a1c437ad8fa03) {
        if (uVar2 == 0xa03fb1c48d08e31a) {
          pppsVar3 = (short ***)FUN_1801d61c8(local_248 + local_250);
          local_240 = (short ***)((longlong)pppsVar3 + 0x27U & 0xffffffffffffffe0);
          local_240[-1] = (short **)pppsVar3;
          local_2a8 = 0xc9d66175a50714e2;
          local_2b0 = 0xab7c52b68ed1d570;
        }
        goto LAB_1801b8e9a;
      }
      local_2a8 = 0x28c0ea50c85d2f04;
      local_2b0 = 0xdfa2719fcb0fcb04;
    }
    else {
      if (uVar2 != 0xa9a3c11f915f5d5d) {
        if (uVar2 == 0xafe10dbc6af08cf9) {
          ppppsVar4 = &local_218;
          if (local_2b3 != '\0') {
            ppppsVar4 = (short ****)local_298;
          }
          local_2a8 = 0x3942ee13f520a563;
          if (*(short *)(ppppsVar4 + 4) == local_28a) {
            local_2a8 = 0x72c99a489927612b;
          }
          local_2b0 = 0xce2075dcf6724163;
          goto LAB_1801b8e90;
        }
        goto LAB_1801b8e9a;
      }
      local_2a8 = 0x40647d8aa8bbea1d;
      if ((short ***)*local_1e0 == (short ***)0x530041004c0043) {
        local_2a8 = 0xc4b1b2abffc6647f;
      }
      local_2b0 = 0xb706e645abe90e1d;
    }
  }
  else if ((longlong)uVar2 < 0x56c6e27bd920b880) {
    if ((longlong)uVar2 < 0x49df88f44c3bfc07) {
      if ((longlong)uVar2 < 0x2a7579eb51e813bf) {
        if (uVar2 == 0xa508de5b38539be) {
          ppppsVar4 = &local_218;
          if (local_2b3 != '\0') {
            ppppsVar4 = (short ****)local_298;
          }
          local_2b4 = *(short *)((longlong)ppppsVar4 + 0x24) == 0x77;
          local_2a8 = 0xc31bcb90ab009c78;
          local_2b0 = 0x3479505fa8527878;
          goto LAB_1801b8e9a;
        }
        if (uVar2 != 0x2a6d89e5653d86da) goto LAB_1801b8e9a;
        auVar7._0_2_ = -(ushort)(*(short *)local_260 == 0x50);
        auVar7._2_2_ = -(ushort)(*(short *)((longlong)local_260 + 2) == 0x73);
        auVar7._4_2_ = -(ushort)(*(short *)((longlong)local_260 + 4) == 0x65);
        auVar7._6_2_ = -(ushort)(*(short *)((longlong)local_260 + 6) == 0x75);
        auVar7._8_2_ = -(ushort)(*(short *)(local_260 + 1) == 100);
        auVar7._10_2_ = -(ushort)(*(short *)((longlong)local_260 + 10) == 0x6f);
        auVar7._12_2_ = -(ushort)(*(short *)((longlong)local_260 + 0xc) == 0x43);
        auVar7._14_2_ = -(ushort)(*(short *)((longlong)local_260 + 0xe) == 0x6f);
        local_2a8 = 0x337569f4c621e02a;
        if (local_2b2 ==
            (ushort)~((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                      (ushort)((byte)(auVar7._14_2_ >> 7) & 1) << 0xe | auVar7._14_2_ & 0x8000)) {
          local_2a8 = 0x37a63dc7497d2823;
        }
        local_2b0 = 0xc417f23bc573042a;
      }
      else {
        if (uVar2 == 0x2a7579eb51e813bf) {
          pppsStack_1f0 = (short ***)local_298[-1];
          local_2a8 = 0x3588162960dc0dd3;
          if ((ulonglong)((longlong)local_298 + (-8 - (longlong)local_298[-1])) < 0x20) {
            local_2a8 = 0x373ad1b1ffd31419;
          }
          local_2b0 = 0x86529348540e629e;
          goto LAB_1801b8e9a;
        }
        if (uVar2 != 0x3d47ca1d4965b2cf) goto LAB_1801b8e9a;
        ppppsVar4 = &local_218;
        if (local_2b3 != '\0') {
          ppppsVar4 = (short ****)local_298;
        }
        local_2a8 = 0x17a157f38692b554;
        if (*(short *)(ppppsVar4 + 4) == 100) {
          local_2a8 = 0xae972566b14fb351;
        }
        local_2b0 = 0xe0c3cc3c85c05154;
      }
    }
    else {
      if ((longlong)uVar2 < 0x4e54e95a348fe205) {
        if (uVar2 == 0x49df88f44c3bfc07) {
          local_2a8 = 0xab7d284b2f6d163e;
          if ((longlong)local_288 < 0x1d) {
            local_2a8 = 0x9dd2b4718afd72ca;
          }
          local_2b0 = 0xd62bd90ff8a65099;
        }
        else if (uVar2 == 0x4bf96d7e725b2253) {
          local_2a8 = 0xbeec7f840128a701;
          if ((short ***)local_288 == (short ***)0x13) {
            local_2a8 = 0x1debea221ecddbd8;
          }
          local_2b0 = 0x378663c77bf05d02;
        }
        goto LAB_1801b8e9a;
      }
      if (uVar2 != 0x4e54e95a348fe205) {
        if (uVar2 == 0x55203776e48b1034) {
          local_1e8 = local_1d0 << (local_278 & 0x3f);
          local_238 = local_1e8 + local_258;
          local_2a8 = 0x86edfbac16bac6b2;
          if (0xfff < local_238) {
            local_2a8 = 0xac9dd11f301d26d7;
          }
          local_2b0 = 0x86e8a8f461f53568;
          local_230 = local_298;
        }
        goto LAB_1801b8e9a;
      }
      ppppsVar4 = &local_218;
      if (local_2b3 != '\0') {
        ppppsVar4 = (short ****)local_298;
      }
      local_2a8 = 0xc0181149236d3d20;
      if (*(short *)((longlong)ppppsVar4 + 0x22) == 0x6f) {
        local_2a8 = 0x3d2a076393bae09e;
      }
      local_2b0 = 0x377a8a86203fd920;
    }
  }
  else if ((longlong)uVar2 < 0x63462bf94f80d874) {
    if ((longlong)uVar2 < 0x5b2d0ec5cd8da26b) {
      if (uVar2 == 0x56c6e27bd920b880) {
        local_250 = 0x29;
        local_2b2 = 0;
        local_270 = 7;
        local_278 = 1;
        local_258 = 2;
        local_28a = 0x73;
        local_1c8[0x78] = L'\0';
        local_1c8[0x79] = L'\0';
        local_1c8[0x7a] = L'\0';
        local_1c8[0x7b] = L'\0';
        local_1c8[0x7c] = L'\0';
        local_1c8[0x7d] = L'\0';
        local_1c8[0x7e] = L'\0';
        local_1c8[0x7f] = L'\0';
        local_1c8[0x70] = L'\0';
        local_1c8[0x71] = L'\0';
        local_1c8[0x72] = L'\0';
        local_1c8[0x73] = L'\0';
        local_1c8[0x74] = L'\0';
        local_1c8[0x75] = L'\0';
        local_1c8[0x76] = L'\0';
        local_1c8[0x77] = L'\0';
        local_1c8[0x68] = L'\0';
        local_1c8[0x69] = L'\0';
        local_1c8[0x6a] = L'\0';
        local_1c8[0x6b] = L'\0';
        local_1c8[0x6c] = L'\0';
        local_1c8[0x6d] = L'\0';
        local_1c8[0x6e] = L'\0';
        local_1c8[0x6f] = L'\0';
        local_1c8[0x60] = L'\0';
        local_1c8[0x61] = L'\0';
        local_1c8[0x62] = L'\0';
        local_1c8[99] = L'\0';
        local_1c8[100] = L'\0';
        local_1c8[0x65] = L'\0';
        local_1c8[0x66] = L'\0';
        local_1c8[0x67] = L'\0';
        local_1c8[0x58] = L'\0';
        local_1c8[0x59] = L'\0';
        local_1c8[0x5a] = L'\0';
        local_1c8[0x5b] = L'\0';
        local_1c8[0x5c] = L'\0';
        local_1c8[0x5d] = L'\0';
        local_1c8[0x5e] = L'\0';
        local_1c8[0x5f] = L'\0';
        local_1c8[0x50] = L'\0';
        local_1c8[0x51] = L'\0';
        local_1c8[0x52] = L'\0';
        local_1c8[0x53] = L'\0';
        local_1c8[0x54] = L'\0';
        local_1c8[0x55] = L'\0';
        local_1c8[0x56] = L'\0';
        local_1c8[0x57] = L'\0';
        local_1c8[0x48] = L'\0';
        local_1c8[0x49] = L'\0';
        local_1c8[0x4a] = L'\0';
        local_1c8[0x4b] = L'\0';
        local_1c8[0x4c] = L'\0';
        local_1c8[0x4d] = L'\0';
        local_1c8[0x4e] = L'\0';
        local_1c8[0x4f] = L'\0';
        local_1c8[0x40] = L'\0';
        local_1c8[0x41] = L'\0';
        local_1c8[0x42] = L'\0';
        local_1c8[0x43] = L'\0';
        local_1c8[0x44] = L'\0';
        local_1c8[0x45] = L'\0';
        local_1c8[0x46] = L'\0';
        local_1c8[0x47] = L'\0';
        local_1c8[0x38] = L'\0';
        local_1c8[0x39] = L'\0';
        local_1c8[0x3a] = L'\0';
        local_1c8[0x3b] = L'\0';
        local_1c8[0x3c] = L'\0';
        local_1c8[0x3d] = L'\0';
        local_1c8[0x3e] = L'\0';
        local_1c8[0x3f] = L'\0';
        local_1c8[0x30] = L'\0';
        local_1c8[0x31] = L'\0';
        local_1c8[0x32] = L'\0';
        local_1c8[0x33] = L'\0';
        local_1c8[0x34] = L'\0';
        local_1c8[0x35] = L'\0';
        local_1c8[0x36] = L'\0';
        local_1c8[0x37] = L'\0';
        local_1c8[0x28] = L'\0';
        local_1c8[0x29] = L'\0';
        local_1c8[0x2a] = L'\0';
        local_1c8[0x2b] = L'\0';
        local_1c8[0x2c] = L'\0';
        local_1c8[0x2d] = L'\0';
        local_1c8[0x2e] = L'\0';
        local_1c8[0x2f] = L'\0';
        local_1c8[0x20] = L'\0';
        local_1c8[0x21] = L'\0';
        local_1c8[0x22] = L'\0';
        local_1c8[0x23] = L'\0';
        local_1c8[0x24] = L'\0';
        local_1c8[0x25] = L'\0';
        local_1c8[0x26] = L'\0';
        local_1c8[0x27] = L'\0';
        local_1c8[0x18] = L'\0';
        local_1c8[0x19] = L'\0';
        local_1c8[0x1a] = L'\0';
        local_1c8[0x1b] = L'\0';
        local_1c8[0x1c] = L'\0';
        local_1c8[0x1d] = L'\0';
        local_1c8[0x1e] = L'\0';
        local_1c8[0x1f] = L'\0';
        local_1c8[0x10] = L'\0';
        local_1c8[0x11] = L'\0';
        local_1c8[0x12] = L'\0';
        local_1c8[0x13] = L'\0';
        local_1c8[0x14] = L'\0';
        local_1c8[0x15] = L'\0';
        local_1c8[0x16] = L'\0';
        local_1c8[0x17] = L'\0';
        local_1c8[8] = L'\0';
        local_1c8[9] = L'\0';
        local_1c8[10] = L'\0';
        local_1c8[0xb] = L'\0';
        local_1c8[0xc] = L'\0';
        local_1c8[0xd] = L'\0';
        local_1c8[0xe] = L'\0';
        local_1c8[0xf] = L'\0';
        local_1c8[0] = L'\0';
        local_1c8[1] = L'\0';
        local_1c8[2] = L'\0';
        local_1c8[3] = L'\0';
        local_1c8[4] = L'\0';
        local_1c8[5] = L'\0';
        local_1c8[6] = L'\0';
        local_1c8[7] = L'\0';
        uVar1 = GetClassNameW(local_1f8,local_1c8,0x7f);
        local_268 = (short **)0x0;
        if (0 < (int)uVar1) {
          local_268 = (short **)(ulonglong)uVar1;
        }
        local_218 = (short ***)0x0;
        uStack_210 = 0;
        local_228 = 7;
        local_2a8 = 0xc52be4a13982773f;
        if ((int)uVar1 < 8) {
          local_2a8 = 0x8200a0ea9bb0bb65;
        }
        local_2b0 = 0x3c95a61881405d02;
        local_220 = (short ***)&local_218;
        goto LAB_1801b8e9a;
      }
      if (uVar2 != 0x57ce15922c229122) goto LAB_1801b8e9a;
      ppppsVar4 = (short ****)local_280;
      ppppsVar5 = &local_218;
      if (local_2b3 != '\0') {
        ppppsVar4 = (short ****)(local_298 + 2);
        ppppsVar5 = (short ****)local_298;
      }
      local_1e0 = (short ***)(ppppsVar5 + 6);
      auVar12._0_2_ = -(ushort)(*(short *)ppppsVar4 == 0x5f);
      auVar12._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 2) == 0x48);
      auVar12._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 4) == 0x4f);
      auVar12._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 6) == 0x53);
      auVar12._8_2_ = -(ushort)(*(short *)(ppppsVar4 + 1) == 0x54);
      auVar12._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 10) == 0x49);
      auVar12._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0xc) == 0x4e);
      auVar12._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0xe) == 0x47);
      local_2a8 = 0xe1bc0ce332059c70;
      if (local_2b2 ==
          (ushort)~((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar12._14_2_ >> 7) & 1) << 0xe | auVar12._14_2_ & 0x8000)) {
        local_2a8 = 0x7598bcd57ed7a004;
      }
      local_2b0 = 0x16de972c31577870;
    }
    else {
      if (uVar2 != 0x5b2d0ec5cd8da26b) {
        if (uVar2 == 0x62aa33c32bd6c192) {
          local_218 = local_240;
          local_2a8 = 0x2fca080430cdd70a;
          local_2b0 = 0x915f0ef62a3d316d;
          local_228 = local_1d8;
          local_220 = local_240;
        }
        goto LAB_1801b8e9a;
      }
      auVar10._0_2_ = -(ushort)(*(short *)local_260 == 0x43);
      auVar10._2_2_ = -(ushort)(*(short *)((longlong)local_260 + 2) == 0x41);
      auVar10._4_2_ = -(ushort)(*(short *)((longlong)local_260 + 4) == 0x53);
      auVar10._6_2_ = -(ushort)(*(short *)((longlong)local_260 + 6) == 0x43);
      auVar10._8_2_ = -(ushort)(*(short *)(local_260 + 1) == 0x41);
      auVar10._10_2_ = -(ushort)(*(short *)((longlong)local_260 + 10) == 0x44);
      auVar10._12_2_ = -(ushort)(*(short *)((longlong)local_260 + 0xc) == 0x49);
      auVar10._14_2_ = -(ushort)(*(short *)((longlong)local_260 + 0xe) == 0x41);
      local_2a8 = 0x71f2114883bd9f34;
      if (local_2b2 ==
          (ushort)~((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar10._14_2_ >> 7) & 1) << 0xe | auVar10._14_2_ & 0x8000)) {
        local_2a8 = 0xd15e9f15accdea16;
      }
      local_2b0 = 0x86908a8780ef7b34;
    }
  }
  else {
    if (0x73b754ee542f6a61 < (longlong)uVar2) {
      if (uVar2 == 0x73b754ee542f6a62) {
        ppppsVar4 = &local_218;
        if (local_2b3 != '\0') {
          ppppsVar4 = (short ****)local_298;
        }
        local_2b4 = *(short *)(ppppsVar4 + 7) == 0x53;
        local_2a8 = 0x218f965b343a886;
        local_2b0 = 0xf57a62aab0114c86;
      }
      else if (uVar2 == 0x7d56f144d7cb46a7) {
        local_2a8 = 0xe2dd640120a53e78;
        if ((short ***)local_288 == (short ***)0x1d) {
          local_2a8 = 0x309a768797f06610;
        }
        local_2b0 = 0x6bb778425a7dc47b;
      }
      goto LAB_1801b8e9a;
    }
    if (uVar2 == 0x63462bf94f80d874) {
      ppppsVar4 = &local_218;
      if (local_2b3 != '\0') {
        ppppsVar4 = (short ****)local_298;
      }
      auVar9._0_2_ = -(ushort)(*(short *)(ppppsVar4 + 4) == 0x5f);
      auVar9._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0x22) == 0x57);
      auVar9._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0x24) == 0x49);
      auVar9._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0x26) == 0x4e);
      auVar9._8_2_ = -(ushort)(*(short *)(ppppsVar4 + 5) == 0x44);
      auVar9._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0x2a) == 0x4f);
      auVar9._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0x2c) == 0x57);
      auVar9._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0x2e) == 0x5f);
      local_2a8 = 0xc5130bd15429480d;
      if (local_2b2 ==
          (ushort)~((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar9._14_2_ >> 7) & 1) << 0xe | auVar9._14_2_ & 0x8000)) {
        local_2a8 = 0x9bd25101c624f150;
      }
      local_2b0 = 0x3271901e577bac0d;
    }
    else {
      if (uVar2 != 0x682a3c242e2a3894) goto LAB_1801b8e9a;
      ppppsVar4 = (short ****)local_280;
      if (local_2b3 != '\0') {
        ppppsVar4 = (short ****)(local_298 + 2);
      }
      auVar13._0_2_ = -(ushort)(*(short *)ppppsVar4 == 0x69);
      auVar13._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 2) == 0x6e);
      auVar13._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 4) == 100);
      auVar13._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 6) == 0x6f);
      auVar13._8_2_ = -(ushort)(*(short *)(ppppsVar4 + 1) == 0x77);
      auVar13._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 10) == 0x43);
      auVar13._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0xc) == 0x6c);
      auVar13._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar4 + 0xe) == 0x61);
      local_2a8 = 0xfa6803db43008efe;
      if (local_2b2 ==
          (ushort)~((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar13._14_2_ >> 7) & 1) << 0xe | auVar13._14_2_ & 0x8000)) {
        local_2a8 = 0xa2eb95a82aa2e607;
      }
      local_2b0 = 0xd0a981440526afe;
    }
  }
LAB_1801b8e90:
  local_2b4 = 0;
  goto LAB_1801b8e9a;
}



DWORD FUN_1801b9df0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [40];
  DWORD local_70;
  DWORD local_6c;
  ulonglong local_68;
  ulonglong local_60;
  HWND local_58;
  DWORD local_4c;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_98;
  local_60 = 0xad03ef83a04c7b2d;
  local_68 = 0x42ee0633e1f1d06c;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_60 ^ 0x290b04fd1e283aaf;
        uVar1 = local_60 ^ local_68;
        local_68 = local_68 ^ 0x290b04fd1e283aaf;
        local_60 = uVar2;
        if (uVar1 != 0xefede9b041bdab41) break;
        local_70 = 0;
        local_58 = (HWND)FUN_1801b7720();
        local_60 = 0x73c672b1b3544c7f;
        if (local_58 == (HWND)0x0) {
          local_60 = 0x463d2d1f48145ac6;
        }
        local_68 = 0x734f238a38daf915;
        local_6c = local_70;
      }
      if (uVar1 != 0x89513b8b8eb56a) break;
      local_4c = local_70;
      local_6c = GetWindowThreadProcessId(local_58,&local_4c);
      local_60 = 0x8b06f2faf396e0aa;
      local_68 = 0xbe74fc6f83584379;
    }
  } while (uVar1 != 0x35720e9570cea3d3);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_98)) {
    return local_6c;
  }
}



undefined1 FUN_1801b9f70(void)

{
  DWORD DVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [35];
  undefined1 local_85;
  DWORD local_84;
  ulonglong local_80;
  ulonglong local_78;
  DWORD local_6c;
  DWORD local_68;
  DWORD local_64;
  DWORD local_60;
  DWORD local_5c;
  HWND local_58;
  DWORD local_4c;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_a8;
  local_78 = 0xca424fbea0756aa;
  local_80 = 0x9e66fbf23a251d8e;
LAB_1801ba030:
  do {
    while( true ) {
      DVar1 = local_60;
      uVar3 = local_78 ^ 0xcf9fb7866aeae575;
      uVar2 = local_78 ^ local_80;
      local_80 = local_80 ^ 0xcf9fb7866aeae575;
      local_78 = uVar3;
      if (0x32fcf3fbe133eb < (longlong)uVar2) break;
      if ((longlong)uVar2 < -0x63017fcae8059c60) {
        if (uVar2 == 0x8097aa43cbcb6d50) {
          local_78 = 0x882da807b9bc5f04;
          if (local_64 == local_84) {
            local_78 = 0x3d87791444027269;
          }
          local_80 = 0x3db585e7bfe34185;
        }
        else if (uVar2 == 0x92c2df09d0224b24) {
          local_84 = 0;
          local_58 = (HWND)FUN_1801b7720();
          local_78 = 0xb9ac040dc381c6c6;
          if (local_58 == (HWND)0x0) {
            local_78 = 0x741629765b06d9e5;
          }
          local_80 = 0x5f90bd1a4f0c13a1;
          local_60 = local_84;
        }
      }
      else if (uVar2 == 0xb5982de0065f1e81) {
        AttachThreadInput(local_5c,local_64,local_84);
        DAT_1802a7940 = local_84;
        DAT_1802a7944 = local_84;
        local_78 = 0x2c2b605af9091bf1;
        local_80 = 0x2c199ca902e8281d;
      }
      else if (uVar2 == 0xe63cb9178c8dd567) {
        local_4c = local_84;
        local_60 = GetWindowThreadProcessId(local_58,&local_4c);
        local_78 = 0xd6d2d802b8bc775b;
        local_80 = 0xfd544c6eacb6bd1f;
      }
      else if (uVar2 == 0x9cfe803517fa63a0) {
        if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_a8)) {
          return local_85;
        }
      }
    }
    if ((longlong)uVar2 < 0x3234d5e0c529ccda) {
      if (uVar2 == 0x32fcf3fbe133ec) {
        DVar1 = AttachThreadInput(local_6c,local_68,1);
        local_78 = 0x4ada7ce6ae79869d;
        if (DVar1 == local_84) {
          local_78 = 0xbef1015892dbcef6;
        }
        local_80 = 0x220f816d8521ad56;
      }
      else {
        if (uVar2 != 0x2b86946c140aca44) goto LAB_1801ba030;
        local_68 = local_60;
        local_6c = GetCurrentThreadId();
        local_78 = 0x5f70b5ac9432fbc9;
        if (DVar1 == local_6c) {
          local_78 = 0xf1bae07946e154b3;
        }
        if (DVar1 == local_84) {
          local_78 = 0xf1bae07946e154b3;
        }
        local_80 = 0x6d44604c511b3713;
      }
      local_85 = 0;
      goto LAB_1801ba030;
    }
    if (uVar2 == 0x3234d5e0c529ccda) {
      local_64 = DAT_1802a7940;
      local_5c = DAT_1802a7944;
      local_78 = 0x97496fea058954d6;
      if (DAT_1802a7944 == local_6c && DAT_1802a7940 == local_68) {
        local_78 = 0x8b20459cd9b85a26;
      }
      local_80 = 0x17dec5a9ce423986;
    }
    else {
      if (uVar2 != 0x68d5fd8b2b582bcb) goto LAB_1801ba030;
      DAT_1802a7944 = local_6c;
      DAT_1802a7940 = local_68;
      local_78 = 0x690bfc76a923f147;
      local_80 = 0xf5f57c43bed992e7;
    }
    local_85 = 1;
  } while( true );
}



void FUN_1801ba380(void)

{
  ulonglong uVar1;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;

  local_50 = 0x624418bcd63e0c3a;
  local_58 = 0xb2f78008df33abfd;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_50 ^ local_58;
        local_58 = local_58 ^ 0x9105150a0700b97a;
        if (uVar1 != 0xd0b398b4090da7c7) break;
        local_5c = 0;
        local_44 = DAT_1802a7940;
        local_50 = 0x83e97637285cebfc;
        if (DAT_1802a7940 == 0) {
          local_50 = 0xada15bb757e6739;
        }
        local_58 = 0x77bdc0b54ab09365;
      }
      if (uVar1 != 0xf454b68262ec7899) break;
      AttachThreadInput(DAT_1802a7944,local_44,local_5c);
      DAT_1802a7940 = local_5c;
      DAT_1802a7944 = local_5c;
      local_50 = 0xcc5a6bf4f4ca66f0;
      local_58 = 0xb13dbefacb0492ac;
    }
    local_50 = local_50 ^ 0x9105150a0700b97a;
  } while (uVar1 != 0x7d67d50e3fcef45c);
  return;
}



undefined8 * FUN_1801ba4c0(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  LPCWSTR **pppWVar3;
  ulonglong uVar4;
  LPCWSTR ***lpWideCharStr;
  ulonglong local_218;
  ulonglong local_210;
  DWORD local_208;
  int local_204;
  ulonglong local_200;
  byte local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  LPCWSTR **local_1d0;
  ulonglong local_1c8;
  LPCWSTR **local_1c0;
  ulonglong local_1b8;
  LPCWSTR **local_1b0;
  LPCWSTR **local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  ulonglong local_190;
  HWND local_188;
  ulonglong local_180;
  ulonglong local_178;
  LPCWSTR **local_170;
  longlong local_168;
  LPCWSTR **local_160;
  WCHAR local_158 [140];

  local_210 = 0x9b58a0af860f50b4;
  local_218 = 0x38764272d349ffec;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_210 ^ 0xd64b10228b014500;
            uVar2 = local_210 ^ local_218;
            local_218 = local_218 ^ 0xd64b10228b014500;
            local_210 = uVar4;
            if (-0x1c6566121354b58a < (longlong)uVar2) break;
            if ((longlong)uVar2 < -0x32c788e4b503101c) {
              if (uVar2 == 0xa32ee2dd5546af58) {
                local_1e0 = 0x29;
                local_200 = 7;
                local_1f8 = 1;
                local_204 = 0x7f;
                local_1e8 = 2;
                local_208 = 0;
                param_1[0xf] = 0;
                param_1[0x10] = 0;
                param_1[0xd] = 0;
                param_1[0xe] = 0;
                param_1[0xb] = 0;
                param_1[0xc] = 0;
                param_1[9] = 0;
                param_1[10] = 0;
                param_1[7] = 0;
                param_1[8] = 0;
                param_1[5] = 0;
                param_1[6] = 0;
                param_1[3] = 0;
                param_1[4] = 0;
                param_1[1] = 0;
                param_1[2] = 0;
                *(undefined4 *)(param_1 + 0x11) = 0;
                local_188 = GetForegroundWindow();
                *param_1 = local_188;
                local_210 = 0xd2a74021989cdef2;
                if (local_188 == (HWND)0x0) {
                  local_210 = 0xe6df1815ab33e929;
                }
                local_218 = 0x1f9f373ad2603116;
              }
              else if (uVar2 == 0xa37375547225c7c8) {
                local_210 = 0x219edd9ad77bc538;
                local_218 = 0xd8def2b5ae281d07;
              }
              else if (uVar2 == 0xca4f6ceb667cb2c2) {
                local_1b8 = local_168 + local_1e0;
                local_1b0 = local_160;
                local_210 = 0x1487870408ad9f4f;
                local_218 = 0xf71d1ee9e406d538;
              }
            }
            else if (uVar2 == 0xcd38771b4afcefe4) {
              GetWindowThreadProcessId(local_188,(LPDWORD)(param_1 + 1));
              local_158[0x78] = L'\0';
              local_158[0x79] = L'\0';
              local_158[0x7a] = L'\0';
              local_158[0x7b] = L'\0';
              local_158[0x7c] = L'\0';
              local_158[0x7d] = L'\0';
              local_158[0x7e] = L'\0';
              local_158[0x7f] = L'\0';
              local_158[0x70] = L'\0';
              local_158[0x71] = L'\0';
              local_158[0x72] = L'\0';
              local_158[0x73] = L'\0';
              local_158[0x74] = L'\0';
              local_158[0x75] = L'\0';
              local_158[0x76] = L'\0';
              local_158[0x77] = L'\0';
              local_158[0x68] = L'\0';
              local_158[0x69] = L'\0';
              local_158[0x6a] = L'\0';
              local_158[0x6b] = L'\0';
              local_158[0x6c] = L'\0';
              local_158[0x6d] = L'\0';
              local_158[0x6e] = L'\0';
              local_158[0x6f] = L'\0';
              local_158[0x60] = L'\0';
              local_158[0x61] = L'\0';
              local_158[0x62] = L'\0';
              local_158[99] = L'\0';
              local_158[100] = L'\0';
              local_158[0x65] = L'\0';
              local_158[0x66] = L'\0';
              local_158[0x67] = L'\0';
              local_158[0x58] = L'\0';
              local_158[0x59] = L'\0';
              local_158[0x5a] = L'\0';
              local_158[0x5b] = L'\0';
              local_158[0x5c] = L'\0';
              local_158[0x5d] = L'\0';
              local_158[0x5e] = L'\0';
              local_158[0x5f] = L'\0';
              local_158[0x50] = L'\0';
              local_158[0x51] = L'\0';
              local_158[0x52] = L'\0';
              local_158[0x53] = L'\0';
              local_158[0x54] = L'\0';
              local_158[0x55] = L'\0';
              local_158[0x56] = L'\0';
              local_158[0x57] = L'\0';
              local_158[0x48] = L'\0';
              local_158[0x49] = L'\0';
              local_158[0x4a] = L'\0';
              local_158[0x4b] = L'\0';
              local_158[0x4c] = L'\0';
              local_158[0x4d] = L'\0';
              local_158[0x4e] = L'\0';
              local_158[0x4f] = L'\0';
              local_158[0x40] = L'\0';
              local_158[0x41] = L'\0';
              local_158[0x42] = L'\0';
              local_158[0x43] = L'\0';
              local_158[0x44] = L'\0';
              local_158[0x45] = L'\0';
              local_158[0x46] = L'\0';
              local_158[0x47] = L'\0';
              local_158[0x38] = L'\0';
              local_158[0x39] = L'\0';
              local_158[0x3a] = L'\0';
              local_158[0x3b] = L'\0';
              local_158[0x3c] = L'\0';
              local_158[0x3d] = L'\0';
              local_158[0x3e] = L'\0';
              local_158[0x3f] = L'\0';
              local_158[0x30] = L'\0';
              local_158[0x31] = L'\0';
              local_158[0x32] = L'\0';
              local_158[0x33] = L'\0';
              local_158[0x34] = L'\0';
              local_158[0x35] = L'\0';
              local_158[0x36] = L'\0';
              local_158[0x37] = L'\0';
              local_158[0x28] = L'\0';
              local_158[0x29] = L'\0';
              local_158[0x2a] = L'\0';
              local_158[0x2b] = L'\0';
              local_158[0x2c] = L'\0';
              local_158[0x2d] = L'\0';
              local_158[0x2e] = L'\0';
              local_158[0x2f] = L'\0';
              local_158[0x20] = L'\0';
              local_158[0x21] = L'\0';
              local_158[0x22] = L'\0';
              local_158[0x23] = L'\0';
              local_158[0x24] = L'\0';
              local_158[0x25] = L'\0';
              local_158[0x26] = L'\0';
              local_158[0x27] = L'\0';
              local_158[0x18] = L'\0';
              local_158[0x19] = L'\0';
              local_158[0x1a] = L'\0';
              local_158[0x1b] = L'\0';
              local_158[0x1c] = L'\0';
              local_158[0x1d] = L'\0';
              local_158[0x1e] = L'\0';
              local_158[0x1f] = L'\0';
              local_158[0x10] = L'\0';
              local_158[0x11] = L'\0';
              local_158[0x12] = L'\0';
              local_158[0x13] = L'\0';
              local_158[0x14] = L'\0';
              local_158[0x15] = L'\0';
              local_158[0x16] = L'\0';
              local_158[0x17] = L'\0';
              local_158[8] = L'\0';
              local_158[9] = L'\0';
              local_158[10] = L'\0';
              local_158[0xb] = L'\0';
              local_158[0xc] = L'\0';
              local_158[0xd] = L'\0';
              local_158[0xe] = L'\0';
              local_158[0xf] = L'\0';
              local_158[0] = L'\0';
              local_158[1] = L'\0';
              local_158[2] = L'\0';
              local_158[3] = L'\0';
              local_158[4] = L'\0';
              local_158[5] = L'\0';
              local_158[6] = L'\0';
              local_158[7] = L'\0';
              uVar1 = GetClassNameW((HWND)*param_1,local_158,local_204);
              local_1f0 = 0;
              if (0 < (int)uVar1) {
                local_1f0 = (ulonglong)uVar1;
              }
              local_1a8 = (LPCWSTR **)0x0;
              uStack_1a0 = 0;
              local_210 = 0x155b4c90ba3ee4b1;
              if ((int)uVar1 < 8) {
                local_210 = 0xa7c8eba7a1441eb1;
              }
              local_218 = 0xf47401f058081d37;
              local_1c8 = local_200;
              local_1c0 = (LPCWSTR **)&local_1a8;
            }
            else if (uVar2 == 0xdd51760deeef7f92) {
              local_1d0 = (LPCWSTR **)FUN_1801d61c8(local_1d8 + local_1e8);
              local_210 = 0xb5c6bc1a093aba16;
              local_218 = 0x8d4b9350a11f1862;
            }
            else if (uVar2 == 0xe12f4d60e236f986) {
              uVar2 = local_1f0 | local_200;
              local_178 = 10;
              if (10 < uVar2) {
                local_178 = uVar2;
              }
              local_1d8 = local_178 << (local_1f8 & 0x3f);
              local_210 = 0x581b4c67b17cf78f;
              if (0x7fe < uVar2) {
                local_210 = 0xfb848921f4e5cff4;
              }
              local_218 = 0x854a3a6a5f93881d;
            }
          }
          if ((longlong)uVar2 < 0x4a6528297a7475b0) break;
          if ((longlong)uVar2 < 0x7256dd972a560a09) {
            if (uVar2 == 0x4a6528297a7475b0) {
              local_170 = local_1a8;
              local_168 = local_180 << (local_1f8 & 0x3f);
              local_1b8 = local_168 + local_1e8;
              local_210 = 0xa2a430d8b611cd8a;
              if (0xfff < local_1b8) {
                local_210 = 0x40a12605962ecb30;
              }
              local_218 = 0x413ea9355aba87fd;
              local_1b0 = local_1a8;
            }
            else if (uVar2 == 0x53bcea57f94c0386) {
              local_198 = local_1f0;
              local_190 = local_1c8;
              FUN_1802079d0(local_1c0,local_158,local_1f0 << (local_1f8 & 0x3f));
              *(undefined2 *)((longlong)local_1c0 + local_1f0 * 2) = 0;
              lpWideCharStr = &local_1a8;
              if (local_200 < local_190) {
                lpWideCharStr = (LPCWSTR ***)local_1a8;
              }
              WideCharToMultiByte(0xfde9,local_208,(LPCWSTR)lpWideCharStr,(int)local_198,
                                  (LPSTR)((longlong)param_1 + 0xc),local_204,(LPCSTR)0x0,(LPBOOL)0x0);
              local_180 = local_190;
              local_210 = 0x7e8cf4b90c906188;
              if (local_200 < local_190) {
                local_210 = 0x979aa9c404c1d3f0;
              }
              local_218 = 0xddff81ed7eb5a640;
            }
          }
          else if (uVar2 == 0x7eceb34bab7647e9) {
            pppWVar3 = (LPCWSTR **)FUN_1801d61c8(local_1d8 + local_1e0);
            local_1d0 = (LPCWSTR **)((longlong)pppWVar3 + 0x27U & 0xffffffffffffffe0);
            local_1d0[-1] = (LPCWSTR *)pppWVar3;
            local_210 = 0xdcd3e91df143ae82;
            local_218 = 0xe45ec65759660cf6;
          }
          else if (uVar2 == 0x7256dd972a560a09) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_208,0);
          }
        }
        if ((longlong)uVar2 < 0x19f8f30cc944ccd) break;
        if (uVar2 == 0x19f8f30cc944ccd) {
          local_160 = (LPCWSTR **)local_170[-1];
          local_210 = 0x827ef177435c895f;
          if ((ulonglong)((longlong)local_170 + (-8 - (longlong)local_160)) < 0x20) {
            local_210 = 0x3a67400b0f763194;
          }
          local_218 = 0xf0282ce0690a8356;
        }
        else if (uVar2 == 0x388d2f4aa825a274) {
          local_1c0 = local_1d0;
          local_210 = 0x1d98e636fb10f2e5;
          local_218 = 0x4e240c61025cf163;
          local_1c8 = local_178;
          local_1a8 = local_1c0;
        }
      }
      if (uVar2 != 0xe39a99edecab4a77) break;
      thunk_FUN_1801f42e0(local_1b0,local_1b8);
      local_210 = 0xff782cbdd4b568c6;
      local_218 = 0x5c0b59e9a690af0e;
    }
  } while (uVar2 != 0xf9402f2f7953d83f);
  return param_1;
}



undefined8 FUN_1801bad30(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  HWND local_80;
  tagRECT local_78;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_c8;
  local_a0 = 0x189dd6208336afce;
  local_a8 = 0xb779a56dd7b0a1e7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_a0 ^ 0xf0bf081292b90c60;
          uVar2 = local_a0 ^ local_a8;
          local_a8 = local_a8 ^ 0xf0bf081292b90c60;
          local_a0 = uVar3;
          if (-0x4c747013d7b66b5d < (longlong)uVar2) break;
          if (uVar2 == 0x800d2e22aa4c37e5) {
            local_a0 = 0x199b5f7683716bc5;
            local_a8 = 0xc822548ed5b6e4d9;
            local_90 = local_88;
          }
          else if (uVar2 == 0xafe4734d54860e29) {
            local_98 = 0;
            local_80 = (HWND)FUN_1801b7720();
            local_a0 = 0xb5238a9a72cb5eb4;
            if (local_80 == (HWND)0x0) {
              local_a0 = 0xb3ac23d4c4e1e550;
            }
            local_90 = local_98;
            local_a8 = 0x6215282c92266a4c;
          }
        }
        if (uVar2 != 0xb38b8fec284994a4) break;
        local_88 = CONCAT44(local_78.bottom - local_78.top,local_78.right - local_78.left);
        local_a0 = 0x3cc40319f5342a14;
        local_a8 = 0xbcc92d3b5f781df1;
      }
      if (uVar2 != 0xd736a2b6e0ed34f8) break;
      local_78.left = 0;
      local_78.top = 0;
      local_78.right = 0;
      local_78.bottom = 0;
      BVar1 = GetClientRect(local_80,&local_78);
      local_a0 = 0xec7d9160f2d675de;
      if (BVar1 == 0) {
        local_a0 = 0xdffb30ae70d3d69f;
      }
      local_88 = local_98;
      local_a8 = 0x5ff61e8cda9fe17a;
    }
  } while (uVar2 != 0xd1b90bf856c78f1c);
  if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_c8)) {
    return local_90;
  }
}



undefined1 FUN_1801baf80(LPPOINT param_1)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_50 = 0x97a304923dcef37;
  local_58 = 0xcf827a086d3e0324;
  do {
    while( true ) {
      while( true ) {
        uVar2 = local_50 ^ local_58;
        local_58 = local_58 ^ 0xbf8e7278d3992088;
        if (uVar2 != 0xc6f84a414ee2ec13) break;
        local_48 = (HWND)FUN_1801b7720();
        local_50 = 0x843907bcedace729;
        if (local_48 == (HWND)0x0) {
          local_50 = 0xa4bcc817aab80cae;
        }
        local_58 = 0xe22630759abe08fd;
        local_59 = 0;
      }
      if (uVar2 != 0x661f37c97712efd4) break;
      BVar1 = ScreenToClient(local_48,param_1);
      local_59 = BVar1 != 0;
      local_50 = 0xe4b1e703dc53cd52;
      local_58 = 0xa22b1f61ec55c901;
    }
    local_50 = local_50 ^ 0xbf8e7278d3992088;
  } while (uVar2 != 0x469af86230060453);
  return local_59;
}



undefined1 FUN_1801bb0c0(void)

{
  ulonglong uVar1;
  INT_PTR IVar2;
  ulonglong uVar3;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined1 local_11a;
  undefined1 local_119;
  ulonglong local_118;
  ulonglong local_110;
  HANDLE local_108;
  FARPROC local_100;
  FARPROC local_f8;
  HMODULE local_f0;
  HMODULE local_e8;
  FARPROC local_e0;
  undefined8 local_d8;
  undefined4 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_148;
  local_110 = 0x2a2107d010aa7727;
  local_118 = 0x4cee5ec089c94bbe;
LAB_1801bb270:
  while( true ) {
    while( true ) {
      uVar3 = local_110 ^ 0xef93b4de95796ae5;
      uVar1 = local_110 ^ local_118;
      local_118 = local_118 ^ 0xef93b4de95796ae5;
      local_110 = uVar3;
      if (-0x1bfa7cd742ea7fb4 < (longlong)uVar1) break;
      if ((longlong)uVar1 < -0x3f0d6af4f0e34605) {
        if (uVar1 == 0x917ca1b7e8c5b3e8) {
          local_128 = &DAT_1802a79d4;
          FUN_1801bc950(&DAT_1802a7980,&DAT_18029d75e,9,0x29);
          local_68 = DAT_1802a79d0;
          local_78 = _DAT_1802a79c0;
          uStack_70 = uRam00000001802a79c8;
          local_88 = _DAT_1802a79b0;
          uStack_80 = uRam00000001802a79b8;
          local_98 = _DAT_1802a79a0;
          uStack_90 = uRam00000001802a79a8;
          local_a8 = _DAT_1802a7990;
          uStack_a0 = uRam00000001802a7998;
          local_b8 = _DAT_1802a7980;
          uStack_b4 = uRam00000001802a7984;
          uStack_b0 = uRam00000001802a7988;
          uStack_ac = uRam00000001802a798c;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0x100000000;
          puStack_d0 = &local_b8;
          local_108 = (HANDLE)(*local_f8)(&local_d8);
          local_110 = 0xa11f362b6d5e694c;
          if ((longlong)local_108 - 1U < 0xfffffffffffffffe) {
            local_110 = 0xbc7c2c369027c2f4;
          }
          local_118 = 0x451ab503d04be901;
        }
        else if (uVar1 == 0x9a4c2b7f7fb1f62e) {
          DAT_1802a7948 = local_108;
          local_110 = 0xb7ccdfc29eb59df8;
          local_118 = 0x55f60ab1380dfb5f;
          local_119 = 1;
        }
        else if (uVar1 == 0xaf769beef3026aed) {
          local_128 = &DAT_1802a7978;
          FUN_1801bc69c(&DAT_1802a7968,&DAT_18029d71d,0x18,0x10);
          local_e0 = GetProcAddress(local_e8,&DAT_1802a7968);
          local_110 = 0x35504e6e6a4900d2;
          if (local_e0 != (FARPROC)0x0) {
            local_110 = 0x64de7ad28d900ac1;
          }
          if (local_f8 == (FARPROC)0x0) {
            local_110 = 0x35504e6e6a4900d2;
          }
          local_118 = 0xf5a2db656555b929;
          goto LAB_1801bb695;
        }
      }
      else if (uVar1 == 0xc9c814bf98d000a4) {
        local_128 = &DAT_1802a7964;
        FUN_1801bc69c(&DAT_1802a7950,&DAT_18029d6d9,0x13,0x13);
        local_100 = GetProcAddress(local_f0,&DAT_1802a7950);
        local_110 = 0x3cb247ef5922540f;
        local_118 = 0x4a7346202cec0dfd;
      }
      else if (uVar1 == 0xe23ad573a6b866a7) {
        local_11a = local_119;
        local_110 = 0x2712902ac934d57f;
        local_118 = 0xe7e00521c6286c84;
      }
      else if (uVar1 == 0xc0f2950b0f1cb9fb) {
        if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_148)) {
          return local_11a;
        }
      }
    }
    if ((longlong)uVar1 < 0x4ff9cea4ca2b3379) break;
    if (uVar1 == 0x4ff9cea4ca2b3379) {
      local_128 = &DAT_1802a7a0c;
      FUN_1801bc950(&DAT_1802a79f0,&DAT_18029d9ae,10,0xd);
      local_f0 = GetModuleHandleW((LPCWSTR)&DAT_1802a79f0);
      local_110 = 0xcac8f883d7b8c768;
      if (local_f0 == (HMODULE)0x0) {
        local_110 = 0x75c1edf33aa69e3e;
      }
      local_118 = 0x300ec3c4f68c7cc;
      local_100 = (FARPROC)0x0;
    }
    else if (uVar1 == 0x76c101cf75ce59f2) {
      local_f8 = local_100;
      local_128 = &DAT_1802a7a0c;
      FUN_1801bc950(&DAT_1802a79f0,&DAT_18029d9ae,10,0xd);
      local_e8 = GetModuleHandleW((LPCWSTR)&DAT_1802a79f0);
      local_110 = 0x53498f47e9d7dd9a;
      if (local_e8 == (HMODULE)0x0) {
        local_110 = 0x3ccd81a215c90e8c;
      }
      local_118 = 0xfc3f14a91ad5b777;
LAB_1801bb695:
      local_11a = 0;
    }
    else if (uVar1 == 0x66cf591099633c99) {
      local_110 = 0x709a281331e4049c;
      if (DAT_1802a7948 == (HANDLE)0x0) {
        local_110 = 0xff9173bcf4d38e1e;
      }
      local_118 = 0xb068bd183ef8bd67;
      local_11a = 1;
    }
  }
  if (uVar1 == 0xe4058328bd15804d) {
    DAT_1802a7948 = (HANDLE)0x0;
    local_110 = 0xcd2f1d4b14291f87;
    local_118 = 0x2f15c838b2917920;
  }
  else {
    if (uVar1 == 0xf9669935406c2bf5) {
      IVar2 = (*local_e0)(local_108,3);
      local_110 = 0x4620bca054eac235;
      if ((int)IVar2 == 0) {
        local_110 = 0xfca95f7d6f0ac740;
      }
      local_118 = 0xdc6c97df2b5b341b;
      goto LAB_1801bb270;
    }
    if (uVar1 != 0x20c5c8a24451f35b) goto LAB_1801bb270;
    CloseHandle(local_108);
    local_110 = 0xef58f84012de25cb;
    local_118 = 0xd622d33b466436c;
  }
  local_119 = 0;
  goto LAB_1801bb270;
}



void FUN_1801bb700(void)

{
  ulonglong uVar1;
  ulonglong local_60;
  ulonglong local_58;
  HMODULE local_50;
  FARPROC local_48;

  local_58 = 0x6401d6475afc21f5;
  local_60 = 0xfe68aa69e2664a59;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_58 ^ local_60;
          local_60 = local_60 ^ 0xbffd2cf1de689512;
          if (0x3ac39f4215d3d2f < (longlong)uVar1) break;
          if (uVar1 == 0x9a697c2eb89a6bac) {
            local_58 = 0x4e90923ed6bc1069;
            if (DAT_1802a7948 == (HANDLE)0x0) {
              local_58 = 0x4d5a498fa4d36a6e;
            }
            local_60 = 0x5e100b73dfde5e51;
          }
          else if (uVar1 == 0xa8ccfb4f62c905bc) {
            CloseHandle(DAT_1802a7948);
            DAT_1802a7948 = (HANDLE)0x0;
            local_58 = 0xc752ff64a33f8749;
            local_60 = 0xd418bd98d832b376;
          }
          else {
            local_58 = local_58 ^ 0xbffd2cf1de689512;
            if (uVar1 == 0xc60c1086630c88f3) {
              (*local_48)(DAT_1802a7948,3);
              local_58 = 0xc6af24941b414ca7;
              local_60 = 0x6e63dfdb7988491b;
            }
          }
        }
        if (uVar1 != 0x3ac39f4215d3d30) break;
        FUN_1801bc69c(&DAT_1802a79d8,&DAT_18029d7e1,0x1c,0x12,&DAT_1802a79ec);
        local_48 = GetProcAddress(local_50,&DAT_1802a79d8);
        local_58 = 0x602e8d7623a8e5e0;
        if (local_48 == (FARPROC)0x0) {
          local_58 = 0xeee66bf226d68af;
        }
        local_60 = 0xa6229df040a46d13;
      }
      if (uVar1 != 0x1080994d09624e38) break;
      FUN_1801bc950(&DAT_1802a79f0,&DAT_18029d9ae,10,0xd,&DAT_1802a7a0c);
      local_50 = GetModuleHandleW((LPCWSTR)&DAT_1802a79f0);
      local_58 = 0xa49ea63bb1f579af;
      if (local_50 == (HMODULE)0x0) {
        local_58 = 0xffe6480f2614123;
      }
      local_60 = 0xa7329fcf90a8449f;
    }
    local_58 = local_58 ^ 0xbffd2cf1de689512;
  } while (uVar1 != 0x134a42fc7b0d343f);
  return;
}



uint FUN_1801bb980(HWND param_1,undefined8 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  DWORD DVar3;
  ulonglong uVar4;
  short ***pppsVar5;
  short ****ppppsVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char local_272;
  char local_271;
  ulonglong local_270;
  ulonglong local_268;
  ushort local_25c;
  char local_259;
  short ***local_258;
  uint local_250;
  uint local_24c;
  DWORD local_248;
  uint local_244;
  undefined8 local_240;
  ulonglong local_238;
  short **local_230;
  short ***local_228;
  undefined8 uStack_220;
  short **local_218;
  ulonglong local_210;
  longlong lStack_200;
  longlong local_1f8;
  longlong local_1f0;
  short ***local_1e8;
  ulonglong local_1e0;
  short ***local_1d8;
  ulonglong local_1d0;
  short ***local_1c8;
  short ***local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  short ***local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  WCHAR local_188 [164];

  local_1b8 = param_2;
  local_268 = 0x41eb308ff7213eb5;
  local_270 = 0x449c02f1eddb6673;
LAB_1801bba9a:
  pppsVar5 = local_1c8;
  uVar7 = local_268 ^ 0x574d91a002bc3dd4;
  uVar4 = local_268 ^ local_270;
  local_270 = local_270 ^ 0x574d91a002bc3dd4;
  local_268 = uVar7;
  if ((longlong)uVar4 < 0x577327e1afa58c6) {
    if ((longlong)uVar4 < -0x326464749388071b) {
      if ((longlong)uVar4 < -0x35f8a7397f9e08f9) {
        if (uVar4 == 0x8e60db670ad8f997) {
          local_1e0 = local_198 + local_1f8;
          local_268 = 0x8684161fdf3bfa0f;
          local_270 = 0xfa42c5b8c58778e1;
          local_1d8 = local_1a8;
          goto LAB_1801bc28f;
        }
        if (uVar4 != 0x9f3dac6ea9fed446) {
          if (uVar4 == 0x8ab8044612b80696) {
            return local_24c;
          }
          goto LAB_1801bba9a;
        }
        ppppsVar6 = &local_228;
        if (local_272 != '\0') {
          ppppsVar6 = (short ****)local_258;
        }
        auVar9._0_2_ = -(ushort)(*(short *)(ppppsVar6 + 4) == 0x43);
        auVar9._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0x22) == 0x6f);
        auVar9._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0x24) == 0x72);
        auVar9._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0x26) == 0x65);
        auVar9._8_2_ = -(ushort)(*(short *)(ppppsVar6 + 5) == 0x57);
        auVar9._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0x2a) == 0x69);
        auVar9._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0x2c) == 0x6e);
        auVar9._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0x2e) == 100);
        local_268 = 0xe73f4ab8c11b3a6c;
        if (local_25c ==
            (ushort)~((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                      (ushort)((byte)(auVar9._14_2_ >> 7) & 1) << 0xe | auVar9._14_2_ & 0x8000)) {
          local_268 = 0x73a55577791655bc;
        }
        local_270 = 0xb9a20db1f977a2bb;
      }
      else {
        if (uVar4 != 0xca0758c68061f707) {
          if (uVar4 == 0xca9c7be93a398293) {
            local_1c0 = (short ***)FUN_1801d61c8(local_1f0 + lStack_200);
            local_268 = 0xbed0f129fe58db6f;
            local_270 = 0x9106296b812139cc;
          }
          goto LAB_1801bba9a;
        }
        ppppsVar6 = &local_228;
        if (local_272 != '\0') {
          ppppsVar6 = (short ****)local_258;
        }
        local_268 = 0xd23a94587e7599a7;
        if (*(short *)(ppppsVar6 + 6) == 0x6f) {
          local_268 = 0x519f6f2c0200d2b3;
        }
        local_270 = 0x8ca7d35146190170;
      }
    }
    else {
      if (-0x22c74382bbe62c3e < (longlong)uVar4) {
        if (uVar4 == 0xdd38bc7d4419d3c3) {
          ppppsVar6 = &local_228;
          if (local_272 != '\0') {
            ppppsVar6 = (short ****)local_258;
          }
          local_271 = *(short *)((longlong)ppppsVar6 + 0x32) == 0x77;
          local_268 = 0x7ca30f6a1abcbfa;
          local_270 = 0x595777ff99c7532d;
        }
        else if (uVar4 == 0xff93bc0eb2cdaf85) {
          local_268 = 0x70672d7387ff7a29;
          if (local_259 != '\0') {
            local_268 = 0x3744b2bef930845a;
          }
          local_270 = 0xfadf293595477cbf;
          local_24c = local_244;
        }
        else if (uVar4 == 0xd8c12700bb651e) {
          local_188[0x78] = L'\0';
          local_188[0x79] = L'\0';
          local_188[0x7a] = L'\0';
          local_188[0x7b] = L'\0';
          local_188[0x7c] = L'\0';
          local_188[0x7d] = L'\0';
          local_188[0x7e] = L'\0';
          local_188[0x7f] = L'\0';
          local_188[0x70] = L'\0';
          local_188[0x71] = L'\0';
          local_188[0x72] = L'\0';
          local_188[0x73] = L'\0';
          local_188[0x74] = L'\0';
          local_188[0x75] = L'\0';
          local_188[0x76] = L'\0';
          local_188[0x77] = L'\0';
          local_188[0x68] = L'\0';
          local_188[0x69] = L'\0';
          local_188[0x6a] = L'\0';
          local_188[0x6b] = L'\0';
          local_188[0x6c] = L'\0';
          local_188[0x6d] = L'\0';
          local_188[0x6e] = L'\0';
          local_188[0x6f] = L'\0';
          local_188[0x60] = L'\0';
          local_188[0x61] = L'\0';
          local_188[0x62] = L'\0';
          local_188[99] = L'\0';
          local_188[100] = L'\0';
          local_188[0x65] = L'\0';
          local_188[0x66] = L'\0';
          local_188[0x67] = L'\0';
          local_188[0x58] = L'\0';
          local_188[0x59] = L'\0';
          local_188[0x5a] = L'\0';
          local_188[0x5b] = L'\0';
          local_188[0x5c] = L'\0';
          local_188[0x5d] = L'\0';
          local_188[0x5e] = L'\0';
          local_188[0x5f] = L'\0';
          local_188[0x50] = L'\0';
          local_188[0x51] = L'\0';
          local_188[0x52] = L'\0';
          local_188[0x53] = L'\0';
          local_188[0x54] = L'\0';
          local_188[0x55] = L'\0';
          local_188[0x56] = L'\0';
          local_188[0x57] = L'\0';
          local_188[0x48] = L'\0';
          local_188[0x49] = L'\0';
          local_188[0x4a] = L'\0';
          local_188[0x4b] = L'\0';
          local_188[0x4c] = L'\0';
          local_188[0x4d] = L'\0';
          local_188[0x4e] = L'\0';
          local_188[0x4f] = L'\0';
          local_188[0x40] = L'\0';
          local_188[0x41] = L'\0';
          local_188[0x42] = L'\0';
          local_188[0x43] = L'\0';
          local_188[0x44] = L'\0';
          local_188[0x45] = L'\0';
          local_188[0x46] = L'\0';
          local_188[0x47] = L'\0';
          local_188[0x38] = L'\0';
          local_188[0x39] = L'\0';
          local_188[0x3a] = L'\0';
          local_188[0x3b] = L'\0';
          local_188[0x3c] = L'\0';
          local_188[0x3d] = L'\0';
          local_188[0x3e] = L'\0';
          local_188[0x3f] = L'\0';
          local_188[0x30] = L'\0';
          local_188[0x31] = L'\0';
          local_188[0x32] = L'\0';
          local_188[0x33] = L'\0';
          local_188[0x34] = L'\0';
          local_188[0x35] = L'\0';
          local_188[0x36] = L'\0';
          local_188[0x37] = L'\0';
          local_188[0x28] = L'\0';
          local_188[0x29] = L'\0';
          local_188[0x2a] = L'\0';
          local_188[0x2b] = L'\0';
          local_188[0x2c] = L'\0';
          local_188[0x2d] = L'\0';
          local_188[0x2e] = L'\0';
          local_188[0x2f] = L'\0';
          local_188[0x20] = L'\0';
          local_188[0x21] = L'\0';
          local_188[0x22] = L'\0';
          local_188[0x23] = L'\0';
          local_188[0x24] = L'\0';
          local_188[0x25] = L'\0';
          local_188[0x26] = L'\0';
          local_188[0x27] = L'\0';
          local_188[0x18] = L'\0';
          local_188[0x19] = L'\0';
          local_188[0x1a] = L'\0';
          local_188[0x1b] = L'\0';
          local_188[0x1c] = L'\0';
          local_188[0x1d] = L'\0';
          local_188[0x1e] = L'\0';
          local_188[0x1f] = L'\0';
          local_188[0x10] = L'\0';
          local_188[0x11] = L'\0';
          local_188[0x12] = L'\0';
          local_188[0x13] = L'\0';
          local_188[0x14] = L'\0';
          local_188[0x15] = L'\0';
          local_188[0x16] = L'\0';
          local_188[0x17] = L'\0';
          local_188[8] = L'\0';
          local_188[9] = L'\0';
          local_188[10] = L'\0';
          local_188[0xb] = L'\0';
          local_188[0xc] = L'\0';
          local_188[0xd] = L'\0';
          local_188[0xe] = L'\0';
          local_188[0xf] = L'\0';
          local_188[0] = L'\0';
          local_188[1] = L'\0';
          local_188[2] = L'\0';
          local_188[3] = L'\0';
          local_188[4] = L'\0';
          local_188[5] = L'\0';
          local_188[6] = L'\0';
          local_188[7] = L'\0';
          uVar2 = GetClassNameW(param_1,local_188,0x7f);
          local_230 = (short **)0x0;
          if (0 < (int)uVar2) {
            local_230 = (short **)(ulonglong)uVar2;
          }
          local_228 = (short ***)0x0;
          uStack_220 = 0;
          local_268 = 0x318441a7514e9427;
          if ((int)uVar2 < 8) {
            local_268 = 0x59d329fef26ec798;
          }
          local_270 = 0x7af3a9843c15d5b3;
          local_1d0 = local_238;
          local_1c8 = (short ***)&local_228;
        }
        goto LAB_1801bba9a;
      }
      if (uVar4 == 0xcd9b9b8b6c77f8e5) {
        *local_1b0 = param_1;
        local_268 = 0x7da81fc35a6e8ed2;
        local_270 = 0xf7101b8548d68844;
        local_24c = local_250;
        goto LAB_1801bba9a;
      }
      if (uVar4 != 0xd0cdf8f658d102ca) goto LAB_1801bba9a;
      ppppsVar6 = (short ****)local_1e8;
      if (local_272 != '\0') {
        ppppsVar6 = (short ****)(local_258 + 2);
      }
      auVar10._0_2_ = -(ushort)(*(short *)ppppsVar6 == 0x55);
      auVar10._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 2) == 0x49);
      auVar10._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 4) == 0x2e);
      auVar10._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 6) == 0x43);
      auVar10._8_2_ = -(ushort)(*(short *)(ppppsVar6 + 1) == 0x6f);
      auVar10._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 10) == 0x72);
      auVar10._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0xc) == 0x65);
      auVar10._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0xe) == 0x2e);
      local_268 = 0x84fbc0a8c726369e;
      if (local_25c ==
          (ushort)~((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar10._14_2_ >> 7) & 1) << 0xe | auVar10._14_2_ & 0x8000)) {
        local_268 = 0x455b2bcf56b47a0f;
      }
      local_270 = 0xda6687a1ff4aae49;
    }
  }
  else {
    if (0x2fd6d8427f79e2a2 < (longlong)uVar4) {
      if ((longlong)uVar4 < 0x5e9d4709386c98d7) {
        if (uVar4 == 0x2fd6d8427f79e2a3) {
          local_228 = local_1c0;
          local_268 = 0x326c5ed407593474;
          local_270 = 0x114cdeaec922265f;
          local_1d0 = local_1a0;
          local_1c8 = local_1c0;
        }
        else if (uVar4 == 0x3783fbccc9a44362) {
          local_198 = local_190 << ((byte)local_240 & 0x3f);
          local_1e0 = local_198 + lStack_200;
          local_268 = 0x855034fa6ad197ae;
          if (0xfff < local_1e0) {
            local_268 = 0xe717b739410a6eed;
          }
          local_270 = 0xf996e75d706d1540;
          local_1d8 = local_258;
LAB_1801bc28f:
        }
        else if (uVar4 == 0x4b77e8236d5b4194) {
          uVar4 = (ulonglong)local_230 | local_238;
          local_1a0 = 10;
          if (10 < uVar4) {
            local_1a0 = uVar4;
          }
          local_1f0 = local_1a0 << ((byte)local_240 & 0x3f);
          local_268 = 0xdc005df36553975;
          if (0x7fe < uVar4) {
            local_268 = 0xe65e3981d7b99f85;
          }
          local_270 = 0xc75c7e360c6cbbe6;
        }
      }
      else if (uVar4 == 0x5e9d4709386c98d7) {
        local_259 = local_271;
        local_268 = 0xffa21f3bba7222d9;
        if (local_272 != '\0') {
          local_268 = 0x37b258f9c11bce3e;
        }
        local_270 = 0x31a33508bf8d5c;
      }
      else if (uVar4 == 0x7cc6d3a71abc82ee) {
        thunk_FUN_1801f42e0(local_1d8,local_1e0);
        local_268 = 0x7c2a9014c4c2c270;
        local_270 = 0x83b92c1a760f6df5;
      }
      else if (uVar4 == 0x77e92c6bcc6ec454) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_250,0);
      }
      goto LAB_1801bba9a;
    }
    if (0x1e81506431677bac < (longlong)uVar4) {
      if (uVar4 == 0x1e81506431677bad) {
        local_1a8 = (short ***)local_258[-1];
        local_268 = 0x1a323bc89fbff727;
        if ((ulonglong)((longlong)local_258 + (-8 - (longlong)local_258[-1])) < 0x20) {
          local_268 = 0xe3bbccc45909cae4;
        }
        local_270 = 0x6ddb17a353d13373;
      }
      else if (uVar4 == 0x210247b7dbd52463) {
        pppsVar5 = (short ***)FUN_1801d61c8(local_1f0 + local_1f8);
        local_1c0 = (short ***)((longlong)pppsVar5 + 0x27U & 0xffffffffffffffe0);
        local_1c0[-1] = (short **)pppsVar5;
        local_268 = 0x822e27fa29f6a7aa;
        local_270 = 0xadf8ffb8568f4509;
      }
      else if (uVar4 == 0x2320807ace7b122b) {
        local_1e8 = &local_218;
        local_218 = local_230;
        local_210 = local_1d0;
        FUN_1802079d0(local_1c8,local_188);
        *(ushort *)((longlong)pppsVar5 + (longlong)local_230 * 2) = local_25c;
        local_258 = local_228;
        local_190 = local_210;
        local_272 = local_238 < local_210;
        local_268 = 0xa251947f46e9b998;
        if ((short ***)*local_1e8 == (short ***)0x1a) {
          local_268 = 0xe84878681b9c737f;
        }
        local_270 = 0xfcccd3767e85214f;
        goto LAB_1801bba90;
      }
      goto LAB_1801bba9a;
    }
    if (uVar4 == 0x577327e1afa58c6) {
      local_1f8 = 0x29;
      local_25c = 0;
      local_238 = 7;
      local_244 = 1;
      local_240 = 1;
      lStack_200 = 2;
      local_250 = 0;
      local_1b0 = local_1b8;
      local_248 = 0;
      GetWindowThreadProcessId(param_1,&local_248);
      DVar1 = local_248;
      DVar3 = GetCurrentProcessId();
      local_268 = 0x8b6b556281b9c5;
      if (DVar1 == DVar3) {
        local_268 = 0x8aebae347082da4d;
      }
      local_24c = local_244;
      local_270 = 0x8a336f137039bf53;
      goto LAB_1801bba9a;
    }
    if (uVar4 != 0x1484ab1e65195230) goto LAB_1801bba9a;
    ppppsVar6 = &local_228;
    if (local_272 != '\0') {
      ppppsVar6 = (short ****)local_258;
    }
    auVar8._0_2_ = -(ushort)(*(short *)ppppsVar6 == 0x57);
    auVar8._2_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 2) == 0x69);
    auVar8._4_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 4) == 0x6e);
    auVar8._6_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 6) == 100);
    auVar8._8_2_ = -(ushort)(*(short *)(ppppsVar6 + 1) == 0x6f);
    auVar8._10_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 10) == 0x77);
    auVar8._12_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0xc) == 0x73);
    auVar8._14_2_ = -(ushort)(*(short *)((longlong)ppppsVar6 + 0xe) == 0x2e);
    local_268 = 0x2b617b20fb3e4806;
    if (local_25c ==
        (ushort)~((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                  (ushort)((byte)(auVar8._14_2_ >> 7) & 1) << 0xe | auVar8._14_2_ & 0x8000)) {
      local_268 = 0xa531c4df9b83d21b;
    }
    local_270 = 0x75fc3c29c352d0d1;
  }
LAB_1801bba90:
  local_271 = '\0';
  goto LAB_1801bba9a;
}



undefined4 FUN_1801bc510(HWND param_1,undefined1 *param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  ulonglong local_58;
  DWORD local_4c;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_88;
  local_58 = 0x384456f3adb4af1c;
  local_60 = 0xb2ad3905ab196921;
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_58 ^ local_60;
        local_60 = local_60 ^ 0x5083b8acec385d34;
        if (uVar3 != 0x8ae96ff606adc63d) break;
        local_68 = 0;
        local_4c = 0;
        local_58 = local_58 ^ 0x5083b8acec385d34;
        GetWindowThreadProcessId(param_1,&local_4c);
        DVar1 = local_4c;
        DVar2 = GetCurrentProcessId();
        local_58 = 0xcc52536af26c41b7;
        if (DVar1 == DVar2) {
          local_58 = 0x88907f2043625fac;
        }
        local_60 = 0x3199fdb9500a877d;
        local_64 = 1;
      }
      if (uVar3 != 0xb90982991368d8d1) break;
      *param_2 = 1;
      local_58 = 0x6b0e6fcd00390bd6;
      local_60 = 0x96c5c11ea25fcd1c;
      local_64 = local_68;
    }
    local_58 = local_58 ^ 0x5083b8acec385d34;
  } while (uVar3 != 0xfdcbaed3a266c6ca);
  if (DAT_1802a0400 == (local_48 ^ (ulonglong)auStack_88)) {
    return local_64;
  }
}



void FUN_1801bc69c(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0x2367291abeb63361;
  local_68 = 0xf9ff71a89702a4f9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xe044178a4fb91642;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xe044178a4fb91642;
          local_60 = uVar2;
          if (-0xd4f3de804cd1b7a < (longlong)uVar1) break;
          if (uVar1 == 0x88b20b2e8f800692) {
            local_69 = local_6a;
            local_4c = local_54;
            local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
            local_6c = *(char *)(local_48 + (int)local_54);
            local_60 = 0xd107c177a72e88fc;
            if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
              local_60 = 0x8b467a9543210663;
            }
            local_68 = 0xe7b8c44005cc9624;
          }
          else if (uVar1 == 0xa405d3218443727f) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0x23d87648bdcf3763;
            if (local_54 == param_4) {
              local_60 = 0x8f49b9f0c66c49c0;
            }
            local_68 = 0xab6a7d66324f31f1;
          }
          else if (uVar1 == 0xda9858b229b49798) {
            local_60 = 0x88375c3cb92479ae;
            if (*param_5 == 1) {
              local_60 = 0xf2359505cd969bbb;
            }
            local_68 = 0x85571236a47f3c;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
        }
        if ((longlong)uVar1 < 0x36bf0537a2e21ed8) break;
        if (uVar1 == 0x36bf0537a2e21ed8) {
          local_6b = -(local_6c - local_69 ^ local_6d);
          local_60 = 0xbe191051ab86abb9;
          local_68 = 0x1a1cc3702fc5d9c6;
        }
        else if (uVar1 == 0x6cfebed546ed9047) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xf0c271c0fa633757;
          local_68 = 0x54c7a2e17e204528;
        }
      }
      if (uVar1 != 0x2423c496f4237831) break;
      *param_5 = 1;
      local_60 = 0x8504eb27e8b130a8;
      local_68 = 0x77b429301383d42f;
    }
  } while (uVar1 != 0xf2b0c217fb32e487);
  return;
}



void FUN_1801bc950(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xd2dedfec314a05d8;
  local_68 = 0x2b7405db9740bcf;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0xa9def60c13f6c353;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0xa9def60c13f6c353;
          local_60 = uVar2;
          if ((longlong)uVar1 < 0x22451a7064b9c534) break;
          if (uVar1 == 0x22451a7064b9c534) {
            local_6a = local_6c;
            local_4c = local_54;
            local_72 = *(ushort *)(param_2 + (longlong)(int)(local_54 % param_3) * 2);
            local_70 = *(short *)(local_48 + (int)(local_54 * 2));
            local_60 = 0x5a62593b9c823338;
            if (((local_54 % param_3) * (uint)local_72 & 1) == 0) {
              local_60 = 0xead6410f71ecb34b;
            }
            local_68 = 0x771ea5814253dfc6;
          }
          else if (uVar1 == 0x2d7cfcbaded1ecfe) {
            local_6e = -(local_70 - local_6a ^ local_72);
            local_60 = 0x57c4db43ea8c539c;
            local_68 = 0x77b2720ef4db9081;
          }
          else if (uVar1 == 0x47726cfded098fc5) {
            *param_5 = 1;
            local_60 = 0xbdd7dfe344245228;
            local_68 = 0x331ca151e5c8771f;
          }
        }
        if ((longlong)uVar1 < -0x2f96604e77c1f1e9) break;
        if (uVar1 == 0xd0699fb1883e0e17) {
          local_60 = 0xa5bac5ab0b5571fa;
          if (*param_5 == 1) {
            local_60 = 0x934a169ce0091f9;
          }
          local_68 = 0x87ffdfdb6fecb4ce;
          local_54 = 0;
          local_6c = 0;
          local_48 = (int)(param_3 * 2) + param_2;
        }
        else if (uVar1 == 0x2076a94d1e57c31d) {
          local_6c = local_6e ^ local_72;
          *(ushort *)(param_1 + (longlong)(int)local_4c * 2) = local_6c;
          local_54 = local_4c + 1;
          local_60 = 0x5d959f34e78100ef;
          if (local_54 == param_4) {
            local_60 = 0x38a2e9b96e314a1e;
          }
          local_68 = 0x7fd085448338c5db;
        }
      }
      if (uVar1 != 0x9dc8e48e33bf6c8d) break;
      local_6e = ~(local_70 + local_6a ^ local_72);
      local_60 = 0x9e174fdcb3068eac;
      local_68 = 0xbe61e691ad514db1;
    }
  } while (uVar1 != 0x8ecb7eb2a1ec2537);
  return;
}



char * FUN_1801bcc30(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 auVar29 [16];
  longlong *plVar30;
  bool bVar31;
  char cVar32;
  DWORD DVar33;
  char ****ppppcVar34;
  HMODULE hModule;
  FARPROC pFVar35;
  INT_PTR IVar36;
  longlong lVar37;
  HANDLE hFindFile;
  ulonglong uVar38;
  undefined8 *_Buf1;
  undefined8 *****pppppuVar39;
  LPCWSTR pWVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  undefined1 *puVar45;
  undefined8 *puVar46;
  char *****pppppcVar47;
  char *pcVar48;
  longlong lVar49;
  char *pcVar50;
  longlong lVar51;
  ulonglong uVar52;
  bool bVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  _WIN32_FIND_DATAW local_588;
  longlong local_330 [3];
  char *local_318;
  char local_310;
  undefined7 uStack_30f;
  char *local_300;
  char *local_2f8;
  ulonglong local_2f0;
  char *local_2e8;
  longlong local_2e0;
  char *local_2d8;
  char *local_2d0;
  undefined1 local_2c8 [16];
  char *local_2b8;
  char *local_2b0;
  char *local_2a0;
  undefined1 local_298 [16];
  longlong *local_288;
  undefined8 ****local_278;
  undefined8 uStack_270;
  char *local_268;
  char *pcStack_260;
  ulonglong local_250;
  longlong local_248;
  HANDLE local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b4;
  char *local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  char *local_198;
  char *local_190;
  char local_188 [8];
  longlong *local_180;
  undefined1 local_178 [16];
  char *local_168;
  char *pcStack_160;
  char *local_158;
  undefined4 local_150;
  ushort local_14a;
  char ****local_148;
  char *pcStack_140;
  char *local_138;
  char *pcStack_130;
  longlong local_120;
  char *local_118;
  longlong local_110;
  char *local_108;
  ulonglong local_100;
  char *local_f8;
  char local_ec;
  byte local_eb;
  char local_ea;
  char local_e9;
  longlong local_e8;
  undefined2 local_da;
  char *local_d8;
  char *local_d0;
  DWORD local_c8;
  char local_c2;
  char local_c1;
  undefined8 local_c0;

  local_c0 = 0xfffffffffffffffe;
  local_110 = 2;
  local_c2 = '\x01';
  local_c1 = '\0';
  local_1b4 = 0xd4;
  local_d8 = (char *)0x7;
  local_ec = -0x41;
  local_2e8 = (char *)0x8000000000000000;
  local_eb = 0x1a;
  local_d0 = (char *)0x0;
  local_2e0 = 0x27;
  local_da = 0;
  local_250 = 0xffffffffffffffe0;
  local_2d8 = (char *)0x7fe;
  local_120 = 0x29;
  local_248 = 0x28;
  local_118 = (char *)0xf;
  local_ea = ' ';
  local_e8 = 1;
  local_e9 = '\x03';
  local_2d0 = (char *)0x7ffffffffffffffe;
  local_108 = (char *)0xfff;
  local_100 = 0xfffffffffffffff8;
  local_c8 = 0;
  local_2f0 = 0x18;
  local_14a = 0x5c;
  local_150 = 0xd6;
  local_1b0 = (char *)0x8;
  local_f8 = (char *)0x20;
  *param_1 = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\a';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  local_158 = param_1;
  FUN_180207610(&local_588,0,0x208);
  FUN_1801d221b(&DAT_1802a7b38,&DAT_18029dc12,0xd,0xd,&DAT_1802a7b54);
  DVar33 = GetEnvironmentVariableW((LPCWSTR)&DAT_1802a7b38,(LPWSTR)&local_588,0x104);
  if (DVar33 == local_c8) {
    local_2c8 = ZEXT816(0);
    local_2b8 = (char *)0x0;
    local_2b0 = local_d8;
  }
  else {
    local_138 = (char *)0x0;
    pcStack_130 = (char *)0x0;
    local_148 = (char ****)0x0;
    pcStack_140 = (char *)0x0;
    pcVar44 = (char *)FUN_1801e15b0(&local_588);
    if (local_2d0 < pcVar44) {
      FUN_180002ac0();
    }
    if (pcVar44 < local_1b0) {
      pppppcVar47 = &local_148;
      pcVar43 = local_d8;
    }
    else {
      pcVar41 = (char *)((ulonglong)local_d8 | (ulonglong)pcVar44);
      if (local_2d0 < pcVar41) {
LAB_1801bee66:
        std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
      }
      pcVar43 = (char *)0xa;
      if ((char *)0xa < pcVar41) {
        pcVar43 = pcVar41;
      }
      lVar37 = (longlong)pcVar43 << ((byte)local_e8 & 0x3f);
      if (local_2d8 < pcVar41) {
        if ((char *)0x7fffffffffffffeb < pcVar41) goto LAB_1801bee66;
        ppppcVar34 = (char ****)FUN_1801d61c8(lVar37 + local_120);
        pppppcVar47 = (char *****)((longlong)ppppcVar34 + local_2e0 & local_250);
        pppppcVar47[-1] = ppppcVar34;
        local_148 = (char ****)pppppcVar47;
      }
      else {
        pppppcVar47 = (char *****)FUN_1801d61c8(lVar37 + local_110);
        local_148 = (char ****)pppppcVar47;
      }
    }
    local_138 = pcVar44;
    pcStack_130 = pcVar43;
    FUN_1802079d0(pppppcVar47,&local_588,(longlong)pcVar44 << ((byte)local_e8 & 0x3f));
    *(undefined2 *)((longlong)pppppcVar47 + (longlong)pcVar44 * 2) = local_da;
    if (local_138 < (char *)0x4) {
LAB_1801bd15c:
      FUN_1801d221b(&DAT_1802a7bb4,&DAT_18029ddc6,10,0xd,&DAT_1802a7bd0);
      hModule = GetModuleHandleW((LPCWSTR)&DAT_1802a7bb4);
      if (hModule == (HMODULE)0x0) {
LAB_1801bd2bb:
        local_178 = (undefined1  [16])0x0;
        local_168 = (char *)0x0;
        pcStack_160 = local_d8;
LAB_1801bd2e0:
        local_2c8 = (undefined1  [16])0x0;
        local_2b8 = (char *)0x0;
        local_2b0 = local_d8;
        bVar53 = true;
        bVar31 = true;
        if (local_d8 < pcStack_160) {
LAB_1801bd318:
          bVar53 = bVar31;
          lVar51 = (longlong)pcStack_160 << ((byte)local_e8 & 0x3f);
          pcVar44 = (char *)(local_110 + lVar51);
          lVar37 = local_178._0_8_;
          if (local_108 < pcVar44) {
            lVar37 = *(longlong *)(local_178._0_8_ + -8);
            if (local_f8 <= (char *)((local_178._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
            pcVar44 = (char *)(lVar51 + local_120);
          }
          thunk_FUN_1801f42e0(lVar37,pcVar44);
        }
      }
      else {
        FUN_1801d1f63(&DAT_1802a7bd4,&DAT_18029de12,0x11,0x1c,&DAT_1802a7bf0);
        pFVar35 = GetProcAddress(hModule,&DAT_1802a7bd4);
        if (pFVar35 == (FARPROC)0x0) goto LAB_1801bd2bb;
        local_1a8._0_4_ = local_c8;
        IVar36 = (*pFVar35)(&local_1a8,0);
        uVar38 = CONCAT44(0,(uint)local_1a8);
        if (((int)IVar36 != 0x7a) || ((uint)local_1a8 == local_c8)) goto LAB_1801bd2bb;
        local_228 = (undefined1  [16])0x0;
        local_238 = (undefined1  [16])0x0;
        puVar45 = local_238;
        pcVar44 = local_d8;
        if (7 < (uint)local_1a8) {
          pcVar41 = (char *)((ulonglong)local_d8 | uVar38);
          pcVar44 = (char *)0xa;
          if ((char *)0xa < pcVar41) {
            pcVar44 = pcVar41;
          }
          lVar37 = (longlong)pcVar44 << ((byte)local_e8 & 0x3f);
          if (local_2d8 < pcVar41) {
            lVar37 = FUN_1801d61c8(lVar37 + local_120);
            puVar45 = (undefined1 *)(local_2e0 + lVar37 & local_250);
            *(longlong *)(puVar45 + -8) = lVar37;
          }
          else {
            puVar45 = (undefined1 *)FUN_1801d61c8(lVar37 + local_110);
          }
          local_238._0_8_ = puVar45;
        }
        local_228._8_8_ = pcVar44;
        local_228._0_8_ = uVar38;
        FUN_180207610(puVar45,0,uVar38 << ((byte)local_e8 & 0x3f));
        *(undefined2 *)(puVar45 + uVar38 * 2) = local_da;
        puVar45 = local_238;
        if (local_d8 < (ulonglong)local_228._8_8_) {
          puVar45 = (undefined1 *)local_238._0_8_;
        }
        IVar36 = (*pFVar35)(&local_1a8,puVar45);
        if ((DWORD)IVar36 != local_c8) {
          local_178 = (undefined1  [16])0x0;
          local_168 = (char *)0x0;
          pcStack_160 = local_d8;
          if (local_d8 < (ulonglong)local_228._8_8_) {
            lVar37 = local_228._8_8_ << ((byte)local_e8 & 0x3f);
            pcVar44 = (char *)(local_110 + lVar37);
            puVar45 = (undefined1 *)local_238._0_8_;
            if (local_108 < pcVar44) {
              puVar45 = *(undefined1 **)(local_238._0_8_ + -8);
              if (local_f8 <= (char *)(local_238._0_8_ + (local_100 - (longlong)puVar45))) goto LAB_1801bed63;
              pcVar44 = (char *)(lVar37 + local_120);
            }
            thunk_FUN_1801f42e0(puVar45,pcVar44);
          }
          goto LAB_1801bd2e0;
        }
        uVar38 = CONCAT44(0,((uint)local_1a8 - 1) + (uint)((uint)local_1a8 == 0));
        uVar4 = local_228._0_8_;
        uVar52 = uVar38 - local_228._0_8_;
        puVar45 = (undefined1 *)local_238._0_8_;
        if (uVar38 < (ulonglong)local_228._0_8_ || uVar52 == 0) {
          local_228._0_8_ = uVar38;
          if ((ulonglong)local_228._8_8_ <= local_d8) {
            puVar45 = local_238;
          }
LAB_1801beae9:
          *(undefined2 *)(puVar45 + uVar38 * 2) = local_da;
        }
        else {
          if (uVar52 <= (ulonglong)(local_228._8_8_ - local_228._0_8_)) {
            local_228._0_8_ = uVar38;
            if ((ulonglong)local_228._8_8_ <= local_d8) {
              puVar45 = local_238;
            }
            FUN_180207610(puVar45 + uVar4 * 2,0,uVar52 << ((byte)local_e8 & 0x3f));
            goto LAB_1801beae9;
          }
          FUN_180063860(local_238,uVar52,uVar52,uVar52,local_da);
        }
        local_168 = (char *)local_228._0_8_;
        pcStack_160 = (char *)local_228._8_8_;
        local_178 = local_238;
        if ((char *)local_228._0_8_ == local_d0) goto LAB_1801bd2e0;
        FUN_1801d221b(&DAT_1802a7b58,&DAT_18029dc5e,0xc,0xb,&DAT_1802a7b70);
        FUN_1801c10b0(local_238,&DAT_1802a7b58,local_178);
        puVar45 = local_238;
        if (local_d8 < (ulonglong)local_228._8_8_) {
          puVar45 = (undefined1 *)local_238._0_8_;
        }
        if ((ulonglong)((longlong)pcStack_130 - (longlong)local_138) < (ulonglong)local_228._0_8_) {
          FUN_180061f00(&local_148,local_228._0_8_,local_228._0_8_,puVar45,local_228._0_8_);
        }
        else {
          pcVar44 = local_138 + local_228._0_8_;
          pppppcVar47 = (char *****)local_148;
          if (pcStack_130 <= local_d8) {
            pppppcVar47 = &local_148;
          }
          lVar37 = (longlong)local_138 * 2;
          local_138 = pcVar44;
          FUN_1802079d0((char *)((longlong)pppppcVar47 + lVar37),puVar45,local_228._0_8_ << ((byte)local_e8 & 0x3f));
          *(undefined2 *)((longlong)pppppcVar47 + (longlong)pcVar44 * 2) = local_da;
        }
        if (local_d8 < (ulonglong)local_228._8_8_) {
          lVar51 = local_228._8_8_ << ((byte)local_e8 & 0x3f);
          pcVar44 = (char *)(local_110 + lVar51);
          lVar37 = local_238._0_8_;
          if (local_108 < pcVar44) {
            lVar37 = *(longlong *)(local_238._0_8_ + -8);
            if (local_f8 <= (char *)((local_238._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
            pcVar44 = (char *)(lVar51 + local_120);
          }
          thunk_FUN_1801f42e0(lVar37,pcVar44);
        }
        bVar53 = false;
        bVar31 = false;
        if (local_d8 < pcStack_160) goto LAB_1801bd318;
      }
      if (!bVar53) goto LAB_1801bd378;
    }
    else {
      pcVar44 = local_138 + -3;
      if (pcStack_130 <= local_d8) {
        pppppcVar47 = &local_148;
        if (*(ushort *)((longlong)pppppcVar47 + (longlong)pcVar44 * 2) == local_14a) goto LAB_1801bd11d;
        goto LAB_1801bd15c;
      }
      pppppcVar47 = (char *****)local_148;
      if (*(ushort *)((longlong)local_148 + (longlong)pcVar44 * 2) != local_14a) goto LAB_1801bd15c;
LAB_1801bd11d:
      if ((*(short *)((longlong)pppppcVar47 + (longlong)pcVar44 * 2 + 2) != 0x41) ||
         (*(short *)((longlong)pppppcVar47 + (longlong)pcVar44 * 2 + 4) != 0x43)) goto LAB_1801bd15c;
      local_138 = pcVar44;
      *(undefined2 *)((longlong)pppppcVar47 + (longlong)pcVar44 * 2) = local_da;
LAB_1801bd378:
      FUN_1801d221b(&DAT_1802a7b74,&DAT_18029dca2,10,0x1e,&DAT_1802a7bb0);
      FUN_1801c0320(local_2c8,&local_148,&DAT_1802a7b74);
    }
    if (local_d8 < pcStack_130) {
      lVar37 = (longlong)pcStack_130 << ((byte)local_e8 & 0x3f);
      pcVar44 = (char *)(local_110 + lVar37);
      pppppcVar47 = (char *****)local_148;
      if (local_108 < pcVar44) {
        pppppcVar47 = (char *****)local_148[-1];
        if (local_f8 <= (char *)((longlong)local_148 + (local_100 - (longlong)pppppcVar47))) goto LAB_1801bed63;
        pcVar44 = (char *)(lVar37 + local_120);
      }
      thunk_FUN_1801f42e0(pppppcVar47,pcVar44);
    }
    if (local_2b8 != local_d0) {
      local_298 = (undefined1  [16])0x0;
      local_288 = (longlong *)0x0;
      FUN_1801d221b(&DAT_1802a7bf4,&DAT_18029de5c,8,0x27,&DAT_1802a7c44);
      FUN_1801c0320(&local_148,local_2c8,&DAT_1802a7bf4);
      FUN_1801c08c0(local_238,&local_148);
      if ((char *)local_228._0_8_ == local_d0) {
        local_1a8._0_4_ = CONCAT31(local_1a8._1_3_,local_c1);
        local_1a0 = (undefined8 *)0x0;
      }
      else {
        local_588.cFileName[6] = L'\0';
        local_588.cFileName[7] = L'\0';
        local_588.cFileName[8] = L'\0';
        local_588.cFileName[9] = L'\0';
        FUN_1801c1610(&local_1a8,local_238,&local_588,0,1);
      }
      if (local_118 < (ulonglong)local_228._8_8_) {
        pcVar44 = (char *)(local_228._8_8_ + local_e8);
        lVar37 = local_238._0_8_;
        if (local_108 < pcVar44) {
          lVar37 = *(longlong *)(local_238._0_8_ + -8);
          if (local_f8 <= (char *)((local_238._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
          pcVar44 = (char *)(local_228._8_8_ + local_248);
        }
        thunk_FUN_1801f42e0(lVar37,pcVar44);
      }
      local_228._8_8_ = local_118;
      local_228._0_8_ = local_d0;
      local_238[0] = local_c1;
      if (local_d8 < pcStack_130) {
        lVar37 = (longlong)pcStack_130 << ((byte)local_e8 & 0x3f);
        pcVar44 = (char *)(local_110 + lVar37);
        pppppcVar47 = (char *****)local_148;
        if (local_108 < pcVar44) {
          pppppcVar47 = (char *****)local_148[-1];
          if (local_f8 <= (char *)((longlong)local_148 + (local_100 - (longlong)pppppcVar47))) goto LAB_1801bed63;
          pcVar44 = (char *)(lVar37 + local_120);
        }
        thunk_FUN_1801f42e0(pppppcVar47,pcVar44);
      }
      if ((char)local_1a8 == '\x02') {
        local_148 = (char ****)&local_1a8;
        pcStack_140 = local_d0;
        pcStack_130 = local_2e8;
        local_138 = (char *)*local_1a0;
        pcVar44 = (char *)local_1a0[1];
        while( true ) {
          ppppcVar34 = local_148;
          if (local_148 != (char ****)&local_1a8) {
            FUN_1801d1f63(&DAT_1802a8a04,&DAT_18029f68d,0x1a,0x31,&DAT_1802a8a38);
            FUN_180057290(local_238,&DAT_1802a8a04);
            FUN_1800886d0(&local_588,local_1b4,local_238,ppppcVar34);
            FUN_1801dd110(&local_588,&DAT_180253660);
          }
          cVar32 = *(char *)local_148;
          if ('\x01' < cVar32) break;
          if (cVar32 != '\x01') goto LAB_1801bd6e0;
          if (pcStack_140 == (char *)0x0) goto LAB_1801bdab7;
LAB_1801bd6f4:
          pcVar41 = (char *)FUN_180086ee0(&local_148);
          if (*pcVar41 == local_c2) {
            uVar4 = *(undefined8 *)(pcVar41 + 8);
            FUN_1801d1f63(&DAT_1802a7c48,&DAT_18029ded3,0x16,8,&DAT_1802a7c50);
            lVar37 = FUN_1800b82e0(uVar4,&DAT_1802a7c48);
            cVar32 = *pcVar41;
            if (cVar32 < '\x02') {
              if (cVar32 != '\x01') {
LAB_1801bed82:
                FUN_1801d1f63(&DAT_1802a8a3c,&DAT_18029f72f,0x1d,0x11,&DAT_1802a8a50);
                FUN_180057290(local_238,&DAT_1802a8a3c);
                FUN_1800886d0(&local_588,local_150,local_238,pcVar41);
                FUN_1801dd110(&local_588,&DAT_180253660);
              }
              if ((lVar37 != **(longlong **)(pcVar41 + 8)) && (*(char *)(lVar37 + 0x40) == local_e9)) {
                local_178 = ZEXT816(0);
                local_168 = (char *)0x0;
                pcStack_160 = local_118;
                FUN_180087f60(lVar37 + 0x40,local_178);
                pcVar41 = local_168;
                pcVar43 = local_178;
                if (local_118 < pcStack_160) {
                  pcVar43 = (char *)local_178._0_8_;
                }
                if (local_168 != local_d0) {
                  pcVar50 = pcVar43;
                  if (local_1b0 <= local_168) {
                    pcVar42 = local_d0;
                    if (local_f8 <= local_168) {
                      pcVar48 = (char *)(local_2f0 & (ulonglong)local_168);
                      pcVar42 = (char *)(local_250 & (ulonglong)local_168);
                      pcVar50 = local_d0;
                      do {
                        pcVar1 = pcVar43 + (longlong)pcVar50;
                        cVar32 = pcVar1[1];
                        cVar54 = pcVar1[2];
                        cVar55 = pcVar1[3];
                        cVar56 = pcVar1[4];
                        cVar57 = pcVar1[5];
                        cVar58 = pcVar1[6];
                        cVar59 = pcVar1[7];
                        cVar5 = pcVar1[8];
                        cVar6 = pcVar1[9];
                        cVar7 = pcVar1[10];
                        cVar8 = pcVar1[0xb];
                        cVar9 = pcVar1[0xc];
                        cVar10 = pcVar1[0xd];
                        cVar11 = pcVar1[0xe];
                        cVar12 = pcVar1[0xf];
                        pcVar2 = pcVar43 + 0x10 + (longlong)pcVar50;
                        cVar13 = *pcVar2;
                        cVar14 = pcVar2[1];
                        cVar15 = pcVar2[2];
                        cVar16 = pcVar2[3];
                        cVar17 = pcVar2[4];
                        cVar18 = pcVar2[5];
                        cVar19 = pcVar2[6];
                        cVar20 = pcVar2[7];
                        cVar21 = pcVar2[8];
                        cVar22 = pcVar2[9];
                        cVar23 = pcVar2[10];
                        cVar24 = pcVar2[0xb];
                        cVar25 = pcVar2[0xc];
                        cVar26 = pcVar2[0xd];
                        cVar27 = pcVar2[0xe];
                        cVar28 = pcVar2[0xf];
                        bVar60 = *pcVar1 + 0xbf;
                        bVar61 = cVar32 + 0xbf;
                        bVar62 = cVar54 + 0xbf;
                        bVar63 = cVar55 + 0xbf;
                        bVar64 = cVar56 + 0xbf;
                        bVar65 = cVar57 + 0xbf;
                        bVar66 = cVar58 + 0xbf;
                        bVar67 = cVar59 + 0xbf;
                        bVar68 = cVar5 + 0xbf;
                        bVar69 = cVar6 + 0xbf;
                        bVar70 = cVar7 + 0xbf;
                        bVar71 = cVar8 + 0xbf;
                        bVar72 = cVar9 + 0xbf;
                        bVar73 = cVar10 + 0xbf;
                        bVar74 = cVar11 + 0xbf;
                        bVar75 = cVar12 + 0xbf;
                        bVar76 = cVar13 + 0xbf;
                        bVar77 = cVar14 + 0xbf;
                        bVar78 = cVar15 + 0xbf;
                        bVar79 = cVar16 + 0xbf;
                        bVar80 = cVar17 + 0xbf;
                        bVar81 = cVar18 + 0xbf;
                        bVar82 = cVar19 + 0xbf;
                        bVar83 = cVar20 + 0xbf;
                        bVar84 = cVar21 + 0xbf;
                        bVar85 = cVar22 + 0xbf;
                        bVar86 = cVar23 + 0xbf;
                        bVar87 = cVar24 + 0xbf;
                        bVar88 = cVar25 + 0xbf;
                        bVar89 = cVar26 + 0xbf;
                        bVar90 = cVar27 + 0xbf;
                        bVar91 = cVar28 + 0xbf;
                        pcVar2 = pcVar43 + (longlong)pcVar50;
                        *pcVar2 = (-((byte)((0x19 < bVar60) * '\x19' | (0x19 >= bVar60) * bVar60) == bVar60) & 0x20U) +
                                  *pcVar1;
                        pcVar2[1] = (-((byte)((0x19 < bVar61) * '\x19' | (0x19 >= bVar61) * bVar61) == bVar61) & 0x20U)
                                    + cVar32;
                        pcVar2[2] = (-((byte)((0x19 < bVar62) * '\x19' | (0x19 >= bVar62) * bVar62) == bVar62) & 0x20U)
                                    + cVar54;
                        pcVar2[3] = (-((byte)((0x19 < bVar63) * '\x19' | (0x19 >= bVar63) * bVar63) == bVar63) & 0x20U)
                                    + cVar55;
                        pcVar2[4] = (-((byte)((0x19 < bVar64) * '\x19' | (0x19 >= bVar64) * bVar64) == bVar64) & 0x20U)
                                    + cVar56;
                        pcVar2[5] = (-((byte)((0x19 < bVar65) * '\x19' | (0x19 >= bVar65) * bVar65) == bVar65) & 0x20U)
                                    + cVar57;
                        pcVar2[6] = (-((byte)((0x19 < bVar66) * '\x19' | (0x19 >= bVar66) * bVar66) == bVar66) & 0x20U)
                                    + cVar58;
                        pcVar2[7] = (-((byte)((0x19 < bVar67) * '\x19' | (0x19 >= bVar67) * bVar67) == bVar67) & 0x20U)
                                    + cVar59;
                        pcVar2[8] = (-((byte)((0x19 < bVar68) * '\x19' | (0x19 >= bVar68) * bVar68) == bVar68) & 0x20U)
                                    + cVar5;
                        pcVar2[9] = (-((byte)((0x19 < bVar69) * '\x19' | (0x19 >= bVar69) * bVar69) == bVar69) & 0x20U)
                                    + cVar6;
                        pcVar2[10] = (-((byte)((0x19 < bVar70) * '\x19' | (0x19 >= bVar70) * bVar70) == bVar70) & 0x20U)
                                     + cVar7;
                        pcVar2[0xb] = (-((byte)((0x19 < bVar71) * '\x19' | (0x19 >= bVar71) * bVar71) == bVar71) & 0x20U
                                      ) + cVar8;
                        pcVar2[0xc] = (-((byte)((0x19 < bVar72) * '\x19' | (0x19 >= bVar72) * bVar72) == bVar72) & 0x20U
                                      ) + cVar9;
                        pcVar2[0xd] = (-((byte)((0x19 < bVar73) * '\x19' | (0x19 >= bVar73) * bVar73) == bVar73) & 0x20U
                                      ) + cVar10;
                        pcVar2[0xe] = (-((byte)((0x19 < bVar74) * '\x19' | (0x19 >= bVar74) * bVar74) == bVar74) & 0x20U
                                      ) + cVar11;
                        pcVar2[0xf] = (-((byte)((0x19 < bVar75) * '\x19' | (0x19 >= bVar75) * bVar75) == bVar75) & 0x20U
                                      ) + cVar12;
                        pcVar1 = pcVar43 + 0x10 + (longlong)pcVar50;
                        *pcVar1 = (-((byte)((0x19 < bVar76) * '\x19' | (0x19 >= bVar76) * bVar76) == bVar76) & 0x20U) +
                                  cVar13;
                        pcVar1[1] = (-((byte)((0x19 < bVar77) * '\x19' | (0x19 >= bVar77) * bVar77) == bVar77) & 0x20U)
                                    + cVar14;
                        pcVar1[2] = (-((byte)((0x19 < bVar78) * '\x19' | (0x19 >= bVar78) * bVar78) == bVar78) & 0x20U)
                                    + cVar15;
                        pcVar1[3] = (-((byte)((0x19 < bVar79) * '\x19' | (0x19 >= bVar79) * bVar79) == bVar79) & 0x20U)
                                    + cVar16;
                        pcVar1[4] = (-((byte)((0x19 < bVar80) * '\x19' | (0x19 >= bVar80) * bVar80) == bVar80) & 0x20U)
                                    + cVar17;
                        pcVar1[5] = (-((byte)((0x19 < bVar81) * '\x19' | (0x19 >= bVar81) * bVar81) == bVar81) & 0x20U)
                                    + cVar18;
                        pcVar1[6] = (-((byte)((0x19 < bVar82) * '\x19' | (0x19 >= bVar82) * bVar82) == bVar82) & 0x20U)
                                    + cVar19;
                        pcVar1[7] = (-((byte)((0x19 < bVar83) * '\x19' | (0x19 >= bVar83) * bVar83) == bVar83) & 0x20U)
                                    + cVar20;
                        pcVar1[8] = (-((byte)((0x19 < bVar84) * '\x19' | (0x19 >= bVar84) * bVar84) == bVar84) & 0x20U)
                                    + cVar21;
                        pcVar1[9] = (-((byte)((0x19 < bVar85) * '\x19' | (0x19 >= bVar85) * bVar85) == bVar85) & 0x20U)
                                    + cVar22;
                        pcVar1[10] = (-((byte)((0x19 < bVar86) * '\x19' | (0x19 >= bVar86) * bVar86) == bVar86) & 0x20U)
                                     + cVar23;
                        pcVar1[0xb] = (-((byte)((0x19 < bVar87) * '\x19' | (0x19 >= bVar87) * bVar87) == bVar87) & 0x20U
                                      ) + cVar24;
                        pcVar1[0xc] = (-((byte)((0x19 < bVar88) * '\x19' | (0x19 >= bVar88) * bVar88) == bVar88) & 0x20U
                                      ) + cVar25;
                        pcVar1[0xd] = (-((byte)((0x19 < bVar89) * '\x19' | (0x19 >= bVar89) * bVar89) == bVar89) & 0x20U
                                      ) + cVar26;
                        pcVar1[0xe] = (-((byte)((0x19 < bVar90) * '\x19' | (0x19 >= bVar90) * bVar90) == bVar90) & 0x20U
                                      ) + cVar27;
                        pcVar1[0xf] = (-((byte)((0x19 < bVar91) * '\x19' | (0x19 >= bVar91) * bVar91) == bVar91) & 0x20U
                                      ) + cVar28;
                        pcVar50 = pcVar50 + (longlong)local_f8;
                      } while (pcVar50 != pcVar42);
                      if (pcVar41 == pcVar42) goto LAB_1801bd7d9;
                      if (pcVar48 == local_d0) {
                        pcVar50 = pcVar42 + (longlong)pcVar43;
                        goto LAB_1801bd9ff;
                      }
                    }
                    pcVar48 = (char *)(local_100 & (ulonglong)pcVar41);
                    pcVar50 = pcVar43 + (longlong)pcVar48;
                    do {
                      uVar4 = *(undefined8 *)(pcVar43 + (longlong)pcVar42);
                      bVar60 = (char)uVar4 + 0xbf;
                      cVar54 = (char)((ulonglong)uVar4 >> 8);
                      bVar61 = cVar54 + 0xbf;
                      cVar55 = (char)((ulonglong)uVar4 >> 0x10);
                      bVar62 = cVar55 + 0xbf;
                      cVar56 = (char)((ulonglong)uVar4 >> 0x18);
                      bVar63 = cVar56 + 0xbf;
                      cVar57 = (char)((ulonglong)uVar4 >> 0x20);
                      bVar64 = cVar57 + 0xbf;
                      cVar58 = (char)((ulonglong)uVar4 >> 0x28);
                      bVar65 = cVar58 + 0xbf;
                      cVar59 = (char)((ulonglong)uVar4 >> 0x30);
                      cVar32 = (char)((ulonglong)uVar4 >> 0x38);
                      bVar66 = cVar59 + 0xbf;
                      bVar67 = cVar32 + 0xbf;
                      *(ulonglong *)(pcVar43 + (longlong)pcVar42) =
                           CONCAT17((~-((byte)((bVar67 < 0x1a) * '\x1a' | (bVar67 >= 0x1a) * bVar67) == bVar67) & ' ') +
                                    cVar32,CONCAT16((~-((byte)((bVar66 < 0x1a) * '\x1a' | (bVar66 >= 0x1a) * bVar66) ==
                                                       bVar66) & ' ') + cVar59,
                                                    CONCAT15((~-((byte)((bVar65 < 0x1a) * '\x1a' |
                                                                       (bVar65 >= 0x1a) * bVar65) == bVar65) & ' ') +
                                                             cVar58,CONCAT14((~-((byte)((bVar64 < 0x1a) * '\x1a' |
                                                                                       (bVar64 >= 0x1a) * bVar64) ==
                                                                                bVar64) & ' ') + cVar57,
                                                                             CONCAT13((~-((byte)((bVar63 < 0x1a) *
                                                                                                 '\x1a' | (bVar63 >=
                                                                                                          0x1a) * bVar63
                                                                                                ) == bVar63) & ' ') +
                                                                                      cVar56,CONCAT12((~-((byte)((bVar62
                                                                                                                 < 0x1a)
                                                                                                                 *
                                                            '\x1a' | (bVar62 >= 0x1a) * bVar62) == bVar62) & ' ') +
                                                            cVar55,CONCAT11((~-((byte)((bVar61 < 0x1a) * '\x1a' |
                                                                                      (bVar61 >= 0x1a) * bVar61) ==
                                                                               bVar61) & ' ') + cVar54,
                                                                            (~-((byte)((bVar60 < 0x1a) * '\x1a' |
                                                                                      (bVar60 >= 0x1a) * bVar60) ==
                                                                               bVar60) & ' ') + (char)uVar4)))))));
                      pcVar42 = pcVar42 + (longlong)local_1b0;
                    } while (pcVar42 != pcVar48);
                    if (pcVar41 == pcVar48) goto LAB_1801bd7d9;
                  }
LAB_1801bd9ff:
                  do {
                    cVar32 = local_ea;
                    if (local_eb <= (byte)(local_ec + *pcVar50)) {
                      cVar32 = '\0';
                    }
                    *pcVar50 = *pcVar50 + cVar32;
                    pcVar50 = pcVar50 + 1;
                  } while (pcVar50 != pcVar43 + (longlong)pcVar41);
                }
LAB_1801bd7d9:
                auVar29 = local_178;
                local_588._16_8_ = local_168;
                local_588._24_8_ = pcStack_160;
                local_588.dwFileAttributes = local_178._0_4_;
                local_588.ftCreationTime.dwLowDateTime = local_178._4_4_;
                local_588.ftCreationTime.dwHighDateTime = local_178._8_4_;
                local_588.ftLastAccessTime.dwLowDateTime = local_178._12_4_;
                local_178 = auVar29;
                if ((longlong *)local_298._8_8_ == local_288) {
                  FUN_1800717d0(local_298,local_298._8_8_,&local_588);
                  if (local_118 < (ulonglong)local_588._24_8_) {
                    pcVar41 = (char *)(local_588._24_8_ + local_e8);
                    lVar37 = local_588._0_8_;
                    if (local_108 < pcVar41) {
                      lVar37 = *(longlong *)(local_588._0_8_ + -8);
                      if (local_f8 <= (char *)((local_588._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
                      pcVar41 = (char *)(local_588._24_8_ + local_248);
                    }
                    thunk_FUN_1801f42e0(lVar37,pcVar41);
                  }
                }
                else {
                  *(longlong *)(local_298._8_8_ + 0x10) = 0;
                  *(longlong *)(local_298._8_8_ + 0x18) = 0;
                  *(longlong *)local_298._8_8_ = 0;
                  *(longlong *)(local_298._8_8_ + 8) = 0;
                  *(undefined8 *)local_298._8_8_ = local_178._0_8_;
                  *(undefined8 *)(local_298._8_8_ + 8) = local_178._8_8_;
                  *(char **)(local_298._8_8_ + 0x10) = local_168;
                  *(char **)(local_298._8_8_ + 0x18) = pcStack_160;
                  local_298._8_8_ = (longlong *)(local_298._8_8_ + 0x20);
                }
              }
            }
            else if ((cVar32 != '\x02') || (*(longlong *)(*(longlong *)(pcVar41 + 8) + 8) != 0)) goto LAB_1801bed82;
          }
          cVar32 = *(char *)local_148;
          if (cVar32 < '\x02') {
            if (cVar32 == '\x01') {
              pcVar41 = *(char **)(pcStack_140 + 0x10);
              if ((*(char **)(pcStack_140 + 0x10))[0x19] == local_c1) {
                do {
                  pcVar43 = pcVar41;
                  pcVar41 = *(char **)pcVar43;
                } while ((*(char **)pcVar43)[0x19] == local_c1);
LAB_1801bd892:
                pcStack_140 = pcVar43;
              }
              else {
                do {
                  pcVar43 = *(char **)(pcStack_140 + 8);
                  if (pcVar43[0x19] != local_c1) goto LAB_1801bd892;
                  bVar53 = pcStack_140 == *(char **)(pcVar43 + 0x10);
                  pcStack_140 = pcVar43;
                } while (bVar53);
              }
            }
            else {
LAB_1801bd690:
              pcStack_130 = pcStack_130 + local_e8;
            }
          }
          else {
            if (cVar32 != '\x02') goto LAB_1801bd690;
            local_138 = local_138 + 0x10;
          }
        }
        if (cVar32 == '\x02') {
          if (local_138 != pcVar44) goto LAB_1801bd6f4;
        }
        else {
LAB_1801bd6e0:
          if (pcStack_130 != local_2e8) goto LAB_1801bd6f4;
        }
LAB_1801bdab7:
      }
      FUN_18007ff50(&local_1a0,(char)local_1a8);
      if (local_298._0_8_ != local_298._8_8_) {
        FUN_180207610(&local_588,0,0x250);
        FUN_1801d221b(&DAT_1802a7a10,&DAT_18029d9f2,0xc,0x10,&DAT_1802a7a30);
        FUN_1801c0320(local_178,local_2c8,&DAT_1802a7a10);
        FUN_1801d221b(&DAT_1802a7a34,&DAT_18029da3e,8,2,&DAT_1802a7a38);
        FUN_1801c0320(local_238,local_178,&DAT_1802a7a34);
        pWVar40 = (LPCWSTR)local_238;
        if (local_d8 < (ulonglong)local_228._8_8_) {
          pWVar40 = (LPCWSTR)local_238._0_8_;
        }
        hFindFile = FindFirstFileW(pWVar40,&local_588);
        if (local_d8 < (ulonglong)local_228._8_8_) {
          lVar51 = local_228._8_8_ << ((byte)local_e8 & 0x3f);
          pcVar44 = (char *)(local_110 + lVar51);
          lVar37 = local_238._0_8_;
          if (local_108 < pcVar44) {
            lVar37 = *(longlong *)(local_238._0_8_ + -8);
            if (local_f8 <= (char *)((local_238._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
            pcVar44 = (char *)(lVar51 + local_120);
          }
          thunk_FUN_1801f42e0(lVar37,pcVar44);
        }
        if (hFindFile != (HANDLE)0xffffffffffffffff) {
          local_2a0 = local_158 + 8;
          local_240 = hFindFile;
LAB_1801bdcc0:
          if (((local_588.dwFileAttributes & 0x10) == local_c8) || (local_588.cFileName[0] == L'.')) goto LAB_1801bdca8;
          local_228._8_8_ = local_d8;
          local_228._0_8_ = local_e8;
          local_238 = ZEXT216(local_14a);
          FUN_1801c0320(&local_148,local_178,local_588.cFileName);
          FUN_1801d13d0(&local_1a8);
          if (local_d8 < pcStack_130) {
            lVar37 = (longlong)pcStack_130 << ((byte)local_e8 & 0x3f);
            pcVar44 = (char *)(local_110 + lVar37);
            pppppcVar47 = (char *****)local_148;
            if (local_108 < pcVar44) {
              pppppcVar47 = (char *****)local_148[-1];
              if (local_f8 <= (char *)((longlong)local_148 + (local_100 - (longlong)pppppcVar47))) goto LAB_1801bed63;
              pcVar44 = (char *)(lVar37 + local_120);
            }
            thunk_FUN_1801f42e0(pppppcVar47,pcVar44);
          }
          if (local_d8 < (ulonglong)local_228._8_8_) {
            lVar51 = local_228._8_8_ << ((byte)local_e8 & 0x3f);
            pcVar44 = (char *)(local_110 + lVar51);
            lVar37 = local_238._0_8_;
            if (local_108 < pcVar44) {
              lVar37 = *(longlong *)(local_238._0_8_ + -8);
              if (local_f8 <= (char *)((local_238._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
              pcVar44 = (char *)(lVar51 + local_120);
            }
            thunk_FUN_1801f42e0(lVar37,pcVar44);
          }
          FUN_1801d221b(&DAT_1802a7a3c,&DAT_18029da62,0xe,0xe,&DAT_1802a7a58);
          FUN_1801c0320(local_330,&local_1a8,&DAT_1802a7a3c);
          FUN_1801c08c0(&local_310,local_330);
          if (local_300 == local_d0) {
            local_188[0] = local_c1;
            local_180 = (longlong *)0x0;
LAB_1801be000:
            local_278 = (undefined8 *****)0x0;
            uStack_270 = 0;
            local_268 = (char *)0x0;
            pcStack_260 = local_118;
          }
          else {
            uStack_200 = 0;
            FUN_1801c1610(local_188,&local_310,local_238,0,1);
            plVar30 = local_180;
            if (local_188[0] != local_c2) goto LAB_1801be000;
            FUN_1801d1f63(&DAT_1802a8bc8,&DAT_1802a0109,0x13,7,&DAT_1802a8bd0);
            lVar37 = FUN_1801d1b50(plVar30,&DAT_1802a8bc8);
            if ('\x01' < local_188[0]) {
              if (local_188[0] != '\x02') goto LAB_1801bedf2;
              goto LAB_1801be000;
            }
            if (local_188[0] != '\x01') {
LAB_1801bedf2:
              FUN_1801d1f63(&DAT_1802a8a3c,&DAT_18029f72f,0x1d,0x11,&DAT_1802a8a50);
              FUN_180057290(&local_148,&DAT_1802a8a3c);
              FUN_1800886d0(local_238,local_150,&local_148,local_188);
              FUN_1801dd110(local_238,&DAT_180253660);
            }
            if ((lVar37 == *local_180) || (*(char *)(lVar37 + 0x40) != local_c2)) goto LAB_1801be000;
            uVar4 = *(undefined8 *)(lVar37 + 0x48);
            FUN_1801d1f63(&DAT_1802a8bd4,&DAT_1802a0142,0x1c,5,&DAT_1802a8bdc);
            lVar51 = FUN_180088e60(uVar4,&DAT_1802a8bd4);
            pcVar44 = (char *)(lVar37 + 0x40);
            if (local_188[0] < '\x02') {
              if (local_188[0] != '\x01') {
LAB_1801bee6c:
                FUN_1801d1f63(&DAT_1802a8a3c,&DAT_18029f72f,0x1d,0x11,&DAT_1802a8a50);
                FUN_180057290(&local_148,&DAT_1802a8a3c);
                FUN_1800886d0(local_238,local_150,&local_148,local_188);
                FUN_1801dd110(local_238,&DAT_180253660);
              }
              cVar32 = *pcVar44;
              pcVar41 = pcVar44;
              if (cVar32 < '\x02') goto LAB_1801bdfd5;
LAB_1801be57b:
              if (cVar32 != '\x02') goto LAB_1801be585;
              bVar53 = true;
              lVar37 = 0;
            }
            else {
              if (local_188[0] != '\x02') goto LAB_1801bee6c;
              pcVar41 = (char *)0x0;
              cVar32 = cRam0000000000000000;
              if ('\x01' < cRam0000000000000000) goto LAB_1801be57b;
LAB_1801bdfd5:
              if (cVar32 == '\x01') {
                lVar37 = **(longlong **)(pcVar41 + 8);
                bVar53 = true;
              }
              else {
LAB_1801be585:
                lVar37 = 0;
                bVar53 = false;
              }
            }
            if (pcVar44 != pcVar41) {
              FUN_1801d1f63(&DAT_1802a8a04,&DAT_18029f68d,0x1a,0x31,&DAT_1802a8a38);
              FUN_180057290(&local_148,&DAT_1802a8a04);
              FUN_1800886d0(local_238,local_1b4,&local_148,pcVar44);
              FUN_1801dd110(local_238,&DAT_180253660);
            }
            cVar32 = *pcVar44;
            if ('\x01' < cVar32) {
              if (cVar32 != '\x02') goto LAB_1801be657;
              goto LAB_1801be000;
            }
            if (cVar32 != '\x01') {
LAB_1801be657:
              if (!bVar53) {
                FUN_1801d1f63(&DAT_1802a8a3c,&DAT_18029f72f,0x1d,0x11,&DAT_1802a8a50);
                FUN_180057290(&local_148,&DAT_1802a8a3c);
                FUN_1800886d0(local_238,local_150,&local_148,pcVar44);
                FUN_1801dd110(local_238,&DAT_180253660);
              }
              goto LAB_1801be000;
            }
            if ((lVar51 == lVar37) || (*(char *)(lVar51 + 0x40) != local_e9)) goto LAB_1801be000;
            local_238 = ZEXT816(0);
            auVar29._8_8_ = 0;
            auVar29._0_8_ = local_118;
            local_228 = auVar29 << 0x40;
            FUN_180087f60(lVar51 + 0x40,local_238);
            uVar4 = local_228._0_8_;
            pcVar44 = local_238;
            if (local_118 < (ulonglong)local_228._8_8_) {
              pcVar44 = (char *)local_238._0_8_;
            }
            if ((char *)local_228._0_8_ != local_d0) {
              pcVar41 = pcVar44;
              if (local_1b0 <= (ulonglong)local_228._0_8_) {
                pcVar43 = local_d0;
                if (local_f8 <= (ulonglong)local_228._0_8_) {
                  pcVar50 = (char *)(local_2f0 & local_228._0_8_);
                  pcVar43 = (char *)(local_250 & local_228._0_8_);
                  pcVar41 = local_d0;
                  do {
                    pcVar42 = pcVar44 + (longlong)pcVar41;
                    cVar32 = pcVar42[1];
                    cVar54 = pcVar42[2];
                    cVar55 = pcVar42[3];
                    cVar56 = pcVar42[4];
                    cVar57 = pcVar42[5];
                    cVar58 = pcVar42[6];
                    cVar59 = pcVar42[7];
                    cVar5 = pcVar42[8];
                    cVar6 = pcVar42[9];
                    cVar7 = pcVar42[10];
                    cVar8 = pcVar42[0xb];
                    cVar9 = pcVar42[0xc];
                    cVar10 = pcVar42[0xd];
                    cVar11 = pcVar42[0xe];
                    cVar12 = pcVar42[0xf];
                    pcVar48 = pcVar44 + 0x10 + (longlong)pcVar41;
                    cVar13 = *pcVar48;
                    cVar14 = pcVar48[1];
                    cVar15 = pcVar48[2];
                    cVar16 = pcVar48[3];
                    cVar17 = pcVar48[4];
                    cVar18 = pcVar48[5];
                    cVar19 = pcVar48[6];
                    cVar20 = pcVar48[7];
                    cVar21 = pcVar48[8];
                    cVar22 = pcVar48[9];
                    cVar23 = pcVar48[10];
                    cVar24 = pcVar48[0xb];
                    cVar25 = pcVar48[0xc];
                    cVar26 = pcVar48[0xd];
                    cVar27 = pcVar48[0xe];
                    cVar28 = pcVar48[0xf];
                    bVar60 = *pcVar42 + 0xbf;
                    bVar61 = cVar32 + 0xbf;
                    bVar62 = cVar54 + 0xbf;
                    bVar63 = cVar55 + 0xbf;
                    bVar64 = cVar56 + 0xbf;
                    bVar65 = cVar57 + 0xbf;
                    bVar66 = cVar58 + 0xbf;
                    bVar67 = cVar59 + 0xbf;
                    bVar68 = cVar5 + 0xbf;
                    bVar69 = cVar6 + 0xbf;
                    bVar70 = cVar7 + 0xbf;
                    bVar71 = cVar8 + 0xbf;
                    bVar72 = cVar9 + 0xbf;
                    bVar73 = cVar10 + 0xbf;
                    bVar74 = cVar11 + 0xbf;
                    bVar75 = cVar12 + 0xbf;
                    bVar76 = cVar13 + 0xbf;
                    bVar77 = cVar14 + 0xbf;
                    bVar78 = cVar15 + 0xbf;
                    bVar79 = cVar16 + 0xbf;
                    bVar80 = cVar17 + 0xbf;
                    bVar81 = cVar18 + 0xbf;
                    bVar82 = cVar19 + 0xbf;
                    bVar83 = cVar20 + 0xbf;
                    bVar84 = cVar21 + 0xbf;
                    bVar85 = cVar22 + 0xbf;
                    bVar86 = cVar23 + 0xbf;
                    bVar87 = cVar24 + 0xbf;
                    bVar88 = cVar25 + 0xbf;
                    bVar89 = cVar26 + 0xbf;
                    bVar90 = cVar27 + 0xbf;
                    bVar91 = cVar28 + 0xbf;
                    pcVar48 = pcVar44 + (longlong)pcVar41;
                    *pcVar48 = (-((byte)((0x19 < bVar60) * '\x19' | (0x19 >= bVar60) * bVar60) == bVar60) & 0x20U) +
                               *pcVar42;
                    pcVar48[1] = (-((byte)((0x19 < bVar61) * '\x19' | (0x19 >= bVar61) * bVar61) == bVar61) & 0x20U) +
                                 cVar32;
                    pcVar48[2] = (-((byte)((0x19 < bVar62) * '\x19' | (0x19 >= bVar62) * bVar62) == bVar62) & 0x20U) +
                                 cVar54;
                    pcVar48[3] = (-((byte)((0x19 < bVar63) * '\x19' | (0x19 >= bVar63) * bVar63) == bVar63) & 0x20U) +
                                 cVar55;
                    pcVar48[4] = (-((byte)((0x19 < bVar64) * '\x19' | (0x19 >= bVar64) * bVar64) == bVar64) & 0x20U) +
                                 cVar56;
                    pcVar48[5] = (-((byte)((0x19 < bVar65) * '\x19' | (0x19 >= bVar65) * bVar65) == bVar65) & 0x20U) +
                                 cVar57;
                    pcVar48[6] = (-((byte)((0x19 < bVar66) * '\x19' | (0x19 >= bVar66) * bVar66) == bVar66) & 0x20U) +
                                 cVar58;
                    pcVar48[7] = (-((byte)((0x19 < bVar67) * '\x19' | (0x19 >= bVar67) * bVar67) == bVar67) & 0x20U) +
                                 cVar59;
                    pcVar48[8] = (-((byte)((0x19 < bVar68) * '\x19' | (0x19 >= bVar68) * bVar68) == bVar68) & 0x20U) +
                                 cVar5;
                    pcVar48[9] = (-((byte)((0x19 < bVar69) * '\x19' | (0x19 >= bVar69) * bVar69) == bVar69) & 0x20U) +
                                 cVar6;
                    pcVar48[10] = (-((byte)((0x19 < bVar70) * '\x19' | (0x19 >= bVar70) * bVar70) == bVar70) & 0x20U) +
                                  cVar7;
                    pcVar48[0xb] = (-((byte)((0x19 < bVar71) * '\x19' | (0x19 >= bVar71) * bVar71) == bVar71) & 0x20U) +
                                   cVar8;
                    pcVar48[0xc] = (-((byte)((0x19 < bVar72) * '\x19' | (0x19 >= bVar72) * bVar72) == bVar72) & 0x20U) +
                                   cVar9;
                    pcVar48[0xd] = (-((byte)((0x19 < bVar73) * '\x19' | (0x19 >= bVar73) * bVar73) == bVar73) & 0x20U) +
                                   cVar10;
                    pcVar48[0xe] = (-((byte)((0x19 < bVar74) * '\x19' | (0x19 >= bVar74) * bVar74) == bVar74) & 0x20U) +
                                   cVar11;
                    pcVar48[0xf] = (-((byte)((0x19 < bVar75) * '\x19' | (0x19 >= bVar75) * bVar75) == bVar75) & 0x20U) +
                                   cVar12;
                    pcVar42 = pcVar44 + 0x10 + (longlong)pcVar41;
                    *pcVar42 = (-((byte)((0x19 < bVar76) * '\x19' | (0x19 >= bVar76) * bVar76) == bVar76) & 0x20U) +
                               cVar13;
                    pcVar42[1] = (-((byte)((0x19 < bVar77) * '\x19' | (0x19 >= bVar77) * bVar77) == bVar77) & 0x20U) +
                                 cVar14;
                    pcVar42[2] = (-((byte)((0x19 < bVar78) * '\x19' | (0x19 >= bVar78) * bVar78) == bVar78) & 0x20U) +
                                 cVar15;
                    pcVar42[3] = (-((byte)((0x19 < bVar79) * '\x19' | (0x19 >= bVar79) * bVar79) == bVar79) & 0x20U) +
                                 cVar16;
                    pcVar42[4] = (-((byte)((0x19 < bVar80) * '\x19' | (0x19 >= bVar80) * bVar80) == bVar80) & 0x20U) +
                                 cVar17;
                    pcVar42[5] = (-((byte)((0x19 < bVar81) * '\x19' | (0x19 >= bVar81) * bVar81) == bVar81) & 0x20U) +
                                 cVar18;
                    pcVar42[6] = (-((byte)((0x19 < bVar82) * '\x19' | (0x19 >= bVar82) * bVar82) == bVar82) & 0x20U) +
                                 cVar19;
                    pcVar42[7] = (-((byte)((0x19 < bVar83) * '\x19' | (0x19 >= bVar83) * bVar83) == bVar83) & 0x20U) +
                                 cVar20;
                    pcVar42[8] = (-((byte)((0x19 < bVar84) * '\x19' | (0x19 >= bVar84) * bVar84) == bVar84) & 0x20U) +
                                 cVar21;
                    pcVar42[9] = (-((byte)((0x19 < bVar85) * '\x19' | (0x19 >= bVar85) * bVar85) == bVar85) & 0x20U) +
                                 cVar22;
                    pcVar42[10] = (-((byte)((0x19 < bVar86) * '\x19' | (0x19 >= bVar86) * bVar86) == bVar86) & 0x20U) +
                                  cVar23;
                    pcVar42[0xb] = (-((byte)((0x19 < bVar87) * '\x19' | (0x19 >= bVar87) * bVar87) == bVar87) & 0x20U) +
                                   cVar24;
                    pcVar42[0xc] = (-((byte)((0x19 < bVar88) * '\x19' | (0x19 >= bVar88) * bVar88) == bVar88) & 0x20U) +
                                   cVar25;
                    pcVar42[0xd] = (-((byte)((0x19 < bVar89) * '\x19' | (0x19 >= bVar89) * bVar89) == bVar89) & 0x20U) +
                                   cVar26;
                    pcVar42[0xe] = (-((byte)((0x19 < bVar90) * '\x19' | (0x19 >= bVar90) * bVar90) == bVar90) & 0x20U) +
                                   cVar27;
                    pcVar42[0xf] = (-((byte)((0x19 < bVar91) * '\x19' | (0x19 >= bVar91) * bVar91) == bVar91) & 0x20U) +
                                   cVar28;
                    pcVar41 = pcVar41 + (longlong)local_f8;
                  } while (pcVar41 != pcVar43);
                  if ((char *)uVar4 == pcVar43) goto LAB_1801be625;
                  if (pcVar50 == local_d0) {
                    pcVar41 = pcVar43 + (longlong)pcVar44;
                    goto LAB_1801be7ba;
                  }
                }
                pcVar50 = (char *)(local_100 & uVar4);
                pcVar41 = pcVar44 + (longlong)pcVar50;
                do {
                  uVar3 = *(undefined8 *)(pcVar44 + (longlong)pcVar43);
                  bVar60 = (char)uVar3 + 0xbf;
                  cVar54 = (char)((ulonglong)uVar3 >> 8);
                  bVar61 = cVar54 + 0xbf;
                  cVar55 = (char)((ulonglong)uVar3 >> 0x10);
                  bVar62 = cVar55 + 0xbf;
                  cVar56 = (char)((ulonglong)uVar3 >> 0x18);
                  bVar63 = cVar56 + 0xbf;
                  cVar57 = (char)((ulonglong)uVar3 >> 0x20);
                  bVar64 = cVar57 + 0xbf;
                  cVar58 = (char)((ulonglong)uVar3 >> 0x28);
                  bVar65 = cVar58 + 0xbf;
                  cVar59 = (char)((ulonglong)uVar3 >> 0x30);
                  cVar32 = (char)((ulonglong)uVar3 >> 0x38);
                  bVar66 = cVar59 + 0xbf;
                  bVar67 = cVar32 + 0xbf;
                  *(ulonglong *)(pcVar44 + (longlong)pcVar43) =
                       CONCAT17((~-((byte)((bVar67 < 0x1a) * '\x1a' | (bVar67 >= 0x1a) * bVar67) == bVar67) & ' ') +
                                cVar32,CONCAT16((~-((byte)((bVar66 < 0x1a) * '\x1a' | (bVar66 >= 0x1a) * bVar66) ==
                                                   bVar66) & ' ') + cVar59,
                                                CONCAT15((~-((byte)((bVar65 < 0x1a) * '\x1a' | (bVar65 >= 0x1a) * bVar65
                                                                   ) == bVar65) & ' ') + cVar58,
                                                         CONCAT14((~-((byte)((bVar64 < 0x1a) * '\x1a' |
                                                                            (bVar64 >= 0x1a) * bVar64) == bVar64) & ' ')
                                                                  + cVar57,CONCAT13((~-((byte)((bVar63 < 0x1a) * '\x1a'
                                                                                              | (bVar63 >= 0x1a) *
                                                                                                bVar63) == bVar63) & ' '
                                                                                    ) + cVar56,
                                                                                    CONCAT12((~-((byte)((bVar62 < 0x1a)
                                                                                                        * '\x1a' |
                                                                                                       (bVar62 >= 0x1a)
                                                                                                       * bVar62) ==
                                                                                                bVar62) & ' ') + cVar55,
                                                                                             CONCAT11((~-((byte)((bVar61
                                                                                                                 < 0x1a)
                                                                                                                 *
                                                            '\x1a' | (bVar61 >= 0x1a) * bVar61) == bVar61) & ' ') +
                                                            cVar54,(~-((byte)((bVar60 < 0x1a) * '\x1a' |
                                                                             (bVar60 >= 0x1a) * bVar60) == bVar60) & ' '
                                                                   ) + (char)uVar3)))))));
                  pcVar43 = pcVar43 + (longlong)local_1b0;
                } while (pcVar43 != pcVar50);
                if ((char *)uVar4 == pcVar50) goto LAB_1801be625;
              }
LAB_1801be7ba:
              do {
                cVar32 = local_ea;
                if (local_eb <= (byte)(local_ec + *pcVar41)) {
                  cVar32 = '\0';
                }
                *pcVar41 = *pcVar41 + cVar32;
                pcVar41 = pcVar41 + 1;
              } while (pcVar41 != pcVar44 + uVar4);
            }
LAB_1801be625:
            local_278 = (undefined8 ****)local_238._0_8_;
            uStack_270 = local_238._8_8_;
            local_268 = (char *)local_228._0_8_;
            pcStack_260 = (char *)local_228._8_8_;
          }
          FUN_18007ff50(&local_180,local_188[0]);
          if (local_118 < local_2f8) {
            lVar51 = CONCAT71(uStack_30f,local_310);
            pcVar44 = local_2f8 + local_e8;
            lVar37 = lVar51;
            if (local_108 < pcVar44) {
              lVar37 = *(longlong *)(lVar51 + -8);
              if (local_f8 <= (char *)((lVar51 + local_100) - lVar37)) goto LAB_1801bed63;
              pcVar44 = local_2f8 + local_248;
            }
            thunk_FUN_1801f42e0(lVar37,pcVar44);
          }
          local_300 = local_d0;
          local_2f8 = local_118;
          local_310 = local_c1;
          if (local_d8 < local_318) {
            lVar51 = (longlong)local_318 << ((byte)local_e8 & 0x3f);
            pcVar44 = (char *)(local_110 + lVar51);
            lVar37 = local_330[0];
            if (local_108 < pcVar44) {
              lVar37 = *(longlong *)(local_330[0] + -8);
              if (local_f8 <= (char *)((local_330[0] + local_100) - lVar37)) goto LAB_1801bed63;
              pcVar44 = (char *)(lVar51 + local_120);
            }
            thunk_FUN_1801f42e0(lVar37,pcVar44);
          }
          pcVar41 = pcStack_260;
          pcVar44 = local_268;
          if (local_268 != local_d0) {
            uVar4 = local_298._8_8_;
            if (local_298._0_8_ != local_298._8_8_) {
              pppppuVar39 = &local_278;
              if (local_118 < pcStack_260) {
                pppppuVar39 = (undefined8 *****)local_278;
              }
              bVar53 = false;
              puVar46 = (undefined8 *)local_298._0_8_;
              do {
                while (bVar31 = true, bVar53) {
LAB_1801be184:
                  bVar53 = bVar31;
                  puVar46 = puVar46 + 4;
                  if (puVar46 == (undefined8 *)uVar4) {
                    hFindFile = local_240;
                    if (bVar53) {
                      FUN_1801d221b(&DAT_1802a7a5c,&DAT_18029dab0,0xf,0x1d,&DAT_1802a7a98);
                      cVar32 = FUN_1801c0b50(&local_1a8,&DAT_1802a7a5c);
                      hFindFile = local_240;
                      if (cVar32 != '\0') {
                        *local_158 = local_c2;
                        if (local_158[1] == '\0') {
                          FUN_1801d221b(&DAT_1802a7a9c,&DAT_18029db22,0xb,0x17,&DAT_1802a7acc);
                          FUN_1801c0320(local_238,&local_1a8,&DAT_1802a7a9c);
                          pWVar40 = (LPCWSTR)local_238;
                          if (local_d8 < (ulonglong)local_228._8_8_) {
                            pWVar40 = (LPCWSTR)local_238._0_8_;
                          }
                          DVar33 = GetFileAttributesW(pWVar40);
                          local_158[1] = DVar33 != 0xffffffff;
                          if (local_d8 < (ulonglong)local_228._8_8_) {
                            lVar51 = local_228._8_8_ << ((byte)local_e8 & 0x3f);
                            pcVar44 = (char *)(local_110 + lVar51);
                            lVar37 = local_238._0_8_;
                            if (local_108 < pcVar44) {
                              lVar37 = *(longlong *)(local_238._0_8_ + -8);
                              if (local_f8 <= (char *)((local_238._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
                              pcVar44 = (char *)(lVar51 + local_120);
                            }
                            thunk_FUN_1801f42e0(lVar37,pcVar44);
                          }
                        }
                        else {
                          local_158[1] = local_c2;
                        }
                      }
                      uVar38 = 1;
                      DVar33 = local_c8;
                      goto LAB_1801be430;
                    }
                    goto LAB_1801be254;
                  }
                }
                if ((char *)puVar46[2] == pcVar44) {
                  _Buf1 = puVar46;
                  if (local_118 < (char *)puVar46[3]) {
                    _Buf1 = (undefined8 *)*puVar46;
                  }
                  DVar33 = memcmp(_Buf1,pppppuVar39,(size_t)pcVar44);
                  bVar31 = DVar33 == local_c8;
                  goto LAB_1801be184;
                }
                puVar46 = puVar46 + 4;
                bVar53 = false;
                hFindFile = local_240;
              } while (puVar46 != (undefined8 *)uVar4);
            }
          }
          goto LAB_1801be254;
        }
        goto LAB_1801be801;
      }
      goto LAB_1801be865;
    }
  }
  goto LAB_1801be871;
  while( true ) {
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_228 = ZEXT816(0);
    local_238 = ZEXT816(0);
    FUN_1801d221b(&DAT_1802a7ad0,&DAT_18029db7c,10,0x32,&DAT_1802a7b34);
    wsprintfW((LPWSTR)local_238,(LPCWSTR)&DAT_1802a7ad0);
    uVar38 = FUN_1801c0b50(&local_1a8,local_238);
    DVar33 = DVar33 + 1;
    if ((uVar38 & 1) == 0) break;
LAB_1801be430:
    if (5 < DVar33) break;
  }
  pcVar44 = local_198;
  if (((uVar38 & 1) != 0) && (local_158[2] == '\0')) {
    local_158[2] = local_c2;
    pcVar43 = (char *)&local_1a8;
    if (local_2a0 != pcVar43) {
      if (local_d8 < local_190) {
        pcVar43 = (char *)CONCAT44(local_1a8._4_4_,(uint)local_1a8);
      }
      if (*(char **)(local_158 + 0x20) < local_198) {
        FUN_180060d40(local_2a0,local_198);
      }
      else {
        pcVar50 = local_2a0;
        if (local_d8 < *(char **)(local_158 + 0x20)) {
          pcVar50 = *(char **)(local_158 + 8);
        }
        *(char **)(local_158 + 0x18) = local_198;
        FUN_1802079d0(pcVar50,pcVar43);
        *(undefined2 *)(pcVar50 + (longlong)pcVar44 * 2) = local_da;
        hFindFile = local_240;
      }
    }
  }
LAB_1801be254:
  if (local_118 < pcVar41) {
    pcVar44 = pcVar41 + local_e8;
    pppppuVar39 = (undefined8 *****)local_278;
    if (local_108 < pcVar44) {
      pppppuVar39 = (undefined8 *****)local_278[-1];
      if (local_f8 <= (char *)((longlong)local_278 + (local_100 - (longlong)pppppuVar39))) goto LAB_1801bed63;
      pcVar44 = pcVar41 + local_248;
    }
    thunk_FUN_1801f42e0(pppppuVar39,pcVar44);
  }
  if (local_d8 < local_190) {
    lVar51 = CONCAT44(local_1a8._4_4_,(uint)local_1a8);
    lVar49 = (longlong)local_190 << ((byte)local_e8 & 0x3f);
    pcVar44 = (char *)(local_110 + lVar49);
    lVar37 = lVar51;
    if (local_108 < pcVar44) {
      lVar37 = *(longlong *)(lVar51 + -8);
      if (local_f8 <= (char *)((lVar51 + local_100) - lVar37)) goto LAB_1801bed63;
      pcVar44 = (char *)(lVar49 + local_120);
    }
    thunk_FUN_1801f42e0(lVar37,pcVar44);
  }
LAB_1801bdca8:
  DVar33 = FindNextFileW(hFindFile,&local_588);
  if (DVar33 == local_c8) goto LAB_1801be7f8;
  goto LAB_1801bdcc0;
LAB_1801be7f8:
  FindClose(hFindFile);
LAB_1801be801:
  if (local_d8 < pcStack_160) {
    lVar51 = (longlong)pcStack_160 << ((byte)local_e8 & 0x3f);
    pcVar44 = (char *)(local_110 + lVar51);
    lVar37 = local_178._0_8_;
    if (local_108 < pcVar44) {
      lVar37 = *(longlong *)(local_178._0_8_ + -8);
      if (local_f8 <= (char *)((local_178._0_8_ + local_100) - lVar37)) goto LAB_1801bed63;
      pcVar44 = (char *)(lVar51 + local_120);
    }
    thunk_FUN_1801f42e0(lVar37,pcVar44);
  }
LAB_1801be865:
  FUN_180078630(local_298);
LAB_1801be871:
  if (local_d8 < local_2b0) {
    lVar51 = (longlong)local_2b0 << ((byte)local_e8 & 0x3f);
    pcVar44 = (char *)(local_110 + lVar51);
    lVar37 = local_2c8._0_8_;
    if (local_108 < pcVar44) {
      lVar37 = *(longlong *)(local_2c8._0_8_ + -8);
      if (local_f8 <= (char *)((local_2c8._0_8_ + local_100) - lVar37)) {
LAB_1801bed63:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_c8,(uintptr_t)local_d0);
      }
      pcVar44 = (char *)(lVar51 + local_120);
    }
    thunk_FUN_1801f42e0(lVar37,pcVar44);
  }
  return local_158;
}



void Unwind_1801bef60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x380);
  return;
}



void Unwind_1801bf010(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x380);
  return;
}



void Unwind_1801bf0c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x470);
  return;
}



void Unwind_1801bf170(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x470);
  return;
}



void Unwind_1801bf220(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x440);
  return;
}



void Unwind_1801bf2d0(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x380);
  return;
}



void Unwind_1801bf380(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_1801bf420(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x380);
  return;
}



void Unwind_1801bf4d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x470);
  return;
}



void Unwind_1801bf580(void)

{
  Unwind_1801dd394();
}



void Unwind_1801bf5e0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x440);
  return;
}



void Unwind_1801bf690(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x470);
  return;
}



void Unwind_1801bf740(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x470);
  return;
}



void Unwind_1801bf7f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x380);
  return;
}



void Unwind_1801bf8a0(void)

{
  Unwind_1801dd394();
}



void Unwind_1801bf900(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x470);
  return;
}



void Unwind_1801bf9b0(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x380);
  return;
}



void Unwind_1801bfa60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x340);
  return;
}



void Unwind_1801bfb10(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x470);
  return;
}



void Unwind_1801bfbc0(undefined8 param_1,longlong param_2)

{
  FUN_18005a440(param_2 + 0x430);
  return;
}



void Unwind_1801bfc70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2a8);
  return;
}



void Unwind_1801bfd20(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x288);
  return;
}



void Unwind_1801bfdd0(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x410);
  return;
}



void Unwind_1801bfe80(undefined8 param_1,longlong param_2)

{
  FUN_180062880(param_2 + 0x440);
  return;
}



void Unwind_1801bff30(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 800);
  return;
}



void Unwind_1801bffe0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x380);
  return;
}


