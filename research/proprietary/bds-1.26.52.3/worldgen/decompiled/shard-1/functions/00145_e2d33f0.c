/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3d33f0 (ELF vaddr 0xe2d33f0)
 * Label: string:Jigsaw Structure Metadata
 * Body:  [[0e3d33f0, 0e3d4ff1] [0e3d5000, 0e3d50d2] [0e3d50e0, 0e3d5122] [0e3d5130, 0e3d5454] [0e3d5460, 0e3d5491] [0e3d54a0, 0e3d5dc3]]
 * Ghidra: FUN_0e3d33f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3d33f0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *plVar13;
  code *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_540;
  long *plStack_538;
  undefined8 uStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined1 *puStack_510;
  undefined1 *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined4 uStack_4f0;
  undefined1 auStack_4e8 [16];
  undefined1 auStack_4d8 [16];
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 auStack_4c0 [16];
  undefined1 auStack_4b0 [16];
  long lStack_4a0;
  undefined1 auStack_498 [16];
  long lStack_488;
  undefined1 auStack_480 [16];
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  undefined4 uStack_450;
  undefined1 auStack_448 [16];
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  undefined2 uStack_418;
  undefined2 uStack_416;
  uint uStack_414;
  uint uStack_410;
  undefined1 uStack_40c;
  long lStack_400;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  char cStack_3c0;
  undefined7 uStack_3bf;
  undefined1 auStack_3b8 [16];
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  long lStack_378;
  long lStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_228;
  long lStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char cStack_178;
  undefined7 uStack_177;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0d880440();
  lStack_400 = param_1 + 0x18;
  lVar9 = func_0x05f23890();
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar9 + 9);
    if (bVar21) {
      puVar10 = *(undefined **)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar10 = &UNK_01455f56;
    uVar16 = 9;
  }
  func_0x07c85e30(auStack_4d8,param_1,puVar10,uVar16,0);
  if (auStack_4b0[8] == '\0') {
    func_0x0d893500(&uStack_540,auStack_4d8);
  }
  if ((DAT_0f753cf8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f753cf8), iVar7 != 0)) {
    func_0x0e495ba0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f753c78,0xf53dab8);
    func_0x0410844d(&DAT_0f753cf8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f753c78 + 4)) * 8);
  do {
    lVar9 = *plVar13;
    if (lVar9 == -1) goto LAB_0e3d34e0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f753c78 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3d34e0:
    puVar10 = &DAT_0f753c78;
    if (iRam000000000f753cd8 != -0x2b3da790) goto LAB_0e3d3567;
LAB_0e3d350b:
    lVar9 = *(long *)(puVar10 + 0x68);
    if (lVar9 == 0) goto LAB_0e3d3567;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e4961e0(&lStack_3f0,param_1,lVar18,uVar16);
    if (cStack_3c0 != '\0') goto LAB_0e3d3548;
LAB_0e3d358d:
    func_0x0e496d60(auStack_4d8,&lStack_3f0,&UNK_01410416,4);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef44b00;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530._4_4_ << 0x20);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_048b3f30;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_048b2190;
    puStack_500 = &UNK_0e497320;
    puStack_4f8 = &UNK_0e4974e0;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    cStack_178 = cStack_3c0;
    uStack_188 = uStack_3d0;
    uStack_180 = uStack_3c8;
    puStack_198 = puStack_3e0;
    uStack_190 = uStack_3d8;
    lStack_1a8 = lStack_3f0;
    lStack_1a0 = lStack_3e8;
    func_0x048b0bc0(auStack_4c0);
    lStack_2e8 = lStack_1a8;
    lStack_2e0 = lStack_1a0;
    puStack_2d8 = puStack_198;
    uStack_2d0 = uStack_190;
    uStack_2c8 = uStack_188;
    uStack_2c0 = uStack_180;
    uStack_2b8 = CONCAT71(uStack_177,cStack_178);
    func_0x0e496d60(auStack_4d8,&lStack_2e8,&UNK_012009af,4);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef44b00;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_048b3f30;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_048b2190;
    puStack_500 = &UNK_0e4976b0;
    puStack_4f8 = &UNK_0e497880;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    uStack_138 = (undefined1)uStack_2b8;
    uStack_148 = uStack_2c8;
    uStack_140 = uStack_2c0;
    puStack_158 = puStack_2d8;
    uStack_150 = uStack_2d0;
    lStack_168 = lStack_2e8;
    lStack_160 = lStack_2e0;
    func_0x048b0bc0(auStack_4c0);
    lStack_2a8 = lStack_168;
    lStack_2a0 = lStack_160;
    puStack_298 = puStack_158;
    uStack_290 = uStack_150;
    uStack_288 = uStack_148;
    uStack_280 = uStack_140;
    uStack_278 = CONCAT71(uStack_137,uStack_138);
    func_0x0e496d60(auStack_4d8,&lStack_2a8,&UNK_0142cb75,6);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef44b00;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_048b3f30;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_048b2190;
    puStack_500 = &UNK_0e497a60;
    puStack_4f8 = &UNK_0e497c30;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    uStack_f8 = (undefined1)uStack_278;
    uStack_108 = uStack_288;
    uStack_100 = uStack_280;
    puStack_118 = puStack_298;
    uStack_110 = uStack_290;
    lStack_128 = lStack_2a8;
    lStack_120 = lStack_2a0;
    func_0x048b0bc0(auStack_4c0);
    lStack_268 = lStack_128;
    lStack_260 = lStack_120;
    puStack_258 = puStack_118;
    uStack_250 = uStack_110;
    uStack_248 = uStack_108;
    uStack_240 = uStack_100;
    uStack_238 = CONCAT71(uStack_f7,uStack_f8);
    func_0x0e496d60(auStack_4d8,&lStack_268,&UNK_01447599,5);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef44b00;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_048b3f30;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_048b2190;
    puStack_500 = &UNK_0e497e10;
    puStack_4f8 = &UNK_0e497fe0;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    uStack_b8 = (undefined1)uStack_238;
    uStack_c8 = uStack_248;
    uStack_c0 = uStack_240;
    puStack_d8 = puStack_258;
    uStack_d0 = uStack_250;
    lStack_e8 = lStack_268;
    lStack_e0 = lStack_260;
    func_0x048b0bc0(auStack_4c0);
    lStack_228 = lStack_e8;
    lStack_220 = lStack_e0;
    puStack_218 = puStack_d8;
    uStack_210 = uStack_d0;
    uStack_208 = uStack_c8;
    uStack_200 = uStack_c0;
    uStack_1f8 = CONCAT71(uStack_b7,uStack_b8);
    func_0x0e496d60(auStack_4d8,&lStack_228,&UNK_012860c0,0xb);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef44b00;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_048b3f30;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_048b2190;
    puStack_500 = &UNK_0e4981c0;
    puStack_4f8 = &UNK_0e498390;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    uStack_78 = (undefined1)uStack_1f8;
    uStack_88 = uStack_208;
    uStack_80 = uStack_200;
    puStack_98 = puStack_218;
    uStack_90 = uStack_210;
    lStack_a8 = lStack_228;
    lStack_a0 = lStack_220;
    func_0x048b0bc0(auStack_4c0);
    lStack_1e8 = lStack_a8;
    lStack_1e0 = lStack_a0;
    puStack_1d8 = puStack_98;
    uStack_1d0 = uStack_90;
    uStack_1c8 = uStack_88;
    uStack_1c0 = uStack_80;
    uStack_1b8 = CONCAT71(uStack_77,uStack_78);
    func_0x0e496d60(auStack_4d8,&lStack_1e8,&UNK_012eba51,10);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f488e28;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_0d889c20;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_06c3bfc0;
    puStack_500 = &UNK_0e498570;
    puStack_4f8 = &UNK_0e4986d0;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    uStack_38 = (undefined1)uStack_1b8;
    uStack_48 = uStack_1c8;
    uStack_40 = uStack_1c0;
    puStack_58 = puStack_1d8;
    uStack_50 = uStack_1d0;
    lStack_68 = lStack_1e8;
    lStack_60 = lStack_1e0;
    func_0x048b0bc0(auStack_4c0);
    lStack_338 = lStack_68;
    puStack_330 = (undefined8 *)lStack_60;
    puStack_328 = puStack_58;
    uStack_320 = uStack_50;
    uStack_318 = uStack_48;
    uStack_310 = uStack_40;
    uStack_308 = CONCAT71(uStack_37,uStack_38);
    func_0x0e496d60(auStack_4d8,&lStack_338,&UNK_0119d6bb,3);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f011f18;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_05f27580;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_05f23890;
    puStack_500 = &UNK_0e4988b0;
    puStack_4f8 = &UNK_0e498a20;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    uStack_348 = CONCAT71(uStack_348._1_7_,(undefined1)uStack_308);
    uStack_358 = uStack_318;
    uStack_350 = uStack_310;
    puStack_368 = puStack_328;
    uStack_360 = uStack_320;
    lStack_378 = lStack_338;
    lStack_370 = (long)puStack_330;
    func_0x048b0bc0(auStack_4c0);
    func_0x0e496d60(auStack_4d8,&lStack_378,&DAT_014dc0ed,0x12);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef46ce8;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_0490ce30;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &UNK_0490cb20;
    puStack_500 = &UNK_0e498c00;
    puStack_4f8 = &UNK_0e498d60;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    uStack_388 = (undefined1)uStack_348;
    uStack_398 = uStack_358;
    uStack_390 = uStack_350;
    puStack_3a8 = puStack_368;
    uStack_3a0 = uStack_360;
    auStack_3b8._8_8_ = lStack_370;
    auStack_3b8._0_8_ = lStack_378;
    func_0x048b0bc0(auStack_4c0);
    func_0x0e496d60(auStack_4d8,auStack_3b8,&DAT_01250538,0x12);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef46ce8;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_0490ce30;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &UNK_0490cb20;
    puStack_500 = &UNK_0e498f40;
    puStack_4f8 = &UNK_0e4990a0;
    uStack_4f0 = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e497020(auStack_4d8);
    func_0x048b0bc0(auStack_4c0);
    lVar9 = func_0x05f23890(lStack_400);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e3d436e;
