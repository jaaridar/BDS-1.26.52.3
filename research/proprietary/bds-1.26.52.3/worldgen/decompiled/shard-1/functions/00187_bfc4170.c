/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0c4170 (ELF vaddr 0xbfc4170)
 * Label: caller-of-callee
 * Body:  [[0c0c4170, 0c0c48c4] [0c0c48d0, 0c0c4912] [0c0c4920, 0c0c5725]]
 * Ghidra: FUN_0c0c4170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0c4170(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  int *piVar12;
  byte *pbVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_2d8 [8];
  long *plStack_2d0;
  ulong uStack_2c8;
  code *pcStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  char cStack_2a8;
  undefined8 *puStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  char cStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [24];
  long lStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  ulong auStack_a0 [2];
  undefined *puStack_90;
  code *pcStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  long lStack_38;
  
  lVar10 = param_1 + 0x18;
  lVar8 = func_0x0c10a670(lVar10);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar20 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0c10abd0(&lStack_208,param_1,lVar15,uVar18,0);
  }
  else {
    func_0x0c10abd0(&lStack_208,param_1,0,0,0);
  }
  if ((char)puStack_1d8 == '\0') {
    func_0x0c0c5830(&lStack_118,&lStack_208,&UNK_013fa2cf,8);
    puStack_48 = puStack_e8;
    uStack_58 = uStack_f8;
    uStack_50 = uStack_f0;
    uStack_68 = uStack_108;
    uStack_60 = uStack_100;
    lStack_78 = lStack_118;
    lStack_70 = lStack_110;
    func_0x0c0c5930(&lStack_d8,&lStack_78,&UNK_0119d6bf,8);
    cStack_2a8 = cStack_a8;
    pcStack_2b8 = pcStack_b8;
    uStack_2b0 = uStack_b0;
    uStack_2c8 = uStack_c8;
    pcStack_2c0 = pcStack_c0;
    plStack_2d0 = (long *)lStack_d0;
    auStack_2d8 = (undefined1  [8])lStack_d8;
    func_0x0c0c5a30(&uStack_278,auStack_2d8,&UNK_012bacb5,5);
  }
  lVar8 = func_0x0c10ca10(lVar10);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar20 = (*(byte *)(lVar8 + 8) & 1) != 0;
    puVar14 = (undefined *)(lVar8 + 9);
    if (bVar20) {
      puVar14 = *(undefined **)(lVar8 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar8 + 0x10);
    }
  }
  else {
    puVar14 = &UNK_013bbc24;
    uVar18 = 0xf;
  }
  func_0x0c10d070(&lStack_208,param_1,puVar14,uVar18,0);
  if ((char)puStack_1d8 == '\0') {
    func_0x0c0c5b30(&lStack_d8,&lStack_208,&UNK_012b326f,0xc);
    cStack_2a8 = cStack_a8;
    pcStack_2b8 = pcStack_b8;
    uStack_2b0 = uStack_b0;
    uStack_2c8 = uStack_c8;
    pcStack_2c0 = pcStack_c0;
    plStack_2d0 = (long *)lStack_d0;
    auStack_2d8 = (undefined1  [8])lStack_d8;
    func_0x0c0c5c30(&uStack_278,auStack_2d8,&UNK_01217c3d,0xc);
  }
  puStack_2a0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puStack_2a0 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  uVar4 = _UNK_0131a992;
  *(ulong *)((long)puStack_2a0 + 0x4e) = CONCAT62(_UNK_0131a98c,_DAT_0131a98a);
  *(undefined8 *)((long)puStack_2a0 + 0x56) = uVar4;
  uVar4 = CONCAT26(_DAT_0131a98a,_UNK_0131a984);
  puStack_2a0[8] = _DAT_0131a97c;
  puStack_2a0[9] = uVar4;
  uVar4 = _UNK_0131a974;
  puStack_2a0[6] = _DAT_0131a96c;
  puStack_2a0[7] = uVar4;
  uVar4 = _UNK_0131a964;
  puStack_2a0[4] = _DAT_0131a95c;
  puStack_2a0[5] = uVar4;
  uVar4 = _UNK_0131a954;
  puStack_2a0[2] = _DAT_0131a94c;
  puStack_2a0[3] = uVar4;
  uVar4 = _UNK_0131a944;
  *puStack_2a0 = _DAT_0131a93c;
  puStack_2a0[1] = uVar4;
  *(undefined1 *)((long)puStack_2a0 + 0x5e) = 0;
  uStack_298 = uStack_298 & 0xffffffffffffff00;
  cStack_280 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_298 = *param_3;
    uStack_290 = 0;
    uVar18 = param_3[1];
    lStack_38 = lVar10;
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar8 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar8 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar8;
      memcpy(plVar9 + 1,uVar18 & 0xff00ffffffffffff,lVar8);
      *(undefined1 *)((long)plVar9 + lVar8 + 8) = 0;
      uVar18 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_288 = 0;
    uVar19 = param_3[2];
    uStack_290 = uVar18;
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar8 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar8 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar8;
      memcpy(plVar9 + 1,uVar19 & 0xff00ffffffffffff,lVar8);
      *(undefined1 *)((long)plVar9 + lVar8 + 8) = 0;
      uVar19 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_280 = '\x01';
    lVar10 = lStack_38;
    uStack_288 = uVar19;
  }
  lVar8 = func_0x0c068ba0(lVar10);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar20 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0c069d90(auStack_2d8,param_1,lVar15,uVar18,1);
  }
  else {
    func_0x0c069d90(auStack_2d8,param_1,0,0,1);
  }
  if (cStack_2a8 == '\0') {
    uStack_268._4_4_ = (uint)(uStack_268 >> 0x20);
    uStack_278._4_4_ = (undefined4)((ulong)uStack_278 >> 0x20);
    if ((DAT_0f6d4fb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d4fb0), iVar6 != 0)) {
      func_0x0ee25020(0xf6d4f88,&UNK_0123256c);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d4f88,0xf53dab8);
      func_0x0410844d(&DAT_0f6d4fb0);
    }
    uVar18 = (ulong)(DAT_0f6d4f90 >> 1);
    lVar8 = 0xf6d4f91;
    if ((DAT_0f6d4f90 & 1) != 0) {
      uVar18 = _DAT_0f6d4f98;
      lVar8 = _DAT_0f6d4fa0;
    }
    func_0x0c06a780(&lStack_208,auStack_2d8,lVar8,uVar18,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f351bd0;
    if (uStack_1f0 != (long *)0x0) {
      lVar8 = *uStack_1f0;
      uStack_1f0 = plVar9;
      (**(code **)(lVar8 + 8))();
      plVar9 = uStack_1f0;
    }
    uStack_1f0 = plVar9;
    uStack_278 = CONCAT44(uStack_278._4_4_,plStack_1f8._0_4_);
    uStack_270 = 0;
    uStack_268 = (ulong)uStack_268._4_4_ << 0x20;
    uStack_260 = 1;
    uStack_258 = 0;
    uStack_250 = &UNK_0c110770;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &UNK_0c110490;
    puStack_238 = &UNK_0c110830;
    puStack_230 = &UNK_0c110ad0;
    uStack_228 = 0;
    auStack_220._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(plStack_200,&uStack_278);
    uVar4 = auStack_220._8_8_;
    if ((long *)auStack_220._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_220._8_8_ + 8);
      lVar8 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar6 = *(int *)((long)plStack_200 + 0x1c);
    if (iVar6 == 2) {
      piVar12 = *(int **)(*(long *)(*(long *)((long)plStack_200 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)((long)plStack_200 + 0x18)) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      lVar8 = *(long *)(piVar12 + 0xc);
      while (lVar8 != *(long *)((long)plStack_200 + 8)) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar8 = *(long *)(piVar12 + 0xc);
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar12 = *(int **)(*(long *)(*(long *)((long)plStack_200 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)((long)plStack_200 + 0x18)) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)((long)plStack_200 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_208);
    func_0x048b0bc0(&uStack_1f0);
  }
  if ((DAT_0f6d4fb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d4fb0), iVar6 != 0)) {
    func_0x0ee25020(0xf6d4f88,&UNK_0123256c);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4f88,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4fb0);
  }
  uVar18 = (ulong)(DAT_0f6d4f90 >> 1);
  lVar8 = 0xf6d4f91;
  if ((DAT_0f6d4f90 & 1) != 0) {
    uVar18 = _DAT_0f6d4f98;
    lVar8 = _DAT_0f6d4fa0;
  }
  lVar10 = func_0x0c10fcb0(lVar10);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar20 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar8 = lVar10 + 9;
    if (bVar20) {
      lVar8 = *(long *)(lVar10 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar10 + 0x10);
    }
  }
  func_0x0c110f20(&uStack_278,param_1,lVar8,uVar18);
  lVar8 = uStack_278 + 0x18;
  lVar10 = func_0x0c10fcb0(lVar8);
  for (pbVar13 = *(byte **)(uStack_278 + 0x50); pbVar13 != *(byte **)(uStack_278 + 0x58);
      pbVar13 = pbVar13 + 0x38) {
    bVar3 = *pbVar13;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0c0c492a;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0c0c492a:
      if ((bVar3 & 1) == 0) {
        pbVar17 = pbVar13 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar13 + 0x10);
      }
      auVar21[0] = -(*pbVar17 == DAT_014eaba0);
      auVar21[1] = -(pbVar17[1] == DAT_014eaba0._1_1_);
      auVar21[2] = -(pbVar17[2] == DAT_014eaba0._2_1_);
      auVar21[3] = -(pbVar17[3] == DAT_014eaba0._3_1_);
      auVar21[4] = -(pbVar17[4] == DAT_014eaba0._4_1_);
      auVar21[5] = -(pbVar17[5] == DAT_014eaba0._5_1_);
      auVar21[6] = -(pbVar17[6] == DAT_014eaba0._6_1_);
      auVar21[7] = -(pbVar17[7] == DAT_014eaba0._7_1_);
      auVar21[8] = -(pbVar17[8] == DAT_014eaba0._8_1_);
      auVar21[9] = -(pbVar17[9] == DAT_014eaba0._9_1_);
      auVar21[10] = -(pbVar17[10] == DAT_014eaba0._10_1_);
      auVar21[0xb] = -(pbVar17[0xb] == DAT_014eaba0._11_1_);
      auVar21[0xc] = -(pbVar17[0xc] == DAT_014eaba0._12_1_);
      auVar21[0xd] = -(pbVar17[0xd] == DAT_014eaba0._13_1_);
      auVar21[0xe] = -(pbVar17[0xe] == DAT_014eaba0._14_1_);
      auVar21[0xf] = -(pbVar17[0xf] == DAT_014eaba0._15_1_);
      auVar22[0] = -(pbVar17[10] == DAT_014e4ff0);
      auVar22[1] = -(pbVar17[0xb] == DAT_014e4ff0._1_1_);
      auVar22[2] = -(pbVar17[0xc] == DAT_014e4ff0._2_1_);
      auVar22[3] = -(pbVar17[0xd] == DAT_014e4ff0._3_1_);
      auVar22[4] = -(pbVar17[0xe] == DAT_014e4ff0._4_1_);
      auVar22[5] = -(pbVar17[0xf] == DAT_014e4ff0._5_1_);
      auVar22[6] = -(pbVar17[0x10] == DAT_014e4ff0._6_1_);
      auVar22[7] = -(pbVar17[0x11] == DAT_014e4ff0._7_1_);
      auVar22[8] = -(pbVar17[0x12] == DAT_014e4ff0._8_1_);
      auVar22[9] = -(pbVar17[0x13] == DAT_014e4ff0._9_1_);
      auVar22[10] = -(pbVar17[0x14] == DAT_014e4ff0._10_1_);
      auVar22[0xb] = -(pbVar17[0x15] == DAT_014e4ff0._11_1_);
      auVar22[0xc] = -(pbVar17[0x16] == DAT_014e4ff0._12_1_);
      auVar22[0xd] = -(pbVar17[0x17] == DAT_014e4ff0._13_1_);
      auVar22[0xe] = -(pbVar17[0x18] == DAT_014e4ff0._14_1_);
      auVar22[0xf] = -(pbVar17[0x19] == DAT_014e4ff0._15_1_);
      auVar22 = auVar22 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar13 == *(byte **)(uStack_278 + 0x58)) {
LAB_0c0c4959:
    if ((int)uStack_250 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0c0c49c9;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      auStack_2d8 = (undefined1  [8])func_0x048b0c90(lVar8,lVar10,uStack_250._4_4_,1);
      if (auStack_2d8 == (undefined1  [8])0x0) {
        _auStack_2d8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2d8);
        if (auStack_2d8 == (undefined1  [8])0x0) goto LAB_0c0c49c9;
      }
      if ((*(int *)((long)auStack_2d8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_2d8 + 0x58) != 0)) {
        lVar10 = *(long *)((long)auStack_2d8 + 0x58) + 0x40;
      }
      else {
LAB_0c0c49c9:
        lVar10 = 0;
      }
    }
    puStack_90 = &UNK_0488e0b0;
    uStack_80 = 0x48b5725f;
    pcStack_88 = (code *)0x0;
    uStack_7c = 0;
    auStack_a0[0] = 0;
    _auStack_2d8 = (undefined1  [16])0x0;
    pcStack_2c0 = (code *)&UNK_0488e0b0;
    pcStack_2b8 = (code *)0x0;
    uStack_2b0 = CONCAT35(uStack_2b0._5_3_,0x48b5725f);
    puStack_120 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_120 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_130 = 0x21;
    uStack_128 = 0x1a;
    *(ulong *)((long)puStack_120 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_120 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_120 = _DAT_013bbacd;
    puStack_120[1] = uVar4;
    *(undefined1 *)((long)puStack_120 + 0x1a) = 0;
    lVar10 = func_0x048b5060(lVar10,&uStack_130);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_2d8) {
      pcVar11 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar16);
        if (uStack_2b0._4_1_ != '\0') {
          if (uStack_2b0._4_1_ == '\x02') {
            (*pcStack_2c0)(5,&plStack_2d0,puVar16);
          }
          else {
            plVar9 = plStack_2d0;
            plStack_2d0 = (long *)0x0;
            *puVar16 = plVar9;
          }
        }
      }
      *(code **)(lVar10 + 0x38) = pcStack_2c0;
      *(code **)(lVar10 + 0x40) = pcStack_2b8;
      *(undefined4 *)(lVar10 + 0x48) = (undefined4)uStack_2b0;
      *(char *)(lVar10 + 0x4c) = uStack_2b0._4_1_;
      pcVar11 = pcStack_2b8;
    }
    if ((uStack_130 & 1) != 0) {
      func_0x0412a280(puStack_120,uStack_130 & 0xfffffffffffffffe);
      pcVar11 = pcStack_2b8;
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(&plStack_2d0);
    }
    if (pcStack_88 != (code *)0x0) {
      (*pcStack_88)(auStack_a0);
    }
  }
  else {
    iVar6 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0c0c4959;
  }
  puStack_1d8 = puStack_248;
  pcStack_1e8 = (code *)uStack_258;
  puStack_1e0 = uStack_250;
  plStack_1f8 = (long *)uStack_268;
  uStack_1f0 = (long *)uStack_260;
  lStack_208 = uStack_278;
  plStack_200 = (long *)uStack_270;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffd29;
  _auStack_2d8 = auVar5 << 8;
  pcStack_2c0 = (code *)((ulong)pcStack_2c0 & 0xffffffffffffff00);
  if (cStack_280 == '\x01') {
    plStack_2d0 = (long *)0x0;
    auStack_2d8 = (undefined1  [8])uStack_298;
    auVar21 = _auStack_2d8;
    plStack_2d0 = (long *)uStack_290;
    if ((uStack_290 & 0x80000000000000) != 0) {
      uVar18 = uStack_290 & 0xff00ffffffffffff;
      lVar8 = *(long *)(uVar18 - 8);
      lVar10 = lVar8 + 9;
      _auStack_2d8 = auVar21;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar8;
      memcpy(plVar9 + 1,uVar18,lVar8);
      *(undefined1 *)((long)plVar9 + lVar8 + 8) = 0;
      plStack_2d0 = (long *)((ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_2c8 = 0;
    uVar18 = uStack_288;
    if ((uStack_288 & 0x80000000000000) != 0) {
      uVar18 = uStack_288 & 0xff00ffffffffffff;
      lVar8 = *(long *)(uVar18 - 8);
      lVar10 = lVar8 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar8;
      memcpy(plVar9 + 1,uVar18,lVar8);
      *(undefined1 *)((long)plVar9 + lVar8 + 8) = 0;
      uVar18 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_2c0 = (code *)CONCAT71(pcStack_2c0._1_7_,1);
    uStack_2c8 = uVar18;
  }
  func_0x0412e5e0(auStack_a0,puStack_2a0,0x5e);
  lStack_118 = lStack_208;
  lStack_110 = (long)plStack_200;
  uStack_108 = (ulong)plStack_1f8;
  uStack_100 = (ulong)uStack_1f0;
  uStack_f8 = pcStack_1e8;
  uStack_f0 = puStack_1e0;
  puStack_e8 = puStack_1d8;
  if ((auStack_a0[0] & 1) != 0) {
    func_0x0412a280(puStack_90,auStack_a0[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_2c0 == '\x01') {
    if ((uStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2c8 = 0;
    if (((ulong)plStack_2d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_2d0 & 0xff00ffffffffffff) - 8);
    }
  }
  uStack_f0 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f6d6908 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d6908), iVar6 != 0)) {
    func_0x0c10fc40(0xf6d68f0);
    func_0x0410844d(&DAT_0f6d6908);
  }
  lStack_208 = CONCAT44(lStack_208._4_4_,uStack_f0._4_4_);
  plStack_200 = (long *)0x0;
  plStack_1f8 = (long *)((ulong)plStack_1f8 & 0xffffffff00000000);
  uStack_1f0 = (long *)0x1;
  pcStack_1e8 = FUN_048aead0;
  puStack_1e0 = &UNK_04905970;
  puStack_1d8 = &UNK_0c111890;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  func_0x049057f0(&lStack_110,&lStack_208);
  func_0x048aea50(&lStack_208);
  uStack_268 = uStack_100;
  uStack_260 = uStack_f8;
  uStack_278 = lStack_110;
  uStack_270 = uStack_108;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef44b00;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  lStack_208 = CONCAT44(lStack_208._4_4_,_DAT_0f551bb4);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  plStack_200 = plVar9 + 3;
  plVar9[3] = (long)puVar16;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  _auStack_2d8 = ZEXT816(0);
  plStack_1f8 = plVar9;
  func_0x048afd20(&uStack_278,&lStack_208);
  plVar9 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1f8 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_2d0;
  if (plStack_2d0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_2d0 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      func_0x0412c2d0(plVar9);
    }
  }
  lStack_78 = lStack_118;
  lStack_70 = lStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  puStack_48 = puStack_e8;
  func_0x0c111460(&lStack_208,lStack_118 + 0x18);
  if (uStack_1f0._4_4_ == 2) {
    piVar12 = *(int **)(plStack_1f8[0xf] + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_1f0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    plVar9 = *(long **)(piVar12 + 0xc);
    while (plVar9 != plStack_200) {
      piVar12 = *(int **)(piVar12 + 0xe);
      plVar9 = *(long **)(piVar12 + 0xc);
    }
LAB_0c0c506f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_1f0._4_4_ == 1) {
      piVar12 = *(int **)(plStack_1f8[0xf] + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_1f0) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0c0c506f;
    }
    if (uStack_1f0._4_4_ == 0) {
      *(uint *)(plStack_1f8 + 3) = *(uint *)(plStack_1f8 + 3) | 0x40000;
    }
  }
  func_0x0c111a60(&lStack_208,&lStack_78,&UNK_0128113b,9);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f351d08;
  if (uStack_1f0 != (long *)0x0) {
    lVar10 = *uStack_1f0;
    uStack_1f0 = plVar9;
    (**(code **)(lVar10 + 8))();
    plVar9 = uStack_1f0;
  }
  uStack_1f0 = plVar9;
  uStack_278 = CONCAT44(uStack_278._4_4_,plStack_1f8._0_4_);
  uStack_270 = 0;
  uStack_268 = uStack_268 & 0xffffffff00000000;
  uStack_260 = 1;
  uStack_258 = 0;
  uStack_250 = &UNK_0c112190;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_0c10ca10;
  puStack_238 = &UNK_0c1121a0;
  puStack_230 = &UNK_0c112320;
  uStack_228 = 0;
  auStack_220._0_16_ = ZEXT816(0);
  func_0x048b05a0(plStack_200,&uStack_278);
  uVar4 = auStack_220._8_8_;
  if ((long *)auStack_220._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_220._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c111c50(&lStack_208);
  cStack_a8 = puStack_48._0_1_;
  pcStack_b8 = (code *)uStack_58;
  uStack_b0 = uStack_50;
  uStack_c8 = uStack_68;
  pcStack_c0 = (code *)uStack_60;
  lStack_d8 = lStack_78;
  lStack_d0 = lStack_70;
  func_0x048b0bc0(&uStack_1f0);
  func_0x0c111460(&lStack_208,lStack_d8 + 0x18);
  if (uStack_1f0._4_4_ == 2) {
    piVar12 = *(int **)(plStack_1f8[0xf] + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_1f0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    plVar9 = *(long **)(piVar12 + 0xc);
    while (plVar9 != plStack_200) {
      piVar12 = *(int **)(piVar12 + 0xe);
      plVar9 = *(long **)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_1f0._4_4_ != 1) {
      if (uStack_1f0._4_4_ == 0) {
        *(uint *)(plStack_1f8 + 3) = *(uint *)(plStack_1f8 + 3) | 0x40000;
      }
      goto LAB_0c0c52f3;
    }
    piVar12 = *(int **)(plStack_1f8[0xf] + 0x48);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_1f0) {
      piVar12 = piVar12 + 0x1a;
      iVar6 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
LAB_0c0c52f3:
  func_0x0c111a60(&lStack_208,&lStack_d8,&UNK_0129a90b,8);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f351d08;
  if (uStack_1f0 != (long *)0x0) {
    lVar10 = *uStack_1f0;
    uStack_1f0 = puVar16;
    (**(code **)(lVar10 + 8))();
    puVar16 = uStack_1f0;
  }
  uStack_1f0 = puVar16;
  uStack_278 = CONCAT44(uStack_278._4_4_,plStack_1f8._0_4_);
  uStack_270 = 0;
  uStack_268 = uStack_268 & 0xffffffff00000000;
  uStack_260 = 1;
  uStack_258 = 0;
  uStack_250 = &UNK_0c112190;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_0c10ca10;
  puStack_238 = &UNK_0c112790;
  puStack_230 = &UNK_0c112920;
  uStack_228 = 0;
  auStack_220._0_16_ = ZEXT816(0);
  func_0x048b05a0(plStack_200,&uStack_278);
  uVar4 = auStack_220._8_8_;
  if ((long *)auStack_220._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_220._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c111c50(&lStack_208);
  func_0x048b0bc0(&uStack_1f0);
  if (cStack_280 == '\x01') {
    if ((uStack_288 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_288 & 0xff00ffffffffffff) - 8);
    }
    uStack_288 = 0;
    if ((uStack_290 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puStack_2a0,0x60);
  return;
}



/* ---- referenced strings ----
 * 0x131a93c  Render offsets component: optional values can be given to offset the way the item is rendered.
 * 0x131a94c  omponent: optional values can be given to offset the way the item is rendered.
 * 0x131a95c  al values can be given to offset the way the item is rendered.
 * 0x131a96c   given to offset the way the item is rendered.
 * 0x131a97c   the way the item is rendered.
 * 0x131a98a  tem is rendered.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
