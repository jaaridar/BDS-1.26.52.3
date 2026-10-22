/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3b00e0 (ELF vaddr 0xd2b00e0)
 * Label: callee-of:0xce09160
 * Body:  [[0d3b00e0, 0d3b0701] [0d3b0710, 0d3b073e] [0d3b0740, 0d3b08d4] [0d3b08e0, 0d3b0916] [0d3b0920, 0d3b0938]]
 * Ghidra: FUN_0d3b00e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3b00e0(byte *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  byte *pbVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined1 uStack_59;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_38;
  
  uStack_58 = &UNK_01410416;
  uStack_50 = 4;
  lVar11 = param_2 + 8;
  lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
  param_2 = param_2 + 0x10;
  if (lVar8 == param_2) {
LAB_0d3b0169:
    uStack_58 = &UNK_011e4bcf;
    uStack_50 = 0x10;
    lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
    if (lVar8 != param_2) {
      if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
      puStack_38 = &uStack_59;
      lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                        (&puStack_38,lVar8 + 0x38);
      if (lVar8 != 0) {
        uStack_58 = &UNK_011e4bcf;
        uStack_50 = 0x10;
        goto LAB_0d3b01dc;
      }
    }
  }
  else {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
    puStack_38 = &uStack_59;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&puStack_38,lVar8 + 0x38);
    if (lVar8 == 0) goto LAB_0d3b0169;
    uStack_58 = &UNK_01410416;
    uStack_50 = 4;
LAB_0d3b01dc:
    lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
    if (lVar8 == param_2) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*(int *)(lVar8 + 0x60) == 8) {
        lVar12 = lVar8 + 0x38;
      }
    }
    pbVar10 = &UNK_01e79d90;
    if (lVar12 != 0) {
      pbVar10 = (byte *)(lVar12 + 8);
    }
    if (param_1 != pbVar10) {
      bVar5 = *pbVar10;
      if ((*param_1 & 1) == 0) {
        if ((bVar5 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pbVar10 + 0x10);
          uVar7 = *(undefined4 *)(pbVar10 + 4);
          uVar3 = *(undefined4 *)(pbVar10 + 8);
          uVar4 = *(undefined4 *)(pbVar10 + 0xc);
          *(undefined4 *)param_1 = *(undefined4 *)pbVar10;
          *(undefined4 *)(param_1 + 4) = uVar7;
          *(undefined4 *)(param_1 + 8) = uVar3;
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          func_0x04885070(param_1,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
        }
      }
      else {
        bVar18 = (bVar5 & 1) != 0;
        pbVar9 = pbVar10 + 1;
        if (bVar18) {
          pbVar9 = *(byte **)(pbVar10 + 0x10);
        }
        uVar14 = (ulong)(bVar5 >> 1);
        if (bVar18) {
          uVar14 = *(ulong *)(pbVar10 + 8);
        }
        func_0x04885120(param_1,pbVar9,uVar14);
      }
    }
  }
  uStack_58 = &UNK_0142cb75;
  uStack_50 = 6;
  lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
  if (lVar8 == param_2) {
LAB_0d3b02f6:
    bVar5 = *param_1;
    if ((param_1[0x18] & 1) == 0) {
      if ((bVar5 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)param_1;
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xc);
      }
      else {
        func_0x04885070(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8))
        ;
      }
    }
    else {
      bVar18 = (bVar5 & 1) != 0;
      pbVar10 = param_1 + 1;
      if (bVar18) {
        pbVar10 = *(byte **)(param_1 + 0x10);
      }
      uVar14 = (ulong)(bVar5 >> 1);
      if (bVar18) {
        uVar14 = *(ulong *)(param_1 + 8);
      }
LAB_0d3b038f:
      func_0x04885120(param_1 + 0x18,pbVar10,uVar14);
    }
  }
  else {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
    puStack_38 = &uStack_59;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&puStack_38,lVar8 + 0x38);
    if (lVar8 == 0) goto LAB_0d3b02f6;
    uStack_58 = &UNK_0142cb75;
    uStack_50 = 6;
    lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
    if (lVar8 == param_2) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*(int *)(lVar8 + 0x60) == 8) {
        lVar12 = lVar8 + 0x38;
      }
    }
    pbVar9 = &UNK_01e79d90;
    if (lVar12 != 0) {
      pbVar9 = (byte *)(lVar12 + 8);
    }
    pbVar10 = param_1 + 0x18;
    if (pbVar10 != pbVar9) {
      bVar5 = *pbVar9;
      if ((*pbVar10 & 1) != 0) {
        bVar18 = (bVar5 & 1) != 0;
        pbVar10 = pbVar9 + 1;
        if (bVar18) {
          pbVar10 = *(byte **)(pbVar9 + 0x10);
        }
        uVar14 = (ulong)(bVar5 >> 1);
        if (bVar18) {
          uVar14 = *(ulong *)(pbVar9 + 8);
        }
        goto LAB_0d3b038f;
      }
      if ((bVar5 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pbVar9 + 0x10);
        uVar7 = *(undefined4 *)(pbVar9 + 4);
        uVar3 = *(undefined4 *)(pbVar9 + 8);
        uVar4 = *(undefined4 *)(pbVar9 + 0xc);
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        *(undefined4 *)(param_1 + 0x24) = uVar4;
      }
      else {
        func_0x04885070(pbVar10,*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
      }
    }
  }
  uStack_58 = &UNK_01283720;
  uStack_50 = 0xb;
  lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
  if (lVar8 == param_2) {
LAB_0d3b0401:
    uStack_58 = &UNK_012009af;
    uStack_50 = 4;
    lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
    if (lVar8 != param_2) {
      if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
      puStack_38 = &uStack_59;
      lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                        (&puStack_38,lVar8 + 0x38);
      if (lVar8 != 0) {
        uStack_58 = &UNK_012009af;
        uStack_50 = 4;
        goto LAB_0d3b0474;
      }
    }
  }
  else {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
    puStack_38 = &uStack_59;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&puStack_38,lVar8 + 0x38);
    if (lVar8 == 0) goto LAB_0d3b0401;
    uStack_58 = &UNK_01283720;
    uStack_50 = 0xb;
