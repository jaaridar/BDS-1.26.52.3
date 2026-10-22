/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbb1c7a0 (ELF vaddr 0xba1c7a0)
 * Label: caller-of-callee
 * Body:  [[0bb1c7a0, 0bb1c7fc] [0bb1c800, 0bb1c874] [0bb1c880, 0bb1c89c] [0bb1c8a0, 0bb1caf1] [0bb1cb00, 0bb1cb98] [0bb1cba0, 0bb1cc8b] [0bb1cc90, 0bb1cced] [0bb1ccf0, 0bb1cd32] [0bb1cd40, 0bb1cdc2] [0bb1cdd0, 0bb1ce37] [0bb1ce40, 0bb1ce70] [0bb1ce80, 0bb1ceb5] [0bb1cec0, 0bb1cf74] [0bb1cf80, 0bb1cfb1] [0bb1cfc0, 0bb1d23c] [0bb1d240, 0bb1d2c6] [0bb1d2d0, 0bb1d402] [0bb1d410, 0bb1d4ab] [0bb1d4d0, 0bb1d56e] [0bb1d672, 0bb1d8c6]]
 * Ghidra: FUN_0bb1c7a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bb1c7a0(uint *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  long *plVar1;
  ulong *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined7 *puVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  byte *pbVar23;
  byte *pbVar24;
  bool bVar25;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 auStack_1a2 [2];
  undefined1 uStack_1a0;
  undefined1 auStack_19f [4];
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined8 uStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint *puStack_108;
  undefined4 uStack_fc;
  byte bStack_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  undefined7 *puStack_e8;
  byte bStack_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  undefined7 *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined7 *puStack_98;
  ulong uStack_90;
  undefined4 uStack_88;
  uint uStack_78;
  byte *pbStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  
  pbStack_188 = (byte *)0x0;
  pbStack_180 = (byte *)0x0;
  pbStack_178 = (byte *)0x0;
  pbStack_190 = param_3;
  uStack_10c = param_4;
  puStack_108 = param_1;
  uStack_fc = param_5;
  if (param_2 == param_3) {
    uStack_168 = (byte *)0x0;
    pbStack_160 = (byte *)0x0;
    pbStack_158 = (byte *)0x0;
  }
  else {
    do {
      lVar18 = **(long **)(**(long **)(param_2 + 0xe8) + 8);
      if ((DAT_0f5ea4a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5ea4a0), iVar11 != 0)) {
        func_0x08b670e0(&DAT_0f5ea138);
        func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
        func_0x0410844d(&DAT_0f5ea4a0);
      }
      puVar2 = (ulong *)(lVar18 + 0xf8);
      cVar10 = (**(code **)(_DAT_0f5ea138 + 0xe8))(&DAT_0f5ea138,puVar2);
      if (cVar10 == '\0') {
        if ((*(byte *)puVar2 & 1) == 0) {
          pbStack_158 = *(byte **)(lVar18 + 0x108);
          uStack_168 = (byte *)*puVar2;
          pbStack_160 = *(byte **)(lVar18 + 0x100);
        }
        else {
          func_0x0412e5e0(&uStack_168,*(undefined8 *)(lVar18 + 0x108),
                          *(undefined8 *)(lVar18 + 0x100));
        }
      }
      else {
        (**(code **)(_DAT_0f5ea138 + 0x98))(&uStack_168,&DAT_0f5ea138,lVar18,puVar2);
      }
      uVar22 = *(undefined8 *)(**(long **)(**(long **)(param_2 + 0xe8) + 8) + 0x128);
      uVar4 = *(undefined8 *)(**(long **)(**(long **)(param_2 + 0xe8) + 8) + 0x130);
      uStack_78 = (uint)uVar4 & 0xffff;
      uStack_c8 = (byte *)CONCAT44(uStack_c8._4_4_,(int)((ulong)uVar22 >> 0x20));
      uStack_b8 = (byte *)(CONCAT44(uStack_b8._4_4_,(int)((ulong)uVar22 >> 0x10)) &
                          0xffffffff0000ffff);
      uStack_a8 = (byte *)(CONCAT44(uStack_a8._4_4_,(int)uVar22) & 0xffffffff0000ffff);
      puStack_98 = (undefined7 *)CONCAT44(puStack_98._4_4_,(uint)(ushort)((ulong)uVar4 >> 0x30));
      uStack_88 = (undefined4)((ulong)uVar4 >> 0x10);
      func_0x0470d9a0(&bStack_150,&UNK_01287ba2,0x28,0x122112,&uStack_c8);
      uStack_138 = *(undefined1 *)(lVar18 + 0x159);
      lVar18 = **(long **)(**(long **)(param_2 + 0xe8) + 8);
      uStack_130 = *(undefined8 *)(lVar18 + 0x138);
      uStack_128 = 0;
      uVar19 = *(ulong *)(lVar18 + 0x140);
      if ((uVar19 & 0x80000000000000) != 0) {
        lVar5 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
        lVar21 = lVar5 + 9;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
        if (lVar21 != 0 && plVar12 == (long *)0x0) {
          func_0x0eec74c0(lVar21,8);
        }
        *plVar12 = lVar5;
        func_0x0eee2f00(plVar12 + 1,uVar19 & 0xff00ffffffffffff,lVar5);
        *(undefined1 *)((long)plVar12 + lVar5 + 8) = 0;
        uVar19 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      uStack_120 = 0;
      uVar20 = *(ulong *)(lVar18 + 0x148);
      uStack_128 = uVar19;
      if ((uVar20 & 0x80000000000000) != 0) {
        lVar21 = *(long *)((uVar20 & 0xff00ffffffffffff) - 8);
        lVar18 = lVar21 + 9;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar12 == (long *)0x0) {
          func_0x0eec74c0(lVar18,8);
        }
        *plVar12 = lVar21;
        func_0x0eee2f00(plVar12 + 1,uVar20 & 0xff00ffffffffffff,lVar21);
        *(undefined1 *)((long)plVar12 + lVar21 + 8) = 0;
        uVar20 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      pbVar13 = pbStack_180;
      uStack_120 = uVar20;
      if (pbStack_180 < pbStack_178) {
        func_0x0bb1fcc0(pbStack_180,&uStack_168);
        pbStack_180 = pbVar13 + 0x50;
      }
      else {
        pbStack_180 = (byte *)func_0x0bb1f9a0(&pbStack_188,&uStack_168);
      }
      if ((uStack_120 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
      }
      uStack_120 = 0;
      if ((uStack_128 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
      }
      uStack_128 = 0;
      if ((bStack_150 & 1) != 0) {
        func_0x0412a280(uStack_140,CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_168 & 1) != 0) {
        func_0x0412a280(pbStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
      }
      param_2 = param_2 + 0x110;
    } while (param_2 != pbStack_190);
    uStack_168 = (byte *)0x0;
    pbStack_160 = (byte *)0x0;
    pbStack_158 = (byte *)0x0;
    pbStack_40 = pbStack_180;
    pbVar13 = pbStack_180;
    pbVar24 = pbStack_188;
    pbVar23 = pbStack_188;
    if (pbStack_188 != pbStack_180) {
      do {
        puVar2 = _DAT_0f6cd1a8;
        uStack_110 = (undefined4)CONCAT71((int7)((ulong)pbVar13 >> 8),1);
        pbStack_190 = pbVar24;
        if (_DAT_0f6cd1a0 != _DAT_0f6cd1a8) {
          puVar15 = _DAT_0f6cd1a0;
          do {
            pbVar23 = pbStack_190;
            if ((*puVar15 & 1) == 0) {
              uStack_b8 = (byte *)puVar15[2];
              uStack_c8 = (byte *)*puVar15;
              uStack_c0 = puVar15[1];
            }
            else {
              func_0x0412e5e0(&uStack_c8,puVar15[2],puVar15[1]);
            }
            uVar19 = (ulong)uStack_c8;
            bVar3 = *pbVar23;
            pbVar13 = (byte *)0x0;
            if ((bVar3 & 1) == 0) {
              uVar20 = (ulong)(bVar3 >> 1);
              if (((ulong)uStack_c8 & 1) == 0) goto LAB_0bb1cd1f;
LAB_0bb1cd52:
              if (uVar20 != uStack_c0) goto LAB_0bb1cd28;
LAB_0bb1cd5f:
              pbVar13 = pbVar24 + 1;
              if ((bVar3 & 1) != 0) {
                pbVar13 = *(byte **)(pbVar23 + 0x10);
              }
              uVar20 = (long)&uStack_c8 + 1;
              if (((ulong)uStack_c8 & 1) != 0) {
                uVar20 = (ulong)uStack_b8;
              }
              pbVar13 = (byte *)func_0x0eee3000(pbVar13,uVar20);
              bVar25 = (int)pbVar13 == 0;
            }
            else {
              uVar20 = *(ulong *)(pbVar23 + 8);
              if (((ulong)uStack_c8 & 1) != 0) goto LAB_0bb1cd52;
LAB_0bb1cd1f:
              if (uVar20 == ((ulong)uStack_c8 & 0xff) >> 1) goto LAB_0bb1cd5f;
LAB_0bb1cd28:
              bVar25 = false;
            }
            if ((uVar19 & 1) != 0) {
              pbVar13 = (byte *)func_0x0412a280(uStack_b8,(ulong)uStack_c8 & 0xfffffffffffffffe);
            }
            if (bVar25) {
              pbVar24 = pbStack_190;
              if ((char)uStack_fc != '\0') goto LAB_0bb1cc95;
              uStack_110 = 0;
              break;
            }
            puVar15 = puVar15 + 3;
          } while (puVar15 != puVar2);
        }
        pbStack_38 = pbStack_160;
        pbStack_60 = uStack_168;
        if ((long)pbStack_160 - (long)uStack_168 != 0) {
          pbStack_48 = pbStack_190 + 1;
          if ((*pbStack_190 & 1) == 0) {
            uVar19 = (ulong)(*pbStack_190 >> 1);
            pbVar13 = pbStack_48;
          }
          else {
            uVar19 = *(ulong *)(pbStack_190 + 8);
            pbVar13 = *(byte **)(pbStack_190 + 0x10);
          }
          lVar21 = ((long)pbStack_160 - (long)uStack_168 >> 4) * -0x3333333333333333;
          pbVar23 = uStack_168 + 0x10;
          lVar18 = 0;
          do {
            bVar3 = pbVar23[-0x10];
            if ((bVar3 & 1) == 0) {
              uVar20 = (ulong)(bVar3 >> 1);
            }
            else {
              uVar20 = *(ulong *)(pbVar23 + -8);
            }
            if (uVar20 == uVar19) {
              if ((bVar3 & 1) == 0) {
                pbVar24 = pbVar23 + -0xf;
              }
              else {
                pbVar24 = *(byte **)pbVar23;
              }
              iVar11 = func_0x0eee3000(pbVar24,pbVar13,uVar19);
              pbVar24 = pbStack_190;
              if (iVar11 == 0) {
                uVar17 = (uint)lVar18;
                if (-1 < (int)uVar17) {
                  if (((char)uStack_10c == '\0') &&
                     ((char)uStack_110 == '\0' && (int)uVar17 < (int)lVar21)) {
                    lVar18 = (ulong)(uVar17 & 0x7fffffff) * 0x50;
                    pbVar13 = (byte *)func_0x04fa7a10(pbStack_60 + lVar18 + 0x38,pbStack_190 + 0x38)
                    ;
                    if ((char)pbVar13 != '\0') {
                      pbVar23 = uStack_168 + lVar18;
                      if (pbVar23 != pbVar24) {
                        bVar3 = *pbVar24;
                        if ((*pbVar23 & 1) == 0) {
                          if ((bVar3 & 1) == 0) {
                            *(undefined8 *)(pbVar23 + 0x10) = *(undefined8 *)(pbVar24 + 0x10);
                            uVar6 = *(undefined4 *)(pbVar24 + 4);
                            uVar7 = *(undefined4 *)(pbVar24 + 8);
                            uVar8 = *(undefined4 *)(pbVar24 + 0xc);
                            *(undefined4 *)pbVar23 = *(undefined4 *)pbVar24;
                            *(undefined4 *)(pbVar23 + 4) = uVar6;
                            *(undefined4 *)(pbVar23 + 8) = uVar7;
                            *(undefined4 *)(pbVar23 + 0xc) = uVar8;
                          }
                          else {
                            func_0x04885070(pbVar23,*(undefined8 *)(pbVar24 + 0x10),
                                            *(undefined8 *)(pbVar24 + 8));
                          }
                        }
                        else {
                          bVar25 = (bVar3 & 1) != 0;
                          pbVar13 = pbStack_48;
                          if (bVar25) {
                            pbVar13 = *(byte **)(pbVar24 + 0x10);
                          }
                          uVar19 = (ulong)(bVar3 >> 1);
                          if (bVar25) {
                            uVar19 = *(ulong *)(pbVar24 + 8);
                          }
                          func_0x04885120(pbVar23,pbVar13,uVar19);
                        }
                        pbVar13 = pbVar23 + 0x18;
                        bVar3 = pbVar24[0x18];
                        if ((pbVar23[0x18] & 1) == 0) {
                          if ((bVar3 & 1) == 0) {
                            *(undefined8 *)(pbVar23 + 0x28) = *(undefined8 *)(pbVar24 + 0x28);
                            uVar6 = *(undefined4 *)(pbVar24 + 0x1c);
                            uVar7 = *(undefined4 *)(pbVar24 + 0x20);
                            uVar8 = *(undefined4 *)(pbVar24 + 0x24);
                            *(undefined4 *)pbVar13 = *(undefined4 *)(pbVar24 + 0x18);
                            *(undefined4 *)(pbVar23 + 0x1c) = uVar6;
                            *(undefined4 *)(pbVar23 + 0x20) = uVar7;
                            *(undefined4 *)(pbVar23 + 0x24) = uVar8;
                          }
                          else {
                            func_0x04885070(pbVar13,*(undefined8 *)(pbVar24 + 0x28),
                                            *(undefined8 *)(pbVar24 + 0x20));
                          }
                        }
                        else {
                          bVar25 = (bVar3 & 1) != 0;
                          pbVar16 = pbVar24 + 0x19;
                          if (bVar25) {
                            pbVar16 = *(byte **)(pbVar24 + 0x28);
                          }
                          uVar19 = (ulong)(bVar3 >> 1);
                          if (bVar25) {
                            uVar19 = *(ulong *)(pbVar24 + 0x20);
                          }
                          func_0x04885120(pbVar13,pbVar16,uVar19);
                        }
                      }
                      pbVar23[0x30] = pbVar24[0x30];
                      pbVar13 = *(byte **)(pbVar24 + 0x38);
                      *(byte **)(pbVar23 + 0x38) = pbVar13;
                      if ((*(ulong *)(pbVar23 + 0x40) & 0x80000000000000) != 0) {
                        pbVar13 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x28))
                                                    (&DAT_0f5463b0,
                                                     (*(ulong *)(pbVar23 + 0x40) &
                                                     0xff00ffffffffffff) - 8);
                      }
                      pbVar23[0x40] = 0;
                      pbVar23[0x41] = 0;
                      pbVar23[0x42] = 0;
                      pbVar23[0x43] = 0;
                      pbVar23[0x44] = 0;
                      pbVar23[0x45] = 0;
                      pbVar23[0x46] = 0;
                      pbVar23[0x47] = 0;
                      uVar19 = *(ulong *)(pbVar24 + 0x40);
                      if ((uVar19 & 0x80000000000000) != 0) {
                        lVar21 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
                        lVar18 = lVar21 + 9;
                        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))
                                                    (&DAT_0f5463b0,lVar18,8);
                        if (lVar18 != 0 && plVar12 == (long *)0x0) {
                          func_0x0eec74c0(lVar18,8);
                        }
                        *plVar12 = lVar21;
                        func_0x0eee2f00(plVar12 + 1,uVar19 & 0xff00ffffffffffff,lVar21);
                        *(undefined1 *)((long)plVar12 + lVar21 + 8) = 0;
                        pbVar13 = (byte *)0xff00ffffffffffff;
                        uVar19 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                      }
                      *(ulong *)(pbVar23 + 0x40) = uVar19;
                      if ((*(ulong *)(pbVar23 + 0x48) & 0x80000000000000) != 0) {
                        pbVar13 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x28))
                                                    (&DAT_0f5463b0,
                                                     (*(ulong *)(pbVar23 + 0x48) &
                                                     0xff00ffffffffffff) - 8);
                      }
                      pbVar23[0x48] = 0;
                      pbVar23[0x49] = 0;
                      pbVar23[0x4a] = 0;
                      pbVar23[0x4b] = 0;
                      pbVar23[0x4c] = 0;
                      pbVar23[0x4d] = 0;
                      pbVar23[0x4e] = 0;
                      pbVar23[0x4f] = 0;
                      uVar19 = *(ulong *)(pbVar24 + 0x48);
                      if ((uVar19 & 0x80000000000000) != 0) {
                        lVar21 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
                        lVar18 = lVar21 + 9;
                        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))
                                                    (&DAT_0f5463b0,lVar18,8);
                        if (lVar18 != 0 && plVar12 == (long *)0x0) {
                          func_0x0eec74c0(lVar18,8);
                        }
                        *plVar12 = lVar21;
                        func_0x0eee2f00(plVar12 + 1,uVar19 & 0xff00ffffffffffff,lVar21);
                        *(undefined1 *)((long)plVar12 + lVar21 + 8) = 0;
                        pbVar13 = (byte *)0xff00ffffffffffff;
                        uVar19 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                      }
                      *(ulong *)(pbVar23 + 0x48) = uVar19;
                    }
                    goto LAB_0bb1cc95;
                  }
                }
                break;
              }
            }
            lVar18 = lVar18 + 1;
            pbVar23 = pbVar23 + 0x50;
          } while (lVar21 + (ulong)(lVar21 == 0) != lVar18);
        }
        pbVar23 = pbStack_38;
        pbVar24 = pbStack_190;
        if (pbStack_38 < pbStack_158) {
          pbVar13 = (byte *)func_0x0bb1fcc0(pbStack_38,pbStack_190);
          pbStack_160 = pbVar23 + 0x50;
        }
        else {
          pbVar13 = (byte *)func_0x0bb1f9a0(&uStack_168,pbStack_190);
          pbStack_160 = pbVar13;
        }
