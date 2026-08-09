#include "../include/aerialclient_types.h"


void FUN_180060d40(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  ulonglong local_e0;
  uintptr_t local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;

  local_f8 = 0xa6774d2d3841ede2;
  local_100 = 0xdf12ef1caab4debb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_f8 ^ 0x7593f57cda637d30;
              uVar1 = local_f8 ^ local_100;
              local_100 = local_100 ^ 0x7593f57cda637d30;
              local_f8 = uVar4;
              if ((longlong)uVar1 < 0x47cec0318ef80112) break;
              if ((longlong)uVar1 < 0x50928fcce8352108) {
                if ((longlong)uVar1 < 0x4e343f19fdf9126f) {
                  if (uVar1 == 0x4ba97e7bcd83f709) {
                    local_60 = local_48 + local_e0;
                    if (local_48 + local_e0 < local_68) {
                      local_60 = local_68;
                    }
                    local_a8 = local_60 + local_f0;
                    local_f8 = 0x7343f2c088f8110e;
                    if ((longlong)local_d0 <= (longlong)local_a8) {
                      local_f8 = 0xcc0df049c00c9669;
                    }
                    local_100 = 0x607cf151e59ff4ac;
                  }
                  else if (uVar1 == 0x47cec0318ef80112) {
                    *param_1 = local_88;
                    return;
                  }
                }
                else if (uVar1 == 0x4e343f19fdf9126f) {
                  local_70 = param_1 + 3;
                  local_e0 = param_1[3];
                  local_68 = local_c0 | param_2;
                  local_f8 = 0x95cf7cc02d7fa946;
                  if (local_68 <= local_c8) {
                    local_f8 = 0xecedc2e44602f9aa;
                  }
                  local_100 = 0x7cfcfeb963151714;
                }
                else if (uVar1 == 0x4eaa243a91ee31de) {
                  local_88 = local_a0;
                  param_1[2] = param_2;
                  *local_70 = local_60;
                  FUN_1802079d0(local_a0,param_4);
                  *(undefined2 *)(local_a0 + param_2 * 2) = 0;
                  local_f8 = 0x648303c484a5468a;
                  if (local_e0 <= local_c0) {
                    local_f8 = 0xd2a88cfdf7005361;
                  }
                  local_100 = 0x95664ccc79f85273;
                }
              }
              else if ((longlong)uVar1 < 0x672e474d137f0ab9) {
                if (uVar1 == 0x50928fcce8352108) {
                  local_78 = *(ulonglong *)(local_58 - 8);
                  local_f8 = 0x3576d6d0dd0ac4c2;
                  if (0x1f < (local_58 - local_78) - 8) {
                    local_f8 = 0xc325cd21b24ad6ad;
                  }
                  local_100 = 0xa40b8a6ca135dc14;
                }
                else if (uVar1 == 0x519712565a1be3b9) {
                  thunk_FUN_1801f42e0(local_90,local_98);
                  local_f8 = 0xb6bc731f9715632e;
                  local_100 = 0xf172b32e19ed623c;
                }
              }
              else if (uVar1 == 0x7965a23192f53359) {
                local_b8 = 0x27;
                local_c8 = 0x7ffffffffffffffe;
                local_d0 = 0;
                local_f0 = 1;
                local_c0 = 7;
                local_f8 = 0xd401a7e5bcb7c204;
                if (param_2 < 0x7fffffffffffffff) {
                  local_f8 = 0x18d96f40887a8c19;
                }
                local_100 = 0x56ed505975839e76;
              }
              else if (uVar1 == 0x672e474d137f0ab9) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_d0);
              }
            }
            bVar3 = (byte)local_f0;
            if (-0x16cc7d86b19541af < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x6e82a34383c0e72a) {
              if (uVar1 == 0x8e9624da2b78543d) {
                lVar2 = FUN_1801d61c8(local_b0 + local_b8);
                local_a0 = local_b8 + lVar2 & 0xffffffffffffffe0;
                *(longlong *)(local_a0 - 8) = lVar2;
                local_f8 = 0x3a7870fde2434da3;
                local_100 = 0x74d254c773ad7c7d;
              }
              else if (uVar1 == 0x90113c5d2517eebe) {
                local_48 = local_e0 >> (bVar3 & 0x3f);
                local_f8 = 0x1c03fd9fe090298f;
                if (local_e0 <= local_c8 - local_48) {
                  local_f8 = 0xbe99019d637960d4;
                }
                local_100 = 0xf5307fe6aefa97dd;
              }
              else if (uVar1 == 0x82ecf7bcc9345c72) {
                FUN_180002ac0();
              }
            }
            else if (uVar1 == 0x917d5cbc7c3f18d6) {
              local_98 = local_50 + 0x29;
              local_90 = local_78;
              local_f8 = 0x6481feb4152a2e81;
              local_100 = 0x3516ece24f31cd38;
            }
            else if (uVar1 == 0xac710118259362c5) {
              local_b0 = local_a8 << (bVar3 & 0x3f);
              local_f8 = 0x2ad9a368c66399c;
              if (local_a8 < 0x800) {
                local_f8 = 0x26219a6bdee4a812;
              }
              local_100 = 0x35155208da9a4c0c;
            }
          }
          if (0x1334c863047ee41d < (longlong)uVar1) break;
          if (uVar1 == 0xf1e54f08fd5d14f9) {
            local_90 = *param_1;
            local_50 = local_e0 << (bVar3 & 0x3f);
            local_98 = local_50 + 2;
            local_f8 = 0xa49a9ea8df2991ec;
            if (local_98 < 0x1000) {
              local_f8 = 0xa59f03326d07535d;
            }
            local_100 = 0xf4081164371cb0e4;
            local_58 = local_90;
          }
          else if (uVar1 == 0xe93382794e6abe52) goto LAB_180061564;
        }
        if (uVar1 != 0x1334c863047ee41e) break;
        local_a0 = FUN_1801d61c8(local_b0);
        local_f8 = 0x73c39d3ba5062377;
        local_100 = 0x3d69b90134e812a9;
      }
      if (uVar1 != 0x37b8c83e56fc7590) break;
      local_f8 = 0x6dbda63a744c9bcd;
      if (0x7fffffffffffffec < local_a8) {
        local_f8 = 0xa180099115e71a2;
      }
      local_100 = 0xe32b82e05f34cff0;
    }
  } while (uVar1 != 0x133f03916d67e5a2);
LAB_180061564:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_1800615a0(void)

{
  code *pcVar1;

  FUN_1800b8f52(&DAT_1802a1f78,&DAT_18027194c,0x1b,0x18,&DAT_1802a1f90);
  FUN_1801d7548(&DAT_1802a1f78);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



ulonglong * FUN_1800615e0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong local_110;
  ulonglong local_108;
  undefined2 local_fa;
  longlong local_f8;
  ulonglong local_f0;
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
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;

  local_108 = 0x13fdcf3484838eb0;
  local_110 = 0xef653c4bb4d34934;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_108 ^ 0xd904e9eae3b706d5;
              uVar1 = local_108 ^ local_110;
              local_110 = local_110 ^ 0xd904e9eae3b706d5;
              bVar3 = (byte)local_f8;
              local_108 = uVar4;
              if (-0x49d58d973e7b25f < (longlong)uVar1) break;
              if ((longlong)uVar1 < -0x3d91c200dc9747d9) {
                if ((longlong)uVar1 < -0x433aa4e34cc8b532) {
                  if (uVar1 == 0x89f4579e3750f77c) {
                    local_108 = 0x72c4573cbc58c49b;
                    if (0x7fffffffffffffec < local_d0) {
                      local_108 = 0x39ae11a7b9664714;
                    }
                    local_110 = 0x2bee7d6f2df08e51;
                  }
                  else if (uVar1 == 0x9530e9544c55a88a) {
                    local_90 = local_50 + 0x29;
                    local_108 = 0xa6ac39800899ff3e;
                    local_110 = 0x7b1e9f021d869a0e;
                    local_88 = local_48;
                  }
                }
                else if (uVar1 == 0xbcc55b1cb3374ace) {
                  local_98 = local_d0 << (bVar3 & 0x3f);
                  local_108 = 0x3e147bbe932975c4;
                  if (local_d0 != local_e8) {
                    local_108 = 0xef1db02080907970;
                  }
                  local_110 = 0x3fe469b49557b42e;
                  local_c8 = 0;
                }
                else if (uVar1 == 0xc201c4e3977704ea) {
                  local_78 = local_d8 + param_2;
                  local_70 = param_1 + 3;
                  local_f0 = param_1[3];
                  local_68 = local_78 | local_b0;
                  local_108 = 0xde52b3f4ed592778;
                  if (local_68 <= local_e0) {
                    local_108 = 0x2c8ae8a4e1297ef1;
                  }
                  local_110 = 0xcc12df3c79cfee3d;
                }
              }
              else if ((longlong)uVar1 < -0x224d597deae09ad0) {
                if (uVar1 == 0xd0f9d99415c7cd5e) {
                  local_108 = 0x936b2a74c5c7c047;
                  if (local_d0 < 0x800) {
                    local_108 = 0xa58e9beed056b69;
                  }
                  local_110 = 0x1a9f7deaf297373b;
                }
                else {
                  if (uVar1 == 0xc26e3dff2368b827) {
                    *param_1 = local_c0;
                    return param_1;
                  }
                  if (uVar1 == 0xc3c955b070bda55e) {
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e8);
                  }
                }
              }
              else if (uVar1 == 0xddb2a682151f6530) {
                thunk_FUN_1801f42e0(local_88,local_90);
                local_108 = 0xd8a5189ae9868028;
                local_110 = 0x1acb2565caee380f;
              }
              else if (uVar1 == 0xe098379898e690cc) {
                local_60 = local_f0 >> (bVar3 & 0x3f);
                local_108 = 0x314aae25e7b7f5ee;
                if (local_f0 <= local_e0 - local_60) {
                  local_108 = 0x5d19fc9aeb682de2;
                }
                local_110 = 0x230ac2ed73213cab;
              }
            }
            if (0x228bfd7f52f99c5c < (longlong)uVar1) break;
            if ((longlong)uVar1 < 0x1f0120a067ec1ea) {
              if (uVar1 == 0xfb62a7268c184da2) {
                local_a0 = *param_1;
                FUN_1802079d0(local_c0);
                *(undefined2 *)(local_c0 + local_d8 * 2) = param_4;
                *(undefined2 *)(local_c0 + 2 + local_d8 * 2) = local_fa;
                local_50 = local_f0 << (bVar3 & 0x3f);
                local_90 = local_50 + 2;
                local_108 = 0x7d9bd5e11a894615;
                if (local_90 < 0x1000) {
                  local_108 = 0xe5fd31c820d25902;
                }
                local_110 = 0x384f974a35cd3c32;
                local_88 = local_a0;
              }
              else if (uVar1 == 0xfc98f37f3050c784) {
                local_a8 = 0x27;
                local_e0 = 0x7ffffffffffffffe;
                local_e8 = 0;
                local_f8 = 1;
                local_fa = 0;
                local_b0 = 7;
                local_80 = param_1 + 2;
                local_d8 = param_1[2];
                local_108 = 0x4a7a1706adefcdc2;
                if (param_2 <= 0x7ffffffffffffffe - local_d8) {
                  local_108 = 0xaaf02e9a68615575;
                }
                local_110 = 0x68f1ea79ff16519f;
              }
            }
            else if (uVar1 == 0x1f0120a067ec1ea) {
              local_c0 = local_c8;
              *local_80 = local_78;
              *local_70 = local_58;
              local_108 = 0xfe7aa2b5572f2ed4;
              if (local_f0 <= local_b0) {
                local_108 = 0x3906a3de5ee83011;
              }
              local_110 = 0x5180593db376376;
            }
            else if (uVar1 == 0x10c794541f925c52) {
              local_c8 = FUN_1801d61c8(local_98);
              local_108 = 0xfd189abd06d917c6;
              local_110 = 0xfce888b700a7d62c;
            }
            else if (uVar1 == 0x12406cc89496c945) goto LAB_180061ea9;
          }
          if (0x592a2a5391a84ac9 < (longlong)uVar1) break;
          if (uVar1 == 0x3c1ea64d85df5367) {
            FUN_1802079d0(local_c0,param_1);
            *(undefined2 *)(local_c0 + local_d8 * 2) = param_4;
            *(undefined2 *)(local_c0 + 2 + local_d8 * 2) = local_fa;
            local_108 = 0x72528c427a8a461e;
            local_110 = 0xb03cb1bd59e2fe39;
          }
          else if (uVar1 == 0x45d442ab2f447a27) {
            local_48 = *(ulonglong *)(local_a0 - 8);
            local_108 = 0x219f4f1926e3975b;
            if (0x1f < (local_a0 - local_48) - 8) {
              local_108 = 0x7766f3fd1a0b9a8f;
            }
            local_110 = 0xb4afa64d6ab63fd1;
          }
          else if (uVar1 == 0x228bfd7f52f99c5d) {
            FUN_180002ac0();
          }
        }
        if (uVar1 != 0x592a2a5391a84aca) break;
        lVar2 = FUN_1801d61c8(local_98 + local_a8);
        local_c8 = local_a8 + lVar2 & 0xffffffffffffffe0;
        *(longlong *)(local_c8 - 8) = lVar2;
        local_108 = 0xa61a8e2a23397647;
        local_110 = 0xa7ea9c202547b7ad;
      }
      if (uVar1 != 0x7e133e7798491149) break;
      local_58 = local_60 + local_f0;
      if (local_60 + local_f0 < local_68) {
        local_58 = local_68;
      }
      local_d0 = local_58 + local_f8;
      local_108 = 0x5240f62c4cde829b;
      if ((longlong)local_e8 <= (longlong)local_d0) {
        local_108 = 0x9caedeadd1bb8441;
      }
      local_110 = 0x206b85b1628cce8f;
    }
  } while (uVar1 != 0x722b739d2e524c14);
LAB_180061ea9:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



ulonglong * FUN_180061f00(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong local_118;
  ulonglong local_110;
  undefined2 local_102;
  longlong local_100;
  ulonglong local_f8;
  uintptr_t local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong *local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;

  local_110 = 0x19f9b002932402fa;
  local_118 = 0xec7e66875f2ac2bb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar4 = local_110 ^ 0xcbc687ab9fc943aa;
              uVar1 = local_110 ^ local_118;
              local_118 = local_118 ^ 0xcbc687ab9fc943aa;
              bVar3 = (byte)local_100;
              local_110 = uVar4;
              if ((longlong)uVar1 < -0x203637a85b62ae1) break;
              if ((longlong)uVar1 < 0x296ed25b2a1f7762) {
                if ((longlong)uVar1 < 0x1aa4d5e72e4750c4) {
                  if (uVar1 == 0xfdfc9c857a49d51f) {
                    local_58 = local_50 + local_f8;
                    if (local_50 + local_f8 < local_68) {
                      local_58 = local_68;
                    }
                    local_d8 = local_58 + local_100;
                    local_110 = 0xfc96982dd530c6f4;
                    if ((longlong)local_f0 <= (longlong)local_d8) {
                      local_110 = 0xe2ac4b0ee928ed7c;
                    }
                    local_118 = 0x898976b05e5cbb64;
                  }
                  else if (uVar1 == 0x10c67e83b9060b5b) {
                    local_c8 = local_d0;
                    *local_80 = local_78;
                    *local_70 = local_58;
                    local_110 = 0x7476ef70f3c2c1b4;
                    if (local_f8 <= local_b0) {
                      local_110 = 0x1566270d1cafbcde;
                    }
                    local_118 = 0x9cd57215e505163a;
                  }
                }
                else if (uVar1 == 0x1aa4d5e72e4750c4) {
                  local_60 = *(ulonglong *)(local_98 - 8);
                  local_110 = 0x9164dabcbc0f37eb;
                  if (0x1f < (local_98 - local_60) - 8) {
                    local_110 = 0x728a2c66e6be81b3;
                  }
                  local_118 = 0xb7068e91106b0f4;
                }
                else if (uVar1 == 0x208aa24d14ab5d1f) {
                  lVar2 = FUN_1801d61c8(local_a0 + local_a8);
                  local_d0 = local_a8 + lVar2 & 0xffffffffffffffe0;
                  *(longlong *)(local_d0 - 8) = lVar2;
                  local_110 = 0xb667c84f76979b9b;
                  local_118 = 0xa6a1b6cccf9190c0;
                }
              }
              else if ((longlong)uVar1 < 0x602fb02225bf33b3) {
                if (uVar1 == 0x296ed25b2a1f7762) {
                  local_110 = 0xd4a3f5cb8e60799d;
                  if (local_d8 < 0x800) {
                    local_110 = 0x8aace5ec41311fe1;
                  }
                  local_118 = 0x128e2df43e23de64;
                }
                else {
                  if (uVar1 == 0x59137218fb0dbaf1) {
                    *param_1 = local_c8;
                    return param_1;
                  }
                  if (uVar1 == 0x5f42bffece194ddb) {
                    FUN_180002ac0();
                  }
                }
              }
              else if ((longlong)uVar1 < 0x6b253dbeb7745618) {
                if (uVar1 == 0x602fb02225bf33b3) {
                  local_50 = local_f8 >> (bVar3 & 0x3f);
                  local_110 = 0xb7674cffbbfadf51;
                  if (local_f8 <= local_e8 - local_50) {
                    local_110 = 0xbedc9a24fd16b090;
                  }
                  local_118 = 0x432006a1875f658f;
                }
              }
              else if (uVar1 == 0x6b253dbeb7745618) {
                local_a0 = local_d8 << (bVar3 & 0x3f);
                local_110 = 0xfe870e0c7affd44;
                if (local_d8 != local_f0) {
                  local_110 = 0x3640dc3854b6817d;
                }
                local_118 = 0x1f2e0e637ea9f61f;
                local_d0 = 0;
              }
              else {
                if (uVar1 == 0x751fee9d8b6c7d90) goto LAB_180062867;
                if (uVar1 == 0x79fa448ff7b83147) {
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_f0);
                }
              }
            }
            if (-0x34e60c8e12f7f586 < (longlong)uVar1) break;
            if ((longlong)uVar1 < -0x65eb4daa52f678e1) {
              if (uVar1 == 0x89b35518f9aaaae4) {
                FUN_1802079d0(local_c8,param_1,local_e0 << (bVar3 & 0x3f));
                lVar2 = local_c8 + local_e0 * 2;
                FUN_1802079d0(lVar2,param_4);
                *(undefined2 *)(lVar2 + param_5 * 2) = local_102;
                local_110 = 0x6b579ca16690f16b;
                local_118 = 0x3244eeb99d9d4b9a;
              }
              else if (uVar1 == 0x9822c8187f12c185) {
                local_d0 = FUN_1801d61c8(local_a0);
                local_110 = 0xb7af31f07f5b87df;
                local_118 = 0xa7694f73c65d8c84;
              }
            }
            else if (uVar1 == 0x9a14b255ad09871f) {
              local_90 = local_48 + 0x29;
              local_110 = 0x61b2bccc48e86d1;
              local_118 = 0xcd02d8bd29868caa;
              local_88 = local_60;
            }
            else if (uVar1 == 0xc62dd83fb043a7f9) {
              local_110 = 0xf230af8915a4cdc0;
              if (0x7fffffffffffffec < local_d8) {
                local_110 = 0x26fd479a3daa2a01;
              }
              local_118 = 0xd2ba0dc4010f90df;
            }
          }
          if (-0x175c629ae9382873 < (longlong)uVar1) break;
          if (uVar1 == 0xcb19f371ed080a7b) {
            thunk_FUN_1801f42e0(local_88,local_90);
            local_110 = 0x16fbd7e649813b17;
            local_118 = 0x4fe8a5feb28c81e6;
          }
          else if (uVar1 == 0xd36f032e5388b757) {
            local_78 = local_e0 + param_2;
            local_70 = param_1 + 3;
            local_f8 = param_1[3];
            local_68 = local_78 | local_b0;
            local_110 = 0x75698f8fc071c6b2;
            if (local_68 <= local_e8) {
              local_110 = 0xe10175f3d96b4fdf;
            }
            local_118 = 0x812ec5d1fcd47c6c;
          }
        }
        if (uVar1 != 0xe8a39d6516c7d78e) break;
        local_98 = *param_1;
        FUN_1802079d0(local_c8,local_98,local_e0 << (bVar3 & 0x3f));
        lVar2 = local_c8 + local_e0 * 2;
        FUN_1802079d0(lVar2,param_4);
        *(undefined2 *)(lVar2 + param_5 * 2) = local_102;
        local_48 = local_f8 << (bVar3 & 0x3f);
        local_90 = local_48 + 2;
        local_110 = 0xfd92a21ebc439943;
        if (local_90 < 0x1000) {
          local_110 = 0x2c2f84887f0cc3fc;
        }
        local_118 = 0xe73677f99204c987;
        local_88 = local_98;
      }
      if (uVar1 != 0xf587d685cc0ec041) break;
      local_a8 = 0x27;
      local_e8 = 0x7ffffffffffffffe;
      local_f0 = 0;
      local_100 = 1;
      local_102 = 0;
      local_b0 = 7;
      local_80 = param_1 + 2;
      local_e0 = param_1[2];
      local_110 = 0x6cea1571edc29d31;
      if (param_2 <= 0x7ffffffffffffffe - local_e0) {
        local_110 = 0xe0c7a9a1705367bd;
      }
      local_118 = 0x33a8aa8f23dbd0ea;
    }
  } while (uVar1 != 0xf4474a5e3ca5bade);
LAB_180062867:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void FUN_180062880(longlong *param_1)

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

  local_90 = 0xc69250e0ed17a353;
  local_98 = 0xf6dcd78b5916c72e;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xc3b527791f54a6f7;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xc3b527791f54a6f7;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x1dd9ba398ac9955c) break;
          if (uVar1 == 0x1dd9ba398ac9955c) {
            local_70 = *param_1;
            local_50 = local_60 * 2;
            local_78 = local_50 + 2;
            local_90 = 0xb3c530f9f4f0e4ce;
            if (local_78 < 0x1000) {
              local_90 = 0xa991d2d8165449f0;
            }
            local_98 = 0x3bed126e4f669320;
            local_58 = local_70;
          }
          else if (uVar1 == 0x3839f52d6a45915c) {
            local_78 = local_50 + 0x29;
            local_70 = local_48;
            local_90 = 0x1c4635af1d16a7bc;
            local_98 = 0x8e3af51944247d6c;
          }
          else if (uVar1 == 0x304e876bb401647d) {
            local_80 = 0;
            local_88 = 7;
            local_68 = param_1 + 3;
            local_60 = param_1[3];
            local_90 = 0x7882ddb97ef2bfb0;
            if (local_60 < 8) {
              local_90 = 0x607c933b2c28f3c5;
            }
            local_98 = 0x655b6780f43b2aec;
          }
        }
        if (-0x6d833f49a6cd2531 < (longlong)uVar1) break;
        if (uVar1 == 0x88282297bb9677ee) {
          local_48 = *(longlong *)(local_58 + -8);
          local_90 = 0x5b6071926236ecbf;
          if (0x1f < (local_58 - local_48) - 8U) {
            local_90 = 0xbad45ee226da2ae3;
          }
          local_98 = 0x635984bf08737de3;
        }
      }
      if (uVar1 != 0x927cc0b65932dad0) break;
      thunk_FUN_1801f42e0(local_70,local_78);
      local_90 = 0x61bfe6a3ddf7fa1;
      local_98 = 0x33c0ad1e5cca688;
    }
    if (uVar1 == 0x527f4bbd813d929) break;
    if (uVar1 == 0xd98dda5d2ea95700) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_80);
    }
  }
  param_1[2] = local_80;
  *local_68 = local_88;
  *(undefined2 *)param_1 = 0;
  return;
}



void FUN_180062bd0(char *param_1,undefined8 *param_2,undefined8 param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  undefined1 local_110 [136];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  size_t local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_40 = 0xf;
  local_58 = 0;
  local_50 = 1;
  local_48 = 0x28;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  sVar1 = strlen(param_1);
  if (local_58 <= (longlong)sVar1) {
    if (sVar1 < 0x10) {
      ppppuVar4 = &local_78;
      uVar5 = local_40;
    }
    else {
      uVar2 = local_40 | sVar1;
      uVar5 = 0x16;
      if (0x16 < uVar2) {
        uVar5 = uVar2;
      }
      if (uVar2 < 0xfff) {
        ppppuVar4 = (undefined8 ****)FUN_1801d61c8(local_50 + uVar5);
        local_78 = ppppuVar4;
      }
      else {
        pppuVar3 = (undefined8 ***)FUN_1801d61c8(local_48 + uVar5);
        ppppuVar4 = (undefined8 ****)((longlong)pppuVar3 + 0x27U & 0xffffffffffffffe0);
        ppppuVar4[-1] = pppuVar3;
        local_78 = ppppuVar4;
      }
    }
    local_68 = sVar1;
    local_60 = uVar5;
    FUN_1802079d0(ppppuVar4,param_1,sVar1);
    *(undefined1 *)((longlong)ppppuVar4 + sVar1) = 0;
    FUN_180064db0(local_110,&local_78,param_3,&local_88);
    FUN_1801dd110(local_110,&DAT_180253588);
  }
  FUN_180002ac0();
}



void Unwind_180062d60(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;

  uVar1 = *(ulonglong *)(param_2 + 0xd8);
  if (*(ulonglong *)(param_2 + 0xf8) < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0xc0);
    uVar4 = *(longlong *)(param_2 + 0xe8) + uVar1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,*(uintptr_t *)(param_2 + 0xe0));
      }
      uVar4 = uVar1 + *(longlong *)(param_2 + 0xf0);
    }
    thunk_FUN_1801f42e0(lVar3,uVar4);
  }
  return;
}



void Unwind_180063060(undefined8 param_1,longlong param_2)

{
  LocalFree(*(HLOCAL *)(param_2 + 0x30));
  return;
}



void Unwind_180063100(void)

{
  Unwind_1801dd394();
}



