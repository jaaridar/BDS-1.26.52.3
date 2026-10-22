/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2349c0
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot7
 * Body:  [[0d2349c0, 0d2349e7] [0d2349f0, 0d234a1e] [0d234a24, 0d234c79] [0d234c8b, 0d234d38] [0d234d40, 0d234db9] [0d234dc0, 0d234dd8] [0d234de0, 0d235050] [0d235060, 0d235287] [0d2353b5, 0d23549d] [0d2354a0, 0d23552f] [0d23553f, 0d23554d] [0d235562, 0d2355b4] [0d2355c7, 0d235636]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot7
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot7(void)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong *unaff_RBX;
  ulong *unaff_RBP;
  ulong *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  long unaff_R12;
  undefined8 unaff_R13;
  byte bVar21;
  ulong unaff_R15;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong in_stack_00000008;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000080;
  ulong in_stack_00000098;
  long *in_stack_000000c0;
  long in_stack_000000d0;
  
  while (puVar15 = unaff_RBP, unaff_RBP = puVar15 + 10, unaff_RBP != unaff_RBX) {
    puVar2 = (ulong *)puVar15[0x12];
    if (puVar15 + 0xe == puVar2) {
      lVar6 = 0x20;
LAB_0d2349f5:
      (**(code **)(*puVar2 + lVar6))();
      bVar21 = (byte)*unaff_RBP;
    }
    else {
      lVar6 = 0x28;
      if (puVar2 != (ulong *)0x0) goto LAB_0d2349f5;
      bVar21 = (byte)*unaff_RBP;
    }
    if ((bVar21 & 1) != 0) {
      func_0x0412a280(puVar15[0xc],*unaff_RBP & 0xfffffffffffffffe);
    }
  }
  lVar6 = *(long *)(in_stack_00000028 + 0x30);
  lVar7 = in_stack_000000d0 + 0x50;
  *(undefined8 *)(in_stack_00000028 + 0x30) = unaff_R13;
  *(long *)(in_stack_00000028 + 0x38) = lVar7;
  lVar11 = *(long *)(in_stack_00000028 + 0x40);
  *(ulong *)(in_stack_00000028 + 0x40) = in_stack_00000038 + in_stack_00000098 * 0x50;
  if (lVar6 != 0) {
    func_0x0412a280(lVar6,lVar11 - lVar6);
  }
  *(long *)(in_stack_00000028 + 0x38) = lVar7;
  if (in_stack_00000080 == (long *)&stack0x00000060) {
    lVar6 = 0x20;
LAB_0d234c60:
    (**(code **)(*in_stack_00000080 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (in_stack_00000080 != (long *)0x0) goto LAB_0d234c60;
  }
  if (((ulong)in_stack_00000040 & 1) != 0) {
    func_0x0412a280(in_stack_00000050,(ulong)in_stack_00000040 & 0xfffffffffffffffe);
  }
  uVar20 = (int)(unaff_R12 - in_stack_00000030 >> 4) * -0x33333333;
  if (in_stack_000000c0 == (long *)&stack0x000000a0) {
    lVar6 = 0x20;
LAB_0d234afd:
    (**(code **)(*in_stack_000000c0 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (in_stack_000000c0 != (long *)0x0) goto LAB_0d234afd;
  }
  if (unaff_R15 < 0xfffffffffffffff8) {
    if (unaff_R15 < 0x17) {
      _bStack0000000000000010 = CONCAT71(uStack0000000000000011,(char)unaff_R15 * '\x02');
      lVar6 = (long)&stack0x00000010 + 1;
      if (unaff_R15 != 0) goto LAB_0d234b7d;
    }
    else {
      uVar17 = 0x1a;
      if ((unaff_R15 | 7) != 0x17) {
        uVar17 = (unaff_R15 | 7) + 1;
      }
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (lVar6 == 0) {
        func_0x0eec74c0(uVar17,0);
      }
      _bStack0000000000000010 = uVar17 | 1;
      in_stack_00000018 = unaff_R15;
      in_stack_00000020 = lVar6;
LAB_0d234b7d:
      func_0x0eee2f00(lVar6,in_stack_00000008);
    }
    *(undefined1 *)(lVar6 + unaff_R15) = 0;
    uVar17 = _bStack0000000000000010 >> 1 & 0x7f;
    lVar6 = (long)&stack0x00000010 + 1;
    if ((_bStack0000000000000010 & 1) != 0) {
      uVar17 = in_stack_00000018;
      lVar6 = in_stack_00000020;
    }
    uVar8 = func_0x04883620(&stack0x00000040,lVar6,uVar17);
    plVar14 = (long *)(in_stack_00000028 + 0xb8);
    uVar17 = *(ulong *)(in_stack_00000028 + 0xc0);
    if (uVar17 != 0) {
      uVar9 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar9 >> 0x38 < 2) {
        in_stack_00000008 = uVar17 - 1 & uVar8;
      }
      else {
        in_stack_00000008 = uVar8;
        if (uVar17 <= uVar8) {
          if ((uVar8 | uVar17) >> 0x20 == 0) {
            in_stack_00000008 = (uVar8 & 0xffffffff) % (uVar17 & 0xffffffff);
          }
          else {
            in_stack_00000008 = uVar8 % uVar17;
          }
        }
      }
      puVar3 = *(undefined8 **)(*plVar14 + in_stack_00000008 * 8);
      if ((puVar3 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar3, plVar10 != (long *)0x0)) {
        bVar21 = bStack0000000000000010 & 1;
        lVar6 = in_stack_00000020;
        uVar18 = in_stack_00000018;
        if ((_bStack0000000000000010 & 1) == 0) {
          lVar6 = (long)&stack0x00000010 + 1;
          uVar18 = (ulong)(bStack0000000000000010 >> 1);
        }
        if ((byte)(uVar9 >> 0x38) < 2) {
          uVar9 = uVar17 - 1;
          in_stack_00000098 = uVar9;
          do {
            if (plVar10[1] == uVar8) {
              bVar1 = *(byte *)(plVar10 + 2);
              if ((bVar1 & 1) == 0) {
                uVar12 = (ulong)(bVar1 >> 1);
              }
              else {
                uVar12 = plVar10[3];
              }
              if (uVar12 == uVar18) {
                if ((bVar1 & 1) == 0) {
                  lVar11 = (long)plVar10 + 0x11;
                }
                else {
                  lVar11 = plVar10[4];
                }
                iVar5 = func_0x0eee3000(lVar11,lVar6,uVar18);
                uVar9 = in_stack_00000098;
                if (iVar5 == 0) goto LAB_0d2353e2;
              }
            }
            else if ((plVar10[1] & uVar9) != in_stack_00000008) break;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar10[1];
            if (uVar9 == uVar8) {
              bVar1 = *(byte *)(plVar10 + 2);
              if ((bVar1 & 1) == 0) {
                uVar9 = (ulong)(bVar1 >> 1);
              }
              else {
                uVar9 = plVar10[3];
              }
              if (uVar9 == uVar18) {
                if ((bVar1 & 1) == 0) {
                  lVar11 = (long)plVar10 + 0x11;
                }
                else {
                  lVar11 = plVar10[4];
                }
                iVar5 = func_0x0eee3000(lVar11,lVar6,uVar18);
                if (iVar5 == 0) goto LAB_0d2353e2;
              }
            }
            else {
              if (uVar17 <= uVar9) {
                if ((uVar9 | uVar17) >> 0x20 == 0) {
                  uVar9 = (uVar9 & 0xffffffff) % (uVar17 & 0xffffffff);
                }
                else {
                  uVar9 = uVar9 % uVar17;
                }
              }
              if (uVar9 != in_stack_00000008) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    in_stack_00000050 = 1;
    *plVar10 = 0;
    plVar10[1] = uVar8;
    plVar10[4] = in_stack_00000020;
    plVar10[2] = _bStack0000000000000010;
    plVar10[3] = in_stack_00000018;
    _bStack0000000000000010 = 0;
    in_stack_00000020 = 0;
    *(undefined2 *)(plVar10 + 5) = 0;
    *(undefined1 *)((long)plVar10 + 0x2a) = 0;
    fVar23 = (float)(*(long *)(in_stack_00000028 + 0xd0) + 1);
    in_stack_00000040 = plVar10;
    in_stack_00000048 = plVar14;
    if ((long)uVar17 < 0) {
      fVar25 = (float)uVar17;
      fVar24 = *(float *)(in_stack_00000028 + 0xd8);
      if (uVar17 != 0) goto LAB_0d234f02;
LAB_0d234f13:
      uVar9 = 1;
      if (2 < uVar17) {
        uVar9 = (ulong)((uVar17 & uVar17 - 1) != 0);
      }
      uVar9 = uVar9 | uVar17 * 2;
      fVar23 = (float)func_0x0eee3ab0(fVar23 / fVar24);
      uVar17 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
      if (uVar17 < uVar9) {
        uVar17 = uVar9;
      }
      uVar9 = 2;
      if ((uVar17 == 1) || (uVar9 = uVar17, (uVar17 & uVar17 - 1) == 0)) {
        uVar17 = *(ulong *)(in_stack_00000028 + 0xc0);
        bVar22 = uVar9 < uVar17;
        if (uVar9 <= uVar17) goto LAB_0d2350c8;
LAB_0d234fa5:
        if (uVar9 >> 0x3d != 0) goto LAB_0d23556c;
        lVar6 = uVar9 * 8;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar6);
        if (lVar11 == 0) {
          func_0x0eec74c0(lVar6,0);
        }
        lVar7 = *plVar14;
        *plVar14 = lVar11;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,*(long *)(in_stack_00000028 + 0xc0) << 3);
          lVar11 = *(long *)(in_stack_00000028 + 0xb8);
        }
        *(ulong *)(in_stack_00000028 + 0xc0) = uVar9;
        func_0x0eee2dd0(lVar11,0,lVar6);
        plVar16 = *(long **)(in_stack_00000028 + 200);
        if (plVar16 != (long *)0x0) {
          uVar18 = plVar16[1];
          uVar17 = uVar9 - 1;
          if ((uVar9 & uVar17) == 0) {
            *(long *)(lVar11 + (uVar18 & uVar17) * 8) = in_stack_00000028 + 200;
            uVar9 = uVar18 & uVar17;
            while (plVar19 = plVar16, plVar16 = (long *)*plVar19, plVar16 != (long *)0x0) {
              uVar18 = plVar16[1] & uVar17;
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
            if (uVar9 <= uVar18) {
              if ((uVar18 | uVar9) >> 0x20 == 0) {
                uVar18 = (uVar18 & 0xffffffff) % (uVar9 & 0xffffffff);
              }
              else {
                uVar18 = uVar18 % uVar9;
              }
            }
            *(long *)(lVar11 + uVar18 * 8) = in_stack_00000028 + 200;
            plVar19 = (long *)*plVar16;
            while (plVar19 != (long *)0x0) {
              uVar17 = plVar19[1];
              if (uVar9 <= uVar17) {
                if ((uVar17 | uVar9) >> 0x20 == 0) {
                  uVar17 = (uVar17 & 0xffffffff) % (uVar9 & 0xffffffff);
                }
                else {
                  uVar17 = uVar17 % uVar9;
                }
              }
              if (uVar17 != uVar18) {
                if (*(long *)(lVar11 + uVar17 * 8) == 0) {
                  *(long **)(lVar11 + uVar17 * 8) = plVar16;
                  uVar18 = uVar17;
                }
                else {
                  *plVar16 = *plVar19;
                  *plVar19 = **(long **)(lVar11 + uVar17 * 8);
                  **(undefined8 **)(lVar11 + uVar17 * 8) = plVar19;
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
        uVar9 = func_0x0412c3f0();
        uVar17 = *(ulong *)(in_stack_00000028 + 0xc0);
        bVar22 = uVar9 < uVar17;
        if (uVar17 < uVar9) goto LAB_0d234fa5;
LAB_0d2350c8:
        if (bVar22) {
          fVar23 = (float)func_0x0eee3ab0((float)*(ulong *)(in_stack_00000028 + 0xd0) /
                                          *(float *)(in_stack_00000028 + 0xd8));
          uVar18 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
          if ((uVar17 < 3) ||
             (uVar12 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
             uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
             1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar18 = func_0x0412c3f0(uVar18);
            if (uVar18 < uVar9) {
              uVar18 = uVar9;
            }
          }
          else {
            if (1 < uVar18) {
              lVar6 = 0x3f;
              if (uVar18 - 1 != 0) {
                for (; uVar18 - 1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              uVar18 = 1L << (-((byte)lVar6 ^ 0x3f) & 0x3f);
            }
            if (uVar18 < uVar9) {
              uVar18 = uVar9;
            }
          }
          uVar9 = uVar18;
          if (uVar9 < uVar17) {
            if (uVar9 != 0) goto LAB_0d234fa5;
            lVar6 = *plVar14;
            *plVar14 = 0;
            if (lVar6 != 0) {
              func_0x0412a280(lVar6,*(long *)(in_stack_00000028 + 0xc0) << 3);
            }
            *(undefined8 *)(in_stack_00000028 + 0xc0) = 0;
          }
        }
      }
      uVar17 = *(ulong *)(in_stack_00000028 + 0xc0);
      if ((uVar17 & uVar17 - 1) == 0) {
        in_stack_00000008 = uVar8 & uVar17 - 1;
      }
      else {
        in_stack_00000008 = uVar8;
        if (uVar17 <= uVar8) {
          if ((uVar8 | uVar17) >> 0x20 == 0) {
            in_stack_00000008 = (uVar8 & 0xffffffff) % (uVar17 & 0xffffffff);
          }
          else {
            in_stack_00000008 = uVar8 % uVar17;
          }
        }
      }
    }
    else {
      fVar25 = (float)(long)uVar17;
      fVar24 = *(float *)(in_stack_00000028 + 0xd8);
      if (uVar17 == 0) goto LAB_0d234f13;
LAB_0d234f02:
      if (fVar25 * fVar24 < fVar23) goto LAB_0d234f13;
    }
    lVar6 = *plVar14;
    plVar14 = *(long **)(lVar6 + in_stack_00000008 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar10 = *(long *)(in_stack_00000028 + 200);
      *(long **)(in_stack_00000028 + 200) = plVar10;
      *(long *)(lVar6 + in_stack_00000008 * 8) = in_stack_00000028 + 200;
      if (*plVar10 != 0) {
        uVar8 = *(ulong *)(*plVar10 + 8);
        if ((uVar17 & uVar17 - 1) == 0) {
          *(long **)(lVar6 + (uVar8 & uVar17 - 1) * 8) = plVar10;
        }
        else {
          if (uVar17 <= uVar8) {
            if ((uVar8 | uVar17) >> 0x20 == 0) {
              *(long **)(lVar6 + ((uVar8 & 0xffffffff) % (uVar17 & 0xffffffff)) * 8) = plVar10;
              goto LAB_0d2353d1;
            }
            uVar8 = uVar8 % uVar17;
          }
          *(long **)(lVar6 + uVar8 * 8) = plVar10;
        }
      }
    }
    else {
      *plVar10 = *plVar14;
      *plVar14 = (long)plVar10;
    }
LAB_0d2353d1:
    *(long *)(in_stack_00000028 + 0xd0) = *(long *)(in_stack_00000028 + 0xd0) + 1;
    bVar21 = bStack0000000000000010 & 1;
LAB_0d2353e2:
    *(short *)(plVar10 + 5) = (short)uVar20;
    *(undefined1 *)((long)plVar10 + 0x2a) = 0;
    if (bVar21 != 0) {
      func_0x0412a280(in_stack_00000020,_bStack0000000000000010 & 0xfffffffffffffffe);
    }
    return (ulong)uVar20;
  }
  func_0x04882e30();
  func_0x0d263260();
LAB_0d23556c:
  func_0x04882eb0();
  uVar13 = func_0x04882eb0();
  uVar13 = func_0x04882e20(uVar13);
  uVar13 = func_0x04882e20(uVar13);
  uVar13 = func_0x04882e20(uVar13);
  uVar13 = func_0x04882e20(uVar13);
  uVar13 = func_0x04882e20(uVar13);
  plVar14 = (long *)func_0x04882e20(uVar13);
  func_0x0d266e90(&stack0x00000040);
  if ((_bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,_bStack0000000000000010 & 0xfffffffffffffffe);
    uVar13 = func_0x0eee2d70(plVar14);
    plVar14 = (long *)func_0x04882e20(uVar13);
    lVar6 = 0x20;
    plVar10 = in_stack_000000c0;
    if ((in_stack_000000c0 == (long *)&stack0x000000a0) ||
       (lVar6 = 0x28, in_stack_000000c0 != (long *)0x0)) goto LAB_0d235620;
  }
  plVar10 = plVar14;
  lVar6 = func_0x0eee2d70();
LAB_0d235620:
  (**(code **)(*plVar10 + lVar6))();
  uVar13 = func_0x0eee2d70(plVar14);
  func_0x04882e20(uVar13);
  pcVar4 = (code *)swi(3);
  uVar17 = (*pcVar4)();
  return uVar17;
}


