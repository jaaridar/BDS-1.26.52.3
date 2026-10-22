/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe975300 (ELF vaddr 0xe875300)
 * Label: callee-of:0xe706340
 * Body:  [[0e975300, 0e979147] [0e979150, 0e979192] [0e9791a0, 0e979eaa]]
 * Ghidra: FUN_0e975300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e975300(long param_1)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long *plVar15;
  byte *pbVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  uint *puVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong uStack_560;
  long lStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined *puStack_538;
  undefined1 *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined4 uStack_510;
  undefined1 auStack_508 [16];
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  int iStack_4d0;
  uint uStack_4cc;
  undefined4 uStack_4c8;
  undefined8 uStack_4c4;
  undefined1 auStack_4b8 [16];
  undefined4 uStack_4a8;
  code *pcStack_4a0;
  code *pcStack_498;
  undefined4 uStack_490;
  char cStack_48c;
  ulong uStack_488;
  long lStack_480;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  int iStack_3c0;
  uint uStack_3bc;
  undefined4 uStack_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  int iStack_380;
  uint uStack_37c;
  undefined4 uStack_378;
  uint uStack_374;
  undefined4 uStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  int iStack_340;
  uint uStack_33c;
  undefined4 uStack_338;
  uint uStack_334;
  undefined4 uStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  int iStack_300;
  uint uStack_2fc;
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined4 uStack_2b8;
  undefined8 uStack_2b4;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined4 uStack_278;
  undefined8 uStack_274;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined4 uStack_238;
  undefined8 uStack_234;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((DAT_0f767738 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767738), iVar7 != 0)) {
    func_0x0e9ea000();
    __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
    FUN_0410844d(&DAT_0f767738);
  }
  lVar12 = param_1 + 0x18;
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7676b8 + 4)) * 8);
  do {
    lVar17 = *plVar15;
    if (lVar17 == -1) goto LAB_0e975380;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0e975380:
    puVar9 = &DAT_0f7676b8;
    if (iRam000000000f767718 != -0x2b3da790) goto LAB_0e9753d8;
LAB_0e9753ab:
    lVar17 = *(long *)(puVar9 + 0x68);
    if (lVar17 == 0) goto LAB_0e9753d8;
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar17 + 9);
    if (bVar22) {
      puVar9 = *(undefined **)(lVar17 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar17 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar15[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e9753ab;
LAB_0e9753d8:
    puVar9 = &UNK_014dfbdd;
    uVar18 = 10;
  }
  func_0x0e9ea440(&puStack_3e8,param_1,puVar9,uVar18);
  uStack_3b4 = uStack_3b4 & 0xffffff00;
  uStack_3b0 = uStack_3b0 & 0xffffff00;
  if ((char)uStack_3b8 == '\0') {
    lStack_60 = lVar12;
    func_0x0e9edcc0(auStack_4b8,&UNK_013747db,7);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar12 = (long)&uStack_490 + 1;
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_3bc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_3bc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_3bc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_3bc = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_3bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_3bc = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_3bc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    iStack_3c0 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_3bc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee390;
    puStack_518 = &UNK_0e9ee3a0;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_3e0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_3d0;
    uStack_4e0 = uStack_3c8;
    puStack_4f8 = puStack_3e0;
    puStack_4f0 = puStack_3d8;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e97566f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e97566f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_3b0 == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_3e8);
    }
    uVar5 = uStack_3b4;
    puVar13 = puStack_3e8;
    if ((DAT_0f767738 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767738), iVar7 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e975701;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e975701:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar21 != puVar2 && (*puVar21 != uVar5)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar2) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(puVar21 + 2,&uStack_3bc,&uStack_3bc,&uStack_560);
    uStack_2f4 = CONCAT44(uStack_3b0,uStack_3b4);
    puStack_328 = puStack_3e8;
    puStack_320 = puStack_3e0;
    puStack_318 = puStack_3d8;
    uStack_310 = uStack_3d0;
    uStack_308 = uStack_3c8;
    iStack_300 = iStack_3c0;
    uStack_2fc = uStack_3bc;
    uStack_2f8 = uStack_3b8;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_011e8729,0xf);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_2fc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_2fc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_2fc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_2fc = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_2fc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_2fc = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_2fc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    iStack_300 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_2fc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee5b0;
    puStack_518 = &UNK_0e9ee5c0;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_320,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_310;
    uStack_4e0 = uStack_308;
    puStack_4f8 = puStack_320;
    puStack_4f0 = puStack_318;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e975a7f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e975a7f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_2f4._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_328);
    }
    puVar13 = puStack_328;
    iVar7 = (int)uStack_2f4;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e975b11;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e975b11:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_2fc,&uStack_2fc,&uStack_560);
    puStack_2e8 = puStack_328;
    puStack_2e0 = puStack_320;
    puStack_2d8 = puStack_318;
    uStack_2d0 = uStack_310;
    uStack_2c8 = uStack_308;
    uStack_2c0 = iStack_300;
    uStack_2bc = uStack_2fc;
    uStack_2b8 = uStack_2f8;
    uStack_2b4 = uStack_2f4;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_0136e07c,5);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_2bc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_2bc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_2bc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_2bc = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_2bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_2bc = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_2bc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_2c0 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_2bc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee610;
    puStack_518 = &UNK_0e9ee620;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_2e0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_2d0;
    uStack_4e0 = uStack_2c8;
    puStack_4f8 = puStack_2e0;
    puStack_4f0 = puStack_2d8;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e975e8f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e975e8f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_2b4._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_2e8);
    }
    puVar13 = puStack_2e8;
    iVar7 = (int)uStack_2b4;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e975f21;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e975f21:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_2bc,&uStack_2bc,&uStack_560);
    puStack_2a8 = puStack_2e8;
    puStack_2a0 = puStack_2e0;
    puStack_298 = puStack_2d8;
    uStack_290 = uStack_2d0;
    uStack_288 = uStack_2c8;
    uStack_280 = uStack_2c0;
    uStack_27c = uStack_2bc;
    uStack_278 = uStack_2b8;
    uStack_274 = uStack_2b4;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_0146f936,5);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_27c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_27c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_27c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_27c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_27c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_27c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_27c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_280 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_27c);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee670;
    puStack_518 = &UNK_0e9ee680;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_2a0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_290;
    uStack_4e0 = uStack_288;
    puStack_4f8 = puStack_2a0;
    puStack_4f0 = puStack_298;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e97629f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e97629f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_274._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_2a8);
    }
    puVar13 = puStack_2a8;
    iVar7 = (int)uStack_274;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e976331;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e976331:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_27c,&uStack_27c,&uStack_560);
    puStack_268 = puStack_2a8;
    puStack_260 = puStack_2a0;
    puStack_258 = puStack_298;
    uStack_250 = uStack_290;
    uStack_248 = uStack_288;
    uStack_240 = uStack_280;
    uStack_23c = uStack_27c;
    uStack_238 = uStack_278;
    uStack_234 = uStack_274;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_01357210,10);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_23c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_23c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_23c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_23c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_23c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_23c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_23c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_240 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_23c);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee6d0;
    puStack_518 = &UNK_0e9ee6e0;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_260,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_250;
    uStack_4e0 = uStack_248;
    puStack_4f8 = puStack_260;
    puStack_4f0 = puStack_258;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e9766af:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e9766af;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_234._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_268);
    }
    puVar13 = puStack_268;
    iVar7 = (int)uStack_234;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e976741;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e976741:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_23c,&uStack_23c,&uStack_560);
    puStack_228 = puStack_268;
    puStack_220 = puStack_260;
    puStack_218 = puStack_258;
    uStack_210 = uStack_250;
    uStack_208 = uStack_248;
    uStack_200 = uStack_240;
    uStack_1fc = uStack_23c;
    uStack_1f8 = uStack_238;
    uStack_1f4 = uStack_234;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_013726ff,8);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_1fc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_1fc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_1fc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_1fc = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_1fc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_1fc = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_1fc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_200 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_1fc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee730;
    puStack_518 = &UNK_0e9ee740;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_220,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_210;
    uStack_4e0 = uStack_208;
    puStack_4f8 = puStack_220;
    puStack_4f0 = puStack_218;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e976abf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e976abf;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_1f4._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_228);
    }
    puVar13 = puStack_228;
    iVar7 = (int)uStack_1f4;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e976b51;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e976b51:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_1fc,&uStack_1fc,&uStack_560);
    puStack_1e8 = puStack_228;
    puStack_1e0 = puStack_220;
    puStack_1d8 = puStack_218;
    uStack_1d0 = uStack_210;
    uStack_1c8 = uStack_208;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_0146fa47,5);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_1bc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_1bc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_1bc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_1bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_1bc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_1c0 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_1bc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee790;
    puStack_518 = &UNK_0e9ee7a0;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_1e0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_1d0;
    uStack_4e0 = uStack_1c8;
    puStack_4f8 = puStack_1e0;
    puStack_4f0 = puStack_1d8;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e976ecf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e976ecf;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_1b4._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_1e8);
    }
    puVar13 = puStack_1e8;
    iVar7 = (int)uStack_1b4;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e976f61;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e976f61:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_1bc,&uStack_1bc,&uStack_560);
    puStack_1a8 = puStack_1e8;
    puStack_1a0 = puStack_1e0;
    puStack_198 = puStack_1d8;
    uStack_190 = uStack_1d0;
    uStack_188 = uStack_1c8;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_014a9ee9,9);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_17c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_17c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_17c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_17c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_180 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_17c);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee7f0;
    puStack_518 = &UNK_0e9ee800;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_1a0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_190;
    uStack_4e0 = uStack_188;
    puStack_4f8 = puStack_1a0;
    puStack_4f0 = puStack_198;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e9772df:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e9772df;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_174._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_1a8);
    }
    puVar13 = puStack_1a8;
    iVar7 = (int)uStack_174;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e977371;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e977371:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_17c,&uStack_17c,&uStack_560);
    puStack_168 = puStack_1a8;
    puStack_160 = puStack_1a0;
    puStack_158 = puStack_198;
    uStack_150 = uStack_190;
    uStack_148 = uStack_188;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    uStack_138 = uStack_178;
    uStack_134 = uStack_174;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_013c0f7b,9);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_13c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_13c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_13c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_13c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_13c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_13c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_13c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_140 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_13c);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee850;
    puStack_518 = &UNK_0e9ee860;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_160,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_150;
    uStack_4e0 = uStack_148;
    puStack_4f8 = puStack_160;
    puStack_4f0 = puStack_158;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e9776ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e9776ef;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_134._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_168);
    }
    puVar13 = puStack_168;
    iVar7 = (int)uStack_134;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e977781;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e977781:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_13c,&uStack_13c,&uStack_560);
    puStack_128 = puStack_168;
    puStack_120 = puStack_160;
    puStack_118 = puStack_158;
    uStack_110 = uStack_150;
    uStack_108 = uStack_148;
    uStack_100 = uStack_140;
    uStack_fc = uStack_13c;
    uStack_f8 = uStack_138;
    uStack_f4 = uStack_134;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_013c0f85,7);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_fc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_fc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_fc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                      ((int)*(char *)(lVar17 + 2 + uVar19) ^
                      ((int)*(char *)(lVar17 + 1 + uVar19) ^
                      ((int)*(char *)(lVar17 + uVar19) ^ uStack_fc) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_fc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_100 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_fc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee8b0;
    puStack_518 = &UNK_0e9ee8c0;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_120,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_110;
    uStack_4e0 = uStack_108;
    puStack_4f8 = puStack_120;
    puStack_4f0 = puStack_118;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e977aff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e977aff;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_f4._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_128);
    }
    puVar13 = puStack_128;
    iVar7 = (int)uStack_f4;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e977b91;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e977b91:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_fc,&uStack_fc,&uStack_560);
    puStack_e8 = puStack_128;
    puStack_e0 = puStack_120;
    puStack_d8 = puStack_118;
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    uStack_b8 = uStack_f8;
    uStack_b4 = uStack_f4;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_012b9263,0xc);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_bc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_bc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_bc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_bc = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                      ((int)*(char *)(lVar17 + 2 + uVar19) ^
                      ((int)*(char *)(lVar17 + 1 + uVar19) ^
                      ((int)*(char *)(lVar17 + uVar19) ^ uStack_bc) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_bc = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_bc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_c0 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_bc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee910;
    puStack_518 = &UNK_0e9ee920;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_e0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_d0;
    uStack_4e0 = uStack_c8;
    puStack_4f8 = puStack_e0;
    puStack_4f0 = puStack_d8;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e977f0f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e977f0f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_b4._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_e8);
    }
    puVar13 = puStack_e8;
    iVar7 = (int)uStack_b4;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e977fa1;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e977fa1:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_bc,&uStack_bc,&uStack_560);
    puStack_a8 = puStack_e8;
    puStack_a0 = puStack_e0;
    puStack_98 = puStack_d8;
    uStack_90 = uStack_d0;
    uStack_88 = uStack_c8;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_011feb08,5);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_7c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_7c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_7c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_7c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                      ((int)*(char *)(lVar17 + 2 + uVar19) ^
                      ((int)*(char *)(lVar17 + 1 + uVar19) ^
                      ((int)*(char *)(lVar17 + uVar19) ^ uStack_7c) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_7c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_7c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    uStack_80 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_7c);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee970;
    puStack_518 = &UNK_0e9ee980;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_a0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_90;
    uStack_4e0 = uStack_88;
    puStack_4f8 = puStack_a0;
    puStack_4f0 = puStack_98;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e97831f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e97831f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_74._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_a8);
    }
    puVar13 = puStack_a8;
    iVar7 = (int)uStack_74;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e9783b1;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e9783b1:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_7c,&uStack_7c,&uStack_560);
    puStack_368 = puStack_a8;
    puStack_360 = puStack_a0;
    puStack_358 = puStack_98;
    uStack_350 = uStack_90;
    uStack_348 = uStack_88;
    iStack_340 = uStack_80;
    uStack_33c = uStack_7c;
    uStack_338 = uStack_78;
    uStack_334 = (uint)uStack_74;
    uStack_330 = (undefined4)((ulong)uStack_74 >> 0x20);
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_013bcaaf,0xb);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_33c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_33c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_33c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_33c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_33c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_33c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_33c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    iStack_340 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_33c);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9ee9d0;
    puStack_518 = &UNK_0e9ee9e0;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_360,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_350;
    uStack_4e0 = uStack_348;
    puStack_4f8 = puStack_360;
    puStack_4f0 = puStack_358;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e97872f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e97872f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_330 == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_368);
    }
    uVar5 = uStack_334;
    puVar13 = puStack_368;
    if ((DAT_0f767738 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767738), iVar7 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e9787c1;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e9787c1:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != uVar5)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_33c,&uStack_33c,&uStack_560);
    puStack_3a8 = puStack_368;
    puStack_3a0 = puStack_360;
    puStack_398 = puStack_358;
    uStack_390 = uStack_350;
    uStack_388 = uStack_348;
    iStack_380 = iStack_340;
    uStack_37c = uStack_33c;
    uStack_378 = uStack_338;
    uStack_374 = uStack_334;
    uStack_370 = uStack_330;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_013daed9,8);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    lVar17 = lVar12;
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar17 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_37c = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_37c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_37c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_37c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_37c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_37c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_37c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    iStack_380 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_37c);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9eea30;
    puStack_518 = &UNK_0e9eea40;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_3a0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar17 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_4e8 = (undefined8 *)uStack_390;
    uStack_4e0 = uStack_388;
    puStack_4f8 = puStack_3a0;
    puStack_4f0 = puStack_398;
    func_0x0e9ee060(&uStack_560,&puStack_4f8,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while (lVar17 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_0e978b3f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e978b3f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)((long)puStack_550 + 0x18) = *(uint *)((long)puStack_550 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_370 == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_3a8);
    }
    uVar5 = uStack_374;
    puVar13 = puStack_3a8;
    if ((DAT_0f767738 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767738), iVar7 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e978bd1;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e978bd1:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != uVar5)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_37c,&uStack_37c,&uStack_560);
    puStack_4f8 = puStack_3a8;
    puStack_4f0 = puStack_3a0;
    puStack_4e8 = puStack_398;
    uStack_4e0 = uStack_390;
    uStack_4d8 = uStack_388;
    iStack_4d0 = iStack_380;
    uStack_4c4 = CONCAT44(uStack_370,uStack_374);
    uStack_4cc = uStack_37c;
    uStack_4c8 = uStack_378;
    func_0x048b0bc0(auStack_4b8);
    func_0x0e9edcc0(auStack_4b8,&UNK_01351fc9,5);
    uVar18 = (ulong)((byte)uStack_490 >> 1);
    if ((uStack_490 & 1) != 0) {
      uVar18 = uStack_488;
      lVar12 = lStack_480;
    }
    if (uVar18 == 0) {
      uStack_4cc = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_4cc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_4cc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_4cc = ((int)*(char *)(lVar12 + 3 + uVar19) ^
                       ((int)*(char *)(lVar12 + 2 + uVar19) ^
                       ((int)*(char *)(lVar12 + 1 + uVar19) ^
                       ((int)*(char *)(lVar12 + uVar19) ^ uStack_4cc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar10 != 0) {
        uVar18 = 0;
        do {
          uStack_4cc = ((int)*(char *)(lVar12 + uVar19 + uVar18) ^ uStack_4cc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar10 != uVar18);
      }
    }
    iStack_4d0 = 2;
    if ((DAT_0f767758 == '\0') && (iVar7 = func_0x04108328(&DAT_0f767758), iVar7 != 0)) {
      func_0x0e9ea110();
      FUN_0410844d(&DAT_0f767758);
    }
    uStack_560 = CONCAT44(uStack_560._4_4_,uStack_4cc);
    lStack_558 = 0;
    puStack_550 = (undefined *)CONCAT44(puStack_550._4_4_,3);
    uStack_548 = (code *)0x1;
    uStack_540 = 0;
    puStack_538 = &UNK_0e9ee2d0;
    puStack_530 = &SUB_048b06d0;
    puStack_528 = &UNK_0e9e9f40;
    puStack_520 = &UNK_0e9eea90;
    puStack_518 = &UNK_0e9eeaa0;
    uStack_510 = 0;
    auStack_508 = ZEXT816(0);
    func_0x048b05a0(&puStack_4f0,&uStack_560);
    uVar4 = auStack_508._8_8_;
    if ((long *)auStack_508._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_508._8_8_ + 8);
      lVar12 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    uStack_48 = uStack_4e0;
    uStack_40 = uStack_4d8;
    puStack_58 = puStack_4f0;
    puStack_50 = puStack_4e8;
    func_0x0e9ee060(&uStack_560,&puStack_58,auStack_4b8);
    if (uStack_548._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_550 + 0x78) + 0x60);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_548) {
        piVar11 = piVar11 + 0x16;
        iVar7 = *piVar11;
      }
      lVar12 = *(long *)(piVar11 + 0xc);
      while (lVar12 != lStack_558) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar12 = *(long *)(piVar11 + 0xc);
      }
LAB_0e978f4f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_548._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_550 + 0x78) + 0x48);
        iVar7 = *piVar11;
        while (iVar7 != (int)uStack_548) {
          piVar11 = piVar11 + 0x1a;
          iVar7 = *piVar11;
        }
        goto LAB_0e978f4f;
      }
      if (uStack_548._4_4_ == 0) {
        *(uint *)(puStack_550 + 0x18) = *(uint *)(puStack_550 + 0x18) | 0x90000;
      }
    }
    if (uStack_4c4._4_1_ == '\0') {
      func_0x0e9ee3f0(&uStack_560,&puStack_4f8);
    }
    puVar13 = puStack_4f8;
    iVar7 = (int)uStack_4c4;
    if ((DAT_0f767738 == '\0') && (iVar8 = func_0x04108328(&DAT_0f767738), iVar8 != 0)) {
      func_0x0e9ea000();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7676b8,0xf53dab8);
      FUN_0410844d(&DAT_0f767738);
    }
    lVar12 = lStack_60;
    plVar15 = (long *)(puVar13[3] +
                      (ulong)((int)((ulong)(puVar13[4] - puVar13[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7676b8 + 4)) * 8);
    do {
      lVar17 = *plVar15;
      if (lVar17 == -1) goto LAB_0e978fe0;
      plVar15 = (long *)(puVar13[6] + lVar17 * 0x18);
    } while (*(uint *)(puVar13[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f7676b8 + 4));
    if (plVar15 == (long *)puVar13[7]) {
LAB_0e978fe0:
      puVar9 = &DAT_0f7676b8;
    }
    else {
      puVar9 = (undefined *)plVar15[2];
    }
    piVar3 = *(int **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (piVar11 = *(int **)(*(long *)(puVar9 + 0x68) + 0x20);
        (piVar11 != piVar3 && (*piVar11 != iVar7)); piVar11 = piVar11 + 0xe) {
    }
    if ((piVar11 == piVar3) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b3d79),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_560 = uStack_560 & 0xffffffffffffff00;
    func_0x05d9c620(piVar11 + 2,&uStack_4cc,&uStack_4cc,&uStack_560);
    func_0x048b0bc0(auStack_4b8);
  }
  lVar12 = func_0x0e871b00(lVar12);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar22 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0e9eeaf0(&puStack_3e8,param_1,lVar17,uVar18);
  }
  else {
    func_0x0e9eeaf0(&puStack_3e8,param_1,&DAT_01e367b0,0x1a);
  }
  if ((char)uStack_3b8 != '\0') {
    return;
  }
  puVar13 = puStack_3e8 + 3;
  lVar12 = func_0x0e871b00(puVar13);
  for (pbVar16 = (byte *)puStack_3e8[10]; pbVar16 != (byte *)puStack_3e8[0xb];
      pbVar16 = pbVar16 + 0x38) {
    bVar1 = *pbVar16;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e9791aa;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0e9791aa:
      if ((bVar1 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar16 + 0x10);
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
  if (pbVar16 != (byte *)puStack_3e8[0xb]) {
    iVar7 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      FUN_0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar7 != _DAT_0f550ac4) goto LAB_0e979464;
  }
  if (iStack_3c0 == 0) {
    if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
    goto LAB_0e979256;
    lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
  }
  else {
    auStack_4b8._0_8_ = func_0x048b0c90(puVar13,lVar12,uStack_3bc,1);
    if (auStack_4b8._0_8_ == 0) {
      auStack_4b8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_4b8);
      if (auStack_4b8._0_8_ == 0) goto LAB_0e979256;
    }
    if ((*(int *)(auStack_4b8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_4b8._0_8_ + 0x58) != 0)) {
      lVar12 = *(long *)(auStack_4b8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e979256:
      lVar12 = 0;
    }
  }
  puStack_550 = &UNK_0488e0b0;
  uStack_548 = (code *)0x0;
  uStack_540 = CONCAT35(uStack_540._5_3_,0x48b5725f);
  uStack_560 = 0;
  auStack_4b8 = (undefined1  [16])0x0;
  pcStack_4a0 = (code *)&UNK_0488e0b0;
  pcStack_498 = (code *)0x0;
  uStack_490 = 0x48b5725f;
  cStack_48c = '\0';
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_013bbadf;
  puStack_4f8 = (undefined8 *)0x21;
  puStack_4f0 = (undefined8 *)0x1a;
  *(ulong *)((long)puVar13 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puVar13 + 0x12) = uVar4;
  uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puVar13 = _DAT_013bbacd;
  puVar13[1] = uVar4;
  *(undefined1 *)((long)puVar13 + 0x1a) = 0;
  puStack_4e8 = puVar13;
  lVar12 = func_0x048b5060(lVar12,&puStack_4f8);
  *(undefined8 *)(lVar12 + 0x20) = 0;
  if ((undefined1 *)(lVar12 + 0x20) == auStack_4b8) {
    pcVar14 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar12 + 0x40) != (code *)0x0) {
      puVar13 = (undefined8 *)(lVar12 + 0x28);
      (**(code **)(lVar12 + 0x40))(puVar13);
      if (cStack_48c != '\0') {
        if (cStack_48c == '\x02') {
          (*pcStack_4a0)(5,auStack_4b8 + 8,puVar13);
        }
        else {
          uVar4 = auStack_4b8._8_8_;
          auStack_4b8._8_8_ = 0;
          *puVar13 = uVar4;
        }
      }
    }
    *(code **)(lVar12 + 0x38) = pcStack_4a0;
    *(code **)(lVar12 + 0x40) = pcStack_498;
    *(uint *)(lVar12 + 0x48) = uStack_490;
    *(char *)(lVar12 + 0x4c) = cStack_48c;
    pcVar14 = pcStack_498;
  }
  if (((ulong)puStack_4f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_4e8,(ulong)puStack_4f8 & 0xfffffffffffffffe);
    pcVar14 = pcStack_498;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(auStack_4b8 + 8);
  }
  if (uStack_548 != (code *)0x0) {
    (*uStack_548)(&uStack_560);
  }
LAB_0e979464:
  uStack_334 = uStack_3b4;
  uStack_348 = uStack_3c8;
  iStack_340 = iStack_3c0;
  uStack_33c = uStack_3bc;
  puStack_358 = puStack_3d8;
  uStack_350 = uStack_3d0;
  puStack_368 = puStack_3e8;
  puStack_360 = puStack_3e0;
  puStack_3a8 = puStack_3e8;
  puStack_3a0 = puStack_3e0;
  puStack_398 = puStack_3d8;
  uStack_390 = uStack_3d0;
  uStack_388 = uStack_3c8;
  iStack_380 = iStack_3c0;
  uStack_37c = uStack_3bc;
  uStack_378._0_1_ = (char)uStack_3b8;
  uStack_374 = uStack_3b4;
  func_0x0e9ef3b0(auStack_4b8,&puStack_3a8,&UNK_01e367cb,10);
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar14 = &UNK_0f4d41e0;
  if (pcStack_4a0 != (code *)0x0) {
    lVar12 = *(long *)pcStack_4a0;
    pcStack_4a0 = pcVar14;
    (**(code **)(lVar12 + 8))();
    pcVar14 = pcStack_4a0;
  }
  pcStack_4a0 = pcVar14;
  uStack_560 = CONCAT44(uStack_560._4_4_,uStack_4a8);
  lStack_558 = 0;
  puStack_550 = (undefined *)((ulong)puStack_550 & 0xffffffff00000000);
  uStack_548 = (code *)0x1;
  uStack_540 = 0;
  puStack_538 = &UNK_0e9f0530;
  puStack_530 = &SUB_048b06d0;
  puStack_528 = &UNK_0e9f0180;
  puStack_520 = &UNK_0e9f05f0;
  puStack_518 = &UNK_0e9f0760;
  uStack_510 = 0;
  auStack_508 = ZEXT816(0);
  func_0x048b05a0(auStack_4b8._8_8_,&uStack_560);
  uVar4 = auStack_508._8_8_;
  if ((long *)auStack_508._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_508._8_8_ + 8);
    lVar12 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e9ef5a0(auStack_4b8);
  uStack_4c8 = CONCAT31(uStack_4c8._1_3_,(char)uStack_378);
  uStack_4d8 = uStack_388;
  iStack_4d0 = iStack_380;
  uStack_4cc = uStack_37c;
  puStack_4e8 = puStack_398;
  uStack_4e0 = uStack_390;
  puStack_4f8 = puStack_3a8;
  puStack_4f0 = puStack_3a0;
  func_0x048b0bc0(&pcStack_4a0);
  func_0x0e9ef3b0(auStack_4b8,&puStack_4f8,&UNK_01e367d6,0xc);
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar14 = &UNK_0f4b81f0;
  if (pcStack_4a0 != (code *)0x0) {
    lVar12 = *(long *)pcStack_4a0;
    pcStack_4a0 = pcVar14;
    (**(code **)(lVar12 + 8))();
    pcVar14 = pcStack_4a0;
  }
  pcStack_4a0 = pcVar14;
  uStack_560 = CONCAT44(uStack_560._4_4_,uStack_4a8);
  lStack_558 = 0;
  puStack_550 = (undefined *)((ulong)puStack_550 & 0xffffffff00000000);
  uStack_548 = (code *)0x1;
  uStack_540 = 0;
  puStack_538 = &UNK_0e9c5550;
  puStack_530 = &SUB_048b06d0;
  puStack_528 = &UNK_0e328450;
  puStack_520 = &UNK_0e9f0be0;
  puStack_518 = &UNK_0e9f0d50;
  uStack_510 = 0;
  auStack_508 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_4b8._8_8_,&uStack_560);
  uVar4 = auStack_508._8_8_;
  if ((long *)auStack_508._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_508._8_8_ + 8);
    lVar12 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_508._8_8_ + 0x10))(auStack_508._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e9ef5a0(auStack_4b8);
  func_0x048b0bc0(&pcStack_4a0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
