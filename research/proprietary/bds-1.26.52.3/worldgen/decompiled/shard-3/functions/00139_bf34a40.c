/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc034a40 (ELF vaddr 0xbf34a40)
 * Label: caller-of-callee
 * Body:  [[0c034a40, 0c034f6d] [0c034f70, 0c034fb2] [0c034fc0, 0c035a71] [0c035a80, 0c035b9a] [0c035ba0, 0c035ec5]]
 * Ghidra: FUN_0c034a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c034a40(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  long *plVar15;
  undefined8 uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  long lStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined1 *puStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined6 uStack_19f;
  undefined1 uStack_199;
  undefined1 uStack_198;
  undefined6 uStack_197;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined4 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined2 uStack_128;
  undefined2 uStack_126;
  uint uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [16];
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong auStack_90 [2];
  undefined *puStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  uVar16 = _UNK_013d4fde;
  puVar9[4] = _DAT_013d4fd6;
  puVar9[5] = uVar16;
  uVar16 = _UNK_013d4fce;
  puVar9[2] = _DAT_013d4fc6;
  puVar9[3] = uVar16;
  uVar16 = _UNK_013d4fbe;
  *puVar9 = _DAT_013d4fb6;
  puVar9[1] = uVar16;
  *(undefined4 *)(puVar9 + 6) = 0x2e646c6f;
  *(undefined1 *)((long)puVar9 + 0x34) = 0;
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  cStack_1f0 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_208 = *param_3;
    uStack_200 = 0;
    uVar18 = param_3[1];
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        FUN_0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1f8 = 0;
    uVar19 = param_3[2];
    uStack_200 = uVar18;
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        FUN_0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar19 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar19 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1f0 = '\x01';
    uStack_1f8 = uVar19;
  }
  lVar11 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar12 = lVar11 + 9;
    if (bVar22) {
      lVar12 = *(long *)(lVar11 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0c069d90(auStack_248,param_1,lVar12,uVar18,1);
  }
  else {
    func_0x0c069d90(auStack_248,param_1,0,0,1);
  }
  if (cStack_218 == '\0') {
    uStack_100._4_4_ = (uint)((ulong)uStack_100 >> 0x20);
    if ((DAT_0f6d30c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d30c0), iVar7 != 0)) {
      func_0x0ee25020(0xf6d3098,&DAT_012b3162);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d3098,0xf53dab8);
      func_0x0410844d(&DAT_0f6d30c0);
    }
    uVar18 = (ulong)(DAT_0f6d30a0 >> 1);
    lVar11 = 0xf6d30a1;
    if ((DAT_0f6d30a0 & 1) != 0) {
      uVar18 = _DAT_0f6d30a8;
      lVar11 = _DAT_0f6d30b0;
    }
    func_0x0c06a780(&lStack_1e8,auStack_248,lVar11,uVar18,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f34dd18;
    if (uStack_1d0 != (long *)0x0) {
      lVar11 = *uStack_1d0;
      uStack_1d0 = plVar10;
      (**(code **)(lVar11 + 8))();
      plVar10 = uStack_1d0;
    }
    uStack_1d0 = plVar10;
    uStack_110 = (undefined4)uStack_1d8;
    plStack_108 = (long *)0x0;
    uStack_100 = (long *)((ulong)uStack_100._4_4_ << 0x20);
    uStack_f8 = 1;
    uStack_f0 = 0;
    uStack_e8 = &UNK_0c07a780;
    puStack_e0 = &SUB_048b06d0;
    puStack_d8 = &UNK_0c07a4a0;
    puStack_d0 = &UNK_0c07a840;
    puStack_c8 = &UNK_0c07aae0;
    uStack_c0 = 0;
    auStack_b8 = (undefined1  [16])0x0;
    FUN_048b05a0(plStack_1e0,&uStack_110);
    uVar16 = auStack_b8._8_8_;
    if ((long *)auStack_b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_b8._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_b8._8_8_ + 0x10))(auStack_b8._8_8_);
        func_0x0412c2d0(uVar16);
      }
    }
    iVar7 = *(int *)((long)plStack_1e0 + 0x1c);
    if (iVar7 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_1e0 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_1e0 + 0x18)) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar11 = *(long *)(piVar14 + 0xc);
      while (lVar11 != *(long *)((long)plStack_1e0 + 8)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar11 = *(long *)(piVar14 + 0xc);
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_1e0 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_1e0 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)((long)plStack_1e0 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_1e8);
    func_0x048b0bc0(&uStack_1d0);
  }
  if ((DAT_0f6d30c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d30c0), iVar7 != 0)) {
    func_0x0ee25020(0xf6d3098,&DAT_012b3162);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3098,0xf53dab8);
    func_0x0410844d(&DAT_0f6d30c0);
  }
  uVar18 = (ulong)(DAT_0f6d30a0 >> 1);
  lVar11 = 0xf6d30a1;
  if ((DAT_0f6d30a0 & 1) != 0) {
    uVar18 = _DAT_0f6d30a8;
    lVar11 = _DAT_0f6d30b0;
  }
  lVar12 = func_0x0c079d30(param_1 + 0x18);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar22 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar11 = lVar12 + 9;
    if (bVar22) {
      lVar11 = *(long *)(lVar12 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar12 + 0x10);
    }
  }
  func_0x0c07af30(&uStack_110,param_1,lVar11,uVar18);
  lVar12 = CONCAT44(uStack_10c,uStack_110) + 0x18;
  lVar11 = func_0x0c079d30(lVar12);
  pbVar4 = *(byte **)(CONCAT44(uStack_10c,uStack_110) + 0x58);
  for (pbVar17 = *(byte **)(CONCAT44(uStack_10c,uStack_110) + 0x50); pbVar17 != pbVar4;
      pbVar17 = pbVar17 + 0x38) {
    bVar3 = *pbVar17;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0c034fca;
    }
    else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0c034fca:
      if ((bVar3 & 1) == 0) {
        pbVar21 = pbVar17 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar17 + 0x10);
      }
      auVar23[0] = -(*pbVar21 == DAT_014eaba0);
      auVar23[1] = -(pbVar21[1] == DAT_014eaba0._1_1_);
      auVar23[2] = -(pbVar21[2] == DAT_014eaba0._2_1_);
      auVar23[3] = -(pbVar21[3] == DAT_014eaba0._3_1_);
      auVar23[4] = -(pbVar21[4] == DAT_014eaba0._4_1_);
      auVar23[5] = -(pbVar21[5] == DAT_014eaba0._5_1_);
      auVar23[6] = -(pbVar21[6] == DAT_014eaba0._6_1_);
      auVar23[7] = -(pbVar21[7] == DAT_014eaba0._7_1_);
      auVar23[8] = -(pbVar21[8] == DAT_014eaba0._8_1_);
      auVar23[9] = -(pbVar21[9] == DAT_014eaba0._9_1_);
      auVar23[10] = -(pbVar21[10] == DAT_014eaba0._10_1_);
      auVar23[0xb] = -(pbVar21[0xb] == DAT_014eaba0._11_1_);
      auVar23[0xc] = -(pbVar21[0xc] == DAT_014eaba0._12_1_);
      auVar23[0xd] = -(pbVar21[0xd] == DAT_014eaba0._13_1_);
      auVar23[0xe] = -(pbVar21[0xe] == DAT_014eaba0._14_1_);
      auVar23[0xf] = -(pbVar21[0xf] == DAT_014eaba0._15_1_);
      auVar24[0] = -(pbVar21[10] == DAT_014e4ff0);
      auVar24[1] = -(pbVar21[0xb] == DAT_014e4ff0._1_1_);
      auVar24[2] = -(pbVar21[0xc] == DAT_014e4ff0._2_1_);
      auVar24[3] = -(pbVar21[0xd] == DAT_014e4ff0._3_1_);
      auVar24[4] = -(pbVar21[0xe] == DAT_014e4ff0._4_1_);
      auVar24[5] = -(pbVar21[0xf] == DAT_014e4ff0._5_1_);
      auVar24[6] = -(pbVar21[0x10] == DAT_014e4ff0._6_1_);
      auVar24[7] = -(pbVar21[0x11] == DAT_014e4ff0._7_1_);
      auVar24[8] = -(pbVar21[0x12] == DAT_014e4ff0._8_1_);
      auVar24[9] = -(pbVar21[0x13] == DAT_014e4ff0._9_1_);
      auVar24[10] = -(pbVar21[0x14] == DAT_014e4ff0._10_1_);
      auVar24[0xb] = -(pbVar21[0x15] == DAT_014e4ff0._11_1_);
      auVar24[0xc] = -(pbVar21[0x16] == DAT_014e4ff0._12_1_);
      auVar24[0xd] = -(pbVar21[0x17] == DAT_014e4ff0._13_1_);
      auVar24[0xe] = -(pbVar21[0x18] == DAT_014e4ff0._14_1_);
      auVar24[0xf] = -(pbVar21[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar17 == pbVar4) {
LAB_0c034ff9:
    if ((int)uStack_e8 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0c03506d;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auStack_248 = (undefined1  [8])func_0x048b0c90(lVar12,lVar11,uStack_e8._4_4_,1);
      if (auStack_248 == (undefined1  [8])0x0) {
        _auStack_248 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_248);
        if (auStack_248 == (undefined1  [8])0x0) goto LAB_0c03506d;
      }
      if ((*(int *)((long)auStack_248 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_248 + 0x58) != 0)) {
        lVar11 = *(long *)((long)auStack_248 + 0x58) + 0x40;
      }
      else {
LAB_0c03506d:
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
      FUN_0eec74c0(0x20,0);
    }
    uVar16 = _UNK_013bbadf;
    uStack_a8 = 0x21;
    uStack_a0 = 0x1a;
    *(ulong *)((long)puStack_98 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_98 + 0x12) = uVar16;
    uVar16 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_98 = _DAT_013bbacd;
    puStack_98[1] = uVar16;
    *(undefined1 *)((long)puStack_98 + 0x1a) = 0;
    lVar11 = func_0x048b5060(lVar11,&uStack_a8);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_248) {
      pcVar13 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar20 = (undefined8 *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar20);
        if (cStack_21c != '\0') {
          if (cStack_21c == '\x02') {
            (*pcStack_230)(5,&plStack_240,puVar20);
          }
          else {
            plVar10 = plStack_240;
            plStack_240 = (long *)0x0;
            *puVar20 = plVar10;
          }
        }
      }
      *(code **)(lVar11 + 0x38) = pcStack_230;
      *(code **)(lVar11 + 0x40) = pcStack_228;
      *(undefined4 *)(lVar11 + 0x48) = uStack_220;
      *(char *)(lVar11 + 0x4c) = cStack_21c;
      pcVar13 = pcStack_228;
    }
    if ((uStack_a8 & 1) != 0) {
      func_0x0412a280(puStack_98,uStack_a8 & 0xfffffffffffffffe);
      pcVar13 = pcStack_228;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(&plStack_240);
    }
    if (pcStack_78 != (code *)0x0) {
      (*pcStack_78)(auStack_90);
    }
  }
  else {
    iVar7 = *(int *)(pbVar17 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0c034ff9;
  }
  puStack_1b8 = puStack_e0;
  lStack_1e8 = CONCAT44(uStack_10c,uStack_110);
  lStack_1c8 = uStack_f0;
  puStack_1c0 = uStack_e8;
  uStack_1d8 = (ulong)uStack_100;
  uStack_1d0 = (long *)uStack_f8;
  plStack_1e0 = plStack_108;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffdb9;
  _auStack_248 = auVar5 << 8;
  pcStack_230 = (code *)((ulong)pcStack_230 & 0xffffffffffffff00);
  if (cStack_1f0 == '\x01') {
    plStack_240 = (long *)0x0;
    auStack_248 = (undefined1  [8])uStack_208;
    auVar23 = _auStack_248;
    plStack_240 = (long *)uStack_200;
    if ((uStack_200 & 0x80000000000000) != 0) {
      uVar18 = uStack_200 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar18 - 8);
      lVar11 = lVar12 + 9;
      _auStack_248 = auVar23;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        FUN_0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar18,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      plStack_240 = (long *)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_238 = 0;
    uVar18 = uStack_1f8;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      uVar18 = uStack_1f8 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar18 - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        FUN_0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar18,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_230 = (code *)CONCAT71(pcStack_230._1_7_,1);
    uStack_238 = uVar18;
  }
  func_0x0412e5e0(auStack_90,puVar9,0x34);
  lStack_68 = lStack_1e8;
  lStack_60 = (long)plStack_1e0;
  uStack_58 = uStack_1d8;
  uStack_50 = uStack_1d0;
  uStack_48 = lStack_1c8;
  uStack_40 = puStack_1c0;
  puStack_38 = puStack_1b8;
  if ((auStack_90[0] & 1) != 0) {
    func_0x0412a280(puStack_80,auStack_90[0] & 0xfffffffffffffffe);
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
  func_0x0c07b470(&lStack_1e8,lStack_68 + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)(uStack_1d8 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)uStack_1d0) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while ((long *)lVar11 != plStack_1e0) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
LAB_0c0354ef:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar14 = *(int **)(*(long *)(uStack_1d8 + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != (int)uStack_1d0) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0c0354ef;
    }
    if (uStack_1d0._4_4_ == 0) {
      *(uint *)(uStack_1d8 + 0x18) = *(uint *)(uStack_1d8 + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f6d4590 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d4590), iVar7 != 0)) {
    func_0x0c079cc0(0xf6d4578);
    func_0x0410844d(&DAT_0f6d4590);
  }
  uStack_40 = (undefined *)0x6b457dbb00000001;
  lVar11 = lStack_68 + 0x18;
  lStack_1e8 = func_0x0c079d30(lVar11);
  plStack_1e0 = (long *)lVar11;
  func_0x0ed621a0(&lStack_1e8,uStack_40._4_4_);
  plStack_1e0 = &lStack_60;
  lStack_1e8 = CONCAT62(lStack_1e8._2_6_,0x10);
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uStack_40._4_4_);
  uStack_1d0 = (long *)0x0;
  lStack_1c8 = 0;
  puStack_1c0 = (undefined *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  lStack_1b0 = 0;
  uStack_1a8 = 0x2c;
  uStack_1a7 = (undefined7)_DAT_014a4790;
  uStack_1a0 = (undefined1)((ulong)_DAT_014a4790 >> 0x38);
  uStack_19f = (undefined6)_UNK_014a4798;
  uStack_199 = 0x61;
  uStack_198 = 0x67;
  uStack_197 = 0x6d6574695f65;
  uStack_191 = 0;
  uStack_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  uStack_181 = 0;
  uStack_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  uStack_171 = 0;
  uStack_170 = 0;
  uStack_169 = 0;
  uStack_168 = 0;
  uStack_161 = 0;
  uStack_160 = 0x3f600000;
  func_0x048afb10(&uStack_190,8);
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  uStack_128 = 0xff00;
  uStack_124 = uStack_124 & 0xffffff00;
  uStack_120 = uStack_120 & 0xffffff00;
  uStack_11c = 0;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar20 = &UNK_0ef46ce8;
  if (uStack_1d0 != (long *)0x0) {
    lVar11 = *uStack_1d0;
    uStack_1d0 = puVar20;
    (**(code **)(lVar11 + 8))();
    puVar20 = uStack_1d0;
  }
  uStack_1d0 = puVar20;
  uStack_110 = (undefined4)uStack_1d8;
  plStack_108 = (long *)0x0;
  uStack_100 = (long *)((ulong)uStack_100 & 0xffffffff00000000);
  uStack_f8 = 1;
  uStack_f0 = 0;
  uStack_e8 = &UNK_0490ce30;
  puStack_e0 = &SUB_048b06d0;
  puStack_d8 = &SUB_0490cb20;
  puStack_d0 = &UNK_0c07b830;
  puStack_c8 = &UNK_0c07b990;
  uStack_c0 = 0;
  auStack_b8 = ZEXT816(0);
  FUN_048b05a0(plStack_1e0,&uStack_110);
  uVar16 = auStack_b8._8_8_;
  if ((long *)auStack_b8._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_b8._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_b8._8_8_ + 0x10))(auStack_b8._8_8_);
      func_0x0412c2d0(uVar16);
    }
  }
  plVar10 = plStack_1e0;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_110 = _DAT_0f550a0c;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  lVar11 = lStack_1c8;
  puVar20 = uStack_1d0;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0ef439d0;
  plStack_108 = plVar15 + 3;
  uStack_1d0 = (long *)0x0;
  lStack_1c8 = 0;
  plVar15[3] = (long)puVar20;
  plVar15[4] = lVar11;
  plVar15[7] = lStack_1b0;
  plVar15[5] = (long)puStack_1c0;
  plVar15[6] = (long)puStack_1b8;
  puStack_1c0 = (undefined *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  lStack_1b0 = 0;
  plVar15[10] = CONCAT17(uStack_191,CONCAT61(uStack_197,uStack_198));
  plVar15[8] = CONCAT71(uStack_1a7,uStack_1a8);
  plVar15[9] = CONCAT17(uStack_199,CONCAT61(uStack_19f,uStack_1a0));
  uStack_1a8 = 0;
  uStack_1a7 = 0;
  uStack_1a0 = 0;
  uStack_19f = 0;
  uStack_199 = 0;
  uStack_198 = 0;
  uStack_197 = 0;
  uStack_191 = 0;
  plVar15[0xb] = CONCAT17(uStack_189,uStack_190);
  plVar15[0xc] = CONCAT17(uStack_181,uStack_188);
  plVar15[0xd] = CONCAT17(uStack_179,uStack_180);
  uStack_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  uStack_181 = 0;
  uStack_180 = 0;
  uStack_179 = 0;
  plVar15[0xe] = CONCAT17(uStack_171,uStack_178);
  plVar15[0xf] = CONCAT17(uStack_169,uStack_170);
  plVar15[0x10] = CONCAT17(uStack_161,uStack_168);
  uStack_178 = 0;
  uStack_171 = 0;
  uStack_170 = 0;
  uStack_169 = 0;
  uStack_168 = 0;
  uStack_161 = 0;
  *(undefined4 *)(plVar15 + 0x11) = uStack_160;
  plVar15[0x12] = lStack_158;
  plVar15[0x13] = lStack_150;
  plVar15[0x14] = lStack_148;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar15[0x17] = lStack_130;
  plVar15[0x15] = lStack_140;
  plVar15[0x16] = lStack_138;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_11c,CONCAT43(uStack_120,uStack_124._1_3_));
  plVar15[0x18] = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
  _auStack_248 = ZEXT816(0);
  uStack_100 = plVar15;
  func_0x048afd20(plVar10,&uStack_110);
  plVar15 = uStack_100;
  if (uStack_100 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_100 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_100 + 0x10))(uStack_100);
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_240 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar15);
    }
  }
  lVar12 = lStack_68;
  lVar11 = plVar10[2];
  iVar7 = *(int *)((long)plVar10 + 0x1c);
  if (iVar7 == 2) {
    piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)plVar10[3]) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != plVar10[1]; piVar14 = *(int **)(piVar14 + 0xe)) {
    }