void FUN_180063860(ulonglong *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,ushort param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar9 [16];
  ulonglong local_2a0;
  ulonglong local_298;
  uintptr_t local_290;
  longlong local_288;
  ushort local_27a;
  ushort *local_278;
  ushort *local_270;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  ulonglong local_248;
  ulonglong local_240;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  ushort *local_220;
  ulonglong local_218;
  ulonglong local_210;
  ushort *local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ushort *local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ushort *local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong *local_128;
  ulonglong local_120;
  ulonglong *local_118;
  ulonglong local_110;
  ushort *local_108;
  ulonglong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  ushort *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];

  local_298 = 0x5900cbdd9b95e306;
  local_2a0 = 0x2ad2ecb14ccc10fa;
  uVar4 = (uint)param_5;
  auVar6 = pshuflw(ZEXT416(uVar4),ZEXT416(uVar4),0);
  auVar7 = pshuflw(ZEXT416(uVar4),ZEXT416(uVar4),0);
  auVar8 = pshuflw(unaff_XMM8,ZEXT416((uint)param_5),0);
  auVar9 = pshuflw(unaff_XMM9,ZEXT416((uint)param_5),0);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar5 = local_298 ^ 0x87a752307125b282;
                uVar1 = local_298 ^ local_2a0;
                local_2a0 = local_2a0 ^ 0x87a752307125b282;
                bVar3 = (byte)local_288;
                local_298 = uVar5;
                if ((longlong)uVar1 < 0x14677f43ab463db0) break;
                if ((longlong)uVar1 < 0x41085a5f570939a7) {
                  if ((longlong)uVar1 < 0x29a1f85a3aed02b9) {
                    if ((longlong)uVar1 < 0x1a8dca14605f6818) {
                      if (uVar1 == 0x14677f43ab463db0) {
                        local_220 = (ushort *)((local_228 << (bVar3 & 0x3f)) + (longlong)local_270);
                        local_218 = local_1b0 & param_4;
                        local_298 = 0x2eb23a19b078df4c;
                        if (local_c0 != local_290) {
                          local_298 = 0xa7217f5e35238772;
                        }
                        local_2a0 = 0x4e68c91308306ac3;
                        local_178 = local_228;
                      }
                      else if (uVar1 == 0x187e94a10ee201e3) {
                        local_298 = 0x59aba9a9659116e1;
                        if (local_258 <= param_4) {
                          local_298 = 0x5e3e4075443bfbff;
                        }
                        local_2a0 = 0x39715aa3ddd9a36e;
                        local_220 = local_270;
                        local_218 = param_4;
                      }
                    }
                    else if (uVar1 == 0x1a8dca14605f6818) {
                      local_158 = local_b8 + 0x29;
                      local_298 = 0xfbdbb18583525d2;
                      local_2a0 = 0x6516c5fc94585024;
                      local_150 = local_f0;
                    }
                    else if (uVar1 == 0x20a845b4d27ae69c) {
                      local_278[param_4] = local_27a;
                      local_b8 = local_250 << (bVar3 & 0x3f);
                      local_158 = local_b8 + 2;
                      local_298 = 0x568108f06095deda;
                      if (local_158 < 0x1000) {
                        local_298 = 0x61ff52d5535b3b7f;
                      }
                      local_2a0 = 0xb542c319f364e89;
                      local_150 = local_1a0;
                    }
                    else if (uVar1 == 0x23b80d700a42cff9) {
                      *local_148 = param_5;
                      local_140 = local_140 + local_1c8;
                      local_298 = 0x1f05723f2eccd5ea;
                      if (local_140 != local_290) {
                        local_298 = 0x1c153afbf6f4fc8f;
                      }
                      local_148 = local_148 + 1;
                      local_2a0 = 0x3fad378bfcb63376;
                    }
                  }
                  else if ((longlong)uVar1 < 0x32c792f64c2d594d) {
                    if (uVar1 == 0x29a1f85a3aed02b9) {
                      local_190 = local_238 << (bVar3 & 0x3f);
                      local_298 = 0xebc0c8c07f41e82e;
                      if (local_238 != local_290) {
                        local_298 = 0xcf615444f3b07bf6;
                      }
                      local_2a0 = 0xa4a59961a36df373;
                      local_210 = 0;
                    }
                    else if (uVar1 == 0x2c01853857fa537c) {
                      local_270[param_4] = local_27a;
                      local_298 = 0xabecce855210fe7b;
                      local_2a0 = 0x3b5b3a58fa3612e5;
                    }
                    else if (uVar1 == 0x2ec4a034b484b96a) {
                      FUN_180002ac0();
                    }
                  }
                  else if (uVar1 == 0x32c792f64c2d594d) {
                    local_298 = 0xcf24e2269019c1a3;
                    local_180 = local_290;
                    if (local_260 <= param_4) {
                      local_298 = 0x266ab97c64c96ea2;
                    }
                    local_2a0 = 0x96f21c78934aad20;
                  }
                  else if (uVar1 == 0x343ae16ca994f752) {
                    local_120 = local_240 + param_2;
                    local_118 = param_1 + 3;
                    local_250 = param_1[3];
                    local_110 = local_120 | local_1e8;
                    local_298 = 0xf79663aa56e83e8a;
                    if (local_110 <= local_248) {
                      local_298 = 0x76b66c024aab009d;
                    }
                    local_2a0 = 0xa80f76b5dd85ab3c;
                  }
                  else if (uVar1 == 0x38712a04c080c76b) {
                    lVar2 = local_138 << (bVar3 & 0x3f);
                    *(undefined1 (*) [16])((longlong)local_278 + lVar2) = local_a8;
                    *(undefined1 (*) [16])((longlong)local_278 + lVar2 + 0x10) = local_a8;
                    local_138 = local_138 + local_260;
                    local_298 = 0x34ad696875622179;
                    if (local_138 != local_230) {
                      local_298 = 0x94f1134d6052a366;
                    }
                    local_2a0 = 0xac803949a0d2640d;
                  }
                }
                else if ((longlong)uVar1 < 0x60daf30ab848b58f) {
                  if ((longlong)uVar1 < 0x5ae45fbdbfd43ff3) {
                    if (uVar1 == 0x41085a5f570939a7) {
                      lVar2 = FUN_1801d61c8(local_190 + local_1b8);
                      local_210 = local_1b8 + lVar2 & 0xffffffffffffffe0;
                      *(longlong *)(local_210 - 8) = lVar2;
                      local_298 = 0xf2e258383c24b0d6;
                      local_2a0 = 0xbd870999e008ab8b;
                    }
                    else if (uVar1 == 0x4f6551a1dc2c1b5d) {
                      local_1f8 = local_210;
                      *local_128 = local_120;
                      *local_118 = local_d0;
                      local_298 = 0x8c53c5681e300986;
                      if (local_250 <= local_1e8) {
                        local_298 = 0x5612195fdce0b411;
                      }
                      local_2a0 = 0x54d64ecd2dd33695;
                    }
                    else if (uVar1 == 0x59d6fe5e03536c83) {
                      local_1a8 = local_1d0 & param_4;
                      local_108 = (ushort *)((local_1a8 << (bVar3 & 0x3f)) + (longlong)local_278);
                      local_100 = local_1c0 & param_4;
                      local_f8 = auVar9._0_8_;
                      local_298 = 0xa3ebfdc5368396b7;
                      local_2a0 = 0xb3ca894004fcada8;
                      local_170 = local_180;
                    }
                  }
                  else if (uVar1 == 0x5ae45fbdbfd43ff3) {
                    local_298 = 0xc4f5840177040f32;
                    if (local_258 <= param_4) {
                      local_298 = 0x3f3aa4621c5b1b2e;
                    }
                    local_2a0 = 0xdfd369450764263;
                    local_208 = local_278;
                    local_200 = param_4;
                  }
                  else if (uVar1 == 0x5dd524c1ffa39053) {
                    local_f0 = *(ulonglong *)(local_1a0 - 8);
                    local_298 = 0x7603989409b1b4cc;
                    if (0x1f < (local_1a0 - local_f0) - 8) {
                      local_298 = 0xa6bcc080ef6d36e;
                    }
                    local_2a0 = 0x6c8e528069eedcd4;
                  }
                  else if (uVar1 == 0x5f99151f8b6d95b6) goto LAB_180064d81;
                }
                else if ((longlong)uVar1 < 0x6aab7ee4cc6d75f6) {
                  if (uVar1 == 0x60daf30ab848b58f) {
                    local_298 = 0x1a98a7fb59690590;
                    local_2a0 = 0x89b3f097d5bb2ee0;
                    local_168 = local_220;
                    local_160 = local_218;
                  }
                  else if (uVar1 == 0x674f1ad699e25891) {
                    local_298 = 0xdd2dde83674ec24a;
                    local_178 = local_290;
                    if (local_260 <= param_4) {
                      local_298 = 0xac89411b5808d285;
                    }
                    local_2a0 = 0x346468ce5a5d2ffb;
                  }
                  else if (uVar1 == 0x66e59e8867180fba) {
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_290);
                  }
                }
                else if (uVar1 == 0x6aab7ee4cc6d75f6) {
                  thunk_FUN_1801f42e0(local_150,local_158);
                  local_298 = 0xa42c33dc958d1066;
                  local_2a0 = 0x349bc7013dabfcf8;
                }
                else if (uVar1 == 0x6bc4cd2550dd8885) {
                  local_298 = 0x326b013dbd85f48b;
                  if (local_238 < 0x800) {
                    local_298 = 0xd7726c188a3a8926;
                  }
                  local_2a0 = 0xd020ff53c8df4e96;
                }
                else if (uVar1 == 0x73d2276cd759f3fc) {
                  local_1b0 = 0xf;
                  local_1b8 = 0x27;
                  local_248 = 0x7ffffffffffffffe;
                  local_290 = 0;
                  local_288 = 1;
                  local_1c8 = -1;
                  local_258 = 4;
                  local_1c0 = 3;
                  local_1d0 = 0xfffffffffffffffc;
                  local_1d8 = 0xfffffffffffffff0;
                  local_1e0 = 0xc;
                  local_27a = 0;
                  local_260 = 0x10;
                  local_1e8 = 7;
                  local_128 = param_1 + 2;
                  local_240 = param_1[2];
                  local_298 = 0x4a581c1f9c270e14;
                  if (param_2 <= 0x7ffffffffffffffe - local_240) {
                    local_298 = 0x50a65d478137402c;
                  }
                  local_2a0 = 0x649cbc2b28a3b77e;
                }
              }
              if (-0x30eb98d2e8a8b956 < (longlong)uVar1) break;
              if ((longlong)uVar1 < -0x533a2a2e8387d401) {
                if ((longlong)uVar1 < -0x67d2afde2a4fba8c) {
                  if (uVar1 == 0x857a07335f431cd8) {
                    lVar2 = local_188 << (bVar3 & 0x3f);
                    *(undefined1 (*) [16])((longlong)local_270 + lVar2) = local_98;
                    *(undefined1 (*) [16])((longlong)local_270 + lVar2 + 0x10) = local_98;
                    local_188 = local_188 + local_260;
                    local_298 = 0x4b721f0c1c855f1;
                    if (local_188 != local_228) {
                      local_298 = 0x813495e375ada05c;
                    }
                    local_2a0 = 0x44e92d02aeebc84;
                  }
                  else if (uVar1 == 0x932b576c8cd22b70) {
                    *local_168 = param_5;
                    local_160 = local_160 + local_1c8;
                    local_298 = 0x84f2ae2685487bde;
                    if (local_160 != local_290) {
                      local_298 = 0x3bd87c725e6003d2;
                    }
                    local_168 = local_168 + 1;
                    local_2a0 = 0xa8f32b1ed2b228a2;
                  }
                  else if (uVar1 == 0x90b7f4dda826ec9e) {
                    *param_1 = local_1f8;
                    return;
                  }
                }
                else if (uVar1 == 0x982d5021d5b04574) {
                  local_298 = 0x6ff4a337a3613a3a;
                  if (param_4 != local_230) {
                    local_298 = 0xe39933520d63f759;
                  }
                  local_2a0 = 0x4f5ce683711bdca6;
                }
                else if (uVar1 == 0x98ed29d50255fd7e) {
                  local_c0 = local_1e0 & param_4;
                  local_228 = local_1d8 & param_4;
                  local_98._8_4_ = auVar6._0_4_;
                  local_98._0_8_ = auVar6._0_8_;
                  local_98._12_4_ = auVar6._4_4_;
                  local_298 = 0xc9af33d5af4628b0;
                  local_2a0 = 0x4cd534e6f0053468;
                  local_188 = local_290;
                }
              }
              else if ((longlong)uVar1 < -0x4f675afb087c3c7e) {
                if (uVar1 == 0xacc5d5d17c782bff) {
                  local_208 = (ushort *)((local_230 << (bVar3 & 0x3f)) + (longlong)local_278);
                  local_200 = local_1b0 & param_4;
                  local_298 = 0xa8ce8e112eb19ad5;
                  if (local_c8 != local_290) {
                    local_298 = 0x3810c2da0a90bb07;
                  }
                  local_2a0 = 0x61c63c8409c3d784;
                  local_180 = local_230;
                }
                else if (uVar1 == 0xaf12e44078eee893) {
                  local_d0 = local_b0 + local_250;
                  if (local_b0 + local_250 < local_110) {
                    local_d0 = local_110;
                  }
                  local_238 = local_d0 + local_288;
                  local_298 = 0x4e5f6d46f244d1ef;
                  if ((longlong)local_290 <= (longlong)local_238) {
                    local_298 = 0x8514b450945ec3ce;
                  }
                  local_2a0 = 0xacb54c0aaeb3c177;
                }
              }
              else if (uVar1 == 0xb098a504f783c382) {
                local_c8 = local_1e0 & param_4;
                local_230 = local_1d8 & param_4;
                local_a8._8_4_ = auVar7._0_4_;
                local_a8._0_8_ = auVar7._0_8_;
                local_a8._12_4_ = auVar7._4_4_;
                local_298 = 0xd73a1c200d422d5f;
                local_2a0 = 0xef4b3624cdc2ea34;
                local_138 = local_290;
              }
              else if (uVar1 == 0xc66a498f56e5e8b2) {
                local_298 = 0xbea7798212f5e477;
                if (param_4 != local_1a8) {
                  local_298 = 0x57078ea3e7fd4fba;
                }
                local_2a0 = 0x9e0f3c36c08f02eb;
                local_208 = local_108;
                local_200 = local_100;
              }
              else if (uVar1 == 0xc908b29527724d51) {
                local_298 = 0xd759cb0b1892b24f;
                local_2a0 = 0xf4e1c67b12d07db6;
                local_148 = local_208;
                local_140 = local_200;
              }
            }
            if ((longlong)uVar1 < 0xf9b320eb26e975) break;
            if ((longlong)uVar1 < 0x752934b42e5c7b0) {
              if (uVar1 == 0xf9b320eb26e975) {
                local_298 = 0x56759d07bde33e87;
                if (param_4 != local_228) {
                  local_298 = 0x6e13677c415f504b;
                }
                local_2a0 = 0x7a74183fea196dfb;
              }
              else if (uVar1 == 0x2c45792f1338284) {
                FUN_1802079d0(local_1f8,param_1);
                local_270 = (ushort *)(local_1f8 + local_240 * 2);
                local_298 = 0xc145864ad9902d2;
                if (param_4 != local_290) {
                  local_298 = 0x386b49fdf481504d;
                }
                local_2a0 = 0x2015dd5cfa6351ae;
              }
            }
            else if (uVar1 == 0x752934b42e5c7b0) {
              local_210 = FUN_1801d61c8(local_190);
              local_298 = 0x18e6cb596f520e89;
              local_2a0 = 0x57839af8b37e15d4;
            }
            else if (uVar1 == 0xa1d38b6fadef562) {
              *(undefined8 *)((longlong)local_270 + (local_130 << (bVar3 & 0x3f))) = local_d8;
              local_130 = local_130 + local_258;
              local_298 = 0x21cd5c7c6c5fb78;
              if (local_130 != local_198) {
                local_298 = 0xc7158a5c2b4c48b1;
              }
              local_2a0 = 0xcd08b2ead192bdd3;
            }
            else if (uVar1 == 0x10217485327f3b1f) {
              *(undefined8 *)((longlong)local_278 + (local_170 << (bVar3 & 0x3f))) = local_f8;
              local_170 = local_170 + local_258;
              local_298 = 0x1e3b9b58b1c177d9;
              if (local_170 != local_1a8) {
                local_298 = 0xc870a652d55ba474;
              }
              local_2a0 = 0xd851d2d7e7249f6b;
            }
          }
          if (-0x1db401918aa545e4 < (longlong)uVar1) break;
          if (uVar1 == 0xcf14672d175746ab) {
            local_298 = 0xddf15df8c3426066;
            if (param_4 != local_198) {
              local_298 = 0x912a2bca2cf08695;
            }
            local_2a0 = 0xf1f0d8c094b8331a;
            local_220 = local_e8;
            local_218 = local_e0;
          }
          else if (uVar1 == 0xd8858ba533e33f13) {
            local_1a0 = *param_1;
            FUN_1802079d0(local_1f8);
            local_278 = (ushort *)(local_1f8 + local_240 * 2);
            local_298 = 0xb82b8ffee9e43207;
            if (param_4 != local_290) {
              local_298 = 0xc26795f7844aeb68;
            }
            local_2a0 = 0x9883ca4a3b9ed49b;
          }
          else if (uVar1 == 0xdeb91ab7972eaba1) {
            local_b0 = local_250 >> (bVar3 & 0x3f);
            local_298 = 0x4e16ad5bad00f4a8;
            if (local_250 <= local_248 - local_b0) {
              local_298 = 0xbe9d5c045e83898d;
            }
            local_2a0 = 0x118fb844266d611e;
          }
        }
        if (uVar1 != 0xe24bfe6e755aba1d) break;
        local_298 = 0x98c62c50e7fe7c41;
        if (0x7fffffffffffffec < local_238) {
          local_298 = 0x865763103b9ad050;
        }
        local_2a0 = 0xd9ce760fb0f745e6;
      }
      if (uVar1 != 0xe949b64d3d13edb1) break;
      local_198 = local_1d0 & param_4;
      local_e8 = (ushort *)((local_198 << (bVar3 & 0x3f)) + (longlong)local_270);
      local_e0 = local_1c0 & param_4;
      local_d8 = auVar8._0_8_;
      local_298 = 0xd662d0770764c74e;
      local_2a0 = 0xdc7fe8c1fdba322c;
      local_130 = local_178;
    }
  } while (uVar1 != 0xe2ea214c5cf71098);
LAB_180064d81:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



undefined8 * FUN_180064db0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *_Str;
  char *local_88;
  size_t local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_40;
  undefined8 *local_38;
  undefined8 local_30;

  local_30 = 0xfffffffffffffffe;
  local_40 = 7;
  local_68 = *param_4;
  lStack_60 = param_4[1];
  FUN_180066340((int)*param_4,&local_68,param_2);
  *param_1 = &PTR_FUN_18020e7b0;
  local_78 = param_1 + 5;
  local_38 = param_1;
  FUN_18005f8b0(local_78,param_3);
  local_70 = local_38 + 9;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = local_40;
  puVar1 = local_38 + 0xd;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_50 = local_40;
  _Str = (char *)local_38[1];
  FUN_1800b8f52(&DAT_1802a1f60,&DAT_18027190a,0x1f,0x12,&DAT_1802a1f74);
  if (_Str == (char *)0x0) {
    _Str = &DAT_1802a1f60;
  }
  local_88 = _Str;
  local_80 = strlen(_Str);
  FUN_180065c90(puVar1,&local_88,param_3,&local_68);
  puVar1 = local_38;
  if (local_40 < local_50) {
    uVar3 = local_50 * 2 + 2;
    lVar2 = local_68;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(local_68 + -8);
      if (0x1f < (local_68 - lVar2) - 8U) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = local_50 * 2 + 0x29;
    }
    thunk_FUN_1801f42e0(lVar2,uVar3);
  }
  return puVar1;
}



void Unwind_180064fa0(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x50);
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x48));
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x40));
  return;
}



void Unwind_180064fe0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;

  puVar1 = *(undefined8 **)(param_2 + 0x80);
  *puVar1 = &std::exception::vftable;
  FUN_1801dd238(puVar1 + 1);
  return;
}



void Unwind_180065220(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x40));
  return;
}



void Unwind_180065250(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(*(undefined8 *)(param_2 + 0x30));
  return;
}



void Unwind_180065280(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x50) = &std::exception::vftable;
  FUN_1801dd238(*(undefined8 *)(param_2 + 0x28));
  return;
}



undefined8 * FUN_180065c90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 ***local_f0 [2];
  undefined *local_e0;
  undefined *local_d8;
  undefined8 ***local_d0 [2];
  ulonglong local_c0;
  undefined *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined *local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined *local_78;
  uint local_6c;
  undefined *local_68;
  undefined1 local_59;
  undefined8 *local_58;
  undefined *local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_50 = (undefined *)0xf;
  local_b0 = 0x20;
  local_88 = 0;
  local_80 = 1;
  local_a8 = -8;
  local_68 = (undefined *)0x4;
  local_a0 = 0x28;
  local_78 = (undefined *)0x3;
  local_41 = 0;
  local_98 = (undefined *)0xfff;
  local_6c = 0;
  local_42 = 0x22;
  local_90 = 7;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_58 = param_1;
  uVar3 = __std_fs_code_page();
  local_110 = param_3;
  if (local_90 < (ulonglong)param_3[3]) {
    local_110 = (undefined8 *)*param_3;
  }
  local_108 = param_3[2];
  ppppuVar4 = local_f0;
  FUN_180067960(ppppuVar4,uVar3,&local_110,local_d0);
  local_100 = param_4;
  if (local_90 < (ulonglong)param_4[3]) {
    local_100 = (undefined8 *)*param_4;
  }
  local_f8 = param_4[2];
  ppppuVar7 = local_d0;
  FUN_180067960(ppppuVar7,uVar3,&local_100,&local_59);
  uVar8 = param_2[1];
  puVar5 = (undefined *)0x8;
  if (local_c0 == local_88) {
    puVar5 = local_68;
  }
  lVar1 = local_58[2];
  puVar9 = (undefined *)local_58[3];
  if (puVar9 < local_e0 + local_c0 + uVar8 + (longlong)puVar5) {
    FUN_180002240(local_58,(longlong)(local_e0 + local_c0 + uVar8 + (longlong)puVar5) - lVar1);
    local_58[2] = lVar1;
    uVar8 = param_2[1];
    puVar9 = (undefined *)local_58[3];
  }
  uVar2 = *param_2;
  if ((ulonglong)((longlong)puVar9 - lVar1) < uVar8) {
    FUN_180066dd0(local_58,uVar8,uVar8,uVar2,uVar8);
  }
  else {
    local_58[2] = lVar1 + uVar8;
    puVar6 = local_58;
    if (local_50 < puVar9) {
      puVar6 = (undefined8 *)*local_58;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar6,uVar2);
    *(undefined1 *)((longlong)puVar6 + lVar1 + uVar8) = local_41;
  }
  puVar6 = local_58;
  puVar5 = local_78;
  lVar1 = local_58[2];
  if ((undefined *)local_58[3] + -lVar1 < local_78) {
    FUN_1800b8f52(&DAT_1802a1fe0,&DAT_180271aba,0x1e,4,&DAT_1802a1fe4);
    FUN_180066dd0(puVar6,puVar5);
    if (local_50 < local_d8) {
LAB_180065f57:
      ppppuVar4 = (undefined8 ****)local_f0[0];
    }
  }
  else {
    puVar9 = local_78 + lVar1;
    local_58[2] = puVar9;
    if (local_50 < (undefined *)local_58[3]) {
      puVar6 = (undefined8 *)*local_58;
    }
    puVar5 = &DAT_1802a1fe4;
    FUN_1800b8f52(&DAT_1802a1fe0,&DAT_180271aba,0x1e,4,&DAT_1802a1fe4);
    *(undefined1 *)((longlong)puVar6 + lVar1 + 2) = DAT_1802a1fe2;
    *(undefined2 *)((longlong)puVar6 + lVar1) = DAT_1802a1fe0;
    *(undefined1 *)((longlong)puVar6 + (longlong)puVar9) = local_41;
    if (local_50 < local_d8) goto LAB_180065f57;
  }
  lVar1 = local_58[2];
  if ((undefined *)local_58[3] + -lVar1 < local_e0) {
    FUN_180066dd0(local_58,local_e0,local_e0,ppppuVar4,local_e0);
    puVar5 = local_e0;
    if (local_c0 != local_88) {
LAB_18006604d:
      puVar6 = local_58;
      puVar9 = local_68;
      lVar1 = local_58[2];
      if ((undefined *)local_58[3] + -lVar1 < local_68) {
        FUN_1800b8f52(&DAT_1802a1fe8,&DAT_180271aef,0x15,5,&DAT_1802a1ff0);
        FUN_180066dd0(puVar6,puVar9);
        puVar5 = puVar9;
        if (local_50 < local_b8) {
LAB_1800660c2:
          ppppuVar7 = (undefined8 ****)local_d0[0];
        }
      }
      else {
        local_58[2] = local_68 + lVar1;
        if (local_50 < (undefined *)local_58[3]) {
          puVar6 = (undefined8 *)*local_58;
        }
        *(undefined4 *)((longlong)puVar6 + lVar1) = 0x22202c22;
        *(undefined1 *)((longlong)puVar6 + (longlong)(local_68 + lVar1)) = local_41;
        if (local_50 < local_b8) goto LAB_1800660c2;
      }
      lVar1 = local_58[2];
      if ((ulonglong)((longlong)local_58[3] - lVar1) < local_c0) {
        FUN_180066dd0(local_58,local_c0,local_c0,ppppuVar7,local_c0);
      }
      else {
        local_58[2] = lVar1 + local_c0;
        puVar6 = local_58;
        if (local_50 < (undefined *)local_58[3]) {
          puVar6 = (undefined8 *)*local_58;
        }
        FUN_1802079d0(lVar1 + (longlong)puVar6,ppppuVar7,local_c0,local_58,puVar5);
        *(undefined1 *)((longlong)puVar6 + lVar1 + local_c0) = local_41;
      }
    }
  }
  else {
    local_58[2] = local_e0 + lVar1;
    puVar6 = local_58;
    if (local_50 < (undefined *)local_58[3]) {
      puVar6 = (undefined8 *)*local_58;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar6,ppppuVar4,local_e0,local_58,puVar5);
    *(undefined1 *)((longlong)puVar6 + (longlong)(local_e0 + lVar1)) = local_41;
    if (local_c0 != local_88) goto LAB_18006604d;
  }
  puVar5 = (undefined *)local_58[2];
  if (puVar5 < (undefined *)local_58[3]) {
    local_58[2] = puVar5 + local_80;
    puVar6 = local_58;
    if (local_50 < (undefined *)local_58[3]) {
      puVar6 = (undefined8 *)*local_58;
    }
    *(undefined1 *)((longlong)puVar6 + (longlong)puVar5) = local_42;
    *(undefined1 *)((longlong)puVar6 + (longlong)(puVar5 + local_80)) = local_41;
  }
  else {
    FUN_18006a970(local_58,local_80);
  }
  if (local_50 < local_b8) {
    puVar5 = local_b8 + local_80;
    ppppuVar4 = (undefined8 ****)local_d0[0];
    if (local_98 < puVar5) {
      ppppuVar4 = (undefined8 ****)local_d0[0][-1];
      if (local_b0 <= (ulonglong)((longlong)local_d0[0] + (local_a8 - (longlong)ppppuVar4))) goto LAB_18006622f;
      puVar5 = local_b8 + local_a0;
    }
    thunk_FUN_1801f42e0(ppppuVar4,puVar5);
  }
  puVar6 = local_58;
  if (local_50 < local_d8) {
    puVar5 = local_d8 + local_80;
    ppppuVar4 = (undefined8 ****)local_f0[0];
    if (local_98 < puVar5) {
      ppppuVar4 = (undefined8 ****)local_f0[0][-1];
      if (local_b0 <= (ulonglong)((longlong)local_f0[0] + (local_a8 - (longlong)ppppuVar4))) {
LAB_18006622f:
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_6c,local_88);
      }
      puVar5 = local_d8 + local_a0;
    }
    thunk_FUN_1801f42e0(ppppuVar4,puVar5);
  }
  return puVar6;
}



