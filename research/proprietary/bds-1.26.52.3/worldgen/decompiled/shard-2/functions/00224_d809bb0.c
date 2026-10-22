/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd909bb0 (ELF vaddr 0xd809bb0)
 * Label: caller-of-callee
 * Body:  [[0d909bb0, 0d90a6d1] [0d90a6e0, 0d90b06d] [0d90b070, 0d90b0b2] [0d90b0c0, 0d90b3ad] [0d90b3b0, 0d90b3e0] [0d90b3f0, 0d90bc31] [0d90bc40, 0d90bfcf]]
 * Ghidra: FUN_0d909bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d909bb0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  long lStack_210;
  undefined1 uStack_208;
  undefined4 uStack_207;
  undefined2 uStack_203;
  undefined1 uStack_201;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined2 uStack_188;
  undefined2 uStack_186;
  uint uStack_184;
  uint uStack_180;
  undefined1 uStack_17c;
  undefined1 auStack_178 [16];
  long *plStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined4 uStack_fe;
  undefined2 uStack_fa;
  long lStack_f8;
  undefined4 uStack_ec;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  long *plStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 uStack_78;
  undefined2 uStack_68;
  undefined1 uStack_66;
  
  func_0x0e3e1190();
  func_0x0e3e15f0(param_1);
  if ((DAT_0f72e888 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72e888), iVar5 != 0)) {
    func_0x0d9da7d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72e808,0xf53dab8);
    func_0x0410844d(&DAT_0f72e888);
  }
  lStack_f8 = param_1 + 0x18;
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f72e808 + 4)) * 8);
  do {
    lVar10 = *plVar9;
    if (lVar10 == -1) goto LAB_0d909c40;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f72e808 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0d909c40:
    puVar7 = &DAT_0f72e808;
    if (iRam000000000f72e868 != -0x2b3da790) goto LAB_0d909cad;
LAB_0d909c6b:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0d909cad;
    bVar19 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar15 = lVar10 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar19) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0d9dac00(auStack_178,param_1,lVar15,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0d909c6b;
LAB_0d909cad:
    func_0x0d9dac00(auStack_178,param_1,&UNK_01389991,0xf);
  }
  if ((char)uStack_148 == '\0') {
    uStack_2a8._4_4_ = (uint)((ulong)uStack_2a8 >> 0x20);
    uStack_2b8._4_4_ = (undefined4)((ulong)uStack_2b8 >> 0x20);
    func_0x0d9db710(auStack_248,auStack_178,&UNK_014c20ed,5);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f0c2a88;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8._4_4_ << 0x20);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0729f0a0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651e820;
    puStack_278 = &UNK_0d9dbcc0;
    puStack_270 = &UNK_0d9dbe20;
    uStack_268 = 0;
    auStack_260._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    func_0x0d9db9c0(auStack_248);
    uStack_78 = (char)uStack_148;
    uStack_88 = uStack_158;
    puStack_80 = uStack_150;
    plStack_98 = plStack_168;
    pcStack_90 = pcStack_160;
    func_0x048b0bc0(auStack_230);
    uStack_fe = 0;
    uStack_fa = 0;
    plStack_130 = (long *)0xffffffffffffffff;
    plStack_128 = (long *)0x0;
    uStack_120 = 0xff;
    plStack_138 = (long *)&UNK_0f0edc68;
    uStack_118 = _DAT_014e40f0;
    uStack_110 = _UNK_014e40f8;
    uStack_108 = 0;
    uStack_100 = 0;
    func_0x0d9097e0(&plStack_e8,auStack_a8,&plStack_138);
    func_0x0d9db710(auStack_248,&plStack_e8,&UNK_01388ff4,0xc);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f0c2a88;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0729f0a0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651e820;
    puStack_278 = &UNK_0d9dbff0;
    puStack_270 = &UNK_0d9dc150;
    uStack_268 = 0;
    auStack_260._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    func_0x0d9db9c0(auStack_248);
    puStack_288 = (undefined1 *)CONCAT71(puStack_288._1_7_,uStack_b8);
    uStack_298 = uStack_c8;
    puStack_290 = puStack_c0;
    uStack_2a8 = plStack_d8;
    pcStack_2a0 = pcStack_d0;
    uStack_2b8 = plStack_e8;
    plStack_2b0 = plStack_e0;
    func_0x048b0bc0(auStack_230);
    uStack_238 = 0;
    auStack_230[0] = 0xff;
    auStack_248._8_8_ = 0xffffffffffffffff;
    auStack_248._0_8_ = &UNK_0f0edc68;
    auStack_230._8_8_ = _DAT_014e8bd0;
    auStack_220._8_8_ = 0x4030000000000000;
    auStack_220._0_8_ = _UNK_014e8bd8;
    lStack_210 = 0;
    func_0x0d9097e0(&uStack_68,&uStack_2b8,auStack_248);
  }
  if ((DAT_0f72e940 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72e940), iVar5 != 0)) {
    func_0x0d9dc3f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72e8c0,0xf53dab8);
    func_0x0410844d(&DAT_0f72e940);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f72e8c0 + 4)) * 8);
  do {
    lVar10 = *plVar9;
    if (lVar10 == -1) goto LAB_0d90a0f0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f72e8c0 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0d90a0f0:
    puVar7 = &DAT_0f72e8c0;
    if (iRam000000000f72e920 != -0x2b3da790) goto LAB_0d90a15d;
LAB_0d90a11b:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0d90a15d;
    bVar19 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar15 = lVar10 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar19) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0d9dca10(&plStack_138,param_1,lVar15,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0d90a11b;
LAB_0d90a15d:
    func_0x0d9dca10(&plStack_138,param_1,&UNK_01471b87,0xc);
  }
  if ((char)uStack_108 == '\0') {
    if ((DAT_0f72e960 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72e960), iVar5 != 0)) {
      func_0x0d9dc500();
      func_0x0410844d(&DAT_0f72e960);
    }
    plVar9 = plStack_138;
    uStack_110 = (undefined *)0x8bab7ec300000001;
    if ((DAT_0f72e940 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72e940), iVar5 != 0)) {
      func_0x0d9dc3f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72e8c0,0xf53dab8);
      func_0x0410844d(&DAT_0f72e940);
    }
    plVar14 = (long *)(plVar9[3] +
                      (ulong)((int)((ulong)(plVar9[4] - plVar9[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72e8c0 + 4)) * 8);
    do {
      lVar10 = *plVar14;
      if (lVar10 == -1) goto LAB_0d90a220;
      plVar14 = (long *)(plVar9[6] + lVar10 * 0x18);
    } while (*(uint *)(plVar9[6] + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f72e8c0 + 4));
    if (plVar14 == (long *)plVar9[7]) {
LAB_0d90a220:
      auStack_248._0_8_ = &DAT_0f72e8c0;
    }
    else {
      auStack_248._0_8_ = plVar14[2];
    }
    auStack_248._8_8_ = plVar9 + 3;
    FUN_0ed621a0(auStack_248,uStack_110._4_4_);
    auStack_248._0_2_ = 1;
    auStack_248._8_8_ = &plStack_130;
    uStack_238 = CONCAT44(uStack_238._4_4_,uStack_110._4_4_);
    auStack_230 = (undefined1  [16])0x0;
    auStack_220 = (undefined1  [16])0x0;
    lStack_210 = 0;
    uStack_208 = 10;
    uStack_207 = 0x6d6f6962;
    uStack_203 = 0x65;
    auStack_1f0 = (undefined1  [16])0x0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    uStack_1c0 = 0x3f600000;
    func_0x048afb10(auStack_1f0,8);
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    auStack_1b8 = (undefined1  [16])0x0;
    uStack_188 = 0xff00;
    uStack_184 = uStack_184 & 0xffffff00;
    uStack_180 = uStack_180 & 0xffffff00;
    uStack_17c = 0;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0ef44b00;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_048b3f30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_048b2190;
    puStack_278 = &UNK_0d9dd590;
    puStack_270 = &UNK_0d9dd750;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    uVar2 = auStack_248._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar9 + 1) = (undefined1  [16])0x0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_2b0 = plVar9 + 3;
    uVar3 = auStack_230._0_8_;
    uVar4 = auStack_230._8_8_;
    auStack_230 = (undefined1  [16])0x0;
    plVar9[3] = uVar3;
    plVar9[4] = uVar4;
    plVar9[7] = lStack_210;
    plVar9[5] = auStack_220._0_8_;
    plVar9[6] = auStack_220._8_8_;
    auStack_220 = (undefined1  [16])0x0;
    lStack_210 = 0;
    plVar9[10] = CONCAT44(uStack_1f4,uStack_1f8);
    plVar9[8] = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT41(uStack_207,uStack_208)));
    plVar9[9] = CONCAT71(uStack_1ff,uStack_200);
    uStack_208 = 0;
    uStack_207 = 0;
    uStack_203 = 0;
    uStack_201 = 0;
    uStack_200 = 0;
    uStack_1ff = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    plVar9[0xb] = auStack_1f0._0_8_;
    plVar9[0xc] = auStack_1f0._8_8_;
    plVar9[0xd] = lStack_1e0;
    auStack_1f0 = (undefined1  [16])0x0;
    lStack_1e0 = 0;
    plVar9[0xe] = lStack_1d8;
    plVar9[0xf] = lStack_1d0;
    plVar9[0x10] = lStack_1c8;
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_1c0;
    plVar9[0x12] = auStack_1b8._0_8_;
    plVar9[0x13] = auStack_1b8._8_8_;
    plVar9[0x14] = lStack_1a8;
    auStack_1b8 = (undefined1  [16])0x0;
    lStack_1a8 = 0;
    plVar9[0x17] = lStack_190;
    plVar9[0x15] = lStack_1a0;
    plVar9[0x16] = lStack_198;
    lStack_1a0 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_17c,CONCAT43(uStack_180,uStack_184._1_3_));
    plVar9[0x18] = CONCAT44(uStack_184,CONCAT22(uStack_186,uStack_188));
    auStack_178 = (undefined1  [16])0x0;
    uStack_2a8 = plVar9;
    FUN_048afd20(uVar2,&uStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_2a8 + 1;
      lVar10 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        FUN_0412c2d0(plVar9);
      }
    }
    uVar3 = auStack_178._8_8_;
    if ((long *)auStack_178._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_178._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_178._8_8_ + 0x10))(auStack_178._8_8_);
        FUN_0412c2d0(uVar3);
      }
    }
    lVar10 = *(long *)(uVar2 + 0x10);
    iVar5 = *(int *)(uVar2 + 0x1c);
    if (iVar5 == 2) {
      piVar16 = *(int **)(*(long *)(lVar10 + 0x78) + 0x60);
      iVar5 = *piVar16;
      while (iVar5 != *(int *)(uVar2 + 0x18)) {
        piVar16 = piVar16 + 0x16;
        iVar5 = *piVar16;
      }
      for (; *(long *)(piVar16 + 0xc) != *(long *)(uVar2 + 8); piVar16 = *(int **)(piVar16 + 0xe)) {
      }
LAB_0d90a6ea:
      piVar16[4] = piVar16[4] | auStack_248._0_4_ << 0x10;
    }
    else {
      if (iVar5 == 1) {
        piVar16 = *(int **)(*(long *)(lVar10 + 0x78) + 0x48);
        iVar5 = *piVar16;
        while (iVar5 != *(int *)(uVar2 + 0x18)) {
          piVar16 = piVar16 + 0x1a;
          iVar5 = *piVar16;
        }
        goto LAB_0d90a6ea;
      }
      if (iVar5 == 0) {
        *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) | auStack_248._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_230);
  }
  if ((DAT_0f72e9f8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72e9f8), iVar5 != 0)) {
    func_0x0d9dd9e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72e978,0xf53dab8);
    func_0x0410844d(&DAT_0f72e9f8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f72e978 + 4)) * 8);
  do {
    lVar10 = *plVar9;
    if (lVar10 == -1) goto LAB_0d90a750;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f72e978 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0d90a750:
    puVar7 = &DAT_0f72e978;
    if (iRam000000000f72e9d8 != -0x2b3da790) goto LAB_0d90a7bd;
LAB_0d90a77b:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0d90a7bd;
    bVar19 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar15 = lVar10 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar19) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0d9de100(&plStack_138,param_1,lVar15,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0d90a77b;
LAB_0d90a7bd:
    func_0x0d9de100(&plStack_138,param_1,&UNK_013992d2,10);
  }
  if ((char)uStack_108 == '\0') {
    func_0x0d9dec60(auStack_248,&plStack_138,&UNK_012d0854,0x1a,0);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f48d960;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0d9e0220;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0d9dfe70;
    puStack_278 = &UNK_0d9e02e0;
    puStack_270 = &UNK_0d9e0450;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    func_0x0d9def80(auStack_248);
    uStack_b8 = (char)uStack_108;
    pcStack_d0 = (code *)CONCAT71(uStack_11f,uStack_120);
    uStack_c8 = uStack_118;
    puStack_c0 = uStack_110;
    plStack_d8 = plStack_128;
    plStack_e8 = plStack_138;
    plStack_e0 = plStack_130;
    func_0x048b0bc0(auStack_230);
    func_0x0d9dec60(auStack_248,&plStack_e8,&UNK_012843e7,0x17,0);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f48da50;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0d9e1b50;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0d9e1780;
    puStack_278 = &UNK_0d9e1c10;
    puStack_270 = &UNK_0d9e1eb0;
    uStack_268 = 0;
    auStack_260._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    func_0x0d9def80(auStack_248);
    uStack_148 = CONCAT71(uStack_148._1_7_,uStack_b8);
    uStack_158 = uStack_c8;
    uStack_150 = puStack_c0;
    plStack_168 = plStack_d8;
    pcStack_160 = pcStack_d0;
    auStack_178._8_8_ = plStack_e0;
    auStack_178._0_8_ = plStack_e8;
    func_0x048b0bc0(auStack_230);
    func_0x0d9dec60(auStack_248,auStack_178,&UNK_013899a1,0x14,1);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f490160;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0d9e2b30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0d9e2820;
    puStack_278 = &UNK_0d9e2b40;
    puStack_270 = &UNK_0d9e2d10;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    func_0x0d9def80(auStack_248);
    func_0x048b0bc0(auStack_230);
  }
  if ((DAT_0f72ec20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72ec20), iVar5 != 0)) {
    func_0x0d9e3240();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72eba0,0xf53dab8);
    func_0x0410844d(&DAT_0f72ec20);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f72eba0 + 4)) * 8);
  do {
    lVar10 = *plVar9;
    if (lVar10 == -1) goto LAB_0d90ac60;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f72eba0 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0d90ac60:
    puVar7 = &DAT_0f72eba0;
    if (iRam000000000f72ec00 != -0x2b3da790) goto LAB_0d90ace7;
LAB_0d90ac8b:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0d90ace7;
    bVar19 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar15 = lVar10 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar19) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0d9e3760(&plStack_138,param_1,lVar15,uVar12);
    if ((char)uStack_108 != '\0') goto LAB_0d90acc8;
