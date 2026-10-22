/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb2a7d30 (ELF vaddr 0xb1a7d30)
 * Label: string:Spawn Rules for 'heightmap' in {} must use a registered heig
 * Body:  [[0b2a7d30, 0b2a7daa] [0b2a7db0, 0b2a7dde] [0b2a7de0, 0b2a7ec5] [0b2a7ed0, 0b2a7efd] [0b2a7f00, 0b2a7fe5] [0b2a7ff0, 0b2a801d] [0b2a8020, 0b2a810a] [0b2a8110, 0b2a813d] [0b2a8140, 0b2a81f4]]
 * Ghidra: FUN_0b2a7d30
 */


void FUN_0b2a7d30(long param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  bool bVar10;
  byte *pbStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  byte *pbStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  byte *pbStack_48;
  ulong uStack_40;
  
  if (param_2[0x78] != 1) {
    return;
  }
  bVar1 = param_2[0x18];
  if ((bVar1 & 1) == 0) {
    uVar8 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 0x20);
  }
  if (uVar8 != 0) {
    if ((bVar1 & 1) == 0) {
      pbVar9 = param_2 + 0x19;
    }
    else {
      pbVar9 = *(byte **)(param_2 + 0x28);
    }
    pbVar2 = *(byte **)(*(long *)(param_1 + 8) + 0x78);
    pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 0x80);
    pbVar6 = pbVar2;
    if (pbVar2 == pbVar3) {
LAB_0b2a7df3:
      if ((pbVar6 != pbVar3) && ((~((int)pbVar6 - (int)pbVar2) & 0x1fffe0U) != 0))
      goto LAB_0b2a7e74;
    }
    else {
      do {
        bVar1 = *pbVar6;
        if ((bVar1 & 1) == 0) {
          uVar5 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar5 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar8 == uVar5) {
          if ((bVar1 & 1) == 0) {
            pbVar7 = pbVar6 + 1;
          }
          else {
            pbVar7 = *(byte **)(pbVar6 + 0x10);
          }
          iVar4 = func_0x0eee3000(pbVar9,pbVar7,uVar8);
          if (iVar4 == 0) goto LAB_0b2a7df3;
        }
        pbVar6 = pbVar6 + 0x20;
      } while (pbVar6 != pbVar3);
    }
    bVar10 = (*param_2 & 1) != 0;
    pbStack_78 = param_2 + 1;
    if (bVar10) {
      pbStack_78 = *(byte **)(param_2 + 0x10);
    }
    uStack_70 = (ulong)(*param_2 >> 1);
    if (bVar10) {
      uStack_70 = *(ulong *)(param_2 + 8);
    }
    func_0x0470d9a0(&bStack_60,&UNK_013d30f4,0x4b,0xd,&pbStack_78);
    func_0x0d6b16c0(param_3,1,&bStack_60);
    if ((bStack_60 & 1) != 0) {
      func_0x0412a280(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
    }
  }
LAB_0b2a7e74:
  bVar1 = param_2[0x30];
  if ((bVar1 & 1) == 0) {
    uVar8 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 0x38);
  }
  if (uVar8 != 0) {
    if ((bVar1 & 1) == 0) {
      pbVar9 = param_2 + 0x31;
    }
    else {
      pbVar9 = *(byte **)(param_2 + 0x40);
    }
    pbVar2 = *(byte **)(*(long *)(param_1 + 8) + 0x60);
    pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 0x68);
    pbVar6 = pbVar2;
    if (pbVar2 == pbVar3) {
LAB_0b2a7f13:
      if ((pbVar6 != pbVar3) &&
         ((char)((char)((uint)((int)pbVar6 - (int)pbVar2) >> 4) * -0x33) != -1)) goto LAB_0b2a7f94;
    }
    else {
      do {
        bVar1 = *pbVar6;
        if ((bVar1 & 1) == 0) {
          uVar5 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar5 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar8 == uVar5) {
          if ((bVar1 & 1) == 0) {
            pbVar7 = pbVar6 + 1;
          }
          else {
            pbVar7 = *(byte **)(pbVar6 + 0x10);
          }
          iVar4 = func_0x0eee3000(pbVar9,pbVar7,uVar8);
          if (iVar4 == 0) goto LAB_0b2a7f13;
        }
        pbVar6 = pbVar6 + 0x50;
      } while (pbVar6 != pbVar3);
    }
    bVar10 = (*param_2 & 1) != 0;
    pbStack_98 = param_2 + 1;
    if (bVar10) {
      pbStack_98 = *(byte **)(param_2 + 0x10);
    }
    uStack_90 = (ulong)(*param_2 >> 1);
    if (bVar10) {
      uStack_90 = *(ulong *)(param_2 + 8);
    }
    func_0x0470d9a0(&pbStack_78,&UNK_012fe20b,0x46,0xd,&pbStack_98);
    func_0x0d6b16c0(param_3,1,&pbStack_78);
    if (((ulong)pbStack_78 & 1) != 0) {
      func_0x0412a280(uStack_68,(ulong)pbStack_78 & 0xfffffffffffffffe);
    }
  }