LAB_0bb1cc95:
        pbVar24 = pbVar24 + 0x50;
        pbVar23 = pbStack_188;
      } while (pbVar24 != pbStack_40);
    }
    pbStack_188 = pbVar23;
    pbVar13 = pbStack_180;
    if (pbVar23 != (byte *)0x0) {
      for (; pbVar23 != pbVar13; pbVar13 = pbVar13 + -0x50) {
        if ((*(ulong *)(pbVar13 + -8) & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(*(ulong *)(pbVar13 + -8) & 0xff00ffffffffffff) - 8);
        }
        pbVar13[-8] = 0;
        pbVar13[-7] = 0;
        pbVar13[-6] = 0;
        pbVar13[-5] = 0;
        pbVar13[-4] = 0;
        pbVar13[-3] = 0;
        pbVar13[-2] = 0;
        pbVar13[-1] = 0;
        if ((*(ulong *)(pbVar13 + -0x10) & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(*(ulong *)(pbVar13 + -0x10) & 0xff00ffffffffffff) - 8);
        }
        pbVar13[-0x10] = 0;
        pbVar13[-0xf] = 0;
        pbVar13[-0xe] = 0;
        pbVar13[-0xd] = 0;
        pbVar13[-0xc] = 0;
        pbVar13[-0xb] = 0;
        pbVar13[-10] = 0;
        pbVar13[-9] = 0;
        if ((pbVar13[-0x38] & 1) == 0) {
          bVar3 = pbVar13[-0x50];
        }
        else {
          func_0x0412a280(*(undefined8 *)(pbVar13 + -0x28),
                          *(ulong *)(pbVar13 + -0x38) & 0xfffffffffffffffe);
          bVar3 = pbVar13[-0x50];
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(pbVar13 + -0x40),
                          *(ulong *)(pbVar13 + -0x50) & 0xfffffffffffffffe);
        }
      }
      pbStack_180 = pbVar23;
      func_0x0412a280(pbStack_188,(long)pbStack_178 - (long)pbStack_188);
    }
  }
  pbStack_188 = uStack_168;
  pbStack_180 = pbStack_160;
  pbStack_178 = pbStack_158;
  uStack_168 = (byte *)0x0;
  pbStack_160 = (byte *)0x0;
  pbStack_158 = (byte *)0x0;
  func_0x0bb20130(&uStack_168);
  if (pbStack_180 == pbStack_188) {
    uStack_c8 = (byte *)0x0;
    uStack_c0 = 0;
    uStack_b8 = (byte *)0x0;
    puStack_108[10] = puStack_108[10] + 1;
    if ((*puStack_108 & 0xfffffffd) != 0) {
      func_0x09e22e10(puStack_108,&UNK_012b29da,0xe,&uStack_c8,0);
    }
    if (pbStack_188 == pbStack_180) goto LAB_0bb1d8ab;
  }
  else if (pbStack_188 == pbStack_180) goto LAB_0bb1d8ab;
  pbVar13 = pbStack_180;
  pbVar23 = pbStack_188 + 0x38;
  do {
    if ((DAT_0f5ea4a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5ea4a0), iVar11 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_168,&DAT_0f5ea138,pbVar23 + -0x38,&uStack_58);
    plVar12 = plStack_50;
    if (plStack_50 == (long *)0x0) {
LAB_0bb1d482:
      if ((char)uStack_10c != '\0') goto LAB_0bb1d48c;
LAB_0bb1d4eb:
      func_0x0ee34300(&uStack_1a8,pbVar23);
      uStack_c8 = pbStack_158;
      uStack_c0 = (ulong)pbStack_160;
      if (((ulong)uStack_168 & 1) == 0) {
        uStack_c8 = (byte *)((long)&uStack_168 + 1);
        uStack_c0 = (ulong)uStack_168 >> 1 & 0x7f;
      }
      uStack_b0 = CONCAT26(uStack_19a,CONCAT15(uStack_19b,CONCAT41(auStack_19f,uStack_1a0)));
      uStack_b8 = pbStack_198;
      if ((uStack_1a8 & 1) == 0) {
        uStack_b8 = (byte *)((long)&uStack_1a8 + 1);
        uStack_b0 = (ulong)((byte)uStack_1a8 >> 1);
      }
      func_0x0470d9a0(&bStack_f8,&UNK_012cc333,8,0xdd,&uStack_c8);
      goto LAB_0bb1d795;
    }
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 != 0) goto LAB_0bb1d482;
    (**(code **)(*plStack_50 + 0x10))(plStack_50);
    FUN_0412c2d0(plVar12);
    if ((char)uStack_10c == '\0') goto LAB_0bb1d4eb;
