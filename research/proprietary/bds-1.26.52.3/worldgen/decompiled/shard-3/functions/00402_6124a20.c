/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6224a20 (ELF vaddr 0x6124a20)
 * Label: caller-of-callee
 * Body:  [[06224a20, 06224cd4] [06224ce0, 06224d56] [06224d60, 06224f8b] [06224f90, 0622597c] [0622598b, 062259a2] [06225a7e, 06225a93]]
 * Ghidra: FUN_06224a20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06224a20(long param_1,ulong *param_2,long *param_3,uint *param_4,undefined4 param_5)

{
  byte **ppbVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  byte **ppbVar5;
  code *pcVar6;
  byte **ppbVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  byte *pbVar23;
  long *plVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  ulong uStack_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  byte *pbStack_160;
  ulong *puStack_158;
  byte *pbStack_148;
  undefined1 auStack_140 [16];
  ulong uStack_130;
  byte **ppbStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_dc;
  byte *pbStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  byte **ppbStack_b8;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  ulong uStack_98;
  ulong *puStack_88;
  uint *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  puStack_80 = param_4;
  if (param_3[4] == 0) {
    cVar8 = func_0x0eeddcf0(&UNK_012f3139,&UNK_01198d5e,0x14e,&UNK_014142bf,&UNK_013adf76);
    if (cVar8 == '\0') {
      return;
    }
    _DAT_00000000 = 0xdeadc0de;
    return;
  }
  lVar10 = func_0x062e2370(param_1 + 0x50);
  if (lVar10 == 0) {
    bVar25 = ((byte)*param_2 & 1) != 0;
    pbStack_d8 = (byte *)((long)param_2 + 1);
    if (bVar25) {
      pbStack_d8 = (byte *)param_2[2];
    }
    uStack_d0 = (ulong)(byte)((byte)*param_2 >> 1);
    if (bVar25) {
      uStack_d0 = param_2[1];
    }
    func_0x0470d9a0(&pbStack_148,&UNK_0119e3d1,0x1e,0xd,&pbStack_d8);
    pbStack_d8 = (byte *)((ulong)pbStack_d8 & 0xffffffffffff0000);
    uStack_178 = uStack_178 & 0xffffffffffffff00;
    plVar14 = (long *)param_3[4];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x30))(plVar14,&uStack_178,param_2,&pbStack_d8,&pbStack_148);
      if (((ulong)pbStack_d8 & 1) != 0) {
        func_0x0412a280(uStack_c8,(ulong)pbStack_d8 & 0xfffffffffffffffe);
      }
      if (((ulong)pbStack_148 & 1) == 0) {
        return;
      }
      func_0x0412a280(auStack_140._8_8_,(ulong)pbStack_148 & 0xfffffffffffffffe);
      return;
    }
    func_0x04891200();
    goto LAB_06225919;
  }
  auVar29 = func_0x0eeda000(0);
  lVar10 = auVar29._8_8_;
  uVar18 = auVar29._0_8_;
  plVar14 = (long *)param_3[4];
  if (plVar14 == (long *)0x0) {
    ppbStack_b8 = (byte **)0x0;
    bVar2 = (byte)*param_2;
joined_r0x06224bd9:
    if ((bVar2 & 1) != 0) goto LAB_06224bdf;
LAB_06224aa5:
    uStack_98 = param_2[2];
    uStack_a8 = (uint)*param_2;
    uStack_a4 = *(uint *)((long)param_2 + 4);
    uStack_a0 = (uint)param_2[1];
    uStack_9c = *(uint *)((long)param_2 + 0xc);
  }
  else {
    if (plVar14 == param_3) {
      ppbStack_b8 = &pbStack_d8;
      (**(code **)(*plVar14 + 0x18))();
      bVar2 = (byte)*param_2;
      goto joined_r0x06224bd9;
    }
    ppbStack_b8 = (byte **)(**(code **)(*plVar14 + 0x10))();
    if ((*param_2 & 1) == 0) goto LAB_06224aa5;
LAB_06224bdf:
    func_0x0412e5e0(&uStack_a8,param_2[2],param_2[1]);
  }
  plVar14 = (long *)(param_1 + 0x78);
  plVar22 = (long *)(lVar10 * 0x1f1f1f1f ^ uVar18);
  plVar16 = *(long **)(param_1 + 0x80);
  puStack_88 = param_2;
  if (plVar16 != (long *)0x0) {
    uVar11 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar11 >> 0x38 < 2) {
      param_3 = (long *)((long)plVar16 - 1U & (ulong)plVar22);
    }
    else {
      param_3 = plVar22;
      if (plVar16 <= plVar22) {
        param_3 = (long *)((ulong)plVar22 % (ulong)plVar16);
      }
    }
    puVar3 = *(undefined8 **)(*plVar14 + (long)param_3 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (pbVar23 = (byte *)*puVar3, pbVar23 != (byte *)0x0)) {
      if ((byte)(uVar11 >> 0x38) < 2) {
        do {
          if (*(long **)(pbVar23 + 8) == plVar22) {
            if ((*(ulong *)(pbVar23 + 0x10) == uVar18) && (*(long *)(pbVar23 + 0x18) == lVar10))
            goto LAB_062251dd;
          }
          else if ((long *)((ulong)*(long **)(pbVar23 + 8) & (long)plVar16 - 1U) != param_3) break;
          pbVar23 = *(byte **)pbVar23;
        } while (pbVar23 != (byte *)0x0);
      }
      else {
        do {
          plVar19 = *(long **)(pbVar23 + 8);
          if (plVar19 == plVar22) {
            if ((*(ulong *)(pbVar23 + 0x10) == uVar18) && (*(long *)(pbVar23 + 0x18) == lVar10))
            goto LAB_062251dd;
          }
          else {
            if (plVar16 <= plVar19) {
              if (((ulong)plVar19 | (ulong)plVar16) >> 0x20 == 0) {
                plVar19 = (long *)(((ulong)plVar19 & 0xffffffff) % ((ulong)plVar16 & 0xffffffff));
              }
              else {
                plVar19 = (long *)((ulong)plVar19 % (ulong)plVar16);
              }
            }
            if (plVar19 != param_3) break;
          }
          pbVar23 = *(byte **)pbVar23;
        } while (pbVar23 != (byte *)0x0);
      }
    }
  }
  pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (pbVar23 == (byte *)0x0) {
    FUN_0eec74c0(0x70,0);
  }
  pbStack_148 = pbVar23;
  auStack_140._0_8_ = plVar14;
  auStack_140._8_8_ = 1;
  pbVar23[0] = 0;
  pbVar23[1] = 0;
  pbVar23[2] = 0;
  pbVar23[3] = 0;
  pbVar23[4] = 0;
  pbVar23[5] = 0;
  pbVar23[6] = 0;
  pbVar23[7] = 0;
  *(long **)(pbVar23 + 8) = plVar22;
  *(undefined1 (*) [16])(pbVar23 + 0x10) = auVar29;
  pbVar23[0x20] = 0;
  pbVar23[0x21] = 0;
  pbVar23[0x22] = 0;
  pbVar23[0x23] = 0;
  pbVar23[0x24] = 0;
  pbVar23[0x25] = 0;
  pbVar23[0x26] = 0;
  pbVar23[0x27] = 0;
  pbVar23[0x28] = 0;
  pbVar23[0x29] = 0;
  pbVar23[0x2a] = 0;
  pbVar23[0x2b] = 0;
  pbVar23[0x2c] = 0;
  pbVar23[0x2d] = 0;
  pbVar23[0x2e] = 0;
  pbVar23[0x2f] = 0;
  pbVar23[0x30] = 0;
  pbVar23[0x31] = 0;
  pbVar23[0x32] = 0;
  pbVar23[0x33] = 0;
  pbVar23[0x34] = 0;
  pbVar23[0x35] = 0;
  pbVar23[0x36] = 0;
  pbVar23[0x37] = 0;
  pbVar23[0x38] = 0;
  pbVar23[0x39] = 0;
  pbVar23[0x3a] = 0;
  pbVar23[0x3b] = 0;
  pbVar23[0x3c] = 0;
  pbVar23[0x3d] = 0;
  pbVar23[0x3e] = 0;
  pbVar23[0x3f] = 0;
  pbVar23[0x40] = 0;
  pbVar23[0x41] = 0;
  pbVar23[0x42] = 0;
  pbVar23[0x43] = 0;
  pbVar23[0x44] = 0;
  pbVar23[0x45] = 0;
  pbVar23[0x46] = 0;
  pbVar23[0x47] = 0;
  pbVar23[0x48] = 0;
  pbVar23[0x49] = 0;
  pbVar23[0x4a] = 0;
  pbVar23[0x4b] = 0;
  pbVar23[0x4c] = 0;
  pbVar23[0x4d] = 0;
  pbVar23[0x4e] = 0;
  pbVar23[0x4f] = 0;
  pbVar23[0x50] = 0;
  pbVar23[0x51] = 0;
  pbVar23[0x52] = 0;
  pbVar23[0x53] = 0;
  pbVar23[0x54] = 0;
  pbVar23[0x55] = 0;
  pbVar23[0x56] = 0;
  pbVar23[0x57] = 0;
  pbVar23[0x58] = 0;
  pbVar23[0x59] = 0;
  pbVar23[0x5a] = 0;
  pbVar23[0x5b] = 0;
  pbVar23[0x5c] = 0;
  pbVar23[0x5d] = 0;
  pbVar23[0x5e] = 0;
  pbVar23[0x5f] = 0;
  pbVar23[0x60] = 0;
  pbVar23[0x61] = 0;
  pbVar23[0x62] = 0;
  pbVar23[99] = 0;
  pbVar23[100] = 0;
  pbVar23[0x65] = 0;
  pbVar23[0x66] = 0;
  pbVar23[0x67] = 0;
  pbVar23[0x68] = 0;
  pbVar23[0x69] = 0;
  pbVar23[0x6a] = 0;
  pbVar23[0x6b] = 0;
  pbVar23[0x6c] = 0;
  pbVar23[0x6d] = 0;
  pbVar23[0x6e] = 0;
  pbVar23[0x6f] = 0;
  fVar26 = (float)(*(long *)(param_1 + 0x90) + 1);
  if ((long)plVar16 < 0) {
    fVar28 = (float)plVar16;
    fVar27 = *(float *)(param_1 + 0x98);
    if (plVar16 != (long *)0x0) goto LAB_06224e4c;
LAB_06224e5d:
    uVar18 = 1;
    if ((long *)0x2 < plVar16) {
      uVar18 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar24 = (long *)(uVar18 | (long)plVar16 * 2);
    fVar26 = (float)func_0x0eee3ab0(fVar26 / fVar27);
    plVar19 = (long *)((long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26);
    if (plVar19 < plVar24) {
      plVar19 = plVar24;
    }
    plVar24 = (long *)0x2;
    if ((plVar19 == (long *)0x1) || (plVar24 = plVar19, ((ulong)plVar19 & (long)plVar19 - 1U) == 0))
    {
      bVar25 = plVar24 < plVar16;
      if (plVar24 <= plVar16) goto LAB_06225024;
LAB_06224ed5:
      if ((ulong)plVar24 >> 0x3d != 0) {
LAB_06225919:
        uVar13 = func_0x04882eb0();
        if ((uStack_110 & 1) != 0) {
          func_0x0412a280(pbStack_100,uStack_110 & 0xfffffffffffffffe);
        }
        if ((uStack_130 & 1) != 0) {
          func_0x0412a280(uStack_120,uStack_130 & 0xfffffffffffffffe);
        }
        if ((uStack_170 & 1) != 0) {
          func_0x0412a280(pbStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
        }
        func_0x06225ae0(&pbStack_d8);
        func_0x0eee2d70(uVar13);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar10 = (long)plVar24 * 8;
      lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
      if (lVar12 == 0) {
        FUN_0eec74c0(lVar10,0);
      }
      lVar4 = *plVar14;
      *plVar14 = lVar12;
      uStack_dc = param_5;
      if (lVar4 != 0) {
        func_0x0412a280(lVar4,*(long *)(param_1 + 0x80) << 3);
        lVar12 = *(long *)(param_1 + 0x78);
      }
      *(long **)(param_1 + 0x80) = plVar24;
      func_0x0eee2dd0(lVar12,0,lVar10);
      plVar16 = *(long **)(param_1 + 0x88);
      param_5 = uStack_dc;
      if (plVar16 != (long *)0x0) {
        plVar19 = (long *)plVar16[1];
        uVar18 = (long)plVar24 - 1;
        if (((ulong)plVar24 & uVar18) == 0) {
          *(long *)(lVar12 + ((ulong)plVar19 & uVar18) * 8) = param_1 + 0x88;
          uVar11 = (ulong)plVar19 & uVar18;
          while (plVar19 = plVar16, plVar16 = (long *)*plVar19, plVar16 != (long *)0x0) {
            uVar20 = plVar16[1] & uVar18;
            if (uVar20 != uVar11) {
              if (*(long *)(lVar12 + uVar20 * 8) == 0) {
                *(long **)(lVar12 + uVar20 * 8) = plVar19;
                uVar11 = uVar20;
              }
              else {
                *plVar19 = *plVar16;
                *plVar16 = **(undefined8 **)(lVar12 + uVar20 * 8);
                **(long **)(lVar12 + uVar20 * 8) = (long)plVar16;
                plVar16 = plVar19;
              }
            }
          }
        }
        else {
          if (plVar24 <= plVar19) {
            if (((ulong)plVar19 | (ulong)plVar24) >> 0x20 == 0) {
              plVar19 = (long *)(((ulong)plVar19 & 0xffffffff) % ((ulong)plVar24 & 0xffffffff));
            }
            else {
              plVar19 = (long *)((ulong)plVar19 % (ulong)plVar24);
            }
          }
          *(long *)(lVar12 + (long)plVar19 * 8) = param_1 + 0x88;
          plVar21 = (long *)*plVar16;
          while (plVar21 != (long *)0x0) {
            plVar15 = (long *)plVar21[1];
            if (plVar24 <= plVar15) {
              if (((ulong)plVar15 | (ulong)plVar24) >> 0x20 == 0) {
                plVar15 = (long *)(((ulong)plVar15 & 0xffffffff) % ((ulong)plVar24 & 0xffffffff));
              }
              else {
                plVar15 = (long *)((ulong)plVar15 % (ulong)plVar24);
              }
            }
            if (plVar15 != plVar19) {
              if (*(long *)(lVar12 + (long)plVar15 * 8) == 0) {
                *(long **)(lVar12 + (long)plVar15 * 8) = plVar16;
                plVar19 = plVar15;
              }
              else {
                *plVar16 = *plVar21;
                *plVar21 = **(long **)(lVar12 + (long)plVar15 * 8);
                **(undefined8 **)(lVar12 + (long)plVar15 * 8) = plVar21;
                plVar21 = plVar16;
              }
            }
            plVar16 = plVar21;
            plVar21 = (long *)*plVar16;
          }
        }
      }
    }
    else {
      plVar24 = (long *)func_0x0412c3f0();
      plVar16 = *(long **)(param_1 + 0x80);
      bVar25 = plVar24 < plVar16;
      if (plVar16 < plVar24) goto LAB_06224ed5;
LAB_06225024:
      if (bVar25) {
        fVar26 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x90) /
                                        *(float *)(param_1 + 0x98));
        plVar19 = (long *)((long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26);
        if ((plVar16 < (long *)0x3) ||
           (uVar18 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555),
           uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
           1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          plVar19 = (long *)func_0x0412c3f0(plVar19);
        }
        else if ((long *)0x1 < plVar19) {
          lVar10 = 0x3f;
          if ((long)plVar19 - 1U != 0) {
            for (; (long)plVar19 - 1U >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          plVar19 = (long *)(1L << (-((byte)lVar10 ^ 0x3f) & 0x3f));
        }
        if (plVar19 < plVar24) {
          plVar19 = plVar24;
        }
        if (plVar19 < plVar16) {
          plVar24 = plVar19;
          if (plVar19 != (long *)0x0) goto LAB_06224ed5;
          lVar10 = *plVar14;
          *plVar14 = 0;
          if (lVar10 != 0) {
            func_0x0412a280(lVar10,*(long *)(param_1 + 0x80) << 3);
          }
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
      }
    }
    plVar16 = *(long **)(param_1 + 0x80);
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      param_3 = (long *)((ulong)plVar22 & (long)plVar16 - 1U);
    }
    else {
      param_3 = plVar22;
      if (plVar16 <= plVar22) {
        param_3 = (long *)((ulong)plVar22 % (ulong)plVar16);
      }
    }
  }
  else {
    fVar28 = (float)(long)plVar16;
    fVar27 = *(float *)(param_1 + 0x98);
    if (plVar16 == (long *)0x0) goto LAB_06224e5d;
LAB_06224e4c:
    if (fVar28 * fVar27 < fVar26) goto LAB_06224e5d;
  }
  lVar10 = *plVar14;
  plVar14 = *(long **)(lVar10 + (long)param_3 * 8);
  if (plVar14 == (long *)0x0) {
    *(long *)pbVar23 = *(long *)(param_1 + 0x88);
    *(byte **)(param_1 + 0x88) = pbVar23;
    *(long *)(lVar10 + (long)param_3 * 8) = param_1 + 0x88;
    if (*(long *)pbVar23 != 0) {
      plVar14 = *(long **)(*(long *)pbVar23 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        *(byte **)(lVar10 + ((ulong)plVar14 & (long)plVar16 - 1U) * 8) = pbVar23;
      }
      else {
        if (plVar16 <= plVar14) {
          if (((ulong)plVar14 | (ulong)plVar16) >> 0x20 == 0) {
            *(byte **)(lVar10 + (((ulong)plVar14 & 0xffffffff) % ((ulong)plVar16 & 0xffffffff)) * 8)
                 = pbVar23;
            goto LAB_062251d6;
          }
          plVar14 = (long *)((ulong)plVar14 % (ulong)plVar16);
        }
        *(byte **)(lVar10 + (long)plVar14 * 8) = pbVar23;
      }
    }
  }
  else {
    *(long *)pbVar23 = *plVar14;
    *plVar14 = (long)pbVar23;
  }
LAB_062251d6:
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
LAB_062251dd:
  if (ppbStack_b8 == (byte **)0x0) {
    ppbStack_128 = (byte **)0x0;
LAB_06225201:
  }
  else {
    if (ppbStack_b8 != &pbStack_d8) {
      ppbStack_128 = (byte **)(**(code **)(*ppbStack_b8 + 0x10))();
      goto LAB_06225201;
    }
    ppbStack_128 = &pbStack_148;
    (**(code **)(*ppbStack_b8 + 0x18))();
  }
  ppbVar7 = ppbStack_128;
  ppbVar1 = (byte **)(pbVar23 + 0x20);
  if (ppbVar1 == &pbStack_148) {
joined_r0x062252fe:
    if (ppbStack_128 != &pbStack_148) goto LAB_06225300;
LAB_06225290:
    lVar10 = 0x20;
LAB_0622530a:
    (**(code **)(*ppbStack_128 + lVar10))();
  }
  else {
    ppbVar5 = *(byte ***)(pbVar23 + 0x40);
    if (ppbStack_128 == &pbStack_148) {
      if (ppbVar5 != ppbVar1) {
        (**(code **)(*ppbStack_128 + 0x18))(ppbStack_128,ppbVar1);
        (**(code **)(*ppbStack_128 + 0x20))();
        ppbStack_128 = *(byte ***)(pbVar23 + 0x40);
        *(byte ***)(pbVar23 + 0x40) = ppbVar1;
        goto joined_r0x062252fe;
      }
      (**(code **)(*ppbStack_128 + 0x18))(ppbStack_128,&uStack_178);
      (**(code **)(*ppbStack_128 + 0x20))();
      ppbStack_128 = (byte **)0x0;
      (**(code **)(**(long **)(pbVar23 + 0x40) + 0x18))(*(long **)(pbVar23 + 0x40),&pbStack_148);
      (**(code **)(**(long **)(pbVar23 + 0x40) + 0x20))();
      pbVar23[0x40] = 0;
      pbVar23[0x41] = 0;
      pbVar23[0x42] = 0;
      pbVar23[0x43] = 0;
      pbVar23[0x44] = 0;
      pbVar23[0x45] = 0;
      pbVar23[0x46] = 0;
      pbVar23[0x47] = 0;
      ppbStack_128 = &pbStack_148;
      (**(code **)(uStack_178 + 0x18))(&uStack_178,ppbVar1);
      (**(code **)(uStack_178 + 0x20))(&uStack_178);
      *(byte ***)(pbVar23 + 0x40) = ppbVar1;
    }
    else {
      if (ppbVar5 == ppbVar1) {
        (**(code **)(*ppbVar5 + 0x18))(ppbVar5,&pbStack_148);
        (**(code **)(**(long **)(pbVar23 + 0x40) + 0x20))();
        *(byte ***)(pbVar23 + 0x40) = ppbStack_128;
        ppbStack_128 = &pbStack_148;
        goto joined_r0x062252fe;
      }
      ppbStack_128 = ppbVar5;
      *(byte ***)(pbVar23 + 0x40) = ppbVar7;
    }
    if (ppbStack_128 == &pbStack_148) goto LAB_06225290;
LAB_06225300:
    lVar10 = 0x28;
    if (ppbStack_128 != (byte **)0x0) goto LAB_0622530a;
  }
  if (ppbVar1 != &pbStack_d8) {
    puVar17 = (uint *)(pbVar23 + 0x50);
    if ((*puVar17 & 1) == 0) {
      if ((uStack_a8 & 1) == 0) {
        *(ulong *)(pbVar23 + 0x60) = uStack_98;
        *puVar17 = uStack_a8;
        *(uint *)(pbVar23 + 0x54) = uStack_a4;
        *(uint *)(pbVar23 + 0x58) = uStack_a0;
        *(uint *)(pbVar23 + 0x5c) = uStack_9c;
      }
      else {
        FUN_04885070(puVar17,uStack_98,CONCAT44(uStack_9c,uStack_a0));
      }
    }
    else {
      bVar25 = (uStack_a8 & 1) != 0;
      uVar18 = (long)&uStack_a8 + 1;
      if (bVar25) {
        uVar18 = uStack_98;
      }
      uVar11 = (ulong)((byte)uStack_a8 >> 1);
      if (bVar25) {
        uVar11 = CONCAT44(uStack_9c,uStack_a0);
      }
      func_0x04885120(puVar17,uVar18,uVar11);
    }
  }
  uStack_178 = 0;
  if ((*puStack_80 & 1) == 0) {
    pbStack_160 = *(byte **)(puStack_80 + 4);
    uStack_170 = *puStack_80;
    uStack_16c = puStack_80[1];
    uStack_168 = puStack_80[2];
    uStack_164 = puStack_80[3];
  }
  else {
    func_0x0412e5e0(&uStack_170,*(undefined8 *)(puStack_80 + 4),*(undefined8 *)(puStack_80 + 2));
  }
  puStack_158 = (ulong *)0x0;
  bVar2 = (byte)uStack_170;
  if ((uStack_170 & 1) == 0) {
    if ((byte)uStack_170 >> 1 != 0) goto LAB_06225408;
LAB_06225506:
    uVar18 = 0;
  }
  else {
    if (CONCAT44(uStack_164,uStack_168) == 0) goto LAB_06225506;
LAB_06225408:
    if ((uStack_170 & 1) == 0) {
      pbVar23 = (byte *)((long)&uStack_170 + 1);
      if (pbVar23 != (byte *)0x0) goto LAB_0622542a;
      goto LAB_06225506;
    }
    pbVar23 = pbStack_160;
    if (pbStack_160 == (byte *)0x0) goto LAB_06225506;
LAB_0622542a:
    if (*pbVar23 == 0) goto LAB_06225506;
    uVar18 = 0xcbf29ce484222325;
    uVar11 = strlen(pbVar23);
    if (uVar11 != 0) {
      uVar20 = (ulong)((uint)uVar11 & 7);
      if (7 < uVar11) {
        uVar11 = uVar11 & 0xfffffffffffffff8;
        do {
          uVar18 = (((((((uVar18 * 0x100000001b3 ^ (ulong)*pbVar23) * 0x100000001b3 ^
                        (ulong)pbVar23[1]) * 0x100000001b3 ^ (ulong)pbVar23[2]) * 0x100000001b3 ^
                      (ulong)pbVar23[3]) * 0x100000001b3 ^ (ulong)pbVar23[4]) * 0x100000001b3 ^
                    (ulong)pbVar23[5]) * 0x100000001b3 ^ (ulong)pbVar23[6]) * 0x100000001b3 ^
                   (ulong)pbVar23[7];
          pbVar23 = pbVar23 + 8;
          uVar11 = uVar11 - 8;
        } while (uVar11 != 0);
      }
      if (uVar20 != 0) {
        uVar11 = 0;
        do {
          uVar18 = uVar18 * 0x100000001b3 ^ (ulong)pbVar23[uVar11];
          uVar11 = uVar11 + 1;
        } while (uVar20 != uVar11);
      }
    }
  }
  pbStack_148 = &UNK_0f0233f8;
  uStack_178 = uVar18;
  auStack_140 = auVar29;
  if ((*puStack_88 & 1) == 0) {
    uStack_120 = puStack_88[2];
    uStack_130 = *puStack_88;
    ppbStack_128 = (byte **)puStack_88[1];
  }
  else {
    func_0x0412e5e0(&uStack_130,puStack_88[2],puStack_88[1]);
    bVar2 = (byte)uStack_170;
  }
  uStack_108 = 0;
  pbStack_100 = (byte *)0x0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f0 = (undefined1)param_5;
  if ((bVar2 & 1) == 0) {
    pbStack_100 = pbStack_160;
    uStack_110 = CONCAT44(uStack_16c,uStack_170);
    uStack_108 = CONCAT44(uStack_164,uStack_168);
    uStack_118 = uStack_178;
  }
  else {
    FUN_04885070(&uStack_110,pbStack_160,CONCAT44(uStack_164,uStack_168));
    uStack_118 = uStack_178;
    if ((uStack_170 & 1) != 0) {
      func_0x0412a280(pbStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
    }
  }
  plVar14 = *(long **)(param_1 + 0x28);
  if (DAT_0f56c590 == '\0') {
    iVar9 = func_0x04108328(&DAT_0f56c590);
    if (iVar9 != 0) {
      _DAT_0f56c560 = &UNK_0f027318;
      _DAT_0f56c580 = (long *)&DAT_0f56c560;
      func_0x0eee2f40(&UNK_062619b0,&DAT_0f56c560,0xf53dab8);
      func_0x0410844d(&DAT_0f56c590);
    }
  }
  if (_DAT_0f56c580 == (long *)0x0) {
    puStack_158 = (ulong *)0x0;
  }
  else if (_DAT_0f56c580 == (long *)&DAT_0f56c560) {
    puStack_158 = &uStack_178;
    (**(code **)(_DAT_0f56c560 + 0x18))(&DAT_0f56c560);
  }
  else {
    puStack_158 = (ulong *)(**(code **)(*_DAT_0f56c580 + 0x10))();
  }
  uVar13 = (**(code **)(*plVar14 + 0x48))(plVar14,&DAT_01224159,&uStack_178);
  if (puStack_158 == &uStack_178) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (puStack_158 == (ulong *)0x0) goto LAB_06225688;
  }
  (**(code **)(*puStack_158 + lVar10))();
LAB_06225688:
  (**(code **)(*plVar14 + 0x50))(auStack_78,plVar14,&pbStack_148,uVar13);
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(auStack_70);
  }
  if ((uStack_110 & 1) != 0) {
    func_0x0412a280(pbStack_100,uStack_110 & 0xfffffffffffffffe);
  }
  if ((uStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,uStack_130 & 0xfffffffffffffffe);
  }
  if ((uStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT44(uStack_a4,uStack_a8) & 0xfffffffffffffffe);
  }
  if (ppbStack_b8 == &pbStack_d8) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (ppbStack_b8 == (byte **)0x0) {
      return;
    }
  }
  (**(code **)(*ppbStack_b8 + lVar10))();
  return;
}


