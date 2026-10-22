/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2b5820 (ELF vaddr 0xe1b5820)
 * Label: string:heightmap
 * Body:  [[0e2b5820, 0e2b5ea1] [0e2b5eb0, 0e2b90f6] [0e2b9100, 0e2b9142] [0e2b9150, 0e2b9425] [0e2b9430, 0e2b9638] [0e2b9640, 0e2b9670] [0e2b9680, 0e2ba3a2]]
 * Ghidra: FUN_0e2b5820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2b5820(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined4 uVar19;
  byte *pbVar20;
  byte *pbVar21;
  char cVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_5b0;
  long *plStack_5a8;
  undefined8 uStack_5a0;
  code *pcStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined4 uStack_560;
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [16];
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined1 auStack_530 [16];
  undefined1 auStack_520 [16];
  long lStack_510;
  undefined1 auStack_508 [16];
  long lStack_4f8;
  undefined1 auStack_4f0 [16];
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  undefined4 uStack_4c0;
  undefined1 auStack_4b8 [16];
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined2 uStack_488;
  undefined2 uStack_486;
  uint uStack_484;
  uint uStack_480;
  undefined1 uStack_47c;
  undefined4 uStack_470;
  undefined2 uStack_46c;
  undefined1 uStack_46a;
  long lStack_468;
  long lStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  char cStack_438;
  uint7 uStack_437;
  undefined4 uStack_430;
  undefined2 uStack_42c;
  undefined1 auStack_428 [16];
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined1 auStack_408 [16];
  undefined8 uStack_3f8;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_328;
  long lStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
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
  char cStack_278;
  undefined7 uStack_277;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined4 uStack_16e;
  undefined2 uStack_16a;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined2 uStack_12a;
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
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0f74cb08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74cb08), iVar7 != 0)) {
    func_0x0e305a20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f74ca88,0xf53dab8);
    FUN_0410844d(&DAT_0f74cb08);
  }
  lStack_3b0 = param_1 + 0x18;
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74ca88 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2b58a0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f74ca88 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e2b58a0:
    puVar9 = &DAT_0f74ca88;
    if (iRam000000000f74cae8 != -0x2b3da790) goto LAB_0e2b590d;
LAB_0e2b58cb:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_0e2b590d;
    bVar23 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar23) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e305fe0(&lStack_468,param_1,lVar13,uVar17);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e2b58cb;
