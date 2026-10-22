/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd68b770 (ELF vaddr 0xd58b770)
 * Label: caller-of-callee
 * Body:  [[0d68b770, 0d68bdb3] [0d68bdc0, 0d68bf19] [0d68bf20, 0d68bfb8] [0d68bfc0, 0d68bff5] [0d68c000, 0d68c072] [0d68c080, 0d68c09a] [0d68c0a0, 0d68c135] [0d68c140, 0d68c157] [0d68c160, 0d68c1a3] [0d68c1b0, 0d68c26c] [0d68c270, 0d68c37a] [0d68c380, 0d68c3c6] [0d68c3d0, 0d68c473] [0d68c480, 0d68c63d] [0d68c640, 0d68c83b] [0d68c8f3, 0d68c933] [0d68c966, 0d68c9ae]]
 * Ghidra: FUN_0d68b770
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d68b770(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined8 *puStack_220;
  long lStack_218;
  ulong uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 *puStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  byte bStack_198;
  long *plStack_190;
  ulong uStack_188;
  long *plStack_180;
  uint uStack_174;
  byte *pbStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined4 uStack_118;
  byte bStack_f0;
  
  *param_1 = &UNK_0f47d558;
  pbVar1 = (byte *)(param_1 + 1);
  plVar13 = param_1 + 5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  uVar5 = *(undefined4 *)((long)param_3 + 4);
  uVar6 = *(undefined4 *)(param_3 + 1);
  uVar7 = *(undefined4 *)((long)param_3 + 0xc);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)param_3;
  *(undefined4 *)((long)param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar7;
  *param_3 = 0;
  param_3[1] = 0;
  plStack_1e0 = param_2;
  pbStack_170 = pbVar1;
  (**(code **)(*(long *)*param_2 + 0x10))(&uStack_1d8);
  lVar20 = lStack_1c8;
  if (((ulong)uStack_1d8 & 1) == 0) {
    lVar20 = (long)&uStack_1d8 + 1;
  }
  plVar9 = (long *)func_0x0eee2e90(lVar20);
  if ((long *)0xfffffffffffffff7 < plVar9) {
    func_0x04882e30();
LAB_0d68c82a:
    uVar14 = FUN_04882eb0();
    uVar14 = func_0x04882e20(uVar14);
    if (lStack_218 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lStack_218);
    }
    if (puStack_1e8 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puStack_1e8);
    }
    if (puStack_220[0xb] != 0) {
      func_0x0412c2d0();
    }
    func_0x0d68c9b0(plVar13);
    if ((*pbStack_170 & 1) != 0) {
      func_0x0412a280(puStack_220[3],puStack_220[1] & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar14);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (plVar9 < (long *)0x17) {
    uStack_130 = CONCAT71(uStack_130._1_7_,(char)plVar9 * '\x02');
    lVar12 = (long)&uStack_130 + 1;
    if (plVar9 != (long *)0x0) goto LAB_0d68b927;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_130._1_1_ = 0;
    bVar2 = *pbVar1;
  }
  else {
    uVar19 = 0x1a;
    if (((ulong)plVar9 | 7) != 0x17) {
      uVar19 = ((ulong)plVar9 | 7) + 1;
    }
    lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
    if (lVar12 == 0) {
      func_0x0eec74c0(uVar19,0);
    }
    uStack_130 = uVar19 | 1;
    uStack_128 = plVar9;
    lStack_120 = lVar12;
LAB_0d68b927:
    func_0x0eee2ee0(lVar12,lVar20,plVar9);
    *(undefined1 *)(lVar12 + (long)plVar9) = 0;
    bVar2 = *pbVar1;
  }
  if ((bVar2 & 1) != 0) {
    func_0x0412a280(param_1[3],param_1[1] & 0xfffffffffffffffe);
  }
  param_1[3] = lStack_120;
  *(undefined4 *)pbVar1 = (undefined4)uStack_130;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_130._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_128;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_128._4_4_;
  if (((ulong)uStack_1d8 & 1) != 0) {
    func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
  }
  uStack_138 = 0;
  plVar9 = (long *)*plStack_1e0;
  lVar20 = plVar9[3];
  if (lVar20 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar20 + 8;
    func_0x0412d770(lVar12);
    func_0x0ee50ca0(&uStack_130,*(undefined8 *)plVar9[3]);
    if (bStack_f0 == 0) {
      func_0x048e6d60(&uStack_130);
    }
  }
  (**(code **)(*plVar9 + 0x58))(&uStack_1d8,plVar9,0);
  if (lVar20 != 0) {
    func_0x0412d790(lVar12);
  }
  uStack_130 = 0xfa7bc44c8d2245cd;
  uStack_128 = (long *)&UNK_0140f690;
  lStack_120 = 1;
  uStack_118 = 0xad;
  if (bStack_198 == 0) {
    uStack_208 = 0;
    puStack_200 = (undefined *)0x0;
    uStack_1f8 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_1d8,&uStack_208,&uStack_130);
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_198 & 1) == 0) {
    func_0x048e6d60(&uStack_1d8);
    goto LAB_0d68c740;
  }
  plVar9 = (long *)*plStack_1e0;
  lVar20 = plVar9[3];
  if (lVar20 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar20 + 8;
    func_0x0412d770(lVar12);
  }
  (**(code **)(*plVar9 + 0x78))(&uStack_130,plVar9,&uStack_138);
  if (lVar20 != 0) {
    func_0x0412d790(lVar12);
  }
  uStack_208 = 0xfa7bc44c8d2245cd;
  puStack_200 = &UNK_0140f690;
  uStack_1f8 = 1;
  uStack_1f0 = 0xad;
  bVar2 = bStack_f0;
  if (bStack_f0 == 0) {
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_130,&uStack_168,&uStack_208);
    bVar2 = bStack_f0;
    if ((uStack_168 & 1) != 0) {
      func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
      bVar2 = bStack_f0;
    }
  }
  bStack_f0 = bVar2;
  if ((bVar2 & 1) == 0) {
    func_0x048e6d60(&uStack_130);
  }
  if (bStack_198 == 0) {
    func_0x048e6d60(&uStack_1d8);
  }
  if ((bVar2 & 1) == 0) goto LAB_0d68c740;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  puStack_1e8 = puVar10;
  func_0x0ee76a70(&uStack_130,*plStack_1e0,puVar10,0x10);
  uStack_1d8 = (long *)0xfa7bc44c8d2245cd;
  plStack_1d0 = (long *)&UNK_0140f690;
  lStack_1c8 = 1;
  uStack_1c0 = 0xb0;
  if (bStack_f0 == 0) {
    uStack_208 = 0;
    puStack_200 = (undefined *)0x0;
    uStack_1f8 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_130,&uStack_208,&uStack_1d8);
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_f0 & 1) == 0) {
    func_0x048e6d60(&uStack_130);
  }
  else {
    uVar19 = (ulong)*(uint *)(puVar10 + 1);
    if (uVar19 != 0) {
      lVar20 = uVar19 << 8;
      uStack_140 = uVar19;
      lStack_218 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
      if (lStack_218 == 0) {
        func_0x0eec74c0(lVar20,0);
      }
      func_0x0eee2dd0(lStack_218,0,lVar20);
      func_0x0ee76a70(&uStack_130,*plStack_1e0,lStack_218,lVar20);
      uStack_1d8 = (long *)0xfa7bc44c8d2245cd;
      plStack_1d0 = (long *)&UNK_0140f690;
      lStack_1c8 = 1;
      uStack_1c0 = 0xb6;
      if (bStack_f0 == 0) {
        uStack_208 = 0;
        puStack_200 = (undefined *)0x0;
        uStack_1f8 = 0;
        func_0x0eedeb80(2,0x2d,&uStack_130,&uStack_208,&uStack_1d8);
        if ((uStack_208 & 1) != 0) {
          func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
        }
      }
      if ((bStack_f0 & 1) != 0) {
        plStack_190 = param_1 + 7;
        uVar19 = 0;
LAB_0d68bd30:
        do {
          bVar2 = *(byte *)(lStack_218 + uVar19 * 0x100);
          func_0x0eee2f00(&uStack_130,lStack_218 + uVar19 * 0x100 + 1,0xff);
          plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x128);
          if (plVar9 == (long *)0x0) {
            func_0x0eec74c0(0x128,0);
          }
          uVar11 = (ulong)bVar2;
          lStack_1c8 = 0;
          *plVar9 = 0;
          plVar9[1] = 0;
          uStack_1d8 = plVar9;
          plStack_1d0 = plVar13;
          uStack_188 = uVar19;
          if (bVar2 < 0x17) {
            *(byte *)(plVar9 + 2) = bVar2 * '\x02';
            lVar20 = (long)plVar9 + 0x11;
            if (bVar2 != 0) goto LAB_0d68be10;
          }
          else {
            uVar19 = (uVar11 | 7) + 1;
            if ((uVar11 | 7) == 0x17) {
              uVar19 = 0x1a;
            }
            lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
            if (lVar20 == 0) {
              func_0x0eec74c0(uVar19,0);
            }
            plVar9[4] = lVar20;
            plVar9[2] = uVar19 | 1;
            plVar9[3] = uVar11;
LAB_0d68be10:
            func_0x0eee2f00(lVar20,&uStack_130,uVar11);
          }
          *(undefined1 *)(lVar20 + uVar11) = 0;
          *(byte *)(plVar9 + 5) = bVar2;
          func_0x0eee2f00((long)plVar9 + 0x29,&uStack_130,0xff);
          lStack_1c8 = CONCAT71(lStack_1c8._1_7_,1);
          bVar22 = (*(byte *)(plVar9 + 2) & 1) != 0;
          lVar20 = (long)plVar9 + 0x11;
          if (bVar22) {
            lVar20 = plVar9[4];
          }
          uVar19 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
          if (bVar22) {
            uVar19 = plVar9[3];
          }
          lVar20 = func_0x04883620(&uStack_208,lVar20,uVar19);
          plVar18 = uStack_1d8;
          plVar9[1] = lVar20;
          lVar20 = (long)uStack_1d8 + 0x11;
          bVar22 = (*(byte *)(uStack_1d8 + 2) & 1) == 0;
          lVar12 = uStack_1d8[4];
          if (bVar22) {
            lVar12 = lVar20;
          }
          uVar19 = (ulong)(*(byte *)(uStack_1d8 + 2) >> 1);
          if (!bVar22) {
            uVar19 = uStack_1d8[3];
          }
          uVar11 = func_0x04883620(&uStack_208,lVar12,uVar19);
          plStack_180 = plVar18;
          plVar18[1] = uVar11;
          uVar19 = param_1[6];
          if (uVar19 != 0) {
            uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
            uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
            uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar17 >> 0x38 < 2) {
              uVar16 = uVar19 - 1 & uVar11;
            }
            else {
              uVar16 = uVar11;
              if (uVar19 <= uVar11) {
                if ((uVar11 | uVar19) >> 0x20 == 0) {
                  uVar16 = (uVar11 & 0xffffffff) % (uVar19 & 0xffffffff);
                }
                else {
                  uVar16 = uVar11 % uVar19;
                }
              }
            }
            plVar9 = *(long **)(*plVar13 + uVar16 * 8);
            if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
              bVar2 = *(byte *)(plVar18 + 2);
              uStack_174 = (uint)bVar2;
              bVar22 = (bVar2 & 1) != 0;
              uVar21 = (ulong)(bVar2 >> 1);
              if (bVar22) {
                uVar21 = plVar18[3];
              }
              lStack_150 = plVar18[4];
              if (bVar22) {
                lVar20 = lStack_150;
              }
              if ((byte)(uVar17 >> 0x38) < 2) {
                uVar17 = uVar19 - 1;
                uStack_148 = uVar17;
                do {
                  if (plVar9[1] == uVar11) {
                    bVar2 = *(byte *)(plVar9 + 2);
                    if ((bVar2 & 1) == 0) {
                      uVar15 = (ulong)(bVar2 >> 1);
                    }
                    else {
                      uVar15 = plVar9[3];
                    }
                    if (uVar15 == uVar21) {
                      if ((bVar2 & 1) == 0) {
                        lVar12 = (long)plVar9 + 0x11;
                      }
                      else {
                        lVar12 = plVar9[4];
                      }
                      iVar8 = func_0x0eee3000(lVar12,lVar20,uVar21);
                      uVar17 = uStack_148;
                      if (iVar8 == 0) goto LAB_0d68c0c6;
                    }
                  }
                  else if ((plVar9[1] & uVar17) != uVar16) break;
                  plVar9 = (long *)*plVar9;
                } while (plVar9 != (long *)0x0);
              }
              else {
                do {
                  uVar17 = plVar9[1];
                  if (uVar17 == uVar11) {
                    bVar2 = *(byte *)(plVar9 + 2);
                    if ((bVar2 & 1) == 0) {
                      uVar17 = (ulong)(bVar2 >> 1);
                    }
                    else {
                      uVar17 = plVar9[3];
                    }
                    if (uVar17 == uVar21) {
                      if ((bVar2 & 1) == 0) {
                        lVar12 = (long)plVar9 + 0x11;
                      }
                      else {
                        lVar12 = plVar9[4];
                      }
                      iVar8 = func_0x0eee3000(lVar12,lVar20,uVar21);
                      if (iVar8 == 0) goto LAB_0d68c0c6;
                    }
                  }
                  else {
                    if (uVar19 <= uVar17) {
                      if ((uVar17 | uVar19) >> 0x20 == 0) {
                        uVar17 = (uVar17 & 0xffffffff) % (uVar19 & 0xffffffff);
                      }
                      else {
                        uVar17 = uVar17 % uVar19;
                      }
                    }
                    if (uVar17 != uVar16) break;
                  }
                  plVar9 = (long *)*plVar9;
                } while (plVar9 != (long *)0x0);
              }
            }
          }
          if ((long)uVar19 < 0) {
            fVar24 = (float)uVar19;
            fVar23 = *(float *)(param_1 + 9);
            if (uVar19 == 0) goto LAB_0d68c270;
LAB_0d68c1cc:
            if (fVar24 * fVar23 < (float)(param_1[8] + 1)) goto LAB_0d68c270;
          }
          else {
            fVar24 = (float)(long)uVar19;
            fVar23 = *(float *)(param_1 + 9);
            if (uVar19 != 0) goto LAB_0d68c1cc;
LAB_0d68c270:
            uVar11 = 1;
            if (2 < uVar19) {
              uVar11 = (ulong)((uVar19 & uVar19 - 1) != 0);
            }
            uVar11 = uVar19 * 2 | uVar11;
            fVar23 = (float)func_0x0eee3ab0((float)(param_1[8] + 1) / fVar23);
            uVar17 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
            if (uVar17 < uVar11) {
              uVar17 = uVar11;
            }
            uVar11 = 2;
            if ((uVar17 == 1) || (uVar11 = uVar17, (uVar17 & uVar17 - 1) == 0)) {
              bVar22 = uVar11 < uVar19;
              uVar17 = uVar11;
              if (uVar11 <= uVar19) goto LAB_0d68c412;
            }
            else {
              uVar11 = func_0x0412c3f0();
              uVar19 = param_1[6];
              bVar22 = uVar11 < uVar19;
              uVar17 = uVar11;
              if (uVar11 <= uVar19) {
LAB_0d68c412:
                if (bVar22) {
                  fVar23 = (float)func_0x0eee3ab0((float)(ulong)param_1[8] / *(float *)(param_1 + 9)
                                                 );
                  uVar11 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
                  if ((uVar19 < 3) ||
                     (uVar16 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
                     uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
                     1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar11 = func_0x0412c3f0(uVar11);
                  }
                  else if (1 < uVar11) {
                    lVar20 = 0x3f;
                    if (uVar11 - 1 != 0) {
                      for (; uVar11 - 1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    uVar11 = 1L << (-((byte)lVar20 ^ 0x3f) & 0x3f);
                  }
                  if (uVar11 < uVar17) {
                    uVar11 = uVar17;
                  }
                  if (uVar11 < uVar19) {
                    if (uVar11 != 0) goto LAB_0d68c2e5;
                    lVar20 = *plVar13;
                    *plVar13 = 0;
                    if (lVar20 != 0) {
                      func_0x0412a280(lVar20,param_1[6] << 3);
                    }
                    param_1[6] = 0;
                  }
                }
                goto LAB_0d68c1d9;
              }
            }
LAB_0d68c2e5:
            puStack_220 = param_1;
            if (uVar11 >> 0x3d != 0) goto LAB_0d68c82a;
            lVar20 = uVar11 * 8;
            lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
            if (lVar12 == 0) {
              func_0x0eec74c0(lVar20,0);
            }
            lVar3 = *plVar13;
            *plVar13 = lVar12;
            if (lVar3 != 0) {
              func_0x0412a280(lVar3,param_1[6] << 3);
              lVar12 = param_1[5];
            }
            param_1[6] = uVar11;
            func_0x0eee2dd0(lVar12,0,lVar20);
            plVar9 = (long *)param_1[7];
            if (plVar9 != (long *)0x0) {
              uVar17 = plVar9[1];
              uVar19 = uVar11 - 1;
              if ((uVar11 & uVar19) == 0) {
                *(long **)(lVar12 + (uVar17 & uVar19) * 8) = plStack_190;
                uVar11 = uVar17 & uVar19;
                while (plVar18 = plVar9, plVar9 = (long *)*plVar18, plVar9 != (long *)0x0) {
                  uVar17 = plVar9[1] & uVar19;
                  if (uVar17 != uVar11) {
                    if (*(long *)(lVar12 + uVar17 * 8) == 0) {
                      *(long **)(lVar12 + uVar17 * 8) = plVar18;
                      uVar11 = uVar17;
                    }
                    else {
                      *plVar18 = *plVar9;
                      *plVar9 = **(undefined8 **)(lVar12 + uVar17 * 8);
                      **(long **)(lVar12 + uVar17 * 8) = (long)plVar9;
                      plVar9 = plVar18;
                    }
                  }
                }
              }
              else {
                if (uVar11 <= uVar17) {
                  if ((uVar17 | uVar11) >> 0x20 == 0) {
                    uVar17 = (uVar17 & 0xffffffff) % (uVar11 & 0xffffffff);
                  }
                  else {
                    uVar17 = uVar17 % uVar11;
                  }
                }
                *(long **)(lVar12 + uVar17 * 8) = plStack_190;
                plVar18 = (long *)*plVar9;
                while (plVar18 != (long *)0x0) {
                  uVar19 = plVar18[1];
                  if (uVar11 <= uVar19) {
                    if ((uVar19 | uVar11) >> 0x20 == 0) {
                      uVar19 = (uVar19 & 0xffffffff) % (uVar11 & 0xffffffff);
                    }
                    else {
                      uVar19 = uVar19 % uVar11;
                    }
                  }
                  if (uVar19 != uVar17) {
                    if (*(long *)(lVar12 + uVar19 * 8) == 0) {
                      *(long **)(lVar12 + uVar19 * 8) = plVar9;
                      uVar17 = uVar19;
                    }
                    else {
                      *plVar9 = *plVar18;
                      *plVar18 = **(long **)(lVar12 + uVar19 * 8);
                      **(undefined8 **)(lVar12 + uVar19 * 8) = plVar18;
                      plVar18 = plVar9;
                    }
                  }
                  plVar9 = plVar18;
                  plVar18 = (long *)*plVar9;
                }
              }
            }
          }
LAB_0d68c1d9:
          uVar19 = param_1[6];
          uVar11 = plStack_180[1];
          uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
          uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar17 >> 0x38 < 2) {
            uVar11 = uVar11 & uVar19 - 1;
          }
          else if (uVar19 <= uVar11) {
            if ((uVar11 | uVar19) >> 0x20 == 0) {
              uVar11 = (uVar11 & 0xffffffff) % (uVar19 & 0xffffffff);
            }
            else {
              uVar11 = uVar11 % uVar19;
            }
          }
          lVar20 = *plVar13;
          plVar9 = *(long **)(lVar20 + uVar11 * 8);
          if (plVar9 == (long *)0x0) {
            *plStack_180 = *plStack_190;
            *plStack_190 = (long)plStack_180;
            *(long **)(lVar20 + uVar11 * 8) = plStack_190;
            if (*plStack_180 != 0) {
              uVar11 = *(ulong *)(*plStack_180 + 8);
              if ((byte)(uVar17 >> 0x38) < 2) {
                *(long **)(lVar20 + (uVar11 & uVar19 - 1) * 8) = plStack_180;
              }
              else {
                if (uVar19 <= uVar11) {
                  if ((uVar11 | uVar19) >> 0x20 == 0) {
                    *(long **)(lVar20 + ((uVar11 & 0xffffffff) % (uVar19 & 0xffffffff)) * 8) =
                         plStack_180;
                    goto LAB_0d68c45a;
                  }
                  uVar11 = uVar11 % uVar19;
                }
                *(long **)(lVar20 + uVar11 * 8) = plStack_180;
              }
            }
          }
          else {
            *plStack_180 = *plVar9;
            *plVar9 = (long)plStack_180;
          }
LAB_0d68c45a:
          param_1[8] = param_1[8] + 1;
          uVar19 = uStack_188 + 1;
          puVar10 = puStack_1e8;
        } while (uVar19 != uStack_140);
        goto LAB_0d68c707;
      }
      func_0x048e6d60(&uStack_130);
      goto joined_r0x0d68c711;
    }
    *(undefined4 *)(param_1 + 4) = 2;
  }
