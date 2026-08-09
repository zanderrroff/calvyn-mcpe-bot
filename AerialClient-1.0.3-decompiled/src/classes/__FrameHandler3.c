#include "../include/aerialclient_types.h"


void __cdecl
__FrameHandler3::FrameUnwindToEmptyState(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;

  uVar1 = FUN_1801dc704();
  uVar2 = FUN_1801dd968(param_3,param_2);
  lVar3 = FUN_1801dc4a8(param_3,uVar2);
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 4);
  }
  FUN_1801e0154(uVar1,param_2,param_3,uVar2);
  return;
}



int __cdecl __FrameHandler3::GetUnwindTryBlock(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  longlong *plVar1;

  plVar1 = (longlong *)FUN_1801dc704();
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1);
}



void __cdecl __FrameHandler3::SetState(__uint64 *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)((longlong)param_2->dispUnwindHelp + *param_1) = param_3;
  return;
}



void __cdecl
__FrameHandler3::SetUnwindTryBlock(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  longlong *plVar1;

  plVar1 = (longlong *)FUN_1801dc704();
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) = param_4;
  }
  return;
}



int __cdecl __FrameHandler3::GetHandlerSearchState(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  int iVar2;
  __uint64 local_res20;

  iVar1 = FUN_1801dd968(param_3);
  FUN_1801dc704(param_1,param_2,param_3,&local_res20);
  iVar2 = GetUnwindTryBlock(param_1,param_2,param_3);
  if (iVar2 < iVar1) {
    SetState(&local_res20,param_3,iVar1);
    SetUnwindTryBlock(param_1,param_2,param_3,iVar1);
  }
  else {
    iVar1 = GetUnwindTryBlock(param_1,param_2,param_3);
  }
  return iVar1;
}