LAB_0b2a7f94:
  bVar1 = param_2[0x60];
  if ((bVar1 & 1) == 0) {
    uVar8 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 0x68);
  }
  if (uVar8 != 0) {
    if ((bVar1 & 1) == 0) {
      pbVar9 = param_2 + 0x61;
    }
    else {
      pbVar9 = *(byte **)(param_2 + 0x70);
    }
    pbVar2 = *(byte **)(*(long *)(param_1 + 8) + 0x30);
    pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 0x38);
    pbVar6 = pbVar2;
    if (pbVar2 == pbVar3) {
LAB_0b2a8033:
      if ((pbVar6 != pbVar3) &&
         ((short)((short)((uint)((int)pbVar6 - (int)pbVar2) >> 4) * -0x3333) != -1))
      goto LAB_0b2a80b9;
    }
    else {
      do {
        bVar1 = *pbVar6;
        if ((bVar1 & 1) == 0) {
          uVar5 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar5 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar8 == uVar5) {
          if ((bVar1 & 1) == 0) {
            pbVar7 = pbVar6 + 1;
          }
          else {
            pbVar7 = *(byte **)(pbVar6 + 0x10);
          }
          iVar4 = func_0x0eee3000(pbVar9,pbVar7,uVar8);
          if (iVar4 == 0) goto LAB_0b2a8033;
        }
        pbVar6 = pbVar6 + 0x50;
      } while (pbVar6 != pbVar3);
    }
    bVar10 = (*param_2 & 1) != 0;
    pbStack_b8 = param_2 + 1;
    if (bVar10) {
      pbStack_b8 = *(byte **)(param_2 + 0x10);
    }
    uStack_b0 = (ulong)(*param_2 >> 1);
    if (bVar10) {
      uStack_b0 = *(ulong *)(param_2 + 8);
    }
    func_0x0470d9a0(&pbStack_98,&UNK_013ece22,0x5f,0xd,&pbStack_b8);
    func_0x0d6b16c0(param_3,1,&pbStack_98);
    if (((ulong)pbStack_98 & 1) != 0) {
      func_0x0412a280(uStack_88,(ulong)pbStack_98 & 0xfffffffffffffffe);
    }
  }
LAB_0b2a80b9:
  bVar1 = param_2[0x48];
  if ((bVar1 & 1) == 0) {
    uVar8 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 0x50);
  }
  if (uVar8 != 0) {
    if ((bVar1 & 1) == 0) {
      pbVar9 = param_2 + 0x49;
    }
    else {
      pbVar9 = *(byte **)(param_2 + 0x58);
    }
    pbVar2 = *(byte **)(*(long *)(param_1 + 8) + 0x18);
    pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 0x20);
    pbVar6 = pbVar2;
    if (pbVar2 == pbVar3) {
LAB_0b2a8153:
      if ((pbVar6 != pbVar3) &&
         ((short)((short)((uint)((int)pbVar6 - (int)pbVar2) >> 4) * -0x3333) != -1)) {
        return;
      }
    }
    else {
      do {
        bVar1 = *pbVar6;
        if ((bVar1 & 1) == 0) {
          uVar5 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar5 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar8 == uVar5) {
          if ((bVar1 & 1) == 0) {
            pbVar7 = pbVar6 + 1;
          }
          else {
            pbVar7 = *(byte **)(pbVar6 + 0x10);
          }
          iVar4 = func_0x0eee3000(pbVar9,pbVar7,uVar8);
          if (iVar4 == 0) goto LAB_0b2a8153;
        }
        pbVar6 = pbVar6 + 0x50;
      } while (pbVar6 != pbVar3);
    }
    bVar10 = (*param_2 & 1) != 0;
    pbStack_48 = param_2 + 1;
    if (bVar10) {
      pbStack_48 = *(byte **)(param_2 + 0x10);
    }
    uStack_40 = (ulong)(*param_2 >> 1);
    if (bVar10) {
      uStack_40 = *(ulong *)(param_2 + 8);
    }
    func_0x0470d9a0(&pbStack_b8,&UNK_013186b0,0x54,0xd,&pbStack_48);
    func_0x0d6b16c0(param_3,1,&pbStack_b8);
    if (((ulong)pbStack_b8 & 1) != 0) {
      func_0x0412a280(uStack_a8,(ulong)pbStack_b8 & 0xfffffffffffffffe);
    }
  }
  return;
}