LAB_0d3b0474:
    lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
    if (lVar8 == param_2) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*(int *)(lVar8 + 0x60) == 8) {
        lVar12 = lVar8 + 0x38;
      }
    }
    pbVar10 = &UNK_01e79d90;
    if (lVar12 != 0) {
      pbVar10 = (byte *)(lVar12 + 8);
    }
    pbVar9 = param_1 + 0x30;
    if (pbVar9 != pbVar10) {
      bVar5 = *pbVar10;
      if ((*pbVar9 & 1) == 0) {
        if ((bVar5 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(pbVar10 + 0x10);
          uVar7 = *(undefined4 *)(pbVar10 + 4);
          uVar3 = *(undefined4 *)(pbVar10 + 8);
          uVar4 = *(undefined4 *)(pbVar10 + 0xc);
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar10;
          *(undefined4 *)(param_1 + 0x34) = uVar7;
          *(undefined4 *)(param_1 + 0x38) = uVar3;
          *(undefined4 *)(param_1 + 0x3c) = uVar4;
        }
        else {
          func_0x04885070(pbVar9,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
        }
      }
      else {
        bVar18 = (bVar5 & 1) != 0;
        pbVar16 = pbVar10 + 1;
        if (bVar18) {
          pbVar16 = *(byte **)(pbVar10 + 0x10);
        }
        uVar14 = (ulong)(bVar5 >> 1);
        if (bVar18) {
          uVar14 = *(ulong *)(pbVar10 + 8);
        }
        func_0x04885120(pbVar9,pbVar16,uVar14);
      }
    }
  }
  uStack_58 = &UNK_011e4be0;
  uStack_50 = 0xb;
  lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
  if (lVar8 != param_2) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
    puStack_38 = &uStack_59;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&puStack_38,lVar8 + 0x38);
    if (lVar8 != 0) {
      uStack_58 = &UNK_011e4be0;
      uStack_50 = 0xb;
      lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
      if (lVar8 == param_2) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        if (*(int *)(lVar8 + 0x60) == 8) {
          lVar12 = lVar8 + 0x38;
        }
      }
      pbVar10 = &UNK_01e79d90;
      if (lVar12 != 0) {
        pbVar10 = (byte *)(lVar12 + 8);
      }
      pbVar9 = param_1 + 0x48;
      if (pbVar9 != pbVar10) {
        bVar5 = *pbVar10;
        if ((*pbVar9 & 1) == 0) {
          if ((bVar5 & 1) == 0) {
            *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(pbVar10 + 0x10);
            uVar7 = *(undefined4 *)(pbVar10 + 4);
            uVar3 = *(undefined4 *)(pbVar10 + 8);
            uVar4 = *(undefined4 *)(pbVar10 + 0xc);
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar10;
            *(undefined4 *)(param_1 + 0x4c) = uVar7;
            *(undefined4 *)(param_1 + 0x50) = uVar3;
            *(undefined4 *)(param_1 + 0x54) = uVar4;
          }
          else {
            func_0x04885070(pbVar9,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
          }
        }
        else {
          bVar18 = (bVar5 & 1) != 0;
          pbVar16 = pbVar10 + 1;
          if (bVar18) {
            pbVar16 = *(byte **)(pbVar10 + 0x10);
          }
          uVar14 = (ulong)(bVar5 >> 1);
          if (bVar18) {
            uVar14 = *(ulong *)(pbVar10 + 8);
          }
          func_0x04885120(pbVar9,pbVar16,uVar14);
        }
      }
    }
  }
  uStack_58 = &UNK_012b5ccc;
  uStack_50 = 5;
  lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
  if (lVar8 != param_2) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
    puStack_38 = &uStack_59;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&puStack_38,lVar8 + 0x38);
    if (lVar8 == 0) goto LAB_0d3b079b;
    uStack_58 = &UNK_012b5ccc;
    uStack_50 = 5;
    lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
    plVar15 = _DAT_0f71ff08;
    if (lVar8 == param_2) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*(int *)(lVar8 + 0x60) == 8) {
        lVar12 = lVar8 + 0x38;
      }
    }
    pbVar10 = &UNK_01e79d90;
    if (lVar12 != 0) {
      pbVar10 = (byte *)(lVar12 + 8);
    }
    if ((*pbVar10 & 1) == 0) {
      uStack_48 = *(undefined8 *)(pbVar10 + 0x10);
      uStack_50 = *(ulong *)(pbVar10 + 8);
      uStack_58._0_1_ = (byte)*(undefined4 *)pbVar10;
      bVar5 = (byte)uStack_58;
      uStack_58 = *(undefined **)pbVar10;
      if (_DAT_0f71ff08 != (long *)0x0) goto LAB_0d3b06e4;
LAB_0d3b0773:
      uVar17 = uStack_48;
      if ((bVar5 & 1) == 0) goto LAB_0d3b079b;
    }
    else {
      FUN_0412e5e0(&uStack_58,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
      bVar5 = (byte)uStack_58;
      if (plVar15 == (long *)0x0) goto LAB_0d3b0773;
LAB_0d3b06e4:
      uVar17 = uStack_48;
      uVar14 = uStack_50;
      if ((bVar5 & 1) == 0) {
        do {
          bVar1 = *(byte *)(plVar15 + 3);
          if ((bVar1 & 1) == 0) {
            uVar14 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar14 = plVar15[4];
          }
          if (uVar14 == bVar5 >> 1) {
            if ((bVar1 & 1) == 0) {
              lVar8 = (long)plVar15 + 0x19;
            }
            else {
              lVar8 = plVar15[5];
            }
            iVar6 = func_0x0eee3000(lVar8,(long)&uStack_58 + 1,(ulong)(bVar5 >> 1));
            if (iVar6 == 0) goto LAB_0d3b0794;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        goto LAB_0d3b079b;
      }
      do {
        bVar5 = *(byte *)(plVar15 + 3);
        if ((bVar5 & 1) == 0) {
          uVar13 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar13 = plVar15[4];
        }
        if (uVar13 == uVar14) {
          if ((bVar5 & 1) == 0) {
            lVar8 = (long)plVar15 + 0x19;
          }
          else {
            lVar8 = plVar15[5];
          }
          iVar6 = func_0x0eee3000(lVar8,uVar17,uVar14);
          if (iVar6 == 0) goto LAB_0d3b077e;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    plVar15 = (long *)0x0;
LAB_0d3b077e:
    func_0x0412a280(uVar17,(ulong)uStack_58 & 0xfffffffffffffffe);
    if (plVar15 != (long *)0x0) {
LAB_0d3b0794:
      param_1[0x60] = *(byte *)(plVar15 + 2);
    }
  }
LAB_0d3b079b:
  uStack_58 = &UNK_01250538;
  uStack_50 = 0x12;
  lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
  if (lVar8 != param_2) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) goto LAB_0d3b0933;
    puStack_38 = &uStack_59;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&puStack_38,lVar8 + 0x38);
    if (lVar8 != 0) {
      uStack_58 = &UNK_01250538;
      uStack_50 = 0x12;
      lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
      if ((lVar8 == param_2) || (*(int *)(lVar8 + 0x60) != 3)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(lVar8 + 0x40);
      }
      *(undefined4 *)(param_1 + 100) = uVar7;
    }
  }
  uStack_58 = &UNK_014dc0ed;
  uStack_50 = 0x12;
  lVar8 = func_0x0d6c97a0(lVar11,&uStack_58);
  if (lVar8 != param_2) {
    if ((ulong)*(uint *)(lVar8 + 0x60) == 0xffffffff) {
LAB_0d3b0933:
      func_0x04931450();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puStack_38 = &uStack_59;
    lVar8 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar8 + 0x60) * 8))
                      (&puStack_38,lVar8 + 0x38);
    if (lVar8 != 0) {
      uStack_58 = &UNK_014dc0ed;
      uStack_50 = 0x12;
      lVar11 = func_0x0d6c97a0(lVar11,&uStack_58);
      if ((lVar11 == param_2) || (*(int *)(lVar11 + 0x60) != 3)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(lVar11 + 0x40);
      }
      *(undefined4 *)(param_1 + 0x68) = uVar7;
    }
  }
  return;
}


