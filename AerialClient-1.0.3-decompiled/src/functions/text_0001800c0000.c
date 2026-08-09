#include "../include/aerialclient_types.h"


longlong FUN_1800c0550(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_119;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;

  local_110 = 0xcd404519d50be064;
  local_118 = 0x4b80c8e358520d83;
LAB_1800c05f0:
  do {
    while( true ) {
      uVar4 = local_110 ^ 0x4c2cb189668855e7;
      uVar2 = local_110 ^ local_118;
      local_118 = local_118 ^ 0x4c2cb189668855e7;
      local_110 = uVar4;
      if (-0x1cbb40c5c03b51d1 < (longlong)uVar2) break;
      if ((longlong)uVar2 < -0x39496970c846ab8b) {
        if ((longlong)uVar2 < -0x41180becc866ca29) {
          if (uVar2 == 0x86c08dfa8d59ede7) {
            local_108 = 0x666666666666666;
            local_d8 = 0x27;
            local_f8 = 0x28;
            local_c8 = param_1 + 1;
            lVar3 = *param_1;
            uVar2 = param_1[1] - lVar3;
            if (uVar2 >> 0x20 == 0) {
              uVar2 = (uVar2 & 0xffffffff) / 0x28;
            }
            else {
              uVar2 = (longlong)uVar2 / 0x28;
            }
            local_70 = (longlong)param_2 - lVar3;
            local_c0 = uVar2 + 1;
            uVar2 = param_1[2] - lVar3;
            if (uVar2 >> 0x20 == 0) {
              uVar2 = (uVar2 & 0xffffffff) / 0x28;
            }
            else {
              uVar2 = (longlong)uVar2 / 0x28;
            }
            uVar4 = uVar2 >> 1;
            if (local_c0 < uVar4 + uVar2) {
              local_100 = uVar4 + uVar2;
              if (uVar2 <= 0x666666666666666 - uVar4) goto LAB_1800c0d74;
LAB_1800c0db8:
              local_100 = 0x666666666666666;
LAB_1800c0d8a:
              local_110 = 0x7d1902a3f930d315;
            }
            else {
              local_100 = local_c0;
              if (0x666666666666666 - uVar4 < uVar2) goto LAB_1800c0db8;
LAB_1800c0d74:
              local_110 = 0x5b36bd2ccf00002f;
              if (local_100 < 0x666666666666667) goto LAB_1800c0d8a;
            }
            local_118 = 0xabb1ed953379b58f;
          }
          else if (uVar2 == 0x9c124be0e94fded3) {
            local_110 = 0x21f6521c4e6eb3e3;
            if (local_100 < 0x67) {
              local_110 = 0x31a30ef6e2bd1e19;
            }
            local_118 = 0xe1e214a737bfea9a;
          }
        }
        else if (uVar2 == 0xbee7f413379935d7) {
          local_110 = 0x2c5ccc2838661031;
          if (local_119 == '\0') {
            local_110 = 0xf6922aed94917ff2;
          }
          local_118 = 0xcf18731207a2be01;
          local_98 = local_68;
          local_90 = local_b8;
          local_88 = local_e0;
        }
        else if (uVar2 == 0xc01446bb79d15979) {
          local_110 = 0x9c40fbdfcd2770e2;
          if (local_100 != local_108) {
            local_110 = 0x9d618850b0c68825;
          }
          local_118 = 0xe4a7495ebaa10d01;
        }
      }
      else if ((longlong)uVar2 < -0x2e6662ab1f0b86f5) {
        if (uVar2 == 0xc6b6968f37b95475) {
          local_e0 = local_e8;
          local_f0 = (longlong)local_e8 + local_70;
          *(undefined4 *)((longlong)local_e8 + local_70 + 8) = *(undefined4 *)(param_3 + 1);
          *(undefined8 *)((longlong)local_e8 + local_70) = *param_3;
          puVar1 = (undefined8 *)((longlong)local_e8 + local_70 + 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((longlong)local_e8 + local_70 + 0x10) = param_3[2];
          *(undefined8 *)(local_f0 + 0x18) = param_3[3];
          param_3[2] = 0;
          param_3[3] = 0;
          *(undefined8 *)(local_f0 + 0x20) = param_3[4];
          local_68 = (undefined8 *)*local_c8;
          local_b8 = (undefined8 *)*param_1;
          local_119 = local_b8 == param_2;
          local_110 = 0x394b556e7a78f90b;
          if (param_2 != local_68) {
            local_110 = 0x6daf5a5eee763713;
          }
          local_118 = 0xd348ae4dd9ef02c4;
        }
        else if (uVar2 == 0xd0411a51d502f483) {
          local_e8 = (undefined8 *)FUN_1801d61c8(local_b0);
          local_110 = 0xb64ebf1278bf461;
          local_118 = 0xcdd27d7e1032a014;
        }
      }
      else if (uVar2 == 0xd6a8ef36ca49669a) {
        local_b0 = local_f8 * local_100;
        local_110 = 0xbf1c1a0104d52f60;
        if (local_100 != 0) {
          local_110 = 0xe5b8c76eda23a5c6;
        }
        local_118 = 0x79aa8c8e336c7b15;
        local_e8 = (undefined8 *)0x0;
      }
      else if (uVar2 == 0xd1999d54e0f4790b) {
        FUN_1800c0e60(param_1,local_e0,local_c0,local_100);
        return local_f0;
      }
    }
    if (0x398a59ff9333c1f2 < (longlong)uVar2) {
      if ((longlong)uVar2 < 0x72071541417bc42d) {
        if (uVar2 == 0x398a59ff9333c1f3) {
          *(undefined4 *)(local_88 + 1) = *(undefined4 *)(local_90 + 1);
          *local_88 = *local_90;
          local_88[2] = 0;
          local_88[3] = 0;
          local_88[2] = local_90[2];
          local_88[3] = local_90[3];
          local_90[2] = 0;
          local_90[3] = 0;
          local_88[4] = local_90[4];
          local_90 = local_90 + 5;
          local_110 = 0x4d79013b5d62cefb;
          if (local_90 != param_2) {
            local_110 = 0x6f44d858f2acb25;
          }
          local_88 = local_88 + 5;
          local_118 = 0x3f7e147a1c190ad6;
        }
        else if (uVar2 == 0x63304713bfe09eb4) {
          *(undefined4 *)(local_a0 + 1) = *(undefined4 *)(local_a8 + 1);
          *local_a0 = *local_a8;
          local_a0[2] = 0;
          local_a0[3] = 0;
          local_a0[2] = local_a8[2];
          local_a0[3] = local_a8[3];
          local_a8[2] = 0;
          local_a8[3] = 0;
          local_a0[4] = local_a8[4];
          local_a8 = local_a8 + 5;
          local_110 = 0x236240af375ae18a;
          if (local_a8 != param_2) {
            local_110 = 0x91cb9ae8684e0635;
          }
          local_a0 = local_a0 + 5;
          local_118 = 0xf2fbddfbd7ae9881;
        }
      }
      else if (uVar2 == 0x72071541417bc42d) {
        local_98 = (undefined8 *)*local_c8;
        local_110 = 0xd7e57322be6bd926;
        local_118 = 0x34a1cc1881af7716;
      }
      else if (uVar2 == 0x79c6c10e0a678524) {
        lVar3 = FUN_1801d61c8(local_b0 + local_d8);
        local_e8 = (undefined8 *)(local_d8 + lVar3 & 0xffffffffffffffe0);
        local_e8[-1] = lVar3;
        local_110 = 0xbe14ef29644dc7e4;
        local_118 = 0x78a279a653f49391;
      }
      else if (uVar2 == 0x78e7b28177867de3) goto LAB_1800c0e12;
      goto LAB_1800c05f0;
    }
    if ((longlong)uVar2 < -0xf78af4603864a60) {
      if (uVar2 == 0xe344bf3a3fc4ae30) {
        local_60 = local_98;
        local_110 = 0x91ce2b9f54d2a1a8;
        if (param_2 != local_98) {
          local_110 = 0x5ab866037304496a;
        }
        local_118 = 0x4057b6cbb426d8a3;
        local_78 = local_f0;
        local_80 = param_2;
      }
      else if (uVar2 == 0xea03fb23a397fbcf) {
        local_110 = 0x191613b32aa177c3;
        if (local_119 == '\0') {
          local_110 = 0xabbfc9f475b5907c;
        }
        local_118 = 0xc88f8ee7ca550ec8;
        local_a8 = local_b8;
        local_a0 = local_e0;
      }
    }
    else if (uVar2 == 0x1aefd0c8c72291c9) {
      *(undefined4 *)(local_78 + 0x30) = *(undefined4 *)(local_80 + 1);
      *(undefined8 *)(local_78 + 0x28) = *local_80;
      *(undefined8 *)(local_78 + 0x38) = 0;
      *(undefined8 *)(local_78 + 0x40) = 0;
      *(undefined8 *)(local_78 + 0x38) = local_80[2];
      *(undefined8 *)(local_78 + 0x40) = local_80[3];
      local_80[2] = 0;
      local_80[3] = 0;
      *(undefined8 *)(local_78 + 0x48) = local_80[4];
      local_80 = local_80 + 5;
      local_110 = 0x7cbd013f5b3103a8;
      if (local_80 != local_60) {
        local_110 = 0xb7cb4ca37ce7eb6a;
      }
      local_78 = local_78 + 0x28;
      local_118 = 0xad249c6bbbc57aa3;
    }
    else if (uVar2 == 0xf08750b9fc79b5a0) {
LAB_1800c0e12:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
  } while( true );
}



void FUN_1800c0e60(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_e0;
  ulonglong local_d8;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;

  local_d8 = 0xe3f5546ac1a2e229;
  local_e0 = 0xa3f51c09fe9cd84d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = local_d8 ^ 0x172c4bd400f5f88b;
            uVar5 = local_d8 ^ local_e0;
            local_e0 = local_e0 ^ 0x172c4bd400f5f88b;
            local_d8 = uVar6;
            if ((longlong)uVar5 < -0x20291dde74858fd9) break;
            if ((longlong)uVar5 < 0x3eabace8b8354907) {
              if (uVar5 == 0xdfd6e2218b7a7027) {
                local_a0 = local_60 + 0x27;
                local_d8 = 0xedde52ae815560b0;
                local_e0 = 0xd375fe46396029b7;
                local_98 = local_58;
              }
              else if (uVar5 == 0x27fb1f52857e55d7) {
                LOCK();
                plVar2 = local_c8 + 1;
                lVar4 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                local_d8 = 0x2346f8880af0e8b7;
                if ((int)lVar4 == local_cc) {
                  local_d8 = 0x2c7631c405587eff;
                }
                local_e0 = 0xf712b07c4d69fc62;
              }
              else if (uVar5 == 0x2b0f7b1fddb81efb) {
                (**(code **)(*local_c8 + 8))();
                local_d8 = 0xabbfbcee6fba51c;
                local_e0 = 0xdeefb33aa162b1c9;
              }
            }
            else if (uVar5 == 0x3eabace8b8354907) {
              thunk_FUN_1801f42e0(local_98,local_a0);
              local_d8 = 0x79834532058c6d5f;
              local_e0 = 0xd85a160701c7a849;
            }
            else if (uVar5 == 0x511e66f20a4fb77f) {
              local_70 = *local_c0;
              local_d8 = 0xeacbf854dc013ae1;
              if (local_78 == local_70) {
                local_d8 = 0xeeabac9407d4fcec;
              }
              local_e0 = 0x3d11ec55fdbd2a33;
              local_b0 = local_78;
              local_a8 = local_78;
            }
            else if (uVar5 == 0x400048633f3e3a64) {
              local_cc = 1;
              local_c0 = param_1 + 1;
              local_b8 = param_1 + 2;
              local_78 = *param_1;
              local_d8 = 0x7967b3f4c28cfb98;
              if (local_78 == 0) {
                local_d8 = 0x89a08633cc8889f1;
              }
              local_e0 = 0x2879d506c8c34ce7;
            }
          }
          if ((longlong)uVar5 < -0x295e285cceef8364) break;
          if ((longlong)uVar5 < -0x249b7e47b7ce7d63) {
            if (uVar5 == 0xd7da140121bc10d2) {
              local_50 = local_b0;
              local_c8 = *(longlong **)(local_b0 + 0x18);
              local_d8 = 0xedf121b0037a9dbd;
              if (local_c8 == (longlong *)0x0) {
                local_d8 = 0x1e5e7616c19ddcbf;
              }
              local_e0 = 0xca0a3ee28604c86a;
            }
            else if (uVar5 == 0xd6a1d7a331107c9c) {
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          else if (uVar5 == 0xdb6481b84831829d) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)local_c8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            local_d8 = 0xc04901d1d88ff1d8;
            if (iVar3 == local_cc) {
              local_d8 = 0x3f12323a42aefbf6;
            }
            local_e0 = 0x141d49259f16e50d;
          }
          else if (uVar5 == 0xdf500110687bd847) {
            local_a8 = *param_1;
            local_d8 = 0x5d5b2d5a634b9261;
            local_e0 = 0x8ee16d9b992244be;
          }
        }
        if ((longlong)uVar5 < -0x2c45bf3e05962921) break;
        if (uVar5 == 0xd3ba40c1fa69d6df) {
          local_98 = local_a8;
          local_a0 = *local_b8 - local_a8;
          local_d8 = 0x7b4e2ab2a20a5767;
          if (0xfff < local_a0) {
            local_d8 = 0x8a558119bd2c8c84;
          }
          local_e0 = 0x45e5865a1a3f1e60;
          local_68 = local_98;
          local_60 = local_a0;
          local_48 = local_98;
        }
        else if (uVar5 == 0xd45448f4479914d5) {
          local_b0 = local_50 + 0x28;
          local_d8 = 0x4e613d83b5c15352;
          if (local_b0 == local_70) {
            local_d8 = 0x46eb2892fc069bc7;
          }
          local_e0 = 0x99bb2982947d4380;
        }
      }
      if (uVar5 != 0xcfb00743a71392e4) break;
      local_58 = *(longlong *)(local_48 + -8);
      local_d8 = 0x78abd53a13cabed2;
      if ((local_68 - local_58) - 8U < 0x20) {
        local_d8 = 0x71dce0b8a9a0b269;
      }
      local_e0 = 0xae0a029922dac24e;
    }
  } while (uVar5 != 0xa1d95335044bc516);
  *param_1 = param_2;
  *local_c0 = param_2 + param_3 * 0x28;
  *local_b8 = param_2 + param_4 * 0x28;
  return;
}



longlong FUN_1800c14d0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

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

  local_f8 = 0xa0f00bb38e2daa99;
  local_100 = 0x9af7b2992b5b8f3e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar3 = local_f8 ^ 0x71f11aa3d126867b;
            uVar1 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0x71f11aa3d126867b;
            local_f8 = uVar3;
            if (0x2648fa7162a7f194 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x309a180843af99b9) {
              if ((longlong)uVar1 < -0x69645183ec85d6be) {
                if (uVar1 == 0x8724be70657fe5a3) {
                  local_f8 = 0xd4056d47c7acffc9;
                  if (0x1ffffffffffffffb < local_f0) {
                    local_f8 = 0x9208a89d31035ff0;
                  }
                  local_100 = 0x429ec33bd4d6d68b;
                }
                else if (uVar1 == 0x967dd5bf38bf1f7e) {
                  local_e8 = local_b8;
                  local_98 = local_b8 + local_68;
                  *(undefined8 *)(local_b8 + local_68) = *param_3;
                  local_f8 = 0x52a6208e54483a90;
                  if (param_2 != *local_c8) {
                    local_f8 = 0x5ddc5fd196314a72;
                  }
                  local_100 = 0x1af612dd95fe2eb7;
                }
              }
              else if (uVar1 == 0x969bae7c137a2942) {
                lVar2 = FUN_1801d61c8(local_90 + local_d0);
                local_b8 = local_d0 + lVar2 & 0xffffffffffffffe0;
                *(longlong *)(local_b8 - 8) = lVar2;
                local_f8 = 0x666dbf21970e0b78;
                local_100 = 0xf0106a9eafb11406;
              }
              else if (uVar1 == 0xa9ff470243aada9b) {
                local_90 = local_f0 << (local_e0 & 0x3f);
                local_f8 = 0xa3974d7b0ba4e2d3;
                if (local_f0 != local_b0) {
                  local_f8 = 0x6a09b8af5763e942;
                }
                local_100 = 0x35ea98c4331bfdad;
                local_b8 = 0;
              }
            }
            else if ((longlong)uVar1 < -0x285e2545730a2aa4) {
              if (uVar1 == 0xcf65e7f7bc506647) {
                local_58 = local_88;
                local_80 = *local_a0 - local_88;
                local_f8 = 0x156615f7a5403eb3;
                if (local_80 < 0x1000) {
                  local_f8 = 0xf26e781a6e4b7783;
                }
                local_100 = 0x25cfa2a0e2bea2df;
                local_78 = local_88;
                local_50 = local_80;
              }
              else if (uVar1 == 0xd0966ba6e5d5897b) goto LAB_1800c1d47;
            }
            else if (uVar1 == 0xd7a1daba8cf5d55c) {
              thunk_FUN_1801f42e0(local_78,local_80);
              local_f8 = 0xd9576e0a66635989;
              local_100 = 0xb3c0e6e0959457cf;
            }
            else if (uVar1 == 0x8b0c55ce4c1da4b) {
              local_88 = *param_1;
              local_f8 = 0xe894ff73eea2e155;
              if (local_88 != 0) {
                local_f8 = 0x4d66906ea1058954;
              }
              local_100 = 0x820377991d55ef13;
            }
          }
          if (0x48503253c1b61426 < (longlong)uVar1) break;
          if ((longlong)uVar1 < 0x3a07b92aa57625a7) {
            if (uVar1 == 0x2648fa7162a7f195) {
              local_b8 = FUN_1801d61c8(local_90);
              local_f8 = 0x2d932c569f3eddbb;
              local_100 = 0xbbeef9e9a781c2c5;
            }
            else if (uVar1 == 0x30a9b75747fe9c6c) {
              local_48 = *(ulonglong *)(local_88 - 8);
              local_f8 = 0xd54a0a5c2ecf1fe7;
              if (0x1f < (local_58 - local_48) - 8) {
                local_f8 = 0xdd79a1a95750c275;
              }
              local_100 = 0x81d90c33a4b6faef;
            }
          }
          else if (uVar1 == 0x3a07b92aa57625a7) {
            local_d0 = 0x27;
            local_b0 = 0;
            local_e0 = 3;
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
            local_f8 = 0xf3504583e7aad036;
            if (local_f0 < 0x2000000000000000) {
              local_f8 = 0x2f4cc2afa2d23120;
            }
            local_100 = 0x86b385ade178ebbb;
            local_c0 = param_2;
          }
          else if (uVar1 == 0x472a4d0c03cf64c5) {
            FUN_1802079d0(local_e8,*param_1,local_c0 - *param_1);
            FUN_1802079d0(local_98 + 8,param_2);
            local_f8 = 0xb93dfdbddb39254e;
            local_100 = 0xb18d38e13ff8ff05;
          }
        }
        if (0x5fe3206b647814ee < (longlong)uVar1) break;
        if (uVar1 == 0x48503253c1b61427) {
          FUN_1802079d0(local_e8);
          local_f8 = 0x23a6ea4538c7b02d;
          local_100 = 0x2b162f19dc066a66;
        }
        else if (uVar1 == 0x5493066f8a79e508) {
          local_80 = local_50 + local_d0;
          local_78 = local_48;
          local_f8 = 0x45a8f417a221d770;
          local_100 = 0x92092ead2ed4022c;
        }
        else if (uVar1 == 0x5ca0ad9af3e6389a) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_b0);
        }
      }
      if (uVar1 != 0x5fe3206b647814ef) break;
      local_f8 = 0x100da3211a2f83c0;
      if (local_f0 < 0x200) {
        local_f8 = 0xb161e7201df797f6;
      }
      local_100 = 0x97291d517f506663;
    }
    if (uVar1 == 0x6a9788eaf3f70e46) {
      *param_1 = local_e8;
      *local_c8 = local_e8 + local_60 * 8;
      *local_a0 = local_f0 * 8 + local_e8;
      return local_98;
    }
  } while (uVar1 != 0x75e3c02e06d23b8d);
LAB_1800c1d47:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



longlong * FUN_1800c1d50(float *param_1,longlong *param_2,byte *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_48 = 4;
  local_40 = 0x100000001b3;
  uVar7 = ((ulonglong)param_3[3] ^
          ((ulonglong)param_3[2] ^
          ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3;
  lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
  puVar9 = *(undefined8 **)(param_1 + 2);
  if (puVar2 != *(undefined8 **)(param_1 + 2)) {
    if (*(int *)param_3 != *(int *)(puVar2 + 2)) {
      do {
        puVar9 = puVar2;
        if (puVar2 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800c1e45;
        puVar2 = (undefined8 *)puVar2[1];
      } while (*(int *)param_3 != *(int *)(puVar2 + 2));
    }
    *param_2 = (longlong)puVar2;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1800c1e45:
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
    FUN_1800c2fe4(&DAT_1802a3714,&DAT_18027555d,0x18,0x1b,&DAT_1802a3730);
    FUN_1801d7524(&DAT_1802a3714);
  }
  local_58 = param_1 + 2;
  local_50 = (undefined8 *)FUN_1801d61c8(0x30);
  *(undefined4 *)(local_50 + 2) = *(undefined4 *)param_3;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  uVar3 = *(longlong *)(param_1 + 4) + 1;
  puVar2 = local_50;
  if ((longlong)uVar3 < 0) {
    fVar10 = (float)uVar3;
    fVar11 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar3) goto LAB_1800c1f02;
LAB_1800c1eb5:
    if (fVar11 < fVar10 / (float)uVar3) {
LAB_1800c1f17:
      fVar11 = (float)FUN_1801eacf0(fVar10 / fVar11);
      uVar5 = (longlong)(fVar11 - 9.223372e+18) & (longlong)fVar11 >> 0x3f | (longlong)fVar11;
      uVar1 = 8;
      if (8 < uVar5) {
        uVar1 = uVar5;
      }
      uVar5 = uVar3;
      if (uVar3 < uVar1) {
        uVar5 = uVar3 << 3;
        if (uVar3 << 3 <= uVar1) {
          uVar5 = uVar1;
        }
        if (0x1ff < uVar3) {
          uVar5 = uVar1;
        }
      }
      FUN_1800c2800(param_1,uVar5);
      lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar7) << ((byte)local_48 & 0x3f);
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
      puVar2 = local_50;
      puVar9 = *(undefined8 **)(param_1 + 2);
      if (puVar4 != *(undefined8 **)(param_1 + 2)) {
        if (*(int *)(local_50 + 2) != *(int *)(puVar4 + 2)) {
          do {
            puVar9 = puVar4;
            if (puVar4 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800c1fe7;
            puVar4 = (undefined8 *)puVar4[1];
          } while (*(int *)(local_50 + 2) != *(int *)(puVar4 + 2));
        }
        puVar9 = (undefined8 *)*puVar4;
      }
    }
  }
  else {
    fVar10 = (float)(longlong)uVar3;
    fVar11 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar3 < 0) goto LAB_1800c1eb5;
LAB_1800c1f02:
    if (fVar11 < fVar10 / (float)(longlong)uVar3) goto LAB_1800c1f17;
  }
LAB_1800c1fe7:
  local_50 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar2 = puVar9;
  puVar2[1] = puVar4;
  *puVar4 = puVar2;
  puVar9[1] = puVar2;
  lVar6 = *(longlong *)(param_1 + 6);
  lVar8 = (uVar7 & *(ulonglong *)(param_1 + 0xc)) << ((byte)local_48 & 0x3f);
  if (*(undefined8 **)(lVar6 + lVar8) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + lVar8) = puVar2;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar8) == puVar9) {
      *(undefined8 **)(lVar6 + lVar8) = puVar2;
      goto LAB_1800c2043;
    }
    if (*(undefined8 **)(lVar6 + 8 + lVar8) != puVar4) goto LAB_1800c2043;
  }
  *(undefined8 **)(lVar6 + 8 + lVar8) = puVar2;
LAB_1800c2043:
  *param_2 = (longlong)puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  FUN_1800c20e0(&local_58);
  return param_2;
}



void Unwind_1800c20b0(undefined8 param_1,longlong param_2)

{
  FUN_1800c20e0(param_2 + 0x30);
  return;
}



void FUN_1800c20e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_100;
  ulonglong local_f8;
  int local_ec;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;

  local_f8 = 0x7c31d5905c48b76c;
  local_100 = 0x2c6b568fd05a7886;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar6 = local_f8 ^ 0x8af62421a5cef853;
              uVar5 = local_f8 ^ local_100;
              local_100 = local_100 ^ 0x8af62421a5cef853;
              local_f8 = uVar6;
              if ((longlong)uVar5 < 0x30887c7cc4ad636e) break;
              if ((longlong)uVar5 < 0x6a36644c37d32e02) {
                if (uVar5 == 0x30887c7cc4ad636e) {
                  thunk_FUN_1801f42e0(local_b0,local_b8);
                  *local_d8 = 0;
                  local_d8[1] = 0;
                  local_d8[2] = 0;
                  local_c8 = *local_a0;
                  local_f8 = 0xef45cdca273c5235;
                  if (local_c8 == 0) {
                    local_f8 = 0xbc610922ca16390b;
                  }
                  local_100 = 0x3b03adb348e7adf8;
                }
                else if (uVar5 == 0x505a831f8c12cfea) {
                  local_ec = 1;
                  local_a0 = (longlong *)(param_1 + 8);
                  local_e0 = *(longlong *)(param_1 + 8);
                  local_f8 = 0x168acd786815cb94;
                  if (local_e0 == 0) {
                    local_f8 = 0x750ea7993f461691;
                  }
                  local_100 = 0xf26c0308bdb78262;
                }
                else if (uVar5 == 0x66ccc4a604e25d42) {
                  local_80 = local_c0;
                  local_b8 = *local_90 - local_c0;
                  local_f8 = 0x47ae817406b0f9bf;
                  if (0xfff < local_b8) {
                    local_f8 = 0x98a27c0350acc68f;
                  }
                  local_100 = 0x7726fd08c21d9ad1;
                  local_b0 = local_c0;
                  local_78 = local_b8;
                  local_60 = local_80;
                }
              }
              else if ((longlong)uVar5 < 0x6d4fabe71cee9791) {
                if (uVar5 == 0x6a36644c37d32e02) {
                  local_d0 = local_68 + 0x28;
                  local_f8 = 0xa72ce1268bf2b287;
                  if (local_d0 == local_88) {
                    local_f8 = 0x41d919e49f861839;
                  }
                  local_100 = 0x2b737031c764b42b;
                }
                else if (uVar5 == 0x6aaa69d558e2ac12) {
                  local_c0 = *local_d8;
                  local_f8 = 0x1af4253198ef08af;
                  local_100 = 0x7c38e1979c0d55ed;
                }
              }
              else if (uVar5 == 0x6d4fabe71cee9791) {
                LOCK();
                plVar2 = local_e8 + 1;
                lVar4 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                local_f8 = 0xd0a62726d115e37c;
                if ((int)lVar4 == local_ec) {
                  local_f8 = 0x253197c5fdc1b0f6;
                }
                local_100 = 0xba90436ae6c6cd7e;
              }
              else if (uVar5 == 0x7d1e79b662ee9f93) {
                local_b8 = local_78 + 0x27;
                local_b0 = local_70;
                local_f8 = 0x8d0cb8c0e084fd99;
                local_100 = 0xbd84c4bc24299ef7;
              }
            }
            if ((longlong)uVar5 < -0x2bb99f8690240033) break;
            if ((longlong)uVar5 < -0x107b7ef46d4ea3a2) {
              if (uVar5 == 0xd44660796fdbffcd) {
                thunk_FUN_1801f42e0(local_c8,0x30);
                local_f8 = 0x9bcdfe9cd513075c;
                local_100 = 0x1caf5a0d57e293af;
              }
              else if (uVar5 == 0xe4e6ce70d5a249f6) {
                local_d8 = (longlong *)(local_e0 + 0x18);
                local_98 = *(longlong *)(local_e0 + 0x18);
                local_f8 = 0xbbf2578f2514edeb;
                if (local_98 == 0) {
                  local_f8 = 0xe3aed6d92c986b38;
                }
                local_100 = 0x37e8b6a0434394f5;
                local_c8 = local_e0;
              }
            }
            else if (uVar5 == 0xef84810b92b15c5e) {
              local_70 = *(longlong *)(local_60 + -8);
              local_f8 = 0x481c6d3a8fda5804;
              if ((local_80 - local_70) - 8U < 0x20) {
                local_f8 = 0x81a6bb4954c45e85;
              }
              local_100 = 0xfcb8c2ff362ac116;
            }
            else if (uVar5 == 0x290f1fd82613d584) {
              (**(code **)(*local_e8 + 8))();
              local_f8 = 0x8999fab4a10ce05f;
              local_100 = 0xe3af9ef896dfce5d;
            }
          }
          if (-0x73a06ee8b369f955 < (longlong)uVar5) break;
          if (uVar5 == 0x8c1ae12f6657791e) {
            local_90 = (longlong *)(local_e0 + 0x28);
            local_88 = *(longlong *)(local_e0 + 0x20);
            local_d0 = local_98;
            local_f8 = 0xae212c9d797fcca4;
            if (local_98 == local_88) {
              local_f8 = 0x44b2792c310b974a;
            }
            local_100 = 0x227ebd8a35e9ca08;
            local_c0 = local_d0;
          }
          else if (uVar5 == 0x8762a49182f194f3) {
            return;
          }
        }
        if (uVar5 != 0x8c5f91174c9606ac) break;
        local_68 = local_d0;
        local_e8 = *(longlong **)(local_d0 + 0x18);
        local_f8 = 0x56fed4555390bd4c;
        if (local_e8 == (longlong *)0x0) {
          local_f8 = 0x51871bfe78ad04df;
        }
        local_100 = 0x3bb17fb24f7e2add;
      }
      if (uVar5 != 0x9fa1d4af1b077d88) break;
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_f8 = 0x366ceae0c732540b;
      if (iVar3 == local_ec) {
        local_f8 = 0x75559174d6f2af8d;
      }
      local_100 = 0x5c5a8eacf0e17a09;
    }
  } while (uVar5 != 0xb4a4afc5b9f09912);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