LAB_0e3d4344:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e3d436e;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar9 + 9);
    if (bVar21) {
      puVar10 = *(undefined **)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3d350b;
LAB_0e3d3567:
    func_0x0e4961e0(&lStack_3f0,param_1,&UNK_0133b754,0x13);
    if (cStack_3c0 == '\0') goto LAB_0e3d358d;
LAB_0e3d3548:
    lVar9 = func_0x05f23890(lStack_400);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e3d4344;
LAB_0e3d436e:
    puVar10 = &UNK_01455f56;
    uVar16 = 9;
  }
  func_0x07c85e30(auStack_4d8,param_1,puVar10,uVar16,0);
  if (auStack_4b0[8] == '\0') {
    func_0x0d893500(&uStack_540,auStack_4d8);
  }
  if ((DAT_0f753db0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f753db0), iVar7 != 0)) {
    func_0x0e499340();
    __cxa_atexit(&UNK_048ae800,&DAT_0f753d30,0xf53dab8);
    func_0x0410844d(&DAT_0f753db0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f753d30 + 4)) * 8);
  do {
    lVar9 = *plVar13;
    if (lVar9 == -1) goto LAB_0e3d4400;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f753d30 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3d4400:
    puVar10 = &DAT_0f753d30;
    if (iRam000000000f753d90 != -0x2b3da790) goto LAB_0e3d446d;
LAB_0e3d442b:
    lVar9 = *(long *)(puVar10 + 0x68);
    if (lVar9 == 0) goto LAB_0e3d446d;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e499a40(&lStack_3f0,param_1,lVar18,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3d442b;
LAB_0e3d446d:
    func_0x0e499a40(&lStack_3f0,param_1,&UNK_0121cd42,0x17);
  }
  if (cStack_3c0 == '\0') {
    func_0x0e49a5e0(auStack_4d8,&lStack_3f0,&UNK_01492c33,4,1);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f011f18;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_05f27580;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_05f23890;
    puStack_500 = &UNK_0e49aba0;
    puStack_4f8 = &UNK_0e49ad10;
    uStack_4f0 = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e49a8a0(auStack_4d8);
    uStack_348 = CONCAT71(uStack_348._1_7_,cStack_3c0);
    uStack_358 = uStack_3d0;
    uStack_350 = uStack_3c8;
    puStack_368 = puStack_3e0;
    uStack_360 = uStack_3d8;
    lStack_378 = lStack_3f0;
    lStack_370 = lStack_3e8;
    func_0x048b0bc0(auStack_4c0);
    func_0x0e49a030(auStack_4d8,lStack_378 + 0x18);
    if (auStack_4c0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_4c4,uStack_4c8) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_4c0._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar9 = *(long *)(piVar12 + 0xc);
      while (lVar9 != auStack_4d8._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar9 = *(long *)(piVar12 + 0xc);
      }
LAB_0e3d467f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_4c0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_4c4,uStack_4c8) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_4c0._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e3d467f;
      }
      if (auStack_4c0._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_4c4,uStack_4c8) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e49a5e0(auStack_4d8,&lStack_378,&UNK_014c3710,0x13,0x10);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef46ef8;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_04906f70;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &SUB_04906c50;
    puStack_500 = &UNK_0e49aee0;
    puStack_4f8 = &UNK_0e49b040;
    uStack_4f0 = 0;
    auStack_4e8 = ZEXT816(0);
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e49a8a0(auStack_4d8);
    uStack_388 = (undefined1)uStack_348;
    uStack_398 = uStack_358;
    uStack_390 = uStack_350;
    puStack_3a8 = puStack_368;
    uStack_3a0 = uStack_360;
    auStack_3b8._8_8_ = lStack_370;
    auStack_3b8._0_8_ = lStack_378;
    func_0x048b0bc0(auStack_4c0);
    func_0x0e49a5e0(auStack_4d8,auStack_3b8,&UNK_012239ea,7,1);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f4bbe30;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_0e49e9f0;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &UNK_0e49d4f0;
    puStack_500 = &UNK_0e49eab0;
    puStack_4f8 = &UNK_0e49edd0;
    uStack_4f0 = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e49a8a0(auStack_4d8);
    func_0x048b0bc0(auStack_4c0);
  }
  if ((DAT_0f754038 == '\0') && (iVar7 = func_0x04108328(&DAT_0f754038), iVar7 != 0)) {
    func_0x0e49f310();
    __cxa_atexit(&UNK_048ae800,&DAT_0f753fb8,0xf53dab8);
    func_0x0410844d(&DAT_0f754038);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f753fb8 + 4)) * 8);
  do {
    lVar9 = *plVar13;
    if (lVar9 == -1) goto LAB_0e3d4990;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f753fb8 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3d4990:
    puVar10 = &DAT_0f753fb8;
    if (iRam000000000f754018 != -0x2b3da790) goto LAB_0e3d4a17;
LAB_0e3d49bb:
    lVar9 = *(long *)(puVar10 + 0x68);
    if (lVar9 == 0) goto LAB_0e3d4a17;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e49f840(&lStack_3f0,param_1,lVar18,uVar16);
    if (cStack_3c0 != '\0') goto LAB_0e3d49f8;
LAB_0e3d4a3d:
    if ((DAT_0f754058 == '\0') && (iVar7 = func_0x04108328(&DAT_0f754058), iVar7 != 0)) {
      func_0x0e49f420();
      func_0x0410844d(&DAT_0f754058);
    }
    lVar9 = lStack_3f0;
    uStack_3c8 = 0x6622534000000001;
    if ((DAT_0f754038 == '\0') && (iVar7 = func_0x04108328(&DAT_0f754038), iVar7 != 0)) {
      func_0x0e49f310();
      __cxa_atexit(&UNK_048ae800,&DAT_0f753fb8,0xf53dab8);
      func_0x0410844d(&DAT_0f754038);
    }
    plVar13 = (long *)(*(long *)(lVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f753fb8 + 4)) * 8);
    do {
      lVar18 = *plVar13;
      if (lVar18 == -1) goto LAB_0e3d4ad0;
      plVar13 = (long *)(*(long *)(lVar9 + 0x30) + lVar18 * 0x18);
    } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f753fb8 + 4))
    ;
    if (plVar13 == *(long **)(lVar9 + 0x38)) {
LAB_0e3d4ad0:
      auStack_4d8._0_8_ = &DAT_0f753fb8;
    }
    else {
      auStack_4d8._0_8_ = plVar13[2];
    }
    auStack_4d8._8_8_ = lVar9 + 0x18;
    func_0x0ed621a0(auStack_4d8,uStack_3c8._4_4_);
    auVar22 = auStack_498;
    auStack_4d8._0_2_ = 1;
    auStack_4d8._8_8_ = &lStack_3e8;
    uStack_4c8 = uStack_3c8._4_4_;
    auStack_4c0 = (undefined1  [16])0x0;
    auStack_4b0 = (undefined1  [16])0x0;
    lStack_4a0 = 0;
    auStack_498._1_8_ = 0x617461646174656d;
    auStack_498[0] = 0x10;
    auStack_498._10_6_ = auVar22._10_6_;
    auStack_498[9] = 0;
    auStack_480 = (undefined1  [16])0x0;
    lStack_470 = 0;
    lStack_468 = 0;
    lStack_460 = 0;
    lStack_458 = 0;
    uStack_450 = 0x3f600000;
    func_0x048afb10(auStack_480,8);
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    auStack_448 = (undefined1  [16])0x0;
    uStack_418 = 0xff00;
    uStack_414 = uStack_414 & 0xffffff00;
    uStack_410 = uStack_410 & 0xffffff00;
    uStack_40c = 0;
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f4bc020;
    uVar4 = auStack_4c0._0_8_;
    auStack_4c0._0_8_ = puVar11;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
    plStack_538 = (long *)0x0;
    uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
    pcStack_528 = (code *)0x1;
    uStack_520 = 0;
    puStack_518 = &UNK_0e4a5ef0;
    puStack_510 = &SUB_048b06d0;
    puStack_508 = &UNK_0e4a3da0;
    puStack_500 = &UNK_0e4a5fb0;
    puStack_4f8 = &UNK_0e4a6220;
    uStack_4f0 = 0;
    auStack_4e8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
    uVar4 = auStack_4e8._8_8_;
    if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_4e8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    uVar4 = auStack_4d8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_540 = CONCAT44(uStack_540._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_538 = plVar13 + 3;
    uVar5 = auStack_4c0._0_8_;
    uVar6 = auStack_4c0._8_8_;
    auStack_4c0 = (undefined1  [16])0x0;
    plVar13[3] = uVar5;
    plVar13[4] = uVar6;
    plVar13[7] = lStack_4a0;
    plVar13[5] = auStack_4b0._0_8_;
    plVar13[6] = auStack_4b0._8_8_;
    auStack_4b0 = (undefined1  [16])0x0;
    lStack_4a0 = 0;
    plVar13[10] = lStack_488;
    plVar13[8] = auStack_498._0_8_;
    plVar13[9] = auStack_498._8_8_;
    auStack_498 = (undefined1  [16])0x0;
    lStack_488 = 0;
    plVar13[0xb] = auStack_480._0_8_;
    plVar13[0xc] = auStack_480._8_8_;
    plVar13[0xd] = lStack_470;
    auStack_480 = (undefined1  [16])0x0;
    lStack_470 = 0;
    plVar13[0xe] = lStack_468;
    plVar13[0xf] = lStack_460;
    plVar13[0x10] = lStack_458;
    lStack_468 = 0;
    lStack_460 = 0;
    lStack_458 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_450;
    plVar13[0x12] = auStack_448._0_8_;
    plVar13[0x13] = auStack_448._8_8_;
    plVar13[0x14] = lStack_438;
    auStack_448 = (undefined1  [16])0x0;
    lStack_438 = 0;
    plVar13[0x17] = lStack_420;
    plVar13[0x15] = lStack_430;
    plVar13[0x16] = lStack_428;
    lStack_430 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_40c,CONCAT43(uStack_410,uStack_414._1_3_));
    plVar13[0x18] = CONCAT44(uStack_414,CONCAT22(uStack_416,uStack_418));
    auStack_3b8 = (undefined1  [16])0x0;
    uStack_530 = plVar13;
    func_0x048afd20(uVar4,&uStack_540);
    plVar13 = uStack_530;
    if (uStack_530 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_530 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_530 + 0x10))(uStack_530);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar5 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_3b8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    lVar9 = *(long *)(uVar4 + 0x10);
    iVar7 = *(int *)(uVar4 + 0x1c);
    if (iVar7 == 2) {
      piVar12 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != *(int *)(uVar4 + 0x18)) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      for (; *(long *)(piVar12 + 0xc) != *(long *)(uVar4 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_0e3d500a:
      piVar12[4] = piVar12[4] | auStack_4d8._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar12 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != *(int *)(uVar4 + 0x18)) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e3d500a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | auStack_4d8._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_4c0);
    lVar9 = func_0x0d38a740(lStack_400);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e3d506a;