void Unwind_180066250(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x68);
  return;
}



void Unwind_180066290(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x48);
  return;
}



void Unwind_1800662d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0xe0));
  return;
}



void * __thiscall FUN_180066340(void *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_100;
  uintptr_t local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 ***local_d8;
  ulonglong local_d0;
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined1 local_90;
  undefined8 ***local_88 [3];
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;

  local_138 = 0x7d26d49e2b6126b;
  local_140 = 0xe0478e0470ca9ed1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_138 ^ 0x1395c72d2b40f539;
            uVar2 = local_138 ^ local_140;
            local_140 = local_140 ^ 0x1395c72d2b40f539;
            local_138 = uVar4;
            if ((longlong)uVar2 < 0xc90246f518ee2a) break;
            if ((longlong)uVar2 < 0x374bd788d3c8cea3) {
              if ((longlong)uVar2 < 0x2a88038a9e0ee0be) {
                if (uVar2 == 0xc90246f518ee2a) {
                  local_a8 = (undefined8 ***)local_a0[-1];
                  local_138 = 0x262099802e420818;
                  if ((ulonglong)((longlong)local_a0 + (-8 - (longlong)local_a8)) < 0x20) {
                    local_138 = 0xfbae56ff7e25df82;
                  }
                  local_140 = 0x8d0914a133addf9;
                }
                else if (uVar2 == 0x2701bc289e3e7d25) {
                  FUN_180002ac0();
                }
              }
              else if (uVar2 == 0x2a88038a9e0ee0be) {
                local_138 = 0x631ac4235fbe18b8;
                if (local_128 < 0x10) {
                  local_138 = 0xcdb3bc056504da2;
                }
                local_140 = 0x86cbd148a6be1cce;
              }
              else if (uVar2 == 0x2eff10821fb259f0) {
                lVar3 = FUN_1801d61c8(local_118 + local_100);
                local_d0 = lVar3 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(local_d0 - 8) = lVar3;
                local_138 = 0x969f1b9b9f9d5f99;
                local_140 = 0x7e4c3a6130d454f;
              }
              else if (uVar2 == 0x2ef008ca3d78d5e1) {
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_f8);
              }
            }
            else if (uVar2 == 0x374bd788d3c8cea3) {
              local_a0 = local_88[0];
              local_e0 = local_e8 + local_120;
              local_138 = 0xa7c7817f5fd83ab5;
              if (0xfff < local_e0) {
                local_138 = 0x4501c644b5b15181;
              }
              local_140 = 0x45c8c40240a9bfab;
              local_d8 = local_88[0];
            }
            else if (uVar2 == 0x70d5e7823b76d46f) {
              local_68 = *(undefined4 *)param_2;
              uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
              uStack_60 = *(undefined4 *)(param_2 + 1);
              uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
              FUN_180066ad0(local_88,&local_68);
              local_98 = local_88;
              if (local_130 < local_70) {
                local_98 = local_88[0];
              }
              *(exception_vftable **)this = &std::exception::vftable;
              *(undefined8 *)((longlong)this + 8) = 0;
              *(undefined8 *)((longlong)this + 0x10) = 0;
              local_90 = 1;
              FUN_1801dd1b8(&local_98,(longlong)this + 8);
              *(runtime_error_vftable **)this = &std::runtime_error::vftable;
              local_e8 = local_70;
              local_138 = 0x8344621466eb747a;
              if (local_130 < local_70) {
                local_138 = 0x77265a3bc23df643;
              }
              local_140 = 0x406d8db311f538e0;
            }
            else if (uVar2 == 0x78d0a138c328d219) {
              local_d0 = FUN_1801d61c8(local_118 + local_120);
              local_138 = 0xc0a87a4eb7e8a038;
              local_140 = 0x51d3a2733b78baee;
            }
          }
          if ((longlong)uVar2 < -0x1a2eea9406fffb8a) break;
          if (uVar2 == 0xe5d1156bf9000476) {
            uVar2 = local_128 | local_130;
            local_118 = 0x16;
            if (0x16 < uVar2) {
              local_118 = uVar2;
            }
            local_138 = 0x3ffde54781c9abfb;
            if (0xffe < uVar2) {
              local_138 = 0x69d254fd5d532012;
            }
            local_140 = 0x472d447f42e179e2;
          }
          else if (uVar2 == 0xe795e34d927c8cba) {
            local_130 = 0xf;
            local_f8 = 0;
            local_120 = 1;
            local_100 = 0x28;
            local_128 = param_3[2];
            local_f0 = param_3;
            if (0xf < (ulonglong)param_3[3]) {
              local_f0 = (undefined8 *)*param_3;
            }
            local_138 = 0x7551d5f687c45536;
            if ((longlong)local_128 < 0) {
              local_138 = 0x78d86a5487f4c8ad;
            }
            local_140 = 0x5fd9d67c19cab588;
          }
          else if (uVar2 == 0xf37ec7b56d1f027b) {
            local_e0 = local_e8 + local_100;
            local_d8 = local_a8;
            local_138 = 0xf7f66247f62cdbbd;
            local_140 = 0x15f9273ae95d5ea3;
          }
        }
        if (-0x3cd6105888e1b367 < (longlong)uVar2) break;
        if (uVar2 == 0x8a10ea88f0ee516c) {
          local_138 = 0x217e32f007b6ad89;
          local_140 = 0x51abd5723cc079e6;
        }
        else if (uVar2 == 0x917bd83d8c901ad6) {
          FUN_1802079d0(local_d0,local_f0);
          local_138 = 0xbfb98cd2d6a38f0e;
          local_140 = 0xcf6c6b50edd55b61;
        }
      }
      if (uVar2 != 0xe20f457d1f71851e) break;
      thunk_FUN_1801f42e0(local_d8,local_e0);
      local_138 = 0x29a7ac06c8ff74e2;
      local_140 = 0xea8e43a1bfe13878;
    }
  } while (uVar2 != 0xc329efa7771e4c9a);
  *(_System_error_vftable **)this = &std::_System_error::vftable;
  uVar1 = param_2[1];
  *(undefined8 *)((longlong)this + 0x18) = *param_2;
  *(undefined8 *)((longlong)this + 0x20) = uVar1;
  return this;
}



undefined8 * FUN_180066ad0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 ***local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  uintptr_t local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined1 local_41;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_60 = 0xf;
  local_68 = 0;
  local_41 = 0;
  local_58 = 2;
  lVar1 = param_3[2];
  local_50 = param_3;
  if (lVar1 != 0) {
    if ((ulonglong)(param_3[3] - lVar1) < 2) {
      FUN_1800b8f52(&DAT_1802a1fd8,&DAT_180271a87,0x1b,3,&DAT_1802a1fdc);
      FUN_180066dd0(param_3,2);
    }
    else {
      param_3[2] = lVar1 + 2;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      *(undefined2 *)((longlong)param_3 + lVar1) = 0x203a;
      *(undefined1 *)((longlong)param_3 + lVar1 + 2) = 0;
    }
  }
  (**(code **)(**(longlong **)(param_2 + 2) + 0x10))(*(longlong **)(param_2 + 2),local_88,*param_2);
  ppppuVar5 = local_88;
  if (local_60 < local_70) {
    ppppuVar5 = (undefined8 ****)local_88[0];
  }
  lVar1 = local_50[2];
  if ((ulonglong)(local_50[3] - lVar1) < local_78) {
    FUN_180066dd0(local_50,local_78,local_78,ppppuVar5,local_78);
    if (local_70 <= local_60) goto LAB_180066d08;
  }
  else {
    local_50[2] = lVar1 + local_78;
    puVar7 = local_50;
    if (local_60 < (ulonglong)local_50[3]) {
      puVar7 = (undefined8 *)*local_50;
    }
    FUN_1802079d0(lVar1 + (longlong)puVar7,ppppuVar5);
    *(undefined1 *)((longlong)puVar7 + lVar1 + local_78) = local_41;
    if (local_70 <= local_60) goto LAB_180066d08;
  }
  puVar7 = local_50;
  uVar6 = local_70 + 1;
  ppppuVar5 = (undefined8 ****)local_88[0];
  if (0xfff < uVar6) {
    ppppuVar5 = (undefined8 ****)local_88[0][-1];
    if (0x1f < (ulonglong)((longlong)local_88[0] + (-8 - (longlong)ppppuVar5))) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_68);
    }
    uVar6 = local_70 + 0x28;
  }
  thunk_FUN_1801f42e0(ppppuVar5,uVar6);
  local_50 = puVar7;
LAB_180066d08:
  uVar2 = *local_50;
  uVar3 = local_50[1];
  uVar4 = local_50[3];
  param_1[2] = local_50[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return param_1;
}



void Unwind_180066d50(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(param_2 + 0x30);
  return;
}



void Unwind_180066d90(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x68));
  return;
}



ulonglong * FUN_180066dd0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_119;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  uintptr_t local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;

  local_110 = 0x90b61f942c5a4fa6;
  local_118 = 0x3916963b2dcc6e2b;
LAB_180066ee0:
  do {
    while( true ) {
      while( true ) {
        uVar3 = local_110 ^ 0xa53331f5df35dc8e;
        uVar1 = local_110 ^ local_118;
        local_118 = local_118 ^ 0xa53331f5df35dc8e;
        local_110 = uVar3;
        if (-0x548110e5d71c7e4 < (longlong)uVar1) break;
        if ((longlong)uVar1 < -0x2af1147a8bf29a4f) {
          if ((longlong)uVar1 < -0x55c264bf8330eba5) {
            if (uVar1 == 0xa9a089af0196218d) {
              local_98 = 0xf;
              local_f0 = 0;
              local_f8 = 1;
              local_a0 = 0x28;
              local_119 = 0;
              local_a8 = 0xfff;
              local_100 = 0x7fffffffffffffff;
              local_70 = param_1 + 2;
              local_e8 = param_1[2];
              local_110 = 0x43771dd6740dae09;
              if (0x7fffffffffffffff - local_e8 < param_2) {
                local_110 = 0x6ed0dd1f843f83f3;
              }
              local_118 = 0x7a708b97cf32354a;
            }
            else if (uVar1 == 0x9e9be6bf069f50a3) {
              *param_1 = local_c0;
              return param_1;
            }
          }
          else if (uVar1 == 0xaa3d9b407ccf145b) {
            local_88 = local_60 + local_108;
            if (local_60 + local_108 < local_48) {
              local_88 = local_48;
            }
            local_e0 = local_88 + local_f8;
            local_110 = 0xc395dd23e0552479;
            if (local_e0 == local_f0) {
              local_110 = 0xff7c580f9529102b;
            }
            local_118 = 0x28f8132590aa8650;
            local_d0 = 0xffffffffffffffff;
            local_c8 = 0;
          }
          else if (uVar1 == 0xd12ff6904ece8d58) {
            local_90 = *param_1;
            FUN_1802079d0(local_c0,local_90,local_e8);
            FUN_1802079d0(local_c0 + local_e8,param_4);
            *(undefined1 *)(param_5 + local_c0 + local_e8) = local_119;
            local_80 = local_108 + local_f8;
            local_110 = 0xbbed612e035daa4a;
            if (local_a8 < local_80) {
              local_110 = 0x27ca07a6cfd60344;
            }
            local_118 = 0x415a8fdfa1d39257;
            local_78 = local_90;
          }
        }
        else if ((longlong)uVar1 < -0x149231f98f005dd7) {
          if (uVar1 == 0xd50eeb85740d65b1) {
            local_80 = local_108 + local_a0;
            local_110 = 0x344ceb6772fb06f7;
            local_118 = 0xcefb0596d0753eea;
            local_78 = local_68;
          }
          else if (uVar1 == 0xd7844b2a0583967b) {
            local_c0 = local_c8;
            *local_70 = local_58;
            *local_50 = local_d0;
            local_110 = 0x946c4d91608a34b5;
            if (local_98 < local_108) {
              local_110 = 0x5a9601507b375769;
            }
            local_118 = 0x8bb9f7c035f9da31;
          }
        }
        else if (uVar1 == 0xeb6dce0670ffa229) {
          local_110 = 0xc8a9e9e227ca95f0;
          if (local_a8 < local_e0) {
            local_110 = 0x64725d2778d733d9;
          }
          local_118 = 0x25b03e85d913de56;
        }
        else if (uVar1 == 0xed19d767fed94ba6) {
          local_c8 = FUN_1801d61c8(local_e0);
          local_110 = 0xb444cc368efe9769;
          local_118 = 0x63c0871c8b7d0112;
          local_d0 = local_88;
        }
      }
      if ((longlong)uVar1 < 0x41c263a2a1c4ed8f) break;
      if ((longlong)uVar1 < 0x6f4025bbb499d83e) {
        if (uVar1 == 0x41c263a2a1c4ed8f) {
          local_110 = 0xb34d155bcf5d3be0;
          if (local_e0 < 0xffffffffffffffd9) {
            local_110 = 0xdbad0fa81d64cafb;
          }
          local_118 = 0xb4ed2a13a9fd12c5;
          local_d8 = local_88;
        }
        else if (uVar1 == 0x669088796e059113) {
          local_68 = *(ulonglong *)(local_90 - 8);
          local_110 = 0xae84b2c1cd120f4b;
          if ((local_90 - local_68) - 8 < 0x20) {
            local_110 = 0x436fe696ceed0090;
          }
          local_118 = 0x96610d13bae06521;
        }
      }
      else if (uVar1 == 0x6f4025bbb499d83e) {
        lVar2 = FUN_1801d61c8(local_a0 + local_d8);
        local_c8 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(local_c8 - 8) = lVar2;
        local_110 = 0xa19448e4cd40c48a;
        local_118 = 0x761003cec8c352f1;
        local_d0 = local_d8;
      }
      else if (uVar1 == 0x7432469a597cf0f2) {
        local_60 = local_108 >> ((byte)local_f8 & 0x3f);
        local_110 = 0x2278a6cb40a1c3f2;
        if ((local_60 ^ local_100) < local_108) {
          local_110 = 0xe705183088f70f97;
        }
        local_118 = 0x88453d8b3c6ed7a9;
LAB_1800672c6:
        local_d8 = local_100;
      }
    }
    if (0x1fd5ba515573ee83 < (longlong)uVar1) {
      if (uVar1 == 0x1fd5ba515573ee84) {
        FUN_1802079d0(local_c0,param_1,local_e8);
        FUN_1802079d0(local_c0 + local_e8,param_4);
        *(undefined1 *)(param_5 + local_c0 + local_e8) = local_119;
        local_110 = 0xe12cdacab4dd62dd;
        local_118 = 0x7fb73c75b242327e;
      }
      else {
        if (uVar1 == 0x39079641bb3f9b43) {
          local_58 = local_e8 + param_2;
          local_50 = param_1 + 3;
          local_108 = param_1[3];
          local_48 = local_98 | local_58;
          local_110 = 0x7bf30185988e47c3;
          if ((longlong)local_58 < (longlong)local_f0) {
            local_110 = 0x608162a4756b6f0f;
          }
          local_118 = 0xfc1471fc1f2b731;
          goto LAB_1800672c6;
        }
        if (uVar1 == 0x38e5bfd277f26a6a) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_f0);
        }
      }
      goto LAB_180066ee0;
    }
    if (uVar1 == 0xfab7eef1a28e381d) {
      thunk_FUN_1801f42e0(local_78,local_80);
      local_110 = 0xbc4fb0c2221acbcb;
      local_118 = 0x22d4567d24859b68;
    }
    else {
      if (uVar1 == 0x7a03f4866a02925) {
        std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
      }
      if (uVar1 == 0x14a056884b0db6b9) {
        FUN_180002ac0();
      }
    }
  } while( true );
}



undefined8 * FUN_180067960(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  uVar2 = param_3[1];
  if (uVar2 == 0) {
    return param_1;
  }
  if (0x7fffffff < uVar2) {
    uVar2 = FUN_180067b60(0x16);
LAB_180067b1c:
    FUN_180068290(uVar2 & 0xffffffff);
  }
  uVar6 = 0;
  uVar1 = FUN_1801d92b4(param_2,*param_3,uVar2,0,0);
  uVar2 = uVar1 >> 0x20;
  if (uVar2 != 0) goto LAB_180067b1c;
  uVar5 = (ulonglong)(int)uVar1;
  uVar2 = param_1[2];
  uVar3 = uVar5 - uVar2;
  puVar4 = param_1;
  if (uVar5 < uVar2 || uVar3 == 0) {
    param_1[2] = uVar5;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
  }
  else {
    if (param_1[3] - uVar2 < uVar3) {
      FUN_1800682e0(param_1,uVar3,uVar3,uVar3,uVar6 & 0xffffff00);
      goto LAB_180067ac4;
    }
    param_1[2] = uVar5;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_180207610(uVar2 + (longlong)puVar4,0);
  }
  *(undefined1 *)((longlong)puVar4 + uVar5) = 0;
LAB_180067ac4:
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  uVar2 = FUN_1801d92b4(param_2,*param_3,*(undefined4 *)(param_3 + 1),puVar4,(int)uVar1);
  if (uVar2 >> 0x20 == 0) {
    return param_1;
  }
  FUN_180068290(uVar2 >> 0x20);
}



void Unwind_180067b30(undefined8 param_1,longlong param_2)

{
  FUN_180001ef0(*(undefined8 *)(param_2 + 0x30));
  return;
}



void FUN_180067b60(undefined4 param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined **local_40;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  local_40 = &PTR_vftable_18020e7a0;
  local_48[0] = param_1;
  std::system_error::system_error((system_error *)&stack0xffffffffffffffc8,(undefined8 *)local_48);
  FUN_1801dd110((system_error *)&stack0xffffffffffffffc8,&DAT_1802535b8);
}



void FUN_180067bb0(undefined8 *param_1,ulonglong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 local_81;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_78 = 0x3feb9aaa65960b0d;
  local_80 = 0x98fe2662d4369b67;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = local_78 ^ local_80;
          local_80 = local_80 ^ 0xc0545dc7c019c968;
          if ((longlong)uVar1 < 0x48b5e0d35b1a3326) break;
          if (uVar1 == 0x48b5e0d35b1a3326) {
            *local_68 = param_2;
            puVar2 = param_1;
            if (local_70 < local_48) {
              puVar2 = (undefined8 *)*param_1;
            }
            FUN_180207610(local_60 + (longlong)puVar2,param_3,local_50);
            *(undefined1 *)((longlong)puVar2 + param_2) = local_81;
            local_78 = 0x453878ebe9b1e273;
            local_80 = 0xaf6b87f219c2b3a2;
          }
          else if (uVar1 == 0x5c8892a3adcc803d) {
            FUN_1800682e0(param_1);
            local_78 = 0x1f5677c203badaa7;
            local_80 = 0xf50588dbf3c98b76;
          }
          else {
            local_78 = local_78 ^ 0xc0545dc7c019c968;
            if (uVar1 == 0x7e0fe3c071829c46) {
              *local_68 = param_2;
              puVar2 = param_1;
              if (local_70 < *local_58) {
                puVar2 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)puVar2 + param_2) = local_81;
              local_78 = 0x72344bc14d1d26f7;
              local_80 = 0x9867b4d8bd6e7726;
            }
          }
        }
        if (uVar1 != 0xa715bcc8b1a0906a) break;
        local_70 = 0xf;
        local_81 = 0;
        local_68 = param_1 + 2;
        local_60 = param_1[2];
        local_78 = 0x31f818859b96b80b;
        if (local_60 < param_2) {
          local_78 = 0x8d255afe876a87b4;
        }
        local_58 = param_1 + 3;
        local_80 = 0x4ff7fb45ea14244d;
      }
      if (uVar1 != 0xc2d2a1bb6d7ea3f9) break;
      local_50 = param_2 - local_60;
      local_48 = *local_58;
      local_78 = 0xd77f68852c1cc4d5;
      if (local_48 - local_60 < local_50) {
        local_78 = 0xc3421af5daca77ce;
      }
      local_80 = 0x9fca88567706f7f3;
    }
    local_78 = local_78 ^ 0xc0545dc7c019c968;
  } while (uVar1 != 0xea53ff19f07351d1);
  return;
}



void FUN_180068290(undefined4 param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined **local_40;
  ulonglong local_10;

  local_10 = DAT_1802a0400 ^ (ulonglong)auStack_68;
  local_40 = &PTR_vftable_18020e790;
  local_48[0] = param_1;
  std::system_error::system_error((system_error *)&stack0xffffffffffffffc8,(undefined8 *)local_48);
  FUN_1801dd110((system_error *)&stack0xffffffffffffffc8,&DAT_1802535b8);
}



ulonglong * FUN_1800682e0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,undefined1 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  uintptr_t local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_108 = 0xe01b9a7c588d8025;
  local_110 = 0xe791e0f3093766b6;
LAB_180068390:
  do {
    while( true ) {
      uVar3 = local_108 ^ 0xf079fdbbc47411fb;
      uVar1 = local_108 ^ local_110;
      local_110 = local_110 ^ 0xf079fdbbc47411fb;
      local_108 = uVar3;
      if ((longlong)uVar1 < 0x1d05e6102c045304) break;
      if ((longlong)uVar1 < 0x6b717dd46b730430) {
        if ((longlong)uVar1 < 0x3bac308c6a4861d3) {
          if (uVar1 == 0x273223280bca4668) {
            local_108 = 0x8b891d60a7a1bc70;
            if (local_a8 < local_d8) {
              local_108 = 0x9ea68c41ec920aaf;
            }
            local_110 = 0xf5d7f19587e10e9f;
          }
          else if (uVar1 == 0x1d05e6102c045304) {
            *param_1 = local_b8;
            return param_1;
          }
        }
        else if (uVar1 == 0x3bac308c6a4861d3) {
          thunk_FUN_1801f42e0(local_78,local_80);
          local_108 = 0x1c5cd0c3fa0e5af4;
          local_110 = 0x15936d3d60a09f0;
        }
        else if (uVar1 == 0x593741c7686d8fe9) {
          local_60 = local_e0 + param_2;
          local_58 = param_1 + 3;
          local_100 = param_1[3];
          local_50 = local_98 | local_60;
          local_108 = 0xf3ebe1fcdc2bd9d0;
          if ((longlong)local_60 < (longlong)local_e8) {
            local_108 = 0xb4d9a8259879b193;
          }
          local_110 = 0x50fcfc74e0dd95cb;
LAB_18006898b:
          local_d0 = local_f8;
        }
      }
      else if ((longlong)uVar1 < 0x78c791dcf68f2d6f) {
        if (uVar1 == 0x6b717dd46b730430) {
          local_108 = 0xd89e2923d22903af;
          if (local_d8 < 0xffffffffffffffd9) {
            local_108 = 0xbc599c0e00a64309;
          }
          local_110 = 0x587cc85f78026751;
          local_d0 = local_88;
        }
        else if (uVar1 == 0x702a6e649a53815b) {
          local_80 = local_100 + local_a0;
          local_108 = 0x3981e0a0012b39f0;
          local_110 = 0x22dd02c6b635823;
          local_78 = local_68;
        }
      }
      else if (uVar1 == 0x78c791dcf68f2d6f) {
        local_b8 = local_c0;
        *local_70 = local_60;
        *local_58 = local_c8;
        local_108 = 0xa488d025355bdf0c;
        if (local_98 < local_100) {
          local_108 = 0x3d6f26ad82f6f75d;
        }
        local_110 = 0x2179b5f90c4acee2;
      }
      else if (uVar1 == 0x7e5eecf52040b2ef) {
        local_c0 = FUN_1801d61c8(local_d8);
        local_108 = 0x1ac4c33af0c42fe9;
        local_110 = 0x620352e6064b0286;
        local_c8 = local_88;
      }
    }
    if ((longlong)uVar1 < -0x5ce8e277c309b3e5) {
      if ((longlong)uVar1 < -0x7a0e9a23c6eeee12) {
        if (uVar1 == 0x84a8a01b0d0a185c) {
          local_88 = local_48 + local_100;
          if (local_48 + local_100 < local_50) {
            local_88 = local_50;
          }
          local_d8 = local_88 + local_f0;
          local_108 = 0xa2a0cd7ad0198b7a;
          if (local_d8 == local_e8) {
            local_108 = 0xfd557f8e2d5ce07d;
          }
          local_110 = 0x8592ee52dbd3cd12;
          local_c8 = 0xffffffffffffffff;
          local_c0 = 0;
        }
        else if (uVar1 == 0x80e2e17caa2b64fe) {
          std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
        }
      }
      else if (uVar1 == 0x85f165dc391111ee) {
        FUN_1802079d0(local_b8,param_1,local_e0);
        FUN_180207610(local_b8 + local_e0,param_5);
        *(undefined1 *)(param_4 + local_b8 + local_e0) = local_111;
        local_108 = 0x1d57835393152561;
        local_110 = 0x526543bf117665;
      }
      else if (uVar1 == 0x8e21f9cedef1c04c) {
        local_68 = *(ulonglong *)(local_90 - 8);
        local_108 = 0xabc103cc203caa90;
        if ((local_90 - local_68) - 8 < 0x20) {
          local_108 = 0x2884fa10425e49;
        }
        local_110 = 0x7002ea9e8a11df12;
      }
      else if (uVar1 == 0x9174253cf4a46666) {
        FUN_180002ac0();
      }
      goto LAB_180068390;
    }
    if ((longlong)uVar1 < 0x78a7a8f51bae693) {
      if (uVar1 == 0xa3171d883cf64c1b) {
        local_48 = local_100 >> ((byte)local_f0 & 0x3f);
        local_108 = 0xf24b00a38347f232;
        if ((local_48 ^ local_f8) < local_100) {
          local_108 = 0x92c6f4e9f6e9ce36;
        }
        local_110 = 0x76e3a0b88e4dea6e;
        goto LAB_18006898b;
      }
      if (uVar1 == 0xe425545178a42458) {
        lVar2 = FUN_1801d61c8(local_a0 + local_d0);
        local_c0 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(local_c0 - 8) = lVar2;
        local_108 = 0xfb36579e636efad5;
        local_110 = 0x83f1c64295e1d7ba;
        local_c8 = local_d0;
      }
      else if (uVar1 == 0xdbc3e952aa2d7582) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e8);
      }
    }
    else if (uVar1 == 0x78a7a8f51bae693) {
      local_98 = 0xf;
      local_e8 = 0;
      local_f0 = 1;
      local_a0 = 0x28;
      local_111 = 0;
      local_a8 = 0xfff;
      local_f8 = 0x7fffffffffffffff;
      local_70 = param_1 + 2;
      local_e0 = param_1[2];
      local_108 = 0x29e7fb7daccfe007;
      if (0x7fffffffffffffff - local_e0 < param_2) {
        local_108 = 0xe1a49f8630060988;
      }
      local_110 = 0x70d0babac4a26fee;
    }
    else if (uVar1 == 0x1c1693548ebc39bf) {
      local_90 = *param_1;
      FUN_1802079d0(local_b8,local_90,local_e0);
      FUN_180207610(local_b8 + local_e0,param_5);
      *(undefined1 *)(param_4 + local_b8 + local_e0) = local_111;
      local_80 = local_100 + local_f0;
      local_108 = 0xe63ff7dae56ed9d7;
      if (local_a8 < local_80) {
        local_108 = 0x53b23e9851d77848;
      }
      local_110 = 0xdd93c7568f26b804;
      local_78 = local_90;
    }
  } while( true );
}



