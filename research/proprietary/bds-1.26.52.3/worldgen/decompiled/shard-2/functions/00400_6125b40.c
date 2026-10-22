/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6225b40 (ELF vaddr 0x6125b40)
 * Label: caller-of-callee
 * Body:  [[06225b40, 06225d9a] [06225da0, 06225e08] [06225e10, 06226023] [06226030, 0622610b] [06226110, 06226781] [06226790, 06226881] [06226931, 06226979] [0622697d, 0622698f]]
 * Ghidra: FUN_06225b40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06225b40(long param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  byte *pbStack_178;
  byte *pbStack_170;
  long lStack_168;
  uint uStack_160;
  uint uStack_15c;
  uint *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  byte *pbStack_140;
  long lStack_138;
  ulong uStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  uint *puStack_108;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  long lStack_e8;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  char cStack_c0;
  long alStack_b8 [4];
  long *plStack_98;
  uint *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  if (param_3[4] == 0) {
    cVar6 = FUN_0eeddcf0(&UNK_012f3139,&UNK_01198d5e,0x16c,&UNK_014142bf,&UNK_012599ac);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
      return;
    }
    return;
  }
  lVar8 = func_0x062e2370(param_1 + 0x50);
  if (lVar8 == 0) {
    bVar20 = ((byte)*param_2 & 1) != 0;
    pbStack_178 = (byte *)((long)param_2 + 1);
    if (bVar20) {
      pbStack_178 = *(byte **)(param_2 + 4);
    }
    pbStack_170 = (byte *)(ulong)(byte)((byte)*param_2 >> 1);
    if (bVar20) {
      pbStack_170 = (byte *)*(ulong *)(param_2 + 2);
    }
    func_0x0470d9a0(&uStack_128,&UNK_0119e3d1,0x1e,0xd,&pbStack_178);
    pbStack_178 = (byte *)0x0;
    pbStack_170 = (byte *)0x0;
    lStack_168 = 0;
    if ((uStack_128 & 1) == 0) {
      uStack_c8 = uStack_118;
      uStack_d8 = uStack_128;
      uStack_d4 = uStack_124;
      uStack_d0 = uStack_120;
      uStack_cc = uStack_11c;
    }
    else {
      func_0x0412e5e0(&uStack_d8,uStack_118,CONCAT44(uStack_11c,uStack_120));
    }
    cStack_c0 = '\x01';
    alStack_b8[0]._0_1_ = 0;
    plVar14 = (long *)param_3[4];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x30))(plVar14,param_2,&pbStack_178,alStack_b8,&uStack_d8);
      if ((cStack_c0 == '\x01') && ((uStack_d8 & 1) != 0)) {
        func_0x0412a280(uStack_c8,CONCAT44(uStack_d4,uStack_d8) & 0xfffffffffffffffe);
      }
      pbVar1 = pbStack_178;
      pbVar10 = pbStack_170;
      if (pbStack_178 != (byte *)0x0) {
        for (; pbVar1 != pbVar10; pbVar10 = pbVar10 + -0x28) {
          if ((pbVar10[-0x20] & 1) != 0) {
            func_0x0412a280(*(long *)(pbVar10 + -0x10),
                            *(ulong *)(pbVar10 + -0x20) & 0xfffffffffffffffe);
          }
        }
        pbStack_170 = pbVar1;
        func_0x0412a280(pbStack_178,lStack_168 - (long)pbStack_178);
      }
      if ((uStack_128 & 1) != 0) {
        func_0x0412a280(uStack_118,CONCAT44(uStack_124,uStack_128) & 0xfffffffffffffffe);
        return;
      }
      return;
    }
    func_0x04891200();
    goto LAB_06226875;
  }
  auVar24 = func_0x0eeda000(0);
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  plVar14 = (long *)param_3[4];
  if (plVar14 == (long *)0x0) {
    puStack_108 = (uint *)0x0;
    bVar2 = (byte)*param_2;
joined_r0x06225cab:
    if ((bVar2 & 1) == 0) goto LAB_06225bbd;
LAB_06225cb1:
    lStack_138 = auVar24._8_8_;
    uStack_130 = auVar24._0_8_;
    uVar18 = uStack_130;
    func_0x0412e5e0(&uStack_f8,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
  }
  else {
    if (plVar14 == param_3) {
      puStack_108 = &uStack_128;
      (**(code **)(*plVar14 + 0x18))();
      auVar24._8_8_ = lStack_138;
      auVar24._0_8_ = uStack_130;
      bVar2 = (byte)*param_2;
      goto joined_r0x06225cab;
    }
    puStack_108 = (uint *)(**(code **)(*plVar14 + 0x10))();
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
    if ((*param_2 & 1) != 0) goto LAB_06225cb1;
LAB_06225bbd:
    uStack_130 = auVar24._0_8_;
    lStack_e8 = *(long *)(param_2 + 4);
    uStack_f8 = *param_2;
    uStack_f4 = param_2[1];
    uStack_f0 = param_2[2];
    uStack_ec = param_2[3];
    uVar18 = uStack_130;
  }
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  pbStack_140 = (byte *)(param_1 + 0xa0);
  puVar17 = (uint *)(lStack_138 * 0x1f1f1f1f ^ uVar18);
  puVar13 = *(uint **)(param_1 + 0xa8);
  puStack_80 = param_2;
  if (puVar13 != (uint *)0x0) {
    uVar9 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      param_2 = (uint *)((ulong)((long)puVar13 - 1U) & (ulong)puVar17);
    }
    else {
      param_2 = puVar17;
      if (puVar13 <= puVar17) {
        param_2 = (uint *)((ulong)puVar17 % (ulong)puVar13);
      }
    }
    puVar3 = *(undefined8 **)(*(long *)pbStack_140 + (long)param_2 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (pbVar10 = (byte *)*puVar3, pbVar10 != (byte *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if (*(uint **)(pbVar10 + 8) == puVar17) {
            if ((*(ulong *)(pbVar10 + 0x10) == uVar18) && (*(long *)(pbVar10 + 0x18) == lStack_138))
            goto LAB_06226355;
          }
          else if ((uint *)((ulong)*(uint **)(pbVar10 + 8) & (ulong)((long)puVar13 - 1U)) != param_2
                  ) break;
          pbVar10 = *(byte **)pbVar10;
        } while (pbVar10 != (byte *)0x0);
      }
      else {
        do {
          puVar15 = *(uint **)(pbVar10 + 8);
          if (puVar15 == puVar17) {
            if ((*(ulong *)(pbVar10 + 0x10) == uVar18) && (*(long *)(pbVar10 + 0x18) == lStack_138))
            goto LAB_06226355;
          }
          else {
            if (puVar13 <= puVar15) {
              if (((ulong)puVar15 | (ulong)puVar13) >> 0x20 == 0) {
                puVar15 = (uint *)(((ulong)puVar15 & 0xffffffff) % ((ulong)puVar13 & 0xffffffff));
              }
              else {
                puVar15 = (uint *)((ulong)puVar15 % (ulong)puVar13);
              }
            }
            if (puVar15 != param_2) break;
          }
          pbVar10 = *(byte **)pbVar10;
        } while (pbVar10 != (byte *)0x0);
      }
    }
  }
  pbVar10 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (pbVar10 == (byte *)0x0) {
    func_0x0eec74c0(0x70,0);
  }
  pbStack_170 = pbStack_140;
  lStack_168 = 1;
  pbVar10[0] = 0;
  pbVar10[1] = 0;
  pbVar10[2] = 0;
  pbVar10[3] = 0;
  pbVar10[4] = 0;
  pbVar10[5] = 0;
  pbVar10[6] = 0;
  pbVar10[7] = 0;
  *(uint **)(pbVar10 + 8) = puVar17;
  *(ulong *)(pbVar10 + 0x10) = uVar18;
  *(long *)(pbVar10 + 0x18) = lStack_138;
  pbVar10[0x20] = 0;
  pbVar10[0x21] = 0;
  pbVar10[0x22] = 0;
  pbVar10[0x23] = 0;
  pbVar10[0x24] = 0;
  pbVar10[0x25] = 0;
  pbVar10[0x26] = 0;
  pbVar10[0x27] = 0;
  pbVar10[0x28] = 0;
  pbVar10[0x29] = 0;
  pbVar10[0x2a] = 0;
  pbVar10[0x2b] = 0;
  pbVar10[0x2c] = 0;
  pbVar10[0x2d] = 0;
  pbVar10[0x2e] = 0;
  pbVar10[0x2f] = 0;
  pbVar10[0x30] = 0;
  pbVar10[0x31] = 0;
  pbVar10[0x32] = 0;
  pbVar10[0x33] = 0;
  pbVar10[0x34] = 0;
  pbVar10[0x35] = 0;
  pbVar10[0x36] = 0;
  pbVar10[0x37] = 0;
  pbVar10[0x38] = 0;
  pbVar10[0x39] = 0;
  pbVar10[0x3a] = 0;
  pbVar10[0x3b] = 0;
  pbVar10[0x3c] = 0;
  pbVar10[0x3d] = 0;
  pbVar10[0x3e] = 0;
  pbVar10[0x3f] = 0;
  pbVar10[0x40] = 0;
  pbVar10[0x41] = 0;
  pbVar10[0x42] = 0;
  pbVar10[0x43] = 0;
  pbVar10[0x44] = 0;
  pbVar10[0x45] = 0;
  pbVar10[0x46] = 0;
  pbVar10[0x47] = 0;
  pbVar10[0x48] = 0;
  pbVar10[0x49] = 0;
  pbVar10[0x4a] = 0;
  pbVar10[0x4b] = 0;
  pbVar10[0x4c] = 0;
  pbVar10[0x4d] = 0;
  pbVar10[0x4e] = 0;
  pbVar10[0x4f] = 0;
  pbVar10[0x50] = 0;
  pbVar10[0x51] = 0;
  pbVar10[0x52] = 0;
  pbVar10[0x53] = 0;
  pbVar10[0x54] = 0;
  pbVar10[0x55] = 0;
  pbVar10[0x56] = 0;
  pbVar10[0x57] = 0;
  pbVar10[0x58] = 0;
  pbVar10[0x59] = 0;
  pbVar10[0x5a] = 0;
  pbVar10[0x5b] = 0;
  pbVar10[0x5c] = 0;
  pbVar10[0x5d] = 0;
  pbVar10[0x5e] = 0;
  pbVar10[0x5f] = 0;
  pbVar10[0x60] = 0;
  pbVar10[0x61] = 0;
  pbVar10[0x62] = 0;
  pbVar10[99] = 0;
  pbVar10[100] = 0;
  pbVar10[0x65] = 0;
  pbVar10[0x66] = 0;
  pbVar10[0x67] = 0;
  pbVar10[0x68] = 0;
  pbVar10[0x69] = 0;
  pbVar10[0x6a] = 0;
  pbVar10[0x6b] = 0;
  pbVar10[0x6c] = 0;
  pbVar10[0x6d] = 0;
  pbVar10[0x6e] = 0;
  pbVar10[0x6f] = 0;
  fVar21 = (float)(*(long *)(param_1 + 0xb8) + 1);
  pbStack_178 = pbVar10;
  if ((long)puVar13 < 0) {
    fVar23 = (float)puVar13;
    fVar22 = *(float *)(param_1 + 0xc0);
    if (puVar13 != (uint *)0x0) goto LAB_06225ef9;
LAB_06225f0a:
    uVar18 = 1;
    if ((uint *)0x2 < puVar13) {
      uVar18 = (ulong)(((ulong)puVar13 & (ulong)((long)puVar13 - 1U)) != 0);
    }
    puVar19 = (uint *)(uVar18 | (long)puVar13 * 2);
    fVar21 = (float)func_0x0eee3ab0(fVar21 / fVar22);
    puVar15 = (uint *)((long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21);
    if (puVar15 < puVar19) {
      puVar15 = puVar19;
    }
    puVar19 = (uint *)0x2;
    if ((puVar15 == (uint *)0x1) ||
       (puVar19 = puVar15, ((ulong)puVar15 & (ulong)((long)puVar15 - 1U)) == 0)) {
      bVar20 = puVar19 < puVar13;
      puVar15 = puVar19;
      if (puVar19 <= puVar13) goto LAB_062261b1;
LAB_06225f82:
      if ((ulong)puVar19 >> 0x3d != 0) {
LAB_06226875:
        uVar12 = func_0x04882eb0();
        FUN_04aa5c60(&pbStack_178);
        if ((uStack_128 & 1) != 0) {
          func_0x0412a280(uStack_118,CONCAT44(uStack_124,uStack_128) & 0xfffffffffffffffe);
          uVar12 = func_0x0eee2d70(uVar12);
          if ((uStack_160 & 1) != 0) {
            func_0x0412a280(uStack_150,CONCAT44(uStack_15c,uStack_160) & 0xfffffffffffffffe);
          }
          func_0x062269b0(&uStack_128);
        }
        func_0x0eee2d70(uVar12);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar8 = (long)puVar19 * 8;
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
      if (lVar11 == 0) {
        func_0x0eec74c0(lVar8,0);
      }
      lVar4 = *(long *)pbStack_140;
      *(long *)pbStack_140 = lVar11;
      if (lVar4 != 0) {
        func_0x0412a280(lVar4,*(long *)(param_1 + 0xa8) << 3);
        lVar11 = *(long *)(param_1 + 0xa0);
      }
      *(uint **)(param_1 + 0xa8) = puVar19;
      func_0x0eee2dd0(lVar11,0,lVar8);
      plVar14 = *(long **)(param_1 + 0xb0);
      if (plVar14 != (long *)0x0) {
        puVar13 = (uint *)plVar14[1];
        pbVar1 = (byte *)((long)puVar19 - 1);
        if (((ulong)puVar19 & (ulong)pbVar1) == 0) {
          *(long *)(lVar11 + ((ulong)puVar13 & (ulong)pbVar1) * 8) = param_1 + 0xb0;
          uVar18 = (ulong)puVar13 & (ulong)pbVar1;
          while (plVar16 = plVar14, plVar14 = (long *)*plVar16, plVar14 != (long *)0x0) {
            uVar9 = plVar14[1] & (ulong)pbVar1;
            if (uVar9 != uVar18) {
              if (*(long *)(lVar11 + uVar9 * 8) == 0) {
                *(long **)(lVar11 + uVar9 * 8) = plVar16;
                uVar18 = uVar9;
              }
              else {
                *plVar16 = *plVar14;
                *plVar14 = **(undefined8 **)(lVar11 + uVar9 * 8);
                **(long **)(lVar11 + uVar9 * 8) = (long)plVar14;
                plVar14 = plVar16;
              }
            }
          }
        }
        else {
          if (puVar19 <= puVar13) {
            if (((ulong)puVar13 | (ulong)puVar19) >> 0x20 == 0) {
              puVar13 = (uint *)(((ulong)puVar13 & 0xffffffff) % ((ulong)puVar19 & 0xffffffff));
            }
            else {
              puVar13 = (uint *)((ulong)puVar13 % (ulong)puVar19);
            }
          }
          *(long *)(lVar11 + (long)puVar13 * 8) = param_1 + 0xb0;
          plVar16 = (long *)*plVar14;
          while (plVar16 != (long *)0x0) {
            puVar15 = (uint *)plVar16[1];
            if (puVar19 <= puVar15) {
              if (((ulong)puVar15 | (ulong)puVar19) >> 0x20 == 0) {
                puVar15 = (uint *)(((ulong)puVar15 & 0xffffffff) % ((ulong)puVar19 & 0xffffffff));
              }
              else {
                puVar15 = (uint *)((ulong)puVar15 % (ulong)puVar19);
              }
            }
            if (puVar15 != puVar13) {
              if (*(long *)(lVar11 + (long)puVar15 * 8) == 0) {
                *(long **)(lVar11 + (long)puVar15 * 8) = plVar14;
                puVar13 = puVar15;
              }
              else {
                *plVar14 = *plVar16;
                *plVar16 = **(long **)(lVar11 + (long)puVar15 * 8);
                **(undefined8 **)(lVar11 + (long)puVar15 * 8) = plVar16;
                plVar16 = plVar14;
              }
            }
            plVar14 = plVar16;
            plVar16 = (long *)*plVar14;
          }
        }
      }
    }
    else {
      puVar19 = (uint *)func_0x0412c3f0();
      puVar13 = *(uint **)(param_1 + 0xa8);
      bVar20 = puVar19 < puVar13;
      puVar15 = puVar19;
      if (puVar13 < puVar19) goto LAB_06225f82;
LAB_062261b1:
      if (bVar20) {
        fVar21 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0xb8) /
                                        *(float *)(param_1 + 0xc0));
        puVar19 = (uint *)((long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21);
        if ((puVar13 < (uint *)0x3) ||
           (uVar18 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555),
           uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
           1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          puVar19 = (uint *)func_0x0412c3f0(puVar19);
        }
        else if ((uint *)0x1 < puVar19) {
          lVar8 = 0x3f;
          if ((byte *)((long)puVar19 + -1) != (byte *)0x0) {
            for (; (ulong)((long)puVar19 + -1) >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          puVar19 = (uint *)(1L << (-((byte)lVar8 ^ 0x3f) & 0x3f));
        }
        if (puVar19 < puVar15) {
          puVar19 = puVar15;
        }
        if (puVar19 < puVar13) {
          if (puVar19 != (uint *)0x0) goto LAB_06225f82;
          lVar8 = *(long *)pbStack_140;
          pbStack_140[0] = 0;
          pbStack_140[1] = 0;
          pbStack_140[2] = 0;
          pbStack_140[3] = 0;
          pbStack_140[4] = 0;
          pbStack_140[5] = 0;
          pbStack_140[6] = 0;
          pbStack_140[7] = 0;
          if (lVar8 != 0) {
            func_0x0412a280(lVar8,*(long *)(param_1 + 0xa8) << 3);
          }
          *(undefined8 *)(param_1 + 0xa8) = 0;
        }
      }
    }
    puVar13 = *(uint **)(param_1 + 0xa8);
    if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
      param_2 = (uint *)((ulong)puVar17 & (ulong)((long)puVar13 - 1U));
    }
    else {
      param_2 = puVar17;
      if (puVar13 <= puVar17) {
        param_2 = (uint *)((ulong)puVar17 % (ulong)puVar13);
      }
    }
  }
  else {
    fVar23 = (float)(long)puVar13;
    fVar22 = *(float *)(param_1 + 0xc0);
    if (puVar13 == (uint *)0x0) goto LAB_06225f0a;
LAB_06225ef9:
    if (fVar23 * fVar22 < fVar21) goto LAB_06225f0a;
  }
  auVar24._8_8_ = lStack_138;
  auVar24._0_8_ = uStack_130;
  lVar8 = *(long *)pbStack_140;
  plVar14 = *(long **)(lVar8 + (long)param_2 * 8);
  if (plVar14 == (long *)0x0) {
    *(long *)pbVar10 = *(long *)(param_1 + 0xb0);
    *(byte **)(param_1 + 0xb0) = pbVar10;
    *(long *)(lVar8 + (long)param_2 * 8) = param_1 + 0xb0;
    if (*(long *)pbVar10 != 0) {
      puVar17 = *(uint **)(*(long *)pbVar10 + 8);
      if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
        *(byte **)(lVar8 + ((ulong)puVar17 & (ulong)((long)puVar13 - 1U)) * 8) = pbVar10;
      }
      else {
        if (puVar13 <= puVar17) {
          if (((ulong)puVar17 | (ulong)puVar13) >> 0x20 == 0) {
            *(byte **)(lVar8 + (((ulong)puVar17 & 0xffffffff) % ((ulong)puVar13 & 0xffffffff)) * 8)
                 = pbVar10;
            goto LAB_0622634e;
          }
          puVar17 = (uint *)((ulong)puVar17 % (ulong)puVar13);
        }
        *(byte **)(lVar8 + (long)puVar17 * 8) = pbVar10;
      }
    }
  }
  else {
    *(long *)pbVar10 = *plVar14;
    *plVar14 = (long)pbVar10;
  }
LAB_0622634e:
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
LAB_06226355:
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  if (puStack_108 == (uint *)0x0) {
    puStack_158 = (uint *)0x0;
  }
  else if (puStack_108 == &uStack_128) {
    puStack_158 = (uint *)&pbStack_178;
    (**(code **)(*(long *)puStack_108 + 0x18))();
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
  }
  else {
    puStack_158 = (uint *)(**(code **)(*(long *)puStack_108 + 0x10))();
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
  }
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  puVar13 = (uint *)(pbVar10 + 0x20);
  if ((byte **)puVar13 == &pbStack_178) {
LAB_06226462:
    if ((byte **)puStack_158 == &pbStack_178) goto LAB_062263fe;
LAB_0622646c:
    uStack_130 = auVar24._0_8_;
    lVar8 = 0x28;
    uVar18 = uStack_130;
    if (puStack_158 != (uint *)0x0) goto LAB_06226476;
  }
  else {
    puVar17 = *(uint **)(pbVar10 + 0x40);
    if ((byte **)puStack_158 != &pbStack_178) {
      if (puVar17 != puVar13) {
        *(uint **)(pbVar10 + 0x40) = puStack_158;
        puStack_158 = puVar17;
        if ((byte **)puVar17 != &pbStack_178) goto LAB_0622646c;
        goto LAB_062263fe;
      }
      (**(code **)(*(long *)puVar17 + 0x18))(puVar17,&pbStack_178);
      (**(code **)(**(long **)(pbVar10 + 0x40) + 0x20))();
      auVar24._8_8_ = lStack_138;
      auVar24._0_8_ = uStack_130;
      *(uint **)(pbVar10 + 0x40) = puStack_158;
      puStack_158 = (uint *)&pbStack_178;
      goto LAB_06226462;
    }
    if (puVar17 == puVar13) {
      (**(code **)(*(long *)puStack_158 + 0x18))(puStack_158,alStack_b8);
      (**(code **)(*(long *)puStack_158 + 0x20))();
      puStack_158 = (uint *)0x0;
      (**(code **)(**(long **)(pbVar10 + 0x40) + 0x18))(*(long **)(pbVar10 + 0x40),&pbStack_178);
      (**(code **)(**(long **)(pbVar10 + 0x40) + 0x20))();
      pbVar10[0x40] = 0;
      pbVar10[0x41] = 0;
      pbVar10[0x42] = 0;
      pbVar10[0x43] = 0;
      pbVar10[0x44] = 0;
      pbVar10[0x45] = 0;
      pbVar10[0x46] = 0;
      pbVar10[0x47] = 0;
      puStack_158 = (uint *)&pbStack_178;
      (**(code **)(CONCAT71(alStack_b8[0]._1_7_,(undefined1)alStack_b8[0]) + 0x18))
                (alStack_b8,puVar13);
      (**(code **)(CONCAT71(alStack_b8[0]._1_7_,(undefined1)alStack_b8[0]) + 0x20))(alStack_b8);
      auVar24._8_8_ = lStack_138;
      auVar24._0_8_ = uStack_130;
      *(uint **)(pbVar10 + 0x40) = puVar13;
      if ((byte **)puStack_158 == &pbStack_178) goto LAB_062263fe;
      goto LAB_0622646c;
    }
    (**(code **)(*(long *)puStack_158 + 0x18))(puStack_158,puVar13);
    (**(code **)(*(long *)puStack_158 + 0x20))();
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
    puStack_158 = *(uint **)(pbVar10 + 0x40);
    *(uint **)(pbVar10 + 0x40) = puVar13;
    if ((byte **)puStack_158 != &pbStack_178) goto LAB_0622646c;
LAB_062263fe:
    lVar8 = 0x20;
LAB_06226476:
    lStack_138 = auVar24._8_8_;
    uStack_130 = auVar24._0_8_;
    (**(code **)(*(long *)puStack_158 + lVar8))();
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
    uVar18 = uStack_130;
  }
  if (puVar13 != &uStack_128) {
    lStack_138 = auVar24._8_8_;
    uStack_130 = auVar24._0_8_;
    uVar18 = uStack_130;
    puVar13 = (uint *)(pbVar10 + 0x50);
    if ((*puVar13 & 1) == 0) {
      if ((uStack_f8 & 1) == 0) {
        *(long *)(pbVar10 + 0x60) = lStack_e8;
        *puVar13 = uStack_f8;
        *(uint *)(pbVar10 + 0x54) = uStack_f4;
        *(uint *)(pbVar10 + 0x58) = uStack_f0;
        *(uint *)(pbVar10 + 0x5c) = uStack_ec;
      }
      else {
        func_0x04885070(puVar13,lStack_e8,CONCAT44(uStack_ec,uStack_f0));
        auVar24._8_8_ = lStack_138;
        auVar24._0_8_ = uStack_130;
      }
    }
    else {
      bVar20 = (uStack_f8 & 1) != 0;
      lVar8 = (long)&uStack_f8 + 1;
      if (bVar20) {
        lVar8 = lStack_e8;
      }
      uVar9 = (ulong)((byte)uStack_f8 >> 1);
      if (bVar20) {
        uVar9 = CONCAT44(uStack_ec,uStack_f0);
      }
      func_0x04885120(puVar13,lVar8,uVar9);
      auVar24._8_8_ = lStack_138;
      auVar24._0_8_ = uStack_130;
    }
  }
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  pbStack_178 = &UNK_0f0234d8;
  lStack_168 = lStack_138;
  pbStack_170 = (byte *)uVar18;
  if ((*puStack_80 & 1) == 0) {
    uStack_150 = *(undefined8 *)(puStack_80 + 4);
    uStack_160 = *puStack_80;
    uStack_15c = puStack_80[1];
    puStack_158 = *(uint **)(puStack_80 + 2);
  }
  else {
    func_0x0412e5e0(&uStack_160,*(undefined8 *)(puStack_80 + 4),*(undefined8 *)(puStack_80 + 2));
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
  }
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  uStack_148 = 0;
  plVar14 = *(long **)(param_1 + 0x28);
  if (DAT_0f56c5d0 == '\0') {
    iVar7 = func_0x04108328(&DAT_0f56c5d0);
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
    if (iVar7 != 0) {
      _DAT_0f56c5a0 = &UNK_0f0273e8;
      _DAT_0f56c5c0 = (long *)&DAT_0f56c5a0;
      func_0x0eee2f40(&UNK_062619b0,&DAT_0f56c5a0,0xf53dab8);
      func_0x0410844d(&DAT_0f56c5d0);
      auVar24._8_8_ = lStack_138;
      auVar24._0_8_ = uStack_130;
    }
  }
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  if (_DAT_0f56c5c0 == (long *)0x0) {
    plStack_98 = (long *)0x0;
  }
  else if (_DAT_0f56c5c0 == (long *)&DAT_0f56c5a0) {
    plStack_98 = alStack_b8;
    (**(code **)(_DAT_0f56c5a0 + 0x18))(&DAT_0f56c5a0);
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
  }
  else {
    plStack_98 = (long *)(**(code **)(*_DAT_0f56c5c0 + 0x10))();
    auVar24._8_8_ = lStack_138;
    auVar24._0_8_ = uStack_130;
  }
  lStack_138 = auVar24._8_8_;
  uStack_130 = auVar24._0_8_;
  uVar12 = (**(code **)(*plVar14 + 0x48))(plVar14,&DAT_01341e9e,alStack_b8);
  if (plStack_98 == alStack_b8) {
    lVar8 = 0x20;
  }
  else {
    lVar8 = 0x28;
    if (plStack_98 == (long *)0x0) goto LAB_06226600;
  }
  (**(code **)(*plStack_98 + lVar8))();
LAB_06226600:
  (**(code **)(*plVar14 + 0x50))(auStack_78,plVar14,&pbStack_178,uVar12);
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(auStack_70);
  }
  if ((uStack_160 & 1) != 0) {
    func_0x0412a280(uStack_150,CONCAT44(uStack_15c,uStack_160) & 0xfffffffffffffffe);
  }
  if ((uStack_f8 & 1) != 0) {
    func_0x0412a280(lStack_e8,CONCAT44(uStack_f4,uStack_f8) & 0xfffffffffffffffe);
  }
  if (puStack_108 == &uStack_128) {
    lVar8 = 0x20;
  }
  else {
    lVar8 = 0x28;
    if (puStack_108 == (uint *)0x0) {
      return;
    }
  }
  (**(code **)(*(long *)puStack_108 + lVar8))();
  return;
}


