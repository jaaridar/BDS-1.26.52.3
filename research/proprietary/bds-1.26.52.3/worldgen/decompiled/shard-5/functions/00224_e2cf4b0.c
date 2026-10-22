/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3cf4b0 (ELF vaddr 0xe2cf4b0)
 * Label: caller-of-callee
 * Body:  [[0e3cf4b0, 0e3cfb41] [0e3cfb50, 0e3cfc1d] [0e3cfc20, 0e3cfc62] [0e3cfc70, 0e3cff8d] [0e3cff90, 0e3cffc1] [0e3cffd0, 0e3d078f]]
 * Ghidra: FUN_0e3cf4b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3cf4b0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  byte *pbVar17;
  int *piVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  undefined1 auStack_190 [16];
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined2 uStack_128;
  undefined2 uStack_126;
  uint uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  undefined7 uStack_df;
  undefined1 auStack_d8 [16];
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e3cf3c0();
  if ((DAT_0f753110 == '\0') && (iVar8 = func_0x04108328(&DAT_0f753110), iVar8 != 0)) {
    func_0x0e46bd10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f753090,0xf53dab8);
    FUN_0410844d(&DAT_0f753110);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f753090 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_0e3cf530;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f753090 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0e3cf530:
    puVar10 = &DAT_0f753090;
    if (iRam000000000f7530f0 != -0x2b3da790) goto LAB_0e3cf5b2;
LAB_0e3cf55b:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_0e3cf5b2;
    bVar22 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar19 = lVar13 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e46c440(&lStack_110,param_1,lVar19,uVar16);
    if (cStack_e0 != '\0') goto LAB_0e3cf598;
