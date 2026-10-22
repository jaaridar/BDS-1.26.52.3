/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82e88f0 (ELF vaddr 0x81e88f0)
 * Label: caller-of-callee
 * Body:  [[082e88f0, 082e985b] [082e9860, 082ea1d4] [082ea1e0, 082ebf01] [082ebf10, 082ec147] [082ec150, 082ec911]]
 * Ghidra: FUN_082e88f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082e88f0(undefined *param_1)

{
  long *plVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  uint *puVar23;
  undefined *puVar24;
  bool bVar25;
  uint uStack_6f8;
  undefined4 uStack_6f4;
  long *plStack_6f0;
  long *plStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined *puStack_6d0;
  undefined1 *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_6b0;
  undefined4 uStack_6a8;
  undefined8 uStack_6a0;
  long *plStack_698;
  undefined1 uStack_689;
  ulong uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined4 *puStack_670;
  ulong uStack_668;
  long *plStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined *puStack_648;
  long lStack_640;
  undefined *puStack_638;
  ulong uStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined8 uStack_618;
  long lStack_610;
  long *plStack_608;
  long lStack_600;
  long lStack_5f8;
  undefined4 uStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined2 uStack_5b8;
  undefined2 uStack_5b6;
  uint uStack_5b4;
  uint uStack_5b0;
  undefined1 uStack_5ac;
  long lStack_5a8;
  undefined *puStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 uStack_578;
  char cStack_570;
  uint uStack_56c;
  char cStack_568;
  ulong uStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  int iStack_4f0;
  undefined4 uStack_4ec;
  undefined1 uStack_4e8;
  undefined3 uStack_4e3;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined1 uStack_4c8;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  int iStack_450;
  uint uStack_44c;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  int iStack_410;
  uint uStack_40c;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  int iStack_3d8;
  uint uStack_3d4;
  undefined1 uStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int iStack_3a0;
  uint uStack_39c;
  undefined8 uStack_398;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  int iStack_360;
  uint uStack_35c;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  int iStack_328;
  uint uStack_324;
  undefined1 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  uint uStack_2ec;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  uint uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  int iStack_270;
  uint uStack_26c;
  undefined8 uStack_268;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int iStack_230;
  uint uStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_170;
  uint uStack_16c;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  uint uStack_12c;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  uint uStack_ec;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  uint uStack_ac;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5d0720 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d0720), iVar9 != 0)) {
    func_0x083bcd30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d06a0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0720);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d06a0 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082e8960;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d06a0 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_082e8960:
    puVar10 = &DAT_0f5d06a0;
    if (iRam000000000f5d0700 != -0x2b3da790) goto LAB_082e89b8;