void FUN_1800c2800(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  int local_c4;
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong *local_48;

  local_f8 = 0x889f54f8100586ca;
  local_100 = 0x5ae7657a8abd8156;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar8 = local_f8 ^ 0x4f8d7ed9139fffaf;
            uVar5 = local_f8 ^ local_100;
            local_100 = local_100 ^ 0x4f8d7ed9139fffaf;
            local_f8 = uVar8;
            if (-0x1aa71b8f91be88c3 < (longlong)uVar5) break;
            if ((longlong)uVar5 < -0x412c3e9266a36214) {
              if (uVar5 == 0x9378993aaa4e8d04) {
                local_90 = (longlong *)*local_d8;
                local_c4 = (int)*local_70;
                local_f8 = 0x5558c1074c7ddb43;
                if (local_c4 == (int)local_90[2]) {
                  local_f8 = 0x49bad85084b53f3;
                }
                local_100 = 0x579c4bc870a2245e;
                local_60 = local_90;
              }
              else if (uVar5 == 0x9e11f340e44be15b) {
                puVar2 = (undefined8 *)local_f0[1];
                *puVar2 = local_e0;
                puVar3 = (undefined8 *)local_e0[1];
                *puVar3 = local_50;
                puVar4 = (undefined8 *)local_50[1];
                *puVar4 = local_f0;
                local_50[1] = (longlong)puVar3;
                local_e0[1] = (longlong)puVar2;
                local_f0[1] = (longlong)puVar4;
                local_f8 = 0xa121b74a30619e86;
                local_100 = 0x1ff27627a93d036a;
              }
              else if (uVar5 == 0xbce152aa622d46b4) {
                local_f8 = 0xb14b96abbfa1d815;
                if (local_e0 == local_d0) {
                  local_f8 = 0xf9b29d31d76087ef;
                }
                local_100 = 0xdbeb947a2c0dc67a;
                local_98 = local_e0;
              }
            }
            else if ((longlong)uVar5 < -0x2059c8dd7f357e75) {
              if (uVar5 == 0xbed3c16d995c9dec) {
                *local_d8 = local_f0;
                local_f8 = 0xb02045166e3355cd;
                local_100 = 0xcc117bc0c1e1379;
              }
              else if (uVar5 == 0xd27831829ab8079c) {
                local_b0 = 1;
                local_b8 = -1;
                local_e8 = 0x100000001b3;
                local_f8 = 0x883a8e0b586a8353;
                if (0x800000000000000 < param_2) {
                  local_f8 = 0x29a7e0b83dd620c5;
                }
                local_100 = 0x579cb929d8a002d8;
                local_a8 = (longlong *)(param_1 + 0x18);
              }
            }
            else if (uVar5 == 0xdfa6372280ca818b) {
              uVar5 = local_b8 + param_2 | local_b0;
              lVar9 = 0x3f;
              if (uVar5 != 0) {
                for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              bVar7 = 0x40 - ((byte)lVar9 ^ 0x3f);
              lVar9 = local_b0 << (bVar7 & 0x3f);
              local_d0 = *(longlong **)(param_1 + 8);
              FUN_1800bd690(local_a8,2L << (bVar7 & 0x3f));
              local_48 = (ulonglong *)(param_1 + 0x30);
              *(longlong *)(param_1 + 0x30) = local_b8 + lVar9;
              *(longlong *)(param_1 + 0x38) = lVar9;
              local_98 = (longlong *)**(undefined8 **)(param_1 + 8);
              local_f8 = 0xf0129eed0bd53a25;
              if (local_98 == local_d0) {
                local_f8 = 0xb8eb9577631465df;
              }
              local_100 = 0x9ab29c3c9879244a;
            }
            else if (uVar5 == 0xe4ff6e013337b523) {
              *local_a0 = local_f0;
              *local_d8 = local_f0;
              local_f8 = 0x31a6dce862647059;
              local_100 = 0x8d478e42004936ed;
            }
          }
          if ((longlong)uVar5 < 0x3d48786b144606ae) break;
          if ((longlong)uVar5 < 0x6aa002d193ac1e6f) {
            if (uVar5 == 0x3d48786b144606ae) {
              local_90 = (longlong *)local_88[1];
              local_f8 = 0xc1e24c314f9211aa;
              if (local_c4 == (int)local_90[2]) {
                local_f8 = 0x267e228e1d0c9989;
              }
              local_100 = 0xc326c6fe734deeb7;
              local_58 = local_90;
            }
            else if (uVar5 == 0x5307e64d78e977ad) {
              local_50 = (longlong *)*local_60;
              local_f8 = 0xe2a8bba5fb7e2eb8;
              if (local_50 == local_f0) {
                local_f8 = 0xc26a89888669520f;
              }
              local_100 = 0x7cb948e51f35cfe3;
            }
          }
          else if (uVar5 == 0x6aa002d193ac1e6f) {
            local_f0 = local_98;
            local_e0 = (longlong *)*local_98;
            local_70 = local_98 + 2;
            lVar9 = *local_a8;
            lVar6 = (((ulonglong)*(byte *)((longlong)local_98 + 0x13) ^
                     ((ulonglong)*(byte *)((longlong)local_98 + 0x12) ^
                     ((ulonglong)*(byte *)((longlong)local_98 + 0x11) ^
                     ((ulonglong)*(byte *)(local_98 + 2) ^ 0xcbf29ce484222325) * local_e8) * local_e8) * local_e8) *
                     local_e8 & *local_48) * 0x10;
            local_a0 = (undefined8 *)(lVar9 + lVar6);
            local_d8 = (undefined8 *)(lVar9 + lVar6 + 8);
            local_68 = *(longlong **)(lVar9 + lVar6);
            local_f8 = 0xd9cc98045441a497;
            if (local_68 == local_d0) {
              local_f8 = 0xae4b6f3fcd389cb0;
            }
            local_100 = 0x4ab4013efe0f2993;
          }
          else if (uVar5 == 0x7e3b5991e576221d) {
            FUN_1800c2fe4(&DAT_1802a3734,&DAT_1802755a3,0x1c,0x1a,&DAT_1802a3750);
            FUN_1801d7524(&DAT_1802a3734);
          }
        }
        if (0x400a92f6f7d17f9 < (longlong)uVar5) break;
        if (uVar5 == 0xe558e4706e41773e) {
          lVar9 = *local_58;
          puVar2 = (undefined8 *)local_f0[1];
          *puVar2 = local_e0;
          plVar1 = (longlong *)local_e0[1];
          *plVar1 = lVar9;
          puVar3 = *(undefined8 **)(lVar9 + 8);
          *puVar3 = local_f0;
          *(longlong **)(lVar9 + 8) = plVar1;
          local_e0[1] = (longlong)puVar2;
          local_f0[1] = (longlong)puVar3;
          local_f8 = 0x71d984a2f01f54f9;
          local_100 = 0xcd38d6089232124d;
        }
        else if (uVar5 == 0x2c48acf3cdfff1d) {
          local_88 = local_90;
          local_f8 = 0xba2622d55b359714;
          if (local_68 == local_90) {
            local_f8 = 0x836ef391200e8640;
          }
          local_100 = 0x876e5abe4f7391ba;
        }
      }
      if (uVar5 != 0x400a92f6f7d17fa) break;
      puVar2 = (undefined8 *)local_f0[1];
      *puVar2 = local_e0;
      puVar3 = (undefined8 *)local_e0[1];
      *puVar3 = local_88;
      puVar4 = (undefined8 *)local_88[1];
      *puVar4 = local_f0;
      local_88[1] = (longlong)puVar3;
      local_e0[1] = (longlong)puVar2;
      local_f0[1] = (longlong)puVar4;
      *local_a0 = local_f0;
      local_f8 = 0x71f8d42ad8722b1c;
      local_100 = 0xcd198680ba5f6da8;
    }
  } while (uVar5 != 0x2259094bfb6d4195);
  return;
}



void FUN_1800c2fe4(longlong param_1,longlong param_2,uint param_3,uint param_4,int *param_5)

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

  local_60 = 0xd9b9021e9c0fb521;
  local_68 = 0x7c6495d40da8bb5c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_60 ^ 0x76cc536695336574;
          uVar1 = local_60 ^ local_68;
          local_68 = local_68 ^ 0x76cc536695336574;
          local_60 = uVar2;
          if (-0x17d997addec97613 < (longlong)uVar1) break;
          if (uVar1 == 0x87dfc0b6893f52d8) {
            local_6a = local_6b ^ local_6d;
            *(byte *)(param_1 + (int)local_4c) = local_6a;
            local_54 = local_4c + 1;
            local_60 = 0x6c5680c6eec95837;
            if (local_54 == param_4) {
              local_60 = 0x55e1738da6edc832;
            }
            local_68 = 0x8470e894cfffd1d9;
          }
          else if (uVar1 == 0xa5dd97ca91a70e7d) {
            local_60 = 0x876397c1e4504e5a;
            if (*param_5 == 1) {
              local_60 = 0xb093fb90eb88764;
            }
            local_68 = 0x6f45ff93c566c7b4;
            local_54 = 0;
            local_6a = 0;
            local_48 = (int)param_3 + param_2;
          }
          else if (uVar1 == 0xd1919b19691219eb) {
            *param_5 = 1;
            local_60 = 0x3833667c90bedc50;
            local_68 = 0x5c7fa6565b609c80;
          }
        }
        if (0x46bcbc4849019ca6 < (longlong)uVar1) break;
        if (uVar1 == 0xe8266852213689ee) {
          local_69 = local_6a;
          local_4c = local_54;
          local_6d = *(byte *)(param_2 + (int)(local_54 % param_3));
          local_6c = *(char *)(local_48 + (int)local_54);
          local_60 = 0x9d1b8e13a9724410;
          if (((local_54 % param_3) * (uint)local_6d & 1) == 0) {
            local_60 = 0xe3ad68b49de3f285;
          }
          local_68 = 0xdba7325be073d8b7;
        }
        else if (uVar1 == 0x380a5aef7d902a32) {
          local_6b = ~(local_6c + local_69 ^ local_6d);
          local_60 = 0xf16f83d306c498b8;
          local_68 = 0x76b043658ffbca60;
        }
      }
      if (uVar1 != 0x46bcbc4849019ca7) break;
      local_6b = -(local_6c - local_69 ^ local_6d);
      local_60 = 0x9ef9b54daca5d175;
      local_68 = 0x192675fb259a83ad;
    }
  } while (uVar1 != 0x644cc02acbde40d0);
  return;
}



undefined * FUN_1800c32a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) < DAT_1802a3978) {
    FUN_1801d62d8(&DAT_1802a3978);
    if (DAT_1802a3978 == -1) {
      FUN_1800c3370(&DAT_1802a3758);
      atexit((_func_5014 *)&LAB_1800c4a80);
      _Init_thread_footer(&DAT_1802a3978);
      return &DAT_1802a3758;
    }
  }
  return &DAT_1802a3758;
}



void Unwind_1800c3340(void)

{
  FUN_1801d6230(&DAT_1802a3978);
  return;
}



undefined4 * FUN_1800c3370(undefined4 *param_1)

{
  undefined4 local_20;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;

  local_18 = 0xfffffffffffffffe;
  local_19 = 0;
  *param_1 = 0;
  local_20 = 0;
  FUN_1800e3170(param_1 + 2,&local_20,&local_1a);
  local_20 = 0;
  FUN_1800e44d0(param_1 + 0x12,&local_20,&local_1a);
  local_20 = 0;
  FUN_1800e44d0(param_1 + 0x22,&local_20,&local_1a);
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xf;
  *(undefined1 *)(param_1 + 0x42) = local_19;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0xf;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x5f) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0xf;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x6f) = 0;
  *(undefined8 *)(param_1 + 0x71) = 0;
  *(undefined8 *)(param_1 + 0x73) = 0;
  *(undefined8 *)(param_1 + 0x75) = 0;
  *(undefined8 *)(param_1 + 0x77) = 0;
  *(undefined8 *)(param_1 + 0x79) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0xf;
  *(undefined1 *)(param_1 + 0x84) = local_19;
  *(undefined1 *)((longlong)param_1 + 0x211) = local_19;
  *(undefined8 *)(param_1 + 0x85) = 0;
  return param_1;
}



void Unwind_1800c3550(undefined8 param_1,longlong param_2)

{
  FUN_1800e28d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



void Unwind_1800c3570(undefined8 param_1,longlong param_2)

{
  FUN_1800e2d20(*(undefined8 *)(param_2 + 0x28));
  return;
}



void FUN_1800c3590(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_268;
  ulonglong local_260;
  undefined1 local_255;
  uint local_254;
  ulonglong local_250;
  uintptr_t local_248;
  ulonglong local_240;
  longlong local_238;
  ulonglong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong *local_210;
  ulonglong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  ulonglong local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  ulonglong local_160;
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  ulonglong *local_130;
  longlong local_128;
  undefined8 *local_120;
  longlong local_118;
  ulonglong local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  ulonglong *local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;

  local_260 = 0x5c3a7f3022358d08;
  local_268 = 0x7ab818a31db9c2f2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar4 = local_260 ^ 0x395cc03c1415aec7;
                uVar3 = local_260 ^ local_268;
                local_268 = local_268 ^ 0x395cc03c1415aec7;
                local_260 = uVar4;
                if (0x23f6a86ac4ea09ab < (longlong)uVar3) break;
                if ((longlong)uVar3 < -0x16288ca949678bc4) {
                  if ((longlong)uVar3 < -0x4c41c50379d5ed3b) {
                    if ((longlong)uVar3 < -0x543adaa59e8d7338) {
                      if (uVar3 == 0x81e36d17dbe7c4e5) {
                        local_180 = local_68 + local_218;
                        local_260 = 0x9e3958bffbfd61b4;
                        local_268 = 0xae89bb44be921224;
                        local_178 = local_b0;
                      }
                      else if (uVar3 == 0x85440239ea6ade6b) {
                        local_78 = *(longlong *)(local_200 + -8);
                        local_260 = 0xe58b22a295b44fbe;
                        if ((ulonglong)((local_e0 + local_238) - local_78) < local_250) {
                          local_260 = 0x2293414111748aeb;
                        }
                        local_268 = 0x4a5b4821ac325da8;
                      }
                      else if (uVar3 == 0x8ed1d607367f66c5) {
                        thunk_FUN_1801f42e0(*local_120,local_250);
                        return;
                      }
                    }
                    else if ((longlong)uVar3 < -0x502f957cc679edea) {
                      if (uVar3 == 0xabc5255a61728cc8) {
                        thunk_FUN_1801f42e0(local_1a0,local_1a8);
                        local_260 = 0xf102ba8fa5430e2d;
                        local_268 = 0xf64b674bf50bb2cf;
                      }
                      else if (uVar3 == 0xaf32c6903e35d528) {
                        local_1a8 = local_1c0 + local_228;
                        local_260 = 0x8831588cfd4108be;
                        local_268 = 0x23f47dd69c338476;
                        local_1a0 = local_80;
                      }
                    }
                    else if (uVar3 == 0xb25110a2932ed55f) {
                      local_c8 = *(longlong *)(local_1e0 + -8);
                      local_260 = 0x35c798404d358081;
                      if ((ulonglong)((local_118 + local_238) - local_c8) < local_250) {
                        local_260 = 0xf8e7ae1d4bf9ec6c;
                      }
                      local_268 = 0x5532cca24e0c61e;
                    }
                    else if (uVar3 == 0xafd06a8339861216) goto LAB_1800c4a32;
                  }
                  else if ((longlong)uVar3 < -0x3414df30df598931) {
                    if (uVar3 == 0xb3be3afc862a12c5) {
                      thunk_FUN_1801f42e0(local_188,local_190);
                      *local_108 = 0;
                      local_108[1] = 0;
                      local_108[2] = 0;
                      local_260 = 0x3a38cb405c704872;
                      local_268 = 0xd3efb816eae83c4e;
                    }
                    else if (uVar3 == 0xbfe47599d09ea7ef) {
                      plVar1 = (longlong *)*local_168;
                      thunk_FUN_1801f42e0(local_168,local_250);
                      local_260 = 0x907d014dcd3d3c16;
                      if (plVar1 == (longlong *)0x0) {
                        local_260 = 0xdef02455a021be77;
                      }
                      local_268 = 0x2f9974d41da39bf9;
                      local_168 = plVar1;
                    }
                  }
                  else if (uVar3 == 0xcbeb20cf20a676cf) {
                    local_150 = local_1e8 + local_228;
                    local_260 = 0xf75f4288d5e487ee;
                    local_268 = 0x82a8ae26bfae5e00;
                    local_148 = local_128;
                  }
                  else if (uVar3 == 0xcbf8bcc770820303) {
                    *(uintptr_t *)(param_1 + 0xf8) = local_248;
                    *local_e8 = local_240;
                    *(undefined1 *)local_1f0 = local_255;
                    FUN_1800e5850(param_1 + 200);
                    local_d0 = (undefined8 *)(param_1 + 0xa0);
                    local_1e0 = *(longlong *)(param_1 + 0xa0);
                    local_260 = 0xf77f8fdc138eb310;
                    if (local_1e0 == 0) {
                      local_260 = 0x6450e86a349759e6;
                    }
                    local_268 = 0x396b85a7193a4eb2;
                  }
                  else if (uVar3 == 0xce140a7b0ab4fda2) {
                    local_118 = local_1e0;
                    local_1b8 = *(longlong *)(param_1 + 0xb0) - local_1e0;
                    local_260 = 0xf83a2bb50caddf84;
                    if (local_230 < local_1b8) {
                      local_260 = 0xb1c70d9362b865fd;
                    }
                    local_268 = 0x3961d31f196b0a2;
                    local_1b0 = local_1e0;
                    local_110 = local_1b8;
                  }
                }
                else if ((longlong)uVar3 < 0x433b2e57c2d9121) {
                  if ((longlong)uVar3 < -0x76398eafa7a2736) {
                    if (uVar3 == 0xe9d77356b698743c) {
                      local_120 = (undefined8 *)(param_1 + 0x10);
                      plVar1 = *(longlong **)(param_1 + 0x10);
                      *(undefined8 *)plVar1[1] = 0;
                      local_170 = (longlong *)*plVar1;
                      local_260 = 0xae3321a1f1dda208;
                      if (local_170 == (longlong *)0x0) {
                        local_260 = 0x2b84ceb063d08059;
                      }
                      local_268 = 0xa55518b755afe69c;
                    }
                    else if (uVar3 == 0xf1695081bd82258e) {
                      thunk_FUN_1801f42e0(*local_98,local_250);
                      local_100 = (undefined8 *)(param_1 + 0x60);
                      local_1f8 = *(longlong *)(param_1 + 0x60);
                      local_260 = 0x343df937b99f3e9;
                      if (local_1f8 == 0) {
                        local_260 = 0x7c81834260dfe6a2;
                      }
                      local_268 = 0x5f83aad1f8832a36;
                    }
                  }
                  else if (uVar3 == 0xf89c67150585d8ca) {
                    local_a8 = *(longlong *)(local_f0 + -8);
                    local_260 = 0x6f00ed65248be2c5;
                    if ((ulonglong)((local_f0 + local_238) - local_a8) < local_250) {
                      local_260 = 0x10f1d8fac6f2e170;
                    }
                    local_268 = 0x268388f23b27e473;
                  }
                  else if (uVar3 == 0xfbac3684fd3b6f26) {
                    thunk_FUN_1801f42e0(local_1b0,local_1b8);
                    *local_d0 = 0;
                    local_d0[1] = 0;
                    local_d0[2] = 0;
                    local_260 = 0xb39ea083075d7c3d;
                    local_268 = 0xeea5cd4e2af06b69;
                  }
                  else if (uVar3 == 0xfdb482d76f192a72) {
                    local_1b8 = local_110 + local_218;
                    local_260 = 0x596c973e2f526f70;
                    local_268 = 0xa2c0a1bad2690056;
                    local_1b0 = local_c8;
                  }
                }
                else if ((longlong)uVar3 < 0xabd228a90063d46) {
                  if (uVar3 == 0x433b2e57c2d9121) {
                    *(uintptr_t *)(param_1 + 0x200) = local_248;
                    *local_130 = local_240;
                    *(undefined1 *)local_210 = local_255;
                    local_1c8 = (longlong *)(param_1 + 0x178);
                    local_90 = (ulonglong *)(param_1 + 400);
                    local_1c0 = *(ulonglong *)(param_1 + 400);
                    local_260 = 0x802a548548c046fc;
                    if (local_240 < local_1c0) {
                      local_260 = 0xd54bceab25ddf47c;
                    }
                    local_268 = 0x876389411888fa1e;
                  }
                  else if (uVar3 == 0x749ddc45048bce2) {
                    *(uintptr_t *)(param_1 + 0x188) = local_248;
                    *local_90 = local_240;
                    *(undefined1 *)local_1c8 = local_255;
                    local_1d8 = (longlong *)(param_1 + 0x110);
                    local_b8 = (ulonglong *)(param_1 + 0x128);
                    local_1d0 = *(ulonglong *)(param_1 + 0x128);
                    local_260 = 0x44b48c86c4a10f9b;
                    if (local_240 < local_1d0) {
                      local_260 = 0x12deb184e19a4419;
                    }
                    local_268 = 0x7b38c7c5d4e4c255;
                  }
                }
                else if (uVar3 == 0xabd228a90063d46) {
                  local_60 = *(longlong *)(local_f8 + -8);
                  local_260 = 0xcb6ccf7e84c7847f;
                  if ((ulonglong)((local_f8 + local_238) - local_60) < local_250) {
                    local_260 = 0xf4234ee219c68fa2;
                  }
                  local_268 = 0x967f1ae3de2b9e34;
                }
                else if (uVar3 == 0xb663916a4724494) {
                  plVar1 = (longlong *)*local_170;
                  thunk_FUN_1801f42e0(local_170,local_250);
                  local_260 = 0x771602deabe44cdf;
                  if (plVar1 == (longlong *)0x0) {
                    local_260 = 0xf2a1edcf39e96e8e;
                  }
                  local_268 = 0x7c703bc80f96084b;
                  local_170 = plVar1;
                }
                else if (uVar3 == 0x23022993985ccc94) {
                  local_88 = (undefined8 *)(param_1 + 0x50);
                  puVar2 = *(undefined8 **)(param_1 + 0x50);
                  *(undefined8 *)puVar2[1] = 0;
                  local_198 = (longlong *)*puVar2;
                  local_260 = 0x59204748e73ea22e;
                  if (local_198 == (longlong *)0x0) {
                    local_260 = 0x4427f412f5470619;
                  }
                  local_268 = 0x38b3e4910395c076;
                }
              }
              if ((longlong)uVar3 < 0x5739310b90dedc35) break;
              if ((longlong)uVar3 < 0x68c80960bd46d743) {
                if ((longlong)uVar3 < 0x5d3b6dcd2dad1754) {
                  if (uVar3 == 0x5739310b90dedc35) {
                    local_128 = *(longlong *)(local_c0 + -8);
                    local_260 = 0x16b1d8fd30024cc4;
                    if ((ulonglong)((local_c0 + local_238) - local_128) < local_250) {
                      local_260 = 0xba53db3799052d82;
                    }
                    local_268 = 0x71b8fbf8b9a35b4d;
                  }
                  else if (uVar3 == 0x5cc07542831ad9df) {
                    local_70 = local_1f8;
                    local_180 = *(longlong *)(param_1 + 0x70) - local_1f8;
                    local_260 = 0xc1897679137f7092;
                    if (local_230 < local_180) {
                      local_260 = 0xbc60779a2c3afb3b;
                    }
                    local_268 = 0xf139958256100302;
                    local_178 = local_1f8;
                    local_68 = local_180;
                  }
                  else if (uVar3 == 0x5d13d59d5aec1a4b) goto LAB_1800c4a32;
                }
                else if ((longlong)uVar3 < 0x625c5401c7ed1196) {
                  if (uVar3 == 0x5d3b6dcd2dad1754) {
                    local_98 = (undefined8 *)(param_1 + 0x90);
                    plVar1 = *(longlong **)(param_1 + 0x90);
                    *(undefined8 *)plVar1[1] = 0;
                    local_168 = (longlong *)*plVar1;
                    local_260 = 0x80dc4a809156a589;
                    if (local_168 == (longlong *)0x0) {
                      local_260 = 0xce516f98fc4a27e8;
                    }
                    local_268 = 0x3f383f1941c80266;
                  }
                  else if (uVar3 == 0x6193a3d9e4ab6258) {
                    plVar1 = (longlong *)*local_198;
                    thunk_FUN_1801f42e0(local_198,local_250);
                    local_260 = 0xd6290a8dda6656b2;
                    if (plVar1 == (longlong *)0x0) {
                      local_260 = 0xcb2eb9d7c81ff285;
                    }
                    local_268 = 0xb7baa9543ecd34ea;
                    local_198 = plVar1;
                  }
                }
                else if (uVar3 == 0x625c5401c7ed1196) {
                  local_160 = local_208 + local_228;
                  local_260 = 0xebf176cbc4a05661;
                  local_268 = 0xa0e8f7ca62ee7ec7;
                  local_158 = local_60;
                }
                else if (uVar3 == 0x6709230589a11789) goto LAB_1800c4a32;
              }
              else if ((longlong)uVar3 < 0x78da306aeab18c3d) {
                if (uVar3 == 0x68c80960bd46d743) {
                  local_190 = local_d8 + local_218;
                  local_260 = 0xb46aefcdfdc29029;
                  local_268 = 0x7d4d5317be882ec;
                  local_188 = local_78;
                }
                else if (uVar3 == 0x69e67641357e864c) {
                  local_138 = *local_1d8;
                  local_140 = local_1d0 + local_220;
                  local_260 = 0x4a529ffda2e9310;
                  if (local_230 < local_140) {
                    local_260 = 0xb9e984e79dc2771e;
                  }
                  local_268 = 0x4175e3f29847afd4;
                  local_f0 = local_138;
                }
                else if (uVar3 == 0x75f7ecae6a4ad9ee) {
                  thunk_FUN_1801f42e0(local_148,local_150);
                  local_260 = 0x96094b4cb586572d;
                  local_268 = 0x5df1f78bc504542e;
                }
              }
              else if (uVar3 == 0x78da306aeab18c3d) {
                local_158 = *local_210;
                local_160 = local_208 + local_220;
                local_260 = 0x3cf118aa3d47953c;
                if (local_230 < local_160) {
                  local_260 = 0x7d55bb210b0f80dc;
                }
                local_268 = 0x77e899ab9b09bd9a;
                local_f8 = local_158;
              }
              else if (uVar3 == 0x7c941083f6d2c66f) {
                thunk_FUN_1801f42e0(*local_88,local_250);
                local_108 = (undefined8 *)(param_1 + 0x20);
                local_200 = *(longlong *)(param_1 + 0x20);
                local_260 = 0xaadd55be38983a43;
                if (local_200 == 0) {
                  local_260 = 0x91f24e489268fe5;
                }
                local_268 = 0xe0c857b23fbefbd9;
              }
              else if (uVar3 == 0x7cdd9743cb1d4c4a) {
                local_80 = *(longlong *)(local_a0 + -8);
                local_260 = 0xdef3cbf3491b1a7e;
                if ((ulonglong)((local_a0 + local_238) - local_80) < local_250) {
                  local_260 = 0x4d3caf3eb76aa773;
                }
                local_268 = 0xe20e69ae895f725b;
              }
            }
            if ((longlong)uVar3 < 0x45d0ca0d42693cc4) break;
            if ((longlong)uVar3 < 0x4b198101a64e28a6) {
              if (uVar3 == 0x45d0ca0d42693cc4) {
                thunk_FUN_1801f42e0(local_138,local_140);
                local_260 = 0x6c5fd6a132f3451;
                local_268 = 0x3949b629036af99f;
              }
              else if (uVar3 == 0x4a15020c0726c19a) {
                local_e0 = local_200;
                local_190 = *(longlong *)(param_1 + 0x30) - local_200;
                local_260 = 0xa6062fdc1c2deb22;
                if (local_230 < local_190) {
                  local_260 = 0x90fc1719706d278c;
                }
                local_268 = 0x15b815209a07f9e7;
                local_188 = local_200;
                local_d8 = local_190;
              }
              else if (uVar3 == 0x498365971fac06b6) goto LAB_1800c4a32;
            }
            else if (uVar3 == 0x4b198101a64e28a6) {
              thunk_FUN_1801f42e0(local_158,local_160);
              local_260 = 0xd9ff10df7b6ec98b;
              local_268 = 0xddcca23a074358aa;
            }
            else if (uVar3 == 0x4d59e2187a2af839) {
              local_b0 = *(longlong *)(local_1f8 + -8);
              local_260 = 0x49ddc700c8d5f097;
              if ((ulonglong)((local_70 + local_238) - local_b0) < local_250) {
                local_260 = 0xe7124545522d41f7;
              }
              local_268 = 0x66f1285289ca8512;
            }
            else if (uVar3 == 0x522847ea3d550e62) {
              local_1a0 = *local_1c8;
              local_1a8 = local_1c0 + local_220;
              local_260 = 0xe5f639d9d65a4399;
              if (local_230 < local_1a8) {
                local_260 = 0x32ee8bc07c35831b;
              }
              local_268 = 0x4e331c83b728cf51;
              local_a0 = local_1a0;
            }
          }
          if (0x30b0e3fb456f738f < (longlong)uVar3) break;
          if ((longlong)uVar3 < 0x268267933f8c4ffa) {
            if (uVar3 == 0x23f6a86ac4ea09ac) {
              local_148 = *local_1f0;
              local_150 = local_1e8 + local_220;
              local_260 = 0x44dc9e43faa31683;
              if (local_230 < local_150) {
                local_260 = 0x661243e600371358;
              }
              local_268 = 0x312b72ed90e9cf6d;
              local_c0 = local_148;
            }
          }
          else if (uVar3 == 0x268267933f8c4ffa) {
            local_255 = 0;
            local_254 = 0;
            local_230 = 0xfff;
            local_218 = 0x27;
            local_220 = 1;
            local_228 = 0x28;
            local_240 = 0xf;
            local_250 = 0x20;
            local_238 = -8;
            local_248 = 0;
            local_210 = (longlong *)(param_1 + 0x1f0);
            local_130 = (ulonglong *)(param_1 + 0x208);
            local_208 = *(ulonglong *)(param_1 + 0x208);
            local_260 = 0x530a3f128e00ebcf;
            if (0xf < local_208) {
              local_260 = 0x2fe3bd9d189cf6d3;
            }
            local_268 = 0x57398df7f22d7aee;
          }
          else if ((uVar3 == 0x2f2cef52411f7585) || (uVar3 == 0x3094b48a69d5469f)) goto LAB_1800c4a32;
        }
        if (0x3cfda25dc0446824 < (longlong)uVar3) break;
        if (uVar3 == 0x30b0e3fb456f7390) {
          thunk_FUN_1801f42e0(local_178,local_180);
          *local_100 = 0;
          local_100[1] = 0;
          local_100[2] = 0;
          local_260 = 0xbfb05a294db6ff5e;
          local_268 = 0x9cb273bad5ea33ca;
        }
        else if (uVar3 == 0x36725008fdd50503) {
          local_140 = local_1d0 + local_228;
          local_260 = 0xe4650bb4708654e1;
          local_268 = 0xa1b5c1b932ef6825;
          local_138 = local_a8;
        }
      }
      if (uVar3 != 0x3f8c4b431045cdce) break;
      *(uintptr_t *)(param_1 + 0x120) = local_248;
      *local_b8 = local_240;
      *(undefined1 *)local_1d8 = local_255;
      local_1f0 = (longlong *)(param_1 + 0xe8);
      local_e8 = (ulonglong *)(param_1 + 0x100);
      local_1e8 = *(ulonglong *)(param_1 + 0x100);
      local_260 = 0x1902731f2c180eea;
      if (local_240 < local_1e8) {
        local_260 = 0xf10c67b298700445;
      }
      local_268 = 0xd2facfd85c9a0de9;
    }
  } while (uVar3 != 0x3cfda25dc0446825);