undefined8 * FUN_180068bb0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0xe2ce246d9a22ec6c;
  local_50 = 0xaffc5b7c3221e600;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x38f37603d5940029;
        if (uVar1 != 0x307320bfa2fd831a) break;
        thunk_FUN_1801f42e0(param_1,0x88);
        local_48 = 0x7f04b14214688234;
        local_50 = 0xf537a30bea32d5f1;
      }
      if (uVar1 != 0x4d327f11a8030a6c) break;
      std::exception::exception_Constructor_or_Destructor(param_1);
      local_48 = 0x89faee4b201b57a5;
      if ((param_2 & 1) == 0) {
        local_48 = 0x33badcbd7cbc837a;
      }
      local_50 = 0xb989cef482e6d4bf;
    }
    local_48 = local_48 ^ 0x38f37603d5940029;
  } while (uVar1 != 0x8a331249fe5a57c5);
  return param_1;
}



uint * FUN_180068d00(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_b8;
  ulonglong local_b0;
  short local_a4;
  short local_a2;
  uint *local_a0;
  short local_96;
  short local_94;
  short local_92;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  uint local_70;
  uint local_6c;
  longlong local_68;
  uint *local_60;
  uint *local_58;
  uint *local_50;
  ulonglong local_48;

  local_b0 = 0x477988ba56743321;
  local_b8 = 0x643830c0d995a0c7;
LAB_180068de0:
  do {
    while( true ) {
      uVar1 = local_b0 ^ 0xed4b77c8f07e07ff;
      uVar2 = local_b0 ^ local_b8;
      local_b8 = local_b8 ^ 0xed4b77c8f07e07ff;
      local_b0 = uVar1;
      if (0xf0fb49a77d34cb3 < (longlong)uVar2) break;
      if ((longlong)uVar2 < -0x2e2c9154c2ad4387) {
        if ((longlong)uVar2 < -0x68232a7d73be1ac7) {
          if ((longlong)uVar2 < -0x77419ddb4f24137c) {
            if (uVar2 == 0x8255a358ab73f923) {
              local_b0 = 0x591029bd6d06865a;
              if (local_a4 < 0x5c) {
                local_b0 = 0x46bb2394bab1f670;
              }
              local_b8 = 0x5ec55fae695e70c7;
            }
            else if (uVar2 == 0x843fddf22c75373e) {
              local_8a = (short)param_1[1];
              local_b0 = 0xc9ee4c890fed92ae;
              local_b8 = 0x8257aa593cb16288;
            }
            else if (uVar2 == 0x852690593355702f) {
              local_b0 = 0xbf3311da3f1200d;
              if (local_90 == 0x5c) {
                local_b0 = 0xd2fb21e48bf30692;
              }
              local_b8 = 0xb41758d77a1be86;
            }
          }
          else if ((longlong)uVar2 < -0x7088a62867877598) {
            if (uVar2 == 0x88be6224b0dbec84) {
              local_b0 = 0xe7256d93cf41924e;
              if (local_96 == 0x2f) {
                local_b0 = 0xf97f744219787cd9;
              }
              local_b8 = 0x54bdf649099e06;
            }
            else if (uVar2 == 0x8d96245a065c9021) {
              local_78 = local_60;
              local_92 = (short)*local_60;
              local_b0 = 0x19b6a2b7ca26cc30;
              local_b8 = 0x65219bc558e5b1d3;
            }
          }
          else if (uVar2 == 0x8f7759d798788a68) {
            local_a2 = (short)param_1[1];
            local_b0 = 0x806180940d035805;
            local_b8 = 0xa619edc925bccb4b;
          }
          else if (uVar2 == 0x962cb0bd289bd7ac) {
            local_b0 = 0x15dc4398c0bc7009;
            if (local_94 < 0x5c) {
              local_b0 = 0xd61dac32831a4c6d;
            }
            local_b8 = 0xc1631c52ac6c4057;
          }
        }
        else if ((longlong)uVar2 < -0x4ac1a06e2031e195) {
          if ((longlong)uVar2 < -0x4c8f13e32dffa4f7) {
            if (uVar2 == 0x97dcd5828c41e539) {
              local_a0 = (uint *)((longlong)local_78 + 2);
              local_b0 = 0x4a66e5b2d3b945da;
              if (local_a0 == param_2) {
                local_b0 = 0xdd27a6d536f56cdf;
              }
              local_b8 = 0xc7f0c1e8d5e5d5fb;
              local_60 = local_a0;
            }
            else if (uVar2 == 0x9f7f28798dd98b9d) {
              local_b0 = 0xd5d935aac082b718;
              if (local_8c == 0x2f) {
                local_b0 = 0xd40e8d63f3fc0c1b;
              }
              local_b8 = 0xeffe08bc4432c316;
            }
          }
          else if (uVar2 == 0xb370ec1cd2005b09) {
            local_b0 = 0x30aebb6f3338dc1;
            if (local_a4 < 0x5c) {
              local_b0 = 0x42bc20e08aa88a7c;
            }
            local_b8 = 0xb634b4272cfd93aa;
          }
          else if (uVar2 == 0xb38f9be30b6192bd) {
            local_50 = local_58;
            local_90 = (short)*local_58;
            local_b0 = 0xd90728aa248605fb;
            local_b8 = 0x1daaa00e6547b728;
          }
        }
        else if ((longlong)uVar2 < -0x3b52775bbe3e4d2d) {
          if (uVar2 == 0xb53e5f91dfce1e6b) {
            local_b0 = 0x2b91b033c1683cfd;
            if (local_a4 == 0x5c) {
              local_b0 = 0x501df1c9f15dc263;
            }
            local_b8 = 0xdf6aa81e6925480b;
          }
          else if (uVar2 == 0xc1790209fcc71fe9) {
            local_b0 = 0x7f4b1f8859d4d760;
            if (local_a2 == 0x2e) {
              local_b0 = 0x858ecf56f0495c58;
            }
            local_b8 = 0x9f59a86b1359e57c;
LAB_180069700:
            local_a0 = local_88;
          }
        }
        else if (uVar2 == 0xc4ad88a441c1b2d3) {
          local_b0 = 0xd46af156d962b26b;
          if (local_90 < 0x5c) {
            local_b0 = 0x89627e017042522c;
          }
          local_b8 = 0x514c610fea37c244;
        }
        else if (uVar2 == 0xc83227139dd92181) {
          local_b0 = 0x6594d680b9a725b9;
          if (local_96 < 0x5c) {
            local_b0 = 0x87884990873694a6;
          }
          local_b8 = 0xf362bb437ed7822;
        }
      }
      else if ((longlong)uVar2 < -0x1a7974ea0069caf8) {
        if ((longlong)uVar2 < -0x265fbb22f0134a78) {
          if (uVar2 == 0xd1d36eab3d52bc79) {
            local_b0 = 0x87e0c7b670b8f118;
            local_b8 = 0x9d37a08b93a8483c;
            local_a0 = param_1;
          }
          else if (uVar2 == 0xd4bf5fca6cd0305e) {
            local_b0 = 0xd150193e2e8393aa;
            if (local_94 == 0x5c) {
              local_b0 = 0xdad9931b08104fa8;
            }
            local_b8 = 0x83779513d12fd3;
          }
          else if (uVar2 == 0xd82e1f0e9a759068) {
            local_b0 = 0xdc46f477145a9028;
            if (local_90 == 0x2f) {
              local_b0 = 0x54ee48e3c58b6b7;
            }
            local_b8 = 0xdcf4b0e7c00a0ea3;
          }
        }
        else if ((longlong)uVar2 < -0x25a51b71e43e9f85) {
          if (uVar2 == 0xd9a044dd0fecb588) {
            local_b0 = 0x489da5f369e100df;
            local_b8 = 0xdf417071e5a0e5e6;
          }
          else if (uVar2 == 0xd9ba5469fc52b814) {
            local_80 = (uint *)((longlong)local_50 + 2);
            local_b0 = 0x1320fe6b75b0d66e;
            if (local_80 == param_2) {
              local_b0 = 0x804ba7704ce111a2;
            }
            local_b8 = 0xa0af65887ed144d3;
            local_58 = local_80;
          }
        }
        else if (uVar2 == 0xda5ae48e1bc1607b) {
          local_b0 = 0x82e145d551a5ab63;
          if (3 < local_48) {
            local_b0 = 0xa010beceabe2c22c;
          }
          local_b8 = 0xed4413d188a58db7;
        }
        else if (uVar2 == 0xe012b7e34a8d321c) {
          local_b0 = 0xa9d93835ab59317d;
          local_b8 = 0xefdfaa4035464d69;
        }
      }
      else if ((longlong)uVar2 < -0x6d4364baf8e1d21) {
        if ((longlong)uVar2 < -0xb776b3859aae62a) {
          if (uVar2 == 0xe5868b15ff963508) {
            local_b0 = 0x8b8e3ddb4a3008e4;
            if (local_92 == 0x5c) {
              local_b0 = 0x48f91e3ba6cc0448;
            }
            local_b8 = 0x522e790645dcbd6c;
LAB_180069d4a:
            local_a0 = local_78;
          }
          else if (uVar2 == 0xe771d06586480c48) {
            local_b0 = 0x30998bc6a4017504;
            local_b8 = 0x77a0a8d33ceb9b4d;
          }
        }
        else if (uVar2 == 0xf48894c7a65519d6) {
          local_b0 = 0x459d84de3b462085;
          if (local_a4 == 0x3f) {
            local_b0 = 0x35594101bf7e634d;
          }
          local_b8 = 0xb1669cf3930b5473;
        }
        else if (uVar2 == 0xf4fb182da84d74f6) {
          local_b0 = 0x2afaedf0910f1131;
          local_b8 = 0x302d8acd721fa815;
          local_a0 = param_1;
        }
      }
      else if ((longlong)uVar2 < 0x7d576130458f69d) {
        if (uVar2 == 0xf92bc9b45071e2df) {
          local_b0 = 0x53f48ae6ac07c7b6;
          local_b8 = 0xd1a129be07743e95;
        }
        else if (uVar2 == 0xb24490d4509e8b) {
          local_b0 = 0xe4175cd9fa8667d8;
          local_b8 = 0xc4f39e21c8b632a9;
          local_80 = local_50;
        }
      }
      else if (uVar2 == 0x7d576130458f69d) {
        local_b0 = 0x90c78a8d66a7a357;
        if (local_a4 == 0x5c) {
          local_b0 = 0xbd80d6405d3d5bdf;
        }
        local_b8 = 0x9a5628b900face67;
      }
      else if (uVar2 == 0xa91a234665d6d30) {
        local_b0 = 0x5d8cc311b360d33;
        local_b8 = 0x1f0fab0cf826b417;
        local_a0 = param_1;
      }
    }
    if ((longlong)uVar2 < 0x3f91de5cc7cb1f79) {
      if ((longlong)uVar2 < 0x228ad7f45521b205) {
        if ((longlong)uVar2 < 0x1ad7673de310b924) {
          if ((longlong)uVar2 < 0x187e7c3ad3ef86b7) {
            if (uVar2 == 0xf0fb49a77d34cb4) {
              local_94 = (short)local_70;
              local_b0 = 0xaeac21e3977dfae2;
              local_b8 = 0x3880915ebfe62d4e;
            }
            else if (uVar2 == 0x177eb0602f760c3a) {
              local_b0 = 0x129a4a128eb41c11;
              if (local_94 == 0x2f) {
                local_b0 = 0x1913c037a827c013;
              }
              local_b8 = 0xc34924b9b3e6a068;
            }
          }
          else if (uVar2 == 0x187e7c3ad3ef86b7) {
            local_b0 = 0xf0f1936f3ef9b8e8;
            if (local_a4 == 0x2f) {
              local_b0 = 0xddb6cfa205634060;
            }
            local_b8 = 0xfa60315b58a4d5d8;
          }
          else if (uVar2 == 0x198c51544557464e) {
            local_b0 = 0xbfc36fde582256b5;
            if (local_a4 == 0x2f) {
              local_b0 = 0xc44f2e246817a82b;
            }
            local_b8 = 0x4b3877f3f06f2243;
          }
        }
        else if ((longlong)uVar2 < 0x1d9d849e6ad4ffeb) {
          if (uVar2 == 0x1ad7673de310b924) {
            local_b0 = 0xb91e75bdbd329532;
            if (local_a0 == param_2) {
              local_b0 = 0x2a752ca6846352fe;
            }
            local_b8 = 0xa91ee5eb653078f;
            local_80 = local_a0;
            local_58 = local_a0;
          }
          else if (uVar2 == 0x1c3b69c776c469c8) {
            local_b0 = 0x27b61a507ea2b712;
            if (local_8e == 0x5c) {
              local_b0 = 0x632fa1793c9a0ff8;
            }
            local_b8 = 0x79f8c644df8ab6dc;
            local_a0 = param_1;
          }
        }
        else if (uVar2 == 0x1d9d849e6ad4ffeb) {
          local_b0 = 0x55f74462510c032;
          if (local_8e < 0x5c) {
            local_b0 = 0x2ca27f2e7185fc17;
          }
          local_b8 = 0x19641d8153d4a9fa;
        }
        else if (uVar2 == 0x20e4c2f832305571) {
          return local_80;
        }
      }
      else if ((longlong)uVar2 < 0x30bdb7998733837c) {
        if ((longlong)uVar2 < 0x26786d5d28bf934e) {
          if (uVar2 == 0x228ad7f45521b205) {
            local_a0 = param_1 + 1;
            local_b0 = 0xff501722e6be4708;
            local_b8 = 0xe587701f05aefe2c;
          }
          else if (uVar2 == 0x2341b87a8fe193e6) {
            local_68 = (longlong)param_2 - (longlong)param_1;
            local_48 = local_68 >> 1;
            local_b0 = 0x34fc1c1e0fd2ebd5;
            if ((longlong)local_48 < 2) {
              local_b0 = 0x11baa57f2b094d88;
            }
            local_b8 = 0xb6dc242c819f4ac;
            local_a0 = param_1;
          }
        }
        else if (uVar2 == 0x26786d5d28bf934e) {
          local_b0 = 0x2685958cf94f6776;
          if (local_a2 < 0x3f) {
            local_b0 = 0x8d9ac57c9f66cb30;
          }
          local_b8 = 0x4ce3c77563a1d4d9;
        }
        else if (uVar2 == 0x27d6fef95dc795b8) {
          local_8e = (short)param_1[1];
          local_b0 = 0x32cd9d7d9332c68a;
          local_b8 = 0x2f5019e3f9e63961;
        }
      }
      else if ((longlong)uVar2 < 0x3a273d1684b0740e) {
        if (uVar2 == 0x30bdb7998733837c) {
          local_b0 = 0x185c877ec11b555c;
          if (local_92 == 0x2f) {
            local_b0 = 0xdb2ba49e2de759f0;
          }
          local_b8 = 0xc1fcc3a3cef7e0d4;
          goto LAB_180069d4a;
        }
        if (uVar2 == 0x35c662af225155ed) {
          local_b0 = 0x7079566d7a4a19e;
          if (local_8e == 0x2f) {
            local_b0 = 0x439e2e4f959c1974;
          }
          local_b8 = 0x59494972768ca050;
          local_a0 = param_1;
        }
      }
      else if (uVar2 == 0x3a273d1684b0740e) {
        local_b0 = 0x515345c5cacb6638;
        local_b8 = 0xa8788c719aba84e7;
      }
      else if (uVar2 == 0x3bf085dfb7cecf0d) {
        local_b0 = 0x3ec2b52644921254;
        if (local_68 == 8) {
          local_b0 = 0x23d8ccd4934bf545;
        }
        local_b8 = 0x64e1efc10ba11b0c;
      }
      goto LAB_180068de0;
    }
    if ((longlong)uVar2 < 0x5a235ae74f330958) {
      if ((longlong)uVar2 < 0x4bb9e6d0335cf026) {
        if (uVar2 == 0x3f91de5cc7cb1f79) {
          local_70 = *param_1;
          local_6c = local_70 >> 0x10;
          local_a4 = (short)(local_70 >> 0x10);
          local_b0 = 0xb6010732b2635502;
          if ((local_70 & 0xffffffdf) - 0x3a0041 < 0x1a) {
            local_b0 = 0x9b84645c9091abb3;
          }
          local_b8 = 0xb90eb3a8c5b019b6;
        }
        else if (uVar2 == 0x460692759e1f7c14) {
          local_b0 = 0xaab794cdaf4f70b5;
          if (local_6c == 0x3f) {
            local_b0 = 0x1825bba9cc62624c;
          }
          local_b8 = 0x539c5d79ff3e926a;
          local_8a = local_a2;
        }
        else if (uVar2 == 0x4739231598eaee49) {
          local_b0 = 0x95766d209dbe2c75;
          local_b8 = 0xc41287cd4097e32f;
        }
      }
      else if ((longlong)uVar2 < 0x4d54ad1f23474f9b) {
        if (uVar2 == 0x4bb9e6d0335cf026) {
          local_a0 = param_1;
          if (local_8a == 0x3f) {
            local_a0 = local_88;
          }
          local_b0 = 0x48c4712a01613a4b;
          local_b8 = 0x52131617e271836f;
        }
        else if (uVar2 == 0x4c090bf47488b57b) {
          local_b0 = 0xcf8be048e1b7ec81;
          if (local_8c == 0x5c) {
            local_b0 = 0xce5c5881d2c95782;
          }
          local_b8 = 0xf5acdd5e6507988f;
        }
      }
      else if (uVar2 == 0x4d54ad1f23474f9b) {
        local_88 = (uint *)((longlong)param_1 + 6);
        local_8c = *(short *)((longlong)param_1 + 6);
        local_b0 = 0xa359d2354f32f287;
        local_b8 = 0xc93e198333216531;
      }
      else if (uVar2 == 0x5164eaeddd29cf5a) {
        local_b0 = 0xd629df737a409e39;
        if (local_a4 < 0x3f) {
          local_b0 = 0x7cd5623bed17837e;
        }
        local_b8 = 0x6559336fa840c530;
      }
    }
    else if ((longlong)uVar2 < 0x6a67cbb67c1397b6) {
      if ((longlong)uVar2 < 0x68cf855b8873d9d2) {
        if (uVar2 == 0x5a235ae74f330958) {
          local_96 = (short)param_1[2];
          local_b0 = 0x8a1dd1a9f958f037;
          local_b8 = 0x422ff6ba6481d1b6;
        }
        else if (uVar2 == 0x5e4edc14a12801ce) {
          local_b0 = 0xebfd78dcbe090320;
          local_b8 = 0x8332fd87367adaf2;
        }
      }
      else if (uVar2 == 0x68cf855b8873d9d2) {
        local_a0 = (uint *)((longlong)param_1 + 6);
        local_b0 = 0xb2c8c5a94fa26b2c;
        if (local_a0 == param_2) {
          local_b0 = 0x258986ceaaee4229;
        }
        local_b8 = 0x3f5ee1f349fefb0d;
        local_60 = local_a0;
      }
      else if (uVar2 == 0x6a6652f99aeeb3af) {
        local_b0 = 0x20a611145f588434;
        if (local_a2 == 0x3f) {
          local_b0 = 0xda63c1caf6c50f0c;
        }
        local_b8 = 0xc0b4a6f715d5b628;
        goto LAB_180069700;
      }
    }
    else if ((longlong)uVar2 < 0x6fa55604d90026d4) {
      if (uVar2 == 0x6a67cbb67c1397b6) {
        local_b0 = 0x139571198d5fdffc;
        if (local_8c < 0x5c) {
          local_b0 = 0xc0e35294740ee11a;
        }
        local_b8 = 0x5f9c7aedf9d76a87;
      }
      else if (uVar2 == 0x6aa2fd348e4a5d9b) {
        local_b0 = 0x39df54b0c61ecaa3;
        if (local_96 == 0x5c) {
          local_b0 = 0x27854d6110272434;
        }
        local_b8 = 0xdeae84d54056c6eb;
      }
    }
    else if (uVar2 == 0x6fa55604d90026d4) {
      local_b0 = 0x5ec45a1e6391403;
      if (local_68 == 4) {
        local_b0 = 0xe610eb2855584ff8;
      }
      local_b8 = 0xfcc78c15b648f6dc;
      local_a0 = param_1;
    }
    else if (uVar2 == 0x7c97397292c37de3) {
      local_b0 = 0xa50642fc5033ee09;
      if (local_92 < 0x5c) {
        local_b0 = 0x703d7e702896587d;
      }
      local_b8 = 0x4080c9e9afa5db01;
    }
  } while( true );
}



ulonglong * FUN_18006a0a0(ulonglong *param_1,ulonglong param_2)

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
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;

  local_108 = 0x3a38c1da4561dd0a;
  local_110 = 0xb3882464aae1de77;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = local_108 ^ 0xcf98d961bdf12058;
            uVar1 = local_108 ^ local_110;
            local_110 = local_110 ^ 0xcf98d961bdf12058;
            local_108 = uVar4;
            if ((longlong)uVar1 < 0x3afaebf44d0695dc) break;
            bVar3 = (byte)local_100;
            if ((longlong)uVar1 < 0x6c5e04bc262c431f) {
              if ((longlong)uVar1 < 0x5442ed6fa8167dee) {
                if (uVar1 == 0x3afaebf44d0695dc) {
                  local_98 = *param_1;
                  FUN_1802079d0(local_c0);
                  local_50 = local_f8 << (bVar3 & 0x3f);
                  local_90 = local_50 + local_f0;
                  local_108 = 0xc06981b6877f85c7;
                  if (local_90 < 0x1000) {
                    local_108 = 0xa1f6858c80ae6b56;
                  }
                  local_110 = 0xc288e9637367a896;
                  local_88 = local_98;
                }
                else if (uVar1 == 0x531720ecd34a2d1a) {
                  local_68 = local_d8 + param_2;
                  local_60 = param_1 + 3;
                  local_f8 = param_1[3];
                  local_58 = local_68 | local_b0;
                  local_108 = 0x795f4c0f2b88d0ec;
                  if (local_58 <= local_e0) {
                    local_108 = 0x365247e47af7983b;
                  }
                  local_110 = 0x582066b96ed6c638;
                }
              }
              else if ((longlong)uVar1 < 0x604be3187c0b8003) {
                if (uVar1 == 0x5442ed6fa8167dee) {
                  local_a0 = local_d0 << (bVar3 & 0x3f);
                  local_108 = 0xedefc9f7913b3320;
                  if (local_d0 != local_e8) {
                    local_108 = 0xf2cf2b7dc2973756;
                  }
                  local_110 = 0x81b1cd4bb717703f;
                  local_c8 = 0;
                }
                else if (uVar1 == 0x5b000135054e9579) {
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e8);
                }
              }
              else if (uVar1 == 0x637e6ceff3c9c3c0) {
                thunk_FUN_1801f42e0(local_88,local_90);
                local_108 = 0x58269d77fc7938fe;
                local_110 = 0x42c5d49f7479d016;
              }
              else if (uVar1 == 0x604be3187c0b8003) goto LAB_18006a91d;
            }
            else if ((longlong)uVar1 < 0x737ee63675804769) {
              if (uVar1 == 0x6c5e04bc262c431f) {
                local_c0 = local_c8;
                *local_80 = local_68;
                *local_60 = local_48;
                local_108 = 0xc5df829f4efefd38;
                if (local_f8 <= local_b0) {
                  local_108 = 0x1fcea8d0b7a504f;
                }
                local_110 = 0xff25696b03f868e4;
              }
              else if (uVar1 == 0x6e72215d14215e03) {
                local_78 = local_f8 >> (bVar3 & 0x3f);
                local_108 = 0x694da5b1510488f4;
                if (local_f8 <= local_e0 - local_78) {
                  local_108 = 0xbd38e7c50b5b55ca;
                }
                local_110 = 0x48328f07145a9e20;
              }
            }
            else if (uVar1 == 0x737ee63675804769) {
              local_108 = 0x30f684764d2d98a;
              if (local_d0 < 0x800) {
                local_108 = 0xae58872dd36bc5c2;
              }
              local_110 = 0xd43dae5912661894;
            }
            else if (uVar1 == 0x7a652974c10ddd56) {
              local_c8 = FUN_1801d61c8(local_a0);
              local_108 = 0xdb59f90e820cdcc2;
              local_110 = 0xb707fdb2a4209fdd;
            }
          }
          if (-0xaf5973de0fe3417 < (longlong)uVar1) break;
          if ((longlong)uVar1 < -0x2de6bc82fc01e06b) {
            if (uVar1 == 0x89b0e5beef80037d) {
              local_a8 = 0x27;
              local_e0 = 0x7ffffffffffffffe;
              local_e8 = 0;
              local_100 = 1;
              local_f0 = 2;
              local_b0 = 7;
              local_80 = param_1 + 2;
              local_d8 = param_1[2];
              local_108 = 0xf4b0d8fb92bd2c47;
              if (param_2 <= 0x7ffffffffffffffe - local_d8) {
                local_108 = 0xa83c9daf082750dd;
              }
              local_110 = 0xfb2bbd43db6d7dc7;
            }
            else if (uVar1 == 0xcd3f616fe9e1bb58) {
              local_90 = local_50 + 0x29;
              local_108 = 0x8d365f6bd3d9b037;
              local_110 = 0xee483384201073f7;
              local_88 = local_70;
            }
          }
          else if (uVar1 == 0xd219437d03fe1f95) {
            lVar2 = FUN_1801d61c8(local_a0 + local_a8);
            local_c8 = local_a8 + lVar2 & 0xffffffffffffffe0;
            *(longlong *)(local_c8 - 8) = lVar2;
            local_108 = 0x858a1773cb42f170;
            local_110 = 0xe9d413cfed6eb26f;
          }
          else if (uVar1 == 0xd732c61e76b4c11e) {
            local_108 = 0xc10b7b80e8c10477;
            if (0x7fffffffffffffec < local_d0) {
              local_108 = 0x326d124bae610d36;
            }
            local_110 = 0x131238fdeb3f1be2;
          }
        }
        if (0x2e168d5f4182d50 < (longlong)uVar1) break;
        if (uVar1 == 0xf50a68c21f01cbea) {
          local_48 = local_78 + local_f8;
          if (local_78 + local_f8 < local_58) {
            local_48 = local_58;
          }
          local_d0 = local_48 + local_100;
          local_108 = 0x5d8d0784e5e8f996;
          if ((longlong)local_e8 <= (longlong)local_d0) {
            local_108 = 0x698409f331f5047b;
          }
          local_110 = 0x3dc6e49c99e37995;
        }
        else if (uVar1 == 0xfed983e6088238ab) {
          FUN_1802079d0(local_c0,param_1);
          local_108 = 0xec1ee3ac1b91b642;
          local_110 = 0xf6fdaa4493915eaa;
        }
      }
      if (0xf9b65b849d0517f < (longlong)uVar1) break;
      if (uVar1 == 0x2e168d5f4182d51) {
        local_70 = *(ulonglong *)(local_98 - 8);
        local_108 = 0x6067763d47b91e43;
        if (0x1f < (local_98 - local_70) - 8) {
          local_108 = 0xf6581667ab163062;
        }
        local_110 = 0xad581752ae58a51b;
      }
    }
    if (uVar1 == 0x1ae349e88800e8e8) {
      *param_1 = local_c0;
      return param_1;
    }
    if (uVar1 == 0xf9b65b849d05180) {
      FUN_180002ac0();
    }
  } while (uVar1 != 0x217f2ab6455e16d4);
