/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd234750
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot2
 * Body:  [[0d234750, 0d2347ca] [0d2348df, 0d234920] [0d234930, 0d234995] [0d2349a0, 0d2349e7] [0d2349f0, 0d234b7f]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot2(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  char *in_RAX;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *unaff_RBP;
  ulong *puVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long unaff_R12;
  long unaff_R13;
  long *unaff_R14;
  long lVar26;
  byte bVar27;
  ulong unaff_R15;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong in_stack_00000008;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long lStack0000000000000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000080;
  long *in_stack_000000c0;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  lStack0000000000000038 = 0;
  unaff_RBP[2] = in_stack_00000050;
  *unaff_RBP = in_stack_00000040;
  unaff_RBP[1] = in_stack_00000048;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000050 = 0;
  if (in_stack_00000080 == (long *)0x0) {
    unaff_RBP[8] = 0;
  }
  else if (in_stack_00000080 == unaff_R14) {
    unaff_RBP[8] = unaff_RBP + 4;
    (**(code **)(*in_stack_00000080 + 0x18))();
  }
  else {
    unaff_RBP[8] = in_stack_00000080;
    in_stack_00000080 = (long *)0x0;
  }
  puVar20 = *(ulong **)(in_stack_00000028 + 0x30);
  puVar4 = *(ulong **)(in_stack_00000028 + 0x38);
  lVar13 = (long)unaff_RBP + ((long)puVar20 - (long)puVar4);
  if ((long)puVar20 - (long)puVar4 != 0) {
    lVar26 = 0;
    do {
      *(undefined8 *)(lVar13 + 0x10 + lVar26) = *(undefined8 *)((long)puVar20 + lVar26 + 0x10);
      pbVar1 = (byte *)((long)puVar20 + lVar26);
      uVar9 = *(undefined4 *)(pbVar1 + 4);
      uVar10 = *(undefined4 *)(pbVar1 + 8);
      uVar11 = *(undefined4 *)(pbVar1 + 0xc);
      puVar2 = (undefined4 *)(lVar13 + lVar26);
      *puVar2 = *(undefined4 *)pbVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      pbVar1 = (byte *)((long)puVar20 + lVar26);
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = (byte *)((long)puVar20 + lVar26 + 0x10);
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1 = *(byte **)((long)puVar20 + lVar26 + 0x40);
      if (pbVar1 == (byte *)0x0) {
        *(undefined8 *)(lVar13 + 0x40 + lVar26) = 0;
      }
      else if ((byte *)((long)puVar20 + lVar26 + 0x20) == pbVar1) {
        *(long *)(lVar13 + 0x40 + lVar26) = lVar26 + lVar13 + 0x20;
        (**(code **)(**(long **)((long)puVar20 + lVar26 + 0x40) + 0x18))();
      }
      else {
        *(byte **)(lVar13 + 0x40 + lVar26) = pbVar1;
        pbVar1 = (byte *)((long)puVar20 + lVar26 + 0x40);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
      }
      lVar7 = lVar26 + 0x50;
      lVar26 = lVar26 + 0x50;
    } while ((ulong *)((long)puVar20 + lVar7) != puVar4);
    do {
      puVar5 = (ulong *)puVar20[8];
      if (puVar20 + 4 == puVar5) {
        lVar26 = 0x20;
LAB_0d2349f5:
        (**(code **)(*puVar5 + lVar26))();
        bVar27 = (byte)*puVar20;
      }
      else {
        lVar26 = 0x28;
        if (puVar5 != (ulong *)0x0) goto LAB_0d2349f5;
        bVar27 = (byte)*puVar20;
      }
      if ((bVar27 & 1) != 0) {
        func_0x0412a280(puVar20[2],*puVar20 & 0xfffffffffffffffe);
      }
      puVar20 = puVar20 + 10;
    } while (puVar20 != puVar4);
    puVar20 = *(ulong **)(in_stack_00000028 + 0x30);
  }
  *(long *)(in_stack_00000028 + 0x30) = lVar13;
  *(undefined8 **)(in_stack_00000028 + 0x38) = unaff_RBP + 10;
  lVar13 = *(long *)(in_stack_00000028 + 0x40);
  *(long *)(in_stack_00000028 + 0x40) = lStack0000000000000038 + unaff_R13 * 0x50;
  if (puVar20 != (ulong *)0x0) {
    func_0x0412a280(puVar20,lVar13 - (long)puVar20);
  }
  *(undefined8 **)(in_stack_00000028 + 0x38) = unaff_RBP + 10;
  if (in_stack_00000080 == (long *)&stack0x00000060) {
    lVar13 = 0x20;
LAB_0d234c60:
    (**(code **)(*in_stack_00000080 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (in_stack_00000080 != (long *)0x0) goto LAB_0d234c60;
  }
  if (((ulong)in_stack_00000040 & 1) != 0) {
    func_0x0412a280(in_stack_00000050,(ulong)in_stack_00000040 & 0xfffffffffffffffe);
  }
  uVar25 = (int)(unaff_R12 - in_stack_00000030 >> 4) * -0x33333333;
  if (in_stack_000000c0 == (long *)&stack0x000000a0) {
    lVar13 = 0x20;
LAB_0d234afd:
    (**(code **)(*in_stack_000000c0 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0d234afd;
  }
  if (unaff_R15 < 0xfffffffffffffff8) {
    lVar13 = (long)&stack0x00000010 + 1;
    if (unaff_R15 < 0x17) {
      _bStack0000000000000010 = CONCAT71(uStack0000000000000011,(char)unaff_R15 * '\x02');
      lVar26 = (long)&stack0x00000010 + 1;
      if (unaff_R15 != 0) goto LAB_0d234b7d;
    }
    else {
      uVar22 = 0x1a;
      if ((unaff_R15 | 7) != 0x17) {
        uVar22 = (unaff_R15 | 7) + 1;
      }
      lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
      if (lVar26 == 0) {
        func_0x0eec74c0(uVar22,0);
      }
      _bStack0000000000000010 = uVar22 | 1;
      in_stack_00000018 = unaff_R15;
      in_stack_00000020 = lVar26;
LAB_0d234b7d:
      func_0x0eee2f00(lVar26,in_stack_00000008);
    }
    *(undefined1 *)(lVar26 + unaff_R15) = 0;
    uVar22 = _bStack0000000000000010 >> 1 & 0x7f;
    lVar26 = lVar13;
    if ((_bStack0000000000000010 & 1) != 0) {
      uVar22 = in_stack_00000018;
      lVar26 = in_stack_00000020;
    }
    uVar14 = func_0x04883620(&stack0x00000040,lVar26,uVar22);
    plVar19 = (long *)(in_stack_00000028 + 0xb8);
    uVar22 = *(ulong *)(in_stack_00000028 + 0xc0);
    if (uVar22 != 0) {
      uVar15 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
      uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar15 >> 0x38 < 2) {
        in_stack_00000008 = uVar22 - 1 & uVar14;
      }
      else {
        in_stack_00000008 = uVar14;
        if (uVar22 <= uVar14) {
          if ((uVar14 | uVar22) >> 0x20 == 0) {
            in_stack_00000008 = (uVar14 & 0xffffffff) % (uVar22 & 0xffffffff);
          }
          else {
            in_stack_00000008 = uVar14 % uVar22;
          }
        }
      }
      puVar6 = *(undefined8 **)(*plVar19 + in_stack_00000008 * 8);
      if ((puVar6 != (undefined8 *)0x0) &&
         (plVar16 = (long *)*puVar6, lStack0000000000000038 = lVar13, plVar16 != (long *)0x0)) {
        bVar27 = bStack0000000000000010 & 1;
        lStack0000000000000038 = in_stack_00000020;
        uVar23 = in_stack_00000018;
        if ((_bStack0000000000000010 & 1) == 0) {
          lStack0000000000000038 = lVar13;
          uVar23 = (ulong)(bStack0000000000000010 >> 1);
        }
        if ((byte)(uVar15 >> 0x38) < 2) {
          do {
            if (plVar16[1] == uVar14) {
              bVar3 = *(byte *)(plVar16 + 2);
              if ((bVar3 & 1) == 0) {
                uVar15 = (ulong)(bVar3 >> 1);
              }
              else {
                uVar15 = plVar16[3];
              }
              if (uVar15 == uVar23) {
                if ((bVar3 & 1) == 0) {
                  lVar13 = (long)plVar16 + 0x11;
                }
                else {
                  lVar13 = plVar16[4];
                }
                iVar12 = func_0x0eee3000(lVar13,lStack0000000000000038,uVar23);
                if (iVar12 == 0) goto LAB_0d2353e2;
              }
            }
            else if ((plVar16[1] & uVar22 - 1) != in_stack_00000008) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar16[1];
            if (uVar15 == uVar14) {
              bVar3 = *(byte *)(plVar16 + 2);
              if ((bVar3 & 1) == 0) {
                uVar15 = (ulong)(bVar3 >> 1);
              }
              else {
                uVar15 = plVar16[3];
              }
              if (uVar15 == uVar23) {
                if ((bVar3 & 1) == 0) {
                  lVar13 = (long)plVar16 + 0x11;
                }
                else {
                  lVar13 = plVar16[4];
                }
                iVar12 = func_0x0eee3000(lVar13,lStack0000000000000038,uVar23);
                if (iVar12 == 0) goto LAB_0d2353e2;
              }
            }
            else {
              if (uVar22 <= uVar15) {
                if ((uVar15 | uVar22) >> 0x20 == 0) {
                  uVar15 = (uVar15 & 0xffffffff) % (uVar22 & 0xffffffff);
                }
                else {
                  uVar15 = uVar15 % uVar22;
                }
              }
              if (uVar15 != in_stack_00000008) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    in_stack_00000050 = 1;
    *plVar16 = 0;
    plVar16[1] = uVar14;
    plVar16[4] = in_stack_00000020;
    plVar16[2] = _bStack0000000000000010;
    plVar16[3] = in_stack_00000018;
    _bStack0000000000000010 = 0;
    in_stack_00000020 = 0;
    *(undefined2 *)(plVar16 + 5) = 0;
    *(undefined1 *)((long)plVar16 + 0x2a) = 0;
    fVar29 = (float)(*(long *)(in_stack_00000028 + 0xd0) + 1);
    in_stack_00000040 = plVar16;
    in_stack_00000048 = plVar19;
    if ((long)uVar22 < 0) {
      fVar31 = (float)uVar22;
      fVar30 = *(float *)(in_stack_00000028 + 0xd8);
      if (uVar22 != 0) goto LAB_0d234f02;
LAB_0d234f13:
      uVar15 = 1;
      if (2 < uVar22) {
        uVar15 = (ulong)((uVar22 & uVar22 - 1) != 0);
      }
      uVar15 = uVar15 | uVar22 * 2;
      fVar29 = (float)func_0x0eee3ab0(fVar29 / fVar30);
      uVar22 = (long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29;
      if (uVar22 < uVar15) {
        uVar22 = uVar15;
      }
      uVar15 = 2;
      if ((uVar22 == 1) || (uVar15 = uVar22, (uVar22 & uVar22 - 1) == 0)) {
        uVar22 = *(ulong *)(in_stack_00000028 + 0xc0);
        bVar28 = uVar15 < uVar22;
        if (uVar15 <= uVar22) goto LAB_0d2350c8;
LAB_0d234fa5:
        if (uVar15 >> 0x3d != 0) goto LAB_0d23556c;
        lVar13 = uVar15 * 8;
        lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
        if (lVar26 == 0) {
          func_0x0eec74c0(lVar13,0);
        }
        lVar7 = *plVar19;
        *plVar19 = lVar26;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,*(long *)(in_stack_00000028 + 0xc0) << 3);
          lVar26 = *(long *)(in_stack_00000028 + 0xb8);
        }
        *(ulong *)(in_stack_00000028 + 0xc0) = uVar15;
        func_0x0eee2dd0(lVar26,0,lVar13);
        plVar21 = *(long **)(in_stack_00000028 + 200);
        if (plVar21 != (long *)0x0) {
          uVar23 = plVar21[1];
          uVar22 = uVar15 - 1;
          if ((uVar15 & uVar22) == 0) {
            *(long *)(lVar26 + (uVar23 & uVar22) * 8) = in_stack_00000028 + 200;
            uVar15 = uVar23 & uVar22;
            while (plVar24 = plVar21, plVar21 = (long *)*plVar24, plVar21 != (long *)0x0) {
              uVar23 = plVar21[1] & uVar22;
              if (uVar23 != uVar15) {
                if (*(long *)(lVar26 + uVar23 * 8) == 0) {
                  *(long **)(lVar26 + uVar23 * 8) = plVar24;
                  uVar15 = uVar23;
                }
                else {
                  *plVar24 = *plVar21;
                  *plVar21 = **(undefined8 **)(lVar26 + uVar23 * 8);
                  **(long **)(lVar26 + uVar23 * 8) = (long)plVar21;
                  plVar21 = plVar24;
                }
              }
            }
          }
          else {
            if (uVar15 <= uVar23) {
              if ((uVar23 | uVar15) >> 0x20 == 0) {
                uVar23 = (uVar23 & 0xffffffff) % (uVar15 & 0xffffffff);
              }
              else {
                uVar23 = uVar23 % uVar15;
              }
            }
            *(long *)(lVar26 + uVar23 * 8) = in_stack_00000028 + 200;
            plVar24 = (long *)*plVar21;
            while (plVar24 != (long *)0x0) {
              uVar22 = plVar24[1];
              if (uVar15 <= uVar22) {
                if ((uVar22 | uVar15) >> 0x20 == 0) {
                  uVar22 = (uVar22 & 0xffffffff) % (uVar15 & 0xffffffff);
                }
                else {
                  uVar22 = uVar22 % uVar15;
                }
              }
              if (uVar22 != uVar23) {
                if (*(long *)(lVar26 + uVar22 * 8) == 0) {
                  *(long **)(lVar26 + uVar22 * 8) = plVar21;
                  uVar23 = uVar22;
                }
                else {
                  *plVar21 = *plVar24;
                  *plVar24 = **(long **)(lVar26 + uVar22 * 8);
                  **(undefined8 **)(lVar26 + uVar22 * 8) = plVar24;
                  plVar24 = plVar21;
                }
              }
              plVar21 = plVar24;
              plVar24 = (long *)*plVar21;
            }
          }
        }
      }
      else {
        uVar15 = func_0x0412c3f0();
        uVar22 = *(ulong *)(in_stack_00000028 + 0xc0);
        bVar28 = uVar15 < uVar22;
        if (uVar22 < uVar15) goto LAB_0d234fa5;
LAB_0d2350c8:
        if (bVar28) {
          fVar29 = (float)func_0x0eee3ab0((float)*(ulong *)(in_stack_00000028 + 0xd0) /
                                          *(float *)(in_stack_00000028 + 0xd8));
          uVar23 = (long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29;
          if ((uVar22 < 3) ||
             (uVar17 = uVar22 - (uVar22 >> 1 & 0x5555555555555555),
             uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
             1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar23 = func_0x0412c3f0(uVar23);
            if (uVar23 < uVar15) {
              uVar23 = uVar15;
            }
          }
          else {
            if (1 < uVar23) {
              lVar13 = 0x3f;
              if (uVar23 - 1 != 0) {
                for (; uVar23 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              uVar23 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
            }
            if (uVar23 < uVar15) {
              uVar23 = uVar15;
            }
          }
          uVar15 = uVar23;
          if (uVar15 < uVar22) {
            if (uVar15 != 0) goto LAB_0d234fa5;
            lVar13 = *plVar19;
            *plVar19 = 0;
            if (lVar13 != 0) {
              func_0x0412a280(lVar13,*(long *)(in_stack_00000028 + 0xc0) << 3);
            }
            *(undefined8 *)(in_stack_00000028 + 0xc0) = 0;
          }
        }
      }
      uVar22 = *(ulong *)(in_stack_00000028 + 0xc0);
      if ((uVar22 & uVar22 - 1) == 0) {
        in_stack_00000008 = uVar14 & uVar22 - 1;
      }
      else {
        in_stack_00000008 = uVar14;
        if (uVar22 <= uVar14) {
          if ((uVar14 | uVar22) >> 0x20 == 0) {
            in_stack_00000008 = (uVar14 & 0xffffffff) % (uVar22 & 0xffffffff);
          }
          else {
            in_stack_00000008 = uVar14 % uVar22;
          }
        }
      }
    }
    else {
      fVar31 = (float)(long)uVar22;
      fVar30 = *(float *)(in_stack_00000028 + 0xd8);
      if (uVar22 == 0) goto LAB_0d234f13;
LAB_0d234f02:
      if (fVar31 * fVar30 < fVar29) goto LAB_0d234f13;
    }
    lVar13 = *plVar19;
    plVar19 = *(long **)(lVar13 + in_stack_00000008 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar16 = *(long *)(in_stack_00000028 + 200);
      *(long **)(in_stack_00000028 + 200) = plVar16;
      *(long *)(lVar13 + in_stack_00000008 * 8) = in_stack_00000028 + 200;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          *(long **)(lVar13 + (uVar14 & uVar22 - 1) * 8) = plVar16;
        }
        else {
          if (uVar22 <= uVar14) {
            if ((uVar14 | uVar22) >> 0x20 == 0) {
              *(long **)(lVar13 + ((uVar14 & 0xffffffff) % (uVar22 & 0xffffffff)) * 8) = plVar16;
              goto LAB_0d2353d1;
            }
            uVar14 = uVar14 % uVar22;
          }
          *(long **)(lVar13 + uVar14 * 8) = plVar16;
        }
      }
    }
    else {
      *plVar16 = *plVar19;
      *plVar19 = (long)plVar16;
    }
LAB_0d2353d1:
    *(long *)(in_stack_00000028 + 0xd0) = *(long *)(in_stack_00000028 + 0xd0) + 1;
    bVar27 = bStack0000000000000010 & 1;
LAB_0d2353e2:
    *(short *)(plVar16 + 5) = (short)uVar25;
    *(undefined1 *)((long)plVar16 + 0x2a) = 0;
    if (bVar27 != 0) {
      func_0x0412a280(in_stack_00000020,_bStack0000000000000010 & 0xfffffffffffffffe);
    }
    return (ulong)uVar25;
  }
  func_0x04882e30();
  func_0x0d263260();
LAB_0d23556c:
  func_0x04882eb0();
  uVar18 = func_0x04882eb0();
  uVar18 = func_0x04882e20(uVar18);
  uVar18 = func_0x04882e20(uVar18);
  uVar18 = func_0x04882e20(uVar18);
  uVar18 = func_0x04882e20(uVar18);
  uVar18 = func_0x04882e20(uVar18);
  plVar19 = (long *)func_0x04882e20(uVar18);
  func_0x0d266e90(&stack0x00000040);
  if ((_bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,_bStack0000000000000010 & 0xfffffffffffffffe);
    uVar18 = func_0x0eee2d70(plVar19);
    plVar19 = (long *)func_0x04882e20(uVar18);
    lVar13 = 0x20;
    plVar16 = in_stack_000000c0;
    if ((in_stack_000000c0 == (long *)&stack0x000000a0) ||
       (lVar13 = 0x28, in_stack_000000c0 != (long *)0x0)) goto LAB_0d235620;
  }
  plVar16 = plVar19;
  lVar13 = func_0x0eee2d70();
LAB_0d235620:
  (**(code **)(*plVar16 + lVar13))();
  uVar18 = func_0x0eee2d70(plVar19);
  func_0x04882e20(uVar18);
  pcVar8 = (code *)swi(3);
  uVar22 = (*pcVar8)();
  return uVar22;
}


