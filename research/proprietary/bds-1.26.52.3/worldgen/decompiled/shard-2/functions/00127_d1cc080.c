/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1cc080
 * Label: string:Identifier '%s' failed validation when registering jigsaw st
 * Body:  [[0d1cc080, 0d1cc10e] [0d1cc110, 0d1cc29b] [0d1cc2a0, 0d1cc305] [0d1cc310, 0d1cc3c7] [0d1cc3d0, 0d1cc5c0] [0d1cc5d0, 0d1cc735] [0d1cc740, 0d1cc905] [0d1cc910, 0d1cc9d7] [0d1cca05, 0d1cca35] [0d1ccb8f, 0d1ccbeb]]
 * Ghidra: FUN_0d1cc080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d1cc080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 param_6,byte *param_7,ulong param_8,byte *param_9,
            byte *param_10,ulong param_11,byte *param_12,undefined8 param_13,ulong param_14,
            ulong param_15,undefined8 param_16,undefined8 param_17,undefined8 param_18,
            undefined8 param_19,undefined4 *param_20,undefined8 param_21,byte *param_22,
            undefined8 param_23,undefined8 param_24,undefined8 param_25,ulong param_26,
            ulong param_27,long param_28,undefined8 *param_29,long param_30)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 *unaff_RBX;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  bool in_ZF;
  undefined8 *in_stack_000000e8;
  long in_stack_000000f0;
  
  if (in_ZF) {
    param_4 = unaff_RBX;
  }
  param_18 = *(undefined4 **)((ulong)param_4 & 0xffffffff);
  param_19 = (undefined4 *)((undefined8 *)((ulong)param_4 & 0xffffffff))[1];
  if (!in_ZF) {
    func_0x0412a280(param_1,param_15 & 0xfffffffffffffffe);
  }
  param_15._0_4_ = CONCAT31(param_15._1_3_,0x20);
  *unaff_RBX = param_18;
  unaff_RBX[1] = param_19;
  param_17._1_1_ = 0;
  param_18 = (undefined4 *)0x0;
  param_19 = (undefined4 *)0x0;
  param_20 = (undefined4 *)0x0;
  uVar8 = func_0x04864680(&stack0x000000d8,&UNK_0139d0f4);
  cVar7 = func_0x04864270(uVar8);
  if (cVar7 != '\0') {
    func_0x04865630(&stack0x000000c8,uVar8);
    func_0x048656b0(&stack0x000000f8,uVar8);
    while( true ) {
      cVar7 = func_0x04862c80(&stack0x000000c8,&stack0x000000f8);
      if (cVar7 != '\0') break;
      uVar8 = func_0x04862b80(&stack0x000000c8);
      param_10 = (byte *)((ulong)param_10 & 0xffffffffffff0000);
      func_0x04863cb0(&param_7,uVar8,&param_10);
      if (((ulong)param_10 & 1) != 0) {
        func_0x0412a280(param_12,(ulong)param_10 & 0xfffffffffffffffe);
      }
      pbVar12 = param_9;
      uVar18 = (ulong)param_7 & 0xff;
      bVar16 = (byte)param_7 & 1;
      uVar17 = (ulong)((byte)param_7 >> 1);
      if (((ulong)param_7 & 1) != 0) {
        uVar17 = param_8;
      }
      uVar14 = param_8;
      if (uVar17 != 0) {
        param_14 = param_8;
        pbVar10 = param_9;
        if (((ulong)param_7 & 1) == 0) {
          pbVar10 = (byte *)((long)&param_7 + 1);
        }
        lVar9 = func_0x0eee2ef0(pbVar10,0xd,uVar17);
        uVar14 = lVar9 - (long)pbVar10;
        if (uVar14 != 0xffffffffffffffff && lVar9 != 0) {
          do {
            uVar17 = param_14;
            if ((uVar18 & 1) == 0) {
              pbVar12 = (byte *)((long)&param_7 + 1);
              uVar17 = uVar18 >> 1;
            }
            if (uVar14 - 1 <= uVar17) {
              uVar17 = uVar14 - 1;
            }
            if (0xfffffffffffffff7 < uVar17) {
LAB_0d1cc9c9:
              func_0x04882e30();
LAB_0d1cc9ce:
              uVar8 = func_0x04882e30();
              if ((*pbVar10 & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(uVar14 + 0x30),
                                *(ulong *)(uVar14 + 0x20) & 0xfffffffffffffffe);
              }
              func_0x0d1bee30(uVar14);
              func_0x0412a280(uVar14,0x68);
              func_0x04886070(&param_18);
              if (((uint)param_15 & 1) != 0) {
                func_0x0412a280(CONCAT62(param_17._2_6_,
                                         CONCAT11(param_17._1_1_,(undefined1)param_17)),
                                CONCAT44(param_15._4_4_,(uint)param_15) & 0xfffffffffffffffe);
              }
              if (((byte)param_23 & 1) != 0) {
                func_0x0412a280(param_25,CONCAT71(param_23._1_7_,(byte)param_23) &
                                         0xfffffffffffffffe);
              }
              func_0x04863610(&stack0x000000d8);
              func_0x0eee2d70(uVar8);
              pcVar1 = (code *)swi(3);
              puVar13 = (undefined8 *)(*pcVar1)();
              return puVar13;
            }
            if (uVar17 < 0x17) {
              param_10 = (byte *)CONCAT71(param_10._1_7_,(char)uVar17 * '\x02');
              pbVar10 = (byte *)((long)&param_10 + 1);
              if (uVar17 != 0) goto LAB_0d1cc35b;
                    /* WARNING: Ignoring partial resolution of indirect */
              param_10._1_1_ = 0;
            }
            else {
              uVar18 = (uVar17 | 7) + 1;
              if ((uVar17 | 7) == 0x17) {
                uVar18 = 0x1a;
              }
              pbVar10 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
              if (pbVar10 == (byte *)0x0) {
                func_0x0eec74c0(uVar18,0);
              }
              param_10 = (byte *)(uVar18 | 1);
              param_11 = uVar17;
              param_12 = pbVar10;
LAB_0d1cc35b:
              func_0x0eee2ee0(pbVar10,pbVar12,uVar17);
              pbVar10[uVar17] = 0;
            }
            uVar17 = param_8;
            if (((ulong)param_7 & 1) == 0) {
              uVar17 = ((ulong)param_7 & 0xff) >> 1;
            }
            if (uVar17 <= uVar14) {
LAB_0d1cc9c4:
              func_0x04882ee0();
              goto LAB_0d1cc9c9;
            }
            pbVar12 = (byte *)((long)&param_7 + 1);
            if (((ulong)param_7 & 1) != 0) {
              pbVar12 = param_9;
            }
            uVar18 = uVar17 - (uVar14 + 1);
            if (0xfffffffffffffff7 < uVar18) {
              func_0x04882e30();
              goto LAB_0d1cc9c4;
            }
            if (uVar18 < 0x17) {
              uVar15 = param_26 >> 8;
              param_26 = CONCAT71((int7)uVar15,(char)uVar18 * '\x02');
              lVar9 = (long)&param_26 + 1;
              if (uVar17 != uVar14 + 1) goto LAB_0d1cc424;
            }
            else {
              uVar17 = (uVar18 | 7) + 1;
              if ((uVar18 | 7) == 0x17) {
                uVar17 = 0x1a;
              }
              lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
              if (lVar9 == 0) {
                func_0x0eec74c0(uVar17,0);
              }
              param_26 = uVar17 | 1;
              param_27 = uVar18;
              param_28 = lVar9;
LAB_0d1cc424:
              func_0x0eee2ee0(lVar9,pbVar12 + uVar14 + 1,uVar18);
            }
            *(undefined1 *)(lVar9 + uVar18) = 0;
            uVar17 = (ulong)((byte)param_26 >> 1);
            param_14 = CONCAT44(param_14._4_4_,(uint)(byte)param_26);
            param_30 = param_28;
            lVar9 = (long)&param_26 + 1;
            if ((param_26 & 1) != 0) {
              uVar17 = param_27;
              lVar9 = param_28;
            }
            uVar18 = ((ulong)param_10 & 0xfffffffffffffffe) - 1;
            if (((ulong)param_10 & 1) == 0) {
              uVar18 = 0x16;
            }
            uVar15 = (ulong)((uint)((ulong)param_10 >> 1) & 0x7f);
            if (((ulong)param_10 & 1) != 0) {
              uVar15 = param_11;
            }
            if (uVar18 - uVar15 < uVar17) {
              uVar14 = uVar17 + uVar15;
              pbVar10 = param_10;
              if (-uVar18 - 10 < uVar14 - uVar18) goto LAB_0d1cc9ce;
              param_22 = (byte *)((long)&param_10 + 1);
              if (((ulong)param_10 & 1) != 0) {
                param_22 = param_12;
              }
              uVar19 = 0xfffffffffffffff7;
              if (uVar18 < 0x7ffffffffffffff3) {
                uVar11 = uVar18 * 2;
                if (uVar18 * 2 < uVar14) {
                  uVar11 = uVar14;
                }
                uVar19 = (uVar11 | 7) + 1;
                if ((uVar11 | 7) == 0x17) {
                  uVar19 = 0x1a;
                }
                if (uVar11 < 0x17) {
                  uVar19 = 0x17;
                }
              }
              in_stack_000000f0 = lVar9;
              pbVar12 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
              if (uVar19 != 0 && pbVar12 == (byte *)0x0) {
                func_0x0eec74c0(uVar19,0);
              }
              if (uVar15 != 0) {
                func_0x0eee2ee0(pbVar12,param_22,uVar15);
              }
              func_0x0eee2f00(pbVar12 + uVar15,in_stack_000000f0,uVar17);
              if (uVar18 + 1 != 0x17) {
                func_0x0412a280(param_22,uVar18 + 1);
              }
              pbVar12[uVar14] = 0;
              pbVar10 = (byte *)(uVar19 | 1);
            }
            else {
              uVar14 = param_11;
              pbVar12 = param_12;
              pbVar10 = param_10;
              if (uVar17 != 0) {
                if (((ulong)param_10 & 1) == 0) {
                  pbVar12 = (byte *)((long)&param_10 + 1);
                }
                func_0x0eee2ee0(pbVar12 + uVar15,lVar9,uVar17);
                uVar15 = uVar15 + uVar17;
                uVar17 = uVar15;
                if (((ulong)param_10 & 1) == 0) {
                  param_10 = (byte *)CONCAT71(param_10._1_7_,(char)uVar15 * '\x02');
                  uVar17 = param_11;
                }
                param_11 = uVar17;
                pbVar12[uVar15] = 0;
                uVar14 = param_11;
                pbVar12 = param_12;
                pbVar10 = param_10;
              }
            }
            uVar17 = param_14;
            param_10 = (byte *)0x0;
            param_11 = 0;
            param_12 = (byte *)0x0;
            if (((ulong)param_7 & 1) != 0) {
              func_0x0412a280(param_9,(ulong)param_7 & 0xfffffffffffffffe);
            }
            param_7 = pbVar10;
            param_8 = uVar14;
            param_9 = pbVar12;
            if ((uVar17 & 1) != 0) {
              func_0x0412a280(param_30,param_26 & 0xfffffffffffffffe);
            }
            if (((ulong)param_10 & 1) != 0) {
              func_0x0412a280(param_12,(ulong)param_10 & 0xfffffffffffffffe);
            }
            pbVar12 = param_9;
            uVar18 = (ulong)param_7 & 0xff;
            bVar16 = (byte)param_7 & 1;
            uVar17 = (ulong)((byte)param_7 >> 1);
            if (((ulong)param_7 & 1) != 0) {
              uVar17 = param_8;
            }
            if (uVar17 == 0) {
              uVar14 = param_8;
              if (param_19 < param_20) goto LAB_0d1cc278;
              goto LAB_0d1cc770;
            }
            param_14 = param_8;
            pbVar10 = param_9;
            if (((ulong)param_7 & 1) == 0) {
              pbVar10 = (byte *)((long)&param_7 + 1);
            }
            lVar9 = func_0x0eee2ef0(pbVar10,0xd,uVar17);
          } while ((lVar9 != 0) && (uVar14 = lVar9 - (long)pbVar10, uVar14 != 0xffffffffffffffff));
        }
        uVar14 = param_14;
        if (0x100 < uVar17) {
          if (bVar16 == 0) {
            pbVar12 = (byte *)((long)&param_7 + 1);
          }
          pbVar10 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108,param_14);
          if (pbVar10 == (byte *)0x0) {
            func_0x0eec74c0(0x108,0);
          }
          func_0x0eee2ee0(pbVar10,pbVar12,0x100);
          pbVar10[0x100] = 0;
          if (((ulong)param_7 & 1) != 0) {
            func_0x0412a280(param_9,(ulong)param_7 & 0xfffffffffffffffe);
          }
          param_7 = (byte *)0x109;
          param_8 = 0x100;
          uVar18 = 9;
          uVar14 = 0x100;
          param_9 = pbVar10;
        }
      }
      if (param_19 < param_20) {
LAB_0d1cc278:
        puVar5 = param_19;
        if ((uVar18 & 1) == 0) {
          *(byte **)(param_19 + 4) = param_9;
          *param_19 = param_7._0_4_;
          param_19[1] = param_7._4_4_;
          param_19[2] = (undefined4)param_8;
          param_19[3] = param_8._4_4_;
          param_19 = param_19 + 6;
        }
        else {
          func_0x0412e5e0(param_19,param_9);
          param_19 = puVar5 + 6;
        }
      }
      else {
LAB_0d1cc770:
        param_19 = (undefined4 *)func_0x04909bd0(&param_18,&param_7,uVar14);
      }
      if (((ulong)param_7 & 1) != 0) {
        func_0x0412a280(param_9,(ulong)param_7 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(&stack0x000000c8);
    }
    func_0x04862b40(&stack0x000000f8);
    func_0x04862b40(&stack0x000000c8);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  uVar2 = *(undefined4 *)((long)in_stack_000000e8 + 4);
  uVar3 = *(undefined4 *)(in_stack_000000e8 + 1);
  uVar4 = *(undefined4 *)((long)in_stack_000000e8 + 0xc);
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)in_stack_000000e8;
  *(undefined4 *)((long)puVar13 + 0xc) = uVar2;
  *(undefined4 *)(puVar13 + 2) = uVar3;
  *(undefined4 *)((long)puVar13 + 0x14) = uVar4;
  puVar13[3] = in_stack_000000e8[2];
  *in_stack_000000e8 = 0;
  in_stack_000000e8[1] = 0;
  in_stack_000000e8[2] = 0;
  *puVar13 = &UNK_0f4586c8;
  if (((uint)param_15 & 1) == 0) {
    puVar13[6] = CONCAT62(param_17._2_6_,CONCAT11(param_17._1_1_,(undefined1)param_17));
    *(uint *)(puVar13 + 4) = (uint)param_15;
    *(undefined4 *)((long)puVar13 + 0x24) = param_15._4_4_;
    *(undefined4 *)(puVar13 + 5) = (undefined4)param_16;
    *(undefined4 *)((long)puVar13 + 0x2c) = param_16._4_4_;
  }
  else {
    func_0x0412e5e0(puVar13 + 4,
                    CONCAT62(param_17._2_6_,CONCAT11(param_17._1_1_,(undefined1)param_17)),
                    CONCAT44(param_16._4_4_,(undefined4)param_16));
  }
  if (((byte)param_23 & 1) == 0) {
    puVar13[9] = param_25;
    puVar13[7] = CONCAT71(param_23._1_7_,(byte)param_23);
    puVar13[8] = param_24;
  }
  else {
    func_0x0412e5e0(puVar13 + 7,param_25,param_24);
  }
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  func_0x0488f040(puVar13 + 10,param_18,param_19,
                  ((long)param_19 - (long)param_18 >> 3) * -0x5555555555555555);
  puVar6 = param_18;
  *param_29 = puVar13;
  puVar5 = param_19;
  if (param_18 != (undefined4 *)0x0) {
    for (; puVar6 != puVar5; puVar5 = puVar5 + -6) {
      if ((*(byte *)(puVar5 + -6) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar5 + -2),*(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
      }
    }
    param_19 = puVar6;
    func_0x0412a280(param_18,(long)param_20 - (long)param_18);
  }
  if (((uint)param_15 & 1) != 0) {
    func_0x0412a280(CONCAT62(param_17._2_6_,CONCAT11(param_17._1_1_,(undefined1)param_17)),
                    CONCAT44(param_15._4_4_,(uint)param_15) & 0xfffffffffffffffe);
  }
  if (((byte)param_23 & 1) != 0) {
    func_0x0412a280(param_25,CONCAT71(param_23._1_7_,(byte)param_23) & 0xfffffffffffffffe);
  }
  func_0x04863610(&stack0x000000d8);
  return param_29;
}