LAB_0e3d5028:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e3d506a;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e4a6690(&lStack_3f0,param_1,lVar18,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3d49bb;
LAB_0e3d4a17:
    func_0x0e49f840(&lStack_3f0,param_1,&UNK_0126be79,0x1f);
    if (cStack_3c0 == '\0') goto LAB_0e3d4a3d;
LAB_0e3d49f8:
    lVar9 = func_0x0d38a740(lStack_400);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e3d5028;
LAB_0e3d506a:
    func_0x0e4a6690(&lStack_3f0,param_1,&UNK_0147125d,0x23);
  }
  if (cStack_3c0 != '\0') {
    return;
  }
  lVar18 = lStack_3f0 + 0x18;
  lVar9 = func_0x0d38a740(lVar18);
  for (pbVar17 = *(byte **)(lStack_3f0 + 0x50); pbVar17 != *(byte **)(lStack_3f0 + 0x58);
      pbVar17 = pbVar17 + 0x38) {
    bVar3 = *pbVar17;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e3d513a;
    }
    else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0e3d513a:
      if ((bVar3 & 1) == 0) {
        pbVar19 = pbVar17 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar17 + 0x10);
      }
      auVar22[0] = -(*pbVar19 == DAT_014eaba0);
      auVar22[1] = -(pbVar19[1] == DAT_014eaba0._1_1_);
      auVar22[2] = -(pbVar19[2] == DAT_014eaba0._2_1_);
      auVar22[3] = -(pbVar19[3] == DAT_014eaba0._3_1_);
      auVar22[4] = -(pbVar19[4] == DAT_014eaba0._4_1_);
      auVar22[5] = -(pbVar19[5] == DAT_014eaba0._5_1_);
      auVar22[6] = -(pbVar19[6] == DAT_014eaba0._6_1_);
      auVar22[7] = -(pbVar19[7] == DAT_014eaba0._7_1_);
      auVar22[8] = -(pbVar19[8] == DAT_014eaba0._8_1_);
      auVar22[9] = -(pbVar19[9] == DAT_014eaba0._9_1_);
      auVar22[10] = -(pbVar19[10] == DAT_014eaba0._10_1_);
      auVar22[0xb] = -(pbVar19[0xb] == DAT_014eaba0._11_1_);
      auVar22[0xc] = -(pbVar19[0xc] == DAT_014eaba0._12_1_);
      auVar22[0xd] = -(pbVar19[0xd] == DAT_014eaba0._13_1_);
      auVar22[0xe] = -(pbVar19[0xe] == DAT_014eaba0._14_1_);
      auVar22[0xf] = -(pbVar19[0xf] == DAT_014eaba0._15_1_);
      auVar23[0] = -(pbVar19[10] == DAT_014e4ff0);
      auVar23[1] = -(pbVar19[0xb] == DAT_014e4ff0._1_1_);
      auVar23[2] = -(pbVar19[0xc] == DAT_014e4ff0._2_1_);
      auVar23[3] = -(pbVar19[0xd] == DAT_014e4ff0._3_1_);
      auVar23[4] = -(pbVar19[0xe] == DAT_014e4ff0._4_1_);
      auVar23[5] = -(pbVar19[0xf] == DAT_014e4ff0._5_1_);
      auVar23[6] = -(pbVar19[0x10] == DAT_014e4ff0._6_1_);
      auVar23[7] = -(pbVar19[0x11] == DAT_014e4ff0._7_1_);
      auVar23[8] = -(pbVar19[0x12] == DAT_014e4ff0._8_1_);
      auVar23[9] = -(pbVar19[0x13] == DAT_014e4ff0._9_1_);
      auVar23[10] = -(pbVar19[0x14] == DAT_014e4ff0._10_1_);
      auVar23[0xb] = -(pbVar19[0x15] == DAT_014e4ff0._11_1_);
      auVar23[0xc] = -(pbVar19[0x16] == DAT_014e4ff0._12_1_);
      auVar23[0xd] = -(pbVar19[0x17] == DAT_014e4ff0._13_1_);
      auVar23[0xe] = -(pbVar19[0x18] == DAT_014e4ff0._14_1_);
      auVar23[0xf] = -(pbVar19[0x19] == DAT_014e4ff0._15_1_);
      auVar23 = auVar23 & auVar22;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar17 == *(byte **)(lStack_3f0 + 0x58)) {
LAB_0e3d5169:
    if ((int)uStack_3c8 == 0) {
      if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
      goto LAB_0e3d51dd;
      lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
    }
    else {
      auStack_4d8._0_8_ = func_0x048b0c90(lVar18,lVar9,uStack_3c8._4_4_,1);
      if (auStack_4d8._0_8_ == 0) {
        auStack_4d8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_4d8);
        if (auStack_4d8._0_8_ == 0) goto LAB_0e3d51dd;
      }
      if ((*(int *)(auStack_4d8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_4d8._0_8_ + 0x58) != 0)) {
        lVar9 = *(long *)(auStack_4d8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e3d51dd:
        lVar9 = 0;
      }
    }
    uStack_530 = (long *)&UNK_0488e0b0;
    pcStack_528 = (code *)0x0;
    uStack_520 = CONCAT35(uStack_520._5_3_,0x48b5725f);
    uStack_540 = 0;
    auStack_4d8 = (undefined1  [16])0x0;
    auStack_4c0 = ZEXT816(0x488e0b0);
    auStack_4b0._0_5_ = 0x48b5725f;
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    auStack_3b8._8_8_ = 0x1a;
    auStack_3b8._0_8_ = 0x21;
    *(ulong *)((long)puVar11 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar11 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar11 = _DAT_013bbacd;
    puVar11[1] = uVar4;
    *(undefined1 *)((long)puVar11 + 0x1a) = 0;
    puStack_3a8 = puVar11;
    lVar9 = func_0x048b5060(lVar9,auStack_3b8);
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if ((undefined1 *)(lVar9 + 0x20) == auStack_4d8) {
      pcVar14 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
        puVar11 = (undefined8 *)(lVar9 + 0x28);
        (**(code **)(lVar9 + 0x40))(puVar11);
        if (auStack_4b0[4] != '\0') {
          if (auStack_4b0[4] == '\x02') {
            (*(code *)auStack_4c0._0_8_)(5,auStack_4d8 + 8,puVar11);
          }
          else {
            uVar4 = auStack_4d8._8_8_;
            auStack_4d8._8_8_ = 0;
            *puVar11 = uVar4;
          }
        }
      }
      *(undefined8 *)(lVar9 + 0x38) = auStack_4c0._0_8_;
      *(undefined8 *)(lVar9 + 0x40) = auStack_4c0._8_8_;
      *(undefined4 *)(lVar9 + 0x48) = auStack_4b0._0_4_;
      *(char *)(lVar9 + 0x4c) = auStack_4b0[4];
      pcVar14 = (code *)auStack_4c0._8_8_;
    }
    if ((auStack_3b8[0] & 1) != 0) {
      func_0x0412a280(puStack_3a8,auStack_3b8._0_8_ & 0xfffffffffffffffe);
      pcVar14 = (code *)auStack_4c0._8_8_;
    }
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(auStack_4d8 + 8);
    }
    if (pcStack_528 != (code *)0x0) {
      (*pcStack_528)(&uStack_540);
    }
  }
  else {
    iVar7 = *(int *)(pbVar17 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0e3d5169;
  }
  lStack_338 = lStack_3e8;
  puStack_330 = puStack_3e0;
  puStack_328 = (undefined8 *)uStack_3d8;
  uStack_320 = uStack_3d0;
  lStack_400 = CONCAT44(lStack_400._4_4_,(int)uStack_3c8);
  uStack_3f4 = uStack_3c8._4_4_;
  uStack_2f8 = CONCAT71(uStack_3bf,cStack_3c0);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_0129ec39;
  *(ulong *)((long)puVar11 + 9) = CONCAT17(UNK_0129ec38,_DAT_0129ec31);
  *(undefined8 *)((long)puVar11 + 0x11) = uVar4;
  uVar4 = CONCAT71(_DAT_0129ec31,UNK_0129ec30);
  *puVar11 = _DAT_0129ec28;
  puVar11[1] = uVar4;
  *(undefined1 *)((long)puVar11 + 0x19) = 0;
  lVar9 = func_0x0d38a740(lStack_3f0 + 0x18);
  pbVar19 = *(byte **)(lStack_3f0 + 0x58);
  lStack_2f0 = lStack_3f0;
  for (pbVar17 = *(byte **)(lStack_3f0 + 0x50); pbVar17 != pbVar19; pbVar17 = pbVar17 + 0x38) {
    bVar3 = *pbVar17;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x24) goto LAB_0e3d54aa;
    }
    else if (*(long *)(pbVar17 + 8) == 0x24) {
LAB_0e3d54aa:
      if ((bVar3 & 1) == 0) {
        pbVar20 = pbVar17 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar17 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar20,0x24);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar17 != pbVar19) {
    iVar7 = *(int *)(pbVar17 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    bVar21 = true;
    if (iVar7 != _DAT_0f550754) goto LAB_0e3d5770;
  }
  if ((int)lStack_400 == 0) {
    if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
    goto LAB_0e3d554d;
    lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
  }
  else {
    lVar9 = func_0x048b0c90(lStack_3f0 + 0x18,lVar9,uStack_3f4,1);
    if (lVar9 == 0) {
      auStack_4d8 = ZEXT816(0);
      func_0x048b0d20(auStack_4d8);
      lVar9 = auStack_4d8._0_8_;
      if (auStack_4d8._0_8_ == 0) goto LAB_0e3d554d;
    }
    if ((*(int *)(lVar9 + 0x50) == -0x45dcb126) && (*(long *)(lVar9 + 0x58) != 0)) {
      lVar9 = *(long *)(lVar9 + 0x58) + 0x40;
    }
    else {
LAB_0e3d554d:
      lVar9 = 0;
    }
  }
  uStack_540 = 0;
  uStack_530 = (long *)&UNK_048b4ab0;
  pcStack_528 = (code *)&UNK_048b49f0;
  uStack_520 = CONCAT35(uStack_520._5_3_,0x1d33bd9c5);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar15 = 0x21;
  puVar15[1] = 0x19;
  puVar15[2] = puVar11;
  *(undefined2 *)(puVar15 + 3) = 0x1200;
  puVar15[4] = 0x1003200150001;
  puVar15[5] = &UNK_01254d89;
  puVar15[6] = &UNK_01254d89;
  auStack_4c0._8_8_ = &UNK_048b49f0;
  auStack_4c0._0_8_ = &UNK_048b4ab0;
  auStack_4b0._0_5_ = 0x1d33bd9c5;
  uStack_540 = 0;
  auStack_4d8._8_8_ = puVar15;
  auStack_4d8._0_8_ = &UNK_048b46e0;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar4 = _UNK_014518c1;
  auStack_3b8._8_8_ = 0x24;
  auStack_3b8._0_8_ = 0x29;
  puVar11[2] = _DAT_014518b9;
  puVar11[3] = uVar4;
  uVar4 = _UNK_014518b1;
  *puVar11 = _DAT_014518a9;
  puVar11[1] = uVar4;
  *(undefined4 *)(puVar11 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar11 + 0x24) = 0;
  puStack_3a8 = puVar11;
  lVar9 = func_0x048b5060(lVar9,auStack_3b8);
  *(undefined **)(lVar9 + 0x20) = &UNK_048b46e0;
  pcVar14 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar9 + 0x20) != auStack_4d8) {
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    if (*(code **)(lVar9 + 0x40) == (code *)0x0) {
LAB_0e3d56e7:
      uVar4 = auStack_4d8._8_8_;
      auStack_4d8._8_8_ = 0;
      *puVar11 = uVar4;
    }
    else {
      (**(code **)(lVar9 + 0x40))(puVar11);
      if (auStack_4b0[4] != '\0') {
        if (auStack_4b0[4] != '\x02') goto LAB_0e3d56e7;
        (*(code *)auStack_4c0._0_8_)(5,auStack_4d8 + 8,puVar11);
      }
    }
    *(undefined8 *)(lVar9 + 0x38) = auStack_4c0._0_8_;
    *(undefined8 *)(lVar9 + 0x40) = auStack_4c0._8_8_;
    *(undefined4 *)(lVar9 + 0x48) = auStack_4b0._0_4_;
    *(char *)(lVar9 + 0x4c) = auStack_4b0[4];
    pcVar14 = (code *)auStack_4c0._8_8_;
  }
  if ((auStack_3b8[0] & 1) != 0) {
    func_0x0412a280(puStack_3a8,auStack_3b8._0_8_ & 0xfffffffffffffffe);
    pcVar14 = (code *)auStack_4c0._8_8_;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(auStack_4d8 + 8);
  }
  if (pcStack_528 != (code *)0x0) {
    (*pcStack_528)(&uStack_540);
  }
  puVar11 = (undefined8 *)0x0;
  bVar21 = false;