LAB_1800c4a32:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_254,local_248);
}



longlong FUN_1800c4a90(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  ulonglong local_68;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_108;
  local_e0 = 0x549ef737bf32bff5;
  local_e8 = 0x761937a9a6be11e2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_e0 ^ 0x53c6ab89aa659d9b;
          uVar1 = local_e0 ^ local_e8;
          local_e8 = local_e8 ^ 0x53c6ab89aa659d9b;
          local_e0 = uVar3;
          if ((longlong)uVar1 < 0x170ff3ebeeb8d4cf) break;
          if (uVar1 == 0x170ff3ebeeb8d4cf) {
            local_90 = *local_a8;
            local_e0 = 0x8820a0bdc5969425;
            if (param_2 == *(ulonglong *)(local_a0 + 0x10)) {
              local_e0 = 0x7ec68d22ff1a43f6;
            }
            local_e8 = 0x87b816f842cd582c;
            local_c0 = local_a0;
            local_b8 = local_a0;
          }
          else if (uVar1 == 0x52514cbe66ec97bb) {
            local_c0 = *(longlong *)(local_88 + 8);
            local_e0 = 0x603e6f99f05922cc;
            if (param_2 == *(ulonglong *)(local_c0 + 0x10)) {
              local_e0 = 0x96d84206cad5f51f;
            }
            local_e8 = 0x6fa6d9dc7702eec5;
            local_b8 = local_c0;
          }
          else if (uVar1 == 0x2287c09e198cae17) {
            local_d8 = 0x100000001b3;
            local_d0 = 0xff;
            local_b0 = param_1 + 0x48;
            lVar2 = ((param_2 >> 0x38 ^
                     (param_2 >> 0x30 & 0xff ^
                     (param_2 >> 0x28 & 0xff ^
                     (param_2 >> 0x20 & 0xff ^
                     (param_2 >> 0x18 & 0xff ^
                     (param_2 >> 0x10 & 0xff ^
                     (param_2 >> 8 & 0xff ^ (param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
                     0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3
                    & *(ulonglong *)(param_1 + 0x78)) * 0x10;
            local_a8 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar2);
            local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar2);
            local_98 = *(longlong *)(param_1 + 0x50);
            local_e0 = 0xc81dd11d035904e0;
            if (local_a0 == local_98) {
              local_e0 = 0x27003f3ee438dd17;
            }
            local_e8 = 0xdf1222f6ede1d02f;
            local_68 = param_2;
          }
        }
        if ((longlong)uVar1 < -0x68164254228e426) break;
        if (uVar1 == 0xf97e9bdabdd71bda) {
          local_e0 = 0xecc5b5c9dd9f20d5;
          if (local_c0 == local_98) {
            local_e0 = 0xd41fb58c72d6a2e5;
          }
          local_e8 = 0x2c0da8447b0fafdd;
          local_c8 = local_c0;
        }
        else if (uVar1 == 0xf98b645875bcc09) {
          local_88 = local_b8;
          local_e0 = 0x727860d51d2ed03e;
          if (local_b8 == local_90) {
            local_e0 = 0xd83b31a3721b4abd;
          }
          local_e8 = 0x20292c6b7bc24785;
        }
      }
      if (uVar1 != 0xf8121dc809d90d38) break;
      local_80 = param_3;
      local_7c = param_3;
      FUN_1800c4f10(local_b0,local_78,&local_68,&local_80);
      local_e0 = 0xfb2c2c64e4ee72b2;
      local_e8 = 0x3be431e9427efdba;
      local_c8 = local_78[0];
    }
  } while (uVar1 != 0xc0c81d8da6908f08);
  if (DAT_1802a0400 != (local_60 ^ (ulonglong)auStack_108)) {
  }
  return local_c8 + 0x18;
}



undefined8 * FUN_1800c4f10(float *param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

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
      if (puVar1 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800c507c;
      puVar1 = (undefined8 *)puVar1[1];
      lVar10 = puVar1[2];
    }
    goto LAB_1800c5257;
  }
LAB_1800c507c:
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
    if (-1 < (longlong)uVar3) goto LAB_1800c5114;
LAB_1800c50ca:
    if (fVar12 < fVar11 / (float)uVar3) {
LAB_1800c5129:
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
            if (puVar7 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1800c51f7;
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
    if ((longlong)uVar3 < 0) goto LAB_1800c50ca;
LAB_1800c5114:
    if (fVar12 < fVar11 / (float)(longlong)uVar3) goto LAB_1800c5129;
  }
LAB_1800c51f7:
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
LAB_1800c5247:
    *(undefined8 **)(lVar6 + 8 + lVar10) = puVar1;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar10) != puVar8) {
      uVar5 = 1;
      if (*(undefined8 **)(lVar6 + 8 + lVar10) != puVar7) goto LAB_1800c5257;
      goto LAB_1800c5247;
    }
    *(undefined8 **)(lVar6 + lVar10) = puVar1;
  }
  uVar5 = 1;
LAB_1800c5257:
  *param_2 = puVar1;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}



void Unwind_1800c52b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30));
  return;
}



undefined8 * FUN_1800c52f0(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 ******ppppppuVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong local_188;
  ulonglong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_150;
  undefined8 *******local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *******local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  uint local_7c;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;

  local_60 = 0xfffffffffffffffe;
  local_7c = 0;
  local_e0 = 0xfff;
  local_d8 = 0x27;
  local_78 = 1;
  local_88 = 0x28;
  local_68 = 0xf;
  local_d0 = 0x20;
  local_c8 = 0xffffffffffffffe0;
  local_150 = -1;
  local_c0 = 0xffe;
  local_b8 = -8;
  local_70 = 0;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar3 = FUN_180111340();
    FUN_180114770(uVar3,param_2,*param_1);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_b0 = param_2;
  puVar4 = (undefined8 *)FUN_180111340();
  plVar11 = (longlong *)*puVar4;
  plVar1 = (longlong *)puVar4[1];
joined_r0x0001800c5485:
  if (plVar11 == plVar1) {
    return local_b0;
  }
  do {
    lVar8 = *plVar11;
    local_148 = (undefined8 *******)0x0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    uVar9 = *(ulonglong *)(param_1 + 0x48);
    plVar12 = (longlong *)(param_1 + 0x44);
    if (local_68 < *(ulonglong *)(param_1 + 0x4a)) {
      plVar12 = *(longlong **)(param_1 + 0x44);
    }
    if ((longlong)uVar9 < (longlong)local_70) {
      FUN_180002ac0();
    }
    if (local_68 < uVar9) {
      uVar5 = local_68 | uVar9;
      uVar13 = 0x16;
      if (0x16 < uVar5) {
        uVar13 = uVar5;
      }
      if (local_c0 < uVar5) {
        ppppppuVar6 = (undefined8 ******)FUN_1801d61c8(local_88 + uVar13);
        pppppppuVar14 = (undefined8 *******)(local_d8 + (longlong)ppppppuVar6 & local_c8);
        pppppppuVar14[-1] = ppppppuVar6;
      }
      else {
        pppppppuVar14 = (undefined8 *******)FUN_1801d61c8(local_78 + uVar13);
      }
      local_148 = pppppppuVar14;
      local_138 = uVar9;
      uStack_130 = uVar13;
      FUN_1802079d0(pppppppuVar14,plVar12,local_78 + uVar9);
LAB_1800c55a4:
      uVar13 = 0;
      do {
        iVar2 = tolower((uint)*(byte *)((longlong)pppppppuVar14 + uVar13));
        *(char *)((longlong)pppppppuVar14 + uVar13) = (char)iVar2;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
    else {
      local_138 = uVar9;
      uStack_130 = local_68;
      local_148 = (undefined8 *******)*plVar12;
      uStack_140 = plVar12[1];
      pppppppuVar14 = &local_148;
      if (uVar9 != local_70) goto LAB_1800c55a4;
    }
    local_98 = local_138;
    local_90 = uStack_130;
    local_a8 = local_148;
    uStack_a0 = (undefined4)uStack_140;
    uStack_9c = uStack_140._4_4_;
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    uVar9 = *(ulonglong *)(lVar8 + 0x18);
    if (local_68 < *(ulonglong *)(lVar8 + 0x20)) {
      puVar4 = *(undefined8 **)(lVar8 + 8);
    }
    else {
      puVar4 = (undefined8 *)(lVar8 + 8);
    }
    if ((longlong)uVar9 < (longlong)local_70) {
      FUN_180002ac0();
    }
    if (local_68 < uVar9) {
      uVar5 = local_68 | uVar9;
      uVar13 = 0x16;
      if (0x16 < uVar5) {
        uVar13 = uVar5;
      }
      if (local_c0 < uVar5) {
        lVar7 = FUN_1801d61c8(local_88 + uVar13);
        puVar15 = (undefined8 *)(local_d8 + lVar7 & local_c8);
        puVar15[-1] = lVar7;
      }
      else {
        puVar15 = (undefined8 *)FUN_1801d61c8(local_78 + uVar13);
      }
      local_128 = puVar15;
      local_118 = uVar9;
      uStack_110 = uVar13;
      FUN_1802079d0(puVar15,puVar4,local_78 + uVar9);
LAB_1800c56d4:
      uVar13 = 0;
      do {
        iVar2 = tolower((uint)*(byte *)((longlong)puVar15 + uVar13));
        *(char *)((longlong)puVar15 + uVar13) = (char)iVar2;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
    else {
      local_118 = uVar9;
      uStack_110 = local_68;
      local_128 = (undefined8 *)*puVar4;
      uStack_120 = puVar4[1];
      puVar15 = &local_128;
      if (uVar9 != local_70) goto LAB_1800c56d4;
    }
    local_168 = local_118;
    local_160 = uStack_110;
    local_178 = (undefined4)local_128;
    uStack_174 = local_128._4_4_;
    uStack_170 = (undefined4)uStack_120;
    uStack_16c = uStack_120._4_4_;
    pppppppuVar14 = &local_a8;
    if (local_68 < local_90) {
      pppppppuVar14 = local_a8;
    }
    puVar4 = (undefined8 *)&local_178;
    if (local_68 < uStack_110) {
      puVar4 = local_128;
    }
    if ((local_118 < local_98) ||
       ((bVar10 = true, local_98 != local_70 &&
        ((lVar16 = local_118 + (longlong)puVar4, lVar7 = thunk_FUN_1801d8570(puVar4,lVar16,pppppppuVar14),
         lVar7 == lVar16 || (lVar7 - (longlong)puVar4 == local_150)))))) {
      local_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      uVar9 = *(ulonglong *)(lVar8 + 0x38);
      if (local_68 < *(ulonglong *)(lVar8 + 0x40)) {
        puVar4 = *(undefined8 **)(lVar8 + 0x28);
      }
      else {
        puVar4 = (undefined8 *)(lVar8 + 0x28);
      }
      if ((longlong)uVar9 < (longlong)local_70) {
        FUN_180002ac0();
      }
      if (local_68 < uVar9) {
        uVar5 = local_68 | uVar9;
        uVar13 = 0x16;
        if (0x16 < uVar5) {
          uVar13 = uVar5;
        }
        if (local_c0 < uVar5) {
          lVar8 = FUN_1801d61c8(local_88 + uVar13);
          puVar15 = (undefined8 *)(local_d8 + lVar8 & local_c8);
          puVar15[-1] = lVar8;
        }
        else {
          puVar15 = (undefined8 *)FUN_1801d61c8(local_78 + uVar13);
        }
        local_108 = puVar15;
        local_f8 = uVar9;
        uStack_f0 = uVar13;
        FUN_1802079d0(puVar15,puVar4,local_78 + uVar9);
LAB_1800c5869:
        uVar13 = 0;
        do {
          iVar2 = tolower((uint)*(byte *)((longlong)puVar15 + uVar13));
          *(char *)((longlong)puVar15 + uVar13) = (char)iVar2;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
      else {
        local_f8 = uVar9;
        uStack_f0 = local_68;
        local_108 = (undefined8 *)*puVar4;
        uStack_100 = puVar4[1];
        puVar15 = &local_108;
        if (uVar9 != local_70) goto LAB_1800c5869;
      }
      local_188 = local_f8;
      local_180 = uStack_f0;
      local_198 = (undefined4)local_108;
      uStack_194 = local_108._4_4_;
      uStack_190 = (undefined4)uStack_100;
      uStack_18c = uStack_100._4_4_;
      pppppppuVar14 = &local_a8;
      if (local_68 < local_90) {
        pppppppuVar14 = local_a8;
      }
      puVar4 = (undefined8 *)&local_198;
      if (local_68 < uStack_f0) {
        puVar4 = local_108;
      }
      if (local_f8 < local_98) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
        if (local_98 != local_70) {
          lVar7 = local_f8 + (longlong)puVar4;
          lVar8 = thunk_FUN_1801d8570(puVar4,lVar7,pppppppuVar14);
          bVar10 = lVar8 - (longlong)puVar4 != local_150 && lVar8 != lVar7;
        }
      }
      if (local_68 < local_180) {
        lVar7 = CONCAT44(uStack_194,local_198);
        uVar9 = local_78 + local_180;
        lVar8 = lVar7;
        if (local_e0 < uVar9) {
          lVar8 = *(longlong *)(lVar7 + -8);
          if (local_d0 <= (ulonglong)((lVar7 + local_b8) - lVar8)) goto LAB_1800c5a71;
          uVar9 = local_180 + local_88;
        }
        thunk_FUN_1801f42e0(lVar8,uVar9);
      }
    }
    if (local_68 < local_160) {
      lVar7 = CONCAT44(uStack_174,local_178);
      uVar9 = local_78 + local_160;
      lVar8 = lVar7;
      if (local_e0 < uVar9) {
        lVar8 = *(longlong *)(lVar7 + -8);
        if (local_d0 <= (ulonglong)((lVar7 + local_b8) - lVar8)) goto LAB_1800c5a71;
        uVar9 = local_160 + local_88;
      }
      thunk_FUN_1801f42e0(lVar8,uVar9);
    }
    if (local_68 < local_90) {
      uVar9 = local_78 + local_90;
      pppppppuVar14 = local_a8;
      if (local_e0 < uVar9) {
        pppppppuVar14 = (undefined8 *******)local_a8[-1];
        if (local_d0 <= (ulonglong)((longlong)local_a8 + (local_b8 - (longlong)pppppppuVar14))) {
LAB_1800c5a71:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_7c,local_70);
        }
        uVar9 = local_90 + local_88;
      }
      thunk_FUN_1801f42e0(pppppppuVar14,uVar9);
    }
    if (bVar10) {
      local_a8 = (undefined8 *******)*plVar11;
      plVar12 = (longlong *)local_b0[1];
      if (plVar12 != (longlong *)local_b0[2]) break;
      FUN_1800e5fa0(local_b0,plVar12,&local_a8);
    }
    plVar11 = plVar11 + 1;
    if (plVar11 == plVar1) {
      return local_b0;
    }
  } while( true );
  *plVar12 = *plVar11;
  local_b0[1] = local_b0[1] + 8;
  plVar11 = plVar11 + 1;
  goto joined_r0x0001800c5485;
}



void Unwind_1800c5aa0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x50);
  return;
}



void Unwind_1800c5ae0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x120);
  return;
}



void Unwind_1800c5b30(undefined8 param_1,longlong param_2)

{
  FUN_1800c5b80(*(undefined8 *)(param_2 + 0x118));
  return;
}



void FUN_1800c5b80(longlong *param_1)

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

  local_90 = 0x126c39837e67cddb;
  local_98 = 0x62a81d963e1235e0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0x462e1ff6068a2dc3;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0x462e1ff6068a2dc3;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x13204ef47656bcad) break;
          if (uVar1 == 0x13204ef47656bcad) {
            thunk_FUN_1801f42e0(local_78,local_80);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_90 = 0x70e31b8abf769d5;
            local_98 = 0x9d765f4803bfbeb1;
          }
          else if (uVar1 == 0x21ee79c2c27e3be3) {
            local_60 = *(longlong *)(local_88 + -8);
            local_90 = 0x27cff870bf93a3d2;
            if ((local_70 - local_60) - 8U < 0x20) {
              local_90 = 0x51af0c5a871f50be;
            }
            local_98 = 0xfeac9576371c9aa3;
          }
          else if (uVar1 == 0x70c424154075f83b) {
            local_88 = *param_1;
            local_90 = 0xf462cc5b5d0b8cf9;
            if (local_88 == 0) {
              local_90 = 0x600449714533aa02;
            }
            local_98 = 0xfa7c2781ed7b7d66;
          }
        }
        if ((longlong)uVar1 < -0x269c92f97770c68f) break;
        if (uVar1 == 0xe1eebdab070f19f) {
          local_70 = local_88;
          local_80 = param_1[2] - local_88;
          local_90 = 0xd5ac2df7dcb43496;
          if (0xfff < local_80) {
            local_90 = 0xe7621ac1689cb3d8;
          }
          local_98 = 0xc68c6303aae2883b;
          local_78 = local_88;
          local_68 = local_80;
        }
        else if (uVar1 == 0xd9636d06888f3971) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (uVar1 != 0xaf03992cb003ca1d) break;
      local_80 = local_68 + 0x27;
      local_90 = 0x9090eff73f80a3f7;
      local_98 = 0x83b0a10349d61f5a;
      local_78 = local_60;
    }
  } while (uVar1 != 0x9a786ef0a848d764);
  return;
}



void FUN_1800c5e80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  size_t _Size;
  undefined *_Buf2;
  undefined *puVar13;
  undefined8 ***local_70 [2];
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  uint local_48;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_48 = 0;
  local_50 = 0xf;
  local_41 = 1;
  plVar4 = (longlong *)FUN_180179ff0();
  FUN_18017a000(plVar4,local_70);
  uVar12 = local_58;
  ppppuVar7 = local_70;
  if (local_50 < local_58) {
    ppppuVar7 = (undefined8 ****)local_70[0];
  }
  if (local_60 < 0xc) {
    if (local_60 != 10) goto LAB_1800c600f;
    _Size = 10;
    puVar13 = &DAT_1802a399c;
    _Buf2 = &DAT_1802a3990;
    puVar8 = &DAT_180275631;
    puVar6 = &DAT_1802a3990;
    uVar10 = 0x13;
    uVar11 = 0xb;
  }
  else {
    if (local_60 != 0xc) goto LAB_1800c600f;
    _Size = 0xc;
    puVar13 = &DAT_1802a398c;
    _Buf2 = &DAT_1802a397c;
    puVar8 = &DAT_1802755fc;
    puVar6 = &DAT_1802a397c;
    uVar10 = 0x14;
    uVar11 = 0xd;
  }
  FUN_1800eb180(puVar6,puVar8,uVar10,uVar11,puVar13);
  uVar3 = memcmp(ppppuVar7,_Buf2,_Size);
  if (uVar3 == local_48) {
    *(undefined1 *)(param_1 + 0x210) = local_41;
    if (((*plVar4 != 0) && (plVar4[1] != 0)) && (plVar4[3] != 0)) {
      lVar1 = *(longlong *)(*plVar4 + 0x30);
      if (lVar1 != 0) {
        cVar2 = FUN_1801b3c30(lVar1,0x200);
        if (cVar2 != '\0') {
          lVar5 = FUN_1801b2b70();
          (*(code *)(lVar5 + 0x13d920))(lVar1);
        }
      }
      *(undefined1 *)(param_1 + 0x211) = local_41;
      uVar12 = local_58;
    }
  }
LAB_1800c600f:
  if (local_50 < uVar12) {
    uVar9 = uVar12 + 1;
    ppppuVar7 = (undefined8 ****)local_70[0];
    if (0xfff < uVar9) {
      ppppuVar7 = (undefined8 ****)local_70[0][-1];
      if (0x1f < (ulonglong)((longlong)local_70[0] + (-8 - (longlong)ppppuVar7))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_48,0);
      }
      uVar9 = uVar12 + 0x28;
    }
    thunk_FUN_1801f42e0(ppppuVar7,uVar9);
  }
  return;
}



void Unwind_1800c60d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x28);
  return;
}



void FUN_1800c6100(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;

  local_58 = 0x7bf3968be6cff9b9;
  local_60 = 0xf764c9c39fdee4d0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_58 ^ local_60;
          local_60 = local_60 ^ 0x53d294d3de1af5c;
          if (-0xd0cf5cf5b27bbca < (longlong)uVar3) break;
          if (uVar3 == 0x8c975f4879111d69) {
            local_61 = 0;
            FUN_1800c63c0(param_1);
            *(undefined1 *)(param_1 + 0x210) = 0;
            *(undefined8 *)(param_1 + 0x148) = 0;
            *(undefined4 *)(param_1 + 0x1a0) = 0;
            *(undefined8 *)(param_1 + 0x198) = 0;
            *(undefined8 *)(param_1 + 0x160) = 0;
            *(undefined1 *)(param_1 + 0xe4) = 0;
            *(undefined1 *)(param_1 + 0x108) = 0;
            *(undefined8 *)(param_1 + 0x120) = 0;
            puVar5 = (undefined1 *)(param_1 + 0x110);
            if (0xf < *(ulonglong *)(param_1 + 0x128)) {
              puVar5 = *(undefined1 **)(param_1 + 0x110);
            }
            *puVar5 = 0;
            lVar2 = FUN_180100330();
            *(undefined1 *)(lVar2 + 0x358) = 0;
            local_50 = (undefined1 *)(param_1 + 0x211);
            local_58 = 0x2bbebcd559dcde20;
            if (*(char *)(param_1 + 0x211) != '\0') {
              local_58 = 0x9b62546398146468;
            }
            local_60 = 0xd94db6e5fd049a17;
          }
          else {
            local_58 = local_58 ^ 0x53d294d3de1af5c;
            if (uVar3 == 0xa78158cf20ac4e53) {
              cVar1 = FUN_1801b8b10();
              local_58 = 0x1a4d07def4de91c2;
              if (cVar1 != '\0') {
                local_58 = 0xffed86cc42df99c0;
              }
              local_60 = 0xe8be0dee5006d5f5;
            }
          }
        }
        if (uVar3 != 0x17538b2212d94c35) break;
        lVar2 = FUN_1801b2b70();
        (*(code *)(lVar2 + 0x11be90))(local_48);
        *local_50 = local_61;
        local_58 = 0xd0578e588c0e65d2;
        local_60 = 0x22a4846828d621e5;
      }
      if (uVar3 != 0x422fe2866510fe7f) break;
      plVar4 = (longlong *)FUN_180179ff0();
      local_48 = *plVar4;
      local_58 = 0xc828abd0e81c32af;
      if (local_48 == 0) {
        local_58 = 0x9d5af92f6c6838cb;
      }
      local_60 = 0x6fa9f31fc8b07cfc;
    }
    local_58 = local_58 ^ 0x53d294d3de1af5c;
  } while (uVar3 != 0xf2f30a30a4d84437);
  return;
}



void FUN_1800c63c0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_e1;
  ulonglong local_e0;
  ulonglong local_d8;
  int local_cc;
  ulonglong local_c8;
  longlong local_c0;
  int local_b4;
  int local_b0;
  uint local_ac;
  undefined8 *local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong local_50;
  longlong *local_48;

  local_d8 = 0xbb47d0199d511d47;
  local_e0 = 0x470ac9d027763f47;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_d8 ^ 0x44900f8ac41de487;
              uVar1 = local_d8 ^ local_e0;
              local_e0 = local_e0 ^ 0x44900f8ac41de487;
              local_d8 = uVar4;
              if ((longlong)uVar1 < 0x45561dda37c606e6) break;
              if ((longlong)uVar1 < 0x4b9f4e8569bdff82) {
                if ((longlong)uVar1 < 0x47faaaf668b4d98e) {
                  if (uVar1 == 0x45561dda37c606e6) {
                    local_d8 = 0x19181005165a7965;
                    if (local_cc == 6) {
                      local_d8 = 0x49b5db7258e24cb5;
                    }
                    local_e0 = 0xda47610215e59df0;
                  }
                  else if (uVar1 == 0x47c057cf397e73f3) {
                    FUN_18007f460(local_a8,local_88);
                    local_d8 = 0x7d6c096d6e8e8862;
                    local_e0 = 0x55909cf407dd7c93;
                  }
                }
                else if (uVar1 == 0x47faaaf668b4d98e) {
                  local_cc = *(int *)(local_c0 + 8);
                  local_d8 = 0x98f51e301546f37d;
                  local_e0 = 0xd36a50b57cfb0cff;
                }
                else if (uVar1 == 0x4ad53257e3ea82b6) {
                  local_50 = *(longlong *)(local_c0 + 0x90);
                  local_d8 = 0xc12391de3de2d6b4;
                  if ((int)local_ac < (int)((ulonglong)(*(longlong *)(local_c0 + 0x98) - local_50) >> 6)) {
                    local_d8 = 0x98fd26e01490db49;
                  }
                  local_e0 = 0xe9df044754b12245;
                }
              }
              else if ((longlong)uVar1 < 0x712222a74021f90c) {
                if (uVar1 == 0x4b9f4e8569bdff82) {
                  local_d8 = 0xebcc5ed7d62bc309;
                  if (local_cc < 7) {
                    local_d8 = 0xd4c849e7a64d7b50;
                  }
                  local_e0 = 0x919e543d918b7db6;
                }
                else if (uVar1 == 0x692d313444213f5b) {
                  local_88 = *(ulonglong *)(param_1 + 0x188);
                  local_80 = local_60;
                  if (local_c8 < *(ulonglong *)(param_1 + 400)) {
                    local_80 = (longlong *)*local_60;
                  }
                  local_58 = local_a8[3];
                  local_d8 = 0x4f3b31600fe25269;
                  if (local_58 < local_88) {
                    local_d8 = 0xea76150c50788663;
                  }
                  local_e0 = 0xadb642c36906f590;
                }
              }
              else if (uVar1 == 0x712222a74021f90c) {
                local_60 = (longlong *)(param_1 + 0x178);
                lVar3 = 0x20;
                if (*(int *)(param_1 + 0x174) == local_b0) {
                  lVar3 = local_a0;
                }
                local_a8 = (undefined8 *)((ulonglong)local_ac * 0x40 + local_50 + lVar3);
                local_d8 = 0xb65f8e5624bcf247;
                if (local_a8 == local_60) {
                  local_d8 = 0xf78e2afb09ce39ed;
                }
                local_e0 = 0xdf72bf62609dcd1c;
              }
              else if (uVar1 == 0x7a520aea47a0bebf) {
                local_d8 = 0x33cfd23da25bacd4;
                if (local_cc == 7) {
                  local_d8 = 0x8e91aa06d69039f7;
                }
                local_e0 = 0xf090a33aa1e44841;
              }
              else if (uVar1 == 0x7e01093c777471b6) {
                local_ac = *(uint *)(param_1 + 0x170);
                local_d8 = 0x453d87f330dc2863;
                if (local_b4 < (int)local_ac) {
                  local_d8 = 0x2714203dba655e24;
                }
                local_e0 = 0x6dc1126a598fdc92;
              }
            }
            if (-0xe022f97762b7bab < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x1d728c5c991b5807) {
              if (uVar1 == 0x93f2ba704d07d145) {
                local_48 = (longlong *)(param_1 + 0x178);
                local_78 = (undefined8 *)(local_c0 + 0x90);
                local_d8 = 0xb0412890d928c56;
                if (local_78 == local_48) {
                  local_d8 = 0x66b38e67b1a2cd34;
                }
                local_e0 = 0x4e4f1bfed8f139c5;
              }
              else if (uVar1 == 0xc35f710703bfe495) {
                local_d8 = 0x5c50dc1554649984;
                local_e0 = 0x74ac498c3d376d75;
              }
            }
            else if (uVar1 == 0xe28d73a366e4a7f9) {
              puVar5 = local_a8;
              if (local_c8 < local_58) {
                puVar5 = (undefined8 *)*local_a8;
              }
              local_a8[2] = local_88;
              FUN_1802079d0(puVar5,local_80,local_88);
              *(undefined1 *)((longlong)puVar5 + local_88) = local_e1;
              local_d8 = 0x38a84573338c166e;
              local_e0 = 0x1054d0ea5adfe29f;
            }
            else if (uVar1 == 0xe6392eb2a7ca57cf) {
              FUN_18007f460(local_78,local_98);
              local_d8 = 0x9a5f310d7ba766e8;
              local_e0 = 0xb2a3a49412f49219;
            }
          }
          if ((longlong)uVar1 < 0x28fc95996953f4f1) break;
          if (uVar1 == 0x28fc95996953f4f1) {
            *local_70 = 0;
            *(int *)(param_1 + 0x170) = local_b4;
            *(int *)(param_1 + 0x174) = local_b0;
            *(longlong *)(param_1 + 0x188) = local_a0;
            puVar2 = (undefined1 *)(param_1 + 0x178);
            if (local_c8 < *(ulonglong *)(param_1 + 400)) {
              puVar2 = *(undefined1 **)(param_1 + 0x178);
            }
            *puVar2 = local_e1;
            lVar3 = FUN_180100330();
            *(undefined1 *)(lVar3 + 0x358) = local_e1;
            local_d8 = 0x34110cfd47be028b;
            local_e0 = 0xc09169e294be1165;
          }
          else if (uVar1 == 0x454b0977d563b593) {
            local_98 = *(ulonglong *)(param_1 + 0x188);
            local_90 = local_48;
            if (local_c8 < *(ulonglong *)(param_1 + 400)) {
              local_90 = (longlong *)*local_48;
            }
            local_68 = *(ulonglong *)(local_c0 + 0xa8);
            local_d8 = 0x1c5a5ba0188131e3;
            if (local_68 < local_98) {
              local_d8 = 0xb9ea57a369fe27a;
            }
            local_e0 = 0xeda78bc89155b5b5;
          }
        }
        if (uVar1 != 0xf1fdd06889d48456) break;
        puVar5 = local_78;
        if (local_c8 < local_68) {
          puVar5 = (undefined8 *)*local_78;
        }
        *(ulonglong *)(local_c0 + 0xa0) = local_98;
        FUN_1802079d0(puVar5,local_90,local_98);
        *(undefined1 *)((longlong)puVar5 + local_98) = local_e1;
        local_d8 = 0xd6b6045e742df5e6;
        local_e0 = 0xfe4a91c71d7e0117;
      }
      if (uVar1 != 0xfc4d19c9ba272200) break;
      local_e1 = 0;
      local_b0 = 0;
      local_b4 = -1;
      local_c8 = 0xf;
      local_a0 = 0;
      local_70 = (undefined8 *)(param_1 + 0x168);
      local_c0 = *(longlong *)(param_1 + 0x168);
      local_d8 = 0xb406226e4b827091;
      if (local_c0 == 0) {
        local_d8 = 0x77ced87f036baf1;
      }
      local_e0 = 0xf3fc88982336a91f;
    }
  } while (uVar1 != 0xf480651fd30013ee);
  return;
}



