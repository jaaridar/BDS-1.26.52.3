/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd682f30 (ELF vaddr 0xd582f30)
 * Label: caller-of-callee
 * Body:  [[0d682f30, 0d683250] [0d683260, 0d683294] [0d6832a0, 0d683307] [0d683310, 0d683329] [0d683330, 0d6835e7] [0d6835f0, 0d68405a] [0d684060, 0d6848f4] [0d684900, 0d684ce8] [0d684e2f, 0d684e75]]
 * Ghidra: FUN_0d682f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d682f30(undefined8 *param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  byte *pbVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  byte *pbVar27;
  long lVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long lStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  byte *pbStack_120;
  long lStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  char cStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [4];
  long *plStack_48;
  
  lVar18 = param_2[0x20];
  plStack_168 = (long *)0x0;
  plStack_160 = (long *)0x0;
  func_0x0412d680(lVar18);
  plVar11 = (long *)(lVar18 + 0x28);
  lVar8 = func_0x0d6a34e0(plVar11,param_3);
  plVar9 = plStack_160;
  if (lVar8 != 0) {
    plStack_168 = *(long **)(lVar8 + 0x28);
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar11[1] = plVar11[1] + 1;
      UNLOCK();
      if (plStack_160 != (long *)0x0) {
        LOCK();
        plVar13 = plStack_160 + 1;
        lVar8 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          lVar8 = *plStack_160;
          plStack_160 = plVar11;
          (**(code **)(lVar8 + 0x10))(plVar9);
          FUN_0412c2d0(plVar9);
          plVar11 = plStack_160;
        }
      }
    }
    plStack_160 = plVar11;
    func_0x0412d6b0(lVar18);
    plStack_108 = plStack_168;
    plStack_100 = (long *)CONCAT71(plStack_100._1_7_,1);
    func_0x0412d680();
    if ((char)plStack_168[0xb] == '\0') {
      plVar11 = plStack_168 + 5;
      do {
        func_0x04136a30(plVar11,&plStack_108);
      } while ((char)plStack_168[0xb] != '\x01');
    }
    lVar18 = plStack_168[0xd];
    uVar3 = *(undefined4 *)((long)plStack_168 + 100);
    lVar8 = plStack_168[0xd];
    uVar4 = *(undefined4 *)((long)plStack_168 + 0x6c);
    *(int *)param_1 = (int)plStack_168[0xc];
    *(undefined4 *)((long)param_1 + 4) = uVar3;
    *(int *)(param_1 + 1) = (int)lVar8;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    if (lVar18 != 0) {
      LOCK();
      plVar11 = (long *)(lVar18 + 8);
      *plVar11 = *plVar11 + 1;
      UNLOCK();
    }
    if ((char)plStack_100 == '\x01') {
      func_0x0412d6b0(plStack_108);
    }
    goto LAB_0d684a7c;
  }
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x88,0);
  }
  plVar13 = plStack_160;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f47dd98;
  plStack_168 = plVar9 + 3;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar24 = plStack_160 + 1;
    lVar8 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      lVar8 = *plStack_160;
      plStack_160 = plVar9;
      (**(code **)(lVar8 + 0x10))(plVar13);
      FUN_0412c2d0(plVar13);
      plVar9 = plStack_160;
    }
  }
  plStack_160 = plVar9;
  pbVar27 = param_3 + 1;
  bVar29 = (*param_3 & 1) == 0;
  pbVar23 = *(byte **)(param_3 + 0x10);
  if (bVar29) {
    pbVar23 = pbVar27;
  }
  uVar16 = (ulong)(*param_3 >> 1);
  if (!bVar29) {
    uVar16 = *(ulong *)(param_3 + 8);
  }
  plVar9 = (long *)func_0x04883620(&plStack_108,pbVar23,uVar16);
  uVar16 = *(ulong *)(lVar18 + 0x30);
  if (uVar16 != 0) {
    uVar10 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      plStack_190 = (long *)(uVar16 - 1 & (ulong)plVar9);
    }
    else {
      plStack_190 = plVar9;
      if (uVar16 <= plVar9) {
        if (((ulong)plVar9 | uVar16) >> 0x20 == 0) {
          plStack_190 = (long *)(((ulong)plVar9 & 0xffffffff) % (uVar16 & 0xffffffff));
        }
        else {
          plStack_190 = (long *)((ulong)plVar9 % uVar16);
        }
      }
    }
    plVar13 = *(long **)(*plVar11 + (long)plStack_190 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if ((*param_3 & 1) == 0) {
        uVar20 = (ulong)(*param_3 >> 1);
        pbVar23 = pbVar27;
      }
      else {
        uVar20 = *(ulong *)(param_3 + 8);
        pbVar23 = *(byte **)(param_3 + 0x10);
      }
      if ((byte)(uVar10 >> 0x38) < 2) {
        do {
          if ((long *)plVar13[1] == plVar9) {
            bVar1 = *(byte *)(plVar13 + 2);
            if ((bVar1 & 1) == 0) {
              uVar10 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar10 = plVar13[3];
            }
            if (uVar10 == uVar20) {
              if ((bVar1 & 1) == 0) {
                lVar8 = (long)plVar13 + 0x11;
              }
              else {
                lVar8 = plVar13[4];
              }
              iVar7 = func_0x0eee3000(lVar8,pbVar23,uVar20);
              if (iVar7 == 0) goto LAB_0d68382c;
            }
          }
          else if ((long *)(plVar13[1] & uVar16 - 1) != plStack_190) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar13[1];
          if ((long *)uVar10 == plVar9) {
            bVar1 = *(byte *)(plVar13 + 2);
            if ((bVar1 & 1) == 0) {
              uVar10 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar10 = plVar13[3];
            }
            if (uVar10 == uVar20) {
              if ((bVar1 & 1) == 0) {
                lVar8 = (long)plVar13 + 0x11;
              }
              else {
                lVar8 = plVar13[4];
              }
              iVar7 = func_0x0eee3000(lVar8,pbVar23,uVar20);
              if (iVar7 == 0) goto LAB_0d68382c;
            }
          }
          else {
            if (uVar16 <= uVar10) {
              if ((uVar10 | uVar16) >> 0x20 == 0) {
                uVar10 = (uVar10 & 0xffffffff) % (uVar16 & 0xffffffff);
              }
              else {
                uVar10 = uVar10 % uVar16;
              }
            }
            if ((long *)uVar10 != plStack_190) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plStack_f8 = (long *)0x0;
  *plVar13 = 0;
  plVar13[1] = (long)plVar9;
  plStack_108 = plVar13;
  plStack_100 = plVar11;
  if ((*param_3 & 1) == 0) {
    plVar13[4] = *(long *)(param_3 + 0x10);
    lVar8 = *(long *)(param_3 + 8);
    plVar13[2] = *(long *)param_3;
    plVar13[3] = lVar8;
  }
  else {
    func_0x0412e5e0(plVar13 + 2,*(long *)(param_3 + 0x10),*(long *)(param_3 + 8));
  }
  plVar13[5] = (long)plStack_168;
  plVar13[6] = (long)plStack_160;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plStack_160[1] = plStack_160[1] + 1;
    UNLOCK();
  }
  plStack_f8 = (long *)CONCAT71(plStack_f8._1_7_,1);
  fVar30 = (float)(*(long *)(lVar18 + 0x40) + 1);
  if ((long)uVar16 < 0) {
    fVar32 = (float)uVar16;
    fVar31 = *(float *)(lVar18 + 0x48);
    if (uVar16 != 0) goto LAB_0d68346e;
LAB_0d6834cb:
    uVar10 = 1;
    if (2 < uVar16) {
      uVar10 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar10 = uVar10 | uVar16 * 2;
    fVar30 = (float)func_0x0eee3ab0(fVar30 / fVar31);
    uVar16 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
    if (uVar16 < uVar10) {
      uVar16 = uVar10;
    }
    uVar10 = 2;
    if ((uVar16 == 1) || (uVar10 = uVar16, (uVar16 & uVar16 - 1) == 0)) {
      uVar16 = *(ulong *)(lVar18 + 0x30);
      bVar29 = uVar10 < uVar16;
      uVar20 = uVar10;
      if (uVar10 <= uVar16) goto LAB_0d68364d;
LAB_0d683556:
      if (uVar10 >> 0x3d != 0) {
        func_0x04882eb0();
LAB_0d684cc6:
        func_0x04882eb0();
LAB_0d684ccb:
        func_0x0d6a3d00();
        goto LAB_0d684cd0;
      }
      lVar8 = uVar10 * 8;
      lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
      if (lVar26 == 0) {
        func_0x0eec74c0(lVar8,0);
      }
      lVar12 = *plVar11;
      *plVar11 = lVar26;
      if (lVar12 != 0) {
        func_0x0412a280(lVar12,*(long *)(lVar18 + 0x30) << 3);
        lVar26 = *(long *)(lVar18 + 0x28);
      }
      *(ulong *)(lVar18 + 0x30) = uVar10;
      func_0x0eee2dd0(lVar26,0,lVar8);
      plVar24 = *(long **)(lVar18 + 0x38);
      if (plVar24 != (long *)0x0) {
        uVar20 = plVar24[1];
        uVar16 = uVar10 - 1;
        if ((uVar10 & uVar16) == 0) {
          *(long *)(lVar26 + (uVar20 & uVar16) * 8) = lVar18 + 0x38;
          uVar10 = uVar20 & uVar16;
          while (plVar14 = plVar24, plVar24 = (long *)*plVar14, plVar24 != (long *)0x0) {
            uVar20 = plVar24[1] & uVar16;
            if (uVar20 != uVar10) {
              if (*(long *)(lVar26 + uVar20 * 8) == 0) {
                *(long **)(lVar26 + uVar20 * 8) = plVar14;
                uVar10 = uVar20;
              }
              else {
                *plVar14 = *plVar24;
                *plVar24 = **(undefined8 **)(lVar26 + uVar20 * 8);
                **(long **)(lVar26 + uVar20 * 8) = (long)plVar24;
                plVar24 = plVar14;
              }
            }
          }
        }
        else {
          if (uVar10 <= uVar20) {
            if ((uVar20 | uVar10) >> 0x20 == 0) {
              uVar20 = (uVar20 & 0xffffffff) % (uVar10 & 0xffffffff);
            }
            else {
              uVar20 = uVar20 % uVar10;
            }
          }
          *(long *)(lVar26 + uVar20 * 8) = lVar18 + 0x38;
          plVar14 = (long *)*plVar24;
          while (plVar14 != (long *)0x0) {
            uVar16 = plVar14[1];
            if (uVar10 <= uVar16) {
              if ((uVar16 | uVar10) >> 0x20 == 0) {
                uVar16 = (uVar16 & 0xffffffff) % (uVar10 & 0xffffffff);
              }
              else {
                uVar16 = uVar16 % uVar10;
              }
            }
            if (uVar16 != uVar20) {
              if (*(long *)(lVar26 + uVar16 * 8) == 0) {
                *(long **)(lVar26 + uVar16 * 8) = plVar24;
                uVar20 = uVar16;
              }
              else {
                *plVar24 = *plVar14;
                *plVar14 = **(long **)(lVar26 + uVar16 * 8);
                **(undefined8 **)(lVar26 + uVar16 * 8) = plVar14;
                plVar14 = plVar24;
              }
            }
            plVar24 = plVar14;
            plVar14 = (long *)*plVar24;
          }
        }
      }
    }
    else {
      uVar10 = func_0x0412c3f0();
      uVar16 = *(ulong *)(lVar18 + 0x30);
      bVar29 = uVar10 < uVar16;
      uVar20 = uVar10;
      if (uVar16 < uVar10) goto LAB_0d683556;
LAB_0d68364d:
      if (bVar29) {
        fVar30 = (float)func_0x0eee3ab0((float)*(ulong *)(lVar18 + 0x40) / *(float *)(lVar18 + 0x48)
                                       );
        uVar10 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
        if ((uVar16 < 3) ||
           (uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
           uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
           1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar10 = func_0x0412c3f0(uVar10);
        }
        else if (1 < uVar10) {
          lVar8 = 0x3f;
          if (uVar10 - 1 != 0) {
            for (; uVar10 - 1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar10 = 1L << (-((byte)lVar8 ^ 0x3f) & 0x3f);
        }
        if (uVar10 < uVar20) {
          uVar10 = uVar20;
        }
        if (uVar10 < uVar16) {
          if (uVar10 != 0) goto LAB_0d683556;
          lVar8 = *plVar11;
          *plVar11 = 0;
          if (lVar8 != 0) {
            func_0x0412a280(lVar8,*(long *)(lVar18 + 0x30) << 3);
          }
          *(undefined8 *)(lVar18 + 0x30) = 0;
        }
      }
    }
    uVar16 = *(ulong *)(lVar18 + 0x30);
    if ((uVar16 & uVar16 - 1) != 0) {
      if (uVar16 <= plVar9) {
        if (((ulong)plVar9 | uVar16) >> 0x20 == 0) {
          plVar9 = (long *)(((ulong)plVar9 & 0xffffffff) % (uVar16 & 0xffffffff));
          lVar8 = *plVar11;
          plVar11 = *(long **)(lVar8 + (long)plVar9 * 8);
          goto joined_r0x0d683fcf;
        }
        plVar9 = (long *)((ulong)plVar9 % uVar16);
      }
      lVar8 = *plVar11;
      plVar11 = *(long **)(lVar8 + (long)plVar9 * 8);
      goto joined_r0x0d683486;
    }
    plVar9 = (long *)((ulong)plVar9 & uVar16 - 1);
    lVar8 = *plVar11;
    plVar11 = *(long **)(lVar8 + (long)plVar9 * 8);
joined_r0x0d683fcf:
    if (plVar11 == (long *)0x0) goto LAB_0d68348c;
LAB_0d68381e:
    *plVar13 = *plVar11;
    *plVar11 = (long)plVar13;
  }
  else {
    fVar32 = (float)(long)uVar16;
    fVar31 = *(float *)(lVar18 + 0x48);
    if (uVar16 == 0) goto LAB_0d6834cb;
LAB_0d68346e:
    if (fVar32 * fVar31 < fVar30) goto LAB_0d6834cb;
    lVar8 = *plVar11;
    plVar11 = *(long **)(lVar8 + (long)plStack_190 * 8);
    plVar9 = plStack_190;
joined_r0x0d683486:
    if (plVar11 != (long *)0x0) goto LAB_0d68381e;
LAB_0d68348c:
    *plVar13 = *(long *)(lVar18 + 0x38);
    *(long **)(lVar18 + 0x38) = plVar13;
    *(long *)(lVar8 + (long)plVar9 * 8) = lVar18 + 0x38;
    if (*plVar13 != 0) {
      uVar10 = *(ulong *)(*plVar13 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        *(long **)(lVar8 + (uVar10 & uVar16 - 1) * 8) = plVar13;
      }
      else {
        if (uVar16 <= uVar10) {
          if ((uVar10 | uVar16) >> 0x20 == 0) {
            *(long **)(lVar8 + ((uVar10 & 0xffffffff) % (uVar16 & 0xffffffff)) * 8) = plVar13;
            goto LAB_0d683827;
          }
          uVar10 = uVar10 % uVar16;
        }
        *(long **)(lVar8 + uVar10 * 8) = plVar13;
      }
    }
  }
LAB_0d683827:
  *(long *)(lVar18 + 0x40) = *(long *)(lVar18 + 0x40) + 1;
LAB_0d68382c:
  func_0x0412d6b0(lVar18);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plStack_48 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *plStack_48 = (long)&UNK_0f47dde8;
  plStack_48[1] = (long)&plStack_168;
  plStack_48[2] = (long)param_1;
  plStack_48[3] = lVar18;
  plStack_48[4] = (long)param_3;
  plStack_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  bVar29 = (*param_3 & 1) != 0;
  pbStack_88 = pbVar27;
  if (bVar29) {
    pbStack_88 = *(byte **)(param_3 + 0x10);
  }
  uStack_80 = (ulong)(*param_3 >> 1);
  if (bVar29) {
    uStack_80 = *(ulong *)(param_3 + 8);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&plStack_108,&DAT_0f7b8f98,&pbStack_88,&plStack_138,0x1a1,0);
  if (cStack_c8 == '\0') {
    func_0x048e6d60(&plStack_108);
    func_0x0412d450(param_2 + 0x23);
    func_0x0d697700(param_2 + 0x35,param_3);
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    func_0x0412d520(param_2 + 0x23);
  }
  else {
    if ((DAT_0f721a28 == '\0') && (iVar7 = func_0x04108328(&DAT_0f721a28), iVar7 != 0)) {
      _DAT_0f721a18 = &UNK_0d68b3e0;
      _DAT_0f721a20 = (code *)&UNK_0d68b620;
      func_0x0410844d(&DAT_0f721a28);
    }
    plStack_150 = plStack_130;
    plStack_158 = plStack_138;
    plStack_138 = (long *)0x0;
    plStack_130 = (long *)0x0;
    lStack_118 = param_2[0x21];
    uStack_110 = (undefined4)param_2[0x22];
    uStack_10c = *(undefined4 *)((long)param_2 + 0x114);
    if (param_2[0x22] != 0) {
      LOCK();
      plVar11 = (long *)(param_2[0x22] + 0x10);
      *plVar11 = *plVar11 + 1;
      UNLOCK();
    }
    uStack_78 = 0;
    uStack_70 = 0;
    (*_DAT_0f721a20)(&uStack_b8,0,&plStack_158,&lStack_118);
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      FUN_0412c2d0();
    }
    if ((plStack_158 != (long *)0x0) &&
       (func_0x0ee56810(&plStack_108,&plStack_158), cStack_c8 == '\0')) {
      func_0x048e6d60(&plStack_108);
    }
    plVar11 = plStack_150;
    plStack_150 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    plVar11 = plStack_158;
    plStack_158 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    cVar6 = (**(code **)(*(long *)CONCAT44(uStack_b4,uStack_b8) + 0x10))();
    if (cVar6 == '\0') {
      func_0x0412d450(param_2 + 0x23);
      func_0x0d697700(param_2 + 0x35,param_3);
      func_0x0412d520(param_2 + 0x23);
      plVar11 = (long *)CONCAT44(uStack_ac,uStack_b0);
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar9 = plVar11 + 1;
        lVar18 = *plVar9;
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          FUN_0412c2d0(plVar11);
        }
      }
    }
    else {
      lVar18 = param_2[0x1e];
      pbStack_120 = (byte *)(**(code **)(*(long *)CONCAT44(uStack_b4,uStack_b8) + 0x30))();
      plStack_140 = (long *)CONCAT44(uStack_ac,uStack_b0);
      uStack_98 = CONCAT44(uStack_b4,uStack_b8);
      uStack_90 = CONCAT44(uStack_ac,uStack_b0);
      if (plStack_140 != (long *)0x0) {
        LOCK();
        plStack_140[1] = plStack_140[1] + 1;
        UNLOCK();
      }
      plStack_158 = (long *)0x0;
      plStack_150 = (long *)0x0;
      plStack_148 = (long *)0x0;
      uStack_110 = CONCAT31(uStack_110._1_3_,1);
      lStack_118 = lVar18;
      func_0x0412d450(lVar18);
      plVar11 = (long *)(lVar18 + 0xc0);
      lVar8 = func_0x0d6a2fe0(plVar11,param_3);
      if (lVar8 == 0) {
        lVar8 = *(long *)(lVar18 + 0x90);
        *(byte **)(lVar18 + 0x90) = pbStack_120 + lVar8;
        pbVar27 = pbStack_120;
        plStack_198 = param_2;
        if (*(byte **)(lVar18 + 0x98) < pbStack_120 + lVar8) {
          plStack_108 = (long *)0x0;
          plStack_100 = (long *)0x0;
          plStack_f8 = (long *)0x0;
          plVar9 = (long *)(lVar18 + 0xa8);
          if (plVar9 != *(long **)(lVar18 + 0xb0)) {
            plStack_a0 = (long *)(lVar18 + 0xd0);
            do {
              plVar13 = plStack_108;
              if (*(ulong *)(lVar18 + 0x90) < *(ulong *)(lVar18 + 0x98)) break;
              lVar8 = *plVar9;
              plVar24 = (long *)(lVar8 + 0x28);
              if (plStack_100 < plStack_f8) {
                lVar26 = *(long *)(lVar8 + 0x30);
                *plStack_100 = *plVar24;
                plStack_100[1] = lVar26;
                *plVar24 = 0;
                *(undefined8 *)(lVar8 + 0x30) = 0;
                plVar14 = plStack_100;
              }
              else {
                lVar26 = (long)plStack_100 - (long)plStack_108;
                uVar16 = (lVar26 >> 4) + 1;
                if (0xfffffffffffffff < uVar16) goto LAB_0d684ccb;
                uVar20 = (long)plStack_f8 - (long)plStack_108;
                uVar10 = (long)uVar20 >> 3;
                if ((ulong)((long)uVar20 >> 3) <= uVar16) {
                  uVar10 = uVar16;
                }
                if (0x7fffffffffffffef < uVar20) {
                  uVar10 = 0xfffffffffffffff;
                }
                if (0xfffffffffffffff < uVar10) goto LAB_0d684cc6;
                lVar28 = uVar10 * 0x10;
                lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar28);
                if (lVar12 == 0) {
                  func_0x0eec74c0(lVar28,0);
                }
                lVar5 = *(long *)(lVar8 + 0x30);
                *(long *)(lVar12 + lVar26) = *plVar24;
                ((long *)(lVar12 + lVar26))[1] = lVar5;
                *plVar24 = 0;
                *(undefined8 *)(lVar8 + 0x30) = 0;
                plVar14 = (long *)(lVar12 + lVar26);
                plVar25 = (long *)(lVar12 + lVar26 + (lVar26 >> 4) * -0x10);
                func_0x0eee2f00(plVar25,plVar13,lVar26);
                plStack_198 = plVar24;
                plStack_108 = plVar25;
                plStack_f8 = (long *)(lVar28 + lVar12);
                if (plVar13 != (long *)0x0) {
                  func_0x0412a280(plVar13,uVar20);
                }
              }
              plStack_100 = plVar14 + 2;
              LOCK();
              *(long *)(lVar18 + 0xa0) = *(long *)(lVar18 + 0xa0) + 1;
              UNLOCK();
              lVar8 = *plVar9;
              *(long *)(lVar18 + 0x90) = *(long *)(lVar18 + 0x90) - *(long *)(lVar8 + 0x38);
              plVar13 = (long *)func_0x0d6a2fe0(plVar11,lVar8 + 0x10);
              if (plVar13 != (long *)0x0) {
                uVar16 = *(ulong *)(lVar18 + 200);
                uVar10 = plVar13[1];
                uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
                uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
                uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar20 >> 0x38 < 2) {
                  uVar10 = uVar10 & uVar16 - 1;
                }
                else if (uVar16 <= uVar10) {
                  if ((uVar10 | uVar16) >> 0x20 == 0) {
                    uVar10 = (uVar10 & 0xffffffff) % (uVar16 & 0xffffffff);
                  }
                  else {
                    uVar10 = uVar10 % uVar16;
                  }
                }
                lVar8 = *plVar11;
                plVar24 = *(long **)(lVar8 + uVar10 * 8);
                do {
                  plVar14 = plVar24;
                  plVar24 = (long *)*plVar14;
                } while ((long *)*plVar14 != plVar13);
                bVar1 = (byte)(uVar20 >> 0x38);
                if (plVar14 == plStack_a0) {
LAB_0d683e6e:
                  if (*plVar13 != 0) {
                    uVar20 = *(ulong *)(*plVar13 + 8);
                    if (bVar1 < 2) {
                      uVar20 = uVar20 & uVar16 - 1;
                    }
                    else if (uVar16 <= uVar20) {
                      if ((uVar20 | uVar16) >> 0x20 == 0) {
                        uVar20 = (uVar20 & 0xffffffff) % (uVar16 & 0xffffffff);
                      }
                      else {
                        uVar20 = uVar20 % uVar16;
                      }
                    }
                    if (uVar20 == uVar10) goto LAB_0d683eb7;
                  }
                  *(undefined8 *)(lVar8 + uVar10 * 8) = 0;
                }
                else {
                  uVar20 = plVar14[1];
                  if (bVar1 < 2) {
                    uVar20 = uVar20 & uVar16 - 1;
                  }
                  else if (uVar16 <= uVar20) {
                    if ((uVar20 | uVar16) >> 0x20 == 0) {
                      uVar20 = (uVar20 & 0xffffffff) % (uVar16 & 0xffffffff);
                    }
                    else {
                      uVar20 = uVar20 % uVar16;
                    }
                  }
                  if (uVar20 != uVar10) goto LAB_0d683e6e;
                }
LAB_0d683eb7:
                lVar26 = *plVar13;
                if (lVar26 == 0) {
                  lVar26 = 0;
                }
                else {
                  uVar20 = *(ulong *)(lVar26 + 8);
                  if (bVar1 < 2) {
                    uVar20 = uVar20 & uVar16 - 1;
                  }
                  else if (uVar16 <= uVar20) {
                    if ((uVar20 | uVar16) >> 0x20 == 0) {
                      uVar20 = (uVar20 & 0xffffffff) % (uVar16 & 0xffffffff);
                    }
                    else {
                      uVar20 = uVar20 % uVar16;
                    }
                  }
                  if (uVar20 != uVar10) {
                    *(long **)(lVar8 + uVar20 * 8) = plVar14;
                    lVar26 = *plVar13;
                  }
                }
                *plVar14 = lVar26;
                *plVar13 = 0;
                *(long *)(lVar18 + 0xd8) = *(long *)(lVar18 + 0xd8) + -1;
                if ((*(byte *)(plVar13 + 2) & 1) != 0) {
                  func_0x0412a280(plVar13[4],plVar13[2] & 0xfffffffffffffffe);
                }
                func_0x0412a280(plVar13,0x30);
              }
              plVar13 = (long *)*plVar9;
              lVar8 = *plVar13;
              plVar9 = (long *)plVar13[1];
              *(long **)(lVar8 + 8) = plVar9;
              *plVar9 = lVar8;
              *(long *)(lVar18 + 0xb8) = *(long *)(lVar18 + 0xb8) + -1;
              plVar24 = (long *)plVar13[6];
              if (plVar24 != (long *)0x0) {
                LOCK();
                plVar14 = plVar24 + 1;
                lVar8 = *plVar14;
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (lVar8 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                  FUN_0412c2d0(plVar24);
                }
              }
              if ((*(byte *)(plVar13 + 2) & 1) != 0) {
                func_0x0412a280(plVar13[4],plVar13[2] & 0xfffffffffffffffe);
              }
              func_0x0412a280(plVar13,0x40);
            } while (plVar9 != *(long **)(lVar18 + 0xb0));
            pbVar27 = pbStack_120;
            plVar13 = plStack_158;
            plVar9 = plStack_150;
            if (plStack_158 != (long *)0x0) {
              for (; plVar13 != plVar9; plVar9 = plVar9 + -2) {
                plVar24 = (long *)plVar9[-1];
                if (plVar24 != (long *)0x0) {
                  LOCK();
                  plVar14 = plVar24 + 1;
                  lVar8 = *plVar14;
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (lVar8 == 0) {
                    (**(code **)(*plVar24 + 0x10))(plVar24);
                    FUN_0412c2d0(plVar24);
                  }
                }
              }
              func_0x0412a280(plStack_158,(long)plStack_148 - (long)plStack_158);
            }
          }
          plStack_158 = plStack_108;
          plStack_150 = plStack_100;
          plStack_148 = plStack_f8;
          plStack_190 = plStack_f8;
          plVar13 = plStack_108;
          plVar9 = plStack_100;
        }
        else {
          plStack_190 = (long *)0x0;
          plVar9 = (long *)0x0;
          plVar13 = (long *)0x0;
        }
        if (plStack_140 != (long *)0x0) {
          LOCK();
          plStack_140[1] = plStack_140[1] + 1;
          UNLOCK();
        }
        plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (plVar14 == (long *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        pbStack_120 = (byte *)(plVar14 + 2);
        *plVar14 = 0;
        plVar14[1] = 0;
        if ((*param_3 & 1) == 0) {
          plVar14[4] = *(long *)(param_3 + 0x10);
          lVar8 = *(long *)(param_3 + 8);
          *(long *)pbStack_120 = *(long *)param_3;
          plVar14[3] = lVar8;
        }
        else {
          func_0x0412e5e0(pbStack_120,*(long *)(param_3 + 0x10),*(long *)(param_3 + 8));
        }
        *(undefined4 *)(plVar14 + 5) = (undefined4)uStack_98;
        *(undefined4 *)((long)plVar14 + 0x2c) = uStack_98._4_4_;
        *(undefined4 *)(plVar14 + 6) = (undefined4)uStack_90;
        *(undefined4 *)((long)plVar14 + 0x34) = uStack_90._4_4_;
        plVar14[7] = (long)pbVar27;
        *plVar14 = lVar18 + 0xa8;
        puVar2 = *(undefined8 **)(lVar18 + 0xb0);
        plVar14[1] = (long)puVar2;
        *puVar2 = plVar14;
        *(long **)(lVar18 + 0xb0) = plVar14;
        *(long *)(lVar18 + 0xb8) = *(long *)(lVar18 + 0xb8) + 1;
        lStack_1a0 = (long)plVar14 + 0x11;
        bVar29 = (*(byte *)(plVar14 + 2) & 1) == 0;
        lVar8 = plVar14[4];
        if (bVar29) {
          lVar8 = lStack_1a0;
        }
        uVar16 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
        if (!bVar29) {
          uVar16 = plVar14[3];
        }
        plVar15 = (long *)func_0x04883620(&plStack_108,lVar8,uVar16);
        plVar25 = *(long **)(lVar18 + 200);
        if (plVar25 != (long *)0x0) {
          uVar16 = (long)plVar25 - ((ulong)plVar25 >> 1 & 0x5555555555555555);
          uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
          uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar16 >> 0x38 < 2) {
            plStack_198 = (long *)((long)plVar25 - 1U & (ulong)plVar15);
          }
          else {
            plStack_198 = plVar15;
            if (plVar25 <= plVar15) {
              if (((ulong)plVar15 | (ulong)plVar25) >> 0x20 == 0) {
                plStack_198 = (long *)(((ulong)plVar15 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff)
                                      );
              }
              else {
                plStack_198 = (long *)((ulong)plVar15 % (ulong)plVar25);
              }
            }
          }
          plVar22 = *(long **)(*plVar11 + (long)plStack_198 * 8);
          if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
            if ((*(byte *)(plVar14 + 2) & 1) == 0) {
              uVar10 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
            }
            else {
              uVar10 = plVar14[3];
              lStack_1a0 = plVar14[4];
            }
            uStack_98 = uVar10;
            if ((byte)(uVar16 >> 0x38) < 2) {
              plVar21 = (long *)((long)plVar25 + -1);
              plStack_a0 = plVar21;
              do {
                if ((long *)plVar22[1] == plVar15) {
                  bVar1 = *(byte *)(plVar22 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar16 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar16 = plVar22[3];
                  }
                  if (uVar16 == uVar10) {
                    if ((bVar1 & 1) == 0) {
                      lVar8 = (long)plVar22 + 0x11;
                    }
                    else {
                      lVar8 = plVar22[4];
                    }
                    iVar7 = func_0x0eee3000(lVar8,lStack_1a0,uVar10);
                    plVar21 = plStack_a0;
                    uVar10 = uStack_98;
                    plVar24 = plStack_140;
                    if (iVar7 == 0) goto LAB_0d684881;
                  }
                }
                else if ((long *)((ulong)plVar22[1] & (ulong)plVar21) != plStack_198) break;
                plVar22 = (long *)*plVar22;
              } while (plVar22 != (long *)0x0);
            }
            else {
              do {
                plVar24 = (long *)plVar22[1];
                if (plVar24 == plVar15) {
                  bVar1 = *(byte *)(plVar22 + 2);
                  if ((bVar1 & 1) == 0) {
                    uVar16 = (ulong)(bVar1 >> 1);
                  }
                  else {
                    uVar16 = plVar22[3];
                  }
                  if (uVar16 == uVar10) {
                    if ((bVar1 & 1) == 0) {
                      lVar8 = (long)plVar22 + 0x11;
                    }
                    else {
                      lVar8 = plVar22[4];
                    }
                    iVar7 = func_0x0eee3000(lVar8,lStack_1a0,uVar10);
                    uVar10 = uStack_98;
                    plVar24 = plStack_140;
                    if (iVar7 == 0) goto LAB_0d684881;
                  }
                }
                else {
                  if (plVar25 <= plVar24) {
                    if (((ulong)plVar24 | (ulong)plVar25) >> 0x20 == 0) {
                      plVar24 = (long *)(((ulong)plVar24 & 0xffffffff) %
                                        ((ulong)plVar25 & 0xffffffff));
                    }
                    else {
                      plVar24 = (long *)((ulong)plVar24 % (ulong)plVar25);
                    }
                  }
                  if (plVar24 != plStack_198) break;
                }
                plVar22 = (long *)*plVar22;
              } while (plVar22 != (long *)0x0);
            }
          }
        }
        plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar24 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        plStack_f8 = (long *)0x0;
        *plVar24 = 0;
        plVar24[1] = (long)plVar15;
        plStack_108 = plVar24;
        plStack_100 = plVar11;
        if ((*pbStack_120 & 1) == 0) {
          plVar24[4] = *(long *)(pbStack_120 + 0x10);
          lVar8 = *(long *)(pbStack_120 + 8);
          plVar24[2] = *(long *)pbStack_120;
          plVar24[3] = lVar8;
        }
        else {
          func_0x0412e5e0(plVar24 + 2,plVar14[4],plVar14[3]);
        }
        plVar24[5] = (long)plVar14;
        plStack_f8 = (long *)CONCAT71(plStack_f8._1_7_,1);
        fVar30 = (float)(*(long *)(lVar18 + 0xd8) + 1);
        if ((plVar25 == (long *)0x0) || ((float)plVar25 * *(float *)(lVar18 + 0xe0) < fVar30)) {
          uVar16 = 1;
          if ((long *)0x2 < plVar25) {
            uVar16 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
          }
          uVar16 = uVar16 | (long)plVar25 * 2;
          fVar30 = (float)func_0x0eee3ab0(fVar30 / *(float *)(lVar18 + 0xe0));
          uVar10 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
          if (uVar10 < uVar16) {
            uVar10 = uVar16;
          }
          uVar16 = 2;
          if ((uVar10 != 1) && (uVar16 = uVar10, (uVar10 & uVar10 - 1) != 0)) {
            uVar16 = func_0x0412c3f0();
          }
          uVar10 = *(ulong *)(lVar18 + 200);
          if (uVar10 < uVar16) {
LAB_0d684595:
            if (uVar16 >> 0x3d != 0) {
LAB_0d684cd0:
              uVar19 = func_0x04882eb0();
              func_0x041084d6(&DAT_0f7b8fb8);
              func_0x048f9be0(&plStack_138);
              func_0x048c30c0(alStack_68);
              do {
                func_0x0d682f00(param_1[1]);
                func_0x0d686d80(plStack_160);
                uVar19 = func_0x0eee2d70(uVar19);
                uVar19 = func_0x04882e20(uVar19);
              } while( true );
            }
            lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (lVar8 == 0) {
              func_0x0eec74c0(uVar16 * 8,0);
            }
            lVar26 = *plVar11;
            *plVar11 = lVar8;
            if (lVar26 != 0) {
              func_0x0412a280(lVar26,*(long *)(lVar18 + 200) << 3);
              lVar8 = *(long *)(lVar18 + 0xc0);
            }
            *(ulong *)(lVar18 + 200) = uVar16;
            func_0x0eee2dd0(lVar8,0,uVar16 * 8);
            plVar14 = *(long **)(lVar18 + 0xd0);
            if (plVar14 != (long *)0x0) {
              uVar20 = plVar14[1];
              uVar10 = uVar16 - 1;
              if ((uVar16 & uVar10) == 0) {
                *(long *)(lVar8 + (uVar20 & uVar10) * 8) = lVar18 + 0xd0;
                uVar16 = uVar20 & uVar10;
                while (plVar25 = plVar14, plVar14 = (long *)*plVar25, plVar14 != (long *)0x0) {
                  uVar20 = plVar14[1] & uVar10;
                  if (uVar20 != uVar16) {
                    if (*(long *)(lVar8 + uVar20 * 8) == 0) {
                      *(long **)(lVar8 + uVar20 * 8) = plVar25;
                      uVar16 = uVar20;
                    }
                    else {
                      *plVar25 = *plVar14;
                      *plVar14 = **(undefined8 **)(lVar8 + uVar20 * 8);
                      **(long **)(lVar8 + uVar20 * 8) = (long)plVar14;
                      plVar14 = plVar25;
                    }
                  }
                }
              }
              else {
                if (uVar16 <= uVar20) {
                  if ((uVar20 | uVar16) >> 0x20 == 0) {
                    uVar20 = (uVar20 & 0xffffffff) % (uVar16 & 0xffffffff);
                  }
                  else {
                    uVar20 = uVar20 % uVar16;
                  }
                }
                *(long *)(lVar8 + uVar20 * 8) = lVar18 + 0xd0;
                plVar25 = (long *)*plVar14;
                while (plVar25 != (long *)0x0) {
                  uVar10 = plVar25[1];
                  if (uVar16 <= uVar10) {
                    if ((uVar10 | uVar16) >> 0x20 == 0) {
                      uVar10 = (uVar10 & 0xffffffff) % (uVar16 & 0xffffffff);
                    }
                    else {
                      uVar10 = uVar10 % uVar16;
                    }
                  }
                  if (uVar10 != uVar20) {
                    if (*(long *)(lVar8 + uVar10 * 8) == 0) {
                      *(long **)(lVar8 + uVar10 * 8) = plVar14;
                      uVar20 = uVar10;
                    }
                    else {
                      *plVar14 = *plVar25;
                      *plVar25 = **(long **)(lVar8 + uVar10 * 8);
                      **(undefined8 **)(lVar8 + uVar10 * 8) = plVar25;
                      plVar25 = plVar14;
                    }
                  }
                  plVar14 = plVar25;
                  plVar25 = (long *)*plVar14;
                }
              }
            }
          }
          else if (uVar16 < uVar10) {
            fVar30 = (float)func_0x0eee3ab0((float)*(ulong *)(lVar18 + 0xd8) /
                                            *(float *)(lVar18 + 0xe0));
            uVar20 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
            if ((uVar10 < 3) ||
               (uVar17 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
               uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
               1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar20 = func_0x0412c3f0(uVar20);
            }
            else if (1 < uVar20) {
              lVar8 = 0x3f;
              if (uVar20 - 1 != 0) {
                for (; uVar20 - 1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              uVar20 = 1L << (-((byte)lVar8 ^ 0x3f) & 0x3f);
            }
            if (uVar20 < uVar16) {
              uVar20 = uVar16;
            }
            if (uVar20 < uVar10) {
              uVar16 = uVar20;
              if (uVar20 != 0) goto LAB_0d684595;
              lVar8 = *plVar11;
              *plVar11 = 0;
              if (lVar8 != 0) {
                func_0x0412a280(lVar8,*(long *)(lVar18 + 200) << 3);
              }
              *(undefined8 *)(lVar18 + 200) = 0;
            }
          }
          plVar25 = *(long **)(lVar18 + 200);
          if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
            plStack_198 = (long *)((ulong)plVar15 & (long)plVar25 - 1U);
          }
          else {
            plStack_198 = plVar15;
            if (plVar25 <= plVar15) {
              if (((ulong)plVar15 | (ulong)plVar25) >> 0x20 == 0) {
                plStack_198 = (long *)(((ulong)plVar15 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff)
                                      );
              }
              else {
                plStack_198 = (long *)((ulong)plVar15 % (ulong)plVar25);
              }
            }
          }
        }
        lVar8 = *plVar11;
        plVar14 = *(long **)(lVar8 + (long)plStack_198 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar24 = *(long *)(lVar18 + 0xd0);
          *(long **)(lVar18 + 0xd0) = plVar24;
          *(long *)(lVar8 + (long)plStack_198 * 8) = lVar18 + 0xd0;
          if (*plVar24 != 0) {
            plVar14 = *(long **)(*plVar24 + 8);
            if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
              *(long **)(lVar8 + ((ulong)plVar14 & (long)plVar25 - 1U) * 8) = plVar24;
            }
            else {
              if (plVar25 <= plVar14) {
                if (((ulong)plVar14 | (ulong)plVar25) >> 0x20 == 0) {
                  *(long **)(lVar8 + (((ulong)plVar14 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff))
                                     * 8) = plVar24;
                  goto LAB_0d68486b;
                }
                plVar14 = (long *)((ulong)plVar14 % (ulong)plVar25);
              }
              *(long **)(lVar8 + (long)plVar14 * 8) = plVar24;
            }
          }
        }
        else {
          *plVar24 = *plVar14;
          *plVar14 = (long)plVar24;
        }
LAB_0d68486b:
        *(long *)(lVar18 + 0xd8) = *(long *)(lVar18 + 0xd8) + 1;
        plVar24 = plStack_140;
      }
      else {
        plStack_190 = (long *)0x0;
        plVar9 = (long *)0x0;
        plVar13 = (long *)0x0;
        plVar24 = plStack_140;
      }
LAB_0d684881:
      lVar8 = func_0x0d6a2fe0(plVar11,param_3);
      if (lVar8 != 0) {
        plVar11 = *(long **)(lVar18 + 0xb0);
        plVar14 = *(long **)(lVar8 + 0x28);
        if ((plVar11 != plVar14) && (plVar25 = (long *)plVar14[1], plVar11 != plVar25)) {
          lVar18 = *plVar14;
          *(long **)(lVar18 + 8) = plVar25;
          *plVar25 = lVar18;
          lVar18 = *plVar11;
          *(long **)(lVar18 + 8) = plVar14;
          *plVar14 = lVar18;
          *plVar11 = (long)plVar14;
          plVar14[1] = (long)plVar11;
        }
      }
      if ((char)uStack_110 == '\x01') {
        func_0x0412d520(lStack_118);
      }
      plVar11 = plVar13;
      if (plVar13 != (long *)0x0) {
        for (; plVar13 != plVar9; plVar9 = plVar9 + -2) {
          plVar11 = (long *)plVar9[-1];
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar14 = plVar11 + 1;
            lVar18 = *plVar14;
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (lVar18 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              FUN_0412c2d0(plVar11);
            }
          }
          plVar11 = plStack_158;
          plStack_190 = plStack_148;
        }
        plStack_150 = plVar13;
        func_0x0412a280(plVar11,(long)plStack_190 - (long)plVar11);
      }
      if (plVar24 != (long *)0x0) {
        LOCK();
        plVar11 = plVar24 + 1;
        lVar18 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          FUN_0412c2d0(plVar24);
        }
      }
      uStack_188 = uStack_b8;
      uStack_184 = uStack_b4;
      uStack_180 = uStack_b0;
      uStack_17c = uStack_ac;
    }
  }
  if ((plStack_138 != (long *)0x0) &&
     (func_0x0ee56810(&plStack_108,&plStack_138), cStack_c8 == '\0')) {
    func_0x048e6d60(&plStack_108);
  }
  plVar11 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = (long *)param_1[1];
  *(undefined4 *)param_1 = uStack_188;
  *(undefined4 *)((long)param_1 + 4) = uStack_184;
  *(undefined4 *)(param_1 + 1) = uStack_180;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_17c;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    lVar18 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0412c2d0(plVar11);
    }
  }
  if (plStack_48 != (long *)0x0) {
    (**(code **)(*plStack_48 + 0x30))();
    if (plStack_48 == alStack_68) {
      lVar18 = 0x20;
    }
    else {
      lVar18 = 0x28;
      if (plStack_48 == (long *)0x0) goto LAB_0d684a7c;
    }
    (**(code **)(*plStack_48 + lVar18))();
  }
LAB_0d684a7c:
  plVar11 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_160 + 1;
    lVar18 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      FUN_0412c2d0(plVar11);
    }
  }
  return;
}