LAB_082e898b:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_082e89b8;
    bVar25 = (*(byte *)(lVar13 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar13 + 9);
    if (bVar25) {
      puVar10 = *(undefined **)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar25) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar12[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_082e898b;
LAB_082e89b8:
    puVar10 = &UNK_011be4ca;
    uVar16 = 0x14;
  }
  func_0x083bd170(&puStack_5a0,param_1,puVar10,uVar16);
  uStack_56c = uStack_56c & 0xffffff00;
  cStack_568 = '\0';
  if (cStack_570 == '\0') {
    func_0x083c09f0(&uStack_678,&UNK_013fd5eb,3);
    puVar10 = (undefined *)((ulong)uStack_650 >> 1 & 0x7f);
    lVar13 = (long)&uStack_650 + 1;
    if (((ulong)uStack_650 & 1) != 0) {
      puVar10 = puStack_648;
      lVar13 = lStack_640;
    }
    if (puVar10 == (undefined *)0x0) {
      uStack_578._4_4_ = 0x811c9dc5;
    }
    else {
      uVar16 = (ulong)((uint)puVar10 & 3);
      if (puVar10 < 4) {
        uStack_578._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_578._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_578._4_4_ =
               ((int)*(char *)(lVar13 + 3 + uVar20) ^
               ((int)*(char *)(lVar13 + 2 + uVar20) ^
               ((int)*(char *)(lVar13 + 1 + uVar20) ^
               ((int)*(char *)(lVar13 + uVar20) ^ uStack_578._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while (((ulong)puVar10 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar16 != 0) {
        uVar19 = 0;
        do {
          uStack_578._4_4_ =
               ((int)*(char *)(lVar13 + uVar20 + uVar19) ^ uStack_578._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar16 != uVar19);
      }
    }
    uStack_578._0_4_ = 2;
    uVar5 = (int)uStack_578;
    uStack_578._0_4_ = 2;
    if ((DAT_0f5d0740 == '\0') &&
       (uStack_578._0_4_ = uVar5, iVar9 = func_0x04108328(&DAT_0f5d0740), iVar9 != 0)) {
      func_0x083bce40();
      func_0x0410844d(&DAT_0f5d0740);
    }
    uStack_6f8 = uStack_578._4_4_;
    plStack_6f0 = (long *)0x0;
    plStack_6e8 = (long *)CONCAT44(plStack_6e8._4_4_,3);
    uStack_6e0 = (long *)0x1;
    uStack_6d8 = 0;
    puStack_6d0 = &UNK_083c0fa0;
    puStack_6c8 = &SUB_048b06d0;
    puStack_6c0 = &UNK_083bcc70;
    puStack_6b8 = &UNK_083c1060;
    puStack_6b0 = &UNK_083c1070;
    uStack_6a8 = 0;
    uStack_6a0 = 0;
    plStack_698 = (long *)0x0;
    func_0x048b05a0(&uStack_598,&uStack_6f8);
    plVar12 = plStack_698;
    if (plStack_698 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_698 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_698 + 0x10))(plStack_698);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_500 = uStack_580;
    uStack_4fc = uStack_57c;
    func_0x083c0d30(&uStack_6f8,&uStack_518,&uStack_678);
    if (uStack_6e0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_6e8 + 0x78) + 0x60);
      iVar9 = *piVar11;
      while (iVar9 != (int)uStack_6e0) {
        piVar11 = piVar11 + 0x16;
        iVar9 = *piVar11;
      }
      lVar13 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar13 != plStack_6f0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar13 = *(long *)(piVar11 + 0xc);
      }
LAB_082e8c4f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_6e0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_6e8 + 0x78) + 0x48);
        iVar9 = *piVar11;
        while (iVar9 != (int)uStack_6e0) {
          piVar11 = piVar11 + 0x1a;
          iVar9 = *piVar11;
        }
        goto LAB_082e8c4f;
      }
      if (uStack_6e0._4_4_ == 0) {
        *(uint *)((long)plStack_6e8 + 0x18) = *(uint *)((long)plStack_6e8 + 0x18) | 0x90000;
      }
    }
    if (cStack_568 == '\0') {
      func_0x083c10c0(&uStack_6f8,&puStack_5a0);
    }
    uVar18 = uStack_56c;
    puVar10 = puStack_5a0;
    if ((DAT_0f5d0720 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d0720), iVar9 != 0)) {
      func_0x083bcd30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d06a0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0720);
    }
    lVar13 = (long)&uStack_578 + 4;
    plVar12 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d06a0 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_082e8cf1;
      plVar12 = (long *)(*(long *)(puVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f5d06a0 + 4));
    if (plVar12 == *(long **)(puVar10 + 0x38)) {
LAB_082e8cf1:
      puVar10 = &DAT_0f5d06a0;
    }
    else {
      puVar10 = (undefined *)plVar12[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar23 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar23 != puVar3 && (*puVar23 != uVar18)); puVar23 = puVar23 + 0xe) {
    }
    if ((puVar23 == puVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0137ca2a),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_6f8 = uStack_6f8 & 0xffffff00;
    FUN_05d9c620(puVar23 + 2,lVar13,lVar13,&uStack_6f8);
    FUN_048b0bc0(&uStack_678);
    func_0x083c09f0(&uStack_678,&UNK_014cd911,6);
    puVar10 = (undefined *)(ulong)((byte)uStack_650 >> 1);
    lVar17 = (long)&uStack_650 + 1;
    if (((byte)uStack_650 & 1) != 0) {
      puVar10 = puStack_648;
      lVar17 = lStack_640;
    }
    if (puVar10 == (undefined *)0x0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar16 = (ulong)((uint)puVar10 & 3);
      if (puVar10 < 4) {
        uVar18 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uVar18 = ((int)*(char *)(lVar17 + 3 + uVar20) ^
                   ((int)*(char *)(lVar17 + 2 + uVar20) ^
                   ((int)*(char *)(lVar17 + 1 + uVar20) ^
                   ((int)*(char *)(lVar17 + uVar20) ^ uVar18) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar20 = uVar20 + 4;
        } while (((ulong)puVar10 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar16 != 0) {
        uVar19 = 0;
        do {
          uVar18 = ((int)*(char *)(lVar17 + uVar20 + uVar19) ^ uVar18) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar16 != uVar19);
      }
    }
    uStack_578 = CONCAT44(uVar18,2);
    if ((DAT_0f5d0740 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d0740), iVar9 != 0)) {
      func_0x083bce40();
      func_0x0410844d(&DAT_0f5d0740);
    }
    uStack_6f8 = uStack_578._4_4_;
    plStack_6f0 = (long *)0x0;
    plStack_6e8 = (long *)CONCAT44(plStack_6e8._4_4_,3);
    uStack_6e0 = (long *)0x1;
    uStack_6d8 = 0;
    puStack_6d0 = &UNK_083c0fa0;
    puStack_6c8 = &SUB_048b06d0;
    puStack_6c0 = &UNK_083bcc70;
    puStack_6b8 = &UNK_083c1280;
    puStack_6b0 = &UNK_083c1290;
    uStack_6a8 = 0;
    uStack_6a0 = 0;
    plStack_698 = (long *)0x0;
    func_0x048b05a0(&uStack_598,&uStack_6f8);
    plVar12 = plStack_698;
    if (plStack_698 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_698 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_698 + 0x10))(plStack_698);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_508 = (long *)CONCAT44(uStack_584,uStack_588);
    uStack_500 = uStack_580;
    uStack_4fc = uStack_57c;
    uStack_518 = (undefined *)CONCAT44(uStack_594,uStack_598);
    uStack_510 = (long *)CONCAT44(uStack_58c,uStack_590);
    func_0x083c0d30(&uStack_6f8,&uStack_518,&uStack_678);
    if (uStack_6e0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_6e8 + 0x78) + 0x60);
      iVar9 = *piVar11;
      while (iVar9 != (int)uStack_6e0) {
        piVar11 = piVar11 + 0x16;
        iVar9 = *piVar11;
      }
      lVar17 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar17 != plStack_6f0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar17 = *(long *)(piVar11 + 0xc);
      }
LAB_082e900f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_6e0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_6e8 + 0x78) + 0x48);
        iVar9 = *piVar11;
        while (iVar9 != (int)uStack_6e0) {
          piVar11 = piVar11 + 0x1a;
          iVar9 = *piVar11;
        }
        goto LAB_082e900f;
      }
      if (uStack_6e0._4_4_ == 0) {
        *(uint *)((long)plStack_6e8 + 0x18U) = *(uint *)((long)plStack_6e8 + 0x18U) | 0x90000;
      }
    }
    if (cStack_568 == '\0') {
      func_0x083c10c0(&uStack_6f8,&puStack_5a0);
    }
    uVar18 = uStack_56c;
    puVar10 = puStack_5a0;
    if ((DAT_0f5d0720 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d0720), iVar9 != 0)) {
      func_0x083bcd30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d06a0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0720);
    }
    plVar12 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d06a0 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_082e90a0;
      plVar12 = (long *)(*(long *)(puVar10 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f5d06a0 + 4));
    if (plVar12 == *(long **)(puVar10 + 0x38)) {
LAB_082e90a0:
      puVar10 = &DAT_0f5d06a0;
    }
    else {
      puVar10 = (undefined *)plVar12[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar23 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar23 != puVar3 && (*puVar23 != uVar18)); puVar23 = puVar23 + 0xe) {
    }
    if ((puVar23 == puVar3) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0137ca2a),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_6f8 = uStack_6f8 & 0xffffff00;
    FUN_05d9c620(puVar23 + 2,lVar13,lVar13,&uStack_6f8);
    FUN_048b0bc0(&uStack_678);
  }
  func_0x07820f40(param_1);
  func_0x07be4b40(param_1);
  func_0x07877320(param_1);
  func_0x078e9cb0(param_1);
  func_0x07bf3530(param_1);
  if ((DAT_0f5d07d8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d07d8), iVar9 != 0)) {
    func_0x083c13a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0758,0xf53dab8);
    func_0x0410844d(&DAT_0f5d07d8);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0758 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082e91d0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d0758 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_082e91d0:
    puVar10 = &DAT_0f5d0758;
    if (iRam000000000f5d07b8 != -0x2b3da790) goto LAB_082e923d;