int FUN_1800c6c00(void)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  int local_b0;
  int local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_94;
  longlong local_90;
  longlong local_88;
  void *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_d8;
  local_a0 = 0x5cb70e6c7835fb05;
  local_a8 = 0xc4fe39587645831e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar5 = local_a0 ^ 0xb607d4b3b8e67d81;
            uVar3 = local_a0 ^ local_a8;
            local_a8 = local_a8 ^ 0xb607d4b3b8e67d81;
            local_a0 = uVar5;
            if ((longlong)uVar3 < 0x472d9050fa69d23c) break;
            if ((longlong)uVar3 < 0x55a30b74ac51e0ce) {
              if (uVar3 == 0x472d9050fa69d23c) {
                local_a0 = 0xb47f792623eefac3;
                if (local_90 < 5) {
                  local_a0 = 0x8b34378f6f62def5;
                }
                local_a8 = 0x641a9dd643f83143;
              }
              else if (uVar3 == 0x53e66d22a01b442d) {
                local_b8 = &DAT_1802a39c8;
                FUN_1800eb180(&DAT_1802a39c0,&DAT_1802756d2,0x1c,5);
                iVar2 = memcmp(&DAT_1802a39c0,local_80,4);
                local_ac = local_b0;
                if (iVar2 != local_b0) {
                  local_ac = local_94;
                }
                local_a0 = 0x25d6e89139a35568;
                local_a8 = 0x2fc921838f98c58b;
              }
            }
            else if (uVar3 == 0x55a30b74ac51e0ce) {
              local_b8 = &DAT_1802a39bc;
              FUN_1800eb180(&DAT_1802a39b0,&DAT_18027569a,0x1c,10);
              local_68 = &DAT_1802a39b0;
              local_60 = 9;
              local_88 = FUN_1801076d0(local_70,&local_68);
              local_a0 = 0x96136ada214c0007;
              if (local_88 == 0) {
                local_a0 = 0xb8c6d3af116d2129;
              }
              local_a8 = 0xb2d91abda756b1ca;
              local_ac = local_b0;
            }
            else if (uVar3 == 0x5fed4e7cfdaab777) {
              local_b8 = &DAT_1802a39d4;
              FUN_1800eb180(&DAT_1802a39cc,&DAT_180275703,0x1e,6);
              iVar2 = memcmp(&DAT_1802a39cc,local_80,5);
              local_ac = 0x65;
              if (iVar2 != local_b0) {
                local_ac = local_94;
              }
              local_a0 = 0x93cd5df57f3dcfca;
              local_a8 = 0x99d294e7c9065f29;
            }
            else if (uVar3 == 0x666a8b9f19047046) {
              lVar1 = *(longlong *)(local_88 + 0x98);
              lVar4 = (longlong)*(int *)(local_88 + 0x90) * 0x20;
              if (*(ulonglong *)(lVar1 + 0x18 + lVar4) < 0x10) {
                local_80 = (void *)(lVar1 + lVar4);
              }
              else {
                local_80 = *(void **)(lVar1 + lVar4);
              }
              local_90 = *(longlong *)(lVar1 + 0x10 + lVar4);
              local_a0 = 0x3a0e4f6e953d1fce;
              local_a8 = 0x7d23df3e6f54cdf2;
            }
          }
          if (-0x10d155a6d365104b < (longlong)uVar3) break;
          if (uVar3 == 0x88ed04bf4327ab10) {
            local_a0 = 0x4ab66bf242cb9bc1;
            local_a8 = 0x40a9a2e0f4f00b22;
            local_ac = 0x66;
          }
          else if (uVar3 == 0x984937340e70781b) {
            local_b0 = 0;
            local_94 = 0x66;
            local_78 = FUN_180111340();
            local_b8 = &DAT_1802a39ac;
            FUN_1800eb180(&DAT_1802a39a0,&DAT_180275663,0x17,9);
            local_58 = &DAT_1802a39a0;
            local_50 = 8;
            local_70 = FUN_180114180(local_78,&local_58);
            local_a0 = 0x5b4dad078feb1a8f;
            if (local_70 == 0) {
              local_a0 = 0x4f16f6195816aa2;
            }
            local_a8 = 0xeeea67323bafa41;
            local_ac = local_b0;
          }
          else if (uVar3 == 0xd065e4f06016cb80) {
            local_a0 = 0x5c09472bc5a7a099;
            if (local_90 == 5) {
              local_a0 = 0x8b090de87b2abcfe;
            }
            local_a8 = 0xd4e4439486800b89;
          }
        }
        if (uVar3 != 0xef2eaa592c9aefb6) break;
        local_a0 = 0x35bae3b342ec818;
        if (local_90 == 4) {
          local_a0 = 0xd850c7a6d7122725;
        }
        local_a8 = 0x8bb6aa8477096308;
      }
      if (uVar3 != 0x24ca7067861ab1cd) break;
      local_a0 = 0xe24073c473cb1bf;
      if (*(int *)(local_88 + 8) == 3) {
        local_a0 = 0x625145b1e803511a;
      }
      local_a8 = 0x43bce2ef107215c;
      local_ac = local_b0;
    }
  } while (uVar3 != 0xa1fc912b63b90e3);
  if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_d8)) {
  }
  return local_ac;
}



void FUN_1800c71f0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong local_3f0;
  ulonglong local_3e8;
  undefined1 local_3d9;
  float local_3d8;
  float local_3d4;
  uintptr_t local_3d0;
  uint local_3c8;
  float local_3c4;
  ulonglong local_3c0;
  longlong local_3b8;
  int local_3b0;
  int local_3ac;
  undefined4 *local_3a8;
  longlong local_3a0;
  float local_394;
  float local_390;
  float local_38c;
  undefined4 *local_388;
  longlong *local_380;
  undefined4 *local_378;
  undefined4 *local_370;
  longlong local_368;
  ulonglong local_360;
  longlong local_358;
  ulonglong local_350;
  longlong *local_348;
  float *local_340;
  undefined4 *local_338;
  undefined4 *local_330;
  undefined4 *local_328;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300 [4];
  longlong *local_2f0;
  ulonglong local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined4 *local_2d0;
  float *local_2c8;
  ulonglong local_2c0;
  longlong *local_2b8;
  ulonglong local_2b0;
  float *local_2a8;
  float *local_2a0;
  float *local_298;
  longlong local_290;
  ulonglong local_288;
  longlong local_280;
  ulonglong local_278;
  longlong local_270;
  ulonglong local_268;
  longlong local_260;
  longlong local_258;
  undefined4 *local_250;
  undefined4 *local_248;
  undefined4 *local_240;
  undefined4 *local_238;
  longlong local_230;
  longlong local_228;
  undefined4 *local_220;
  undefined8 local_218;
  undefined4 local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float local_1f4;
  float fStack_1f0;
  float local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  longlong local_1c0;
  char *local_1b8;
  float *local_1b0;
  ulonglong *local_1a8;
  longlong local_1a0;
  undefined4 *local_198;
  undefined4 *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  uint *local_170;
  undefined1 *local_168;
  ulonglong *local_160;
  longlong local_158;
  ulonglong *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined4 *local_110;
  float local_108 [4];
  float local_f8 [4];
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8 [38];

  local_3e8 = 0x121e9d1fde2fe00e;
  local_3f0 = 0xe077b447298a64d9;
  local_1c0 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                lVar10 = local_1c0;
                uVar15 = local_3e8 ^ 0xe6347d6dcd3c001f;
                uVar9 = local_3e8 ^ local_3f0;
                local_3f0 = local_3f0 ^ 0xe6347d6dcd3c001f;
                local_3e8 = uVar15;
                if (-0x897b9a021c87ddd < (longlong)uVar9) break;
                if ((longlong)uVar9 < -0x438221a172320a4d) {
                  if ((longlong)uVar9 < -0x6068da7ee35d07d3) {
                    if ((longlong)uVar9 < -0x7456a392b69ddf7c) {
                      if ((longlong)uVar9 < -0x787cdd1f05be9c80) {
                        if (uVar9 == 0x8045b9af15bca7f8) {
                          fVar18 = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x150);
                          uVar16 = -(uint)(local_3d8 < fVar18);
                          fVar18 = (*local_2c8 - *(float *)(param_1 + 0x150)) /
                                   (float)(~uVar16 & (uint)local_3d8 | (uint)fVar18 & uVar16);
                          local_390 = (float)((uint)local_3d8 & -(uint)(local_3d8 < fVar18) |
                                             ~-(uint)(local_3d8 < fVar18) &
                                             ((uint)local_3d4 & -(uint)(fVar18 < local_3d4) |
                                             ~-(uint)(fVar18 < local_3d4) & (uint)fVar18));
                          local_3ac = *(int *)(local_3a0 + 8);
                          local_3e8 = 0x8a8a5841f433619c;
                          local_3f0 = 0x123042cbd514118;
                        }
                        else if (uVar9 == 0x872b97c819c753bf) {
                          *(uintptr_t *)(local_230 + 0x40) = local_3d0;
                          *local_1a8 = local_3c0;
                          *(undefined1 *)local_2f0 = local_3d9;
                          local_290 = local_230 + 0x78;
                          local_3e8 = 0x529431a2a8d68c7f;
                          if (local_290 == local_178) {
                            local_3e8 = 0xcef29eb3776c085c;
                          }
                          local_3f0 = 0xd83d104284c0f8f6;
                        }
                      }
                      else if (uVar9 == 0x878322e0fa416380) {
                        local_31c = *local_1b0;
                        local_3e8 = 0xb948db45224365da;
                        if (local_3d4 < local_31c) {
                          local_3e8 = 0x747e0d9536a50103;
                        }
                        if (*local_1b8 != '\0') {
                          local_3e8 = 0x747e0d9536a50103;
                        }
                        local_3f0 = 0xa6881f115be64936;
                      }
                      else if (uVar9 == 0x8aa921e02c167489) {
                        local_230 = local_290;
                        local_2f0 = (longlong *)(local_290 + 0x30);
                        local_1a8 = (ulonglong *)(local_290 + 0x48);
                        local_2e8 = *(ulonglong *)(local_290 + 0x48);
                        local_3e8 = 0x5906597567e4a96f;
                        if (local_3c0 < local_2e8) {
                          local_3e8 = 0xf7d63625852d58d6;
                        }
                        local_3f0 = 0xde2dcebd7e23fad0;
                      }
                    }
                    else if ((longlong)uVar9 < -0x6e4b05e1555832c8) {
                      if (uVar9 == 0x8ba95c6d49622084) {
                        local_3e8 = 0x9eac8e06fc901c9f;
                        if (local_3ac < 2) {
                          local_3e8 = 0xf2594b6c9b234f25;
                        }
                        local_3f0 = 0xdb19ee60ea806e2a;
                      }
                      else if (uVar9 == 0x8fb85f674fff5107) {
                        *(uintptr_t *)(local_3a8 + 0x10) = local_3d0;
                        *local_160 = local_3c0;
                        *(undefined1 *)local_2d8 = local_3d9;
                        uVar2 = *local_2d0;
                        uVar3 = local_2d0[1];
                        uVar4 = local_2d0[2];
                        uVar5 = local_2d0[3];
                        *(undefined1 (*) [16])(local_2d8 + 2) = *(undefined1 (*) [16])(local_2d0 + 4);
                        *(undefined4 *)local_2d8 = uVar2;
                        *(undefined4 *)((longlong)local_2d8 + 4) = uVar3;
                        *(undefined4 *)(local_2d8 + 1) = uVar4;
                        *(undefined4 *)((longlong)local_2d8 + 0xc) = uVar5;
                        *(uintptr_t *)(local_370 + 0x2e) = local_3d0;
                        *(ulonglong *)(local_370 + 0x30) = local_3c0;
                        *(undefined1 *)local_2d0 = local_3d9;
                        local_3e8 = 0xeb296fc2c24397d4;
                        local_3f0 = 0x114171004cba0b17;
                      }
                    }
                    else if (uVar9 == 0x9af8105cee35aba9) {
                      uVar12 = FUN_180100330();
                      cVar6 = FUN_180101a00(uVar12,local_3b0);
                      local_3e8 = 0xfb77f432287536e1;
                      if (cVar6 != '\0') {
                        local_3e8 = 0xded380ce1d55a8d5;
                      }
                      local_3f0 = 0xc1fb26df642b4c5;
                    }
                    else if (uVar9 == 0x9b0a021cd60943f8) {
                      fVar18 = local_394;
                      if (local_394 <= local_38c) {
                        fVar18 = local_38c;
                      }
                      *(uint *)(local_3a0 + 0x90) =
                           -(uint)(local_30c < local_38c) & (uint)local_30c |
                           ~-(uint)(local_30c < local_38c) & (uint)fVar18;
                      local_3e8 = 0xd0891528e782278d;
                      local_3f0 = 0xbd0d408644f96e81;
                    }
                    else if (uVar9 == 0x91b4fa1eaaa7cd38) goto LAB_1800c947f;
                  }
                  else if ((longlong)uVar9 < -0x4b146689e8779e9a) {
                    if ((longlong)uVar9 < -0x54acd86b75b09108) {
                      if (uVar9 == 0xa7b4d86fc2c7968e) {
                        plVar11 = (longlong *)FUN_180179ff0();
                        local_180 = *plVar11;
                        local_3e8 = 0xaa1b329b9b5d5131;
                        if (local_180 == 0) {
                          local_3e8 = 0xf03c9090a7f71725;
                        }
                        local_3f0 = 0x77bfb2705db674a5;
                      }
                      else if (uVar9 == 0x9f9725811ca2f82d) {
                        return;
                      }
                    }
                    else if (uVar9 == 0xab5327948a4f6ef8) {
                      local_288 = local_2b0 + local_358;
                      local_3e8 = 0xc6920526aecee6b4;
                      local_3f0 = 0xf9308a9fd8bb9303;
                      local_280 = local_158;
                    }
                    else if (uVar9 == 0xb4d0dbed770f756f) {
                      FUN_1800d0c10(local_380,&local_218,local_338,local_190);
                      local_2e0 = (longlong *)(param_1 + 0x148);
                      local_3e8 = 0xec4306ee7e196e83;
                      if (*(longlong *)(param_1 + 0x148) == 0) {
                        local_3e8 = 0xc3c1c5a1722c5bfc;
                      }
                      local_3f0 = 0xae45900fd15712f0;
                    }
                  }
                  else if ((longlong)uVar9 < -0x469768e771b4d4f3) {
                    if (uVar9 == 0xb4eb997617886166) {
                      local_394 = *(float *)(local_3a0 + 0x98);
                      local_30c = *(float *)(local_3a0 + 0x9c);
                      local_38c = (local_30c - local_394) * local_390 + local_394;
                      local_304 = *(float *)(local_3a0 + 0xa0);
                      local_3e8 = 0x5b7f3b57714218ce;
                      if (local_3d4 < local_304) {
                        local_3e8 = 0x33cb56dcbd73d140;
                      }
                      local_3f0 = 0xc075394ba74b5b36;
                      local_308 = local_38c;
                    }
                    else if (uVar9 == 0xb7113e66bc77ec75) {
                      local_148 = *(longlong *)(local_138 + -8);
                      local_3e8 = 0xfc6e7876a0424168;
                      if ((ulonglong)((local_138 + local_368) - local_148) < local_360) {
                        local_3e8 = 0x628a89aad24e31e2;
                      }
                      local_3f0 = 0x3f5a01918232627c;
                    }
                  }
                  else if (uVar9 == 0xb96897188e4b2b0d) {
                    local_3e8 = 0xb8b422de0f0a92d2;
                    if (local_378 == local_388) {
                      local_3e8 = 0x1549e4793ab8a7e5;
                    }
                    local_110 = local_378;
                    local_3f0 = 0xa1993f944db7d28a;
                    local_338 = local_388;
                  }
                  else if (uVar9 == 0xba8ff7a7cfc3f4c2) {
                    local_278 = local_2e8 + local_358;
                    local_3e8 = 0x73396d5e136b35f4;
                    local_3f0 = 0xcf44b3009ea6c047;
                    local_270 = local_1a0;
                  }
                }
                else if ((longlong)uVar9 < -0x204482b939e1fcab) {
                  if ((longlong)uVar9 < -0x3912a6e11deff210) {
                    if ((longlong)uVar9 < -0x3ccb8618dd8fdcec) {
                      if (uVar9 == 0xbc7dde5e8dcdf5b3) {
                        thunk_FUN_1801f42e0(local_270,local_278);
                        local_3e8 = 0xe1feb408dd9a5a9f;
                        local_3f0 = 0x66d523c0c45d0920;
                      }
                      else if (uVar9 == 0xbfe154f563dfbae1) {
                        thunk_FUN_1801f42e0(local_260,local_268);
                        local_3e8 = 0x62b3692a728f1dca;
                        local_3f0 = 0xed0b364d3d704ccd;
                      }
                    }
                    else if (uVar9 == 0xc3751a802b9fa722) {
                      local_340 = (float *)(local_1c0 + 0x10);
                      local_2a8 = &local_1c4;
                      fVar17 = (float)FUN_180172570();
                      fVar18 = *(float *)(lVar10 + 0x14);
                      fVar19 = (fVar18 + -40.0) / (fVar17 * 560.0);
                      uVar16 = -(uint)(fVar19 < local_3d8);
                      fVar17 = (float)(~uVar16 & (uint)local_3d8 | (uint)fVar19 & uVar16) * fVar17;
                      *local_2a8 = fVar17;
                      uVar16 = (uint)local_3d0;
                      local_108[0] = fVar17 * 900.0;
                      local_108[1] = fVar17 * 560.0;
                      local_108[2] = fVar17 * 0.0;
                      local_108[3] = fVar17 * 0.0;
                      fVar22 = (*local_340 - local_108[uVar16 & 3]) * 0.5;
                      uVar7 = (uint)local_3b8;
                      fVar19 = (fVar18 - local_108[uVar7 & 3]) * 0.5 + (local_3d8 - local_3c4) * 58.0 * fVar17;
                      local_300[uVar16 & 1] = fVar22;
                      local_300[uVar7 & 1] = fVar19;
                      fVar20 = (float)local_300._0_8_ + fVar17 * 900.0;
                      fVar21 = SUB84(local_300._0_8_,4) + fVar17 * 560.0;
                      local_1d8 = fVar22;
                      local_1d4 = fVar19;
                      local_f8[0] = fVar20;
                      local_f8[1] = fVar21;
                      local_f8[2] = fVar17 * 0.0 + 0.0;
                      local_f8[3] = fVar17 * 0.0 + 0.0;
                      fVar18 = local_f8[uVar16 & 3];
                      local_1d0 = fVar18;
                      local_208 = fVar22;
                      local_204 = fVar19;
                      local_200 = fVar20;
                      fStack_1fc = fVar21;
                      local_1f8 = fVar22;
                      local_300[(ulonglong)(uVar16 & 1) + 2] = fVar19;
                      local_300[(ulonglong)(uVar7 & 1) + 2] = fVar22;
                      local_1f4 = fVar17 * 58.0 + (float)local_300._8_8_;
                      fStack_1f0 = fVar17 * 196.0 + SUB84(local_300._8_8_,4);
                      local_d8[0] = local_1f4;
                      local_d8[1] = fStack_1f0;
                      local_d8[2] = fVar17 * 0.0 + 0.0;
                      local_d8[3] = fVar17 * 0.0 + 0.0;
                      local_1cc = local_d8[uVar16 & 3];
                      local_1ec = local_f8[uVar7 & 3];
                      local_2a0 = (float *)((longlong)&local_1e8 + 4);
                      local_1e8 = CONCAT44(local_1f4,fStack_1f0);
                      local_298 = &fStack_1dc;
                      *(float *)(param_1 + 0x1e8) = (local_3d8 - local_310) * 22.0 * fVar17;
                      local_20c = local_3c4 * 0.55;
                      local_218 = 0x3ce0e0e13ca0a0a1;
                      local_210 = 0x3d40c0c1;
                      local_e8 = 0;
                      local_e0 = *(undefined8 *)local_340;
                      local_1e0 = fVar20;
                      fStack_1dc = fVar21;
                      local_1c8 = fVar18;
                      FUN_180172640(&local_e8,&local_218);
                      uVar12 = FUN_1800c9500(param_1,&local_208);
                      FUN_1800cab70(uVar12,&local_208);
                      FUN_1800cb140(param_1,&local_208);
                      local_130 = *local_348 - *local_380;
                      local_3e8 = 0x4d05b66f955b2b85;
                      if (*(int *)(param_1 + 0xe0) == local_3b0) {
                        local_3e8 = 0x54539237b1552520;
                      }
                      local_3f0 = 0x92becb29534528d0;
                    }
                    else if (uVar9 == 0xc33479e722702314) goto LAB_1800c947f;
                  }
                  else if ((longlong)uVar9 < -0x2d09ed7b92bcb7cb) {
                    if (uVar9 == 0xc6ed591ee2100df0) {
                      FUN_1800ccc30(param_1,&local_208);
                      local_3e8 = 0x37363239f35b824f;
                      local_3f0 = 0xd4693eee49d33453;
                    }
                    else if (uVar9 == 0xd2cc32a3eb171c10) {
                      FUN_1800d16d0(param_1,local_2c8);
                      local_3e8 = 0xa61e1396d355dd96;
                      local_3f0 = 0xb644886151be3840;
                    }
                  }
                  else if (uVar9 == 0xd2f612846d434835) {
                    fVar18 = local_3d8 - local_31c;
                    local_3c4 = 1.0 - fVar18 * fVar18 * fVar18;
                    fVar18 = (local_31c + -0.18) / 0.82;
                    fVar18 = (float)((uint)local_3d4 & -(uint)(local_3d8 < fVar18) |
                                    ~-(uint)(local_3d8 < fVar18) &
                                    (uint)(local_3d8 -
                                          (float)((uint)local_3d4 & -(uint)(fVar18 < local_3d4) |
                                                 ~-(uint)(fVar18 < local_3d4) & (uint)fVar18)));
                    local_310 = 1.0 - fVar18 * fVar18 * fVar18;
                    lVar10 = FUN_180100330();
                    local_2c8 = (float *)(param_1 + 0x214);
                    *(undefined8 *)(param_1 + 0x214) = *(undefined8 *)(lVar10 + 0x350);
                    *(uintptr_t *)(param_1 + 0x200) = local_3d0;
                    if (local_3c0 < *(ulonglong *)(param_1 + 0x208)) {
                      puVar13 = *(undefined1 **)(param_1 + 0x1f0);
                    }
                    else {
                      puVar13 = (undefined1 *)(param_1 + 0x1f0);
                    }
                    *puVar13 = local_3d9;
                    local_380 = (longlong *)(param_1 + 200);
                    local_348 = (longlong *)(param_1 + 0xd0);
                    local_290 = *(longlong *)(param_1 + 200);
                    local_178 = *(longlong *)(param_1 + 0xd0);
                    local_3e8 = 0x2d42253f70480c29;
                    if (local_290 == local_178) {
                      local_3e8 = 0x649e1e5f77c1df82;
                    }
                    local_3f0 = 0xa7eb04df5c5e78a0;
                  }
                  else if (uVar9 == 0xdda480ebc6eb2594) {
                    cVar6 = FUN_1801b8b10();
                    local_3e8 = 0x2f9ff0500d2c9508;
                    if (cVar6 != '\0') {
                      local_3e8 = 0x543b536eb321fac0;
                    }
                    local_3f0 = 0xa81cd2b0f76df688;
                  }
                }
                else if ((longlong)uVar9 < -0x119b15fb685d3236) {
                  if ((longlong)uVar9 < -0x1d938d0700f5d057) {
                    if (uVar9 == 0xdfbb7d46c61e0355) {
                      FUN_1800cfd00(param_1,&local_208);
                      local_3e8 = 0xbcf20d1c559f85ed;
                      local_3f0 = 0x5fad01cbef1733f1;
                    }
                    else if (uVar9 == 0xdfd453b1d2bb8a3e) {
                      uVar2 = *local_328;
                      uVar3 = local_328[1];
                      uVar4 = local_328[2];
                      uVar5 = local_328[3];
                      auVar1 = *(undefined1 (*) [16])(local_328 + 4);
                      *(undefined1 (*) [16])(local_3a8 + 7) = *(undefined1 (*) [16])(local_328 + 7);
                      *(undefined1 (*) [16])(local_3a8 + 4) = auVar1;
                      *local_3a8 = uVar2;
                      local_3a8[1] = uVar3;
                      local_3a8[2] = uVar4;
                      local_3a8[3] = uVar5;
                      local_2d8 = (longlong *)(local_3a8 + 0xc);
                      local_2d0 = local_370 + 0x2a;
                      local_3e8 = 0x582482742dc7e2ed;
                      if (local_3a8 == local_328) {
                        local_3e8 = 0x5283e3c803cceed5;
                      }
                      local_3f0 = 0xa8ebfd0a8d357216;
                    }
                  }
                  else if (uVar9 == 0xe26c72f8ff0a2fa9) {
                    local_1a0 = *(longlong *)(local_140 + -8);
                    local_3e8 = 0x56b219c66b39d490;
                    if ((ulonglong)((local_140 + local_368) - local_1a0) < local_360) {
                      local_3e8 = 0xbd79e316192d56f5;
                    }
                    local_3f0 = 0x7f614b1d6eea237;
                  }
                  else if (uVar9 == 0xe35f0cd7ba88b61c) {
                    local_388 = (undefined4 *)*local_348;
                    local_378 = (undefined4 *)(*local_380 + local_130);
                    local_3e8 = 0x58cb2c9d3c526d19;
                    if (local_378 == local_388) {
                      local_3e8 = 0xbc6a16b0147c6bd6;
                    }
                    local_3f0 = 0x50281a89a3740db;
                    local_198 = local_378;
                    local_190 = local_388;
                  }
                }
                else if ((longlong)uVar9 < -0xd96d6a7085a7b29) {
                  if (uVar9 == 0xee64ea0497a2cdca) {
                    local_3e8 = 0xb7f8e3d5ffa98125;
                    if ((float)local_220[1] < local_314) {
                      local_3e8 = 0x589ea34bc8db0ef4;
                    }
                    local_3f0 = 0xe9074cd71e2aa28;
                    local_378 = local_220;
                  }
                  else if (uVar9 == 0xf0cf7f7ea0f290fb) {
                    local_160 = (ulonglong *)(local_3a8 + 0x12);
                    local_2c0 = *(ulonglong *)(local_3a8 + 0x12);
                    local_3e8 = 0xaef562f45a25d1eb;
                    if (local_3c0 < local_2c0) {
                      local_3e8 = 0x69154d5952766dc9;
                    }
                    local_3f0 = 0x214d3d9315da80ec;
                  }
                }
                else if (uVar9 == 0xf2692958f7a584d7) {
                  local_3d8 = 1.0;
                  local_3d4 = 0.0;
                  local_3c8 = 0;
                  local_3d9 = 0;
                  local_350 = 0xfff;
                  local_358 = 0x28;
                  local_3b8 = 1;
                  local_3c0 = 0xf;
                  local_360 = 0x20;
                  local_368 = -8;
                  local_3d0 = 0;
                  local_3b0 = 1;
                  fVar18 = (float)FUN_1800ebf90();
                  local_1b8 = (char *)(param_1 + 0x210);
                  cVar6 = *(char *)(param_1 + 0x210);
                  local_3e8 = 0xe63f0c54bfe5ddde;
                  if (cVar6 != '\0') {
                    local_3e8 = 0x1757035b11dacc75;
                  }
                  fVar17 = 0.15;
                  if (cVar6 != '\0') {
                    fVar17 = 0.24;
                  }
                  fVar18 = fVar18 / fVar17;
                  if (cVar6 == '\0') {
                    fVar18 = -fVar18;
                  }
                  local_1b0 = (float *)(param_1 + 0x1e4);
                  fVar18 = fVar18 + *(float *)(param_1 + 0x1e4);
                  *(uint *)(param_1 + 0x1e4) =
                       -(uint)(1.0 < fVar18) & 0x3f800000 |
                       ~-(uint)(1.0 < fVar18) & ~-(uint)(fVar18 < 0.0) & (uint)fVar18;
                  local_3f0 = 0x90d421bbeb9baff5;
                }
                else if (uVar9 == 0xf3be6f971a388a76) {
                  fVar18 = (float)FUN_1801e1b20((local_308 - local_394) / local_304);
                  local_38c = fVar18 * local_304 + local_394;
                  local_3e8 = 0xd40d48ec5a743348;
                  local_3f0 = 0x4f074af08c7d70b0;
                }
              }
              if (0x396ad86e4b26a5e5 < (longlong)uVar9) break;
              if ((longlong)uVar9 < 0x16ffed6625a99868) {
                if ((longlong)uVar9 < -0x37e287e42373e0d) {
                  if ((longlong)uVar9 < -0x597e13d7106633d) {
                    if (uVar9 == 0xf768465fde378224) {
                      *local_170 = local_3c8;
                      local_3e8 = 0xf48779e0ae39601d;
                      local_3f0 = 0xe4dde2172cd285cb;
                    }
                    else if (uVar9 == 0xf874a54e5b5d6d5c) {
                      *(uintptr_t *)(local_228 + 0x40) = local_3d0;
                      *local_150 = local_3c0;
                      *(undefined1 *)local_2b8 = local_3d9;
                      local_258 = local_228 + 0x78;
                      local_3e8 = 0x9aac170e3fb6d58e;
                      if (local_258 == local_118) {
                        local_3e8 = 0xabecd76194b096db;
                      }
                      local_3f0 = 0xdd7754888a63a8cb;
                    }
                  }
                  else if (uVar9 == 0xfa681ec28ef99cc3) {
                    *(undefined8 *)(local_3a8 + 0x1c) = *(undefined8 *)(local_370 + 0x3a);
                    uVar2 = local_370[0x32];
                    uVar3 = local_370[0x33];
                    uVar4 = local_370[0x34];
                    uVar5 = local_370[0x35];
                    *(undefined1 (*) [16])(local_3a8 + 0x18) = *(undefined1 (*) [16])(local_370 + 0x36);
                    local_3a8[0x14] = uVar2;
                    local_3a8[0x15] = uVar3;
                    local_3a8[0x16] = uVar4;
                    local_3a8[0x17] = uVar5;
                    local_330 = local_3a8 + 0x1e;
                    local_3e8 = 0xe96f1988c0612d20;
                    local_3f0 = 0x15eece097da9ecd3;
                  }
                  else if (uVar9 == 0xfc2781de444c0c48) {
                    lVar10 = FUN_1801b2b70();
                    (*(code *)(lVar10 + 0x11be90))(local_180);
                    *local_168 = local_3d9;
                    local_3e8 = 0xa1f31f1c336b5795;
                    local_3f0 = 0x26703dfcc92a3415;
                  }
                }
                else if ((longlong)uVar9 < 0x105a9bf782ebe5d6) {
                  if (uVar9 == 0xfc81d781bdc8c1f3) {
                    local_338 = local_330;
                    local_248 = local_328;
                    local_250 = local_328 + 0x1e;
                    local_3e8 = 0x589d35e5c229447a;
                    if (local_250 == local_388) {
                      local_3e8 = 0xd5273666fe0094f3;
                    }
                    local_3f0 = 0x61f7ed8b890fe19c;
                    local_240 = local_338;
                  }
                  else if (uVar9 == 0xfe0c2bd70319c1ad) {
                    local_220 = local_238;
                    local_3e8 = 0xc8bb09202b00a294;
                    if (local_318 < (float)local_238[3]) {
                      local_3e8 = 0x9fb7743c32e94453;
                    }
                    local_3f0 = 0x71d39e38a54b8999;
                    local_378 = local_220;
                  }
                }
                else if (uVar9 == 0x105a9bf782ebe5d6) {
                  FUN_1800d2180(param_1,local_340);
                  FUN_1800d25a0(param_1);
                  local_3e8 = 0xbec797623657a28c;
                  local_3f0 = 0x2150b2e32af55aa1;
                }
                else if (uVar9 == 0x16cf8ef1f3acf0aa) {
                  *local_348 = *local_380;
                  local_3e8 = 0x62dab74dcfa35c17;
                  local_3f0 = 0xa1afadcde43cfb35;
                }
              }
              else if ((longlong)uVar9 < 0x1fc0c45479a52cec) {
                if ((longlong)uVar9 < 0x1bf08a96d4a9381f) {
                  if (uVar9 == 0x16ffed6625a99868) {
                    *local_2e0 = 0;
                    local_3e8 = 0x68bd29168838b7b7;
                    local_3f0 = 0x5397cb82b43febb;
                  }
                  else if (uVar9 == 0x192d1d4a42bd4058) {
                    local_250 = local_110 + 0x1e;
                    local_3e8 = 0xda36ce7ed4bd9665;
                    if (local_250 == local_388) {
                      local_3e8 = 0x578ccdfde89446ec;
                    }
                    local_3f0 = 0xe35c16109f9b3383;
                    local_338 = local_110;
                    local_248 = local_110;
                    local_240 = local_110;
                  }
                }
                else if (uVar9 == 0x1bf08a96d4a9381f) {
                  iVar14 = *(int *)(local_3a0 + 0x98);
                  iVar8 = FUN_1801eaef0((float)(*(int *)(local_3a0 + 0x9c) - iVar14) * local_390);
                  iVar8 = iVar8 + iVar14;
                  iVar14 = *(int *)(local_3a0 + 0x98);
                  if (*(int *)(local_3a0 + 0x98) < iVar8) {
                    iVar14 = iVar8;
                  }
                  if (*(int *)(local_3a0 + 0x9c) < iVar8) {
                    iVar14 = *(int *)(local_3a0 + 0x9c);
                  }
                  *(int *)(local_3a0 + 0x90) = iVar14;
                  local_3e8 = 0x3f4644f9859e97a0;
                  local_3f0 = 0x52c2115726e5deac;
                }
                else if (uVar9 == 0x1db9a3505b1d993b) {
                  local_280 = *local_2b8;
                  local_288 = local_2b0 + local_3b8;
                  local_3e8 = 0x61c13cc07cfe7a5f;
                  if (local_350 < local_288) {
                    local_3e8 = 0x30286ec7d8c97d82;
                  }
                  local_3f0 = 0x5e63b3790a8b0fe8;
                  local_188 = local_280;
                }
              }
              else if ((longlong)uVar9 < 0x2940a50c71a3210f) {
                if (uVar9 == 0x1fc0c45479a52cec) {
                  local_128 = (undefined8 *)(param_1 + 200);
                  local_120 = (undefined8 *)(param_1 + 0xd0);
                  local_258 = *(longlong *)(param_1 + 200);
                  local_118 = *(longlong *)(param_1 + 0xd0);
                  local_3e8 = 0xf0f88fd3671bdf5f;
                  if (local_258 == local_118) {
                    local_3e8 = 0x28b4e9d4ce6c5a37;
                  }
                  local_3f0 = 0xb723cc55d2cea21a;
                }
                else if (uVar9 == 0x23ff3d38bcd88c3c) {
                  local_3a0 = *local_2e0;
                  local_3e8 = 0x811b62f795841a0e;
                  if (local_3a0 == 0) {
                    local_3e8 = 0x6cda8ef62343f4fa;
                  }
                  local_3f0 = 0x15edb588038bdf6;
                }
              }
              else if (uVar9 == 0x2940a50c71a3210f) {
                local_3e8 = 0x38656fbe5ac2c5b;
                if (local_3ac == 1) {
                  local_3e8 = 0x44fb09d9f9c25657;
                }
                local_3f0 = 0x5f0b834f2d6b6e48;
              }
              else if (uVar9 == 0x29fbf898fb0ea206) {
                local_270 = *local_2f0;
                local_278 = local_2e8 + local_3b8;
                local_3e8 = 0xe0d284731d6737f7;
                if (local_350 < local_278) {
                  local_3e8 = 0xbec328d56fa0eded;
                }
                local_3f0 = 0x5caf5a2d90aac244;
                local_140 = local_270;
              }
            }
            if ((longlong)uVar9 < 0x5c8dd5b4c8c74213) break;
            if ((longlong)uVar9 < 0x6e4bddbed242726a) {
              if ((longlong)uVar9 < 0x5dd0883b507c539e) {
                if (uVar9 == 0x5c8dd5b4c8c74213) {
                  local_3e8 = 0x4730e4a28ee98a46;
                  local_3f0 = 0x2ab4b10c2d92c34a;
                }
                else if (uVar9 == 0x5dc9ad35a6652dc2) {
                  local_318 = *local_2a0;
                  local_314 = *local_298;
                  local_3e8 = 0xf04bccfc58e9903e;
                  local_3f0 = 0xe47e72b5bf05193;
                  local_238 = local_198;
                }
              }
              else if (uVar9 == 0x5dd0883b507c539e) {
                local_268 = local_2c0 + local_358;
                local_260 = local_148;
                local_3e8 = 0x650363d8691346b5;
                local_3f0 = 0xdae2372d0accfc54;
              }
              else if (uVar9 == 0x6d8455aea37b490c) {
                local_170 = (uint *)(param_1 + 0x1a0);
                local_3e8 = 0x2d7e429b7ea4243;
                if (*(uint *)(param_1 + 0x1a0) == local_3c8) {
                  local_3e8 = 0x88756f82db340c3c;
                }
                local_3f0 = 0x982ff47559dfe9ea;
              }
            }
            else if ((longlong)uVar9 < 0x769b83e91ed33e10) {
              if (uVar9 == 0x6e4bddbed242726a) {
                local_158 = *(longlong *)(local_188 + -8);
                local_3e8 = 0xaf2f601523af5c96;
                if ((ulonglong)((local_188 + local_368) - local_158) < local_360) {
                  local_3e8 = 0x95c8bd9f0347ff56;
                }
                local_3f0 = 0x3e9b9a0b890891ae;
              }
              else if (uVar9 == 0x7320f49da9c50ff0) {
                local_3e8 = 0xbef11dca45550f7e;
                if ((float)local_370[0x1f] < *local_298) {
                  local_3e8 = 0x9da499fa2a2644b3;
                }
                local_3f0 = 0x4270ca4bf89dce8d;
                local_330 = local_3a8;
              }
            }
            else if (uVar9 == 0x769b83e91ed33e10) {
              *local_120 = *local_128;
              local_3e8 = 0x2cf1baded233053c;
              local_3f0 = 0xb3669f5fce91fd11;
            }
            else if (uVar9 == 0x76eb2def547e722b) {
              local_168 = (undefined1 *)(param_1 + 0x211);
              local_3e8 = 0x98dba2759c0ddb85;
              if (*(char *)(param_1 + 0x211) != '\0') {
                local_3e8 = 0xb8ec58faa48b2e8b;
              }
              local_3f0 = 0x1f588095664cb805;
            }
          }
          if (0x47db4386b5d57d44 < (longlong)uVar9) break;
          if ((longlong)uVar9 < 0x420696e1af4e7c73) {
            if (uVar9 == 0x396ad86e4b26a5e6) {
              local_3a8 = local_240;
              local_370 = local_248;
              local_328 = local_250;
              local_3e8 = 0xc1d3ce4fdac9d96f;
              if (*local_2a0 < (float)local_248[0x21]) {
                local_3e8 = 0x4e72ed53cec4176c;
              }
              local_3f0 = 0x3d5219ce6701189c;
              local_330 = local_240;
            }
            else if (uVar9 == 0x3fa28fb9767575b7) {
              thunk_FUN_1801f42e0(local_280,local_288);
              local_3e8 = 0x3af89ff025e4aad;
              local_3f0 = 0xfbdb2cb1590327f1;
            }
          }
          else if (uVar9 == 0x420696e1af4e7c73) {
            uVar12 = FUN_180100330();
            cVar6 = FUN_180101a00(uVar12,local_3b0);
            local_3e8 = 0xce5ea1a2d0328a2;
            if (cVar6 != '\0') {
              local_3e8 = 0x39e53a44b4723cf6;
            }
            local_3f0 = 0x1a1a077c08aab0ca;
          }
          else if (uVar9 == 0x45b56066161072b5) {
            local_3e8 = 0x10c49a6b4d306ce8;
            if (local_3ac == 2) {
              local_3e8 = 0xf8a2d6a9927f4f9d;
            }
            local_3f0 = 0x4c494fdf85f72efb;
          }
        }
        if (0x51440d77bdd776a6 < (longlong)uVar9) break;
        if (uVar9 == 0x47db4386b5d57d45) {
          local_228 = local_258;
          local_2b8 = (longlong *)(local_258 + 0x30);
          local_150 = (ulonglong *)(local_258 + 0x48);
          local_2b0 = *(ulonglong *)(local_258 + 0x48);
          local_3e8 = 0x4646721c0c569688;
          if (local_3c0 < local_2b0) {
            local_3e8 = 0xa38b74020c1662ef;
          }
          local_3f0 = 0xbe32d752570bfbd4;
        }
        else if (uVar9 == 0x485870ca47aced25) {
          local_260 = *local_2d8;
          local_268 = local_2c0 + local_3b8;
          local_3e8 = 0xe8ad68efbf2934bb;
          if (local_350 < local_268) {
            local_3e8 = 0xe05d027c6081622f;
          }
          local_3f0 = 0x574c3c1adcf68e5a;
          local_138 = local_260;
        }
      }
      if (uVar9 != 0x560ed786b939a4dc) break;
      local_378 = local_220 + 0x1e;
      local_3e8 = 0x43878d3a577dd58d;
      if (local_378 == local_388) {
        local_3e8 = 0x4e331f5da2f3f2d;
      }
      local_3f0 = 0xbd8ba6ed54641420;
      local_238 = local_378;
    }
  } while (uVar9 != 0x51440d77bdd776a7);
