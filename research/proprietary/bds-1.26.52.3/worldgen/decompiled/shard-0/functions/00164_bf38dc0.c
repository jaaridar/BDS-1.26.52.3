/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc038dc0 (ELF vaddr 0xbf38dc0)
 * Label: caller-of-callee
 * Body:  [[0c038dc0, 0c0393bc] [0c0393c0, 0c039401] [0c039410, 0c039f41] [0c039f50, 0c03a2d3]]
 * Ghidra: FUN_0c038dc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c038dc0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  byte *pbVar13;
  code *pcVar14;
  int *piVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_248 [8];
  long *plStack_240;
  ulong uStack_238;
  code *pcStack_230;
  code *pcStack_228;
  undefined4 uStack_220;
  char cStack_21c;
  char cStack_218;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  char cStack_1f0;
  undefined8 *puStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [16];
  undefined *puStack_178;
  long *plStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  uint uStack_b4;
  uint uStack_b0;
  undefined1 uStack_ac;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong auStack_90 [2];
  undefined *puStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puStack_1e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puStack_1e8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar5 = _UNK_0143dbb8;
  *(ulong *)((long)puStack_1e8 + 0x2a) = CONCAT26(_UNK_0143dbb6,_DAT_0143dbb0);
  *(undefined8 *)((long)puStack_1e8 + 0x32) = uVar5;
  uVar5 = CONCAT62(_DAT_0143dbb0,_UNK_0143dbae);
  puStack_1e8[4] = _DAT_0143dba6;
  puStack_1e8[5] = uVar5;
  uVar5 = _UNK_0143db9e;
  puStack_1e8[2] = _DAT_0143db96;
  puStack_1e8[3] = uVar5;
  uVar5 = _UNK_0143db8e;
  *puStack_1e8 = _DAT_0143db86;
  puStack_1e8[1] = uVar5;
  *(undefined1 *)((long)puStack_1e8 + 0x3a) = 0;
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  cStack_1f0 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_208 = *param_3;
    uStack_200 = 0;
    uVar20 = param_3[1];
    if ((uVar20 & 0x80000000000000) != 0) {
      lVar18 = *(long *)((uVar20 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar20 & 0xff00ffffffffffff,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar20 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1f8 = 0;
    uVar21 = param_3[2];
    uStack_200 = uVar20;
    if ((uVar21 & 0x80000000000000) != 0) {
      lVar18 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar21 & 0xff00ffffffffffff,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar21 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1f0 = '\x01';
    uStack_1f8 = uVar21;
  }
  lVar11 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar18 = lVar11 + 9;
    if (bVar23) {
      lVar18 = *(long *)(lVar11 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar20 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0c069d90(auStack_248,param_1,lVar18,uVar20,1);
  }
  else {
    func_0x0c069d90(auStack_248,param_1,0,0,1);
  }
  if (cStack_218 == '\0') {
    uStack_1d0._4_4_ = (uint)((ulong)uStack_1d0 >> 0x20);
    if ((DAT_0f6d3150 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3150), iVar8 != 0)) {
      func_0x0ee25020(0xf6d3128,&UNK_013a11b5);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d3128,0xf53dab8);
      func_0x0410844d(&DAT_0f6d3150);
    }
    uVar20 = (ulong)(DAT_0f6d3130 >> 1);
    lVar11 = 0xf6d3131;
    if ((DAT_0f6d3130 & 1) != 0) {
      uVar20 = _DAT_0f6d3138;
      lVar11 = _DAT_0f6d3140;
    }
    func_0x0c06a780(&puStack_178,auStack_248,lVar11,uVar20,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f34e1f8;
    if (uStack_160 != (long *)0x0) {
      lVar11 = *uStack_160;
      uStack_160 = plVar10;
      (**(code **)(lVar11 + 8))();
      plVar10 = uStack_160;
    }
    uStack_160 = plVar10;
    uStack_1e0 = (undefined4)uStack_168;
    plStack_1d8 = (long *)0x0;
    uStack_1d0 = (long *)((ulong)uStack_1d0._4_4_ << 0x20);
    uStack_1c8 = 1;
    uStack_1c0 = 0;
    uStack_1b8 = &UNK_0c0850f0;
    puStack_1b0 = &SUB_048b06d0;
    puStack_1a8 = &UNK_0c084d60;
    puStack_1a0 = &UNK_0c0851b0;
    puStack_198 = &UNK_0c085450;
    uStack_190 = 0;
    auStack_188 = (undefined1  [16])0x0;
    func_0x048b05a0(plStack_170,&uStack_1e0);
    uVar5 = auStack_188._8_8_;
    if ((long *)auStack_188._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_188._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_188._8_8_ + 0x10))(auStack_188._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    iVar8 = *(int *)((long)plStack_170 + 0x1c);
    if (iVar8 == 2) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)plStack_170 + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != *(int *)((long)plStack_170 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar11 = *(long *)(piVar15 + 0xc);
      while (lVar11 != *(long *)((long)plStack_170 + 8)) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar11 = *(long *)(piVar15 + 0xc);
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)plStack_170 + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != *(int *)((long)plStack_170 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)((long)plStack_170 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&puStack_178);
    FUN_048b0bc0(&uStack_160);
  }
  if ((DAT_0f6d3150 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3150), iVar8 != 0)) {
    func_0x0ee25020(0xf6d3128,&UNK_013a11b5);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3128,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3150);
  }
  uVar20 = (ulong)(DAT_0f6d3130 >> 1);
  lVar11 = 0xf6d3131;
  if ((DAT_0f6d3130 & 1) != 0) {
    uVar20 = _DAT_0f6d3138;
    lVar11 = _DAT_0f6d3140;
  }
  if ((DAT_0f6d3aa8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3aa8), iVar8 != 0)) {
    func_0x0c0846d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3a28,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3aa8);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d3a28 + 4)) * 8);
  do {
    lVar18 = *plVar10;
    if (lVar18 == -1) goto LAB_0c0392c1;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6d3a28 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0c0392c1:
    puVar12 = &DAT_0f6d3a28;
    iVar8 = iRam000000000f6d3a88;
  }
  else {
    puVar12 = (undefined *)plVar10[2];
    iVar8 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar8 == -0x2b3da790) && (lVar18 = *(long *)(puVar12 + 0x68), lVar18 != 0)) {
    bVar23 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar11 = lVar18 + 9;
    if (bVar23) {
      lVar11 = *(long *)(lVar18 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar23) {
      uVar20 = *(ulong *)(lVar18 + 0x10);
    }
  }
  func_0x0c0858a0(&uStack_1e0,param_1,lVar11,uVar20);
  lVar11 = CONCAT44(uStack_1dc,uStack_1e0);
  if ((DAT_0f6d3aa8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3aa8), iVar8 != 0)) {
    func_0x0c0846d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3a28,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3aa8);
  }
  plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6d3a28 + 4)) * 8);
  do {
    lVar18 = *plVar10;
    if (lVar18 == -1) goto LAB_0c039380;
    plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6d3a28 + 4));
  if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_0c039380:
    puVar12 = &DAT_0f6d3a28;
  }
  else {
    puVar12 = (undefined *)plVar10[2];
  }
  pbVar4 = *(byte **)(CONCAT44(uStack_1dc,uStack_1e0) + 0x58);
  for (pbVar13 = *(byte **)(CONCAT44(uStack_1dc,uStack_1e0) + 0x50); pbVar13 != pbVar4;
      pbVar13 = pbVar13 + 0x38) {
    bVar3 = *pbVar13;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0c03941a;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0c03941a:
      if ((bVar3 & 1) == 0) {
        pbVar19 = pbVar13 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar13 + 0x10);
      }
      auVar24[0] = -(*pbVar19 == DAT_014eaba0);
      auVar24[1] = -(pbVar19[1] == DAT_014eaba0._1_1_);
      auVar24[2] = -(pbVar19[2] == DAT_014eaba0._2_1_);
      auVar24[3] = -(pbVar19[3] == DAT_014eaba0._3_1_);
      auVar24[4] = -(pbVar19[4] == DAT_014eaba0._4_1_);
      auVar24[5] = -(pbVar19[5] == DAT_014eaba0._5_1_);
      auVar24[6] = -(pbVar19[6] == DAT_014eaba0._6_1_);
      auVar24[7] = -(pbVar19[7] == DAT_014eaba0._7_1_);
      auVar24[8] = -(pbVar19[8] == DAT_014eaba0._8_1_);
      auVar24[9] = -(pbVar19[9] == DAT_014eaba0._9_1_);
      auVar24[10] = -(pbVar19[10] == DAT_014eaba0._10_1_);
      auVar24[0xb] = -(pbVar19[0xb] == DAT_014eaba0._11_1_);
      auVar24[0xc] = -(pbVar19[0xc] == DAT_014eaba0._12_1_);
      auVar24[0xd] = -(pbVar19[0xd] == DAT_014eaba0._13_1_);
      auVar24[0xe] = -(pbVar19[0xe] == DAT_014eaba0._14_1_);
      auVar24[0xf] = -(pbVar19[0xf] == DAT_014eaba0._15_1_);
      auVar25[0] = -(pbVar19[10] == DAT_014e4ff0);
      auVar25[1] = -(pbVar19[0xb] == DAT_014e4ff0._1_1_);
      auVar25[2] = -(pbVar19[0xc] == DAT_014e4ff0._2_1_);
      auVar25[3] = -(pbVar19[0xd] == DAT_014e4ff0._3_1_);
      auVar25[4] = -(pbVar19[0xe] == DAT_014e4ff0._4_1_);
      auVar25[5] = -(pbVar19[0xf] == DAT_014e4ff0._5_1_);
      auVar25[6] = -(pbVar19[0x10] == DAT_014e4ff0._6_1_);
      auVar25[7] = -(pbVar19[0x11] == DAT_014e4ff0._7_1_);
      auVar25[8] = -(pbVar19[0x12] == DAT_014e4ff0._8_1_);
      auVar25[9] = -(pbVar19[0x13] == DAT_014e4ff0._9_1_);
      auVar25[10] = -(pbVar19[0x14] == DAT_014e4ff0._10_1_);
      auVar25[0xb] = -(pbVar19[0x15] == DAT_014e4ff0._11_1_);
      auVar25[0xc] = -(pbVar19[0x16] == DAT_014e4ff0._12_1_);
      auVar25[0xd] = -(pbVar19[0x17] == DAT_014e4ff0._13_1_);
      auVar25[0xe] = -(pbVar19[0x18] == DAT_014e4ff0._14_1_);
      auVar25[0xf] = -(pbVar19[0x19] == DAT_014e4ff0._15_1_);
      auVar25 = auVar25 & auVar24;
      if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar13 == pbVar4) {
LAB_0c039448:
    if ((int)uStack_1b8 == 0) {
      if (((puVar12 == (undefined *)0x0) || (*(int *)(puVar12 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar12 + 0x68) == 0)) goto LAB_0c0394cc;
      lVar11 = *(long *)(puVar12 + 0x68) + 0x38;
    }
    else {
      uVar7 = uStack_1b8._4_4_;
      if (puVar12 == (undefined *)0x0) {
        puVar12 = (undefined *)func_0x048aead0(lVar11 + 0x18);
      }
      auStack_248 = (undefined1  [8])func_0x048b0c90(lVar11 + 0x18,puVar12,uVar7,1);
      if (auStack_248 == (undefined1  [8])0x0) {
        _auStack_248 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_248);
        if (auStack_248 == (undefined1  [8])0x0) goto LAB_0c0394cc;
      }
      if ((*(int *)((long)auStack_248 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_248 + 0x58) != 0)) {
        lVar11 = *(long *)((long)auStack_248 + 0x58) + 0x40;
      }
      else {
LAB_0c0394cc:
        lVar11 = 0;
      }
    }
    puStack_80 = &UNK_0488e0b0;
    uStack_70 = 0x48b5725f;
    pcStack_78 = (code *)0x0;
    uStack_6c = 0;
    auStack_90[0] = 0;
    _auStack_248 = (undefined1  [16])0x0;
    pcStack_230 = (code *)&UNK_0488e0b0;
    pcStack_228 = (code *)0x0;
    uStack_220 = 0x48b5725f;
    cStack_21c = '\0';
    puStack_98 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_98 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar5 = _UNK_013bbadf;
    uStack_a8 = 0x21;
    uStack_a0 = 0x1a;
    *(ulong *)((long)puStack_98 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_98 + 0x12) = uVar5;
    uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_98 = _DAT_013bbacd;
    puStack_98[1] = uVar5;
    *(undefined1 *)((long)puStack_98 + 0x1a) = 0;
    lVar11 = func_0x048b5060(lVar11,&uStack_a8);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_248) {
      pcVar14 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar22 = (undefined8 *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar22);
        if (cStack_21c != '\0') {
          if (cStack_21c == '\x02') {
            (*pcStack_230)(5,&plStack_240,puVar22);
          }
          else {
            plVar10 = plStack_240;
            plStack_240 = (long *)0x0;
            *puVar22 = plVar10;
          }
        }
      }
      *(code **)(lVar11 + 0x38) = pcStack_230;
      *(code **)(lVar11 + 0x40) = pcStack_228;
      *(undefined4 *)(lVar11 + 0x48) = uStack_220;
      *(char *)(lVar11 + 0x4c) = cStack_21c;
      pcVar14 = pcStack_228;
    }
    if ((uStack_a8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_98,uStack_a8 & 0xfffffffffffffffe);
      pcVar14 = pcStack_228;
    }
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(&plStack_240);
    }
    if (pcStack_78 != (code *)0x0) {
      (*pcStack_78)(auStack_90);
    }
  }
  else {
    iVar8 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550ad8), iVar9 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar8 == _DAT_0f550ac4) goto LAB_0c039448;
  }
  puStack_148 = puStack_1b0;
  puStack_178 = (undefined *)CONCAT44(uStack_1dc,uStack_1e0);
  lStack_158 = uStack_1c0;
  puStack_150 = uStack_1b8;
  uStack_168 = (ulong)uStack_1d0;
  uStack_160 = (long *)uStack_1c8;
  plStack_170 = plStack_1d8;
  auVar6[0xf] = 0;
  auVar6._0_15_ = stack0xfffffffffffffdb9;
  _auStack_248 = auVar6 << 8;
  pcStack_230 = (code *)((ulong)pcStack_230 & 0xffffffffffffff00);
  if (cStack_1f0 == '\x01') {
    plStack_240 = (long *)0x0;
    auStack_248 = (undefined1  [8])uStack_208;
    auVar24 = _auStack_248;
    plStack_240 = (long *)uStack_200;
    if ((uStack_200 & 0x80000000000000) != 0) {
      uVar20 = uStack_200 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar20 - 8);
      lVar11 = lVar18 + 9;
      _auStack_248 = auVar24;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar20,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      plStack_240 = (long *)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_238 = 0;
    uVar20 = uStack_1f8;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      uVar20 = uStack_1f8 & 0xff00ffffffffffff;
      lVar18 = *(long *)(uVar20 - 8);
      lVar11 = lVar18 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar18;
      func_0x0eee2f00(plVar10 + 1,uVar20,lVar18);
      *(undefined1 *)((long)plVar10 + lVar18 + 8) = 0;
      uVar20 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_230 = (code *)CONCAT71(pcStack_230._1_7_,1);
    uStack_238 = uVar20;
  }
  FUN_0412e5e0(auStack_90,puStack_1e8,0x3a);
  puStack_68 = puStack_178;
  lStack_60 = (long)plStack_170;
  uStack_58 = uStack_168;
  uStack_50 = uStack_160;
  uStack_48 = lStack_158;
  uStack_40 = puStack_150;
  puStack_38 = puStack_148;
  if ((auStack_90[0] & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_80,auStack_90[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_230 == '\x01') {
    if ((uStack_238 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
    }
    uStack_238 = 0;
    if (((ulong)plStack_240 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_240 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c085e90(&puStack_178,puStack_68 + 0x18);
  if (uStack_160._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(uStack_168 + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_160) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    lVar11 = *(long *)(piVar15 + 0xc);
    while ((long *)lVar11 != plStack_170) {
      piVar15 = *(int **)(piVar15 + 0xe);
      lVar11 = *(long *)(piVar15 + 0xc);
    }
LAB_0c03994f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_160._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(uStack_168 + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_160) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0c03994f;
    }
    if (uStack_160._4_4_ == 0) {
      *(uint *)(uStack_168 + 0x18) = *(uint *)(uStack_168 + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f6d3a10 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3a10), iVar8 != 0)) {
    func_0x0c084590();
    func_0x0410844d(&DAT_0f6d3a10);
  }
  puVar12 = puStack_68;
  uStack_40 = (undefined *)0xf416eba000000001;
  if ((DAT_0f6d3aa8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3aa8), iVar8 != 0)) {
    func_0x0c0846d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3a28,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3aa8);
  }
  puVar22 = puStack_1e8;
  plStack_170 = (long *)(puVar12 + 0x18);
  plVar10 = (long *)(*(long *)(puVar12 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d3a28 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0c0399f0;
    plVar10 = (long *)(*(long *)(puVar12 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f6d3a28 + 4))
  ;
  if (plVar10 == *(long **)(puVar12 + 0x38)) {
LAB_0c0399f0:
    puStack_178 = &DAT_0f6d3a28;
  }
  else {
    puStack_178 = (undefined *)plVar10[2];
  }
  func_0x0ed621a0(&puStack_178,uStack_40._4_4_);
  puStack_178 = (undefined *)CONCAT62(puStack_178._2_6_,0x10);
  uStack_168 = CONCAT44(uStack_168._4_4_,uStack_40._4_4_);
  uStack_160 = (long *)0x0;
  lStack_158 = 0;
  puStack_150 = (undefined *)0x0;
  puStack_148 = (undefined1 *)0x0;
  lStack_140 = 0;
  uStack_138 = CONCAT26(uStack_138._6_2_,0x7367617408);
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0x3f600000;
  plStack_170 = &lStack_60;
  func_0x048afb10(&lStack_120,8);
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_b8 = 0xff00;
  uStack_b4 = uStack_b4 & 0xffffff00;
  uStack_b0 = uStack_b0 & 0xffffff00;
  uStack_ac = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef474e0;
  if (uStack_160 != (long *)0x0) {
    lVar11 = *uStack_160;
    uStack_160 = puVar16;
    (**(code **)(lVar11 + 8))();
    puVar16 = uStack_160;
  }
  uStack_160 = puVar16;
  uStack_1e0 = (undefined4)uStack_168;
  plStack_1d8 = (long *)0x0;
  uStack_1d0 = (long *)((ulong)uStack_1d0 & 0xffffffff00000000);
  uStack_1c8 = 1;
  uStack_1c0 = 0;
  uStack_1b8 = &UNK_049119f0;
  puStack_1b0 = &SUB_048b06d0;
  puStack_1a8 = &UNK_0490fc00;
  puStack_1a0 = &UNK_0c086450;
  puStack_198 = &UNK_0c086650;
  uStack_190 = 0;
  auStack_188 = ZEXT816(0);
  func_0x048b05a0(plStack_170,&uStack_1e0);
  uVar5 = auStack_188._8_8_;
  if ((long *)auStack_188._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_188._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_188._8_8_ + 0x10))(auStack_188._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  plVar10 = plStack_170;
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_1e0 = _DAT_0f550a0c;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar11 = lStack_158;
  puVar16 = uStack_160;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0ef439d0;
  plStack_1d8 = plVar17 + 3;
  uStack_160 = (long *)0x0;
  lStack_158 = 0;
  plVar17[3] = (long)puVar16;
  plVar17[4] = lVar11;
  plVar17[7] = lStack_140;
  plVar17[5] = (long)puStack_150;
  plVar17[6] = (long)puStack_148;
  puStack_150 = (undefined *)0x0;
  puStack_148 = (undefined1 *)0x0;
  lStack_140 = 0;
  plVar17[10] = lStack_128;
  plVar17[8] = uStack_138;
  plVar17[9] = lStack_130;
  uStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  plVar17[0xb] = lStack_120;
  plVar17[0xc] = lStack_118;
  plVar17[0xd] = lStack_110;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  plVar17[0xe] = lStack_108;
  plVar17[0xf] = lStack_100;
  plVar17[0x10] = lStack_f8;
  lStack_108 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  *(undefined4 *)(plVar17 + 0x11) = uStack_f0;
  plVar17[0x12] = lStack_e8;
  plVar17[0x13] = lStack_e0;
  plVar17[0x14] = lStack_d8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  plVar17[0x17] = lStack_c0;
  plVar17[0x15] = lStack_d0;
  plVar17[0x16] = lStack_c8;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  *(ulong *)((long)plVar17 + 0xc5) = CONCAT17(uStack_ac,CONCAT43(uStack_b0,uStack_b4._1_3_));
  plVar17[0x18] = CONCAT44(uStack_b4,CONCAT22(uStack_b6,uStack_b8));
  _auStack_248 = ZEXT816(0);
  uStack_1d0 = plVar17;
  func_0x048afd20(plVar10,&uStack_1e0);
  plVar17 = uStack_1d0;
  if (uStack_1d0 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_1d0 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_1d0 + 0x10))(uStack_1d0);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_240 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar17);
    }
  }
  lVar11 = plVar10[2];
  iVar8 = *(int *)((long)plVar10 + 0x1c);
  if (iVar8 == 2) {
    piVar15 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)plVar10[3]) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    for (; *(long *)(piVar15 + 0xc) != plVar10[1]; piVar15 = *(int **)(piVar15 + 0xe)) {
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)puStack_178 << 0x10;
      }
      FUN_048b0bc0(&uStack_160);
      goto joined_r0x0c039f67;
    }
    piVar15 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
    iVar8 = *piVar15;
    while (iVar8 != (int)plVar10[3]) {
      piVar15 = piVar15 + 0x1a;
      iVar8 = *piVar15;
    }
  }
  piVar15[4] = piVar15[4] | (int)puStack_178 << 0x10;
  FUN_048b0bc0(&uStack_160);
joined_r0x0c039f67:
  if (cStack_1f0 == '\x01') {
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1f8 = 0;
    if ((uStack_200 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
    }
    uStack_200 = 0;
  }
  thunk_FUN_0ee326a0(puVar22,0x40);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x143db86  The tags component specifies which tags an item has on it.
 * 0x143db96  nt specifies which tags an item has on it.
 * 0x143dba6  ch tags an item has on it.
 * 0x143dbb0   item has on it.
 * 0x14eaba0  [cereal:document
 */