LAB_0bb1d48c:
    switch(pbVar23[-8]) {
    case 1:
      uStack_1a3 = 0x6e;
      uStack_1a8 = 0x6464410a;
      uStack_1a4 = 0x6f;
      goto code_r0x0bb1d665;
    case 2:
      uStack_1a3 = 0x65;
      auStack_1a2[0] = 100;
      uStack_1a8 = 0x6361430c;
      uStack_1a4 = 0x68;
      uVar22 = 6;
      puVar14 = (undefined4 *)(auStack_1a2 + 1);
      break;
    case 3:
      auStack_19f = (undefined1  [4])0x65746365;
      uStack_19b = 100;
      uVar22 = 0x746f725079706f43;
      goto code_r0x0bb1d5f9;
    case 4:
      uStack_1a8 = 0x68654210;
      uStack_1a4 = 0x61;
      uStack_1a3 = 0x76;
      auStack_1a2[0] = 0x69;
      auStack_1a2[1] = 0x6f;
      uStack_1a0 = 0x72;
      uVar22 = 8;
      puVar14 = (undefined4 *)auStack_19f;
      break;
    case 5:
      uStack_1a8 = 0x72655018;
      uStack_1a4 = 0x73;
      uStack_1a3 = 0x6f;
      auStack_1a2[0] = 0x6e;
      auStack_1a2[1] = 0x61;
      uStack_1a0 = 0x50;
      auStack_19f = (undefined1  [4])0x65636569;
      uVar22 = 0xc;
      puVar14 = (undefined4 *)&uStack_19b;
      break;
    case 6:
      uStack_1a8 = 0x73655212;
      uStack_1a4 = 0x6f;
      uStack_1a3 = 0x75;
      auStack_1a2[0] = 0x72;
      auStack_1a2[1] = 99;
      uStack_1a0 = 0x65;
      auStack_19f[0] = 0x73;
      uVar22 = 9;
      puVar14 = (undefined4 *)((long)auStack_19f + 1);
      break;
    case 7:
      uStack_1a3 = 0x73;
      uStack_1a8 = 0x696b530a;
      uStack_1a4 = 0x6e;
code_r0x0bb1d665:
      uVar22 = 5;
      puVar14 = (undefined4 *)auStack_1a2;
      break;
    case 8:
      auStack_19f = (undefined1  [4])0x74616c70;
      uStack_19b = 0x65;
      uVar22 = 0x6d6554646c726f57;
code_r0x0bb1d5f9:
      uStack_1a8 = CONCAT31((int3)uVar22,0x1a);
      uStack_1a4 = (undefined1)((ulong)uVar22 >> 0x18);
      uStack_1a3 = (undefined1)((ulong)uVar22 >> 0x20);
      auStack_1a2[0] = (undefined1)((ulong)uVar22 >> 0x28);
      auStack_1a2[1] = (undefined1)((ulong)uVar22 >> 0x30);
      uStack_1a0 = (undefined1)((ulong)uVar22 >> 0x38);
      uVar22 = 0xd;
      puVar14 = (undefined4 *)&uStack_19a;
      break;
    default:
      uStack_1a3 = 0x6c;
      auStack_1a2[0] = 0x69;
      auStack_1a2[1] = 100;
      uStack_1a8 = 0x766e490e;
      uStack_1a4 = 0x61;
      uVar22 = 7;
      puVar14 = (undefined4 *)(auStack_1a2 + 2);
    }
    *(undefined1 *)puVar14 = 0;
    func_0x0ee34300(&bStack_e0,pbVar23);
    uStack_c8 = pbStack_158;
    uStack_c0 = (ulong)pbStack_160;
    if (((ulong)uStack_168 & 1) == 0) {
      uStack_c8 = (byte *)((long)&uStack_168 + 1);
      uStack_c0 = (ulong)uStack_168 >> 1 & 0x7f;
    }
    bVar25 = (pbVar23[-0x20] & 1) != 0;
    uStack_b8 = pbVar23 + -0x1f;
    if (bVar25) {
      uStack_b8 = *(byte **)(pbVar23 + -0x10);
    }
    uStack_b0 = (ulong)(pbVar23[-0x20] >> 1);
    if (bVar25) {
      uStack_b0 = *(ulong *)(pbVar23 + -0x18);
    }
    puStack_98 = puStack_d0;
    uStack_90 = uStack_d8;
    if ((bStack_e0 & 1) == 0) {
      puStack_98 = &uStack_df;
      uStack_90 = (ulong)(bStack_e0 >> 1);
    }
    uStack_a8 = (byte *)((long)&uStack_1a8 + 1);
    uStack_a0 = uVar22;
    func_0x0470d9a0(&bStack_f8,&UNK_0128091a,0x33,0xdddd,&uStack_c8);
    if ((bStack_e0 & 1) != 0) {
      func_0x0412a280(puStack_d0,CONCAT71(uStack_df,bStack_e0) & 0xfffffffffffffffe);
    }
