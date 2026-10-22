/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x764b410
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot4
 * Body:  [[0764a0d5, 0764a105] [0764b100, 0764b40c] [0764b410, 0764b456] [0764b460, 0764b729]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot4
 */


void wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong in_RAX;
  long *plVar14;
  undefined8 *unaff_RBX;
  long unaff_RBP;
  ulong uVar15;
  ulong uVar16;
  long unaff_R12;
  long lVar17;
  ulong uVar18;
  long unaff_R13;
  uint uVar19;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  uint in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000f8;
  ulong in_stack_00000100;
  
  plVar14 = (long *)(in_RAX & 0xffffffffffffff28);
  do {
    func_0x07649c00(param_1,&stack0x00000050);
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        unaff_RBP = unaff_RBP + -1;
                        if (unaff_RBP == 0) {
                          lVar8 = plVar14[6];
                          if (unaff_R12 == lVar8) {
                            in_stack_00000028 = &stack0x00000040;
                            in_stack_00000038 = &stack0x00000048;
                            lVar17 = *(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20);
                            in_stack_00000030 = unaff_RBX;
                            if (lVar17 != 0) {
                              uVar18 = lVar17 >> 2;
                              do {
                                uVar18 = uVar18 - 1;
                                uVar1 = *(uint *)(*(long *)(lVar8 + 0x20) + uVar18 * 4);
                                lVar17 = *plVar14;
                                uVar16 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
                                if ((uVar16 < (ulong)(*(long *)(lVar17 + 0x10) -
                                                      *(long *)(lVar17 + 8) >> 3)) &&
                                   (lVar9 = *(long *)(*(long *)(lVar17 + 8) + uVar16 * 8),
                                   lVar9 != 0)) {
                                  uVar15 = (ulong)(uVar1 & 0x7ff);
                                  uVar19 = uVar1 & 0xfffc0000;
                                  uVar2 = *(uint *)(lVar9 + (ulong)(uVar1 & 0x7ff) * 4);
                                  if ((uVar2 ^ uVar19) < 0x3ffff) {
                                    lVar9 = plVar14[1];
                                    if (((uVar16 < (ulong)(*(long *)(lVar9 + 0x10) -
                                                           *(long *)(lVar9 + 8) >> 3)) &&
                                        (lVar10 = *(long *)(*(long *)(lVar9 + 8) + uVar16 * 8),
                                        lVar10 != 0)) &&
                                       (uVar3 = *(uint *)(lVar10 + uVar15 * 4),
                                       (uVar3 ^ uVar19) < 0x3ffff)) {
                                      lVar10 = plVar14[2];
                                      if (((uVar16 < (ulong)(*(long *)(lVar10 + 0x10) -
                                                             *(long *)(lVar10 + 8) >> 3)) &&
                                          (lVar11 = *(long *)(*(long *)(lVar10 + 8) + uVar16 * 8),
                                          lVar11 != 0)) &&
                                         (uVar4 = *(uint *)(lVar11 + uVar15 * 4),
                                         (uVar4 ^ uVar19) < 0x3ffff)) {
                                        lVar11 = plVar14[3];
                                        if (((uVar16 < (ulong)(*(long *)(lVar11 + 0x10) -
                                                               *(long *)(lVar11 + 8) >> 3)) &&
                                            (lVar12 = *(long *)(*(long *)(lVar11 + 8) + uVar16 * 8),
                                            lVar12 != 0)) &&
                                           (uVar5 = *(uint *)(lVar12 + uVar15 * 4),
                                           (uVar5 ^ uVar19) < 0x3ffff)) {
                                          lVar12 = plVar14[4];
                                          if (((((uVar16 < (ulong)(*(long *)(lVar12 + 0x10) -
                                                                   *(long *)(lVar12 + 8) >> 3)) &&
                                                (lVar13 = *(long *)(*(long *)(lVar12 + 8) +
                                                                   uVar16 * 8), lVar13 != 0)) &&
                                               (uVar6 = *(uint *)(lVar13 + uVar15 * 4),
                                               (uVar6 ^ uVar19) < 0x3ffff)) &&
                                              ((lVar13 = *(long *)(plVar14[5] + 8),
                                               uVar16 < (ulong)(*(long *)(plVar14[5] + 0x10) -
                                                                lVar13 >> 3) &&
                                               (lVar13 = *(long *)(lVar13 + uVar16 * 8), lVar13 != 0
                                               )))) && ((uVar19 ^ *(uint *)(lVar13 + uVar15 * 4)) <
                                                        0x3ffff)) {
                                            in_stack_00000088 =
                                                 (ulong)(((uint)uVar18 & 0x7f) * 0x28) +
                                                 *(long *)(*(long *)(lVar8 + 0x50) +
                                                          (uVar18 >> 7) * 8);
                                            in_stack_00000058 =
                                                 (ulong)((uVar2 & 0x7f) * 0x18) +
                                                 *(long *)(*(long *)(lVar17 + 0x50) +
                                                          (ulong)((uVar2 & 0x3ff80) >> 4));
                                            in_stack_00000060 =
                                                 (ulong)(uVar3 & 0x7f) * 100 +
                                                 *(long *)(*(long *)(lVar9 + 0x50) +
                                                          (ulong)((uVar3 & 0x3ff80) >> 4));
                                            in_stack_00000068 =
                                                 (ulong)((uVar4 & 0x7f) * 0x18) +
                                                 *(long *)(*(long *)(lVar10 + 0x50) +
                                                          (ulong)((uVar4 & 0x3ff80) >> 4));
                                            in_stack_00000070 =
                                                 (ulong)((uVar5 & 0x7f) << 2) +
                                                 *(long *)(*(long *)(lVar11 + 0x50) +
                                                          (ulong)((uVar5 & 0x3ff80) >> 4));
                                            in_stack_00000078 =
                                                 (ulong)((uVar6 & 0x7f) * 0x24) +
                                                 *(long *)(*(long *)(lVar12 + 0x50) +
                                                          (ulong)((uVar6 & 0x3ff80) >> 4));
                                            in_stack_00000080 = 0xf554c58;
                                            in_stack_00000050 = uVar1;
                                            func_0x07649c00(&stack0x00000028,&stack0x00000050);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              } while (uVar18 != 0);
                            }
                          }
                          func_0x0d87c330(in_stack_00000090,in_stack_00000040);
                          return;
                        }
                        uVar1 = *(uint *)(*(long *)(unaff_R13 + 0x20) + -4 + unaff_RBP * 4);
                        lVar8 = *plVar14;
                        uVar18 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
                      } while (((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8) >> 3) <=
                                uVar18) ||
                              (lVar17 = *(long *)(*(long *)(lVar8 + 8) + uVar18 * 8), lVar17 == 0));
                      uVar16 = (ulong)(uVar1 & 0x7ff);
                      uVar19 = uVar1 & 0xfffc0000;
                      uVar2 = *(uint *)(lVar17 + (ulong)(uVar1 & 0x7ff) * 4);
                    } while (0x3fffe < (uVar2 ^ uVar19));
                    lVar17 = plVar14[1];
                  } while ((((ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8) >> 3) <=
                             uVar18) ||
                           (lVar9 = *(long *)(*(long *)(lVar17 + 8) + uVar18 * 8), lVar9 == 0)) ||
                          (uVar3 = *(uint *)(lVar9 + uVar16 * 4), 0x3fffe < (uVar3 ^ uVar19)));
                  lVar9 = plVar14[2];
                  unaff_RBX = &stack0x00000090;
                } while (((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8) >> 3) <= uVar18) ||
                        (lVar10 = *(long *)(*(long *)(lVar9 + 8) + uVar18 * 8), lVar10 == 0));
                uVar4 = *(uint *)(lVar10 + uVar16 * 4);
                unaff_RBX = &stack0x00000090;
              } while (0x3fffe < (uVar4 ^ uVar19));
              lVar10 = plVar14[3];
              unaff_RBX = &stack0x00000090;
            } while (((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8) >> 3) <= uVar18) ||
                    (lVar11 = *(long *)(*(long *)(lVar10 + 8) + uVar18 * 8), lVar11 == 0));
            uVar5 = *(uint *)(lVar11 + uVar16 * 4);
            unaff_RBX = &stack0x00000090;
          } while (0x3fffe < (uVar5 ^ uVar19));
          lVar11 = plVar14[4];
          unaff_RBX = &stack0x00000090;
        } while (((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >> 3) <= uVar18) ||
                (lVar12 = *(long *)(*(long *)(lVar11 + 8) + uVar18 * 8), lVar12 == 0));
        uVar6 = *(uint *)(lVar12 + uVar16 * 4);
        in_stack_00000100 = (ulong)uVar6;
        unaff_RBX = &stack0x00000090;
      } while (0x3fffe < (uVar6 ^ uVar19));
      in_stack_000000f8 = plVar14[6];
      unaff_RBX = &stack0x00000090;
    } while ((((ulong)(*(long *)(in_stack_000000f8 + 0x10) - *(long *)(in_stack_000000f8 + 8) >> 3)
               <= uVar18) ||
             (lVar12 = *(long *)(*(long *)(in_stack_000000f8 + 8) + uVar18 * 8), lVar12 == 0)) ||
            (uVar7 = *(uint *)(lVar12 + uVar16 * 4), 0x3fffe < (uVar19 ^ uVar7)));
    in_stack_00000058 =
         (ulong)((uVar2 & 0x7f) * 0x18) +
         *(long *)(*(long *)(lVar8 + 0x50) + (ulong)((uVar2 & 0x3ff80) >> 4));
    unaff_RBX = &stack0x00000090;
    in_stack_00000060 =
         (ulong)(uVar3 & 0x7f) * 100 +
         *(long *)(*(long *)(lVar17 + 0x50) + (ulong)((uVar3 & 0x3ff80) >> 4));
    in_stack_00000068 =
         (ulong)((uVar4 & 0x7f) * 0x18) +
         *(long *)(*(long *)(lVar9 + 0x50) + (ulong)((uVar4 & 0x3ff80) >> 4));
    in_stack_00000070 =
         (ulong)((uVar5 & 0x7f) << 2) +
         *(long *)(*(long *)(lVar10 + 0x50) + (ulong)((uVar5 & 0x3ff80) >> 4));
    in_stack_00000078 =
         (ulong)((uVar6 & 0x7f) * 0x24) +
         *(long *)(*(long *)(lVar11 + 0x50) + (ulong)((uVar6 & 0x3ff80) >> 4));
    in_stack_00000088 =
         (ulong)((uVar7 & 0x7f) * 0x28) +
         *(long *)(*(long *)(in_stack_000000f8 + 0x50) + (ulong)((uVar7 & 0x3ff80) >> 4));
    in_stack_00000080 = 0xf554c58;
    param_1 = &stack0x00000028;
    in_stack_00000050 = uVar1;
  } while( true );
}