LAB_0e3d5770:
  lStack_378 = lStack_2f0;
  lStack_370 = lStack_338;
  puStack_368 = puStack_330;
  uStack_360 = puStack_328;
  uStack_358 = uStack_320;
  uStack_350 = CONCAT44(uStack_3f4,(int)lStack_400);
  uStack_348 = uStack_2f8;
  func_0x0e4a6f50(auStack_4d8,&lStack_378,&UNK_013771cd,0xe);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0ef44b00;
  uVar4 = auStack_4c0._0_8_;
  auStack_4c0._0_8_ = puVar15;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
  plStack_538 = (long *)0x0;
  uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
  pcStack_528 = (code *)0x1;
  uStack_520 = 0;
  puStack_518 = &UNK_048b3f30;
  puStack_510 = &SUB_048b06d0;
  puStack_508 = &SUB_048b2190;
  puStack_500 = &UNK_0e4a74b0;
  puStack_4f8 = &UNK_0e4a7670;
  uStack_4f0 = 0;
  auStack_4e8 = ZEXT816(0);
  func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
  uVar4 = auStack_4e8._8_8_;
  if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_4e8._8_8_ + 8);
    lVar9 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e4a71b0(auStack_4d8);
  uStack_388 = (undefined1)uStack_348;
  uStack_398 = uStack_358;
  uStack_390 = uStack_350;
  puStack_3a8 = puStack_368;
  uStack_3a0 = uStack_360;
  auStack_3b8._8_8_ = lStack_370;
  auStack_3b8._0_8_ = lStack_378;
  func_0x048b0bc0(auStack_4c0);
  func_0x0e4a6f50(auStack_4d8,auStack_3b8,&UNK_0147125d,0x23);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f4bc230;
  uVar4 = auStack_4c0._0_8_;
  auStack_4c0._0_8_ = puVar15;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_540 = CONCAT44(uStack_540._4_4_,uStack_4c8);
  plStack_538 = (long *)0x0;
  uStack_530 = (long *)((ulong)uStack_530 & 0xffffffff00000000);
  pcStack_528 = (code *)0x1;
  uStack_520 = 0;
  puStack_518 = &UNK_0e4a7a80;
  puStack_510 = &SUB_048b06d0;
  puStack_508 = &UNK_0e49f250;
  puStack_500 = &UNK_0e4a7b40;
  puStack_4f8 = &UNK_0e4a7db0;
  uStack_4f0 = 0;
  auStack_4e8 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_4d8._8_8_,&uStack_540);
  uVar4 = auStack_4e8._8_8_;
  if ((long *)auStack_4e8._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_4e8._8_8_ + 8);
    lVar9 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_4e8._8_8_ + 0x10))(auStack_4e8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e4a71b0(auStack_4d8);
  func_0x048b0bc0(auStack_4c0);
  if (bVar21) {
    func_0x0412a280(puVar11,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x129ec28  Jigsaw Structure Metadata
 * 0x129ec31  ructure Metadata
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