LAB_0d90ad0d:
    func_0x0d9e42d0(auStack_248,&plStack_138,&UNK_011ea907,0xb);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f4901d8;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0d9e5080;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0d9e4d70;
    puStack_278 = &UNK_0d9e5090;
    puStack_270 = &UNK_0d9e5250;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    func_0x0d9e4580(auStack_248);
    uStack_148 = CONCAT71(uStack_148._1_7_,(char)uStack_108);
    pcStack_160 = (code *)CONCAT71(uStack_11f,uStack_120);
    uStack_158 = uStack_118;
    uStack_150 = uStack_110;
    plStack_168 = plStack_128;
    auStack_178._8_8_ = plStack_130;
    auStack_178._0_8_ = plStack_138;
    func_0x048b0bc0(auStack_230);
    func_0x0d9e42d0(auStack_248,auStack_178,&UNK_011ed181,10);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f48dbb0;
    uVar2 = auStack_230._0_8_;
    auStack_230._0_8_ = puVar8;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    pcStack_2a0 = (code *)0x1;
    uStack_298 = 0;
    puStack_290 = &UNK_0d9e58f0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0d9dd920;
    puStack_278 = &UNK_0d9e59b0;
    puStack_270 = &UNK_0d9e5d00;
    uStack_268 = 0;
    auStack_260._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
    uVar2 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_260._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        FUN_0412c2d0(uVar2);
      }
    }
    func_0x0d9e4580(auStack_248);
    func_0x048b0bc0(auStack_230);
    lVar10 = func_0x0ca7a8c0(lStack_f8);
    if (*(int *)(lVar10 + 0x60) != -0x2b3da790) goto LAB_0d90b005;