LAB_0bb1d795:
    if ((uStack_1a8 & 1) != 0) {
      func_0x0412a280(pbStack_198,
                      CONCAT17(auStack_1a2[1],
                               CONCAT16(auStack_1a2[0],
                                        CONCAT15(uStack_1a3,CONCAT14(uStack_1a4,uStack_1a8)))) &
                      0xfffffffffffffffe);
    }
    if (((ulong)uStack_168 & 1) != 0) {
      func_0x0412a280(pbStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
    }
    uVar19 = (ulong)(bStack_f8 >> 1);
    puVar9 = &uStack_f7;
    if ((bStack_f8 & 1) != 0) {
      uVar19 = uStack_f0;
      puVar9 = puStack_e8;
    }
    uStack_c8 = (byte *)0x0;
    uStack_c0 = 0;
    uStack_b8 = (byte *)0x0;
    puStack_108[10] = puStack_108[10] + 1;
    if (((*puStack_108 & 0xfffffffd) != 0) && (uVar19 != 0)) {
      func_0x09e22e10(puStack_108,puVar9,uVar19,&uStack_c8,0);
    }
    if ((bStack_f8 & 1) != 0) {
      func_0x0412a280(puStack_e8,CONCAT71(uStack_f7,bStack_f8) & 0xfffffffffffffffe);
    }
    pbVar24 = pbVar23 + 0x18;
    pbVar23 = pbVar23 + 0x50;
  } while (pbVar24 != pbVar13);
LAB_0bb1d8ab:
  func_0x0bb20130(&pbStack_188);
  return;
}