LAB_0e2b590d:
    func_0x0e305fe0(&lStack_468,param_1,&UNK_01237446,0x11);
  }
  if (cStack_438 == '\0') {
    uStack_5a0._4_4_ = (uint)((ulong)uStack_5a0 >> 0x20);
    uStack_5b0._4_4_ = (undefined4)((ulong)uStack_5b0 >> 0x20);
    if ((DAT_0f74cb28 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74cb28), iVar7 != 0)) {
      func_0x0e305b30();
      FUN_0410844d(&DAT_0f74cb28);
    }
    lVar14 = lStack_468;
    uStack_440 = 0x28a5a83e00000001;
    if ((DAT_0f74cb08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74cb08), iVar7 != 0)) {
      func_0x0e305a20();
      __cxa_atexit(&UNK_048ae800,&DAT_0f74ca88,0xf53dab8);
      FUN_0410844d(&DAT_0f74cb08);
    }
    plVar11 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74ca88 + 4)) * 8);
    do {
      lVar13 = *plVar11;
      if (lVar13 == -1) goto LAB_0e2b59d0;
      plVar11 = (long *)(*(long *)(lVar14 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f74ca88 + 4)
            );
    if (plVar11 == *(long **)(lVar14 + 0x38)) {
LAB_0e2b59d0:
      auStack_548._0_8_ = &DAT_0f74ca88;
    }
    else {
      auStack_548._0_8_ = plVar11[2];
    }
    auStack_548._8_8_ = lVar14 + 0x18;
    func_0x0ed621a0(auStack_548,uStack_440._4_4_);
    auVar24 = auStack_508;
    auStack_548._0_2_ = 1;
    auStack_548._8_8_ = &lStack_460;
    uStack_538 = uStack_440._4_4_;
    auStack_530 = (undefined1  [16])0x0;
    auStack_520 = (undefined1  [16])0x0;
    lStack_510 = 0;
    auStack_508._1_8_ = 0x696669746e656469;
    auStack_508[0] = 0x14;
    auStack_508._9_2_ = 0x7265;
    auStack_508._12_4_ = auVar24._12_4_;
    auStack_508[0xb] = 0;
    auStack_4f0 = (undefined1  [16])0x0;
    lStack_4e0 = 0;
    lStack_4d8 = 0;
    lStack_4d0 = 0;
    lStack_4c8 = 0;
    uStack_4c0 = 0x3f600000;
    func_0x048afb10(auStack_4f0,8);
    lStack_498 = 0;
    lStack_490 = 0;
    lStack_4a8 = 0;
    lStack_4a0 = 0;
    auStack_4b8 = (undefined1  [16])0x0;
    uStack_488 = 0xff00;
    uStack_484 = uStack_484 & 0xffffff00;
    uStack_480 = uStack_480 & 0xffffff00;
    uStack_47c = 0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0._4_4_ << 0x20);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e306b40;
    puStack_568 = &UNK_0e306d00;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    uVar4 = auStack_548._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,_DAT_0f550a0c);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar11 + 1) = (undefined1  [16])0x0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_5a8 = plVar11 + 3;
    uVar5 = auStack_530._0_8_;
    uVar6 = auStack_530._8_8_;
    auStack_530 = (undefined1  [16])0x0;
    plVar11[3] = uVar5;
    plVar11[4] = uVar6;
    plVar11[7] = lStack_510;
    plVar11[5] = auStack_520._0_8_;
    plVar11[6] = auStack_520._8_8_;
    auStack_520 = (undefined1  [16])0x0;
    lStack_510 = 0;
    plVar11[10] = lStack_4f8;
    plVar11[8] = auStack_508._0_8_;
    plVar11[9] = auStack_508._8_8_;
    auStack_508 = (undefined1  [16])0x0;
    lStack_4f8 = 0;
    plVar11[0xb] = auStack_4f0._0_8_;
    plVar11[0xc] = auStack_4f0._8_8_;
    plVar11[0xd] = lStack_4e0;
    auStack_4f0 = (undefined1  [16])0x0;
    lStack_4e0 = 0;
    plVar11[0xe] = lStack_4d8;
    plVar11[0xf] = lStack_4d0;
    plVar11[0x10] = lStack_4c8;
    lStack_4d8 = 0;
    lStack_4d0 = 0;
    lStack_4c8 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_4c0;
    plVar11[0x12] = auStack_4b8._0_8_;
    plVar11[0x13] = auStack_4b8._8_8_;
    plVar11[0x14] = lStack_4a8;
    auStack_4b8 = (undefined1  [16])0x0;
    lStack_4a8 = 0;
    plVar11[0x17] = lStack_490;
    plVar11[0x15] = lStack_4a0;
    plVar11[0x16] = lStack_498;
    lStack_4a0 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_47c,CONCAT43(uStack_480,uStack_484._1_3_));
    plVar11[0x18] = CONCAT44(uStack_484,CONCAT22(uStack_486,uStack_488));
    auStack_428 = (undefined1  [16])0x0;
    uStack_5a0 = plVar11;
    func_0x048afd20(uVar4,&uStack_5b0);
    plVar11 = uStack_5a0;
    if (uStack_5a0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_5a0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_5a0 + 0x10))(uStack_5a0);
        func_0x0412c2d0(plVar11);
      }
    }
    uVar5 = auStack_428._8_8_;
    if ((long *)auStack_428._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_428._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_428._8_8_ + 0x10))(auStack_428._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    lVar14 = *(long *)(uVar4 + 0x10);
    iVar7 = *(int *)(uVar4 + 0x1c);
    if (iVar7 == 2) {
      piVar12 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != *(int *)(uVar4 + 0x18)) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      for (; *(long *)(piVar12 + 0xc) != *(long *)(uVar4 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_0e2b5eba:
      piVar12[4] = piVar12[4] | auStack_548._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar12 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != *(int *)(uVar4 + 0x18)) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b5eba;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | auStack_548._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_530);
  }
  if ((DAT_0f74cbc0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74cbc0), iVar7 != 0)) {
    func_0x0e306f90();
    __cxa_atexit(&UNK_048ae800,&DAT_0f74cb40,0xf53dab8);
    FUN_0410844d(&DAT_0f74cbc0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74cb40 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2b5f20;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f74cb40 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e2b5f20:
    puVar9 = &DAT_0f74cb40;
    if (iRam000000000f74cba0 != -0x2b3da790) goto LAB_0e2b5f8d;
LAB_0e2b5f4b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_0e2b5f8d;
    bVar23 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar23) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e3075e0(&lStack_468,param_1,lVar13,uVar17);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e2b5f4b;
LAB_0e2b5f8d:
    func_0x0e3075e0(&lStack_468,param_1,&UNK_0141918d,9);
  }
  if (cStack_438 == '\0') {
    uStack_2b8 = (ulong)uStack_437 << 8;
    lStack_2e8 = lStack_468;
    lStack_2e0 = lStack_460;
    puStack_2d8 = puStack_458;
    uStack_2d0 = uStack_450;
    uStack_2c8 = uStack_448;
    uStack_2c0 = uStack_440;
    func_0x0e307bd0(auStack_548,lStack_468 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b606f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b606f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e308190(auStack_548,&lStack_2e8,&UNK_0142a5c6,4);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e3087a0;
    puStack_568 = &UNK_0e308960;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e3084a0(auStack_548);
    cStack_278 = (char)uStack_2b8;
    uStack_288 = uStack_2c8;
    uStack_280 = uStack_2c0;
    puStack_298 = puStack_2d8;
    uStack_290 = uStack_2d0;
    lStack_2a8 = lStack_2e8;
    lStack_2a0 = lStack_2e0;
    func_0x048b0bc0(auStack_530);
    uStack_3a8 = lStack_2a8;
    lStack_3a0 = lStack_2a0;
    puStack_398 = puStack_298;
    uStack_390 = uStack_290;
    uStack_388 = uStack_288;
    uStack_380 = uStack_280;
    uStack_378 = CONCAT71(uStack_277,cStack_278);
    func_0x0e307bd0(auStack_548,lStack_2a8 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b62ef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b62ef;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e308190(auStack_548,&uStack_3a8,&UNK_0143bd0f,9);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e308b30;
    puStack_568 = &UNK_0e308d00;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e3084a0(auStack_548);
    uStack_338 = CONCAT71(uStack_338._1_7_,(undefined1)uStack_378);
    uStack_348 = uStack_388;
    uStack_340 = uStack_380;
    puStack_358 = puStack_398;
    uStack_350 = uStack_390;
    lStack_368 = uStack_3a8;
    puStack_360 = (undefined8 *)lStack_3a0;
    func_0x048b0bc0(auStack_530);
    lStack_3e8 = lStack_368;
    lStack_3e0 = (long)puStack_360;
    puStack_3d8 = puStack_358;
    uStack_3d0 = uStack_350;
    uStack_3c8 = uStack_348;
    uStack_3c0 = uStack_340;
    uStack_3b8 = uStack_338;
    func_0x0e307bd0(auStack_548,lStack_368 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b654f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b654f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e308190(auStack_548,&lStack_3e8,&UNK_01426f09,0xf);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e308ee0;
    puStack_568 = &UNK_0e3090b0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e3084a0(auStack_548);
    uStack_2f8 = (undefined1)uStack_3b8;
    uStack_308 = uStack_3c8;
    uStack_300 = uStack_3c0;
    puStack_318 = puStack_3d8;
    uStack_310 = uStack_3d0;
    lStack_328 = lStack_3e8;
    lStack_320 = lStack_3e0;
    func_0x048b0bc0(auStack_530);
    auStack_408._8_8_ = uStack_300;
    auStack_408._0_8_ = uStack_308;
    auStack_428._8_8_ = lStack_320;
    auStack_428._0_8_ = lStack_328;
    puStack_418 = puStack_318;
    uStack_410 = uStack_310;
    uStack_3f8 = CONCAT71(uStack_2f7,uStack_2f8);
    func_0x0e307bd0(auStack_548,lStack_328 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b67bf:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b67bf;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e308190(auStack_548,auStack_428,&UNK_011b2d7a,0x1b);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e309290;
    puStack_568 = &UNK_0e309460;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e3084a0(auStack_548);
    func_0x048b0bc0(auStack_530);
  }
  if ((DAT_0f74cc78 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74cc78), iVar7 != 0)) {
    func_0x0e309700();
    __cxa_atexit(&UNK_048ae800,&DAT_0f74cbf8,0xf53dab8);
    FUN_0410844d(&DAT_0f74cc78);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74cbf8 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2b6940;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f74cbf8 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e2b6940:
    puVar9 = &DAT_0f74cbf8;
    if (iRam000000000f74cc58 != -0x2b3da790) goto LAB_0e2b69ad;
LAB_0e2b696b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_0e2b69ad;
    bVar23 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar23) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e309d80(&lStack_468,param_1,lVar13,uVar17);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e2b696b;
LAB_0e2b69ad:
    func_0x0e309d80(&lStack_468,param_1,&UNK_013bfe90,0xb);
  }
  if (cStack_438 == '\0') {
    func_0x0d8e8540(param_1);
    func_0x0e30a920(auStack_548,&lStack_468,&UNK_0123ca5a,6,1);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0490cb20;
    puStack_570 = &UNK_0e30aee0;
    puStack_568 = &UNK_0e30b040;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30abe0(auStack_548);
    cStack_278 = cStack_438;
    uStack_288 = uStack_448;
    uStack_280 = uStack_440;
    puStack_298 = puStack_458;
    uStack_290 = uStack_450;
    lStack_2a8 = lStack_468;
    lStack_2a0 = lStack_460;
    func_0x048b0bc0(auStack_530);
    uStack_ae = 0;
    uStack_aa = 0;
    uStack_e0 = 0xffffffffffffffff;
    uStack_d8 = 0;
    uStack_d0 = 0xff;
    puStack_e8 = &UNK_0f0edc68;
    uStack_c8 = 0;
    uStack_c0 = _DAT_014f0238;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x0e2ba5c0(&uStack_3a8,&lStack_2a8,&puStack_e8);
    uStack_338 = uStack_378;
    uStack_348 = uStack_388;
    uStack_340 = uStack_380;
    puStack_358 = puStack_398;
    uStack_350 = uStack_390;
    lStack_368 = uStack_3a8;
    puStack_360 = (undefined8 *)lStack_3a0;
    func_0x0e30a370(auStack_548,uStack_3a8 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b6c8f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b6c8f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30a920(auStack_548,&lStack_368,&UNK_012eba42,0xe,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0490cb20;
    puStack_570 = &UNK_0e30b210;
    puStack_568 = &UNK_0e30b370;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30abe0(auStack_548);
    uStack_3b8 = CONCAT71(uStack_3b8._1_7_,(undefined1)uStack_338);
    uStack_3c8 = uStack_348;
    uStack_3c0 = uStack_340;
    puStack_3d8 = puStack_358;
    uStack_3d0 = uStack_350;
    lStack_3e8 = lStack_368;
    lStack_3e0 = (long)puStack_360;
    func_0x048b0bc0(auStack_530);
    uStack_ee = 0;
    uStack_ea = 0;
    uStack_120 = 0xffffffffffffffff;
    uStack_118 = 0;
    uStack_110 = 0xff;
    puStack_128 = &UNK_0f0edc68;
    uStack_108 = 0;
    uStack_100 = _DAT_014f0238;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x0e2ba5c0(&lStack_328,&lStack_3e8,&puStack_128);
    uStack_3f8 = CONCAT71(uStack_2f7,uStack_2f8);
    auStack_408._8_8_ = uStack_300;
    auStack_408._0_8_ = uStack_308;
    puStack_418 = puStack_318;
    uStack_410 = uStack_310;
    auStack_428._8_8_ = lStack_320;
    auStack_428._0_8_ = lStack_328;
    func_0x0e30a370(auStack_548,lStack_328 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b6fdf:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b6fdf;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30a920(auStack_548,auStack_428,&UNK_013264d5,0xb,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4900e8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0d9a0bc0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d94e4f0;
    puStack_570 = &UNK_0e30b550;
    puStack_568 = &UNK_0e30b720;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30abe0(auStack_548);
    func_0x048b0bc0(auStack_530);
  }
  if ((DAT_0f74cd30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74cd30), iVar7 != 0)) {
    func_0x0e30b9c0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f74ccb0,0xf53dab8);
    FUN_0410844d(&DAT_0f74cd30);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74ccb0 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2b7180;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f74ccb0 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e2b7180:
    puVar9 = &DAT_0f74ccb0;
    if (iRam000000000f74cd10 != -0x2b3da790) goto LAB_0e2b71ed;
LAB_0e2b71ab:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_0e2b71ed;
    bVar23 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar23) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e30c110(&lStack_468,param_1,lVar13,uVar17);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e2b71ab;
LAB_0e2b71ed:
    func_0x0e30c110(&lStack_468,param_1,&UNK_0129ebeb,4);
  }
  if (cStack_438 == '\0') {
    func_0x0e30c700(auStack_548,lStack_468 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b728f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b728f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30ccd0(auStack_548,&lStack_468,&UNK_011e9523,3);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0490cb20;
    puStack_570 = &UNK_0e30d290;
    puStack_568 = &UNK_0e30d3f0;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30cf90(auStack_548);
    cStack_78 = cStack_438;
    uStack_88 = uStack_448;
    uStack_80 = uStack_440;
    puStack_98 = puStack_458;
    uStack_90 = uStack_450;
    lStack_a8 = lStack_468;
    lStack_a0 = lStack_460;
    func_0x048b0bc0(auStack_530);
    uStack_12e = 0;
    uStack_12a = 0;
    uStack_160 = 0xffffffffffffffff;
    uStack_158 = 0;
    uStack_150 = 0xff;
    puStack_168 = &UNK_0f0edc68;
    uStack_148 = 0;
    uStack_140 = _DAT_014f0238;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x0e2ba990(&lStack_68,&lStack_a8,&puStack_168);
    uStack_1f8 = uStack_38;
    uStack_208 = uStack_48;
    uStack_200 = uStack_40;
    uStack_218 = uStack_58;
    uStack_210 = uStack_50;
    uStack_228 = lStack_68;
    puStack_220 = puStack_60;
    func_0x0e30c700(auStack_548,lStack_68 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b75ef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b75ef;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30ccd0(auStack_548,&uStack_228,&UNK_012ba56c,3);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0490cb20;
    puStack_570 = &UNK_0e30d5c0;
    puStack_568 = &UNK_0e30d720;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30cf90(auStack_548);
    uStack_1b8 = (undefined1)uStack_1f8;
    uStack_1c8 = uStack_208;
    uStack_1c0 = uStack_200;
    uStack_1d8 = uStack_218;
    uStack_1d0 = uStack_210;
    lStack_1e8 = uStack_228;
    puStack_1e0 = puStack_220;
    func_0x048b0bc0(auStack_530);
    uStack_16e = 0;
    uStack_16a = 0;
    uStack_1a0 = 0xffffffffffffffff;
    uStack_198 = 0;
    uStack_190 = 0xff;
    puStack_1a8 = &UNK_0f0edc68;
    uStack_188 = 0;
    uStack_180 = _DAT_014f0238;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x0e2ba990(&lStack_268,&lStack_1e8,&puStack_1a8);
    uStack_2b8 = lStack_238;
    uStack_2c8 = uStack_248;
    uStack_2c0 = uStack_240;
    puStack_2d8 = puStack_258;
    uStack_2d0 = uStack_250;
    lStack_2e8 = lStack_268;
    lStack_2e0 = lStack_260;
    func_0x0e30c700(auStack_548,lStack_268 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b78ef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b78ef;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30ccd0(auStack_548,&lStack_2e8,&UNK_01405daa,0xd);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e30d900;
    puStack_568 = &UNK_0e30dad0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30cf90(auStack_548);
    cStack_278 = (char)uStack_2b8;
    uStack_288 = uStack_2c8;
    uStack_280 = uStack_2c0;
    puStack_298 = puStack_2d8;
    uStack_290 = uStack_2d0;
    lStack_2a8 = lStack_2e8;
    lStack_2a0 = lStack_2e0;
    func_0x048b0bc0(auStack_530);
    uStack_3a8 = lStack_2a8;
    lStack_3a0 = lStack_2a0;
    puStack_398 = puStack_298;
    uStack_390 = uStack_290;
    uStack_388 = uStack_288;
    uStack_380 = uStack_280;
    uStack_378 = CONCAT71(uStack_277,cStack_278);
    func_0x0e30c700(auStack_548,lStack_2a8 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b7b6f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b7b6f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30ccd0(auStack_548,&uStack_3a8,&UNK_013184a4,0x13);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0490cb20;
    puStack_570 = &UNK_0e30dcb0;
    puStack_568 = &UNK_0e30de10;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30cf90(auStack_548);
    uStack_338 = CONCAT71(uStack_338._1_7_,(undefined1)uStack_378);
    uStack_348 = uStack_388;
    uStack_340 = uStack_380;
    puStack_358 = puStack_398;
    uStack_350 = uStack_390;
    lStack_368 = uStack_3a8;
    puStack_360 = (undefined8 *)lStack_3a0;
    func_0x048b0bc0(auStack_530);
    lStack_3e8 = lStack_368;
    lStack_3e0 = (long)puStack_360;
    puStack_3d8 = puStack_358;
    uStack_3d0 = uStack_350;
    uStack_3c8 = uStack_348;
    uStack_3c0 = uStack_340;
    uStack_3b8 = uStack_338;
    func_0x0e30c700(auStack_548,lStack_368 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b7def:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b7def;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30ccd0(auStack_548,&lStack_3e8,&UNK_01410553,5);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e30dff0;
    puStack_568 = &UNK_0e30e1c0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30cf90(auStack_548);
    uStack_2f8 = (undefined1)uStack_3b8;
    uStack_308 = uStack_3c8;
    uStack_300 = uStack_3c0;
    puStack_318 = puStack_3d8;
    uStack_310 = uStack_3d0;
    lStack_328 = lStack_3e8;
    lStack_320 = lStack_3e0;
    func_0x048b0bc0(auStack_530);
    auStack_408._8_8_ = uStack_300;
    auStack_408._0_8_ = uStack_308;
    auStack_428._8_8_ = lStack_320;
    auStack_428._0_8_ = lStack_328;
    puStack_418 = puStack_318;
    uStack_410 = uStack_310;
    uStack_3f8 = CONCAT71(uStack_2f7,uStack_2f8);
    func_0x0e30c700(auStack_548,lStack_328 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b805f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b805f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30ccd0(auStack_548,auStack_428,&UNK_012fdd26,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0490cb20;
    puStack_570 = &UNK_0e30e3a0;
    puStack_568 = &UNK_0e30e500;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e30cf90(auStack_548);
    func_0x048b0bc0(auStack_530);
  }
  if ((DAT_0f74cde8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74cde8), iVar7 != 0)) {
    func_0x0e30e7a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f74cd68,0xf53dab8);
    FUN_0410844d(&DAT_0f74cde8);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74cd68 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2b81f0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f74cd68 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e2b81f0:
    puVar9 = &DAT_0f74cd68;
    if (iRam000000000f74cdc8 != -0x2b3da790) goto LAB_0e2b8277;
LAB_0e2b821b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_0e2b8277;
    bVar23 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar23) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e30f160(&lStack_468,param_1,lVar13,uVar17);
    if (cStack_438 != '\0') goto LAB_0e2b8258;
LAB_0e2b829d:
    lStack_238._0_1_ = cStack_438;
    uStack_248 = uStack_448;
    uStack_240 = uStack_440;
    puStack_258 = puStack_458;
    uStack_250 = uStack_450;
    lStack_268 = lStack_468;
    lStack_260 = lStack_460;
    func_0x0e30fd80(auStack_548,&lStack_268,&UNK_0123ca5a,6,1);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef46ce8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0490cb20;
    puStack_570 = &UNK_0e310340;
    puStack_568 = &UNK_0e3104a0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e310040(auStack_548);
    lVar14 = lStack_268;
    lStack_1e8 = lStack_260;
    puStack_1e0 = puStack_258;
    uStack_1d8 = uStack_250;
    uStack_1d0 = uStack_248;
    iVar7 = (int)uStack_240;
    uVar19 = uStack_240._4_4_;
    func_0x048b0bc0(auStack_530);
    uStack_430 = 0;
    uStack_42c = 0;
    if (iVar7 == 4) {
      if ((DAT_0f74cde8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f74cde8), iVar8 != 0)) {
        func_0x0e30e7a0();
        __cxa_atexit(&UNK_048ae800,&DAT_0f74cd68,0xf53dab8);
        FUN_0410844d(&DAT_0f74cde8);
      }
      plVar11 = (long *)(*(long *)(lVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f74cd68 + 4)) * 8);
      do {
        lVar13 = *plVar11;
        if (lVar13 == -1) goto LAB_0e2b8570;
        plVar11 = (long *)(*(long *)(lVar14 + 0x30) + lVar13 * 0x18);
      } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar13 * 0x18) !=
               *(uint *)(_DAT_0f74cd68 + 4));
      if (plVar11 == *(long **)(lVar14 + 0x38)) {
LAB_0e2b8570:
        puVar9 = &DAT_0f74cd68;
      }
      else {
        puVar9 = (undefined *)plVar11[2];
      }
      uStack_470 = CONCAT31(uStack_470._1_3_,(char)lStack_238);
      uStack_270 = CONCAT44(uStack_270._4_4_,uVar19);
      lVar13 = func_0x048b1040(lVar14 + 0x18,puVar9,uVar19,1);
      if (lVar13 == 0) {
        auStack_548 = ZEXT816(0);
        FUN_048b10d0(auStack_548);
        lVar15 = *(long *)(auStack_548._0_8_ + 0x38);
        lVar13 = auStack_548._0_8_;
        if (lVar15 == 0) goto LAB_0e2b9403;
LAB_0e2b941f:
        do {
          lVar13 = lVar15;
          lVar15 = *(long *)(lVar13 + 0x38);
          if (*(long *)(lVar13 + 0x38) == 0) {
            auStack_548 = ZEXT816(0);
            FUN_048b10d0(auStack_548);
            lVar15 = auStack_548._0_8_;
          }
        } while (lVar15 != 0);
      }
      else {
        lVar15 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) != 0) goto LAB_0e2b941f;
LAB_0e2b9403:
        auStack_548 = ZEXT816(0);
        FUN_048b10d0(auStack_548);
        lVar15 = auStack_548._0_8_;
        if (auStack_548._0_8_ != 0) goto LAB_0e2b941f;
      }
      lVar13 = *(long *)(lVar13 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0xff;
      *puVar10 = &UNK_0f0edc68;
      uVar4 = _DAT_014f0238;
      puVar10[4] = 0;
      puVar10[5] = uVar4;
      puVar10[6] = 0;
      *(undefined2 *)(puVar10 + 7) = 0;
      *(undefined4 *)((long)puVar10 + 0x3a) = uStack_430;
      *(undefined2 *)((long)puVar10 + 0x3e) = uStack_42c;
      plVar11 = *(long **)(lVar13 + 8);
      *(undefined8 **)(lVar13 + 8) = puVar10;
      uVar19 = (undefined4)uStack_270;
      cVar22 = (char)uStack_470;
joined_r0x0e2b94ff:
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x28))();
      }
    }
    else {
      cVar22 = (char)lStack_238;
      if (iVar7 == 1) {
        if ((DAT_0f74cde8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f74cde8), iVar8 != 0)) {
          func_0x0e30e7a0();
          __cxa_atexit(&UNK_048ae800,&DAT_0f74cd68,0xf53dab8);
          FUN_0410844d(&DAT_0f74cde8);
        }
        plVar11 = (long *)(*(long *)(lVar14 + 0x18) +
                          (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18))
                                       >> 3) - 1U & *(uint *)(_DAT_0f74cd68 + 4)) * 8);
        do {
          lVar13 = *plVar11;
          if (lVar13 == -1) goto LAB_0e2b84f0;
          plVar11 = (long *)(*(long *)(lVar14 + 0x30) + lVar13 * 0x18);
        } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar13 * 0x18) !=
                 *(uint *)(_DAT_0f74cd68 + 4));
        if (plVar11 == *(long **)(lVar14 + 0x38)) {
LAB_0e2b84f0:
          puVar9 = &DAT_0f74cd68;
        }
        else {
          puVar9 = (undefined *)plVar11[2];
        }
        uStack_470 = CONCAT31(uStack_470._1_3_,(char)lStack_238);
        lVar13 = func_0x048b0c90(lVar14 + 0x18,puVar9,uVar19,1);
        if (lVar13 == 0) {
          auStack_548 = ZEXT816(0);
          func_0x048b0d20(auStack_548);
          lVar13 = auStack_548._0_8_;
        }
        lVar13 = *(long *)(lVar13 + 0x58);
        puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (puVar10 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        puVar10[1] = 0xffffffffffffffff;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0xff;
        *puVar10 = &UNK_0f0edc68;
        uVar4 = _DAT_014f0238;
        puVar10[4] = 0;
        puVar10[5] = uVar4;
        puVar10[6] = 0;
        *(undefined2 *)(puVar10 + 7) = 0;
        *(undefined4 *)((long)puVar10 + 0x3a) = uStack_430;
        *(undefined2 *)((long)puVar10 + 0x3e) = uStack_42c;
        plVar11 = *(long **)(lVar13 + 8);
        *(undefined8 **)(lVar13 + 8) = puVar10;
        cVar22 = (char)uStack_470;
        goto joined_r0x0e2b94ff;
      }
    }
    uStack_2d0 = uStack_1d8;
    uStack_2c8 = uStack_1d0;
    lStack_2e0 = lStack_1e8;
    puStack_2d8 = puStack_1e0;
    lStack_2e8 = lVar14;
    uStack_2c0 = CONCAT44(uVar19,iVar7);
    uVar19 = (undefined4)uStack_228;
    uStack_2b8._0_5_ = CONCAT41(uVar19,cVar22);
    uStack_2b8 = CONCAT44(uStack_228._3_4_,(undefined4)uStack_2b8);
    func_0x0e30f750(auStack_548,lVar14 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b877f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b877f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30fd80(auStack_548,&lStack_2e8,&UNK_014c3535,5,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4b52f0;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0e313cf0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0e3126a0;
    puStack_570 = &UNK_0e313db0;
    puStack_568 = &UNK_0e314080;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e310040(auStack_548);
    cStack_278 = (char)uStack_2b8;
    uStack_288 = uStack_2c8;
    uStack_280 = uStack_2c0;
    puStack_298 = puStack_2d8;
    uStack_290 = uStack_2d0;
    lStack_2a8 = lStack_2e8;
    lStack_2a0 = lStack_2e0;
    func_0x048b0bc0(auStack_530);
    uStack_3a8 = lStack_2a8;
    lStack_3a0 = lStack_2a0;
    puStack_398 = puStack_298;
    uStack_390 = uStack_290;
    uStack_388 = uStack_288;
    uStack_380 = uStack_280;
    uStack_378 = CONCAT71(uStack_277,cStack_278);
    func_0x0e30f750(auStack_548,lStack_2a8 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b89ff:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b89ff;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30fd80(auStack_548,&uStack_3a8,&UNK_011e6966,0xd,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4b5470;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0e3178d0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0e316420;
    puStack_570 = &UNK_0e317990;
    puStack_568 = &UNK_0e317b80;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e310040(auStack_548);
    uStack_338 = CONCAT71(uStack_338._1_7_,(undefined1)uStack_378);
    uStack_348 = uStack_388;
    uStack_340 = uStack_380;
    puStack_358 = puStack_398;
    uStack_350 = uStack_390;
    lStack_368 = uStack_3a8;
    puStack_360 = (undefined8 *)lStack_3a0;
    func_0x048b0bc0(auStack_530);
    lStack_3e8 = lStack_368;
    lStack_3e0 = (long)puStack_360;
    puStack_3d8 = puStack_358;
    uStack_3d0 = uStack_350;
    uStack_3c8 = uStack_348;
    uStack_3c0 = uStack_340;
    uStack_3b8 = uStack_338;
    func_0x0e30f750(auStack_548,lStack_368 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b8c7f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b8c7f;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30fd80(auStack_548,&lStack_3e8,&UNK_0133aff6,0x10,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_048b3f30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_048b2190;
    puStack_570 = &UNK_0e318000;
    puStack_568 = &UNK_0e3181e0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e310040(auStack_548);
    uStack_2f8 = (undefined1)uStack_3b8;
    uStack_308 = uStack_3c8;
    uStack_300 = uStack_3c0;
    puStack_318 = puStack_3d8;
    uStack_310 = uStack_3d0;
    lStack_328 = lStack_3e8;
    lStack_320 = lStack_3e0;
    func_0x048b0bc0(auStack_530);
    auStack_408._8_8_ = uStack_300;
    auStack_408._0_8_ = uStack_308;
    auStack_428._8_8_ = lStack_320;
    auStack_428._0_8_ = lStack_328;
    puStack_418 = puStack_318;
    uStack_410 = uStack_310;
    uStack_3f8 = CONCAT71(uStack_2f7,uStack_2f8);
    func_0x0e30f750(auStack_548,lStack_328 + 0x18);
    if (auStack_530._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != auStack_530._0_4_) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while (lVar14 != auStack_548._8_8_) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0e2b8eff:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (auStack_530._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != auStack_530._0_4_) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_0e2b8eff;
      }
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e30fd80(auStack_548,auStack_428,&UNK_0129ebf0,0xc,0x10);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f2ce5d8;
    uVar4 = auStack_530._0_8_;
    auStack_530._0_8_ = puVar10;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
    plStack_5a8 = (long *)0x0;
    uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
    pcStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0da79540;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0b6acf10;
    puStack_570 = &UNK_0e3183c0;
    puStack_568 = &UNK_0e318620;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar4 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_558._8_8_ + 8);
      lVar14 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e310040(auStack_548);
    func_0x048b0bc0(auStack_530);
    lVar14 = func_0x0b2a7630(lStack_3b0);
    if (*(int *)(lVar14 + 0x60) != -0x2b3da790) goto LAB_0e2b908e;
LAB_0e2b904c:
    lVar14 = *(long *)(lVar14 + 0x68);
    if (lVar14 == 0) goto LAB_0e2b908e;
    bVar23 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar23) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e318800(&lStack_468,param_1,lVar13,uVar17);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e2b821b;
LAB_0e2b8277:
    func_0x0e30f160(&lStack_468,param_1,&UNK_01426f19,0xf);
    if (cStack_438 == '\0') goto LAB_0e2b829d;
LAB_0e2b8258:
    lVar14 = func_0x0b2a7630(lStack_3b0);
    if (*(int *)(lVar14 + 0x60) == -0x2b3da790) goto LAB_0e2b904c;
LAB_0e2b908e:
    func_0x0e318800(&lStack_468,param_1,&UNK_013f3b3e,0xb);
  }
  if (cStack_438 != '\0') {
    return;
  }
  lVar13 = lStack_468 + 0x18;
  lVar14 = func_0x0b2a7630(lVar13);
  for (pbVar18 = *(byte **)(lStack_468 + 0x50); pbVar18 != *(byte **)(lStack_468 + 0x58);
      pbVar18 = pbVar18 + 0x38) {
    bVar3 = *pbVar18;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e2b915a;
    }
    else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e2b915a:
      if ((bVar3 & 1) == 0) {
        pbVar20 = pbVar18 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar18 + 0x10);
      }
      auVar24[0] = -(*pbVar20 == DAT_014eaba0);
      auVar24[1] = -(pbVar20[1] == DAT_014eaba0._1_1_);
      auVar24[2] = -(pbVar20[2] == DAT_014eaba0._2_1_);
      auVar24[3] = -(pbVar20[3] == DAT_014eaba0._3_1_);
      auVar24[4] = -(pbVar20[4] == DAT_014eaba0._4_1_);
      auVar24[5] = -(pbVar20[5] == DAT_014eaba0._5_1_);
      auVar24[6] = -(pbVar20[6] == DAT_014eaba0._6_1_);
      auVar24[7] = -(pbVar20[7] == DAT_014eaba0._7_1_);
      auVar24[8] = -(pbVar20[8] == DAT_014eaba0._8_1_);
      auVar24[9] = -(pbVar20[9] == DAT_014eaba0._9_1_);
      auVar24[10] = -(pbVar20[10] == DAT_014eaba0._10_1_);
      auVar24[0xb] = -(pbVar20[0xb] == DAT_014eaba0._11_1_);
      auVar24[0xc] = -(pbVar20[0xc] == DAT_014eaba0._12_1_);
      auVar24[0xd] = -(pbVar20[0xd] == DAT_014eaba0._13_1_);
      auVar24[0xe] = -(pbVar20[0xe] == DAT_014eaba0._14_1_);
      auVar24[0xf] = -(pbVar20[0xf] == DAT_014eaba0._15_1_);
      auVar25[0] = -(pbVar20[10] == DAT_014e4ff0);
      auVar25[1] = -(pbVar20[0xb] == DAT_014e4ff0._1_1_);
      auVar25[2] = -(pbVar20[0xc] == DAT_014e4ff0._2_1_);
      auVar25[3] = -(pbVar20[0xd] == DAT_014e4ff0._3_1_);
      auVar25[4] = -(pbVar20[0xe] == DAT_014e4ff0._4_1_);
      auVar25[5] = -(pbVar20[0xf] == DAT_014e4ff0._5_1_);
      auVar25[6] = -(pbVar20[0x10] == DAT_014e4ff0._6_1_);
      auVar25[7] = -(pbVar20[0x11] == DAT_014e4ff0._7_1_);
      auVar25[8] = -(pbVar20[0x12] == DAT_014e4ff0._8_1_);
      auVar25[9] = -(pbVar20[0x13] == DAT_014e4ff0._9_1_);
      auVar25[10] = -(pbVar20[0x14] == DAT_014e4ff0._10_1_);
      auVar25[0xb] = -(pbVar20[0x15] == DAT_014e4ff0._11_1_);
      auVar25[0xc] = -(pbVar20[0x16] == DAT_014e4ff0._12_1_);
      auVar25[0xd] = -(pbVar20[0x17] == DAT_014e4ff0._13_1_);
      auVar25[0xe] = -(pbVar20[0x18] == DAT_014e4ff0._14_1_);
      auVar25[0xf] = -(pbVar20[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar18 == *(byte **)(lStack_468 + 0x58)) {
LAB_0e2b9189:
    if ((int)uStack_440 == 0) {
      if ((*(int *)(lVar14 + 0x60) != -0x2b3da790) || (*(long *)(lVar14 + 0x68) == 0))
      goto LAB_0e2b91fd;
      lVar14 = *(long *)(lVar14 + 0x68) + 0x38;
    }
    else {
      auStack_548._0_8_ = func_0x048b0c90(lVar13,lVar14,uStack_440._4_4_,1);
      if (auStack_548._0_8_ == 0) {
        auStack_548 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_548);
        if (auStack_548._0_8_ == 0) goto LAB_0e2b91fd;
      }
      if ((*(int *)(auStack_548._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_548._0_8_ + 0x58) != 0)) {
        lVar14 = *(long *)(auStack_548._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2b91fd:
        lVar14 = 0;
      }
    }
    uStack_5a0 = (long *)&UNK_0488e0b0;
    pcStack_598 = (code *)0x0;
    uStack_590 = CONCAT35(uStack_590._5_3_,0x48b5725f);
    uStack_5b0 = 0;
    auStack_548 = (undefined1  [16])0x0;
    auStack_530 = ZEXT816(0x488e0b0);
    auStack_520._0_5_ = 0x48b5725f;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    auStack_428._8_8_ = 0x1a;
    auStack_428._0_8_ = 0x21;
    *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar10 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar10 = _DAT_013bbacd;
    puVar10[1] = uVar4;
    *(undefined1 *)((long)puVar10 + 0x1a) = 0;
    puStack_418 = puVar10;
    lVar14 = func_0x048b5060(lVar14,auStack_428);
    *(undefined8 *)(lVar14 + 0x20) = 0;
    if ((undefined1 *)(lVar14 + 0x20) == auStack_548) {
      pcVar16 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
        puVar10 = (undefined8 *)(lVar14 + 0x28);
        (**(code **)(lVar14 + 0x40))(puVar10);
        if (auStack_520[4] != '\0') {
          if (auStack_520[4] == '\x02') {
            (*(code *)auStack_530._0_8_)(5,auStack_548 + 8,puVar10);
          }
          else {
            uVar4 = auStack_548._8_8_;
            auStack_548._8_8_ = 0;
            *puVar10 = uVar4;
          }
        }
      }
      *(undefined8 *)(lVar14 + 0x38) = auStack_530._0_8_;
      *(undefined8 *)(lVar14 + 0x40) = auStack_530._8_8_;
      *(undefined4 *)(lVar14 + 0x48) = auStack_520._0_4_;
      *(char *)(lVar14 + 0x4c) = auStack_520[4];
      pcVar16 = (code *)auStack_530._8_8_;
    }
    if ((auStack_428[0] & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_418,auStack_428._0_8_ & 0xfffffffffffffffe);
      pcVar16 = (code *)auStack_530._8_8_;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(auStack_548 + 8);
    }
    if (pcStack_598 != (code *)0x0) {
      (*pcStack_598)(&uStack_5b0);
    }
  }
  else {
    iVar7 = *(int *)(pbVar18 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      FUN_0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0e2b9189;
  }
  lStack_368 = lStack_460;
  puStack_360 = puStack_458;
  puStack_358 = (undefined8 *)uStack_450;
  uStack_350 = uStack_448;
  lStack_3b0 = CONCAT44(lStack_3b0._4_4_,(int)uStack_440);
  uStack_470 = uStack_440._4_4_;
  uStack_270 = CONCAT71(uStack_437,cStack_438);
  uStack_3a8 = CONCAT62(CONCAT51(uStack_3a8._3_5_,uStack_46a),uStack_46c);
  uStack_46c = 0;
  uStack_46a = 0;
  lVar14 = func_0x0b2a7630(lStack_468 + 0x18);
  pbVar20 = *(byte **)(lStack_468 + 0x58);
  for (pbVar18 = *(byte **)(lStack_468 + 0x50); pbVar18 != pbVar20; pbVar18 = pbVar18 + 0x38) {
    bVar3 = *pbVar18;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x24) goto LAB_0e2b968a;
    }
    else if (*(long *)(pbVar18 + 8) == 0x24) {
LAB_0e2b968a:
      if ((bVar3 & 1) == 0) {
        pbVar21 = pbVar18 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar18 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar21,0x24);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar18 == pbVar20) {
LAB_0e2b96b7:
    if ((int)lStack_3b0 == 0) {
      if ((*(int *)(lVar14 + 0x60) != -0x2b3da790) || (*(long *)(lVar14 + 0x68) == 0))
      goto LAB_0e2b972a;
      lVar14 = *(long *)(lVar14 + 0x68) + 0x38;
    }
    else {
      lVar14 = func_0x048b0c90(lStack_468 + 0x18,lVar14,uStack_470,1);
      if (lVar14 == 0) {
        auStack_548 = ZEXT816(0);
        func_0x048b0d20(auStack_548);
        lVar14 = auStack_548._0_8_;
        if (auStack_548._0_8_ == 0) goto LAB_0e2b972a;
      }
      if ((*(int *)(lVar14 + 0x50) == -0x45dcb126) && (*(long *)(lVar14 + 0x58) != 0)) {
        lVar14 = *(long *)(lVar14 + 0x58) + 0x40;
      }
      else {
LAB_0e2b972a:
        lVar14 = 0;
      }
    }
    uStack_5b0 = 0;
    uStack_5a0 = (long *)&UNK_048b4ab0;
    pcStack_598 = (code *)&UNK_048b49f0;
    uStack_590 = CONCAT35(uStack_590._5_3_,0x1d33bd9c5);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar10 = 0x52206e7761705316;
    *(undefined4 *)(puVar10 + 1) = 0x73656c75;
    *(undefined1 *)((long)puVar10 + 0xc) = 0;
    *(undefined2 *)((long)puVar10 + 0xd) = (undefined2)uStack_3a8;
    *(undefined1 *)((long)puVar10 + 0xf) = uStack_3a8._2_1_;
    puVar10[2] = 0;
    uStack_3a8 = uStack_3a8 & 0xffffffffff000000;
    *(undefined2 *)(puVar10 + 3) = 0x1100;
    puVar10[4] = 0x1003c00150001;
    puVar10[5] = &UNK_01254d89;
    puVar10[6] = &UNK_01254d89;
    auStack_530._8_8_ = &UNK_048b49f0;
    auStack_530._0_8_ = &UNK_048b4ab0;
    auStack_520._0_5_ = 0x1d33bd9c5;
    uStack_5b0 = 0;
    auStack_548._8_8_ = puVar10;
    auStack_548._0_8_ = &UNK_048b46e0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar4 = _UNK_014518c1;
    auStack_428._8_8_ = 0x24;
    auStack_428._0_8_ = 0x29;
    puVar10[2] = _DAT_014518b9;
    puVar10[3] = uVar4;
    uVar4 = _UNK_014518b1;
    *puVar10 = _DAT_014518a9;
    puVar10[1] = uVar4;
    *(undefined4 *)(puVar10 + 4) = 0x5d797472;
    *(undefined1 *)((long)puVar10 + 0x24) = 0;
    puStack_418 = puVar10;
    lVar14 = func_0x048b5060(lVar14,auStack_428);
    *(undefined **)(lVar14 + 0x20) = &UNK_048b46e0;
    pcVar16 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar14 + 0x20) != auStack_548) {
      puVar10 = (undefined8 *)(lVar14 + 0x28);
      if (*(code **)(lVar14 + 0x40) == (code *)0x0) {
LAB_0e2b9902:
        uVar4 = auStack_548._8_8_;
        auStack_548._8_8_ = 0;
        *puVar10 = uVar4;
      }
      else {
        (**(code **)(lVar14 + 0x40))(puVar10);
        if (auStack_520[4] != '\0') {
          if (auStack_520[4] != '\x02') goto LAB_0e2b9902;
          (*(code *)auStack_530._0_8_)(5,auStack_548 + 8,puVar10);
        }
      }
      *(undefined8 *)(lVar14 + 0x38) = auStack_530._0_8_;
      *(undefined8 *)(lVar14 + 0x40) = auStack_530._8_8_;
      *(undefined4 *)(lVar14 + 0x48) = auStack_520._0_4_;
      *(char *)(lVar14 + 0x4c) = auStack_520[4];
      pcVar16 = (code *)auStack_530._8_8_;
    }
    if ((auStack_428[0] & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_418,auStack_428._0_8_ & 0xfffffffffffffffe);
      pcVar16 = (code *)auStack_530._8_8_;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(auStack_548 + 8);
    }
    if (pcStack_598 != (code *)0x0) {
      (*pcStack_598)(&uStack_5b0);
    }
  }
  else {
    iVar7 = *(int *)(pbVar18 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    if (iVar7 == _DAT_0f550754) goto LAB_0e2b96b7;
  }
  lStack_3e8 = lStack_468;
  lStack_3e0 = lStack_368;
  puStack_3d8 = puStack_360;
  uStack_3d0 = puStack_358;
  uStack_3c8 = uStack_350;
  uStack_3c0 = CONCAT44(uStack_470,(int)lStack_3b0);
  uStack_3b8 = uStack_270;
  func_0x0e319120(auStack_548,&lStack_3e8,&UNK_011ea907,0xb,1);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4b5660;
  uVar4 = auStack_530._0_8_;
  auStack_530._0_8_ = puVar10;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
  plStack_5a8 = (long *)0x0;
  uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
  pcStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0e319850;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &UNK_0e305960;
  puStack_570 = &UNK_0e319910;
  puStack_568 = &UNK_0e319ad0;
  uStack_560 = 0;
  auStack_558 = ZEXT816(0);
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar4 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_558._8_8_ + 8);
    lVar14 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e319320(auStack_548);
  uStack_2f8 = (undefined1)uStack_3b8;
  uStack_308 = uStack_3c8;
  uStack_300 = uStack_3c0;
  puStack_318 = puStack_3d8;
  uStack_310 = uStack_3d0;
  lStack_328 = lStack_3e8;
  lStack_320 = lStack_3e0;
  func_0x048b0bc0(auStack_530);
  func_0x0e319120(auStack_548,&lStack_328,&UNK_0147349c,9,0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4b56d8;
  uVar4 = auStack_530._0_8_;
  auStack_530._0_8_ = puVar10;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
  plStack_5a8 = (long *)0x0;
  uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
  pcStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0e31b170;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &UNK_0e31ada0;
  puStack_570 = &UNK_0e31b230;
  puStack_568 = &UNK_0e31b490;
  uStack_560 = 0;
  auStack_558 = ZEXT816(0);
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar4 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_558._8_8_ + 8);
    lVar14 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e319320(auStack_548);
  uStack_3f8 = CONCAT71(uStack_3f8._1_7_,uStack_2f8);
  auStack_408._8_8_ = uStack_300;
  auStack_408._0_8_ = uStack_308;
  puStack_418 = puStack_318;
  uStack_410 = uStack_310;
  auStack_428._8_8_ = lStack_320;
  auStack_428._0_8_ = lStack_328;
  func_0x048b0bc0(auStack_530);
  func_0x0e318d40(auStack_548,auStack_428._0_8_ + 0x18);
  if (auStack_530._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x60);
    iVar7 = *piVar12;
    while (iVar7 != auStack_530._0_4_) {
      piVar12 = piVar12 + 0x16;
      iVar7 = *piVar12;
    }
    lVar14 = *(long *)(piVar12 + 0xc);
    while (lVar14 != auStack_548._8_8_) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar14 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (auStack_530._4_4_ != 1) {
      if (auStack_530._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_534,uStack_538) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
      goto LAB_0e2b9d43;
    }
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_534,uStack_538) + 0x78) + 0x48);
    iVar7 = *piVar12;
    while (iVar7 != auStack_530._0_4_) {
      piVar12 = piVar12 + 0x1a;
      iVar7 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
LAB_0e2b9d43:
  func_0x0e319120(auStack_548,auStack_428,&UNK_014526bb,10,0x10);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4b57c8;
  uVar4 = auStack_530._0_8_;
  auStack_530._0_8_ = puVar10;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_538);
  plStack_5a8 = (long *)0x0;
  uStack_5a0 = (long *)((ulong)uStack_5a0 & 0xffffffff00000000);
  pcStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0e31eeb0;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &UNK_0e31d8e0;
  puStack_570 = &UNK_0e31ef70;
  puStack_568 = &UNK_0e31f2a0;
  uStack_560 = 0;
  auStack_558 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar4 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_558._8_8_ + 8);
    lVar14 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e319320(auStack_548);
  func_0x048b0bc0(auStack_530);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
