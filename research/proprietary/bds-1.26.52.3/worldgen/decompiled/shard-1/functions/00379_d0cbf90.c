/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1cbf90 (ELF vaddr 0xd0cbf90)
 * Label: caller-of-callee
 * Body:  [[0d1cbf90, 0d1cc10e] [0d1cc110, 0d1cc29b] [0d1cc2a0, 0d1cc305] [0d1cc310, 0d1cc3c7] [0d1cc3d0, 0d1cc5c0] [0d1cc5d0, 0d1cc735] [0d1cc740, 0d1cc905] [0d1cc910, 0d1cc9d7] [0d1cca05, 0d1cca35] [0d1ccb8f, 0d1ccbeb]]
 * Ghidra: FUN_0d1cbf90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d1cbf90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  byte *pbStack_108;
  ulong uStack_f8;
  byte bStack_f0;
  undefined1 uStack_ef;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined6 uStack_de;
  undefined4 *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  byte *pbStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  puStack_80 = param_1;
  puStack_50 = param_4;
  func_0x04863480(auStack_60,param_3);
  uVar8 = func_0x04864680(auStack_60,&UNK_01368c0e);
  bStack_f0 = 0;
  uStack_ef = 0;
  func_0x04863cb0(&bStack_b0,uVar8,&bStack_f0);
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0)),
                    CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0))) &
                    0xfffffffffffffffe);
  }
  uVar8 = func_0x04864680(auStack_60,&UNK_014acf75);
  puStack_d8 = (undefined4 *)((ulong)puStack_d8 & 0xffffffffffff0000);
  func_0x04863cb0(&bStack_f0,uVar8,&puStack_d8);
  if (((ulong)puStack_d8 & 1) != 0) {
    func_0x0412a280(puStack_c8,(ulong)puStack_d8 & 0xfffffffffffffffe);
  }
  if ((bStack_f0 & 1) == 0) {
    if (bStack_f0 >> 1 < 0x11) goto LAB_0d1cc0ad;
  }
  else if (CONCAT44(uStack_e4,uStack_e8) < 0x11) goto LAB_0d1cc0ad;
  puVar13 = (undefined8 *)CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0));
  bVar21 = (bStack_f0 & 1) == 0;
  puVar14 = puVar13;
  if (bVar21) {
    puVar14 = (undefined8 *)&uStack_ef;
  }
  puStack_d8 = (undefined4 *)*puVar14;
  puStack_d0 = (undefined4 *)puVar14[1];
  if (!bVar21) {
    func_0x0412a280(puVar13,CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0))) &
                            0xfffffffffffffffe);
  }
  bStack_f0 = 0x20;
  uStack_ef = SUB81(puStack_d8,0);
  uStack_ee = (undefined2)((ulong)puStack_d8 >> 8);
  uStack_ec = (undefined4)((ulong)puStack_d8 >> 0x18);
  uStack_e8._0_1_ = (undefined1)((ulong)puStack_d8 >> 0x38);
  uStack_e8._1_3_ = SUB83(puStack_d0,0);
  uStack_e4 = (undefined4)((ulong)puStack_d0 >> 0x18);
  uStack_e0 = (undefined1)((ulong)puStack_d0 >> 0x38);
  uStack_df = 0;