LAB_1800c947f:
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_3c8,local_3d0);
}



void FUN_1800c9500(undefined8 param_1,float *param_2,float param_3)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  longlong lVar4;
  char *_Str;
  size_t sVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float local_208 [4];
  float local_1f8 [4];
  float local_1e8 [4];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8 [4];
  float local_1b8;
  float local_1b4;
  size_t local_1b0;
  float local_1a8 [4];
  undefined8 local_198;
  undefined4 local_190;
  float local_18c;
  float local_184;
  size_t local_180;
  size_t local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_15c;
  float local_154;
  ulonglong local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  longlong local_120;
  uintptr_t local_118;
  ulonglong local_110;
  undefined1 local_108 [3];
  undefined1 uStack_105;
  undefined1 auStack_104 [2];
  undefined1 auStack_102 [2];
  undefined8 uStack_100;
  size_t local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;

  local_e0 = 0xfffffffffffffffe;
  local_154 = 0.0;
  local_e4 = 0;
  local_150 = 0xfff;
  local_138 = 0x28;
  local_120 = 1;
  local_110 = 0xf;
  local_148 = 0x20;
  local_180 = 5;
  local_e8 = 2;
  local_1b0 = 6;
  local_140 = -8;
  local_178 = 3;
  local_118 = 0;
  pauVar2 = (undefined1 (*) [12])FUN_1800eb430();
  fVar13 = param_2[0x11];
  local_130 = CONCAT44(fVar13 * 8.0,local_154);
  local_1e8[0] = 1.0;
  local_1e8[1] = 1.0;
  local_1e8[2] = 1.0;
  local_1e8[3] = 0.0;
  local_1e8[(uint)local_178 & 3] = param_3;
  fVar12 = local_1e8[0];
  fVar14 = local_1e8[1];
  fVar11 = local_1e8[2];
  fVar15 = local_1e8[3];
  _auStack_104 = local_1e8[1] * 0.0;
  _local_108 = local_1e8[0] * 0.0;
  uStack_100._0_4_ = local_1e8[2] * 0.0;
  uStack_100._4_4_ = local_1e8[3] * 0.55;
  FUN_180172cc0(param_2,local_108,fVar13 * 22.0);
  FUN_180172f40(param_2,fVar13 * 14.0,0x41900000);
  uStack_100._4_4_ = *(float *)pauVar2[1] * param_3;
  _local_108 = *pauVar2;
  FUN_180172640(param_2,local_108);
  _auStack_104 = fVar14 * 1.0;
  _local_108 = fVar12 * 1.0;
  uStack_100._0_4_ = fVar11 * 1.0;
  uStack_100._4_4_ = fVar15 * 0.09;
  FUN_1801728e0(param_2,local_108);
  local_170 = CONCAT44(fVar13 * 17.0 + (float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20),
                       fVar13 * 19.6 + (float)*(undefined8 *)(param_2 + 0xc));
  local_128 = *(float *)(pauVar2[0xc] + 8);
  local_130 = *(undefined8 *)pauVar2[0xc];
  _local_108 = ZEXT416(0);
  local_f8 = local_1b0;
  local_f0 = local_110;
  local_124 = param_3;
  FUN_1800eb180(&DAT_1802a39d8,&DAT_18027573a,0x16,7,&DAT_1802a39e0);
  auStack_104 = (undefined1  [2])DAT_1802a39dc;
  _local_108 = (float)DAT_1802a39d8;
  uVar7 = local_e4;
  FUN_180173000(local_108,&local_170,&local_130);
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) goto LAB_1800ca4c3;
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  _local_108 = ZEXT816(0);
  local_f8 = local_1b0;
  local_f0 = local_110;
  FUN_1800eb180(&DAT_1802a39d8,&DAT_18027573a,0x16,7,&DAT_1802a39e0,uVar7);
  auStack_104 = (undefined1  [2])DAT_1802a39dc;
  _local_108 = (float)DAT_1802a39d8;
  fVar10 = (float)FUN_180173360(local_108,fVar13 * 21.0,local_e8);
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) goto LAB_1800ca4c3;
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  fVar18 = fVar13 * 12.0;
  local_128 = *(float *)(pauVar2[0xb] + 4);
  local_130 = *(undefined8 *)(pauVar2[10] + 8);
  fVar16 = local_170._4_4_;
  uVar7 = (uint)local_120;
  local_124 = param_3;
  local_1a8[(uint)local_118 & 1] = (float)local_170 + fVar10;
  local_1a8[uVar7 & 1] = fVar16;
  local_198 = CONCAT44(fVar13 * 6.0 + SUB84(local_1a8._0_8_,4),fVar13 * 8.0 + (float)local_1a8._0_8_);
  _local_108 = ZEXT416(0);
  local_f8 = local_180;
  local_f0 = local_110;
  FUN_1800eb180(&DAT_1802a39e4,&DAT_18027576e,0x15,6,&DAT_1802a39ec);
  auStack_104[0] = DAT_1802a39e8;
  _local_108 = (float)DAT_1802a39e4;
  uVar7 = local_e4;
  FUN_180173000(local_108,&local_198,&local_130);
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) goto LAB_1800ca4c3;
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  _auStack_104 = fVar14 * 1.0;
  _local_108 = fVar12 * 1.0;
  uStack_100._0_4_ = fVar11 * 1.0;
  uStack_100._4_4_ = fVar15 * 0.07;
  local_124 = param_2[0xf];
  local_128 = fVar13 * -14.0 + param_2[2];
  local_130 = CONCAT44(local_124 - fVar13,fVar13 * 14.0 + *param_2);
  FUN_180172640(&local_130,local_108);
  uVar19 = local_170._4_4_;
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  local_124 = param_3 * 0.75;
  local_128 = *(float *)(pauVar2[0xb] + 4);
  local_130 = *(undefined8 *)(pauVar2[10] + 8);
  local_18c = param_3 * 0.9;
  local_190 = *(undefined4 *)pauVar2[10];
  local_198 = *(undefined8 *)(pauVar2[9] + 4);
  _local_108 = ZEXT416(0);
  local_f8 = local_180;
  local_f0 = local_110;
  FUN_1800eb180(&DAT_1802a39f0,&DAT_18027579d,0x1a,6,&DAT_1802a39f8,uVar7);
  auStack_104[0] = DAT_1802a39f4;
  _local_108 = (float)DAT_1802a39f0;
  local_1d8 = uVar3;
  uStack_1d0 = uVar1;
  *(undefined4 *)((longlong)&local_1d8 + (ulonglong)((uint)local_120 & 3) * 4) = uVar19;
  fVar14 = fVar13 * -19.6 + (float)local_1d8;
  fVar15 = fVar13 * 6.0 + local_1d8._4_4_;
  fVar16 = fVar13 * 0.0 + (float)uStack_1d0;
  fVar17 = fVar13 * 0.0 + uStack_1d0._4_4_;
  local_208[0] = fVar14;
  local_208[1] = fVar15;
  local_208[2] = fVar16;
  local_208[3] = fVar17;
  fVar12 = local_208[(uint)local_120 & 3];
  local_168 = CONCAT44(fVar15,fVar14);
  uVar19 = local_e8;
  FUN_180173000(local_108,&local_168,&local_130);
  fVar11 = (float)FUN_180173360(local_108,fVar18,local_e4);
  local_1f8[0] = fVar14;
  local_1f8[1] = fVar15;
  local_1f8[2] = fVar16;
  local_1f8[3] = fVar17;
  fVar14 = local_1f8[(uint)local_118 & 3];
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) goto LAB_1800ca4c3;
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  fVar15 = fVar14 - (fVar11 + fVar13 * 5.0);
  _local_108 = ZEXT816(0);
  local_f8 = local_178;
  local_f0 = local_110;
  local_184 = fVar10;
  FUN_1800eb180(&DAT_1802a39fc,&DAT_1802757dc,0x1a,4,&DAT_1802a3a00,uVar19);
  local_108[2] = DAT_1802a39fe;
  local_108._0_2_ = DAT_1802a39fc;
  local_168 = CONCAT44(fVar12,fVar15);
  uVar19 = local_e8;
  FUN_180173000(local_108,&local_168,&local_198);
  fVar11 = (float)FUN_180173360(local_108,fVar18,local_e8);
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) goto LAB_1800ca4c3;
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  fVar15 = fVar15 - (fVar11 + fVar13 * 9.0);
  local_15c = param_3 * 0.4;
  local_160 = *(undefined4 *)(pauVar2[0xb] + 4);
  local_168 = *(undefined8 *)(pauVar2[10] + 8);
  _local_108 = ZEXT416(0);
  local_f8 = local_178;
  local_f0 = local_110;
  FUN_1800eb180(&DAT_1802a3a04,&DAT_180275817,0x1c,4,&DAT_1802a3a08,uVar19);
  local_108[2] = DAT_1802a3a06;
  local_108._0_2_ = DAT_1802a3a04;
  uVar19 = local_e8;
  local_1b8 = fVar15;
  local_1b4 = fVar12;
  FUN_180173000(local_108,&local_1b8,&local_168);
  fVar11 = (float)FUN_180173360(local_108,fVar18,local_e4);
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) goto LAB_1800ca4c3;
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  fVar15 = fVar15 - (fVar13 * 9.0 + fVar11);
  _local_108 = ZEXT816(0);
  local_f8 = local_180;
  local_f0 = local_110;
  FUN_1800eb180(&DAT_1802a3a0c,&DAT_180275850,0x16,6,&DAT_1802a3a14,uVar19);
  auStack_104[0] = DAT_1802a3a10;
  _local_108 = (float)DAT_1802a3a0c;
  local_168 = CONCAT44(fVar12,fVar15);
  uVar19 = local_e8;
  FUN_180173000(local_108,&local_168,&local_130);
  fVar11 = (float)FUN_180173360(local_108,fVar18,local_e4);
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) goto LAB_1800ca4c3;
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  uVar3 = FUN_180111340();
  FUN_1800eb180(&DAT_1802a39a0,&DAT_180275663,0x17,9,&DAT_1802a39ac,uVar19);
  _local_108 = &DAT_1802a39a0;
  uStack_100 = 8;
  puVar9 = local_108;
  lVar4 = FUN_180114180(uVar3,puVar9);
  uVar7 = local_e4;
  if (lVar4 != 0) {
    uVar7 = *(uint *)(*(longlong *)(lVar4 + 0x68) + 0x90);
  }
  _Str = (char *)FUN_1801026e0(uVar7);
  _local_108 = ZEXT816(0);
  sVar5 = strlen(_Str);
  if ((longlong)sVar5 < (longlong)local_118) {
    FUN_180002ac0();
  }
  fVar15 = fVar15 - (fVar13 * 5.0 + fVar11);
  uVar8 = local_110;
  if (0xf < sVar5) {
    uVar6 = local_110 | sVar5;
    uVar8 = 0x16;
    if (0x16 < uVar6) {
      uVar8 = uVar6;
    }
    if (uVar6 < 0xfff) {
      puVar9 = (undefined1 *)FUN_1801d61c8(local_120 + uVar8);
    }
    else {
      lVar4 = FUN_1801d61c8(local_138 + uVar8);
      puVar9 = (undefined1 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar9 + -8) = lVar4;
    }
    _local_108 = puVar9;
  }
  local_f8 = sVar5;
  local_f0 = uVar8;
  FUN_1802079d0(puVar9,_Str,sVar5);
  puVar9[sVar5] = 0;
  local_168 = CONCAT44(fVar12,fVar15);
  FUN_180173000(local_108,&local_168,&local_198);
  fVar12 = (float)FUN_180173360(local_108,fVar18,local_e8);
  fVar12 = fVar12 + local_154;
  if (local_110 < local_f0) {
    uVar8 = local_120 + local_f0;
    lVar4 = (longlong)_local_108;
    if (local_150 < uVar8) {
      lVar4 = *(longlong *)((longlong)_local_108 + -8);
      if (local_148 <= (ulonglong)(((longlong)_local_108 + local_140) - lVar4)) {
LAB_1800ca4c3:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_e4,local_118);
      }
      uVar8 = local_f0 + local_138;
    }
    thunk_FUN_1801f42e0(lVar4,uVar8);
  }
  fVar12 = (fVar13 * -30.800001 + param_2[0xe]) - (fVar14 - (fVar15 - fVar12));
  uVar7 = (uint)local_120;
  local_1a8[(ulonglong)((uint)local_118 & 1) + 2] = local_184 + (float)local_170;
  local_1a8[(ulonglong)(uVar7 & 1) + 2] = fVar12;
  local_1c8[0] = fVar13 * 70.0 + (float)local_1a8._8_8_;
  local_1c8[1] = fVar13 * -260.0 + SUB84(local_1a8._8_8_,4);
  local_1c8[2] = fVar13 * 0.0 + 0.0;
  local_1c8[3] = fVar13 * 0.0 + 0.0;
  _local_108 = local_1c8[(uint)local_120 & 3];
  if (local_1c8[(uint)local_120 & 3] <= local_1c8[(uint)local_118 & 3]) {
    _local_108 = local_1c8[(uint)local_118 & 3];
  }
  if (fVar13 * 60.0 < fVar12 - _local_108) {
    fVar14 = (param_2[0xf] - param_2[0xd]) * 0.5 + param_2[0xd];
    fVar13 = fVar13 * 26.0 * 0.5;
    _auStack_104 = fVar14 - fVar13;
    uStack_100._0_4_ = fVar12;
    uStack_100._4_4_ = fVar13 + fVar14;
    FUN_1800d2aa0(param_1,local_108);
  }
  return;
}



