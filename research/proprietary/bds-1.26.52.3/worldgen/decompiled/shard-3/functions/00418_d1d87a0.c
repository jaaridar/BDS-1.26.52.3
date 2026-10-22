/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d87a0 (ELF vaddr 0xd1d87a0)
 * Label: br::worldgen::processors::JigsawReplacement::vslot2
 * Body:  [[0d2d87a0, 0d2d8ce1] [0d2d8cf0, 0d2d8d31] [0d2d8d40, 0d2d8e66] [0d2d8e70, 0d2d8f32] [0d2d8f40, 0d2d962d] [0d2d96c9, 0d2d9710] [0d2d971e, 0d2d978f]]
 * Ghidra: wg_br__worldgen__processors__JigsawReplacement__vslot2
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_br__worldgen__processors__JigsawReplacement__vslot2(undefined8 *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  byte bVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined8 *in_stack_00000018;
  int *piStack_158;
  int *piStack_150;
  int *piStack_148;
  undefined1 auStack_138 [4];
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int *piStack_128;
  int *piStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int *piStack_108;
  int *piStack_100;
  int **ppiStack_f8;
  ulong uStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_60;
  undefined1 uStack_58;
  undefined8 uStack_54;
  undefined1 uStack_4c;
  ulong uStack_48;
  int *piStack_40;
  undefined *puStack_38;
  
  if (_DAT_0f71e6e8 != *(long *)(in_stack_00000018[2] + 0x68)) {
    uVar14 = *in_stack_00000018;
    uVar3 = in_stack_00000018[1];
    uVar4 = in_stack_00000018[3];
    param_1[2] = in_stack_00000018[2];
    param_1[3] = uVar4;
    *param_1 = uVar14;
    param_1[1] = uVar3;
    lVar9 = in_stack_00000018[5];
    uVar14 = in_stack_00000018[5];
    param_1[4] = in_stack_00000018[4];
    param_1[5] = uVar14;
joined_r0x0d2d88dc:
    if (lVar9 != 0) {
      LOCK();
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    return param_1;
  }
  lVar9 = in_stack_00000018[4];
  if (*(long *)(lVar9 + 0x18) == 0) {
    uVar14 = *in_stack_00000018;
    uVar3 = in_stack_00000018[1];
    uVar4 = in_stack_00000018[3];
    param_1[2] = in_stack_00000018[2];
    param_1[3] = uVar4;
    *param_1 = uVar14;
    param_1[1] = uVar3;
    param_1[4] = lVar9;
    lVar9 = in_stack_00000018[5];
    param_1[5] = lVar9;
    goto joined_r0x0d2d88dc;
  }
  uStack_68 = 0;
  piStack_60 = (int *)0x0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  puStack_38 = &UNK_0f087d20;
  func_0x0d3b00e0(&uStack_b8,lVar9,&puStack_38);
  puStack_c0 = param_1;
  if ((uStack_70 & 1) == 0) {
    piStack_128 = piStack_60;
    auStack_138 = (undefined1  [4])(uint)uStack_70;
    uStack_134 = uStack_70._4_4_;
    uStack_130 = (undefined4)uStack_68;
    uStack_12c = uStack_68._4_4_;
  }
  else {
    func_0x0412e5e0(auStack_138,piStack_60,uStack_68);
  }
  piVar17 = piStack_128;
  piVar10 = (int *)(ulong)(auStack_138[0] >> 1);
  uVar5 = (uint)auStack_138 & 1;
  bVar20 = auStack_138[0] & 1;
  piVar8 = (int *)CONCAT44(uStack_12c,uStack_130);
  piVar19 = piVar8;
  piVar25 = piStack_128;
  if (((uint)auStack_138 & 1) == 0) {
    piVar19 = piVar10;
    piVar25 = (int *)(auStack_138 + 1);
  }
  if (9 < (long)piVar19) {
    piVar7 = piVar25;
    piVar16 = piVar19;
    piStack_120 = piVar8;
    while (plVar6 = (long *)func_0x0eee2ef0(piVar7,0x6d,(char *)((long)piVar16 + -9)),
          piVar8 = piStack_120, plVar6 != (long *)0x0) {
      if ((short)plVar6[1] == 0x3a74 && *plVar6 == 0x66617263656e696d) {
        if ((long)plVar6 - (long)piVar25 != -1 && plVar6 != (long *)((long)piVar25 + (long)piVar19))
        {
          pcVar15 = (char *)((long)&uStack_130 + 3);
          if (uVar5 != 0) {
            pcVar15 = (char *)((long)piVar17 + 10);
          }
          piVar19 = (int *)((long)piVar19 + -10);
          if (piVar19 < (int *)0x17) {
            uStack_118 = (int *)CONCAT71(uStack_118._1_7_,(char)piVar19 * '\x02');
            piVar25 = (int *)((long)&uStack_118 + 1);
            if (piVar19 != (int *)0x0) goto LAB_0d2d9529;
          }
          else {
            uVar24 = 0x1a;
            if (((ulong)piVar19 | 7) != 0x17) {
              uVar24 = ((ulong)piVar19 | 7) + 1;
            }
            piVar25 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
            if (piVar25 == (int *)0x0) {
              FUN_0eec74c0(uVar24,0);
            }
            uStack_118 = (int *)(uVar24 | 1);
            uStack_110 = piVar19;
            piStack_108 = piVar25;
LAB_0d2d9529:
            func_0x0eee2ee0(piVar25,pcVar15,piVar19);
          }
          *(char *)((long)piVar25 + (long)piVar19) = '\0';
          if (((uint)auStack_138 & 1) != 0) {
            func_0x0412a280(piStack_128,CONCAT44(uStack_134,auStack_138) & 0xfffffffffffffffe);
          }
          piStack_128 = piStack_108;
          uStack_134 = uStack_118._4_4_;
          uStack_130 = (undefined4)uStack_110;
          uStack_12c = uStack_110._4_4_;
          auStack_138[0] = (byte)uStack_118;
          bVar20 = auStack_138[0] & 1;
          piVar10 = (int *)(ulong)(auStack_138[0] >> 1);
          piVar8 = uStack_110;
          piVar17 = piStack_108;
          auStack_138 = (undefined1  [4])(uint)uStack_118;
        }
        break;
      }
      piVar7 = (int *)((long)plVar6 + 1);
      piVar16 = (int *)(((long)piVar25 + (long)piVar19) - (long)piVar7);
      if ((long)piVar16 < 10) break;
    }
  }
  piVar25 = (int *)(auStack_138 + 1);
  if (bVar20 != 0) {
    piVar10 = piVar8;
    piVar25 = piVar17;
  }
  if (0 < (long)piVar10) {
    piVar8 = piVar25;
    piVar17 = piVar10;
    while (piVar8 = (int *)func_0x0eee2ef0(piVar8,0x5b,piVar17), piVar8 != (int *)0x0) {
      if ((char)*piVar8 == '[') {
        piVar17 = (int *)((long)piVar8 - (long)piVar25);
        if (piVar17 != (int *)0xffffffffffffffff && piVar8 != (int *)((long)piVar10 + (long)piVar25)
           ) {
          if (piVar10 < piVar17) {
            piVar17 = piVar10;
          }
          if ((int *)0xfffffffffffffff7 < piVar17) goto LAB_0d2d9611;
          if (piVar17 < (int *)0x17) {
            uStack_118 = (int *)CONCAT71(uStack_118._1_7_,(char)piVar17 * '\x02');
            piVar10 = (int *)((long)&uStack_118 + 1);
            if (piVar8 != piVar25) goto LAB_0d2d8af5;
          }
          else {
            uVar24 = 0x1a;
            if (((ulong)piVar17 | 7) != 0x17) {
              uVar24 = ((ulong)piVar17 | 7) + 1;
            }
            piVar10 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
            if (piVar10 == (int *)0x0) {
              FUN_0eec74c0(uVar24,0);
            }
            uStack_118 = (int *)(uVar24 | 1);
            uStack_110 = piVar17;
            piStack_108 = piVar10;
LAB_0d2d8af5:
            func_0x0eee2ee0(piVar10,piVar25,piVar17);
          }
          *(char *)((long)piVar10 + (long)piVar17) = '\0';
          if (((uint)auStack_138 & 1) != 0) {
            func_0x0412a280(piStack_128,CONCAT44(uStack_134,auStack_138) & 0xfffffffffffffffe);
          }
          piStack_128 = piStack_108;
          auStack_138 = (undefined1  [4])(uint)uStack_118;
          uStack_134 = uStack_118._4_4_;
          uStack_130 = (undefined4)uStack_110;
          uStack_12c = uStack_110._4_4_;
        }
        break;
      }
      piVar8 = (int *)((long)piVar8 + 1);
      piVar17 = (int *)(((long)piVar10 + (long)piVar25) - (long)piVar8);
      if ((long)piVar17 < 1) break;
    }
  }
  uVar24 = uStack_70 >> 1 & 0x7f;
  piVar25 = (int *)((long)&uStack_70 + 1);
  if ((uStack_70 & 1) != 0) {
    uVar24 = uStack_68;
    piVar25 = piStack_60;
  }
  if (uVar24 != 0) {
    lVar9 = func_0x0eee2ef0(piVar25,0x5b,uVar24);
    uVar21 = -(ulong)(lVar9 == 0) | lVar9 - (long)piVar25;
    lVar9 = func_0x0eee2ef0(piVar25,0x5d,uVar24);
    uVar22 = -(ulong)(lVar9 == 0) | lVar9 - (long)piVar25;
    if (((uVar21 <= uVar22) && (uVar21 != 0xffffffffffffffff)) && (uVar22 != 0xffffffffffffffff)) {
      if (uVar24 <= uVar21) {
LAB_0d2d9600:
        func_0x04882ef0(&UNK_01306d2f);
LAB_0d2d960c:
        func_0x0d2e1af0();
LAB_0d2d9611:
        func_0x04882e30();
LAB_0d2d9616:
        uVar14 = func_0x04882eb0();
        if (((uint)auStack_138 & 1) == 0) goto LAB_0d2d96da;
        do {
          func_0x0412a280(piStack_128,CONCAT44(uStack_134,auStack_138) & 0xfffffffffffffffe);
          func_0x0623ff60(&uStack_b8);
          uVar14 = func_0x0eee2d70(uVar14);
          while( true ) {
            if (((ulong)uStack_118 & 1) != 0) {
              func_0x0412a280(piStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
            }
            if (piStack_158 != (int *)0x0) {
              piStack_150 = piStack_158;
              func_0x0412a280(piStack_158,(long)piStack_148 - (long)piStack_158);
            }
            if (((uint)auStack_138 & 1) != 0) break;
LAB_0d2d96da:
            func_0x0623ff60(&uStack_b8);
            func_0x0eee2d70(uVar14);
            func_0x0412a280(lStack_c8,uStack_d8 & 0xfffffffffffffffe);
          }
        } while( true );
      }
      piStack_158 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
      if (piStack_158 == (int *)0x0) {
        FUN_0eec74c0(0x200,0);
      }
      uVar24 = uVar24 - (uVar21 + 1);
      uVar22 = uVar22 - (uVar21 + 1);
      if (uVar24 < uVar22) {
        uVar22 = uVar24;
      }
      piStack_148 = piStack_158 + 0x80;
      piVar25 = (int *)((long)piVar25 + uVar21 + 1);
      piStack_150 = piStack_158;
      do {
        if (uVar22 == 0) break;
        lVar9 = func_0x0eee2ef0(piVar25,0x2c,uVar22);
        uVar24 = lVar9 - (long)piVar25;
        if (uVar24 == 0xffffffffffffffff || lVar9 == 0) {
          uVar21 = 0;
          piVar8 = (int *)0x0;
          uVar24 = uVar22;
LAB_0d2d8f60:
          lVar9 = func_0x0eee2ef0(piVar25,0x3d,uVar24);
          piVar17 = piStack_158;
          uVar12 = lVar9 - (long)piVar25;
          uVar22 = uVar21;
          piVar10 = piStack_148;
          if (uVar12 != 0xffffffffffffffff && lVar9 != 0) {
            uVar23 = uVar12;
            if (uVar24 < uVar12) {
              uVar23 = uVar24;
            }
            if (uVar24 <= uVar12) goto LAB_0d2d95ea;
            pcVar15 = (char *)((long)piVar25 + uVar12 + 1);
            lVar9 = uVar24 - (uVar12 + 1);
            if ((uVar23 == 4) && (*piVar25 == 0x666c6168)) {
              if (piStack_150 < piStack_148) {
                if (piStack_158 == piStack_150) {
                  *(int **)piStack_150 = piVar25;
                  piStack_150[2] = 4;
                  piStack_150[3] = 0;
                  *(char **)(piStack_150 + 4) = pcVar15;
                  *(long *)(piStack_150 + 6) = lVar9;
                  piStack_150 = piStack_150 + 8;
                }
                else {
                  piVar10 = piStack_150;
                  if (piStack_150 + -8 < piStack_150) {
                    piVar10 = piStack_150 + 8;
                    *(undefined8 *)(piStack_150 + 4) = *(undefined8 *)(piStack_150 + -4);
                    *(undefined8 *)(piStack_150 + 6) = *(undefined8 *)(piStack_150 + -2);
                    *piStack_150 = piStack_150[-8];
                    piStack_150[1] = piStack_150[-7];
                    piStack_150[2] = piStack_150[-6];
                    piStack_150[3] = piStack_150[-5];
                  }
                  bVar27 = piStack_150 != piStack_158 + 8;
                  piStack_150 = piVar10;
                  if (bVar27) {
                    func_0x0eee2ee0(piStack_158 + 8,piStack_158);
                  }
                  *(int **)piVar17 = piVar25;
                  piVar17[2] = 4;
                  piVar17[3] = 0;
                  *(char **)(piVar17 + 4) = pcVar15;
                  *(long *)(piVar17 + 6) = lVar9;
                  piVar17 = piStack_158;
                  piVar10 = piStack_148;
                }
              }
              else {
                lVar11 = (long)piStack_150 - (long)piStack_158;
                uVar24 = (lVar11 >> 5) + 1;
                if (0x7ffffffffffffff < uVar24) goto LAB_0d2d960c;
                piStack_e0 = piStack_158;
                uVar22 = (long)piStack_148 - (long)piStack_158 >> 4;
                if (uVar22 <= uVar24) {
                  uVar22 = uVar24;
                }
                if (0x7fffffffffffffdf < (ulong)((long)piStack_148 - (long)piStack_158)) {
                  uVar22 = 0x7ffffffffffffff;
                }
                ppiStack_f8 = &piStack_158;
                if (uVar22 == 0) {
                  piStack_108 = (int *)0x0;
                  piStack_100 = (int *)0x0;
                  uStack_118 = (int *)0x0;
                  uStack_110 = (int *)0x0;
                  piStack_120 = piVar8;
                  uStack_e8 = uVar21;
                  piVar17 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                  if (piVar17 == (int *)0x0) {
                    FUN_0eec74c0(0x20,0);
                  }
                  piVar10 = piVar17 + 8;
                }
                else {
                  piStack_120 = piVar8;
                  uStack_e8 = uVar21;
                  if (0x7ffffffffffffff < uVar22) goto LAB_0d2d9616;
                  piVar17 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22 * 0x20);
                  if (piVar17 == (int *)0x0) {
                    FUN_0eec74c0(uVar22 * 0x20,0);
                  }
                  piVar10 = piVar17 + uVar22 * 8;
                  uStack_118 = piVar17;
                  uStack_110 = piVar17;
                  piStack_108 = piVar17;
                  piStack_100 = piVar10;
                }
                piVar8 = piStack_e0;
                *(int **)piVar17 = piVar25;
                piVar17[2] = 4;
                piVar17[3] = 0;
                *(char **)(piVar17 + 4) = pcVar15;
                *(long *)(piVar17 + 6) = lVar9;
                func_0x0eee2f00(piVar17 + 8,piStack_e0,lVar11);
                piVar19 = (int *)((long)piVar17 + (long)((long)piStack_150 + (0x20 - (long)piVar8)))
                ;
                piStack_150 = piVar8;
                piVar17 = (int *)((long)piVar17 - ((long)piVar8 - (long)piStack_158));
                func_0x0eee2f00(piVar17,piStack_158,(long)piVar8 - (long)piStack_158);
                piVar25 = piStack_158;
                piVar8 = piStack_120;
                uVar22 = uStack_e8;
                piStack_150 = piVar19;
                if (piStack_158 != (int *)0x0) {
                  lVar9 = (long)piStack_148 - (long)piStack_158;
                  piStack_158 = piVar17;
                  piStack_148 = piVar10;
                  func_0x0412a280(piVar25,lVar9);
                  piVar8 = piStack_120;
                  uVar22 = uStack_e8;
                  piVar17 = piStack_158;
                  piVar10 = piStack_148;
                }
              }
            }
            else if (piStack_150 < piStack_148) {
              *(int **)piStack_150 = piVar25;
              *(ulong *)(piStack_150 + 2) = uVar23;
              *(char **)(piStack_150 + 4) = pcVar15;
              *(long *)(piStack_150 + 6) = lVar9;
              piStack_150 = piStack_150 + 8;
            }
            else {
              piStack_e0 = (int *)((long)piStack_150 - (long)piStack_158);
              lVar11 = (long)piStack_e0 >> 5;
              uVar24 = lVar11 + 1;
              piStack_120 = piVar8;
              uStack_e8 = uVar21;
              if (0x7ffffffffffffff < uVar24) goto LAB_0d2d95fb;
              piStack_40 = piStack_158;
              uStack_48 = (long)piStack_148 - (long)piStack_158;
              uVar22 = (long)uStack_48 >> 4;
              if ((ulong)((long)uStack_48 >> 4) <= uVar24) {
                uVar22 = uVar24;
              }
              if (0x7fffffffffffffdf < uStack_48) {
                uVar22 = 0x7ffffffffffffff;
              }
              if (0x7ffffffffffffff < uVar22) goto LAB_0d2d95f6;
              lVar18 = uVar22 * 0x20;
              lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
              if (lVar13 == 0) {
                FUN_0eec74c0(lVar18,0);
              }
              piVar19 = piStack_40;
              *(int **)(lVar13 + (long)piStack_e0) = piVar25;
              *(ulong *)(lVar13 + 8 + (long)piStack_e0) = uVar23;
              *(char **)(lVar13 + 0x10 + (long)piStack_e0) = pcVar15;
              *(long *)(lVar13 + 0x18 + (long)piStack_e0) = lVar9;
              piVar25 = (int *)((long)piStack_e0 + lVar13 + 0x20);
              piVar17 = (int *)((long)piStack_e0 + lVar11 * -0x20 + lVar13);
              func_0x0eee2f00(piVar17,piStack_40);
              piVar8 = piStack_120;
              uVar22 = uStack_e8;
              piStack_150 = piVar25;
              piVar10 = (int *)(lVar18 + lVar13);
              if (piVar19 != (int *)0x0) {
                piStack_158 = piVar17;
                piStack_148 = (int *)(lVar18 + lVar13);
                func_0x0412a280(piVar19,uStack_48);
                piVar8 = piStack_120;
                uVar22 = uStack_e8;
                piVar17 = piStack_158;
                piStack_150 = piVar25;
                piVar10 = piStack_148;
              }
            }
          }
        }
        else {
          if (uVar22 <= uVar24) goto LAB_0d2d95de;
          piVar8 = (int *)((long)piVar25 + uVar24 + 1);
          uVar21 = uVar22 - (uVar24 + 1);
          uVar22 = uVar21;
          piVar17 = piStack_158;
          piVar10 = piStack_148;
          if (uVar24 != 0) goto LAB_0d2d8f60;
        }
        piStack_148 = piVar10;
        piStack_158 = piVar17;
        piVar25 = piVar8;
      } while (uVar22 != 0);
      goto LAB_0d2d8c3e;
    }
  }
  piStack_158 = (int *)0x0;
  piStack_150 = (int *)0x0;
  piStack_148 = (int *)0x0;
LAB_0d2d8c3e:
  lVar9 = func_0x0d379e60(auStack_138);
  piVar8 = piStack_150;
  piVar25 = piStack_158;
  if (lVar9 == 0) {
    lVar9 = _DAT_0f71e6e0;
  }
  do {
    if (piVar25 == piVar8) {
joined_r0x0d2d94d2:
      if (piStack_158 != (int *)0x0) {
        piStack_150 = piStack_158;
        func_0x0412a280(piStack_158,(long)piStack_148 - (long)piStack_158);
      }
      puVar26 = puStack_c0;
      if (((uint)auStack_138 & 1) != 0) {
        func_0x0412a280(piStack_128,CONCAT44(uStack_134,auStack_138) & 0xfffffffffffffffe);
        puVar26 = puStack_c0;
      }
      puStack_c0 = puVar26;
      if ((uStack_70 & 1) != 0) {
        func_0x0412a280(piStack_60,uStack_70 & 0xfffffffffffffffe);
      }
      if ((uStack_88 & 1) != 0) {
        func_0x0412a280(uStack_78,uStack_88 & 0xfffffffffffffffe);
      }
      if ((uStack_a0 & 1) != 0) {
        func_0x0412a280(uStack_90,uStack_a0 & 0xfffffffffffffffe);
      }
      if ((uStack_b8 & 1) != 0) {
        func_0x0412a280(uStack_a8,uStack_b8 & 0xfffffffffffffffe);
      }
      if ((lVar9 != 0) && (_DAT_0f71e6f0 != *(long *)(lVar9 + 0x68))) {
        uVar14 = *in_stack_00000018;
        uVar2 = *(undefined4 *)(in_stack_00000018 + 1);
        plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (plVar6 == (long *)0x0) {
          FUN_0eec74c0(0x38,0);
          puVar26 = puStack_c0;
        }
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&UNK_0f45f370;
        plVar6[3] = (long)&UNK_0f47e0b0;
        plVar6[5] = 0;
        plVar6[6] = 0;
        plVar6[4] = (long)(plVar6 + 5);
        *puVar26 = uVar14;
        *(undefined4 *)(puVar26 + 1) = uVar2;
        puVar26[2] = lVar9;
        puVar26[3] = 0;
        puVar26[4] = plVar6 + 3;
        puVar26[5] = plVar6;
        LOCK();
        plVar6[1] = plVar6[1] + 1;
        UNLOCK();
        *(undefined1 *)(puVar26 + 6) = 1;
        LOCK();
        plVar1 = plVar6 + 1;
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 != 0) {
          return puVar26;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
        return puVar26;
      }
      *(undefined1 *)puVar26 = 0;
      *(undefined1 *)((long)puVar26 + 0x30) = 0;
      return puVar26;
    }
    if (lVar9 == 0) {
      lVar9 = 0;
      goto joined_r0x0d2d94d2;
    }
    piVar17 = *(int **)(piVar25 + 2);
    if ((int *)0xfffffffffffffff7 < piVar17) {
LAB_0d2d95d9:
      func_0x04882e30();
LAB_0d2d95de:
      func_0x04882ef0(&UNK_01306d2f);
LAB_0d2d95ea:
      func_0x04882ef0(&UNK_01306d2f);
LAB_0d2d95f6:
      func_0x04882eb0();
LAB_0d2d95fb:
      func_0x0d2e1af0();
      goto LAB_0d2d9600;
    }
    uVar14 = *(undefined8 *)piVar25;
    if (piVar17 < (int *)0x17) {
      uStack_118._1_7_ = (undefined7)((ulong)uStack_118 >> 8);
      uStack_118 = (int *)CONCAT71(uStack_118._1_7_,(char)piVar17 * '\x02');
      piVar10 = (int *)((long)&uStack_118 + 1);
      if (piVar17 != (int *)0x0) goto LAB_0d2d8d8b;
    }
    else {
      uVar24 = ((ulong)piVar17 | 7) + 1;
      if (((ulong)piVar17 | 7) == 0x17) {
        uVar24 = 0x1a;
      }
      piVar10 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
      if (piVar10 == (int *)0x0) {
        FUN_0eec74c0(uVar24,0);
      }
      uStack_118 = (int *)(uVar24 | 1);
      uStack_110 = piVar17;
      piStack_108 = piVar10;
LAB_0d2d8d8b:
      func_0x0eee2ee0(piVar10,uVar14,piVar17);
    }
    *(char *)((long)piVar10 + (long)piVar17) = '\0';
    uVar24 = *(ulong *)(piVar25 + 6);
    if (0xfffffffffffffff7 < uVar24) {
      func_0x04882e30();
      goto LAB_0d2d95d9;
    }
    uVar14 = *(undefined8 *)(piVar25 + 4);
    if (uVar24 < 0x17) {
      uStack_d8 = CONCAT71(uStack_d8._1_7_,(char)uVar24 * '\x02');
      lVar11 = (long)&uStack_d8 + 1;
      if (uVar24 != 0) goto LAB_0d2d8e24;
    }
    else {
      uVar22 = (uVar24 | 7) + 1;
      if ((uVar24 | 7) == 0x17) {
        uVar22 = 0x1a;
      }
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
      if (lVar11 == 0) {
        FUN_0eec74c0(uVar22,0);
      }
      uStack_d8 = uVar22 | 1;
      uStack_d0 = uVar24;
      lStack_c8 = lVar11;
LAB_0d2d8e24:
      func_0x0eee2ee0(lVar11,uVar14,uVar24);
    }
    *(undefined1 *)(lVar11 + uVar24) = 0;
    lVar9 = func_0x0d376010(&uStack_118,&uStack_d8,lVar9);
    if ((uStack_d8 & 1) != 0) {
      func_0x0412a280(lStack_c8,uStack_d8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_118 & 1) != 0) {
      func_0x0412a280(piStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
    }
    piVar25 = piVar25 + 8;
  } while( true );
}