LAB_082e91fb:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_082e923d;
    bVar25 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar17 = lVar13 + 9;
    if (bVar25) {
      lVar17 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar25) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    FUN_083c1870(&puStack_5a0,param_1,lVar17,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar12[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_082e91fb;
LAB_082e923d:
    FUN_083c1870(&puStack_5a0,param_1,&UNK_01229283,0x15);
  }
  if (cStack_570 != '\0') goto LAB_082e9af7;
  uStack_680._4_4_ = (undefined4)((ulong)uStack_680 >> 0x20);
  func_0x083c23d0(&uStack_678,&puStack_5a0,&UNK_011d6fc6,6);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f116df8;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_083c0fa0;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &UNK_083bcc70;
  puStack_6b8 = &UNK_083c2960;
  puStack_6b0 = &UNK_083c2ac0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c2660(&uStack_678);
  puVar10 = puStack_5a0;
  uStack_438 = (undefined *)CONCAT44(uStack_594,uStack_598);
  uStack_430 = (undefined *)CONCAT44(uStack_58c,uStack_590);
  uStack_428 = uStack_588;
  uStack_424 = uStack_584;
  uStack_420 = uStack_580;
  uStack_41c = uStack_57c;
  iVar9 = (int)uStack_578;
  uVar16 = uStack_578 & 0xffffffff;
  uVar18 = uStack_578._4_4_;
  puVar14 = (undefined *)(ulong)uStack_578._4_4_;
  uStack_560 = CONCAT71(uStack_560._1_7_,cStack_570);
  FUN_048b0bc0(&plStack_660);
  if ((DAT_0f5d07d8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d07d8), iVar8 != 0)) {
    func_0x083c13a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0758,0xf53dab8);
    func_0x0410844d(&DAT_0f5d07d8);
  }
  ppuVar22 = (undefined **)(puVar10 + 0x18);
  plVar12 = (long *)(*(long *)(puVar10 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0758 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082e9450;
    plVar12 = (long *)(*(long *)(puVar10 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d0758 + 4))
  ;
  if (plVar12 == *(long **)(puVar10 + 0x38)) {
LAB_082e9450:
    puVar24 = &DAT_0f5d0758;
  }
  else {
    puVar24 = (undefined *)plVar12[2];
  }
  if ((1 < iVar9 - 1U) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014cf5a2),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar13 = func_0x048b0c90(ppuVar22,puVar24,puVar14,1);
  if (lVar13 == 0) {
    uStack_678 = (undefined *)0x0;
    puStack_670 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_678);
    lVar13 = (long)uStack_678;
  }
  *(undefined1 *)(*(long *)(lVar13 + 0x58) + 0xa8) = 4;
  uStack_540 = 0xff;
  uStack_550 = (long *)0xffffffffffffffff;
  uStack_548 = (undefined *)0x0;
  puStack_558 = &UNK_0f4e3aa0;
  uStack_538 = 0;
  uStack_530 = 0;
  lStack_528 = 0;
  uStack_318 = CONCAT31(uStack_318._1_3_,1);
  ppuVar21 = &puStack_558;
  uStack_688 = uVar16;
  func_0x082edcd0(ppuVar21,&uStack_318);
  lVar13 = uStack_538;
  uStack_468 = CONCAT31(uStack_468._1_3_,(undefined1)uStack_540);
  uStack_478 = (undefined4)uStack_550;
  uStack_474 = uStack_550._4_4_;
  uStack_470 = (undefined4)uStack_548;
  uStack_46c = uStack_548._4_4_;
  puVar24 = (undefined *)(uStack_530 - uStack_538);
  uStack_680 = (undefined *)CONCAT44(uStack_680._4_4_,uVar18);
  if (puVar24 == (undefined *)0x0) {
    lStack_5a8 = 0;
    puVar14 = (undefined *)0x0;
  }
  else {
    if ((long)puVar24 < 0) {
      func_0x0774b760();
      param_1 = puVar24;
      goto LAB_082ec757;
    }
    lStack_5a8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar24);
    if (lStack_5a8 == 0) {
      func_0x0eec74c0(puVar24,0);
    }
    puVar14 = puVar24 + lStack_5a8;
    func_0x0eee2f00(lStack_5a8,lVar13,puVar24);
  }
  iVar9 = (int)uStack_688;
  if (iVar9 == 4) {
    if ((DAT_0f5d07d8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d07d8), iVar9 != 0)) {
      func_0x083c13a0(ppuVar22);
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0758,0xf53dab8);
      func_0x0410844d(&DAT_0f5d07d8);
    }
    plVar12 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d0758 + 4)) * 8);
    do {
      lVar13 = *plVar12;
      if (lVar13 == -1) goto LAB_082e96e8;
      plVar12 = (long *)(*(long *)(puVar10 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5d0758 + 4));
    if (plVar12 == *(long **)(puVar10 + 0x38)) {
LAB_082e96e8:
      puVar24 = &DAT_0f5d0758;
    }
    else {
      puVar24 = (undefined *)plVar12[2];
    }
    lVar13 = func_0x048b1040(ppuVar22,puVar24,(ulong)uStack_680 & 0xffffffff,1);
    if (lVar13 == 0) {
      uStack_678 = (undefined *)0x0;
      puStack_670 = (undefined4 *)0x0;
      func_0x048b10d0(&uStack_678);
      lVar17 = *(long *)((long)uStack_678 + 0x38);
      lVar13 = (long)uStack_678;
    }
    else {
      lVar17 = *(long *)(lVar13 + 0x38);
    }
    if (lVar17 == 0) {
      uStack_678 = (undefined *)0x0;
      puStack_670 = (undefined4 *)0x0;
      func_0x048b10d0(&uStack_678);
      lVar17 = (long)uStack_678;
      if (uStack_678 == (undefined *)0x0) goto LAB_082e988e;
    }
    do {
      lVar13 = lVar17;
      lVar17 = *(long *)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) == 0) {
        uStack_678 = (undefined *)0x0;
        puStack_670 = (undefined4 *)0x0;
        func_0x048b10d0(&uStack_678);
        lVar17 = (long)uStack_678;
      }
    } while (lVar17 != 0);
LAB_082e988e:
    lVar13 = *(long *)(lVar13 + 0x48);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 != (undefined8 *)0x0) goto LAB_082e98b5;
    func_0x0eec74c0(0x38,0);
    goto LAB_082e98b5;
  }
  lVar13 = lStack_5a8;
  if (iVar9 != 1) goto LAB_082e9910;
  if (DAT_0f5d07d8 == '\0') goto LAB_082ec75c;
LAB_082e961f:
  plVar12 = (long *)(*(long *)(puVar10 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0758 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082e9678;
    plVar12 = (long *)(*(long *)(puVar10 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d0758 + 4))
  ;
  if (plVar12 == *(long **)(puVar10 + 0x38)) {
LAB_082e9678:
    puVar24 = &DAT_0f5d0758;
  }
  else {
    puVar24 = (undefined *)plVar12[2];
  }
  lVar13 = func_0x048b0c90(ppuVar22,puVar24,(ulong)uStack_680 & 0xffffffff,1);
  if (lVar13 == 0) {
    uStack_678 = (undefined *)0x0;
    puStack_670 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_678);
    lVar13 = (long)uStack_678;
  }
  lVar13 = *(long *)(lVar13 + 0x58);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
LAB_082e98b5:
  *(undefined1 *)(puVar15 + 3) = (undefined1)uStack_468;
  *(undefined4 *)(puVar15 + 1) = uStack_478;
  *(undefined4 *)((long)puVar15 + 0xc) = uStack_474;
  *(undefined4 *)(puVar15 + 2) = uStack_470;
  *(undefined4 *)((long)puVar15 + 0x14) = uStack_46c;
  *puVar15 = &UNK_0f4e3aa0;
  puVar15[4] = lStack_5a8;
  puVar15[5] = puVar14;
  puVar15[6] = puVar14;
  plVar12 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar15;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
  puVar14 = (undefined *)0x0;
  iVar9 = (int)uStack_688;
  lVar13 = 0;
LAB_082e9910:
  uStack_500 = uStack_428;
  uStack_4fc = uStack_424;
  uStack_4f8 = uStack_420;
  uStack_4f4 = uStack_41c;
  uStack_510 = (long *)uStack_438;
  uStack_508 = (long *)uStack_430;
  uStack_4ec = (undefined4)uStack_680;
  uStack_4e8 = (undefined1)uStack_560;
  uStack_4e3 = (undefined3)uStack_384;
  uStack_518 = puVar10;
  iStack_4f0 = iVar9;
  func_0x083c23d0(&uStack_678,&uStack_518,&UNK_0147d41f,4);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef42d08;
  if (plStack_660 != (long *)0x0) {
    lVar17 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar17 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_048b06c0;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_048b02c0;
  puStack_6b8 = &UNK_083c2f20;
  puStack_6b0 = &UNK_083c3080;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c2660(&uStack_678);
  FUN_048b0bc0(&plStack_660);
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,(long)puVar14 - lVar13);
  }
  puStack_558 = &UNK_0f4e3aa0;
  if (uStack_538 != 0) {
    uStack_530 = uStack_538;
    thunk_FUN_0ee326a0(uStack_538,lStack_528 - uStack_538);
  }
LAB_082e9af7:
  if ((DAT_0f5d0890 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d0890), iVar9 != 0)) {
    func_0x083c3320();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0890);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082e9b50;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d0810 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_082e9b50:
    puVar10 = &DAT_0f5d0810;
    if (iRam000000000f5d0870 != -0x2b3da790) goto LAB_082e9bbd;
