/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb96850 (ELF vaddr 0xea96850)
 * Label: caller-of-callee
 * Body:  [[0eb96850, 0eb9691e] [0eb96920, 0eb96962] [0eb96970, 0eb97411] [0eb97420, 0eb9764f]]
 * Ghidra: FUN_0eb96850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb96850(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_328 [16];
  undefined8 uStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined1 uStack_2df;
  undefined6 uStack_2de;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined4 uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined2 uStack_268;
  undefined2 uStack_266;
  uint uStack_264;
  uint uStack_260;
  undefined1 uStack_25c;
  ulong uStack_258;
  long *plStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  ulong uStack_218;
  long *plStack_210;
  long *plStack_208;
  code *pcStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  int iStack_148;
  undefined4 uStack_144;
  char cStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  long *plStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined4 uStack_ee;
  undefined2 uStack_ea;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined4 uStack_ae;
  undefined2 uStack_aa;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  lVar6 = func_0x0c4c8540(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar15 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar12 = lVar6 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar15) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0ec714f0(&lStack_170,param_1,lVar12,uVar10);
  }
  else {
    func_0x0ec714f0(&lStack_170,param_1,&UNK_011c9407,0xe);
  }
  if (cStack_140 != '\0') {
    return;
  }
  lVar12 = lStack_170 + 0x18;
  lVar6 = func_0x0c4c8540(lVar12);
  for (pbVar11 = *(byte **)(lStack_170 + 0x50); pbVar11 != *(byte **)(lStack_170 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eb9697a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0eb9697a:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar11 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar11 + 0x10);
      }
      auVar16[0] = -(*pbVar13 == DAT_014eaba0);
      auVar16[1] = -(pbVar13[1] == DAT_014eaba0._1_1_);
      auVar16[2] = -(pbVar13[2] == DAT_014eaba0._2_1_);
      auVar16[3] = -(pbVar13[3] == DAT_014eaba0._3_1_);
      auVar16[4] = -(pbVar13[4] == DAT_014eaba0._4_1_);
      auVar16[5] = -(pbVar13[5] == DAT_014eaba0._5_1_);
      auVar16[6] = -(pbVar13[6] == DAT_014eaba0._6_1_);
      auVar16[7] = -(pbVar13[7] == DAT_014eaba0._7_1_);
      auVar16[8] = -(pbVar13[8] == DAT_014eaba0._8_1_);
      auVar16[9] = -(pbVar13[9] == DAT_014eaba0._9_1_);
      auVar16[10] = -(pbVar13[10] == DAT_014eaba0._10_1_);
      auVar16[0xb] = -(pbVar13[0xb] == DAT_014eaba0._11_1_);
      auVar16[0xc] = -(pbVar13[0xc] == DAT_014eaba0._12_1_);
      auVar16[0xd] = -(pbVar13[0xd] == DAT_014eaba0._13_1_);
      auVar16[0xe] = -(pbVar13[0xe] == DAT_014eaba0._14_1_);
      auVar16[0xf] = -(pbVar13[0xf] == DAT_014eaba0._15_1_);
      auVar17[0] = -(pbVar13[10] == DAT_014e4ff0);
      auVar17[1] = -(pbVar13[0xb] == DAT_014e4ff0._1_1_);
      auVar17[2] = -(pbVar13[0xc] == DAT_014e4ff0._2_1_);
      auVar17[3] = -(pbVar13[0xd] == DAT_014e4ff0._3_1_);
      auVar17[4] = -(pbVar13[0xe] == DAT_014e4ff0._4_1_);
      auVar17[5] = -(pbVar13[0xf] == DAT_014e4ff0._5_1_);
      auVar17[6] = -(pbVar13[0x10] == DAT_014e4ff0._6_1_);
      auVar17[7] = -(pbVar13[0x11] == DAT_014e4ff0._7_1_);
      auVar17[8] = -(pbVar13[0x12] == DAT_014e4ff0._8_1_);
      auVar17[9] = -(pbVar13[0x13] == DAT_014e4ff0._9_1_);
      auVar17[10] = -(pbVar13[0x14] == DAT_014e4ff0._10_1_);
      auVar17[0xb] = -(pbVar13[0x15] == DAT_014e4ff0._11_1_);
      auVar17[0xc] = -(pbVar13[0x16] == DAT_014e4ff0._12_1_);
      auVar17[0xd] = -(pbVar13[0x17] == DAT_014e4ff0._13_1_);
      auVar17[0xe] = -(pbVar13[0x18] == DAT_014e4ff0._14_1_);
      auVar17[0xf] = -(pbVar13[0x19] == DAT_014e4ff0._15_1_);
      auVar17 = auVar17 & auVar16;
      if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar11 == *(byte **)(lStack_170 + 0x58)) {
LAB_0eb969a9:
    if (iStack_148 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0eb96a19;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_328._0_8_ = func_0x048b0c90(lVar12,lVar6,uStack_144,1);
      if (auStack_328._0_8_ == 0) {
        auStack_328 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_328);
        if (auStack_328._0_8_ == 0) goto LAB_0eb96a19;
      }
      if ((*(int *)(auStack_328._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_328._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_328._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eb96a19:
        lVar6 = 0;
      }
    }
    plStack_208 = (long *)&UNK_0488e0b0;
    pcStack_200 = (code *)0x0;
    uStack_1f8 = CONCAT35(uStack_1f8._5_3_,0x48b5725f);
    uStack_218 = 0;
    auStack_328 = (undefined1  [16])0x0;
    uStack_310 = (code *)&UNK_0488e0b0;
    pcStack_308 = (code *)0x0;
    uStack_300 = (undefined *)CONCAT35(uStack_300._5_3_,0x48b5725f);
    puStack_248 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_248 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_258 = 0x21;
    plStack_250 = (long *)0x1a;
    *(ulong *)((long)puStack_248 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_248 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_248 = _DAT_013bbacd;
    puStack_248[1] = uVar3;
    *(undefined1 *)((long)puStack_248 + 0x1a) = 0;
    lVar6 = FUN_048b5060(lVar6,&uStack_258);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_328) {
      pcVar7 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar14 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar14);
        if (uStack_300._4_1_ != '\0') {
          if (uStack_300._4_1_ == '\x02') {
            (*uStack_310)(5,auStack_328 + 8,puVar14);
          }
          else {
            uVar3 = auStack_328._8_8_;
            auStack_328._8_8_ = 0;
            *puVar14 = uVar3;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = uStack_310;
      *(code **)(lVar6 + 0x40) = pcStack_308;
      *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_300;
      *(char *)(lVar6 + 0x4c) = uStack_300._4_1_;
      pcVar7 = pcStack_308;
    }
    if ((uStack_258 & 1) != 0) {
      func_0x0412a280(puStack_248,uStack_258 & 0xfffffffffffffffe);
      pcVar7 = pcStack_308;
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(auStack_328 + 8);
    }
    if (pcStack_200 != (code *)0x0) {
      (*pcStack_200)(&uStack_218);
    }
  }
  else {
    iVar4 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0eb969a9;
  }
  uStack_178 = CONCAT71(uStack_13f,cStack_140);
  uStack_48 = uStack_150;
  uStack_58 = uStack_160;
  uStack_50 = uStack_158;
  lStack_68 = lStack_170;
  uStack_60 = uStack_168;
  uStack_188 = uStack_150;
  lStack_1a8 = lStack_170;
  uStack_1a0 = uStack_168;
  uStack_198 = uStack_160;
  uStack_190 = uStack_158;
  uStack_180 = 0x1e1bc4d500000004;
  if ((DAT_0f6e7000 == '\0') && (iVar4 = func_0x04108328(&DAT_0f6e7000), iVar4 != 0)) {
    func_0x0c4c84d0(0xf6e6fe8);
    func_0x0410844d(&DAT_0f6e7000);
  }
  auStack_328._0_4_ = uStack_180._4_4_;
  auStack_328._8_8_ = 0;
  uStack_318 = (long *)((ulong)uStack_318._4_4_ << 0x20);
  uStack_310 = (code *)0x1;
  pcStack_308 = (code *)&SUB_048aead0;
  uStack_300 = &UNK_079717a0;
  puStack_2f8 = &UNK_0ec71d90;
  lStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2df = 0;
  uStack_2de = 0;
  lStack_2d8 = 0;
  func_0x049057f0(&uStack_1a0,auStack_328);
  FUN_048aea50(auStack_328);
  plStack_208 = (long *)uStack_190;
  pcStack_200 = (code *)uStack_188;
  uStack_218 = uStack_1a0;
  plStack_210 = (long *)uStack_198;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f0126a0;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551bc8), iVar4 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_328._0_4_ = _DAT_0f551bb4;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plVar8[3] = (long)puVar14;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  auStack_328._8_8_ = plVar8 + 3;
  uStack_258 = 0;
  plStack_250 = (long *)0x0;
  uStack_318 = plVar8;
  FUN_048afd20(&uStack_218,auStack_328);
  plVar8 = uStack_318;
  if (uStack_318 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_318 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_318 + 0x10))(uStack_318);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_250 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      FUN_0412c2d0(plVar8);
    }
  }
  lStack_a8 = lStack_1a8;
  uStack_a0 = uStack_1a0;
  uStack_98 = uStack_198;
  uStack_90 = uStack_190;
  uStack_88 = uStack_188;
  uStack_80 = uStack_180;
  uStack_78 = uStack_178;
  uStack_ae = 0;
  uStack_aa = 0;
  uStack_e0 = 0xffffffffffffffff;
  uStack_d8 = 0;
  uStack_d0 = 0xff;
  puStack_e8 = &UNK_0f0edc68;
  uStack_c8 = _DAT_014e9960;
  uStack_c0 = _UNK_014e9968;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x0eb97710(&uStack_258,&lStack_a8,&puStack_e8);
  func_0x0ec71a30(auStack_328,uStack_258 + 0x18);
  if (uStack_310._4_4_ == 2) {
    piVar9 = *(int **)(uStack_318[0xf] + 0x60);
    iVar4 = *piVar9;
    while (iVar4 != (int)uStack_310) {
      piVar9 = piVar9 + 0x16;
      iVar4 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while (lVar6 != auStack_328._8_8_) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
LAB_0eb96f0f:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (uStack_310._4_4_ == 1) {
      piVar9 = *(int **)(uStack_318[0xf] + 0x48);
      iVar4 = *piVar9;
      while (iVar4 != (int)uStack_310) {
        piVar9 = piVar9 + 0x1a;
        iVar4 = *piVar9;
      }
      goto LAB_0eb96f0f;
    }
    if (uStack_310._4_4_ == 0) {
      *(uint *)(uStack_318 + 3) = *(uint *)(uStack_318 + 3) | 0x40000;
    }
  }
  if ((DAT_0f6e7000 == '\0') && (iVar4 = func_0x04108328(&DAT_0f6e7000), iVar4 != 0)) {
    func_0x0c4c84d0(0xf6e6fe8);
    func_0x0410844d(&DAT_0f6e7000);
  }
  uStack_230 = 0x2fa0fd0d00000001;
  lVar6 = uStack_258 + 0x18;
  auStack_328._0_8_ = func_0x0c4c8540(lVar6);
  auStack_328._8_8_ = lVar6;
  FUN_0ed621a0(auStack_328,uStack_230._4_4_);
  auStack_328._0_2_ = 0x10;
  auStack_328._8_8_ = &plStack_250;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,uStack_230._4_4_);
  uStack_310 = (code *)0x0;
  pcStack_308 = (code *)0x0;
  uStack_300 = (undefined *)0x0;
  puStack_2f8 = (undefined *)0x0;
  lStack_2f0 = 0;
  uStack_2e8 = 0x72756410;
  uStack_2e4 = 0x6f697461;
  uStack_2e0 = 0x6e;
  uStack_2df = 0;
  lStack_2d0 = 0;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  uStack_2a0 = 0x3f600000;
  func_0x048afb10(&lStack_2d0,8);
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  uStack_268 = 0xff00;
  uStack_264 = uStack_264 & 0xffffff00;
  uStack_260 = uStack_260 & 0xffffff00;
  uStack_25c = 0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f0126a0;
  if (uStack_310 != (code *)0x0) {
    lVar6 = *(long *)uStack_310;
    uStack_310 = (code *)puVar14;
    (**(code **)(lVar6 + 8))();
    puVar14 = (undefined8 *)uStack_310;
  }
  uStack_310 = (code *)puVar14;
  uStack_218 = CONCAT44(uStack_218._4_4_,(undefined4)uStack_318);
  plStack_210 = (long *)0x0;
  plStack_208 = (long *)((ulong)plStack_208 & 0xffffffff00000000);
  pcStack_200 = (code *)0x1;
  uStack_1f8 = 0;
  puStack_1f0 = &UNK_05daeda0;
  puStack_1e8 = &SUB_048b06d0;
  puStack_1e0 = &SUB_05daea90;
  puStack_1d8 = &UNK_0ec71f80;
  puStack_1d0 = &UNK_0ec720e0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  func_0x048b05a0(auStack_328._8_8_,&uStack_218);
  plVar8 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1b8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      FUN_0412c2d0(plVar8);
    }
  }
  uVar3 = auStack_328._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_218 = CONCAT44(uStack_218._4_4_,_DAT_0f550a0c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  pcVar7 = pcStack_308;
  puVar14 = (undefined8 *)uStack_310;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_210 = plVar8 + 3;
  uStack_310 = (code *)0x0;
  pcStack_308 = (code *)0x0;
  plVar8[3] = (long)puVar14;
  plVar8[4] = (long)pcVar7;
  plVar8[7] = lStack_2f0;
  plVar8[5] = (long)uStack_300;
  plVar8[6] = (long)puStack_2f8;
  uStack_300 = (undefined *)0x0;
  puStack_2f8 = (undefined *)0x0;
  lStack_2f0 = 0;
  plVar8[10] = lStack_2d8;
  plVar8[8] = CONCAT44(uStack_2e4,uStack_2e8);
  plVar8[9] = CONCAT62(uStack_2de,CONCAT11(uStack_2df,uStack_2e0));
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2df = 0;
  uStack_2de = 0;
  lStack_2d8 = 0;
  plVar8[0xb] = lStack_2d0;
  plVar8[0xc] = lStack_2c8;
  plVar8[0xd] = lStack_2c0;
  lStack_2d0 = 0;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  plVar8[0xe] = lStack_2b8;
  plVar8[0xf] = lStack_2b0;
  plVar8[0x10] = lStack_2a8;
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_2a0;
  plVar8[0x12] = lStack_298;
  plVar8[0x13] = lStack_290;
  plVar8[0x14] = lStack_288;
  lStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  plVar8[0x17] = lStack_270;
  plVar8[0x15] = lStack_280;
  plVar8[0x16] = lStack_278;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_25c,CONCAT43(uStack_260,uStack_264._1_3_));
  plVar8[0x18] = CONCAT44(uStack_264,CONCAT22(uStack_266,uStack_268));
  uStack_138 = 0;
  plStack_130 = (long *)0x0;
  plStack_208 = plVar8;
  FUN_048afd20(uVar3,&uStack_218);
  plVar8 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_208 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_130 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      FUN_0412c2d0(plVar8);
    }
  }
  lVar6 = *(long *)(uVar3 + 0x10);
  iVar4 = *(int *)(uVar3 + 0x1c);
  if (iVar4 == 2) {
    piVar9 = *(int **)(*(long *)(lVar6 + 0x78) + 0x60);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)(uVar3 + 0x18)) {
      piVar9 = piVar9 + 0x16;
      iVar4 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)(uVar3 + 8); piVar9 = *(int **)(piVar9 + 0xe)) {
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | auStack_328._0_4_ << 0x10;
      }
      goto LAB_0eb9742d;
    }
    piVar9 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)(uVar3 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar4 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | auStack_328._0_4_ << 0x10;
LAB_0eb9742d:
  puStack_1e8 = (undefined1 *)CONCAT71(puStack_1e8._1_7_,uStack_228);
  uStack_1f8 = uStack_238;
  puStack_1f0 = (undefined *)uStack_230;
  plStack_208 = puStack_248;
  pcStack_200 = (code *)uStack_240;
  uStack_218 = uStack_258;
  plStack_210 = plStack_250;
  func_0x048b0bc0(&uStack_310);
  uStack_ee = 0;
  uStack_ea = 0;
  uStack_120 = 0xffffffffffffffff;
  uStack_118 = 0;
  uStack_110 = 0xff;
  puStack_128 = &UNK_0f0edc68;
  uStack_108 = _DAT_014e9960;
  uStack_100 = _UNK_014e9968;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x0eb97710(auStack_328,&uStack_218,&puStack_128);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