LAB_0e3cf5d8:
    if ((DAT_0f753130 == '\0') && (iVar8 = func_0x04108328(&DAT_0f753130), iVar8 != 0)) {
      func_0x0e46be20();
      FUN_0410844d(&DAT_0f753130);
    }
    lVar13 = lStack_110;
    uStack_e8 = 0x5eb0c06d00000001;
    if ((DAT_0f753110 == '\0') && (iVar8 = func_0x04108328(&DAT_0f753110), iVar8 != 0)) {
      func_0x0e46bd10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f753090,0xf53dab8);
      FUN_0410844d(&DAT_0f753110);
    }
    plVar12 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f753090 + 4)) * 8);
    do {
      lVar19 = *plVar12;
      if (lVar19 == -1) goto LAB_0e3cf670;
      plVar12 = (long *)(*(long *)(lVar13 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f753090 + 4)
            );
    if (plVar12 == *(long **)(lVar13 + 0x38)) {
LAB_0e3cf670:
      auStack_1e8._0_8_ = &DAT_0f753090;
    }
    else {
      auStack_1e8._0_8_ = plVar12[2];
    }
    auStack_1e8._8_8_ = lVar13 + 0x18;
    func_0x0ed621a0(auStack_1e8,uStack_e8._4_4_);
    auVar23 = auStack_1a8;
    auStack_1e8._0_2_ = 1;
    auStack_1e8._8_8_ = &uStack_108;
    uStack_1d8 = uStack_e8._4_4_;
    auStack_1d0 = (undefined1  [16])0x0;
    auStack_1c0 = (undefined1  [16])0x0;
    lStack_1b0 = 0;
    auStack_1a8._1_8_ = 0x69726f6765746163;
    auStack_1a8[0] = 0x14;
    auStack_1a8._9_2_ = 0x7365;
    auStack_1a8._12_4_ = auVar23._12_4_;
    auStack_1a8[0xb] = 0;
    auStack_190 = (undefined1  [16])0x0;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    uStack_160 = 0x3f600000;
    FUN_048afb10(auStack_190,8);
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    auStack_158 = (undefined1  [16])0x0;
    uStack_128 = 0xff00;
    uStack_124 = uStack_124 & 0xffffff00;
    uStack_120 = uStack_120 & 0xffffff00;
    uStack_11c = 0;
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f137958;
    uVar3 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar11;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240._4_4_ << 0x20);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_089b22d0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &UNK_089b09b0;
    puStack_210 = &UNK_0e46cfa0;
    puStack_208 = &UNK_0e46d1c0;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar3 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_1f8._8_8_ + 8);
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    uVar3 = auStack_1e8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar12 + 1) = (undefined1  [16])0x0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_248 = plVar12 + 3;
    uVar4 = auStack_1d0._0_8_;
    uVar5 = auStack_1d0._8_8_;
    auStack_1d0 = (undefined1  [16])0x0;
    plVar12[3] = uVar4;
    plVar12[4] = uVar5;
    plVar12[7] = lStack_1b0;
    plVar12[5] = auStack_1c0._0_8_;
    plVar12[6] = auStack_1c0._8_8_;
    auStack_1c0 = (undefined1  [16])0x0;
    lStack_1b0 = 0;
    plVar12[10] = lStack_198;
    plVar12[8] = auStack_1a8._0_8_;
    plVar12[9] = auStack_1a8._8_8_;
    auStack_1a8 = (undefined1  [16])0x0;
    lStack_198 = 0;
    plVar12[0xb] = auStack_190._0_8_;
    plVar12[0xc] = auStack_190._8_8_;
    plVar12[0xd] = lStack_180;
    auStack_190 = (undefined1  [16])0x0;
    lStack_180 = 0;
    plVar12[0xe] = lStack_178;
    plVar12[0xf] = lStack_170;
    plVar12[0x10] = lStack_168;
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_160;
    plVar12[0x12] = auStack_158._0_8_;
    plVar12[0x13] = auStack_158._8_8_;
    plVar12[0x14] = lStack_148;
    auStack_158 = (undefined1  [16])0x0;
    lStack_148 = 0;
    plVar12[0x17] = lStack_130;
    plVar12[0x15] = lStack_140;
    plVar12[0x16] = lStack_138;
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_11c,CONCAT43(uStack_120,uStack_124._1_3_));
    plVar12[0x18] = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
    auStack_d8 = (undefined1  [16])0x0;
    uStack_240 = plVar12;
    func_0x048afd20(uVar3,&uStack_250);
    plVar12 = uStack_240;
    if (uStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_240 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_240 + 0x10))(uStack_240);
        func_0x0412c2d0(plVar12);
      }
    }
    uVar4 = auStack_d8._8_8_;
    if ((long *)auStack_d8._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_d8._8_8_ + 8);
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*(long *)auStack_d8._8_8_ + 0x10))(auStack_d8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    lVar13 = *(long *)(uVar3 + 0x10);
    iVar8 = *(int *)(uVar3 + 0x1c);
    if (iVar8 == 2) {
      piVar18 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
      iVar8 = *piVar18;
      while (iVar8 != *(int *)(uVar3 + 0x18)) {
        piVar18 = piVar18 + 0x16;
        iVar8 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != *(long *)(uVar3 + 8); piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_0e3cfb5a:
      piVar18[4] = piVar18[4] | auStack_1e8._0_4_ << 0x10;
    }
    else {
      if (iVar8 == 1) {
        piVar18 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
        iVar8 = *piVar18;
        while (iVar8 != *(int *)(uVar3 + 0x18)) {
          piVar18 = piVar18 + 0x1a;
          iVar8 = *piVar18;
        }
        goto LAB_0e3cfb5a;
      }
      if (iVar8 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | auStack_1e8._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_1d0);
    lVar13 = func_0x07264030(param_1 + 0x18);
    if (*(int *)(lVar13 + 0x60) != -0x2b3da790) goto LAB_0e3cfbb5;
LAB_0e3cfb73:
    lVar13 = *(long *)(lVar13 + 0x68);
    if (lVar13 == 0) goto LAB_0e3cfbb5;
    bVar22 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar19 = lVar13 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e46d390(&lStack_110,param_1,lVar19,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar12[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3cf55b;
LAB_0e3cf5b2:
    func_0x0e46c440(&lStack_110,param_1,&UNK_011b2e93,0x23);
    if (cStack_e0 == '\0') goto LAB_0e3cf5d8;
LAB_0e3cf598:
    lVar13 = func_0x07264030(param_1 + 0x18);
    if (*(int *)(lVar13 + 0x60) == -0x2b3da790) goto LAB_0e3cfb73;
LAB_0e3cfbb5:
    func_0x0e46d390(&lStack_110,param_1,&UNK_01275e87,0x1f);
  }
  if (cStack_e0 != '\0') {
    return;
  }
  lVar19 = lStack_110 + 0x18;
  lVar13 = func_0x07264030(lVar19);
  for (pbVar17 = *(byte **)(lStack_110 + 0x50); pbVar17 != *(byte **)(lStack_110 + 0x58);
      pbVar17 = pbVar17 + 0x38) {
    bVar2 = *pbVar17;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e3cfc7a;
    }
    else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0e3cfc7a:
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar17 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar17 + 0x10);
      }
      auVar23[0] = -(*pbVar20 == DAT_014eaba0);
      auVar23[1] = -(pbVar20[1] == DAT_014eaba0._1_1_);
      auVar23[2] = -(pbVar20[2] == DAT_014eaba0._2_1_);
      auVar23[3] = -(pbVar20[3] == DAT_014eaba0._3_1_);
      auVar23[4] = -(pbVar20[4] == DAT_014eaba0._4_1_);
      auVar23[5] = -(pbVar20[5] == DAT_014eaba0._5_1_);
      auVar23[6] = -(pbVar20[6] == DAT_014eaba0._6_1_);
      auVar23[7] = -(pbVar20[7] == DAT_014eaba0._7_1_);
      auVar23[8] = -(pbVar20[8] == DAT_014eaba0._8_1_);
      auVar23[9] = -(pbVar20[9] == DAT_014eaba0._9_1_);
      auVar23[10] = -(pbVar20[10] == DAT_014eaba0._10_1_);
      auVar23[0xb] = -(pbVar20[0xb] == DAT_014eaba0._11_1_);
      auVar23[0xc] = -(pbVar20[0xc] == DAT_014eaba0._12_1_);
      auVar23[0xd] = -(pbVar20[0xd] == DAT_014eaba0._13_1_);
      auVar23[0xe] = -(pbVar20[0xe] == DAT_014eaba0._14_1_);
      auVar23[0xf] = -(pbVar20[0xf] == DAT_014eaba0._15_1_);
      auVar24[0] = -(pbVar20[10] == DAT_014e4ff0);
      auVar24[1] = -(pbVar20[0xb] == DAT_014e4ff0._1_1_);
      auVar24[2] = -(pbVar20[0xc] == DAT_014e4ff0._2_1_);
      auVar24[3] = -(pbVar20[0xd] == DAT_014e4ff0._3_1_);
      auVar24[4] = -(pbVar20[0xe] == DAT_014e4ff0._4_1_);
      auVar24[5] = -(pbVar20[0xf] == DAT_014e4ff0._5_1_);
      auVar24[6] = -(pbVar20[0x10] == DAT_014e4ff0._6_1_);
      auVar24[7] = -(pbVar20[0x11] == DAT_014e4ff0._7_1_);
      auVar24[8] = -(pbVar20[0x12] == DAT_014e4ff0._8_1_);
      auVar24[9] = -(pbVar20[0x13] == DAT_014e4ff0._9_1_);
      auVar24[10] = -(pbVar20[0x14] == DAT_014e4ff0._10_1_);
      auVar24[0xb] = -(pbVar20[0x15] == DAT_014e4ff0._11_1_);
      auVar24[0xc] = -(pbVar20[0x16] == DAT_014e4ff0._12_1_);
      auVar24[0xd] = -(pbVar20[0x17] == DAT_014e4ff0._13_1_);
      auVar24[0xe] = -(pbVar20[0x18] == DAT_014e4ff0._14_1_);
      auVar24[0xf] = -(pbVar20[0x19] == DAT_014e4ff0._15_1_);
      auVar24 = auVar24 & auVar23;
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar17 == *(byte **)(lStack_110 + 0x58)) {
LAB_0e3cfca9:
    if ((int)uStack_e8 == 0) {
      if ((*(int *)(lVar13 + 0x60) != -0x2b3da790) || (*(long *)(lVar13 + 0x68) == 0))
      goto LAB_0e3cfd1d;
      lVar13 = *(long *)(lVar13 + 0x68) + 0x38;
    }
    else {
      auStack_1e8._0_8_ = func_0x048b0c90(lVar19,lVar13,uStack_e8._4_4_,1);
      if (auStack_1e8._0_8_ == 0) {
        auStack_1e8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1e8);
        if (auStack_1e8._0_8_ == 0) goto LAB_0e3cfd1d;
      }
      if ((*(int *)(auStack_1e8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_1e8._0_8_ + 0x58) != 0)) {
        lVar13 = *(long *)(auStack_1e8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e3cfd1d:
        lVar13 = 0;
      }
    }
    uStack_240 = (long *)&UNK_0488e0b0;
    pcStack_238 = (code *)0x0;
    uStack_230 = CONCAT35(uStack_230._5_3_,0x48b5725f);
    uStack_250 = 0;
    auStack_1e8 = (undefined1  [16])0x0;
    auStack_1d0 = ZEXT816(0x488e0b0);
    auStack_1c0._0_5_ = 0x48b5725f;
    puStack_c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_c8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    auStack_d8._8_8_ = 0x1a;
    auStack_d8._0_8_ = 0x21;
    *(ulong *)((long)puStack_c8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_c8 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_c8 = _DAT_013bbacd;
    puStack_c8[1] = uVar3;
    *(undefined1 *)((long)puStack_c8 + 0x1a) = 0;
    lVar13 = func_0x048b5060(lVar13,auStack_d8);
    *(undefined8 *)(lVar13 + 0x20) = 0;
    if ((undefined1 *)(lVar13 + 0x20) == auStack_1e8) {
      pcVar14 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar13 + 0x40) != (code *)0x0) {
        puVar11 = (undefined8 *)(lVar13 + 0x28);
        (**(code **)(lVar13 + 0x40))(puVar11);
        if (auStack_1c0[4] != '\0') {
          if (auStack_1c0[4] == '\x02') {
            (*(code *)auStack_1d0._0_8_)(5,auStack_1e8 + 8,puVar11);
          }
          else {
            uVar3 = auStack_1e8._8_8_;
            auStack_1e8._8_8_ = 0;
            *puVar11 = uVar3;
          }
        }
      }
      *(undefined8 *)(lVar13 + 0x38) = auStack_1d0._0_8_;
      *(undefined8 *)(lVar13 + 0x40) = auStack_1d0._8_8_;
      *(undefined4 *)(lVar13 + 0x48) = auStack_1c0._0_4_;
      *(char *)(lVar13 + 0x4c) = auStack_1c0[4];
      pcVar14 = (code *)auStack_1d0._8_8_;
    }
    if ((auStack_d8[0] & 1) != 0) {
      func_0x0412a280(puStack_c8,auStack_d8._0_8_ & 0xfffffffffffffffe);
      pcVar14 = (code *)auStack_1d0._8_8_;
    }
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(auStack_1e8 + 8);
    }
    if (pcStack_238 != (code *)0x0) {
      (*pcStack_238)(&uStack_250);
    }
  }
  else {
    iVar8 = *(int *)(pbVar17 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar8 == _DAT_0f550ac4) goto LAB_0e3cfca9;
  }
  uStack_58 = uStack_108;
  uStack_50 = uStack_100;
  uStack_48 = uStack_f8;
  uStack_40 = uStack_f0;
  iVar8 = (int)uStack_e8;
  uVar6 = uStack_e8._4_4_;
  uStack_a0 = CONCAT71(uStack_df,cStack_e0);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01363f9b;
  *(ulong *)((long)puVar11 + 0xc) = CONCAT44(_UNK_01363f97,_DAT_01363f93);
  *(undefined8 *)((long)puVar11 + 0x14) = uVar3;
  uVar3 = CONCAT44(_DAT_01363f93,_UNK_01363f8f);
  *puVar11 = _DAT_01363f87;
  puVar11[1] = uVar3;
  *(undefined1 *)((long)puVar11 + 0x1c) = 0;
  lVar13 = func_0x07264030(lStack_110 + 0x18);
  pbVar20 = *(byte **)(lStack_110 + 0x58);
  lStack_98 = lStack_110;
  for (pbVar17 = *(byte **)(lStack_110 + 0x50); pbVar17 != pbVar20; pbVar17 = pbVar17 + 0x38) {
    bVar2 = *pbVar17;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e3cffda;
    }
    else if (*(long *)(pbVar17 + 8) == 0x24) {
LAB_0e3cffda:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar17 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar17 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar21,0x24);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar17 != pbVar20) {
    iVar7 = *(int *)(pbVar17 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550768), iVar9 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    bVar22 = true;
    if (iVar7 != _DAT_0f550754) goto LAB_0e3d0299;
  }
  if (iVar8 == 0) {
    if ((*(int *)(lVar13 + 0x60) != -0x2b3da790) || (*(long *)(lVar13 + 0x68) == 0))
    goto LAB_0e3d0076;
    lVar13 = *(long *)(lVar13 + 0x68) + 0x38;
  }
  else {
    lVar13 = func_0x048b0c90(lStack_110 + 0x18,lVar13,uVar6,1);
    if (lVar13 == 0) {
      auStack_1e8 = ZEXT816(0);
      func_0x048b0d20(auStack_1e8);
      lVar13 = auStack_1e8._0_8_;
      if (auStack_1e8._0_8_ == 0) goto LAB_0e3d0076;
    }
    if ((*(int *)(lVar13 + 0x50) == -0x45dcb126) && (*(long *)(lVar13 + 0x58) != 0)) {
      lVar13 = *(long *)(lVar13 + 0x58) + 0x40;
    }
    else {
LAB_0e3d0076:
      lVar13 = 0;
    }
  }
  uStack_250 = 0;
  uStack_240 = (long *)&UNK_048b4ab0;
  pcStack_238 = (code *)&UNK_048b49f0;
  uStack_230 = CONCAT35(uStack_230._5_3_,0x1d33bd9c5);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar15 = 0x21;
  puVar15[1] = 0x1c;
  puVar15[2] = puVar11;
  *(undefined2 *)(puVar15 + 3) = 0x302;
  puVar15[4] = 0x1003200150001;
  puVar15[5] = &UNK_01254d89;
  puVar15[6] = &UNK_01254d89;
  auStack_1d0._8_8_ = &UNK_048b49f0;
  auStack_1d0._0_8_ = &UNK_048b4ab0;
  auStack_1c0._0_5_ = 0x1d33bd9c5;
  uStack_250 = 0;
  auStack_1e8._8_8_ = puVar15;
  auStack_1e8._0_8_ = &UNK_048b46e0;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_014518c1;
  auStack_d8._8_8_ = 0x24;
  auStack_d8._0_8_ = 0x29;
  puVar11[2] = _DAT_014518b9;
  puVar11[3] = uVar3;
  uVar3 = _UNK_014518b1;
  *puVar11 = _DAT_014518a9;
  puVar11[1] = uVar3;
  *(undefined4 *)(puVar11 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar11 + 0x24) = 0;
  puStack_c8 = puVar11;
  lVar13 = func_0x048b5060(lVar13,auStack_d8);
  *(undefined **)(lVar13 + 0x20) = &UNK_048b46e0;
  pcVar14 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar13 + 0x20) != auStack_1e8) {
    puVar11 = (undefined8 *)(lVar13 + 0x28);
    if (*(code **)(lVar13 + 0x40) == (code *)0x0) {
LAB_0e3d0210:
      uVar3 = auStack_1e8._8_8_;
      auStack_1e8._8_8_ = 0;
      *puVar11 = uVar3;
    }
    else {
      (**(code **)(lVar13 + 0x40))(puVar11);
      if (auStack_1c0[4] != '\0') {
        if (auStack_1c0[4] != '\x02') goto LAB_0e3d0210;
        (*(code *)auStack_1d0._0_8_)(5,auStack_1e8 + 8,puVar11);
      }
    }
    *(undefined8 *)(lVar13 + 0x38) = auStack_1d0._0_8_;
    *(undefined8 *)(lVar13 + 0x40) = auStack_1d0._8_8_;
    *(undefined4 *)(lVar13 + 0x48) = auStack_1c0._0_4_;
    *(char *)(lVar13 + 0x4c) = auStack_1c0[4];
    pcVar14 = (code *)auStack_1d0._8_8_;
  }
  if ((auStack_d8[0] & 1) != 0) {
    func_0x0412a280(puStack_c8,auStack_d8._0_8_ & 0xfffffffffffffffe);
    pcVar14 = (code *)auStack_1d0._8_8_;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(auStack_1e8 + 8);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(&uStack_250);
  }
  puVar11 = (undefined8 *)0x0;
  bVar22 = false;
