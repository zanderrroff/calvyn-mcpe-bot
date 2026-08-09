#include "../include/aerialclient_types.h"


void __cdecl
__FrameHandler4::FrameUnwindToEmptyState(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,FuncInfo4 *param_3)

{
  __uint64 local_res8 [4];

  local_res8[0] = *param_1;
  if (((byte)*param_3 & 1) != 0) {
    local_res8[0] = *(__uint64 *)(*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_1801e02e0(local_res8,param_2,param_3,0xffffffff);
  return;
}