LAB_0d90afc3:
    lVar10 = *(long *)(lVar10 + 0x68);
    if (lVar10 == 0) goto LAB_0d90b005;
    bVar19 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar15 = lVar10 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar19) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0d9e6180(&plStack_138,param_1,lVar15,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0d90ac8b;
LAB_0d90ace7:
    func_0x0d9e3760(&plStack_138,param_1,&UNK_013299b2,9);
    if ((char)uStack_108 == '\0') goto LAB_0d90ad0d;
LAB_0d90acc8:
    lVar10 = func_0x0ca7a8c0(lStack_f8);
    if (*(int *)(lVar10 + 0x60) == -0x2b3da790) goto LAB_0d90afc3;
LAB_0d90b005:
    func_0x0d9e6180(&plStack_138,param_1,&UNK_0148d0cf,0x11);
  }
  if ((char)uStack_108 != '\0') {
    return;
  }
  plVar9 = plStack_138 + 3;
  lVar10 = func_0x0ca7a8c0(plVar9);
  for (pbVar13 = (byte *)plStack_138[10]; pbVar13 != (byte *)plStack_138[0xb];
      pbVar13 = pbVar13 + 0x38) {
    bVar1 = *pbVar13;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0d90b0ca;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0d90b0ca:
      if ((bVar1 & 1) == 0) {
        pbVar17 = pbVar13 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar13 + 0x10);
      }
      auVar20[0] = -(*pbVar17 == DAT_014eaba0);
      auVar20[1] = -(pbVar17[1] == DAT_014eaba0._1_1_);
      auVar20[2] = -(pbVar17[2] == DAT_014eaba0._2_1_);
      auVar20[3] = -(pbVar17[3] == DAT_014eaba0._3_1_);
      auVar20[4] = -(pbVar17[4] == DAT_014eaba0._4_1_);
      auVar20[5] = -(pbVar17[5] == DAT_014eaba0._5_1_);
      auVar20[6] = -(pbVar17[6] == DAT_014eaba0._6_1_);
      auVar20[7] = -(pbVar17[7] == DAT_014eaba0._7_1_);
      auVar20[8] = -(pbVar17[8] == DAT_014eaba0._8_1_);
      auVar20[9] = -(pbVar17[9] == DAT_014eaba0._9_1_);
      auVar20[10] = -(pbVar17[10] == DAT_014eaba0._10_1_);
      auVar20[0xb] = -(pbVar17[0xb] == DAT_014eaba0._11_1_);
      auVar20[0xc] = -(pbVar17[0xc] == DAT_014eaba0._12_1_);
      auVar20[0xd] = -(pbVar17[0xd] == DAT_014eaba0._13_1_);
      auVar20[0xe] = -(pbVar17[0xe] == DAT_014eaba0._14_1_);
      auVar20[0xf] = -(pbVar17[0xf] == DAT_014eaba0._15_1_);
      auVar21[0] = -(pbVar17[10] == DAT_014e4ff0);
      auVar21[1] = -(pbVar17[0xb] == DAT_014e4ff0._1_1_);
      auVar21[2] = -(pbVar17[0xc] == DAT_014e4ff0._2_1_);
      auVar21[3] = -(pbVar17[0xd] == DAT_014e4ff0._3_1_);
      auVar21[4] = -(pbVar17[0xe] == DAT_014e4ff0._4_1_);
      auVar21[5] = -(pbVar17[0xf] == DAT_014e4ff0._5_1_);
      auVar21[6] = -(pbVar17[0x10] == DAT_014e4ff0._6_1_);
      auVar21[7] = -(pbVar17[0x11] == DAT_014e4ff0._7_1_);
      auVar21[8] = -(pbVar17[0x12] == DAT_014e4ff0._8_1_);
      auVar21[9] = -(pbVar17[0x13] == DAT_014e4ff0._9_1_);
      auVar21[10] = -(pbVar17[0x14] == DAT_014e4ff0._10_1_);
      auVar21[0xb] = -(pbVar17[0x15] == DAT_014e4ff0._11_1_);
      auVar21[0xc] = -(pbVar17[0x16] == DAT_014e4ff0._12_1_);
      auVar21[0xd] = -(pbVar17[0x17] == DAT_014e4ff0._13_1_);
      auVar21[0xe] = -(pbVar17[0x18] == DAT_014e4ff0._14_1_);
      auVar21[0xf] = -(pbVar17[0x19] == DAT_014e4ff0._15_1_);
      auVar21 = auVar21 & auVar20;
      if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar13 == (byte *)plStack_138[0xb]) {
LAB_0d90b0f9:
    if ((int)uStack_110 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0d90b16d;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      auStack_248._0_8_ = func_0x048b0c90(plVar9,lVar10,uStack_110._4_4_,1);
      if (auStack_248._0_8_ == 0) {
        auStack_248 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_248);
        if (auStack_248._0_8_ == 0) goto LAB_0d90b16d;
      }
      if ((*(int *)(auStack_248._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_248._0_8_ + 0x58) != 0)) {
        lVar10 = *(long *)(auStack_248._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0d90b16d:
        lVar10 = 0;
      }
    }
    uStack_2a8 = (long *)&UNK_0488e0b0;
    pcStack_2a0 = (code *)0x0;
    uStack_298 = CONCAT35(uStack_298._5_3_,0x48b5725f);
    uStack_2b8 = (long *)0x0;
    auStack_248 = (undefined1  [16])0x0;
    auStack_230 = ZEXT816(0x488e0b0);
    auStack_220._0_5_ = 0x48b5725f;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    auStack_178._8_8_ = 0x1a;
    auStack_178._0_8_ = 0x21;
    *(ulong *)((long)plVar9 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)plVar9 + 0x12) = uVar2;
    lVar15 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *plVar9 = _DAT_013bbacd;
    plVar9[1] = lVar15;
    *(undefined1 *)((long)plVar9 + 0x1a) = 0;
    plStack_168 = plVar9;
    lVar10 = FUN_048b5060(lVar10,auStack_178);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_248) {
      pcVar11 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar8 = (undefined8 *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar8);
        if (auStack_220[4] != '\0') {
          if (auStack_220[4] == '\x02') {
            (*(code *)auStack_230._0_8_)(5,auStack_248 + 8,puVar8);
          }
          else {
            uVar2 = auStack_248._8_8_;
            auStack_248._8_8_ = 0;
            *puVar8 = uVar2;
          }
        }
      }
      *(undefined8 *)(lVar10 + 0x38) = auStack_230._0_8_;
      *(undefined8 *)(lVar10 + 0x40) = auStack_230._8_8_;
      *(undefined4 *)(lVar10 + 0x48) = auStack_220._0_4_;
      *(char *)(lVar10 + 0x4c) = auStack_220[4];
      pcVar11 = (code *)auStack_230._8_8_;
    }
    if ((auStack_178[0] & 1) != 0) {
      func_0x0412a280(plStack_168,auStack_178._0_8_ & 0xfffffffffffffffe);
      pcVar11 = (code *)auStack_230._8_8_;
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(auStack_248 + 8);
    }
    if (pcStack_2a0 != (code *)0x0) {
      (*pcStack_2a0)(&uStack_2b8);
    }
  }
  else {
    iVar5 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0d90b0f9;
  }
  plVar14 = plStack_138;
  plStack_e8 = plStack_130;
  plStack_e0 = plStack_128;
  plStack_d8 = (long *)CONCAT71(uStack_11f,uStack_120);
  pcStack_d0 = (code *)uStack_118;
  lStack_f8 = CONCAT44(lStack_f8._4_4_,(int)uStack_110);
  uStack_ec = uStack_110._4_4_;
  uStack_b0 = uStack_108;
  uStack_66 = 0x73;
  uStack_68 = 0x6e6f;
  plVar9 = plStack_138 + 3;
  lVar10 = func_0x0ca7a8c0(plVar9);
  pbVar17 = (byte *)plVar14[0xb];
  for (pbVar13 = (byte *)plVar14[10]; pbVar13 != pbVar17; pbVar13 = pbVar13 + 0x38) {
    bVar1 = *pbVar13;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x24) goto LAB_0d90b3fa;
    }
    else if (*(long *)(pbVar13 + 8) == 0x24) {
LAB_0d90b3fa:
      if ((bVar1 & 1) == 0) {
        pbVar18 = pbVar13 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar13 + 0x10);
      }
      iVar5 = func_0x0eee3000(&DAT_014518a9,pbVar18,0x24);
      if (iVar5 == 0) break;
    }
  }
  if (pbVar13 == pbVar17) {
LAB_0d90b427:
    if ((int)lStack_f8 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0d90b49a;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      lVar10 = func_0x048b0c90(plVar9,lVar10,uStack_ec,1);
      if (lVar10 == 0) {
        auStack_248 = ZEXT816(0);
        func_0x048b0d20(auStack_248);
        lVar10 = auStack_248._0_8_;
        if (auStack_248._0_8_ == 0) goto LAB_0d90b49a;
      }
      if ((*(int *)(lVar10 + 0x50) == -0x45dcb126) && (*(long *)(lVar10 + 0x58) != 0)) {
        lVar10 = *(long *)(lVar10 + 0x58) + 0x40;
      }
      else {
LAB_0d90b49a:
        lVar10 = 0;
      }
    }
    uStack_2b8 = (long *)0x0;
    uStack_2a8 = (long *)&UNK_048b4ab0;
    pcStack_2a0 = (code *)&UNK_048b49f0;
    uStack_298 = CONCAT35(uStack_298._5_3_,0x1d33bd9c5);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar8 = 0x69736e656d694414;
    *(undefined2 *)(puVar8 + 1) = uStack_68;
    *(undefined1 *)((long)puVar8 + 10) = uStack_66;
    *(undefined1 *)((long)puVar8 + 0xb) = 0;
    *(undefined4 *)((long)puVar8 + 0xc) = 0;
    puVar8[2] = 0;
    uStack_66 = 0;
    uStack_68 = 0;
    *(undefined2 *)(puVar8 + 3) = 0x700;
    puVar8[4] = 0x10032001a0001;
    puVar8[5] = &UNK_01254d89;
    puVar8[6] = &UNK_01254d89;
    auStack_230._8_8_ = &UNK_048b49f0;
    auStack_230._0_8_ = &UNK_048b4ab0;
    auStack_220._0_5_ = 0x1d33bd9c5;
    uStack_2b8 = (long *)0x0;
    auStack_248._8_8_ = puVar8;
    auStack_248._0_8_ = &UNK_048b46e0;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar2 = _UNK_014518c1;
    auStack_178._8_8_ = 0x24;
    auStack_178._0_8_ = 0x29;
    puVar8[2] = _DAT_014518b9;
    puVar8[3] = uVar2;
    uVar2 = _UNK_014518b1;
    *puVar8 = _DAT_014518a9;
    puVar8[1] = uVar2;
    *(undefined4 *)(puVar8 + 4) = 0x5d797472;
    *(undefined1 *)((long)puVar8 + 0x24) = 0;
    plStack_168 = puVar8;
    lVar10 = FUN_048b5060(lVar10,auStack_178);
    *(undefined **)(lVar10 + 0x20) = &UNK_048b46e0;
    pcVar11 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar10 + 0x20) != auStack_248) {
      puVar8 = (undefined8 *)(lVar10 + 0x28);
      if (*(code **)(lVar10 + 0x40) == (code *)0x0) {
LAB_0d90b670:
        uVar2 = auStack_248._8_8_;
        auStack_248._8_8_ = 0;
        *puVar8 = uVar2;
      }
      else {
        (**(code **)(lVar10 + 0x40))(puVar8);
        if (auStack_220[4] != '\0') {
          if (auStack_220[4] != '\x02') goto LAB_0d90b670;
          (*(code *)auStack_230._0_8_)(5,auStack_248 + 8,puVar8);
        }
      }
      *(undefined8 *)(lVar10 + 0x38) = auStack_230._0_8_;
      *(undefined8 *)(lVar10 + 0x40) = auStack_230._8_8_;
      *(undefined4 *)(lVar10 + 0x48) = auStack_220._0_4_;
      *(char *)(lVar10 + 0x4c) = auStack_220[4];
      pcVar11 = (code *)auStack_230._8_8_;
    }
    if ((auStack_178[0] & 1) != 0) {
      func_0x0412a280(plStack_168,auStack_178._0_8_ & 0xfffffffffffffffe);
      pcVar11 = (code *)auStack_230._8_8_;
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(auStack_248 + 8);
    }
    if (pcStack_2a0 != (code *)0x0) {
      (*pcStack_2a0)(&uStack_2b8);
    }
  }
  else {
    iVar5 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
      FUN_048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar5 == _DAT_0f550754) goto LAB_0d90b427;
  }
  auStack_178._8_8_ = plStack_e8;
  auStack_178._0_8_ = plVar14;
  plStack_168 = plStack_e0;
  pcStack_160 = (code *)plStack_d8;
  uStack_158 = pcStack_d0;
  uStack_150 = (undefined *)CONCAT44(uStack_ec,(int)lStack_f8);
  uStack_148 = uStack_b0;
  if ((DAT_0f6ed810 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6ed810), iVar5 != 0)) {
    func_0x0ca7a560(0xf6ed7f8);
    func_0x0410844d(&DAT_0f6ed810);
  }
  uStack_150 = (undefined *)0x525e4e0600000001;
  lVar10 = auStack_178._0_8_ + 0x18;
  auStack_248._0_8_ = func_0x0ca7a8c0(lVar10);
  auStack_248._8_8_ = lVar10;
  FUN_0ed621a0(auStack_248,uStack_150._4_4_);
  auStack_248._0_2_ = 1;
  auStack_248._8_8_ = auStack_178 + 8;
  uStack_238 = CONCAT44(uStack_238._4_4_,uStack_150._4_4_);
  auStack_230 = (undefined1  [16])0x0;
  auStack_220 = (undefined1  [16])0x0;
  lStack_210 = 0;
  uStack_208 = 0x26;
  uStack_207 = (undefined4)_DAT_0136e43a;
  uStack_203 = (undefined2)((ulong)_DAT_0136e43a >> 0x20);
  uStack_201 = (undefined1)((ulong)_DAT_0136e43a >> 0x30);
  uStack_200 = (undefined1)((ulong)_DAT_0136e43a >> 0x38);
  uStack_1ff = (undefined7)_UNK_0136e442;
  uStack_1f8 = 0x6e6f6973;
  uStack_1f4 = uStack_1f4 & 0xffffff00;
  auStack_1f0 = (undefined1  [16])0x0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  uStack_1c0 = 0x3f600000;
  func_0x048afb10(auStack_1f0,8);
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  auStack_1b8 = (undefined1  [16])0x0;
  uStack_188 = 0xff00;
  uStack_184 = uStack_184 & 0xffffff00;
  uStack_180 = uStack_180 & 0xffffff00;
  uStack_17c = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f48dc98;
  uVar2 = auStack_230._0_8_;
  auStack_230._0_8_ = puVar8;
  if ((long *)uVar2 != (long *)0x0) {
    (**(code **)(*(long *)uVar2 + 8))();
  }
  uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_238);
  plStack_2b0 = (long *)0x0;
  uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
  pcStack_2a0 = (code *)0x1;
  uStack_298 = 0;
  puStack_290 = &UNK_0d9e6c90;
  puStack_288 = &SUB_048b06d0;
  puStack_280 = &UNK_0d9e3180;
  puStack_278 = &UNK_0d9e6d50;
  puStack_270 = &UNK_0d9e6f20;
  uStack_268 = 0;
  auStack_260._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_248._8_8_,&uStack_2b8);
  uVar2 = auStack_260._8_8_;
  if ((long *)auStack_260._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_260._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
      FUN_0412c2d0(uVar2);
    }
  }
  uVar2 = auStack_248._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_2b8 = (long *)CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar9 + 1) = (undefined1  [16])0x0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_2b0 = plVar9 + 3;
  uVar3 = auStack_230._0_8_;
  uVar4 = auStack_230._8_8_;
  auStack_230 = (undefined1  [16])0x0;
  plVar9[3] = uVar3;
  plVar9[4] = uVar4;
  plVar9[7] = lStack_210;
  plVar9[5] = auStack_220._0_8_;
  plVar9[6] = auStack_220._8_8_;
  auStack_220 = (undefined1  [16])0x0;
  lStack_210 = 0;
  plVar9[10] = CONCAT44(uStack_1f4,uStack_1f8);
  plVar9[8] = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT41(uStack_207,uStack_208)));
  plVar9[9] = CONCAT71(uStack_1ff,uStack_200);
  uStack_208 = 0;
  uStack_207 = 0;
  uStack_203 = 0;
  uStack_201 = 0;
  uStack_200 = 0;
  uStack_1ff = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  plVar9[0xb] = auStack_1f0._0_8_;
  plVar9[0xc] = auStack_1f0._8_8_;
  plVar9[0xd] = lStack_1e0;
  auStack_1f0 = (undefined1  [16])0x0;
  lStack_1e0 = 0;
  plVar9[0xe] = lStack_1d8;
  plVar9[0xf] = lStack_1d0;
  plVar9[0x10] = lStack_1c8;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_1c0;
  plVar9[0x12] = auStack_1b8._0_8_;
  plVar9[0x13] = auStack_1b8._8_8_;
  plVar9[0x14] = lStack_1a8;
  auStack_1b8 = (undefined1  [16])0x0;
  lStack_1a8 = 0;
  plVar9[0x17] = lStack_190;
  plVar9[0x15] = lStack_1a0;
  plVar9[0x16] = lStack_198;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_17c,CONCAT43(uStack_180,uStack_184._1_3_));
  plVar9[0x18] = CONCAT44(uStack_184,CONCAT22(uStack_186,uStack_188));
  auStack_a8 = (undefined1  [16])0x0;
  uStack_2a8 = plVar9;
  FUN_048afd20(uVar2,&uStack_2b8);
  plVar9 = uStack_2a8;
  if (uStack_2a8 != (long *)0x0) {
    LOCK();
    plVar14 = uStack_2a8 + 1;
    lVar10 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
      FUN_0412c2d0(plVar9);
    }
  }
  uVar3 = auStack_a8._8_8_;
  if ((long *)auStack_a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_a8._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_a8._8_8_ + 0x10))(auStack_a8._8_8_);
      FUN_0412c2d0(uVar3);
    }
  }
  lVar10 = *(long *)(uVar2 + 0x10);
  iVar5 = *(int *)(uVar2 + 0x1c);
  if (iVar5 == 2) {
    piVar16 = *(int **)(*(long *)(lVar10 + 0x78) + 0x60);
    iVar5 = *piVar16;
    while (iVar5 != *(int *)(uVar2 + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar5 = *piVar16;
    }
    for (; *(long *)(piVar16 + 0xc) != *(long *)(uVar2 + 8); piVar16 = *(int **)(piVar16 + 0xe)) {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) | auStack_248._0_4_ << 0x10;
      }
      goto LAB_0d90bc4d;
    }
    piVar16 = *(int **)(*(long *)(lVar10 + 0x78) + 0x48);
    iVar5 = *piVar16;
    while (iVar5 != *(int *)(uVar2 + 0x18)) {
      piVar16 = piVar16 + 0x1a;
      iVar5 = *piVar16;
    }
  }
  piVar16[4] = piVar16[4] | auStack_248._0_4_ << 0x10;
LAB_0d90bc4d:
  func_0x048b0bc0(auStack_230);
  return;
}



/* ---- referenced strings ----
 * 0x136e43a  minecraft:dimension
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