LAB_082e9b7b:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_082e9bbd;
    bVar25 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar17 = lVar13 + 9;
    if (bVar25) {
      lVar17 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar25) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x083c3be0(&puStack_5a0,param_1,lVar17,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar12[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_082e9b7b;
LAB_082e9bbd:
    func_0x083c3be0(&puStack_5a0,param_1,&UNK_014cf43a,0x12);
  }
  if (cStack_570 != '\0') goto LAB_082eb594;
  func_0x083c4740(&uStack_678,&puStack_5a0,&UNK_011d6fc6,6);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f116df8;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_083c0fa0;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &UNK_083bcc70;
  puStack_6b8 = &UNK_083c4cf0;
  puStack_6b0 = &UNK_083c4e50;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  puVar24 = puStack_5a0;
  uStack_98 = CONCAT44(uStack_594,uStack_598);
  uStack_90 = CONCAT44(uStack_58c,uStack_590);
  uStack_88 = uStack_588;
  uStack_84 = uStack_584;
  uStack_80 = uStack_580;
  uStack_7c = uStack_57c;
  iVar9 = (int)uStack_578;
  uVar16 = uStack_578 & 0xffffffff;
  uVar18 = uStack_578._4_4_;
  lStack_5a8 = CONCAT71(lStack_5a8._1_7_,cStack_570);
  puStack_440 = param_1;
  FUN_048b0bc0(&plStack_660);
  if ((DAT_0f5d0890 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0890), iVar8 != 0)) {
    func_0x083c3320();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0890);
  }
  puVar2 = puVar24 + 0x18;
  plVar12 = (long *)(*(long *)(puVar24 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar24 + 0x20) - *(long *)(puVar24 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082e9dd0;
    plVar12 = (long *)(*(long *)(puVar24 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(puVar24 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d0810 + 4))
  ;
  if (plVar12 == *(long **)(puVar24 + 0x38)) {
LAB_082e9dd0:
    puVar10 = &DAT_0f5d0810;
  }
  else {
    puVar10 = (undefined *)plVar12[2];
  }
  if ((1 < iVar9 - 1U) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310c02),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_560 = uVar16;
  lVar13 = func_0x048b0c90(puVar2,puVar10,uVar18,1);
  if (lVar13 == 0) {
    uStack_678 = (undefined *)0x0;
    puStack_670 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_678);
    lVar13 = (long)uStack_678;
  }
  puVar10 = (undefined *)(ulong)uVar18;
  *(undefined1 *)(*(long *)(lVar13 + 0x58) + 0xa8) = 4;
  uStack_68 = uStack_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  uStack_78 = uStack_98;
  uStack_70 = uStack_90;
  uStack_4a0 = 0xff;
  uStack_4b0 = 0xffffffffffffffff;
  uStack_4a8 = 0;
  puStack_4b8 = &UNK_0f4e3aa0;
  lStack_498 = 0;
  lStack_490 = 0;
  lStack_488 = 0;
  uStack_689 = 0;
  ppuVar21 = &puStack_4b8;
  func_0x082edcd0(ppuVar21,&uStack_689);
  lVar13 = lStack_498;
  uStack_4c8 = (undefined1)uStack_4a0;
  uStack_4d8 = (undefined4)uStack_4b0;
  uStack_4d4 = uStack_4b0._4_4_;
  uStack_4d0 = (undefined4)uStack_4a8;
  uStack_4cc = uStack_4a8._4_4_;
  puVar14 = (undefined *)(lStack_490 - lStack_498);
  if (puVar14 == (undefined *)0x0) {
    uStack_688 = 0;
    uStack_680 = (undefined *)0x0;
    iVar9 = (int)uStack_560;
    goto joined_r0x082ea044;
  }
  param_1 = puVar24;
  if ((long)puVar14 < 0) {
LAB_082ec757:
    func_0x0774b760();
    ppuVar22 = ppuVar21;
LAB_082ec75c:
    iVar9 = func_0x04108328(&DAT_0f5d07d8);
    if (iVar9 != 0) {
      func_0x083c13a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0758,0xf53dab8);
      func_0x0410844d(&DAT_0f5d07d8);
    }
    goto LAB_082e961f;
  }
  uVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar14);
  if (uVar16 == 0) {
    func_0x0eec74c0(puVar14,0);
  }
  uStack_680 = puVar14 + uVar16;
  uStack_688 = uVar16;
  func_0x0eee2f00(uVar16,lVar13,puVar14);
  iVar9 = (int)uStack_560;
joined_r0x082ea044:
  if (iVar9 == 4) {
    if ((DAT_0f5d0890 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d0890), iVar9 != 0)) {
      func_0x083c3320();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0890);
    }
    plVar12 = (long *)(*(long *)(puVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar24 + 0x20) - *(long *)(puVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
    iVar9 = (int)uStack_560;
    do {
      lVar13 = *plVar12;
      if (lVar13 == -1) goto LAB_082ea0b8;
      plVar12 = (long *)(*(long *)(puVar24 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(puVar24 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5d0810 + 4));
    if (plVar12 == *(long **)(puVar24 + 0x38)) {
LAB_082ea0b8:
      puVar14 = &DAT_0f5d0810;
    }
    else {
      puVar14 = (undefined *)plVar12[2];
    }
    lVar13 = func_0x048b1040(puVar2,puVar14,puVar10,1);
    if (lVar13 == 0) {
      uStack_678 = (undefined *)0x0;
      puStack_670 = (undefined4 *)0x0;
      func_0x048b10d0(&uStack_678);
      lVar17 = *(long *)((long)uStack_678 + 0x38);
      lVar13 = (long)uStack_678;
      if (lVar17 == 0) goto LAB_082ea1a6;
LAB_082ea1cb:
      do {
        lVar13 = lVar17;
        lVar17 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) == 0) {
          uStack_678 = (undefined *)0x0;
          puStack_670 = (undefined4 *)0x0;
          func_0x048b10d0(&uStack_678);
          lVar17 = (long)uStack_678;
        }
      } while (lVar17 != 0);
    }
    else {
      lVar17 = *(long *)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) != 0) goto LAB_082ea1cb;
LAB_082ea1a6:
      uStack_678 = (undefined *)0x0;
      puStack_670 = (undefined4 *)0x0;
      func_0x048b10d0(&uStack_678);
      lVar17 = (long)uStack_678;
      if (uStack_678 != (undefined *)0x0) goto LAB_082ea1cb;
    }
    lVar13 = *(long *)(lVar13 + 0x48);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