LAB_18006a91d:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



ulonglong * FUN_18006a970(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_111;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  uintptr_t local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;

  local_108 = 0xe409221401802577;
  local_110 = 0x6f9a8c912e54bd89;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = local_108 ^ 0x9ad1d71b23540df2;
          uVar1 = local_108 ^ local_110;
          local_110 = local_110 ^ 0x9ad1d71b23540df2;
          local_108 = uVar3;
          if ((longlong)uVar1 < -0x15d48df7a58f4f1) break;
          if ((longlong)uVar1 < 0x323aee112d968729) {
            if ((longlong)uVar1 < 0x903163b088f8d3a) {
              if (uVar1 == 0xfea2b72085a70b0f) {
                thunk_FUN_1801f42e0(local_78,local_80);
                local_108 = 0x22190a29f2fbee24;
                local_110 = 0x1b77b37718736c26;
              }
              else if (uVar1 == 0x4b116a497260d1) {
                local_60 = *(ulonglong *)(local_88 - 8);
                local_108 = 0xa1068d7b03586c46;
                if ((local_88 - local_60) - 8 < 0x20) {
                  local_108 = 0x382e7703cd928e05;
                }
                local_110 = 0x9fc1522a5b1ffc48;
              }
            }
            else if (uVar1 == 0x903163b088f8d3a) {
              FUN_1802079d0(local_b8,param_1);
              *(undefined1 *)(local_b8 + local_e0) = param_4;
              *(undefined1 *)(local_b8 + 1 + local_e0) = local_111;
              local_108 = 0x4fccc608e0889b4e;
              local_110 = 0x76a27f560a00194c;
            }
            else if (uVar1 == 0x261e9bedb1127331) {
              local_c8 = local_d0;
              lVar2 = FUN_1801d61c8(local_a0 + local_d0);
              local_c0 = lVar2 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(local_c0 - 8) = lVar2;
              local_108 = 0xbbafb0d253ebadd4;
              local_110 = 0x89955ec37e7d2afd;
            }
          }
          else if ((longlong)uVar1 < 0x3ec7df515847900e) {
            if (uVar1 == 0x323aee112d968729) {
              local_b8 = local_c0;
              *local_70 = local_58;
              *local_50 = local_c8;
              local_108 = 0xb29fa6bb221ef4e3;
              if (local_98 < local_100) {
                local_108 = 0x3f28b02c51e40100;
              }
              local_110 = 0xbb9cb0802a9179d9;
            }
            else {
              if (uVar1 == 0x396eb95eea888202) {
                *param_1 = local_b8;
                return param_1;
              }
              if (uVar1 == 0x3d5155e9a246a639) {
                FUN_180002ac0();
              }
            }
          }
          else if (uVar1 == 0x5ade34d61047ca4b) {
            local_c0 = FUN_1801d61c8(local_d8);
            local_108 = 0xeefc401591782bd9;
            local_110 = 0xdcc6ae04bceeacf0;
            local_c8 = local_90;
          }
          else if (uVar1 == 0x683c2bb9118d6818) {
            local_108 = 0x19b9b05d59d4c940;
            if (local_d8 < 0xffffffffffffffd9) {
              local_108 = 0xdc53124556220f63;
            }
            local_110 = 0xfa4d89a8e7307c52;
            local_d0 = local_90;
          }
          else if (uVar1 == 0x3ec7df515847900e) {
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_e8);
          }
        }
        if (-0x44a515a81f64f86e < (longlong)uVar1) break;
        if ((longlong)uVar1 < -0x6ad1c95a1f53ed38) {
          if (uVar1 == 0x84b400ac7b7578d9) {
            local_88 = *param_1;
            FUN_1802079d0(local_b8);
            *(undefined1 *)(local_b8 + local_e0) = param_4;
            *(undefined1 *)(local_b8 + 1 + local_e0) = local_111;
            local_80 = local_100 + local_f0;
            local_108 = 0x6cbe9952811dbe0f;
            if (local_a8 < local_80) {
              local_108 = 0x92573f184dc8d5d1;
            }
            local_110 = 0x921c2e7204bab500;
            local_78 = local_88;
          }
          else if (uVar1 == 0x8b93ae852fd498fe) {
            local_98 = 0xf;
            local_e8 = 0;
            local_f0 = 1;
            local_a0 = 0x28;
            local_111 = 0;
            local_a8 = 0xfff;
            local_f8 = 0x7fffffffffffffff;
            local_70 = param_1 + 2;
            local_e0 = param_1[2];
            local_108 = 0xb2859a03f07f8c3;
            if (0x7fffffffffffffff - local_e0 < param_2) {
              local_108 = 0x8d23e61e7dda5969;
            }
            local_110 = 0xb072b3f7df9cff50;
          }
        }
        else if (uVar1 == 0x952e36a5e0ac12c8) {
          local_90 = local_68 + local_100;
          if (local_68 + local_100 < local_48) {
            local_90 = local_48;
          }
          local_d8 = local_90 + local_f0;
          local_108 = 0x830bef570ec8e7a5;
          if (local_d8 == local_e8) {
            local_108 = 0x6c742ede9ac3883d;
          }
          local_110 = 0x5e4ec0cfb7550f14;
          local_c8 = 0xffffffffffffffff;
          local_c0 = 0;
        }
        else if (uVar1 == 0xa7ef2529968d724d) {
          local_80 = local_100 + local_a0;
          local_108 = 0xc9cce06482672813;
          local_110 = 0x376e574407c0231c;
          local_78 = local_60;
        }
      }
      if (-0x1c4943779edc0987 < (longlong)uVar1) break;
      if (uVar1 == 0xbb5aea57e09b0793) {
        local_58 = local_e0 + param_2;
        local_50 = param_1 + 3;
        local_100 = param_1[3];
        local_48 = local_98 | local_58;
        local_108 = 0x71413c8daa86d08;
        if ((longlong)local_58 < (longlong)local_e8) {
          local_108 = 0xc2bc34ad0a99e843;
        }
        local_110 = 0xe4a2af40bb8b9b72;
LAB_18006aff6:
        local_d0 = local_f8;
      }
      else if (uVar1 == 0xdd452f98b99de8b1) {
        local_108 = 0x4db410400a4f9687;
        if (local_a8 < local_d8) {
          local_108 = 0x7f560f2f0b8534d4;
        }
        local_110 = 0x176a24961a085ccc;
      }
    }
    if (uVar1 == 0xe3b6bc886123f67a) {
      local_68 = local_100 >> ((byte)local_f0 & 0x3f);
      local_108 = 0x3371f5b6061cb8aa;
      if ((local_68 ^ local_f8) < local_100) {
        local_108 = 0x804158fe57a2d953;
      }
      local_110 = 0xa65fc313e6b0aa62;
      goto LAB_18006aff6;
    }
    if (uVar1 == 0xe3f439f5bee4b512) {
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
  } while( true );
}



uint FUN_18006b210(undefined8 *param_1,ulonglong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [592];
  undefined1 local_80;
  uint local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  uint local_40;
  int local_3c;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_78 = 0x29;
  local_70 = 0x7ffffffffffffffe;
  local_58 = 1;
  local_3c = 1;
  local_40 = 0;
  local_68 = 0x58;
  local_50 = 2;
  local_48 = 7;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  uVar6 = param_2[2];
  if (7 < param_2[3]) {
    param_2 = (ulonglong *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar6) {
    FUN_180002ac0();
  }
  if (uVar6 < 8) {
    uStack_2e0 = 7;
    local_2f8 = *param_2;
    uStack_2f0 = param_2[1];
    local_2e8 = uVar6;
  }
  else {
    uVar7 = uVar6 | 7;
    if (0x7ffffffffffffffe < uVar7) {
LAB_18006b5dd:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    uVar10 = 10;
    if (10 < uVar7) {
      uVar10 = uVar7;
    }
    if (uVar7 < 0x7ff) {
      local_2f8 = FUN_1801d61c8(uVar10 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar7) goto LAB_18006b5dd;
      lVar9 = FUN_1801d61c8(uVar10 * 2 + 0x29);
      local_2f8 = lVar9 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(local_2f8 - 8) = lVar9;
    }
    local_2e8 = uVar6;
    uStack_2e0 = uVar10;
    FUN_1802079d0(local_2f8,param_2,(uVar6 << ((byte)local_58 & 0x3f)) + local_50);
  }
  local_2d8 = 0xffffffffffffffff;
  uVar5 = FUN_18006bc20(&local_2f8,param_3,&local_2d8,local_2d0);
  if ((int)uVar5 < 0x12) {
    local_7c = uVar5;
    if (uVar5 == 0) {
      local_80 = 1;
      local_7c = local_40;
      local_60 = (undefined8 *)FUN_1801d61c8(local_68);
      *(int *)(local_60 + 1) = local_3c;
      *(int *)((longlong)local_60 + 0xc) = local_3c;
      *local_60 = &PTR_FUN_18020e7c0;
      puVar8 = local_60 + 2;
      FUN_18006c6f0(puVar8,&local_2f8,param_3);
      *param_1 = puVar8;
      plVar4 = (longlong *)param_1[1];
      param_1[1] = local_60;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == local_3c) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == local_3c) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      goto LAB_18006b536;
    }
  }
  else {
    local_7c = 0;
    if (uVar5 != 0x12) {
      local_7c = uVar5;
    }
  }
  local_80 = 0;
LAB_18006b536:
  uVar5 = local_7c;
  FUN_1801d9424(local_2d8);
  if (local_48 < uStack_2e0) {
    lVar9 = uStack_2e0 << ((byte)local_58 & 0x3f);
    uVar7 = local_50 + lVar9;
    uVar6 = local_2f8;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(local_2f8 - 8);
      if (0x1f < (local_2f8 - uVar6) - 8) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_40,0);
      }
      uVar7 = lVar9 + local_78;
    }
    thunk_FUN_1801f42e0(uVar6,uVar7);
  }
  return uVar5;
}



void Unwind_18006b610(undefined8 param_1,longlong param_2)

{
  FUN_1801d9424(*(undefined8 *)(param_2 + 0x50));
  FUN_18004fbf0(param_2 + 0x30);
  return;
}



void Unwind_18006b650(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801f42e0(*(undefined8 *)(param_2 + 0x2c8),*(undefined8 *)(param_2 + 0x2c0));
  return;
}



void Unwind_18006b690(undefined8 param_1,longlong param_2)

{
  FUN_18006b8b0(param_2 + 0x30);
  return;
}



void FUN_18006b6c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  longlong *local_48;

  local_58 = 0x7cb38b07c3fd825c;
  local_60 = 0xd6afaaadf6485d56;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = local_58 ^ local_60;
          local_60 = local_60 ^ 0xe158a99e47882692;
          if ((longlong)uVar5 < -0x1ba9db664c5478fc) break;
          if (uVar5 == 0xe4562499b3ab8704) {
            LOCK();
            plVar2 = local_48 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            local_58 = 0x98816f8b8994cea3;
            if ((int)lVar4 == local_4c) {
              local_58 = 0x8962a3b66d12cfdc;
            }
            local_60 = 0x3d4580e1e4c9750d;
          }
          else {
            local_58 = local_58 ^ 0xe158a99e47882692;
            if (uVar5 == 0x9025438f82de8b4) {
              (**(code **)(*local_48 + 8))();
              local_58 = 0xdbc5d08ef9dde6bd;
              local_60 = 0x7e013fe494805d13;
            }
          }
        }
        if (uVar5 != 0xaa1c21aa35b5df0a) break;
        local_4c = 1;
        local_48 = *(longlong **)(param_1 + 8);
        local_58 = 0x170084a4935936ea;
        if (local_48 == (longlong *)0x0) {
          local_58 = 0x56924f574daf0a40;
        }
        local_60 = 0xf356a03d20f2b1ee;
      }
      if (uVar5 != 0xb427235789dbbad1) break;
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_58 = 0xab352bf150ff5adb;
      if (iVar3 == local_4c) {
        local_58 = 0x7f390a3c58f09c1;
      }
      local_60 = 0xef1c49b3da2e175;
    }
    local_58 = local_58 ^ 0xe158a99e47882692;
  } while (uVar5 != 0xa5c4ef6a6d5dbbae);
  return;
}



void FUN_18006b8b0(longlong *param_1)

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

  local_90 = 0xd51169c44262b439;
  local_98 = 0xfffeba29340a19bb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_90 ^ 0xd8eb4ac00ca3c84b;
          uVar1 = local_90 ^ local_98;
          local_98 = local_98 ^ 0xd8eb4ac00ca3c84b;
          local_90 = uVar2;
          if ((longlong)uVar1 < 0x3bf5f221a3e1b952) break;
          if (uVar1 == 0x3bf5f221a3e1b952) {
            thunk_FUN_1801f42e0(local_70,local_78);
            local_90 = 0x6f2538051e9138bc;
            local_98 = 0x237549721568349e;
          }
          else if (uVar1 == 0x7d9a1930cadb444b) {
            local_78 = local_48 + 0x29;
            local_90 = 0x75f6048881c6346;
            local_98 = 0x3caa92692bfdda14;
            local_70 = local_58;
          }
          else if (uVar1 == 0x4c5071770bf90c22) {
            param_1[2] = local_80;
            *local_68 = local_88;
            *(undefined2 *)param_1 = 0;
            return;
          }
        }
        if (0xe0fba0e4db28274 < (longlong)uVar1) break;
        if (uVar1 == 0x9786fed7c98dca76) {
          local_70 = *param_1;
          local_48 = local_60 * 2;
          local_78 = local_48 + 2;
          local_90 = 0xb7c19e6814d1c817;
          if (local_78 < 0x1000) {
            local_90 = 0x8539c84528f948fe;
          }
          local_98 = 0xbecc3a648b18f1ac;
          local_50 = local_70;
        }
        else if (uVar1 == 0x90da40c9fc939bb) {
          local_58 = *(longlong *)(local_50 + -8);
          local_90 = 0x8c9c4bcce068b921;
          if (0x1f < (local_50 - local_58) - 8U) {
            local_90 = 0xff09e8f267017f1f;
          }
          local_98 = 0xf10652fc2ab3fd6a;
        }
      }
      if (uVar1 != 0x2aefd3ed7668ad82) break;
      local_80 = 0;
      local_88 = 7;
      FUN_1801d9424(param_1[4]);
      local_68 = param_1 + 3;
      local_60 = param_1[3];
      local_90 = 0xc6b869d261c708fb;
      if (local_60 < 8) {
        local_90 = 0x1d6ee672a3b3ceaf;
      }
      local_98 = 0x513e9705a84ac28d;
    }
  } while (uVar1 != 0xe0fba0e4db28275);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_80);
}



ulonglong FUN_18006bc20(ulonglong *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined *local_d0;
  undefined8 local_c8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 ******local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  longlong local_70;
  undefined8 local_68;
  uint local_5c;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;

  local_48 = 0xfffffffffffffffe;
  local_b0 = 0x29;
  local_a8 = 0x7ffffffffffffffe;
  local_a0 = 0;
  local_68 = 1;
  local_50 = 2;
  local_4c = 0;
  local_5c = 0x12;
  local_70 = 2;
  local_58 = 7;
  puVar11 = param_1;
  if (7 < param_1[3]) {
    puVar11 = (ulonglong *)*param_1;
  }
  uVar5 = FUN_1801e15b0(puVar11);
  if (uVar5 == local_a0) {
    return (ulonglong)local_50;
  }
  if (uVar5 != param_1[2]) {
    return (ulonglong)local_50;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (undefined8 ******)0x0;
  uStack_90 = 0;
  if (local_a8 < uVar5) {
    FUN_180002ac0();
  }
  if (uVar5 < 8) {
    uStack_80 = local_58;
    local_98 = (undefined8 ******)*puVar11;
    uStack_90 = puVar11[1];
    local_88 = uVar5;
  }
  else {
    uVar8 = local_58 | uVar5;
    if (local_a8 < uVar8) {
LAB_18006c02a:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    uVar10 = 10;
    if (10 < uVar8) {
      uVar10 = uVar8;
    }
    lVar9 = uVar10 << ((byte)local_68 & 0x3f);
    if (uVar8 < 0x7ff) {
      local_98 = (undefined8 ******)FUN_1801d61c8(lVar9 + local_70);
    }
    else {
      if (0x7fffffffffffffeb < uVar8) goto LAB_18006c02a;
      ppppppuVar6 = (undefined8 ******)FUN_1801d61c8(lVar9 + local_b0);
      local_98 = (undefined8 ******)((longlong)ppppppuVar6 + 0x27U & 0xffffffffffffffe0);
      local_98[-1] = ppppppuVar6;
    }
    local_88 = uVar5;
    uStack_80 = uVar10;
    FUN_1802079d0(local_98,puVar11,(uVar5 << ((byte)local_68 & 0x3f)) + local_70);
  }
  FUN_1800b9206(&DAT_1802a1ff4,&DAT_180271b24,0xc,2,&DAT_1802a1ff8);
  local_d0 = &DAT_1802a1ff4;
  local_c8 = local_68;
  FUN_18006c090(param_1,&local_d0);
  if (local_58 < param_1[3]) {
    param_1 = (ulonglong *)*param_1;
  }
  uVar5 = FUN_1801d9444(param_1,param_3,param_4);
  iVar3 = (int)uVar5;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      uVar2 = *param_3;
      do {
        uVar5 = (ulonglong)local_4c;
        if (*(short *)(param_4 + 0x2c) != 0x2e) break;
        sVar1 = *(short *)(param_4 + 0x2e);
        if (sVar1 < 0x2e) {
          if (sVar1 != 0) goto LAB_18006c014;
        }
        else {
          if (sVar1 != 0x2e) {
LAB_18006c014:
            uVar5 = 0;
            if (uStack_80 <= local_58) {
              return 0;
            }
            goto LAB_18006bf8d;
          }
          uVar5 = (ulonglong)local_4c;
          if (*(short *)(param_4 + 0x30) != 0) break;
        }
        uVar5 = FUN_1801d9404(uVar2,param_4);
      } while ((uint)uVar5 == local_4c);
    }
  }
  else if (iVar3 < 5) {
    if (iVar3 == 2) {
      pppppppuVar7 = (undefined8 *******)local_98;
      if (uStack_80 <= local_58) {
        pppppppuVar7 = &local_98;
      }
      uVar4 = FUN_1801d94bc(pppppppuVar7,&local_d0,3,0xffffffff);
      uVar5 = (ulonglong)local_5c;
      if (uVar4 != local_4c) {
        uVar5 = (ulonglong)local_50;
      }
    }
  }
  else if ((iVar3 == 5) && (uVar5 = 5, (param_2 & local_50) != local_4c)) {
    uVar5 = (ulonglong)local_5c;
    if (uStack_80 <= local_58) {
      return uVar5;
    }
    goto LAB_18006bf8d;
  }
  if (uStack_80 <= local_58) {
    return uVar5;
  }
LAB_18006bf8d:
  lVar9 = uStack_80 << ((byte)local_68 & 0x3f);
  uVar8 = local_70 + lVar9;
  pppppppuVar7 = (undefined8 *******)local_98;
  if (0xfff < uVar8) {
    if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)local_98[-1]))) {
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_4c,local_a0);
    }
    uVar8 = lVar9 + local_b0;
    pppppppuVar7 = (undefined8 *******)local_98[-1];
  }
  thunk_FUN_1801f42e0(pppppppuVar7,uVar8);
  return uVar5 & 0xffffffff;
}



void Unwind_18006c050(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x60);
  return;
}



undefined8 FUN_18006c090(undefined8 param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 ***local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;

  local_38 = 0xfffffffffffffffe;
  local_60 = 0x29;
  local_58 = 0x7ffffffffffffffe;
  local_48 = 1;
  local_50 = 2;
  local_40 = 7;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  local_88 = (undefined8 ****)0x0;
  uStack_80 = 0;
  if (0x7ffffffffffffffe < uVar4) {
    FUN_180002ac0();
  }
  uVar7 = 7;
  if (uVar4 < 8) {
    ppppuVar5 = &local_88;
  }
  else {
    uVar3 = uVar4 | 7;
    if (0x7ffffffffffffffe < uVar3) {
LAB_18006c2cf:
      std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
    }
    uVar7 = 10;
    if (10 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar3 < 0x7ff) {
      ppppuVar5 = (undefined8 ****)FUN_1801d61c8(uVar7 * 2 + 2);
      local_88 = ppppuVar5;
    }
    else {
      if (0x7fffffffffffffeb < uVar3) goto LAB_18006c2cf;
      pppuVar1 = (undefined8 ***)FUN_1801d61c8(uVar7 * 2 + 0x29);
      ppppuVar5 = (undefined8 ****)((longlong)pppuVar1 + 0x27U & 0xffffffffffffffe0);
      ppppuVar5[-1] = pppuVar1;
      local_88 = ppppuVar5;
    }
  }
  local_78 = uVar4;
  local_70 = uVar7;
  FUN_1802079d0(ppppuVar5,uVar2,uVar4 << ((byte)local_48 & 0x3f));
  *(undefined2 *)((longlong)ppppuVar5 + uVar4 * 2) = 0;
  uVar2 = FUN_18005b6e0(param_1,&local_88);
  if (local_40 < local_70) {
    lVar6 = local_70 << ((byte)local_48 & 0x3f);
    uVar4 = local_50 + lVar6;
    ppppuVar5 = (undefined8 ****)local_88;
    if (0xfff < uVar4) {
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)local_88[-1]))) {
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = lVar6 + local_60;
      ppppuVar5 = (undefined8 ****)local_88[-1];
    }
    thunk_FUN_1801f42e0(ppppuVar5,uVar4);
  }
  return uVar2;
}



void Unwind_18006c310(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x30);
  return;
}



void FUN_18006c340(longlong param_1)

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

  local_98 = 0x9c69ab316efa67c5;
  local_a0 = 0xf51a8f63e01048c9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ 0x5f4eeea15e87b9e9;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0x5f4eeea15e87b9e9;
          local_98 = uVar2;
          if (-0xd9b502447a6598b < (longlong)uVar1) break;
          if (uVar1 == 0x898d7a98879381df) {
            thunk_FUN_1801f42e0(local_70,local_78);
            local_98 = 0x6e699b730240d722;
            local_a0 = 0xa4f3735e6b0a934a;
          }
          else if (uVar1 == 0xf2583ec6e4bc767e) {
            local_70 = *local_80;
            local_48 = local_60 * 2;
            local_78 = local_48 + 2;
            local_98 = 0x346df073a40594e2;
            if (local_78 < 0x1000) {
              local_98 = 0xe41f9b331088d831;
            }
            local_a0 = 0x6d92e1ab971b59ee;
            local_50 = local_70;
          }
          else if (uVar1 == 0xca9ae82d694a4468) {
            *(uintptr_t *)(param_1 + 0x40) = local_88;
            *local_68 = local_90;
            *(undefined2 *)local_80 = 0;
            return;
          }
        }
        if ((longlong)uVar1 < 0x59ff11d8331ecd0c) break;
        if (uVar1 == 0x59ff11d8331ecd0c) {
          local_58 = *(longlong *)(local_50 + -8);
          local_98 = 0xb981dce50087d5bf;
          if (0x1f < (local_50 - local_58) - 8U) {
            local_98 = 0x1dcd22c662fa475b;
          }
          local_a0 = 0x4be5733eb8de73c9;
        }
        else if (uVar1 == 0x697324528eea2f0c) {
          local_88 = 0;
          local_90 = 7;
          FUN_1801d9424(*(undefined8 *)(param_1 + 0x50));
          local_80 = (longlong *)(param_1 + 0x30);
          local_68 = (undefined8 *)(param_1 + 0x48);
          local_60 = *(ulonglong *)(param_1 + 0x48);
          local_98 = 0xd4f56bc204834760;
          if (local_60 < 8) {
            local_98 = 0xec37bd2989757576;
          }
          local_a0 = 0x26ad5504e03f311e;
        }
      }
      if (uVar1 != 0xf264afdbb859a676) break;
      local_78 = local_48 + 0x29;
      local_70 = local_58;
      local_98 = 0x4f61a23d4f76e825;
      local_a0 = 0xc6ecd8a5c8e569fa;
    }
  } while (uVar1 != 0x562851f8da243492);
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_88);
}



undefined8 * FUN_18006c6f0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;

  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  lVar7 = param_2[4];
  plVar1 = param_1 + 4;
  param_2[4] = -1;
  param_1[8] = lVar7;
  if (plVar1 != param_2) {
    if (7 < (ulonglong)param_1[7]) {
      lVar7 = *plVar1;
      lVar9 = param_1[7] * 2;
      uVar8 = lVar9 + 2;
      if (0xfff < uVar8) {
        if (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar8 = lVar9 + 0x29;
        lVar7 = *(longlong *)(lVar7 + -8);
      }
      thunk_FUN_1801f42e0(lVar7,uVar8);
    }
    param_1[6] = 0;
    param_1[7] = 7;
    *(undefined2 *)(param_1 + 4) = 0;
    lVar7 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar9 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = param_2[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 6) = (int)param_2[2];
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
    *(int *)(param_1 + 7) = (int)lVar6;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
    *(int *)plVar1 = (int)lVar7;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
    *(int *)(param_1 + 5) = (int)lVar9;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  FUN_18006c8f0(param_1,param_2 + 5);
  return param_1;
}



void Unwind_18006c8c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;

  lVar1 = *(longlong *)(param_2 + 0x30);
  FUN_1801d9424(*(undefined8 *)(lVar1 + 0x40));
  FUN_18006ccd0(lVar1);
  return;
}