LAB_0c035a8a:
    piVar14[4] = piVar14[4] | (int)lStack_1e8 << 0x10;
  }
  else {
    if (iVar7 == 1) {
      piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != (int)plVar10[3]) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0c035a8a;
    }
    if (iVar7 == 0) {
      *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)lStack_1e8 << 0x10;
    }
  }
  iVar7 = (int)uStack_40;
  uVar6 = uStack_40._4_4_;
  func_0x048b0bc0(&uStack_1d0);
  if (iVar7 == 4) {
    lVar12 = lVar12 + 0x18;
    uVar16 = func_0x0c079d30(lVar12);
    lVar11 = func_0x048b1040(lVar12,uVar16,uVar6,1);
    if (lVar11 == 0) {
      lStack_1e8 = 0;
      plStack_1e0 = (long *)0x0;
      func_0x048b10d0(&lStack_1e8);
      lVar12 = *(long *)(lStack_1e8 + 0x38);
      lVar11 = lStack_1e8;
      if (lVar12 == 0) goto LAB_0c035b78;
LAB_0c035b94:
      do {
        lVar11 = lVar12;
        lVar12 = *(long *)(lVar11 + 0x38);
        if (*(long *)(lVar11 + 0x38) == 0) {
          lStack_1e8 = 0;
          plStack_1e0 = (long *)0x0;
          func_0x048b10d0(&lStack_1e8);
          lVar12 = lStack_1e8;
        }
      } while (lVar12 != 0);
    }
    else {
      lVar12 = *(long *)(lVar11 + 0x38);
      if (*(long *)(lVar11 + 0x38) != 0) goto LAB_0c035b94;
LAB_0c035b78:
      lStack_1e8 = 0;
      plStack_1e0 = (long *)0x0;
      func_0x048b10d0(&lStack_1e8);
      lVar12 = lStack_1e8;
      if (lStack_1e8 != 0) goto LAB_0c035b94;
    }
    lVar11 = *(long *)(lVar11 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar20 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar7 != 1) goto LAB_0c035c37;
    lVar12 = lVar12 + 0x18;
    uVar16 = func_0x0c079d30(lVar12);
    lVar11 = func_0x048b0c90(lVar12,uVar16,uVar6,1);
    if (lVar11 == 0) {
      lStack_1e8 = 0;
      plStack_1e0 = (long *)0x0;
      FUN_048b0d20(&lStack_1e8);
      lVar11 = lStack_1e8;
    }
    lVar11 = *(long *)(lVar11 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar20 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  puVar20[1] = 0xffffffffffffffff;
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 0xff;
  *puVar20 = &UNK_0f0edc68;
  uVar16 = _DAT_014f0238;
  puVar20[4] = 0;
  puVar20[5] = uVar16;
  puVar20[6] = 0;
  puVar20[7] = 0;
  plVar10 = *(long **)(lVar11 + 8);
  *(undefined8 **)(lVar11 + 8) = puVar20;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
LAB_0c035c37:
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
  func_0x0412a280(puVar9,0x38);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x13d4fb6  Controls the maximum weight a storage item can hold.
 * 0x13d4fc6  imum weight a storage item can hold.
 * 0x13d4fd6  orage item can hold.
 * 0x14a4790  weight_in_storage_item
 * 0x14eaba0  [cereal:document
 */