void Unwind_1800ca4f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void Unwind_1800ca5c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void Unwind_1800ca690(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void Unwind_1800ca760(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void Unwind_1800ca830(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void Unwind_1800ca900(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void Unwind_1800ca9d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void Unwind_1800caaa0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x130);
  return;
}



void FUN_1800cab70(undefined8 param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auStack_128 [32];
  undefined *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  float local_ec;
  int local_e8;
  float local_e4;
  longlong local_e0;
  float local_d4;
  float local_d0 [4];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  float local_88;
  float local_84;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  ulonglong local_60;

  local_60 = DAT_1802a0400 ^ (ulonglong)auStack_128;
  local_f8 = 0xd81cbac0feb62399;
  local_100 = 0x1bfcf2e2c29de75a;
  local_a8 = param_2;
LAB_1800cac50:
  do {
    while( true ) {
      while( true ) {
        lVar4 = local_a8;
        uVar8 = local_f8 ^ 0x647448602ef89279;
        uVar5 = local_f8 ^ local_100;
        local_100 = local_100 ^ 0x647448602ef89279;
        local_f8 = uVar8;
        if (0x1b99d7b2840c817d < (longlong)uVar5) break;
        if ((longlong)uVar5 < -0x3c1fb7ddc3d43b3d) {
          if (uVar5 == 0x9b1174d5bf59938a) {
            local_e4 = *(float *)(local_b0 + 0x90) * param_3;
            local_f8 = 0x7555378610f56161;
            local_100 = 0xc3d2ccae768766c0;
          }
          else if (uVar5 == 0xb687fb28667207a1) {
            FUN_180173c20(local_e8,&local_90,local_e4);
            FUN_180174140();
            FUN_180174140();
            local_f8 = 0x2842038b7fba2beb;
            local_100 = 0x45236da1f9e7b9ea;
          }
        }
        else if (uVar5 == 0xc3e048223c2bc4c3) {
          local_ec = 0.0;
          local_b8 = 1;
          local_c0 = 0;
          local_e8 = FUN_1800c6c00();
          local_f8 = 0xec1cc2a574b6d97c;
          if (local_e8 == 0) {
            local_f8 = 0x5ca7ef4b8867910c;
          }
          local_100 = 0x31c681610e3a030d;
        }
        else if (uVar5 == 0xddda43c47a8cda71) {
          local_d4 = (float)FUN_180173ca0(local_e8);
          local_f8 = 0xf674ed678b457fc7;
          if (local_ec < local_d4) {
            local_f8 = 0xa24ef5759b86afdd;
          }
          local_100 = 0x9b15834d0d18edc6;
        }
      }
      if (0x33441241dc1b94ad < (longlong)uVar5) break;
      if (uVar5 == 0x1b99d7b2840c817e) {
        local_e0 = local_a0;
        if (*(int *)(local_a0 + 8) != 2) {
          local_e0 = 0;
        }
        local_f8 = 0x40217e678163f75e;
        local_100 = 0x73656c265d7863f0;
      }
      else if (uVar5 == 0x30c048f0f93fe082) {
        local_108 = &DAT_1802a3a48;
        FUN_1800eb180(&DAT_1802a3a34,&DAT_1802758dd,0x1d,0x12);
        local_80 = &DAT_1802a3a34;
        local_78 = 0x11;
        local_a0 = FUN_1801076d0(local_98,&local_80);
        local_f8 = 0x88dc38385e26e7d4;
        if (local_a0 == 0) {
          local_f8 = 0xa001fdcb0631f204;
        }
        local_100 = 0x9345ef8ada2a66aa;
LAB_1800cae95:
        local_e0 = 0;
      }
    }
    if (uVar5 == 0x33441241dc1b94ae) {
      local_b0 = local_e0;
      fVar9 = *(float *)(local_a8 + 0x2c) - *(float *)(local_a8 + 0x24);
      lVar1 = local_a8 + 0x20;
      fVar2 = *(float *)(local_a8 + 0xc);
      fVar3 = *(float *)(local_a8 + 0x28);
      uVar7 = (uint)local_b8;
      local_d0[(uint)local_c0 & 1] = fVar3;
      local_d0[uVar7 & 1] = fVar2;
      uVar7 = (uint)local_b8;
      local_d0[(ulonglong)((uint)local_c0 & 1) + 2] = local_d4 * fVar9;
      local_d0[(ulonglong)(uVar7 & 1) + 2] = fVar9;
      local_90 = CONCAT44(SUB84(local_d0._0_8_,4) - SUB84(local_d0._8_8_,4),
                          (float)local_d0._0_8_ - (float)local_d0._8_8_);
      local_88 = fVar3;
      local_84 = fVar2;
      FUN_180173e70(lVar4,*(float *)(lVar4 + 0x44) * 14.0);
      FUN_180173e70(lVar1);
      local_f8 = 0x6e678aab7dae449b;
      if (local_b0 == 0) {
        local_f8 = 0x43f10556a485d0b0;
      }
      local_100 = 0xf576fe7ec2f7d711;
      local_e4 = param_3;
      goto LAB_1800cac50;
    }
    if (uVar5 == 0x395b7638969e421b) {
      uVar6 = FUN_180111340();
      local_108 = &DAT_1802a39ac;
      FUN_1800eb180(&DAT_1802a39a0,&DAT_180275663,0x17,9);
      local_70 = &DAT_1802a39a0;
      local_68 = 8;
      local_98 = FUN_180114180(uVar6,&local_70);
      local_f8 = 0xc625a00a49b0d48;
      if (local_98 == 0) {
        local_f8 = 0xfe600b181bf7964;
      }
      local_100 = 0x3ca212f05da4edca;
      goto LAB_1800cae95;
    }
    if (uVar5 == 0x6d616e2a865d9201) {
      if (DAT_1802a0400 == (local_60 ^ (ulonglong)auStack_128)) {
        return;
      }
    }
  } while( true );
}



void FUN_1800cb140(uint *param_1,longlong param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float *pfVar8;
  char *pcVar9;
  size_t sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char cVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  bool bVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 in_stack_fffffffffffffc48;
  float local_3a8 [4];
  float local_398 [4];
  float local_388 [4];
  undefined8 *local_378;
  undefined8 uStack_370;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  undefined8 *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  float local_338 [4];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  float local_2f8 [6];
  undefined8 local_2e0;
  ulonglong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  uint *local_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  float local_2a8 [2];
  uint *local_2a0;
  longlong local_298;
  uint *local_290;
  float local_288;
  float local_284;
  longlong local_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  float fStack_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  size_t local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  uint local_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  float local_1cc;
  char local_1c4 [12];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  undefined8 local_188;
  ulonglong local_180;
  ulonglong local_178;
  longlong local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  longlong local_148;
  uint local_134;
  longlong local_130;
  longlong local_128;
  uint local_11c;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  float local_100;
  float local_fc;
  uint local_f8;
  undefined1 local_f1;
  undefined8 local_f0;

  local_f0 = 0xfffffffffffffffe;
  local_fc = 1.0;
  local_1b8 = 0.4;
  local_1b4 = 0.5;
  local_100 = 0.0;
  local_1b0 = 0.001;
  local_1ac = 60.0;
  local_1a8 = 0.01;
  local_1a4 = 0.07;
  local_f8 = 0;
  local_f1 = 0;
  local_180 = 0xfff;
  local_280 = 0x27;
  local_1a0 = 0xffffffff;
  local_110 = 1;
  local_130 = 0x28;
  local_118 = 0xf;
  local_178 = 0x20;
  local_2b8 = 0xffffffffffffffe0;
  local_278 = 10;
  local_2b0 = 0xffe;
  local_11c = 2;
  local_170 = -8;
  local_188 = 3;
  local_108 = 0;
  local_270 = 0x10;
  local_134 = 1;
  lVar6 = FUN_1800eb430();
  fVar1 = *(float *)(param_2 + 0x44);
  local_358 = (undefined8 *)0x3f8000003f800000;
  uStack_350 = 0x3f800000;
  *(float *)((longlong)&local_358 + (ulonglong)((uint)local_188 & 3) * 4) = param_3 * 0.06;
  local_378 = local_358;
  uStack_370 = uStack_350;
  local_258 = (undefined8 *)0x3f8000003f800000;
  uStack_250 = CONCAT44(param_3 * 0.06,local_fc);
  uVar26 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  local_368._4_4_ = (int)*(undefined8 *)(param_2 + 0x14);
  local_368._0_4_ = uVar26;
  fStack_360 = (float)uVar26;
  fStack_35c = 0.0;
  *(undefined4 *)(local_368 + (ulonglong)((uint)local_188 & 3) * 4) = *(undefined4 *)(param_2 + 0x1c);
  fStack_150 = fVar1 * 0.5 + fStack_360;
  fStack_14c = fVar1 * -10.0 + fStack_35c;
  local_158 = (undefined8 *)CONCAT44(fVar1 * 6.0 + (float)local_368._4_4_,fVar1 * -0.5 + (float)local_368._0_4_);
  FUN_180172640(&local_158,&local_258,local_100);
  fVar33 = fVar1 * 14.0;
  local_298 = param_2;
  fVar31 = *(float *)(param_2 + 0x14) + fVar33 + (float)param_1[0x7a];
  local_2c0 = param_1 + 0x38;
  local_190 = fVar1 * 8.0;
  local_18c = fVar1 * 2.0;
  local_2d0 = lVar6 + 0x90;
  local_128 = lVar6;
  local_2c8 = lVar6 + 0x80;
  local_194 = fVar1 * 14.0;
  local_288 = param_3 * 0.6;
  local_284 = fVar1 * 12.0;
  local_290 = param_1 + 0x32;
  local_198 = fVar1 * 36.0;
  local_2a0 = param_1;
  uVar17 = local_108;
  while (lVar6 = local_298, uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffc48 >> 0x20), uVar17 != local_270) {
    uVar13 = *(uint *)(&DAT_1802145a0 + uVar17);
    local_2d8 = uVar17;
    uVar7 = FUN_180111340();
    FUN_180114770(uVar7,&local_158,uVar13);
    puVar15 = local_158;
    local_168 = *(float *)(local_298 + 0x10) + fVar33;
    fStack_160 = fVar1 * -7.0 + *(float *)(local_298 + 0x18);
    fStack_15c = local_198 + fVar31;
    bVar20 = false;
    if ((param_1[0x38] == local_f8) && (bVar20 = false, *(ulonglong *)(param_1 + 0x48) == local_108)) {
      bVar20 = uVar13 == *param_1;
    }
    bVar2 = false;
    if ((local_168 <= (float)param_1[0x85]) && (bVar2 = false, (float)param_1[0x85] <= fStack_160)) {
      if (fVar31 <= (float)param_1[0x86]) {
        bVar2 = (float)param_1[0x86] <= fStack_15c;
      }
      else {
        bVar2 = false;
      }
    }
    puVar4 = (undefined8 *)CONCAT44(fStack_14c,fStack_150);
    local_19c = uVar13;
    fStack_164 = fVar31;
    pfVar8 = (float *)FUN_1800c4a90(param_1,&DAT_1802145a0 + (longlong)(int)uVar13 * 4,local_100);
    fVar28 = local_100;
    if (puVar15 != puVar4) {
      fVar28 = local_1b8;
    }
    fVar21 = local_100;
    if (bVar2) {
      fVar21 = fVar28;
    }
    fVar28 = local_fc;
    if (bVar20 == false) {
      fVar28 = fVar21;
    }
    pfVar8[1] = fVar28;
    fVar21 = *(float *)(local_128 + 0xa4);
    if (local_fc <= fVar21) {
LAB_1800cb7f3:
      *pfVar8 = fVar28;
      fVar30 = fVar28;
    }
    else {
      fVar30 = *pfVar8;
      if (local_100 < fVar21) {
        uVar7 = FUN_1800ebf90();
        auVar22._8_4_ = (int)extraout_XMM0_Qb;
        auVar22._0_8_ = uVar7;
        auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = (float)uVar7 * local_1ac;
        fVar21 = (float)FUN_1801eaf60(local_fc - fVar21,auVar23._0_8_);
        fVar30 = (local_fc - fVar21) * (fVar28 - fVar30) + *pfVar8;
        *pfVar8 = fVar30;
        fVar28 = pfVar8[1];
      }
      if (ABS(fVar28 - fVar30) < local_1b0) goto LAB_1800cb7f3;
    }
    if (local_1a8 < fVar30) {
      local_258 = (undefined8 *)0x3f8000003f800000;
      uStack_250 = CONCAT44(local_1a4 * fVar30 * param_3,local_fc);
      FUN_180172640(&local_168,&local_258,local_190);
      fVar21 = fStack_15c;
      fVar28 = fStack_164;
      FUN_1800ebfa0(local_128,&local_1d8,local_f8);
      fVar21 = fVar21 - fVar28;
      fVar27 = fVar21 * local_1b4 * fVar30;
      local_258 = local_1d8;
      uStack_250 = CONCAT44(fVar30 * param_3,local_1d0);
      uVar7 = CONCAT44(fStack_164,local_168);
      uVar3 = CONCAT44(fStack_15c,fStack_160);
      local_338[0] = fVar1;
      local_338[1] = fVar1;
      local_338[2] = fVar1;
      local_338[3] = fVar1;
      local_338[(uint)local_110 & 3] = -fVar27;
      local_348 = CONCAT44(local_338[1],local_338[0]);
      uStack_340 = CONCAT44(local_338[3],local_338[2]);
      *(float *)((longlong)&local_348 + (ulonglong)((uint)local_188 & 3) * 4) = fVar27;
      local_328 = uVar7;
      uStack_320 = uVar3;
      *(float *)((longlong)&local_328 + (ulonglong)((uint)local_110 & 3) * 4) = fVar21 * 0.5 + fVar28;
      fStack_260 = (float)local_348 * -3.0 + (float)local_328;
      fStack_25c = uStack_340._4_4_ * 0.5 + local_328._4_4_;
      local_268 = CONCAT44(local_348._4_4_ * 0.5 + local_328._4_4_,(float)local_348 * -6.0 + (float)local_328);
      FUN_180172640(&local_268,&local_258,local_18c);
    }
    lVar6 = local_2c8;
    if (bVar20 != false) {
      lVar6 = local_2d0;
    }
    local_1d0 = *(undefined4 *)(lVar6 + 8);
    uVar13 = local_11c;
    if (bVar20 == false) {
      uVar13 = local_134;
    }
    local_1cc = *(float *)(lVar6 + 0xc);
    if (puVar15 == puVar4) {
      local_1cc = 0.35;
    }
    local_1cc = local_1cc * param_3;
    local_1d8 = *(undefined8 **)(local_128 + 0x80 + (ulonglong)bVar20 * 0x10);
    local_268 = CONCAT44(fVar1 * 9.0 + fStack_164,fVar1 * 12.0 + local_168);
    pcVar9 = (char *)FUN_180106230(local_19c);
    local_248 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    local_258 = (undefined8 *)0x0;
    uStack_250 = 0;
    sVar10 = strlen(pcVar9);
    if ((longlong)sVar10 < (longlong)local_108) {
      FUN_180002ac0();
    }
    puVar19 = &local_258;
    uVar17 = local_118;
    if (local_270 <= sVar10) {
      uVar11 = local_118 | sVar10;
      uVar17 = 0x16;
      if (0x16 < uVar11) {
        uVar17 = uVar11;
      }
      if (local_2b0 < uVar11) {
        lVar6 = FUN_1801d61c8(local_130 + uVar17);
        puVar19 = (undefined8 *)(local_280 + lVar6 & local_2b8);
        puVar19[-1] = lVar6;
        local_258 = puVar19;
      }
      else {
        puVar19 = (undefined8 *)FUN_1801d61c8(local_110 + uVar17);
        local_258 = puVar19;
      }
    }
    uStack_240 = (undefined4)uVar17;
    uStack_23c = (undefined4)(uVar17 >> 0x20);
    local_248 = sVar10;
    FUN_1802079d0(puVar19,pcVar9,sVar10);
    *(undefined1 *)((longlong)puVar19 + sVar10) = local_f1;
    in_stack_fffffffffffffc48 = CONCAT44(uVar26,uVar13);
    puVar19 = &local_258;
    FUN_180173000(puVar19,&local_268,&local_1d8,local_194,in_stack_fffffffffffffc48,local_f8);
    param_1 = local_2a0;
    if (local_118 < CONCAT44(uStack_23c,uStack_240)) {
      puVar14 = local_258;
      if ((local_180 < local_110 + CONCAT44(uStack_23c,uStack_240)) &&
         (puVar14 = (undefined8 *)local_258[-1],
         local_178 <= (ulonglong)((longlong)local_258 + (local_170 - (longlong)puVar14)))) goto LAB_1800cbf82;
      thunk_FUN_1801f42e0(puVar14);
    }
    uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffc48 >> 0x20);
    if (puVar15 != puVar4) {
      fStack_260 = *(float *)(local_128 + 0x88);
      local_268 = *(undefined8 *)(local_128 + 0x80);
      fStack_25c = local_288;
      local_2e0 = CONCAT44(fVar1 * 10.0 + fStack_164,fVar1 * -10.0 + fStack_160);
      uVar11 = 0;
      pcVar9 = local_1c4 + 1;
      uVar17 = CONCAT44(fStack_14c,fStack_150) - (longlong)local_158 >> ((byte)local_188 & 0x3f);
      do {
        if ((uVar17 | local_278) >> 0x20 == 0) {
          cVar16 = (char)((uVar17 & 0xffffffff) % (local_278 & 0xffffffff));
        }
        else {
          cVar16 = (char)(uVar17 % local_278);
        }
        pcVar9[-1] = cVar16 + '0';
        if ((uVar17 | local_278) >> 0x20 == 0) {
          uVar12 = (uVar17 & 0xffffffff) / (local_278 & 0xffffffff);
        }
        else {
          uVar12 = uVar17 / local_278;
        }
        pcVar9 = pcVar9 + -1;
        uVar11 = uVar11 + 1;
        bVar20 = local_278 <= uVar17;
        uVar17 = uVar12;
      } while (bVar20);
      local_258 = (undefined8 *)0x0;
      uStack_250 = 0;
      if ((longlong)uVar11 < (longlong)local_108) {
        FUN_180002ac0();
      }
      uVar17 = local_118;
      if (local_270 <= uVar11) {
        uVar12 = local_118 | uVar11;
        uVar17 = 0x16;
        if (0x16 < uVar12) {
          uVar17 = uVar12;
        }
        if (local_2b0 < uVar12) {
          lVar6 = FUN_1801d61c8(local_130 + uVar17);
          puVar19 = (undefined8 *)(local_280 + lVar6 & local_2b8);
          puVar19[-1] = lVar6;
          param_1 = local_2a0;
          local_258 = puVar19;
        }
        else {
          puVar19 = (undefined8 *)FUN_1801d61c8(local_110 + uVar17);
          param_1 = local_2a0;
          local_258 = puVar19;
        }
      }
      uStack_240 = (undefined4)uVar17;
      uStack_23c = (undefined4)(uVar17 >> 0x20);
      local_248 = uVar11;
      FUN_1802079d0(puVar19,pcVar9,uVar11);
      *(undefined1 *)((longlong)puVar19 + uVar11) = local_f1;
      in_stack_fffffffffffffc48 = CONCAT44(uVar26,local_f8);
      FUN_180173000(&local_258,&local_2e0,&local_268,local_284,in_stack_fffffffffffffc48,local_11c);
      uVar13 = local_19c;
      uVar17 = CONCAT44(uStack_23c,uStack_240);
      if (local_118 < uVar17) {
        uVar11 = local_110 + uVar17;
        puVar15 = local_258;
        if (local_180 < uVar11) {
          puVar15 = (undefined8 *)local_258[-1];
          if (local_178 <= (ulonglong)((longlong)local_258 + (local_170 - (longlong)puVar15))) goto LAB_1800cbf82;
          uVar11 = uVar17 + local_130;
        }
        thunk_FUN_1801f42e0(puVar15,uVar11);
      }
      local_258 = (undefined8 *)CONCAT44(fStack_164,local_168);
      uStack_250 = CONCAT44(fStack_15c,fStack_160);
      local_248 = CONCAT44(local_248._4_4_,local_11c);
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      local_230 = uVar13;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = local_118;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1e8 = local_1a0;
      uStack_1e4 = local_f8;
      puVar15 = *(undefined8 **)(param_1 + 0x34);
      if (puVar15 == *(undefined8 **)(param_1 + 0x36)) {
        FUN_1800e67f0(local_290);
        if (local_118 < uStack_210) {
          uVar17 = local_110 + uStack_210;
          lVar6 = local_228;
          if (local_180 < uVar17) {
            lVar6 = *(longlong *)(local_228 + -8);
            if (local_178 <= (ulonglong)((local_228 + local_170) - lVar6)) goto LAB_1800cbf82;
            uVar17 = uStack_210 + local_130;
          }
          thunk_FUN_1801f42e0(lVar6,uVar17);
        }
      }
      else {
        *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
        *(ulonglong *)((longlong)puVar15 + 0x24) = (ulonglong)uVar13 << 0x20;
        puVar15[2] = local_248;
        puVar15[3] = 0;
        *puVar15 = local_258;
        puVar15[1] = uStack_250;
        puVar15[8] = 0;
        puVar15[9] = 0;
        puVar15[6] = 0;
        puVar15[7] = 0;
        puVar15[8] = 0;
        puVar15[9] = local_118;
        puVar15[6] = 0;
        puVar15[7] = 0;
        puVar15[10] = 0;
        puVar15[0xb] = 0;
        puVar15[0xc] = 0;
        puVar15[0xd] = 0;
        puVar15[0xe] = CONCAT44(local_f8,local_1a0);
        *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
      }
    }
    if (local_158 != (undefined8 *)0x0) {
      uVar17 = local_148 - (longlong)local_158;
      puVar15 = local_158;
      if (local_180 < uVar17) {
        puVar15 = (undefined8 *)local_158[-1];
        if (local_178 <= (ulonglong)((longlong)local_158 + (local_170 - (longlong)puVar15))) goto LAB_1800cbf82;
        uVar17 = uVar17 + local_280;
      }
      thunk_FUN_1801f42e0(puVar15,uVar17);
    }
    fVar31 = fVar31 + fVar1 * 3.0 + fVar1 * 36.0;
    uVar17 = local_2d8 + 4;
  }
  local_258 = local_378;
  uStack_250 = uStack_370;
  fVar28 = *(float *)(local_298 + 0x18);
  uVar13 = (uint)local_110;
  local_2a8[(uint)local_108 & 1] = fVar33 + *(float *)(local_298 + 0x10);
  local_2a8[uVar13 & 1] = fVar31;
  local_398[0] = fVar1 * 6.0 + local_2a8[0];
  fVar21 = fVar1 * 6.0 + local_2a8[1];
  local_398[1] = fVar21;
  local_398[2] = fVar1 * 0.0 + 0.0;
  local_398[3] = fVar1 * 0.0 + 0.0;
  fStack_14c = local_398[(uint)local_110 & 3] + fVar1;
  local_158 = (undefined8 *)CONCAT44(fVar21,local_398[0]);
  fStack_150 = fVar1 * -14.0 + fVar28;
  FUN_180172640(&local_158,&local_258,local_100);
  uVar5 = local_134;
  fVar32 = fVar1 * -7.0 + *(float *)(lVar6 + 0x18);
  fVar28 = fVar1 * 14.0 + *(float *)(lVar6 + 0x10);
  fVar21 = fVar1 * 9.0 + fVar21;
  fVar27 = fVar1 * 0.0 + *(float *)(lVar6 + 0x18);
  fVar29 = fVar1 * 0.0 + *(float *)(lVar6 + 0x1c);
  local_3a8[0] = fVar28;
  local_3a8[1] = fVar21;
  local_3a8[2] = fVar27;
  local_3a8[3] = fVar29;
  fVar31 = local_3a8[(uint)local_110 & 3];
  fVar30 = local_198 + fVar31;
  local_158 = (undefined8 *)CONCAT44(fVar21,fVar28);
  uVar13 = param_1[0x38];
  fStack_150 = fVar32;
  fStack_14c = fVar30;
  pfVar8 = (float *)FUN_1800c4a90(param_1,local_2c0,local_100);
  fVar33 = local_fc;
  if (uVar13 != uVar5) {
    local_388[0] = fVar28;
    local_388[1] = fVar21;
    local_388[2] = fVar27;
    local_388[3] = fVar29;
    fVar33 = local_100;
    if ((((local_388[(uint)local_108 & 3] <= (float)param_1[0x85]) && ((float)param_1[0x85] <= fVar32)) &&
        (fVar31 <= (float)param_1[0x86])) && ((float)param_1[0x86] <= fVar30)) {
      fVar33 = local_1b8;
    }
  }
  pfVar8[1] = fVar33;
  fVar31 = *(float *)(local_128 + 0xa4);
  if (local_fc <= fVar31) {
LAB_1800cc410:
    fVar30 = fVar33;
    *pfVar8 = fVar30;
    uStack_250 = local_108;
    if (local_1a8 < fVar30) {
LAB_1800cc427:
      local_258 = (undefined8 *)0x3f8000003f800000;
      uStack_250 = CONCAT44(local_1a4 * fVar30 * param_3,local_fc);
      FUN_180172640(&local_158,&local_258,local_190);
      fVar31 = local_1b4 * (fStack_14c - local_158._4_4_) * fVar30;
      fVar21 = (fStack_14c - local_158._4_4_) * 0.5 + local_158._4_4_;
      FUN_1800ebfa0(local_128,&local_1d8,local_f8);
      local_318 = local_158;
      local_258 = local_1d8;
      uStack_250 = CONCAT44(fVar30 * param_3,local_1d0);
      uStack_310 = CONCAT44(fStack_14c,fStack_150);
      local_2f8[0] = fVar1;
      local_2f8[1] = fVar1;
      local_2f8[2] = fVar1;
      local_2f8[3] = fVar1;
      local_2f8[(uint)local_110 & 3] = -fVar31;
      local_308 = CONCAT44(local_2f8[1],local_2f8[0]);
      uStack_300 = CONCAT44(local_2f8[3],local_2f8[2]);
      *(float *)((longlong)&local_308 + (ulonglong)((uint)local_188 & 3) * 4) = fVar31;
      fVar31 = (float)local_308;
      fVar33 = local_308._4_4_;
      fVar28 = uStack_300._4_4_;
      *(float *)((longlong)&local_318 + (ulonglong)((uint)local_110 & 3) * 4) = fVar21;
      local_168 = fVar31 * -6.0 + (float)local_318;
      fStack_164 = fVar33 * 0.5 + local_318._4_4_;
      fStack_160 = fVar31 * -3.0 + (float)local_318;
      fStack_15c = fVar28 * 0.5 + local_318._4_4_;
      FUN_180172640(&local_168,&local_258,local_18c);
      fVar28 = SUB84(local_158,0);
      fVar21 = (float)((ulonglong)local_158 >> 0x20);
      uStack_250 = local_108;
    }
  }
  else {
    fVar30 = *pfVar8;
    if (local_100 < fVar31) {
      uVar7 = FUN_1800ebf90();
      auVar24._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar24._0_8_ = uVar7;
      auVar24._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar25._4_12_ = auVar24._4_12_;
      auVar25._0_4_ = (float)uVar7 * local_1ac;
      fVar31 = (float)FUN_1801eaf60(local_fc - fVar31,auVar25._0_8_);
      fVar30 = (local_fc - fVar31) * (fVar33 - fVar30) + *pfVar8;
      *pfVar8 = fVar30;
      fVar33 = pfVar8[1];
    }
    if (ABS(fVar33 - fVar30) < local_1b0) goto LAB_1800cc410;
    uStack_250 = local_108;
    if (local_1a8 < fVar30) goto LAB_1800cc427;
  }
  uVar18 = local_11c;
  if (uVar13 != uVar5) {
    uVar18 = local_134;
  }
  lVar6 = 0x80;
  if (uVar13 == uVar5) {
    lVar6 = 0x90;
  }
  local_1d0 = *(undefined4 *)(local_128 + 8 + lVar6);
  local_1d8 = *(undefined8 **)(local_128 + lVar6);
  local_168 = fVar1 * 12.0 + fVar28;
  fStack_164 = fVar1 * 9.0 + fVar21;
  local_248 = 7;
  uStack_240 = (undefined4)local_118;
  uStack_23c = (undefined4)(local_118 >> 0x20);
  uVar26 = 1;
  local_1cc = param_3;
  local_108 = uStack_250;
  FUN_1800eb180(&DAT_1802a3a4c,&DAT_18027591d,0x1e,8,&DAT_1802a3a54);
  local_258 = (undefined8 *)CONCAT17(local_f1,CONCAT34(uRam00000001802a3a50,DAT_1802a3a4c));
  FUN_180173000(&local_258,&local_168,&local_1d8,local_194,CONCAT44(uVar26,uVar18),local_f8);
  uVar17 = CONCAT44(uStack_23c,uStack_240);
  if (local_118 < uVar17) {
    uVar11 = local_110 + uVar17;
    puVar15 = local_258;
    if (local_180 < uVar11) {
      puVar15 = (undefined8 *)local_258[-1];
      if (local_178 <= (ulonglong)((longlong)local_258 + (local_170 - (longlong)puVar15))) goto LAB_1800cbf82;
      uVar11 = uVar17 + local_130;
    }
    thunk_FUN_1801f42e0(puVar15,uVar11);
  }
  uStack_250 = CONCAT44(fStack_14c,fStack_150);
  local_258 = local_158;
  local_248 = CONCAT44(local_248._4_4_,4);
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  local_230 = 3;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = local_118;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = local_1a0;
  uStack_1e4 = local_f8;
  puVar15 = *(undefined8 **)(param_1 + 0x34);
  if (puVar15 == *(undefined8 **)(param_1 + 0x36)) {
    FUN_1800e67f0(local_290,puVar15,&local_258);
    if (local_118 < uStack_210) {
      uVar17 = local_110 + uStack_210;
      lVar6 = local_228;
      if (local_180 < uVar17) {
        lVar6 = *(longlong *)(local_228 + -8);
        if (local_178 <= (ulonglong)((local_228 + local_170) - lVar6)) {
LAB_1800cbf82:
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f8,local_108);
        }
        uVar17 = uStack_210 + local_130;
      }
      thunk_FUN_1801f42e0(lVar6,uVar17);
    }
  }
  else {
    *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar15 + 0x24) = 0x300000000;
    puVar15[2] = local_248;
    puVar15[3] = 0;
    *puVar15 = local_158;
    puVar15[1] = uStack_250;
    puVar15[8] = 0;
    puVar15[9] = local_118;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xe] = CONCAT44(local_f8,local_1a0);
    *(longlong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + 0x78;
  }
  return;
}



void Unwind_1800cc6f0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800cc7d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800cc8b0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x180);
  return;
}



void Unwind_1800cc990(undefined8 param_1,longlong param_2)

{
  FUN_1800c5b80(param_2 + 0x280);
  return;
}



void Unwind_1800cca70(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x180);
  return;
}



void Unwind_1800ccb50(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x180);
  return;
}



void FUN_1800ccc30(longlong param_1,longlong param_2,float param_3)