LAB_0d1cc0ad:
  puStack_d8 = (undefined4 *)0x0;
  puStack_d0 = (undefined4 *)0x0;
  puStack_c8 = (undefined4 *)0x0;
  uVar8 = func_0x04864680(auStack_60,&UNK_0139d0f4);
  cVar7 = func_0x04864270(uVar8);
  if (cVar7 != '\0') {
    func_0x04865630(auStack_70,uVar8);
    func_0x048656b0(auStack_40,uVar8);
    while( true ) {
      cVar7 = func_0x04862c80(auStack_70,auStack_40);
      if (cVar7 != '\0') break;
      uVar8 = func_0x04862b80(auStack_70);
      uStack_118 = (byte *)((ulong)uStack_118 & 0xffffffffffff0000);
      func_0x04863cb0(&uStack_130,uVar8,&uStack_118);
      if (((ulong)uStack_118 & 1) != 0) {
        func_0x0412a280(pbStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
      }
      pbVar12 = pbStack_120;
      uVar19 = (ulong)uStack_130 & 0xff;
      bVar17 = (byte)uStack_130 & 1;
      uVar18 = (ulong)((byte)uStack_130 >> 1);
      if (((ulong)uStack_130 & 1) != 0) {
        uVar18 = uStack_128;
      }
      uVar15 = uStack_128;
      if (uVar18 != 0) {
        uStack_f8 = uStack_128;
        pbVar10 = pbStack_120;
        if (((ulong)uStack_130 & 1) == 0) {
          pbVar10 = (byte *)((long)&uStack_130 + 1);
        }
        lVar9 = func_0x0eee2ef0(pbVar10,0xd,uVar18);
        uVar15 = lVar9 - (long)pbVar10;
        if (uVar15 != 0xffffffffffffffff && lVar9 != 0) {
          do {
            uVar18 = uStack_f8;
            if ((uVar19 & 1) == 0) {
              pbVar12 = (byte *)((long)&uStack_130 + 1);
              uVar18 = uVar19 >> 1;
            }
            if (uVar15 - 1 <= uVar18) {
              uVar18 = uVar15 - 1;
            }
            if (0xfffffffffffffff7 < uVar18) {
LAB_0d1cc9c9:
              func_0x04882e30();
LAB_0d1cc9ce:
              uVar8 = func_0x04882e30();
              if ((*pbVar10 & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(uVar15 + 0x30),
                                *(ulong *)(uVar15 + 0x20) & 0xfffffffffffffffe);
              }
              func_0x0d1bee30(uVar15);
              func_0x0412a280(uVar15,0x68);
              func_0x04886070(&puStack_d8);
              if ((bStack_f0 & 1) != 0) {
                func_0x0412a280(CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0)),
                                CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0))
                                        ) & 0xfffffffffffffffe);
              }
              if ((bStack_b0 & 1) != 0) {
                func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
              }
              func_0x04863610(auStack_60);
              _Unwind_Resume(uVar8);
              pcVar1 = (code *)swi(3);
              puVar13 = (undefined8 *)(*pcVar1)();
              return puVar13;
            }
            if (uVar18 < 0x17) {
              uStack_118 = (byte *)CONCAT71(uStack_118._1_7_,(char)uVar18 * '\x02');
              pbVar10 = (byte *)((long)&uStack_118 + 1);
              if (uVar18 != 0) goto LAB_0d1cc35b;
                    /* WARNING: Ignoring partial resolution of indirect */
              uStack_118._1_1_ = 0;
            }
            else {
              uVar19 = (uVar18 | 7) + 1;
              if ((uVar18 | 7) == 0x17) {
                uVar19 = 0x1a;
              }
              pbVar10 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
              if (pbVar10 == (byte *)0x0) {
                func_0x0eec74c0(uVar19,0);
              }
              uStack_118 = (byte *)(uVar19 | 1);
              uStack_110 = uVar18;
              pbStack_108 = pbVar10;
LAB_0d1cc35b:
              func_0x0eee2ee0(pbVar10,pbVar12,uVar18);
              pbVar10[uVar18] = 0;
            }
            uVar18 = uStack_128;
            if (((ulong)uStack_130 & 1) == 0) {
              uVar18 = ((ulong)uStack_130 & 0xff) >> 1;
            }
            if (uVar18 <= uVar15) {
LAB_0d1cc9c4:
              func_0x04882ee0();
              goto LAB_0d1cc9c9;
            }
            pbVar12 = (byte *)((long)&uStack_130 + 1);
            if (((ulong)uStack_130 & 1) != 0) {
              pbVar12 = pbStack_120;
            }
            uVar19 = uVar18 - (uVar15 + 1);
            if (0xfffffffffffffff7 < uVar19) {
              func_0x04882e30();
              goto LAB_0d1cc9c4;
            }
            if (uVar19 < 0x17) {
              uVar16 = uStack_98 >> 8;
              uStack_98 = CONCAT71((int7)uVar16,(char)uVar19 * '\x02');
              lVar9 = (long)&uStack_98 + 1;
              if (uVar18 != uVar15 + 1) goto LAB_0d1cc424;
            }
            else {
              uVar18 = (uVar19 | 7) + 1;
              if ((uVar19 | 7) == 0x17) {
                uVar18 = 0x1a;
              }
              lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
              if (lVar9 == 0) {
                func_0x0eec74c0(uVar18,0);
              }
              uStack_98 = uVar18 | 1;
              uStack_90 = uVar19;
              lStack_88 = lVar9;
LAB_0d1cc424:
              func_0x0eee2ee0(lVar9,pbVar12 + uVar15 + 1,uVar19);
            }
            *(undefined1 *)(lVar9 + uVar19) = 0;
            uVar18 = (ulong)((byte)uStack_98 >> 1);
            uStack_f8 = CONCAT44(uStack_f8._4_4_,(uint)(byte)uStack_98);
            lStack_78 = lStack_88;
            lVar9 = (long)&uStack_98 + 1;
            if ((uStack_98 & 1) != 0) {
              uVar18 = uStack_90;
              lVar9 = lStack_88;
            }
            uVar19 = ((ulong)uStack_118 & 0xfffffffffffffffe) - 1;
            if (((ulong)uStack_118 & 1) == 0) {
              uVar19 = 0x16;
            }
            uVar16 = (ulong)((uint)((ulong)uStack_118 >> 1) & 0x7f);
            if (((ulong)uStack_118 & 1) != 0) {
              uVar16 = uStack_110;
            }
            if (uVar19 - uVar16 < uVar18) {
              uVar15 = uVar18 + uVar16;
              pbVar10 = uStack_118;
              if (-uVar19 - 10 < uVar15 - uVar19) goto LAB_0d1cc9ce;
              pbStack_b8 = (byte *)((long)&uStack_118 + 1);
              if (((ulong)uStack_118 & 1) != 0) {
                pbStack_b8 = pbStack_108;
              }
              uVar20 = 0xfffffffffffffff7;
              if (uVar19 < 0x7ffffffffffffff3) {
                uVar11 = uVar19 * 2;
                if (uVar19 * 2 < uVar15) {
                  uVar11 = uVar15;
                }
                uVar20 = (uVar11 | 7) + 1;
                if ((uVar11 | 7) == 0x17) {
                  uVar20 = 0x1a;
                }
                if (uVar11 < 0x17) {
                  uVar20 = 0x17;
                }
              }
              lStack_48 = lVar9;
              pbVar12 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
              if (uVar20 != 0 && pbVar12 == (byte *)0x0) {
                func_0x0eec74c0(uVar20,0);
              }
              if (uVar16 != 0) {
                func_0x0eee2ee0(pbVar12,pbStack_b8,uVar16);
              }
              memcpy(pbVar12 + uVar16,lStack_48,uVar18);
              if (uVar19 + 1 != 0x17) {
                func_0x0412a280(pbStack_b8,uVar19 + 1);
              }
              pbVar12[uVar15] = 0;
              pbVar10 = (byte *)(uVar20 | 1);
            }
            else {
              uVar15 = uStack_110;
              pbVar12 = pbStack_108;
              pbVar10 = uStack_118;
              if (uVar18 != 0) {
                if (((ulong)uStack_118 & 1) == 0) {
                  pbVar12 = (byte *)((long)&uStack_118 + 1);
                }
                func_0x0eee2ee0(pbVar12 + uVar16,lVar9,uVar18);
                uVar16 = uVar16 + uVar18;
                uVar18 = uVar16;
                if (((ulong)uStack_118 & 1) == 0) {
                  uStack_118 = (byte *)CONCAT71(uStack_118._1_7_,(char)uVar16 * '\x02');
                  uVar18 = uStack_110;
                }
                uStack_110 = uVar18;
                pbVar12[uVar16] = 0;
                uVar15 = uStack_110;
                pbVar12 = pbStack_108;
                pbVar10 = uStack_118;
              }
            }
            uVar18 = uStack_f8;
            uStack_118 = (byte *)0x0;
            uStack_110 = 0;
            pbStack_108 = (byte *)0x0;
            if (((ulong)uStack_130 & 1) != 0) {
              func_0x0412a280(pbStack_120,(ulong)uStack_130 & 0xfffffffffffffffe);
            }
            uStack_130 = pbVar10;
            uStack_128 = uVar15;
            pbStack_120 = pbVar12;
            if ((uVar18 & 1) != 0) {
              func_0x0412a280(lStack_78,uStack_98 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_118 & 1) != 0) {
              func_0x0412a280(pbStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
            }
            pbVar12 = pbStack_120;
            uVar19 = (ulong)uStack_130 & 0xff;
            bVar17 = (byte)uStack_130 & 1;
            uVar18 = (ulong)((byte)uStack_130 >> 1);
            if (((ulong)uStack_130 & 1) != 0) {
              uVar18 = uStack_128;
            }
            if (uVar18 == 0) {
              uVar15 = uStack_128;
              if (puStack_d0 < puStack_c8) goto LAB_0d1cc278;
              goto LAB_0d1cc770;
            }
            uStack_f8 = uStack_128;
            pbVar10 = pbStack_120;
            if (((ulong)uStack_130 & 1) == 0) {
              pbVar10 = (byte *)((long)&uStack_130 + 1);
            }
            lVar9 = func_0x0eee2ef0(pbVar10,0xd,uVar18);
          } while ((lVar9 != 0) && (uVar15 = lVar9 - (long)pbVar10, uVar15 != 0xffffffffffffffff));
        }
        uVar15 = uStack_f8;
        if (0x100 < uVar18) {
          if (bVar17 == 0) {
            pbVar12 = (byte *)((long)&uStack_130 + 1);
          }
          pbVar10 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108,uStack_f8);
          if (pbVar10 == (byte *)0x0) {
            func_0x0eec74c0(0x108,0);
          }
          func_0x0eee2ee0(pbVar10,pbVar12,0x100);
          pbVar10[0x100] = 0;
          if (((ulong)uStack_130 & 1) != 0) {
            func_0x0412a280(pbStack_120,(ulong)uStack_130 & 0xfffffffffffffffe);
          }
          uStack_130 = (byte *)0x109;
          uStack_128 = 0x100;
          uVar19 = 9;
          uVar15 = 0x100;
          pbStack_120 = pbVar10;
        }
      }
      if (puStack_d0 < puStack_c8) {
LAB_0d1cc278:
        puVar5 = puStack_d0;
        if ((uVar19 & 1) == 0) {
          *(byte **)(puStack_d0 + 4) = pbStack_120;
          *puStack_d0 = (undefined4)uStack_130;
          puStack_d0[1] = uStack_130._4_4_;
          puStack_d0[2] = (undefined4)uStack_128;
          puStack_d0[3] = uStack_128._4_4_;
          puStack_d0 = puStack_d0 + 6;
        }
        else {
          func_0x0412e5e0(puStack_d0,pbStack_120);
          puStack_d0 = puVar5 + 6;
        }
      }
      else {
LAB_0d1cc770:
        puStack_d0 = (undefined4 *)func_0x04909bd0(&puStack_d8,&uStack_130,uVar15);
      }
      if (((ulong)uStack_130 & 1) != 0) {
        func_0x0412a280(pbStack_120,(ulong)uStack_130 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(auStack_70);
    }
    func_0x04862b40(auStack_40);
    func_0x04862b40(auStack_70);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  uVar2 = *(undefined4 *)((long)puStack_50 + 4);
  uVar3 = *(undefined4 *)(puStack_50 + 1);
  uVar4 = *(undefined4 *)((long)puStack_50 + 0xc);
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)puStack_50;
  *(undefined4 *)((long)puVar13 + 0xc) = uVar2;
  *(undefined4 *)(puVar13 + 2) = uVar3;
  *(undefined4 *)((long)puVar13 + 0x14) = uVar4;
  puVar13[3] = puStack_50[2];
  *puStack_50 = 0;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  *puVar13 = &UNK_0f4586c8;
  if ((bStack_f0 & 1) == 0) {
    puVar13[6] = CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0));
    *(uint *)(puVar13 + 4) = CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0));
    *(undefined4 *)((long)puVar13 + 0x24) = uStack_ec;
    *(undefined4 *)(puVar13 + 5) = uStack_e8;
    *(undefined4 *)((long)puVar13 + 0x2c) = uStack_e4;
  }
  else {
    func_0x0412e5e0(puVar13 + 4,CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0)),
                    CONCAT44(uStack_e4,uStack_e8));
  }
  if ((bStack_b0 & 1) == 0) {
    puVar13[9] = uStack_a0;
    puVar13[7] = CONCAT71(uStack_af,bStack_b0);
    puVar13[8] = uStack_a8;
  }
  else {
    func_0x0412e5e0(puVar13 + 7,uStack_a0,uStack_a8);
  }
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  func_0x0488f040(puVar13 + 10,puStack_d8,puStack_d0,
                  ((long)puStack_d0 - (long)puStack_d8 >> 3) * -0x5555555555555555);
  puVar6 = puStack_d8;
  *puStack_80 = puVar13;
  puVar5 = puStack_d0;
  if (puStack_d8 != (undefined4 *)0x0) {
    for (; puVar6 != puVar5; puVar5 = puVar5 + -6) {
      if ((*(byte *)(puVar5 + -6) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar5 + -2),*(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
      }
    }
    puStack_d0 = puVar6;
    func_0x0412a280(puStack_d8,(long)puStack_c8 - (long)puStack_d8);
  }
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0)),
                    CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
  }
  func_0x04863610(auStack_60);
  return puStack_80;
}


