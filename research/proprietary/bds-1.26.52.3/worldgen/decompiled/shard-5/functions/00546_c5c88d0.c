/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c88d0 (ELF vaddr 0xc5c88d0)
 * Label: callee2-of:0xcb422f0
 * Body:  [[0c6c88d0, 0c6c8b0e] [0c6c8b10, 0c6c8b5b] [0c6c8b60, 0c6c8caa] [0c6c8cb0, 0c6c8d05] [0c6c8d10, 0c6c90e2] [0c6c90f0, 0c6c93b2] [0c6c93c0, 0c6c9459] [0c6c94a2, 0c6c9546]]
 * Ghidra: FUN_0c6c88d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0c6c88d0(long param_1,uint param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_RDX;
  undefined *puVar15;
  long unaff_RBX;
  long *plVar16;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined *puVar20;
  undefined8 unaff_R15;
  undefined *puVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 uStack_b9;
  byte **ppbStack_b8;
  byte *apbStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined4 uStack_7f;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  uVar4 = (ushort)param_2;
  lVar14 = param_1 + 0x220;
  func_0x0412d550(lVar14);
  puVar20 = (undefined *)(ulong)param_2;
  puVar15 = *(undefined **)(param_1 + 0x2b8);
  puVar17 = (undefined *)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
  if (puVar15 != (undefined *)0x0) {
    uVar9 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      puVar21 = (undefined *)(ulong)(param_2 & (int)puVar15 - 1U);
    }
    else {
      puVar21 = puVar20;
      if (puVar15 <= puVar20) {
        puVar21 = (undefined *)(ulong)(ushort)(uVar4 % (ushort)puVar15);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x2b0) + (long)puVar21 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if ((undefined *)plVar10[1] == puVar20) {
            if (*(ushort *)(plVar10 + 2) == uVar4) goto LAB_0c6c8d99;
          }
          else if ((undefined *)((ulong)plVar10[1] & (ulong)(puVar15 + -1)) != puVar21) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar12 = (undefined *)plVar10[1];
          if (puVar12 == puVar20) {
            if (*(ushort *)(plVar10 + 2) == uVar4) goto LAB_0c6c8d99;
          }
          else {
            if (puVar15 <= puVar12) {
              if (((ulong)puVar12 | (ulong)puVar15) >> 0x20 == 0) {
                if ((undefined *)(((ulong)puVar12 & 0xffffffff) % ((ulong)puVar15 & 0xffffffff)) ==
                    puVar21) goto LAB_0c6c8a8a;
                break;
              }
              puVar12 = (undefined *)((ulong)puVar12 % (ulong)puVar15);
            }
            if (puVar12 != puVar21) break;
          }
LAB_0c6c8a8a:
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_0c6c89d3:
  func_0x0412d610(lVar14);
  if ((char)puVar17 == '\0') {
    return unaff_RBX;
  }
  uStack_38 = 1;
  lStack_48 = lVar14;
  lStack_40 = lVar14;
  func_0x0412d450(lVar14);
  puVar15 = *(undefined **)(param_1 + 0x2b8);
  if (puVar15 != (undefined *)0x0) {
    uVar9 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      puVar21 = (undefined *)(ulong)(param_2 & (int)puVar15 - 1U);
    }
    else {
      puVar21 = puVar20;
      if (puVar15 <= puVar20) {
        puVar21 = (undefined *)(ulong)(ushort)(uVar4 % (ushort)puVar15);
      }
    }
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x2b0) + (long)puVar21 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar2, plVar10 != (long *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if ((undefined *)plVar10[1] == puVar20) {
            if (*(ushort *)(plVar10 + 2) == uVar4) goto LAB_0c6c930c;
          }
          else if ((undefined *)((ulong)plVar10[1] & (ulong)(puVar15 + -1)) != puVar21) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar12 = (undefined *)plVar10[1];
          if (puVar12 == puVar20) {
            if (*(ushort *)(plVar10 + 2) == uVar4) goto LAB_0c6c930c;
          }
          else {
            if (puVar15 <= puVar12) {
              if (((ulong)puVar12 | (ulong)puVar15) >> 0x20 == 0) {
                if ((undefined *)(((ulong)puVar12 & 0xffffffff) % ((ulong)puVar15 & 0xffffffff)) ==
                    puVar21) goto LAB_0c6c8b1c;
                break;
              }
              puVar12 = (undefined *)((ulong)puVar12 % (ulong)puVar15);
            }
            if (puVar12 != puVar21) break;
          }
LAB_0c6c8b1c:
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0xb0);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 9) goto LAB_0c6c8bb7;
LAB_0c6c8be9:
    lVar14 = *(long *)(param_1 + 0x200);
  }
  else {
    if (*(long *)(param_1 + 0xb8) != 9) goto LAB_0c6c8be9;
LAB_0c6c8bb7:
    if ((bVar1 & 1) == 0) {
      plVar10 = (long *)(param_1 + 0xb1);
    }
    else {
      plVar10 = *(long **)(param_1 + 0xc0);
    }
    if ((char)plVar10[1] != 't' || *plVar10 != 0x66617263656e696d) goto LAB_0c6c8be9;
    puVar17 = &UNK_0f47e0b0;
    puStack_68 = &UNK_0f47e0b0;
    puStack_60 = &uStack_58;
    uStack_58 = 0;
    uStack_50 = 0;
    bStack_80 = 8;
    uStack_7f = 0x656d616e;
    uStack_7b = 0;
    if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
      uStack_88 = *(undefined8 *)(param_1 + 0xe0);
      uStack_98 = *(undefined8 *)(param_1 + 0xd0);
      uStack_90 = *(undefined8 *)(param_1 + 0xd8);
    }
    else {
      func_0x0412e5e0(&uStack_98,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8));
    }
    apbStack_b0[0] = &bStack_80;
    lVar14 = func_0x0d6c9580(&puStack_60,apbStack_b0[0],&UNK_01563a4f,apbStack_b0,&ppbStack_b8);
    if ((ulong)*(uint *)(lVar14 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar14 + 0x60) * 8))(apbStack_b0,lVar14 + 0x38);
    }
    uVar13 = uStack_88;
    uVar5 = (undefined4)uStack_98;
    uVar6 = uStack_98._4_4_;
    uVar7 = (undefined4)uStack_90;
    uVar8 = uStack_90._4_4_;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    *(undefined **)(lVar14 + 0x38) = &UNK_0f47e5e8;
    *(undefined4 *)(lVar14 + 0x40) = uVar5;
    *(undefined4 *)(lVar14 + 0x44) = uVar6;
    *(undefined4 *)(lVar14 + 0x48) = uVar7;
    *(undefined4 *)(lVar14 + 0x4c) = uVar8;
    *(undefined8 *)(lVar14 + 0x50) = uVar13;
    *(undefined4 *)(lVar14 + 0x60) = 8;
    if ((bStack_80 & 1) != 0) {
      func_0x0412a280(uStack_70,
                      CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,bStack_80))) &
                      0xfffffffffffffffe);
    }
    apbStack_b0[0] = (byte *)CONCAT35(apbStack_b0[0]._5_3_,0x6c617606);
    ppbStack_b8 = apbStack_b0;
    lVar14 = func_0x0d6c9580(&puStack_60,apbStack_b0,&UNK_01563a4f,&ppbStack_b8,&uStack_b9);
    if ((ulong)*(uint *)(lVar14 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar14 + 0x60) * 8))(&ppbStack_b8,lVar14 + 0x38)
      ;
    }
    *(undefined **)(lVar14 + 0x38) = &UNK_0f47e578;
    *(ushort *)(lVar14 + 0x40) = uVar4;
    *(undefined4 *)(lVar14 + 0x60) = 2;
    if (((ulong)apbStack_b0[0] & 1) != 0) {
      func_0x0412a280(uStack_a0,(ulong)apbStack_b0[0] & 0xfffffffffffffffe);
    }
    func_0x0c700540(&puStack_68,0);
    puStack_68 = &UNK_0f47e0b0;
    func_0x0d6c9500(&puStack_60,uStack_58);
    puVar15 = *(undefined **)(param_1 + 0x2b8);
    lVar14 = extraout_RDX;
  }
  if (puVar15 != (undefined *)0x0) {
    uVar9 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      puVar17 = (undefined *)(ulong)(param_2 & (int)puVar15 - 1U);
    }
    else {
      puVar17 = puVar20;
      if (puVar15 <= puVar20) {
        puVar17 = (undefined *)(ulong)(ushort)(uVar4 % (ushort)puVar15);
      }
    }
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x2b0) + (long)puVar17 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar2, plVar10 != (long *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if ((undefined *)plVar10[1] == puVar20) {
            if (*(ushort *)(plVar10 + 2) == uVar4) goto LAB_0c6c930c;
          }
          else if ((undefined *)((ulong)plVar10[1] & (ulong)(puVar15 + -1)) != puVar17) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar21 = (undefined *)plVar10[1];
          if (puVar21 == puVar20) {
            if (*(ushort *)(plVar10 + 2) == uVar4) goto LAB_0c6c930c;
          }
          else {
            if (puVar15 <= puVar21) {
              if (((ulong)puVar21 | (ulong)puVar15) >> 0x20 == 0) {
                if ((undefined *)(((ulong)puVar21 & 0xffffffff) % ((ulong)puVar15 & 0xffffffff)) ==
                    puVar17) goto LAB_0c6c8cbc;
                break;
              }
              puVar21 = (undefined *)((ulong)puVar21 % (ulong)puVar15);
            }
            if (puVar21 != puVar17) break;
          }
LAB_0c6c8cbc:
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *plVar10 = 0;
  plVar10[1] = (long)puVar20;
  *(ushort *)(plVar10 + 2) = uVar4;
  plVar10[3] = lVar14;
  fVar23 = (float)(*(long *)(param_1 + 0x2c8) + 1);
  if ((long)puVar15 < 0) {
    fVar25 = (float)puVar15;
    fVar24 = *(float *)(param_1 + 0x2d0);
    if (puVar15 != (undefined *)0x0) goto LAB_0c6c8fae;
LAB_0c6c8fbf:
    uVar9 = 1;
    if ((undefined *)0x2 < puVar15) {
      uVar9 = (ulong)(((ulong)puVar15 & (ulong)(puVar15 + -1)) != 0);
    }
    puVar21 = (undefined *)(uVar9 | (long)puVar15 * 2);
    fVar23 = (float)func_0x0eee3ab0(fVar23 / fVar24);
    puVar17 = (undefined *)((long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23);
    if (puVar17 < puVar21) {
      puVar17 = puVar21;
    }
    puVar12 = (undefined *)0x2;
    if ((puVar17 == (undefined *)0x1) ||
       (puVar12 = puVar17, ((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0)) {
      bVar22 = puVar12 < puVar15;
      if (puVar12 <= puVar15) goto LAB_0c6c9157;
LAB_0c6c9036:
      if ((ulong)puVar12 >> 0x3d != 0) {
        uVar13 = FUN_04882eb0();
        if ((bStack_80 & 1) != 0) {
          func_0x0412a280(uStack_70,
                          CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,bStack_80))) &
                          0xfffffffffffffffe);
        }
        puStack_68 = puVar21;
        func_0x0d6c9500(plVar10,uStack_58);
        func_0x0525af10(&lStack_40);
        uVar13 = func_0x0eee2d70(uVar13);
        func_0x0412a280(plVar10,0x20);
        func_0x0525af10(&lStack_40);
        uVar13 = func_0x0eee2d70(uVar13);
        func_0x0525af10(&lStack_40);
        uVar13 = func_0x0eee2d70(uVar13);
        lVar11 = func_0x04882e20(uVar13);
        func_0x04882e20();
        lVar14 = FUN_0c6c88d0();
        if (lVar14 == 0) {
          lVar14 = *(long *)(lVar11 + 0x200);
        }
        return lVar14;
      }
      lVar14 = (long)puVar12 * 8;
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar14);
      if (lVar11 == 0) {
        func_0x0eec74c0(lVar14,0);
      }
      lVar3 = *(long *)(param_1 + 0x2b0);
      *(long *)(param_1 + 0x2b0) = lVar11;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,*(long *)(param_1 + 0x2b8) << 3);
        lVar11 = *(long *)(param_1 + 0x2b0);
      }
      *(undefined **)(param_1 + 0x2b8) = puVar12;
      func_0x0eee2dd0(lVar11,0,lVar14);
      plVar16 = *(long **)(param_1 + 0x2c0);
      if (plVar16 != (long *)0x0) {
        puVar17 = (undefined *)plVar16[1];
        puVar15 = puVar12 + -1;
        if (((ulong)puVar12 & (ulong)puVar15) == 0) {
          *(long *)(lVar11 + ((ulong)puVar17 & (ulong)puVar15) * 8) = param_1 + 0x2c0;
          uVar9 = (ulong)puVar17 & (ulong)puVar15;
          while (plVar19 = plVar16, plVar16 = (long *)*plVar19, plVar16 != (long *)0x0) {
            uVar18 = plVar16[1] & (ulong)puVar15;
            if (uVar18 != uVar9) {
              if (*(long *)(lVar11 + uVar18 * 8) == 0) {
                *(long **)(lVar11 + uVar18 * 8) = plVar19;
                uVar9 = uVar18;
              }
              else {
                *plVar19 = *plVar16;
                *plVar16 = **(undefined8 **)(lVar11 + uVar18 * 8);
                **(long **)(lVar11 + uVar18 * 8) = (long)plVar16;
                plVar16 = plVar19;
              }
            }
          }
        }
        else {
          if (puVar12 <= puVar17) {
            if (((ulong)puVar17 | (ulong)puVar12) >> 0x20 == 0) {
              puVar17 = (undefined *)(((ulong)puVar17 & 0xffffffff) % ((ulong)puVar12 & 0xffffffff))
              ;
            }
            else {
              puVar17 = (undefined *)((ulong)puVar17 % (ulong)puVar12);
            }
          }
          *(long *)(lVar11 + (long)puVar17 * 8) = param_1 + 0x2c0;
          plVar19 = (long *)*plVar16;
          while (plVar19 != (long *)0x0) {
            puVar15 = (undefined *)plVar19[1];
            if (puVar12 <= puVar15) {
              if (((ulong)puVar15 | (ulong)puVar12) >> 0x20 == 0) {
                puVar15 = (undefined *)
                          (((ulong)puVar15 & 0xffffffff) % ((ulong)puVar12 & 0xffffffff));
              }
              else {
                puVar15 = (undefined *)((ulong)puVar15 % (ulong)puVar12);
              }
            }
            if (puVar15 != puVar17) {
              if (*(long *)(lVar11 + (long)puVar15 * 8) == 0) {
                *(long **)(lVar11 + (long)puVar15 * 8) = plVar16;
                puVar17 = puVar15;
              }
              else {
                *plVar16 = *plVar19;
                *plVar19 = **(long **)(lVar11 + (long)puVar15 * 8);
                **(undefined8 **)(lVar11 + (long)puVar15 * 8) = plVar19;
                plVar19 = plVar16;
              }
            }
            plVar16 = plVar19;
            plVar19 = (long *)*plVar16;
          }
        }
      }
    }
    else {
      puVar12 = (undefined *)func_0x0412c3f0();
      puVar15 = *(undefined **)(param_1 + 0x2b8);
      bVar22 = puVar12 < puVar15;
      if (puVar15 < puVar12) goto LAB_0c6c9036;
LAB_0c6c9157:
      if (bVar22) {
        fVar23 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x2c8) /
                                        *(float *)(param_1 + 0x2d0));
        puVar17 = (undefined *)
                  ((long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23);
        if ((puVar15 < (undefined *)0x3) ||
           (uVar9 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555),
           uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
           1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          puVar17 = (undefined *)func_0x0412c3f0(puVar17);
        }
        else if ((undefined *)0x1 < puVar17) {
          lVar14 = 0x3f;
          if (puVar17 + -1 != (undefined *)0x0) {
            for (; (ulong)(puVar17 + -1) >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          puVar17 = (undefined *)(1L << (-((byte)lVar14 ^ 0x3f) & 0x3f));
        }
        if (puVar17 < puVar12) {
          puVar17 = puVar12;
        }
        if (puVar17 < puVar15) {
          puVar12 = puVar17;
          if (puVar17 != (undefined *)0x0) goto LAB_0c6c9036;
          lVar14 = *(long *)(param_1 + 0x2b0);
          *(undefined8 *)(param_1 + 0x2b0) = 0;
          if (lVar14 != 0) {
            func_0x0412a280(lVar14,*(long *)(param_1 + 0x2b8) << 3);
          }
          *(undefined8 *)(param_1 + 0x2b8) = 0;
        }
      }
    }
    puVar15 = *(undefined **)(param_1 + 0x2b8);
    if (((ulong)puVar15 & (ulong)(puVar15 + -1)) == 0) {
      puVar17 = (undefined *)(ulong)(param_2 & (int)puVar15 - 1U);
    }
    else {
      puVar17 = puVar20;
      if ((puVar15 <= puVar20) && (puVar15 <= puVar20)) {
        puVar17 = (undefined *)((ulong)puVar20 % ((ulong)puVar15 & 0xffffffff));
      }
    }
  }
  else {
    fVar25 = (float)(long)puVar15;
    fVar24 = *(float *)(param_1 + 0x2d0);
    if (puVar15 == (undefined *)0x0) goto LAB_0c6c8fbf;
LAB_0c6c8fae:
    if (fVar25 * fVar24 < fVar23) goto LAB_0c6c8fbf;
  }
  lVar14 = *(long *)(param_1 + 0x2b0);
  plVar16 = *(long **)(lVar14 + (long)puVar17 * 8);
  if (plVar16 == (long *)0x0) {
    *plVar10 = *(long *)(param_1 + 0x2c0);
    *(long **)(param_1 + 0x2c0) = plVar10;
    *(long *)(lVar14 + (long)puVar17 * 8) = param_1 + 0x2c0;
    if (*plVar10 != 0) {
      puVar17 = *(undefined **)(*plVar10 + 8);
      if (((ulong)puVar15 & (ulong)(puVar15 + -1)) == 0) {
        *(long **)(lVar14 + ((ulong)puVar17 & (ulong)(puVar15 + -1)) * 8) = plVar10;
      }
      else {
        if (puVar15 <= puVar17) {
          if (((ulong)puVar17 | (ulong)puVar15) >> 0x20 == 0) {
            *(long **)(lVar14 + (((ulong)puVar17 & 0xffffffff) % ((ulong)puVar15 & 0xffffffff)) * 8)
                 = plVar10;
            goto LAB_0c6c9305;
          }
          puVar17 = (undefined *)((ulong)puVar17 % (ulong)puVar15);
        }
        *(long **)(lVar14 + (long)puVar17 * 8) = plVar10;
      }
    }
  }
  else {
    *plVar10 = *plVar16;
    *plVar16 = (long)plVar10;
  }
LAB_0c6c9305:
  *(long *)(param_1 + 0x2c8) = *(long *)(param_1 + 0x2c8) + 1;
LAB_0c6c930c:
  lVar14 = plVar10[3];
  func_0x0412d520(lStack_48);
  return lVar14;
LAB_0c6c8d99:
  unaff_RBX = plVar10[3];
  puVar17 = (undefined *)0x0;
  goto LAB_0c6c89d3;
}