{
  size_t _Size;
  longlong lVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  bool bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulonglong **ppuVar29;
  float local_468 [4];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined8 local_428;
  float fStack_420;
  float fStack_41c;
  undefined8 local_418;
  float fStack_410;
  float fStack_40c;
  float local_408 [4];
  float local_3f8 [2];
  undefined8 uStack_3f0;
  float local_3e8 [4];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  float local_3b8 [4];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  float local_398 [4];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  longlong local_368;
  ulonglong *local_360;
  longlong local_358;
  float *local_350;
  longlong local_348;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  ulonglong *local_330;
  ulonglong *local_328;
  undefined8 local_318;
  float local_310 [6];
  ulonglong *local_2f8;
  undefined8 uStack_2f0;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  ulonglong local_2b8;
  undefined8 local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  float fStack_290;
  float fStack_28c;
  undefined8 *local_288;
  longlong local_280;
  undefined7 local_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  ulonglong local_268;
  ulonglong uStack_260;
  float local_258;
  float local_254;
  float fStack_250;
  float local_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  longlong local_238;
  ulonglong local_230;
  ulonglong local_228;
  ulonglong local_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined4 local_200;
  undefined4 local_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e4;
  longlong local_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 local_148;
  uint local_144;
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  float local_124;
  longlong local_120;
  float local_114;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined1 local_f5;
  uint local_f4;
  undefined8 local_f0;

  local_f0 = 0xfffffffffffffffe;
  local_124 = 1.0;
  local_200 = 0x3d3851ec;
  local_114 = 0.0;
  local_f4 = 0;
  local_f5 = 0;
  local_140 = 0xfff;
  local_318 = 4;
  local_238 = 0x27;
  local_148 = 0xffffffff;
  local_110 = 1;
  local_120 = 0x28;
  local_100 = 0xf;
  local_2b8 = 0x23;
  local_130 = 0x20;
  local_230 = 0xffffffffffffffe0;
  local_228 = 0xffe;
  local_1fc = 2;
  local_2b0 = 6;
  local_138 = -8;
  local_144 = 3;
  local_108 = 0;
  local_2a8 = 0x12;
  local_2a0 = 0x11;
  local_220 = 0x10;
  local_1e4 = 1;
  lVar6 = FUN_1800eb430();
  fVar21 = *(float *)(param_2 + 0x44);
  local_288 = (undefined8 *)FUN_18004e770();
  lVar9 = param_2 + 0x20;
  FUN_180173e70(lVar9);
  local_350 = (float *)(param_1 + 0x13c);
  fVar18 = *(float *)(param_1 + 0x140);
  uVar16 = -(uint)(*(float *)(param_1 + 0x144) < fVar18);
  fVar22 = (float)(uVar16 & (uint)*(float *)(param_1 + 0x144) |
                  ~uVar16 & ((uint)local_114 & -(uint)(fVar18 < local_114) | ~-(uint)(fVar18 < local_114) & (uint)fVar18
                            ));
  *(float *)(param_1 + 0x140) = fVar22;
  fVar18 = *(float *)(lVar6 + 0xa4);
  local_1e0 = lVar6;
  if (local_124 <= fVar18) {
LAB_1800ccfee:
    *local_350 = fVar22;
    fVar24 = fVar22;
  }
  else {
    fVar24 = *local_350;
    if (local_114 < fVar18) {
      fVar17 = (float)FUN_1800ebf90();
      fVar18 = (float)FUN_1801eaf60(local_124 - fVar18,fVar17 * 60.0);
      fVar24 = (local_124 - fVar18) * (fVar22 - fVar24) + *(float *)(param_1 + 0x13c);
      *(float *)(param_1 + 0x13c) = fVar24;
      fVar22 = *(float *)(param_1 + 0x140);
    }
    if (ABS(fVar22 - fVar24) < 0.001) goto LAB_1800ccfee;
  }
  fVar27 = fVar21 * 7.0 + *(float *)(param_2 + 0x20);
  fVar18 = fVar21 * 9.0;
  uVar16 = -(uint)(0.5 < *(float *)(param_1 + 0x144));
  fVar17 = (fVar21 * -19.6 + *(float *)(param_2 + 0x40)) - (float)(~uVar16 & (uint)local_114 | uVar16 & (uint)fVar18);
  fVar23 = fVar21 * 14.0;
  fVar25 = *(float *)(param_2 + 0x24) + fVar23;
  local_254 = (fVar25 - fVar24) + *(float *)(param_1 + 0x1e8);
  local_24c = fVar21 * 36.0 + local_254;
  local_1c8 = 1.0;
  uStack_1c4._0_2_ = 0;
  uStack_1c4._2_2_ = 0x3f80;
  fStack_1c0 = 1.0;
  fStack_1bc = 0.045;
  local_258 = fVar27;
  fStack_250 = fVar17;
  FUN_180172640(&local_258,&local_1c8,fVar18);
  local_1c8 = 1.0;
  uStack_1c4._0_2_ = 0;
  uStack_1c4._2_2_ = 0x3f80;
  fStack_1c0 = 1.0;
  fStack_1bc = 0.05;
  local_378 = ZEXT416((uint)fVar18);
  FUN_1801728e0(&local_258,&local_1c8,fVar21);
  fVar18 = local_24c;
  fStack_334 = fVar21 * -7.0 + local_24c;
  fStack_33c = fVar21 * 7.0 + local_254;
  fStack_338 = fVar21 * -10.0 + fStack_250;
  local_468[0] = fStack_33c;
  local_468[1] = fStack_338;
  local_468[2] = fVar21 * 0.0 + 0.0;
  local_468[3] = fVar21 * 0.0 + 0.0;
  fVar22 = local_468[(uint)local_110 & 3] - fVar21 * 74.0;
  local_408[0] = local_254;
  local_408[1] = local_254;
  local_408[2] = local_254;
  local_408[3] = local_254;
  local_340 = fVar22;
  local_408[(uint)local_108 & 3] = local_258;
  local_428 = CONCAT44(local_408[1],local_408[0]);
  _fStack_410 = CONCAT44(local_408[3],fVar22);
  _fStack_420 = CONCAT44(fVar18,fVar22);
  local_218 = fVar21 * 10.0 + local_408[0];
  fStack_214 = fVar21 * 6.0 + local_408[1];
  fStack_210 = fVar21 * -10.0 + fVar22;
  fStack_20c = fVar21 * -6.0 + fVar18;
  fStack_1bc = (float)0x3e6147ae;
  if (*(char *)(param_1 + 0xe4) != '\0') {
    fStack_1bc = (float)0x3eb33333;
  }
  local_1c8 = 0.0;
  uStack_1c4._0_2_ = 0;
  uStack_1c4._2_2_ = 0;
  fStack_1c0 = local_114;
  local_418 = local_428;
  local_2e8 = fVar21;
  fStack_2e4 = fVar21;
  fStack_2e0 = fVar21;
  fStack_2dc = fVar21;
  FUN_180172640(&local_218,&local_1c8,fVar21 * 6.0);
  fStack_1bc = 0.07;
  if (*(char *)(param_1 + 0xe4) != '\0') {
    fStack_1bc = 0.2;
  }
  local_1c8 = 1.0;
  uStack_1c4._0_2_ = 0;
  uStack_1c4._2_2_ = 0x3f80;
  fStack_1c0 = local_124;
  FUN_1801728e0(&local_218,&local_1c8,fVar21);
  uVar12 = local_108;
  uVar13 = *(ulonglong *)(param_1 + 0xf8);
  local_2c8 = fVar23;
  local_2c4 = fVar25;
  local_280 = param_2;
  if ((uVar13 == local_108) && (*(char *)(param_1 + 0xe4) == '\0')) {
    local_268 = local_100;
    uStack_260 = local_100;
    FUN_1800eb180(&DAT_1802a3b0c,&DAT_180275b60,0x13,0x10,&DAT_1802a3b1c);
    uStack_270 = uRam00000001802a3b14;
    local_278 = (undefined7)DAT_1802a3b0c;
    uStack_271 = DAT_1802a3b0c._7_1_;
    uStack_269 = local_f5;
  }
  else {
    local_268 = 0;
    uStack_260 = 0;
    local_278 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_269 = 0;
    puVar10 = (undefined8 *)(param_1 + 0xe8);
    if (local_100 < *(ulonglong *)(param_1 + 0x100)) {
      puVar10 = *(undefined8 **)(param_1 + 0xe8);
    }
    if ((longlong)uVar13 < (longlong)local_108) {
      FUN_180002ac0();
    }
    if (uVar13 < local_220) {
      uStack_260 = local_100;
      local_278 = (undefined7)*puVar10;
      uStack_271 = (undefined1)((ulonglong)*puVar10 >> 0x38);
      uStack_270 = (undefined7)puVar10[1];
      uStack_269 = (undefined1)((ulonglong)puVar10[1] >> 0x38);
      local_268 = uVar13;
    }
    else {
      uVar7 = local_100 | uVar13;
      uVar8 = 0x16;
      if (0x16 < uVar7) {
        uVar8 = uVar7;
      }
      if (local_228 < uVar7) {
        lVar6 = FUN_1801d61c8(local_120 + uVar8);
        uVar7 = local_238 + lVar6 & local_230;
        *(longlong *)(uVar7 - 8) = lVar6;
      }
      else {
        uVar7 = FUN_1801d61c8(local_110 + uVar8);
      }
      local_278 = (undefined7)uVar7;
      uStack_271 = (undefined1)(uVar7 >> 0x38);
      local_268 = uVar13;
      uStack_260 = uVar8;
      FUN_1802079d0(uVar7,puVar10,local_110 + uVar13);
      param_2 = local_280;
    }
  }
  fVar18 = fStack_20c;
  fVar22 = fStack_214;
  fVar23 = (float)FUN_180173310();
  local_3f8[0] = local_2e8;
  local_3f8[1] = fStack_2e4;
  uStack_3f0 = CONCAT44(fStack_2dc,fStack_2e0);
  local_3f8[(uint)local_110 & 3] = (fVar18 - fVar22) - fVar23;
  fVar23 = fStack_210;
  fVar18 = local_218;
  uVar16 = (uint)local_110;
  local_310[(uint)local_108 & 1] = local_218;
  local_310[uVar16 & 1] = fVar22;
  local_330 = (ulonglong *)
              CONCAT44(local_3f8[1] * 0.5 + SUB84(local_310._0_8_,4),local_3f8[0] * 9.0 + (float)local_310._0_8_);
  FUN_180173430(&local_1c8,&local_278,fVar21 * -20.0 + (fVar23 - fVar18));
  local_358 = local_1e0 + 0x70;
  lVar6 = local_1e0 + 0x80;
  if (uVar13 != uVar12) {
    lVar6 = local_358;
  }
  uVar16 = local_f4;
  FUN_180173000(&local_1c8,&local_330,lVar6);
  uVar13 = CONCAT44(uStack_1ac,uStack_1b0);
  if (local_100 < uVar13) {
    lVar1 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
    uVar12 = local_110 + uVar13;
    lVar6 = lVar1;
    if (local_140 < uVar12) {
      lVar6 = *(longlong *)(lVar1 + -8);
      if (local_130 <= (ulonglong)((lVar1 + local_138) - lVar6)) goto LAB_1800cf07a;
      uVar12 = uVar13 + local_120;
    }
    thunk_FUN_1801f42e0(lVar6,uVar12);
  }
  if (*(char *)(param_1 + 0xe4) == '\x01') {
    FUN_1800eb440();
    fVar22 = (float)FUN_1801ebe20();
    fVar18 = local_218;
    if (fVar22 < 0.55) {
      fVar22 = (float)FUN_180173360((undefined8 *)(param_1 + 0xe8));
      fVar22 = fVar21 * 9.0 + fVar18 + fVar22;
      local_1c8 = fVar21 + fVar22;
      fVar18 = fVar21 * -5.0 + fStack_20c;
      local_3e8[0] = fStack_214;
      local_3e8[1] = fStack_214;
      local_3e8[2] = fStack_214;
      local_3e8[3] = fStack_214;
      local_3e8[(uint)local_110 & 3] = fVar22;
      uStack_1c4 = local_2e8 * 5.0 + local_3e8[0];
      fStack_1c0 = fStack_2e4 * 2.5 + local_3e8[1];
      fStack_1bc = fVar18;
      FUN_180172640(&local_1c8,local_1e0 + 0x90,local_114);
    }
  }
  ppuVar29 = &local_330;
  FUN_1800ebfa0(local_1e0,ppuVar29,local_f4);
  local_1c8 = 0.0;
  uStack_1c4._0_2_ = 0;
  uStack_1c4._2_2_ = 0;
  fStack_1c0 = 0.0;
  fStack_1bc = 0.0;
  local_1b8 = local_2b0;
  uStack_1b0 = (undefined4)local_100;
  uStack_1ac = (undefined4)(local_100 >> 0x20);
  FUN_1800eb180(&DAT_1802a3b20,&DAT_180275b9d,0x13,7,&DAT_1802a3b28,uVar16);
  uStack_1c4._0_2_ = DAT_1802a3b24;
  local_1c8 = DAT_1802a3b20;
  FUN_1800dbdb0(param_1,&local_340,&local_1c8);
  uVar13 = CONCAT44(uStack_1ac,uStack_1b0);
  if (local_100 < uVar13) {
    lVar1 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
    uVar12 = local_110 + uVar13;
    lVar6 = lVar1;
    if (local_140 < uVar12) {
      lVar6 = *(longlong *)(lVar1 + -8);
      if (local_130 <= (ulonglong)((lVar1 + local_138) - lVar6)) goto LAB_1800cf07a;
      uVar12 = uVar13 + local_120;
    }
    thunk_FUN_1801f42e0(lVar6,uVar12);
  }
  local_1c8 = local_218;
  uStack_1c4._0_2_ = SUB42(fStack_214,0);
  uStack_1c4._2_2_ = (undefined2)((uint)fStack_214 >> 0x10);
  fStack_1c0 = fStack_210;
  fStack_1bc = fStack_20c;
  local_1b8 = CONCAT44(local_1b8._4_4_,8);
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = local_144;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = local_100;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = local_148;
  uStack_154 = local_f4;
  puVar10 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar10 == *(undefined8 **)(param_1 + 0xd8)) {
    FUN_1800e67f0(param_1 + 200,puVar10,&local_1c8);
    if (local_100 < uStack_180) {
      uVar12 = local_110 + uStack_180;
      uVar13 = local_198;
      if (local_140 < uVar12) {
        uVar13 = *(ulonglong *)(local_198 - 8);
        if (local_130 <= (local_198 + local_138) - uVar13) goto LAB_1800cf07a;
        uVar12 = uStack_180 + local_120;
      }
      thunk_FUN_1801f42e0(uVar13,uVar12);
    }
  }
  else {
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
    *(ulonglong *)((longlong)puVar10 + 0x24) = (ulonglong)local_144 << 0x20;
    puVar10[2] = local_1b8;
    puVar10[3] = 0;
    *puVar10 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_218));
    puVar10[1] = CONCAT44(fStack_20c,fStack_210);
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = local_100;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(undefined1 (*) [16])(puVar10 + 0xc) = ZEXT816(0);
    puVar10[0xe] = CONCAT44(local_f4,local_148);
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 0x78;
  }
  local_1c8 = local_340;
  uStack_1c4._0_2_ = SUB42(fStack_33c,0);
  uStack_1c4._2_2_ = (undefined2)((uint)fStack_33c >> 0x10);
  fStack_1c0 = fStack_338;
  fStack_1bc = fStack_334;
  local_1b8 = CONCAT44(local_1b8._4_4_,9);
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = local_144;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = local_100;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = local_148;
  uStack_154 = local_f4;
  puVar10 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar10 == *(undefined8 **)(param_1 + 0xd8)) {
    FUN_1800e67f0(param_1 + 200,puVar10,&local_1c8);
    if (local_100 < uStack_180) {
      uVar12 = local_110 + uStack_180;
      uVar13 = local_198;
      if (local_140 < uVar12) {
        uVar13 = *(ulonglong *)(local_198 - 8);
        if (local_130 <= (local_198 + local_138) - uVar13) goto LAB_1800cf07a;
        uVar12 = uStack_180 + local_120;
      }
      thunk_FUN_1801f42e0(uVar13,uVar12);
    }
  }
  else {
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
    *(ulonglong *)((longlong)puVar10 + 0x24) = (ulonglong)local_144 << 0x20;
    puVar10[2] = local_1b8;
    puVar10[3] = 0;
    *puVar10 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_340));
    puVar10[1] = CONCAT44(fStack_334,fStack_338);
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = local_100;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(undefined1 (*) [16])(puVar10 + 0xc) = ZEXT816(0);
    puVar10[0xe] = CONCAT44(local_f4,local_148);
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 0x78;
  }
  fVar18 = fVar21 * 7.0 * 1.6 + local_24c;
  FUN_1800512c0(local_288,&local_330);
  if (local_330 == local_328) {
    fStack_1cc = param_3 * 0.7;
    fStack_1d0 = *(float *)(local_1e0 + 0x88);
    local_1d8 = (float)*(undefined8 *)(local_1e0 + 0x80);
    fStack_1d4 = (float)((ulonglong)*(undefined8 *)(local_1e0 + 0x80) >> 0x20);
    uVar16 = (uint)local_110;
    local_310[(ulonglong)((uint)local_108 & 1) + 4] = fVar17 - fVar27;
    local_310[(ulonglong)(uVar16 & 1) + 4] = fVar21;
    uVar16 = (uint)local_110;
    local_310[(ulonglong)((uint)local_108 & 1) + 2] = fVar27;
    local_310[(ulonglong)(uVar16 & 1) + 2] = fVar18;
    local_1f8 = (float)local_310._16_8_ * 0.5 + (float)local_310._8_8_;
    fStack_1f4 = SUB84(local_310._16_8_,4) * 20.0 + SUB84(local_310._8_8_,4);
    local_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    local_1c8 = 0.0;
    uStack_1c4._0_2_ = 0;
    uStack_1c4._2_2_ = 0;
    fStack_1c0 = 0.0;
    fStack_1bc = 0.0;
    puVar10 = (undefined8 *)FUN_1801d61c8(local_130);
    local_1c8 = SUB84(puVar10,0);
    uStack_1c4._0_2_ = (undefined2)((ulonglong)puVar10 >> 0x20);
    uStack_1c4._2_2_ = (undefined2)((ulonglong)puVar10 >> 0x30);
    local_1b8 = 0x14;
    uStack_1b0 = 0x1f;
    uStack_1ac = 0;
    FUN_1800eb180(&DAT_1802a3b2c,&DAT_180275bcd,0x1c,0x15,&DAT_1802a3b44);
    *(undefined4 *)(puVar10 + 2) = DAT_1802a3b3c;
    uVar28 = uRam00000001802a3b34;
    *puVar10 = _DAT_1802a3b2c;
    puVar10[1] = uVar28;
    *(undefined1 *)((longlong)puVar10 + 0x14) = local_f5;
    FUN_180173000(&local_1c8,&local_1f8,&local_1d8);
    uVar13 = CONCAT44(uStack_1ac,uStack_1b0);
    if (local_100 < uVar13) {
      lVar6 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
      uVar12 = local_110 + uVar13;
      lVar9 = lVar6;
      if (local_140 < uVar12) {
        lVar9 = *(longlong *)(lVar6 + -8);
        if (local_130 <= (ulonglong)((lVar6 + local_138) - lVar9)) goto LAB_1800cf07a;
        uVar12 = uVar13 + local_120;
      }
      thunk_FUN_1801f42e0(lVar9,uVar12);
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_180174140();
  }
  else {
    local_2d0 = fVar21 * 1.5;
    local_368 = local_1e0 + 0x90;
    local_2cc = fVar21 * 11.5;
    local_2d4 = fVar21 * 22.0;
    fVar23 = fVar21 * 58.0;
    fVar22 = fVar21 * -8.0;
    local_438 = local_2e8 * 3.0;
    fStack_434 = fStack_2e4 * 8.0;
    fStack_430 = fStack_2e0 * 0.0;
    fStack_42c = fStack_2dc * 0.0;
    local_360 = local_328;
    puVar11 = local_328;
    puVar14 = local_330;
    local_348 = lVar9;
    local_2c0 = param_3;
    local_2bc = fVar24;
    if (local_330 != local_328) {
      do {
        while( true ) {
          fVar24 = fVar18;
          uVar19 = (undefined4)((ulonglong)ppuVar29 >> 0x20);
          fVar18 = fVar21 * 42.0 + fVar24;
          local_1d8 = fVar27;
          fStack_1d4 = fVar24;
          fStack_1d0 = fVar17;
          fStack_1cc = fVar18;
          if ((fVar18 <= *(float *)(param_2 + 0x24)) || (*(float *)(param_2 + 0x2c) <= fVar24)) break;
          _Size = local_288[2];
          puVar10 = local_288;
          if (local_100 < (ulonglong)local_288[3]) {
            puVar10 = (undefined8 *)*local_288;
          }
          puVar11 = puVar14;
          if (local_100 < puVar14[3]) {
            puVar11 = (ulonglong *)*puVar14;
          }
          if (puVar14[2] == _Size) {
            bVar15 = true;
            if (_Size != local_108) {
              uVar16 = memcmp(puVar11,puVar10,_Size);
              bVar15 = uVar16 == local_f4;
            }
          }
          else {
            bVar15 = false;
          }
          fStack_1bc = (float)local_200;
          if ((((fVar27 <= *(float *)(param_1 + 0x214)) && (*(float *)(param_1 + 0x214) <= fVar17)) &&
              (fVar24 <= *(float *)(param_1 + 0x218))) && (*(float *)(param_1 + 0x218) <= fVar18)) {
            fStack_1bc = 0.075;
          }
          local_1c8 = 1.0;
          uStack_1c4._0_2_ = 0;
          uStack_1c4._2_2_ = 0x3f80;
          fStack_1c0 = local_124;
          FUN_180172640(&local_1d8,&local_1c8,local_378._0_4_);
          fStack_1bc = 0.05;
          if (bVar15) {
            fStack_1bc = 0.14;
          }
          local_1c8 = 1.0;
          uStack_1c4._0_2_ = 0;
          uStack_1c4._2_2_ = 0x3f80;
          fStack_1c0 = local_124;
          FUN_1801728e0(&local_1d8,&local_1c8,fVar21);
          if (bVar15) {
            FUN_1800ebfa0(local_1e0,&local_1c8,local_f4);
            fStack_1ec = fStack_1cc + fVar22;
            fStack_1f0 = local_438 + local_1d8;
            fStack_1f4 = fStack_434 + fStack_1d4;
            local_458 = CONCAT44(fStack_1d4,local_1d8);
            uStack_450 = 0;
            local_1f8 = *(float *)((longlong)&local_458 + (ulonglong)((uint)local_108 & 3) * 4);
            FUN_180172640(&local_1f8,&local_1c8,local_2d0);
          }
          fVar24 = fStack_1cc;
          fVar18 = fStack_1d4;
          fVar25 = (float)FUN_180173310();
          lVar9 = local_368;
          uVar5 = local_1fc;
          if (!bVar15) {
            lVar9 = local_358;
            uVar5 = local_1e4;
          }
          local_3d8 = CONCAT44(fStack_1d4,local_1d8);
          uStack_3d0 = CONCAT44(fStack_1cc,fStack_1d0);
          local_3c8 = CONCAT44(fStack_2e4,local_2e8);
          uStack_3c0 = CONCAT44(fStack_2dc,fStack_2e0);
          *(float *)((longlong)&local_3c8 + (ulonglong)((uint)local_110 & 3) * 4) = (fVar24 - fVar18) - fVar25;
          fVar24 = (float)local_3c8;
          fVar25 = local_3c8._4_4_;
          fVar26 = (float)uStack_3c0;
          fVar2 = uStack_3c0._4_4_;
          *(float *)((longlong)&local_3d8 + (ulonglong)((uint)local_110 & 3) * 4) = fVar18;
          fVar18 = fVar24 * 14.0 + (float)local_3d8;
          fVar24 = fVar25 * 0.5 + local_3d8._4_4_;
          fVar25 = fVar26 * 0.0 + (float)uStack_3d0;
          fVar26 = fVar2 * 0.0 + uStack_3d0._4_4_;
          uVar28 = CONCAT44(uVar19,uVar5);
          uVar16 = local_f4;
          local_1c8 = fVar18;
          uStack_1c4 = fVar24;
          FUN_180173000(puVar14,&local_1c8,lVar9);
          if (bVar15) {
            uVar19 = FUN_180173360(puVar14);
            FUN_1800ebfa0(local_1e0,&local_248,local_f4);
            local_1f8 = local_248;
            fStack_1f4 = fStack_244;
            fStack_1f0 = fStack_240;
            fStack_1ec = 0.85;
            fVar20 = fVar21 * 22.0 + local_1d8;
            local_3a8 = CONCAT44(fStack_2e4,local_2e8);
            uStack_3a0 = CONCAT44(fStack_2dc,fStack_2e0);
            *(undefined4 *)((longlong)&local_3a8 + (ulonglong)((uint)local_108 & 3) * 4) = uVar19;
            fVar2 = (float)local_3a8;
            fVar3 = local_3a8._4_4_;
            local_3b8[0] = fVar18;
            local_3b8[1] = fVar24;
            local_3b8[2] = fVar25;
            local_3b8[3] = fVar26;
            local_3b8[(uint)local_108 & 3] = fVar20;
            local_298 = CONCAT44(fVar3 + local_3b8[1],fVar2 + local_3b8[0]);
            local_1c8 = 0.0;
            uStack_1c4._0_2_ = 0;
            uStack_1c4._2_2_ = 0;
            fStack_1c0 = 0.0;
            fStack_1bc = 0.0;
            local_1b8 = local_2b0;
            uStack_1b0 = (undefined4)local_100;
            uStack_1ac = (undefined4)(local_100 >> 0x20);
            uVar19 = 1;
            FUN_1800eb180(&DAT_1802a3b48,&DAT_180275c1c,0x1b,7,&DAT_1802a3b50);
            uStack_1c4._0_2_ = DAT_1802a3b4c;
            local_1c8 = DAT_1802a3b48;
            uVar28 = CONCAT44(uVar19,local_1e4);
            uVar16 = local_f4;
            FUN_180173000(&local_1c8,&local_298,&local_1f8);
            uVar13 = CONCAT44(uStack_1ac,uStack_1b0);
            if (local_100 < uVar13) {
              lVar6 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
              uVar12 = local_110 + uVar13;
              lVar9 = lVar6;
              if (local_140 < uVar12) {
                lVar9 = *(longlong *)(lVar6 + -8);
                if (local_130 <= (ulonglong)((lVar6 + local_138) - lVar9)) goto LAB_1800cf07a;
                uVar12 = uVar13 + local_120;
              }
              thunk_FUN_1801f42e0(lVar9,uVar12);
            }
          }
          fVar25 = fStack_1d0;
          fVar24 = fStack_1d4;
          fVar18 = local_2d4;
          local_448 = CONCAT44(fStack_1d0,fStack_1d4);
          uStack_440 = 0;
          local_388 = CONCAT44(fStack_2e4,local_2e8);
          uStack_380 = CONCAT44(fStack_2dc,fStack_2e0);
          *(float *)((longlong)&local_388 + (ulonglong)((uint)local_108 & 3) * 4) =
               (fStack_1cc - *(float *)((longlong)&local_448 + (ulonglong)((uint)local_108 & 3) * 4)) - local_2d4;
          fStack_1f4 = (float)local_388 * 0.5 + fVar24;
          fStack_1f0 = local_388._4_4_ * -12.0 + fVar25;
          local_398[0] = fStack_1f4;
          local_398[1] = fStack_1f0;
          local_398[2] = (float)uStack_380 * 0.0 + 0.0;
          local_398[3] = uStack_380._4_4_ * 0.0 + 0.0;
          local_1f8 = local_398[(uint)local_110 & 3] - fVar23;
          fStack_244 = local_398[(uint)local_108 & 3];
          fStack_28c = fVar18 + fStack_244;
          fStack_240 = local_1f8 + fVar22;
          local_248 = fStack_240 - fVar23;
          fStack_290 = local_248 + fVar22;
          local_298 = CONCAT44(fStack_244,fStack_290 - fVar23);
          fStack_23c = fStack_28c;
          fStack_1ec = fStack_28c;
          FUN_1800ebfa0(local_1e0,&local_2f8,local_f4,fStack_28c,uVar28,uVar16);
          uStack_1c4._0_2_ = 0;
          uStack_1c4._2_2_ = 0;
          fStack_1c0 = 0.0;
          fStack_1bc = 0.0;
          local_1b8 = local_318;
          uStack_1b0 = (undefined4)local_100;
          uStack_1ac = (undefined4)(local_100 >> 0x20);
          local_1c8 = 1.6634149e+22;
          cVar4 = FUN_1800dbdb0(param_1,&local_298,&local_1c8);
          uVar13 = CONCAT44(uStack_1ac,uStack_1b0);
          if (local_100 < uVar13) {
            lVar6 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
            uVar12 = local_110 + uVar13;
            lVar9 = lVar6;
            if (local_140 < uVar12) {
              lVar9 = *(longlong *)(lVar6 + -8);
              if (local_130 <= (ulonglong)((lVar6 + local_138) - lVar9)) goto LAB_1800cf07a;
              uVar12 = uVar13 + local_120;
            }
            thunk_FUN_1801f42e0(lVar9,uVar12);
          }
          uVar13 = local_2a0;
          if (cVar4 != '\0') {
            if (*(ulonglong *)(param_1 + 0x208) < local_2a0) {
              FUN_1800eb180(&DAT_1802a3b54,&DAT_180275c57,0x17,0x12,&DAT_1802a3b68);
              FUN_18007f460(param_1 + 0x1f0,uVar13);
            }
            else {
              puVar10 = *(undefined8 **)(param_1 + 0x1f0);
              *(ulonglong *)(param_1 + 0x200) = local_2a0;
              FUN_1800eb180(&DAT_1802a3b54,&DAT_180275c57,0x17,0x12,&DAT_1802a3b68);
              *(undefined1 *)(puVar10 + 2) = DAT_1802a3b64;
              uVar28 = uRam00000001802a3b5c;
              *puVar10 = _DAT_1802a3b54;
              puVar10[1] = uVar28;
              *(undefined1 *)((longlong)puVar10 + 0x11) = local_f5;
            }
          }
          local_2f8 = (ulonglong *)0x3f23a3a43f1a9a9b;
          uStack_2f0 = 0x3f8000003f34b4b5;
          uStack_1c4._0_2_ = 0;
          uStack_1c4._2_2_ = 0;
          fStack_1c0 = 0.0;
          fStack_1bc = 0.0;
          local_1b8 = local_318;
          uStack_1b0 = (undefined4)local_100;
          uStack_1ac = (undefined4)(local_100 >> 0x20);
          local_1c8 = 7.271859e+22;
          cVar4 = FUN_1800dbdb0(param_1,&local_248,&local_1c8);
          uVar13 = CONCAT44(uStack_1ac,uStack_1b0);
          if (local_100 < uVar13) {
            lVar6 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
            uVar12 = local_110 + uVar13;
            lVar9 = lVar6;
            if (local_140 < uVar12) {
              lVar9 = *(longlong *)(lVar6 + -8);
              if (local_130 <= (ulonglong)((lVar6 + local_138) - lVar9)) goto LAB_1800cf07a;
              uVar12 = uVar13 + local_120;
            }
            thunk_FUN_1801f42e0(lVar9,uVar12);
          }
          uVar13 = local_2b8;
          if (cVar4 != '\0') {
            if (*(ulonglong *)(param_1 + 0x208) < local_2b8) {
              FUN_1800eb180(&DAT_1802a3b6c,&DAT_180275c9d,0x1c,0x24,&DAT_1802a3b90);
              FUN_18007f460(param_1 + 0x1f0,uVar13);
            }
            else {
              puVar10 = *(undefined8 **)(param_1 + 0x1f0);
              *(ulonglong *)(param_1 + 0x200) = local_2b8;
              FUN_1800eb180(&DAT_1802a3b6c,&DAT_180275c9d,0x1c,0x24,&DAT_1802a3b90);
              *(undefined4 *)((longlong)puVar10 + 0x1f) = DAT_1802a3b8b;
              uVar28 = CONCAT17((undefined1)DAT_1802a3b8b,uRam00000001802a3b84);
              puVar10[2] = _DAT_1802a3b7c;
              puVar10[3] = uVar28;
              uVar28 = uRam00000001802a3b74;
              *puVar10 = _DAT_1802a3b6c;
              puVar10[1] = uVar28;
              *(undefined1 *)((longlong)puVar10 + 0x23) = local_f5;
            }
          }
          local_2f8 = (ulonglong *)0x3ed6d6d73f800000;
          uStack_2f0 = 0x3f8000003ec0c0c1;
          local_1c8 = 0.0;
          uStack_1c4._0_2_ = 0;
          uStack_1c4._2_2_ = 0;
          fStack_1c0 = 0.0;
          fStack_1bc = 0.0;
          local_1b8 = local_2b0;
          uStack_1b0 = (undefined4)local_100;
          uStack_1ac = (undefined4)(local_100 >> 0x20);
          FUN_1800eb180(&DAT_1802a3b94,&DAT_180275cf8,0x1d,7,&DAT_1802a3b9c);
          uStack_1c4._0_2_ = DAT_1802a3b98;
          local_1c8 = DAT_1802a3b94;
          ppuVar29 = &local_2f8;
          cVar4 = FUN_1800dbdb0(param_1,&local_1f8,&local_1c8);
          uVar13 = CONCAT44(uStack_1ac,uStack_1b0);
          if (local_100 < uVar13) {
            lVar6 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
            uVar12 = local_110 + uVar13;
            lVar9 = lVar6;
            if (local_140 < uVar12) {
              lVar9 = *(longlong *)(lVar6 + -8);
              if (local_130 <= (ulonglong)((lVar6 + local_138) - lVar9)) goto LAB_1800cf07a;
              uVar12 = uVar13 + local_120;
            }
            thunk_FUN_1801f42e0(lVar9,uVar12);
          }
          uVar13 = local_2a8;
          if (cVar4 != '\0') {
            if (*(ulonglong *)(param_1 + 0x208) < local_2a8) {
              ppuVar29 = (ulonglong **)&DAT_1802a3bb4;
              FUN_1800eb180(&DAT_1802a3ba0,&DAT_180275d38,0x18,0x13,&DAT_1802a3bb4);
              FUN_18007f460(param_1 + 0x1f0,uVar13);
            }
            else {
              puVar10 = *(undefined8 **)(param_1 + 0x1f0);
              *(ulonglong *)(param_1 + 0x200) = local_2a8;
              ppuVar29 = (ulonglong **)&DAT_1802a3bb4;
              FUN_1800eb180(&DAT_1802a3ba0,&DAT_180275d38,0x18,0x13,&DAT_1802a3bb4);
              *(undefined2 *)(puVar10 + 2) = DAT_1802a3bb0;
              uVar28 = uRam00000001802a3ba8;
              *puVar10 = _DAT_1802a3ba0;
              puVar10[1] = uVar28;
              *(undefined1 *)((longlong)puVar10 + 0x12) = local_f5;
            }
          }
          local_1c8 = (float)local_298;
          uStack_1c4._0_2_ = (undefined2)((ulonglong)local_298 >> 0x20);
          uStack_1c4._2_2_ = (undefined2)((ulonglong)local_298 >> 0x30);
          fStack_1c0 = fStack_290;
          fStack_1bc = fStack_28c;
          local_1b8 = CONCAT44(local_1b8._4_4_,5);
          uStack_1b0 = 0;
          uStack_1ac = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1a0 = local_144;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          uVar13 = puVar14[2];
          puVar11 = puVar14;
          if (local_100 < puVar14[3]) {
            puVar11 = (ulonglong *)*puVar14;
          }
          if ((longlong)uVar13 < (longlong)local_108) {
            FUN_180002ac0();
          }
          if (uVar13 < local_220) {
            uStack_180 = local_100;
            local_198 = *puVar11;
            uStack_190 = puVar11[1];
            local_188 = uVar13;
          }
          else {
            uVar8 = local_100 | uVar13;
            uVar12 = 0x16;
            if (0x16 < uVar8) {
              uVar12 = uVar8;
            }
            if (local_228 < uVar8) {
              lVar9 = FUN_1801d61c8(local_120 + uVar12);
              local_198 = local_238 + lVar9 & local_230;
              *(longlong *)(local_198 - 8) = lVar9;
            }
            else {
              local_198 = FUN_1801d61c8(local_110 + uVar12);
            }
            local_188 = uVar13;
            uStack_180 = uVar12;
            FUN_1802079d0(local_198,puVar11,uVar13 + local_110);
          }
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_158 = local_148;
          uStack_154 = local_f4;
          puVar10 = *(undefined8 **)(param_1 + 0xd0);
          if (puVar10 == *(undefined8 **)(param_1 + 0xd8)) {
            FUN_1800e67f0(param_1 + 200,puVar10,&local_1c8);
            if (local_100 < uStack_180) {
              uVar12 = local_110 + uStack_180;
              uVar13 = local_198;
              if (local_140 < uVar12) {
                uVar13 = *(ulonglong *)(local_198 - 8);
                if (local_130 <= (local_198 + local_138) - uVar13) goto LAB_1800cf07a;
                uVar12 = uStack_180 + local_120;
              }
              thunk_FUN_1801f42e0(uVar13,uVar12);
            }
          }
          else {
            *(ulonglong *)((longlong)puVar10 + 0x1c) = CONCAT44(uStack_1a8,uStack_1ac);
            *(ulonglong *)((longlong)puVar10 + 0x24) = CONCAT44(uStack_1a0,uStack_1a4);
            puVar10[2] = local_1b8;
            puVar10[3] = CONCAT44(uStack_1ac,uStack_1b0);
            *puVar10 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
            puVar10[1] = CONCAT44(fStack_1bc,fStack_1c0);
            puVar10[8] = 0;
            puVar10[9] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = local_188;
            puVar10[9] = uStack_180;
            puVar10[6] = local_198;
            puVar10[7] = uStack_190;
            puVar10[10] = 0;
            puVar10[0xb] = 0;
            *(undefined1 (*) [16])(puVar10 + 0xc) = ZEXT816(0);
            puVar10[0xe] = CONCAT44(local_f4,local_148);
            *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 0x78;
          }
          local_1c8 = local_248;
          uStack_1c4._0_2_ = SUB42(fStack_244,0);
          uStack_1c4._2_2_ = (undefined2)((uint)fStack_244 >> 0x10);
          fStack_1c0 = fStack_240;
          fStack_1bc = fStack_23c;
          local_1b8 = CONCAT44(local_1b8._4_4_,6);
          uStack_1b0 = 0;
          uStack_1ac = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1a0 = local_144;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          uVar13 = puVar14[2];
          puVar11 = puVar14;
          if (local_100 < puVar14[3]) {
            puVar11 = (ulonglong *)*puVar14;
          }
          if ((longlong)uVar13 < (longlong)local_108) {
            FUN_180002ac0();
          }
          if (uVar13 < local_220) {
            uStack_180 = local_100;
            local_198 = *puVar11;
            uStack_190 = puVar11[1];
            local_188 = uVar13;
          }
          else {
            uVar8 = local_100 | uVar13;
            uVar12 = 0x16;
            if (0x16 < uVar8) {
              uVar12 = uVar8;
            }
            if (local_228 < uVar8) {
              lVar9 = FUN_1801d61c8(local_120 + uVar12);
              local_198 = local_238 + lVar9 & local_230;
              *(longlong *)(local_198 - 8) = lVar9;
            }
            else {
              local_198 = FUN_1801d61c8(local_110 + uVar12);
            }
            local_188 = uVar13;
            uStack_180 = uVar12;
            FUN_1802079d0(local_198,puVar11,uVar13 + local_110);
          }
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_158 = local_148;
          uStack_154 = local_f4;
          puVar10 = *(undefined8 **)(param_1 + 0xd0);
          if (puVar10 == *(undefined8 **)(param_1 + 0xd8)) {
            FUN_1800e67f0(param_1 + 200,puVar10,&local_1c8);
            if (local_100 < uStack_180) {
              uVar12 = local_110 + uStack_180;
              uVar13 = local_198;
              if (local_140 < uVar12) {
                uVar13 = *(ulonglong *)(local_198 - 8);
                if (local_130 <= (local_198 + local_138) - uVar13) goto LAB_1800cf07a;
                uVar12 = uStack_180 + local_120;
              }
              thunk_FUN_1801f42e0(uVar13,uVar12);
            }
          }
          else {
            *(ulonglong *)((longlong)puVar10 + 0x1c) = CONCAT44(uStack_1a8,uStack_1ac);
            *(ulonglong *)((longlong)puVar10 + 0x24) = CONCAT44(uStack_1a0,uStack_1a4);
            puVar10[2] = local_1b8;
            puVar10[3] = CONCAT44(uStack_1ac,uStack_1b0);
            *puVar10 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
            puVar10[1] = CONCAT44(fStack_1bc,fStack_1c0);
            puVar10[8] = 0;
            puVar10[9] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = local_188;
            puVar10[9] = uStack_180;
            puVar10[6] = local_198;
            puVar10[7] = uStack_190;
            puVar10[10] = 0;
            puVar10[0xb] = 0;
            *(undefined1 (*) [16])(puVar10 + 0xc) = ZEXT816(0);
            puVar10[0xe] = CONCAT44(local_f4,local_148);
            *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 0x78;
          }
          local_1c8 = local_1f8;
          uStack_1c4._0_2_ = SUB42(fStack_1f4,0);
          uStack_1c4._2_2_ = (undefined2)((uint)fStack_1f4 >> 0x10);
          fStack_1c0 = fStack_1f0;
          fStack_1bc = fStack_1ec;
          local_1b8 = CONCAT44(local_1b8._4_4_,7);
          uStack_1b0 = 0;
          uStack_1ac = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1a0 = local_144;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          uVar13 = puVar14[2];
          puVar11 = puVar14;
          if (local_100 < puVar14[3]) {
            puVar11 = (ulonglong *)*puVar14;
          }
          if ((longlong)uVar13 < (longlong)local_108) {
            FUN_180002ac0();
          }
          if (uVar13 < local_220) {
            uStack_180 = local_100;
            local_198 = *puVar11;
            uStack_190 = puVar11[1];
            local_188 = uVar13;
          }
          else {
            uVar8 = local_100 | uVar13;
            uVar12 = 0x16;
            if (0x16 < uVar8) {
              uVar12 = uVar8;
            }
            if (local_228 < uVar8) {
              lVar9 = FUN_1801d61c8(local_120 + uVar12);
              local_198 = local_238 + lVar9 & local_230;
              *(longlong *)(local_198 - 8) = lVar9;
            }
            else {
              local_198 = FUN_1801d61c8(local_110 + uVar12);
            }
            local_188 = uVar13;
            uStack_180 = uVar12;
            FUN_1802079d0(local_198,puVar11,uVar13 + local_110);
          }
          param_2 = local_280;
          puVar11 = local_360;
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_158 = local_148;
          uStack_154 = local_f4;
          puVar10 = *(undefined8 **)(param_1 + 0xd0);
          if (puVar10 == *(undefined8 **)(param_1 + 0xd8)) {
            FUN_1800e67f0(param_1 + 200,puVar10,&local_1c8);
            if (local_100 < uStack_180) {
              uVar12 = local_110 + uStack_180;
              uVar13 = local_198;
              if (local_140 < uVar12) {
                uVar13 = *(ulonglong *)(local_198 - 8);
                if (local_130 <= (local_198 + local_138) - uVar13) goto LAB_1800cf07a;
                uVar12 = uStack_180 + local_120;
              }
              thunk_FUN_1801f42e0(uVar13,uVar12);
            }
          }
          else {
            *(ulonglong *)((longlong)puVar10 + 0x1c) = CONCAT44(uStack_1a8,uStack_1ac);
            *(ulonglong *)((longlong)puVar10 + 0x24) = CONCAT44(uStack_1a0,uStack_1a4);
            puVar10[2] = local_1b8;
            puVar10[3] = CONCAT44(uStack_1ac,uStack_1b0);
            *puVar10 = CONCAT26(uStack_1c4._2_2_,CONCAT24((undefined2)uStack_1c4,local_1c8));
            puVar10[1] = CONCAT44(fStack_1bc,fStack_1c0);
            puVar10[8] = 0;
            puVar10[9] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = local_188;
            puVar10[9] = uStack_180;
            puVar10[6] = local_198;
            puVar10[7] = uStack_190;
            puVar10[10] = 0;
            puVar10[0xb] = 0;
            *(undefined1 (*) [16])(puVar10 + 0xc) = ZEXT816(0);
            puVar10[0xe] = CONCAT44(local_f4,local_148);
            *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 0x78;
          }
          fVar18 = fVar21 * 7.0 + fStack_1cc;
          puVar14 = puVar14 + 4;
          if (puVar14 == puVar11) goto LAB_1800ced33;
        }
        fVar18 = fVar21 * 7.0 + fVar18;
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar11);
    }
LAB_1800ced33:
    fVar21 = (local_2c8 + (((local_2bc + fVar18) - *(float *)(param_1 + 0x1e8)) - local_2c4)) -
             (*(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x24));
    uVar16 = -(uint)(local_114 < fVar21);
    *(uint *)(param_1 + 0x144) = ~uVar16 & (uint)local_114 | (uint)fVar21 & uVar16;
    FUN_1800d89d0();
    FUN_180174140();
  }
  FUN_180078630(&local_330);
  if (local_100 < uStack_260) {
    lVar6 = CONCAT17(uStack_271,local_278);
    uVar13 = local_110 + uStack_260;
    lVar9 = lVar6;
    if (local_140 < uVar13) {
      lVar9 = *(longlong *)(lVar6 + -8);
      if (local_130 <= (ulonglong)((lVar6 + local_138) - lVar9)) {
LAB_1800cf07a:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_f4,local_108);
      }
      uVar13 = uStack_260 + local_120;
    }
    thunk_FUN_1801f42e0(lVar9,uVar13);
  }
  return;
}