LAB_082ea235:
    *(undefined1 *)(puVar15 + 3) = uStack_4c8;
    *(undefined4 *)(puVar15 + 1) = uStack_4d8;
    *(undefined4 *)((long)puVar15 + 0xc) = uStack_4d4;
    *(undefined4 *)(puVar15 + 2) = uStack_4d0;
    *(undefined4 *)((long)puVar15 + 0x14) = uStack_4cc;
    *puVar15 = &UNK_0f4e3aa0;
    puVar15[4] = uStack_688;
    puVar15[5] = uStack_680;
    puVar15[6] = uStack_680;
    plVar12 = *(long **)(lVar13 + 8);
    *(undefined8 **)(lVar13 + 8) = puVar15;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
    uStack_688 = 0;
    uStack_680 = (undefined *)0x0;
  }
  else if (iVar9 == 1) {
    if ((DAT_0f5d0890 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0890), iVar8 != 0)) {
      func_0x083c3320();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0890);
    }
    plVar12 = (long *)(*(long *)(puVar24 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar24 + 0x20) - *(long *)(puVar24 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
    do {
      lVar13 = *plVar12;
      if (lVar13 == -1) goto LAB_082ea018;
      plVar12 = (long *)(*(long *)(puVar24 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(puVar24 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5d0810 + 4));
    if (plVar12 == *(long **)(puVar24 + 0x38)) {
LAB_082ea018:
      puVar14 = &DAT_0f5d0810;
    }
    else {
      puVar14 = (undefined *)plVar12[2];
    }
    lVar13 = func_0x048b0c90(puVar2,puVar14,puVar10,1);
    if (lVar13 == 0) {
      uStack_678 = (undefined *)0x0;
      puStack_670 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_678);
      lVar13 = (long)uStack_678;
    }
    lVar13 = *(long *)(lVar13 + 0x58);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    goto LAB_082ea235;
  }
  uStack_3e8 = uStack_68;
  uStack_3e4 = uStack_64;
  uStack_3e0 = uStack_60;
  uStack_3dc = uStack_5c;
  uStack_3f8 = (undefined4)uStack_78;
  uStack_3f4 = uStack_78._4_4_;
  uStack_3f0 = (undefined4)uStack_70;
  uStack_3ec = uStack_70._4_4_;
  uStack_400 = puVar24;
  uStack_3d4 = uVar18;
  uStack_3d0 = (undefined1)lStack_5a8;
  iStack_3d8 = iVar9;
  func_0x083c4740(&uStack_678,&uStack_400,&UNK_0147d41f,4);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef42d08;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_048b06c0;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_048b02c0;
  puStack_6b8 = &UNK_083c5020;
  puStack_6b0 = &UNK_083c5180;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_1a8 = uStack_3d0;
  uStack_1b8 = uStack_3e0;
  uStack_1b4 = uStack_3dc;
  iStack_1b0 = iStack_3d8;
  uStack_1ac = uStack_3d4;
  uStack_1c8 = uStack_3f0;
  uStack_1c4 = uStack_3ec;
  uStack_1c0 = uStack_3e8;
  uStack_1bc = uStack_3e4;
  uStack_1d8 = (undefined4)uStack_400;
  uStack_1d4 = uStack_400._4_4_;
  uStack_1d0 = uStack_3f8;
  uStack_1cc = uStack_3f4;
  FUN_048b0bc0(&plStack_660);
  uStack_2d8 = uStack_1d8;
  uStack_2d4 = uStack_1d4;
  uStack_2d0 = uStack_1d0;
  uStack_2cc = uStack_1cc;
  uStack_2c8 = uStack_1c8;
  uStack_2c4 = uStack_1c4;
  uStack_2c0 = uStack_1c0;
  uStack_2bc = uStack_1bc;
  uStack_2b8 = uStack_1b8;
  uStack_2b4 = uStack_1b4;
  iStack_2b0 = iStack_1b0;
  uStack_2ac = uStack_1ac;
  uStack_2a8 = CONCAT71(uStack_1a7,uStack_1a8);
  func_0x083c4740(&uStack_678,&uStack_2d8,&UNK_013b0d69,0xf);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f0e95d0;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_077e7de0;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_077e7b00;
  puStack_6b8 = &UNK_083c5360;
  puStack_6b0 = &UNK_083c54c0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_168 = (undefined1)uStack_2a8;
  uStack_178 = uStack_2b8;
  uStack_174 = uStack_2b4;
  iStack_170 = iStack_2b0;
  uStack_16c = uStack_2ac;
  uStack_188 = uStack_2c8;
  uStack_184 = uStack_2c4;
  uStack_180 = uStack_2c0;
  uStack_17c = uStack_2bc;
  uStack_198 = uStack_2d8;
  uStack_194 = uStack_2d4;
  uStack_190 = uStack_2d0;
  uStack_18c = uStack_2cc;
  FUN_048b0bc0(&plStack_660);
  uStack_298 = uStack_198;
  uStack_294 = uStack_194;
  uStack_290 = uStack_190;
  uStack_28c = uStack_18c;
  uStack_288 = uStack_188;
  uStack_284 = uStack_184;
  uStack_280 = uStack_180;
  uStack_27c = uStack_17c;
  uStack_278 = uStack_178;
  uStack_274 = uStack_174;
  iStack_270 = iStack_170;
  uStack_26c = uStack_16c;
  uStack_268 = CONCAT71(uStack_167,uStack_168);
  func_0x083c4740(&uStack_678,&uStack_298,&UNK_011a18c3,0xb);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef44b00;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_048b3f30;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_048b2190;
  puStack_6b8 = &UNK_083c56a0;
  puStack_6b0 = &UNK_083c5870;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_128 = (undefined1)uStack_268;
  uStack_138 = uStack_278;
  uStack_134 = uStack_274;
  iStack_130 = iStack_270;
  uStack_12c = uStack_26c;
  uStack_148 = uStack_288;
  uStack_144 = uStack_284;
  uStack_140 = uStack_280;
  uStack_13c = uStack_27c;
  uStack_158 = uStack_298;
  uStack_154 = uStack_294;
  uStack_150 = uStack_290;
  uStack_14c = uStack_28c;
  FUN_048b0bc0(&plStack_660);
  uStack_258 = uStack_158;
  uStack_254 = uStack_154;
  uStack_250 = uStack_150;
  uStack_24c = uStack_14c;
  uStack_248 = uStack_148;
  uStack_244 = uStack_144;
  uStack_240 = uStack_140;
  uStack_23c = uStack_13c;
  uStack_238 = uStack_138;
  uStack_234 = uStack_134;
  iStack_230 = iStack_130;
  uStack_22c = uStack_12c;
  uStack_228 = CONCAT71(uStack_127,uStack_128);
  func_0x083c4740(&uStack_678,&uStack_258,&UNK_012788da,8);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef44b00;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_048b3f30;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_048b2190;
  puStack_6b8 = &UNK_083c5a50;
  puStack_6b0 = &UNK_083c5c20;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_e8 = (undefined1)uStack_228;
  uStack_f8 = uStack_238;
  uStack_f4 = uStack_234;
  iStack_f0 = iStack_230;
  uStack_ec = uStack_22c;
  uStack_108 = uStack_248;
  uStack_104 = uStack_244;
  uStack_100 = uStack_240;
  uStack_fc = uStack_23c;
  uStack_118 = uStack_258;
  uStack_114 = uStack_254;
  uStack_110 = uStack_250;
  uStack_10c = uStack_24c;
  FUN_048b0bc0(&plStack_660);
  uStack_218 = uStack_118;
  uStack_214 = uStack_114;
  uStack_210 = uStack_110;
  uStack_20c = uStack_10c;
  uStack_208 = uStack_108;
  uStack_204 = uStack_104;
  uStack_200 = uStack_100;
  uStack_1fc = uStack_fc;
  uStack_1f8 = uStack_f8;
  uStack_1f4 = uStack_f4;
  iStack_1f0 = iStack_f0;
  uStack_1ec = uStack_ec;
  uStack_1e8 = CONCAT71(uStack_e7,uStack_e8);
  func_0x083c4740(&uStack_678,&uStack_218,&UNK_011a3689,0x12);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef44b00;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_048b3f30;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_048b2190;
  puStack_6b8 = &UNK_083c5e00;
  puStack_6b0 = &UNK_083c5fd0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_a8 = (undefined1)uStack_1e8;
  uStack_b8 = uStack_1f8;
  uStack_b4 = uStack_1f4;
  iStack_b0 = iStack_1f0;
  uStack_ac = uStack_1ec;
  uStack_c8 = uStack_208;
  uStack_c4 = uStack_204;
  uStack_c0 = uStack_200;
  uStack_bc = uStack_1fc;
  uStack_d8 = uStack_218;
  uStack_d4 = uStack_214;
  uStack_d0 = uStack_210;
  uStack_cc = uStack_20c;
  FUN_048b0bc0(&plStack_660);
  uStack_3c8 = uStack_d8;
  uStack_3c4 = uStack_d4;
  uStack_3c0 = uStack_d0;
  uStack_3bc = uStack_cc;
  uStack_3b8 = uStack_c8;
  uStack_3b4 = uStack_c4;
  uStack_3b0 = uStack_c0;
  uStack_3ac = uStack_bc;
  uStack_3a8 = uStack_b8;
  uStack_3a4 = uStack_b4;
  iStack_3a0 = iStack_b0;
  uStack_39c = uStack_ac;
  uStack_398 = CONCAT71(uStack_a7,uStack_a8);
  func_0x083c4740(&uStack_678,&uStack_3c8,&UNK_01397b69,0xe);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f0eabc8;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_078d50d0;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_078d0d90;
  puStack_6b8 = &UNK_083c61b0;
  puStack_6b0 = &UNK_083c6310;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uVar18 = uStack_39c;
  iVar9 = iStack_3a0;
  lVar13 = CONCAT44(uStack_3c4,uStack_3c8);
  uStack_58 = CONCAT44(uStack_3bc,uStack_3c0);
  uStack_50 = CONCAT44(uStack_3b4,uStack_3b8);
  uStack_48 = uStack_3b0;
  uStack_44 = uStack_3ac;
  uStack_40 = uStack_3a8;
  uStack_3c = uStack_3a4;
  uVar6 = (undefined1)uStack_398;
  FUN_048b0bc0(&plStack_660);
  if ((DAT_0f5d0890 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0890), iVar8 != 0)) {
    func_0x083c3320();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0810,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0890);
  }
  plVar12 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d0810 + 4)) * 8);
  do {
    lVar17 = *plVar12;
    if (lVar17 == -1) goto LAB_082ead10;
    plVar12 = (long *)(*(long *)(lVar13 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5d0810 + 4));
  if (plVar12 == *(long **)(lVar13 + 0x38)) {
LAB_082ead10:
    puVar10 = &DAT_0f5d0810;
  }
  else {
    puVar10 = (undefined *)plVar12[2];
  }
  if ((1 < iVar9 - 1U) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310c02),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar17 = func_0x048b0c90(lVar13 + 0x18,puVar10,uVar18,1);
  if (lVar17 == 0) {
    uStack_678 = (undefined *)0x0;
    puStack_670 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_678);
    lVar17 = (long)uStack_678;
  }
  *(undefined1 *)(*(long *)(lVar17 + 0x58) + 0xa8) = 4;
  uStack_348 = (undefined4)uStack_58;
  uStack_344 = uStack_58._4_4_;
  uStack_340 = (undefined4)uStack_50;
  uStack_33c = uStack_50._4_4_;
  uStack_338 = uStack_48;
  uStack_334 = uStack_44;
  uStack_330 = uStack_40;
  uStack_32c = uStack_3c;
  iStack_328 = iVar9;
  uStack_324 = uVar18;
  uStack_320 = uVar6;
  uStack_350 = lVar13;
  func_0x083c4740(&uStack_678,&uStack_350,&UNK_0120d8e0,0xf);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  param_1 = puStack_440;
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f10aa08;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_0819a580;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_0793d1e0;
  puStack_6b8 = &UNK_083c6770;
  puStack_6b0 = &UNK_083c6920;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_2e8 = uStack_320;
  uStack_2f8 = uStack_330;
  uStack_2f4 = uStack_32c;
  iStack_2f0 = iStack_328;
  uStack_2ec = uStack_324;
  uStack_308 = uStack_340;
  uStack_304 = uStack_33c;
  uStack_300 = uStack_338;
  uStack_2fc = uStack_334;
  uStack_318 = (undefined4)uStack_350;
  uStack_314 = uStack_350._4_4_;
  uStack_310 = uStack_348;
  uStack_30c = uStack_344;
  FUN_048b0bc0(&plStack_660);
  uStack_388 = uStack_318;
  uStack_384 = uStack_314;
  uStack_380 = uStack_310;
  uStack_37c = uStack_30c;
  uStack_378 = uStack_308;
  uStack_374 = uStack_304;
  uStack_370 = uStack_300;
  uStack_36c = uStack_2fc;
  uStack_368 = uStack_2f8;
  uStack_364 = uStack_2f4;
  iStack_360 = iStack_2f0;
  uStack_35c = uStack_2ec;
  uStack_358 = CONCAT71(uStack_2e7,uStack_2e8);
  func_0x083c4740(&uStack_678,&uStack_388,&UNK_011be4df,10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ef8;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_04906f70;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_04906c50;
  puStack_6b8 = &UNK_083c6b00;
  puStack_6b0 = &UNK_083c6c60;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_448 = (undefined1)uStack_358;
  uStack_458 = uStack_368;
  uStack_454 = uStack_364;
  iStack_450 = iStack_360;
  uStack_44c = uStack_35c;
  uStack_468 = uStack_378;
  uStack_464 = uStack_374;
  uStack_460 = uStack_370;
  uStack_45c = uStack_36c;
  uStack_478 = uStack_388;
  uStack_474 = uStack_384;
  uStack_470 = uStack_380;
  uStack_46c = uStack_37c;
  FUN_048b0bc0(&plStack_660);
  uStack_438 = (undefined *)CONCAT44(uStack_474,uStack_478);
  uStack_430 = (undefined *)CONCAT44(uStack_46c,uStack_470);
  uStack_428 = uStack_468;
  uStack_424 = uStack_464;
  uStack_420 = uStack_460;
  uStack_41c = uStack_45c;
  uStack_418 = uStack_458;
  uStack_414 = uStack_454;
  iStack_410 = iStack_450;
  uStack_40c = uStack_44c;
  uStack_408 = CONCAT71(uStack_447,uStack_448);
  func_0x083c4740(&uStack_678,&uStack_438,&UNK_013e50f7,7);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ef8;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_04906f70;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_04906c50;
  puStack_6b8 = &UNK_083c6e40;
  puStack_6b0 = &UNK_083c6fa0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  lStack_528 = CONCAT71(lStack_528._1_7_,(undefined1)uStack_408);
  uStack_538 = CONCAT44(uStack_414,uStack_418);
  uStack_530 = CONCAT44(uStack_40c,iStack_410);
  uStack_548 = (undefined *)CONCAT44(uStack_424,uStack_428);
  uStack_540 = CONCAT44(uStack_41c,uStack_420);
  puStack_558 = uStack_438;
  uStack_550 = (long *)uStack_430;
  FUN_048b0bc0(&plStack_660);
  func_0x083c4740(&uStack_678,&puStack_558,&UNK_011a369c,0xc);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ef8;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_04906f70;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_04906c50;
  puStack_6b8 = &UNK_083c7180;
  puStack_6b0 = &UNK_083c72e0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  uStack_4e8 = (undefined1)lStack_528;
  uStack_4f8 = (undefined4)uStack_538;
  uStack_4f4 = uStack_538._4_4_;
  iStack_4f0 = (int)uStack_530;
  uStack_4ec = uStack_530._4_4_;
  uStack_508 = (long *)uStack_548;
  uStack_500 = (undefined4)uStack_540;
  uStack_4fc = uStack_540._4_4_;
  uStack_518 = puStack_558;
  uStack_510 = uStack_550;
  FUN_048b0bc0(&plStack_660);
  func_0x083c4740(&uStack_678,&uStack_518,&UNK_013cad4a,0xc);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f011c18;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_05dbc210;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &SUB_05dbbf30;
  puStack_6b8 = &UNK_083c74c0;
  puStack_6b0 = &UNK_083c7620;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x083c49f0(&uStack_678);
  FUN_048b0bc0(&plStack_660);
  if (uStack_688 != 0) {
    thunk_FUN_0ee326a0(uStack_688,(long)uStack_680 - uStack_688);
  }
  puStack_4b8 = &UNK_0f4e3aa0;
  if (lStack_498 != 0) {
    lStack_490 = lStack_498;
    thunk_FUN_0ee326a0(lStack_498,lStack_488 - lStack_498);
  }
LAB_082eb594:
  if ((DAT_0f5d05b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d05b0), iVar9 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082eb5f0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_082eb5f0:
    puVar10 = &DAT_0f5d0530;
    if (iRam000000000f5d0590 != -0x2b3da790) goto LAB_082eb65d;
LAB_082eb61b:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_082eb65d;
    bVar25 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar17 = lVar13 + 9;
    if (bVar25) {
      lVar17 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar25) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x083c7800(&puStack_5a0,param_1,lVar17,uVar16);
    puVar10 = puStack_5a0;
  }
  else {
    puVar10 = (undefined *)plVar12[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_082eb61b;
LAB_082eb65d:
    func_0x083c7800(&puStack_5a0,param_1,&UNK_011f38dd,0x17);
    puVar10 = puStack_5a0;
  }
  if (cStack_570 != '\0') {
    return;
  }
  puStack_5a0 = puVar10;
  if ((DAT_0f5d08e0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d08e0), iVar9 != 0)) {
    func_0x083c8550();
    func_0x0410844d(&DAT_0f5d08e0);
  }
  if ((DAT_0f5d08e0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d08e0), iVar9 != 0)) {
    func_0x083c8550();
    func_0x0410844d(&DAT_0f5d08e0);
  }
  uStack_678 = &DAT_0f5d08c8;
  puStack_670 = (undefined4 *)CONCAT44(puStack_670._4_4_,_DAT_0f5d08cc);
  uStack_668 = 0;
  plStack_660 = (long *)CONCAT44(plStack_660._4_4_,0x80);
  lStack_658 = 0xa0;
  uStack_650 = &UNK_083c8490;
  puStack_648 = &UNK_083c85d0;
  lStack_640 = 0;
  puStack_638 = &UNK_083c8c40;
  uStack_630 = 2;
  puStack_628 = &UNK_05e26240;
  puStack_620 = &UNK_083c8cd0;
  uStack_618 = (ulong)uStack_618._4_4_ << 0x20;
  lStack_610 = 0;
  plStack_608 = (long *)0x0;
  lStack_600 = 0;
  FUN_048aee30(&uStack_6f8,puVar10 + 0x18,&uStack_678,0x38b50978);
  lVar13 = lStack_600;
  lStack_600 = 0;
  if (lVar13 != 0) {
    func_0x048ae940(lVar13);
    thunk_FUN_0ee326a0(lVar13,0x78);
  }
  plVar12 = plStack_608;
  if (plStack_608 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_608 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_608 + 0x10))(plStack_608);
      func_0x0412c2d0(plVar12);
    }
  }
  if (uStack_6e0._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)((long)plStack_6e8 + 0x78) + 0x60);
    iVar9 = *piVar11;
    while (iVar9 != (int)uStack_6e0) {
      piVar11 = piVar11 + 0x16;
      iVar9 = *piVar11;
    }
    lVar13 = *(long *)(piVar11 + 0xc);
    while ((long *)lVar13 != plStack_6f0) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar13 = *(long *)(piVar11 + 0xc);
    }
