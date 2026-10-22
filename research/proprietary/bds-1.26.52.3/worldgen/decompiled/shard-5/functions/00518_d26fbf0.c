/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd36fbf0 (ELF vaddr 0xd26fbf0)
 * Label: caller-of-callee
 * Body:  [[0d36fbf0, 0d36fcb4] [0d36fcc0, 0d36fcfe] [0d36fd00, 0d36fd20] [0d36fd30, 0d36fd69] [0d36fd70, 0d36fdfb] [0d36fe00, 0d36feb1] [0d36fec0, 0d370006] [0d370010, 0d37009a] [0d3700a0, 0d3700d8] [0d3700e0, 0d370154] [0d370160, 0d370178] [0d370180, 0d3701b5] [0d3701c0, 0d37022b] [0d370230, 0d37027d] [0d370280, 0d3702bc] [0d3702c0, 0d3702e4] [0d3702f0, 0d3704a6] [0d3704b0, 0d370570] [0d370580, 0d3706bc] [0d370712, 0d37072a]]
 * Ghidra: FUN_0d36fbf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d36fbf0(long param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 in_R9;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined4 *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long *plStack_50;
  undefined1 auStack_48 [24];
  
  plStack_90 = (long *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar3;
      func_0x05d6a3c0(puVar3 + 5);
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        func_0x0412a280(puVar3[4],puVar3[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar3,0x68);
      puVar3 = puVar2;
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (*(long *)(param_1 + 0x68) != 0) {
      func_0x0eee2dd0(*plStack_90,0,*(long *)(param_1 + 0x68) << 3);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  plStack_80 = (long *)&UNK_01da06e9;
  plStack_78 = (long *)0x7;
  lVar6 = func_0x0d6c97a0(param_2 + 8,&plStack_80);
  if ((lVar6 == param_2 + 0x10) || (*(int *)(lVar6 + 0x60) != 10)) {
    plStack_80 = (long *)&UNK_01da06e9;
    func_0x0a735600(1,3,0x1f,&UNK_013be113,&plStack_80);
    uVar13 = 0xf;
  }
  else {
    plVar7 = *(long **)(lVar6 + 0x40);
    plStack_50 = (long *)(lVar6 + 0x48);
    if (plVar7 != plStack_50) {
      plStack_60 = (long *)(param_1 + 0x70);
      do {
        bVar1 = *(byte *)(plVar7 + 4);
        if ((bVar1 & 1) == 0) {
          uVar19 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar19 = plVar7[5];
        }
        uVar10 = uVar19 + 0x21;
        if (0xfffffffffffffff7 < uVar10) {
          uVar13 = func_0x04882e30();
          func_0x0eeb81b0(auStack_48);
          func_0x0eee2d70(uVar13);
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return uVar13;
        }
        if (uVar10 < 0x17) {
          uStack_a0 = 0;
          puStack_98 = (undefined4 *)0x0;
          uStack_a8 = (ulong)(byte)((char)uVar10 * '\x02');
        }
        else {
          uVar15 = (uVar10 | 7) + 1;
          if ((uVar10 | 7) == 0x17) {
            uVar15 = 0x1a;
          }
          puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
          if (puVar8 == (undefined4 *)0x0) {
            func_0x0eec74c0(uVar15,0);
          }
          uStack_a8 = uVar15 | 1;
          uStack_a0 = uVar10;
          puStack_98 = puVar8;
        }
        lVar6 = (long)puStack_98 + 0x21;
        bVar20 = (uStack_a8 & 1) == 0;
        puVar8 = puStack_98;
        if (bVar20) {
          puVar8 = (undefined4 *)((long)&uStack_a8 + 1);
        }
        *(undefined8 *)(puVar8 + 4) = _DAT_01219c4a;
        *(undefined8 *)(puVar8 + 6) = _UNK_01219c52;
        *puVar8 = _DAT_01219c3a;
        puVar8[1] = _UNK_01219c3e;
        puVar8[2] = _UNK_01219c42;
        puVar8[3] = _UNK_01219c46;
        *(undefined1 *)(puVar8 + 8) = 0x20;
        if (bVar20) {
          lVar6 = (long)&uStack_88 + 2;
        }
        if (uVar19 != 0) {
          if ((bVar1 & 1) == 0) {
            lVar18 = (long)plVar7 + 0x21;
          }
          else {
            lVar18 = plVar7[6];
          }
          func_0x0eee2ee0(lVar6,lVar18,uVar19);
        }
        *(undefined1 *)(lVar6 + uVar19) = 0;
        puVar8 = puStack_98;
        uVar19 = uStack_a0;
        if ((uStack_a8 & 1) == 0) {
          puVar8 = (undefined4 *)((long)&uStack_a8 + 1);
          uVar19 = uStack_a8 >> 1 & 0x7f;
        }
        uStack_88 = 0;
        if (puVar8 == (undefined4 *)0x0) {
          uStack_88 = (ulong)((uint)uVar19 & 0x7f) << 0x30;
        }
        else {
          lVar6 = uVar19 + 9;
          puVar9 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar6,8);
          if (lVar6 != 0 && puVar9 == (ulong *)0x0) {
            func_0x0eec74c0(lVar6,8);
          }
          *puVar9 = uVar19;
          func_0x0eee2f00(puVar9 + 1,puVar8,uVar19);
          *(undefined1 *)((long)puVar9 + uVar19 + 8) = 0;
          uStack_88 = (ulong)(puVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
        uStack_70 = uStack_70 & 0xffffffffffffff00;
        uVar24 = plStack_80._0_4_;
        uVar25 = plStack_78._0_4_;
        uVar19 = uStack_70;
        func_0x0eeb79f0(auStack_48,&uStack_88);
        if ((uStack_88 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
        }
        uStack_88 = 0;
        if ((uStack_a8 & 1) != 0) {
          func_0x0412a280(puStack_98,uStack_a8 & 0xfffffffffffffffe);
        }
        if ((int)plVar7[0xc] != 10) {
          plStack_80 = (long *)&UNK_01da06e9;
          func_0x0a735600(1,3,0x1f,&UNK_011b0112,&plStack_80,in_R9,uVar24,uVar25,uVar19);
          func_0x0eeb81b0(auStack_48);
          return 0x11;
        }
        lVar6 = (long)plVar7 + 0x21;
        bVar20 = (*(byte *)(plVar7 + 4) & 1) == 0;
        lVar18 = plVar7[6];
        if (bVar20) {
          lVar18 = lVar6;
        }
        uVar19 = (ulong)(*(byte *)(plVar7 + 4) >> 1);
        if (!bVar20) {
          uVar19 = plVar7[5];
        }
        uVar10 = func_0x04883620(&plStack_80,lVar18,uVar19);
        uVar19 = *(ulong *)(param_1 + 0x68);
        if (uVar19 != 0) {
          uVar15 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
          uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar15 >> 0x38 < 2) {
            uVar12 = uVar19 - 1 & uVar10;
          }
          else {
            uVar12 = uVar10;
            if (uVar19 <= uVar10) {
              if ((uVar10 | uVar19) >> 0x20 == 0) {
                uVar12 = (uVar10 & 0xffffffff) % (uVar19 & 0xffffffff);
              }
              else {
                uVar12 = uVar10 % uVar19;
              }
            }
          }
          puVar3 = *(undefined8 **)(*plStack_90 + uVar12 * 8);
          uStack_68 = uVar12;
          if ((puVar3 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar3, plVar11 != (long *)0x0))
          {
            if ((*(byte *)(plVar7 + 4) & 1) == 0) {
              uVar16 = (ulong)(*(byte *)(plVar7 + 4) >> 1);
            }
            else {
              uVar16 = plVar7[5];
              lVar6 = plVar7[6];
            }
            if ((byte)(uVar15 >> 0x38) < 2) {
              uVar15 = uVar19 - 1;
              uStack_58 = uVar15;
              do {
                if (plVar11[1] == uVar10) {
                  bVar1 = *(byte *)(plVar11 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar14 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar14 = plVar11[3];
                  }
                  if (uVar14 == uVar16) {
                    if ((bVar1 & 1) == 0) {
                      lVar18 = (long)plVar11 + 0x11;
                    }
                    else {
                      lVar18 = plVar11[4];
                    }
                    iVar5 = func_0x0eee3000(lVar18,lVar6,uVar16);
                    uVar15 = uStack_58;
                    uVar12 = uStack_68;
                    if (iVar5 == 0) goto LAB_0d370503;
                  }
                }
                else if ((plVar11[1] & uVar15) != uVar12) break;
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
            else {
              do {
                uVar15 = plVar11[1];
                if (uVar15 == uVar10) {
                  bVar1 = *(byte *)(plVar11 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar15 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar15 = plVar11[3];
                  }
                  if (uVar15 == uVar16) {
                    if ((bVar1 & 1) == 0) {
                      lVar18 = (long)plVar11 + 0x11;
                    }
                    else {
                      lVar18 = plVar11[4];
                    }
                    iVar5 = func_0x0eee3000(lVar18,lVar6,uVar16);
                    uVar12 = uStack_68;
                    if (iVar5 == 0) goto LAB_0d370503;
                  }
                }
                else {
                  if (uVar19 <= uVar15) {
                    if ((uVar15 | uVar19) >> 0x20 == 0) {
                      uVar15 = (uVar15 & 0xffffffff) % (uVar19 & 0xffffffff);
                    }
                    else {
                      uVar15 = uVar15 % uVar19;
                    }
                  }
                  if (uVar15 != uVar12) break;
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
          }
        }
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
        if (plVar11 == (long *)0x0) {
          func_0x0eec74c0(0x68,0);
        }
        plStack_78 = plStack_90;
        uStack_70 = 0;
        *plVar11 = 0;
        plVar11[1] = uVar10;
        plStack_80 = plVar11;
        if ((*(byte *)(plVar7 + 4) & 1) == 0) {
          plVar11[4] = plVar7[6];
          lVar6 = plVar7[5];
          plVar11[2] = plVar7[4];
          plVar11[3] = lVar6;
        }
        else {
          func_0x0412e5e0(plVar11 + 2,plVar7[6],plVar7[5]);
        }
        plVar11[0xb] = 0;
        plVar11[0xc] = 0;
        plVar11[9] = 0;
        plVar11[10] = 0;
        plVar11[7] = 0;
        plVar11[8] = 0;
        plVar11[5] = 0;
        plVar11[6] = 0;
        *(undefined4 *)(plVar11 + 0xc) = 0x3f800000;
        uStack_70 = CONCAT71(uStack_70._1_7_,1);
        fVar21 = (float)(*(long *)(param_1 + 0x78) + 1);
        if ((long)uVar19 < 0) {
          fVar23 = (float)uVar19;
          fVar22 = *(float *)(param_1 + 0x80);
          if (uVar19 != 0) goto LAB_0d3702d4;
LAB_0d3702f0:
          uVar15 = 1;
          if (2 < uVar19) {
            uVar15 = (ulong)((uVar19 & uVar19 - 1) != 0);
          }
          uVar15 = uVar19 * 2 | uVar15;
          fVar21 = (float)func_0x0eee3ab0(fVar21 / fVar22);
          uVar19 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
          if (uVar19 < uVar15) {
            uVar19 = uVar15;
          }
          uVar15 = 2;
          if ((uVar19 == 1) || (uVar15 = uVar19, (uVar19 & uVar19 - 1) == 0)) {
            uVar19 = *(ulong *)(param_1 + 0x68);
            bVar20 = uVar15 < uVar19;
            if (uVar15 <= uVar19) goto LAB_0d370385;
LAB_0d37035d:
            func_0x0d3918d0(plStack_90,uVar15);
          }
          else {
            uVar15 = func_0x0412c3f0();
            uVar19 = *(ulong *)(param_1 + 0x68);
            bVar20 = uVar15 < uVar19;
            if (uVar19 < uVar15) goto LAB_0d37035d;
LAB_0d370385:
            if (bVar20) {
              fVar21 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x78) /
                                              *(float *)(param_1 + 0x80));
              uVar12 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
              if ((uVar19 < 3) ||
                 (uVar16 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
                 uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
                 1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar12 = func_0x0412c3f0(uVar12);
              }
              else if (1 < uVar12) {
                lVar6 = 0x3f;
                if (uVar12 - 1 != 0) {
                  for (; uVar12 - 1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                uVar12 = 1L << (-((byte)lVar6 ^ 0x3f) & 0x3f);
              }
              if (uVar15 <= uVar12) {
                uVar15 = uVar12;
              }
              if (uVar15 < uVar19) goto LAB_0d37035d;
            }
          }
          uVar19 = *(ulong *)(param_1 + 0x68);
          if ((uVar19 & uVar19 - 1) == 0) {
            uVar15 = uVar10 & uVar19 - 1;
          }
          else {
            uVar15 = uVar10;
            if (uVar19 <= uVar10) {
              if ((uVar10 | uVar19) >> 0x20 == 0) {
                uVar15 = (uVar10 & 0xffffffff) % (uVar19 & 0xffffffff);
              }
              else {
                uVar15 = uVar10 % uVar19;
              }
            }
          }
        }
        else {
          fVar23 = (float)(long)uVar19;
          fVar22 = *(float *)(param_1 + 0x80);
          if (uVar19 == 0) goto LAB_0d3702f0;
LAB_0d3702d4:
          uVar15 = uStack_68;
          if (fVar23 * fVar22 < fVar21) goto LAB_0d3702f0;
        }
        lVar6 = *plStack_90;
        plVar17 = *(long **)(lVar6 + uVar15 * 8);
        if (plVar17 == (long *)0x0) {
          *plVar11 = *plStack_60;
          *plStack_60 = (long)plVar11;
          *(long **)(lVar6 + uVar15 * 8) = plStack_60;
          if (*plVar11 != 0) {
            uVar10 = *(ulong *)(*plVar11 + 8);
            if ((uVar19 & uVar19 - 1) == 0) {
              *(long **)(lVar6 + (uVar10 & uVar19 - 1) * 8) = plVar11;
            }
            else {
              if (uVar19 <= uVar10) {
                if ((uVar10 | uVar19) >> 0x20 == 0) {
                  *(long **)(lVar6 + ((uVar10 & 0xffffffff) % (uVar19 & 0xffffffff)) * 8) = plVar11;
                  goto LAB_0d3704ff;
                }
                uVar10 = uVar10 % uVar19;
              }
              *(long **)(lVar6 + uVar10 * 8) = plVar11;
            }
          }
        }
        else {
          *plVar11 = *plVar17;
          *plVar17 = (long)plVar11;
        }
LAB_0d3704ff:
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
LAB_0d370503:
        iVar5 = func_0x0d3c0740(plVar11 + 5,plVar7 + 7);
        if (iVar5 != 0) {
          func_0x0eeb81b0(auStack_48);
          return 0x10;
        }
        iVar5 = func_0x0d3c0940(plVar11 + 5,plVar7 + 7);
        func_0x0eeb81b0(auStack_48);
        if (iVar5 != 0) {
          return 0x10;
        }
        plVar11 = (long *)plVar7[1];
        plVar17 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar17[2];
            bVar20 = plVar17 != (long *)*plVar7;
            plVar17 = plVar7;
          } while (bVar20);
        }
        else {
          do {
            plVar7 = plVar11;
            plVar11 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      } while (plVar7 != plStack_50);
    }
    uVar13 = 0;
  }
  return uVar13;
}



/* ---- referenced strings ----
 * 0x1219c3a  Parsing Structure Block Palette: 
 * 0x1219c4a  e Block Palette: 
 */
