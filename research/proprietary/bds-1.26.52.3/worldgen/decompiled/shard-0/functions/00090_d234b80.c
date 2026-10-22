/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd234b80
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot9
 * Body:  [[0d234b80, 0d234c5a] [0d234c8b, 0d234d38] [0d234d40, 0d234db9] [0d234dc0, 0d234dd8] [0d234de0, 0d235050] [0d235060, 0d235287] [0d2353b5, 0d23549d] [0d2354a0, 0d235520] [0d23553f, 0d23554d] [0d23556c, 0d2355b4] [0d2355c7, 0d235636]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot9
 */


/* WARNING: Removing unreachable block (ram,0x0d2355ce) */
/* WARNING: Removing unreachable block (ram,0x0d23560e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot9(void)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_RBX;
  long unaff_RBP;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long unaff_R12;
  ulong unaff_R14;
  byte bVar18;
  long unaff_R15;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong in_stack_00000008;
  byte bStack0000000000000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000098;
  undefined8 in_stack_000000c0;
  
  func_0x0eee2f00();
  *(undefined1 *)(unaff_RBX + unaff_R15) = 0;
  uVar6 = func_0x04883620(&stack0x00000040);
  plVar17 = (long *)(unaff_RBP + 0xb8);
  uVar14 = *(ulong *)(unaff_RBP + 0xc0);
  if (uVar14 != 0) {
    uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      in_stack_00000008 = uVar14 - 1 & uVar6;
    }
    else {
      in_stack_00000008 = uVar6;
      if (uVar14 <= uVar6) {
        if ((uVar6 | uVar14) >> 0x20 == 0) {
          in_stack_00000008 = (uVar6 & 0xffffffff) % (uVar14 & 0xffffffff);
        }
        else {
          in_stack_00000008 = uVar6 % uVar14;
        }
      }
    }
    puVar2 = *(undefined8 **)(*plVar17 + in_stack_00000008 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar2, plVar8 != (long *)0x0)) {
      bVar18 = bStack0000000000000010 & 1;
      uVar15 = in_stack_00000018;
      lVar12 = in_stack_00000020;
      if ((_bStack0000000000000010 & 1) == 0) {
        uVar15 = (ulong)(bStack0000000000000010 >> 1);
        lVar12 = unaff_R12;
      }
      if ((byte)(uVar7 >> 0x38) < 2) {
        uVar7 = uVar14 - 1;
        in_stack_00000098 = uVar7;
        do {
          if (plVar8[1] == uVar6) {
            bVar1 = *(byte *)(plVar8 + 2);
            if ((bVar1 & 1) == 0) {
              uVar10 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar10 = plVar8[3];
            }
            if (uVar10 == uVar15) {
              if ((bVar1 & 1) == 0) {
                lVar9 = (long)plVar8 + 0x11;
              }
              else {
                lVar9 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar9,lVar12,uVar15);
              uVar7 = in_stack_00000098;
              if (iVar5 == 0) goto LAB_0d2353e2;
            }
          }
          else {
            unaff_RBP = in_stack_00000028;
            if ((plVar8[1] & uVar7) != in_stack_00000008) break;
          }
          plVar8 = (long *)*plVar8;
          unaff_RBP = in_stack_00000028;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar6) {
            bVar1 = *(byte *)(plVar8 + 2);
            if ((bVar1 & 1) == 0) {
              uVar7 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar7 = plVar8[3];
            }
            if (uVar7 == uVar15) {
              if ((bVar1 & 1) == 0) {
                lVar9 = (long)plVar8 + 0x11;
              }
              else {
                lVar9 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar9,lVar12,uVar15);
              if (iVar5 == 0) goto LAB_0d2353e2;
            }
          }
          else {
            if (uVar14 <= uVar7) {
              if ((uVar7 | uVar14) >> 0x20 == 0) {
                uVar7 = (uVar7 & 0xffffffff) % (uVar14 & 0xffffffff);
              }
              else {
                uVar7 = uVar7 % uVar14;
              }
            }
            unaff_RBP = in_stack_00000028;
            if (uVar7 != in_stack_00000008) break;
          }
          plVar8 = (long *)*plVar8;
          unaff_RBP = in_stack_00000028;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  in_stack_00000050 = 1;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  plVar8[4] = in_stack_00000020;
  plVar8[2] = _bStack0000000000000010;
  plVar8[3] = in_stack_00000018;
  _bStack0000000000000010 = 0;
  in_stack_00000020 = 0;
  *(undefined2 *)(plVar8 + 5) = 0;
  *(undefined1 *)((long)plVar8 + 0x2a) = 0;
  fVar20 = (float)(*(long *)(unaff_RBP + 0xd0) + 1);
  in_stack_00000040 = plVar8;
  in_stack_00000048 = plVar17;
  if ((long)uVar14 < 0) {
    fVar22 = (float)uVar14;
    fVar21 = *(float *)(unaff_RBP + 0xd8);
    if (uVar14 != 0) goto LAB_0d234f02;
LAB_0d234f13:
    uVar7 = 1;
    if (2 < uVar14) {
      uVar7 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar7 = uVar7 | uVar14 * 2;
    fVar20 = (float)func_0x0eee3ab0(fVar20 / fVar21);
    uVar14 = (long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20;
    if (uVar14 < uVar7) {
      uVar14 = uVar7;
    }
    uVar7 = 2;
    if ((uVar14 == 1) || (uVar7 = uVar14, (uVar14 & uVar14 - 1) == 0)) {
      uVar14 = *(ulong *)(in_stack_00000028 + 0xc0);
      bVar19 = uVar7 < uVar14;
      if (uVar7 <= uVar14) goto LAB_0d2350c8;
LAB_0d234fa5:
      if (uVar7 >> 0x3d != 0) {
        func_0x04882eb0();
        uVar11 = func_0x04882eb0();
        uVar11 = func_0x04882e20(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        plVar8 = (long *)func_0x04882e20(uVar11);
        func_0x0d266e90(&stack0x00000040);
        plVar17 = plVar8;
        lVar12 = func_0x0eee2d70();
        (**(code **)(*plVar17 + lVar12))();
        uVar11 = func_0x0eee2d70(plVar8);
        func_0x04882e20(uVar11);
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return uVar14;
      }
      lVar12 = uVar7 * 8;
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
      if (lVar9 == 0) {
        func_0x0eec74c0(lVar12,0);
      }
      lVar3 = *plVar17;
      *plVar17 = lVar9;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,*(long *)(in_stack_00000028 + 0xc0) << 3);
        lVar9 = *(long *)(in_stack_00000028 + 0xb8);
      }
      *(ulong *)(in_stack_00000028 + 0xc0) = uVar7;
      func_0x0eee2dd0(lVar9,0,lVar12);
      plVar13 = *(long **)(in_stack_00000028 + 200);
      if (plVar13 != (long *)0x0) {
        uVar15 = plVar13[1];
        uVar14 = uVar7 - 1;
        if ((uVar7 & uVar14) == 0) {
          *(long *)(lVar9 + (uVar15 & uVar14) * 8) = in_stack_00000028 + 200;
          uVar7 = uVar15 & uVar14;
          while (plVar16 = plVar13, plVar13 = (long *)*plVar16, plVar13 != (long *)0x0) {
            uVar15 = plVar13[1] & uVar14;
            if (uVar15 != uVar7) {
              if (*(long *)(lVar9 + uVar15 * 8) == 0) {
                *(long **)(lVar9 + uVar15 * 8) = plVar16;
                uVar7 = uVar15;
              }
              else {
                *plVar16 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar9 + uVar15 * 8);
                **(long **)(lVar9 + uVar15 * 8) = (long)plVar13;
                plVar13 = plVar16;
              }
            }
          }
        }
        else {
          if (uVar7 <= uVar15) {
            if ((uVar15 | uVar7) >> 0x20 == 0) {
              uVar15 = (uVar15 & 0xffffffff) % (uVar7 & 0xffffffff);
            }
            else {
              uVar15 = uVar15 % uVar7;
            }
          }
          *(long *)(lVar9 + uVar15 * 8) = in_stack_00000028 + 200;
          plVar16 = (long *)*plVar13;
          while (plVar16 != (long *)0x0) {
            uVar14 = plVar16[1];
            if (uVar7 <= uVar14) {
              if ((uVar14 | uVar7) >> 0x20 == 0) {
                uVar14 = (uVar14 & 0xffffffff) % (uVar7 & 0xffffffff);
              }
              else {
                uVar14 = uVar14 % uVar7;
              }
            }
            if (uVar14 != uVar15) {
              if (*(long *)(lVar9 + uVar14 * 8) == 0) {
                *(long **)(lVar9 + uVar14 * 8) = plVar13;
                uVar15 = uVar14;
              }
              else {
                *plVar13 = *plVar16;
                *plVar16 = **(long **)(lVar9 + uVar14 * 8);
                **(undefined8 **)(lVar9 + uVar14 * 8) = plVar16;
                plVar16 = plVar13;
              }
            }
            plVar13 = plVar16;
            plVar16 = (long *)*plVar13;
          }
        }
      }
    }
    else {
      uVar7 = func_0x0412c3f0();
      uVar14 = *(ulong *)(in_stack_00000028 + 0xc0);
      bVar19 = uVar7 < uVar14;
      if (uVar14 < uVar7) goto LAB_0d234fa5;
LAB_0d2350c8:
      if (bVar19) {
        fVar20 = (float)func_0x0eee3ab0((float)*(ulong *)(in_stack_00000028 + 0xd0) /
                                        *(float *)(in_stack_00000028 + 0xd8));
        uVar15 = (long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20;
        if ((uVar14 < 3) ||
           (uVar10 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
           uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
           1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar15 = func_0x0412c3f0(uVar15);
          if (uVar15 < uVar7) {
            uVar15 = uVar7;
          }
        }
        else {
          if (1 < uVar15) {
            lVar12 = 0x3f;
            if (uVar15 - 1 != 0) {
              for (; uVar15 - 1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar15 = 1L << (-((byte)lVar12 ^ 0x3f) & 0x3f);
          }
          if (uVar15 < uVar7) {
            uVar15 = uVar7;
          }
        }
        uVar7 = uVar15;
        if (uVar7 < uVar14) {
          if (uVar7 != 0) goto LAB_0d234fa5;
          lVar12 = *plVar17;
          *plVar17 = 0;
          if (lVar12 != 0) {
            func_0x0412a280(lVar12,*(long *)(in_stack_00000028 + 0xc0) << 3);
          }
          *(undefined8 *)(in_stack_00000028 + 0xc0) = 0;
        }
      }
    }
    uVar14 = *(ulong *)(in_stack_00000028 + 0xc0);
    if ((uVar14 & uVar14 - 1) == 0) {
      in_stack_00000008 = uVar6 & uVar14 - 1;
      unaff_RBP = in_stack_00000028;
    }
    else {
      in_stack_00000008 = uVar6;
      unaff_RBP = in_stack_00000028;
      if (uVar14 <= uVar6) {
        if ((uVar6 | uVar14) >> 0x20 == 0) {
          in_stack_00000008 = (uVar6 & 0xffffffff) % (uVar14 & 0xffffffff);
        }
        else {
          in_stack_00000008 = uVar6 % uVar14;
        }
      }
    }
  }
  else {
    fVar22 = (float)(long)uVar14;
    fVar21 = *(float *)(unaff_RBP + 0xd8);
    if (uVar14 == 0) goto LAB_0d234f13;
LAB_0d234f02:
    if (fVar22 * fVar21 < fVar20) goto LAB_0d234f13;
  }
  lVar12 = *plVar17;
  plVar17 = *(long **)(lVar12 + in_stack_00000008 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar8 = *(long *)(unaff_RBP + 200);
    *(long **)(unaff_RBP + 200) = plVar8;
    *(long *)(lVar12 + in_stack_00000008 * 8) = unaff_RBP + 200;
    if (*plVar8 != 0) {
      uVar6 = *(ulong *)(*plVar8 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        *(long **)(lVar12 + (uVar6 & uVar14 - 1) * 8) = plVar8;
      }
      else {
        if (uVar14 <= uVar6) {
          if ((uVar6 | uVar14) >> 0x20 == 0) {
            *(long **)(lVar12 + ((uVar6 & 0xffffffff) % (uVar14 & 0xffffffff)) * 8) = plVar8;
            goto LAB_0d2353d1;
          }
          uVar6 = uVar6 % uVar14;
        }
        *(long **)(lVar12 + uVar6 * 8) = plVar8;
      }
    }
  }
  else {
    *plVar8 = *plVar17;
    *plVar17 = (long)plVar8;
  }
LAB_0d2353d1:
  *(long *)(unaff_RBP + 0xd0) = *(long *)(unaff_RBP + 0xd0) + 1;
  bVar18 = 0;
LAB_0d2353e2:
  *(short *)(plVar8 + 5) = (short)unaff_R14;
  *(undefined1 *)((long)plVar8 + 0x2a) = 0;
  if (bVar18 != 0) {
    func_0x0412a280(in_stack_00000020,_bStack0000000000000010 & 0xfffffffffffffffe);
  }
  return unaff_R14 & 0xffffffff;
}


