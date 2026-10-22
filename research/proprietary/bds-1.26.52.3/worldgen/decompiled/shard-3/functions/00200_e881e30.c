/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe981e30 (ELF vaddr 0xe881e30)
 * Label: caller-of-callee
 * Body:  [[0e981e30, 0e981f01] [0e981f10, 0e981f52] [0e981f60, 0e982981] [0e982990, 0e982b04]]
 * Ghidra: FUN_0e981e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e981e30(long param_1)

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
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined6 uStack_20e;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined4 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined2 uStack_198;
  undefined2 uStack_196;
  uint uStack_194;
  uint uStack_190;
  undefined1 uStack_18c;
  ulong uStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  ulong uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  char cStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x0c1d9020();
  lVar6 = func_0x0e2f6e00(param_1 + 0x18);
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
    func_0x0ea14d50(&uStack_a0,param_1,lVar12,uVar10);
  }
  else {
    func_0x0ea14d50(&uStack_a0,param_1,&UNK_012e772f,0xe);
  }
  if (cStack_70 != '\0') {
    return;
  }
  lVar12 = uStack_a0 + 0x18;
  lVar6 = func_0x0e2f6e00(lVar12);
  for (pbVar11 = *(byte **)(uStack_a0 + 0x50); pbVar11 != *(byte **)(uStack_a0 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e981f6a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e981f6a:
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
  if (pbVar11 == *(byte **)(uStack_a0 + 0x58)) {
LAB_0e981f99:
    if (iStack_78 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0e982009;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_258._0_8_ = func_0x048b0c90(lVar12,lVar6,uStack_74,1);
      if (auStack_258._0_8_ == 0) {
        auStack_258 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_258);
        if (auStack_258._0_8_ == 0) goto LAB_0e982009;
      }
      if ((*(int *)(auStack_258._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_258._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_258._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e982009:
        lVar6 = 0;
      }
    }
    plStack_138 = (long *)&UNK_0488e0b0;
    pcStack_130 = (code *)0x0;
    uStack_128 = CONCAT35(uStack_128._5_3_,0x48b5725f);
    plStack_148 = (long *)0x0;
    auStack_258 = (undefined1  [16])0x0;
    uStack_240 = (code *)&UNK_0488e0b0;
    pcStack_238 = (code *)0x0;
    uStack_230 = (undefined *)CONCAT35(uStack_230._5_3_,0x48b5725f);
    puStack_178 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_178 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_188 = 0x21;
    plStack_180 = (long *)0x1a;
    *(ulong *)((long)puStack_178 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_178 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_178 = _DAT_013bbacd;
    puStack_178[1] = uVar3;
    *(undefined1 *)((long)puStack_178 + 0x1a) = 0;
    lVar6 = func_0x048b5060(lVar6,&uStack_188);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_258) {
      pcVar7 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar14 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar14);
        if (uStack_230._4_1_ != '\0') {
          if (uStack_230._4_1_ == '\x02') {
            (*uStack_240)(5,auStack_258 + 8,puVar14);
          }
          else {
            uVar3 = auStack_258._8_8_;
            auStack_258._8_8_ = 0;
            *puVar14 = uVar3;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = uStack_240;
      *(code **)(lVar6 + 0x40) = pcStack_238;
      *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_230;
      *(char *)(lVar6 + 0x4c) = uStack_230._4_1_;
      pcVar7 = pcStack_238;
    }
    if ((uStack_188 & 1) != 0) {
      func_0x0412a280(puStack_178,uStack_188 & 0xfffffffffffffffe);
      pcVar7 = pcStack_238;
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(auStack_258 + 8);
    }
    if (pcStack_130 != (code *)0x0) {
      (*pcStack_130)(&plStack_148);
    }
  }
  else {
    iVar4 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e981f99;
  }
  uStack_a8 = CONCAT71(uStack_6f,cStack_70);
  uStack_38 = uStack_80;
  uStack_48 = uStack_90;
  uStack_40 = uStack_88;
  uStack_58 = uStack_a0;
  plStack_50 = plStack_98;
  uStack_b8 = uStack_80;
  uStack_d8 = uStack_a0;
  plStack_d0 = plStack_98;
  uStack_c8 = uStack_90;
  uStack_c0 = uStack_88;
  uStack_b0 = 0x1e1bc4d500000004;
  if ((DAT_0f74fe80 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74fe80), iVar4 != 0)) {
    func_0x0e2f6d90(0xf74fe68);
    func_0x0410844d(&DAT_0f74fe80);
  }
  auStack_258._0_4_ = uStack_b0._4_4_;
  auStack_258._8_8_ = 0;
  uStack_248 = (long *)((ulong)uStack_248._4_4_ << 0x20);
  uStack_240 = (code *)0x3;
  pcStack_238 = (code *)&SUB_048aead0;
  uStack_230 = &UNK_0e394330;
  puStack_228 = &UNK_0ea15650;
  lStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_20f = 0;
  uStack_20e = 0;
  lStack_208 = 0;
  func_0x049057f0(&plStack_d0,auStack_258);
  func_0x048aea50(auStack_258);
  plStack_138 = (long *)uStack_c0;
  pcStack_130 = (code *)uStack_b8;
  plStack_148 = plStack_d0;
  plStack_140 = (long *)uStack_c8;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar14 = &UNK_0ef44b00;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551bc8), iVar4 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_258._0_4_ = _DAT_0f551bb4;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plVar8[3] = (long)puVar14;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  auStack_258._8_8_ = plVar8 + 3;
  uStack_188 = 0;
  plStack_180 = (long *)0x0;
  uStack_248 = plVar8;
  func_0x048afd20(&plStack_148,auStack_258);
  plVar8 = uStack_248;
  if (uStack_248 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_248 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_248 + 0x10))(uStack_248);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      func_0x0412c2d0(plVar8);
    }
  }
  uStack_188 = uStack_d8;
  plStack_180 = plStack_d0;
  puStack_178 = (undefined8 *)uStack_c8;
  uStack_170 = uStack_c0;
  uStack_168 = uStack_b8;
  uStack_160 = uStack_b0;
  uStack_158 = uStack_a8;
  func_0x0ea15290(auStack_258,uStack_d8 + 0x18);
  if (uStack_240._4_4_ == 2) {
    piVar9 = *(int **)(uStack_248[0xf] + 0x60);
    iVar4 = *piVar9;
    while (iVar4 != (int)uStack_240) {
      piVar9 = piVar9 + 0x16;
      iVar4 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while (lVar6 != auStack_258._8_8_) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
LAB_0e98247f:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (uStack_240._4_4_ == 1) {
      piVar9 = *(int **)(uStack_248[0xf] + 0x48);
      iVar4 = *piVar9;
      while (iVar4 != (int)uStack_240) {
        piVar9 = piVar9 + 0x1a;
        iVar4 = *piVar9;
      }
      goto LAB_0e98247f;
    }
    if (uStack_240._4_4_ == 0) {
      *(uint *)(uStack_248 + 3) = *(uint *)(uStack_248 + 3) | 0x40000;
    }
  }
  if ((DAT_0f74fe80 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74fe80), iVar4 != 0)) {
    func_0x0e2f6d90(0xf74fe68);
    func_0x0410844d(&DAT_0f74fe80);
  }
  uStack_160 = 0x99108c8500000001;
  lVar6 = uStack_188 + 0x18;
  auStack_258._0_8_ = func_0x0e2f6e00(lVar6);
  auStack_258._8_8_ = lVar6;
  func_0x0ed621a0(auStack_258,uStack_160._4_4_);
  auStack_258._0_2_ = 0x10;
  auStack_258._8_8_ = &plStack_180;
  uStack_248 = (long *)CONCAT44(uStack_248._4_4_,uStack_160._4_4_);
  uStack_240 = (code *)0x0;
  pcStack_238 = (code *)0x0;
  uStack_230 = (undefined *)0x0;
  puStack_228 = (undefined *)0x0;
  lStack_220 = 0;
  uStack_218 = 0x78657410;
  uStack_214 = 0x65727574;
  uStack_210 = 0x73;
  uStack_20f = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0x3f600000;
  func_0x048afb10(&lStack_200,8);
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_198 = 0xff00;
  uStack_194 = uStack_194 & 0xffffff00;
  uStack_190 = uStack_190 & 0xffffff00;
  uStack_18c = 0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f360f38;
  if (uStack_240 != (code *)0x0) {
    lVar6 = *(long *)uStack_240;
    uStack_240 = (code *)puVar14;
    (**(code **)(lVar6 + 8))();
    puVar14 = (undefined8 *)uStack_240;
  }
  uStack_240 = (code *)puVar14;
  plStack_148 = (long *)CONCAT44(plStack_148._4_4_,(undefined4)uStack_248);
  plStack_140 = (long *)0x0;
  plStack_138 = (long *)((ulong)plStack_138 & 0xffffffff00000000);
  pcStack_130 = (code *)0x1;
  uStack_128 = 0;
  puStack_120 = &UNK_0c37a940;
  puStack_118 = &SUB_048b06d0;
  puStack_110 = &UNK_0c3783f0;
  puStack_108 = &UNK_0ea15fb0;
  puStack_100 = &UNK_0ea16190;
  uStack_f8 = 0;
  uStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  FUN_048b05a0(auStack_258._8_8_,&plStack_148);
  plVar8 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_e8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      func_0x0412c2d0(plVar8);
    }
  }
  uVar3 = auStack_258._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plStack_148 = (long *)CONCAT44(plStack_148._4_4_,_DAT_0f550a0c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  pcVar7 = pcStack_238;
  puVar14 = (undefined8 *)uStack_240;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_140 = plVar8 + 3;
  uStack_240 = (code *)0x0;
  pcStack_238 = (code *)0x0;
  plVar8[3] = (long)puVar14;
  plVar8[4] = (long)pcVar7;
  plVar8[7] = lStack_220;
  plVar8[5] = (long)uStack_230;
  plVar8[6] = (long)puStack_228;
  uStack_230 = (undefined *)0x0;
  puStack_228 = (undefined *)0x0;
  lStack_220 = 0;
  plVar8[10] = lStack_208;
  plVar8[8] = CONCAT44(uStack_214,uStack_218);
  plVar8[9] = CONCAT62(uStack_20e,CONCAT11(uStack_20f,uStack_210));
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_20f = 0;
  uStack_20e = 0;
  lStack_208 = 0;
  plVar8[0xb] = lStack_200;
  plVar8[0xc] = lStack_1f8;
  plVar8[0xd] = lStack_1f0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  plVar8[0xe] = lStack_1e8;
  plVar8[0xf] = lStack_1e0;
  plVar8[0x10] = lStack_1d8;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_1d0;
  plVar8[0x12] = lStack_1c8;
  plVar8[0x13] = lStack_1c0;
  plVar8[0x14] = lStack_1b8;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  plVar8[0x17] = lStack_1a0;
  plVar8[0x15] = lStack_1b0;
  plVar8[0x16] = lStack_1a8;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_18c,CONCAT43(uStack_190,uStack_194._1_3_));
  plVar8[0x18] = CONCAT44(uStack_194,CONCAT22(uStack_196,uStack_198));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  plStack_138 = plVar8;
  func_0x048afd20(uVar3,&plStack_148);
  plVar8 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar8);
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
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | auStack_258._0_4_ << 0x10;
      }
      goto LAB_0e98299d;
    }
    piVar9 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)(uVar3 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar4 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | auStack_258._0_4_ << 0x10;
LAB_0e98299d:
  func_0x048b0bc0(&uStack_240);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