LAB_082eb83f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 1;
  }
  else {
    if (uStack_6e0._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)((long)plStack_6e8 + 0x78) + 0x48);
      iVar9 = *piVar11;
      while (iVar9 != (int)uStack_6e0) {
        piVar11 = piVar11 + 0x1a;
        iVar9 = *piVar11;
      }
      goto LAB_082eb83f;
    }
    if (uStack_6e0._4_4_ == 0) {
      *(uint *)((long)plStack_6e8 + 0x18U) = *(uint *)((long)plStack_6e8 + 0x18U) | 0x10000;
    }
  }
  uStack_668 = (ulong)plStack_6e8;
  plStack_660 = uStack_6e0;
  uStack_678 = (undefined *)CONCAT44(uStack_6f4,uStack_6f8);
  puStack_670 = (undefined4 *)plStack_6f0;
  if ((DAT_0f5af3d0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5af3d0), iVar9 != 0)) {
    func_0x07786a90(0xf5af3b8);
    func_0x0410844d(&DAT_0f5af3d0);
  }
  uStack_518 = (undefined *)CONCAT44(uStack_518._4_4_,_DAT_0f5af3bc);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f0e9768;
  uStack_510 = plVar12 + 3;
  plVar12[3] = (long)&UNK_083bcbb0;
  plVar12[4] = 0x6e6f697463410c;
  plVar12[5] = 0;
  plVar12[6] = 0;
  puStack_558 = (undefined *)0x0;
  uStack_550 = (long *)0x0;
  uStack_508 = plVar12;
  func_0x048afd20(&uStack_678,&uStack_518);
  plVar12 = uStack_508;
  if (uStack_508 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_508 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_508 + 0x10))(uStack_508);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = uStack_550;
  if (uStack_550 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_550 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_550 + 0x10))(uStack_550);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f5d0518 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d0518), iVar9 != 0)) {
    func_0x083ba330();
    func_0x0410844d(&DAT_0f5d0518);
  }
  puVar10 = puStack_5a0;
  uStack_578 = 0xdcaca29300000001;
  if ((DAT_0f5d05b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d05b0), iVar9 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  puStack_670 = (undefined4 *)(puVar10 + 0x18);
  plVar12 = (long *)(*(long *)(puVar10 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082eb9f0;
    plVar12 = (long *)(*(long *)(puVar10 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5d0530 + 4))
  ;
  if (plVar12 == *(long **)(puVar10 + 0x38)) {
LAB_082eb9f0:
    uStack_678 = &DAT_0f5d0530;
  }
  else {
    uStack_678 = (undefined *)plVar12[2];
  }
  func_0x0ed621a0(&uStack_678,uStack_578._4_4_);
  uStack_678 = (undefined *)((ulong)uStack_678 & 0xffffffffffff0000);
  uStack_668 = CONCAT44(uStack_668._4_4_,uStack_578._4_4_);
  plStack_660 = (long *)0x0;
  lStack_658 = 0;
  uStack_650 = (undefined *)0x0;
  puStack_648 = (undefined *)0x0;
  lStack_640 = 0;
  puStack_638 = (undefined *)0x73656972746e450e;
  uStack_630 = uStack_630 & 0xffffffffffffff00;
  puStack_620 = (undefined *)0x0;
  uStack_618 = 0;
  lStack_610 = 0;
  plStack_608 = (long *)0x0;
  lStack_600 = 0;
  lStack_5f8 = 0;
  uStack_5f0 = 0x3f600000;
  puStack_670 = &uStack_598;
  func_0x048afb10(&puStack_620,8);
  uStack_5c8 = 0;
  lStack_5c0 = 0;
  lStack_5d8 = 0;
  uStack_5d0 = 0;
  lStack_5e8 = 0;
  lStack_5e0 = 0;
  uStack_5b8 = 0xff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  uStack_5b0 = uStack_5b0 & 0xffffff00;
  uStack_5ac = 0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f116fd0;
  if (plStack_660 != (long *)0x0) {
    lVar13 = *plStack_660;
    plStack_660 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = plStack_660;
  }
  plStack_660 = plVar12;
  uStack_6f8 = (uint)uStack_668;
  plStack_6f0 = (long *)0x0;
  plStack_6e8 = (long *)((ulong)plStack_6e8 & 0xffffffff00000000);
  uStack_6e0 = (long *)0x1;
  uStack_6d8 = 0;
  puStack_6d0 = &UNK_083cf960;
  puStack_6c8 = &SUB_048b06d0;
  puStack_6c0 = &UNK_083ce360;
  puStack_6b8 = &UNK_083cfa20;
  puStack_6b0 = &UNK_083cfc60;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_698 = (long *)0x0;
  func_0x048b05a0(puStack_670,&uStack_6f8);
  plVar12 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_698 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar12);
    }
  }
  puVar4 = puStack_670;
  if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_6f8 = _DAT_0f550a0c;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar13 = lStack_658;
  plVar1 = plStack_660;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0ef439d0;
  plStack_6f0 = plVar12 + 3;
  plStack_660 = (long *)0x0;
  lStack_658 = 0;
  plVar12[3] = (long)plVar1;
  plVar12[4] = lVar13;
  plVar12[7] = lStack_640;
  plVar12[5] = (long)uStack_650;
  plVar12[6] = (long)puStack_648;
  uStack_650 = (undefined *)0x0;
  puStack_648 = (undefined *)0x0;
  lStack_640 = 0;
  plVar12[10] = (long)puStack_628;
  plVar12[8] = (long)puStack_638;
  plVar12[9] = uStack_630;
  puStack_638 = (undefined *)0x0;
  uStack_630 = 0;
  puStack_628 = (undefined *)0x0;
  plVar12[0xb] = (long)puStack_620;
  plVar12[0xc] = uStack_618;
  plVar12[0xd] = lStack_610;
  puStack_620 = (undefined *)0x0;
  uStack_618 = 0;
  lStack_610 = 0;
  plVar12[0xe] = (long)plStack_608;
  plVar12[0xf] = lStack_600;
  plVar12[0x10] = lStack_5f8;
  plStack_608 = (long *)0x0;
  lStack_600 = 0;
  lStack_5f8 = 0;
  *(undefined4 *)(plVar12 + 0x11) = uStack_5f0;
  plVar12[0x12] = lStack_5e8;
  plVar12[0x13] = lStack_5e0;
  plVar12[0x14] = lStack_5d8;
  lStack_5e8 = 0;
  lStack_5e0 = 0;
  lStack_5d8 = 0;
  plVar12[0x17] = lStack_5c0;
  *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_5d0;
  *(undefined4 *)((long)plVar12 + 0xac) = uStack_5d0._4_4_;
  *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_5c8;
  *(undefined4 *)((long)plVar12 + 0xb4) = uStack_5c8._4_4_;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  lStack_5c0 = 0;
  *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_5ac,CONCAT43(uStack_5b0,uStack_5b4._1_3_));
  plVar12[0x18] = CONCAT44(uStack_5b4,CONCAT22(uStack_5b6,uStack_5b8));
  uStack_518 = (undefined *)0x0;
  uStack_510 = (long *)0x0;
  plStack_6e8 = plVar12;
  func_0x048afd20(puVar4,&uStack_6f8);
  plVar12 = plStack_6e8;
  if (plStack_6e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_6e8 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_6e8 + 0x10))(plStack_6e8);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = uStack_510;
  if (uStack_510 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_510 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_510 + 0x10))(uStack_510);
      func_0x0412c2d0(plVar12);
    }
  }
  lVar13 = *(long *)(puVar4 + 4);
  iVar9 = puVar4[7];
  if (iVar9 == 2) {
    piVar11 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
    iVar9 = *piVar11;
    while (iVar9 != puVar4[6]) {
      piVar11 = piVar11 + 0x16;
      iVar9 = *piVar11;
    }
    for (; *(long *)(piVar11 + 0xc) != *(long *)(puVar4 + 2); piVar11 = *(int **)(piVar11 + 0xe)) {
    }
LAB_082ebf1a:
    piVar11[4] = piVar11[4] | (int)uStack_678 << 0x10;
  }
  else {
    if (iVar9 == 1) {
      piVar11 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
      iVar9 = *piVar11;
      while (iVar9 != puVar4[6]) {
        piVar11 = piVar11 + 0x1a;
        iVar9 = *piVar11;
      }
      goto LAB_082ebf1a;
    }
    if (iVar9 == 0) {
      *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)uStack_678 << 0x10;
    }
  }
  FUN_048b0bc0(&plStack_660);
  uVar5 = uStack_578._4_4_;
  if ((int)uStack_578 != 4) {
    if ((int)uStack_578 != 1) {
      return;
    }
    if ((DAT_0f5d05b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d05b0), iVar9 != 0)) {
      func_0x083bae90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
      func_0x0410844d(&DAT_0f5d05b0);
    }
    plVar12 = (long *)(*(long *)(puStack_5a0 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puStack_5a0 + 0x20) -
                                           *(long *)(puStack_5a0 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d0530 + 4)) * 8);
    do {
      lVar13 = *plVar12;
      if (lVar13 == -1) goto LAB_082ebfb9;
      plVar12 = (long *)(*(long *)(puStack_5a0 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(puStack_5a0 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5d0530 + 4));
    if (plVar12 == *(long **)(puStack_5a0 + 0x38)) {
LAB_082ebfb9:
      puVar10 = &DAT_0f5d0530;
    }
    else {
      puVar10 = (undefined *)plVar12[2];
    }
    uVar16 = func_0x048b0c90(puStack_5a0 + 0x18,puVar10,uVar5,1);
    if (uVar16 == 0) {
      uStack_678 = (undefined *)0x0;
      puStack_670 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_678);
      uVar16 = (ulong)uStack_678;
    }
    lVar13 = *(long *)(uVar16 + 0x58);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_082ec1a4;
  }
  if ((DAT_0f5d05b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5d05b0), iVar9 != 0)) {
    func_0x083bae90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0530,0xf53dab8);
    func_0x0410844d(&DAT_0f5d05b0);
  }
  plVar12 = (long *)(*(long *)(puStack_5a0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puStack_5a0 + 0x20) -
                                         *(long *)(puStack_5a0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5d0530 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_082ec039;
    plVar12 = (long *)(*(long *)(puStack_5a0 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(puStack_5a0 + 0x30) + 8 + lVar13 * 0x18) !=
           *(uint *)(_DAT_0f5d0530 + 4));
  if (plVar12 == *(long **)(puStack_5a0 + 0x38)) {
LAB_082ec039:
    puVar10 = &DAT_0f5d0530;
  }
  else {
    puVar10 = (undefined *)plVar12[2];
  }
  uVar16 = func_0x048b1040(puStack_5a0 + 0x18,puVar10,uVar5,1);
  if (uVar16 == 0) {
    uStack_678 = (undefined *)0x0;
    puStack_670 = (undefined4 *)0x0;
    func_0x048b10d0(&uStack_678);
    uVar20 = *(ulong *)((long)uStack_678 + 0x38);
    uVar16 = (ulong)uStack_678;
    if (uVar20 == 0) goto LAB_082ec119;
LAB_082ec13e:
    do {
      uVar16 = uVar20;
      uVar20 = *(ulong *)(uVar16 + 0x38);
      if (*(ulong *)(uVar16 + 0x38) == 0) {
        uStack_678 = (undefined *)0x0;
        puStack_670 = (undefined4 *)0x0;
        func_0x048b10d0(&uStack_678);
        uVar20 = (ulong)uStack_678;
      }
    } while (uVar20 != 0);
  }
  else {
    uVar20 = *(ulong *)(uVar16 + 0x38);
    if (*(ulong *)(uVar16 + 0x38) != 0) goto LAB_082ec13e;
LAB_082ec119:
    uStack_678 = (undefined *)0x0;
    puStack_670 = (undefined4 *)0x0;
    func_0x048b10d0(&uStack_678);
    uVar20 = (ulong)uStack_678;
    if (uStack_678 != (undefined *)0x0) goto LAB_082ec13e;
  }
  lVar13 = *(long *)(uVar16 + 0x48);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_082ec1a4:
  puVar15[1] = 1000;
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0xff;
  *puVar15 = &UNK_0f4e3cf0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  *(undefined8 *)((long)puVar15 + 0x29) = 0;
  *(undefined8 *)((long)puVar15 + 0x31) = 0;
  plVar12 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar15;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
  return;
}