LAB_0e3d0299:
  lStack_90 = lStack_98;
  uStack_88 = uStack_58;
  uStack_80 = uStack_50;
  uStack_78 = uStack_48;
  uStack_70 = uStack_40;
  iStack_68 = iVar8;
  uStack_64 = uVar6;
  uStack_60 = uStack_a0;
  func_0x0e46dc40(auStack_1e8,&lStack_90,&UNK_013771cd,0xe);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0ef44b00;
  uVar3 = auStack_1d0._0_8_;
  auStack_1d0._0_8_ = puVar15;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
  plStack_248 = (long *)0x0;
  uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
  pcStack_238 = (code *)0x1;
  uStack_230 = 0;
  puStack_228 = &UNK_048b3f30;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &SUB_048b2190;
  puStack_210 = &UNK_0e46e1a0;
  puStack_208 = &UNK_0e46e360;
  uStack_200 = 0;
  auStack_1f8 = ZEXT816(0);
  func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
  uVar3 = auStack_1f8._8_8_;
  if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_1f8._8_8_ + 8);
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e46dea0(auStack_1e8);
  uStack_a8 = (undefined1)uStack_60;
  uStack_b0 = CONCAT44(uStack_64,iStack_68);
  uStack_b8 = uStack_70;
  puStack_c8 = (undefined8 *)uStack_80;
  uStack_c0 = uStack_78;
  auStack_d8._8_8_ = uStack_88;
  auStack_d8._0_8_ = lStack_90;
  func_0x048b0bc0(auStack_1d0);
  func_0x0e46dc40(auStack_1e8,auStack_d8,&UNK_01275e87,0x1f);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f4bb438;
  uVar3 = auStack_1d0._0_8_;
  auStack_1d0._0_8_ = puVar15;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
  plStack_248 = (long *)0x0;
  uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
  pcStack_238 = (code *)0x1;
  uStack_230 = 0;
  puStack_228 = &UNK_0e46e760;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &UNK_0e46bc50;
  puStack_210 = &UNK_0e46e820;
  puStack_208 = &UNK_0e46ea40;
  uStack_200 = 0;
  auStack_1f8 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
  uVar3 = auStack_1f8._8_8_;
  if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_1f8._8_8_ + 8);
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e46dea0(auStack_1e8);
  func_0x048b0bc0(auStack_1d0);
  if (bVar22) {
    func_0x0412a280(puVar11,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1363f87  Camera Aim-Assist Categories
 * 0x1363f93  ssist Categories
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