void FUN_18006c8f0(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  uint local_54;
  ulonglong local_50;
  undefined2 local_42;
  undefined8 local_40;

  local_40 = 0xfffffffffffffffe;
  local_80 = 0x29;
  local_78 = 0x7ffffffffffffffe;
  local_70 = 0x20;
  local_60 = 1;
  local_54 = 0;
  local_42 = 0;
  local_68 = 2;
  local_50 = 7;
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 & 0x400) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  uVar3 = FUN_1801e15b0(param_2 + 0xb);
  local_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  if (local_78 < uVar3) {
    FUN_180002ac0();
  }
  if (uVar3 < 8) {
    ppppuVar12 = &local_a8;
    uVar11 = local_50;
  }
  else {
    uVar7 = local_50 | uVar3;
    if (local_78 < uVar7) goto LAB_18006cc38;
    uVar11 = 10;
    if (10 < uVar7) {
      uVar11 = uVar7;
    }
    lVar10 = uVar11 << ((byte)local_60 & 0x3f);
    if (uVar7 < 0x7ff) {
      ppppuVar12 = (undefined8 ****)FUN_1801d61c8(lVar10 + local_68);
      local_a8 = ppppuVar12;
    }
    else {
      if (0x7fffffffffffffeb < uVar7) goto LAB_18006cc38;
      pppuVar4 = (undefined8 ***)FUN_1801d61c8(lVar10 + local_80);
      ppppuVar12 = (undefined8 ****)((longlong)pppuVar4 + 0x27U & 0xffffffffffffffe0);
      ppppuVar12[-1] = pppuVar4;
      local_a8 = ppppuVar12;
    }
  }
  puVar1 = param_1 + 4;
  local_98 = uVar3;
  local_90 = uVar11;
  FUN_1802079d0(ppppuVar12,param_2 + 0xb,uVar3 << ((byte)local_60 & 0x3f));
  *(undefined2 *)((longlong)ppppuVar12 + uVar3 * 2) = local_42;
  puVar9 = puVar1;
  if (local_50 < (ulonglong)param_1[7]) {
    puVar9 = (undefined8 *)param_1[4];
  }
  lVar10 = (longlong)puVar9 + param_1[6] * 2;
  lVar5 = FUN_180068d00(puVar9,lVar10);
  do {
    while( true ) {
      lVar8 = lVar5;
      if (lVar10 == lVar5) goto LAB_18006cb73;
      sVar2 = *(short *)(lVar10 + -2);
      lVar8 = lVar10;
      if (0x5b < sVar2) break;
      lVar10 = lVar10 + -2;
      if (sVar2 == 0x2f) goto LAB_18006cb73;
    }
    lVar10 = lVar10 + -2;
  } while (sVar2 != 0x5c);
LAB_18006cb73:
  uVar3 = lVar8 - (longlong)puVar9 >> ((byte)local_60 & 0x3f);
  if (uVar3 <= (ulonglong)param_1[6]) {
    param_1[6] = uVar3;
    puVar6 = puVar1;
    if (local_50 < (ulonglong)param_1[7]) {
      puVar6 = (undefined8 *)param_1[4];
    }
    *(undefined2 *)((longlong)puVar6 + (lVar8 - (longlong)puVar9)) = local_42;
    FUN_18005b6e0(puVar1,&local_a8);
    if (local_50 < local_90) {
      lVar10 = local_90 << ((byte)local_60 & 0x3f);
      uVar3 = local_68 + lVar10;
      ppppuVar12 = (undefined8 ****)local_a8;
      if (0xfff < uVar3) {
        ppppuVar12 = (undefined8 ****)local_a8[-1];
        if (local_70 <= (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar12))) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,local_54,0);
        }
        uVar3 = lVar10 + local_80;
      }
      thunk_FUN_1801f42e0(ppppuVar12,uVar3);
    }
    return;
  }
  FUN_1800615a0();
LAB_18006cc38:
  std::bad_array_new_length::bad_array_new_length_Constructor_or_Destructor();
}



void Unwind_18006cc70(void)

{
  Unwind_1801dd394();
}



void Unwind_18006cc90(undefined8 param_1,longlong param_2)

{
  FUN_18004fbf0(param_2 + 0x30);
  return;
}



void FUN_18006ccd0(longlong param_1)

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

  local_98 = 0xc87e6d6359a9f71d;
  local_a0 = 0x103fde1e20424197;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = local_98 ^ 0xb10a1484b3037e51;
          uVar1 = local_98 ^ local_a0;
          local_a0 = local_a0 ^ 0xb10a1484b3037e51;
          local_98 = uVar2;
          if (-0xcfe67a5e7430b37 < (longlong)uVar1) break;
          if (uVar1 == 0xd05f43d13f253cb6) {
            local_70 = *local_80;
            local_48 = local_60 * 2;
            local_78 = local_48 + 2;
            local_98 = 0x931b4d4a4e55fe64;
            if (local_78 < 0x1000) {
              local_98 = 0x63764ad70eb77e8c;
            }
            local_a0 = 0xbdf689164f288b58;
            local_50 = local_70;
          }
          else if (uVar1 == 0xd841b37d79ebb68a) {
            local_88 = 0;
            local_90 = 7;
            local_80 = (longlong *)(param_1 + 0x20);
            local_68 = (undefined8 *)(param_1 + 0x38);
            local_60 = *(ulonglong *)(param_1 + 0x38);
            local_98 = 0x43b5853863cd718c;
            if (local_60 < 8) {
              local_98 = 0x60eb5eb34454b9f0;
            }
            local_a0 = 0x93eac6e95ce84d3a;
          }
          else if (uVar1 == 0xde80c3c1419ff5d4) {
            thunk_FUN_1801f42e0(local_70,local_78);
            local_98 = 0xfad8ea8114197ba1;
            local_a0 = 0x9d972db0ca58f6b;
          }
        }
        if ((longlong)uVar1 < 0x408988d5aaa5424a) break;
        if (uVar1 == 0x7c49e384e06b0df3) {
          local_78 = local_48 + 0x29;
          local_98 = 0x7ea63d83c64962cd;
          local_a0 = 0xa026fe4287d69719;
          local_70 = local_58;
        }
        else if (uVar1 == 0x408988d5aaa5424a) {
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_88);
        }
      }
      if (uVar1 != 0x2eedc45c017d753c) break;
      local_58 = *(longlong *)(local_50 + -8);
      local_98 = 0xf5fa5c8a0987e447;
      if (0x1f < (local_50 - local_58) - 8U) {
        local_98 = 0xc93a37db4349abfe;
      }
      local_a0 = 0x89b3bf0ee9ece9b4;
    }
  } while (uVar1 != 0xf301985a18bcf4ca);
  *(uintptr_t *)(param_1 + 0x30) = local_88;
  *local_68 = local_90;
  *(undefined2 *)local_80 = 0;
  return;
}



undefined8 FUN_18006d040(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 local_50;
  undefined8 local_48;

  local_48 = 0x43719d2049019991;
  local_50 = 0xac5e1ca03684e4b3;
  do {
    while( true ) {
      while( true ) {
        uVar1 = local_48 ^ local_50;
        local_50 = local_50 ^ 0x90f24db4479e63b4;
        if (uVar1 != 0xef2f81807f857d22) break;
        local_48 = 0x5301f746026810f0;
        if ((param_2 & 1) == 0) {
          local_48 = 0x49e7a2ff492da02e;
        }
        local_50 = 0x2a801b766ff0d6c;
      }
      if (uVar1 != 0x51a9f6f164971d9c) break;
      thunk_FUN_1801f42e0(param_1,0x58);
      local_48 = 0x1cebb52e5c3b58b1;
      local_50 = 0x57a4166673e9f5f3;
    }
    local_48 = local_48 ^ 0x90f24db4479e63b4;
  } while (uVar1 != 0x4b4fa3482fd2ad42);
  return param_1;
}



uint * FUN_18006d190(longlong param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  ulonglong local_d0;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint *local_88;
  uint local_7c;
  uint *local_78;
  uint *local_70;
  undefined1 local_68 [16];
  uint local_58;
  int local_54;
  ulonglong local_48;

  local_48 = DAT_1802a0400 ^ (ulonglong)auStack_f8;
  local_d0 = 0xe9fd455983be3200;
  local_d8 = 0xd76d286c5dc5afab;
  local_70 = param_2;
LAB_18006d260:
  while( true ) {
    uVar4 = local_d0 ^ 0x1190fad9fc56909f;
    uVar2 = local_d0 ^ local_d8;
    local_d8 = local_d8 ^ 0x1190fad9fc56909f;
    local_d0 = uVar4;
    if (0x22ef5692f1a878a0 < (longlong)uVar2) break;
    if ((longlong)uVar2 < -0x4792f798f3663efb) {
      if ((longlong)uVar2 < -0x5a281ca7628b2e34) {
        if ((longlong)uVar2 < -0x702ec1c9ef131a95) {
          if (uVar2 == 0x8ecb83378763688c) {
            local_b4 = *(int *)(param_1 + 0x14);
            local_d0 = 0x942c40e36d2aef0c;
            local_d8 = 0x5071a34ee0ed99a0;
          }
          else if (uVar2 == 0x8c5d18e7babf28cf) {
            *param_2 = local_c4;
            if (DAT_1802a0400 != (local_48 ^ (ulonglong)auStack_f8)) {
            }
            return param_2;
          }
        }
        else if (uVar2 == 0x8fd13e3610ece56b) {
          local_c4 = local_b8;
          if ((local_90 & local_a4) != local_c0) {
            local_c4 = local_a0;
          }
          local_d0 = 0xde11df137de63200;
          local_d8 = 0x524cc7f4c7591acf;
        }
        else if (uVar2 == 0xa4fb1ac476c89040) {
          *local_88 = 0xffff;
          local_d0 = 0x5ecc8e97cffa79ee;
          local_d8 = 0x37b5310eb27ba04d;
        }
      }
      else if ((longlong)uVar2 < -0x56fcfd39aa629b41) {
        if (uVar2 == 0xa5d7e3589d74d1cc) {
          local_d0 = 0xb725e5d0902e13b0;
          local_d8 = 0x3b78fd372a913b7f;
          local_c4 = local_a8;
        }
        else if (uVar2 == 0xa5f893956f2a86b5) {
          local_d0 = 0x3580f415862e46d7;
          if (0x10a < (int)local_bc) {
            local_d0 = 0xf621b87b41b8a559;
          }
          local_d8 = 0x5f22babd1425c1e6;
        }
      }
      else {
        if (uVar2 == 0xa90302c6559d64bf) {
          local_d0 = 0x362ccb1bda7ecc9f;
          if (local_bc != 0x10b) {
            local_d0 = 0xf2cd7767a7ed7d20;
          }
          local_d8 = 0xba71d3fc60c1e450;
          goto LAB_18006d249;
        }
        if (uVar2 == 0xad68a135189d0a24) {
          local_c4 = local_b8;
          if ((local_8c & local_a4) != local_c0) {
            local_c4 = local_a0;
          }
          local_d0 = 0xa7fac2ed327f4385;
          local_d8 = 0x2ba7da0a88c06b4a;
        }
      }
    }
    else if ((longlong)uVar2 < -0x24d20ada894030c) {
      if ((longlong)uVar2 < -0x3518e3b3527af2ed) {
        if (uVar2 == 0xb86d08670c99c105) {
          local_d0 = 0x38ecdcd0c329b3e8;
          if (local_b0 != -0x5ffffffd) {
            local_d0 = 0xe7b1551065ea37bd;
          }
          local_d8 = 0x1a038a423281cb49;
        }
        else if (uVar2 == 0xc45de3ad8dc776ac) {
          local_d0 = 0xde1c873b4ba5fdbe;
          if (-0x5ffffff5 < local_b4) {
            local_d0 = 0xdfa962d561aaa368;
          }
          local_d8 = 0xa41bd7f82128a31a;
        }
      }
      else if (uVar2 == 0xcae71c4cad850d13) {
        local_8c = local_58;
        uVar1 = local_ac;
        if ((local_58 & local_98) != local_c0) {
          uVar1 = local_9c;
        }
        *local_88 = uVar1;
        local_d0 = 0xb5abe34f51816842;
        if ((local_58 & local_94) != local_c0) {
          local_d0 = 0x24c18c6bad656b66;
        }
        local_d8 = 0x18c3427a491c6266;
      }
      else if (uVar2 == 0xf573e1976f9cb5b2) {
        local_d0 = 0x6033064108eda4b3;
        if (local_b0 != -0x5ffffff4) {
          local_d0 = 0x11dcc1f4e5397088;
        }
        local_d8 = 0xec6e1ea6b2528c7c;
LAB_18006dbb5:
        local_c4 = 4;
      }
    }
    else if ((longlong)uVar2 < 0x15e78ccf484cfdee) {
      if (uVar2 == 0xfdb2df52576bfcf4) {
        local_d0 = 0x9f13c5a43480e962;
        local_d8 = 0x327b64912c1de346;
      }
      else if (uVar2 == 0xb9da95ee339e2fe) {
        local_d0 = 0x54d27e30ac6ee55;
        if (-0x5ffffff5 < local_b0) {
          local_d0 = 0x4853ce1369c39ae2;
        }
        local_d8 = 0xbd202f84065f2f50;
      }
    }
    else if (uVar2 == 0x15e78ccf484cfdee) {
      uVar1 = 0xffffffff;
      if ((local_7c & local_b8) != local_c0) {
        uVar1 = *local_78;
      }
      if (*(ulonglong *)(param_1 + 0x38) < 8) {
        lVar3 = param_1 + 0x20;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x20);
      }
      local_bc = FUN_1801d94bc(lVar3,local_68,param_3,uVar1);
      local_70[2] = local_bc;
      local_d0 = 0xae3e512b8239fb38;
      if (local_bc != local_c0) {
        local_d0 = 0xc02257a35974666b;
      }
      local_d8 = 0x64d94d672fbcf62b;
      param_3 = param_3 & 0xffffffff;
      param_2 = local_70;
    }
    else if (uVar2 == 0x1da6b1278117639b) {
      local_d0 = 0x3f83f92112dde80a;
      local_d8 = 0xb052c71702310d61;
    }
  }
  if ((longlong)uVar2 < 0x48781e1600bfa627) {
    if ((longlong)uVar2 < 0x35ac3fd38d78a2ef) {
      if (uVar2 == 0x22ef5692f1a878a1) {
        local_d0 = 0xbe2419f41c2aaf9f;
        local_d8 = 0x32790113a6958750;
        local_c4 = local_a8;
      }
      else if (uVar2 == 0x24bc2983e9315006) {
        param_2[2] = local_c0;
        local_90 = *local_78;
        uVar1 = local_ac;
        if ((local_90 & local_98) != local_c0) {
          uVar1 = local_9c;
        }
        *local_88 = uVar1;
        local_d0 = 0x59a27a1b55ff8ca;
        if ((local_90 & local_94) != local_c0) {
          local_d0 = 0x4809aa022d0752d;
        }
        local_d8 = 0x8a4b1997a5b31da1;
      }
      else if (uVar2 == 0x2d136ba45cbb8baf) {
        local_d0 = 0xa45376f461fa6241;
        if (0x34 < (int)local_bc) {
          local_d0 = 0xb3454fc98550b01a;
        }
        local_d8 = 0xec2b68e26145c466;
      }
    }
    else if ((longlong)uVar2 < 0x3e906d35de7b9dab) {
      if (uVar2 == 0x35ac3fd38d78a2ef) {
        local_d0 = 0x9017970246fde585;
        if (0x7a < (int)local_bc) {
          local_d0 = 0x4e2bf67c958ac545;
        }
        local_d8 = 0xebd365e9faa043f0;
      }
      else if (uVar2 == 0x3c02ce11e4790900) {
        local_b0 = local_54;
        local_d0 = 0xd7ff07425622eb90;
        local_d8 = 0xdc62ae1cb51b096e;
      }
    }
    else if (uVar2 == 0x3e906d35de7b9dab) {
      local_94 = 0x400;
      local_98 = 1;
      local_9c = 0x16d;
      local_b8 = 2;
      local_a0 = 3;
      local_c0 = 0;
      local_a4 = 0x10;
      local_a8 = 10;
      local_ac = 0x1ff;
      local_88 = param_2 + 1;
      local_7c = *(uint *)(param_1 + 0x1c);
      local_78 = (uint *)(param_1 + 0x10);
      local_d0 = 0xeb65e1d58119428;
      if (((uint)param_3 & ~local_7c) != 0) {
        local_d0 = 0x3fedfb51f96c39c0;
      }
      local_d8 = 0x2a0a779eb120c42e;
    }
    else if (uVar2 == 0x451aa7827c8161fe) {
      local_d0 = 0x31204d0a15c7b1a4;
      local_d8 = 0xbd7d55edaf78996b;
      local_c4 = local_c0;
    }
    goto LAB_18006d260;
  }
  if ((longlong)uVar2 < 0x6aa24ea8920b8731) {
    if ((longlong)uVar2 < 0x5f6e272be415747c) {
      if (uVar2 != 0x48781e1600bfa627) {
        if (uVar2 == 0x48bca49bc72c9970) {
          local_d0 = 0xa6ec4dfc559d339f;
          local_d8 = 0xe3f6ea7e291c5261;
        }
        goto LAB_18006d260;
      }
      local_d0 = 0xe17b734adf5cb3ea;
      if ((local_bc & 0xfffffffe) != 2) {
        local_d0 = 0x259acf36a2cf0255;
      }
      local_d8 = 0x6d266bad65e39b25;
    }
    else {
      if (uVar2 != 0x5f6e272be415747c) {
        if (uVar2 == 0x6979bf997d81d9a3) {
          local_d0 = 0xb2c33f60e845e01;
          if (0x3f < (int)local_bc) {
            local_d0 = 0x13936781df477741;
          }
          local_d8 = 0x263f5852523fd5ae;
        }
        goto LAB_18006d260;
      }
      local_d0 = 0x948c222729e0808e;
      if (local_bc != 0x35) {
        local_d0 = 0x506d9e5b54733131;
      }
      local_d8 = 0x18d13ac0935fa841;
    }
  }
  else if ((longlong)uVar2 < 0x7bb2b52d40820072) {
    if (uVar2 != 0x6aa24ea8920b8731) {
      if (uVar2 == 0x7a0750c36a8d5ea4) {
        local_d0 = 0xe86f60f10676d5af;
        if (local_b4 != -0x5ffffffd) {
          local_d0 = 0x501e328e1a1567f8;
        }
        local_d8 = 0x4db883a99b020463;
      }
      goto LAB_18006d260;
    }
    local_d0 = 0xf6ac20899f042c78;
    if (local_bc != 0x7b) {
      local_d0 = 0x324d9cf5e2979dc7;
    }
    local_d8 = 0x7af1386e25bb04b7;
  }
  else {
    if (uVar2 == 0x7bb2b52d40820072) {
      local_d0 = 0xb47a3ae549aab394;
      if (local_b4 != -0x5ffffff4) {
        local_d0 = 0x258193257202f8c0;
      }
      local_d8 = 0x38272202f3159b5b;
      goto LAB_18006dbb5;
    }
    if (uVar2 != 0x7bc4f2ebbc5da675) goto LAB_18006d260;
    local_d0 = 0xb845032c90b27c77;
    if (local_bc != 0x40) {
      local_d0 = 0x7ca4bf50ed21cdc8;
    }
    local_d8 = 0x34181bcb2a0d54b8;
  }
LAB_18006d249:
  local_c4 = 1;
  goto LAB_18006d260;
}