void Unwind_1800cf0c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf1a0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf280(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf360(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf440(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf520(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf600(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf6e0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf7c0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf8a0(undefined8 param_1,longlong param_2)

{
  FUN_1800d4520(param_2 + 0x2d0);
  return;
}



void Unwind_1800cf980(undefined8 param_1,longlong param_2)

{
  FUN_180078630(param_2 + 0x168);
  return;
}



void Unwind_1800cfa60(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x220);
  return;
}



void Unwind_1800cfb40(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2d0);
  return;
}



void Unwind_1800cfc20(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x2d0);
  return;
}



void FUN_1800cfd00(longlong param_1,longlong param_2,float param_3)

{
  float *pfVar1;
  uintptr_t uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auVar9 [8];
  ulonglong uVar10;
  longlong lVar11;
  undefined *puVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong in_stack_fffffffffffffdc8;
  undefined4 uVar24;
  longlong local_218;
  longlong *local_210;
  longlong *local_208;
  longlong local_200;
  float *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  float local_1c8 [4];
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  longlong local_180;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  float local_160;
  float local_15c;
  undefined4 local_158;
  float local_154;
  float local_150;
  float local_14c;
  uintptr_t local_148;
  longlong local_140;
  undefined1 local_138 [8];
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_110;
  float local_108;
  float local_104;
  uint local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;

  local_f0 = 0xfffffffffffffffe;
  local_f8 = 1.0;
  local_f4 = 0.0;
  local_160 = 0.001;
  local_15c = 60.0;
  local_fc = 0;
  local_1d8 = 0xfff;
  local_180 = 1;
  local_178 = 0x20;
  local_1d0 = -8;
  local_148 = 0;
  local_158 = 1;
  local_14c = param_3;
  local_170 = FUN_1800eb430();
  fVar19 = *(float *)(param_2 + 0x44);
  FUN_1800c52f0(param_1,&local_1f0);
  local_200 = param_2 + 0x20;
  local_168 = param_2;
  FUN_180173e70(local_200,local_f4);
  if (local_1f0 == local_1e8) {
    local_104 = local_14c * 0.6;
    local_108 = *(float *)(local_170 + 0x88);
    local_110 = *(undefined8 *)(local_170 + 0x80);
    fVar15 = *(float *)(local_168 + 0x20);
    fVar21 = *(float *)(local_168 + 0x24);
    fVar20 = *(float *)(local_168 + 0x2c);
    uVar13 = (uint)local_180;
    local_1c8[(ulonglong)((uint)local_148 & 1) + 2] = *(float *)(local_168 + 0x40) - fVar15;
    local_1c8[(ulonglong)(uVar13 & 1) + 2] = fVar19;
    uVar13 = (uint)local_180;
    local_1c8[(uint)local_148 & 1] = fVar15;
    local_1c8[uVar13 & 1] = (fVar20 - fVar21) * 0.5 + fVar21;
    local_1b8 = CONCAT44(SUB84(local_1c8._8_8_,4) * -10.0 + SUB84(local_1c8._0_8_,4),
                         (float)local_1c8._8_8_ * 0.5 + (float)local_1c8._0_8_);
    uVar2 = *(uintptr_t *)(param_1 + 0x120);
    _local_138 = ZEXT416(0);
    local_128 = _local_138;
    lVar7 = FUN_1801d61c8(local_178);
    puVar12 = &DAT_1802a3a70;
    if (uVar2 == local_148) {
      puVar12 = &DAT_1802a3a58;
    }
    lVar11 = 0x16;
    if (uVar2 == local_148) {
      lVar11 = 0x10;
    }
    FUN_1800eb180(&DAT_1802a3a58,&DAT_18027595b,0x15,0x11,&DAT_1802a3a6c);
    FUN_1800eb180(&DAT_1802a3a70,&DAT_180275996,0x1f,0x17,&DAT_1802a3a88);
    local_138 = (undefined1  [8])lVar7;
    local_128._8_8_ = 0x1f;
    local_128._0_8_ = lVar11;
    FUN_1802079d0(lVar7,puVar12,lVar11);
    *(undefined1 *)(lVar7 + lVar11) = 0;
    FUN_180173000(local_138,&local_1b8);
    if (0xf < (ulonglong)local_128._8_8_) {
      uVar10 = local_180 + local_128._8_8_;
      auVar9 = local_138;
      if (local_1d8 < uVar10) {
        auVar9 = *(undefined1 (*) [8])((longlong)local_138 + -8);
        if (local_178 <= (ulonglong)(((longlong)local_138 + local_1d0) - (longlong)auVar9)) goto LAB_1800d0a35;
        uVar10 = local_128._8_8_ + 0x28;
      }
      thunk_FUN_1801f42e0(auVar9,uVar10);
    }
    *(undefined8 *)(param_1 + 0x134) = 0;
    FUN_180174140();
  }
  else {
    pfVar1 = (float *)(param_1 + 0x130);
    fVar15 = *(float *)(param_1 + 0x134);
    uVar13 = -(uint)(*(float *)(param_1 + 0x138) < fVar15);
    fVar21 = (float)(uVar13 & (uint)*(float *)(param_1 + 0x138) |
                    ~uVar13 & ((uint)local_f4 & -(uint)(fVar15 < local_f4) | ~-(uint)(fVar15 < local_f4) & (uint)fVar15)
                    );
    *(float *)(param_1 + 0x134) = fVar21;
    fVar15 = *(float *)(local_170 + 0xa4);
    if (local_f8 <= fVar15) {
LAB_1800d01f9:
      fVar20 = fVar21;
      *pfVar1 = fVar20;
    }
    else {
      fVar20 = *pfVar1;
      if (local_f4 < fVar15) {
        fVar14 = (float)FUN_1800ebf90();
        fVar15 = (float)FUN_1801eaf60(local_f8 - fVar15,fVar14 * local_15c);
        fVar20 = (local_f8 - fVar15) * (fVar21 - fVar20) + *(float *)(param_1 + 0x130);
        *(float *)(param_1 + 0x130) = fVar20;
        fVar21 = *(float *)(param_1 + 0x134);
      }
      if (ABS(fVar21 - fVar20) < local_160) goto LAB_1800d01f9;
    }
    local_150 = fVar19 * 14.0;
    local_184 = *(float *)(local_168 + 0x24) + local_150;
    fVar15 = (local_184 - fVar20) + *(float *)(param_1 + 0x1e8);
    uVar13 = -(uint)(0.5 < *(float *)(param_1 + 0x138));
    local_208 = local_1e8;
    local_154 = (fVar19 * -19.6 + *(float *)(local_168 + 0x40)) -
                (float)(~uVar13 & (uint)local_f4 | uVar13 & (uint)(fVar19 * 9.0));
    local_190 = fVar19 * 15.0;
    local_18c = fVar19 * 11.5;
    local_188 = fVar19 * 46.0;
    fVar21 = fVar19 * 30.0;
    local_194 = fVar19 * 142.0;
    fVar14 = fVar19 * 16.0;
    plVar8 = local_1f0;
    local_1f8 = pfVar1;
    while (plVar8 != local_208) {
      local_140 = *plVar8;
      local_210 = plVar8;
      fVar16 = (float)FUN_180173310();
      fVar17 = (float)FUN_180173310();
      FUN_1800e9e00(param_1 + 8,local_138,&local_140);
      cVar6 = *(char *)((longlong)local_138 + 0x18);
      fVar23 = local_f4;
      if (cVar6 == '\x01') {
        plVar8 = *(longlong **)(local_140 + 0x50);
        plVar3 = *(longlong **)(local_140 + 0x58);
joined_r0x0001800d040a:
        if (plVar8 != plVar3) {
          do {
            lVar7 = *plVar8;
            if (*(longlong **)(lVar7 + 0x88) != (longlong *)0x0) {
              cVar5 = (**(code **)(**(longlong **)(lVar7 + 0x88) + 0x10))();
              if (cVar5 == '\0') goto LAB_1800d0800;
              lVar7 = *plVar8;
            }
            fVar18 = (float)FUN_180173310();
            fVar22 = fVar18 + fVar14;
            if (fVar18 + fVar14 <= fVar21) {
              fVar22 = fVar21;
            }
            if (*(int *)(lVar7 + 8) == 7) {
              fVar23 = fVar23 + fVar22 * ((float)(ulonglong)
                                                 (*(longlong *)(lVar7 + 0x98) - *(longlong *)(lVar7 + 0x90) >> 6) + 2.0)
              ;
              if (*plVar8 == *(longlong *)(param_1 + 0x198)) {
LAB_1800d085d:
                fVar23 = fVar23 + local_194;
              }
            }
            else {
              fVar23 = fVar23 + fVar22;
              if (*plVar8 == *(longlong *)(param_1 + 0x198)) goto LAB_1800d085d;
            }
            plVar8 = plVar8 + 1;
            if (plVar8 == plVar3) break;
          } while( true );
        }
        if (local_f4 < fVar23) {
          fVar23 = fVar23 + fVar19 * 8.0;
        }
      }
      uVar13 = (uint)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
      fVar16 = fVar16 + fVar17 + fVar14;
      if (fVar16 <= local_188) {
        fVar16 = local_188;
      }
      fVar17 = fVar19 * 7.0 + *(float *)(local_168 + 0x20);
      fVar16 = fVar16 + fVar15;
      local_104 = fVar16 + fVar23;
      local_110 = CONCAT44(fVar15,fVar17);
      local_1b0 = local_154;
      local_108 = local_154;
      local_1b8 = CONCAT44(fVar15,fVar17);
      local_1ac = fVar16;
      if ((*(float *)(local_168 + 0x24) <= local_104 && local_104 != *(float *)(local_168 + 0x24)) &&
         (fVar15 < *(float *)(local_168 + 0x2c))) {
        local_1a8 = 0;
        local_218 = local_140;
        FUN_1800ea9e0(param_1 + 0x88,local_138,&local_218,&local_1a8);
        auVar9 = local_138;
        fVar22 = local_f4;
        if ((fVar17 <= *(float *)(param_1 + 0x214)) &&
           (((*(float *)(param_1 + 0x214) <= local_154 && (fVar15 <= *(float *)(param_1 + 0x218))) &&
            (*(float *)(param_1 + 0x218) <= fVar16)))) {
          fVar22 = local_f8;
        }
        *(float *)((longlong)local_138 + 0x1c) = fVar22;
        fVar15 = *(float *)(local_170 + 0xa4);
        if (local_f8 <= fVar15) {
LAB_1800d05da:
          *(float *)((longlong)auVar9 + 0x18) = fVar22;
          fVar17 = fVar22;
        }
        else {
          fVar17 = *(float *)((longlong)local_138 + 0x18);
          if (local_f4 < fVar15) {
            fVar18 = (float)FUN_1800ebf90();
            fVar15 = (float)FUN_1801eaf60(local_f8 - fVar15,fVar18 * local_15c);
            fVar17 = (local_f8 - fVar15) * (fVar22 - fVar17) + *(float *)((longlong)auVar9 + 0x18);
            *(float *)((longlong)auVar9 + 0x18) = fVar17;
            fVar22 = *(float *)((longlong)auVar9 + 0x1c);
          }
          if (ABS(fVar22 - fVar17) < local_160) goto LAB_1800d05da;
        }
        uStack_130._0_4_ = local_f8;
        local_138 = (undefined1  [8])0x3f8000003f800000;
        uStack_130._4_4_ = fVar17 * 0.035 + 0.045;
        FUN_180172640(&local_110,local_138);
        uStack_130._0_4_ = local_f8;
        local_138 = (undefined1  [8])0x3f8000003f800000;
        uStack_130._4_4_ = fVar17 * 0.04 + 0.05;
        FUN_1801728e0(&local_110,local_138);
        in_stack_fffffffffffffdc8 = (ulonglong)uVar13 << 0x20;
        FUN_1800d4880(param_1,local_140,&local_1b8);
        if (local_f4 < fVar23 && cVar6 == '\x01') {
          uStack_130 = 0x3d75c28f3f800000;
          local_138 = (undefined1  [8])0x3f8000003f800000;
          local_1a0 = fVar19 * -14.0 + local_108;
          local_19c = fVar19 + fVar16;
          local_1a8 = CONCAT44(fVar16,(float)local_110 + local_150);
          FUN_180172640(&local_1a8,local_138);
          fVar16 = fVar19 * 4.0 + fVar16;
          plVar3 = *(longlong **)(local_140 + 0x58);
          for (plVar8 = *(longlong **)(local_140 + 0x50);
              uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20), plVar8 != plVar3; plVar8 = plVar8 + 1
              ) {
            if (*(longlong **)(*plVar8 + 0x88) == (longlong *)0x0) {
LAB_1800d089f:
              fVar15 = local_108;
              uVar4 = (float)local_110;
              fVar17 = (float)FUN_180173310();
              fVar23 = fVar17 + fVar14;
              if (fVar17 + fVar14 <= fVar21) {
                fVar23 = fVar21;
              }
              local_138._4_4_ = fVar16;
              local_138._0_4_ = uVar4;
              uStack_130._0_4_ = fVar15;
              uStack_130._4_4_ = fVar23 + fVar16;
              in_stack_fffffffffffffdc8 = CONCAT44(uVar24,fVar19);
              fVar15 = (float)FUN_1800d5f40(param_1,*plVar8,local_140,local_138,in_stack_fffffffffffffdc8);
              fVar16 = fVar16 + fVar15;
            }
            else {
              cVar6 = (**(code **)(**(longlong **)(*plVar8 + 0x88) + 0x10))();
              uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
              if (cVar6 != '\0') goto LAB_1800d089f;
            }
          }
        }
      }
      fVar15 = fVar19 * 7.0 + local_104;
      plVar8 = local_210 + 1;
    }
    fVar19 = (local_150 + (((fVar20 + fVar15) - *(float *)(param_1 + 0x1e8)) - local_184)) -
             (*(float *)(local_168 + 0x2c) - *(float *)(local_168 + 0x24));
    uVar13 = -(uint)(local_f4 < fVar19);
    *(uint *)(param_1 + 0x138) = ~uVar13 & (uint)local_f4 | (uint)fVar19 & uVar13;
    FUN_1800d89d0();
    FUN_180174140();
  }
  if (local_1f0 != (longlong *)0x0) {
    uVar10 = local_1e0 - (longlong)local_1f0;
    plVar8 = local_1f0;
    if (local_1d8 < uVar10) {
      plVar8 = (longlong *)local_1f0[-1];
      if (local_178 <= (ulonglong)((longlong)local_1f0 + (local_1d0 - (longlong)plVar8))) {
LAB_1800d0a35:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_fc,local_148);
      }
      uVar10 = uVar10 + 0x27;
    }
    thunk_FUN_1801f42e0(plVar8,uVar10);
  }
  return;
LAB_1800d0800:
  plVar8 = plVar8 + 1;
  goto joined_r0x0001800d040a;
}


