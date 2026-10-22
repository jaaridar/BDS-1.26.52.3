/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6854b0 (ELF vaddr 0xd5854b0)
 * Label: caller-of-callee
 * Body:  [[0d6854b0, 0d685984] [0d685990, 0d685a3b] [0d685a40, 0d685ccd] [0d685cd0, 0d686178] [0d68626d, 0d686282]]
 * Ghidra: FUN_0d6854b0
 */


/* WARNING: Removing unreachable block (ram,0x0d6855a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d6854b0(undefined8 *param_1,undefined8 *param_2,byte *param_3,ulong *param_4)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  byte *pbVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  byte *pbStack_f8;
  undefined8 *puStack_e8;
  long *plStack_e0;
  byte bStack_d8;
  byte bStack_d7;
  undefined6 uStack_d6;
  char cStack_d0;
  undefined4 uStack_cf;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  byte *pbStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_4 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  bVar30 = (*param_3 & 1) != 0;
  pbVar24 = param_3 + 1;
  if (bVar30) {
    pbVar24 = *(byte **)(param_3 + 0x10);
  }
  uVar16 = (ulong)(*param_3 >> 1);
  if (bVar30) {
    uVar16 = *(ulong *)(param_3 + 8);
  }
  puStack_e8 = param_2;
  if (uVar16 == 0) {
    bStack_d8 = 0;
    bStack_d7 = 0;
    uStack_d6 = 0;
    cStack_d0 = '\0';
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    uStack_c8 = (byte *)0x0;
LAB_0d68564b:
    pbStack_f8 = uStack_c8;
    uStack_108 = CONCAT31((int3)CONCAT61(uStack_d6,bStack_d7),bStack_d8);
    uStack_104 = (undefined4)((uint6)uStack_d6 >> 0x10);
    uStack_100 = CONCAT31((int3)uStack_cf,cStack_d0);
    uStack_fc = (undefined1)((uint)uStack_cf >> 0x18);
    uStack_fb = uStack_cb;
    uStack_f9 = uStack_c9;
    puVar20 = puStack_e8;
  }
  else {
    bVar1 = *pbVar24;
    if (uVar16 == 1) {
      if (bVar1 != 0x2f) {
        bStack_d8 = 2;
        bStack_d7 = bVar1;
      }
      else {
        bStack_d8 = 0;
      }
      (&bStack_d7)[bVar1 != 0x2f] = 0;
      goto LAB_0d68564b;
    }
    uVar13 = uVar16 - (bVar1 == 0x2f);
    uVar16 = uVar13 - (pbVar24[uVar16 - 1] == 0x2f);
    if (uVar13 < uVar16) {
      uVar16 = uVar13;
    }
    if (0xfffffffffffffff7 < uVar16) {
      func_0x04882e30();
      goto LAB_0d686160;
    }
    if (uVar16 < 0x17) {
      bStack_d8 = (char)uVar16 * '\x02';
      pbVar14 = &bStack_d7;
      if (uVar16 == 0) {
        bStack_d7 = 0;
        goto LAB_0d68564b;
      }
    }
    else {
      lVar25 = 0x1a;
      if ((uVar16 | 7) != 0x17) {
        lVar25 = (uVar16 | 7) + 1;
      }
      puStack_78 = param_1;
      pbVar14 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar25);
      if (pbVar14 == (byte *)0x0) {
        func_0x0eec74c0(lVar25,0);
      }
      bStack_d8 = (byte)lVar25 | 1;
      bStack_d7 = (byte)((ulong)lVar25 >> 8);
      uStack_d6 = (undefined6)((ulong)lVar25 >> 0x10);
      uStack_cf = (undefined4)(uVar16 >> 8);
      uStack_cb = (undefined2)(uVar16 >> 0x28);
      uStack_c9 = (undefined1)(uVar16 >> 0x38);
      param_1 = puStack_78;
      cStack_d0 = (char)uVar16;
      uStack_c8 = pbVar14;
    }
    func_0x0eee2ee0(pbVar14,pbVar24 + (bVar1 == 0x2f),uVar16);
    puVar20 = puStack_e8;
    pbVar14[uVar16] = 0;
    pbVar24 = uStack_c8;
    if ((bStack_d8 & 1) == 0) goto LAB_0d68564b;
    func_0x0412e5e0(&uStack_108,uStack_c8,
                    CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,cStack_d0))));
    func_0x0412a280(pbVar24,CONCAT62(uStack_d6,CONCAT11(bStack_d7,bStack_d8)) & 0xfffffffffffffffe);
  }
  puVar26 = puVar20 + 2;
  func_0x0412d450(puVar26);
  plStack_b0 = puVar20 + 0x14;
  func_0x0d686c50(param_1,plStack_b0,&uStack_108);
  if (param_1[3] != 0) goto LAB_0d685fed;
  func_0x0d686e00(param_1);
  uStack_68 = *puVar20;
  bStack_d8 = (byte)uStack_68;
  bStack_d7 = (byte)((ulong)uStack_68 >> 8);
  uStack_d6 = (undefined6)((ulong)uStack_68 >> 0x10);
  uStack_60 = puVar20[1];
  cStack_d0 = (char)uStack_60;
  uStack_cf = (undefined4)((ulong)uStack_60 >> 8);
  uStack_cb = (undefined2)((ulong)uStack_60 >> 0x28);
  uStack_c9 = (undefined1)((ulong)uStack_60 >> 0x38);
  if (uStack_60 != 0) {
    LOCK();
    *(long *)(uStack_60 + 0x10) = *(long *)(uStack_60 + 0x10) + 1;
    UNLOCK();
  }
  puStack_88 = puVar26;
  if ((uStack_108 & 1) == 0) {
    pbStack_b8 = pbStack_f8;
    uStack_bc = CONCAT13(uStack_f9,CONCAT21(uStack_fb,uStack_fc));
    uStack_c8 = (byte *)CONCAT44(uStack_104,uStack_108);
    uStack_c0 = uStack_100;
  }
  else {
    func_0x0412e5e0(&uStack_c8,pbStack_f8,
                    CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100))));
    uStack_68 = CONCAT62(uStack_d6,CONCAT11(bStack_d7,bStack_d8));
    uStack_60 = CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,cStack_d0)));
  }
  plVar23 = (long *)*param_4;
  *param_4 = 0;
  if (uStack_60 != 0) {
    LOCK();
    *(long *)(uStack_60 + 0x10) = *(long *)(uStack_60 + 0x10) + 1;
    UNLOCK();
  }
  if (((ulong)uStack_c8 & 1) == 0) {
    pbStack_48 = pbStack_b8;
    uStack_58 = uStack_c8;
    uStack_50 = CONCAT44(uStack_bc,uStack_c0);
  }
  else {
    func_0x0412e5e0(&uStack_58,pbStack_b8,CONCAT44(uStack_bc,uStack_c0));
  }
  puVar20 = puStack_e8;
  plStack_40 = plVar23;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pbVar24 = pbStack_48;
  uVar4 = (undefined4)uStack_68;
  uVar5 = uStack_68._4_4_;
  uVar6 = (undefined4)uStack_60;
  uVar7 = uStack_60._4_4_;
  uVar8 = (undefined4)uStack_58;
  uVar9 = uStack_58._4_4_;
  uVar10 = (undefined4)uStack_50;
  uVar11 = uStack_50._4_4_;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = (byte *)0x0;
  uStack_50 = 0;
  pbStack_48 = (byte *)0x0;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f47d908;
  plVar15[3] = (long)plVar23;
  *(undefined4 *)(plVar15 + 4) = uVar4;
  *(undefined4 *)((long)plVar15 + 0x24) = uVar5;
  *(undefined4 *)(plVar15 + 5) = uVar6;
  *(undefined4 *)((long)plVar15 + 0x2c) = uVar7;
  *(undefined4 *)(plVar15 + 6) = uVar8;
  *(undefined4 *)((long)plVar15 + 0x34) = uVar9;
  *(undefined4 *)(plVar15 + 7) = uVar10;
  *(undefined4 *)((long)plVar15 + 0x3c) = uVar11;
  plVar15[8] = (long)pbVar24;
  bVar30 = (uStack_108 & 1) == 0;
  pbStack_80 = (byte *)((long)&uStack_108 + 1);
  pbVar24 = pbStack_f8;
  if (bVar30) {
    pbVar24 = pbStack_80;
  }
  uVar16 = (ulong)((byte)uStack_108 >> 1);
  if (!bVar30) {
    uVar16 = CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
  }
  puStack_78 = param_1;
  plStack_38 = plVar15;
  plStack_e0 = (long *)func_0x04883620(&plStack_a8,pbVar24,uVar16);
  plVar28 = (long *)puVar20[0x15];
  plStack_70 = plVar23;
  if (plVar28 != (long *)0x0) {
    uVar16 = (long)plVar28 - ((ulong)plVar28 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
    uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar16 >> 0x38 < 2) {
      plVar23 = (long *)((long)plVar28 - 1U & (ulong)plStack_e0);
    }
    else {
      plVar23 = plStack_e0;
      if (plVar28 <= plStack_e0) {
        if (((ulong)plStack_e0 | (ulong)plVar28) >> 0x20 == 0) {
          plVar23 = (long *)(((ulong)plStack_e0 & 0xffffffff) % ((ulong)plVar28 & 0xffffffff));
        }
        else {
          plVar23 = (long *)((ulong)plStack_e0 % (ulong)plVar28);
        }
      }
    }
    plVar29 = *(long **)(*plStack_b0 + (long)plVar23 * 8);
    if ((plVar29 != (long *)0x0) &&
       (plVar29 = (long *)*plVar29, puVar20 = puStack_e8, plVar29 != (long *)0x0)) {
      if ((uStack_108 & 1) == 0) {
        uVar13 = (ulong)((byte)uStack_108 >> 1);
      }
      else {
        uVar13 = CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
        pbStack_80 = pbStack_f8;
      }
      if ((byte)(uVar16 >> 0x38) < 2) {
        do {
          if ((long *)plVar29[1] == plStack_e0) {
            bVar1 = *(byte *)(plVar29 + 2);
            if ((bVar1 & 1) == 0) {
              uVar16 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar16 = plVar29[3];
            }
            if (uVar16 == uVar13) {
              if ((bVar1 & 1) == 0) {
                lVar25 = (long)plVar29 + 0x11;
              }
              else {
                lVar25 = plVar29[4];
              }
              iVar12 = func_0x0eee3000(lVar25,pbStack_80,uVar13);
              if (iVar12 == 0) goto LAB_0d685ef8;
            }
          }
          else {
            puVar20 = puStack_e8;
            if ((long *)((ulong)plVar29[1] & (long)plVar28 - 1U) != plVar23) break;
          }
          plVar29 = (long *)*plVar29;
          puVar20 = puStack_e8;
        } while (plVar29 != (long *)0x0);
      }
      else {
        do {
          plVar17 = (long *)plVar29[1];
          if (plVar17 == plStack_e0) {
            bVar1 = *(byte *)(plVar29 + 2);
            if ((bVar1 & 1) == 0) {
              uVar16 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar16 = plVar29[3];
            }
            if (uVar16 == uVar13) {
              if ((bVar1 & 1) == 0) {
                lVar25 = (long)plVar29 + 0x11;
              }
              else {
                lVar25 = plVar29[4];
              }
              iVar12 = func_0x0eee3000(lVar25,pbStack_80,uVar13);
              if (iVar12 == 0) goto LAB_0d685ef8;
            }
          }
          else {
            if (plVar28 <= plVar17) {
              if (((ulong)plVar17 | (ulong)plVar28) >> 0x20 == 0) {
                plVar17 = (long *)(((ulong)plVar17 & 0xffffffff) % ((ulong)plVar28 & 0xffffffff));
              }
              else {
                plVar17 = (long *)((ulong)plVar17 % (ulong)plVar28);
              }
            }
            puVar20 = puStack_e8;
            if (plVar17 != plVar23) break;
          }
          plVar29 = (long *)*plVar29;
          puVar20 = puStack_e8;
        } while (plVar29 != (long *)0x0);
      }
    }
  }
  plVar29 = plStack_e0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plStack_a0 = plStack_b0;
  uStack_98 = 0;
  *plVar17 = 0;
  plVar17[1] = (long)plVar29;
  plStack_a8 = plVar17;
  if ((uStack_108 & 1) == 0) {
    plVar17[4] = (long)pbStack_f8;
    plVar17[2] = CONCAT44(uStack_104,uStack_108);
    plVar17[3] = CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
  }
  else {
    func_0x0412e5e0(plVar17 + 2,pbStack_f8,
                    CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100))));
  }
  plVar17[5] = (long)plStack_70;
  plVar17[6] = (long)plVar15;
  LOCK();
  plVar15[2] = plVar15[2] + 1;
  UNLOCK();
  uStack_98 = CONCAT71(uStack_98._1_7_,1);
  if ((long)plVar28 < 0) {
    fVar32 = (float)plVar28;
    fVar31 = *(float *)(puVar20 + 0x18);
    if (plVar28 != (long *)0x0) goto LAB_0d685b95;
LAB_0d685ba6:
    uVar16 = 1;
    if ((long *)0x2 < plVar28) {
      uVar16 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
    }
    puVar22 = (undefined8 *)(uVar16 | (long)plVar28 * 2);
    fVar31 = (float)func_0x0eee3ab0((float)(puVar20[0x17] + 1) / fVar31);
    plVar23 = plStack_e0;
    puVar26 = (undefined8 *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    if (puVar26 < puVar22) {
      puVar26 = puVar22;
    }
    puVar22 = (undefined8 *)0x2;
    if ((puVar26 == (undefined8 *)0x1) ||
       (puVar22 = puVar26, ((ulong)puVar26 & (long)puVar26 - 1U) == 0)) {
      param_1 = (undefined8 *)puVar20[0x15];
      bVar30 = puVar22 < param_1;
      if (puVar22 <= param_1) goto LAB_0d685d34;
LAB_0d685c27:
      if ((ulong)puVar22 >> 0x3d != 0) {
LAB_0d686160:
        uVar19 = FUN_04882eb0();
        func_0x0412a280(param_1,CONCAT62(uStack_d6,CONCAT11(bStack_d7,bStack_d8)) &
                                0xfffffffffffffffe);
        uVar19 = func_0x0eee2d70(uVar19);
        func_0x04882e20(uVar19);
        pcVar3 = (code *)swi(3);
        puVar20 = (undefined8 *)(*pcVar3)();
        return puVar20;
      }
      lVar25 = (long)puVar22 * 8;
      lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar25);
      if (lVar18 == 0) {
        func_0x0eec74c0(lVar25,0);
      }
      lVar2 = *plStack_b0;
      *plStack_b0 = lVar18;
      if (lVar2 != 0) {
        func_0x0412a280(lVar2,puVar20[0x15] << 3);
        lVar18 = puVar20[0x14];
      }
      puVar20[0x15] = puVar22;
      func_0x0eee2dd0(lVar18,0,lVar25);
      plVar15 = (long *)puVar20[0x16];
      if (plVar15 != (long *)0x0) {
        puVar26 = (undefined8 *)plVar15[1];
        uVar16 = (long)puVar22 - 1;
        if (((ulong)puVar22 & uVar16) == 0) {
          *(undefined8 **)(lVar18 + ((ulong)puVar26 & uVar16) * 8) = puVar20 + 0x16;
          uVar13 = (ulong)puVar26 & uVar16;
          while (plVar28 = plVar15, plVar15 = (long *)*plVar28, plVar15 != (long *)0x0) {
            uVar27 = plVar15[1] & uVar16;
            if (uVar27 != uVar13) {
              if (*(long *)(lVar18 + uVar27 * 8) == 0) {
                *(long **)(lVar18 + uVar27 * 8) = plVar28;
                uVar13 = uVar27;
              }
              else {
                *plVar28 = *plVar15;
                *plVar15 = **(undefined8 **)(lVar18 + uVar27 * 8);
                **(long **)(lVar18 + uVar27 * 8) = (long)plVar15;
                plVar15 = plVar28;
              }
            }
          }
        }
        else {
          if (puVar22 <= puVar26) {
            if (((ulong)puVar26 | (ulong)puVar22) >> 0x20 == 0) {
              puVar26 = (undefined8 *)
                        (((ulong)puVar26 & 0xffffffff) % ((ulong)puVar22 & 0xffffffff));
            }
            else {
              puVar26 = (undefined8 *)((ulong)puVar26 % (ulong)puVar22);
            }
          }
          *(undefined8 **)(lVar18 + (long)puVar26 * 8) = puVar20 + 0x16;
          plVar28 = (long *)*plVar15;
          while (plVar28 != (long *)0x0) {
            puVar21 = (undefined8 *)plVar28[1];
            if (puVar22 <= puVar21) {
              if (((ulong)puVar21 | (ulong)puVar22) >> 0x20 == 0) {
                puVar21 = (undefined8 *)
                          (((ulong)puVar21 & 0xffffffff) % ((ulong)puVar22 & 0xffffffff));
              }
              else {
                puVar21 = (undefined8 *)((ulong)puVar21 % (ulong)puVar22);
              }
            }
            if (puVar21 != puVar26) {
              if (*(long *)(lVar18 + (long)puVar21 * 8) == 0) {
                *(long **)(lVar18 + (long)puVar21 * 8) = plVar15;
                puVar26 = puVar21;
              }
              else {
                *plVar15 = *plVar28;
                *plVar28 = **(long **)(lVar18 + (long)puVar21 * 8);
                **(undefined8 **)(lVar18 + (long)puVar21 * 8) = plVar28;
                plVar28 = plVar15;
              }
            }
            plVar15 = plVar28;
            plVar28 = (long *)*plVar15;
          }
        }
      }
    }
    else {
      puVar22 = (undefined8 *)func_0x0412c3f0();
      param_1 = (undefined8 *)puVar20[0x15];
      bVar30 = puVar22 < param_1;
      if (param_1 < puVar22) goto LAB_0d685c27;
LAB_0d685d34:
      if (bVar30) {
        fVar31 = (float)func_0x0eee3ab0((float)(ulong)puVar20[0x17] / *(float *)(puVar20 + 0x18));
        puVar26 = (undefined8 *)
                  ((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
        if ((param_1 < (undefined8 *)0x3) ||
           (uVar16 = (long)param_1 - ((ulong)param_1 >> 1 & 0x5555555555555555),
           uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
           1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          puVar26 = (undefined8 *)func_0x0412c3f0(puVar26);
        }
        else if ((undefined8 *)0x1 < puVar26) {
          lVar25 = 0x3f;
          if ((long)puVar26 - 1U != 0) {
            for (; (long)puVar26 - 1U >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          puVar26 = (undefined8 *)(1L << (-((byte)lVar25 ^ 0x3f) & 0x3f));
        }
        if (puVar26 < puVar22) {
          puVar26 = puVar22;
        }
        if (puVar26 < param_1) {
          puVar22 = puVar26;
          if (puVar26 != (undefined8 *)0x0) goto LAB_0d685c27;
          lVar25 = *plStack_b0;
          *plStack_b0 = 0;
          if (lVar25 != 0) {
            func_0x0412a280(lVar25,puVar20[0x15] << 3);
          }
          puVar20[0x15] = 0;
        }
      }
    }
    plVar28 = (long *)puVar20[0x15];
    if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
      plVar23 = (long *)((ulong)plVar23 & (long)plVar28 - 1U);
    }
    else if (plVar28 <= plVar23) {
      if (((ulong)plVar23 | (ulong)plVar28) >> 0x20 == 0) {
        plVar23 = (long *)(((ulong)plVar23 & 0xffffffff) % ((ulong)plVar28 & 0xffffffff));
      }
      else {
        plVar23 = (long *)((ulong)plVar23 % (ulong)plVar28);
      }
    }
  }
  else {
    fVar32 = (float)(long)plVar28;
    fVar31 = *(float *)(puVar20 + 0x18);
    if (plVar28 == (long *)0x0) goto LAB_0d685ba6;
LAB_0d685b95:
    if (fVar32 * fVar31 < (float)(puVar20[0x17] + 1)) goto LAB_0d685ba6;
  }
  lVar25 = *plStack_b0;
  plVar15 = *(long **)(lVar25 + (long)plVar23 * 8);
  if (plVar15 == (long *)0x0) {
    *plVar17 = puVar20[0x16];
    puVar20[0x16] = plVar17;
    *(undefined8 **)(lVar25 + (long)plVar23 * 8) = puVar20 + 0x16;
    if (*plVar17 != 0) {
      plVar23 = *(long **)(*plVar17 + 8);
      if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
        *(long **)(lVar25 + ((ulong)plVar23 & (long)plVar28 - 1U) * 8) = plVar17;
      }
      else {
        if (plVar28 <= plVar23) {
          if (((ulong)plVar23 | (ulong)plVar28) >> 0x20 == 0) {
            *(long **)(lVar25 + (((ulong)plVar23 & 0xffffffff) % ((ulong)plVar28 & 0xffffffff)) * 8)
                 = plVar17;
            goto LAB_0d685ef0;
          }
          plVar23 = (long *)((ulong)plVar23 % (ulong)plVar28);
        }
        *(long **)(lVar25 + (long)plVar23 * 8) = plVar17;
      }
    }
  }
  else {
    *plVar17 = *plVar15;
    *plVar15 = (long)plVar17;
  }
LAB_0d685ef0:
  puVar20[0x17] = puVar20[0x17] + 1;
LAB_0d685ef8:
  plVar23 = plStack_70;
  plStack_a8 = plStack_b0;
  plStack_a0 = (long *)&uStack_108;
  (**(code **)(*plStack_70 + 0x20))(plStack_70,&UNK_0d696570,&plStack_a8);
  plVar15 = plStack_38;
  param_1 = puStack_78;
  puVar26 = puStack_88;
  plStack_a8 = plVar23;
  plStack_a0 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    LOCK();
    plStack_38[1] = plStack_38[1] + 1;
    UNLOCK();
  }
  if ((uStack_108 & 1) == 0) {
    puStack_78[2] = pbStack_f8;
    *puStack_78 = CONCAT44(uStack_104,uStack_108);
    puStack_78[1] = CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
  }
  else {
    func_0x0412e5e0(puStack_78,pbStack_f8,
                    CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100))));
  }
  param_1[3] = plVar23;
  param_1[4] = plVar15;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar23 = plVar15 + 1;
    lVar25 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  if (((ulong)uStack_c8 & 1) != 0) {
    func_0x0412a280(pbStack_b8,(ulong)uStack_c8 & 0xfffffffffffffffe);
  }
  if (CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,cStack_d0))) != 0) {
    func_0x0412c2d0();
  }
LAB_0d685fed:
  func_0x0412d520(puVar26);
  if ((uStack_108 & 1) != 0) {
    func_0x0412a280(pbStack_f8,CONCAT44(uStack_104,uStack_108) & 0xfffffffffffffffe);
  }
  return param_1;
}