LAB_0d68c72c:
  (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar10);
LAB_0d68c740:
  if (((*(int *)(param_1 + 4) == 1) && (param_1[0xb] != 0)) &&
     (plVar13 = (long *)func_0x0412c300(), plVar13 != (long *)0x0)) {
    uStack_1d8 = (long *)param_1[10];
    plStack_1d0 = plVar13;
    if ((uStack_1d8 != (long *)0x0) &&
       (func_0x0ee57a30(&uStack_130,uStack_1d8,pbStack_170,plStack_1e0), plVar9 = uStack_128,
       uStack_128 != (long *)0x0)) {
      LOCK();
      plVar18 = uStack_128 + 1;
      lVar20 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_128 + 0x10))(uStack_128);
        func_0x0412c2d0(plVar9);
      }
    }
    LOCK();
    plVar9 = plVar13 + 1;
    lVar20 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  return;
LAB_0d68c0c6:
  plVar9 = plStack_180;
  uVar19 = uStack_188;
  puVar10 = puStack_1e8;
  if (plStack_180 != (long *)0x0) {
    if ((uStack_174 & 1) != 0) {
      func_0x0412a280(lStack_150,plStack_180[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar9,0x128);
  }
  uVar19 = uVar19 + 1;
  if (uVar19 == uStack_140) goto LAB_0d68c707;
  goto LAB_0d68bd30;
LAB_0d68c707:
  *(undefined4 *)(param_1 + 4) = 1;
joined_r0x0d68c711:
  if (lStack_218 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lStack_218);
  }
  if (puVar10 == (undefined8 *)0x0) goto LAB_0d68c740;
  goto LAB_0d68c72c;
}