uint FUN_18006dd30(ulonglong *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong **ppuVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong local_300;
  ulonglong local_2f8;
  short local_2ee;
  short local_2ec;
  byte local_2ea;
  byte local_2e9;
  ulonglong *local_2e8;
  ulonglong *local_2e0;
  short local_2d2;
  ushort local_2d0;
  short local_2ce;
  uint local_2cc;
  ulonglong *local_2c8;
  ulonglong *local_2c0;
  short local_2b2;
  short local_2b0;
  short local_2ae;
  short local_2ac;
  short local_2aa;
  short local_2a8;
  short local_2a6;
  short local_2a4;
  short local_2a2;
  short local_2a0;
  short local_29e;
  short local_29c;
  short local_29a;
  short local_298;
  ushort local_296;
  ushort local_294;
  short local_292;
  ushort local_290;
  ushort local_28e;
  short local_28c;
  short local_28a;
  uint local_288;
  uint local_284;
  ulonglong *local_280;
  ulonglong *local_278;
  uint local_26c;
  ushort local_266;
  ushort local_264;
  ushort local_262;
  longlong local_260;
  int local_254;
  undefined4 local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  ulonglong local_240;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong *local_208;
  ulonglong *local_200;
  ulonglong *local_1f8;
  ulonglong *local_1f0;
  ulonglong *local_1e8;
  ulonglong *local_1e0;
  ulonglong *local_1d8;
  ulonglong *local_1d0;
  ulonglong *local_1c8;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  ulonglong local_1b0;
  ulonglong *local_1a8;
  ulonglong *local_1a0;
  ulonglong local_198;
  ulonglong *local_190;
  ulonglong *local_188;
  ulonglong local_180;
  ulonglong *local_178;
  ulonglong *local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong *local_158;
  ulonglong *local_150;
  ulonglong *local_148;
  ulonglong *local_140;
  ulonglong *local_138;
  ulonglong local_130;
  ulonglong *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  ulonglong *local_110;
  ulonglong *local_108;
  ulonglong *local_100;
  ulonglong *local_f8;
  ulonglong *local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  ulonglong *local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong *local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  ulonglong local_48;

  local_2f8 = 0x1c2d20965cc3aca5;
  local_300 = 0x76e807cf2328a3fb;
LAB_18006de10:
  uVar6 = local_2f8 ^ 0x6c258b8172bce7c0;
  uVar7 = local_2f8 ^ local_300;
  local_300 = local_300 ^ 0x6c258b8172bce7c0;
  bVar5 = (byte)local_260;
  local_2f8 = uVar6;
  if ((longlong)uVar7 < -0x17e7d9871d90531f) {
    if ((longlong)uVar7 < -0x4059065d100a6140) {
      if (-0x66b44430ce163790 < (longlong)uVar7) {
        if ((longlong)uVar7 < -0x58748cc4e20396d1) {
          if (-0x5fc0cd8dc3542060 < (longlong)uVar7) {
            if ((longlong)uVar7 < -0x5a6e40c765fb9238) {
              if (uVar7 == 0xa03f32723cabdfa1) {
                local_48 = local_130;
                local_264 = *(ushort *)((longlong)local_2e8 + local_130 * 2);
                local_262 = *(ushort *)((longlong)local_2e0 + local_130 * 2);
                local_2f8 = 0xe7c7f0c792d8b114;
                if (local_264 == local_262) {
                  local_2f8 = 0xb9549e7ef3dff9d7;
                }
                local_300 = 0xbf42e6b7506bf03d;
              }
              else if (uVar7 == 0xa126f37cb236bb0e) {
                local_2f8 = 0x5329710b3da2346d;
                if ((short)local_2d0 < 0x5c) {
                  local_2f8 = 0xc70d6ef76b7c9c21;
                }
                local_300 = 0x24a1da55a0ce5c1;
              }
            }
            else if (uVar7 == 0xa591bf389a046dc8) {
              local_2f8 = 0xda618a9351a57c85;
              if (local_298 == 0x2f) {
                local_2f8 = 0x776d55fa393024b4;
              }
              local_300 = 0xa2f9cec1e5adfae7;
            }
            else {
              if (uVar7 == 0xa5c8f4dae2eade3e) {
                local_2f8 = 0xb3220d51fe670f43;
                if (local_29a == 0x2f) {
                  local_2f8 = 0x198ea87ef91eb91b;
                }
                local_300 = 0x65edc7c10a0291cc;
                goto LAB_18006ddfe;
              }
              if (uVar7 == 0xa711fa8b87705bdf) {
                local_2f8 = 0x2a496e3d9f99f8ae;
                if (local_2ae < 0x5c) {
                  local_2f8 = 0x787f7b0506329d57;
                }
                local_300 = 0xfc78a90c5234a7dc;
              }
            }
            goto LAB_18006de10;
          }
          if (-0x64c4f7686966b45f < (longlong)uVar7) {
            if (uVar7 == 0x9b3b089796994ba2) {
              local_2f8 = 0x1bead03c73f2afe5;
              if (local_2ec == 0x5c) {
                local_2f8 = 0x264e3c0bc72aa141;
              }
              local_300 = 0xf8ce00214c8f040d;
            }
            else if (uVar7 == 0x9b69456c25a52926) {
              local_2f8 = 0xa224dd4e9942ecc4;
              local_300 = 0x90b4f08903733e28;
            }
            else if (uVar7 == 0x9ccc0e2d7c535565) {
              local_2f8 = 0x88239bf675f7943b;
              if (local_228 == local_240) {
                local_2f8 = 0x5d2b6673784aa51d;
              }
              local_300 = 0x839d062d4da887da;
              goto LAB_180070a01;
            }
            goto LAB_18006de10;
          }
          if (uVar7 == 0x994bbbcf31e9c871) {
            local_2ce = *(short *)((longlong)local_2e0 + 4);
            local_2f8 = 0xef7d845389f2ad69;
            local_300 = 0xb29b50959aecff7;
            goto LAB_18006de10;
          }
          if (uVar7 != 0x9aacf332c76cecd1) goto LAB_18006de10;
          local_110 = local_170;
          local_108 = local_178;
          local_2d0 = (ushort)*local_178;
          local_266 = (ushort)*local_170;
          local_2cc = (uint)(local_266 == local_290 || local_266 == local_294) -
                      (uint)(local_2d0 == local_290 || local_2d0 == local_294);
          local_2f8 = 0x7adef7d8c35b9aee;
          if (local_2cc == local_26c) {
            local_2f8 = 0xcea63a337f060899;
          }
          local_300 = 0x45a9ff0aaba9ec1f;
        }
        else {
          if ((longlong)uVar7 < -0x4fce8c9d39fb2fa2) {
            if ((longlong)uVar7 < -0x548e3c2b757f3c65) {
              if (uVar7 == 0xa78b733b1dfc692f) {
                local_2f8 = 0x6fbbcf272d209011;
                if (local_29a < 0x5c) {
                  local_2f8 = 0x893bdeb60bf55dd5;
                }
                local_300 = 0x2cf32a6ce91f83eb;
              }
              else if (uVar7 == 0xa81d9c3ce03ca943) {
                local_2f8 = 0xed996205e3055a6f;
                if (local_2ee == 0x5c) {
                  local_2f8 = 0x3356fde91cd80f1a;
                }
                local_300 = 0xaa1d46262d31c76b;
              }
            }
            else if (uVar7 == 0xab71c3d48a80c39b) {
              local_2f8 = 0xac800617ae550370;
              if (local_2b2 == 0x5c) {
                local_2f8 = 0xcb90c66642ae6d84;
              }
              local_300 = 0xb7879fadc7f015b5;
            }
            else if (uVar7 == 0xaeaf62cad79101ca) {
              local_2a2 = (short)local_2e0[1];
              local_2f8 = 0x478b920c8e8efd51;
              local_300 = 0xf4caeb803c9558cd;
            }
            else if (uVar7 == 0xaf5e9c8fce418ada) {
              local_2f8 = 0xed9d9e9729bf1235;
              local_300 = 0x9c1f6f36d11fdcb1;
              local_150 = local_1e8;
              local_148 = local_50;
            }
            goto LAB_18006de10;
          }
          if ((longlong)uVar7 < -0x4c862a5ad907c2fe) {
            if (uVar7 == 0xb0317362c604d05e) {
              local_2f8 = 0xfc9d7b39f51a669f;
              if (local_2ee == 0x2f) {
                local_2f8 = 0x2252e4d50ac733ea;
              }
              local_300 = 0xbb195f1a3b2efb9b;
            }
            else if (uVar7 == 0xb341798cb21ba59c) {
              local_2f8 = 0x7e8b8c55f996548e;
              if (local_2a2 < 0x5c) {
                local_2f8 = 0x6da68835568c8d9a;
              }
              local_300 = 0xace9e4e5c9d4e801;
            }
            goto LAB_18006de10;
          }
          if (uVar7 == 0xb379d5a526f83d02) {
            local_2f8 = 0x6dfe5f90eee4c3c3;
            local_300 = 0x560eb8d75c02979b;
            local_28c = *(short *)((longlong)local_2e0 + 4);
            goto LAB_18006de10;
          }
          if (uVar7 == 0xb6071a42093fd69b) {
            local_2f8 = 0x10df452f8d11ad42;
            local_300 = 0xc7a09e12b882b195;
            local_1f8 = local_f0;
            goto LAB_18006de10;
          }
          if (uVar7 != 0xbdc67b0330820217) goto LAB_18006de10;
          local_2cc = (uint)local_2e9 - (uint)local_2ea;
          local_2f8 = 0xe6095553066ec61a;
          local_300 = 0xd97e5d816e9cb0eb;
        }
        goto LAB_18006de10;
      }
      if (-0x6f7c001ca1f48a00 < (longlong)uVar7) {
        if ((longlong)uVar7 < -0x6dc93652c82f9fce) {
          if ((longlong)uVar7 < -0x6f05538e55288f12) {
            if (uVar7 == 0x9083ffe35e0b7601) {
              local_2b2 = (short)local_1b8;
              local_2f8 = 0xaf369f03434e7060;
              local_300 = 0x75e8353c07984dba;
            }
            else if (uVar7 == 0x90d5bf6c0eb631ee) {
              local_2f8 = 0x68ecfeb82eb25d09;
              if (local_2a6 < 0x5c) {
                local_2f8 = 0x1d4fceb5bf3dea4b;
              }
              local_300 = 0x8f21c9dd25624497;
            }
          }
          else if (uVar7 == 0x90faac71aad770ee) {
            local_78 = local_198;
            local_188 = local_1a0 + 2;
            local_190 = local_1a8 + 2;
            local_b0 = local_210 + local_198;
            local_2f8 = 0xa4eac4b456524800;
            if (local_218 < local_b0) {
              local_2f8 = 0xbb97206655b80911;
            }
            local_300 = 0xf536bbed2d618978;
            local_180 = local_198;
            local_c0 = local_188;
            local_b8 = local_190;
          }
          else if (uVar7 == 0x91c08f596a34cc8c) {
            local_e8 = local_1e0;
            local_1f8 = local_278;
            local_128 = local_e0;
            local_2f8 = 0xd4718eb6eb294180;
            if (local_e0 == local_278) {
              local_2f8 = 0x4321f59f42ac5fb1;
            }
            local_300 = 0x945e2ea2773f4366;
          }
          else if (uVar7 == 0x9216f70866b2ab3b) {
            local_2f8 = 0xa2f8c4a10cc2f69a;
            if (local_2a0 < 0x5c) {
              local_2f8 = 0xa14ebab78a6df37d;
            }
            local_300 = 0xaf05c8166a39681d;
          }
        }
        else if ((longlong)uVar7 < -0x6ca5d62d853fffde) {
          if (uVar7 == 0x9236c9ad37d06032) {
            local_2f8 = 0x116246c765a273f2;
            if (local_80 == local_88) {
              local_2f8 = 0x3d28d836bfc90d7b;
            }
            local_300 = 0x2e154e150d500503;
            local_2cc = (int)(char)((local_80 >= local_88 && local_80 != local_88) - (local_80 < local_88));
          }
          else if (uVar7 == 0x926e07689a5faedc) {
            local_2f8 = 0xe6e9beddf5f46628;
            if (local_2a6 == 0x2f) {
              local_2f8 = 0xfcc2948f71297cf4;
            }
            local_300 = 0xf77c095449766f15;
          }
        }
        else if (uVar7 == 0x935a29d27ac00022) {
          local_2f8 = 0xbf24762aafe4b427;
          if (local_29c == 0x2f) {
            local_2f8 = 0x225e577a4ee35482;
          }
          local_300 = 0x5e3d38c5bdff7c55;
LAB_180070c6a:
          local_2c0 = local_1c8;
        }
        else if (uVar7 == 0x94dc0c7bbe9a46fb) {
          local_2f8 = 0x7b063b73205d9a62;
          local_300 = 0xaacfdb19b798b84c;
        }
        else if (uVar7 == 0x96fb68a80e798a2f) {
          local_29a = *(short *)((longlong)local_2e0 + 4);
          local_2f8 = 0xe4d337e445d5cf76;
          local_300 = 0x435844df5829a659;
        }
        goto LAB_18006de10;
      }
      if (-0x74f03ac62b501b7b < (longlong)uVar7) {
        if ((longlong)uVar7 < -0x72c08ee53a431ad9) {
          if (uVar7 == 0x8b0fc539d4afe486) {
            local_2f8 = 0x77629984572d8e6b;
            local_300 = 0xd6446af8e51b3565;
          }
          else if (uVar7 == 0x8cc083e15b8318c2) {
            local_2f8 = 0x2ca10dd1c9340dca;
            local_300 = 0x35cf395e9ebc01cc;
          }
        }
        else if (uVar7 == 0x8d3f711ac5bce527) {
          local_2a6 = (short)local_2e8[1];
          local_2f8 = 0xbab5b03f17b8e5e4;
          local_300 = 0x2a600f53190ed40a;
        }
        else if (uVar7 == 0x8e7d62bf4a63465a) {
          local_2f8 = 0x9c8ef51d5add9130;
          if ((uint)local_2d0 - (uint)local_266 == local_26c) {
            local_2f8 = 0x5ce7b8fa6809887c;
          }
          local_300 = 0xa3f9fdcf322fe7c1;
          local_2cc = (uint)local_2d0 - (uint)local_266;
        }
        else if (uVar7 == 0x901cfe5e14b2ce92) {
          local_2f8 = 0x59848eadc2d1287b;
          if (local_2b0 == 0x5c) {
            local_2f8 = 0x6d72238a32040260;
          }
          local_300 = 0xa711bd8f457f7cad;
        }
        goto LAB_18006de10;
      }
      if (-0x7b798f054969a7da < (longlong)uVar7) {
        if (uVar7 == 0x848670fab6965827) {
          local_2f8 = 0xbe9af5e81b32b5;
          if (local_2ec == 0x5c) {
            local_2f8 = 0x165c73f4810baf39;
          }
          local_300 = 0xd8120229e61eb979;
        }
        else if (uVar7 == 0x848c694c185bb181) {
          local_2f8 = 0xccc155c9b34d6221;
          if (local_2d2 < 0x3f) {
            local_2f8 = 0xd453af74dca6292f;
          }
          local_300 = 0xff96220a871fcdb7;
        }
        else if (uVar7 == 0x88ec8371f39e915d) {
          local_2f8 = 0xc2ab41f18dde07cd;
          if (local_2a8 == 0x5c) {
            local_2f8 = 0xdd1b705a66ae69d3;
          }
          local_300 = 0x3503562284c1c532;
        }
        goto LAB_18006de10;
      }
      if (uVar7 == 0x83d6450f1bf507ed) {
        local_1d0 = local_138;
        local_2a4 = (short)*local_138;
        local_2f8 = 0x1c98056859fa87df;
        local_300 = 0xd05075d094dbf192;
        goto LAB_18006de10;
      }
      if (uVar7 != 0x8407d20954063a8b) goto LAB_18006de10;
      local_2f8 = 0x96531349b30786aa;
      if (local_2ae == 0x2f) {
        local_2f8 = 0xa4ef5cec54562a75;
      }
      local_300 = 0x7a593cb261b408b2;
    }
    else {
      if ((longlong)uVar7 < -0x2be883123db5f17c) {
        if ((longlong)uVar7 < -0x3423c3b7973a5c1d) {
          if ((longlong)uVar7 < -0x39f325ee916bbf1c) {
            if (-0x3eb0932f60a79a66 < (longlong)uVar7) {
              if (uVar7 == 0xc14f6cd09f58659b) {
                local_2f8 = 0x553d665364e45181;
                if (local_2a2 == 0x2f) {
                  local_2f8 = 0x1544166e5ea46aad;
                }
                local_300 = 0x8e2d53027b01438b;
              }
              else if (uVar7 == 0xc4dae92c66487649) {
                local_50 = local_1f0;
                local_1e8 = (ulonglong *)((longlong)local_110 + 2);
                local_2f8 = 0xcf199527671339a2;
                if (local_1e8 == local_278) {
                  local_2f8 = 0x13751960c6c787bb;
                }
                local_300 = 0xbc2b85ef08860d61;
                local_118 = local_1e8;
              }
              else if (uVar7 == 0xc5477352317079e0) {
                local_2f8 = 0x5daff8ec7da4f2ff;
                if (local_2d0 == 0x2f) {
                  local_2f8 = 0xc4ddf2a0b9af7ab8;
                }
                local_300 = 0x83e5b8aa57da411;
              }
              goto LAB_18006de10;
            }
            if (uVar7 == 0xbfa6f9a2eff59ec0) {
              uVar6 = 0;
              for (uVar7 = local_98 ^ local_a0; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                uVar6 = uVar6 + 1;
              }
              uVar6 = uVar6 >> ((byte)local_230 & 0x3f) | local_70;
              local_2cc = local_284;
              if (*(ushort *)((longlong)local_2e0 + uVar6 * 2) <= *(ushort *)((longlong)local_2e8 + uVar6 * 2)) {
                local_2cc = local_288;
              }
              local_2f8 = 0x6680643eccc3d2fb;
              local_300 = 0x59f76ceca431a40a;
              goto LAB_18006de10;
            }
            if (uVar7 != 0xc01564ac02ff498c) goto LAB_18006de10;
            local_2f8 = 0x5dc53734a3fba6ce;
            if (local_2a4 == 0x5c) {
              local_2f8 = 0x457f8d7bf88dc4ed;
            }
            local_300 = 0x9bc9ed25cd6fe62a;
          }
          else {
            if (-0x383bfde114dce27f < (longlong)uVar7) {
              if (uVar7 == 0xc7c4021eeb231d82) {
                local_2f8 = 0x718966d6a92bbcb6;
                if (local_220 == local_240) {
                  local_2f8 = 0x96834c057f92bd47;
                }
                local_300 = 0xeae023ba8c8e9590;
                goto LAB_18006ddfe;
              }
              if (uVar7 == 0xc939a43aeae5e694) {
                local_2f8 = 0x258353348082c3b1;
                if (local_2a8 < 0x5c) {
                  local_2f8 = 0x7d29354b8d8c635d;
                }
                local_300 = 0xad6fd045731c52ec;
              }
              else if (uVar7 == 0xca639e05777b7ecd) {
                local_2f8 = 0x2dfd3740116698d2;
                if (local_220 == local_230) {
                  local_2f8 = 0x178e59f1786ddfe3;
                }
                local_300 = 0x8352558ac6f79918;
              }
              goto LAB_18006de10;
            }
            if (uVar7 == 0xc60cda116e9440e4) {
              local_2f8 = 0x795d447eb4798466;
              local_300 = 0x4485314a7832891c;
              goto LAB_18006de10;
            }
            if (uVar7 != 0xc69698e0e542516e) goto LAB_18006de10;
            local_2f8 = 0x4a2a1162d898e3b6;
            if (local_2a4 == 0x2f) {
              local_2f8 = 0x5290ab2d83ee8195;
            }
            local_300 = 0x8c26cb73b60ca352;
          }
          local_2c8 = local_1d0;
          goto LAB_18006de10;
        }
        if ((longlong)uVar7 < -0x314b590b201d36a2) {
          if ((longlong)uVar7 < -0x331c56d5e32d2157) {
            if (uVar7 == 0xcbdc3c4868c5a3e3) {
              local_120 = (ulonglong *)((longlong)local_2e0 + 6);
              local_2f8 = 0x261ae98fba681ee0;
              if (local_220 == local_238) {
                local_2f8 = 0x848e5e5890ac7c9d;
              }
              local_300 = 0xf8ed31e763b0544a;
              local_2c0 = local_120;
            }
            else if (uVar7 == 0xccc870b8cd21764d) {
              local_2f8 = 0x4d45ab6b1ad72d13;
              if (local_2a4 < 0x5c) {
                local_2f8 = 0x4bc65727fd6a35f1;
              }
              local_300 = 0x8d50cfc71828649f;
            }
          }
          else if (uVar7 == 0xcce3a92a1cd2dea9) {
            local_1f0 = (ulonglong *)((longlong)local_108 + 2);
            local_2f8 = 0x2c2a3c9e0692a22b;
            if (local_1f0 == local_280) {
              local_2f8 = 0xabb72c0a186249a3;
            }
            local_300 = 0x6f6dc5267e2a3fea;
            local_158 = local_1f0;
          }
          else if (uVar7 == 0xce4e71dd67151640) {
            local_2ae = *(short *)((longlong)local_2e8 + 4);
            local_2f8 = 0xbfacb0d03def00d6;
            local_300 = 0x18bd4a5bba9f5b09;
          }
          else if (uVar7 == 0xce94883dc9b02268) {
            local_1c0 = (uint)*local_2e0;
            local_2f8 = 0xcdf89fc2330479be;
            if ((local_24c & local_1c0) + local_254 < local_248) {
              local_2f8 = 0xd405f315f5926f66;
            }
            local_1bc = local_1c0 >> ((byte)local_250 & 0x1f);
            local_2ee = (short)local_1bc;
            local_300 = 0xf11c4eade443a95f;
          }
        }
        else if ((longlong)uVar7 < -0x2f52f0dd6576bb25) {
          if (uVar7 == 0xceb4a6f4dfe2c95e) {
            local_2f8 = 0xc28134e256d03fa6;
            if (local_2ec == 0x2f) {
              local_2f8 = 0xd463dde33fc0a22a;
            }
            local_300 = 0x1a2dac3e58d5b46a;
          }
          else if (uVar7 == 0xd046e50efe9031b1) {
            local_2f8 = 0xc4e9bb204933a984;
            if (local_2a8 == 0x2f) {
              local_2f8 = 0xdb598a8ba243c79a;
            }
            local_300 = 0x3341acf3402c6b7b;
          }
        }
        else if (uVar7 == 0xd0ad0f229a8944db) {
          local_2f8 = 0x2e9415fba82e1860;
          if (local_238 < local_220) {
            local_2f8 = 0x8a565f210fd35f48;
          }
          local_300 = 0xe95017e5430d05e2;
        }
        else if (uVar7 == 0xd1c9e06a97c5222e) {
          local_2f8 = 0x56218a8c5f2d18a4;
          if (local_2ee < 0x3f) {
            local_2f8 = 0xe9ca1a4af3ba5273;
          }
          local_300 = 0x59fb692835be822d;
        }
        else if (uVar7 == 0xd26268b03042bc8f) {
          local_2f8 = 0xe56313bb12940f7f;
          if (local_2a2 == 0x5c) {
            local_2f8 = 0xa51a638628d43453;
          }
          local_300 = 0x3e7326ea0d711d75;
        }
        goto LAB_18006de10;
      }
      if ((longlong)uVar7 < -0x21499fa1ca1ddd39) {
        if ((longlong)uVar7 < -0x2761a78496b66e15) {
          if ((longlong)uVar7 < -0x29ce38ce3252a08e) {
            if (uVar7 == 0xd4177cedc24a0e84) {
              local_2f8 = 0x997a03170867c01d;
              if (local_2ee == 0x2f) {
                local_2f8 = 0x79dcd9f6901c6745;
              }
              local_300 = 0xef27b15e9e65ed6a;
            }
            else if (uVar7 == 0xd5949b3bdc9dde53) {
              local_1e8 = (ulonglong *)((longlong)local_d8 + 2);
              local_2f8 = 0x18d440b0707345bd;
              if (local_1e8 == local_278) {
                local_2f8 = 0xc4b8ccf7d1a7fba4;
              }
              local_300 = 0x6be650781fe6717e;
              local_118 = local_1e8;
            }
            goto LAB_18006de10;
          }
          if (uVar7 != 0xd631c731cdad5f72) {
            if (uVar7 == 0xd6cfca90f4659e8f) {
              local_2f8 = 0xde0a82ef5155d6e0;
              local_300 = 0x15d6bea739907503;
            }
            else if (uVar7 == 0xd77fdb3d35931cd7) {
              local_58 = local_1f8;
              local_2cc = (uint)(local_1d8 != local_e8) - (uint)(local_e0 != local_1f8);
              local_2f8 = 0xca30af956861fb26;
              if (local_2cc == local_26c) {
                local_2f8 = 0xcf8456b2aa10f9d1;
              }
              local_300 = 0xf547a74700938dd7;
            }
            goto LAB_18006de10;
          }
          local_2f8 = 0x3cfca981ce03039c;
          if (local_2ae == 0x5c) {
            local_2f8 = 0xe40e6242952af43;
          }
          local_300 = 0xd0f6867a1cb08d84;
        }
        else {
          if (-0x252155c0bb29c227 < (longlong)uVar7) {
            if (uVar7 == 0xdadeaa3f44d63dda) {
              local_2f8 = 0x191a602aed1c1f94;
              if (local_2b2 < 0x5c) {
                local_2f8 = 0xed73a40b4cb2334f;
              }
              local_300 = 0xb26ba3fe679cdc0f;
            }
            else if (uVar7 == 0xdb1035511fe5120a) {
              local_2f8 = 0x816bdabecce51c6d;
              local_300 = 0x15b7d6c5727f5a96;
            }
            else if (uVar7 == 0xde803c2a8ba5a54c) {
              local_2d2 = *(short *)((longlong)local_2e8 + 4);
              local_2f8 = 0x62193a9a236db0f8;
              local_300 = 0xe69553d63b360179;
            }
            goto LAB_18006de10;
          }
          if (uVar7 == 0xd89e587b694991eb) {
            local_2f8 = 0xc046c8e8f37e3e8;
            if (local_160 < local_218) {
              local_2f8 = 0x3e0d9751844c5c7b;
            }
            local_300 = 0x9e32a523b8e783da;
            local_130 = local_160;
            goto LAB_18006de10;
          }
          if (uVar7 != 0xd8ac98dc0e058bcc) goto LAB_18006de10;
          local_2f8 = 0x56578bb82850a557;
          local_300 = 0x88e1ebe61db28790;
        }
      }
      else {
        if (-0x1c0eef8058ea9b8d < (longlong)uVar7) {
          if ((longlong)uVar7 < -0x1babcea52fa39d62) {
            if (uVar7 == 0xe3f1107fa7156474) {
              local_2f8 = 0x677d3797fcfc5cbd;
              if (local_2ce == 0x2e) {
                local_2f8 = 0x2ed333a609030950;
              }
              local_300 = 0x52b05c19fa1f2187;
              local_2c0 = local_208;
            }
            else if (uVar7 == 0xe40b6c6ee4a1f848) {
              local_a0 = *local_68;
              local_98 = *local_60;
              local_2f8 = 0x6ccfe0783c7223ef;
              if (local_a0 == local_98) {
                local_2f8 = 0xbf741a1bace2cc4;
              }
              local_300 = 0xd36919dad387bd2f;
              local_160 = local_a8;
            }
          }
          else if (uVar7 == 0xe454315ad05c629e) {
            local_2f8 = 0x9337addd9f4a2bed;
            if (local_2ce < 0x3f) {
              local_2f8 = 0x31dfe659acced82f;
            }
            local_300 = 0xd22ef6260bdbbc5b;
          }
          else if (uVar7 == 0xe69db73c71ae92fb) {
            local_128 = (ulonglong *)((longlong)local_f0 + 2);
            local_2f8 = 0xd54e73d9a1e75c11;
            if (local_128 == local_278) {
              local_2f8 = 0x421e08f008624220;
            }
            local_300 = 0x9561d3cd3df15ef7;
            local_1f8 = local_278;
          }
          else if (uVar7 == 0xe7cd37650bd0199e) {
            local_2f8 = 0xa92fad20425fb094;
            if (local_2a6 == 0x5c) {
              local_2f8 = 0xb3048772c682aa48;
            }
            local_300 = 0xb8ba1aa9feddb9a9;
          }
          goto LAB_18006de10;
        }
        if ((longlong)uVar7 < -0x1ee6b110ede4378e) {
          if (uVar7 == 0xdeb6605e35e222c7) {
            local_1d8 = local_2c8;
            local_2c0 = (ulonglong *)*param_2;
            local_2e0 = local_2c0;
            local_220 = param_2[1];
            local_278 = (ulonglong *)((local_220 << (bVar5 & 0x3f)) + (longlong)local_2c0);
            local_2f8 = 0x940a0742bd652310;
            if ((longlong)local_220 < (longlong)local_240) {
              local_2f8 = 0x26fde0c087c929af;
            }
            local_300 = 0x5a9e8f7f74d50178;
            local_90 = local_2c0;
            goto LAB_1800704f7;
          }
          if (uVar7 == 0xdef7d868d9d84aaa) {
            local_1c8 = local_120;
            local_29c = (short)*local_120;
            local_2f8 = 0xe901d802e5a526d;
            local_300 = 0x15607bb8a9cfc3c7;
          }
          goto LAB_18006de10;
        }
        if (uVar7 == 0xe1194eef121bc872) {
          local_2f8 = 0x5817e52ac51000ab;
          local_300 = 0x71ce68604e08ebf8;
          goto LAB_18006de10;
        }
        if (uVar7 == 0xe3169e919f8f91e2) {
          local_2f8 = 0x23572de235d6e6c5;
          local_300 = 0x5f34425dc6cace12;
          goto LAB_18006ddfe;
        }
        if (uVar7 != 0xe324d01d3f7dabe8) goto LAB_18006de10;
        local_2f8 = 0xf86257bae4bcb5c4;
        local_300 = 0x26d437e4d15e9703;
      }
    }
LAB_180070a01:
    local_2c8 = local_2e8;
    goto LAB_18006de10;
  }
  if (0x3ac3f1f5aa837405 < (longlong)uVar7) {
    if ((longlong)uVar7 < 0x5591a366d8d956ee) {
      if ((longlong)uVar7 < 0x46bbbe805e4b6db0) {
        if ((longlong)uVar7 < 0x3dd87534cc4b0d7a) {
          if ((longlong)uVar7 < 0x3c588f7f06e9aa34) {
            if (uVar7 == 0x3ac3f1f5aa837406) {
              local_170 = local_58;
              local_2e9 = local_58 == local_278;
              local_2f8 = 0x83f218b5d9a50e77;
              if ((bool)local_2e9) {
                local_2f8 = 0xa49890842e4be0b1;
              }
              local_178 = local_e8;
              local_2ea = local_e8 == local_280;
              if ((bool)local_2ea) {
                local_2f8 = 0xa49890842e4be0b1;
              }
              local_300 = 0x195eeb871ec9e2a6;
            }
            else if (uVar7 == 0x3bf0e747b2e65458) {
              ppuVar3 = &local_2e0;
              if (local_28c == local_292) {
                ppuVar3 = &local_208;
              }
              local_2c0 = *ppuVar3;
              local_2f8 = 0xb191b214121df924;
              local_300 = 0xcdf2ddabe101d1f3;
LAB_1800704f7:
            }
          }
          else if (uVar7 == 0x3c588f7f06e9aa34) {
            local_2f8 = 0x360d9d0eec6d565a;
            if (local_29e == 0x5c) {
              local_2f8 = 0x5b60cbde96b8363;
            }
            local_300 = 0xd51b039f73e2c7b8;
          }
          else if (uVar7 == 0x3c6fe1cb8bc3d71b) {
            local_2f8 = 0x83d895bc6278dd60;
            if (local_2ee == 0x5c) {
              local_2f8 = 0x637e4f5dfa037a38;
            }
            local_300 = 0xf58527f5f47af017;
          }
          else if (uVar7 == 0x3ce4d16fd747d0e1) {
            local_29e = (short)local_1c0;
            local_2f8 = 0xe0040b9d95b2161e;
            local_300 = 0xb6aff3f0e64f6d48;
          }
        }
        else if ((longlong)uVar7 < 0x41195bfb949197b6) {
          if (uVar7 == 0x3dd87534cc4b0d7a) {
            local_138 = (ulonglong *)((longlong)local_1d0 + 2);
            local_2f8 = 0xdd4b395c90186b2;
            if (local_138 == local_280) {
              local_2f8 = 0x50b496c4e716a398;
            }
            local_300 = 0x8e02f69ad2f4815f;
            local_2c8 = local_280;
          }
          else if (uVar7 == 0x402fa0149c1602e6) {
            local_f0 = local_128;
            local_2a0 = (short)*local_128;
            local_2f8 = 0x2122c6aceda2d581;
            local_300 = 0xb33431a48b107eba;
          }
          else if (uVar7 == 0x3f7708d268f276f1) {
            return local_2cc;
          }
        }
        else if (uVar7 == 0x41195bfb949197b6) {
          local_2f8 = 0x20fcc38e4bd85827;
          if (local_2ce == 0x3f) {
            local_2f8 = 0x6952c7bfbe270dca;
          }
          local_300 = 0x1531a8004d3b251d;
          local_2c0 = local_208;
        }
        else if (uVar7 == 0x4347f9b878b89dc1) {
          local_100 = local_158;
          local_2aa = (short)*local_158;
          local_2f8 = 0x4d797a8b27792deb;
          local_300 = 0x2ad26785648e9568;
        }
        else if (uVar7 == 0x4348e54bc43f13fa) {
          local_2f8 = 0xb2a0b18b859d0998;
          if (local_29a == 0x5c) {
            local_2f8 = 0x180c14a482e4bfc0;
          }
          local_300 = 0x646f7b1b71f89717;
          goto LAB_18006ddfe;
        }
      }
      else if ((longlong)uVar7 < 0x51467d5bec87895d) {
        if ((longlong)uVar7 < 0x490e75dd0b21b9b6) {
          if (uVar7 == 0x46bbbe805e4b6db0) {
            local_2f8 = 0x421eb1ac8ec37f52;
            if (local_2aa == 0x2f) {
              local_2f8 = 0xb28c4c93e5b370c8;
            }
            local_300 = 0xba27f3acbdccbe2d;
          }
          else if (uVar7 == 0x47842423ce349d04) {
            local_2f8 = 0x5023f30bfe932a1;
            local_300 = 0x7961508f4cf51a76;
            goto LAB_18006ddfe;
          }
        }
        else if (uVar7 == 0x490e75dd0b21b9b6) {
          local_1b8 = (uint)*local_2e8;
          local_2f8 = 0x5971fcacfe791e9f;
          if ((local_24c & local_1b8) + local_254 < local_248) {
            local_2f8 = 0x94406ed747105516;
          }
          local_1b4 = local_1b8 >> ((byte)local_250 & 0x1f);
          local_2ec = (short)local_1b4;
          local_300 = 0xc9f2034fa072689e;
        }
        else if (uVar7 == 0x4aeca017d999baa0) {
          local_2f8 = 0xe7a67e7118bc687d;
          if (local_2b0 == 0x2f) {
            local_2f8 = 0xd350d356e8694266;
          }
          local_300 = 0x19334d539f123cab;
        }
        else if (uVar7 == 0x4ea19b8b78d98069) {
          local_160 = local_180;
          local_68 = local_188;
          local_60 = local_190;
          local_a8 = local_230 | local_180;
          local_2f8 = 0xcd2abfd23ba85747;
          if (local_218 < local_a8) {
            local_2f8 = 0xf1bf8bc7b6403ee4;
          }
          local_300 = 0x2921d3bcdf09af0f;
          local_70 = local_160;
        }
      }
      else if ((longlong)uVar7 < 0x51dc7f597b33c178) {
        if (uVar7 == 0x51467d5bec87895d) {
          local_2f8 = 0xcf846792ec3cd301;
          if (local_2ac < 0x5c) {
            local_2f8 = 0x1316f32cc2ac9a6e;
          }
          local_300 = 0xfc2421658f50778e;
        }
        else if (uVar7 == 0x51636cae67aed1ac) {
          local_2f8 = 0x3485137ce15af5dc;
          if (local_2d0 == 0x5c) {
            local_2f8 = 0xadf7193025517d9b;
          }
          local_300 = 0x6114b01a3983a332;
        }
      }
      else if (uVar7 == 0x51dc7f597b33c178) {
        local_1a0 = local_c0;
        local_1a8 = local_b8;
        auVar9._0_2_ = -(ushort)((short)*local_b8 == (short)*local_c0);
        auVar9._2_2_ = -(ushort)(*(short *)((longlong)local_b8 + 2) == *(short *)((longlong)local_c0 + 2));
        auVar9._4_2_ = -(ushort)(*(short *)((longlong)local_b8 + 4) == *(short *)((longlong)local_c0 + 4));
        auVar9._6_2_ = -(ushort)(*(short *)((longlong)local_b8 + 6) == *(short *)((longlong)local_c0 + 6));
        auVar9._8_2_ = -(ushort)((short)local_b8[1] == (short)local_c0[1]);
        auVar9._10_2_ = -(ushort)(*(short *)((longlong)local_b8 + 10) == *(short *)((longlong)local_c0 + 10));
        auVar9._12_2_ = -(ushort)(*(short *)((longlong)local_b8 + 0xc) == *(short *)((longlong)local_c0 + 0xc));
        auVar9._14_2_ = -(ushort)(*(short *)((longlong)local_b8 + 0xe) == *(short *)((longlong)local_c0 + 0xe));
        local_28e = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar9._14_2_ >> 7) & 1) << 0xe | auVar9._14_2_ & 0x8000;
        local_2f8 = 0x9b4fd70bbd543cb3;
        if (local_296 == local_28e) {
          local_2f8 = 0xf5e014c96111a107;
        }
        local_300 = 0x651ab8b8cbc6d1e9;
        local_198 = local_b0;
        local_168 = local_78;
      }
      else if (uVar7 == 0x5313249d9f1b718b) {
        local_2f8 = 0x361a9ed2ff54a2bd;
        if (local_1bc == local_244) {
          local_2f8 = 0x96833cf96817dfc3;
        }
        local_300 = 0xad73dbbedaf18b9b;
        local_28c = local_2ce;
      }
      else if (uVar7 == 0x5543af92dd17dccd) {
        local_200 = (ulonglong *)((longlong)local_2e8 + 6);
        local_2ac = *(short *)((longlong)local_2e8 + 6);
        local_2f8 = 0x50ebaaaa734d32a6;
        local_300 = 0x1add7f19fcabbfb;
      }
    }
    else if ((longlong)uVar7 < 0x6ac527597feb0f5e) {
      if ((longlong)uVar7 < 0x5f1807f52b2eef40) {
        if ((longlong)uVar7 < 0x58851670c2b34129) {
          if (uVar7 == 0x5591a366d8d956ee) {
            local_2f8 = 0x9aaaff3ce620df68;
            local_300 = 0x14d79d83ac439932;
          }
          else if (uVar7 == 0x56abf86d73fd7b56) {
            local_2f8 = 0x94bdd91a5f4b5038;
            if (local_29e < 0x5c) {
              local_2f8 = 0xdb2cb6cd48f78443;
            }
            local_300 = 0xa8e5566559a2fa0c;
          }
        }
        else {
          if (uVar7 == 0x58851670c2b34129) {
            local_2cc = local_284;
            if (local_262 <= local_264) {
              local_2cc = local_288;
            }
            local_2f8 = 0x6285232ec49ced58;
            local_300 = 0x5df22bfcac6e9ba9;
            goto LAB_1800710c7;
          }
          if (uVar7 == 0x5d71ddefea8a163d) {
            local_2f8 = 0x1105d2546d4bd2c5;
            if (local_2ec < 0x5c) {
              local_2f8 = 0x74d0dc520ca6442e;
            }
            local_300 = 0x8a3edac3fbd29967;
          }
          else if (uVar7 == 0x5db26d98e7623d88) {
            local_2c8 = (ulonglong *)((longlong)local_2e8 + 4);
            local_2f8 = 0xfb5eea927c7186de;
            local_300 = 0x25e88acc4993a419;
            goto LAB_18006e34b;
          }
        }
      }
      else if ((longlong)uVar7 < 0x630648c44cde5aaa) {
        if (uVar7 == 0x5f1807f52b2eef40) {
          local_2f8 = 0x9577bebbb1e9e138;
          if (local_2b2 == 0x2f) {
            local_2f8 = 0xf2677eca5d128fcc;
          }
          local_300 = 0x8e702701d84cf7fd;
        }
        else if (uVar7 == 0x60aaf8a33c5cff79) {
          local_2f8 = 0x924978e24c8b136;
          if (local_228 == local_230) {
            local_2f8 = 0x8db6575baf74cd3;
          }
          local_300 = 0x841be694e1745411;
        }
      }
      else if (uVar7 == 0x630648c44cde5aaa) {
        local_208 = (ulonglong *)((longlong)local_2e0 + 6);
        local_2b0 = *(short *)((longlong)local_2e0 + 6);
        local_2f8 = 0x298de0457b41f714;
        local_300 = 0xd5194bc47c9e9dbe;
      }
      else if (uVar7 == 0x67ab1d0e43f7b883) {
        local_2f8 = 0x2ad5e033771a81a2;
        if (local_2aa < 0x5c) {
          local_2f8 = 0x94e8cc34596e7c15;
        }
        local_300 = 0xd25372b4072511a5;
      }
      else if (uVar7 == 0x67c0ece21cf618c9) {
        local_2f8 = 0xa08ebb73b5fe58a8;
        if (local_29c == 0x5c) {
          local_2f8 = 0x3df49a2354f9b80d;
        }
        local_300 = 0x4197f59ca7e590da;
        goto LAB_180070c6a;
      }
    }
    else if ((longlong)uVar7 < 0x765db24996022d77) {
      if ((longlong)uVar7 < 0x7182f1a1f8a0ce84) {
        if (uVar7 == 0x6ac527597feb0f5e) {
          local_290 = 0x2f;
          local_1b0 = 0;
          local_244 = 0x3f;
          local_284 = 0xffffffff;
          local_260 = 1;
          local_230 = 4;
          local_238 = 3;
          local_210 = 8;
          local_288 = 1;
          local_248 = 0x1a;
          local_24c = 0xffffffdf;
          local_26c = 0;
          local_292 = 0x3f;
          local_250 = 0x10;
          local_254 = -0x3a0041;
          local_294 = 0x5c;
          local_296 = 0xffff;
          local_240 = 2;
          local_c8 = param_1;
          if (7 < param_1[3]) {
            local_c8 = (ulonglong *)*param_1;
          }
          local_2e8 = local_c8;
          local_228 = param_1[2];
          local_280 = (ulonglong *)(local_228 * 2 + (longlong)local_c8);
          local_2f8 = 0x2199e46a2a34f8c9;
          if ((longlong)local_228 < 2) {
            local_2f8 = 0xb621f1e914f763b8;
          }
          local_300 = 0x689791b72115417f;
          local_2c8 = local_c8;
        }
        else if (uVar7 == 0x6edea2d10ccd7330) {
          local_2f8 = 0x3e8dea6d71905ccc;
          if (local_298 == 0x5c) {
            local_2f8 = 0x93813504190504fd;
          }
          local_300 = 0x4615ae3fc598daae;
        }
      }
      else if (uVar7 == 0x7182f1a1f8a0ce84) {
        local_2e9 = local_150 == local_278;
        local_2f8 = 0x832fd569fde541c8;
        if ((bool)local_2e9) {
          local_2f8 = 0xa4455d580a0baf0e;
        }
        local_2ea = local_148 == local_280;
        if ((bool)local_2ea) {
          local_2f8 = 0xa4455d580a0baf0e;
        }
        local_300 = 0x1983265b3a89ad19;
        local_178 = local_148;
        local_170 = local_150;
      }
      else if (uVar7 == 0x733210c86f9534c3) {
        local_d8 = local_118;
        local_298 = (short)*local_118;
        local_2f8 = 0xff99a498ed46d430;
        local_300 = 0xc58d97eaddd56eaf;
      }
      else if (uVar7 == 0x73c9e0a811557e4f) {
        local_2f8 = 0xb38b7bff1ecad93;
        if (local_29e == 0x2f) {
          local_2f8 = 0x3883260cf4ea78aa;
        }
        local_300 = 0xe82e292e6e633c71;
      }
    }
    else if ((longlong)uVar7 < 0x7c1759cb855e7831) {
      if (uVar7 == 0x765db24996022d77) {
        local_2f8 = 0x454a652a64568691;
        local_300 = 0x39290a95974aae46;
LAB_18006ddfe:
        local_2c0 = local_2e0;
      }
      else if (uVar7 == 0x78984452b4088662) {
        local_2f8 = 0xc398cd08e61b32c2;
        local_300 = 0x6cc65187285ab818;
        local_1e8 = local_d8;
      }
    }
    else if (uVar7 == 0x7c1759cb855e7831) {
      local_2f8 = 0x99c38305e4b41e85;
      if (local_238 < local_228) {
        local_2f8 = 0x504c22ba45f0972d;
      }
      local_300 = 0x50f8d2898e74be0;
    }
    else if (uVar7 == 0x7c636fbff31c28d7) {
      local_e0 = local_2c0;
      local_88 = (longlong)local_2c0 - (longlong)local_90 >> (bVar5 & 0x3f);
      local_80 = (longlong)local_1d8 - (longlong)local_c8 >> (bVar5 & 0x3f);
      local_218 = local_80;
      if (local_88 < local_80) {
        local_218 = local_88;
      }
      local_2f8 = 0x45eb7dce3a3f9a92;
      if (local_218 < local_210) {
        local_2f8 = 0x8c4fe3bb6c3e57b;
      }
      local_180 = local_1b0;
      local_300 = 0x466565b0ce1a6512;
      local_188 = local_2e8;
      local_190 = local_2e0;
    }
    else if (uVar7 == 0x7e352abd00cc4b9a) {
      local_2f8 = 0xaff414c9db752ba3;
      if (local_2ee == 0x3f) {
        local_2f8 = 0x5b09e54f33b98ba5;
      }
      local_300 = 0xe87030ea1541b6a7;
    }
    goto LAB_18006de10;
  }
  if ((longlong)uVar7 < 0xe4b72a1e0549b60) {
    if ((longlong)uVar7 < -0x16accdd7851ab2a) {
      if ((longlong)uVar7 < -0x857e82cf6e03d01) {
        if ((longlong)uVar7 < -0x13f5d0042d4c71e8) {
          if (uVar7 == 0xe8182678e26face1) {
            local_1e0 = (ulonglong *)((longlong)local_f8 + 2);
            local_2f8 = 0x30aa391e031c4ed2;
            if (local_1e0 == local_280) {
              local_2f8 = 0xbf86fa64f66d8886;
            }
            local_300 = 0x2e46753d9c59440a;
            local_140 = local_1e0;
          }
          else if (uVar7 == 0xebff1d2465f164e8) {
            local_2f8 = 0xe3ad899618f967f7;
            local_300 = 0xe813144d20a67416;
          }
        }
        else if (uVar7 == 0xec0a2ffbd2b38e18) {
          local_2f8 = 0x75a9100dc5abe1e3;
          local_300 = 0x51d04fe0bdb2a692;
        }
        else if (uVar7 == 0xef32d2494dfcede0) {
          local_2f8 = 0x75f548fe4528df08;
          if (local_2ac == 0x2f) {
            local_2f8 = 0xfea0ad791c854499;
          }
          local_300 = 0x9e0a55da20d9bbe0;
        }
        else if (uVar7 == 0xf51d952031c0d138) {
          ppuVar3 = &local_2e8;
          if (local_28a == local_292) {
            ppuVar3 = &local_200;
          }
          local_2c8 = *ppuVar3;
          local_2f8 = 0x1f819bc1e4fc62ea;
          local_300 = 0xc137fb9fd11e402d;
LAB_18006e34b:
        }
      }
      else if ((longlong)uVar7 < -0x7796d788fc06ff9) {
        if (uVar7 == 0xf7a817d3091fc2ff) {
          local_2f8 = 0x4656d9f5765b3667;
          local_300 = 0xd79656ac1c6ffaeb;
          local_1e0 = local_f8;
        }
        else if (uVar7 == 0xf8394200330fc17f) {
          local_2f8 = 0xe7d105c1ff2f86a6;
          local_300 = 0x230beced9967f0ef;
          local_1f0 = local_100;
        }
      }
      else if (uVar7 == 0xf8869287703f9007) {
        local_2f8 = 0xae2ceb466892fbf1;
        if (local_2aa == 0x5c) {
          local_2f8 = 0x5ebe167903e2f46b;
        }
        local_300 = 0x5615a9465b9d3a8e;
      }
      else if (uVar7 == 0xfc94ab8107df6aaa) {
        local_2f8 = 0xb5d2ab8609cddbd9;
        if (local_2b0 < 0x5c) {
          local_2f8 = 0x6f22f5cfc4e6afeb;
        }
        local_300 = 0x25ce55d81d7f154b;
      }
      else if (uVar7 == 0xfe556fb37692ed5a) {
        uVar1 = 0;
        for (uVar2 = local_28e ^ local_284; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar1 = uVar1 + 1;
        }
        lVar4 = (uVar1 >> ((byte)local_288 & 0x1f)) + local_168;
        local_2cc = local_284;
        if (*(ushort *)((longlong)local_2e0 + lVar4 * 2) <= *(ushort *)((longlong)local_2e8 + lVar4 * 2)) {
          local_2cc = local_288;
        }
        local_2f8 = 0x2f04380a4ff0fefa;
        local_300 = 0x107330d82702880b;
LAB_1800710c7:
      }
    }
    else if ((longlong)uVar7 < 0x69a5bae58f79949) {
      if ((longlong)uVar7 < -0xe1bacaa5d99043) {
        if (uVar7 == 0xfe95332287ae54d6) {
          local_2f8 = 0x388b248343b91a7f;
          local_300 = 0xa3e261ef661c3359;
        }
        else if (uVar7 == 0xfeee0691f774dd49) {
          local_2f8 = 0x31873192e68e5df4;
          if (local_2ec == 0x3f) {
            local_2f8 = 0xc3d67a199f4333e9;
          }
          local_300 = 0xd2a3e18fd9f3f61c;
        }
      }
      else if (uVar7 == 0xff1e45355a266fbd) {
        local_148 = (ulonglong *)((longlong)local_108 + 2);
        local_150 = (ulonglong *)((longlong)local_110 + 2);
        local_2f8 = 0x424c4b3ea782db8c;
        local_300 = 0x33ceba9f5f221508;
      }
      else if (uVar7 == 0x38e187ef425ff80) {
        auVar8._0_2_ = -(ushort)((short)*local_2e0 == (short)*local_2e8);
        auVar8._2_2_ = -(ushort)(*(short *)((longlong)local_2e0 + 2) == *(short *)((longlong)local_2e8 + 2));
        auVar8._4_2_ = -(ushort)(*(short *)((longlong)local_2e0 + 4) == *(short *)((longlong)local_2e8 + 4));
        auVar8._6_2_ = -(ushort)(*(short *)((longlong)local_2e0 + 6) == *(short *)((longlong)local_2e8 + 6));
        auVar8._8_2_ = -(ushort)((short)local_2e0[1] == (short)local_2e8[1]);
        auVar8._10_2_ = -(ushort)(*(short *)((longlong)local_2e0 + 10) == *(short *)((longlong)local_2e8 + 10));
        auVar8._12_2_ = -(ushort)(*(short *)((longlong)local_2e0 + 0xc) == *(short *)((longlong)local_2e8 + 0xc));
        auVar8._14_2_ = -(ushort)(*(short *)((longlong)local_2e0 + 0xe) == *(short *)((longlong)local_2e8 + 0xe));
        local_28e = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 | (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc | (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar8._14_2_ >> 7) & 1) << 0xe | auVar8._14_2_ & 0x8000;
        local_2f8 = 0x5d65e1bcd4938678;
        if (local_296 == local_28e) {
          local_2f8 = 0x33ca227e08d61bcc;
        }
        local_300 = 0xa3308e0fa2016b22;
        local_1a8 = local_2e0;
        local_1a0 = local_2e8;
        local_198 = local_210;
        local_168 = local_1b0;
      }
      else if (uVar7 == 0x61678c9a3b409ea) {
        local_130 = local_48 + local_260;
        local_2f8 = 0xfd6aecb5a66533e5;
        if (local_130 == local_218) {
          local_2f8 = 0xcf63176aad1e8c76;
        }
        local_300 = 0x5d55dec79aceec44;
      }
    }
    else if ((longlong)uVar7 < 0xbbe9ddb385f13e1) {
      if (uVar7 == 0x69a5bae58f79949) {
        local_2f8 = 0xf4c2f980287e6da5;
        if (local_1b4 == local_244) {
          local_2f8 = 0xa61f17b21e1af7c;
        }
        local_300 = 0xff7c645b10217e44;
        local_28a = local_2d2;
      }
      else if (uVar7 == 0x8abbf3f587fcee5) {
        local_1f0 = (ulonglong *)((longlong)local_100 + 2);
        local_2f8 = 0x10763588b685c03;
        if (local_1f0 == local_280) {
          local_2f8 = 0x869a73cc9598b78b;
        }
        local_300 = 0x42409ae0f3d0c1c2;
        local_158 = local_1f0;
      }
    }
    else if (uVar7 == 0xbbe9ddb385f13e1) {
      local_2f8 = 0x8e264a7466ff7722;
      local_300 = 0x9202887cbe51d4f1;
    }
    else if (uVar7 == 0xc5b7c35129ba86b) {
      local_2f8 = 0x5d739fcb18ed9579;
      local_300 = 0x5be9c465401a0c30;
    }
    else if (uVar7 == 0xdfd0cb766fb9e87) {
      local_2f8 = 0x42d3692d1ee15db2;
      if (local_2a0 == 0x5c) {
        local_2f8 = 0x1249c453667019d2;
      }
      local_300 = 0xf4d4736f17de8b29;
    }
    goto LAB_18006de10;
  }
  if ((longlong)uVar7 < 0x24795fed78194771) {
    if ((longlong)uVar7 < 0x196e348f57880c06) {
      if ((longlong)uVar7 < 0x11759b9646b0c5f5) {
        if (uVar7 == 0xe4b72a1e0549b60) {
          local_2f8 = 0x316a148b00d2d3db;
          if (local_2a0 == 0x2f) {
            local_2f8 = 0x61f0b9f5784397bb;
          }
          local_300 = 0x876d0ec909ed0540;
        }
        else if (uVar7 == 0xfdae3a46a939a89) {
          local_2f8 = 0xe3e5c1cfe9099be6;
          if (local_2ee < 0x5c) {
            local_2f8 = 0x35cd774e09f9793f;
          }
          local_300 = 0x4bf85df3093532a5;
        }
      }
      else if (uVar7 == 0x11759b9646b0c5f5) {
        local_2f8 = 0x33a4567f737cfec7;
        local_300 = 0xc6b9c35f42bc2fff;
        local_28a = *(short *)((longlong)local_2e8 + 4);
      }
      else if (uVar7 == 0x1195b789bc82093d) {
        local_2f8 = 0x3e1261017c73a93f;
        local_300 = 0xb2d2e2e027f0b1fd;
      }
      else if (uVar7 == 0x133d9623b2990878) {
        local_2f8 = 0x85488f5a23477d61;
        if (local_1d8 == local_280) {
          local_2f8 = 0xa644c20d636bb35;
        }
        local_300 = 0x9ba4c379bc0277b9;
        local_1e0 = local_1d8;
        local_140 = local_1d8;
      }
    }
    else if ((longlong)uVar7 < 0x1bf06638879591aa) {
      if (uVar7 == 0x196e348f57880c06) {
        local_2f8 = 0x2581c9f481635845;
        if (local_2ec < 0x3f) {
          local_2f8 = 0x4f9238384400792d;
        }
        local_300 = 0x78f0141b6be94e78;
      }
      else if (uVar7 == 0x1b0799ba69a516c5) {
        local_2f8 = 0x913ec3fb2da1a9cc;
        local_300 = 0x4f88a3a518438b0b;
        goto LAB_180070a01;
      }
    }
    else if (uVar7 == 0x1bf06638879591aa) {
      local_2f8 = 0xd24a3d2750cee942;
      if (local_29c < 0x5c) {
        local_2f8 = 0x26d0f81736f8f1a9;
      }
      local_300 = 0xb58ad1c54c38f18b;
    }
    else if (uVar7 == 0x1c24c208d8aea3d3) {
      local_2f8 = 0xca44201ded9833e3;
      if (local_2ec < 0x5c) {
        local_2f8 = 0x8076f61384eca29a;
      }
      local_300 = 0x4ec250e75b0e6bc4;
    }
    else if (uVar7 == 0x1eec4c239f450ad8) {
      local_f8 = local_140;
      local_2a8 = (short)*local_140;
      local_2f8 = 0xd375c145e6853715;
      local_300 = 0x1a4c657f0c60d181;
    }
    goto LAB_18006de10;
  }
  if ((longlong)uVar7 < 0x335777c33452af96) {
    if ((longlong)uVar7 < 0x29d98d4a8b18eb53) {
      if (uVar7 == 0x24795fed78194771) {
        local_138 = (ulonglong *)((longlong)local_2e8 + 6);
        local_2f8 = 0x1318b89c167e0117;
        if (local_228 == local_238) {
          local_2f8 = 0x4e789dcd3869243d;
        }
        local_300 = 0x90cefd930d8b06fa;
        local_2c8 = local_138;
      }
      else if (uVar7 == 0x2519bdb811d1c639) {
        local_2c0 = (ulonglong *)((longlong)local_2e0 + 4);
        local_2f8 = 0x672029f9ef64a41b;
        local_300 = 0x1b4346461c788ccc;
        goto LAB_1800704f7;
      }
      goto LAB_18006de10;
    }
    if (uVar7 == 0x29d98d4a8b18eb53) {
      local_120 = (ulonglong *)((longlong)local_1c8 + 2);
      local_2f8 = 0x7db45a584d61acf8;
      if (local_120 == local_278) {
        local_2f8 = 0xdf20ed8f67a5ce85;
      }
      local_300 = 0xa343823094b9e652;
      local_2c0 = local_278;
      goto LAB_18006de10;
    }
    if (uVar7 != 0x2bc58d7e5bb9e498) {
      if (uVar7 == 0x32902dc79a31d2ec) {
        local_2f8 = 0x775b93f6671b336c;
        if (local_2ee < 0x5c) {
          local_2f8 = 0x9f230ed02e92eaf3;
        }
        local_300 = 0x4b34723decd8e477;
      }
      goto LAB_18006de10;
    }
    local_2f8 = 0x5952a2a3e68bf17e;
    if (local_2d2 == 0x2e) {
      local_2f8 = 0x8bbfbec8c1f27bd2;
    }
    local_300 = 0x5509de96f4105915;
  }
  else {
    if (0x35cd6b8e06e37d39 < (longlong)uVar7) {
      if (uVar7 == 0x35cd6b8e06e37d3a) {
        local_2f8 = 0x8d0f2699ef21658c;
        local_300 = 0xde1c0204703a1407;
      }
      else if (uVar7 == 0x37622c232fe93755) {
        local_2f8 = 0xd838200c98184318;
        if (local_2ec == 0x2f) {
          local_2f8 = 0xe59ccc3b2cc04dbc;
        }
        local_300 = 0x3b1cf011a765e8f0;
      }
      else if (uVar7 == 0x3a1433723093ba9f) {
        local_2f8 = 0x1e3f9b5ffb4ec752;
        if (local_298 < 0x5c) {
          local_2f8 = 0xd57086b66d87d9aa;
        }
        local_300 = 0x70e1398ef783b462;
      }
      goto LAB_18006de10;
    }
    if (uVar7 != 0x335777c33452af96) {
      if (uVar7 == 0x33a046f7636ca48f) {
        local_2f8 = 0xde1258a45b3cc2cd;
        if (local_2ac == 0x5c) {
          local_2f8 = 0x5547bd230291595c;
        }
        local_300 = 0x35ed45803ecda625;
      }
      goto LAB_18006de10;
    }
    local_2f8 = 0x2c900e2c00d2a2c1;
    if (local_2d2 == 0x3f) {
      local_2f8 = 0xfe7d124727ab286d;
    }
    local_300 = 0x20cb721912490aaa;
  }
  local_2c8 = local_200;
  goto LAB_18006de10;
}


