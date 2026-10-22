/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9b5110 (ELF vaddr 0xe8b5110)
 * Label: caller-of-callee
 * Body:  [[0e9b5110, 0e9b51e5] [0e9b51f0, 0e9b5232] [0e9b5240, 0e9b5bf6]]
 * Ghidra: FUN_0e9b5110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9b5110(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uStack_358;
  long *plStack_350;
  undefined8 *puStack_348;
  code *pcStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined1 *puStack_328;
  undefined1 *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined4 uStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  ulong uStack_2e8;
  long *plStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 auStack_2a8 [16];
  undefined8 uStack_298;
  code *pcStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  int iStack_178;
  undefined4 uStack_174;
  char cStack_170;
  undefined7 uStack_16f;
  long lStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined1 uStack_78;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  func_0x0eb67df0();
  lVar6 = func_0x0d4697b0(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar14 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar11 = lVar6 + 9;
    if (bVar14) {
      lVar11 = *(long *)(lVar6 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar14) {
      uVar9 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0eb611a0(&lStack_1a0,param_1,lVar11,uVar9);
  }
  else {
    func_0x0eb611a0(&lStack_1a0,param_1,&UNK_012a0015,0xe);
  }
  if (cStack_170 != '\0') {
    return;
  }
  lVar11 = lStack_1a0 + 0x18;
  lVar6 = func_0x0d4697b0(lVar11);
  for (pbVar10 = *(byte **)(lStack_1a0 + 0x50); pbVar10 != *(byte **)(lStack_1a0 + 0x58);
      pbVar10 = pbVar10 + 0x38) {
    bVar2 = *pbVar10;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e9b524a;
    }
    else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0e9b524a:
      if ((bVar2 & 1) == 0) {
        pbVar12 = pbVar10 + 1;
      }
      else {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      auVar15[0] = -(*pbVar12 == DAT_014eaba0);
      auVar15[1] = -(pbVar12[1] == DAT_014eaba0._1_1_);
      auVar15[2] = -(pbVar12[2] == DAT_014eaba0._2_1_);
      auVar15[3] = -(pbVar12[3] == DAT_014eaba0._3_1_);
      auVar15[4] = -(pbVar12[4] == DAT_014eaba0._4_1_);
      auVar15[5] = -(pbVar12[5] == DAT_014eaba0._5_1_);
      auVar15[6] = -(pbVar12[6] == DAT_014eaba0._6_1_);
      auVar15[7] = -(pbVar12[7] == DAT_014eaba0._7_1_);
      auVar15[8] = -(pbVar12[8] == DAT_014eaba0._8_1_);
      auVar15[9] = -(pbVar12[9] == DAT_014eaba0._9_1_);
      auVar15[10] = -(pbVar12[10] == DAT_014eaba0._10_1_);
      auVar15[0xb] = -(pbVar12[0xb] == DAT_014eaba0._11_1_);
      auVar15[0xc] = -(pbVar12[0xc] == DAT_014eaba0._12_1_);
      auVar15[0xd] = -(pbVar12[0xd] == DAT_014eaba0._13_1_);
      auVar15[0xe] = -(pbVar12[0xe] == DAT_014eaba0._14_1_);
      auVar15[0xf] = -(pbVar12[0xf] == DAT_014eaba0._15_1_);
      auVar16[0] = -(pbVar12[10] == DAT_014e4ff0);
      auVar16[1] = -(pbVar12[0xb] == DAT_014e4ff0._1_1_);
      auVar16[2] = -(pbVar12[0xc] == DAT_014e4ff0._2_1_);
      auVar16[3] = -(pbVar12[0xd] == DAT_014e4ff0._3_1_);
      auVar16[4] = -(pbVar12[0xe] == DAT_014e4ff0._4_1_);
      auVar16[5] = -(pbVar12[0xf] == DAT_014e4ff0._5_1_);
      auVar16[6] = -(pbVar12[0x10] == DAT_014e4ff0._6_1_);
      auVar16[7] = -(pbVar12[0x11] == DAT_014e4ff0._7_1_);
      auVar16[8] = -(pbVar12[0x12] == DAT_014e4ff0._8_1_);
      auVar16[9] = -(pbVar12[0x13] == DAT_014e4ff0._9_1_);
      auVar16[10] = -(pbVar12[0x14] == DAT_014e4ff0._10_1_);
      auVar16[0xb] = -(pbVar12[0x15] == DAT_014e4ff0._11_1_);
      auVar16[0xc] = -(pbVar12[0x16] == DAT_014e4ff0._12_1_);
      auVar16[0xd] = -(pbVar12[0x17] == DAT_014e4ff0._13_1_);
      auVar16[0xe] = -(pbVar12[0x18] == DAT_014e4ff0._14_1_);
      auVar16[0xf] = -(pbVar12[0x19] == DAT_014e4ff0._15_1_);
      auVar16 = auVar16 & auVar15;
      if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar10 != *(byte **)(lStack_1a0 + 0x58)) {
    iVar4 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 != _DAT_0f550ac4) goto LAB_0e9b54a9;
  }
  if (iStack_178 == 0) {
    if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
    goto LAB_0e9b52f6;
    lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
  }
  else {
    auStack_2a8._0_8_ = func_0x048b0c90(lVar11,lVar6,uStack_174,1);
    if (auStack_2a8._0_8_ == 0) {
      auStack_2a8 = (undefined1  [16])0x0;
      FUN_048b0d20(auStack_2a8);
      if (auStack_2a8._0_8_ == 0) goto LAB_0e9b52f6;
    }
    if ((*(int *)(auStack_2a8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_2a8._0_8_ + 0x58) != 0)) {
      lVar6 = *(long *)(auStack_2a8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e9b52f6:
      lVar6 = 0;
    }
  }
  puStack_348 = (undefined8 *)&UNK_0488e0b0;
  pcStack_340 = (code *)0x0;
  uStack_338 = CONCAT35(uStack_338._5_3_,0x48b5725f);
  uStack_358 = 0;
  auStack_2a8 = (undefined1  [16])0x0;
  pcStack_290 = (code *)&UNK_0488e0b0;
  pcStack_288 = (code *)0x0;
  uStack_280 = (undefined *)CONCAT35(uStack_280._5_3_,0x48b5725f);
  puStack_2d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_2d8 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013bbadf;
  uStack_2e8 = 0x21;
  plStack_2e0 = (long *)0x1a;
  *(ulong *)((long)puStack_2d8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puStack_2d8 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puStack_2d8 = _DAT_013bbacd;
  puStack_2d8[1] = uVar3;
  *(undefined1 *)((long)puStack_2d8 + 0x1a) = 0;
  lVar6 = func_0x048b5060(lVar6,&uStack_2e8);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  if ((undefined1 *)(lVar6 + 0x20) == auStack_2a8) {
    pcVar8 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
      puVar13 = (undefined8 *)(lVar6 + 0x28);
      (**(code **)(lVar6 + 0x40))(puVar13);
      if (uStack_280._4_1_ != '\0') {
        if (uStack_280._4_1_ == '\x02') {
          (*pcStack_290)(5,auStack_2a8 + 8,puVar13);
        }
        else {
          uVar3 = auStack_2a8._8_8_;
          auStack_2a8._8_8_ = 0;
          *puVar13 = uVar3;
        }
      }
    }
    *(code **)(lVar6 + 0x38) = pcStack_290;
    *(code **)(lVar6 + 0x40) = pcStack_288;
    *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_280;
    *(char *)(lVar6 + 0x4c) = uStack_280._4_1_;
    pcVar8 = pcStack_288;
  }
  if ((uStack_2e8 & 1) != 0) {
    func_0x0412a280(puStack_2d8,uStack_2e8 & 0xfffffffffffffffe);
    pcVar8 = pcStack_288;
  }
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(auStack_2a8 + 8);
  }
  if (pcStack_340 != (code *)0x0) {
    (*pcStack_340)(&uStack_358);
  }
LAB_0e9b54a9:
  uStack_1a8 = CONCAT71(uStack_16f,cStack_170);
  uStack_48 = uStack_180;
  uStack_58 = uStack_190;
  uStack_50 = uStack_188;
  lStack_68 = lStack_1a0;
  uStack_60 = uStack_198;
  uStack_1b8 = uStack_180;
  lStack_1d8 = lStack_1a0;
  uStack_1d0 = uStack_198;
  uStack_1c8 = uStack_190;
  uStack_1c0 = uStack_188;
  uStack_1b0 = 0x1e1bc4d500000004;
  if ((DAT_0f720310 == '\0') && (iVar4 = func_0x04108328(&DAT_0f720310), iVar4 != 0)) {
    func_0x0d469740(0xf7202f8);
    func_0x0410844d(&DAT_0f720310);
  }
  auStack_2a8._0_4_ = uStack_1b0._4_4_;
  auStack_2a8._8_8_ = 0;
  uStack_298 = (long *)((ulong)uStack_298._4_4_ << 0x20);
  pcStack_290 = (code *)0x1;
  pcStack_288 = (code *)&SUB_048aead0;
  uStack_280 = &UNK_0eb61a60;
  puStack_278 = &UNK_0eb61b20;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  func_0x049057f0(&uStack_1d0,auStack_2a8);
  func_0x048aea50(auStack_2a8);
  puStack_348 = (undefined8 *)uStack_1c0;
  pcStack_340 = (code *)uStack_1b8;
  uStack_358 = uStack_1d0;
  plStack_350 = (long *)uStack_1c8;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4d7d60;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551bc8), iVar4 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_2a8._0_4_ = _DAT_0f551bb4;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef46c48;
  plVar7[3] = (long)puVar13;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0xff;
  auStack_2a8._8_8_ = plVar7 + 3;
  uStack_2e8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_298 = plVar7;
  func_0x048afd20(&uStack_358,auStack_2a8);
  plVar7 = uStack_298;
  if (uStack_298 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_298 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_298 + 0x10))(uStack_298);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_2e0;
  if (plStack_2e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2e0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
      func_0x0412c2d0(plVar7);
    }
  }
  lStack_168 = lStack_1d8;
  uStack_160 = uStack_1d0;
  uStack_158 = uStack_1c8;
  uStack_150 = uStack_1c0;
  uStack_148 = uStack_1b8;
  uStack_140 = uStack_1b0;
  uStack_138 = uStack_1a8;
  func_0x0eb61d20(auStack_2a8,&lStack_168,&UNK_011fc8ff,9);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0ef46ce8;
  if (pcStack_290 != (code *)0x0) {
    lVar6 = *(long *)pcStack_290;
    pcStack_290 = pcVar8;
    (**(code **)(lVar6 + 8))();
    pcVar8 = pcStack_290;
  }
  pcStack_290 = pcVar8;
  uStack_358 = CONCAT44(uStack_358._4_4_,(undefined4)uStack_298);
  plStack_350 = (long *)0x0;
  puStack_348 = (undefined8 *)((ulong)puStack_348 & 0xffffffff00000000);
  pcStack_340 = (code *)0x1;
  uStack_338 = 0;
  puStack_330 = &UNK_0490ce30;
  puStack_328 = &SUB_048b06d0;
  puStack_320 = &SUB_0490cb20;
  puStack_318 = &UNK_0eb62210;
  puStack_310 = &UNK_0eb62370;
  uStack_308 = 0;
  uStack_300 = 0;
  plStack_2f8 = (long *)0x0;
  FUN_048b05a0(auStack_2a8._8_8_,&uStack_358);
  plVar7 = plStack_2f8;
  if (plStack_2f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2f8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0eb61f10(auStack_2a8);
  uStack_78 = (undefined1)uStack_138;
  uStack_88 = uStack_148;
  uStack_80 = uStack_140;
  uStack_98 = uStack_158;
  uStack_90 = uStack_150;
  lStack_a8 = lStack_168;
  uStack_a0 = uStack_160;
  func_0x048b0bc0(&pcStack_290);
  uStack_ae = 0;
  uStack_aa = 0;
  uStack_e0 = 0xffffffffffffffff;
  uStack_d8 = 0;
  uStack_d0 = 0xff;
  puStack_e8 = &UNK_0f0edc68;
  uStack_c8 = _DAT_014e4bb0;
  uStack_c0 = _UNK_014e4bb8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x0e9bcee0(&uStack_2e8,&lStack_a8,&puStack_e8);
  func_0x0eb61d20(auStack_2a8,&uStack_2e8,&UNK_01406c8c,0xb);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0ef46ce8;
  if (pcStack_290 != (code *)0x0) {
    lVar6 = *(long *)pcStack_290;
    pcStack_290 = pcVar8;
    (**(code **)(lVar6 + 8))();
    pcVar8 = pcStack_290;
  }
  pcStack_290 = pcVar8;
  uStack_358 = CONCAT44(uStack_358._4_4_,(undefined4)uStack_298);
  plStack_350 = (long *)0x0;
  puStack_348 = (undefined8 *)((ulong)puStack_348 & 0xffffffff00000000);
  pcStack_340 = (code *)0x1;
  uStack_338 = 0;
  puStack_330 = &UNK_0490ce30;
  puStack_328 = &SUB_048b06d0;
  puStack_320 = &SUB_0490cb20;
  puStack_318 = &UNK_0eb62540;
  puStack_310 = &UNK_0eb626a0;
  uStack_308 = 0;
  uStack_300 = 0;
  plStack_2f8 = (long *)0x0;
  FUN_048b05a0(auStack_2a8._8_8_,&uStack_358);
  plVar7 = plStack_2f8;
  if (plStack_2f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2f8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0eb61f10(auStack_2a8);
  puStack_328 = (undefined1 *)CONCAT71(puStack_328._1_7_,uStack_2b8);
  uStack_338 = uStack_2c8;
  puStack_330 = (undefined *)uStack_2c0;
  puStack_348 = puStack_2d8;
  pcStack_340 = (code *)uStack_2d0;
  uStack_358 = uStack_2e8;
  plStack_350 = plStack_2e0;
  func_0x048b0bc0(&pcStack_290);
  uStack_ee = 0;
  uStack_ea = 0;
  uStack_120 = 0xffffffffffffffff;
  uStack_118 = 0;
  uStack_110 = 0xff;
  puStack_128 = &UNK_0f0edc68;
  uStack_108 = _DAT_014e4bb0;
  uStack_100 = _UNK_014e4bb8;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x0e9bcee0(auStack_2a8,&uStack_358,&puStack_128);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
